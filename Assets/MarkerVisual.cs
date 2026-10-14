using System.Collections.Generic;
using UnityEngine;

// Builds a Sharpie-style marker out of separate parts, each with its own
// material, so the cap, band and chisel nib can match the pen's ink color.
//
// Put this on the Pen (next to WhiteboardPen), then use the component's
// "Build Marker" menu item in the Inspector. Run it again after changing
// the Ink Color or Body Color to rebuild the parts.
[RequireComponent(typeof(WhiteboardPen))]
public class MarkerVisual : MonoBehaviour
{
    [Tooltip("Color of the barrel and collar. The cap, band and nib use the pen's Ink Color.")]
    public Color bodyColor = new Color(0.12f, 0.12f, 0.12f);

    const string RootName = "Marker Visual";

    // Marker layout along the pen's forward (Z) axis, in meters.
    const float BackEnd = -0.07f;
    const float BarrelEnd = 0.03f;
    const float CollarEnd = 0.042f;
    const float NibLength = 0.012f;

    [ContextMenu("Build Marker")]
    public void Build()
    {
        WhiteboardPen pen = GetComponent<WhiteboardPen>();

        // Remove the parts from any previous build.
        Transform old = transform.Find(RootName);
        if (old != null) DestroyImmediate(old.gameObject);

        Transform root = new GameObject(RootName).transform;
        root.SetParent(transform, false);

        Material body = MakeMaterial(bodyColor, "Marker Body");
        Material ink = MakeMaterial(pen.inkColor, "Marker Ink");

        // The barrel keeps its collider so the marker can still be grabbed.
        AddCylinder(root, "Barrel", 0.0100f, BackEnd, BarrelEnd, body, keepCollider: true);
        AddCylinder(root, "Cap", 0.0105f, BackEnd, -0.045f, ink, keepCollider: false);
        AddCylinder(root, "Band", 0.0105f, 0.018f, 0.026f, ink, keepCollider: false);
        AddCylinder(root, "Collar", 0.0065f, BarrelEnd, CollarEnd, body, keepCollider: false);
        AddChiselNib(root, ink, CollarEnd, 0.0055f, 0.0035f, NibLength);

        // Pocket clip on the cap. Its collider also stops the marker rolling away.
        AddBox(root, "Clip", new Vector3(0f, 0.0125f, -0.04f), new Vector3(0.004f, 0.004f, 0.03f), ink);

        // Physics: catch fast drops and throws so the marker can't slip through
        // thin surfaces, and let it settle instead of rolling for ages.
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            rb.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
            rb.angularDamping = 1.5f;
#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(rb);
#endif
        }

        // Move the drawing tip to the front of the nib.
        if (pen.tip == null)
        {
            pen.tip = new GameObject("Tip").transform;
            pen.tip.SetParent(transform, false);
        }
        pen.tip.localPosition = new Vector3(0f, 0f, CollarEnd + NibLength);
        pen.tip.localRotation = Quaternion.identity;

#if UNITY_EDITOR
        UnityEditor.EditorUtility.SetDirty(pen);
        if (!Application.isPlaying)
            UnityEditor.SceneManagement.EditorSceneManager.MarkSceneDirty(gameObject.scene);
#endif
    }

    // Copies the project's default material (so it suits URP or Built-in)
    // and tints it.
    static Material MakeMaterial(Color color, string name)
    {
        GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
        Material mat = new Material(temp.GetComponent<Renderer>().sharedMaterial) { name = name };
        DestroyImmediate(temp);
        mat.color = color;
        return mat;
    }

    // A cylinder lying along Z, running from zStart to zEnd.
    static void AddCylinder(Transform parent, string name, float radius,
                            float zStart, float zEnd, Material mat, bool keepCollider)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localRotation = Quaternion.Euler(90f, 0f, 0f);
        go.transform.localPosition = new Vector3(0f, 0f, (zStart + zEnd) * 0.5f);
        // Unity's cylinder is 2 units tall and 1 unit wide.
        go.transform.localScale = new Vector3(radius * 2f, (zEnd - zStart) * 0.5f, radius * 2f);
        go.GetComponent<Renderer>().sharedMaterial = mat;
        if (!keepCollider) DestroyImmediate(go.GetComponent<Collider>());
    }

    // A box part that keeps its collider.
    static void AddBox(Transform parent, string name, Vector3 center, Vector3 size, Material mat)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = center;
        go.transform.localScale = size;
        go.GetComponent<Renderer>().sharedMaterial = mat;
    }

    // A rectangular nib with its front cut at an angle, like a chisel-tip marker.
    static void AddChiselNib(Transform parent, Material mat, float zStart,
                             float width, float height, float length)
    {
        float x = width * 0.5f, y = height * 0.5f;
        float zTop = zStart + length;          // top edge reaches all the way forward
        float zBottom = zStart + length * 0.35f; // bottom edge is cut back

        Vector3 bl0 = new Vector3(-x, -y, zStart), br0 = new Vector3(x, -y, zStart);
        Vector3 tl0 = new Vector3(-x, y, zStart), tr0 = new Vector3(x, y, zStart);
        Vector3 tlF = new Vector3(-x, y, zTop), trF = new Vector3(x, y, zTop);
        Vector3 blF = new Vector3(-x, -y, zBottom), brF = new Vector3(x, -y, zBottom);
        Vector3 center = (bl0 + br0 + tl0 + tr0 + tlF + trF + blF + brF) / 8f;

        var verts = new List<Vector3>();
        var tris = new List<int>();
        AddQuad(verts, tris, center, bl0, br0, tr0, tl0); // back
        AddQuad(verts, tris, center, tl0, tr0, trF, tlF); // top
        AddQuad(verts, tris, center, bl0, br0, brF, blF); // bottom
        AddQuad(verts, tris, center, blF, brF, trF, tlF); // slanted chisel face
        AddQuad(verts, tris, center, bl0, tl0, tlF, blF); // left side
        AddQuad(verts, tris, center, br0, tr0, trF, brF); // right side

        Mesh mesh = new Mesh { name = "Chisel Nib" };
        mesh.SetVertices(verts);
        mesh.SetTriangles(tris, 0);
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();

        GameObject nib = new GameObject("Nib");
        nib.transform.SetParent(parent, false);
        nib.AddComponent<MeshFilter>().sharedMesh = mesh;
        nib.AddComponent<MeshRenderer>().sharedMaterial = mat;
    }

    // Adds a quad with its own vertices (for crisp, flat-shaded edges),
    // flipping the winding if needed so it faces outward.
    static void AddQuad(List<Vector3> verts, List<int> tris, Vector3 center,
                        Vector3 a, Vector3 b, Vector3 c, Vector3 d)
    {
        Vector3 normal = Vector3.Cross(b - a, c - a);
        Vector3 outward = (a + b + c + d) * 0.25f - center;
        if (Vector3.Dot(normal, outward) < 0f) { Vector3 t = b; b = d; d = t; }

        int i = verts.Count;
        verts.Add(a); verts.Add(b); verts.Add(c); verts.Add(d);
        tris.Add(i); tris.Add(i + 1); tris.Add(i + 2);
        tris.Add(i); tris.Add(i + 2); tris.Add(i + 3);
    }
}
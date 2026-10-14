using UnityEngine;

// A whiteboard eraser. Put this on an empty object that also has an
// XR Grab Interactable, then use the component's "Build Eraser" menu item
// in the Inspector to create its handle, felt pad and pad face.
//
// It doesn't rely on physics collisions: as soon as any part of the felt
// touches the board, the whole felt-shaped area is wiped back to white.
public class WhiteboardEraser : MonoBehaviour
{
    [Tooltip("Empty child on the felt's surface. Its blue (Z) arrow must point out of the felt.")]
    public Transform padFace;

    [Tooltip("Size of the felt pad in meters: length (X) and width (Y).")]
    public Vector2 padSize = new Vector2(0.14f, 0.05f);

    [Tooltip("How close (in meters) any part of the felt must be to the board to erase.")]
    public float touchDistance = 0.02f;

    [Tooltip("How far the felt can sink into the board and still erase.")]
    public float pushThroughDistance = 0.08f;

    [Header("Look")]
    public Color handleColor = new Color(0.96f, 0.76f, 0.80f); // pastel pink
    public Color gripColor = new Color(0.73f, 0.85f, 0.96f);   // baby blue
    public Color feltColor = new Color(0.36f, 0.36f, 0.40f);   // dark grey felt

    const string RootName = "Eraser Visual";

    Whiteboard[] boards;
    Whiteboard currentBoard;
    Vector2 lastA, lastB;
    bool wasTouching;

    void Start()
    {
        boards = FindObjectsByType<Whiteboard>();

        // Stop the eraser and the board from physically colliding, so it
        // isn't pushed out of your hand (same trick as the markers).
        Collider[] eraserColliders = GetComponentsInChildren<Collider>();
        foreach (Whiteboard board in boards)
            foreach (Collider boardCollider in board.GetComponents<Collider>())
                foreach (Collider c in eraserColliders)
                    Physics.IgnoreCollision(c, boardCollider);
    }

    // Checks points spread across the whole felt (corners, edges and center)
    // against each board. If any of them is touching, the eraser is erasing.
    Whiteboard FindTouchedBoard()
    {
        if (boards == null) return null;

        Vector3 center = padFace.position;
        Vector3 halfLength = padFace.right * (padSize.x * 0.5f);
        Vector3 halfWidth = padFace.up * (padSize.y * 0.5f);

        foreach (Whiteboard board in boards)
        {
            if (board == null) continue;
            Transform bt = board.transform;
            float depthScale = Mathf.Abs(bt.lossyScale.z);

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    Vector3 local = bt.InverseTransformPoint(center + halfLength * i + halfWidth * j);

                    // The board faces toward -Z, so negative depth is in front of it
                    // (in the room) and positive depth is pushed into it.
                    float depth = local.z * depthScale;
                    bool onBoard = Mathf.Abs(local.x) <= 0.5f && Mathf.Abs(local.y) <= 0.5f;
                    if (onBoard && depth >= -touchDistance && depth <= pushThroughDistance)
                        return board;
                }
            }
        }
        return null;
    }

    void Update()
    {
        if (padFace == null) return;

        Whiteboard board = FindTouchedBoard();
        if (board != null)
        {
            // The felt is covered by a rounded stroke running along its length,
            // as wide as the felt. These are that stroke's two end points.
            float halfWidth = padSize.y * 0.5f;
            float reach = Mathf.Max(0f, padSize.x * 0.5f - halfWidth);
            Vector2 a = board.WorldToUV(padFace.position - padFace.right * reach);
            Vector2 b = board.WorldToUV(padFace.position + padFace.right * reach);
            float radius = board.MetersToPixels(halfWidth);

            // If the eraser moved a lot since last frame, fill in between so
            // fast swipes don't leave stripes behind.
            bool continuing = wasTouching && board == currentBoard;
            int steps = 1;
            if (continuing)
            {
                Vector2 size = board.textureSize;
                float moved = Mathf.Max(Vector2.Scale(a - lastA, size).magnitude,
                                        Vector2.Scale(b - lastB, size).magnitude);
                steps = Mathf.Clamp(Mathf.CeilToInt(moved / Mathf.Max(1f, radius)), 1, 12);
            }

            for (int i = 1; i <= steps; i++)
            {
                float t = (float)i / steps;
                Vector2 sa = continuing ? Vector2.Lerp(lastA, a, t) : a;
                Vector2 sb = continuing ? Vector2.Lerp(lastB, b, t) : b;
                board.Erase(sa, sb, radius);
            }

            currentBoard = board;
            lastA = a;
            lastB = b;
            wasTouching = true;
        }
        else
        {
            wasTouching = false;
        }
    }

    [ContextMenu("Build Eraser")]
    public void Build()
    {
        Transform old = transform.Find(RootName);
        if (old != null) DestroyImmediate(old.gameObject);

        Transform root = new GameObject(RootName).transform;
        root.SetParent(transform, false);

        Material handle = MakeMaterial(handleColor, "Eraser Handle");
        Material grip = MakeMaterial(gripColor, "Eraser Grip");
        Material felt = MakeMaterial(feltColor, "Eraser Felt");

        float len = padSize.x, wid = padSize.y;
        const float feltThickness = 0.012f, handleDepth = 0.03f, gripDepth = 0.015f;

        // Felt in front (+Z), handle block behind it, grip ridge on the back.
        AddBox(root, "Felt", new Vector3(0f, 0f, feltThickness * 0.5f),
               new Vector3(len, wid, feltThickness), felt);
        AddBox(root, "Handle", new Vector3(0f, 0f, -handleDepth * 0.5f),
               new Vector3(len - 0.01f, wid - 0.01f, handleDepth), handle);
        AddBox(root, "Grip", new Vector3(0f, 0f, -handleDepth - gripDepth * 0.5f),
               new Vector3(len * 0.65f, wid * 0.4f, gripDepth), grip);

        if (padFace == null)
        {
            padFace = new GameObject("Pad Face").transform;
            padFace.SetParent(transform, false);
        }
        padFace.localPosition = new Vector3(0f, 0f, feltThickness);
        padFace.localRotation = Quaternion.identity;

        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null)
        {
            rb.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
            rb.angularDamping = 1.5f;
#if UNITY_EDITOR
            UnityEditor.EditorUtility.SetDirty(rb);
#endif
        }

#if UNITY_EDITOR
        UnityEditor.EditorUtility.SetDirty(this);
        if (!Application.isPlaying)
            UnityEditor.SceneManagement.EditorSceneManager.MarkSceneDirty(gameObject.scene);
#endif
    }

    static void AddBox(Transform parent, string name, Vector3 center, Vector3 size, Material mat)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.localPosition = center;
        go.transform.localScale = size;
        go.GetComponent<Renderer>().sharedMaterial = mat;
    }

    static Material MakeMaterial(Color color, string name)
    {
        GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
        Material mat = new Material(temp.GetComponent<Renderer>().sharedMaterial) { name = name };
        DestroyImmediate(temp);
        mat.color = color;
        if (mat.HasProperty("_Smoothness")) mat.SetFloat("_Smoothness", 0.15f);
        if (mat.HasProperty("_Glossiness")) mat.SetFloat("_Glossiness", 0.15f);
        return mat;
    }

    // Shows the erasing area in the Scene view.
    void OnDrawGizmosSelected()
    {
        if (padFace == null) return;
        Gizmos.color = Color.red;
        Gizmos.matrix = padFace.localToWorldMatrix;
        Gizmos.DrawWireCube(Vector3.zero, new Vector3(padSize.x, padSize.y, 0.001f));
        Gizmos.DrawLine(Vector3.forward * -pushThroughDistance, Vector3.forward * touchDistance);
    }
}
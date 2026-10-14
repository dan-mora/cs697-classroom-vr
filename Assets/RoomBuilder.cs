using UnityEngine;

// Builds a pastel-colored room around the floor plane: four walls with
// baseboards, a whiteboard stretched along the far wall with a frame,
// and a table in front of the player with the markers laid out on it.
//
// Put this on an empty GameObject, then use the component's "Build Room"
// menu item in the Inspector. Run it again after changing any setting.
public class RoomBuilder : MonoBehaviour
{
    [Header("Scene objects (found automatically if left empty)")]
    public Renderer floor;
    public Whiteboard whiteboard;
    public WhiteboardPen[] markers;
    public WhiteboardEraser[] erasers;

    [Header("Walls")]
    public float wallHeight = 3f;
    public float wallThickness = 0.2f;

    [Header("Whiteboard (on the far wall)")]
    public float boardHeight = 1.2f;
    [Tooltip("Height of the board's center above the floor.")]
    public float boardCenterHeight = 1.5f;
    [Tooltip("Gap between the board's ends and the side walls.")]
    public float boardSideMargin = 0.5f;
    [Tooltip("Drawing resolution. Higher is sharper but uses more GPU memory.")]
    public int boardPixelsPerMeter = 700;

    [Header("Table")]
    [Tooltip("Width, height and depth in meters.")]
    public Vector3 tableSize = new Vector3(1.8f, 0.75f, 0.7f);
    [Tooltip("How far the table's center is from the room's center, toward the whiteboard.")]
    public float tableDistance = 0.8f;
    [Tooltip("Space between markers on the table.")]
    public float markerSpacing = 0.09f;

    [Header("Windows (on the two side walls)")]
    public int windowsPerSideWall = 3;
    public float windowWidth = 1.6f;
    public float windowSillHeight = 0.9f;
    public float windowHeight = 1.4f;

    [Header("Lighting")]
    [Tooltip("Brightness of the sun coming through the windows.")]
    public float sunIntensity = 0.6f;
    [Tooltip("Sun angle: X = height in the sky, Y = compass direction.")]
    public Vector3 sunRotation = new Vector3(30f, 70f, 0f);
    [Tooltip("Base light everywhere. Darker = moodier room.")]
    public Color ambientColor = new Color(0.30f, 0.29f, 0.34f);
    public int lampRows = 2;
    public int lampColumns = 2;
    public float lampIntensity = 1.5f;
    public float lampRange = 6f;
    public Color lampColor = new Color(1f, 0.9f, 0.78f); // warm white

    [Header("Outdoors")]
    public bool buildOutdoors = true;
    public int treeCount = 24;
    public Color grassColor = new Color(0.72f, 0.86f, 0.70f);
    public Color trunkColor = new Color(0.80f, 0.68f, 0.60f);
    public Color leafColor = new Color(0.62f, 0.82f, 0.70f);

    [Header("Pastel palette")]
    public Color ceilingColor = new Color(0.98f, 0.96f, 0.98f);   // soft white
    public Color floorColor = new Color(0.80f, 0.91f, 0.85f);     // mint
    public Color wallColor = new Color(0.92f, 0.88f, 0.97f);      // lavender
    public Color boardWallColor = new Color(0.99f, 0.88f, 0.83f); // peach
    public Color baseboardColor = new Color(0.98f, 0.97f, 0.93f); // cream
    public Color frameColor = new Color(0.73f, 0.85f, 0.96f);     // baby blue
    public Color tableTopColor = new Color(1.00f, 0.95f, 0.77f);  // butter yellow
    public Color tableLegColor = new Color(0.97f, 0.79f, 0.85f);  // pink

    const string RootName = "Room Geometry";

    [ContextMenu("Build Room")]
    public void Build()
    {
        // Find what we need if it wasn't assigned.
        if (floor == null)
        {
            GameObject plane = GameObject.Find("Plane");
            if (plane != null) floor = plane.GetComponent<Renderer>();
        }
        if (floor == null)
        {
            Debug.LogError("RoomBuilder: drag your floor plane into the Floor field.", this);
            return;
        }
        if (whiteboard == null) whiteboard = FindAnyObjectByType<Whiteboard>();
        if (markers == null || markers.Length == 0) markers = FindObjectsByType<WhiteboardPen>();
        if (erasers == null || erasers.Length == 0) erasers = FindObjectsByType<WhiteboardEraser>();

        // Remove the previous build.
        GameObject old = GameObject.Find(RootName);
        if (old != null) DestroyImmediate(old);
        Transform root = new GameObject(RootName).transform;

        // Room dimensions come from the floor.
        Bounds b = floor.bounds;
        float floorY = b.max.y;
        float width = b.size.x, depth = b.size.z;
        float cx = b.center.x, cz = b.center.z;
        float minX = b.min.x, maxX = b.max.x, minZ = b.min.z, maxZ = b.max.z;
        float t = wallThickness;

        // Materials
        floor.sharedMaterial = MakeMaterial(floorColor, "Floor");
        Material wallMat = MakeMaterial(wallColor, "Wall");
        Material boardWallMat = MakeMaterial(boardWallColor, "Board Wall");
        Material baseboardMat = MakeMaterial(baseboardColor, "Baseboard");
        Material frameMat = MakeMaterial(frameColor, "Board Frame");
        Material topMat = MakeMaterial(tableTopColor, "Table Top");
        Material legMat = MakeMaterial(tableLegColor, "Table Legs");

        // Walls sit just outside the floor's edges, so the floor stays fully usable.
        float wallY = floorY + wallHeight * 0.5f;
        Box(root, "Wall North (board)", new Vector3(cx, wallY, maxZ + t * 0.5f), new Vector3(width + 2 * t, wallHeight, t), boardWallMat, true);
        Box(root, "Wall South", new Vector3(cx, wallY, minZ - t * 0.5f), new Vector3(width + 2 * t, wallHeight, t), wallMat, true);
        BuildWindowWall(root, "Wall East", maxX + t * 0.5f, minZ, maxZ, floorY, wallMat, frameMat);
        BuildWindowWall(root, "Wall West", minX - t * 0.5f, minZ, maxZ, floorY, wallMat, frameMat);

        // Ceiling
        Box(root, "Ceiling", new Vector3(cx, floorY + wallHeight + t * 0.5f, cz),
            new Vector3(width + 2 * t, t, depth + 2 * t), MakeMaterial(ceilingColor, "Ceiling"), true);

        // Ceiling lamps: a glowing fixture plus a warm point light under each.
        Material fixtureMat = MakeUnlitMaterial(Color.Lerp(lampColor, Color.white, 0.5f), "Lamp Fixture");
        for (int r = 0; r < lampRows; r++)
        {
            for (int c = 0; c < lampColumns; c++)
            {
                float lx0 = minX + width * (c + 0.5f) / lampColumns;
                float lz0 = minZ + depth * (r + 0.5f) / lampRows;

                GameObject fixture = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
                fixture.name = "Lamp Fixture";
                fixture.transform.SetParent(root, false);
                fixture.transform.position = new Vector3(lx0, floorY + wallHeight - 0.02f, lz0);
                fixture.transform.localScale = new Vector3(0.5f, 0.02f, 0.5f);
                fixture.GetComponent<Renderer>().sharedMaterial = fixtureMat;
                fixture.GetComponent<Renderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                DestroyImmediate(fixture.GetComponent<Collider>());

                GameObject lampLight = new GameObject("Lamp Light");
                lampLight.transform.SetParent(root, false);
                lampLight.transform.position = new Vector3(lx0, floorY + wallHeight - 0.3f, lz0);
                Light l = lampLight.AddComponent<Light>();
                l.type = LightType.Point;
                l.color = lampColor;
                l.intensity = lampIntensity;
                l.range = lampRange;
                l.shadows = LightShadows.None;
            }
        }

        // Sun: dimmer, casting shadows so it only shines in through the windows.
        Light sun = RenderSettings.sun;
        if (sun == null)
        {
            foreach (Light candidate in FindObjectsByType<Light>())
                if (candidate.type == LightType.Directional) { sun = candidate; break; }
        }
        if (sun != null)
        {
            sun.intensity = sunIntensity;
            sun.shadows = LightShadows.Soft;
            sun.transform.rotation = Quaternion.Euler(sunRotation);
            MarkDirty(sun);
            MarkDirty(sun.transform);
        }

        // Ambient light normally comes from the sky and ignores walls and roofs,
        // so replace it with a dim, flat color.
        RenderSettings.ambientMode = UnityEngine.Rendering.AmbientMode.Flat;
        RenderSettings.ambientLight = ambientColor;
        RenderSettings.reflectionIntensity = 0.4f;

        if (buildOutdoors) BuildOutdoors(root, floorY, cx, cz, Mathf.Max(width, depth));

        // Baseboards, solid so things bump into them rather than sinking in.
        const float bbH = 0.12f, bbD = 0.03f;
        float bbY = floorY + bbH * 0.5f;
        Box(root, "Baseboard North", new Vector3(cx, bbY, maxZ - bbD * 0.5f), new Vector3(width, bbH, bbD), baseboardMat, true);
        Box(root, "Baseboard South", new Vector3(cx, bbY, minZ + bbD * 0.5f), new Vector3(width, bbH, bbD), baseboardMat, true);
        Box(root, "Baseboard East", new Vector3(maxX - bbD * 0.5f, bbY, cz), new Vector3(bbD, bbH, depth), baseboardMat, true);
        Box(root, "Baseboard West", new Vector3(minX + bbD * 0.5f, bbY, cz), new Vector3(bbD, bbH, depth), baseboardMat, true);

        // Invisible thick slab under the floor. The plane's own collider has no
        // thickness, so small fast objects can slip through it; this catches them.
        GameObject slab = Box(root, "Floor Collider", new Vector3(cx, floorY - 0.25f, cz),
                              new Vector3(width + 2 * t, 0.5f, depth + 2 * t), baseboardMat, true);
        DestroyImmediate(slab.GetComponent<MeshRenderer>());
        DestroyImmediate(slab.GetComponent<MeshFilter>());

        // Whiteboard along the far wall, plus a frame around it.
        if (whiteboard != null)
        {
            float boardWidth = width - 2f * boardSideMargin;
            float boardY = floorY + boardCenterHeight;
            Transform wb = whiteboard.transform;
            wb.SetPositionAndRotation(new Vector3(cx, boardY, maxZ - 0.01f), Quaternion.identity);
            wb.localScale = new Vector3(boardWidth, boardHeight, 1f);
            whiteboard.textureSize = new Vector2Int(
                Mathf.RoundToInt(boardWidth * boardPixelsPerMeter),
                Mathf.RoundToInt(boardHeight * boardPixelsPerMeter));

            const float f = 0.05f, fd = 0.03f;
            float fz = maxZ - fd * 0.5f;
            float halfW = boardWidth * 0.5f, halfH = boardHeight * 0.5f;
            Box(root, "Frame Top", new Vector3(cx, boardY + halfH + f * 0.5f, fz), new Vector3(boardWidth + 2 * f, f, fd), frameMat, false);
            Box(root, "Frame Bottom", new Vector3(cx, boardY - halfH - f * 0.5f, fz), new Vector3(boardWidth + 2 * f, f, fd), frameMat, false);
            Box(root, "Frame Left", new Vector3(cx - halfW - f * 0.5f, boardY, fz), new Vector3(f, boardHeight, fd), frameMat, false);
            Box(root, "Frame Right", new Vector3(cx + halfW + f * 0.5f, boardY, fz), new Vector3(f, boardHeight, fd), frameMat, false);
            MarkDirty(whiteboard);
            MarkDirty(wb);
        }
        else
        {
            Debug.LogWarning("RoomBuilder: no Whiteboard found, so it wasn't placed.", this);
        }

        // Table in front of the starting position, facing the whiteboard.
        float tw = tableSize.x, th = tableSize.y, td = tableSize.z;
        float tz = cz + tableDistance;
        const float topThickness = 0.04f, leg = 0.05f, inset = 0.06f;
        Box(root, "Table Top", new Vector3(cx, floorY + th - topThickness * 0.5f, tz), new Vector3(tw, topThickness, td), topMat, true);
        float legH = th - topThickness;
        float lx = tw * 0.5f - inset, lz = td * 0.5f - inset;
        for (int sx = -1; sx <= 1; sx += 2)
            for (int sz = -1; sz <= 1; sz += 2)
                Box(root, "Table Leg", new Vector3(cx + sx * lx, floorY + legH * 0.5f, tz + sz * lz), new Vector3(leg, legH, leg), legMat, true);

        // Lay the markers on the table, near the edge closest to you,
        // leaving the rest of the table free for other things later.
        float surfaceY = floorY + th;
        float startX = cx - tw * 0.5f + 0.25f;
        float markerZ = tz - td * 0.5f + 0.2f;
        for (int i = 0; i < markers.Length; i++)
        {
            if (markers[i] == null) continue;

            // Rebuild each marker's look and physics too, so one click updates everything.
            if (markers[i].TryGetComponent(out MarkerVisual visual)) visual.Build();

            Transform m = markers[i].transform;
            m.SetPositionAndRotation(new Vector3(startX + i * markerSpacing, surfaceY + 0.012f, markerZ), Quaternion.identity);
            MarkDirty(m);
        }

        // Erasers go on the right side of the table, felt side down.
        for (int i = 0; i < erasers.Length; i++)
        {
            if (erasers[i] == null) continue;
            erasers[i].Build();
            Transform e = erasers[i].transform;
            e.SetPositionAndRotation(
                new Vector3(cx + tw * 0.5f - 0.3f - i * 0.2f, surfaceY + 0.015f, markerZ + 0.05f),
                Quaternion.Euler(90f, 0f, 0f));
            MarkDirty(e);
        }

        MarkDirty(floor);
#if UNITY_EDITOR
        if (!Application.isPlaying)
            UnityEditor.SceneManagement.EditorSceneManager.MarkSceneDirty(gameObject.scene);
#endif
    }

    // A wall running along Z with evenly spaced window openings. Each opening
    // gets a frame and an invisible pane, so you can see out but things can't fall out.
    void BuildWindowWall(Transform root, string name, float x, float zMin, float zMax,
                         float floorY, Material wallMat, Material trimMat)
    {
        float t = wallThickness, h = wallHeight, len = zMax - zMin, midZ = (zMin + zMax) * 0.5f;
        int n = Mathf.Max(0, windowsPerSideWall);
        float spacing = n > 0 ? len / n : len;
        float w = Mathf.Min(windowWidth, spacing - 0.3f);
        float sill = windowSillHeight;
        float top = Mathf.Min(sill + windowHeight, h - 0.2f);

        if (n == 0 || w < 0.2f || top <= sill)
        {
            Box(root, name, new Vector3(x, floorY + h * 0.5f, midZ), new Vector3(t, h, len), wallMat, true);
            return;
        }

        float openH = top - sill, midY = floorY + (sill + top) * 0.5f;
        Box(root, name + " Lower", new Vector3(x, floorY + sill * 0.5f, midZ), new Vector3(t, sill, len), wallMat, true);
        Box(root, name + " Upper", new Vector3(x, floorY + (top + h) * 0.5f, midZ), new Vector3(t, h - top, len), wallMat, true);

        const float fw = 0.06f;
        float prev = zMin;
        for (int i = 0; i < n; i++)
        {
            float center = zMin + spacing * (i + 0.5f);
            float z0 = center - w * 0.5f, z1 = center + w * 0.5f;

            // Wall section between the previous window and this one.
            Box(root, name + " Pier", new Vector3(x, midY, (prev + z0) * 0.5f), new Vector3(t, openH, z0 - prev), wallMat, true);

            // Frame around the opening (decorative).
            Box(root, "Window Frame", new Vector3(x, floorY + top - fw * 0.5f, center), new Vector3(t + 0.04f, fw, w), trimMat, false);
            Box(root, "Window Sill", new Vector3(x, floorY + sill + fw * 0.5f, center), new Vector3(t + 0.08f, fw, w + 0.1f), trimMat, false);
            Box(root, "Window Frame", new Vector3(x, midY, z0 + fw * 0.5f), new Vector3(t + 0.04f, openH, fw), trimMat, false);
            Box(root, "Window Frame", new Vector3(x, midY, z1 - fw * 0.5f), new Vector3(t + 0.04f, openH, fw), trimMat, false);

            // Invisible "glass": a collider with nothing drawn.
            GameObject pane = Box(root, "Window Pane (invisible)", new Vector3(x, midY, center), new Vector3(0.02f, openH, w), trimMat, true);
            DestroyImmediate(pane.GetComponent<MeshRenderer>());
            DestroyImmediate(pane.GetComponent<MeshFilter>());

            prev = z1;
        }
        Box(root, name + " Pier", new Vector3(x, midY, (prev + zMax) * 0.5f), new Vector3(t, openH, zMax - prev), wallMat, true);
    }

    // A big lawn and some simple pastel trees to look at through the windows.
    void BuildOutdoors(Transform root, float floorY, float cx, float cz, float roomSize)
    {
        Box(root, "Ground", new Vector3(cx, floorY - 0.03f, cz), new Vector3(200f, 0.02f, 200f),
            MakeMaterial(grassColor, "Grass"), false);

        Material trunkMat = MakeMaterial(trunkColor, "Tree Trunk");
        Material leafMat = MakeMaterial(leafColor, "Tree Leaves");

        // Fixed seed, so the trees land in the same places every rebuild.
        Random.State saved = Random.state;
        Random.InitState(1234);
        for (int i = 0; i < treeCount; i++)
        {
            float angle = Random.Range(0f, Mathf.PI * 2f);
            float dist = Random.Range(roomSize * 0.9f, roomSize * 4f);
            float x = cx + Mathf.Cos(angle) * dist, z = cz + Mathf.Sin(angle) * dist;
            float trunkH = Random.Range(1.5f, 2.6f);
            float canopy = Random.Range(2f, 3.4f);

            GameObject trunk = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
            trunk.name = "Tree Trunk";
            trunk.transform.SetParent(root, false);
            trunk.transform.position = new Vector3(x, floorY + trunkH * 0.5f, z);
            trunk.transform.localScale = new Vector3(0.3f, trunkH * 0.5f, 0.3f);
            trunk.GetComponent<Renderer>().sharedMaterial = trunkMat;
            DestroyImmediate(trunk.GetComponent<Collider>());

            GameObject leaves = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            leaves.name = "Tree Leaves";
            leaves.transform.SetParent(root, false);
            leaves.transform.position = new Vector3(x, floorY + trunkH + canopy * 0.35f, z);
            leaves.transform.localScale = Vector3.one * canopy;
            leaves.GetComponent<Renderer>().sharedMaterial = leafMat;
            DestroyImmediate(leaves.GetComponent<Collider>());
        }
        Random.state = saved;
    }

    // Unlit material for things that should look like they glow (lamp fixtures).
    static Material MakeUnlitMaterial(Color color, string name)
    {
        Shader unlit = Shader.Find("Universal Render Pipeline/Unlit");
        if (unlit == null) return MakeMaterial(color, name);
        return new Material(unlit) { name = name, color = color };
    }

    static GameObject Box(Transform parent, string name, Vector3 center, Vector3 size, Material mat, bool keepCollider)
    {
        GameObject go = GameObject.CreatePrimitive(PrimitiveType.Cube);
        go.name = name;
        go.transform.SetParent(parent, false);
        go.transform.position = center;
        go.transform.localScale = size;
        go.GetComponent<Renderer>().sharedMaterial = mat;
        if (!keepCollider) DestroyImmediate(go.GetComponent<Collider>());
        return go;
    }

    // Copies the project's default material (so it suits URP or Built-in),
    // tints it, and makes it matte for a soft pastel look.
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

    static void MarkDirty(Object o)
    {
#if UNITY_EDITOR
        if (o != null) UnityEditor.EditorUtility.SetDirty(o);
#endif
    }
}
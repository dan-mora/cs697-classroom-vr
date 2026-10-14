using UnityEngine;

// Put this on a Quad that will act as the whiteboard.
// The Quad needs its default MeshCollider (other collider types can't report
// where on the texture the pen touched).
//
// The drawing lives in a RenderTexture on the GPU. Each stroke is drawn by the
// GPU using the WhiteboardBrush shader, so nothing is copied from the CPU.
[RequireComponent(typeof(Renderer), typeof(MeshCollider))]
public class Whiteboard : MonoBehaviour
{
    [Tooltip("Pixel size of the drawing surface. Keep the same ratio as the board's scale (e.g. 2:1).")]
    public Vector2Int textureSize = new Vector2Int(2048, 1024);
    public Color backgroundColor = Color.white;

    [Tooltip("Drag the WhiteboardBrush shader here so it's included when you build for the headset.")]
    public Shader brushShader;

    [Tooltip("An Unlit material (Universal Render Pipeline/Unlit) so the board shows true white, unaffected by lighting.")]
    public Material displayMaterial;

    RenderTexture surface;
    Material brush;
    Material display;

    static readonly int ColorId = Shader.PropertyToID("_Color");
    static readonly int FromId = Shader.PropertyToID("_From");
    static readonly int ToId = Shader.PropertyToID("_To");
    static readonly int TexSizeId = Shader.PropertyToID("_TexSize");
    static readonly int RadiusId = Shader.PropertyToID("_Radius");
    static readonly int FillId = Shader.PropertyToID("_Fill");

    void Awake()
    {
        if (brushShader == null) brushShader = Shader.Find("Hidden/WhiteboardBrush");
        if (brushShader == null)
        {
            Debug.LogError("Whiteboard: assign the WhiteboardBrush shader in the Inspector.", this);
            enabled = false;
            return;
        }

        brush = new Material(brushShader);
        brush.SetVector(TexSizeId, new Vector4(textureSize.x, textureSize.y, 0, 0));

        surface = new RenderTexture(textureSize.x, textureSize.y, 0, RenderTextureFormat.ARGB32)
        {
            name = "Whiteboard Surface",
            wrapMode = TextureWrapMode.Clamp,
            filterMode = FilterMode.Bilinear,
            useMipMap = false
        };
        surface.Create();
        FillBackground();

        // Show the drawing with Unity's own Unlit shader, which renders correctly
        // in both eyes in VR. A copy is used so the material asset isn't modified.
        Renderer rend = GetComponent<Renderer>();
        if (displayMaterial != null)
        {
            display = new Material(displayMaterial);
        }
        else
        {
            Shader unlit = Shader.Find("Universal Render Pipeline/Unlit");
            if (unlit != null) display = new Material(unlit);
        }

        if (display != null)
        {
            display.mainTexture = surface;
            display.color = Color.white;
            rend.material = display;
        }
        else
        {
            // Fallback: lit material (looks greyer depending on the lights).
            rend.material.mainTexture = surface;
        }
    }

    // Converts a point in the world to a texture coordinate on this board.
    // (A Quad's texture runs from its bottom-left corner to its top-right.)
    public Vector2 WorldToUV(Vector3 worldPoint)
    {
        Vector3 local = transform.InverseTransformPoint(worldPoint);
        return new Vector2(local.x + 0.5f, local.y + 0.5f);
    }

    // Converts a real-world size in meters to pixels on this board's texture.
    public float MetersToPixels(float meters)
    {
        float boardHeight = Mathf.Abs(transform.lossyScale.y);
        return boardHeight > 0f ? meters / boardHeight * textureSize.y : 0f;
    }

    // Paints a stroke in the background color, i.e. erases.
    public void Erase(Vector2 fromUV, Vector2 toUV, float radiusPixels)
    {
        DrawLine(fromUV, toUV, Mathf.CeilToInt(radiusPixels), backgroundColor);
    }

    // Wipes the board back to the background color.
    public void Clear()
    {
        if (Ready()) FillBackground();
    }

    // Draws a single round dot at a texture coordinate (0-1 range).
    public void DrawDot(Vector2 uv, int radius, Color color)
    {
        DrawLine(uv, uv, radius, color);
    }

    // Draws a continuous stroke between two texture coordinates in one GPU pass.
    public void DrawLine(Vector2 fromUV, Vector2 toUV, int radius, Color color)
    {
        if (!Ready()) return;

        Vector2 size = textureSize;
        brush.SetVector(FromId, Vector2.Scale(fromUV, size));
        brush.SetVector(ToId, Vector2.Scale(toUV, size));
        brush.SetFloat(RadiusId, Mathf.Max(1, radius));
        brush.SetColor(ColorId, color);
        brush.SetFloat(FillId, 0f);

        Graphics.Blit(Texture2D.whiteTexture, surface, brush);
    }

    void FillBackground()
    {
        brush.SetColor(ColorId, backgroundColor);
        brush.SetFloat(FillId, 1f);
        Graphics.Blit(Texture2D.whiteTexture, surface, brush);
        brush.SetFloat(FillId, 0f);
    }

    // GPU textures can occasionally be lost (for example when the app is
    // suspended). If that happens, recreate it as a blank board.
    bool Ready()
    {
        if (surface == null || brush == null) return false;
        if (!surface.IsCreated())
        {
            surface.Create();
            FillBackground();
        }
        return true;
    }

    // RenderTextures are GPU resources, so free them when the board goes away.
    void OnDestroy()
    {
        if (surface != null)
        {
            surface.Release();
            Destroy(surface);
        }
        if (brush != null) Destroy(brush);
        if (display != null) Destroy(display);
    }
}
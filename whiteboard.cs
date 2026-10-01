using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class whiteboard : MonoBehaviour
{
    [Header("Whiteboard Settings")]
    public int textureWidth = 1024;
    public int textureHeight = 1024;
    public Color backgroundColor = Color.white;

    private Texture2D texture;
    private Color32[] pixels; // The 1D array representing the 2D pixel grid
    private Renderer whiteboardRenderer;

    void Start()
    {
        whiteboardRenderer = GetComponent<Renderer>();

        // 1. Initialize the texture
        texture = new Texture2D(textureWidth, textureHeight, TextureFormat.RGBA32, false);
        texture.filterMode = FilterMode.Bilinear;
        texture.wrapMode = TextureWrapMode.Clamp;

        // 2. Allocate the pixel array
        pixels = new Color32[textureWidth * textureHeight];

        // 3. Set the background color
        ClearScreen();

        // 4. Assign the texture to the object's material
        whiteboardRenderer.material.mainTexture = texture;
    }

    // Set a specific pixel using 2D coordinates (X, Y)
    public void SetPixel2D(int x, int y, Color32 color)
    {
        if (x < 0 || x >= textureWidth || y < 0 || y >= textureHeight) return;

        // Map 2D coordinates to the flat 1D array: Index = y * Width + x
        int index = y * textureWidth + x;
        pixels[index] = color;
    }

    // Apply the pixel changes to the GPU texture
    public void ApplyChanges()
    {
        texture.SetPixels32(pixels);
        texture.Apply();
    }

    // Clear the whiteboard
    public void ClearScreen()
    {
        for (int i = 0; i < pixels.Length; i++)
        {
            pixels[i] = backgroundColor;
        }
        ApplyChanges();


    }
}


// Draws one round-ended brush stroke (from _From to _To) into the whiteboard's
// RenderTexture. Everything outside the stroke is fully transparent, so the
// alpha blending leaves the existing drawing untouched.
Shader "Hidden/WhiteboardBrush"
{
    Properties
    {
        _MainTex ("Unused", 2D) = "white" {}
    }

    SubShader
    {
        Cull Off ZWrite Off ZTest Always
        Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM
            #pragma vertex vert_img
            #pragma fragment frag
            #include "UnityCG.cginc"

            float4 _Color;    // ink color (or background color when filling)
            float4 _From;     // xy = stroke start, in pixels
            float4 _To;       // xy = stroke end, in pixels
            float4 _TexSize;  // xy = texture width and height, in pixels
            float _Radius;    // brush radius, in pixels
            float _Fill;      // 1 = cover the whole texture (used to clear the board)

            float4 frag (v2f_img i) : SV_Target
            {
                // Work in pixel units so the brush stays round on a non-square board.
                float2 p = i.uv * _TexSize.xy;
                float2 a = _From.xy;
                float2 b = _To.xy;

                // Distance from this pixel to the line segment a-b.
                float2 ab = b - a;
                float t = saturate(dot(p - a, ab) / max(dot(ab, ab), 1e-5));
                float d = length(p - (a + ab * t));

                // Soft 2-pixel edge for smooth, anti-aliased strokes.
                float coverage = 1.0 - smoothstep(_Radius - 1.0, _Radius + 1.0, d);
                coverage = max(coverage, _Fill);

                return float4(_Color.rgb, _Color.a * coverage);
            }
            ENDCG
        }
    }
}

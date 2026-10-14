using UnityEngine;

// Put this on the pen's parent object (the one with the XR Grab Interactable).
// Instead of using physics collisions, it fires a short ray out of the tip every
// frame and paints wherever that ray hits a Whiteboard.
public class WhiteboardPen : MonoBehaviour
{
    [Tooltip("Empty child object at the very end of the pen. Its blue (Z) arrow must point out of the tip.")]
    public Transform tip;

    [Tooltip("How close (in meters) the tip must be to the board to draw.")]
    public float touchDistance = 0.015f;

    [Tooltip("How far the tip can sink into the board and still draw.")]
    public float pushThroughDistance = 0.05f;

    public int brushSize = 6;
    public Color inkColor = Color.black;

    Whiteboard currentBoard;
    Vector2 lastUV;
    bool wasTouching;

    void Start()
    {
        // Stop the pen and the board from physically colliding. This is what
        // prevents the pen from being launched out of your hand.
        Collider[] penColliders = GetComponentsInChildren<Collider>();
        foreach (Whiteboard board in FindObjectsByType<Whiteboard>())
            foreach (Collider boardCollider in board.GetComponents<Collider>())
                foreach (Collider penCollider in penColliders)
                    Physics.IgnoreCollision(penCollider, boardCollider);
    }

    void Update()
    {
        if (tip == null) return;

        // Start the ray slightly behind the tip, so it still hits the board
        // even when the tip has sunk into it.
        Vector3 origin = tip.position - tip.forward * pushThroughDistance;
        float length = pushThroughDistance + touchDistance;

        if (Physics.Raycast(origin, tip.forward, out RaycastHit hit, length,
                Physics.DefaultRaycastLayers, QueryTriggerInteraction.Ignore)
            && hit.collider.TryGetComponent(out Whiteboard board))
        {
            Vector2 uv = hit.textureCoord;

            if (wasTouching && board == currentBoard)
                board.DrawLine(lastUV, uv, brushSize, inkColor);
            else
                board.DrawDot(uv, brushSize, inkColor);

            currentBoard = board;
            lastUV = uv;
            wasTouching = true;
        }
        else
        {
            wasTouching = false;
        }
    }

    // Shows the drawing ray in the Scene view so you can check the tip is set up right.
    void OnDrawGizmosSelected()
    {
        if (tip == null) return;
        Gizmos.color = Color.red;
        Gizmos.DrawLine(tip.position - tip.forward * pushThroughDistance,
                        tip.position + tip.forward * touchDistance);
    }
}
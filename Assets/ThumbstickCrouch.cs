using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;

// Put this on the XR Origin (XR Rig).
// Flick the right thumbstick down to crouch, flick it down again to stand up.
[RequireComponent(typeof(XROrigin))]
public class ThumbstickCrouch : MonoBehaviour
{
    [Tooltip("How far (in meters) crouching lowers your view.")]
    public float crouchDepth = 0.6f;

    [Tooltip("How fast (meters per second) you move between standing and crouching.")]
    public float crouchSpeed = 4f;

    [Tooltip("How far down the stick must be pushed to count as a flick (0-1).")]
    [Range(0.1f, 1f)] public float pressThreshold = 0.75f;

    [Tooltip("How far the stick must return toward center before another flick counts.")]
    [Range(0f, 0.9f)] public float releaseThreshold = 0.3f;

    [Tooltip("The thumbstick to read. Defaults to the right controller's thumbstick.")]
    public InputActionProperty thumbstick = new InputActionProperty(
        new InputAction("Crouch Thumbstick", InputActionType.Value,
            "<XRController>{RightHand}/{Primary2DAxis}", expectedControlType: "Vector2"));

    Transform cameraOffset;
    bool crouched;
    bool stickHeld;
    float currentDrop;

    void Awake()
    {
        cameraOffset = GetComponent<XROrigin>().CameraFloorOffsetObject.transform;
    }

    // Only switch the action on and off ourselves if it's the built-in one,
    // so we don't disable a shared action from an Input Actions asset.
    void OnEnable()
    {
        if (thumbstick.reference == null) thumbstick.action?.Enable();
    }

    void OnDisable()
    {
        if (thumbstick.reference == null) thumbstick.action?.Disable();
    }

    void Update()
    {
        if (thumbstick.action == null || cameraOffset == null) return;

        // Detect a downward flick, and wait for the stick to come back up
        // before accepting another one.
        float y = thumbstick.action.ReadValue<Vector2>().y;
        if (!stickHeld && y < -pressThreshold)
        {
            stickHeld = true;
            crouched = !crouched;
        }
        else if (stickHeld && y > -releaseThreshold)
        {
            stickHeld = false;
        }

        // Smoothly move the view down or back up.
        float target = crouched ? crouchDepth : 0f;
        float newDrop = Mathf.MoveTowards(currentDrop, target, crouchSpeed * Time.deltaTime);
        if (!Mathf.Approximately(newDrop, currentDrop))
        {
            Vector3 p = cameraOffset.localPosition;
            p.y -= newDrop - currentDrop;
            cameraOffset.localPosition = p;
            currentDrop = newDrop;
        }
    }
}

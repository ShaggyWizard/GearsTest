using UnityEngine;
using UnityEngine.UIElements;

public class GearVisual : VisualElement
{
    public GearObject gearObject { get; private set; }


    private GearVisual _next;
    private GearVisual _prev;
    private VisualElement _handle;
    private VisualElement _gearImage;


    private const int _handleSize = 32;
    private const int handlewidth = 4;
    private static Color color = Color.red;

    public GearVisual()
    {
        style.position = Position.Absolute;
        style.alignContent = Align.Center;
        style.alignItems = Align.Center;
        style.justifyContent = Justify.Center;

        style.width = _handleSize;
        style.height = _handleSize;

        CreateGearImage();
        CreateHandle();
    }

    private void CreateGearImage()
    {
        _gearImage = new VisualElement();
        _gearImage.style.position = Position.Absolute;
        _gearImage.style.flexShrink = 0;
        _gearImage.pickingMode = PickingMode.Ignore;

        Add(_gearImage);
    }
    private void CreateHandle()
    {
        _handle = new VisualElement();

        _handle.style.position = Position.Absolute;
        _handle.style.flexShrink = 0;

        _handle.style.borderRightWidth = handlewidth;
        _handle.style.borderBottomWidth = handlewidth;
        _handle.style.borderLeftWidth = handlewidth;
        _handle.style.borderTopWidth = handlewidth;

        _handle.style.borderTopLeftRadius = _handleSize / 2;
        _handle.style.borderTopRightRadius = _handleSize / 2;
        _handle.style.borderBottomLeftRadius = _handleSize / 2;
        _handle.style.borderBottomRightRadius = _handleSize / 2;

        _handle.style.borderLeftColor = color;
        _handle.style.borderRightColor = color;
        _handle.style.borderTopColor = color;
        _handle.style.borderBottomColor = color;

        _handle.style.width = _handleSize;
        _handle.style.height = _handleSize;

        Add(_handle);
    }

    public void SetGearObject(GearObject newGearObject)
    {
        gearObject = newGearObject;

        _gearImage.style.backgroundImage = gearObject.sprite.texture;
        _gearImage.style.width = gearObject.sprite.texture.width;
        _gearImage.style.height = gearObject.sprite.texture.height;
        _gearImage.transform.position = gearObject.offset * new Vector2(-1, 1) * 100f;
    }
    public void SetNext(GearVisual gear)
    {
        _next = gear;
    }
    public void SetPrev(GearVisual gear)
    {
        _prev = gear;
    }
    public void Follow(GearVisual gear)
    {
        Vector3 normalizedDirection = (transform.position - gear.transform.position).normalized;
        float desiredDistance = Mathf.Max((gearObject.innerRadius + gear.gearObject.outerRadius), (gearObject.outerRadius + gear.gearObject.innerRadius)) * 100f;
        transform.position = gear.transform.position + normalizedDirection * desiredDistance;
    }
    public void Lead()
    {
        LeadNext();
        LeadPrev();
    }
    public void LeadNext()
    {
        if (_next == null) { return; }
        _next.FollowPrev();
    }
    public void LeadPrev()
    {
        if (_prev == null) { return; }
        _prev.FollowNext();
    }
    public void FollowNext()
    {
        if (_next == null) { return; }
        Follow(_next);
        LeadPrev();
    }
    public void FollowPrev()
    {
        if (_prev == null) { return; }
        Follow(_prev);
        LeadNext();
    }
}
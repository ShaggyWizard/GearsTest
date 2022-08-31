using System.Collections;
using UnityEngine;
using UnityEngine.UIElements;

public class GearVisual : VisualElement
{
    public GearObject gearObject { get; private set; }


    private GearVisual _next;
    private GearVisual _prev;


    public GearVisual()
    {
        style.position = Position.Absolute;
    }


    public void SetGearObject(GearObject newGearObject)
    {
        gearObject = newGearObject;
        style.backgroundImage = gearObject.sprite.texture;
        style.width = gearObject.sprite.texture.width;
        style.height = gearObject.sprite.texture.height;
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
using UnityEngine;

public class DragableObject : IDragable
{
    private Transform _target;
    private Vector3 _clickOffset;


    public DragableObject(Transform target)
    {
        _target = target;
    }
    public void PickUp(Vector3 clickPos)
    {
        _clickOffset = _target.position - clickPos;
    }
    public void Drag(Vector3 clickPos)
    {
        _target.position = clickPos + _clickOffset;
    }
    public void Release() { }
}

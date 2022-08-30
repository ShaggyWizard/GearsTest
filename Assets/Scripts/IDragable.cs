using UnityEngine;


public interface IDragable
{
    public void PickUp(Vector3 clickPos);
    public void Drag(Vector3 clickPos);
    public void Release();
}

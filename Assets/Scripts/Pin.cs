using UnityEngine;



[SelectionBase]
public class Pin : MonoBehaviour, IPlacement
{
    private IPlaceable _placeable;


    public bool Empty => _placeable == null;
    public Vector3 Position => transform.position;
}

using UnityEngine;



[SelectionBase]
public class Pin : MonoBehaviour, IPlacement
{
    public IPlaceable Placeable { get; private set; }
    public Vector3 Position => transform.position;

    public void SetPlaceable(IPlaceable placeable)
    {
        Placeable = placeable;
        Placeable?.SetPlacement(this);
    }
}

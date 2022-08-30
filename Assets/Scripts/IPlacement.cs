using UnityEngine;

public interface IPlacement
{
    public IPlaceable Placeable { get; }
    public Vector3 Position { get; }


    public void SetPlaceable(IPlaceable placeable);


    public static void Swap(IPlacement left, IPlacement right)
    {
        IPlaceable leftPlaceable = left?.Placeable;
        IPlaceable rightPlaceable = right?.Placeable;
        left?.SetPlaceable(rightPlaceable);
        right?.SetPlaceable(leftPlaceable);
    }
}
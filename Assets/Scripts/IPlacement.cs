using UnityEngine;

public interface IPlacement
{
    public bool Empty { get; }
    public Vector3 Position { get; }
}
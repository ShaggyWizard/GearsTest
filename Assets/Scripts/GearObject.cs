using System;
using UnityEngine;


public class GearObject : ScriptableObject
{
    public string ID = Guid.NewGuid().ToString().ToUpper();
    public string displayName;
    public float innerRadius;
    public float outerRadius;
    public Sprite sprite;
    public Vector2 offset;
}

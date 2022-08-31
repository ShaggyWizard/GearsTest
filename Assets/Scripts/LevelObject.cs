using System.Collections.Generic;
using UnityEngine;
using UnityEditor;


public class LevelObject : DataObject
{
    public LevelGear[] gears;
}

[System.Serializable]
public class LevelGear
{
    public Vector2 position;
    public GearObject gearObject;

    public LevelGear(GearVisual gearVisual)
    {
        gearObject = gearVisual.gearObject;
        position = gearVisual.transform.position * new Vector2(1f, -1f) * 0.01f;
    }
}
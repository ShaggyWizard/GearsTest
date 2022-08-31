using System;
using UnityEngine;


public class DataObject : ScriptableObject
{
    [HideInInspector] public bool changed;
    [HideInInspector] public string ID = Guid.NewGuid().ToString().ToUpper();

    public string displayName;
}

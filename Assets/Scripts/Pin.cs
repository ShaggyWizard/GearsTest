using System;
using UnityEngine;



[SelectionBase]
public class Pin : MonoBehaviour, IPlacement, IMatch
{
    public IPlaceable Placeable { get; private set; }
    public string MatchID { get; private set; }
    public Vector3 Position => transform.position;


    public event Action<bool> OnMatchChange;


    private bool _match;


    public void Init(GearObject gearObject)
    {
        MatchID = gearObject.ID;
    }
    public void SetPlaceable(IPlaceable placeable)
    {
        Placeable = placeable;
        Placeable?.SetPlacement(this);
        
        if (placeable is IMatch)
        {
            bool newMatch = ((IMatch)placeable).MatchID == MatchID;
            if (_match != newMatch)
            {
                _match = newMatch;
                OnMatchChange?.Invoke(_match);
            }
        }
    }
}

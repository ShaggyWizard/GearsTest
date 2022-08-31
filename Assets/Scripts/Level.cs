using System.Linq;
using UnityEngine;


public class Level : MonoBehaviour
{
    [Header("Data and  Prefabs")]
    [SerializeField] private LevelObject _level;
    [SerializeField] private Gear _gearPrefab;
    [SerializeField] private Pin _pinPrefab;
    [Header("Containers")]
    [SerializeField] private Transform _pinsContainer;
    [SerializeField] private Transform _gearsContainer;


    private int _remaining = 0;


    private void Start()
    {
        Parse(_level);
        RandomizePositions();
    }


    public void Parse(LevelObject level)
    {
        _remaining = level.gears.Length;
        for (int i = 0; i < level.gears.Length; i++)
        {
            var levelGear = level.gears[i];
            var newPin = Instantiate(_pinPrefab, _pinsContainer);
            newPin.transform.localPosition = levelGear.position;
            newPin.OnMatchChange += CountMatch;
            newPin.Init(levelGear.gearObject);


            var newGear = Instantiate(_gearPrefab, _gearsContainer);
            newGear.Init(levelGear.gearObject);
            newGear.transform.localPosition = levelGear.position;
        }
    }

    public void RandomizePositions()
    {
        var pins = _pinsContainer.GetComponentsInChildren<Pin>().ToList();
        var gears = _gearsContainer.GetComponentsInChildren<Gear>();
        for (int i = 0; i < gears.Length; i++)
        {
            int randomPinIndex = Random.Range(0, pins.Count);
            gears[i].transform.position = pins[randomPinIndex].transform.position;
            pins.RemoveAt(randomPinIndex);
        }
    }

    private void CountMatch(bool match)
    {
        _remaining += match ? -1 : 1;

        //Debug.Log($"{_remaining} remaining");

        if (_remaining == 0)
            Win();

    }
    private void Win()
    {
        Debug.Log("Win!");
    }
}
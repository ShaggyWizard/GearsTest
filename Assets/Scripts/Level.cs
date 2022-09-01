using System.Collections;
using System.Collections.Generic;
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
    [Header("Option")]
    [SerializeField] private float _rotationSpeed;


    private int _remaining = 0;
    private List<Pin> _pinsList;
    private List<Gear> _gearsList;
    private bool _winAnimation;


    private void Start()
    {
        Parse(_level);
        RandomizePositions();
    }


    public void Parse(LevelObject level)
    {
        _remaining = level.gears.Length;
        _gearsList = new List<Gear>();
        for (int i = 0; i < level.gears.Length; i++)
        {
            var levelGear = level.gears[i];
            var newPin = Instantiate(_pinPrefab, _pinsContainer);
            newPin.transform.localPosition = levelGear.position;
            newPin.OnMatchChange += CountMatch;
            newPin.Init(levelGear.gearObject);
            _pinsList.Add(newPin);


            var newGear = Instantiate(_gearPrefab, _gearsContainer);
            newGear.Init(levelGear.gearObject);
            newGear.transform.localPosition = levelGear.position;
            _gearsList.Add(newGear);
        }
    }
    public void RandomizePositions()
    {
        for (int i = 0; i < _gearsList.Count; i++)
        {
            var temp = _gearsList[i];
            int randomIndex = Random.Range(i, _gearsList.Count);
            _gearsList[i] = _gearsList[randomIndex];
            _gearsList[randomIndex] = temp;
        }

        for (int i = 0; i < _pinsList.Count; i++)
        {
            _gearsList[i].transform.position = _pinsList[i].transform.position;
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
        foreach (var gear in _gearsList)
        {
            gear.Lock(true);
        }
        _winAnimation = true;
        StartCoroutine(RotateGears());
    }
    private IEnumerator RotateGears()
    {
        while (_winAnimation)
        {
            for (int i = 0; i < _pinsList.Count; i++)
            {
                var gear = (Gear)_pinsList[i].Placeable;
                float speed = _rotationSpeed * Time.deltaTime;
                speed *= i % 2 == 0 ? 1 : -1;
                gear.Rotate(speed);
            }
            yield return null;
        }
    }
}
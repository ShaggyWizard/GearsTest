using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


public class Level : MonoBehaviour
{
    [Header("Data and  Prefabs")]
    [SerializeField] private LevelObject _level;
    [SerializeField] private AudioSource _audio;
    [SerializeField] private Gear _gearPrefab;
    [SerializeField] private Pin _pinPrefab;
    [Header("Containers")]
    [SerializeField] private Transform _pinsContainer;
    [SerializeField] private Transform _gearsContainer;
    [Header("Option")]
    [SerializeField] private float _rotationSpeed;
    [SerializeField] private float _accelerationTime;


    private int _remaining = 0;
    private List<Pin> _pinsList;
    private List<Gear> _gearsList;
    private bool _winAnimation;
    private float _fullVolume;


    private void Start()
    {
        _fullVolume = _audio.volume;
        _audio.volume = 0;
        Parse(_level);
        RandomizePositions();
    }


    public void Parse(LevelObject level)
    {
        _remaining = level.gears.Length;
        _pinsList = new List<Pin>();
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
            _pinsList[i].SetPlaceable(_gearsList[i]);
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
        _audio.Play();
        StartCoroutine(WinAnimation());
    }
    private IEnumerator WinAnimation()
    {
        float time = 0;
        while (time < _accelerationTime)
        {
            RotateGears(Mathf.Lerp(0, _rotationSpeed, time / _accelerationTime));
            _audio.volume = Mathf.Lerp(0, _fullVolume, time / _accelerationTime);
            time += Time.deltaTime;
            yield return null;
        }
        _audio.volume = _fullVolume;
        while (_winAnimation)
        {
            RotateGears(_rotationSpeed);
            yield return null;
        }
    }
    private void RotateGears(float rotation)
    {
        for (int i = 0; i < _pinsList.Count; i++)
        {
            var gear = (Gear)_pinsList[i].Placeable;
            float speed = rotation * Time.deltaTime;
            speed *= i % 2 == 0 ? 1 : -1;
            gear.Rotate(speed);
        }
    }
}
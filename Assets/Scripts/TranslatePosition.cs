using System.Collections;
using UnityEngine;


[DisallowMultipleComponent]
public class TranslatePosition : MonoBehaviour
{
    [SerializeField] private Vector3 _target;
    [SerializeField] private float _time;
    [SerializeField] private AnimationCurve _curve;
    [SerializeField] private bool _loop;
    [SerializeField] private bool _snap;


    private float _elapsedTime;
    private bool _inProgress;
    private Vector3 _start;
    private Vector3 _final;


    private void Start()
    {
        _start = transform.position;
        _final = transform.position + _target;
    }

    public void Translate()
    {
        if (_inProgress) { return; }
        StartCoroutine(Move());
    }


    private IEnumerator Move()
    {
        _inProgress = true;
        float targetTime = _elapsedTime + _time;


        while (_elapsedTime < targetTime)
        {
            transform.position = Vector3.Lerp(_start, _final, _curve.Evaluate(_elapsedTime / _time));
            _elapsedTime += Time.deltaTime;
            yield return null;
        }

        _inProgress = false;

        if (_loop)
        {
            StartCoroutine(Move());
        }
        else if(_snap)
        {
            transform.position = Vector3.Lerp(_start, _final, _curve.Evaluate(targetTime / _time));
            _elapsedTime = targetTime;
        }
    }
}

using UnityEngine;
using UnityEngine.Events;


public class ColliderButton : MonoBehaviour
{
    [SerializeField] private UnityEvent _unityEvent;


    private void OnMouseDown()
    {
        _unityEvent.Invoke();
    }
}

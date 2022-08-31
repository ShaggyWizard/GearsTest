using UnityEngine;


public class PlayerGrabber : MonoBehaviour
{
    private Camera _camera;
    private IDragable _target;


    private void Awake()
    {
        _camera = Camera.main;
    }
    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            //Debug.Log("Trying to pick up");
            Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            RaycastHit2D[] hit = Physics2D.RaycastAll(mousePos, Vector2.zero);

            for (int i = 0; i < hit.Length; i++)
            {
                if (hit[i].transform != null && hit[i].transform.TryGetComponent(out _target))
                {
                    _target.PickUp(_camera.ScreenToWorldPoint(Input.mousePosition));
                    break;
                    //Debug.Log("Picked up");
                }
            }
        }
        if (Input.GetMouseButton(0) && _target != null)
        {
            _target.Drag(_camera.ScreenToWorldPoint(Input.mousePosition));
            //Debug.Log("Drag");
        }
        if (Input.GetMouseButtonUp(0) && _target != null)
        {
            _target.Release();
            _target = null;

            //Debug.Log("Released");
        }
    }
}

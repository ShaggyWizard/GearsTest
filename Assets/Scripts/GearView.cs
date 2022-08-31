using System.Collections.Generic;
using UnityEngine;


[SelectionBase]
[RequireComponent(typeof(CircleCollider2D))]
public class GearView : MonoBehaviour, IDragable, IPlaceable
{
    [SerializeField] private SpriteRenderer _spriteRenderer;
    [SerializeField] private CircleCollider2D _collider;
    [SerializeField] private GearObject _gearObject;


    private int lastIndex;
    private DragableObject _dragable;

    public IPlacement Placement { get; private set; }

    private void Start()
    {
        _dragable = new DragableObject(transform);
        Init(_gearObject);
        Release();
    }


    public void Init(GearObject gearSO)
    {
        _spriteRenderer.sprite = gearSO.sprite;
        _spriteRenderer.transform.localPosition = gearSO.offset * -1f;
        _collider.radius = gearSO.innerRadius;
    }
    public void PickUp(Vector3 clickPos)
    {
        _dragable.PickUp(clickPos);
    }
    public void Drag(Vector3 clickPos)
    {
        _dragable.Drag(clickPos);
    }
    public void Release()
    {
        List<Collider2D> overlaps = new List<Collider2D>();
        var contactFilter = new ContactFilter2D();
        int colliderCount = _collider.OverlapCollider(contactFilter, overlaps);
        float minDistance = 0;
        IPlacement newPlacement = null;

        for (int i = 0; i < colliderCount; i++)
        {
            if (overlaps[i].transform.TryGetComponent(out IPlacement overlapPlacement))
            {
                float distance = (overlapPlacement.Position - transform.position).magnitude;
                if (newPlacement == null || distance < minDistance)
                {
                    minDistance = distance;
                    newPlacement = overlapPlacement;
                }
            }
        }

        if (newPlacement != null)
        {
            if (newPlacement.Placeable == null)
            {
                newPlacement.SetPlaceable(this);
            }
            else
            {
                IPlacement.Swap(newPlacement, Placement);
            }
        }
        else
        {
            SetPosition(Placement);
        }
    }
    public void SetPlacement(IPlacement newPlacement)
    {
        Placement = newPlacement;
        SetPosition(newPlacement);
    }

    private void SetPosition(IPlacement newPlacement)
    {
        transform.position = newPlacement.Position;
    }
}
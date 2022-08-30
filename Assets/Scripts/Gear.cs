using System.Collections.Generic;
using UnityEditor;
using UnityEngine;


[SelectionBase]
[RequireComponent(typeof(CircleCollider2D))]
public class Gear : MonoBehaviour, IDragable, IPlaceable
{
    [SerializeField] private float _innerRadius;
    [SerializeField] private float _outerRadius;
    [SerializeField] private Vector2 _spriteOffset;
    [SerializeField] private SpriteRenderer _spriteRenderer;
    [SerializeField] private CircleCollider2D _collider;


    public float InnerRadius => _innerRadius;
    public float OuterRadius => _outerRadius;


    private int lastIndex;
    private DragableObject _dragable;
    private IPlacement _placement = null;


    private void Start()
    {
        _dragable = new DragableObject(transform);
        Release();
    }


    public void Init(GearObject gearSO)
    {
        _spriteRenderer.sprite = gearSO.sprite;
        _spriteOffset = gearSO.offset;
        _spriteRenderer.transform.localPosition = _spriteOffset * -1f;
        _innerRadius = gearSO.innerRadius;
        _outerRadius = gearSO.outerRadius;
        _collider.radius = _innerRadius;
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
                if (newPlacement == null || distance < minDistance && _placement.Empty)
                {
                    minDistance = distance;
                    newPlacement = overlapPlacement;
                }
            }
        }

        if (newPlacement != null)
        {
            _placement = newPlacement;
        }

        if (_placement != null)
            transform.position = _placement.Position;
    }
}
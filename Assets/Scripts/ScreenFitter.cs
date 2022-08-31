using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenFitter : MonoBehaviour
{
    private void Start()
    {
        if (!TryGetComponent(out SpriteRenderer spriteRenderer)) { return; }

        Camera camera = Camera.main;
        float height = 2f * camera.orthographicSize;
        float width = height * camera.aspect;

        var spriteSize = spriteRenderer.sprite.bounds.size;
        float spriteAspect = spriteSize.x / spriteSize.y;

        float scale = camera.aspect > spriteAspect ? width / spriteSize.x : height / spriteSize.y;
        transform.localScale = Vector3.one * scale;
    }
}

using UnityEngine;

public static class CircleGenerator
{
    public static Texture2D GetTexture(Vector2Int size, Vector2 offset, float radius, float width, Color color)
    {
        var texture = new Texture2D((int)size.x, (int)size.y, TextureFormat.ARGB32, false);

        float scaledRadius = radius * 100f;
        Vector2 scaledOffset = offset * 100f;

        float sqrOut = (scaledRadius + width) * (scaledRadius + width);
        float sqrRad = (scaledRadius) * (scaledRadius);
        float sqrIn = (scaledRadius - width) * (scaledRadius - width);

        for (int x = 0; x < size.x; x++)
        {
            for (int y = 0; y < size.y; y++)
            {
                float sqrX = (x - (size.x / 2 + scaledOffset.x)) * (x - (size.x / 2 + scaledOffset.x));
                float sqrY = (y - (size.y / 2 + scaledOffset.y)) * (y - (size.y / 2 + scaledOffset.y));
                float sum = sqrX + sqrY;


                float bias = 0f;
                if (sqrRad < sum && sum < sqrOut)
                {
                    bias = (sqrOut - sum) / (sqrOut - sqrRad);
                }
                if (sqrIn < sum && sum < sqrRad)
                {
                    bias = (sum - sqrIn) / (sqrRad - sqrIn);
                }
                texture.SetPixel(x, y, new Color(color.r, color.g, color.b, bias));

            }
        }

        texture.Apply();

        return texture;
    }
}

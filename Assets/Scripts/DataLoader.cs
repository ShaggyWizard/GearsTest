using System.Collections.Generic;
using System.IO;
using UnityEditor;

public static class DataLoader
{
    public static List<GearObject> LoadGearsData()
    {
        List<GearObject> gearsData = new List<GearObject>();

        string[] allPaths = Directory.GetFiles("Assets/Data", "*.asset", SearchOption.AllDirectories);

        foreach (string path in allPaths)
        {
            string cleanedPath = path.Replace("\\", "/");
            GearObject gearObject = (GearObject)AssetDatabase.LoadAssetAtPath(cleanedPath, typeof(GearObject));
            if (gearObject != null)
            {
                gearsData.Add(gearObject);
            }
        }
        return gearsData;
    }
}
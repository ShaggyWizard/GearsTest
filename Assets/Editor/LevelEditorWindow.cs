using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;


public class LevelEditorWindow : EditorWindow
{
    private const string _levelsFolder = "Assets/Data/Levels/";
    private const string _fileExtension = ".asset";
    private const string _levelImage = "Assets/Art/Level/Level.png";
    private const int _itemHeight = 40;

    private ListView _gearsListView;
    private List<string> _gearsDataChoises = new List<string>();
    private Dictionary<string, GearObject> _gearsData = new Dictionary<string, GearObject>();
    private List<GearVisual> _solutionGears = new List<GearVisual>();
    private VisualTreeAsset _gearListItem;
    private VisualElement _gearsListTab;
    private VisualElement _view;
    private ObjectField _levelObjectField;
    private TextField _levelNameField;

    private LevelObject _activeObject;



    [MenuItem("Gears Game Tools/Level Editor")]
    public static void Init()
    {
        LevelEditorWindow window = GetWindow<LevelEditorWindow>();
        window.titleContent = new GUIContent("Level Editor");
    }
    public void CreateGUI()
    {
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/LevelEditor.uxml");
        VisualElement rootFromUXML = visualTree.Instantiate();
        VisualElement uxml = visualTree.CloneTree();
        for (var i = 0; i < uxml.childCount; i++)
        {
            rootVisualElement.Add(uxml.ElementAt(i));
        }


        _gearListItem = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/GearListItemTemplate.uxml");

        _gearsListTab = rootVisualElement.Q<VisualElement>("GearsListTab");
        _view = rootVisualElement.Q<VisualElement>("View");
        _levelObjectField = rootVisualElement.Q<ObjectField>("LevelObject");
        _levelNameField = rootVisualElement.Q<TextField>("LevelName");

        rootVisualElement.Q<Button>("ButtonAdd").clicked += AddGear;
        rootVisualElement.Q<Button>("ButtonRemove").clicked += RemoveGear;
        rootVisualElement.Q<Button>("ButtonCreateNewLevel").clicked += CreateNewLevelObject;

        var bgSprite = (Sprite)AssetDatabase.LoadAssetAtPath(_levelImage, typeof(Sprite));
        var bg = new VisualElement();
        bg.style.width = bgSprite.texture.width;
        bg.style.height = bgSprite.texture.height;
        bg.style.backgroundImage = bgSprite.texture;
        _view.Add(bg);

        _levelObjectField.RegisterValueChangedCallback(evt =>
        {
            LevelObject newLevelObject = (LevelObject)evt.newValue;
            _activeObject = newLevelObject;
        });
        _levelNameField.RegisterValueChangedCallback(evt =>
        {
            EditorUtility.SetDirty(_activeObject);
            string currentPath = AssetDatabase.GetAssetPath(_activeObject);
            string newPath = AssetDatabase.GenerateUniqueAssetPath($"{_levelsFolder}{evt.newValue}{_fileExtension}");
            AssetDatabase.RenameAsset(currentPath, Path.GetFileName(newPath));
            AssetDatabase.Refresh();
        });

        PopulateGearsData();
        GenerateListView();

    }


    private void CreateNewLevelObject()
    {
        LevelObject newItem = CreateInstance<LevelObject>();
        AssetDatabase.CreateAsset(newItem, $"{_levelsFolder}{newItem.ID}{_fileExtension}");
        _activeObject = newItem;
        _levelObjectField.SetValueWithoutNotify(_activeObject);
    }

    private void PopulateGearsData()
    {
        _gearsData.Clear();
        _gearsDataChoises.Clear();

        var gearsDataList = DataLoader.LoadGearsData();

        for (int i = 0; i < gearsDataList.Count; i++)
        {
            string gearName = gearsDataList[i].name;
            _gearsData.Add(gearName, gearsDataList[i]);
            _gearsDataChoises.Add(gearName);
        }
    }
    private void GenerateListView()
    {
        Func<VisualElement> makeItem = () => _gearListItem.CloneTree();
        Action<VisualElement, int> bindItem = (e, i) =>
        {
            e.Q<Label>("Name").text = i.ToString();

            var dropDown = e.Q<DropdownField>("GearType");
            dropDown.choices = _gearsDataChoises;
            dropDown.value = _solutionGears[i].gearObject.name;

            dropDown.RegisterValueChangedCallback(evt =>
            {
                _solutionGears[i].SetGearObject(_gearsData[evt.newValue]);
                _solutionGears[i].Lead();

                Sprite gearSprite = _solutionGears[i].gearObject.sprite;
                if (gearSprite != null)
                {
                    e.Q<VisualElement>("Icon").style.backgroundImage = gearSprite.texture;
                }
            });
        };
        _gearsListView = new ListView(_solutionGears, _itemHeight, makeItem, bindItem);
        _gearsListView.selectionType = SelectionType.Single;
        _gearsListView.style.height = _solutionGears.Count * _itemHeight + 5;
        _gearsListTab.Add(_gearsListView);

        if (_gearsListView.childCount > 0)
            _gearsListView.SetSelection(0);
    }
    private void AddGear()
    {
        GearVisual newGear = new GearVisual();
        newGear.SetGearObject(_gearsData.First().Value);
        _view.Add(newGear);
        if (_solutionGears.Count > 0)
        {
            var lastGear = _solutionGears.Last();
            lastGear.SetNext(newGear);
            newGear.SetPrev(lastGear); 
            newGear.transform.position = lastGear.transform.position + Vector3.right;
            newGear.FollowPrev();
        }

        _solutionGears.Add(newGear);

        DragAndDropManipulator manipulator = new(newGear);

        _gearsListView.style.height = _solutionGears.Count * _itemHeight;
        _gearsListView.Rebuild();
    }
    private void RemoveGear()
    {
        if (_solutionGears.Count == 0) { return; }

        _view.Remove(_solutionGears[_solutionGears.Count - 1]);
        _solutionGears.RemoveAt(_solutionGears.Count - 1);

        if (_gearsListView.selectedIndex == _solutionGears.Count)
        {
            _gearsListView.ClearSelection();
        }
        _gearsListView.Rebuild();
    }
}

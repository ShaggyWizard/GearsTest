using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;
using UnityEngine.UIElements;

public class GearEditorWindow : EditorWindow
{
    private List<GearObject> _itemDatabase = new List<GearObject>();

    private VisualElement _itemsTab;
    private ListView _itemListView;
    private static VisualTreeAsset _itemRowTemplate;
    private Sprite _defaultItemIcon;

    private ScrollView _detailSection;
    private GearObject _activeObject;

    private TextField _nameField;
    private ObjectField _spritePicker;
    private MinMaxSlider _radiusSlider;
    private FloatField _innerRadiusFloat;
    private FloatField _outerRadiusFloat;
    private Vector2Field _offsetField;
    private VisualElement _gearPreview;
    private VisualElement _innerRadiusPreview;
    private VisualElement _outerRadiusPreview;
    private Vector2Int _textureSize;

    private const int _itemHeight = 60;
    private const float _circleWidth = 1f;
    private const string _gearsFolder = "Assets/Data/Gears/";
    private const string _fileExtension = ".asset";


    [MenuItem("Gears Game Tools/Gears Editor")]
    public static void Init()
    {
        GearEditorWindow window = GetWindow<GearEditorWindow>();
        window.titleContent = new GUIContent("Gears Editor");
        Vector2 size = new Vector2(800, 475);
        window.minSize = size;
        window.maxSize = size;
    }
    public void CreateGUI()
    {
        var visualTree = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/ItemDatabase.uxml");
        VisualElement rootFromUXML = visualTree.Instantiate();
        rootVisualElement.Add(rootFromUXML);

        var styleSheet = AssetDatabase.LoadAssetAtPath<StyleSheet>("Assets/Editor/ItemDatabase.uss");
        rootVisualElement.styleSheets.Add(styleSheet);

        _itemRowTemplate = AssetDatabase.LoadAssetAtPath<VisualTreeAsset>("Assets/Editor/ItemRowTemplate.uxml");
        _defaultItemIcon = (Sprite)AssetDatabase.LoadAssetAtPath("Assets/Editor/UnknownIcon.png", typeof(Sprite));

        _detailSection = rootVisualElement.Q<ScrollView>("ScrollView_Details");
        _gearPreview = _detailSection.Q<VisualElement>("Icon");
        _innerRadiusPreview = _detailSection.Q<VisualElement>("InnerRadius");
        _outerRadiusPreview = _detailSection.Q<VisualElement>("OuterRadius");

        _nameField = _detailSection.Q<TextField>("GearName");
        _spritePicker = _detailSection.Q<ObjectField>("SpritePicker");
        _radiusSlider = _detailSection.Q<MinMaxSlider>("GearRadius");
        _innerRadiusFloat = _detailSection.Q<FloatField>("InnerRadiusFloat");
        _outerRadiusFloat = _detailSection.Q<FloatField>("OuterRadiusFloat");
        _offsetField = _detailSection.Q<Vector2Field>("GearOffset");

        _itemDatabase = DataLoader.LoadGearsData();

        _itemsTab = rootVisualElement.Q<VisualElement>("ItemsTab");
        GenerateListView();

        rootVisualElement.Q<Button>("ButtonAddItem").clicked += AddItem;
        rootVisualElement.Q<Button>("ButtonDeleteItem").clicked += DeleteItem;
        rootVisualElement.Q<Button>("ButtonSave").clicked += Save;

        _nameField.RegisterValueChangedCallback(evt =>
        {
            _activeObject.displayName = evt.newValue;
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
        _spritePicker.RegisterValueChangedCallback(evt =>
        {
            Sprite newSprite = evt.newValue as Sprite;
            _activeObject.sprite = newSprite == null ? _defaultItemIcon : newSprite;
            if (newSprite != null)
            {
                _gearPreview.style.width = newSprite.texture.width;
                _gearPreview.style.height = newSprite.texture.height;
                _gearPreview.style.backgroundImage =  newSprite.texture;
                float maxRadius = Mathf.Max(newSprite.texture.width, newSprite.texture.height) / 2f;
                _radiusSlider.highLimit = maxRadius * 0.01f;
            }
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
        _radiusSlider.RegisterValueChangedCallback(evt =>
        {
            _activeObject.innerRadius = evt.newValue.x;
            _activeObject.outerRadius = evt.newValue.y;
            _innerRadiusFloat.SetValueWithoutNotify(evt.newValue.x);
            _outerRadiusFloat.SetValueWithoutNotify(evt.newValue.y);

            UpdatePreview();
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
        _innerRadiusFloat.RegisterValueChangedCallback(evt =>
        {
            _activeObject.innerRadius = evt.newValue;
            _radiusSlider.SetValueWithoutNotify(new Vector2(evt.newValue, _radiusSlider.maxValue));
            UpdatePreview();
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
        _outerRadiusFloat.RegisterValueChangedCallback(evt =>
        {
            _activeObject.outerRadius = evt.newValue;
            _radiusSlider.SetValueWithoutNotify(new Vector2(_radiusSlider.minValue, evt.newValue));
            UpdatePreview();
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
        _offsetField.RegisterValueChangedCallback(evt =>
        {
            _activeObject.offset = evt.newValue;
            UpdatePreview();
            _activeObject.changed = true;
            _itemListView.Rebuild();
        });
    }


    private void AddItem()
    {
        GearObject newItem = CreateInstance<GearObject>();
        newItem.displayName = $"New Gear";
        AssetDatabase.CreateAsset(newItem, $"Assets/Data/{newItem.ID}.asset");
        _itemDatabase.Add(newItem);
        _itemListView.Rebuild();
        _itemListView.style.height = _itemDatabase.Count * _itemHeight;
        _itemListView.SetSelection(_itemDatabase.Count - 1);
    }
    private void DeleteItem()
    {
        string path = AssetDatabase.GetAssetPath(_activeObject);
        AssetDatabase.DeleteAsset(path);
        _itemDatabase.Remove(_activeObject);
        _itemListView.Rebuild();
        _detailSection.style.visibility = Visibility.Hidden;
    }
    private void LoadAllItems()
    {
        _itemDatabase.Clear();

        string[] allPaths = Directory.GetFiles("Assets/Data", "*.asset", SearchOption.AllDirectories);

        foreach (string path in allPaths)
        {
            string cleanedPath = path.Replace("\\", "/");
            _itemDatabase.Add((GearObject)AssetDatabase.LoadAssetAtPath(cleanedPath, typeof(GearObject)));
        }
    }
    private void GenerateListView()
    {
        Func<VisualElement> makeItem = () => _itemRowTemplate.CloneTree();
        Action<VisualElement, int> bindItem = (e, i) =>
        {
            e.Q<VisualElement>("Icon").style.backgroundImage = GetTexture(_itemDatabase[i]);
            string name = _itemDatabase[i].displayName;
            if (_itemDatabase[i].changed)
            {
                name += " *";
            }
            e.Q<Label>("Name").text = name;
        };
        _itemListView = new ListView(_itemDatabase, _itemHeight, makeItem, bindItem);
        _itemListView.selectionType = SelectionType.Single;
        _itemListView.style.height = _itemDatabase.Count * _itemHeight + 5;
        _itemsTab.Add(_itemListView);


        _itemListView.onSelectionChange += OnSelect;
        if (_itemListView.childCount > 0)
            _itemListView.SetSelection(0);
    }
    private void OnSelect(IEnumerable<object> selectedItems)
    {
        _activeObject = (GearObject)selectedItems.First();
        SerializedObject so = new SerializedObject(_activeObject);
        _detailSection.Bind(so);

        _nameField.SetValueWithoutNotify(_activeObject.displayName);
        _spritePicker.SetValueWithoutNotify(_activeObject.sprite);

        var newTexture = GetTexture(_activeObject);
        //This is used because style.width is not updated immediately
        _textureSize = new Vector2Int(newTexture.width, newTexture.height);

        _gearPreview.style.width = newTexture.width;
        _gearPreview.style.height = newTexture.height;
        _gearPreview.style.backgroundImage = newTexture;
        _innerRadiusFloat.SetValueWithoutNotify(_activeObject.innerRadius);
        _outerRadiusFloat.SetValueWithoutNotify(_activeObject.outerRadius);
        _radiusSlider.SetValueWithoutNotify(new Vector2(_activeObject.innerRadius, _activeObject.outerRadius));
        float maxRadius = Mathf.Max(newTexture.width, newTexture.height) / 2f;
        _radiusSlider.highLimit = maxRadius * 0.01f;
        _offsetField.SetValueWithoutNotify(_activeObject.offset);
        _offsetField.SetValueWithoutNotify(_activeObject.offset);
        UpdatePreview();
        _detailSection.style.visibility = Visibility.Visible;
    }
    private Texture2D GetTexture(GearObject gear)
    {
        if (gear != null && gear.sprite != null)
        {
            return gear.sprite.texture;
        }
        return _defaultItemIcon.texture;
    }
    private void UpdatePreview()
    {
        _innerRadiusPreview.style.backgroundImage = CircleGenerator.GetTexture(_textureSize, _activeObject.offset, _activeObject.innerRadius, _circleWidth, Color.green);
        _outerRadiusPreview.style.backgroundImage = CircleGenerator.GetTexture(_textureSize, _activeObject.offset, _activeObject.outerRadius, _circleWidth, Color.red);
    }
    private void Save()
    {
        _activeObject.changed = false;
        EditorUtility.SetDirty(_activeObject);
        string currentPath = AssetDatabase.GetAssetPath(_activeObject);
        string newPath = AssetDatabase.GenerateUniqueAssetPath($"{_gearsFolder}{_activeObject.displayName}{_fileExtension}");
        AssetDatabase.RenameAsset(currentPath, Path.GetFileName(newPath));
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        _itemListView.Rebuild();
    }
}
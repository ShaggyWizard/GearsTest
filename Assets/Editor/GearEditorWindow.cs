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
    private static List<GearObject> _itemDatabase = new List<GearObject>();

    private VisualElement _itemsTab;
    private ListView ItemListView;
    private static VisualTreeAsset _itemRowTemplate;
    private Sprite _defaultItemIcon;

    private ScrollView _detailSection;
    private GearObject _activeItem;

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

        LoadAllItems();

        _itemsTab = rootVisualElement.Q<VisualElement>("ItemsTab");
        GenerateListView();

        rootVisualElement.Q<Button>("Btn_AddItem").clicked += AddItem;
        rootVisualElement.Q<Button>("Btn_DeleteItem").clicked += DeleteItem;

        _nameField.RegisterValueChangedCallback(evt =>
        {
            _activeItem.displayName = evt.newValue;
            ItemListView.Rebuild();
        });
        _spritePicker.RegisterValueChangedCallback(evt =>
        {
            Sprite newSprite = evt.newValue as Sprite;
            _activeItem.sprite = newSprite == null ? _defaultItemIcon : newSprite;
            if (newSprite != null)
            {
                _gearPreview.style.width = newSprite.texture.width;
                _gearPreview.style.height = newSprite.texture.height;
                _gearPreview.style.backgroundImage =  newSprite.texture;
                float maxRadius = Mathf.Max(newSprite.texture.width, newSprite.texture.height) / 2f;
                _radiusSlider.highLimit = maxRadius * 0.01f;
            }
            ItemListView.Rebuild();
        });
        _radiusSlider.RegisterValueChangedCallback(evt =>
        {
            _activeItem.innerRadius = evt.newValue.x;
            _activeItem.outerRadius = evt.newValue.y;
            _innerRadiusFloat.value = evt.newValue.x;
            _outerRadiusFloat.value = evt.newValue.y;
            UpdatePreview();
            ItemListView.Rebuild();
        });
        _innerRadiusFloat.RegisterValueChangedCallback(evt =>
        {
            _activeItem.innerRadius = evt.newValue;
            _radiusSlider.minValue = evt.newValue;
            UpdatePreview();
            ItemListView.Rebuild();
        });
        _outerRadiusFloat.RegisterValueChangedCallback(evt =>
        {
            _activeItem.outerRadius = evt.newValue;
            _radiusSlider.maxValue = evt.newValue;
            UpdatePreview();
            ItemListView.Rebuild();
        });
        _offsetField.RegisterValueChangedCallback(evt =>
        {
            _activeItem.offset = evt.newValue;
            UpdatePreview();
            ItemListView.Rebuild();
        });
    }


    private void AddItem()
    {
        GearObject newItem = CreateInstance<GearObject>();
        newItem.displayName = $"New Gear";
        AssetDatabase.CreateAsset(newItem, $"Assets/Data/{newItem.ID}.asset");
        _itemDatabase.Add(newItem);
        ItemListView.Rebuild();
        ItemListView.style.height = _itemDatabase.Count * _itemHeight;
        ItemListView.style.height = _itemDatabase.Count * _itemHeight + 5;
        ItemListView.SetSelection(_itemDatabase.Count - 1);
    }
    private void DeleteItem()
    {
        string path = AssetDatabase.GetAssetPath(_activeItem);
        AssetDatabase.DeleteAsset(path);
        _itemDatabase.Remove(_activeItem);
        ItemListView.Rebuild();
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
            e.Q<Label>("Name").text = _itemDatabase[i].displayName;
        };
        ItemListView = new ListView(_itemDatabase, _itemHeight, makeItem, bindItem);
        ItemListView.selectionType = SelectionType.Single;
        ItemListView.style.height = _itemDatabase.Count * _itemHeight + 5;
        _itemsTab.Add(ItemListView);


        ItemListView.onSelectionChange += OnSelect;
        if (ItemListView.childCount > 0)
            ItemListView.SetSelection(0);
    }
    private void OnSelect(IEnumerable<object> selectedItems)
    {
        _activeItem = (GearObject)selectedItems.First();
        SerializedObject so = new SerializedObject(_activeItem);
        _detailSection.Bind(so);

        _nameField.value = _activeItem.displayName;
        _spritePicker.value = _activeItem.sprite;
        _spritePicker.value = _activeItem.sprite;
        var newTexture = GetTexture(_activeItem);
        //This is used because style.width is not updated immediately
        _textureSize = new Vector2Int(newTexture.width, newTexture.height);
        _gearPreview.style.width = newTexture.width;
        _gearPreview.style.height = newTexture.height;
        _gearPreview.style.backgroundImage = newTexture;
        float maxRadius = Mathf.Max(newTexture.width, newTexture.height) / 2f;
        _radiusSlider.highLimit = maxRadius * 0.01f;
        _innerRadiusFloat.value = _activeItem.innerRadius;
        _outerRadiusFloat.value = _activeItem.outerRadius;
        _radiusSlider.value = new Vector2(_activeItem.innerRadius, _activeItem.outerRadius);
        _offsetField.value = _activeItem.offset;
        _offsetField.value = _activeItem.offset;
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
        _innerRadiusPreview.style.backgroundImage = CircleGenerator.GetTexture(_textureSize, _activeItem.offset, _activeItem.innerRadius, _circleWidth, Color.green);
        _outerRadiusPreview.style.backgroundImage = CircleGenerator.GetTexture(_textureSize, _activeItem.offset, _activeItem.outerRadius, _circleWidth, Color.red);
    }
}
#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43;
// System.Collections.Generic.List`1<Gear>
struct List_1_t485A6037E42C001E3E2640663B469A918DF46262;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Pin>
struct List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Gear[]
struct GearU5BU5D_tA1A483AF04E319559DEFF2595D366AE16CAF5123;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LevelGear[]
struct LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Pin[]
struct PinU5BU5D_t4EB1E9D04B2A67881F32713DEBBE9C20F62B29BB;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// ActiveToggle
struct ActiveToggle_t9F38CC9F8949FD659780BD585A55179C2BB4F639;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// ColliderButton
struct ColliderButton_tF1BDAC5A518D6F8A90E349CAD05994FA1B2E932E;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DataObject
struct DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DragableObject
struct DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gear
struct Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB;
// GearObject
struct GearObject_t5FE99835F41A87A610443F10964A664C69865AA2;
// GearVisual
struct GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// IDragable
struct IDragable_t66E9FACA38F86CE78AED884BFF59125743706758;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IPlaceable
struct IPlaceable_tDDF14B010793A2F699B5CF1265C4A146448BCC47;
// IPlacement
struct IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E;
// UnityEngine.UIElements.IStyle
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
// UnityEngine.UIElements.ITransform
struct ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Level
struct Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1;
// LevelGear
struct LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4;
// LevelObject
struct LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Pin
struct Pin_t436B943A646153A43944025466CB8B68CE763843;
// PlayerGrabber
struct PlayerGrabber_t7E517656E22325571E4EB2ED67581D82648B3FEE;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScreenFitter
struct ScreenFitter_tEA276D841D70859F9E3D6473D72A9E13EBB121A3;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TranslatePosition
struct TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UIElements.VectorImage
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Level/<WinAnimation>d__18
struct U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8;
// TranslatePosition/<Move>d__11
struct U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDragable_t66E9FACA38F86CE78AED884BFF59125743706758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlaceable_tDDF14B010793A2F699B5CF1265C4A146448BCC47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t485A6037E42C001E3E2640663B469A918DF46262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisIDragable_t66E9FACA38F86CE78AED884BFF59125743706758_mE01C6958030E0BAE9618AE125A208BE48C19AA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisIPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_m08EB7F029D441873CECC9A94AC04944EE12E32A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD688D72984FC989FE13E543250B95B3138B0D0DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB6D50815934F48B1CDCB396A3E245AD26BBB3FB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB67944247850AE3BCB72BEAF8C9F107568B6F1C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0E040A8EF15B7B090B920D86863CDB6F03593AB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Level_CountMatch_m386E268893E0BC946C727AAD9A17BB431F4EE59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3B36D01F17363EC4187B6991E38F8B0CB0E1DDD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA0A199FF55D6F918B941466CB32F7A35269D47B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDECD8DABCA0A0C7A278968B5C3251D7E99E4ABAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m54227E49077FD68C5C26881DB0AA89863BEC4DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4D21063067A13A4978C1DCAE2E4F070988B82D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_m7AAF767DCE9BAA22967A68E0658AE6753892C201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisPin_t436B943A646153A43944025466CB8B68CE763843_m14B7F505E58D1B59A1DC954B434B97767AEB1A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mDE54B75038408D934E3BCCDA4537AC0DE12305CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__11_System_Collections_IEnumerator_Reset_m2783464F20E48E0A0C9268EDE6345A064B321EB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWinAnimationU3Ed__18_System_Collections_IEnumerator_Reset_mFFBC044DE6EB334CA232F1AAE94615E6A3729035_RuntimeMethod_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Collider2DU5BU5D_t4771A44B23D278BC01AB6ED33A9A28E48DC0B034* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Gear>
struct List_1_t485A6037E42C001E3E2640663B469A918DF46262  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GearU5BU5D_tA1A483AF04E319559DEFF2595D366AE16CAF5123* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t485A6037E42C001E3E2640663B469A918DF46262_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GearU5BU5D_tA1A483AF04E319559DEFF2595D366AE16CAF5123* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pin>
struct List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PinU5BU5D_t4EB1E9D04B2A67881F32713DEBBE9C20F62B29BB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PinU5BU5D_t4EB1E9D04B2A67881F32713DEBBE9C20F62B29BB* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// CircleGenerator
struct CircleGenerator_tB9DD5520B814E751E250E9034ACBE2C6DAF54792  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Level/<WinAnimation>d__18
struct U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8  : public RuntimeObject
{
	// System.Int32 Level/<WinAnimation>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Level/<WinAnimation>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Level Level/<WinAnimation>d__18::<>4__this
	Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* ___U3CU3E4__this_2;
	// System.Single Level/<WinAnimation>d__18::<time>5__2
	float ___U3CtimeU3E5__2_3;
};

// TranslatePosition/<Move>d__11
struct U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7  : public RuntimeObject
{
	// System.Int32 TranslatePosition/<Move>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TranslatePosition/<Move>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TranslatePosition TranslatePosition/<Move>d__11::<>4__this
	TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* ___U3CU3E4__this_2;
	// System.Single TranslatePosition/<Move>d__11::<targetTime>5__2
	float ___U3CtargetTimeU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<Gear>
struct Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t485A6037E42C001E3E2640663B469A918DF46262* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>
struct StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>
struct StyleEnum_1_t34BA4FFF165BCD81079E00E954FA752C1047ABBF 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>
struct StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 
{
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	// UnityEngine.Texture2D UnityEngine.UIElements.Background::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	// UnityEngine.Sprite UnityEngine.UIElements.Background::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	// UnityEngine.RenderTexture UnityEngine.UIElements.Background::m_RenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	// UnityEngine.UIElements.VectorImage UnityEngine.UIElements.Background::m_VectorImage
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Background
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_1;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_2;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleFloat
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 
{
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// DragableObject
struct DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5  : public RuntimeObject
{
	// UnityEngine.Transform DragableObject::_target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____target_0;
	// UnityEngine.Vector3 DragableObject::_clickOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____clickOffset_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// LevelGear
struct LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4  : public RuntimeObject
{
	// UnityEngine.Vector2 LevelGear::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_0;
	// GearObject LevelGear::gearObject
	GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___gearObject_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B 
{
	// UnityEngine.UIElements.Background UnityEngine.UIElements.StyleBackground::m_Value
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleBackground::m_Keyword
	int32_t ___m_Keyword_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_pinvoke
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke ___m_Value_0;
	int32_t ___m_Keyword_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleBackground
struct StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_marshaled_com
{
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com ___m_Value_0;
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleColor
struct StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 
{
	// UnityEngine.Color UnityEngine.UIElements.StyleColor::m_Value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleColor::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleLength
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleLength::m_Value
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleLength::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DataObject
struct DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean DataObject::changed
	bool ___changed_4;
	// System.String DataObject::ID
	String_t* ___ID_5;
	// System.String DataObject::displayName
	String_t* ___displayName_6;
};

// GearVisual
struct GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	// GearObject GearVisual::<gearObject>k__BackingField
	GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___U3CgearObjectU3Ek__BackingField_65;
	// GearVisual GearVisual::_next
	GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ____next_66;
	// GearVisual GearVisual::_prev
	GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ____prev_67;
	// UnityEngine.UIElements.VisualElement GearVisual::_handle
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ____handle_68;
	// UnityEngine.UIElements.VisualElement GearVisual::_gearImage
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ____gearImage_69;
};

struct GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields
{
	// UnityEngine.Color GearVisual::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_72;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GearObject
struct GearObject_t5FE99835F41A87A610443F10964A664C69865AA2  : public DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC
{
	// System.Single GearObject::innerRadius
	float ___innerRadius_7;
	// System.Single GearObject::outerRadius
	float ___outerRadius_8;
	// UnityEngine.Sprite GearObject::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_9;
	// UnityEngine.Vector2 GearObject::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_10;
};

// LevelObject
struct LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91  : public DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC
{
	// LevelGear[] LevelObject::gears
	LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2* ___gears_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ActiveToggle
struct ActiveToggle_t9F38CC9F8949FD659780BD585A55179C2BB4F639  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.CircleCollider2D
struct CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// ColliderButton
struct ColliderButton_tF1BDAC5A518D6F8A90E349CAD05994FA1B2E932E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent ColliderButton::_unityEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____unityEvent_4;
};

// Gear
struct Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Gear::_spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____spriteRenderer_4;
	// UnityEngine.CircleCollider2D Gear::_collider
	CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* ____collider_5;
	// UnityEngine.AudioSource Gear::_audioPickUp
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioPickUp_6;
	// UnityEngine.AudioSource Gear::_audioPutDown
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioPutDown_7;
	// DragableObject Gear::_dragable
	DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* ____dragable_8;
	// System.Boolean Gear::_lock
	bool ____lock_9;
	// System.Single Gear::_rotationModifier
	float ____rotationModifier_10;
	// System.String Gear::<MatchID>k__BackingField
	String_t* ___U3CMatchIDU3Ek__BackingField_11;
	// IPlacement Gear::<Placement>k__BackingField
	RuntimeObject* ___U3CPlacementU3Ek__BackingField_12;
};

// Level
struct Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelObject Level::_level
	LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* ____level_4;
	// UnityEngine.AudioSource Level::_audio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audio_5;
	// Gear Level::_gearPrefab
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* ____gearPrefab_6;
	// Pin Level::_pinPrefab
	Pin_t436B943A646153A43944025466CB8B68CE763843* ____pinPrefab_7;
	// UnityEngine.Transform Level::_pinsContainer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pinsContainer_8;
	// UnityEngine.Transform Level::_gearsContainer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____gearsContainer_9;
	// System.Single Level::_rotationSpeed
	float ____rotationSpeed_10;
	// System.Single Level::_accelerationTime
	float ____accelerationTime_11;
	// System.Int32 Level::_remaining
	int32_t ____remaining_12;
	// System.Collections.Generic.List`1<Pin> Level::_pinsList
	List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* ____pinsList_13;
	// System.Collections.Generic.List`1<Gear> Level::_gearsList
	List_1_t485A6037E42C001E3E2640663B469A918DF46262* ____gearsList_14;
	// System.Boolean Level::_winAnimation
	bool ____winAnimation_15;
	// System.Single Level::_fullVolume
	float ____fullVolume_16;
};

// Pin
struct Pin_t436B943A646153A43944025466CB8B68CE763843  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// IPlaceable Pin::<Placeable>k__BackingField
	RuntimeObject* ___U3CPlaceableU3Ek__BackingField_4;
	// System.String Pin::<MatchID>k__BackingField
	String_t* ___U3CMatchIDU3Ek__BackingField_5;
	// System.Action`1<System.Boolean> Pin::OnMatchChange
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMatchChange_6;
	// System.Boolean Pin::_match
	bool ____match_7;
};

// PlayerGrabber
struct PlayerGrabber_t7E517656E22325571E4EB2ED67581D82648B3FEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera PlayerGrabber::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// IDragable PlayerGrabber::_target
	RuntimeObject* ____target_5;
};

// ScreenFitter
struct ScreenFitter_tEA276D841D70859F9E3D6473D72A9E13EBB121A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TranslatePosition
struct TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 TranslatePosition::_target
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____target_4;
	// System.Single TranslatePosition::_time
	float ____time_5;
	// UnityEngine.AnimationCurve TranslatePosition::_curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____curve_6;
	// System.Boolean TranslatePosition::_loop
	bool ____loop_7;
	// System.Boolean TranslatePosition::_snap
	bool ____snap_8;
	// System.Single TranslatePosition::_elapsedTime
	float ____elapsedTime_9;
	// System.Boolean TranslatePosition::_inProgress
	bool ____inProgress_10;
	// UnityEngine.Vector3 TranslatePosition::_start
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____start_11;
	// UnityEngine.Vector3 TranslatePosition::_final
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____final_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// LevelGear[]
struct LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2  : public RuntimeArray
{
	ALIGN_FIELD (8) LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* m_Items[1];

	inline LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC StyleEnum_1_op_Implicit_m738820EFC17933CBBB04248B0D24D22EF6B5691E_gshared (int32_t ___v0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void DragableObject::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject__ctor_m019987E4686B63841171CE12A7CEC4DC9E710AC9 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CircleCollider2D::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52 (CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Gear::CalculateRotationModifier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_CalculateRotationModifier_m9B372791C89ED98DD50D6602E8F64405F4485DFB (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, float ___radius0, const RuntimeMethod* method) ;
// System.Void Gear::set_MatchID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_set_MatchID_mA0328087070E3E41D678C2EC67E0FE3AB446A167_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void DragableObject::PickUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject_PickUp_mEDE43F6030BC3DCFB3C158AF7E9189F5A8177AC4 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void DragableObject::Drag(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject_Drag_m7D6E6980F73D5F53DD0E63367468DEC885D384C9 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider2D>::.ctor()
inline void List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7 (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Collider2D::OverlapCollider(UnityEngine.ContactFilter2D,System.Collections.Generic.List`1<UnityEngine.Collider2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collider2D_OverlapCollider_m02DEE1A9596975452BC43CFC08EF5071426D51CC (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___contactFilter0, List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* ___results1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Collider2D>::get_Item(System.Int32)
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<IPlacement>(T&)
inline bool Component_TryGetComponent_TisIPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_m08EB7F029D441873CECC9A94AC04944EE12E32A7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// IPlacement Gear::get_Placement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Gear_get_Placement_m31D6B0879A2F7F07090131406E7CA366D5F7E274_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) ;
// System.Void IPlacement::Swap(IPlacement,IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPlacement_Swap_mCC59419FE6DC961CF3142D1AAEEF2AB288C46284 (RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) ;
// System.Void Gear::SetPosition(IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_SetPosition_m16FC028407C418CE633DA26EA9D08D2B43999FA5 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___newPlacement0, const RuntimeMethod* method) ;
// System.Void Gear::set_Placement(IPlacement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_set_Placement_m23CB1814D6FB299224B5A66A300EC375A4831115_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void DataObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataObject__ctor_m96B598C9FDE4808AFEB15049A4AA35A49E170360 (DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IStyle UnityEngine.UIElements.VisualElement::get_style()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>::op_Implicit(T)
inline StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322 (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_m738820EFC17933CBBB04248B0D24D22EF6B5691E_gshared)(___v0, method);
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>::op_Implicit(T)
inline StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_m738820EFC17933CBBB04248B0D24D22EF6B5691E_gshared)(___v0, method);
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>::op_Implicit(T)
inline StyleEnum_1_t34BA4FFF165BCD81079E00E954FA752C1047ABBF StyleEnum_1_op_Implicit_mDE54B75038408D934E3BCCDA4537AC0DE12305CA (int32_t ___v0, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t34BA4FFF165BCD81079E00E954FA752C1047ABBF (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_m738820EFC17933CBBB04248B0D24D22EF6B5691E_gshared)(___v0, method);
}
// UnityEngine.UIElements.StyleLength UnityEngine.UIElements.StyleLength::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763 (float ___v0, const RuntimeMethod* method) ;
// System.Void GearVisual::CreateGearImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_CreateGearImage_mD6B201FD79FCF79A7CDC38F69BCEF5E533C55019 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// System.Void GearVisual::CreateHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_CreateHandle_m04A6252F7C2D2AAFA08F805F8F983F6B40ED2BC4 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193 (float ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::set_pickingMode(UnityEngine.UIElements.PickingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualElement::Add(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___child0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleColor UnityEngine.UIElements.StyleColor::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 StyleColor_op_Implicit_m998C496B6B796ECB1D4A5EEE3ED1C1FDEE975F52 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___v0, const RuntimeMethod* method) ;
// System.Void GearVisual::set_gearObject(GearObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVisual_set_gearObject_m37389BF863530245100BDE3C4950B55CBC9501AF_inline (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___value0, const RuntimeMethod* method) ;
// GearObject GearVisual::get_gearObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleBackground UnityEngine.UIElements.StyleBackground::op_Implicit(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B StyleBackground_op_Implicit_m2FE4B478451135BE6F08033973968C8E3F224DB8 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___v0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.ITransform UnityEngine.UIElements.VisualElement::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void GearVisual::LeadNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_LeadNext_mA07991FBE49266F19772B2CBC33A9369BAFF00DA (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// System.Void GearVisual::LeadPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_LeadPrev_m8B96F32BB872641726E694069820AD2E8836AAF1 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// System.Void GearVisual::FollowPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_FollowPrev_m8031F6720B4A8EBB478E3CFDD463EB365B3C6522 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// System.Void GearVisual::FollowNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_FollowNext_mFE03A3C10CC27DF07E202138AC08736087F9A4E2 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) ;
// System.Void GearVisual::Follow(GearVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_Follow_m490EF17F1E64380A7FFEF181F93841C4DE28102A (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ___gear0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Level::Parse(LevelObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Parse_m032A4937B235800EB4E57949A3628517EC4A9B3D (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* ___level0, const RuntimeMethod* method) ;
// System.Void Level::RandomizePositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_RandomizePositions_m9914748CEE03B6B860C9A7E71F61131B6C4D9355 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pin>::.ctor()
inline void List_1__ctor_m54227E49077FD68C5C26881DB0AA89863BEC4DFE (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Gear>::.ctor()
inline void List_1__ctor_mE4D21063067A13A4978C1DCAE2E4F070988B82D2 (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<Pin>(T,UnityEngine.Transform)
inline Pin_t436B943A646153A43944025466CB8B68CE763843* Object_Instantiate_TisPin_t436B943A646153A43944025466CB8B68CE763843_m14B7F505E58D1B59A1DC954B434B97767AEB1A3E (Pin_t436B943A646153A43944025466CB8B68CE763843* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  Pin_t436B943A646153A43944025466CB8B68CE763843* (*) (Pin_t436B943A646153A43944025466CB8B68CE763843*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Pin::add_OnMatchChange(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_add_OnMatchChange_mEF9D268E8739618C5DBC1A1E9FB5EFCE21325CCC (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Pin::Init(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_Init_m9175A50C3F50CCBADA098B9E17E59D124A98C2C4 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___gearObject0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Pin>::Add(T)
inline void List_1_Add_m3B36D01F17363EC4187B6991E38F8B0CB0E1DDD5_inline (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* __this, Pin_t436B943A646153A43944025466CB8B68CE763843* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257*, Pin_t436B943A646153A43944025466CB8B68CE763843*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Object::Instantiate<Gear>(T,UnityEngine.Transform)
inline Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* Object_Instantiate_TisGear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_m7AAF767DCE9BAA22967A68E0658AE6753892C201 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* (*) (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void Gear::Init(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Init_mA97F9E5245511DBD893F82BF3C8107C2B2454DB6 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___gearSO0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Gear>::Add(T)
inline void List_1_Add_mA0A199FF55D6F918B941466CB32F7A35269D47B3_inline (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<Gear>::get_Item(System.Int32)
inline Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Gear>::get_Count()
inline int32_t List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_inline (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Gear>::set_Item(System.Int32,T)
inline void List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558 (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, int32_t ___index0, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, int32_t, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// T System.Collections.Generic.List`1<Pin>::get_Item(System.Int32)
inline Pin_t436B943A646153A43944025466CB8B68CE763843* List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38 (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Pin_t436B943A646153A43944025466CB8B68CE763843* (*) (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Pin::SetPlaceable(IPlaceable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_SetPlaceable_m0BE4CCEE908E45DD3242ECE31E4ACD6A441A33B8 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, RuntimeObject* ___placeable0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Pin>::get_Count()
inline int32_t List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_inline (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Level::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Win_m21E9F9A44AD806F26DDD9A749A7E81D39DFB19C0 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Gear>::GetEnumerator()
inline Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90 List_1_GetEnumerator_mDECD8DABCA0A0C7A278968B5C3251D7E99E4ABAE (List_1_t485A6037E42C001E3E2640663B469A918DF46262* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90 (*) (List_1_t485A6037E42C001E3E2640663B469A918DF46262*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Gear>::Dispose()
inline void Enumerator_Dispose_mB6D50815934F48B1CDCB396A3E245AD26BBB3FB5 (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Gear>::get_Current()
inline Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* Enumerator_get_Current_m0E040A8EF15B7B090B920D86863CDB6F03593AB1_inline (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90* __this, const RuntimeMethod* method)
{
	return ((  Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* (*) (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Gear::Lock(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_Lock_m29278FF891D4F823F9E750BA6F143B9DB492EBB6_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, bool ___newLock0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Gear>::MoveNext()
inline bool Enumerator_MoveNext_mB67944247850AE3BCB72BEAF8C9F107568B6F1C2 (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.IEnumerator Level::WinAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WinAnimation_mE70A16FFF1B01B605D17E657B35068410564B968 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Level/<WinAnimation>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinAnimationU3Ed__18__ctor_m455C6F67C627693A7D7C5941C2D180B561813073 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// IPlaceable Pin::get_Placeable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pin_get_Placeable_mE30D2C67FB6AF637387681A38A31D893DB276045_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void Gear::Rotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Rotate_m2A7118BFAFE1032E113F2979032E50A248AC4BBE (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Level::RotateGears(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_RotateGears_mBDD4D34A9FB75130BD2FB3C97521D0CF5974126D (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, float ___rotation0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Pin::set_MatchID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pin_set_MatchID_m069944B308B87DD0219D9C2BDE5261E367A119B3_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Pin::set_Placeable(IPlaceable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pin_set_Placeable_mA1AB64C236424DD46AA780DE4A99D0A8FE53E318_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String Pin::get_MatchID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pin_get_MatchID_mF2A11EBEAB979C0C8BC9C66463168E9EFC1F7FC1_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Physics2D_RaycastAll_m31A665A3ED5DF27710705A28C660E698DCF163C9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<IDragable>(T&)
inline bool Component_TryGetComponent_TisIDragable_t66E9FACA38F86CE78AED884BFF59125743706758_mE01C6958030E0BAE9618AE125A208BE48C19AA18 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.SpriteRenderer>(T&)
inline bool Component_TryGetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD688D72984FC989FE13E543250B95B3138B0D0DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TranslatePosition::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslatePosition_Move_mCCCEC34449F7671F630346348EFFBC15837A9F0D (TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* __this, const RuntimeMethod* method) ;
// System.Void TranslatePosition/<Move>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__11__ctor_mEFCD54EDB51B2A59D027D47250B30A551C84A0E0 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ActiveToggle::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveToggle_Toggle_m1AAA10EB2EE9A5493AFB703DAF5B9439E8A05CC7 (ActiveToggle_t9F38CC9F8949FD659780BD585A55179C2BB4F639* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(!gameObject.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void ActiveToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveToggle__ctor_m48059E626B705B9081C25E62BBF255B4280C3DA5 (ActiveToggle_t9F38CC9F8949FD659780BD585A55179C2BB4F639* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture2D CircleGenerator::GetTexture(UnityEngine.Vector2Int,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* CircleGenerator_GetTexture_mDDE14A744AFBCCAE5062B13F2D1B84041D816AC3 (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, float ___radius2, float ___width3, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		// var texture = new Texture2D((int)size.x, (int)size.y, TextureFormat.ARGB32, false);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___size0), NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___size0), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_2, L_0, L_1, 5, (bool)0, NULL);
		V_0 = L_2;
		// float scaledRadius = radius * 100f;
		float L_3 = ___radius2;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, (100.0f)));
		// Vector2 scaledOffset = offset * 100f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___offset1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_4, (100.0f), NULL);
		V_2 = L_5;
		// float sqrOut = (scaledRadius + width) * (scaledRadius + width);
		float L_6 = V_1;
		float L_7 = ___width3;
		float L_8 = V_1;
		float L_9 = ___width3;
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_6, L_7)), ((float)il2cpp_codegen_add(L_8, L_9))));
		// float sqrRad = (scaledRadius) * (scaledRadius);
		float L_10 = V_1;
		float L_11 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_10, L_11));
		// float sqrIn = (scaledRadius - width) * (scaledRadius - width);
		float L_12 = V_1;
		float L_13 = ___width3;
		float L_14 = V_1;
		float L_15 = ___width3;
		V_5 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)il2cpp_codegen_subtract(L_14, L_15))));
		// for (int x = 0; x < size.x; x++)
		V_6 = 0;
		goto IL_0123;
	}

IL_0048:
	{
		// for (int y = 0; y < size.y; y++)
		V_7 = 0;
		goto IL_010f;
	}

IL_0050:
	{
		// float sqrX = (x - (size.x / 2 + scaledOffset.x)) * (x - (size.x / 2 + scaledOffset.x));
		int32_t L_16 = V_6;
		int32_t L_17;
		L_17 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___size0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		float L_19 = L_18.___x_0;
		int32_t L_20 = V_6;
		int32_t L_21;
		L_21 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___size0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		float L_23 = L_22.___x_0;
		// float sqrY = (y - (size.y / 2 + scaledOffset.y)) * (y - (size.y / 2 + scaledOffset.y));
		int32_t L_24 = V_7;
		int32_t L_25;
		L_25 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___size0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		float L_27 = L_26.___y_1;
		int32_t L_28 = V_7;
		int32_t L_29;
		L_29 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___size0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_2;
		float L_31 = L_30.___y_1;
		V_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_24), ((float)il2cpp_codegen_add(((float)((int32_t)(L_25/2))), L_27)))), ((float)il2cpp_codegen_subtract(((float)L_28), ((float)il2cpp_codegen_add(((float)((int32_t)(L_29/2))), L_31))))));
		// float sum = sqrX + sqrY;
		float L_32 = V_8;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_16), ((float)il2cpp_codegen_add(((float)((int32_t)(L_17/2))), L_19)))), ((float)il2cpp_codegen_subtract(((float)L_20), ((float)il2cpp_codegen_add(((float)((int32_t)(L_21/2))), L_23)))))), L_32));
		// float bias = 0f;
		V_10 = (0.0f);
		// if (sqrRad < sum && sum < sqrOut)
		float L_33 = V_4;
		float L_34 = V_9;
		if ((!(((float)L_33) < ((float)L_34))))
		{
			goto IL_00ca;
		}
	}
	{
		float L_35 = V_9;
		float L_36 = V_3;
		if ((!(((float)L_35) < ((float)L_36))))
		{
			goto IL_00ca;
		}
	}
	{
		// bias = (sqrOut - sum) / (sqrOut - sqrRad);
		float L_37 = V_3;
		float L_38 = V_9;
		float L_39 = V_3;
		float L_40 = V_4;
		V_10 = ((float)(((float)il2cpp_codegen_subtract(L_37, L_38))/((float)il2cpp_codegen_subtract(L_39, L_40))));
	}

IL_00ca:
	{
		// if (sqrIn < sum && sum < sqrRad)
		float L_41 = V_5;
		float L_42 = V_9;
		if ((!(((float)L_41) < ((float)L_42))))
		{
			goto IL_00e3;
		}
	}
	{
		float L_43 = V_9;
		float L_44 = V_4;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_00e3;
		}
	}
	{
		// bias = (sum - sqrIn) / (sqrRad - sqrIn);
		float L_45 = V_9;
		float L_46 = V_5;
		float L_47 = V_4;
		float L_48 = V_5;
		V_10 = ((float)(((float)il2cpp_codegen_subtract(L_45, L_46))/((float)il2cpp_codegen_subtract(L_47, L_48))));
	}

IL_00e3:
	{
		// texture.SetPixel(x, y, new Color(color.r, color.g, color.b, bias));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = V_0;
		int32_t L_50 = V_6;
		int32_t L_51 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = ___color4;
		float L_53 = L_52.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___color4;
		float L_55 = L_54.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = ___color4;
		float L_57 = L_56.___b_2;
		float L_58 = V_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		memset((&L_59), 0, sizeof(L_59));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_59), L_53, L_55, L_57, L_58, /*hidden argument*/NULL);
		NullCheck(L_49);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_49, L_50, L_51, L_59, NULL);
		// for (int y = 0; y < size.y; y++)
		int32_t L_60 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_010f:
	{
		// for (int y = 0; y < size.y; y++)
		int32_t L_61 = V_7;
		int32_t L_62;
		L_62 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___size0), NULL);
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0050;
		}
	}
	{
		// for (int x = 0; x < size.x; x++)
		int32_t L_63 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0123:
	{
		// for (int x = 0; x < size.x; x++)
		int32_t L_64 = V_6;
		int32_t L_65;
		L_65 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___size0), NULL);
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0048;
		}
	}
	{
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_66 = V_0;
		NullCheck(L_66);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_66, NULL);
		// return texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67 = V_0;
		return L_67;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ColliderButton::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButton_OnMouseDown_mDBAFB4073F378C6F493CD8B196CE3EEFCB23B156 (ColliderButton_tF1BDAC5A518D6F8A90E349CAD05994FA1B2E932E* __this, const RuntimeMethod* method) 
{
	{
		// _unityEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____unityEvent_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void ColliderButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColliderButton__ctor_mFF42060597A161C472101BADACC6FA609DB747B9 (ColliderButton_tF1BDAC5A518D6F8A90E349CAD05994FA1B2E932E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DataObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataObject__ctor_m96B598C9FDE4808AFEB15049A4AA35A49E170360 (DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// [HideInInspector] public string ID = Guid.NewGuid().ToString().ToUpper();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_1, NULL);
		__this->___ID_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ID_5), (void*)L_2);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DragableObject::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject__ctor_m019987E4686B63841171CE12A7CEC4DC9E710AC9 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) 
{
	{
		// public DragableObject(Transform target)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		__this->____target_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void DragableObject::PickUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject_PickUp_mEDE43F6030BC3DCFB3C158AF7E9189F5A8177AC4 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) 
{
	{
		// _clickOffset = _target.position - clickPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___clickPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		__this->____clickOffset_1 = L_3;
		// }
		return;
	}
}
// System.Void DragableObject::Drag(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject_Drag_m7D6E6980F73D5F53DD0E63367468DEC885D384C9 (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) 
{
	{
		// _target.position = clickPos + _clickOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____target_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___clickPos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____clickOffset_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void DragableObject::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragableObject_Release_m41217BB61C1BC55B0A8B22AB1F638B0EC102DD3C (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* __this, const RuntimeMethod* method) 
{
	{
		// public void Release() { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Gear::get_MatchID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gear_get_MatchID_m1ED16E4DDF87897F7F6DED26347627CF270CBFDC (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = __this->___U3CMatchIDU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Gear::set_MatchID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_set_MatchID_mA0328087070E3E41D678C2EC67E0FE3AB446A167 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMatchIDU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatchIDU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// IPlacement Gear::get_Placement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gear_get_Placement_m31D6B0879A2F7F07090131406E7CA366D5F7E274 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	{
		// public IPlacement Placement { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlacementU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Gear::set_Placement(IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_set_Placement_m23CB1814D6FB299224B5A66A300EC375A4831115 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlacement Placement { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlacementU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Void Gear::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Start_m0162557E9A850F2ABFE9EF2FF80648B96282BB39 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dragable = new DragableObject(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* L_1 = (DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5*)il2cpp_codegen_object_new(DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DragableObject__ctor_m019987E4686B63841171CE12A7CEC4DC9E710AC9(L_1, L_0, NULL);
		__this->____dragable_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dragable_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void Gear::Init(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Init_mA97F9E5245511DBD893F82BF3C8107C2B2454DB6 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___gearSO0, const RuntimeMethod* method) 
{
	{
		// _spriteRenderer.sprite = gearSO.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____spriteRenderer_4;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_1 = ___gearSO0;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->___sprite_9;
		NullCheck(L_0);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_2, NULL);
		// _spriteRenderer.transform.localPosition = gearSO.offset * -1f;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->____spriteRenderer_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_5 = ___gearSO0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = L_5->___offset_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_6, (-1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_8, NULL);
		// _collider.radius = gearSO.innerRadius;
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_9 = __this->____collider_5;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_10 = ___gearSO0;
		NullCheck(L_10);
		float L_11 = L_10->___innerRadius_7;
		NullCheck(L_9);
		CircleCollider2D_set_radius_m468ECCD06634C48E6837A55B9E8D056BBF15FC52(L_9, L_11, NULL);
		// CalculateRotationModifier(gearSO.innerRadius);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_12 = ___gearSO0;
		NullCheck(L_12);
		float L_13 = L_12->___innerRadius_7;
		Gear_CalculateRotationModifier_m9B372791C89ED98DD50D6602E8F64405F4485DFB(__this, L_13, NULL);
		// MatchID = gearSO.ID;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_14 = ___gearSO0;
		NullCheck(L_14);
		String_t* L_15 = ((DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC*)L_14)->___ID_5;
		Gear_set_MatchID_mA0328087070E3E41D678C2EC67E0FE3AB446A167_inline(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void Gear::PickUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_PickUp_mA421C5164AE991FA37A276CA54637EE58A9954A2 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) 
{
	{
		// if (_lock) { return; }
		bool L_0 = __this->____lock_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_lock) { return; }
		return;
	}

IL_0009:
	{
		// _dragable.PickUp(clickPos);
		DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* L_1 = __this->____dragable_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___clickPos0;
		NullCheck(L_1);
		DragableObject_PickUp_mEDE43F6030BC3DCFB3C158AF7E9189F5A8177AC4(L_1, L_2, NULL);
		// _audioPickUp.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioPickUp_6;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void Gear::Drag(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Drag_m3B638ECA4ECF484F2169A924840ADA2D9072D62C (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___clickPos0, const RuntimeMethod* method) 
{
	{
		// if (_lock) { return; }
		bool L_0 = __this->____lock_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_lock) { return; }
		return;
	}

IL_0009:
	{
		// _dragable.Drag(clickPos);
		DragableObject_t7438781C33BFF74162BCD7BE8AC26258617F22E5* L_1 = __this->____dragable_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___clickPos0;
		NullCheck(L_1);
		DragableObject_Drag_m7D6E6980F73D5F53DD0E63367468DEC885D384C9(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gear::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Release_mFFDBD8CF2483073C41B698401FDF9B85B26A98CD (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisIPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_m08EB7F029D441873CECC9A94AC04944EE12E32A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* V_0 = NULL;
	ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// _audioPutDown.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioPutDown_7;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// List<Collider2D> overlaps = new List<Collider2D>();
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_1 = (List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43*)il2cpp_codegen_object_new(List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7(L_1, List_1__ctor_m533E9C5FFE015E4AFED0D5B4C2C17A83B88FC7C7_RuntimeMethod_var);
		V_0 = L_1;
		// var contactFilter = new ContactFilter2D();
		il2cpp_codegen_initobj((&V_1), sizeof(ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14));
		// int colliderCount = _collider.OverlapCollider(contactFilter, overlaps);
		CircleCollider2D_t5D665D58EACA966EA4033BCF0EE91E198552E786* L_2 = __this->____collider_5;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_3 = V_1;
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = Collider2D_OverlapCollider_m02DEE1A9596975452BC43CFC08EF5071426D51CC(L_2, L_3, L_4, NULL);
		V_2 = L_5;
		// float minDistance = 0;
		V_3 = (0.0f);
		// IPlacement newPlacement = null;
		V_4 = (RuntimeObject*)NULL;
		// for (int i = 0; i < colliderCount; i++)
		V_5 = 0;
		goto IL_0083;
	}

IL_0035:
	{
		// if (overlaps[i].transform.TryGetComponent(out IPlacement overlapPlacement))
		List_1_tB01EA4A02551BE13FDFF5E9391EEFA5762560A43* L_6 = V_0;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8;
		L_8 = List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC(L_6, L_7, List_1_get_Item_m4D014FB9772F070723339691FB41CD228F31D2FC_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = Component_TryGetComponent_TisIPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_m08EB7F029D441873CECC9A94AC04944EE12E32A7(L_9, (&V_6), Component_TryGetComponent_TisIPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_m08EB7F029D441873CECC9A94AC04944EE12E32A7_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		// float distance = (overlapPlacement.Position - transform.position).magnitude;
		RuntimeObject* L_11 = V_6;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 IPlacement::get_Position() */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_12, L_14, NULL);
		V_8 = L_15;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		V_7 = L_16;
		// if (newPlacement == null || distance < minDistance)
		RuntimeObject* L_17 = V_4;
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		float L_18 = V_7;
		float L_19 = V_3;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_007d;
		}
	}

IL_0076:
	{
		// minDistance = distance;
		float L_20 = V_7;
		V_3 = L_20;
		// newPlacement = overlapPlacement;
		RuntimeObject* L_21 = V_6;
		V_4 = L_21;
	}

IL_007d:
	{
		// for (int i = 0; i < colliderCount; i++)
		int32_t L_22 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < colliderCount; i++)
		int32_t L_23 = V_5;
		int32_t L_24 = V_2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0035;
		}
	}
	{
		// if (newPlacement != null)
		RuntimeObject* L_25 = V_4;
		if (!L_25)
		{
			goto IL_00ac;
		}
	}
	{
		// if (newPlacement.Placeable == null)
		RuntimeObject* L_26 = V_4;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* IPlaceable IPlacement::get_Placeable() */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_009e;
		}
	}
	{
		// newPlacement.SetPlaceable(this);
		RuntimeObject* L_28 = V_4;
		NullCheck(L_28);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void IPlacement::SetPlaceable(IPlaceable) */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_28, __this);
		return;
	}

IL_009e:
	{
		// IPlacement.Swap(newPlacement, Placement);
		RuntimeObject* L_29 = V_4;
		RuntimeObject* L_30;
		L_30 = Gear_get_Placement_m31D6B0879A2F7F07090131406E7CA366D5F7E274_inline(__this, NULL);
		IPlacement_Swap_mCC59419FE6DC961CF3142D1AAEEF2AB288C46284(L_29, L_30, NULL);
		return;
	}

IL_00ac:
	{
		// SetPosition(Placement);
		RuntimeObject* L_31;
		L_31 = Gear_get_Placement_m31D6B0879A2F7F07090131406E7CA366D5F7E274_inline(__this, NULL);
		Gear_SetPosition_m16FC028407C418CE633DA26EA9D08D2B43999FA5(__this, L_31, NULL);
		// }
		return;
	}
}
// System.Void Gear::SetPlacement(IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_SetPlacement_m148EEA5D7A144BB2853C2DF3B7AD304B6814B54D (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___newPlacement0, const RuntimeMethod* method) 
{
	{
		// Placement = newPlacement;
		RuntimeObject* L_0 = ___newPlacement0;
		Gear_set_Placement_m23CB1814D6FB299224B5A66A300EC375A4831115_inline(__this, L_0, NULL);
		// SetPosition(newPlacement);
		RuntimeObject* L_1 = ___newPlacement0;
		Gear_SetPosition_m16FC028407C418CE633DA26EA9D08D2B43999FA5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gear::Lock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Lock_m29278FF891D4F823F9E750BA6F143B9DB492EBB6 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, bool ___newLock0, const RuntimeMethod* method) 
{
	{
		// _lock = newLock;
		bool L_0 = ___newLock0;
		__this->____lock_9 = L_0;
		// }
		return;
	}
}
// System.Void Gear::Rotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_Rotate_m2A7118BFAFE1032E113F2979032E50A248AC4BBE (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// transform.rotation *= Quaternion.Euler(0, 0, speed * _rotationModifier);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		float L_3 = ___speed0;
		float L_4 = __this->____rotationModifier_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_2, L_5, NULL);
		NullCheck(L_1);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void Gear::SetPosition(IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_SetPosition_m16FC028407C418CE633DA26EA9D08D2B43999FA5 (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___newPlacement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = newPlacement.Position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RuntimeObject* L_1 = ___newPlacement0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* UnityEngine.Vector3 IPlacement::get_Position() */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gear::CalculateRotationModifier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear_CalculateRotationModifier_m9B372791C89ED98DD50D6602E8F64405F4485DFB (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, float ___radius0, const RuntimeMethod* method) 
{
	{
		// _rotationModifier = 1f / radius;
		float L_0 = ___radius0;
		__this->____rotationModifier_10 = ((float)((1.0f)/L_0));
		// }
		return;
	}
}
// System.Void Gear::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gear__ctor_m6567F8AACC0A96B6BE57A4737FFC5B0167D9CDDF (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GearObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearObject__ctor_mE98ACE316D901E01338E691CFB30A349672BF5FB (GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* __this, const RuntimeMethod* method) 
{
	{
		DataObject__ctor_m96B598C9FDE4808AFEB15049A4AA35A49E170360(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GearObject GearVisual::get_gearObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// public GearObject gearObject { get; private set; }
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = __this->___U3CgearObjectU3Ek__BackingField_65;
		return L_0;
	}
}
// System.Void GearVisual::set_gearObject(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_set_gearObject_m37389BF863530245100BDE3C4950B55CBC9501AF (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___value0, const RuntimeMethod* method) 
{
	{
		// public GearObject gearObject { get; private set; }
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = ___value0;
		__this->___U3CgearObjectU3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgearObjectU3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
// System.Void GearVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual__ctor_mEC049EC9BD146FFDC980B82A02C253E2833083E9 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mDE54B75038408D934E3BCCDA4537AC0DE12305CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GearVisual()
		il2cpp_codegen_runtime_class_init_inline(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(__this, NULL);
		// style.position = Position.Absolute;
		RuntimeObject* L_0;
		L_0 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 L_1;
		L_1 = StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322(1, StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 >::Invoke(41 /* System.Void UnityEngine.UIElements.IStyle::set_position(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_0, L_1);
		// style.alignContent = Align.Center;
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 L_3;
		L_3 = StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A(2, StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 >::Invoke(0 /* System.Void UnityEngine.UIElements.IStyle::set_alignContent(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2, L_3);
		// style.alignItems = Align.Center;
		RuntimeObject* L_4;
		L_4 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 L_5;
		L_5 = StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A(2, StyleEnum_1_op_Implicit_mFD3BD11506E10578378BC731BF16D40C108BB59A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< StyleEnum_1_t5578A741DA42584CA127D6AF3539B91F3E8CD180 >::Invoke(1 /* System.Void UnityEngine.UIElements.IStyle::set_alignItems(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Align>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_4, L_5);
		// style.justifyContent = Justify.Center;
		RuntimeObject* L_6;
		L_6 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleEnum_1_t34BA4FFF165BCD81079E00E954FA752C1047ABBF L_7;
		L_7 = StyleEnum_1_op_Implicit_mDE54B75038408D934E3BCCDA4537AC0DE12305CA(1, StyleEnum_1_op_Implicit_mDE54B75038408D934E3BCCDA4537AC0DE12305CA_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker1< StyleEnum_1_t34BA4FFF165BCD81079E00E954FA752C1047ABBF >::Invoke(28 /* System.Void UnityEngine.UIElements.IStyle::set_justifyContent(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Justify>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_6, L_7);
		// style.width = _handleSize;
		RuntimeObject* L_8;
		L_8 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_9;
		L_9 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((32.0f), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(53 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_8, L_9);
		// style.height = _handleSize;
		RuntimeObject* L_10;
		L_10 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(__this, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_11;
		L_11 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((32.0f), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(27 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_10, L_11);
		// CreateGearImage();
		GearVisual_CreateGearImage_mD6B201FD79FCF79A7CDC38F69BCEF5E533C55019(__this, NULL);
		// CreateHandle();
		GearVisual_CreateHandle_m04A6252F7C2D2AAFA08F805F8F983F6B40ED2BC4(__this, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::CreateGearImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_CreateGearImage_mD6B201FD79FCF79A7CDC38F69BCEF5E533C55019 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gearImage = new VisualElement();
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_0, NULL);
		__this->____gearImage_69 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gearImage_69), (void*)L_0);
		// _gearImage.style.position = Position.Absolute;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = __this->____gearImage_69;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 L_3;
		L_3 = StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322(1, StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 >::Invoke(41 /* System.Void UnityEngine.UIElements.IStyle::set_position(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2, L_3);
		// _gearImage.style.flexShrink = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = __this->____gearImage_69;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_4, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_6;
		L_6 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((0.0f), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_5, L_6);
		// _gearImage.pickingMode = PickingMode.Ignore;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = __this->____gearImage_69;
		NullCheck(L_7);
		VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0_inline(L_7, 1, NULL);
		// Add(_gearImage);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = __this->____gearImage_69;
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::CreateHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_CreateHandle_m04A6252F7C2D2AAFA08F805F8F983F6B40ED2BC4 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _handle = new VisualElement();
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_0, NULL);
		__this->____handle_68 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handle_68), (void*)L_0);
		// _handle.style.position = Position.Absolute;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = __this->____handle_68;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 L_3;
		L_3 = StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322(1, StyleEnum_1_op_Implicit_m8081C60B2EAC847F69488611A8BB9A7525324322_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< StyleEnum_1_tDDEAB09F1AAFEA72821D32D702E5349040FF46D9 >::Invoke(41 /* System.Void UnityEngine.UIElements.IStyle::set_position(UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Position>) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2, L_3);
		// _handle.style.flexShrink = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = __this->____handle_68;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_4, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_6;
		L_6 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((0.0f), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(24 /* System.Void UnityEngine.UIElements.IStyle::set_flexShrink(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_5, L_6);
		// _handle.style.borderRightWidth = handlewidth;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = __this->____handle_68;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_7, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_9;
		L_9 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((4.0f), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(11 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_8, L_9);
		// _handle.style.borderBottomWidth = handlewidth;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = __this->____handle_68;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_10, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_12;
		L_12 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((4.0f), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(7 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_11, L_12);
		// _handle.style.borderLeftWidth = handlewidth;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = __this->____handle_68;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_13, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_15;
		L_15 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((4.0f), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(9 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_14, L_15);
		// _handle.style.borderTopWidth = handlewidth;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = __this->____handle_68;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_16, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_18;
		L_18 = StyleFloat_op_Implicit_mC4E4F7EBF3EF7D36F4A72F0B008834AD556D4193((4.0f), NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(15 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopWidth(UnityEngine.UIElements.StyleFloat) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_17, L_18);
		// _handle.style.borderTopLeftRadius = _handleSize / 2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = __this->____handle_68;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_19, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_21;
		L_21 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((16.0f), NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(13 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_20, L_21);
		// _handle.style.borderTopRightRadius = _handleSize / 2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22 = __this->____handle_68;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_22, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_24;
		L_24 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((16.0f), NULL);
		NullCheck(L_23);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(14 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_23, L_24);
		// _handle.style.borderBottomLeftRadius = _handleSize / 2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25 = __this->____handle_68;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_25, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_27;
		L_27 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((16.0f), NULL);
		NullCheck(L_26);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(5 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomLeftRadius(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_26, L_27);
		// _handle.style.borderBottomRightRadius = _handleSize / 2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = __this->____handle_68;
		NullCheck(L_28);
		RuntimeObject* L_29;
		L_29 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_28, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_30;
		L_30 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((16.0f), NULL);
		NullCheck(L_29);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(6 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomRightRadius(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_29, L_30);
		// _handle.style.borderLeftColor = color;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = __this->____handle_68;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = ((GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields*)il2cpp_codegen_static_fields_for(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var))->___color_72;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_34;
		L_34 = StyleColor_op_Implicit_m998C496B6B796ECB1D4A5EEE3ED1C1FDEE975F52(L_33, NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(8 /* System.Void UnityEngine.UIElements.IStyle::set_borderLeftColor(UnityEngine.UIElements.StyleColor) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_32, L_34);
		// _handle.style.borderRightColor = color;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = __this->____handle_68;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_35, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = ((GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields*)il2cpp_codegen_static_fields_for(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var))->___color_72;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_38;
		L_38 = StyleColor_op_Implicit_m998C496B6B796ECB1D4A5EEE3ED1C1FDEE975F52(L_37, NULL);
		NullCheck(L_36);
		InterfaceActionInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(10 /* System.Void UnityEngine.UIElements.IStyle::set_borderRightColor(UnityEngine.UIElements.StyleColor) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_36, L_38);
		// _handle.style.borderTopColor = color;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = __this->____handle_68;
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_39, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = ((GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields*)il2cpp_codegen_static_fields_for(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var))->___color_72;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_42;
		L_42 = StyleColor_op_Implicit_m998C496B6B796ECB1D4A5EEE3ED1C1FDEE975F52(L_41, NULL);
		NullCheck(L_40);
		InterfaceActionInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(12 /* System.Void UnityEngine.UIElements.IStyle::set_borderTopColor(UnityEngine.UIElements.StyleColor) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_40, L_42);
		// _handle.style.borderBottomColor = color;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_43 = __this->____handle_68;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_43, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = ((GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields*)il2cpp_codegen_static_fields_for(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var))->___color_72;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_46;
		L_46 = StyleColor_op_Implicit_m998C496B6B796ECB1D4A5EEE3ED1C1FDEE975F52(L_45, NULL);
		NullCheck(L_44);
		InterfaceActionInvoker1< StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 >::Invoke(4 /* System.Void UnityEngine.UIElements.IStyle::set_borderBottomColor(UnityEngine.UIElements.StyleColor) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_44, L_46);
		// _handle.style.width = _handleSize;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_47 = __this->____handle_68;
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_47, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_49;
		L_49 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((32.0f), NULL);
		NullCheck(L_48);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(53 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_48, L_49);
		// _handle.style.height = _handleSize;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_50 = __this->____handle_68;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_50, NULL);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_52;
		L_52 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763((32.0f), NULL);
		NullCheck(L_51);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(27 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_51, L_52);
		// Add(_handle);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = __this->____handle_68;
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(__this, L_53, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::SetGearObject(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_SetGearObject_mB3B37CA34A3C6742C8BC1862DC32E00B68542F8E (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___newGearObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gearObject = newGearObject;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = ___newGearObject0;
		GearVisual_set_gearObject_m37389BF863530245100BDE3C4950B55CBC9501AF_inline(__this, L_0, NULL);
		// _gearImage.style.backgroundImage = gearObject.sprite.texture;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = __this->____gearImage_69;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_3;
		L_3 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_3);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = L_3->___sprite_9;
		NullCheck(L_4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_4, NULL);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_6;
		L_6 = StyleBackground_op_Implicit_m2FE4B478451135BE6F08033973968C8E3F224DB8(L_5, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B >::Invoke(3 /* System.Void UnityEngine.UIElements.IStyle::set_backgroundImage(UnityEngine.UIElements.StyleBackground) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2, L_6);
		// _gearImage.style.width = gearObject.sprite.texture.width;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = __this->____gearImage_69;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_7, NULL);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_9;
		L_9 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = L_9->___sprite_9;
		NullCheck(L_10);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_13;
		L_13 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763(((float)L_12), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(53 /* System.Void UnityEngine.UIElements.IStyle::set_width(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_8, L_13);
		// _gearImage.style.height = gearObject.sprite.texture.height;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = __this->____gearImage_69;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_14, NULL);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_16;
		L_16 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_16);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = L_16->___sprite_9;
		NullCheck(L_17);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18;
		L_18 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_17, NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_20;
		L_20 = StyleLength_op_Implicit_m58B40E9A27B1C4236799F2D43F0587C8C63C8763(((float)L_19), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(27 /* System.Void UnityEngine.UIElements.IStyle::set_height(UnityEngine.UIElements.StyleLength) */, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_15, L_20);
		// _gearImage.transform.position = gearObject.offset * new Vector2(-1, 1) * 100f;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = __this->____gearImage_69;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_21, NULL);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_23;
		L_23 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = L_23->___offset_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_24, L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_26, (100.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_27, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void UnityEngine.UIElements.ITransform::set_position(UnityEngine.Vector3) */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_22, L_28);
		// }
		return;
	}
}
// System.Void GearVisual::SetNext(GearVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_SetNext_m8A0A6A31C142A6BB96E87A371ED4ABCF51E21741 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ___gear0, const RuntimeMethod* method) 
{
	{
		// _next = gear;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = ___gear0;
		__this->____next_66 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_66), (void*)L_0);
		// }
		return;
	}
}
// System.Void GearVisual::SetPrev(GearVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_SetPrev_mD67A3FBE6D7EB739080E0B53E1E9C6255FB951DF (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ___gear0, const RuntimeMethod* method) 
{
	{
		// _prev = gear;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = ___gear0;
		__this->____prev_67 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_67), (void*)L_0);
		// }
		return;
	}
}
// System.Void GearVisual::Follow(GearVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_Follow_m490EF17F1E64380A7FFEF181F93841C4DE28102A (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ___gear0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 normalizedDirection = (transform.position - gear.transform.position).normalized;
		RuntimeObject* L_0;
		L_0 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_0);
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_2 = ___gear0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_4, NULL);
		V_2 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_0 = L_6;
		// float desiredDistance = Mathf.Max((gearObject.innerRadius + gear.gearObject.outerRadius), (gearObject.outerRadius + gear.gearObject.innerRadius)) * 100f;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_7;
		L_7 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_7);
		float L_8 = L_7->___innerRadius_7;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_9 = ___gear0;
		NullCheck(L_9);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_10;
		L_10 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(L_9, NULL);
		NullCheck(L_10);
		float L_11 = L_10->___outerRadius_8;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_12;
		L_12 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(__this, NULL);
		NullCheck(L_12);
		float L_13 = L_12->___outerRadius_8;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_14 = ___gear0;
		NullCheck(L_14);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_15;
		L_15 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(L_14, NULL);
		NullCheck(L_15);
		float L_16 = L_15->___innerRadius_7;
		float L_17;
		L_17 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_add(L_8, L_11)), ((float)il2cpp_codegen_add(L_13, L_16)), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_17, (100.0f)));
		// transform.position = gear.transform.position + normalizedDirection * desiredDistance;
		RuntimeObject* L_18;
		L_18 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(__this, NULL);
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_19 = ___gear0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_24, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void UnityEngine.UIElements.ITransform::set_position(UnityEngine.Vector3) */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_18, L_25);
		// }
		return;
	}
}
// System.Void GearVisual::Lead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_Lead_m3043946EF28AF51FB41376599ADB89E99205BCB1 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// LeadNext();
		GearVisual_LeadNext_mA07991FBE49266F19772B2CBC33A9369BAFF00DA(__this, NULL);
		// LeadPrev();
		GearVisual_LeadPrev_m8B96F32BB872641726E694069820AD2E8836AAF1(__this, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::LeadNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_LeadNext_mA07991FBE49266F19772B2CBC33A9369BAFF00DA (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// if (_next == null) { return; }
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = __this->____next_66;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_next == null) { return; }
		return;
	}

IL_0009:
	{
		// _next.FollowPrev();
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_1 = __this->____next_66;
		NullCheck(L_1);
		GearVisual_FollowPrev_m8031F6720B4A8EBB478E3CFDD463EB365B3C6522(L_1, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::LeadPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_LeadPrev_m8B96F32BB872641726E694069820AD2E8836AAF1 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// if (_prev == null) { return; }
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = __this->____prev_67;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_prev == null) { return; }
		return;
	}

IL_0009:
	{
		// _prev.FollowNext();
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_1 = __this->____prev_67;
		NullCheck(L_1);
		GearVisual_FollowNext_mFE03A3C10CC27DF07E202138AC08736087F9A4E2(L_1, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::FollowNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_FollowNext_mFE03A3C10CC27DF07E202138AC08736087F9A4E2 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// if (_next == null) { return; }
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = __this->____next_66;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_next == null) { return; }
		return;
	}

IL_0009:
	{
		// Follow(_next);
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_1 = __this->____next_66;
		GearVisual_Follow_m490EF17F1E64380A7FFEF181F93841C4DE28102A(__this, L_1, NULL);
		// LeadPrev();
		GearVisual_LeadPrev_m8B96F32BB872641726E694069820AD2E8836AAF1(__this, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::FollowPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual_FollowPrev_m8031F6720B4A8EBB478E3CFDD463EB365B3C6522 (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// if (_prev == null) { return; }
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = __this->____prev_67;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_prev == null) { return; }
		return;
	}

IL_0009:
	{
		// Follow(_prev);
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_1 = __this->____prev_67;
		GearVisual_Follow_m490EF17F1E64380A7FFEF181F93841C4DE28102A(__this, L_1, NULL);
		// LeadNext();
		GearVisual_LeadNext_mA07991FBE49266F19772B2CBC33A9369BAFF00DA(__this, NULL);
		// }
		return;
	}
}
// System.Void GearVisual::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GearVisual__cctor_m725CD949A3BC5C38E73179C398104855A7CB8AD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Color color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		((GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_StaticFields*)il2cpp_codegen_static_fields_for(GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD_il2cpp_TypeInfo_var))->___color_72 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IPlacement::Swap(IPlacement,IPlacement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPlacement_Swap_mCC59419FE6DC961CF3142D1AAEEF2AB288C46284 (RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	{
		// IPlaceable leftPlaceable = left?.Placeable;
		RuntimeObject* L_0 = ___left0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___left0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* IPlaceable IPlacement::get_Placeable() */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		// IPlaceable rightPlaceable = right?.Placeable;
		RuntimeObject* L_3 = ___right1;
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B6_0 = ((RuntimeObject*)(NULL));
		goto IL_0019;
	}

IL_0013:
	{
		RuntimeObject* L_4 = ___right1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* IPlaceable IPlacement::get_Placeable() */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_4);
		G_B6_0 = L_5;
	}

IL_0019:
	{
		V_1 = G_B6_0;
		// left?.SetPlaceable(rightPlaceable);
		RuntimeObject* L_6 = ___left0;
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_7 = ___left0;
		RuntimeObject* L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void IPlacement::SetPlaceable(IPlaceable) */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0024:
	{
		// right?.SetPlaceable(leftPlaceable);
		RuntimeObject* L_9 = ___right1;
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_10 = ___right1;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void IPlacement::SetPlaceable(IPlaceable) */, IPlacement_tB60F3B1D101DF540335F0F0018B3C14400CC756E_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Start_m56A0908CDEC199AB83EB0C8B6935AB23D8108E4B (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	{
		// _fullVolume = _audio.volume;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audio_5;
		NullCheck(L_0);
		float L_1;
		L_1 = AudioSource_get_volume_m9CCF33BC636562EA282FDE07463B547D70134EE3(L_0, NULL);
		__this->____fullVolume_16 = L_1;
		// _audio.volume = 0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->____audio_5;
		NullCheck(L_2);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_2, (0.0f), NULL);
		// Parse(_level);
		LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* L_3 = __this->____level_4;
		Level_Parse_m032A4937B235800EB4E57949A3628517EC4A9B3D(__this, L_3, NULL);
		// RandomizePositions();
		Level_RandomizePositions_m9914748CEE03B6B860C9A7E71F61131B6C4D9355(__this, NULL);
		// }
		return;
	}
}
// System.Void Level::Parse(LevelObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Parse_m032A4937B235800EB4E57949A3628517EC4A9B3D (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Level_CountMatch_m386E268893E0BC946C727AAD9A17BB431F4EE59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3B36D01F17363EC4187B6991E38F8B0CB0E1DDD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA0A199FF55D6F918B941466CB32F7A35269D47B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m54227E49077FD68C5C26881DB0AA89863BEC4DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4D21063067A13A4978C1DCAE2E4F070988B82D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t485A6037E42C001E3E2640663B469A918DF46262_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_m7AAF767DCE9BAA22967A68E0658AE6753892C201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisPin_t436B943A646153A43944025466CB8B68CE763843_m14B7F505E58D1B59A1DC954B434B97767AEB1A3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* V_1 = NULL;
	Pin_t436B943A646153A43944025466CB8B68CE763843* V_2 = NULL;
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* V_3 = NULL;
	{
		// _remaining = level.gears.Length;
		LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* L_0 = ___level0;
		NullCheck(L_0);
		LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2* L_1 = L_0->___gears_7;
		NullCheck(L_1);
		__this->____remaining_12 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// _pinsList = new List<Pin>();
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_2 = (List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257*)il2cpp_codegen_object_new(List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m54227E49077FD68C5C26881DB0AA89863BEC4DFE(L_2, List_1__ctor_m54227E49077FD68C5C26881DB0AA89863BEC4DFE_RuntimeMethod_var);
		__this->____pinsList_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinsList_13), (void*)L_2);
		// _gearsList = new List<Gear>();
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_3 = (List_1_t485A6037E42C001E3E2640663B469A918DF46262*)il2cpp_codegen_object_new(List_1_t485A6037E42C001E3E2640663B469A918DF46262_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mE4D21063067A13A4978C1DCAE2E4F070988B82D2(L_3, List_1__ctor_mE4D21063067A13A4978C1DCAE2E4F070988B82D2_RuntimeMethod_var);
		__this->____gearsList_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gearsList_14), (void*)L_3);
		// for (int i = 0; i < level.gears.Length; i++)
		V_0 = 0;
		goto IL_00ca;
	}

IL_002b:
	{
		// var levelGear = level.gears[i];
		LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* L_4 = ___level0;
		NullCheck(L_4);
		LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2* L_5 = L_4->___gears_7;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// var newPin = Instantiate(_pinPrefab, _pinsContainer);
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_9 = __this->____pinPrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____pinsContainer_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_11;
		L_11 = Object_Instantiate_TisPin_t436B943A646153A43944025466CB8B68CE763843_m14B7F505E58D1B59A1DC954B434B97767AEB1A3E(L_9, L_10, Object_Instantiate_TisPin_t436B943A646153A43944025466CB8B68CE763843_m14B7F505E58D1B59A1DC954B434B97767AEB1A3E_RuntimeMethod_var);
		V_2 = L_11;
		// newPin.transform.localPosition = levelGear.position;
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_12 = V_2;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* L_14 = V_1;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = L_14->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_15, NULL);
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_16, NULL);
		// newPin.OnMatchChange += CountMatch;
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_17 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_18 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_18, __this, (intptr_t)((void*)Level_CountMatch_m386E268893E0BC946C727AAD9A17BB431F4EE59B_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Pin_add_OnMatchChange_mEF9D268E8739618C5DBC1A1E9FB5EFCE21325CCC(L_17, L_18, NULL);
		// newPin.Init(levelGear.gearObject);
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_19 = V_2;
		LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* L_20 = V_1;
		NullCheck(L_20);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_21 = L_20->___gearObject_1;
		NullCheck(L_19);
		Pin_Init_m9175A50C3F50CCBADA098B9E17E59D124A98C2C4(L_19, L_21, NULL);
		// _pinsList.Add(newPin);
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_22 = __this->____pinsList_13;
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_23 = V_2;
		NullCheck(L_22);
		List_1_Add_m3B36D01F17363EC4187B6991E38F8B0CB0E1DDD5_inline(L_22, L_23, List_1_Add_m3B36D01F17363EC4187B6991E38F8B0CB0E1DDD5_RuntimeMethod_var);
		// var newGear = Instantiate(_gearPrefab, _gearsContainer);
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_24 = __this->____gearPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->____gearsContainer_9;
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_26;
		L_26 = Object_Instantiate_TisGear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_m7AAF767DCE9BAA22967A68E0658AE6753892C201(L_24, L_25, Object_Instantiate_TisGear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_m7AAF767DCE9BAA22967A68E0658AE6753892C201_RuntimeMethod_var);
		V_3 = L_26;
		// newGear.Init(levelGear.gearObject);
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_27 = V_3;
		LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* L_28 = V_1;
		NullCheck(L_28);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_29 = L_28->___gearObject_1;
		NullCheck(L_27);
		Gear_Init_mA97F9E5245511DBD893F82BF3C8107C2B2454DB6(L_27, L_29, NULL);
		// newGear.transform.localPosition = levelGear.position;
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_30 = V_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* L_32 = V_1;
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = L_32->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_33, NULL);
		NullCheck(L_31);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_31, L_34, NULL);
		// _gearsList.Add(newGear);
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_35 = __this->____gearsList_14;
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_36 = V_3;
		NullCheck(L_35);
		List_1_Add_mA0A199FF55D6F918B941466CB32F7A35269D47B3_inline(L_35, L_36, List_1_Add_mA0A199FF55D6F918B941466CB32F7A35269D47B3_RuntimeMethod_var);
		// for (int i = 0; i < level.gears.Length; i++)
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ca:
	{
		// for (int i = 0; i < level.gears.Length; i++)
		int32_t L_38 = V_0;
		LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* L_39 = ___level0;
		NullCheck(L_39);
		LevelGearU5BU5D_tB9A938706D0B10A51A2A70C1F7F36BC009022DC2* L_40 = L_39->___gears_7;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Level::RandomizePositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_RandomizePositions_m9914748CEE03B6B860C9A7E71F61131B6C4D9355 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < _gearsList.Count; i++)
		V_0 = 0;
		goto IL_004c;
	}

IL_0004:
	{
		// var temp = _gearsList[i];
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_0 = __this->____gearsList_14;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_2;
		L_2 = List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B(L_0, L_1, List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B_RuntimeMethod_var);
		V_1 = L_2;
		// int randomIndex = Random.Range(i, _gearsList.Count);
		int32_t L_3 = V_0;
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_4 = __this->____gearsList_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_inline(L_4, List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_3, L_5, NULL);
		V_2 = L_6;
		// _gearsList[i] = _gearsList[randomIndex];
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_7 = __this->____gearsList_14;
		int32_t L_8 = V_0;
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_9 = __this->____gearsList_14;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_11;
		L_11 = List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B(L_9, L_10, List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558(L_7, L_8, L_11, List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558_RuntimeMethod_var);
		// _gearsList[randomIndex] = temp;
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_12 = __this->____gearsList_14;
		int32_t L_13 = V_2;
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_14 = V_1;
		NullCheck(L_12);
		List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558(L_12, L_13, L_14, List_1_set_Item_m4C8E8B3380D4BA5CAB018DCF4E762DAC4A6B5558_RuntimeMethod_var);
		// for (int i = 0; i < _gearsList.Count; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004c:
	{
		// for (int i = 0; i < _gearsList.Count; i++)
		int32_t L_16 = V_0;
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_17 = __this->____gearsList_14;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_inline(L_17, List_1_get_Count_mC85D3A3F58F9C38055F85BE9E561EEF95019E58F_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < _pinsList.Count; i++)
		V_3 = 0;
		goto IL_007f;
	}

IL_005e:
	{
		// _pinsList[i].SetPlaceable(_gearsList[i]);
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_19 = __this->____pinsList_13;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_21;
		L_21 = List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38(L_19, L_20, List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38_RuntimeMethod_var);
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_22 = __this->____gearsList_14;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_24;
		L_24 = List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B(L_22, L_23, List_1_get_Item_m81F0E69A4A71BBEFAA6B365A23902732715C814B_RuntimeMethod_var);
		NullCheck(L_21);
		Pin_SetPlaceable_m0BE4CCEE908E45DD3242ECE31E4ACD6A441A33B8(L_21, L_24, NULL);
		// for (int i = 0; i < _pinsList.Count; i++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007f:
	{
		// for (int i = 0; i < _pinsList.Count; i++)
		int32_t L_26 = V_3;
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_27 = __this->____pinsList_13;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_inline(L_27, List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Level::CountMatch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_CountMatch_m386E268893E0BC946C727AAD9A17BB431F4EE59B (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, bool ___match0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* G_B3_2 = NULL;
	{
		// _remaining += match ? -1 : 1;
		int32_t L_0 = __this->____remaining_12;
		bool L_1 = ___match0;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_000e:
	{
		NullCheck(G_B3_2);
		G_B3_2->____remaining_12 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		// if (_remaining == 0)
		int32_t L_2 = __this->____remaining_12;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Win();
		Level_Win_m21E9F9A44AD806F26DDD9A749A7E81D39DFB19C0(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Level::Win()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Win_m21E9F9A44AD806F26DDD9A749A7E81D39DFB19C0 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB6D50815934F48B1CDCB396A3E245AD26BBB3FB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB67944247850AE3BCB72BEAF8C9F107568B6F1C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0E040A8EF15B7B090B920D86863CDB6F03593AB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDECD8DABCA0A0C7A278968B5C3251D7E99E4ABAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var gear in _gearsList)
		List_1_t485A6037E42C001E3E2640663B469A918DF46262* L_0 = __this->____gearsList_14;
		NullCheck(L_0);
		Enumerator_t7BC9736C0E7ABF17FF8FC49BF404353BA6388D90 L_1;
		L_1 = List_1_GetEnumerator_mDECD8DABCA0A0C7A278968B5C3251D7E99E4ABAE(L_0, List_1_GetEnumerator_mDECD8DABCA0A0C7A278968B5C3251D7E99E4ABAE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB6D50815934F48B1CDCB396A3E245AD26BBB3FB5((&V_0), Enumerator_Dispose_mB6D50815934F48B1CDCB396A3E245AD26BBB3FB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (var gear in _gearsList)
				Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* L_2;
				L_2 = Enumerator_get_Current_m0E040A8EF15B7B090B920D86863CDB6F03593AB1_inline((&V_0), Enumerator_get_Current_m0E040A8EF15B7B090B920D86863CDB6F03593AB1_RuntimeMethod_var);
				// gear.Lock(true);
				NullCheck(L_2);
				Gear_Lock_m29278FF891D4F823F9E750BA6F143B9DB492EBB6_inline(L_2, (bool)1, NULL);
			}

IL_001b_1:
			{
				// foreach (var gear in _gearsList)
				bool L_3;
				L_3 = Enumerator_MoveNext_mB67944247850AE3BCB72BEAF8C9F107568B6F1C2((&V_0), Enumerator_MoveNext_mB67944247850AE3BCB72BEAF8C9F107568B6F1C2_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// _winAnimation = true;
		__this->____winAnimation_15 = (bool)1;
		// _audio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____audio_5;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// StartCoroutine(WinAnimation());
		RuntimeObject* L_5;
		L_5 = Level_WinAnimation_mE70A16FFF1B01B605D17E657B35068410564B968(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Level::WinAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WinAnimation_mE70A16FFF1B01B605D17E657B35068410564B968 (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* L_0 = (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8*)il2cpp_codegen_object_new(U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWinAnimationU3Ed__18__ctor_m455C6F67C627693A7D7C5941C2D180B561813073(L_0, 0, NULL);
		U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Level::RotateGears(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_RotateGears_mBDD4D34A9FB75130BD2FB3C97521D0CF5974126D (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, float ___rotation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* G_B3_1 = NULL;
	float G_B2_0 = 0.0f;
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	float G_B4_1 = 0.0f;
	Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* G_B4_2 = NULL;
	{
		// for (int i = 0; i < _pinsList.Count; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		// var gear = (Gear)_pinsList[i].Placeable;
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_0 = __this->____pinsList_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Pin_t436B943A646153A43944025466CB8B68CE763843* L_2;
		L_2 = List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38(L_0, L_1, List_1_get_Item_m4AC14BBCE2938813ABFA1ADF89BE7ED62A3FFF38_RuntimeMethod_var);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Pin_get_Placeable_mE30D2C67FB6AF637387681A38A31D893DB276045_inline(L_2, NULL);
		// float speed = rotation * Time.deltaTime;
		float L_4 = ___rotation0;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// speed *= i % 2 == 0 ? 1 : -1;
		float L_6 = V_1;
		int32_t L_7 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = ((Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB*)CastclassClass((RuntimeObject*)L_3, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_il2cpp_TypeInfo_var));
		if (!((int32_t)(L_7%2)))
		{
			G_B3_0 = L_6;
			G_B3_1 = ((Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB*)CastclassClass((RuntimeObject*)L_3, Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB_il2cpp_TypeInfo_var));
			goto IL_002b;
		}
	}
	{
		G_B4_0 = (-1);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_002c:
	{
		V_1 = ((float)il2cpp_codegen_multiply(G_B4_1, ((float)G_B4_0)));
		// gear.Rotate(speed);
		float L_8 = V_1;
		NullCheck(G_B4_2);
		Gear_Rotate_m2A7118BFAFE1032E113F2979032E50A248AC4BBE(G_B4_2, L_8, NULL);
		// for (int i = 0; i < _pinsList.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < _pinsList.Count; i++)
		int32_t L_10 = V_0;
		List_1_t76D4836E872FAF2BAF8D35C4F2E4A0CA9082B257* L_11 = __this->____pinsList_13;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_inline(L_11, List_1_get_Count_m4DD83093363D428E206D162AE85A05E3AD43A67D_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mD8581BC772C33D9960DCE832878E1A5C45F7C0DA (Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Level/<WinAnimation>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinAnimationU3Ed__18__ctor_m455C6F67C627693A7D7C5941C2D180B561813073 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Level/<WinAnimation>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinAnimationU3Ed__18_System_IDisposable_Dispose_m41E2B25CA20F7480C30321193F2EEAD4A51CB325 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Level/<WinAnimation>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWinAnimationU3Ed__18_MoveNext_mFA553A9434E644D1B8F8DFCD5B88EB38CC191799 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_00ea;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__2_3 = (0.0f);
		goto IL_00aa;
	}

IL_0036:
	{
		// RotateGears(Mathf.Lerp(0, _rotationSpeed, time / _accelerationTime));
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_3 = V_1;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->____rotationSpeed_10;
		float L_6 = __this->___U3CtimeU3E5__2_3;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->____accelerationTime_11;
		float L_9;
		L_9 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_5, ((float)(L_6/L_8)), NULL);
		NullCheck(L_3);
		Level_RotateGears_mBDD4D34A9FB75130BD2FB3C97521D0CF5974126D(L_3, L_9, NULL);
		// _audio.volume = Mathf.Lerp(0, _fullVolume, time / _accelerationTime);
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_10 = V_1;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10->____audio_5;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->____fullVolume_16;
		float L_14 = __this->___U3CtimeU3E5__2_3;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->____accelerationTime_11;
		float L_17;
		L_17 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.0f), L_13, ((float)(L_14/L_16)), NULL);
		NullCheck(L_11);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_11, L_17, NULL);
		// time += Time.deltaTime;
		float L_18 = __this->___U3CtimeU3E5__2_3;
		float L_19;
		L_19 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_18, L_19));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a3:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00aa:
	{
		// while (time < _accelerationTime)
		float L_20 = __this->___U3CtimeU3E5__2_3;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->____accelerationTime_11;
		if ((((float)L_20) < ((float)L_22)))
		{
			goto IL_0036;
		}
	}
	{
		// _audio.volume = _fullVolume;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_23 = V_1;
		NullCheck(L_23);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24 = L_23->____audio_5;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->____fullVolume_16;
		NullCheck(L_24);
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_24, L_26, NULL);
		goto IL_00f1;
	}

IL_00ce:
	{
		// RotateGears(_rotationSpeed);
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_27 = V_1;
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_28 = V_1;
		NullCheck(L_28);
		float L_29 = L_28->____rotationSpeed_10;
		NullCheck(L_27);
		Level_RotateGears_mBDD4D34A9FB75130BD2FB3C97521D0CF5974126D(L_27, L_29, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ea:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f1:
	{
		// while (_winAnimation)
		Level_t1CED3B73CCB94716BF67A03B39D9DE9A991FD5A1* L_30 = V_1;
		NullCheck(L_30);
		bool L_31 = L_30->____winAnimation_15;
		if (L_31)
		{
			goto IL_00ce;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Level/<WinAnimation>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWinAnimationU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFAA3972EDDF351A04F37D53DE236A2032C6A6E9C (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Level/<WinAnimation>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWinAnimationU3Ed__18_System_Collections_IEnumerator_Reset_mFFBC044DE6EB334CA232F1AAE94615E6A3729035 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWinAnimationU3Ed__18_System_Collections_IEnumerator_Reset_mFFBC044DE6EB334CA232F1AAE94615E6A3729035_RuntimeMethod_var)));
	}
}
// System.Object Level/<WinAnimation>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWinAnimationU3Ed__18_System_Collections_IEnumerator_get_Current_mEDA54500573F35021800E06FE9BF26CFAC296CB8 (U3CWinAnimationU3Ed__18_t9D509C54F547368E93534E7DA0DB2C1DC982BCD8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelObject__ctor_mE98E56EBC8F202DBCD8DBBD05E3E0723133C7EEA (LevelObject_tCF7CF70B8067B9823466E2A11D7522E06FB56B91* __this, const RuntimeMethod* method) 
{
	{
		DataObject__ctor_m96B598C9FDE4808AFEB15049A4AA35A49E170360(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelGear::.ctor(GearVisual)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelGear__ctor_m4174A28703433314CAF315CE199E938459115C85 (LevelGear_t0A140A6DF09814474752B2B02461D34A395F75C4* __this, GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* ___gearVisual0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LevelGear(GearVisual gearVisual)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// gearObject = gearVisual.gearObject;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_0 = ___gearVisual0;
		NullCheck(L_0);
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_1;
		L_1 = GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline(L_0, NULL);
		__this->___gearObject_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gearObject_1), (void*)L_1);
		// position = gearVisual.transform.position * new Vector2(1f, -1f) * 0.01f;
		GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* L_2 = ___gearVisual0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VisualElement_get_transform_m3BAB67CC182B8B60920924AEE52826BD736A051D(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* UnityEngine.Vector3 UnityEngine.UIElements.ITransform::get_position() */, ITransform_tE5B8E1959EF1ABDE4E6DD44E9FB55EB043FCCDA4_il2cpp_TypeInfo_var, L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (1.0f), (-1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_5, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_7, (0.00999999978f), NULL);
		__this->___position_0 = L_8;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// IPlaceable Pin::get_Placeable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pin_get_Placeable_mE30D2C67FB6AF637387681A38A31D893DB276045 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		// public IPlaceable Placeable { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlaceableU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Pin::set_Placeable(IPlaceable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_set_Placeable_mA1AB64C236424DD46AA780DE4A99D0A8FE53E318 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlaceable Placeable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlaceableU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlaceableU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String Pin::get_MatchID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pin_get_MatchID_mF2A11EBEAB979C0C8BC9C66463168E9EFC1F7FC1 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = __this->___U3CMatchIDU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Pin::set_MatchID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_set_MatchID_m069944B308B87DD0219D9C2BDE5261E367A119B3 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMatchIDU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatchIDU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Pin::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pin_get_Position_m32F8171895B257356CE3AA12E0103968D1085BF5 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position => transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void Pin::add_OnMatchChange(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_add_OnMatchChange_mEF9D268E8739618C5DBC1A1E9FB5EFCE21325CCC (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___OnMatchChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___OnMatchChange_6);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Pin::remove_OnMatchChange(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_remove_OnMatchChange_m896E78F060E50E5B2E8FA4C9C6548B0CE2031340 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___OnMatchChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___OnMatchChange_6);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Pin::Init(GearObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_Init_m9175A50C3F50CCBADA098B9E17E59D124A98C2C4 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___gearObject0, const RuntimeMethod* method) 
{
	{
		// MatchID = gearObject.ID;
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = ___gearObject0;
		NullCheck(L_0);
		String_t* L_1 = ((DataObject_t30B5714B92DE1B593C5559E8091FCCF20FE174DC*)L_0)->___ID_5;
		Pin_set_MatchID_m069944B308B87DD0219D9C2BDE5261E367A119B3_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Pin::SetPlaceable(IPlaceable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin_SetPlaceable_m0BE4CCEE908E45DD3242ECE31E4ACD6A441A33B8 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, RuntimeObject* ___placeable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlaceable_tDDF14B010793A2F699B5CF1265C4A146448BCC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B7_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B6_0 = NULL;
	{
		// Placeable = placeable;
		RuntimeObject* L_0 = ___placeable0;
		Pin_set_Placeable_mA1AB64C236424DD46AA780DE4A99D0A8FE53E318_inline(__this, L_0, NULL);
		// Placeable?.SetPlacement(this);
		RuntimeObject* L_1;
		L_1 = Pin_get_Placeable_mE30D2C67FB6AF637387681A38A31D893DB276045_inline(__this, NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void IPlaceable::SetPlacement(IPlacement) */, IPlaceable_tDDF14B010793A2F699B5CF1265C4A146448BCC47_il2cpp_TypeInfo_var, G_B2_0, __this);
	}

IL_0019:
	{
		// if (placeable is IMatch)
		RuntimeObject* L_3 = ___placeable0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var)))
		{
			goto IL_005e;
		}
	}
	{
		// bool newMatch = ((IMatch)placeable).MatchID == MatchID;
		RuntimeObject* L_4 = ___placeable0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_4, IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var)));
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String IMatch::get_MatchID() */, IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IMatch_t778AA1297B689E6244CEAE20A2D15BA3B50D65B3_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = Pin_get_MatchID_mF2A11EBEAB979C0C8BC9C66463168E9EFC1F7FC1_inline(__this, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
		V_0 = L_7;
		// if (_match != newMatch)
		bool L_8 = __this->____match_7;
		bool L_9 = V_0;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_005e;
		}
	}
	{
		// _match = newMatch;
		bool L_10 = V_0;
		__this->____match_7 = L_10;
		// OnMatchChange?.Invoke(_match);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_11 = __this->___OnMatchChange_6;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		bool L_13 = __this->____match_7;
		NullCheck(G_B7_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B7_0, L_13, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Pin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pin__ctor_m05B3A4359527E446062A9CDF07F4EABBE9BD1037 (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerGrabber::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGrabber_Awake_m4B4151AA0BADAF6767A1B95C2065E18D16A4F020 (PlayerGrabber_t7E517656E22325571E4EB2ED67581D82648B3FEE* __this, const RuntimeMethod* method) 
{
	{
		// _camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->____camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerGrabber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGrabber_Update_m1C3F7FD5ADEB1C53DD7FFBD5AB9A823764158062 (PlayerGrabber_t7E517656E22325571E4EB2ED67581D82648B3FEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisIDragable_t66E9FACA38F86CE78AED884BFF59125743706758_mE01C6958030E0BAE9618AE125A208BE48C19AA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDragable_t66E9FACA38F86CE78AED884BFF59125743706758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		// Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		// RaycastHit2D[] hit = Physics2D.RaycastAll(mousePos, Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_6;
		L_6 = Physics2D_RaycastAll_m31A665A3ED5DF27710705A28C660E698DCF163C9(L_4, L_5, NULL);
		V_0 = L_6;
		// for (int i = 0; i < hit.Length; i++)
		V_1 = 0;
		goto IL_0079;
	}

IL_002b:
	{
		// if (hit[i].transform != null && hit[i].transform.TryGetComponent(out _target))
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), NULL);
		RuntimeObject** L_14 = (&__this->____target_5);
		NullCheck(L_13);
		bool L_15;
		L_15 = Component_TryGetComponent_TisIDragable_t66E9FACA38F86CE78AED884BFF59125743706758_mE01C6958030E0BAE9618AE125A208BE48C19AA18(L_13, L_14, Component_TryGetComponent_TisIDragable_t66E9FACA38F86CE78AED884BFF59125743706758_mE01C6958030E0BAE9618AE125A208BE48C19AA18_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// _target.PickUp(_camera.ScreenToWorldPoint(Input.mousePosition));
		RuntimeObject* L_16 = __this->____target_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->____camera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_17, L_18, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(0 /* System.Void IDragable::PickUp(UnityEngine.Vector3) */, IDragable_t66E9FACA38F86CE78AED884BFF59125743706758_il2cpp_TypeInfo_var, L_16, L_19);
		// break;
		goto IL_007f;
	}

IL_0075:
	{
		// for (int i = 0; i < hit.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0079:
	{
		// for (int i = 0; i < hit.Length; i++)
		int32_t L_21 = V_1;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_007f:
	{
		// if (Input.GetMouseButton(0) && _target != null)
		bool L_23;
		L_23 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_23)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_24 = __this->____target_5;
		if (!L_24)
		{
			goto IL_00aa;
		}
	}
	{
		// _target.Drag(_camera.ScreenToWorldPoint(Input.mousePosition));
		RuntimeObject* L_25 = __this->____target_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->____camera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_26, L_27, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(1 /* System.Void IDragable::Drag(UnityEngine.Vector3) */, IDragable_t66E9FACA38F86CE78AED884BFF59125743706758_il2cpp_TypeInfo_var, L_25, L_28);
	}

IL_00aa:
	{
		// if (Input.GetMouseButtonUp(0) && _target != null)
		bool L_29;
		L_29 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_29)
		{
			goto IL_00cc;
		}
	}
	{
		RuntimeObject* L_30 = __this->____target_5;
		if (!L_30)
		{
			goto IL_00cc;
		}
	}
	{
		// _target.Release();
		RuntimeObject* L_31 = __this->____target_5;
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(2 /* System.Void IDragable::Release() */, IDragable_t66E9FACA38F86CE78AED884BFF59125743706758_il2cpp_TypeInfo_var, L_31);
		// _target = null;
		__this->____target_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_5), (void*)(RuntimeObject*)NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void PlayerGrabber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGrabber__ctor_m9997F1725EF623F919BFBD23C31403B3E7F6C7EA (PlayerGrabber_t7E517656E22325571E4EB2ED67581D82648B3FEE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScreenFitter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFitter_Start_m498879978880A73C5FEF72984F0A5B5602C10CAB (ScreenFitter_tEA276D841D70859F9E3D6473D72A9E13EBB121A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD688D72984FC989FE13E543250B95B3138B0D0DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float G_B5_0 = 0.0f;
	{
		// if (!TryGetComponent(out SpriteRenderer spriteRenderer)) { return; }
		bool L_0;
		L_0 = Component_TryGetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD688D72984FC989FE13E543250B95B3138B0D0DB(__this, (&V_0), Component_TryGetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mD688D72984FC989FE13E543250B95B3138B0D0DB_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// if (!TryGetComponent(out SpriteRenderer spriteRenderer)) { return; }
		return;
	}

IL_000b:
	{
		// Camera camera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_1 = L_1;
		// float height = 2f * camera.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = V_1;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_2, NULL);
		V_2 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		// float width = height * camera.aspect;
		float L_4 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_5, NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_4, L_6));
		// var spriteSize = spriteRenderer.sprite.bounds.size;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = V_0;
		NullCheck(L_7);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8;
		L_8 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_7, NULL);
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Sprite_get_bounds_m042F847F6C5118E6B14A3F79A1E1C53E7DFBF452(L_8, NULL);
		V_7 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_7), NULL);
		V_4 = L_10;
		// float spriteAspect = spriteSize.x / spriteSize.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_4;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_4;
		float L_14 = L_13.___y_3;
		V_5 = ((float)(L_12/L_14));
		// float scale = camera.aspect > spriteAspect ? width / spriteSize.x : height / spriteSize.y;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = V_1;
		NullCheck(L_15);
		float L_16;
		L_16 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_15, NULL);
		float L_17 = V_5;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_0063;
		}
	}
	{
		float L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_4;
		float L_20 = L_19.___y_3;
		G_B5_0 = ((float)(L_18/L_20));
		goto IL_006c;
	}

IL_0063:
	{
		float L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		float L_23 = L_22.___x_2;
		G_B5_0 = ((float)(L_21/L_23));
	}

IL_006c:
	{
		V_6 = G_B5_0;
		// transform.localScale = Vector3.one * scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_27, NULL);
		// }
		return;
	}
}
// System.Void ScreenFitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenFitter__ctor_m1A1A5D2A86387DCA90C94953830AD261DC3BE503 (ScreenFitter_tEA276D841D70859F9E3D6473D72A9E13EBB121A3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TranslatePosition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatePosition_Start_m5B78E90280E026174361F398114335549B09000C (TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* __this, const RuntimeMethod* method) 
{
	{
		// _start = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->____start_11 = L_1;
		// _final = transform.position + _target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->____target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		__this->____final_12 = L_5;
		// }
		return;
	}
}
// System.Void TranslatePosition::Translate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatePosition_Translate_mF4CB0163D831AFC115BB9B93EDD69149C5C4F0C6 (TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* __this, const RuntimeMethod* method) 
{
	{
		// if (_inProgress) { return; }
		bool L_0 = __this->____inProgress_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_inProgress) { return; }
		return;
	}

IL_0009:
	{
		// StartCoroutine(Move());
		RuntimeObject* L_1;
		L_1 = TranslatePosition_Move_mCCCEC34449F7671F630346348EFFBC15837A9F0D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TranslatePosition::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslatePosition_Move_mCCCEC34449F7671F630346348EFFBC15837A9F0D (TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* L_0 = (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7*)il2cpp_codegen_object_new(U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveU3Ed__11__ctor_mEFCD54EDB51B2A59D027D47250B30A551C84A0E0(L_0, 0, NULL);
		U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TranslatePosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslatePosition__ctor_mA3818F4890ED65240EF118DB708C3254CDFE6FDF (TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TranslatePosition/<Move>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__11__ctor_mEFCD54EDB51B2A59D027D47250B30A551C84A0E0 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TranslatePosition/<Move>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__11_System_IDisposable_Dispose_m0F43D8E801DEF88A9C5C871FAB173DD66E8FCA3B (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TranslatePosition/<Move>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__11_MoveNext_m55CD7D8473734C237BC9CC13BFF3A6D97E6877F9 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0090;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _inProgress = true;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_4 = V_1;
		NullCheck(L_4);
		L_4->____inProgress_10 = (bool)1;
		// float targetTime = _elapsedTime + _time;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->____elapsedTime_9;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->____time_5;
		__this->___U3CtargetTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		goto IL_0097;
	}

IL_003a:
	{
		// transform.position = Vector3.Lerp(_start, _final, _curve.Evaluate(_elapsedTime / _time));
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->____start_11;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_13 = V_1;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->____final_12;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_15 = V_1;
		NullCheck(L_15);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_16 = L_15->____curve_6;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->____elapsedTime_9;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->____time_5;
		NullCheck(L_16);
		float L_21;
		L_21 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_16, ((float)(L_18/L_20)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_12, L_14, L_21, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_22, NULL);
		// _elapsedTime += Time.deltaTime;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_23 = V_1;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->____elapsedTime_9;
		float L_26;
		L_26 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_23);
		L_23->____elapsedTime_9 = ((float)il2cpp_codegen_add(L_25, L_26));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0090:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0097:
	{
		// while (_elapsedTime < targetTime)
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->____elapsedTime_9;
		float L_29 = __this->___U3CtargetTimeU3E5__2_3;
		if ((((float)L_28) < ((float)L_29)))
		{
			goto IL_003a;
		}
	}
	{
		// _inProgress = false;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_30 = V_1;
		NullCheck(L_30);
		L_30->____inProgress_10 = (bool)0;
		// if (_loop)
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = L_31->____loop_7;
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		// StartCoroutine(Move());
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_33 = V_1;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_34 = V_1;
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = TranslatePosition_Move_mCCCEC34449F7671F630346348EFFBC15837A9F0D(L_34, NULL);
		NullCheck(L_33);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_36;
		L_36 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_33, L_35, NULL);
		goto IL_010b;
	}

IL_00c3:
	{
		// else if(_snap)
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_37 = V_1;
		NullCheck(L_37);
		bool L_38 = L_37->____snap_8;
		if (!L_38)
		{
			goto IL_010b;
		}
	}
	{
		// transform.position = Vector3.Lerp(_start, _final, _curve.Evaluate(targetTime / _time));
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_39 = V_1;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_41 = V_1;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->____start_11;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_43 = V_1;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43->____final_12;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_45 = V_1;
		NullCheck(L_45);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_46 = L_45->____curve_6;
		float L_47 = __this->___U3CtargetTimeU3E5__2_3;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_48 = V_1;
		NullCheck(L_48);
		float L_49 = L_48->____time_5;
		NullCheck(L_46);
		float L_50;
		L_50 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_46, ((float)(L_47/L_49)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_42, L_44, L_50, NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_51, NULL);
		// _elapsedTime = targetTime;
		TranslatePosition_tA4C918CDF0077A765FA8BA5CFDD37D51D634ED37* L_52 = V_1;
		float L_53 = __this->___U3CtargetTimeU3E5__2_3;
		NullCheck(L_52);
		L_52->____elapsedTime_9 = L_53;
	}

IL_010b:
	{
		// }
		return (bool)0;
	}
}
// System.Object TranslatePosition/<Move>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m89CC4F98A2CB49A232D0F040C3BC9DFA24FBE1D9 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TranslatePosition/<Move>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__11_System_Collections_IEnumerator_Reset_m2783464F20E48E0A0C9268EDE6345A064B321EB4 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__11_System_Collections_IEnumerator_Reset_m2783464F20E48E0A0C9268EDE6345A064B321EB4_RuntimeMethod_var)));
	}
}
// System.Object TranslatePosition/<Move>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__11_System_Collections_IEnumerator_get_Current_m08551EA6B81C708C78C43DF5D7F616C9E37A4680 (U3CMoveU3Ed__11_t218A9F55DE121A0E800719C9730ADB6016747DA7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_set_MatchID_mA0328087070E3E41D678C2EC67E0FE3AB446A167_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMatchIDU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatchIDU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Gear_get_Placement_m31D6B0879A2F7F07090131406E7CA366D5F7E274_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, const RuntimeMethod* method) 
{
	{
		// public IPlacement Placement { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlacementU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_set_Placement_m23CB1814D6FB299224B5A66A300EC375A4831115_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlacement Placement { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlacementU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CpickingModeU3Ek__BackingField_34 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GearVisual_set_gearObject_m37389BF863530245100BDE3C4950B55CBC9501AF_inline (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* ___value0, const RuntimeMethod* method) 
{
	{
		// public GearObject gearObject { get; private set; }
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = ___value0;
		__this->___U3CgearObjectU3Ek__BackingField_65 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgearObjectU3Ek__BackingField_65), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* GearVisual_get_gearObject_m4D8B7982EA1B801AF7168D9712EFB08CB13FA3F7_inline (GearVisual_tA7D3E133677F792DB37916ED6CE29FE3C86EF0FD* __this, const RuntimeMethod* method) 
{
	{
		// public GearObject gearObject { get; private set; }
		GearObject_t5FE99835F41A87A610443F10964A664C69865AA2* L_0 = __this->___U3CgearObjectU3Ek__BackingField_65;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Gear_Lock_m29278FF891D4F823F9E750BA6F143B9DB492EBB6_inline (Gear_t288E2D1B42821541A8B02E3550D7715AE0B7A9EB* __this, bool ___newLock0, const RuntimeMethod* method) 
{
	{
		// _lock = newLock;
		bool L_0 = ___newLock0;
		__this->____lock_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pin_get_Placeable_mE30D2C67FB6AF637387681A38A31D893DB276045_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		// public IPlaceable Placeable { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPlaceableU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pin_set_MatchID_m069944B308B87DD0219D9C2BDE5261E367A119B3_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMatchIDU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMatchIDU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pin_set_Placeable_mA1AB64C236424DD46AA780DE4A99D0A8FE53E318_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IPlaceable Placeable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPlaceableU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlaceableU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pin_get_MatchID_mF2A11EBEAB979C0C8BC9C66463168E9EFC1F7FC1_inline (Pin_t436B943A646153A43944025466CB8B68CE763843* __this, const RuntimeMethod* method) 
{
	{
		// public string MatchID { get; private set; }
		String_t* L_0 = __this->___U3CMatchIDU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}

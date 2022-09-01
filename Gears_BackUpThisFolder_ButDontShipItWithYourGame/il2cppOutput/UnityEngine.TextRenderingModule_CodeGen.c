#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern void Font_add_textureRebuilt_m0C7E9998192691918BC92548EE955380AD63FF0B (void);
// 0x00000002 System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern void Font_remove_textureRebuilt_mCCA3614ED92E2BE1EAC5FCE2D7DDFEDB0DCDE127 (void);
// 0x00000003 UnityEngine.Material UnityEngine.Font::get_material()
extern void Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364 (void);
// 0x00000004 System.Void UnityEngine.Font::.ctor()
extern void Font__ctor_m9106C7F312AE77F6721001A5A3143951201AC841 (void);
// 0x00000005 System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern void Font_InvokeTextureRebuilt_Internal_m86017C5A7B49F602937D8C32FC978B876AFC37F9 (void);
// 0x00000006 System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern void Font_HasCharacter_m71A84FE036055880E1543D79A38FEFA495AD200B (void);
// 0x00000007 System.Boolean UnityEngine.Font::HasCharacter(System.Int32)
extern void Font_HasCharacter_mAB838A26F002CB5E4B4DB297F7D6836A28625B18 (void);
// 0x00000008 System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern void Font_Internal_CreateFont_mF7CE69E4C8DFB953EA74F262DE3D28B83C4DF22F (void);
// 0x00000009 System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern void FontTextureRebuildCallback__ctor_m1AF27FC83F3136E493F47015F99CE7A4E6BCA0BC (void);
// 0x0000000A System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern void FontTextureRebuildCallback_Invoke_m8B52C3F4823ADBB80062209E6BA2B33202AE958D (void);
static Il2CppMethodPointer s_methodPointers[10] = 
{
	Font_add_textureRebuilt_m0C7E9998192691918BC92548EE955380AD63FF0B,
	Font_remove_textureRebuilt_mCCA3614ED92E2BE1EAC5FCE2D7DDFEDB0DCDE127,
	Font_get_material_m61ABDEC14C6D659DDC5A4F080023699116C17364,
	Font__ctor_m9106C7F312AE77F6721001A5A3143951201AC841,
	Font_InvokeTextureRebuilt_Internal_m86017C5A7B49F602937D8C32FC978B876AFC37F9,
	Font_HasCharacter_m71A84FE036055880E1543D79A38FEFA495AD200B,
	Font_HasCharacter_mAB838A26F002CB5E4B4DB297F7D6836A28625B18,
	Font_Internal_CreateFont_mF7CE69E4C8DFB953EA74F262DE3D28B83C4DF22F,
	FontTextureRebuildCallback__ctor_m1AF27FC83F3136E493F47015F99CE7A4E6BCA0BC,
	FontTextureRebuildCallback_Invoke_m8B52C3F4823ADBB80062209E6BA2B33202AE958D,
};
static const int32_t s_InvokerIndices[10] = 
{
	4547,
	4547,
	2903,
	2977,
	4547,
	1803,
	1723,
	4186,
	1365,
	2977,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_TextRenderingModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_TextRenderingModule_CodeGenModule = 
{
	"UnityEngine.TextRenderingModule.dll",
	10,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

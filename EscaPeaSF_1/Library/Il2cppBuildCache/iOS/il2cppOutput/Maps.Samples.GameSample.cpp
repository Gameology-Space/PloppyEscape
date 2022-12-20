#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Double>
struct Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng>
struct Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<Niantic.Lightship.Maps.IMapTile,Niantic.Lightship.Maps.Unity.Core.MapTileObject>
struct Action_2_t31AAB64429391B162C22C086F909FC7F5CBEC30C;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>
struct Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.GameObject>
struct Dictionary_2_t6C1BE05C8DB8444D331289FC4B51C1F491398FF9;
// System.Collections.Generic.Dictionary`2<System.Object,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>>
struct Dictionary_2_tD08D62143FA52A95294A3371CE3033FC3EBB4704;
// System.Collections.Generic.Dictionary`2<System.UInt64,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<Niantic.Lightship.Maps.Unity.Core.MapTileObject>>
struct Dictionary_2_t9F4EAFF3053CB4BC01C140F5C9676D7813960EEF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Niantic.Lightship.Maps.IMapTile>
struct Dictionary_2_t0912DB49E3CD503DBEE2154F82CCD6B562E45889;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// Niantic.Lightship.Maps.Unity.Core.IPooledObjectAccessor`1<UnityEngine.GameObject>
struct IPooledObjectAccessor_1_t33EE4F3B662C9D6AB010F14B496FCBB4174BD049;
// Niantic.Lightship.Maps.Unity.Core.IPooledObjectAccessor`1<System.Object>
struct IPooledObjectAccessor_1_tBA37FFC4EE369B4359C636FA1FD3584BA209406C;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>
struct KeyCollection_t68520C1AC6D85EAD33089B02FB6D560857D11E2F;
// System.Collections.Generic.LinkedList`1<Niantic.Lightship.Maps.IMapTile>
struct LinkedList_1_tE3A0836FD99DF40F4445BD4387EFD9AA72FD3156;
// System.Collections.Generic.List`1<Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase>
struct List_1_tC64D0798BD339C3FC9D07C7C2D170848260A3FC0;
// System.Collections.Generic.List`1<Niantic.Lightship.Maps.Unity.MapLayers.MapLayer>
struct List_1_tDD3D5E23B3CB43B1802560D170ABEE874A9786A0;
// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<UnityEngine.GameObject>
struct ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D;
// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<Niantic.Lightship.Maps.Unity.Core.MapTileObject>
struct ObjectPool_1_tD748296493946FAD4B9FF73A706912D2D47606C9;
// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<System.Object>
struct ObjectPool_1_t193E1A991BDFBF6126C8A6739856927F41397343;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>
struct ValueCollection_t15E98B1F62933D602738160F22A1113F1F69145E;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_t0BB2A08461B4A690958E8ABE070EEA4E5291DA77;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Niantic.Lightship.Maps.Proto.FeatureKind[]
struct FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Niantic.Lightship.Maps.Logging.ChannelLogger
struct ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase
struct FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC;
// Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText
struct FloatingText_tC06A4948E3854A55715CF53F95F4CD43FBB5E1B1;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Niantic.Lightship.Maps.Unity.Core.ILightshipMap
struct ILightshipMap_t206B4E60112B63B6DF6CE54CE246DE45E0309729;
// Niantic.Lightship.Maps.ILightshipMapsSystem
struct ILightshipMapsSystem_t358915433BED5E3D7A3F26E1ECE98513137C8301;
// Niantic.Lightship.Maps.IMapTile
struct IMapTile_t268EAD8286E900EE3CF96F98DF758D94592A637E;
// Niantic.Lightship.Maps.IMapViewManager
struct IMapViewManager_t70D5138E653F7089CE35E343EB282EE2BBD9704D;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Niantic.Lightship.Maps.ITileStreamService
struct ITileStreamService_t1D65F8F06D17601F4EB1A2F7B442E28F943C5E48;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Niantic.Lightship.Maps.Unity.Core.LightshipMap
struct LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA;
// Niantic.Lightship.Maps.Samples.GameSample.LocateButton
struct LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner
struct MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405;
// Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions
struct MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60;
// Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature
struct MapGameResourceFeature_tCB190F0D064826B46018A71D3B95D85F713681E3;
// Niantic.Lightship.Maps.Samples.GameSample.MapGameState
struct MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F;
// Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController
struct MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E;
// Niantic.Lightship.Maps.Unity.Core.MapUnitConverter
struct MapUnitConverter_tAAFCC18121509C2E232D309AE9EAB4316CB858B1;
// Niantic.Lightship.Maps.Unity.Configuration.MapsAuthConfig
struct MapsAuthConfig_t1940C2A1E42D121BFE2A5AC76B0DB01D0365C637;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Niantic.Lightship.Maps.Unity.Builders.BaseTypes.ObjectBuilder
struct ObjectBuilder_tAAAB0EE7D4D24C5CF09F72BC9F2FB0DAEB9A5EBD;
// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController
struct PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD;
// PuzzleDetails
struct PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Niantic.Lightship.Maps.Unity.Core.LightshipMap/ViewableMapArea
struct ViewableMapArea_t0DE7838E83D5C6EA927CE6CAB71121FBF072DDDF;
// Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7
struct U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13
struct U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAreaFeature_tB8D9690EB342EC4818EB040C1888AA60D9B8FBB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t2103B11E7291A2184483D261AA0D8743D2122C82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA07F0E2B6566E6A3CE903DDF235807899A9048EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILightshipMap_t206B4E60112B63B6DF6CE54CE246DE45E0309729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMapTile_t268EAD8286E900EE3CF96F98DF758D94592A637E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07D7F89F38965983D4843CA623F7545E7C2DAB46;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB97E89F70AA8EE2925A55DBD40F3D3378CAF85;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteralC4362021CD55BD6C6A04DBF5CA1C2E357F274EEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD04A7461F22E7D927B31DB84DEB8034A56F012D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9A078FD2E7224FB2F4C3CCEB5986790DF064D8;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471_mAFA4E0DEDBEE45A6730DDF3930CCBD68D3A1ACF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m07513FAAEEF084BFCED6593C8D2AEEDB2271D736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mEA4A1A06C63BB85A87B91BD810BC7E85346B0CEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m746DF18B2418FE3C8ECD4B283D0383D4A5248F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD_m8C9BF18A1806295DC6BCD933227382937E37AC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_GetOrCreate_m0E2909D9CFCCFFCAD6029989B65681D1A66D616C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m3CACBFCF42231C44F989108BAEFA57C79506E7D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerLocationController_OnMapOriginChanged_m2E9CB3CCB2654038056100487CC57639A967F299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PooledObject_1_Dispose_mE4314F3A11237479C59B74621EC79739B766913F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PooledObject_1_get_Value_m052426ED679EB65630176392DA945C2684CFDE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTurnBackOnU3Ed__7_System_Collections_IEnumerator_Reset_mB5A41DDCBA34748015E2B71161A483E11B12CFA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateGPSLocationU3Ed__13_System_Collections_IEnumerator_Reset_m15E8EA2DBB0C03E95855AC52BD34CE5803789E79_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCF786370E17E9ACAE6013D7DF4FD0FDE71E9DB24 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>
struct Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0BB2A08461B4A690958E8ABE070EEA4E5291DA77* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t68520C1AC6D85EAD33089B02FB6D560857D11E2F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t15E98B1F62933D602738160F22A1113F1F69145E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<UnityEngine.GameObject>
struct ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int64,T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_liveObjects
	Dictionary_2_t6C1BE05C8DB8444D331289FC4B51C1F491398FF9* ____liveObjects_0;
	// System.Collections.Generic.Queue`1<T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_pool
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ____pool_1;
	// System.Action`1<T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_onCreate
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ____onCreate_2;
	// System.Action`1<T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_onRelease
	Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ____onRelease_3;
	// T Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_source
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____source_4;
	// System.Int64 Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::_objectId
	int64_t ____objectId_5;
};

struct ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D_StaticFields
{
	// Niantic.Lightship.Maps.Logging.ChannelLogger Niantic.Lightship.Maps.Unity.Core.ObjectPool`1::<Log>k__BackingField
	ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* ___U3CLogU3Ek__BackingField_6;
};
struct Il2CppArrayBounds;

// Niantic.Lightship.Maps.Logging.ChannelLogger
struct ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88  : public RuntimeObject
{
	// System.String Niantic.Lightship.Maps.Logging.ChannelLogger::<ChannelName>k__BackingField
	String_t* ___U3CChannelNameU3Ek__BackingField_0;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
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

// Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7
struct U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23  : public RuntimeObject
{
	// System.Int32 Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Niantic.Lightship.Maps.Samples.GameSample.LocateButton Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::<>4__this
	LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* ___U3CU3E4__this_2;
};

// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13
struct U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447  : public RuntimeObject
{
	// System.Int32 Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::<>4__this
	PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* ___U3CU3E4__this_2;
	// System.Int32 Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::<maxWait>5__2
	int32_t ___U3CmaxWaitU3E5__2_3;
};

// Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>
struct PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 
{
	// Niantic.Lightship.Maps.Unity.Core.IPooledObjectAccessor`1<T> Niantic.Lightship.Maps.Unity.Core.PooledObject`1::_objectPool
	RuntimeObject* ____objectPool_0;
	// System.Int64 Niantic.Lightship.Maps.Unity.Core.PooledObject`1::_id
	int64_t ____id_1;
};

// Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>
struct PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B 
{
	// Niantic.Lightship.Maps.Unity.Core.IPooledObjectAccessor`1<T> Niantic.Lightship.Maps.Unity.Core.PooledObject`1::_objectPool
	RuntimeObject* ____objectPool_0;
	// System.Int64 Niantic.Lightship.Maps.Unity.Core.PooledObject`1::_id
	int64_t ____id_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// Niantic.Lightship.Maps.Coordinates.LatLng
struct LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 
{
	// System.Double Niantic.Lightship.Maps.Coordinates.LatLng::Latitude
	double ___Latitude_4;
	// System.Double Niantic.Lightship.Maps.Coordinates.LatLng::Longitude
	double ___Longitude_5;
};

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// Niantic.Lightship.Maps.Proto.FeatureKind
struct FeatureKind_t1FC4112D6A2C94309C93B4E2D8D8C1A25726C619 
{
	// System.Int32 Niantic.Lightship.Maps.Proto.FeatureKind::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// Niantic.Lightship.Maps.ViewPoint
struct ViewPoint_t904F9F739514701B2F80FCE5464AAE1674D7B37C 
{
	// Niantic.Lightship.Maps.Coordinates.LatLng Niantic.Lightship.Maps.ViewPoint::Center
	LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 ___Center_0;
	// System.Double Niantic.Lightship.Maps.ViewPoint::MapAreaRadiusM
	double ___MapAreaRadiusM_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng>
struct Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase
struct FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_builderName
	String_t* ____builderName_4;
	// System.Int32 Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_minLOD
	int32_t ____minLOD_5;
	// System.Int32 Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_maxLOD
	int32_t ____maxLOD_6;
	// Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_mapLayer
	int32_t ____mapLayer_7;
	// Niantic.Lightship.Maps.Proto.FeatureKind[] Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_features
	FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* ____features_8;
	// UnityEngine.Material[] Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::_materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____materials_9;
	// System.Guid Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_10;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Niantic.Lightship.Maps.Unity.Builders.BaseTypes.ObjectBuilder
struct ObjectBuilder_tAAAB0EE7D4D24C5CF09F72BC9F2FB0DAEB9A5EBD  : public FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC
{
};

// Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText
struct FloatingText_tC06A4948E3854A55715CF53F95F4CD43FBB5E1B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText::_textField
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____textField_4;
};

// Niantic.Lightship.Maps.Unity.Core.LightshipMap
struct LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Niantic.Lightship.Maps.Unity.Core.LightshipMap::_centerMapAtOrigin
	bool ____centerMapAtOrigin_4;
	// System.Single Niantic.Lightship.Maps.Unity.Core.LightshipMap::_maximumMapOffset
	float ____maximumMapOffset_5;
	// System.Single Niantic.Lightship.Maps.Unity.Core.LightshipMap::_maximumMapOffsetSquared
	float ____maximumMapOffsetSquared_6;
	// System.Collections.Generic.List`1<Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_builders
	List_1_tC64D0798BD339C3FC9D07C7C2D170848260A3FC0* ____builders_7;
	// UnityEngine.GameObject Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapTilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____mapTilePrefab_8;
	// Niantic.Lightship.Maps.Unity.Core.LightshipMap/ViewableMapArea Niantic.Lightship.Maps.Unity.Core.LightshipMap::_defaultLocation
	ViewableMapArea_t0DE7838E83D5C6EA927CE6CAB71121FBF072DDDF* ____defaultLocation_9;
	// System.Collections.Generic.List`1<Niantic.Lightship.Maps.Unity.MapLayers.MapLayer> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapLayers
	List_1_tDD3D5E23B3CB43B1802560D170ABEE874A9786A0* ____mapLayers_10;
	// System.Collections.Generic.LinkedList`1<Niantic.Lightship.Maps.IMapTile> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapTilesToProcess
	LinkedList_1_tE3A0836FD99DF40F4445BD4387EFD9AA72FD3156* ____mapTilesToProcess_11;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Niantic.Lightship.Maps.IMapTile> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_activeTiles
	Dictionary_2_t0912DB49E3CD503DBEE2154F82CCD6B562E45889* ____activeTiles_12;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<Niantic.Lightship.Maps.Unity.Core.MapTileObject>> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_activeMapTiles
	Dictionary_2_t9F4EAFF3053CB4BC01C140F5C9676D7813960EEF* ____activeMapTiles_13;
	// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<Niantic.Lightship.Maps.Unity.Core.MapTileObject> Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapTileObjectPool
	ObjectPool_1_tD748296493946FAD4B9FF73A706912D2D47606C9* ____mapTileObjectPool_14;
	// UnityEngine.Transform Niantic.Lightship.Maps.Unity.Core.LightshipMap::_inactiveTilesParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____inactiveTilesParent_15;
	// UnityEngine.Transform Niantic.Lightship.Maps.Unity.Core.LightshipMap::_activeTilesParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____activeTilesParent_16;
	// UnityEngine.Transform Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapLayersParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____mapLayersParent_17;
	// Niantic.Lightship.Maps.Unity.Core.MapUnitConverter Niantic.Lightship.Maps.Unity.Core.LightshipMap::_unitConverter
	MapUnitConverter_tAAFCC18121509C2E232D309AE9EAB4316CB858B1* ____unitConverter_18;
	// Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.Unity.Core.LightshipMap::_currentViewPoint
	ViewPoint_t904F9F739514701B2F80FCE5464AAE1674D7B37C ____currentViewPoint_19;
	// Niantic.Lightship.Maps.ILightshipMapsSystem Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapsSystem
	RuntimeObject* ____mapsSystem_20;
	// Niantic.Lightship.Maps.IMapViewManager Niantic.Lightship.Maps.Unity.Core.LightshipMap::_mapViewManager
	RuntimeObject* ____mapViewManager_21;
	// Niantic.Lightship.Maps.ITileStreamService Niantic.Lightship.Maps.Unity.Core.LightshipMap::_tileStreamService
	RuntimeObject* ____tileStreamService_22;
	// Niantic.Lightship.Maps.Unity.Configuration.MapsAuthConfig Niantic.Lightship.Maps.Unity.Core.LightshipMap::_authConfig
	MapsAuthConfig_t1940C2A1E42D121BFE2A5AC76B0DB01D0365C637* ____authConfig_23;
	// System.String Niantic.Lightship.Maps.Unity.Core.LightshipMap::_lightshipApiKey
	String_t* ____lightshipApiKey_24;
	// System.Action`2<Niantic.Lightship.Maps.IMapTile,Niantic.Lightship.Maps.Unity.Core.MapTileObject> Niantic.Lightship.Maps.Unity.Core.LightshipMap::MapTileAdded
	Action_2_t31AAB64429391B162C22C086F909FC7F5CBEC30C* ___MapTileAdded_26;
	// System.Action`2<Niantic.Lightship.Maps.IMapTile,Niantic.Lightship.Maps.Unity.Core.MapTileObject> Niantic.Lightship.Maps.Unity.Core.LightshipMap::MapTileRemoved
	Action_2_t31AAB64429391B162C22C086F909FC7F5CBEC30C* ___MapTileRemoved_27;
	// System.Action`1<System.Double> Niantic.Lightship.Maps.Unity.Core.LightshipMap::MapRadiusChanged
	Action_1_t981ADB3D546655C41CBF61B0CB6DC0A30B7BB98A* ___MapRadiusChanged_28;
	// System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng> Niantic.Lightship.Maps.Unity.Core.LightshipMap::MapCenterChanged
	Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* ___MapCenterChanged_29;
	// System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng> Niantic.Lightship.Maps.Unity.Core.LightshipMap::MapOriginChanged
	Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* ___MapOriginChanged_30;
};

struct LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA_StaticFields
{
	// Niantic.Lightship.Maps.Logging.ChannelLogger Niantic.Lightship.Maps.Unity.Core.LightshipMap::<Log>k__BackingField
	ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* ___U3CLogU3Ek__BackingField_25;
};

// Niantic.Lightship.Maps.Samples.GameSample.LocateButton
struct LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Niantic.Lightship.Maps.Samples.GameSample.LocateButton::transfer
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___transfer_4;
	// UnityEngine.GameObject Niantic.Lightship.Maps.Samples.GameSample.LocateButton::playerHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerHolder_5;
	// UnityEngine.GameObject Niantic.Lightship.Maps.Samples.GameSample.LocateButton::playerIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerIcon_6;
	// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController Niantic.Lightship.Maps.Samples.GameSample.LocateButton::playerLocationController
	PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* ___playerLocationController_7;
};

// Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner
struct MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405  : public ObjectBuilder_tAAAB0EE7D4D24C5CF09F72BC9F2FB0DAEB9A5EBD
{
	// UnityEngine.GameObject Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab_11;
	// Niantic.Lightship.Maps.Unity.Core.ILightshipMap Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::_lightshipMap
	RuntimeObject* ____lightshipMap_13;
	// Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<UnityEngine.GameObject> Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::_objectPool
	ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D* ____objectPool_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>> Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::_pooledObjects
	Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* ____pooledObjects_15;
};

struct MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_StaticFields
{
	// Niantic.Lightship.Maps.Logging.ChannelLogger Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::<Log>k__BackingField
	ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* ___U3CLogU3Ek__BackingField_12;
};

// Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions
struct MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::_mapCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mapCamera_4;
	// Niantic.Lightship.Maps.Unity.Core.LightshipMap Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::_lightshipMap
	LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* ____lightshipMap_5;
	// UnityEngine.UI.Text Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::transferID
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___transferID_6;
};

// Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature
struct MapGameResourceFeature_tCB190F0D064826B46018A71D3B95D85F713681E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::_maxUnits
	int32_t ____maxUnits_4;
	// System.Int32 Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::_currentUnits
	int32_t ____currentUnits_5;
	// System.Single Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::_resourceIncreaseTime
	float ____resourceIncreaseTime_6;
};

// Niantic.Lightship.Maps.Samples.GameSample.MapGameState
struct MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields
{
	// Niantic.Lightship.Maps.Samples.GameSample.MapGameState Niantic.Lightship.Maps.Samples.GameSample.MapGameState::<Instance>k__BackingField
	MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* ___U3CInstanceU3Ek__BackingField_4;
};

// Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController
struct MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::_mapInteractibles
	MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* ____mapInteractibles_4;
	// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::_player
	PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* ____player_5;
	// UnityEngine.GameObject Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::_errorScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____errorScreen_6;
	// UnityEngine.GameObject Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::_gameOverScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameOverScreen_7;
	// TMPro.TMP_Text Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::_errorText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____errorText_8;
};

// Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController
struct PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Niantic.Lightship.Maps.Unity.Core.LightshipMap Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_lightshipMap
	LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* ____lightshipMap_4;
	// Niantic.Lightship.Maps.Coordinates.LatLng Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_defaultCoordinates
	LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 ____defaultCoordinates_5;
	// System.Single Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_editorMovementSpeed
	float ____editorMovementSpeed_6;
	// UnityEngine.Camera Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_7;
	// System.Double Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_lastGpsUpdateTime
	double ____lastGpsUpdateTime_8;
	// UnityEngine.Vector3 Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_targetMapPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____targetMapPosition_9;
	// UnityEngine.Vector3 Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_currentMapPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____currentMapPosition_10;
	// System.Single Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::_lastMapViewUpdateTime
	float ____lastMapViewUpdateTime_11;
	// System.Action`1<System.String> Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::OnGPSError
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnGPSError_12;
};

// PuzzleDetails
struct PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String PuzzleDetails::puzzleName
	String_t* ___puzzleName_4;
	// System.Int32 PuzzleDetails::puzzleID
	int32_t ___puzzleID_5;
	// System.String PuzzleDetails::puzzleDifficulty
	String_t* ___puzzleDifficulty_6;
	// System.Boolean PuzzleDetails::puzzleClear
	bool ___puzzleClear_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Niantic.Lightship.Maps.Proto.FeatureKind[]
struct FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<System.Object>::.ctor(T,System.Action`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m616B3C1602B037429394F9828C8AF76FDDFCCD94_gshared (ObjectPool_1_t193E1A991BDFBF6126C8A6739856927F41397343* __this, RuntimeObject* ___source0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onCreate1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___onRelease2, const RuntimeMethod* method) ;
// Niantic.Lightship.Maps.Unity.Core.PooledObject`1<T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<System.Object>::GetOrCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B ObjectPool_1_GetOrCreate_m4D56C9DCD2C1597957BC60FB119C1D27A4BE4245_gshared (ObjectPool_1_t193E1A991BDFBF6126C8A6739856927F41397343* __this, const RuntimeMethod* method) ;
// T Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PooledObject_1_get_Value_m66B27FBDD1866A884A08449776FA49D75094D993_gshared (PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC7804127D2DBEA3027875FC68FCBCA8B450771DA_gshared (Dictionary_2_tD08D62143FA52A95294A3371CE3033FC3EBB4704* __this, RuntimeObject* ___key0, PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>>::Remove(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m750A41C44B75351394F3FE50E4B790B39970A7B6_gshared (Dictionary_2_tD08D62143FA52A95294A3371CE3033FC3EBB4704* __this, RuntimeObject* ___key0, PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B* ___value1, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledObject_1_Dispose_mE850F9EB73E42498E921CDD95A432E7C1D658C8E_gshared (PooledObject_1_t7A23B8CB45AFB529474D4C967BDE3486943C810B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m31FF0D27E780501BB67051495EB429AEAC04FB74_gshared (Dictionary_2_tD08D62143FA52A95294A3371CE3033FC3EBB4704* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mB0117F36E2CE897750102138259EE3C0F4E16603_gshared (Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController>()
inline PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* GameObject_GetComponent_TisPlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD_m8C9BF18A1806295DC6BCD933227382937E37AC45 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Niantic.Lightship.Maps.Samples.GameSample.LocateButton::TurnBackOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateButton_TurnBackOn_mD193CD1845FDCC4D8A7A35B72788BD7BD19EED4D (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::LocatePuzzle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_LocatePuzzle_mF5904BF5D4AF4C645C585A8F2B4AC84FA18B9111 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, float ___movelat0, float ___movelong1, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnBackOnU3Ed__7__ctor_m264F3B41600DA6FEBB6A395E2A65E6887D8FFC1A (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::GoBackAfterLocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_GoBackAfterLocate_m720B36DAFC4D5579EF25DBAF380B490FA532AC25 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::Initialize(Niantic.Lightship.Maps.Unity.Core.ILightshipMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeatureBuilderBase_Initialize_m08E6081C95919283511854FE8E9B8475D22E3A35 (FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC* __this, RuntimeObject* ___lightshipMap0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<UnityEngine.GameObject>::.ctor(T,System.Action`1<T>,System.Action`1<T>)
inline void ObjectPool_1__ctor_m3CACBFCF42231C44F989108BAEFA57C79506E7D1 (ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___source0, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onCreate1, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___onRelease2, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, const RuntimeMethod*))ObjectPool_1__ctor_m616B3C1602B037429394F9828C8AF76FDDFCCD94_gshared)(__this, ___source0, ___onCreate1, ___onRelease2, method);
}
// Niantic.Lightship.Maps.Proto.FeatureKind[] Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::get_Features()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* FeatureBuilderBase_get_Features_m75B4F6C71129EDAC667E6B0C6B50973260031D36_inline (FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC* __this, const RuntimeMethod* method) ;
// Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Unity.Builders.BaseTypes.FeatureBuilderBase::get_Layer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FeatureBuilderBase_get_Layer_mA67DA561D39CD69D0D1A6EC04A427FC5A108357A_inline (FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Niantic.Lightship.Maps.Unity.Utilities.MeshBuilderUtils::CalculateCentroid(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshBuilderUtils_CalculateCentroid_mA222043BA93931F4F38B759AA353379B5F9A441D (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices0, const RuntimeMethod* method) ;
// Niantic.Lightship.Maps.Unity.Core.PooledObject`1<T> Niantic.Lightship.Maps.Unity.Core.ObjectPool`1<UnityEngine.GameObject>::GetOrCreate()
inline PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 ObjectPool_1_GetOrCreate_m0E2909D9CFCCFFCAD6029989B65681D1A66D616C (ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D* __this, const RuntimeMethod* method)
{
	return ((  PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 (*) (ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D*, const RuntimeMethod*))ObjectPool_1_GetOrCreate_m4D56C9DCD2C1597957BC60FB119C1D27A4BE4245_gshared)(__this, method);
}
// T Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>::get_Value()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PooledObject_1_get_Value_m052426ED679EB65630176392DA945C2684CFDE48 (PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992*, const RuntimeMethod*))PooledObject_1_get_Value_m66B27FBDD1866A884A08449776FA49D75094D993_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m07513FAAEEF084BFCED6593C8D2AEEDB2271D736 (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992, const RuntimeMethod*))Dictionary_2_Add_mC7804127D2DBEA3027875FC68FCBCA8B450771DA_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>::Remove(TKey,TValue&)
inline bool Dictionary_2_Remove_mEA4A1A06C63BB85A87B91BD810BC7E85346B0CEC (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___key0, PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992*, const RuntimeMethod*))Dictionary_2_Remove_m750A41C44B75351394F3FE50E4B790B39970A7B6_gshared)(__this, ___key0, ___value1, method);
}
// Niantic.Lightship.Maps.Logging.ChannelLogger Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::get_Log()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* MapFeaturePrefabSpawner_get_Log_m400E4ED3448A82566F187CDE4173EDD8121803C2_inline (const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelLogger_Warning_mEB8BAB08423445C41D9580B8A49F1D9FBE7FCB14 (ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>::Dispose()
inline void PooledObject_1_Dispose_mE4314F3A11237479C59B74621EC79739B766913F (PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992* __this, const RuntimeMethod* method)
{
	((  void (*) (PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992*, const RuntimeMethod*))PooledObject_1_Dispose_mE850F9EB73E42498E921CDD95A432E7C1D658C8E_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,Niantic.Lightship.Maps.Unity.Core.PooledObject`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m746DF18B2418FE3C8ECD4B283D0383D4A5248F76 (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7*, const RuntimeMethod*))Dictionary_2__ctor_m31FF0D27E780501BB67051495EB429AEAC04FB74_gshared)(__this, method);
}
// System.Void Niantic.Lightship.Maps.Unity.Builders.BaseTypes.ObjectBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectBuilder__ctor_mC6FE1D5FDED59C366E0586C398BE1200F63DC127 (ObjectBuilder_tAAAB0EE7D4D24C5CF09F72BC9F2FB0DAEB9A5EBD* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::.ctor(System.String,Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelLogger__ctor_m89F766F334AC44CB62241B93FAB75F92EDE9F089 (ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* __this, String_t* ___logChannel0, int32_t ___maxLogLevel1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::CheckForInteractableTouch(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameMapInteractions_CheckForInteractableTouch_m581BBC9F28C2172838DB8C7F30BEF8A5D261AA10 (MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___touchPosition0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// Niantic.Lightship.Maps.Coordinates.LatLng Niantic.Lightship.Maps.Unity.Core.LightshipMap::SceneToLatLng(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 LightshipMap_SceneToLatLng_mEF90261311116638C3A4F8E4727DD8089EDDCE08 (LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scenePosition0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PuzzleDetails>()
inline PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* Component_GetComponent_TisPuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471_mAFA4E0DEDBEE45A6730DDF3930CCBD68D3A1ACF0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameState::set_Instance(Niantic.Lightship.Maps.Samples.GameSample.MapGameState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MapGameState_set_Instance_m8AB7B5492FEB1A657A91935C8329D7450E5E3D42_inline (MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB0117F36E2CE897750102138259EE3C0F4E16603 (Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mB0117F36E2CE897750102138259EE3C0F4E16603_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Niantic.Lightship.Maps.Unity.Core.LightshipMap::add_MapOriginChanged(System.Action`1<Niantic.Lightship.Maps.Coordinates.LatLng>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightshipMap_add_MapOriginChanged_mF12EE5CF09956868DEFB8982F636A23234FC6A1A (LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* __this, Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateGPSLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerLocationController_UpdateGPSLocation_m0EB8F748A695E461BA2E31419C820B1B5FA1F4FC (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Niantic.Lightship.Maps.Unity.Core.LightshipMap::LatLngToScene(Niantic.Lightship.Maps.Coordinates.LatLng&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LightshipMap_LatLngToScene_m2103F317163789E62D12D3E64F97B35F7C6C2279 (LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* __this, LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05* ___location0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdatePlayerLocation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdatePlayerLocation_m259242344F8E240AFC55267D6A313B7FBD0AA824 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, float ___latitude0, float ___longitude1, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateGPSLocationU3Ed__13__ctor_m07FD0FA016F08CC489069849C6EC1678CC05D92D (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Coordinates.LatLng::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3 (LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05* __this, double ___latitude0, double ___longitude1, const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateMapViewPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdateMapViewPosition_mFCCDE5209F524DF46C17FC22B1DCDA8A58F1096D (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Unity.Core.LightshipMap::SetMapCenter(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightshipMap_SetMapCenter_mB9268945126460B56359748F2D84EDC1DB9AC786 (LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateEditorInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdateEditorInput_mDDCEFF64A627BFED4DDE8068339F24FACE863AD1 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Double UnityEngine.LocationInfo::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
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
// System.Void PuzzleDetails::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleDetails_Start_m495922A35B27B08F32EB003C656AE4C3448F4892 (PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* __this, const RuntimeMethod* method) 
{
	{
		// puzzleClear = false;
		__this->___puzzleClear_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PuzzleDetails::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleDetails_Update_mA98401A3669AEA82DCEB9AE1B04D854084ACD27A (PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PuzzleDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PuzzleDetails__ctor_mEC4C07CA14D20F6C7D2CCAE22CBDC25DCFB5C084 (PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateButton_Start_m0A51C381A4E32CFD1BFF40F4385870D518382A88 (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD_m8C9BF18A1806295DC6BCD933227382937E37AC45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerLocationController = playerHolder.GetComponent<PlayerLocationController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerHolder_5;
		NullCheck(L_0);
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_1;
		L_1 = GameObject_GetComponent_TisPlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD_m8C9BF18A1806295DC6BCD933227382937E37AC45(L_0, GameObject_GetComponent_TisPlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD_m8C9BF18A1806295DC6BCD933227382937E37AC45_RuntimeMethod_var);
		__this->___playerLocationController_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerLocationController_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateButton_Update_m5C95109CB7AF60C239DB102ED5BEE4ED546BCF2A (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton::onLocatePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateButton_onLocatePressed_m3DFEE5FBB782F6467CC417950CBDFAE246F6278B (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9A078FD2E7224FB2F4C3CCEB5986790DF064D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerIcon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerIcon_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// StartCoroutine(TurnBackOn());
		RuntimeObject* L_1;
		L_1 = LocateButton_TurnBackOn_mD193CD1845FDCC4D8A7A35B72788BD7BD19EED4D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// if (Convert.ToInt32(transfer.text) == 0)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___transfer_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_4, NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		// Debug.Log("0");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		// playerLocationController.LocatePuzzle(37.79639f, -122.39814f); //cloud
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_6 = __this->___playerLocationController_7;
		NullCheck(L_6);
		PlayerLocationController_LocatePuzzle_mF5904BF5D4AF4C645C585A8F2B4AC84FA18B9111(L_6, (37.7963905f), (-122.39814f), NULL);
		return;
	}

IL_004b:
	{
		// else if (Convert.ToInt32(transfer.text) == 1)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___transfer_4;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		// Debug.Log("1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		// playerLocationController.LocatePuzzle(37.800644999999996f, -122.398381f); //explore
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_10 = __this->___playerLocationController_7;
		NullCheck(L_10);
		PlayerLocationController_LocatePuzzle_mF5904BF5D4AF4C645C585A8F2B4AC84FA18B9111(L_10, (37.8006439f), (-122.398384f), NULL);
		return;
	}

IL_007e:
	{
		// else if (Convert.ToInt32(transfer.text) == 2)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___transfer_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Convert_ToInt32_m0C3F3778B1D646778F41B6912138AEEEE6BEB9D4(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00b1;
		}
	}
	{
		// Debug.Log("2");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, NULL);
		// playerLocationController.LocatePuzzle(37.797607f, -122.39887f); //fountain
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_14 = __this->___playerLocationController_7;
		NullCheck(L_14);
		PlayerLocationController_LocatePuzzle_mF5904BF5D4AF4C645C585A8F2B4AC84FA18B9111(L_14, (37.7976074f), (-122.398872f), NULL);
		return;
	}

IL_00b1:
	{
		// Debug.Log("nothing selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDD9A078FD2E7224FB2F4C3CCEB5986790DF064D8, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.Lightship.Maps.Samples.GameSample.LocateButton::TurnBackOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocateButton_TurnBackOn_mD193CD1845FDCC4D8A7A35B72788BD7BD19EED4D (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* L_0 = (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23*)il2cpp_codegen_object_new(U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTurnBackOnU3Ed__7__ctor_m264F3B41600DA6FEBB6A395E2A65E6887D8FFC1A(L_0, 0, NULL);
		U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocateButton__ctor_m459BEDACC92961E6943972082351D4CF410AAF5A (LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnBackOnU3Ed__7__ctor_m264F3B41600DA6FEBB6A395E2A65E6887D8FFC1A (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnBackOnU3Ed__7_System_IDisposable_Dispose_mF7C6476AAFFB4C59A6052F568CF86E7CE01040B0 (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTurnBackOnU3Ed__7_MoveNext_m8E34EE3DEF52E95346467A6BDE0581A171BB9F9C (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerIcon.SetActive(true);
		LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___playerIcon_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// playerLocationController.GoBackAfterLocate();
		LocateButton_t87346C188A9BB06F4494695869F730BB0711AC50* L_7 = V_1;
		NullCheck(L_7);
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_8 = L_7->___playerLocationController_7;
		NullCheck(L_8);
		PlayerLocationController_GoBackAfterLocate_m720B36DAFC4D5579EF25DBAF380B490FA532AC25(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnBackOnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB285450509083D2932C2B74CBBA6583DE2171BF5 (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnBackOnU3Ed__7_System_Collections_IEnumerator_Reset_mB5A41DDCBA34748015E2B71161A483E11B12CFA3 (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTurnBackOnU3Ed__7_System_Collections_IEnumerator_Reset_mB5A41DDCBA34748015E2B71161A483E11B12CFA3_RuntimeMethod_var)));
	}
}
// System.Object Niantic.Lightship.Maps.Samples.GameSample.LocateButton/<TurnBackOn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnBackOnU3Ed__7_System_Collections_IEnumerator_get_Current_m246B9D0C43CC5D6AF1086BBACF2F78E22C1C798D (U3CTurnBackOnU3Ed__7_tF21043C9B16237D28C03BB0B36C922608916BB23* __this, const RuntimeMethod* method) 
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
// Niantic.Lightship.Maps.Logging.ChannelLogger Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::get_Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* MapFeaturePrefabSpawner_get_Log_m400E4ED3448A82566F187CDE4173EDD8121803C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ChannelLogger Log { get; } = new ChannelLogger(nameof(MapFeaturePrefabSpawner));
		il2cpp_codegen_runtime_class_init_inline(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* L_0 = ((MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_StaticFields*)il2cpp_codegen_static_fields_for(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var))->___U3CLogU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::Initialize(Niantic.Lightship.Maps.Unity.Core.ILightshipMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFeaturePrefabSpawner_Initialize_m94C07C686CCB5776368C87DB148B44F813F67F4E (MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405* __this, RuntimeObject* ___lightshipMap0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3CACBFCF42231C44F989108BAEFA57C79506E7D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize(lightshipMap);
		RuntimeObject* L_0 = ___lightshipMap0;
		FeatureBuilderBase_Initialize_m08E6081C95919283511854FE8E9B8475D22E3A35(__this, L_0, NULL);
		// _lightshipMap = lightshipMap;
		RuntimeObject* L_1 = ___lightshipMap0;
		__this->____lightshipMap_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lightshipMap_13), (void*)L_1);
		// _objectPool = new ObjectPool<GameObject>(_prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____prefab_11;
		ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D* L_3 = (ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D*)il2cpp_codegen_object_new(ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ObjectPool_1__ctor_m3CACBFCF42231C44F989108BAEFA57C79506E7D1(L_3, L_2, (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL, (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)NULL, ObjectPool_1__ctor_m3CACBFCF42231C44F989108BAEFA57C79506E7D1_RuntimeMethod_var);
		__this->____objectPool_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectPool_14), (void*)L_3);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::Build(Niantic.Lightship.Maps.IMapTile,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFeaturePrefabSpawner_Build_m6F92C52081F5AD63D433C8E0BF9DCF4D78016A42 (MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405* __this, RuntimeObject* ___mapTile0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m07513FAAEEF084BFCED6593C8D2AEEDB2271D736_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAreaFeature_tB8D9690EB342EC4818EB040C1888AA60D9B8FBB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2103B11E7291A2184483D261AA0D8743D2122C82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA07F0E2B6566E6A3CE903DDF235807899A9048EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILightshipMap_t206B4E60112B63B6DF6CE54CE246DE45E0309729_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMapTile_t268EAD8286E900EE3CF96F98DF758D94592A637E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_GetOrCreate_m0E2909D9CFCCFFCAD6029989B65681D1A66D616C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PooledObject_1_get_Value_m052426ED679EB65630176392DA945C2684CFDE48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	double V_8 = 0.0;
	{
		// foreach (var featureKind in Features)
		FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* L_0;
		L_0 = FeatureBuilderBase_get_Features_m75B4F6C71129EDAC667E6B0C6B50973260031D36_inline(__this, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_00fd;
	}

IL_000e:
	{
		// foreach (var featureKind in Features)
		FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// var features = mapTile.GetTileData(Layer, featureKind);
		RuntimeObject* L_5 = ___mapTile0;
		int32_t L_6;
		L_6 = FeatureBuilderBase_get_Layer_mA67DA561D39CD69D0D1A6EC04A427FC5A108357A_inline(__this, NULL);
		int32_t L_7 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(8 /* System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.IMapTile::GetTileData(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind) */, IMapTile_t268EAD8286E900EE3CF96F98DF758D94592A637E_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		// foreach (var feature in features)
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Niantic.Lightship.Maps.Features.IMapTileFeature>::GetEnumerator() */, IEnumerable_1_t2103B11E7291A2184483D261AA0D8743D2122C82_il2cpp_TypeInfo_var, L_8);
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ef:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_00f8;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_00f8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e2_1;
			}

IL_002a_1:
			{
				// foreach (var feature in features)
				RuntimeObject* L_12 = V_3;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Niantic.Lightship.Maps.Features.IMapTileFeature>::get_Current() */, IEnumerator_1_tA07F0E2B6566E6A3CE903DDF235807899A9048EA_il2cpp_TypeInfo_var, L_12);
				// if (feature is IAreaFeature areaFeature)
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IAreaFeature_tB8D9690EB342EC4818EB040C1888AA60D9B8FBB8_il2cpp_TypeInfo_var));
				RuntimeObject* L_14 = V_4;
				if (!L_14)
				{
					goto IL_00e2_1;
				}
			}
			{
				// var centroid = MeshBuilderUtils.CalculateCentroid(areaFeature.Points);
				RuntimeObject* L_15 = V_4;
				NullCheck(L_15);
				Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16;
				L_16 = InterfaceFuncInvoker0< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(0 /* UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.IAreaFeature::get_Points() */, IAreaFeature_tB8D9690EB342EC4818EB040C1888AA60D9B8FBB8_il2cpp_TypeInfo_var, L_15);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = MeshBuilderUtils_CalculateCentroid_mA222043BA93931F4F38B759AA353379B5F9A441D(L_16, NULL);
				V_5 = L_17;
				// var pooledObject = _objectPool.GetOrCreate();
				ObjectPool_1_t174FF6C30E89930F23C51B3CED26BE1EF500532D* L_18 = __this->____objectPool_14;
				NullCheck(L_18);
				PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 L_19;
				L_19 = ObjectPool_1_GetOrCreate_m0E2909D9CFCCFFCAD6029989B65681D1A66D616C(L_18, ObjectPool_1_GetOrCreate_m0E2909D9CFCCFFCAD6029989B65681D1A66D616C_RuntimeMethod_var);
				V_6 = L_19;
				// var featureInstance = pooledObject.Value;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = PooledObject_1_get_Value_m052426ED679EB65630176392DA945C2684CFDE48((&V_6), PooledObject_1_get_Value_m052426ED679EB65630176392DA945C2684CFDE48_RuntimeMethod_var);
				V_7 = L_20;
				// _pooledObjects.Add(featureInstance, pooledObject);
				Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* L_21 = __this->____pooledObjects_15;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_7;
				PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 L_23 = V_6;
				NullCheck(L_21);
				Dictionary_2_Add_m07513FAAEEF084BFCED6593C8D2AEEDB2271D736(L_21, L_22, L_23, Dictionary_2_Add_m07513FAAEEF084BFCED6593C8D2AEEDB2271D736_RuntimeMethod_var);
				// featureInstance.hideFlags &= ~HideFlags.HideInHierarchy;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_7;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_25, NULL);
				NullCheck(L_25);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_25, ((int32_t)((int32_t)L_26&((int32_t)-2))), NULL);
				// featureInstance.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_7;
				NullCheck(L_27);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
				// var tileScale = 1.0f / (_lightshipMap.MapScale * mapTile.Size);
				RuntimeObject* L_28 = __this->____lightshipMap_13;
				NullCheck(L_28);
				double L_29;
				L_29 = InterfaceFuncInvoker0< double >::Invoke(13 /* System.Double Niantic.Lightship.Maps.Unity.Core.ILightshipMap::get_MapScale() */, ILightshipMap_t206B4E60112B63B6DF6CE54CE246DE45E0309729_il2cpp_TypeInfo_var, L_28);
				RuntimeObject* L_30 = ___mapTile0;
				NullCheck(L_30);
				float L_31;
				L_31 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single Niantic.Lightship.Maps.IMapTile::get_Size() */, IMapTile_t268EAD8286E900EE3CF96F98DF758D94592A637E_il2cpp_TypeInfo_var, L_30);
				V_8 = ((double)((1.0)/((double)il2cpp_codegen_multiply(L_29, ((double)L_31)))));
				// featureInstance.transform.SetParent(parent.transform, false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_7;
				NullCheck(L_32);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
				L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = ___parent1;
				NullCheck(L_34);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
				L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
				NullCheck(L_33);
				Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_33, L_35, (bool)0, NULL);
				// featureInstance.transform.localPosition = centroid;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_7;
				NullCheck(L_36);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
				L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
				NullCheck(L_37);
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_38, NULL);
				// featureInstance.transform.localScale = (float)tileScale * Vector3.one;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_7;
				NullCheck(L_39);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
				L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
				double L_41 = V_8;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
				L_42 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
				L_43 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)L_41), L_42, NULL);
				NullCheck(L_40);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_40, L_43, NULL);
			}

IL_00e2_1:
			{
				// foreach (var feature in features)
				RuntimeObject* L_44 = V_3;
				NullCheck(L_44);
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_00f9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f9:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00fd:
	{
		// foreach (var featureKind in Features)
		int32_t L_47 = V_1;
		FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* L_48 = V_0;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::Release(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFeaturePrefabSpawner_Release_mB1476E331F74A8BF2295C954F19ED95AD3B93ABA (MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mEA4A1A06C63BB85A87B91BD810BC7E85346B0CEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PooledObject_1_Dispose_mE4314F3A11237479C59B74621EC79739B766913F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07D7F89F38965983D4843CA623F7545E7C2DAB46);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	PooledObject_1_tA5D5CF93C30465E5D07A4F0D0DF605936C14A992 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0071;
	}

IL_0002:
	{
		// var child = parent.transform.GetChild(0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___parent0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		// var childGameObject = child.gameObject;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		V_0 = L_3;
		// if (!_pooledObjects.Remove(childGameObject, out var pooledObject))
		Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* L_4 = __this->____pooledObjects_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_mEA4A1A06C63BB85A87B91BD810BC7E85346B0CEC(L_4, L_5, (&V_1), Dictionary_2_Remove_mEA4A1A06C63BB85A87B91BD810BC7E85346B0CEC_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		// Log.Warning("Couldn't find a pooled object to release!");
		il2cpp_codegen_runtime_class_init_inline(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* L_7;
		L_7 = MapFeaturePrefabSpawner_get_Log_m400E4ED3448A82566F187CDE4173EDD8121803C2_inline(NULL);
		NullCheck(L_7);
		ChannelLogger_Warning_mEB8BAB08423445C41D9580B8A49F1D9FBE7FCB14(L_7, _stringLiteral07D7F89F38965983D4843CA623F7545E7C2DAB46, NULL);
		// childGameObject.transform.SetParent(null, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0, NULL);
		// Destroy(childGameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// continue;
		goto IL_0071;
	}

IL_0048:
	{
		// childGameObject.transform.SetParent(null, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)0, NULL);
		// childGameObject.hideFlags |= HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_14, NULL);
		NullCheck(L_14);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_14, ((int32_t)((int32_t)L_15|1)), NULL);
		// childGameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// pooledObject.Dispose();
		PooledObject_1_Dispose_mE4314F3A11237479C59B74621EC79739B766913F((&V_1), PooledObject_1_Dispose_mE4314F3A11237479C59B74621EC79739B766913F_RuntimeMethod_var);
	}

IL_0071:
	{
		// while (parent.transform.childCount > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___parent0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_18, NULL);
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFeaturePrefabSpawner__ctor_mBD37EAFDCAEFB3833C356D8F14BA32F8148628CF (MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m746DF18B2418FE3C8ECD4B283D0383D4A5248F76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly PooledObjectDictionary _pooledObjects = new PooledObjectDictionary();
		Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7* L_0 = (Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7*)il2cpp_codegen_object_new(Dictionary_2_t3C0919F7220F9E92665B024DFC31DE0964DE40E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m746DF18B2418FE3C8ECD4B283D0383D4A5248F76(L_0, Dictionary_2__ctor_m746DF18B2418FE3C8ECD4B283D0383D4A5248F76_RuntimeMethod_var);
		__this->____pooledObjects_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pooledObjects_15), (void*)L_0);
		ObjectBuilder__ctor_mC6FE1D5FDED59C366E0586C398BE1200F63DC127(__this, NULL);
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapFeaturePrefabSpawner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapFeaturePrefabSpawner__cctor_m809306A5DC08B8261DD55DCC184630F55616461E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4362021CD55BD6C6A04DBF5CA1C2E357F274EEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ChannelLogger Log { get; } = new ChannelLogger(nameof(MapFeaturePrefabSpawner));
		ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* L_0 = (ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88*)il2cpp_codegen_object_new(ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ChannelLogger__ctor_m89F766F334AC44CB62241B93FAB75F92EDE9F089(L_0, _stringLiteralC4362021CD55BD6C6A04DBF5CA1C2E357F274EEA, 4, NULL);
		((MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_StaticFields*)il2cpp_codegen_static_fields_for(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var))->___U3CLogU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_StaticFields*)il2cpp_codegen_static_fields_for(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var))->___U3CLogU3Ek__BackingField_12), (void*)L_0);
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameMapInteractions_Update_m86190604A3D0748F000812CE57978D8761B8208E (MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var touchPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// bool touchDetected = false;
		V_1 = (bool)0;
		// if (Input.touchCount == 1)
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_003b;
		}
	}
	{
		// if (Input.touches[0].phase == TouchPhase.Ended)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_2;
		L_2 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_003b;
		}
	}
	{
		// touchPosition = Input.touches[0].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_4;
		L_4 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		V_0 = L_6;
		// touchDetected = true;
		V_1 = (bool)1;
	}

IL_003b:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_7;
		L_7 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// touchPosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		V_0 = L_8;
		// touchDetected = true;
		V_1 = (bool)1;
	}

IL_004b:
	{
		// if (touchDetected)
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// CheckForInteractableTouch(touchPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		MapGameMapInteractions_CheckForInteractableTouch_m581BBC9F28C2172838DB8C7F30BEF8A5D261AA10(__this, L_10, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// Niantic.Lightship.Maps.Coordinates.LatLng Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::ScreenPointToLatLong(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 MapGameMapInteractions_ScreenPointToLatLong_m2308696D2079D39A3566C499719C5383FEACE510 (MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPosition0, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var clickRay = _mapCamera.ScreenPointToRay(screenPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____mapCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___screenPosition0;
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		V_0 = L_2;
		// var pointOnMap = clickRay.origin + clickRay.direction * (-clickRay.origin.y / clickRay.direction.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, ((float)(((-L_6))/L_8)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_9, NULL);
		V_1 = L_10;
		// return _lightshipMap.SceneToLatLng(pointOnMap);
		LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* L_11 = __this->____lightshipMap_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		NullCheck(L_11);
		LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 L_13;
		L_13 = LightshipMap_SceneToLatLng_mEF90261311116638C3A4F8E4727DD8089EDDCE08(L_11, L_12, NULL);
		return L_13;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::CheckForInteractableTouch(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameMapInteractions_CheckForInteractableTouch_m581BBC9F28C2172838DB8C7F30BEF8A5D261AA10 (MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___touchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471_mAFA4E0DEDBEE45A6730DDF3930CCBD68D3A1ACF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* V_1 = NULL;
	{
		// var touchRay = _mapCamera.ScreenPointToRay(touchPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____mapCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___touchPosition0;
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (!Physics.Raycast(touchRay, out var hitInfo))
		bool L_3;
		L_3 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// var hitResourceItem = hitInfo.collider.GetComponent<PuzzleDetails>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_4);
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_5;
		L_5 = Component_GetComponent_TisPuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471_mAFA4E0DEDBEE45A6730DDF3930CCBD68D3A1ACF0(L_4, Component_GetComponent_TisPuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471_mAFA4E0DEDBEE45A6730DDF3930CCBD68D3A1ACF0_RuntimeMethod_var);
		V_1 = L_5;
		// if (hitResourceItem == null)
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		return;
	}

IL_002d:
	{
		// Debug.Log(hitResourceItem.puzzleName);
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = L_8->___puzzleName_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// Debug.Log(hitResourceItem.puzzleDifficulty);
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->___puzzleDifficulty_6;
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// Debug.Log(hitResourceItem.puzzleClear);
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = L_12->___puzzleClear_7;
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// transferID.text = hitResourceItem.puzzleID.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___transferID_6;
		PuzzleDetails_t63245A8552ADD5D224A007C461AB03D94754B471* L_17 = V_1;
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___puzzleID_5);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// Debug.Log(transferID.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___transferID_6;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_20);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_21, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameMapInteractions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameMapInteractions__ctor_m9F3165DC711701DB4AA94B091C553396BC498A7A (MapGameMapInteractions_tA90183F5CFE75E1E7DF1391E1315383A89619E60* __this, const RuntimeMethod* method) 
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
// System.Boolean Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::get_ResourcesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapGameResourceFeature_get_ResourcesAvailable_m8AB83E7C3E302FE181BF095002FE24C770D4AD2E (MapGameResourceFeature_tCB190F0D064826B46018A71D3B95D85F713681E3* __this, const RuntimeMethod* method) 
{
	{
		// public bool ResourcesAvailable => _currentUnits > 0;
		int32_t L_0 = __this->____currentUnits_5;
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameResourceFeature_Update_mD719F72992DEB76847381B43D47A2E1EF1919B39 (MapGameResourceFeature_tCB190F0D064826B46018A71D3B95D85F713681E3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameResourceFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameResourceFeature__ctor_mC9635A5F51F83B4395D07866F83388616072D608 (MapGameResourceFeature_tCB190F0D064826B46018A71D3B95D85F713681E3* __this, const RuntimeMethod* method) 
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
// Niantic.Lightship.Maps.Samples.GameSample.MapGameState Niantic.Lightship.Maps.Samples.GameSample.MapGameState::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* MapGameState_get_Instance_m6CA07DF74FC4A187D2296B111E24CDDDEA80E3F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MapGameState Instance { get; private set; }
		MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* L_0 = ((MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields*)il2cpp_codegen_static_fields_for(MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameState::set_Instance(Niantic.Lightship.Maps.Samples.GameSample.MapGameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameState_set_Instance_m8AB7B5492FEB1A657A91935C8329D7450E5E3D42 (MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MapGameState Instance { get; private set; }
		MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* L_0 = ___value0;
		((MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields*)il2cpp_codegen_static_fields_for(MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields*)il2cpp_codegen_static_fields_for(MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameState::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameState_Awake_m0875B5E58406EDD473B329F98744DC45E8E1FB4F (MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* __this, const RuntimeMethod* method) 
{
	{
		// Instance = this;
		MapGameState_set_Instance_m8AB7B5492FEB1A657A91935C8329D7450E5E3D42_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameState__ctor_mBDCB17048134B4F53F57F6679314BC33595E9187 (MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameUIController_Start_m7218D4DF1C037ADAE5C92FED6991D979CD0C0A6E (MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameOverScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____gameOverScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// _player.OnGPSError += OnGpsError;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_1 = __this->____player_5;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_2 = L_1;
		NullCheck(L_2);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = L_2->___OnGPSError_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_4, __this, (intptr_t)((void*)MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___OnGPSError_12 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_5, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnGPSError_12), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_5, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::OnGpsError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9 (MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E* __this, String_t* ___errorMessage0, const RuntimeMethod* method) 
{
	{
		// _errorText.text = errorMessage;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____errorText_8;
		String_t* L_1 = ___errorMessage0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// _errorScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____errorScreen_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameUIController_OnDestroy_mE531E3F7C5287F4F3F2699C1385C88E40D554952 (MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_player != null)
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_0 = __this->____player_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// _player.OnGPSError -= OnGpsError;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_2 = __this->____player_5;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_3 = L_2;
		NullCheck(L_3);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = L_3->___OnGPSError_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_5, __this, (intptr_t)((void*)MapGameUIController_OnGpsError_mBFF1FDB41F2665B42DFDA02F06B3A57825F706A9_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___OnGPSError_12 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_6, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___OnGPSError_12), (void*)((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_6, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)));
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::OnGameOverContinuePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameUIController_OnGameOverContinuePressed_m71EEB46722471BED294BE0170D2DC6741183FEA8 (MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E* __this, const RuntimeMethod* method) 
{
	{
		// _gameOverScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____gameOverScreen_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.MapGameUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapGameUIController__ctor_m3DFF093D2DF5983701522E5132FEBCFA2B51444E (MapGameUIController_t2BB64D90ADE5A46D77F97A70D33D52E020D5687E* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_Start_m7F56AD4BA986D07E718F232681DBAA2C8ABC62A9 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLocationController_OnMapOriginChanged_m2E9CB3CCB2654038056100487CC57639A967F299_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _lightshipMap.MapOriginChanged += OnMapOriginChanged;
		LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* L_0 = __this->____lightshipMap_4;
		Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39* L_1 = (Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39*)il2cpp_codegen_object_new(Action_1_tCB3679DBEE5FCA8489F4A353B381652A3A236A39_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mB0117F36E2CE897750102138259EE3C0F4E16603(L_1, __this, (intptr_t)((void*)PlayerLocationController_OnMapOriginChanged_m2E9CB3CCB2654038056100487CC57639A967F299_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LightshipMap_add_MapOriginChanged_mF12EE5CF09956868DEFB8982F636A23234FC6A1A(L_0, L_1, NULL);
		// _currentMapPosition = _targetMapPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3;
		V_0 = L_4;
		__this->____targetMapPosition_9 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		__this->____currentMapPosition_10 = L_5;
		// StartCoroutine(UpdateGPSLocation());
		RuntimeObject* L_6;
		L_6 = PlayerLocationController_UpdateGPSLocation_m0EB8F748A695E461BA2E31419C820B1B5FA1F4FC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::OnMapOriginChanged(Niantic.Lightship.Maps.Coordinates.LatLng)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_OnMapOriginChanged_m2E9CB3CCB2654038056100487CC57639A967F299 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 ___center0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var offset = _targetMapPosition - _currentMapPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____targetMapPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____currentMapPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// _currentMapPosition = _lightshipMap.LatLngToScene(center);
		LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* L_3 = __this->____lightshipMap_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = LightshipMap_LatLngToScene_m2103F317163789E62D12D3E64F97B35F7C6C2279(L_3, (&___center0), NULL);
		__this->____currentMapPosition_10 = L_4;
		// _targetMapPosition = _currentMapPosition + offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____currentMapPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		__this->____targetMapPosition_9 = L_7;
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::LocatePuzzle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_LocatePuzzle_mF5904BF5D4AF4C645C585A8F2B4AC84FA18B9111 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, float ___movelat0, float ___movelong1, const RuntimeMethod* method) 
{
	{
		// UpdatePlayerLocation(movelat, movelong);
		float L_0 = ___movelat0;
		float L_1 = ___movelong1;
		PlayerLocationController_UpdatePlayerLocation_m259242344F8E240AFC55267D6A313B7FBD0AA824(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::GoBackAfterLocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_GoBackAfterLocate_m720B36DAFC4D5579EF25DBAF380B490FA532AC25 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateGPSLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerLocationController_UpdateGPSLocation_m0EB8F748A695E461BA2E31419C820B1B5FA1F4FC (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* L_0 = (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447*)il2cpp_codegen_object_new(U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateGPSLocationU3Ed__13__ctor_m07FD0FA016F08CC489069849C6EC1678CC05D92D(L_0, 0, NULL);
		U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdatePlayerLocation(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdatePlayerLocation_m259242344F8E240AFC55267D6A313B7FBD0AA824 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, float ___latitude0, float ___longitude1, const RuntimeMethod* method) 
{
	LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _targetMapPosition = _lightshipMap.LatLngToScene(new LatLng(latitude, longitude));
		LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* L_0 = __this->____lightshipMap_4;
		float L_1 = ___latitude0;
		float L_2 = ___longitude1;
		LatLng_t55BF3D5192350D0A2DACDA35E20AB0A2066F4D05 L_3;
		memset((&L_3), 0, sizeof(L_3));
		LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3((&L_3), ((double)L_1), ((double)L_2), /*hidden argument*/NULL);
		V_0 = L_3;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = LightshipMap_LatLngToScene_m2103F317163789E62D12D3E64F97B35F7C6C2279(L_0, (&V_0), NULL);
		__this->____targetMapPosition_9 = L_4;
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_Update_mD6E0DA1347814E3361AE00F2770D3A9855598BC7 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		// UpdateMapViewPosition();
		PlayerLocationController_UpdateMapViewPosition_mFCCDE5209F524DF46C17FC22B1DCDA8A58F1096D(__this, NULL);
		// float movementDistance = (_currentMapPosition - _targetMapPosition).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->____currentMapPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____targetMapPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		// if (movementDistance > 200.0f)
		float L_4 = L_3;
		G_B1_0 = L_4;
		if ((!(((float)L_4) > ((float)(200.0f)))))
		{
			G_B2_0 = L_4;
			goto IL_0033;
		}
	}
	{
		// _currentMapPosition = _targetMapPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->____targetMapPosition_9;
		__this->____currentMapPosition_10 = L_5;
		G_B2_0 = G_B1_0;
	}

IL_0033:
	{
		// if (movementDistance > 0.1f)
		if ((!(((float)G_B2_0) > ((float)(0.100000001f)))))
		{
			goto IL_006a;
		}
	}
	{
		// var forward = (_targetMapPosition - _currentMapPosition).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____targetMapPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->____currentMapPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		// var rotation = Quaternion.LookRotation(forward, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_9, L_10, NULL);
		V_1 = L_11;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = V_1;
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_13, NULL);
	}

IL_006a:
	{
		// _currentMapPosition = Vector3.Lerp(_currentMapPosition, _targetMapPosition, Time.deltaTime / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->____currentMapPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->____targetMapPosition_9;
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_14, L_15, ((float)(L_16/(2.0f))), NULL);
		__this->____currentMapPosition_10 = L_17;
		// transform.position = _currentMapPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->____currentMapPosition_10;
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_19, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateEditorInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdateEditorInput_mDDCEFF64A627BFED4DDE8068339F24FACE863AD1 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var movementVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// movementVector += Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_5;
		L_5 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// movementVector -= Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		V_0 = L_8;
	}

IL_0030:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_9;
		L_9 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		// movementVector += Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		V_0 = L_12;
	}

IL_0045:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_13;
		L_13 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// movementVector += Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_15, NULL);
		V_0 = L_16;
	}

IL_005a:
	{
		// var cameraForward = _camera.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->____camera_7;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		V_1 = L_19;
		// float yRotation = Vector3.SignedAngle(Vector3.forward, cameraForward, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_23;
		L_23 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_20, L_21, L_22, NULL);
		// movementVector = Quaternion.AngleAxis(yRotation, Vector3.up) * movementVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_25, L_26, NULL);
		V_0 = L_27;
		// _targetMapPosition += movementVector * _editorMovementSpeed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->____targetMapPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = __this->____editorMovementSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_33, NULL);
		__this->____targetMapPosition_9 = L_34;
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::UpdateMapViewPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController_UpdateMapViewPosition_mFCCDE5209F524DF46C17FC22B1DCDA8A58F1096D (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
{
	{
		// if (Time.time < _lastMapViewUpdateTime + 1.0f)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->____lastMapViewUpdateTime_11;
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_add(L_1, (1.0f)))))))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// _lastMapViewUpdateTime = Time.time;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____lastMapViewUpdateTime_11 = L_2;
		// _lightshipMap.SetMapCenter(transform.position);
		LightshipMap_t9C29B6159DC89EC7C528E18A56C2AFCA181AA3DA* L_3 = __this->____lightshipMap_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		LightshipMap_SetMapCenter_mB9268945126460B56359748F2D84EDC1DB9AC786(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLocationController__ctor_m4D2371A8252F3C26C939A207B8AF32C740CFA469 (PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateGPSLocationU3Ed__13__ctor_m07FD0FA016F08CC489069849C6EC1678CC05D92D (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateGPSLocationU3Ed__13_System_IDisposable_Dispose_m45626EEF1662FF30FE50D433B80EF9A37A9E7713 (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateGPSLocationU3Ed__13_MoveNext_m73B22AAD68875025433D502355FED5C63E3972E0 (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB97E89F70AA8EE2925A55DBD40F3D3378CAF85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD04A7461F22E7D927B31DB84DEB8034A56F012D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* V_1 = NULL;
	int32_t V_2 = 0;
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B12_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B11_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B22_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B21_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B27_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B26_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_0067;
			}
			case 3:
			{
				goto IL_00cc;
			}
			case 4:
			{
				goto IL_018a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0041:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Application.isEditor)
		bool L_3;
		L_3 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_3)
		{
			goto IL_007b;
		}
	}
	{
		goto IL_006e;
	}

IL_0051:
	{
		// UpdateEditorInput();
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_4 = V_1;
		NullCheck(L_4);
		PlayerLocationController_UpdateEditorInput_mDDCEFF64A627BFED4DDE8068339F24FACE863AD1(L_4, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0067:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006e:
	{
		// while (isActiveAndEnabled)
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_5, NULL);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		goto IL_01a3;
	}

IL_007b:
	{
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_7;
		L_7 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_7, NULL);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		// OnGPSError?.Invoke("Location permission not enabled");
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_9 = V_1;
		NullCheck(L_9);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = L_9->___OnGPSError_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_11 = L_10;
		G_B11_0 = L_11;
		if (L_11)
		{
			G_B12_0 = L_11;
			goto IL_0093;
		}
	}
	{
		goto IL_009d;
	}

IL_0093:
	{
		NullCheck(G_B12_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B12_0, _stringLiteralD04A7461F22E7D927B31DB84DEB8034A56F012D0, NULL);
	}

IL_009d:
	{
		// yield break;
		return (bool)0;
	}

IL_009f:
	{
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_12);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_12, NULL);
		// int maxWait = 20;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)20);
		goto IL_00e3;
	}

IL_00b3:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// maxWait--;
		int32_t L_14 = __this->___U3CmaxWaitU3E5__2_3;
		V_2 = L_14;
		int32_t L_15 = V_2;
		__this->___U3CmaxWaitU3E5__2_3 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
	}

IL_00e3:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_16;
		L_16 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00f9;
		}
	}
	{
		int32_t L_18 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}

IL_00f9:
	{
		// if (maxWait < 1)
		int32_t L_19 = __this->___U3CmaxWaitU3E5__2_3;
		if ((((int32_t)L_19) >= ((int32_t)1)))
		{
			goto IL_011a;
		}
	}
	{
		// OnGPSError?.Invoke("GPS initialisation timed out");
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_20 = V_1;
		NullCheck(L_20);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_21 = L_20->___OnGPSError_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_22 = L_21;
		G_B21_0 = L_22;
		if (L_22)
		{
			G_B22_0 = L_22;
			goto IL_010e;
		}
	}
	{
		goto IL_0118;
	}

IL_010e:
	{
		NullCheck(G_B22_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B22_0, _stringLiteral0CB97E89F70AA8EE2925A55DBD40F3D3378CAF85, NULL);
	}

IL_0118:
	{
		// yield break;
		return (bool)0;
	}

IL_011a:
	{
		// if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_23;
		L_23 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_23, NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_0191;
		}
	}
	{
		// OnGPSError?.Invoke("Unable to determine device location");
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_25 = V_1;
		NullCheck(L_25);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_26 = L_25->___OnGPSError_12;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_27 = L_26;
		G_B26_0 = L_27;
		if (L_27)
		{
			G_B27_0 = L_27;
			goto IL_0133;
		}
	}
	{
		goto IL_013d;
	}

IL_0133:
	{
		NullCheck(G_B27_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B27_0, _stringLiteralE2EE8E73413D8C0EC384803067E74CF1A2A1AAFB, NULL);
	}

IL_013d:
	{
		// yield break;
		return (bool)0;
	}

IL_013f:
	{
		// var gpsInfo = Input.location.lastData;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_28;
		L_28 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_28);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_29;
		L_29 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_28, NULL);
		V_3 = L_29;
		// if (gpsInfo.timestamp > _lastGpsUpdateTime)
		double L_30;
		L_30 = LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F((&V_3), NULL);
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_31 = V_1;
		NullCheck(L_31);
		double L_32 = L_31->____lastGpsUpdateTime_8;
		if ((!(((double)L_30) > ((double)L_32))))
		{
			goto IL_017a;
		}
	}
	{
		// _lastGpsUpdateTime = gpsInfo.timestamp;
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_33 = V_1;
		double L_34;
		L_34 = LocationInfo_get_timestamp_mAD1095E60A61DF0FA66195AA06A0F801CF9BDC9F((&V_3), NULL);
		NullCheck(L_33);
		L_33->____lastGpsUpdateTime_8 = L_34;
		// UpdatePlayerLocation(gpsInfo.latitude, gpsInfo.longitude);
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_35 = V_1;
		float L_36;
		L_36 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863((&V_3), NULL);
		float L_37;
		L_37 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2((&V_3), NULL);
		NullCheck(L_35);
		PlayerLocationController_UpdatePlayerLocation_m259242344F8E240AFC55267D6A313B7FBD0AA824(L_35, L_36, L_37, NULL);
	}

IL_017a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_018a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0191:
	{
		// while (isActiveAndEnabled)
		PlayerLocationController_t2202C3A8035721F933F1215C56B445CD445B35AD* L_38 = V_1;
		NullCheck(L_38);
		bool L_39;
		L_39 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_38, NULL);
		if (L_39)
		{
			goto IL_013f;
		}
	}
	{
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_40;
		L_40 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_40);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_40, NULL);
	}

IL_01a3:
	{
		// }
		return (bool)0;
	}
}
// System.Object Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateGPSLocationU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2236924E8591EC80A995BA0A9AA8ABBAAA203176 (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateGPSLocationU3Ed__13_System_Collections_IEnumerator_Reset_m15E8EA2DBB0C03E95855AC52BD34CE5803789E79 (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateGPSLocationU3Ed__13_System_Collections_IEnumerator_Reset_m15E8EA2DBB0C03E95855AC52BD34CE5803789E79_RuntimeMethod_var)));
	}
}
// System.Object Niantic.Lightship.Maps.Samples.GameSample.PlayerLocationController/<UpdateGPSLocation>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateGPSLocationU3Ed__13_System_Collections_IEnumerator_get_Current_mFFEFE4CFA6010C8080384BB478446F478D699262 (U3CUpdateGPSLocationU3Ed__13_t0E998EEE72C221E930AB7E6A2413D6DBD8C6B447* __this, const RuntimeMethod* method) 
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
// System.Void Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingText_Start_m1B4A96E6A12891682FE3A20A8B25A5A27ECA1FE2 (FloatingText_tC06A4948E3854A55715CF53F95F4CD43FBB5E1B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 2.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingText_SetText_mB059B8DB5A0442C6262822D155C1B62131111C24 (FloatingText_tC06A4948E3854A55715CF53F95F4CD43FBB5E1B1* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// _textField.text = text;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____textField_4;
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Niantic.Lightship.Maps.Samples.GameSample.FloatingText.FloatingText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingText__ctor_mBAFB804C688DF4FFC2D4194B02DD4A99F39E5787 (FloatingText_tC06A4948E3854A55715CF53F95F4CD43FBB5E1B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* FeatureBuilderBase_get_Features_m75B4F6C71129EDAC667E6B0C6B50973260031D36_inline (FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC* __this, const RuntimeMethod* method) 
{
	{
		// protected FeatureKind[] Features => _features;
		FeatureKindU5BU5D_tB4FCB66DAD395BDC923265223908273E44CF8316* L_0 = __this->____features_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FeatureBuilderBase_get_Layer_mA67DA561D39CD69D0D1A6EC04A427FC5A108357A_inline (FeatureBuilderBase_t230909C146A519BC873C428275E988126A21FBBC* __this, const RuntimeMethod* method) 
{
	{
		// protected LayerKind Layer => _mapLayer;
		int32_t L_0 = __this->____mapLayer_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* MapFeaturePrefabSpawner_get_Log_m400E4ED3448A82566F187CDE4173EDD8121803C2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ChannelLogger Log { get; } = new ChannelLogger(nameof(MapFeaturePrefabSpawner));
		il2cpp_codegen_runtime_class_init_inline(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var);
		ChannelLogger_t197F6E57AF05370167D991478AB0CB34F7FC4C88* L_0 = ((MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_StaticFields*)il2cpp_codegen_static_fields_for(MapFeaturePrefabSpawner_tB8100582FFA6A82D800E3F5FADAB4F2824777405_il2cpp_TypeInfo_var))->___U3CLogU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MapGameState_set_Instance_m8AB7B5492FEB1A657A91935C8329D7450E5E3D42_inline (MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MapGameState Instance { get; private set; }
		MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F* L_0 = ___value0;
		((MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields*)il2cpp_codegen_static_fields_for(MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_StaticFields*)il2cpp_codegen_static_fields_for(MapGameState_tF588F1C41DB205146F67AA2BCBDBFDB0AE85D45F_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___to1;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___from0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___to1;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___from0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___to1;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___from0;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___to1;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___from0;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___to1;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___from0;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___to1;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___from0;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___to1;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___axis2;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___axis2;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___axis2;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
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
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}

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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Comparison`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>
struct Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>
struct Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584;
// System.Func`2<Niantic.Platform.Util.OrbitCameraInternal.InputEvent,System.Boolean>
struct Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>
struct IEnumerable_1_tA3629E284E2F4D04B44563DEA14AC2CAA30FBBDE;
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>
struct IEnumerable_1_tA584809486B6A74FC6C1432A7E1C7FC592811C86;
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>
struct IEnumerable_1_tE1B86E32D7F16D9773A9A5A0F9507777C92D4029;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Touch>
struct KeyCollection_tD0C6D26D4EEE931C451AE4E633D3EBDB9EA2D992;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>
struct List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157;
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>
struct List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9;
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>
struct List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B;
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>
struct List_1_t178789677B756A774C7F7133D134D0611697C67B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Touch>
struct ValueCollection_tCA90156CA90B6D14C7175B438A0EFA5FAD232B12;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Touch>[]
struct EntryU5BU5D_tB80C91B971B8027BBE2325C62DEB237A6B30ABBA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Niantic.Platform.Util.OrbitCameraInternal.IInputLayer[]
struct IInputLayerU5BU5D_tE253B4CA75DFAF941639F13417FF47CCC4247DA9;
// Niantic.Platform.Util.OrbitCameraInternal.IInputSource[]
struct IInputSourceU5BU5D_t2AD30C2530F7EECCC556E41098F84AEE79F4B934;
// Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture[]
struct IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2;
// Niantic.Platform.Util.OrbitCameraInternal.InputEvent[]
struct InputEventU5BU5D_t9E76FAF0227DBD478907488D58F6A65763A038E2;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// Niantic.Platform.Util.OrbitCameraInternal.AbstractAngularZoomCurveEvaluator
struct AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC;
// Niantic.Platform.Util.OrbitCameraInternal.AbstractElevationZoomCurveEvaluator
struct AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A;
// Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator
struct AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker
struct CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator
struct CubicAngleZoomCurveEvaluator_t2E011E6FCF12E33ED45BE8EC647222D94363278A;
// Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator
struct CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Niantic.Platform.Util.OrbitCameraInternal.IGesture
struct IGesture_tB7228B04250B5C2D569B85008B6BDCD7D2416116;
// Niantic.Platform.Util.OrbitCameraInternal.IInputLayer
struct IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044;
// Niantic.Platform.Util.OrbitCameraInternal.IInputSource
struct IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E;
// Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture
struct IScreenInputGesture_t3AEA6ED9C19B86FB75872E98735B8C063D0C61B8;
// Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator
struct IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Niantic.Platform.Util.OrbitCameraInternal.InputEvent
struct InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114;
// Niantic.Platform.Util.OrbitCameraInternal.InputService
struct InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Niantic.Platform.Util.OrbitCameraInternal.LinearAngleZoomCurveEvaluator
struct LinearAngleZoomCurveEvaluator_t4B4B178EBCF9BACD93738ED4226F5F89F2AAD9D7;
// Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator
struct LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters
struct NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Niantic.Platform.Util.OrbitCamera
struct OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Niantic.Platform.Util.OrbitCameraInternal.QuadraticAngleZoomCurveEvaluator
struct QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer
struct ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput
struct UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133;
// Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput
struct UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings
struct Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8;
// Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer
struct BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA584809486B6A74FC6C1432A7E1C7FC592811C86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE58E9C47D2CCBF0A09F26683FD64953F444406C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGesture_tB7228B04250B5C2D569B85008B6BDCD7D2416116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScreenInputGesture_t3AEA6ED9C19B86FB75872E98735B8C063D0C61B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputLayerPriority_t2D064E69D6619F4B4F2D7201C1469F4AE75ECF42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPhase_t0370E0DC4C51DCC5D2139A2CFAEF2449C794704A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0479E69AB7A59BE5E47D304FC11F5858B5681FF2;
IL2CPP_EXTERN_C String_t* _stringLiteral0556E1E1B47AAD37AF86A1F87EADCCFF8BCE3AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral2EC221488F77FC4EF6BEC64A974E8A08ED973FF7;
IL2CPP_EXTERN_C String_t* _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85;
IL2CPP_EXTERN_C String_t* _stringLiteral3C6D54454F4E1F312355291A3209AC6D7FEC5032;
IL2CPP_EXTERN_C String_t* _stringLiteral3C8D7BA5CA6B8DB1717F6F1C1DEC3AE49B7A72CC;
IL2CPP_EXTERN_C String_t* _stringLiteral498680848415D05462DD52F4DDEC27DF493A3844;
IL2CPP_EXTERN_C String_t* _stringLiteral88B45600C34FD074B524448E8BFC1F30760FEA33;
IL2CPP_EXTERN_C String_t* _stringLiteralACA4177654EED43F22A01C4DC869C1E8CBF9AD23;
IL2CPP_EXTERN_C String_t* _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFE1077C61599710798A46E033DBA6E126E0DC2C0;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_0_m01718C3580CB6679254E6B7D47611665C95640A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_1_mF1232F1C7F4339D67A5B0D5B23F64F1DA826B4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_2_mE9EB4D0F18B082E9A1D5FD1F69A974C525FA5097_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_3_m978F1B34FA75BC170DA4F0BDC478D6F88C9AF88F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_4_m799A46F6FD8C40E452230040DF774817C4D0D71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraGestureTracker_U3CMouseZoomU3Eb__45_0_m83FEBAE8CC44C2B8FB6936A2CB423AC999EFFB43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4518BDA9CC14CFD6F473F03682D5BF81ACA82093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6A6372647E386F782C61A0E22AEA52C401F53BB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC66693E99A9E8436ED0D95A6C1948D50BFA4A99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputService_LayerComparer_mD2F1480B21A5A4DD65A0ACDFD1A0F4F089FBEC41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputService_RemovePendingLayers_m91271422D2EDF32A330AE9EF423D89D5EFBF051A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m718164989F0B2627B678D8169523735394DB9E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m353B4ACCED6B6C0BF2D7BDC3487C9DF275D3A408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m528BBE077A288921E3A60DCA5A024B6D087B1B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF53A1440FC49B66CB5A4EEAFBBCFE1E0E36FDC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0CD589334598357C2D889D2008E3D4987B6F33C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m1E71164484C171219DE6FB58E4F20FD458DBC6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m252ECAD69E2EA1CE58123386172AD575CE9A690A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB0EC9077CE764DB828B274BCE8B97A66212484C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityTouchInput_ToInputPhase_m46F4BAC973CE081781AD8CB2FABBA27DE8A81C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEDBC4D931D02AC15584A6C77B06659DA37A3AE4E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>
struct Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB80C91B971B8027BBE2325C62DEB237A6B30ABBA* ____entries_1;
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
	KeyCollection_tD0C6D26D4EEE931C451AE4E633D3EBDB9EA2D992* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCA90156CA90B6D14C7175B438A0EFA5FAD232B12* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>
struct List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IInputLayerU5BU5D_tE253B4CA75DFAF941639F13417FF47CCC4247DA9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IInputLayerU5BU5D_tE253B4CA75DFAF941639F13417FF47CCC4247DA9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>
struct List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IInputSourceU5BU5D_t2AD30C2530F7EECCC556E41098F84AEE79F4B934* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IInputSourceU5BU5D_t2AD30C2530F7EECCC556E41098F84AEE79F4B934* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>
struct List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>
struct List_1_t178789677B756A774C7F7133D134D0611697C67B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputEventU5BU5D_t9E76FAF0227DBD478907488D58F6A65763A038E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t178789677B756A774C7F7133D134D0611697C67B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputEventU5BU5D_t9E76FAF0227DBD478907488D58F6A65763A038E2* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator
struct AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13  : public RuntimeObject
{
	// Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::cameraParameters
	NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* ___cameraParameters_0;
};
struct Il2CppArrayBounds;

// Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport
struct CameraMathSupport_tFAF164BB955A1DF81EB239F71C74D1700FEF7505  : public RuntimeObject
{
};

// Niantic.Platform.Util.OrbitCameraInternal.GuiUtil
struct GuiUtil_t1ACFED410CB17F0CCC5A097C8CD166F89EE16B01  : public RuntimeObject
{
};

// Niantic.Platform.Util.OrbitCameraInternal.InputService
struct InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39  : public RuntimeObject
{
	// System.Action Niantic.Platform.Util.OrbitCameraInternal.InputService::BackButtonPressed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___BackButtonPressed_0;
	// UnityEngine.EventSystems.EventSystem Niantic.Platform.Util.OrbitCameraInternal.InputService::_unityEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ____unityEventSystem_1;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource> Niantic.Platform.Util.OrbitCameraInternal.InputService::_sources
	List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* ____sources_2;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer> Niantic.Platform.Util.OrbitCameraInternal.InputService::_layers
	List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* ____layers_3;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer> Niantic.Platform.Util.OrbitCameraInternal.InputService::_layersToAdd
	List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* ____layersToAdd_4;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer> Niantic.Platform.Util.OrbitCameraInternal.InputService::_layersToRemove
	List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* ____layersToRemove_5;
	// System.UInt32 Niantic.Platform.Util.OrbitCameraInternal.InputService::_disableCount
	uint32_t ____disableCount_6;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.InputService::_tempEventList
	List_1_t178789677B756A774C7F7133D134D0611697C67B* ____tempEventList_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters
struct NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0  : public RuntimeObject
{
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MinZoomMeters>k__BackingField
	float ___U3CMinZoomMetersU3Ek__BackingField_0;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MaxZoomMeters>k__BackingField
	float ___U3CMaxZoomMetersU3Ek__BackingField_1;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MinPitchDegrees>k__BackingField
	float ___U3CMinPitchDegreesU3Ek__BackingField_2;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MaxPitchDegrees>k__BackingField
	float ___U3CMaxPitchDegreesU3Ek__BackingField_3;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<VerticalOffsetMeters>k__BackingField
	float ___U3CVerticalOffsetMetersU3Ek__BackingField_4;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MinElevMeters>k__BackingField
	float ___U3CMinElevMetersU3Ek__BackingField_5;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::<MaxElevMeters>k__BackingField
	float ___U3CMaxElevMetersU3Ek__BackingField_6;
};

// Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer
struct ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture> Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::gestures
	List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* ___gestures_0;
	// Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput
struct UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::activeEvents
	List_1_t178789677B756A774C7F7133D134D0611697C67B* ___activeEvents_0;
	// UnityEngine.EventSystems.EventSystem Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::uiEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___uiEventSystem_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch> Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::activeTouches
	Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* ___activeTouches_2;
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

// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings
struct Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8  : public RuntimeObject
{
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::DefaultZoom
	float ___DefaultZoom_0;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::MouseScrollZoomSpeed
	float ___MouseScrollZoomSpeed_1;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::TouchPinchZoomSpeed
	float ___TouchPinchZoomSpeed_2;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::DoubleTapZoomEnabled
	bool ___DoubleTapZoomEnabled_3;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::DoubleTapZoomSpeed
	float ___DoubleTapZoomSpeed_4;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::DoubleTapMaxTime
	float ___DoubleTapMaxTime_5;
};

// Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer
struct BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A  : public RuntimeObject
{
	// Niantic.Platform.Util.OrbitCameraInternal.InputService Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::_inputService
	InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* ____inputService_0;
};

// System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>
struct Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>
struct Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>
struct Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>
struct Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t178789677B756A774C7F7133D134D0611697C67B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ____current_3;
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

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<UnityEngine.KeyCode>
struct Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Niantic.Platform.Util.OrbitCameraInternal.AbstractAngularZoomCurveEvaluator
struct AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC  : public AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13
{
};

// Niantic.Platform.Util.OrbitCameraInternal.AbstractElevationZoomCurveEvaluator
struct AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A  : public AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Nullable`1<UnityEngine.Vector2>
struct Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator
struct CubicAngleZoomCurveEvaluator_t2E011E6FCF12E33ED45BE8EC647222D94363278A  : public AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC
{
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::y0
	float ___y0_1;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::y1
	float ___y1_2;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::y2
	float ___y2_3;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::y3
	float ___y3_4;
};

// Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator
struct CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E  : public AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::controlPoints
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___controlPoints_1;
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

// Niantic.Platform.Util.OrbitCameraInternal.LinearAngleZoomCurveEvaluator
struct LinearAngleZoomCurveEvaluator_t4B4B178EBCF9BACD93738ED4226F5F89F2AAD9D7  : public AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC
{
};

// Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator
struct LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD  : public AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A
{
	// System.Collections.Generic.List`1<UnityEngine.Vector2> Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator::controlPoints
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___controlPoints_1;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// Niantic.Platform.Util.OrbitCameraInternal.QuadraticAngleZoomCurveEvaluator
struct QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5  : public AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC
{
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// Niantic.Platform.Util.OrbitCameraInternal.TransformData
struct TransformData_t0205120723B8549506451C193ECF90E0A6838DEE 
{
	// System.UInt32 Niantic.Platform.Util.OrbitCameraInternal.TransformData::Id
	uint32_t ___Id_0;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.TransformData::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.TransformData::DeltaPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition_2;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.TransformData::OverUI
	bool ___OverUI_3;
};
// Native definition for P/Invoke marshalling of Niantic.Platform.Util.OrbitCameraInternal.TransformData
struct TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_pinvoke
{
	uint32_t ___Id_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition_2;
	int32_t ___OverUI_3;
};
// Native definition for COM marshalling of Niantic.Platform.Util.OrbitCameraInternal.TransformData
struct TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_com
{
	uint32_t ___Id_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DeltaPosition_2;
	int32_t ___OverUI_3;
};

// System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>
struct Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___value_1;
};

// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker
struct CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163  : public RuntimeObject
{
	// System.Action`1<System.Single> Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::Zoomed
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___Zoomed_0;
	// System.Action`1<System.Single> Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::Rotated
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___Rotated_1;
	// System.Action`1<System.Single> Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ManuallyRotated
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___ManuallyRotated_2;
	// UnityEngine.Camera Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_raycastCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____raycastCamera_5;
	// UnityEngine.GameObject Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_focusObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____focusObject_6;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_zoomFraction
	float ____zoomFraction_7;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastSwipePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastSwipePosition_8;
	// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastSwipeFrame
	int32_t ____lastSwipeFrame_9;
	// UnityEngine.Vector2 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_scrollDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____scrollDelta_10;
	// Niantic.Platform.Util.OrbitCameraInternal.InputEvent Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_firstZoomTap
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ____firstZoomTap_11;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_firstTapEnded
	bool ____firstTapEnded_12;
	// Niantic.Platform.Util.OrbitCameraInternal.InputEvent Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_secondZoomTap
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ____secondZoomTap_13;
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_transformationEvents
	List_1_t178789677B756A774C7F7133D134D0611697C67B* ____transformationEvents_14;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_isCurrentlyZooming
	bool ____isCurrentlyZooming_15;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_wasRotatingLastFrame
	bool ____wasRotatingLastFrame_16;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastTouch0Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastTouch0Position_17;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastTouch1Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastTouch1Position_18;
	// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_prevZoomPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____prevZoomPosition_19;
	// Niantic.Platform.Util.OrbitCameraInternal.InputEvent Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastTouch0
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ____lastTouch0_20;
	// Niantic.Platform.Util.OrbitCameraInternal.InputEvent Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_lastTouch1
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ____lastTouch1_21;
	// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::_settings
	Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* ____settings_22;
	// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<GesturesEnabled>k__BackingField
	bool ___U3CGesturesEnabledU3Ek__BackingField_23;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::rotationAngleDegrees
	float ___rotationAngleDegrees_24;
};

struct CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_StaticFields
{
	// UnityEngine.Plane Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::GroundPlane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___GroundPlane_4;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput
struct UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::_activeEvents
	List_1_t178789677B756A774C7F7133D134D0611697C67B* ____activeEvents_1;
	// System.Nullable`1<UnityEngine.Vector3> Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::lastPosition
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___lastPosition_2;
	// UnityEngine.EventSystems.EventSystem Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::uiEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___uiEventSystem_3;
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Comparison`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>
struct Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C  : public MulticastDelegate_t
{
};

// System.Func`2<Niantic.Platform.Util.OrbitCameraInternal.InputEvent,System.Boolean>
struct Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Niantic.Platform.Util.OrbitCameraInternal.InputEvent
struct InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114  : public RuntimeObject
{
	// System.UInt32 Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Uid
	uint32_t ___Uid_0;
	// Niantic.Platform.Util.OrbitCameraInternal.InputPhase Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Phase
	int32_t ___Phase_1;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Time
	float ___Time_2;
	// System.Single Niantic.Platform.Util.OrbitCameraInternal.InputEvent::DeltaTime
	float ___DeltaTime_3;
	// System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData> Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Transform
	Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 ___Transform_4;
	// System.Nullable`1<UnityEngine.KeyCode> Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Key
	Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 ___Key_5;
	// Niantic.Platform.Util.OrbitCameraInternal.IInputSource Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Source
	RuntimeObject* ___Source_6;
	// System.Nullable`1<UnityEngine.Vector2> Niantic.Platform.Util.OrbitCameraInternal.InputEvent::ScrollDelta
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___ScrollDelta_7;
	// Niantic.Platform.Util.OrbitCameraInternal.IGesture Niantic.Platform.Util.OrbitCameraInternal.InputEvent::<ConsumedBy>k__BackingField
	RuntimeObject* ___U3CConsumedByU3Ek__BackingField_8;
};

struct InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_StaticFields
{
	// System.UInt32 Niantic.Platform.Util.OrbitCameraInternal.InputEvent::nextId
	uint32_t ___nextId_9;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Niantic.Platform.Util.OrbitCamera
struct OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Niantic.Platform.Util.OrbitCamera::_minimumZoomDistance
	float ____minimumZoomDistance_4;
	// System.Single Niantic.Platform.Util.OrbitCamera::_maximumZoomDistance
	float ____maximumZoomDistance_5;
	// System.Single Niantic.Platform.Util.OrbitCamera::_minimumPitchDegrees
	float ____minimumPitchDegrees_6;
	// System.Single Niantic.Platform.Util.OrbitCamera::_maximumPitchDegrees
	float ____maximumPitchDegrees_7;
	// System.Single Niantic.Platform.Util.OrbitCamera::_verticalFocusOffset
	float ____verticalFocusOffset_8;
	// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings Niantic.Platform.Util.OrbitCamera::_gestureSettings
	Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* ____gestureSettings_9;
	// UnityEngine.Camera Niantic.Platform.Util.OrbitCamera::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_10;
	// UnityEngine.GameObject Niantic.Platform.Util.OrbitCamera::_focusObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____focusObject_11;
	// Niantic.Platform.Util.OrbitCameraInternal.InputService Niantic.Platform.Util.OrbitCamera::_inputService
	InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* ____inputService_12;
	// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker Niantic.Platform.Util.OrbitCamera::_gestureTracker
	CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* ____gestureTracker_13;
	// Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator Niantic.Platform.Util.OrbitCamera::_zoomCurveEvaluator
	RuntimeObject* ____zoomCurveEvaluator_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture[]
struct IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2  : public RuntimeArray
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
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_t0205120723B8549506451C193ECF90E0A6838DEE Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_gshared (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_gshared_inline (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_gshared (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351_gshared (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;

// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::.ctor(UnityEngine.Camera,UnityEngine.GameObject,Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker__ctor_m8A68AE5E82EC6C556A6AECF4F42D471EB035B78E (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___raycastCamera0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusObject1, Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* ___settings2, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService__ctor_m7FCD6D7BFF53589D57A778BF1137C0E10AA824D7 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___unityEventSystem0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::Initialize(System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_Initialize_m37DC18003DB4C88614C1569D418A3394AEF8FD8B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___gestures0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.QuadraticAngleZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadraticAngleZoomCurveEvaluator__ctor_m919DF04F5B39159368E0C2689EBCAF01C1DD6424 (QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters__ctor_m59044FF7B0C78F07128F44F3414BC1ECA363C36D (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___minZoomMeters0, float ___maxZoomMeters1, float ___minPitchDegrees2, float ___maxPitchDegrees3, float ___verticalOffsetMeters4, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_Update_mAB5D3F7E33D314D210E66B29B7FFF2BD8B62B5FE (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_RotationAngleDegrees()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_ZoomFraction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::.ctor()
inline void List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565 (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_GesturesEnabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraGestureTracker_set_GesturesEnabled_m1265D784B73909ED50EEDED2D99C945082B9DABB_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_GesturesEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::get_Count()
inline int32_t List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_inline (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::get_Item(System.Int32)
inline InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Func`2<Niantic.Platform.Util.OrbitCameraInternal.InputEvent,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5 (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16 (RuntimeObject* ___source0, Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___source0, ___predicate1, method);
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_ZoomFraction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_set_ZoomFraction_m742077B01841B8B045A145F0F61096C3527F41E5 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, float ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::get_Value()
inline TransformData_t0205120723B8549506451C193ECF90E0A6838DEE Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5 (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, const RuntimeMethod* method)
{
	return ((  TransformData_t0205120723B8549506451C193ECF90E0A6838DEE (*) (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89*, const RuntimeMethod*))Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::GetEnumerator()
inline Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::Dispose()
inline void Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::get_Current()
inline InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_inline (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F* __this, const RuntimeMethod* method)
{
	return ((  InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* (*) (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::MoveNext()
inline bool Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32 (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_inline (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89*, const RuntimeMethod*))Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_gshared_inline)(__this, method);
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::TransformOverUI(Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___inputTransform0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Screen::get_dpi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::RotateByDirections(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_RotateByDirections_m0F98AAF78E88A0D2973EED89FFEED619B99FDBBC (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionB1, float ___direction2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::MouseZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_MouseZoom_m2C76B4AFA3B0F4E55C25D917C5049697723943E7 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::TouchZoomAndRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_TouchZoomAndRotate_mE369C92D18A4D9303C1AE6A836FCDB1416F58F98 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::DoubleTapZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_DoubleTapZoom_mC0E8E2B8FEA9AC0CE100219B4B604DDC946955E8 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ResetDoubleTapZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655 (RuntimeObject* ___source0, Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* ___predicate1, const RuntimeMethod* method)
{
	return ((  InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* (*) (RuntimeObject*, Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___source0, ___predicate1, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Consume(Niantic.Platform.Util.OrbitCameraInternal.IGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996 (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___consumer0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.GuiUtil::IsScreenPositionOverUi(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GuiUtil_IsScreenPositionOverUi_m22940AF7DBE9C78C4A0B936232EEF2820E21E6B7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputPos0, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_IsCurrentlyRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_get_IsCurrentlyRotating_m9BC384A27BB43C8BC39A86125E78CE22597432FA (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ClampDirToGround(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraGestureTracker_ClampDirToGround_m1F0E02F9B6F7DB99004440A24F7A19938F9CD864 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::set_direction(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___distance0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_RotationAngleDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_set_RotationAngleDegrees_mD6B5F72C0C7C9282A7CE08C46AA79E49E783F11C (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::Add(T)
inline void List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_inline (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Vector2>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector2>::get_Value()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, const RuntimeMethod*))Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ProcessZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ProcessZoom_m5E549884F945946E267EAEAB4FD54CAEA0E0C131 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ProcessSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ProcessSwipe_m17EA34247019500D1C2CFAB031C98DA9F232F8D5 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>::Clear()
inline void List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_inline (List_1_t178789677B756A774C7F7133D134D0611697C67B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t178789677B756A774C7F7133D134D0611697C67B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_mACA7F957A13DD97953808B8E0CF95EAD7D39463E (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, float ___d1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___raycastResults1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline)(__this, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::set_ConsumedBy(Niantic.Platform.Util.OrbitCameraInternal.IGesture)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputEvent_set_ConsumedBy_m44EE46DE45C42A208850763F3BA7EFC4CF14A71A_inline (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>::.ctor(T)
inline void Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573 (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89*, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE, const RuntimeMethod*))Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_gshared)(__this, ___value0, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,System.Nullable`1<UnityEngine.Vector2>,System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>,System.Nullable`1<UnityEngine.KeyCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66 (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___scrollDelta4, Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 ___transform5, Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 ___key6, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector2>::.ctor(T)
inline void Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73 (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_gshared)(__this, ___value0, method);
}
// System.Void System.Nullable`1<UnityEngine.KeyCode>::.ctor(T)
inline void Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// Niantic.Platform.Util.OrbitCameraInternal.IGesture Niantic.Platform.Util.OrbitCameraInternal.InputEvent::get_ConsumedBy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D_inline (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151 (StringBuilder_t* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.KeyCode>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_inline (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.KeyCode>::get_Value()
inline int32_t Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m5F3C7B1C542DAF4CE90DDAB02A633AB0A3B08A05 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.TransformData::.ctor(System.UInt32,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219 (TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* __this, uint32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___deltaPosition2, bool ___overUI3, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String Niantic.Platform.Util.OrbitCameraInternal.TransformData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformData_ToString_mA1E756B3F220CEB33431F45BD6D076A1C4F75D05 (TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::.ctor()
inline void List_1__ctor_m252ECAD69E2EA1CE58123386172AD575CE9A690A (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::.ctor()
inline void List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349 (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::get_EventsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_get_EventsEnabled_m5E6347CA6F68FA71C7ACC5192871B03C61DB836A (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::.ctor(Niantic.Platform.Util.OrbitCameraInternal.InputService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButtonPressedInputLayer__ctor_mDF25E6ACE4672963163724CD143389129B40B6DD (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* ___inputService0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::AddLayer(Niantic.Platform.Util.OrbitCameraInternal.IInputLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_AddLayer_mD5A639DC5A950CDB730DF05CDB5E67550D313886 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___layer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::Clear()
inline void List_1_Clear_m353B4ACCED6B6C0BF2D7BDC3487C9DF275D3A408_inline (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchInput__ctor_m2FA07699AF8BCDD03E339A95015AF103BBBEC6CF (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::Add(T)
inline void List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_inline (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMouseInput__ctor_m73BED5EBA6DE1C1EBCF2547A708A49B630D9BA79 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::GetEnumerator()
inline Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E (*) (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::Dispose()
inline void Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49 (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_inline (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputSource>::MoveNext()
inline bool Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::.ctor(Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer__ctor_mF3BFC297CCE1C36235915AAF010E505833B0ADE9 (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, int32_t ___priority0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::Register(Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_Register_mCE364044C88D4D2D8324BBE23638C29955FB601D (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, RuntimeObject* ___gesture0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_ProcessInput_m5B9435E71E62E69849E2218964D755840D2C7501 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::Add(T)
inline void List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_inline (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::get_Count()
inline int32_t List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_inline (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::GetEnumerator()
inline Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::Dispose()
inline void Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_inline (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::MoveNext()
inline bool Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204 (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Comparison`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mEF4E94D02D842ECAC54DE12C9A98A8737098DB67 (Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m1E71164484C171219DE6FB58E4F20FD458DBC6E6 (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C*, const RuntimeMethod*))List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::Clear()
inline void List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_inline (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 System.Enum::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5 (RuntimeObject* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IInputLayer>::Remove(T)
inline bool List_1_Remove_m0CD589334598357C2D889D2008E3D4987B6F33C2 (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::AddPendingLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_AddPendingLayers_m20333F805794491B8DD91D2FDE00437E5FC2310B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::RemovePendingLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_RemovePendingLayers_m91271422D2EDF32A330AE9EF423D89D5EFBF051A (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::EventIsAvailable(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_EventIsAvailable_m20278969769C40F8379B38794324CB37F4254FE0 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___e0, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::HasBackButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_HasBackButtonAction_m4BD6DD1CD467257782B5F989B322C549035B5F0B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::.ctor()
inline void List_1__ctor_mB0EC9077CE764DB828B274BCE8B97A66212484C0 (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::set_Priority(Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_set_Priority_mC10910F344EFBCF3A42E7B243D65AC2D6E9679E0_inline (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::GetEnumerator()
inline Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D List_1_GetEnumerator_mF53A1440FC49B66CB5A4EEAFBBCFE1E0E36FDC78 (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D (*) (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::Dispose()
inline void Enumerator_Dispose_m4518BDA9CC14CFD6F473F03682D5BF81ACA82093 (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mC66693E99A9E8436ED0D95A6C1948D50BFA4A99D_inline (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::MoveNext()
inline bool Enumerator_MoveNext_m6A6372647E386F782C61A0E22AEA52C401F53BB4 (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::Add(T)
inline void List_1_Add_m718164989F0B2627B678D8169523735394DB9E52_inline (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::Clear()
inline void List_1_Clear_m528BBE077A288921E3A60DCA5A024B6D087B1B05_inline (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// Niantic.Platform.Util.OrbitCameraInternal.InputPhase Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::CurrentMousePhase(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMouseInput_CurrentMousePhase_mD7BA1300A17DCDDC8B995AFD093A4C0D7DF2FFD3 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, int32_t ___buttonId0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,UnityEngine.Vector2,Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m30B79461479818E4943676DBBFB4C1034595901F (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollDelta4, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform5, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
inline void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared)(__this, ___value0, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, int32_t, Touch_t03E51455ED508492B3F278903A0114FA0E87B417*, const RuntimeMethod*))Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// Niantic.Platform.Util.OrbitCameraInternal.InputPhase Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::ToInputPhase(UnityEngine.TouchPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTouchInput_ToInputPhase_m46F4BAC973CE081781AD8CB2FABBA27DE8A81C0F (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m3EC58622415E8D42F8722BAE1752FCAB0D16FFAB (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597 (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, int32_t, Touch_t03E51455ED508492B3F278903A0114FA0E87B417, const RuntimeMethod*))Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9 (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::Remove(TKey)
inline bool Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0 (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0_gshared)(__this, ___key0, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::get_Item(TKey)
inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Touch_t03E51455ED508492B3F278903A0114FA0E87B417 (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Touch>::.ctor()
inline void Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351 (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*, const RuntimeMethod*))Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351_gshared)(__this, method);
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinZoomMeters(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinZoomMeters_m8E410C663CD436923904F0F71AC2518F744EF3CB_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxZoomMeters(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxZoomMeters_mAE4F0A6F044F3B155EC7CF73C4D05960F83A4988_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinPitchDegrees(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinPitchDegrees_mB96D36AA9F3299762B9AAC5D3B4E70B9C891D848_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxPitchDegrees(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxPitchDegrees_mC939F4B73AAEA9072E8065038C76B818F2BDAEFF_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_VerticalOffsetMeters(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_VerticalOffsetMeters_m4093315DCD47EE48DDF143DBDE2D002EB241187F_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinPitchDegrees()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinElevMeters(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinElevMeters_m142FB682AC858121BB3CD710BFEB19D8CB10DBAD_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxPitchDegrees()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxElevMeters(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxElevMeters_mAC044E14D9E1AE5AFF5629715B27664AC012FBAD_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinZoomMeters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxZoomMeters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61 (float ___value0, float ___minInValue1, float ___maxInValue2, float ___minOutValue3, float ___maxOutValue4, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_VerticalOffsetMeters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_VerticalOffsetMeters_m5E283E16F3CE3C793B072C4044C1DAAA94EE6243_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractZoomCurveEvaluator__ctor_mCB645055EE2D23222594E405FF444153764AD25A (AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13* __this, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractAngularZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAngularZoomCurveEvaluator__ctor_mD9707D2AEE53F49A50F435313457A65D42C842F2 (AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractElevationZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractElevationZoomCurveEvaluator__ctor_m92E0D194561359A533EE37B9EB6A009F554A900B (AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator::FindSpan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LinearElevationZoomCurveEvaluator_FindSpan_m219D75BEDCD6D405B75B338C50E3B891B43FDEF0 (LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD* __this, float ___distanceMeters0, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinElevMeters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinElevMeters_m71CFBBA63EE882B6B4C0DD7A7918CABC71D3A6A9_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxElevMeters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxElevMeters_m7FF7BFA433D22D8FD83CCF61A4881C28EF424A41_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) ;
// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::findSpan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CubicHermiteSplineElevationZoomCurveEvaluator_findSpan_m2F0BC462D32EC08798A23926779100439E4C403B (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, float ___distanceMeters0, const RuntimeMethod* method) ;
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::getTangent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CubicHermiteSplineElevationZoomCurveEvaluator_getTangent_m806E06CD4D102914064801BF919D952BDEB4CC76 (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, int32_t ___controlIndex0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker Niantic.Platform.Util.OrbitCamera::get_GestureTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* OrbitCamera_get_GestureTracker_mBE855EF77FB7CBB56FEA7168D1A9CB1804CE4D77 (OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4* __this, const RuntimeMethod* method) 
{
	{
		// get { return _gestureTracker; }
		CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* L_0 = __this->____gestureTracker_13;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCamera_Awake_m2FE0A3535071472D4C8542EC3A1D00CED2E0AE91 (OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gestureTracker = new CameraGestureTracker(_camera, _focusObject, _gestureSettings);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____camera_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____focusObject_11;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_2 = __this->____gestureSettings_9;
		CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* L_3 = (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163*)il2cpp_codegen_object_new(CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CameraGestureTracker__ctor_m8A68AE5E82EC6C556A6AECF4F42D471EB035B78E(L_3, L_0, L_1, L_2, NULL);
		__this->____gestureTracker_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gestureTracker_13), (void*)L_3);
		// _inputService = new InputService(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_5 = (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39*)il2cpp_codegen_object_new(InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		InputService__ctor_m7FCD6D7BFF53589D57A778BF1137C0E10AA824D7(L_5, L_4, NULL);
		__this->____inputService_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputService_12), (void*)L_5);
		// _inputService.Initialize(new IScreenInputGesture[] { _gestureTracker });
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_6 = __this->____inputService_12;
		IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2* L_7 = (IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2*)(IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2*)SZArrayNew(IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2_il2cpp_TypeInfo_var, (uint32_t)1);
		IScreenInputGestureU5BU5D_t6121A2F37E0370982F6B3A0FF1540C557E99F6B2* L_8 = L_7;
		CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* L_9 = __this->____gestureTracker_13;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		InputService_Initialize_m37DC18003DB4C88614C1569D418A3394AEF8FD8B(L_6, (RuntimeObject*)L_8, NULL);
		// _zoomCurveEvaluator = new QuadraticAngleZoomCurveEvaluator();
		QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5* L_10 = (QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5*)il2cpp_codegen_object_new(QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		QuadraticAngleZoomCurveEvaluator__ctor_m919DF04F5B39159368E0C2689EBCAF01C1DD6424(L_10, NULL);
		__this->____zoomCurveEvaluator_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zoomCurveEvaluator_14), (void*)L_10);
		// _zoomCurveEvaluator.SetCameraParameters(
		//     new NianticCameraParameters(
		//         _minimumZoomDistance,
		//         _maximumZoomDistance,
		//         _minimumPitchDegrees,
		//         _maximumPitchDegrees,
		//         _verticalFocusOffset
		//     )
		// );
		RuntimeObject* L_11 = __this->____zoomCurveEvaluator_14;
		float L_12 = __this->____minimumZoomDistance_4;
		float L_13 = __this->____maximumZoomDistance_5;
		float L_14 = __this->____minimumPitchDegrees_6;
		float L_15 = __this->____maximumPitchDegrees_7;
		float L_16 = __this->____verticalFocusOffset_8;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_17 = (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0*)il2cpp_codegen_object_new(NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		NianticCameraParameters__ctor_m59044FF7B0C78F07128F44F3414BC1ECA363C36D(L_17, L_12, L_13, L_14, L_15, L_16, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* >::Invoke(3 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator::SetCameraParameters(Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters) */, IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var, L_11, L_17);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCamera_Update_m25DC5F0AC664D13D2EB3C165C447D3534A4D2112 (OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4* __this, const RuntimeMethod* method) 
{
	{
		// _inputService.Update();
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_0 = __this->____inputService_12;
		NullCheck(L_0);
		InputService_Update_mAB5D3F7E33D314D210E66B29B7FFF2BD8B62B5FE(L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCamera_LateUpdate_m4FD963DCA69466154DD01DCC20B8893229D18BFF (OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float rotationAngleDegrees = _gestureTracker.RotationAngleDegrees;
		CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* L_0 = __this->____gestureTracker_13;
		NullCheck(L_0);
		float L_1;
		L_1 = CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline(L_0, NULL);
		V_0 = L_1;
		// float rotationAngleRadians = Mathf.Deg2Rad * rotationAngleDegrees;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((0.0174532924f), L_2));
		// float zoomFraction = _gestureTracker.ZoomFraction;
		CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* L_3 = __this->____gestureTracker_13;
		NullCheck(L_3);
		float L_4;
		L_4 = CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline(L_3, NULL);
		V_2 = L_4;
		// float distance = _zoomCurveEvaluator.GetDistanceFromZoomFraction(zoomFraction);
		RuntimeObject* L_5 = __this->____zoomCurveEvaluator_14;
		float L_6 = V_2;
		NullCheck(L_5);
		float L_7;
		L_7 = InterfaceFuncInvoker1< float, float >::Invoke(2 /* System.Single Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator::GetDistanceFromZoomFraction(System.Single) */, IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var, L_5, L_6);
		V_3 = L_7;
		// float pitchDegrees = _zoomCurveEvaluator.GetAngleFromDistance(distance);
		RuntimeObject* L_8 = __this->____zoomCurveEvaluator_14;
		float L_9 = V_3;
		NullCheck(L_8);
		float L_10;
		L_10 = InterfaceFuncInvoker1< float, float >::Invoke(0 /* System.Single Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator::GetAngleFromDistance(System.Single) */, IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var, L_8, L_9);
		V_4 = L_10;
		// float elevMeters = _zoomCurveEvaluator.GetElevationFromDistance(distance);
		RuntimeObject* L_11 = __this->____zoomCurveEvaluator_14;
		float L_12 = V_3;
		NullCheck(L_11);
		float L_13;
		L_13 = InterfaceFuncInvoker1< float, float >::Invoke(1 /* System.Single Niantic.Platform.Util.OrbitCameraInternal.IZoomCurveEvaluator::GetElevationFromDistance(System.Single) */, IZoomCurveEvaluator_tD363B15A4E56CF15ECC05897951F7A250294B509_il2cpp_TypeInfo_var, L_11, L_12);
		V_5 = L_13;
		// Vector3 offsetPos = new Vector3(
		//     -distance * Mathf.Sin(rotationAngleRadians),
		//     elevMeters,
		//     -distance * Mathf.Cos(rotationAngleRadians)
		// );
		float L_14 = V_3;
		float L_15 = V_1;
		float L_16;
		L_16 = sinf(L_15);
		float L_17 = V_5;
		float L_18 = V_3;
		float L_19 = V_1;
		float L_20;
		L_20 = cosf(L_19);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), ((float)il2cpp_codegen_multiply(((-L_14)), L_16)), L_17, ((float)il2cpp_codegen_multiply(((-L_18)), L_20)), NULL);
		// _camera.transform.position = _focusObject.transform.position + offsetPos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->____camera_10;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->____focusObject_11;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_26, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_27, NULL);
		// _camera.transform.rotation = Quaternion.Euler(pitchDegrees, rotationAngleDegrees, 0.0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = __this->____camera_10;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		float L_30 = V_4;
		float L_31 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_30, L_31, (0.0f), NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_32, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCamera__ctor_m90C5DBF02530F22F140210E6DA745CD56C125214 (OrbitCamera_tAE76A3C49C406ABDFBC4FF07B5A2ABDE6DF7ABB4* __this, const RuntimeMethod* method) 
{
	{
		// private float _minimumZoomDistance = 23f;
		__this->____minimumZoomDistance_4 = (23.0f);
		// private float _maximumZoomDistance = 99f;
		__this->____maximumZoomDistance_5 = (99.0f);
		// private float _minimumPitchDegrees = 20.0f;
		__this->____minimumPitchDegrees_6 = (20.0f);
		// private float _maximumPitchDegrees = 60.0f;
		__this->____maximumPitchDegrees_7 = (60.0f);
		// private float _verticalFocusOffset = 10.0f;
		__this->____verticalFocusOffset_8 = (10.0f);
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::add_Zoomed(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_add_Zoomed_m2C4F5403758CB7FEAD92686A053123EDAD941216 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___Zoomed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___Zoomed_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::remove_Zoomed(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_remove_Zoomed_m26FC5CD99B015954AA97DB5DFD93AB6DCF6A54B1 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___Zoomed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___Zoomed_0);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::add_Rotated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_add_Rotated_mFDE2FC91E23631CB4279518BFC2BEEB531030A07 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___Rotated_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___Rotated_1);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::remove_Rotated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_remove_Rotated_mF3F7866738B5C77DA7D24E36BEB90BED2F65F9EE (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___Rotated_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___Rotated_1);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::add_ManuallyRotated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_add_ManuallyRotated_mB1C263263943E4E5E7400FE7BABEF5FC2F2B16AF (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___ManuallyRotated_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___ManuallyRotated_2);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::remove_ManuallyRotated(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_remove_ManuallyRotated_m435EE5F1F79522B59689293F25F52383B8ECD4F7 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_1 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* V_2 = NULL;
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_0 = __this->___ManuallyRotated_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)Castclass((RuntimeObject*)L_4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A_il2cpp_TypeInfo_var));
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A** L_5 = (&__this->___ManuallyRotated_2);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = V_2;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_7 = V_1;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_9 = V_0;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_9) == ((RuntimeObject*)(Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::.ctor(UnityEngine.Camera,UnityEngine.GameObject,Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker__ctor_m8A68AE5E82EC6C556A6AECF4F42D471EB035B78E (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___raycastCamera0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusObject1, Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* ___settings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector2 _scrollDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____scrollDelta_10 = L_0;
		// private readonly List<InputEvent> _transformationEvents = new List<InputEvent>();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_1 = (List_1_t178789677B756A774C7F7133D134D0611697C67B*)il2cpp_codegen_object_new(List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565(L_1, List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		__this->____transformationEvents_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transformationEvents_14), (void*)L_1);
		// public CameraGestureTracker(Camera raycastCamera, GameObject focusObject, Settings settings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _raycastCamera = raycastCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___raycastCamera0;
		__this->____raycastCamera_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____raycastCamera_5), (void*)L_2);
		// _focusObject = focusObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___focusObject1;
		__this->____focusObject_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____focusObject_6), (void*)L_3);
		// _settings = settings;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_4 = ___settings2;
		__this->____settings_22 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____settings_22), (void*)L_4);
		// _zoomFraction = settings.DefaultZoom;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_5 = ___settings2;
		NullCheck(L_5);
		float L_6 = L_5->___DefaultZoom_0;
		__this->____zoomFraction_7 = L_6;
		// GesturesEnabled = true;
		CameraGestureTracker_set_GesturesEnabled_m1265D784B73909ED50EEDED2D99C945082B9DABB_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_GesturesEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// public bool GesturesEnabled { get; set; }
		bool L_0 = __this->___U3CGesturesEnabledU3Ek__BackingField_23;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_GesturesEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_set_GesturesEnabled_m1265D784B73909ED50EEDED2D99C945082B9DABB (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GesturesEnabled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGesturesEnabledU3Ek__BackingField_23 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_ZoomFraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// get { return _zoomFraction; }
		float L_0 = __this->____zoomFraction_7;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_ZoomFraction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_set_ZoomFraction_m742077B01841B8B045A145F0F61096C3527F41E5 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// _zoomFraction = value;
		float L_0 = ___value0;
		__this->____zoomFraction_7 = L_0;
		// if (Zoomed != null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = __this->___Zoomed_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Zoomed(_zoomFraction);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = __this->___Zoomed_0;
		float L_3 = __this->____zoomFraction_7;
		NullCheck(L_2);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_2, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_RotationAngleDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// get { return rotationAngleDegrees; }
		float L_0 = __this->___rotationAngleDegrees_24;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::set_RotationAngleDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_set_RotationAngleDegrees_mD6B5F72C0C7C9282A7CE08C46AA79E49E783F11C (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// rotationAngleDegrees = value;
		float L_0 = ___value0;
		__this->___rotationAngleDegrees_24 = L_0;
		// if (Rotated != null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_1 = __this->___Rotated_1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Rotated(rotationAngleDegrees);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_2 = __this->___Rotated_1;
		float L_3 = __this->___rotationAngleDegrees_24;
		NullCheck(L_2);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_2, L_3, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Camera Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::GetRaycastCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraGestureTracker_GetRaycastCamera_m43EFB6749EBDE495AB603597734A7854ECD2E9EB (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// return _raycastCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->____raycastCamera_5;
		return L_0;
	}
}
// UnityEngine.Vector3 Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ClampDirToGround(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraGestureTracker_ClampDirToGround_m1F0E02F9B6F7DB99004440A24F7A19938F9CD864 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dir.y > -Mathf.Epsilon)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___dir0;
		float L_1 = L_0.___y_3;
		float L_2 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_1) > ((float)((-L_2))))))
		{
			goto IL_001a;
		}
	}
	{
		// dir.y = GROUND_CLAMP_COS_THRESHOLD;
		(&___dir0)->___y_3 = (-0.100000001f);
	}

IL_001a:
	{
		// return dir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___dir0;
		return L_3;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::get_IsCurrentlyRotating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_get_IsCurrentlyRotating_m9BC384A27BB43C8BC39A86125E78CE22597432FA (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GesturesEnabled
		//     && !_isCurrentlyZooming
		//     &&
		//     // Expects only one finger down
		//     _transformationEvents.Count == 1
		//     && (
		//         _transformationEvents[0].Phase == InputPhase.Began
		//         || _transformationEvents[0].Phase == InputPhase.Held
		//     );
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		bool L_1 = __this->____isCurrentlyZooming_15;
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_2 = __this->____transformationEvents_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_inline(L_2, List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_4 = __this->____transformationEvents_14;
		NullCheck(L_4);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_5;
		L_5 = List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D(L_4, 0, List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->___Phase_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_7 = __this->____transformationEvents_14;
		NullCheck(L_7);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_8;
		L_8 = List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D(L_7, 0, List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9 = L_8->___Phase_1;
		return (bool)((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		return (bool)1;
	}

IL_0048:
	{
		return (bool)0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::MouseZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_MouseZoom_m2C76B4AFA3B0F4E55C25D917C5049697723943E7 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CMouseZoomU3Eb__45_0_m83FEBAE8CC44C2B8FB6936A2CB423AC999EFFB43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (_transformationEvents.Any(e => TransformOverUI(e.Transform.Value)))
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_1 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_2 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_2, __this, (intptr_t)((void*)CameraGestureTracker_U3CMouseZoomU3Eb__45_0_m83FEBAE8CC44C2B8FB6936A2CB423AC999EFFB43_RuntimeMethod_var), NULL);
		bool L_3;
		L_3 = Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16(L_1, L_2, Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// ZoomFraction = Mathf.Clamp01(
		//     ZoomFraction
		//         + (Time.unscaledDeltaTime * _settings.MouseScrollZoomSpeed * _scrollDelta.y)
		// );
		float L_4;
		L_4 = CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline(__this, NULL);
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_6 = __this->____settings_22;
		NullCheck(L_6);
		float L_7 = L_6->___MouseScrollZoomSpeed_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->____scrollDelta_10);
		float L_9 = L_8->___y_1;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_7)), L_9)))), NULL);
		CameraGestureTracker_set_ZoomFraction_m742077B01841B8B045A145F0F61096C3527F41E5(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::TouchZoomAndRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_TouchZoomAndRotate_mE369C92D18A4D9303C1AE6A836FCDB1416F58F98 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_0 = NULL;
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE V_4;
	memset((&V_4), 0, sizeof(V_4));
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F V_15;
	memset((&V_15), 0, sizeof(V_15));
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_16 = NULL;
	uint32_t V_17 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	uint32_t G_B5_0 = 0;
	uint32_t G_B8_0 = 0;
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// InputEvent touch0 = null;
		V_0 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		// InputEvent touch1 = null;
		V_1 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		// uint touch0Id = (_lastTouch0 != null) ? _lastTouch0.Transform.Value.Id : 0xfffffff;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_1 = __this->____lastTouch0_20;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		G_B5_0 = ((uint32_t)(((int32_t)268435455)));
		goto IL_0032;
	}

IL_001d:
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = __this->____lastTouch0_20;
		NullCheck(L_2);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_3 = (&L_2->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4;
		L_4 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_3, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_5 = L_4.___Id_0;
		G_B5_0 = L_5;
	}

IL_0032:
	{
		V_2 = G_B5_0;
		// uint touch1Id = (_lastTouch1 != null) ? _lastTouch1.Transform.Value.Id : 0xfffffff;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = __this->____lastTouch1_21;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		G_B8_0 = ((uint32_t)(((int32_t)268435455)));
		goto IL_0057;
	}

IL_0042:
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_7 = __this->____lastTouch1_21;
		NullCheck(L_7);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_8 = (&L_7->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_9;
		L_9 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_8, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_10 = L_9.___Id_0;
		G_B8_0 = L_10;
	}

IL_0057:
	{
		V_3 = G_B8_0;
		// foreach (var touch in _transformationEvents)
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_11 = __this->____transformationEvents_14;
		NullCheck(L_11);
		Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F L_12;
		L_12 = List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C(L_11, List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		V_15 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA((&V_15), Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016d_1;
			}

IL_006a_1:
			{
				// foreach (var touch in _transformationEvents)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_13;
				L_13 = Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_inline((&V_15), Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
				V_16 = L_13;
				// var possibleTouchId = touch.Transform.Value.Id;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_14 = V_16;
				NullCheck(L_14);
				Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_15 = (&L_14->___Transform_4);
				TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_16;
				L_16 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_15, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
				uint32_t L_17 = L_16.___Id_0;
				V_17 = L_17;
				// if (touch.Phase == InputPhase.Began)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_18 = V_16;
				NullCheck(L_18);
				int32_t L_19 = L_18->___Phase_1;
				if (L_19)
				{
					goto IL_0103_1;
				}
			}
			{
				// if (_lastTouch0 == null)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_20 = __this->____lastTouch0_20;
				if (L_20)
				{
					goto IL_00c9_1;
				}
			}
			{
				// _lastTouch0 = touch;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_21 = V_16;
				__this->____lastTouch0_20 = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch0_20), (void*)L_21);
				// touch0Id = possibleTouchId;
				uint32_t L_22 = V_17;
				V_2 = L_22;
				// _lastTouch0Position = _lastTouch0.Transform.Value.Position;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_23 = __this->____lastTouch0_20;
				NullCheck(L_23);
				Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_24 = (&L_23->___Transform_4);
				TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_25;
				L_25 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_24, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25.___Position_1;
				__this->____lastTouch0Position_17 = L_26;
				// touch0 = _lastTouch0;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_27 = __this->____lastTouch0_20;
				V_0 = L_27;
				goto IL_016d_1;
			}

IL_00c9_1:
			{
				// else if (_lastTouch1 == null)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_28 = __this->____lastTouch1_21;
				if (L_28)
				{
					goto IL_016d_1;
				}
			}
			{
				// _lastTouch1 = touch;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_29 = V_16;
				__this->____lastTouch1_21 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch1_21), (void*)L_29);
				// touch1Id = possibleTouchId;
				uint32_t L_30 = V_17;
				V_3 = L_30;
				// _lastTouch1Position = _lastTouch1.Transform.Value.Position;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_31 = __this->____lastTouch1_21;
				NullCheck(L_31);
				Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_32 = (&L_31->___Transform_4);
				TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_33;
				L_33 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_32, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___Position_1;
				__this->____lastTouch1Position_18 = L_34;
				// touch1 = _lastTouch1;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_35 = __this->____lastTouch1_21;
				V_1 = L_35;
				goto IL_016d_1;
			}

IL_0103_1:
			{
				// else if (touch.Phase == InputPhase.Ended || touch.Phase == InputPhase.Canceled)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_36 = V_16;
				NullCheck(L_36);
				int32_t L_37 = L_36->___Phase_1;
				if ((((int32_t)L_37) == ((int32_t)2)))
				{
					goto IL_0117_1;
				}
			}
			{
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_38 = V_16;
				NullCheck(L_38);
				int32_t L_39 = L_38->___Phase_1;
				if ((!(((uint32_t)L_39) == ((uint32_t)4))))
				{
					goto IL_0141_1;
				}
			}

IL_0117_1:
			{
				// if (_lastTouch0 != null && possibleTouchId == touch0Id)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_40 = __this->____lastTouch0_20;
				if (!L_40)
				{
					goto IL_012b_1;
				}
			}
			{
				uint32_t L_41 = V_17;
				uint32_t L_42 = V_2;
				if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
				{
					goto IL_012b_1;
				}
			}
			{
				// _lastTouch0 = null;
				__this->____lastTouch0_20 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch0_20), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
			}

IL_012b_1:
			{
				// if (_lastTouch1 != null && possibleTouchId == touch1Id)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_43 = __this->____lastTouch1_21;
				if (!L_43)
				{
					goto IL_016d_1;
				}
			}
			{
				uint32_t L_44 = V_17;
				uint32_t L_45 = V_3;
				if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
				{
					goto IL_016d_1;
				}
			}
			{
				// _lastTouch1 = null;
				__this->____lastTouch1_21 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch1_21), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
				goto IL_016d_1;
			}

IL_0141_1:
			{
				// else if (touch.Phase == InputPhase.Held)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_46 = V_16;
				NullCheck(L_46);
				int32_t L_47 = L_46->___Phase_1;
				if ((!(((uint32_t)L_47) == ((uint32_t)1))))
				{
					goto IL_016d_1;
				}
			}
			{
				// if (_lastTouch0 != null && possibleTouchId == touch0Id)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_48 = __this->____lastTouch0_20;
				if (!L_48)
				{
					goto IL_015d_1;
				}
			}
			{
				uint32_t L_49 = V_17;
				uint32_t L_50 = V_2;
				if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
				{
					goto IL_015d_1;
				}
			}
			{
				// touch0 = touch;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_51 = V_16;
				V_0 = L_51;
				goto IL_016d_1;
			}

IL_015d_1:
			{
				// else if (_lastTouch1 != null && possibleTouchId == touch1Id)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_52 = __this->____lastTouch1_21;
				if (!L_52)
				{
					goto IL_016d_1;
				}
			}
			{
				uint32_t L_53 = V_17;
				uint32_t L_54 = V_3;
				if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
				{
					goto IL_016d_1;
				}
			}
			{
				// touch1 = touch;
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_55 = V_16;
				V_1 = L_55;
			}

IL_016d_1:
			{
				// foreach (var touch in _transformationEvents)
				bool L_56;
				L_56 = Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32((&V_15), Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_006a_1;
				}
			}
			{
				goto IL_0189;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0189:
	{
		// if (touch0 == null || touch1 == null)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_57 = V_0;
		if (!L_57)
		{
			goto IL_018f;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_58 = V_1;
		if (L_58)
		{
			goto IL_0191;
		}
	}

IL_018f:
	{
		// return false;
		return (bool)0;
	}

IL_0191:
	{
		// if ((touch0.Transform == null) || (touch1.Transform == null))
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_59 = V_0;
		NullCheck(L_59);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_60 = (&L_59->___Transform_4);
		bool L_61;
		L_61 = Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_inline(L_60, Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		if (!L_61)
		{
			goto IL_01ab;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_62 = V_1;
		NullCheck(L_62);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_63 = (&L_62->___Transform_4);
		bool L_64;
		L_64 = Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_inline(L_63, Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		if (L_64)
		{
			goto IL_01ad;
		}
	}

IL_01ab:
	{
		// return false;
		return (bool)0;
	}

IL_01ad:
	{
		// var touch0Transform = touch0.Transform.Value;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_65 = V_0;
		NullCheck(L_65);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_66 = (&L_65->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_67;
		L_67 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_66, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		V_4 = L_67;
		// var touch1Transform = touch1.Transform.Value;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_68 = V_1;
		NullCheck(L_68);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_69 = (&L_68->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_70;
		L_70 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_69, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		V_5 = L_70;
		// if (TransformOverUI(touch0Transform) && TransformOverUI(touch1Transform))
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_71 = V_4;
		bool L_72;
		L_72 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_71, NULL);
		if (!L_72)
		{
			goto IL_01dd;
		}
	}
	{
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_73 = V_5;
		bool L_74;
		L_74 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_73, NULL);
		if (!L_74)
		{
			goto IL_01dd;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_01dd:
	{
		// var touch0Pos = touch0Transform.Position;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_75 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___Position_1;
		V_6 = L_76;
		// var touch1Pos = touch1Transform.Position;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_77 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = L_77.___Position_1;
		V_7 = L_78;
		// Vector3 lastPos0 = _lastTouch0Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = __this->____lastTouch0Position_17;
		V_8 = L_79;
		// Vector3 lastPos1 = _lastTouch1Position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = __this->____lastTouch1Position_18;
		// float curDist = (touch1Pos - touch0Pos).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_81, L_82, NULL);
		V_18 = L_83;
		float L_84;
		L_84 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_18), NULL);
		V_9 = L_84;
		// float prevDist = (lastPos1 - lastPos0).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_80, L_85, NULL);
		V_18 = L_86;
		float L_87;
		L_87 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_18), NULL);
		// float pinchChange = prevDist - curDist;
		float L_88 = V_9;
		V_10 = ((float)il2cpp_codegen_subtract(L_87, L_88));
		// var screenWidthInches = Screen.width / Screen.dpi;
		int32_t L_89;
		L_89 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_90;
		L_90 = Screen_get_dpi_mEEDAA2189F84A47BD69D62A611E031D5C59CFE8E(NULL);
		V_11 = ((float)(((float)L_89)/L_90));
		// pinchChange *= screenWidthInches;
		float L_91 = V_10;
		float L_92 = V_11;
		V_10 = ((float)il2cpp_codegen_multiply(L_91, L_92));
		// ZoomFraction = Mathf.Clamp01(
		//     ZoomFraction + pinchChange * _settings.TouchPinchZoomSpeed
		// );
		float L_93;
		L_93 = CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline(__this, NULL);
		float L_94 = V_10;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_95 = __this->____settings_22;
		NullCheck(L_95);
		float L_96 = L_95->___TouchPinchZoomSpeed_2;
		float L_97;
		L_97 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_93, ((float)il2cpp_codegen_multiply(L_94, L_96)))), NULL);
		CameraGestureTracker_set_ZoomFraction_m742077B01841B8B045A145F0F61096C3527F41E5(__this, L_97, NULL);
		// var lastDirection = (_lastTouch1Position - _lastTouch0Position).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = __this->____lastTouch1Position_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = __this->____lastTouch0Position_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_98, L_99, NULL);
		V_18 = L_100;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_18), NULL);
		V_12 = L_101;
		// var thisDirection = (touch1Pos - touch0Pos).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_102, L_103, NULL);
		V_18 = L_104;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_18), NULL);
		V_13 = L_105;
		// var determinant =
		//     (lastDirection.x * thisDirection.y) - (lastDirection.y * thisDirection.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_12;
		float L_107 = L_106.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_13;
		float L_109 = L_108.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_12;
		float L_111 = L_110.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_13;
		float L_113 = L_112.___x_2;
		V_14 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_107, L_109)), ((float)il2cpp_codegen_multiply(L_111, L_113))));
		// RotateByDirections(lastDirection, thisDirection, determinant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_13;
		float L_116 = V_14;
		CameraGestureTracker_RotateByDirections_m0F98AAF78E88A0D2973EED89FFEED619B99FDBBC(__this, L_114, L_115, L_116, NULL);
		// _lastTouch0Position = touch0Pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = V_6;
		__this->____lastTouch0Position_17 = L_117;
		// _lastTouch1Position = touch1Pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_7;
		__this->____lastTouch1Position_18 = L_118;
		// return true;
		return (bool)1;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ProcessZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ProcessZoom_m5E549884F945946E267EAEAB4FD54CAEA0E0C131 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// _isCurrentlyZooming = false;
		__this->____isCurrentlyZooming_15 = (bool)0;
		// return;
		return;
	}

IL_0010:
	{
		// var wasZooming = _isCurrentlyZooming;
		bool L_1 = __this->____isCurrentlyZooming_15;
		V_0 = L_1;
		// _isCurrentlyZooming = false;
		__this->____isCurrentlyZooming_15 = (bool)0;
		// if (!Mathf.Approximately(0.0f, _scrollDelta.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->____scrollDelta_10);
		float L_3 = L_2->___y_1;
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_3, NULL);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		// MouseZoom();
		CameraGestureTracker_MouseZoom_m2C76B4AFA3B0F4E55C25D917C5049697723943E7(__this, NULL);
		// _isCurrentlyZooming = true;
		__this->____isCurrentlyZooming_15 = (bool)1;
	}

IL_0042:
	{
		// if (TouchZoomAndRotate())
		bool L_5;
		L_5 = CameraGestureTracker_TouchZoomAndRotate_mE369C92D18A4D9303C1AE6A836FCDB1416F58F98(__this, NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// _isCurrentlyZooming = true;
		__this->____isCurrentlyZooming_15 = (bool)1;
		goto IL_0064;
	}

IL_0053:
	{
		// else if (wasZooming)
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		// _lastTouch0 = null;
		__this->____lastTouch0_20 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch0_20), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
		// _lastTouch1 = null;
		__this->____lastTouch1_21 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastTouch1_21), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
	}

IL_0064:
	{
		// if (_settings.DoubleTapZoomEnabled && DoubleTapZoom())
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_7 = __this->____settings_22;
		NullCheck(L_7);
		bool L_8 = L_7->___DoubleTapZoomEnabled_3;
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		bool L_9;
		L_9 = CameraGestureTracker_DoubleTapZoom_mC0E8E2B8FEA9AC0CE100219B4B604DDC946955E8(__this, NULL);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// _isCurrentlyZooming = true;
		__this->____isCurrentlyZooming_15 = (bool)1;
		return;
	}

IL_0081:
	{
		// else if (_isCurrentlyZooming)
		bool L_10 = __this->____isCurrentlyZooming_15;
		if (!L_10)
		{
			goto IL_008f;
		}
	}
	{
		// ResetDoubleTapZoom();
		CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD(__this, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ResetDoubleTapZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// _firstZoomTap = null;
		__this->____firstZoomTap_11 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____firstZoomTap_11), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
		// _secondZoomTap = null;
		__this->____secondZoomTap_13 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondZoomTap_13), (void*)(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)NULL);
		// _firstTapEnded = false;
		__this->____firstTapEnded_12 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::DoubleTapZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_DoubleTapZoom_mC0E8E2B8FEA9AC0CE100219B4B604DDC946955E8 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_0_m01718C3580CB6679254E6B7D47611665C95640A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_1_mF1232F1C7F4339D67A5B0D5B23F64F1DA826B4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_2_mE9EB4D0F18B082E9A1D5FD1F69A974C525FA5097_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_3_m978F1B34FA75BC170DA4F0BDC478D6F88C9AF88F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_4_m799A46F6FD8C40E452230040DF774817C4D0D71D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_0 = NULL;
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (
		//     _firstZoomTap != null
		//     && _secondZoomTap == null
		//     && _firstZoomTap.Time < Time.unscaledTime - _settings.DoubleTapMaxTime
		// )
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_1 = __this->____firstZoomTap_11;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = __this->____secondZoomTap_13;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_3 = __this->____firstZoomTap_11;
		NullCheck(L_3);
		float L_4 = L_3->___Time_2;
		float L_5;
		L_5 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_6 = __this->____settings_22;
		NullCheck(L_6);
		float L_7 = L_6->___DoubleTapMaxTime_5;
		if ((!(((float)L_4) < ((float)((float)il2cpp_codegen_subtract(L_5, L_7))))))
		{
			goto IL_003e;
		}
	}
	{
		// ResetDoubleTapZoom();
		CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD(__this, NULL);
	}

IL_003e:
	{
		// if (_firstZoomTap == null)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_8 = __this->____firstZoomTap_11;
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		// _firstZoomTap = _transformationEvents.FirstOrDefault(
		//     ie => ie.Phase == InputPhase.Began && !TransformOverUI(ie.Transform.Value)
		// );
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_9 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_10 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_10, __this, (intptr_t)((void*)CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_0_m01718C3580CB6679254E6B7D47611665C95640A9_RuntimeMethod_var), NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_11;
		L_11 = Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655(L_9, L_10, Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var);
		__this->____firstZoomTap_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____firstZoomTap_11), (void*)L_11);
		// _firstTapEnded = false;
		__this->____firstTapEnded_12 = (bool)0;
		// return false;
		return (bool)0;
	}

IL_006c:
	{
		// if (
		//     _secondZoomTap == null
		//     && _firstZoomTap != null
		//     && Time.unscaledTime - _firstZoomTap.Time > _settings.DoubleTapMaxTime
		// )
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_12 = __this->____secondZoomTap_13;
		if (L_12)
		{
			goto IL_00a2;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_13 = __this->____firstZoomTap_11;
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		float L_14;
		L_14 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_15 = __this->____firstZoomTap_11;
		NullCheck(L_15);
		float L_16 = L_15->___Time_2;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_17 = __this->____settings_22;
		NullCheck(L_17);
		float L_18 = L_17->___DoubleTapMaxTime_5;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_14, L_16))) > ((float)L_18))))
		{
			goto IL_00a2;
		}
	}
	{
		// ResetDoubleTapZoom();
		CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_00a2:
	{
		// if (_firstZoomTap != null && _firstTapEnded == false)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_19 = __this->____firstZoomTap_11;
		if (!L_19)
		{
			goto IL_00cf;
		}
	}
	{
		bool L_20 = __this->____firstTapEnded_12;
		if (L_20)
		{
			goto IL_00cf;
		}
	}
	{
		// _firstTapEnded = _transformationEvents.Any(ie =>
		// {
		//     return ie.Source == _firstZoomTap.Source
		//         && (ie.Phase == InputPhase.Ended || ie.Phase == InputPhase.Canceled);
		// });
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_21 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_22 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_22, __this, (intptr_t)((void*)CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_1_mF1232F1C7F4339D67A5B0D5B23F64F1DA826B4C6_RuntimeMethod_var), NULL);
		bool L_23;
		L_23 = Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16(L_21, L_22, Enumerable_Any_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m5248884E81065B7EAA9A381B272E923B5C536F16_RuntimeMethod_var);
		__this->____firstTapEnded_12 = L_23;
	}

IL_00cf:
	{
		// if (_firstTapEnded && _secondZoomTap == null)
		bool L_24 = __this->____firstTapEnded_12;
		if (!L_24)
		{
			goto IL_012d;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_25 = __this->____secondZoomTap_13;
		if (L_25)
		{
			goto IL_012d;
		}
	}
	{
		// _secondZoomTap = _transformationEvents.FirstOrDefault(
		//     ie => ie.Phase == InputPhase.Began && !TransformOverUI(ie.Transform.Value)
		// );
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_26 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_27 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_27, __this, (intptr_t)((void*)CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_2_mE9EB4D0F18B082E9A1D5FD1F69A974C525FA5097_RuntimeMethod_var), NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_28;
		L_28 = Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655(L_26, L_27, Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var);
		__this->____secondZoomTap_13 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secondZoomTap_13), (void*)L_28);
		// if (_secondZoomTap != null)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_29 = __this->____secondZoomTap_13;
		if (!L_29)
		{
			goto IL_012b;
		}
	}
	{
		// _secondZoomTap.Consume(this);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_30 = __this->____secondZoomTap_13;
		NullCheck(L_30);
		InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996(L_30, __this, NULL);
		// _prevZoomPosition = _secondZoomTap.Transform.Value.Position;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_31 = __this->____secondZoomTap_13;
		NullCheck(L_31);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_32 = (&L_31->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_33;
		L_33 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_32, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___Position_1;
		__this->____prevZoomPosition_19 = L_34;
	}

IL_012b:
	{
		// return true;
		return (bool)1;
	}

IL_012d:
	{
		// if (_firstTapEnded && _firstZoomTap != null && _secondZoomTap != null)
		bool L_35 = __this->____firstTapEnded_12;
		if (!L_35)
		{
			goto IL_01ee;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_36 = __this->____firstZoomTap_11;
		if (!L_36)
		{
			goto IL_01ee;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_37 = __this->____secondZoomTap_13;
		if (!L_37)
		{
			goto IL_01ee;
		}
	}
	{
		// InputEvent duplicateBeganZoomEvent = _transformationEvents.FirstOrDefault(ie =>
		// {
		//     return (
		//         ie.Phase == InputPhase.Began
		//         && ie.Transform.Value.Id == _secondZoomTap.Transform.Value.Id
		//     );
		// });
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_38 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_39 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_39, __this, (intptr_t)((void*)CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_3_m978F1B34FA75BC170DA4F0BDC478D6F88C9AF88F_RuntimeMethod_var), NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_40;
		L_40 = Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655(L_38, L_39, Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var);
		V_0 = L_40;
		// if (duplicateBeganZoomEvent != null)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_41 = V_0;
		if (!L_41)
		{
			goto IL_0172;
		}
	}
	{
		// duplicateBeganZoomEvent.Consume(this);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_42 = V_0;
		NullCheck(L_42);
		InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996(L_42, __this, NULL);
		// return true;
		return (bool)1;
	}

IL_0172:
	{
		// var currentZoomEvent = _transformationEvents.FirstOrDefault(ie =>
		// {
		//     return (
		//         ie.Phase == InputPhase.Held
		//         && ie.Transform.Value.Id == _secondZoomTap.Transform.Value.Id
		//     );
		// });
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_43 = __this->____transformationEvents_14;
		Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93* L_44 = (Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93*)il2cpp_codegen_object_new(Func_2_tE5733986042ACF98DF7C0030BF8E814B03ACCC93_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_2__ctor_m9EE71D810268CA25D5769A53B675377423B23CD5(L_44, __this, (intptr_t)((void*)CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_4_m799A46F6FD8C40E452230040DF774817C4D0D71D_RuntimeMethod_var), NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_45;
		L_45 = Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655(L_43, L_44, Enumerable_FirstOrDefault_TisInputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_m9672159ABFD1DA3A6B0B2A1E9B87E40C95D8E655_RuntimeMethod_var);
		V_1 = L_45;
		// if (currentZoomEvent == null)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_46 = V_1;
		if (L_46)
		{
			goto IL_0195;
		}
	}
	{
		// ResetDoubleTapZoom();
		CameraGestureTracker_ResetDoubleTapZoom_m32783E23864EE1367C0BCCB5B5BD41881AE138FD(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0195:
	{
		// currentZoomEvent.Consume(this);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_47 = V_1;
		NullCheck(L_47);
		InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996(L_47, __this, NULL);
		// var newZoomPosition = currentZoomEvent.Transform.Value.Position;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_48 = V_1;
		NullCheck(L_48);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_49 = (&L_48->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_50;
		L_50 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_49, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = L_50.___Position_1;
		V_2 = L_51;
		// if (currentZoomEvent.Phase == InputPhase.Held)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53 = L_52->___Phase_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			goto IL_01e5;
		}
	}
	{
		// ZoomFraction = Mathf.Clamp01(
		//     ZoomFraction
		//         - (newZoomPosition - _prevZoomPosition).y
		//             * _settings.DoubleTapZoomSpeed
		// );
		float L_54;
		L_54 = CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->____prevZoomPosition_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_55, L_56, NULL);
		float L_58 = L_57.___y_3;
		Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* L_59 = __this->____settings_22;
		NullCheck(L_59);
		float L_60 = L_59->___DoubleTapZoomSpeed_4;
		float L_61;
		L_61 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract(L_54, ((float)il2cpp_codegen_multiply(L_58, L_60)))), NULL);
		CameraGestureTracker_set_ZoomFraction_m742077B01841B8B045A145F0F61096C3527F41E5(__this, L_61, NULL);
	}

IL_01e5:
	{
		// _prevZoomPosition = newZoomPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_2;
		__this->____prevZoomPosition_19 = L_62;
		// return true;
		return (bool)1;
	}

IL_01ee:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::TransformOverUI(Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___inputTransform0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var inputPos = new Vector2(
		//     inputTransform.Position[0] * Screen.width,
		//     inputTransform.Position[1] * Screen.height
		// );
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_0 = ___inputTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___Position_1;
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_0), 0, NULL);
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4 = ___inputTransform0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___Position_1;
		V_0 = L_5;
		float L_6;
		L_6 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_0), 1, NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_2, ((float)L_3))), ((float)il2cpp_codegen_multiply(L_6, ((float)L_7))), /*hidden argument*/NULL);
		// return GuiUtil.IsScreenPositionOverUi(inputPos);
		bool L_9;
		L_9 = GuiUtil_IsScreenPositionOverUi_m22940AF7DBE9C78C4A0B936232EEF2820E21E6B7(L_8, NULL);
		return L_9;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ProcessSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ProcessSwipe_m17EA34247019500D1C2CFAB031C98DA9F232F8D5 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_1 = NULL;
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// _wasRotatingLastFrame = false;
		__this->____wasRotatingLastFrame_16 = (bool)0;
		// return;
		return;
	}

IL_0010:
	{
		// var currentlyRotating = IsCurrentlyRotating;
		bool L_1;
		L_1 = CameraGestureTracker_get_IsCurrentlyRotating_m9BC384A27BB43C8BC39A86125E78CE22597432FA(__this, NULL);
		V_0 = L_1;
		// if (currentlyRotating)
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_016d;
		}
	}
	{
		// var touch = _transformationEvents[0];
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_3 = __this->____transformationEvents_14;
		NullCheck(L_3);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_4;
		L_4 = List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D(L_3, 0, List_1_get_Item_m65E1538650756C13CB66BB2E2002D5A7EFD84C7D_RuntimeMethod_var);
		V_1 = L_4;
		// var inputTransform = touch.Transform.Value;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_5 = V_1;
		NullCheck(L_5);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_6 = (&L_5->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_7;
		L_7 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_6, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		V_2 = L_7;
		// if (!_wasRotatingLastFrame)
		bool L_8 = __this->____wasRotatingLastFrame_16;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		// if (touch.Phase != InputPhase.Began || TransformOverUI(inputTransform))
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Phase_1;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_11 = V_2;
		bool L_12;
		L_12 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_0050;
		}
	}

IL_004f:
	{
		// return;
		return;
	}

IL_0050:
	{
		// var swipePosition = inputTransform.Position;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_13 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___Position_1;
		V_3 = L_14;
		// if (_lastSwipeFrame != Time.frameCount - 1)
		int32_t L_15 = __this->____lastSwipeFrame_9;
		int32_t L_16;
		L_16 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_006d;
		}
	}
	{
		// _lastSwipePosition = swipePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		__this->____lastSwipePosition_8 = L_17;
	}

IL_006d:
	{
		// var touchRay = _raycastCamera.ViewportPointToRay(swipePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = __this->____raycastCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		NullCheck(L_18);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_20;
		L_20 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_18, L_19, NULL);
		V_4 = L_20;
		// var lastTouchRay = _raycastCamera.ViewportPointToRay(_lastSwipePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = __this->____raycastCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->____lastSwipePosition_8;
		NullCheck(L_21);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_23;
		L_23 = Camera_ViewportPointToRay_m54F3994B010EFAC642F3C0E367370483B9DBF0F4(L_21, L_22, NULL);
		V_5 = L_23;
		// touchRay.direction = ClampDirToGround(touchRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = CameraGestureTracker_ClampDirToGround_m1F0E02F9B6F7DB99004440A24F7A19938F9CD864(__this, L_24, NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98((&V_4), L_25, NULL);
		// lastTouchRay.direction = ClampDirToGround(lastTouchRay.direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_5), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = CameraGestureTracker_ClampDirToGround_m1F0E02F9B6F7DB99004440A24F7A19938F9CD864(__this, L_26, NULL);
		Ray_set_direction_m8A8FF8101045BAE51BE5D5C1B6C21D0D5592DA98((&V_5), L_27, NULL);
		// GroundPlane.Raycast(touchRay, out rayDist);
		il2cpp_codegen_runtime_class_init_inline(CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_28 = ((CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_StaticFields*)il2cpp_codegen_static_fields_for(CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var))->___GroundPlane_4;
		V_11 = L_28;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_29 = V_4;
		bool L_30;
		L_30 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_11), L_29, (&V_6), NULL);
		// GroundPlane.Raycast(lastTouchRay, out lastRayDist);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_31 = ((CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_StaticFields*)il2cpp_codegen_static_fields_for(CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var))->___GroundPlane_4;
		V_11 = L_31;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_32 = V_5;
		bool L_33;
		L_33 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_11), L_32, (&V_7), NULL);
		// var groundTouch = touchRay.GetPoint(rayDist);
		float L_34 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_4), L_34, NULL);
		// var lastGroundTouch = lastTouchRay.GetPoint(lastRayDist);
		float L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_5), L_36, NULL);
		// var centerToLast = (lastGroundTouch - _focusObject.transform.position).normalized;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->____focusObject_6;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_37, L_40, NULL);
		V_12 = L_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		V_8 = L_42;
		// var centerToThis = (groundTouch - _focusObject.transform.position).normalized;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->____focusObject_6;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_45, NULL);
		V_12 = L_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		V_9 = L_47;
		// var determinant =
		//     (centerToLast.x * centerToThis.z) - (centerToLast.z * centerToThis.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_8;
		float L_49 = L_48.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_9;
		float L_51 = L_50.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_8;
		float L_53 = L_52.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_9;
		float L_55 = L_54.___x_2;
		V_10 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55))));
		// RotateByDirections(centerToLast, centerToThis, determinant);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_9;
		float L_58 = V_10;
		CameraGestureTracker_RotateByDirections_m0F98AAF78E88A0D2973EED89FFEED619B99FDBBC(__this, L_56, L_57, L_58, NULL);
		// _lastSwipePosition = swipePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_3;
		__this->____lastSwipePosition_8 = L_59;
		// _lastSwipeFrame = Time.frameCount;
		int32_t L_60;
		L_60 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->____lastSwipeFrame_9 = L_60;
	}

IL_016d:
	{
		// _wasRotatingLastFrame = currentlyRotating;
		bool L_61 = V_0;
		__this->____wasRotatingLastFrame_16 = L_61;
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::RotateByDirections(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_RotateByDirections_m0F98AAF78E88A0D2973EED89FFEED619B99FDBBC (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___directionB1, float ___direction2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (
		//     Mathf.Approximately(directionA.magnitude, 0.0f)
		//     || Mathf.Approximately(directionB.magnitude, 0.0f)
		// )
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___directionA0), NULL);
		bool L_1;
		L_1 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_0, (0.0f), NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___directionB1), NULL);
		bool L_3;
		L_3 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_2, (0.0f), NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}

IL_0026:
	{
		// return;
		return;
	}

IL_0027:
	{
		// var dot = Vector3.Dot(directionA, directionB);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___directionA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___directionB1;
		float L_6;
		L_6 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_4, L_5, NULL);
		V_0 = L_6;
		// if (!Mathf.Approximately(1.0f, dot))
		float L_7 = V_0;
		bool L_8;
		L_8 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((1.0f), L_7, NULL);
		if (L_8)
		{
			goto IL_0080;
		}
	}
	{
		// var angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
		float L_9 = V_0;
		float L_10;
		L_10 = acosf(L_9);
		V_1 = ((float)il2cpp_codegen_multiply(L_10, (57.2957802f)));
		// if (direction < 0.0f)
		float L_11 = ___direction2;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// angle *= -1.0f;
		float L_12 = V_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_12, (-1.0f)));
	}

IL_0059:
	{
		// RotationAngleDegrees += angle;
		float L_13;
		L_13 = CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline(__this, NULL);
		float L_14 = V_1;
		CameraGestureTracker_set_RotationAngleDegrees_mD6B5F72C0C7C9282A7CE08C46AA79E49E783F11C(__this, ((float)il2cpp_codegen_add(L_13, L_14)), NULL);
		// if (ManuallyRotated != null)
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_15 = __this->___ManuallyRotated_2;
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		// ManuallyRotated(RotationAngleDegrees);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_16 = __this->___ManuallyRotated_2;
		float L_17;
		L_17 = CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline(__this, NULL);
		NullCheck(L_16);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(L_16, L_17, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ProcessEvent(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_ProcessEvent_mFA12C0CDF2C109EF71C1E30E9A3EA8F6B85FDEF4 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___inputEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (inputEvent.Transform.HasValue)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_1 = ___inputEvent0;
		NullCheck(L_1);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_2 = (&L_1->___Transform_4);
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_inline(L_2, Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// _transformationEvents.Add(inputEvent);
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_4 = __this->____transformationEvents_14;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_5 = ___inputEvent0;
		NullCheck(L_4);
		List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_inline(L_4, L_5, List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
	}

IL_0022:
	{
		// if (inputEvent.ScrollDelta.HasValue)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = ___inputEvent0;
		NullCheck(L_6);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_7 = (&L_6->___ScrollDelta_7);
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_7, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// _scrollDelta += inputEvent.ScrollDelta.Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->____scrollDelta_10;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_10 = ___inputEvent0;
		NullCheck(L_10);
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_11 = (&L_10->___ScrollDelta_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_11, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_9, L_12, NULL);
		__this->____scrollDelta_10 = L_13;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::PostProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker_PostProcessInput_m4FE1072FB948F15C125ABE96F7CA227128FCCDF4 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GesturesEnabled)
		bool L_0;
		L_0 = CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// ProcessZoom();
		CameraGestureTracker_ProcessZoom_m5E549884F945946E267EAEAB4FD54CAEA0E0C131(__this, NULL);
		// ProcessSwipe();
		CameraGestureTracker_ProcessSwipe_m17EA34247019500D1C2CFAB031C98DA9F232F8D5(__this, NULL);
		// _transformationEvents.Clear();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_1 = __this->____transformationEvents_14;
		NullCheck(L_1);
		List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_inline(L_1, List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		// _scrollDelta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->____scrollDelta_10 = L_2;
		// }
		return;
	}
}
// System.String Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CameraGestureTracker_ToString_m6277CE5E389B6F83EF7F012B6F6D737761DF4BEE (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C8D7BA5CA6B8DB1717F6F1C1DEC3AE49B7A72CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "MapCameraGesture: [Rotating: {0}, Zooming: {1}]\n" + "ZoomRatio:{2} Angle: {3}",
		//     _wasRotatingLastFrame,
		//     _isCurrentlyZooming,
		//     ZoomFraction,
		//     RotationAngleDegrees
		// );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->____wasRotatingLastFrame_16;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		bool L_6 = __this->____isCurrentlyZooming_15;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10;
		L_10 = CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline(__this, NULL);
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14;
		L_14 = CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline(__this, NULL);
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral3C8D7BA5CA6B8DB1717F6F1C1DEC3AE49B7A72CC, L_13, NULL);
		return L_17;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraGestureTracker__cctor_m30D42F0D62A7FBBB392DF83B66E14A6FED4EC80D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Plane GroundPlane = new Plane(Vector3.up, 0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_1;
		memset((&L_1), 0, sizeof(L_1));
		Plane__ctor_mACA7F957A13DD97953808B8E0CF95EAD7D39463E((&L_1), L_0, (0.0f), /*hidden argument*/NULL);
		((CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_StaticFields*)il2cpp_codegen_static_fields_for(CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163_il2cpp_TypeInfo_var))->___GroundPlane_4 = L_1;
		return;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<MouseZoom>b__45_0(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CMouseZoomU3Eb__45_0_m83FEBAE8CC44C2B8FB6936A2CB423AC999EFFB43 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_transformationEvents.Any(e => TransformOverUI(e.Transform.Value)))
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___e0;
		NullCheck(L_0);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_1 = (&L_0->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_2;
		L_2 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_1, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		bool L_3;
		L_3 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<DoubleTapZoom>b__49_0(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_0_m01718C3580CB6679254E6B7D47611665C95640A9 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___ie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ie => ie.Phase == InputPhase.Began && !TransformOverUI(ie.Transform.Value)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___ie0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Phase_1;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = ___ie0;
		NullCheck(L_2);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_3 = (&L_2->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4;
		L_4 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_3, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		bool L_5;
		L_5 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<DoubleTapZoom>b__49_1(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_1_mF1232F1C7F4339D67A5B0D5B23F64F1DA826B4C6 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___ie0, const RuntimeMethod* method) 
{
	{
		// return ie.Source == _firstZoomTap.Source
		//     && (ie.Phase == InputPhase.Ended || ie.Phase == InputPhase.Canceled);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___ie0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___Source_6;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = __this->____firstZoomTap_11;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___Source_6;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_4 = ___ie0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Phase_1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = ___ie0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Phase_1;
		return (bool)((((int32_t)L_7) == ((int32_t)4))? 1 : 0);
	}

IL_0026:
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<DoubleTapZoom>b__49_2(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_2_mE9EB4D0F18B082E9A1D5FD1F69A974C525FA5097 (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___ie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ie => ie.Phase == InputPhase.Began && !TransformOverUI(ie.Transform.Value)
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___ie0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Phase_1;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = ___ie0;
		NullCheck(L_2);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_3 = (&L_2->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4;
		L_4 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_3, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		bool L_5;
		L_5 = CameraGestureTracker_TransformOverUI_m11224223628324BCD9EBC326A9FD688D8A521C6C(__this, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<DoubleTapZoom>b__49_3(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_3_m978F1B34FA75BC170DA4F0BDC478D6F88C9AF88F (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___ie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (
		//     ie.Phase == InputPhase.Began
		//     && ie.Transform.Value.Id == _secondZoomTap.Transform.Value.Id
		// );
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___ie0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Phase_1;
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = ___ie0;
		NullCheck(L_2);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_3 = (&L_2->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4;
		L_4 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_3, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_5 = L_4.___Id_0;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = __this->____secondZoomTap_13;
		NullCheck(L_6);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_7 = (&L_6->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_8;
		L_8 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_7, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_9 = L_8.___Id_0;
		return (bool)((((int32_t)L_5) == ((int32_t)L_9))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker::<DoubleTapZoom>b__49_4(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraGestureTracker_U3CDoubleTapZoomU3Eb__49_4_m799A46F6FD8C40E452230040DF774817C4D0D71D (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___ie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (
		//     ie.Phase == InputPhase.Held
		//     && ie.Transform.Value.Id == _secondZoomTap.Transform.Value.Id
		// );
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___ie0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Phase_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_2 = ___ie0;
		NullCheck(L_2);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_3 = (&L_2->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_4;
		L_4 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_3, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_5 = L_4.___Id_0;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = __this->____secondZoomTap_13;
		NullCheck(L_6);
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_7 = (&L_6->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_8;
		L_8 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_7, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		uint32_t L_9 = L_8.___Id_0;
		return (bool)((((int32_t)L_5) == ((int32_t)L_9))? 1 : 0);
	}

IL_0031:
	{
		return (bool)0;
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CameraGestureTracker/Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_mA515E41FE6F6AFAA826308D80185E54DA393C888 (Settings_tDBBEAC9EC9F5156C8A9E781F75B518CA3CA0ECB8* __this, const RuntimeMethod* method) 
{
	{
		// public float DefaultZoom = 0.75f;
		__this->___DefaultZoom_0 = (0.75f);
		// public float MouseScrollZoomSpeed = 1.5f;
		__this->___MouseScrollZoomSpeed_1 = (1.5f);
		// public float TouchPinchZoomSpeed = 2.0f;
		__this->___TouchPinchZoomSpeed_2 = (2.0f);
		// public float DoubleTapZoomSpeed = 6.0f;
		__this->___DoubleTapZoomSpeed_4 = (6.0f);
		// public float DoubleTapMaxTime = 0.5f;
		__this->___DoubleTapMaxTime_5 = (0.5f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMathSupport_Clamp_m5485113B9B59355B9BDFC123D8B74031A2160AF3 (float ___value0, float ___minValue1, float ___maxValue2, const RuntimeMethod* method) 
{
	{
		// if (value < minValue)
		float L_0 = ___value0;
		float L_1 = ___minValue1;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		// return minValue;
		float L_2 = ___minValue1;
		return L_2;
	}

IL_0006:
	{
		// if (value > maxValue)
		float L_3 = ___value0;
		float L_4 = ___maxValue2;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_000c;
		}
	}
	{
		// return maxValue;
		float L_5 = ___maxValue2;
		return L_5;
	}

IL_000c:
	{
		// return value;
		float L_6 = ___value0;
		return L_6;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61 (float ___value0, float ___minInValue1, float ___maxInValue2, float ___minOutValue3, float ___maxOutValue4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float inFrac = (value - minInValue) / (maxInValue - minInValue);
		float L_0 = ___value0;
		float L_1 = ___minInValue1;
		float L_2 = ___maxInValue2;
		float L_3 = ___minInValue1;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/((float)il2cpp_codegen_subtract(L_2, L_3))));
		// return (maxOutValue - minOutValue) * inFrac + minOutValue;
		float L_4 = ___maxOutValue4;
		float L_5 = ___minOutValue3;
		float L_6 = V_0;
		float L_7 = ___minOutValue3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, L_5)), L_6)), L_7));
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport::WrapAngleDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraMathSupport_WrapAngleDegrees_m51C7A43504A5054BD04D83C702DA8E47A75180EF (float ___degrees0, const RuntimeMethod* method) 
{
	{
		goto IL_000b;
	}

IL_0002:
	{
		// degrees -= 360;
		float L_0 = ___degrees0;
		___degrees0 = ((float)il2cpp_codegen_subtract(L_0, (360.0f)));
	}

IL_000b:
	{
		// while (degrees > 180)
		float L_1 = ___degrees0;
		if ((((float)L_1) > ((float)(180.0f))))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_001e;
	}

IL_0015:
	{
		// degrees += 360;
		float L_2 = ___degrees0;
		___degrees0 = ((float)il2cpp_codegen_add(L_2, (360.0f)));
	}

IL_001e:
	{
		// while (degrees < -180)
		float L_3 = ___degrees0;
		if ((((float)L_3) < ((float)(-180.0f))))
		{
			goto IL_0015;
		}
	}
	{
		// return degrees;
		float L_4 = ___degrees0;
		return L_4;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.CameraMathSupport::WithinEpsilon(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraMathSupport_WithinEpsilon_mF63EAD745DDF30C329340F72DAFAD0C309C2512D (float ___value0, float ___epsilon1, const RuntimeMethod* method) 
{
	{
		// return (Mathf.Abs(value) < epsilon);
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		float L_2 = ___epsilon1;
		return (bool)((((float)L_1) < ((float)L_2))? 1 : 0);
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
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.GuiUtil::IsScreenPositionOverUi(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GuiUtil_IsScreenPositionOverUi_m22940AF7DBE9C78C4A0B936232EEF2820E21E6B7 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	{
		// if (EventSystem.current != null)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// var pointer = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_3, L_2, NULL);
		V_0 = L_3;
		// pointer.position = inputPos;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___inputPos0;
		NullCheck(L_4);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_4, L_5, NULL);
		// var raycastResults = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_6 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_6, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_6;
		// EventSystem.current.RaycastAll(pointer, raycastResults);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_7;
		L_7 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_9 = V_1;
		NullCheck(L_7);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_7, L_8, L_9, NULL);
		// if (raycastResults.Count > 0)
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_10, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// return false;
		return (bool)0;
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
// Niantic.Platform.Util.OrbitCameraInternal.IGesture Niantic.Platform.Util.OrbitCameraInternal.InputEvent::get_ConsumedBy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, const RuntimeMethod* method) 
{
	{
		// public IGesture ConsumedBy { get; private set; }
		RuntimeObject* L_0 = __this->___U3CConsumedByU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::set_ConsumedBy(Niantic.Platform.Util.OrbitCameraInternal.IGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent_set_ConsumedBy_m44EE46DE45C42A208850763F3BA7EFC4CF14A71A (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IGesture ConsumedBy { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CConsumedByU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConsumedByU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,System.Nullable`1<UnityEngine.Vector2>,System.Nullable`1<Niantic.Platform.Util.OrbitCameraInternal.TransformData>,System.Nullable`1<UnityEngine.KeyCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66 (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD ___scrollDelta4, Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 ___transform5, Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 ___key6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private InputEvent(
		//     IInputSource source,
		//     InputPhase phase,
		//     float time,
		//     float deltaTime,
		//     Vector2? scrollDelta,
		//     TransformData? transform,
		//     KeyCode? key
		// )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Uid = nextId++;
		uint32_t L_0 = ((InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_StaticFields*)il2cpp_codegen_static_fields_for(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var))->___nextId_9;
		uint32_t L_1 = L_0;
		((InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_StaticFields*)il2cpp_codegen_static_fields_for(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var))->___nextId_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, 1));
		__this->___Uid_0 = L_1;
		// Source = source;
		RuntimeObject* L_2 = ___source0;
		__this->___Source_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Source_6), (void*)L_2);
		// Phase = phase;
		int32_t L_3 = ___phase1;
		__this->___Phase_1 = L_3;
		// Transform = transform;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_4 = ___transform5;
		__this->___Transform_4 = L_4;
		// Key = key;
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_5 = ___key6;
		__this->___Key_5 = L_5;
		// Time = time;
		float L_6 = ___time2;
		__this->___Time_2 = L_6;
		// DeltaTime = deltaTime;
		float L_7 = ___deltaTime3;
		__this->___DeltaTime_3 = L_7;
		// ScrollDelta = scrollDelta;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_8 = ___scrollDelta4;
		__this->___ScrollDelta_7 = L_8;
		// ConsumedBy = null;
		InputEvent_set_ConsumedBy_m44EE46DE45C42A208850763F3BA7EFC4CF14A71A_inline(__this, (RuntimeObject*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m3EC58622415E8D42F8722BAE1752FCAB0D16FFAB (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ) : this(source, phase, time, deltaTime, null, transform, null) { }
		RuntimeObject* L_0 = ___source0;
		int32_t L_1 = ___phase1;
		float L_2 = ___time2;
		float L_3 = ___deltaTime3;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4 = V_0;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_5 = ___transform4;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6));
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_7 = V_1;
		InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66(__this, L_0, L_1, L_2, L_3, L_4, L_6, L_7, NULL);
		// ) : this(source, phase, time, deltaTime, null, transform, null) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,UnityEngine.Vector2,Niantic.Platform.Util.OrbitCameraInternal.TransformData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m30B79461479818E4943676DBBFB4C1034595901F (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollDelta4, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ) : this(source, phase, time, deltaTime, scrollDelta, transform, null) { }
		RuntimeObject* L_0 = ___source0;
		int32_t L_1 = ___phase1;
		float L_2 = ___time2;
		float L_3 = ___deltaTime3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___scrollDelta4;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_6 = ___transform5;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6));
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_8 = V_0;
		InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66(__this, L_0, L_1, L_2, L_3, L_5, L_7, L_8, NULL);
		// ) : this(source, phase, time, deltaTime, scrollDelta, transform, null) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m035B34A65639531D1393D0FAF558DCC6F83268DE (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, int32_t ___key4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// ) : this(source, phase, time, deltaTime, null, null, key) { }
		RuntimeObject* L_0 = ___source0;
		int32_t L_1 = ___phase1;
		float L_2 = ___time2;
		float L_3 = ___deltaTime3;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89));
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_5 = V_1;
		int32_t L_6 = ___key4;
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_7, NULL);
		// ) : this(source, phase, time, deltaTime, null, null, key) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,Niantic.Platform.Util.OrbitCameraInternal.TransformData,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m88751EAB3DEDF25BB18ED51B181917189564BFE0 (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform4, int32_t ___key5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ) : this(source, phase, time, deltaTime, null, transform, key) { }
		RuntimeObject* L_0 = ___source0;
		int32_t L_1 = ___phase1;
		float L_2 = ___time2;
		float L_3 = ___deltaTime3;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD));
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_4 = V_0;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_5 = ___transform4;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		int32_t L_7 = ___key5;
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66(__this, L_0, L_1, L_2, L_3, L_4, L_6, L_8, NULL);
		// ) : this(source, phase, time, deltaTime, null, transform, key) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::.ctor(Niantic.Platform.Util.OrbitCameraInternal.IInputSource,Niantic.Platform.Util.OrbitCameraInternal.InputPhase,System.Single,System.Single,UnityEngine.Vector2,Niantic.Platform.Util.OrbitCameraInternal.TransformData,UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent__ctor_m479FFCF381C53504B233ADE71CA8E6DAB8C1C7DC (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___source0, int32_t ___phase1, float ___time2, float ___deltaTime3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollDelta4, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE ___transform5, int32_t ___key6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ) : this(source, phase, time, deltaTime, scrollDelta, transform, (KeyCode?)key) { }
		RuntimeObject* L_0 = ___source0;
		int32_t L_1 = ___phase1;
		float L_2 = ___time2;
		float L_3 = ___deltaTime3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___scrollDelta4;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m5B4AD6C29FA5950EF6C215B9A459707DCC95EF73_RuntimeMethod_var);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_6 = ___transform5;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m038BA8491D2F089E1501038E477F8B3569773573_RuntimeMethod_var);
		int32_t L_8 = ___key6;
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m1754BED790C7314610B00D6F0B9A53F8BE7205AF_RuntimeMethod_var);
		InputEvent__ctor_m096F41DD521111404F825F47C38CFB371C98FB66(__this, L_0, L_1, L_2, L_3, L_5, L_7, L_9, NULL);
		// ) : this(source, phase, time, deltaTime, scrollDelta, transform, (KeyCode?)key) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputEvent::Consume(Niantic.Platform.Util.OrbitCameraInternal.IGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996 (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___consumer0, const RuntimeMethod* method) 
{
	{
		// if (ConsumedBy != null)
		RuntimeObject* L_0;
		L_0 = InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("InputEvent already consumed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralACA4177654EED43F22A01C4DC869C1E8CBF9AD23)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996_RuntimeMethod_var)));
	}

IL_0013:
	{
		// ConsumedBy = consumer;
		RuntimeObject* L_2 = ___consumer0;
		InputEvent_set_ConsumedBy_m44EE46DE45C42A208850763F3BA7EFC4CF14A71A_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String Niantic.Platform.Util.OrbitCameraInternal.InputEvent::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputEvent_ToString_m7A235B4354720D32A71A08AB565B3D641EF0F33C (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPhase_t0370E0DC4C51DCC5D2139A2CFAEF2449C794704A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0556E1E1B47AAD37AF86A1F87EADCCFF8BCE3AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C6D54454F4E1F312355291A3209AC6D7FEC5032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B45600C34FD074B524448E8BFC1F30760FEA33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE1077C61599710798A46E033DBA6E126E0DC2C0);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var s = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// s.AppendFormat(
		//     "[InputEvent({0}): Src: {1}, Phase: {2}, T: {3}, dT: {4}",
		//     Uid,
		//     Source.GetType().Name,
		//     Phase,
		//     Time,
		//     DeltaTime
		// );
		StringBuilder_t* L_1 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint32_t L_4 = __this->___Uid_0;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		RuntimeObject* L_8 = __this->___Source_6;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12 = __this->___Phase_1;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(InputPhase_t0370E0DC4C51DCC5D2139A2CFAEF2449C794704A_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		float L_16 = __this->___Time_2;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_15;
		float L_20 = __this->___DeltaTime_3;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		NullCheck(L_1);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_AppendFormat_m14CB447291E6149BCF32E5E37DA21514BAD9C151(L_1, _stringLiteral88B45600C34FD074B524448E8BFC1F30760FEA33, L_19, NULL);
		// if (Key.HasValue)
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* L_24 = (&__this->___Key_5);
		bool L_25;
		L_25 = Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_inline(L_24, Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_RuntimeMethod_var);
		if (!L_25)
		{
			goto IL_0093;
		}
	}
	{
		// s.Append(", Key:");
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral3C6D54454F4E1F312355291A3209AC6D7FEC5032, NULL);
		// s.Append(Key.Value);
		StringBuilder_t* L_28 = V_0;
		Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* L_29 = (&__this->___Key_5);
		int32_t L_30;
		L_30 = Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD(L_29, Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD_RuntimeMethod_var);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = Box(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_28);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_28, L_32, NULL);
	}

IL_0093:
	{
		// if (Transform.HasValue)
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_34 = (&__this->___Transform_4);
		bool L_35;
		L_35 = Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_inline(L_34, Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00c3;
		}
	}
	{
		// s.Append(", Transform: ");
		StringBuilder_t* L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralFE1077C61599710798A46E033DBA6E126E0DC2C0, NULL);
		// s.Append(Transform.Value);
		StringBuilder_t* L_38 = V_0;
		Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* L_39 = (&__this->___Transform_4);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_40;
		L_40 = Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5(L_39, Nullable_1_get_Value_mA56B52B7B7FBECC09ACCCC8C2FFEA3B763564EA5_RuntimeMethod_var);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_41 = L_40;
		RuntimeObject* L_42 = Box(TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_38);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_38, L_42, NULL);
	}

IL_00c3:
	{
		// if (ScrollDelta.HasValue)
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_44 = (&__this->___ScrollDelta_7);
		bool L_45;
		L_45 = Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_inline(L_44, Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_RuntimeMethod_var);
		if (!L_45)
		{
			goto IL_00fb;
		}
	}
	{
		// s.Append(", Scroll: ");
		StringBuilder_t* L_46 = V_0;
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, _stringLiteral0556E1E1B47AAD37AF86A1F87EADCCFF8BCE3AF2, NULL);
		// s.Append(ScrollDelta.Value.ToString("f2"));
		StringBuilder_t* L_48 = V_0;
		Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* L_49 = (&__this->___ScrollDelta_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7(L_49, Nullable_1_get_Value_m47B6E93739E8A6B3D44D7C08DC7D385D35F0D1F7_RuntimeMethod_var);
		V_1 = L_50;
		String_t* L_51;
		L_51 = Vector2_ToString_m5F3C7B1C542DAF4CE90DDAB02A633AB0A3B08A05((&V_1), _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, NULL);
		NullCheck(L_48);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_48, L_51, NULL);
	}

IL_00fb:
	{
		// s.Append("]");
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		// return s.ToString();
		StringBuilder_t* L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		return L_56;
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
// Conversion methods for marshalling of: Niantic.Platform.Util.OrbitCameraInternal.TransformData
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_pinvoke(const TransformData_t0205120723B8549506451C193ECF90E0A6838DEE& unmarshaled, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_pinvoke& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Position_1 = unmarshaled.___Position_1;
	marshaled.___DeltaPosition_2 = unmarshaled.___DeltaPosition_2;
	marshaled.___OverUI_3 = static_cast<int32_t>(unmarshaled.___OverUI_3);
}
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_pinvoke_back(const TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_pinvoke& marshaled, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE& unmarshaled)
{
	uint32_t unmarshaledId_temp_0 = 0;
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPosition_temp_1;
	memset((&unmarshaledPosition_temp_1), 0, sizeof(unmarshaledPosition_temp_1));
	unmarshaledPosition_temp_1 = marshaled.___Position_1;
	unmarshaled.___Position_1 = unmarshaledPosition_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledDeltaPosition_temp_2;
	memset((&unmarshaledDeltaPosition_temp_2), 0, sizeof(unmarshaledDeltaPosition_temp_2));
	unmarshaledDeltaPosition_temp_2 = marshaled.___DeltaPosition_2;
	unmarshaled.___DeltaPosition_2 = unmarshaledDeltaPosition_temp_2;
	bool unmarshaledOverUI_temp_3 = false;
	unmarshaledOverUI_temp_3 = static_cast<bool>(marshaled.___OverUI_3);
	unmarshaled.___OverUI_3 = unmarshaledOverUI_temp_3;
}
// Conversion method for clean up from marshalling of: Niantic.Platform.Util.OrbitCameraInternal.TransformData
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_pinvoke_cleanup(TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Niantic.Platform.Util.OrbitCameraInternal.TransformData
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_com(const TransformData_t0205120723B8549506451C193ECF90E0A6838DEE& unmarshaled, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_com& marshaled)
{
	marshaled.___Id_0 = unmarshaled.___Id_0;
	marshaled.___Position_1 = unmarshaled.___Position_1;
	marshaled.___DeltaPosition_2 = unmarshaled.___DeltaPosition_2;
	marshaled.___OverUI_3 = static_cast<int32_t>(unmarshaled.___OverUI_3);
}
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_com_back(const TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_com& marshaled, TransformData_t0205120723B8549506451C193ECF90E0A6838DEE& unmarshaled)
{
	uint32_t unmarshaledId_temp_0 = 0;
	unmarshaledId_temp_0 = marshaled.___Id_0;
	unmarshaled.___Id_0 = unmarshaledId_temp_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledPosition_temp_1;
	memset((&unmarshaledPosition_temp_1), 0, sizeof(unmarshaledPosition_temp_1));
	unmarshaledPosition_temp_1 = marshaled.___Position_1;
	unmarshaled.___Position_1 = unmarshaledPosition_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledDeltaPosition_temp_2;
	memset((&unmarshaledDeltaPosition_temp_2), 0, sizeof(unmarshaledDeltaPosition_temp_2));
	unmarshaledDeltaPosition_temp_2 = marshaled.___DeltaPosition_2;
	unmarshaled.___DeltaPosition_2 = unmarshaledDeltaPosition_temp_2;
	bool unmarshaledOverUI_temp_3 = false;
	unmarshaledOverUI_temp_3 = static_cast<bool>(marshaled.___OverUI_3);
	unmarshaled.___OverUI_3 = unmarshaledOverUI_temp_3;
}
// Conversion method for clean up from marshalling of: Niantic.Platform.Util.OrbitCameraInternal.TransformData
IL2CPP_EXTERN_C void TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshal_com_cleanup(TransformData_t0205120723B8549506451C193ECF90E0A6838DEE_marshaled_com& marshaled)
{
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.TransformData::.ctor(System.UInt32,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219 (TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* __this, uint32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___deltaPosition2, bool ___overUI3, const RuntimeMethod* method) 
{
	{
		// Id = id;
		uint32_t L_0 = ___id0;
		__this->___Id_0 = L_0;
		// Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		__this->___Position_1 = L_1;
		// DeltaPosition = deltaPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___deltaPosition2;
		__this->___DeltaPosition_2 = L_2;
		// OverUI = overUI;
		bool L_3 = ___overUI3;
		__this->___OverUI_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219_AdjustorThunk (RuntimeObject* __this, uint32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___deltaPosition2, bool ___overUI3, const RuntimeMethod* method)
{
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformData_t0205120723B8549506451C193ECF90E0A6838DEE*>(__this + _offset);
	TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219(_thisAdjusted, ___id0, ___position1, ___deltaPosition2, ___overUI3, method);
}
// System.String Niantic.Platform.Util.OrbitCameraInternal.TransformData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransformData_ToString_mA1E756B3F220CEB33431F45BD6D076A1C4F75D05 (TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EC221488F77FC4EF6BEC64A974E8A08ED973FF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return string.Format(
		//     "[TransformData({0}): Pos: {1}, dPos: {2}, OnUI: {3}]",
		//     Id,
		//     Position.ToString("f3"),
		//     DeltaPosition.ToString("f3"),
		//     OverUI
		// );
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint32_t L_2 = __this->___Id_0;
		uint32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___Position_1;
		V_0 = L_6;
		String_t* L_7;
		L_7 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1((&V_0), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___DeltaPosition_2;
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1((&V_0), _stringLiteralD131397F1FB7BFF3B5A8A63CC32384739F6D42AC, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_8;
		bool L_12 = __this->___OverUI_3;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral2EC221488F77FC4EF6BEC64A974E8A08ED973FF7, L_11, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* TransformData_ToString_mA1E756B3F220CEB33431F45BD6D076A1C4F75D05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TransformData_t0205120723B8549506451C193ECF90E0A6838DEE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TransformData_t0205120723B8549506451C193ECF90E0A6838DEE*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TransformData_ToString_mA1E756B3F220CEB33431F45BD6D076A1C4F75D05(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::add_BackButtonPressed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_add_BackButtonPressed_m2BFAD3C5E769A05F57F8686AE5944544BA71D167 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___BackButtonPressed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___BackButtonPressed_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::remove_BackButtonPressed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_remove_BackButtonPressed_mA0355001AE939D6D1667471DAA30AF6F4D0EDFA7 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___BackButtonPressed_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___BackButtonPressed_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService__ctor_m7FCD6D7BFF53589D57A778BF1137C0E10AA824D7 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___unityEventSystem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m252ECAD69E2EA1CE58123386172AD575CE9A690A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<IInputSource> _sources = new List<IInputSource>();
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_0 = (List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9*)il2cpp_codegen_object_new(List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m252ECAD69E2EA1CE58123386172AD575CE9A690A(L_0, List_1__ctor_m252ECAD69E2EA1CE58123386172AD575CE9A690A_RuntimeMethod_var);
		__this->____sources_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sources_2), (void*)L_0);
		// private readonly List<IInputLayer> _layers = new List<IInputLayer>();
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_1 = (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*)il2cpp_codegen_object_new(List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349(L_1, List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349_RuntimeMethod_var);
		__this->____layers_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layers_3), (void*)L_1);
		// private readonly List<IInputLayer> _layersToAdd = new List<IInputLayer>();
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_2 = (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*)il2cpp_codegen_object_new(List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349(L_2, List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349_RuntimeMethod_var);
		__this->____layersToAdd_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layersToAdd_4), (void*)L_2);
		// private readonly List<IInputLayer> _layersToRemove = new List<IInputLayer>();
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_3 = (List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157*)il2cpp_codegen_object_new(List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349(L_3, List_1__ctor_m0C4CE262D3E2677F5C53CD14285059A932263349_RuntimeMethod_var);
		__this->____layersToRemove_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____layersToRemove_5), (void*)L_3);
		// private readonly List<InputEvent> _tempEventList = new List<InputEvent>();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_4 = (List_1_t178789677B756A774C7F7133D134D0611697C67B*)il2cpp_codegen_object_new(List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565(L_4, List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		__this->____tempEventList_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tempEventList_7), (void*)L_4);
		// public InputService(EventSystem unityEventSystem)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _unityEventSystem = unityEventSystem;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5 = ___unityEventSystem0;
		__this->____unityEventSystem_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unityEventSystem_1), (void*)L_5);
		// }
		return;
	}
}
// UnityEngine.EventSystems.EventSystem Niantic.Platform.Util.OrbitCameraInternal.InputService::get_MainEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* InputService_get_MainEventSystem_m9B7E24B04D34358B1C12EBF41D6735CCB4251AB2 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	{
		// get { return _unityEventSystem; }
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->____unityEventSystem_1;
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::get_EventsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_get_EventsEnabled_m5E6347CA6F68FA71C7ACC5192871B03C61DB836A (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	{
		// get { return _disableCount == 0; }
		uint32_t L_0 = __this->____disableCount_6;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::EnableInputEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_EnableInputEvents_m49A9EEB7FAC2C7EB8DF054D18CFBA38CE006DE93 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// if (!enable)
		bool L_0 = ___enable0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// _disableCount++;
		uint32_t L_1 = __this->____disableCount_6;
		__this->____disableCount_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, 1));
		goto IL_0029;
	}

IL_0013:
	{
		// else if (_disableCount != 0)
		uint32_t L_2 = __this->____disableCount_6;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// _disableCount--;
		uint32_t L_3 = __this->____disableCount_6;
		__this->____disableCount_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1));
	}

IL_0029:
	{
		// _unityEventSystem.enabled = EventsEnabled;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4 = __this->____unityEventSystem_1;
		bool L_5;
		L_5 = InputService_get_EventsEnabled_m5E6347CA6F68FA71C7ACC5192871B03C61DB836A(__this, NULL);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::SetupLegacyBackButtonHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_SetupLegacyBackButtonHandler_m789F83C1C8E90718755E494B03B4043A7529A058 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AddLayer(new BackButtonPressedInputLayer(this));
		BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* L_0 = (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A*)il2cpp_codegen_object_new(BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BackButtonPressedInputLayer__ctor_mDF25E6ACE4672963163724CD143389129B40B6DD(L_0, __this, NULL);
		InputService_AddLayer_mD5A639DC5A950CDB730DF05CDB5E67550D313886(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::Initialize(System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_Initialize_m37DC18003DB4C88614C1569D418A3394AEF8FD8B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___gestures0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA584809486B6A74FC6C1432A7E1C7FC592811C86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE58E9C47D2CCBF0A09F26683FD64953F444406C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m353B4ACCED6B6C0BF2D7BDC3487C9DF275D3A408_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* V_0 = NULL;
	Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// _sources.Clear();
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_0 = __this->____sources_2;
		NullCheck(L_0);
		List_1_Clear_m353B4ACCED6B6C0BF2D7BDC3487C9DF275D3A408_inline(L_0, List_1_Clear_m353B4ACCED6B6C0BF2D7BDC3487C9DF275D3A408_RuntimeMethod_var);
		// _sources.Add(new UnityTouchInput());
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_1 = __this->____sources_2;
		UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* L_2 = (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753*)il2cpp_codegen_object_new(UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityTouchInput__ctor_m2FA07699AF8BCDD03E339A95015AF103BBBEC6CF(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_inline(L_1, L_2, List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_RuntimeMethod_var);
		// _sources.Add(new UnityMouseInput());
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_3 = __this->____sources_2;
		UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* L_4 = (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133*)il2cpp_codegen_object_new(UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityMouseInput__ctor_m73BED5EBA6DE1C1EBCF2547A708A49B630D9BA79(L_4, NULL);
		NullCheck(L_3);
		List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_inline(L_3, L_4, List_1_Add_m20E7362517285F82A06C27DD25508ECB9F62A0AA_RuntimeMethod_var);
		// foreach (IInputSource source in _sources)
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_5 = __this->____sources_2;
		NullCheck(L_5);
		Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E L_6;
		L_6 = List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F(L_5, List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49((&V_1), Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_0039_1:
			{
				// foreach (IInputSource source in _sources)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_inline((&V_1), Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
				// source.SetEventSystem(_unityEventSystem);
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_8 = __this->____unityEventSystem_1;
				NullCheck(L_7);
				InterfaceActionInvoker1< EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* >::Invoke(1 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IInputSource::SetEventSystem(UnityEngine.EventSystems.EventSystem) */, IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var, L_7, L_8);
			}

IL_004b_1:
			{
				// foreach (IInputSource source in _sources)
				bool L_9;
				L_9 = Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F((&V_1), Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// ScreenSpaceInputLayer screenSpaceInputLayer = new ScreenSpaceInputLayer(
		//     InputLayerPriority.Screen
		// );
		ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* L_10 = (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B*)il2cpp_codegen_object_new(ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ScreenSpaceInputLayer__ctor_mF3BFC297CCE1C36235915AAF010E505833B0ADE9(L_10, ((int32_t)1000), NULL);
		V_0 = L_10;
		// foreach (IScreenInputGesture g in gestures)
		RuntimeObject* L_11 = ___gestures0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::GetEnumerator() */, IEnumerable_1_tA584809486B6A74FC6C1432A7E1C7FC592811C86_il2cpp_TypeInfo_var, L_11);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_13 = V_2;
					if (!L_13)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_14 = V_2;
					NullCheck(L_14);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
				}

IL_0099:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0086_1;
			}

IL_0078_1:
			{
				// foreach (IScreenInputGesture g in gestures)
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				RuntimeObject* L_16;
				L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture>::get_Current() */, IEnumerator_1_tE58E9C47D2CCBF0A09F26683FD64953F444406C3_il2cpp_TypeInfo_var, L_15);
				V_3 = L_16;
				// screenSpaceInputLayer.Register(g);
				ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* L_17 = V_0;
				RuntimeObject* L_18 = V_3;
				NullCheck(L_17);
				ScreenSpaceInputLayer_Register_mCE364044C88D4D2D8324BBE23638C29955FB601D(L_17, L_18, NULL);
			}

IL_0086_1:
			{
				// foreach (IScreenInputGesture g in gestures)
				RuntimeObject* L_19 = V_2;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0078_1;
				}
			}
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		// AddLayer(screenSpaceInputLayer);
		ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* L_21 = V_0;
		InputService_AddLayer_mD5A639DC5A950CDB730DF05CDB5E67550D313886(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_Update_mAB5D3F7E33D314D210E66B29B7FFF2BD8B62B5FE (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var source in _sources)
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_0 = __this->____sources_2;
		NullCheck(L_0);
		Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E L_1;
		L_1 = List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F(L_0, List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49((&V_0), Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var source in _sources)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_inline((&V_0), Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
				// source.CollectInput();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(2 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IInputSource::CollectInput() */, IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (var source in _sources)
				bool L_3;
				L_3 = Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F((&V_0), Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// ProcessInput();
		InputService_ProcessInput_m5B9435E71E62E69849E2218964D755840D2C7501(__this, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::AddLayer(Niantic.Platform.Util.OrbitCameraInternal.IInputLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_AddLayer_mD5A639DC5A950CDB730DF05CDB5E67550D313886 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _layersToAdd.Add(layer);
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_0 = __this->____layersToAdd_4;
		RuntimeObject* L_1 = ___layer0;
		NullCheck(L_0);
		List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_inline(L_0, L_1, List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::AddPendingLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_AddPendingLayers_m20333F805794491B8DD91D2FDE00437E5FC2310B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputService_LayerComparer_mD2F1480B21A5A4DD65A0ACDFD1A0F4F089FBEC41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m1E71164484C171219DE6FB58E4F20FD458DBC6E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (_layersToAdd.Count == 0)
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_0 = __this->____layersToAdd_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_inline(L_0, List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var layerToAdd in _layersToAdd)
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_2 = __this->____layersToAdd_4;
		NullCheck(L_2);
		Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 L_3;
		L_3 = List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF(L_2, List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE((&V_0), Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0030_1;
			}

IL_001c_1:
			{
				// foreach (var layerToAdd in _layersToAdd)
				RuntimeObject* L_4;
				L_4 = Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_inline((&V_0), Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
				V_1 = L_4;
				// _layers.Add(layerToAdd);
				List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_5 = __this->____layers_3;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_5);
				List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_inline(L_5, L_6, List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
			}

IL_0030_1:
			{
				// foreach (var layerToAdd in _layersToAdd)
				bool L_7;
				L_7 = Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204((&V_0), Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// _layers.Sort(LayerComparer);
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_8 = __this->____layers_3;
		Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C* L_9 = (Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C*)il2cpp_codegen_object_new(Comparison_1_t5D9ED295894A395F12B218110098EFF578C0CB2C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Comparison_1__ctor_mEF4E94D02D842ECAC54DE12C9A98A8737098DB67(L_9, __this, (intptr_t)((void*)InputService_LayerComparer_mD2F1480B21A5A4DD65A0ACDFD1A0F4F089FBEC41_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		List_1_Sort_m1E71164484C171219DE6FB58E4F20FD458DBC6E6(L_8, L_9, List_1_Sort_m1E71164484C171219DE6FB58E4F20FD458DBC6E6_RuntimeMethod_var);
		// _layersToAdd.Clear();
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_10 = __this->____layersToAdd_4;
		NullCheck(L_10);
		List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_inline(L_10, List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.InputService::LayerComparer(Niantic.Platform.Util.OrbitCameraInternal.IInputLayer,Niantic.Platform.Util.OrbitCameraInternal.IInputLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputService_LayerComparer_mD2F1480B21A5A4DD65A0ACDFD1A0F4F089FBEC41 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___l10, RuntimeObject* ___l21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputLayerPriority_t2D064E69D6619F4B4F2D7201C1469F4AE75ECF42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return l1.Priority.CompareTo(l2.Priority);
		RuntimeObject* L_0 = ___l10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority Niantic.Platform.Util.OrbitCameraInternal.IInputLayer::get_Priority() */, IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___l21;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority Niantic.Platform.Util.OrbitCameraInternal.IInputLayer::get_Priority() */, IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var, L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(InputLayerPriority_t2D064E69D6619F4B4F2D7201C1469F4AE75ECF42_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<int32_t> L_6(InputLayerPriority_t2D064E69D6619F4B4F2D7201C1469F4AE75ECF42_il2cpp_TypeInfo_var, (&V_0));
		int32_t L_7;
		L_7 = Enum_CompareTo_m7857C6F62098FB59C5334577863DD23559CD50B5((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), L_5, NULL);
		return L_7;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::RemoveLayer(Niantic.Platform.Util.OrbitCameraInternal.IInputLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_RemoveLayer_m76F41C0A020D8EBEC8594E8E0C4E4268A5772CE3 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, RuntimeObject* ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _layersToRemove.Add(layer);
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_0 = __this->____layersToRemove_5;
		RuntimeObject* L_1 = ___layer0;
		NullCheck(L_0);
		List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_inline(L_0, L_1, List_1_Add_mB1C3010EE3DC3973E8DD2ADE4F963934E9468B2F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::RemovePendingLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_RemovePendingLayers_m91271422D2EDF32A330AE9EF423D89D5EFBF051A (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0CD589334598357C2D889D2008E3D4987B6F33C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (_layersToRemove.Count == 0)
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_0 = __this->____layersToRemove_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_inline(L_0, List_1_get_Count_mD15374878B482C99690A24749FD3FFD25CEFB4EB_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// foreach (var layerToRemove in _layersToRemove)
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_2 = __this->____layersToRemove_5;
		NullCheck(L_2);
		Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 L_3;
		L_3 = List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF(L_2, List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE((&V_0), Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_001c_1:
			{
				// foreach (var layerToRemove in _layersToRemove)
				RuntimeObject* L_4;
				L_4 = Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_inline((&V_0), Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
				V_1 = L_4;
				// var removed = _layers.Remove(layerToRemove);
				List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_5 = __this->____layers_3;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_5);
				bool L_7;
				L_7 = List_1_Remove_m0CD589334598357C2D889D2008E3D4987B6F33C2(L_5, L_6, List_1_Remove_m0CD589334598357C2D889D2008E3D4987B6F33C2_RuntimeMethod_var);
				// if (!removed)
				if (L_7)
				{
					goto IL_003d_1;
				}
			}
			{
				// throw new InvalidOperationException(
				//     "Cannot remove input layer that isn't in the InputService"
				// );
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_8);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral498680848415D05462DD52F4DDEC27DF493A3844)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputService_RemovePendingLayers_m91271422D2EDF32A330AE9EF423D89D5EFBF051A_RuntimeMethod_var)));
			}

IL_003d_1:
			{
				// layerToRemove.Removed();
				RuntimeObject* L_9 = V_1;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(2 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IInputLayer::Removed() */, IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var, L_9);
			}

IL_0043_1:
			{
				// foreach (var layerToRemove in _layersToRemove)
				bool L_10;
				L_10 = Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204((&V_0), Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// _layersToRemove.Clear();
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_11 = __this->____layersToRemove_5;
		NullCheck(L_11);
		List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_inline(L_11, List_1_Clear_mD884F5900D1BE09981C3F592C9409E8AC3213421_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Util.OrbitCameraInternal.IInputSource> Niantic.Platform.Util.OrbitCameraInternal.InputService::get_Sources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputService_get_Sources_mCDA50E68D5555D33A60EC5AE7E8DF3E98F5D8A6C (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	{
		// get { return _sources; }
		List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_0 = __this->____sources_2;
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::EventIsAvailable(Niantic.Platform.Util.OrbitCameraInternal.InputEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_EventIsAvailable_m20278969769C40F8379B38794324CB37F4254FE0 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* ___e0, const RuntimeMethod* method) 
{
	{
		// return e.ConsumedBy == null;
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D_inline(L_0, NULL);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_ProcessInput_m5B9435E71E62E69849E2218964D755840D2C7501 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_4 = NULL;
	{
		// AddPendingLayers();
		InputService_AddPendingLayers_m20333F805794491B8DD91D2FDE00437E5FC2310B(__this, NULL);
		// RemovePendingLayers();
		InputService_RemovePendingLayers_m91271422D2EDF32A330AE9EF423D89D5EFBF051A(__this, NULL);
		// foreach (var layer in _layers)
		List_1_t60B8F0CED87062CFA372CE0BA3D8B846C29BF157* L_0 = __this->____layers_3;
		NullCheck(L_0);
		Enumerator_tBEA7B1D15E1BDC7D752DA17F91C367B60416E772 L_1;
		L_1 = List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF(L_0, List_1_GetEnumerator_mE69980DAD30AE42FA6921BC07C04A1D387F2D8CF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00db:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE((&V_0), Enumerator_Dispose_m2485DCD57EC3F0FDB656AD09AC4E3B72045FC9DE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cd_1;
			}

IL_001d_1:
			{
				// foreach (var layer in _layers)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_inline((&V_0), Enumerator_get_Current_m6FF5AAC97077CC8131771533DE38A24E98D1EE2F_RuntimeMethod_var);
				V_1 = L_2;
				// if (layer == null)
				RuntimeObject* L_3 = V_1;
				if (!L_3)
				{
					goto IL_00cd_1;
				}
			}
			{
				// foreach (var source in _sources)
				List_1_t410609ABFD5817D11AAFC849E9C62AE373F895C9* L_4 = __this->____sources_2;
				NullCheck(L_4);
				Enumerator_t77EDF7ABCE5FE44C94F28A909BFE8D7290D1939E L_5;
				L_5 = List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F(L_4, List_1_GetEnumerator_m936278E14E853E8E9FCB764FDF6C03524EF8E35F_RuntimeMethod_var);
				V_2 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00bf_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49((&V_2), Enumerator_Dispose_m611B8310DFD5C5813B40708A30EB63AB2D92FF49_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00b1_2;
					}

IL_0039_2:
					{
						// foreach (var source in _sources)
						RuntimeObject* L_6;
						L_6 = Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_inline((&V_2), Enumerator_get_Current_m3E942A2EB8520A8F9089DF4C35801FC7CCB9CD44_RuntimeMethod_var);
						// _tempEventList.Clear();
						List_1_t178789677B756A774C7F7133D134D0611697C67B* L_7 = __this->____tempEventList_7;
						NullCheck(L_7);
						List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_inline(L_7, List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
						// foreach (var ev in source.Events)
						NullCheck(L_6);
						List_1_t178789677B756A774C7F7133D134D0611697C67B* L_8;
						L_8 = InterfaceFuncInvoker0< List_1_t178789677B756A774C7F7133D134D0611697C67B* >::Invoke(0 /* System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.IInputSource::get_Events() */, IInputSource_tBED35D3010D7453BC35D7F453ABA35517BC4FD3E_il2cpp_TypeInfo_var, L_6);
						NullCheck(L_8);
						Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F L_9;
						L_9 = List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C(L_8, List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
						V_3 = L_9;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_0087_2:
							{// begin finally (depth: 3)
								Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA((&V_3), Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								goto IL_007c_3;
							}

IL_0058_3:
							{
								// foreach (var ev in source.Events)
								InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_10;
								L_10 = Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_inline((&V_3), Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
								V_4 = L_10;
								// if (ev != null && EventIsAvailable(ev))
								InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_11 = V_4;
								if (!L_11)
								{
									goto IL_007c_3;
								}
							}
							{
								InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_12 = V_4;
								bool L_13;
								L_13 = InputService_EventIsAvailable_m20278969769C40F8379B38794324CB37F4254FE0(__this, L_12, NULL);
								if (!L_13)
								{
									goto IL_007c_3;
								}
							}
							{
								// _tempEventList.Add(ev);
								List_1_t178789677B756A774C7F7133D134D0611697C67B* L_14 = __this->____tempEventList_7;
								InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_15 = V_4;
								NullCheck(L_14);
								List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_inline(L_14, L_15, List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
							}

IL_007c_3:
							{
								// foreach (var ev in source.Events)
								bool L_16;
								L_16 = Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32((&V_3), Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
								if (L_16)
								{
									goto IL_0058_3;
								}
							}
							{
								goto IL_0095_2;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_0095_2:
					{
						// if (_tempEventList.Count > 0)
						List_1_t178789677B756A774C7F7133D134D0611697C67B* L_17 = __this->____tempEventList_7;
						NullCheck(L_17);
						int32_t L_18;
						L_18 = List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_inline(L_17, List_1_get_Count_m948AAACF91B068589C805E72A98092EECC4D2CB6_RuntimeMethod_var);
						if ((((int32_t)L_18) <= ((int32_t)0)))
						{
							goto IL_00b1_2;
						}
					}
					{
						// layer.ProcessEvents(_tempEventList);
						RuntimeObject* L_19 = V_1;
						List_1_t178789677B756A774C7F7133D134D0611697C67B* L_20 = __this->____tempEventList_7;
						NullCheck(L_19);
						InterfaceActionInvoker1< List_1_t178789677B756A774C7F7133D134D0611697C67B* >::Invoke(1 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IInputLayer::ProcessEvents(System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>) */, IInputLayer_t9CBBB12058A69CDACA62B2B3D5EDC699D0E5F044_il2cpp_TypeInfo_var, L_19, L_20);
						// return;
						goto IL_00e9;
					}

IL_00b1_2:
					{
						// foreach (var source in _sources)
						bool L_21;
						L_21 = Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F((&V_2), Enumerator_MoveNext_m73E06AFB50324D7F7AC9EEA38C9225B584979D5F_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_0039_2;
						}
					}
					{
						goto IL_00cd_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00cd_1:
			{
				// foreach (var layer in _layers)
				bool L_22;
				L_22 = Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204((&V_0), Enumerator_MoveNext_m37BA73844325C588CE5069BB9288BA7467594204_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_001d_1;
				}
			}
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Boolean Niantic.Platform.Util.OrbitCameraInternal.InputService::HasBackButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputService_HasBackButtonAction_m4BD6DD1CD467257782B5F989B322C549035B5F0B (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	{
		// return BackButtonPressed != null;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___BackButtonPressed_0;
		return (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService::FireBackButtonAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputService_FireBackButtonAction_m160F869B1EB15BF131B7378BDF2C4C75C41DDEB7 (InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* __this, const RuntimeMethod* method) 
{
	{
		// if (HasBackButtonAction())
		bool L_0;
		L_0 = InputService_HasBackButtonAction_m4BD6DD1CD467257782B5F989B322C549035B5F0B(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// BackButtonPressed();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___BackButtonPressed_0;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
	}

IL_0013:
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
// Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackButtonPressedInputLayer_get_Priority_m43E7643267A5B016F249081E5DDC4F4226E87E10 (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, const RuntimeMethod* method) 
{
	{
		// get { return InputLayerPriority.Screen; }
		return (int32_t)(((int32_t)1000));
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::.ctor(Niantic.Platform.Util.OrbitCameraInternal.InputService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButtonPressedInputLayer__ctor_mDF25E6ACE4672963163724CD143389129B40B6DD (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* ___inputService0, const RuntimeMethod* method) 
{
	{
		// public BackButtonPressedInputLayer(InputService inputService)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _inputService = inputService;
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_0 = ___inputService0;
		__this->____inputService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inputService_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::Removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButtonPressedInputLayer_Removed_m731601F3A5D713F19AC7082DCDF5ACBF0582479A (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, const RuntimeMethod* method) 
{
	{
		// public void Removed() { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::PostProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButtonPressedInputLayer_PostProcessInput_m51242F95FB2539677631B02FCA4499DFFBA80DEE (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, const RuntimeMethod* method) 
{
	{
		// public void PostProcessInput() { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.InputService/BackButtonPressedInputLayer::ProcessEvents(System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackButtonPressedInputLayer_ProcessEvents_mB66F81EE95D10578A02C89900203A9E99F39C037 (BackButtonPressedInputLayer_t6D120D1FF82A14243781578AE5F0F8156513493A* __this, List_1_t178789677B756A774C7F7133D134D0611697C67B* ___events0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F V_0;
	memset((&V_0), 0, sizeof(V_0));
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_1 = NULL;
	{
		// if (!_inputService.EventsEnabled)
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_0 = __this->____inputService_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputService_get_EventsEnabled_m5E6347CA6F68FA71C7ACC5192871B03C61DB836A(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (_inputService.BackButtonPressed != null)
		InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_2 = __this->____inputService_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2->___BackButtonPressed_0;
		if (!L_3)
		{
			goto IL_0081;
		}
	}
	{
		// foreach (var inputEvent in events)
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_4 = ___events0;
		NullCheck(L_4);
		Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F L_5;
		L_5 = List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C(L_4, List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA((&V_0), Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_0024_1:
			{
				// foreach (var inputEvent in events)
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6;
				L_6 = Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_inline((&V_0), Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
				V_1 = L_6;
				// if (
				//     inputEvent.Key.HasValue
				//     && inputEvent.Key.Value == KeyCode.Escape
				//     && // android passes back button press as escape
				//     inputEvent.Phase == InputPhase.Ended
				// )
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_7 = V_1;
				NullCheck(L_7);
				Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* L_8 = (&L_7->___Key_5);
				bool L_9;
				L_9 = Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_inline(L_8, Nullable_1_get_HasValue_m2867A875DB743210A85E5369E62B946527D6F0AD_RuntimeMethod_var);
				if (!L_9)
				{
					goto IL_0068_1;
				}
			}
			{
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_10 = V_1;
				NullCheck(L_10);
				Nullable_1_tDD59ED90D2D360323A933D67B270AA5F7C4B7FA6* L_11 = (&L_10->___Key_5);
				int32_t L_12;
				L_12 = Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD(L_11, Nullable_1_get_Value_mE50FFA5443BCFB6BA30EE2F686C296BD46EF61AD_RuntimeMethod_var);
				if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)27)))))
				{
					goto IL_0068_1;
				}
			}
			{
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_13 = V_1;
				NullCheck(L_13);
				int32_t L_14 = L_13->___Phase_1;
				if ((!(((uint32_t)L_14) == ((uint32_t)2))))
				{
					goto IL_0068_1;
				}
			}
			{
				// inputEvent.Consume(this);
				InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_15 = V_1;
				NullCheck(L_15);
				InputEvent_Consume_m82D6542AF3EB48CFC56326079B1BFC994CB7E996(L_15, __this, NULL);
				// _inputService.BackButtonPressed();
				InputService_tCD6B0726760E38B2FE509C02634BCF1CF5F86F39* L_16 = __this->____inputService_0;
				NullCheck(L_16);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = L_16->___BackButtonPressed_0;
				NullCheck(L_17);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_17, NULL);
			}

IL_0068_1:
			{
				// foreach (var inputEvent in events)
				bool L_18;
				L_18 = Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32((&V_0), Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
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
// Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScreenSpaceInputLayer_get_Priority_m48B17001B184C4943BF39C491D1B82FF7E9DB5CD (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, const RuntimeMethod* method) 
{
	{
		// public InputLayerPriority Priority { get; private set; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::set_Priority(Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_set_Priority_mC10910F344EFBCF3A42E7B243D65AC2D6E9679E0 (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InputLayerPriority Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::.ctor(Niantic.Platform.Util.OrbitCameraInternal.InputLayerPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer__ctor_mF3BFC297CCE1C36235915AAF010E505833B0ADE9 (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, int32_t ___priority0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0EC9077CE764DB828B274BCE8B97A66212484C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<IScreenInputGesture> gestures = new List<IScreenInputGesture>();
		List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* L_0 = (List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B*)il2cpp_codegen_object_new(List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB0EC9077CE764DB828B274BCE8B97A66212484C0(L_0, List_1__ctor_mB0EC9077CE764DB828B274BCE8B97A66212484C0_RuntimeMethod_var);
		__this->___gestures_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gestures_0), (void*)L_0);
		// public ScreenSpaceInputLayer(InputLayerPriority priority)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Priority = priority;
		int32_t L_1 = ___priority0;
		ScreenSpaceInputLayer_set_Priority_mC10910F344EFBCF3A42E7B243D65AC2D6E9679E0_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer__ctor_m0D79AFBA16EB8DFC886CCF17547B6217481E6EB5 (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenSpaceInputLayer() : this(InputLayerPriority.Screen) { }
		ScreenSpaceInputLayer__ctor_mF3BFC297CCE1C36235915AAF010E505833B0ADE9(__this, ((int32_t)1000), NULL);
		// public ScreenSpaceInputLayer() : this(InputLayerPriority.Screen) { }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::ProcessEvents(System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_ProcessEvents_mDA30B08CE67DCA4A2794450A5742ECDB97AE4520 (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, List_1_t178789677B756A774C7F7133D134D0611697C67B* ___events0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4518BDA9CC14CFD6F473F03682D5BF81ACA82093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6A6372647E386F782C61A0E22AEA52C401F53BB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC66693E99A9E8436ED0D95A6C1948D50BFA4A99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGesture_tB7228B04250B5C2D569B85008B6BDCD7D2416116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScreenInputGesture_t3AEA6ED9C19B86FB75872E98735B8C063D0C61B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF53A1440FC49B66CB5A4EEAFBBCFE1E0E36FDC78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* V_3 = NULL;
	{
		// foreach (var gesture in gestures)
		List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* L_0 = __this->___gestures_0;
		NullCheck(L_0);
		Enumerator_tDB142C237147A0E3ABE3B9A8CA782A3C4F1B014D L_1;
		L_1 = List_1_GetEnumerator_mF53A1440FC49B66CB5A4EEAFBBCFE1E0E36FDC78(L_0, List_1_GetEnumerator_mF53A1440FC49B66CB5A4EEAFBBCFE1E0E36FDC78_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4518BDA9CC14CFD6F473F03682D5BF81ACA82093((&V_0), Enumerator_Dispose_m4518BDA9CC14CFD6F473F03682D5BF81ACA82093_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_000e_1:
			{
				// foreach (var gesture in gestures)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_mC66693E99A9E8436ED0D95A6C1948D50BFA4A99D_inline((&V_0), Enumerator_get_Current_mC66693E99A9E8436ED0D95A6C1948D50BFA4A99D_RuntimeMethod_var);
				V_1 = L_2;
				// foreach (var inputEvent in events)
				List_1_t178789677B756A774C7F7133D134D0611697C67B* L_3 = ___events0;
				NullCheck(L_3);
				Enumerator_t02D779DF6DE87D207644CBA429FD5B4EEB39E74F L_4;
				L_4 = List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C(L_3, List_1_GetEnumerator_m3AF92D81EF90701F103A82831957C17FB72F9F1C_RuntimeMethod_var);
				V_2 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0041_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA((&V_2), Enumerator_Dispose_mD04F58F283B09B4BCF77E477653DF1DCB47231BA_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0036_2;
					}

IL_001f_2:
					{
						// foreach (var inputEvent in events)
						InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_5;
						L_5 = Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_inline((&V_2), Enumerator_get_Current_m5D24B4EDD85EB663A7D7227069246977454CB610_RuntimeMethod_var);
						V_3 = L_5;
						// if (inputEvent.ConsumedBy == null)
						InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_6 = V_3;
						NullCheck(L_6);
						RuntimeObject* L_7;
						L_7 = InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D_inline(L_6, NULL);
						if (L_7)
						{
							goto IL_0036_2;
						}
					}
					{
						// gesture.ProcessEvent(inputEvent);
						RuntimeObject* L_8 = V_1;
						InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_9 = V_3;
						NullCheck(L_8);
						InterfaceActionInvoker1< InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* >::Invoke(0 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture::ProcessEvent(Niantic.Platform.Util.OrbitCameraInternal.InputEvent) */, IScreenInputGesture_t3AEA6ED9C19B86FB75872E98735B8C063D0C61B8_il2cpp_TypeInfo_var, L_8, L_9);
					}

IL_0036_2:
					{
						// foreach (var inputEvent in events)
						bool L_10;
						L_10 = Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32((&V_2), Enumerator_MoveNext_m64E7310E373AE351BC4A6F89916F1552B0FA9A32_RuntimeMethod_var);
						if (L_10)
						{
							goto IL_001f_2;
						}
					}
					{
						goto IL_004f_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_004f_1:
			{
				// gesture.PostProcessInput();
				RuntimeObject* L_11 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker0::Invoke(0 /* System.Void Niantic.Platform.Util.OrbitCameraInternal.IGesture::PostProcessInput() */, IGesture_tB7228B04250B5C2D569B85008B6BDCD7D2416116_il2cpp_TypeInfo_var, L_11);
			}

IL_0055_1:
			{
				// foreach (var gesture in gestures)
				bool L_12;
				L_12 = Enumerator_MoveNext_m6A6372647E386F782C61A0E22AEA52C401F53BB4((&V_0), Enumerator_MoveNext_m6A6372647E386F782C61A0E22AEA52C401F53BB4_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::Register(Niantic.Platform.Util.OrbitCameraInternal.IScreenInputGesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_Register_mCE364044C88D4D2D8324BBE23638C29955FB601D (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, RuntimeObject* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m718164989F0B2627B678D8169523735394DB9E52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gestures.Add(gesture);
		List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* L_0 = __this->___gestures_0;
		RuntimeObject* L_1 = ___gesture0;
		NullCheck(L_0);
		List_1_Add_m718164989F0B2627B678D8169523735394DB9E52_inline(L_0, L_1, List_1_Add_m718164989F0B2627B678D8169523735394DB9E52_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.ScreenSpaceInputLayer::Removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_Removed_mB60413F60F1C8844A7DD65851635F08F691A580A (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m528BBE077A288921E3A60DCA5A024B6D087B1B05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gestures.Clear();
		List_1_t6C34963415F3AFDE209761DD5334C629AE2DA93B* L_0 = __this->___gestures_0;
		NullCheck(L_0);
		List_1_Clear_m528BBE077A288921E3A60DCA5A024B6D087B1B05_inline(L_0, List_1_Clear_m528BBE077A288921E3A60DCA5A024B6D087B1B05_RuntimeMethod_var);
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
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t178789677B756A774C7F7133D134D0611697C67B* UnityMouseInput_get_Events_mD282FFD64C6E5F95B1EACF78A7FE304FF804D243 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, const RuntimeMethod* method) 
{
	{
		// get { return _activeEvents; }
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_0 = __this->____activeEvents_1;
		return L_0;
	}
}
// Niantic.Platform.Util.OrbitCameraInternal.InputPhase Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::CurrentMousePhase(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMouseInput_CurrentMousePhase_mD7BA1300A17DCDDC8B995AFD093A4C0D7DF2FFD3 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, int32_t ___buttonId0, const RuntimeMethod* method) 
{
	{
		// if (UnityEngine.Input.GetMouseButtonDown(buttonId))
		int32_t L_0 = ___buttonId0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return InputPhase.Began;
		return (int32_t)(0);
	}

IL_000a:
	{
		// else if (UnityEngine.Input.GetMouseButton(buttonId))
		int32_t L_2 = ___buttonId0;
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(L_2, NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		// return InputPhase.Held;
		return (int32_t)(1);
	}

IL_0014:
	{
		// else if (UnityEngine.Input.GetMouseButtonUp(buttonId))
		int32_t L_4 = ___buttonId0;
		bool L_5;
		L_5 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return InputPhase.Ended;
		return (int32_t)(2);
	}

IL_001e:
	{
		// return InputPhase.Hovered;
		return (int32_t)(3);
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::SetEventSystem(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMouseInput_SetEventSystem_m9D24F352C2A516CA481F59AD7456A957254054AD (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) 
{
	{
		// uiEventSystem = eventSystem;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = ___eventSystem0;
		__this->___uiEventSystem_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiEventSystem_3), (void*)L_0);
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::CollectInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMouseInput_CollectInput_m8CD79DB731CF4675FF2F6AFBAA3866322E0332E2 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// var mouseDelta = lastPosition.HasValue
		//     ? (UnityEngine.Input.mousePosition - lastPosition.Value)
		//     : Vector3.zero;
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* L_0 = (&__this->___lastPosition_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline(L_0, Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		G_B3_0 = L_2;
		goto IL_0029;
	}

IL_0014:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* L_4 = (&__this->___lastPosition_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792(L_4, Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		G_B3_0 = L_6;
	}

IL_0029:
	{
		V_0 = G_B3_0;
		// var recipWidth = 1.0f / Screen.width;
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_1 = ((float)((1.0f)/((float)L_7)));
		// var recipHeight = 1.0f / Screen.height;
		int32_t L_8;
		L_8 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_2 = ((float)((1.0f)/((float)L_8)));
		// var mousePositionNormalized = new Vector3(
		//     UnityEngine.Input.mousePosition.x * recipWidth,
		//     UnityEngine.Input.mousePosition.y * recipHeight
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_10 = L_9.___x_2;
		float L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_13 = L_12.___y_3;
		float L_14 = V_2;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_3), ((float)il2cpp_codegen_multiply(L_10, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		// var mouseDeltaNormalized = new Vector3(
		//     mouseDelta.x * recipWidth,
		//     mouseDelta.y * recipHeight
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		float L_16 = L_15.___x_2;
		float L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___y_3;
		float L_20 = V_2;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_4), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		// var mouseOverUI = uiEventSystem.IsPointerOverGameObject();
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_21 = __this->___uiEventSystem_3;
		NullCheck(L_21);
		bool L_22;
		L_22 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_21, NULL);
		V_5 = L_22;
		// _activeEvents.Clear();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_23 = __this->____activeEvents_1;
		NullCheck(L_23);
		List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_inline(L_23, List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		// for (int i = 0; i < MAX_MOUSE_BUTTONS; ++i)
		V_6 = 0;
		goto IL_00de;
	}

IL_0097:
	{
		// var phase = CurrentMousePhase((int)i);
		int32_t L_24 = V_6;
		int32_t L_25;
		L_25 = UnityMouseInput_CurrentMousePhase_mD7BA1300A17DCDDC8B995AFD093A4C0D7DF2FFD3(__this, L_24, NULL);
		V_7 = L_25;
		// if (i == 0 || phase != InputPhase.Hovered)
		int32_t L_26 = V_6;
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_27 = V_7;
		if ((((int32_t)L_27) == ((int32_t)3)))
		{
			goto IL_00d8;
		}
	}

IL_00aa:
	{
		// _activeEvents.Add(
		//     new InputEvent(
		//         this,
		//         phase,
		//         Time.unscaledTime,
		//         Time.unscaledDeltaTime,
		//         UnityEngine.Input.mouseScrollDelta,
		//         new TransformData(
		//             (uint)i,
		//             mousePositionNormalized,
		//             mouseDeltaNormalized,
		//             mouseOverUI
		//         )
		//     )
		// );
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_28 = __this->____activeEvents_1;
		int32_t L_29 = V_7;
		float L_30;
		L_30 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_31;
		L_31 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		int32_t L_33 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_4;
		bool L_36 = V_5;
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_37;
		memset((&L_37), 0, sizeof(L_37));
		TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219((&L_37), L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_38 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)il2cpp_codegen_object_new(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		InputEvent__ctor_m30B79461479818E4943676DBBFB4C1034595901F(L_38, __this, L_29, L_30, L_31, L_32, L_37, NULL);
		NullCheck(L_28);
		List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_inline(L_28, L_38, List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
	}

IL_00d8:
	{
		// for (int i = 0; i < MAX_MOUSE_BUTTONS; ++i)
		int32_t L_39 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00de:
	{
		// for (int i = 0; i < MAX_MOUSE_BUTTONS; ++i)
		int32_t L_40 = V_6;
		if ((((int64_t)((int64_t)L_40)) < ((int64_t)((int64_t)6))))
		{
			goto IL_0097;
		}
	}
	{
		// lastPosition = UnityEngine.Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_42;
		memset((&L_42), 0, sizeof(L_42));
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&L_42), L_41, /*hidden argument*/Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		__this->___lastPosition_2 = L_42;
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityMouseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMouseInput__ctor_m73BED5EBA6DE1C1EBCF2547A708A49B630D9BA79 (UnityMouseInput_tA762BD8DF93D9EAF6340B691E50E9CC2DA893133* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputEvent> _activeEvents = new List<InputEvent>();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_0 = (List_1_t178789677B756A774C7F7133D134D0611697C67B*)il2cpp_codegen_object_new(List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565(L_0, List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		__this->____activeEvents_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeEvents_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Collections.Generic.List`1<Niantic.Platform.Util.OrbitCameraInternal.InputEvent> Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t178789677B756A774C7F7133D134D0611697C67B* UnityTouchInput_get_Events_mC66D256ADE06D6A6EE9DB18EF62479CF8B83B61C (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, const RuntimeMethod* method) 
{
	{
		// get { return activeEvents; }
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_0 = __this->___activeEvents_0;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::SetEventSystem(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchInput_SetEventSystem_mA7E8967D38AE55EC29B0917F0A8E2480FC6CDB09 (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) 
{
	{
		// uiEventSystem = eventSystem;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = ___eventSystem0;
		__this->___uiEventSystem_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiEventSystem_1), (void*)L_0);
		// }
		return;
	}
}
// Niantic.Platform.Util.OrbitCameraInternal.InputPhase Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::ToInputPhase(UnityEngine.TouchPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTouchInput_ToInputPhase_m46F4BAC973CE081781AD8CB2FABBA27DE8A81C0F (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___phase0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_0020;
			}
			case 4:
			{
				goto IL_001e;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001c:
	{
		// return InputPhase.Began;
		return (int32_t)(0);
	}

IL_001e:
	{
		// return InputPhase.Canceled;
		return (int32_t)(4);
	}

IL_0020:
	{
		// return InputPhase.Ended;
		return (int32_t)(2);
	}

IL_0022:
	{
		// return InputPhase.Held;
		return (int32_t)(1);
	}

IL_0024:
	{
		// throw new NotImplementedException("Unexpected UnityEngine.TouchPhase " + phase);
		Il2CppFakeBox<int32_t> L_1(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var)), (&___phase0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0479E69AB7A59BE5E47D304FC11F5858B5681FF2)), L_2, NULL);
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_4 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityTouchInput_ToInputPhase_m46F4BAC973CE081781AD8CB2FABBA27DE8A81C0F_RuntimeMethod_var)));
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::CollectInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchInput_CollectInput_m5DCBF42B91D7DCE6989EC94FFE39EBCDCDDAD2C7 (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// activeEvents.Clear();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_0 = __this->___activeEvents_0;
		NullCheck(L_0);
		List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_inline(L_0, List_1_Clear_m01973DA5705106938967C04D23A8249BAC451237_RuntimeMethod_var);
		// var recipWidth = 1.0f / Screen.width;
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_0 = ((float)((1.0f)/((float)L_1)));
		// var recipHeight = 1.0f / Screen.height;
		int32_t L_2;
		L_2 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_1 = ((float)((1.0f)/((float)L_2)));
		// for (int i = 0; i < UnityEngine.Input.touchCount; i++)
		V_2 = 0;
		goto IL_0150;
	}

IL_002c:
	{
		// var touch = UnityEngine.Input.GetTouch(i);
		int32_t L_3 = V_2;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_3, NULL);
		V_3 = L_4;
		// var deltaPos = new Vector3();
		il2cpp_codegen_initobj((&V_4), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (activeTouches.TryGetValue(touch.fingerId, out prevTouch))
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_5 = __this->___activeTouches_2;
		int32_t L_6;
		L_6 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F(L_5, L_6, (&V_5), Dictionary_2_TryGetValue_mA447D8BD7996BEE895A501800D1678790C99E27F_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// deltaPos = touch.position - prevTouch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_10, NULL);
		V_4 = L_11;
	}

IL_006b:
	{
		// activeEvents.Add(
		//     new InputEvent(
		//         this,
		//         ToInputPhase(touch.phase),
		//         Time.unscaledTime,
		//         Time.unscaledDeltaTime,
		//         new TransformData(
		//             (uint)touch.fingerId,
		//             new Vector3(
		//                 touch.position.x * recipWidth,
		//                 touch.position.y * recipHeight
		//             ),
		//             new Vector3(deltaPos.x * recipWidth, deltaPos.y * recipHeight),
		//             uiEventSystem.IsPointerOverGameObject(touch.fingerId)
		//         )
		//     )
		// );
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_12 = __this->___activeEvents_0;
		int32_t L_13;
		L_13 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		int32_t L_14;
		L_14 = UnityTouchInput_ToInputPhase_m46F4BAC973CE081781AD8CB2FABBA27DE8A81C0F(__this, L_13, NULL);
		float L_15;
		L_15 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_16;
		L_16 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		int32_t L_17;
		L_17 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_3), NULL);
		float L_19 = L_18.___x_0;
		float L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_3), NULL);
		float L_22 = L_21.___y_1;
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_24), ((float)il2cpp_codegen_multiply(L_19, L_20)), ((float)il2cpp_codegen_multiply(L_22, L_23)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_4;
		float L_26 = L_25.___x_2;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_4;
		float L_29 = L_28.___y_3;
		float L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_31), ((float)il2cpp_codegen_multiply(L_26, L_27)), ((float)il2cpp_codegen_multiply(L_29, L_30)), /*hidden argument*/NULL);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_32 = __this->___uiEventSystem_1;
		int32_t L_33;
		L_33 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_32);
		bool L_34;
		L_34 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_32, L_33, NULL);
		TransformData_t0205120723B8549506451C193ECF90E0A6838DEE L_35;
		memset((&L_35), 0, sizeof(L_35));
		TransformData__ctor_mDEC2043A7299F8FAE10EE0BC7A54345C131B6219((&L_35), L_17, L_24, L_31, L_34, /*hidden argument*/NULL);
		InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* L_36 = (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114*)il2cpp_codegen_object_new(InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		InputEvent__ctor_m3EC58622415E8D42F8722BAE1752FCAB0D16FFAB(L_36, __this, L_14, L_15, L_16, L_35, NULL);
		NullCheck(L_12);
		List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_inline(L_12, L_36, List_1_Add_m2F0E1639699A6B459CCAD5B823825EFD2FFDB134_RuntimeMethod_var);
		// if (touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved)
		int32_t L_37;
		L_37 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if (!L_37)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_38;
		L_38 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}

IL_00fc:
	{
		// activeTouches[touch.fingerId] = touch;
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_39 = __this->___activeTouches_2;
		int32_t L_40;
		L_40 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_41 = V_3;
		NullCheck(L_39);
		Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597(L_39, L_40, L_41, Dictionary_2_set_Item_m4FF0A9447C5C96F2C9FFBA597BFBB6ECFED16597_RuntimeMethod_var);
		goto IL_014c;
	}

IL_0111:
	{
		// else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
		int32_t L_42;
		L_42 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if ((((int32_t)L_42) == ((int32_t)3)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_43;
		L_43 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)4))))
		{
			goto IL_014c;
		}
	}

IL_0125:
	{
		// if (activeTouches.ContainsKey(touch.fingerId))
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_44 = __this->___activeTouches_2;
		int32_t L_45;
		L_45 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_44);
		bool L_46;
		L_46 = Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9(L_44, L_45, Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_014c;
		}
	}
	{
		// activeTouches.Remove(touch.fingerId);
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_47 = __this->___activeTouches_2;
		int32_t L_48;
		L_48 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_47);
		bool L_49;
		L_49 = Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0(L_47, L_48, Dictionary_2_Remove_m0083F9D921B704C2FE0CCF412ACAB758121DA4F0_RuntimeMethod_var);
	}

IL_014c:
	{
		// for (int i = 0; i < UnityEngine.Input.touchCount; i++)
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0150:
	{
		// for (int i = 0; i < UnityEngine.Input.touchCount; i++)
		int32_t L_51 = V_2;
		int32_t L_52;
		L_52 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_002c;
		}
	}
	{
		// if (UnityEngine.Input.touchCount > 0)
		int32_t L_53;
		L_53 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_0190;
		}
	}
	{
		// for (int i = 0; i < 4; ++i)
		V_6 = 0;
		goto IL_018b;
	}

IL_0168:
	{
		// if (activeTouches.ContainsKey(i))
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_54 = __this->___activeTouches_2;
		int32_t L_55 = V_6;
		NullCheck(L_54);
		bool L_56;
		L_56 = Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9(L_54, L_55, Dictionary_2_ContainsKey_m6B4A7022D7F285ADA534A930ABE8365198D7F9B9_RuntimeMethod_var);
		if (!L_56)
		{
			goto IL_0185;
		}
	}
	{
		// Touch t = activeTouches[i];
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_57 = __this->___activeTouches_2;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_59;
		L_59 = Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D(L_57, L_58, Dictionary_2_get_Item_m2239250F69418A7F206EC4AB20D4B959CFDD9D1D_RuntimeMethod_var);
	}

IL_0185:
	{
		// for (int i = 0; i < 4; ++i)
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_018b:
	{
		// for (int i = 0; i < 4; ++i)
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) < ((int32_t)4)))
		{
			goto IL_0168;
		}
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.UnityTouchInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchInput__ctor_m2FA07699AF8BCDD03E339A95015AF103BBBEC6CF (UnityTouchInput_tB73EC8AB060D4728BCADF57145AB54E4A1BD5753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputEvent> activeEvents = new List<InputEvent>();
		List_1_t178789677B756A774C7F7133D134D0611697C67B* L_0 = (List_1_t178789677B756A774C7F7133D134D0611697C67B*)il2cpp_codegen_object_new(List_1_t178789677B756A774C7F7133D134D0611697C67B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565(L_0, List_1__ctor_m6344C5B7871F4AE4E98CE2BD0A79136C93D1E565_RuntimeMethod_var);
		__this->___activeEvents_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeEvents_0), (void*)L_0);
		// private readonly Dictionary<int, Touch> activeTouches = new Dictionary<int, Touch>();
		Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584* L_1 = (Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584*)il2cpp_codegen_object_new(Dictionary_2_t3270628AB9E4F1FE2A76763D1541B550CF74D584_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351(L_1, Dictionary_2__ctor_mA3C7DBC3EF9158F75F4DD4A0B999FB19086B5351_RuntimeMethod_var);
		__this->___activeTouches_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeTouches_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinZoomMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinZoomMeters { get; private set; }
		float L_0 = __this->___U3CMinZoomMetersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinZoomMeters(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinZoomMeters_m8E410C663CD436923904F0F71AC2518F744EF3CB (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinZoomMeters { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMinZoomMetersU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxZoomMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxZoomMeters { get; private set; }
		float L_0 = __this->___U3CMaxZoomMetersU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxZoomMeters(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxZoomMeters_mAE4F0A6F044F3B155EC7CF73C4D05960F83A4988 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxZoomMeters { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMaxZoomMetersU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinPitchDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinPitchDegrees { get; private set; }
		float L_0 = __this->___U3CMinPitchDegreesU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinPitchDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinPitchDegrees_mB96D36AA9F3299762B9AAC5D3B4E70B9C891D848 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinPitchDegrees { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMinPitchDegreesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxPitchDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxPitchDegrees { get; private set; }
		float L_0 = __this->___U3CMaxPitchDegreesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxPitchDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxPitchDegrees_mC939F4B73AAEA9072E8065038C76B818F2BDAEFF (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxPitchDegrees { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMaxPitchDegreesU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_VerticalOffsetMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_VerticalOffsetMeters_m5E283E16F3CE3C793B072C4044C1DAAA94EE6243 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float VerticalOffsetMeters { get; private set; } // the height of the camera focus off the ground
		float L_0 = __this->___U3CVerticalOffsetMetersU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_VerticalOffsetMeters(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_VerticalOffsetMeters_m4093315DCD47EE48DDF143DBDE2D002EB241187F (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float VerticalOffsetMeters { get; private set; } // the height of the camera focus off the ground
		float L_0 = ___value0;
		__this->___U3CVerticalOffsetMetersU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MinElevMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinElevMeters_m71CFBBA63EE882B6B4C0DD7A7918CABC71D3A6A9 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinElevMeters { get; private set; } // includes the vertical offset
		float L_0 = __this->___U3CMinElevMetersU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MinElevMeters(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinElevMeters_m142FB682AC858121BB3CD710BFEB19D8CB10DBAD (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinElevMeters { get; private set; } // includes the vertical offset
		float L_0 = ___value0;
		__this->___U3CMinElevMetersU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::get_MaxElevMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxElevMeters_m7FF7BFA433D22D8FD83CCF61A4881C28EF424A41 (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxElevMeters { get; private set; } // includes the vertical offset
		float L_0 = __this->___U3CMaxElevMetersU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::set_MaxElevMeters(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxElevMeters_mAC044E14D9E1AE5AFF5629715B27664AC012FBAD (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxElevMeters { get; private set; } // includes the vertical offset
		float L_0 = ___value0;
		__this->___U3CMaxElevMetersU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NianticCameraParameters__ctor_m59044FF7B0C78F07128F44F3414BC1ECA363C36D (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___minZoomMeters0, float ___maxZoomMeters1, float ___minPitchDegrees2, float ___maxPitchDegrees3, float ___verticalOffsetMeters4, const RuntimeMethod* method) 
{
	{
		// public NianticCameraParameters(
		//     float minZoomMeters,
		//     float maxZoomMeters,
		//     float minPitchDegrees,
		//     float maxPitchDegrees,
		//     float verticalOffsetMeters
		// )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// MinZoomMeters = minZoomMeters;
		float L_0 = ___minZoomMeters0;
		NianticCameraParameters_set_MinZoomMeters_m8E410C663CD436923904F0F71AC2518F744EF3CB_inline(__this, L_0, NULL);
		// MaxZoomMeters = maxZoomMeters;
		float L_1 = ___maxZoomMeters1;
		NianticCameraParameters_set_MaxZoomMeters_mAE4F0A6F044F3B155EC7CF73C4D05960F83A4988_inline(__this, L_1, NULL);
		// MinPitchDegrees = minPitchDegrees;
		float L_2 = ___minPitchDegrees2;
		NianticCameraParameters_set_MinPitchDegrees_mB96D36AA9F3299762B9AAC5D3B4E70B9C891D848_inline(__this, L_2, NULL);
		// MaxPitchDegrees = maxPitchDegrees;
		float L_3 = ___maxPitchDegrees3;
		NianticCameraParameters_set_MaxPitchDegrees_mC939F4B73AAEA9072E8065038C76B818F2BDAEFF_inline(__this, L_3, NULL);
		// VerticalOffsetMeters = verticalOffsetMeters;
		float L_4 = ___verticalOffsetMeters4;
		NianticCameraParameters_set_VerticalOffsetMeters_m4093315DCD47EE48DDF143DBDE2D002EB241187F_inline(__this, L_4, NULL);
		// MinElevMeters =
		//     verticalOffsetMeters + Mathf.Tan(MinPitchDegrees * Mathf.Deg2Rad) * minZoomMeters;
		float L_5 = ___verticalOffsetMeters4;
		float L_6;
		L_6 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(__this, NULL);
		float L_7;
		L_7 = tanf(((float)il2cpp_codegen_multiply(L_6, (0.0174532924f))));
		float L_8 = ___minZoomMeters0;
		NianticCameraParameters_set_MinElevMeters_m142FB682AC858121BB3CD710BFEB19D8CB10DBAD_inline(__this, ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_7, L_8)))), NULL);
		// MaxElevMeters =
		//     verticalOffsetMeters + Mathf.Tan(MaxPitchDegrees * Mathf.Deg2Rad) * maxZoomMeters;
		float L_9 = ___verticalOffsetMeters4;
		float L_10;
		L_10 = NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline(__this, NULL);
		float L_11;
		L_11 = tanf(((float)il2cpp_codegen_multiply(L_10, (0.0174532924f))));
		float L_12 = ___maxZoomMeters1;
		NianticCameraParameters_set_MaxElevMeters_mAC044E14D9E1AE5AFF5629715B27664AC012FBAD_inline(__this, ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12)))), NULL);
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::SetCameraParameters(Niantic.Platform.Util.OrbitCameraInternal.NianticCameraParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractZoomCurveEvaluator_SetCameraParameters_m603DAA3738C7605097561F7800F9DDB678EA7398 (AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13* __this, NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* ___cameraParameters0, const RuntimeMethod* method) 
{
	{
		// this.cameraParameters = cameraParameters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_0 = ___cameraParameters0;
		__this->___cameraParameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraParameters_0), (void*)L_0);
		// }
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::GetDistanceFromZoomFraction(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AbstractZoomCurveEvaluator_GetDistanceFromZoomFraction_mD2844E8EEEA413C9FF981C85E8F32BB20513C0D7 (AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13* __this, float ___zoomFraction0, const RuntimeMethod* method) 
{
	{
		// return CameraMathSupport.Map(
		//     zoomFraction,
		//     0.0f,
		//     1.0f,
		//     cameraParameters.MinZoomMeters,
		//     cameraParameters.MaxZoomMeters
		// );
		float L_0 = ___zoomFraction0;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_1 = __this->___cameraParameters_0;
		NullCheck(L_1);
		float L_2;
		L_2 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_1, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = __this->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_3, NULL);
		float L_5;
		L_5 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_0, (0.0f), (1.0f), L_2, L_4, NULL);
		return L_5;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractZoomCurveEvaluator__ctor_mCB645055EE2D23222594E405FF444153764AD25A (AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.AbstractAngularZoomCurveEvaluator::GetElevationFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AbstractAngularZoomCurveEvaluator_GetElevationFromDistance_m2B32CD5D8150EBC2D1860B4D3C499F76E2966CAE (AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angleDegrees = GetAngleFromDistance(distanceMeters);
		float L_0 = ___distanceMeters0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, float >::Invoke(8 /* System.Single Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::GetAngleFromDistance(System.Single) */, __this, L_0);
		// float angleRadians = angleDegrees * Mathf.Deg2Rad;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		// return cameraParameters.VerticalOffsetMeters + Mathf.Tan(angleRadians) * distanceMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_2 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_2);
		float L_3;
		L_3 = NianticCameraParameters_get_VerticalOffsetMeters_m5E283E16F3CE3C793B072C4044C1DAAA94EE6243_inline(L_2, NULL);
		float L_4 = V_0;
		float L_5;
		L_5 = tanf(L_4);
		float L_6 = ___distanceMeters0;
		return ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_5, L_6))));
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractAngularZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAngularZoomCurveEvaluator__ctor_mD9707D2AEE53F49A50F435313457A65D42C842F2 (AbstractAngularZoomCurveEvaluator_tB8A98F247C7C7B4A5CAA97AD40339109E64978AC* __this, const RuntimeMethod* method) 
{
	{
		AbstractZoomCurveEvaluator__ctor_mCB645055EE2D23222594E405FF444153764AD25A(__this, NULL);
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.LinearAngleZoomCurveEvaluator::GetAngleFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearAngleZoomCurveEvaluator_GetAngleFromDistance_m498DAB0F997AB0F3D11866E4CEF97E986901573A (LinearAngleZoomCurveEvaluator_t4B4B178EBCF9BACD93738ED4226F5F89F2AAD9D7* __this, float ___distanceM0, const RuntimeMethod* method) 
{
	{
		// return CameraMathSupport.Map(
		//     distanceM,
		//     cameraParameters.MinZoomMeters,
		//     cameraParameters.MaxZoomMeters,
		//     cameraParameters.MinPitchDegrees,
		//     cameraParameters.MaxPitchDegrees
		// );
		float L_0 = ___distanceM0;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_1 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_1);
		float L_2;
		L_2 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_1, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_3, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_5 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_5);
		float L_6;
		L_6 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(L_5, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_7 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_7);
		float L_8;
		L_8 = NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline(L_7, NULL);
		float L_9;
		L_9 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_0, L_2, L_4, L_6, L_8, NULL);
		return L_9;
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.LinearAngleZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearAngleZoomCurveEvaluator__ctor_mC0BD4B760368AA308951C5A271EA0189871396E6 (LinearAngleZoomCurveEvaluator_t4B4B178EBCF9BACD93738ED4226F5F89F2AAD9D7* __this, const RuntimeMethod* method) 
{
	{
		AbstractAngularZoomCurveEvaluator__ctor_mD9707D2AEE53F49A50F435313457A65D42C842F2(__this, NULL);
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.QuadraticAngleZoomCurveEvaluator::GetAngleFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float QuadraticAngleZoomCurveEvaluator_GetAngleFromDistance_m6A9A1C7BED2A617CABFD28090AB13DE19C135111 (QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5* __this, float ___distanceM0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float distanceFrac =
		//     (distanceM - cameraParameters.MinZoomMeters)
		//     / (cameraParameters.MaxZoomMeters - cameraParameters.MinZoomMeters);
		float L_0 = ___distanceM0;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_1 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_1);
		float L_2;
		L_2 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_1, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_3, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_5 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_5);
		float L_6;
		L_6 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_5, NULL);
		// float yFrac = distanceFrac * distanceFrac;
		float L_7 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_2))/((float)il2cpp_codegen_subtract(L_4, L_6))));
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_7));
		// float pitchDelta = cameraParameters.MaxPitchDegrees - cameraParameters.MinPitchDegrees;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_8 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_8);
		float L_9;
		L_9 = NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline(L_8, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_10 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_10);
		float L_11;
		L_11 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(L_10, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		// return cameraParameters.MinPitchDegrees + yFrac * pitchDelta;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_12 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_12);
		float L_13;
		L_13 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(L_12, NULL);
		float L_14 = V_0;
		float L_15 = V_1;
		return ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.QuadraticAngleZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadraticAngleZoomCurveEvaluator__ctor_m919DF04F5B39159368E0C2689EBCAF01C1DD6424 (QuadraticAngleZoomCurveEvaluator_t0880100C69CB4AB624750E4C93DD704CA7AFF6A5* __this, const RuntimeMethod* method) 
{
	{
		AbstractAngularZoomCurveEvaluator__ctor_mD9707D2AEE53F49A50F435313457A65D42C842F2(__this, NULL);
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubicAngleZoomCurveEvaluator__ctor_m2B03A520C78C53E62D9DBE61AFB5F6B0E16112F0 (CubicAngleZoomCurveEvaluator_t2E011E6FCF12E33ED45BE8EC647222D94363278A* __this, float ___y00, float ___y11, float ___y22, float ___y33, const RuntimeMethod* method) 
{
	{
		// public CubicAngleZoomCurveEvaluator(float y0, float y1, float y2, float y3)
		AbstractAngularZoomCurveEvaluator__ctor_mD9707D2AEE53F49A50F435313457A65D42C842F2(__this, NULL);
		// this.y0 = y0;
		float L_0 = ___y00;
		__this->___y0_1 = L_0;
		// this.y1 = y1;
		float L_1 = ___y11;
		__this->___y1_2 = L_1;
		// this.y2 = y2;
		float L_2 = ___y22;
		__this->___y2_3 = L_2;
		// this.y3 = y3;
		float L_3 = ___y33;
		__this->___y3_4 = L_3;
		// }
		return;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicAngleZoomCurveEvaluator::GetAngleFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CubicAngleZoomCurveEvaluator_GetAngleFromDistance_m0F2425BAC79FE7D2A86B07931B421DE58BC32BB3 (CubicAngleZoomCurveEvaluator_t2E011E6FCF12E33ED45BE8EC647222D94363278A* __this, float ___distanceM0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float x =
		//     (distanceM - cameraParameters.MinZoomMeters)
		//     / (cameraParameters.MaxZoomMeters - cameraParameters.MinZoomMeters);
		float L_0 = ___distanceM0;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_1 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_1);
		float L_2;
		L_2 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_1, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_3, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_5 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_5);
		float L_6;
		L_6 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_5, NULL);
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_2))/((float)il2cpp_codegen_subtract(L_4, L_6))));
		// float yFrac = (float)(
		//     Math.Pow(1.0f - x, 3.0f) * y0
		//     + 3 * Math.Pow(1.0f - x, 2.0f) * x * y1
		//     + 3 * (1.0f - x) * x * x * y2
		//     + x * x * x * y3
		// );
		float L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract((1.0f), L_7))), (3.0), NULL);
		float L_9 = __this->___y0_1;
		float L_10 = V_0;
		double L_11;
		L_11 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(((double)((float)il2cpp_codegen_subtract((1.0f), L_10))), (2.0), NULL);
		float L_12 = V_0;
		float L_13 = __this->___y1_2;
		float L_14 = V_0;
		float L_15 = V_0;
		float L_16 = V_0;
		float L_17 = __this->___y2_3;
		float L_18 = V_0;
		float L_19 = V_0;
		float L_20 = V_0;
		float L_21 = __this->___y3_4;
		V_1 = ((float)((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_8, ((double)L_9))), ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply((3.0), L_11)), ((double)L_12))), ((double)L_13))))), ((double)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), ((float)il2cpp_codegen_subtract((1.0f), L_14)))), L_15)), L_16)), L_17))))), ((double)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_19)), L_20)), L_21))))));
		// float pitchDelta = cameraParameters.MaxPitchDegrees - cameraParameters.MinPitchDegrees;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_22 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_22);
		float L_23;
		L_23 = NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline(L_22, NULL);
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_24 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_24);
		float L_25;
		L_25 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(L_24, NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_23, L_25));
		// return cameraParameters.MinPitchDegrees + yFrac * pitchDelta;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_26 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_26);
		float L_27;
		L_27 = NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline(L_26, NULL);
		float L_28 = V_1;
		float L_29 = V_2;
		return ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(L_28, L_29))));
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearElevationZoomCurveEvaluator__ctor_mCFD8073BB5BC2DDBF5004B00192703E98B16834E (LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___controlPoints0, const RuntimeMethod* method) 
{
	{
		// public LinearElevationZoomCurveEvaluator(List<Vector2> controlPoints)
		AbstractElevationZoomCurveEvaluator__ctor_m92E0D194561359A533EE37B9EB6A009F554A900B(__this, NULL);
		// this.controlPoints = controlPoints;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___controlPoints0;
		__this->___controlPoints_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlPoints_1), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator::FindSpan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LinearElevationZoomCurveEvaluator_FindSpan_m219D75BEDCD6D405B75B338C50E3B891B43FDEF0 (LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (distanceMeters < controlPoints[0].x)
		float L_0 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___controlPoints_1;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_1, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_3 = L_2.___x_0;
		if ((!(((float)L_0) < ((float)L_3))))
		{
			goto IL_0016;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0016:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		V_0 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		// if (
		//     (distanceMeters >= controlPoints[i].x)
		//     && (distanceMeters <= controlPoints[i + 1].x)
		// )
		float L_4 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = __this->___controlPoints_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, L_6, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_8 = L_7.___x_0;
		if ((!(((float)L_4) >= ((float)L_8))))
		{
			goto IL_0046;
		}
	}
	{
		float L_9 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_10 = __this->___controlPoints_1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_13 = L_12.___x_0;
		if ((!(((float)L_9) <= ((float)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		// return i;
		int32_t L_14 = V_0;
		return L_14;
	}

IL_0046:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		int32_t L_16 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_17 = __this->___controlPoints_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_17, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1)))))
		{
			goto IL_001a;
		}
	}
	{
		// return controlPoints.Count;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_19 = __this->___controlPoints_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_19, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		return L_20;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.LinearElevationZoomCurveEvaluator::GetElevationFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearElevationZoomCurveEvaluator_GetElevationFromDistance_mFEBF618621EE5D08CC3F5742B995C34A9597B8A6 (LinearElevationZoomCurveEvaluator_tA28E3EC6D43C38A1017EC62F236AF632533EC9DD* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	{
		// int spanIndex = FindSpan(distanceMeters);
		float L_0 = ___distanceMeters0;
		int32_t L_1;
		L_1 = LinearElevationZoomCurveEvaluator_FindSpan_m219D75BEDCD6D405B75B338C50E3B891B43FDEF0(__this, L_0, NULL);
		V_0 = L_1;
		// if (spanIndex < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		// minDist = cameraParameters.MinZoomMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_3, NULL);
		V_1 = L_4;
		// maxDist = controlPoints[0].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = __this->___controlPoints_1;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_7 = L_6.___x_0;
		V_2 = L_7;
		// minElev = cameraParameters.MinElevMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_8 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_8);
		float L_9;
		L_9 = NianticCameraParameters_get_MinElevMeters_m71CFBBA63EE882B6B4C0DD7A7918CABC71D3A6A9_inline(L_8, NULL);
		V_3 = L_9;
		// maxElev = controlPoints[0].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_10 = __this->___controlPoints_1;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_10, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_12 = L_11.___y_1;
		V_4 = L_12;
		goto IL_00fb;
	}

IL_004e:
	{
		// else if (spanIndex > controlPoints.Count - 1)
		int32_t L_13 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_14 = __this->___controlPoints_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_14, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1)))))
		{
			goto IL_00ae;
		}
	}
	{
		// int lastIndex = controlPoints.Count - 1;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_16 = __this->___controlPoints_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_16, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		// minDist = controlPoints[lastIndex].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_18 = __this->___controlPoints_1;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_18, L_19, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_21 = L_20.___x_0;
		V_1 = L_21;
		// maxDist = cameraParameters.MaxZoomMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_22 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_22);
		float L_23;
		L_23 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_22, NULL);
		V_2 = L_23;
		// minElev = controlPoints[lastIndex].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_24 = __this->___controlPoints_1;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_24, L_25, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_27 = L_26.___y_1;
		V_3 = L_27;
		// maxElev = cameraParameters.MaxElevMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_28 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_28);
		float L_29;
		L_29 = NianticCameraParameters_get_MaxElevMeters_m7FF7BFA433D22D8FD83CCF61A4881C28EF424A41_inline(L_28, NULL);
		V_4 = L_29;
		goto IL_00fb;
	}

IL_00ae:
	{
		// minDist = controlPoints[spanIndex].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_30 = __this->___controlPoints_1;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_30, L_31, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_33 = L_32.___x_0;
		V_1 = L_33;
		// maxDist = controlPoints[spanIndex + 1].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_34 = __this->___controlPoints_1;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_34, ((int32_t)il2cpp_codegen_add(L_35, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_37 = L_36.___x_0;
		V_2 = L_37;
		// minElev = controlPoints[spanIndex].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_38 = __this->___controlPoints_1;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_38, L_39, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_41 = L_40.___y_1;
		V_3 = L_41;
		// maxElev = controlPoints[spanIndex + 1].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_42 = __this->___controlPoints_1;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_42, ((int32_t)il2cpp_codegen_add(L_43, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_45 = L_44.___y_1;
		V_4 = L_45;
	}

IL_00fb:
	{
		// return CameraMathSupport.Map(distanceMeters, minDist, maxDist, minElev, maxElev);
		float L_46 = ___distanceMeters0;
		float L_47 = V_1;
		float L_48 = V_2;
		float L_49 = V_3;
		float L_50 = V_4;
		float L_51;
		L_51 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_46, L_47, L_48, L_49, L_50, NULL);
		return L_51;
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
// System.Single Niantic.Platform.Util.OrbitCameraInternal.AbstractElevationZoomCurveEvaluator::GetAngleFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AbstractElevationZoomCurveEvaluator_GetAngleFromDistance_m0ED1E0BFF1DF63A99DA5CA6556DA98CC4645C481 (AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float elevMeters = GetElevationFromDistance(distanceMeters);
		float L_0 = ___distanceMeters0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, float >::Invoke(9 /* System.Single Niantic.Platform.Util.OrbitCameraInternal.AbstractZoomCurveEvaluator::GetElevationFromDistance(System.Single) */, __this, L_0);
		// float elevAboveFocusMeters = elevMeters - cameraParameters.VerticalOffsetMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_2 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_2);
		float L_3;
		L_3 = NianticCameraParameters_get_VerticalOffsetMeters_m5E283E16F3CE3C793B072C4044C1DAAA94EE6243_inline(L_2, NULL);
		// float angleRadians = Mathf.Atan2(elevAboveFocusMeters, distanceMeters);
		float L_4 = ___distanceMeters0;
		float L_5;
		L_5 = atan2f(((float)il2cpp_codegen_subtract(L_1, L_3)), L_4);
		V_0 = L_5;
		// float angleDegrees = Mathf.Rad2Deg * angleRadians;
		float L_6 = V_0;
		// return angleDegrees;
		return ((float)il2cpp_codegen_multiply((57.2957802f), L_6));
	}
}
// System.Void Niantic.Platform.Util.OrbitCameraInternal.AbstractElevationZoomCurveEvaluator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractElevationZoomCurveEvaluator__ctor_m92E0D194561359A533EE37B9EB6A009F554A900B (AbstractElevationZoomCurveEvaluator_tD53A7ABE45DB65B1F492AF4B52AEFB16360B728A* __this, const RuntimeMethod* method) 
{
	{
		AbstractZoomCurveEvaluator__ctor_mCB645055EE2D23222594E405FF444153764AD25A(__this, NULL);
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
// System.Void Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::.ctor(System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubicHermiteSplineElevationZoomCurveEvaluator__ctor_mB26270634EADB7C25C10F7D2A5D8E54C0BEA32C3 (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___controlPoints0, const RuntimeMethod* method) 
{
	{
		// public CubicHermiteSplineElevationZoomCurveEvaluator(List<Vector2> controlPoints)
		AbstractElevationZoomCurveEvaluator__ctor_m92E0D194561359A533EE37B9EB6A009F554A900B(__this, NULL);
		// this.controlPoints = controlPoints;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___controlPoints0;
		__this->___controlPoints_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlPoints_1), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::findSpan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CubicHermiteSplineElevationZoomCurveEvaluator_findSpan_m2F0BC462D32EC08798A23926779100439E4C403B (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (distanceMeters < controlPoints[0].x)
		float L_0 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___controlPoints_1;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_1, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_3 = L_2.___x_0;
		if ((!(((float)L_0) < ((float)L_3))))
		{
			goto IL_0016;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0016:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		V_0 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		// if (
		//     (distanceMeters >= controlPoints[i].x)
		//     && (distanceMeters <= controlPoints[i + 1].x)
		// )
		float L_4 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = __this->___controlPoints_1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, L_6, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_8 = L_7.___x_0;
		if ((!(((float)L_4) >= ((float)L_8))))
		{
			goto IL_0046;
		}
	}
	{
		float L_9 = ___distanceMeters0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_10 = __this->___controlPoints_1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_13 = L_12.___x_0;
		if ((!(((float)L_9) <= ((float)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		// return i;
		int32_t L_14 = V_0;
		return L_14;
	}

IL_0046:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < controlPoints.Count - 1; ++i)
		int32_t L_16 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_17 = __this->___controlPoints_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_17, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1)))))
		{
			goto IL_001a;
		}
	}
	{
		// return controlPoints.Count;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_19 = __this->___controlPoints_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_19, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		return L_20;
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::getTangent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CubicHermiteSplineElevationZoomCurveEvaluator_getTangent_m806E06CD4D102914064801BF919D952BDEB4CC76 (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, int32_t ___controlIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (controlIndex == 0)
		int32_t L_0 = ___controlIndex0;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		// delta = controlPoints[1] - controlPoints[0];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___controlPoints_1;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_1, 1, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = __this->___controlPoints_1;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_3, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// return delta.y / delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		return ((float)(L_7/L_9));
	}

IL_002f:
	{
		// if (controlIndex == controlPoints.Count - 1)
		int32_t L_10 = ___controlIndex0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_11 = __this->___controlPoints_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_11, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1))))))
		{
			goto IL_006d;
		}
	}
	{
		// delta = controlPoints[controlIndex] - controlPoints[controlIndex - 1];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_13 = __this->___controlPoints_1;
		int32_t L_14 = ___controlIndex0;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_13, L_14, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_16 = __this->___controlPoints_1;
		int32_t L_17 = ___controlIndex0;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_15, L_18, NULL);
		V_0 = L_19;
		// return delta.y / delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___x_0;
		return ((float)(L_21/L_23));
	}

IL_006d:
	{
		// Vector2 cpPlus = controlPoints[controlIndex + 1];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_24 = __this->___controlPoints_1;
		int32_t L_25 = ___controlIndex0;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_24, ((int32_t)il2cpp_codegen_add(L_25, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		// Vector2 cpMinus = controlPoints[controlIndex - 1];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_27 = __this->___controlPoints_1;
		int32_t L_28 = ___controlIndex0;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_1 = L_29;
		// delta = cpPlus - cpMinus;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_26, L_30, NULL);
		V_0 = L_31;
		// return delta.y / delta.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___x_0;
		return ((float)(L_33/L_35));
	}
}
// System.Single Niantic.Platform.Util.OrbitCameraInternal.CubicHermiteSplineElevationZoomCurveEvaluator::GetElevationFromDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CubicHermiteSplineElevationZoomCurveEvaluator_GetElevationFromDistance_mC68708E329251899F239714192C17A9CA558B320 (CubicHermiteSplineElevationZoomCurveEvaluator_t951C741818CA2A4B4AFDA079D9E0F8CA41BF096E* __this, float ___distanceMeters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	{
		// int spanIndex = findSpan(distanceMeters);
		float L_0 = ___distanceMeters0;
		int32_t L_1;
		L_1 = CubicHermiteSplineElevationZoomCurveEvaluator_findSpan_m2F0BC462D32EC08798A23926779100439E4C403B(__this, L_0, NULL);
		V_0 = L_1;
		// if (spanIndex < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// float minDist = cameraParameters.MinZoomMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_3 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_3);
		float L_4;
		L_4 = NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline(L_3, NULL);
		V_11 = L_4;
		// float maxDist = controlPoints[0].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_5 = __this->___controlPoints_1;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_5, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_7 = L_6.___x_0;
		V_12 = L_7;
		// float minElev = cameraParameters.MinElevMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_8 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_8);
		float L_9;
		L_9 = NianticCameraParameters_get_MinElevMeters_m71CFBBA63EE882B6B4C0DD7A7918CABC71D3A6A9_inline(L_8, NULL);
		V_13 = L_9;
		// float maxElev = controlPoints[0].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_10 = __this->___controlPoints_1;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_10, 0, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_12 = L_11.___y_1;
		V_14 = L_12;
		// return CameraMathSupport.Map(distanceMeters, minDist, maxDist, minElev, maxElev);
		float L_13 = ___distanceMeters0;
		float L_14 = V_11;
		float L_15 = V_12;
		float L_16 = V_13;
		float L_17 = V_14;
		float L_18;
		L_18 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_13, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}

IL_005b:
	{
		// else if (spanIndex > controlPoints.Count - 1)
		int32_t L_19 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_20 = __this->___controlPoints_1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_20, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_00cb;
		}
	}
	{
		// int lastIndex = controlPoints.Count - 1;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_22 = __this->___controlPoints_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_22, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		// float minDist = controlPoints[lastIndex].x;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_24 = __this->___controlPoints_1;
		int32_t L_25 = V_15;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_24, L_25, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_27 = L_26.___x_0;
		V_16 = L_27;
		// float maxDist = cameraParameters.MaxZoomMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_28 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_28);
		float L_29;
		L_29 = NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline(L_28, NULL);
		V_17 = L_29;
		// float minElev = controlPoints[lastIndex].y;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_30 = __this->___controlPoints_1;
		int32_t L_31 = V_15;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_30, L_31, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		float L_33 = L_32.___y_1;
		V_18 = L_33;
		// float maxElev = cameraParameters.MaxElevMeters;
		NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* L_34 = ((AbstractZoomCurveEvaluator_t56692CBD506F22F9A98F5BC942A8D825A4E0BD13*)__this)->___cameraParameters_0;
		NullCheck(L_34);
		float L_35;
		L_35 = NianticCameraParameters_get_MaxElevMeters_m7FF7BFA433D22D8FD83CCF61A4881C28EF424A41_inline(L_34, NULL);
		V_19 = L_35;
		// return CameraMathSupport.Map(distanceMeters, minDist, maxDist, minElev, maxElev);
		float L_36 = ___distanceMeters0;
		float L_37 = V_16;
		float L_38 = V_17;
		float L_39 = V_18;
		float L_40 = V_19;
		float L_41;
		L_41 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_36, L_37, L_38, L_39, L_40, NULL);
		return L_41;
	}

IL_00cb:
	{
		// float tangent0 = getTangent(spanIndex);
		int32_t L_42 = V_0;
		float L_43;
		L_43 = CubicHermiteSplineElevationZoomCurveEvaluator_getTangent_m806E06CD4D102914064801BF919D952BDEB4CC76(__this, L_42, NULL);
		V_1 = L_43;
		// float tangent1 = getTangent(spanIndex + 1);
		int32_t L_44 = V_0;
		float L_45;
		L_45 = CubicHermiteSplineElevationZoomCurveEvaluator_getTangent_m806E06CD4D102914064801BF919D952BDEB4CC76(__this, ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		V_2 = L_45;
		// Vector2 control0 = controlPoints[spanIndex];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_46 = __this->___controlPoints_1;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_46, L_47, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_3 = L_48;
		// Vector2 control1 = controlPoints[spanIndex + 1];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_49 = __this->___controlPoints_1;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_49, ((int32_t)il2cpp_codegen_add(L_50, 1)), List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		V_4 = L_51;
		// float t = CameraMathSupport.Map(distanceMeters, control0.x, control1.x, 0.0f, 1.0f);
		float L_52 = ___distanceMeters0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_3;
		float L_54 = L_53.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_4;
		float L_56 = L_55.___x_0;
		float L_57;
		L_57 = CameraMathSupport_Map_mE85F6989B0A7C549AAABBB6EA5ACAB8F56DE4D61(L_52, L_54, L_56, (0.0f), (1.0f), NULL);
		V_5 = L_57;
		// float t2 = t * t;
		float L_58 = V_5;
		float L_59 = V_5;
		V_6 = ((float)il2cpp_codegen_multiply(L_58, L_59));
		// float t3 = t2 * t;
		float L_60 = V_6;
		float L_61 = V_5;
		V_7 = ((float)il2cpp_codegen_multiply(L_60, L_61));
		// float h00 = 2 * t3 - 3 * t2 + 1;
		float L_62 = V_7;
		float L_63 = V_6;
		// float h10 = t3 - 2 * t2 + t;
		float L_64 = V_7;
		float L_65 = V_6;
		float L_66 = V_5;
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_64, ((float)il2cpp_codegen_multiply((2.0f), L_65)))), L_66));
		// float h01 = -2 * t3 + 3 * t2;
		float L_67 = V_7;
		float L_68 = V_6;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_67)), ((float)il2cpp_codegen_multiply((3.0f), L_68))));
		// float h11 = t3 - t2;
		float L_69 = V_7;
		float L_70 = V_6;
		V_10 = ((float)il2cpp_codegen_subtract(L_69, L_70));
		// float p = h00 * control0.y + h10 * tangent0 + h01 * control1.y + h11 * tangent1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_3;
		float L_72 = L_71.___y_1;
		float L_73 = V_8;
		float L_74 = V_1;
		float L_75 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = V_4;
		float L_77 = L_76.___y_1;
		float L_78 = V_10;
		float L_79 = V_2;
		// return p;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_62)), ((float)il2cpp_codegen_multiply((3.0f), L_63)))), (1.0f))), L_72)), ((float)il2cpp_codegen_multiply(L_73, L_74)))), ((float)il2cpp_codegen_multiply(L_75, L_77)))), ((float)il2cpp_codegen_multiply(L_78, L_79))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraGestureTracker_get_RotationAngleDegrees_mDEEB58C4444BD5E1476CECD48CA848D36CC71750_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// get { return rotationAngleDegrees; }
		float L_0 = __this->___rotationAngleDegrees_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraGestureTracker_get_ZoomFraction_m0269FE5E148C92442FDC04006AA926F48D1E9996_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// get { return _zoomFraction; }
		float L_0 = __this->____zoomFraction_7;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
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
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraGestureTracker_set_GesturesEnabled_m1265D784B73909ED50EEDED2D99C945082B9DABB_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool GesturesEnabled { get; set; }
		bool L_0 = ___value0;
		__this->___U3CGesturesEnabledU3Ek__BackingField_23 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraGestureTracker_get_GesturesEnabled_mFF16F40D8599146163BE596872F0E511E81B3CE7_inline (CameraGestureTracker_t6B267EFE0B391004712B6EC1DFA5F6B323060163* __this, const RuntimeMethod* method) 
{
	{
		// public bool GesturesEnabled { get; set; }
		bool L_0 = __this->___U3CGesturesEnabledU3Ek__BackingField_23;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputEvent_set_ConsumedBy_m44EE46DE45C42A208850763F3BA7EFC4CF14A71A_inline (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public IGesture ConsumedBy { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CConsumedByU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConsumedByU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InputEvent_get_ConsumedBy_m83C1CF6626D789C3DB701078832C55649B45091D_inline (InputEvent_t451C485C7BDB9F85F7F5FD6A06212405823CC114* __this, const RuntimeMethod* method) 
{
	{
		// public IGesture ConsumedBy { get; private set; }
		RuntimeObject* L_0 = __this->___U3CConsumedByU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScreenSpaceInputLayer_set_Priority_mC10910F344EFBCF3A42E7B243D65AC2D6E9679E0_inline (ScreenSpaceInputLayer_tA5FB35E8912FDA27450B9BE38D4734684A6B919B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public InputLayerPriority Priority { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3CPriorityU3Ek__BackingField_1 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
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
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinZoomMeters_m8E410C663CD436923904F0F71AC2518F744EF3CB_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinZoomMeters { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMinZoomMetersU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxZoomMeters_mAE4F0A6F044F3B155EC7CF73C4D05960F83A4988_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxZoomMeters { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMaxZoomMetersU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinPitchDegrees_mB96D36AA9F3299762B9AAC5D3B4E70B9C891D848_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinPitchDegrees { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMinPitchDegreesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxPitchDegrees_mC939F4B73AAEA9072E8065038C76B818F2BDAEFF_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxPitchDegrees { get; private set; }
		float L_0 = ___value0;
		__this->___U3CMaxPitchDegreesU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_VerticalOffsetMeters_m4093315DCD47EE48DDF143DBDE2D002EB241187F_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float VerticalOffsetMeters { get; private set; } // the height of the camera focus off the ground
		float L_0 = ___value0;
		__this->___U3CVerticalOffsetMetersU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinPitchDegrees_mF096884AE013DD58F282B0AD94F64B8103158384_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinPitchDegrees { get; private set; }
		float L_0 = __this->___U3CMinPitchDegreesU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MinElevMeters_m142FB682AC858121BB3CD710BFEB19D8CB10DBAD_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MinElevMeters { get; private set; } // includes the vertical offset
		float L_0 = ___value0;
		__this->___U3CMinElevMetersU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxPitchDegrees_mED52F500938BE910DF1E481641148FB810DAF39F_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxPitchDegrees { get; private set; }
		float L_0 = __this->___U3CMaxPitchDegreesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NianticCameraParameters_set_MaxElevMeters_mAC044E14D9E1AE5AFF5629715B27664AC012FBAD_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxElevMeters { get; private set; } // includes the vertical offset
		float L_0 = ___value0;
		__this->___U3CMaxElevMetersU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinZoomMeters_m41B920A2A38665AF3635B205486CA285164B890C_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinZoomMeters { get; private set; }
		float L_0 = __this->___U3CMinZoomMetersU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxZoomMeters_m9D00A80248835A7F3261B91F5347D72F527D11DA_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxZoomMeters { get; private set; }
		float L_0 = __this->___U3CMaxZoomMetersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_VerticalOffsetMeters_m5E283E16F3CE3C793B072C4044C1DAAA94EE6243_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float VerticalOffsetMeters { get; private set; } // the height of the camera focus off the ground
		float L_0 = __this->___U3CVerticalOffsetMetersU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MinElevMeters_m71CFBBA63EE882B6B4C0DD7A7918CABC71D3A6A9_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MinElevMeters { get; private set; } // includes the vertical offset
		float L_0 = __this->___U3CMinElevMetersU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NianticCameraParameters_get_MaxElevMeters_m7FF7BFA433D22D8FD83CCF61A4881C28EF424A41_inline (NianticCameraParameters_t9D41F458EC8534002A8A1BDBFC99428B4C7308C0* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxElevMeters { get; private set; } // includes the vertical offset
		float L_0 = __this->___U3CMaxElevMetersU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB7DF3AB307233C9FB7B7B9B9C28FFE5756292FDD_gshared_inline (Nullable_1_t1D5447663DBDBCE4D6CEE072BD723E4AE5FE4D89* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2E9343B9161EB12C0123A2A9801D2BD86422CEEB_gshared_inline (Nullable_1_tAC9037ECF4C188DFFE614617119CAC19A784F9FD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
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

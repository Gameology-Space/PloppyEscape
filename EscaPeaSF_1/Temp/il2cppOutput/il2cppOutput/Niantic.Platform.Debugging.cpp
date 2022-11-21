#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>
struct Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3;
// System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>
struct Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0;
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Debugging.ILogStream>
struct IEnumerable_1_tFE9DD4A8A725F7DDE7FA3E400E37DA60129972B1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Niantic.Platform.Debugging.LogLevel>
struct KeyCollection_t298AEF328F8E70A4D81944AE4A7125937354EE12;
// System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>
struct List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Niantic.Platform.Debugging.LogLevel>
struct ValueCollection_t9BF3DDEA6BB5C4AD4E70BFD41D5BF2D6EFE02034;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Niantic.Platform.Debugging.LogLevel>[]
struct EntryU5BU5D_t789A24CFCD9EB08C10F2A19562BEC680C92BE543;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Niantic.Platform.Debugging.ILogStream[]
struct ILogStreamU5BU5D_tCD7C2DC93E48BF08DD6A3A2F7F5043C3B77B5AFA;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Niantic.Platform.Debugging.AssertException
struct AssertException_tE9AA329E3EFA97B279CA02F370B07B85AF724235;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Niantic.Platform.Debugging.ConsoleLogger
struct ConsoleLogger_t2689FDC15E4C1EB48441175927FE26808C4C2266;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Niantic.Platform.Debugging.ILogStream
struct ILogStream_t77EDC7F2AE2A72625CE504F710F23C1664E68A27;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogStream_t77EDC7F2AE2A72625CE504F710F23C1664E68A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EFCC889998296F28CD1CF7F84B3FA40E4DBD272;
IL2CPP_EXTERN_C String_t* _stringLiteral1DF7E2A631CAB378EF91961C971BC30959F95C81;
IL2CPP_EXTERN_C String_t* _stringLiteral2B7B40541B438E38BB169E21FF3A6E7B462197BB;
IL2CPP_EXTERN_C String_t* _stringLiteral31073DF89A7B72AF250C12FB001BAFF9061AC8B0;
IL2CPP_EXTERN_C String_t* _stringLiteral57E8EB68AF96BBDDE4AF00B41383034ACAD5BBE0;
IL2CPP_EXTERN_C String_t* _stringLiteral6D04C3E24FF7A5A1CD314862018CAC584EAD3AC6;
IL2CPP_EXTERN_C String_t* _stringLiteralA2FDD722570B4B924333C945C89B93C770413F47;
IL2CPP_EXTERN_C String_t* _stringLiteralB192D32B17688E4F7F07F634CC2C8115E1D078CC;
IL2CPP_EXTERN_C String_t* _stringLiteralD272FF7E9E10456FD3C14695B52947B65B8B45F0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_Throws_TisException_t_m56249AECC6AE23AF43B083FC2FF529DC18124507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB2292CDA0F2F4C45D23F38DF0FF55BC699C4B571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4D931F59F4611A3B31C0153840FF516275CC06D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9FE0E4D7186FD7496D46FAA1C4F885972B2156E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m74ED3F31A5B6FABBE61F91F81420F40989344761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m027FF3B8E472FF2ABF0B9E6BD312E5F2B4E7CFE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m136A195520EC238BE305E8EAA34A817E73ADF105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE3863CC8531222AA9A15D82B5DC9084061C0A78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DE9E6894C800BEDADF79F10436D71B1F126A5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD6C4CC96BC2F13DE76E9A6D4D7CB2A56EFC5F535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m48AD71DB41E19C7A16DAA527FAB4783983293D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE795C0651B03BF50C4D3850FE47C0BF72EE30A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1532C4D1717561E5C4538033EF3C6198864FF4AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF5D235FCB026D10E10D25BD998E283E1C87D11B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m5CBB8762002B40EE3E13762AE770AF7D428AE73F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m49F6BF3E2F5EAA0CE82275D669F8A7B0ECD13172_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA0D3EF7728D0B4F47A489207D7E272403F9EBF50 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>
struct Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t789A24CFCD9EB08C10F2A19562BEC680C92BE543* ____entries_1;
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
	KeyCollection_t298AEF328F8E70A4D81944AE4A7125937354EE12* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9BF3DDEA6BB5C4AD4E70BFD41D5BF2D6EFE02034* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>
struct List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ILogStreamU5BU5D_tCD7C2DC93E48BF08DD6A3A2F7F5043C3B77B5AFA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ILogStreamU5BU5D_tCD7C2DC93E48BF08DD6A3A2F7F5043C3B77B5AFA* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// Niantic.Platform.Debugging.Assert
struct Assert_t8B87A4EFA7935A55F36D615BA169E54788F8FDBA  : public RuntimeObject
{
};

// Niantic.Platform.Debugging.ConsoleLogger
struct ConsoleLogger_t2689FDC15E4C1EB48441175927FE26808C4C2266  : public RuntimeObject
{
};

// Niantic.Platform.Debugging.Log
struct Log_tD728FC64B03F97781368B5F3206FD09AA530FDB6  : public RuntimeObject
{
};

// Niantic.Platform.Debugging.LogService
struct LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05  : public RuntimeObject
{
};

struct LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields
{
	// System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream> Niantic.Platform.Debugging.LogService::_streams
	List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* ____streams_1;
	// System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel> Niantic.Platform.Debugging.LogService::_channelMaxLogLevels
	Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* ____channelMaxLogLevels_2;
	// Niantic.Platform.Debugging.LogLevel Niantic.Platform.Debugging.LogService::_defaultMaxLogLevel
	int32_t ____defaultMaxLogLevel_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Debugging.ILogStream>
struct Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Nullable`1<Niantic.Platform.Debugging.LogLevel>
struct Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Niantic.Platform.Debugging.AssertException
struct AssertException_tE9AA329E3EFA97B279CA02F370B07B85AF724235  : public Exception_t
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void Niantic.Platform.Debugging.Assert::Throws<System.Object>(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Throws_TisRuntimeObject_mD4F7B0CF804B04EBCFED4A4D6F7131985E5190B2_gshared (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0786A6332E06581557A6E9D4DA5000AF5BC8A373_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0395FEE6C1CD71B9CA22784FE500574448F135D2_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared (Dictionary_2_t2A9A7F3ECFC3483F89253F3C4BB5BE98A37F6EF3* __this, const RuntimeMethod* method) ;

// System.Void Niantic.Platform.Debugging.Assert::Fail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m74B022C8F22A6A3B1B6797E65BA15F0ABB754FAE (const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m7D32C22783B49244FE9FA878C5A3D40DE84DBA23 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mDBB8BD9819AFE55F7D5F18DD3B9222EBE7171E7B (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m771FDFA9104535D500C1A4B530EBD1066BE57060 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m1032FDDC3F596C202C5AAA6DB43C0BC783BBEC89 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m15464B7E502996BFE2EE7F7590668E083BE85997 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mA70A5E5E9F8D302F87426E8A03F9B15149C182FD (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::Throws<System.Exception>(System.Action)
inline void Assert_Throws_TisException_t_m56249AECC6AE23AF43B083FC2FF529DC18124507 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method)
{
	((  void (*) (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Assert_Throws_TisRuntimeObject_mD4F7B0CF804B04EBCFED4A4D6F7131985E5190B2_gshared)(___action0, method);
}
// System.Boolean Niantic.Platform.Debugging.Log::IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD (const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Log::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m32BA60DE9614D1B4172B3BD39299106FFA16E7E2 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Debugging.LogService::IsLevelEnabled(Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549 (int32_t ___logLevel0, const RuntimeMethod* method) ;
// System.Boolean Niantic.Platform.Debugging.LogService::IsLevelEnabled(System.String,Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53 (String_t* ___channel0, int32_t ___logLevel1, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, RuntimeObject* ___arg57, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35 (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* __this, String_t* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m0786A6332E06581557A6E9D4DA5000AF5BC8A373_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Nullable`1<Niantic.Platform.Debugging.LogLevel>::.ctor(T)
inline void Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245 (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_mBFBFD202991166C885D76A20B3EF3BB47E5D4D96 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m74ED3F31A5B6FABBE61F91F81420F40989344761 (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mC0F84089707699016E685213CFF60997BC7CB12B_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Nullable`1<Niantic.Platform.Debugging.LogLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m5CBB8762002B40EE3E13762AE770AF7D428AE73F_inline (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<Niantic.Platform.Debugging.LogLevel>::get_Value()
inline int32_t Nullable_1_get_Value_m49F6BF3E2F5EAA0CE82275D669F8A7B0ECD13172 (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>::get_Count()
inline int32_t Dictionary_2_get_Count_m9FE0E4D7186FD7496D46FAA1C4F885972B2156E1 (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*, const RuntimeMethod*))Dictionary_2_get_Count_m36874AA15E8FDC5B6FCA750FD427E2AAF833AF60_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>::Clear()
inline void Dictionary_2_Clear_mB2292CDA0F2F4C45D23F38DF0FF55BC699C4B571 (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*, const RuntimeMethod*))Dictionary_2_Clear_m0395FEE6C1CD71B9CA22784FE500574448F135D2_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::Add(T)
inline void List_1_Add_m1DE9E6894C800BEDADF79F10436D71B1F126A5E0_inline (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::Remove(T)
inline bool List_1_Remove_mE795C0651B03BF50C4D3850FE47C0BF72EE30A28 (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::Clear()
inline void List_1_Clear_mD6C4CC96BC2F13DE76E9A6D4D7CB2A56EFC5F535_inline (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void Niantic.Platform.Debugging.LogService::LogToStreams(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m8E1E2A8A954421E3FE2F5C4335B17B341B4AFB97 (bool ___condition0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::GetEnumerator()
inline Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE List_1_GetEnumerator_m48AD71DB41E19C7A16DAA527FAB4783983293D8F (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Debugging.ILogStream>::Dispose()
inline void Enumerator_Dispose_m027FF3B8E472FF2ABF0B9E6BD312E5F2B4E7CFE1 (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Debugging.ILogStream>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mE3863CC8531222AA9A15D82B5DC9084061C0A78B_inline (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Niantic.Platform.Debugging.ILogStream>::MoveNext()
inline bool Enumerator_MoveNext_m136A195520EC238BE305E8EAA34A817E73ADF105 (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::get_Count()
inline int32_t List_1_get_Count_mF5D235FCB026D10E10D25BD998E283E1C87D11B8_inline (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Niantic.Platform.Debugging.LogLevel Niantic.Platform.Debugging.LogService::get_MaxLogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogService_get_MaxLogLevel_m8FE93B838EBC85B888E1C35C5A5D1FF056741F1C_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Niantic.Platform.Debugging.ILogStream>::.ctor()
inline void List_1__ctor_m1532C4D1717561E5C4538033EF3C6198864FF4AA (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Niantic.Platform.Debugging.LogLevel>::.ctor()
inline void Dictionary_2__ctor_m4D931F59F4611A3B31C0153840FF516275CC06D8 (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*, const RuntimeMethod*))Dictionary_2__ctor_mE0470880427DED948EF413AD5E9525F41CAF7D1D_gshared)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Niantic.Platform.Debugging.FailBehavior Niantic.Platform.Debugging.Assert::get_FailBehavior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Assert_get_FailBehavior_mE9326FEDF233F105A10E2CB83E2180F4DEF719C7 (const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m8E1E2A8A954421E3FE2F5C4335B17B341B4AFB97 (bool ___condition0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		Assert_Fail_m74B022C8F22A6A3B1B6797E65BA15F0ABB754FAE(NULL);
	}

IL_0008:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_mBFBFD202991166C885D76A20B3EF3BB47E5D4D96 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___message1;
		Assert_Fail_m7D32C22783B49244FE9FA878C5A3D40DE84DBA23(L_1, NULL);
	}

IL_0009:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m1A2BF23F490F4CFC6CDD345EFD3178FB31DD2C3C (bool ___condition0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		Assert_Fail_mDBB8BD9819AFE55F7D5F18DD3B9222EBE7171E7B(L_1, L_2, NULL);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m7598689A7F35DF269D91A990883DA692EB438E86 (bool ___condition0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		Assert_Fail_m771FDFA9104535D500C1A4B530EBD1066BE57060(L_1, L_2, L_3, NULL);
	}

IL_000b:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_m7D918AF132D4BFBA09C49E4669DAAFA102D271F3 (bool ___condition0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		Assert_Fail_m1032FDDC3F596C202C5AAA6DB43C0BC783BBEC89(L_1, L_2, L_3, L_4, NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_mC90CF290A022EC23EAACEC1DCA8E918536874F52 (bool ___condition0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		Assert_Fail_m15464B7E502996BFE2EE7F7590668E083BE85997(L_1, L_2, L_3, L_4, L_5, NULL);
	}

IL_000f:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::That(System.Boolean,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_That_mBBD9E7F22C3C7E352633D17A2208B37EE503F7C7 (bool ___condition0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___condition0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		Assert_Fail_mA70A5E5E9F8D302F87426E8A03F9B15149C182FD(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Throws(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Throws_m45D8B6D8E53DE0BE567A9F6B9CBD7ECF1B82EF10 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_Throws_TisException_t_m56249AECC6AE23AF43B083FC2FF529DC18124507_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		Assert_Throws_TisException_t_m56249AECC6AE23AF43B083FC2FF529DC18124507(L_0, Assert_Throws_TisException_t_m56249AECC6AE23AF43B083FC2FF529DC18124507_RuntimeMethod_var);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m74B022C8F22A6A3B1B6797E65BA15F0ABB754FAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD272FF7E9E10456FD3C14695B52947B65B8B45F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Log_Error_m32BA60DE9614D1B4172B3BD39299106FFA16E7E2(_stringLiteralD272FF7E9E10456FD3C14695B52947B65B8B45F0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m7D32C22783B49244FE9FA878C5A3D40DE84DBA23 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ___message0;
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_1, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mDBB8BD9819AFE55F7D5F18DD3B9222EBE7171E7B (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = ___message0;
		RuntimeObject* L_2 = ___arg11;
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_2, NULL);
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_3, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m771FDFA9104535D500C1A4B530EBD1066BE57060 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___message0;
		RuntimeObject* L_2 = ___arg11;
		RuntimeObject* L_3 = ___arg22;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_1, L_2, L_3, NULL);
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m1032FDDC3F596C202C5AAA6DB43C0BC783BBEC89 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = ___message0;
		RuntimeObject* L_2 = ___arg11;
		RuntimeObject* L_3 = ___arg22;
		RuntimeObject* L_4 = ___arg33;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_1, L_2, L_3, L_4, NULL);
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_5, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_m15464B7E502996BFE2EE7F7590668E083BE85997 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = ___message0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___arg11;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = ___arg22;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___arg33;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___arg44;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_9, NULL);
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_11, NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Assert::Fail(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mA70A5E5E9F8D302F87426E8A03F9B15149C182FD (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD(NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = ___message0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___arg11;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = ___arg22;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = ___arg33;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		RuntimeObject* L_10 = ___arg44;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___arg55;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_11, NULL);
		Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7(_stringLiteralA2FDD722570B4B924333C945C89B93C770413F47, L_13, NULL);
	}

IL_0033:
	{
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
// System.Void Niantic.Platform.Debugging.AssertException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_m13F4AC7A288A94F3442E63C15F7EF02266E0A178 (AssertException_tE9AA329E3EFA97B279CA02F370B07B85AF724235* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.AssertException::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssertException__ctor_mB944272997D38C84ED8706267920C54B5933CE45 (AssertException_tE9AA329E3EFA97B279CA02F370B07B85AF724235* __this, String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___formatArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___formatArgs1;
		String_t* L_2;
		L_2 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_2, NULL);
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
// System.Void Niantic.Platform.Debugging.ConsoleLogger::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger_LogMessage_m3CA1EAB97113A9BC7AD83E978D9523323A1C89D8 (ConsoleLogger_t2689FDC15E4C1EB48441175927FE26808C4C2266* __this, String_t* ___channel0, int32_t ___lvl1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_2, NULL);
		return;
	}

IL_000f:
	{
		String_t* L_3 = ___channel0;
		String_t* L_4 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m7A82CDC7A6F9E34A54FD706A21E3F822378028BD(_stringLiteralF18899079518FEC348E407BBC3AA0184075FB2DD, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.ConsoleLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsoleLogger__ctor_m45C25C9D793BA8EAD404C03BD7585EEBA33905D2 (ConsoleLogger_t2689FDC15E4C1EB48441175927FE26808C4C2266* __this, const RuntimeMethod* method) 
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
// System.Boolean Niantic.Platform.Debugging.Log::IsTraceEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsTraceEnabled_m96210A520BF0BEF06762F653938405BA18109525 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(6, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsTraceEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsTraceEnabled_mD9D2F76ABC787C40B59867298771F134289E411F (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 6, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m2E67799F9DBCA5FC6D2A36925644553B388A058C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m38946A971A7C15EAC880FD0FBB7453EB50247368 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m3A09F339B6BB53CF76A076AFD07E43C9A72BB8AB (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_m4920110F3B7895BD3A59B2C0DE2A95CA3FBCDBAD (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_mC98E78C504B52C88A32FCB375089A64D54401830 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Trace(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Trace_mFB021E1C6E681F57879E8C0D0BF3AC6824308DA9 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsVerboseEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsVerboseEnabled_m697002321153D2931EF39E06D5AA4BB86AF53BC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(5, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsVerboseEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsVerboseEnabled_m02190A59AF3BECB1E64816468734759991B46FFB (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 5, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_mA0167ABA6057B4618568F98518BB2AE2F1C6E37D (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_m0FECA87DB7E3EEE70BC61CBB003060F6A9574C40 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_m05F09A1BD08D44F88838E693E5EA6D033412C23F (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_m9FD0F99DF1F0E3A960665D3A67726A04760326CA (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_m23AEC1A6ABEED87440CDD4CCC5D6D4F88F883AA5 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Verbose(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_mA68CE3DC33D2DA84B9EA1B3BC9522F6FA9CCC7CF (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsInfoEnabled_m989192F76A3A28881CF06700D49F3566C9C1C101 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(4, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsInfoEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsInfoEnabled_m6CDDDD5E49F214A000BFD088D4D8472B0D6F0243 (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 4, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_mAB81BDDD68B82CA07E2FCB0E5C3316841FE2AB6C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m8E90E56907B44B214CAA2A0D8760248ED68E7F62 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_mC4E5B3432CF6C5487CBC1400647D3373771E748E (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m405464E145693033D1F5C7800576FCE07A11614B (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_mA0ECEB124DEA9922CBB7C1F887263C7C4E137246 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Info(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m47EF1B04B55F1F320DA8B25DE62C91F68DB59E1E (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 4, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsWarnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsWarnEnabled_m25488AB110ACE5412E98EAF5B0BD4316A79E4B1E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(3, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsWarnEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsWarnEnabled_m4EF2611563D6F44510A1EBEBAAC713A23ABAA230 (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 3, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m416C0AE657293C5A783589935C4A8E7675870BAC (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mC7B0FAB706CD41D7AFC15CB1D6DDBD0F247FEB41 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mCAB40B7F933CB92E7F7FFCE06ED6DF504106482E (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m4345DAB04DBAB0F10BEA492A5B645A74BA5CF175 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m62226B594E100968D3287922DB6144426FEEB32D (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Warn(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_m144312D0A46B8A21840AA5B2F1B8A1A141DA43B9 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 3, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsErrorEnabled_m8E4E49FA22C2F6343CD6840BC14831DDDC4C9BAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(2, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsErrorEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsErrorEnabled_m81AEAC8BEB1C2CE19E7AE5EBCA7F799B7D397BD0 (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 2, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m32BA60DE9614D1B4172B3BD39299106FFA16E7E2 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m284FAA4E8821D6A897AAF01EDEA876053F7DB2B7 (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m52730504DB1563DF6FEBE09422BD0EDF8862683A (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_m4830457E41A9BAE898161BAB6DEAD9F787E4E513 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mEB4979E2B778A9AF8EF1B1FC2CBB21D88EB73BFC (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Error(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mF0105E7BF74A07837743189D1052AC7BBF9274F9 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 2, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsFatalEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsFatalEnabled_mD304A76313FBCB77686ED283EC31692D16FB537D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(1, NULL);
		return L_0;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsFatalEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsFatalEnabled_m6E868DD017FA4B75FDBA0D75A82F7E3C6F1EF59C (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, 1, NULL);
		return L_1;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_m66B969E9CA7A959F9EE76B05BD4D1432454592DB (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_m802D77E8EE5878A5818CD10FEC5AD39B6E2124CB (String_t* ___message0, RuntimeObject* ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_m411A255EC24279D43383D30BB6BB635F45640B1F (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_m19464F692CBBDFBF74C51DBC8F33AFA1DD7C5B7E (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_m1F4D2A9A3E7BF92F2FDED02D4C06066FB4689637 (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::Fatal(System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Fatal_mABAD4B30E6725794C8F4C9B5549E226BF2A9FC3B (String_t* ___message0, RuntimeObject* ___arg11, RuntimeObject* ___arg22, RuntimeObject* ___arg33, RuntimeObject* ___arg44, RuntimeObject* ___arg55, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		RuntimeObject* L_1 = ___arg11;
		RuntimeObject* L_2 = ___arg22;
		RuntimeObject* L_3 = ___arg33;
		RuntimeObject* L_4 = ___arg44;
		RuntimeObject* L_5 = ___arg55;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 1, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_m4A067F3F44EE1B684470A609516431EED4E353F5 (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 5, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_mAF6C080F23E900C55263D776BB93BD2E266011A9 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 5, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_m31A91341C96D45DBEF4F2B8BD54F55BFE575004A (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 5, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_mA93A7CF9A2470AC585DD1947D0932AF279A4C7DA (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 5, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_mE52E0F95BC719EE0A6A516D75F7DB75558994960 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 5, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::VerboseToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_VerboseToChannel_m827E4E18D97A755A145D08D41027BCF04AE34F01 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 5, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_m3FC4595629E3F6DA8640CCED4F0EE8B13598A221 (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 6, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_mE38FEB51B1D0AA75E5C61D3D5803D51194FFF90D (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 6, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_m691045E104262A1275D1831C8DD83AC9C2D43390 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 6, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_m45AAFB5D00590C41E1681438B53CDCB02DDC6A6C (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 6, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_m52085C0AD06C4D65F0D69CE2B8B2C9A8D53E8743 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 6, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::TraceToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_TraceToChannel_mE2328C93E90E0EEB726C13E6651C6891A14CD9C4 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 6, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_m6430EB4B3FC319EC7BDA2E98CA9DC3333987E4A3 (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 4, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_m9AFCDFDC6869C16525DDEB07261A3BE5778A7B92 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 4, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_mAF3DCFB45591BF4031BC4A9C92A3BD913212A9C8 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 4, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_mEE4D4857C00C5EF1DBF8BE20BCB17A676A5A24E1 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 4, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_mE2763E273F6ACB34F4DD92337467B98A64EB0DBF (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 4, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::InfoToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_InfoToChannel_m192BA842F021D591A86B1908325E24619885C049 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 4, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_mF6C8AFB6C7248C672DC2752BF53B68F0CE801FF2 (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 3, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_m07F50DFD8B2FA49C06A1B68FAD766573153D99D1 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 3, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_m9349B65A58CB1317ADDA5F696675F6424F682568 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 3, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_m634A9605D764029432C7DB73E92585F396D43D60 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 3, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_m4D9246F811719179DA538AE1B52656D903A27823 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 3, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::WarnToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_WarnToChannel_m9785AD2ADC17FB14A20E7CBBF27A7D5364E15D83 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 3, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_m206E22DEA61E0867CC430CBAB834F908ABB7FA4F (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 2, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_m1DF8B381078B1495F102C339AED77A486D5C8B18 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 2, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_mFCFC2CCC74190D2AC0DB1FBB8AF4D437EC168D67 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 2, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_mF17F2F037D6A64D032766E0DDF9A7D66EF3A3F9A (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 2, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_mE93CB35BEA62ABF6F40C9E85202281117469A802 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 2, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::ErrorToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_ErrorToChannel_m6C082D2D9236B92AD482D95F494068DAD6051A87 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 2, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_m875BF65D8D77694E99DA27669570E849C5C6C831 (String_t* ___channel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, 1, L_1, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_mC19C0165842A9ADC79DBC0FC7C300FE07308975F (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, 1, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_mA0618A1C06111B6ABFBFBA2E9FEF18D01B667FCA (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, 1, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_m76BC608FF47AB858EA91AAAC73638E184C3BBF69 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, 1, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_mB48D3125F0E61365AD36BF749FAA5F7A90BA68E1 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, 1, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::FatalToChannel(System.String,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_FatalToChannel_mEE40C62B49E6A5A74F03AA4E02B7A5162B3CD5D6 (String_t* ___channel0, String_t* ___message1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___arg34, RuntimeObject* ___arg45, RuntimeObject* ___arg56, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = ___message1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___arg34;
		RuntimeObject* L_5 = ___arg45;
		RuntimeObject* L_6 = ___arg56;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, 1, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_m87369F7B7C0BEFC9236D8B17553D2A9002C2567C (String_t* ___channel0, int32_t ___level1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_mC1208FB3398135C3B4444D12E916D9F69D74EDFB (String_t* ___channel0, int32_t ___level1, String_t* ___message2, RuntimeObject* ___arg13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		RuntimeObject* L_3 = ___arg13;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_mEB716EB51F750DD77E281A0FF095411A546173DC (String_t* ___channel0, int32_t ___level1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		RuntimeObject* L_3 = ___arg13;
		RuntimeObject* L_4 = ___arg24;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_m19DCD6BB7E4EBE82AA5D5F88FFAF4ECA404569A1 (String_t* ___channel0, int32_t ___level1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		RuntimeObject* L_3 = ___arg13;
		RuntimeObject* L_4 = ___arg24;
		RuntimeObject* L_5 = ___arg35;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_m6487430DD0D83B8ADE021F89046B19790A71782A (String_t* ___channel0, int32_t ___level1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		RuntimeObject* L_3 = ___arg13;
		RuntimeObject* L_4 = ___arg24;
		RuntimeObject* L_5 = ___arg35;
		RuntimeObject* L_6 = ___arg46;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0(L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.Log::LogToChannel(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_LogToChannel_m44699C09F494972D03D481FCA7719EB0CC7BFAB1 (String_t* ___channel0, int32_t ___level1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, RuntimeObject* ___arg57, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___level1;
		String_t* L_2 = ___message2;
		RuntimeObject* L_3 = ___arg13;
		RuntimeObject* L_4 = ___arg24;
		RuntimeObject* L_5 = ___arg35;
		RuntimeObject* L_6 = ___arg46;
		RuntimeObject* L_7 = ___arg57;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsLevelEnabled(Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsLevelEnabled_mD185575AAA14A82181734171026AD35D3E924167 (int32_t ___logLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logLevel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Niantic.Platform.Debugging.Log::IsLevelEnabled(System.String,Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Log_IsLevelEnabled_m438025B630DCA2286375736DC9551E2171919E35 (String_t* ___channel0, int32_t ___logLevel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___channel0;
		int32_t L_1 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_0, L_1, NULL);
		return L_2;
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
// System.Collections.Generic.IEnumerable`1<Niantic.Platform.Debugging.ILogStream> Niantic.Platform.Debugging.LogService::get_Streams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogService_get_Streams_mA55AE0C533702B458EEB85B7D3B9C2A9A663ADD6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		return L_0;
	}
}
// Niantic.Platform.Debugging.LogLevel Niantic.Platform.Debugging.LogService::get_MaxLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogService_get_MaxLogLevel_m8FE93B838EBC85B888E1C35C5A5D1FF056741F1C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		int32_t L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3;
		return L_0;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::set_MaxLogLevel(Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_set_MaxLogLevel_m1EF19B6FE475131A1897A32A75C972CEDBCF933E (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EFCC889998296F28CD1CF7F84B3FA40E4DBD272);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		int32_t L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3;
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		int32_t L_2 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3;
		V_0 = L_2;
		int32_t L_3 = ___value0;
		((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var, &L_8);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteral0EFCC889998296F28CD1CF7F84B3FA40E4DBD272, L_6, L_9, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Nullable`1<Niantic.Platform.Debugging.LogLevel> Niantic.Platform.Debugging.LogService::TryGetMaxLogLevelForChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 LogService_TryGetMaxLogLevelForChannel_m3DCF0153DEA1E19ECF9F15D47FFBA8DE9DCD371E (String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		String_t* L_1 = ___channel0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245_RuntimeMethod_var);
		return L_4;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84));
		Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 L_5 = V_1;
		return L_5;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::SetMaxLogLevelForChannel(System.String,Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_SetMaxLogLevelForChannel_mB2E7BA82EAB8156A6D0DCD6CD2A3583F00A2F865 (String_t* ___channel0, int32_t ___maxLogLevel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m74ED3F31A5B6FABBE61F91F81420F40989344761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5CBB8762002B40EE3E13762AE770AF7D428AE73F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m49F6BF3E2F5EAA0CE82275D669F8A7B0ECD13172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DF7E2A631CAB378EF91961C971BC30959F95C81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31073DF89A7B72AF250C12FB001BAFF9061AC8B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB192D32B17688E4F7F07F634CC2C8115E1D078CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___channel0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		Assert_That_mBFBFD202991166C885D76A20B3EF3BB47E5D4D96((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral31073DF89A7B72AF250C12FB001BAFF9061AC8B0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_2 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		String_t* L_3 = ___channel0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_1;
		Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245((&V_0), L_5, Nullable_1__ctor_mA8030E8A0285A9A184E0686D3C6A63CBF1BAE245_RuntimeMethod_var);
		goto IL_0034;
	}

IL_002c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tD5F71A4BF83BCA085675A1BAD5B9C39F6BB7AA84));
	}

IL_0034:
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_6 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		String_t* L_7 = ___channel0;
		int32_t L_8 = ___maxLogLevel1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m74ED3F31A5B6FABBE61F91F81420F40989344761(L_6, L_7, L_8, Dictionary_2_set_Item_m74ED3F31A5B6FABBE61F91F81420F40989344761_RuntimeMethod_var);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m5CBB8762002B40EE3E13762AE770AF7D428AE73F_inline((&V_0), Nullable_1_get_HasValue_m5CBB8762002B40EE3E13762AE770AF7D428AE73F_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_10 = ___channel0;
		int32_t L_11;
		L_11 = Nullable_1_get_Value_m49F6BF3E2F5EAA0CE82275D669F8A7B0ECD13172((&V_0), Nullable_1_get_Value_m49F6BF3E2F5EAA0CE82275D669F8A7B0ECD13172_RuntimeMethod_var);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var, &L_12);
		int32_t L_14 = ___maxLogLevel1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var, &L_15);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteralB192D32B17688E4F7F07F634CC2C8115E1D078CC, L_10, L_13, L_16, NULL);
		return;
	}

IL_006d:
	{
		String_t* L_17 = ___channel0;
		int32_t L_18 = ___maxLogLevel1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(LogLevel_tB3A9DBE9B7B55BDD4389D074D6ACE23DA84324DF_il2cpp_TypeInfo_var, &L_19);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteral1DF7E2A631CAB378EF91961C971BC30959F95C81, L_17, L_20, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::ClearChannelMaxLogLevels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_ClearChannelMaxLogLevels_m6396784D0F69D35A99F2924E2F3EE77D778E9B00 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB2292CDA0F2F4C45D23F38DF0FF55BC699C4B571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9FE0E4D7186FD7496D46FAA1C4F885972B2156E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B7B40541B438E38BB169E21FF3A6E7B462197BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m9FE0E4D7186FD7496D46FAA1C4F885972B2156E1(L_0, Dictionary_2_get_Count_m9FE0E4D7186FD7496D46FAA1C4F885972B2156E1_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_2 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		NullCheck(L_2);
		Dictionary_2_Clear_mB2292CDA0F2F4C45D23F38DF0FF55BC699C4B571(L_2, Dictionary_2_Clear_mB2292CDA0F2F4C45D23F38DF0FF55BC699C4B571_RuntimeMethod_var);
		LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteral2B7B40541B438E38BB169E21FF3A6E7B462197BB, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::RegisterLogStream(Niantic.Platform.Debugging.ILogStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_RegisterLogStream_m2685CC3353DB9DF5081D98B5DF6DF67A72BCD2B0 (RuntimeObject* ___logger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DE9E6894C800BEDADF79F10436D71B1F126A5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D04C3E24FF7A5A1CD314862018CAC584EAD3AC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___logger0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteral6D04C3E24FF7A5A1CD314862018CAC584EAD3AC6, L_1, NULL);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_2 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		RuntimeObject* L_3 = ___logger0;
		NullCheck(L_2);
		List_1_Add_m1DE9E6894C800BEDADF79F10436D71B1F126A5E0_inline(L_2, L_3, List_1_Add_m1DE9E6894C800BEDADF79F10436D71B1F126A5E0_RuntimeMethod_var);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::UnregisterLogStream(Niantic.Platform.Debugging.ILogStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_UnregisterLogStream_m3BF512316EF4BE970AE37D74AE7B4B22C8719889 (RuntimeObject* ___logger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mE795C0651B03BF50C4D3850FE47C0BF72EE30A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57E8EB68AF96BBDDE4AF00B41383034ACAD5BBE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		RuntimeObject* L_1 = ___logger0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mE795C0651B03BF50C4D3850FE47C0BF72EE30A28(L_0, L_1, List_1_Remove_mE795C0651B03BF50C4D3850FE47C0BF72EE30A28_RuntimeMethod_var);
		RuntimeObject* L_3 = ___logger0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, 5, _stringLiteral57E8EB68AF96BBDDE4AF00B41383034ACAD5BBE0, L_4, NULL);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::ClearLogStreams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_ClearLogStreams_m831417207DE40CEF21ED8F12AFDB7B3B10ED31A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD6C4CC96BC2F13DE76E9A6D4D7CB2A56EFC5F535_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		NullCheck(L_0);
		List_1_Clear_mD6C4CC96BC2F13DE76E9A6D4D7CB2A56EFC5F535_inline(L_0, List_1_Clear_mD6C4CC96BC2F13DE76E9A6D4D7CB2A56EFC5F535_RuntimeMethod_var);
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m39F9A0B345D5C3EDDA1246CE774FEDDD45AA7B2F (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_7, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m652073F0DEA891D5BF7A9351EA5E6C0697437F84 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		RuntimeObject* L_8 = ___arg13;
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_7, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_9, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_mD7317FF0030632C797D2A4BB1472BE20C9DFD241 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		RuntimeObject* L_8 = ___arg13;
		RuntimeObject* L_9 = ___arg24;
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(L_7, L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_10, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m7319062D26B4266C7A1435383336A2D30EE1A7C2 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		RuntimeObject* L_8 = ___arg13;
		RuntimeObject* L_9 = ___arg24;
		RuntimeObject* L_10 = ___arg35;
		String_t* L_11;
		L_11 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(L_7, L_8, L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_11, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m0CA440DCC46A3FA4A0B78773D0AF4756D7D578F0 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___arg13;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___arg24;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___arg35;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___arg46;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_7, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_17, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String,System.Object,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogMessage_m4FCDEBB2E078EF21C85B54537EF53A768FE148E4 (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, RuntimeObject* ___arg13, RuntimeObject* ___arg24, RuntimeObject* ___arg35, RuntimeObject* ___arg46, RuntimeObject* ___arg57, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___channel0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000a:
	{
		___channel0 = G_B2_0;
		String_t* L_2 = ___channel0;
		int32_t L_3 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_5 = ___channel0;
		int32_t L_6 = ___logLevel1;
		String_t* L_7 = ___message2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___arg13;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		RuntimeObject* L_12 = ___arg24;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		RuntimeObject* L_14 = ___arg35;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		RuntimeObject* L_16 = ___arg46;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		RuntimeObject* L_18 = ___arg57;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_7, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF(L_5, L_6, L_19, NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Niantic.Platform.Debugging.LogService::LogToStreams(System.String,Niantic.Platform.Debugging.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService_LogToStreams_mF1CCC822EFE955A6396B97C2C8A736079BF379CF (String_t* ___channel0, int32_t ___logLevel1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m027FF3B8E472FF2ABF0B9E6BD312E5F2B4E7CFE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m136A195520EC238BE305E8EAA34A817E73ADF105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE3863CC8531222AA9A15D82B5DC9084061C0A78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogStream_t77EDC7F2AE2A72625CE504F710F23C1664E68A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m48AD71DB41E19C7A16DAA527FAB4783983293D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___channel0;
		Assert_That_m8E1E2A8A954421E3FE2F5C4335B17B341B4AFB97((bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_1 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		NullCheck(L_1);
		Enumerator_t7FB675830EAB989F7B0F5B4B70824937C23E3EBE L_2;
		L_2 = List_1_GetEnumerator_m48AD71DB41E19C7A16DAA527FAB4783983293D8F(L_1, List_1_GetEnumerator_m48AD71DB41E19C7A16DAA527FAB4783983293D8F_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m027FF3B8E472FF2ABF0B9E6BD312E5F2B4E7CFE1((&V_0), Enumerator_Dispose_m027FF3B8E472FF2ABF0B9E6BD312E5F2B4E7CFE1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0016_1:
			{
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_mE3863CC8531222AA9A15D82B5DC9084061C0A78B_inline((&V_0), Enumerator_get_Current_mE3863CC8531222AA9A15D82B5DC9084061C0A78B_RuntimeMethod_var);
				String_t* L_4 = ___channel0;
				int32_t L_5 = ___logLevel1;
				String_t* L_6 = ___message2;
				NullCheck(L_3);
				InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void Niantic.Platform.Debugging.ILogStream::LogMessage(System.String,Niantic.Platform.Debugging.LogLevel,System.String) */, ILogStream_t77EDC7F2AE2A72625CE504F710F23C1664E68A27_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6);
			}

IL_0025_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m136A195520EC238BE305E8EAA34A817E73ADF105((&V_0), Enumerator_MoveNext_m136A195520EC238BE305E8EAA34A817E73ADF105_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		return;
	}
}
// System.Boolean Niantic.Platform.Debugging.LogService::IsLevelEnabled(Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogService_IsLevelEnabled_mC80E889C87361E66F840AA31B3C891ED7E61C549 (int32_t ___logLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___logLevel0;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, NULL);
		return L_1;
	}
}
// System.Boolean Niantic.Platform.Debugging.LogService::IsLevelEnabled(System.String,Niantic.Platform.Debugging.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogService_IsLevelEnabled_mDBD9AEF7E9E9B83137DAC8D3AA01F37EC5DABA53 (String_t* ___channel0, int32_t ___logLevel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF5D235FCB026D10E10D25BD998E283E1C87D11B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___channel0;
		Assert_That_m8E1E2A8A954421E3FE2F5C4335B17B341B4AFB97((bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_1 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF5D235FCB026D10E10D25BD998E283E1C87D11B8_inline(L_1, List_1_get_Count_mF5D235FCB026D10E10D25BD998E283E1C87D11B8_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_3 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2;
		String_t* L_4 = ___channel0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m040C13B20F4303719B209C5AB0E1421D9657CE35_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = ___logLevel1;
		int32_t L_7 = V_0;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		int32_t L_8 = ___logLevel1;
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = LogService_get_MaxLogLevel_m8FE93B838EBC85B888E1C35C5A5D1FF056741F1C_inline(NULL);
		return (bool)((((int32_t)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Niantic.Platform.Debugging.LogService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogService__cctor_m85A66B9C91BC441F22F9D5637CA8CD0DB4EA9510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4D931F59F4611A3B31C0153840FF516275CC06D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1532C4D1717561E5C4538033EF3C6198864FF4AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034* L_0 = (List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034*)il2cpp_codegen_object_new(List_1_t08BC6A772A46CF3FF9B6EDF4B9043318790C2034_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1532C4D1717561E5C4538033EF3C6198864FF4AA(L_0, List_1__ctor_m1532C4D1717561E5C4538033EF3C6198864FF4AA_RuntimeMethod_var);
		((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____streams_1), (void*)L_0);
		Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0* L_1 = (Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0*)il2cpp_codegen_object_new(Dictionary_2_t7228C019E6FF921FFD338F4B0A1377C7CFB1E4A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m4D931F59F4611A3B31C0153840FF516275CC06D8(L_1, Dictionary_2__ctor_m4D931F59F4611A3B31C0153840FF516275CC06D8_RuntimeMethod_var);
		((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____channelMaxLogLevels_2), (void*)L_1);
		((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3 = 5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogService_get_MaxLogLevel_m8FE93B838EBC85B888E1C35C5A5D1FF056741F1C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var);
		int32_t L_0 = ((LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_StaticFields*)il2cpp_codegen_static_fields_for(LogService_t4F3D57073EA381C7AC6D831ED907E0B26F903B05_il2cpp_TypeInfo_var))->____defaultMaxLogLevel_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}

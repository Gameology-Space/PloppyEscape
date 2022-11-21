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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Func`1<Google.Protobuf.WellKnownTypes.BoolValue>
struct Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3;
// System.Func`1<Google.Protobuf.WellKnownTypes.BytesValue>
struct Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918;
// System.Func`1<Google.Protobuf.WellKnownTypes.Int32Value>
struct Func_1_t1851E884A1E67D0C945F52168887E9738558705E;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<Google.Protobuf.WellKnownTypes.StringValue>
struct Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7;
// System.Func`1<Google.Protobuf.WellKnownTypes.UInt32Value>
struct Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32>
struct Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC;
// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.String>
struct Func_2_t71F2C957CAD01F69BA4A630C687C898F19FAD875;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tDB170C5929E4ACA380EEF5C8E082139CE49EC21B;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_t2113D31E64AB4BC3FE73AB5985B7D30B220225D2;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tBECF6C25D47C20B0CA9B3100FD02FED4BA91145E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t1C3796CCB02A6FB46469A8C82C9FBB10883C38B1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t72D63DEDFD3D09D9D034239EC2954718F7FCDB68;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t9B74854C0814D339537A7FFF6105D1D25A39C180;
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BoolValue>
struct MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9;
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BytesValue>
struct MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC;
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.Int32Value>
struct MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F;
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.StringValue>
struct MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9;
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.UInt32Value>
struct MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Google.Protobuf.WellKnownTypes.BoolValue
struct BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// Google.Protobuf.WellKnownTypes.BytesValue
struct BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// Google.Protobuf.WellKnownTypes.Int32Value
struct Int32Value_tC7417A24609865E654872326B56E94D2BB08D100;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906;
// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Google.Protobuf.WellKnownTypes.StringValue
struct StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474;
// System.Type
struct Type_t;
// Google.Protobuf.WellKnownTypes.UInt32Value
struct UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3;

IL2CPP_EXTERN_C RuntimeClass* BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t1851E884A1E67D0C945F52168887E9738558705E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C const RuntimeMethod* BoolValue_U3C_parserU3Em__0_m2B3AB8EE3E361E6D9005BD45C4D35BFC55BB8332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BytesValue_U3C_parserU3Em__0_mD6D50BA966EB0AF86403B6DF7257BDDEC12C6F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Int32Value_U3C_parserU3Em__0_m470987B0478B9992DAB3125A9A595792FDD5A51D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m0AD6815C986FAA5BDF84D51297094BED450B79B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m377DA8D1CCE859639E9C9977DF05BC7960793B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m93DAF3F973F520B4DAB1FB884C4163D9359D8244_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mBE2FDCAAA3CBF4660244CCF15AFCDA3A62C428E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mE83897002ADBB637E5915B66F18CBF807B75C284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Preconditions_CheckNotNull_TisByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_m66C1E2FAC82A30AFB671BE2C7A14E3581E6F4376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Preconditions_CheckNotNull_TisString_t_m244C1D9C57657C385CAE9CD7333372F386A242F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringValue_U3C_parserU3Em__0_m7C0EA953A9DB56654D7ED657C470D0FE29A62927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt32Value_U3C_parserU3Em__0_m15D150CDA1A548A5769C3EF00200308999E615F3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Google.Protobuf.WellKnownTypes.BoolValue
struct BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E  : public RuntimeObject
{
	// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::value_
	bool ___value__2;
};

struct BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BoolValue> Google.Protobuf.WellKnownTypes.BoolValue::_parser
	MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9* ____parser_0;
};

// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592  : public RuntimeObject
{
	// System.Byte[] Google.Protobuf.ByteString::bytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes_1;
};

struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_StaticFields
{
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___empty_0;
};

// Google.Protobuf.WellKnownTypes.BytesValue
struct BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8  : public RuntimeObject
{
	// Google.Protobuf.ByteString Google.Protobuf.WellKnownTypes.BytesValue::value_
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value__2;
};

struct BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BytesValue> Google.Protobuf.WellKnownTypes.BytesValue::_parser
	MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC* ____parser_0;
};

// Google.Protobuf.CodedInputStream
struct CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425  : public RuntimeObject
{
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_0;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSize
	int32_t ___bufferSize_1;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_2;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferPos
	int32_t ___bufferPos_3;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input_4;
	// System.UInt32 Google.Protobuf.CodedInputStream::lastTag
	uint32_t ___lastTag_5;
	// System.UInt32 Google.Protobuf.CodedInputStream::nextTag
	uint32_t ___nextTag_6;
	// System.Boolean Google.Protobuf.CodedInputStream::hasNextTag
	bool ___hasNextTag_7;
	// System.Int32 Google.Protobuf.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_11;
	// System.Int32 Google.Protobuf.CodedInputStream::currentLimit
	int32_t ___currentLimit_12;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_13;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_14;
	// System.Int32 Google.Protobuf.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_15;
};

// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163  : public RuntimeObject
{
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_4;
	// System.Int32 Google.Protobuf.CodedOutputStream::limit
	int32_t ___limit_5;
	// System.Int32 Google.Protobuf.CodedOutputStream::position
	int32_t ___position_6;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output_7;
};

struct CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_StaticFields
{
	// System.Text.Encoding Google.Protobuf.CodedOutputStream::Utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___Utf8Encoding_2;
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_3;
};

// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::file
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___file_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::fullName
	String_t* ___fullName_1;
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::index
	int32_t ___index_2;
};

// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE  : public RuntimeObject
{
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t2DA47DD53318C0FC40C4B6CA4EEA84ED56CAABC4* ___U3CProtoU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_5;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___U3CSerializedDataU3Ek__BackingField_6;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t77D5CAC332906FCF2B16A0C7AE7A2AA852907E94* ___U3CDescriptorPoolU3Ek__BackingField_7;
};

// Google.Protobuf.WellKnownTypes.Int32Value
struct Int32Value_tC7417A24609865E654872326B56E94D2BB08D100  : public RuntimeObject
{
	// System.Int32 Google.Protobuf.WellKnownTypes.Int32Value::value_
	int32_t ___value__2;
};

struct Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.Int32Value> Google.Protobuf.WellKnownTypes.Int32Value::_parser
	MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8* ____parser_0;
};

// Google.Protobuf.MessageParser
struct MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D  : public RuntimeObject
{
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t726CD36CB50B2F99D102B003DBF9F7D5ECFE2918* ___factory_0;
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

// Google.Protobuf.WellKnownTypes.StringValue
struct StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474  : public RuntimeObject
{
	// System.String Google.Protobuf.WellKnownTypes.StringValue::value_
	String_t* ___value__2;
};

struct StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.StringValue> Google.Protobuf.WellKnownTypes.StringValue::_parser
	MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9* ____parser_0;
};

// Google.Protobuf.WellKnownTypes.UInt32Value
struct UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6  : public RuntimeObject
{
	// System.UInt32 Google.Protobuf.WellKnownTypes.UInt32Value::value_
	uint32_t ___value__2;
};

struct UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_StaticFields
{
	// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.UInt32Value> Google.Protobuf.WellKnownTypes.UInt32Value::_parser
	MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997* ____parser_0;
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

// Google.Protobuf.WellKnownTypes.WrappersReflection
struct WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF  : public RuntimeObject
{
};

struct WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_StaticFields
{
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.WellKnownTypes.WrappersReflection::descriptor
	FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* ___descriptor_0;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BoolValue>
struct MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3* ___factory_1;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BytesValue>
struct MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06* ___factory_1;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.Int32Value>
struct MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t1851E884A1E67D0C945F52168887E9738558705E* ___factory_1;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.StringValue>
struct MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7* ___factory_1;
};

// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.UInt32Value>
struct MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997  : public MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D
{
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB* ___factory_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906  : public DescriptorBase_t5C5FA7C866B517618C4032DDBEF36522D92A18FA
{
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t5EFB459380AC4A658C2DB3D77BDF787996B9BC9D* ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t* ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tC9E617711ACDE0C5DABF25C755F4B86204C3775D* ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4CD4D558BB728864FD029B696F2EC177B25E7AF3* ___U3CFieldsU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_14;
};

struct MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___WellKnownTypeNames_3;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.Int32> Google.Protobuf.Reflection.MessageDescriptor::<>f__am$cache0
	Func_2_tC1A88D50374165E90B663F30D638545C47ECFDAC* ___U3CU3Ef__amU24cache0_15;
	// System.Func`2<Google.Protobuf.Reflection.FieldDescriptor,System.String> Google.Protobuf.Reflection.MessageDescriptor::<>f__am$cache1
	Func_2_t71F2C957CAD01F69BA4A630C687C898F19FAD875* ___U3CU3Ef__amU24cache1_16;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D44_t544A2E6BEB431E9A385C1A3704820253399AB4B9 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_t544A2E6BEB431E9A385C1A3704820253399AB4B9__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tA0FE1FFB7994264CC7B3DF722FA3F728F030F458_StaticFields
{
	// <PrivateImplementationDetails>/$ArrayType=44 <PrivateImplementationDetails>::$field-CA6D43393CCBD523D8BC1CAC86DE8DC9F018B896
	U24ArrayTypeU3D44_t544A2E6BEB431E9A385C1A3704820253399AB4B9 ___U24fieldU2DCA6D43393CCBD523D8BC1CAC86DE8DC9F018B896_0;
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

// System.Func`1<Google.Protobuf.WellKnownTypes.BoolValue>
struct Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3  : public MulticastDelegate_t
{
};

// System.Func`1<Google.Protobuf.WellKnownTypes.BytesValue>
struct Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06  : public MulticastDelegate_t
{
};

// System.Func`1<Google.Protobuf.WellKnownTypes.Int32Value>
struct Func_1_t1851E884A1E67D0C945F52168887E9738558705E  : public MulticastDelegate_t
{
};

// System.Func`1<Google.Protobuf.WellKnownTypes.StringValue>
struct Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7  : public MulticastDelegate_t
{
};

// System.Func`1<Google.Protobuf.WellKnownTypes.UInt32Value>
struct Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared (MessageParser_1_tE80B9A8972366E18F31910138469726593F6FD1F* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___factory0, const RuntimeMethod* method) ;
// T Google.Protobuf.Preconditions::CheckNotNull<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Preconditions_CheckNotNull_TisRuntimeObject_m0915A237E9B9F681B036B2700663466C59DA889A_gshared (RuntimeObject* ___value0, String_t* ___name1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value__ctor_m808EC8E3AE4335CC98DA92DF29754FADAC94B780 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.WellKnownTypes.WrappersReflection::get_Descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.Int32Value::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Int32Value_get_Descriptor_mA78E61671A2E530E6A60B825C68F0B4D5E06A279 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::.ctor(Google.Protobuf.WellKnownTypes.Int32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value__ctor_mDAC08331234A2A21D1B320BBEC736C843D25EE0A (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.WellKnownTypes.Int32Value::Equals(Google.Protobuf.WellKnownTypes.Int32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32Value_Equals_m4F3FB2E776BD451D0BB2C726C110F1870D5FEF22 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* ___other0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.WellKnownTypes.Int32Value::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, uint8_t ___b10, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteInt32_m04AF441F8150B4EF8AA6FD12E98B35F8CC888E04 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeInt32Size(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_m62CF15C91A41AC51B291BCD8EA973CF410D63B33 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::set_Value(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Int32Value_set_Value_m2A1B6DF78FB596958A053FD508B125040A0081BE_inline (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedInputStream::SkipLastField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedInputStream::ReadInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_ReadInt32_m5E54CA34B6B643C7CEAF7E30B376AEE754BE86BF (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.CodedInputStream::ReadTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Protobuf.WellKnownTypes.Int32Value>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m546EEB28E6E7D6504B945914A9F163568FCC9730 (Func_1_t1851E884A1E67D0C945F52168887E9738558705E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t1851E884A1E67D0C945F52168887E9738558705E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.Int32Value>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mE83897002ADBB637E5915B66F18CBF807B75C284 (MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8* __this, Func_1_t1851E884A1E67D0C945F52168887E9738558705E* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8*, Func_1_t1851E884A1E67D0C945F52168887E9738558705E*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value__ctor_mA8C47316A9D7B26F028C9EA357869927EE3B4B72 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.UInt32Value::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* UInt32Value_get_Descriptor_m3F247297434A7148E086C8DBD9CF44641BC5CB78 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::.ctor(Google.Protobuf.WellKnownTypes.UInt32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value__ctor_m3EA22D4175B1CA74BBED78D75F81694A4394DA9D (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.WellKnownTypes.UInt32Value::Equals(Google.Protobuf.WellKnownTypes.UInt32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32Value_Equals_m94344B3C8E92EA4BF3139342935802441A9DA505 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* ___other0, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.WellKnownTypes.UInt32Value::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteUInt32_mFA934C2C15F399DBE0CB0337DFF3E0CE90E06B26 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeUInt32Size(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeUInt32Size_m1366404BD8A221D39D2A1B86D43384700DACC81C (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::set_Value(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UInt32Value_set_Value_m235D6772278AE18203CF43484D84485EAE7C9D0C_inline (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 Google.Protobuf.CodedInputStream::ReadUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadUInt32_m18238B31DE3553A61DD480C26E54BE9BB3EE42C5 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Protobuf.WellKnownTypes.UInt32Value>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mE9659A5C020621EFD2B598C7F51F42B2E0ED2DE6 (Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.UInt32Value>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_mBE2FDCAAA3CBF4660244CCF15AFCDA3A62C428E0 (MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997* __this, Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997*, Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue__ctor_mF86BEF23526F8ED02110B7EA2852ACD454BC7715 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BoolValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BoolValue_get_Descriptor_m592E2E52201DD7057292130905000121C5D8C3E5 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::.ctor(Google.Protobuf.WellKnownTypes.BoolValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue__ctor_mE30F185ED3506E61B55051F436FD17CFFF687E17 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::Equals(Google.Protobuf.WellKnownTypes.BoolValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolValue_Equals_m79D90601930C6B44BE3286EF954C17FB6B012F37 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* ___other0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteBool_m2EC319E1AE95C24869029ABAE573FB481D81F88B (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::set_Value(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoolValue_set_Value_mC51ACDFA86303909B22AE7307CF17B624CD5623A_inline (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.CodedInputStream::ReadBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodedInputStream_ReadBool_mBD1DDCE0C8D6D94157110EA065F14824C6C0928A (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Protobuf.WellKnownTypes.BoolValue>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m0019CC3ACC65B3F99AC65C936E8CE31EB19531FD (Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BoolValue>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m0AD6815C986FAA5BDF84D51297094BED450B79B5 (MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9* __this, Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9*, Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_m93D64595B2B1203164BAA6018EA398BCE1ED2D8C (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.StringValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* StringValue_get_Descriptor_m6E8BD204E1169FB7497C28D754D1C3AE15F8C302 (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.StringValue::.ctor(Google.Protobuf.WellKnownTypes.StringValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_mB8B369CD71CB10D9ABD4D5A0F2FC424B3D6D69A1 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* ___other0, const RuntimeMethod* method) ;
// T Google.Protobuf.Preconditions::CheckNotNull<System.String>(T,System.String)
inline String_t* Preconditions_CheckNotNull_TisString_t_m244C1D9C57657C385CAE9CD7333372F386A242F8 (String_t* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, String_t*, const RuntimeMethod*))Preconditions_CheckNotNull_TisRuntimeObject_m0915A237E9B9F681B036B2700663466C59DA889A_gshared)(___value0, ___name1, method);
}
// System.Boolean Google.Protobuf.WellKnownTypes.StringValue::Equals(Google.Protobuf.WellKnownTypes.StringValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValue_Equals_mF2E972F6CDEBEFDB6FBE5ABE55CC6AAB40173CD1 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* ___other0, const RuntimeMethod* method) ;
// System.String Google.Protobuf.WellKnownTypes.StringValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteString_m7FFA3171E544226262BB307F2C7CED3CC0B37D0B (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeStringSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeStringSize_m92DC0377FB211F101BD116CA72093D148E0C1A8C (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.StringValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue_set_Value_m7FA46696EE4AFF06E3A4FC45100075025BB55C76 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Google.Protobuf.CodedInputStream::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CodedInputStream_ReadString_mFBF6D27565878E31A6579D389F4C863083A9C5CB (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Protobuf.WellKnownTypes.StringValue>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m7C44E03D5C437E86BAD03A6C2F0068B34BAF8077 (Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.StringValue>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m377DA8D1CCE859639E9C9977DF05BC7960793B01 (MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9* __this, Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9*, Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue__ctor_m9F4CC991ED680410765CBCD68746A12642980815 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) ;
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BytesValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BytesValue_get_Descriptor_m08042A86A3A3E2EC854811A363F877A7ACE3F08A (const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::.ctor(Google.Protobuf.WellKnownTypes.BytesValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue__ctor_m3A6BAF1AFBC0147EFD39A917C05783719FE7E05C (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* ___other0, const RuntimeMethod* method) ;
// T Google.Protobuf.Preconditions::CheckNotNull<Google.Protobuf.ByteString>(T,System.String)
inline ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* Preconditions_CheckNotNull_TisByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_m66C1E2FAC82A30AFB671BE2C7A14E3581E6F4376 (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* (*) (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592*, String_t*, const RuntimeMethod*))Preconditions_CheckNotNull_TisRuntimeObject_m0915A237E9B9F681B036B2700663466C59DA889A_gshared)(___value0, ___name1, method);
}
// System.Boolean Google.Protobuf.WellKnownTypes.BytesValue::Equals(Google.Protobuf.WellKnownTypes.BytesValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesValue_Equals_mDA077B7C794F912B3DCD7AA559363B28F0C87D59 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* ___other0, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.WellKnownTypes.BytesValue::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.ByteString::op_Inequality(Google.Protobuf.ByteString,Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_op_Inequality_m39A72929C6A63243F2821F66C29B3A7E81E8AD94 (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___lhs0, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___rhs1, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.ByteString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteString_get_Length_m2F06113BC9A5D92BAD680B227417EFCED407CB8C (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* __this, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.CodedOutputStream::WriteBytes(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteBytes_m53E25E22369B2CA64DC75785D60F6F0762493E13 (CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* __this, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value0, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeBytesSize(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeBytesSize_mBBCC55F79AA6621A3FB4DBFAFE6F630A88F14287 (ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::set_Value(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue_set_Value_mFCD421D4CF9BACFE0E60DA3CB8ACC7AEB886524E (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value0, const RuntimeMethod* method) ;
// Google.Protobuf.ByteString Google.Protobuf.CodedInputStream::ReadBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* CodedInputStream_ReadBytes_m549F9AFDF890EBBC4C3C0F0FA3845AE9E2681FF6 (CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Google.Protobuf.WellKnownTypes.BytesValue>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAB06527AB9E7171EF21E46F62B9A71F6973B5E90 (Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BytesValue>::.ctor(System.Func`1<T>)
inline void MessageParser_1__ctor_m93DAF3F973F520B4DAB1FB884C4163D9359D8244 (MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC* __this, Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06* ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC*, Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06*, const RuntimeMethod*))MessageParser_1__ctor_m79DDE10FEBA79EB94DDBD4216164A97C85202DC8_gshared)(__this, ___factory0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value__ctor_m808EC8E3AE4335CC98DA92DF29754FADAC94B780 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::.ctor(Google.Protobuf.WellKnownTypes.Int32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value__ctor_mDAC08331234A2A21D1B320BBEC736C843D25EE0A (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* ___other0, const RuntimeMethod* method) 
{
	{
		Int32Value__ctor_m808EC8E3AE4335CC98DA92DF29754FADAC94B780(__this, NULL);
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_0 = ___other0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___value__2;
		__this->___value__2 = L_1;
		return;
	}
}
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.Int32Value> Google.Protobuf.WellKnownTypes.Int32Value::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8* Int32Value_get_Parser_m0CC78805A72A51A0A2E1635D8A9F4693C3815D10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8* L_0 = ((Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_StaticFields*)il2cpp_codegen_static_fields_for(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.Int32Value::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Int32Value_get_Descriptor_mA78E61671A2E530E6A60B825C68F0B4D5E06A279 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 4);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.Int32Value::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* Int32Value_Google_Protobuf_IMessage_get_Descriptor_mCE581BF84118BB3CA11F9706BF8D7739B038DA89 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = Int32Value_get_Descriptor_mA78E61671A2E530E6A60B825C68F0B4D5E06A279(NULL);
		return L_0;
	}
}
// Google.Protobuf.WellKnownTypes.Int32Value Google.Protobuf.WellKnownTypes.Int32Value::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* Int32Value_Clone_m8023505E35E28EF20D851EBA23BE92FE10E7F821 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_0 = (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100*)il2cpp_codegen_object_new(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Int32Value__ctor_mDAC08331234A2A21D1B320BBEC736C843D25EE0A(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.Int32Value::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value__2;
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value_set_Value_m2A1B6DF78FB596958A053FD508B125040A0081BE (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.Int32Value::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32Value_Equals_m54D410D87ABB38CB7E5853731E86FBA267A4AF41 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = Int32Value_Equals_m4F3FB2E776BD451D0BB2C726C110F1870D5FEF22(__this, ((Int32Value_tC7417A24609865E654872326B56E94D2BB08D100*)IsInstSealed((RuntimeObject*)L_0, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.Int32Value::Equals(Google.Protobuf.WellKnownTypes.Int32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32Value_Equals_m4F3FB2E776BD451D0BB2C726C110F1870D5FEF22 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* ___other0, const RuntimeMethod* method) 
{
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_0 = ___other0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_2 = ___other0;
		bool L_3;
		L_3 = il2cpp_codegen_object_reference_equals(L_2, __this);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_4;
		L_4 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(L_5, NULL);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.Int32Value::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32Value_GetHashCode_m6859BDA1D923021BC9E54082B859E7D486A33546 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		int32_t L_0;
		L_0 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Google.Protobuf.WellKnownTypes.Int32Value::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32Value_ToString_mB5AC7B0A5E78CF00B7BE3A22C3C21421FE533504 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value_WriteTo_m5690A8E102D50CB0D897174CB8B212E2FF717C85 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_1 = ___output0;
		NullCheck(L_1);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_1, (uint8_t)8, NULL);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		int32_t L_3;
		L_3 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		NullCheck(L_2);
		CodedOutputStream_WriteInt32_m04AF441F8150B4EF8AA6FD12E98B35F8CC888E04(L_2, L_3, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.Int32Value::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32Value_CalculateSize_m7ECD92C6ADD65DA790FE6504C066A9A578844EC2 (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeInt32Size_m62CF15C91A41AC51B291BCD8EA973CF410D63B33(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::MergeFrom(Google.Protobuf.WellKnownTypes.Int32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value_MergeFrom_m72D0E5CC96D172505D467D529196C05BB002D92C (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* ___other0, const RuntimeMethod* method) 
{
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_1 = ___other0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline(L_3, NULL);
		Int32Value_set_Value_m2A1B6DF78FB596958A053FD508B125040A0081BE_inline(__this, L_4, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value_MergeFrom_m6E531E86DE6CCB1472E0FBFB47C92F25415032FA (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		goto IL_002d;
	}

IL_001c:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = CodedInputStream_ReadInt32_m5E54CA34B6B643C7CEAF7E30B376AEE754BE86BF(L_2, NULL);
		Int32Value_set_Value_m2A1B6DF78FB596958A053FD508B125040A0081BE_inline(__this, L_3, NULL);
		goto IL_002d;
	}

IL_002d:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.Int32Value::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Value__cctor_mE1A430494634333F4D15AE6DFE56FEA4E727F99E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t1851E884A1E67D0C945F52168887E9738558705E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_U3C_parserU3Em__0_m470987B0478B9992DAB3125A9A595792FDD5A51D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mE83897002ADBB637E5915B66F18CBF807B75C284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t1851E884A1E67D0C945F52168887E9738558705E* L_0 = (Func_1_t1851E884A1E67D0C945F52168887E9738558705E*)il2cpp_codegen_object_new(Func_1_t1851E884A1E67D0C945F52168887E9738558705E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m546EEB28E6E7D6504B945914A9F163568FCC9730(L_0, NULL, (intptr_t)((void*)Int32Value_U3C_parserU3Em__0_m470987B0478B9992DAB3125A9A595792FDD5A51D_RuntimeMethod_var), NULL);
		MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8* L_1 = (MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8*)il2cpp_codegen_object_new(MessageParser_1_tBC9FE6441282C93677A0953F5AA8CA5A28BD88A8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageParser_1__ctor_mE83897002ADBB637E5915B66F18CBF807B75C284(L_1, L_0, MessageParser_1__ctor_mE83897002ADBB637E5915B66F18CBF807B75C284_RuntimeMethod_var);
		((Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_StaticFields*)il2cpp_codegen_static_fields_for(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var))->____parser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_StaticFields*)il2cpp_codegen_static_fields_for(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var))->____parser_0), (void*)L_1);
		return;
	}
}
// Google.Protobuf.WellKnownTypes.Int32Value Google.Protobuf.WellKnownTypes.Int32Value::<_parser>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* Int32Value_U3C_parserU3Em__0_m470987B0478B9992DAB3125A9A595792FDD5A51D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* L_0 = (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100*)il2cpp_codegen_object_new(Int32Value_tC7417A24609865E654872326B56E94D2BB08D100_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Int32Value__ctor_m808EC8E3AE4335CC98DA92DF29754FADAC94B780(L_0, NULL);
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
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value__ctor_mA8C47316A9D7B26F028C9EA357869927EE3B4B72 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::.ctor(Google.Protobuf.WellKnownTypes.UInt32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value__ctor_m3EA22D4175B1CA74BBED78D75F81694A4394DA9D (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* ___other0, const RuntimeMethod* method) 
{
	{
		UInt32Value__ctor_mA8C47316A9D7B26F028C9EA357869927EE3B4B72(__this, NULL);
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_0 = ___other0;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___value__2;
		__this->___value__2 = L_1;
		return;
	}
}
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.UInt32Value> Google.Protobuf.WellKnownTypes.UInt32Value::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997* UInt32Value_get_Parser_m4612DF1A115A2BFC2DCDF013C92579C631A088E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997* L_0 = ((UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.UInt32Value::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* UInt32Value_get_Descriptor_m3F247297434A7148E086C8DBD9CF44641BC5CB78 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 5);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.UInt32Value::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* UInt32Value_Google_Protobuf_IMessage_get_Descriptor_m73B64766123A7B0DBE7D0AFCF9B202682BC6E935 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = UInt32Value_get_Descriptor_m3F247297434A7148E086C8DBD9CF44641BC5CB78(NULL);
		return L_0;
	}
}
// Google.Protobuf.WellKnownTypes.UInt32Value Google.Protobuf.WellKnownTypes.UInt32Value::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* UInt32Value_Clone_m7861F65F0F8C7C2926945AB01902D237270344B0 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_0 = (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6*)il2cpp_codegen_object_new(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UInt32Value__ctor_m3EA22D4175B1CA74BBED78D75F81694A4394DA9D(L_0, __this, NULL);
		return L_0;
	}
}
// System.UInt32 Google.Protobuf.WellKnownTypes.UInt32Value::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value__2;
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::set_Value(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value_set_Value_m235D6772278AE18203CF43484D84485EAE7C9D0C (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.UInt32Value::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32Value_Equals_m24F7601062ADD7FBD4ECFAA4F262EC3CCC3EC021 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = UInt32Value_Equals_m94344B3C8E92EA4BF3139342935802441A9DA505(__this, ((UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6*)IsInstSealed((RuntimeObject*)L_0, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.UInt32Value::Equals(Google.Protobuf.WellKnownTypes.UInt32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32Value_Equals_m94344B3C8E92EA4BF3139342935802441A9DA505 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* ___other0, const RuntimeMethod* method) 
{
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_0 = ___other0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_2 = ___other0;
		bool L_3;
		L_3 = il2cpp_codegen_object_reference_equals(L_2, __this);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		uint32_t L_4;
		L_4 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_5 = ___other0;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(L_5, NULL);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.UInt32Value::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Value_GetHashCode_mF1F3896609A47F7310EAB0FF811E7ECCBAE539C7 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint32_t L_0;
		L_0 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = V_0;
		uint32_t L_2;
		L_2 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Google.Protobuf.WellKnownTypes.UInt32Value::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32Value_ToString_m6C3B488001C0FA7047A5E702AA72F7631C183BDE (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value_WriteTo_m5DA6317FE64E0D88D2F98C3BCFFB09D437EB8DC0 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0;
		L_0 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_1 = ___output0;
		NullCheck(L_1);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_1, (uint8_t)8, NULL);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		uint32_t L_3;
		L_3 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		NullCheck(L_2);
		CodedOutputStream_WriteUInt32_mFA934C2C15F399DBE0CB0337DFF3E0CE90E06B26(L_2, L_3, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.UInt32Value::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Value_CalculateSize_m55DE01F960E667FE3EB99FB485E8C17A100A8355 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0;
		L_0 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = V_0;
		uint32_t L_2;
		L_2 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CodedOutputStream_ComputeUInt32Size_m1366404BD8A221D39D2A1B86D43384700DACC81C(L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_add(1, L_3))));
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::MergeFrom(Google.Protobuf.WellKnownTypes.UInt32Value)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value_MergeFrom_m77157BFB5193D6FA7EF497DE492DAB1680EB2F0F (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* ___other0, const RuntimeMethod* method) 
{
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_1 = ___other0;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_3 = ___other0;
		NullCheck(L_3);
		uint32_t L_4;
		L_4 = UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline(L_3, NULL);
		UInt32Value_set_Value_m235D6772278AE18203CF43484D84485EAE7C9D0C_inline(__this, L_4, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value_MergeFrom_m3BFB090B8BD900ABA3575DCA93424569ACBC4A85 (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		goto IL_002d;
	}

IL_001c:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = CodedInputStream_ReadUInt32_m18238B31DE3553A61DD480C26E54BE9BB3EE42C5(L_2, NULL);
		UInt32Value_set_Value_m235D6772278AE18203CF43484D84485EAE7C9D0C_inline(__this, L_3, NULL);
		goto IL_002d;
	}

IL_002d:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.UInt32Value::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Value__cctor_mB13B71A722617FE2C36600357020D266B5C5015A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mBE2FDCAAA3CBF4660244CCF15AFCDA3A62C428E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_U3C_parserU3Em__0_m15D150CDA1A548A5769C3EF00200308999E615F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB* L_0 = (Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB*)il2cpp_codegen_object_new(Func_1_t5B2F4C25063282B89CEFE8B2E8FCACC86FE2DEAB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_mE9659A5C020621EFD2B598C7F51F42B2E0ED2DE6(L_0, NULL, (intptr_t)((void*)UInt32Value_U3C_parserU3Em__0_m15D150CDA1A548A5769C3EF00200308999E615F3_RuntimeMethod_var), NULL);
		MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997* L_1 = (MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997*)il2cpp_codegen_object_new(MessageParser_1_tFCA54001786755DAF7BCD5D7532DEEE8B2652997_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageParser_1__ctor_mBE2FDCAAA3CBF4660244CCF15AFCDA3A62C428E0(L_1, L_0, MessageParser_1__ctor_mBE2FDCAAA3CBF4660244CCF15AFCDA3A62C428E0_RuntimeMethod_var);
		((UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var))->____parser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var))->____parser_0), (void*)L_1);
		return;
	}
}
// Google.Protobuf.WellKnownTypes.UInt32Value Google.Protobuf.WellKnownTypes.UInt32Value::<_parser>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* UInt32Value_U3C_parserU3Em__0_m15D150CDA1A548A5769C3EF00200308999E615F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* L_0 = (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6*)il2cpp_codegen_object_new(UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UInt32Value__ctor_mA8C47316A9D7B26F028C9EA357869927EE3B4B72(L_0, NULL);
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
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue__ctor_mF86BEF23526F8ED02110B7EA2852ACD454BC7715 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::.ctor(Google.Protobuf.WellKnownTypes.BoolValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue__ctor_mE30F185ED3506E61B55051F436FD17CFFF687E17 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* ___other0, const RuntimeMethod* method) 
{
	{
		BoolValue__ctor_mF86BEF23526F8ED02110B7EA2852ACD454BC7715(__this, NULL);
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = L_0->___value__2;
		__this->___value__2 = L_1;
		return;
	}
}
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BoolValue> Google.Protobuf.WellKnownTypes.BoolValue::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9* BoolValue_get_Parser_m5DCBA999A86F92303FDCB0A58BE34DCDA858FAE2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9* L_0 = ((BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_StaticFields*)il2cpp_codegen_static_fields_for(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BoolValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BoolValue_get_Descriptor_m592E2E52201DD7057292130905000121C5D8C3E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 6);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BoolValue::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BoolValue_Google_Protobuf_IMessage_get_Descriptor_mA72E80AB2329A6666AA4659A679CA4C515AA5100 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = BoolValue_get_Descriptor_m592E2E52201DD7057292130905000121C5D8C3E5(NULL);
		return L_0;
	}
}
// Google.Protobuf.WellKnownTypes.BoolValue Google.Protobuf.WellKnownTypes.BoolValue::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* BoolValue_Clone_m2C1118C27D8CA7EC83D5162F61311C425927C0CA (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_0 = (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E*)il2cpp_codegen_object_new(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoolValue__ctor_mE30F185ED3506E61B55051F436FD17CFFF687E17(L_0, __this, NULL);
		return L_0;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value__2;
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue_set_Value_mC51ACDFA86303909B22AE7307CF17B624CD5623A (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolValue_Equals_m316F115DE6362249351EE6A47740B4A888992DD3 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = BoolValue_Equals_m79D90601930C6B44BE3286EF954C17FB6B012F37(__this, ((BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E*)IsInstSealed((RuntimeObject*)L_0, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.BoolValue::Equals(Google.Protobuf.WellKnownTypes.BoolValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoolValue_Equals_m79D90601930C6B44BE3286EF954C17FB6B012F37 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* ___other0, const RuntimeMethod* method) 
{
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_0 = ___other0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_2 = ___other0;
		bool L_3;
		L_3 = il2cpp_codegen_object_reference_equals(L_2, __this);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		bool L_4;
		L_4 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_5 = ___other0;
		NullCheck(L_5);
		bool L_6;
		L_6 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(L_5, NULL);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.BoolValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoolValue_GetHashCode_m258B69E0D6E99824DBE00795314285BF33FF7A84 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 1;
		bool L_0;
		L_0 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)(L_1^L_3));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Google.Protobuf.WellKnownTypes.BoolValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoolValue_ToString_m7D13F54994962E512FC3D900F3C2CB3D65BFED9A (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue_WriteTo_m7225404F944971E5621069F69BB7013C751ADCB0 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_1 = ___output0;
		NullCheck(L_1);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_1, (uint8_t)8, NULL);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		bool L_3;
		L_3 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		NullCheck(L_2);
		CodedOutputStream_WriteBool_m2EC319E1AE95C24869029ABAE573FB481D81F88B(L_2, L_3, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.BoolValue::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoolValue_CalculateSize_m55A701A0F66C41771AB4DB6292A78CC448DE61C3 (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 2));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::MergeFrom(Google.Protobuf.WellKnownTypes.BoolValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue_MergeFrom_m17D0A7AA6F850CE19DF65FD1653B0CCEC6BFCD2B (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* ___other0, const RuntimeMethod* method) 
{
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_1 = ___other0;
		NullCheck(L_1);
		bool L_2;
		L_2 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline(L_3, NULL);
		BoolValue_set_Value_mC51ACDFA86303909B22AE7307CF17B624CD5623A_inline(__this, L_4, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue_MergeFrom_m72DA298CA9717F02F2BB210BB7F350D9943CF9BA (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_002d;
	}

IL_0005:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		goto IL_002d;
	}

IL_001c:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		bool L_3;
		L_3 = CodedInputStream_ReadBool_mBD1DDCE0C8D6D94157110EA065F14824C6C0928A(L_2, NULL);
		BoolValue_set_Value_mC51ACDFA86303909B22AE7307CF17B624CD5623A_inline(__this, L_3, NULL);
		goto IL_002d;
	}

IL_002d:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BoolValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolValue__cctor_m50A87F0BA6927D6CFE8235AC9B8D6771751A212D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_U3C_parserU3Em__0_m2B3AB8EE3E361E6D9005BD45C4D35BFC55BB8332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m0AD6815C986FAA5BDF84D51297094BED450B79B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3* L_0 = (Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3*)il2cpp_codegen_object_new(Func_1_tF5198F024AE900F49A7B93272B0E2183F469DAF3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m0019CC3ACC65B3F99AC65C936E8CE31EB19531FD(L_0, NULL, (intptr_t)((void*)BoolValue_U3C_parserU3Em__0_m2B3AB8EE3E361E6D9005BD45C4D35BFC55BB8332_RuntimeMethod_var), NULL);
		MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9* L_1 = (MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9*)il2cpp_codegen_object_new(MessageParser_1_t144A8846DA1154A7689330166E41727BB6F3B1B9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageParser_1__ctor_m0AD6815C986FAA5BDF84D51297094BED450B79B5(L_1, L_0, MessageParser_1__ctor_m0AD6815C986FAA5BDF84D51297094BED450B79B5_RuntimeMethod_var);
		((BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_StaticFields*)il2cpp_codegen_static_fields_for(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var))->____parser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_StaticFields*)il2cpp_codegen_static_fields_for(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var))->____parser_0), (void*)L_1);
		return;
	}
}
// Google.Protobuf.WellKnownTypes.BoolValue Google.Protobuf.WellKnownTypes.BoolValue::<_parser>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* BoolValue_U3C_parserU3Em__0_m2B3AB8EE3E361E6D9005BD45C4D35BFC55BB8332 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* L_0 = (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E*)il2cpp_codegen_object_new(BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BoolValue__ctor_mF86BEF23526F8ED02110B7EA2852ACD454BC7715(L_0, NULL);
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
// System.Void Google.Protobuf.WellKnownTypes.StringValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_m93D64595B2B1203164BAA6018EA398BCE1ED2D8C (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___value__2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::.ctor(Google.Protobuf.WellKnownTypes.StringValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__ctor_mB8B369CD71CB10D9ABD4D5A0F2FC424B3D6D69A1 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* ___other0, const RuntimeMethod* method) 
{
	{
		StringValue__ctor_m93D64595B2B1203164BAA6018EA398BCE1ED2D8C(__this, NULL);
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___value__2;
		__this->___value__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_1);
		return;
	}
}
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.StringValue> Google.Protobuf.WellKnownTypes.StringValue::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9* StringValue_get_Parser_m162AB354BDD4D13E29E253F07B124376EC04C10B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9* L_0 = ((StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_StaticFields*)il2cpp_codegen_static_fields_for(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.StringValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* StringValue_get_Descriptor_m6E8BD204E1169FB7497C28D754D1C3AE15F8C302 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 7);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.StringValue::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* StringValue_Google_Protobuf_IMessage_get_Descriptor_mC898B14290C8B78FB80E4B9773E9FDB43A56F527 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = StringValue_get_Descriptor_m6E8BD204E1169FB7497C28D754D1C3AE15F8C302(NULL);
		return L_0;
	}
}
// Google.Protobuf.WellKnownTypes.StringValue Google.Protobuf.WellKnownTypes.StringValue::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* StringValue_Clone_m7EC77A19A1031058306D52E06BA1F26912F6D439 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_0 = (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474*)il2cpp_codegen_object_new(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringValue__ctor_mB8B369CD71CB10D9ABD4D5A0F2FC424B3D6D69A1(L_0, __this, NULL);
		return L_0;
	}
}
// System.String Google.Protobuf.WellKnownTypes.StringValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value__2;
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue_set_Value_m7FA46696EE4AFF06E3A4FC45100075025BB55C76 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preconditions_CheckNotNull_TisString_t_m244C1D9C57657C385CAE9CD7333372F386A242F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		String_t* L_1;
		L_1 = Preconditions_CheckNotNull_TisString_t_m244C1D9C57657C385CAE9CD7333372F386A242F8(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, Preconditions_CheckNotNull_TisString_t_m244C1D9C57657C385CAE9CD7333372F386A242F8_RuntimeMethod_var);
		__this->___value__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_1);
		return;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.StringValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValue_Equals_m1985C9D7B935146358951E43CCB72782357976D2 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = StringValue_Equals_mF2E972F6CDEBEFDB6FBE5ABE55CC6AAB40173CD1(__this, ((StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474*)IsInstSealed((RuntimeObject*)L_0, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.StringValue::Equals(Google.Protobuf.WellKnownTypes.StringValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringValue_Equals_mF2E972F6CDEBEFDB6FBE5ABE55CC6AAB40173CD1 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* ___other0, const RuntimeMethod* method) 
{
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_0 = ___other0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_2 = ___other0;
		bool L_3;
		L_3 = il2cpp_codegen_object_reference_equals(L_2, __this);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		String_t* L_4;
		L_4 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.StringValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValue_GetHashCode_mDB4CD0CE6E6EAA2EA9B1A2BF99BE03C7847D458B (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		String_t* L_0;
		L_0 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.String Google.Protobuf.WellKnownTypes.StringValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringValue_ToString_mA035F9D123C97D513695E2530C72C4F04DE93FEB (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue_WriteTo_mC9F64979634CE3D3DDF189F694226D5E7D1011BB (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		NullCheck(L_2);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_2, (uint8_t)((int32_t)10), NULL);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_3 = ___output0;
		String_t* L_4;
		L_4 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		NullCheck(L_3);
		CodedOutputStream_WriteString_m7FFA3171E544226262BB307F2C7CED3CC0B37D0B(L_3, L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.StringValue::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringValue_CalculateSize_mA08B843BDAC9F16139155ED1A3C15DE2ABDBDFAD (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0;
		L_0 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = V_0;
		String_t* L_3;
		L_3 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeStringSize_m92DC0377FB211F101BD116CA72093D148E0C1A8C(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::MergeFrom(Google.Protobuf.WellKnownTypes.StringValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue_MergeFrom_m67B3230702165A65874D7805D5CB16F3135C86AF (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* ___other0, const RuntimeMethod* method) 
{
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline(L_4, NULL);
		StringValue_set_Value_m7FA46696EE4AFF06E3A4FC45100075025BB55C76(__this, L_5, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue_MergeFrom_m906643E9C05FFCA2A053D72A7CCBCD808DC28C40 (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_002e;
	}

IL_0005:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		goto IL_002e;
	}

IL_001d:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = CodedInputStream_ReadString_mFBF6D27565878E31A6579D389F4C863083A9C5CB(L_2, NULL);
		StringValue_set_Value_m7FA46696EE4AFF06E3A4FC45100075025BB55C76(__this, L_3, NULL);
		goto IL_002e;
	}

IL_002e:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.StringValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringValue__cctor_mE7D853452B1977D4735696F09D205C8DFADF7443 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m377DA8D1CCE859639E9C9977DF05BC7960793B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_U3C_parserU3Em__0_m7C0EA953A9DB56654D7ED657C470D0FE29A62927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7* L_0 = (Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7*)il2cpp_codegen_object_new(Func_1_tCFF611D9123D18F32F726FBD27274CF4290711E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_m7C44E03D5C437E86BAD03A6C2F0068B34BAF8077(L_0, NULL, (intptr_t)((void*)StringValue_U3C_parserU3Em__0_m7C0EA953A9DB56654D7ED657C470D0FE29A62927_RuntimeMethod_var), NULL);
		MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9* L_1 = (MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9*)il2cpp_codegen_object_new(MessageParser_1_tBBE93EC77B58253C5DFE3CF068428E5143F4E5F9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageParser_1__ctor_m377DA8D1CCE859639E9C9977DF05BC7960793B01(L_1, L_0, MessageParser_1__ctor_m377DA8D1CCE859639E9C9977DF05BC7960793B01_RuntimeMethod_var);
		((StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_StaticFields*)il2cpp_codegen_static_fields_for(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var))->____parser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_StaticFields*)il2cpp_codegen_static_fields_for(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var))->____parser_0), (void*)L_1);
		return;
	}
}
// Google.Protobuf.WellKnownTypes.StringValue Google.Protobuf.WellKnownTypes.StringValue::<_parser>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* StringValue_U3C_parserU3Em__0_m7C0EA953A9DB56654D7ED657C470D0FE29A62927 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* L_0 = (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474*)il2cpp_codegen_object_new(StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringValue__ctor_m93D64595B2B1203164BAA6018EA398BCE1ED2D8C(L_0, NULL);
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
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue__ctor_m9F4CC991ED680410765CBCD68746A12642980815 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0;
		L_0 = ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline(NULL);
		__this->___value__2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::.ctor(Google.Protobuf.WellKnownTypes.BytesValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue__ctor_m3A6BAF1AFBC0147EFD39A917C05783719FE7E05C (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* ___other0, const RuntimeMethod* method) 
{
	{
		BytesValue__ctor_m9F4CC991ED680410765CBCD68746A12642980815(__this, NULL);
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_0 = ___other0;
		NullCheck(L_0);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_1 = L_0->___value__2;
		__this->___value__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_1);
		return;
	}
}
// Google.Protobuf.MessageParser`1<Google.Protobuf.WellKnownTypes.BytesValue> Google.Protobuf.WellKnownTypes.BytesValue::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC* BytesValue_get_Parser_m82D0292F40D47AA183CC24885FE873941B0305EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC* L_0 = ((BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_StaticFields*)il2cpp_codegen_static_fields_for(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var))->____parser_0;
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BytesValue::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BytesValue_get_Descriptor_m08042A86A3A3E2EC854811A363F877A7ACE3F08A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0;
		L_0 = WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline(L_0, NULL);
		NullCheck(L_1);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tCEDC36A5A241399DB682BDCFCB0F8D94F53F89FD_il2cpp_TypeInfo_var, L_1, 8);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.WellKnownTypes.BytesValue::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* BytesValue_Google_Protobuf_IMessage_get_Descriptor_mF43975C8267893FE8129BA05B9E2B24BD4D5F120 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		MessageDescriptor_tEDA9F168F333065EF485C9A712910D335A3F0906* L_0;
		L_0 = BytesValue_get_Descriptor_m08042A86A3A3E2EC854811A363F877A7ACE3F08A(NULL);
		return L_0;
	}
}
// Google.Protobuf.WellKnownTypes.BytesValue Google.Protobuf.WellKnownTypes.BytesValue::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* BytesValue_Clone_m3BC1417DA6403FBD1A366DF356087C9F0261651D (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_0 = (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8*)il2cpp_codegen_object_new(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BytesValue__ctor_m3A6BAF1AFBC0147EFD39A917C05783719FE7E05C(L_0, __this, NULL);
		return L_0;
	}
}
// Google.Protobuf.ByteString Google.Protobuf.WellKnownTypes.BytesValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = __this->___value__2;
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::set_Value(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue_set_Value_mFCD421D4CF9BACFE0E60DA3CB8ACC7AEB886524E (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Preconditions_CheckNotNull_TisByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_m66C1E2FAC82A30AFB671BE2C7A14E3581E6F4376_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = ___value0;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_1;
		L_1 = Preconditions_CheckNotNull_TisByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_m66C1E2FAC82A30AFB671BE2C7A14E3581E6F4376(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, Preconditions_CheckNotNull_TisByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_m66C1E2FAC82A30AFB671BE2C7A14E3581E6F4376_RuntimeMethod_var);
		__this->___value__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value__2), (void*)L_1);
		return;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.BytesValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesValue_Equals_mE9EBA08F662DAF977832C117C24E889BD60B89F6 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		bool L_1;
		L_1 = BytesValue_Equals_mDA077B7C794F912B3DCD7AA559363B28F0C87D59(__this, ((BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8*)IsInstSealed((RuntimeObject*)L_0, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Boolean Google.Protobuf.WellKnownTypes.BytesValue::Equals(Google.Protobuf.WellKnownTypes.BytesValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BytesValue_Equals_mDA077B7C794F912B3DCD7AA559363B28F0C87D59 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_0 = ___other0;
		bool L_1;
		L_1 = il2cpp_codegen_object_reference_equals(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_2 = ___other0;
		bool L_3;
		L_3 = il2cpp_codegen_object_reference_equals(L_2, __this);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_4;
		L_4 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_5 = ___other0;
		NullCheck(L_5);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_6;
		L_6 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ByteString_op_Inequality_m39A72929C6A63243F2821F66C29B3A7E81E8AD94(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		return (bool)1;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.BytesValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesValue_GetHashCode_m73F3D06BFAB33BFE5D55B9B70209C5603BAD9CC3 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0;
		L_0 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteString_get_Length_m2F06113BC9A5D92BAD680B227417EFCED407CB8C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_3;
		L_3 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		V_0 = ((int32_t)(L_2^L_4));
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.String Google.Protobuf.WellKnownTypes.BytesValue::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BytesValue_ToString_m79B2448DE40BEBDA57C2AC3A85FC837D4C8CE82E (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonFormatter_tC07776B90541EC7D8AEBA95C09920E667FAE5B3B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_mC6580DDBB77AE9E5DDDE29D40761DE2250D3EC89(__this, NULL);
		return L_0;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue_WriteTo_m12C2DA59A9EF08DA5A162D1DFFBB6D196C171EAA (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* ___output0, const RuntimeMethod* method) 
{
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0;
		L_0 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteString_get_Length_m2F06113BC9A5D92BAD680B227417EFCED407CB8C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_2 = ___output0;
		NullCheck(L_2);
		CodedOutputStream_WriteRawTag_m73DA7A01D5AA96250E25B889663888AAAD52A4E7(L_2, (uint8_t)((int32_t)10), NULL);
		CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163* L_3 = ___output0;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_4;
		L_4 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		NullCheck(L_3);
		CodedOutputStream_WriteBytes_m53E25E22369B2CA64DC75785D60F6F0762493E13(L_3, L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Int32 Google.Protobuf.WellKnownTypes.BytesValue::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BytesValue_CalculateSize_m9E8F8BFE85AF11C57D718D7CDEC792C4477FCC89 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0;
		L_0 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ByteString_get_Length_m2F06113BC9A5D92BAD680B227417EFCED407CB8C(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = V_0;
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_3;
		L_3 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CodedOutputStream_tEA7C97F94CE101273611192E2A22CD872F584163_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = CodedOutputStream_ComputeBytesSize_mBBCC55F79AA6621A3FB4DBFAFE6F630A88F14287(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(1, L_4))));
	}

IL_0022:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::MergeFrom(Google.Protobuf.WellKnownTypes.BytesValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue_MergeFrom_mFE32BA1CC4A88CD22EBB64C5398DF75AD0882E67 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* ___other0, const RuntimeMethod* method) 
{
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_0 = ___other0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_1 = ___other0;
		NullCheck(L_1);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_2;
		L_2 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ByteString_get_Length_m2F06113BC9A5D92BAD680B227417EFCED407CB8C(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_4 = ___other0;
		NullCheck(L_4);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_5;
		L_5 = BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline(L_4, NULL);
		BytesValue_set_Value_mFCD421D4CF9BACFE0E60DA3CB8ACC7AEB886524E(__this, L_5, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue_MergeFrom_m65E8D5FEE18FD143757C266178DFE9E02D3629F0 (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* ___input0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		goto IL_002e;
	}

IL_0005:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_1 = ___input0;
		NullCheck(L_1);
		CodedInputStream_SkipLastField_mBFF9AF6970A4B812B9CE254B4AD5944EA3C9FCC5(L_1, NULL);
		goto IL_002e;
	}

IL_001d:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_2 = ___input0;
		NullCheck(L_2);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_3;
		L_3 = CodedInputStream_ReadBytes_m549F9AFDF890EBBC4C3C0F0FA3845AE9E2681FF6(L_2, NULL);
		BytesValue_set_Value_mFCD421D4CF9BACFE0E60DA3CB8ACC7AEB886524E(__this, L_3, NULL);
		goto IL_002e;
	}

IL_002e:
	{
		CodedInputStream_t271CAE9006F3226F28E8F9FCF8E2B0C35E64B425* L_4 = ___input0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = CodedInputStream_ReadTag_m5E3B124AC3D26CC786F4B15591C0D929E9013199(L_4, NULL);
		uint32_t L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void Google.Protobuf.WellKnownTypes.BytesValue::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytesValue__cctor_m03D51F715F6FAFC6485B49801AADB6171654E1EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_U3C_parserU3Em__0_mD6D50BA966EB0AF86403B6DF7257BDDEC12C6F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m93DAF3F973F520B4DAB1FB884C4163D9359D8244_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06* L_0 = (Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06*)il2cpp_codegen_object_new(Func_1_tDC2741D022454C2962DF84F335407DD3E31D1B06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_mAB06527AB9E7171EF21E46F62B9A71F6973B5E90(L_0, NULL, (intptr_t)((void*)BytesValue_U3C_parserU3Em__0_mD6D50BA966EB0AF86403B6DF7257BDDEC12C6F4E_RuntimeMethod_var), NULL);
		MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC* L_1 = (MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC*)il2cpp_codegen_object_new(MessageParser_1_t35FA7B70677E9BFC17DB56C809515E0A506B09BC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MessageParser_1__ctor_m93DAF3F973F520B4DAB1FB884C4163D9359D8244(L_1, L_0, MessageParser_1__ctor_m93DAF3F973F520B4DAB1FB884C4163D9359D8244_RuntimeMethod_var);
		((BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_StaticFields*)il2cpp_codegen_static_fields_for(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var))->____parser_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_StaticFields*)il2cpp_codegen_static_fields_for(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var))->____parser_0), (void*)L_1);
		return;
	}
}
// Google.Protobuf.WellKnownTypes.BytesValue Google.Protobuf.WellKnownTypes.BytesValue::<_parser>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* BytesValue_U3C_parserU3Em__0_mD6D50BA966EB0AF86403B6DF7257BDDEC12C6F4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* L_0 = (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8*)il2cpp_codegen_object_new(BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BytesValue__ctor_m9F4CC991ED680410765CBCD68746A12642980815(L_0, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* WrappersReflection_get_Descriptor_m977F2F0C83444CC2A5E034F5EAFF26870C5A887B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var);
		FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* L_0 = ((WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_StaticFields*)il2cpp_codegen_static_fields_for(WrappersReflection_tEF95445042FC76730013B4F4784CFD2FF064CABF_il2cpp_TypeInfo_var))->___descriptor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_m0FB1C458BB323A507214648AC7944A9FBE4D3E78_inline (FileDescriptor_t98C214A5F44C133FB506674D078903A5D4453CDE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMessageTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Int32Value_get_Value_mF0DF7C8BCD1D7140C66ADDEEEBE4D4833C64C426_inline (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Int32Value_set_Value_m2A1B6DF78FB596958A053FD508B125040A0081BE_inline (Int32Value_tC7417A24609865E654872326B56E94D2BB08D100* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UInt32Value_get_Value_m2720E16DFCF0849536C5D0F6DBBA1899DC693A26_inline (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___value__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UInt32Value_set_Value_m235D6772278AE18203CF43484D84485EAE7C9D0C_inline (UInt32Value_t54D0A565DCC967FABA24AFC31A2FC479468BACE6* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoolValue_get_Value_m7EFC16827ECF14D980F0C757B3A1B4E9C42BFC98_inline (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoolValue_set_Value_mC51ACDFA86303909B22AE7307CF17B624CD5623A_inline (BoolValue_t11EAF7AA10378517C473EA2338901CA61A62B83E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___value__2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StringValue_get_Value_mF8D363698D539E6C3900F23C33B797287D3333F1_inline (StringValue_tA5FFE8D1DA7D61A709060967DA75A74D4C10F474* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___value__2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ByteString_get_Empty_m2251FAD9C8D09FA127E81F228DF5A60D4EE3F414_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var);
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = ((ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592_il2cpp_TypeInfo_var))->___empty_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* BytesValue_get_Value_m4F63D8D1B95A96FBD8598DC47CDD33335298710D_inline (BytesValue_t0E6235205A9D00CE3164E8A587A54349CEE629C8* __this, const RuntimeMethod* method) 
{
	{
		ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* L_0 = __this->___value__2;
		return L_0;
	}
}

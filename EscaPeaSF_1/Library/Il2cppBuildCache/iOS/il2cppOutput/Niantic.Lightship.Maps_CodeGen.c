#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.UInt64 Niantic.Lightship.Maps.IMapTile::get_Id()
// 0x00000002 UnityEngine.Vector3 Niantic.Lightship.Maps.IMapTile::get_Origin()
// 0x00000003 System.Single Niantic.Lightship.Maps.IMapTile::get_Size()
// 0x00000004 System.Int32 Niantic.Lightship.Maps.IMapTile::get_Level()
// 0x00000005 System.String Niantic.Lightship.Maps.IMapTile::get_TileCoordinateString()
// 0x00000006 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.IMapTile::GetTileDataOfType(Niantic.Lightship.Maps.Proto.LayerKind)
// 0x00000007 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.IMapTile::GetTileDataOfType(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
// 0x00000008 System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.IMapTile::GetTileData(Niantic.Lightship.Maps.Proto.LayerKind)
// 0x00000009 System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.IMapTile::GetTileData(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
// 0x0000000A System.Int32 Niantic.Lightship.Maps.IMapViewManager::get_MainViewId()
// 0x0000000B System.Int32 Niantic.Lightship.Maps.IMapViewManager::get_InvalidViewId()
// 0x0000000C System.Int32 Niantic.Lightship.Maps.IMapViewManager::get_MaxViews()
// 0x0000000D System.Int32 Niantic.Lightship.Maps.IMapViewManager::get_NumViews()
// 0x0000000E System.Int32 Niantic.Lightship.Maps.IMapViewManager::AddView(Niantic.Lightship.Maps.ViewPoint& modreq(System.Runtime.InteropServices.InAttribute))
// 0x0000000F Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.IMapViewManager::GetView(System.Int32)
// 0x00000010 System.Void Niantic.Lightship.Maps.IMapViewManager::RemoveView(System.Int32)
// 0x00000011 System.Boolean Niantic.Lightship.Maps.IMapViewManager::SetView(System.Int32,Niantic.Lightship.Maps.ViewPoint& modreq(System.Runtime.InteropServices.InAttribute))
// 0x00000012 System.Void Niantic.Lightship.Maps.ITileStreamService::add_MapTileDataReady(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
// 0x00000013 System.Void Niantic.Lightship.Maps.ITileStreamService::remove_MapTileDataReady(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
// 0x00000014 System.Void Niantic.Lightship.Maps.ITileStreamService::add_MapTileDeleted(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
// 0x00000015 System.Void Niantic.Lightship.Maps.ITileStreamService::remove_MapTileDeleted(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
// 0x00000016 System.Collections.Generic.IReadOnlyCollection`1<Niantic.Lightship.Maps.IMapTile> Niantic.Lightship.Maps.ITileStreamService::get_ActiveTiles()
// 0x00000017 System.Void Niantic.Lightship.Maps.ITileStreamServiceInternal::AddReadyTile(Niantic.Lightship.Maps.IMapTile)
// 0x00000018 System.Void Niantic.Lightship.Maps.ITileStreamServiceInternal::DeleteTile(System.UInt64)
// 0x00000019 Niantic.Lightship.Maps.ITileStreamService Niantic.Lightship.Maps.ILightshipMapsSystem::get_TileStreamService()
// 0x0000001A Niantic.Lightship.Maps.IMapViewManager Niantic.Lightship.Maps.ILightshipMapsSystem::get_MapViewManager()
// 0x0000001B System.Void Niantic.Lightship.Maps.ILightshipMapsSystem::Shutdown()
// 0x0000001C System.Void Niantic.Lightship.Maps.ILightshipMapsSystem::ProcessEvents()
// 0x0000001D System.Boolean Niantic.Lightship.Maps.LightshipMapsSystem::get_IsIdle()
extern void LightshipMapsSystem_get_IsIdle_m8761BE320BEB4A933CA889AB83CC57CA461BB864 (void);
// 0x0000001E Niantic.Lightship.Maps.ITileStreamService Niantic.Lightship.Maps.LightshipMapsSystem::get_TileStreamService()
extern void LightshipMapsSystem_get_TileStreamService_m1ACB56A1BD30890F508BEA933040DB2214A0613B (void);
// 0x0000001F Niantic.Lightship.Maps.IMapViewManager Niantic.Lightship.Maps.LightshipMapsSystem::get_MapViewManager()
extern void LightshipMapsSystem_get_MapViewManager_m46CD4BA6790D4A9447049AE767071B2BCABB45DD (void);
// 0x00000020 System.Void Niantic.Lightship.Maps.LightshipMapsSystem::set_MapViewManager(Niantic.Lightship.Maps.IMapViewManager)
extern void LightshipMapsSystem_set_MapViewManager_m9A284D9DFC92B0D536A339D82484A84BD98B97E0 (void);
// 0x00000021 Niantic.Lightship.Maps.ILightshipMapsSystem Niantic.Lightship.Maps.LightshipMapsSystem::get_Instance()
extern void LightshipMapsSystem_get_Instance_m5D69C39811E6E69EC6E638A755174B7F8D434694 (void);
// 0x00000022 System.Void Niantic.Lightship.Maps.LightshipMapsSystem::.ctor(Niantic.Lightship.Maps.ITileStreamServiceImpl,Niantic.Lightship.Maps.IMapViewManager)
extern void LightshipMapsSystem__ctor_mC8552A0D856020063E20D1B62109E9C51969403A (void);
// 0x00000023 Niantic.Lightship.Maps.ILightshipMapsSystem Niantic.Lightship.Maps.LightshipMapsSystem::Initialize(System.String,System.String,System.String,System.String,System.Version,Niantic.Lightship.Maps.ITileStreamServiceImpl,Niantic.Lightship.Maps.IMapViewManager)
extern void LightshipMapsSystem_Initialize_m9A73519ECD932BE35203458570260A1720B078A1 (void);
// 0x00000024 Niantic.Lightship.Maps.ILightshipMapsSystem Niantic.Lightship.Maps.LightshipMapsSystem::InitializeInternal(System.String,System.String,System.String,System.String,System.Version,Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Internal.Settings.ISettingsService,Niantic.Lightship.Maps.ITileStreamServiceImpl,Niantic.Lightship.Maps.IMapViewManager)
extern void LightshipMapsSystem_InitializeInternal_m51371DD801BB624978585EF8236F5AC5B96DF36E (void);
// 0x00000025 System.Void Niantic.Lightship.Maps.LightshipMapsSystem::Shutdown()
extern void LightshipMapsSystem_Shutdown_m842B92017489B97AABF70AB8F634379966E40E67 (void);
// 0x00000026 System.Void Niantic.Lightship.Maps.LightshipMapsSystem::ProcessEvents()
extern void LightshipMapsSystem_ProcessEvents_mED4B6C4C74601D59037B9F8B987BAEDA197D0841 (void);
// 0x00000027 System.Double Niantic.Lightship.Maps.ViewPoint::get_LongitudeDeg()
extern void ViewPoint_get_LongitudeDeg_mB83CF8355D7391AB1910239BAA7EEFE3CEB5FB2A (void);
// 0x00000028 System.Double Niantic.Lightship.Maps.ViewPoint::get_LatitudeDeg()
extern void ViewPoint_get_LatitudeDeg_m82D97FDB02E08578758524B39E2C888BE4975DBA (void);
// 0x00000029 Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.ViewPoint::get_Invalid()
extern void ViewPoint_get_Invalid_m2B11C0D16E0AA7A2AAC3A272BE3F0E2940D5A187 (void);
// 0x0000002A System.Boolean Niantic.Lightship.Maps.ViewPoint::get_IsValid()
extern void ViewPoint_get_IsValid_m2F6D8A49D55832A7D9B2F068F2C202DE93C68C15 (void);
// 0x0000002B System.Void Niantic.Lightship.Maps.ViewPoint::.ctor(System.Double,System.Double,System.Double)
extern void ViewPoint__ctor_mECD9AE12C943D343B1F57FC517F06656AF8EE800 (void);
// 0x0000002C System.Void Niantic.Lightship.Maps.ViewPoint::.ctor(Niantic.Lightship.Maps.Coordinates.LatLng&,System.Double)
extern void ViewPoint__ctor_mE52B5974BA324D44C0E01A1B49915FC6E4E1964B (void);
// 0x0000002D Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.ViewPoint::WithNewLatLng(Niantic.Lightship.Maps.Coordinates.LatLng&)
extern void ViewPoint_WithNewLatLng_m11E5D552A6C2F6992FFDDE295A570E84887EA1B8 (void);
// 0x0000002E Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.ViewPoint::WithNewMapRadius(System.Double)
extern void ViewPoint_WithNewMapRadius_m40A600EF9E60EC147046CB7D35F9FB00BC4986FB (void);
// 0x0000002F System.String Niantic.Lightship.Maps.ViewPoint::ToString()
extern void ViewPoint_ToString_m22D7604D30895530E878DDC1336C5A087B5DCA48 (void);
// 0x00000030 System.Double Niantic.Lightship.Maps.Utilities.MathEx::DegToRad(System.Double)
extern void MathEx_DegToRad_mE7E368425B9CF620F0822562579D83A1689ACB11 (void);
// 0x00000031 System.Double Niantic.Lightship.Maps.Utilities.MathEx::RadToDeg(System.Double)
extern void MathEx_RadToDeg_mC3E21305C0D676D4BD5BDDCA54FED4BFD449F3E9 (void);
// 0x00000032 System.Double Niantic.Lightship.Maps.Utilities.MathEx::Clamp(System.Double,System.Double,System.Double)
extern void MathEx_Clamp_m63C4BD1B08AF72AE6A24B1A2C142532265422190 (void);
// 0x00000033 System.Int32 Niantic.Lightship.Maps.Utilities.MathEx::Clamp(System.Int32,System.Int32,System.Int32)
extern void MathEx_Clamp_m40EF9AB537E8F244CBC7B95AB58E4DC6B2E04D8C (void);
// 0x00000034 System.Double Niantic.Lightship.Maps.Utilities.MathEx::WrapInclusive(System.Double,System.Double,System.Double)
extern void MathEx_WrapInclusive_m03A0F6F78F7513286DABA8FB0B662211C0EA6B97 (void);
// 0x00000035 System.Int32 Niantic.Lightship.Maps.Utilities.MathEx::WrapInclusive(System.Int32,System.Int32,System.Int32)
extern void MathEx_WrapInclusive_m9E0206A772AF5157EB422E3D5AB2C7BB04383E40 (void);
// 0x00000036 System.Double Niantic.Lightship.Maps.Utilities.MathEx::WrapExclusive(System.Double,System.Double,System.Double)
extern void MathEx_WrapExclusive_m520AFC956A72A8699599D984C28D580269A1FD17 (void);
// 0x00000037 System.Int32 Niantic.Lightship.Maps.Utilities.MathEx::WrapExclusive(System.Int32,System.Int32,System.Int32)
extern void MathEx_WrapExclusive_m85B1A0B4F77F8BA7780C0FE49F7D046FC8E4EF1E (void);
// 0x00000038 System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetween(System.Int32,System.Int32,System.Int32)
extern void MathEx_IsBetween_m36ADBACAC0D71975B2A39746EB57EFF050676F1A (void);
// 0x00000039 System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetween(System.Single,System.Single,System.Single)
extern void MathEx_IsBetween_m1B1B19F9BF61FB00BF6C7BD4003F7B6F3C857438 (void);
// 0x0000003A System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetween(System.Double,System.Double,System.Double)
extern void MathEx_IsBetween_m1634E811D01B1C71FB6E88751BDE8F026031505D (void);
// 0x0000003B System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetweenMaxExclusive(System.Int32,System.Int32,System.Int32)
extern void MathEx_IsBetweenMaxExclusive_m9EC11579ABDE5981C94F05A8AAE62E94507EA426 (void);
// 0x0000003C System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetweenMaxExclusive(System.Single,System.Single,System.Single)
extern void MathEx_IsBetweenMaxExclusive_m73D400411CDFA2CD4AF2A2ACCC06173B0B21150F (void);
// 0x0000003D System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::IsBetweenMaxExclusive(System.Double,System.Double,System.Double)
extern void MathEx_IsBetweenMaxExclusive_mCC72C41CE916DAF715471F34C4951A9600046985 (void);
// 0x0000003E System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::AlmostEqual(System.Single,System.Single,System.Single)
extern void MathEx_AlmostEqual_m68C083D313EAE4C98847AADFC67BF50F3A50B87D (void);
// 0x0000003F System.Boolean Niantic.Lightship.Maps.Utilities.MathEx::AlmostEqual(System.Double,System.Double,System.Double)
extern void MathEx_AlmostEqual_mDD96AAE121760C84715031371746D2935D973FC8 (void);
// 0x00000040 Google.Protobuf.Reflection.FileDescriptor Niantic.Lightship.Maps.Proto.MapCompositionRootReflection::get_Descriptor()
extern void MapCompositionRootReflection_get_Descriptor_mE02496EC984E0ED6CA572EC10E00655B6DFEB2DC (void);
// 0x00000041 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRootReflection::.cctor()
extern void MapCompositionRootReflection__cctor_m637AF1225FDD20B85688CDC65DF8B107ED736A9E (void);
// 0x00000042 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.MapCompositionRoot> Niantic.Lightship.Maps.Proto.MapCompositionRoot::get_Parser()
extern void MapCompositionRoot_get_Parser_mAB7F060B59F92DFC8FFD45FFC89717DE0DFE0D47 (void);
// 0x00000043 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapCompositionRoot::get_Descriptor()
extern void MapCompositionRoot_get_Descriptor_mA2C8DF32E7B9EDECDEBEDE29E3C6340F16DEAD59 (void);
// 0x00000044 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapCompositionRoot::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void MapCompositionRoot_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m752B6D26C75F70F1D3B6E3554DECF26D23D6338C (void);
// 0x00000045 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::.ctor()
extern void MapCompositionRoot__ctor_m3C7D2354DD0452604D79B85C229A8C05F58E6F2A (void);
// 0x00000046 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::.ctor(Niantic.Lightship.Maps.Proto.MapCompositionRoot)
extern void MapCompositionRoot__ctor_mCCEF991A7DFC79A70B0B9E0390F69B8C332329F6 (void);
// 0x00000047 Niantic.Lightship.Maps.Proto.MapCompositionRoot Niantic.Lightship.Maps.Proto.MapCompositionRoot::Clone()
extern void MapCompositionRoot_Clone_m29883C946C60F11168D1226A647D3DC2844574A1 (void);
// 0x00000048 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Proto.MapCompositionRoot::get_MapArea()
extern void MapCompositionRoot_get_MapArea_m7CED3B915CA907C66B541C3779A143FE761E413B (void);
// 0x00000049 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.MapProvider> Niantic.Lightship.Maps.Proto.MapCompositionRoot::get_MapProvider()
extern void MapCompositionRoot_get_MapProvider_mE7CCA92BDF2A81471D6ECE736427B8209C2AA66A (void);
// 0x0000004A System.Boolean Niantic.Lightship.Maps.Proto.MapCompositionRoot::Equals(System.Object)
extern void MapCompositionRoot_Equals_mD4009C2EDAF57BD1973C5578ED7E88753F39CB1E (void);
// 0x0000004B System.Boolean Niantic.Lightship.Maps.Proto.MapCompositionRoot::Equals(Niantic.Lightship.Maps.Proto.MapCompositionRoot)
extern void MapCompositionRoot_Equals_m27F931A84914BB9378FCC2821CAEBBB21D9FC1ED (void);
// 0x0000004C System.Int32 Niantic.Lightship.Maps.Proto.MapCompositionRoot::GetHashCode()
extern void MapCompositionRoot_GetHashCode_m80A1D2159127A84AA7D0E7018AD682883986C2E1 (void);
// 0x0000004D System.String Niantic.Lightship.Maps.Proto.MapCompositionRoot::ToString()
extern void MapCompositionRoot_ToString_m061D4627866FE99F6372B2370C95F8D041EEA53C (void);
// 0x0000004E System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::WriteTo(Google.Protobuf.CodedOutputStream)
extern void MapCompositionRoot_WriteTo_m075D3E40707FD552883466C1043C0FAE3664B4C4 (void);
// 0x0000004F System.Int32 Niantic.Lightship.Maps.Proto.MapCompositionRoot::CalculateSize()
extern void MapCompositionRoot_CalculateSize_mD61AA2B30C5E289C65D4CB83685BCA9769B9CA94 (void);
// 0x00000050 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::MergeFrom(Niantic.Lightship.Maps.Proto.MapCompositionRoot)
extern void MapCompositionRoot_MergeFrom_m34B3EA8DD422009A455D253D9860BAA8B90E23A4 (void);
// 0x00000051 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::MergeFrom(Google.Protobuf.CodedInputStream)
extern void MapCompositionRoot_MergeFrom_mE399E79833FA183F2836373EC7FF8109EDA055F0 (void);
// 0x00000052 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot::.cctor()
extern void MapCompositionRoot__cctor_m412A2A554FD31981F2C4FCC37D83FB814CA96869 (void);
// 0x00000053 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot/<>c::.cctor()
extern void U3CU3Ec__cctor_m4FA4A35F9E30590431BDED8C0D10A0AD178E0A5D (void);
// 0x00000054 System.Void Niantic.Lightship.Maps.Proto.MapCompositionRoot/<>c::.ctor()
extern void U3CU3Ec__ctor_mC09BF4A809120CC58633DCE94A1E03F6E75806A9 (void);
// 0x00000055 Niantic.Lightship.Maps.Proto.MapCompositionRoot Niantic.Lightship.Maps.Proto.MapCompositionRoot/<>c::<.cctor>b__29_0()
extern void U3CU3Ec_U3C_cctorU3Eb__29_0_m27C73362FD853AE4E390FB8D2C661135AC9BE97B (void);
// 0x00000056 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Proto.MapArea::get_Parser()
extern void MapArea_get_Parser_mF9B19F6594941D2C087B3FA6D59B637089F0CB94 (void);
// 0x00000057 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapArea::get_Descriptor()
extern void MapArea_get_Descriptor_m2A518F2F7763F3951D8B6EB74E8DF6988C14AEA9 (void);
// 0x00000058 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapArea::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void MapArea_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m41605E3676FAA3CB1F928E747CEC4FADE93096E2 (void);
// 0x00000059 System.Void Niantic.Lightship.Maps.Proto.MapArea::.ctor()
extern void MapArea__ctor_m70993AFE0E597EA9AB93AF6817AD2723D24B0847 (void);
// 0x0000005A System.Void Niantic.Lightship.Maps.Proto.MapArea::.ctor(Niantic.Lightship.Maps.Proto.MapArea)
extern void MapArea__ctor_m84441C295E22E582C79D40714C3C99F6C780580C (void);
// 0x0000005B Niantic.Lightship.Maps.Proto.MapArea Niantic.Lightship.Maps.Proto.MapArea::Clone()
extern void MapArea_Clone_m4538096CA2952FF1805985154BC4E8E0F179CF2F (void);
// 0x0000005C System.String Niantic.Lightship.Maps.Proto.MapArea::get_Description()
extern void MapArea_get_Description_mE5D1BCEE687874FDF5D80648A61DDA81C034C2C7 (void);
// 0x0000005D System.Void Niantic.Lightship.Maps.Proto.MapArea::set_Description(System.String)
extern void MapArea_set_Description_mC87FAE20E7199E510470BE2544B6E9173937CBE8 (void);
// 0x0000005E System.Int32 Niantic.Lightship.Maps.Proto.MapArea::get_Epoch()
extern void MapArea_get_Epoch_m276B0D81AA08087E4B2471B67EE98DE78E803964 (void);
// 0x0000005F System.Void Niantic.Lightship.Maps.Proto.MapArea::set_Epoch(System.Int32)
extern void MapArea_set_Epoch_m3342F11C7ABBDADE7289D672ECBABA7FFE4BB830 (void);
// 0x00000060 System.String Niantic.Lightship.Maps.Proto.MapArea::get_MapProvider()
extern void MapArea_get_MapProvider_m20CBB47559EEC64EE4E32996337F3294983CA366 (void);
// 0x00000061 System.Void Niantic.Lightship.Maps.Proto.MapArea::set_MapProvider(System.String)
extern void MapArea_set_MapProvider_m67905D2DE508AF4372BD3C2457D981567CB247F2 (void);
// 0x00000062 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.BoundingRect> Niantic.Lightship.Maps.Proto.MapArea::get_BoundingRect()
extern void MapArea_get_BoundingRect_m94B2AF3DD9480AB9893E35284713F33B4E0C35B8 (void);
// 0x00000063 Google.Protobuf.Collections.RepeatedField`1<System.String> Niantic.Lightship.Maps.Proto.MapArea::get_BlockedLabelName()
extern void MapArea_get_BlockedLabelName_m2F7A6A9E93CCCA1B98803BBA28A43A51063BE32C (void);
// 0x00000064 System.String Niantic.Lightship.Maps.Proto.MapArea::get_MinimumClientVersion()
extern void MapArea_get_MinimumClientVersion_m16EF6005090A94628DEC66C7CC5D3D0647A72004 (void);
// 0x00000065 System.Void Niantic.Lightship.Maps.Proto.MapArea::set_MinimumClientVersion(System.String)
extern void MapArea_set_MinimumClientVersion_m08DE849A3F8B7C6F0215D98ECC4C84052268607A (void);
// 0x00000066 Google.Protobuf.ByteString Niantic.Lightship.Maps.Proto.MapArea::get_TileEncryptionKey()
extern void MapArea_get_TileEncryptionKey_m2AAB24E66E12628189504F4668FEE5BEBF3B7CA5 (void);
// 0x00000067 System.Void Niantic.Lightship.Maps.Proto.MapArea::set_TileEncryptionKey(Google.Protobuf.ByteString)
extern void MapArea_set_TileEncryptionKey_m84F9EA6CFD2C4C6C8F9C2102C78C7910458745F1 (void);
// 0x00000068 System.Boolean Niantic.Lightship.Maps.Proto.MapArea::Equals(System.Object)
extern void MapArea_Equals_m017D961D51C0DA6367690304207BE74C33ADE59D (void);
// 0x00000069 System.Boolean Niantic.Lightship.Maps.Proto.MapArea::Equals(Niantic.Lightship.Maps.Proto.MapArea)
extern void MapArea_Equals_m0BB18F23B375E30421501178C0CF6082F94FBB83 (void);
// 0x0000006A System.Int32 Niantic.Lightship.Maps.Proto.MapArea::GetHashCode()
extern void MapArea_GetHashCode_mA1246CABEA823055CA5BABE87623FC64A0D4C22F (void);
// 0x0000006B System.String Niantic.Lightship.Maps.Proto.MapArea::ToString()
extern void MapArea_ToString_m52C9AE8EADDFA1586CBC54389BCC42A83BBE3E1D (void);
// 0x0000006C System.Void Niantic.Lightship.Maps.Proto.MapArea::WriteTo(Google.Protobuf.CodedOutputStream)
extern void MapArea_WriteTo_mCD0270778C4E54721BBD1B3DC2EEC5D67A1B1C30 (void);
// 0x0000006D System.Int32 Niantic.Lightship.Maps.Proto.MapArea::CalculateSize()
extern void MapArea_CalculateSize_mE4FC22CA9299644F87E6CD83DFDEBC1AF69659AD (void);
// 0x0000006E System.Void Niantic.Lightship.Maps.Proto.MapArea::MergeFrom(Niantic.Lightship.Maps.Proto.MapArea)
extern void MapArea_MergeFrom_m697B8E39832AE216CB008B6830D67A68BECCCD9E (void);
// 0x0000006F System.Void Niantic.Lightship.Maps.Proto.MapArea::MergeFrom(Google.Protobuf.CodedInputStream)
extern void MapArea_MergeFrom_m4EE313CB28FCBB38ED3C9AF8B81634333006A166 (void);
// 0x00000070 System.Void Niantic.Lightship.Maps.Proto.MapArea::.cctor()
extern void MapArea__cctor_m98E8393F6A87A8092881DFFFD4B178DC98C49E25 (void);
// 0x00000071 System.Void Niantic.Lightship.Maps.Proto.MapArea/<>c::.cctor()
extern void U3CU3Ec__cctor_m0C75F534DA730C2B1649CBE0394B8E6E50C55607 (void);
// 0x00000072 System.Void Niantic.Lightship.Maps.Proto.MapArea/<>c::.ctor()
extern void U3CU3Ec__ctor_m93CBB4375A72DA329C1BB15D55E8A603B2EE58C3 (void);
// 0x00000073 Niantic.Lightship.Maps.Proto.MapArea Niantic.Lightship.Maps.Proto.MapArea/<>c::<.cctor>b__54_0()
extern void U3CU3Ec_U3C_cctorU3Eb__54_0_m0B5B22BF4DE269FEEA7E694EACC304D7B98423C2 (void);
// 0x00000074 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.MapProvider> Niantic.Lightship.Maps.Proto.MapProvider::get_Parser()
extern void MapProvider_get_Parser_mA4DD6F4F03EA3781CC88E752AFA93106091D7FE4 (void);
// 0x00000075 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapProvider::get_Descriptor()
extern void MapProvider_get_Descriptor_mA6A97B7A123E2C6BA069CEC110A23E89226E25A9 (void);
// 0x00000076 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapProvider::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void MapProvider_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m8356CF6809245428973842280AB926E297401525 (void);
// 0x00000077 System.Void Niantic.Lightship.Maps.Proto.MapProvider::.ctor()
extern void MapProvider__ctor_mB274DFF2F59EEE459DB3B3907EC4165EFCAD8676 (void);
// 0x00000078 System.Void Niantic.Lightship.Maps.Proto.MapProvider::.ctor(Niantic.Lightship.Maps.Proto.MapProvider)
extern void MapProvider__ctor_m3516FDD45A58B2F11271E2B2B497E20AF2836108 (void);
// 0x00000079 Niantic.Lightship.Maps.Proto.MapProvider Niantic.Lightship.Maps.Proto.MapProvider::Clone()
extern void MapProvider_Clone_m9D9A66A9C0D0150D051B2D6499BD638D4158F3A1 (void);
// 0x0000007A System.String Niantic.Lightship.Maps.Proto.MapProvider::get_Name()
extern void MapProvider_get_Name_m08E4D511AC60547E3D89A2B647655C17213D0320 (void);
// 0x0000007B System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_Name(System.String)
extern void MapProvider_set_Name_m6505571F59999C4086CDA489F90D67246E33D214 (void);
// 0x0000007C System.String Niantic.Lightship.Maps.Proto.MapProvider::get_BaseUrl()
extern void MapProvider_get_BaseUrl_m273AED262FF68753259665EA7A2CAEBE3C145A39 (void);
// 0x0000007D System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_BaseUrl(System.String)
extern void MapProvider_set_BaseUrl_m98CE18FE7D2EDC2411E8985099472D169BFCCBEC (void);
// 0x0000007E System.String Niantic.Lightship.Maps.Proto.MapProvider::get_QueryFormat()
extern void MapProvider_get_QueryFormat_mF5FB0B5F9243744B60F00562C5F9A02067DBA248 (void);
// 0x0000007F System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_QueryFormat(System.String)
extern void MapProvider_set_QueryFormat_mFB28FFCCA006ADCAF7AF6D8FFEDBE4F980E4CEED (void);
// 0x00000080 Niantic.Lightship.Maps.Proto.MapProvider/Types/MapType Niantic.Lightship.Maps.Proto.MapProvider::get_MapType()
extern void MapProvider_get_MapType_m5A5ECFE1842C7ECA7399DE3A08C9BB4C90CBD8EF (void);
// 0x00000081 System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_MapType(Niantic.Lightship.Maps.Proto.MapProvider/Types/MapType)
extern void MapProvider_set_MapType_m340A9E8EA31E0D230E36392961144A9C0A40D2A0 (void);
// 0x00000082 System.Int32 Niantic.Lightship.Maps.Proto.MapProvider::get_MinTileLevel()
extern void MapProvider_get_MinTileLevel_m274248BBE2A023A98F90A30AA1B2214A588294CE (void);
// 0x00000083 System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_MinTileLevel(System.Int32)
extern void MapProvider_set_MinTileLevel_mEBB776934CB4251948C2B96D2E08EEE4B0CDC8EA (void);
// 0x00000084 System.Int32 Niantic.Lightship.Maps.Proto.MapProvider::get_MaxTileLevel()
extern void MapProvider_get_MaxTileLevel_m264C1838C1A0D016D7E91406EB56883E81E21EBB (void);
// 0x00000085 System.Void Niantic.Lightship.Maps.Proto.MapProvider::set_MaxTileLevel(System.Int32)
extern void MapProvider_set_MaxTileLevel_mD15FCBC3429D36F41AA04D9517A2E8031A4A8289 (void);
// 0x00000086 System.Boolean Niantic.Lightship.Maps.Proto.MapProvider::Equals(System.Object)
extern void MapProvider_Equals_m55A7360977918FBAD5EB2A56A073F98C7C6DE1D9 (void);
// 0x00000087 System.Boolean Niantic.Lightship.Maps.Proto.MapProvider::Equals(Niantic.Lightship.Maps.Proto.MapProvider)
extern void MapProvider_Equals_mAF4867D81AAA05B8E4EDBE3561C3A9CE225D3567 (void);
// 0x00000088 System.Int32 Niantic.Lightship.Maps.Proto.MapProvider::GetHashCode()
extern void MapProvider_GetHashCode_m48551DD0F58340ED79A36BA67B79913F93769F78 (void);
// 0x00000089 System.String Niantic.Lightship.Maps.Proto.MapProvider::ToString()
extern void MapProvider_ToString_m2FD9100B4D3479159B23654AE5A03A1266B00106 (void);
// 0x0000008A System.Void Niantic.Lightship.Maps.Proto.MapProvider::WriteTo(Google.Protobuf.CodedOutputStream)
extern void MapProvider_WriteTo_mDFDF7846EDD27F855669274C9FF45E258F8E71F0 (void);
// 0x0000008B System.Int32 Niantic.Lightship.Maps.Proto.MapProvider::CalculateSize()
extern void MapProvider_CalculateSize_m4ECBEFD9ED648E0AE5A2B613708DE7CE39DB5839 (void);
// 0x0000008C System.Void Niantic.Lightship.Maps.Proto.MapProvider::MergeFrom(Niantic.Lightship.Maps.Proto.MapProvider)
extern void MapProvider_MergeFrom_m1C66C3E0EFF36A990B051A75FBE1B9D713A30FD6 (void);
// 0x0000008D System.Void Niantic.Lightship.Maps.Proto.MapProvider::MergeFrom(Google.Protobuf.CodedInputStream)
extern void MapProvider_MergeFrom_m1535C7C3543F887C6F766723DA3BD0B91052C8C8 (void);
// 0x0000008E System.Void Niantic.Lightship.Maps.Proto.MapProvider::.cctor()
extern void MapProvider__cctor_m4121A79802A1C23FBE9664A7F78D657F621745FB (void);
// 0x0000008F System.Void Niantic.Lightship.Maps.Proto.MapProvider/<>c::.cctor()
extern void U3CU3Ec__cctor_mF7C5059ED52DC802ED0F430D0911D57ED4B6F9E4 (void);
// 0x00000090 System.Void Niantic.Lightship.Maps.Proto.MapProvider/<>c::.ctor()
extern void U3CU3Ec__ctor_m23EBE3878DCB742B82D986A72ADEEC3F8DEC19CC (void);
// 0x00000091 Niantic.Lightship.Maps.Proto.MapProvider Niantic.Lightship.Maps.Proto.MapProvider/<>c::<.cctor>b__50_0()
extern void U3CU3Ec_U3C_cctorU3Eb__50_0_mC26494B6721F7D1C990FBAD84D7B470B8982CE3D (void);
// 0x00000092 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.BoundingRect> Niantic.Lightship.Maps.Proto.BoundingRect::get_Parser()
extern void BoundingRect_get_Parser_m4EA218FA3C5A130021B3BC459398B865D202F7F5 (void);
// 0x00000093 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.BoundingRect::get_Descriptor()
extern void BoundingRect_get_Descriptor_mD196E525EE922963D972DA7D5EC4E50BEF8410C6 (void);
// 0x00000094 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.BoundingRect::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void BoundingRect_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD1F6E1AC8BF28826E29974B0237EEEEB24BB0C31 (void);
// 0x00000095 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::.ctor()
extern void BoundingRect__ctor_mF8969C46D57A9090566F6F7445E5534AF76510EA (void);
// 0x00000096 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::.ctor(Niantic.Lightship.Maps.Proto.BoundingRect)
extern void BoundingRect__ctor_m2F0A139AFFAFC2C4A8F2DB7D241CD6AD76CD6072 (void);
// 0x00000097 Niantic.Lightship.Maps.Proto.BoundingRect Niantic.Lightship.Maps.Proto.BoundingRect::Clone()
extern void BoundingRect_Clone_mFE3B7ECC96438D329C587513CCBAF55318A7FF3D (void);
// 0x00000098 System.Double Niantic.Lightship.Maps.Proto.BoundingRect::get_North()
extern void BoundingRect_get_North_m62F62F64376778B7C5FCBCA2A783E44CC87A1901 (void);
// 0x00000099 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::set_North(System.Double)
extern void BoundingRect_set_North_m6468186CB28AB96639DBE7D74293046A55ABC9E5 (void);
// 0x0000009A System.Double Niantic.Lightship.Maps.Proto.BoundingRect::get_South()
extern void BoundingRect_get_South_mFB9CED915F83872A0C47BDFCC367E163FC44C905 (void);
// 0x0000009B System.Void Niantic.Lightship.Maps.Proto.BoundingRect::set_South(System.Double)
extern void BoundingRect_set_South_m5C410E35887375753026B034BB2D4F7C4B87C419 (void);
// 0x0000009C System.Double Niantic.Lightship.Maps.Proto.BoundingRect::get_East()
extern void BoundingRect_get_East_mBDEDD9C24F3D69C75B15C2CB3C15D20ECED6A476 (void);
// 0x0000009D System.Void Niantic.Lightship.Maps.Proto.BoundingRect::set_East(System.Double)
extern void BoundingRect_set_East_m33EA9F453829530F4F7C6E7298B7D1E31ED0828F (void);
// 0x0000009E System.Double Niantic.Lightship.Maps.Proto.BoundingRect::get_West()
extern void BoundingRect_get_West_m6FC91CFCB194F6061B7C4C3D481EE9937FE33F7D (void);
// 0x0000009F System.Void Niantic.Lightship.Maps.Proto.BoundingRect::set_West(System.Double)
extern void BoundingRect_set_West_mA534389B0B70686576509A8C3B6406919742A27F (void);
// 0x000000A0 System.Boolean Niantic.Lightship.Maps.Proto.BoundingRect::Equals(System.Object)
extern void BoundingRect_Equals_mE77E76DBDE024DDE1E2AE39C716DBC8FBF40C4D0 (void);
// 0x000000A1 System.Boolean Niantic.Lightship.Maps.Proto.BoundingRect::Equals(Niantic.Lightship.Maps.Proto.BoundingRect)
extern void BoundingRect_Equals_m2614A8D40B4E1352C31C3B5D7A73246E9542F3F4 (void);
// 0x000000A2 System.Int32 Niantic.Lightship.Maps.Proto.BoundingRect::GetHashCode()
extern void BoundingRect_GetHashCode_m249C6391DF9C42EEF911B966D17152C343E5938A (void);
// 0x000000A3 System.String Niantic.Lightship.Maps.Proto.BoundingRect::ToString()
extern void BoundingRect_ToString_mD9866B69BBF4071554645A9FE0745DC7A377D546 (void);
// 0x000000A4 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::WriteTo(Google.Protobuf.CodedOutputStream)
extern void BoundingRect_WriteTo_mE3ACEC1D762361131684F5CD92295F5BDADF2E71 (void);
// 0x000000A5 System.Int32 Niantic.Lightship.Maps.Proto.BoundingRect::CalculateSize()
extern void BoundingRect_CalculateSize_m4F8FCCEEE008C226DA8633777204AF7E402CF7CC (void);
// 0x000000A6 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::MergeFrom(Niantic.Lightship.Maps.Proto.BoundingRect)
extern void BoundingRect_MergeFrom_mD2C9E9B84A3F2BD96F62044F37871EB4A62C0B22 (void);
// 0x000000A7 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::MergeFrom(Google.Protobuf.CodedInputStream)
extern void BoundingRect_MergeFrom_m93C0C1934FE7184B00E2ED95CAD8686C9F0CA841 (void);
// 0x000000A8 System.Void Niantic.Lightship.Maps.Proto.BoundingRect::.cctor()
extern void BoundingRect__cctor_m8FF00BA64D3C0D3E6B833B73AA220DF32F4E79FE (void);
// 0x000000A9 System.Void Niantic.Lightship.Maps.Proto.BoundingRect/<>c::.cctor()
extern void U3CU3Ec__cctor_m3EF99BB9F30D920C8F0622450C2107E3226FA7F9 (void);
// 0x000000AA System.Void Niantic.Lightship.Maps.Proto.BoundingRect/<>c::.ctor()
extern void U3CU3Ec__ctor_m897E9987CF997E6E43C328CAC0D65D92AAF0ABA6 (void);
// 0x000000AB Niantic.Lightship.Maps.Proto.BoundingRect Niantic.Lightship.Maps.Proto.BoundingRect/<>c::<.cctor>b__39_0()
extern void U3CU3Ec_U3C_cctorU3Eb__39_0_m1C4C94D0716AAE35E1220875CAB842DD38AB490A (void);
// 0x000000AC Google.Protobuf.Reflection.FileDescriptor Niantic.Lightship.Maps.Proto.MaptilesApiReflection::get_Descriptor()
extern void MaptilesApiReflection_get_Descriptor_m61DA7BDFF76AD460A26333FC9EBE7198E7F7C644 (void);
// 0x000000AD System.Void Niantic.Lightship.Maps.Proto.MaptilesApiReflection::.cctor()
extern void MaptilesApiReflection__cctor_mD5C2B0834817EF6B841019546AF664FB41854886 (void);
// 0x000000AE Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest> Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::get_Parser()
extern void GetMaptilesSettingsRequest_get_Parser_m35B2878D23296C44417F691984A7CC62BE004E40 (void);
// 0x000000AF Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::get_Descriptor()
extern void GetMaptilesSettingsRequest_get_Descriptor_m3C18124C3E08203627E6DE2D0BF7A0795AE64529 (void);
// 0x000000B0 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void GetMaptilesSettingsRequest_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m59F8EF1B442FCE845223D87DB4023C857C872212 (void);
// 0x000000B1 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::.ctor()
extern void GetMaptilesSettingsRequest__ctor_m514FA97E49D37F2856092E437B0060717B02C724 (void);
// 0x000000B2 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::.ctor(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest)
extern void GetMaptilesSettingsRequest__ctor_m95D21046CBA449EEE6439E7B95CA9ABD33B1D4D6 (void);
// 0x000000B3 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::Clone()
extern void GetMaptilesSettingsRequest_Clone_m2434833101DBFE452300E4659A0A2E4F51B287CE (void);
// 0x000000B4 System.String Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::get_UnitySdkVersion()
extern void GetMaptilesSettingsRequest_get_UnitySdkVersion_mE319F2CFAB10FA5F1F7DCCEE7B994FD797362099 (void);
// 0x000000B5 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::set_UnitySdkVersion(System.String)
extern void GetMaptilesSettingsRequest_set_UnitySdkVersion_mCC949823226C7158CF86527C5BFB99E6FA36D1B7 (void);
// 0x000000B6 System.String Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::get_EighthWallModuleVersion()
extern void GetMaptilesSettingsRequest_get_EighthWallModuleVersion_m2C679E4FCFA7716A28EE9A2F07856DD648C212A1 (void);
// 0x000000B7 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::set_EighthWallModuleVersion(System.String)
extern void GetMaptilesSettingsRequest_set_EighthWallModuleVersion_m9FA4F1BDE997C3F736553742AAF2F33C50D90142 (void);
// 0x000000B8 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest/ClientVersionOneofCase Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::get_ClientVersionCase()
extern void GetMaptilesSettingsRequest_get_ClientVersionCase_m6EAD6DD76D53E4CD9003928F9C7B75D995165BB9 (void);
// 0x000000B9 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::ClearClientVersion()
extern void GetMaptilesSettingsRequest_ClearClientVersion_m730BA00C819457BFDB5D03781298F50ED345E3FD (void);
// 0x000000BA System.Boolean Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::Equals(System.Object)
extern void GetMaptilesSettingsRequest_Equals_m298A904AB47A9CCBABDD0CA8FF95E4EC05343571 (void);
// 0x000000BB System.Boolean Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::Equals(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest)
extern void GetMaptilesSettingsRequest_Equals_m94F079E629ADC4761AB94363A9C6277A5DEB6868 (void);
// 0x000000BC System.Int32 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::GetHashCode()
extern void GetMaptilesSettingsRequest_GetHashCode_m89361BFA3DB657E0F41E07AE798AEB6BAF480FA6 (void);
// 0x000000BD System.String Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::ToString()
extern void GetMaptilesSettingsRequest_ToString_m73F3014E86C220BACA3F3633EC8665D32D3C3BDF (void);
// 0x000000BE System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::WriteTo(Google.Protobuf.CodedOutputStream)
extern void GetMaptilesSettingsRequest_WriteTo_mFEC02844E0D7D3B5B29F60C877CE4C9AFEA97822 (void);
// 0x000000BF System.Int32 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::CalculateSize()
extern void GetMaptilesSettingsRequest_CalculateSize_mD73ABFAFF5D040C9256BD3A355DD2C09BC637E11 (void);
// 0x000000C0 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::MergeFrom(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest)
extern void GetMaptilesSettingsRequest_MergeFrom_mE26AC3EEA7916FBC016F8FE2B27172B3E4D854B7 (void);
// 0x000000C1 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::MergeFrom(Google.Protobuf.CodedInputStream)
extern void GetMaptilesSettingsRequest_MergeFrom_m1EAB83B344FC5482C61DC5F9D1E4FC469A8B6F60 (void);
// 0x000000C2 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest::.cctor()
extern void GetMaptilesSettingsRequest__cctor_m3242133F42ABA08092AEBAD3769E87BF6B5A3E0C (void);
// 0x000000C3 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest/<>c::.cctor()
extern void U3CU3Ec__cctor_m4C2CCB1FC536E2C60E893155143543AC470808B6 (void);
// 0x000000C4 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest/<>c::.ctor()
extern void U3CU3Ec__ctor_mDC585BDC81B88356B8DB101CE2DE49FE72842029 (void);
// 0x000000C5 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest Niantic.Lightship.Maps.Proto.GetMaptilesSettingsRequest/<>c::<.cctor>b__33_0()
extern void U3CU3Ec_U3C_cctorU3Eb__33_0_m45F34D554281EE3D352E67BD6D62676B2C75039A (void);
// 0x000000C6 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse> Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::get_Parser()
extern void GetMaptilesSettingsResponse_get_Parser_mFFC4EDA1E401A467CDB54DB645BF488AE69CE59D (void);
// 0x000000C7 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::get_Descriptor()
extern void GetMaptilesSettingsResponse_get_Descriptor_m819AC032CD19D8F989229FFD9521BB4BE4FD89D3 (void);
// 0x000000C8 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void GetMaptilesSettingsResponse_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13A2199C3C52D5B21ACACB563069873E0796C999 (void);
// 0x000000C9 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::.ctor()
extern void GetMaptilesSettingsResponse__ctor_m1A5EF17F746C8A16915D8CBA08F4726B49DEBC3B (void);
// 0x000000CA System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::.ctor(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse)
extern void GetMaptilesSettingsResponse__ctor_mCAEB4B64718405BA4717E89ECD6D88AC6964DACD (void);
// 0x000000CB Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::Clone()
extern void GetMaptilesSettingsResponse_Clone_m9EE46EFBB4ED1432EC77F09F710A9768E0A17A96 (void);
// 0x000000CC Niantic.Lightship.Maps.Proto.MapCompositionRoot Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::get_MapCompositionRoot()
extern void GetMaptilesSettingsResponse_get_MapCompositionRoot_mCA902A0E3A0ECB0B007BA1A016C7CB8E7AB3DA9A (void);
// 0x000000CD System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::set_MapCompositionRoot(Niantic.Lightship.Maps.Proto.MapCompositionRoot)
extern void GetMaptilesSettingsResponse_set_MapCompositionRoot_m01308CFC56D0241254A867E8E9646F302FB3CB1E (void);
// 0x000000CE Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse/Types/Status Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::get_Status()
extern void GetMaptilesSettingsResponse_get_Status_mE9E919C1A62709C4665F0B68EB453BB5B5D99309 (void);
// 0x000000CF System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::set_Status(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse/Types/Status)
extern void GetMaptilesSettingsResponse_set_Status_m812EBEB2E25D230874E4618D51E9ABAB2E1017E1 (void);
// 0x000000D0 System.String Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::get_ErrorMessage()
extern void GetMaptilesSettingsResponse_get_ErrorMessage_mD75E05309D5A849F7A98FB032FD65EAB04777D57 (void);
// 0x000000D1 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::set_ErrorMessage(System.String)
extern void GetMaptilesSettingsResponse_set_ErrorMessage_m2B18DD907D09EE142A106016D8E66139ED9A6897 (void);
// 0x000000D2 System.Boolean Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::Equals(System.Object)
extern void GetMaptilesSettingsResponse_Equals_mB2517B72FD50D79AD42900786131515D919A1C3F (void);
// 0x000000D3 System.Boolean Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::Equals(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse)
extern void GetMaptilesSettingsResponse_Equals_m8FBB44B655F8ABE280763B9ED560FDB8B9C9E20F (void);
// 0x000000D4 System.Int32 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::GetHashCode()
extern void GetMaptilesSettingsResponse_GetHashCode_mF729C385BE06C75DBD41903A5736BBE57660C632 (void);
// 0x000000D5 System.String Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::ToString()
extern void GetMaptilesSettingsResponse_ToString_m5F6905CD87F6BB38199389BE61EA2F6BE1179417 (void);
// 0x000000D6 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::WriteTo(Google.Protobuf.CodedOutputStream)
extern void GetMaptilesSettingsResponse_WriteTo_m63C91820164391022CDDE4FB32F92533DACF626E (void);
// 0x000000D7 System.Int32 Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::CalculateSize()
extern void GetMaptilesSettingsResponse_CalculateSize_m92006E58CAB31C66C1A86B3600C63FC3721FFB35 (void);
// 0x000000D8 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::MergeFrom(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse)
extern void GetMaptilesSettingsResponse_MergeFrom_m968FFCF2E4C6904F3BD85C6D4CA42B7A70EE6553 (void);
// 0x000000D9 System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::MergeFrom(Google.Protobuf.CodedInputStream)
extern void GetMaptilesSettingsResponse_MergeFrom_m16CFBFA469A319A8BC09BB4143800086DB751A8B (void);
// 0x000000DA System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse::.cctor()
extern void GetMaptilesSettingsResponse__cctor_mC86E5968B9CEB91304D0D1D3A0F67B4242A5A760 (void);
// 0x000000DB System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse/<>c::.cctor()
extern void U3CU3Ec__cctor_m7B2A4313037328C8E85984B55008B231C3B6B0A3 (void);
// 0x000000DC System.Void Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse/<>c::.ctor()
extern void U3CU3Ec__ctor_m07D98C06F7F2309DA8CAC6DFE961870B3BA6229B (void);
// 0x000000DD Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse/<>c::<.cctor>b__35_0()
extern void U3CU3Ec_U3C_cctorU3Eb__35_0_m501B7DFBB89EE4B98D8C87B52F50E576369E0626 (void);
// 0x000000DE Google.Protobuf.Reflection.FileDescriptor Niantic.Lightship.Maps.Proto.TileReflection::get_Descriptor()
extern void TileReflection_get_Descriptor_m9D0406722E3C7F8717BD95E303BC73C900C24ED7 (void);
// 0x000000DF System.Void Niantic.Lightship.Maps.Proto.TileReflection::.cctor()
extern void TileReflection__cctor_m633217205ED7B8CB44C6D48BB78F234D4A2B88BF (void);
// 0x000000E0 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.TiledBlob> Niantic.Lightship.Maps.Proto.TiledBlob::get_Parser()
extern void TiledBlob_get_Parser_mECBC07D03E905B9257C99115F51D0EE2C7B9DCED (void);
// 0x000000E1 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TiledBlob::get_Descriptor()
extern void TiledBlob_get_Descriptor_m2D092C3D24F43DE4630A20A958DB13C3C8F7FDF3 (void);
// 0x000000E2 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TiledBlob::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void TiledBlob_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m56760DDB0F4C18EA8C12176CA5728A64CB1A3283 (void);
// 0x000000E3 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::.ctor()
extern void TiledBlob__ctor_mB678DE16C59B644B378FD102756DCADECE63504C (void);
// 0x000000E4 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::.ctor(Niantic.Lightship.Maps.Proto.TiledBlob)
extern void TiledBlob__ctor_mD731DA4723A1A166DCD5F414FBD9572E5C5D83D3 (void);
// 0x000000E5 Niantic.Lightship.Maps.Proto.TiledBlob Niantic.Lightship.Maps.Proto.TiledBlob::Clone()
extern void TiledBlob_Clone_m75CF52DC6F6F0B70095FE85C8A0EFC4170538E9E (void);
// 0x000000E6 System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::get_FormatVersion()
extern void TiledBlob_get_FormatVersion_m68A3ED2D06BA5DF753AF155C1C70F7C869B56AD9 (void);
// 0x000000E7 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_FormatVersion(System.Int32)
extern void TiledBlob_set_FormatVersion_m58EB8437B770B2323B97478993CF5D841159D35E (void);
// 0x000000E8 System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::get_Zoom()
extern void TiledBlob_get_Zoom_m9BB8C0E6F5C34831908D4A7CFC1AAA0B9B0827CF (void);
// 0x000000E9 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_Zoom(System.Int32)
extern void TiledBlob_set_Zoom_m93AD15F3C353A6CCC5A3F07094005CAD7E604EA8 (void);
// 0x000000EA System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::get_X()
extern void TiledBlob_get_X_m6B39B10A41F27D2B7FDFCC4B66299C0787BC329D (void);
// 0x000000EB System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_X(System.Int32)
extern void TiledBlob_set_X_m3F37732DED74F202D99C7A8B2A4F873848E97E1E (void);
// 0x000000EC System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::get_Y()
extern void TiledBlob_get_Y_m0B7CBCB69C84E18B890FF3DBC97663B5D2DD00C5 (void);
// 0x000000ED System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_Y(System.Int32)
extern void TiledBlob_set_Y_mD75A9554D957A6D53F7BD4555B411DD4B24D2579 (void);
// 0x000000EE System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::get_Epoch()
extern void TiledBlob_get_Epoch_m9C0564891BA74E709C396D5189AFB257070E6C5C (void);
// 0x000000EF System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_Epoch(System.Int32)
extern void TiledBlob_set_Epoch_m82B7A5CBB32A30541A4F2F0571B70535056F0433 (void);
// 0x000000F0 Google.Protobuf.ByteString Niantic.Lightship.Maps.Proto.TiledBlob::get_EncodedData()
extern void TiledBlob_get_EncodedData_m9A3DC9268CC9493853F3F6F7FDCEA9A962CCC18A (void);
// 0x000000F1 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::set_EncodedData(Google.Protobuf.ByteString)
extern void TiledBlob_set_EncodedData_m6A461B79F797461A7C105043F88779BC268B01BA (void);
// 0x000000F2 System.Boolean Niantic.Lightship.Maps.Proto.TiledBlob::Equals(System.Object)
extern void TiledBlob_Equals_m5836B5D0CB1DF5C4D1A3B5DB90DDF2B4A7CE5012 (void);
// 0x000000F3 System.Boolean Niantic.Lightship.Maps.Proto.TiledBlob::Equals(Niantic.Lightship.Maps.Proto.TiledBlob)
extern void TiledBlob_Equals_m5CF39860051FF20000624F522115CA24403D3AE5 (void);
// 0x000000F4 System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::GetHashCode()
extern void TiledBlob_GetHashCode_m1B1B9FD9F658F08E3D0BA503DA0B6A262087BF77 (void);
// 0x000000F5 System.String Niantic.Lightship.Maps.Proto.TiledBlob::ToString()
extern void TiledBlob_ToString_m3E6BA37C040ABF7A8F5CD9961E7BE098F917BCD4 (void);
// 0x000000F6 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::WriteTo(Google.Protobuf.CodedOutputStream)
extern void TiledBlob_WriteTo_m93DF67C05E371F2479FE4A4F384F0310A04FA04D (void);
// 0x000000F7 System.Int32 Niantic.Lightship.Maps.Proto.TiledBlob::CalculateSize()
extern void TiledBlob_CalculateSize_m077F56DB2C02E218979CC89B8039B3248B99D622 (void);
// 0x000000F8 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::MergeFrom(Niantic.Lightship.Maps.Proto.TiledBlob)
extern void TiledBlob_MergeFrom_m7977F145E9D5F0518A7702E2C34E2B2566442DC1 (void);
// 0x000000F9 System.Void Niantic.Lightship.Maps.Proto.TiledBlob::MergeFrom(Google.Protobuf.CodedInputStream)
extern void TiledBlob_MergeFrom_m7C9C20D320F27CEA600CF7D43B44CC4B648DFA3A (void);
// 0x000000FA System.Void Niantic.Lightship.Maps.Proto.TiledBlob::.cctor()
extern void TiledBlob__cctor_m2350060D888E6D667FFD0D9C6E2CEFBD5FD6D07B (void);
// 0x000000FB System.Void Niantic.Lightship.Maps.Proto.TiledBlob/<>c::.cctor()
extern void U3CU3Ec__cctor_m755CA81C0D04640272CA179EDB6DE7267262F33A (void);
// 0x000000FC System.Void Niantic.Lightship.Maps.Proto.TiledBlob/<>c::.ctor()
extern void U3CU3Ec__ctor_mE9E4F64A7E43AC7F455340AA956C2C59283767B2 (void);
// 0x000000FD Niantic.Lightship.Maps.Proto.TiledBlob Niantic.Lightship.Maps.Proto.TiledBlob/<>c::<.cctor>b__49_0()
extern void U3CU3Ec_U3C_cctorU3Eb__49_0_m542C32C1D07D71C615F017D27651D302B125BD99 (void);
// 0x000000FE Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.MapTileBundle> Niantic.Lightship.Maps.Proto.MapTileBundle::get_Parser()
extern void MapTileBundle_get_Parser_mF597BB4DD0893A67814306DC1A6CE806960BD80C (void);
// 0x000000FF Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapTileBundle::get_Descriptor()
extern void MapTileBundle_get_Descriptor_m56FEB370F8F1F8B7D33FC96E0F8FA11A21F7BAA8 (void);
// 0x00000100 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapTileBundle::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void MapTileBundle_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m971B2D5C2BAEA31FE07015A4A30D467165E9804A (void);
// 0x00000101 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::.ctor()
extern void MapTileBundle__ctor_m8942AFF4A561D0E76F5ED64210C887335ACB469E (void);
// 0x00000102 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::.ctor(Niantic.Lightship.Maps.Proto.MapTileBundle)
extern void MapTileBundle__ctor_m37550AA95FA2ABE585B7A6A149FE44AEACAD2E76 (void);
// 0x00000103 Niantic.Lightship.Maps.Proto.MapTileBundle Niantic.Lightship.Maps.Proto.MapTileBundle::Clone()
extern void MapTileBundle_Clone_mA09D075705206AB96706B10848BAE6953AF06A44 (void);
// 0x00000104 System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_FormatVersion()
extern void MapTileBundle_get_FormatVersion_mF6D734644485413F3165774977443969E7CDE827 (void);
// 0x00000105 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_FormatVersion(System.Int32)
extern void MapTileBundle_set_FormatVersion_m94E9720469E96106B5E5DCBE321B155818AAA2D5 (void);
// 0x00000106 System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_TileZoom()
extern void MapTileBundle_get_TileZoom_mBC732B1E36807C66C72872C1BACCF1808578E80B (void);
// 0x00000107 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_TileZoom(System.Int32)
extern void MapTileBundle_set_TileZoom_mA1F10F59B723BBE47B367E4478A5162909C835D4 (void);
// 0x00000108 System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_BundleZoom()
extern void MapTileBundle_get_BundleZoom_m91E993BB877C9D647582776B0525DB19F1777057 (void);
// 0x00000109 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_BundleZoom(System.Int32)
extern void MapTileBundle_set_BundleZoom_mCC094DB92E8767E1A85AAEA5704244213ECFDBF7 (void);
// 0x0000010A System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_BundleX()
extern void MapTileBundle_get_BundleX_m68BB41EE16754C07D816DAFA33B2FEC5E2D30539 (void);
// 0x0000010B System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_BundleX(System.Int32)
extern void MapTileBundle_set_BundleX_m9EFDC203AF9F94CC2F5A17396A084F5EA8DEC845 (void);
// 0x0000010C System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_BundleY()
extern void MapTileBundle_get_BundleY_m4F228FC0ED038C992E283820193B383F29970AF7 (void);
// 0x0000010D System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_BundleY(System.Int32)
extern void MapTileBundle_set_BundleY_m380776CD9C4874CF4AE5786C1CE75AE5EEC42249 (void);
// 0x0000010E System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::get_Epoch()
extern void MapTileBundle_get_Epoch_m558377E64CE77BB4A6D5CC9723A89016294218BA (void);
// 0x0000010F System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::set_Epoch(System.Int32)
extern void MapTileBundle_set_Epoch_m83744FED20C1E8C82259C050E56E17CC3416EADD (void);
// 0x00000110 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.MapTile> Niantic.Lightship.Maps.Proto.MapTileBundle::get_Tiles()
extern void MapTileBundle_get_Tiles_m633B5C7EA11842EFCA5F360379106BB3B9603DC5 (void);
// 0x00000111 System.Boolean Niantic.Lightship.Maps.Proto.MapTileBundle::Equals(System.Object)
extern void MapTileBundle_Equals_m2DD6DFD9AFDCC4FC56F0E5045D3E693D3183E2EA (void);
// 0x00000112 System.Boolean Niantic.Lightship.Maps.Proto.MapTileBundle::Equals(Niantic.Lightship.Maps.Proto.MapTileBundle)
extern void MapTileBundle_Equals_m39A39E84D8BB50577085FDE86B6B5647D21C6237 (void);
// 0x00000113 System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::GetHashCode()
extern void MapTileBundle_GetHashCode_mC9222E3DA620CC474EC9F3A5131441755FADA7C3 (void);
// 0x00000114 System.String Niantic.Lightship.Maps.Proto.MapTileBundle::ToString()
extern void MapTileBundle_ToString_m12EF2A652A84EB088D615C807E3A2E4AC3657851 (void);
// 0x00000115 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::WriteTo(Google.Protobuf.CodedOutputStream)
extern void MapTileBundle_WriteTo_mD969D97F38EE819762903D9C709B81B5AADE47FA (void);
// 0x00000116 System.Int32 Niantic.Lightship.Maps.Proto.MapTileBundle::CalculateSize()
extern void MapTileBundle_CalculateSize_mB13575A4A9C28A1D5886C54739276713BA43644A (void);
// 0x00000117 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::MergeFrom(Niantic.Lightship.Maps.Proto.MapTileBundle)
extern void MapTileBundle_MergeFrom_m07B6B0922A2C7B29E24FC6B3777862B49CA88C81 (void);
// 0x00000118 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::MergeFrom(Google.Protobuf.CodedInputStream)
extern void MapTileBundle_MergeFrom_mD61EDCE17A1FEDC51C2F43C471042F11A0391F37 (void);
// 0x00000119 System.Void Niantic.Lightship.Maps.Proto.MapTileBundle::.cctor()
extern void MapTileBundle__cctor_m866D4ACF0D5B0A42B8D4D4718EEEB8C2DA865F7F (void);
// 0x0000011A System.Void Niantic.Lightship.Maps.Proto.MapTileBundle/<>c::.cctor()
extern void U3CU3Ec__cctor_m34ED4AEDFB737A67D1291828D0F553DC0D9C321D (void);
// 0x0000011B System.Void Niantic.Lightship.Maps.Proto.MapTileBundle/<>c::.ctor()
extern void U3CU3Ec__ctor_m8EFE9E9805F66F9408200CF73DFBEB9065FBA795 (void);
// 0x0000011C Niantic.Lightship.Maps.Proto.MapTileBundle Niantic.Lightship.Maps.Proto.MapTileBundle/<>c::<.cctor>b__54_0()
extern void U3CU3Ec_U3C_cctorU3Eb__54_0_mEF83190F419E0A868814FA362057C06D256F3874 (void);
// 0x0000011D Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.MapTile> Niantic.Lightship.Maps.Proto.MapTile::get_Parser()
extern void MapTile_get_Parser_m738A5B7BE85804F9FD53BA69C2EB6E69E4656278 (void);
// 0x0000011E Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapTile::get_Descriptor()
extern void MapTile_get_Descriptor_mF2763831F50971E4793356B0FFFB1E871EBA425E (void);
// 0x0000011F Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.MapTile::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void MapTile_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m7FAA9D2944E8F9D76060FA9AB5C125682015A482 (void);
// 0x00000120 System.Void Niantic.Lightship.Maps.Proto.MapTile::.ctor()
extern void MapTile__ctor_mFA441532F495028D5D82CF693E61E4E836F2D09B (void);
// 0x00000121 System.Void Niantic.Lightship.Maps.Proto.MapTile::.ctor(Niantic.Lightship.Maps.Proto.MapTile)
extern void MapTile__ctor_mB58103B8CEA7F439A5C1D98D07E38866415A0E92 (void);
// 0x00000122 Niantic.Lightship.Maps.Proto.MapTile Niantic.Lightship.Maps.Proto.MapTile::Clone()
extern void MapTile_Clone_mB6C56EE82247FAB9F3886E2E93E52C3AE918E56C (void);
// 0x00000123 System.Int32 Niantic.Lightship.Maps.Proto.MapTile::get_Zoom()
extern void MapTile_get_Zoom_m1A8CEB2F87C1142C919309775D68E7B1B944D0C9 (void);
// 0x00000124 System.Void Niantic.Lightship.Maps.Proto.MapTile::set_Zoom(System.Int32)
extern void MapTile_set_Zoom_m46B6A710F944D003F464896C383B31A15C6F35C5 (void);
// 0x00000125 System.Int32 Niantic.Lightship.Maps.Proto.MapTile::get_X()
extern void MapTile_get_X_m0B75ABAF239DC583D7B5A2605EC42842B166EE15 (void);
// 0x00000126 System.Void Niantic.Lightship.Maps.Proto.MapTile::set_X(System.Int32)
extern void MapTile_set_X_m8BD686CF390CDA71C92DFA17917DD234797C98BE (void);
// 0x00000127 System.Int32 Niantic.Lightship.Maps.Proto.MapTile::get_Y()
extern void MapTile_get_Y_m5667320E930FFFE70DC01AF94D8FE2CD089E2ECA (void);
// 0x00000128 System.Void Niantic.Lightship.Maps.Proto.MapTile::set_Y(System.Int32)
extern void MapTile_set_Y_mFAC7AA6EFAD42ACA8C5A4705DA6E4148062C4B47 (void);
// 0x00000129 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.Layer> Niantic.Lightship.Maps.Proto.MapTile::get_Layers()
extern void MapTile_get_Layers_m4B3BC0D5F5BA785F6AB1AD849FC954CA1CD02A62 (void);
// 0x0000012A System.Boolean Niantic.Lightship.Maps.Proto.MapTile::Equals(System.Object)
extern void MapTile_Equals_m274C0F5E24C494510E1DEE4022CBA556E689D483 (void);
// 0x0000012B System.Boolean Niantic.Lightship.Maps.Proto.MapTile::Equals(Niantic.Lightship.Maps.Proto.MapTile)
extern void MapTile_Equals_mEFC2DA64137D9BD72E549020D7E0DBF0B689572A (void);
// 0x0000012C System.Int32 Niantic.Lightship.Maps.Proto.MapTile::GetHashCode()
extern void MapTile_GetHashCode_m54642E757D4DEB0AFB320FC6C3344BB0595884B3 (void);
// 0x0000012D System.String Niantic.Lightship.Maps.Proto.MapTile::ToString()
extern void MapTile_ToString_m195F2D07C4E13711622F1303EE1BA8235460FCB1 (void);
// 0x0000012E System.Void Niantic.Lightship.Maps.Proto.MapTile::WriteTo(Google.Protobuf.CodedOutputStream)
extern void MapTile_WriteTo_m87750F262D4F70A37AECB5BD5FF5D30DCBFC5304 (void);
// 0x0000012F System.Int32 Niantic.Lightship.Maps.Proto.MapTile::CalculateSize()
extern void MapTile_CalculateSize_m0879DA0A5302569AA42690266CB08425DC397F75 (void);
// 0x00000130 System.Void Niantic.Lightship.Maps.Proto.MapTile::MergeFrom(Niantic.Lightship.Maps.Proto.MapTile)
extern void MapTile_MergeFrom_mF24138428427F794F1D1B99CC3EEB59B6BD11F0E (void);
// 0x00000131 System.Void Niantic.Lightship.Maps.Proto.MapTile::MergeFrom(Google.Protobuf.CodedInputStream)
extern void MapTile_MergeFrom_m12972818C79B90AD9EF8526806C27B99D0A1CCE2 (void);
// 0x00000132 System.Void Niantic.Lightship.Maps.Proto.MapTile::.cctor()
extern void MapTile__cctor_m37C19FC6AB38AC0747FE1ABB3FC0C629C0E5481B (void);
// 0x00000133 System.Void Niantic.Lightship.Maps.Proto.MapTile/<>c::.cctor()
extern void U3CU3Ec__cctor_m8FADDF9E646589CA0E88E4CBB4B3B8D56CAF1008 (void);
// 0x00000134 System.Void Niantic.Lightship.Maps.Proto.MapTile/<>c::.ctor()
extern void U3CU3Ec__ctor_m196FE7A0F6F3B0DA52468600AF74F9AC7A08D46D (void);
// 0x00000135 Niantic.Lightship.Maps.Proto.MapTile Niantic.Lightship.Maps.Proto.MapTile/<>c::<.cctor>b__39_0()
extern void U3CU3Ec_U3C_cctorU3Eb__39_0_mDF996F54DCACA2CBB48142335A56DE29C8304D5A (void);
// 0x00000136 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.Layer> Niantic.Lightship.Maps.Proto.Layer::get_Parser()
extern void Layer_get_Parser_m8C493D3AD3501CF86C5DD979AE6DE286A39D089D (void);
// 0x00000137 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Layer::get_Descriptor()
extern void Layer_get_Descriptor_m6428C8B763F7CAB7300E8561055F2A5857CEAAE2 (void);
// 0x00000138 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Layer::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void Layer_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13BDBD210E0866B1AD8CD5A98F08622BD78B681F (void);
// 0x00000139 System.Void Niantic.Lightship.Maps.Proto.Layer::.ctor()
extern void Layer__ctor_m7772CA478451D9446BAF483AF140A30CF1105C32 (void);
// 0x0000013A System.Void Niantic.Lightship.Maps.Proto.Layer::.ctor(Niantic.Lightship.Maps.Proto.Layer)
extern void Layer__ctor_mB42B3DEB5653620620F05E2579CA45D4EA0368CD (void);
// 0x0000013B Niantic.Lightship.Maps.Proto.Layer Niantic.Lightship.Maps.Proto.Layer::Clone()
extern void Layer_Clone_m1F523D9BE4ADBD34D3EE8B6847B43CE30791C034 (void);
// 0x0000013C Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Proto.Layer::get_LayerKind()
extern void Layer_get_LayerKind_m9832B3BD12050DC7880E1240F7A833DEBCBA9FA8 (void);
// 0x0000013D System.Void Niantic.Lightship.Maps.Proto.Layer::set_LayerKind(Niantic.Lightship.Maps.Proto.LayerKind)
extern void Layer_set_LayerKind_mE4A063A3228CB111CBB68A98C001859A5A343622 (void);
// 0x0000013E Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.Feature> Niantic.Lightship.Maps.Proto.Layer::get_Features()
extern void Layer_get_Features_m8868EB9BAFB8EFAFABB4E84E06B0F6D7BB4E043A (void);
// 0x0000013F System.Boolean Niantic.Lightship.Maps.Proto.Layer::Equals(System.Object)
extern void Layer_Equals_m674172B0A00C797CEB7C5FCCC3734D94CC99A378 (void);
// 0x00000140 System.Boolean Niantic.Lightship.Maps.Proto.Layer::Equals(Niantic.Lightship.Maps.Proto.Layer)
extern void Layer_Equals_m984252FD923C64A355DAEDEEDFDE065B41276B29 (void);
// 0x00000141 System.Int32 Niantic.Lightship.Maps.Proto.Layer::GetHashCode()
extern void Layer_GetHashCode_m303E62115184F8406F036FF5AF77CC926C34BC46 (void);
// 0x00000142 System.String Niantic.Lightship.Maps.Proto.Layer::ToString()
extern void Layer_ToString_mB683F17757A7C1D782A9064AE9C14AAFCEE083FC (void);
// 0x00000143 System.Void Niantic.Lightship.Maps.Proto.Layer::WriteTo(Google.Protobuf.CodedOutputStream)
extern void Layer_WriteTo_mC3081AFE0C85F5C1F3F72450442AF3A7AB8ECAA6 (void);
// 0x00000144 System.Int32 Niantic.Lightship.Maps.Proto.Layer::CalculateSize()
extern void Layer_CalculateSize_m1677070B132E38F4AEE93603F6A2685FF3309354 (void);
// 0x00000145 System.Void Niantic.Lightship.Maps.Proto.Layer::MergeFrom(Niantic.Lightship.Maps.Proto.Layer)
extern void Layer_MergeFrom_m9E02ED29BB03316603C64040EDFB5D06CA62A42A (void);
// 0x00000146 System.Void Niantic.Lightship.Maps.Proto.Layer::MergeFrom(Google.Protobuf.CodedInputStream)
extern void Layer_MergeFrom_mA27EF043AB373867AC9D31B88AA2C9F55E5DDAB8 (void);
// 0x00000147 System.Void Niantic.Lightship.Maps.Proto.Layer::.cctor()
extern void Layer__cctor_m37C264B9E999964F9061EA4862EFF2BC0C20F49A (void);
// 0x00000148 System.Void Niantic.Lightship.Maps.Proto.Layer/<>c::.cctor()
extern void U3CU3Ec__cctor_m6B5AFA9C8AF8188956948E7A276AE5A4780F2038 (void);
// 0x00000149 System.Void Niantic.Lightship.Maps.Proto.Layer/<>c::.ctor()
extern void U3CU3Ec__ctor_m038C5BC6B569860ADC33FC744954CBB0A2F96FCE (void);
// 0x0000014A Niantic.Lightship.Maps.Proto.Layer Niantic.Lightship.Maps.Proto.Layer/<>c::<.cctor>b__29_0()
extern void U3CU3Ec_U3C_cctorU3Eb__29_0_m062F544E55AFEF892A215E209ECCE029BD504758 (void);
// 0x0000014B Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.Feature> Niantic.Lightship.Maps.Proto.Feature::get_Parser()
extern void Feature_get_Parser_m1C75232AE8DD9C8420194E08232592F9804EA67C (void);
// 0x0000014C Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Feature::get_Descriptor()
extern void Feature_get_Descriptor_m089BBE488FFAE60DDC14D3F729331FCB0225B77C (void);
// 0x0000014D Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Feature::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void Feature_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m1E8671381948603AB20ED836C84CA271241598E9 (void);
// 0x0000014E System.Void Niantic.Lightship.Maps.Proto.Feature::.ctor()
extern void Feature__ctor_m906196F75B8BA659EF754BAF366FB53513C1D6A7 (void);
// 0x0000014F System.Void Niantic.Lightship.Maps.Proto.Feature::.ctor(Niantic.Lightship.Maps.Proto.Feature)
extern void Feature__ctor_mF8D2F628E0BD24F1A21CE9F4C390E60C1D5923CF (void);
// 0x00000150 Niantic.Lightship.Maps.Proto.Feature Niantic.Lightship.Maps.Proto.Feature::Clone()
extern void Feature_Clone_m52CD6B38EE427C803DD7EAEA8900A8D4346EFD46 (void);
// 0x00000151 Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Proto.Feature::get_FeatureKind()
extern void Feature_get_FeatureKind_mF505DEFA3B1EBADD41349F1F1DB8A04A51C65A0D (void);
// 0x00000152 System.Void Niantic.Lightship.Maps.Proto.Feature::set_FeatureKind(Niantic.Lightship.Maps.Proto.FeatureKind)
extern void Feature_set_FeatureKind_m0712ED28A2443D0A221D33B4EAE432BBF747756B (void);
// 0x00000153 Niantic.Lightship.Maps.Proto.Geometry Niantic.Lightship.Maps.Proto.Feature::get_Geometry()
extern void Feature_get_Geometry_mB56277A4CD494B9B2335736FCDAF1F7959E51D01 (void);
// 0x00000154 System.Void Niantic.Lightship.Maps.Proto.Feature::set_Geometry(Niantic.Lightship.Maps.Proto.Geometry)
extern void Feature_set_Geometry_m2613C447F1FDF0568220055EBF8B41DE4BAA6ED6 (void);
// 0x00000155 Niantic.Lightship.Maps.Proto.Label Niantic.Lightship.Maps.Proto.Feature::get_Label()
extern void Feature_get_Label_mF9FD38CCD6BC2AFC2BB220C463585F45B3B34BA7 (void);
// 0x00000156 System.Void Niantic.Lightship.Maps.Proto.Feature::set_Label(Niantic.Lightship.Maps.Proto.Label)
extern void Feature_set_Label_m3E645A510313A1EBFD6E2DD7F8544E640B4EF829 (void);
// 0x00000157 Niantic.Lightship.Maps.Proto.BuildingMetadata Niantic.Lightship.Maps.Proto.Feature::get_BuildingMetadata()
extern void Feature_get_BuildingMetadata_mF15046652BD9FB8729F0C9278F3011E66C822A9F (void);
// 0x00000158 System.Void Niantic.Lightship.Maps.Proto.Feature::set_BuildingMetadata(Niantic.Lightship.Maps.Proto.BuildingMetadata)
extern void Feature_set_BuildingMetadata_m6C7214D5460ABAA6BCBE0B66A948E0338DA3DE31 (void);
// 0x00000159 Niantic.Lightship.Maps.Proto.RoadMetadata Niantic.Lightship.Maps.Proto.Feature::get_RoadMetadata()
extern void Feature_get_RoadMetadata_mF8FDAC6CEC3DF79B18A5AE7E90754DE1EB9602CA (void);
// 0x0000015A System.Void Niantic.Lightship.Maps.Proto.Feature::set_RoadMetadata(Niantic.Lightship.Maps.Proto.RoadMetadata)
extern void Feature_set_RoadMetadata_m976E02C88AAEE3954CF82D1E23BAB130C273C150 (void);
// 0x0000015B Niantic.Lightship.Maps.Proto.TransitMetadata Niantic.Lightship.Maps.Proto.Feature::get_TransitMetadata()
extern void Feature_get_TransitMetadata_m12377766E3032675C0A9740988F21164F16B0A3A (void);
// 0x0000015C System.Void Niantic.Lightship.Maps.Proto.Feature::set_TransitMetadata(Niantic.Lightship.Maps.Proto.TransitMetadata)
extern void Feature_set_TransitMetadata_mA5A2654F6B7A987BB5C132138858FAB96A138860 (void);
// 0x0000015D Niantic.Lightship.Maps.Proto.Feature/MetadataOneofCase Niantic.Lightship.Maps.Proto.Feature::get_MetadataCase()
extern void Feature_get_MetadataCase_mE0062E178B35F746EB82024C6B53C295A0F5FD1A (void);
// 0x0000015E System.Void Niantic.Lightship.Maps.Proto.Feature::ClearMetadata()
extern void Feature_ClearMetadata_mE419A3A2420FEBA5BD6F287063B6C25393B85A84 (void);
// 0x0000015F System.Boolean Niantic.Lightship.Maps.Proto.Feature::Equals(System.Object)
extern void Feature_Equals_mBC34702FA4B8C9E937E81C0D37400F2C39A4791E (void);
// 0x00000160 System.Boolean Niantic.Lightship.Maps.Proto.Feature::Equals(Niantic.Lightship.Maps.Proto.Feature)
extern void Feature_Equals_mE66AA5CBA807FB1DF7BF9675C115A94AF195F3A4 (void);
// 0x00000161 System.Int32 Niantic.Lightship.Maps.Proto.Feature::GetHashCode()
extern void Feature_GetHashCode_mC6077CA071D6B98486B4702AC05D33BBC9463866 (void);
// 0x00000162 System.String Niantic.Lightship.Maps.Proto.Feature::ToString()
extern void Feature_ToString_m50E41B462A83A8ABEB42BDFC02E16BE251F5B496 (void);
// 0x00000163 System.Void Niantic.Lightship.Maps.Proto.Feature::WriteTo(Google.Protobuf.CodedOutputStream)
extern void Feature_WriteTo_mA6AC1F42295DAE6FE741B4BDA2C4BD9603D8623C (void);
// 0x00000164 System.Int32 Niantic.Lightship.Maps.Proto.Feature::CalculateSize()
extern void Feature_CalculateSize_m5B85EE0BDD0E02EBA574F8955DCEDEE4C9341483 (void);
// 0x00000165 System.Void Niantic.Lightship.Maps.Proto.Feature::MergeFrom(Niantic.Lightship.Maps.Proto.Feature)
extern void Feature_MergeFrom_m654BB06E1C15BFAC388276DA2CF500B0A5CEBF98 (void);
// 0x00000166 System.Void Niantic.Lightship.Maps.Proto.Feature::MergeFrom(Google.Protobuf.CodedInputStream)
extern void Feature_MergeFrom_m15A9CFF0F7C73D993E795BFD1E3852D43B26F413 (void);
// 0x00000167 System.Void Niantic.Lightship.Maps.Proto.Feature::.cctor()
extern void Feature__cctor_m2CAD96BD85184D8CE63AB92A3285D74ACCD9C1A0 (void);
// 0x00000168 System.Void Niantic.Lightship.Maps.Proto.Feature/<>c::.cctor()
extern void U3CU3Ec__cctor_m2EAC7F32A57728A0B85CADF6F2BFD2F76F794143 (void);
// 0x00000169 System.Void Niantic.Lightship.Maps.Proto.Feature/<>c::.ctor()
extern void U3CU3Ec__ctor_m76E9F7E5CA1AACB949A965227F0B0380AEE53580 (void);
// 0x0000016A Niantic.Lightship.Maps.Proto.Feature Niantic.Lightship.Maps.Proto.Feature/<>c::<.cctor>b__52_0()
extern void U3CU3Ec_U3C_cctorU3Eb__52_0_mF2C3A8B71972E8ADB0E0AD449E3CE8C91DBB8DF0 (void);
// 0x0000016B Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.BuildingMetadata> Niantic.Lightship.Maps.Proto.BuildingMetadata::get_Parser()
extern void BuildingMetadata_get_Parser_m0E2888518CAE593D6A6230F16DC66EC6548ED84C (void);
// 0x0000016C Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.BuildingMetadata::get_Descriptor()
extern void BuildingMetadata_get_Descriptor_m99B608CE55CC809E46B514FA9538DEBC1B4BC2A0 (void);
// 0x0000016D Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.BuildingMetadata::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void BuildingMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mB89BF27152877C541F02047371EB7C121C61BEBF (void);
// 0x0000016E System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::.ctor()
extern void BuildingMetadata__ctor_m44B9CF0C84168F1EB890E008F092908453D15F54 (void);
// 0x0000016F System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::.ctor(Niantic.Lightship.Maps.Proto.BuildingMetadata)
extern void BuildingMetadata__ctor_m2DC8277D6B93BC3A5383C4755C287EE6B813A30D (void);
// 0x00000170 Niantic.Lightship.Maps.Proto.BuildingMetadata Niantic.Lightship.Maps.Proto.BuildingMetadata::Clone()
extern void BuildingMetadata_Clone_mE763501391023F48830CDF462B653FB93F03F821 (void);
// 0x00000171 System.Int32 Niantic.Lightship.Maps.Proto.BuildingMetadata::get_HeightMeters()
extern void BuildingMetadata_get_HeightMeters_m645CE4CB55B29E7E805D38003C52A5FB50C6253A (void);
// 0x00000172 System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::set_HeightMeters(System.Int32)
extern void BuildingMetadata_set_HeightMeters_mCD5471192F37A961A04349DC8A57FF6A5630A730 (void);
// 0x00000173 System.Boolean Niantic.Lightship.Maps.Proto.BuildingMetadata::get_IsUnderground()
extern void BuildingMetadata_get_IsUnderground_m2CA499F950BCBF738E340BBD2077E8657EC61296 (void);
// 0x00000174 System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::set_IsUnderground(System.Boolean)
extern void BuildingMetadata_set_IsUnderground_m3F081C25795BC9C190AE92FDAE2D6834E2963A8B (void);
// 0x00000175 System.Boolean Niantic.Lightship.Maps.Proto.BuildingMetadata::Equals(System.Object)
extern void BuildingMetadata_Equals_mC78A7AA36E4E1E5C8A30CC35DE6E201EBA87FAD2 (void);
// 0x00000176 System.Boolean Niantic.Lightship.Maps.Proto.BuildingMetadata::Equals(Niantic.Lightship.Maps.Proto.BuildingMetadata)
extern void BuildingMetadata_Equals_m6D3916F909FE90DC0DCEE600734F4070F1BD99CE (void);
// 0x00000177 System.Int32 Niantic.Lightship.Maps.Proto.BuildingMetadata::GetHashCode()
extern void BuildingMetadata_GetHashCode_m05B14A555B1ED732682C32CF2CA369F8251D694B (void);
// 0x00000178 System.String Niantic.Lightship.Maps.Proto.BuildingMetadata::ToString()
extern void BuildingMetadata_ToString_m79E4AB1E751AC261DDC6585BAEF88A077184AD38 (void);
// 0x00000179 System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::WriteTo(Google.Protobuf.CodedOutputStream)
extern void BuildingMetadata_WriteTo_mA75BCF09A6ABDB92DD88BECA952DB9D8B88A7CD9 (void);
// 0x0000017A System.Int32 Niantic.Lightship.Maps.Proto.BuildingMetadata::CalculateSize()
extern void BuildingMetadata_CalculateSize_mA5EF0DB1DE264F4B3721945FE3B329C3578C4E5E (void);
// 0x0000017B System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::MergeFrom(Niantic.Lightship.Maps.Proto.BuildingMetadata)
extern void BuildingMetadata_MergeFrom_m367E6FD91E03A5D92B40616856F129DC6CAAE6EF (void);
// 0x0000017C System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::MergeFrom(Google.Protobuf.CodedInputStream)
extern void BuildingMetadata_MergeFrom_mB8400730B9CC23CC2EE15F833A11F22643E625C2 (void);
// 0x0000017D System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata::.cctor()
extern void BuildingMetadata__cctor_mD161C0FC97A957EDAC3C7AA77F50CE1ECFA52B17 (void);
// 0x0000017E System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata/<>c::.cctor()
extern void U3CU3Ec__cctor_m3BC63C8A99488210971FA178CCCCA515B3D54FD9 (void);
// 0x0000017F System.Void Niantic.Lightship.Maps.Proto.BuildingMetadata/<>c::.ctor()
extern void U3CU3Ec__ctor_m0C0258572E2141834E9BE0E92AB2872CE57653D3 (void);
// 0x00000180 Niantic.Lightship.Maps.Proto.BuildingMetadata Niantic.Lightship.Maps.Proto.BuildingMetadata/<>c::<.cctor>b__29_0()
extern void U3CU3Ec_U3C_cctorU3Eb__29_0_m3B6227D3380D235EC529F0B7625B64B150F5B6F4 (void);
// 0x00000181 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.RoadMetadata> Niantic.Lightship.Maps.Proto.RoadMetadata::get_Parser()
extern void RoadMetadata_get_Parser_m0A35B516C5E0DD29DCD951647BA2C4596BF6BD75 (void);
// 0x00000182 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.RoadMetadata::get_Descriptor()
extern void RoadMetadata_get_Descriptor_m6FB7CFE5D5499571DE9CB24DB8A559450F2D67F6 (void);
// 0x00000183 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.RoadMetadata::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void RoadMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m67A38819F0A697EF0E9EFB51B0B432F877263B25 (void);
// 0x00000184 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::.ctor()
extern void RoadMetadata__ctor_mE72689B859ECC34C99F0956ECD6099ADB899087D (void);
// 0x00000185 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::.ctor(Niantic.Lightship.Maps.Proto.RoadMetadata)
extern void RoadMetadata__ctor_m937DC8C4DBFE723FBA1176D10B1C86AD8AFC59F6 (void);
// 0x00000186 Niantic.Lightship.Maps.Proto.RoadMetadata Niantic.Lightship.Maps.Proto.RoadMetadata::Clone()
extern void RoadMetadata_Clone_mEC9F36B6128BEA2F2B7B36499A864F00CA1660E7 (void);
// 0x00000187 System.Boolean Niantic.Lightship.Maps.Proto.RoadMetadata::get_IsTunnel()
extern void RoadMetadata_get_IsTunnel_mA542AC18A48F0F61B93810EA14903433CDB76FFB (void);
// 0x00000188 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::set_IsTunnel(System.Boolean)
extern void RoadMetadata_set_IsTunnel_mC7F85B54B4EB91D0D310FFD353716381B81C0DE4 (void);
// 0x00000189 System.Boolean Niantic.Lightship.Maps.Proto.RoadMetadata::get_RailwayIsSiding()
extern void RoadMetadata_get_RailwayIsSiding_mCC4BA472FD657BD64730F44047B48333CAFE7857 (void);
// 0x0000018A System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::set_RailwayIsSiding(System.Boolean)
extern void RoadMetadata_set_RailwayIsSiding_m0BEC893723B7622E639971CFE0F874E0D790BFD2 (void);
// 0x0000018B System.String Niantic.Lightship.Maps.Proto.RoadMetadata::get_Network()
extern void RoadMetadata_get_Network_m122938C599113EDFA89275DE946240949B4F0E2B (void);
// 0x0000018C System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::set_Network(System.String)
extern void RoadMetadata_set_Network_mA23D8B5A595BAE72CE4540A60EB21926513D5CC7 (void);
// 0x0000018D System.String Niantic.Lightship.Maps.Proto.RoadMetadata::get_ShieldText()
extern void RoadMetadata_get_ShieldText_m55F8BD583406571A53CD6909FA08F3CD248851DF (void);
// 0x0000018E System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::set_ShieldText(System.String)
extern void RoadMetadata_set_ShieldText_m06EB32E8E9B8F3B8847188F16CB7EF572777908F (void);
// 0x0000018F System.String Niantic.Lightship.Maps.Proto.RoadMetadata::get_Route()
extern void RoadMetadata_get_Route_m1EC31C83B3BAD8AF70B741E817C1558AB9C5E6BF (void);
// 0x00000190 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::set_Route(System.String)
extern void RoadMetadata_set_Route_mAEDC25DEA5869D620AAF8510E3A86BF741601C3D (void);
// 0x00000191 System.Boolean Niantic.Lightship.Maps.Proto.RoadMetadata::Equals(System.Object)
extern void RoadMetadata_Equals_m15227B2D8BAFF28852018F2AEF07FE4BB3B5B6CB (void);
// 0x00000192 System.Boolean Niantic.Lightship.Maps.Proto.RoadMetadata::Equals(Niantic.Lightship.Maps.Proto.RoadMetadata)
extern void RoadMetadata_Equals_m1A45868A08ADE816073961EF0F3662469D1A247C (void);
// 0x00000193 System.Int32 Niantic.Lightship.Maps.Proto.RoadMetadata::GetHashCode()
extern void RoadMetadata_GetHashCode_mAE1718E0B7389BBB8CFB9796F8C7F1D81A880FDD (void);
// 0x00000194 System.String Niantic.Lightship.Maps.Proto.RoadMetadata::ToString()
extern void RoadMetadata_ToString_m45E24C9ED88ED996CFE63EF4EB0D78CE9A289BA1 (void);
// 0x00000195 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::WriteTo(Google.Protobuf.CodedOutputStream)
extern void RoadMetadata_WriteTo_mF9717073F00F0EBD5271B02121548B3080157F13 (void);
// 0x00000196 System.Int32 Niantic.Lightship.Maps.Proto.RoadMetadata::CalculateSize()
extern void RoadMetadata_CalculateSize_m4E18202F31A08705A9E6989082FEEE5286AB7372 (void);
// 0x00000197 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::MergeFrom(Niantic.Lightship.Maps.Proto.RoadMetadata)
extern void RoadMetadata_MergeFrom_m1FCAD6FDB806635AD26FD04E861ECBFFEFC996D2 (void);
// 0x00000198 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::MergeFrom(Google.Protobuf.CodedInputStream)
extern void RoadMetadata_MergeFrom_m9464EEC2157CDEB25FAE45ADD87887D2D6654B38 (void);
// 0x00000199 System.Void Niantic.Lightship.Maps.Proto.RoadMetadata::.cctor()
extern void RoadMetadata__cctor_m8F789B21F2BB51005FCCE3880B65CCC66AFA412B (void);
// 0x0000019A System.Void Niantic.Lightship.Maps.Proto.RoadMetadata/<>c::.cctor()
extern void U3CU3Ec__cctor_mB37DFDB66EE4C7931006EE4809C24745661F46E2 (void);
// 0x0000019B System.Void Niantic.Lightship.Maps.Proto.RoadMetadata/<>c::.ctor()
extern void U3CU3Ec__ctor_mD36F3E9D9FB4387F84D1205F724A3677CEB1A8C4 (void);
// 0x0000019C Niantic.Lightship.Maps.Proto.RoadMetadata Niantic.Lightship.Maps.Proto.RoadMetadata/<>c::<.cctor>b__44_0()
extern void U3CU3Ec_U3C_cctorU3Eb__44_0_m778EF71482BDA7425EAA2606F4EDA5CFA9C8A620 (void);
// 0x0000019D Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.TransitMetadata> Niantic.Lightship.Maps.Proto.TransitMetadata::get_Parser()
extern void TransitMetadata_get_Parser_m3BAF22158CC71CA43C9E6CAF6B9C3FF268FB74D3 (void);
// 0x0000019E Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TransitMetadata::get_Descriptor()
extern void TransitMetadata_get_Descriptor_mF9A71660DC745DC287370FF10AE6AA4F5F7581BB (void);
// 0x0000019F Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TransitMetadata::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void TransitMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m50F066CF58A54ABE21B5C34E9280C76956D238A0 (void);
// 0x000001A0 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::.ctor()
extern void TransitMetadata__ctor_m458963A45FC6E1113BA55E537F61B348C2117597 (void);
// 0x000001A1 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::.ctor(Niantic.Lightship.Maps.Proto.TransitMetadata)
extern void TransitMetadata__ctor_m1DDE0C86CF4F468C6BFB543B9AF8BB82CE39E4DD (void);
// 0x000001A2 Niantic.Lightship.Maps.Proto.TransitMetadata Niantic.Lightship.Maps.Proto.TransitMetadata::Clone()
extern void TransitMetadata_Clone_mE44088C3D911069A5418BA8BB2DEE1462DAF3DE2 (void);
// 0x000001A3 System.String Niantic.Lightship.Maps.Proto.TransitMetadata::get_Route()
extern void TransitMetadata_get_Route_m7EC48D7D2DC64949D53F3AECCE4B7D59F4505C88 (void);
// 0x000001A4 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::set_Route(System.String)
extern void TransitMetadata_set_Route_mE866F0613FD2EBE7FBA415555CEC9FDA1A9C23F7 (void);
// 0x000001A5 System.String Niantic.Lightship.Maps.Proto.TransitMetadata::get_Agency()
extern void TransitMetadata_get_Agency_m1C9DF5A3A6296B03B2D14679384E96262E01FD3C (void);
// 0x000001A6 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::set_Agency(System.String)
extern void TransitMetadata_set_Agency_mAF9B37B38EAFAC1C0CB957A8F4E8478519D16F3A (void);
// 0x000001A7 System.String Niantic.Lightship.Maps.Proto.TransitMetadata::get_ColorName()
extern void TransitMetadata_get_ColorName_m2F349CE843D73FE1193AE067446A0CED504969D8 (void);
// 0x000001A8 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::set_ColorName(System.String)
extern void TransitMetadata_set_ColorName_mDE2D081DEF57BD7D83FE4602E01B1E2045AC8F54 (void);
// 0x000001A9 System.Boolean Niantic.Lightship.Maps.Proto.TransitMetadata::Equals(System.Object)
extern void TransitMetadata_Equals_m9DEBB29B7220FF8ABE2C3C282CBF35C3CD41AE09 (void);
// 0x000001AA System.Boolean Niantic.Lightship.Maps.Proto.TransitMetadata::Equals(Niantic.Lightship.Maps.Proto.TransitMetadata)
extern void TransitMetadata_Equals_m6276D20111EF441B22A2B7E707B98041D87966D2 (void);
// 0x000001AB System.Int32 Niantic.Lightship.Maps.Proto.TransitMetadata::GetHashCode()
extern void TransitMetadata_GetHashCode_m7ECE8EEDF86A278B2E53E386F5C1DEE7F2CC39F1 (void);
// 0x000001AC System.String Niantic.Lightship.Maps.Proto.TransitMetadata::ToString()
extern void TransitMetadata_ToString_m0419B9AC845D442149822808ACFCFBBEA2899599 (void);
// 0x000001AD System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::WriteTo(Google.Protobuf.CodedOutputStream)
extern void TransitMetadata_WriteTo_m9DE5D9B5E4C2FD891C2F77DD2CD7BF090C64A7B2 (void);
// 0x000001AE System.Int32 Niantic.Lightship.Maps.Proto.TransitMetadata::CalculateSize()
extern void TransitMetadata_CalculateSize_m2D3FB27F27A6F3A954C20290F1F7C99CE2B44C8D (void);
// 0x000001AF System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::MergeFrom(Niantic.Lightship.Maps.Proto.TransitMetadata)
extern void TransitMetadata_MergeFrom_m3650B8A5BABC8A623AE7166706AB5FE32B393B98 (void);
// 0x000001B0 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::MergeFrom(Google.Protobuf.CodedInputStream)
extern void TransitMetadata_MergeFrom_mC5ACD02021C26551C4D7D99DCFF72E5C2D1E96C0 (void);
// 0x000001B1 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata::.cctor()
extern void TransitMetadata__cctor_mB90B5DF7FEB5DAB6BD7397D8BB49DD2FF4EB7AC8 (void);
// 0x000001B2 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata/<>c::.cctor()
extern void U3CU3Ec__cctor_m8F046DA717760561EEB034484B407A3FAAD34AFF (void);
// 0x000001B3 System.Void Niantic.Lightship.Maps.Proto.TransitMetadata/<>c::.ctor()
extern void U3CU3Ec__ctor_m3F6E2EC6897B403B41D266A04F407AFEAA62B6EF (void);
// 0x000001B4 Niantic.Lightship.Maps.Proto.TransitMetadata Niantic.Lightship.Maps.Proto.TransitMetadata/<>c::<.cctor>b__34_0()
extern void U3CU3Ec_U3C_cctorU3Eb__34_0_m825764D9AFF0E9AA977C636B5C56B46E13BCE15D (void);
// 0x000001B5 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.Geometry> Niantic.Lightship.Maps.Proto.Geometry::get_Parser()
extern void Geometry_get_Parser_m82913CA06D7B595C8CBDA75BD92A5194BE8F115F (void);
// 0x000001B6 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Geometry::get_Descriptor()
extern void Geometry_get_Descriptor_m1ED72E93736110F41C81594CF5AA2A605D2EA6A3 (void);
// 0x000001B7 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Geometry::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void Geometry_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m6E86C5610DF25D33B0963DB415B444D3F3E74776 (void);
// 0x000001B8 System.Void Niantic.Lightship.Maps.Proto.Geometry::.ctor()
extern void Geometry__ctor_mD690B2D0D11042600A17500D6E6203856F96D42F (void);
// 0x000001B9 System.Void Niantic.Lightship.Maps.Proto.Geometry::.ctor(Niantic.Lightship.Maps.Proto.Geometry)
extern void Geometry__ctor_mB8555E8E61C25786338867F80E434A640DAC4C7F (void);
// 0x000001BA Niantic.Lightship.Maps.Proto.Geometry Niantic.Lightship.Maps.Proto.Geometry::Clone()
extern void Geometry_Clone_m704D32FDB9A1A6106DD188CFA9767A5F3DE776BD (void);
// 0x000001BB Niantic.Lightship.Maps.Proto.PointList Niantic.Lightship.Maps.Proto.Geometry::get_Points()
extern void Geometry_get_Points_mBD7EAC6DA1DD2E89D059CF5C1D35070A1DEAFA40 (void);
// 0x000001BC System.Void Niantic.Lightship.Maps.Proto.Geometry::set_Points(Niantic.Lightship.Maps.Proto.PointList)
extern void Geometry_set_Points_mC74D1064F928EAF6FF40A925C2B312E3FC499143 (void);
// 0x000001BD Niantic.Lightship.Maps.Proto.PolylineList Niantic.Lightship.Maps.Proto.Geometry::get_Polylines()
extern void Geometry_get_Polylines_m9B563CC427074BCBC5EB575E77CC6419FAC9CC69 (void);
// 0x000001BE System.Void Niantic.Lightship.Maps.Proto.Geometry::set_Polylines(Niantic.Lightship.Maps.Proto.PolylineList)
extern void Geometry_set_Polylines_mF5C0F7CE0382C72D7202C64F40E7416DDDFCEE1A (void);
// 0x000001BF Niantic.Lightship.Maps.Proto.TriangleList Niantic.Lightship.Maps.Proto.Geometry::get_Triangles()
extern void Geometry_get_Triangles_mD1C63B7D782B9342BDBC6DEAAE54DCCA631755B0 (void);
// 0x000001C0 System.Void Niantic.Lightship.Maps.Proto.Geometry::set_Triangles(Niantic.Lightship.Maps.Proto.TriangleList)
extern void Geometry_set_Triangles_m0C92D137644BF31EFA4BCBB09A12EEFB8987E28E (void);
// 0x000001C1 Niantic.Lightship.Maps.Proto.Geometry/GeometryOneofCase Niantic.Lightship.Maps.Proto.Geometry::get_GeometryCase()
extern void Geometry_get_GeometryCase_mA28224A330D97CF93FCCE0BC9196C6F636D95675 (void);
// 0x000001C2 System.Void Niantic.Lightship.Maps.Proto.Geometry::ClearGeometry()
extern void Geometry_ClearGeometry_m1D506F5723753BC7FE21E3F52E3971DD11D4AACC (void);
// 0x000001C3 System.Boolean Niantic.Lightship.Maps.Proto.Geometry::Equals(System.Object)
extern void Geometry_Equals_mAFCD7EFEFE85184DF7652691EAD569DEB835999F (void);
// 0x000001C4 System.Boolean Niantic.Lightship.Maps.Proto.Geometry::Equals(Niantic.Lightship.Maps.Proto.Geometry)
extern void Geometry_Equals_m7F2767DDA44B5467C162607FAD1E0F7792F23B02 (void);
// 0x000001C5 System.Int32 Niantic.Lightship.Maps.Proto.Geometry::GetHashCode()
extern void Geometry_GetHashCode_m12C13D095DFB0086C57F52AD7073114C875ECE97 (void);
// 0x000001C6 System.String Niantic.Lightship.Maps.Proto.Geometry::ToString()
extern void Geometry_ToString_mC374C6A83665BDFB534889E4006FFE8F85768B66 (void);
// 0x000001C7 System.Void Niantic.Lightship.Maps.Proto.Geometry::WriteTo(Google.Protobuf.CodedOutputStream)
extern void Geometry_WriteTo_m0C3D5DC10C336369B4FE9D18911648F0D2327E7C (void);
// 0x000001C8 System.Int32 Niantic.Lightship.Maps.Proto.Geometry::CalculateSize()
extern void Geometry_CalculateSize_mA61B36A265FC7647FC2AB644675A1EBDC1768462 (void);
// 0x000001C9 System.Void Niantic.Lightship.Maps.Proto.Geometry::MergeFrom(Niantic.Lightship.Maps.Proto.Geometry)
extern void Geometry_MergeFrom_m28FD1349677FABAE0F59C25D15047F919BA10D78 (void);
// 0x000001CA System.Void Niantic.Lightship.Maps.Proto.Geometry::MergeFrom(Google.Protobuf.CodedInputStream)
extern void Geometry_MergeFrom_m72C103402D104D5A2DEA2872DDE1A40666F9A824 (void);
// 0x000001CB System.Void Niantic.Lightship.Maps.Proto.Geometry::.cctor()
extern void Geometry__cctor_mDE6E6004761E14521F3ECB2034445241FFBCF217 (void);
// 0x000001CC System.Void Niantic.Lightship.Maps.Proto.Geometry/<>c::.cctor()
extern void U3CU3Ec__cctor_mAB88D63B1AA5F9610C0B7EE4B10E883F7EEAAF81 (void);
// 0x000001CD System.Void Niantic.Lightship.Maps.Proto.Geometry/<>c::.ctor()
extern void U3CU3Ec__ctor_m05CA8B82294C3133F8DCE729DA5F4F89CAB3EBEB (void);
// 0x000001CE Niantic.Lightship.Maps.Proto.Geometry Niantic.Lightship.Maps.Proto.Geometry/<>c::<.cctor>b__37_0()
extern void U3CU3Ec_U3C_cctorU3Eb__37_0_m79A8ED10DA7E4EB43FF0DB03FA3E8C5CC5AD3B33 (void);
// 0x000001CF Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.PointList> Niantic.Lightship.Maps.Proto.PointList::get_Parser()
extern void PointList_get_Parser_m0B11471177A93D798B2A6ACDBE00764672E21E13 (void);
// 0x000001D0 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.PointList::get_Descriptor()
extern void PointList_get_Descriptor_mEEE37A498614CA3CE766C86ADEA4BDD7A61BBC33 (void);
// 0x000001D1 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.PointList::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void PointList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m409BF9875C031104E3228E8E972F5B14E6A6ADBC (void);
// 0x000001D2 System.Void Niantic.Lightship.Maps.Proto.PointList::.ctor()
extern void PointList__ctor_m71AD72EFA0889D5067FAD617DEC4C280A49B87EC (void);
// 0x000001D3 System.Void Niantic.Lightship.Maps.Proto.PointList::.ctor(Niantic.Lightship.Maps.Proto.PointList)
extern void PointList__ctor_m2ACCCC123034D41FF9864994724CC2302B5B0B5D (void);
// 0x000001D4 Niantic.Lightship.Maps.Proto.PointList Niantic.Lightship.Maps.Proto.PointList::Clone()
extern void PointList_Clone_m06239E0814FF1436B47C7DFF58FAA5E3072C0618 (void);
// 0x000001D5 Google.Protobuf.Collections.RepeatedField`1<System.UInt32> Niantic.Lightship.Maps.Proto.PointList::get_Coords()
extern void PointList_get_Coords_m773194B0AD384B2DE5E3A8CAECA076A42834F937 (void);
// 0x000001D6 System.Boolean Niantic.Lightship.Maps.Proto.PointList::Equals(System.Object)
extern void PointList_Equals_mDF36308377E922539369B42FA62A96C403DCD96C (void);
// 0x000001D7 System.Boolean Niantic.Lightship.Maps.Proto.PointList::Equals(Niantic.Lightship.Maps.Proto.PointList)
extern void PointList_Equals_m83840D6C8632434D7A199D344C8207AA9C4F732D (void);
// 0x000001D8 System.Int32 Niantic.Lightship.Maps.Proto.PointList::GetHashCode()
extern void PointList_GetHashCode_m99F4BC9C0E62F87493763CA9123BCC87EBEB9356 (void);
// 0x000001D9 System.String Niantic.Lightship.Maps.Proto.PointList::ToString()
extern void PointList_ToString_m46158B4F862CCDD624BBB568D7693C246214FA9B (void);
// 0x000001DA System.Void Niantic.Lightship.Maps.Proto.PointList::WriteTo(Google.Protobuf.CodedOutputStream)
extern void PointList_WriteTo_mA9AE0EFCF87A20045540B40DA5CCD678AB45626A (void);
// 0x000001DB System.Int32 Niantic.Lightship.Maps.Proto.PointList::CalculateSize()
extern void PointList_CalculateSize_mD49D118BA9BB4ACAE84C8093C181B4CB88796A27 (void);
// 0x000001DC System.Void Niantic.Lightship.Maps.Proto.PointList::MergeFrom(Niantic.Lightship.Maps.Proto.PointList)
extern void PointList_MergeFrom_mB1D03E738BFFAF7214523152E7371DE5702E3370 (void);
// 0x000001DD System.Void Niantic.Lightship.Maps.Proto.PointList::MergeFrom(Google.Protobuf.CodedInputStream)
extern void PointList_MergeFrom_m604F7B59E927EA589DFA5E950F47B212BC632438 (void);
// 0x000001DE System.Void Niantic.Lightship.Maps.Proto.PointList::.cctor()
extern void PointList__cctor_mA14C6D46215250B5A33176B2883AA33D9F227C99 (void);
// 0x000001DF System.Void Niantic.Lightship.Maps.Proto.PointList/<>c::.cctor()
extern void U3CU3Ec__cctor_m669FBE3A10241BC3663D68A250D7B8C893B3846F (void);
// 0x000001E0 System.Void Niantic.Lightship.Maps.Proto.PointList/<>c::.ctor()
extern void U3CU3Ec__ctor_mF064C4A9E25EC45348949E0E97428D28CD42B2B3 (void);
// 0x000001E1 Niantic.Lightship.Maps.Proto.PointList Niantic.Lightship.Maps.Proto.PointList/<>c::<.cctor>b__24_0()
extern void U3CU3Ec_U3C_cctorU3Eb__24_0_mB1C050F097CD3F7173F9D10146ED21035F0BEA1E (void);
// 0x000001E2 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.Polyline> Niantic.Lightship.Maps.Proto.Polyline::get_Parser()
extern void Polyline_get_Parser_m8DA8160D831864C4BB4F5FF2E02B32568BC1315F (void);
// 0x000001E3 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Polyline::get_Descriptor()
extern void Polyline_get_Descriptor_m1907B33A108F55EAF5C507DB10CE05C3E563C255 (void);
// 0x000001E4 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Polyline::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void Polyline_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD10EF125CAA50718822796857304C81030F0B94C (void);
// 0x000001E5 System.Void Niantic.Lightship.Maps.Proto.Polyline::.ctor()
extern void Polyline__ctor_mB009D60C35D54210EF50748AEB10CBD459919072 (void);
// 0x000001E6 System.Void Niantic.Lightship.Maps.Proto.Polyline::.ctor(Niantic.Lightship.Maps.Proto.Polyline)
extern void Polyline__ctor_m1EE035AB405316434B4B65A4972BA716C1E9E347 (void);
// 0x000001E7 Niantic.Lightship.Maps.Proto.Polyline Niantic.Lightship.Maps.Proto.Polyline::Clone()
extern void Polyline_Clone_m1F2A6F38F0C0EE66501F0B1F0B255CE4D34C6B3F (void);
// 0x000001E8 Google.Protobuf.Collections.RepeatedField`1<System.UInt32> Niantic.Lightship.Maps.Proto.Polyline::get_Coords()
extern void Polyline_get_Coords_m6B835D0EF165C62F7A918A8600E3789A23A451F0 (void);
// 0x000001E9 System.Boolean Niantic.Lightship.Maps.Proto.Polyline::Equals(System.Object)
extern void Polyline_Equals_mDEDFCBB80939E2F9152D5A862D3BA6550F6997F9 (void);
// 0x000001EA System.Boolean Niantic.Lightship.Maps.Proto.Polyline::Equals(Niantic.Lightship.Maps.Proto.Polyline)
extern void Polyline_Equals_m088A49DE9825E59196727B0C2D92B31FFFF19ABE (void);
// 0x000001EB System.Int32 Niantic.Lightship.Maps.Proto.Polyline::GetHashCode()
extern void Polyline_GetHashCode_m8DD2727D6AD32CCC188141A19023FE7E737CE857 (void);
// 0x000001EC System.String Niantic.Lightship.Maps.Proto.Polyline::ToString()
extern void Polyline_ToString_m5114B17D1BB946A8E253D7A3BA4674FC26461AED (void);
// 0x000001ED System.Void Niantic.Lightship.Maps.Proto.Polyline::WriteTo(Google.Protobuf.CodedOutputStream)
extern void Polyline_WriteTo_m6FE9AC98B17AB52A4A2CA6088725BFF6F9471D2A (void);
// 0x000001EE System.Int32 Niantic.Lightship.Maps.Proto.Polyline::CalculateSize()
extern void Polyline_CalculateSize_mA56C510FE84E871B8AE41CF46CA6A7D188BE5BFE (void);
// 0x000001EF System.Void Niantic.Lightship.Maps.Proto.Polyline::MergeFrom(Niantic.Lightship.Maps.Proto.Polyline)
extern void Polyline_MergeFrom_mE902F4FF38A8B778FFF38F7D4657062EA445E314 (void);
// 0x000001F0 System.Void Niantic.Lightship.Maps.Proto.Polyline::MergeFrom(Google.Protobuf.CodedInputStream)
extern void Polyline_MergeFrom_m64C7DC0C58F64C9C7C23103857701BF1EDF2B742 (void);
// 0x000001F1 System.Void Niantic.Lightship.Maps.Proto.Polyline::.cctor()
extern void Polyline__cctor_mCBFB0A89B5DA3D1B2403892B3220C481273E43EB (void);
// 0x000001F2 System.Void Niantic.Lightship.Maps.Proto.Polyline/<>c::.cctor()
extern void U3CU3Ec__cctor_m7EECCB224FB6F995A141F971C0E6D92330BC43EC (void);
// 0x000001F3 System.Void Niantic.Lightship.Maps.Proto.Polyline/<>c::.ctor()
extern void U3CU3Ec__ctor_mC477FDAD581BC6EAF1D203C157926F8DFC923BD1 (void);
// 0x000001F4 Niantic.Lightship.Maps.Proto.Polyline Niantic.Lightship.Maps.Proto.Polyline/<>c::<.cctor>b__24_0()
extern void U3CU3Ec_U3C_cctorU3Eb__24_0_m7C94EC33B5B11DA56A50DA84B1EF3735BD8E0BAF (void);
// 0x000001F5 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.PolylineList> Niantic.Lightship.Maps.Proto.PolylineList::get_Parser()
extern void PolylineList_get_Parser_m504D9C504991902F8615E27C05ED622446063DAD (void);
// 0x000001F6 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.PolylineList::get_Descriptor()
extern void PolylineList_get_Descriptor_m88DCE8FE0FCAF7E4C5507422A6C96C80D78EC604 (void);
// 0x000001F7 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.PolylineList::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void PolylineList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m8538A5FA9B7525B1C1DD981221BDB1713E5E60F3 (void);
// 0x000001F8 System.Void Niantic.Lightship.Maps.Proto.PolylineList::.ctor()
extern void PolylineList__ctor_m203DB1D121F8D496BD683B4ADB3F1ABDCED8BDDE (void);
// 0x000001F9 System.Void Niantic.Lightship.Maps.Proto.PolylineList::.ctor(Niantic.Lightship.Maps.Proto.PolylineList)
extern void PolylineList__ctor_mA9AF6C2A4E61C117BED6D3555818DA5749DC5BF9 (void);
// 0x000001FA Niantic.Lightship.Maps.Proto.PolylineList Niantic.Lightship.Maps.Proto.PolylineList::Clone()
extern void PolylineList_Clone_mB2590AE11D38C8802F1D9176767A75217C549449 (void);
// 0x000001FB Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.Polyline> Niantic.Lightship.Maps.Proto.PolylineList::get_Polylines()
extern void PolylineList_get_Polylines_m5B2F679022333C9619B645B2E24C8C5A05C0CB9D (void);
// 0x000001FC System.Boolean Niantic.Lightship.Maps.Proto.PolylineList::Equals(System.Object)
extern void PolylineList_Equals_m3998CB48FCBF642424C105CD848C687BE70930B9 (void);
// 0x000001FD System.Boolean Niantic.Lightship.Maps.Proto.PolylineList::Equals(Niantic.Lightship.Maps.Proto.PolylineList)
extern void PolylineList_Equals_mF8B6DAB7987B97B7387829AF02FE6D5C483688D0 (void);
// 0x000001FE System.Int32 Niantic.Lightship.Maps.Proto.PolylineList::GetHashCode()
extern void PolylineList_GetHashCode_m8C1D06AF81478AAE2CFEAD54996555AF6D9477DD (void);
// 0x000001FF System.String Niantic.Lightship.Maps.Proto.PolylineList::ToString()
extern void PolylineList_ToString_m118BF1D44924419EE436A189396FC8024EC7AF66 (void);
// 0x00000200 System.Void Niantic.Lightship.Maps.Proto.PolylineList::WriteTo(Google.Protobuf.CodedOutputStream)
extern void PolylineList_WriteTo_m62702583DB39FAAED9BF20A959B8488C18EDCD11 (void);
// 0x00000201 System.Int32 Niantic.Lightship.Maps.Proto.PolylineList::CalculateSize()
extern void PolylineList_CalculateSize_m1DBABB039F01C1D54A25162C9886300C2EA28D5B (void);
// 0x00000202 System.Void Niantic.Lightship.Maps.Proto.PolylineList::MergeFrom(Niantic.Lightship.Maps.Proto.PolylineList)
extern void PolylineList_MergeFrom_m410605177F6E3FDFA4EDA75E5B75B662F479BC75 (void);
// 0x00000203 System.Void Niantic.Lightship.Maps.Proto.PolylineList::MergeFrom(Google.Protobuf.CodedInputStream)
extern void PolylineList_MergeFrom_m6677042776316732FD7F51D0207D05E762B8DE26 (void);
// 0x00000204 System.Void Niantic.Lightship.Maps.Proto.PolylineList::.cctor()
extern void PolylineList__cctor_m4F2AA16DB07CEDABF9990DADB033DE00B724F95E (void);
// 0x00000205 System.Void Niantic.Lightship.Maps.Proto.PolylineList/<>c::.cctor()
extern void U3CU3Ec__cctor_m1EEB5576CD2EA268EA8A1179F36FB9E64CA37CE0 (void);
// 0x00000206 System.Void Niantic.Lightship.Maps.Proto.PolylineList/<>c::.ctor()
extern void U3CU3Ec__ctor_mF7C00EAF16CF4B793CE7ED82054766389AA3DE9E (void);
// 0x00000207 Niantic.Lightship.Maps.Proto.PolylineList Niantic.Lightship.Maps.Proto.PolylineList/<>c::<.cctor>b__24_0()
extern void U3CU3Ec_U3C_cctorU3Eb__24_0_mCAE4A0FCFED5716A22AE52B635C6B9B6E03D6AD8 (void);
// 0x00000208 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.TriangleList> Niantic.Lightship.Maps.Proto.TriangleList::get_Parser()
extern void TriangleList_get_Parser_mB54202536B1B0B8D3D796551175BA72644253861 (void);
// 0x00000209 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TriangleList::get_Descriptor()
extern void TriangleList_get_Descriptor_m5D78B3C4303DAF5B43789D65189ABBECA5E191E1 (void);
// 0x0000020A Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.TriangleList::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void TriangleList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mF68D3C7C55E9E6DB46E9906D68E73CB3B71F3DCF (void);
// 0x0000020B System.Void Niantic.Lightship.Maps.Proto.TriangleList::.ctor()
extern void TriangleList__ctor_mF6C4C387A4F66E28F3950F5228EE4AEC64C001B6 (void);
// 0x0000020C System.Void Niantic.Lightship.Maps.Proto.TriangleList::.ctor(Niantic.Lightship.Maps.Proto.TriangleList)
extern void TriangleList__ctor_m65C2D297ECE919176B0887941C5EBB83DED36141 (void);
// 0x0000020D Niantic.Lightship.Maps.Proto.TriangleList Niantic.Lightship.Maps.Proto.TriangleList::Clone()
extern void TriangleList_Clone_m52EBEAC24ED6A90F9A791D741B8D8AB4B397D240 (void);
// 0x0000020E Google.Protobuf.Collections.RepeatedField`1<System.UInt32> Niantic.Lightship.Maps.Proto.TriangleList::get_Coords()
extern void TriangleList_get_Coords_m07287724D64D6AA0267263671A5FF85F6A2D1662 (void);
// 0x0000020F Google.Protobuf.ByteString Niantic.Lightship.Maps.Proto.TriangleList::get_ExteriorEdges()
extern void TriangleList_get_ExteriorEdges_m3AFF8C55C0EDA781765675DA6BE22527242D3B75 (void);
// 0x00000210 System.Void Niantic.Lightship.Maps.Proto.TriangleList::set_ExteriorEdges(Google.Protobuf.ByteString)
extern void TriangleList_set_ExteriorEdges_m6AD7161510D15EC8C7D0482B4337468DE1229C19 (void);
// 0x00000211 System.Boolean Niantic.Lightship.Maps.Proto.TriangleList::Equals(System.Object)
extern void TriangleList_Equals_m8C874E13CF1166ADA85EA10D61953137C54F9549 (void);
// 0x00000212 System.Boolean Niantic.Lightship.Maps.Proto.TriangleList::Equals(Niantic.Lightship.Maps.Proto.TriangleList)
extern void TriangleList_Equals_m73AD07E794578BA1134FBFA4D7B2B94258485C11 (void);
// 0x00000213 System.Int32 Niantic.Lightship.Maps.Proto.TriangleList::GetHashCode()
extern void TriangleList_GetHashCode_mA239C327E8C58B19A733E7474061C6E6FA2355B9 (void);
// 0x00000214 System.String Niantic.Lightship.Maps.Proto.TriangleList::ToString()
extern void TriangleList_ToString_mBFD853D867F833ADB561C1EC629A6ABB4B0ACE0E (void);
// 0x00000215 System.Void Niantic.Lightship.Maps.Proto.TriangleList::WriteTo(Google.Protobuf.CodedOutputStream)
extern void TriangleList_WriteTo_m0D3E43A775C062CB797108FBEF721F2DBC9DDDAA (void);
// 0x00000216 System.Int32 Niantic.Lightship.Maps.Proto.TriangleList::CalculateSize()
extern void TriangleList_CalculateSize_m7B28AAB6CEE3EF49928E4128681F9FC1A5DF8ADA (void);
// 0x00000217 System.Void Niantic.Lightship.Maps.Proto.TriangleList::MergeFrom(Niantic.Lightship.Maps.Proto.TriangleList)
extern void TriangleList_MergeFrom_m40A64CB87BC57C866CD5410E196E50A92B0B497B (void);
// 0x00000218 System.Void Niantic.Lightship.Maps.Proto.TriangleList::MergeFrom(Google.Protobuf.CodedInputStream)
extern void TriangleList_MergeFrom_m4B08D510D65CD05929F0721467A74AF4E99F4072 (void);
// 0x00000219 System.Void Niantic.Lightship.Maps.Proto.TriangleList::.cctor()
extern void TriangleList__cctor_m780C400F0060503BED05879DE90924F6F30B021E (void);
// 0x0000021A System.Void Niantic.Lightship.Maps.Proto.TriangleList/<>c::.cctor()
extern void U3CU3Ec__cctor_m0BD2D77F383AD3FEC9B37F82BBAAE5BCDEFCED4B (void);
// 0x0000021B System.Void Niantic.Lightship.Maps.Proto.TriangleList/<>c::.ctor()
extern void U3CU3Ec__ctor_m6AB8099CC2C11A934528860D920FDE7993873668 (void);
// 0x0000021C Niantic.Lightship.Maps.Proto.TriangleList Niantic.Lightship.Maps.Proto.TriangleList/<>c::<.cctor>b__30_0()
extern void U3CU3Ec_U3C_cctorU3Eb__30_0_m906E9F145DCA93BD2E4941340189DBB44CD3413E (void);
// 0x0000021D Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.Label> Niantic.Lightship.Maps.Proto.Label::get_Parser()
extern void Label_get_Parser_mC367069B21C93E63F34A8E0D70A11CCC6F78179C (void);
// 0x0000021E Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Label::get_Descriptor()
extern void Label_get_Descriptor_m665A4B8106770642FFD968872E70058BF235DF62 (void);
// 0x0000021F Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.Label::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void Label_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mBD7077779692D5EA1431710A9A593F710EDE6DC9 (void);
// 0x00000220 System.Void Niantic.Lightship.Maps.Proto.Label::.ctor()
extern void Label__ctor_m84E1F3C7ED13994C70FF0C71FAE89A36FC1B857A (void);
// 0x00000221 System.Void Niantic.Lightship.Maps.Proto.Label::.ctor(Niantic.Lightship.Maps.Proto.Label)
extern void Label__ctor_m1E1E9EFD4D7B2478D695D6E41E4460B6F535774E (void);
// 0x00000222 Niantic.Lightship.Maps.Proto.Label Niantic.Lightship.Maps.Proto.Label::Clone()
extern void Label_Clone_mECE68393C10B33AFB55EB604ED8C614B7E3EF849 (void);
// 0x00000223 System.Int32 Niantic.Lightship.Maps.Proto.Label::get_MinZoom()
extern void Label_get_MinZoom_m4A49AB299A90BCAB75609653B7C26B459B64E776 (void);
// 0x00000224 System.Void Niantic.Lightship.Maps.Proto.Label::set_MinZoom(System.Int32)
extern void Label_set_MinZoom_mDDDB1B5D502C5A4AC709470576903586CF8A8A50 (void);
// 0x00000225 System.Int32 Niantic.Lightship.Maps.Proto.Label::get_MaxZoom()
extern void Label_get_MaxZoom_m9C58D6EB60D384C7CF7096FBCEE1992433832FC3 (void);
// 0x00000226 System.Void Niantic.Lightship.Maps.Proto.Label::set_MaxZoom(System.Int32)
extern void Label_set_MaxZoom_mD096FB92203F8DC894CB88114D406DDD82EB14B1 (void);
// 0x00000227 System.Int32 Niantic.Lightship.Maps.Proto.Label::get_Priority()
extern void Label_get_Priority_mBBFA16A73F1CED39A7D461F94380D286CEC06959 (void);
// 0x00000228 System.Void Niantic.Lightship.Maps.Proto.Label::set_Priority(System.Int32)
extern void Label_set_Priority_mDAF9F6D683703B14097B5E0BC63ECBB20B64FC99 (void);
// 0x00000229 Google.Protobuf.Collections.RepeatedField`1<Niantic.Lightship.Maps.Proto.LabelContentLocalization> Niantic.Lightship.Maps.Proto.Label::get_Localizations()
extern void Label_get_Localizations_mA06312F0C4A2BD617A0B68897E02CED24661BF57 (void);
// 0x0000022A System.Boolean Niantic.Lightship.Maps.Proto.Label::Equals(System.Object)
extern void Label_Equals_m1212A566E54B1260EAEA42C8C4FBD30A104A4A6E (void);
// 0x0000022B System.Boolean Niantic.Lightship.Maps.Proto.Label::Equals(Niantic.Lightship.Maps.Proto.Label)
extern void Label_Equals_m1C63A5F0AF702C2E3880BCEACDFDD0948408A792 (void);
// 0x0000022C System.Int32 Niantic.Lightship.Maps.Proto.Label::GetHashCode()
extern void Label_GetHashCode_m2ACE00FFAC6617CB3418B6672A5795AC872520E8 (void);
// 0x0000022D System.String Niantic.Lightship.Maps.Proto.Label::ToString()
extern void Label_ToString_m918B0653626BDB4AEC229583154784AB7E40A288 (void);
// 0x0000022E System.Void Niantic.Lightship.Maps.Proto.Label::WriteTo(Google.Protobuf.CodedOutputStream)
extern void Label_WriteTo_m12FAB6A35CE5F853BEA5BCF85B4D8B5480426256 (void);
// 0x0000022F System.Int32 Niantic.Lightship.Maps.Proto.Label::CalculateSize()
extern void Label_CalculateSize_m44170A43AE59EE9DD8159B39CCD48E2C7BB8F71A (void);
// 0x00000230 System.Void Niantic.Lightship.Maps.Proto.Label::MergeFrom(Niantic.Lightship.Maps.Proto.Label)
extern void Label_MergeFrom_m7DBB6DB0BEF52A36B97E17FB3345289F03A0E8FE (void);
// 0x00000231 System.Void Niantic.Lightship.Maps.Proto.Label::MergeFrom(Google.Protobuf.CodedInputStream)
extern void Label_MergeFrom_mA5213DD795E598AC5281E54BB18FE711494B0FAF (void);
// 0x00000232 System.Void Niantic.Lightship.Maps.Proto.Label::.cctor()
extern void Label__cctor_m0C4B9E2091154C191AB860904F8D3B99375DA16B (void);
// 0x00000233 System.Void Niantic.Lightship.Maps.Proto.Label/<>c::.cctor()
extern void U3CU3Ec__cctor_mB1EBBCE695E96195B1E560313F434523A2A822D9 (void);
// 0x00000234 System.Void Niantic.Lightship.Maps.Proto.Label/<>c::.ctor()
extern void U3CU3Ec__ctor_mFD820D3F66F8453405671B555CC0F39E312271F8 (void);
// 0x00000235 Niantic.Lightship.Maps.Proto.Label Niantic.Lightship.Maps.Proto.Label/<>c::<.cctor>b__39_0()
extern void U3CU3Ec_U3C_cctorU3Eb__39_0_mEE72B8A09EC8B1A5BCDB2CEB62E9E0DC1814EFC8 (void);
// 0x00000236 Google.Protobuf.MessageParser`1<Niantic.Lightship.Maps.Proto.LabelContentLocalization> Niantic.Lightship.Maps.Proto.LabelContentLocalization::get_Parser()
extern void LabelContentLocalization_get_Parser_mFA7DB1E5BC0F063A70FA994D081D3A459893BEAF (void);
// 0x00000237 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.LabelContentLocalization::get_Descriptor()
extern void LabelContentLocalization_get_Descriptor_m58856735D2CD19A6CDC7CECAC2EE1E1C0C6CEE22 (void);
// 0x00000238 Google.Protobuf.Reflection.MessageDescriptor Niantic.Lightship.Maps.Proto.LabelContentLocalization::pb::Google.Protobuf.IMessage.get_Descriptor()
extern void LabelContentLocalization_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD112A0C235127E2BCFDA06FA7F7DD06BB358DC73 (void);
// 0x00000239 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::.ctor()
extern void LabelContentLocalization__ctor_mC1ADFB2FBA31DB8946CEC83CF9B7F6FFA9C92A6F (void);
// 0x0000023A System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::.ctor(Niantic.Lightship.Maps.Proto.LabelContentLocalization)
extern void LabelContentLocalization__ctor_mA2B30B5301DFD582B29A390D4CFFBFD6A7D22A9A (void);
// 0x0000023B Niantic.Lightship.Maps.Proto.LabelContentLocalization Niantic.Lightship.Maps.Proto.LabelContentLocalization::Clone()
extern void LabelContentLocalization_Clone_mC02A168156AD71D6F7C5DB8D5660C7D68573DE28 (void);
// 0x0000023C System.String Niantic.Lightship.Maps.Proto.LabelContentLocalization::get_Language()
extern void LabelContentLocalization_get_Language_m2EFF742FC9D76C7D77119C1DD7D0EC0D8E4EEAB0 (void);
// 0x0000023D System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::set_Language(System.String)
extern void LabelContentLocalization_set_Language_m0020E5CEAF027688281ACFEB1B8FB4B24D75E6A3 (void);
// 0x0000023E System.String Niantic.Lightship.Maps.Proto.LabelContentLocalization::get_Name()
extern void LabelContentLocalization_get_Name_m72032D76CF181307E97637D1F7A4CC00F1EAA927 (void);
// 0x0000023F System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::set_Name(System.String)
extern void LabelContentLocalization_set_Name_m4D92B8D482339249A64B0014D8CB5AE3882FFDFD (void);
// 0x00000240 System.Boolean Niantic.Lightship.Maps.Proto.LabelContentLocalization::Equals(System.Object)
extern void LabelContentLocalization_Equals_m3ACD40344FA66AEDD509BBE4951316C6FF01E41B (void);
// 0x00000241 System.Boolean Niantic.Lightship.Maps.Proto.LabelContentLocalization::Equals(Niantic.Lightship.Maps.Proto.LabelContentLocalization)
extern void LabelContentLocalization_Equals_m546E97C011EE9453E0B0F8C0EB8014EE03822F2F (void);
// 0x00000242 System.Int32 Niantic.Lightship.Maps.Proto.LabelContentLocalization::GetHashCode()
extern void LabelContentLocalization_GetHashCode_m82EB969F8583C7884FF6B296F96B9401BB5DD3DD (void);
// 0x00000243 System.String Niantic.Lightship.Maps.Proto.LabelContentLocalization::ToString()
extern void LabelContentLocalization_ToString_mAA5E3A0347A6204A181EE44C4146D35694905268 (void);
// 0x00000244 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::WriteTo(Google.Protobuf.CodedOutputStream)
extern void LabelContentLocalization_WriteTo_m97DE842EF4E6BF2D64F1198192ABE4A30F53EB99 (void);
// 0x00000245 System.Int32 Niantic.Lightship.Maps.Proto.LabelContentLocalization::CalculateSize()
extern void LabelContentLocalization_CalculateSize_mCDEB4600D9C9F98F3408BEB0888ADE8F91C9FDAD (void);
// 0x00000246 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::MergeFrom(Niantic.Lightship.Maps.Proto.LabelContentLocalization)
extern void LabelContentLocalization_MergeFrom_mECBD452C4D9D1AE582254622732EC999307D5A84 (void);
// 0x00000247 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::MergeFrom(Google.Protobuf.CodedInputStream)
extern void LabelContentLocalization_MergeFrom_mB9F5151144764FDB1CA9363B27DA5F1B91B85FF9 (void);
// 0x00000248 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization::.cctor()
extern void LabelContentLocalization__cctor_m6EE6157A2DA25E33DAF29541B9E75C54EE425A65 (void);
// 0x00000249 System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization/<>c::.cctor()
extern void U3CU3Ec__cctor_m83D886C48BA21CD9009249339419D68722D1A1C7 (void);
// 0x0000024A System.Void Niantic.Lightship.Maps.Proto.LabelContentLocalization/<>c::.ctor()
extern void U3CU3Ec__ctor_mF9F357C85863D09E55D04AB852141556D9B323CF (void);
// 0x0000024B Niantic.Lightship.Maps.Proto.LabelContentLocalization Niantic.Lightship.Maps.Proto.LabelContentLocalization/<>c::<.cctor>b__29_0()
extern void U3CU3Ec_U3C_cctorU3Eb__29_0_mB480BD0C4C218563D3402C959508F48BFFFB4471 (void);
// 0x0000024C System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Network.NetworkResponse> Niantic.Lightship.Maps.Network.INetworkHandler::RequestAsync(System.String,System.Threading.CancellationToken)
// 0x0000024D System.Net.WebExceptionStatus Niantic.Lightship.Maps.Network.NetworkResponse::get_ExceptionStatus()
extern void NetworkResponse_get_ExceptionStatus_m82A38D059E6A73B991C0A0328975BDC6B73FB144 (void);
// 0x0000024E System.Byte[] Niantic.Lightship.Maps.Network.NetworkResponse::get_ResponseBytes()
extern void NetworkResponse_get_ResponseBytes_mBCFD53736738807933AB52FA6A1026A94AC6A2CA (void);
// 0x0000024F Niantic.Lightship.Maps.Network.StatusCode Niantic.Lightship.Maps.Network.NetworkResponse::get_Status()
extern void NetworkResponse_get_Status_mC1FF62A1881DD7C16B489BB3166D7246F070D6A2 (void);
// 0x00000250 System.Boolean Niantic.Lightship.Maps.Network.NetworkResponse::get_IsHttpSuccess()
extern void NetworkResponse_get_IsHttpSuccess_m8E3B1A580E6305FF4E3A7B32DA9DBF1EDCA98E6D (void);
// 0x00000251 System.Boolean Niantic.Lightship.Maps.Network.NetworkResponse::get_WasCanceled()
extern void NetworkResponse_get_WasCanceled_mDCB5446192F4011B67EF9BF44FEF152A2B3A9E7F (void);
// 0x00000252 System.Void Niantic.Lightship.Maps.Network.NetworkResponse::.ctor(System.Byte[],Niantic.Lightship.Maps.Network.StatusCode,System.Net.WebExceptionStatus)
extern void NetworkResponse__ctor_m46FB125BB83DECEEEA08D272048E86951A6048F3 (void);
// 0x00000253 Niantic.Lightship.Maps.Network.NetworkResponse Niantic.Lightship.Maps.Network.NetworkResponse::FromSuccess(System.Byte[])
extern void NetworkResponse_FromSuccess_mBBF18790DEF707216C4B787D7F34B10D9FB4F8D7 (void);
// 0x00000254 Niantic.Lightship.Maps.Network.NetworkResponse Niantic.Lightship.Maps.Network.NetworkResponse::FromCancellation()
extern void NetworkResponse_FromCancellation_m45930193AD4DADA9A58B2A6F7006654E64A441EB (void);
// 0x00000255 Niantic.Lightship.Maps.Network.NetworkResponse Niantic.Lightship.Maps.Network.NetworkResponse::FromFailure(Niantic.Lightship.Maps.Network.StatusCode,System.Net.WebExceptionStatus)
extern void NetworkResponse_FromFailure_m0C9CEC356EDC858CA57EBAF7C88FBBAD05F9B668 (void);
// 0x00000256 System.Boolean Niantic.Lightship.Maps.Network.StatusCodeExtensions::IsHttpSuccess(Niantic.Lightship.Maps.Network.StatusCode)
extern void StatusCodeExtensions_IsHttpSuccess_m16AD36DB1CF04BC264D4F038BC1680C00E9D5E3C (void);
// 0x00000257 System.Boolean Niantic.Lightship.Maps.Network.StatusCodeExtensions::WasCanceled(Niantic.Lightship.Maps.Network.StatusCode)
extern void StatusCodeExtensions_WasCanceled_m1DBF39A6A9B6FCFAFB8A8C7D02D42ECC2AF78695 (void);
// 0x00000258 System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Network.NetworkResponse> Niantic.Lightship.Maps.Network.UnityNetworkHandler::RequestAsync(System.String,System.Threading.CancellationToken)
extern void UnityNetworkHandler_RequestAsync_m16DB26D9FDA1BE3A8DE149EEDDA1FAD636939548 (void);
// 0x00000259 System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler::InitializeUrlCollection()
extern void UnityNetworkHandler_InitializeUrlCollection_m2ED78B4DCFF3E16CC55063DEA5FA9D554BD89288 (void);
// 0x0000025A System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler::TrackSuccessfullyDownloadedUrl(System.String)
extern void UnityNetworkHandler_TrackSuccessfullyDownloadedUrl_mE294E10267A610F288A053E7A6BFBA301546DBCC (void);
// 0x0000025B System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler::CheckForPreviouslyDownloadedUrl(System.String)
extern void UnityNetworkHandler_CheckForPreviouslyDownloadedUrl_m12CAC7727301088874E784A6F0489ECEC131CC51 (void);
// 0x0000025C System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler::.ctor()
extern void UnityNetworkHandler__ctor_m4C4E7D37D0C5D41A6F7661826481A44234E419BB (void);
// 0x0000025D System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler/<RequestAsync>d__2::MoveNext()
extern void U3CRequestAsyncU3Ed__2_MoveNext_m68E2449020EBC5764243C7572B1630CB85F04925 (void);
// 0x0000025E System.Void Niantic.Lightship.Maps.Network.UnityNetworkHandler/<RequestAsync>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAsyncU3Ed__2_SetStateMachine_mCA6C55F8CEB9874BBB28953D6AA91DD2E7BF328B (void);
// 0x0000025F System.String Niantic.Lightship.Maps.Logging.ChannelLogger::get_ChannelName()
extern void ChannelLogger_get_ChannelName_m13F7701EA88E07F35960F8294571A88975219419 (void);
// 0x00000260 Niantic.Platform.Debugging.LogLevel Niantic.Lightship.Maps.Logging.ChannelLogger::get_MaxLogLevel()
extern void ChannelLogger_get_MaxLogLevel_mD23AB90323D3D22C32B4709C17034FC2AE160CD5 (void);
// 0x00000261 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::set_MaxLogLevel(Niantic.Platform.Debugging.LogLevel)
extern void ChannelLogger_set_MaxLogLevel_m4D81718AD173A93C988E4589AA7F0D9A401ADB10 (void);
// 0x00000262 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::.ctor(System.String,Niantic.Platform.Debugging.LogLevel)
extern void ChannelLogger__ctor_m89F766F334AC44CB62241B93FAB75F92EDE9F089 (void);
// 0x00000263 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Fatal(System.String)
extern void ChannelLogger_Fatal_mE5A3136233928083DBDBA93A6AF15BBA79D5F3C6 (void);
// 0x00000264 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Error(System.String)
extern void ChannelLogger_Error_mDFBB8B587E9B590FCFF5BEF7A77E49664CD52EA9 (void);
// 0x00000265 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Warning(System.String)
extern void ChannelLogger_Warning_mEB8BAB08423445C41D9580B8A49F1D9FBE7FCB14 (void);
// 0x00000266 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Info(System.String)
extern void ChannelLogger_Info_mADEE78CB906037CD1C71E913A0C26A26638933E7 (void);
// 0x00000267 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::Verbose(System.String)
extern void ChannelLogger_Verbose_m97E1DB4B4604B1D38C1D7E36DD09777A5509A823 (void);
// 0x00000268 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::LogTrace(System.String)
extern void ChannelLogger_LogTrace_mB7E12C33A52299466499B91E52F65433F380AAEC (void);
// 0x00000269 System.Void Niantic.Lightship.Maps.Logging.ChannelLogger::LogMessage(Niantic.Platform.Debugging.LogLevel,System.String)
extern void ChannelLogger_LogMessage_m3F17D3B45DD563F19C38851F697C1FC61BC6A88E (void);
// 0x0000026A System.Void Niantic.Lightship.Maps.Logging.Log::.cctor()
extern void Log__cctor_m271E52B3D2A0109EA6CEF184D9752D1CFC27E38E (void);
// 0x0000026B System.Void Niantic.Lightship.Maps.Logging.Log::Trace(System.String)
extern void Log_Trace_m1066237B2C0A84C656B90E8BB3A64F4E1C0E34C1 (void);
// 0x0000026C System.Void Niantic.Lightship.Maps.Logging.Log::Verbose(System.String)
extern void Log_Verbose_mC5F2F7159AD98E36583B10F9F14E79D6798B58C8 (void);
// 0x0000026D System.Void Niantic.Lightship.Maps.Logging.Log::Info(System.String)
extern void Log_Info_mF416CC39E9D1974842520FA9BBB4FD203F3353ED (void);
// 0x0000026E System.Void Niantic.Lightship.Maps.Logging.Log::Warn(System.String)
extern void Log_Warn_mC1837021A8765F048E6DD390EFB2793CCFCBE71A (void);
// 0x0000026F System.Void Niantic.Lightship.Maps.Logging.Log::Error(System.String)
extern void Log_Error_m324502EE1C4FFEA4A65E48787897B6C83CC2516E (void);
// 0x00000270 System.Void Niantic.Lightship.Maps.Logging.Log::Fatal(System.String)
extern void Log_Fatal_m90687494A6F3252AB1AD5FB5A8B9032504E6079D (void);
// 0x00000271 System.Void Niantic.Lightship.Maps.Logging.Log::Message(Niantic.Platform.Debugging.LogLevel,System.String)
extern void Log_Message_m7CD5AC3B8198A7A3754A474A2B5BCF964846607A (void);
// 0x00000272 System.Void Niantic.Lightship.Maps.Logging.Log::TraceIf(System.Boolean,System.String)
extern void Log_TraceIf_m6E42C0D222143451C17BF747595F050DD492D999 (void);
// 0x00000273 System.Void Niantic.Lightship.Maps.Logging.Log::VerboseIf(System.Boolean,System.String)
extern void Log_VerboseIf_m00C0E92B9DC79B71D5E538B15DBEC17A3540A223 (void);
// 0x00000274 System.Void Niantic.Lightship.Maps.Logging.Log::InfoIf(System.Boolean,System.String)
extern void Log_InfoIf_m711B96774DDB6667E0F97909169DE238EF96D49D (void);
// 0x00000275 System.Void Niantic.Lightship.Maps.Logging.Log::WarnIf(System.Boolean,System.String)
extern void Log_WarnIf_m2D51C17668B2BB4C4B248FC2CD560616221DA86A (void);
// 0x00000276 System.Void Niantic.Lightship.Maps.Logging.Log::ErrorIf(System.Boolean,System.String)
extern void Log_ErrorIf_m5BB5BC19F2DE31F99318DA87439606B98768F5D8 (void);
// 0x00000277 System.Void Niantic.Lightship.Maps.Logging.Log::FatalIf(System.Boolean,System.String)
extern void Log_FatalIf_mB3667878ED64C1BBEB51B128FB84A1D00388E089 (void);
// 0x00000278 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsTrue(System.Boolean)
extern void MgAssert_IsTrue_mA713B598F2A3597784B8FC934971764A0D4C5615 (void);
// 0x00000279 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsTrue(System.Boolean,System.String)
extern void MgAssert_IsTrue_mA6CFBCA871E59A6DE74E38701390E2036014825F (void);
// 0x0000027A System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsFalse(System.Boolean)
extern void MgAssert_IsFalse_mAD5F3E695DFEE5891168AA0D4C4ED1103ABDBCDA (void);
// 0x0000027B System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsFalse(System.Boolean,System.String)
extern void MgAssert_IsFalse_m1E21AE7AD51F582E96A817FA454F5F28639368B8 (void);
// 0x0000027C System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsEqual(T,T)
// 0x0000027D System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsEqual(T,T,System.String)
// 0x0000027E System.String Niantic.Lightship.Maps.Logging.MgAssert::GetExpectedString(T,T)
// 0x0000027F System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNotEqual(T,T)
// 0x00000280 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNotEqual(T,T,System.String)
// 0x00000281 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsBetween(System.Int32,System.Int32,System.Int32,System.String)
extern void MgAssert_IsBetween_mBF92F265EA28D3D9FB268A8A004D172D3B56E1BB (void);
// 0x00000282 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsBetween(System.Single,System.Single,System.Single,System.String)
extern void MgAssert_IsBetween_m0A0C1F752C5FCA89C4D070FF4546471C7F34361E (void);
// 0x00000283 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsBetween(System.Double,System.Double,System.Double,System.String)
extern void MgAssert_IsBetween_m9AA115B80B64BDE0B9053A378871F72238B08991 (void);
// 0x00000284 System.String Niantic.Lightship.Maps.Logging.MgAssert::GetIsBetweenMessage(T,T,T,System.String)
// 0x00000285 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNull(T)
// 0x00000286 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNull(T,System.String)
// 0x00000287 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNotNull(T)
// 0x00000288 System.Void Niantic.Lightship.Maps.Logging.MgAssert::IsNotNull(T,System.String)
// 0x00000289 System.Void Niantic.Lightship.Maps.Logging.MgAssert::Fail()
extern void MgAssert_Fail_mED22FC56E5F5779192A5ACE02928A43D2C920676 (void);
// 0x0000028A System.Void Niantic.Lightship.Maps.Logging.MgAssert::Fail(System.String)
extern void MgAssert_Fail_mE775C0CA773F9653934E9C0AB151C3BD1D1D342C (void);
// 0x0000028B System.Void Niantic.Lightship.Maps.Logging.MgAssert::FailInternal(System.String)
extern void MgAssert_FailInternal_m2C7F51CF9CDD2C975B14E6A02EBEA59A807D2F0F (void);
// 0x0000028C System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsTrue(System.Boolean)
extern void MgCheck_IsTrue_mF0F7700A10DB883B2BB1AB0003B22590FAA935CA (void);
// 0x0000028D System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsTrue(System.Boolean,System.String)
extern void MgCheck_IsTrue_m30EAF91D9512B72FEB4EE39846991C7204966C9E (void);
// 0x0000028E System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsFalse(System.Boolean)
extern void MgCheck_IsFalse_mB1787368CAC56B02C0A1E867F43D63993FA3F0DC (void);
// 0x0000028F System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsFalse(System.Boolean,System.String)
extern void MgCheck_IsFalse_mEBCB617AE9526C84463E07AC8E312FC65A260776 (void);
// 0x00000290 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsEqual(T,T)
// 0x00000291 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsEqual(T,T,System.String)
// 0x00000292 System.String Niantic.Lightship.Maps.Logging.MgCheck::GetExpectedString(T,T)
// 0x00000293 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNotEqual(T,T)
// 0x00000294 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNotEqual(T,T,System.String)
// 0x00000295 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsBetween(System.Int32,System.Int32,System.Int32,System.String)
extern void MgCheck_IsBetween_m723D410841A8B07A306079570E1AC39FC2F46CFC (void);
// 0x00000296 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsBetween(System.Single,System.Single,System.Single,System.String)
extern void MgCheck_IsBetween_m3506F9A5715AD9856BBB7F596EAB394266975E40 (void);
// 0x00000297 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsBetween(System.Double,System.Double,System.Double,System.String)
extern void MgCheck_IsBetween_m818D1132DD9B0739BF9997ACA699C0D410E03129 (void);
// 0x00000298 System.String Niantic.Lightship.Maps.Logging.MgCheck::GetIsBetweenMessage(T,T,T,System.String)
// 0x00000299 System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNull(T)
// 0x0000029A System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNull(T,System.String)
// 0x0000029B System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNotNull(T)
// 0x0000029C System.Void Niantic.Lightship.Maps.Logging.MgCheck::IsNotNull(T,System.String)
// 0x0000029D System.Void Niantic.Lightship.Maps.Logging.MgCheck::Fail()
extern void MgCheck_Fail_m5C4472317429E5741FB643CFD681CFEFBB32383A (void);
// 0x0000029E System.Void Niantic.Lightship.Maps.Logging.MgCheck::Fail(System.String)
extern void MgCheck_Fail_m5A738BB1E4F9905FDB0DE8180A7B18345F4C052C (void);
// 0x0000029F System.Void Niantic.Lightship.Maps.Logging.MgCheck::FailInternal(System.String)
extern void MgCheck_FailInternal_m8D9271EEDFFB723AFEDCD0280DB75A449FCA0386 (void);
// 0x000002A0 Niantic.Lightship.Maps.Logging.ErrorState Niantic.Lightship.Maps.Logging.MgDebug::get_BreakOn()
extern void MgDebug_get_BreakOn_m122C97111A3D834CC81EAE1A7FB50C50E3D3E618 (void);
// 0x000002A1 System.Void Niantic.Lightship.Maps.Logging.MgDebug::set_BreakOn(Niantic.Lightship.Maps.Logging.ErrorState)
extern void MgDebug_set_BreakOn_mF4610364D9DE58BBE4B50CF68A54208FCD83CE50 (void);
// 0x000002A2 System.Void Niantic.Lightship.Maps.Logging.MgDebug::OnAssertionFailed()
extern void MgDebug_OnAssertionFailed_mF43F511B0798477F2CAD77E1F90D63485F2414F4 (void);
// 0x000002A3 System.Void Niantic.Lightship.Maps.Logging.MgDebug::OnCheckFailed()
extern void MgDebug_OnCheckFailed_m768A79B5E4B06CD2124450227FB0B65313881D72 (void);
// 0x000002A4 System.Void Niantic.Lightship.Maps.Logging.MgDebug::OnWarningLogged()
extern void MgDebug_OnWarningLogged_m31547D924CC9B9C44978738DA851727501637E42 (void);
// 0x000002A5 System.Void Niantic.Lightship.Maps.Logging.MgDebug::OnErrorLogged()
extern void MgDebug_OnErrorLogged_m69398997B74494193E792E201B3B4CDA4C65CE3E (void);
// 0x000002A6 System.Void Niantic.Lightship.Maps.Logging.MgDebug::OnFatalLogged()
extern void MgDebug_OnFatalLogged_m353A04F8FAB96E8DDC73F6C0D8F9BCEE1E952283 (void);
// 0x000002A7 Niantic.Lightship.Maps.Internal.MapTile Niantic.Lightship.Maps.Internal.IMapTileDecoder::Decode(Niantic.Lightship.Maps.Internal.MapTileData,Niantic.Lightship.Maps.Internal.InternalMapTile)
// 0x000002A8 System.Void Niantic.Lightship.Maps.Internal.IMapTileFetcher::Start()
// 0x000002A9 System.Void Niantic.Lightship.Maps.Internal.IMapTileFetcher::Stop()
// 0x000002AA System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.IMapTileFetcher::RequestTileAsync(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
// 0x000002AB Niantic.Lightship.Maps.Internal.IMapTileFetcher Niantic.Lightship.Maps.Internal.IMapTileProvider::get_Fetcher()
// 0x000002AC Niantic.Lightship.Maps.Internal.IMapTileDecoder Niantic.Lightship.Maps.Internal.IMapTileProvider::get_Decoder()
// 0x000002AD Niantic.Lightship.Maps.Proto.MapProvider/Types/MapType Niantic.Lightship.Maps.Internal.IMapTileProvider::get_MapType()
// 0x000002AE Niantic.Lightship.Maps.Internal.IMapTileProvider Niantic.Lightship.Maps.Internal.IMapTileProviderFactory::CreateInstance(Niantic.Lightship.Maps.Proto.MapProvider)
// 0x000002AF System.Void Niantic.Lightship.Maps.Internal.InternalMapTile::.ctor(System.Int32,System.Int32,Niantic.Lightship.Maps.Coordinates.Vector3D&,System.Double,System.Int32,System.Int32)
extern void InternalMapTile__ctor_m3BF5A69B0F29B917C0CCC390C0D01F1168A22FE9 (void);
// 0x000002B0 System.UInt64 Niantic.Lightship.Maps.Internal.InternalMapTile::get_Id()
extern void InternalMapTile_get_Id_m2B2BC67061AC997A85D3E48FEBE5917F7E41C942 (void);
// 0x000002B1 Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Internal.InternalMapTile::get_Coord()
extern void InternalMapTile_get_Coord_mB9BA968FF7A5F06EE3F9FCA86B93199F67A17E42 (void);
// 0x000002B2 System.Int32 Niantic.Lightship.Maps.Internal.InternalMapTile::get_ZoomLevel()
extern void InternalMapTile_get_ZoomLevel_mCF926CBE7E112DF3FA640D1D3641A19470110916 (void);
// 0x000002B3 System.Int32 Niantic.Lightship.Maps.Internal.InternalMapTile::get_TileX()
extern void InternalMapTile_get_TileX_m3C17240324CE394B5B214F778C3F3971CD7650ED (void);
// 0x000002B4 System.Int32 Niantic.Lightship.Maps.Internal.InternalMapTile::get_TileY()
extern void InternalMapTile_get_TileY_m65A63EA3D5AFC9F273B3273826C2DFDE488F6E83 (void);
// 0x000002B5 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Internal.InternalMapTile::get_Origin()
extern void InternalMapTile_get_Origin_mEC9D337F6428372A25BCFC40E15FADF3D88C0DE4 (void);
// 0x000002B6 System.Double Niantic.Lightship.Maps.Internal.InternalMapTile::get_OriginX()
extern void InternalMapTile_get_OriginX_m80FFD20146C631D45D0E9EF6E4EBCBA955565E03 (void);
// 0x000002B7 System.Double Niantic.Lightship.Maps.Internal.InternalMapTile::get_OriginY()
extern void InternalMapTile_get_OriginY_mE3DAB36C8C9574798423C9D941636835635CCA66 (void);
// 0x000002B8 System.Double Niantic.Lightship.Maps.Internal.InternalMapTile::get_OriginZ()
extern void InternalMapTile_get_OriginZ_m82F0A69280501B0553C28899CBA332C122C25809 (void);
// 0x000002B9 System.Double Niantic.Lightship.Maps.Internal.InternalMapTile::get_Size()
extern void InternalMapTile_get_Size_mFC1BD030B8B73141349ED2BEA991ED321D6991D0 (void);
// 0x000002BA System.Int32 Niantic.Lightship.Maps.Internal.InternalMapTile::get_Epoch()
extern void InternalMapTile_get_Epoch_mC3B417FA514D28607F9E15E1C999A6C190F2B13A (void);
// 0x000002BB System.String Niantic.Lightship.Maps.Internal.InternalMapTile::ToString()
extern void InternalMapTile_ToString_mF8CC0B6D68317EAB2E6D24BE107CA402BF914771 (void);
// 0x000002BC System.String Niantic.Lightship.Maps.Internal.MapContext::get_LabelLanguage()
extern void MapContext_get_LabelLanguage_mA18ED410F10AE7F3D13C82139AEFD88C804BA74F (void);
// 0x000002BD Niantic.Lightship.Maps.Internal.MapContext Niantic.Lightship.Maps.Internal.MapContext::get_Instance()
extern void MapContext_get_Instance_m04C6FD6C907026CD0F2546C08E82CC179C09851C (void);
// 0x000002BE System.Void Niantic.Lightship.Maps.Internal.MapContext::set_Instance(Niantic.Lightship.Maps.Internal.MapContext)
extern void MapContext_set_Instance_m0F60CFE14B4B5F6E9A96B5C0F663816BA53401EC (void);
// 0x000002BF System.Void Niantic.Lightship.Maps.Internal.MapContext::.ctor(Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Internal.Settings.ISettingsService,System.String,System.String,System.String,System.String,System.Version)
extern void MapContext__ctor_m85F93E203DC111E1F1C29C1BBA6491565B8266FF (void);
// 0x000002C0 System.Void Niantic.Lightship.Maps.Internal.MapContext::Initialize(System.String,System.String,System.String,System.String,System.Version,Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Internal.Settings.ISettingsService)
extern void MapContext_Initialize_mABD5028BFF6F02CC1BEB11864D6F0999EC631C80 (void);
// 0x000002C1 System.Void Niantic.Lightship.Maps.Internal.MapContext::Shutdown()
extern void MapContext_Shutdown_mB0E1DD84D4D275B188E5747A0573DC272C226AF9 (void);
// 0x000002C2 System.Void Niantic.Lightship.Maps.Internal.MapContext::OnStart()
extern void MapContext_OnStart_mDD8E6150BC7F78F4A1EE2459E0B4D34AA1F524EF (void);
// 0x000002C3 System.Void Niantic.Lightship.Maps.Internal.MapContext::OnStop()
extern void MapContext_OnStop_mE3EB13AD24890FA91FFD159B67463F972AF98473 (void);
// 0x000002C4 System.Boolean Niantic.Lightship.Maps.Internal.MapContext::IsIdle()
extern void MapContext_IsIdle_m56F288DE1CED6EBB4FF415576F7C8EABFCE677AE (void);
// 0x000002C5 System.Int32 Niantic.Lightship.Maps.Internal.MapContext::AddView(Niantic.Lightship.Maps.ViewPoint&)
extern void MapContext_AddView_m0A01DE1166C14397F97A75C48BCA97627469BA61 (void);
// 0x000002C6 System.Boolean Niantic.Lightship.Maps.Internal.MapContext::SetView(System.Int32,Niantic.Lightship.Maps.ViewPoint&)
extern void MapContext_SetView_m2EB34195FF52D5EFA6D1FE663275913BB304F46B (void);
// 0x000002C7 Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.Internal.MapContext::GetView(System.Int32)
extern void MapContext_GetView_mE3A61CB164480EB51D1F405DB2A2B2B039EB5A4E (void);
// 0x000002C8 System.Void Niantic.Lightship.Maps.Internal.MapContext::UpdateTiles(Niantic.Lightship.Maps.ITileStreamServiceInternal)
extern void MapContext_UpdateTiles_m66690EFF83B4FF1842136E3B8C9DCA7CC4D070D9 (void);
// 0x000002C9 System.Void Niantic.Lightship.Maps.Internal.MapContext::Reset()
extern void MapContext_Reset_m01A6E278E39A6D810B62A8A72CA17A1B55FD67F2 (void);
// 0x000002CA System.Int32 Niantic.Lightship.Maps.Internal.MapContext::RemoveView(System.Int32)
extern void MapContext_RemoveView_m5368559D1B75446EFC727E87DD9F807677AF9BCD (void);
// 0x000002CB System.Int32 Niantic.Lightship.Maps.Internal.MapContext::GetViewCount()
extern void MapContext_GetViewCount_m7200085E0579AE12A7031612EA90DCCC44C0CAE9 (void);
// 0x000002CC System.Int32 Niantic.Lightship.Maps.Internal.MapContext::GetMaxViewCount()
extern void MapContext_GetMaxViewCount_m90C4A03A789D27643D6FCBDEB5F320CA23463678 (void);
// 0x000002CD System.Void Niantic.Lightship.Maps.Internal.MapContext::ResetNextViewId()
extern void MapContext_ResetNextViewId_m9048BE3EBCCD68542E20794DB9680A66FBBA58DF (void);
// 0x000002CE System.Int32 Niantic.Lightship.Maps.Internal.MapContext::NextViewId()
extern void MapContext_NextViewId_mBE7888E6818D984D381E6F5FFBC59F9B3EB71B04 (void);
// 0x000002CF System.Void Niantic.Lightship.Maps.Internal.MapTile::.ctor(System.UInt64)
extern void MapTile__ctor_m1F79788168B4330686DAA6DD2A7B7813B5260B69 (void);
// 0x000002D0 System.UInt64 Niantic.Lightship.Maps.Internal.MapTile::get_Id()
extern void MapTile_get_Id_m13F3CCBDB3ADE36A03C5ABFFF3E5015D504EF529 (void);
// 0x000002D1 UnityEngine.Vector3 Niantic.Lightship.Maps.Internal.MapTile::get_Origin()
extern void MapTile_get_Origin_mBE3366BF778EC73C09A9C975501FD4E723B61BB0 (void);
// 0x000002D2 System.Void Niantic.Lightship.Maps.Internal.MapTile::set_Origin(UnityEngine.Vector3)
extern void MapTile_set_Origin_m60501170F3825DD7F8D0F17543DCA3C16453BC2C (void);
// 0x000002D3 System.Single Niantic.Lightship.Maps.Internal.MapTile::get_Size()
extern void MapTile_get_Size_mA6D494C612A7598F850D60E20E0318F1683BCC28 (void);
// 0x000002D4 System.Void Niantic.Lightship.Maps.Internal.MapTile::set_Size(System.Single)
extern void MapTile_set_Size_m17ED8C40E90F0DF87A807FDF9278536DE98CD792 (void);
// 0x000002D5 System.Int32 Niantic.Lightship.Maps.Internal.MapTile::get_Level()
extern void MapTile_get_Level_m8362B786C28F27C997CD4F6B97C987172C204F17 (void);
// 0x000002D6 System.Void Niantic.Lightship.Maps.Internal.MapTile::set_Level(System.Int32)
extern void MapTile_set_Level_m9C2A43941949641D08F80A2CB8C6CB77FF0675D6 (void);
// 0x000002D7 System.String Niantic.Lightship.Maps.Internal.MapTile::get_TileCoordinateString()
extern void MapTile_get_TileCoordinateString_mA061CB43FCB512C27107B6CF6754C5A4DD8C4B70 (void);
// 0x000002D8 System.Void Niantic.Lightship.Maps.Internal.MapTile::ThrowIfReceivingData(System.String)
extern void MapTile_ThrowIfReceivingData_m619F98BEA614FC8DE783D458D767ACED1E08C2CD (void);
// 0x000002D9 System.Void Niantic.Lightship.Maps.Internal.MapTile::ThrowIfNotReceivingData(System.String)
extern void MapTile_ThrowIfNotReceivingData_m24E3879945084546ED1686EFA5B1AA1D4413484C (void);
// 0x000002DA System.Void Niantic.Lightship.Maps.Internal.MapTile::ThrowIfTileDataIsNotEmpty(System.String)
extern void MapTile_ThrowIfTileDataIsNotEmpty_m8FDAD4F7262AD72CC31ED8FBF7CBC9ACE1C8A852 (void);
// 0x000002DB System.Void Niantic.Lightship.Maps.Internal.MapTile::ThrowIf(System.Boolean,System.String)
extern void MapTile_ThrowIf_m2BE71A2FA78F2BE1B672FB07FCF34443D466D979 (void);
// 0x000002DC System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Internal.MapTile::GetTileDataOfType(Niantic.Lightship.Maps.Proto.LayerKind)
// 0x000002DD System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Internal.MapTile::GetTileDataOfType(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
// 0x000002DE System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.Internal.MapTile::GetTileData(Niantic.Lightship.Maps.Proto.LayerKind)
extern void MapTile_GetTileData_m0ED5A37DCAAC8BB9632B20EE33301E167EF498FA (void);
// 0x000002DF System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.Internal.MapTile::GetTileData(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
extern void MapTile_GetTileData_m50998915B6CFFA0015831C19FF03E92742CD221B (void);
// 0x000002E0 System.Void Niantic.Lightship.Maps.Internal.MapTile::BeginReceiveData()
extern void MapTile_BeginReceiveData_mF47C051B03BC8DABBBC3B5B081C3943EFF69F2D9 (void);
// 0x000002E1 System.Void Niantic.Lightship.Maps.Internal.MapTile::EndReceiveData()
extern void MapTile_EndReceiveData_mDD3B44689CA1327E6B1F300352CCC7CA1FA9D950 (void);
// 0x000002E2 System.Void Niantic.Lightship.Maps.Internal.MapTile::SetMapPosition(UnityEngine.Vector3,System.Single,System.Int32)
extern void MapTile_SetMapPosition_mCBEC58AE945BE452E3BDCEC5FD6487370637CA67 (void);
// 0x000002E3 System.Void Niantic.Lightship.Maps.Internal.MapTile::AddFeature(T)
// 0x000002E4 System.Void Niantic.Lightship.Maps.Internal.IMapTileCache::Initialize()
// 0x000002E5 System.Void Niantic.Lightship.Maps.Internal.IMapTileCache::Shutdown()
// 0x000002E6 System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.IMapTileCache::RequestTileAsync(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
// 0x000002E7 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.IMapTileCache::AddTilesAsync(System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData>)
// 0x000002E8 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::.ctor(System.String,System.String,System.Int64,System.Boolean)
extern void MapTileCache__ctor_m04AA025B4A8FA7429044F1E7D67C963A9B58DB83 (void);
// 0x000002E9 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::Dispose()
extern void MapTileCache_Dispose_m4E30227304BA55CCF5B7434603660FCBEB899F83 (void);
// 0x000002EA System.Void Niantic.Lightship.Maps.Internal.MapTileCache::Initialize()
extern void MapTileCache_Initialize_m0378E378AF343566661F8BFE435272CBF78610E8 (void);
// 0x000002EB System.Void Niantic.Lightship.Maps.Internal.MapTileCache::Shutdown()
extern void MapTileCache_Shutdown_mCB6B711A720BF066C061D9CF0DC5409CC57977EB (void);
// 0x000002EC System.Void Niantic.Lightship.Maps.Internal.MapTileCache::EnsureCacheInitialized()
extern void MapTileCache_EnsureCacheInitialized_m2B2E235A4E11AC1E2C8D914536F3ED70D25D6A5E (void);
// 0x000002ED System.Void Niantic.Lightship.Maps.Internal.MapTileCache::RunThread()
extern void MapTileCache_RunThread_mB5F66F086ACB129F34719D7696E1497753F68C33 (void);
// 0x000002EE System.Void Niantic.Lightship.Maps.Internal.MapTileCache::ProcessReadRequests()
extern void MapTileCache_ProcessReadRequests_m470E88993AF6AEF69EF9A813E482404B3777E38D (void);
// 0x000002EF System.Void Niantic.Lightship.Maps.Internal.MapTileCache::ProcessWriteRequests()
extern void MapTileCache_ProcessWriteRequests_m0E240542C3DBF33A665847518E42681C447B3845 (void);
// 0x000002F0 System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.MapTileCache::RequestTileAsync(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
extern void MapTileCache_RequestTileAsync_m28138AAFF0F1B26C4CED92697F935BE54986F264 (void);
// 0x000002F1 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.MapTileCache::AddTileAsync(Niantic.Lightship.Maps.Internal.MapTileData)
extern void MapTileCache_AddTileAsync_m2C87DE4D6DDA3999F08768BA09E785A1323B64DD (void);
// 0x000002F2 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.MapTileCache::AddTilesAsync(System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData>)
extern void MapTileCache_AddTilesAsync_m90D7D6BD0E6E70F0F3A5ED36494D12D0DC3BB2FE (void);
// 0x000002F3 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::QueueTileForAdd(Niantic.Lightship.Maps.Internal.MapTileData)
extern void MapTileCache_QueueTileForAdd_m9C770FA9ECF98579EBB8192EE621CD66060ED4AD (void);
// 0x000002F4 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::QueueTileForAdd(Niantic.Lightship.Maps.Internal.MapTileData,System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>)
extern void MapTileCache_QueueTileForAdd_mB5B09E35D08649EC66BB011366358852D1458DEB (void);
// 0x000002F5 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::QueueTilesForAdd(System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData>,System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>)
extern void MapTileCache_QueueTilesForAdd_mD82E29DF856B02C18BE3D01EE9FF124CE510DC74 (void);
// 0x000002F6 System.Void Niantic.Lightship.Maps.Internal.MapTileCache::<ProcessWriteRequests>g__InsertOrAssign|20_0(Niantic.Lightship.Maps.Internal.MapTileData)
extern void MapTileCache_U3CProcessWriteRequestsU3Eg__InsertOrAssignU7C20_0_mB996FBD54408A2CF1657C0AAC27DFD571FCB4DC0 (void);
// 0x000002F7 System.Void Niantic.Lightship.Maps.Internal.MapTileCache/TileReadRequest::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.Tasks.TaskCompletionSource`1<Niantic.Lightship.Maps.Internal.MapTileData>)
extern void TileReadRequest__ctor_m7F85198B56474344EB8C6DDAFF7DB592D65A2927 (void);
// 0x000002F8 Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Internal.MapTileCache/TileReadRequest::get_Coord()
extern void TileReadRequest_get_Coord_m73C7A028EB277F175021F4915D6FED5CD155B367 (void);
// 0x000002F9 System.Int32 Niantic.Lightship.Maps.Internal.MapTileCache/TileReadRequest::get_Epoch()
extern void TileReadRequest_get_Epoch_m9CAAFF03225696441E1C310EA05A8122DB24AF42 (void);
// 0x000002FA System.Threading.Tasks.TaskCompletionSource`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.MapTileCache/TileReadRequest::get_TaskCompletion()
extern void TileReadRequest_get_TaskCompletion_mF7F3DD1419C6CCD3153ACF83C5577D2FEC750B22 (void);
// 0x000002FB System.Void Niantic.Lightship.Maps.Internal.MapTileCache/TileWriteRequest::.ctor(System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>)
extern void TileWriteRequest__ctor_m4D8933FB9775DC89225D6F0416627D9FBAF0C381 (void);
// 0x000002FC System.Void Niantic.Lightship.Maps.Internal.MapTileCache/TileWriteRequest::.ctor(Niantic.Lightship.Maps.Internal.MapTileData,System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>)
extern void TileWriteRequest__ctor_mBA13C63F9F4B236DEB582722BCDA922F9322DC48 (void);
// 0x000002FD Niantic.Lightship.Maps.Internal.MapTileData Niantic.Lightship.Maps.Internal.MapTileCache/TileWriteRequest::get_TileData()
extern void TileWriteRequest_get_TileData_m9F6E098103AD5FA5A37B5F44B19FC2BBE798D1A8 (void);
// 0x000002FE System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Niantic.Lightship.Maps.Internal.MapTileCache/TileWriteRequest::get_TaskCompletion()
extern void TileWriteRequest_get_TaskCompletion_mD30D1FF7D15E1925895149E75D87C16430731099 (void);
// 0x000002FF System.Void Niantic.Lightship.Maps.Internal.MapTileCache/GroupedTileWriteRequest::.ctor(System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData>,System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>)
extern void GroupedTileWriteRequest__ctor_m9973307FB679437CA4C22A2EF6F8E7EA8761B92E (void);
// 0x00000300 System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.MapTileCache/GroupedTileWriteRequest::get_TileData()
extern void GroupedTileWriteRequest_get_TileData_m233AA767DA5FC9963DC3EA9F27260B75666E0070 (void);
// 0x00000301 Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Internal.MapTileData::get_Coord()
extern void MapTileData_get_Coord_m562457D6F15B4780D06D77F38F32DA11639C05FD (void);
// 0x00000302 System.Int32 Niantic.Lightship.Maps.Internal.MapTileData::get_Epoch()
extern void MapTileData_get_Epoch_m85BB3D838D2390FFB784432717AE99DAF9120C0E (void);
// 0x00000303 Niantic.Lightship.Maps.Internal.TileData Niantic.Lightship.Maps.Internal.MapTileData::get_Data()
extern void MapTileData_get_Data_mC4AE7D93BE5891FE68770429B76429D8BAFE63DF (void);
// 0x00000304 System.Void Niantic.Lightship.Maps.Internal.MapTileData::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,Niantic.Lightship.Maps.Internal.TileData)
extern void MapTileData__ctor_m5B343960AB4F1D14520E76B345EA1FF880884132 (void);
// 0x00000305 System.Int32 Niantic.Lightship.Maps.Internal.MapTileManager::get_MapTileCount()
extern void MapTileManager_get_MapTileCount_m8BEA10EE3C984B426DF1039BF47B8D9AEA31834A (void);
// 0x00000306 System.Void Niantic.Lightship.Maps.Internal.MapTileManager::.ctor(Niantic.Lightship.Maps.Internal.MapTileProcessor,Niantic.Lightship.Maps.Internal.MapTilePipelineManager,Niantic.Lightship.Maps.Internal.Settings.ISettingsService,System.Version)
extern void MapTileManager__ctor_m93199A14356C6A7F1B935AF17F5F901840D849D7 (void);
// 0x00000307 Niantic.Lightship.Maps.Internal.MapTileManager Niantic.Lightship.Maps.Internal.MapTileManager::Make(Niantic.Lightship.Maps.Internal.MapTileProcessor,Niantic.Lightship.Maps.Internal.MapTilePipelineManager,Niantic.Lightship.Maps.Internal.Settings.ISettingsService,System.Version)
extern void MapTileManager_Make_m01FFD42437AB5A60A047855572475295FF4B7CEE (void);
// 0x00000308 System.Boolean Niantic.Lightship.Maps.Internal.MapTileManager::IsIdle()
extern void MapTileManager_IsIdle_mD1C8A653397C85321E3CAE5D83C8AEE63921159E (void);
// 0x00000309 System.Void Niantic.Lightship.Maps.Internal.MapTileManager::ClearUpdatedTiles(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings,Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings,System.Collections.Generic.HashSet`1<System.String>)
extern void MapTileManager_ClearUpdatedTiles_mE3E869A1932BBC5AC24741603FEC7DEEA08F3DFA (void);
// 0x0000030A System.Void Niantic.Lightship.Maps.Internal.MapTileManager::Reset()
extern void MapTileManager_Reset_m17D4DCDD071BA6E49636A63BF301DFDFA9132A52 (void);
// 0x0000030B System.Void Niantic.Lightship.Maps.Internal.MapTileManager::Start()
extern void MapTileManager_Start_m01BB7C175CF80E21CB3A57652F2DBE6225617702 (void);
// 0x0000030C System.Void Niantic.Lightship.Maps.Internal.MapTileManager::Stop()
extern void MapTileManager_Stop_mD699BFC2840E8EF21EF73131A5DF66BA026BDB42 (void);
// 0x0000030D System.Boolean Niantic.Lightship.Maps.Internal.MapTileManager::SetView(System.Collections.Generic.Dictionary`2<System.Int32,Niantic.Lightship.Maps.ViewPoint>)
extern void MapTileManager_SetView_m1B34A0A7D167C3253FC64E93383A651BB70E5AB9 (void);
// 0x0000030E System.Void Niantic.Lightship.Maps.Internal.MapTileManager::HandleViewpoint(System.Collections.Generic.KeyValuePair`2<System.Int32,Niantic.Lightship.Maps.ViewPoint>)
extern void MapTileManager_HandleViewpoint_mB2CFEA0F1D463379F249B255B3098B162EFC2AA4 (void);
// 0x0000030F System.Boolean Niantic.Lightship.Maps.Internal.MapTileManager::EnqueueTilesForProcessing()
extern void MapTileManager_EnqueueTilesForProcessing_m16609495C2671281C927EA877BB8238658E0C5E7 (void);
// 0x00000310 System.Int32 Niantic.Lightship.Maps.Internal.MapTileManager::CompareToCenterViewPoint(Niantic.Lightship.Maps.Internal.InternalMapTile,Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void MapTileManager_CompareToCenterViewPoint_mE62B8B9489BEB841AB493EEA1897B390637F8AB8 (void);
// 0x00000311 System.Int64 Niantic.Lightship.Maps.Internal.MapTileManager::GetDistanceSquared(System.Int32,System.Int32,System.Int32,System.Int32)
extern void MapTileManager_GetDistanceSquared_m828B3AD34756F7062A5695FAE994D1240673D4D4 (void);
// 0x00000312 System.Void Niantic.Lightship.Maps.Internal.MapTileManager::SyncReadyTiles(Niantic.Lightship.Maps.ITileStreamServiceInternal)
extern void MapTileManager_SyncReadyTiles_mAF21CAD6547C16380226D7972EDC2D90135D0AE2 (void);
// 0x00000313 System.Void Niantic.Lightship.Maps.Internal.MapTileManager::RemoveView(System.Int32)
extern void MapTileManager_RemoveView_m4037E30831C91C2296165A6A7C4DFA741592AB50 (void);
// 0x00000314 System.Double Niantic.Lightship.Maps.Internal.MapTileManager::ComputeTileZoomLevel(Niantic.Lightship.Maps.ViewPoint&,System.Double,System.Int32,System.Int32)
extern void MapTileManager_ComputeTileZoomLevel_mF4D85B6F7FCBED863CD00D93FE273F356AA032C0 (void);
// 0x00000315 System.Void Niantic.Lightship.Maps.Internal.MapTileManager::OnSettingsChanged(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings)
extern void MapTileManager_OnSettingsChanged_mC5F7460AA9543504C401F583ECC07F79A0DDA569 (void);
// 0x00000316 System.Double Niantic.Lightship.Maps.Internal.MapTileManager::DesiredTileSizeM(System.Double,System.Int32)
extern void MapTileManager_DesiredTileSizeM_m4DD70737C117C2FCBB219365274AE145837DDD42 (void);
// 0x00000317 System.Void Niantic.Lightship.Maps.Internal.MapTilePipeline::.ctor()
extern void MapTilePipeline__ctor_mF8E9A7D3406A45A2597D145F15047B4160919765 (void);
// 0x00000318 System.Void Niantic.Lightship.Maps.Internal.MapTilePipeline::.ctor(Niantic.Lightship.Maps.Internal.IMapTileProvider,Niantic.Lightship.Maps.Proto.MapArea)
extern void MapTilePipeline__ctor_m42B3A323E14D3F1F62B5A23DB503070C9011FF7A (void);
// 0x00000319 Niantic.Lightship.Maps.Internal.InternalMapTile Niantic.Lightship.Maps.Internal.MapTilePipeline::CreateTile(System.Int32,System.Int32,Niantic.Lightship.Maps.Coordinates.Vector3D&,System.Double,System.Int32)
extern void MapTilePipeline_CreateTile_m2283F421DD95BBA87B73CCEB93BD1C0F706F0859 (void);
// 0x0000031A System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.MapTilePipeline::RequestTileAsync(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
extern void MapTilePipeline_RequestTileAsync_m3D1F825677DFBA9E48FC422E984499AC677E99F0 (void);
// 0x0000031B Niantic.Lightship.Maps.Internal.MapTile Niantic.Lightship.Maps.Internal.MapTilePipeline::Decode(Niantic.Lightship.Maps.Internal.MapTileData,Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void MapTilePipeline_Decode_m628CE216DF6B7988BEECE5CFA1E4C848D30A9B56 (void);
// 0x0000031C System.Boolean Niantic.Lightship.Maps.Internal.MapTilePipeline::IsValid()
extern void MapTilePipeline_IsValid_m498EA006BA54D9A9AED3C5F794D72E3E848336A2 (void);
// 0x0000031D Niantic.Lightship.Maps.Internal.IMapTileProvider Niantic.Lightship.Maps.Internal.MapTilePipeline::Provider()
extern void MapTilePipeline_Provider_m78CA31F94F06CDFF93E3D074B853C168AFFD9BED (void);
// 0x0000031E Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings Niantic.Lightship.Maps.Internal.MapTilePipelineManager::get_MaptileSettings()
extern void MapTilePipelineManager_get_MaptileSettings_m9D63DA768727FDFCD6351E70D503EDA9E6A4654C (void);
// 0x0000031F System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::set_MaptileSettings(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings)
extern void MapTilePipelineManager_set_MaptileSettings_m360E5CF567E476EFBECF177BFDFA668581D3A47E (void);
// 0x00000320 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::.ctor(Niantic.Lightship.Maps.Internal.IMapTileProviderFactory,System.Version)
extern void MapTilePipelineManager__ctor_m2C06BF00936EB8777FC718C5D691C56876A9A29C (void);
// 0x00000321 Niantic.Lightship.Maps.Internal.MapTilePipeline Niantic.Lightship.Maps.Internal.MapTilePipelineManager::GetMapTilePipeline(System.Int32,System.Int32,System.Int32)
extern void MapTilePipelineManager_GetMapTilePipeline_m8CD42AF8B87B161D3018159F1EA31D4ABCFDE6E5 (void);
// 0x00000322 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::StartAllFetchers()
extern void MapTilePipelineManager_StartAllFetchers_m251AFE8CDA4A41165CB25A3C614422E0C20F8612 (void);
// 0x00000323 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::StopAllFetchers()
extern void MapTilePipelineManager_StopAllFetchers_mF121ACA9E350E1022186D0A46FFE6935AB15F567 (void);
// 0x00000324 System.Int32 Niantic.Lightship.Maps.Internal.MapTilePipelineManager::GetMinZoomLevel()
extern void MapTilePipelineManager_GetMinZoomLevel_m9255AC5E63142DCC9A3FA22C6BC6E948B41B981D (void);
// 0x00000325 System.Int32 Niantic.Lightship.Maps.Internal.MapTilePipelineManager::GetMaxZoomLevel()
extern void MapTilePipelineManager_GetMaxZoomLevel_m98C53F6F9A5CFC65E8EAE4D5E7837135AD10D60D (void);
// 0x00000326 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::CalculateMinAndMaxZoomLevels()
extern void MapTilePipelineManager_CalculateMinAndMaxZoomLevels_m45AEC7E779AF29168B01AD4B837BC8412E39031F (void);
// 0x00000327 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::Reset()
extern void MapTilePipelineManager_Reset_m110B17D7D8872457548D47026F280267075F7C28 (void);
// 0x00000328 System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager::OnSettingsEvent(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings)
extern void MapTilePipelineManager_OnSettingsEvent_mE3C4DFC55C5B3E331BC52E2ACB3425FA5C142FBC (void);
// 0x00000329 Niantic.Lightship.Maps.Internal.IMapTileProvider Niantic.Lightship.Maps.Internal.MapTilePipelineManager::CreateNewMapTileProvider(System.String,Niantic.Lightship.Maps.Proto.MapProvider)
extern void MapTilePipelineManager_CreateNewMapTileProvider_mA854D393F6B3DDAE29D457377A870D7DF3771389 (void);
// 0x0000032A System.Void Niantic.Lightship.Maps.Internal.MapTilePipelineManager/ProviderDetails::.ctor(Niantic.Lightship.Maps.Proto.MapProvider,Niantic.Lightship.Maps.Internal.IMapTileProvider)
extern void ProviderDetails__ctor_m59C26FF814B9C07E185FB77C726A789F566E1638 (void);
// 0x0000032B System.Boolean Niantic.Lightship.Maps.Internal.MapTilePipelineManager/ProviderDetails::Matches(Niantic.Lightship.Maps.Proto.MapProvider)
extern void ProviderDetails_Matches_m3F98F81136E12B322D1E328A04CB8872307ACF6D (void);
// 0x0000032C System.Boolean Niantic.Lightship.Maps.Internal.MapTileProcessor::IsIdle()
extern void MapTileProcessor_IsIdle_m7C5EC4BF642783E00FD50E6C6D5F3F2AC759D189 (void);
// 0x0000032D System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::ClearPendingFetches()
extern void MapTileProcessor_ClearPendingFetches_mF4288D1A13BBE2C9E6D13FC26E90141C18ADA7E0 (void);
// 0x0000032E System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::CancelProcessing(Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void MapTileProcessor_CancelProcessing_mC8F6060E1F7EE939F075F4399BC0ACAE1CE71B76 (void);
// 0x0000032F System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::Start()
extern void MapTileProcessor_Start_m72232200AC9778DE9092B8AEB455F4D0486858F5 (void);
// 0x00000330 System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::Stop()
extern void MapTileProcessor_Stop_m96C914943F630A38361754A886FD309623DA0EB4 (void);
// 0x00000331 System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::Reset()
extern void MapTileProcessor_Reset_m28A66BDD86B71F1063334A7482A65CDEE104DC2E (void);
// 0x00000332 System.Boolean Niantic.Lightship.Maps.Internal.MapTileProcessor::IsQueuedForProcessing(Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void MapTileProcessor_IsQueuedForProcessing_m9A3A1897801EC0CE76588E1B77504BA99B60BDAB (void);
// 0x00000333 System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::QueueForProcessing(Niantic.Lightship.Maps.Internal.InternalMapTile,Niantic.Lightship.Maps.Internal.MapTilePipeline)
extern void MapTileProcessor_QueueForProcessing_mB44F20CEBA4D7200C2536E54F2D89FEC69B29A44 (void);
// 0x00000334 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.MapTileProcessor::FetchTileAsync(System.UInt64,Niantic.Lightship.Maps.Internal.InternalMapTile,Niantic.Lightship.Maps.Internal.MapTilePipeline,System.Threading.CancellationToken)
extern void MapTileProcessor_FetchTileAsync_mD544DB305EE0D2658B67B755A1D88E913AFC755B (void);
// 0x00000335 System.Boolean Niantic.Lightship.Maps.Internal.MapTileProcessor::GetAndClearReadyTiles(System.Collections.Generic.Dictionary`2<System.UInt64,Niantic.Lightship.Maps.Internal.MapTile>)
extern void MapTileProcessor_GetAndClearReadyTiles_m4B2932E9FB8BAE6A3D985019998EE4ECE696818E (void);
// 0x00000336 System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor::.ctor()
extern void MapTileProcessor__ctor_mC91A5B65366E61EFAA6799CBB0D34A57BC1CF7AA (void);
// 0x00000337 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::get_Task()
extern void FetchContext_get_Task_mFA94108FE8B9A119B89499A4A44E022C430778F4 (void);
// 0x00000338 System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::set_Task(System.Threading.Tasks.Task)
extern void FetchContext_set_Task_mE95ECDE5476D0D47141264C1306A7BBDFD4CE8A7 (void);
// 0x00000339 System.Threading.CancellationTokenSource Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::get_CancellationSource()
extern void FetchContext_get_CancellationSource_m6C6068E73D6A5BFA04B339C189AD8E382B448268 (void);
// 0x0000033A System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::Cancel()
extern void FetchContext_Cancel_mE5FF22E8DFC4874FE94BB085A33D9EC6629BFBAF (void);
// 0x0000033B System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::Dispose()
extern void FetchContext_Dispose_mDE6D058718A12EC77A70632DB9C3A547FEF6157C (void);
// 0x0000033C System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/FetchContext::.ctor()
extern void FetchContext__ctor_m00F70B6C3FAFD107FA29944355A67E1F09B2D73F (void);
// 0x0000033D System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/<FetchTileAsync>d__13::MoveNext()
extern void U3CFetchTileAsyncU3Ed__13_MoveNext_mA2C1926CD9A81511C04A7AD6E922228DDCA8716B (void);
// 0x0000033E System.Void Niantic.Lightship.Maps.Internal.MapTileProcessor/<FetchTileAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFetchTileAsyncU3Ed__13_SetStateMachine_m0232599F56D21716768FD272937B7E70AE9147E8 (void);
// 0x0000033F System.Void Niantic.Lightship.Maps.Internal.MapTileProviderFactory::.ctor(Niantic.Lightship.Maps.Network.INetworkHandler,System.String)
extern void MapTileProviderFactory__ctor_m00F881FBFF5E59031E6844C2992FDE99361EF5A8 (void);
// 0x00000340 Niantic.Lightship.Maps.Internal.IMapTileProvider Niantic.Lightship.Maps.Internal.MapTileProviderFactory::CreateInstance(Niantic.Lightship.Maps.Proto.MapProvider)
extern void MapTileProviderFactory_CreateInstance_m4137A06C6DB35E69A5800376D7653389FC5AFE59 (void);
// 0x00000341 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::add_MapTileDataReady(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
extern void MapTileStreamService_add_MapTileDataReady_m268B193D9170D6ACD4F251CB5E83CD621EC8EE60 (void);
// 0x00000342 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::remove_MapTileDataReady(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
extern void MapTileStreamService_remove_MapTileDataReady_m785655C885B845B298A05D2C486F50AC80042F44 (void);
// 0x00000343 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::add_MapTileDeleted(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
extern void MapTileStreamService_add_MapTileDeleted_m4DA9D453FAB38029CAFB91D44EC3C0939FB67BE5 (void);
// 0x00000344 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::remove_MapTileDeleted(System.Action`1<Niantic.Lightship.Maps.IMapTile>)
extern void MapTileStreamService_remove_MapTileDeleted_m0047BC61E9AF917E38D1C358C076C21CE91AE810 (void);
// 0x00000345 System.Collections.Generic.IReadOnlyCollection`1<Niantic.Lightship.Maps.IMapTile> Niantic.Lightship.Maps.Internal.MapTileStreamService::get_ActiveTiles()
extern void MapTileStreamService_get_ActiveTiles_m824DEF3CCDA645E5FB323C80A40280D4B9F64A8C (void);
// 0x00000346 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::AddReadyTile(Niantic.Lightship.Maps.IMapTile)
extern void MapTileStreamService_AddReadyTile_m9054095B36A708B5E78E2FB3784283ACF0787FCA (void);
// 0x00000347 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::DeleteTile(System.UInt64)
extern void MapTileStreamService_DeleteTile_m7421D1F1E2060F3A0777AE6DAFB043A85257A85E (void);
// 0x00000348 System.Void Niantic.Lightship.Maps.Internal.MapTileStreamService::.ctor()
extern void MapTileStreamService__ctor_m2702EFCEC319EAB40B45DC7DEC57304222991AD3 (void);
// 0x00000349 System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::get_MainViewId()
extern void MapViewManager_get_MainViewId_mFE1E9AA6A66AEEFEEF7A58B252284E0442D1DB60 (void);
// 0x0000034A System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::get_InvalidViewId()
extern void MapViewManager_get_InvalidViewId_m92C9BC0A9637F056200C751B5E1132D1B69D62E6 (void);
// 0x0000034B System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::get_MaxViews()
extern void MapViewManager_get_MaxViews_mFD273888E34372D0060A556DF91AA19595E36A2E (void);
// 0x0000034C System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::get_NumViews()
extern void MapViewManager_get_NumViews_mA8D9E53C19FB95817231039EA7C52F95FC26F794 (void);
// 0x0000034D System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::AddView(Niantic.Lightship.Maps.ViewPoint&)
extern void MapViewManager_AddView_m19C3F161094BDD06AC287B342F02552751A0840E (void);
// 0x0000034E Niantic.Lightship.Maps.ViewPoint Niantic.Lightship.Maps.Internal.MapViewManager::GetView(System.Int32)
extern void MapViewManager_GetView_mFB4C042E974E641E8F7F7C38D8BDACF4B2B5F9F2 (void);
// 0x0000034F System.Void Niantic.Lightship.Maps.Internal.MapViewManager::RemoveView(System.Int32)
extern void MapViewManager_RemoveView_m8B4340E83CB48F11231B962E8F42EF3755352A3D (void);
// 0x00000350 System.Boolean Niantic.Lightship.Maps.Internal.MapViewManager::SetView(System.Int32,Niantic.Lightship.Maps.ViewPoint&)
extern void MapViewManager_SetView_mC8626951297265F86EAAAD745B3DE62F323BE4F3 (void);
// 0x00000351 System.Void Niantic.Lightship.Maps.Internal.MapViewManager::.ctor()
extern void MapViewManager__ctor_m1A432F915200DC437D175B0AEC5495B78F164AB0 (void);
// 0x00000352 System.Int32 Niantic.Lightship.Maps.Internal.MapViewManager::Niantic.Lightship.Maps.IMapViewManager.AddView(Niantic.Lightship.Maps.ViewPoint& modreq(System.Runtime.InteropServices.InAttribute))
extern void MapViewManager_Niantic_Lightship_Maps_IMapViewManager_AddView_m246D526CE8E301A0DF7EF5801FA7E72EEDF97ECC (void);
// 0x00000353 System.Boolean Niantic.Lightship.Maps.Internal.MapViewManager::Niantic.Lightship.Maps.IMapViewManager.SetView(System.Int32,Niantic.Lightship.Maps.ViewPoint& modreq(System.Runtime.InteropServices.InAttribute))
extern void MapViewManager_Niantic_Lightship_Maps_IMapViewManager_SetView_m1EE55963CEA23FF884FC7638C3A2C992926D61E5 (void);
// 0x00000354 System.Void Niantic.Lightship.Maps.Internal.TileData::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileData__ctor_m923C63D8ED53867845D4A4A81ADC4CAEEC10D62F (void);
// 0x00000355 System.Boolean Niantic.Lightship.Maps.Internal.TileDataStore::get_IsEmpty()
extern void TileDataStore_get_IsEmpty_m8EE0EBCF506AB83FC373DCBC65DA9D0599D89CE9 (void);
// 0x00000356 System.Void Niantic.Lightship.Maps.Internal.TileDataStore::AddFeature(T)
// 0x00000357 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Internal.TileDataStore::GetFeaturesOfType(Niantic.Lightship.Maps.Proto.LayerKind)
// 0x00000358 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Internal.TileDataStore::GetFeaturesOfType(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
// 0x00000359 System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.Internal.TileDataStore::GetFeatures(Niantic.Lightship.Maps.Proto.LayerKind)
extern void TileDataStore_GetFeatures_m8F06CA0E4817FE310EB1B0B48471377FA1D20A13 (void);
// 0x0000035A System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Features.IMapTileFeature> Niantic.Lightship.Maps.Internal.TileDataStore::GetFeatures(Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Proto.FeatureKind)
extern void TileDataStore_GetFeatures_mC77C1C1AF298C8CC3E3E3D7C1B39BE1B58152B14 (void);
// 0x0000035B System.Void Niantic.Lightship.Maps.Internal.TileDataStore::.ctor()
extern void TileDataStore__ctor_m3CE5F7168A787BEAF15E6500DB13A8ED4B10155C (void);
// 0x0000035C System.Void Niantic.Lightship.Maps.Internal.TileUrlGeneratorBase::.ctor(System.String,System.String)
extern void TileUrlGeneratorBase__ctor_mE769B790E8A269C3C1EE7E7089714CFDBD2257F1 (void);
// 0x0000035D System.Collections.Generic.HashSet`1<Niantic.Lightship.Maps.Internal.InternalMapTile> Niantic.Lightship.Maps.Internal.ViewPointMapTileData::get_MapTiles()
extern void ViewPointMapTileData_get_MapTiles_m70B1255998B7179E8A6D0237054F62E2F481DEC4 (void);
// 0x0000035E System.Int32 Niantic.Lightship.Maps.Internal.ViewPointMapTileData::get_LatTile()
extern void ViewPointMapTileData_get_LatTile_m8546D4B54BEEDD34723C918117B934ACE113C402 (void);
// 0x0000035F System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::set_LatTile(System.Int32)
extern void ViewPointMapTileData_set_LatTile_m0F13EC5A34B4CB43985A98758A76BAAA9AF10470 (void);
// 0x00000360 System.Int32 Niantic.Lightship.Maps.Internal.ViewPointMapTileData::get_LngTile()
extern void ViewPointMapTileData_get_LngTile_m613B53D7DF9ED4AC00659660C47134F409BDE201 (void);
// 0x00000361 System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::set_LngTile(System.Int32)
extern void ViewPointMapTileData_set_LngTile_mE35FBD2C4B0534588F813CADC1DC2CF9B0BFE35F (void);
// 0x00000362 System.Int32 Niantic.Lightship.Maps.Internal.ViewPointMapTileData::get_LosTile()
extern void ViewPointMapTileData_get_LosTile_m646DAB32160D458666823BC62D364380130AD829 (void);
// 0x00000363 System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::set_LosTile(System.Int32)
extern void ViewPointMapTileData_set_LosTile_mF92486C0D23A821BD5109357DC30CA85BC2918E0 (void);
// 0x00000364 System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::.ctor(System.Int32,System.Int32,System.Int32)
extern void ViewPointMapTileData__ctor_m072F84EE0244154D82052108651E4F9EA0CD38D4 (void);
// 0x00000365 System.Boolean Niantic.Lightship.Maps.Internal.ViewPointMapTileData::HasChanged(System.Int32,System.Int32,System.Int32)
extern void ViewPointMapTileData_HasChanged_mBD6CFB7BFFADFBB14C12170068921611083E2E8D (void);
// 0x00000366 System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::UpdateData(System.Int32,System.Int32,System.Int32)
extern void ViewPointMapTileData_UpdateData_m56ED71C0A180EFEACC7606D9089FCD9E0B280B59 (void);
// 0x00000367 System.Void Niantic.Lightship.Maps.Internal.ViewPointMapTileData::AddTile(Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void ViewPointMapTileData_AddTile_mCC6A5C52D3FB8E670D4DD2B97575BBFA8A72BAAC (void);
// 0x00000368 System.UInt16 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.UInt16)
extern void ByteSwapper_Swap_mC1FE94B580E16A4251A8DD95DA8FC0ECAB92520B (void);
// 0x00000369 System.UInt32 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.UInt32)
extern void ByteSwapper_Swap_m1B12163D9D98147AD43B7FFDCD4F511841FF704D (void);
// 0x0000036A System.UInt64 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.UInt64)
extern void ByteSwapper_Swap_mE78E563292C2BA702463DEEC531B4A25B31A3D65 (void);
// 0x0000036B System.Int16 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.Int16)
extern void ByteSwapper_Swap_m788118AD6325750E757599B2307117341BD73F83 (void);
// 0x0000036C System.Int32 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.Int32)
extern void ByteSwapper_Swap_m70F250A2DEEE4269D3B2EDC9A92EE06356E86641 (void);
// 0x0000036D System.Int64 Niantic.Lightship.Maps.Internal.Utilities.ByteSwapper::Swap(System.Int64)
extern void ByteSwapper_Swap_m687104682CC3738994ACF753F836E1BE0DF62CC7 (void);
// 0x0000036E System.Void Niantic.Lightship.Maps.Internal.Utilities.DisposableScope::.ctor(System.Action)
extern void DisposableScope__ctor_mCB14C97E18F34E3AE157699935A9ED90BBDA0F6A (void);
// 0x0000036F System.Void Niantic.Lightship.Maps.Internal.Utilities.DisposableScope::Dispose()
extern void DisposableScope_Dispose_mBABBC0C940C03A796540DE2E752991E1BA63ED45 (void);
// 0x00000370 System.Boolean Niantic.Lightship.Maps.Internal.Utilities.FlagUtil::IsFlagSet(System.Int32,System.Int32)
extern void FlagUtil_IsFlagSet_m027362639B7501954C2C8336F973605F1BB074B4 (void);
// 0x00000371 System.Boolean Niantic.Lightship.Maps.Internal.Utilities.FlagUtil::IsFlagSet(System.UInt32,System.Int32)
extern void FlagUtil_IsFlagSet_m3A8CC24B20C04AFEB280DC6B3511D69DF2CD9491 (void);
// 0x00000372 System.Double Niantic.Lightship.Maps.Internal.Utilities.MapUtils::WrapLongitudeDegrees(System.Double)
extern void MapUtils_WrapLongitudeDegrees_m9D194DE15B82634C06EE78F6CC8A33BE05D8320C (void);
// 0x00000373 System.Double Niantic.Lightship.Maps.Internal.Utilities.MapUtils::WrapLongitudeDegrees(System.Double,System.Double,System.Double)
extern void MapUtils_WrapLongitudeDegrees_m376F62D3E453EC1E59AA865065326A9EAAD47177 (void);
// 0x00000374 System.Int32 Niantic.Lightship.Maps.Internal.Utilities.MapUtils::WrapLongitudeCoord(System.Int32,System.Int32,System.Int32)
extern void MapUtils_WrapLongitudeCoord_m19E128937D74AA306DCECA31C73F9B5A336C76DF (void);
// 0x00000375 System.Double Niantic.Lightship.Maps.Internal.Utilities.MapUtils::WrapLongitudeCoord(System.Double,System.Double,System.Double)
extern void MapUtils_WrapLongitudeCoord_m93517677A7BCED80815D0F1263B64795044E2313 (void);
// 0x00000376 System.Double Niantic.Lightship.Maps.Internal.Utilities.MapUtils::ClampLatitude(System.Double,System.Double,System.Double)
extern void MapUtils_ClampLatitude_mE0A5A99021842716CE7D320B81DC572A2EE2021D (void);
// 0x00000377 System.Int32 Niantic.Lightship.Maps.Internal.Utilities.MapUtils::ClampLatitude(System.Int32,System.Int32,System.Int32)
extern void MapUtils_ClampLatitude_mB7A5698746B35BB9D5FEAC66808615B411387849 (void);
// 0x00000378 System.Void Niantic.Lightship.Maps.Internal.Utilities.MapUtils::CheckZoomLevel(System.Int32)
extern void MapUtils_CheckZoomLevel_m1EED5CC8F67C8A785D27A29C2E447AF382E61D00 (void);
// 0x00000379 System.Void Niantic.Lightship.Maps.Internal.Utilities.MapUtils::AssertZoomLevelIsValid(System.Int32)
extern void MapUtils_AssertZoomLevelIsValid_m957C1CA4B20551A87912DB6537591DA576E9B008 (void);
// 0x0000037A System.Void Niantic.Lightship.Maps.Internal.Utilities.MapUtils::CheckLatitude(System.Double,System.Double,System.Double)
extern void MapUtils_CheckLatitude_m938B0EA9642FEFEA2D141792B9E2BE7A7C7CD3E7 (void);
// 0x0000037B System.Void Niantic.Lightship.Maps.Internal.Utilities.MapUtils::CheckLongitude(System.Double)
extern void MapUtils_CheckLongitude_m20E1D52F60B8F8DB0F692DBC44C277EBC15CDAD2 (void);
// 0x0000037C System.Void Niantic.Lightship.Maps.Internal.Utilities.MapUtils::CheckLongitude(System.Double,System.Double,System.Double)
extern void MapUtils_CheckLongitude_m74E3FAC9550598FAE1A1392B1497F18C9C2983C2 (void);
// 0x0000037D Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Internal.Utilities.MapUtils::ToPlatformCoordinateSystem(System.Double,System.Double,System.Double)
extern void MapUtils_ToPlatformCoordinateSystem_mF3AB2F01ACA7FC7C84F3497F701EFDD1ADD1D8DD (void);
// 0x0000037E UnityEngine.Vector3 Niantic.Lightship.Maps.Internal.Utilities.MapUtils::ToPlatformCoordinateSystem(System.Single,System.Single,System.Single)
extern void MapUtils_ToPlatformCoordinateSystem_mF2906E20B06B68E8917D5CCA78142FDB41E26FEC (void);
// 0x0000037F System.Void Niantic.Lightship.Maps.Internal.Utilities.RingTileCoord::.ctor(System.Int32,System.Int32,System.Int32)
extern void RingTileCoord__ctor_m9D3152A2070A9186E8110604302BA6B965F7ECBA (void);
// 0x00000380 System.Collections.Generic.IReadOnlyList`1<Niantic.Lightship.Maps.Internal.Utilities.RingTileCoord> Niantic.Lightship.Maps.Internal.Utilities.RingTileGenerator::GenerateRingTiles()
extern void RingTileGenerator_GenerateRingTiles_m3645A2F14C4041401160D5E4086520E968E9EC43 (void);
// 0x00000381 System.Void Niantic.Lightship.Maps.Internal.Utilities.RingTileGenerator::GenerateNeighborRing(System.Int32,System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.Utilities.RingTileCoord>)
extern void RingTileGenerator_GenerateNeighborRing_m8924DBC456CFAB520F8682CA054FFA7DC6AC4166 (void);
// 0x00000382 System.Int32 Niantic.Lightship.Maps.Internal.Utilities.RingTileGenerator::TileSign(System.Int32)
extern void RingTileGenerator_TileSign_m177A8A6B1567C1A1C502EA55EF3B3C16607FD1B4 (void);
// 0x00000383 System.Int32 Niantic.Lightship.Maps.Internal.Utilities.RingTileGenerator::TileDist(System.Int32,System.Int32)
extern void RingTileGenerator_TileDist_m96C9B5980711B66224537E75F1CEFBE94F3CB6C0 (void);
// 0x00000384 System.String Niantic.Lightship.Maps.Internal.Utilities.StringUtils::FormatPrintf(System.String,System.Object[])
extern void StringUtils_FormatPrintf_m7A260096008E6D2C2467942A611615077DC940A2 (void);
// 0x00000385 System.Void Niantic.Lightship.Maps.Internal.Utilities.StringUtils/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_mD70F16EF47B99697B41C7935DF061066C396BCB8 (void);
// 0x00000386 System.String Niantic.Lightship.Maps.Internal.Utilities.StringUtils/<>c__DisplayClass0_0::<FormatPrintf>b__0(System.Text.RegularExpressions.Match)
extern void U3CU3Ec__DisplayClass0_0_U3CFormatPrintfU3Eb__0_m23D596691E0B115EF6EA27758F9FB2C12A08F31F (void);
// 0x00000387 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Internal.Utilities.UnitConverter::GetPosition(System.Double,System.Double,System.Double)
extern void UnitConverter_GetPosition_m654A1AA8063E24A074DAA36914A681713E866DBF (void);
// 0x00000388 System.Double Niantic.Lightship.Maps.Internal.Utilities.UnitConverter::MetersToMapUnits(System.Double,System.Double)
extern void UnitConverter_MetersToMapUnits_m557885F3F23512B7ABDC446CC55C285179B88D72 (void);
// 0x00000389 System.Int64 Niantic.Lightship.Maps.Internal.Storage.CacheRecord::get_Key()
extern void CacheRecord_get_Key_m9639E4001D7B33AC4C897002360397A2560CF9EB (void);
// 0x0000038A System.Int64 Niantic.Lightship.Maps.Internal.Storage.CacheRecord::get_Cost()
extern void CacheRecord_get_Cost_mF5420A76651B2B8D72D49E763A6F7B815EAD6D32 (void);
// 0x0000038B System.Byte[] Niantic.Lightship.Maps.Internal.Storage.CacheRecord::get_TileData()
extern void CacheRecord_get_TileData_m5FCBB1E71C36B8B4A8B8F7B653609D674A4B8A63 (void);
// 0x0000038C System.Byte[] Niantic.Lightship.Maps.Internal.Storage.CacheRecord::get_LabelData()
extern void CacheRecord_get_LabelData_m3DC4F62B0771965AA5E7A1C0439F9797A5F96FF0 (void);
// 0x0000038D System.Int64 Niantic.Lightship.Maps.Internal.Storage.CacheRecord::get_Epoch()
extern void CacheRecord_get_Epoch_m3EFB1FC7D64327BB112E02836613A8A7352426A3 (void);
// 0x0000038E System.Void Niantic.Lightship.Maps.Internal.Storage.CacheRecord::.ctor(System.Int64,System.Byte[],System.Byte[],System.Int64,System.Int64)
extern void CacheRecord__ctor_mF71584FBA15CF10A2FC728B3645658685330E779 (void);
// 0x0000038F System.Boolean Niantic.Lightship.Maps.Internal.Storage.CacheRecord::Equals(System.Object)
extern void CacheRecord_Equals_mEEE8C74E80ABCAB5040312D28FCCD2B45A0B1623 (void);
// 0x00000390 System.Boolean Niantic.Lightship.Maps.Internal.Storage.CacheRecord::Equals(Niantic.Lightship.Maps.Internal.Storage.CacheRecord)
extern void CacheRecord_Equals_m88D899837BAD2B01B2512EE93AB35FEA7F622015 (void);
// 0x00000391 System.Int32 Niantic.Lightship.Maps.Internal.Storage.CacheRecord::GetHashCode()
extern void CacheRecord_GetHashCode_m748058CC2E94702FB549714B43ADB189C2F74B61 (void);
// 0x00000392 Niantic.Lightship.Maps.Internal.MapTileData Niantic.Lightship.Maps.Internal.Storage.CacheRecord::ToMapTileData(Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void CacheRecord_ToMapTileData_mE5FA813C5FCA371043D06785B3DF5278D4A8CB50 (void);
// 0x00000393 Niantic.Lightship.Maps.Internal.Storage.CacheRecord Niantic.Lightship.Maps.Internal.Storage.CacheRecord::FromMapTileData(Niantic.Lightship.Maps.Internal.MapTileData)
extern void CacheRecord_FromMapTileData_m1407167F34F845868ED7CACF3D1ACCCCF6F4CEE5 (void);
// 0x00000394 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::Dispose()
extern void LruDatabase_Dispose_m8F7C56F9DE8CAE834C85B4C5655DEF8A6E5CECB9 (void);
// 0x00000395 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::DisposeConnection()
extern void LruDatabase_DisposeConnection_mCBA3DA42106C2BB3A41F614B59D9292D5F10FC31 (void);
// 0x00000396 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::OpenDatabase(System.String)
extern void LruDatabase_OpenDatabase_m8C7BA56E350D2D8A6C8C1D33D7689C54D2641C49 (void);
// 0x00000397 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::TrySQLiteCall(System.Action)
extern void LruDatabase_TrySQLiteCall_m2E0F03E5381B13BBE99F23A10D3CEAF8033A4725 (void);
// 0x00000398 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::SetItem(Niantic.Lightship.Maps.Internal.Storage.CacheRecord)
extern void LruDatabase_SetItem_mB4D134380F25683B4EA09F30E0F49C147B774562 (void);
// 0x00000399 Niantic.Lightship.Maps.Internal.Storage.CacheRecord Niantic.Lightship.Maps.Internal.Storage.LruDatabase::FindItem(System.Int64)
extern void LruDatabase_FindItem_m8B70B871144804DC637495BBB272D3F0A9581413 (void);
// 0x0000039A System.Int32 Niantic.Lightship.Maps.Internal.Storage.LruDatabase::Size()
extern void LruDatabase_Size_mFCC7137D82AAD5533F3FEC5488EF7172969F0BC7 (void);
// 0x0000039B System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::Clear()
extern void LruDatabase_Clear_m9D7C04D120973A5A02331540EFE27ED9B22DC97B (void);
// 0x0000039C System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::BeginTransaction()
extern void LruDatabase_BeginTransaction_m6D49BD4AECE06357B87908D2D31D031BA3CC65B8 (void);
// 0x0000039D System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::CommitTransaction()
extern void LruDatabase_CommitTransaction_m74D0C3A556798292EDD0ED7A44D0AC2A7F880353 (void);
// 0x0000039E System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::CompactDatabase()
extern void LruDatabase_CompactDatabase_m77B09B934704592AC43582584CC49CF070640FA6 (void);
// 0x0000039F System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::UpdateLastAccess(System.Int64)
extern void LruDatabase_UpdateLastAccess_m97C54CB1732FE7FE40C2800FCB10CC8643EC21DD (void);
// 0x000003A0 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::VisitRowsLru(System.Func`2<System.Int64,System.Boolean>)
extern void LruDatabase_VisitRowsLru_m41245E56CBE0621C0741309C3B6A96C79EDAAAC8 (void);
// 0x000003A1 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::DeleteRowsLru(System.Int32)
extern void LruDatabase_DeleteRowsLru_m2353B83F55CD3E21A4E509A68DDE321B971653D3 (void);
// 0x000003A2 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::UpdateEpochLastFetched(System.Int64,System.DateTime)
extern void LruDatabase_UpdateEpochLastFetched_m38ECE0D802A234140353CA33BE65E744BF9F7EC1 (void);
// 0x000003A3 System.Int64 Niantic.Lightship.Maps.Internal.Storage.LruDatabase::GetTotalCost()
extern void LruDatabase_GetTotalCost_m5FFC6CAB9C3258122433CEC3277004B1D480DAE4 (void);
// 0x000003A4 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::CreateDatabase()
extern void LruDatabase_CreateDatabase_m43F837D587DDB1D65D550F1F91675D345557F39E (void);
// 0x000003A5 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::TableExists(System.String)
extern void LruDatabase_TableExists_m414D89D7F5F46B4FC270C46FF6C529AA7D5CC321 (void);
// 0x000003A6 System.Int32 Niantic.Lightship.Maps.Internal.Storage.LruDatabase::Version()
extern void LruDatabase_Version_mE3A2E7B85AB947EB1F96B1BB4E63A50305548FD9 (void);
// 0x000003A7 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::SetVersion(System.Int32)
extern void LruDatabase_SetVersion_m1B9E4F301D55B53DA902598EED6BD309118CB181 (void);
// 0x000003A8 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::PrepareInitialStatements()
extern void LruDatabase_PrepareInitialStatements_m0B295BBE3789278B1CC3BE4CB541354C9DF93AFA (void);
// 0x000003A9 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::PrepareVersionStatements()
extern void LruDatabase_PrepareVersionStatements_m5782B74FF443580B40643FE96FFBD7C2A0B78E6F (void);
// 0x000003AA System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDatabase::PrepareStatements()
extern void LruDatabase_PrepareStatements_m916E0F1D492BB7133691C3D55BEBAADF7F8A4781 (void);
// 0x000003AB System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::.ctor()
extern void LruDatabase__ctor_m54CA2B0A089D87A15D1E6D0258032ADCE7E68AE5 (void);
// 0x000003AC System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<OpenDatabase>b__21_0()
extern void LruDatabase_U3COpenDatabaseU3Eb__21_0_mDE4BC2A75C7AFA2C570F6FF0E2B93454FCE23CD7 (void);
// 0x000003AD System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<CreateDatabase>b__35_0()
extern void LruDatabase_U3CCreateDatabaseU3Eb__35_0_mCBBA8D0931302A842D34F763C127891D82013B8C (void);
// 0x000003AE System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<CreateDatabase>b__35_1()
extern void LruDatabase_U3CCreateDatabaseU3Eb__35_1_mCAF3C5C31D16D8166A22451FAB89D8722B93BAE6 (void);
// 0x000003AF System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<CreateDatabase>b__35_2()
extern void LruDatabase_U3CCreateDatabaseU3Eb__35_2_mA5E410B6DD18C52471DDB19C188B520A52AB23A2 (void);
// 0x000003B0 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<PrepareInitialStatements>b__39_0()
extern void LruDatabase_U3CPrepareInitialStatementsU3Eb__39_0_mB3EAE7749D31D4966EFB42F00FC137A2F8FDC113 (void);
// 0x000003B1 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<PrepareVersionStatements>b__40_0()
extern void LruDatabase_U3CPrepareVersionStatementsU3Eb__40_0_mC051A34CFBDF6E5915D99732DA394F7E5D8C5DE2 (void);
// 0x000003B2 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase::<PrepareStatements>b__41_0()
extern void LruDatabase_U3CPrepareStatementsU3Eb__41_0_m5328248244BDE70DDC31514DE8D4FEFF3AD7E54F (void);
// 0x000003B3 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_mB29C6CD6456E659B3EE26F2D389CD5BDDA93D172 (void);
// 0x000003B4 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass23_0::<SetItem>b__0()
extern void U3CU3Ec__DisplayClass23_0_U3CSetItemU3Eb__0_m6810E0D3C1D02EA09AFB122D77C3B85485AD21E5 (void);
// 0x000003B5 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m139F0FA92588F6E790CF8C6ABC4B0A171BE9C13F (void);
// 0x000003B6 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass24_0::<FindItem>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CFindItemU3Eb__0_m0FF32538180A909DA193963BE29783DD9A84660C (void);
// 0x000003B7 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_mFA980D500EEB3AADF1DE88FE6AE42BC2D596A587 (void);
// 0x000003B8 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass25_0::<Size>b__0()
extern void U3CU3Ec__DisplayClass25_0_U3CSizeU3Eb__0_m8F056591DBE764C43E897B3BD183E049D0235446 (void);
// 0x000003B9 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_m8CA69652E846C6E425ECB69BDC8B2CEDF77AA299 (void);
// 0x000003BA System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass30_0::<UpdateLastAccess>b__0()
extern void U3CU3Ec__DisplayClass30_0_U3CUpdateLastAccessU3Eb__0_m074C49A80F50CFCAED0A2CF24F3115B49F05E676 (void);
// 0x000003BB System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass32_0::.ctor()
extern void U3CU3Ec__DisplayClass32_0__ctor_m8E6190A2FA34020DFC309E139031AFFB9C662DDB (void);
// 0x000003BC System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass32_0::<DeleteRowsLru>b__0()
extern void U3CU3Ec__DisplayClass32_0_U3CDeleteRowsLruU3Eb__0_mF67AEBEC1C0E34DE5C00FAEF2B5DD21CFFB02B63 (void);
// 0x000003BD System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_m6525472F03B35BF86407ECDE77C8FC44F67740F5 (void);
// 0x000003BE System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass33_0::<UpdateEpochLastFetched>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CUpdateEpochLastFetchedU3Eb__0_m7DF0B9CC9DBA245B7172FC6FB7E1F1CB73DDADDD (void);
// 0x000003BF System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass33_0::<UpdateEpochLastFetched>b__1()
extern void U3CU3Ec__DisplayClass33_0_U3CUpdateEpochLastFetchedU3Eb__1_m18F4AB2312B6DAC6FA654085275D86BBEB54CA16 (void);
// 0x000003C0 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_m6916C77F953A274AAD1D61AEE65AE07ABE947BEA (void);
// 0x000003C1 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass34_0::<GetTotalCost>b__0()
extern void U3CU3Ec__DisplayClass34_0_U3CGetTotalCostU3Eb__0_m258241273CC0B1C5F609CEA14F0B04922A6B518A (void);
// 0x000003C2 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass36_0::.ctor()
extern void U3CU3Ec__DisplayClass36_0__ctor_mBFCB6563102114B83C178963B15E5D07CEDCFCFA (void);
// 0x000003C3 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass36_0::<TableExists>b__0()
extern void U3CU3Ec__DisplayClass36_0_U3CTableExistsU3Eb__0_m2AE1129DC0CA6059825807D15BB27C8DA8AE4776 (void);
// 0x000003C4 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_m04A7AEE228668C4AB1B981C82F75B20323D6A4DD (void);
// 0x000003C5 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDatabase/<>c__DisplayClass38_0::<SetVersion>b__0()
extern void U3CU3Ec__DisplayClass38_0_U3CSetVersionU3Eb__0_m016AEE6E21C2BDE9FD56FDC1DAFD8287C2A221A8 (void);
// 0x000003C6 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::.ctor(System.String,System.String,System.Int64,System.Boolean)
extern void LruDiskCache__ctor_m64D74C1537768CFB60EBF67D2D41F65EEB578765 (void);
// 0x000003C7 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::EnsureDatabaseInitialization()
extern void LruDiskCache_EnsureDatabaseInitialization_m52918CCD6A000CE39FCE7FC4A9A86A9A5286243E (void);
// 0x000003C8 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::Begin()
extern void LruDiskCache_Begin_mEF0FB67F59611D5A2B41CFE040782A7804A8D0DF (void);
// 0x000003C9 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::Commit()
extern void LruDiskCache_Commit_m8CA5774746A6DBDAC2BD9AA9B8AFCC410E6BCCD6 (void);
// 0x000003CA System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::Trim(System.Int64)
extern void LruDiskCache_Trim_m166EDDCD50EEB209A7EB21BB24ED51AD39A01E20 (void);
// 0x000003CB System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::InsertOrAssign(Niantic.Lightship.Maps.Internal.Storage.CacheRecord)
extern void LruDiskCache_InsertOrAssign_m1BAC1EC90AA1E78E535879973C612D3751AC69D2 (void);
// 0x000003CC Niantic.Lightship.Maps.Internal.Storage.CacheRecord Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::get_Item(System.Int64)
extern void LruDiskCache_get_Item_mA24019583955AE4D628DEC1599006C93352A72E8 (void);
// 0x000003CD Niantic.Lightship.Maps.Internal.Storage.CacheRecord Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::At(System.Int64)
extern void LruDiskCache_At_m9106EC53F0BF70D0CCDCFBB27D99D6D3681FFD71 (void);
// 0x000003CE System.Int32 Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::Size()
extern void LruDiskCache_Size_mAE6EE733CD3C970A2EAAC68D7604AB9EE675E863 (void);
// 0x000003CF System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::Clear()
extern void LruDiskCache_Clear_m025D39961638973E07DF2613CA212D9AEB126B2A (void);
// 0x000003D0 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::ClearFile()
extern void LruDiskCache_ClearFile_m0342CB5E0C6260C4BC28B9B859EB908F5241246D (void);
// 0x000003D1 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDiskCache::OpenDatabase(System.Boolean)
extern void LruDiskCache_OpenDatabase_m843C136BFD8E76469BFDBF81268B34161C74D731 (void);
// 0x000003D2 System.Void Niantic.Lightship.Maps.Internal.Storage.LruDiskCache/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_mE8426329DBCA3BA1DAD851AE61C4BB481016F8A0 (void);
// 0x000003D3 System.Boolean Niantic.Lightship.Maps.Internal.Storage.LruDiskCache/<>c__DisplayClass9_0::<Trim>b__0(System.Int64)
extern void U3CU3Ec__DisplayClass9_0_U3CTrimU3Eb__0_m1963855A2871ACDD1FB7B52CBF43F0C3ADA2D391 (void);
// 0x000003D4 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::.ctor(System.String)
extern void SQLiteDatabase__ctor_mAAA3D51A841515077AB35D5E7441FE5173F91C0D (void);
// 0x000003D5 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::FromFilePath(System.String)
extern void SQLiteDatabase_FromFilePath_m673E3819834044E7AB4B588526224F7AC20261FA (void);
// 0x000003D6 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::OpenConnection()
extern void SQLiteDatabase_OpenConnection_mB3892EF2EC77441134907EA7F9F2965E10970E94 (void);
// 0x000003D7 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::Dispose()
extern void SQLiteDatabase_Dispose_m874D676FBE98E53E8E0824201197576A11D5E05E (void);
// 0x000003D8 System.String Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::GetLastError()
extern void SQLiteDatabase_GetLastError_mCC598D087FA6BF3B3721C8D53EB93E8C33EE0FD5 (void);
// 0x000003D9 System.String Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::GetErrorString(Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode)
extern void SQLiteDatabase_GetErrorString_m003DCA04EBA951B77DC699C78F90F83E15BE64B9 (void);
// 0x000003DA Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::PrepareStatement(System.String)
extern void SQLiteDatabase_PrepareStatement_mFE93A14BEF44FA725B8B79A6A6DCB7E9B5A0C40C (void);
// 0x000003DB System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::ExecuteNonQuery(System.String)
extern void SQLiteDatabase_ExecuteNonQuery_m7CBF2FDB0E4209C6FCE533E207FE9C9F3F37AB0E (void);
// 0x000003DC System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteDatabase::ExecuteNonQuery(System.String,System.Object[])
extern void SQLiteDatabase_ExecuteNonQuery_m08FAB7B523AF723BA5E0BC0CBB65AC83E368E2E4 (void);
// 0x000003DD System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteException::.ctor(System.String)
extern void SQLiteException__ctor_m34383893AB7C9639189CEEC60BFE0DC754C4CC01 (void);
// 0x000003DE System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteException::ThrowOnError(Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode,System.String)
extern void SQLiteException_ThrowOnError_m4C9EBF79AFD8BBB23FE814C18C320CE1B3F0E098 (void);
// 0x000003DF System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteException::ThrowOnError(Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode,System.String,System.Object[])
extern void SQLiteException_ThrowOnError_m63B17F92A17C8F1DBC125A2B423E9CC0015C04FC (void);
// 0x000003E0 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_open(System.String,System.IntPtr&)
extern void SQLiteNative_sqlite3_open_m17446A63003C231CBFACEB4975739B5713250D01 (void);
// 0x000003E1 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_errmsg(System.IntPtr)
extern void SQLiteNative_sqlite3_errmsg_m480F2BA9B94D2491122129FE521615941A87584A (void);
// 0x000003E2 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_errstr(Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode)
extern void SQLiteNative_sqlite3_errstr_m9B27DE8B3280BC222C9484AC2033A642A61734F7 (void);
// 0x000003E3 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_step(System.IntPtr)
extern void SQLiteNative_sqlite3_step_m350F7135376AA6730E19FE11D16A80818D0A2C54 (void);
// 0x000003E4 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_reset(System.IntPtr)
extern void SQLiteNative_sqlite3_reset_m7AA78E831169B1007CF80503B2A6A6B1AAB7E0E1 (void);
// 0x000003E5 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_clear_bindings(System.IntPtr)
extern void SQLiteNative_sqlite3_clear_bindings_m5071C46263DCB6B4D820B763FB00EC4444D809A5 (void);
// 0x000003E6 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_prepare_v2(System.IntPtr,System.String,System.Int32,System.IntPtr&,System.IntPtr)
extern void SQLiteNative_sqlite3_prepare_v2_mC505304E2B6199D1ACABDB130726F49660395F11 (void);
// 0x000003E7 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_libversion()
extern void SQLiteNative_sqlite3_libversion_m23ECF644D384ED0F6371C1623153B0C668243067 (void);
// 0x000003E8 System.Int32 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_libversion_number()
extern void SQLiteNative_sqlite3_libversion_number_m0459EF3591A3A6C80A9FCCBBB261FB7A6E856FE2 (void);
// 0x000003E9 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_db_filename(System.IntPtr,System.Byte[])
extern void SQLiteNative_sqlite3_db_filename_m9898CB57B41BB91E8E0DB33B202960F540AC7B88 (void);
// 0x000003EA Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_close(System.IntPtr)
extern void SQLiteNative_sqlite3_close_mDD3E1F7CB01422379B3DD8A5D20F054A932EAC21 (void);
// 0x000003EB Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_finalize(System.IntPtr)
extern void SQLiteNative_sqlite3_finalize_mEEE17E7FA3F48C3A8C34D7F83E1EB16E890A44F9 (void);
// 0x000003EC Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern void SQLiteNative_sqlite3_bind_blob_mC8C589652F411AA03AEAD83E807E31B9BB493D78 (void);
// 0x000003ED Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_null(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_bind_null_m96CD888545F1E8FEFAEA437802A70249CD57A125 (void);
// 0x000003EE Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64)
extern void SQLiteNative_sqlite3_bind_int64_mFA23F98586E31D694FF6AF9CC57A6A09A3D1E4EC (void);
// 0x000003EF Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32)
extern void SQLiteNative_sqlite3_bind_int_m6034B724AD9C6EF84AFB34302C7C31778CBCCB0E (void);
// 0x000003F0 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_text(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern void SQLiteNative_sqlite3_bind_text_mFAD6F42D1B7D5A91C013D746F82DEE0014A8293F (void);
// 0x000003F1 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteReturnCode Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double)
extern void SQLiteNative_sqlite3_bind_double_m088A9D28B478DBE6760E5D8264C5C382D0F55B0C (void);
// 0x000003F2 Niantic.Lightship.Maps.Internal.Storage.SQLite.ColumnType Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_type(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_type_m36DFE10977F26D2C647452596C83C0BCF47A2876 (void);
// 0x000003F3 System.Int32 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_bytes(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_bytes_mC83DDFF105BF273784370317CD592FB867DC6F89 (void);
// 0x000003F4 System.Int32 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_int(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_int_m967CE6098B88FAF225C0E95EC0551D5B1C27E344 (void);
// 0x000003F5 System.Int64 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_int64(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_int64_mB0DFF0D9EBE4A9720EEAC5BC0730A56C0F5EFF70 (void);
// 0x000003F6 System.Double Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_double(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_double_m0B19E61A9435BE654BF5479D8473BB48F2DD4B97 (void);
// 0x000003F7 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_blob(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_blob_m7F0A987B69614A5950802B09012210293EC5F3D1 (void);
// 0x000003F8 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_text(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_text_m65A391FFC4E205AFA06AE4576DE782D6115D076D (void);
// 0x000003F9 System.IntPtr Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteNative::sqlite3_column_text16(System.IntPtr,System.Int32)
extern void SQLiteNative_sqlite3_column_text16_mE0D3C8D1838B6E41F3B4FE000D2B882222D849F4 (void);
// 0x000003FA System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::.ctor(System.IntPtr)
extern void SQLiteStatement__ctor_mA3241EA5E7FBAB6A5FE9341BBD6B16C114F89C2C (void);
// 0x000003FB System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Dispose()
extern void SQLiteStatement_Dispose_mD0520102DB6A442FA082B8BB44E069B8B170B20D (void);
// 0x000003FC System.Boolean Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Step()
extern void SQLiteStatement_Step_m23BEB9863406CF9D023E0C8B1ED24ABF61C96EC8 (void);
// 0x000003FD System.Boolean Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::ExecuteNonQuery()
extern void SQLiteStatement_ExecuteNonQuery_m030828168C020DCC67E699A09DC3170C1C71698A (void);
// 0x000003FE System.Boolean Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::TryExecuteNonQuery()
extern void SQLiteStatement_TryExecuteNonQuery_m49C5F8987B0685912DB96DB51E14B0C8384D58F9 (void);
// 0x000003FF System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.String)
extern void SQLiteStatement_Bind_m26FA74AE701E35FF5918529B9DFDF4BF557227F9 (void);
// 0x00000400 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.Int64)
extern void SQLiteStatement_Bind_m8833E581F887FFF1D0488C85A9ADD734F2A01BB9 (void);
// 0x00000401 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.Int32)
extern void SQLiteStatement_Bind_m8F228E517FA410A06F8A662C97F6C2A211F6685C (void);
// 0x00000402 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.Byte[])
extern void SQLiteStatement_Bind_m0A53558A3EAF70D51B0AF62C2B54226ED05E422F (void);
// 0x00000403 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.Single)
extern void SQLiteStatement_Bind_mC2E826BD3E388755268F25C4249C399286D76E6D (void);
// 0x00000404 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Bind(System.Int32,System.Double)
extern void SQLiteStatement_Bind_m94A9BD6F19C5259E646CD67C2E5554A7DDBECA40 (void);
// 0x00000405 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::BindNull(System.Int32)
extern void SQLiteStatement_BindNull_mD087490988AC9970841E9A5467642E928AE39D70 (void);
// 0x00000406 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::BindValue(System.Int32,System.Object)
extern void SQLiteStatement_BindValue_m6F2768C05AB3C194A86929AFC5EE0964A15B99A8 (void);
// 0x00000407 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::BindValues(System.Object[])
extern void SQLiteStatement_BindValues_m003EE7F3DCDE7B25DCDCC353DC336AC6C850B8F7 (void);
// 0x00000408 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::ClearBindings()
extern void SQLiteStatement_ClearBindings_m5699E7847D4FE232AA84DD9760F9F80A354545EE (void);
// 0x00000409 System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::Reset()
extern void SQLiteStatement_Reset_m408B4CE746874847C25B77960665A57FF494EEDA (void);
// 0x0000040A System.Void Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::TryReset()
extern void SQLiteStatement_TryReset_mFE72E897E1DCF7744B8435260B71DF6A7DEC274B (void);
// 0x0000040B Niantic.Lightship.Maps.Internal.Storage.SQLite.ColumnType Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetColumnType(System.Int32)
extern void SQLiteStatement_GetColumnType_m988F0C4D6391297B83F8A8FE55B459168B2C973D (void);
// 0x0000040C System.Int32 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetIntValue(System.Int32)
extern void SQLiteStatement_GetIntValue_m99DC0FFE1AAD09DE012C5E7669F545AD3C63F506 (void);
// 0x0000040D System.Int64 Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetInt64Value(System.Int32)
extern void SQLiteStatement_GetInt64Value_m6D5B44772BEDF12FCF1750C1FCFDF729195705C6 (void);
// 0x0000040E System.Boolean Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetBoolValue(System.Int32)
extern void SQLiteStatement_GetBoolValue_mC126554536B7AE9E8395724B115278096CCD6BEC (void);
// 0x0000040F System.Double Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetDoubleValue(System.Int32)
extern void SQLiteStatement_GetDoubleValue_m24341BBF33591E6CC7B397CF979A85CD47B394D8 (void);
// 0x00000410 System.String Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetTextValue(System.Int32)
extern void SQLiteStatement_GetTextValue_m25827AA5E286D22B19FAA9776BC1DA23DDD9B146 (void);
// 0x00000411 System.Byte[] Niantic.Lightship.Maps.Internal.Storage.SQLite.SQLiteStatement::GetBlobValue(System.Int32)
extern void SQLiteStatement_GetBlobValue_m33FCD5167888FC0E4DA1E4AAE476403056F866CD (void);
// 0x00000412 System.Boolean Niantic.Lightship.Maps.Internal.Settings.GetMaptilesSettingsResponseExtensions::WasFailure(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse)
extern void GetMaptilesSettingsResponseExtensions_WasFailure_m2266347B715CF99044C2209DCC89B52023770CE3 (void);
// 0x00000413 System.String Niantic.Lightship.Maps.Internal.Settings.GetMaptilesSettingsResponseExtensions::GetFailureMessage(Niantic.Lightship.Maps.Proto.GetMaptilesSettingsResponse)
extern void GetMaptilesSettingsResponseExtensions_GetFailureMessage_m2BA35DD750D2F3DB513E889637357685B57CB639 (void);
// 0x00000414 System.Collections.Generic.IReadOnlyDictionary`2<System.String,Niantic.Lightship.Maps.Proto.MapProvider> Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings::get_Providers()
// 0x00000415 System.Collections.Generic.KeyValuePair`2<Niantic.Lightship.Maps.Proto.MapProvider,Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings::FindFirstArea(System.Double,System.Double,System.Int32,System.Version)
// 0x00000416 System.Collections.Generic.HashSet`1<System.String> Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings::GetUpdatedProviders(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings)
// 0x00000417 System.Collections.Generic.List`1<Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Internal.Settings.IDebugMaptileSettings::get_WritableAreas()
// 0x00000418 System.Collections.Generic.Dictionary`2<Niantic.Lightship.Maps.Proto.MapArea,System.Version> Niantic.Lightship.Maps.Internal.Settings.IDebugMaptileSettings::get_WritableVersionMap()
// 0x00000419 System.Void Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::.ctor()
extern void MaptileSettings__ctor_m4D3BB1306782B596ACF1989653418A69D5BA2153 (void);
// 0x0000041A System.Void Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::.ctor(Niantic.Lightship.Maps.Proto.MapCompositionRoot,System.String)
extern void MaptileSettings__ctor_m79399963B4998C71E57EA6F49241395C4E75A760 (void);
// 0x0000041B Niantic.Lightship.Maps.Internal.Settings.MaptileSettings Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::FromCompositionRoot(Niantic.Lightship.Maps.Proto.MapCompositionRoot,System.String)
extern void MaptileSettings_FromCompositionRoot_mE4566F3D99F3C2151F4919A98424AC5394890B2F (void);
// 0x0000041C System.Collections.Generic.Dictionary`2<Niantic.Lightship.Maps.Proto.MapArea,System.Version> Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::Niantic.Lightship.Maps.Internal.Settings.IDebugMaptileSettings.get_WritableVersionMap()
extern void MaptileSettings_Niantic_Lightship_Maps_Internal_Settings_IDebugMaptileSettings_get_WritableVersionMap_m504B421EE899DBC27A53B32F216421EADB43E4EF (void);
// 0x0000041D System.Collections.Generic.List`1<Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::Niantic.Lightship.Maps.Internal.Settings.IDebugMaptileSettings.get_WritableAreas()
extern void MaptileSettings_Niantic_Lightship_Maps_Internal_Settings_IDebugMaptileSettings_get_WritableAreas_m827B97AE1F7EBAF9BEF6967A7DFBD27D886CE17D (void);
// 0x0000041E System.Boolean Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::Equals(Niantic.Lightship.Maps.Internal.Settings.MaptileSettings)
extern void MaptileSettings_Equals_mA329BDD4EC631510AC4148425F5D1F59D6022274 (void);
// 0x0000041F System.Boolean Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::Equals(System.Object)
extern void MaptileSettings_Equals_mCE1A84C47722EFB4B69E3F06CE88FDA2C5DA5A50 (void);
// 0x00000420 System.Int32 Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::GetHashCode()
extern void MaptileSettings_GetHashCode_mA63FCAFDD685F4539A47B6CA27BD0CB3EA577DD2 (void);
// 0x00000421 System.Boolean Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::op_Equality(Niantic.Lightship.Maps.Internal.Settings.MaptileSettings,Niantic.Lightship.Maps.Internal.Settings.MaptileSettings)
extern void MaptileSettings_op_Equality_m2FACE24A85B6AF52E1086B7F6C74AD5E8B18BBB5 (void);
// 0x00000422 System.Boolean Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::op_Inequality(Niantic.Lightship.Maps.Internal.Settings.MaptileSettings,Niantic.Lightship.Maps.Internal.Settings.MaptileSettings)
extern void MaptileSettings_op_Inequality_m60168D061FD5BDA5677A2DE38A60114D99626085 (void);
// 0x00000423 System.Collections.Generic.IReadOnlyDictionary`2<System.String,Niantic.Lightship.Maps.Proto.MapProvider> Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::get_Providers()
extern void MaptileSettings_get_Providers_m189A069984B0FF6A3BC28FC6C6BBD0C28DB51C14 (void);
// 0x00000424 System.Collections.Generic.KeyValuePair`2<Niantic.Lightship.Maps.Proto.MapProvider,Niantic.Lightship.Maps.Proto.MapArea> Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::FindFirstArea(System.Double,System.Double,System.Int32,System.Version)
extern void MaptileSettings_FindFirstArea_m767CE79DBB9DD117AB9854A604BF32C2A92C3FC5 (void);
// 0x00000425 System.Version Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::ParseVersionForArea(Niantic.Lightship.Maps.Proto.MapArea)
extern void MaptileSettings_ParseVersionForArea_m178DD98E5958A7E8E56495B34B784B7F62FC1870 (void);
// 0x00000426 System.Boolean Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::IsAreaClientVersionValid(Niantic.Lightship.Maps.Proto.MapArea,System.Version)
extern void MaptileSettings_IsAreaClientVersionValid_mC883C6101F087546D2146051D6BB33F4D2493DCE (void);
// 0x00000427 System.Collections.Generic.HashSet`1<System.String> Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::GetUpdatedProviders(Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings)
extern void MaptileSettings_GetUpdatedProviders_mAB4E94D232DAC9500C918FF51C8B4BD7289A2271 (void);
// 0x00000428 System.Void Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::InitializeFromProto(Niantic.Lightship.Maps.Proto.MapCompositionRoot,System.String)
extern void MaptileSettings_InitializeFromProto_mFDB4516083DD6E70AAABD989553A55B5934BDD85 (void);
// 0x00000429 System.Void Niantic.Lightship.Maps.Internal.Settings.MaptileSettings::MakeDefaultRoot()
extern void MaptileSettings_MakeDefaultRoot_m1E33AC344CB1896CE4D4934C8A88E121561FDAEF (void);
// 0x0000042A System.Void Niantic.Lightship.Maps.Internal.Settings.ISettingsService::add_SettingsChanged(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
// 0x0000042B System.Void Niantic.Lightship.Maps.Internal.Settings.ISettingsService::remove_SettingsChanged(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
// 0x0000042C System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::add_SettingsChangedEvent(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
extern void SettingsService_add_SettingsChangedEvent_m3D58C937BD818FA38498C91D22CC131B5157DB04 (void);
// 0x0000042D System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::remove_SettingsChangedEvent(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
extern void SettingsService_remove_SettingsChangedEvent_m437D1894DBC442E720C9F2999F3AB9EB5A0C3ECD (void);
// 0x0000042E System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::add_SettingsChanged(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
extern void SettingsService_add_SettingsChanged_m7F1E8F4A398BBF301CF18059A42894460D4FBC35 (void);
// 0x0000042F System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::remove_SettingsChanged(System.Action`1<Niantic.Lightship.Maps.Internal.Settings.IMaptileSettings>)
extern void SettingsService_remove_SettingsChanged_m17F203D9D4C1E07CB31490F7699DCAFDA1C8FF93 (void);
// 0x00000430 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::.ctor(System.String,System.String)
extern void SettingsService__ctor_m8E3939F8EC4D8E495D08B77858912D953673AA1C (void);
// 0x00000431 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::Dispose()
extern void SettingsService_Dispose_m4E97766DD5270DF9E0F802941DB9B56AA96D0CE4 (void);
// 0x00000432 System.Net.Http.ByteArrayContent Niantic.Lightship.Maps.Internal.Settings.SettingsService::CreateRequest()
extern void SettingsService_CreateRequest_mA6D2E29EC18AA58566878B181DE57CCBAF6C7A2A (void);
// 0x00000433 System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.Settings.SettingsService::GetSettings()
extern void SettingsService_GetSettings_mB121425F0F2262CE1A227708F0A2813959407C9C (void);
// 0x00000434 System.Threading.Tasks.Task`1<System.Boolean> Niantic.Lightship.Maps.Internal.Settings.SettingsService::GetSettingsInternal()
extern void SettingsService_GetSettingsInternal_m3C08DEB964C683795CEBB1AB1017AC2747D25CC7 (void);
// 0x00000435 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::.cctor()
extern void SettingsService__cctor_m2831B48CBB7B86C8D6C57DF830FCD93AAC4C4F94 (void);
// 0x00000436 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService::<.ctor>b__20_0(System.Object)
extern void SettingsService_U3C_ctorU3Eb__20_0_mE57EF52B367F1F635FE0BF08EA45048053C6E186 (void);
// 0x00000437 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService/<GetSettings>d__23::MoveNext()
extern void U3CGetSettingsU3Ed__23_MoveNext_mB9CB82E04D075D0C7E5FC03F86C81AF50EDAF567 (void);
// 0x00000438 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService/<GetSettings>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSettingsU3Ed__23_SetStateMachine_m3C3703E501595AEE60CD54BC8D7FB9AF2AAB0E7D (void);
// 0x00000439 System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService/<GetSettingsInternal>d__24::MoveNext()
extern void U3CGetSettingsInternalU3Ed__24_MoveNext_m19955C373A6F885DBC207D983CB9F3C2684F569C (void);
// 0x0000043A System.Void Niantic.Lightship.Maps.Internal.Settings.SettingsService/<GetSettingsInternal>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSettingsInternalU3Ed__24_SetStateMachine_mD2F92A2A5695FE08503F402E0218AC26007C4B19 (void);
// 0x0000043B System.Void Niantic.Lightship.Maps.Internal.Parse.TileCrypt::Init(System.Byte[],System.Int32)
extern void TileCrypt_Init_mEA833428DF3295A407C28BB0AD5D932ED3240474 (void);
// 0x0000043C System.Void Niantic.Lightship.Maps.Internal.Parse.TileCrypt::Skip(System.Int32)
extern void TileCrypt_Skip_mD12D0E0AB43FF1406AFF535C99ED241DD5E56602 (void);
// 0x0000043D System.Void Niantic.Lightship.Maps.Internal.Parse.TileCrypt::Crypt(System.Byte[],System.Int32,System.Byte[])
extern void TileCrypt_Crypt_mC0C137E81918C54A5687C7279897E2607231B083 (void);
// 0x0000043E System.Byte[] Niantic.Lightship.Maps.Internal.Parse.TileCrypt::GenerateKeyForTileV1(System.Int32,System.Int32,System.Int32,System.Int32)
extern void TileCrypt_GenerateKeyForTileV1_mBBF4C6DEE050214EDF679EF44B9F54E43541C3DD (void);
// 0x0000043F System.Byte[] Niantic.Lightship.Maps.Internal.Parse.TileCrypt::GenerateKeyForTileV2(System.Int32,System.Int32,System.Int32,System.UInt16,System.Int32)
extern void TileCrypt_GenerateKeyForTileV2_m821AF58953A79FBA03A04EE913428AB1DD6D945D (void);
// 0x00000440 System.Byte[] Niantic.Lightship.Maps.Internal.Parse.TileCrypt::GenerateKeyForTileV3(System.Int32,System.Int32,System.Int32,System.UInt16,System.Int32,System.Int64)
extern void TileCrypt_GenerateKeyForTileV3_m7E62C57D84DCC1FC8D5D1F0332439E86DD3F5051 (void);
// 0x00000441 System.Byte[] Niantic.Lightship.Maps.Internal.Parse.TileCrypt::CreateKeyForTileV3(System.Int32,System.Int32,System.Int32,System.UInt16,System.Int32,System.Int64)
extern void TileCrypt_CreateKeyForTileV3_m5FF7E4549DD241910D56DE699169F487DDB0936D (void);
// 0x00000442 System.Byte[] Niantic.Lightship.Maps.Internal.Parse.TileCrypt::GenerateKeyBase()
extern void TileCrypt_GenerateKeyBase_m6E88326CE2809AEA6D222E599F81EED76B873890 (void);
// 0x00000443 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCrypt::.ctor()
extern void TileCrypt__ctor_mF6B8869AC226DDC83BC8157BE694670F137C04CE (void);
// 0x00000444 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCrypt::.cctor()
extern void TileCrypt__cctor_m1FA13D6D89CAA0C0ABE362AE7D8D4516515153A3 (void);
// 0x00000445 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::.ctor(System.IO.Stream,Niantic.Lightship.Maps.Coordinates.TileCoord,System.UInt32,System.Int64)
extern void TileCryptInputStream__ctor_m26752E80379850B2300368FF7A553D988FEA79DA (void);
// 0x00000446 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::Flush()
extern void TileCryptInputStream_Flush_mA2DE15A51E2DDC7BAF12EEA8101AEFA6CB850245 (void);
// 0x00000447 System.Int32 Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern void TileCryptInputStream_Read_m106278A36BC63CCB2AF05006043E71310C9A9E97 (void);
// 0x00000448 System.Int64 Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern void TileCryptInputStream_Seek_m25B019A424249C0726BECAEF238C33990ADA0A51 (void);
// 0x00000449 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::SetLength(System.Int64)
extern void TileCryptInputStream_SetLength_m56C041AE6F33A1A416E3CDE5DC62B16B05662862 (void);
// 0x0000044A System.Void Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern void TileCryptInputStream_Write_m97C7510EDBC427421064AD830975103A7B340A58 (void);
// 0x0000044B System.Boolean Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::get_CanRead()
extern void TileCryptInputStream_get_CanRead_m773F5DF3C6FC4061CBD628490A42396B3E6961B9 (void);
// 0x0000044C System.Boolean Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::get_CanSeek()
extern void TileCryptInputStream_get_CanSeek_mD2228DFD6E82659B11D3D09651196A2BBD3A1BF5 (void);
// 0x0000044D System.Boolean Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::get_CanWrite()
extern void TileCryptInputStream_get_CanWrite_mEE22F5D9188F73EB7D16B9A9C4EAF0A2EDB7B90C (void);
// 0x0000044E System.Int64 Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::get_Length()
extern void TileCryptInputStream_get_Length_m7B88037C38663BE211AA039E13735E37427E0C90 (void);
// 0x0000044F System.Int64 Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::get_Position()
extern void TileCryptInputStream_get_Position_m418DA21EF1F5C1307A2D45FA728AF52ED8FC2951 (void);
// 0x00000450 System.Void Niantic.Lightship.Maps.Internal.Parse.TileCryptInputStream::set_Position(System.Int64)
extern void TileCryptInputStream_set_Position_m735D7474ED8A04F317E3EACD2361949A2A3C5FD5 (void);
// 0x00000451 System.Void Niantic.Lightship.Maps.Internal.Parse.TileDataInput::.ctor(System.IO.Stream)
extern void TileDataInput__ctor_m21E447F839F7EAE32A134540B68ABAF600BBF35D (void);
// 0x00000452 System.Void Niantic.Lightship.Maps.Internal.Parse.TileDataInput::.ctor(System.IO.Stream,System.Boolean)
extern void TileDataInput__ctor_m03D3634193D87BCB033F864D33230C148A7AB0C8 (void);
// 0x00000453 System.UInt16 Niantic.Lightship.Maps.Internal.Parse.TileDataInput::ReadUnsignedShort()
extern void TileDataInput_ReadUnsignedShort_mDB51A6B79AF6166BD4BF039FF4079C0F53A4F6FF (void);
// 0x00000454 System.Int32 Niantic.Lightship.Maps.Internal.Parse.TileDataInput::ReadInt()
extern void TileDataInput_ReadInt_m00F303296F62220945B5DAB084AEDEDA66848193 (void);
// 0x00000455 System.Int64 Niantic.Lightship.Maps.Internal.Parse.TileDataInput::ReadLong()
extern void TileDataInput_ReadLong_m612746103D8901A92045654F4DA8D534E526DF2C (void);
// 0x00000456 System.Void Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate::.ctor(System.Object,System.IntPtr)
extern void DecodeTileDataDelegate__ctor_m29B280857AB7EA323F4A54C80B5AB6AF0BE76A95 (void);
// 0x00000457 System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate::Invoke(System.Byte[],Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void DecodeTileDataDelegate_Invoke_m93CDD724EA277670D57BA09DFA663B27D05C4370 (void);
// 0x00000458 System.IAsyncResult Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate::BeginInvoke(System.Byte[],Niantic.Lightship.Maps.Coordinates.TileCoord,System.AsyncCallback,System.Object)
extern void DecodeTileDataDelegate_BeginInvoke_m9CA52BAECE03C96D2352B55E143B066737E7829F (void);
// 0x00000459 System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate::EndInvoke(System.IAsyncResult)
extern void DecodeTileDataDelegate_EndInvoke_m8875A9C0A762C7838659B80A7C44E6D30E1766F8 (void);
// 0x0000045A System.Void Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::add_AllTilesCached(System.Action)
// 0x0000045B System.Void Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::remove_AllTilesCached(System.Action)
// 0x0000045C System.Void Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::add_DownloadCanceled(System.Action)
// 0x0000045D System.Void Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::remove_DownloadCanceled(System.Action)
// 0x0000045E System.Void Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::BeginDownload(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Int32,Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate)
// 0x0000045F System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup::RequestTile(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Threading.CancellationToken)
// 0x00000460 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup::get_IsDownloadFinished()
// 0x00000461 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup::get_WasDownloadSuccessful()
// 0x00000462 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup::get_WasDownloadCanceled()
// 0x00000463 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::add_AllTilesCached(System.Action)
extern void BundledTileFetchGroup_add_AllTilesCached_mA67B9518C62BF42CDBC1722EE9E8D3574E4229F8 (void);
// 0x00000464 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::remove_AllTilesCached(System.Action)
extern void BundledTileFetchGroup_remove_AllTilesCached_m56C844385342A21E98475A6CC7F37CB2E5A89514 (void);
// 0x00000465 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::add_DownloadCanceled(System.Action)
extern void BundledTileFetchGroup_add_DownloadCanceled_m1AFBD70FC501C8A22D6A3DEDD6296BCBA4A924A0 (void);
// 0x00000466 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::remove_DownloadCanceled(System.Action)
extern void BundledTileFetchGroup_remove_DownloadCanceled_m190CB56811B3DFB14BC9877875329B41BE9C04DE (void);
// 0x00000467 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup.get_IsDownloadFinished()
extern void BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_IsDownloadFinished_m2860C1441908E7889BA4D6502016AAFB781D40D9 (void);
// 0x00000468 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup.get_WasDownloadSuccessful()
extern void BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_WasDownloadSuccessful_mEF1BECC8AC7D4CBE63DB587D70A62637CD1EADB8 (void);
// 0x00000469 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::Niantic.Lightship.Maps.Internal.Bundle.IDebugBundledTileFetchGroup.get_WasDownloadCanceled()
extern void BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_WasDownloadCanceled_m566374A9EBBF1431A2FBC65C9394F02956F20ACA (void);
// 0x0000046A System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::.ctor(Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Internal.IMapTileCache,Niantic.Lightship.Maps.Internal.Bundle.ITileBundleUrlGenerator)
extern void BundledTileFetchGroup__ctor_m0DCCEBF6FDFA966C1C3435EBFBFFD8EE8B10A3E5 (void);
// 0x0000046B System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::Dispose()
extern void BundledTileFetchGroup_Dispose_m64FD620852764BE63E9AF9EF0A8C1739D9810BDA (void);
// 0x0000046C System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::BeginDownload(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Int32,Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate)
extern void BundledTileFetchGroup_BeginDownload_mCFCB34B291F84AA2D0A876290F3524219AC871D8 (void);
// 0x0000046D System.Threading.Tasks.Task Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::DownloadAndProcessBundle(Niantic.Lightship.Maps.Internal.Bundle.DecodeTileDataDelegate)
extern void BundledTileFetchGroup_DownloadAndProcessBundle_m558543AF9EF5C89511C3EE63A79E44D293D5250F (void);
// 0x0000046E System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::RequestTile(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Threading.CancellationToken)
extern void BundledTileFetchGroup_RequestTile_mACB585D97AAC47E494C6218CFD8BAE5154DEF75C (void);
// 0x0000046F System.Lazy`1<Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest> Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::CreateFetchRequest(System.UInt64)
extern void BundledTileFetchGroup_CreateFetchRequest_mBBAD5D9BB2D09E92E0264300DA7A076076B6878F (void);
// 0x00000470 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::HandleDownloadSuccess(System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData>)
extern void BundledTileFetchGroup_HandleDownloadSuccess_m757BDFDC23931EAB51B536ACE48838BA6685B72E (void);
// 0x00000471 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::HandleDownloadFailure()
extern void BundledTileFetchGroup_HandleDownloadFailure_mFC7CC0DB6A0B2490D4397D66869BC951528BB0A2 (void);
// 0x00000472 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::OnTileRequestCanceled(Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest)
extern void BundledTileFetchGroup_OnTileRequestCanceled_mAA52FB5972E4FFFB974BD0C1C6A7298586736761 (void);
// 0x00000473 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup::<HandleDownloadSuccess>b__30_0(System.Threading.Tasks.Task)
extern void BundledTileFetchGroup_U3CHandleDownloadSuccessU3Eb__30_0_m4B0F59738D0E60E206AFBB5562E943F6257C8F78 (void);
// 0x00000474 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup/<>c__DisplayClass29_0::.ctor()
extern void U3CU3Ec__DisplayClass29_0__ctor_mC63188D6DA5BCB8A05B56D64E4CA7D7232C4DCE7 (void);
// 0x00000475 Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup/<>c__DisplayClass29_0::<CreateFetchRequest>b__0()
extern void U3CU3Ec__DisplayClass29_0_U3CCreateFetchRequestU3Eb__0_m6B8D185FF6683FC340D607877CEA9A25BC4865BB (void);
// 0x00000476 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup/<DownloadAndProcessBundle>d__27::MoveNext()
extern void U3CDownloadAndProcessBundleU3Ed__27_MoveNext_mF1DBBCAB66DFF1714CF106B1386B72E3FFC86099 (void);
// 0x00000477 System.Void Niantic.Lightship.Maps.Internal.Bundle.BundledTileFetchGroup/<DownloadAndProcessBundle>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDownloadAndProcessBundleU3Ed__27_SetStateMachine_m864392CCE8043F72F075F5D7E72AFD5130FE361B (void);
// 0x00000478 System.IO.MemoryStream Niantic.Lightship.Maps.Internal.Bundle.BundleUtils::ExpandStream(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Byte[])
extern void BundleUtils_ExpandStream_m40D9E253FCFF80D05BB13F9A2D174DE1F8ECCC18 (void);
// 0x00000479 System.String Niantic.Lightship.Maps.Internal.Bundle.ITileBundleUrlGenerator::GetMapTileUrl(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Int32)
// 0x0000047A System.Void Niantic.Lightship.Maps.Internal.Bundle.TileBundleUrlGenerator::.ctor(System.String,System.String)
extern void TileBundleUrlGenerator__ctor_m71135000F68F616D41552C750CEE696D2DE6F551 (void);
// 0x0000047B System.String Niantic.Lightship.Maps.Internal.Bundle.TileBundleUrlGenerator::GetMapTileName(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Int32)
extern void TileBundleUrlGenerator_GetMapTileName_m27EEE8C188B890F753FCE599D05B1428F0FB4338 (void);
// 0x0000047C System.String Niantic.Lightship.Maps.Internal.Bundle.TileBundleUrlGenerator::GetMapTileUrl(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Int32)
extern void TileBundleUrlGenerator_GetMapTileUrl_mDD07CADDBDD46D9BD34F3A80253763B1D00702BA (void);
// 0x0000047D Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::get_TileCoord()
extern void TileFetchRequest_get_TileCoord_m86806344CC94B7A5CC45E8D965C053DE5F7C8245 (void);
// 0x0000047E System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::get_Task()
extern void TileFetchRequest_get_Task_m80FBF2B04534F3C9EB2820BA8CB6F2FBC3CB2166 (void);
// 0x0000047F System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::add_Canceled(System.Action`1<Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest>)
extern void TileFetchRequest_add_Canceled_mA4997E1BF636DDEEB64F2EAE88FA18BD65193E63 (void);
// 0x00000480 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::remove_Canceled(System.Action`1<Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest>)
extern void TileFetchRequest_remove_Canceled_m4B332F1935677BAEA5E3A32F58855D677CE41B2A (void);
// 0x00000481 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileFetchRequest__ctor_mB9155AACCE62B1E426678E36768CE0560C9625CA (void);
// 0x00000482 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::Dispose()
extern void TileFetchRequest_Dispose_m12821880A54F270AA8DA869393876A2A1EFE8E19 (void);
// 0x00000483 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::RegisterCancellationToken(System.Threading.CancellationToken)
extern void TileFetchRequest_RegisterCancellationToken_m826AD18CF8997328DD379FBD8B40D19EA3459BFB (void);
// 0x00000484 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::OnCanceled()
extern void TileFetchRequest_OnCanceled_m99B7F1ABF2B48E2C455F0507135871F44DD5E6EE (void);
// 0x00000485 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::SetResult(Niantic.Lightship.Maps.Internal.MapTileData)
extern void TileFetchRequest_SetResult_m3A2FFB9C5A7E542D310F8E2CD053425176C90B35 (void);
// 0x00000486 System.Void Niantic.Lightship.Maps.Internal.Bundle.TileFetchRequest::SetFailed(Niantic.Lightship.Maps.Exceptions.BundledTileFetchException)
extern void TileFetchRequest_SetFailed_m93620B6E75DE65F792C28F6B39842EF2DF945549 (void);
// 0x00000487 Niantic.Lightship.Maps.Internal.MapTile Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::Decode(Niantic.Lightship.Maps.Internal.MapTileData,Niantic.Lightship.Maps.Internal.InternalMapTile)
extern void MapTileDecoderV2_Decode_m44A363A6890D840E31CE789FE83F1ABB4EFAB2A7 (void);
// 0x00000488 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::ParseFeature(Niantic.Lightship.Maps.Internal.MapTile,Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Proto.Feature,Niantic.Lightship.Maps.Proto.LayerKind)
extern void MapTileDecoderV2_ParseFeature_m14DE8B16AE0C8A16E0ACDBF11223406B666F31B1 (void);
// 0x00000489 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::ParsePointList(Niantic.Lightship.Maps.Internal.MapTile,Niantic.Lightship.Maps.Proto.Feature,Niantic.Lightship.Maps.Proto.LayerKind)
extern void MapTileDecoderV2_ParsePointList_mCECCDF9C8A7467CC51BCF3EF6217AF5F70E5AAE4 (void);
// 0x0000048A System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::ParsePolylineList(Niantic.Lightship.Maps.Internal.MapTile,Niantic.Lightship.Maps.Proto.Feature,Niantic.Lightship.Maps.Proto.LayerKind)
extern void MapTileDecoderV2_ParsePolylineList_m79AC51871D4C07626910118B025B02F3B7814DEA (void);
// 0x0000048B System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::ParseTriangleList(Niantic.Lightship.Maps.Internal.MapTile,Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Proto.Feature,Niantic.Lightship.Maps.Proto.LayerKind)
extern void MapTileDecoderV2_ParseTriangleList_m9565C345BC8C10B2FCE6D2F7DE59960FB7808496 (void);
// 0x0000048C System.Single Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::MetersToTilePercent(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32)
extern void MapTileDecoderV2_MetersToTilePercent_m5D5279D947129AA505FB0947F2EA9CEA3DE70CF0 (void);
// 0x0000048D System.ValueTuple`3<System.Single,System.Single,System.Single> Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::UnpackCoords(System.UInt32)
extern void MapTileDecoderV2_UnpackCoords_m3830AA5B6873BB4A8B67946CDDE6E82F831CC73D (void);
// 0x0000048E Niantic.Lightship.Maps.Geometry.LineSegment[] Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::ExtractExteriorEdges(UnityEngine.Vector3[],System.Byte[])
extern void MapTileDecoderV2_ExtractExteriorEdges_m49248090579CDF5D6ACC0A92727563BB46C05A9A (void);
// 0x0000048F System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::.ctor()
extern void MapTileDecoderV2__ctor_m97C52A1545E5D3331E6884571DFF2F0F1989DDBD (void);
// 0x00000490 System.Boolean Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileDecoderV2::<ExtractExteriorEdges>g__IsBitSet|8_0(System.Int32,System.Int32)
extern void MapTileDecoderV2_U3CExtractExteriorEdgesU3Eg__IsBitSetU7C8_0_mD284455817905DFB6103F757BE7EE7FB0CAB55B1 (void);
// 0x00000491 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::.ctor(Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Proto.MapProvider,System.String,System.Boolean)
extern void MapTileFetcherV2__ctor_m3325A2D8922A79B7A79D2655711824DDAF862852 (void);
// 0x00000492 Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2 Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::StartNew(Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Proto.MapProvider,System.String,System.Boolean)
extern void MapTileFetcherV2_StartNew_m1EC9F04C850D7FCFC63D00E24404C8F8AFA441D8 (void);
// 0x00000493 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::Dispose()
extern void MapTileFetcherV2_Dispose_m44FC892FE6362B487517A5CC87ED65EC11A38BA0 (void);
// 0x00000494 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::Start()
extern void MapTileFetcherV2_Start_m220DB399A931E9F510DF4A78385E454F35B35042 (void);
// 0x00000495 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::Stop()
extern void MapTileFetcherV2_Stop_mF18E410C47B67C0BCF3A44B3C9342ADB7A3AD154 (void);
// 0x00000496 System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::RequestTileAsync(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
extern void MapTileFetcherV2_RequestTileAsync_mA559F791EB076319EAD12A71CFC42B81D6022640 (void);
// 0x00000497 System.Threading.Tasks.Task`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::RequestTileFetch(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.Threading.CancellationToken)
extern void MapTileFetcherV2_RequestTileFetch_mF0C892FDD08018EE25760DC9E2DBE290B0045D25 (void);
// 0x00000498 System.Lazy`1<Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup> Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::CreateFetchGroup(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32,System.ValueTuple`2<System.UInt64,System.Int32>)
extern void MapTileFetcherV2_CreateFetchGroup_mED4708FE095ABC216EA3AA56085D36E23FEE5185 (void);
// 0x00000499 System.Collections.Generic.List`1<Niantic.Lightship.Maps.Internal.MapTileData> Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2::DecodeTileData(System.Byte[],Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void MapTileFetcherV2_DecodeTileData_mB77BBE493CD89F74598AD4825FF00A681D6F2ED9 (void);
// 0x0000049A System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_m09221D4BB632A4CC28F452C6CFF91E7D49E99989 (void);
// 0x0000049B Niantic.Lightship.Maps.Internal.Bundle.IBundledTileFetchGroup Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<>c__DisplayClass14_0::<CreateFetchGroup>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__0_m1173D4697EBE7570644D644990E8315D83E500E6 (void);
// 0x0000049C System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<>c__DisplayClass14_0::<CreateFetchGroup>b__1()
extern void U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__1_m5A67EEA2C7D90FEECDF1EBEB07C060A54E546116 (void);
// 0x0000049D System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<>c__DisplayClass14_0::<CreateFetchGroup>b__2()
extern void U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__2_mC1BD5C1B08F43733822203554B69760200ED6A93 (void);
// 0x0000049E System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<RequestTileAsync>d__12::MoveNext()
extern void U3CRequestTileAsyncU3Ed__12_MoveNext_m969EE264786E7950D7BDD973ECD97DB1B83D74BD (void);
// 0x0000049F System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<RequestTileAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestTileAsyncU3Ed__12_SetStateMachine_mA07E4944C4F4BBD7B41164F38E9D438C9ED368A0 (void);
// 0x000004A0 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<RequestTileFetch>d__13::MoveNext()
extern void U3CRequestTileFetchU3Ed__13_MoveNext_mAC6E47E4905514E14A50F806A6DCF9867040A8B2 (void);
// 0x000004A1 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileFetcherV2/<RequestTileFetch>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestTileFetchU3Ed__13_SetStateMachine_m253CD5D2AF806408970B032B2E82C46A22BB95E9 (void);
// 0x000004A2 Niantic.Lightship.Maps.Internal.IMapTileFetcher Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileProviderV2::get_Fetcher()
extern void MapTileProviderV2_get_Fetcher_m4E9AF93A87314D4034B6CC666A5EA4B625917BDF (void);
// 0x000004A3 Niantic.Lightship.Maps.Internal.IMapTileDecoder Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileProviderV2::get_Decoder()
extern void MapTileProviderV2_get_Decoder_m571B9113373A1443A81471B4BA4EED1B7904793A (void);
// 0x000004A4 Niantic.Lightship.Maps.Proto.MapProvider/Types/MapType Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileProviderV2::get_MapType()
extern void MapTileProviderV2_get_MapType_m57FDCA3F897A616A00C9406BAEDA4A33C66DD471 (void);
// 0x000004A5 System.Void Niantic.Lightship.Maps.Internal.Bundle.V2.MapTileProviderV2::.ctor(Niantic.Lightship.Maps.Network.INetworkHandler,Niantic.Lightship.Maps.Proto.MapProvider,System.String)
extern void MapTileProviderV2__ctor_mB4EB88C17BB4E95D9703850755FF9C7B373208D6 (void);
// 0x000004A6 Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Internal.Bundle.Extensions.LabelExtensions::ToLabelInfo(Niantic.Lightship.Maps.Proto.Label,System.Single,System.Single)
extern void LabelExtensions_ToLabelInfo_m2CB30EC778E6C060EF5003114F70762F0B90543D (void);
// 0x000004A7 Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Internal.Bundle.Extensions.TileCoordExtensions::ToParentBundleCoord(Niantic.Lightship.Maps.Coordinates.TileCoord,System.Int32)
extern void TileCoordExtensions_ToParentBundleCoord_mFA210AB230A0AAEC9D13A402A1CE189FE4DD463B (void);
// 0x000004A8 System.Void Niantic.Lightship.Maps.Geometry.LineSegment::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern void LineSegment__ctor_mE78EF617FE0E896D9C4325F3C2368919B7EBC7E2 (void);
// 0x000004A9 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.IAreaFeature::get_Points()
// 0x000004AA System.Int32[] Niantic.Lightship.Maps.Features.IAreaFeature::get_Indices()
// 0x000004AB Niantic.Lightship.Maps.Geometry.LineSegment[] Niantic.Lightship.Maps.Features.IAreaFeature::get_ExteriorEdges()
// 0x000004AC System.Void Niantic.Lightship.Maps.Features.AreaFeature::.ctor(Niantic.Lightship.Maps.Proto.FeatureKind,Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Features.ILabelInfo,UnityEngine.Vector3[],System.Int32[],Niantic.Lightship.Maps.Geometry.LineSegment[])
extern void AreaFeature__ctor_mE50C44196ACB9E609503868C1C0B019808136059 (void);
// 0x000004AD Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Features.AreaFeature::get_Kind()
extern void AreaFeature_get_Kind_m8ED878B01291810E7B26FC890A24C83694168218 (void);
// 0x000004AE Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Features.AreaFeature::get_Layer()
extern void AreaFeature_get_Layer_mE65E658D36C4C21BC02C30221049840BB3320354 (void);
// 0x000004AF Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Features.AreaFeature::get_Label()
extern void AreaFeature_get_Label_mFA1079BE883B34EEDFEC664B5D8DDE3DF17DAECD (void);
// 0x000004B0 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.AreaFeature::get_Points()
extern void AreaFeature_get_Points_mCA3AE6933FDE1DF8D2ABBD5CCD45FC826E2EDAD1 (void);
// 0x000004B1 System.Int32[] Niantic.Lightship.Maps.Features.AreaFeature::get_Indices()
extern void AreaFeature_get_Indices_m82AFC30CBE56FD1567DD3A3A260BEA8CB474C77A (void);
// 0x000004B2 Niantic.Lightship.Maps.Geometry.LineSegment[] Niantic.Lightship.Maps.Features.AreaFeature::get_ExteriorEdges()
extern void AreaFeature_get_ExteriorEdges_m51B486420B40DA3810A6AE52B7C9B588E0F11C9A (void);
// 0x000004B3 System.String Niantic.Lightship.Maps.Features.AreaFeature::ToString()
extern void AreaFeature_ToString_mE7BA152C4436252CC9DC2CBB15A797CA263496DE (void);
// 0x000004B4 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.IBuildingFeature::get_Points()
// 0x000004B5 System.Int32[] Niantic.Lightship.Maps.Features.IBuildingFeature::get_Indices()
// 0x000004B6 Niantic.Lightship.Maps.Geometry.LineSegment[] Niantic.Lightship.Maps.Features.IBuildingFeature::get_ExteriorEdges()
// 0x000004B7 System.Single Niantic.Lightship.Maps.Features.IBuildingFeature::get_Height()
// 0x000004B8 System.Boolean Niantic.Lightship.Maps.Features.IBuildingFeature::get_IsUnderground()
// 0x000004B9 System.Void Niantic.Lightship.Maps.Features.BuildingFeature::.ctor(Niantic.Lightship.Maps.Proto.FeatureKind,Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Features.ILabelInfo,UnityEngine.Vector3[],System.Int32[],Niantic.Lightship.Maps.Geometry.LineSegment[],System.Single,System.Boolean)
extern void BuildingFeature__ctor_m0B423E8C55C082782EFD8175C02BD6DD71E8F782 (void);
// 0x000004BA Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Features.BuildingFeature::get_Kind()
extern void BuildingFeature_get_Kind_m0249093C50D4DB62836D5B180672A004D316CDDF (void);
// 0x000004BB Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Features.BuildingFeature::get_Layer()
extern void BuildingFeature_get_Layer_m96169FC82D5896C4E4E6CD93C1D2CD58CCF6DD1A (void);
// 0x000004BC Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Features.BuildingFeature::get_Label()
extern void BuildingFeature_get_Label_m99696200A747245DDF2E1104AA5D2C9CFFC6B891 (void);
// 0x000004BD UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.BuildingFeature::get_Points()
extern void BuildingFeature_get_Points_mB501AD4AF19F02882F9BAC69FEDA5F009F98B311 (void);
// 0x000004BE System.Int32[] Niantic.Lightship.Maps.Features.BuildingFeature::get_Indices()
extern void BuildingFeature_get_Indices_m932F838C8FB7A6F170173C01CD78DC2D7F556ABC (void);
// 0x000004BF Niantic.Lightship.Maps.Geometry.LineSegment[] Niantic.Lightship.Maps.Features.BuildingFeature::get_ExteriorEdges()
extern void BuildingFeature_get_ExteriorEdges_mADBFBCBC6A1B9EEA74DFD8E53E6403AC20863EBF (void);
// 0x000004C0 System.Single Niantic.Lightship.Maps.Features.BuildingFeature::get_Height()
extern void BuildingFeature_get_Height_m3077E12A0B7855D0D949D4D62E5EE5ADB37FEBBD (void);
// 0x000004C1 System.Boolean Niantic.Lightship.Maps.Features.BuildingFeature::get_IsUnderground()
extern void BuildingFeature_get_IsUnderground_mF425B6B6A5D87AD1E445CFC48276546BEA0F9559 (void);
// 0x000004C2 System.String Niantic.Lightship.Maps.Features.BuildingFeature::ToString()
extern void BuildingFeature_ToString_mFB2524523C8D7361F95B1FB912C981BCF0986BB2 (void);
// 0x000004C3 Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Features.IMapTileFeature::get_Kind()
// 0x000004C4 Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Features.IMapTileFeature::get_Layer()
// 0x000004C5 Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Features.IMapTileFeature::get_Label()
// 0x000004C6 System.Int32 Niantic.Lightship.Maps.Features.ILabelInfo::get_Priority()
// 0x000004C7 System.Int32 Niantic.Lightship.Maps.Features.ILabelInfo::get_MinZoom()
// 0x000004C8 System.Int32 Niantic.Lightship.Maps.Features.ILabelInfo::get_MaxZoom()
// 0x000004C9 System.Single Niantic.Lightship.Maps.Features.ILabelInfo::get_PosX()
// 0x000004CA System.Single Niantic.Lightship.Maps.Features.ILabelInfo::get_PosY()
// 0x000004CB System.String Niantic.Lightship.Maps.Features.ILabelInfo::get_Text()
// 0x000004CC System.Int32 Niantic.Lightship.Maps.Features.LabelInfo::get_Priority()
extern void LabelInfo_get_Priority_m0FC60BE89491EF89D311C783603E7AC2A803C79B (void);
// 0x000004CD System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_Priority(System.Int32)
extern void LabelInfo_set_Priority_m0A1B89D67CBD39E6E0D27F980DEE0FA43594331A (void);
// 0x000004CE System.Int32 Niantic.Lightship.Maps.Features.LabelInfo::get_MinZoom()
extern void LabelInfo_get_MinZoom_mF5F7A3D96EDCBF512C4A54F884A278CE4C789784 (void);
// 0x000004CF System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_MinZoom(System.Int32)
extern void LabelInfo_set_MinZoom_mD119E0D93C300AB1164989FEFC877A5F0F86C49D (void);
// 0x000004D0 System.Int32 Niantic.Lightship.Maps.Features.LabelInfo::get_MaxZoom()
extern void LabelInfo_get_MaxZoom_m25C463B9C9D39927F32DF19C6BB9BF7C04E25128 (void);
// 0x000004D1 System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_MaxZoom(System.Int32)
extern void LabelInfo_set_MaxZoom_mFBB83A1E50DE51E5787DA00F0D344AA1EC6FF5B8 (void);
// 0x000004D2 System.Single Niantic.Lightship.Maps.Features.LabelInfo::get_PosX()
extern void LabelInfo_get_PosX_mAAA20C54B07907BE6687A57B20E90821CD05C3EB (void);
// 0x000004D3 System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_PosX(System.Single)
extern void LabelInfo_set_PosX_m87EDC84E3FA11EEFD205188521499A311A5ECF4E (void);
// 0x000004D4 System.Single Niantic.Lightship.Maps.Features.LabelInfo::get_PosY()
extern void LabelInfo_get_PosY_mCFE1B79BB81EEEB6CEAD96D989AB784774C99591 (void);
// 0x000004D5 System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_PosY(System.Single)
extern void LabelInfo_set_PosY_mB61980C5195AD4C5D8E6FFE5DF621D35D7A47DA9 (void);
// 0x000004D6 System.String Niantic.Lightship.Maps.Features.LabelInfo::get_Text()
extern void LabelInfo_get_Text_mC1A94653EDC052EEE62862BBCF07F125B5BC9DA9 (void);
// 0x000004D7 System.Void Niantic.Lightship.Maps.Features.LabelInfo::set_Text(System.String)
extern void LabelInfo_set_Text_m4C9232C678CB4ADD5EFCEC4A29A3F3852C7B684F (void);
// 0x000004D8 System.Void Niantic.Lightship.Maps.Features.LabelInfo::.ctor()
extern void LabelInfo__ctor_m4F98D757100D6A7BB6A725B35BFB2B1F0DBED86C (void);
// 0x000004D9 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.ILinearFeature::get_Points()
// 0x000004DA System.Int32[] Niantic.Lightship.Maps.Features.ILinearFeature::get_LineStrips()
// 0x000004DB System.Void Niantic.Lightship.Maps.Features.LinearFeature::.ctor(Niantic.Lightship.Maps.Proto.FeatureKind,Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Features.ILabelInfo,UnityEngine.Vector3[],System.Int32[])
extern void LinearFeature__ctor_mBC4CF1278E168ED5D85C78FC589E3254BF2EF2D5 (void);
// 0x000004DC Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Features.LinearFeature::get_Kind()
extern void LinearFeature_get_Kind_mC8763EE81AEEC8E491ED910E46839F5D0636A2BA (void);
// 0x000004DD Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Features.LinearFeature::get_Layer()
extern void LinearFeature_get_Layer_m66F42CBA94C26F174A8A81D8E5530CAE443FFE72 (void);
// 0x000004DE Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Features.LinearFeature::get_Label()
extern void LinearFeature_get_Label_mF0E7EB479432BA8DE2575965D2525CAA0DFF0920 (void);
// 0x000004DF UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.LinearFeature::get_Points()
extern void LinearFeature_get_Points_m4510D3D1E6C42B0558974DDB262FEE6BD37E037D (void);
// 0x000004E0 System.Int32[] Niantic.Lightship.Maps.Features.LinearFeature::get_LineStrips()
extern void LinearFeature_get_LineStrips_mD40A628159C42BA4573FDFF995202A66FE0F4331 (void);
// 0x000004E1 System.String Niantic.Lightship.Maps.Features.LinearFeature::ToString()
extern void LinearFeature_ToString_m7B1FAA3F0A5ED8358AF50607817CEF38CB915198 (void);
// 0x000004E2 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.IPointFeature::get_Points()
// 0x000004E3 System.Void Niantic.Lightship.Maps.Features.PointFeature::.ctor(Niantic.Lightship.Maps.Proto.FeatureKind,Niantic.Lightship.Maps.Proto.LayerKind,Niantic.Lightship.Maps.Features.ILabelInfo,UnityEngine.Vector3[])
extern void PointFeature__ctor_m29D7C041C05EBCAA02170CA670D0317B4726D198 (void);
// 0x000004E4 Niantic.Lightship.Maps.Proto.FeatureKind Niantic.Lightship.Maps.Features.PointFeature::get_Kind()
extern void PointFeature_get_Kind_m9A4DA60118350D6AB1A00C05324E9C0252A750FE (void);
// 0x000004E5 Niantic.Lightship.Maps.Proto.LayerKind Niantic.Lightship.Maps.Features.PointFeature::get_Layer()
extern void PointFeature_get_Layer_m0C441B680E0DDF09C3DAA458699B6D7086DCB3D1 (void);
// 0x000004E6 Niantic.Lightship.Maps.Features.ILabelInfo Niantic.Lightship.Maps.Features.PointFeature::get_Label()
extern void PointFeature_get_Label_mEDA3455C26D6ABA7A88F2AD2AE2416AD5AA35640 (void);
// 0x000004E7 UnityEngine.Vector3[] Niantic.Lightship.Maps.Features.PointFeature::get_Points()
extern void PointFeature_get_Points_m40F5D330CC43FB3725DEDD9FD8EA2A3D75DB3AEB (void);
// 0x000004E8 System.String Niantic.Lightship.Maps.Features.PointFeature::ToString()
extern void PointFeature_ToString_mB061B7383FC004D852D56F4DAE70E8D62657BA64 (void);
// 0x000004E9 TValue Niantic.Lightship.Maps.Extensions.DictionaryExtensions::GetValueOrDefault(System.Collections.Generic.Dictionary`2<TKey,TValue>,TKey,TValue)
// 0x000004EA TValue Niantic.Lightship.Maps.Extensions.DictionaryExtensions::GetValueOrDefault(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
// 0x000004EB System.Collections.Generic.IReadOnlyDictionary`2<T,TU> Niantic.Lightship.Maps.Extensions.DictionaryExtensions::EmptyIfNull(System.Collections.Generic.Dictionary`2<T,TU>)
// 0x000004EC TValue Niantic.Lightship.Maps.Extensions.DictionaryExtensions::GetAndRemoveValueOrDefault(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey,TValue)
// 0x000004ED TValue Niantic.Lightship.Maps.Extensions.DictionaryExtensions::GetOrCreateValue(System.Collections.Generic.IDictionary`2<TKey,TValue>,TKey)
// 0x000004EE System.Boolean Niantic.Lightship.Maps.Extensions.DictionaryExtensions::IsEmpty(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000004EF System.Boolean Niantic.Lightship.Maps.Extensions.DictionaryExtensions::IsNotEmpty(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000004F0 System.Void Niantic.Lightship.Maps.Extensions.DictionaryExtensions::DisposeAll(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x000004F1 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Extensions.EnumerableExtensions::EmptyIfNull(System.Collections.Generic.IEnumerable`1<T>)
// 0x000004F2 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Extensions.EnumerableExtensions::Ordered(System.Collections.Generic.IEnumerable`1<T>)
// 0x000004F3 System.Collections.Generic.IEnumerable`1<T> Niantic.Lightship.Maps.Extensions.EnumerableExtensions::WhereNotNull(System.Collections.Generic.IEnumerable`1<T>)
// 0x000004F4 System.Void Niantic.Lightship.Maps.Extensions.EnumerableExtensions::DisposeAll(System.Collections.Generic.IEnumerable`1<T>)
// 0x000004F5 System.Void Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__1`1::.cctor()
// 0x000004F6 System.Void Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__1`1::.ctor()
// 0x000004F7 T Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__1`1::<Ordered>b__1_0(T)
// 0x000004F8 System.Void Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__2`1::.cctor()
// 0x000004F9 System.Void Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__2`1::.ctor()
// 0x000004FA System.Boolean Niantic.Lightship.Maps.Extensions.EnumerableExtensions/<>c__2`1::<WhereNotNull>b__2_0(T)
// 0x000004FB System.Boolean Niantic.Lightship.Maps.Extensions.ListExtensions::IsEmpty(System.Collections.Generic.List`1<T>)
// 0x000004FC System.Collections.Generic.IReadOnlyList`1<T> Niantic.Lightship.Maps.Extensions.ListExtensions::EmptyIfNull(System.Collections.Generic.List`1<T>)
// 0x000004FD System.String Niantic.Lightship.Maps.Extensions.NetworkResponseExtensions::GetResultDescription(Niantic.Lightship.Maps.Network.NetworkResponse)
extern void NetworkResponseExtensions_GetResultDescription_m94A5C7DF190CC6CD4710F6D213A183E8DEE9FB93 (void);
// 0x000004FE System.Boolean Niantic.Lightship.Maps.Extensions.QueueExtensions::IsEmpty(System.Collections.Generic.Queue`1<T>)
// 0x000004FF System.Boolean Niantic.Lightship.Maps.Extensions.QueueExtensions::IsNullOrEmpty(System.Collections.Generic.Queue`1<T>)
// 0x00000500 System.Boolean Niantic.Lightship.Maps.Extensions.QueueExtensions::Any(System.Collections.Generic.Queue`1<T>)
// 0x00000501 T Niantic.Lightship.Maps.Extensions.QueueExtensions::GetOrCreateValue(System.Collections.Generic.Queue`1<T>,System.Func`2<T,System.Boolean>)
// 0x00000502 System.IDisposable Niantic.Lightship.Maps.Extensions.ReaderWriterLockExtensions::ScopedReadLock(System.Threading.ReaderWriterLockSlim)
extern void ReaderWriterLockExtensions_ScopedReadLock_m823C63716AB5E9DC7F8A03BC60CA16FC44D4C4E9 (void);
// 0x00000503 System.IDisposable Niantic.Lightship.Maps.Extensions.ReaderWriterLockExtensions::ScopedWriteLock(System.Threading.ReaderWriterLockSlim)
extern void ReaderWriterLockExtensions_ScopedWriteLock_mA246FBAA78366A47E4060A00CD109127A03A28B2 (void);
// 0x00000504 System.Collections.ObjectModel.ReadOnlyCollection`1<T> Niantic.Lightship.Maps.Extensions.ReadOnlyCollectionEx::Empty()
// 0x00000505 System.Collections.ObjectModel.ReadOnlyCollection`1<T> Niantic.Lightship.Maps.Extensions.ReadOnlyCollectionEx::Create(T[])
// 0x00000506 System.Collections.ObjectModel.ReadOnlyCollection`1<T> Niantic.Lightship.Maps.Extensions.ReadOnlyCollectionEx/EmptyReadOnlyCollection`1::get_Value()
// 0x00000507 System.Void Niantic.Lightship.Maps.Extensions.ReadOnlyCollectionEx/EmptyReadOnlyCollection`1::.cctor()
// 0x00000508 System.Boolean Niantic.Lightship.Maps.Extensions.StringExtensions::IsEmpty(System.String)
extern void StringExtensions_IsEmpty_mAA0DF5E0068F241B241237753759949A758C7FD3 (void);
// 0x00000509 System.String Niantic.Lightship.Maps.Extensions.StringExtensions::NullIfEmpty(System.String)
extern void StringExtensions_NullIfEmpty_mC45D2A0F4F91A36CA855CBC147DB286D02EC156D (void);
// 0x0000050A System.String Niantic.Lightship.Maps.Extensions.StringExtensions::NullIfEmptyOrWhitespace(System.String)
extern void StringExtensions_NullIfEmptyOrWhitespace_mC561FAF5BE8807D5BB34E0E3D34A69515B712668 (void);
// 0x0000050B System.Void Niantic.Lightship.Maps.Exceptions.BundledTileFetchException::.ctor(System.String)
extern void BundledTileFetchException__ctor_m1CF05CE521716714F7BE36970F47A5431013A123 (void);
// 0x0000050C System.Void Niantic.Lightship.Maps.Exceptions.BundleDownloadException::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void BundleDownloadException__ctor_m40BC94C5469B27519A8C5F5E5E5B2BEBF2FC8ADC (void);
// 0x0000050D System.Void Niantic.Lightship.Maps.Exceptions.TileDataMissingException::.ctor(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileDataMissingException__ctor_m1C29C0292472498AC80A7C762E869C853902CACD (void);
// 0x0000050E System.Void Niantic.Lightship.Maps.Exceptions.LightshipMapsSystemException::.ctor(System.String)
extern void LightshipMapsSystemException__ctor_m2767F733E7153883AA2A3F17F45AC90A9D75C085 (void);
// 0x0000050F System.Void Niantic.Lightship.Maps.Exceptions.LightshipMapsSystemNotInitializedException::.ctor(System.String)
extern void LightshipMapsSystemNotInitializedException__ctor_m04243328DA0D2B7F898AD2F54076F3960BDDBC2D (void);
// 0x00000510 System.Void Niantic.Lightship.Maps.Exceptions.LightshipMapsSystemNotInitializedException::.ctor()
extern void LightshipMapsSystemNotInitializedException__ctor_m68A631505A9C0EB079EAB439A72B7E0CAC2A3450 (void);
// 0x00000511 System.String Niantic.Lightship.Maps.Exceptions.LightshipMapsSystemNotInitializedException::GetMessage()
extern void LightshipMapsSystemNotInitializedException_GetMessage_mF73477412516D0C3B282B4A51281E9125104657B (void);
// 0x00000512 System.Void Niantic.Lightship.Maps.Exceptions.MaptileException::.ctor(System.String)
extern void MaptileException__ctor_m987E0DB43B9469D08C5F8995936E3EDC7A53567E (void);
// 0x00000513 System.Void Niantic.Lightship.Maps.Exceptions.SettingsServiceException::.ctor(System.String)
extern void SettingsServiceException__ctor_m208E60A40471EC6D1BD77FCDE64B715F9AE43125 (void);
// 0x00000514 System.Void Niantic.Lightship.Maps.Exceptions.InvalidLightshipApiKeyException::.ctor(System.String)
extern void InvalidLightshipApiKeyException__ctor_m98CBB0D868429AF7ED62AC2422D36B2F1A20198D (void);
// 0x00000515 System.String Niantic.Lightship.Maps.Exceptions.InvalidLightshipApiKeyException::GetMessage(System.String)
extern void InvalidLightshipApiKeyException_GetMessage_m73BD98BC7CBE24AE3D4D1A5FE65441B711F0DEE8 (void);
// 0x00000516 System.Boolean Niantic.Lightship.Maps.Coordinates.LatLng::get_IsValid()
extern void LatLng_get_IsValid_m76594511FF4D053B38072CE99CA879B75805A23C (void);
// 0x00000517 System.Boolean Niantic.Lightship.Maps.Coordinates.LatLng::Equals(Niantic.Lightship.Maps.Coordinates.LatLng&)
extern void LatLng_Equals_m77646C2590FE2894A6BC36581C49229207D05646 (void);
// 0x00000518 System.Boolean Niantic.Lightship.Maps.Coordinates.LatLng::Equals(System.Object)
extern void LatLng_Equals_m243F2E01855E6993F794BB5DB24CB17906E99CF1 (void);
// 0x00000519 System.Boolean Niantic.Lightship.Maps.Coordinates.LatLng::op_Equality(Niantic.Lightship.Maps.Coordinates.LatLng&,Niantic.Lightship.Maps.Coordinates.LatLng&)
extern void LatLng_op_Equality_m85D38888C53329E983479FD0E7CC84AE1CDBA3E0 (void);
// 0x0000051A System.Boolean Niantic.Lightship.Maps.Coordinates.LatLng::op_Inequality(Niantic.Lightship.Maps.Coordinates.LatLng&,Niantic.Lightship.Maps.Coordinates.LatLng&)
extern void LatLng_op_Inequality_m9451A7E2D06A4E5C1A5DCBE136DED548C3AAF44C (void);
// 0x0000051B System.Int32 Niantic.Lightship.Maps.Coordinates.LatLng::GetHashCode()
extern void LatLng_GetHashCode_mDB608D3898A8F8A398779956BE8FD3B5BB580ABD (void);
// 0x0000051C System.Void Niantic.Lightship.Maps.Coordinates.LatLng::.ctor(System.Double,System.Double)
extern void LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3 (void);
// 0x0000051D System.Double Niantic.Lightship.Maps.Coordinates.LatLng::WrapLongitude(System.Double)
extern void LatLng_WrapLongitude_m0CBC4770E68195A483B975A624B569773EE71C3D (void);
// 0x0000051E System.Double Niantic.Lightship.Maps.Coordinates.LatLng::ClampLatitude(System.Double)
extern void LatLng_ClampLatitude_mCE1F8D612E298A11DA18CE49BBB7D11CF6BAF2D3 (void);
// 0x0000051F Niantic.Lightship.Maps.Coordinates.WebMercator12 Niantic.Lightship.Maps.Coordinates.LatLng::ToWebMercator12(System.Double)
extern void LatLng_ToWebMercator12_mB60A487AA9984E27A6C892DB1072779034A16C01 (void);
// 0x00000520 System.String Niantic.Lightship.Maps.Coordinates.LatLng::ToString()
extern void LatLng_ToString_m02258B6022FF2D9810E6E6DA621A661F400A6255 (void);
// 0x00000521 System.Double Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertMapYToLatRadians(System.Double)
extern void MapCoordinates_ConvertMapYToLatRadians_mC57686E5F45C08525ABD04B8004684FAC0B7ED70 (void);
// 0x00000522 System.Int32 Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertLngRadiansToMapX(System.Double)
extern void MapCoordinates_ConvertLngRadiansToMapX_mEE2F53439F713EBB825D7541B3CB46A71C3F8351 (void);
// 0x00000523 System.Int32 Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertLatRadiansToMapY(System.Double)
extern void MapCoordinates_ConvertLatRadiansToMapY_m937E64CA7CD9C3051E4B41A4EC75C8F0EA6E244A (void);
// 0x00000524 System.Int32 Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertTileToMap(System.Int32,System.Int32)
extern void MapCoordinates_ConvertTileToMap_m2B7A0E355089EF4E98CF43B4FE405807177C7FF6 (void);
// 0x00000525 System.Int32 Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertMapToTile(System.Int32,System.Int32)
extern void MapCoordinates_ConvertMapToTile_mFEB61735803DBE1D9CC50F9DB35564B301D0DAEF (void);
// 0x00000526 System.Int32 Niantic.Lightship.Maps.Coordinates.MapCoordinates::ConvertMapToTileOffset(System.Int32,System.Int32)
extern void MapCoordinates_ConvertMapToTileOffset_mC75AE0B8CCC1B097039BEFB9A1C8FDD0D1755A42 (void);
// 0x00000527 System.Double Niantic.Lightship.Maps.Coordinates.Mercator::FromLongitude(System.Double)
extern void Mercator_FromLongitude_mB98CC7335584163182B0096D3C313A1471980EE5 (void);
// 0x00000528 System.Double Niantic.Lightship.Maps.Coordinates.Mercator::ToLongitude(System.Double)
extern void Mercator_ToLongitude_mE8E15FF31D4B4FFA04A6EA3BEF2F903623596413 (void);
// 0x00000529 System.Double Niantic.Lightship.Maps.Coordinates.Mercator::FromLatitude(System.Double)
extern void Mercator_FromLatitude_m24E2574C95BFC0AF2DDA81F1CD073110B4774FAB (void);
// 0x0000052A System.Double Niantic.Lightship.Maps.Coordinates.Mercator::ToLatitude(System.Double)
extern void Mercator_ToLatitude_m37FCF40B7FB7E8F1BD72B50B2F4BEA1EE0B4B0F2 (void);
// 0x0000052B System.Void Niantic.Lightship.Maps.Coordinates.Mercator::.cctor()
extern void Mercator__cctor_m530283EB92BF2A16FAF1CCC0A8CC5AF0D837AA80 (void);
// 0x0000052C System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::WrapLongitudeDegrees(System.Double)
extern void SphericalMercator_WrapLongitudeDegrees_mAF7D92A12C856CAB0C70DB5F05E4216D6A3A9CAC (void);
// 0x0000052D System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::ClampLatitudeDegrees(System.Double)
extern void SphericalMercator_ClampLatitudeDegrees_mEF31DA087DFCEE754EEFEFC027CB4B01134D9EB7 (void);
// 0x0000052E System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::FromLongitude(System.Double)
extern void SphericalMercator_FromLongitude_m768E230E1A25AEA15026905EB06BBFF9A1E3C7D4 (void);
// 0x0000052F System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::ToLongitude(System.Double)
extern void SphericalMercator_ToLongitude_m617BB3D0195C4B3A75D2B815564043B1E1148D53 (void);
// 0x00000530 System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::FromLatitude(System.Double)
extern void SphericalMercator_FromLatitude_m84C1CDF3804E78DD466E0A039B2B818FEB1AE248 (void);
// 0x00000531 System.Double Niantic.Lightship.Maps.Coordinates.SphericalMercator::ToLatitude(System.Double)
extern void SphericalMercator_ToLatitude_m18568FB4FD11EA2515B38CC74A4E7DFBD389789A (void);
// 0x00000532 System.Void Niantic.Lightship.Maps.Coordinates.TileCoord::.ctor(System.Int32,System.Int32,System.Int32)
extern void TileCoord__ctor_mC565D339E18C327364CC63A02B69091783DB52DC (void);
// 0x00000533 System.String Niantic.Lightship.Maps.Coordinates.TileCoord::ToString()
extern void TileCoord_ToString_m02101886ADDCB2243AC1C182F7F6A68829941C70 (void);
// 0x00000534 System.UInt64 Niantic.Lightship.Maps.Coordinates.TileCoord::IndexFromLevelAndMapCoordinates(System.Int32,System.Int32,System.Int32)
extern void TileCoord_IndexFromLevelAndMapCoordinates_m572C61F7B0122EE9A6918A70040EB5DB07D6C799 (void);
// 0x00000535 System.UInt64 Niantic.Lightship.Maps.Coordinates.TileCoord::IndexFromLevelAndTileCoordinates(System.Int32,System.Int32,System.Int32)
extern void TileCoord_IndexFromLevelAndTileCoordinates_mDF38A325EC0A2789280B137B6F843744A00C849C (void);
// 0x00000536 Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Coordinates.TileCoord::FromIndex(System.UInt64)
extern void TileCoord_FromIndex_mA87A9FEF406C3B7E9FECF2DE09C6CB2989B676A3 (void);
// 0x00000537 System.String Niantic.Lightship.Maps.Coordinates.TileCoord::ToStringFromIndex(System.UInt64)
extern void TileCoord_ToStringFromIndex_mE80E33EE3303EB70CCDD18EBEECB2F516D338C8E (void);
// 0x00000538 System.Int32 Niantic.Lightship.Maps.Coordinates.TileCoord::TileZoomFromIndex(System.UInt64)
extern void TileCoord_TileZoomFromIndex_m519D7EA2ABD0B5D36D14B9A55888FE4EC6BD1915 (void);
// 0x00000539 System.Int32 Niantic.Lightship.Maps.Coordinates.TileCoord::TileXFromIndex(System.UInt64)
extern void TileCoord_TileXFromIndex_mEBC4854EE1A392BFC53F25CD45EDB1C9515FE7B4 (void);
// 0x0000053A System.Int32 Niantic.Lightship.Maps.Coordinates.TileCoord::TileYFromIndex(System.UInt64)
extern void TileCoord_TileYFromIndex_m6943BB63CC4BB808A7B88129704C2D382E60F508 (void);
// 0x0000053B Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Coordinates.TileCoord::TileWithCoord(System.Int32,System.Int32,System.Int32)
extern void TileCoord_TileWithCoord_mECDBDB7539CE493B9DB73B9138F8182F653FAFCF (void);
// 0x0000053C Niantic.Lightship.Maps.Coordinates.TileCoord Niantic.Lightship.Maps.Coordinates.TileCoord::TileNearCoord(System.Int32,System.Int32,System.Int32)
extern void TileCoord_TileNearCoord_m976410738FF3003CEBDCC99BE3800F6B17D60360 (void);
// 0x0000053D System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::Equals(Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_Equals_m7C0F01B97FDD9DECB3068A170F16C7501E816672 (void);
// 0x0000053E System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::Equals(System.Object)
extern void TileCoord_Equals_m50F23F6679AAFDE7E4BFB41C9BC5024991CC9000 (void);
// 0x0000053F System.Int32 Niantic.Lightship.Maps.Coordinates.TileCoord::GetHashCode()
extern void TileCoord_GetHashCode_mF6899B18C86D7EE4C3392EB72CD618F4A491AE36 (void);
// 0x00000540 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_Equality(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_Equality_mC5A86F82C1F10A92BA2DF1C5734C0A000C318B9F (void);
// 0x00000541 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_Inequality(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_Inequality_m06F5B5885D6CF99525CF2AEDE746D034A840EDAC (void);
// 0x00000542 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_LessThan(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_LessThan_mC7A78344CA8C6C2616D55DF61C1D58DD808154FB (void);
// 0x00000543 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_LessThanOrEqual(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_LessThanOrEqual_m19C30C8B9E68426B3BB95BD94C174F861F42D98E (void);
// 0x00000544 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_GreaterThan(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_GreaterThan_mC8BB239DA3773CB85E594AB511F458F029C1BE7F (void);
// 0x00000545 System.Boolean Niantic.Lightship.Maps.Coordinates.TileCoord::op_GreaterThanOrEqual(Niantic.Lightship.Maps.Coordinates.TileCoord,Niantic.Lightship.Maps.Coordinates.TileCoord)
extern void TileCoord_op_GreaterThanOrEqual_m6534302AE5E943944DF77A07F05D52BE0F36ADED (void);
// 0x00000546 System.Void Niantic.Lightship.Maps.Coordinates.Vector3D::.ctor(System.Double,System.Double,System.Double)
extern void Vector3D__ctor_m7F9C7CA511F33FDB09E3E158767F11EDDA88256E (void);
// 0x00000547 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_Addition(Niantic.Lightship.Maps.Coordinates.Vector3D&,Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void Vector3D_op_Addition_m8E38AD5E60931A4A2D594EF82DBB46BA4529F666 (void);
// 0x00000548 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_Subtraction(Niantic.Lightship.Maps.Coordinates.Vector3D&,Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void Vector3D_op_Subtraction_m34C3CEC5A2F429617FF6AA7600E370E0536A0C43 (void);
// 0x00000549 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_UnaryNegation(Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void Vector3D_op_UnaryNegation_m091DE9B699A50BAA3FB0EFDF418277E4D952DDF1 (void);
// 0x0000054A Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_Multiply(Niantic.Lightship.Maps.Coordinates.Vector3D&,System.Double)
extern void Vector3D_op_Multiply_m940251D2D9DE033FAE22037980EDDD98ADD18713 (void);
// 0x0000054B Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_Multiply(System.Double,Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void Vector3D_op_Multiply_mF0A047E85347F572DF7D226F41D26D79A6B797C3 (void);
// 0x0000054C Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.Vector3D::op_Division(Niantic.Lightship.Maps.Coordinates.Vector3D&,System.Double)
extern void Vector3D_op_Division_m243D5BFE1D9B4B3BAA185C8F2A54AA248B6A00F2 (void);
// 0x0000054D UnityEngine.Vector3 Niantic.Lightship.Maps.Coordinates.Vector3D::op_Explicit(Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void Vector3D_op_Explicit_m3353E7CD26C7BCA81121830398E002B23365AFD2 (void);
// 0x0000054E System.Double Niantic.Lightship.Maps.Coordinates.Vector3D::get_Magnitude()
extern void Vector3D_get_Magnitude_m3A01CB20E8B3B628EFCAD070ED73E9664A54E8AF (void);
// 0x0000054F System.Double Niantic.Lightship.Maps.Coordinates.Vector3D::get_MagnitudeSquared()
extern void Vector3D_get_MagnitudeSquared_m5522997D2B213C71AE24BECD5756FFDFCAFA40B1 (void);
// 0x00000550 System.Int32 Niantic.Lightship.Maps.Coordinates.WebMercator::MaxTileCoord(System.Int32)
extern void WebMercator_MaxTileCoord_mF9250F02EFA1F217E1BE3273D99CE889CF4834E8 (void);
// 0x00000551 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator::CheckZoomLevel(System.Int32)
extern void WebMercator_CheckZoomLevel_m55172D7D15C01B448889953FD13C970B27E93BA4 (void);
// 0x00000552 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator::CheckLongitudeCoord(System.Double,System.Int32)
extern void WebMercator_CheckLongitudeCoord_m9836FEEDE53B23462B90542BC5BB6369F302956B (void);
// 0x00000553 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator::CheckLatitudeCoord(System.Double,System.Int32)
extern void WebMercator_CheckLatitudeCoord_m091391C02E2777337525A27D323DBB3FAD1DD23F (void);
// 0x00000554 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator::CheckLongitudeDegrees(System.Double)
extern void WebMercator_CheckLongitudeDegrees_m3402B02B8D4B280E1DE3EAB7CC7457AFC21C7B62 (void);
// 0x00000555 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator::CheckLatitudeDegrees(System.Double)
extern void WebMercator_CheckLatitudeDegrees_mAD350CD8F16D9DFF0EC7F59D380DFFCE5756E5A4 (void);
// 0x00000556 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::WrapLongitudeDegrees(System.Double)
extern void WebMercator_WrapLongitudeDegrees_mE523B24B1983CCCFA7888FA9F698A32519C9FB0B (void);
// 0x00000557 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::WrapLongitudeCoord(System.Double,System.Int32)
extern void WebMercator_WrapLongitudeCoord_m0CD30105FAE0D4A43E88A19B00B5C0C8F532AD0B (void);
// 0x00000558 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ClampLatitudeDegrees(System.Double)
extern void WebMercator_ClampLatitudeDegrees_mA258D4A3A5BE82CAF07EA22783E32F22E31330E6 (void);
// 0x00000559 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ClampLatitudeCoord(System.Double,System.Int32)
extern void WebMercator_ClampLatitudeCoord_m65B8191672270173BA620C58D5884B14242E94C9 (void);
// 0x0000055A System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::FromLongitude(System.Double,System.Int32)
extern void WebMercator_FromLongitude_m3D2F67314A92DB7526F4D0EA1E9EE0F33CCE5910 (void);
// 0x0000055B System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ToWrappedLongitude(System.Double,System.Int32)
extern void WebMercator_ToWrappedLongitude_mFC263431BEBEAAC74A9A483969D099F6BB572FA1 (void);
// 0x0000055C System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ToLongitude(System.Double,System.Int32)
extern void WebMercator_ToLongitude_m2FE61EDDFC4C8638ED7F585E2BD2FA4040EE1394 (void);
// 0x0000055D System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::FromLatitude(System.Double,System.Int32)
extern void WebMercator_FromLatitude_mDCA8221665A70EE1D9CC5BE1AA66ECD071616B6B (void);
// 0x0000055E System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ToClampedLatitude(System.Double,System.Int32)
extern void WebMercator_ToClampedLatitude_m23C991102047B2E79D698CBDAF8B284EB568E67A (void);
// 0x0000055F System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ToLatitude(System.Double,System.Int32)
extern void WebMercator_ToLatitude_m6CDE7C262DF693D61859565749736043A18E9B7F (void);
// 0x00000560 System.Int64 Niantic.Lightship.Maps.Coordinates.WebMercator::TileIndex(System.Double,System.Double)
extern void WebMercator_TileIndex_m820BAAAADD82B5B0785F909D57F55950F7552B44 (void);
// 0x00000561 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::ToZoomLevel(System.Double,System.Double)
extern void WebMercator_ToZoomLevel_m8791826811BE54E3D5E60E2B71E7DB78E5B62A40 (void);
// 0x00000562 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator::GetMetersPerUnit(System.Double,System.Double)
extern void WebMercator_GetMetersPerUnit_m94AB45191EDFF607CF1CE41DF5BEAB3385DCAF65 (void);
// 0x00000563 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator12::.ctor(Niantic.Lightship.Maps.Coordinates.Vector3D&)
extern void WebMercator12__ctor_m3F52E557ADC9E07356F4E1A48B2B56B87822BC50 (void);
// 0x00000564 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator12::.ctor(UnityEngine.Vector3)
extern void WebMercator12__ctor_mFDB7485166BCEC18BCED0AC4389D6E44F77EB1C1 (void);
// 0x00000565 System.Void Niantic.Lightship.Maps.Coordinates.WebMercator12::.ctor(System.Double,System.Double,System.Double)
extern void WebMercator12__ctor_m8DE8E518A2F6285466410B3FAA97D756F88D4B2C (void);
// 0x00000566 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::WrapLongitudeDegrees(System.Double)
extern void WebMercator12_WrapLongitudeDegrees_m8552398CB166790C056830FD672BB0074B1F7EC2 (void);
// 0x00000567 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::ClampLatitudeDegrees(System.Double)
extern void WebMercator12_ClampLatitudeDegrees_m95F6790249711635A50F8E52770C358C41D9F9C3 (void);
// 0x00000568 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::WrapLongitudeCoord(System.Double)
extern void WebMercator12_WrapLongitudeCoord_m860300D172F6F621CBFFD5C01B08AEAE963746B7 (void);
// 0x00000569 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::ClampLatitudeCoord(System.Double)
extern void WebMercator12_ClampLatitudeCoord_m5162E2CA4F79380B9906EE69234383A7E2C0E942 (void);
// 0x0000056A System.Int32 Niantic.Lightship.Maps.Coordinates.WebMercator12::WrapLongitudeCoord(System.Int32)
extern void WebMercator12_WrapLongitudeCoord_m3DED8F7B45AC588669E921818077503C8B6CB237 (void);
// 0x0000056B System.Int32 Niantic.Lightship.Maps.Coordinates.WebMercator12::ClampLatitudeCoord(System.Int32)
extern void WebMercator12_ClampLatitudeCoord_mE9EF7C22E6D679502BE43BDCCD7767D0E76BC7BE (void);
// 0x0000056C System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::FromLongitude(System.Double)
extern void WebMercator12_FromLongitude_m6C63B13C6D9799747F34C9E25618B42C3EE9BBF7 (void);
// 0x0000056D System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::FromLatitude(System.Double)
extern void WebMercator12_FromLatitude_m5BE4BF76E9E2E8F10732D2EF2BF2A0BEE7329B91 (void);
// 0x0000056E System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::ToLatitude(System.Double)
extern void WebMercator12_ToLatitude_m7E4614EC0CF6E62B4F85A9D0D7915063926C7EA1 (void);
// 0x0000056F System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::ToLongitude(System.Double)
extern void WebMercator12_ToLongitude_m875052D3D14BA6171149EF03CA3DD769C137E87B (void);
// 0x00000570 System.Double Niantic.Lightship.Maps.Coordinates.WebMercator12::GetMetersPerUnit(System.Double)
extern void WebMercator12_GetMetersPerUnit_m0ACEA40D68A3A3251078CF64C6AE7CD106BDB089 (void);
// 0x00000571 Niantic.Lightship.Maps.Coordinates.Vector3D Niantic.Lightship.Maps.Coordinates.WebMercator12::ToVector3D()
extern void WebMercator12_ToVector3D_m4D091D62B586256A9F81C3B69D99C629B4826ED2 (void);
// 0x00000572 Niantic.Lightship.Maps.Coordinates.LatLng Niantic.Lightship.Maps.Coordinates.WebMercator12::ToLatLng()
extern void WebMercator12_ToLatLng_m6C19602BAF0B3B05E7054621B59887900AFF33D8 (void);
// 0x00000573 System.String Niantic.Lightship.Maps.Coordinates.WebMercator12::ToString()
extern void WebMercator12_ToString_m1FE98390CC2E9397D2CDE8F52963B646FDB35EF4 (void);
// 0x00000574 System.Collections.Generic.Dictionary`2<TKey,TValue> Niantic.Lightship.Maps.Collections.DictionaryEx::Empty()
// 0x00000575 System.Collections.Generic.Dictionary`2<TKey,TValue> Niantic.Lightship.Maps.Collections.DictionaryEx/EmptyDictionary`2::get_Value()
// 0x00000576 System.Void Niantic.Lightship.Maps.Collections.DictionaryEx/EmptyDictionary`2::.cctor()
// 0x00000577 System.Void Niantic.Lightship.Maps.Collections.DisposableDictionary`2::Dispose()
// 0x00000578 System.Void Niantic.Lightship.Maps.Collections.DisposableDictionary`2::.ctor()
// 0x00000579 System.Void Niantic.Lightship.Maps.Collections.DisposableList`1::Dispose()
// 0x0000057A System.Void Niantic.Lightship.Maps.Collections.DisposableList`1::.ctor()
// 0x0000057B System.Collections.Generic.List`1<T> Niantic.Lightship.Maps.Collections.ListEx::Empty()
// 0x0000057C System.Collections.Generic.List`1<T> Niantic.Lightship.Maps.Collections.ListEx/EmptyList`1::get_Value()
// 0x0000057D System.Void Niantic.Lightship.Maps.Collections.ListEx/EmptyList`1::.cctor()
// 0x0000057E System.Threading.Tasks.TaskCompletionSource`1<TResult> Niantic.Lightship.Maps.Async.TaskCompletionSourceEx::CreateAsyncTaskCompletionSource()
// 0x0000057F Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaitable Niantic.Lightship.Maps.Async.ThreadScheduler::SwitchToThreadPoolThreadAsync()
extern void ThreadScheduler_SwitchToThreadPoolThreadAsync_m52AED678E14371959532D229440254E50294CFC0 (void);
// 0x00000580 Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaitable Niantic.Lightship.Maps.Async.ThreadScheduler::SwitchToMainThreadAsync()
extern void ThreadScheduler_SwitchToMainThreadAsync_m77BE3296BDD7366A8F59A1D7544925489A84ECE4 (void);
// 0x00000581 System.Threading.SynchronizationContext Niantic.Lightship.Maps.Async.Internal.IMainThread::get_SynchronizationContext()
// 0x00000582 System.Boolean Niantic.Lightship.Maps.Async.Internal.IMainThread::get_IsCurrentThreadMain()
// 0x00000583 System.Threading.SynchronizationContext Niantic.Lightship.Maps.Async.Internal.MainThread::get_SynchronizationContext()
extern void MainThread_get_SynchronizationContext_m4B97F2287FC1F6CCCAD2BD2E2517A5BA1DB87E9A (void);
// 0x00000584 System.Boolean Niantic.Lightship.Maps.Async.Internal.MainThread::get_IsCurrentThreadMain()
extern void MainThread_get_IsCurrentThreadMain_mB5A1985426A0F3CCDDD0CBE416B2561687E695DA (void);
// 0x00000585 Niantic.Lightship.Maps.Async.Internal.IMainThread Niantic.Lightship.Maps.Async.Internal.MainThread::get_Instance()
extern void MainThread_get_Instance_mAF8CAAE767731CCC7692FBE653B9865E12E89C3B (void);
// 0x00000586 System.Void Niantic.Lightship.Maps.Async.Internal.MainThread::set_Instance(Niantic.Lightship.Maps.Async.Internal.IMainThread)
extern void MainThread_set_Instance_m2A94B914643653EFF69E1E65C2B28DE2CCF7FCC7 (void);
// 0x00000587 System.Void Niantic.Lightship.Maps.Async.Internal.MainThread::.ctor()
extern void MainThread__ctor_m1130902D4014F4D75CD42B33856E5EA11FC84B92 (void);
// 0x00000588 System.Void Niantic.Lightship.Maps.Async.Internal.MainThread::Initialize()
extern void MainThread_Initialize_m5E501E5CBA22A05BB7EB1BA15792D8A59DB28E6E (void);
// 0x00000589 Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter Niantic.Lightship.Maps.Async.ExtensionMethods.AsyncOperationExtensions::GetAwaiter(UnityEngine.AsyncOperation)
extern void AsyncOperationExtensions_GetAwaiter_m4077F5488B07C1A0BBABAA48EE08EE2B4EB0AA68 (void);
// 0x0000058A System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::FireAndForget(System.Threading.Tasks.Task)
extern void TaskExtensions_FireAndForget_mC419B143DD820B587E7829F01C1E60A170BCA7EC (void);
// 0x0000058B System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::FireAndForget(Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaitable)
extern void TaskExtensions_FireAndForget_m1C859337EF7E4F199FD4645C9B38DCA0D27623FC (void);
// 0x0000058C System.Runtime.CompilerServices.ConfiguredTaskAwaitable Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::ContinueOnCurrentThread(System.Threading.Tasks.Task)
extern void TaskExtensions_ContinueOnCurrentThread_mFF179D59F45E7685B0FF43BD773D49420940CB92 (void);
// 0x0000058D System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<T> Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::ContinueOnCurrentThread(System.Threading.Tasks.Task`1<T>)
// 0x0000058E System.Runtime.CompilerServices.ConfiguredTaskAwaitable Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::ContinueOnAnyThread(System.Threading.Tasks.Task)
extern void TaskExtensions_ContinueOnAnyThread_m237558A851924DED0F141484186CCAD305E6458C (void);
// 0x0000058F System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<T> Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::ContinueOnAnyThread(System.Threading.Tasks.Task`1<T>)
// 0x00000590 System.Threading.Tasks.Task Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::<FireAndForget>g__AwaitInternal|0_0(System.Threading.Tasks.Task)
extern void TaskExtensions_U3CFireAndForgetU3Eg__AwaitInternalU7C0_0_m772A42A548C7C874E2F7935CE6A6B4C69FDEC258 (void);
// 0x00000591 System.Threading.Tasks.Task Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions::<FireAndForget>g__AwaitInternal|1_0(Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaitable)
extern void TaskExtensions_U3CFireAndForgetU3Eg__AwaitInternalU7C1_0_m99B072FBCB36553D45D2E131D62EC2F3B28B71C8 (void);
// 0x00000592 System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions/<<FireAndForget>g__AwaitInternal|0_0>d::MoveNext()
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_MoveNext_m304D450E18BED26DEF4D14AB4AC5FCE7BA068F1B (void);
// 0x00000593 System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions/<<FireAndForget>g__AwaitInternal|0_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_SetStateMachine_m681329B4846F4A16A5C0BD2C0B87937165A55B2A (void);
// 0x00000594 System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions/<<FireAndForget>g__AwaitInternal|1_0>d::MoveNext()
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_MoveNext_m313D0726100EFFD6DA7C318735D48165E9162A94 (void);
// 0x00000595 System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.TaskExtensions/<<FireAndForget>g__AwaitInternal|1_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_SetStateMachine_m985F5B8A1A9A54419C56A38E30781150B9DFF1D8 (void);
// 0x00000596 System.Boolean Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions::IsHttpError(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestExtensions_IsHttpError_m48DBB4E1B2115FD1FABAB3ED997E72257953DF04 (void);
// 0x00000597 System.Boolean Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions::IsNetworkError(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestExtensions_IsNetworkError_m017CDA1DC3080A30A5D4ED41FE3812DF31211AFD (void);
// 0x00000598 System.Boolean Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions::IsSuccessful(UnityEngine.Networking.UnityWebRequest)
extern void UnityWebRequestExtensions_IsSuccessful_m685FB848BFB28ADD4A0E0FCEF1F0A29BBD2D1099 (void);
// 0x00000599 System.Threading.Tasks.Task Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions::SendWebRequestAsync(UnityEngine.Networking.UnityWebRequest,System.Threading.CancellationToken)
extern void UnityWebRequestExtensions_SendWebRequestAsync_m25D039652F2B99F5C43841ED62414B9B13696A77 (void);
// 0x0000059A System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions/<SendWebRequestAsync>d__3::MoveNext()
extern void U3CSendWebRequestAsyncU3Ed__3_MoveNext_m702895B069B299B71E4F06C36966A23178C3EF66 (void);
// 0x0000059B System.Void Niantic.Lightship.Maps.Async.ExtensionMethods.UnityWebRequestExtensions/<SendWebRequestAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendWebRequestAsyncU3Ed__3_SetStateMachine_mB4C5C09C3AAF7B4F633AA6BA398E67300A76926C (void);
// 0x0000059C System.Void Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaitable::.ctor(System.Threading.Tasks.Task,System.Boolean)
extern void CustomExceptionHandlingAwaitable__ctor_m2B3448CFA11B10833733A51717D6BC27B6DD2727 (void);
// 0x0000059D Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaitable::GetAwaiter()
extern void CustomExceptionHandlingAwaitable_GetAwaiter_mBC590623257E4BE005A70296C4C340D4738DB10F (void);
// 0x0000059E System.Void Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter::.ctor(System.Threading.Tasks.Task,System.Boolean)
extern void CustomExceptionHandlingAwaiter__ctor_m0CC6FE659607D5C7A6C6E82257E8310C92437EF1 (void);
// 0x0000059F System.Boolean Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter::get_IsCompleted()
extern void CustomExceptionHandlingAwaiter_get_IsCompleted_mE2979F7D7DC42CFC3D0B3DCA939AB4754C200D5C (void);
// 0x000005A0 System.Void Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter::GetResult()
extern void CustomExceptionHandlingAwaiter_GetResult_mB6BD332E66C9F94B7474852C639C883952075315 (void);
// 0x000005A1 System.Void Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
extern void CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m104D5ABAA6523125A0B113EE71CF26C841829A02 (void);
// 0x000005A2 System.Void Niantic.Lightship.Maps.Async.Awaitables.CustomExceptionHandlingAwaiter::System.Runtime.CompilerServices.ICriticalNotifyCompletion.UnsafeOnCompleted(System.Action)
extern void CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m72FAA2327311B024DFB146863421ECE04E3693B3 (void);
// 0x000005A3 TAwaiter Niantic.Lightship.Maps.Async.Awaitables.IAwaitable`1::GetAwaiter()
// 0x000005A4 TAwaiter Niantic.Lightship.Maps.Async.Awaitables.IAwaitable`2::GetAwaiter()
// 0x000005A5 System.Boolean Niantic.Lightship.Maps.Async.Awaitables.IAwaiter::get_IsCompleted()
// 0x000005A6 System.Void Niantic.Lightship.Maps.Async.Awaitables.IAwaiter::GetResult()
// 0x000005A7 System.Boolean Niantic.Lightship.Maps.Async.Awaitables.IAwaiter`1::get_IsCompleted()
// 0x000005A8 TResult Niantic.Lightship.Maps.Async.Awaitables.IAwaiter`1::GetResult()
// 0x000005A9 System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaitable::.ctor(Niantic.Lightship.Maps.Async.Internal.IMainThread)
extern void MainThreadAwaitable__ctor_mF956182D2821924883EB7422678CE080CE3CBCC8 (void);
// 0x000005AA Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaitable::GetAwaiter()
extern void MainThreadAwaitable_GetAwaiter_m55E78620D1CD14AC7389A8BEAEF7580048B44F38 (void);
// 0x000005AB System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::.ctor(Niantic.Lightship.Maps.Async.Internal.IMainThread)
extern void MainThreadAwaiter__ctor_m11CE28EC7386079A555B8609B78A66E28754BD57 (void);
// 0x000005AC System.Boolean Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::get_IsCompleted()
extern void MainThreadAwaiter_get_IsCompleted_m64B2B57A97810DA8213D72821984DD39F225A3DA (void);
// 0x000005AD System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::GetResult()
extern void MainThreadAwaiter_GetResult_mB88EA4DFDD076E258C21B196369776E8BEBF95D8 (void);
// 0x000005AE System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
extern void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m18D29986129E36E27EBC7D093AB4A7CA71DC76C3 (void);
// 0x000005AF System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::System.Runtime.CompilerServices.ICriticalNotifyCompletion.UnsafeOnCompleted(System.Action)
extern void MainThreadAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m6DBF8928E70E14CB8E9190F5B9F10CFE99FFDD2F (void);
// 0x000005B0 System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter::OnCompletedInternal(System.Action)
extern void MainThreadAwaiter_OnCompletedInternal_m62C3FE5F0B63445569C193B8DB57F5CF8CD5DF51 (void);
// 0x000005B1 System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter/<>c::.cctor()
extern void U3CU3Ec__cctor_mF643E177785DBA3F6F2C1A871C4AD1BA9CDB0DEB (void);
// 0x000005B2 System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter/<>c::.ctor()
extern void U3CU3Ec__ctor_mF00BD1677EFDC9685EC6D5092207DDA3F536D18A (void);
// 0x000005B3 System.Void Niantic.Lightship.Maps.Async.Awaitables.MainThreadAwaiter/<>c::<OnCompletedInternal>b__7_0(System.Object)
extern void U3CU3Ec_U3COnCompletedInternalU3Eb__7_0_mEE93858C508B7CD82028F12EB823CE2CD856E7C1 (void);
// 0x000005B4 System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaitable::.ctor(System.Threading.Tasks.TaskScheduler)
extern void TaskSchedulerAwaitable__ctor_m8A9A37C1439FBCE5B18F63C71F5ED0178211F44F (void);
// 0x000005B5 Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaitable::GetAwaiter()
extern void TaskSchedulerAwaitable_GetAwaiter_m29D8B26FC6C2C64CEEA237767BAFB0E3163D2958 (void);
// 0x000005B6 System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter::.ctor(System.Threading.Tasks.TaskScheduler)
extern void TaskSchedulerAwaiter__ctor_mF04EC79FE11C01F03C0F356ABDCFF877C1BB5986 (void);
// 0x000005B7 System.Boolean Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter::get_IsCompleted()
extern void TaskSchedulerAwaiter_get_IsCompleted_m7D515D0139E98DD305C4033D5F9A981B65190E91 (void);
// 0x000005B8 System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter::GetResult()
extern void TaskSchedulerAwaiter_GetResult_mB6808B8DA6ED756F3D6B1246C398519A7F132835 (void);
// 0x000005B9 System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
extern void TaskSchedulerAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mE5809C9CE9EDABC1DC2F425B99916E59112268B8 (void);
// 0x000005BA System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter::System.Runtime.CompilerServices.ICriticalNotifyCompletion.UnsafeOnCompleted(System.Action)
extern void TaskSchedulerAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_mB596FA92ABC1EE97F8FCB93213DCFF5B2933C211 (void);
// 0x000005BB System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter/<>c::.cctor()
extern void U3CU3Ec__cctor_m624F929524E5054C0C50ACEEAC2AF219FFE3B593 (void);
// 0x000005BC System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter/<>c::.ctor()
extern void U3CU3Ec__ctor_m2A38AB6B2FE38573C641C115405161BC00E0CA85 (void);
// 0x000005BD System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter/<>c::<System.Runtime.CompilerServices.INotifyCompletion.OnCompleted>b__5_0(System.Object)
extern void U3CU3Ec_U3CSystem_Runtime_CompilerServices_INotifyCompletion_OnCompletedU3Eb__5_0_mF85E90604AC4F73666B443C1D0CA771555F7F0B9 (void);
// 0x000005BE System.Void Niantic.Lightship.Maps.Async.Awaitables.TaskSchedulerAwaiter/<>c::<System.Runtime.CompilerServices.ICriticalNotifyCompletion.UnsafeOnCompleted>b__6_0(System.Object)
extern void U3CU3Ec_U3CSystem_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompletedU3Eb__6_0_m921ABC13D8D759397B62FC8786EF6C662BB9640F (void);
// 0x000005BF System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter::.ctor(UnityEngine.AsyncOperation)
extern void UnityAsyncOperationAwaiter__ctor_m5C05156CFE2FC01E5BE4CF83F60C0F7542D91649 (void);
// 0x000005C0 System.Boolean Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter::get_IsCompleted()
extern void UnityAsyncOperationAwaiter_get_IsCompleted_mBB89F744813E25D00CC3E843F4687CDED8E9517B (void);
// 0x000005C1 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter::OnCompleted(System.Action)
extern void UnityAsyncOperationAwaiter_OnCompleted_mE2DBA03C63352975884018EE7BD352B016037B47 (void);
// 0x000005C2 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
extern void UnityAsyncOperationAwaiter_UnsafeOnCompleted_mF6ABD362C1E6B1C094782508479ABAB4B2699932 (void);
// 0x000005C3 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter::GetResult()
extern void UnityAsyncOperationAwaiter_GetResult_m319374AE9CE9E89C1FB17A1C7A812378731F0A9D (void);
// 0x000005C4 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m652055BFA6FEFCFB270BDA1E8B69BE135C6E6B09 (void);
// 0x000005C5 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter/<>c__DisplayClass4_0::<OnCompleted>b__0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_mBA525718B318B166C628B7A9752A1BB31398292B (void);
// 0x000005C6 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m9F728DECC8D2062BD177F917B0D2768BF5748913 (void);
// 0x000005C7 System.Void Niantic.Lightship.Maps.Async.Awaitables.UnityAsyncOperationAwaiter/<>c__DisplayClass5_0::<UnsafeOnCompleted>b__0(UnityEngine.AsyncOperation)
extern void U3CU3Ec__DisplayClass5_0_U3CUnsafeOnCompletedU3Eb__0_m469B4DDA6D549292A23174B9DFD3BFD68D02E451 (void);
static Il2CppMethodPointer s_methodPointers[1479] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LightshipMapsSystem_get_IsIdle_m8761BE320BEB4A933CA889AB83CC57CA461BB864,
	LightshipMapsSystem_get_TileStreamService_m1ACB56A1BD30890F508BEA933040DB2214A0613B,
	LightshipMapsSystem_get_MapViewManager_m46CD4BA6790D4A9447049AE767071B2BCABB45DD,
	LightshipMapsSystem_set_MapViewManager_m9A284D9DFC92B0D536A339D82484A84BD98B97E0,
	LightshipMapsSystem_get_Instance_m5D69C39811E6E69EC6E638A755174B7F8D434694,
	LightshipMapsSystem__ctor_mC8552A0D856020063E20D1B62109E9C51969403A,
	LightshipMapsSystem_Initialize_m9A73519ECD932BE35203458570260A1720B078A1,
	LightshipMapsSystem_InitializeInternal_m51371DD801BB624978585EF8236F5AC5B96DF36E,
	LightshipMapsSystem_Shutdown_m842B92017489B97AABF70AB8F634379966E40E67,
	LightshipMapsSystem_ProcessEvents_mED4B6C4C74601D59037B9F8B987BAEDA197D0841,
	ViewPoint_get_LongitudeDeg_mB83CF8355D7391AB1910239BAA7EEFE3CEB5FB2A,
	ViewPoint_get_LatitudeDeg_m82D97FDB02E08578758524B39E2C888BE4975DBA,
	ViewPoint_get_Invalid_m2B11C0D16E0AA7A2AAC3A272BE3F0E2940D5A187,
	ViewPoint_get_IsValid_m2F6D8A49D55832A7D9B2F068F2C202DE93C68C15,
	ViewPoint__ctor_mECD9AE12C943D343B1F57FC517F06656AF8EE800,
	ViewPoint__ctor_mE52B5974BA324D44C0E01A1B49915FC6E4E1964B,
	ViewPoint_WithNewLatLng_m11E5D552A6C2F6992FFDDE295A570E84887EA1B8,
	ViewPoint_WithNewMapRadius_m40A600EF9E60EC147046CB7D35F9FB00BC4986FB,
	ViewPoint_ToString_m22D7604D30895530E878DDC1336C5A087B5DCA48,
	MathEx_DegToRad_mE7E368425B9CF620F0822562579D83A1689ACB11,
	MathEx_RadToDeg_mC3E21305C0D676D4BD5BDDCA54FED4BFD449F3E9,
	MathEx_Clamp_m63C4BD1B08AF72AE6A24B1A2C142532265422190,
	MathEx_Clamp_m40EF9AB537E8F244CBC7B95AB58E4DC6B2E04D8C,
	MathEx_WrapInclusive_m03A0F6F78F7513286DABA8FB0B662211C0EA6B97,
	MathEx_WrapInclusive_m9E0206A772AF5157EB422E3D5AB2C7BB04383E40,
	MathEx_WrapExclusive_m520AFC956A72A8699599D984C28D580269A1FD17,
	MathEx_WrapExclusive_m85B1A0B4F77F8BA7780C0FE49F7D046FC8E4EF1E,
	MathEx_IsBetween_m36ADBACAC0D71975B2A39746EB57EFF050676F1A,
	MathEx_IsBetween_m1B1B19F9BF61FB00BF6C7BD4003F7B6F3C857438,
	MathEx_IsBetween_m1634E811D01B1C71FB6E88751BDE8F026031505D,
	MathEx_IsBetweenMaxExclusive_m9EC11579ABDE5981C94F05A8AAE62E94507EA426,
	MathEx_IsBetweenMaxExclusive_m73D400411CDFA2CD4AF2A2ACCC06173B0B21150F,
	MathEx_IsBetweenMaxExclusive_mCC72C41CE916DAF715471F34C4951A9600046985,
	MathEx_AlmostEqual_m68C083D313EAE4C98847AADFC67BF50F3A50B87D,
	MathEx_AlmostEqual_mDD96AAE121760C84715031371746D2935D973FC8,
	MapCompositionRootReflection_get_Descriptor_mE02496EC984E0ED6CA572EC10E00655B6DFEB2DC,
	MapCompositionRootReflection__cctor_m637AF1225FDD20B85688CDC65DF8B107ED736A9E,
	MapCompositionRoot_get_Parser_mAB7F060B59F92DFC8FFD45FFC89717DE0DFE0D47,
	MapCompositionRoot_get_Descriptor_mA2C8DF32E7B9EDECDEBEDE29E3C6340F16DEAD59,
	MapCompositionRoot_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m752B6D26C75F70F1D3B6E3554DECF26D23D6338C,
	MapCompositionRoot__ctor_m3C7D2354DD0452604D79B85C229A8C05F58E6F2A,
	MapCompositionRoot__ctor_mCCEF991A7DFC79A70B0B9E0390F69B8C332329F6,
	MapCompositionRoot_Clone_m29883C946C60F11168D1226A647D3DC2844574A1,
	MapCompositionRoot_get_MapArea_m7CED3B915CA907C66B541C3779A143FE761E413B,
	MapCompositionRoot_get_MapProvider_mE7CCA92BDF2A81471D6ECE736427B8209C2AA66A,
	MapCompositionRoot_Equals_mD4009C2EDAF57BD1973C5578ED7E88753F39CB1E,
	MapCompositionRoot_Equals_m27F931A84914BB9378FCC2821CAEBBB21D9FC1ED,
	MapCompositionRoot_GetHashCode_m80A1D2159127A84AA7D0E7018AD682883986C2E1,
	MapCompositionRoot_ToString_m061D4627866FE99F6372B2370C95F8D041EEA53C,
	MapCompositionRoot_WriteTo_m075D3E40707FD552883466C1043C0FAE3664B4C4,
	MapCompositionRoot_CalculateSize_mD61AA2B30C5E289C65D4CB83685BCA9769B9CA94,
	MapCompositionRoot_MergeFrom_m34B3EA8DD422009A455D253D9860BAA8B90E23A4,
	MapCompositionRoot_MergeFrom_mE399E79833FA183F2836373EC7FF8109EDA055F0,
	MapCompositionRoot__cctor_m412A2A554FD31981F2C4FCC37D83FB814CA96869,
	U3CU3Ec__cctor_m4FA4A35F9E30590431BDED8C0D10A0AD178E0A5D,
	U3CU3Ec__ctor_mC09BF4A809120CC58633DCE94A1E03F6E75806A9,
	U3CU3Ec_U3C_cctorU3Eb__29_0_m27C73362FD853AE4E390FB8D2C661135AC9BE97B,
	MapArea_get_Parser_mF9B19F6594941D2C087B3FA6D59B637089F0CB94,
	MapArea_get_Descriptor_m2A518F2F7763F3951D8B6EB74E8DF6988C14AEA9,
	MapArea_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m41605E3676FAA3CB1F928E747CEC4FADE93096E2,
	MapArea__ctor_m70993AFE0E597EA9AB93AF6817AD2723D24B0847,
	MapArea__ctor_m84441C295E22E582C79D40714C3C99F6C780580C,
	MapArea_Clone_m4538096CA2952FF1805985154BC4E8E0F179CF2F,
	MapArea_get_Description_mE5D1BCEE687874FDF5D80648A61DDA81C034C2C7,
	MapArea_set_Description_mC87FAE20E7199E510470BE2544B6E9173937CBE8,
	MapArea_get_Epoch_m276B0D81AA08087E4B2471B67EE98DE78E803964,
	MapArea_set_Epoch_m3342F11C7ABBDADE7289D672ECBABA7FFE4BB830,
	MapArea_get_MapProvider_m20CBB47559EEC64EE4E32996337F3294983CA366,
	MapArea_set_MapProvider_m67905D2DE508AF4372BD3C2457D981567CB247F2,
	MapArea_get_BoundingRect_m94B2AF3DD9480AB9893E35284713F33B4E0C35B8,
	MapArea_get_BlockedLabelName_m2F7A6A9E93CCCA1B98803BBA28A43A51063BE32C,
	MapArea_get_MinimumClientVersion_m16EF6005090A94628DEC66C7CC5D3D0647A72004,
	MapArea_set_MinimumClientVersion_m08DE849A3F8B7C6F0215D98ECC4C84052268607A,
	MapArea_get_TileEncryptionKey_m2AAB24E66E12628189504F4668FEE5BEBF3B7CA5,
	MapArea_set_TileEncryptionKey_m84F9EA6CFD2C4C6C8F9C2102C78C7910458745F1,
	MapArea_Equals_m017D961D51C0DA6367690304207BE74C33ADE59D,
	MapArea_Equals_m0BB18F23B375E30421501178C0CF6082F94FBB83,
	MapArea_GetHashCode_mA1246CABEA823055CA5BABE87623FC64A0D4C22F,
	MapArea_ToString_m52C9AE8EADDFA1586CBC54389BCC42A83BBE3E1D,
	MapArea_WriteTo_mCD0270778C4E54721BBD1B3DC2EEC5D67A1B1C30,
	MapArea_CalculateSize_mE4FC22CA9299644F87E6CD83DFDEBC1AF69659AD,
	MapArea_MergeFrom_m697B8E39832AE216CB008B6830D67A68BECCCD9E,
	MapArea_MergeFrom_m4EE313CB28FCBB38ED3C9AF8B81634333006A166,
	MapArea__cctor_m98E8393F6A87A8092881DFFFD4B178DC98C49E25,
	U3CU3Ec__cctor_m0C75F534DA730C2B1649CBE0394B8E6E50C55607,
	U3CU3Ec__ctor_m93CBB4375A72DA329C1BB15D55E8A603B2EE58C3,
	U3CU3Ec_U3C_cctorU3Eb__54_0_m0B5B22BF4DE269FEEA7E694EACC304D7B98423C2,
	MapProvider_get_Parser_mA4DD6F4F03EA3781CC88E752AFA93106091D7FE4,
	MapProvider_get_Descriptor_mA6A97B7A123E2C6BA069CEC110A23E89226E25A9,
	MapProvider_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m8356CF6809245428973842280AB926E297401525,
	MapProvider__ctor_mB274DFF2F59EEE459DB3B3907EC4165EFCAD8676,
	MapProvider__ctor_m3516FDD45A58B2F11271E2B2B497E20AF2836108,
	MapProvider_Clone_m9D9A66A9C0D0150D051B2D6499BD638D4158F3A1,
	MapProvider_get_Name_m08E4D511AC60547E3D89A2B647655C17213D0320,
	MapProvider_set_Name_m6505571F59999C4086CDA489F90D67246E33D214,
	MapProvider_get_BaseUrl_m273AED262FF68753259665EA7A2CAEBE3C145A39,
	MapProvider_set_BaseUrl_m98CE18FE7D2EDC2411E8985099472D169BFCCBEC,
	MapProvider_get_QueryFormat_mF5FB0B5F9243744B60F00562C5F9A02067DBA248,
	MapProvider_set_QueryFormat_mFB28FFCCA006ADCAF7AF6D8FFEDBE4F980E4CEED,
	MapProvider_get_MapType_m5A5ECFE1842C7ECA7399DE3A08C9BB4C90CBD8EF,
	MapProvider_set_MapType_m340A9E8EA31E0D230E36392961144A9C0A40D2A0,
	MapProvider_get_MinTileLevel_m274248BBE2A023A98F90A30AA1B2214A588294CE,
	MapProvider_set_MinTileLevel_mEBB776934CB4251948C2B96D2E08EEE4B0CDC8EA,
	MapProvider_get_MaxTileLevel_m264C1838C1A0D016D7E91406EB56883E81E21EBB,
	MapProvider_set_MaxTileLevel_mD15FCBC3429D36F41AA04D9517A2E8031A4A8289,
	MapProvider_Equals_m55A7360977918FBAD5EB2A56A073F98C7C6DE1D9,
	MapProvider_Equals_mAF4867D81AAA05B8E4EDBE3561C3A9CE225D3567,
	MapProvider_GetHashCode_m48551DD0F58340ED79A36BA67B79913F93769F78,
	MapProvider_ToString_m2FD9100B4D3479159B23654AE5A03A1266B00106,
	MapProvider_WriteTo_mDFDF7846EDD27F855669274C9FF45E258F8E71F0,
	MapProvider_CalculateSize_m4ECBEFD9ED648E0AE5A2B613708DE7CE39DB5839,
	MapProvider_MergeFrom_m1C66C3E0EFF36A990B051A75FBE1B9D713A30FD6,
	MapProvider_MergeFrom_m1535C7C3543F887C6F766723DA3BD0B91052C8C8,
	MapProvider__cctor_m4121A79802A1C23FBE9664A7F78D657F621745FB,
	U3CU3Ec__cctor_mF7C5059ED52DC802ED0F430D0911D57ED4B6F9E4,
	U3CU3Ec__ctor_m23EBE3878DCB742B82D986A72ADEEC3F8DEC19CC,
	U3CU3Ec_U3C_cctorU3Eb__50_0_mC26494B6721F7D1C990FBAD84D7B470B8982CE3D,
	BoundingRect_get_Parser_m4EA218FA3C5A130021B3BC459398B865D202F7F5,
	BoundingRect_get_Descriptor_mD196E525EE922963D972DA7D5EC4E50BEF8410C6,
	BoundingRect_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD1F6E1AC8BF28826E29974B0237EEEEB24BB0C31,
	BoundingRect__ctor_mF8969C46D57A9090566F6F7445E5534AF76510EA,
	BoundingRect__ctor_m2F0A139AFFAFC2C4A8F2DB7D241CD6AD76CD6072,
	BoundingRect_Clone_mFE3B7ECC96438D329C587513CCBAF55318A7FF3D,
	BoundingRect_get_North_m62F62F64376778B7C5FCBCA2A783E44CC87A1901,
	BoundingRect_set_North_m6468186CB28AB96639DBE7D74293046A55ABC9E5,
	BoundingRect_get_South_mFB9CED915F83872A0C47BDFCC367E163FC44C905,
	BoundingRect_set_South_m5C410E35887375753026B034BB2D4F7C4B87C419,
	BoundingRect_get_East_mBDEDD9C24F3D69C75B15C2CB3C15D20ECED6A476,
	BoundingRect_set_East_m33EA9F453829530F4F7C6E7298B7D1E31ED0828F,
	BoundingRect_get_West_m6FC91CFCB194F6061B7C4C3D481EE9937FE33F7D,
	BoundingRect_set_West_mA534389B0B70686576509A8C3B6406919742A27F,
	BoundingRect_Equals_mE77E76DBDE024DDE1E2AE39C716DBC8FBF40C4D0,
	BoundingRect_Equals_m2614A8D40B4E1352C31C3B5D7A73246E9542F3F4,
	BoundingRect_GetHashCode_m249C6391DF9C42EEF911B966D17152C343E5938A,
	BoundingRect_ToString_mD9866B69BBF4071554645A9FE0745DC7A377D546,
	BoundingRect_WriteTo_mE3ACEC1D762361131684F5CD92295F5BDADF2E71,
	BoundingRect_CalculateSize_m4F8FCCEEE008C226DA8633777204AF7E402CF7CC,
	BoundingRect_MergeFrom_mD2C9E9B84A3F2BD96F62044F37871EB4A62C0B22,
	BoundingRect_MergeFrom_m93C0C1934FE7184B00E2ED95CAD8686C9F0CA841,
	BoundingRect__cctor_m8FF00BA64D3C0D3E6B833B73AA220DF32F4E79FE,
	U3CU3Ec__cctor_m3EF99BB9F30D920C8F0622450C2107E3226FA7F9,
	U3CU3Ec__ctor_m897E9987CF997E6E43C328CAC0D65D92AAF0ABA6,
	U3CU3Ec_U3C_cctorU3Eb__39_0_m1C4C94D0716AAE35E1220875CAB842DD38AB490A,
	MaptilesApiReflection_get_Descriptor_m61DA7BDFF76AD460A26333FC9EBE7198E7F7C644,
	MaptilesApiReflection__cctor_mD5C2B0834817EF6B841019546AF664FB41854886,
	GetMaptilesSettingsRequest_get_Parser_m35B2878D23296C44417F691984A7CC62BE004E40,
	GetMaptilesSettingsRequest_get_Descriptor_m3C18124C3E08203627E6DE2D0BF7A0795AE64529,
	GetMaptilesSettingsRequest_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m59F8EF1B442FCE845223D87DB4023C857C872212,
	GetMaptilesSettingsRequest__ctor_m514FA97E49D37F2856092E437B0060717B02C724,
	GetMaptilesSettingsRequest__ctor_m95D21046CBA449EEE6439E7B95CA9ABD33B1D4D6,
	GetMaptilesSettingsRequest_Clone_m2434833101DBFE452300E4659A0A2E4F51B287CE,
	GetMaptilesSettingsRequest_get_UnitySdkVersion_mE319F2CFAB10FA5F1F7DCCEE7B994FD797362099,
	GetMaptilesSettingsRequest_set_UnitySdkVersion_mCC949823226C7158CF86527C5BFB99E6FA36D1B7,
	GetMaptilesSettingsRequest_get_EighthWallModuleVersion_m2C679E4FCFA7716A28EE9A2F07856DD648C212A1,
	GetMaptilesSettingsRequest_set_EighthWallModuleVersion_m9FA4F1BDE997C3F736553742AAF2F33C50D90142,
	GetMaptilesSettingsRequest_get_ClientVersionCase_m6EAD6DD76D53E4CD9003928F9C7B75D995165BB9,
	GetMaptilesSettingsRequest_ClearClientVersion_m730BA00C819457BFDB5D03781298F50ED345E3FD,
	GetMaptilesSettingsRequest_Equals_m298A904AB47A9CCBABDD0CA8FF95E4EC05343571,
	GetMaptilesSettingsRequest_Equals_m94F079E629ADC4761AB94363A9C6277A5DEB6868,
	GetMaptilesSettingsRequest_GetHashCode_m89361BFA3DB657E0F41E07AE798AEB6BAF480FA6,
	GetMaptilesSettingsRequest_ToString_m73F3014E86C220BACA3F3633EC8665D32D3C3BDF,
	GetMaptilesSettingsRequest_WriteTo_mFEC02844E0D7D3B5B29F60C877CE4C9AFEA97822,
	GetMaptilesSettingsRequest_CalculateSize_mD73ABFAFF5D040C9256BD3A355DD2C09BC637E11,
	GetMaptilesSettingsRequest_MergeFrom_mE26AC3EEA7916FBC016F8FE2B27172B3E4D854B7,
	GetMaptilesSettingsRequest_MergeFrom_m1EAB83B344FC5482C61DC5F9D1E4FC469A8B6F60,
	GetMaptilesSettingsRequest__cctor_m3242133F42ABA08092AEBAD3769E87BF6B5A3E0C,
	U3CU3Ec__cctor_m4C2CCB1FC536E2C60E893155143543AC470808B6,
	U3CU3Ec__ctor_mDC585BDC81B88356B8DB101CE2DE49FE72842029,
	U3CU3Ec_U3C_cctorU3Eb__33_0_m45F34D554281EE3D352E67BD6D62676B2C75039A,
	GetMaptilesSettingsResponse_get_Parser_mFFC4EDA1E401A467CDB54DB645BF488AE69CE59D,
	GetMaptilesSettingsResponse_get_Descriptor_m819AC032CD19D8F989229FFD9521BB4BE4FD89D3,
	GetMaptilesSettingsResponse_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13A2199C3C52D5B21ACACB563069873E0796C999,
	GetMaptilesSettingsResponse__ctor_m1A5EF17F746C8A16915D8CBA08F4726B49DEBC3B,
	GetMaptilesSettingsResponse__ctor_mCAEB4B64718405BA4717E89ECD6D88AC6964DACD,
	GetMaptilesSettingsResponse_Clone_m9EE46EFBB4ED1432EC77F09F710A9768E0A17A96,
	GetMaptilesSettingsResponse_get_MapCompositionRoot_mCA902A0E3A0ECB0B007BA1A016C7CB8E7AB3DA9A,
	GetMaptilesSettingsResponse_set_MapCompositionRoot_m01308CFC56D0241254A867E8E9646F302FB3CB1E,
	GetMaptilesSettingsResponse_get_Status_mE9E919C1A62709C4665F0B68EB453BB5B5D99309,
	GetMaptilesSettingsResponse_set_Status_m812EBEB2E25D230874E4618D51E9ABAB2E1017E1,
	GetMaptilesSettingsResponse_get_ErrorMessage_mD75E05309D5A849F7A98FB032FD65EAB04777D57,
	GetMaptilesSettingsResponse_set_ErrorMessage_m2B18DD907D09EE142A106016D8E66139ED9A6897,
	GetMaptilesSettingsResponse_Equals_mB2517B72FD50D79AD42900786131515D919A1C3F,
	GetMaptilesSettingsResponse_Equals_m8FBB44B655F8ABE280763B9ED560FDB8B9C9E20F,
	GetMaptilesSettingsResponse_GetHashCode_mF729C385BE06C75DBD41903A5736BBE57660C632,
	GetMaptilesSettingsResponse_ToString_m5F6905CD87F6BB38199389BE61EA2F6BE1179417,
	GetMaptilesSettingsResponse_WriteTo_m63C91820164391022CDDE4FB32F92533DACF626E,
	GetMaptilesSettingsResponse_CalculateSize_m92006E58CAB31C66C1A86B3600C63FC3721FFB35,
	GetMaptilesSettingsResponse_MergeFrom_m968FFCF2E4C6904F3BD85C6D4CA42B7A70EE6553,
	GetMaptilesSettingsResponse_MergeFrom_m16CFBFA469A319A8BC09BB4143800086DB751A8B,
	GetMaptilesSettingsResponse__cctor_mC86E5968B9CEB91304D0D1D3A0F67B4242A5A760,
	U3CU3Ec__cctor_m7B2A4313037328C8E85984B55008B231C3B6B0A3,
	U3CU3Ec__ctor_m07D98C06F7F2309DA8CAC6DFE961870B3BA6229B,
	U3CU3Ec_U3C_cctorU3Eb__35_0_m501B7DFBB89EE4B98D8C87B52F50E576369E0626,
	TileReflection_get_Descriptor_m9D0406722E3C7F8717BD95E303BC73C900C24ED7,
	TileReflection__cctor_m633217205ED7B8CB44C6D48BB78F234D4A2B88BF,
	TiledBlob_get_Parser_mECBC07D03E905B9257C99115F51D0EE2C7B9DCED,
	TiledBlob_get_Descriptor_m2D092C3D24F43DE4630A20A958DB13C3C8F7FDF3,
	TiledBlob_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m56760DDB0F4C18EA8C12176CA5728A64CB1A3283,
	TiledBlob__ctor_mB678DE16C59B644B378FD102756DCADECE63504C,
	TiledBlob__ctor_mD731DA4723A1A166DCD5F414FBD9572E5C5D83D3,
	TiledBlob_Clone_m75CF52DC6F6F0B70095FE85C8A0EFC4170538E9E,
	TiledBlob_get_FormatVersion_m68A3ED2D06BA5DF753AF155C1C70F7C869B56AD9,
	TiledBlob_set_FormatVersion_m58EB8437B770B2323B97478993CF5D841159D35E,
	TiledBlob_get_Zoom_m9BB8C0E6F5C34831908D4A7CFC1AAA0B9B0827CF,
	TiledBlob_set_Zoom_m93AD15F3C353A6CCC5A3F07094005CAD7E604EA8,
	TiledBlob_get_X_m6B39B10A41F27D2B7FDFCC4B66299C0787BC329D,
	TiledBlob_set_X_m3F37732DED74F202D99C7A8B2A4F873848E97E1E,
	TiledBlob_get_Y_m0B7CBCB69C84E18B890FF3DBC97663B5D2DD00C5,
	TiledBlob_set_Y_mD75A9554D957A6D53F7BD4555B411DD4B24D2579,
	TiledBlob_get_Epoch_m9C0564891BA74E709C396D5189AFB257070E6C5C,
	TiledBlob_set_Epoch_m82B7A5CBB32A30541A4F2F0571B70535056F0433,
	TiledBlob_get_EncodedData_m9A3DC9268CC9493853F3F6F7FDCEA9A962CCC18A,
	TiledBlob_set_EncodedData_m6A461B79F797461A7C105043F88779BC268B01BA,
	TiledBlob_Equals_m5836B5D0CB1DF5C4D1A3B5DB90DDF2B4A7CE5012,
	TiledBlob_Equals_m5CF39860051FF20000624F522115CA24403D3AE5,
	TiledBlob_GetHashCode_m1B1B9FD9F658F08E3D0BA503DA0B6A262087BF77,
	TiledBlob_ToString_m3E6BA37C040ABF7A8F5CD9961E7BE098F917BCD4,
	TiledBlob_WriteTo_m93DF67C05E371F2479FE4A4F384F0310A04FA04D,
	TiledBlob_CalculateSize_m077F56DB2C02E218979CC89B8039B3248B99D622,
	TiledBlob_MergeFrom_m7977F145E9D5F0518A7702E2C34E2B2566442DC1,
	TiledBlob_MergeFrom_m7C9C20D320F27CEA600CF7D43B44CC4B648DFA3A,
	TiledBlob__cctor_m2350060D888E6D667FFD0D9C6E2CEFBD5FD6D07B,
	U3CU3Ec__cctor_m755CA81C0D04640272CA179EDB6DE7267262F33A,
	U3CU3Ec__ctor_mE9E4F64A7E43AC7F455340AA956C2C59283767B2,
	U3CU3Ec_U3C_cctorU3Eb__49_0_m542C32C1D07D71C615F017D27651D302B125BD99,
	MapTileBundle_get_Parser_mF597BB4DD0893A67814306DC1A6CE806960BD80C,
	MapTileBundle_get_Descriptor_m56FEB370F8F1F8B7D33FC96E0F8FA11A21F7BAA8,
	MapTileBundle_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m971B2D5C2BAEA31FE07015A4A30D467165E9804A,
	MapTileBundle__ctor_m8942AFF4A561D0E76F5ED64210C887335ACB469E,
	MapTileBundle__ctor_m37550AA95FA2ABE585B7A6A149FE44AEACAD2E76,
	MapTileBundle_Clone_mA09D075705206AB96706B10848BAE6953AF06A44,
	MapTileBundle_get_FormatVersion_mF6D734644485413F3165774977443969E7CDE827,
	MapTileBundle_set_FormatVersion_m94E9720469E96106B5E5DCBE321B155818AAA2D5,
	MapTileBundle_get_TileZoom_mBC732B1E36807C66C72872C1BACCF1808578E80B,
	MapTileBundle_set_TileZoom_mA1F10F59B723BBE47B367E4478A5162909C835D4,
	MapTileBundle_get_BundleZoom_m91E993BB877C9D647582776B0525DB19F1777057,
	MapTileBundle_set_BundleZoom_mCC094DB92E8767E1A85AAEA5704244213ECFDBF7,
	MapTileBundle_get_BundleX_m68BB41EE16754C07D816DAFA33B2FEC5E2D30539,
	MapTileBundle_set_BundleX_m9EFDC203AF9F94CC2F5A17396A084F5EA8DEC845,
	MapTileBundle_get_BundleY_m4F228FC0ED038C992E283820193B383F29970AF7,
	MapTileBundle_set_BundleY_m380776CD9C4874CF4AE5786C1CE75AE5EEC42249,
	MapTileBundle_get_Epoch_m558377E64CE77BB4A6D5CC9723A89016294218BA,
	MapTileBundle_set_Epoch_m83744FED20C1E8C82259C050E56E17CC3416EADD,
	MapTileBundle_get_Tiles_m633B5C7EA11842EFCA5F360379106BB3B9603DC5,
	MapTileBundle_Equals_m2DD6DFD9AFDCC4FC56F0E5045D3E693D3183E2EA,
	MapTileBundle_Equals_m39A39E84D8BB50577085FDE86B6B5647D21C6237,
	MapTileBundle_GetHashCode_mC9222E3DA620CC474EC9F3A5131441755FADA7C3,
	MapTileBundle_ToString_m12EF2A652A84EB088D615C807E3A2E4AC3657851,
	MapTileBundle_WriteTo_mD969D97F38EE819762903D9C709B81B5AADE47FA,
	MapTileBundle_CalculateSize_mB13575A4A9C28A1D5886C54739276713BA43644A,
	MapTileBundle_MergeFrom_m07B6B0922A2C7B29E24FC6B3777862B49CA88C81,
	MapTileBundle_MergeFrom_mD61EDCE17A1FEDC51C2F43C471042F11A0391F37,
	MapTileBundle__cctor_m866D4ACF0D5B0A42B8D4D4718EEEB8C2DA865F7F,
	U3CU3Ec__cctor_m34ED4AEDFB737A67D1291828D0F553DC0D9C321D,
	U3CU3Ec__ctor_m8EFE9E9805F66F9408200CF73DFBEB9065FBA795,
	U3CU3Ec_U3C_cctorU3Eb__54_0_mEF83190F419E0A868814FA362057C06D256F3874,
	MapTile_get_Parser_m738A5B7BE85804F9FD53BA69C2EB6E69E4656278,
	MapTile_get_Descriptor_mF2763831F50971E4793356B0FFFB1E871EBA425E,
	MapTile_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m7FAA9D2944E8F9D76060FA9AB5C125682015A482,
	MapTile__ctor_mFA441532F495028D5D82CF693E61E4E836F2D09B,
	MapTile__ctor_mB58103B8CEA7F439A5C1D98D07E38866415A0E92,
	MapTile_Clone_mB6C56EE82247FAB9F3886E2E93E52C3AE918E56C,
	MapTile_get_Zoom_m1A8CEB2F87C1142C919309775D68E7B1B944D0C9,
	MapTile_set_Zoom_m46B6A710F944D003F464896C383B31A15C6F35C5,
	MapTile_get_X_m0B75ABAF239DC583D7B5A2605EC42842B166EE15,
	MapTile_set_X_m8BD686CF390CDA71C92DFA17917DD234797C98BE,
	MapTile_get_Y_m5667320E930FFFE70DC01AF94D8FE2CD089E2ECA,
	MapTile_set_Y_mFAC7AA6EFAD42ACA8C5A4705DA6E4148062C4B47,
	MapTile_get_Layers_m4B3BC0D5F5BA785F6AB1AD849FC954CA1CD02A62,
	MapTile_Equals_m274C0F5E24C494510E1DEE4022CBA556E689D483,
	MapTile_Equals_mEFC2DA64137D9BD72E549020D7E0DBF0B689572A,
	MapTile_GetHashCode_m54642E757D4DEB0AFB320FC6C3344BB0595884B3,
	MapTile_ToString_m195F2D07C4E13711622F1303EE1BA8235460FCB1,
	MapTile_WriteTo_m87750F262D4F70A37AECB5BD5FF5D30DCBFC5304,
	MapTile_CalculateSize_m0879DA0A5302569AA42690266CB08425DC397F75,
	MapTile_MergeFrom_mF24138428427F794F1D1B99CC3EEB59B6BD11F0E,
	MapTile_MergeFrom_m12972818C79B90AD9EF8526806C27B99D0A1CCE2,
	MapTile__cctor_m37C19FC6AB38AC0747FE1ABB3FC0C629C0E5481B,
	U3CU3Ec__cctor_m8FADDF9E646589CA0E88E4CBB4B3B8D56CAF1008,
	U3CU3Ec__ctor_m196FE7A0F6F3B0DA52468600AF74F9AC7A08D46D,
	U3CU3Ec_U3C_cctorU3Eb__39_0_mDF996F54DCACA2CBB48142335A56DE29C8304D5A,
	Layer_get_Parser_m8C493D3AD3501CF86C5DD979AE6DE286A39D089D,
	Layer_get_Descriptor_m6428C8B763F7CAB7300E8561055F2A5857CEAAE2,
	Layer_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13BDBD210E0866B1AD8CD5A98F08622BD78B681F,
	Layer__ctor_m7772CA478451D9446BAF483AF140A30CF1105C32,
	Layer__ctor_mB42B3DEB5653620620F05E2579CA45D4EA0368CD,
	Layer_Clone_m1F523D9BE4ADBD34D3EE8B6847B43CE30791C034,
	Layer_get_LayerKind_m9832B3BD12050DC7880E1240F7A833DEBCBA9FA8,
	Layer_set_LayerKind_mE4A063A3228CB111CBB68A98C001859A5A343622,
	Layer_get_Features_m8868EB9BAFB8EFAFABB4E84E06B0F6D7BB4E043A,
	Layer_Equals_m674172B0A00C797CEB7C5FCCC3734D94CC99A378,
	Layer_Equals_m984252FD923C64A355DAEDEEDFDE065B41276B29,
	Layer_GetHashCode_m303E62115184F8406F036FF5AF77CC926C34BC46,
	Layer_ToString_mB683F17757A7C1D782A9064AE9C14AAFCEE083FC,
	Layer_WriteTo_mC3081AFE0C85F5C1F3F72450442AF3A7AB8ECAA6,
	Layer_CalculateSize_m1677070B132E38F4AEE93603F6A2685FF3309354,
	Layer_MergeFrom_m9E02ED29BB03316603C64040EDFB5D06CA62A42A,
	Layer_MergeFrom_mA27EF043AB373867AC9D31B88AA2C9F55E5DDAB8,
	Layer__cctor_m37C264B9E999964F9061EA4862EFF2BC0C20F49A,
	U3CU3Ec__cctor_m6B5AFA9C8AF8188956948E7A276AE5A4780F2038,
	U3CU3Ec__ctor_m038C5BC6B569860ADC33FC744954CBB0A2F96FCE,
	U3CU3Ec_U3C_cctorU3Eb__29_0_m062F544E55AFEF892A215E209ECCE029BD504758,
	Feature_get_Parser_m1C75232AE8DD9C8420194E08232592F9804EA67C,
	Feature_get_Descriptor_m089BBE488FFAE60DDC14D3F729331FCB0225B77C,
	Feature_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m1E8671381948603AB20ED836C84CA271241598E9,
	Feature__ctor_m906196F75B8BA659EF754BAF366FB53513C1D6A7,
	Feature__ctor_mF8D2F628E0BD24F1A21CE9F4C390E60C1D5923CF,
	Feature_Clone_m52CD6B38EE427C803DD7EAEA8900A8D4346EFD46,
	Feature_get_FeatureKind_mF505DEFA3B1EBADD41349F1F1DB8A04A51C65A0D,
	Feature_set_FeatureKind_m0712ED28A2443D0A221D33B4EAE432BBF747756B,
	Feature_get_Geometry_mB56277A4CD494B9B2335736FCDAF1F7959E51D01,
	Feature_set_Geometry_m2613C447F1FDF0568220055EBF8B41DE4BAA6ED6,
	Feature_get_Label_mF9FD38CCD6BC2AFC2BB220C463585F45B3B34BA7,
	Feature_set_Label_m3E645A510313A1EBFD6E2DD7F8544E640B4EF829,
	Feature_get_BuildingMetadata_mF15046652BD9FB8729F0C9278F3011E66C822A9F,
	Feature_set_BuildingMetadata_m6C7214D5460ABAA6BCBE0B66A948E0338DA3DE31,
	Feature_get_RoadMetadata_mF8FDAC6CEC3DF79B18A5AE7E90754DE1EB9602CA,
	Feature_set_RoadMetadata_m976E02C88AAEE3954CF82D1E23BAB130C273C150,
	Feature_get_TransitMetadata_m12377766E3032675C0A9740988F21164F16B0A3A,
	Feature_set_TransitMetadata_mA5A2654F6B7A987BB5C132138858FAB96A138860,
	Feature_get_MetadataCase_mE0062E178B35F746EB82024C6B53C295A0F5FD1A,
	Feature_ClearMetadata_mE419A3A2420FEBA5BD6F287063B6C25393B85A84,
	Feature_Equals_mBC34702FA4B8C9E937E81C0D37400F2C39A4791E,
	Feature_Equals_mE66AA5CBA807FB1DF7BF9675C115A94AF195F3A4,
	Feature_GetHashCode_mC6077CA071D6B98486B4702AC05D33BBC9463866,
	Feature_ToString_m50E41B462A83A8ABEB42BDFC02E16BE251F5B496,
	Feature_WriteTo_mA6AC1F42295DAE6FE741B4BDA2C4BD9603D8623C,
	Feature_CalculateSize_m5B85EE0BDD0E02EBA574F8955DCEDEE4C9341483,
	Feature_MergeFrom_m654BB06E1C15BFAC388276DA2CF500B0A5CEBF98,
	Feature_MergeFrom_m15A9CFF0F7C73D993E795BFD1E3852D43B26F413,
	Feature__cctor_m2CAD96BD85184D8CE63AB92A3285D74ACCD9C1A0,
	U3CU3Ec__cctor_m2EAC7F32A57728A0B85CADF6F2BFD2F76F794143,
	U3CU3Ec__ctor_m76E9F7E5CA1AACB949A965227F0B0380AEE53580,
	U3CU3Ec_U3C_cctorU3Eb__52_0_mF2C3A8B71972E8ADB0E0AD449E3CE8C91DBB8DF0,
	BuildingMetadata_get_Parser_m0E2888518CAE593D6A6230F16DC66EC6548ED84C,
	BuildingMetadata_get_Descriptor_m99B608CE55CC809E46B514FA9538DEBC1B4BC2A0,
	BuildingMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mB89BF27152877C541F02047371EB7C121C61BEBF,
	BuildingMetadata__ctor_m44B9CF0C84168F1EB890E008F092908453D15F54,
	BuildingMetadata__ctor_m2DC8277D6B93BC3A5383C4755C287EE6B813A30D,
	BuildingMetadata_Clone_mE763501391023F48830CDF462B653FB93F03F821,
	BuildingMetadata_get_HeightMeters_m645CE4CB55B29E7E805D38003C52A5FB50C6253A,
	BuildingMetadata_set_HeightMeters_mCD5471192F37A961A04349DC8A57FF6A5630A730,
	BuildingMetadata_get_IsUnderground_m2CA499F950BCBF738E340BBD2077E8657EC61296,
	BuildingMetadata_set_IsUnderground_m3F081C25795BC9C190AE92FDAE2D6834E2963A8B,
	BuildingMetadata_Equals_mC78A7AA36E4E1E5C8A30CC35DE6E201EBA87FAD2,
	BuildingMetadata_Equals_m6D3916F909FE90DC0DCEE600734F4070F1BD99CE,
	BuildingMetadata_GetHashCode_m05B14A555B1ED732682C32CF2CA369F8251D694B,
	BuildingMetadata_ToString_m79E4AB1E751AC261DDC6585BAEF88A077184AD38,
	BuildingMetadata_WriteTo_mA75BCF09A6ABDB92DD88BECA952DB9D8B88A7CD9,
	BuildingMetadata_CalculateSize_mA5EF0DB1DE264F4B3721945FE3B329C3578C4E5E,
	BuildingMetadata_MergeFrom_m367E6FD91E03A5D92B40616856F129DC6CAAE6EF,
	BuildingMetadata_MergeFrom_mB8400730B9CC23CC2EE15F833A11F22643E625C2,
	BuildingMetadata__cctor_mD161C0FC97A957EDAC3C7AA77F50CE1ECFA52B17,
	U3CU3Ec__cctor_m3BC63C8A99488210971FA178CCCCA515B3D54FD9,
	U3CU3Ec__ctor_m0C0258572E2141834E9BE0E92AB2872CE57653D3,
	U3CU3Ec_U3C_cctorU3Eb__29_0_m3B6227D3380D235EC529F0B7625B64B150F5B6F4,
	RoadMetadata_get_Parser_m0A35B516C5E0DD29DCD951647BA2C4596BF6BD75,
	RoadMetadata_get_Descriptor_m6FB7CFE5D5499571DE9CB24DB8A559450F2D67F6,
	RoadMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m67A38819F0A697EF0E9EFB51B0B432F877263B25,
	RoadMetadata__ctor_mE72689B859ECC34C99F0956ECD6099ADB899087D,
	RoadMetadata__ctor_m937DC8C4DBFE723FBA1176D10B1C86AD8AFC59F6,
	RoadMetadata_Clone_mEC9F36B6128BEA2F2B7B36499A864F00CA1660E7,
	RoadMetadata_get_IsTunnel_mA542AC18A48F0F61B93810EA14903433CDB76FFB,
	RoadMetadata_set_IsTunnel_mC7F85B54B4EB91D0D310FFD353716381B81C0DE4,
	RoadMetadata_get_RailwayIsSiding_mCC4BA472FD657BD64730F44047B48333CAFE7857,
	RoadMetadata_set_RailwayIsSiding_m0BEC893723B7622E639971CFE0F874E0D790BFD2,
	RoadMetadata_get_Network_m122938C599113EDFA89275DE946240949B4F0E2B,
	RoadMetadata_set_Network_mA23D8B5A595BAE72CE4540A60EB21926513D5CC7,
	RoadMetadata_get_ShieldText_m55F8BD583406571A53CD6909FA08F3CD248851DF,
	RoadMetadata_set_ShieldText_m06EB32E8E9B8F3B8847188F16CB7EF572777908F,
	RoadMetadata_get_Route_m1EC31C83B3BAD8AF70B741E817C1558AB9C5E6BF,
	RoadMetadata_set_Route_mAEDC25DEA5869D620AAF8510E3A86BF741601C3D,
	RoadMetadata_Equals_m15227B2D8BAFF28852018F2AEF07FE4BB3B5B6CB,
	RoadMetadata_Equals_m1A45868A08ADE816073961EF0F3662469D1A247C,
	RoadMetadata_GetHashCode_mAE1718E0B7389BBB8CFB9796F8C7F1D81A880FDD,
	RoadMetadata_ToString_m45E24C9ED88ED996CFE63EF4EB0D78CE9A289BA1,
	RoadMetadata_WriteTo_mF9717073F00F0EBD5271B02121548B3080157F13,
	RoadMetadata_CalculateSize_m4E18202F31A08705A9E6989082FEEE5286AB7372,
	RoadMetadata_MergeFrom_m1FCAD6FDB806635AD26FD04E861ECBFFEFC996D2,
	RoadMetadata_MergeFrom_m9464EEC2157CDEB25FAE45ADD87887D2D6654B38,
	RoadMetadata__cctor_m8F789B21F2BB51005FCCE3880B65CCC66AFA412B,
	U3CU3Ec__cctor_mB37DFDB66EE4C7931006EE4809C24745661F46E2,
	U3CU3Ec__ctor_mD36F3E9D9FB4387F84D1205F724A3677CEB1A8C4,
	U3CU3Ec_U3C_cctorU3Eb__44_0_m778EF71482BDA7425EAA2606F4EDA5CFA9C8A620,
	TransitMetadata_get_Parser_m3BAF22158CC71CA43C9E6CAF6B9C3FF268FB74D3,
	TransitMetadata_get_Descriptor_mF9A71660DC745DC287370FF10AE6AA4F5F7581BB,
	TransitMetadata_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m50F066CF58A54ABE21B5C34E9280C76956D238A0,
	TransitMetadata__ctor_m458963A45FC6E1113BA55E537F61B348C2117597,
	TransitMetadata__ctor_m1DDE0C86CF4F468C6BFB543B9AF8BB82CE39E4DD,
	TransitMetadata_Clone_mE44088C3D911069A5418BA8BB2DEE1462DAF3DE2,
	TransitMetadata_get_Route_m7EC48D7D2DC64949D53F3AECCE4B7D59F4505C88,
	TransitMetadata_set_Route_mE866F0613FD2EBE7FBA415555CEC9FDA1A9C23F7,
	TransitMetadata_get_Agency_m1C9DF5A3A6296B03B2D14679384E96262E01FD3C,
	TransitMetadata_set_Agency_mAF9B37B38EAFAC1C0CB957A8F4E8478519D16F3A,
	TransitMetadata_get_ColorName_m2F349CE843D73FE1193AE067446A0CED504969D8,
	TransitMetadata_set_ColorName_mDE2D081DEF57BD7D83FE4602E01B1E2045AC8F54,
	TransitMetadata_Equals_m9DEBB29B7220FF8ABE2C3C282CBF35C3CD41AE09,
	TransitMetadata_Equals_m6276D20111EF441B22A2B7E707B98041D87966D2,
	TransitMetadata_GetHashCode_m7ECE8EEDF86A278B2E53E386F5C1DEE7F2CC39F1,
	TransitMetadata_ToString_m0419B9AC845D442149822808ACFCFBBEA2899599,
	TransitMetadata_WriteTo_m9DE5D9B5E4C2FD891C2F77DD2CD7BF090C64A7B2,
	TransitMetadata_CalculateSize_m2D3FB27F27A6F3A954C20290F1F7C99CE2B44C8D,
	TransitMetadata_MergeFrom_m3650B8A5BABC8A623AE7166706AB5FE32B393B98,
	TransitMetadata_MergeFrom_mC5ACD02021C26551C4D7D99DCFF72E5C2D1E96C0,
	TransitMetadata__cctor_mB90B5DF7FEB5DAB6BD7397D8BB49DD2FF4EB7AC8,
	U3CU3Ec__cctor_m8F046DA717760561EEB034484B407A3FAAD34AFF,
	U3CU3Ec__ctor_m3F6E2EC6897B403B41D266A04F407AFEAA62B6EF,
	U3CU3Ec_U3C_cctorU3Eb__34_0_m825764D9AFF0E9AA977C636B5C56B46E13BCE15D,
	Geometry_get_Parser_m82913CA06D7B595C8CBDA75BD92A5194BE8F115F,
	Geometry_get_Descriptor_m1ED72E93736110F41C81594CF5AA2A605D2EA6A3,
	Geometry_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m6E86C5610DF25D33B0963DB415B444D3F3E74776,
	Geometry__ctor_mD690B2D0D11042600A17500D6E6203856F96D42F,
	Geometry__ctor_mB8555E8E61C25786338867F80E434A640DAC4C7F,
	Geometry_Clone_m704D32FDB9A1A6106DD188CFA9767A5F3DE776BD,
	Geometry_get_Points_mBD7EAC6DA1DD2E89D059CF5C1D35070A1DEAFA40,
	Geometry_set_Points_mC74D1064F928EAF6FF40A925C2B312E3FC499143,
	Geometry_get_Polylines_m9B563CC427074BCBC5EB575E77CC6419FAC9CC69,
	Geometry_set_Polylines_mF5C0F7CE0382C72D7202C64F40E7416DDDFCEE1A,
	Geometry_get_Triangles_mD1C63B7D782B9342BDBC6DEAAE54DCCA631755B0,
	Geometry_set_Triangles_m0C92D137644BF31EFA4BCBB09A12EEFB8987E28E,
	Geometry_get_GeometryCase_mA28224A330D97CF93FCCE0BC9196C6F636D95675,
	Geometry_ClearGeometry_m1D506F5723753BC7FE21E3F52E3971DD11D4AACC,
	Geometry_Equals_mAFCD7EFEFE85184DF7652691EAD569DEB835999F,
	Geometry_Equals_m7F2767DDA44B5467C162607FAD1E0F7792F23B02,
	Geometry_GetHashCode_m12C13D095DFB0086C57F52AD7073114C875ECE97,
	Geometry_ToString_mC374C6A83665BDFB534889E4006FFE8F85768B66,
	Geometry_WriteTo_m0C3D5DC10C336369B4FE9D18911648F0D2327E7C,
	Geometry_CalculateSize_mA61B36A265FC7647FC2AB644675A1EBDC1768462,
	Geometry_MergeFrom_m28FD1349677FABAE0F59C25D15047F919BA10D78,
	Geometry_MergeFrom_m72C103402D104D5A2DEA2872DDE1A40666F9A824,
	Geometry__cctor_mDE6E6004761E14521F3ECB2034445241FFBCF217,
	U3CU3Ec__cctor_mAB88D63B1AA5F9610C0B7EE4B10E883F7EEAAF81,
	U3CU3Ec__ctor_m05CA8B82294C3133F8DCE729DA5F4F89CAB3EBEB,
	U3CU3Ec_U3C_cctorU3Eb__37_0_m79A8ED10DA7E4EB43FF0DB03FA3E8C5CC5AD3B33,
	PointList_get_Parser_m0B11471177A93D798B2A6ACDBE00764672E21E13,
	PointList_get_Descriptor_mEEE37A498614CA3CE766C86ADEA4BDD7A61BBC33,
	PointList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m409BF9875C031104E3228E8E972F5B14E6A6ADBC,
	PointList__ctor_m71AD72EFA0889D5067FAD617DEC4C280A49B87EC,
	PointList__ctor_m2ACCCC123034D41FF9864994724CC2302B5B0B5D,
	PointList_Clone_m06239E0814FF1436B47C7DFF58FAA5E3072C0618,
	PointList_get_Coords_m773194B0AD384B2DE5E3A8CAECA076A42834F937,
	PointList_Equals_mDF36308377E922539369B42FA62A96C403DCD96C,
	PointList_Equals_m83840D6C8632434D7A199D344C8207AA9C4F732D,
	PointList_GetHashCode_m99F4BC9C0E62F87493763CA9123BCC87EBEB9356,
	PointList_ToString_m46158B4F862CCDD624BBB568D7693C246214FA9B,
	PointList_WriteTo_mA9AE0EFCF87A20045540B40DA5CCD678AB45626A,
	PointList_CalculateSize_mD49D118BA9BB4ACAE84C8093C181B4CB88796A27,
	PointList_MergeFrom_mB1D03E738BFFAF7214523152E7371DE5702E3370,
	PointList_MergeFrom_m604F7B59E927EA589DFA5E950F47B212BC632438,
	PointList__cctor_mA14C6D46215250B5A33176B2883AA33D9F227C99,
	U3CU3Ec__cctor_m669FBE3A10241BC3663D68A250D7B8C893B3846F,
	U3CU3Ec__ctor_mF064C4A9E25EC45348949E0E97428D28CD42B2B3,
	U3CU3Ec_U3C_cctorU3Eb__24_0_mB1C050F097CD3F7173F9D10146ED21035F0BEA1E,
	Polyline_get_Parser_m8DA8160D831864C4BB4F5FF2E02B32568BC1315F,
	Polyline_get_Descriptor_m1907B33A108F55EAF5C507DB10CE05C3E563C255,
	Polyline_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD10EF125CAA50718822796857304C81030F0B94C,
	Polyline__ctor_mB009D60C35D54210EF50748AEB10CBD459919072,
	Polyline__ctor_m1EE035AB405316434B4B65A4972BA716C1E9E347,
	Polyline_Clone_m1F2A6F38F0C0EE66501F0B1F0B255CE4D34C6B3F,
	Polyline_get_Coords_m6B835D0EF165C62F7A918A8600E3789A23A451F0,
	Polyline_Equals_mDEDFCBB80939E2F9152D5A862D3BA6550F6997F9,
	Polyline_Equals_m088A49DE9825E59196727B0C2D92B31FFFF19ABE,
	Polyline_GetHashCode_m8DD2727D6AD32CCC188141A19023FE7E737CE857,
	Polyline_ToString_m5114B17D1BB946A8E253D7A3BA4674FC26461AED,
	Polyline_WriteTo_m6FE9AC98B17AB52A4A2CA6088725BFF6F9471D2A,
	Polyline_CalculateSize_mA56C510FE84E871B8AE41CF46CA6A7D188BE5BFE,
	Polyline_MergeFrom_mE902F4FF38A8B778FFF38F7D4657062EA445E314,
	Polyline_MergeFrom_m64C7DC0C58F64C9C7C23103857701BF1EDF2B742,
	Polyline__cctor_mCBFB0A89B5DA3D1B2403892B3220C481273E43EB,
	U3CU3Ec__cctor_m7EECCB224FB6F995A141F971C0E6D92330BC43EC,
	U3CU3Ec__ctor_mC477FDAD581BC6EAF1D203C157926F8DFC923BD1,
	U3CU3Ec_U3C_cctorU3Eb__24_0_m7C94EC33B5B11DA56A50DA84B1EF3735BD8E0BAF,
	PolylineList_get_Parser_m504D9C504991902F8615E27C05ED622446063DAD,
	PolylineList_get_Descriptor_m88DCE8FE0FCAF7E4C5507422A6C96C80D78EC604,
	PolylineList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m8538A5FA9B7525B1C1DD981221BDB1713E5E60F3,
	PolylineList__ctor_m203DB1D121F8D496BD683B4ADB3F1ABDCED8BDDE,
	PolylineList__ctor_mA9AF6C2A4E61C117BED6D3555818DA5749DC5BF9,
	PolylineList_Clone_mB2590AE11D38C8802F1D9176767A75217C549449,
	PolylineList_get_Polylines_m5B2F679022333C9619B645B2E24C8C5A05C0CB9D,
	PolylineList_Equals_m3998CB48FCBF642424C105CD848C687BE70930B9,
	PolylineList_Equals_mF8B6DAB7987B97B7387829AF02FE6D5C483688D0,
	PolylineList_GetHashCode_m8C1D06AF81478AAE2CFEAD54996555AF6D9477DD,
	PolylineList_ToString_m118BF1D44924419EE436A189396FC8024EC7AF66,
	PolylineList_WriteTo_m62702583DB39FAAED9BF20A959B8488C18EDCD11,
	PolylineList_CalculateSize_m1DBABB039F01C1D54A25162C9886300C2EA28D5B,
	PolylineList_MergeFrom_m410605177F6E3FDFA4EDA75E5B75B662F479BC75,
	PolylineList_MergeFrom_m6677042776316732FD7F51D0207D05E762B8DE26,
	PolylineList__cctor_m4F2AA16DB07CEDABF9990DADB033DE00B724F95E,
	U3CU3Ec__cctor_m1EEB5576CD2EA268EA8A1179F36FB9E64CA37CE0,
	U3CU3Ec__ctor_mF7C00EAF16CF4B793CE7ED82054766389AA3DE9E,
	U3CU3Ec_U3C_cctorU3Eb__24_0_mCAE4A0FCFED5716A22AE52B635C6B9B6E03D6AD8,
	TriangleList_get_Parser_mB54202536B1B0B8D3D796551175BA72644253861,
	TriangleList_get_Descriptor_m5D78B3C4303DAF5B43789D65189ABBECA5E191E1,
	TriangleList_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mF68D3C7C55E9E6DB46E9906D68E73CB3B71F3DCF,
	TriangleList__ctor_mF6C4C387A4F66E28F3950F5228EE4AEC64C001B6,
	TriangleList__ctor_m65C2D297ECE919176B0887941C5EBB83DED36141,
	TriangleList_Clone_m52EBEAC24ED6A90F9A791D741B8D8AB4B397D240,
	TriangleList_get_Coords_m07287724D64D6AA0267263671A5FF85F6A2D1662,
	TriangleList_get_ExteriorEdges_m3AFF8C55C0EDA781765675DA6BE22527242D3B75,
	TriangleList_set_ExteriorEdges_m6AD7161510D15EC8C7D0482B4337468DE1229C19,
	TriangleList_Equals_m8C874E13CF1166ADA85EA10D61953137C54F9549,
	TriangleList_Equals_m73AD07E794578BA1134FBFA4D7B2B94258485C11,
	TriangleList_GetHashCode_mA239C327E8C58B19A733E7474061C6E6FA2355B9,
	TriangleList_ToString_mBFD853D867F833ADB561C1EC629A6ABB4B0ACE0E,
	TriangleList_WriteTo_m0D3E43A775C062CB797108FBEF721F2DBC9DDDAA,
	TriangleList_CalculateSize_m7B28AAB6CEE3EF49928E4128681F9FC1A5DF8ADA,
	TriangleList_MergeFrom_m40A64CB87BC57C866CD5410E196E50A92B0B497B,
	TriangleList_MergeFrom_m4B08D510D65CD05929F0721467A74AF4E99F4072,
	TriangleList__cctor_m780C400F0060503BED05879DE90924F6F30B021E,
	U3CU3Ec__cctor_m0BD2D77F383AD3FEC9B37F82BBAAE5BCDEFCED4B,
	U3CU3Ec__ctor_m6AB8099CC2C11A934528860D920FDE7993873668,
	U3CU3Ec_U3C_cctorU3Eb__30_0_m906E9F145DCA93BD2E4941340189DBB44CD3413E,
	Label_get_Parser_mC367069B21C93E63F34A8E0D70A11CCC6F78179C,
	Label_get_Descriptor_m665A4B8106770642FFD968872E70058BF235DF62,
	Label_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mBD7077779692D5EA1431710A9A593F710EDE6DC9,
	Label__ctor_m84E1F3C7ED13994C70FF0C71FAE89A36FC1B857A,
	Label__ctor_m1E1E9EFD4D7B2478D695D6E41E4460B6F535774E,
	Label_Clone_mECE68393C10B33AFB55EB604ED8C614B7E3EF849,
	Label_get_MinZoom_m4A49AB299A90BCAB75609653B7C26B459B64E776,
	Label_set_MinZoom_mDDDB1B5D502C5A4AC709470576903586CF8A8A50,
	Label_get_MaxZoom_m9C58D6EB60D384C7CF7096FBCEE1992433832FC3,
	Label_set_MaxZoom_mD096FB92203F8DC894CB88114D406DDD82EB14B1,
	Label_get_Priority_mBBFA16A73F1CED39A7D461F94380D286CEC06959,
	Label_set_Priority_mDAF9F6D683703B14097B5E0BC63ECBB20B64FC99,
	Label_get_Localizations_mA06312F0C4A2BD617A0B68897E02CED24661BF57,
	Label_Equals_m1212A566E54B1260EAEA42C8C4FBD30A104A4A6E,
	Label_Equals_m1C63A5F0AF702C2E3880BCEACDFDD0948408A792,
	Label_GetHashCode_m2ACE00FFAC6617CB3418B6672A5795AC872520E8,
	Label_ToString_m918B0653626BDB4AEC229583154784AB7E40A288,
	Label_WriteTo_m12FAB6A35CE5F853BEA5BCF85B4D8B5480426256,
	Label_CalculateSize_m44170A43AE59EE9DD8159B39CCD48E2C7BB8F71A,
	Label_MergeFrom_m7DBB6DB0BEF52A36B97E17FB3345289F03A0E8FE,
	Label_MergeFrom_mA5213DD795E598AC5281E54BB18FE711494B0FAF,
	Label__cctor_m0C4B9E2091154C191AB860904F8D3B99375DA16B,
	U3CU3Ec__cctor_mB1EBBCE695E96195B1E560313F434523A2A822D9,
	U3CU3Ec__ctor_mFD820D3F66F8453405671B555CC0F39E312271F8,
	U3CU3Ec_U3C_cctorU3Eb__39_0_mEE72B8A09EC8B1A5BCDB2CEB62E9E0DC1814EFC8,
	LabelContentLocalization_get_Parser_mFA7DB1E5BC0F063A70FA994D081D3A459893BEAF,
	LabelContentLocalization_get_Descriptor_m58856735D2CD19A6CDC7CECAC2EE1E1C0C6CEE22,
	LabelContentLocalization_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mD112A0C235127E2BCFDA06FA7F7DD06BB358DC73,
	LabelContentLocalization__ctor_mC1ADFB2FBA31DB8946CEC83CF9B7F6FFA9C92A6F,
	LabelContentLocalization__ctor_mA2B30B5301DFD582B29A390D4CFFBFD6A7D22A9A,
	LabelContentLocalization_Clone_mC02A168156AD71D6F7C5DB8D5660C7D68573DE28,
	LabelContentLocalization_get_Language_m2EFF742FC9D76C7D77119C1DD7D0EC0D8E4EEAB0,
	LabelContentLocalization_set_Language_m0020E5CEAF027688281ACFEB1B8FB4B24D75E6A3,
	LabelContentLocalization_get_Name_m72032D76CF181307E97637D1F7A4CC00F1EAA927,
	LabelContentLocalization_set_Name_m4D92B8D482339249A64B0014D8CB5AE3882FFDFD,
	LabelContentLocalization_Equals_m3ACD40344FA66AEDD509BBE4951316C6FF01E41B,
	LabelContentLocalization_Equals_m546E97C011EE9453E0B0F8C0EB8014EE03822F2F,
	LabelContentLocalization_GetHashCode_m82EB969F8583C7884FF6B296F96B9401BB5DD3DD,
	LabelContentLocalization_ToString_mAA5E3A0347A6204A181EE44C4146D35694905268,
	LabelContentLocalization_WriteTo_m97DE842EF4E6BF2D64F1198192ABE4A30F53EB99,
	LabelContentLocalization_CalculateSize_mCDEB4600D9C9F98F3408BEB0888ADE8F91C9FDAD,
	LabelContentLocalization_MergeFrom_mECBD452C4D9D1AE582254622732EC999307D5A84,
	LabelContentLocalization_MergeFrom_mB9F5151144764FDB1CA9363B27DA5F1B91B85FF9,
	LabelContentLocalization__cctor_m6EE6157A2DA25E33DAF29541B9E75C54EE425A65,
	U3CU3Ec__cctor_m83D886C48BA21CD9009249339419D68722D1A1C7,
	U3CU3Ec__ctor_mF9F357C85863D09E55D04AB852141556D9B323CF,
	U3CU3Ec_U3C_cctorU3Eb__29_0_mB480BD0C4C218563D3402C959508F48BFFFB4471,
	NULL,
	NetworkResponse_get_ExceptionStatus_m82A38D059E6A73B991C0A0328975BDC6B73FB144,
	NetworkResponse_get_ResponseBytes_mBCFD53736738807933AB52FA6A1026A94AC6A2CA,
	NetworkResponse_get_Status_mC1FF62A1881DD7C16B489BB3166D7246F070D6A2,
	NetworkResponse_get_IsHttpSuccess_m8E3B1A580E6305FF4E3A7B32DA9DBF1EDCA98E6D,
	NetworkResponse_get_WasCanceled_mDCB5446192F4011B67EF9BF44FEF152A2B3A9E7F,
	NetworkResponse__ctor_m46FB125BB83DECEEEA08D272048E86951A6048F3,
	NetworkResponse_FromSuccess_mBBF18790DEF707216C4B787D7F34B10D9FB4F8D7,
	NetworkResponse_FromCancellation_m45930193AD4DADA9A58B2A6F7006654E64A441EB,
	NetworkResponse_FromFailure_m0C9CEC356EDC858CA57EBAF7C88FBBAD05F9B668,
	StatusCodeExtensions_IsHttpSuccess_m16AD36DB1CF04BC264D4F038BC1680C00E9D5E3C,
	StatusCodeExtensions_WasCanceled_m1DBF39A6A9B6FCFAFB8A8C7D02D42ECC2AF78695,
	UnityNetworkHandler_RequestAsync_m16DB26D9FDA1BE3A8DE149EEDDA1FAD636939548,
	UnityNetworkHandler_InitializeUrlCollection_m2ED78B4DCFF3E16CC55063DEA5FA9D554BD89288,
	UnityNetworkHandler_TrackSuccessfullyDownloadedUrl_mE294E10267A610F288A053E7A6BFBA301546DBCC,
	UnityNetworkHandler_CheckForPreviouslyDownloadedUrl_m12CAC7727301088874E784A6F0489ECEC131CC51,
	UnityNetworkHandler__ctor_m4C4E7D37D0C5D41A6F7661826481A44234E419BB,
	U3CRequestAsyncU3Ed__2_MoveNext_m68E2449020EBC5764243C7572B1630CB85F04925,
	U3CRequestAsyncU3Ed__2_SetStateMachine_mCA6C55F8CEB9874BBB28953D6AA91DD2E7BF328B,
	ChannelLogger_get_ChannelName_m13F7701EA88E07F35960F8294571A88975219419,
	ChannelLogger_get_MaxLogLevel_mD23AB90323D3D22C32B4709C17034FC2AE160CD5,
	ChannelLogger_set_MaxLogLevel_m4D81718AD173A93C988E4589AA7F0D9A401ADB10,
	ChannelLogger__ctor_m89F766F334AC44CB62241B93FAB75F92EDE9F089,
	ChannelLogger_Fatal_mE5A3136233928083DBDBA93A6AF15BBA79D5F3C6,
	ChannelLogger_Error_mDFBB8B587E9B590FCFF5BEF7A77E49664CD52EA9,
	ChannelLogger_Warning_mEB8BAB08423445C41D9580B8A49F1D9FBE7FCB14,
	ChannelLogger_Info_mADEE78CB906037CD1C71E913A0C26A26638933E7,
	ChannelLogger_Verbose_m97E1DB4B4604B1D38C1D7E36DD09777A5509A823,
	ChannelLogger_LogTrace_mB7E12C33A52299466499B91E52F65433F380AAEC,
	ChannelLogger_LogMessage_m3F17D3B45DD563F19C38851F697C1FC61BC6A88E,
	Log__cctor_m271E52B3D2A0109EA6CEF184D9752D1CFC27E38E,
	Log_Trace_m1066237B2C0A84C656B90E8BB3A64F4E1C0E34C1,
	Log_Verbose_mC5F2F7159AD98E36583B10F9F14E79D6798B58C8,
	Log_Info_mF416CC39E9D1974842520FA9BBB4FD203F3353ED,
	Log_Warn_mC1837021A8765F048E6DD390EFB2793CCFCBE71A,
	Log_Error_m324502EE1C4FFEA4A65E48787897B6C83CC2516E,
	Log_Fatal_m90687494A6F3252AB1AD5FB5A8B9032504E6079D,
	Log_Message_m7CD5AC3B8198A7A3754A474A2B5BCF964846607A,
	Log_TraceIf_m6E42C0D222143451C17BF747595F050DD492D999,
	Log_VerboseIf_m00C0E92B9DC79B71D5E538B15DBEC17A3540A223,
	Log_InfoIf_m711B96774DDB6667E0F97909169DE238EF96D49D,
	Log_WarnIf_m2D51C17668B2BB4C4B248FC2CD560616221DA86A,
	Log_ErrorIf_m5BB5BC19F2DE31F99318DA87439606B98768F5D8,
	Log_FatalIf_mB3667878ED64C1BBEB51B128FB84A1D00388E089,
	MgAssert_IsTrue_mA713B598F2A3597784B8FC934971764A0D4C5615,
	MgAssert_IsTrue_mA6CFBCA871E59A6DE74E38701390E2036014825F,
	MgAssert_IsFalse_mAD5F3E695DFEE5891168AA0D4C4ED1103ABDBCDA,
	MgAssert_IsFalse_m1E21AE7AD51F582E96A817FA454F5F28639368B8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MgAssert_IsBetween_mBF92F265EA28D3D9FB268A8A004D172D3B56E1BB,
	MgAssert_IsBetween_m0A0C1F752C5FCA89C4D070FF4546471C7F34361E,
	MgAssert_IsBetween_m9AA115B80B64BDE0B9053A378871F72238B08991,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MgAssert_Fail_mED22FC56E5F5779192A5ACE02928A43D2C920676,
	MgAssert_Fail_mE775C0CA773F9653934E9C0AB151C3BD1D1D342C,
	MgAssert_FailInternal_m2C7F51CF9CDD2C975B14E6A02EBEA59A807D2F0F,
	MgCheck_IsTrue_mF0F7700A10DB883B2BB1AB0003B22590FAA935CA,
	MgCheck_IsTrue_m30EAF91D9512B72FEB4EE39846991C7204966C9E,
	MgCheck_IsFalse_mB1787368CAC56B02C0A1E867F43D63993FA3F0DC,
	MgCheck_IsFalse_mEBCB617AE9526C84463E07AC8E312FC65A260776,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MgCheck_IsBetween_m723D410841A8B07A306079570E1AC39FC2F46CFC,
	MgCheck_IsBetween_m3506F9A5715AD9856BBB7F596EAB394266975E40,
	MgCheck_IsBetween_m818D1132DD9B0739BF9997ACA699C0D410E03129,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MgCheck_Fail_m5C4472317429E5741FB643CFD681CFEFBB32383A,
	MgCheck_Fail_m5A738BB1E4F9905FDB0DE8180A7B18345F4C052C,
	MgCheck_FailInternal_m8D9271EEDFFB723AFEDCD0280DB75A449FCA0386,
	MgDebug_get_BreakOn_m122C97111A3D834CC81EAE1A7FB50C50E3D3E618,
	MgDebug_set_BreakOn_mF4610364D9DE58BBE4B50CF68A54208FCD83CE50,
	MgDebug_OnAssertionFailed_mF43F511B0798477F2CAD77E1F90D63485F2414F4,
	MgDebug_OnCheckFailed_m768A79B5E4B06CD2124450227FB0B65313881D72,
	MgDebug_OnWarningLogged_m31547D924CC9B9C44978738DA851727501637E42,
	MgDebug_OnErrorLogged_m69398997B74494193E792E201B3B4CDA4C65CE3E,
	MgDebug_OnFatalLogged_m353A04F8FAB96E8DDC73F6C0D8F9BCEE1E952283,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InternalMapTile__ctor_m3BF5A69B0F29B917C0CCC390C0D01F1168A22FE9,
	InternalMapTile_get_Id_m2B2BC67061AC997A85D3E48FEBE5917F7E41C942,
	InternalMapTile_get_Coord_mB9BA968FF7A5F06EE3F9FCA86B93199F67A17E42,
	InternalMapTile_get_ZoomLevel_mCF926CBE7E112DF3FA640D1D3641A19470110916,
	InternalMapTile_get_TileX_m3C17240324CE394B5B214F778C3F3971CD7650ED,
	InternalMapTile_get_TileY_m65A63EA3D5AFC9F273B3273826C2DFDE488F6E83,
	InternalMapTile_get_Origin_mEC9D337F6428372A25BCFC40E15FADF3D88C0DE4,
	InternalMapTile_get_OriginX_m80FFD20146C631D45D0E9EF6E4EBCBA955565E03,
	InternalMapTile_get_OriginY_mE3DAB36C8C9574798423C9D941636835635CCA66,
	InternalMapTile_get_OriginZ_m82F0A69280501B0553C28899CBA332C122C25809,
	InternalMapTile_get_Size_mFC1BD030B8B73141349ED2BEA991ED321D6991D0,
	InternalMapTile_get_Epoch_mC3B417FA514D28607F9E15E1C999A6C190F2B13A,
	InternalMapTile_ToString_mF8CC0B6D68317EAB2E6D24BE107CA402BF914771,
	MapContext_get_LabelLanguage_mA18ED410F10AE7F3D13C82139AEFD88C804BA74F,
	MapContext_get_Instance_m04C6FD6C907026CD0F2546C08E82CC179C09851C,
	MapContext_set_Instance_m0F60CFE14B4B5F6E9A96B5C0F663816BA53401EC,
	MapContext__ctor_m85F93E203DC111E1F1C29C1BBA6491565B8266FF,
	MapContext_Initialize_mABD5028BFF6F02CC1BEB11864D6F0999EC631C80,
	MapContext_Shutdown_mB0E1DD84D4D275B188E5747A0573DC272C226AF9,
	MapContext_OnStart_mDD8E6150BC7F78F4A1EE2459E0B4D34AA1F524EF,
	MapContext_OnStop_mE3EB13AD24890FA91FFD159B67463F972AF98473,
	MapContext_IsIdle_m56F288DE1CED6EBB4FF415576F7C8EABFCE677AE,
	MapContext_AddView_m0A01DE1166C14397F97A75C48BCA97627469BA61,
	MapContext_SetView_m2EB34195FF52D5EFA6D1FE663275913BB304F46B,
	MapContext_GetView_mE3A61CB164480EB51D1F405DB2A2B2B039EB5A4E,
	MapContext_UpdateTiles_m66690EFF83B4FF1842136E3B8C9DCA7CC4D070D9,
	MapContext_Reset_m01A6E278E39A6D810B62A8A72CA17A1B55FD67F2,
	MapContext_RemoveView_m5368559D1B75446EFC727E87DD9F807677AF9BCD,
	MapContext_GetViewCount_m7200085E0579AE12A7031612EA90DCCC44C0CAE9,
	MapContext_GetMaxViewCount_m90C4A03A789D27643D6FCBDEB5F320CA23463678,
	MapContext_ResetNextViewId_m9048BE3EBCCD68542E20794DB9680A66FBBA58DF,
	MapContext_NextViewId_mBE7888E6818D984D381E6F5FFBC59F9B3EB71B04,
	MapTile__ctor_m1F79788168B4330686DAA6DD2A7B7813B5260B69,
	MapTile_get_Id_m13F3CCBDB3ADE36A03C5ABFFF3E5015D504EF529,
	MapTile_get_Origin_mBE3366BF778EC73C09A9C975501FD4E723B61BB0,
	MapTile_set_Origin_m60501170F3825DD7F8D0F17543DCA3C16453BC2C,
	MapTile_get_Size_mA6D494C612A7598F850D60E20E0318F1683BCC28,
	MapTile_set_Size_m17ED8C40E90F0DF87A807FDF9278536DE98CD792,
	MapTile_get_Level_m8362B786C28F27C997CD4F6B97C987172C204F17,
	MapTile_set_Level_m9C2A43941949641D08F80A2CB8C6CB77FF0675D6,
	MapTile_get_TileCoordinateString_mA061CB43FCB512C27107B6CF6754C5A4DD8C4B70,
	MapTile_ThrowIfReceivingData_m619F98BEA614FC8DE783D458D767ACED1E08C2CD,
	MapTile_ThrowIfNotReceivingData_m24E3879945084546ED1686EFA5B1AA1D4413484C,
	MapTile_ThrowIfTileDataIsNotEmpty_m8FDAD4F7262AD72CC31ED8FBF7CBC9ACE1C8A852,
	MapTile_ThrowIf_m2BE71A2FA78F2BE1B672FB07FCF34443D466D979,
	NULL,
	NULL,
	MapTile_GetTileData_m0ED5A37DCAAC8BB9632B20EE33301E167EF498FA,
	MapTile_GetTileData_m50998915B6CFFA0015831C19FF03E92742CD221B,
	MapTile_BeginReceiveData_mF47C051B03BC8DABBBC3B5B081C3943EFF69F2D9,
	MapTile_EndReceiveData_mDD3B44689CA1327E6B1F300352CCC7CA1FA9D950,
	MapTile_SetMapPosition_mCBEC58AE945BE452E3BDCEC5FD6487370637CA67,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MapTileCache__ctor_m04AA025B4A8FA7429044F1E7D67C963A9B58DB83,
	MapTileCache_Dispose_m4E30227304BA55CCF5B7434603660FCBEB899F83,
	MapTileCache_Initialize_m0378E378AF343566661F8BFE435272CBF78610E8,
	MapTileCache_Shutdown_mCB6B711A720BF066C061D9CF0DC5409CC57977EB,
	MapTileCache_EnsureCacheInitialized_m2B2E235A4E11AC1E2C8D914536F3ED70D25D6A5E,
	MapTileCache_RunThread_mB5F66F086ACB129F34719D7696E1497753F68C33,
	MapTileCache_ProcessReadRequests_m470E88993AF6AEF69EF9A813E482404B3777E38D,
	MapTileCache_ProcessWriteRequests_m0E240542C3DBF33A665847518E42681C447B3845,
	MapTileCache_RequestTileAsync_m28138AAFF0F1B26C4CED92697F935BE54986F264,
	MapTileCache_AddTileAsync_m2C87DE4D6DDA3999F08768BA09E785A1323B64DD,
	MapTileCache_AddTilesAsync_m90D7D6BD0E6E70F0F3A5ED36494D12D0DC3BB2FE,
	MapTileCache_QueueTileForAdd_m9C770FA9ECF98579EBB8192EE621CD66060ED4AD,
	MapTileCache_QueueTileForAdd_mB5B09E35D08649EC66BB011366358852D1458DEB,
	MapTileCache_QueueTilesForAdd_mD82E29DF856B02C18BE3D01EE9FF124CE510DC74,
	MapTileCache_U3CProcessWriteRequestsU3Eg__InsertOrAssignU7C20_0_mB996FBD54408A2CF1657C0AAC27DFD571FCB4DC0,
	TileReadRequest__ctor_m7F85198B56474344EB8C6DDAFF7DB592D65A2927,
	TileReadRequest_get_Coord_m73C7A028EB277F175021F4915D6FED5CD155B367,
	TileReadRequest_get_Epoch_m9CAAFF03225696441E1C310EA05A8122DB24AF42,
	TileReadRequest_get_TaskCompletion_mF7F3DD1419C6CCD3153ACF83C5577D2FEC750B22,
	TileWriteRequest__ctor_m4D8933FB9775DC89225D6F0416627D9FBAF0C381,
	TileWriteRequest__ctor_mBA13C63F9F4B236DEB582722BCDA922F9322DC48,
	TileWriteRequest_get_TileData_m9F6E098103AD5FA5A37B5F44B19FC2BBE798D1A8,
	TileWriteRequest_get_TaskCompletion_mD30D1FF7D15E1925895149E75D87C16430731099,
	GroupedTileWriteRequest__ctor_m9973307FB679437CA4C22A2EF6F8E7EA8761B92E,
	GroupedTileWriteRequest_get_TileData_m233AA767DA5FC9963DC3EA9F27260B75666E0070,
	MapTileData_get_Coord_m562457D6F15B4780D06D77F38F32DA11639C05FD,
	MapTileData_get_Epoch_m85BB3D838D2390FFB784432717AE99DAF9120C0E,
	MapTileData_get_Data_mC4AE7D93BE5891FE68770429B76429D8BAFE63DF,
	MapTileData__ctor_m5B343960AB4F1D14520E76B345EA1FF880884132,
	MapTileManager_get_MapTileCount_m8BEA10EE3C984B426DF1039BF47B8D9AEA31834A,
	MapTileManager__ctor_m93199A14356C6A7F1B935AF17F5F901840D849D7,
	MapTileManager_Make_m01FFD42437AB5A60A047855572475295FF4B7CEE,
	MapTileManager_IsIdle_mD1C8A653397C85321E3CAE5D83C8AEE63921159E,
	MapTileManager_ClearUpdatedTiles_mE3E869A1932BBC5AC24741603FEC7DEEA08F3DFA,
	MapTileManager_Reset_m17D4DCDD071BA6E49636A63BF301DFDFA9132A52,
	MapTileManager_Start_m01BB7C175CF80E21CB3A57652F2DBE6225617702,
	MapTileManager_Stop_mD699BFC2840E8EF21EF73131A5DF66BA026BDB42,
	MapTileManager_SetView_m1B34A0A7D167C3253FC64E93383A651BB70E5AB9,
	MapTileManager_HandleViewpoint_mB2CFEA0F1D463379F249B255B3098B162EFC2AA4,
	MapTileManager_EnqueueTilesForProcessing_m16609495C2671281C927EA877BB8238658E0C5E7,
	MapTileManager_CompareToCenterViewPoint_mE62B8B9489BEB841AB493EEA1897B390637F8AB8,
	MapTileManager_GetDistanceSquared_m828B3AD34756F7062A5695FAE994D1240673D4D4,
	MapTileManager_SyncReadyTiles_mAF21CAD6547C16380226D7972EDC2D90135D0AE2,
	MapTileManager_RemoveView_m4037E30831C91C2296165A6A7C4DFA741592AB50,
	MapTileManager_ComputeTileZoomLevel_mF4D85B6F7FCBED863CD00D93FE273F356AA032C0,
	MapTileManager_OnSettingsChanged_mC5F7460AA9543504C401F583ECC07F79A0DDA569,
	MapTileManager_DesiredTileSizeM_m4DD70737C117C2FCBB219365274AE145837DDD42,
	MapTilePipeline__ctor_mF8E9A7D3406A45A2597D145F15047B4160919765,
	MapTilePipeline__ctor_m42B3A323E14D3F1F62B5A23DB503070C9011FF7A,
	MapTilePipeline_CreateTile_m2283F421DD95BBA87B73CCEB93BD1C0F706F0859,
	MapTilePipeline_RequestTileAsync_m3D1F825677DFBA9E48FC422E984499AC677E99F0,
	MapTilePipeline_Decode_m628CE216DF6B7988BEECE5CFA1E4C848D30A9B56,
	MapTilePipeline_IsValid_m498EA006BA54D9A9AED3C5F794D72E3E848336A2,
	MapTilePipeline_Provider_m78CA31F94F06CDFF93E3D074B853C168AFFD9BED,
	MapTilePipelineManager_get_MaptileSettings_m9D63DA768727FDFCD6351E70D503EDA9E6A4654C,
	MapTilePipelineManager_set_MaptileSettings_m360E5CF567E476EFBECF177BFDFA668581D3A47E,
	MapTilePipelineManager__ctor_m2C06BF00936EB8777FC718C5D691C56876A9A29C,
	MapTilePipelineManager_GetMapTilePipeline_m8CD42AF8B87B161D3018159F1EA31D4ABCFDE6E5,
	MapTilePipelineManager_StartAllFetchers_m251AFE8CDA4A41165CB25A3C614422E0C20F8612,
	MapTilePipelineManager_StopAllFetchers_mF121ACA9E350E1022186D0A46FFE6935AB15F567,
	MapTilePipelineManager_GetMinZoomLevel_m9255AC5E63142DCC9A3FA22C6BC6E948B41B981D,
	MapTilePipelineManager_GetMaxZoomLevel_m98C53F6F9A5CFC65E8EAE4D5E7837135AD10D60D,
	MapTilePipelineManager_CalculateMinAndMaxZoomLevels_m45AEC7E779AF29168B01AD4B837BC8412E39031F,
	MapTilePipelineManager_Reset_m110B17D7D8872457548D47026F280267075F7C28,
	MapTilePipelineManager_OnSettingsEvent_mE3C4DFC55C5B3E331BC52E2ACB3425FA5C142FBC,
	MapTilePipelineManager_CreateNewMapTileProvider_mA854D393F6B3DDAE29D457377A870D7DF3771389,
	ProviderDetails__ctor_m59C26FF814B9C07E185FB77C726A789F566E1638,
	ProviderDetails_Matches_m3F98F81136E12B322D1E328A04CB8872307ACF6D,
	MapTileProcessor_IsIdle_m7C5EC4BF642783E00FD50E6C6D5F3F2AC759D189,
	MapTileProcessor_ClearPendingFetches_mF4288D1A13BBE2C9E6D13FC26E90141C18ADA7E0,
	MapTileProcessor_CancelProcessing_mC8F6060E1F7EE939F075F4399BC0ACAE1CE71B76,
	MapTileProcessor_Start_m72232200AC9778DE9092B8AEB455F4D0486858F5,
	MapTileProcessor_Stop_m96C914943F630A38361754A886FD309623DA0EB4,
	MapTileProcessor_Reset_m28A66BDD86B71F1063334A7482A65CDEE104DC2E,
	MapTileProcessor_IsQueuedForProcessing_m9A3A1897801EC0CE76588E1B77504BA99B60BDAB,
	MapTileProcessor_QueueForProcessing_mB44F20CEBA4D7200C2536E54F2D89FEC69B29A44,
	MapTileProcessor_FetchTileAsync_mD544DB305EE0D2658B67B755A1D88E913AFC755B,
	MapTileProcessor_GetAndClearReadyTiles_m4B2932E9FB8BAE6A3D985019998EE4ECE696818E,
	MapTileProcessor__ctor_mC91A5B65366E61EFAA6799CBB0D34A57BC1CF7AA,
	FetchContext_get_Task_mFA94108FE8B9A119B89499A4A44E022C430778F4,
	FetchContext_set_Task_mE95ECDE5476D0D47141264C1306A7BBDFD4CE8A7,
	FetchContext_get_CancellationSource_m6C6068E73D6A5BFA04B339C189AD8E382B448268,
	FetchContext_Cancel_mE5FF22E8DFC4874FE94BB085A33D9EC6629BFBAF,
	FetchContext_Dispose_mDE6D058718A12EC77A70632DB9C3A547FEF6157C,
	FetchContext__ctor_m00F70B6C3FAFD107FA29944355A67E1F09B2D73F,
	U3CFetchTileAsyncU3Ed__13_MoveNext_mA2C1926CD9A81511C04A7AD6E922228DDCA8716B,
	U3CFetchTileAsyncU3Ed__13_SetStateMachine_m0232599F56D21716768FD272937B7E70AE9147E8,
	MapTileProviderFactory__ctor_m00F881FBFF5E59031E6844C2992FDE99361EF5A8,
	MapTileProviderFactory_CreateInstance_m4137A06C6DB35E69A5800376D7653389FC5AFE59,
	MapTileStreamService_add_MapTileDataReady_m268B193D9170D6ACD4F251CB5E83CD621EC8EE60,
	MapTileStreamService_remove_MapTileDataReady_m785655C885B845B298A05D2C486F50AC80042F44,
	MapTileStreamService_add_MapTileDeleted_m4DA9D453FAB38029CAFB91D44EC3C0939FB67BE5,
	MapTileStreamService_remove_MapTileDeleted_m0047BC61E9AF917E38D1C358C076C21CE91AE810,
	MapTileStreamService_get_ActiveTiles_m824DEF3CCDA645E5FB323C80A40280D4B9F64A8C,
	MapTileStreamService_AddReadyTile_m9054095B36A708B5E78E2FB3784283ACF0787FCA,
	MapTileStreamService_DeleteTile_m7421D1F1E2060F3A0777AE6DAFB043A85257A85E,
	MapTileStreamService__ctor_m2702EFCEC319EAB40B45DC7DEC57304222991AD3,
	MapViewManager_get_MainViewId_mFE1E9AA6A66AEEFEEF7A58B252284E0442D1DB60,
	MapViewManager_get_InvalidViewId_m92C9BC0A9637F056200C751B5E1132D1B69D62E6,
	MapViewManager_get_MaxViews_mFD273888E34372D0060A556DF91AA19595E36A2E,
	MapViewManager_get_NumViews_mA8D9E53C19FB95817231039EA7C52F95FC26F794,
	MapViewManager_AddView_m19C3F161094BDD06AC287B342F02552751A0840E,
	MapViewManager_GetView_mFB4C042E974E641E8F7F7C38D8BDACF4B2B5F9F2,
	MapViewManager_RemoveView_m8B4340E83CB48F11231B962E8F42EF3755352A3D,
	MapViewManager_SetView_mC8626951297265F86EAAAD745B3DE62F323BE4F3,
	MapViewManager__ctor_m1A432F915200DC437D175B0AEC5495B78F164AB0,
	MapViewManager_Niantic_Lightship_Maps_IMapViewManager_AddView_m246D526CE8E301A0DF7EF5801FA7E72EEDF97ECC,
	MapViewManager_Niantic_Lightship_Maps_IMapViewManager_SetView_m1EE55963CEA23FF884FC7638C3A2C992926D61E5,
	TileData__ctor_m923C63D8ED53867845D4A4A81ADC4CAEEC10D62F,
	TileDataStore_get_IsEmpty_m8EE0EBCF506AB83FC373DCBC65DA9D0599D89CE9,
	NULL,
	NULL,
	NULL,
	TileDataStore_GetFeatures_m8F06CA0E4817FE310EB1B0B48471377FA1D20A13,
	TileDataStore_GetFeatures_mC77C1C1AF298C8CC3E3E3D7C1B39BE1B58152B14,
	TileDataStore__ctor_m3CE5F7168A787BEAF15E6500DB13A8ED4B10155C,
	TileUrlGeneratorBase__ctor_mE769B790E8A269C3C1EE7E7089714CFDBD2257F1,
	ViewPointMapTileData_get_MapTiles_m70B1255998B7179E8A6D0237054F62E2F481DEC4,
	ViewPointMapTileData_get_LatTile_m8546D4B54BEEDD34723C918117B934ACE113C402,
	ViewPointMapTileData_set_LatTile_m0F13EC5A34B4CB43985A98758A76BAAA9AF10470,
	ViewPointMapTileData_get_LngTile_m613B53D7DF9ED4AC00659660C47134F409BDE201,
	ViewPointMapTileData_set_LngTile_mE35FBD2C4B0534588F813CADC1DC2CF9B0BFE35F,
	ViewPointMapTileData_get_LosTile_m646DAB32160D458666823BC62D364380130AD829,
	ViewPointMapTileData_set_LosTile_mF92486C0D23A821BD5109357DC30CA85BC2918E0,
	ViewPointMapTileData__ctor_m072F84EE0244154D82052108651E4F9EA0CD38D4,
	ViewPointMapTileData_HasChanged_mBD6CFB7BFFADFBB14C12170068921611083E2E8D,
	ViewPointMapTileData_UpdateData_m56ED71C0A180EFEACC7606D9089FCD9E0B280B59,
	ViewPointMapTileData_AddTile_mCC6A5C52D3FB8E670D4DD2B97575BBFA8A72BAAC,
	ByteSwapper_Swap_mC1FE94B580E16A4251A8DD95DA8FC0ECAB92520B,
	ByteSwapper_Swap_m1B12163D9D98147AD43B7FFDCD4F511841FF704D,
	ByteSwapper_Swap_mE78E563292C2BA702463DEEC531B4A25B31A3D65,
	ByteSwapper_Swap_m788118AD6325750E757599B2307117341BD73F83,
	ByteSwapper_Swap_m70F250A2DEEE4269D3B2EDC9A92EE06356E86641,
	ByteSwapper_Swap_m687104682CC3738994ACF753F836E1BE0DF62CC7,
	DisposableScope__ctor_mCB14C97E18F34E3AE157699935A9ED90BBDA0F6A,
	DisposableScope_Dispose_mBABBC0C940C03A796540DE2E752991E1BA63ED45,
	FlagUtil_IsFlagSet_m027362639B7501954C2C8336F973605F1BB074B4,
	FlagUtil_IsFlagSet_m3A8CC24B20C04AFEB280DC6B3511D69DF2CD9491,
	MapUtils_WrapLongitudeDegrees_m9D194DE15B82634C06EE78F6CC8A33BE05D8320C,
	MapUtils_WrapLongitudeDegrees_m376F62D3E453EC1E59AA865065326A9EAAD47177,
	MapUtils_WrapLongitudeCoord_m19E128937D74AA306DCECA31C73F9B5A336C76DF,
	MapUtils_WrapLongitudeCoord_m93517677A7BCED80815D0F1263B64795044E2313,
	MapUtils_ClampLatitude_mE0A5A99021842716CE7D320B81DC572A2EE2021D,
	MapUtils_ClampLatitude_mB7A5698746B35BB9D5FEAC66808615B411387849,
	MapUtils_CheckZoomLevel_m1EED5CC8F67C8A785D27A29C2E447AF382E61D00,
	MapUtils_AssertZoomLevelIsValid_m957C1CA4B20551A87912DB6537591DA576E9B008,
	MapUtils_CheckLatitude_m938B0EA9642FEFEA2D141792B9E2BE7A7C7CD3E7,
	MapUtils_CheckLongitude_m20E1D52F60B8F8DB0F692DBC44C277EBC15CDAD2,
	MapUtils_CheckLongitude_m74E3FAC9550598FAE1A1392B1497F18C9C2983C2,
	MapUtils_ToPlatformCoordinateSystem_mF3AB2F01ACA7FC7C84F3497F701EFDD1ADD1D8DD,
	MapUtils_ToPlatformCoordinateSystem_mF2906E20B06B68E8917D5CCA78142FDB41E26FEC,
	RingTileCoord__ctor_m9D3152A2070A9186E8110604302BA6B965F7ECBA,
	RingTileGenerator_GenerateRingTiles_m3645A2F14C4041401160D5E4086520E968E9EC43,
	RingTileGenerator_GenerateNeighborRing_m8924DBC456CFAB520F8682CA054FFA7DC6AC4166,
	RingTileGenerator_TileSign_m177A8A6B1567C1A1C502EA55EF3B3C16607FD1B4,
	RingTileGenerator_TileDist_m96C9B5980711B66224537E75F1CEFBE94F3CB6C0,
	StringUtils_FormatPrintf_m7A260096008E6D2C2467942A611615077DC940A2,
	U3CU3Ec__DisplayClass0_0__ctor_mD70F16EF47B99697B41C7935DF061066C396BCB8,
	U3CU3Ec__DisplayClass0_0_U3CFormatPrintfU3Eb__0_m23D596691E0B115EF6EA27758F9FB2C12A08F31F,
	UnitConverter_GetPosition_m654A1AA8063E24A074DAA36914A681713E866DBF,
	UnitConverter_MetersToMapUnits_m557885F3F23512B7ABDC446CC55C285179B88D72,
	CacheRecord_get_Key_m9639E4001D7B33AC4C897002360397A2560CF9EB,
	CacheRecord_get_Cost_mF5420A76651B2B8D72D49E763A6F7B815EAD6D32,
	CacheRecord_get_TileData_m5FCBB1E71C36B8B4A8B8F7B653609D674A4B8A63,
	CacheRecord_get_LabelData_m3DC4F62B0771965AA5E7A1C0439F9797A5F96FF0,
	CacheRecord_get_Epoch_m3EFB1FC7D64327BB112E02836613A8A7352426A3,
	CacheRecord__ctor_mF71584FBA15CF10A2FC728B3645658685330E779,
	CacheRecord_Equals_mEEE8C74E80ABCAB5040312D28FCCD2B45A0B1623,
	CacheRecord_Equals_m88D899837BAD2B01B2512EE93AB35FEA7F622015,
	CacheRecord_GetHashCode_m748058CC2E94702FB549714B43ADB189C2F74B61,
	CacheRecord_ToMapTileData_mE5FA813C5FCA371043D06785B3DF5278D4A8CB50,
	CacheRecord_FromMapTileData_m1407167F34F845868ED7CACF3D1ACCCCF6F4CEE5,
	LruDatabase_Dispose_m8F7C56F9DE8CAE834C85B4C5655DEF8A6E5CECB9,
	LruDatabase_DisposeConnection_mCBA3DA42106C2BB3A41F614B59D9292D5F10FC31,
	LruDatabase_OpenDatabase_m8C7BA56E350D2D8A6C8C1D33D7689C54D2641C49,
	LruDatabase_TrySQLiteCall_m2E0F03E5381B13BBE99F23A10D3CEAF8033A4725,
	LruDatabase_SetItem_mB4D134380F25683B4EA09F30E0F49C147B774562,
	LruDatabase_FindItem_m8B70B871144804DC637495BBB272D3F0A9581413,
	LruDatabase_Size_mFCC7137D82AAD5533F3FEC5488EF7172969F0BC7,
	LruDatabase_Clear_m9D7C04D120973A5A02331540EFE27ED9B22DC97B,
	LruDatabase_BeginTransaction_m6D49BD4AECE06357B87908D2D31D031BA3CC65B8,
	LruDatabase_CommitTransaction_m74D0C3A556798292EDD0ED7A44D0AC2A7F880353,
	LruDatabase_CompactDatabase_m77B09B934704592AC43582584CC49CF070640FA6,
	LruDatabase_UpdateLastAccess_m97C54CB1732FE7FE40C2800FCB10CC8643EC21DD,
	LruDatabase_VisitRowsLru_m41245E56CBE0621C0741309C3B6A96C79EDAAAC8,
	LruDatabase_DeleteRowsLru_m2353B83F55CD3E21A4E509A68DDE321B971653D3,
	LruDatabase_UpdateEpochLastFetched_m38ECE0D802A234140353CA33BE65E744BF9F7EC1,
	LruDatabase_GetTotalCost_m5FFC6CAB9C3258122433CEC3277004B1D480DAE4,
	LruDatabase_CreateDatabase_m43F837D587DDB1D65D550F1F91675D345557F39E,
	LruDatabase_TableExists_m414D89D7F5F46B4FC270C46FF6C529AA7D5CC321,
	LruDatabase_Version_mE3A2E7B85AB947EB1F96B1BB4E63A50305548FD9,
	LruDatabase_SetVersion_m1B9E4F301D55B53DA902598EED6BD309118CB181,
	LruDatabase_PrepareInitialStatements_m0B295BBE3789278B1CC3BE4CB541354C9DF93AFA,
	LruDatabase_PrepareVersionStatements_m5782B74FF443580B40643FE96FFBD7C2A0B78E6F,
	LruDatabase_PrepareStatements_m916E0F1D492BB7133691C3D55BEBAADF7F8A4781,
	LruDatabase__ctor_m54CA2B0A089D87A15D1E6D0258032ADCE7E68AE5,
	LruDatabase_U3COpenDatabaseU3Eb__21_0_mDE4BC2A75C7AFA2C570F6FF0E2B93454FCE23CD7,
	LruDatabase_U3CCreateDatabaseU3Eb__35_0_mCBBA8D0931302A842D34F763C127891D82013B8C,
	LruDatabase_U3CCreateDatabaseU3Eb__35_1_mCAF3C5C31D16D8166A22451FAB89D8722B93BAE6,
	LruDatabase_U3CCreateDatabaseU3Eb__35_2_mA5E410B6DD18C52471DDB19C188B520A52AB23A2,
	LruDatabase_U3CPrepareInitialStatementsU3Eb__39_0_mB3EAE7749D31D4966EFB42F00FC137A2F8FDC113,
	LruDatabase_U3CPrepareVersionStatementsU3Eb__40_0_mC051A34CFBDF6E5915D99732DA394F7E5D8C5DE2,
	LruDatabase_U3CPrepareStatementsU3Eb__41_0_m5328248244BDE70DDC31514DE8D4FEFF3AD7E54F,
	U3CU3Ec__DisplayClass23_0__ctor_mB29C6CD6456E659B3EE26F2D389CD5BDDA93D172,
	U3CU3Ec__DisplayClass23_0_U3CSetItemU3Eb__0_m6810E0D3C1D02EA09AFB122D77C3B85485AD21E5,
	U3CU3Ec__DisplayClass24_0__ctor_m139F0FA92588F6E790CF8C6ABC4B0A171BE9C13F,
	U3CU3Ec__DisplayClass24_0_U3CFindItemU3Eb__0_m0FF32538180A909DA193963BE29783DD9A84660C,
	U3CU3Ec__DisplayClass25_0__ctor_mFA980D500EEB3AADF1DE88FE6AE42BC2D596A587,
	U3CU3Ec__DisplayClass25_0_U3CSizeU3Eb__0_m8F056591DBE764C43E897B3BD183E049D0235446,
	U3CU3Ec__DisplayClass30_0__ctor_m8CA69652E846C6E425ECB69BDC8B2CEDF77AA299,
	U3CU3Ec__DisplayClass30_0_U3CUpdateLastAccessU3Eb__0_m074C49A80F50CFCAED0A2CF24F3115B49F05E676,
	U3CU3Ec__DisplayClass32_0__ctor_m8E6190A2FA34020DFC309E139031AFFB9C662DDB,
	U3CU3Ec__DisplayClass32_0_U3CDeleteRowsLruU3Eb__0_mF67AEBEC1C0E34DE5C00FAEF2B5DD21CFFB02B63,
	U3CU3Ec__DisplayClass33_0__ctor_m6525472F03B35BF86407ECDE77C8FC44F67740F5,
	U3CU3Ec__DisplayClass33_0_U3CUpdateEpochLastFetchedU3Eb__0_m7DF0B9CC9DBA245B7172FC6FB7E1F1CB73DDADDD,
	U3CU3Ec__DisplayClass33_0_U3CUpdateEpochLastFetchedU3Eb__1_m18F4AB2312B6DAC6FA654085275D86BBEB54CA16,
	U3CU3Ec__DisplayClass34_0__ctor_m6916C77F953A274AAD1D61AEE65AE07ABE947BEA,
	U3CU3Ec__DisplayClass34_0_U3CGetTotalCostU3Eb__0_m258241273CC0B1C5F609CEA14F0B04922A6B518A,
	U3CU3Ec__DisplayClass36_0__ctor_mBFCB6563102114B83C178963B15E5D07CEDCFCFA,
	U3CU3Ec__DisplayClass36_0_U3CTableExistsU3Eb__0_m2AE1129DC0CA6059825807D15BB27C8DA8AE4776,
	U3CU3Ec__DisplayClass38_0__ctor_m04A7AEE228668C4AB1B981C82F75B20323D6A4DD,
	U3CU3Ec__DisplayClass38_0_U3CSetVersionU3Eb__0_m016AEE6E21C2BDE9FD56FDC1DAFD8287C2A221A8,
	LruDiskCache__ctor_m64D74C1537768CFB60EBF67D2D41F65EEB578765,
	LruDiskCache_EnsureDatabaseInitialization_m52918CCD6A000CE39FCE7FC4A9A86A9A5286243E,
	LruDiskCache_Begin_mEF0FB67F59611D5A2B41CFE040782A7804A8D0DF,
	LruDiskCache_Commit_m8CA5774746A6DBDAC2BD9AA9B8AFCC410E6BCCD6,
	LruDiskCache_Trim_m166EDDCD50EEB209A7EB21BB24ED51AD39A01E20,
	LruDiskCache_InsertOrAssign_m1BAC1EC90AA1E78E535879973C612D3751AC69D2,
	LruDiskCache_get_Item_mA24019583955AE4D628DEC1599006C93352A72E8,
	LruDiskCache_At_m9106EC53F0BF70D0CCDCFBB27D99D6D3681FFD71,
	LruDiskCache_Size_mAE6EE733CD3C970A2EAAC68D7604AB9EE675E863,
	LruDiskCache_Clear_m025D39961638973E07DF2613CA212D9AEB126B2A,
	LruDiskCache_ClearFile_m0342CB5E0C6260C4BC28B9B859EB908F5241246D,
	LruDiskCache_OpenDatabase_m843C136BFD8E76469BFDBF81268B34161C74D731,
	U3CU3Ec__DisplayClass9_0__ctor_mE8426329DBCA3BA1DAD851AE61C4BB481016F8A0,
	U3CU3Ec__DisplayClass9_0_U3CTrimU3Eb__0_m1963855A2871ACDD1FB7B52CBF43F0C3ADA2D391,
	SQLiteDatabase__ctor_mAAA3D51A841515077AB35D5E7441FE5173F91C0D,
	SQLiteDatabase_FromFilePath_m673E3819834044E7AB4B588526224F7AC20261FA,
	SQLiteDatabase_OpenConnection_mB3892EF2EC77441134907EA7F9F2965E10970E94,
	SQLiteDatabase_Dispose_m874D676FBE98E53E8E0824201197576A11D5E05E,
	SQLiteDatabase_GetLastError_mCC598D087FA6BF3B3721C8D53EB93E8C33EE0FD5,
	SQLiteDatabase_GetErrorString_m003DCA04EBA951B77DC699C78F90F83E15BE64B9,
	SQLiteDatabase_PrepareStatement_mFE93A14BEF44FA725B8B79A6A6DCB7E9B5A0C40C,
	SQLiteDatabase_ExecuteNonQuery_m7CBF2FDB0E4209C6FCE533E207FE9C9F3F37AB0E,
	SQLiteDatabase_ExecuteNonQuery_m08FAB7B523AF723BA5E0BC0CBB65AC83E368E2E4,
	SQLiteException__ctor_m34383893AB7C9639189CEEC60BFE0DC754C4CC01,
	SQLiteException_ThrowOnError_m4C9EBF79AFD8BBB23FE814C18C320CE1B3F0E098,
	SQLiteException_ThrowOnError_m63B17F92A17C8F1DBC125A2B423E9CC0015C04FC,
	SQLiteNative_sqlite3_open_m17446A63003C231CBFACEB4975739B5713250D01,
	SQLiteNative_sqlite3_errmsg_m480F2BA9B94D2491122129FE521615941A87584A,
	SQLiteNative_sqlite3_errstr_m9B27DE8B3280BC222C9484AC2033A642A61734F7,
	SQLiteNative_sqlite3_step_m350F7135376AA6730E19FE11D16A80818D0A2C54,
	SQLiteNative_sqlite3_reset_m7AA78E831169B1007CF80503B2A6A6B1AAB7E0E1,
	SQLiteNative_sqlite3_clear_bindings_m5071C46263DCB6B4D820B763FB00EC4444D809A5,
	SQLiteNative_sqlite3_prepare_v2_mC505304E2B6199D1ACABDB130726F49660395F11,
	SQLiteNative_sqlite3_libversion_m23ECF644D384ED0F6371C1623153B0C668243067,
	SQLiteNative_sqlite3_libversion_number_m0459EF3591A3A6C80A9FCCBBB261FB7A6E856FE2,
	SQLiteNative_sqlite3_db_filename_m9898CB57B41BB91E8E0DB33B202960F540AC7B88,
	SQLiteNative_sqlite3_close_mDD3E1F7CB01422379B3DD8A5D20F054A932EAC21,
	SQLiteNative_sqlite3_finalize_mEEE17E7FA3F48C3A8C34D7F83E1EB16E890A44F9,
	SQLiteNative_sqlite3_bind_blob_mC8C589652F411AA03AEAD83E807E31B9BB493D78,
	SQLiteNative_sqlite3_bind_null_m96CD888545F1E8FEFAEA437802A70249CD57A125,
	SQLiteNative_sqlite3_bind_int64_mFA23F98586E31D694FF6AF9CC57A6A09A3D1E4EC,
	SQLiteNative_sqlite3_bind_int_m6034B724AD9C6EF84AFB34302C7C31778CBCCB0E,
	SQLiteNative_sqlite3_bind_text_mFAD6F42D1B7D5A91C013D746F82DEE0014A8293F,
	SQLiteNative_sqlite3_bind_double_m088A9D28B478DBE6760E5D8264C5C382D0F55B0C,
	SQLiteNative_sqlite3_column_type_m36DFE10977F26D2C647452596C83C0BCF47A2876,
	SQLiteNative_sqlite3_column_bytes_mC83DDFF105BF273784370317CD592FB867DC6F89,
	SQLiteNative_sqlite3_column_int_m967CE6098B88FAF225C0E95EC0551D5B1C27E344,
	SQLiteNative_sqlite3_column_int64_mB0DFF0D9EBE4A9720EEAC5BC0730A56C0F5EFF70,
	SQLiteNative_sqlite3_column_double_m0B19E61A9435BE654BF5479D8473BB48F2DD4B97,
	SQLiteNative_sqlite3_column_blob_m7F0A987B69614A5950802B09012210293EC5F3D1,
	SQLiteNative_sqlite3_column_text_m65A391FFC4E205AFA06AE4576DE782D6115D076D,
	SQLiteNative_sqlite3_column_text16_mE0D3C8D1838B6E41F3B4FE000D2B882222D849F4,
	SQLiteStatement__ctor_mA3241EA5E7FBAB6A5FE9341BBD6B16C114F89C2C,
	SQLiteStatement_Dispose_mD0520102DB6A442FA082B8BB44E069B8B170B20D,
	SQLiteStatement_Step_m23BEB9863406CF9D023E0C8B1ED24ABF61C96EC8,
	SQLiteStatement_ExecuteNonQuery_m030828168C020DCC67E699A09DC3170C1C71698A,
	SQLiteStatement_TryExecuteNonQuery_m49C5F8987B0685912DB96DB51E14B0C8384D58F9,
	SQLiteStatement_Bind_m26FA74AE701E35FF5918529B9DFDF4BF557227F9,
	SQLiteStatement_Bind_m8833E581F887FFF1D0488C85A9ADD734F2A01BB9,
	SQLiteStatement_Bind_m8F228E517FA410A06F8A662C97F6C2A211F6685C,
	SQLiteStatement_Bind_m0A53558A3EAF70D51B0AF62C2B54226ED05E422F,
	SQLiteStatement_Bind_mC2E826BD3E388755268F25C4249C399286D76E6D,
	SQLiteStatement_Bind_m94A9BD6F19C5259E646CD67C2E5554A7DDBECA40,
	SQLiteStatement_BindNull_mD087490988AC9970841E9A5467642E928AE39D70,
	SQLiteStatement_BindValue_m6F2768C05AB3C194A86929AFC5EE0964A15B99A8,
	SQLiteStatement_BindValues_m003EE7F3DCDE7B25DCDCC353DC336AC6C850B8F7,
	SQLiteStatement_ClearBindings_m5699E7847D4FE232AA84DD9760F9F80A354545EE,
	SQLiteStatement_Reset_m408B4CE746874847C25B77960665A57FF494EEDA,
	SQLiteStatement_TryReset_mFE72E897E1DCF7744B8435260B71DF6A7DEC274B,
	SQLiteStatement_GetColumnType_m988F0C4D6391297B83F8A8FE55B459168B2C973D,
	SQLiteStatement_GetIntValue_m99DC0FFE1AAD09DE012C5E7669F545AD3C63F506,
	SQLiteStatement_GetInt64Value_m6D5B44772BEDF12FCF1750C1FCFDF729195705C6,
	SQLiteStatement_GetBoolValue_mC126554536B7AE9E8395724B115278096CCD6BEC,
	SQLiteStatement_GetDoubleValue_m24341BBF33591E6CC7B397CF979A85CD47B394D8,
	SQLiteStatement_GetTextValue_m25827AA5E286D22B19FAA9776BC1DA23DDD9B146,
	SQLiteStatement_GetBlobValue_m33FCD5167888FC0E4DA1E4AAE476403056F866CD,
	GetMaptilesSettingsResponseExtensions_WasFailure_m2266347B715CF99044C2209DCC89B52023770CE3,
	GetMaptilesSettingsResponseExtensions_GetFailureMessage_m2BA35DD750D2F3DB513E889637357685B57CB639,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MaptileSettings__ctor_m4D3BB1306782B596ACF1989653418A69D5BA2153,
	MaptileSettings__ctor_m79399963B4998C71E57EA6F49241395C4E75A760,
	MaptileSettings_FromCompositionRoot_mE4566F3D99F3C2151F4919A98424AC5394890B2F,
	MaptileSettings_Niantic_Lightship_Maps_Internal_Settings_IDebugMaptileSettings_get_WritableVersionMap_m504B421EE899DBC27A53B32F216421EADB43E4EF,
	MaptileSettings_Niantic_Lightship_Maps_Internal_Settings_IDebugMaptileSettings_get_WritableAreas_m827B97AE1F7EBAF9BEF6967A7DFBD27D886CE17D,
	MaptileSettings_Equals_mA329BDD4EC631510AC4148425F5D1F59D6022274,
	MaptileSettings_Equals_mCE1A84C47722EFB4B69E3F06CE88FDA2C5DA5A50,
	MaptileSettings_GetHashCode_mA63FCAFDD685F4539A47B6CA27BD0CB3EA577DD2,
	MaptileSettings_op_Equality_m2FACE24A85B6AF52E1086B7F6C74AD5E8B18BBB5,
	MaptileSettings_op_Inequality_m60168D061FD5BDA5677A2DE38A60114D99626085,
	MaptileSettings_get_Providers_m189A069984B0FF6A3BC28FC6C6BBD0C28DB51C14,
	MaptileSettings_FindFirstArea_m767CE79DBB9DD117AB9854A604BF32C2A92C3FC5,
	MaptileSettings_ParseVersionForArea_m178DD98E5958A7E8E56495B34B784B7F62FC1870,
	MaptileSettings_IsAreaClientVersionValid_mC883C6101F087546D2146051D6BB33F4D2493DCE,
	MaptileSettings_GetUpdatedProviders_mAB4E94D232DAC9500C918FF51C8B4BD7289A2271,
	MaptileSettings_InitializeFromProto_mFDB4516083DD6E70AAABD989553A55B5934BDD85,
	MaptileSettings_MakeDefaultRoot_m1E33AC344CB1896CE4D4934C8A88E121561FDAEF,
	NULL,
	NULL,
	SettingsService_add_SettingsChangedEvent_m3D58C937BD818FA38498C91D22CC131B5157DB04,
	SettingsService_remove_SettingsChangedEvent_m437D1894DBC442E720C9F2999F3AB9EB5A0C3ECD,
	SettingsService_add_SettingsChanged_m7F1E8F4A398BBF301CF18059A42894460D4FBC35,
	SettingsService_remove_SettingsChanged_m17F203D9D4C1E07CB31490F7699DCAFDA1C8FF93,
	SettingsService__ctor_m8E3939F8EC4D8E495D08B77858912D953673AA1C,
	SettingsService_Dispose_m4E97766DD5270DF9E0F802941DB9B56AA96D0CE4,
	SettingsService_CreateRequest_mA6D2E29EC18AA58566878B181DE57CCBAF6C7A2A,
	SettingsService_GetSettings_mB121425F0F2262CE1A227708F0A2813959407C9C,
	SettingsService_GetSettingsInternal_m3C08DEB964C683795CEBB1AB1017AC2747D25CC7,
	SettingsService__cctor_m2831B48CBB7B86C8D6C57DF830FCD93AAC4C4F94,
	SettingsService_U3C_ctorU3Eb__20_0_mE57EF52B367F1F635FE0BF08EA45048053C6E186,
	U3CGetSettingsU3Ed__23_MoveNext_mB9CB82E04D075D0C7E5FC03F86C81AF50EDAF567,
	U3CGetSettingsU3Ed__23_SetStateMachine_m3C3703E501595AEE60CD54BC8D7FB9AF2AAB0E7D,
	U3CGetSettingsInternalU3Ed__24_MoveNext_m19955C373A6F885DBC207D983CB9F3C2684F569C,
	U3CGetSettingsInternalU3Ed__24_SetStateMachine_mD2F92A2A5695FE08503F402E0218AC26007C4B19,
	TileCrypt_Init_mEA833428DF3295A407C28BB0AD5D932ED3240474,
	TileCrypt_Skip_mD12D0E0AB43FF1406AFF535C99ED241DD5E56602,
	TileCrypt_Crypt_mC0C137E81918C54A5687C7279897E2607231B083,
	TileCrypt_GenerateKeyForTileV1_mBBF4C6DEE050214EDF679EF44B9F54E43541C3DD,
	TileCrypt_GenerateKeyForTileV2_m821AF58953A79FBA03A04EE913428AB1DD6D945D,
	TileCrypt_GenerateKeyForTileV3_m7E62C57D84DCC1FC8D5D1F0332439E86DD3F5051,
	TileCrypt_CreateKeyForTileV3_m5FF7E4549DD241910D56DE699169F487DDB0936D,
	TileCrypt_GenerateKeyBase_m6E88326CE2809AEA6D222E599F81EED76B873890,
	TileCrypt__ctor_mF6B8869AC226DDC83BC8157BE694670F137C04CE,
	TileCrypt__cctor_m1FA13D6D89CAA0C0ABE362AE7D8D4516515153A3,
	TileCryptInputStream__ctor_m26752E80379850B2300368FF7A553D988FEA79DA,
	TileCryptInputStream_Flush_mA2DE15A51E2DDC7BAF12EEA8101AEFA6CB850245,
	TileCryptInputStream_Read_m106278A36BC63CCB2AF05006043E71310C9A9E97,
	TileCryptInputStream_Seek_m25B019A424249C0726BECAEF238C33990ADA0A51,
	TileCryptInputStream_SetLength_m56C041AE6F33A1A416E3CDE5DC62B16B05662862,
	TileCryptInputStream_Write_m97C7510EDBC427421064AD830975103A7B340A58,
	TileCryptInputStream_get_CanRead_m773F5DF3C6FC4061CBD628490A42396B3E6961B9,
	TileCryptInputStream_get_CanSeek_mD2228DFD6E82659B11D3D09651196A2BBD3A1BF5,
	TileCryptInputStream_get_CanWrite_mEE22F5D9188F73EB7D16B9A9C4EAF0A2EDB7B90C,
	TileCryptInputStream_get_Length_m7B88037C38663BE211AA039E13735E37427E0C90,
	TileCryptInputStream_get_Position_m418DA21EF1F5C1307A2D45FA728AF52ED8FC2951,
	TileCryptInputStream_set_Position_m735D7474ED8A04F317E3EACD2361949A2A3C5FD5,
	TileDataInput__ctor_m21E447F839F7EAE32A134540B68ABAF600BBF35D,
	TileDataInput__ctor_m03D3634193D87BCB033F864D33230C148A7AB0C8,
	TileDataInput_ReadUnsignedShort_mDB51A6B79AF6166BD4BF039FF4079C0F53A4F6FF,
	TileDataInput_ReadInt_m00F303296F62220945B5DAB084AEDEDA66848193,
	TileDataInput_ReadLong_m612746103D8901A92045654F4DA8D534E526DF2C,
	DecodeTileDataDelegate__ctor_m29B280857AB7EA323F4A54C80B5AB6AF0BE76A95,
	DecodeTileDataDelegate_Invoke_m93CDD724EA277670D57BA09DFA663B27D05C4370,
	DecodeTileDataDelegate_BeginInvoke_m9CA52BAECE03C96D2352B55E143B066737E7829F,
	DecodeTileDataDelegate_EndInvoke_m8875A9C0A762C7838659B80A7C44E6D30E1766F8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BundledTileFetchGroup_add_AllTilesCached_mA67B9518C62BF42CDBC1722EE9E8D3574E4229F8,
	BundledTileFetchGroup_remove_AllTilesCached_m56C844385342A21E98475A6CC7F37CB2E5A89514,
	BundledTileFetchGroup_add_DownloadCanceled_m1AFBD70FC501C8A22D6A3DEDD6296BCBA4A924A0,
	BundledTileFetchGroup_remove_DownloadCanceled_m190CB56811B3DFB14BC9877875329B41BE9C04DE,
	BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_IsDownloadFinished_m2860C1441908E7889BA4D6502016AAFB781D40D9,
	BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_WasDownloadSuccessful_mEF1BECC8AC7D4CBE63DB587D70A62637CD1EADB8,
	BundledTileFetchGroup_Niantic_Lightship_Maps_Internal_Bundle_IDebugBundledTileFetchGroup_get_WasDownloadCanceled_m566374A9EBBF1431A2FBC65C9394F02956F20ACA,
	BundledTileFetchGroup__ctor_m0DCCEBF6FDFA966C1C3435EBFBFFD8EE8B10A3E5,
	BundledTileFetchGroup_Dispose_m64FD620852764BE63E9AF9EF0A8C1739D9810BDA,
	BundledTileFetchGroup_BeginDownload_mCFCB34B291F84AA2D0A876290F3524219AC871D8,
	BundledTileFetchGroup_DownloadAndProcessBundle_m558543AF9EF5C89511C3EE63A79E44D293D5250F,
	BundledTileFetchGroup_RequestTile_mACB585D97AAC47E494C6218CFD8BAE5154DEF75C,
	BundledTileFetchGroup_CreateFetchRequest_mBBAD5D9BB2D09E92E0264300DA7A076076B6878F,
	BundledTileFetchGroup_HandleDownloadSuccess_m757BDFDC23931EAB51B536ACE48838BA6685B72E,
	BundledTileFetchGroup_HandleDownloadFailure_mFC7CC0DB6A0B2490D4397D66869BC951528BB0A2,
	BundledTileFetchGroup_OnTileRequestCanceled_mAA52FB5972E4FFFB974BD0C1C6A7298586736761,
	BundledTileFetchGroup_U3CHandleDownloadSuccessU3Eb__30_0_m4B0F59738D0E60E206AFBB5562E943F6257C8F78,
	U3CU3Ec__DisplayClass29_0__ctor_mC63188D6DA5BCB8A05B56D64E4CA7D7232C4DCE7,
	U3CU3Ec__DisplayClass29_0_U3CCreateFetchRequestU3Eb__0_m6B8D185FF6683FC340D607877CEA9A25BC4865BB,
	U3CDownloadAndProcessBundleU3Ed__27_MoveNext_mF1DBBCAB66DFF1714CF106B1386B72E3FFC86099,
	U3CDownloadAndProcessBundleU3Ed__27_SetStateMachine_m864392CCE8043F72F075F5D7E72AFD5130FE361B,
	BundleUtils_ExpandStream_m40D9E253FCFF80D05BB13F9A2D174DE1F8ECCC18,
	NULL,
	TileBundleUrlGenerator__ctor_m71135000F68F616D41552C750CEE696D2DE6F551,
	TileBundleUrlGenerator_GetMapTileName_m27EEE8C188B890F753FCE599D05B1428F0FB4338,
	TileBundleUrlGenerator_GetMapTileUrl_mDD07CADDBDD46D9BD34F3A80253763B1D00702BA,
	TileFetchRequest_get_TileCoord_m86806344CC94B7A5CC45E8D965C053DE5F7C8245,
	TileFetchRequest_get_Task_m80FBF2B04534F3C9EB2820BA8CB6F2FBC3CB2166,
	TileFetchRequest_add_Canceled_mA4997E1BF636DDEEB64F2EAE88FA18BD65193E63,
	TileFetchRequest_remove_Canceled_m4B332F1935677BAEA5E3A32F58855D677CE41B2A,
	TileFetchRequest__ctor_mB9155AACCE62B1E426678E36768CE0560C9625CA,
	TileFetchRequest_Dispose_m12821880A54F270AA8DA869393876A2A1EFE8E19,
	TileFetchRequest_RegisterCancellationToken_m826AD18CF8997328DD379FBD8B40D19EA3459BFB,
	TileFetchRequest_OnCanceled_m99B7F1ABF2B48E2C455F0507135871F44DD5E6EE,
	TileFetchRequest_SetResult_m3A2FFB9C5A7E542D310F8E2CD053425176C90B35,
	TileFetchRequest_SetFailed_m93620B6E75DE65F792C28F6B39842EF2DF945549,
	MapTileDecoderV2_Decode_m44A363A6890D840E31CE789FE83F1ABB4EFAB2A7,
	MapTileDecoderV2_ParseFeature_m14DE8B16AE0C8A16E0ACDBF11223406B666F31B1,
	MapTileDecoderV2_ParsePointList_mCECCDF9C8A7467CC51BCF3EF6217AF5F70E5AAE4,
	MapTileDecoderV2_ParsePolylineList_m79AC51871D4C07626910118B025B02F3B7814DEA,
	MapTileDecoderV2_ParseTriangleList_m9565C345BC8C10B2FCE6D2F7DE59960FB7808496,
	MapTileDecoderV2_MetersToTilePercent_m5D5279D947129AA505FB0947F2EA9CEA3DE70CF0,
	MapTileDecoderV2_UnpackCoords_m3830AA5B6873BB4A8B67946CDDE6E82F831CC73D,
	MapTileDecoderV2_ExtractExteriorEdges_m49248090579CDF5D6ACC0A92727563BB46C05A9A,
	MapTileDecoderV2__ctor_m97C52A1545E5D3331E6884571DFF2F0F1989DDBD,
	MapTileDecoderV2_U3CExtractExteriorEdgesU3Eg__IsBitSetU7C8_0_mD284455817905DFB6103F757BE7EE7FB0CAB55B1,
	MapTileFetcherV2__ctor_m3325A2D8922A79B7A79D2655711824DDAF862852,
	MapTileFetcherV2_StartNew_m1EC9F04C850D7FCFC63D00E24404C8F8AFA441D8,
	MapTileFetcherV2_Dispose_m44FC892FE6362B487517A5CC87ED65EC11A38BA0,
	MapTileFetcherV2_Start_m220DB399A931E9F510DF4A78385E454F35B35042,
	MapTileFetcherV2_Stop_mF18E410C47B67C0BCF3A44B3C9342ADB7A3AD154,
	MapTileFetcherV2_RequestTileAsync_mA559F791EB076319EAD12A71CFC42B81D6022640,
	MapTileFetcherV2_RequestTileFetch_mF0C892FDD08018EE25760DC9E2DBE290B0045D25,
	MapTileFetcherV2_CreateFetchGroup_mED4708FE095ABC216EA3AA56085D36E23FEE5185,
	MapTileFetcherV2_DecodeTileData_mB77BBE493CD89F74598AD4825FF00A681D6F2ED9,
	U3CU3Ec__DisplayClass14_0__ctor_m09221D4BB632A4CC28F452C6CFF91E7D49E99989,
	U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__0_m1173D4697EBE7570644D644990E8315D83E500E6,
	U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__1_m5A67EEA2C7D90FEECDF1EBEB07C060A54E546116,
	U3CU3Ec__DisplayClass14_0_U3CCreateFetchGroupU3Eb__2_mC1BD5C1B08F43733822203554B69760200ED6A93,
	U3CRequestTileAsyncU3Ed__12_MoveNext_m969EE264786E7950D7BDD973ECD97DB1B83D74BD,
	U3CRequestTileAsyncU3Ed__12_SetStateMachine_mA07E4944C4F4BBD7B41164F38E9D438C9ED368A0,
	U3CRequestTileFetchU3Ed__13_MoveNext_mAC6E47E4905514E14A50F806A6DCF9867040A8B2,
	U3CRequestTileFetchU3Ed__13_SetStateMachine_m253CD5D2AF806408970B032B2E82C46A22BB95E9,
	MapTileProviderV2_get_Fetcher_m4E9AF93A87314D4034B6CC666A5EA4B625917BDF,
	MapTileProviderV2_get_Decoder_m571B9113373A1443A81471B4BA4EED1B7904793A,
	MapTileProviderV2_get_MapType_m57FDCA3F897A616A00C9406BAEDA4A33C66DD471,
	MapTileProviderV2__ctor_mB4EB88C17BB4E95D9703850755FF9C7B373208D6,
	LabelExtensions_ToLabelInfo_m2CB30EC778E6C060EF5003114F70762F0B90543D,
	TileCoordExtensions_ToParentBundleCoord_mFA210AB230A0AAEC9D13A402A1CE189FE4DD463B,
	LineSegment__ctor_mE78EF617FE0E896D9C4325F3C2368919B7EBC7E2,
	NULL,
	NULL,
	NULL,
	AreaFeature__ctor_mE50C44196ACB9E609503868C1C0B019808136059,
	AreaFeature_get_Kind_m8ED878B01291810E7B26FC890A24C83694168218,
	AreaFeature_get_Layer_mE65E658D36C4C21BC02C30221049840BB3320354,
	AreaFeature_get_Label_mFA1079BE883B34EEDFEC664B5D8DDE3DF17DAECD,
	AreaFeature_get_Points_mCA3AE6933FDE1DF8D2ABBD5CCD45FC826E2EDAD1,
	AreaFeature_get_Indices_m82AFC30CBE56FD1567DD3A3A260BEA8CB474C77A,
	AreaFeature_get_ExteriorEdges_m51B486420B40DA3810A6AE52B7C9B588E0F11C9A,
	AreaFeature_ToString_mE7BA152C4436252CC9DC2CBB15A797CA263496DE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BuildingFeature__ctor_m0B423E8C55C082782EFD8175C02BD6DD71E8F782,
	BuildingFeature_get_Kind_m0249093C50D4DB62836D5B180672A004D316CDDF,
	BuildingFeature_get_Layer_m96169FC82D5896C4E4E6CD93C1D2CD58CCF6DD1A,
	BuildingFeature_get_Label_m99696200A747245DDF2E1104AA5D2C9CFFC6B891,
	BuildingFeature_get_Points_mB501AD4AF19F02882F9BAC69FEDA5F009F98B311,
	BuildingFeature_get_Indices_m932F838C8FB7A6F170173C01CD78DC2D7F556ABC,
	BuildingFeature_get_ExteriorEdges_mADBFBCBC6A1B9EEA74DFD8E53E6403AC20863EBF,
	BuildingFeature_get_Height_m3077E12A0B7855D0D949D4D62E5EE5ADB37FEBBD,
	BuildingFeature_get_IsUnderground_mF425B6B6A5D87AD1E445CFC48276546BEA0F9559,
	BuildingFeature_ToString_mFB2524523C8D7361F95B1FB912C981BCF0986BB2,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LabelInfo_get_Priority_m0FC60BE89491EF89D311C783603E7AC2A803C79B,
	LabelInfo_set_Priority_m0A1B89D67CBD39E6E0D27F980DEE0FA43594331A,
	LabelInfo_get_MinZoom_mF5F7A3D96EDCBF512C4A54F884A278CE4C789784,
	LabelInfo_set_MinZoom_mD119E0D93C300AB1164989FEFC877A5F0F86C49D,
	LabelInfo_get_MaxZoom_m25C463B9C9D39927F32DF19C6BB9BF7C04E25128,
	LabelInfo_set_MaxZoom_mFBB83A1E50DE51E5787DA00F0D344AA1EC6FF5B8,
	LabelInfo_get_PosX_mAAA20C54B07907BE6687A57B20E90821CD05C3EB,
	LabelInfo_set_PosX_m87EDC84E3FA11EEFD205188521499A311A5ECF4E,
	LabelInfo_get_PosY_mCFE1B79BB81EEEB6CEAD96D989AB784774C99591,
	LabelInfo_set_PosY_mB61980C5195AD4C5D8E6FFE5DF621D35D7A47DA9,
	LabelInfo_get_Text_mC1A94653EDC052EEE62862BBCF07F125B5BC9DA9,
	LabelInfo_set_Text_m4C9232C678CB4ADD5EFCEC4A29A3F3852C7B684F,
	LabelInfo__ctor_m4F98D757100D6A7BB6A725B35BFB2B1F0DBED86C,
	NULL,
	NULL,
	LinearFeature__ctor_mBC4CF1278E168ED5D85C78FC589E3254BF2EF2D5,
	LinearFeature_get_Kind_mC8763EE81AEEC8E491ED910E46839F5D0636A2BA,
	LinearFeature_get_Layer_m66F42CBA94C26F174A8A81D8E5530CAE443FFE72,
	LinearFeature_get_Label_mF0E7EB479432BA8DE2575965D2525CAA0DFF0920,
	LinearFeature_get_Points_m4510D3D1E6C42B0558974DDB262FEE6BD37E037D,
	LinearFeature_get_LineStrips_mD40A628159C42BA4573FDFF995202A66FE0F4331,
	LinearFeature_ToString_m7B1FAA3F0A5ED8358AF50607817CEF38CB915198,
	NULL,
	PointFeature__ctor_m29D7C041C05EBCAA02170CA670D0317B4726D198,
	PointFeature_get_Kind_m9A4DA60118350D6AB1A00C05324E9C0252A750FE,
	PointFeature_get_Layer_m0C441B680E0DDF09C3DAA458699B6D7086DCB3D1,
	PointFeature_get_Label_mEDA3455C26D6ABA7A88F2AD2AE2416AD5AA35640,
	PointFeature_get_Points_m40F5D330CC43FB3725DEDD9FD8EA2A3D75DB3AEB,
	PointFeature_ToString_mB061B7383FC004D852D56F4DAE70E8D62657BA64,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NetworkResponseExtensions_GetResultDescription_m94A5C7DF190CC6CD4710F6D213A183E8DEE9FB93,
	NULL,
	NULL,
	NULL,
	NULL,
	ReaderWriterLockExtensions_ScopedReadLock_m823C63716AB5E9DC7F8A03BC60CA16FC44D4C4E9,
	ReaderWriterLockExtensions_ScopedWriteLock_mA246FBAA78366A47E4060A00CD109127A03A28B2,
	NULL,
	NULL,
	NULL,
	NULL,
	StringExtensions_IsEmpty_mAA0DF5E0068F241B241237753759949A758C7FD3,
	StringExtensions_NullIfEmpty_mC45D2A0F4F91A36CA855CBC147DB286D02EC156D,
	StringExtensions_NullIfEmptyOrWhitespace_mC561FAF5BE8807D5BB34E0E3D34A69515B712668,
	BundledTileFetchException__ctor_m1CF05CE521716714F7BE36970F47A5431013A123,
	BundleDownloadException__ctor_m40BC94C5469B27519A8C5F5E5E5B2BEBF2FC8ADC,
	TileDataMissingException__ctor_m1C29C0292472498AC80A7C762E869C853902CACD,
	LightshipMapsSystemException__ctor_m2767F733E7153883AA2A3F17F45AC90A9D75C085,
	LightshipMapsSystemNotInitializedException__ctor_m04243328DA0D2B7F898AD2F54076F3960BDDBC2D,
	LightshipMapsSystemNotInitializedException__ctor_m68A631505A9C0EB079EAB439A72B7E0CAC2A3450,
	LightshipMapsSystemNotInitializedException_GetMessage_mF73477412516D0C3B282B4A51281E9125104657B,
	MaptileException__ctor_m987E0DB43B9469D08C5F8995936E3EDC7A53567E,
	SettingsServiceException__ctor_m208E60A40471EC6D1BD77FCDE64B715F9AE43125,
	InvalidLightshipApiKeyException__ctor_m98CBB0D868429AF7ED62AC2422D36B2F1A20198D,
	InvalidLightshipApiKeyException_GetMessage_m73BD98BC7CBE24AE3D4D1A5FE65441B711F0DEE8,
	LatLng_get_IsValid_m76594511FF4D053B38072CE99CA879B75805A23C,
	LatLng_Equals_m77646C2590FE2894A6BC36581C49229207D05646,
	LatLng_Equals_m243F2E01855E6993F794BB5DB24CB17906E99CF1,
	LatLng_op_Equality_m85D38888C53329E983479FD0E7CC84AE1CDBA3E0,
	LatLng_op_Inequality_m9451A7E2D06A4E5C1A5DCBE136DED548C3AAF44C,
	LatLng_GetHashCode_mDB608D3898A8F8A398779956BE8FD3B5BB580ABD,
	LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3,
	LatLng_WrapLongitude_m0CBC4770E68195A483B975A624B569773EE71C3D,
	LatLng_ClampLatitude_mCE1F8D612E298A11DA18CE49BBB7D11CF6BAF2D3,
	LatLng_ToWebMercator12_mB60A487AA9984E27A6C892DB1072779034A16C01,
	LatLng_ToString_m02258B6022FF2D9810E6E6DA621A661F400A6255,
	MapCoordinates_ConvertMapYToLatRadians_mC57686E5F45C08525ABD04B8004684FAC0B7ED70,
	MapCoordinates_ConvertLngRadiansToMapX_mEE2F53439F713EBB825D7541B3CB46A71C3F8351,
	MapCoordinates_ConvertLatRadiansToMapY_m937E64CA7CD9C3051E4B41A4EC75C8F0EA6E244A,
	MapCoordinates_ConvertTileToMap_m2B7A0E355089EF4E98CF43B4FE405807177C7FF6,
	MapCoordinates_ConvertMapToTile_mFEB61735803DBE1D9CC50F9DB35564B301D0DAEF,
	MapCoordinates_ConvertMapToTileOffset_mC75AE0B8CCC1B097039BEFB9A1C8FDD0D1755A42,
	Mercator_FromLongitude_mB98CC7335584163182B0096D3C313A1471980EE5,
	Mercator_ToLongitude_mE8E15FF31D4B4FFA04A6EA3BEF2F903623596413,
	Mercator_FromLatitude_m24E2574C95BFC0AF2DDA81F1CD073110B4774FAB,
	Mercator_ToLatitude_m37FCF40B7FB7E8F1BD72B50B2F4BEA1EE0B4B0F2,
	Mercator__cctor_m530283EB92BF2A16FAF1CCC0A8CC5AF0D837AA80,
	SphericalMercator_WrapLongitudeDegrees_mAF7D92A12C856CAB0C70DB5F05E4216D6A3A9CAC,
	SphericalMercator_ClampLatitudeDegrees_mEF31DA087DFCEE754EEFEFC027CB4B01134D9EB7,
	SphericalMercator_FromLongitude_m768E230E1A25AEA15026905EB06BBFF9A1E3C7D4,
	SphericalMercator_ToLongitude_m617BB3D0195C4B3A75D2B815564043B1E1148D53,
	SphericalMercator_FromLatitude_m84C1CDF3804E78DD466E0A039B2B818FEB1AE248,
	SphericalMercator_ToLatitude_m18568FB4FD11EA2515B38CC74A4E7DFBD389789A,
	TileCoord__ctor_mC565D339E18C327364CC63A02B69091783DB52DC,
	TileCoord_ToString_m02101886ADDCB2243AC1C182F7F6A68829941C70,
	TileCoord_IndexFromLevelAndMapCoordinates_m572C61F7B0122EE9A6918A70040EB5DB07D6C799,
	TileCoord_IndexFromLevelAndTileCoordinates_mDF38A325EC0A2789280B137B6F843744A00C849C,
	TileCoord_FromIndex_mA87A9FEF406C3B7E9FECF2DE09C6CB2989B676A3,
	TileCoord_ToStringFromIndex_mE80E33EE3303EB70CCDD18EBEECB2F516D338C8E,
	TileCoord_TileZoomFromIndex_m519D7EA2ABD0B5D36D14B9A55888FE4EC6BD1915,
	TileCoord_TileXFromIndex_mEBC4854EE1A392BFC53F25CD45EDB1C9515FE7B4,
	TileCoord_TileYFromIndex_m6943BB63CC4BB808A7B88129704C2D382E60F508,
	TileCoord_TileWithCoord_mECDBDB7539CE493B9DB73B9138F8182F653FAFCF,
	TileCoord_TileNearCoord_m976410738FF3003CEBDCC99BE3800F6B17D60360,
	TileCoord_Equals_m7C0F01B97FDD9DECB3068A170F16C7501E816672,
	TileCoord_Equals_m50F23F6679AAFDE7E4BFB41C9BC5024991CC9000,
	TileCoord_GetHashCode_mF6899B18C86D7EE4C3392EB72CD618F4A491AE36,
	TileCoord_op_Equality_mC5A86F82C1F10A92BA2DF1C5734C0A000C318B9F,
	TileCoord_op_Inequality_m06F5B5885D6CF99525CF2AEDE746D034A840EDAC,
	TileCoord_op_LessThan_mC7A78344CA8C6C2616D55DF61C1D58DD808154FB,
	TileCoord_op_LessThanOrEqual_m19C30C8B9E68426B3BB95BD94C174F861F42D98E,
	TileCoord_op_GreaterThan_mC8BB239DA3773CB85E594AB511F458F029C1BE7F,
	TileCoord_op_GreaterThanOrEqual_m6534302AE5E943944DF77A07F05D52BE0F36ADED,
	Vector3D__ctor_m7F9C7CA511F33FDB09E3E158767F11EDDA88256E,
	Vector3D_op_Addition_m8E38AD5E60931A4A2D594EF82DBB46BA4529F666,
	Vector3D_op_Subtraction_m34C3CEC5A2F429617FF6AA7600E370E0536A0C43,
	Vector3D_op_UnaryNegation_m091DE9B699A50BAA3FB0EFDF418277E4D952DDF1,
	Vector3D_op_Multiply_m940251D2D9DE033FAE22037980EDDD98ADD18713,
	Vector3D_op_Multiply_mF0A047E85347F572DF7D226F41D26D79A6B797C3,
	Vector3D_op_Division_m243D5BFE1D9B4B3BAA185C8F2A54AA248B6A00F2,
	Vector3D_op_Explicit_m3353E7CD26C7BCA81121830398E002B23365AFD2,
	Vector3D_get_Magnitude_m3A01CB20E8B3B628EFCAD070ED73E9664A54E8AF,
	Vector3D_get_MagnitudeSquared_m5522997D2B213C71AE24BECD5756FFDFCAFA40B1,
	WebMercator_MaxTileCoord_mF9250F02EFA1F217E1BE3273D99CE889CF4834E8,
	WebMercator_CheckZoomLevel_m55172D7D15C01B448889953FD13C970B27E93BA4,
	WebMercator_CheckLongitudeCoord_m9836FEEDE53B23462B90542BC5BB6369F302956B,
	WebMercator_CheckLatitudeCoord_m091391C02E2777337525A27D323DBB3FAD1DD23F,
	WebMercator_CheckLongitudeDegrees_m3402B02B8D4B280E1DE3EAB7CC7457AFC21C7B62,
	WebMercator_CheckLatitudeDegrees_mAD350CD8F16D9DFF0EC7F59D380DFFCE5756E5A4,
	WebMercator_WrapLongitudeDegrees_mE523B24B1983CCCFA7888FA9F698A32519C9FB0B,
	WebMercator_WrapLongitudeCoord_m0CD30105FAE0D4A43E88A19B00B5C0C8F532AD0B,
	WebMercator_ClampLatitudeDegrees_mA258D4A3A5BE82CAF07EA22783E32F22E31330E6,
	WebMercator_ClampLatitudeCoord_m65B8191672270173BA620C58D5884B14242E94C9,
	WebMercator_FromLongitude_m3D2F67314A92DB7526F4D0EA1E9EE0F33CCE5910,
	WebMercator_ToWrappedLongitude_mFC263431BEBEAAC74A9A483969D099F6BB572FA1,
	WebMercator_ToLongitude_m2FE61EDDFC4C8638ED7F585E2BD2FA4040EE1394,
	WebMercator_FromLatitude_mDCA8221665A70EE1D9CC5BE1AA66ECD071616B6B,
	WebMercator_ToClampedLatitude_m23C991102047B2E79D698CBDAF8B284EB568E67A,
	WebMercator_ToLatitude_m6CDE7C262DF693D61859565749736043A18E9B7F,
	WebMercator_TileIndex_m820BAAAADD82B5B0785F909D57F55950F7552B44,
	WebMercator_ToZoomLevel_m8791826811BE54E3D5E60E2B71E7DB78E5B62A40,
	WebMercator_GetMetersPerUnit_m94AB45191EDFF607CF1CE41DF5BEAB3385DCAF65,
	WebMercator12__ctor_m3F52E557ADC9E07356F4E1A48B2B56B87822BC50,
	WebMercator12__ctor_mFDB7485166BCEC18BCED0AC4389D6E44F77EB1C1,
	WebMercator12__ctor_m8DE8E518A2F6285466410B3FAA97D756F88D4B2C,
	WebMercator12_WrapLongitudeDegrees_m8552398CB166790C056830FD672BB0074B1F7EC2,
	WebMercator12_ClampLatitudeDegrees_m95F6790249711635A50F8E52770C358C41D9F9C3,
	WebMercator12_WrapLongitudeCoord_m860300D172F6F621CBFFD5C01B08AEAE963746B7,
	WebMercator12_ClampLatitudeCoord_m5162E2CA4F79380B9906EE69234383A7E2C0E942,
	WebMercator12_WrapLongitudeCoord_m3DED8F7B45AC588669E921818077503C8B6CB237,
	WebMercator12_ClampLatitudeCoord_mE9EF7C22E6D679502BE43BDCCD7767D0E76BC7BE,
	WebMercator12_FromLongitude_m6C63B13C6D9799747F34C9E25618B42C3EE9BBF7,
	WebMercator12_FromLatitude_m5BE4BF76E9E2E8F10732D2EF2BF2A0BEE7329B91,
	WebMercator12_ToLatitude_m7E4614EC0CF6E62B4F85A9D0D7915063926C7EA1,
	WebMercator12_ToLongitude_m875052D3D14BA6171149EF03CA3DD769C137E87B,
	WebMercator12_GetMetersPerUnit_m0ACEA40D68A3A3251078CF64C6AE7CD106BDB089,
	WebMercator12_ToVector3D_m4D091D62B586256A9F81C3B69D99C629B4826ED2,
	WebMercator12_ToLatLng_m6C19602BAF0B3B05E7054621B59887900AFF33D8,
	WebMercator12_ToString_m1FE98390CC2E9397D2CDE8F52963B646FDB35EF4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ThreadScheduler_SwitchToThreadPoolThreadAsync_m52AED678E14371959532D229440254E50294CFC0,
	ThreadScheduler_SwitchToMainThreadAsync_m77BE3296BDD7366A8F59A1D7544925489A84ECE4,
	NULL,
	NULL,
	MainThread_get_SynchronizationContext_m4B97F2287FC1F6CCCAD2BD2E2517A5BA1DB87E9A,
	MainThread_get_IsCurrentThreadMain_mB5A1985426A0F3CCDDD0CBE416B2561687E695DA,
	MainThread_get_Instance_mAF8CAAE767731CCC7692FBE653B9865E12E89C3B,
	MainThread_set_Instance_m2A94B914643653EFF69E1E65C2B28DE2CCF7FCC7,
	MainThread__ctor_m1130902D4014F4D75CD42B33856E5EA11FC84B92,
	MainThread_Initialize_m5E501E5CBA22A05BB7EB1BA15792D8A59DB28E6E,
	AsyncOperationExtensions_GetAwaiter_m4077F5488B07C1A0BBABAA48EE08EE2B4EB0AA68,
	TaskExtensions_FireAndForget_mC419B143DD820B587E7829F01C1E60A170BCA7EC,
	TaskExtensions_FireAndForget_m1C859337EF7E4F199FD4645C9B38DCA0D27623FC,
	TaskExtensions_ContinueOnCurrentThread_mFF179D59F45E7685B0FF43BD773D49420940CB92,
	NULL,
	TaskExtensions_ContinueOnAnyThread_m237558A851924DED0F141484186CCAD305E6458C,
	NULL,
	TaskExtensions_U3CFireAndForgetU3Eg__AwaitInternalU7C0_0_m772A42A548C7C874E2F7935CE6A6B4C69FDEC258,
	TaskExtensions_U3CFireAndForgetU3Eg__AwaitInternalU7C1_0_m99B072FBCB36553D45D2E131D62EC2F3B28B71C8,
	U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_MoveNext_m304D450E18BED26DEF4D14AB4AC5FCE7BA068F1B,
	U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_SetStateMachine_m681329B4846F4A16A5C0BD2C0B87937165A55B2A,
	U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_MoveNext_m313D0726100EFFD6DA7C318735D48165E9162A94,
	U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_SetStateMachine_m985F5B8A1A9A54419C56A38E30781150B9DFF1D8,
	UnityWebRequestExtensions_IsHttpError_m48DBB4E1B2115FD1FABAB3ED997E72257953DF04,
	UnityWebRequestExtensions_IsNetworkError_m017CDA1DC3080A30A5D4ED41FE3812DF31211AFD,
	UnityWebRequestExtensions_IsSuccessful_m685FB848BFB28ADD4A0E0FCEF1F0A29BBD2D1099,
	UnityWebRequestExtensions_SendWebRequestAsync_m25D039652F2B99F5C43841ED62414B9B13696A77,
	U3CSendWebRequestAsyncU3Ed__3_MoveNext_m702895B069B299B71E4F06C36966A23178C3EF66,
	U3CSendWebRequestAsyncU3Ed__3_SetStateMachine_mB4C5C09C3AAF7B4F633AA6BA398E67300A76926C,
	CustomExceptionHandlingAwaitable__ctor_m2B3448CFA11B10833733A51717D6BC27B6DD2727,
	CustomExceptionHandlingAwaitable_GetAwaiter_mBC590623257E4BE005A70296C4C340D4738DB10F,
	CustomExceptionHandlingAwaiter__ctor_m0CC6FE659607D5C7A6C6E82257E8310C92437EF1,
	CustomExceptionHandlingAwaiter_get_IsCompleted_mE2979F7D7DC42CFC3D0B3DCA939AB4754C200D5C,
	CustomExceptionHandlingAwaiter_GetResult_mB6BD332E66C9F94B7474852C639C883952075315,
	CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m104D5ABAA6523125A0B113EE71CF26C841829A02,
	CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m72FAA2327311B024DFB146863421ECE04E3693B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MainThreadAwaitable__ctor_mF956182D2821924883EB7422678CE080CE3CBCC8,
	MainThreadAwaitable_GetAwaiter_m55E78620D1CD14AC7389A8BEAEF7580048B44F38,
	MainThreadAwaiter__ctor_m11CE28EC7386079A555B8609B78A66E28754BD57,
	MainThreadAwaiter_get_IsCompleted_m64B2B57A97810DA8213D72821984DD39F225A3DA,
	MainThreadAwaiter_GetResult_mB88EA4DFDD076E258C21B196369776E8BEBF95D8,
	MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m18D29986129E36E27EBC7D093AB4A7CA71DC76C3,
	MainThreadAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m6DBF8928E70E14CB8E9190F5B9F10CFE99FFDD2F,
	MainThreadAwaiter_OnCompletedInternal_m62C3FE5F0B63445569C193B8DB57F5CF8CD5DF51,
	U3CU3Ec__cctor_mF643E177785DBA3F6F2C1A871C4AD1BA9CDB0DEB,
	U3CU3Ec__ctor_mF00BD1677EFDC9685EC6D5092207DDA3F536D18A,
	U3CU3Ec_U3COnCompletedInternalU3Eb__7_0_mEE93858C508B7CD82028F12EB823CE2CD856E7C1,
	TaskSchedulerAwaitable__ctor_m8A9A37C1439FBCE5B18F63C71F5ED0178211F44F,
	TaskSchedulerAwaitable_GetAwaiter_m29D8B26FC6C2C64CEEA237767BAFB0E3163D2958,
	TaskSchedulerAwaiter__ctor_mF04EC79FE11C01F03C0F356ABDCFF877C1BB5986,
	TaskSchedulerAwaiter_get_IsCompleted_m7D515D0139E98DD305C4033D5F9A981B65190E91,
	TaskSchedulerAwaiter_GetResult_mB6808B8DA6ED756F3D6B1246C398519A7F132835,
	TaskSchedulerAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mE5809C9CE9EDABC1DC2F425B99916E59112268B8,
	TaskSchedulerAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_mB596FA92ABC1EE97F8FCB93213DCFF5B2933C211,
	U3CU3Ec__cctor_m624F929524E5054C0C50ACEEAC2AF219FFE3B593,
	U3CU3Ec__ctor_m2A38AB6B2FE38573C641C115405161BC00E0CA85,
	U3CU3Ec_U3CSystem_Runtime_CompilerServices_INotifyCompletion_OnCompletedU3Eb__5_0_mF85E90604AC4F73666B443C1D0CA771555F7F0B9,
	U3CU3Ec_U3CSystem_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompletedU3Eb__6_0_m921ABC13D8D759397B62FC8786EF6C662BB9640F,
	UnityAsyncOperationAwaiter__ctor_m5C05156CFE2FC01E5BE4CF83F60C0F7542D91649,
	UnityAsyncOperationAwaiter_get_IsCompleted_mBB89F744813E25D00CC3E843F4687CDED8E9517B,
	UnityAsyncOperationAwaiter_OnCompleted_mE2DBA03C63352975884018EE7BD352B016037B47,
	UnityAsyncOperationAwaiter_UnsafeOnCompleted_mF6ABD362C1E6B1C094782508479ABAB4B2699932,
	UnityAsyncOperationAwaiter_GetResult_m319374AE9CE9E89C1FB17A1C7A812378731F0A9D,
	U3CU3Ec__DisplayClass4_0__ctor_m652055BFA6FEFCFB270BDA1E8B69BE135C6E6B09,
	U3CU3Ec__DisplayClass4_0_U3COnCompletedU3Eb__0_mBA525718B318B166C628B7A9752A1BB31398292B,
	U3CU3Ec__DisplayClass5_0__ctor_m9F728DECC8D2062BD177F917B0D2768BF5748913,
	U3CU3Ec__DisplayClass5_0_U3CUnsafeOnCompletedU3Eb__0_m469B4DDA6D549292A23174B9DFD3BFD68D02E451,
};
extern void ViewPoint_get_LongitudeDeg_mB83CF8355D7391AB1910239BAA7EEFE3CEB5FB2A_AdjustorThunk (void);
extern void ViewPoint_get_LatitudeDeg_m82D97FDB02E08578758524B39E2C888BE4975DBA_AdjustorThunk (void);
extern void ViewPoint_get_IsValid_m2F6D8A49D55832A7D9B2F068F2C202DE93C68C15_AdjustorThunk (void);
extern void ViewPoint__ctor_mECD9AE12C943D343B1F57FC517F06656AF8EE800_AdjustorThunk (void);
extern void ViewPoint__ctor_mE52B5974BA324D44C0E01A1B49915FC6E4E1964B_AdjustorThunk (void);
extern void ViewPoint_WithNewLatLng_m11E5D552A6C2F6992FFDDE295A570E84887EA1B8_AdjustorThunk (void);
extern void ViewPoint_WithNewMapRadius_m40A600EF9E60EC147046CB7D35F9FB00BC4986FB_AdjustorThunk (void);
extern void ViewPoint_ToString_m22D7604D30895530E878DDC1336C5A087B5DCA48_AdjustorThunk (void);
extern void U3CRequestAsyncU3Ed__2_MoveNext_m68E2449020EBC5764243C7572B1630CB85F04925_AdjustorThunk (void);
extern void U3CRequestAsyncU3Ed__2_SetStateMachine_mCA6C55F8CEB9874BBB28953D6AA91DD2E7BF328B_AdjustorThunk (void);
extern void U3CFetchTileAsyncU3Ed__13_MoveNext_mA2C1926CD9A81511C04A7AD6E922228DDCA8716B_AdjustorThunk (void);
extern void U3CFetchTileAsyncU3Ed__13_SetStateMachine_m0232599F56D21716768FD272937B7E70AE9147E8_AdjustorThunk (void);
extern void RingTileCoord__ctor_m9D3152A2070A9186E8110604302BA6B965F7ECBA_AdjustorThunk (void);
extern void U3CGetSettingsU3Ed__23_MoveNext_mB9CB82E04D075D0C7E5FC03F86C81AF50EDAF567_AdjustorThunk (void);
extern void U3CGetSettingsU3Ed__23_SetStateMachine_m3C3703E501595AEE60CD54BC8D7FB9AF2AAB0E7D_AdjustorThunk (void);
extern void U3CGetSettingsInternalU3Ed__24_MoveNext_m19955C373A6F885DBC207D983CB9F3C2684F569C_AdjustorThunk (void);
extern void U3CGetSettingsInternalU3Ed__24_SetStateMachine_mD2F92A2A5695FE08503F402E0218AC26007C4B19_AdjustorThunk (void);
extern void U3CDownloadAndProcessBundleU3Ed__27_MoveNext_mF1DBBCAB66DFF1714CF106B1386B72E3FFC86099_AdjustorThunk (void);
extern void U3CDownloadAndProcessBundleU3Ed__27_SetStateMachine_m864392CCE8043F72F075F5D7E72AFD5130FE361B_AdjustorThunk (void);
extern void U3CRequestTileAsyncU3Ed__12_MoveNext_m969EE264786E7950D7BDD973ECD97DB1B83D74BD_AdjustorThunk (void);
extern void U3CRequestTileAsyncU3Ed__12_SetStateMachine_mA07E4944C4F4BBD7B41164F38E9D438C9ED368A0_AdjustorThunk (void);
extern void U3CRequestTileFetchU3Ed__13_MoveNext_mAC6E47E4905514E14A50F806A6DCF9867040A8B2_AdjustorThunk (void);
extern void U3CRequestTileFetchU3Ed__13_SetStateMachine_m253CD5D2AF806408970B032B2E82C46A22BB95E9_AdjustorThunk (void);
extern void LineSegment__ctor_mE78EF617FE0E896D9C4325F3C2368919B7EBC7E2_AdjustorThunk (void);
extern void LatLng_get_IsValid_m76594511FF4D053B38072CE99CA879B75805A23C_AdjustorThunk (void);
extern void LatLng_Equals_m77646C2590FE2894A6BC36581C49229207D05646_AdjustorThunk (void);
extern void LatLng_Equals_m243F2E01855E6993F794BB5DB24CB17906E99CF1_AdjustorThunk (void);
extern void LatLng_GetHashCode_mDB608D3898A8F8A398779956BE8FD3B5BB580ABD_AdjustorThunk (void);
extern void LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3_AdjustorThunk (void);
extern void LatLng_ToWebMercator12_mB60A487AA9984E27A6C892DB1072779034A16C01_AdjustorThunk (void);
extern void LatLng_ToString_m02258B6022FF2D9810E6E6DA621A661F400A6255_AdjustorThunk (void);
extern void Vector3D__ctor_m7F9C7CA511F33FDB09E3E158767F11EDDA88256E_AdjustorThunk (void);
extern void Vector3D_get_Magnitude_m3A01CB20E8B3B628EFCAD070ED73E9664A54E8AF_AdjustorThunk (void);
extern void Vector3D_get_MagnitudeSquared_m5522997D2B213C71AE24BECD5756FFDFCAFA40B1_AdjustorThunk (void);
extern void WebMercator12__ctor_m3F52E557ADC9E07356F4E1A48B2B56B87822BC50_AdjustorThunk (void);
extern void WebMercator12__ctor_mFDB7485166BCEC18BCED0AC4389D6E44F77EB1C1_AdjustorThunk (void);
extern void WebMercator12__ctor_m8DE8E518A2F6285466410B3FAA97D756F88D4B2C_AdjustorThunk (void);
extern void WebMercator12_ToVector3D_m4D091D62B586256A9F81C3B69D99C629B4826ED2_AdjustorThunk (void);
extern void WebMercator12_ToLatLng_m6C19602BAF0B3B05E7054621B59887900AFF33D8_AdjustorThunk (void);
extern void WebMercator12_ToString_m1FE98390CC2E9397D2CDE8F52963B646FDB35EF4_AdjustorThunk (void);
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_MoveNext_m304D450E18BED26DEF4D14AB4AC5FCE7BA068F1B_AdjustorThunk (void);
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_SetStateMachine_m681329B4846F4A16A5C0BD2C0B87937165A55B2A_AdjustorThunk (void);
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_MoveNext_m313D0726100EFFD6DA7C318735D48165E9162A94_AdjustorThunk (void);
extern void U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_SetStateMachine_m985F5B8A1A9A54419C56A38E30781150B9DFF1D8_AdjustorThunk (void);
extern void U3CSendWebRequestAsyncU3Ed__3_MoveNext_m702895B069B299B71E4F06C36966A23178C3EF66_AdjustorThunk (void);
extern void U3CSendWebRequestAsyncU3Ed__3_SetStateMachine_mB4C5C09C3AAF7B4F633AA6BA398E67300A76926C_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaitable__ctor_m2B3448CFA11B10833733A51717D6BC27B6DD2727_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaitable_GetAwaiter_mBC590623257E4BE005A70296C4C340D4738DB10F_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaiter__ctor_m0CC6FE659607D5C7A6C6E82257E8310C92437EF1_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaiter_get_IsCompleted_mE2979F7D7DC42CFC3D0B3DCA939AB4754C200D5C_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaiter_GetResult_mB6BD332E66C9F94B7474852C639C883952075315_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m104D5ABAA6523125A0B113EE71CF26C841829A02_AdjustorThunk (void);
extern void CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m72FAA2327311B024DFB146863421ECE04E3693B3_AdjustorThunk (void);
extern void MainThreadAwaitable__ctor_mF956182D2821924883EB7422678CE080CE3CBCC8_AdjustorThunk (void);
extern void MainThreadAwaitable_GetAwaiter_m55E78620D1CD14AC7389A8BEAEF7580048B44F38_AdjustorThunk (void);
extern void MainThreadAwaiter__ctor_m11CE28EC7386079A555B8609B78A66E28754BD57_AdjustorThunk (void);
extern void MainThreadAwaiter_get_IsCompleted_m64B2B57A97810DA8213D72821984DD39F225A3DA_AdjustorThunk (void);
extern void MainThreadAwaiter_GetResult_mB88EA4DFDD076E258C21B196369776E8BEBF95D8_AdjustorThunk (void);
extern void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m18D29986129E36E27EBC7D093AB4A7CA71DC76C3_AdjustorThunk (void);
extern void MainThreadAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m6DBF8928E70E14CB8E9190F5B9F10CFE99FFDD2F_AdjustorThunk (void);
extern void MainThreadAwaiter_OnCompletedInternal_m62C3FE5F0B63445569C193B8DB57F5CF8CD5DF51_AdjustorThunk (void);
extern void TaskSchedulerAwaitable__ctor_m8A9A37C1439FBCE5B18F63C71F5ED0178211F44F_AdjustorThunk (void);
extern void TaskSchedulerAwaitable_GetAwaiter_m29D8B26FC6C2C64CEEA237767BAFB0E3163D2958_AdjustorThunk (void);
extern void TaskSchedulerAwaiter__ctor_mF04EC79FE11C01F03C0F356ABDCFF877C1BB5986_AdjustorThunk (void);
extern void TaskSchedulerAwaiter_get_IsCompleted_m7D515D0139E98DD305C4033D5F9A981B65190E91_AdjustorThunk (void);
extern void TaskSchedulerAwaiter_GetResult_mB6808B8DA6ED756F3D6B1246C398519A7F132835_AdjustorThunk (void);
extern void TaskSchedulerAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mE5809C9CE9EDABC1DC2F425B99916E59112268B8_AdjustorThunk (void);
extern void TaskSchedulerAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_mB596FA92ABC1EE97F8FCB93213DCFF5B2933C211_AdjustorThunk (void);
extern void UnityAsyncOperationAwaiter__ctor_m5C05156CFE2FC01E5BE4CF83F60C0F7542D91649_AdjustorThunk (void);
extern void UnityAsyncOperationAwaiter_get_IsCompleted_mBB89F744813E25D00CC3E843F4687CDED8E9517B_AdjustorThunk (void);
extern void UnityAsyncOperationAwaiter_OnCompleted_mE2DBA03C63352975884018EE7BD352B016037B47_AdjustorThunk (void);
extern void UnityAsyncOperationAwaiter_UnsafeOnCompleted_mF6ABD362C1E6B1C094782508479ABAB4B2699932_AdjustorThunk (void);
extern void UnityAsyncOperationAwaiter_GetResult_m319374AE9CE9E89C1FB17A1C7A812378731F0A9D_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[73] = 
{
	{ 0x06000027, ViewPoint_get_LongitudeDeg_mB83CF8355D7391AB1910239BAA7EEFE3CEB5FB2A_AdjustorThunk },
	{ 0x06000028, ViewPoint_get_LatitudeDeg_m82D97FDB02E08578758524B39E2C888BE4975DBA_AdjustorThunk },
	{ 0x0600002A, ViewPoint_get_IsValid_m2F6D8A49D55832A7D9B2F068F2C202DE93C68C15_AdjustorThunk },
	{ 0x0600002B, ViewPoint__ctor_mECD9AE12C943D343B1F57FC517F06656AF8EE800_AdjustorThunk },
	{ 0x0600002C, ViewPoint__ctor_mE52B5974BA324D44C0E01A1B49915FC6E4E1964B_AdjustorThunk },
	{ 0x0600002D, ViewPoint_WithNewLatLng_m11E5D552A6C2F6992FFDDE295A570E84887EA1B8_AdjustorThunk },
	{ 0x0600002E, ViewPoint_WithNewMapRadius_m40A600EF9E60EC147046CB7D35F9FB00BC4986FB_AdjustorThunk },
	{ 0x0600002F, ViewPoint_ToString_m22D7604D30895530E878DDC1336C5A087B5DCA48_AdjustorThunk },
	{ 0x0600025D, U3CRequestAsyncU3Ed__2_MoveNext_m68E2449020EBC5764243C7572B1630CB85F04925_AdjustorThunk },
	{ 0x0600025E, U3CRequestAsyncU3Ed__2_SetStateMachine_mCA6C55F8CEB9874BBB28953D6AA91DD2E7BF328B_AdjustorThunk },
	{ 0x0600033D, U3CFetchTileAsyncU3Ed__13_MoveNext_mA2C1926CD9A81511C04A7AD6E922228DDCA8716B_AdjustorThunk },
	{ 0x0600033E, U3CFetchTileAsyncU3Ed__13_SetStateMachine_m0232599F56D21716768FD272937B7E70AE9147E8_AdjustorThunk },
	{ 0x0600037F, RingTileCoord__ctor_m9D3152A2070A9186E8110604302BA6B965F7ECBA_AdjustorThunk },
	{ 0x06000437, U3CGetSettingsU3Ed__23_MoveNext_mB9CB82E04D075D0C7E5FC03F86C81AF50EDAF567_AdjustorThunk },
	{ 0x06000438, U3CGetSettingsU3Ed__23_SetStateMachine_m3C3703E501595AEE60CD54BC8D7FB9AF2AAB0E7D_AdjustorThunk },
	{ 0x06000439, U3CGetSettingsInternalU3Ed__24_MoveNext_m19955C373A6F885DBC207D983CB9F3C2684F569C_AdjustorThunk },
	{ 0x0600043A, U3CGetSettingsInternalU3Ed__24_SetStateMachine_mD2F92A2A5695FE08503F402E0218AC26007C4B19_AdjustorThunk },
	{ 0x06000476, U3CDownloadAndProcessBundleU3Ed__27_MoveNext_mF1DBBCAB66DFF1714CF106B1386B72E3FFC86099_AdjustorThunk },
	{ 0x06000477, U3CDownloadAndProcessBundleU3Ed__27_SetStateMachine_m864392CCE8043F72F075F5D7E72AFD5130FE361B_AdjustorThunk },
	{ 0x0600049E, U3CRequestTileAsyncU3Ed__12_MoveNext_m969EE264786E7950D7BDD973ECD97DB1B83D74BD_AdjustorThunk },
	{ 0x0600049F, U3CRequestTileAsyncU3Ed__12_SetStateMachine_mA07E4944C4F4BBD7B41164F38E9D438C9ED368A0_AdjustorThunk },
	{ 0x060004A0, U3CRequestTileFetchU3Ed__13_MoveNext_mAC6E47E4905514E14A50F806A6DCF9867040A8B2_AdjustorThunk },
	{ 0x060004A1, U3CRequestTileFetchU3Ed__13_SetStateMachine_m253CD5D2AF806408970B032B2E82C46A22BB95E9_AdjustorThunk },
	{ 0x060004A8, LineSegment__ctor_mE78EF617FE0E896D9C4325F3C2368919B7EBC7E2_AdjustorThunk },
	{ 0x06000516, LatLng_get_IsValid_m76594511FF4D053B38072CE99CA879B75805A23C_AdjustorThunk },
	{ 0x06000517, LatLng_Equals_m77646C2590FE2894A6BC36581C49229207D05646_AdjustorThunk },
	{ 0x06000518, LatLng_Equals_m243F2E01855E6993F794BB5DB24CB17906E99CF1_AdjustorThunk },
	{ 0x0600051B, LatLng_GetHashCode_mDB608D3898A8F8A398779956BE8FD3B5BB580ABD_AdjustorThunk },
	{ 0x0600051C, LatLng__ctor_m5846928F012BF1BBAE4626B9A45411B8B7B3DFB3_AdjustorThunk },
	{ 0x0600051F, LatLng_ToWebMercator12_mB60A487AA9984E27A6C892DB1072779034A16C01_AdjustorThunk },
	{ 0x06000520, LatLng_ToString_m02258B6022FF2D9810E6E6DA621A661F400A6255_AdjustorThunk },
	{ 0x06000546, Vector3D__ctor_m7F9C7CA511F33FDB09E3E158767F11EDDA88256E_AdjustorThunk },
	{ 0x0600054E, Vector3D_get_Magnitude_m3A01CB20E8B3B628EFCAD070ED73E9664A54E8AF_AdjustorThunk },
	{ 0x0600054F, Vector3D_get_MagnitudeSquared_m5522997D2B213C71AE24BECD5756FFDFCAFA40B1_AdjustorThunk },
	{ 0x06000563, WebMercator12__ctor_m3F52E557ADC9E07356F4E1A48B2B56B87822BC50_AdjustorThunk },
	{ 0x06000564, WebMercator12__ctor_mFDB7485166BCEC18BCED0AC4389D6E44F77EB1C1_AdjustorThunk },
	{ 0x06000565, WebMercator12__ctor_m8DE8E518A2F6285466410B3FAA97D756F88D4B2C_AdjustorThunk },
	{ 0x06000571, WebMercator12_ToVector3D_m4D091D62B586256A9F81C3B69D99C629B4826ED2_AdjustorThunk },
	{ 0x06000572, WebMercator12_ToLatLng_m6C19602BAF0B3B05E7054621B59887900AFF33D8_AdjustorThunk },
	{ 0x06000573, WebMercator12_ToString_m1FE98390CC2E9397D2CDE8F52963B646FDB35EF4_AdjustorThunk },
	{ 0x06000592, U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_MoveNext_m304D450E18BED26DEF4D14AB4AC5FCE7BA068F1B_AdjustorThunk },
	{ 0x06000593, U3CU3CFireAndForgetU3Eg__AwaitInternalU7C0_0U3Ed_SetStateMachine_m681329B4846F4A16A5C0BD2C0B87937165A55B2A_AdjustorThunk },
	{ 0x06000594, U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_MoveNext_m313D0726100EFFD6DA7C318735D48165E9162A94_AdjustorThunk },
	{ 0x06000595, U3CU3CFireAndForgetU3Eg__AwaitInternalU7C1_0U3Ed_SetStateMachine_m985F5B8A1A9A54419C56A38E30781150B9DFF1D8_AdjustorThunk },
	{ 0x0600059A, U3CSendWebRequestAsyncU3Ed__3_MoveNext_m702895B069B299B71E4F06C36966A23178C3EF66_AdjustorThunk },
	{ 0x0600059B, U3CSendWebRequestAsyncU3Ed__3_SetStateMachine_mB4C5C09C3AAF7B4F633AA6BA398E67300A76926C_AdjustorThunk },
	{ 0x0600059C, CustomExceptionHandlingAwaitable__ctor_m2B3448CFA11B10833733A51717D6BC27B6DD2727_AdjustorThunk },
	{ 0x0600059D, CustomExceptionHandlingAwaitable_GetAwaiter_mBC590623257E4BE005A70296C4C340D4738DB10F_AdjustorThunk },
	{ 0x0600059E, CustomExceptionHandlingAwaiter__ctor_m0CC6FE659607D5C7A6C6E82257E8310C92437EF1_AdjustorThunk },
	{ 0x0600059F, CustomExceptionHandlingAwaiter_get_IsCompleted_mE2979F7D7DC42CFC3D0B3DCA939AB4754C200D5C_AdjustorThunk },
	{ 0x060005A0, CustomExceptionHandlingAwaiter_GetResult_mB6BD332E66C9F94B7474852C639C883952075315_AdjustorThunk },
	{ 0x060005A1, CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m104D5ABAA6523125A0B113EE71CF26C841829A02_AdjustorThunk },
	{ 0x060005A2, CustomExceptionHandlingAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m72FAA2327311B024DFB146863421ECE04E3693B3_AdjustorThunk },
	{ 0x060005A9, MainThreadAwaitable__ctor_mF956182D2821924883EB7422678CE080CE3CBCC8_AdjustorThunk },
	{ 0x060005AA, MainThreadAwaitable_GetAwaiter_m55E78620D1CD14AC7389A8BEAEF7580048B44F38_AdjustorThunk },
	{ 0x060005AB, MainThreadAwaiter__ctor_m11CE28EC7386079A555B8609B78A66E28754BD57_AdjustorThunk },
	{ 0x060005AC, MainThreadAwaiter_get_IsCompleted_m64B2B57A97810DA8213D72821984DD39F225A3DA_AdjustorThunk },
	{ 0x060005AD, MainThreadAwaiter_GetResult_mB88EA4DFDD076E258C21B196369776E8BEBF95D8_AdjustorThunk },
	{ 0x060005AE, MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_m18D29986129E36E27EBC7D093AB4A7CA71DC76C3_AdjustorThunk },
	{ 0x060005AF, MainThreadAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_m6DBF8928E70E14CB8E9190F5B9F10CFE99FFDD2F_AdjustorThunk },
	{ 0x060005B0, MainThreadAwaiter_OnCompletedInternal_m62C3FE5F0B63445569C193B8DB57F5CF8CD5DF51_AdjustorThunk },
	{ 0x060005B4, TaskSchedulerAwaitable__ctor_m8A9A37C1439FBCE5B18F63C71F5ED0178211F44F_AdjustorThunk },
	{ 0x060005B5, TaskSchedulerAwaitable_GetAwaiter_m29D8B26FC6C2C64CEEA237767BAFB0E3163D2958_AdjustorThunk },
	{ 0x060005B6, TaskSchedulerAwaiter__ctor_mF04EC79FE11C01F03C0F356ABDCFF877C1BB5986_AdjustorThunk },
	{ 0x060005B7, TaskSchedulerAwaiter_get_IsCompleted_m7D515D0139E98DD305C4033D5F9A981B65190E91_AdjustorThunk },
	{ 0x060005B8, TaskSchedulerAwaiter_GetResult_mB6808B8DA6ED756F3D6B1246C398519A7F132835_AdjustorThunk },
	{ 0x060005B9, TaskSchedulerAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mE5809C9CE9EDABC1DC2F425B99916E59112268B8_AdjustorThunk },
	{ 0x060005BA, TaskSchedulerAwaiter_System_Runtime_CompilerServices_ICriticalNotifyCompletion_UnsafeOnCompleted_mB596FA92ABC1EE97F8FCB93213DCFF5B2933C211_AdjustorThunk },
	{ 0x060005BF, UnityAsyncOperationAwaiter__ctor_m5C05156CFE2FC01E5BE4CF83F60C0F7542D91649_AdjustorThunk },
	{ 0x060005C0, UnityAsyncOperationAwaiter_get_IsCompleted_mBB89F744813E25D00CC3E843F4687CDED8E9517B_AdjustorThunk },
	{ 0x060005C1, UnityAsyncOperationAwaiter_OnCompleted_mE2DBA03C63352975884018EE7BD352B016037B47_AdjustorThunk },
	{ 0x060005C2, UnityAsyncOperationAwaiter_UnsafeOnCompleted_mF6ABD362C1E6B1C094782508479ABAB4B2699932_AdjustorThunk },
	{ 0x060005C3, UnityAsyncOperationAwaiter_GetResult_m319374AE9CE9E89C1FB17A1C7A812378731F0A9D_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1479] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9239,
	6250,
	6250,
	5182,
	9264,
	2978,
	6598,
	6508,
	6366,
	6366,
	6177,
	6177,
	9299,
	6151,
	1450,
	2463,
	4767,
	4768,
	6250,
	8808,
	8808,
	7636,
	7663,
	7636,
	7663,
	7636,
	7663,
	7578,
	7614,
	7577,
	7578,
	7614,
	7577,
	7614,
	7577,
	9264,
	9300,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6216,
	5147,
	6250,
	5182,
	6250,
	6250,
	6250,
	5182,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6177,
	5106,
	6177,
	5106,
	6177,
	5106,
	6177,
	5106,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9300,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6250,
	5182,
	6216,
	6366,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6216,
	5147,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9300,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	6216,
	6366,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6151,
	5066,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6151,
	5066,
	6151,
	5066,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6250,
	5182,
	6250,
	5182,
	6216,
	6366,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6250,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	9264,
	9264,
	6250,
	6366,
	5182,
	6250,
	6250,
	5182,
	6250,
	5182,
	3762,
	3762,
	6216,
	6250,
	5182,
	6216,
	5182,
	5182,
	9300,
	9300,
	6366,
	6250,
	0,
	6216,
	6250,
	6216,
	6151,
	6151,
	1548,
	8963,
	9264,
	8316,
	8754,
	8754,
	2304,
	6366,
	5182,
	5182,
	6366,
	6366,
	5182,
	6250,
	6216,
	5147,
	2970,
	5182,
	5182,
	5182,
	5182,
	5182,
	5182,
	2769,
	9300,
	9153,
	9153,
	9153,
	9153,
	9153,
	9153,
	8537,
	8513,
	8513,
	8513,
	8513,
	8513,
	8513,
	9139,
	8513,
	9139,
	8513,
	0,
	0,
	0,
	0,
	0,
	7445,
	7507,
	7443,
	0,
	0,
	0,
	0,
	0,
	9300,
	9153,
	9153,
	9139,
	8513,
	9139,
	8513,
	0,
	0,
	0,
	0,
	0,
	7445,
	7507,
	7443,
	0,
	0,
	0,
	0,
	0,
	9300,
	9153,
	9153,
	9253,
	9148,
	9300,
	9300,
	9300,
	9300,
	9300,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	235,
	6351,
	6250,
	6216,
	6216,
	6216,
	6356,
	6177,
	6177,
	6177,
	6177,
	6216,
	6250,
	6250,
	9264,
	9153,
	160,
	6622,
	9300,
	6366,
	6366,
	6151,
	4277,
	1756,
	4769,
	5182,
	6366,
	4328,
	6216,
	9253,
	6366,
	6216,
	5284,
	6351,
	6355,
	5288,
	6300,
	5239,
	6216,
	5147,
	6250,
	5182,
	5182,
	5182,
	8513,
	0,
	0,
	4571,
	2279,
	6366,
	6366,
	1617,
	0,
	0,
	0,
	0,
	0,
	1069,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	1350,
	4577,
	4577,
	5182,
	2978,
	2978,
	5182,
	1551,
	6250,
	6216,
	6250,
	5182,
	2978,
	6250,
	6250,
	2978,
	6250,
	6250,
	6216,
	6250,
	1551,
	6216,
	1076,
	7371,
	6151,
	1572,
	6366,
	6366,
	6366,
	3762,
	4861,
	6151,
	2071,
	7317,
	5182,
	5147,
	7164,
	5182,
	8210,
	6366,
	2978,
	427,
	1350,
	2307,
	6151,
	6250,
	6250,
	5182,
	2978,
	1325,
	6366,
	6366,
	6216,
	6216,
	6366,
	6366,
	5182,
	2307,
	2978,
	3762,
	6151,
	6366,
	5182,
	6366,
	6366,
	6366,
	3762,
	2978,
	917,
	3762,
	6366,
	6250,
	5182,
	6250,
	6366,
	6366,
	6366,
	6366,
	5182,
	2978,
	4577,
	5182,
	5182,
	5182,
	5182,
	6250,
	5182,
	5284,
	6366,
	6216,
	6216,
	6216,
	6216,
	4277,
	4769,
	5147,
	1756,
	6366,
	4277,
	1756,
	5182,
	6151,
	0,
	0,
	0,
	4571,
	2279,
	6366,
	2978,
	6250,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	1490,
	1154,
	1490,
	5182,
	9065,
	9081,
	9097,
	8832,
	8850,
	8871,
	5182,
	6366,
	8102,
	8171,
	8808,
	7636,
	7663,
	7636,
	7636,
	7663,
	9148,
	9148,
	7921,
	9144,
	7921,
	7851,
	7848,
	1490,
	9264,
	8537,
	8850,
	8246,
	8338,
	6366,
	4577,
	7851,
	8209,
	6217,
	6217,
	6250,
	6250,
	6217,
	484,
	3762,
	3762,
	6216,
	4577,
	8963,
	6366,
	6366,
	3762,
	8757,
	3762,
	4572,
	6216,
	6151,
	6151,
	6151,
	6151,
	3734,
	3762,
	3733,
	1775,
	6217,
	6151,
	3762,
	6216,
	3733,
	6151,
	6151,
	6151,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	6366,
	1069,
	6366,
	6366,
	6366,
	5148,
	3762,
	4572,
	4572,
	6216,
	6366,
	6366,
	3678,
	6366,
	3734,
	5182,
	8963,
	6366,
	6366,
	6250,
	8958,
	4577,
	5182,
	2978,
	5182,
	8537,
	7931,
	8256,
	8883,
	8881,
	8852,
	8852,
	8852,
	6798,
	9255,
	9253,
	8287,
	8852,
	8852,
	6796,
	8252,
	7671,
	7670,
	6796,
	7669,
	8252,
	8252,
	8252,
	8278,
	8213,
	8286,
	8286,
	8286,
	5149,
	6366,
	6151,
	6151,
	6151,
	2769,
	2746,
	2745,
	2769,
	2797,
	2720,
	5147,
	2769,
	5182,
	6366,
	6366,
	6366,
	4328,
	4328,
	4502,
	3733,
	4015,
	4571,
	4571,
	8757,
	8963,
	0,
	0,
	0,
	0,
	0,
	6366,
	2978,
	8338,
	6250,
	6250,
	3762,
	3762,
	6216,
	8125,
	8125,
	6250,
	552,
	8963,
	1806,
	4577,
	2978,
	6366,
	0,
	0,
	5182,
	5182,
	5182,
	5182,
	2978,
	6366,
	9264,
	6250,
	6250,
	9300,
	5182,
	6366,
	5182,
	6366,
	5182,
	2970,
	5147,
	1551,
	7347,
	6925,
	6673,
	6673,
	9264,
	6366,
	9300,
	1082,
	6366,
	1265,
	2206,
	5148,
	1548,
	6151,
	6151,
	6151,
	6217,
	6217,
	5148,
	5182,
	2958,
	6349,
	6216,
	6217,
	2972,
	2307,
	904,
	4577,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5182,
	5182,
	5182,
	5182,
	6151,
	6151,
	6151,
	1572,
	6366,
	1041,
	4577,
	2304,
	4589,
	5182,
	6366,
	5182,
	5182,
	6366,
	6250,
	6366,
	5182,
	8338,
	0,
	2978,
	7766,
	1351,
	6250,
	6250,
	5182,
	5182,
	5182,
	6366,
	5070,
	6366,
	5182,
	5182,
	2307,
	7491,
	7979,
	7979,
	7491,
	8396,
	8701,
	8338,
	6366,
	8102,
	1073,
	7369,
	6366,
	6366,
	6366,
	1350,
	1350,
	897,
	8338,
	6366,
	6250,
	6366,
	6366,
	6366,
	5182,
	6366,
	5182,
	6250,
	6250,
	6216,
	1572,
	7777,
	8333,
	3064,
	0,
	0,
	0,
	246,
	6216,
	6216,
	6250,
	6250,
	6250,
	6250,
	6250,
	0,
	0,
	0,
	0,
	0,
	92,
	6216,
	6216,
	6250,
	6250,
	6250,
	6250,
	6300,
	6151,
	6250,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6216,
	5147,
	6216,
	5147,
	6216,
	5147,
	6300,
	5239,
	6300,
	5239,
	6250,
	5182,
	6366,
	0,
	0,
	477,
	6216,
	6216,
	6250,
	6250,
	6250,
	6250,
	0,
	985,
	6216,
	6216,
	6250,
	6250,
	6250,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8963,
	0,
	0,
	0,
	0,
	8963,
	8963,
	0,
	0,
	0,
	0,
	8757,
	8963,
	8963,
	5182,
	2978,
	2978,
	5182,
	5182,
	6366,
	9264,
	5182,
	5182,
	5182,
	8963,
	6151,
	3658,
	3762,
	8065,
	8065,
	6216,
	2487,
	8808,
	8808,
	5396,
	6250,
	8808,
	8848,
	8848,
	8246,
	8246,
	8246,
	8808,
	8808,
	8808,
	8808,
	9300,
	8808,
	8808,
	8808,
	8808,
	8808,
	8808,
	1490,
	6250,
	7836,
	7836,
	8975,
	8975,
	8860,
	8860,
	8860,
	7740,
	7740,
	3762,
	3762,
	6216,
	8125,
	8125,
	8125,
	8125,
	8125,
	8125,
	1450,
	8472,
	8472,
	9119,
	8473,
	8474,
	8473,
	9112,
	6177,
	6177,
	8850,
	9148,
	8517,
	8517,
	9144,
	9144,
	8808,
	8210,
	8808,
	8210,
	8210,
	8210,
	8210,
	8210,
	8210,
	8210,
	8274,
	8209,
	8209,
	5040,
	5288,
	1450,
	8808,
	8808,
	8808,
	8808,
	8850,
	8850,
	8808,
	8808,
	8808,
	8808,
	8808,
	6356,
	6224,
	6250,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	9285,
	9259,
	0,
	0,
	6250,
	6151,
	9264,
	9153,
	6366,
	9300,
	9103,
	9153,
	9142,
	8784,
	0,
	8784,
	0,
	8963,
	8950,
	6366,
	5182,
	6366,
	5182,
	8757,
	8757,
	8757,
	8327,
	6366,
	5182,
	2958,
	6169,
	2958,
	6151,
	6366,
	5182,
	5182,
	0,
	0,
	0,
	0,
	0,
	0,
	5182,
	6237,
	5182,
	6151,
	6366,
	5182,
	5182,
	5182,
	9300,
	6366,
	5182,
	5182,
	6330,
	5182,
	6151,
	6366,
	5182,
	5182,
	9300,
	6366,
	5182,
	5182,
	5182,
	6151,
	5182,
	5182,
	6366,
	6366,
	5182,
	6366,
	5182,
};
static const Il2CppTokenRangePair s_rgctxIndices[58] = 
{
	{ 0x020000B5, { 96, 3 } },
	{ 0x020000B6, { 99, 4 } },
	{ 0x020000BC, { 121, 4 } },
	{ 0x020000D0, { 127, 3 } },
	{ 0x020000D1, { 130, 12 } },
	{ 0x020000D2, { 142, 10 } },
	{ 0x020000D4, { 154, 3 } },
	{ 0x0600027C, { 0, 4 } },
	{ 0x0600027D, { 4, 4 } },
	{ 0x0600027E, { 8, 1 } },
	{ 0x0600027F, { 9, 4 } },
	{ 0x06000280, { 13, 4 } },
	{ 0x06000284, { 17, 1 } },
	{ 0x06000285, { 18, 1 } },
	{ 0x06000286, { 19, 1 } },
	{ 0x06000287, { 20, 1 } },
	{ 0x06000288, { 21, 1 } },
	{ 0x06000290, { 22, 4 } },
	{ 0x06000291, { 26, 4 } },
	{ 0x06000292, { 30, 1 } },
	{ 0x06000293, { 31, 4 } },
	{ 0x06000294, { 35, 4 } },
	{ 0x06000298, { 39, 1 } },
	{ 0x06000299, { 40, 1 } },
	{ 0x0600029A, { 41, 1 } },
	{ 0x0600029B, { 42, 1 } },
	{ 0x0600029C, { 43, 1 } },
	{ 0x060002DC, { 44, 1 } },
	{ 0x060002DD, { 45, 1 } },
	{ 0x060002E3, { 46, 1 } },
	{ 0x06000356, { 47, 3 } },
	{ 0x06000357, { 50, 1 } },
	{ 0x06000358, { 51, 1 } },
	{ 0x060004E9, { 52, 3 } },
	{ 0x060004EA, { 55, 3 } },
	{ 0x060004EB, { 58, 1 } },
	{ 0x060004EC, { 59, 4 } },
	{ 0x060004ED, { 63, 5 } },
	{ 0x060004EE, { 68, 2 } },
	{ 0x060004EF, { 70, 2 } },
	{ 0x060004F0, { 72, 7 } },
	{ 0x060004F1, { 79, 1 } },
	{ 0x060004F2, { 80, 5 } },
	{ 0x060004F3, { 85, 5 } },
	{ 0x060004F4, { 90, 6 } },
	{ 0x060004FB, { 103, 2 } },
	{ 0x060004FC, { 105, 1 } },
	{ 0x060004FE, { 106, 2 } },
	{ 0x060004FF, { 108, 1 } },
	{ 0x06000500, { 109, 2 } },
	{ 0x06000501, { 111, 5 } },
	{ 0x06000504, { 116, 2 } },
	{ 0x06000505, { 118, 3 } },
	{ 0x06000574, { 125, 2 } },
	{ 0x0600057B, { 152, 2 } },
	{ 0x0600057E, { 157, 2 } },
	{ 0x0600058D, { 159, 2 } },
	{ 0x0600058F, { 161, 2 } },
};
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m88645D6F8CB5E35D6C9828BEC99A426194F40C5A;
extern const uint32_t g_rgctx_EqualityComparer_1_t8D418215FE05CA24F890FFE1E848E5A24B4159ED;
extern const uint32_t g_rgctx_EqualityComparer_1_t8D418215FE05CA24F890FFE1E848E5A24B4159ED;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m53B98E220BD498FBCA181916BD2AE32BA7A9FECB;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mC59154772E212B260B47784A0FA446AEA31F4B87;
extern const uint32_t g_rgctx_EqualityComparer_1_tCAFE3C58D8F23D51A72DDE0F6EDC629F5BA4C207;
extern const uint32_t g_rgctx_EqualityComparer_1_tCAFE3C58D8F23D51A72DDE0F6EDC629F5BA4C207;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_mB3634B80C944DF98B51B43C077EF99BCAD6DD2F0;
extern const uint32_t g_rgctx_T_tA101EA4157A93303E3392DDDDEB5883AD4DE5733;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mE969F979084E708BDB56A6156BFE40FDEDED5201;
extern const uint32_t g_rgctx_EqualityComparer_1_tB0CEBE2F15C900F94C0CCAE6579E09EE7B7C412C;
extern const uint32_t g_rgctx_EqualityComparer_1_tB0CEBE2F15C900F94C0CCAE6579E09EE7B7C412C;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m4C48B077F5147BD16722D93EDE87EE55D4A8ABFF;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m25F77D5D2F3A34AA72857FA66F8A4BDDC8213DF1;
extern const uint32_t g_rgctx_EqualityComparer_1_t636587EC40EC47E87C07025F9BB2E36E04A7379D;
extern const uint32_t g_rgctx_EqualityComparer_1_t636587EC40EC47E87C07025F9BB2E36E04A7379D;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m110CC08DBB658489072365AD8E2FA8FD9C35C595;
extern const uint32_t g_rgctx_T_tE7E98E3B30663BC5821642CDF2C83653A68D9055;
extern const uint32_t g_rgctx_T_tF1604BBDAFDD327F18F7E546C8EE36C223B9381B;
extern const uint32_t g_rgctx_T_t7CE949182C37902B44C2CD8802F1F945C457A8A2;
extern const uint32_t g_rgctx_T_t293EECA46C7253BD7AF1D5042649358EB37E7DE7;
extern const uint32_t g_rgctx_T_tE2BE94FFAA7804AC31262E55DC4806F2D2B1B53C;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m6F5A253303E4FABAEF47A8FC146E31F444CD6E6C;
extern const uint32_t g_rgctx_EqualityComparer_1_t581B52BA1F7AD2DCD6D8640BD8EBEA8698F22B3C;
extern const uint32_t g_rgctx_EqualityComparer_1_t581B52BA1F7AD2DCD6D8640BD8EBEA8698F22B3C;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m71C4B5B8651CAB0D31395B641428C40130B48189;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m76886B827574D6D85D5C5DEA659F0B03CBCEBEA5;
extern const uint32_t g_rgctx_EqualityComparer_1_t1FBB324F26BD518D9E7C4366CF158FB256B98AB7;
extern const uint32_t g_rgctx_EqualityComparer_1_t1FBB324F26BD518D9E7C4366CF158FB256B98AB7;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_mE424D04DBE191D4AF2F673109B4FEEFE44FB304F;
extern const uint32_t g_rgctx_T_tB191404DB2A6C1A26C1C4F2D8F5F3D9EE6DAB497;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_mEAD3E47D904D59DBDD66195570DAEC4D8AD96F7B;
extern const uint32_t g_rgctx_EqualityComparer_1_t52E8FC624B6A1CA447A29A94EE99D5BC487FD6ED;
extern const uint32_t g_rgctx_EqualityComparer_1_t52E8FC624B6A1CA447A29A94EE99D5BC487FD6ED;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_mAC073F459FF6D135F1C063E5573F1ECAC943A4BD;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m40A02EEBFEACFBCF5C029F9E456C42995E086921;
extern const uint32_t g_rgctx_EqualityComparer_1_t609957537E4111FC772FA6D9B55E13B7D8C9537B;
extern const uint32_t g_rgctx_EqualityComparer_1_t609957537E4111FC772FA6D9B55E13B7D8C9537B;
extern const uint32_t g_rgctx_EqualityComparer_1_Equals_m97E23A2F7496C4FBB4E08A66C4E8318FAF64CD67;
extern const uint32_t g_rgctx_T_t4A7B9FCE0BA2E07DC40CDFF56566A4B7A4F3D5CC;
extern const uint32_t g_rgctx_T_tD729326137336E97BDA15C0591C861D08B3152C9;
extern const uint32_t g_rgctx_T_t9CA9FD13F3D0C03EDDE3433D3BE2AED55527319D;
extern const uint32_t g_rgctx_T_tF34C41109F85A0CA65E674CC64B5F6B4F82E8C58;
extern const uint32_t g_rgctx_T_t1B47B80F3AACB70A063FCA3F4E03BC8D3ADBD404;
extern const uint32_t g_rgctx_TileDataStore_GetFeaturesOfType_TisT_t265818784044E9DA620509B7BD01A3365874D742_mC70375F8F1419E19D444CD3F63889837FB6DC33B;
extern const uint32_t g_rgctx_TileDataStore_GetFeaturesOfType_TisT_t530BB32B3C953A5632E636BACE03949198454C8E_m4B1468E9F4AE43E84B6A14252E43401F045CAAE1;
extern const uint32_t g_rgctx_TileDataStore_AddFeature_TisT_tDA79524CA547D151218B1DBA54C3E5F2D7AC7167_mF86241727CF85088DA64B667B2444CBD396DD99D;
extern const uint32_t g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622_IMapTileFeature_get_Layer_m6FC48A0D8CF34339653EB47B6EA848F108231CC8;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622_IMapTileFeature_get_Kind_mC8AAF0417CFB60463F0AD9C6D2CA855BDC207500;
extern const uint32_t g_rgctx_Enumerable_OfType_TisT_t0C0F1598E462DEB8BA15F1A3C726208E10760774_m3416B35C5CC047D143820B732C63BDFCBB67C326;
extern const uint32_t g_rgctx_Enumerable_OfType_TisT_t56DB1BEB95F546753518187EF8AB3B2358C98EA7_m5EB5F0118F507CABFDFF648165CAFC753D448EDB;
extern const uint32_t g_rgctx_Dictionary_2_tB10ECFDC78DA0F3B2C6E59F657480C6143A687C4;
extern const uint32_t g_rgctx_Dictionary_2_ContainsKey_m273EA8F57243E32E1C0BF893AA3A3009CF7C0FD8;
extern const uint32_t g_rgctx_Dictionary_2_get_Item_mF76E0E46EE06F126E2DCC0BA2D0B07E0C2ECF4AC;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_t8232BB911E140B2BF512811C0EFEF9D2BA7C3329;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_ContainsKey_mC623F08F33AB3A9B76B433BF2410BB64BDCC4FFA;
extern const uint32_t g_rgctx_IReadOnlyDictionary_2_get_Item_mC8428AAD1415001FA48CF8D4BB572908B06537B2;
extern const uint32_t g_rgctx_DictionaryEx_Empty_TisT_tF293A473EF4440E789C68F231646DC70F38CCA47_TisTU_tDE0FA99937406AA1CA37EF6C1A631A320A63523B_mF14C3652071260BABFA2A738C9C323EE5C81297D;
extern const uint32_t g_rgctx_IDictionary_2_tC4C922CF8C2A64FF3183696179901C74EACD70ED;
extern const uint32_t g_rgctx_IDictionary_2_ContainsKey_mE4CEEADBBC2E42D73F07D55263352E31BAEC26D9;
extern const uint32_t g_rgctx_IDictionary_2_get_Item_m9AFEF2BD6C0367621999EB5A07A6326FC5D5B0D2;
extern const uint32_t g_rgctx_IDictionary_2_Remove_m02176B97406D7E73EA41614C86F8C05C414DF5FC;
extern const uint32_t g_rgctx_IDictionary_2_tFE3D8F92B729CBB168B0DD733DB75D2A328E755A;
extern const uint32_t g_rgctx_IDictionary_2_ContainsKey_m537A2B021A6BDD9790A972474A0E4670FEED45CB;
extern const uint32_t g_rgctx_IDictionary_2_get_Item_mFDB74C66DB95B1DFA740AEABDDBC5B63155F2095;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisTValue_tE7D8DAD8D3A7B37982E2DD47201E5023B3D56DEC_mD9C4523F7053745BF8CA7F4B8D5FC289EF768710;
extern const uint32_t g_rgctx_IDictionary_2_set_Item_m9CF7232D27DB653FBE6BF74CB81792A6FA5B9AD0;
extern const uint32_t g_rgctx_ICollection_1_tF7EAFA956DFFD12406AB0A752B2A38AD316FF6B3;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m6A8BE57AEA9B3198C4C39C0AAF77CCF7D6C0050E;
extern const uint32_t g_rgctx_ICollection_1_tC9EC9FC126C9C6AE003D2510D05FE1AB4DF6F4D0;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m19F97E45E1D94FE9BCF3247991AB69413242D16A;
extern const uint32_t g_rgctx_IEnumerable_1_tF3ABD72D04B3019968BF7CE5A6EB8121ACDF7CF4;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m2D19C9F9020203A55B8170C8F2B3A47AA60A0E34;
extern const uint32_t g_rgctx_IEnumerator_1_t5D9E296BE9D8377FB0EAC958CCE431941076307E;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m2BD08985C2E0B6C967355E7798CF0FF7726253BB;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m0123457A7E65BD3359DCFE18F6C9AD76232520F6;
extern const uint32_t g_rgctx_TValue_tA07F0D6200F5C9041F405136640F6213C443377C;
extern const Il2CppRGCTXConstrainedData g_rgctx_TValue_tA07F0D6200F5C9041F405136640F6213C443377C_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Enumerable_Empty_TisT_t570BD3E8AE3974A525ECFD06D8C1178F7211D024_m89D092FD2DEE1046703A2BA1BE870F2CD54722AD;
extern const uint32_t g_rgctx_U3CU3Ec__1_1_t72F7240CC16DB70E9620B994A54DB844AEFEE7A1;
extern const uint32_t g_rgctx_U3CU3Ec__1_1_U3COrderedU3Eb__1_0_m3706CB8588A8A6EE351EF4FC9243250ED149360F;
extern const uint32_t g_rgctx_Func_2_tA779E76EA802AE4D8A0125CAEFF427D5FDCC6399;
extern const uint32_t g_rgctx_Func_2__ctor_m966730DBAF9EAC5894D6668F52F2022FBB4E94DF;
extern const uint32_t g_rgctx_Enumerable_OrderBy_TisT_t6994F934C2E0424B1D321048751B9127FD49F387_TisT_t6994F934C2E0424B1D321048751B9127FD49F387_mEE9196001DB0D9C62200FDE444D74B791377C843;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_tA601A4749DF78BAF7218B9ADDFD71439A743BDDD;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_U3CWhereNotNullU3Eb__2_0_m6EDFD7591323B9654B23D4E9E5C3F950B335B7B9;
extern const uint32_t g_rgctx_Func_2_tE79B15E1628FB24612F9B888FD95C827B4009CF9;
extern const uint32_t g_rgctx_Func_2__ctor_mAF6E65E3D9CA728B92A7F4081C551FDFA625BC8A;
extern const uint32_t g_rgctx_Enumerable_Where_TisT_tB8C3D589F7E0525B9B186BFB8F2D604E0E73A031_mDFF04A154C92CA3C9F0480920780FBB73C30A526;
extern const uint32_t g_rgctx_IEnumerable_1_tEDF97F70AE1BB963F52F53E85F38AD590BE18EE0;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mE699CF44D2780E7CFE22680038EBA5F16F157976;
extern const uint32_t g_rgctx_IEnumerator_1_t2EAAC726A1CA241D2AA866C5286A025C6E02EA90;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m19C0978366CFA6FEF9E8586C0615101312E9C513;
extern const uint32_t g_rgctx_T_tF5E57ED3DCF24E93A7F1634D07BDAC070E5BEE5D;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tF5E57ED3DCF24E93A7F1634D07BDAC070E5BEE5D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_U3CU3Ec__1_1_t6C4EE722A57B158DAE601BDC3461890FC74F389A;
extern const uint32_t g_rgctx_U3CU3Ec__1_1__ctor_mE3DFFBC0752A1046795CFC5AEC6216C27AB0FDC9;
extern const uint32_t g_rgctx_U3CU3Ec__1_1_t6C4EE722A57B158DAE601BDC3461890FC74F389A;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t443FD6F94E97030533A47CE214534540181D2E11;
extern const uint32_t g_rgctx_U3CU3Ec__2_1__ctor_mBE2DB38D34FD3571B1636E9D54258374807680FF;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t443FD6F94E97030533A47CE214534540181D2E11;
extern const uint32_t g_rgctx_T_t77D06CFE26D2F65F67FB62C32EDD9E949AB28983;
extern const uint32_t g_rgctx_List_1_t5EB0FFAF4B748B788DE5348BC8D4FD2156A19165;
extern const uint32_t g_rgctx_List_1_get_Count_mBFE34C9291FF141517BC3EEED1B64E1A8BB08E86;
extern const uint32_t g_rgctx_ListEx_Empty_TisT_t347590D50CA2A20445219ED868902877869C9A4A_m5753DB4204F6F621E77AA04AA76D6BDD12E25770;
extern const uint32_t g_rgctx_Queue_1_t11A5CCFB83F93D532A6AF75CB73C750C758675EF;
extern const uint32_t g_rgctx_Queue_1_get_Count_mD3F3DEA953B5B6EDACB6AD8EF6AB13D6DE19CDB6;
extern const uint32_t g_rgctx_QueueExtensions_IsEmpty_TisT_t1D5A980D03A03945F171A3EE88E702128B3766B5_m8B5765AD8E907A4E4F6AE0C01A38126DFDD47E30;
extern const uint32_t g_rgctx_Queue_1_tA144902E67B16D4F07430A11471F953481A30303;
extern const uint32_t g_rgctx_Queue_1_get_Count_mF3FD8FA43EB7FA5D040DB32B3C561C098930B43F;
extern const uint32_t g_rgctx_Enumerable_FirstOrDefault_TisT_t89486E1309F4D2E82FDE37CE6D202F672B688A78_m57064CCA8C8293718668DCD8B24A81839DEFC2DD;
extern const uint32_t g_rgctx_T_t89486E1309F4D2E82FDE37CE6D202F672B688A78;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_t89486E1309F4D2E82FDE37CE6D202F672B688A78_m6825A40571AC8CF5AA6980C3A7F071D58B308ED9;
extern const uint32_t g_rgctx_Queue_1_t978626326244846A0863E72D26942632C5D13950;
extern const uint32_t g_rgctx_Queue_1_Enqueue_mBCED80F7824E290B41950C1EE665359F04C09BD1;
extern const uint32_t g_rgctx_EmptyReadOnlyCollection_1_get_Value_m602791F33200D368C2AB974EA98F094E8B5A0167;
extern const uint32_t g_rgctx_EmptyReadOnlyCollection_1_tE313002698C812E01B4FAA06238365675A30A6B5;
extern const uint32_t g_rgctx_List_1_tC6F9958306DFD70D06A6AAE05EBBA51CA79CC831;
extern const uint32_t g_rgctx_List_1__ctor_m1D13E944DE7E5E25FB8A257AC291FE11E97524B8;
extern const uint32_t g_rgctx_List_1_AsReadOnly_mB7C3404B04C7CD5FE082F53F332628051B15F680;
extern const uint32_t g_rgctx_EmptyReadOnlyCollection_1_t9C845ECC13F01A485392627EFDEAFB3DD167876C;
extern const uint32_t g_rgctx_ListEx_Empty_TisT_t77095166B1DF145FFE0E1BED6C908BFA41464445_mD5DB878A473BEAA12FA465596D87D705D710D9D6;
extern const uint32_t g_rgctx_List_1_t5227CA40B4F8DFF9430E2FB97FF3A653A1C6A129;
extern const uint32_t g_rgctx_List_1_AsReadOnly_mB23908669D61E9D2DD0CD269709EE3033A83C81E;
extern const uint32_t g_rgctx_EmptyDictionary_2_get_Value_mA9FFF044296025E30CFB723BE822124E18E8CDB0;
extern const uint32_t g_rgctx_EmptyDictionary_2_t9972A22F6709A38DE2D6455069BBC165D8AA57B6;
extern const uint32_t g_rgctx_EmptyDictionary_2_tA10307ED0D3DB42123CC69679B4716E20372317A;
extern const uint32_t g_rgctx_Dictionary_2_t0DD90155372061C20E0B2E85D66A9262960F1298;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m6A46EC5D038CCD95C71D000F486634649F393E07;
extern const uint32_t g_rgctx_Dictionary_2_get_Values_m2371566BE2B4B61D26B6825E08B1B250944C3B53;
extern const uint32_t g_rgctx_ValueCollection_tB40B1FB96A02ECF4CAAED7469C8C8D3A8EA0D756;
extern const uint32_t g_rgctx_ValueCollection_GetEnumerator_m11A693CF550E2A72ED995E04F13ED1E20A147244;
extern const uint32_t g_rgctx_Enumerator_get_Current_m50C44F5B3A4678AC83FA7D6332B62E594BD346A8;
extern const uint32_t g_rgctx_TValue_t8786FA008A17E1804B35B7D2D7CD97E04B16933A;
extern const Il2CppRGCTXConstrainedData g_rgctx_TValue_t8786FA008A17E1804B35B7D2D7CD97E04B16933A_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m32F13F92C9F620FFEBCD0EF41F52A70816F4E72F;
extern const uint32_t g_rgctx_Enumerator_t9FB56C67F06FF627701E0DD8BEB14E496B084002;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t9FB56C67F06FF627701E0DD8BEB14E496B084002_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Dictionary_2_Clear_m7BC646754618E19414B38C350040481DBA77303A;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mDBA25A3BE114D807F31FB922CC5E51512389366A;
extern const uint32_t g_rgctx_Dictionary_2_t7B0BF30318FEA97CC4B700E4943ABD8ACFC040C6;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m9E568E3EF519DCA3A71C961830409B576EC39F18;
extern const uint32_t g_rgctx_Enumerator_get_Current_m58F23C14C6BC7AD05B9679F4FD07228001E4DB24;
extern const uint32_t g_rgctx_T_tD09156ADEBFB45D8A64B4B7F549AB3864A1E5E60;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tD09156ADEBFB45D8A64B4B7F549AB3864A1E5E60_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m2438005F5667DC7F3944017129849DDB9ED2521A;
extern const uint32_t g_rgctx_Enumerator_t4B4D94B8D70721712A46CFBB08DFF345CF0894B7;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t4B4D94B8D70721712A46CFBB08DFF345CF0894B7_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_List_1_Clear_m846E96ACF0EAB50491A495667CDCC3F7566DAA3B;
extern const uint32_t g_rgctx_List_1__ctor_m7BD08BD548F9C38DBCB5ECAD54425B1990EB6562;
extern const uint32_t g_rgctx_List_1_t028B1E4D18988D45D3CB4438D84F52B9399417E8;
extern const uint32_t g_rgctx_EmptyList_1_get_Value_m4DF8B3C3A7E13D9C95DE3CC9FB7BA67457A4389A;
extern const uint32_t g_rgctx_EmptyList_1_t014645C7D55841EA759AC5C1534F3C4EEFCF657B;
extern const uint32_t g_rgctx_EmptyList_1_tCF2F62A8FB93D2CADE4FE15253B31B999D0006A3;
extern const uint32_t g_rgctx_List_1_t1CB633C87F3E25F4839E370FB695BF6C65EFFDCA;
extern const uint32_t g_rgctx_List_1__ctor_m9E3F89DE5B6E22AD7CD61C9A9DB8C1E14ABE4706;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t0D112327EBC001C377E99FE218E5EF1CB4CE4186;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_mF28D53803E5208F094755BDDAB3B27AB884B8A78;
extern const uint32_t g_rgctx_Task_1_tE81FCB89A571357AEDD1D4DBC718F39DC27CF913;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_m7307D2D5025D603F098073941AFB995989E84C41;
extern const uint32_t g_rgctx_Task_1_tDBE88BF1A34892917AB64152687AC0E039FE9F6D;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_m490E28B435D6A175BC8C9C59AD26786212F13807;
static const Il2CppRGCTXDefinition s_rgctxValues[163] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m88645D6F8CB5E35D6C9828BEC99A426194F40C5A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t8D418215FE05CA24F890FFE1E848E5A24B4159ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t8D418215FE05CA24F890FFE1E848E5A24B4159ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m53B98E220BD498FBCA181916BD2AE32BA7A9FECB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_mC59154772E212B260B47784A0FA446AEA31F4B87 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tCAFE3C58D8F23D51A72DDE0F6EDC629F5BA4C207 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tCAFE3C58D8F23D51A72DDE0F6EDC629F5BA4C207 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_mB3634B80C944DF98B51B43C077EF99BCAD6DD2F0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tA101EA4157A93303E3392DDDDEB5883AD4DE5733 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_mE969F979084E708BDB56A6156BFE40FDEDED5201 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tB0CEBE2F15C900F94C0CCAE6579E09EE7B7C412C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_tB0CEBE2F15C900F94C0CCAE6579E09EE7B7C412C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m4C48B077F5147BD16722D93EDE87EE55D4A8ABFF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m25F77D5D2F3A34AA72857FA66F8A4BDDC8213DF1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t636587EC40EC47E87C07025F9BB2E36E04A7379D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t636587EC40EC47E87C07025F9BB2E36E04A7379D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m110CC08DBB658489072365AD8E2FA8FD9C35C595 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE7E98E3B30663BC5821642CDF2C83653A68D9055 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF1604BBDAFDD327F18F7E546C8EE36C223B9381B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7CE949182C37902B44C2CD8802F1F945C457A8A2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t293EECA46C7253BD7AF1D5042649358EB37E7DE7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tE2BE94FFAA7804AC31262E55DC4806F2D2B1B53C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m6F5A253303E4FABAEF47A8FC146E31F444CD6E6C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t581B52BA1F7AD2DCD6D8640BD8EBEA8698F22B3C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t581B52BA1F7AD2DCD6D8640BD8EBEA8698F22B3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m71C4B5B8651CAB0D31395B641428C40130B48189 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m76886B827574D6D85D5C5DEA659F0B03CBCEBEA5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t1FBB324F26BD518D9E7C4366CF158FB256B98AB7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t1FBB324F26BD518D9E7C4366CF158FB256B98AB7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_mE424D04DBE191D4AF2F673109B4FEEFE44FB304F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB191404DB2A6C1A26C1C4F2D8F5F3D9EE6DAB497 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_mEAD3E47D904D59DBDD66195570DAEC4D8AD96F7B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t52E8FC624B6A1CA447A29A94EE99D5BC487FD6ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t52E8FC624B6A1CA447A29A94EE99D5BC487FD6ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_mAC073F459FF6D135F1C063E5573F1ECAC943A4BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_get_Default_m40A02EEBFEACFBCF5C029F9E456C42995E086921 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t609957537E4111FC772FA6D9B55E13B7D8C9537B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EqualityComparer_1_t609957537E4111FC772FA6D9B55E13B7D8C9537B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EqualityComparer_1_Equals_m97E23A2F7496C4FBB4E08A66C4E8318FAF64CD67 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4A7B9FCE0BA2E07DC40CDFF56566A4B7A4F3D5CC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD729326137336E97BDA15C0591C861D08B3152C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9CA9FD13F3D0C03EDDE3433D3BE2AED55527319D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF34C41109F85A0CA65E674CC64B5F6B4F82E8C58 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1B47B80F3AACB70A063FCA3F4E03BC8D3ADBD404 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TileDataStore_GetFeaturesOfType_TisT_t265818784044E9DA620509B7BD01A3365874D742_mC70375F8F1419E19D444CD3F63889837FB6DC33B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TileDataStore_GetFeaturesOfType_TisT_t530BB32B3C953A5632E636BACE03949198454C8E_m4B1468E9F4AE43E84B6A14252E43401F045CAAE1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TileDataStore_AddFeature_TisT_tDA79524CA547D151218B1DBA54C3E5F2D7AC7167_mF86241727CF85088DA64B667B2444CBD396DD99D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622_IMapTileFeature_get_Layer_m6FC48A0D8CF34339653EB47B6EA848F108231CC8 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tD574037EF9041701980DCBF887A555E004A93622_IMapTileFeature_get_Kind_mC8AAF0417CFB60463F0AD9C6D2CA855BDC207500 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_OfType_TisT_t0C0F1598E462DEB8BA15F1A3C726208E10760774_m3416B35C5CC047D143820B732C63BDFCBB67C326 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_OfType_TisT_t56DB1BEB95F546753518187EF8AB3B2358C98EA7_m5EB5F0118F507CABFDFF648165CAFC753D448EDB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tB10ECFDC78DA0F3B2C6E59F657480C6143A687C4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_ContainsKey_m273EA8F57243E32E1C0BF893AA3A3009CF7C0FD8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_get_Item_mF76E0E46EE06F126E2DCC0BA2D0B07E0C2ECF4AC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IReadOnlyDictionary_2_t8232BB911E140B2BF512811C0EFEF9D2BA7C3329 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_ContainsKey_mC623F08F33AB3A9B76B433BF2410BB64BDCC4FFA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IReadOnlyDictionary_2_get_Item_mC8428AAD1415001FA48CF8D4BB572908B06537B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DictionaryEx_Empty_TisT_tF293A473EF4440E789C68F231646DC70F38CCA47_TisTU_tDE0FA99937406AA1CA37EF6C1A631A320A63523B_mF14C3652071260BABFA2A738C9C323EE5C81297D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_tC4C922CF8C2A64FF3183696179901C74EACD70ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_ContainsKey_mE4CEEADBBC2E42D73F07D55263352E31BAEC26D9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_get_Item_m9AFEF2BD6C0367621999EB5A07A6326FC5D5B0D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_Remove_m02176B97406D7E73EA41614C86F8C05C414DF5FC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_tFE3D8F92B729CBB168B0DD733DB75D2A328E755A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_ContainsKey_m537A2B021A6BDD9790A972474A0E4670FEED45CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_get_Item_mFDB74C66DB95B1DFA740AEABDDBC5B63155F2095 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisTValue_tE7D8DAD8D3A7B37982E2DD47201E5023B3D56DEC_mD9C4523F7053745BF8CA7F4B8D5FC289EF768710 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_set_Item_m9CF7232D27DB653FBE6BF74CB81792A6FA5B9AD0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tF7EAFA956DFFD12406AB0A752B2A38AD316FF6B3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m6A8BE57AEA9B3198C4C39C0AAF77CCF7D6C0050E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tC9EC9FC126C9C6AE003D2510D05FE1AB4DF6F4D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m19F97E45E1D94FE9BCF3247991AB69413242D16A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tF3ABD72D04B3019968BF7CE5A6EB8121ACDF7CF4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m2D19C9F9020203A55B8170C8F2B3A47AA60A0E34 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t5D9E296BE9D8377FB0EAC958CCE431941076307E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m2BD08985C2E0B6C967355E7798CF0FF7726253BB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m0123457A7E65BD3359DCFE18F6C9AD76232520F6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_tA07F0D6200F5C9041F405136640F6213C443377C },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TValue_tA07F0D6200F5C9041F405136640F6213C443377C_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Empty_TisT_t570BD3E8AE3974A525ECFD06D8C1178F7211D024_m89D092FD2DEE1046703A2BA1BE870F2CD54722AD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__1_1_t72F7240CC16DB70E9620B994A54DB844AEFEE7A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__1_1_U3COrderedU3Eb__1_0_m3706CB8588A8A6EE351EF4FC9243250ED149360F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA779E76EA802AE4D8A0125CAEFF427D5FDCC6399 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m966730DBAF9EAC5894D6668F52F2022FBB4E94DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_OrderBy_TisT_t6994F934C2E0424B1D321048751B9127FD49F387_TisT_t6994F934C2E0424B1D321048751B9127FD49F387_mEE9196001DB0D9C62200FDE444D74B791377C843 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_tA601A4749DF78BAF7218B9ADDFD71439A743BDDD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1_U3CWhereNotNullU3Eb__2_0_m6EDFD7591323B9654B23D4E9E5C3F950B335B7B9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tE79B15E1628FB24612F9B888FD95C827B4009CF9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_mAF6E65E3D9CA728B92A7F4081C551FDFA625BC8A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_Where_TisT_tB8C3D589F7E0525B9B186BFB8F2D604E0E73A031_mDFF04A154C92CA3C9F0480920780FBB73C30A526 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tEDF97F70AE1BB963F52F53E85F38AD590BE18EE0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mE699CF44D2780E7CFE22680038EBA5F16F157976 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t2EAAC726A1CA241D2AA866C5286A025C6E02EA90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m19C0978366CFA6FEF9E8586C0615101312E9C513 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF5E57ED3DCF24E93A7F1634D07BDAC070E5BEE5D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tF5E57ED3DCF24E93A7F1634D07BDAC070E5BEE5D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__1_1_t6C4EE722A57B158DAE601BDC3461890FC74F389A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__1_1__ctor_mE3DFFBC0752A1046795CFC5AEC6216C27AB0FDC9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__1_1_t6C4EE722A57B158DAE601BDC3461890FC74F389A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t443FD6F94E97030533A47CE214534540181D2E11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1__ctor_mBE2DB38D34FD3571B1636E9D54258374807680FF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t443FD6F94E97030533A47CE214534540181D2E11 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t77D06CFE26D2F65F67FB62C32EDD9E949AB28983 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t5EB0FFAF4B748B788DE5348BC8D4FD2156A19165 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_mBFE34C9291FF141517BC3EEED1B64E1A8BB08E86 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ListEx_Empty_TisT_t347590D50CA2A20445219ED868902877869C9A4A_m5753DB4204F6F621E77AA04AA76D6BDD12E25770 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_t11A5CCFB83F93D532A6AF75CB73C750C758675EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_mD3F3DEA953B5B6EDACB6AD8EF6AB13D6DE19CDB6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_QueueExtensions_IsEmpty_TisT_t1D5A980D03A03945F171A3EE88E702128B3766B5_m8B5765AD8E907A4E4F6AE0C01A38126DFDD47E30 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_tA144902E67B16D4F07430A11471F953481A30303 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_mF3FD8FA43EB7FA5D040DB32B3C561C098930B43F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_FirstOrDefault_TisT_t89486E1309F4D2E82FDE37CE6D202F672B688A78_m57064CCA8C8293718668DCD8B24A81839DEFC2DD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t89486E1309F4D2E82FDE37CE6D202F672B688A78 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_t89486E1309F4D2E82FDE37CE6D202F672B688A78_m6825A40571AC8CF5AA6980C3A7F071D58B308ED9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_t978626326244846A0863E72D26942632C5D13950 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Enqueue_mBCED80F7824E290B41950C1EE665359F04C09BD1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EmptyReadOnlyCollection_1_get_Value_m602791F33200D368C2AB974EA98F094E8B5A0167 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyReadOnlyCollection_1_tE313002698C812E01B4FAA06238365675A30A6B5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tC6F9958306DFD70D06A6AAE05EBBA51CA79CC831 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m1D13E944DE7E5E25FB8A257AC291FE11E97524B8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_AsReadOnly_mB7C3404B04C7CD5FE082F53F332628051B15F680 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyReadOnlyCollection_1_t9C845ECC13F01A485392627EFDEAFB3DD167876C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ListEx_Empty_TisT_t77095166B1DF145FFE0E1BED6C908BFA41464445_mD5DB878A473BEAA12FA465596D87D705D710D9D6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t5227CA40B4F8DFF9430E2FB97FF3A653A1C6A129 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_AsReadOnly_mB23908669D61E9D2DD0CD269709EE3033A83C81E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EmptyDictionary_2_get_Value_mA9FFF044296025E30CFB723BE822124E18E8CDB0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyDictionary_2_t9972A22F6709A38DE2D6455069BBC165D8AA57B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyDictionary_2_tA10307ED0D3DB42123CC69679B4716E20372317A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t0DD90155372061C20E0B2E85D66A9262960F1298 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m6A46EC5D038CCD95C71D000F486634649F393E07 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_get_Values_m2371566BE2B4B61D26B6825E08B1B250944C3B53 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ValueCollection_tB40B1FB96A02ECF4CAAED7469C8C8D3A8EA0D756 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ValueCollection_GetEnumerator_m11A693CF550E2A72ED995E04F13ED1E20A147244 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m50C44F5B3A4678AC83FA7D6332B62E594BD346A8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_t8786FA008A17E1804B35B7D2D7CD97E04B16933A },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_TValue_t8786FA008A17E1804B35B7D2D7CD97E04B16933A_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m32F13F92C9F620FFEBCD0EF41F52A70816F4E72F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t9FB56C67F06FF627701E0DD8BEB14E496B084002 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t9FB56C67F06FF627701E0DD8BEB14E496B084002_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Clear_m7BC646754618E19414B38C350040481DBA77303A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mDBA25A3BE114D807F31FB922CC5E51512389366A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t7B0BF30318FEA97CC4B700E4943ABD8ACFC040C6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m9E568E3EF519DCA3A71C961830409B576EC39F18 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m58F23C14C6BC7AD05B9679F4FD07228001E4DB24 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tD09156ADEBFB45D8A64B4B7F549AB3864A1E5E60 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tD09156ADEBFB45D8A64B4B7F549AB3864A1E5E60_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m2438005F5667DC7F3944017129849DDB9ED2521A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t4B4D94B8D70721712A46CFBB08DFF345CF0894B7 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t4B4D94B8D70721712A46CFBB08DFF345CF0894B7_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_m846E96ACF0EAB50491A495667CDCC3F7566DAA3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m7BD08BD548F9C38DBCB5ECAD54425B1990EB6562 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t028B1E4D18988D45D3CB4438D84F52B9399417E8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EmptyList_1_get_Value_m4DF8B3C3A7E13D9C95DE3CC9FB7BA67457A4389A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyList_1_t014645C7D55841EA759AC5C1534F3C4EEFCF657B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyList_1_tCF2F62A8FB93D2CADE4FE15253B31B999D0006A3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t1CB633C87F3E25F4839E370FB695BF6C65EFFDCA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m9E3F89DE5B6E22AD7CD61C9A9DB8C1E14ABE4706 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t0D112327EBC001C377E99FE218E5EF1CB4CE4186 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_mF28D53803E5208F094755BDDAB3B27AB884B8A78 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tE81FCB89A571357AEDD1D4DBC718F39DC27CF913 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_m7307D2D5025D603F098073941AFB995989E84C41 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tDBE88BF1A34892917AB64152687AC0E039FE9F6D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_m490E28B435D6A175BC8C9C59AD26786212F13807 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Niantic_Lightship_Maps_CodeGenModule;
const Il2CppCodeGenModule g_Niantic_Lightship_Maps_CodeGenModule = 
{
	"Niantic.Lightship.Maps.dll",
	1479,
	s_methodPointers,
	73,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	58,
	s_rgctxIndices,
	163,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

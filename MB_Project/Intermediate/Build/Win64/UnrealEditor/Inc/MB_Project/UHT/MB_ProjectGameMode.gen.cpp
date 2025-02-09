// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/MB_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMB_ProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MB_PROJECT_API UClass* Z_Construct_UClass_AMB_ProjectGameMode();
MB_PROJECT_API UClass* Z_Construct_UClass_AMB_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class AMB_ProjectGameMode
void AMB_ProjectGameMode::StaticRegisterNativesAMB_ProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMB_ProjectGameMode);
UClass* Z_Construct_UClass_AMB_ProjectGameMode_NoRegister()
{
	return AMB_ProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AMB_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MB_ProjectGameMode.h" },
		{ "ModuleRelativePath", "MB_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMB_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMB_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMB_ProjectGameMode_Statics::ClassParams = {
	&AMB_ProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMB_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMB_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AMB_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMB_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AMB_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMB_ProjectGameMode.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<AMB_ProjectGameMode>()
{
	return AMB_ProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMB_ProjectGameMode);
AMB_ProjectGameMode::~AMB_ProjectGameMode() {}
// End Class AMB_ProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_MB_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMB_ProjectGameMode, AMB_ProjectGameMode::StaticClass, TEXT("AMB_ProjectGameMode"), &Z_Registration_Info_UClass_AMB_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMB_ProjectGameMode), 986945662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_MB_ProjectGameMode_h_1162991268(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_MB_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_MB_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

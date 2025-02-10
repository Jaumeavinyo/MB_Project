// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/UAllomanticMetal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAllomanticMetal() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UAllomanticMetal
void UAllomanticMetal::StaticRegisterNativesUAllomanticMetal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllomanticMetal);
UClass* Z_Construct_UClass_UAllomanticMetal_NoRegister()
{
	return UAllomanticMetal::StaticClass();
}
struct Z_Construct_UClass_UAllomanticMetal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UAllomanticMetal.h" },
		{ "ModuleRelativePath", "UAllomanticMetal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomanticMetal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAllomanticMetal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticMetal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllomanticMetal_Statics::ClassParams = {
	&UAllomanticMetal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticMetal_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllomanticMetal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllomanticMetal()
{
	if (!Z_Registration_Info_UClass_UAllomanticMetal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllomanticMetal.OuterSingleton, Z_Construct_UClass_UAllomanticMetal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllomanticMetal.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UAllomanticMetal>()
{
	return UAllomanticMetal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllomanticMetal);
// End Class UAllomanticMetal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomanticMetal, UAllomanticMetal::StaticClass, TEXT("UAllomanticMetal"), &Z_Registration_Info_UClass_UAllomanticMetal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomanticMetal), 3629714195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_232420252(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

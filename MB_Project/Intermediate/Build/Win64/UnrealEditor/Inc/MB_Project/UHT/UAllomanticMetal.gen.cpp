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
MB_PROJECT_API UEnum* Z_Construct_UEnum_MB_Project_EMetalType();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Enum EMetalType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetalType;
static UEnum* EMetalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMetalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMetalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MB_Project_EMetalType, (UObject*)Z_Construct_UPackage__Script_MB_Project(), TEXT("EMetalType"));
	}
	return Z_Registration_Info_UEnum_EMetalType.OuterSingleton;
}
template<> MB_PROJECT_API UEnum* StaticEnum<EMetalType>()
{
	return EMetalType_StaticEnum();
}
struct Z_Construct_UEnum_MB_Project_EMetalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ALL ALLOMANTIC METALS THAT ACT AS MANA FOR HABILITIES HAVE THIS CLASS AS PARENT\n" },
#endif
		{ "IRON.DisplayName", "Iron" },
		{ "IRON.Name", "EMetalType::IRON" },
		{ "ModuleRelativePath", "UAllomanticMetal.h" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "EMetalType::NONE" },
		{ "PEWTER.DisplayName", "Pewter" },
		{ "PEWTER.Name", "EMetalType::PEWTER" },
		{ "STEEL.DisplayName", "Steel" },
		{ "STEEL.Name", "EMetalType::STEEL" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ALL ALLOMANTIC METALS THAT ACT AS MANA FOR HABILITIES HAVE THIS CLASS AS PARENT" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMetalType::NONE", (int64)EMetalType::NONE },
		{ "EMetalType::PEWTER", (int64)EMetalType::PEWTER },
		{ "EMetalType::IRON", (int64)EMetalType::IRON },
		{ "EMetalType::STEEL", (int64)EMetalType::STEEL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MB_Project_EMetalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MB_Project,
	nullptr,
	"EMetalType",
	"EMetalType",
	Z_Construct_UEnum_MB_Project_EMetalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MB_Project_EMetalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MB_Project_EMetalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MB_Project_EMetalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MB_Project_EMetalType()
{
	if (!Z_Registration_Info_UEnum_EMetalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetalType.InnerSingleton, Z_Construct_UEnum_MB_Project_EMetalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMetalType.InnerSingleton;
}
// End Enum EMetalType

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "Category", "AllomanticMetal" },
		{ "ModuleRelativePath", "UAllomanticMetal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metalReserves_MetaData[] = {
		{ "Category", "AllomanticMetal" },
		{ "ModuleRelativePath", "UAllomanticMetal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_metalReserves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomanticMetal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomanticMetal, type), Z_Construct_UEnum_MB_Project_EMetalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) }; // 2352039017
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_metalReserves = { "metalReserves", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomanticMetal, metalReserves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metalReserves_MetaData), NewProp_metalReserves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAllomanticMetal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomanticMetal_Statics::NewProp_metalReserves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticMetal_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UAllomanticMetal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticMetal_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMetalType_StaticEnum, TEXT("EMetalType"), &Z_Registration_Info_UEnum_EMetalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2352039017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomanticMetal, UAllomanticMetal::StaticClass, TEXT("UAllomanticMetal"), &Z_Registration_Info_UClass_UAllomanticMetal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomanticMetal), 1863785276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_3966366056(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

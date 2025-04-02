// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/ConsumptionDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsumptionDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MB_PROJECT_API UClass* Z_Construct_UClass_UConsumptionDataAsset();
MB_PROJECT_API UClass* Z_Construct_UClass_UConsumptionDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UConsumptionDataAsset Function GetValueAtTime
struct Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics
{
	struct ConsumptionDataAsset_eventGetValueAtTime_Parms
	{
		float Time;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ConsumptionDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsumptionDataAsset_eventGetValueAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ConsumptionDataAsset_eventGetValueAtTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsumptionDataAsset, nullptr, "GetValueAtTime", nullptr, nullptr, Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::ConsumptionDataAsset_eventGetValueAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::ConsumptionDataAsset_eventGetValueAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UConsumptionDataAsset::execGetValueAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValueAtTime(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UConsumptionDataAsset Function GetValueAtTime

// Begin Class UConsumptionDataAsset
void UConsumptionDataAsset::StaticRegisterNativesUConsumptionDataAsset()
{
	UClass* Class = UConsumptionDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValueAtTime", &UConsumptionDataAsset::execGetValueAtTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConsumptionDataAsset);
UClass* Z_Construct_UClass_UConsumptionDataAsset_NoRegister()
{
	return UConsumptionDataAsset::StaticClass();
}
struct Z_Construct_UClass_UConsumptionDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConsumptionDataAsset.h" },
		{ "ModuleRelativePath", "ConsumptionDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_consumptionOverTime_MetaData[] = {
		{ "Category", "ConsumptionDataAsset" },
		{ "ModuleRelativePath", "ConsumptionDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_consumptionOverTime_ValueProp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_consumptionOverTime_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_consumptionOverTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsumptionDataAsset_GetValueAtTime, "GetValueAtTime" }, // 3334729047
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsumptionDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime_ValueProp = { "consumptionOverTime", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime_Key_KeyProp = { "consumptionOverTime_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime = { "consumptionOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConsumptionDataAsset, consumptionOverTime), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_consumptionOverTime_MetaData), NewProp_consumptionOverTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsumptionDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsumptionDataAsset_Statics::NewProp_consumptionOverTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsumptionDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConsumptionDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConsumptionDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConsumptionDataAsset_Statics::ClassParams = {
	&UConsumptionDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UConsumptionDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UConsumptionDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConsumptionDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UConsumptionDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConsumptionDataAsset()
{
	if (!Z_Registration_Info_UClass_UConsumptionDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConsumptionDataAsset.OuterSingleton, Z_Construct_UClass_UConsumptionDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConsumptionDataAsset.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UConsumptionDataAsset>()
{
	return UConsumptionDataAsset::StaticClass();
}
UConsumptionDataAsset::UConsumptionDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConsumptionDataAsset);
UConsumptionDataAsset::~UConsumptionDataAsset() {}
// End Class UConsumptionDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConsumptionDataAsset, UConsumptionDataAsset::StaticClass, TEXT("UConsumptionDataAsset"), &Z_Registration_Info_UClass_UConsumptionDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConsumptionDataAsset), 2849230070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_216700875(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/AllomancyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAllomancyComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MB_PROJECT_API UClass* Z_Construct_UClass_AMetal_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbility_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal_NoRegister();
MB_PROJECT_API UEnum* Z_Construct_UEnum_MB_Project_EMetalType();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UAllomancyComponent Function getAllomanticMetal
struct Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics
{
	struct AllomancyComponent_eventgetAllomanticMetal_Parms
	{
		EMetalType metalType_;
		UAllomanticMetal* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//for blueprint calls, public use, gameplay programming\n//UFUNCTION(BlueprintCallable,Category = \"Allomancy\")\n//void consumeAllomanticMetal(UAllomanticMetal *metal,int32 ammount, FFloatCurve* curve);\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for blueprint calls, public use, gameplay programming\nUFUNCTION(BlueprintCallable,Category = \"Allomancy\")\nvoid consumeAllomanticMetal(UAllomanticMetal *metal,int32 ammount, FFloatCurve* curve);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_metalType__Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_metalType_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_metalType__Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_metalType_ = { "metalType_", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventgetAllomanticMetal_Parms, metalType_), Z_Construct_UEnum_MB_Project_EMetalType, METADATA_PARAMS(0, nullptr) }; // 2352039017
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventgetAllomanticMetal_Parms, ReturnValue), Z_Construct_UClass_UAllomanticMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_metalType__Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_metalType_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "getAllomanticMetal", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::AllomancyComponent_eventgetAllomanticMetal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::AllomancyComponent_eventgetAllomanticMetal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execgetAllomanticMetal)
{
	P_GET_ENUM(EMetalType,Z_Param_metalType_);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAllomanticMetal**)Z_Param__Result=P_THIS->getAllomanticMetal(EMetalType(Z_Param_metalType_));
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function getAllomanticMetal

// Begin Class UAllomancyComponent Function sortSceneMetals
struct Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics
{
	struct AllomancyComponent_eventsortSceneMetals_Parms
	{
		TArray<AMetal*> Metals;
		TArray<AMetal*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Metals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_Metals_Inner = { "Metals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_Metals = { "Metals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventsortSceneMetals_Parms, Metals), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventsortSceneMetals_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_Metals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_Metals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "sortSceneMetals", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::AllomancyComponent_eventsortSceneMetals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::AllomancyComponent_eventsortSceneMetals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execsortSceneMetals)
{
	P_GET_TARRAY_REF(AMetal*,Z_Param_Out_Metals);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMetal*>*)Z_Param__Result=P_THIS->sortSceneMetals(Z_Param_Out_Metals);
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function sortSceneMetals

// Begin Class UAllomancyComponent
void UAllomancyComponent::StaticRegisterNativesUAllomancyComponent()
{
	UClass* Class = UAllomancyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getAllomanticMetal", &UAllomancyComponent::execgetAllomanticMetal },
		{ "sortSceneMetals", &UAllomancyComponent::execsortSceneMetals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllomancyComponent);
UClass* Z_Construct_UClass_UAllomancyComponent_NoRegister()
{
	return UAllomancyComponent::StaticClass();
}
struct Z_Construct_UClass_UAllomancyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AllomancyComponent.h" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetalSelectionCameraAngle_MetaData[] = {
		{ "Category", "PULL" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metalInteractDistance_MetaData[] = {
		{ "Category", "PULL" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Pull vars\n" },
#endif
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pull vars" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilities_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllomanticMetals_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MetalSelectionCameraAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_metalInteractDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllomanticMetals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllomanticMetals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllomanticMetals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal, "getAllomanticMetal" }, // 863019672
		{ &Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals, "sortSceneMetals" }, // 4010669535
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomancyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_MetalSelectionCameraAngle = { "MetalSelectionCameraAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, MetalSelectionCameraAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetalSelectionCameraAngle_MetaData), NewProp_MetalSelectionCameraAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_metalInteractDistance = { "metalInteractDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, metalInteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metalInteractDistance_MetaData), NewProp_metalInteractDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_ValueProp = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAllomanticAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_Key_KeyProp = { "ActiveAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, ActiveAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAbilities_MetaData), NewProp_ActiveAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp = { "AllomanticMetals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAllomanticMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, AllomanticMetals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllomanticMetals_MetaData), NewProp_AllomanticMetals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_MetalSelectionCameraAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_metalInteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAllomancyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllomancyComponent_Statics::ClassParams = {
	&UAllomancyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllomancyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllomancyComponent()
{
	if (!Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton, Z_Construct_UClass_UAllomancyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UAllomancyComponent>()
{
	return UAllomancyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllomancyComponent);
UAllomancyComponent::~UAllomancyComponent() {}
// End Class UAllomancyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomancyComponent, UAllomancyComponent::StaticClass, TEXT("UAllomancyComponent"), &Z_Registration_Info_UClass_UAllomancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomancyComponent), 324632063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_376106381(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

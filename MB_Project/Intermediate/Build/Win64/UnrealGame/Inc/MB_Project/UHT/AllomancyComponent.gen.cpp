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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MB_PROJECT_API UClass* Z_Construct_UClass_AMetal_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbilityBase_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal_NoRegister();
MB_PROJECT_API UEnum* Z_Construct_UEnum_MB_Project_EMetalType();
MB_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInput();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin ScriptStruct FGameplayInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayInput;
class UScriptStruct* FGameplayInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayInput, (UObject*)Z_Construct_UPackage__Script_MB_Project(), TEXT("GameplayInput"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayInput.OuterSingleton;
}
template<> MB_PROJECT_API UScriptStruct* StaticStruct<FGameplayInput>()
{
	return FGameplayInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTriggered_MetaData[] = {
		{ "Category", "GameplayInput" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "Category", "GameplayInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//if button is pressed\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if button is pressed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoystickValue_MetaData[] = {
		{ "Category", "GameplayInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Press float value\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Press float value" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTriggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JoystickValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_bIsTriggered_SetBit(void* Obj)
{
	((FGameplayInput*)Obj)->bIsTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_bIsTriggered = { "bIsTriggered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameplayInput), &Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_bIsTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTriggered_MetaData), NewProp_bIsTriggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInput, TriggerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_JoystickValue = { "JoystickValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayInput, JoystickValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoystickValue_MetaData), NewProp_JoystickValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_bIsTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_TriggerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayInput_Statics::NewProp_JoystickValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
	nullptr,
	&NewStructOps,
	"GameplayInput",
	Z_Construct_UScriptStruct_FGameplayInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInput_Statics::PropPointers),
	sizeof(FGameplayInput),
	alignof(FGameplayInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayInput()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayInput.InnerSingleton, Z_Construct_UScriptStruct_FGameplayInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayInput.InnerSingleton;
}
// End ScriptStruct FGameplayInput

// Begin Class UAllomancyComponent Function ActivateAbility
struct Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics
{
	struct AllomancyComponent_eventActivateAbility_Parms
	{
		TSubclassOf<UAllomanticAbilityBase> AbilityClass;
		TSubclassOf<AActor> target;
		TSubclassOf<ACharacter> AbilityOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAMEPLAY FUNCTIONS\n" },
#endif
		{ "CPP_Default_AbilityOwner", "None" },
		{ "CPP_Default_target", "None" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAMEPLAY FUNCTIONS" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventActivateAbility_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAllomanticAbilityBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventActivateAbility_Parms, target), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventActivateAbility_Parms, AbilityOwner), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::NewProp_AbilityOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "ActivateAbility", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::AllomancyComponent_eventActivateAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::AllomancyComponent_eventActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_ActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_ActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execActivateAbility)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_OBJECT(UClass,Z_Param_target);
	P_GET_OBJECT(UClass,Z_Param_AbilityOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateAbility(Z_Param_AbilityClass,Z_Param_target,Z_Param_AbilityOwner);
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function ActivateAbility

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

// Begin Class UAllomancyComponent Function PullTriggerInput
struct Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics
{
	struct AllomancyComponent_eventPullTriggerInput_Parms
	{
		FGameplayInput GInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pull" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ABILITY INPUT HANDLING\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ABILITY INPUT HANDLING" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::NewProp_GInput = { "GInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventPullTriggerInput_Parms, GInput), Z_Construct_UScriptStruct_FGameplayInput, METADATA_PARAMS(0, nullptr) }; // 3277624820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::NewProp_GInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "PullTriggerInput", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::AllomancyComponent_eventPullTriggerInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::AllomancyComponent_eventPullTriggerInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execPullTriggerInput)
{
	P_GET_STRUCT(FGameplayInput,Z_Param_GInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PullTriggerInput(Z_Param_GInput);
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function PullTriggerInput

// Begin Class UAllomancyComponent Function SelectMetal
struct Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics
{
	struct AllomancyComponent_eventSelectMetal_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AllomancyComponent_eventSelectMetal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AllomancyComponent_eventSelectMetal_Parms), &Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "SelectMetal", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::AllomancyComponent_eventSelectMetal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::AllomancyComponent_eventSelectMetal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_SelectMetal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_SelectMetal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execSelectMetal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectMetal();
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function SelectMetal

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metals_MetaData[] = {
		{ "NativeConst", "" },
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
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals_Statics::NewProp_Metals = { "Metals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventsortSceneMetals_Parms, Metals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metals_MetaData), NewProp_Metals_MetaData) };
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
		{ "ActivateAbility", &UAllomancyComponent::execActivateAbility },
		{ "getAllomanticMetal", &UAllomancyComponent::execgetAllomanticMetal },
		{ "PullTriggerInput", &UAllomancyComponent::execPullTriggerInput },
		{ "SelectMetal", &UAllomancyComponent::execSelectMetal },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAMEPLAY VARS\n" },
#endif
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAMEPLAY VARS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metalInteractDistance_MetaData[] = {
		{ "Category", "PULL" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllomanticMetals_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectableMetals_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenteredMetal_MetaData[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the valid most centered metal that is valid\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the valid most centered metal that is valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedMetal_MetaData[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the valid most centered metal that is selected by player input\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the valid most centered metal that is selected by player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MetalSelectionCameraAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_metalInteractDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllomanticMetals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllomanticMetals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllomanticMetals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectableMetals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectableMetals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CenteredMetal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMetal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAllomancyComponent_ActivateAbility, "ActivateAbility" }, // 4069059661
		{ &Z_Construct_UFunction_UAllomancyComponent_getAllomanticMetal, "getAllomanticMetal" }, // 863019672
		{ &Z_Construct_UFunction_UAllomancyComponent_PullTriggerInput, "PullTriggerInput" }, // 4265356845
		{ &Z_Construct_UFunction_UAllomancyComponent_SelectMetal, "SelectMetal" }, // 2173922290
		{ &Z_Construct_UFunction_UAllomancyComponent_sortSceneMetals, "sortSceneMetals" }, // 3250050832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomancyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_MetalSelectionCameraAngle = { "MetalSelectionCameraAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, MetalSelectionCameraAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetalSelectionCameraAngle_MetaData), NewProp_MetalSelectionCameraAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_metalInteractDistance = { "metalInteractDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, metalInteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metalInteractDistance_MetaData), NewProp_metalInteractDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAllomanticAbilityBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp = { "AllomanticMetals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAllomanticMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, AllomanticMetals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllomanticMetals_MetaData), NewProp_AllomanticMetals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectableMetals_Inner = { "SelectableMetals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectableMetals = { "SelectableMetals", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, SelectableMetals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectableMetals_MetaData), NewProp_SelectableMetals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_CenteredMetal = { "CenteredMetal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, CenteredMetal), Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenteredMetal_MetaData), NewProp_CenteredMetal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectedMetal = { "SelectedMetal", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, SelectedMetal), Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedMetal_MetaData), NewProp_SelectedMetal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_MetalSelectionCameraAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_metalInteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectableMetals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectableMetals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_CenteredMetal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_SelectedMetal,
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayInput::StaticStruct, Z_Construct_UScriptStruct_FGameplayInput_Statics::NewStructOps, TEXT("GameplayInput"), &Z_Registration_Info_UScriptStruct_GameplayInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayInput), 3277624820U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomancyComponent, UAllomancyComponent::StaticClass, TEXT("UAllomancyComponent"), &Z_Registration_Info_UClass_UAllomancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomancyComponent), 907792947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_2276229509(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

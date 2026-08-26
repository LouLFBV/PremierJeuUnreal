// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerStateMachineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerStateMachineComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateBase_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerStateMachineComponent Function GetCurrentState ********************
struct Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics
{
	struct PlayerStateMachineComponent_eventGetCurrentState_Parms
	{
		UPlayerStateBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// R\xef\xbf\xbd""cup\xef\xbf\xbdrer l'\xef\xbf\xbdtat actuel\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xef\xbf\xbd""cup\xef\xbf\xbdrer l'\xef\xbf\xbdtat actuel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStateMachineComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerStateMachineComponent, nullptr, "GetCurrentState", Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PlayerStateMachineComponent_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::PlayerStateMachineComponent_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStateMachineComponent::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPlayerStateBase**)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class UPlayerStateMachineComponent Function GetCurrentState **********************

// ********** Begin Class UPlayerStateMachineComponent Function SwitchState ************************
struct Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics
{
	struct PlayerStateMachineComponent_eventSwitchState_Parms
	{
		TSubclassOf<UPlayerStateBase> NewStateClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State Machine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fonction pour changer d'\xef\xbf\xbdtat\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fonction pour changer d'\xef\xbf\xbdtat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewStateClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::NewProp_NewStateClass = { "NewStateClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerStateMachineComponent_eventSwitchState_Parms, NewStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::NewProp_NewStateClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerStateMachineComponent, nullptr, "SwitchState", Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PlayerStateMachineComponent_eventSwitchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::PlayerStateMachineComponent_eventSwitchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerStateMachineComponent::execSwitchState)
{
	P_GET_OBJECT(UClass,Z_Param_NewStateClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchState(Z_Param_NewStateClass);
	P_NATIVE_END;
}
// ********** End Class UPlayerStateMachineComponent Function SwitchState **************************

// ********** Begin Class UPlayerStateMachineComponent *********************************************
void UPlayerStateMachineComponent::StaticRegisterNativesUPlayerStateMachineComponent()
{
	UClass* Class = UPlayerStateMachineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &UPlayerStateMachineComponent::execGetCurrentState },
		{ "SwitchState", &UPlayerStateMachineComponent::execSwitchState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerStateMachineComponent;
UClass* UPlayerStateMachineComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerStateMachineComponent;
	if (!Z_Registration_Info_UClass_UPlayerStateMachineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerStateMachineComponent"),
			Z_Registration_Info_UClass_UPlayerStateMachineComponent.InnerSingleton,
			StaticRegisterNativesUPlayerStateMachineComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPlayerStateMachineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister()
{
	return UPlayerStateMachineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerStateMachineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerStateMachineComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialStateClass_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerStateMachineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InitialStateClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateCache_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StateCache_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StateCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStateMachineComponent_GetCurrentState, "GetCurrentState" }, // 1997430795
		{ &Z_Construct_UFunction_UPlayerStateMachineComponent_SwitchState, "SwitchState" }, // 1326639446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateMachineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_InitialStateClass = { "InitialStateClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateMachineComponent, InitialStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialStateClass_MetaData), NewProp_InitialStateClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateMachineComponent, CurrentState), Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache_ValueProp = { "StateCache", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache_Key_KeyProp = { "StateCache_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerStateBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache = { "StateCache", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateMachineComponent, StateCache), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateCache_MetaData), NewProp_StateCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateMachineComponent, CharacterOwner), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStateMachineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_InitialStateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_StateCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateMachineComponent_Statics::NewProp_CharacterOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateMachineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerStateMachineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateMachineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateMachineComponent_Statics::ClassParams = {
	&UPlayerStateMachineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerStateMachineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateMachineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateMachineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStateMachineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerStateMachineComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerStateMachineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStateMachineComponent.OuterSingleton, Z_Construct_UClass_UPlayerStateMachineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerStateMachineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateMachineComponent);
UPlayerStateMachineComponent::~UPlayerStateMachineComponent() {}
// ********** End Class UPlayerStateMachineComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStateMachineComponent, UPlayerStateMachineComponent::StaticClass, TEXT("UPlayerStateMachineComponent"), &Z_Registration_Info_UClass_UPlayerStateMachineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStateMachineComponent), 1571419681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h__Script_ProjetUnreal_2999601426(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

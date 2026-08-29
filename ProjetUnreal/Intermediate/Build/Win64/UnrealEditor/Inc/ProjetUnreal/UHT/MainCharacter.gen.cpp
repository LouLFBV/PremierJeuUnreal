// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_AMainCharacter();
PROJETUNREAL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UWalletComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainCharacter Function TogglePause **************************************
struct Z_Construct_UFunction_AMainCharacter_TogglePause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fonction de bascule de la pause\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fonction de bascule de la pause" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_TogglePause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMainCharacter, nullptr, "TogglePause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_TogglePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_TogglePause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMainCharacter_TogglePause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_TogglePause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter::execTogglePause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TogglePause();
	P_NATIVE_END;
}
// ********** End Class AMainCharacter Function TogglePause ****************************************

// ********** Begin Class AMainCharacter ***********************************************************
void AMainCharacter::StaticRegisterNativesAMainCharacter()
{
	UClass* Class = AMainCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TogglePause", &AMainCharacter::execTogglePause },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainCharacter;
UClass* AMainCharacter::GetPrivateStaticClass()
{
	using TClass = AMainCharacter;
	if (!Z_Registration_Info_UClass_AMainCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainCharacter"),
			Z_Registration_Info_UClass_AMainCharacter.InnerSingleton,
			StaticRegisterNativesAMainCharacter,
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
	return Z_Registration_Info_UClass_AMainCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
{
	return AMainCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacter.h" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action de Saut */" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action de Saut" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Classe du Widget de pause \xef\xbf\xbd assigner dans le Blueprint\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classe du Widget de pause \xef\xbf\xbd assigner dans le Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Action Enhanced Input (ex: touche Echap ou P)\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action Enhanced Input (ex: touche Echap ou P)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bras de la cam\xef\xbf\xbdra (SpringArm) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bras de la cam\xef\xbf\xbdra (SpringArm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cam\xef\xbf\xbdra TPS */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cam\xef\xbf\xbdra TPS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** State Machine */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State Machine" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enhanced Input assets */" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalletComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WalletComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenuInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_TogglePause, "TogglePause" }, // 2397369169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseMenuClass = { "PauseMenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PauseMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuClass_MetaData), NewProp_PauseMenuClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseAction_MetaData), NewProp_PauseAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_StateMachineComponent = { "StateMachineComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, StateMachineComponent), Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineComponent_MetaData), NewProp_StateMachineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalletComponent = { "WalletComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, WalletComponent), Z_Construct_UClass_UWalletComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalletComponent_MetaData), NewProp_WalletComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseMenuInstance = { "PauseMenuInstance", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter, PauseMenuInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuInstance_MetaData), NewProp_PauseMenuInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_StateMachineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_WalletComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp_PauseMenuInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
	&AMainCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter()
{
	if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
AMainCharacter::~AMainCharacter() {}
// ********** End Class AMainCharacter *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainCharacter_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 721612659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainCharacter_h__Script_ProjetUnreal_4294413864(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainCharacter_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainCharacter_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

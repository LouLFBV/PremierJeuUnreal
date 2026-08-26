// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerStateBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerStateBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PROJETUNREAL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateBase();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateBase_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerStateBase *********************************************************
void UPlayerStateBase::StaticRegisterNativesUPlayerStateBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerStateBase;
UClass* UPlayerStateBase::GetPrivateStaticClass()
{
	using TClass = UPlayerStateBase;
	if (!Z_Registration_Info_UClass_UPlayerStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerStateBase"),
			Z_Registration_Info_UClass_UPlayerStateBase.InnerSingleton,
			StaticRegisterNativesUPlayerStateBase,
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
	return Z_Registration_Info_UClass_UPlayerStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerStateBase_NoRegister()
{
	return UPlayerStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/PlayerStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMachineOwner_MetaData[] = {
		{ "Category", "State Machine" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMachineOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateBase_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateBase, CharacterOwner), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterOwner_MetaData), NewProp_CharacterOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerStateBase_Statics::NewProp_StateMachineOwner = { "StateMachineOwner", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerStateBase, StateMachineOwner), Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMachineOwner_MetaData), NewProp_StateMachineOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateBase_Statics::NewProp_CharacterOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerStateBase_Statics::NewProp_StateMachineOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStateBase_Statics::ClassParams = {
	&UPlayerStateBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerStateBase()
{
	if (!Z_Registration_Info_UClass_UPlayerStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerStateBase.OuterSingleton, Z_Construct_UClass_UPlayerStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerStateBase.OuterSingleton;
}
UPlayerStateBase::UPlayerStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStateBase);
UPlayerStateBase::~UPlayerStateBase() {}
// ********** End Class UPlayerStateBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerStateBase, UPlayerStateBase::StaticClass, TEXT("UPlayerStateBase"), &Z_Registration_Info_UClass_UPlayerStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerStateBase), 3978120251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h__Script_ProjetUnreal_2846503954(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

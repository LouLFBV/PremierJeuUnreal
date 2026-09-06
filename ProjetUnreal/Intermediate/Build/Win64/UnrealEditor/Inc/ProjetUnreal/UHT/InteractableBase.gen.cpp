// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractableBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase();
PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractableBase ********************************************************
void AInteractableBase::StaticRegisterNativesAInteractableBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractableBase;
UClass* AInteractableBase::GetPrivateStaticClass()
{
	using TClass = AInteractableBase;
	if (!Z_Registration_Info_UClass_AInteractableBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractableBase"),
			Z_Registration_Info_UClass_AInteractableBase.InnerSingleton,
			StaticRegisterNativesAInteractableBase,
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
	return Z_Registration_Info_UClass_AInteractableBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractableBase_NoRegister()
{
	return AInteractableBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractableBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableBase.h" },
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractWidget_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicUIPosition_MetaData[] = {
		{ "Category", "Interaction|UI" },
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromObject_MetaData[] = {
		{ "Category", "Interaction|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- NOUVEAU : Param\xef\xbf\xbdtres de positionnement de l'UI ---\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- NOUVEAU : Param\xef\xbf\xbdtres de positionnement de l'UI ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Interaction|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdquivalent de ton distanceFromObject\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdquivalent de ton distanceFromObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// R\xef\xbf\xbd""f\xef\xbf\xbdrence au joueur qui nous regarde actuellement\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xef\xbf\xbd""f\xef\xbf\xbdrence au joueur qui nous regarde actuellement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractWidget;
	static void NewProp_bIsInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
	static void NewProp_bUseDynamicUIPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicUIPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_DefaultRoot = { "DefaultRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, DefaultRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRoot_MetaData), NewProp_DefaultRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractWidget = { "InteractWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, InteractWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractWidget_MetaData), NewProp_InteractWidget_MetaData) };
void Z_Construct_UClass_AInteractableBase_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
{
	((AInteractableBase*)Obj)->bIsInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_bIsInteractable = { "bIsInteractable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableBase), &Z_Construct_UClass_AInteractableBase_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInteractable_MetaData), NewProp_bIsInteractable_MetaData) };
void Z_Construct_UClass_AInteractableBase_Statics::NewProp_bUseDynamicUIPosition_SetBit(void* Obj)
{
	((AInteractableBase*)Obj)->bUseDynamicUIPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_bUseDynamicUIPosition = { "bUseDynamicUIPosition", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AInteractableBase), &Z_Construct_UClass_AInteractableBase_Statics::NewProp_bUseDynamicUIPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDynamicUIPosition_MetaData), NewProp_bUseDynamicUIPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_DistanceFromObject = { "DistanceFromObject", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, DistanceFromObject), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFromObject_MetaData), NewProp_DistanceFromObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightOffset_MetaData), NewProp_HeightOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableBase_Statics::NewProp_CurrentPlayer = { "CurrentPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableBase, CurrentPlayer), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayer_MetaData), NewProp_CurrentPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_DefaultRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_InteractWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_bIsInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_bUseDynamicUIPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_DistanceFromObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableBase_Statics::NewProp_CurrentPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AInteractableBase, IInteractable), false },  // 2664807024
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableBase_Statics::ClassParams = {
	&AInteractableBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractableBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableBase()
{
	if (!Z_Registration_Info_UClass_AInteractableBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableBase.OuterSingleton, Z_Construct_UClass_AInteractableBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableBase);
AInteractableBase::~AInteractableBase() {}
// ********** End Class AInteractableBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableBase, AInteractableBase::StaticClass, TEXT("AInteractableBase"), &Z_Registration_Info_UClass_AInteractableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableBase), 838010789U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h__Script_ProjetUnreal_2540580708(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerInteractorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerInteractorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerInteractorComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerInteractorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerInteractorComponent ***********************************************
void UPlayerInteractorComponent::StaticRegisterNativesUPlayerInteractorComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerInteractorComponent;
UClass* UPlayerInteractorComponent::GetPrivateStaticClass()
{
	using TClass = UPlayerInteractorComponent;
	if (!Z_Registration_Info_UClass_UPlayerInteractorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerInteractorComponent"),
			Z_Registration_Info_UClass_UPlayerInteractorComponent.InnerSingleton,
			StaticRegisterNativesUPlayerInteractorComponent,
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
	return Z_Registration_Info_UClass_UPlayerInteractorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerInteractorComponent_NoRegister()
{
	return UPlayerInteractorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerInteractorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerInteractorComponent.h" },
		{ "ModuleRelativePath", "Public/PlayerInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractRange_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/PlayerInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractRadius_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 3 m\xef\xbf\xbdtres\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3 m\xef\xbf\xbdtres" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Le type d'objets \xef\xbf\xbd d\xef\xbf\xbdtecter (\xef\xbf\xbdquivalent de ton LayerMask interactableMask)\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Le type d'objets \xef\xbf\xbd d\xef\xbf\xbdtecter (\xef\xbf\xbdquivalent de ton LayerMask interactableMask)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_InteractRange = { "InteractRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractorComponent, InteractRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractRange_MetaData), NewProp_InteractRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_InteractRadius = { "InteractRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractorComponent, InteractRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractRadius_MetaData), NewProp_InteractRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerInteractorComponent, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInteractorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_InteractRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_InteractRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInteractorComponent_Statics::NewProp_CollisionChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerInteractorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInteractorComponent_Statics::ClassParams = {
	&UPlayerInteractorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerInteractorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInteractorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerInteractorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerInteractorComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInteractorComponent.OuterSingleton, Z_Construct_UClass_UPlayerInteractorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerInteractorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInteractorComponent);
UPlayerInteractorComponent::~UPlayerInteractorComponent() {}
// ********** End Class UPlayerInteractorComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerInteractorComponent_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInteractorComponent, UPlayerInteractorComponent::StaticClass, TEXT("UPlayerInteractorComponent"), &Z_Registration_Info_UClass_UPlayerInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInteractorComponent), 4017841729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerInteractorComponent_h__Script_ProjetUnreal_4283410209(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerInteractorComponent_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerInteractorComponent_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PickupItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePickupItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase();
PROJETUNREAL_API UClass* Z_Construct_UClass_APickupItem();
PROJETUNREAL_API UClass* Z_Construct_UClass_APickupItem_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APickupItem **************************************************************
void APickupItem::StaticRegisterNativesAPickupItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APickupItem;
UClass* APickupItem::GetPrivateStaticClass()
{
	using TClass = APickupItem;
	if (!Z_Registration_Info_UClass_APickupItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PickupItem"),
			Z_Registration_Info_UClass_APickupItem.InnerSingleton,
			StaticRegisterNativesAPickupItem,
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
	return Z_Registration_Info_UClass_APickupItem.InnerSingleton;
}
UClass* Z_Construct_UClass_APickupItem_NoRegister()
{
	return APickupItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickupItem.h" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Le DataAsset contenant les infos de cet objet pr\xef\xbf\xbd""cis\n" },
#endif
		{ "ModuleRelativePath", "Public/PickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Le DataAsset contenant les infos de cet objet pr\xef\xbf\xbd""cis" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/PickupItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, ItemDataAsset), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataAsset_MetaData), NewProp_ItemDataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_ItemDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInteractableBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupItem_Statics::ClassParams = {
	&APickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APickupItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupItem()
{
	if (!Z_Registration_Info_UClass_APickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupItem.OuterSingleton, Z_Construct_UClass_APickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupItem);
APickupItem::~APickupItem() {}
// ********** End Class APickupItem ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PickupItem_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupItem, APickupItem::StaticClass, TEXT("APickupItem"), &Z_Registration_Info_UClass_APickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupItem), 4158275920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PickupItem_h__Script_ProjetUnreal_3732403543(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PickupItem_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PickupItem_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryTypes() {}

// ********** Begin Cross Module References ********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
PROJETUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInventorySlot ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInventorySlot;
class UScriptStruct* FInventorySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInventorySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInventorySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlot, (UObject*)Z_Construct_UPackage__Script_ProjetUnreal(), TEXT("InventorySlot"));
	}
	return Z_Registration_Info_UScriptStruct_FInventorySlot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Structure repr\xef\xbf\xbdsentant le contenu d'une case d'inventaire\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure repr\xef\xbf\xbdsentant le contenu d'une case d'inventaire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Public/InventoryTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
	nullptr,
	&NewStructOps,
	"InventorySlot",
	Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers),
	sizeof(FInventorySlot),
	alignof(FInventorySlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot()
{
	if (!Z_Registration_Info_UScriptStruct_FInventorySlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInventorySlot.InnerSingleton, Z_Construct_UScriptStruct_FInventorySlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInventorySlot.InnerSingleton;
}
// ********** End ScriptStruct FInventorySlot ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryTypes_h__Script_ProjetUnreal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventorySlot::StaticStruct, Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps, TEXT("InventorySlot"), &Z_Registration_Info_UScriptStruct_FInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlot), 3066448521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryTypes_h__Script_ProjetUnreal_145368862(TEXT("/Script/ProjetUnreal"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryTypes_h__Script_ProjetUnreal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryTypes_h__Script_ProjetUnreal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

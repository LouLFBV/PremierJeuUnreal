// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
PROJETUNREAL_API UEnum* Z_Construct_UEnum_ProjetUnreal_EItemType();
PROJETUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjetUnreal_EItemType, (UObject*)Z_Construct_UPackage__Script_ProjetUnreal(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> PROJETUNREAL_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_ProjetUnreal_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Types d'objets possibles\n" },
#endif
		{ "Consumable.DisplayName", "Consommable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "Equipment.DisplayName", "\xef\xbf\xbdquipement" },
		{ "Equipment.Name", "EItemType::Equipment" },
		{ "Key.DisplayName", "Cl\xef\xbf\xbd" },
		{ "Key.Name", "EItemType::Key" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
		{ "Quest.DisplayName", "Qu\xef\xbf\xbdte" },
		{ "Quest.Name", "EItemType::Quest" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Types d'objets possibles" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Equipment", (int64)EItemType::Equipment },
		{ "EItemType::Key", (int64)EItemType::Key },
		{ "EItemType::Quest", (int64)EItemType::Quest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjetUnreal,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjetUnreal_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_ProjetUnreal_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// ********** End Enum EItemType *******************************************************************

// ********** Begin ScriptStruct FItemData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_ProjetUnreal(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_FItemData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Les donn\xef\xbf\xbd""es brutes d'un objet\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Les donn\xef\xbf\xbd""es brutes d'un objet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "World" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStack_MetaData[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_ProjetUnreal_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1731271184
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
void Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((FItemData*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemData), &Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStack = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, MaxStack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStack_MetaData), NewProp_MaxStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WorldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_bIsStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MaxStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
	nullptr,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemData.InnerSingleton;
}
// ********** End ScriptStruct FItemData ***********************************************************

// ********** Begin Class UItemDataAsset ***********************************************************
void UItemDataAsset::StaticRegisterNativesUItemDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemDataAsset;
UClass* UItemDataAsset::GetPrivateStaticClass()
{
	using TClass = UItemDataAsset;
	if (!Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemDataAsset"),
			Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton,
			StaticRegisterNativesUItemDataAsset,
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
	return Z_Registration_Info_UClass_UItemDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemDataAsset_NoRegister()
{
	return UItemDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Le DataAsset : le conteneur qu'on va cr\xef\xbf\xbd""er dans l'\xef\xbf\xbd""diteur\n" },
#endif
		{ "IncludePath", "ItemData.h" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Le DataAsset : le conteneur qu'on va cr\xef\xbf\xbd""er dans l'\xef\xbf\xbd""diteur" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDataAsset, ItemData), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) }; // 2321962657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDataAsset_Statics::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDataAsset_Statics::ClassParams = {
	&UItemDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDataAsset()
{
	if (!Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton, Z_Construct_UClass_UItemDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDataAsset.OuterSingleton;
}
UItemDataAsset::UItemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDataAsset);
UItemDataAsset::~UItemDataAsset() {}
// ********** End Class UItemDataAsset *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1731271184U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_FItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 2321962657U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDataAsset, UItemDataAsset::StaticClass, TEXT("UItemDataAsset"), &Z_Registration_Info_UClass_UItemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDataAsset), 2372720818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_94427592(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_ItemData_h__Script_ProjetUnreal_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

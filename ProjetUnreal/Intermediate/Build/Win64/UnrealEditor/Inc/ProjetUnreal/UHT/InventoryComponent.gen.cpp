// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature();
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
		{ "Comment", "// Structure repr\xef\xbf\xbdsentant un emplacement (Slot) dans l'inventaire\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure repr\xef\xbf\xbdsentant un emplacement (Slot) dans l'inventaire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataAsset_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemDataAsset = { "ItemDataAsset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, ItemDataAsset), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataAsset_MetaData), NewProp_ItemDataAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySlot, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemDataAsset,
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

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
struct Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xef\xbf\xbdl\xef\xbf\xbdgu\xef\xbf\xbd pour pr\xef\xbf\xbdvenir l'UI (HUD / Widget Inventaire) d\xef\xbf\xbds que le contenu change\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xef\xbf\xbdl\xef\xbf\xbdgu\xef\xbf\xbd pour pr\xef\xbf\xbdvenir l'UI (HUD / Widget Inventaire) d\xef\xbf\xbds que le contenu change" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjetUnreal, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent Function AddItem *************************************
struct Z_Construct_UFunction_UInventoryComponent_AddItem_Statics
{
	struct InventoryComponent_eventAddItem_Parms
	{
		UItemDataAsset* ItemData;
		int32 QuantityToAdd;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ajoute un objet dans l'inventaire (gestion de la capabilit\xef\xbf\xbd et du stacking)\n" },
#endif
		{ "CPP_Default_QuantityToAdd", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ajoute un objet dans l'inventaire (gestion de la capabilit\xef\xbf\xbd et du stacking)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuantityToAdd;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_QuantityToAdd = { "QuantityToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, QuantityToAdd), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_QuantityToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItem", Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::InventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItem)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_QuantityToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_ItemData,Z_Param_QuantityToAdd);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function AddItem ***************************************

// ********** Begin Class UInventoryComponent Function GetItemQuantity *****************************
struct Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics
{
	struct InventoryComponent_eventGetItemQuantity_Parms
	{
		UItemDataAsset* ItemData;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Obtient le nombre total d'exemplaires d'un objet\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obtient le nombre total d'exemplaires d'un objet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemQuantity_Parms, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemQuantity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemQuantity", Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::InventoryComponent_eventGetItemQuantity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::InventoryComponent_eventGetItemQuantity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemQuantity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemQuantity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemQuantity)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemQuantity(Z_Param_ItemData);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function GetItemQuantity *******************************

// ********** Begin Class UInventoryComponent Function GetSlots ************************************
struct Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics
{
	struct InventoryComponent_eventGetSlots_Parms
	{
		TArray<FInventorySlot> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Renvoie la liste compl\xef\xbf\xbdte des slots de l'inventaire\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Renvoie la liste compl\xef\xbf\xbdte des slots de l'inventaire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 1398786199
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1398786199
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetSlots", Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::InventoryComponent_eventGetSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::InventoryComponent_eventGetSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventorySlot>*)Z_Param__Result=P_THIS->GetSlots();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function GetSlots **************************************

// ********** Begin Class UInventoryComponent Function HasItem *************************************
struct Z_Construct_UFunction_UInventoryComponent_HasItem_Statics
{
	struct InventoryComponent_eventHasItem_Parms
	{
		UItemDataAsset* ItemData;
		int32 RequiredQuantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// V\xef\xbf\xbdrifie si l'inventaire poss\xef\xbf\xbd""de au moins X exemplaires d'un objet\n" },
#endif
		{ "CPP_Default_RequiredQuantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "V\xef\xbf\xbdrifie si l'inventaire poss\xef\xbf\xbd""de au moins X exemplaires d'un objet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredQuantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHasItem_Parms, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_RequiredQuantity = { "RequiredQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHasItem_Parms, RequiredQuantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_RequiredQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "HasItem", Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::InventoryComponent_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::InventoryComponent_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execHasItem)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_RequiredQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_ItemData,Z_Param_RequiredQuantity);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function HasItem ***************************************

// ********** Begin Class UInventoryComponent Function RemoveItem **********************************
struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
{
	struct InventoryComponent_eventRemoveItem_Parms
	{
		UItemDataAsset* ItemData;
		int32 QuantityToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retire une quantit\xef\xbf\xbd d'un objet\n" },
#endif
		{ "CPP_Default_QuantityToRemove", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retire une quantit\xef\xbf\xbd d'un objet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuantityToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_QuantityToRemove = { "QuantityToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, QuantityToRemove), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_QuantityToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItem", Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::InventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItem)
{
	P_GET_OBJECT(UItemDataAsset,Z_Param_ItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_QuantityToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_ItemData,Z_Param_QuantityToRemove);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveItem ************************************

// ********** Begin Class UInventoryComponent ******************************************************
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComponent::execAddItem },
		{ "GetItemQuantity", &UInventoryComponent::execGetItemQuantity },
		{ "GetSlots", &UInventoryComponent::execGetSlots },
		{ "HasItem", &UInventoryComponent::execHasItem },
		{ "RemoveItem", &UInventoryComponent::execRemoveItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryComponent;
	if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryComponent"),
			Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUInventoryComponent,
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
	return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdv\xef\xbf\xbdnement d\xef\xbf\xbd""clench\xef\xbf\xbd \xef\xbf\xbd chaque ajout / suppression d'objet\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdv\xef\xbf\xbdnement d\xef\xbf\xbd""clench\xef\xbf\xbd \xef\xbf\xbd chaque ajout / suppression d'objet" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nombre maximal d'emplacements dans l'inventaire\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nombre maximal d'emplacements dans l'inventaire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlots_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tableau contenant les objets\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tableau contenant les objets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventorySlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 2272565095
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemQuantity, "GetItemQuantity" }, // 3124941804
		{ &Z_Construct_UFunction_UInventoryComponent_GetSlots, "GetSlots" }, // 896410557
		{ &Z_Construct_UFunction_UInventoryComponent_HasItem, "HasItem" }, // 2787781137
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 118898554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 3409798608
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots_Inner = { "InventorySlots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 1398786199
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots = { "InventorySlots", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlots_MetaData), NewProp_InventorySlots_MetaData) }; // 1398786199
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventorySlot::StaticStruct, Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps, TEXT("InventorySlot"), &Z_Registration_Info_UScriptStruct_FInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySlot), 1398786199U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 1268244740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_129515049(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

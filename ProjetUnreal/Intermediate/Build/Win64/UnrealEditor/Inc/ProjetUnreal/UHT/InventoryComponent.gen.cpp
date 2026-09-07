// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComponent.h"
#include "InventoryTypes.h"

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

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
struct Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
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
		UItemDataAsset* Item;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ajouter un objet\n" },
#endif
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ajouter un objet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Item), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventAddItem_Parms), &Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItem_Statics::NewProp_Quantity,
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
	P_GET_OBJECT(UItemDataAsset,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function AddItem ***************************************

// ********** Begin Class UInventoryComponent Function HasItem *************************************
struct Z_Construct_UFunction_UInventoryComponent_HasItem_Statics
{
	struct InventoryComponent_eventHasItem_Parms
	{
		UItemDataAsset* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// V\xef\xbf\xbdrifier si un objet est pr\xef\xbf\xbdsent (ex: une cl\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "V\xef\xbf\xbdrifier si un objet est pr\xef\xbf\xbdsent (ex: une cl\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventHasItem_Parms, Item), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_HasItem_Statics::NewProp_Item,
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
	P_GET_OBJECT(UItemDataAsset,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function HasItem ***************************************

// ********** Begin Class UInventoryComponent Function RemoveItem **********************************
struct Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics
{
	struct InventoryComponent_eventRemoveItem_Parms
	{
		UItemDataAsset* Item;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retirer une quantit\xef\xbf\xbd d'un objet pr\xef\xbf\xbd""cis en cherchant dans l'inventaire\n" },
#endif
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retirer une quantit\xef\xbf\xbd d'un objet pr\xef\xbf\xbd""cis en cherchant dans l'inventaire" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItem_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItem_Statics::NewProp_Quantity,
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
	P_GET_OBJECT(UItemDataAsset,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveItem ************************************

// ********** Begin Class UInventoryComponent Function RemoveItemFromSlot **************************
struct Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics
{
	struct InventoryComponent_eventRemoveItemFromSlot_Parms
	{
		int32 SlotIndex;
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retirer un objet d'un emplacement pr\xef\xbf\xbd""cis\n" },
#endif
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retirer un objet d'un emplacement pr\xef\xbf\xbd""cis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemFromSlot_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemFromSlot_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveItemFromSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItemFromSlot_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItemFromSlot", Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::InventoryComponent_eventRemoveItemFromSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::InventoryComponent_eventRemoveItemFromSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItemFromSlot)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemFromSlot(Z_Param_SlotIndex,Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function RemoveItemFromSlot ****************************

// ********** Begin Class UInventoryComponent ******************************************************
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComponent::execAddItem },
		{ "HasItem", &UInventoryComponent::execHasItem },
		{ "RemoveItem", &UInventoryComponent::execRemoveItem },
		{ "RemoveItemFromSlot", &UInventoryComponent::execRemoveItemFromSlot },
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
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Nombre total de cases dans l'inventaire (ex: 20 cases)\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Nombre total de cases dans l'inventaire (ex: 20 cases)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventorySlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InventorySlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItem, "AddItem" }, // 2934023749
		{ &Z_Construct_UFunction_UInventoryComponent_HasItem, "HasItem" }, // 3496659818
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItem, "RemoveItem" }, // 2183845549
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItemFromSlot, "RemoveItemFromSlot" }, // 1225857950
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_ProjetUnreal_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 4023448553
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots_Inner = { "InventorySlots", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(0, nullptr) }; // 3066448521
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySlots = { "InventorySlots", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySlots_MetaData), NewProp_InventorySlots_MetaData) }; // 3066448521
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 4088222296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_2079747705(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

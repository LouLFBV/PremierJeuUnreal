// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySlotWidget.h"
#include "InventoryTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventorySlotWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventorySlotWidget();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature();
PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature();
PROJETUNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSlotHovered ********************************************************
struct Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics
{
	struct _Script_ProjetUnreal_eventOnSlotHovered_Parms
	{
		UItemDataAsset* ItemData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjetUnreal_eventOnSlotHovered_Parms, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjetUnreal, nullptr, "OnSlotHovered__DelegateSignature", Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::_Script_ProjetUnreal_eventOnSlotHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::_Script_ProjetUnreal_eventOnSlotHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSlotHovered_DelegateWrapper(const FMulticastScriptDelegate& OnSlotHovered, UItemDataAsset* ItemData)
{
	struct _Script_ProjetUnreal_eventOnSlotHovered_Parms
	{
		UItemDataAsset* ItemData;
	};
	_Script_ProjetUnreal_eventOnSlotHovered_Parms Parms;
	Parms.ItemData=ItemData;
	OnSlotHovered.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSlotHovered **********************************************************

// ********** Begin Delegate FOnSlotUnhovered ******************************************************
struct Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjetUnreal, nullptr, "OnSlotUnhovered__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSlotUnhovered_DelegateWrapper(const FMulticastScriptDelegate& OnSlotUnhovered)
{
	OnSlotUnhovered.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnSlotUnhovered ********************************************************

// ********** Begin Class UInventorySlotWidget Function UpdateSlot *********************************
struct InventorySlotWidget_eventUpdateSlot_Parms
{
	FInventorySlot SlotData;
};
static FName NAME_UInventorySlotWidget_UpdateSlot = FName(TEXT("UpdateSlot"));
void UInventorySlotWidget::UpdateSlot(FInventorySlot const& SlotData)
{
	UFunction* Func = FindFunctionChecked(NAME_UInventorySlotWidget_UpdateSlot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InventorySlotWidget_eventUpdateSlot_Parms Parms;
		Parms.SlotData=SlotData;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateSlot_Implementation(SlotData);
	}
}
struct Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory UI" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventorySlotWidget_eventUpdateSlot_Parms, SlotData), Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotData_MetaData), NewProp_SlotData_MetaData) }; // 3066448521
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::NewProp_SlotData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventorySlotWidget, nullptr, "UpdateSlot", Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::PropPointers), sizeof(InventorySlotWidget_eventUpdateSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InventorySlotWidget_eventUpdateSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventorySlotWidget::execUpdateSlot)
{
	P_GET_STRUCT_REF(FInventorySlot,Z_Param_Out_SlotData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSlot_Implementation(Z_Param_Out_SlotData);
	P_NATIVE_END;
}
// ********** End Class UInventorySlotWidget Function UpdateSlot ***********************************

// ********** Begin Class UInventorySlotWidget *****************************************************
void UInventorySlotWidget::StaticRegisterNativesUInventorySlotWidget()
{
	UClass* Class = UInventorySlotWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateSlot", &UInventorySlotWidget::execUpdateSlot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventorySlotWidget;
UClass* UInventorySlotWidget::GetPrivateStaticClass()
{
	using TClass = UInventorySlotWidget;
	if (!Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventorySlotWidget"),
			Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton,
			StaticRegisterNativesUInventorySlotWidget,
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
	return Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister()
{
	return UInventorySlotWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventorySlotWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventorySlotWidget.h" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSlotHovered_MetaData[] = {
		{ "Category", "Inventory UI|Events" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSlotUnhovered_MetaData[] = {
		{ "Category", "Inventory UI|Events" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantityText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemData_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventorySlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotHovered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSlotUnhovered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuantityText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventorySlotWidget_UpdateSlot, "UpdateSlot" }, // 489943408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlotWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_OnSlotHovered = { "OnSlotHovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, OnSlotHovered), Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotHovered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSlotHovered_MetaData), NewProp_OnSlotHovered_MetaData) }; // 3984935868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_OnSlotUnhovered = { "OnSlotUnhovered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, OnSlotUnhovered), Z_Construct_UDelegateFunction_ProjetUnreal_OnSlotUnhovered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSlotUnhovered_MetaData), NewProp_OnSlotUnhovered_MetaData) }; // 2913522528
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_QuantityText = { "QuantityText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, QuantityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantityText_MetaData), NewProp_QuantityText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_CachedItemData = { "CachedItemData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, CachedItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedItemData_MetaData), NewProp_CachedItemData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_OnSlotHovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_OnSlotUnhovered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_QuantityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_CachedItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlotWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlotWidget_Statics::ClassParams = {
	&UInventorySlotWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlotWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlotWidget()
{
	if (!Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton, Z_Construct_UClass_UInventorySlotWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton;
}
UInventorySlotWidget::UInventorySlotWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlotWidget);
UInventorySlotWidget::~UInventorySlotWidget() {}
// ********** End Class UInventorySlotWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventorySlotWidget_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlotWidget, UInventorySlotWidget::StaticClass, TEXT("UInventorySlotWidget"), &Z_Registration_Info_UClass_UInventorySlotWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlotWidget), 475211722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventorySlotWidget_h__Script_ProjetUnreal_306641966(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventorySlotWidget_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventorySlotWidget_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

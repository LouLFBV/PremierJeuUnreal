// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryWidget();
PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryWidget Function InitializeWidget *******************************
struct Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics
{
	struct InventoryWidget_eventInitializeWidget_Parms
	{
		UInventoryComponent* InInventory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory UI" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::NewProp_InInventory = { "InInventory", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryWidget_eventInitializeWidget_Parms, InInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInventory_MetaData), NewProp_InInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::NewProp_InInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "InitializeWidget", Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::InventoryWidget_eventInitializeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::InventoryWidget_eventInitializeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryWidget_InitializeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_InitializeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryWidget::execInitializeWidget)
{
	P_GET_OBJECT(UInventoryComponent,Z_Param_InInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWidget(Z_Param_InInventory);
	P_NATIVE_END;
}
// ********** End Class UInventoryWidget Function InitializeWidget *********************************

// ********** Begin Class UInventoryWidget Function RefreshGrid ************************************
struct Z_Construct_UFunction_UInventoryWidget_RefreshGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory UI" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWidget_RefreshGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryWidget, nullptr, "RefreshGrid", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWidget_RefreshGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryWidget_RefreshGrid_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryWidget_RefreshGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWidget_RefreshGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryWidget::execRefreshGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshGrid();
	P_NATIVE_END;
}
// ********** End Class UInventoryWidget Function RefreshGrid **************************************

// ********** Begin Class UInventoryWidget *********************************************************
void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
{
	UClass* Class = UInventoryWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeWidget", &UInventoryWidget::execInitializeWidget },
		{ "RefreshGrid", &UInventoryWidget::execRefreshGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryWidget;
UClass* UInventoryWidget::GetPrivateStaticClass()
{
	using TClass = UInventoryWidget;
	if (!Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryWidget"),
			Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton,
			StaticRegisterNativesUInventoryWidget,
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
	return Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
{
	return UInventoryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryWidget.h" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetClass_MetaData[] = {
		{ "Category", "Inventory UI" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotsContainer_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Conteneur UMG (WrapBox ou UniformGridPanel)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Conteneur UMG (WrapBox ou UniformGridPanel)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlotWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotsContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetInventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWidget_InitializeWidget, "InitializeWidget" }, // 301106125
		{ &Z_Construct_UFunction_UInventoryWidget_RefreshGrid, "RefreshGrid" }, // 666078115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_SlotWidgetClass = { "SlotWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryWidget, SlotWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInventorySlotWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotWidgetClass_MetaData), NewProp_SlotWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_SlotsContainer = { "SlotsContainer", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryWidget, SlotsContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotsContainer_MetaData), NewProp_SlotsContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryWidget, TargetInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInventory_MetaData), NewProp_TargetInventory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_SlotWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_SlotsContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryWidget_Statics::NewProp_TargetInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
	&UInventoryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryWidget()
{
	if (!Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton;
}
UInventoryWidget::UInventoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
UInventoryWidget::~UInventoryWidget() {}
// ********** End Class UInventoryWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidget, UInventoryWidget::StaticClass, TEXT("UInventoryWidget"), &Z_Registration_Info_UClass_UInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidget), 1492089068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h__Script_ProjetUnreal_860068278(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

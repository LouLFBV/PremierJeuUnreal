// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainMenuWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainMenuWidget() {}

// ********** Begin Cross Module References ********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UMainMenuWidget();
PROJETUNREAL_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMainMenuWidget Function OnPlayClicked ***********************************
struct Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnPlayClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnPlayClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayClicked();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnPlayClicked *************************************

// ********** Begin Class UMainMenuWidget Function OnQuitClicked ***********************************
struct Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMainMenuWidget, nullptr, "OnQuitClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainMenuWidget::execOnQuitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnQuitClicked();
	P_NATIVE_END;
}
// ********** End Class UMainMenuWidget Function OnQuitClicked *************************************

// ********** Begin Class UMainMenuWidget **********************************************************
void UMainMenuWidget::StaticRegisterNativesUMainMenuWidget()
{
	UClass* Class = UMainMenuWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayClicked", &UMainMenuWidget::execOnPlayClicked },
		{ "OnQuitClicked", &UMainMenuWidget::execOnQuitClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainMenuWidget;
UClass* UMainMenuWidget::GetPrivateStaticClass()
{
	using TClass = UMainMenuWidget;
	if (!Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainMenuWidget"),
			Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton,
			StaticRegisterNativesUMainMenuWidget,
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
	return Z_Registration_Info_UClass_UMainMenuWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister()
{
	return UMainMenuWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMainMenuWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MainMenuWidget.h" },
		{ "ModuleRelativePath", "Public/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainMenuWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuWidget_OnPlayClicked, "OnPlayClicked" }, // 451424543
		{ &Z_Construct_UFunction_UMainMenuWidget_OnQuitClicked, "OnQuitClicked" }, // 2936656500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainMenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuitButton_MetaData), NewProp_QuitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuWidget_Statics::NewProp_QuitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams = {
	&UMainMenuWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainMenuWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainMenuWidget()
{
	if (!Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton, Z_Construct_UClass_UMainMenuWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainMenuWidget.OuterSingleton;
}
UMainMenuWidget::UMainMenuWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuWidget);
UMainMenuWidget::~UMainMenuWidget() {}
// ********** End Class UMainMenuWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenuWidget, UMainMenuWidget::StaticClass, TEXT("UMainMenuWidget"), &Z_Registration_Info_UClass_UMainMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenuWidget), 567040870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h__Script_ProjetUnreal_3351329061(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

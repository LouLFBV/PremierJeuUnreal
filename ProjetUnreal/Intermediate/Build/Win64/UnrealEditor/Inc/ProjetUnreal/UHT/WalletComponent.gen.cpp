// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WalletComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWalletComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UWalletComponent();
PROJETUNREAL_API UClass* Z_Construct_UClass_UWalletComponent_NoRegister();
PROJETUNREAL_API UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjetUnreal();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCoinsChanged *******************************************************
struct Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics
{
	struct _Script_ProjetUnreal_eventOnCoinsChanged_Parms
	{
		int32 NewCoinCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xef\xbf\xbdl\xef\xbf\xbdgu\xef\xbf\xbd pour notifier le HUD quand le solde change\n" },
#endif
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xef\xbf\xbdl\xef\xbf\xbdgu\xef\xbf\xbd pour notifier le HUD quand le solde change" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCoinCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::NewProp_NewCoinCount = { "NewCoinCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjetUnreal_eventOnCoinsChanged_Parms, NewCoinCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::NewProp_NewCoinCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ProjetUnreal, nullptr, "OnCoinsChanged__DelegateSignature", Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::_Script_ProjetUnreal_eventOnCoinsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::_Script_ProjetUnreal_eventOnCoinsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCoinsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoinsChanged, int32 NewCoinCount)
{
	struct _Script_ProjetUnreal_eventOnCoinsChanged_Parms
	{
		int32 NewCoinCount;
	};
	_Script_ProjetUnreal_eventOnCoinsChanged_Parms Parms;
	Parms.NewCoinCount=NewCoinCount;
	OnCoinsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCoinsChanged *********************************************************

// ********** Begin Class UWalletComponent Function AddCoins ***************************************
struct Z_Construct_UFunction_UWalletComponent_AddCoins_Statics
{
	struct WalletComponent_eventAddCoins_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ajouter (ou retirer) des pi\xef\xbf\xbd""ces */" },
#endif
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ajouter (ou retirer) des pi\xef\xbf\xbd""ces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WalletComponent_eventAddCoins_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWalletComponent, nullptr, "AddCoins", Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::WalletComponent_eventAddCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::WalletComponent_eventAddCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalletComponent_AddCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletComponent_AddCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWalletComponent::execAddCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCoins(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UWalletComponent Function AddCoins *****************************************

// ********** Begin Class UWalletComponent Function GetCoins ***************************************
struct Z_Construct_UFunction_UWalletComponent_GetCoins_Statics
{
	struct WalletComponent_eventGetCoins_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** R\xef\xbf\xbd""cup\xef\xbf\xbdrer le nombre de pi\xef\xbf\xbd""ces actuel */" },
#endif
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xef\xbf\xbd""cup\xef\xbf\xbdrer le nombre de pi\xef\xbf\xbd""ces actuel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WalletComponent_eventGetCoins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWalletComponent, nullptr, "GetCoins", Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::WalletComponent_eventGetCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::WalletComponent_eventGetCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalletComponent_GetCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWalletComponent_GetCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWalletComponent::execGetCoins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCoins();
	P_NATIVE_END;
}
// ********** End Class UWalletComponent Function GetCoins *****************************************

// ********** Begin Class UWalletComponent *********************************************************
void UWalletComponent::StaticRegisterNativesUWalletComponent()
{
	UClass* Class = UWalletComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCoins", &UWalletComponent::execAddCoins },
		{ "GetCoins", &UWalletComponent::execGetCoins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWalletComponent;
UClass* UWalletComponent::GetPrivateStaticClass()
{
	using TClass = UWalletComponent;
	if (!Z_Registration_Info_UClass_UWalletComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WalletComponent"),
			Z_Registration_Info_UClass_UWalletComponent.InnerSingleton,
			StaticRegisterNativesUWalletComponent,
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
	return Z_Registration_Info_UClass_UWalletComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWalletComponent_NoRegister()
{
	return UWalletComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWalletComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WalletComponent.h" },
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCoinsChanged_MetaData[] = {
		{ "Category", "Wallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdv\xef\xbf\xbdnement pour mettre \xef\xbf\xbd jour l'UI */" },
#endif
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdv\xef\xbf\xbdnement pour mettre \xef\xbf\xbd jour l'UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wallet" },
		{ "ModuleRelativePath", "Public/WalletComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCoinsChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWalletComponent_AddCoins, "AddCoins" }, // 2786217013
		{ &Z_Construct_UFunction_UWalletComponent_GetCoins, "GetCoins" }, // 4054333932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWalletComponent_Statics::NewProp_OnCoinsChanged = { "OnCoinsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWalletComponent, OnCoinsChanged), Z_Construct_UDelegateFunction_ProjetUnreal_OnCoinsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCoinsChanged_MetaData), NewProp_OnCoinsChanged_MetaData) }; // 211039029
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWalletComponent_Statics::NewProp_CoinCount = { "CoinCount", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWalletComponent, CoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinCount_MetaData), NewProp_CoinCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWalletComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletComponent_Statics::NewProp_OnCoinsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWalletComponent_Statics::NewProp_CoinCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWalletComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWalletComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjetUnreal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWalletComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWalletComponent_Statics::ClassParams = {
	&UWalletComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWalletComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWalletComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWalletComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWalletComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWalletComponent()
{
	if (!Z_Registration_Info_UClass_UWalletComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalletComponent.OuterSingleton, Z_Construct_UClass_UWalletComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWalletComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletComponent);
UWalletComponent::~UWalletComponent() {}
// ********** End Class UWalletComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h__Script_ProjetUnreal_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWalletComponent, UWalletComponent::StaticClass, TEXT("UWalletComponent"), &Z_Registration_Info_UClass_UWalletComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalletComponent), 3982668529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h__Script_ProjetUnreal_1457494881(TEXT("/Script/ProjetUnreal"),
	Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h__Script_ProjetUnreal_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h__Script_ProjetUnreal_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

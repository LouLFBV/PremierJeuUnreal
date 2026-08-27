// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WalletComponent.h"

#ifdef PROJETUNREAL_WalletComponent_generated_h
#error "WalletComponent.generated.h already included, missing '#pragma once' in WalletComponent.h"
#endif
#define PROJETUNREAL_WalletComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnCoinsChanged *******************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_8_DELEGATE \
PROJETUNREAL_API void FOnCoinsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoinsChanged, int32 NewCoinCount);


// ********** End Delegate FOnCoinsChanged *********************************************************

// ********** Begin Class UWalletComponent *********************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCoins); \
	DECLARE_FUNCTION(execAddCoins);


PROJETUNREAL_API UClass* Z_Construct_UClass_UWalletComponent_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWalletComponent(); \
	friend struct Z_Construct_UClass_UWalletComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UWalletComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UWalletComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UWalletComponent_NoRegister) \
	DECLARE_SERIALIZER(UWalletComponent)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWalletComponent(UWalletComponent&&) = delete; \
	UWalletComponent(const UWalletComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWalletComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalletComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWalletComponent) \
	NO_API virtual ~UWalletComponent();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_10_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWalletComponent;

// ********** End Class UWalletComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_WalletComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

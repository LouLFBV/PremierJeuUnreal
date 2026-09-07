// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryWidget.h"

#ifdef PROJETUNREAL_InventoryWidget_generated_h
#error "InventoryWidget.generated.h already included, missing '#pragma once' in InventoryWidget.h"
#endif
#define PROJETUNREAL_InventoryWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInventoryComponent;

// ********** Begin Class UInventoryWidget *********************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshGrid); \
	DECLARE_FUNCTION(execInitializeWidget);


PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryWidget(); \
	friend struct Z_Construct_UClass_UInventoryWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UInventoryWidget_NoRegister) \
	DECLARE_SERIALIZER(UInventoryWidget)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryWidget(UInventoryWidget&&) = delete; \
	UInventoryWidget(const UInventoryWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryWidget) \
	NO_API virtual ~UInventoryWidget();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_11_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryWidget;

// ********** End Class UInventoryWidget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

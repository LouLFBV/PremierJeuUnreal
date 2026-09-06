// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"

#ifdef PROJETUNREAL_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define PROJETUNREAL_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UItemDataAsset;
struct FInventorySlot;

// ********** Begin ScriptStruct FInventorySlot ****************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlot_Statics; \
	PROJETUNREAL_API static class UScriptStruct* StaticStruct();


struct FInventorySlot;
// ********** End ScriptStruct FInventorySlot ******************************************************

// ********** Begin Delegate FOnInventoryUpdated ***************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_27_DELEGATE \
PROJETUNREAL_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


// ********** End Delegate FOnInventoryUpdated *****************************************************

// ********** Begin Class UInventoryComponent ******************************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSlots); \
	DECLARE_FUNCTION(execGetItemQuantity); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&) = delete; \
	UInventoryComponent(const UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_29_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComponent;

// ********** End Class UInventoryComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

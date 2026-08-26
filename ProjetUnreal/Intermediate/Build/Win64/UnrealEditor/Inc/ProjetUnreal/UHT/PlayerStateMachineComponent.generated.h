// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStateMachineComponent.h"

#ifdef PROJETUNREAL_PlayerStateMachineComponent_generated_h
#error "PlayerStateMachineComponent.generated.h already included, missing '#pragma once' in PlayerStateMachineComponent.h"
#endif
#define PROJETUNREAL_PlayerStateMachineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPlayerStateBase;

// ********** Begin Class UPlayerStateMachineComponent *********************************************
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSwitchState);


PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateMachineComponent(); \
	friend struct Z_Construct_UClass_UPlayerStateMachineComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerStateMachineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UPlayerStateMachineComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlayerStateMachineComponent)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerStateMachineComponent(UPlayerStateMachineComponent&&) = delete; \
	UPlayerStateMachineComponent(const UPlayerStateMachineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStateMachineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateMachineComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStateMachineComponent) \
	NO_API virtual ~UPlayerStateMachineComponent();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_10_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerStateMachineComponent;

// ********** End Class UPlayerStateMachineComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateMachineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

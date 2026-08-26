// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerStateBase.h"

#ifdef PROJETUNREAL_PlayerStateBase_generated_h
#error "PlayerStateBase.generated.h already included, missing '#pragma once' in PlayerStateBase.h"
#endif
#define PROJETUNREAL_PlayerStateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerStateBase *********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateBase_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateBase(); \
	friend struct Z_Construct_UClass_UPlayerStateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UPlayerStateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerStateBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UPlayerStateBase_NoRegister) \
	DECLARE_SERIALIZER(UPlayerStateBase)


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerStateBase(UPlayerStateBase&&) = delete; \
	UPlayerStateBase(const UPlayerStateBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStateBase) \
	NO_API virtual ~UPlayerStateBase();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_10_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerStateBase;

// ********** End Class UPlayerStateBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_PlayerStateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

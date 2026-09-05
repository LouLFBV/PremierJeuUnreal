// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableBase.h"

#ifdef PROJETUNREAL_InteractableBase_generated_h
#error "InteractableBase.generated.h already included, missing '#pragma once' in InteractableBase.h"
#endif
#define PROJETUNREAL_InteractableBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractableBase ********************************************************
PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister();

#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableBase(); \
	friend struct Z_Construct_UClass_AInteractableBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_AInteractableBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractableBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_AInteractableBase_NoRegister) \
	DECLARE_SERIALIZER(AInteractableBase) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableBase*>(this); }


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractableBase(AInteractableBase&&) = delete; \
	AInteractableBase(const AInteractableBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractableBase) \
	NO_API virtual ~AInteractableBase();


#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_11_PROLOG
#define FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractableBase;

// ********** End Class AInteractableBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_PremierJeuUnreal_ProjetUnreal_Source_ProjetUnreal_Public_InteractableBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

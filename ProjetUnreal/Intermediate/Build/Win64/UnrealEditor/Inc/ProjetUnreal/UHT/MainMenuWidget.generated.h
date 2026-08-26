// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenuWidget.h"

#ifdef PROJETUNREAL_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define PROJETUNREAL_MainMenuWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMainMenuWidget **********************************************************
#define FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnPlayClicked);


PROJETUNREAL_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister();

#define FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJETUNREAL_API UClass* Z_Construct_UClass_UMainMenuWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjetUnreal"), Z_Construct_UClass_UMainMenuWidget_NoRegister) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMainMenuWidget(UMainMenuWidget&&) = delete; \
	UMainMenuWidget(const UMainMenuWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	NO_API virtual ~UMainMenuWidget();


#define FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_9_PROLOG
#define FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMainMenuWidget;

// ********** End Class UMainMenuWidget ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prog_perso_C___Projet_ProjetUnreal_Source_ProjetUnreal_Public_MainMenuWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

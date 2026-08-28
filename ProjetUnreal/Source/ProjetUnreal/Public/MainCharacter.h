#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Blueprint/UserWidget.h"
#include "MainCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UPlayerStateMachineComponent;
class UWalletComponent;

UCLASS()
class PROJETUNREAL_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Callbacks pour les entrées joueur */
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	// Classe du Widget de pause à assigner dans le Blueprint
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuClass;

	// Action Enhanced Input (ex: touche Echap ou P)
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* PauseAction;

	// Fonction de bascule de la pause
	UFUNCTION(BlueprintCallable, Category = "UI")
	void TogglePause();

private:
	/** Bras de la caméra (SpringArm) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;

	/** Caméra TPS */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FollowCamera;

	/** State Machine */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UPlayerStateMachineComponent> StateMachineComponent;

	/** Enhanced Input assets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UWalletComponent> WalletComponent;
	
	UPROPERTY()
	UUserWidget* PauseMenuInstance;

public:
	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE UPlayerStateMachineComponent* GetStateMachine() const { return StateMachineComponent; }
	FORCEINLINE UWalletComponent* GetWalletComponent() const { return WalletComponent; }
};
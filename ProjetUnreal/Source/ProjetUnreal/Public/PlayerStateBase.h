#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerStateBase.generated.h"

class AMainCharacter;
class UPlayerStateMachineComponent;

UCLASS(Abstract, Blueprintable)
class PROJETUNREAL_API UPlayerStateBase : public UObject
{
	GENERATED_BODY()

public:
	// Initialisation de l'état avec les références nécessaires
	virtual void InitializeState(AMainCharacter* InCharacter, UPlayerStateMachineComponent* InStateMachine);

	// Appelé à l'entrée dans cet état
	virtual void EnterState();

	// Appelé à chaque frame (Tick)
	virtual void UpdateState(float DeltaTime);

	// Appelé à la sortie de cet état
	virtual void ExitState();

protected:
	UPROPERTY(BlueprintReadOnly, Category = "State Machine")
	TObjectPtr<AMainCharacter> CharacterOwner;

	UPROPERTY(BlueprintReadOnly, Category = "State Machine")
	TObjectPtr<UPlayerStateMachineComponent> StateMachineOwner;
};
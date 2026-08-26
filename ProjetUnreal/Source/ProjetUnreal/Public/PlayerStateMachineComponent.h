#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerStateBase.h"
#include "PlayerStateMachineComponent.generated.h"

class AMainCharacter;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJETUNREAL_API UPlayerStateMachineComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPlayerStateMachineComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Fonction pour changer d'état
	UFUNCTION(BlueprintCallable, Category = "State Machine")
	void SwitchState(TSubclassOf<UPlayerStateBase> NewStateClass);

	// Récupérer l'état actuel
	UFUNCTION(BlueprintPure, Category = "State Machine")
	UPlayerStateBase* GetCurrentState() const { return CurrentState; }

protected:
	UPROPERTY(EditDefaultsOnly, Category = "State Machine")
	TSubclassOf<UPlayerStateBase> InitialStateClass;

private:
	UPROPERTY()
	TObjectPtr<UPlayerStateBase> CurrentState;

	UPROPERTY()
	TMap<TSubclassOf<UPlayerStateBase>, TObjectPtr<UPlayerStateBase>> StateCache;

	UPROPERTY()
	TObjectPtr<AMainCharacter> CharacterOwner;
};
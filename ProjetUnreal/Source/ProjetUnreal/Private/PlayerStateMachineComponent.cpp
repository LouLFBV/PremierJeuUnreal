#include "PlayerStateMachineComponent.h"
#include "MainCharacter.h"

UPlayerStateMachineComponent::UPlayerStateMachineComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerStateMachineComponent::BeginPlay()
{
	Super::BeginPlay();

	CharacterOwner = Cast<AMainCharacter>(GetOwner());

	// Si un état initial est configuré, on le démarre
	if (InitialStateClass)
	{
		SwitchState(InitialStateClass);
	}
}

void UPlayerStateMachineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Met à jour l'état actuel à chaque frame
	if (CurrentState)
	{
		CurrentState->UpdateState(DeltaTime);
	}
}

void UPlayerStateMachineComponent::SwitchState(TSubclassOf<UPlayerStateBase> NewStateClass)
{
	if (!NewStateClass || !CharacterOwner) return;

	// Si on est déjà dans cet état, inutile de refaire la transition
	if (CurrentState && CurrentState->IsA(NewStateClass)) return;

	// 1. Quitter l'état actuel
	if (CurrentState)
	{
		CurrentState->ExitState();
	}

	// 2. Récupérer ou créer le nouvel état (Système de cache pour éviter le Garbage Collector)
	TObjectPtr<UPlayerStateBase>* ExistingState = StateCache.Find(NewStateClass);
	if (ExistingState && *ExistingState)
	{
		CurrentState = *ExistingState;
	}
	else
	{
		CurrentState = NewObject<UPlayerStateBase>(this, NewStateClass);
		CurrentState->InitializeState(CharacterOwner, this);
		StateCache.Add(NewStateClass, CurrentState);
	}

	// 3. Entrer dans le nouvel état
	if (CurrentState)
	{
		CurrentState->EnterState();
	}
}
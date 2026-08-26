#include "PlayerStateBase.h"

void UPlayerStateBase::InitializeState(AMainCharacter* InCharacter, UPlayerStateMachineComponent* InStateMachine)
{
	CharacterOwner = InCharacter;
	StateMachineOwner = InStateMachine;
}

void UPlayerStateBase::EnterState() {}
void UPlayerStateBase::UpdateState(float DeltaTime) {}
void UPlayerStateBase::ExitState() {}
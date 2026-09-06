#include "InteractableBase.h"
#include "Components/WidgetComponent.h"
#include "MainCharacter.h"

AInteractableBase::AInteractableBase()
{
	// 1. On autorise le Tick, MAIS on le désactive par défaut pour optimiser !
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	DefaultRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	RootComponent = DefaultRoot;

	InteractWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractWidget"));
	InteractWidget->SetupAttachment(RootComponent);
	InteractWidget->SetVisibility(false);
	InteractWidget->SetWidgetSpace(EWidgetSpace::Screen);
}

void AInteractableBase::SetTargeted(bool bIsTargeted, AMainCharacter* Player)
{
	if (InteractWidget && bIsInteractable)
	{
		InteractWidget->SetVisibility(bIsTargeted);

		// 2. On stocke le joueur et on gère l'optimisation du Tick
		CurrentPlayer = bIsTargeted ? Player : nullptr;
		SetActorTickEnabled(bIsTargeted); // Active le Tick si ciblé, le désactive sinon
	}
}

void AInteractableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// On ne calcule la position dynamique QUE si l'option est activée
	if (bUseDynamicUIPosition && CurrentPlayer && InteractWidget->IsVisible())
	{
		FVector ObjectPos = GetActorLocation();
		FVector PlayerPos = CurrentPlayer->GetActorLocation();

		FVector Dir = (PlayerPos - ObjectPos);
		Dir.Z = 0.f;
		Dir.Normalize();

		FVector IconPos = ObjectPos + (Dir * DistanceFromObject) + FVector(0.f, 0.f, HeightOffset);
		InteractWidget->SetWorldLocation(IconPos);
	}
}

void AInteractableBase::OnInteract(AMainCharacter* Player)
{
	// Vide par défaut, sera écrasé par les enfants
}
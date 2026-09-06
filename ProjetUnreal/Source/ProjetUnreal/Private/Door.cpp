#include "Door.h"
#include "InventoryComponent.h"
#include "MainCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

ADoor::ADoor()
{
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetupAttachment(RootComponent);
	DoorMesh->SetMobility(EComponentMobility::Movable);

	if (InteractWidget)
	{
		InteractWidget->SetupAttachment(DoorMesh);
	}

	DoorTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorTimeline"));
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	if (DoorCurve)
	{
		FOnTimelineFloat TimelineProgress;
		TimelineProgress.BindUFunction(this, FName("UpdateDoorRotation"));
		DoorTimeline->AddInterpFloat(DoorCurve, TimelineProgress);
	}
}

void ADoor::OnInteract(AMainCharacter* Player)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Interaction avec la porte !"));
	}
	if (!Player) return;

	if (bIsLocked)
	{
		UInventoryComponent* Inventory = Player->GetInventoryComponent();

		if (RequiredKeyAsset && Inventory && Inventory->HasItem(RequiredKeyAsset))
		{
			Inventory->RemoveItem(RequiredKeyAsset, 1);
			bIsLocked = false;
			UE_LOG(LogTemp, Log, TEXT("Porte déverrouillée avec la clé !"));

			Super::OnInteract(Player);
			ToggleDoor();
		}
		else
		{
			if (LockedDoorSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, LockedDoorSound, GetActorLocation());
			}
			UE_LOG(LogTemp, Warning, TEXT("Il faut une clé pour ouvrir cette porte !"));
		}
	}
	else
	{
		Super::OnInteract(Player);
		ToggleDoor();
	}
}

void ADoor::ToggleDoor()
{
	if (OpenDoorSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, OpenDoorSound, GetActorLocation());
	}

	if (bIsOpen)
	{
		DoorTimeline->Reverse();
		bIsOpen = false;
	}
	else
	{
		DoorTimeline->Play();
		bIsOpen = true;
	}
}

void ADoor::UpdateDoorRotation(float Value)
{
	FRotator NewRotation = FRotator(0.f, Value * OpenAngle, 0.f);
	DoorMesh->SetRelativeRotation(NewRotation);
}
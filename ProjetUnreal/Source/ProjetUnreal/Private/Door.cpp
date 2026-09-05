#include "Door.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ADoor::ADoor()
{
	// 1. Création du maillage et attachement à la racine définie dans InteractableBase
	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorMesh->SetupAttachment(RootComponent);

	// 2. Création de la Timeline
	DoorTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorTimeline"));
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	// 3. Liaison de la courbe à notre fonction de rotation
	if (DoorCurve)
	{
		FOnTimelineFloat TimelineProgress;
		TimelineProgress.BindUFunction(this, FName("UpdateDoorRotation"));
		DoorTimeline->AddInterpFloat(DoorCurve, TimelineProgress);
	}
}

void ADoor::OnInteract(AMainCharacter* Player)
{
	// L'équivalent de ton OpenAndCloseDoor()
	if (bIsLocked)
	{
		if (LockedDoorSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, LockedDoorSound, GetActorLocation());
		}
		return;
	}

	if (OpenDoorSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, OpenDoorSound, GetActorLocation());
	}

	// On lance la Timeline dans le bon sens
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
	// Value ira de 0 à 1 (ou inversement) selon la courbe. 
	// On la multiplie par l'angle final (ex: 90 degrés).
	FRotator NewRotation = FRotator(0.f, Value * OpenAngle, 0.f);
	DoorMesh->SetRelativeRotation(NewRotation);
}
#include "PlayerInteractorComponent.h"
#include "Interactable.h"
#include "MainCharacter.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h" // L'équivalent de Gizmos dans Unity !

UPlayerInteractorComponent::UPlayerInteractorComponent()
{
	// Permet au composant d'exécuter la fonction TickComponent à chaque frame
	PrimaryComponentTick.bCanEverTick = true;
}

void UPlayerInteractorComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPlayerInteractorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// L'équivalent exact de ton Update() sur Unity
	DetectInteractable();
}

void UPlayerInteractorComponent::DetectInteractable()
{
	AActor* Owner = GetOwner();
	if (!Owner) return;

	// 1. Préparation du rayon (Start et End)
	FVector Start = Owner->GetActorLocation();
	FVector End = Start + (Owner->GetActorForwardVector() * InteractRange);

	// 2. Paramètres du SphereCast
	FHitResult HitResult;
	FCollisionShape Sphere = FCollisionShape::MakeSphere(InteractRadius);
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(Owner); // On ignore le joueur lui-même

	// 3. Le fameux SphereCast (SweepSingleByChannel)
	bool bHit = GetWorld()->SweepSingleByChannel(
		HitResult,
		Start,
		End,
		FQuat::Identity,
		CollisionChannel,
		Sphere,
		QueryParams
	);

	// Visualisation du SphereCast (comme ton OnDrawGizmos)
	// Décommente ces lignes pour voir la sphère en jeu !
	
	FColor DrawColor = bHit ? FColor::Green : FColor::Red;
	DrawDebugLine(GetWorld(), Start, End, DrawColor, false, -1, 0, 2.0f);
	DrawDebugSphere(GetWorld(), bHit ? HitResult.Location : End, InteractRadius, 12, DrawColor, false, -1, 0, 1.0f);
	

	IInteractable* NewInteractable = nullptr;

	// 4. Si on touche quelque chose
	if (bHit && HitResult.GetActor())
	{
		// On tente de convertir l'Actor touché en interface (GetComponent<IInteractable> sur Unity)
		NewInteractable = Cast<IInteractable>(HitResult.GetActor());
	}

	// 5. Gestion du changement de cible
	if (NewInteractable != CurrentTarget)
	{
		AMainCharacter* PlayerChar = Cast<AMainCharacter>(Owner);

		// On prévient l'ancien objet qu'on ne le regarde plus
		if (CurrentTarget)
		{
			CurrentTarget->SetTargeted(false, PlayerChar);
		}

		CurrentTarget = NewInteractable;

		// On prévient le nouvel objet qu'on le regarde
		if (CurrentTarget)
		{
			CurrentTarget->SetTargeted(true, PlayerChar);
		}
	}
}

void UPlayerInteractorComponent::TryInteract(AMainCharacter* Player)
{
	// Appelé quand le joueur appuie sur E (ou autre)
	if (CurrentTarget)
	{
		CurrentTarget->OnInteract(Player);
	}
}
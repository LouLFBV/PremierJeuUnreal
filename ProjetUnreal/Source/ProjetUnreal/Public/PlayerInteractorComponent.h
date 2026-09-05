#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInteractorComponent.generated.h"

// Déclaration anticipée de l'interface
class IInteractable;
class AMainCharacter;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJETUNREAL_API UPlayerInteractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPlayerInteractorComponent();

	// L'équivalent de ton Update() sur Unity
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// À appeler quand le joueur appuie sur la touche d'action
	void TryInteract(AMainCharacter* Player);

protected:
	virtual void BeginPlay() override;

	// L'équivalent de ton DetectInteractable()
	void DetectInteractable();

	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractRange = 300.0f; // 3 mètres

	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractRadius = 50.0f; // Rayon du SphereCast

	// Le type d'objets à détecter (équivalent de ton LayerMask interactableMask)
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECC_Visibility;

private:
	// Pointeur vers l'objet actuellement regardé
	IInteractable* CurrentTarget = nullptr;
};
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "InteractableBase.generated.h"

class UWidgetComponent;
class AMainCharacter;

UCLASS(Abstract)
class PROJETUNREAL_API AInteractableBase : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	AInteractableBase();

	// L'équivalent de ton LateUpdate()
	virtual void Tick(float DeltaTime) override;

	virtual void SetTargeted(bool bIsTargeted, AMainCharacter* Player) override;
	virtual void OnInteract(AMainCharacter* Player) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USceneComponent> DefaultRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UWidgetComponent> InteractWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bIsInteractable = true;

	// --- NOUVEAU : Paramètres de positionnement de l'UI ---

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|UI")
	float DistanceFromObject = 50.0f; // Équivalent de ton distanceFromObject

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|UI")
	float HeightOffset = 100.0f; // Équivalent de ton heightOffset

private:
	// Référence au joueur qui nous regarde actuellement
	UPROPERTY()
	AMainCharacter* CurrentPlayer = nullptr;
};
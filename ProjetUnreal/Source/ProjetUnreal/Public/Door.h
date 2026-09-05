#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

class UStaticMeshComponent;
class USoundBase;
class UCurveFloat;

UCLASS()
class PROJETUNREAL_API ADoor : public AInteractableBase
{
	GENERATED_BODY()

public:
	ADoor();

	// On surcharge (override) l'interaction définie dans l'interface
	virtual void OnInteract(class AMainCharacter* Player) override;

protected:
	virtual void BeginPlay() override;

	// Le maillage de la porte (l'équivalent de ton GameObject "door")
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> DoorMesh;

	// --- Animation ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation")
	TObjectPtr<UTimelineComponent> DoorTimeline;

	UPROPERTY(EditDefaultsOnly, Category = "Animation")
	TObjectPtr<UCurveFloat> DoorCurve;

	UPROPERTY(EditAnywhere, Category = "Animation")
	float OpenAngle = 90.0f;

	// --- Audio ---
	UPROPERTY(EditAnywhere, Category = "Audio")
	TObjectPtr<USoundBase> OpenDoorSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
	TObjectPtr<USoundBase> LockedDoorSound;

	// --- États ---
	UPROPERTY(EditAnywhere, Category = "State")
	bool bIsLocked = false;

	bool bIsOpen = false;

private:
	// Fonction appelée à chaque frame par la Timeline pour mettre à jour la rotation
	UFUNCTION()
	void UpdateDoorRotation(float Value);
};
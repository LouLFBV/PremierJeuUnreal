#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class UBoxComponent;
class UNiagaraSystem;

UCLASS()
class PROJETUNREAL_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	AWeapon();

	/** Active/Désactive la collision et vide la liste des cibles touchées */
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void ToggleHitbox(bool bEnable);

protected:
	virtual void BeginPlay() override;

	/** Mesh de l'arme */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> WeaponMesh;

	/** Collider d'attaque (Hitbox) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UBoxComponent> Hitbox;

	/** Dégâts de base de l'arme */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	float BaseDamage = 25.0f;

	/** Effet de sang (Niagara) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat")
	TObjectPtr<UNiagaraSystem> BloodEffect;


	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<AWeapon> WeaponClass;

	UPROPERTY(BlueprintReadOnly, Category = "Combat")
	TObjectPtr<AWeapon> EquippedWeapon;

private:
	/** Liste des acteurs déjà touchés pendant le coup actuel */
	UPROPERTY()
	TArray<TObjectPtr<AActor>> AlreadyHitActors;

	/** Callback d'overlap */
	UFUNCTION()
	void OnHitboxOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
#include "EnemyBase.h"
#include "HealthComponent.h"
#include "Components/CapsuleComponent.h"

AEnemyBase::AEnemyBase()
{
	PrimaryActorTick.bCanEverTick = true;

	// Attacher le HealthComponent à l'ennemi
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	if (HealthComponent)
	{
		// S'abonner à l'événement de mort
		HealthComponent->OnDeath.AddDynamic(this, &AEnemyBase::HandleDeath);
	}
}

void AEnemyBase::HandleDeath()
{
	Die();
}

void AEnemyBase::Die()
{
	// 1. Désactiver la capsule pour ne plus gêner les déplacements du joueur
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 2. Activer la physique (Ragdoll) sur le Mesh
	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
	GetMesh()->SetSimulatePhysics(true);

	// 3. Détruire le cadavre au bout de 5 secondes
	SetLifeSpan(5.0f);
}
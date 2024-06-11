// Fill out your copyright notice in the Description page of Project Settings.


#include "proyectil.h"

// Sets default values
Aproyectil::Aproyectil()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));

	ProyecEnemy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy->SetStaticMesh(ProjectileMeshAsset.Object);
	ProyecEnemy->SetupAttachment(RootComponent);

	vel = 1000;
}
void Aproyectil::MoverProy()
{

	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
void Aproyectil::BeginPlay()
{

	Super::BeginPlay();
}


// Called every frame
void Aproyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverProy();
}

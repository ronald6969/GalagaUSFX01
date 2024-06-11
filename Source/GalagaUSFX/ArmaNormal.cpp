// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaNormal.h"

// Sets default values
AArmaNormal::AArmaNormal()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ProjectileMeshAsset1(TEXT("StaticMesh'/Game/Meshes/BulletEnemyLevel2.BulletEnemyLevel2'"));

	ProyecEnemy1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
	ProyecEnemy1->SetStaticMesh(ProjectileMeshAsset1.Object);
	ProyecEnemy1->SetupAttachment(RootComponent);
	VelocidadDisparo = 1000;
	//SetActorRelativeScale3D(FVector(500.5f, 50.5f, 100.5f));
}

// Called when the game starts or when spawned
void AArmaNormal::BeginPlay()
{	
	Super::BeginPlay();	
}

void AArmaNormal::MoverProy1()
{
	FVector NewLocation = GetActorLocation() + -GetActorForwardVector() * VelocidadDisparo * GetWorld()->GetDeltaSeconds();
	SetActorLocation(NewLocation);
}
void AArmaNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverProy1();
}

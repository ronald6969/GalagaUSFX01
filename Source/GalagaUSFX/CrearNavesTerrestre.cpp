// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearNavesTerrestre.h"
#include "builderNull.h"

// Sets default values
ACrearNavesTerrestre::ACrearNavesTerrestre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//CNaves = GetWorld()->SpawnActor<AbuilderNull>();
}

// Called when the game starts or when spawned
void ACrearNavesTerrestre::BeginPlay()
{
	Super::BeginPlay();
	//CNaves = GetWorld()->SpawnActor<AbuilderNull>();
}
void ACrearNavesTerrestre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
FVector PosicionTerrestre = FVector(1200.0f, -1900.0f, 210.0f);
FRotator RotacionTerrestre = FRotator(0.0f, 180.0f, 0.0f);
void ACrearNavesTerrestre::getCrearNavesAereaCaza()
{
}

void ACrearNavesTerrestre::getCrearNavesAereaTransporte()
{
}
void ACrearNavesTerrestre::getCrearNavesTerrestreCaza()
{
	for (int i = 0; i < 3; i++)
	{
		ANaveTerrestreCaza* nave = GetWorld()->SpawnActor<ANaveTerrestreCaza>(PosicionTerrestre, RotacionTerrestre);
		PosicionTerrestre.Y += 400;
	}
	PosicionTerrestre += FVector(500.0f, -1200.0f, 0.0f);
}
void ACrearNavesTerrestre::getCrearNavesTerrestreTransporte()
{
	for (int i = 0; i < 3; i++)
	{
		ANaveTerrestreTransporte* nave = GetWorld()->SpawnActor<ANaveTerrestreTransporte>(PosicionTerrestre, RotacionTerrestre);
		PosicionTerrestre.Y += 400;
	}
}
AbuilderNull* ACrearNavesTerrestre::getBuilder()
{
	return CNaves;
}
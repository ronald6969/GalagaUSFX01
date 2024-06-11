// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearNavesTransporte.h"
#include "builderNull.h"

// Sets default values
ACrearNavesTransporte::ACrearNavesTransporte()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrearNavesTransporte::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrearNavesTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FVector PosicionTransporte = FVector(1200.0f, 0.0f, 210.0f);
FRotator RotacionTransporte = FRotator(0.0f, 180.0f, 0.0f);
void ACrearNavesTransporte::getCrearNavesAereaCaza()
{
	
}
void ACrearNavesTransporte::getCrearNavesAereaTransporte()
{
	for (int i = 0; i < 3; i++)
	{
		ANaveAereaTransporte* nave = GetWorld()->SpawnActor<ANaveAereaTransporte>(PosicionTransporte, RotacionTransporte);
		PosicionTransporte.Y += 400;
	}
	PosicionTransporte += FVector(500.0f, -1200.0f, 0.0f);
}
void ACrearNavesTransporte::getCrearNavesTerrestreCaza()
{
}
void ACrearNavesTransporte::getCrearNavesTerrestreTransporte()
{
	for (int i = 0; i < 3; i++)
	{
		ANaveTerrestreTransporte* nave = GetWorld()->SpawnActor<ANaveTerrestreTransporte>(PosicionTransporte, RotacionTransporte);
		PosicionTransporte.Y += 400;
	}
}


AbuilderNull* ACrearNavesTransporte::getBuilder()
{
	return nullptr;
}


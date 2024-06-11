// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearNavesCaza.h"
#include "builderNull.h"

// Sets default values
ACrearNavesCaza::ACrearNavesCaza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACrearNavesCaza::BeginPlay()
{
	Super::BeginPlay();
	CNaves = GetWorld()->SpawnActor<AbuilderNull>();
}

// Called every frame
void ACrearNavesCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FVector PosicionCaza= FVector(0.0f, -1900.0f, 210.0f);
FRotator RotacionCaza = FRotator(0.0f, 180.0f, 0.0f);
void ACrearNavesCaza::getCrearNavesAereaCaza() {	
	for (int i = 0; i < 3; i++)
	{
		ANaveAereaCaza* navee = GetWorld()->SpawnActor<ANaveAereaCaza>(PosicionCaza, RotacionCaza);
		PosicionCaza.Y += 400;
	}
	PosicionCaza += FVector(500.0f,-1200.0f,0.0f);
}
void ACrearNavesCaza::getCrearNavesAereaTransporte()
{
}
void ACrearNavesCaza::getCrearNavesTerrestreCaza()
{
	for (int i = 0; i < 3; i++)
	{
		ANaveTerrestreCaza* navee = GetWorld()->SpawnActor<ANaveTerrestreCaza>(PosicionCaza, RotacionCaza);
		PosicionCaza.Y += 400;
	}
	PosicionCaza.X += 500;
}
void ACrearNavesCaza::getCrearNavesTerrestreTransporte()
{
}

AbuilderNull* ACrearNavesCaza::getBuilder()
{
	return nullptr;
}


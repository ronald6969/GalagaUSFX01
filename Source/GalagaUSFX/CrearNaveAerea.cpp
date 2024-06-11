// Fill out your copyright notice in the Description page of Project Settings.


#include "CrearNaveAerea.h"
#include "builderNull.h"

// Sets default values
ACrearNaveAerea::ACrearNaveAerea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ACrearNaveAerea::BeginPlay()
{
	Super::BeginPlay();
	CNaves = GetWorld()->SpawnActor<AbuilderNull>();
}

// Called every frame
void ACrearNaveAerea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}
FVector PosicionAerea = FVector(0.0f, 0.0f, 210.0f);
FRotator RotacionAerea = FRotator(0.0f, 180.0f, 0.0f);
void ACrearNaveAerea::getCrearNavesAereaCaza()
{
	
	for (int i = 0; i < 3; i++)
	{
		ANaveAereaCaza* Nave = GetWorld()->SpawnActor<ANaveAereaCaza>(PosicionAerea, RotacionAerea);
		PosicionAerea.Y += 400;
	}
	PosicionAerea += FVector(400.0f, -1200.0f, 0.0f);
}
void ACrearNaveAerea::getCrearNavesAereaTransporte()
{

	for (int i = 0; i < 3; i++)
	{
		ANaveAereaTransporte* Nave= GetWorld()->SpawnActor<ANaveAereaTransporte>(PosicionAerea, RotacionAerea);
		PosicionAerea.Y += 400;
	}
}
void ACrearNaveAerea::getCrearNavesTerrestreCaza()
{
}
void ACrearNaveAerea::getCrearNavesTerrestreTransporte()
{

}

AbuilderNull* ACrearNaveAerea::getBuilder()
{
	return nullptr;
}
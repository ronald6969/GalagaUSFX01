// Fill out your copyright notice in the Description page of Project Settings.

#include "CrearNaveBuilder.h"



// Sets default values
ACrearNaveBuilder::ACrearNaveBuilder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACrearNaveBuilder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACrearNaveBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

AbuilderNull* ACrearNaveBuilder::BuilderNull(IBuilderCrearNavesEnemigas* newBuilder)
{
	if (newBuilder) 
	{
		newBuilder->getCrearNavesAereaCaza();
		newBuilder->getCrearNavesAereaTransporte();
		newBuilder->getCrearNavesTerrestreCaza();
		newBuilder->getCrearNavesTerrestreTransporte();
		return newBuilder->getBuilder();
	}
	return nullptr;
}

//ACrearNavesB* getBuilder() {
//	ACrearNavesB* nave = new ACrearNavesB();
//	nave->CrearNaveTerrestre = BuilderCrearNavesEnemigas->getCrearNaveTerrestre;
//	nave->CrearNaveAerea = BuilderCrearNavesEnemigas->getCrearNaveAerea;
//}

//ACrearNavesB* setCrearNavesB(ACrearNavesB* nave)
//{	
//		nave = new ACrearNavesB();
//		nave->CrearNaveTerrestre = ABuilderCrearNavesEnemigas->getCrearNaveTerrestre;
//		nave->CrearNaveAerea = ABuilderCrearNavesEnemigas->getCrearNaveAerea;
//}
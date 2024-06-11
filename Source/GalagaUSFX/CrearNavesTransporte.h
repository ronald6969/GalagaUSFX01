// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderCrearNavesEnemigas.h"
#include "builderNull.h"
#include "NaveTerrestreTransporte.h"
#include "NaveAereaTransporte.h"
#include "CrearNavesTransporte.generated.h"

UCLASS()
class GALAGAUSFX_API ACrearNavesTransporte : public AActor, public IBuilderCrearNavesEnemigas

{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACrearNavesTransporte();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	AbuilderNull* CNaves;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void getCrearNavesAereaCaza();
	virtual void getCrearNavesAereaTransporte();
	virtual void getCrearNavesTerrestreCaza();
	virtual void getCrearNavesTerrestreTransporte();
	virtual AbuilderNull* getBuilder() override;


};

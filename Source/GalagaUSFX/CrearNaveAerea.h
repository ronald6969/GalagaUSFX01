// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "builderNull.h"
#include "NaveAereaCaza.h"
#include "NaveAereaTransporte.h"
#include "BuilderCrearNavesEnemigas.h"
#include "CrearNaveAerea.generated.h"

UCLASS()
class GALAGAUSFX_API ACrearNaveAerea : public AActor, public IBuilderCrearNavesEnemigas
{
	GENERATED_BODY()
	
public:	
	ACrearNaveAerea();

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

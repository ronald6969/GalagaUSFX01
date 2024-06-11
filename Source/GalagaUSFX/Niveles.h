// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Niveles.generated.h"

UCLASS()
class GALAGAUSFX_API ANiveles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANiveles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Naves(AActor* _Nave);
	void Nivel1();
	void Nivel2();
	void Nivel3();

	class IIImplementacion* Nave;
};

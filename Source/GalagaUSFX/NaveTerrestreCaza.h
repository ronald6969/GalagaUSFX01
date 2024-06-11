// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
 
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaTerrestre.h" 
#include "NaveTerrestreCaza.generated.h"

/**
 *
 */
UCLASS()
class GALAGAUSFX_API ANaveTerrestreCaza : public ANaveEnemigaTerrestre 
{
	GENERATED_BODY()
private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen; 
public:
	virtual void BeginPlay() override;
	ANaveTerrestreCaza();
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadCargaPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadCargaVolumen = capacidad; }

	//virtual void AumentoDeVida() override;
	//virtual void AumentoDeVelocidad() override;
	//virtual void AumentoCadenciaDisparo() override;
	//virtual void AumentoDeTropas() override;
protected:
	virtual void Tick(float DeltaTime) override;
};


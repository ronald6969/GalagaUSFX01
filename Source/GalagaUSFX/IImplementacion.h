// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IImplementacion.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIImplementacion : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_API IIImplementacion
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void AumentoDeVida() = 0;
	virtual void AumentoDeVelocidad() = 0;
	virtual void AumentoCadenciaDisparo() = 0;
	virtual void AumentoDeTropas() = 0;

};

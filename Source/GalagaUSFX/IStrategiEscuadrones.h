// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IStrategiEscuadrones.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIStrategiEscuadrones : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_API IIStrategiEscuadrones
{
	GENERATED_BODY()
	 
public:
	virtual void CrearBalas() = 0;

};

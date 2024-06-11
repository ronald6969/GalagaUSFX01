// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "builderNull.h"
#include "BuilderCrearNavesEnemigas.generated.h"


UINTERFACE(MinimalAPI)
class UBuilderCrearNavesEnemigas : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_API IBuilderCrearNavesEnemigas
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void getCrearNavesAereaCaza()=0;
	virtual void getCrearNavesAereaTransporte() = 0;
	virtual void getCrearNavesTerrestreCaza() = 0;
	virtual void getCrearNavesTerrestreTransporte() = 0;

	virtual AbuilderNull* getBuilder() = 0;

};

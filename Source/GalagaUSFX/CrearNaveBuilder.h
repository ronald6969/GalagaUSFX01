 
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderCrearNavesEnemigas.h"
#include "builderNull.h"
#include "CrearNaveBuilder.generated.h"

class ABuilderCrearNavesEnemigas;
UCLASS()
class GALAGAUSFX_API ACrearNaveBuilder : public AActor
{
	GENERATED_BODY()
	
public:	
	ACrearNaveBuilder();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	ABuilderCrearNavesEnemigas* BuilderCrearNavesEnemigas;
	AbuilderNull* BuilderNull(IBuilderCrearNavesEnemigas* newBuilder);

};

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaTerrestre.h"
#include "NaveTerrestreTransporte.generated.h"

UCLASS()
class GALAGAUSFX_API ANaveTerrestreTransporte : public ANaveEnemigaTerrestre
{
	GENERATED_BODY()

public:
	ANaveTerrestreTransporte();
	virtual void BeginPlay() override;
protected:
	virtual void Tick(float DeltaTime) override;
};

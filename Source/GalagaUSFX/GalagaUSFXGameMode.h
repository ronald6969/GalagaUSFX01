#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GalagaUSFXGameMode.generated.h"

class ANaveEnemigaTerrestre;
class ANaveEnemiga;
class ANaveTerrestreTransporte;
class ANaveTerrestreCaza;
class ANaveEnemigaArea;
class ANaveAereaCaza;
class ANaveAereaTransporte;
class AbuilderNull;
class ABuilderCrearNavesEnemigas;
class ACrearNaveBuilder;
class AFabricaDeNaves;
//class ACrearNavesTransporte;
//class ACrearNaveAerea;


UCLASS(MinimalAPI)
class AGalagaUSFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalagaUSFXGameMode();

protected:
	 
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle Time;

public:
	/*ANaveTerrestreTransporte* NaveTerrestreTransporte01;
	ANaveTerrestreCaza* NaveTerrestreCaza01;
	ANaveAereaTransporte* NaveAereaTransporte01;
	ANaveAereaCaza* NaveAereaCaza01;*/

	ACrearNaveBuilder* Builder;
	virtual void Tick(float DeltaTime) override;

private:
	int TiempoTranscurrido;
	int record;
	bool crear;
	class AFabricaDeNaves* fabrica; 

};


#include "GalagaUSFXGameMode.h"
#include "GalagaUSFXPawn.h"  
#include "NaveEnemiga.h"
#include "NaveEnemigaTerrestre.h"
#include "NaveTerrestreTransporte.h"
#include "NaveTerrestreCaza.h"
#include "NaveEnemigaAerea.h"
#include "NaveAereaCaza.h"
#include "NaveAereaTransporte.h"
#include "FabricaDeNaves.h"
#include "BuilderCrearNavesEnemigas.h"
#include "CrearNaveBuilder.h" 
#include "CrearNaveAerea.h"
#include "CrearNavesCaza.h"
#include "CrearNavesTerrestre.h"
#include "ArmasFacade.h"
#include "CrearNavesTransporte.h"
#include "EscuadronNormal.h"
#include "EscuadronLineal.h"
#include "FabricaDeNaves.h"
#include "builderNull.h" 
#include "Niveles.h" 

AGalagaUSFXGameMode::AGalagaUSFXGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalagaUSFXPawn::StaticClass();
	crear = false;  
}

void AGalagaUSFXGameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld(); 
	FVector ubicacion= FVector(0.0f, 0.0f, 210.0f); 

	World->SpawnActor<ANaveTerrestreCaza>(ANaveTerrestreCaza::StaticClass());
	World->SpawnActor<ANiveles>(ANiveles::StaticClass());
	//fabrica = World->SpawnActor<AFabricaDeNaves>();
	//
	//for (int i = 0; i < 2; i++) {
	//	fabrica->CrearNave("NaveTerrestreCaza", World, ubicacion );
	//	ubicacion.Y += 200.0f;
	//}
	//ubicacion = FVector(300.0f, -400.f, 210.0f);
	//for (int i = 0; i < 4; i++) {
	//	fabrica->CrearNave("NaveAereaCaza", World, ubicacion);
	//	ubicacion.Y += 400.0f;
	//}
	//ubicacion = FVector(600.0f, -800.f, 210.0f);
	//for (int i = 0; i < 6; i++) {
	//	fabrica->CrearNave("NaveAereaTransporte", World, ubicacion ); 
	//	ubicacion.Y += 400.0f;
	//} 

	//if(World){
	//	World->GetTimerManager().SetTimer(Time, [World]() {
	//		ACrearNaveBuilder* Builder = World->SpawnActor<ACrearNaveBuilder>();
	//		ACrearNaveAerea* NavesAereas = World->SpawnActor<ACrearNaveAerea>();
	//		ACrearNavesCaza* NavesCaza = World->SpawnActor<ACrearNavesCaza>();
	//		ACrearNavesTerrestre* NavesTerrestres = World->SpawnActor<ACrearNavesTerrestre>();
	//		ACrearNavesTransporte* NavesTransporte = World->SpawnActor<ACrearNavesTransporte>();
	//		Builder->BuilderNull(NavesAereas);
	//		Builder->BuilderNull(NavesTerrestres);
	//		Builder->BuilderNull(NavesCaza);
	//		Builder->BuilderNull(NavesTransporte);/*
	//		Builder = World->SpawnActor<ACrearNaveBuilder>();
	//		ACrearNaveAerea* NavesAereas = World->SpawnActor<ACrearNaveAerea>();
	//		ACrearNavesCaza* NavesCaza = World->SpawnActor<ACrearNavesCaza>();
	//		ACrearNavesTerrestre* NavesTerrestres = World->SpawnActor<ACrearNavesTerrestre>();
	//		ACrearNavesTransporte* NavesTransporte = World->SpawnActor<ACrearNavesTransporte>();
	//		AbuilderNull* builderNull1 = Builder->BuilderNull(NavesAereas);
	//		AbuilderNull* builderNull2 = Builder->BuilderNull(NavesTerrestres);
	//		AbuilderNull* builderNull3 = Builder->BuilderNull(NavesCaza);
	//		AbuilderNull* builderNull4 = Builder->BuilderNull(NavesTransporte);*/

	//	}, 10.0f, false);
	//	
	//}
	AArmasFacade* ArmasFacade = GetWorld()->SpawnActor<AArmasFacade>(); 
	ANaveEnemiga* NaveEnemiga = GetWorld()->SpawnActor<ANaveEnemiga>(); 
}
void AGalagaUSFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

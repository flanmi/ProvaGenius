// Fill out your copyright notice in the Description page of Project Settings.

#include "ProvaGenius.h"
#include "GeniusPawn.h"
#include "GeniusCircles.h"
#include "GridGenius.h"

// Sets default values
AGeniusPawn::AGeniusPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(RootComponent);




	ConstructorHelpers::FObjectFinder<UBlueprint>RedBP(TEXT("Blueprint'/Game/Blueprints/GeniusCirclesRed.GeniusCirclesRed'"));
	ConstructorHelpers::FObjectFinder<UBlueprint>GreenBP(TEXT("Blueprint'/Game/Blueprints/GeniusCirclesGreen.GeniusCirclesGreen'"));
	ConstructorHelpers::FObjectFinder<UBlueprint>BlueBP(TEXT("Blueprint'/Game/Blueprints/GeniusCirclesBlue.GeniusCirclesBlue'"));
	ConstructorHelpers::FObjectFinder<UBlueprint>YellowBP(TEXT("Blueprint'/Game/Blueprints/GeniusCirclesYellow.GeniusCirclesYellow'"));

	if (RedBP.Succeeded()) {
		Red = Cast<UClass>(RedBP.Object->GeneratedClass);
	}
	if (GreenBP.Succeeded()) {
		Green = Cast<UClass>(GreenBP.Object->GeneratedClass);
	}
	if (BlueBP.Succeeded()) {
		Blue = Cast<UClass>(BlueBP.Object->GeneratedClass);
	}
	if (YellowBP.Succeeded()) {
		Yellow = Cast<UClass>(YellowBP.Object->GeneratedClass);
	}





	AutoPossessPlayer = EAutoReceiveInput::Player0;




}

// Called when the game starts or when spawned
void AGeniusPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeniusPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AGeniusPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void AGeniusPawn::RandPick() {
	UWorld* World = GetWorld();

	/*

	if (World != nullptr) {
		Pick = FMath::RandRange(0, 3);

		switch (Pick) {
		case 0:
			//pegar o metodo de piscar o botão(BlinkOn();) da classe GeniusCircles
			AGeniusCircles* Red = Cast<AGeniusCircles>(Red)->BlinkOn();;
			


			break;
		case 1:

			break;

		case 2:
			break;

		case 3:
			break;
		}


	}
	*/

}
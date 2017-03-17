// Fill out your copyright notice in the Description page of Project Settings.

#include "ProvaGenius.h"
#include "GridGenius.h"
#include "GeniusCircles.h"


// Sets default values
AGridGenius::AGridGenius()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

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

}

// Called when the game starts or when spawned
void AGridGenius::BeginPlay()
{
	Super::BeginPlay();

	float LocationX = 0.0f;
	float LocationZ = 0.0f;

	UWorld* World = GetWorld();




	if (World != nullptr) {
		FVector Location(LocationX, 0.0f, LocationZ);
		FActorSpawnParameters SpawnParameters;
	
		AGeniusCircles* Circle1 = World->SpawnActor<AGeniusCircles>(Red, Location, FRotator::ZeroRotator, SpawnParameters);
		LocationX += 250.0f;
		AGeniusCircles* Circle2 = World->SpawnActor<AGeniusCircles>(Blue, Location, FRotator::ZeroRotator, SpawnParameters);
		LocationX += 500.0f;
		AGeniusCircles* Circle3 = World->SpawnActor<AGeniusCircles>(Yellow, Location, FRotator::ZeroRotator, SpawnParameters);
		LocationX += 250.0f;
		LocationZ -= 400.0f;
		AGeniusCircles* Circle4 = World->SpawnActor<AGeniusCircles>(Green, Location, FRotator::ZeroRotator, SpawnParameters);
		LocationX += 500.0f;
		LocationZ -= 400.0f;
	}
}

// Called every frame
void AGridGenius::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


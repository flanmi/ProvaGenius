// Fill out your copyright notice in the Description page of Project Settings.

#include "ProvaGenius.h"
#include "GeniusCircles.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "GeniusPawn.h"

// Sets default values
AGeniusCircles::AGeniusCircles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetSprite(BaseSprite);
	Sprite->OnInputTouchBegin.AddDynamic(this,&AGeniusCircles::OnTouchBegin);
	RootComponent = Sprite;


}

// Called when the game starts or when spawned
void AGeniusCircles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeniusCircles::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AGeniusCircles::OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent) {

	UE_LOG(LogTemp, Warning, TEXT("It works!"));

	UWorld* World = GetWorld();
	if (World != nullptr) {
		
		AGeniusPawn* Pawn = Cast<AGeniusPawn>(UGameplayStatics::GetPlayerController	(World, 0)->GetControlledPawn());
		BlinkOn();

		//if (!Shine) {
			//Sprite->SetSprite(ShineSprite);
			//Shine = true;
		
	
	}




}

void AGeniusCircles::BlinkOn() {


	Sprite->SetSprite(ShineSprite);
	GetWorldTimerManager().SetTimer(TimerBlink, this, &AGeniusCircles::BlinkOff, 1.0f, true);


}



void AGeniusCircles::BlinkOff() {

	Sprite->SetSprite(BaseSprite);
	GetWorldTimerManager().ClearTimer(TimerBlink);

}
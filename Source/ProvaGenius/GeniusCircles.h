// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GeniusCircles.generated.h"

UCLASS()
class PROVAGENIUS_API AGeniusCircles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeniusCircles();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
private:


	UPROPERTY(EditAnywhere)
		class UPaperSpriteComponent* Sprite;

	UPROPERTY(EditAnywhere)
		class UPaperSprite* BaseSprite;

	UPROPERTY(EditAnywhere)
		class UPaperSprite* ShineSprite;
	
	UPROPERTY(EditAnywhere)
		int Index;

	UPROPERTY(EditAnywhere)
		bool Shine;

	UFUNCTION()
		void OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent);


	FTimerHandle TimerBlink;


	void BlinkOn();
	void BlinkOff();

};

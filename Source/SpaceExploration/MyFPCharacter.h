// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/WorldSettings.h"
#include "MyFPCharacter.generated.h"

UCLASS()
class SPACEEXPLORATION_API AMyFPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyFPCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	void HoriMove(float value);
	void VertMove(float value);

	void HoriRot(float value);
	void VertRot(float value);

	void CheckJump();
	AWorldSettings* worldSettings;

	UPROPERTY()
	{
		bool jumping;
		bool gravitySwitch;
	}

	UPROPERTY(EditAnywhere, Category = "Camera")
		UCameraComponent* cam;
};
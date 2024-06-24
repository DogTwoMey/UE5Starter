// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class APlayerCharacter : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	static constexpr int COIN_MAX_COUNT = 10;
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Property")
	int coinCount;
	
	UFUNCTION(BlueprintCallable)
	bool getCoin(int count);

	UFUNCTION(BlueprintCallable)
	bool initializeProperty();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "ST1PlayerCharacter.generated.h"

UCLASS()
class AST1PlayerCharacter : public ACharacter {
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AST1PlayerCharacter();

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

	UFUNCTION(BlueprintCallable)
	void BeginPlayLog();
private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> CameraBoom;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta=(AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> PlayerCamera;

	UFUNCTION()
	bool initializeComponent();
	
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};

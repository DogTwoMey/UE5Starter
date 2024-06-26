// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	initializeComponent();
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool APlayerCharacter::getCoin(int count) {
	UE_LOG(LogTemp, Log, TEXT("getCoin"));
	if (this->coinCount >= this->COIN_MAX_COUNT) {
		return false;
	}
	this->coinCount += count;
	this->coinCount = std::min(this->coinCount, this->COIN_MAX_COUNT);
	return true;
}


bool APlayerCharacter::initializeProperty() {
	UE_LOG(LogTemp, Log, TEXT("APlayerCharacter::initializeProperty"));
	this->coinCount = 0;
	return true;
}

bool APlayerCharacter::initializeComponent() {
	UE_LOG(LogTemp, Log, TEXT("APlayerCharacter::initializeComponent"));
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->SetRelativeRotation(FRotator(-40.f, 0.f, 0.f));
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>("Player Camera");
	PlayerCamera->SetupAttachment(CameraBoom);
	// PlayerCamera->SetupAttachment(GetMesh(), FName("RootSocket"));
	
	FVector position = CameraBoom->GetComponentLocation();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, FString::Printf(TEXT("APlayerCharacter::initializeComponent, camera_position: %f,%f,%f"), position[0], position[1], position[2]));
	return true;
}

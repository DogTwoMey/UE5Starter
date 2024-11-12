// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ST1PlayerCharacter.h"

// Sets default values
AST1PlayerCharacter::AST1PlayerCharacter() {
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	initializeComponent();
}

// Called when the game starts or when spawned
void AST1PlayerCharacter::BeginPlay() {
	Super::BeginPlay();
	initializeProperty();
	BeginPlayLog();
}

// Called every frame
void AST1PlayerCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AST1PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

bool AST1PlayerCharacter::getCoin(int count) {
	UE_LOG(LogTemp, Log, TEXT("getCoin"));
	if (this->coinCount >= this->COIN_MAX_COUNT) {
		return false;
	}
	this->coinCount += count;
	this->coinCount = std::min(this->coinCount, this->COIN_MAX_COUNT);
	return true;
}


bool AST1PlayerCharacter::initializeProperty() {
	UE_LOG(LogTemp, Log, TEXT("AST1PlayerCharacter::initializeProperty"));
	this->coinCount = 0;
	return true;
}

bool AST1PlayerCharacter::initializeComponent() {
	UE_LOG(LogTemp, Log, TEXT("AST1PlayerCharacter::initializeComponent"));
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 600.f;
	CameraBoom->SetRelativeRotation(FRotator(-40.f, 0.f, 0.f));
	
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>("Player Camera");
	PlayerCamera->SetupAttachment(CameraBoom);
	// PlayerCamera->SetupAttachment(GetMesh(), FName("RootSocket"))；
	
	return true;
}

void AST1PlayerCharacter::BeginPlayLog() {
	FVector position = CameraBoom->GetComponentLocation();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, FString::Printf(TEXT("AST1PlayerCharacter::initializeComponent, camera_position: %f,%f,%f"), position[0], position[1], position[2]));
}

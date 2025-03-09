// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingBase.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ABuildingBase::ABuildingBase()
	: BuildDuration(1.0f)
	, BuildDurationMultiply(1.0f)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	
}



// Called when the game starts or when spawned
void ABuildingBase::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABuildingBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABuildingBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "QueenActor.h"

// Sets default values
AQueenActor::AQueenActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>QueenMeshAsset(TEXT("StaticMesh'/Game/ChessPieces/SM_Queen.SM_Queen'"));

	if (QueenMeshAsset.Succeeded())
		Mesh->SetStaticMesh(QueenMeshAsset.Object);
	else
		UE_LOG(LogTemp, Warning, TEXT("No Mesh Found for Queen!"));
}

// Called when the game starts or when spawned
void AQueenActor::BeginPlay()
{
	Super::BeginPlay();
	
}
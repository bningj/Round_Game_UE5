// Fill out your copyright notice in the Description page of Project Settings.


#include "Rank_Component.h"
#include <algorithm>
#include <vector>

// Sets default values for this component's properties
URank_Component::URank_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URank_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URank_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
	// ...
}

void URank_Component::P()
{
// 	GEngine->AddOnScreenDebugMessage(0, 2.f, FColor::Green, "Hello!!!");
// 	UE_LOG(LogTemp, Log, TEXT("Hello11"));
}

void URank_Component::DoRank()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, "Start Ranking!!!");
	}
	actors.Sort([](const FCtype& a, const FCtype& b) {return a.speed > b.speed; });
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, "Stop Ranking!!!");
	}
	for (int i = 0; i < actors.Num(); i++) {
		UE_LOG(LogTemp, Log, TEXT("%d"),actors[i].speed);
	}
	
}


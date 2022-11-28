// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Rank_Component.generated.h"


USTRUCT(BlueprintType)
struct FCtype
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ACharacter* actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int64 speed;
};

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ALLEY_API URank_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URank_Component();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "property")
		TArray<FCtype> actors;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		void P();

	UFUNCTION(BlueprintCallable)
		void DoRank();
};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Base_Character.h"
#include "Kismet/GameplayStatics.h"
#include "UTraceFunctions.generated.h"

/**
 * 
 */
UCLASS()
class ALLEY_API UUTraceFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Trace Functions")
	static void TraceForTarget(const AActor* Actor, const float Distance, const EDrawDebugTrace::Type DrawDebugTrace, bool& Detected, ABase_Character*& Target);
};

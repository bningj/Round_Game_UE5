// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "UpdateDataTable.generated.h"

/**
 * 
 */
UCLASS()
class ALLEY_API UUpdateDataTable : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "About DataTable")
	UDataTable* tableInfo;

	UFUNCTION(BlueprintCallable, Category = "About DataTable")
	static void UpdateLevel(int level, UDataTable* targettable, FName columnname);
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/DataTableFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MyDataTableFunctionLibrary.generated.h"

/** Please add a struct description */
USTRUCT(BlueprintType)
struct FSkill_Main_Base
{
	GENERATED_BODY()
public:
	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Id", MakeStructureDefaultValue = "0"))
		int32 Id;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Name"))
		FString Name;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "ShowPic", MakeStructureDefaultValue = "None"))
		TObjectPtr<UTexture2D> ShowPic;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Dis"))
		FText Dis;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Level", MakeStructureDefaultValue = "0"))
		int32 Level;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Childs"))
		TArray<FName> Childs;
};


/**
 * 
 */
UCLASS()
class ALLEY_API UMyDataTableFunctionLibrary : public UDataTableFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "DataTable")
	static bool UpdateLevel(UDataTable* Table, FName RowName);
};

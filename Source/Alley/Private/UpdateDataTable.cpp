// Fill out your copyright notice in the Description page of Project Settings.


#include "UpdateDataTable.h"

void UUpdateDataTable::UpdateLevel(int level, UDataTable* targettable, FName columnname)
{	
// 	auto rowstr = targettable->RowStruct;
// 	FString* s;
// 	targettable->FindRow<rowstr>(columnname, s, true);

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, "OK!!!");
	}

}

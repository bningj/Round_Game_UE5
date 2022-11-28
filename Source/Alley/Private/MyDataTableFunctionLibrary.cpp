// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDataTableFunctionLibrary.h"

bool UMyDataTableFunctionLibrary::UpdateLevel(UDataTable* Table, FName RowName)
{
	if (!Table)
	{
		return false;
	}
	else if (Table->RowStruct == nullptr)
	{
		return false;
	}
	FSkill_Main_Base* Row = (FSkill_Main_Base*)Table->GetRowMap()[RowName];
	if (Row)
	{
		Row->Level++;

 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, Row->Name);
 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d"), Row->Level));
		return true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("技能不存在"));
		return false;
	}
	return false;

// 	auto now = Table->GetRowMap().Find(RowName);
// 	if (GEngine) {
// 		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, "ok!!!!!!");
// 	}

	/*UKismetSystemLibrary::PrintString(GetWorld(),TEXT(" Not Find DataTable!"));*/
// 	FString* s = new FString;
// 	for (FName RowName : Table->GetRowNames())
// 	{
// 		FSkill_Main_Base* Row = Table->FindRow<FSkill_Main_Base>(RowName,*s);
// 		if (Row)
// 		{
// 			RowName.ToString(*s);
// 			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, *s);
// 			int32 level = Row->Level;
// 			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d"),level));
// 		}
// 		
// 	}

// 	for (auto it : Table->GetRowMap())
// 	{
// 		FString RowName = (it.Key).ToString();
// 
// 		FSkill_Main_Base* Row = (FSkill_Main_Base*)it.Value;
// 
// 		Row->Level++;
// 
// 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%d"), Row->Level));
// 	}
}

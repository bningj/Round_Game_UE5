// Copyright Epic Games, Inc. All Rights Reserved.

#include "mupluginBPLibrary.h"
#include "muplugin.h"

UmupluginBPLibrary::UmupluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UmupluginBPLibrary::mupluginSampleFunction(float Param)
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor::Green, "Stop Ranking!!!");
	}
	return -1;
}


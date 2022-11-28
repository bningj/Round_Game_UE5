// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Character.h"

#include "AbilitySystemComponent.h"
// Sets default values
ABase_Character::ABase_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
}

// Called when the game starts or when spawned
void ABase_Character::BeginPlay()
{
	Super::BeginPlay();
	
	if (AbilitySystemComponent != nullptr)
	{
		if (PreloadedAbilities.Num() > 0)
		{
			for (auto i = 0; i < PreloadedAbilities.Num(); i++)
			{
				if (PreloadedAbilities[i] != nullptr)
				{
					AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(PreloadedAbilities[i].GetDefaultObject(), 1, 0));
				}
			}

		}

		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

// Called every frame
void ABase_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABase_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* ABase_Character::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


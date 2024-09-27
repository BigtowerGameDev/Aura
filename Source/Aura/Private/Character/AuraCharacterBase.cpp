// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Character/AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{
 	PrimaryActorTick.bCanEverTick = false;

}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


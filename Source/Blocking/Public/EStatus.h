// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EStatus : uint8
{
	Not_Deployed UMETA(DisplayName = "Not Deployed"),
	Deployed UMETA(DisplayName = "Deployed"),
	Broken UMETA(DisplayName = "Broken"),
};
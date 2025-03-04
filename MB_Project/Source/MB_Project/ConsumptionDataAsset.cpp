// Fill out your copyright notice in the Description page of Project Settings.


#include "ConsumptionDataAsset.h"

float UConsumptionDataAsset::GetValueAtTime(float Time) const
{
	return *consumptionOverTime.Find(Time) ? *consumptionOverTime.Find(Time) : -1.0;
}

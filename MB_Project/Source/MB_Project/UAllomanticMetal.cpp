0// Fill out your copyright notice in the Description page of Project Settings.


#include "UAllomanticMetal.h"

UAllomanticMetal::UAllomanticMetal()
{
	
}

UAllomanticMetal::~UAllomanticMetal()
{
}

void UAllomanticMetal::Initialize(EMetalType type_, int32 initialMetalReserves_)
{
	metalType = type_;
	metalReserves = initialMetalReserves_;
}

EMetalType UAllomanticMetal::getMetalType()
{
	return metalType;
}

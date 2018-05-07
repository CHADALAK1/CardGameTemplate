// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

USTRUCT(BlueprintType)
struct FCardData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CardData)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CardData)
	class UTexture2D *Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CardData, meta = (ClampMin = "1", ClampMax = "13"))
	int32 FaceValue;
};

UCLASS()
class CARDGAMETEMPLATE_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();
	
};

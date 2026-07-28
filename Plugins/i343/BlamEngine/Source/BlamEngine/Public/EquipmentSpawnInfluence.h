#pragma once
#include "CoreMinimal.h"
#include "EquipmentSpawnInfluence.generated.h"

class BLAMENGINE_API UBlamEquipmentTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FEquipmentSpawnInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamEquipmentTagDataAsset> Equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FEquipmentSpawnInfluence();
};


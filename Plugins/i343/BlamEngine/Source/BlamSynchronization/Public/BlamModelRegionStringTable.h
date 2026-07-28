#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamModelRegionStringTable.generated.h"

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamModelRegionStringTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Permutations;
    
    UBlamModelRegionStringTable();

};


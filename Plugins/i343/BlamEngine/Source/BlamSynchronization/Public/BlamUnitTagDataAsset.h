#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTagDataAsset.h"
#include "BlamUnitTagDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamUnitTagDataAsset : public UBlamObjectTagDataAsset {
    GENERATED_BODY()
public:
    UBlamUnitTagDataAsset();

};


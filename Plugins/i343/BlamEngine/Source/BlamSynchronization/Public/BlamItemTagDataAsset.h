#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTagDataAsset.h"
#include "BlamItemTagDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamItemTagDataAsset : public UBlamObjectTagDataAsset {
    GENERATED_BODY()
public:
    UBlamItemTagDataAsset();

};


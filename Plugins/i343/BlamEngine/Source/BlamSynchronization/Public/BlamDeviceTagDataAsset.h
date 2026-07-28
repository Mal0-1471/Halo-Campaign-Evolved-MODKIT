#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTagDataAsset.h"
#include "BlamDeviceTagDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamDeviceTagDataAsset : public UBlamObjectTagDataAsset {
    GENERATED_BODY()
public:
    UBlamDeviceTagDataAsset();

};


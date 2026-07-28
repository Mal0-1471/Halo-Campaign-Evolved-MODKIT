#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "BlamBaseDynamicObjectTagDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBaseDynamicObjectTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UBlamBaseDynamicObjectTagDataAsset();

};


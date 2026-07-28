#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamTagDataAssetBase.generated.h"

class UBlamTagDataAssetBase;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamTagDataAssetBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlamTagDataAssetBase*> CookedAssetsReferencedByTag;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 BinaryBlobSize;
    
    UBlamTagDataAssetBase();

};


#pragma once
#include "CoreMinimal.h"
#include "BlamBaseSoundTagDataAsset.h"
#include "BlamBaseSoundDefinitionTagDataAsset.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBaseSoundDefinitionTagDataAsset : public UBlamBaseSoundTagDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DefaultAssetReference;
    
public:
    UBlamBaseSoundDefinitionTagDataAsset();

};


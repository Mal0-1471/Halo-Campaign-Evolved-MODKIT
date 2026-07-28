#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "BlamDamageResponseDefinitionTagDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamDamageResponseDefinitionTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DefaultAssetReference;
    
public:
    UBlamDamageResponseDefinitionTagDataAsset();

};


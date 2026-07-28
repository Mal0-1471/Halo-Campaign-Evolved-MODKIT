#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "BlamBaseLoopingSoundTagDataAsset.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBaseLoopingSoundTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DefaultAssetReference;
    
public:
    UBlamBaseLoopingSoundTagDataAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "BlamCinematicTagDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamCinematicTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* DefaultAssetReference;
    
public:
    UBlamCinematicTagDataAsset();

};


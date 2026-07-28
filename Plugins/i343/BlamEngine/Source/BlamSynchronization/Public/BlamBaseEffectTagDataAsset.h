#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "Templates/SubclassOf.h"
#include "BlamBaseEffectTagDataAsset.generated.h"

class UBlamEffectComponent;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBaseEffectTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlamEffectComponent> AssetReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPerInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlamEffectComponent> DefaultAssetReference;
    
public:
    UBlamBaseEffectTagDataAsset();

};


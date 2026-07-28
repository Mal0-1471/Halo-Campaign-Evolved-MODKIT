#pragma once
#include "CoreMinimal.h"
#include "DataLayerSelector.generated.h"

class BLAMENGINE_API UDataLayerAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FDataLayerSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UDataLayerAsset>> DataLayerAssets;
    
     FDataLayerSelector();
};


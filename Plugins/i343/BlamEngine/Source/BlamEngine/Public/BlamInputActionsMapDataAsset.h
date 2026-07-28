#pragma once
#include "CoreMinimal.h"
#include "EBlamInputAction.h"
#include "Engine/DataAsset.h"
#include "BlamInputActionsMapDataAsset.generated.h"

class BLAMENGINE_API UBlamInputAction;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamInputActionsMapDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlamInputAction, UBlamInputAction*> BlamInputActionsMap;
    
    UBlamInputActionsMapDataAsset();

};


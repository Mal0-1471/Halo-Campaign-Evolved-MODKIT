#pragma once
#include "CoreMinimal.h"
#include "HaloModularGameModeBase.h"
#include "FrontendGameMode.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API AFrontendGameMode : public AHaloModularGameModeBase {
    GENERATED_BODY()
public:
    AFrontendGameMode(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "HaloModularGameState.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AHaloModularGameState : public AGameState {
    GENERATED_BODY()
public:
    AHaloModularGameState(const FObjectInitializer& ObjectInitializer);

};


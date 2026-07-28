#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "HaloModularPlayerState.generated.h"

UCLASS(Blueprintable)
class HALOMODULARGAMEPLAYACTORS_API AHaloModularPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AHaloModularPlayerState(const FObjectInitializer& ObjectInitializer);

};


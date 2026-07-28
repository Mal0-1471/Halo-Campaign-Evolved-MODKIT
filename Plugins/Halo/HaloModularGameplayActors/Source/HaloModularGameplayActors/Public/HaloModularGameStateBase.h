#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "HaloModularGameStateBase.generated.h"

UCLASS(Blueprintable)
class HALOMODULARGAMEPLAYACTORS_API AHaloModularGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    AHaloModularGameStateBase(const FObjectInitializer& ObjectInitializer);

};


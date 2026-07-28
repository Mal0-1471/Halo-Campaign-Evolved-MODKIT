#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HaloModularGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class HALOMODULARGAMEPLAYACTORS_API AHaloModularGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AHaloModularGameModeBase(const FObjectInitializer& ObjectInitializer);

};


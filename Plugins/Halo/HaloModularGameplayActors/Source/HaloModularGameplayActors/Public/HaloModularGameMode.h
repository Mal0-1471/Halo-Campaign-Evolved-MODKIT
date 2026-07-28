#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "HaloModularGameMode.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AHaloModularGameMode : public AGameMode 
{
    GENERATED_BODY()
public:
    AHaloModularGameMode(const FObjectInitializer& ObjectInitializer);

};


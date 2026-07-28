#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BlamHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class BLAMENGINE_API ABlamHUD : public AHUD {
    GENERATED_BODY()
public:
    ABlamHUD(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "BlamCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class BLAMSYNCHRONIZATION_API ABlamCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ABlamCameraManager(const FObjectInitializer& ObjectInitializer);

};


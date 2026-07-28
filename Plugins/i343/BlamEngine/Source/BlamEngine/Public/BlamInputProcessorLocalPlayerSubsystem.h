#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "BlamInputProcessorLocalPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamInputProcessorLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UBlamInputProcessorLocalPlayerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetUIActive(const bool bUIActive);
    
};


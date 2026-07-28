#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BlamDeferredEventHandlerSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamDeferredEventHandlerSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBlamDeferredEventHandlerSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BlamScenarioLifecycleEventsSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamScenarioLifecycleEventsSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBlamScenarioLifecycleEventsSubsystem();

};


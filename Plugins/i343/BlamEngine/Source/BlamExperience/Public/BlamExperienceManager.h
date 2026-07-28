#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "BlamExperienceManager.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamExperienceManager : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBlamExperienceManager();

};


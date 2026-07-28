#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamEngineSynchronizationManager.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamEngineSynchronizationManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamEngineSynchronizationManager();

};


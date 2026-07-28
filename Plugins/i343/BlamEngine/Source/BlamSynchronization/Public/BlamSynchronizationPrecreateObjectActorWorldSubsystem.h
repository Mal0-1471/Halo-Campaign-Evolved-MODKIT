#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamSynchronizationPrecreateObjectActorWorldSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamSynchronizationPrecreateObjectActorWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamSynchronizationPrecreateObjectActorWorldSubsystem();

};


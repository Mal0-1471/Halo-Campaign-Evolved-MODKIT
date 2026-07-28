#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamDeferredComponentMovementSystem.generated.h"

UCLASS(Blueprintable)
class UBlamDeferredComponentMovementSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamDeferredComponentMovementSystem();

};


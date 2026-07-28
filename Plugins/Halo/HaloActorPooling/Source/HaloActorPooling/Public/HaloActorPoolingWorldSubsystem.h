#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "HaloActorPoolingWorldSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHaloActorPoolingWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UHaloActorPoolingWorldSubsystem();

};


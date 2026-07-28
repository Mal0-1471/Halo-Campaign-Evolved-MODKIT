#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamBreakableSurfaceSaveGameSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamBreakableSurfaceSaveGameSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamBreakableSurfaceSaveGameSubsystem();

};


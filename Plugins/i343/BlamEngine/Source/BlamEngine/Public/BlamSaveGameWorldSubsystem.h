#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamSaveGameWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSaveGameWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamSaveGameWorldSubsystem();

};


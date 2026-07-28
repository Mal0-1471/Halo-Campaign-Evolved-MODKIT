#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamMapGlueOuterSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamMapGlueOuterSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamMapGlueOuterSubsystem();

};


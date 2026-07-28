#pragma once

#include "Subsystems/EngineSubsystem.h"
#include "BlamEngineGlueOuterSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMGLUE_API UBlamEngineGlueOuterSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UBlamEngineGlueOuterSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "BlamGameGlueSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=BlamGameGlueOuterSubsystem)
class UBlamGameGlueSubsystem : public USubsystem {
    GENERATED_BODY()
public:
    UBlamGameGlueSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamGameGlueOuterSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamGameGlueOuterSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamGameGlueOuterSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "XblSandboxManagerSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UXblSandboxManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UXblSandboxManagerSubsystem();

};


#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamGameInstanceSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMENGINE_API UBlamGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamGameInstanceSubsystem();

};


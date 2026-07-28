#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloSessionAdvertisementSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHaloSessionAdvertisementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHaloSessionAdvertisementSubsystem();

};


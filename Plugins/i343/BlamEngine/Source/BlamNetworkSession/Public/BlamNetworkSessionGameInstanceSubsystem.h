#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamNetworkSessionGameInstanceSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamNetworkSessionGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamNetworkSessionGameInstanceSubsystem();

};


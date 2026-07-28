#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "HaloOnlinePrivilegeSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHaloOnlinePrivilegeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UHaloOnlinePrivilegeSubsystem();

};


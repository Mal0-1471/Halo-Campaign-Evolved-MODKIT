#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BlamOnlineSessionSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBlamOnlineSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamOnlineSessionSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToPlay() const;
    
};


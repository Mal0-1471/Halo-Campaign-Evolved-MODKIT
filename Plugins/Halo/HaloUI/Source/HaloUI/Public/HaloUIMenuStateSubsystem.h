#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "HaloUIMenuStateSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIMenuStateSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentBehavior;
    
public:
    UHaloUIMenuStateSubsystem();

};


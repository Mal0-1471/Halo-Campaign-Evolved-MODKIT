#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "BlamBreakableSurfaceRegistrySubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamBreakableSurfaceRegistrySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UBlamBreakableSurfaceRegistrySubsystem();

    UFUNCTION(BlueprintCallable)
    void NotifyStateChange(AActor* Actor, bool bIsBroken);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBrokenEventCount(const AActor* Actor) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "EBlamAICombatStatus.h"
#include "BlamObjectTypeComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamBipedComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamBipedComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStun, bool, bStunned, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAICombatStatusChanged, EBlamAICombatStatus, PreviousAICombatStatus, EBlamAICombatStatus, AICombatStatus, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAICombatStatusChanged OnAICombatStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStun OnStun;
    
    UBlamBipedComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFlightAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReducedGravity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlyingSpeedFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamAICombatStatus GetAICombatStatus() const;
    
};


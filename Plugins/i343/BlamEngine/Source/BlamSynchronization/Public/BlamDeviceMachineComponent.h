#pragma once
#include "CoreMinimal.h"
#include "EBlamDeviceMachineType.h"
#include "BlamDeviceComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamDeviceMachineComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamDeviceMachineComponent : public UBlamDeviceComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsShieldedChanged, bool, bIsShieldedFlag, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlagChanged_BP, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsShieldedChanged OnIsShieldedChanged;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlagChanged_BP OnOneSidedChanged_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFlagChanged_BP OnIsInMotionChanged_BP;
    
public:
    UBlamDeviceMachineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeverAppearsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShielded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenedByMeleeAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOneSidedForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOneSided() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamDeviceMachineType GetDeviceMachineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNotOperateAutomatically() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesNotCloseAutomatically() const;
    
};


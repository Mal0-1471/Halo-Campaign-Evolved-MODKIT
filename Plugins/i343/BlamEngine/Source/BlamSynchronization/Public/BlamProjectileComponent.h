#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTypeComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamProjectileComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamProjectileComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBounce, int32, BounceCount, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttach, bool, bAttached, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBounce OnBounce;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttach OnAttach;
    
    UBlamProjectileComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalizedSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinalSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetonationTimeFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDestinationRangeFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBounceDistanceFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBounceDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBounceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccelerationRangeFraction() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "BlamDeviceComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamDeviceTerminalComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamDeviceTerminalComponent : public UBlamDeviceComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTerminalStartedChanged, bool, bTerminalStartedFlag, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTerminalStartedChanged OnTerminalStartedChanged;
    
    UBlamDeviceTerminalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TerminalStarted() const;
    
};


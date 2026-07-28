#pragma once
#include "CoreMinimal.h"
#include "EBlamPropertyChangeReason.h"
#include "HaloAudioPortalDoorComponent.h"
#include "BlamAcousticPortalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamAcousticPortalComponent : public UHaloAudioPortalDoorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScenarioObjectIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedOpenDirection;
    
    UBlamAcousticPortalComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDevicePositionFractionChanged(float PreviousPositionFraction, float PositionFraction, EBlamPropertyChangeReason BlamPropertyChangeReason);
    
};


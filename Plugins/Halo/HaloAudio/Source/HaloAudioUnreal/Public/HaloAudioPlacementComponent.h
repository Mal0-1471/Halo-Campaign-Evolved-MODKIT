#pragma once
#include "CoreMinimal.h"
#include "HaloAudioTrackingComponent.h"
#include "HaloAudioPlacementComponent.generated.h"

class UHaloAudioSoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioPlacementComponent : public UHaloAudioTrackingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioSoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitiallyActive;
    
    UHaloAudioPlacementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlacementActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlacementActive();
    
};


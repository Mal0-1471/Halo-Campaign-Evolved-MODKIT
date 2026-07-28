#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HaloAudioAttachedPlayingId.h"
#include "HaloAudioTrackingComponent.generated.h"

class AActor;
class UAkRtpc;
class UAkSwitchValue;
class UHaloAudioSoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioTrackingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHaloAudioTrackingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAttachedSwitch(const UAkSwitchValue* SWITCH);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAttachedRtpc(const UAkRtpc* RtpcId, float RtpcValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FHaloAudioAttachedPlayingId PlaySoundVariant(const UHaloAudioSoundBase* SoundVariant, bool bAttached, USceneComponent* SocketComponent, FName SocketName, float StartOffset, const AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    FHaloAudioAttachedPlayingId PlaySound(const UHaloAudioSoundBase* Sound, bool bAttached, USceneComponent* SocketComponent, FName SocketName, float StartOffset, const AActor* Instigator, const USceneComponent* ShapeComponent);
    
};


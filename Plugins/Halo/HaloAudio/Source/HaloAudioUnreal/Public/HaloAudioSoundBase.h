#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloAudioSoundBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioSoundBase : public UObject {
    GENERATED_BODY()
public:
    UHaloAudioSoundBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Is3D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFloatRange GetDurationRange() const;
    
};


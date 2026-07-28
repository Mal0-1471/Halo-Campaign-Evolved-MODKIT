#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "HaloAudioTranscriptionHandle.h"
#include "HaloAudioTranscriptionLine.h"
#include "HaloAudioTranscriptionHandler.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioTranscriptionHandler : public UInterface {
    GENERATED_BODY()
};

class HALOAUDIOUNREAL_API IHaloAudioTranscriptionHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateTranscriptionTransform(const FHaloAudioTranscriptionHandle& Handle, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTranscriptionStarted(const FHaloAudioTranscriptionHandle& Handle, const FHaloAudioTranscriptionLine& Subtitle, const float duration, const bool bHasTransform, const FTransform& Transform, const AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTranscriptionEnded(const FHaloAudioTranscriptionHandle& Handle);
    
};


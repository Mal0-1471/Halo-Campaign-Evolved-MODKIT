#pragma once
#include "CoreMinimal.h"
#include "HaloAudioSubsystem.h"
#include "HaloAudioTranscriptionSubsystem.generated.h"

class IHaloAudioTranscriptionHandler;
class UHaloAudioTranscriptionHandler;
class UObject;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioTranscriptionSubsystem : public UHaloAudioSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> TranscriptionHandlers;
    
public:
    UHaloAudioTranscriptionSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveTranscriptionHandler(const TScriptInterface<IHaloAudioTranscriptionHandler>& Handler);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTranscriptionHandler(const TScriptInterface<IHaloAudioTranscriptionHandler>& Handler);
    
};


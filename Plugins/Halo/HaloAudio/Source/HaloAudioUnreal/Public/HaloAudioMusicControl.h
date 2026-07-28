#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MusicControlAction.h"
#include "Templates/SubclassOf.h"
#include "HaloAudioMusicControl.generated.h"

class UHaloAudioMusicDeferredConditionBase;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioMusicControl : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockSamePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloAudioMusicDeferredConditionBase> DeferredConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMusicControlAction> Actions;
    
    UHaloAudioMusicControl();

};


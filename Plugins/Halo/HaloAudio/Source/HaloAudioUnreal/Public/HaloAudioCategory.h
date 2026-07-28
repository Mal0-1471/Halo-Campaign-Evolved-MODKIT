#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloAudioAcousticSettings.h"
#include "HaloAudioClusterSettings.h"
#include "HaloAudioFocusSettings.h"
#include "HaloAudioShapeInfo.h"
#include "HaloAudioCategory.generated.h"

class UHaloAudioCategory;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioCategory* Parent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaxPriorityGroupSoundsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullByMaxRadiusOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDopplerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureOneFramePlaybackOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotsUseStickyParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopsUseStickyParametersOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPriorityAtListenerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPriorityAtMaxDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFocusFeatureOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAmbientWindRtpcOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForAmbientWindResultBeforePlayingOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWaterDepthRtpcOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForWaterDepthResultBeforePlayingOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullByMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDoppler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureOneFramePlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotsUseStickyParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopsUseStickyParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioAcousticSettings AcousticSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPriorityGroupSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriorityAtListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriorityAtMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioClusterSettings ClusterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioShapeInfo ShapeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFocusFeature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAmbientWindRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForAmbientWindResultBeforePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWaterDepthRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForWaterDepthResultBeforePlaying;
    
public:
    UHaloAudioCategory();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWaitForWaterDepthResultBeforePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWaitForAmbientWindResultBeforePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloAudioShapeInfo GetShapeInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriorityAtMaxDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriorityAtListener() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOneShotsUseStickyParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPriorityGroupSounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoopsUseStickyParameters() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloAudioFocusSettings GetFocusSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnsureOneFramePlayback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableWaterDepthRtpc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableDoppler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnableAmbientWindRtpc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCullByMaxRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloAudioClusterSettings GetClusterSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetApplyFocusFeature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloAudioAcousticSettings GetAcousticSettings() const;
    
};


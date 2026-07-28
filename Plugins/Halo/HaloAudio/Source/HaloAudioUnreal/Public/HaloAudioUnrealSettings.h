#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "Engine/DeveloperSettings.h"
#include "HaloAudioUnrealAcousticSettings.h"
#include "HaloAudioUnrealAnimationSettings.h"
#include "HaloAudioUnrealCinematicSettings.h"
#include "HaloAudioUnrealSplitscreenQualitySettings.h"
#include "HaloAudioUnrealSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HALOAUDIOUNREAL_API UHaloAudioUnrealSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AcousticsBaseAirGainRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ListenerEnvironmentInteriorExteriorRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ListenerEnvironmentInteriorStateValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ListenerEnvironmentExteriorStateValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DopplerRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath FocusRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IgnoreSourceReverbSendRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SpatializationMixRtpc;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutOfFillAreaObstruction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PlayerNonPlayerRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TeamAllegianceRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NumSplitscreenPlayersRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PrioritizerSubgroupLimitScaleRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ClusterNumSoundsRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ClusterRadiusRtpc;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceZoneRuntimeCapaticy;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinRuntimeLodZRatio;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxZoneRuntimeCapacity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealAcousticSettings AcousticsSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealAnimationSettings AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealCinematicSettings CinematicSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath WaterDepthProbeActorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealSplitscreenQualitySettings LowQualitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealSplitscreenQualitySettings MedQualitySettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioUnrealSplitscreenQualitySettings HighQualitySettings;
    
    UHaloAudioUnrealSettings();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EHaloAudioZoneType.h"
#include "HaloAudioZoneConfig.h"
#include "HaloAudioZoneEnvironmentConfig.h"
#include "HaloAudioZoneLodConfig.h"
#include "HaloAudioZoneProperties.generated.h"

USTRUCT(BlueprintType)
struct FHaloAudioZoneProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ZoneGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHaloAudioZoneType> ZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioZoneConfig ZoneConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioZoneLodConfig LodConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioZoneEnvironmentConfig EnvironmentConfig;
    
    HALOAUDIOUNREAL_API FHaloAudioZoneProperties();
};


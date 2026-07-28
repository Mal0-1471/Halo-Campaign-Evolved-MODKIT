#pragma once
#include "CoreMinimal.h"
#include "EHaloAudioSpaceCategoryVariant.h"
#include "HaloAudioZoneEnvironmentConfig.generated.h"

class UHaloAudioEnvironment;

USTRUCT(BlueprintType)
struct FHaloAudioZoneEnvironmentConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloAudioSpaceCategoryVariant SpaceCategoryVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloAudioEnvironment* Environment;
    
    HALOAUDIOUNREAL_API FHaloAudioZoneEnvironmentConfig();
};


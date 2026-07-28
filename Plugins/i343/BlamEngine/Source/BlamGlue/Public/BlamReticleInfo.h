#pragma once
#include "CoreMinimal.h"
#include "BlamReticleInfo.generated.h"

USTRUCT(BlueprintType)
struct FBlamReticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinnedErrorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinErrorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxErrorAngle;
    
    BLAMGLUE_API FBlamReticleInfo();
};


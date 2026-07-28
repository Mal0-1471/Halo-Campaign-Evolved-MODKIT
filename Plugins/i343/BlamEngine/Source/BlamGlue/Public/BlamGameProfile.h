#pragma once
#include "CoreMinimal.h"
#include "BlamGameProfilePlayerTraining.h"
#include "BlamGameProfile.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerTrainingValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameProfilePlayerTraining PlayerTraining;
    
    FBlamGameProfile();
};


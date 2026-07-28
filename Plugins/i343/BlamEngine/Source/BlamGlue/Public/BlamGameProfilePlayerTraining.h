#pragma once
#include "CoreMinimal.h"
#include "BlamGameProfilePlayerTraining.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameProfilePlayerTraining {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrainingBlobBitvectorLow[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrainingBlobBitvectorHigh[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Expansion[4];
    
    FBlamGameProfilePlayerTraining();
};


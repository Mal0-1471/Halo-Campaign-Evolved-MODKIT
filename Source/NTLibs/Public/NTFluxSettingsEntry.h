#pragma once
#include "CoreMinimal.h"
#include "NTFluxSettingsEntry.generated.h"

USTRUCT(BlueprintType)
struct NTLIBS_API FNTFluxSettingsEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstGridLevelUsingLowerLodMeshes;
    
    FNTFluxSettingsEntry();
};


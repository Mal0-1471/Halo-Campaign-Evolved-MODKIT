#pragma once
#include "CoreMinimal.h"
#include "BlamCustomMapping.h"
#include "BlamCustomMappingContext.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamCustomMappingContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingsSaveVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BasePresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamCustomMapping> CustomMappings;
    
     FBlamCustomMappingContext();
};


#pragma once
#include "CoreMinimal.h"
#include "BlamScenarioPlayerAppearanceCustomization.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamScenarioPlayerAppearanceCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariantName;
    
     FBlamScenarioPlayerAppearanceCustomization();
};


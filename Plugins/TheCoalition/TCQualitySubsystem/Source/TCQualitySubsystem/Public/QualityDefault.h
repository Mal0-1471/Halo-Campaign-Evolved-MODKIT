#pragma once
#include "CoreMinimal.h"
#include "EPlatformConstraint.h"
#include "EQualityDefaultSetMethod.h"
#include "QualityConstraint.h"
#include "QualityDefault.generated.h"

USTRUCT(BlueprintType)
struct FQualityDefault {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformConstraint Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQualityDefaultSetMethod SetMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQualityConstraint> Constraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QualityPresetName;
    
    TCQUALITYSUBSYSTEM_API FQualityDefault();
};


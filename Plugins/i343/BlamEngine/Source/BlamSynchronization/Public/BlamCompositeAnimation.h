#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "EBlamModelCompositeAnimationType.h"
#include "BlamCompositeAnimation.generated.h"

USTRUCT(BlueprintType)
struct FBlamCompositeAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationExportName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamModelCompositeAnimationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath CompositeXmlPath;
    
    BLAMSYNCHRONIZATION_API FBlamCompositeAnimation();
};


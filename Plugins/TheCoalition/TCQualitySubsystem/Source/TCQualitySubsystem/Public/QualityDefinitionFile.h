#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FilePath -FallbackName=FilePath
#include "TCQualityDefinitionFileRoot.h"
#include "QualityDefinitionFile.generated.h"

USTRUCT(BlueprintType)
struct FQualityDefinitionFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath RelativePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TCQualityDefinitionFileRoot Root;
    
    TCQUALITYSUBSYSTEM_API FQualityDefinitionFile();
};


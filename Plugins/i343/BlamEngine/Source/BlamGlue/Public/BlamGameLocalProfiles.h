#pragma once
#include "CoreMinimal.h"
#include "BlamGameProfile.h"
#include "BlamGameLocalProfiles.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameLocalProfiles {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameProfile PlayerProfiles[4];
    
    FBlamGameLocalProfiles();
};


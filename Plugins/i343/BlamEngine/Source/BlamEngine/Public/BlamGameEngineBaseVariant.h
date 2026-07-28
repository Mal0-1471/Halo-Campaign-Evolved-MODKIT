#pragma once
#include "CoreMinimal.h"
#include "BlamGameEngineSocialOptions.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlamGameEngineBaseVariant.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMENGINE_API UBlamGameEngineBaseVariant : public UObject {
    GENERATED_BODY()
public:
    UBlamGameEngineBaseVariant();

    UFUNCTION(BlueprintCallable)
    void SetSocialOptions(FBlamGameEngineSocialOptions SocialOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamGameEngineSocialOptions GetSocialOptions() const;
    
};


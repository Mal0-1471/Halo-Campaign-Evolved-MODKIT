#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagContainer.h"
#include "HaloMaterialResponseData.h"
#include "HaloMaterialResponseHandler.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UHaloMaterialResponseHandler : public UObject {
    GENERATED_BODY()
public:
    UHaloMaterialResponseHandler();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintHandleMaterialResponse(const FHaloMaterialResponseData& InMaterialResponseData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintGetSupportedResponseTags(FGameplayTagContainer& OutResponseTags);
    
};


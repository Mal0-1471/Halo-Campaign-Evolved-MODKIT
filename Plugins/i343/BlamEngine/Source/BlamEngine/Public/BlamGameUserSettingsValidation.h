#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "BlamGameUserSettingsValidation.generated.h"

UINTERFACE(Blueprintable)
class BLAMENGINE_API UBlamGameUserSettingsValidation : public UInterface {
    GENERATED_BODY()
};

class BLAMENGINE_API IBlamGameUserSettingsValidation : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ValidateCustomization(const TArray<FGameplayTag>& CustomizationNames);
    
};
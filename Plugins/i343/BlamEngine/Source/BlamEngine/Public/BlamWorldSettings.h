#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "BlamWorldSettings.generated.h"

class BLAMENGINE_API ABlamScenario;
class BLAMENGINE_API UActorComponent;
class BLAMENGINE_API UBlamExperienceDefinition;

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABlamScenario> DefaultScenario;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBlamExperienceDefinition> DefaultBlamExperience;
    
public:
    ABlamWorldSettings(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 DestroyComponents(const TArray<UActorComponent*>& Components, bool bDetachSceneComponentsFirst);
    
};


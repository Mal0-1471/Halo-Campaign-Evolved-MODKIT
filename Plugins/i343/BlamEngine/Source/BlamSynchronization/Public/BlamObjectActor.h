#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "BlamObjectActor.generated.h"

class ABlamObjectActor;

UCLASS(Blueprintable, NotPlaceable)
class BLAMSYNCHRONIZATION_API ABlamObjectActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABlamObjectActor> FirstPersonActorClass;
    
    ABlamObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnGameplayStart(FName VariantName, int32 ObjectGameStateIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_OnGameplayEnd();
    
};


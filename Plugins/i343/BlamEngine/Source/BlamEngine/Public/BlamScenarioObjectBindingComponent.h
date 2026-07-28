#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamScenarioObjectBindingComponent.generated.h"

class BLAMENGINE_API AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamScenarioObjectBindingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectUnbound, AActor*, OldBoundObjectActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnObjectBound, AActor*, NewBoundObjectActor, AActor*, OldBoundObjectActor);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectBound OnObjectBoundEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectUnbound OnObjectUnboundEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScenarioObjectIdentifier;
    
    UBlamScenarioObjectBindingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetBoundObjectActor() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectUnbound(AActor* OldBoundObjectActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectBound(AActor* NewBoundObjectActor, AActor* OldBoundObjectActor);
    
};


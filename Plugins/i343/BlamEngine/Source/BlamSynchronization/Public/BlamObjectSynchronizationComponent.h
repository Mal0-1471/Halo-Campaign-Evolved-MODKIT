#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamObjectSynchronizationComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamObjectSynchronizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnObjectUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlamParentChanged, AActor*, BlamParentActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectUpdated OnObjectInitiallyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectUpdated OnObjectUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlamParentChanged OnAttachToBlamParent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlamParentChanged OnDetachFromBlamParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlamObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlamTagDefinitionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ParentObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ParentBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlamObjectGameStateIdentifier;
    
    UBlamObjectSynchronizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetBlamUltimateParentActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetBlamParentActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasParentBlamObject() const;
    
};


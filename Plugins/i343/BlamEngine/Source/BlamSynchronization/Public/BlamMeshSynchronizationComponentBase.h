#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "BlamMeshSynchronizationRuntimeRegion.h"
#include "EBlamMeshSynchronizedActorType.h"
#include "Templates/SubclassOf.h"
#include "BlamMeshSynchronizationComponentBase.generated.h"

class AActor;
class UAnimInstance;
class UBlamMeshSynchronizationDataAsset;
class UMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamMeshSynchronizationComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRegionsChanged, AActor*, Actor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamMeshSynchronizationDataAsset* MeshSynchronizationDataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRegionsChanged OnRegionsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamMeshSynchronizedActorType SynchronizedActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ParentComponentReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMeshSynchronizationRuntimeRegion> RuntimeRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaticMeshAttachmentsUseParentBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConstructionScriptSkeletalMeshAsLeader;
    
public:
    UBlamMeshSynchronizationComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetVariantName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMeshComponent*> GetStaticMeshComponents(FName RegionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkeletalMeshComponent*> GetSkeletalMeshComponents(FName RegionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UStaticMeshComponent*> GetAllStaticMeshComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USkeletalMeshComponent*> GetAllSkeletalMeshComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMeshComponent*> GetAllMeshComponents() const;
    
};


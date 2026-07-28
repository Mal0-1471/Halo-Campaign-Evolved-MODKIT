#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamSkeletonBone.h"
#include "BlamSkeletonSynchronizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamSkeletonSynchronizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlamSkeletonBone> SynchronizedBones;
    
public:
    UBlamSkeletonSynchronizationComponent(const FObjectInitializer& ObjectInitializer);

};


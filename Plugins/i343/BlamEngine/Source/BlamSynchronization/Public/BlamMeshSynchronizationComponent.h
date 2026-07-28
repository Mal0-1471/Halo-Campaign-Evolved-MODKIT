#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationComponentBase.h"
#include "BlamMeshSynchronizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamMeshSynchronizationComponent : public UBlamMeshSynchronizationComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVariantChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVariantChanged OnVariantChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSkeletalMeshUpdatesThisTick;
    
    UBlamMeshSynchronizationComponent(const FObjectInitializer& ObjectInitializer);

};


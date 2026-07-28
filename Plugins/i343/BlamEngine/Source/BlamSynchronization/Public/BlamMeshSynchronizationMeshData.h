#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BlamAttachmentBoneWrapper.h"
#include "BlamMeshSynchronizationMeshPermutationData.h"
#include "Templates/SubclassOf.h"
#include "BlamMeshSynchronizationMeshData.generated.h"

class USkeletalMeshComponent;
class UStaticMeshComponent;
class UStreamableRenderAsset;

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamableRenderAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMeshSynchronizationMeshPermutationData> Permutations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkeletalMeshComponent> SkeletalMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkeletalMeshComponent> SkeletalMeshClassFirstPersonOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStaticMeshComponent> StaticMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStaticMeshComponent> StaticMeshClassFirstPersonOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAttachmentBoneWrapper ParentBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeInWorldActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIncludeInFirstPersonActors: 1;
    
    FBlamMeshSynchronizationMeshData();
};


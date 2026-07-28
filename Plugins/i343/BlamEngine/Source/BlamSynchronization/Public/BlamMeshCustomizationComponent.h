#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationComponentBase.h"
#include "EBlamMeshCustomizationResult.h"
#include "BlamMeshCustomizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamMeshCustomizationComponent : public UBlamMeshSynchronizationComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultVariantName;
    
public:
    UBlamMeshCustomizationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveVariant(FName InVariantName, EBlamMeshCustomizationResult& SetResult);
    
    UFUNCTION(BlueprintCallable)
    void SetActivePermutation(FName InRegionName, FName InPermutationName, EBlamMeshCustomizationResult& SetResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetVariantNames(EBlamMeshCustomizationResult& GetResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRegionNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPermutationNames(FName InRegionName, EBlamMeshCustomizationResult& GetResult) const;
    
};


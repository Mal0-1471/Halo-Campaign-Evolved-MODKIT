#include "BlamMeshCustomizationComponent.h"

UBlamMeshCustomizationComponent::UBlamMeshCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBlamMeshCustomizationComponent::SetActiveVariant(FName InVariantName, EBlamMeshCustomizationResult& SetResult) {
}

void UBlamMeshCustomizationComponent::SetActivePermutation(FName InRegionName, FName InPermutationName, EBlamMeshCustomizationResult& SetResult) {
}

TArray<FName> UBlamMeshCustomizationComponent::GetVariantNames(EBlamMeshCustomizationResult& GetResult) const {
    return TArray<FName>();
}

TArray<FName> UBlamMeshCustomizationComponent::GetRegionNames() const {
    return TArray<FName>();
}

TArray<FName> UBlamMeshCustomizationComponent::GetPermutationNames(FName InRegionName, EBlamMeshCustomizationResult& GetResult) const {
    return TArray<FName>();
}



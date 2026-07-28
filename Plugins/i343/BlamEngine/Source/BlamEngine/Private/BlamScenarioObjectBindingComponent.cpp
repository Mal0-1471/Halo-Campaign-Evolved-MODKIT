#include "BlamScenarioObjectBindingComponent.h"

UBlamScenarioObjectBindingComponent::UBlamScenarioObjectBindingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScenarioObjectIdentifier = -1;
}

AActor* UBlamScenarioObjectBindingComponent::TryAndGetBoundObjectActor() const {
    return NULL;
}





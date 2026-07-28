#include "HaloAudioExtrudedShapeComponent.h"

UHaloAudioExtrudedShapeComponent::UHaloAudioExtrudedShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Height = 100.00f;
    this->Sink = 0.00f;
    this->ShapePoints.AddDefaulted(4);
    this->VisualComponent = NULL;
}



#include "BlamDebugRenderActor.h"
#include "BlamDebugMeshComponent.h"

ABlamDebugRenderActor::ABlamDebugRenderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LineListComponent = CreateDefaultSubobject<UBlamDebugMeshComponent>(TEXT("LineList"));
    this->TriangleListComponent = CreateDefaultSubobject<UBlamDebugMeshComponent>(TEXT("TriangleList"));
    this->TriangleListComponent->SetupAttachment(LineListComponent);
}



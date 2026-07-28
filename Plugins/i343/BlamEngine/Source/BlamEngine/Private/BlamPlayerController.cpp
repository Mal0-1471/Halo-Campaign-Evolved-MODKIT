#include "BlamPlayerController.h"

ABlamPlayerController::ABlamPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void ABlamPlayerController::OnUnitChanged(AActor* PreviousPlayerActor, AActor* NewPlayerActor) {
}

void ABlamPlayerController::ClientSetPendingSessionLeaveReason_Implementation(ESessionLeaveReason Reason) {
}



#include "BlamEngineHelperLibrary.h"

UBlamEngineHelperLibrary::UBlamEngineHelperLibrary() {
}

bool UBlamEngineHelperLibrary::WithEditorOnlyData() {
    return false;
}

bool UBlamEngineHelperLibrary::SetActorTransientFlag(AActor* Actor) {
    return false;
}

bool UBlamEngineHelperLibrary::IsDevicePropertyHandleValid(const FBlamHapticsEventHandle& InHandle) {
    return false;
}

float UBlamEngineHelperLibrary::GetWorldNorth(const UObject* WorldContextObject, bool& bFound) {
    return 0.0f;
}

UBlamInputMapper* UBlamEngineHelperLibrary::GetBlamInputMapper() {
    return NULL;
}

UMaterialInstanceDynamic* UBlamEngineHelperLibrary::CreateMIDEditorOnly(UMaterialInterface* Parent, UObject* Outer, FName OptionalName) {
    return NULL;
}



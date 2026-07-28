#include "HaloAsyncContentSubsystem.h"

UHaloAsyncContentSubsystem::UHaloAsyncContentSubsystem() {
}

UObject* UHaloAsyncContentSubsystem::GetLoadedObject_NullIfStillLoading(const FSoftObjectPath& SoftObjectPath) {
    return NULL;
}

UObject* UHaloAsyncContentSubsystem::GetLoadedObject_BlockingLoadIfStillLoading(const FSoftObjectPath& SoftObjectPath) {
    return NULL;
}



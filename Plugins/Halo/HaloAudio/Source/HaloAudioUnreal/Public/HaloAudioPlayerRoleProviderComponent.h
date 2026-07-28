#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Components/ActorComponent.h"
#include "HaloAudioPlayerRoleProviderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioPlayerRoleProviderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHaloAudioPlayerRoleProviderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFirstPersonUserIds(UPARAM(Ref) TArray<FPlatformUserId>& RelevantLocalPlayersOut) const;
    
};


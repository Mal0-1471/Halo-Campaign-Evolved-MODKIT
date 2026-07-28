#pragma once
#include "CoreMinimal.h"
#include "BlamGameProfile.h"
#include "BlamGameProgression.h"
#include "GameFramework/SaveGame.h"
#include "GameplayTagContainer.h"
#include "BlamProgressLocalPlayerSaveGame.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamProgressLocalPlayerSaveGame : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameProgression GameProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameProfile GameProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifiedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OwnedPlayFabEntitlements;
    
    UBlamProgressLocalPlayerSaveGame();

};


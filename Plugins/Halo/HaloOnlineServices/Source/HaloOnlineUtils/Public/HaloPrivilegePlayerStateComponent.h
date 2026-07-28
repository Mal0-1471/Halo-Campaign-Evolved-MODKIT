#pragma once
#include "CoreMinimal.h"
#include "Components/PlayerStateComponent.h"
#include "HaloPrivilegePlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOONLINEUTILS_API UHaloPrivilegePlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CrossplayEnabled, meta=(AllowPrivateAccess=true))
    bool bCrossPlayEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerPlatform, meta=(AllowPrivateAccess=true))
    FString PlayerPlatform;
    
public:
    UHaloPrivilegePlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetPlayerPlatform(const FString& InPlatform);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCrossplayEnabled(bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerPlatform(const FString& OldPlatform);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrossplayEnabled(bool bOldValue);
    
};


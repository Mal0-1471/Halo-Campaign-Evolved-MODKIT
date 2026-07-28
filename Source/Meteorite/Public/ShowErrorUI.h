// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShowErrorUI.generated.h"

USTRUCT(BlueprintType)
struct FAlertDataRow : public FTableRowBase 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FText Title;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FText Message;
};

UCLASS()
class METEORITE_API UShowErrorUI : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UShowErrorUI();

    UFUNCTION(BlueprintCallable)
    static FAlertDataRow GetAlertData(FName AlertName);

    UFUNCTION(BlueprintCallable)
    static bool AlertPlayerControllerCustomText(APlayerController* PlayerController, FText Title, FText Message);

    UFUNCTION(BlueprintCallable)
    static bool AlertPlayerController(APlayerController* PlayerController, FName AlertName);

    UFUNCTION(BlueprintCallable)
    static bool AlertLocalPlayerCustomText(ULocalPlayer* LocalPlayer, FText Title, FText Message);

    UFUNCTION(BlueprintCallable)
    static bool AlertLocalPlayer(ULocalPlayer* LocalPlayer, FName AlertName);

    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static bool AlertDefaultPlayer(FName AlertName, UObject* WorldContextObject);
};

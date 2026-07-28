// Fill out your copyright notice in the Description page of Project Settings.


#include "ShowErrorUI.h"

UShowErrorUI::UShowErrorUI() {
}

FAlertDataRow UShowErrorUI::GetAlertData(FName AlertName) {
    return FAlertDataRow{};
}

bool UShowErrorUI::AlertPlayerControllerCustomText(APlayerController* PlayerController, FText Title, FText Message) {
    return false;
}

bool UShowErrorUI::AlertPlayerController(APlayerController* PlayerController, FName AlertName) {
    return false;
}

bool UShowErrorUI::AlertLocalPlayerCustomText(ULocalPlayer* LocalPlayer, FText Title, FText Message) {
    return false;
}

bool UShowErrorUI::AlertLocalPlayer(ULocalPlayer* LocalPlayer, FName AlertName) {
    return false;
}

bool UShowErrorUI::AlertDefaultPlayer(FName AlertName, UObject* WorldContextObject) {
    return false;
}
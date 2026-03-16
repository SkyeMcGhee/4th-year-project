// Copyright 2025 Heathen Engineering Limited

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "DialogueWidgetBase.generated.h"

class UDialogueComponentBase;

UCLASS()
class TOOLKITNARRATIVES_API UDialogueWidgetBase : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Dialogues")
    UDialogueComponentBase* DialogueComponent;
	
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void UpdateDialogueText(
        int Index,
        const FText& Speaker,
        const FText& Dialogue,
        const TArray<FText>& Options);
    virtual void UpdateDialogueText_Implementation(
        const int Index,
        const FText& Speaker,
        const FText& Dialogue,
        const TArray<FText>& Options) PURE_VIRTUAL(UDialogueWidgetBase::UpdateDialogueText, );

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void OpenDialogue(UDialogueComponentBase* InstantiatingDialogue);
    virtual void OpenDialogue_Implementation(UDialogueComponentBase* InstantiatingDialogue);
};

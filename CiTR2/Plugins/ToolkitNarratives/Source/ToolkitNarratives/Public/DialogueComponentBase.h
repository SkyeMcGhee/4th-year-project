// Copyright 2025 Heathen Engineering Limited

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include <Widgets/CommonActivatableWidgetContainer.h>
#include "DialogueWidgetBase.h"
#include "DialogueComponentBase.generated.h"

/** Enum for Progress Store Type */
UENUM(BlueprintType)
enum class EProgressStoreType : uint8
{
    Update UMETA(DisplayName = "Update"),
    Clear UMETA(DisplayName = "Clear")
};

/** Enum for Add Dialogue Type */
UENUM(BlueprintType)
enum class EDialogueAddType : uint8
{
    PassThrough UMETA(DisplayName = "Pass Through"),
    Updated UMETA(DisplayName = "Updated")
};

/** Struct for Dialogue Progress Storage */
USTRUCT(BlueprintType)
struct FDialogueProgress
{
    GENERATED_BODY()

public:
    /** Map of progress (Key: Progress Index, Value: Option Index) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, int32> Progress;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class TOOLKITNARRATIVES_API UDialogueComponentBase : public UActorComponent
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

    /** Should Use Audio? **/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dialogues")
    bool bUseAudio;

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Dialogues")
    UAudioComponent* AudioComponent;

    /** Reference to the Dialogue Widget */
    UPROPERTY(BlueprintReadOnly, Category = "Dialogues")
    UDialogueWidgetBase* ActiveWidget;

    /** Active dialogue progress mapping (Key: Progress Index, Value: Option Index) */
    UPROPERTY(BlueprintReadOnly, Category = "Dialogues")
    TMap<int32, int32> ActiveProgress;

    /** Current active dialogue index */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dialogues")
    int32 ActiveIndex;

    /** Current active dialogue branch */
    UPROPERTY(BlueprintReadOnly, Category = "Dialogues")
    FName ActiveBranch;

    /** Map storing progress for different dialogue branches */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Dialogues")
    TMap<FName, FDialogueProgress> BranchProgress;

public:
    /** Sets default values for this component's properties */
    UDialogueComponentBase();

    /** Opens a conversation */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void OpenConversation(UDialogueWidgetBase* InWidget);
    virtual void OpenConversation_Implementation(UDialogueWidgetBase* InWidget);
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentOpenConversation(UDialogueWidgetBase* InWidget);
    
    /** Changes Branch and then opens a conversation **/
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void OpenConversationOnBranch(UDialogueWidgetBase* InWidget, FName DialogueBranch, EProgressStoreType StoreType, bool ClearProgressBeforeOpen);
    virtual void OpenConversationOnBranch_Implementation(UDialogueWidgetBase* InWidget, FName DialogueBranch, EProgressStoreType StoreType, bool ClearProgressBeforeOpen);

    /** Closes a conversation */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void CloseConversation();
    virtual void CloseConversation_Implementation();
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentCloseConversation();

    /** Progresses the dialogue */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void ProgressDialogue();
    virtual void ProgressDialogue_Implementation();
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentProgressDialogue();

    /** Adds a dialogue entry */
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void AddDialogue(
        FText Speaker,
        FText Dialogue,
        TArray<FText> Options,
        TSoftObjectPtr<USoundBase> Audio,
        int& Option,
        EDialogueAddType& Type
    );

    /** Pure virtual function for dialogue processing */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void Dialogue();
    virtual void Dialogue_Implementation() PURE_VIRTUAL(UDialogueComponentBase::Dialogue, );

    /** Updates the selected option */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void UpdateSelectedOption(int32 ProgressIndex, int32 OptionIndex);
    void UpdateSelectedOption_Implementation(int32 ProgressIndex, int32 OptionIndex);
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentUpdateSelectedOption(int32 ProgressIndex, int32 OptionIndex);

    /** Clears dialogue progress */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void ClearDialogueProgress();
    void ClearDialogueProgress_Implementation();
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentClearDialogueProgress();

    /** Removes dialogue progress by a number of steps */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void RemoveDialogueProgress(const int32 Steps);
    void RemoveDialogueProgress_Implementation(const int32 Steps);
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentRemoveDialogueProgress(const int32 Steps);

    /** Sets a dialogue branch */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dialogues")
    void SetDialogueBranch(const FName DialogueBranch, const EProgressStoreType StoreType);
    void SetDialogueBranch_Implementation(const FName DialogueBranch, const EProgressStoreType StoreType);
    UFUNCTION(BlueprintCallable, Category = "Dialogues")
    void CallParentSetDialogueBranch(const FName DialogueBranch, const EProgressStoreType StoreType);

private: 
    UFUNCTION()
    void OnAudioLoaded(const TSoftObjectPtr<USoundBase> LoadedAudio) const;
};
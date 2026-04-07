// Copyright 2025 Heathen Engineering Limited


#include "DialogueComponentBase.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"

void UDialogueComponentBase::BeginPlay()
{
    Super::BeginPlay();

    if (bUseAudio && !AudioComponent)
    {
        // Search for an existing AudioComponent on the Actor
        AudioComponent = GetOwner()->FindComponentByClass<UAudioComponent>();

        // If no AudioComponent exists, create one
        if (!AudioComponent)
        {
            // Create the AudioComponent if one doesn't exist
            AudioComponent = NewObject<UAudioComponent>(this);
            if (AudioComponent)
            {
                // Register the AudioComponent and attach it to the root component
                AudioComponent->RegisterComponent();
                AudioComponent->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                UE_LOG(LogTemp, Log, TEXT("Audio Component created and attached."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Log, TEXT("Using existing Audio Component."));
        }
    }
}

// Sets default values for this component's properties
UDialogueComponentBase::UDialogueComponentBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UDialogueComponentBase::OpenConversation_Implementation(UDialogueWidgetBase* InWidget)
{
    // If we are already in a conversation, close it first
    if (ActiveWidget)
    {
        CloseConversation();
    }

    if (!InWidget)
    {
        UE_LOG(LogTemp, Warning, TEXT("OpenConversation called with null widget"));
        return;
    }

    ActiveWidget = InWidget;

    // Reset dialogue state
    ActiveIndex = 0;

    // Notify widget
    ActiveWidget->OpenDialogue(this);

    // Begin dialogue flow
    ProgressDialogue();
}

void UDialogueComponentBase::CallParentOpenConversation(UDialogueWidgetBase* InWidget)
{
    OpenConversation_Implementation(InWidget);
}

void UDialogueComponentBase::OpenConversationOnBranch_Implementation(UDialogueWidgetBase* InWidget,
    FName DialogueBranch, EProgressStoreType StoreType, bool ClearProgressBeforeOpen)
{
    // Switch branch if needed
    if (ActiveBranch != DialogueBranch)
    {
        SetDialogueBranch(DialogueBranch, StoreType);
    }

    // Optionally clear progress before opening
    if (ClearProgressBeforeOpen)
    {
        ActiveProgress.Empty();
        ActiveIndex = 0;
    }

    // Open (this will close any existing conversation)
    OpenConversation(InWidget);
}

void UDialogueComponentBase::CloseConversation_Implementation()
{
    // Handle Audio if applicable
    if (AudioComponent && AudioComponent->IsPlaying())
        AudioComponent->Stop();
        
    ActiveWidget = nullptr;
    ActiveIndex = 0;
}

void UDialogueComponentBase::CallParentCloseConversation()
{
    CloseConversation_Implementation();
}

void UDialogueComponentBase::ProgressDialogue_Implementation()
{
    if (ActiveWidget)
    {
        ActiveIndex = -1;
        Dialogue();
    }
}

void UDialogueComponentBase::CallParentProgressDialogue()
{
    ProgressDialogue_Implementation();
}

void UDialogueComponentBase::AddDialogue(FText Speaker, FText Dialogue, TArray<FText> Options, TSoftObjectPtr<USoundBase> Audio, int& Option, EDialogueAddType& Type)
{
    // Increment the ActiveIndex
    ActiveIndex++;

    if (int32* FoundOption = ActiveProgress.Find(ActiveIndex))
    {
        // If found, return PassThrough
        Type = EDialogueAddType::PassThrough;
        Option = *FoundOption;
    }
    else
    {
        // If not found, update the dialogue text
        if (ActiveWidget)
        {
            ActiveWidget->UpdateDialogueText(ActiveIndex, Speaker, Dialogue, Options);
        }

        // Handle Audio if applicable
        if (bUseAudio && Audio.IsValid() && AudioComponent)
        {
            if (USoundBase* LoadedSound = Audio.Get())
            {
                // Stop any currently playing sound
                AudioComponent->Stop();
                AudioComponent->SetSound(LoadedSound);
                AudioComponent->Play();
            }
            else
            {
                // Otherwise, load the audio asynchronously
                UAssetManager& AssetManager = UAssetManager::Get();
                FStreamableManager& StreamableManager = AssetManager.GetStreamableManager();

                // Asynchronously load the audio
                StreamableManager.RequestAsyncLoad(Audio.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UDialogueComponentBase::OnAudioLoaded, Audio));
            }
        }

        // Return Updated
        Type = EDialogueAddType::Updated;
        Option = -1;
    }
}

void UDialogueComponentBase::OnAudioLoaded(const TSoftObjectPtr<USoundBase> LoadedAudio) const
{
    // Check if the loaded audio is valid
    if (LoadedAudio.IsValid())
    {
        // Stop any currently playing sound
        AudioComponent->Stop();
        AudioComponent->SetSound(LoadedAudio.Get());
        AudioComponent->Play();
    }
    else
    {
        // Log error or handle case where audio failed to load
        UE_LOG(LogTemp, Warning, TEXT("Failed to load audio asynchronously."));
    }
}

void UDialogueComponentBase::UpdateSelectedOption_Implementation(int32 ProgressIndex, int32 OptionIndex)
{
    ActiveProgress.Add(ProgressIndex, OptionIndex);
    ProgressDialogue();
}

void UDialogueComponentBase::CallParentUpdateSelectedOption(int32 ProgressIndex, int32 OptionIndex)
{
    UpdateSelectedOption_Implementation(ProgressIndex, OptionIndex);
}

void UDialogueComponentBase::ClearDialogueProgress_Implementation()
{
    ActiveProgress.Empty();
    ProgressDialogue();
}

void UDialogueComponentBase::CallParentClearDialogueProgress()
{
    ClearDialogueProgress_Implementation();
}

void UDialogueComponentBase::RemoveDialogueProgress_Implementation(const int32 Steps)
{
    for (int32 i = 0; i < Steps; ++i)
    {
        const int32 KeyToRemove = ActiveProgress.Num() - 1 - i;

        ActiveProgress.Remove(KeyToRemove);
    }

    ProgressDialogue();
}

void UDialogueComponentBase::CallParentRemoveDialogueProgress(const int32 Steps)
{
    RemoveDialogueProgress_Implementation(Steps);
}

void UDialogueComponentBase::SetDialogueBranch_Implementation(const FName DialogueBranch, const EProgressStoreType StoreType)
{
    if (StoreType == EProgressStoreType::Clear)
    {
        BranchProgress.Remove(ActiveBranch);
    }
    else if (StoreType == EProgressStoreType::Update)
    {
        FDialogueProgress progress;
        progress.Progress = ActiveProgress;
        BranchProgress.Add(ActiveBranch, progress);
    }

    if (FDialogueProgress* FoundProgress = BranchProgress.Find(DialogueBranch))
    {
        // If found, set the ActiveProgress to the found branch's progress
        ActiveProgress = FoundProgress->Progress;
        ActiveBranch = DialogueBranch;
        UE_LOG(LogTemp, Log, TEXT("Switched to Dialogue Branch: %s"), *ActiveBranch.ToString());
    }
    else
    {
        // If not found, create a new DialogueBranch with an empty progress entry
        FDialogueProgress NewProgress;
        BranchProgress.Add(DialogueBranch, NewProgress);
        ActiveProgress = NewProgress.Progress; // Set the progress to the default value (empty or zeroed)
        ActiveBranch = DialogueBranch;
        UE_LOG(LogTemp, Log, TEXT("Created new Dialogue Branch: %s"), *ActiveBranch.ToString());
    }
}

void UDialogueComponentBase::CallParentSetDialogueBranch(const FName DialogueBranch, const EProgressStoreType StoreType)
{
    SetDialogueBranch_Implementation(DialogueBranch, StoreType);
}

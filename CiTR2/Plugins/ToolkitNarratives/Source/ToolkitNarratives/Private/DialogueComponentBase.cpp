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

void UDialogueComponentBase::OpenConversation_Implementation(UCommonActivatableWidgetContainerBase* Stack)
{
    if (!Widget || !GetWorld() || !Stack)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid Widget class, World, or Stack reference!"));
        return;
    }

    if (!ActiveWidget)
    {
        // Push the widget onto the given stack
        UCommonActivatableWidget* NewWidget = Stack->AddWidget<UCommonActivatableWidget>(Widget);

        if (!NewWidget)
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to push Dialogue Widget to provided Stack"));
            return;
        }

        // Store reference to ActiveWidget
        ActiveWidget = Cast<UDialogueWidgetBase>(NewWidget);
    }
    else
    {
        if (!ActiveWidget->IsActivated())
            ActiveWidget->ActivateWidget();
    }

    if (ActiveWidget)
    {
        ActiveWidget->OpenDialogue(this);
        ProgressDialogue();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Pushed widget is not of type UDialogueWidgetBase"));
    }
}

void UDialogueComponentBase::CallParentOpenConversation(UCommonActivatableWidgetContainerBase* Stack)
{
    OpenConversation_Implementation(Stack);
}

void UDialogueComponentBase::CloseConversation_Implementation()
{
    if (ActiveWidget)
    {
        ActiveWidget->DeactivateWidget();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No active widget to close"));
    }
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

    int32* FoundOption = ActiveProgress.Find(ActiveIndex);

    if (FoundOption)
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
            USoundBase* LoadedSound = Audio.Get();

            if (LoadedSound)
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

void UDialogueComponentBase::OnAudioLoaded(TSoftObjectPtr<USoundBase> LoadedAudio)
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

void UDialogueComponentBase::RemoveDialogueProgress_Implementation(int32 Steps)
{
    for (int32 i = 0; i < Steps; ++i)
    {
        int32 KeyToRemove = ActiveIndex - i;

        ActiveProgress.Remove(KeyToRemove);
    }

    ProgressDialogue();
}

void UDialogueComponentBase::CallParentRemoveDialogueProgress(int32 Steps)
{
    RemoveDialogueProgress_Implementation(Steps);
}

void UDialogueComponentBase::SetDialogueBranch_Implementation(FName DialogueBranch, EProgressStoreType StoreType)
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

void UDialogueComponentBase::CallParentSetDialogueBranch(FName DialogueBranch, EProgressStoreType StoreType)
{
    SetDialogueBranch_Implementation(DialogueBranch, StoreType);
}

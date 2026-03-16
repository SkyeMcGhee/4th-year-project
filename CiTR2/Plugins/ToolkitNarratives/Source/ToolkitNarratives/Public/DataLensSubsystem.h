#pragma once

#include "Tickable.h"
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "DataLensStructs.h"
#include "DataLensSubsystem.generated.h"

class UDataLensTable;
class UDataLensTableView;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickCommitted, float, Duration);

UCLASS()
class TOOLKITNARRATIVES_API UDataLensSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Data Lens Subsystem", meta = (DisplayName = "System Frequency (Hz)", ClampMin = "0.01", UIMin = "0.01"))
	float SystemFrequency = 10.0f; // e.g. 10Hz max churn frequency

	UPROPERTY(BlueprintAssignable, Category = "Data Lens Subsystem")
	FOnTickCommitted OnUpdated;

	// Called early, before any worlds exist
	virtual void Deinitialize() override
	{
		Super::Deinitialize();
		UE_LOG(LogTemp, Log, TEXT("DataLensSubsystem::Deinitialize"));
	}

	virtual void Initialize(FSubsystemCollectionBase& Collection) override
	{
		Super::Initialize(Collection);
		pInstance = this;
		UE_LOG(LogTemp, Log, TEXT("DataLensSubsystem::Initialize"));
	}

	static UDataLensSubsystem* GetDataLensSubsystem()
	{
		return pInstance;
	}

	UFUNCTION(BlueprintPure, Category = "DataLens")
	static FGameplayTag ExtractTableTag(FGameplayTag Tag);
	UFUNCTION(BlueprintCallable, Category = "Views")
	void RegisterView(TSubclassOf<UDataLensTableView> ViewType);
	UFUNCTION(BlueprintCallable, Category = "Views")
	UDataLensTableView* GetView(TSubclassOf<UDataLensTableView> ViewType);
	UFUNCTION()
	UDataLensTable* GetDataTable(FGameplayTag TableTag) const;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

private:
	void CreateTableFromTag(const FGameplayTag& TableTag);
	void ClearDatabase();
	void BeginViewChurn();   
	bool FinalizeViewCommit(); 
	void BeginPayloadProcessing();
	bool FinalizePayloadProcessing();

	static UDataLensSubsystem* pInstance;
	FDelegateHandle TickDelegateHandle;
	TArray<TFuture<void>> ViewChurnTasks;
	bool bIsChurning = false;
	double PayloadStartTime = 0.0;
	TArray<TFuture<void>> PayloadProcessingTasks;
	bool bIsProcessingPayloads = false;

	// Payload buffers keyed by TableTag and RecordID
	TMap<FGameplayTag, TMap<FGuid, FDataLensRecordUpdatePayload>> PayloadBufferA;
	TMap<FGameplayTag, TMap<FGuid, FDataLensRecordUpdatePayload>> PayloadBufferB;

	// Pointer to the currently writable buffer
	TMap<FGameplayTag, TMap<FGuid, FDataLensRecordUpdatePayload>>* WritablePayloadBuffer = &PayloadBufferA;
	// Pointer to the currently readable buffer
	TMap<FGameplayTag, TMap<FGuid, FDataLensRecordUpdatePayload>>* ReadablePayloadBuffer = &PayloadBufferB;
	
	UPROPERTY()
	TMap<FGameplayTag, UDataLensTable*> TableMap;
	UPROPERTY()
	TMap<TSubclassOf<UDataLensTableView>, UDataLensTableView*> ViewMap;

	// Writer Tools
public:
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void SetAttribute(FGuid RecordId, FGameplayTag Attribute, int32 Value);
	
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void AddRelatedAddress(FGuid RecordId, FGameplayTag RelatedRecord, FRecordAddress Address);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void RemoveRelatedAddress(FGuid RecordId, FGameplayTag RelatedRecord, FRecordAddress Address);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void ClearRelatedAddresses(FGuid RecordId, FGameplayTag RelatedRecord);
	
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void AddTraitTag(FGuid RecordId, FGameplayTag TableTag, FGameplayTag TraitTag);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void RemoveTraitTag(FGuid RecordId, FGameplayTag TableTag, FGameplayTag TraitTag);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void ClearTraitTags(FGuid RecordId, FGameplayTag TableTag);

	UFUNCTION(BlueprintCallable, Category = "Writer")
	FGuid CreateNewRecord(FGameplayTag TableTag);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void DeleteRecord(FGuid RecordId, FGameplayTag TableTag);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void EmptyTable(FGameplayTag TableTag);
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void InitializeEmptyDatabase();
	UFUNCTION(BlueprintCallable, Category = "Writer")
	FDataLensDatabaseSaveData SaveDatabase();
	UFUNCTION(BlueprintCallable, Category = "Writer")
	void LoadDatabase(const FDataLensDatabaseSaveData& SaveData);
};

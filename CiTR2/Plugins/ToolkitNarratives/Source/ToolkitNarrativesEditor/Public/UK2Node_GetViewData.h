// Copyright 2025 Heathen Engineering Limited

#pragma once

#include "K2Node.h"
#include "DataLensTableView.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"  
#include "EdGraph/EdGraphPin.h"
#include "UK2Node_GetViewData.generated.h"

UCLASS()
class TOOLKITNARRATIVESEDITOR_API UK2Node_GetViewData : public UK2Node
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "View")
    TObjectPtr<UScriptStruct> TargetStructType;

    // Called during Blueprint load/compile to allocate pins
    virtual void AllocateDefaultPins() override;

    // Handles what happens when the node is compiled (we'll do nothing, assume data is already set)
    virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;

    // Name for the node in the Blueprint context menu
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual FText GetTooltipText() const override;
    virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
    virtual bool CanCreateUnderSpecifiedSchema(const UEdGraphSchema* Schema) const override
    {
        return Schema->IsA<UEdGraphSchema_K2>();
    }

    virtual bool IsNodePure() const override { return true; }

#if WITH_EDITOR
    virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
    virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    void UpdateTargetStructFromViewClassPin(UEdGraphPin* Pin);
#endif
};


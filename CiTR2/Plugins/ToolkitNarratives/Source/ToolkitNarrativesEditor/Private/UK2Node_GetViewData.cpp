// Copyright 2025 Heathen Engineering Limited

#include "UK2Node_GetViewData.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include <K2Node_MakeArray.h>
#include "Kismet/KismetMathLibrary.h"
#include <BlueprintGraphClasses.h>

void UK2Node_GetViewData::AllocateDefaultPins()
{
    // 1) “ViewClass” input must be a Class of (UDataLensTableView or subclass)
    UEdGraphPin* ViewClassPin = CreatePin(
        EGPD_Input,
        UEdGraphSchema_K2::PC_Class,
        UDataLensTableView::StaticClass(),
        /*PinName=*/ TEXT("ViewClass")
    );
    ViewClassPin->PinToolTip = TEXT("Choose a UDataLensTableView‐derived class here");

    // 2) “Records” output.  If TargetStructType is set, make it a PC_Struct pin; 
    //    otherwise leave as wildcard.  In all cases it is an Array container.
    UEdGraphPin* RecordsPin = nullptr;
    if (TargetStructType)
    {
        RecordsPin = CreatePin(
            EGPD_Output,
            UEdGraphSchema_K2::PC_Struct,
            TargetStructType,
            /*PinName=*/ TEXT("Records")
        );
    }
    else
    {
        RecordsPin = CreatePin(
            EGPD_Output,
            UEdGraphSchema_K2::PC_Wildcard,
            /*PinSubCategory=*/ TEXT(""),
            /*PinName=*/ TEXT("Records")
        );
    }
    RecordsPin->PinType.ContainerType = EPinContainerType::Array;
}

void UK2Node_GetViewData::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);

	// 1) Get input/output pins
	UEdGraphPin* ViewClassPin = FindPinChecked(TEXT("ViewClass"));
	UEdGraphPin* RecordsPin = FindPinChecked(TEXT("Records"));

	// 2) Resolve ViewClass from input pin
	UClass* ViewClass = nullptr;
	if (ViewClassPin->LinkedTo.Num() > 0)
	{
		ViewClass = Cast<UClass>(ViewClassPin->LinkedTo[0]->PinType.PinSubCategoryObject.Get());
	}
	else if (ViewClassPin->DefaultObject)
	{
		ViewClass = Cast<UClass>(ViewClassPin->DefaultObject);
	}
	else if (!ViewClassPin->DefaultValue.IsEmpty())
	{
		ViewClass = LoadClass<UDataLensTableView>(nullptr, *ViewClassPin->DefaultValue);
	}

	// 3) Validate ViewClass
	if (!ViewClass || !ViewClass->IsChildOf(UDataLensTableView::StaticClass()))
	{
		CompilerContext.MessageLog.Error(*FString::Printf(TEXT("Invalid or missing View class on node '%s'."), *GetName()));
		BreakAllNodeLinks();
		return;
	}

	// 4) Resolve TargetStructType from ViewClass
	const UDataLensTableView* DefaultView = Cast<UDataLensTableView>(ViewClass->GetDefaultObject());
	if (!DefaultView || !DefaultView->TargetStructType)
	{
		CompilerContext.MessageLog.Error(*FString::Printf(TEXT("Missing TargetStructType in default object for '%s'."), *ViewClass->GetName()));
		BreakAllNodeLinks();
		return;
	}
	UScriptStruct* ResolvedStruct = DefaultView->TargetStructType;

	// 5) Check for manual misconfiguration
	if (TargetStructType && TargetStructType != ResolvedStruct)
	{
		CompilerContext.MessageLog.Error(*FString::Printf(
			TEXT("Struct mismatch: View expects '%s', but node was set to '%s'."),
			*ResolvedStruct->GetName(), *TargetStructType->GetName()));
		BreakAllNodeLinks();
		return;
	}

	// 6) Retype output pin as TArray<ResolvedStruct>
	RecordsPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
	RecordsPin->PinType.PinSubCategoryObject = ResolvedStruct;
	RecordsPin->PinType.ContainerType = EPinContainerType::Array;

	// 7) Get DataLensSubsystem
	UK2Node_CallFunction* SubsystemCall = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	SubsystemCall->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UDataLensSubsystem, GetDataLensSubsystem), UDataLensSubsystem::StaticClass());
	SubsystemCall->AllocateDefaultPins();

	// 8) GetView(ViewClass) from subsystem
	UK2Node_CallFunction* GetViewCall = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	GetViewCall->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UDataLensSubsystem, GetView), UDataLensSubsystem::StaticClass());
	GetViewCall->AllocateDefaultPins();

	CompilerContext.MovePinLinksToIntermediate(*SubsystemCall->FindPinChecked(TEXT("ReturnValue")), *GetViewCall->FindPinChecked(TEXT("self")));
	CompilerContext.MovePinLinksToIntermediate(*ViewClassPin, *GetViewCall->FindPinChecked(TEXT("ViewType")));

	// 9) Check View != nullptr
	UK2Node_CallFunction* NotEqualNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	NotEqualNode->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UKismetMathLibrary, NotEqual_ObjectObject), UKismetMathLibrary::StaticClass());
	NotEqualNode->AllocateDefaultPins();
	CompilerContext.MovePinLinksToIntermediate(*GetViewCall->FindPinChecked(TEXT("ReturnValue")), *NotEqualNode->FindPinChecked(TEXT("A")));

	// 10) Branch if View is valid
	UK2Node_IfThenElse* BranchNode = CompilerContext.SpawnIntermediateNode<UK2Node_IfThenElse>(this, SourceGraph);
	BranchNode->AllocateDefaultPins();
	CompilerContext.MovePinLinksToIntermediate(*NotEqualNode->FindPinChecked(TEXT("ReturnValue")), *BranchNode->GetConditionPin());

	// 11) Call GetResults() on view instance
	UK2Node_CallFunction* GetResultsCall = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	GetResultsCall->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UDataLensTableView, GetResults), UDataLensTableView::StaticClass());
	GetResultsCall->AllocateDefaultPins();
	CompilerContext.MovePinLinksToIntermediate(*GetViewCall->FindPinChecked(TEXT("ReturnValue")), *GetResultsCall->FindPinChecked(TEXT("self")));

	// 12) Make empty array fallback
	UK2Node_MakeArray* MakeEmptyArrayNode = CompilerContext.SpawnIntermediateNode<UK2Node_MakeArray>(this, SourceGraph);
	MakeEmptyArrayNode->AllocateDefaultPins();
	UEdGraphPin* MakeArrayOutPin = MakeEmptyArrayNode->GetOutputPin();
	MakeArrayOutPin->PinType.PinCategory = UEdGraphSchema_K2::PC_Struct;
	MakeArrayOutPin->PinType.PinSubCategoryObject = ResolvedStruct;
	MakeArrayOutPin->PinType.ContainerType = EPinContainerType::Array;

	// 13) Connect execution flow
	CompilerContext.MovePinLinksToIntermediate(*FindPinChecked(TEXT("Exec")), *BranchNode->GetExecPin());
	BranchNode->GetThenPin()->MakeLinkTo(GetResultsCall->GetExecPin());
	BranchNode->GetElsePin()->MakeLinkTo(MakeEmptyArrayNode->GetExecPin());

	// 14) Connect outputs to Records pin
	CompilerContext.MovePinLinksToIntermediate(*GetResultsCall->FindPinChecked(TEXT("OutArray")), *RecordsPin);
	CompilerContext.MovePinLinksToIntermediate(*MakeArrayOutPin, *RecordsPin);

	// 15) Clean up
	BreakAllNodeLinks();
}

FText UK2Node_GetViewData::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
    return FText::FromString("Get View Results");
}

FText UK2Node_GetViewData::GetTooltipText() const
{
    return FText::FromString("Returns the view's result data as an array of the type set in TargetStructType");
}

void UK2Node_GetViewData::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(ActionKey))
	{
		UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
		ActionRegistrar.AddBlueprintAction(ActionKey, NodeSpawner);
	}
}

#if WITH_EDITOR
void UK2Node_GetViewData::NotifyPinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::NotifyPinConnectionListChanged(Pin);

	UpdateTargetStructFromViewClassPin(Pin);
}

void UK2Node_GetViewData::PinDefaultValueChanged(UEdGraphPin* Pin)
{
	Super::PinDefaultValueChanged(Pin);

	UpdateTargetStructFromViewClassPin(Pin);
}

void UK2Node_GetViewData::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (UEdGraphPin* Pin = FindPinChecked(TEXT("ViewClass")))
	{
		UpdateTargetStructFromViewClassPin(Pin);
	}
}

void UK2Node_GetViewData::UpdateTargetStructFromViewClassPin(UEdGraphPin* Pin)
{
	UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: Enter"));
	UScriptStruct* NewStructType = nullptr;
	UClass* ViewClass = nullptr;

	if (Pin->LinkedTo.Num() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: Pin->LinkedTo.Num() > 0"));
		UEdGraphPin* LinkedPin = Pin->LinkedTo[0];
		ViewClass = Cast<UClass>(LinkedPin->PinType.PinSubCategoryObject.Get());
	}
	else if (Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Class)
	{
		UObject* ResolvedObj = nullptr;
		if (Pin->DefaultObject)
		{
			ResolvedObj = Pin->DefaultObject;
		}
		else
		{
			// fallback: try to resolve from default value text if present
			ResolvedObj = StaticLoadObject(UClass::StaticClass(), nullptr, *Pin->DefaultValue);
		}

		ViewClass = Cast<UClass>(ResolvedObj);

		UE_LOG(LogTemp, Warning, TEXT("Resolved ViewClass = %s"), *GetNameSafe(ViewClass));
	}

	if (ViewClass && ViewClass->IsChildOf(UDataLensTableView::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: ViewClass && ViewClass->IsChildOf(UDataLensTableView::StaticClass())"));
		if (const UDataLensTableView* CDO = Cast<UDataLensTableView>(ViewClass->GetDefaultObject()))
		{
			UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: const UDataLensTableView* CDO = Cast<UDataLensTableView>(ViewClass->GetDefaultObject())"));
			NewStructType = CDO->TargetStructType;
		}
	}

	if (NewStructType && NewStructType != TargetStructType)
	{
		UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: NewStructType && NewStructType != TargetStructType"));
		TargetStructType = NewStructType;
		ReconstructNode();
		GetGraph()->NotifyGraphChanged();
	}

	UE_LOG(LogTemp, Warning, TEXT("UpdateTargetStructFromViewClassPin: Exit"));
}
#endif

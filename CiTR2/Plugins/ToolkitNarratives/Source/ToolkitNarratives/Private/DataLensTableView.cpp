#include "DataLensTableView.h"

void UDataLensTableView::execGetResults(UObject *Context, FFrame& Stack, RESULT_DECL)
{
	P_FINISH;

	UDataLensTableView* Self = (UDataLensTableView*)Stack.Object;

	if (!Self || !Self->TargetStructType)
	{
		*(TArray<uint8>*)RESULT_PARAM = TArray<uint8>();
		return;  // <-- return needed here
	}

	UScriptStruct* StructType = Self->TargetStructType;
	int32 ElementSize = StructType->GetStructureSize();

	FProperty* ReturnProperty = Stack.Node->GetReturnProperty();
	FArrayProperty* ArrayProperty = CastField<FArrayProperty>(ReturnProperty);
	if (!ArrayProperty)
	{
		*(TArray<uint8>*)RESULT_PARAM = TArray<uint8>();
		return;
	}

	void* ReturnValueAddress = RESULT_PARAM;
	FScriptArrayHelper Helper(ArrayProperty, ReturnValueAddress);
	Helper.Resize(Self->NumElements);

	for (int32 i = 0; i < Self->NumElements; ++i)
	{
		void* DestPtr = Helper.GetRawPtr(i);
		const void* SrcPtr = &Self->RawDataBuffer[i * ElementSize];
		StructType->CopyScriptStruct(DestPtr, SrcPtr);
	}

	return;  // Explicit return (good practice)
}

void UDataLensTableView::ConvertRawBytesToStructArray(const TArray<uint8>& RawData, UScriptStruct* StructType, TArray<uint8>& OutStructArray)
{
	if (!StructType)
	{
		UE_LOG(LogTemp, Warning, TEXT("ConvertRawBytesToStructArray called with null StructType"));
		OutStructArray.Empty();
		return;
	}

	const int32 StructSize = StructType->GetStructureSize();
	if (StructSize <= 0 || RawData.Num() % StructSize != 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("RawData size not divisible by struct size"));
		OutStructArray.Empty();
		return;
	}

	const int32 NumStructs = RawData.Num() / StructSize;

	// Temporary buffer to hold the structs in memory
	TArray<uint8> TempBuffer;
	TempBuffer.SetNumZeroed(RawData.Num());

	for (int32 Index = 0; Index < NumStructs; ++Index)
	{
		// Pointer to source struct data
		const uint8* SrcPtr = RawData.GetData() + (Index * StructSize);
		// Pointer to destination struct memory
		uint8* DstPtr = TempBuffer.GetData() + (Index * StructSize);

		// Initialize a struct instance in place
		StructType->InitializeStruct(DstPtr);

		// Deserialize (copy raw bytes)
		FMemory::Memcpy(DstPtr, SrcPtr, StructSize);

		// You could also call StructType->Serialize or UStruct::CopyScriptStruct if needed
		// but simple memcpy should be enough if data layout matches
	}

	// Now TempBuffer contains a proper array of structs in contiguous memory

	OutStructArray = MoveTemp(TempBuffer);
}

void UDataLensTableView::InitializeQuery()
{
	// 1) Grab our From-table once
	SourceTable = UDataLensSubsystem::GetDataLensSubsystem()
		->GetDataTable(Query.From);
	if (!SourceTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("InitializeQuery: missing table for tag %s"), *Query.From.ToString());
		return;
	}

	// 2) Pre-index InputAliases
	ResolvedInputs.Empty();
	ResolvedInputs.Reserve(Query.InputAliases.Num());
	for (const FDataLensFieldAddress& Alias : Query.InputAliases)
	{
		FResolvedField RF;
		RF.bIsLocal = (Alias.Source == Query.From);

		if (RF.bIsLocal)
		{
			RF.Index = SourceTable->FindAttributeTagIndex(Alias.Attribute);
			if (RF.Index == INDEX_NONE)
			{
				UE_LOG(LogTemp, Warning, TEXT("InitializeQuery: InputAlias refers to missing attribute %s"), *Alias.Attribute.ToString());
			}
		}
		else
		{
			RF.Index = SourceTable->FindRelationTagIndex(Alias.Source);
			if (RF.Index == INDEX_NONE)
			{
				UE_LOG(LogTemp, Warning, TEXT("InitializeQuery: InputAlias refers to missing relation %s"), *Alias.Source.ToString());
			}
			RF.TargetAttributeTag = Alias.Attribute;
		}

		ResolvedInputs.Add(RF);
	}

	// 3) Pre-index RelatedAliases (if you really need a separate list)
	ResolvedRelated.Empty();
	ResolvedRelated.Reserve(Query.RelatedAliases.Num());
	for (const FDataLensFieldAddress& Alias : Query.RelatedAliases)
	{
		FResolvedField RF;
		RF.bIsLocal = false;
		RF.Index = SourceTable->FindRelationTagIndex(Alias.Source);
		if (RF.Index == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("InitializeQuery: RelatedAlias refers to missing relation %s"), *Alias.Source.ToString());
		}
		RF.TargetAttributeTag = Alias.Attribute;
		ResolvedRelated.Add(RF);
	}

	// 4) Compile WHERE
	CompiledWhere.Empty();
	ParseAndCompileToRPN(Query.WhereClause, CompiledWhere);

	// 5) Compile each computed column
	CompiledSelect.Empty(Query.Select.Num());
	SelectAggregates.Empty(Query.Select.Num());

	// list of aggregates we support
	static const TArray<TPair<FString, EAggregateOp>> AggFns =
	{
		{ TEXT("Sum"),      EAggregateOp::Sum    },
		{ TEXT("SumIf"),    EAggregateOp::SumIf  },
		{ TEXT("Avg"),      EAggregateOp::Avg    },
		{ TEXT("Mean"),     EAggregateOp::Median },
		{ TEXT("Min"),      EAggregateOp::Min    },
		{ TEXT("Max"),      EAggregateOp::Max    },
		{ TEXT("Count"),    EAggregateOp::Count  },
		{ TEXT("CountIf"),  EAggregateOp::CountIf},
		{ TEXT("First"),    EAggregateOp::First  },
		{ TEXT("Last"),     EAggregateOp::Last   },
	};

	for (const FLensTableViewColumn& Col : Query.Select)
	{
		// 1) detect “aggName(innerExpr)”
		EAggregateOp  DetectedAgg = EAggregateOp::None;
		FString       InnerExpr = Col.Formula;

		for (auto& Pair : AggFns)
		{
			const FString& Name = Pair.Key;
			if (Col.Formula.StartsWith(Name + TEXT("("), ESearchCase::IgnoreCase))
			{
				// grab what's inside the parens
				int32 Start = Name.Len() + 1; // after "Sum("
				int32 End = Col.Formula.Len() - 1; // before final ")"
				InnerExpr = Col.Formula.Mid(Start, End - Start);
				DetectedAgg = Pair.Value;
				break;
			}
		}

		SelectAggregates.Add(DetectedAgg);

		// 2) compile the “inner” (whether it’s a plain math/field expr or the predicate for SumIf/CountIf)
		TArray<FDataExpressionToken> Tokens;
		ParseAndCompileToRPN(InnerExpr, Tokens);
		CompiledSelect.Add(MoveTemp(Tokens));
	}

	// 6) Turn GroupBy → indices into CompiledSelect
	GroupByIndices.Empty(Query.GroupBy.Num());
	for (const FName& G : Query.GroupBy)
	{
		int32 Idx = FindColumnIndexByName(G);
		GroupByIndices.Add(Idx);
	}

	// 7) Build SortInstructions
	SortInstructions.Empty(Query.SortBy.Num());
	for (const FSortColumnByName& SC : Query.SortBy)
	{
		SortInstructions.Emplace(FSortColumnByIndex{
			FindColumnIndexByName(SC.ColumnName),
			SC.bDescending
			});
	}
}

int32 UDataLensTableView::FindColumnIndexByName(const FName& ColumnName) const
{
	for (int32 i = 0, n = Query.Select.Num(); i < n; ++i)
	{
		if (Query.Select[i].ColumnName == ColumnName)
		{
			return i;
		}
	}
	return INDEX_NONE;
}

void UDataLensTableView::CollectFieldMappings()
{
	MappedFields.Empty();

	if (!TargetStructType)
	{
		UE_LOG(LogTemp, Warning, TEXT("TargetStructType is null in DataRecordView"));
		return;
	}

	IntIndex = 0;
	FloatIndex = 0;
	BoolIndex = 0;

	for (TFieldIterator<FProperty> PropIt(TargetStructType.Get()); PropIt; ++PropIt)
	{
		FProperty* Prop = *PropIt;
		if (!Prop) continue;

		EDataLensTargetType FieldType;
		int32 IntermediateIndex = -1;

		if (Prop->IsA<FIntProperty>())
		{
			FieldType = EDataLensTargetType::Int;
			IntermediateIndex = IntIndex++;
		}
		else if (Prop->IsA<FFloatProperty>())
		{
			FieldType = EDataLensTargetType::Float;
			IntermediateIndex = FloatIndex++;
		}
		else if (Prop->IsA<FBoolProperty>())
		{
			FieldType = EDataLensTargetType::Bool;
			IntermediateIndex = BoolIndex++;
		}
		else if (FStructProperty* StructProp = CastField<FStructProperty>(Prop))
		{
			if (StructProp->Struct == TBaseStructure<FGuid>::Get())
			{
				FieldType = EDataLensTargetType::Guid;
				IntermediateIndex = -1; // Guid won't have an intermediate index
			}
			else
			{
				continue; // Unsupported struct type, skip
			}
		}
		else
		{
			continue; // Skip unsupported types
		}

		FDataLensTargetField Field;
		Field.FieldName = Prop->GetFName();
		Field.FieldType = FieldType;
		Field.Property = Prop;
		Field.Offset = Prop->GetOffset_ForInternal();
		Field.IntermediateIndex = IntermediateIndex;

		MappedFields.Add(Field);
	}

#if WITH_EDITOR
	UE_LOG(LogTemp, Log, TEXT("Collected %d fields for View (%s)"), MappedFields.Num(), *GetName());
#endif
}

void UDataLensTableView::Churn()
{
	check(SourceTable); // Ensure source table is valid

	TempRows.Empty();
	TempRows.Reserve(SourceTable->Num());
	
	TArray<int32>   AttrValues;
	TArray<TArray<int32>> RelValues;
	AttrValues.SetNum(Query.InputAliases.Num());
	RelValues.SetNum(Query.RelatedAliases.Num());

	// Loop over SourceTable records
	for (int32 RecordIndex = 0; RecordIndex < SourceTable->Num(); ++RecordIndex)
	{
		// Gather attribute values for this record (int32 values)
		SourceTable->GetRecordValues(Query.From, RecordIndex, Query.InputAliases, AttrValues);
		SourceTable->GetRelatedValues(Query.From, RecordIndex, Query.RelatedAliases, RelValues);
		const FGameplayTagContainer& Tags = SourceTable->GetRecordTags(RecordIndex);

		// Evaluate WHERE clause: skip if false
		if (!EvaluateRPNBool(CompiledWhere, AttrValues, RelValues, Tags))
		{
			continue;
		}

		// Evaluate SELECT expressions per column
		FIntermediateRecord ResultRow = FIntermediateRecord();
		ResultRow.ID = SourceTable->GetRecordId(RecordIndex);

		// For each column in the output struct, evaluate expression
		for (int32 ColIdx = 0; ColIdx < CompiledSelect.Num(); ++ColIdx)
		{
			// Evaluate select expression
			float Value = EvaluateRPNFloat(CompiledSelect[ColIdx], AttrValues, RelValues, Tags);

			// Write the value into the ResultRow at the field offset
			const FDataLensTargetField& Field = MappedFields[ColIdx];

			// Store based on FieldType
			switch (Field.FieldType)
			{
			case EDataLensTargetType::Int:
			{
				int32 IntVal = FMath::RoundToInt(Value);
				ResultRow.SetInt(Field.IntermediateIndex, IntVal);
				break;
			}
			case EDataLensTargetType::Float:
			{
				ResultRow.SetFloat(Field.IntermediateIndex, Value);
				break;
			}
			case EDataLensTargetType::Bool:
			{
				bool bVal = (Value > 0.0f);
				ResultRow.SetBool(Field.IntermediateIndex, bVal);
				break;
			}
			}
		}

		// Store this row in TempRows
		TempRows.Add(ResultRow);
	}

	// Apply Grouping on TempRows
	if (GroupByIndices.Num() > 0)
	{
		TMap<FGroupKey, FIntermediateRecord> GroupedRows;

		for (const FIntermediateRecord& Row : TempRows)
		{
			FGroupKey Key;
			for (int32 GroupIdx : GroupByIndices)
			{
				const FDataLensTargetField& Field = MappedFields[GroupIdx];
				const int32 InterIdx = Field.IntermediateIndex;

				switch (Field.FieldType)
				{
				case EDataLensTargetType::Int:
				{
					int32 Val = Row.GetInt(InterIdx);
					Key.KeyData.Append(reinterpret_cast<uint8*>(&Val), sizeof(int32));
					break;
				}
				case EDataLensTargetType::Float:
				{
					float Val = Row.GetFloat(InterIdx);
					Key.KeyData.Append(reinterpret_cast<uint8*>(&Val), sizeof(float));
					break;
				}
				case EDataLensTargetType::Bool:
				{
					bool Val = Row.GetBool(InterIdx);
					Key.KeyData.Add(static_cast<uint8>(Val));
					break;
				}
				}
			}

			// Keep first occurrence (aggregation TBD)
			if (!GroupedRows.Contains(Key))
			{
				GroupedRows.Add(Key, Row);
			}
		}

		TempRows.Empty();
		GroupedRows.GenerateValueArray(TempRows);
	}

	// Apply Sorting on TempRows by SortInstructions
	if (SortInstructions.Num() > 0)
	{
		TempRows.Sort([&](const FIntermediateRecord& A, const FIntermediateRecord& B)
			{
				for (const FSortColumnByIndex& Sort : SortInstructions)
				{
					const FDataLensTargetField& Field = MappedFields[Sort.ColumnIndex];
					const int32 InterIdx = Field.IntermediateIndex;

					switch (Field.FieldType)
					{
					case EDataLensTargetType::Int:
					{
						int32 AVal = A.GetInt(InterIdx);
						int32 BVal = B.GetInt(InterIdx);
						if (AVal != BVal)
						{
							return Sort.bDescending ? (AVal > BVal) : (AVal < BVal);
						}
						break;
					}
					case EDataLensTargetType::Float:
					{
						float AVal = A.GetFloat(InterIdx);
						float BVal = B.GetFloat(InterIdx);
						if (!FMath::IsNearlyEqual(AVal, BVal))
						{
							return Sort.bDescending ? (AVal > BVal) : (AVal < BVal);
						}
						break;
					}
					case EDataLensTargetType::Bool:
					{
						bool AVal = A.GetBool(InterIdx);
						bool BVal = B.GetBool(InterIdx);
						if (AVal != BVal)
						{
							return Sort.bDescending ? (AVal > BVal) : (AVal < BVal);
						}
						break;
					}
					}
				}
				return false;
			});
	}
}

void UDataLensTableView::Commit()
{
	// Pack final TempRows into RawDataBuffer
	RawDataBuffer.Reset();
	const int32 ElementSize = TargetStructType->GetStructureSize();
	RawDataBuffer.AddUninitialized(TempRows.Num() * ElementSize);

	uint8* Dest = RawDataBuffer.GetData();

	for (const FIntermediateRecord& Row : TempRows)
	{
		for (const FDataLensTargetField& Field : MappedFields)
		{
			uint8* FieldDest = Dest + Field.Offset;

			switch (Field.FieldType)
			{
			case EDataLensTargetType::Int:
			{
				int32 Val = Row.GetInt(Field.IntermediateIndex);
				FMemory::Memcpy(FieldDest, &Val, sizeof(int32));
				break;
			}
			case EDataLensTargetType::Float:
			{
				float Val = Row.GetFloat(Field.IntermediateIndex);
				FMemory::Memcpy(FieldDest, &Val, sizeof(float));
				break;
			}
			case EDataLensTargetType::Bool:
			{
				bool Val = Row.GetBool(Field.IntermediateIndex);
				FMemory::Memcpy(FieldDest, &Val, sizeof(bool));
				break;
			}
			case EDataLensTargetType::Guid:
			{
				FGuid Val = Row.ID;
				FMemory::Memcpy(FieldDest, &Val, sizeof(FGuid));
				break;
			}
			}
		}

		Dest += ElementSize;
	}
}

void UDataLensTableView::ParseAndCompileToRPN(const FString& Expression, TArray<FDataExpressionToken>& OutTokens)
{
	OutTokens.Empty();

	// --- 1) Lexing ---
	enum class ELexType { Number, InputRef, RelatedAgg, TraitFn, Op, LParen, RParen };
	struct FLexToken {
		ELexType   Kind;
		FString    Text;         // for Number/op
		TArray<FString> StringArgs; // holds the literal tag names, e.g. ["Brave","Knight"]
		int32      Index = -1;   // for InputRef or RelatedAgg
		EAggregateOp AggOp = EAggregateOp::None; // for RelatedAgg
		FString    Condition;    // for RelatedAgg with condition
	};
	TArray<FLexToken> Lexed;
	const TCHAR* Ptr = *Expression;

	while (*Ptr)
	{
		if (FChar::IsWhitespace(*Ptr)) { Ptr++; continue; }

		// Input alias [n]
		if (*Ptr == '[')
		{
			Ptr++;
			if (!FChar::IsDigit(*Ptr))
				ensureMsgf(false, TEXT("Expected digit after '['"));

			int32 Idx = FCString::Atoi(Ptr);
			while (FChar::IsDigit(*Ptr)) Ptr++;
			if (*Ptr == ']') Ptr++;
			else ensureMsgf(false, TEXT("Expected closing ']' for InputRef"));

			Lexed.Add({ ELexType::InputRef, TEXT(""), {}, Idx,  EAggregateOp::None , TEXT("")});
			continue;
		}

		// Alpha-scan: could be a TraitFn or a RelatedAgg
		if (FChar::IsAlpha(*Ptr))
		{
			// 1) Read identifier
			FString Id;
			while (FChar::IsAlpha(*Ptr))
			{
				Id.AppendChar(*Ptr);
				Ptr++;
			}

			// 2) Trait functions take priority
			if (Id.Equals(TEXT("HasTrait"), ESearchCase::IgnoreCase) ||
				Id.Equals(TEXT("TraitCount"), ESearchCase::IgnoreCase) ||
				Id.Equals(TEXT("HasAny"), ESearchCase::IgnoreCase) ||
				Id.Equals(TEXT("HasAll"), ESearchCase::IgnoreCase))
			{
				// Expect "("
				ensureMsgf(*Ptr == '(', TEXT("Expected '(' after %s"), *Id);
				Ptr++;

				// Parse comma-separated string literals
				TArray<FString> TagNames;
				while (*Ptr && *Ptr != ')')
				{
					// Skip whitespace
					while (FChar::IsWhitespace(*Ptr)) Ptr++;

					// Read quoted literal
					ensureMsgf(*Ptr == '\"' || *Ptr == '\'', TEXT("Expected quoted tag name"));
					const TCHAR QuoteChar = *Ptr++;
					const TCHAR* Start = Ptr;
					while (*Ptr && *Ptr != QuoteChar) Ptr++;
					TagNames.Add(FString(Ptr - Start, Start));
					ensureMsgf(*Ptr == QuoteChar, TEXT("Unterminated tag literal"));
					Ptr++; // skip closing quote

					// Skip whitespace/comma
					while (*Ptr && (FChar::IsWhitespace(*Ptr) || *Ptr == ',')) Ptr++;
				}
				ensureMsgf(*Ptr == ')', TEXT("Expected ')' after %s args"), *Id);
				Ptr++;

				// Emit one TraitFn token
				FLexToken Tok;
				Tok.Kind = ELexType::TraitFn;
				Tok.Text = Id;           // "HasTrait", etc.
				Tok.StringArgs = MoveTemp(TagNames);
				Lexed.Add(Tok);
				continue;
			}

			// 3) Fall-through: check for aggregates
			EAggregateOp Agg = EAggregateOp::None;
			if (Id.Equals(TEXT("SumIf"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::SumIf;
			else if (Id.Equals(TEXT("Sum"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Sum;
			else if (Id.Equals(TEXT("CountIf"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::CountIf;
			else if (Id.Equals(TEXT("Count"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Count;
			else if (Id.Equals(TEXT("First"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::First;
			else if (Id.Equals(TEXT("Last"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Last;
			else if (Id.Equals(TEXT("Min"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Min;
			else if (Id.Equals(TEXT("Max"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Max;
			else if (Id.Equals(TEXT("Avg"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Avg;
			else if (Id.Equals(TEXT("Median"), ESearchCase::IgnoreCase)) Agg = EAggregateOp::Median;

			if (Agg != EAggregateOp::None)
			{
				// (existing RelatedAgg parsing remains unchanged)
				while (*Ptr && *Ptr != '{') Ptr++;
				ensureMsgf(*Ptr == '{', TEXT("Expected '{' in RelatedAgg"));
				Ptr++;

				ensureMsgf(FChar::IsDigit(*Ptr), TEXT("Expected digit inside RelatedAgg"));
				int32 Idx = FCString::Atoi(Ptr);
				while (FChar::IsDigit(*Ptr)) Ptr++;

				ensureMsgf(*Ptr == '}', TEXT("Expected '}' in RelatedAgg"));
				Ptr++;

				FString Condition;
				if (*Ptr == ',')
				{
					Ptr++; // Skip comma
					while (*Ptr && FChar::IsWhitespace(*Ptr)) Ptr++;

					const TCHAR* Start = Ptr;
					while (*Ptr && *Ptr != ')') Ptr++;
					ensureMsgf(*Ptr == ')', TEXT("Expected ')' after RelatedAgg condition"));

					Condition = FString(Ptr - Start, Start);
					Ptr++; // Skip closing ')'
				}
				else
				{
					ensureMsgf(*Ptr == ')', TEXT("Expected ')' after RelatedAgg"));
					Ptr++;
					// Default for CountIf/SumIf
					if (Agg == EAggregateOp::CountIf || Agg == EAggregateOp::SumIf)
					{
						Condition = TEXT("> 0");
					}
				}

				if ((Agg == EAggregateOp::CountIf || Agg == EAggregateOp::SumIf) && Condition.IsEmpty())
				{
					Condition = TEXT("> 0");
				}
				else if (!(Agg == EAggregateOp::CountIf || Agg == EAggregateOp::SumIf) && !Condition.IsEmpty())
				{
					ensureMsgf(false, TEXT("Condition provided for aggregate op that doesn't support it"));
				}

				FLexToken Tok;
				Tok.Kind = ELexType::RelatedAgg;
				Tok.Text = TEXT("");
				Tok.Index = Idx;
				Tok.AggOp = Agg;
				Tok.Condition = Condition;
				Lexed.Add(Tok);
				continue;
			}
		}

		// Number or dot-prefixed float
		if (FChar::IsDigit(*Ptr) || (*Ptr == '.' && FChar::IsDigit(Ptr[1])))
		{
			const TCHAR* Start = Ptr;
			if (*Ptr == '.') Ptr++;
			while (FChar::IsDigit(*Ptr)) Ptr++;
			if (*Ptr == '.') { Ptr++; while (FChar::IsDigit(*Ptr)) Ptr++; }

			Lexed.Add({ ELexType::Number, FString(Start, Ptr - Start) });
			continue;
		}

		// Parentheses
		if (*Ptr == '(') { Lexed.Add({ ELexType::LParen }); Ptr++; continue; }
		if (*Ptr == ')') { Lexed.Add({ ELexType::RParen }); Ptr++; continue; }

		// Multi-char operators first
		if (Ptr[0] == '&' && Ptr[1] == '&') { Lexed.Add({ ELexType::Op, TEXT("&&") }); Ptr += 2; continue; }
		if (Ptr[0] == '|' && Ptr[1] == '|') { Lexed.Add({ ELexType::Op, TEXT("||") }); Ptr += 2; continue; }
		if (Ptr[0] == '=' && Ptr[1] == '=') { Lexed.Add({ ELexType::Op, TEXT("==") }); Ptr += 2; continue; }
		if (Ptr[0] == '!' && Ptr[1] == '=') { Lexed.Add({ ELexType::Op, TEXT("!=") }); Ptr += 2; continue; }
		if (Ptr[0] == '>' && Ptr[1] == '=') { Lexed.Add({ ELexType::Op, TEXT(">=") }); Ptr += 2; continue; }
		if (Ptr[0] == '<' && Ptr[1] == '=') { Lexed.Add({ ELexType::Op, TEXT("<=") }); Ptr += 2; continue; }

		// Single-char ops
		if (FCString::Strchr(TEXT("+-*/><!"), *Ptr))
		{
			Lexed.Add({ ELexType::Op, FString(1, Ptr) });
			Ptr++;
			continue;
		}

		// Unrecognized
		ensureMsgf(false, TEXT("Unrecognized token at: %s"), Ptr);
		Ptr++;
	}

	// --- 2) Shunting-Yard to RPN ---
	TArray<FLexToken> Output, OpStack;
	auto GetPrec = [&](const FLexToken& T)->int32 {
		if (T.Kind == ELexType::Op)
		{
			if (T.Text == "!") return 6;
			if (T.Text == "*" || T.Text == "/") return 5;
			if (T.Text == "+" || T.Text == "-") return 4;
			if (T.Text == ">" || T.Text == "<" || T.Text == ">=" || T.Text == "<=" || T.Text == "==" || T.Text == "!=") return 3;
			if (T.Text == "&&") return 2;
			if (T.Text == "||") return 1;
		}
		if (T.Kind == ELexType::RelatedAgg) return 7;
		return 0;
		};
	auto IsUnaryMinus = [&](int32 Index) -> bool {
		if (Lexed[Index].Kind != ELexType::Op || Lexed[Index].Text != "-")
			return false;
		if (Index == 0) return true;
		ELexType PrevKind = Lexed[Index - 1].Kind;
		return PrevKind == ELexType::Op || PrevKind == ELexType::LParen;
		};

	for (int32 i = 0; i < Lexed.Num(); ++i)
	{
		const FLexToken& T = Lexed[i];
		if (T.Kind == ELexType::Number || T.Kind == ELexType::InputRef || T.Kind == ELexType::RelatedAgg)
		{
			Output.Add(T);
		}
		else if (T.Kind == ELexType::Op)
		{
			if (IsUnaryMinus(i))
			{
				FLexToken Neg = { ELexType::Op, TEXT("NEG") };
				OpStack.Add(Neg);
				continue;
			}
			while (OpStack.Num()
				&& OpStack.Last().Kind == ELexType::Op
				&& GetPrec(OpStack.Last()) >= GetPrec(T))
			{
				Output.Add(OpStack.Pop());
			}
			OpStack.Add(T);
		}
		else if (T.Kind == ELexType::LParen)
		{
			OpStack.Add(T);
		}
		else if (T.Kind == ELexType::RParen)
		{
			while (OpStack.Num() && OpStack.Last().Kind != ELexType::LParen)
				Output.Add(OpStack.Pop());
			if (OpStack.Num() && OpStack.Last().Kind == ELexType::LParen)
				OpStack.Pop();
			else
				ensureMsgf(false, TEXT("Mismatched parentheses"));
		}
	}
	while (OpStack.Num()) Output.Add(OpStack.Pop());

	// --- 3) Emit Expression Tokens ---
	for (const FLexToken& T : Output)
	{
		FDataExpressionToken ETok;
		if (T.Kind == ELexType::Number)
		{
			ETok.Type = FDataExpressionToken::EType::PushConstant;
			ETok.ConstantValue = FCString::Atof(*T.Text);
		}
		else if (T.Kind == ELexType::InputRef)
		{
			ETok.Type = FDataExpressionToken::EType::PushField;
			ETok.FieldIndex = T.Index;
		}
		else if (T.Kind == ELexType::TraitFn)
		{
			if (T.Text.Equals(TEXT("HasTrait"), ESearchCase::IgnoreCase))
				ETok.Type = FDataExpressionToken::EType::PushHasTrait;
			else if (T.Text.Equals(TEXT("TraitCount"), ESearchCase::IgnoreCase))
				ETok.Type = FDataExpressionToken::EType::PushTraitCount;
			else if (T.Text.Equals(TEXT("HasAny"), ESearchCase::IgnoreCase))
				ETok.Type = FDataExpressionToken::EType::PushHasAny;
			else if (T.Text.Equals(TEXT("HasAll"), ESearchCase::IgnoreCase))
				ETok.Type = FDataExpressionToken::EType::PushHasAll;
			else
				ensureMsgf(false, TEXT("Unknown TraitFn: %s"), *T.Text);

			// Resolve each tag string to its index once
			ETok.TraitTag.Reset();
			for (const FString& TagName : T.StringArgs)
			{
				FGameplayTag Tag = FGameplayTag::RequestGameplayTag(*TagName, false);
				ensureMsgf(Tag.IsValid(), TEXT("Unknown trait tag: %s"), *TagName);
				ETok.TraitTag.AddTag(Tag);
			}
		}
		else if (T.Kind == ELexType::RelatedAgg)
		{
			ETok.Type = FDataExpressionToken::EType::PushRelatedAggregate;
			ETok.RelatedAliasIdx = T.Index;
			ETok.AggOp = T.AggOp;

			FCompiledCondition Cond;

			const FString& CondStr = T.Condition.TrimStartAndEnd();
			if (!CondStr.IsEmpty())
			{
				auto ParseOp = [](const TCHAR*& Ptr) -> TOptional<FCompiledCondition::ECondOp>
					{
						if (FCString::Strncmp(Ptr, TEXT(">="), 2) == 0) { Ptr += 2; return FCompiledCondition::ECondOp::GE; }
						if (FCString::Strncmp(Ptr, TEXT("<="), 2) == 0) { Ptr += 2; return FCompiledCondition::ECondOp::LE; }
						if (FCString::Strncmp(Ptr, TEXT("=="), 2) == 0) { Ptr += 2; return FCompiledCondition::ECondOp::EQ; }
						if (FCString::Strncmp(Ptr, TEXT("!="), 2) == 0) { Ptr += 2; return FCompiledCondition::ECondOp::NE; }
						if (*Ptr == '>') { Ptr++; return FCompiledCondition::ECondOp::GT; }
						if (*Ptr == '<') { Ptr++; return FCompiledCondition::ECondOp::LT; }
						return {};
					};

				const TCHAR* AggPtr = *CondStr;  // Use Ptr here, not ConPtr
				TOptional<FCompiledCondition::ECondOp> ParsedOp = ParseOp(AggPtr);

				ensureMsgf(ParsedOp.IsSet(), TEXT("Failed to parse condition operator in: %s"), *CondStr);

				while (FChar::IsWhitespace(*AggPtr)) AggPtr++;

				const float ParsedValue = FCString::Atof(AggPtr);
				Cond.Op = ParsedOp.GetValue();
				Cond.Value = ParsedValue;
			}

			ETok.AggCondition = Cond;
		}
		else if (T.Kind == ELexType::Op)
		{
			if (T.Text == "+")  ETok.Type = FDataExpressionToken::EType::Op_Add;
			else if (T.Text == "-")  ETok.Type = FDataExpressionToken::EType::Op_Sub;
			else if (T.Text == "*")  ETok.Type = FDataExpressionToken::EType::Op_Mul;
			else if (T.Text == "/")  ETok.Type = FDataExpressionToken::EType::Op_Div;
			else if (T.Text == ">")  ETok.Type = FDataExpressionToken::EType::Op_GT;
			else if (T.Text == "<")  ETok.Type = FDataExpressionToken::EType::Op_LT;
			else if (T.Text == ">=") ETok.Type = FDataExpressionToken::EType::Op_GE;
			else if (T.Text == "<=") ETok.Type = FDataExpressionToken::EType::Op_LE;
			else if (T.Text == "==") ETok.Type = FDataExpressionToken::EType::Op_EQ;
			else if (T.Text == "!=") ETok.Type = FDataExpressionToken::EType::Op_NE;
			else if (T.Text == "&&") ETok.Type = FDataExpressionToken::EType::Op_And;
			else if (T.Text == "||") ETok.Type = FDataExpressionToken::EType::Op_Or;
			else if (T.Text == "NEG") ETok.Type = FDataExpressionToken::EType::Op_Neg;
			else ensureMsgf(false, TEXT("Unknown operator: %s"), *T.Text);
		}
		OutTokens.Add(ETok);
	}
}

float UDataLensTableView::EvaluateRPNFloat(
	const TArray<FDataExpressionToken>& RPN,
	const TArray<int32>& AttrValues,
	const TArray<TArray<int32>>& RelValues,
	const FGameplayTagContainer& Tags)
{
	constexpr int32 InlineStackSize = 16;
	float InlineStack[InlineStackSize];
	TArray<float> DynamicStack;
	float* Stack = InlineStack;
	int32 SP = 0;

	const auto Push = [&](float V)
		{
			if (SP < InlineStackSize)
			{
				Stack[SP++] = V;
			}
			else
			{
				// Switch to dynamic stack if needed
				if (Stack == InlineStack)
				{
					DynamicStack.Append(InlineStack, InlineStackSize);
					Stack = DynamicStack.GetData();
				}
				DynamicStack.Add(V);
				++SP;
			}
		};

	const auto Pop = [&]() -> float
		{
			return --SP >= 0 ? Stack[SP] : 0.f;
		};

	for (const FDataExpressionToken& Tok : RPN)
	{
		switch (Tok.Type)
		{
		case FDataExpressionToken::EType::PushConstant:
			Push(Tok.ConstantValue);
			break;

		case FDataExpressionToken::EType::PushField:
			Push(AttrValues.IsValidIndex(Tok.FieldIndex) ? float(AttrValues[Tok.FieldIndex]) : 0.f);
			break;

		case FDataExpressionToken::EType::Op_Add: 
			Push(Pop() + Pop()); 
			break;
		case FDataExpressionToken::EType::Op_Sub: 
		{ 
			float B = Pop(); 
			Push(Pop() - B); 
		} break;
		case FDataExpressionToken::EType::Op_Mul: 
			Push(Pop() * Pop()); 
			break;
		case FDataExpressionToken::EType::Op_Div: 
		{ 
			float B = Pop(); 
			Push(B != 0.f ? Pop() / B : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_GT: 
		{ 
			float B = Pop(); 
			Push(Pop() > B ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_LT: 
		{ 
			float B = Pop(); 
			Push(Pop() < B ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_GE: 
		{ 
			float B = Pop(); 
			Push(Pop() >= B ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_LE: 
		{ 
			float B = Pop(); 
			Push(Pop() <= B ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_EQ: 
		{ 
			float B = Pop(); 
			Push(FMath::IsNearlyEqual(Pop(), B) ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_NE: 
		{ 
			float B = Pop(); 
			Push(!FMath::IsNearlyEqual(Pop(), B) ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_And: 
		{ 
			float B = Pop(); 
			Push((Pop() > 0.f && B > 0.f) ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::Op_Or: 
		{ 
			float B = Pop(); 
			Push((Pop() > 0.f || B > 0.f) ? 1.f : 0.f); 
		} break;
		case FDataExpressionToken::EType::PushRelatedAggregate:
			Push(static_cast<float>(EvaluateAggregate(Tok, RelValues)));
			break;
		case FDataExpressionToken::EType::PushHasTrait:
			Push(Tags.HasTagExact(Tok.TraitTag.First()) ? 1.f : 0.f);
			break;
		case FDataExpressionToken::EType::PushTraitCount:
		{
			int32 Count = 0;
			for (const FGameplayTag& Tag : Tags)
				if (Tag.MatchesTagExact(Tok.TraitTag.First()))
					++Count;
			Push(static_cast<float>(Count));
			break;
		}
		case FDataExpressionToken::EType::Op_Neg:
		{
			float A = Pop();
			Push(-A);
		}
		break;
		case FDataExpressionToken::EType::PushHasAny:
			Push(Tags.HasAny(Tok.TraitTag) ? 1.f : 0.f);
			break;
		case FDataExpressionToken::EType::PushHasAll:
			Push(Tags.HasAll(Tok.TraitTag) ? 1.f : 0.f);
			break;
		}
	}

	return SP > 0 ? Stack[--SP] : 0.f;
}

bool UDataLensTableView::EvaluateRPNBool(
	const TArray<FDataExpressionToken>& RPN,
	const TArray<int32>& AttrValues,
	const TArray<TArray<int32>>& RelValues,
	const FGameplayTagContainer& Tags)
{
	return EvaluateRPNFloat(RPN, AttrValues, RelValues, Tags) > 0.f;
}

int UDataLensTableView::EvaluateAggregate(
	const FDataExpressionToken& AggToken,
	const TArray<TArray<int32>>& RelValues)
{
	// RPN should contain exactly one token: PushRelatedAggregate
	// Example: Sum({0}), Min({1}), Avg({2}), CountIf({3}, > 42)

	if (AggToken.Type != FDataExpressionToken::EType::PushRelatedAggregate)
	{
		// Invalid input for aggregate evaluation
		return 0;
	}

	int RelatedIdx = AggToken.RelatedAliasIdx;
	EAggregateOp AggOp = AggToken.AggOp;
	FCompiledCondition Condition = AggToken.AggCondition;

	if (!RelValues.IsValidIndex(RelatedIdx))
	{
		return 0;
	}

	const TArray<int32>& Values = RelValues[RelatedIdx];

	if (Values.Num() == 0)
	{
		// No related records
		return 0;
	}

	switch (AggOp)
	{
	case EAggregateOp::Sum:
	{
		int Sum = 0;
		for (int32 V : Values) Sum += V;
		return Sum;
	}
	case EAggregateOp::SumIf:
	{
		int Sum = 0;
		for (int32 V : Values)
		{
			if (Condition.Evaluate(V))
			{
				Sum += V;
			}
		}
		return Sum;
	}
	case EAggregateOp::Min:
	{
		int MinVal = Values[0];
		for (int32 V : Values)
			if (V < MinVal) MinVal = V;
		return MinVal;
	}
	case EAggregateOp::Max:
	{
		int MaxVal = Values[0];
		for (int32 V : Values)
			if (V > MaxVal) MaxVal = V;
		return MaxVal;
	}
	case EAggregateOp::Avg:
	{
		int Sum = 0;
		for (int32 V : Values) Sum += V;
		return Sum / Values.Num(); // integer division
	}
	case EAggregateOp::Median:
	{
		int Min = Values[0];
		int Max = Values[0];
		for (int32 V : Values)
		{
			if (V > Max) Max = V;
			if (V < Min) Min = V;
		}
		int Range = Max - Min;
		int Mean = Min + (Range / 2);
		return Mean;
	}
	case EAggregateOp::First:
	{
		return Values[0];
	}
	case EAggregateOp::Last:
	{
		return Values[Values.Num() - 1];
	}
	case EAggregateOp::Count:
	{
		return Values.Num();
	}
	case EAggregateOp::CountIf:
	{
		int Count = 0;
		for (int32 V : Values)
		{
			if (Condition.Evaluate(V))
			{
				Count++;
			}
		}
		return Count;
	}
	default:
		return 0;
	}
}

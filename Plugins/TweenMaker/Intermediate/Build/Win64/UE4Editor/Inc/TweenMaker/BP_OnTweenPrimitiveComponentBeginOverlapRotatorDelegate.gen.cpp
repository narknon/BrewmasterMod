// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate() {}
// Cross Module References
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics
	{
		struct _Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms
		{
			UTweenRotator* Tween;
			UPrimitiveComponent* ThisComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FHitResult SweepResult;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tween;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_Tween = { "Tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms, Tween), Z_Construct_UClass_UTweenRotator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_ThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_ThisComponent = { "ThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms, ThisComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_ThisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_ThisComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_Tween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_ThisComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_OnTweenPrimitiveComponentBeginOverlapRotatorDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TweenMaker, nullptr, "BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature", nullptr, nullptr, sizeof(_Script_TweenMaker_eventBP_OnTweenPrimitiveComponentBeginOverlapRotator_Parms), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TweenMaker/Public/TweenRotator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTweenRotator() {}
// Cross Module References
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator_NoRegister();
	TWEENMAKER_API UClass* Z_Construct_UClass_UTweenRotator();
	TWEENMAKER_API UClass* Z_Construct_UClass_UBaseTween();
	UPackage* Z_Construct_UPackage__Script_TweenMaker();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenActorHitRotator__DelegateSignature();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenActorBeginOverlapRotator__DelegateSignature();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentHitRotator__DelegateSignature();
	TWEENMAKER_API UFunction* Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTweenRotator::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotator::execOnActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_pThisActor);
		P_GET_OBJECT(AActor,Z_Param_pOtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBeginOverlap(Z_Param_pThisActor,Z_Param_pOtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotator::execOnActorHit)
	{
		P_GET_OBJECT(AActor,Z_Param_pThisActor);
		P_GET_OBJECT(AActor,Z_Param_pOtherActor);
		P_GET_STRUCT(FVector,Z_Param_pNormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_pHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorHit(Z_Param_pThisActor,Z_Param_pOtherActor,Z_Param_pNormalImpulse,Z_Param_Out_pHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotator::execOnPrimitiveComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pThisComponent);
		P_GET_OBJECT(AActor,Z_Param_pOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pOtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_pOtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_pSweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrimitiveComponentBeginOverlap(Z_Param_pThisComponent,Z_Param_pOtherActor,Z_Param_pOtherComp,Z_Param_pOtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_pSweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTweenRotator::execOnPrimitiveComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pThisComponent);
		P_GET_OBJECT(AActor,Z_Param_pOtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_pOtherComp);
		P_GET_STRUCT(FVector,Z_Param_pNormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_pHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrimitiveComponentHit(Z_Param_pThisComponent,Z_Param_pOtherActor,Z_Param_pOtherComp,Z_Param_pNormalImpulse,Z_Param_Out_pHitResult);
		P_NATIVE_END;
	}
	void UTweenRotator::StaticRegisterNativesUTweenRotator()
	{
		UClass* Class = UTweenRotator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentValue", &UTweenRotator::execGetCurrentValue },
			{ "OnActorBeginOverlap", &UTweenRotator::execOnActorBeginOverlap },
			{ "OnActorHit", &UTweenRotator::execOnActorHit },
			{ "OnPrimitiveComponentBeginOverlap", &UTweenRotator::execOnPrimitiveComponentBeginOverlap },
			{ "OnPrimitiveComponentHit", &UTweenRotator::execOnPrimitiveComponentHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics
	{
		struct TweenRotator_eventGetCurrentValue_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventGetCurrentValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotator, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(TweenRotator_eventGetCurrentValue_Parms), Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotator_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotator_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics
	{
		struct TweenRotator_eventOnActorBeginOverlap_Parms
		{
			AActor* pThisActor;
			AActor* pOtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pThisActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::NewProp_pThisActor = { "pThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorBeginOverlap_Parms, pThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::NewProp_pOtherActor = { "pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorBeginOverlap_Parms, pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::NewProp_pThisActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::NewProp_pOtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotator, nullptr, "OnActorBeginOverlap", nullptr, nullptr, sizeof(TweenRotator_eventOnActorBeginOverlap_Parms), Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics
	{
		struct TweenRotator_eventOnActorHit_Parms
		{
			AActor* pThisActor;
			AActor* pOtherActor;
			FVector pNormalImpulse;
			FHitResult pHit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pThisActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pNormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pThisActor = { "pThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorHit_Parms, pThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pOtherActor = { "pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorHit_Parms, pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pNormalImpulse = { "pNormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorHit_Parms, pNormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pHit = { "pHit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnActorHit_Parms, pHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pThisActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pNormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::NewProp_pHit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotator, nullptr, "OnActorHit", nullptr, nullptr, sizeof(TweenRotator_eventOnActorHit_Parms), Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotator_OnActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotator_OnActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics
	{
		struct TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* pThisComponent;
			AActor* pOtherActor;
			UPrimitiveComponent* pOtherComp;
			int32 pOtherBodyIndex;
			bool bFromSweep;
			FHitResult pSweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pThisComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pThisComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pOtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pSweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pSweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pThisComponent = { "pThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms, pThisComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pThisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pThisComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherActor = { "pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms, pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherComp = { "pOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms, pOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherBodyIndex = { "pOtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms, pOtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms), &Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pSweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pSweepResult = { "pSweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms, pSweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pSweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pSweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pThisComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pOtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::NewProp_pSweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotator, nullptr, "OnPrimitiveComponentBeginOverlap", nullptr, nullptr, sizeof(TweenRotator_eventOnPrimitiveComponentBeginOverlap_Parms), Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics
	{
		struct TweenRotator_eventOnPrimitiveComponentHit_Parms
		{
			UPrimitiveComponent* pThisComponent;
			AActor* pOtherActor;
			UPrimitiveComponent* pOtherComp;
			FVector pNormalImpulse;
			FHitResult pHitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pThisComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pThisComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pOtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pNormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pThisComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pThisComponent = { "pThisComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentHit_Parms, pThisComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pThisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pThisComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherActor = { "pOtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentHit_Parms, pOtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherComp = { "pOtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentHit_Parms, pOtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pNormalImpulse = { "pNormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentHit_Parms, pNormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pHitResult = { "pHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TweenRotator_eventOnPrimitiveComponentHit_Parms, pHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pThisComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pOtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pNormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::NewProp_pHitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTweenRotator, nullptr, "OnPrimitiveComponentHit", nullptr, nullptr, sizeof(TweenRotator_eventOnPrimitiveComponentHit_Parms), Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTweenRotator_NoRegister()
	{
		return UTweenRotator::StaticClass();
	}
	struct Z_Construct_UClass_UTweenRotator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenActorHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenActorHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenActorBeginOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenActorBeginOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenPrimitiveComponentHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenPrimitiveComponentHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTweenPrimitiveComponentBeginOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTweenPrimitiveComponentBeginOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTweenRotator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseTween,
		(UObject* (*)())Z_Construct_UPackage__Script_TweenMaker,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTweenRotator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTweenRotator_GetCurrentValue, "GetCurrentValue" }, // 3123166325
		{ &Z_Construct_UFunction_UTweenRotator_OnActorBeginOverlap, "OnActorBeginOverlap" }, // 1046940127
		{ &Z_Construct_UFunction_UTweenRotator_OnActorHit, "OnActorHit" }, // 820115586
		{ &Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentBeginOverlap, "OnPrimitiveComponentBeginOverlap" }, // 3011363850
		{ &Z_Construct_UFunction_UTweenRotator_OnPrimitiveComponentHit, "OnPrimitiveComponentHit" }, // 1983244616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TweenRotator.h" },
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenStart = { "OnTweenStart", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenStart), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenUpdate = { "OnTweenUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenUpdate), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenEnd = { "OnTweenEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenEnd), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenRotatorChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorHit = { "OnTweenActorHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenActorHit), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenActorHitRotator__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorBeginOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorBeginOverlap = { "OnTweenActorBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenActorBeginOverlap), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenActorBeginOverlapRotator__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorBeginOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorBeginOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentHit = { "OnTweenPrimitiveComponentHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenPrimitiveComponentHit), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentHitRotator__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentBeginOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TweenRotator.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentBeginOverlap = { "OnTweenPrimitiveComponentBeginOverlap", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTweenRotator, OnTweenPrimitiveComponentBeginOverlap), Z_Construct_UDelegateFunction_TweenMaker_BP_OnTweenPrimitiveComponentBeginOverlapRotator__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentBeginOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentBeginOverlap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTweenRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenActorBeginOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTweenRotator_Statics::NewProp_OnTweenPrimitiveComponentBeginOverlap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTweenRotator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTweenRotator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTweenRotator_Statics::ClassParams = {
		&UTweenRotator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTweenRotator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTweenRotator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTweenRotator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTweenRotator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTweenRotator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTweenRotator, 2617599561);
	template<> TWEENMAKER_API UClass* StaticClass<UTweenRotator>()
	{
		return UTweenRotator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTweenRotator(Z_Construct_UClass_UTweenRotator, &UTweenRotator::StaticClass, TEXT("/Script/TweenMaker"), TEXT("UTweenRotator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTweenRotator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTankExercise/BattleTankExerciseGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleTankExerciseGameModeBase() {}
// Cross Module References
	BATTLETANKEXERCISE_API UClass* Z_Construct_UClass_ABattleTankExerciseGameModeBase_NoRegister();
	BATTLETANKEXERCISE_API UClass* Z_Construct_UClass_ABattleTankExerciseGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleTankExercise();
// End Cross Module References
	void ABattleTankExerciseGameModeBase::StaticRegisterNativesABattleTankExerciseGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleTankExerciseGameModeBase_NoRegister()
	{
		return ABattleTankExerciseGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTankExercise,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleTankExerciseGameModeBase.h" },
		{ "ModuleRelativePath", "BattleTankExerciseGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleTankExerciseGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::ClassParams = {
		&ABattleTankExerciseGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleTankExerciseGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleTankExerciseGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTankExerciseGameModeBase, 1789204625);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTankExerciseGameModeBase(Z_Construct_UClass_ABattleTankExerciseGameModeBase, &ABattleTankExerciseGameModeBase::StaticClass, TEXT("/Script/BattleTankExercise"), TEXT("ABattleTankExerciseGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTankExerciseGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

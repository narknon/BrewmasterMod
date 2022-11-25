#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataMaltExtractCanIngredients.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMArtDataMaltExtractCanIngredients : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	FName Name;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UMaterialInstance> IngredientMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UMaterialInstance> LabelSmallMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UMaterialInstance> LabelMediumMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UMaterialInstance> LabelLargeMaterial;
    
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
	TSoftObjectPtr<UMaterialInstance> LabelExtraLargeMaterial;

	FBMArtDataMaltExtractCanIngredients()
	{
	}
};

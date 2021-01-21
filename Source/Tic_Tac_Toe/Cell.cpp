// Fill out your copyright notice in the Description page of Project Settings.


#include "Cell.h"
#include "UObject/ConstructorHelpers.h"
//#include "PaperSpriteComponent.h"

// Sets default values
ACell::ACell()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Cell_SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Cell_Scene")); // создать компонент сцены
	Cell_MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cell_Mesh"));// создать компонент меша
	Cell_PaperSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Cell_Sprite"));
	RootComponent = Cell_SceneComponent;
	Cell_MeshComponent->SetupAttachment(RootComponent);//присоединить меш к якорной точке(или к компоненту сцены)*/
	Cell_PaperSpriteComponent->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>CubeAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>CubeMaterial(TEXT("Material'/Game/CellMaterial'"));
	
	Cell_MeshComponent->SetStaticMesh(CubeAsset.Object); // установить меш на клетке
	Cell_MeshComponent->SetCastShadow(false);
	Cell_MeshComponent->SetMaterial(0, CubeMaterial.Object);
	Cell_MeshComponent->OnClicked.AddDynamic(this, &ACell::OnClicked);
	
}

// Called when the game starts or when spawned
void ACell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACell::OnClicked(UPrimitiveComponent* Cell_PrimitiveComponent, FKey ButtonPressed) {

	Cell_PaperSpriteComponent->SetSprite(ConstructorHelpers::FObjectFinder<UPaperSprite>(TEXT("/Game/2D_Plus")).Object);
	Cell_PaperSpriteComponent->SetRelativeLocation(FVector(-51, 0, 0));
	Cell_PaperSpriteComponent->SetRelativeRotation(FRotator(45, 90, 0));
	Cell_PaperSpriteComponent->SetRelativeScale3D(FVector(0.3, 1, 0.3));

}

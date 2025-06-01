// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/FrontendPlayerController.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

void AFrontendPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	TArray<AActor*> FoundCameras;
	UGameplayStatics::GetAllActorsOfClassWithTag(this, ACameraActor::StaticClass(), FName("Default"), FoundCameras);

	if (!FoundCameras.IsEmpty())
	{
		SetViewTarget(FoundCameras[0]);
	}
	
}

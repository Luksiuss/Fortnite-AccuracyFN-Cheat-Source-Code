//AccuracyFN source leak aka neutron with out hes menu leaked by bunyip24#9999

#include "stdafx.h"




namespace addresses
{
	PVOID* uWorld = 0;
	PVOID GetPlayerName = 0;
	PVOID SetPawnVisibility = 0;
	PVOID ClientSetRotation = 0;
	PVOID K2_TeleportTo = 0;
	PVOID SetActorLocation = 0;
	PVOID ClientSetLocation = 0;
	PVOID IsInVehicle = 0;
	PVOID SetActorRelativeScale3D = 0;
	PVOID SetMouseLocation = 0;
	PVOID AddYawInput = 0;
	PVOID AddPitchInput = 0;
	PVOID GetVehicleActor = 0;
	PVOID GetVehicle = 0;
	PVOID K2_AttachToActor = 0;
	PVOID SetForcedLodModel = 0;
	PVOID LaunchCharacter = 0;
	PVOID GetActorEnableCollision = 0;
	PVOID SetActorEnableCollision = 0;
	PVOID ECollisionEnabled = 0;
	PVOID SetCollisionEnabled = 0;
	PVOID SetControlRotation = 0;
	PVOID SetFirstPersonCamera = 0;
	PVOID K2_SetActorRelativeLocation = 0;
	PVOID K2_SetActorLocationAndRotation = 0;
	PVOID K2_AddRelativeLocation = 0;
	PVOID K2_SetRelativeLocation = 0;
	PVOID CreativeToggleFly = 0;
	PVOID ServerCreativeToggleFly = 0;
	PVOID K2_AttachTo = 0;
	PVOID K2_SetWorldLocation = 0;
	PVOID LaunchPawn = 0;
	PVOID OnLaunchPawn = 0;
	PVOID TeleportVehicle = 0;
	PVOID TeleportPlayerPawn = 0;
	PVOID K2_SetActorRotation = 0;
	PVOID K2_SetActorRelativeRotation = 0;
	PVOID K2_SetWorldRotation = 0;
    PVOID ReloadTime = 0;


}

namespace offsets
{
	BOOLEAN Initialize()
	{
		uint64_t BaseAddress = (uint64_t)GetModuleHandleA(NULL);

		addresses::GetPlayerName = Util::FindObject(xorstr(L"/Script/Engine.PlayerState.GetPlayerName"));
		addresses::SetPawnVisibility = Util::FindObject(xorstr(L"/Script/FortniteGame.FortPawn.SetPawnVisibility"));
		addresses::ClientSetRotation = Util::FindObject(xorstr(L"/Script/Engine.Controller.ClientSetRotation"));
		addresses::K2_TeleportTo = Util::FindObject(xorstr(L"/Script/Engine.Actor.K2_TeleportTo"));
		addresses::ClientSetLocation = Util::FindObject(xorstr(L"/Script/Engine.Controller.ClientSetLocation"));
		addresses::SetActorRelativeScale3D = Util::FindObject(xorstr(L"/Script/Engine.Actor.SetActorRelativeScale3D"));
		addresses::IsInVehicle = Util::FindObject(xorstr(L"/Script/FortniteGame.FortPlayerPawn.IsInVehicle"));
		addresses::AddYawInput = Util::FindObject(xorstr(L"/Script/Engine.PlayerController.AddYawInput"));
		addresses::AddPitchInput = Util::FindObject(xorstr(L"/Script/Engine.PlayerController.AddPitchInput"));
		addresses::GetVehicleActor = Util::FindObject(xorstr(L"/Script/FortniteGame.FortPlayerPawn.GetVehicleActor"));
		addresses::GetVehicle = Util::FindObject(xorstr(L"/Script/FortniteGame.FortPlayerPawn.GetVehicle"));
		addresses::K2_AttachToActor = Util::FindObject(xorstr(L"/Script/Engine.Actor.K2_AttachToActor"));
		addresses::SetControlRotation = Util::FindObject(xorstr(L"/Script/Engine.Controller.SetControlRotation"));
		addresses::SetForcedLodModel = Util::FindObject(xorstr(L"/Script/Engine.StaticMeshComponent.SetForcedLodModel"));
		addresses::ClientSetRotation = Util::FindObject(xorstr(L"/Script/Engine.Controller.ClientSetRotation"));
	

		return TRUE;
	}
}
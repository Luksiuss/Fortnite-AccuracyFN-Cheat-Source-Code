//AccuracyFN source leak aka neutron with out hes menu leaked by bunyip24#9999

#pragma once

typedef struct neutronpasta{
	bool Aimbot;
	bool AutoAimbot;
	bool SilentAimbot;
	float AimbotFOV;
	int HitBoxPos = 0;
	bool AirStuck;
	int AirstuckKey;
	int FreezetargetKey;
	int slowmokey;
	bool jumptest;
	float AimbotSlow;
	float SniperAimbotSlow;
	bool InstantReload;
	bool invis;
	bool NoSpreadAimbot;
	bool HeadDotSize;
	bool realplayertags;
	float FOV;
	bool noclip;
	bool Crosshair;
	bool WaterMark;
	bool slowmo;
	bool fishingholeesp;
	bool botesp;
	int watermarkx;
    int watermarky;
	int triggerspeed;
	bool FastReload;
	bool VehicleBoost1;
	bool VehicleBoost2;
	bool RapidFire1;
	bool RapidFire2;
	bool CrosshairRed;
	bool CrosshairGreen;
	bool CrosshairBlue;
	bool CrosshairPurple;
	bool HenchMen;
	bool triggerbot;
	bool FastActions;
	bool Test;
	bool Rainbow;
	bool Silent;
	bool Prediction;
	bool FovChanger;
	int FovValue;
	bool TargetLine;

	int AimbotModePos;
	bool ColorAdjuster;

	int CrosshairThickness;
	int CrosshairScale;

	bool CustomSpeedHack;
	float CustomSpeedValue;
	int CustomSpeedKeybind;

	bool MemesTest;
	bool TestKek;
	bool Info;
	bool BulletTP;
	bool IsBulletTeleporting;

	bool VisibleCheck;
	bool FPS;
	bool Spinbot;
	int SpinKey;
	float SpinSpeed;

	bool VehicleTeleport;
	bool VehicleTeleporter;
	int AimKey;
	bool BigPlayers;

	bool InActionTeleport;

	int SpinbotPitchMode;
	int SpinbotYawMode;
	int SnaplineStartPoint;

	bool Chams;
	bool TeleportToEnemies;
	int EnemyTeleportKey;

	bool VehicleBoost;
	int gayy;
	struct {


		bool AimbotFOV;
		bool Boxes;
		bool Visuals;
		bool Skeletons;
		bool Skeletons2;
		bool PlayerLines;
		bool PlayerNames;
		bool PlayerWeapons;
		bool PlayerAmmo;
		bool LLamas;

		bool Memes;
		bool Radar;
		bool TestChams;

		float PlayerNameVisibleColor[4];
		float PlayerNameNotVisibleColor[4];
		float PlayerNameColor[4];
		float BoxVisibleColor[4];
		float BoxNotVisibleColor[4];
		float SnaplineVisibleColor[4];
		float SnaplineNotVisibleColor[4];
		float SkeletonVisibleColor[4];
		float SkeletonNotVisibleColor[4];
		float FovColor[4];
		float TargetLineColor[4];
		bool debug;
		bool debug2;
		bool Ammo;
		bool AmmoBox;
		bool Containers;
		bool Weapons;
		bool Vehicles;
		bool SupplyDrops;
	} ESP;
} SETTINGS;

extern SETTINGS Settings;

namespace SettingsHelper
{
	VOID LoadSavedConfig();
	VOID SaveConfig();
	VOID LoadDefaultConfig();
	VOID LoadTheme();
}
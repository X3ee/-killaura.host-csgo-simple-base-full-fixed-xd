#pragma once 

#include "IClientNetworkable.hpp"
#include "IClientRenderable.hpp"
#include "IClientUnknown.hpp"
#include "IClientThinkable.hpp"

struct SpatializationInfo_t;

class IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientThinkable
{
public:
	virtual void Release(void) = 0;
};

#pragma pack(push, 1)
class CCSWeaponInfo { //xSeeker
public:
	/*
	int8_t pad0[20];
	int32_t iMaxClip1;
	int8_t pad1[12];
	int32_t iMaxReservedAmmo;
	int8_t pad2[96];
	char* szHudName;
	char* szWeaponName;
	int WeaponType;                      // 0x00C8
	int8_t pad3[56];
	int32_t iWeaponType;
	int8_t pad4[4];
	int32_t iWeaponPrice;
	int32_t iKillAward;
	int8_t pad5[20];
	uint8_t bFullAuto;
	int8_t pad6[3];
	int32_t iDamage;
	float_t flArmorRatio;
	int32_t iBullets;
	float_t flPenetration;
	int8_t pad7[8];
	float_t flRange;
	float_t flRangeModifier;
	int8_t pad8[16];
	uint8_t bHasSilencer;
	int8_t pad9[15];
	float_t flSpread;
	float_t flSpreadAlt;
	int8_t pad10[76];
	int32_t iRecoilSeed;
	int8_t pad11[32];
	float flMaxPlayerSpeed;              // 0x0130
	float flMaxPlayerSpeedAlt;           // 0x0134
	*/

	char pad_0x0000[4];
	char* consoleName;
	char pad_0008[12];
	int iMaxClip1;
	int iMaxClip2;
	int iDefaultClip1;
	int iDefaultClip2;
	char pad_0024[8];
	char* szWorldModel;
	char* szViewModel;
	char* szDroppedModel;
	char pad_0038[4];
	char* N0000023E;
	char pad_0040[56];
	char* szEmptySound;
	char pad_007C[4];
	char* szBulletType;
	char pad_0084[4];
	char* szHudName;
	char* szWeaponName;
	char pad_0x0090[56];
	int iWeaponType;
	int iWeaponType2;
	int iWeaponPrice;
	int iKillAward;
	char pad_0x00D8[20];
	bool bFullAuto;
	char pad_0x00ED[3];
	int iDamage;
	float flArmorRatio;
	int iBullets;
	float flPenetration;
	char pad_0x0100[8];
	float flRange;
	float flRangeModifier;
	float flThrowVelocity;
	char pad_0x0110[28];
	float flMaxPlayerSpeed;
	float flMaxPlayerSpeedAlt;
	float flSpread;
	float flSpreadAlt;
	float flInaccuracyCrouch;
	float flInaccuracyCrouchAlt;
	float flInaccuracyStand;
	float flInaccuracyStandAlt;
	float flInaccuracyJumpInitial;
	float flInaccuracyJump;
	float flInaccuracyJumpAlt;
	float flInaccuracyLand;
	float flInaccuracyLandAlt;
	float flInaccuracyLadder;
	float flInaccuracyLadderAlt;
	float flInaccuracyFire;
	float flInaccuracyFireAlt;
	float flInaccuracyMove;
	float flInaccuracyMoveAlt;
	float flInaccuracyReload;
	int iRecoilSeed;
	float flRecoilAngle;
	float flRecoilAngleAlt;
	float flRecoilAngleVariance;
	float flRecoilAngleVarianceAlt;
	float flRecoilMagnitude;
	float flRecoilMagnitudeAlt;
	float flRecoilMagnitudeVariance;
	float flRecoilMagnitudeVarianceAlt;
	float flRecoveryTimeCrouch;
	float flRecoveryTimeStand;
	float flRecoveryTimeCrouchFinal;
	float flRecoveryTimeStandFinal;
	int iRecoveryTransitionStartBullet;
	int iRecoveryTransitionEndBullet;
	bool bUnzoomAfterShot;
	bool bHideViewModelZoomed;
	char pad_0x01B5[2];
	char iZoomLevels[3];
	int iZoomFOV[2];
	float fZoomTime[3];
	char* szWeaponClass;
	float flAddonScale;
	char pad_0x01DC[4];
	char* szEjectBrassEffect;
	char* szTracerEffect;
	int iTracerFrequency;
	int iTracerFrequencyAlt;
	char* szMuzzleFlashEffect_1stPerson;
	char pad_0x01F4[4];
	char* szMuzzleFlashEffect_3rdPerson;
	char pad_0x01FC[4];
	char* szMuzzleSmokeEffect;
	float flHeatPerShot;
	char* szZoomInSound;
	char* szZoomOutSound;
	float flInaccuracyPitchShift;
	float flInaccuracySoundThreshold;
	float flBotAudibleRange;
	BYTE pad_0x0218[8];
	char* pWrongTeamMsg;
	bool bHasBurstMode;
	BYTE pad_0x0225[3];
	bool bIsRevolver;
	bool bCannotShootUnderwater;

};

#pragma pack(pop)

class IWeaponSystem
{
	virtual void unused0() = 0;
	virtual void unused1() = 0;
public:
	virtual const CCSWeaponInfo* GetWpnData(unsigned ItemDefinitionIndex) = 0;
};
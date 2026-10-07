#ifndef PROTO_PROTO_MAIN_UNK_020B8D9C_H
#define PROTO_PROTO_MAIN_UNK_020B8D9C_H

// Prototypes of the functions defined in src/main/unk_020b8d9c.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "sys/ClockDateTime.h"
struct SkyObjGfxSlot;
struct SkyObjPalette;
struct SkySprite;
struct Unk_020bee28_Vec2;
#ifdef __cplusplus
#include "game/SkyProc.h"
#include "gfx/VecFx32.h"
#include "snd/RainSndChannel.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_SkySprites_Destruct
void *SkySprites_Destruct(void *p);
#endif
#ifndef PROTO_LOCAL_SkySprite_EndSnowFlake
void SkySprite_EndSnowFlake(void *a);
#endif
#ifndef PROTO_LOCAL_SkySprite_EndParticle
void SkySprite_EndParticle(void *a);
#endif
#ifndef PROTO_LOCAL_SkySprite_ResetMoonPalette
void SkySprite_ResetMoonPalette(void);
#endif
#ifndef PROTO_LOCAL_SkyShot_AddHit
void SkyShot_AddHit();
#endif
#ifndef PROTO_LOCAL_SkySprites_UpdateStub
void SkySprites_UpdateStub(void *);
#endif
#ifndef PROTO_LOCAL_RainSe_Release
void RainSe_Release(void *p);
#endif
#ifndef PROTO_LOCAL_Sky_BlendPalettes
void Sky_BlendPalettes();
#endif
#ifndef PROTO_LOCAL_SkyGradient_Build
void SkyGradient_Build();
#endif
#ifndef PROTO_LOCAL_Sky_UpdateLineTables
void Sky_UpdateLineTables();
#endif
#ifndef PROTO_LOCAL_Sky_VBlankSub
void Sky_VBlankSub();
#endif
#ifndef PROTO_LOCAL_Sky_VBlankMain
void Sky_VBlankMain();
#endif
#ifndef PROTO_LOCAL_Sky_ResetObjGfx
void Sky_ResetObjGfx(void);
#endif
#ifndef PROTO_LOCAL_Sky_Disable
void Sky_Disable(void);
#endif
#ifndef PROTO_LOCAL_Weather_RerollRainSlantAlt3
void Weather_RerollRainSlantAlt3(void);
#endif
#ifndef PROTO_LOCAL_Weather_RerollRainSlantAlt2
void Weather_RerollRainSlantAlt2(void);
#endif
#ifndef PROTO_LOCAL_Weather_RerollRainSlantAlt
void Weather_RerollRainSlantAlt(void);
#endif
#ifndef PROTO_LOCAL_Weather_RerollRainSlant
void Weather_RerollRainSlant(void);
#endif
#ifndef PROTO_LOCAL_Sky_SwapBuffers
void Sky_SwapBuffers(void);
#endif
#ifndef PROTO_LOCAL_Sky_EndBalloonDrop
void Sky_EndBalloonDrop(void);
#endif
#ifndef PROTO_LOCAL_Sky_WishOnShootingStar
void Sky_WishOnShootingStar(void);
#endif
#ifndef PROTO_LOCAL_Sky_RequestBirds
void Sky_RequestBirds(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SkyProc_Create
SkyProc *SkyProc_Create();
#endif
#ifndef PROTO_LOCAL_Sky_ProjectToScreenX
void Sky_ProjectToScreenX(s32 *out, VecFx32 *in);
#endif
#ifndef PROTO_LOCAL_SkySprite_InitSnowFlake
void SkySprite_InitSnowFlake(SkySprite *this_, s32 arg);
#endif
#ifndef PROTO_LOCAL_SkySprite_FollowShootingStar
BOOL SkySprite_FollowShootingStar(SkySprite *this_);
#endif
#ifndef PROTO_LOCAL_SkySprite_InitParticle
void SkySprite_InitParticle(SkySprite *this_, s32 arg);
#endif
#ifndef PROTO_LOCAL_SkySprite_CalcMoonPos
BOOL SkySprite_CalcMoonPos(void *out_);
#endif
#ifndef PROTO_LOCAL_SkySprite_InitBalloon
void SkySprite_InitBalloon(SkySprite *this_, u32 arg);
#endif
#ifndef PROTO_LOCAL_SkySprite_EndBalloon
u32 SkySprite_EndBalloon(void *a);
#endif
#ifndef PROTO_LOCAL_SkySprite_SpawnHitParticle
void SkySprite_SpawnHitParticle(VecFx32 *pos, s32 scale, s32 speed);
#endif
#ifndef PROTO_LOCAL_SkySprite_GetFireworkPalIndex
s32 SkySprite_GetFireworkPalIndex(s32 a, s32 flag);
#endif
#ifndef PROTO_LOCAL_SkySprite_ProjectFirework
Unk_020bee28_Vec2 SkySprite_ProjectFirework(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_SkySprite_BeginCrossing
void SkySprite_BeginCrossing(SkySprite* p, u8 a, s32 b);
#endif
#ifndef PROTO_LOCAL_SkySprite_AdvanceCrossing
BOOL SkySprite_AdvanceCrossing(SkySprite* p, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_SkySprite_ProjectWorldPos
void SkySprite_ProjectWorldPos(SkySprite* p, VecFx32* q, s32 a);
#endif
#ifndef PROTO_LOCAL_SkySprite_ProjectCrossing
void SkySprite_ProjectCrossing(SkySprite* p, s32 a);
#endif
#ifndef PROTO_LOCAL_SkySprite_CheckShotHit
BOOL SkySprite_CheckShotHit(SkySprite* p, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_SkySprite_MakeSoundPos
s32 SkySprite_MakeSoundPos(VecFx32* out, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_SkySprite_GetSoundPos
void SkySprite_GetSoundPos(SkySprite* p, VecFx32* out);
#endif
#ifndef PROTO_LOCAL_SkySprite_GetPos
void SkySprite_GetPos(SkySprite* p, VecFx32* out);
#endif
#ifndef PROTO_LOCAL_SkySprite_RequestSeSustained
void SkySprite_RequestSeSustained(SkySprite* p, s32 a);
#endif
#ifndef PROTO_LOCAL_SkySprite_RequestSe
void SkySprite_RequestSe(SkySprite* p, s32 a);
#endif
#ifndef PROTO_LOCAL_SkySprite_RequestSeSustainedOn
void SkySprite_RequestSeSustainedOn(SkySprite* p, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxLoader_Init
void SkyObjGfxLoader_Init(u8* p);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxLoader_LoadChars
BOOL SkyObjGfxLoader_LoadChars(u8* p, s32 idx);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxLoader_LoadPalettes
BOOL SkyObjGfxLoader_LoadPalettes(u8* p);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxLoader_FlushChars
void SkyObjGfxLoader_FlushChars(u8* p);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxSlot_Upload
void SkyObjGfxSlot_Upload(SkyObjGfxSlot* p, u8* base);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxSlot_Acquire
void SkyObjGfxSlot_Acquire(SkyObjGfxSlot* p, s32 v, void* x);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxSlot_SetGfx
void SkyObjGfxSlot_SetGfx(SkyObjGfxSlot* p, s32 v);
#endif
#ifndef PROTO_LOCAL_SkyObjGfxSlot_RefreshPalette
void SkyObjGfxSlot_RefreshPalette(SkyObjGfxSlot* p, s32 a);
#endif
#ifndef PROTO_LOCAL_SkyObjPalette_Load
void SkyObjPalette_Load(SkyObjPalette* p, u8* base, u32 idx);
#endif
#ifndef PROTO_LOCAL_SkyShot_HasMaxHits
BOOL SkyShot_HasMaxHits();
#endif
#ifndef PROTO_LOCAL_SkySprites_GetMoonPhaseGfx
s32 SkySprites_GetMoonPhaseGfx();
#endif
#ifndef PROTO_LOCAL_Sky_CalcLightColors
void Sky_CalcLightColors(s32 a, s32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Sky_CalcFogOffset
void Sky_CalcFogOffset(s32 a, s32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Sky_CalcLightParams
void Sky_CalcLightParams(s32 a, s32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_Sky_UpdateLighting
void Sky_UpdateLighting(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Sky_GetLightColor
s16 Sky_GetLightColor(s32 i);
#endif
#ifndef PROTO_LOCAL_Sky_GetLightParam
u8 Sky_GetLightParam(s32 i);
#endif
#ifndef PROTO_LOCAL_RainSe_Init
void RainSe_Init(RainSndChannel *p);
#endif
#ifndef PROTO_LOCAL_RainSe_Update
void RainSe_Update(RainSndChannel *p);
#endif
#ifndef PROTO_LOCAL_RainSe_InitVolume
void RainSe_InitVolume(RainSndChannel *p);
#endif
#ifndef PROTO_LOCAL_RainSe_FadeVolume
void RainSe_FadeVolume(RainSndChannel *o);
#endif
#ifndef PROTO_LOCAL_Sky_LoadPaletteFiles
BOOL Sky_LoadPaletteFiles();
#endif
#ifndef PROTO_LOCAL_Sky_AllocPaletteBufs
BOOL Sky_AllocPaletteBufs(u16 **p);
#endif
#ifndef PROTO_LOCAL_Color_Lerp
void Color_Lerp(u16 *d, u16 *s1, u16 *s2, s32 t);
#endif
#ifndef PROTO_LOCAL_Color_Lerp6
void Color_Lerp6(u16 *d, u16 *s1, u16 *s2, s32 t);
#endif
#ifndef PROTO_LOCAL_Sky_ApplyPalettes
s32 Sky_ApplyPalettes(s32 x);
#endif
#ifndef PROTO_LOCAL_Sky_LoadPalettes
s32 Sky_LoadPalettes(s32 x);
#endif
#ifndef PROTO_LOCAL_Sky_CalcStarScrollX
u16 Sky_CalcStarScrollX(u32 unused, void *unused2);
#endif
#ifndef PROTO_LOCAL_Sky_CalcStarScrollY
u32 Sky_CalcStarScrollY(u32 unused, u8 *d);
#endif
#ifndef PROTO_LOCAL_Sky_GetStarScrollYNow
u32 Sky_GetStarScrollYNow(u32 x);
#endif
#ifndef PROTO_LOCAL_Sky_LoadCloudBg
BOOL Sky_LoadCloudBg(u32 idx);
#endif
#ifndef PROTO_LOCAL_Sky_LoadNextCloudBg
BOOL Sky_LoadNextCloudBg(u32 idx);
#endif
#ifndef PROTO_LOCAL_Sky_LoadStarBg
BOOL Sky_LoadStarBg(u32 idx);
#endif
#ifndef PROTO_LOCAL_Sky_SetEngine
BOOL Sky_SetEngine(s32 arg);
#endif
#ifndef PROTO_LOCAL_Weather_GetFallingPrecip
s32 Weather_GetFallingPrecip(void);
#endif
#ifndef PROTO_LOCAL_Weather_GetCurrent
s32 Weather_GetCurrent(void);
#endif
#ifndef PROTO_LOCAL_Weather_GetLevels
void Weather_GetLevels(s32 *a, s32 *b);
#endif
#ifndef PROTO_LOCAL_Weather_GetPrecipKind
u32 Weather_GetPrecipKind(void);
#endif
#ifndef PROTO_LOCAL_Sky_GetCurrentPalette
u32 Sky_GetCurrentPalette(void);
#endif
#ifndef PROTO_LOCAL_Sky_GetStarScrollX
u32 Sky_GetStarScrollX(void);
#endif
#ifndef PROTO_LOCAL_Sky_GetStarScrollY
u32 Sky_GetStarScrollY(void);
#endif
#ifndef PROTO_LOCAL_Sky_GetStarViewingTime
void Sky_GetStarViewingTime(ClockDateTime *out, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Sky_OnDayChange
void Sky_OnDayChange(u32 x);
#endif
#ifndef PROTO_LOCAL_Sky_OnSlingshotFired
void Sky_OnSlingshotFired(u32 x);
#endif
#ifndef PROTO_LOCAL_Sky_PlayBalloonDropSe
void Sky_PlayBalloonDropSe(BOOL x);
#endif
#ifndef PROTO_LOCAL_Sky_IsShootingStarVisible
u32 Sky_IsShootingStarVisible(void);
#endif
}
namespace n01 {
extern "C" {
#ifndef PROTO_LOCAL_Sky_VBlankDisabled
void Sky_VBlankDisabled(void);
#endif
#ifndef PROTO_LOCAL_Sky_FrameOutdoor
void Sky_FrameOutdoor(void);
#endif
#ifndef PROTO_LOCAL_Sky_FrameIndoor
void Sky_FrameIndoor(void);
#endif
}
}
#endif

#endif

#ifndef PROTO_PROTO_MAIN_UNK_0205B7B0_H
#define PROTO_PROTO_MAIN_UNK_0205B7B0_H

// Prototypes of the functions defined in src/main/unk_0205b7b0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct CharaAnimCache;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_CharaAnimCache_Create
void CharaAnimCache_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaAnimCache_Destroy
void CharaAnimCache_Destroy();
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_Destruct
void AnimSlotRef_Destruct();
#endif
#ifndef PROTO_LOCAL_NetHeap_Destroy
void NetHeap_Destroy();
#endif
#ifndef PROTO_LOCAL_ModelCacheHeap_Destroy
void ModelCacheHeap_Destroy();
#endif
#ifndef PROTO_LOCAL_MenuHeap_Destroy
void MenuHeap_Destroy();
#endif
#ifndef PROTO_LOCAL_BgHeap_Destroy
void BgHeap_Destroy();
#endif
#ifndef PROTO_LOCAL_FurnitureHeap_Destroy
void FurnitureHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FieldStructureHeap_Destroy
void FieldStructureHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_SpecialInsectHeap_Destroy
void SpecialInsectHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_HeldInsectHeap_Destroy
void HeldInsectHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FieldInsectHeap_Destroy
void FieldInsectHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_MuseumInsectHeap_Destroy
void MuseumInsectHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FishShadowHeap_Destroy
void FishShadowHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FishFinHeap_Destroy
void FishFinHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FishDisplayHeap_Destroy
void FishDisplayHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_MuseumAquariumHeap_Destroy
void MuseumAquariumHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_CharaAnimHeap_Create
void CharaAnimHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaAnimHeap_Destroy
void CharaAnimHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_CharaClothTexHeap_Create
void CharaClothTexHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaClothTexHeap_Destroy
void CharaClothTexHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerFaceTexHeap_Create
void PlayerFaceTexHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerFaceTexHeap_Destroy
void PlayerFaceTexHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimHeap_Create
void CharaFaceAnimHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimHeap_Destroy
void CharaFaceAnimHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerBodyModelHeap_Create
void PlayerBodyModelHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerBodyModelHeap_Destroy
void PlayerBodyModelHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerHeadModelHeap_Create
void PlayerHeadModelHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerHeadModelHeap_Destroy
void PlayerHeadModelHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerPaletteHeap_Create
void PlayerPaletteHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerPaletteHeap_Destroy
void PlayerPaletteHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerGlassesModelHeap_Create
void PlayerGlassesModelHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerGlassesModelHeap_Destroy
void PlayerGlassesModelHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_HeldItemModelHeap_Create
void HeldItemModelHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_HeldItemModelHeap_Destroy
void HeldItemModelHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimWorkHeap_Create
void CharaFaceAnimWorkHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaFaceAnimWorkHeap_Destroy
void CharaFaceAnimWorkHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerBodyAnimHeap_Create
void PlayerBodyAnimHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerBodyAnimHeap_Destroy
void PlayerBodyAnimHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_HeldItemAnimHeap_Create
void HeldItemAnimHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_HeldItemAnimHeap_Destroy
void HeldItemAnimHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_FishBobberHeap_Create
void FishBobberHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_FishBobberHeap_Destroy
void FishBobberHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_NpcTexPatBufHeap_Create
void NpcTexPatBufHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_NpcTexPatBufHeap_Destroy
void NpcTexPatBufHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_VillagerAnimPoolHeap_Create
void VillagerAnimPoolHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_VillagerAnimPoolHeap_Destroy
void VillagerAnimPoolHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_SpNpcAnimPoolHeap_Create
void SpNpcAnimPoolHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_SpNpcAnimPoolHeap_Destroy
void SpNpcAnimPoolHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_NpcModelHeap_Create
void *NpcModelHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_NpcModelHeap_Destroy
void NpcModelHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerActorHeap_Create
void PlayerActorHeap_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerActorHeap_Destroy
void PlayerActorHeap_Destroy(void);
#endif
#ifndef PROTO_LOCAL_TownBclHeap_Destroy
void TownBclHeap_Destroy();
#endif
#ifndef PROTO_LOCAL_RoomBclHeap_Destroy
void RoomBclHeap_Destroy();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CharaAnim_GetPath
char *CharaAnim_GetPath(u32 x);
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetBodySlotSize
u32 CharaAnim_GetBodySlotSize();
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetPartSlotSize
u32 CharaAnim_GetPartSlotSize();
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetExtraSlotSize
u32 CharaAnim_GetExtraSlotSize();
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetEyeAnim
u32 CharaAnim_GetEyeAnim(u32 i);
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetMouthAnim
u32 CharaAnim_GetMouthAnim(u32 i);
#endif
#ifndef PROTO_LOCAL_JointGroup_GetRangeCount
u32 JointGroup_GetRangeCount(u32 i);
#endif
#ifndef PROTO_LOCAL_JointGroup_GetRangeFirst
u32 JointGroup_GetRangeFirst(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_JointGroup_GetRangeLast
u32 JointGroup_GetRangeLast(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetJointGroup
u32 CharaAnim_GetJointGroup(u32 i);
#endif
#ifndef PROTO_LOCAL_CharaAnim_GetHoldPoseMode
u32 CharaAnim_GetHoldPoseMode(u32 i);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_Init
void AnimSlotRef_Init(u8 *p);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_Assign
void AnimSlotRef_Assign(u8 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_SetSlot
void AnimSlotRef_SetSlot(u8 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_Load
void AnimSlotRef_Load(u8 *p, s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_CopyFromSlot
void AnimSlotRef_CopyFromSlot(u8 *p, s32 v);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_GetData
u32 AnimSlotRef_GetData(u8 *p);
#endif
#ifndef PROTO_LOCAL_AnimSlotRef_GetAnimId
u32 AnimSlotRef_GetAnimId(u8 *p);
#endif
#ifndef PROTO_LOCAL_NetHeap_Create
void NetHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_ModelCacheHeap_Create
void ModelCacheHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_MenuHeap_Create
void MenuHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_BgHeap_Create
void BgHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FurnitureHeap_Create
void FurnitureHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FieldStructureHeap_Create
void FieldStructureHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_SpecialInsectHeap_Create
void SpecialInsectHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_HeldInsectHeap_Create
void HeldInsectHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FieldInsectHeap_Create
void FieldInsectHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_MuseumInsectHeap_Create
void MuseumInsectHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FishShadowHeap_Create
void FishShadowHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FishFinHeap_Create
void FishFinHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_FishDisplayHeap_Create
void FishDisplayHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_MuseumAquariumHeap_Create
void MuseumAquariumHeap_Create(u32 size, void *parent);
#endif
#ifndef PROTO_LOCAL_TownBclHeap_Create
void TownBclHeap_Create(s32 x);
#endif
#ifndef PROTO_LOCAL_RoomBclHeap_Create
void RoomBclHeap_Create(s32 x);
#endif
}
#ifndef PROTO_LOCAL_gVillagerAnimPoolHeap
extern void *gVillagerAnimPoolHeap;
#endif
#ifndef PROTO_LOCAL_gSpNpcAnimPoolHeap
extern void *gSpNpcAnimPoolHeap;
#endif
#ifndef PROTO_LOCAL_gRoomBclHeap
extern void *gRoomBclHeap;
#endif
#ifndef PROTO_LOCAL_gNetHeap
extern void *gNetHeap;
#endif
#ifndef PROTO_LOCAL_gModelCacheHeap
extern void *gModelCacheHeap;
#endif
#ifndef PROTO_LOCAL_gMenuHeap
extern void *gMenuHeap;
#endif
#ifndef PROTO_LOCAL_gBgHeap
extern void *gBgHeap;
#endif
#ifndef PROTO_LOCAL_gFieldStructureHeap
extern void *gFieldStructureHeap;
#endif
#ifndef PROTO_LOCAL_sSpecialInsectHeap
extern void *sSpecialInsectHeap;
#endif
#ifndef PROTO_LOCAL_sHeldInsectHeap
extern void *sHeldInsectHeap;
#endif
#ifndef PROTO_LOCAL_sFieldInsectHeap
extern void *sFieldInsectHeap;
#endif
#ifndef PROTO_LOCAL_sMuseumInsectHeap
extern void *sMuseumInsectHeap;
#endif
#ifndef PROTO_LOCAL_sFishFinHeap
extern void *sFishFinHeap;
#endif
#ifndef PROTO_LOCAL_sFishDisplayHeap
extern void *sFishDisplayHeap;
#endif
#ifndef PROTO_LOCAL_sMuseumAquariumHeap
extern void *sMuseumAquariumHeap;
#endif
#ifndef PROTO_LOCAL_sCharaAnimHeap
extern void *sCharaAnimHeap;
#endif
#ifndef PROTO_LOCAL_sCharaAnimPathBuf
extern char sCharaAnimPathBuf[0x14];
#endif
#ifndef PROTO_LOCAL_gPlayerFaceTexHeap
extern void *gPlayerFaceTexHeap;
#endif
#ifndef PROTO_LOCAL_sJointGroupRanges
extern u8 *sJointGroupRanges[4];
#endif
#ifndef PROTO_LOCAL_gPlayerBodyModelHeap
extern void *gPlayerBodyModelHeap;
#endif
#ifndef PROTO_LOCAL_gPlayerHeadModelHeap
extern void *gPlayerHeadModelHeap;
#endif
#ifndef PROTO_LOCAL_gPlayerPaletteHeap
extern void *gPlayerPaletteHeap;
#endif
#ifndef PROTO_LOCAL_gPlayerGlassesModelHeap
extern void *gPlayerGlassesModelHeap;
#endif
#ifndef PROTO_LOCAL_gHeldItemModelHeap
extern void *gHeldItemModelHeap;
#endif
#ifndef PROTO_LOCAL_sFurnitureHeap
extern void *sFurnitureHeap;
#endif
#ifndef PROTO_LOCAL_gPlayerBodyAnimHeap
extern void *gPlayerBodyAnimHeap;
#endif
#ifndef PROTO_LOCAL_gHeldItemAnimHeap
extern void *gHeldItemAnimHeap;
#endif
#ifndef PROTO_LOCAL_sFishShadowHeap
extern void *sFishShadowHeap;
#endif
#ifndef PROTO_LOCAL_gNpcTexPatBufHeap
extern void *gNpcTexPatBufHeap;
#endif
#ifndef PROTO_LOCAL_gCharaFaceAnimHeap
extern void *gCharaFaceAnimHeap;
#endif
#ifndef PROTO_LOCAL_gNpcModelHeap
extern void *gNpcModelHeap;
#endif
#ifndef PROTO_LOCAL_gPlayerActorHeap
extern void *gPlayerActorHeap;
#endif
#ifndef PROTO_LOCAL_gCharaFaceAnimWorkHeap
extern void *gCharaFaceAnimWorkHeap;
#endif
#ifndef PROTO_LOCAL_sCharaAnimCache
extern CharaAnimCache sCharaAnimCache;
#endif
#ifndef PROTO_LOCAL_gCharaClothTexHeap
extern void *gCharaClothTexHeap;
#endif
#ifndef PROTO_LOCAL_sCharaAnimJointGroups
extern u16 sCharaAnimJointGroups[0x144];
#endif
#ifndef PROTO_LOCAL_gFishBobberHeap
extern void *gFishBobberHeap;
#endif
#ifndef PROTO_LOCAL_gTownBclHeap
extern void *gTownBclHeap;
#endif
#ifndef PROTO_LOCAL_sJointGroupRangeCounts
extern u8 sJointGroupRangeCounts[4];
#endif
#endif

#endif

#ifndef PROTO_PROTO_OV003_UNK_OV003_022192B4_H
#define PROTO_PROTO_OV003_UNK_OV003_022192B4_H

// Prototypes of the functions defined in src/ov003/unk_ov003_022192b4.cpp (generated: tools/host_protos.py)

#include "types.h"
struct TreeAnim;
#ifdef __cplusplus
#include "gfx/EffectSplEmitter.h"
#include "gfx/VecFx32.h"
#include "types.h"
#include "uptr.h"
class FieldObjectManager;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FieldObjectManager_Create
void *FieldObjectManager_Create();
#endif
#ifndef PROTO_LOCAL_FieldObj_GetGroundTexSet
void *FieldObj_GetGroundTexSet();
#endif
#ifndef PROTO_LOCAL_FieldItemFx_SplashPosCallback
void FieldItemFx_SplashPosCallback(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FieldObj_GetShapeRecord
u8 *FieldObj_GetShapeRecord(u8 *p);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadTextureFiles
BOOL FieldObj_LoadTextureFiles(void *self, u32 *a, u32 *b, uptr *names, s32 n);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadPaletteFiles
BOOL FieldObj_LoadPaletteFiles(void *self, u32 *a, u32 *b, uptr *names, s32 n);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadIconModels
BOOL FieldObj_LoadIconModels(FieldObjectManager *self);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadStoneModels
BOOL FieldObj_LoadStoneModels(FieldObjectManager *self);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadStones
BOOL FieldObj_LoadStones();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadStumpModels
BOOL FieldObj_LoadStumpModels(FieldObjectManager *self);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadStumps
BOOL FieldObj_LoadStumps();
#endif
#ifndef PROTO_LOCAL_FieldObj_GetSeasonSet
s32 FieldObj_GetSeasonSet(void *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetTreeModelPath
void *FieldObj_GetTreeModelPath(void *self, s32 a, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetTreeAnimModelPath
void *FieldObj_GetTreeAnimModelPath(void *self, s32 a, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetCedarModelPath
void *FieldObj_GetCedarModelPath(FieldObjectManager *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetCedarAnimModelPath
void *FieldObj_GetCedarAnimModelPath(FieldObjectManager *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetPalmModelPath
void *FieldObj_GetPalmModelPath(FieldObjectManager *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetPalmAnimModelPath
void *FieldObj_GetPalmAnimModelPath(void *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_GetTreeTexturePaths
u32 FieldObj_GetTreeTexturePaths(void *self, s32 i);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadTreeTextures
BOOL FieldObj_LoadTreeTextures(void *self, u32 *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadCedarTextures
BOOL FieldObj_LoadCedarTextures(void *a, u32 *b, u32 *c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadLitCedarTexture
BOOL FieldObj_LoadLitCedarTexture(void *a, u32 *b, u32 *c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadPalmTextures
BOOL FieldObj_LoadPalmTextures(void *a, u32 *b, u32 *c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadTreePalettes
BOOL FieldObj_LoadTreePalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadCedarPalettes
BOOL FieldObj_LoadCedarPalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadLitCedarPalette
BOOL FieldObj_LoadLitCedarPalette(void *a, u32 *b, u32 *c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadTreeSaplingModels
BOOL FieldObj_LoadTreeSaplingModels(FieldObjectManager *self, u32 *a, u32 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadCedarSaplingModel
BOOL FieldObj_LoadCedarSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadPalmSaplingModel
BOOL FieldObj_LoadPalmSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c);
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadTrees
BOOL FieldObj_LoadTrees();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadFlowers
BOOL FieldObj_LoadFlowers();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadGrass
BOOL FieldObj_LoadGrass();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadHoles
BOOL FieldObj_LoadHoles();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadCracks
BOOL FieldObj_LoadCracks();
#endif
#ifndef PROTO_LOCAL_FieldObj_LoadDesigns
BOOL FieldObj_LoadDesigns();
#endif
#ifndef PROTO_LOCAL__ZN18FieldObjectManager6onDrawEv
s32 _ZN18FieldObjectManager6onDrawEv(u8 *self);
#endif
#ifndef PROTO_LOCAL_Field_SetUnitItem
void Field_SetUnitItem(s32 x, s32 y, u32 tile, s32 flag);
#endif
#ifndef PROTO_LOCAL_TreeLeafFx_OnEffectInit
void TreeLeafFx_OnEffectInit(EffectEmitterEntry *self);
#endif
#ifndef PROTO_LOCAL_TreeLeafFx_OnEffectStep
s32 TreeLeafFx_OnEffectStep(EffectEmitterEntry *self);
#endif
#ifndef PROTO_LOCAL_TreeLeafFx_OnEffectUpdate
s32 TreeLeafFx_OnEffectUpdate(EffectEmitterEntry *self);
#endif
#ifndef PROTO_LOCAL_TreeAnimSet_Request
void TreeAnimSet_Request(u8 *a, s32 id, s32 *pos, s32 c, s32 d);
#endif
#ifndef PROTO_LOCAL_Tree_KeepShaking
void Tree_KeepShaking(s32 id, s32 *pos);
#endif
#ifndef PROTO_LOCAL_TreeAnim_Begin
void TreeAnim_Begin(TreeAnim *o, s32 flag);
#endif
#ifndef PROTO_LOCAL_Tree_GetDropSide
s32 Tree_GetDropSide(TreeAnim *o, VecFx32 *p);
#endif
#ifndef PROTO_LOCAL_Tree_DropFruit
void Tree_DropFruit(u16 *cell, s32 id, s32 *pos);
#endif
#ifndef PROTO_LOCAL_Tree_DropBeeHive
void Tree_DropBeeHive(TreeAnim *o, s32 *p);
#endif
#ifndef PROTO_LOCAL_TreeAnimSet_LoadAnims
void TreeAnimSet_LoadAnims(u32 (*arr)[4]);
#endif
#ifndef PROTO_LOCAL_TreeAnimSet_FreeAnims
void TreeAnimSet_FreeAnims(u32 (*arr)[4]);
#endif
#ifndef PROTO_LOCAL_TreeAnimSet_GetAnimPath
s32 TreeAnimSet_GetAnimPath(void *self, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartDigHole
s32 FieldItemFx_StartDigHole(s32 type, s32 v, s32 w);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartPitfallHole
s32 FieldItemFx_StartPitfallHole(s32 type, s32 v);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartFillHole
s32 FieldItemFx_StartFillHole(s32 type, s32 v);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartFillHoleWithItem
s32 FieldItemFx_StartFillHoleWithItem(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartDigUpTree
s32 FieldItemFx_StartDigUpTree(s32 a, s32 b, s32 c);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartHoleShrink
s32 FieldItemFx_StartHoleShrink(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartBalloonDrop
s32 FieldItemFx_StartBalloonDrop(s32 a, s32 n);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_FindLandingUnit
s32 FieldItemFx_FindLandingUnit(s32 *p);
#endif
#ifndef PROTO_LOCAL_FieldItemFx_StartPitfallClose
s32 FieldItemFx_StartPitfallClose(s32 a, s32 b);
#endif
}
#endif

#endif

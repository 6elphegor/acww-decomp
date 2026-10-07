#ifndef PROTO_PROTO_MAIN_UNK_0208F268_H
#define PROTO_PROTO_MAIN_UNK_0208F268_H

// Prototypes of the functions defined in src/main/unk_0208f268.cpp (generated: tools/host_protos.py)

#include "types.h"
struct EffectSplPool;
#ifdef __cplusplus
#include "gfx/EffectSplEmitter.h"
#include "types.h"
class EffectModel;
class EffectModelGroup;
class EffectSplProc;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_EffectSplProc_Create
EffectSplProc *EffectSplProc_Create();
#endif
#ifndef PROTO_LOCAL_EffectSpl_Alloc
void *EffectSpl_Alloc(u32 size);
#endif
#ifndef PROTO_LOCAL_EffectSpl_LoadArchive
s32 EffectSpl_LoadArchive(void *unused);
#endif
#ifndef PROTO_LOCAL_EffectSpl_LoadTextures
BOOL EffectSpl_LoadTextures(EffectSplProc *p);
#endif
#ifndef PROTO_LOCAL_EffectSpl_ToCurvedPos
u16 EffectSpl_ToCurvedPos(void *a0, volatile s32 a1, volatile s32 a2, volatile s32 a3);
#endif
#ifndef PROTO_LOCAL_EffectSpl_GetSeasonTintVariant
s16 EffectSpl_GetSeasonTintVariant(EffectSplEmitter *o);
#endif
#ifndef PROTO_LOCAL_EffectSpl_GetSeasonTint
s16 EffectSpl_GetSeasonTint();
#endif
#ifndef PROTO_LOCAL_EffectSpl_ApplySceneTint
void EffectSpl_ApplySceneTint(EffectSplEmitter *o);
#endif
#ifndef PROTO_LOCAL_EffectSpl_InitEmitterAtPos
void EffectSpl_InitEmitterAtPos(EffectSplEmitter *o);
#endif
#ifndef PROTO_LOCAL_EffectCb_InitAtPos
void EffectCb_InitAtPos(EffectEmitterEntry *e);
#endif
#ifndef PROTO_LOCAL_EffectCb_UpdateTint
s32 EffectCb_UpdateTint(EffectEmitterEntry *e);
#endif
#ifndef PROTO_LOCAL_EffectSpl_CreateOneShot
s32 EffectSpl_CreateOneShot(s32 idx, s32 p1, s16 *p2, u32 *p3);
#endif
#ifndef PROTO_LOCAL_EffectSpl_CreateTracked
s32 EffectSpl_CreateTracked(s32 idx, s32 p1, s16 *p2, EffectEmitterCbs *p3);
#endif
#ifndef PROTO_LOCAL_EffectModel_Start
void EffectModel_Start(s32 a, void (*b)(EffectModel *));
#endif
#ifndef PROTO_LOCAL_EffectSplEntry_Start
s32 EffectSplEntry_Start(EffectEmitterEntry *e, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, EffectEmitterTag tag);
#endif
#ifndef PROTO_LOCAL_EffectSplEntry_Release
void EffectSplEntry_Release(EffectEmitterEntry *e);
#endif
#ifndef PROTO_LOCAL_EffectSplPool_FindInactive
EffectEmitterEntry *EffectSplPool_FindInactive(EffectSplPool *p, s32 id);
#endif
#ifndef PROTO_LOCAL_EffectSplPool_Alloc
EffectEmitterEntry *EffectSplPool_Alloc(EffectSplPool *p, s32 id, s32 a2, s32 a3, EffectEmitterCbs *cb, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_EffectModels_LoadAll
void EffectModels_LoadAll(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModels_UpdateAll
void EffectModels_UpdateAll(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModels_DrawAll
void EffectModels_DrawAll(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModels_UnloadAll
void EffectModels_UnloadAll(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModels_Start
void EffectModels_Start(EffectModelGroup *b, s32 idx, void (*a)(EffectModel *));
#endif
#ifndef PROTO_LOCAL_EffectModelGroup_Load
void EffectModelGroup_Load(EffectModelGroup *b, s32 a);
#endif
#ifndef PROTO_LOCAL_EffectModelGroup_Update
void EffectModelGroup_Update(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModelGroup_Draw
void EffectModelGroup_Draw(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModelGroup_Unload
void EffectModelGroup_Unload(EffectModelGroup *b);
#endif
#ifndef PROTO_LOCAL_EffectModelGroup_Start
void EffectModelGroup_Start(EffectModelGroup *b, void (*a)(EffectModel *));
#endif
}
#endif

#endif

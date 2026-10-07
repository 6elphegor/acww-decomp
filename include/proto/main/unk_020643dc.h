#ifndef PROTO_PROTO_MAIN_UNK_020643DC_H
#define PROTO_PROTO_MAIN_UNK_020643DC_H

// Prototypes of the functions defined in src/main/unk_020643dc.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "sys/ListNode.h"
struct IdListNode;
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "sys/PrioListNode.h"
#include "types.h"
class SceneLights;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Light_GetViewRotation
void Light_GetViewRotation(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_SceneLight_InitStub
void SceneLight_InitStub(void *);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PrioList_Insert
BOOL PrioList_Insert(List *list, PrioListNode *node);
#endif
#ifndef PROTO_LOCAL_PrioList_PushBack
BOOL PrioList_PushBack(List *list, ListNode *node);
#endif
#ifndef PROTO_LOCAL_PrioList_FindById
IdListNode *PrioList_FindById(List *list, s32 key);
#endif
#ifndef PROTO_LOCAL_SceneLights_Create
SceneLights *SceneLights_Create(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetMatLightMask
s32 SceneLights_GetMatLightMask(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetMatLightMask2
s32 SceneLights_GetMatLightMask2(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetFlashColor
s16 SceneLights_GetFlashColor(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetBaseColor
s16 SceneLights_GetBaseColor(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetRoomColor
s16 SceneLights_GetRoomColor(void);
#endif
#ifndef PROTO_LOCAL_SceneLights_GetLightParam
u8 SceneLights_GetLightParam(u32 x);
#endif
#ifndef PROTO_LOCAL_SceneLights_StartFlash
void SceneLights_StartFlash(u32 v);
#endif
#ifndef PROTO_LOCAL_Light_ClampDir
void Light_ClampDir(VecFx32 *in, VecFx32 *out);
#endif
#ifndef PROTO_LOCAL_LightSwitch_SetOn
void LightSwitch_SetOn(s32 i, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_LightSwitch_SetOff
void LightSwitch_SetOff(s32 i, u32 v);
#endif
}
#endif

#endif

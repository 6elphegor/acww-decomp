#ifndef PROTO_PROTO_MAIN_UNK_020571F4_H
#define PROTO_PROTO_MAIN_UNK_020571F4_H

// Prototypes of the functions defined in src/main/unk_020571f4.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "actor/Actor.h"
#include "gfx/VecFx32.h"
#include "sys/ProcBase.h"
#include "types.h"
class HandOverItem;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_HandOverItem_GetFishScale
u32 HandOverItem_GetFishScale(u32 i);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetFishHoldOffsetSet
u32 HandOverItem_GetFishHoldOffsetSet(ProcBase *o);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetFishHoldOffset
VecFx32 *HandOverItem_GetFishHoldOffset(ProcBase *o, u32 idx);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetFishHoldOffset2
VecFx32 *HandOverItem_GetFishHoldOffset2(ProcBase *o, u32 idx);
#endif
#ifndef PROTO_LOCAL_HandOverItem_Create
HandOverItem *HandOverItem_Create();
#endif
#ifndef PROTO_LOCAL_HandOverItem_DrawItem
void HandOverItem_DrawItem(HandOverItem *self, u16 *id, VecFx32 *p, VecFx32 *q, s16 *ang);
#endif
#ifndef PROTO_LOCAL_HandOverItem_DrawIcon
void HandOverItem_DrawIcon(void *unused, u32 id, VecFx32 *p, VecFx32 *q, s16 *ang);
#endif
#ifndef PROTO_LOCAL_HandOverItem_Begin
s32 HandOverItem_Begin(s32 a, s32 b, u8 c, s32 d, s32 e, s32 f);
#endif
#ifndef PROTO_LOCAL_HandOverItem_IsMaster
s32 HandOverItem_IsMaster(s32 a);
#endif
#ifndef PROTO_LOCAL_HandOverItem_RequestMode
s32 HandOverItem_RequestMode(u8 a, s32 b);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetNextMode
u8 HandOverItem_GetNextMode(void);
#endif
#ifndef PROTO_LOCAL_HandOverItem_End
void HandOverItem_End(s32 a);
#endif
#ifndef PROTO_LOCAL_HandOverItem_CanTake
BOOL HandOverItem_CanTake(Actor *p);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetPos
BOOL HandOverItem_GetPos(VecFx32 *out);
#endif
#ifndef PROTO_LOCAL_HandOverItem_SwitchMaster
s32 HandOverItem_SwitchMaster(s32 a);
#endif
#ifndef PROTO_LOCAL_HandOverItem_IsModeActive
BOOL HandOverItem_IsModeActive(u32 a);
#endif
#ifndef PROTO_LOCAL_HandOverItem_IsActive
BOOL HandOverItem_IsActive(void);
#endif
#ifndef PROTO_LOCAL_HandOverItem_GetItem
void HandOverItem_GetItem(u16 *out);
#endif
#ifndef PROTO_LOCAL_HandOverItem_SetNextMode
s32 HandOverItem_SetNextMode(u8 a, s32 b);
#endif
}
#endif

#endif

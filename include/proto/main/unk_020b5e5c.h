#ifndef PROTO_PROTO_MAIN_UNK_020B5E5C_H
#define PROTO_PROTO_MAIN_UNK_020B5E5C_H

// Prototypes of the functions defined in src/main/unk_020b5e5c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TouchPickResult_GetTarget
BOOL TouchPickResult_GetTarget(u8 *obj, VecFx32 *out, s32 *a, u8 *b);
#endif
#ifndef PROTO_LOCAL_TouchPick_GetTargetObject
s32 TouchPick_GetTargetObject(s32 a, s32 *pa, u8 *pb);
#endif
#ifndef PROTO_LOCAL_TouchPick_GetTappedObject
s32 TouchPick_GetTappedObject(s32 a, s32 *pa, u8 *pb);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveNone
s32 TouchTarget_ResolveNone(void);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolvePlayer
s32 TouchTarget_ResolvePlayer(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveVillager
s32 TouchTarget_ResolveVillager(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveSpNpc
s32 TouchTarget_ResolveSpNpc(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveBuilding
s32 TouchTarget_ResolveBuilding(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveBuildingAlt
s32 TouchTarget_ResolveBuildingAlt(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveFurniture
s32 TouchTarget_ResolveFurniture(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveVillagerBoard
s32 TouchTarget_ResolveVillagerBoard(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveAtm
s32 TouchTarget_ResolveAtm(void);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveMuseumInfo
s32 TouchTarget_ResolveMuseumInfo(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveRecycleBox
s32 TouchTarget_ResolveRecycleBox(void);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolvePhone
s32 TouchTarget_ResolvePhone(void);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveBoardSign
s32 TouchTarget_ResolveBoardSign(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_ResolveSnowball
s32 TouchTarget_ResolveSnowball(s32 a);
#endif
#ifndef PROTO_LOCAL_TouchTarget_Resolve
s32 TouchTarget_Resolve(s32 idx, s32 arg);
#endif
}
#endif

#endif

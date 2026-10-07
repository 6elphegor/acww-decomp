#ifndef PROTO_PROTO_MAIN_UNK_0204F2A4_H
#define PROTO_PROTO_MAIN_UNK_0204F2A4_H

// Prototypes of the functions defined in src/main/unk_0204f2a4.cpp (generated: tools/host_protos.py)

#include "types.h"
struct FishDisplayEntry;
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "types.h"
class FishDisplay;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FishDisplay_RecvAct00
void FishDisplay_RecvAct00(s8 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_FishDisplay_RecvAct01
void FishDisplay_RecvAct01(void *p, u32 v);
#endif
#ifndef PROTO_LOCAL_FishDisplay_RecvAct02
void FishDisplay_RecvAct02(void *p, u32 v);
#endif
#ifndef PROTO_LOCAL_FishDisplay_Create
FishDisplay *FishDisplay_Create(void);
#endif
#ifndef PROTO_LOCAL_FishDisplay_FindFreeEntry
s32 FishDisplay_FindFreeEntry(void);
#endif
#ifndef PROTO_LOCAL_FishDisplayEntry_SetScale
void FishDisplayEntry_SetScale(FishDisplayEntry *e, VecFx32 *v);
#endif
#ifndef PROTO_LOCAL_FishDisplay_PostRequest
void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e);
#endif
#ifndef PROTO_LOCAL_FishDisplay_GetRequestKind
u32 FishDisplay_GetRequestKind(u32 i);
#endif
#ifndef PROTO_LOCAL_FishDisplay_GetRequestFish
u32 FishDisplay_GetRequestFish(u32 i);
#endif
#ifndef PROTO_LOCAL_FishDisplay_GetRequestPos
BOOL FishDisplay_GetRequestPos(u32 *a, u32 *b, u32 i);
#endif
#ifndef PROTO_LOCAL_FishDisplay_Acquire
s32 FishDisplay_Acquire(void);
#endif
#ifndef PROTO_LOCAL_FishDisplay_SetEntry
BOOL FishDisplay_SetEntry(s32 idx, s32 id, VecFx32 *pos, VecFx32 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10);
#endif
#ifndef PROTO_LOCAL_FishDisplay_Release
void FishDisplay_Release(s32 idx);
#endif
#ifndef PROTO_LOCAL_FishDisplay_HasPassedFrame
BOOL FishDisplay_HasPassedFrame(s32 idx, s32 unused);
#endif
#ifndef PROTO_LOCAL_Fish_GetBaseSize
u32 Fish_GetBaseSize(u32 x);
#endif
#ifndef PROTO_LOCAL_Fish_GetSizeClass
u32 Fish_GetSizeClass(u32 x);
#endif
}
#endif

#endif

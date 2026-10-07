#ifndef PROTO_PROTO_MAIN_UNK_0205F284_H
#define PROTO_PROTO_MAIN_UNK_0205F284_H

// Prototypes of the functions defined in src/main/unk_0205f284.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "gfx/Mtx43.h"
#ifdef __cplusplus
#include "gfx/VecFx32.h"
#include "player/FishBobber.h"
#include "types.h"
class FishBobberPool;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_FishBobberPool_Create
void FishBobberPool_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_FishBobberPool_Destroy
void FishBobberPool_Destroy();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_FishBobber_GetFloating
FishBobber *FishBobber_GetFloating(s32 idx);
#endif
#ifndef PROTO_LOCAL_FishBobber_GetModelPath
char *FishBobber_GetModelPath(u32 n);
#endif
#ifndef PROTO_LOCAL_FishBobber_GetModelSize
u32 FishBobber_GetModelSize();
#endif
#ifndef PROTO_LOCAL_FishBobber_GetTexVramSize
u32 FishBobber_GetTexVramSize();
#endif
#ifndef PROTO_LOCAL_FishBobber_GetTex4x4VramSize
u32 FishBobber_GetTex4x4VramSize();
#endif
#ifndef PROTO_LOCAL_FishBobber_GetPlttVramSize
u32 FishBobber_GetPlttVramSize();
#endif
#ifndef PROTO_LOCAL_FishBobber_Draw
void FishBobber_Draw(u8 *self, Mtx43 *m, s32 arg);
#endif
#ifndef PROTO_LOCAL_Fishing_CalcArcSpeed
void Fishing_CalcArcSpeed(VecFx32 *a, VecFx32 *b, s32 *c, s32 *d, u8 mode);
#endif
}
#ifndef PROTO_LOCAL_sFishBobberPool
extern FishBobberPool sFishBobberPool;
#endif
#ifndef PROTO_LOCAL_data_020dc4c4
extern void *data_020dc4c4[2];
#endif
#ifndef PROTO_LOCAL_data_020dc504
extern void *data_020dc504[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4fc
extern void *data_020dc4fc[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4f4
extern void *data_020dc4f4[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4ec
extern void *data_020dc4ec[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4bc
extern void *data_020dc4bc[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4e4
extern void *data_020dc4e4[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4d4
extern void *data_020dc4d4[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4cc
extern void *data_020dc4cc[2];
#endif
#ifndef PROTO_LOCAL_data_020dc4dc
extern void *data_020dc4dc[2];
#endif
#ifndef PROTO_LOCAL_sFishBobberPathBuf
extern char sFishBobberPathBuf[0x14];
#endif
#endif

#endif

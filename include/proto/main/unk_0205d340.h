#ifndef PROTO_PROTO_MAIN_UNK_0205D340_H
#define PROTO_PROTO_MAIN_UNK_0205D340_H

// Prototypes of the functions defined in src/main/unk_0205d340.cpp (generated: tools/host_protos.py)

#include "types.h"
struct PlayerFaceTexPool;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_PlayerFaceTexPool_Create
void PlayerFaceTexPool_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerFaceTexPool_Destroy
void PlayerFaceTexPool_Destroy();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PlayerFaceTex_GetPath
void *PlayerFaceTex_GetPath(u32 x);
#endif
#ifndef PROTO_LOCAL_PlayerFaceTex_GetBufferSize
s32 PlayerFaceTex_GetBufferSize();
#endif
#ifndef PROTO_LOCAL_PlayerFaceTexPool_AllocBuffers
void PlayerFaceTexPool_AllocBuffers(u32 *arr);
#endif
}
#ifndef PROTO_LOCAL_sPlayerFaceTexPathBuf
extern char sPlayerFaceTexPathBuf[0x14];
#endif
#ifndef PROTO_LOCAL_sPlayerFaceTexPool
extern PlayerFaceTexPool sPlayerFaceTexPool;
#endif
#endif

#endif

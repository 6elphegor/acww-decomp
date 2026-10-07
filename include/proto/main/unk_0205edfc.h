#ifndef PROTO_PROTO_MAIN_UNK_0205EDFC_H
#define PROTO_PROTO_MAIN_UNK_0205EDFC_H

// Prototypes of the functions defined in src/main/unk_0205edfc.cpp (generated: tools/host_protos.py)

#include "types.h"
struct PlayerBodyWorkPool;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkPool_Create
void PlayerBodyWorkPool_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkPool_Destroy
void PlayerBodyWorkPool_Destroy(void);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkRef_Destruct
void PlayerBodyWorkRef_Destruct(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_PlayerBodyWork_GetHeapSize
u32 PlayerBodyWork_GetHeapSize(void);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkPool_CreateHeaps
void PlayerBodyWorkPool_CreateHeaps(u32 *tbl);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkPool_DestroyHeaps
void PlayerBodyWorkPool_DestroyHeaps(u32 *tbl);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkPool_GetHeap
u32 PlayerBodyWorkPool_GetHeap(u32 *base, u32 idx);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkRef_Assign
void PlayerBodyWorkRef_Assign(u8 *p, u8 v);
#endif
#ifndef PROTO_LOCAL_PlayerBodyWorkRef_GetHeap
u32 PlayerBodyWorkRef_GetHeap(u8 *p);
#endif
}
#ifndef PROTO_LOCAL_sPlayerBodyWorkPool
extern PlayerBodyWorkPool sPlayerBodyWorkPool;
#endif
#endif

#endif

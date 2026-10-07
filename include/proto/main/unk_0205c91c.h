#ifndef PROTO_PROTO_MAIN_UNK_0205C91C_H
#define PROTO_PROTO_MAIN_UNK_0205C91C_H

// Prototypes of the functions defined in src/main/unk_0205c91c.cpp (generated: tools/host_protos.py)

#include "types.h"
struct CharaClothTexPool;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_CharaClothTexPool_Create
void CharaClothTexPool_Create(void *parent);
#endif
#ifndef PROTO_LOCAL_CharaClothTexPool_Destroy
void CharaClothTexPool_Destroy();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_CharaClothTexPool_GetItem
void CharaClothTexPool_GetItem(u16 *out, CharaClothTexPool *t, u32 idx);
#endif
#ifndef PROTO_LOCAL_CharaClothTexRef_LoadPattern
void CharaClothTexRef_LoadPattern(u8 *p, void *q);
#endif
#ifndef PROTO_LOCAL_CharaClothTexRef_CopyFromSlot
void CharaClothTexRef_CopyFromSlot(void *pp, s32 x);
#endif
#ifndef PROTO_LOCAL_CharaClothTexRef_GetBuffer
u32 CharaClothTexRef_GetBuffer(u8 *p);
#endif
}
#ifndef PROTO_LOCAL_sCharaClothTexPool
extern CharaClothTexPool sCharaClothTexPool;
#endif
#endif

#endif

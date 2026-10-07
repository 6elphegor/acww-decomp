#ifndef PROTO_PROTO_MAIN_UNK_020815F8_H
#define PROTO_PROTO_MAIN_UNK_020815F8_H

// Prototypes of the functions defined in src/main/unk_020815f8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "actor/NpcActor.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NpcRegistry_Clear
void NpcRegistry_Clear();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_NpcRegistry_GetSlotCount
s32 NpcRegistry_GetSlotCount();
#endif
#ifndef PROTO_LOCAL_NpcRegistry_GetVillager
NpcActor *NpcRegistry_GetVillager(s32 i);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_GetBySlot
s32 NpcRegistry_GetBySlot(s32 n);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindVillager
s32 NpcRegistry_FindVillager(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindSpNpc
s32 NpcRegistry_FindSpNpc(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindByKind
s32 NpcRegistry_FindByKind(s32 kind, void *x);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindByHandle
s32 NpcRegistry_FindByHandle(u16 *p);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindVillagerByHandle
s32 NpcRegistry_FindVillagerByHandle(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindSpNpcByHandle
s32 NpcRegistry_FindSpNpcByHandle(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_FindAt
NpcActor *NpcRegistry_FindAt(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_PickRandomVillager
s32 NpcRegistry_PickRandomVillager(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_AddVillager
s32 NpcRegistry_AddVillager(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_RemoveVillager
s32 NpcRegistry_RemoveVillager(void *a);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_AddSpNpc
s32 NpcRegistry_AddSpNpc(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_NpcRegistry_RemoveSpNpc
s32 NpcRegistry_RemoveSpNpc(void *a);
#endif
}
#endif

#endif

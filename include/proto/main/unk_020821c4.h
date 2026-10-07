#ifndef PROTO_PROTO_MAIN_UNK_020821C4_H
#define PROTO_PROTO_MAIN_UNK_020821C4_H

// Prototypes of the functions defined in src/main/unk_020821c4.cpp (generated: tools/host_protos.py)

#include "types.h"
struct NpcBodyAnimPool;
struct NpcClothTexPool;
struct NpcFaceAnimPool;
struct NpcHeldItemModelPool;
struct NpcTexPatBufRefPool;
struct NpcTexPatHeapPool;
struct SpNpcAnimHeapRefPool;
#ifdef __cplusplus
#include "npc/VillagerAnimHeapRefPool.h"
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_VillagerAnimHeapRefPool_Get
VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get();
#endif
}
#ifndef PROTO_LOCAL_sNpcBodyAnimPool
extern NpcBodyAnimPool sNpcBodyAnimPool;
#endif
#ifndef PROTO_LOCAL_sVillagerAnimHeapRefPool
extern VillagerAnimHeapRefPool sVillagerAnimHeapRefPool;
#endif
#ifndef PROTO_LOCAL_sSpNpcAnimHeapRefPool
extern SpNpcAnimHeapRefPool sSpNpcAnimHeapRefPool;
#endif
#ifndef PROTO_LOCAL_sNpcClothTexPool
extern NpcClothTexPool sNpcClothTexPool;
#endif
#ifndef PROTO_LOCAL_sNpcTexPatBufRefPool
extern NpcTexPatBufRefPool sNpcTexPatBufRefPool;
#endif
#ifndef PROTO_LOCAL_sNpcFaceAnimPool
extern NpcFaceAnimPool sNpcFaceAnimPool;
#endif
#ifndef PROTO_LOCAL_sNpcTexPatHeapPool
extern NpcTexPatHeapPool sNpcTexPatHeapPool;
#endif
#ifndef PROTO_LOCAL_sNpcHeldItemModelPool
extern NpcHeldItemModelPool sNpcHeldItemModelPool;
#endif
#endif

#endif

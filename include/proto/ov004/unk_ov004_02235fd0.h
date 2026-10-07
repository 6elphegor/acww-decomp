#ifndef PROTO_PROTO_OV004_UNK_OV004_02235FD0_H
#define PROTO_PROTO_OV004_UNK_OV004_02235FD0_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02235fd0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class HouseRoach;
class HouseRoachManager;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_HouseRoach_FindVillager
void HouseRoach_FindVillager(void *);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_HouseRoachManager_Create
HouseRoachManager *HouseRoachManager_Create();
#endif
#ifndef PROTO_LOCAL_HouseRoach_Create
HouseRoach *HouseRoach_Create();
#endif
#ifndef PROTO_LOCAL_HouseRoach_SpawnFromFurniture
BOOL HouseRoach_SpawnFromFurniture(u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_HouseRoach_SpawnInitial
BOOL HouseRoach_SpawnInitial(void *owner);
#endif
#ifndef PROTO_LOCAL_HouseRoach_LoadCount
BOOL HouseRoach_LoadCount(void *self);
#endif
}
#endif

#endif

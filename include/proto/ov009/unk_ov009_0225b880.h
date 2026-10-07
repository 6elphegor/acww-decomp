#ifndef PROTO_PROTO_OV009_UNK_OV009_0225B880_H
#define PROTO_PROTO_OV009_UNK_OV009_0225B880_H

// Prototypes of the functions defined in src/ov009/unk_ov009_0225b880.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "town/BuildingResources.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_BuildingActor_Create
void *BuildingActor_Create();
#endif
#ifndef PROTO_LOCAL_Building_GetFirstMdl
void *Building_GetFirstMdl(void *res);
#endif
#ifndef PROTO_LOCAL_Building_GetFirstAnm
void *Building_GetFirstAnm(void *res);
#endif
#ifndef PROTO_LOCAL__ZN12Unk_0213b9c4D1Ev
void *_ZN12Unk_0213b9c4D1Ev(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Building_LocalToWorld
void Building_LocalToWorld(void *p, s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_BuildingResources_IsLoaded
BOOL BuildingResources_IsLoaded(BuildingResources *e);
#endif
#ifndef PROTO_LOCAL_Building_IsNight
BOOL Building_IsNight();
#endif
}
#endif

#endif

#ifndef PROTO_PROTO_OV004_UNK_OV004_0221A564_H
#define PROTO_PROTO_OV004_UNK_OV004_0221A564_H

// Prototypes of the functions defined in src/ov004/unk_ov004_0221a564.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SickVillager;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_SickVillager_SetCurrentVisitor
void SickVillager_SetCurrentVisitor();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SickVillager_Create
SickVillager *SickVillager_Create();
#endif
#ifndef PROTO_LOCAL_SickVillager_IsMedicine
BOOL SickVillager_IsMedicine(u16 *p, s32 x);
#endif
#ifndef PROTO_LOCAL_SickVillager_HasCurrentVisitor
BOOL SickVillager_HasCurrentVisitor(void *o);
#endif
}
#endif

#endif

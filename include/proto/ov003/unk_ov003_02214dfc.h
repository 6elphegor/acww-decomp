#ifndef PROTO_PROTO_OV003_UNK_OV003_02214DFC_H
#define PROTO_PROTO_OV003_UNK_OV003_02214DFC_H

// Prototypes of the functions defined in src/ov003/unk_ov003_02214dfc.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class GateHouse;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_GateHouse_Create
void *GateHouse_Create();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_GateHouse_GetDesign
s32 GateHouse_GetDesign();
#endif
#ifndef PROTO_LOCAL_GateHouse_GetModelName
u32 GateHouse_GetModelName();
#endif
#ifndef PROTO_LOCAL_GateHouse_ApplyTownFlag
BOOL GateHouse_ApplyTownFlag(GateHouse *self);
#endif
}
#endif

#endif

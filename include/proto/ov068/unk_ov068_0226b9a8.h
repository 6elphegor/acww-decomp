#ifndef PROTO_PROTO_OV068_UNK_OV068_0226B9A8_H
#define PROTO_PROTO_OV068_UNK_OV068_0226B9A8_H

// Prototypes of the functions defined in src/ov068/unk_ov068_0226b9a8.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class TaxiInterior;
class AnimModel;
class RoomObjRes;
struct NNSG3dRS;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sTaxiInterior
extern TaxiInterior *sTaxiInterior;
#endif
#ifndef PROTO_LOCAL_TaxiInterior_Create
TaxiInterior *TaxiInterior_Create();
#endif
#ifndef PROTO_LOCAL_TaxiInterior_StopRain
BOOL TaxiInterior_StopRain();
#endif
#ifndef PROTO_LOCAL_TaxiInterior_StartDriverAnim
BOOL TaxiInterior_StartDriverAnim();
#endif
#ifndef PROTO_LOCAL_TaxiInterior_OnModelNode
void TaxiInterior_OnModelNode(TaxiInterior *self, u32 node, NNSG3dRS *rs);
#endif
#ifndef PROTO_LOCAL_TaxiInterior_SetPartAnim
void TaxiInterior_SetPartAnim(TaxiInterior *self, u8 k, AnimModel *part, RoomObjRes *res, u8 s0, u32 s1, u16 s2, u16 s3);
#endif
}
#endif

#endif

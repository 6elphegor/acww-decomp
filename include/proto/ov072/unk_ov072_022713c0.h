#ifndef PROTO_PROTO_OV072_UNK_OV072_022713C0_H
#define PROTO_PROTO_OV072_UNK_OV072_022713C0_H

// Prototypes of the functions defined in src/ov072/unk_ov072_022713c0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcGulliver;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_SpNpcGulliver_ScatterShipParts
void SpNpcGulliver_ScatterShipParts();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcGulliver_Create
SpNpcGulliver *SpNpcGulliver_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcGulliver_TickTimer
s32 SpNpcGulliver_TickTimer(void *self, s32 *p);
#endif
#ifndef PROTO_LOCAL_SpNpcGulliver_IsSpotClear
BOOL SpNpcGulliver_IsSpotClear(s32 *a, s32 *b, void *g);
#endif
#ifndef PROTO_LOCAL_SpNpcGulliver_PlaceShipPart
BOOL SpNpcGulliver_PlaceShipPart(u8 *cnt, s32 *pe, void *g0);
#endif
}
#endif

#endif

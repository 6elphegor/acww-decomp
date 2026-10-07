#ifndef PROTO_PROTO_OV004_UNK_OV004_02227B44_H
#define PROTO_PROTO_OV004_UNK_OV004_02227B44_H

// Prototypes of the functions defined in src/ov004/unk_ov004_02227b44.cpp (generated: tools/host_protos.py)

#include "types.h"
struct MuseumDisplayKind;
#ifdef __cplusplus
#include "types.h"
class MuseumDisplay;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_MuseumDisplay_InitRenderObj
void MuseumDisplay_InitRenderObj(void *p);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_MuseumDisplay_Create
MuseumDisplay *MuseumDisplay_Create();
#endif
#ifndef PROTO_LOCAL_MuseumDisplay_GetPaintingItem
u16 MuseumDisplay_GetPaintingItem(u32 i);
#endif
#ifndef PROTO_LOCAL_MuseumDisplay_GetKindInfo
const MuseumDisplayKind *MuseumDisplay_GetKindInfo(u32 i);
#endif
}
#endif

#endif

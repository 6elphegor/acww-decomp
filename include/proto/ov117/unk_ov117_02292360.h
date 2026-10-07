#ifndef PROTO_PROTO_OV117_UNK_OV117_02292360_H
#define PROTO_PROTO_OV117_UNK_OV117_02292360_H

// Prototypes of the functions defined in src/ov117/unk_ov117_02292360.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "town/TownMapMarkers.h"
struct TownMapImage;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_TownMapImage_CopyPixels
void TownMapImage_CopyPixels(void *o, void *a);
#endif
#ifndef PROTO_LOCAL_TownMapImage_AllocGlobal
void TownMapImage_AllocGlobal();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_TownMapMarkers_Set
void TownMapMarkers_Set(TownMapMarkers *s, s32 i, s32 x, s32 y, u8 z);
#endif
#ifndef PROTO_LOCAL_TownMapMarkers_Get
TownMapMarker *TownMapMarkers_Get(TownMapMarkers *s, u32 i);
#endif
#ifndef PROTO_LOCAL_TownMapMarkers_GetKind
u8 TownMapMarkers_GetKind(TownMapMarkers *s, u32 i);
#endif
#ifndef PROTO_LOCAL_TownMapImage_DrawAcre
void TownMapImage_DrawAcre(u8 *buf, s32 bx, s32 by);
#endif
#ifndef PROTO_LOCAL_TownMapImage_DrawAcreRow
void TownMapImage_DrawAcreRow(TownMapImage *o, u32 i);
#endif
#ifndef PROTO_LOCAL_TownMapImage_BuildMarkers
void TownMapImage_BuildMarkers(TownMapImage *o, u32 sel);
#endif
#ifndef PROTO_LOCAL_TownMapImage_GetAcre
u8 *TownMapImage_GetAcre(u8 *o, u32 x, u32 y);
#endif
#ifndef PROTO_LOCAL_TownMapImage_DrawRowGlobal
void TownMapImage_DrawRowGlobal(u32 i);
#endif
#ifndef PROTO_LOCAL_TownMapImage_BuildMarkersGlobal
void TownMapImage_BuildMarkersGlobal(u32 i);
#endif
}
#endif

#endif

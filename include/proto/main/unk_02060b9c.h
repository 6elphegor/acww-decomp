#ifndef PROTO_PROTO_MAIN_UNK_02060B9C_H
#define PROTO_PROTO_MAIN_UNK_02060B9C_H

// Prototypes of the functions defined in src/main/unk_02060b9c.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Grid_ConvertFakePaintings
void Grid_ConvertFakePaintings(void *g);
#endif
#ifndef PROTO_LOCAL_Save_ConvertFakePaintings
void Save_ConvertFakePaintings();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Item_ToPlacedForm
void Item_ToPlacedForm(u16 *out, u16 *in, s32 n);
#endif
#ifndef PROTO_LOCAL_Item_ConvertFakePainting
void Item_ConvertFakePainting(u16 *out, u16 *in);
#endif
#ifndef PROTO_LOCAL_Insect_GetSpawnTable
void *Insect_GetSpawnTable(s32 i);
#endif
#ifndef PROTO_LOCAL_Insect_HourToTimeSlot
s32 Insect_HourToTimeSlot(u32 x);
#endif
#ifndef PROTO_LOCAL_Insect_GetBaseSize
s32 Insect_GetBaseSize(u32 x);
#endif
#ifndef PROTO_LOCAL_Insect_GetHabitat
s32 Insect_GetHabitat(u32 x);
#endif
}
#endif

#endif

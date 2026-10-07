#ifndef PROTO_PROTO_OV003_UNK_OV003_02212830_H
#define PROTO_PROTO_OV003_UNK_OV003_02212830_H

// Prototypes of the functions defined in src/ov003/unk_ov003_02212830.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_Snowball_Create
void *Snowball_Create();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_Snowball_GetMinRadius
s32 Snowball_GetMinRadius();
#endif
#ifndef PROTO_LOCAL_Snowball_GetMaxRadius
s32 Snowball_GetMaxRadius();
#endif
#ifndef PROTO_LOCAL_Snowball_PlaceSnowmanNearby
BOOL Snowball_PlaceSnowmanNearby(void *a, void *pos, u16 *out);
#endif
#ifndef PROTO_LOCAL_Snowball_ClearItemAt
BOOL Snowball_ClearItemAt(void *p);
#endif
#ifndef PROTO_LOCAL_Snowball_DropDisplacedItem
BOOL Snowball_DropDisplacedItem(u16 *p);
#endif
}
#endif

#endif

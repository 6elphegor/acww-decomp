#ifndef PROTO_PROTO_OV047_UNK_OV047_02258DE0_H
#define PROTO_PROTO_OV047_UNK_OV047_02258DE0_H

// Prototypes of the functions defined in src/ov047/unk_ov047_02258de0.cpp (generated: tools/host_protos.py)

#include "types.h"
struct SpNpcBlathersActEntry;
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_SpNpcBlathers_Create
void *SpNpcBlathers_Create();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcBlathers_IsDonatableItem
BOOL SpNpcBlathers_IsDonatableItem(u16 *p, s32 m);
#endif
#ifndef PROTO_LOCAL_SpNpcBlathers_IsUnidentifiedFossil
BOOL SpNpcBlathers_IsUnidentifiedFossil(u16 *p, s32 m);
#endif
#ifndef PROTO_LOCAL_SpNpcBlathers_IsDeliveryItem
BOOL SpNpcBlathers_IsDeliveryItem(u16 *p, s32 m);
#endif
#ifndef PROTO_LOCAL_sSpNpcBlathersModelPath
extern u8 sSpNpcBlathersModelPath[];
#endif
#ifndef PROTO_LOCAL_sSpNpcBlathersTexturePath
extern u8 sSpNpcBlathersTexturePath[];
#endif
}
#ifndef PROTO_LOCAL_sSpNpcBlathersActTable
extern SpNpcBlathersActEntry sSpNpcBlathersActTable[9];
#endif
#endif

#endif

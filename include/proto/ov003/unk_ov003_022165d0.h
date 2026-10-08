#ifndef PROTO_PROTO_OV003_UNK_OV003_022165D0_H
#define PROTO_PROTO_OV003_UNK_OV003_022165D0_H

// Prototypes of the functions defined in src/ov003/unk_ov003_022165d0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "actor/ActorProfile.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_data_ov003_02235358
extern char data_ov003_02235358[0x20];
#endif
#ifndef PROTO_LOCAL_PlayerHouse_Create
void *PlayerHouse_Create();
#endif
#ifndef PROTO_LOCAL_PlayerHouse_GetTexIndex
u8 PlayerHouse_GetTexIndex();
#endif
#ifndef PROTO_LOCAL_PlayerHouse_GetTexPath
char *PlayerHouse_GetTexPath();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_sPlayerHouseProfile
extern ActorProfile sPlayerHouseProfile;
#endif
}
#endif

#endif

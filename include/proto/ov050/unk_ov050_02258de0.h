#ifndef PROTO_PROTO_OV050_UNK_OV050_02258DE0_H
#define PROTO_PROTO_OV050_UNK_OV050_02258DE0_H

// Prototypes of the functions defined in src/ov050/unk_ov050_02258de0.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
class SpNpcNookShop;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_SpNpcNookShop_Create
SpNpcNookShop *SpNpcNookShop_Create();
#endif
#ifndef PROTO_LOCAL_SpNpcNookShop_CreateTimmy
SpNpcNookShop *SpNpcNookShop_CreateTimmy();
#endif
#ifndef PROTO_LOCAL_SpNpcNookShop_CreateTommy
SpNpcNookShop *SpNpcNookShop_CreateTommy();
#endif
#ifndef PROTO_LOCAL_SpNpcNookShop_IsDeliveryParcel
BOOL SpNpcNookShop_IsDeliveryParcel(u16 *p, s32 m);
#endif
#ifndef PROTO_LOCAL_SpNpcNookShop_GetHouseUpgradeMsg
s32 SpNpcNookShop_GetHouseUpgradeMsg(void *self);
#endif
#ifndef PROTO_LOCAL_SpNpcNookShop_IsEmptyItem
BOOL SpNpcNookShop_IsEmptyItem(u16 *p);
#endif
}
#endif

#endif

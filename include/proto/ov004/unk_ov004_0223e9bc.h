#ifndef PROTO_PROTO_OV004_UNK_OV004_0223E9BC_H
#define PROTO_PROTO_OV004_UNK_OV004_0223E9BC_H

// Prototypes of the functions defined in src/ov004/unk_ov004_0223e9bc.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "sys/ProcProfile.h"
#ifdef __cplusplus
#include "types.h"
class ShopStockPlacer;
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ShopStockPlacer_Create
ShopStockPlacer *ShopStockPlacer_Create();
#endif
#ifndef PROTO_LOCAL_ShopStock_GetLayout
u8 *ShopStock_GetLayout();
#endif
#ifndef PROTO_LOCAL_ShopStock_GetItemCode
s32 ShopStock_GetItemCode(u16 *p);
#endif
#ifndef PROTO_LOCAL_ShopStock_IsForSale
BOOL ShopStock_IsForSale(u16 *p);
#endif
#ifndef PROTO_LOCAL_ShopStock_GetItemAt
u16 *ShopStock_GetItemAt(s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_ShopStock_GetCode22Index
s32 ShopStock_GetCode22Index(s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL_ShopStock_FindTileOfStock
BOOL ShopStock_FindTileOfStock(s32 *px, s32 *py, s32 code);
#endif
#ifndef PROTO_LOCAL_ShopStock_GetItemAtTile
u16 *ShopStock_GetItemAtTile(s32 x, s32 y);
#endif
#ifndef PROTO_LOCAL__ZN15ShopStockPlacer13callGetItemAtEv
u16 *_ZN15ShopStockPlacer13callGetItemAtEv(s32 x, s32 y);
#endif
}
#ifndef PROTO_LOCAL_sShopStockPlacerProfile
extern ProcProfile sShopStockPlacerProfile;
#endif
#ifndef PROTO_LOCAL_data_ov004_0224f254
extern void *data_ov004_0224f254[2];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224f25c
extern void *data_ov004_0224f25c[2];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224f274
extern void *data_ov004_0224f274[2];
#endif
#ifndef PROTO_LOCAL_data_ov004_0224f264
extern void *data_ov004_0224f264[2];
#endif
#endif

#endif

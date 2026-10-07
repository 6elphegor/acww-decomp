#ifndef PROTO_PROTO_MAIN_UNK_02061478_H
#define PROTO_PROTO_MAIN_UNK_02061478_H

// Prototypes of the functions defined in src/main/unk_02061478.cpp (generated: tools/host_protos.py)

#include "types.h"
#ifdef __cplusplus
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_ItemInfoTables_FreeIndoor
void ItemInfoTables_FreeIndoor(void *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_CountHoldable
void ItemInfo_CountHoldable();
#endif
#ifndef PROTO_LOCAL_ItemInfo_CountFlowerItems
void ItemInfo_CountFlowerItems();
#endif
#ifndef PROTO_LOCAL_ItemInfo_CountClass1dHeadwear
void ItemInfo_CountClass1dHeadwear();
#endif
#ifndef PROTO_LOCAL_ItemInfo_FreeIndoor
void ItemInfo_FreeIndoor();
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ItemInfoTables_Open
s32 ItemInfoTables_Open(void *o);
#endif
#ifndef PROTO_LOCAL_ItemInfoTables_Close
s32 ItemInfoTables_Close(void *o);
#endif
#ifndef PROTO_LOCAL_ItemInfoTables_LoadIndoor
void ItemInfoTables_LoadIndoor(void *p, s32 x);
#endif
#ifndef PROTO_LOCAL_ItemInfo_IsReady
BOOL ItemInfo_IsReady();
#endif
#ifndef PROTO_LOCAL_ItemInfo_Init
s32 ItemInfo_Init();
#endif
#ifndef PROTO_LOCAL_ItemInfo_Exit
s32 ItemInfo_Exit();
#endif
#ifndef PROTO_LOCAL_ItemInfo_LoadIndoor
void ItemInfo_LoadIndoor(s32 a);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetName
u16 *ItemInfo_GetName(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetUnk02
s32 ItemInfo_GetUnk02(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetNameForm
s32 ItemInfo_GetNameForm(u16 *);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetNameAttrB
s32 ItemInfo_GetNameAttrB(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetNameAttrA
s32 ItemInfo_GetNameAttrA(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetSeries
s32 ItemInfo_GetSeries(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetPrice
u32 ItemInfo_GetPrice(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetKind
s32 ItemInfo_GetKind(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetClass
s32 ItemInfo_GetClass(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetUnk07
s32 ItemInfo_GetUnk07(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetSeason
s32 ItemInfo_GetSeason(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_IsHoldable
BOOL ItemInfo_IsHoldable(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_TestFlag1
BOOL ItemInfo_TestFlag1(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_TestFlag2
BOOL ItemInfo_TestFlag2(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_TestFlag3
BOOL ItemInfo_TestFlag3(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_TestFlag4
BOOL ItemInfo_TestFlag4(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetIndoorUnk1
u32 ItemInfo_GetIndoorUnk1(u16 *p);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetIndoorUnk0
u32 ItemInfo_GetIndoorUnk0(u16 *p);
#endif
#ifndef PROTO_LOCAL_Series_GetType
u32 Series_GetType(s32 i);
#endif
#ifndef PROTO_LOCAL_Series_GetName
u32 Series_GetName(s32 i);
#endif
#ifndef PROTO_LOCAL_FtrClass_GetBasePoints
u32 FtrClass_GetBasePoints(s32 i);
#endif
#ifndef PROTO_LOCAL_Item_GetIconModelName
u32 Item_GetIconModelName(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetHoldableCount
u32 ItemInfo_GetHoldableCount();
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetNthHoldable
void ItemInfo_GetNthHoldable(u16 *out, s32 idx);
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetHoldableIndex
s32 ItemInfo_GetHoldableIndex(u16 *p);
#endif
#ifndef PROTO_LOCAL_Item_GetFlowerItemCount
u32 Item_GetFlowerItemCount();
#endif
#ifndef PROTO_LOCAL_Item_GetFlowerAltCount
u32 Item_GetFlowerAltCount();
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetHatClass1dCount
u32 ItemInfo_GetHatClass1dCount();
#endif
#ifndef PROTO_LOCAL_ItemInfo_GetFullHeadwearClass1dCount
u32 ItemInfo_GetFullHeadwearClass1dCount();
#endif
#ifndef PROTO_LOCAL_Item_FromPlacedForm
void Item_FromPlacedForm(u16 *out, u16 *in);
#endif
}
#endif

#endif

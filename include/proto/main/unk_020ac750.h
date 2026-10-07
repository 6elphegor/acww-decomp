#ifndef PROTO_PROTO_MAIN_UNK_020AC750_H
#define PROTO_PROTO_MAIN_UNK_020AC750_H

// Prototypes of the functions defined in src/main/unk_020ac750.cpp (generated: tools/host_protos.py)

#include "types.h"
#include "game/Unk_020aebbc.h"
#include "item/ShopAckCounter.h"
#include "item/ShopPurchaseBits.h"
struct NookPoints;
struct Obj;
struct S1;
struct S;
#ifdef __cplusplus
#include "game/ReddShop.h"
#include "types.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
#ifndef PROTO_LOCAL_NookShop_InitNew
int NookShop_InitNew(int a);
#endif
#ifndef PROTO_LOCAL_NookShop_HasVisitorBought
int NookShop_HasVisitorBought(void*);
#endif
#ifndef PROTO_LOCAL_AbleShop_Construct
void* AbleShop_Construct(void *p);
#endif
#ifndef PROTO_LOCAL_AbleShop_Destruct
void* AbleShop_Destruct(void *p);
#endif
#ifndef PROTO_LOCAL_AbleShop_InitNew
void AbleShop_InitNew();
#endif
#ifndef PROTO_LOCAL_AbleShop_StockHeadwear
void AbleShop_StockHeadwear(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_AbleShop_StockAccessory
void AbleShop_StockAccessory(void *a, void *b);
#endif
#ifndef PROTO_LOCAL_AbleShop_RestockEnd
void AbleShop_RestockEnd();
#endif
#ifndef PROTO_LOCAL_ReddPassword_ForgetVisitor
void ReddPassword_ForgetVisitor();
#endif
#ifndef PROTO_LOCAL_ReddShop_SendPasswordLetters
void ReddShop_SendPasswordLetters();
#endif
#ifndef PROTO_LOCAL_NookPoints_SendMemberLetters
void NookPoints_SendMemberLetters(void);
#endif
#ifndef PROTO_LOCAL_NookShop_RecordBuyback
void NookShop_RecordBuyback(int a);
#endif
#ifndef PROTO_LOCAL_NookShop_GetVisitState
int NookShop_GetVisitState(void);
#endif
#ifndef PROTO_LOCAL_NookShop_SetVisitState
void NookShop_SetVisitState(int v);
#endif
#ifndef PROTO_LOCAL_NookShop_OnSceneLoad
void NookShop_OnSceneLoad(void);
#endif
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#ifndef PROTO_LOCAL_ShopAckCounter_IsDone
BOOL ShopAckCounter_IsDone(Counter *c);
#endif
#ifndef PROTO_LOCAL_ShopAckCounter_Add
BOOL ShopAckCounter_Add(Counter *c);
#endif
#ifndef PROTO_LOCAL_StockList_AddFromPickList
void StockList_AddFromPickList(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag);
#endif
#ifndef PROTO_LOCAL_StockList_AddFromRange
void StockList_AddFromRange(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag);
#endif
#ifndef PROTO_LOCAL_StockList_Clear
void StockList_Clear(u16 *a, u8 *b, u32 n);
#endif
#ifndef PROTO_LOCAL_StockList_IsSold
BOOL StockList_IsSold(u32 i, u32 n, u8 *bits);
#endif
#ifndef PROTO_LOCAL_StockList_MarkSold
BOOL StockList_MarkSold(u32 i, u32 n, u8 *bits);
#endif
#ifndef PROTO_LOCAL_StockList_GetItem
u16 *StockList_GetItem(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out);
#endif
#ifndef PROTO_LOCAL_StockList_FindItem
s32 StockList_FindItem(u16 *key, u16 *arr, u8 *bits, u32 n);
#endif
#ifndef PROTO_LOCAL_Shop_RemoveSoldItemAt
void Shop_RemoveSoldItemAt(s32 x, s32 y, u32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_Shop_RemoveSoldItem
void Shop_RemoveSoldItem(u16 *p, u32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_NookShop_PostPointSpecialNotice
void NookShop_PostPointSpecialNotice(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_NookShop_PostSaleNotice
void NookShop_PostSaleNotice(s32 x);
#endif
#ifndef PROTO_LOCAL_NookShop_PostSpecialItemNotice
void NookShop_PostSpecialItemNotice(u16 *s);
#endif
#ifndef PROTO_LOCAL_NookShop_PostRenovationNotice
void NookShop_PostRenovationNotice(s32 a, s32 b);
#endif
#ifndef PROTO_LOCAL_NookShop_PostReopenNotice
s32 NookShop_PostReopenNotice();
#endif
#ifndef PROTO_LOCAL_NookShop_GetReopenDateTime
BOOL NookShop_GetReopenDateTime(Unk_020aec74_Out *out);
#endif
#ifndef PROTO_LOCAL_Shop_IsPurchaseSynced
BOOL Shop_IsPurchaseSynced();
#endif
#ifndef PROTO_LOCAL_NookShop_IsSaleTime
BOOL NookShop_IsSaleTime(Obj* self);
#endif
#ifndef PROTO_LOCAL_NookShop_HasClass4Furniture
BOOL NookShop_HasClass4Furniture(Obj* self);
#endif
#ifndef PROTO_LOCAL_NookShop_GetUpgradeSales
u32 NookShop_GetUpgradeSales(Obj* self, int mode);
#endif
#ifndef PROTO_LOCAL_NookShop_GetItem
u16* NookShop_GetItem(Obj* self, int idx, u16* p);
#endif
#ifndef PROTO_LOCAL_NookShop_SellSlot
BOOL NookShop_SellSlot(Obj* self, u32 idx, int add, int arg);
#endif
#ifndef PROTO_LOCAL_NookShop_IsBlockingEvent
BOOL NookShop_IsBlockingEvent(int x);
#endif
#ifndef PROTO_LOCAL_NookShop_GetLevel
u32 NookShop_GetLevel(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_SetLevel
void NookShop_SetLevel(S *s, u32 v);
#endif
#ifndef PROTO_LOCAL_NookShop_GetToolCount
u32 NookShop_GetToolCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetFurnitureCount
u32 NookShop_GetFurnitureCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetFlowerBagCount
u32 NookShop_GetFlowerBagCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetSaplingCount
u32 NookShop_GetSaplingCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetWallpaperCount
u32 NookShop_GetWallpaperCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetCarpetCount
u32 NookShop_GetCarpetCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetStationeryCount
u32 NookShop_GetStationeryCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetPaintCount
u32 NookShop_GetPaintCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetBottleCount
u32 NookShop_GetBottleCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_GetMedicineCount
u32 NookShop_GetMedicineCount(S *s);
#endif
#ifndef PROTO_LOCAL_NookShop_StockTools
void NookShop_StockTools(S *s, s32 *p);
#endif
#ifndef PROTO_LOCAL_NookShop_StockFlowerBags
void NookShop_StockFlowerBags(S *s, s32 *p);
#endif
#ifndef PROTO_LOCAL_NookShop_StockPaint
void NookShop_StockPaint(S *s, s32 *p);
#endif
#ifndef PROTO_LOCAL_NookShop_ApplyRenovation
u32 NookShop_ApplyRenovation(void);
#endif
#ifndef PROTO_LOCAL_AbleShop_Restock
void AbleShop_Restock(S1 *s, u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_AbleShop_IsStockStale
u32 AbleShop_IsStockStale(S1 *s, void *p);
#endif
#ifndef PROTO_LOCAL_AbleShop_GetItem
u16* AbleShop_GetItem(S1 *s, u32 a, u32 c);
#endif
#ifndef PROTO_LOCAL_AbleShop_FindItem
s32 AbleShop_FindItem(S1 *s, u32 a);
#endif
#ifndef PROTO_LOCAL_AbleShop_MarkSold
u32 AbleShop_MarkSold(S1 *s, u32 a);
#endif
#ifndef PROTO_LOCAL_AbleShop_MarkSoldItem
u32 AbleShop_MarkSoldItem(S1 *s, u16 *key);
#endif
#ifndef PROTO_LOCAL_AbleShop_StockUmbrella
void AbleShop_StockUmbrella(S1 *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_AbleShop_StockShirts
void AbleShop_StockShirts(S1 *a, u32 *b);
#endif
#ifndef PROTO_LOCAL_ReddPassword_VisitorKnows
BOOL ReddPassword_VisitorKnows();
#endif
#ifndef PROTO_LOCAL_ReddShop_Reset
void ReddShop_Reset(ReddShop *g);
#endif
#ifndef PROTO_LOCAL_ReddShop_IsTentOpen
BOOL ReddShop_IsTentOpen();
#endif
#ifndef PROTO_LOCAL_ReddPassword_ForgetResident
void ReddPassword_ForgetResident(u32 i);
#endif
#ifndef PROTO_LOCAL_ReddPassword_CurrentPlayerKnows
BOOL ReddPassword_CurrentPlayerKnows();
#endif
#ifndef PROTO_LOCAL_ReddPassword_LearnCurrentPlayer
BOOL ReddPassword_LearnCurrentPlayer();
#endif
#ifndef PROTO_LOCAL_ReddShop_MarkSold
u32 ReddShop_MarkSold(ReddShop *g, u32 a);
#endif
#ifndef PROTO_LOCAL_ReddShop_MarkSoldItem
u32 ReddShop_MarkSoldItem(ReddShop *g, u16 *ptr);
#endif
#ifndef PROTO_LOCAL_ReddShop_GetItem
void *ReddShop_GetItem(ReddShop *g, u32 a, u32 b);
#endif
#ifndef PROTO_LOCAL_ReddShop_FindItem
s32 ReddShop_FindItem(ReddShop *g, u32 a);
#endif
#ifndef PROTO_LOCAL_NookPoints_GetValuePtr
u16 *NookPoints_GetValuePtr(NookPoints *p);
#endif
#ifndef PROTO_LOCAL_NookPoints_Add
void NookPoints_Add(u16 *p, u32 add);
#endif
#ifndef PROTO_LOCAL_NookPoints_AddForPurchase
void NookPoints_AddForPurchase(u16 *p, u32 v);
#endif
#ifndef PROTO_LOCAL_NookPoints_GetRank
u32 NookPoints_GetRank(u32 v);
#endif
#ifndef PROTO_LOCAL_NookPoints_GetRankThreshold
u32 NookPoints_GetRankThreshold(u32 i);
#endif
#ifndef PROTO_LOCAL_NookPoints_GetToNextRank
u16 NookPoints_GetToNextRank(u16 *p);
#endif
#ifndef PROTO_LOCAL_Shop_RecordPurchase
void Shop_RecordPurchase(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e);
#endif
#ifndef PROTO_LOCAL_NookShop_BuyAt
void NookShop_BuyAt(u32 a, u32 b, u32 c, u32 d);
#endif
#ifndef PROTO_LOCAL_NookShop_IsPurchaseSynced
u32 NookShop_IsPurchaseSynced(void);
#endif
#ifndef PROTO_LOCAL_NookShop_CanTakeCatalogOrder
BOOL NookShop_CanTakeCatalogOrder(void);
#endif
#ifndef PROTO_LOCAL_NookShop_SendCatalogOrder
BOOL NookShop_SendCatalogOrder(void *name);
#endif
#ifndef PROTO_LOCAL_AbleShop_BuyAt
void AbleShop_BuyAt(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_AbleShop_IsPurchaseSynced
u32 AbleShop_IsPurchaseSynced(void);
#endif
#ifndef PROTO_LOCAL_ReddShop_RecordPurchase
void ReddShop_RecordPurchase(u32 a, u32 b, u8 c, u32 d);
#endif
#ifndef PROTO_LOCAL_ReddShop_BuyAt
void ReddShop_BuyAt(u32 a, u32 b, u32 c);
#endif
#ifndef PROTO_LOCAL_ReddShop_IsPurchaseSynced
u32 ReddShop_IsPurchaseSynced(void);
#endif
#ifndef PROTO_LOCAL_Shop_OnPurchaseRecord
void Shop_OnPurchaseRecord(Bits *p, u32 arg);
#endif
#ifndef PROTO_LOCAL_Shop_OnPurchaseAck
u32 Shop_OnPurchaseAck(void);
#endif
#ifndef PROTO_LOCAL_NookShop_PickFlowerBag
void NookShop_PickFlowerBag(u16 *p);
#endif
#ifndef PROTO_LOCAL_NookShop_IsOpenHour
BOOL NookShop_IsOpenHour(void);
#endif
}
#endif

#endif

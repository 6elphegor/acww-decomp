#include "types.h"
#include "game/Unk_020aebbc.h"
#include "game/Unk_021c47c4.h"
#include "game/Unk_020aec00.h"
#include "game/ShopAckCounter.h"
#include "item/ShopAckCounter.h"


struct Elem2a { Elem2a(); u16 d; };
struct Elem2b { Elem2b(); ~Elem2b(); u16 d; };
struct NookShop { u32 vt; Elem2b e[0x25]; NookShop(); };

struct Str { Str(const u16 *s); ~Str(); u8 d[0x24]; };
struct Obj30 { Obj30(); ~Obj30(); u8 d[0x30]; };
struct Obj12 { Obj12(u32 a, u32 b); ~Obj12(); u32 d[3]; };
struct Big { Big(); ~Big(); u8 d[0xf4]; };


extern "C" {
void *func_021355f0(void *p, s32 n, s32 size, void *ctor);
}

extern "C" {
void NookShop_ClearStock(void *p);
}

extern "C" {
u8 *NookShop_GetRenovation(void *p);
}

extern "C" {
u8 *NookShop_GetLevel(void *p);
}

extern "C" {
s32 Bbs_PostMsgToday(u8 *a, const void *b);
}

extern "C" {
void MailText_SetSlotMonth(s32 a, s32 b);
}

extern "C" {
void MailText_SetSlotDayOrdinal(s32 a, s32 b);
}

extern "C" {
void MailText_SetSlot(s32 a, void *b);
}

extern "C" {
u8 *Random_GlobalBelow(s32 a);
}

extern "C" {
BOOL func_02072e44(void *p);
}

extern "C" {
u32 Scene_GetCurrent();
}

extern "C" {
void *MapBlock_GetItemPtr(void *a, s32 b, s32 c, s32 d);
}

extern "C" {
BOOL Item_IsFurniture(void *p);
}

extern "C" {
u32 Item_GetFurnitureIndex(void *p);
}

extern "C" {
void *BlockMap_GetItemPtr(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
BOOL Item_IsFurnitureOrF031();
}

extern "C" {
BOOL Item_IsNormalItem(void *p);
}

extern "C" {
void BlockMap_SetItemAtUnit(void *a, void *b, s32 c, s32 d, s32 e);
}

extern "C" {
s32 Snd_PlaySe(s32 a);
}

extern "C" {
void Snd_VolumeOn();
}

extern "C" {
void Snd_VolumeOff();
}

extern "C" {
void *func_0223xxxx();
}

extern "C" {
void String_FormatNumber(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
void ItemPick_FillFromRange(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, const void *h, s32 i);
}

extern "C" {
void Item_ToPlacedForm(void *a, void *b, s32 c);
}

extern "C" {
void ItemPick_OneEx(void *a, s32 b, void *c, s32 d, const void *e, s32 f, s32 g, s32 h);
}

extern "C" {
s32 PM_GetLCDPower();
}

extern "C" {
s32 PM_SetLCDPower(s32 a);
}

extern "C" {
void PM_SetBackLight(s32 a, s32 b);
}

extern "C" {
void PM_GetBackLight(void *a, void *b);
}

extern "C" {
void *PlayerData_GetCurrent();
}

extern "C" {
void *func_020986c8(void *a);
}

extern "C" {
BOOL Catalog_HasItem(void *a, void *b);
}

extern "C" {
void Snowman_SendLetter(u32 a);
}

extern "C" {
void *FtrActorGrid_GetInstance();
}

extern "C" {
void *func_ov004_022355d8(void *a, s32 b, s32 c, s32 d);
}

extern "C" {
void *FtrActorTable_GetInstance();
}

extern "C" {
void func_ov004_02235740(void *a, void *b);
}

extern "C" {
void FtrMgr_RemoveActorByIndex();
}

extern "C" {
void Shop_RemoveSoldItemAt(s32 x, s32 y, u32 a, s32 b);
}

extern "C" {
u32 func_0209888c(void *a);
}

extern "C" {
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}

extern "C" {
void func_02065588(void *a, u32 b, s32 c);
}

extern "C" {
void LetterDelivery_QueueOutgoing(void *a, s32 b);
}

extern "C" {
void func_02065cd4(void *a);
}

extern "C" {
void func_02065cc8(void *a);
}

extern "C" {
s32 Snowball_TryPushAny(s32 a, s32 b, s32 c, s32 d, s32 e);
}

extern "C" {
BOOL StockList_IsSold(u32 i, u32 n, u8 *bits);
}

extern "C" {
u16 *StockList_GetItem(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out);
}

extern "C" {
BOOL LidSleep_TestFlag(s32 m);
}

extern "C" {
void LidSleep_ClearFlag(s32 m);
}

extern "C" {
void LidSleep_SetFlag(s32 m);
}

extern "C" {
void LidSleep_BacklightOff();
}

extern "C" {
void LidSleep_BacklightRestore();
}

extern "C" {
void LidSleep_WakeLcd();
}

extern "C" {
void ShopAckCounter_Clear(Counter *p);
}

extern "C" {
BOOL ShopAckCounter_IsDone(Counter *p);
}

extern "C" {
extern u8 data_021ed104[];
}

extern "C" {
extern u8 data_020e2e9c[];
}

extern "C" {
extern u8 data_020e2ea8[];
}

extern "C" {
extern u8 gCommManager[];
}

extern "C" {
extern u8 sShopAckCounter[];
}

extern "C" {
extern u16 sStockNoItem;
}

extern "C" {
extern u16 sStockSoldOutItem;
}

extern "C" {
extern u8 sShopRandom[];
}

extern "C" {
u8 sLidSleepFlags;
}

extern "C" {
u8 sLidSleepState;
}

extern "C" {
u32 sLidSleepBacklightBottom;
}

extern "C" {
u32 sLidSleepBacklightTop;
}

extern "C" {
extern u8 gLooseSnowballs[];
}

extern "C" {
extern u8 gFieldSceneKind;
}

extern "C" {
extern Unk_021c47c4 *gSceneBlockMap;
}

extern "C" {
extern u16 sSnowmanPrizeItems[];
}

extern "C" {
extern u8 data_020e2ebc[], data_020e2ec0[], data_020e2eb8[];
}

extern "C" {
void func_02004b60(void *p);
}

extern "C" {
static inline BOOL R1(u16 *p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
}

extern "C" {
static inline BOOL R2(u16 *p, u32 lo, u32 hi) { if (*p >= lo && *p <= hi) return TRUE; return FALSE; }
}

extern "C" {
static inline BOOL InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
}

extern "C" {
static inline BOOL IsEq(u32 c, u32 v) { if (c >= v && c <= v) return TRUE; return FALSE; }
}

extern "C" {
static inline BOOL IsZ() { if (gFieldSceneKind == 0) return TRUE; return FALSE; }
}
// prototypes
extern "C" s32 Field_TryPushSnowball(s32 a, s32 b, s32 c, s32 d, s16 e);
extern "C" void LidSleep_Init();
extern "C" void LidSleep_Update();
extern "C" void LidSleep_KeepSoundOff();
extern "C" void LidSleep_BacklightOff();
extern "C" void LidSleep_BacklightRestore();
extern "C" void LidSleep_WakeLcd();
extern "C" BOOL LidSleep_TestFlag(s32 m);
extern "C" void LidSleep_SetFlag(s32 m);
extern "C" void LidSleep_ClearFlag(s32 m);


extern "C" s32 Field_TryPushSnowball(s32 a, s32 b, s32 c, s32 d, s16 e) {
    BOOL z = gFieldSceneKind == 0;
    if (z && d > 0) return Snowball_TryPushAny(a, b, c, d, e);
    return 0;
}

extern "C" void LidSleep_Init() {
    sLidSleepFlags = 0;
    sLidSleepState = 0;
}

extern "C" void LidSleep_Update() {
    switch (sLidSleepState) {
    case 0:
        if ((*(vu16 *)0x27fffa8 & 0x8000) >> 15) {
            sLidSleepState = 1;
            LidSleep_BacklightOff();
            PM_SetLCDPower(0);
            Snd_VolumeOff();
        }
        break;
    case 1:
        if (!((*(vu16 *)0x27fffa8 & 0x8000) >> 15)) {
            sLidSleepState = 2;
            LidSleep_BacklightRestore();
            LidSleep_WakeLcd();
        }
        break;
    case 2:
        LidSleep_WakeLcd();
        break;
    }
}

extern "C" void LidSleep_KeepSoundOff() { LidSleep_SetFlag(2); }

extern "C" void LidSleep_BacklightOff() {
    if (!LidSleep_TestFlag(1)) {
        PM_GetBackLight(&sLidSleepBacklightTop, &sLidSleepBacklightBottom);
        PM_SetBackLight(2, 0);
        LidSleep_SetFlag(1);
    }
}

extern "C" void LidSleep_BacklightRestore() {
    if (LidSleep_TestFlag(1)) {
        PM_SetBackLight(0, sLidSleepBacklightTop);
        PM_SetBackLight(1, sLidSleepBacklightBottom);
        LidSleep_ClearFlag(1);
    }
}

extern "C" void LidSleep_WakeLcd() {
    if (PM_GetLCDPower() == 1 || PM_SetLCDPower(1)) {
        if (!LidSleep_TestFlag(2)) Snd_VolumeOn();
        sLidSleepState = 0;
    }
}

extern "C" BOOL LidSleep_TestFlag(s32 m) {
    if (sLidSleepFlags & m) return TRUE;
    return FALSE;
}

extern "C" void LidSleep_SetFlag(s32 m) { sLidSleepFlags |= m; }

extern "C" void LidSleep_ClearFlag(s32 m) { sLidSleepFlags &= ~m; }

extern "C" {
struct Loc488 { u8 a; u8 pad; u16 b; };
}


// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_02033914.h"
#include "gfx/Unk_020ac0c4_Entry.h"
#include "gfx/Unk_020ac500_Tex.h"
#include "game/Unk_020aebbc.h"
#include "gfx/Unk_020d094c.h"
#include "game/Unk_021c47c4.h"
#include "gfx/Unk_021ede90.h"
#include "item/Unk_02062f94_Ret.h"
#include "game/Vec3.h"
#include "item/ItemId.h"
#include "item/ItemPickSpec.h"
#include "item/RandomSource.h"
#include "game/Unk_020aec00.h"
#include "game/ReddPassword.h"
#include "game/ShopAckCounter.h"
#include "item/Letter.h"
#include "gfx/ObjShadowBits.h"
#include "gfx/Unk_020ac2e8_V.h"
#include "gfx/SceneLightsCol.h"
#include "item/ShopPurchaseBits.h"
#include "item/ShopAckCounter.h"
#include "item/DateSeededRandomSource.h"
#include "game/Elem2a.h"
#include "gfx/Vec3Z.h"
struct MsgString25 {
    MsgString25();
    ~MsgString25();
    u8 d[0x30];
};


struct ItemName {
    ItemName(u16 *s);
    ~ItemName();
    u8 d[0x24];
};

// ======== types of unk_020abbcc.cpp ========









struct Mtx43 {
    s32 m[12];
};


class ObjShadowStrip {
public:
    void release(s32 heap);
    void draw(Vec3 *pos);
    BOOL build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    void func_020ac1e0();

    /* 0x00 */ Vec3 basePos;
    /* 0x0c */ s32 halfWidth;
    /* 0x10 */ s32 cullExtent;
    /* 0x14 */ u32 numRows;
    /* 0x18 */ s32 cachedZ;
    /* 0x1c */ s32 *rowDepths;
    /* 0x20 */ s32 texLeftS;
    /* 0x24 */ s32 texRightS;
    /* 0x28 */ s32 *rowTexT;
    /* 0x2c */ Vec3 *rowVertices;
    /* 0x30 */ Unk_020ac0c4_Entry *texture;
};




// ======== types of unk_020acf38.cpp ========

// ---- externs ----

class MsgString {  // base of ReddPasswordString
public:
    MsgString();
    virtual ~MsgString();
    void clear();
    u8 unk_04[0x30];
};

// ---- ReddPasswordString : MsgString ----
class ReddPasswordString : public MsgString {
public:
    ReddPasswordString();
    virtual ~ReddPasswordString();
    virtual u32 capacity();
    virtual void *data();
};


class ReddShop {
public:
    /* 0x00 */ ItemId arr[3];
    /* 0x08 */ ReddPassword s;
    /* 0x10 */ u16 tbl[3];

    ReddShop();
    ~ReddShop();
    void restock();
    ReddPassword *getPassword();
    void clearStock();
    void reset();
};

// ---- NookPoints group (u16 at +0) ----
struct NookPoints {
    u16 v;
};
// ======== types of unk_020ad818.cpp ========

// Two unrelated-looking classes share this range (no vtables found).
// Unk_020ad818: date/time-like slot object; 0xc..0xe = 3 date bytes, 0xf = flag, 0x10 = u16[6]
struct V8 { u8 b0, b1, b2, b3, b4, b5, b6, b7; };
struct B4 { u8 b[4]; };
struct E12 { u16 h; u8 pad[10]; };
struct G { u8 p0, p1, p2, p3; };
struct S1 { u8 pad[0xc]; u8 c, d, e, f; u16 arr[6]; };
// Unk_020adb70: text-entry object; 0x4 = u16 str[0x24], 0x52..0x55 = date bytes, 0x5a = flag bitfield
struct S { u8 pad0[4]; u16 str[0x24]; u8 pad1[6]; u8 f52, f53, f54, f55; u8 pad2[4]; u16 lo : 5; u16 cnt : 4; u16 kind : 2; u16 rest : 5; };
// ======== types of unk_020ae290.cpp ========

struct D {
    u8 a, b, c, d, e, f;
    u16 g;
};

struct Z {
    u16 v;
    Z();
};

struct Flags {
    u16 v : 5;
    u16 rest : 11;
};

struct S4 {
    u8 a, b, c, flag;
};

struct Obj {
    u32 timer;
    u16 items[0x25];
    u8 date[4];
    u8 date2[3];
    u8 pad;
    S4 s;
    Flags flags;
    u8 mask[5];
};
// ======== types of unk_020aebbc.cpp ========


struct NookShop { u32 vt; ItemId e[0x25]; NookShop(); };

extern const s32 sObjShadowCoordShift;
extern const u8 kNookCarpetCounts[4];
extern const u8 kNookPaintCounts[4];
extern const u8 kNookWallpaperCounts[4];
extern const u8 kNookStationeryCounts[4];
extern const u8 kNookToolCounts[4];
extern const u8 kNookFurnitureCounts[4];
extern const u8 kNookFlowerBagCounts[4];
extern const u8 kNookSaplingCounts[4];
extern const u8 kNookBottleCounts[4];
extern const u16 kNookMemberGiftItems[4];
extern const u16 kNookPointRankThresholds[6];
extern const u8 sReddStockOrders[6][3];
extern const u16 kNookFlowerBagItems[12];

// ======== unk_020aebbc.cpp ========
namespace n5 {
extern "C" {
void *__cxa_vec_cleanup(void *p, s32 n, s32 size, void *ctor);
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
BOOL _ZN11CommManager8isOnlineEv(void *p);
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
void *_ZN12FtrActorGrid8getActorEiii(void *a, s32 b, s32 c, s32 d);
}
extern "C" {
void *FtrActorTable_GetInstance();
}
extern "C" {
void _ZN13FtrActorTable7indexOfEPv(void *a, void *b);
}
extern "C" {
void FtrMgr_RemoveActorByIndex();
}
extern "C" {
void Shop_RemoveSoldItemAt(s32 x, s32 y, u32 a, s32 b);
}
extern "C" {
u32 _ZN10PlayerData11getPlayerIdEv(void *a);
}
extern "C" {
void Letter_ComposeFromMail(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}
extern "C" {
void _ZN10LetterView10setPresentEtj(void *a, u32 b, s32 c);
}
extern "C" {
void LetterDelivery_QueueOutgoing(void *a, s32 b);
}
extern "C" {
void _ZN6LetterC1Ev(void *a);
}
extern "C" {
void _ZN6LetterD1Ev(void *a);
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
extern u8 sLidSleepFlags;
}
extern "C" {
extern u8 sLidSleepState;
}
extern "C" {
extern u32 sLidSleepBacklightBottom;
}
extern "C" {
extern u32 sLidSleepBacklightTop;
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
void _ZN6ItemIdD1Ev(void *p);
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
extern "C" {
struct Loc488 { u8 a; u8 pad; u16 b; };
}

extern "C" void NookShop_Clear(Unk_020aebbc *p);

}
extern "C" ShopAckCounter::ShopAckCounter() {
    using namespace n5; ShopAckCounter_Clear((Counter *)this); }

namespace n5 {
}
extern "C" ShopAckCounter::~ShopAckCounter() {
    using namespace n5; ShopAckCounter_Clear((Counter *)this); }

namespace n5 {
extern "C" void ShopAckCounter_Clear(Counter *c) {
    c->needed = 0;
    c->received = 0;
}
extern "C" void ShopAckCounter_Start(Counter *c) {
    c->received = 0;
    u8 *p = *(u8 **)gCommManager;
    if (_ZN11CommManager8isOnlineEv(p)) c->needed = p[0x6c] - 1;
    else c->needed = 0;
}
extern "C" BOOL ShopAckCounter_IsDone(Counter *c) {
    if (c->received >= c->needed) return TRUE;
    return FALSE;
}
extern "C" void ShopAckCounter_Add(Counter *c) {
    if (c->received < c->needed) c->received++;
    ShopAckCounter_IsDone(c);
}
extern "C" void StockList_AddFromPickList(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        {
            ItemPickSpec o(r2, r3);
            ItemPick_OneEx((u8 *)buf + *pos * 2, n, &o, 0, sShopRandom, 0, 1, 0);
        }
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                Item_ToPlacedForm(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}
extern "C" void StockList_AddFromRange(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        ItemPick_FillFromRange((u8 *)buf + *pos * 2, n, r2, r3, 0, 0, 10, sShopRandom, 0);
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                Item_ToPlacedForm(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}
extern "C" void StockList_Clear(u16 *a, u8 *b, u32 n) {
    for (u32 i = 0; i < n; i++) a[i] = 0xfff1;
    u32 m = n / 8 + 1;
    for (u32 j = 0; j < m; j++) b[j] = 0;
}
extern "C" BOOL StockList_IsSold(u32 i, u32 n, u8 *bits) {
    if (i < n) {
        if ((bits[i >> 3] >> (i & 7)) & 1) return TRUE;
        return FALSE;
    }
    return TRUE;
}
extern "C" BOOL StockList_MarkSold(u32 i, u32 n, u8 *bits) {
    if (i < n && !StockList_IsSold(i, n, bits)) {
        bits[i >> 3] |= 1 << (i & 7);
        return TRUE;
    }
    return FALSE;
}
extern "C" u16 *StockList_GetItem(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out) {
    if (i < n) {
        u16 *p = arr + i;
        if (out) *out = *p;
        if (StockList_IsSold(i, n, bits)) return &sStockSoldOutItem;
        return p;
    }
    return &sStockNoItem;
}
extern "C" s32 StockList_FindItem(u16 *key, u16 *arr, u8 *bits, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u16 *p = StockList_GetItem(i, arr, bits, n, 0);
        BOOL eq;
        if (Item_IsFurniture(p)) eq = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(key);
        else eq = *p == *key;
        if (eq) {
            BOOL eq2;
            if (Item_IsFurniture(key)) eq2 = Item_GetFurnitureIndex(key) == Item_GetFurnitureIndex(&sStockSoldOutItem);
            else eq2 = *key == sStockSoldOutItem;
            if (!eq2) return i;
        }
    }
    return -1;
}
extern "C" void Shop_RemoveSoldItemAt(s32 x, s32 y, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != Scene_GetCurrent()) return;
    void *w = gSceneBlockMap;
    s32 bx = x >> 4;
    s32 by = y >> 4;
    void *o = BlockMap_GetItemPtr(w, bx, by, x - (bx << 4), y - (by << 4), 0);
    if (o == 0) return;
    if (Item_IsFurnitureOrF031()) {
        void *r = FtrActorGrid_GetInstance();
        void *t = _ZN12FtrActorGrid8getActorEiii(r, x, y, 0);
        if (t != 0) {
            _ZN13FtrActorTable7indexOfEPv(FtrActorTable_GetInstance(), t);
            FtrMgr_RemoveActorByIndex();
        }
        if (b != 0) Snd_PlaySe(0x2e);
    } else if (Item_IsNormalItem(o)) {
        u16 *pc = (u16 *)o;
        if (!R1(pc, 0x1000, 0x10ff)) {
            if (!R2(pc, 0x151f, 0x151f)) BlockMap_SetItemAtUnit(w, &sStockSoldOutItem, x, y, 0);
        }
        if (b != 0) Snd_PlaySe(0x2e);
    }
}
extern "C" void Shop_RemoveSoldItem(u16 *p, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != Scene_GetCurrent()) return;
    Unk_021c47c4 *s = gSceneBlockMap;
    if (s == 0) return;
    void *q; u32 k = 0;
    if (s->width > k && s->height > k && s->blocks != 0) q = (void *)s->blocks;
    else q = 0;
    if (q == 0) return;
    for (s32 y = 0; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            u16 *e = (u16 *)MapBlock_GetItemPtr(q, x, y, 0);
            if (e == 0) continue;
            BOOL eq;
            if (Item_IsFurniture(e)) eq = Item_GetFurnitureIndex(e) == Item_GetFurnitureIndex(p);
            else eq = *e == *p;
            if (eq) {
                Shop_RemoveSoldItemAt(x, y, a, b);
                return;
            }
        }
    }
}
extern "C" void NookShop_PostPointSpecialNotice(s32 a, s32 b) {
    MailText_SetSlotMonth(0, a);
    MailText_SetSlotDayOrdinal(1, b);
    Bbs_PostMsgToday(Random_GlobalBelow(2), "bbs_shopinfo");
}
extern "C" void NookShop_PostSaleNotice(s32 x) {
    MsgString25 o;
    s32 m = x % 12;
    m = (u8)m;
    String_FormatNumber(&o, m, 10, 0, 0, 0);
    MailText_SetSlot(2, &o);
    Bbs_PostMsgToday(Random_GlobalBelow(2) + 2, "bbs_shopinfo");
}
extern "C" void NookShop_PostSpecialItemNotice(u16 *s) {
    ItemName str(s);
    MailText_SetSlot(3, &str);
    Bbs_PostMsgToday(Random_GlobalBelow(2) + 4, "bbs_shopinfo");
}
extern "C" void NookShop_PostRenovationNotice(s32 a, s32 b) {
    MailText_SetSlotMonth(2, a);
    MailText_SetSlotDayOrdinal(3, b);
    Bbs_PostMsgToday(NookShop_GetLevel(data_021ed104), "bbs_raccoon");
}
extern "C" s32 NookShop_PostReopenNotice() {
    return Bbs_PostMsgToday(NookShop_GetLevel(data_021ed104) + 3, "bbs_raccoon");
}
extern "C" BOOL NookShop_GetReopenDateTime(Unk_020aec74_Out *out) {
    u8 *h = data_021ed104;
    if (NookShop_GetRenovation(h)[3] != 0) {
        out->year = NookShop_GetRenovation(h)[2];
        out->month = NookShop_GetRenovation(h)[1];
        out->day = NookShop_GetRenovation(h)[0];
        out->hour = 6;
        out->minute = 0;
        out->second = 0;
        out->unk_06 = 0;
        return TRUE;
    }
    return FALSE;
}
extern "C" BOOL Shop_IsPurchaseSynced() {
    if (_ZN11CommManager8isOnlineEv(*(void **)gCommManager)) {
        return ShopAckCounter_IsDone((Counter *)sShopAckCounter);
    }
    return TRUE;
}
}
extern "C" NookShop::NookShop() {
    using namespace n5; NookShop_Clear((Unk_020aebbc *)this); }

namespace n5 {
}
extern "C" Unk_020aec00::Unk_020aec00() {
    using namespace n5; __cxa_vec_cleanup(&e, 0x25, 2, (void *)_ZN6ItemIdD1Ev); }

namespace n5 {
extern "C" void NookShop_Clear(Unk_020aebbc *p) {
    NookShop_ClearStock(p);
    p->packedState.level = 0;
    p->sales = 0;
    p->packedState.saleHour = 0;
    p->stockStale = 1;
    p->renovationScheduled = 0;
}
}

// ======== unk_020ae290.cpp ========
namespace n4 {
extern "C" {
extern u8 data_021ed2d4[], gCommManager[], gSavePlayers[], sShopRandom[], data_021ee17c[], data_021ee180[],
    data_021ee20c[], gSaveData[], data_021ed104[];
}
extern "C" {
void MI_CpuCopy8(void*, void*, int);
}
extern "C" {
void AbleShop_UpdateDaily(void*);
}
extern "C" {
int NookShop_GetVisitState();
}
extern "C" {
void NookShop_SetVisitState(int);
}
extern "C" {
void Scene_GetRequestedScene();
}
extern "C" {
int SceneId_IsNookShop();
}
extern "C" {
int Scene_GetCurrent();
}
extern "C" {
void Clock_GetDateTime(D*);
}
extern "C" {
void DateTime_SubDays(D*, int);
}
extern "C" {
void DateTime_AddDays(D*, int);
}
extern "C" {
int DateTime_Compare(D*, D*, int);
}
extern "C" {
int _ZN11CommManager8isOnlineEv(int);
}
extern "C" {
void NookPoints_SendMemberLetters();
}
extern "C" {
int PlayerDataArray_CountUsed(void*);
}
extern "C" {
void* PlayerData_GetResident(void*, int);
}
extern "C" {
int _ZN10PlayerData6isUsedEv(void*);
}
extern "C" {
int _ZN12Unk_02097ff48testFlagEj(void*, int);
}
extern "C" {
int _ZN22DateSeededRandomSource6randomEj(void*, int);
}
extern "C" {
void NookShop_PostSaleNotice(u8);
}
extern "C" {
void NookShop_PostSpecialItemNotice(u16*);
}
extern "C" {
void NookShop_PostRenovationNotice(u8, u8);
}
extern "C" {
int Item_IsFurniture(u16*);
}
extern "C" {
Z ItemPick_One(ItemPickSpec, int, void*, int, int, int);
}
extern "C" {
int ItemList_GetTownClassRank(u16*, int);
}
extern "C" {
int NookShop_GetReopenDateTime(D*);
}
extern "C" {
void _ZN22DateSeededRandomSource4seedEhhh(void*, int, int, int);
}
extern "C" {
void NookShop_StockTools(Obj*, int*);
}
extern "C" {
void NookShop_StockFurniture(Obj*, int*);
}
extern "C" {
void NookShop_StockFlowerBags(Obj*, int*);
}
extern "C" {
void NookShop_StockSaplings(Obj*, int*);
}
extern "C" {
void NookShop_StockWallpaper(Obj*, int*);
}
extern "C" {
void NookShop_StockCarpets(Obj*, int*);
}
extern "C" {
void NookShop_StockStationery(Obj*, int*);
}
extern "C" {
void NookShop_StockPaint(Obj*, int*);
}
extern "C" {
void NookShop_StockBottle(Obj*, int*);
}
extern "C" {
void NookShop_StockMedicine(Obj*, int*);
}
extern "C" {
int NookShop_GetLevel(Obj*);
}
extern "C" {
void NookShop_RestockEnd(Obj*);
}
extern "C" {
void NookShop_UpdatePointSpecial(Obj*, D*);
}
extern "C" {
int _ZN8SaveData8testFlagEj(void*, int);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void*, int);
}
extern "C" {
int StockList_FindItem(int, u16*, u8*, int);
}
extern "C" {
u16* StockList_GetItem(int, u16*, u8*, int, u16*);
}
extern "C" {
int StockList_IsSold(int, int, u8*);
}
extern "C" {
int NookShop_Clear(int);
}
extern "C" {
void StockList_Clear(u16*, u8*, int);
}


static inline BOOL inRange(u16 v, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}extern "C" {
S4* NookShop_GetRenovation(Obj* self);
}
extern "C" {
void NookShop_ScheduleRenovation(Obj* self);
}
extern "C" {
u16* NookShop_GetItem(Obj* self, int idx, u16* p);
}
extern "C" {
int NookShop_IsSold(Obj* self, int idx);
}
extern "C" {
void NookShop_ClearStock(Obj* self);
}
extern "C" {
u32 NookShop_GetUpgradeSales(Obj* self, int mode);
}
extern "C" {
int NookShop_GetEarnedLevel(Obj* self);
}
extern "C" {
int NookShop_IsClosedOn(Obj* self, D* d);
}
extern "C" {
int NookShop_IsPointSpecialDay(Obj* self, D* d);
}
extern "C" {
int NookShop_IsClosedNextDay(Obj* self, D* d);
}
extern "C" {
void NookShop_NoteBuyer(Obj* self, int f);
}
extern "C" {
void NookShop_PostRenovationNotice(u8, u8);
}
extern "C" {
int NookShop_IsReopenDue(Obj* self, D* d);
}
extern "C" {
int NookShop_IsClosedTomorrow(Obj*);
}
extern "C" {
int NookShop_HasVisitorBought(void*);
}
extern "C" {
void NookShop_Restock(Obj* self, int a, int b, int c);
}
extern "C" {
int NookShop_IsStockStale(Obj* self, D* d);
}
extern "C" {
void NookShop_SetStockDate(Obj* self, D* d);
}
extern "C" {
static inline BOOL inRangeP(u16* p, u16 lo, u16 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
}
extern "C" {
struct Rgba {
    u8 a, b, c, d;
};
}


extern "C" BOOL NookShop_IsSaleTime(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    int v = self->flags.v;
    if (v != 0) {
        if (d.c >= v && d.c < 0x17) return TRUE;
        return FALSE;
    }
    return FALSE;
}
extern "C" int NookShop_IsPointSpecialDay(Obj* self, D* d) {
    if (_ZN8SaveData8testFlagEj(gSaveData, 5) != 0 && self->date2[2] == d->f && self->date2[1] == d->e &&
        self->date2[0] == d->d)
        return TRUE;
    return FALSE;
}
extern "C" int NookShop_IsPointSpecialToday(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    return NookShop_IsPointSpecialDay(self, &d);
}
extern "C" BOOL func_020aeac8(Obj* self) {
    int z = 0;
    u32 i;
    for (i = 0; i < 0x25; i++) {
        u16 v = 0xfff1;
        u16* p = NookShop_GetItem(self, i, &v);
        if (Item_IsFurniture(p) != 0 && ItemList_GetTownClassRank(p, z) == 4) return TRUE;
    }
    return FALSE;
}
extern "C" S4* NookShop_GetRenovation(Obj* self) {
    return &self->s;
}
extern "C" Rgba NookShop_GetClosedDate(Obj* self) {
    Rgba r;
    D d;
    r.d = 0;
    r.a = r.d;
    r.b = r.a;
    r.c = r.b;
    if (NookShop_GetRenovation(self)->flag != 0) {
        ((u32*)&d)[0] = 0;
        ((u32*)&d)[1] = 0;
        d.f = NookShop_GetRenovation(self)->c;
        d.e = NookShop_GetRenovation(self)->b;
        d.d = NookShop_GetRenovation(self)->a;
        d.c = 6;
        d.b = 0;
        d.a = 0;
        d.g = 0;
        DateTime_SubDays(&d, 1);
        r.c = d.f;
        r.b = d.e;
        r.a = d.d;
    }
    return r;
}
extern "C" int NookShop_IsReopenDue(Obj* self, D* d) {
    D t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    if (NookShop_GetReopenDateTime(&t) != 0) {
        if ((u32)(DateTime_Compare(&t, d, 0x3c) + 1) <= 1) return TRUE;
    }
    return FALSE;
}
extern "C" int NookShop_IsReopenDueNow(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    return NookShop_IsReopenDue(self, &d);
}
extern "C" int NookShop_IsClosedOn(Obj* self, D* d) {
    D t;
    if (NookShop_GetRenovation(self)->flag != 0) {
        ((u32*)&t)[0] = 0;
        ((u32*)&t)[1] = 0;
        t.f = NookShop_GetRenovation(self)->c;
        t.e = NookShop_GetRenovation(self)->b;
        t.d = NookShop_GetRenovation(self)->a;
        t.c = 6;
        t.b = 0;
        t.a = 0;
        t.g = 0;
        DateTime_SubDays(&t, 1);
        if (t.f == d->f && t.e == d->e && t.d == d->d) return TRUE;
        return FALSE;
    }
    return FALSE;
}
extern "C" int NookShop_IsClosedToday(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    return NookShop_IsClosedOn(self, &d);
}
extern "C" int NookShop_IsClosedNextDay(Obj* self, D* d) {
    DateTime_AddDays(d, 1);
    return NookShop_IsClosedOn(self, d);
}
extern "C" int NookShop_IsClosedTomorrow(Obj* self) {
    D d;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    return NookShop_IsClosedNextDay(self, &d);
}
extern "C" u32 NookShop_GetUpgradeSales(Obj* self, int mode) {
    switch (mode) {
    case 0: return 0x61a8;
    case 1: return 0x15f90;
    case 2: return 0x3a980;
    default: return 0x3a980;
    }
}
extern "C" int NookShop_GetEarnedLevel(Obj* self) {
    int t = NookShop_GetLevel(self);
    if (t == 3) return t;
    if (self->timer >= NookShop_GetUpgradeSales(self, t)) {
        int r = NookShop_HasVisitorBought(data_021ed104);
        if (t == 2) {
            if (r != 0) return t + 1;
        } else {
            return t + 1;
        }
    }
    return NookShop_GetLevel(self);
}
extern "C" int NookShop_InitNew(int a) {
    return NookShop_Clear(a);
}
extern "C" void NookShop_ClearStock(Obj* self) {
    StockList_Clear(self->items, self->mask, 0x25);
}
extern "C" int NookShop_IsSold(Obj* self, int idx) {
    return StockList_IsSold(idx, 0x25, self->mask);
}
extern "C" u16* NookShop_GetItem(Obj* self, int idx, u16* p) {
    return StockList_GetItem(idx, self->items, self->mask, 0x25, p);
}
extern "C" int NookShop_FindItem(Obj* self, int arg) {
    return StockList_FindItem(arg, self->items, self->mask, 0x25);
}
extern "C" void NookShop_ScheduleRenovation(Obj* self) {
    D d;
    D t;
    int r4 = NookShop_GetEarnedLevel(self);
    if (_ZN11CommManager8isOnlineEv(*(int*)gCommManager) != 0) return;
    if (NookShop_GetLevel(self) >= r4) return;
    if (NookShop_GetRenovation(self)->flag != 0) return;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    DateTime_AddDays(&d, 2);
    MI_CpuCopy8(&d, &t, 8);
    DateTime_SubDays(&t, 1);
    if (NookShop_IsPointSpecialDay(self, &t) != 0) DateTime_AddDays(&d, 1);
    NookShop_GetRenovation(self)->flag = 1;
    u8 u;
    u = d.f;
    NookShop_GetRenovation(self)->c = u;
    u = d.e;
    NookShop_GetRenovation(self)->b = u;
    u = d.d;
    NookShop_GetRenovation(self)->a = u;
    DateTime_SubDays(&d, 1);
    NookShop_PostRenovationNotice(d.e, d.d);
}
extern "C" void NookShop_AddSales(Obj* self, int add, int arg) {
    u32 lim = NookShop_GetUpgradeSales(self, NookShop_GetLevel(self));
    self->timer += add;
    if (self->timer > lim) self->timer = lim;
    NookShop_NoteBuyer(self, arg);
    NookShop_ScheduleRenovation(self);
}
extern "C" BOOL NookShop_SellSlot(Obj* self, u32 idx, int add, int arg) {
    if (idx < 0x25) {
        u32 lim = NookShop_GetUpgradeSales(self, NookShop_GetLevel(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        if (NookShop_IsSold(self, idx) == 0) {
            u32 byte = idx >> 3;
            u32 bit = idx & 7;
            if (!inRangeP(NookShop_GetItem(self, idx, 0), 0x1000, 0x10ff)) {
                if (!inRangeP(NookShop_GetItem(self, idx, 0), 0x151f, 0x151f)) {
                    self->mask[byte] |= 1 << bit;
                }
            }
        }
        NookShop_NoteBuyer(self, arg);
        NookShop_ScheduleRenovation(self);
        return TRUE;
    } else {
        u32 lim = NookShop_GetUpgradeSales(self, NookShop_GetLevel(self));
        self->timer += add;
        if (self->timer > lim) self->timer = lim;
        NookShop_NoteBuyer(self, arg);
        NookShop_ScheduleRenovation(self);
        return FALSE;
    }
}
extern "C" void NookShop_NoteBuyer(Obj* self, int flag) {
    if (flag == 0) _ZN8SaveData7setFlagEj(gSaveData, 7);
}
extern "C" int NookShop_HasVisitorBought(void*) {
    return _ZN8SaveData8testFlagEj(gSaveData, 7);
}
}
u32 data_020e2e34 = 3;
DateSeededRandomSource sShopRandom;
const u8 kNookSaplingCounts[4] = {0, 1, 2, 3};
namespace n4 {
extern "C" void NookShop_UpdateDaily(Obj* self, int force) {
    int fresh;
    D d;
    int ok;
    int i;
    int n;
    void* p;

    AbleShop_UpdateDaily(data_021ed2d4);
    if (NookShop_GetVisitState() == 1) {
        NookShop_SetVisitState(2);
        return;
    }
    Scene_GetRequestedScene();
    if (SceneId_IsNookShop() == 0) {
        int r = Scene_GetCurrent();
        if (r == 0x2c) return;
        if (r == 0x3f) return;
    }
    fresh = 1;
    ((u32*)&d)[0] = 0;
    ((u32*)&d)[1] = 0;
    Clock_GetDateTime(&d);
    if (d.c < 6) {
        DateTime_SubDays(&d, fresh);
        fresh = 0;
    }
    if (force == 0 && NookShop_IsStockStale(self, &d) == 0) return;
    self->flags.v = 0;
    if (_ZN11CommManager8isOnlineEv(*(int*)gCommManager) != 0) return;
    NookPoints_SendMemberLetters();
    NookShop_SetStockDate(self, &d);
    NookShop_Restock(self, d.f, d.e, d.d);
    ok = 1;
    int cnt = PlayerDataArray_CountUsed(gSavePlayers);
    if (cnt != 0 && cnt != 1) {
        for (i = 0; i < 4; i++) {
            p = PlayerData_GetResident(gSavePlayers, i);
            if (p != 0 && _ZN10PlayerData6isUsedEv(p) != 0 && _ZN12Unk_02097ff48testFlagEj(p, 1) == 0) {
                ok = 0;
                break;
            }
        }
    }
    if (ok == 0 && NookShop_GetRenovation(self)->flag == 0) {
        NookShop_UpdatePointSpecial(self, &d);
        if (_ZN22DateSeededRandomSource6randomEj(sShopRandom, 0xe) == 0) {
            self->flags.v = (u8)(_ZN22DateSeededRandomSource6randomEj(sShopRandom, 4) + 0x11);
            if (fresh != 0) NookShop_PostSaleNotice(self->flags.v);
        }
        if (self->flags.v == 0 && NookShop_IsPointSpecialDay(self, &d) == 0) {
            static ItemPickSpec sx(0, 4);
            if (_ZN22DateSeededRandomSource6randomEj(sShopRandom, 5) == 0) {
                for (i = 0; (u32)i < 0x25; i++) {
                    u16* q = &self->items[i];
                    if (Item_IsFurniture(q) != 0) {
                        *q = ItemPick_One(sx, 0, sShopRandom, 0, 1, 0).v;
                        if (fresh != 0) NookShop_PostSpecialItemNotice(q);
                        break;
                    }
                }
            }
        }
    }
    if (d.e == 0xc) {
        u8 v = d.d;
        int t = 0x2e;
        if (v >= 0xa && v <= 0x18)
            t = 0x2b;
        else if (v >= 0x1a && v <= 0x1f)
            t = 0x2c;
        if (t == 0x2e) return;
        n = 0;
        for (i = 0; (u32)i < 0x25; i++) {
            u16* q = &self->items[i];
            if (Item_IsFurniture(q) != 0) {
                if (n == 1) {
                    ItemPickSpec tmp(0, t);
                    *q = ItemPick_One(tmp, 0, sShopRandom, 0, 1, 0).v;
                    break;
                }
                n++;
            }
        }
    }
}
extern "C" void NookShop_Restock(Obj* self, int a, int b, int c) {
    int z;
    NookShop_ClearStock(self);
    z = 0;
    _ZN22DateSeededRandomSource4seedEhhh(sShopRandom, a, b, c);
    NookShop_StockTools(self, &z);
    NookShop_StockFurniture(self, &z);
    NookShop_StockFlowerBags(self, &z);
    NookShop_StockSaplings(self, &z);
    NookShop_StockWallpaper(self, &z);
    NookShop_StockCarpets(self, &z);
    NookShop_StockStationery(self, &z);
    NookShop_StockPaint(self, &z);
    NookShop_StockBottle(self, &z);
    NookShop_StockMedicine(self, &z);
    NookShop_RestockEnd(self);
}
extern "C" int NookShop_IsStockStale(Obj* self, D* d) {
    D t;
    MI_CpuCopy8(d, &t, 8);
    if (self->date[2] != t.f || self->date[1] != t.e || self->date[0] != t.d || self->date[3] != 0) return TRUE;
    return FALSE;
}
extern "C" void NookShop_SetStockDate(Obj* self, D* d) {
    D t;
    MI_CpuCopy8(d, &t, 8);
    self->date[2] = t.f;
    self->date[1] = t.e;
    self->date[0] = t.d;
    self->date[3] = 0;
}
extern "C" BOOL NookShop_IsBlockingEvent(int x) {
    if (x < 0x1c) return TRUE;
    return FALSE;
}
}

// ======== unk_020ad818.cpp ========
namespace n3 {
extern "C" {
extern u8 kNookBottleCounts[], kNookPaintCounts[], kNookStationeryCounts[], kNookCarpetCounts[], kNookWallpaperCounts[], kNookSaplingCounts[], kNookFlowerBagCounts[], kNookFurnitureCounts[], kNookToolCounts[];
}
extern "C" {
extern u16 kNookFlowerBagItems[];
}
extern "C" {
extern u8 data_021ed104[];
}
extern "C" {
extern u8 sShopRandom[];
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u32 gCommManager;
}
extern "C" {
void _ZN6ItemIdD1Ev(void*);
}
extern "C" {
void _ZN6ItemIdC1Ev(void*);
}
extern "C" {
void __cxa_vec_cleanup(void*, u32, u32, void (*)(void*));
}
extern "C" {
void __cxa_vec_ctor(void*, u32, u32, void (*)(void*), void (*)(void*));
}
extern "C" {
void MI_CpuCopy8(const void*, void*, u32);
}
extern "C" {
u32 StockList_MarkSold(u32, u32, void*);
}
extern "C" {
void StockList_FindItem(u32, void*, void*, u32);
}
extern "C" {
u16* StockList_GetItem(u32, void*, void*, u32, u32);
}
extern "C" {
void StockList_Clear(void*, void*, u32);
}
extern "C" {
void StockList_AddFromRange(void*, void*, u32, u32, u32, u32, u32);
}
extern "C" {
void StockList_AddFromPickList(void*, void*, u32, u32, u32, u32, u32);
}
extern "C" {
void Clock_GetDateTime(V8*);
}
extern "C" {
void DateTime_SubDays(V8*, u32);
}
extern "C" {
u32 _ZN11CommManager8isOnlineEv(u32);
}
extern "C" {
void _ZN22DateSeededRandomSource4seedEhhh(void*, u32, u32, u32);
}
extern "C" {
u32 Item_IsFurniture(void);
}
extern "C" {
u32 Item_GetFurnitureIndex(u16*);
}
extern "C" {
u32 Random_GlobalBelow(u32);
}
extern "C" {
void AbleShop_RestockEnd(S1*);
}
extern "C" {
void AbleShop_StockAccessory(S1*, u32*);
}
extern "C" {
void AbleShop_StockHeadwear(S1*, u32*);
}
extern "C" {
u32 NookShop_GetVisitState(void);
}
extern "C" {
u32 NookShop_IsReopenDueNow(void*);
}
extern "C" {
u32 NookShop_GetEarnedLevel(void*);
}
extern "C" {
void* TownBlockMap_Get(u32);
}
extern "C" {
void* BlockMap_FindBlockAnyAttr(void*, u32);
}
extern "C" {
u32 MapBlock_GetItemPtr(void*, u32, u32, u32);
}
extern "C" {
u32 Item_IsNookShop(void);
}
extern "C" {
u16 Item_MakeNookShop(u32);
}
extern "C" {
void MapBlock_SetItem(void*, void*, u32, u32, u32);
}
extern "C" {
u32 NookShop_GetReopenDateTime(void*);
}
extern "C" {
void NookShop_PostReopenNotice(void);
}
extern "C" {
G* NookShop_GetRenovation(void*);
}
extern "C" {
void NookShop_UpdateDaily(void*, u32);
}
extern "C" {
s32 _ZN22DateSeededRandomSource6randomEj(void*, u32);
}
extern "C" {
BOOL _ZN8SaveData8testFlagEj(void*, u32);
}
extern "C" {
void Clock_GetDate(B4*);
}
extern "C" {
s32 Date_DaysBetween(B4*, u8*);
}
extern "C" {
void _ZN8SaveData9clearFlagEj(void*, u32);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void*, u32);
}
extern "C" {
s32 Date_GetWeekday(u32, u32, u32);
}
extern "C" {
void DateTime_AddDays(V8*, s32);
}
extern "C" {
s32 EventSchedule_CollectDayAll(E12*, V8*);
}
extern "C" {
BOOL NookShop_IsBlockingEvent(u16);
}
extern "C" {
s32 DateTime_Compare(V8*, V8*, u32);
}
extern "C" {
void NookShop_PostPointSpecialNotice(u32, u32);
}
extern "C" {
u32 NookShop_GetLevel(S*);
}
extern "C" {
void NookShop_SetLevel(S*, u32);
}
extern "C" {
u32 NookShop_GetToolCount(S*);
}
extern "C" {
u32 NookShop_GetFurnitureCount(S*);
}
extern "C" {
u32 NookShop_GetFlowerBagCount(S*);
}
extern "C" {
u32 NookShop_GetSaplingCount(S*);
}
extern "C" {
u32 NookShop_GetWallpaperCount(S*);
}
extern "C" {
u32 NookShop_GetCarpetCount(S*);
}
extern "C" {
u32 NookShop_GetStationeryCount(S*);
}
extern "C" {
u32 NookShop_GetPaintCount(S*);
}
extern "C" {
u32 NookShop_GetBottleCount(S*);
}
extern "C" {
u32 NookShop_GetMedicineCount(S*);
}
extern "C" {
void AbleShop_Clear(S1*);
}
extern "C" {
u32 AbleShop_MarkSold(S1*, u32);
}
extern "C" {
u16* AbleShop_GetItem(S1*, u32, u32);
}
extern "C" {
void AbleShop_SetStockDate(S1*, void*);
}
extern "C" {
u32 AbleShop_IsStockStale(S1*, void*);
}
extern "C" {
void AbleShop_Restock(S1*, u32, u32, u32);
}
extern "C" {
void AbleShop_StockUmbrella(S1*, u32*);
}
extern "C" {
void AbleShop_StockShirts(S1*, u32*);
}


extern "C" // mwcc emits functions in reverse order: highest address first.

void NookShop_UpdatePointSpecial(S *s, V8 *p) {
    V8 A;
    B4 B;
    V8 C, D, E, F, G, H, I;
    E12 arr1[7];
    E12 arr2[7];
    s32 mode;
    u8 d5;
    u8 e5;
    s32 n1;
    s32 n2;
    u8 d4;
    u8 d3;
    u8 e4;
    u8 e3;
    s32 k, i, cnt1, cnt2, r, r5;
    MI_CpuCopy8(p, &A, 8);
    mode = _ZN22DateSeededRandomSource6randomEj(sShopRandom, 2);
    if (_ZN8SaveData8testFlagEj(gSaveData, 5)) {
        Clock_GetDate(&B);
        r = Date_DaysBetween(&B, &s->f52);
        if (r >= 1) {
            _ZN8SaveData9clearFlagEj(gSaveData, 5);
        } else if (r <= -7) {
            _ZN8SaveData9clearFlagEj(gSaveData, 5);
        }
    }
    if (!_ZN8SaveData8testFlagEj(gSaveData, 5)) {
        MI_CpuCopy8(p, &C, 8);
        k = Date_GetWeekday(C.b5, C.b4, C.b3);
        if (k != 6 && k != 0) {
            r5 = 6 - k;
            if (r5 < 0) r5 = -r5;
            MI_CpuCopy8(&C, &D, 8);
            MI_CpuCopy8(&C, &E, 8);
            DateTime_AddDays(&D, r5);
            DateTime_AddDays(&E, r5 + 1);
            d4 = D.b4;
            d3 = D.b3;
            d5 = D.b5;
            e4 = E.b4;
            e3 = E.b3;
            e5 = E.b5;
            MI_CpuCopy8(&D, &H, 8);
            n1 = EventSchedule_CollectDayAll(arr1, &H);
            MI_CpuCopy8(&E, &I, 8);
            n2 = EventSchedule_CollectDayAll(arr2, &I);
            cnt1 = 0;
            cnt2 = 0;
            for (i = 0; i < n1; i++) {
                if (NookShop_IsBlockingEvent(arr1[i].h)) cnt1++;
            }
            for (i = 0; i < n2; i++) {
                if (NookShop_IsBlockingEvent(arr2[i].h)) cnt2++;
            }
            if (cnt1 == 0 && cnt2 == 0) {
                if (mode == 0) {
                    s->f54 = d5;
                    s->f53 = d4;
                    s->f52 = d3;
                    s->f55 = 0;
                } else {
                    s->f54 = e5;
                    s->f53 = e4;
                    s->f52 = e3;
                    s->f55 = 0;
                }
                _ZN8SaveData9clearFlagEj(gSaveData, 6);
                _ZN8SaveData7setFlagEj(gSaveData, 5);
            }
        }
    }
    if (_ZN8SaveData8testFlagEj(gSaveData, 5)) {
        ((u32*)&F)[0] = 0;
        ((u32*)&F)[1] = 0;
        F.b5 = s->f54;
        F.b4 = s->f53;
        F.b3 = s->f52;
        F.b2 = 6;
        F.b1 = 0;
        if (DateTime_Compare(&F, &A, 0x38) == -1) {
            _ZN8SaveData9clearFlagEj(gSaveData, 5);
        } else {
            MI_CpuCopy8(&F, &G, 8);
            DateTime_SubDays(&G, 4);
            if (DateTime_Compare(&G, &A, 0x38) == -1) {
                if (DateTime_Compare(&A, &F, 0x38) == -1) {
                    if (!_ZN8SaveData8testFlagEj(gSaveData, 6)) {
                        NookShop_PostPointSpecialNotice(s->f53, s->f52);
                        _ZN8SaveData7setFlagEj(gSaveData, 6);
                    }
                }
            }
        }
    }
}
extern "C" void NookShop_RestockEnd(S *s) {}
extern "C" u32 NookShop_GetLevel(S *s) { return s->kind & 3; }
extern "C" void NookShop_SetLevel(S *s, u32 v) { s->kind = (u16)(v & 3); }
extern "C" u32 NookShop_GetToolCount(S *s) { return kNookToolCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetFurnitureCount(S *s) { return kNookFurnitureCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetFlowerBagCount(S *s) { return kNookFlowerBagCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetSaplingCount(S *s) { return kNookSaplingCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetWallpaperCount(S *s) { return kNookWallpaperCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetCarpetCount(S *s) { return kNookCarpetCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetStationeryCount(S *s) { return kNookStationeryCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetPaintCount(S *s) { return kNookPaintCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetBottleCount(S *s) { return kNookBottleCounts[NookShop_GetLevel(s)]; }
extern "C" u32 NookShop_GetMedicineCount(S *s) { return 1; }
}
const u16 kNookMemberGiftItems[4] = {0x3860, 0x3864, 0x3868, 0x386c};
const u8 kNookFurnitureCounts[4] = {2, 3, 5, 8};
const u8 sReddStockOrders[6][3] = {{0, 1, 2}, {0, 2, 1}, {1, 2, 0}, {1, 0, 2}, {2, 0, 1}, {2, 1, 0}};
const u8 kNookCarpetCounts[4] = {1, 1, 2, 3};
u32 data_020e2e48 = 0x19;
const u8 kNookBottleCounts[4] = {1, 1, 1, 1};
const u16 kNookFlowerBagItems[12] = {0x14fe, 0x14ff, 0x1500, 0x1504, 0x1505, 0x1506, 0x150a, 0x150b, 0x150c, 0x1510, 0x1511, 0x1512};
const u8 kNookPaintCounts[4] = {0, 0, 0, 1};
s32 sNookShopVisitState;
const s32 sObjShadowCoordShift = 5;
namespace n3 {
extern "C" void NookShop_StockTools(S *s, s32 *p) {
    static ItemId tbl[7] = {ItemId(0x1369), ItemId(0x1378), ItemId(0x1376), ItemId(0x1374), ItemId(0x156c), ItemId(0x136b), ItemId(0x137a)};
    s32 t = (NookShop_GetLevel(s) == 0) ? ~2 : 0;
    u32 start = *p;
    u32 i;
    StockList_AddFromRange(s->str, p, 0, t + 7, NookShop_GetToolCount(s), 0x25, 0);
    if (NookShop_GetLevel(s) == 0) {
        u32 cnt = 0;
        u32 j = 0;
        S *base = (S*)((u16*)s + start);
        for (; j < NookShop_GetToolCount(s); j++) {
            u16 *q = &s->str[start + j];
            u32 m;
            if (Item_IsFurniture()) {
                u16 three = 3;
                u32 a = Item_GetFurnitureIndex(q);
                m = (a == Item_GetFurnitureIndex(&three)) ? 1 : 0;
            } else {
                m = (base->str[j] == 3) ? 1 : 0;
            }
            if (m) cnt++;
        }
        if (cnt == 0) {
            u16 *d = &s->str[start + Random_GlobalBelow(2)];
            *d = 3;
        }
    }
    S *base2;
    i = 0;
    base2 = (S*)((u16*)s + start);
    for (; i < NookShop_GetToolCount(s); i++) {
        base2->str[i] = tbl[base2->str[i]].id;
    }
}
extern "C" void NookShop_StockFurniture(S *s, void *p) {
    StockList_AddFromPickList(s->str, p, 0, 0, NookShop_GetFurnitureCount(s), 0x25, 0);
}
extern "C" void NookShop_StockFlowerBags(S *s, s32 *p) {
    u32 start = *p;
    u32 i;
    StockList_AddFromRange(s->str, p, 0, 0xc, NookShop_GetFlowerBagCount(s), 0x25, 0);
    for (i = start; i < start + NookShop_GetFlowerBagCount(s); i++) {
        s->str[i] = kNookFlowerBagItems[s->str[i]];
    }
}
extern "C" void NookShop_StockSaplings(S *s, void *p) {
    StockList_AddFromRange(s->str, p, 0x151d, 2, NookShop_GetSaplingCount(s), 0x25, 0);
}
extern "C" void NookShop_StockWallpaper(S *s, void *p) {
    StockList_AddFromPickList(s->str, p, 4, 0, NookShop_GetWallpaperCount(s), 0x25, 0);
}
extern "C" void NookShop_StockCarpets(S *s, void *p) {
    StockList_AddFromPickList(s->str, p, 3, 0, NookShop_GetCarpetCount(s), 0x25, 0);
}
extern "C" void NookShop_StockStationery(S *s, void *p) {
    StockList_AddFromPickList(s->str, p, 1, 0, NookShop_GetStationeryCount(s), 0x25, 0);
}
extern "C" void NookShop_StockPaint(S *s, s32 *p) {
    u32 i;
    for (i = 0; i < NookShop_GetPaintCount(s); i++) {
        u32 c = s->cnt & 0xf;
        u16 v;
        if (c < 16) v = 0x1521 + c; else v = 0x1521;
        s->str[(*p)++] = v;
        s->cnt++;
    }
}
extern "C" void NookShop_StockBottle(S *s, void *p) {
    StockList_AddFromRange(s->str, p, 0x151f, 1, NookShop_GetBottleCount(s), 0x25, 0);
}
extern "C" void NookShop_StockMedicine(S *s, void *p) {
    StockList_AddFromRange(s->str, p, 0x155e, 1, NookShop_GetMedicineCount(s), 0x25, 0);
}
extern "C" u32 NookShop_ApplyRenovation(void) {
    u32 r6;
    void *r7;
    u32 y, x;
    if (NookShop_GetVisitState() == 1) return 0;
    if (NookShop_IsReopenDueNow(data_021ed104)) {
        r6 = NookShop_GetEarnedLevel(data_021ed104);
        void *t = TownBlockMap_Get(r6);
        if (t) {
            r7 = BlockMap_FindBlockAnyAttr(t, 2);
            if (r7) {
                for (y = 0; y < 16; y++) {
                    for (x = 0; x < 16; x++) {
                        if (MapBlock_GetItemPtr(r7, x, y, 0) && Item_IsNookShop()) {
                            u16 name;
                            u32 a[2];
                            V8 b;
                            name = Item_MakeNookShop(r6);
                            MapBlock_SetItem(r7, &name, x, y, 0);
                            NookShop_SetLevel((S*)data_021ed104, r6);
                            a[0] = 0; a[1] = 0;
                            if (NookShop_GetReopenDateTime(a)) {
                                ((u32*)&b)[0] = 0; ((u32*)&b)[1] = 0;
                                Clock_GetDateTime(&b);
                                if (b.b5 == ((V8*)a)->b5 && b.b4 == ((V8*)a)->b4 && b.b3 == ((V8*)a)->b3) NookShop_PostReopenNotice();
                            }
                            NookShop_GetRenovation(data_021ed104)->p3 = 0;
                            NookShop_UpdateDaily(data_021ed104, 1);
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
extern "C" void* AbleShop_Construct(void *p) {
    __cxa_vec_ctor(p, 6, 2, _ZN6ItemIdC1Ev, _ZN6ItemIdD1Ev);
    return p;
}
extern "C" void* AbleShop_Destruct(void *p) {
    __cxa_vec_cleanup(p, 6, 2, _ZN6ItemIdD1Ev);
    return p;
}
extern "C" void AbleShop_Clear(S1 *s) {
    StockList_Clear(s, s->arr, 6);
    s->f = 1;
}
extern "C" void AbleShop_Reset(S1 *s) { AbleShop_Clear(s); }
extern "C" void AbleShop_InitNew() {}
extern "C" void AbleShop_UpdateDaily(S1 *s) {
    V8 t;
    ((u32*)&t)[0] = 0;
    ((u32*)&t)[1] = 0;
    Clock_GetDateTime(&t);
    if (t.b2 < 6) DateTime_SubDays(&t, 1);
    if (!_ZN11CommManager8isOnlineEv(gCommManager) && AbleShop_IsStockStale(s, &t)) {
        AbleShop_Restock(s, t.b5, t.b4, t.b3);
        AbleShop_SetStockDate(s, &t);
    }
}
extern "C" void AbleShop_Restock(S1 *s, u32 a, u32 b, u32 c) {
    u32 x;
    AbleShop_Clear(s);
    _ZN22DateSeededRandomSource4seedEhhh(&sShopRandom, a, b, c);
    x = 0;
    AbleShop_StockUmbrella(s, &x);
    AbleShop_StockShirts(s, &x);
    AbleShop_StockHeadwear(s, &x);
    AbleShop_StockAccessory(s, &x);
    AbleShop_RestockEnd(s);
}
extern "C" u32 AbleShop_IsStockStale(S1 *s, void *p) {
    V8 buf;
    MI_CpuCopy8(p, &buf, 8);
    if (s->e != buf.b5 || s->d != buf.b4 || s->c != buf.b3 || s->f != 0) return 1;
    return 0;
}
extern "C" void AbleShop_SetStockDate(S1 *s, void *p) {
    V8 buf;
    MI_CpuCopy8(p, &buf, 8);
    s->e = buf.b5;
    s->d = buf.b4;
    s->c = buf.b3;
    s->f = 0;
}
extern "C" u16* AbleShop_GetItem(S1 *s, u32 a, u32 c) {
    return StockList_GetItem(a, s, s->arr, 6, c);
}
extern "C" void AbleShop_FindItem(S1 *s, u32 a) {
    StockList_FindItem(a, s, s->arr, 6);
}
extern "C" u32 AbleShop_MarkSold(S1 *s, u32 a) {
    return StockList_MarkSold(a, 6, s->arr);
}
extern "C" u32 AbleShop_MarkSoldItem(S1 *s, u16 *key) {
    u32 i;
    for (i = 0; i < 6; i++) {
        u16 *p = AbleShop_GetItem(s, i, 0);
        BOOL m;
        if (Item_IsFurniture()) {
            m = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(key)) ? TRUE : FALSE;
        } else {
            m = (*p == *key) ? TRUE : FALSE;
        }
        if (m) {
            return AbleShop_MarkSold(s, i);
        }
    }
    return 0;
}
extern "C" void AbleShop_StockUmbrella(S1 *a, u32 *b) {
    StockList_AddFromPickList(a, b, 7, 0x1d, 1, 6, 1);
}
extern "C" void AbleShop_StockShirts(S1 *a, u32 *b) {
    StockList_AddFromPickList(a, b, 2, 0, 3, 6, 1);
}
}

// ======== unk_020acf38.cpp ========
namespace n2 {
extern "C" {
u32 FengShui_GetTotal();
}
extern "C" {
s32 FengShui_GetEastTotal();
}
extern "C" {
s32 FengShui_GetSouthTotal();
}
extern "C" {
u32 Random_GlobalBelow(u32 n);
}
extern "C" {
Unk_02062f94_Ret ItemPick_One(ItemPickSpec *q, u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
u32 _ZN22DateSeededRandomSource6randomEj(void *p, u32 v);
}
extern "C" {
u32 ItemInfo_GetFullHeadwearClass1dCount();
}
extern "C" {
u32 ItemInfo_GetHatClass1dCount();
}
extern "C" {
void StockList_Clear(void *a, void *b, u32 n);
}
extern "C" {
void StockList_AddFromPickList(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g);
}
extern "C" {
void ReddLastSale_Clear(void *p);
}
extern "C" {
void _ZN8SaveData9clearFlagEj(void *p, u32 n);
}
extern "C" {
void _ZN8SaveData7setFlagEj(void *p, u32 n);
}
extern "C" {
u32 _ZN8SaveData8testFlagEj(void *p, u32 n);
}
extern "C" {
void *PlayerData_GetCurrent();
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
u32 _ZN6TownId15getTownRelationEv(void *p);
}
extern "C" {
u32 _ZN11CommManager8isOnlineEv(u32 v);
}
extern "C" {
void MailText_SetSlot(u32 a, void *b);
}
extern "C" {
void *PlayerData_GetResident(void *p, u32 i);
}
extern "C" {
u32 _ZN10PlayerData6isUsedEv();
}
extern "C" {
u32 _ZN12Unk_02097ff48testFlagEj(void *p, u32 n);
}
extern "C" {
u32 PlayerDataArray_FindById(void *p, void *q);
}
extern "C" {
void Letter_ComposeFromMail(Letter *c, u8 *a, const char *s, const u32 *p, const u32 *q, void *r);
}
extern "C" {
u32 LetterDelivery_PutInAddresseeMailbox(Letter *c);
}
extern "C" {
void LetterDelivery_QueueOutgoing(Letter *c, u32 i);
}
extern "C" {
u32 String_LoadResolveAltText(void *w, u8 *b, const char *s);
}
extern "C" {
u32 TownBlockMap_Get();
}
extern "C" {
u32 BlockMap_FindBlockAnyAttr(u32 a, u32 b);
}
extern "C" {
void func_02135558x();
}
extern "C" {
u32 MapBlock_FindItemInRange(u32 a, void *b, void *c, void *d, void *e, u32 f);
}
extern "C" {
void Clock_GetDateTime(void *p);
}
extern "C" {
void func_02135558(void *a, void *b, void *c);
}
extern "C" {
void _ZN6ItemIdD1Ev();
}
extern "C" {
u32 Item_IsFurniture();
}
extern "C" {
u32 Item_GetFurnitureIndex(void *p);
}
extern "C" {
void *StockList_FindItem(u32 a, void *b, void *c, u32 d);
}
extern "C" {
void *StockList_GetItem(u32 a, void *b, void *c, u32 d, u32 e);
}
extern "C" {
u32 StockList_MarkSold(u32 a, u32 b, void *c);
}
extern "C" {
extern u8 sReddVisitorKnowsPassword;
}
extern "C" {
extern u8 gSaveData[];
}
extern "C" {
extern u8 gSavePlayers[];
}
extern "C" {
extern u8 data_021ed284[];
}
extern "C" {
extern u8 sShopRandom[];
}
extern "C" {
extern u32 gCommManager;
}
extern "C" {
extern const u32 data_020e2e44;
}
extern "C" {
extern const u32 data_020e2e48;
}
extern "C" {
extern const char data_020e2e80[];
}
extern "C" {
extern const char data_020e2e90[];
}
extern "C" {
extern u8 sReddStockOrders[][3];
}
extern "C" {
extern u32 data_021ee170;
}
extern "C" {
extern void *data_021ee188x;
}
extern "C" {
extern u16 data_021ee16c;
}
extern "C" {
extern u8 data_021ee188[];
}


extern "C" { extern ReddShop data_021ed2c0; }
extern "C" {
void NookPoints_Clear(NookPoints *p);
}
extern "C" {
void NookPoints_Destruct(NookPoints *p);
}
extern "C" {
NookPoints *NookPoints_Construct(NookPoints *p);
}
extern "C" {
void NookPoints_Init(NookPoints *p);
}
extern "C" {
void NookPoints_Reset(NookPoints *p);
}

extern "C" void *ReddShop_GetItem(ReddShop *g, u32 a, u32 b);



extern "C" void AbleShop_StockHeadwear(void *a, void *b) {
    u32 x = ItemInfo_GetHatClass1dCount();
    u32 y = ItemInfo_GetFullHeadwearClass1dCount();
    if (_ZN22DateSeededRandomSource6randomEj(sShopRandom, x + y) < ItemInfo_GetHatClass1dCount()) {
        StockList_AddFromPickList(a, b, 6, 0x1d, 1, 6, 1);
    } else {
        StockList_AddFromPickList(a, b, 8, 0x1d, 1, 6, 1);
    }
}

extern "C" void AbleShop_StockAccessory(void *a, void *b) {
    StockList_AddFromPickList(a, b, 5, 0x1d, 1, 6, 1);
}

extern "C" void AbleShop_RestockEnd() {}}


ReddPasswordString::ReddPasswordString() {
    using namespace n2;
    clear();
}
namespace n2 {
}


ReddPasswordString::~ReddPasswordString() {
    using namespace n2;}
namespace n2 {
}


void *ReddPasswordString::data() {
    using namespace n2;
    return (u8 *)this + 0x12;
}
namespace n2 {
}


u32 ReddPasswordString::capacity() {
    using namespace n2;
    return 0x21;
}
namespace n2 {
}


ReddPassword::ReddPassword() {
    using namespace n2;
    clear();
}
namespace n2 {
}


ReddPassword::~ReddPassword() {
    using namespace n2;}
namespace n2 {
}


// ---- ReddPassword ----
void ReddPassword::clear() {
    using namespace n2;
    bits = 0;
    slot = -1;
    clearAllResidentKnows();
    _ZN8SaveData9clearFlagEj(gSaveData, 8);
}
namespace n2 {
}


BOOL ReddPassword::pickPassword() {
    using namespace n2;
    if (slot == -1) {
        u32 cnt = countUnused();
        if (cnt != 0) {
            u32 target = Random_GlobalBelow(cnt);
            u32 n = 0;
            u32 i;
            for (i = 0; i < 32; i++) {
                if (!isUsed(i)) {
                    if (target == n) {
                        slot = i;
                        markUsed(i);
                        ReddLastSale_Clear(data_021ed284);
                        data_021ed2c0.restock();
                        clearAllResidentKnows();
                        _ZN8SaveData9clearFlagEj(gSaveData, 8);
                        return TRUE;
                    }
                    n++;
                }
            }
        }
        return FALSE;
    }
    return TRUE;
}
namespace n2 {
}


BOOL ReddPassword::dropPassword() {
    using namespace n2;
    slot = -1;
    if (countUnused() == 0) {
        bits = 0;
    }
    clearAllResidentKnows();
    _ZN8SaveData9clearFlagEj(gSaveData, 8);
    return TRUE;
}
namespace n2 {
}


u32 ReddPassword::getPromptText(void *w) {
    using namespace n2;
    if (slot != -1) {
        u8 b = (slot & 0x1f) << 1;
        return String_LoadResolveAltText(w, &b, "st_password");
    }
    return 0;
}
namespace n2 {
}


u8 ReddPassword::getAnswerIndex() {
    using namespace n2;
    if (slot != -1) {
        return slot * 2 + 1;
    }
    return 0;
}
namespace n2 {
}


u32 ReddPassword::getAnswerText(void *w) {
    using namespace n2;
    if (slot != -1) {
        u8 b = ((slot & 0x1f) << 1) + 1;
        return String_LoadResolveAltText(w, &b, "st_password");
    }
    return 0;
}
namespace n2 {
}


BOOL ReddPassword::needsLetter() {
    using namespace n2;
    if (slot != -1) {
        if (_ZN8SaveData8testFlagEj(gSaveData, 8) == 0) {
            return TRUE;
        }
    }
    return FALSE;
}
namespace n2 {
}


void ReddPassword::markLetterSent() {
    using namespace n2;
    if (slot != -1) {
        _ZN8SaveData7setFlagEj(gSaveData, 8);
    }
}
namespace n2 {
}


void ReddPassword::clearAllResidentKnows() {
    using namespace n2;
    flags = 0;
}
namespace n2 {
}


BOOL ReddPassword::residentKnows(u32 i) {
    using namespace n2;
    if (slot != -1) {
        return ((flags >> (i & 3)) & 1) != 0;
    }
    return FALSE;
}
namespace n2 {
}


void ReddPassword::setResidentKnows(u32 i) {
    using namespace n2;
    if (slot != -1) {
        flags |= 1 << (i & 3);
    }
}
namespace n2 {
}


void ReddPassword::clearResidentKnows(u32 i) {
    using namespace n2;
    flags &= ~(1 << (i & 3));
}
namespace n2 {


extern "C" void ReddPassword_ForgetVisitor() {
    sReddVisitorKnowsPassword = 0;
}

extern "C" BOOL ReddPassword_VisitorKnows() {
    if (_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 1) {
        return sReddVisitorKnowsPassword;
    }
    return FALSE;
}}


BOOL ReddPassword::setVisitorKnows() {
    using namespace n2;
    if (slot != -1) {
        if (_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 1) {
            n2::sReddVisitorKnowsPassword = 1;
            return TRUE;
        }
    }
    return FALSE;
}
namespace n2 {
}


u32 ReddPassword::countUnused() {
    using namespace n2;
    u32 n = 0;
    u32 i;
    for (i = 0; i < 32; i++) {
        if (!isUsed(i)) {
            n++;
        }
    }
    return n;
}
namespace n2 {
}


BOOL ReddPassword::isUsed(u32 i) {
    using namespace n2;
    return (bits & (1 << (i & 0x1f))) != 0;
}
namespace n2 {
}


void ReddPassword::markUsed(u32 i) {
    using namespace n2;
    bits |= 1 << (i & 0x1f);
}
namespace n2 {
}


ReddShop::ReddShop() {
    using namespace n2;}
namespace n2 {
}


ReddShop::~ReddShop() {
    using namespace n2;}
namespace n2 {
}


void ReddShop::reset() {
    using namespace n2;
    clearStock();
    s.clear();
}
namespace n2 {
}


void ReddShop::clearStock() {
    using namespace n2;
    StockList_Clear(this, tbl, 3);
}
namespace n2 {


extern "C" void ReddShop_Reset(ReddShop *g) {
    g->reset();
}}


// ---- ReddShop ----
ReddPassword *ReddShop::getPassword() {
    using namespace n2;
    return &s;
}
namespace n2 {


}
u32 data_020e2e38 = 0x18;
const u8 kNookWallpaperCounts[4] = {1, 1, 2, 3};
u32 data_020e2e44 = 0xb;
u8 sReddVisitorKnowsPassword;
namespace n2 {
extern "C" BOOL ReddShop_IsTentOpen() {
    u32 v[4];
    u32 a = TownBlockMap_Get();
    if (a != 0) {
        u32 b = BlockMap_FindBlockAnyAttr(a, 0x200);
        if (b != 0) {
            static ItemId tmp(0x5012);
            if (MapBlock_FindItemInRange(b, &v[0], &v[1], &tmp, &tmp, 0) != 0) {
                v[2] = 0;
                v[3] = 0;
                Clock_GetDateTime(&v[2]);
                if (((u8 *)v)[0xa] >= 6) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" void ReddPassword_ForgetResident(u32 i) {
    data_021ed2c0.getPassword()->clearResidentKnows((u8)i);
}

extern "C" BOOL ReddPassword_CurrentPlayerKnows() {
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        void *q = _ZN10PlayerData11getPlayerIdEv(p);
        if (_ZN6TownId15getTownRelationEv(q) == 1) {
            return ReddPassword_VisitorKnows();
        }
        u8 v = PlayerDataArray_FindById(gSavePlayers, q) & 3;
        return data_021ed2c0.getPassword()->residentKnows(v);
    }
    return FALSE;
}

extern "C" BOOL ReddPassword_LearnCurrentPlayer() {
    void *p = PlayerData_GetCurrent();
    if (p != NULL) {
        void *q = _ZN10PlayerData11getPlayerIdEv(p);
        if (_ZN6TownId15getTownRelationEv(q) == 1) {
            return data_021ed2c0.getPassword()->setVisitorKnows();
        }
        u8 v = PlayerDataArray_FindById(gSavePlayers, q) & 3;
        data_021ed2c0.getPassword()->setResidentKnows(v);
        return TRUE;
    }
    return FALSE;
}

// ---- misc ----
extern "C" void ReddShop_SendPasswordLetters() {
    data_021ed2c0.getPassword()->pickPassword();
    if (data_021ed2c0.getPassword()->needsLetter()) {
        if (_ZN11CommManager8isOnlineEv(gCommManager) == 0) {
            Letter ctx;
            u8 r = Random_GlobalBelow(3);
            ReddPasswordString w;
            data_021ed2c0.getPassword()->getAnswerText(&w);
            MailText_SetSlot(2, &w);
            s32 i;
            for (i = 0; i < 4; i++) {
                void *p = PlayerData_GetResident(gSavePlayers, i);
                if (p != NULL && _ZN10PlayerData6isUsedEv() != 0 && _ZN12Unk_02097ff48testFlagEj(p, 12) != 0) {
                    Letter_ComposeFromMail(&ctx, &r, "sp_npc_foxmail", &data_020e2e44, &data_020e2e48, _ZN10PlayerData11getPlayerIdEv(p));
                    if (LetterDelivery_PutInAddresseeMailbox(&ctx) == 0) {
                        LetterDelivery_QueueOutgoing(&ctx, 0);
                    }
                }
            }
            data_021ed2c0.getPassword()->markLetterSent();
        }
    }
}}


void ReddShop::restock() {
    using namespace n2;
    u16 buf[3];
    u16 *p;
    u32 a, b;
    u32 i;
    clearStock();
    a = FengShui_GetTotal() / 10 + 0x32;
    if (Random_GlobalBelow(100) < a) {
        ItemPickSpec q(0, 0x26);
        arr[0].id = ItemPick_One(&q, 0, 0, 0, 1, 0).v;
    } else {
        ItemPickSpec q(0, 0x27);
        arr[0].id = ItemPick_One(&q, 0, 0, 0, 1, 0).v;
    }
    b = (FengShui_GetEastTotal() + FengShui_GetSouthTotal()) / 10 + 0x32;
    for (i = 1; i < 3; i++) {
        if (Random_GlobalBelow(100) < b) {
            ItemPickSpec q(0, 5);
            arr[i].id = ItemPick_One(&q, 0, 0, 0, 1, 0).v;
        } else {
            ItemPickSpec q(0, 0);
            arr[i].id = ItemPick_One(&q, 0, 0, 0, 1, 0).v;
        }
    }
    buf[0] = 0xfff1;
    buf[1] = 0xfff1;
    buf[2] = 0xfff1;
    for (i = 0; i < 3; i++) {
        buf[i] = arr[i].id;
    }
    u32 r = Random_GlobalBelow(6);
    for (i = 0; i < 3; i++) {
        arr[i].id = buf[n2::sReddStockOrders[r][i]];
    }
}
namespace n2 {


extern "C" u32 ReddShop_MarkSold(ReddShop *g, u32 a) {
    return StockList_MarkSold(a, 3, g->tbl);
}

extern "C" u32 ReddShop_MarkSoldItem(ReddShop *g, u16 *ptr) {
    u32 i;
    for (i = 0; i < 3; i++) {
        u16 *p = (u16 *)ReddShop_GetItem(g, i, 0);
        BOOL eq;
        if (Item_IsFurniture() != 0) {
            eq = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(ptr);
        } else {
            eq = *p == *ptr;
        }
        if (eq) {
            return ReddShop_MarkSold(g, i);
        }
    }
    return 0;
}

extern "C" void *ReddShop_GetItem(ReddShop *g, u32 a, u32 b) {
    return StockList_GetItem(a, g, g->tbl, 3, b);
}

extern "C" void ReddShop_FindItem(ReddShop *g, u32 a) {
    StockList_FindItem(a, g, g->tbl, 3);
}

extern "C" NookPoints *NookPoints_Create(NookPoints *p) {
    NookPoints_Construct(p);
    NookPoints_Init(p);
    return p;
}

extern "C" NookPoints *NookPoints_Destroy(NookPoints *p) {
    NookPoints_Destruct(p);
    return p;
}

extern "C" void NookPoints_Reset(NookPoints *p) {
    NookPoints_Clear(p);
}

extern "C" void NookPoints_Init(NookPoints *p) {
    NookPoints_Reset(p);
}

extern "C" void NookPoints_GetValuePtr(NookPoints *p) {}

extern "C" NookPoints *NookPoints_Construct(NookPoints *p) {
    NookPoints_Clear(p);
    return p;
}

extern "C" void NookPoints_Destruct(NookPoints *p) {}

extern "C" void NookPoints_Clear(NookPoints *p) {
    p->v = 0;
}
}
// ======== unk_020abbcc.cpp ========
namespace n1 {
extern "C" {
s32 FX_Div(s32 a, s32 b);
}
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
void NNS_G3dGeFlushBuffer(void);
}
extern "C" {
void G3_LoadMtx43(void *p);
}
extern "C" {
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
}
extern "C" {
u32 _s32_div_f(u32 a, u32 b);
}
extern "C" {
void *Heap_Alloc(s32 heap, u32 size);
}
extern "C" {
void Heap_Free(s32 heap, void *p);
}
extern "C" {
void func_02135558(void (*f)(), void *p);
}
extern "C" {
void NNS_G3dMdlSetMdlDiff(u32 a, u32 b, u32 c);
}
extern "C" {
void NNSi_G3dModifyMatFlag(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020e8388(void *m, s32 a, s32 b, s32 c);
}
extern "C" {
void func_020e8434(void *m, s32 a);
}
extern "C" {
void func_020e84f8(void *m, s32 a, s32 b, s32 c);
}
extern "C" {
void MTX_Concat43(void *a, void *b, void *c);
}
extern "C" {
void VEC_Normalize(void *a, void *b);
}
extern "C" {
s32 Ground_GetDefaultY(s32 a);
}
extern "C" {
void func_020339bc(Unk_02033914 *p, Vec3 *pos, s32 a, s32 b);
}
extern "C" {
s32 func_02033914(Unk_02033914 *p, s32 a);
}
extern "C" {
void GroundInfo_Destruct(Unk_02033914 *p);
}
extern "C" {
BOOL Scene_InMuseumRoom(void);
}
extern "C" {
s32 WorldCurve_ToCurved(Vec3 *out, Vec3 *in);
}
extern "C" {
void WorldCurve_Apply(Vec3 *out, Vec3 *in);
}
extern "C" {
void func_0205553c(void *a, Vec3 *scale);
}
extern "C" {
void func_02054b14(void *a);
}
extern "C" {
Col SceneLights_GetRoomColor(void);
}
extern "C" {
RGB SceneLights_GetFlashColor(void);
}
extern "C" {
s32 SceneLights_GetLightParam(s32 a);
}
extern "C" {
void Clock_GetMinuteHour(void *p);
}
extern "C" {
BOOL func_02054c88(void *a, void *b, s32 c);
}
extern "C" {
void func_02000c8c();
}
extern "C" {
extern u8 gFieldSceneKind;
}
extern "C" {
extern u32 sCharaShadowPolyId;
}
extern "C" {
extern u8 sCharaShadowAlpha;
}
extern "C" {
extern u8 sObjShadowAlpha;
}
extern "C" {
extern u32 sCharaShadowModelPath;
}
extern "C" {
extern s32 gCurrentHeap;
}
extern "C" {
extern s32 gBgHeap;
}
extern "C" {
extern u8 data_021f47e0[];
}
extern "C" {
extern u8 data_021edf04[];
}
extern "C" {
extern Unk_021ede90 *sCharaShadowMatData;
}
extern "C" {
extern u8 sCharaShadowModel[];
}
extern "C" {
extern s32 sObjShadowSkew;
}
extern "C" {
extern s32 sObjShadowCoordShift;
}
extern "C" {
extern Unk_020ac0c4_Entry sObjShadowTextures[];
}
extern "C" {
extern ObjShadowStrip sRockShadow, sSignShadow, sTreeShadowStage2, sTreeShadowStage3, sTreeShadowStage4;
}
extern "C" {
extern u32 data_021edf3c;
}
extern "C" {
extern Unk_020d094c sObjShadowTexDefs[];
}
extern "C" {
extern u8 sObjShadowTexPath[];
}
extern "C" {
extern u8 sObjShadowPlttNameFmt[];
}
extern "C" {
void *File_Load(void *p);
}
extern "C" {
u8 *NNS_G3dGetTex(void *p);
}
extern "C" {
void Gfx3d_LoadTexAndPltt(void *p, s32 a);
}
extern "C" {
u8 *Gfx3d_CopyTex(void *p, s32 heap);
}
extern "C" {
void Mem_Free(void *p);
}
extern "C" {
void func_020639e8(char *buf, const void *fmt, ...);
}
extern "C" {
u32 func_02057100(u8 *base, char *name);
}
extern "C" {
u32 func_02057078(u8 *base, char *name);
}
extern "C" {
extern u32 data_021edf40;
}
extern "C" {
extern s32 data_021edf48;
}
extern "C" {
extern s32 gCamera;
}
extern "C" {
extern Vec3 gCameraLookAt;
}
extern "C" {
extern u8 sObjShadowViewMtx[];
}
extern "C" {
extern u8 sObjShadowNormMtx[];
}
extern "C" {
extern u8 gViewMtx[];
}
extern "C" {
BOOL Scene_InTown(void);
}
extern "C" {
int NookShop_GetVisitState(void);
}
extern "C" {
void NookShop_SetVisitState(int v);
}
extern "C" {
void *_ZN11CommManager8isOnlineEv(void *h);
}
extern "C" {
void NookShop_ApplyRenovation(void);
}
extern "C" {
void NookShop_UpdateDaily(void *p, int v);
}
extern "C" {
u32 Random_GlobalBelow(u32 n);
}
extern "C" {
u32 ShopAckCounter_Add(void *p);
}
extern "C" {
void ShopAckCounter_Start(void *p);
}
extern "C" {
void Shop_RecordPurchase(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e);
}
extern "C" {
void ReddShop_RecordPurchase(u32 a, u32 b, u8 c, u32 d);
}
extern "C" {
BOOL SceneId_IsNookShop(u32 v);
}
extern "C" {
void _ZN11CommManager11beginRecordEv(void *h);
}
extern "C" {
void _ZN11CommManager11writeRecordEPhj(void *h, void *p, u32 n);
}
extern "C" {
void _ZN11CommManager9endRecordEjj(void *h, u32 a, u32 b);
}
extern "C" {
u32 Shop_IsPurchaseSynced(void);
}
extern "C" {
u32 _ZN18Unk_ov004_0223e9bc13callGetItemAtEv(u32 a, u32 b);
}
extern "C" {
u16 *ShopStock_GetItemAtTile(u32 a, u32 b);
}
extern "C" {
u16 *ShopStock_GetItemAt(void);
}
extern "C" {
u32 ReddShop_FindItem(void *p, u32 v);
}
extern "C" {
u32 AbleShop_FindItem(void *p, u16 *v);
}
extern "C" {
BOOL NookShop_CanTakeCatalogOrder(void);
}
extern "C" {
void Item_FromPlacedForm(void *a, void *b);
}
extern "C" {
void _ZN8ItemNameC1EPt(void *a, void *b);
}
extern "C" {
void MailText_SetSlot(u32 a, void *b);
}
extern "C" {
void _ZN6LetterC1Ev(void *p);
}
extern "C" {
void *PlayerData_GetCurrent(void);
}
extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
}
extern "C" {
u32 NookShop_GetLevel(void *p);
}
extern "C" {
void Letter_ComposeFromMail(void *o, void *a, const void *b, void *c, void *d, void *e);
}
extern "C" {
void _ZN10LetterView10setPresentEtj(void *o, u32 a, u32 b);
}
extern "C" {
u32 Item_GetMemberPrice(void *p);
}
extern "C" {
BOOL LetterDelivery_QueueOutgoing(void *o, int z);
}
extern "C" {
void NookShop_AddSales(void *p, u32 a, u32 b);
}
extern "C" {
void *_ZN10PlayerData13getNookPointsEv(void *p);
}
extern "C" {
u16 *NookPoints_GetValuePtr(void *p);
}
extern "C" {
void NookPoints_AddForPurchase(u16 *p, u32 v);
}
extern "C" {
void _ZN6LetterD1Ev(void *p);
}
extern "C" {
void _ZN8ItemNameD1Ev(void *p);
}
extern "C" {
BOOL LetterDelivery_HasFreeOutgoingSlot(void);
}
extern "C" {
u32 Scene_GetCurrent(void);
}
extern "C" {
u16 *NookShop_GetItem(void *p, u32 i, u16 *v);
}
extern "C" {
u32 NookShop_FindItem(void *p, u16 *v);
}
extern "C" {
u32 ShopStock_GetCode22Index(u32 a, u32 b);
}
extern "C" {
u32 _ZN6TownId15getTownRelationEv(void *p);
}
extern "C" {
u32 NookShop_SellSlot(void *p, u32 a, u32 b, u32 c);
}
extern "C" {
BOOL ShopStock_FindTileOfStock(u32 *x, u32 *y, u32 a);
}
extern "C" {
void Shop_RemoveSoldItemAt(u32 x, u32 y, u32 c, u32 e);
}
extern "C" {
BOOL Item_IsFurniture(u16 *p);
}
extern "C" {
u32 Item_GetFurnitureIndex(u16 *p);
}
extern "C" {
u16 *AbleShop_GetItem(void *p, u32 a, u32 b);
}
extern "C" {
u16 *ReddShop_GetItem(void *p, u32 a, u32 b);
}
extern "C" {
void AbleShop_MarkSoldItem(void *p, u16 *v);
}
extern "C" {
void ReddShop_MarkSoldItem(void *p, u16 *v);
}
extern "C" {
void Shop_RemoveSoldItem(u16 *p, u32 c, u32 e);
}
extern "C" {
BOOL NookShop_IsPointSpecialToday(void *p);
}
extern "C" {
u32 NookPoints_GetRank(u32 v);
}
extern "C" {
u32 NookPoints_GetRankThreshold(u32 i);
}
extern "C" {
void NookPoints_Add(u16 *p, u32 add);
}
extern "C" {
void NookPoints_SendMemberLetters(void);
}
extern "C" {
BOOL _ZN12Unk_02097ff48testFlagEj(void *p, u32 i);
}
extern "C" {
void _ZN12Unk_02097ff47setFlagEj(void *p, u32 i);
}
extern "C" {
extern void *gCommManager;
}
extern "C" {
extern u8 data_021ed104[];
}
extern "C" {
extern u8 data_021ed2c0[];
}
extern "C" {
extern u8 data_021ed2d4[];
}
extern "C" {
extern u8 sShopAckCounter[];
}
extern "C" {
extern int sNookShopVisitState;
}
extern "C" {
extern u16 sStockSoldOutItem;
}
extern "C" {
extern u16 kNookFlowerBagItems[];
}
extern "C" {
extern u16 kNookPointRankThresholds[];
}
extern "C" {
extern u16 kNookMemberGiftItems[];
}
extern "C" {
extern u8 data_020e2e38[];
}
extern "C" {
extern u8 data_020e2e3c[];
}
extern "C" {
extern u8 data_020e2e40[];
}
extern "C" {
extern u8 data_020e2e64[];
}
extern "C" {
extern u8 data_020e2e34[];
}
extern "C" {
extern u8 data_020e2e74[];
}
extern "C" {
void ObjShadow_NormalizeAxes(void *a, void *b);
}
extern "C" {
u8 ObjShadow_CalcAlpha(Vec3 *p, s32 q, u8 c);
}
extern "C" {
u8 ObjShadow_GetCharaAlpha(Vec3 *p, s32 q);
}
extern "C" {
u8 ObjShadow_GetObjAlpha(Vec3 *p, s32 q);
}
extern "C" {
void CharaShadow_Draw(Vec3 *pos, s32 a, s32 b, s32 c);
}

static inline BOOL inRange2(const u16 &a, const u16 &b) {
    BOOL r = FALSE;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL inRange2v(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x151d && a <= 0x151e) {
        r = TRUE;
    }
    return r;
}

static inline BOOL cmp16(u16 *a, u16 *b) {
    if (Item_IsFurniture(a)) {
        return Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(b);
    }
    return *a == *b;
}

static inline BOOL isOne() {
    if (gFieldSceneKind == 1) {
        return TRUE;
    }
    return FALSE;
}
static inline void *Unk_020ac500_Data(const Unk_020ac500_Dict *dict, u32 idx) {
    Unk_020ac500_DictHdr *hdr = (Unk_020ac500_DictHdr *)((u8 *)dict + dict->ofsEntry);
    return &hdr->data[hdr->sizeUnit * idx];
}
static inline u32 *Unk_020ac500_TexData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (u32 *)Unk_020ac500_Data(&tex->dict, idx);
}
static inline Unk_020ac500_Pltt *Unk_020ac500_PlttData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (Unk_020ac500_Pltt *)Unk_020ac500_Data((const Unk_020ac500_Dict *)((u8 *)tex + tex->ofsPlttDict), idx);
}




extern "C" void NookPoints_SendMemberLetters(void) {
    if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
        void *r5 = PlayerData_GetCurrent();
        if (r5) {
            u32 n = NookPoints_GetRank(*NookPoints_GetValuePtr(_ZN10PlayerData13getNookPointsEv(r5)));
            if (n) {
                u32 i;
                int z = 0;
                for (i = 0; i < n; i++) {
                    u32 j = i + 0x1c;
                    if (i < 4 && !_ZN12Unk_02097ff48testFlagEj(r5, j)) {
                        u32 obj[0x3d];
                        u8 ib;
                        _ZN6LetterC1Ev(obj);
                        ib = i;
                        Letter_ComposeFromMail(obj, &ib, "sp_npc_atm", data_020e2e34, data_020e2e38, _ZN10PlayerData11getPlayerIdEv(r5));
                        _ZN10LetterView10setPresentEtj(obj, kNookMemberGiftItems[i & 3], 1);
                        if (LetterDelivery_QueueOutgoing(obj, z)) {
                            _ZN12Unk_02097ff47setFlagEj(r5, j);
                        }
                        _ZN6LetterD1Ev(obj);
                    }
                }
            }
        }
    }
}

extern "C" void NookPoints_Add(u16 *p, u32 add) {
    u32 k = NookPoints_GetRank(*p);
    int s = add + *p;
    if (s >= 0xc350) {
        s = 0xc350;
    }
    *p = s;
    if (k != NookPoints_GetRank(*p)) {
        NookPoints_SendMemberLetters();
    }
}

extern "C" void NookPoints_AddForPurchase(u16 *p, u32 v) {
    u16 t = _s32_div_f(v, 100);
    if (NookShop_IsPointSpecialToday(data_021ed104)) {
        t = t * 5;
    }
    NookPoints_Add(p, t);
}

extern "C" u32 NookPoints_GetRank(u32 v) {
    int i;
    for (i = 4; i >= 0; i--) {
        if (v >= NookPoints_GetRankThreshold(i)) {
            return i;
        }
    }
    return 0;
}

extern "C" u32 NookPoints_GetRankThreshold(u32 i) {
    if (i < 5) {
        return kNookPointRankThresholds[i];
    }
    return 0;
}

extern "C" u16 NookPoints_GetToNextRank(u16 *p) {
    u32 k = NookPoints_GetRank(*p);
    if (k != 4) {
        return NookPoints_GetRankThreshold(k + 1) - *p;
    }
    return 0;
}

extern "C" void Shop_RecordPurchase(u32 a, u32 b, u32 c, u32 d, int mode, u8 flag, int e) {
    u16 cur;
    Pack p1;
    u32 x, y;
    Pack p2;
    e = e;
    if (a == 0x3f) {
        NookShop_AddSales(data_021ed104, b, d);
        if (_ZN11CommManager8isOnlineEv(gCommManager) && flag) {
            p1.a = a;
            p1.b = b;
            p1.c = d;
            p1.d = c;
            void *h = gCommManager;
            _ZN11CommManager11beginRecordEv(h);
            _ZN11CommManager11writeRecordEPhj(h, &p1, 4);
            _ZN11CommManager9endRecordEjj(h, 0x26, 4);
        }
    } else {
        cur = sStockSoldOutItem;
        switch (mode) {
        case 0:
            cur = *NookShop_GetItem(data_021ed104, a, 0);
            break;
        case 1:
            cur = *AbleShop_GetItem(data_021ed2d4, a, 0);
            break;
        case 2:
            cur = *ReddShop_GetItem(data_021ed2c0, a, 0);
            break;
        }
        if (!cmp16(&cur, &sStockSoldOutItem)) {
            switch (mode) {
            case 0:
                NookShop_SellSlot(data_021ed104, a, b, d);
                if (flag) {
                    NookPoints_AddForPurchase(NookPoints_GetValuePtr(_ZN10PlayerData13getNookPointsEv(PlayerData_GetCurrent())), b);
                }
                if (isOne()) {
                    if (ShopStock_FindTileOfStock(&x, &y, a)) {
                        if (a == 0x3f) {
                            e = 0;
                        }
                        Shop_RemoveSoldItemAt(x, y, c, e);
                    }
                }
                break;
            case 1:
                AbleShop_MarkSoldItem(data_021ed2d4, &cur);
                Shop_RemoveSoldItem(&cur, c, e);
                break;
            case 2:
                ReddShop_MarkSoldItem(data_021ed2c0, &cur);
                Shop_RemoveSoldItem(&cur, c, e);
                break;
            }
            if (_ZN11CommManager8isOnlineEv(gCommManager) && flag) {
                p2.a = a;
                p2.b = b;
                p2.c = d;
                p2.d = c;
                void *h = gCommManager;
                _ZN11CommManager11beginRecordEv(h);
                _ZN11CommManager11writeRecordEPhj(h, &p2, 4);
                _ZN11CommManager9endRecordEjj(h, 0x26, 4);
            }
        }
    }
}

extern "C" void NookShop_RecordBuyback(int a) {
    BOOL x = _ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0;
    if (a > 0x249f0) {
        a = 0x249f0;
    }
    Shop_RecordPurchase(0x3f, a, Scene_GetCurrent(), x, 0, 1, 0);
}

extern "C" void NookShop_BuyAt(u32 a, u32 b, u32 c, u32 d) {
    u16 v[2];
    u32 r;
    v[0] = *ShopStock_GetItemAt();
    if (inRange2(v[0], v[0]) && Scene_GetCurrent() == 0x1d) {
        u32 i;
        v[1] = 0xfff1;
        for (i = 0; i < 0x25; i++) {
            NookShop_GetItem(data_021ed104, i, &v[1]);
            if (inRange2v(&v[1])) {
                break;
            }
        }
        r = i + ShopStock_GetCode22Index(a, b);
    } else {
        r = NookShop_FindItem(data_021ed104, v);
    }
    if (r != (u32)-1) {
        BOOL x = _ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) == 0;
        ShopAckCounter_Start(sShopAckCounter);
        Shop_RecordPurchase(r, c, d, x, 0, 1, 0);
    }
}

extern "C" u32 NookShop_IsPurchaseSynced(void) {
    return Shop_IsPurchaseSynced();
}

extern "C" BOOL NookShop_CanTakeCatalogOrder(void) {
    if (_ZN11CommManager8isOnlineEv(gCommManager)) {
        return FALSE;
    }
    if (LetterDelivery_HasFreeOutgoingSlot()) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL NookShop_SendCatalogOrder(void *name) {
    if (NookShop_CanTakeCatalogOrder()) {
        u16 id;
        u8 by;
        u32 s1[9];
        u32 obj[0x3d];
        Item_FromPlacedForm(&id, name);
        _ZN8ItemNameC1EPt(s1, &id);
        MailText_SetSlot(1, s1);
        _ZN6LetterC1Ev(obj);
        void *r4 = PlayerData_GetCurrent();
        u8 *d = data_021ed104;
        by = NookShop_GetLevel(d);
        Letter_ComposeFromMail(obj, &by, "sp_npc_raccoon", data_020e2e40, data_020e2e3c, _ZN10PlayerData11getPlayerIdEv(r4));
        _ZN10LetterView10setPresentEtj(obj, id, 1);
        u32 r = Item_GetMemberPrice(&id);
        if (LetterDelivery_QueueOutgoing(obj, 0)) {
            NookShop_AddSales(d, r, 1);
            NookPoints_AddForPurchase(NookPoints_GetValuePtr(_ZN10PlayerData13getNookPointsEv(PlayerData_GetCurrent())), r);
            _ZN6LetterD1Ev(obj);
            _ZN8ItemNameD1Ev(s1);
            return TRUE;
        }
        _ZN6LetterD1Ev(obj);
        _ZN8ItemNameD1Ev(s1);
    }
    return FALSE;
}

extern "C" void AbleShop_BuyAt(u32 a, u32 b, u32 c) {
    u16 v = *ShopStock_GetItemAtTile(a, b);
    u32 r = AbleShop_FindItem(data_021ed2d4, &v);
    if (r != (u32)-1) {
        ShopAckCounter_Start(sShopAckCounter);
        Shop_RecordPurchase(r, 0, c, 1, 1, 1, 0);
    }
}

extern "C" u32 AbleShop_IsPurchaseSynced(void) {
    return Shop_IsPurchaseSynced();
}

extern "C" void ReddShop_RecordPurchase(u32 a, u32 b, u8 c, u32 d) {
    Shop_RecordPurchase(a, 0, b, 1, 2, c, d);
}

extern "C" void ReddShop_BuyAt(u32 a, u32 b, u32 c) {
    u32 r = ReddShop_FindItem(data_021ed2c0, _ZN18Unk_ov004_0223e9bc13callGetItemAtEv(a, b));
    if (r != (u32)-1) {
        ShopAckCounter_Start(sShopAckCounter);
        ReddShop_RecordPurchase(r, c, 1, 0);
    }
}

extern "C" u32 ReddShop_IsPurchaseSynced(void) {
    return Shop_IsPurchaseSynced();
}

extern "C" void Shop_OnPurchaseRecord(Bits *p, u32 arg) {
    u32 a = p->a;
    u8 d = p->d;
    BOOL c = p->c ? TRUE : FALSE;
    if (d == 10) {
        Shop_RecordPurchase(a, 0, d, 1, 1, 0, 1);
    } else if (d == 15) {
        ReddShop_RecordPurchase(a, d, 0, 1);
    } else if (SceneId_IsNookShop(d)) {
        Shop_RecordPurchase(a, p->b, d, c, 0, 0, 1);
    }
    if (a != 0x3f) {
        void *h = gCommManager;
        _ZN11CommManager11beginRecordEv(h);
        _ZN11CommManager9endRecordEjj(h, 0x27, arg);
    }
}

extern "C" u32 Shop_OnPurchaseAck(void) {
    return ShopAckCounter_Add(sShopAckCounter);
}

extern "C" void NookShop_PickFlowerBag(u16 *p) {
    *p = kNookFlowerBagItems[Random_GlobalBelow(12)];
}

extern "C" BOOL NookShop_IsOpenHour(void) {
    struct { u8 a; u8 b; u8 c; u8 d; } s;
    Clock_GetMinuteHour(&s);
    if (s.b >= 8 && s.b < 0x17) {
        return TRUE;
    }
    return FALSE;
}

extern "C" int NookShop_GetVisitState(void) {
    return sNookShopVisitState;
}

extern "C" void NookShop_SetVisitState(int v) {
    sNookShopVisitState = v;
}

extern "C" void NookShop_OnSceneLoad(void) {
    if (Scene_InTown()) {
        if (NookShop_GetVisitState() == 2) {
            if (!_ZN11CommManager8isOnlineEv(gCommManager)) {
                NookShop_ApplyRenovation();
                NookShop_UpdateDaily(data_021ed104, 0);
            }
        }
        NookShop_SetVisitState(0);
    }
}}


// ======== data (last gap) ========
ItemId sStockNoItem(0xfff1);
u32 data_020e2e40 = 3;
const u8 kNookStationeryCounts[4] = {1, 2, 3, 4};
const u8 kNookFlowerBagCounts[4] = {1, 2, 4, 7};
ItemId sStockSoldOutItem(0x1547);
const u8 kNookToolCounts[4] = {2, 3, 4, 6};
u32 data_020e2e3c = 0x18;
const u16 kNookPointRankThresholds[6] = {0, 0x12c, 0x1388, 0x2710, 0x4e20, 0};
ShopAckCounter sShopAckCounter;

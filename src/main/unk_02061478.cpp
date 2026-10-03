#include "types.h"

class ItemId {
public:
    ItemId() { unk_00 = 0xfff1; }
    ~ItemId();
    u16 unk_00;
};

class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    u8 unk_00[0x1c];
};

class ItemInfoTables {
public:
    ItemInfoTables();
    ~ItemInfoTables();
    RecordFile unk_00;
    RecordFile unk_1c;
    RecordFile unk_38;
    RecordFile unk_54;
};

class EncodedStringBase {
public:
    virtual ~EncodedStringBase();
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ MsgStringAttr unk_04;
};

// 16-byte raw buffer (vtable 0x020dd30c, in the next unit)
class EncodedString16Buf : public EncodedString {
public:
    EncodedString16Buf();
    EncodedString16Buf(u8 *src);
    virtual ~EncodedString16Buf();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL copyTo(u8 *out, s32 n);

    /* 0x0e */ u8 unk_0e[16];
};

extern "C" {
u32 ItemInfo_GetPrice(u16 *p);
s32 ItemInfo_GetNameForm(u16 *);
u16 *ItemInfo_GetName(u16 *p);
void ItemInfo_FreeIndoor();
void ItemInfo_LoadIndoor(s32 a);
s32 ItemInfo_Exit();
s32 ItemInfo_Init();
BOOL ItemInfo_IsReady();
s32 Item_GetFurnitureIndex(u16 *p);
BOOL Item_IsFurniture(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
BOOL Item_IsFlowerAltItem(u16 *p);
BOOL Item_IsFlowerItem(u16 *p);
void StrBuf_ClearAlt(void *);
u32 FtrInfo_GetName(s32);
u8 FtrInfo_GetNameAttrA(s32);
u8 FtrInfo_GetNameAttrB(s32);
u32 FtrInfo_GetNameForm(s32);
void Item_FromPlacedForm(u16 *out, u16 *in);
u32 Series_GetName(s32);
BOOL ItemInfo_IsHoldable(u16 *p);
s32 ItemInfo_GetSeason(u16 *p);
s32 ItemInfo_GetUnk07(u16 *p);
s32 ItemInfo_GetClass(u16 *p);
s32 ItemInfo_GetKind(u16 *p);
s32 ItemInfo_GetSeries(u16 *p);
s32 ItemInfo_GetNameAttrA(u16 *p);
s32 ItemInfo_GetNameAttrB(u16 *p);
s32 ItemInfo_GetUnk02(u16 *p);
void ItemInfo_CountClass1dHeadwear();
void ItemInfo_CountFlowerItems();
void ItemInfo_CountHoldable();
void ItemInfoTables_FreeIndoor(void *);
void ItemInfoTables_LoadIndoor(void *, s32);
s32 ItemInfoTables_Close(void *);
s32 ItemInfoTables_Open(void *);
void *_ZN12InfoTableSet6getDmaEv(void *);
void *_ZN12InfoTableSet9getIndoorEv(void *);
void *_ZN12InfoTableSet9getAlwaysEv(void *);
void _ZN12InfoTableSet10freeIndoorEv(void *);
void _ZN12InfoTableSet10loadIndoorEi(void *, s32);
s32 _ZN12InfoTableSet5closeEv(void *);
BOOL _ZN12InfoTableSet4openEPviS0_iS0_ii(void *, const char *, s32, const char *, s32, const char *, s32, s32);
u8 *_ZN10RecordFile9getRecordEj(void *, u32);
s32 _ZN10RecordFile5closeEv(void *);
s32 _ZN10RecordFile7loadAllEv(void *);
s32 _ZN10RecordFile4openEPvii(void *, const char *, s32, s32);
void func_0206d964(void *);
void func_0206d974(void *);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern const u16 sFtrClassBasePoints[46];
extern char data_020dcdcc[];
extern char data_020dcdd0[];
extern char data_020dcdd4[];
extern char data_020dcdd8[];
extern char data_020dcddc[];
extern char data_020dcde0[];
extern char data_020dcde8[];
extern char data_020dcdf0[];
extern char data_020dcdf8[];
extern char data_020dce00[];
extern char data_020dce08[];
extern char data_020dce10[];
extern char data_020dce18[];
extern char data_020dce20[];
extern char data_020dce28[];
extern char data_020dce30[];
extern char data_020dce38[];
extern char data_020dce40[];
extern char data_020dce48[];
extern char data_020dce50[];
extern char data_020dce58[];
extern char data_020dce60[];
extern char data_020dce68[];
extern char data_020dce70[];
extern char data_020dce78[];
extern char data_020dce80[];
extern char data_020dce88[];
extern char data_020dce90[];
extern char data_020dce98[];
extern char data_020dcea0[];
extern char data_020dcea8[];
extern char data_020dceb0[];
extern char data_020dceb8[];
extern char data_020dcec0[];
extern char data_020dcec8[];
extern char data_020dced0[];
extern char data_020dced8[];
extern char data_020dcee0[];
extern char data_020dcee8[];
extern char data_020dcef0[];
extern char data_020dcef8[];
extern char data_020dcf00[];
extern char data_020dcf08[];
extern char data_020dcf10[];
extern char data_020dcf18[];
extern char data_020dcf20[];
extern char data_020dcf28[];
extern char data_020dcf30[];
extern char data_020dcf38[];
extern char data_020dcf40[];
extern char data_020dcf48[];
extern char data_020dcf50[];
extern char data_020dcf58[];
extern char data_020dcf60[];
extern char data_020dcf68[];
extern char data_020dcf70[];
extern char data_020dcf78[];
extern char data_020dcf80[];
extern char data_020dcf88[];
extern char data_020dcf94[];
extern char data_020dcfa0[];
extern char data_020dcfac[];
extern char data_020dcfb8[];
extern char data_020dcfc4[];
extern char data_020dcfd0[];
extern char data_020dcfdc[];
extern char data_020dcfe8[];
extern char data_020dcff4[];
extern char data_020dd000[];
extern char data_020dd00c[];
extern char data_020dd018[];
extern char data_020dd024[];
extern char data_020dd030[];
extern char data_020dd03c[];
extern char data_020dd048[];
extern char data_020dd054[];

char data_020dced0[] = "present";
char data_020dcf20[] = "paint11";
char data_020dcf38[] = "paint14";
char data_020dcef8[] = "paint06";
char data_020dce20[] = "wall";
char data_020dd030[] = "fishingrod";
char data_020dd03c[] = "seedpitfall";
char data_020dcfe8[] = "moneybag";
char data_020dcf10[] = "paint09";
char data_020dcea8[] = "hanabi";
char data_020dd048[] = "bottle_mail";
char data_020dce18[] = "tane";
char data_020dcdd4[] = "wig";
char data_020dce00[] = "dust";
const u16 sFtrClassBasePoints[46] = {0x33, 0x33, 0x33, 0x33, 0x97, 0x19c, 0x3e8, 0x33c, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3, 0x12c, 0x3e8, 0x457, 0x378, 0x19c, 0x53, 0x607, 0xc80, 0x3, 0x0, 0x0, 0x19c, 0x500, 0x145, 0x3, 0x390, 0x320, 0x320, 0x320, 0x3, 0x3, 0x3, 0x0, 0x97, 0x0, 0x457, 0x457, 0x0, 0x97, 0x97, 0xd2};
char data_020dcf28[] = "paint12";
char data_020dcf08[] = "paint08";
char data_020dcf40[] = "paint15";
s32 sFlowerAltCount;
char data_020dcdd8[] = "box";
char data_020dce48[] = "paper";
char data_020dcddc[] = "axe";
char data_020dcf58[] = "cracker";
char data_020dcf60[] = "makigai";
ItemInfoTables gItemInfo;
char data_020dce78[] = "peach";
char data_020dcec8[] = "orange";
char data_020dcdd0[] = "cap";
char data_020dcf88[] = "makigai2";
char data_020dce50[] = "scoop";
char data_020dcee8[] = "paint03";
char data_020dcde0[] = "seed";
s32 sHoldableItemCount;
char data_020dd00c[] = "gwatering";
char data_020dcfa0[] = "medicine";
char data_020dd018[] = "gpachinko";
char data_020dcdf0[] = "cage";
char data_020dce98[] = "gscoop";
char data_020dcfac[] = "paperbag";
char data_020dce80[] = "apple";
char data_020dcfb8[] = "umbrella";
char data_020dce10[] = "kabu";
char data_020dcfc4[] = "gtoolbox";
char data_020dcef0[] = "paint05";
char data_020dcfdc[] = "pachinko";
char data_020dce70[] = "cloth";
char data_020dce68[] = "music";
char data_020dcde8[] = "gnet";
char data_020dce88[] = "cherry";
char data_020dcdf8[] = "coin";
char data_020dce60[] = "acorn";
char data_020dce38[] = "leaf";
char data_020dce30[] = "gear";
const char *sItemIconModelNames[146] = {
    data_020dce38, data_020dce38, data_020dceb8, data_020dceb8,
    data_020dcdd8, data_020dce20, data_020dcdd8, data_020dcec0,
    data_020dcdd8, data_020dce68, data_020dcfac, data_020dce48,
    data_020dce70, data_020dce70, data_020dcdd8, data_020dcfb8,
    data_020dcdd8, data_020dcdd0, data_020dcdd8, data_020dcf70,
    data_020dcf78, data_020dce50, data_020dcfc4, data_020dce98,
    data_020dcf78, data_020dcddc, data_020dcfc4, data_020dce08,
    data_020dcf78, data_020dd030, data_020dcfc4, data_020dd054,
    data_020dcf78, data_020dcdcc, data_020dcfc4, data_020dcde8,
    data_020dcf78, data_020dcfd0, data_020dcfc4, data_020dd00c,
    data_020dcf78, data_020dcfdc, data_020dcfc4, data_020dd018,
    data_020dcfe8, data_020dcdf8, data_020dcfe8, data_020dcfe8,
    data_020dcdd8, data_020dcdd4, data_020dce80, data_020dce80,
    data_020dcec8, data_020dcec8, data_020dce28, data_020dce28,
    data_020dce78, data_020dce78, data_020dce88, data_020dce88,
    data_020dce60, data_020dce60, data_020dce10, data_020dce10,
    data_020dce90, data_020dce90, data_020dce00, data_020dce00,
    data_020dcea0, data_020dcea0, data_020dce38, data_020dce38,
    data_020dcf60, data_020dcf60, data_020dcf88, data_020dcf88,
    data_020dce40, data_020dce40, data_020dced0, data_020dced0,
    data_020dcdf0, data_020dcdf0, data_020dce30, data_020dce30,
    data_020dcfac, data_020dcde0, data_020dcfac, data_020dcf94,
    data_020dd03c, data_020dd03c, data_020dcfac, data_020dd024,
    data_020dd048, data_020dd048, data_020dce38, data_020dcf80,
    data_020dce38, data_020dced8, data_020dce38, data_020dcee0,
    data_020dce38, data_020dcee8, data_020dce38, data_020dcf68,
    data_020dce38, data_020dcef0, data_020dce38, data_020dcef8,
    data_020dce38, data_020dcf00, data_020dce38, data_020dcf08,
    data_020dce38, data_020dcf10, data_020dce38, data_020dcf18,
    data_020dce38, data_020dcf20, data_020dce38, data_020dcf28,
    data_020dce38, data_020dcf30, data_020dce38, data_020dcf38,
    data_020dce38, data_020dcf40, data_020dce38, data_020dcf48,
    data_020dcf50, data_020dcf50, data_020dcfac, data_020dcfa0,
    data_020dcff4, data_020dcff4, data_020dcfac, data_020dcf58,
    data_020dcfac, data_020dcea8, data_020dceb0, data_020dceb0,
    data_020dce18, data_020dce38, data_020dd000, data_020dce38,
    data_020dcf78, data_020dce58,
};
char data_020dcf78[] = "toolbox";
char data_020dd000[] = "honeycomb";
char data_020dced8[] = "paint01";
char data_020dcee0[] = "paint02";
char data_020dcf94[] = "seedling";
char data_020dcdcc[] = "net";
char data_020dd024[] = "seedling_c";
char data_020dceb8[] = "haniwa";
char data_020dcea0[] = "fossil";
char data_020dce40[] = "sango";
s32 sFlowerItemCount;
s32 sFullHeadwearClass1dCount;
char data_020dcec0[] = "carpet";
char data_020dcf18[] = "paint10";
char data_020dcf30[] = "paint13";
char data_020dd054[] = "gfishingrod";
char data_020dcf50[] = "coconut";
char data_020dcff4[] = "deliver_l";
s32 sHatClass1dCount;
char data_020dce28[] = "pear";
char data_020dce90[] = "r_kabu";
char data_020dcfd0[] = "watering";
char data_020dce08[] = "gaxe";
ItemId sFirstHoldableItem;
char data_020dcf68[] = "paint04";
char data_020dce58[] = "timer";
char data_020dcf00[] = "paint07";
char data_020dcf48[] = "soldout";
char data_020dcf70[] = "glasses";
char data_020dceb0[] = "clover";
char data_020dcf80[] = "paint00";

static inline BOOL Unk_02061478_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 v = *p;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}
static inline BOOL Unk_02061478_V(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}
static inline s32 Unk_02061478_I(u16 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) return (s32)(v - lo) >> 2;
    return -1;
}
static inline u16 Unk_02061478_M(s32 i, u32 n, u32 base) {
    if ((u32)i < n) return i + base;
    return base;
}

static inline BOOL Unk_02061794_Eq(s32 a, s32 b) {
    BOOL r = FALSE;
    if (a == b) r = TRUE;
    return r;
}

static inline u16 Unk_020621d8_Idx(u32 i, u32 n, u32 base) {
    if (i < n) return base + i;
    return base;
}

static inline BOOL Unk_020622cc_IsFree(u16 *g, u16 *t) {
    if (Item_IsFurniture(g)) {
        *t = 0xfff1;
        s32 x = Item_GetFurnitureIndex(g);
        if (x == Item_GetFurnitureIndex(t)) return TRUE;
        return FALSE;
    }
    if (*g == 0xfff1) return TRUE;
    return FALSE;
}

static inline u8 *Unk_02061e0c_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)_ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getAlwaysEv((&gItemInfo)), i);
}

static inline BOOL Unk_02061e0c_InRange(u16 *p) {
    BOOL r = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) r = TRUE;
    return r;
}

static inline u16 Unk_02061e0c_Conv(u16 *p) {
    u16 v = *p;
    s32 t;
    if (v >= 0x1000 && v <= 0x10ff) t = v - 0x1000;
    else t = -1;
    t |= 3;
    if ((u32)t < 0x100) return t + 0x1000;
    return 0x1000;
}

static inline u8 *Unk_02062024_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)_ZN10RecordFile9getRecordEj(_ZN12InfoTableSet6getDmaEv((&gItemInfo)), i);
}

extern "C" u16 *ItemInfo_GetName(u16 *p);

static inline BOOL Unk_0206198c_Tail(u32 v, u32 sh) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = _ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getAlwaysEv((&gItemInfo)), i);
    if (r) return (r[9] >> sh) & 1 ? TRUE : FALSE;
    return FALSE;
}

BOOL EncodedString16Buf::copyTo(u8 *out, s32 n) {
    if (n >= (s32)vfunc_08()) {
        MI_CpuCopy8(unk_0e, out, vfunc_08());
        return TRUE;
    }
    return FALSE;
}

ItemInfoTables::ItemInfoTables() {}

ItemInfoTables::~ItemInfoTables() {
    _ZN12InfoTableSet5closeEv(this);
    _ZN10RecordFile5closeEv(&unk_54);
}

s32 ItemInfoTables_Open(void *o) {
    BOOL ok;
    sHoldableItemCount = 0;
    ok = TRUE;
    ok = (ok | _ZN12InfoTableSet4openEPviS0_iS0_ii(o, "/item_info/always.bin", 0xc, "/item_info/indoor.bin", 4, "/item_info/dma.bin", 0x14, 0x600)) ? TRUE : FALSE;
    if (ok) {
        ItemInfo_CountHoldable();
        ItemInfo_CountFlowerItems();
        ItemInfo_CountClass1dHeadwear();
    }
    ok = (ok | _ZN10RecordFile4openEPvii((u8 *)o + 0x54, "/item_info/series.bin", 0x14, 0x80)) ? TRUE : FALSE;
    if (ok) {
        _ZN10RecordFile7loadAllEv((u8 *)o + 0x54);
    }
    return ok;
}

s32 ItemInfoTables_Close(void *o) {
    _ZN12InfoTableSet5closeEv(o);
    return _ZN10RecordFile5closeEv((u8 *)o + 0x54);
}

void ItemInfoTables_LoadIndoor(void *p, s32 x) { _ZN12InfoTableSet10loadIndoorEi(p, x); }

void ItemInfoTables_FreeIndoor(void *p) { _ZN12InfoTableSet10freeIndoorEv(p); }

void ItemInfo_CountHoldable() {
    u16 i;
    struct { u16 a; u16 b; } l;
    for (i = 0x1000; i < 0x156e; i++) {
        l.a = i;
        if (ItemInfo_IsHoldable(&l.a)) {
            if (Unk_020622cc_IsFree(&sFirstHoldableItem.unk_00, &l.b)) {
                sFirstHoldableItem.unk_00 = l.a;
            }
            sHoldableItemCount++;
        }
    }
}

void ItemInfo_CountFlowerItems() {
    u32 i;
    struct { u16 a; u16 b; } l;
    for (i = 0; i < 0x21; i++) {
        l.a = Unk_020621d8_Idx(i, 0x21, 0x1408);
        l.b = Unk_020621d8_Idx(i, 0x21, 0x1471);
        if (Item_IsFlowerItem(&l.a)) {
            sFlowerItemCount++;
        } else if (Item_IsFlowerAltItem(&l.b)) {
            sFlowerAltCount++;
        }
    }
}

void ItemInfo_CountClass1dHeadwear() {
    u32 i;
    struct { u16 a; u16 b; } l;
    sFullHeadwearClass1dCount = 0;
    sHatClass1dCount = 0;
    for (i = 0; i < 0x40; i++) {
        l.a = Unk_020621d8_Idx(i, 0x40, 0x13c8);
        if (ItemInfo_GetClass(&l.a) == 0x1d) sHatClass1dCount++;
    }
    for (i = 0; i < 0x20; i++) {
        l.b = Unk_020621d8_Idx(i, 0x20, 0x13a8);
        if (ItemInfo_GetClass(&l.b) == 0x1d) sFullHeadwearClass1dCount++;
    }
}

BOOL ItemInfo_IsReady() { return TRUE; }

s32 ItemInfo_Init() { return ItemInfoTables_Open((&gItemInfo)); }

s32 ItemInfo_Exit() { return ItemInfoTables_Close((&gItemInfo)); }

void ItemInfo_LoadIndoor(s32 a) { ItemInfoTables_LoadIndoor((&gItemInfo), a); }

// ---------------------------------------------------------------------------------------------------------------------
void ItemInfo_FreeIndoor() { ItemInfoTables_FreeIndoor((&gItemInfo)); }

u16 *ItemInfo_GetName(u16 *p) {
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02062024_Lookup(tmp);
        if (r) return (u16 *)(r + 2);
        return 0;
    }
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return (u16 *)(r + 2);
    return 0;
}

s32 ItemInfo_GetUnk02(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return *(u16 *)(r + 2);
    return 0;
}

s32 ItemInfo_GetNameForm(u16 *) { return -1; }

s32 ItemInfo_GetNameAttrB(u16 *p) {
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return r[0];
    return 0;
}

s32 ItemInfo_GetNameAttrA(u16 *p) {
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return r[1];
    return 0;
}

s32 ItemInfo_GetSeries(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[5];
    return 0;
}

u32 ItemInfo_GetPrice(u16 *p) {
    u32 rec;
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02061e0c_Lookup(tmp);
        if (r) rec = *(u16 *)r;
        else rec = 0;
    } else {
        u8 *r = Unk_02061e0c_Lookup(*p);
        if (r) rec = *(u16 *)r;
        else rec = 0;
    }
    if (Unk_02061e0c_InRange(p)) {
        u16 v = *p;
        s32 t;
        if (v >= 0x1000 && v <= 0x10ff) t = v - 0x1000;
        else t = -1;
        t &= 3;
        rec = (rec * (t + 1)) << 14 >> 16;
    }
    return rec;
}

s32 ItemInfo_GetKind(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[4];
    return 0;
}

s32 ItemInfo_GetClass(u16 *p) {
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02061e0c_Lookup(tmp);
        if (r) return r[6];
        return 0;
    }
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[6];
    return 0;
}

s32 ItemInfo_GetUnk07(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = (u8 *)_ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getAlwaysEv((&gItemInfo)), i);
    if (r) return r[7];
    return 0;
}

s32 ItemInfo_GetSeason(u16 *p) {
    if (ItemInfo_GetKind(p) == 5) {
        u32 i = *p & 0xfff;
        if (i >= 0x56e) i = 0x56d;
        u8 *r = (u8 *)_ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getAlwaysEv((&gItemInfo)), i);
        if (r) return r[8];
        return 0;
    }
    return -1;
}

extern "C" BOOL ItemInfo_IsHoldable(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 0);
    }
    return Unk_0206198c_Tail(v, 0);
}

extern "C" BOOL ItemInfo_TestFlag1(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 1);
    }
    return Unk_0206198c_Tail(v, 1);
}

extern "C" BOOL ItemInfo_TestFlag2(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 2);
    }
    return Unk_0206198c_Tail(v, 2);
}

extern "C" BOOL ItemInfo_TestFlag3(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 3);
    }
    return Unk_0206198c_Tail(v, 3);
}

extern "C" BOOL ItemInfo_TestFlag4(u16 *p) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) in = TRUE;
    if (in) {
        s32 d;
        volatile u16 t;
        if (v >= 0x1000 && v <= 0x10ff) d = v - 0x1000;
        else d = -1;
        d |= 3;
        t = Unk_02061478_M(d, 0x100, 0x1000);
        return Unk_0206198c_Tail(t, 4);
    }
    return Unk_0206198c_Tail(v, 4);
}

extern "C" u32 ItemInfo_GetIndoorUnk1(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = _ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getIndoorEv((&gItemInfo)), i);
    if (r) return r[1];
    return 0;
}

extern "C" u32 ItemInfo_GetIndoorUnk0(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = _ZN10RecordFile9getRecordEj(_ZN12InfoTableSet9getIndoorEv((&gItemInfo)), i);
    if (r) return r[0];
    return 0;
}

extern "C" u32 Series_GetType(s32 i) {
    if (i < 0x4a) {
        u8 *r = _ZN10RecordFile9getRecordEj((&gItemInfo.unk_54), i);
        if (r) return *r;
    }
    return 3;
}

extern "C" u32 Series_GetName(s32 i) {
    if (i < 0x4a) {
        u8 *r = _ZN10RecordFile9getRecordEj((&gItemInfo.unk_54), i);
        if (r) return (u32)r + 1;
    }
    return 0;
}

extern "C" u32 FtrClass_GetBasePoints(s32 i) {
    if (i < 0x2e) return sFtrClassBasePoints[i];
    return 0;
}

extern "C" u32 Item_GetIconModelName(s32 a, s32 b) {
    if (a < 0x49) {
        u32 c = b == 0 ? 1 : 0;
        return *(u32 *)((u8 *)sItemIconModelNames + a * 8 + (u8)c * 4);
    }
    return Item_GetIconModelName(0, b);
}

extern "C" u32 ItemInfo_GetHoldableCount() { return sHoldableItemCount; }

extern "C" void ItemInfo_GetNthHoldable(u16 *out, s32 idx) {
    if (sHoldableItemCount) {
        s32 cnt = 0;
        u16 i;
        for (i = sFirstHoldableItem.unk_00; i < 0x156e; i++) {
            u16 buf;
            buf = i;
            if (ItemInfo_IsHoldable(&buf)) {
                if (cnt == idx) {
                    *out = buf;
                    return;
                }
                cnt++;
            }
        }
    }
    *out = sFirstHoldableItem.unk_00;
}

extern "C" s32 ItemInfo_GetHoldableIndex(u16 *p) {
    if (sHoldableItemCount) {
        s32 cnt = 0;
        u16 i;
        BOOL a = FALSE, b = FALSE;
        for (i = sFirstHoldableItem.unk_00; i < 0x156e; i++) {
            u16 buf;
            buf = i;
            if (ItemInfo_IsHoldable(&buf)) {
                BOOL f;
                if (Item_IsFurniture(&buf)) {
                    s32 x = Item_GetFurnitureIndex(&buf);
                    f = (x == Item_GetFurnitureIndex(p)) ? TRUE : a;
                } else {
                    f = (buf == *p) ? TRUE : b;
                }
                if (f) return cnt;
                cnt++;
            }
        }
    }
    return -1;
}

extern "C" u32 Item_GetFlowerItemCount() { return sFlowerItemCount; }

extern "C" u32 Item_GetFlowerAltCount() { return sFlowerAltCount; }

extern "C" u32 ItemInfo_GetHatClass1dCount() { return sHatClass1dCount; }

extern "C" u32 ItemInfo_GetFullHeadwearClass1dCount() { return sFullHeadwearClass1dCount; }

// ---------------------------------------------------------------------------------------------------------------------
extern "C" void Item_FromPlacedForm(u16 *out, u16 *in) {
    u32 o; s32 k; u16 t[2];
    if (Unk_02061478_R(in, 0x3984, 0x3d83)) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3984, 0x3d83), 0x100, 0x11a8);
    } else if (*in >= 0x42a4 && *in <= 0x4383) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x42a4, 0x4383), 0x38, 0x12b0);
    } else if (*in >= 0x4384 && *in <= 0x4463) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x4384, 0x4463), 0x38, 0x12e8);
    } else if (*in >= 0x3e24 && *in <= 0x3ea3) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3e24, 0x3ea3), 0x20, 0x1380);
    } else if (*in >= 0x3fa4 && *in <= 0x40a3) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x3fa4, 0x40a3), 0x40, 0x13c8);
    } else if (*in >= 0x40a4 && *in <= 0x4123) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x40a4, 0x4123), 0x20, 0x13a8);
    } else if (*in >= 0x4124 && *in <= 0x4223) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x4124, 0x4223), 0x40, 0x1431);
    } else if (*in >= 0x44e8 && *in <= 0x450b) {
        *out = Unk_02061478_M(Unk_02061478_I(*in, 0x44e8, 0x450b), 9, 0x1554);
    } else {
        k = -1;
        if (*in >= 0x4464 && *in <= 0x44e7) k = Unk_02061478_I(*in, 0x4464, 0x44e7);
        if (Unk_02061478_V(*in, 0, 0x20)) k = *in;
        if (k != -1) {
            t[0] = Unk_02061478_M(k, 0x21, 0x1408);
            if (Item_IsFlowerItem(&t[0])) {
                *out = t[0];
            } else {
                t[1] = Unk_02061478_M(k, 0x21, 0x1471);
                if (Item_IsFlowerAltItem(&t[1])) *out = t[1];
                else *out = 0x137c;
            }
        } else if ((*in >= 0xd4 && *in <= 0xda) || (*in >= 0xdb && *in <= 0xe1)) {
            if (*in >= 0xd4 && *in <= 0xda) o = *in - 0xd4;
            else o = *in - 0xdb;
            *out = Unk_02061478_M(o, 7, 0x153b);
        } else {
            *out = *in;
        }
    }
}


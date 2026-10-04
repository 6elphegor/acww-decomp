#include "types.h"
#include "game/Unk_020dd30c_Buf.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "talk/EncodedStringBase.h"

extern "C" {
extern u8 gItemInfo[];
}

extern "C" {
void *func_0206d794(void *);
}

extern "C" {
void *func_0206d79c(void *);
}

extern "C" {
void *func_0206d86c(void *, s32);
}

extern "C" {
s32 ItemInfo_GetKind(u16 *p);
}

extern "C" {
s32 ItemInfo_GetSeason(u16 *p);
}

extern "C" {
s32 ItemInfo_GetUnk07(u16 *p);
}

extern "C" {
s32 ItemInfo_GetClass(u16 *p);
}

extern "C" {
extern s32 sFullHeadwearClass1dCount;
}

extern "C" {
extern s32 sHoldableItemCount;
}

extern "C" {
extern s32 sHatClass1dCount;
}

extern "C" {
extern u16 sFirstHoldableItem[];
}

extern "C" {
BOOL ItemInfo_IsHoldable(u16 *p);
}

extern "C" {
s32 Item_IsFurniture(u16 *p);
}

extern "C" {
s32 Item_GetFurnitureIndex(u16 *p);
}

extern "C" {
extern s32 sFlowerAltCount;
}

extern "C" {
extern s32 sFlowerItemCount;
}

extern "C" {
BOOL Item_IsFlowerItem(u16 *p);
}

extern "C" {
BOOL Item_IsFlowerAltItem(u16 *p);
}

extern "C" {
s32 ItemInfo_GetSeries(u16 *p);
}

extern "C" {
s32 ItemInfo_GetNameAttrA(u16 *p);
}

extern "C" {
s32 ItemInfo_GetNameAttrB(u16 *p);
}

extern "C" {
s32 ItemInfo_GetUnk02(u16 *p);
}

static inline u16 Unk_020621d8_Idx(u32 i, u32 n, u32 base) {
    if (i < n) return base + i;
    return base;
}

extern "C" void ItemInfo_CountClass1dHeadwear();

extern "C" void ItemInfo_CountFlowerItems();

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

extern "C" void ItemInfo_CountHoldable();

static inline u8 *Unk_02061e0c_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)func_0206d86c(func_0206d79c(gItemInfo), i);
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

extern "C" u32 ItemInfo_GetPrice(u16 *p);

static inline u8 *Unk_02062024_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)func_0206d86c(func_0206d794(gItemInfo), i);
}

extern "C" s32 ItemInfo_GetNameForm(u16 *);

extern "C" u16 *ItemInfo_GetName(u16 *p);

// ---------------------------------------------------------------------------------------------------------------------
// Item table setup / string buffers

extern "C" {
extern u16 sFirstHoldableItem[];
}

extern "C" {
extern s32 sFullHeadwearClass1dCount;
}

extern "C" {
extern s32 sHoldableItemCount;
}

extern "C" {
extern s32 sFlowerAltCount;
}

extern "C" {
extern s32 sFlowerItemCount;
}

extern "C" {
extern s32 sHatClass1dCount;
}

extern "C" {
extern u8 sPathItemInfoAlways[];
}

extern "C" {
extern u8 sPathItemInfoIndoor[];
}

extern "C" {
extern u8 sPathItemInfoDma[];
}

extern "C" {
extern u8 sPathItemInfoSeries[];
}

extern "C" {
BOOL ItemInfo_IsHoldable(u16 *p);
}

extern "C" {
s32 Item_IsFurniture(u16 *p);
}

extern "C" {
s32 Item_GetFurnitureIndex(u16 *p);
}

extern "C" {
BOOL Item_IsFlowerItem(u16 *p);
}

extern "C" {
BOOL Item_IsFlowerAltItem(u16 *p);
}

extern "C" {
BOOL Item_IsNormalItem(u16 *p);
}

extern "C" {
void func_0206d7a0(void *);
}

extern "C" {
void func_0206d7b4(void *, s32);
}

extern "C" {
s32 func_0206d7cc(void *);
}

extern "C" {
s32 func_0206d8b8(void *);
}

extern "C" {
s32 func_0206d904(void *);
}

extern "C" {
s32 func_0206d940(void *, void *, s32, s32);
}

extern "C" {
void func_0206d964(void *);
}

extern "C" {
void func_0206d974(void *);
}

extern "C" {
BOOL func_0206d7ec(void *, void *, s32, void *, s32, void *, s32, s32);
}

extern "C" {
void Item_FromPlacedForm(u16 *out, u16 *in);
}

extern "C" {
u32 Series_GetName(s32);
}

extern "C" {
void StrBuf_ClearAlt(void *);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
u32 FtrInfo_GetName(s32);
}

extern "C" {
u32 FtrInfo_GetNameForm(s32);
}

extern "C" {
u8 FtrInfo_GetNameAttrB(s32);
}

extern "C" {
u8 FtrInfo_GetNameAttrA(s32);
}

extern "C" {
void ItemInfoTables_FreeIndoor(void *);
}

extern "C" {
void ItemInfoTables_LoadIndoor(void *, s32);
}

extern "C" {
s32 ItemInfoTables_Close(void *);
}

extern "C" {
s32 ItemInfoTables_Open(void *);
}

extern "C" {
void ItemInfo_CountHoldable();
}

extern "C" {
void ItemInfo_CountFlowerItems();
}

extern "C" {
void ItemInfo_CountClass1dHeadwear();
}

extern "C" void ItemInfo_FreeIndoor();
extern "C" void ItemInfo_LoadIndoor(s32 a);
extern "C" s32 ItemInfo_Exit();
extern "C" s32 ItemInfo_Init();
extern "C" BOOL ItemInfo_IsReady();

extern "C" void *func_02062404(void *o);

extern "C" void *func_0206243c(void *o);

// ---------------------------------------------------------------------------------------------------------------------
// Buffer classes




class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;

    /* 0x04 */ MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    u8 set(u8 *str);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};


// 16-byte raw buffer (vtable 0x020dd30c)
class EncodedString16Buf : public EncodedString {
public:
    EncodedString16Buf();
    EncodedString16Buf(u8 *src);
    virtual ~EncodedString16Buf();
    virtual u32 capacity();
    virtual u8 *data();
    BOOL copyTo(u8 *out, s32 n);

    /* 0x0e */ u8 text[16];
};

// buffer of 0x11 bytes (vtable 0x020dd324)
class ItemName : public MsgString {
public:
    ItemName();
    ItemName(s32 idx);
    ItemName(u16 *p);
    virtual ~ItemName();
    virtual u32 capacity();
    virtual u8 *data();
    u8 setString(u8 *str);
    BOOL setSeriesName(s32 idx);
    BOOL setFromItem(u16 *p);

    /* 0x12 */ u8 text[0x11];
};

EncodedString16Buf::EncodedString16Buf() {
    StrBuf_ClearAlt(this);
}

EncodedString16Buf::EncodedString16Buf(u8 *src) {
    StrBuf_ClearAlt(this);
    *(Unk_020dd30c_Buf *)text = *(Unk_020dd30c_Buf *)src;
}

EncodedString16Buf::~EncodedString16Buf() {}

u32 EncodedString16Buf::capacity() { return 0x10; }

u8 *EncodedString16Buf::data() { return text; }


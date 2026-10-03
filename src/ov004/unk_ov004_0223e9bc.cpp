// mwcc-version: 1.2/base
#pragma opt_loop_invariants off
#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov004_0224f284;

extern "C" {
extern void *gSceneBlockMap;
extern u8 data_021ed104[];
extern u8 data_021ed2d4[];
extern u8 data_021ed2c0[];
extern const u32 data_ov004_0224502c[];
extern const u32 data_ov004_0224482c[];
extern const u32 data_ov004_02244c2c[];

BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL Item_IsFurnitureOrF031(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
BOOL Item_IsHoldable(u16 *p);
s32 Item_GetKind(u16 *p);
s32 Item_MakeFurniture(s32 a, s32 b);
u32 func_020b50e8();
BOOL func_020b5254();
BOOL func_020b5268(u32 id);
s32 func_020b5284();
void Item_FromPlacedForm(u16 *out, u16 *in);
u16 *func_020ad8e8(void *tbl, s32 idx, u16 *out);
u16 *func_020ae844(void *tbl, s32 idx, u16 *out);
s32 func_020ae82c(void *tbl, u16 *p);
s32 func_020ad8d0(void *tbl, u16 *p);
s32 func_020acf90(void *tbl, u16 *p);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
s32 BlockMap_SetItemAtUnit(void *g, u16 *v, s32 x, s32 y, u32 z);
void *func_ov004_02235718();
void *_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(void *self, s32 x, s32 y, s32 z);
#define func_ov004_022355d8 _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii
s32 FtrActor_GetFtrIndex(void *o);

u8 *func_ov004_0223f278();
s32 func_ov004_0223f210(u16 *p);
u16 *func_ov004_0223ed40(s32 x, s32 y);
u16 *func_020acfa8(void *p, u32 a, void *b);
void _ZN18Unk_ov004_0223e9bc19func_ov004_0223e9bcEv();
void _ZN18Unk_ov004_0223e9bc19func_ov004_0223e9c8Ev();
void _ZN18Unk_ov004_0224f28419func_ov004_0223ef44Ev();
void _ZN18Unk_ov004_0224f28419func_ov004_0223ea98Ev();
extern void *data_ov004_0224f254[2];
extern void *data_ov004_0224f25c[2];
extern void *data_ov004_0224f264[2];
extern void *data_ov004_0224f274[2];
BOOL func_ov004_0223eeb8(u16 *p);
}

class Unk_ov004_0223e9bc {
public:
    BOOL func_ov004_0223e9bc();
    u16 *func_ov004_0223e9c0();
    BOOL func_ov004_0223e9c8();
    void func_ov004_0223e9d8();
};

class Unk_ov004_0224f284 : public GameProc {
public:
    typedef BOOL (Unk_ov004_0224f284::*Fn)();

    Unk_ov004_0224f284();
    virtual ~Unk_ov004_0224f284();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    BOOL func_ov004_0223ea98();
    BOOL func_ov004_0223ef44();
    void func_ov004_0223eb8c();
    void func_ov004_0223ef60();
    BOOL func_ov004_0223f018(u16 *item, s32 code);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
};

static inline BOOL Unk_ov004_0223eb8c_Chk(u16 *p) {
    u16 c = 0xfff1;
    if (Item_IsFurniture(p)) {
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(&c)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

struct ItemId {
    u16 v;
    ItemId(u16 x) { v = x; }
    ~ItemId();
};

static inline BOOL Unk_ov004_0223ed40_Chk(u16 *p, u16 *c, u16 k) {
    if (Item_IsFurniture(p)) {
        *c = k;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(c)) return TRUE;
        return FALSE;
    }
    if (*p == k) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov004_0223f210_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" Unk_ov004_0224f284 *func_ov004_0223f2b0() { return new Unk_ov004_0224f284; }

extern "C" u8 *func_ov004_0223f278() {
    if (func_020b5254()) {
        return (u8 *)data_ov004_0224502c + (func_020b5284() << 10);
    }
    if (func_020b50e8() == 10) return (u8 *)data_ov004_0224482c;
    return (u8 *)data_ov004_02244c2c;
}

extern "C" s32 func_ov004_0223f210(u16 *p) {
    u16 c;
    Item_FromPlacedForm(&c, p);
    if (Item_IsFurniture(&c)) return 0x19;
    if (Item_IsHoldable(&c)) goto e;
    if (!Unk_ov004_0223f210_R(&c, 0x156c, 0x156c)) goto rest;
e:
    return 0x42;
rest:
    if (c >= 0x13a8 && c <= 0x13c7) return 9;
    return Item_GetKind(&c);
}

Unk_ov004_0224f284::Unk_ov004_0224f284() {}

Unk_ov004_0224f284::~Unk_ov004_0224f284() {}

// scene registration entry (referenced from main by address only)
struct Unk_ov004_0224f26c_Entry {
    void *(*factory)();
    u16 a;
    u16 b;
};
Unk_ov004_0224f26c_Entry data_ov004_0224f26c = {(void *(*)())func_ov004_0223f2b0, 0xc6, 0xd3};

const u32 data_ov004_0224502c[1536] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x1, 0, 0x19, 0, 0x19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x4, 0, 0x42, 0x42, 0x31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x19, 0, 0, 0x1, 0x2, 0x42, 0x42, 0x42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x19, 0, 0, 0x4, 0x4, 0x29, 0x31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x19, 0, 0, 0x20, 0x20, 0x22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x19, 0, 0x19, 0, 0x19, 0, 0x19, 0, 0x19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x20, 0, 0x1, 0x1, 0x2, 0x2, 0, 0x29, 0x31, 0, 0, 0, 0, 0, 0,
    0, 0x20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x20, 0, 0x42, 0, 0x4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x20, 0, 0x42, 0, 0x4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x22, 0, 0x42, 0, 0x4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x22, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x4, 0, 0x20, 0x20, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x4, 0, 0x20, 0x20, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x4, 0, 0x22, 0x20, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x4, 0, 0x22, 0x20, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x29, 0, 0x22, 0x20, 0, 0x42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x1, 0, 0x19, 0, 0x19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x2, 0, 0, 0, 0, 0, 0, 0, 0x19, 0, 0, 0, 0, 0, 0,
    0, 0x2, 0, 0x19, 0, 0x19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0x26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0x19, 0, 0x19, 0, 0, 0, 0x19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

const u32 data_ov004_0224482c[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x42, 0x5, 0x5, 0x5, 0x9, 0xa, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0x31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

const u32 data_ov004_02244c2c[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0x19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0x19, 0, 0, 0, 0x19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0x31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void *data_ov004_0224f254[2] = {(void *)_ZN18Unk_ov004_0224f28419func_ov004_0223ef44Ev, 0};

void *data_ov004_0224f25c[2] = {(void *)_ZN18Unk_ov004_0224f28419func_ov004_0223ea98Ev, 0};

void *data_ov004_0224f274[2] = {(void *)_ZN18Unk_ov004_0223e9bc19func_ov004_0223e9c8Ev, 0};

void *data_ov004_0224f264[2] = {(void *)_ZN18Unk_ov004_0223e9bc19func_ov004_0223e9bcEv, 0};

BOOL Unk_ov004_0224f284::vfunc_00() {
    unk_50 = func_020b5284();
    if (func_020b5254()) {
        unk_54 = 0;
    } else if (func_020b50e8() == 0xa) {
        unk_54 = 1;
    } else if (func_020b50e8() == 0xf) {
        unk_54 = 2;
    } else {
        unk_54 = 3;
    }
    static Fn tbl[4] = {*(Fn *)data_ov004_0224f254, *(Fn *)data_ov004_0224f25c, *(Fn *)data_ov004_0224f274, *(Fn *)data_ov004_0224f264};
    (this->*tbl[unk_54])();
    return TRUE;
}

BOOL Unk_ov004_0224f284::onExecute() { return TRUE; }

BOOL Unk_ov004_0224f284::onDraw() { return TRUE; }

BOOL Unk_ov004_0224f284::vfunc_0c() { return TRUE; }

BOOL Unk_ov004_0224f284::func_ov004_0223f018(u16 *item, s32 code) {
    u8 *tbl = func_ov004_0223f278();
    void *g = gSceneBlockMap;
    s32 y;
    s32 x;
    s32 hx;
    s32 hy;
    u16 *t;
    u32 *row;
    if (g) {
        s32 x0 = 0;
        for (y = 0; y < 16; y++) {
            x = x0;
            row = (u32 *)(tbl + y * 0x40);
            if (x < 16) {
                goto testx;
            loopx:
                hx = x >> 4;
                hy = y >> 4;
                t = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (t) {
                    BOOL r;
                    s32 f1 = 0, f2 = 0;
                    if (Item_IsFurniture(t)) {
                        u16 c = 0xfff1;
                        s32 a = Item_GetFurnitureIndex(t);
                        r = (a == Item_GetFurnitureIndex(&c)) ? 1 : f1;
                    } else {
                        r = (*t == 0xfff1) ? 1 : f2;
                    }
                    if (r) {
                        if (code == row[x]) {
                            if (BlockMap_SetItemAtUnit(g, item, x, y, 0)) return TRUE;
                        }
                    }
                }
                x++;
            testx:
                if (x < 16) goto loopx;
            }
        }
    }
    return FALSE;
}

void Unk_ov004_0224f284::func_ov004_0223ef60() {
    u32 i;
    s32 f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u16 v[3];
    for (i = 0; i < 0x25; i++) {
        BOOL a, b;
        v[0] = 0xfff1;
        u16 *r = func_020ae844(data_021ed104, i, &v[0]);
        if (Item_IsFurniture(r)) {
            v[1] = 0xfff1;
            s32 x = Item_GetFurnitureIndex(r);
            a = (x == Item_GetFurnitureIndex(&v[1])) ? 1 : f1;
        } else {
            a = (*r == 0xfff1) ? 1 : f2;
        }
        if (!a) {
            if (Item_IsFurniture(&v[0])) {
                v[2] = 0xfff1;
                s32 x = Item_GetFurnitureIndex(&v[0]);
                b = (x == Item_GetFurnitureIndex(&v[2])) ? 1 : f3;
            } else {
                b = (v[0] == 0xfff1) ? 1 : f4;
            }
            if (!b) {
                func_ov004_0223f018(r, func_ov004_0223f210(&v[0]));
            }
        }
    }
}

BOOL Unk_ov004_0224f284::func_ov004_0223ef44() {
    if (func_020b50e8() != 0x1f) func_ov004_0223ef60();
    return TRUE;
}

extern "C" BOOL func_ov004_0223eeb8(u16 *p) {
    s32 t = func_020b50e8();
    if (func_020b5268(t)) {
        s32 r = func_020ae82c(data_021ed104, p);
        BOOL k = FALSE;
        if (r != -1) k = TRUE;
        return k;
    }
    if (t == 10) {
        BOOL k = TRUE;
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x3e04 && v <= 0x3e23) r = TRUE;
        if (!r) {
            if (func_020ad8d0(data_021ed2d4, p) == -1) k = FALSE;
        }
        return k;
    }
    s32 r = func_020acf90(data_021ed2c0, p);
    BOOL k = FALSE;
    if (r != -1) k = TRUE;
    return k;
}

extern "C" u16 *func_ov004_0223ed40(s32 x, s32 y) {
    static ItemId dflt(0xfff1);
    u16 cv[3];
    void *g = gSceneBlockMap;
    if (g) {
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *r4 = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (r4) {
            if (!Unk_ov004_0223ed40_Chk(r4, &cv[1], 0xfff1)) {
                if (Item_IsFurnitureOrF031(r4)) {
                    void *o = func_ov004_022355d8(func_ov004_02235718(), x, y, 0);
                    if (!o) return &dflt.v;
                    static ItemId v2(0xfff1);
                    v2.v = Item_MakeFurniture(FtrActor_GetFtrIndex(o), 0);
                    if (func_ov004_0223eeb8(&v2.v)) return &v2.v;
                } else if (Item_IsNormalItem(r4)) {
                    if (!Unk_ov004_0223ed40_Chk(r4, &cv[2], 0x1547)) {
                        if (func_ov004_0223eeb8(r4)) return r4;
                    }
                }
            }
        }
    }
    return &dflt.v;
}

extern "C" s32 func_ov004_0223ecf4(s32 x, s32 y) {
    u8 *tbl = func_ov004_0223f278();
    s32 n = 0;
    s32 j = n;
    s32 i0 = 0;
    goto testj;
loopj:
    {
        s32 i = i0;
        u32 *row = (u32 *)(tbl + j * 0x40);
        goto testi;
    loopi:
        if (row[i] == 0x22) {
            if (i == x && j == y) return n;
            n++;
        }
        i++;
    testi:
        if (i < 16) goto loopi;
        j++;
    }
testj:
    if (j < 16) goto loopj;
    return -1;
}

extern "C" BOOL func_ov004_0223ec44(s32 *px, s32 *py, s32 code) {
    u8 *tbl = func_ov004_0223f278();
    u16 c = 0xfff1;
    func_020ae844(data_021ed104, code, &c);
    s32 key = func_ov004_0223f210(&c);
    s32 n = 0;
    s32 i = n;
    goto test0;
loop0:
    {
        u16 c2 = 0xfff1;
        func_020ae844(data_021ed104, i, &c2);
        if (code == i) goto done0;
        if (key == func_ov004_0223f210(&c2)) n++;
        i++;
    }
test0:
    if ((u32)i < 0x25) goto loop0;
done0:
    {
        s32 cnt = 0;
        s32 y = cnt;
        s32 x0 = 0;
        goto testy;
    loopy:
        {
            s32 x = x0;
            u32 *row = (u32 *)(tbl + y * 0x40);
            goto testx;
        loopx:
            if (key == row[x]) {
                if (cnt == n) {
                    *px = x;
                    *py = y;
                    return TRUE;
                }
                cnt++;
            }
            x++;
        testx:
            if (x < 16) goto loopx;
            y++;
        }
    testy:
        if (y < 16) goto loopy;
    }
    *py = -1;
    *px = *py;
    return FALSE;
}

void Unk_ov004_0224f284::func_ov004_0223eb8c() {
    u32 i;
    s32 f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    u16 v[3];
    for (i = 0; i < 6; i++) {
        BOOL a, b;
        v[0] = 0xfff1;
        u16 *r = func_020ad8e8(data_021ed2d4, i, &v[0]);
        if (Item_IsFurniture(r)) {
            v[1] = 0xfff1;
            s32 x = Item_GetFurnitureIndex(r);
            a = (x == Item_GetFurnitureIndex(&v[1])) ? 1 : f1;
        } else {
            a = (*r == 0xfff1) ? 1 : f2;
        }
        if (!a) {
            if (Item_IsFurniture(&v[0])) {
                v[2] = 0xfff1;
                s32 x = Item_GetFurnitureIndex(&v[0]);
                b = (x == Item_GetFurnitureIndex(&v[2])) ? 1 : f3;
            } else {
                b = (v[0] == 0xfff1) ? 1 : f4;
            }
            if (!b) {
                func_ov004_0223f018(r, func_ov004_0223f210(&v[0]));
            }
        }
    }
}

BOOL Unk_ov004_0224f284::func_ov004_0223ea98() {
    func_ov004_0223eb8c();
    void *g = gSceneBlockMap;
    u16 v;
    v = 0xfff1;
    v = 0x3e04;
    BlockMap_SetItemAtUnit(g, &v, 6, 10, 0);
    v = 0x3e08;
    BlockMap_SetItemAtUnit(g, &v, 7, 10, 0);
    v = 0x3e0c;
    BlockMap_SetItemAtUnit(g, &v, 8, 10, 0);
    v = 0x3e10;
    BlockMap_SetItemAtUnit(g, &v, 9, 10, 0);
    v = 0x3e14;
    BlockMap_SetItemAtUnit(g, &v, 6, 11, 0);
    v = 0x3e18;
    BlockMap_SetItemAtUnit(g, &v, 7, 11, 0);
    v = 0x3e1c;
    BlockMap_SetItemAtUnit(g, &v, 8, 11, 0);
    v = 0x3e20;
    BlockMap_SetItemAtUnit(g, &v, 9, 11, 0);
    return TRUE;
}

extern "C" u16 *func_ov004_0223ea90(s32 x, s32 y) { return func_ov004_0223ed40(x, y); }

void Unk_ov004_0223e9bc::func_ov004_0223e9d8() {
    u32 i = 0;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u16 buf[3];
    for (; i < 3; i++) {
        u16 *r4;
        BOOL f;
        buf[0] = 0xfff1;
        r4 = func_020acfa8(data_021ed2c0, i, buf);
        if (Item_IsFurniture(r4)) {
            s32 a, b;
            buf[1] = 0xfff1;
            a = Item_GetFurnitureIndex(r4);
            b = Item_GetFurnitureIndex(&buf[1]);
            f = (a == b) ? 1 : z1;
        } else {
            f = (*r4 == 0xfff1) ? 1 : z2;
        }
        if (!f) {
            if (Item_IsFurniture(buf)) {
                s32 a, b;
                buf[2] = 0xfff1;
                a = Item_GetFurnitureIndex(buf);
                b = Item_GetFurnitureIndex(&buf[2]);
                f = (a == b) ? 1 : z3;
            } else {
                f = (buf[0] == 0xfff1) ? 1 : z4;
            }
            if (!f) {
                ((Unk_ov004_0224f284 *)this)->func_ov004_0223f018(r4, func_ov004_0223f210(buf));
            }
        }
    }
}

BOOL Unk_ov004_0223e9bc::func_ov004_0223e9c8() {
    func_ov004_0223e9d8();
    return TRUE;
}

u16 *Unk_ov004_0223e9bc::func_ov004_0223e9c0() {
    return ((u16 *(*)())func_ov004_0223ed40)();
}

BOOL Unk_ov004_0223e9bc::func_ov004_0223e9bc() {
    return TRUE;
}


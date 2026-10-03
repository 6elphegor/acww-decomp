#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct TownState {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
extern u16 sNativeFruitTrees[];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
extern void *gSceneBlockMap;
}

extern "C" {
extern void *gFgDataIndex;
}

extern "C" {
extern u32 data_021e58a8[];
}

extern "C" {
extern u32 data_021e3680[];
}

extern "C" {
Unk_0204da0c_Map *TownBlockMap_Get();
}

extern "C" {
u16 *BlockMap_GetItemPtr(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
}

extern "C" {
s32 BlockMap_SetItemAtUnit(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
}

extern "C" {
s32 BlockMap_ClearBuriedAtUnit(Unk_0204da0c_Map *m, s32 x, s32 y);
}

extern "C" {
s32 _ZN8BlockMap13func_0204e300Eii(void *m, s32 x, s32 y);
}

extern "C" {
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
void Clock_GetDate(void *p);
}

extern "C" {
s32 Date_IsAfterOrEqual(void *a, void *b);
}

extern "C" {
s32 Date_GetWeekday(u32 a, u32 b, u32 c);
}

extern "C" {
void TownState_ClearUnk0c(void *p);
}

extern "C" {
void TownState_ClearUnk16(void *p);
}

extern "C" {
void TownState_ClearEvents(void *p);
}

extern "C" {
void TownState_PickNextWeekDate(void *p, void *q);
}

extern "C" {
void Town_ReplaceSouthCedars(void *p);
}

extern "C" {
void Town_InitNew();
}

extern "C" {
s32 func_02063b8c(s32 a);
}

extern "C" {
BOOL Item_IsTreeStage0(u16 *p);
}

extern "C" {
s32 func_0205b470();
}

extern "C" {
s32 _ZN8BlockMap4freeEi(void *a, void *heap);
}

extern "C" {
void _ZN8BlockMap5clearEv();
}

extern "C" {
s32 _ZN8BlockMap5buildEP18Unk_0204debc_EntryP16Unk_0204e1a8_Outi(void *a, void *b, void *c, void *heap);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
void *Heap_Alloc(void *heap, s32 size);
}

extern "C" {
struct Unk_020b5350_Info {
    u32 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};
}

extern "C" {
Unk_020b5350_Info *func_020b5350();
}

extern "C" {
s32 func_020b52d0();
}

extern "C" {
u32 func_020603c8(void *p);
}

extern "C" {
u32 _ZN9HouseData13func_020604f8EiPv(void *p, u32 a, void *heap);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_020b52f8();
}

extern "C" {
u32 func_020b5328();
}

extern "C" {
s32 func_020b51a4();
}

extern "C" {
u32 func_020b51d4();
}

extern "C" {
s32 func_020b530c();
}

extern "C" {
void *_ZN7TownMap17buildBlockEntriesEi(void *p, void *heap);
}

extern "C" {
void *ItemGrid_Alloc(void *heap, s32 n);
}

extern "C" {
void *VillagerRoom_BuildEntry(void *a, u32 b, void *heap);
}

extern "C" {
void *MapBlockEntry_NewArray(s32 n, void *heap);
}

extern "C" {
s32 FgData_HasLayout(s32 a, u32 b);
}

extern "C" {
u32 FgData_CreateLayoutGrid(s32 a, u32 b, void *heap, s32 n);
}

extern "C" {
Unk_0204da0c_Map *HouseRoomMaps_GetForScene(s32 a);
}

extern "C" {
s32 FgData_ReadVillagerLayout(void *a, s32 b, s32 c, s32 d);
}

static inline BOOL Unk_0204c5c0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_0204cab4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

// ---- Town_SetNativeFruitTrees ----
static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void Town_ClearBorderTrees(Unk_0204da0c_Map *p);

// ---- Town_ClearBorderTrees ----
static inline BOOL Unk_0204c6a4_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}

// ---- SceneMapModule ----
class SceneMapModule : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *unk_54;
    /* 0x58 */ s32 unk_58;

    s32 buildSceneMap(void *heap);
    void getHouseUnk(u32 *out, s32 n);
    void setOwnedGrid(u32 v, s32 idx);
    void freeOwnedGrids(void *heap);
    void allocOwnedGrids(void *heap);
    u32 *buildEntries(u32 *src, s32 n, void *heap);
    u32 loadLayoutGrid(u32 v, s32 idx, void *heap);
};
extern "C" SceneMapModule *SceneMapModule_New();
extern "C" Unk_0204da0c_Map *BlockMap_GetForArea(s32 a);
extern "C" void Town_ClearBorderTrees(Unk_0204da0c_Map *p);

extern "C" SceneMapModule *SceneMapModule_New() {
    return new SceneMapModule;
}

extern "C" Unk_0204da0c_Map *BlockMap_GetForArea(s32 a) {
    Unk_0204da0c_Map *r = NULL;
    if (a == 0) {
        r = TownBlockMap_Get();
    } else if (func_020b530c() == 1) {
        r = HouseRoomMaps_GetForScene(a);
    }
    return r;
}

void SceneMapModule::allocOwnedGrids(void *heap) {
    s32 i;
    if (unk_58 > 0) {
        unk_54 = (u32 *)Heap_Alloc(heap, unk_58 * 4);
        if (unk_54 != NULL) {
            for (i = 0; i < unk_58; i++) unk_54[i] = 0;
        }
    }
}

void SceneMapModule::freeOwnedGrids(void *heap) {
    s32 i;
    if (unk_54 != NULL) {
        if (unk_58 > 0) {
            for (i = 0; i < unk_58; i++) {
                if (unk_54[i] != 0) {
                    Heap_Free(heap, (void *)unk_54[i]);
                    unk_54[i] = 0;
                }
            }
            Heap_Free(heap, unk_54);
            unk_54 = NULL;
            unk_58 = 0;
        }
    }
}

void SceneMapModule::setOwnedGrid(u32 v, s32 idx) {
    if (unk_54 != NULL && idx < unk_58) unk_54[idx] = v;
}

u32 SceneMapModule::loadLayoutGrid(u32 v, s32 idx, void *heap) {
    s32 k = 4;
    u32 m = v & 0xfff;
    u32 r = 0;
    u8 c = data_020e416c;
    if (Unk_0204c5c0_IsZero(c)) {
        k = 0;
    } else if (Unk_0204cab4_IsOne(c)) {
        k = 1;
    }
    if (k != 4) {
        if (FgData_HasLayout(k, m) == 1) {
            r = FgData_CreateLayoutGrid(k, m, heap, 4);
            setOwnedGrid(r, idx);
        }
    }
    return r;
}

u32 *SceneMapModule::buildEntries(u32 *src, s32 n, void *heap) {
    u32 *r = NULL;
    s32 i;
    if (func_020b50e8() == 0 || func_020b50e8() == 0x31 || func_020b50e8() == 0x2c) {
        r = (u32 *)_ZN7TownMap17buildBlockEntriesEi(data_021e3680, heap);
    } else if (func_020b52f8()) {
        r = (u32 *)_ZN9HouseData13func_020604f8EiPv(data_021e58a8, func_020b5328(), heap);
    } else if (func_020b51a4()) {
        i = func_020b51d4();
        r = (u32 *)ItemGrid_Alloc(heap, 4);
        setOwnedGrid((u32)r, 0);
        r = (u32 *)VillagerRoom_BuildEntry(r, i, heap);
    } else if (src != NULL && n > 0) {
        r = (u32 *)MapBlockEntry_NewArray(n, heap);
        if (r != NULL) {
            for (i = 0; i < n; i++) {
                u32 *e = r + i * 4;
                e[0] = *src;
                e[1] = loadLayoutGrid(e[0], i, heap);
                src++;
            }
        }
    }
    return r;
}

extern "C" void Town_ClearBorderTrees(Unk_0204da0c_Map *p) {
    s32 x;
    u16 *t;
    u16 *t2;
    u16 val;
    Unk_0204da0c_Size *sz;
    s32 cx;
    s32 y;
    s32 w;
    s32 h;
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
    s32 cy;
    if (p == NULL) return;
    sz = &p->unk_04;
    w = sz->w;
    h = sz->h;
    val = 0xfff1;
    x0 = 0;
    y0 = 0;
    x1 = 0;
    y1 = 0;
    FieldUnit_FromBlockUnit(&x0, &y0, 1, 1, 0, 0);
    FieldUnit_FromBlockUnit(&x1, &y1, w - 2, h - 2, 15, 15);
    y = y0;
    x = x0;
    if (x <= x1) {
        goto test;
    loop:
        _ZN8BlockMap13func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = BlockMap_GetItemPtr(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!Item_IsTreeStage0(t)) BlockMap_SetItemAtUnit(p, &val, x, y, 0);
                }
            }
        x++;
    test:
        if (x <= x1) goto loop;
    }
    y = y0;
    goto test2;
loop2:
    {
        x = x0;
        _ZN8BlockMap13func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = BlockMap_GetItemPtr(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!Item_IsTreeStage0(t)) BlockMap_SetItemAtUnit(p, &val, x, y, 0);
                }
            }
        x = x1;
        _ZN8BlockMap13func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t2 = BlockMap_GetItemPtr(p, cx, cy, x - (cx << 4), y - ((u32)cy << 4), 0);
            if (t2) {
                if (Unk_0204c6a4_Check(t2)) {
                    if (!Item_IsTreeStage0(t2)) BlockMap_SetItemAtUnit(p, &val, x, y, 0);
                }
            }
    }
    y++;
test2:
    if (y <= y1) goto loop2;
}

void SceneMapModule::getHouseUnk(u32 *out, s32 n) {
    if (func_020b52d0()) *out = func_020603c8(data_021e58a8);
}

s32 SceneMapModule::buildSceneMap(void *heap) {
    Unk_020b5350_Info *info;
    void *h;
    u32 *src;
    u32 *r;
    struct { s32 a; s32 b; } sz;
    unk_54 = NULL;
    unk_58 = 0;
    if (gSceneBlockMap == NULL) {
        gSceneBlockMap = Heap_Alloc(heap, 0x20);
        if (gSceneBlockMap != NULL) _ZN8BlockMap5clearEv();
    }
    if (gSceneBlockMap != NULL) {
        info = func_020b5350();
        h = gCurrentHeap;
        src = NULL;
        sz.a = 0;
        sz.b = 0;
        if (info != NULL) {
            u32 nb = info->unk_05;
            u32 na = info->unk_04;
            sz.a = na;
            sz.b = nb;
            unk_58 = sz.a * sz.b;
            allocOwnedGrids(h);
            src = info->unk_00;
            getHouseUnk(src, unk_58);
            unk_50 = info->unk_06;
        }
        r = buildEntries(src, unk_58, h);
        if (r != NULL) {
            _ZN8BlockMap5buildEP18Unk_0204debc_EntryP16Unk_0204e1a8_Outi(gSceneBlockMap, r, &sz, h);
            if (Unk_0204c5c0_IsZero(data_020e416c)) Town_ClearBorderTrees((Unk_0204da0c_Map *)gSceneBlockMap);
            Heap_Free(h, r);
        }
    }
    return TRUE;
}

BOOL SceneMapModule::vfunc_00() {
    if (!buildSceneMap(gCurrentHeap)) return FALSE;
    func_0205b470();
    return TRUE;
}

BOOL SceneMapModule::vfunc_0c() {
    void *heap = gCurrentHeap;
    if (gSceneBlockMap != NULL) {
        freeOwnedGrids(heap);
        _ZN8BlockMap4freeEi(gSceneBlockMap, heap);
        Heap_Free(heap, gSceneBlockMap);
        gSceneBlockMap = NULL;
    }
    return TRUE;
}

BOOL SceneMapModule::onExecute() { return TRUE; }

BOOL SceneMapModule::onDraw() { return TRUE; }


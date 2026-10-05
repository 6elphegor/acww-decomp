#include "types.h"
#include "sys/ProcProfile.h"
#include "Unk_020d8c7c.h"
#include "town/SceneMapInfo.h"
#include "sys/ClockDate.h"
#include "game/Unk_0204da0c_Size.h"
#include "game/Unk_0204da0c_Map.h"
#include "town/TownState.h"
#include "town/SceneMapModule.h"






extern "C" {
extern u16 sNativeFruitTrees[];
}

extern "C" {
extern u8 gFieldSceneKind;
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
extern u32 gSaveHouse[];
}

extern "C" {
extern u32 gSaveTownMap[];
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
s32 _ZN8BlockMap14clearPlantFlagEii(void *m, s32 x, s32 y);
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
s32 Random_GlobalBelow(s32 a);
}

extern "C" {
BOOL Item_IsTreeStage0(u16 *p);
}

extern "C" {
s32 FengShui_UpdateHouse();
}

extern "C" {
s32 _ZN8BlockMap4freeEi(void *a, void *heap);
}

extern "C" {
void _ZN8BlockMap5clearEv();
}

extern "C" {
s32 _ZN8BlockMap5buildEP13MapBlockEntryP12BlockMapSizei(void *a, void *b, void *c, void *heap);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
void *Heap_Alloc(void *heap, s32 size);
}

extern "C" {
}

extern "C" {
SceneMapInfo *Scene_GetMapInfo();
}

extern "C" {
s32 Scene_InUnk6To8();
}

extern "C" {
u32 House_GetLevelAcreId(void *p);
}

extern "C" {
u32 _ZN9HouseData19buildRoomBlockEntryEiPv(void *p, u32 a, void *heap);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 Scene_InHouseRoom();
}

extern "C" {
u32 Scene_GetHouseRoom();
}

extern "C" {
s32 Scene_InVillagerHouse();
}

extern "C" {
u32 Scene_GetVillagerHouse();
}

extern "C" {
s32 SceneId_IsHouseRoom();
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
extern "C" SceneMapModule *SceneMapModule_New();
extern "C" Unk_0204da0c_Map *BlockMap_GetForArea(s32 a);
extern "C" void Town_ClearBorderTrees(Unk_0204da0c_Map *p);

extern "C" SceneMapModule *SceneMapModule_New() {
    return new SceneMapModule;
}

// Process profile of SceneMapModule_New (gProfileTable entry): factory, execute and draw priorities.
ProcProfile data_020da3c4 = {(void *(*)())SceneMapModule_New, 0xc, 0xf};

extern "C" Unk_0204da0c_Map *BlockMap_GetForArea(s32 a) {
    Unk_0204da0c_Map *r = NULL;
    if (a == 0) {
        r = TownBlockMap_Get();
    } else if (SceneId_IsHouseRoom() == 1) {
        r = HouseRoomMaps_GetForScene(a);
    }
    return r;
}

void SceneMapModule::allocOwnedGrids(void *heap) {
    s32 i;
    if (numOwnedGrids > 0) {
        ownedGrids = (u32 *)Heap_Alloc(heap, numOwnedGrids * 4);
        if (ownedGrids != NULL) {
            for (i = 0; i < numOwnedGrids; i++) ownedGrids[i] = 0;
        }
    }
}

void SceneMapModule::freeOwnedGrids(void *heap) {
    s32 i;
    if (ownedGrids != NULL) {
        if (numOwnedGrids > 0) {
            for (i = 0; i < numOwnedGrids; i++) {
                if (ownedGrids[i] != 0) {
                    Heap_Free(heap, (void *)ownedGrids[i]);
                    ownedGrids[i] = 0;
                }
            }
            Heap_Free(heap, ownedGrids);
            ownedGrids = NULL;
            numOwnedGrids = 0;
        }
    }
}

void SceneMapModule::setOwnedGrid(u32 v, s32 idx) {
    if (ownedGrids != NULL && idx < numOwnedGrids) ownedGrids[idx] = v;
}

u32 SceneMapModule::loadLayoutGrid(u32 v, s32 idx, void *heap) {
    s32 k = 4;
    u32 m = v & 0xfff;
    u32 r = 0;
    u8 c = gFieldSceneKind;
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
    if (Scene_GetCurrent() == 0 || Scene_GetCurrent() == 0x31 || Scene_GetCurrent() == 0x2c) {
        r = (u32 *)_ZN7TownMap17buildBlockEntriesEi(gSaveTownMap, heap);
    } else if (Scene_InHouseRoom()) {
        r = (u32 *)_ZN9HouseData19buildRoomBlockEntryEiPv(gSaveHouse, Scene_GetHouseRoom(), heap);
    } else if (Scene_InVillagerHouse()) {
        i = Scene_GetVillagerHouse();
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
    sz = &p->size;
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
        _ZN8BlockMap14clearPlantFlagEii(p, x, y);
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
        _ZN8BlockMap14clearPlantFlagEii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = BlockMap_GetItemPtr(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!Item_IsTreeStage0(t)) BlockMap_SetItemAtUnit(p, &val, x, y, 0);
                }
            }
        x = x1;
        _ZN8BlockMap14clearPlantFlagEii(p, x, y);
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
    if (Scene_InUnk6To8()) *out = House_GetLevelAcreId(gSaveHouse);
}

s32 SceneMapModule::buildSceneMap(void *heap) {
    SceneMapInfo *info;
    void *h;
    u32 *src;
    u32 *r;
    struct { s32 a; s32 b; } sz;
    ownedGrids = NULL;
    numOwnedGrids = 0;
    if (gSceneBlockMap == NULL) {
        gSceneBlockMap = Heap_Alloc(heap, 0x20);
        if (gSceneBlockMap != NULL) _ZN8BlockMap5clearEv();
    }
    if (gSceneBlockMap != NULL) {
        info = Scene_GetMapInfo();
        h = gCurrentHeap;
        src = NULL;
        sz.a = 0;
        sz.b = 0;
        if (info != NULL) {
            u32 nb = info->height;
            u32 na = info->width;
            sz.a = na;
            sz.b = nb;
            numOwnedGrids = sz.a * sz.b;
            allocOwnedGrids(h);
            src = info->acreIds;
            getHouseUnk(src, numOwnedGrids);
            moduleParam = info->moduleParam;
        }
        r = buildEntries(src, numOwnedGrids, h);
        if (r != NULL) {
            _ZN8BlockMap5buildEP13MapBlockEntryP12BlockMapSizei(gSceneBlockMap, r, &sz, h);
            if (Unk_0204c5c0_IsZero(gFieldSceneKind)) Town_ClearBorderTrees((Unk_0204da0c_Map *)gSceneBlockMap);
            Heap_Free(h, r);
        }
    }
    return TRUE;
}

BOOL SceneMapModule::onCreate() {
    if (!buildSceneMap(gCurrentHeap)) return FALSE;
    FengShui_UpdateHouse();
    return TRUE;
}

BOOL SceneMapModule::onDelete() {
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


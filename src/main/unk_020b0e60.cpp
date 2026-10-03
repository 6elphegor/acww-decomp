#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

extern "C" {
extern u32 OVERLAY_0_ID[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_69_ID[];
extern void *gCommManager;
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern void *gSceneBlockMap;
extern u8 data_021dfd8c;
extern u8 data_021e58a6;
extern u8 data_021ed2e6[];
extern u8 gTownReturnPos;
extern u32 gCurrentHeap;
extern s32 gFrameCounter;
extern u32 data_027e0148[];
}

struct Info {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    s8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
};

struct NibblePair {
    u8 lo : 4;
    u8 hi : 4;
};

struct Bits {
    u8 a : 2;
    u8 b : 6;
};

struct Flags1 {
    u8 mode : 2;
    u8 idx : 6;
};

struct Flags2 {
    u16 a : 6;
    u16 b : 6;
    u16 c : 4;
};

struct Grid {
    u8 *data;
    u32 w;
    u32 h;
};
typedef Grid Map;

struct Pal {
    u8 pad[0x18];
    u8 count;
};

struct Ctx;

class Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual u16 *vfunc_64();
    virtual void vfunc_68();
    virtual BOOL vfunc_6c(u32 a);
};

struct ItemId {
    u16 v;
    ItemId(u16 x) : v(x) {}
    ~ItemId();
};
typedef ItemId Marker2;

// Info table of the next unit
extern Info data_020d0a7c[];

class FxVec3 {
public:
    FxVec3() : unk_00(0x10000), unk_04(0), unk_08(0x1e000) {}
    ~FxVec3();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

inline BOOL isFlag1() {
    return gFieldSceneKind == 1;
}

static inline BOOL IsEnabled() {
    if (gFieldSceneKind == 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL func_020b2768_is_flag() {
    if (gFieldSceneKind == 0) {
        return TRUE;
    }
    return FALSE;
}

static inline u8 *GetCell(Grid *g, s32 x, s32 y) {
    if (x < g->w && y < g->h && g->data) {
        return g->data + (x + y * g->w) * 0x28;
    }
    return NULL;
}

inline BOOL InRange(const u16 &v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}
inline BOOL InRangeV(u16 v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}
inline BOOL InRange32(const u32 &v)
{
    BOOL r = FALSE;
    if (v >= 0x5000 && v <= 0x5021) {
        r = TRUE;
    }
    return r;
}

struct Unk_020b1d3c_Pad {
    s32 v[2];
    Unk_020b1d3c_Pad() {}
    ~Unk_020b1d3c_Pad() {}
};

struct Mtx33 {
    s32 m[9];
};

struct Obj_b4 {
    u32 flags;
    u8 pad[0x24];
    Mtx33 mtx;
};

class Unk_020b1ddc {
public:
    void func_020b1ddc();
    void func_020b1e74();

    u8 pad[0xb4];
    Obj_b4 *unk_b4;
};

class LightLevel {
public:
    LightLevel();
    ~LightLevel();
    s32 getLevel();
    BOOL switchLight(BOOL on, s32 a, s32 b, u32 param);
    void update();
    BOOL switchLightAnimated(BOOL on);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u16 unk_12;
};

class DoorLight {
public:
    DoorLight();
    ~DoorLight();
    void apply(Ctx *c, s32 t);
    void bindMaterial(Ctx *c);
    /* 0x00 */ s8 unk_00;
};

class WindowLight {
public:
    WindowLight();
    ~WindowLight();
    void apply(Ctx *c, s32 t);
    void bindMaterial(Ctx *c);
    /* 0x00 */ s8 unk_00;
};

class LampLights {
public:
    LampLights();
    ~LampLights();
    virtual const char *getMaterialName(s32 i);
    void apply(Pal *p, s32 t);
    BOOL isLampMaterial(s32 v);
    void bindMaterials(Ctx *c);

    /* 0x04 */ s8 unk_04[3];
    /* 0x08 */ LightLevel unk_08;
};

class BuildingLights : public LightLevel {
public:
    BuildingLights();
    ~BuildingLights();
    BOOL isLit();
    BOOL setLit(BOOL on, s32 a, s32 b);
    void updateLights(Ctx *c);
    void bind(Ctx *c, BOOL on);

    /* 0x14 */ DoorLight unk_14;
    /* 0x18 */ LampLights unk_18;
    /* 0x34 */ WindowLight unk_34;
};

class Unk_020b23a0 {
public:
    u8 *func_020b23a0();
    void func_020b23a4();
};

class Unk_020b246c_Sub {
public:
    Unk_020b246c_Sub();
    ~Unk_020b246c_Sub();
};

class Unk_020b246c {
public:
    Unk_020b246c();
    ~Unk_020b246c();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_020b246c_Sub unk_04;
};

class Unk_020b24ac {
public:
    void func_020b24ac();
    Unk_020b24ac *func_020b24d4();

    /* 0x000 */ u8 unk_000[0x228];
    /* 0x228 */ u8 unk_228;
};

class UnitShapeQueryX {
public:
    UnitShapeQueryX();
    virtual ~UnitShapeQueryX();
};

class Unk_020e3dcc : public UnitShapeQueryX {
public:
    Unk_020e3dcc();
    virtual ~Unk_020e3dcc();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, volatile s32 x, volatile s32 y);
};

class Unk_020b28ac {
public:
    void func_020b28ac(s32 *outX, s32 *outY, s32 *outW, s32 *outH);
    BOOL func_020b2958(s32 *a, s32 *b, s32 *c, u32 idx);
    u32 func_020b29e4();
    BOOL func_020b2a0c(s32 *a, s32 *b, s32 *c, u32 idx);
    BOOL func_020b2a5c(s32 *a, s32 *b, u32 idx);
    BOOL func_020b2aac(s32 *a, s32 *b, u32 idx);
    BOOL func_020b2ae0(s32 *a, s32 *b, u32 idx);
    u32 func_020b2b0c();
    u32 func_020b2b28();
    u32 func_020b2b5c();
    u32 func_020b2b80();
    u32 func_020b2b98();
};

// overlay class whose vtable is at 0x02232c00 (only its D1 is in this unit)
class FieldObjectShapeQuery : public UnitShapeQueryX {
public:
    virtual void vfunc_08();
    virtual ~FieldObjectShapeQuery() {}
};

s32 Math_LerpFx(s32 t, s32 lo, s32 hi);

extern "C" {
void MTX_RotZ33_(void *m, s32 sn, s32 cs);
void MTX_Concat33(void *a, void *b, void *out);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
u32 MapBlock_HasAnyAttr(u8 *cell, u32 mask);
BOOL MapBlock_FindItemInRange(u8 *cell, u32 *a, u32 *b, ItemId *m, ItemId *c, u32 d);
u16 *MapBlock_GetItemPtr(u8 *cell, s32 a, s32 b, s32 c);
BOOL MapBlock_SetItem(u8 *cell, u16 *t, u32 x, u32 y, u32 z);
void TownUpdater_MarkEventApplied(u32 a);
u16 Item_MakePlayerHouse(u32 a);
BOOL Item_IsPlayerHouse(u16 *p);
s32 Item_GetSnowmanIndex(void *p);
BOOL Item_IsSnowman(void *p);
u16 Item_MakeNookShop(u32 a);
BOOL Item_IsNookShop(u16 *p);
u32 Item_MakeBuilding(u32 v);
s32 Item_GetFurnitureIndex(const u16 *p);
BOOL Item_IsFurniture(void);
BOOL BlockMap_RemoveStructureAt(Grid *g, u32 x, u32 y, u32 a, u32 b, Marker2 *m);
BOOL BlockMap_RemoveStructure(Map *m, s32 x, s32 y, s32 z);
void BlockMap_PutStructure(Map *m, u16 *p, s32 x, s32 y);
Map *TownBlockMap_Get(void);
u16 *BlockMap_GetItemPtr(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
u32 BlockMap_GetBlockAttr(Map *m, s32 x, s32 y);
void FieldUnit_FromBlockUnit(s32 *ox, s32 *oy, s32 x, s32 y, s32 a, s32 b);
s32 _ZN12G3dResAccess10findMatIdxEi(Ctx *c, const char *name);
void func_020639e8(char *buf, const char *fmt, ...);
u32 func_02063b8c(...);
void *File_LoadAlloc(const char *name, u32 a, u32 b, u32 c);
void Melody_PlayAt(void *p, s32 a);
void Pattern_CopyFields(void *p);
void TownFlagPattern_GetPattern(void *p);
void *TownFlagPattern_InitDefault(void *p);
void _ZN15TownFlagPatternD1Ev(void *p);
void _ZN15TownFlagPatternC1Ev(void *p);
void _ZN11CommManager9endRecordEjj(void *p, u32 a, u32 b);
void _ZN11CommManager11writeRecordEPhj(void *p, void *q, u32 n);
void _ZN11CommManager11beginRecordEv(void *p);
BOOL _ZN11CommManager7isMyAidEj(void *p, u32 a);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL SaveVillagers_Get(void *a, u32 b);
u32 Villager_GetWhereabouts(void);
void func_02084ffc(void);
void GulliverQuest_Init(void *a);
void Clock_GetMinuteHour(u8 *out);
void _ZN12Unk_020af53c13func_020af590EjPjS0_S0_PhS1_S1_(void *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g);
void Scene_GetWarpRequest(void);
s32 ScenePos_GetUnitZ(void *a);
s32 ScenePos_GetUnitX(void *a);
u32 Scene_GetCurrent(void);
BOOL Scene_InTown(void);
BOOL SceneId_IsVillagerHouse(u32 a);
BOOL SceneId_IsHouseRoom(u32 a);
void func_020e761c(void *p, s32 a, s32 b);
void Mem_Free(void *p);
void *func_021012bc(char *name);
void func_02101310(void *file);
BOOL func_02101340(void *file, const void *mode, void *arc);
void NNS_G3dMdlSetMdlAlpha(Ctx *c, s32 i, u8 v);
void NNS_G3dMdlSetMdlEmi(Pal *p, s32 i, u16 c);
void NNS_G3dMdlSetMdlDiff(Ctx *c, s32 i, u16 v);
void NNSi_G3dModifyMatFlag(Pal *p, s32 a, s32 b);
Obj *BuildingList_FindByItem(u32 a);
Obj *Building_FindNearPos(u32 a);
BOOL _ZN21FieldObjectShapeQuery8vfunc_08EPiS0_S0_ii(void *p, s32 *a, s32 *b, s32 *c, s32 x, s32 y);
u16 *_ZN13BuildingActor9getItemIdEv(Obj *o);
BOOL _ZN13BuildingActor15getEntranceTypeEv(void);
}


extern const u32 sLightFlickerTable[11];
extern const u16 data_020d0a14[52];
extern s32 data_020e3db4;
extern u8 data_021ee288;
extern u8 data_021ee28c;
extern u8 data_021ee290;
extern void *sStrBSizeArchive;
extern u32 data_021ee2a0;
extern s32 data_021ee2a4;
extern s32 data_021ee2ac;
extern FieldObjectShapeQuery data_021ee2b0;
extern u32 data_021ee2b4;
extern u32 data_021ee2bc;
extern char data_021ee2c4[12];
extern u8 data_021ee30c[0x22];
extern NibblePair data_021ee330[0x22];
extern u32 sStrBSizeTable[0x22];

// own prototypes
extern "C" {
u32 func_020b2c14(s32 v);
s32 func_020b2bac(u32 arg);
void StrBSize_Load(void);
void StrBSize_Unload(void);
u32 StrBSize_Get(u16 *p);
BOOL func_020b278c(u32 v);
BOOL func_020b2774(void);
u32 func_020b2768(void);
void func_020b260c(void *p);
void func_020b2608(void *p);
void func_020b2530(u8 *out);
u32 func_020b2514(u8 *p, u32 idx);
void func_020b24a4(void *p);
void func_020b249c(void *p);
void func_020b23a8(u8 *self);
u16 func_020b207c(void);
void func_020b1dc0(void);
u8 func_020b1d80(u32 id);
BOOL func_020b1d3c(u32 id, u8 val);
u16 *func_020b1c8c(s32 *outX, s32 *outY);
void TownStructure_PlaceAtEventPlot(u16 id);
BOOL TownStructure_RemoveFromEventPlot(u16 id);
void Town_PlaceReddTent(void);
BOOL Town_RemoveReddTent(void);
void Town_PlaceKatrinaTent(void);
BOOL Town_RemoveKatrinaTent(void);
void Town_PlaceGracieCar(void);
BOOL Town_RemoveGracieCar(void);
void Town_PlaceCountdownSign(void);
BOOL Town_RemoveCountdownSign(void);
u32 MapBlock_CountSigns(u8 *cell);
u32 func_020b1a18(u8 *cell, u32 target, u32 v);
BOOL func_020b19ec(u8 *cell, u32 v);
BOOL func_020b17e0(s32 *pos, BOOL flag);
BOOL func_020b16e4(void);
void func_020b16bc(Info *dst, Info *src);
void func_020b16b8(Info *i);
u16 func_020b16b4(Info *i);
u8 func_020b16b0(Info *i);
u8 func_020b16ac(Info *i);
s8 func_020b16a4(Info *i);
u8 func_020b16a0(Info *i);
u8 func_020b169c(Info *i);
u8 func_020b1698(Info *i);
u8 func_020b1694(Info *i);
u8 func_020b1690(Info *i);
u32 func_020b1674(Info *i, u32 b, u32 c);
u32 func_020b1664(u32 a, u32 b, u32 c);
u32 func_020b1614(u32 a);
BOOL func_020b15ec(void);
u32 func_020b15d4(void);
u32 func_020b14f0(void);
BOOL func_020b1454(Obj *o, s32 v);
u32 func_020b1428(s32 v);
u32 func_020b13e0(u32 v);
BOOL func_020b1388(u16 *p);
void func_020b1260(Flags1 *p, s32 bit);
void func_020b1234(u8 *p, s32 bit);
void func_020b11fc(void);
void func_020b10e0(u32 arg);
u8 func_020b10c4(u32 a);
void func_020b1040(u32 a, u32 b);
u8 func_020b1034(void);
void func_020b1028(void);
void func_020b101c(void);
u32 func_020b0fb0(u32 a);
u32 func_020b0f80(u32 a);
u32 func_020b0f54(void);
void func_020b0f48(void);
void func_020b0f3c(void);
u8 func_020b0f30(void);
void func_020b0f24(void);
void func_020b0f18(void);
u8 func_020b0f0c(void);
void func_020b0f00(u32 a);
u32 func_020b0ef4(void);
void func_020b0e60(void);
}


extern "C" u32 func_020b2c14(s32 v) {
    u32 n = 0;
    for (u32 i = 0; i < 4; i++) {
        if ((v >> i) & 1) {
            n++;
        }
    }
    return n;
}

extern "C" s32 func_020b2bac(u32 arg) {
    u16 v = arg;
    if (Item_IsNookShop(&v)) {
        v = Item_MakeNookShop(0);
    }
    if (Item_IsPlayerHouse(&v)) {
        v = Item_MakePlayerHouse(0);
    }
    BOOL in = FALSE;
    volatile u16 &vv = v;
    u32 w = vv;
    if (vv >= 0x5000 && w <= 0x5021) { in = TRUE; }
    if (in) { return w & 0xfff; }
    return -1;
}

u32 Unk_020b28ac::func_020b2b98() {
    s8 *p = (s8 *)this;
    u32 n = 0;
    while (p[0] == 0x4d) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b80() {
    s8 *p = (s8 *)this;
    u32 n = 0;
    s32 c;
    while ((c = p[0]) == 0x52 || c == 0x4d) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b5c() {
    s8 *p = (s8 *)this + func_020b2b80() * 4;
    u32 n = 0;
    while (p[0] == 0x46) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b28() {
    u32 a = func_020b2b80();
    u32 b = func_020b2b5c();
    s8 *p = (s8 *)this + a * 4 + b * 4;
    u32 n = 0;
    while (p[0] == 0x53) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b0c() {
    u32 a = func_020b2b5c();
    return a + func_020b2b28();
}

BOOL Unk_020b28ac::func_020b2ae0(s32 *a, s32 *b, u32 idx) {
    if (idx < func_020b2b98()) {
        return func_020b2aac(a, b, idx);
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2aac(s32 *a, s32 *b, u32 idx) {
    if (idx < func_020b2b80()) {
        s8 *e = (s8 *)this + idx * 4;
        *a = e[2];
        *b = e[3];
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2a5c(s32 *a, s32 *b, u32 idx) {
    s8 *base = (s8 *)this + func_020b2b80() * 4;
    if (idx < func_020b2b0c()) {
        s8 *e = base + idx * 4;
        *a = e[2];
        *b = e[3];
        if (*a == 0 && *b == 0) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2a0c(s32 *a, s32 *b, s32 *c, u32 idx) {
    s8 *base = (s8 *)this + func_020b2b80() * 4;
    if (idx < func_020b2b28()) {
        u32 t = func_020b2b5c();
        s8 *e = base + (t + idx) * 4;
        *a = e[1];
        *b = e[2];
        *c = e[3];
        return TRUE;
    }
    return FALSE;
}

u32 Unk_020b28ac::func_020b29e4() {
    u32 a = func_020b2b5c();
    u32 b = func_020b2b80();
    u32 c = func_020b2b28();
    return *(u32 *)((u8 *)this + (a + (b + c) + 1) * 4);
}

BOOL Unk_020b28ac::func_020b2958(s32 *a, s32 *b, s32 *c, u32 idx) {
    u32 count = func_020b29e4();
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    b[0] = 0;
    b[1] = 0;
    b[2] = 0;
    c[0] = 0;
    c[1] = 0;
    c[2] = 0;
    if (idx < count) {
        u32 x = func_020b2b5c();
        u32 y = func_020b2b80();
        u32 z = func_020b2b28();
        u8 *base = (u8 *)this + ((x + (y + z) + 1) * 4 + 4);
        s32 *e = (s32 *)(base + idx * 0x24);
        a[0] = e[0];
        a[1] = e[1];
        a[2] = e[2];
        b[0] = e[3];
        b[1] = e[4];
        b[2] = e[5];
        c[0] = e[6];
        c[1] = e[7];
        c[2] = e[8];
        return TRUE;
    }
    return FALSE;
}

void Unk_020b28ac::func_020b28ac(s32 *outX, s32 *outY, s32 *outW, s32 *outH) {
    s32 maxX = 0, minX = 0, maxY = 0, minY = 0;
    u32 count = func_020b2b28();
    if (count != 0) {
        u32 i = 0;
        maxX = -1;
        minX = 1;
        maxY = -1;
        minY = 1;
        for (; i < count; i++) {
            s32 ea, ex, ey;
            if (func_020b2a0c(&ea, &ex, &ey, i)) {
                if (ex < minX) {
                    minX = ex;
                }
                if (ey < minY) {
                    minY = ey;
                }
                if (ex > maxX) {
                    maxX = ex;
                }
                if (ey > maxY) {
                    maxY = ey;
                }
            }
        }
    }
    s32 x1 = (maxX << 13) + 0x1000;
    s32 x0 = (minX << 13) - 0x1000;
    s32 y1 = (maxY << 13) + 0x1000;
    s32 y0 = (minY << 13) - 0x1000;
    *outX = (x1 + x0) >> 1;
    *outY = (y1 + y0) >> 1;
    s32 w = x1 - x0;
    if (w < 0) {
        w = -w;
    }
    *outW = w;
    s32 h = y1 - y0;
    if (h < 0) {
        h = -h;
    }
    *outH = h;
}

extern "C" void StrBSize_Load(void) {
    char name[0x20];
    u8 file[0x6c];
    u32 i;
    void *p;
    p = File_LoadAlloc("/str/bsize.arc", gCurrentHeap, 4, 0);
    sStrBSizeArchive = p;
    if (p != NULL) {
        if (func_02101340(file, "STR", p)) {
            for (i = 0; i < 0x22; i++) {
                func_020639e8(name, "STR:a/%d.bsize", i);
                sStrBSizeTable[i] = (u32)func_021012bc(name);
            }
            func_02101310(file);
        }
    } else {
        for (i = 0; i < 0x22; i++) {
            sStrBSizeTable[i] = 0;
        }
    }
}

extern "C" void StrBSize_Unload(void) {
    for (u32 i = 0; i < 0x22; i++) {
        sStrBSizeTable[i] = 0;
    }
    if (sStrBSizeArchive != NULL) {
        Mem_Free(sStrBSizeArchive);
        sStrBSizeArchive = NULL;
    }
}

extern "C" u32 StrBSize_Get(u16 *p) {
    if (sStrBSizeArchive != NULL) {
        s32 idx;
        BOOL in = FALSE;
        u32 v = *p;
        if (v >= 0x5000 && v <= 0x5021) {
            in = TRUE;
        }
        if (in) {
            idx = v & 0xfff;
        } else {
            idx = -1;
        }
        if (idx != -1) {
            return sStrBSizeTable[idx];
        }
    }
    return 0;
}

extern "C" BOOL func_020b278c(u32 v) {
    if (data_021ee2bc == 0) {
        data_021ee2bc = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b2774(void) {
    if (data_021ee2bc != 0) {
        data_021ee2bc = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_020b2768(void) {
    return data_021ee2bc;
}

Unk_020e3dcc::Unk_020e3dcc() {}

Unk_020e3dcc::~Unk_020e3dcc() {}

BOOL Unk_020e3dcc::vfunc_08(s32 *a, s32 *b, s32 *c, volatile s32 x, volatile s32 y) {
    if (func_020b2768_is_flag()) {
        if (!_ZN21FieldObjectShapeQuery8vfunc_08EPiS0_S0_ii(&data_021ee2b0, a, b, c, x, y)) {
            void *m = gSceneBlockMap;
            if (m != NULL) {
                s32 lx = x;
                s32 ly = y;
                s32 xh = lx >> 4;
                s32 yh = ly >> 4;
                u16 *p = BlockMap_GetItemPtr(m, xh, yh, lx - (xh << 4), ly - (yh << 4), 0);
                if (p != NULL) {
                    if (*p == 0x500a) {
                        *a = 0xb33;
                        *b = 0x2000;
                        *c = 10;
                        return TRUE;
                    } else if (Item_IsSnowman(p)) {
                        s32 t = Item_GetSnowmanIndex(p);
                        s32 u, w;
                        _ZN12Unk_020af53c13func_020af590EjPjS0_S0_PhS1_S1_(data_021ed2e6, t, &u, &w, 0, 0, 0, 0);
                        *a = 0x1000;
                        *b = 0x2000;
                        *c = 0;
                        return TRUE;
                    }
                }
            }
            return FALSE;
        }
        return TRUE;
    } else if (Scene_GetCurrent() == 0x1d && x == 3 && y == 4) {
        *a = 0xe66;
        *b = 0x2000;
        *c = 10;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020b260c(void *p) {}

extern "C" void func_020b2608(void *p) {}

extern "C" void func_020b2530(u8 *out) {
    s32 a = func_02063b8c(5);
    s32 sel = 0;
    s32 b = func_02063b8c(4);
    s32 n = 0;
    u32 i;
    for (i = 0; i < 5; i++) {
        if ((s32)i == a) {
            continue;
        }
        if (n == b) {
            sel = i;
            break;
        }
        n++;
    }
    for (i = 0; i < 4; i++) {
        out[i] = 0xff;
    }
    u32 k = 0;
    s32 base = a % 5;
    base = base * 5;
    for (; k < 3; k++) {
        s32 skip = func_02063b8c(5 - k);
        s32 cnt = 0;
        for (u32 j = 0; j < 5; j++) {
            BOOL found = FALSE;
            u32 m = 0;
            u32 v = j % 5 + base;
            for (; m < 4; m++) {
                u32 w = out[m];
                if (w == v) {
                    found = TRUE;
                    break;
                }
            }
            if (!found) {
                if (cnt == skip) {
                    out[k] = v;
                    break;
                }
                cnt++;
            }
        }
    }
    u32 r = func_02063b8c(5);
    s32 s = sel % 5;
    u32 q = r % 5;
    s = s * 5;
    out[3] = s + q;
}

extern "C" u32 func_020b2514(u8 *p, u32 idx) {
    u32 v = p[idx & 3];
    if (v >= 25) {
        v = (s32)v % 25;
    }
    return v;
}

Unk_020b246c_Sub::~Unk_020b246c_Sub() {
    _ZN15TownFlagPatternC1Ev(this);
}

Unk_020b246c_Sub::Unk_020b246c_Sub() {
    _ZN15TownFlagPatternD1Ev(this);
}

Unk_020b24ac *Unk_020b24ac::func_020b24d4() {
    unk_228 = func_02063b8c(3);
    return (Unk_020b24ac *)TownFlagPattern_InitDefault(this);
}

void Unk_020b24ac::func_020b24ac() {
    if (unk_228 >= 3) {
        unk_228 = (u32)unk_228 % 3;
        func_020b24ac();
    }
}

extern "C" void func_020b24a4(void *p) { Pattern_CopyFields(p); }

extern "C" void func_020b249c(void *p) { TownFlagPattern_GetPattern(p); }

Unk_020b246c::~Unk_020b246c() {
    func_020b260c(this);
}

Unk_020b246c::Unk_020b246c() {
    func_020b2608(this);
}

extern "C" void func_020b23a8(u8 *self)
{
    func_020b2530(self);
    ((Unk_020b24ac *)(self + 4))->func_020b24d4();
    s32 j;
    s32 i;
    u8 *cell;
    Map *m;
    u16 *p;
    m = TownBlockMap_Get();
    for (u32 y = 1; y <= 4; y++) {
        for (u32 x = 1; x <= 4; x++) {
            if (x < m->w && y < m->h && m->data) {
                cell = m->data + (x + y * m->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell) {
                for (j = 0; j < 16; j++) {
                    for (i = 0; i < 16; i++) {
                        p = MapBlock_GetItemPtr(cell, i, j, 0);
                        if (p && InRange(*p)) {
                            s32 ox, oy;
                            FieldUnit_FromBlockUnit(&ox, &oy, x, y, i, j);
                            BlockMap_PutStructure(m, p, ox, oy);
                        }
                    }
                }
            }
        }
    }
}

void Unk_020b23a0::func_020b23a4() {}

u8 *Unk_020b23a0::func_020b23a0() { return (u8 *)this + 4; }

LightLevel::LightLevel()
{
    unk_00 = 0;
    unk_04 = 0;
    unk_0c = 0;
}

LightLevel::~LightLevel() {}

BOOL LightLevel::switchLightAnimated(BOOL on) { return switchLight(on, 0, 0, 0x800); }

void LightLevel::update()
{
    if (unk_0c == 1) {
        if (unk_12 != 0) {
            unk_00 = 0;
            unk_12--;
        }
        if (unk_12 == 0) {
            if (unk_10 < 0xb) {
                unk_00 = sLightFlickerTable[unk_10];
                unk_10++;
            } else {
                unk_0c = 0;
                unk_10 = 0;
            }
        }
    } else if (unk_04 != unk_00) {
        func_020e761c(this, unk_04, unk_08);
    }
}

BOOL LightLevel::switchLight(BOOL on, s32 a, s32 b, u32 param)
{
    unk_08 = param;
    if (on) {
        if (unk_04 == 0) {
            unk_04 = 0x1000;
            if (a == 0) {
                unk_00 = 0x1000;
                return FALSE;
            }
            if (b) {
                unk_0c = 1;
                unk_10 = 0;
                unk_12 = 5;
            }
            return TRUE;
        }
    } else {
        unk_0c = 0;
        if (unk_04 != 0) {
            unk_04 = 0;
            if (a == 0) {
                unk_00 = 0;
                return FALSE;
            }
            return TRUE;
        }
    }
    return FALSE;
}

s32 Math_LerpFx(s32 t, s32 lo, s32 hi) { return lo + func_01ffcb0c(t, hi - lo); }

s32 LightLevel::getLevel() { return unk_00; }

DoorLight::DoorLight() { unk_00 = -1; }

DoorLight::~DoorLight() {}

void DoorLight::bindMaterial(Ctx *c) { unk_00 = _ZN12G3dResAccess10findMatIdxEi(c, "m_door"); }

void DoorLight::apply(Ctx *c, s32 t)
{
    if (unk_00 != -1) {
        NNS_G3dMdlSetMdlDiff(c, unk_00, (u16)((u8)(t * 0xd >> 12) << 10 | ((u8)(t * 0x1f >> 12) | (u8)(t * 0x1b >> 12) << 5)));
    }
}

WindowLight::WindowLight() { unk_00 = -1; }

WindowLight::~WindowLight() { unk_00 = -1; }

void WindowLight::bindMaterial(Ctx *c) { unk_00 = _ZN12G3dResAccess10findMatIdxEi(c, "m_window"); }

void WindowLight::apply(Ctx *c, s32 t)
{
    if (unk_00 != -1) {
        NNS_G3dMdlSetMdlAlpha(c, unk_00, (u8)((t * 0x1d >> 12) + 1));
    }
}

LampLights::LampLights()
{
    for (u32 i = 0; i < 3; i++) {
        unk_04[i] = -1;
    }
}

LampLights::~LampLights() {}

void LampLights::bindMaterials(Ctx *c)
{
    for (u32 i = 0; i < 3; i++) {
        if (getMaterialName(i)) {
            s32 r = _ZN12G3dResAccess10findMatIdxEi(c, getMaterialName(i));
            if (r != -1) {
                unk_04[i] = r;
            } else {
                unk_04[i] = -1;
            }
        }
    }
}

BOOL LampLights::isLampMaterial(s32 v)
{
    for (s8 *p = unk_04; p < unk_04 + 3; p++) {
        if (*p == v) {
            return TRUE;
        }
    }
    return FALSE;
}

void LampLights::apply(Pal *p, s32 t)
{
    if (t != 0) {
        NNSi_G3dModifyMatFlag(p, 1, 0x400);
        u16 col = func_020b207c();
        s32 r7 = Math_LerpFx(t, ((col >> 10) & 0x1f) << 12, 0x1f000);
        s32 g = Math_LerpFx(t, (col & 0x1f) << 12, 0x1f000);
        s32 b = Math_LerpFx(t, ((col >> 5) & 0x1f) << 12, 0x1f000);
        u16 c2 = (r7 >> 12) << 10 | ((g >> 12) | (b >> 12) << 5);
        for (s32 i = 0; i < p->count; i++) {
            NNS_G3dMdlSetMdlEmi(p, i, isLampMaterial(i) ? c2 : col);
        }
    } else {
        NNSi_G3dModifyMatFlag(p, 0, 0x400);
    }
}

extern "C" u16 func_020b207c(void)
{
    return (u16)(data_027e0148[6] >> 16);
}

const char *LampLights::getMaterialName(s32 i)
{
    func_020639e8(data_021ee2c4, "lp_m%d", i);
    return data_021ee2c4;
}

BuildingLights::BuildingLights() {}

BuildingLights::~BuildingLights() {}

void BuildingLights::bind(Ctx *c, BOOL on)
{
    switchLightAnimated(on);
    if (c) {
        unk_14.bindMaterial(c);
        unk_18.bindMaterials(c);
        unk_34.bindMaterial(c);
    }
}

void BuildingLights::updateLights(Ctx *c)
{
    update();
    s32 v = getLevel();
    if (c) {
        unk_18.apply((Pal *)c, v);
        unk_34.apply(c, v);
        unk_14.apply(c, v);
    }
}

BOOL BuildingLights::setLit(BOOL on, s32 a, s32 b) { return switchLight(on, a, b, 0x800); }

BOOL BuildingLights::isLit() { return getLevel() ? TRUE : FALSE; }

void Unk_020b1ddc::func_020b1e74()
{
    Mtx33 tmp;
    u8 t[2];
    Mtx33 *m = &unk_b4->mtx;
    Clock_GetMinuteHour(t);
    if (data_021ee2ac != gFrameCounter) {
        s32 rem = t[1] % 0xc;
        s32 a = (s16)-(FX_Div(rem << 12, 0xc000) * 0xffff >> 12);
        s32 b = (FX_Div(t[0] << 12, 0x3c000) * 0x1555 << 4) >> 16;
        s32 idx = (u16)(s16)(a - b) >> 4;
        data_021ee2a4 = data_02135f44[idx * 2];
        data_020e3db4 = data_02135f44[idx * 2 + 1];
        data_021ee2ac = gFrameCounter;
    }
    MTX_RotZ33_(&tmp, data_021ee2a4, data_020e3db4);
    if (unk_b4->flags & 2) {
        *m = tmp;
    } else {
        MTX_Concat33(m, &tmp, m);
    }
    unk_b4->flags &= ~2;
}

void Unk_020b1ddc::func_020b1ddc()
{
    Mtx33 tmp;
    u8 t[2];
    Mtx33 *m = &unk_b4->mtx;
    Clock_GetMinuteHour(t);
    s32 rem = t[0] % 0x3c;
    s32 a = -(FX_Div(rem << 12, 0x3c000) * 0xffff >> 12);
    s32 idx = (u16)(s16)a >> 4;
    MTX_RotZ33_(&tmp, data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]);
    if (unk_b4->flags & 2) {
        *m = tmp;
    } else {
        MTX_Concat33(m, &tmp, m);
    }
    unk_b4->flags &= ~2;
}

extern "C" void func_020b1dc0(void)
{
    u32 i;
    u8 v = 0;
    for (i = 0; i < 0x22; i++) {
        data_021ee30c[i] = v;
    }
    data_021ee290 = v;
}

extern "C" u8 func_020b1d80(u32 id)
{
    Unk_020b1d3c_Pad pad;
    if (InRange32(id)) {
        u32 idx;
        if (InRange32(id)) {
            idx = id & 0xfff;
        } else {
            idx = -1;
        }
        if (idx < 0x22) {
            return data_021ee30c[idx];
        }
    }
    return 0;
}

extern "C" BOOL func_020b1d3c(u32 id, u8 val)
{
    Unk_020b1d3c_Pad pad;
    if (InRange32(id)) {
        u32 idx;
        if (InRange32(id)) {
            idx = id & 0xfff;
        } else {
            idx = -1;
        }
        if (idx < 0x22) {
            data_021ee30c[idx] = val;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" u16 *func_020b1c8c(s32 *outX, s32 *outY)
{
    s32 x, y;
    Map *m = TownBlockMap_Get();
    s32 found = 0;
    *outX = 0;
    *outY = 0;
    if (m) {
        s32 w = m->w;
        s32 h = m->h;
        for (y = 0; y < h; y++) {
            for (x = 0; x < w; x++) {
                if (BlockMap_GetBlockAttr(m, x, y) & 0x200) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            u8 *cell;
            FieldUnit_FromBlockUnit(outX, outY, x, y, 10, 9);
            if ((u32)x < m->w && (u32)y < m->h && m->data) {
                cell = m->data + (x + y * m->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell) {
                return MapBlock_GetItemPtr(cell, 10, 9, 0);
            }
        }
    }
    return NULL;
}

extern "C" void TownStructure_PlaceAtEventPlot(u16 id)
{
    u16 t[1];
    t[0] = id;
    if (InRangeV(t[0])) {
        s32 x, y;
        u16 *p = func_020b1c8c(&x, &y);
        if (p) {
            Map *m = TownBlockMap_Get();
            if (m) {
                if (InRange(*p)) {
                    BlockMap_RemoveStructure(m, x, y, 0);
                }
                BlockMap_PutStructure(m, t, x, y);
            }
        }
    }
}

extern "C" BOOL TownStructure_RemoveFromEventPlot(u16 id)
{
    u16 t[2];
    t[0] = id;
    if (InRangeV(t[0])) {
        s32 x, y;
        u16 *p = func_020b1c8c(&x, &y);
        if (p) {
            BOOL eq;
            if (Item_IsFurniture()) {
                t[1] = id;
                eq = Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t[1]);
            } else {
                eq = *p == id;
            }
            if (eq) {
                Map *m = TownBlockMap_Get();
                if (m) {
                    return BlockMap_RemoveStructure(m, x, y, 0);
                }
            }
        }
    }
    return FALSE;
}

extern "C" void Town_PlaceReddTent(void) { TownStructure_PlaceAtEventPlot(0x5012); }

extern "C" BOOL Town_RemoveReddTent(void) { return TownStructure_RemoveFromEventPlot(0x5012); }

extern "C" void Town_PlaceKatrinaTent(void) { TownStructure_PlaceAtEventPlot(0x5013); }

extern "C" BOOL Town_RemoveKatrinaTent(void) { return TownStructure_RemoveFromEventPlot(0x5013); }

extern "C" void Town_PlaceGracieCar(void) { TownStructure_PlaceAtEventPlot(0x5021); }

extern "C" BOOL Town_RemoveGracieCar(void) { return TownStructure_RemoveFromEventPlot(0x5021); }

extern "C" void Town_PlaceCountdownSign(void) { TownStructure_PlaceAtEventPlot(0x501e); }

extern "C" BOOL Town_RemoveCountdownSign(void) { return TownStructure_RemoveFromEventPlot(0x501e); }

extern "C" u32 MapBlock_CountSigns(u8 *cell) {
    u32 count = 0;
    u32 x, y;
    if (cell) {
        if (MapBlock_HasAnyAttr(cell, 0xe0) || MapBlock_HasAnyAttr(cell, 0x10)) {
            return 0;
        }
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++) {
                u16 *p = MapBlock_GetItemPtr(cell, x, y, 0);
                if (p && *p == 0x500a) {
                    count++;
                }
            }
        }
    }
    return count;
}

extern "C" u32 func_020b1a18(u8 *cell, u32 target, u32 v) {
    u32 count = 0;
    u32 y, x;
    if (cell) {
        if (MapBlock_HasAnyAttr(cell, 0xe0) || MapBlock_HasAnyAttr(cell, 0x10)) {
            return 0;
        }
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++) {
                u16 *p = MapBlock_GetItemPtr(cell, x, y, 0);
                if (p && *p == 0x500a) {
                    if (target == count) {
                        u16 t = v;
                        if (MapBlock_SetItem(cell, &t, x, y, 0)) {
                            return 1;
                        }
                    }
                    count++;
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_020b19ec(u8 *cell, u32 v) {
    if (MapBlock_CountSigns(cell)) {
        return func_020b1a18(cell, func_02063b8c(), v);
    }
    return 0;
}

extern "C" BOOL func_020b17e0(s32 *pos, BOOL flag) {
    Grid *g = TownBlockMap_Get();
    s32 x, y, i, j;
    if (g == NULL) {
        return FALSE;
    }
    x = pos[0] >> 17;
    y = pos[2] >> 17;
    if (flag) {
        for (i = x - 1; i >= 1; i--) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    GulliverQuest_Init(&data_021e58a6);
                    TownUpdater_MarkEventApplied(0x44);
                    return TRUE;
                }
            }
        }
    } else {
        for (i = x + 1; i <= 4; i++) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    GulliverQuest_Init(&data_021e58a6);
                    TownUpdater_MarkEventApplied(0x44);
                    return TRUE;
                }
            }
        }
    }
    for (i = 1; i <= 4; i++) {
        if (i != y) {
            if (func_020b19ec(GetCell(g, x, i), 0x5020)) {
                GulliverQuest_Init(&data_021e58a6);
                TownUpdater_MarkEventApplied(0x44);
                return TRUE;
            }
        }
    }
    if (flag) {
        for (i = x + 1; i <= 4; i++) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    GulliverQuest_Init(&data_021e58a6);
                    TownUpdater_MarkEventApplied(0x44);
                    return TRUE;
                }
            }
        }
    } else {
        for (i = x - 1; i >= 1; i--) {
            for (j = 1; j <= 4; j++) {
                if (func_020b19ec(GetCell(g, i, j), 0x5020)) {
                    GulliverQuest_Init(&data_021e58a6);
                    TownUpdater_MarkEventApplied(0x44);
                    return TRUE;
                }
            }
        }
    }
    if (func_020b19ec(GetCell(g, x, y), 0x5020)) {
        GulliverQuest_Init(&data_021e58a6);
        TownUpdater_MarkEventApplied(0x44);
        return TRUE;
    }
    return FALSE;
}


extern "C" BOOL func_020b16e4(void) {
    Grid *g = TownBlockMap_Get();
    s32 y, x;
    if (g == NULL) {
        return FALSE;
    }
    static ItemId m1(0x5020);
    for (y = 1; y <= 4; y++) {
        for (x = 1; x <= 4; x++) {
            u8 *cell = GetCell(g, x, y);
            if (cell) {
                u32 a, b;
                if (MapBlock_FindItemInRange(cell, &a, &b, &m1, &m1, 0)) {
                    static Marker2 m2(0x500a);
                    if (BlockMap_RemoveStructureAt(g, x, y, a, b, &m2)) {
                        func_02084ffc();
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" void func_020b16bc(Info *dst, Info *src) {
    dst->unk_00 = src->unk_00;
    dst->unk_02 = src->unk_02;
    dst->unk_03 = src->unk_03;
    dst->unk_04 = src->unk_04;
    dst->unk_05 = src->unk_05;
    dst->unk_06 = src->unk_06;
    dst->unk_07 = src->unk_07;
    dst->unk_08 = src->unk_08;
    dst->unk_09 = src->unk_09;
}

extern "C" void func_020b16b8(Info *i) {}

extern "C" u16 func_020b16b4(Info *i) { return i->unk_00; }

extern "C" u8 func_020b16b0(Info *i) { return i->unk_02; }

extern "C" u8 func_020b16ac(Info *i) { return i->unk_03; }

extern "C" s8 func_020b16a4(Info *i) { return i->unk_04; }

extern "C" u8 func_020b16a0(Info *i) { return i->unk_05; }

extern "C" u8 func_020b169c(Info *i) { return i->unk_06; }

extern "C" u8 func_020b1698(Info *i) { return i->unk_07; }

extern "C" u8 func_020b1694(Info *i) { return i->unk_08; }

extern "C" u8 func_020b1690(Info *i) { return i->unk_09; }

extern "C" u32 func_020b1674(Info *i, u32 b, u32 c) { return func_020b1664(func_020b16b4(i), b, c); }

extern "C" u32 func_020b1664(u32 a, u32 b, u32 c) { return (a << 16) | (((c & 0xff) << 8) | (b & 0xff)); }

extern "C" u32 func_020b1614(u32 a) {
    Obj *o;
    if (!IsEnabled()) {
        return 1;
    }
    o = Building_FindNearPos(a);
    if (o) {
        if (_ZN13BuildingActor15getEntranceTypeEv() == 1) {
            u16 *i = o->vfunc_64();
            if (i) {
                return i[2];
            }
            return 1;
        }
        return 1;
    }
    return 1;
}

extern "C" BOOL func_020b15ec(void) {
    if (!Scene_InTown()) {
        return TRUE;
    }
    if (data_021ee2b4 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_020b15d4(void) {
    data_021ee2b4 = func_020b14f0();
}

extern "C" u32 func_020b14f0(void) {
    s32 x, y;
    u16 *p;
    if (!Scene_InTown() || func_020b0f0c()) {
        return 0;
    }
    if (IsEnabled()) {
        Scene_GetWarpRequest();
        x = ScenePos_GetUnitX(&gTownReturnPos);
        Scene_GetWarpRequest();
        y = ScenePos_GetUnitZ(&gTownReturnPos);
        if (gSceneBlockMap) {
            s32 xh = x >> 4;
            s32 yh = y >> 4;
            p = BlockMap_GetItemPtr(gSceneBlockMap, xh, yh, x - (xh << 4), y - (yh << 4), 0);
            if (p) {
                BOOL in = FALSE;
                u16 v = *p;
                if (v >= 0x5000 && v <= 0x5021) {
                    in = TRUE;
                }
                if (in) {
                    u32 i;
                    Info *src;
                    Info info;
                    u32 result;
                    if (v >= 0x5000 && v <= 0x5021) {
                        i = v & 0xfff;
                    } else {
                        i = -1;
                    }
                    if (i < 0x22) {
                        src = &data_020d0a7c[i];
                    } else {
                        src = &data_020d0a7c[0];
                    }
                    func_020b16bc(&info, src);
                    result = func_020b1674(&info, x, y);
                    func_020b16b8(&info);
                    return result;
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_020b1454(Obj *o, s32 v) {
    if (IsEnabled()) {
        if (o->vfunc_6c(v)) {
            if (_ZN11CommManager8isOnlineEv(gCommManager)) {
                u16 f;
                void *d;
                f = (f & ~0x3f) | (_ZN13BuildingActor9getItemIdEv(o)[0] & 0x3f);
                f = (f & ~0xfc0) | ((v & 0x3f) << 6);
                f &= ~0xf000;
                d = gCommManager;
                _ZN11CommManager11beginRecordEv(d);
                _ZN11CommManager11writeRecordEPhj(d, &f, 2);
                _ZN11CommManager9endRecordEjj(d, 0x22, 4);
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" u32 func_020b1428(s32 v) {
    if (SaveVillagers_Get(&data_021dfd8c, v)) {
        if (Villager_GetWhereabouts() == 2) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" u32 func_020b13e0(u32 v) {
    volatile u16 x = v;
    BOOL in = FALSE;
    u16 y = x;
    if (y >= 0x5001 && y <= 0x5008) {
        in = TRUE;
    }
    if (in) {
        s32 i;
        if (y >= 0x5001 && y <= 0x5008) {
            i = y - 0x5001;
        } else {
            i = -1;
        }
        return func_020b1428(i);
    }
    return 0;
}

extern "C" BOOL func_020b1388(u16 *p) {
    Flags2 *f = (Flags2 *)p;
    u32 a = Item_MakeBuilding(f->a);
    u8 b = f->b;
    if (IsEnabled()) {
        Obj *o = BuildingList_FindByItem(a);
        if (o) {
            return o->vfunc_6c(b);
        }
    }
    return func_020b1d3c(a, b);
}

extern "C" void func_020b1260(Flags1 *p, s32 bit) {
    u32 mode = p->mode;
    u32 idx = p->idx;
    switch (mode) {
    case 1:
    case 2:
    case 3:
        data_021ee330[idx].hi = mode;
        break;
    default: {
        NibblePair *e = &data_021ee330[idx];
        u8 lo = e->lo;
        u32 before = func_020b2c14(lo);
        u32 after;
        void *d;
        Flags1 pk;
        Info info;
        Info *src;
        lo = lo | (1 << bit);
        after = func_020b2c14(lo);
        if (idx < 0x22) {
            src = &data_020d0a7c[idx];
        } else {
            src = &data_020d0a7c[0];
        }
        func_020b16bc(&info, src);
        if (after > func_020b1690(&info)) {
            e->hi = 2;
        } else {
            idx = Item_MakeBuilding(idx);
            if (func_020b13e0(idx) && before == 0) {
                e->hi = 3;
            } else {
                e->lo = lo;
                e->hi = 1;
                func_020b13e0(idx);
            }
        }
        pk = *p;
        pk.mode = e->hi;
        d = gCommManager;
        _ZN11CommManager11beginRecordEv(d);
        _ZN11CommManager11writeRecordEPhj(d, &pk, 1);
        _ZN11CommManager9endRecordEjj(d, 0x23, bit);
        func_020b16b8(&info);
    }
    }
}

extern "C" void func_020b1234(u8 *p, s32 bit) {
    data_021ee330[*p].lo = data_021ee330[*p].lo & ~(1 << bit);
}

extern "C" void func_020b11fc(void) {
    u8 *p;
    for (p = (u8 *)data_021ee330; p < (u8 *)(data_021ee330 + 0x22); p++) {
        *p &= ~0xf;
        *p &= ~0xf0;
    }
    data_021ee290 = 0;
}

extern "C" void func_020b10e0(u32 arg) {
    Bits bits;
    u16 buf[5];
    u32 idx = func_020b2bac(arg);
    void *p = gCommManager;
    if (!_ZN11CommManager8isOnlineEv(p) || _ZN11CommManager7isMyAidEj(p, 0)) {
        NibblePair *e = data_021ee330 + idx;
        u8 lo;
        u32 y, z;
        lo = e->lo;
        z = func_020b2c14(lo);
        lo = (u8)(lo | 1);
        y = func_020b2c14(lo);
        func_020b16bc((Info *)buf, idx < 0x22 ? &data_020d0a7c[idx] : data_020d0a7c);
        if (y > func_020b1690((Info *)buf)) {
            e->hi = 2;
        } else if (func_020b13e0(arg) && z == 0) {
            e->hi = 3;
        } else {
            e->lo = lo;
            e->hi = 1;
            func_020b13e0(arg);
        }
        func_020b16b8((Info *)buf);
    } else {
        data_021ee330[idx].hi = 0;
        bits.a = 0;
        bits.b = idx;
        p = gCommManager;
        _ZN11CommManager11beginRecordEv(p);
        _ZN11CommManager11writeRecordEPhj(p, &bits, 1);
        _ZN11CommManager9endRecordEjj(p, 0x23, 0);
    }
}

extern "C" u8 func_020b10c4(u32 a) {
    return data_021ee330[func_020b2bac(a)].hi;
}

extern "C" void func_020b1040(u32 a, u32 b) {
    u32 i = func_020b2bac(a);
    void *p = gCommManager;
    if (!_ZN11CommManager8isOnlineEv(p) || _ZN11CommManager7isMyAidEj(p, 0) || _ZN11CommManager7isMyAidEj(p, 4)) {
        data_021ee330[i].lo &= ~(1 << b);
    } else {
        u8 x = i;
        p = gCommManager;
        _ZN11CommManager11beginRecordEv(p);
        _ZN11CommManager11writeRecordEPhj(p, &x, 1);
        _ZN11CommManager9endRecordEjj(p, 0x24, 0);
    }
}

extern "C" u8 func_020b1034(void) {
    return data_021ee290;
}

extern "C" void func_020b1028(void) {
    data_021ee290 = 1;
}

extern "C" void func_020b101c(void) {
    data_021ee290 = 0;
}

extern "C" u32 func_020b0fb0(u32 a) {
    void *p = gCommManager;
    if (!_ZN11CommManager8isOnlineEv(p) || _ZN11CommManager7isMyAidEj(p, 0)) {
        volatile u16 id = ((u16 *)data_020d0a14)[a];
        BOOL ok = FALSE;
        u16 v = id;
        if (v < 0x5000 || v > 0x5021) {
        } else {
            ok = TRUE;
        }
        if (ok) {
            return data_021ee330[func_020b2bac(v)].lo;
        }
    }
    return 0;
}

extern "C" u32 func_020b0f80(u32 a) {
    u32 r = func_020b2c14(func_020b0fb0(a));
    if (SceneId_IsHouseRoom(a) && func_020b1034()) {
        return r + 2;
    }
    return r;
}

extern "C" u32 func_020b0f54(void) {
    if (isFlag1()) {
        return func_020b0f80(Scene_GetCurrent());
    }
    return 0;
}

extern "C" void func_020b0f48(void) {
    data_021ee28c = 1;
}

extern "C" void func_020b0f3c(void) {
    data_021ee28c = 0;
}

extern "C" u8 func_020b0f30(void) {
    return data_021ee28c;
}

extern "C" void func_020b0f24(void) {
    data_021ee288 = 1;
}

extern "C" void func_020b0f18(void) {
    data_021ee288 = 0;
}

extern "C" u8 func_020b0f0c(void) {
    return data_021ee288;
}

extern "C" void func_020b0f00(u32 a) {
    data_021ee2a0 = a;
}

extern "C" u32 func_020b0ef4(void) {
    return data_021ee2a0;
}


s32 data_021ee2ac;
u32 data_021ee2a0;
void *sStrBSizeArchive;
u8 data_021ee28c;
u32 data_021ee2b4;
const u16 data_020d0a14[52] = {
    0xfff1, 0x5014, 0x5014, 0x5014, 0x5014, 0x5014, 0x5014, 0x5014, 0x5014, 0x5000, 0x500c, 0x500b, 0x500b,
    0x500b, 0x500b, 0x5012, 0x5013, 0x5001, 0x5002, 0x5003, 0x5004, 0x5005, 0x5006, 0x5007, 0x5008, 0x5009,
    0x500d, 0x500e, 0x500f, 0x5010, 0x5010, 0x5010, 0x5011, 0x5011, 0x5011, 0x5011, 0x5011, 0x5011, 0x5011,
    0x5011, 0x5011, 0x5011, 0xfff1, 0xfff1, 0xfff1, 0xfff1, 0xfff1, 0x500b, 0xfff1, 0xfff1, 0xfff1, 0x0000};
const u32 sLightFlickerTable[11] = {0x0, 0x19a, 0x333, 0x4cd, 0x333, 0x19a, 0x4cd, 0x666, 0x800, 0x666, 0x4cd};
NibblePair data_021ee330[0x22];
char data_021ee2c4[12];
FieldObjectShapeQuery data_021ee2b0;

extern "C" void func_020b0e60(void) {
    u32 a = Scene_GetCurrent();
    s32 r = -1;
    if (SceneId_IsHouseRoom(a) || SceneId_IsVillagerHouse(a)) {
        r = 0;
    } else if (a == 0x1a) {
        r = 1;
    } else if (a == 9) {
        r = 2;
    } else if (a == 10) {
        r = 3;
    }
    if (r != -1) {
        static FxVec3 obj;
        Melody_PlayAt(&obj, r);
    }
}



u8 data_021ee30c[0x22];
u32 data_021ee2bc;
u8 data_021ee290;
s32 data_020e3db4 = 0x1000;
u32 sStrBSizeTable[0x22];
u8 data_021ee288;
s32 data_021ee2a4;

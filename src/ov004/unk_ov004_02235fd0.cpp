// mwcc-version: 1.2/base
// ov004 TU33: .text 0x02235fd0-0x02237440 (actor 0224ebec "bug" scene object + scene objects 0224eb9c)
#include "types.h"
#include "Unk_020d8c7c.h"

// main / runtime symbols by their real names
#define func_02000c8c _ZN6FxVec3D1Ev
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define func_02031c10 _ZN11BoxColliderD2Ev
#define func_02031c48 _ZN11BoxColliderC1Ev
#define func_0203239c _ZN14CollisionStateD1Ev
#define func_020323b0 _ZN14CollisionStateC1Ev
#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii
#define BlockMap_canPlaceItem _ZN8BlockMap12canPlaceItemEii
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define CachedModel_release _ZN11CachedModel7releaseEv
#define CachedModel_loadCached _ZN11CachedModel10loadCachedEPvS0_
#define Model_setAlpha _ZN5Model8setAlphaEj
#define Model_setPolygonId _ZN5Model12setPolygonIdEj
#define func_02088bf8 _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi
#define func_02088c34 _ZN12Unk_020e0d30D2Ev
#define func_02088c4c _ZN12Unk_020e0d30C1Ev
#define func_02088d38 _ZN12Unk_020e0d0813func_02088d38Ej
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

#pragma opt_loop_invariants off

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
};

struct Unk_ov004_02236320_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02236320_Mtx {
    s64 v[6];
};

struct Unk_ov004_02236320_Ent {
    u8 pad_00[0x5c];
    Unk_ov004_02236320_V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

struct Unk_02002cb0_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02236320_O1 {
    u32 a[4];
    u8 f;
    u8 pad[3];
    u32 b[7];
};

struct Unk_ov004_0223717c_Grid {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
};

struct Unk_ov004_0223717c_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class CommManager {
public:
    BOOL isOnline();
};

class HouseData {
public:
    u8 getRoachCount();
    void setRoachCount(u8 v);
};

extern "C" {
void func_02031c48(void *p);
void func_02031c10(void *p);
extern u8 gActorList[];
void func_020e79a0(void *list, void *node);
}

struct Unk_ov004_02236950_Obj {
    u8 unk_00[0x9c];
    Unk_ov004_02236950_Obj() { func_02031c48(this); }
};

// Library actor base. Its constructor is out of line (func_02002f14) but its destructor is inline in this overlay.
class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor() { func_020e79a0(gActorList, &unk_50); }

    void calcModelMatrix(void *out);
    void updatePosition(Unk_02002cb0_Vec *v);

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ Unk_ov004_02236320_V3 unk_5c;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 unk_74[0x18];
    /* 0x8c */ s16 unk_8c;
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ s16 unk_90;
    /* 0x92 */ s16 unk_92;
    /* 0x94 */ u16 unk_94;
    /* 0x96 */ s16 unk_96;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u32 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u32 unk_c0;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ u16 unk_d0;
};

#define F08(o) (*(u32 *)((u8 *)(o) + 8))

// vtable 0x0224ebe4, size 0x268
class HouseRoach : public Actor {
public:
    HouseRoach();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~HouseRoach();

    Unk_ov004_02236320_Ent *getNearestCharacter();
    void setProbePoints(s32 dist, s32 delta);
    u8 probeWalls();
    void playSe(u32 sel);
    BOOL release();
    BOOL draw();
    BOOL checkStomped();
    BOOL checkHeight();
    BOOL execute();
    void updateAppear();
    void updateCollision();
    void updateState();
    BOOL move();
    void updateHitBox();
    void updateCrawl();
    BOOL setup();
    void setSoundState(s32 v);
    s32 getSoundState();

    /* 0xd4 */ s32 unk_d4;
    /* 0xd8 */ s32 unk_d8;
    /* 0xdc */ u32 unk_dc[12];
    /* 0x10c */ s32 unk_10c;
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u32 unk_114[3];
    /* 0x120 */ u8 unk_120[0x5c];
    /* 0x17c */ u32 unk_17c;
    /* 0x180 */ u8 pad_180[4];
    /* 0x184 */ Unk_ov004_02236320_Mtx unk_184;
    /* 0x1b4 */ u8 unk_1b4[0x24];
    /* 0x1d8 */ u8 unk_1d8[0x3c];
    /* 0x214 */ u8 unk_214;
    /* 0x215 */ u8 pad_215[0x228 - 0x215];
    /* 0x228 */ s16 unk_228;
    /* 0x22a */ u8 unk_22a;
    /* 0x22b */ u8 pad_22b;
    /* 0x22c */ s16 unk_22c;
    /* 0x22e */ s16 unk_22e;
    /* 0x230 */ Unk_ov004_02236320_V3 unk_230[2];
    /* 0x248 */ Unk_ov004_02236320_V3 unk_248[2];
    /* 0x260 */ s8 unk_260;
    /* 0x261 */ u8 pad_261;
    /* 0x262 */ u8 unk_262;
    /* 0x263 */ u8 unk_263;
    /* 0x264 */ s32 unk_264;
};

// vtable 0x0224eb9c, size 0x50
class HouseRoachManager : public GameProc {
public:
    HouseRoachManager();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual ~HouseRoachManager();
};

extern "C" {
extern CommManager *gCommManager;
extern u8 gSaveHouse[];
extern Unk_ov004_0223717c_Grid *gSceneBlockMap;
extern u32 gCurrentHeap;
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern s16 data_02135f44[];
HouseRoachManager *HouseRoachManager_Create();
HouseRoach *HouseRoach_Create();

BOOL Scene_InHouseRoom();
s32 Scene_GetHouseRoom();
void CachedModel_loadCached(void *p, u32 a, void *b);
void *FrameHeap_CreateAsCurrent(u32 a, u32 b);
void ProcBase_SetHeap(void *a, void *b);
void AnimModel_allocAnmObj(void *p, void *q);
void *File_Load(const char *p);
void func_020e877c(void *p);
void Heap_RestoreCurrent();
void *func_02106788(void *p);
void *func_021067a4(void *p, u32 q);
void BlendAnimModel_initAnim(void *p, void *a, s32 b, s32 c, u16 d, u16 e);
void AnimModel_attachAnim(void *p);
void Unk_02003c30_callReset(void *p);
void func_02088c34(void *p);
void func_020548a0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020548d0(void *p);
void func_02088c4c(void *p);
void func_02000c8c();
void func_02000c98();
void func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
void *NpcRegistry_FindVillager(u32 i);
BOOL BlockMap_canPlaceItem(void *g, s32 x, s32 y);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void FieldPos_FromUnitCenter(void *p, s32 x, s32 y);
void *Item_GetFurnitureIndex(void *p);
BOOL Item_IsFurniture();
s32 func_02063b8c(s32 n);
void *PlayerActor_GetActor(u32 a);
s32 func_020e9650(void *a, void *b);
void ProcBase_RequestDelete(void *p);
void *Actor_spawn(u32 a, u32 b, void *c, void *d, void *e);
void Clock_GetMinuteHour(void *p);
s32 GroundInfo_initAtPos(void *o, void *v, s32 a, s32 b);
void GroundInfo_Destruct(void *o);
s32 GroundInfoBase_getHeight(void *o, s32 a);
void Collision_Move(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
s32 BoxCollider_Register(void *p, s32 a, s32 b, s32 c, void *d, s32 e, s32 f);
s32 BoxCollider_Unregister(void *p);
void Unk_02003c30_callRelease(void *p);
void Unk_02003c40_callRequest(void *p, u32 id);
void Unk_02003c40_callRequestSustained(void *p, u32 id);
s32 Unk_02003c40_callUpdateRelative(void *p, void *v);
void CachedModel_release(void *p);
void Model_setPolygonId(void *p, s32 a);
void NNSi_G3dModifyPolygonAttrMask(u32 a, u32 b, u32 c);
void Model_setAlpha(void *p, u32 v);
void AnimModel_drawAnimated(void *p, u32 v);
void AnimModel_stepAnim(void *p);
void AnimModel_setFrame(void *p);
void func_020abc10(void *p, s32 a, s32 b, s32 c);
BOOL func_02088d38(void *p, u32 mask);
u32 WorldCurve_ToCurved(void *a, void *b);
void Effect_PlayById(u32 a, void *v, s32 b, s32 c);
s32 Math_AngleXZ(void *a, void *b);
s32 func_02088bf8(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 func_02089040(void *a);

void HouseRoach_FindVillager(void *self);
BOOL HouseRoach_LoadCount(void *self);
BOOL HouseRoach_SpawnInitial(void *owner);
}

struct Unk_ov004_0224eb5c_Entry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov004_0224eb7c_Entry {
    void *(*factory)();
    u16 unk_04;
    u16 unk_06;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

extern "C" Unk_ov004_0224eb5c_Entry sHouseRoachManagerProfile;
extern "C" char sHouseRoachModelPath[0x18];
extern "C" Unk_ov004_0224eb7c_Entry sHouseRoachProfile;
extern "C" s8 sHouseRoachTurnCounter;
extern "C" volatile u8 sHouseRoachActiveCount;
extern "C" void *sHouseRoachManager;
extern "C" Unk_ov004_02236320_Ent *sHouseRoachVillager;
extern "C" volatile u8 sHouseRoachTotal;
extern "C" HouseRoach *sHouseRoaches[3];

extern "C" HouseRoachManager *HouseRoachManager_Create() {
    return new HouseRoachManager();
}

extern "C" HouseRoach *HouseRoach_Create() {
    return new HouseRoach();
}

HouseRoachManager::HouseRoachManager() {
}

HouseRoachManager::~HouseRoachManager() {
}

BOOL HouseRoachManager::vfunc_0c() {
    if (!Scene_InHouseRoom() || gCommManager->isOnline()) return TRUE;
    ((HouseData *)gSaveHouse)->setRoachCount(sHouseRoachTotal);
    sHouseRoachManager = 0;
    return TRUE;
}

BOOL HouseRoachManager::onExecute() {
    if (!Scene_InHouseRoom() || gCommManager->isOnline()) return TRUE;
    u8 mask = 0;
    s8 last = 0;
    s32 i = 0;
    for (i = 0; i < 3; i++) {
        HouseRoach **s = &sHouseRoaches[i];
        if (*s != 0) {
            if (*(s32 *)((u8 *)sHouseRoaches[i] + 8) == 0xffff) {
                *(s32 *)((u8 *)*s + 8) = 0;
                (*s)->setSoundState(0);
                ProcBase_RequestDelete(*s);
                *s = 0;
                u32 c = sHouseRoachActiveCount;
                if (c != 0) {
                    sHouseRoachActiveCount = c - 1;
                    sHouseRoachTotal = sHouseRoachTotal - 1;
                }
            } else if (sHouseRoaches[i]->getSoundState() == 1) {
                mask = mask | (1 << i);
                last = last - 1;
            } else if ((*s)->getSoundState() == 2) {
                mask = 0xff;
            }
        }
    }
    if (mask != 0xff && mask != 0) {
        void *p = PlayerActor_GetActor(4);
        s32 best = 0xfffffff;
        if (p != 0) {
            void *q = (u8 *)p + 0x5c;
            for (i = 0; i < 3; i++) {
                HouseRoach *o = sHouseRoaches[i];
                if (o != 0 && ((mask >> i) & 1) != 0) {
                    if (last == -1) {
                        last = (s8)i;
                        break;
                    }
                    s32 d = func_020e9650(q, (u8 *)o + 0x5c);
                    if (best > d) {
                        best = d;
                        last = (s8)i;
                    }
                }
            }
        }
        sHouseRoaches[last]->setSoundState(2);
    }
    return TRUE;
}

BOOL HouseRoachManager::vfunc_00() {
    if (!Scene_InHouseRoom() || gCommManager->isOnline()) return TRUE;
    sHouseRoachManager = this;
    if (!HouseRoach_LoadCount(this)) return TRUE;
    HouseRoach_SpawnInitial(this);
    return TRUE;
}

extern "C" BOOL HouseRoach_SpawnFromFurniture(u32 a, u32 b) {
    BOOL r = FALSE;
    if (gCommManager->isOnline()) return r;
    u32 c = sHouseRoachActiveCount;
    if (c < 3) {
        s32 d = sHouseRoachTotal - c;
        if (d > 0) {
            s32 i;
            for (i = 0; i < 3; i++) {
                HouseRoach **s = &sHouseRoaches[i];
                if (*s == 0) {
                    *s = (HouseRoach *)Actor_spawn(0xc0, 0, (void *)a, (void *)b, sHouseRoachManager);
                    sHouseRoachActiveCount = sHouseRoachActiveCount + 1;
                    r = TRUE;
                    break;
                }
            }
        }
    }
    return r;
}

extern "C" BOOL HouseRoach_SpawnInitial(void *owner) {
    s32 x2;
    s32 y2;
    u8 cnt = 0;
    Unk_ov004_0223717c_Grid *g = gSceneBlockMap;
    u32 rows[32];
    s32 x;
    s32 y;
    s32 hx;
    s32 hy;
    u32 *row;
    u16 *cell;
    BOOL ok;
    u8 i;
    Unk_ov004_0223717c_Vec loc;
    u32 *row2;
    u8 k;
    u32 t;
    s32 w;
    u32 b;
    for (y = 0; y < g->unk_10; y++) {
        row = &rows[y];
        rows[y] = 0;
        x = 0;
        goto xt0;
    xl0:
        if (g == 0) goto xn0;
        if (BlockMap_canPlaceItem(g, x, y) == 0) goto xn0;
        hx = x >> 4;
        hy = y >> 4;
        cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (cell == 0) goto xn0;
        if (Item_IsFurniture() != 0) {
            u16 tmp = 0xfff1;
            void *a = Item_GetFurnitureIndex(cell);
            void *bb = Item_GetFurnitureIndex(&tmp);
            ok = (a == bb) ? TRUE : FALSE;
        } else {
            if (*cell == 0xfff1) ok = TRUE;
            else ok = FALSE;
        }
        if (ok) {
            cnt = (u8)(cnt + 1);
            *row = *row | (1 << x);
        }
    xn0:
        x++;
    xt0:
        if (x < g->unk_0c) goto xl0;
    }
    for (i = 0; i < 3 && sHouseRoachActiveCount < sHouseRoachTotal; i++) {
        if (cnt == 0) break;
        loc.unk_00 = 0;
        loc.unk_04 = 0;
        loc.unk_08 = 0;
        t = cnt;
        cnt = (u8)(t - 1);
        k = (u8)(func_02063b8c(t) + 1);
        y2 = 0;
        goto yt1;
    yl1:
        x2 = 0;
        row2 = &rows[y2];
        w = g->unk_0c;
        goto xt1;
    xl1:
        b = *row2;
        b = b >> x2;
        b = b & 1;
        if (b) k = (u8)(k - 1);
        if (k == 0) {
            *row2 -= 1 << x2;
            FieldPos_FromUnitCenter(&loc, x2, y2);
            loc.unk_04 = 0x200;
            y2 = g->unk_10;
            goto yn1;
        }
        x2++;
    xt1:
        if (x2 < w) goto xl1;
    yn1:
        y2++;
    yt1:
        if (y2 < g->unk_10) goto yl1;
        sHouseRoaches[i] = (HouseRoach *)Actor_spawn(0xc0, 0x1f, &loc, 0, owner);
        sHouseRoachActiveCount = sHouseRoachActiveCount + 1;
    }
    return TRUE;
}

extern "C" BOOL HouseRoach_LoadCount(void *self) {
    sHouseRoachTotal = ((HouseData *)gSaveHouse)->getRoachCount();
    if (sHouseRoachTotal != 0) return TRUE;
    return FALSE;
}

HouseRoach::HouseRoach() {
    volatile u32 *p = unk_114;
    unk_d4 = 0x614;
    unk_d8 = 0x6b8;
    func_020323b0(unk_dc);
    *p = (u32)data_0213b91c;
    *p = (u32)data_0213b954;
    func_020548d0(unk_120);
    func_02088c4c(unk_1d8);
    func_02135714(unk_230, 2, 12, (void *)func_02000c98, (void *)func_02000c8c);
    func_02135714(unk_248, 2, 12, (void *)func_02000c98, (void *)func_02000c8c);
    unk_110 = 1;
    unk_260 = 0;
    unk_262 = 0;
    unk_22e = 0;
    unk_10c = 3;
}

HouseRoach::~HouseRoach() {
    func_021355f0(unk_248, 2, 12, (void *)func_02000c8c);
    func_021355f0(unk_230, 2, 12, (void *)func_02000c8c);
    func_02088c34(unk_1d8);
    func_020548a0(unk_120);
    func_0203239c(unk_dc);
}

extern "C" void HouseRoach_FindVillager(void *) {
    u8 i;
    for (i = 0; i < 8; i++) {
        void *r = NpcRegistry_FindVillager(i);
        if (r) sHouseRoachVillager = (Unk_ov004_02236320_Ent *)r;
    }
}

s32 HouseRoach::getSoundState() {
    return unk_264;
}

void HouseRoach::setSoundState(s32 v) {
    unk_264 = v;
}

BOOL HouseRoach::setup() {
    CachedModel_loadCached(unk_120, 0x474f4b49, sHouseRoachModelPath);
    void *h = FrameHeap_CreateAsCurrent(0x5000, gCurrentHeap);
    ProcBase_SetHeap(this, h);
    AnimModel_allocAnmObj(unk_120, 0);
    void *t = File_Load("/insect/51/bug52.nsbva");
    func_020e877c(h);
    Heap_RestoreCurrent();
    void *r = func_021067a4(func_02106788(t), 0);
    BlendAnimModel_initAnim(unk_120, r, 0, 0x1000, 0, 0);
    AnimModel_attachAnim(unk_120);
    Unk_02003c30_callReset(unk_114);
    s16 *q = &unk_92;
    q[1] = unk_8e;
    unk_228 = q[1];
    unk_9c = -819;
    unk_98 = unk_d4;
    unk_22a = 0;
    unk_263 = 0;
    unk_264 = 0;
    return TRUE;
}

void HouseRoach::updateState() {
    Unk_ov004_02236320_V3 v;
    if (unk_10c != 2) {
        updateCollision();
    }
    switch (unk_10c) {
    case 0:
        updateCrawl();
        break;
    case 1:
        unk_98 = unk_d4;
        if (unk_22c-- > 0) {
            break;
        }
        if (unk_22a != 0) {
            break;
        }
        unk_10c = 0;
        unk_22c = (func_02063b8c(10) + 3) * 20;
        break;
    case 2:
        Effect_PlayById(0x50, &unk_5c, 0, 0);
        F08(this) = F08(this) - 1;
        unk_110 = 2;
        playSe(2);
        break;
    case 3:
        if (func_02063b8c(100) > 0x32) {
            unk_10c = 0;
            unk_22c = (func_02063b8c(10) + 3) * 20;
        } else {
            unk_10c = 1;
            unk_22c = (func_02063b8c(4) + 3) * 20;
        }
        break;
    }
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_02003c40_callUpdateRelative(unk_114, &v);
}

void HouseRoach::updateCollision() {
    s32 ang;
    Unk_ov004_02236320_V3 *p;
    Unk_ov004_02236950_Obj o0;
    Unk_ov004_02236950_Obj o1;
    Unk_ov004_02236950_Obj o2;
    Unk_ov004_02236950_Obj o3;
    u8 fr[4];
    u8 fm[4];
    Unk_ov004_02236320_V3 v[4];
    s32 z1;
    s32 z2;
    u32 n;
    u8 i;
    s32 t;
    p = (Unk_ov004_02236320_V3 *)this;
    p = (Unk_ov004_02236320_V3 *)((u8 *)p + 0x5c);
    n = 1;
    ang = unk_8e;
    t = FX_Div(0x1000, 0x2000);
    switch (Scene_GetHouseRoom()) {
    case 1:
    case 4:
        v[0].x = func_01ffcb0c(0x20000, t);
        v[0].z = func_01ffcb0c(0x39000, t);
        fm[0] = n;
        break;
    case 2:
        v[0].x = func_01ffcb0c(0x13000, t);
        v[0].z = func_01ffcb0c(0x35000, t);
        fm[0] = 0;
        break;
    case 3:
        v[0].x = func_01ffcb0c(0x2c000, t);
        v[0].z = func_01ffcb0c(0x37000, t);
        fm[0] = 0;
        break;
    case 0:
        n = 4;
        v[0].x = func_01ffcb0c(0xf000, t);
        v[0].z = func_01ffcb0c(0x34000, t);
        fm[0] = 0;
        v[1].x = func_01ffcb0c(0x31000, t);
        v[1].z = func_01ffcb0c(0x34000, t);
        fm[1] = 0;
        v[2].x = func_01ffcb0c(0x20000, t);
        v[2].z = func_01ffcb0c(0x39000, t);
        fm[2] = 1;
        v[3].x = func_01ffcb0c(0x20000, t);
        v[3].z = func_01ffcb0c(0x17000, t);
        fm[3] = 1;
        break;
    }
    z1 = 0;
    z2 = z1;
    for (i = 0; i < n; i++) {
        if (fm[i] != 0) {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = BoxCollider_Register((u8 *)&o0 + i * 0x9c, a, 0x1000, b, &v[i], z2, z2);
        } else {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = BoxCollider_Register((u8 *)&o0 + i * 0x9c, 0x1000, a, b, &v[i], z1, z1);
        }
    }
    if (unk_10c != 0) {
        move();
    }
    updatePosition((Unk_02002cb0_Vec *)&unk_1d8);
    Collision_Move(&unk_dc, p, &unk_68, ang, 0x666, this, 0xf);
    for (i = 0; i < n; i++) {
        if (fr[i] != 0) {
            BoxCollider_Unregister((u8 *)&o0 + i * 0x9c);
        }
    }
    func_02031c10(&o3);
    func_02031c10(&o2);
    func_02031c10(&o1);
    func_02031c10(&o0);
}

void HouseRoach::updateAppear() {
    Unk_ov004_02236320_V3 v;
    unk_98 = unk_d4;
    updateCollision();
    unk_5c.y = unk_6c;
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    v.x = unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_02003c40_callUpdateRelative(unk_114, &v);
}

BOOL HouseRoach::execute() {
    u32 t;
    unk_263 = 0;
    t = F08(this);
    if (t >= 0x1f) {
        if (unk_110 == 1) {
            if (sHouseRoachVillager == NULL) {
                HouseRoach_FindVillager(this);
            }
            checkStomped();
            updateHitBox();
            updateState();
            checkHeight();
            if (unk_22a != 0) {
                AnimModel_stepAnim(unk_120);
            }
        } else {
            F08(this) = t - 1;
        }
    } else {
        if (unk_110 == 1) {
            F08(this) = t + 2;
            updateAppear();
        } else {
            F08(this) = t - 1;
        }
    }
    if (F08(this) != 0) {
        Unk_ov004_02236320_Mtx buf;
        unk_d0 = WorldCurve_ToCurved(&unk_c4, &unk_5c);
        calcModelMatrix(&buf);
        unk_184 = buf;
    } else {
        release();
    }
    if (unk_263 == 0) {
        setSoundState(0);
    }
    return TRUE;
}

BOOL HouseRoach::checkHeight() {
    if (unk_5c.y >= 0xc00) {
        unk_5c.y = unk_6c;
        if ((unk_dc[1] & 1) != 0) {
            u8 buf[0x40];
            unk_10c = 2;
            GroundInfo_initAtPos(buf, &unk_5c, 0, 0);
            unk_5c.y = GroundInfoBase_getHeight(buf, 1);
            GroundInfo_Destruct(buf);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL HouseRoach::checkStomped() {
    Unk_ov004_02236320_Ent *pl = (Unk_ov004_02236320_Ent *)PlayerActor_GetActor(4);
    if (unk_214 != 0) {
        if (unk_22a == 0) {
            if (pl != NULL) {
                if (pl->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 4) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
            if (sHouseRoachVillager != NULL) {
                if (sHouseRoachVillager->unk_98 > 0) {
                    if (func_02088d38(unk_1d8, 8) != 0) {
                        unk_10c = 2;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL HouseRoach::draw() {
    if (unk_110 != 4) {
        Unk_ov004_02236320_V3 *pv = &unk_5c;
        if (F08(this) > 0x1f) {
            F08(this) = 0x1f;
        }
        Model_setPolygonId(unk_120, 3);
        NNSi_G3dModifyPolygonAttrMask(unk_17c, 1, 0x1f0000);
        Model_setAlpha(unk_120, (u8)F08(this));
        AnimModel_drawAnimated(unk_120, 0);
        if (F08(this) >= 0x1f && unk_110 == 1) {
            func_020abc10(pv, 0x400, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

BOOL HouseRoach::release() {
    CachedModel_release(unk_120);
    unk_110 = 4;
    F08(this) = 0xffff;
    Unk_02003c30_callRelease(unk_114);
    return TRUE;
}

void HouseRoach::playSe(u32 sel) {
    switch (sel) {
    case 0:
        unk_263 = 1;
        if (getSoundState() == 2) {
            Unk_02003c40_callRequest(unk_114, 0x1d2);
        } else {
            setSoundState(1);
        }
        break;
    case 1:
        Unk_02003c40_callRequestSustained(unk_114, 0x1d3);
        break;
    default:
        Unk_02003c40_callRequestSustained(unk_114, 0x1d4);
        break;
    }
}

u8 HouseRoach::probeWalls() {
    u8 r6 = 0;
    Unk_ov004_02236320_V3 *r4r = &unk_230[0];
    Unk_ov004_02236320_O1 o1;
    u32 o2[16];
    u32 o3[16];
    volatile s32 t1;
    s16 t2;
    s16 t1v;
    s16 ang;
    func_020323b0(&o1);
    GroundInfo_initAtPos(o2, r4r, r6, r6);
    ang = unk_8e;
    if (unk_248[0].x == 0 || unk_248[0].z == 0) {
        unk_248[0].x = unk_230[0].x;
        unk_248[0].y = unk_230[0].y;
        unk_248[0].z = unk_230[0].z;
    }
    Collision_Move(&o1, r4r, &unk_248[0], ang, 0x19a, this, 0xf);
    t1 = (s16)(u16)((Unk_ov004_02236320_O1 *)(u32)&o1)->f;
    if (GroundInfoBase_getHeight(o2, 1) > 0x200 || r4r->y > 0x1000 || t1 > 0) {
        r6++;
    }
    GroundInfo_initAtPos(o3, r4r + 1, 0, 0);
    if (unk_248[1].x == 0 || unk_248[1].z == 0) {
        unk_248[1].x = unk_230[1].x;
        unk_248[1].y = unk_230[1].y;
        unk_248[1].z = unk_230[1].z;
    }
    Collision_Move(&o1, r4r + 1, &unk_248[1], ang, 0x19a, this, 0xf);
    t2 = (s16)(u16)((Unk_ov004_02236320_O1 *)(u32)&o1)->f;
    if (GroundInfoBase_getHeight(o3, 1) > 0x200 || r4r[1].y > 0x1000 || t2 > 0) {
        r6 += 2;
    }
    GroundInfo_Destruct(o3);
    GroundInfo_Destruct(o2);
    func_0203239c(&o1);
    return r6;
}

void HouseRoach::setProbePoints(s32 dist, s32 delta) {
    Unk_ov004_02236320_V3 *pv = &unk_5c;
    s16 ang = unk_8e;
    u32 idx;
    unk_230[0].x = unk_5c.x;
    unk_230[0].y = pv->y;
    unk_230[0].z = pv->z;
    unk_230[1].x = unk_5c.x;
    unk_230[1].y = pv->y;
    unk_230[1].z = pv->z;
    unk_248[0].x = unk_230[0].x;
    unk_248[0].y = unk_230[0].y;
    unk_248[0].z = unk_230[0].z;
    unk_248[1].x = unk_230[1].x;
    unk_248[1].y = unk_230[1].y;
    unk_248[1].z = unk_230[1].z;
    idx = ((u16)(s16)(ang + delta) >> 4) * 2;
    unk_230[0].x += (dist * data_02135f44[idx]) / 100;
    unk_230[0].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[0].y = 0x200;
    idx = ((u16)(s16)(ang - delta) >> 4) * 2;
    unk_230[1].x += (dist * data_02135f44[idx]) / 100;
    unk_230[1].z += (dist * data_02135f44[idx + 1]) / 100;
    unk_230[1].y = 0x200;
}

Unk_ov004_02236320_Ent *HouseRoach::getNearestCharacter() {
    s32 d4, d3, d2, d1;
    Unk_ov004_02236320_Ent *p;
    Unk_ov004_02236320_Ent *g;
    Unk_ov004_02236320_V3 *a;
    Unk_ov004_02236320_V3 *b;
    Unk_ov004_02236320_V3 *c;
    p = (Unk_ov004_02236320_Ent *)PlayerActor_GetActor(4);
    g = sHouseRoachVillager;
    if (g != NULL) {
        if (p != NULL) {
            a = &unk_5c;
            b = &p->unk_5c;
            c = &g->unk_5c;
            d1 = unk_5c.x - p->unk_5c.x;
            if (d1 < 0) d1 = -d1;
            d2 = a->z - b->z;
            if (d2 < 0) d2 = -d2;
            d3 = unk_5c.x - c->x;
            if (d3 < 0) d3 = -d3;
            d4 = a->z - c->z;
            if (d4 < 0) d4 = -d4;
            if (d1 + d2 > d3 + d4) goto retg;
            return p;
        }
        retg:
        return g;
    }
    return p;
}

void HouseRoach::updateCrawl() {
    u8 *self0 = (u8 *)&unk_5c;
    s32 res = 0;
    u8 i;
    s32 zero = 0;
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = (s32)PlayerActor_GetActor(4);
        } else {
            o = (s32)sHouseRoachVillager;
        }
        if (o != 0 && res == 0) {
            u8 *q = (u8 *)(o + 0x5c);
            unk_22c = unk_22c - 1;
            unk_98 = zero;
            if (unk_22c <= 0) {
                unk_10c = 1;
                unk_22c = (func_02063b8c(4) + 1) * 20;
                res = 1;
            } else if (*(s32 *)(o + 0x98) > 0) {
                s32 d = func_020e9650(self0, q);
                if (d < func_01ffcb0c(0x1000, 0x4000)) {
                    unk_22c = (func_02063b8c(4) + 2) * 20;
                    unk_10c = 1;
                    res = 2;
                }
            }
        }
    }
    if (res == 2) {
        Unk_ov004_02236320_Ent *t = getNearestCharacter();
        if (t) {
            s16 *q92 = &unk_92;
            q92[1] = Math_AngleXZ(&t->unk_5c, self0);
            unk_8e = q92[1];
        }
    }
}

void HouseRoach::updateHitBox() {
    func_02088bf8(unk_1d8, this, &unk_5c, 0x19a, 0x333, 0x81, 0xc, 0, 0xff, 0x1000);
    func_02089040(unk_1d8);
}

BOOL HouseRoach::move() {
    s32 a = unk_8e;
    Unk_ov004_02236320_V3 *p6 = &unk_5c;
    s32 hit = 0;
    u8 i;
    setProbePoints(0x3c, 0xe38);
    unk_260 = probeWalls();
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = (s32)PlayerActor_GetActor(4);
        } else {
            o = (s32)sHouseRoachVillager;
        }
        if (o != 0 && hit == 0) {
            Unk_ov004_02236320_V3 *q = (Unk_ov004_02236320_V3 *)(o + 0x5c);
            if (func_020e9650(p6, q) < 0x1800) {
                s32 d = Math_AngleXZ(p6, q);
                if ((d >= 0 && a >= 0) || (d <= 0 && a <= 0)) {
                    s32 t = d - a;
                    if (t < 0) {
                        t = -t;
                    }
                    if (t < 0x2aaa) {
                        unk_22e = unk_22e + 1;
                        unk_22a = 1;
                        hit = 1;
                        unk_98 = unk_d8;
                        playSe(1);
                    }
                }
            }
        }
    }
    s32 c = unk_22e;
    if (c > 0) {
        s32 k = c << 12;
        s32 r = func_01ffcb0c(0xcd, k);
        p6->y = func_01ffcb0c(0x99a - r, k);
        if (p6->y < 3) {
            p6->y = 3;
            unk_22e = 0;
            unk_22a = 0;
            AnimModel_setFrame(unk_120);
        } else {
            unk_22e = unk_22e + 1;
            AnimModel_stepAnim(unk_120);
        }
    } else {
        s32 m = unk_260;
        if (m > 0) {
            if (m == 3) {
                if (unk_262 == 1 || unk_262 == 10) {
                    a = (s16)(a - 0xaaa);
                } else {
                    a = (s16)(a + 0xaaa);
                }
            } else if (m == 1 || unk_262 == 1) {
                a = (s16)(a - 0xaaa);
                unk_262 = 1;
            } else if (m == 2 || unk_262 == 2) {
                a = (s16)(a + 0xaaa);
                unk_262 = 2;
            }
        } else {
            if (sHouseRoachTurnCounter == 4) {
                a = (s16)(a + 0xaaa);
                sHouseRoachTurnCounter = -1;
            } else if (sHouseRoachTurnCounter == 2) {
                a = (s16)(a - 0xaaa);
            }
            sHouseRoachTurnCounter = sHouseRoachTurnCounter + 1;
            if (unk_262 < 10) {
                unk_262 = unk_262 * 10;
            }
        }
        playSe(m > 0 ? 0 : 0);
    }
    s16 *q92 = &unk_92;
    q92[1] = a;
    unk_8e = q92[1];
    return TRUE;
}

BOOL HouseRoach::onDraw() {
    return draw();
}

// ---- 0224ebec methods (symbols.txt names 0x2235fd0-0x2236244 after the 0224eb9c class; renamed)

BOOL HouseRoach::vfunc_00() {
    if (Scene_InHouseRoom()) {
        return setup();
    }
    return 1;
}

BOOL HouseRoach::onExecute() {
    return execute();
}

BOOL HouseRoach::vfunc_0c() {
    return release();
}

// Declarations for data defined further down (definition order sets the data layout)

extern "C" Unk_ov004_0224eb5c_Entry sHouseRoachManagerProfile = {(void *(*)())HouseRoachManager_Create, 0xbf, 0xc2};

extern "C" char sHouseRoachModelPath[0x18] = "/insect/51/bug52.nsbmd";

extern "C" Unk_ov004_0224eb7c_Entry sHouseRoachProfile = {(void *(*)())HouseRoach_Create, 0xc0, 0xc3, 2, 0x50000, 0x50000, 0x140000};

extern "C" s8 sHouseRoachTurnCounter = 0;

extern "C" volatile u8 sHouseRoachActiveCount = 0;

extern "C" void *sHouseRoachManager = 0;

extern "C" Unk_ov004_02236320_Ent *sHouseRoachVillager = 0;

extern "C" volatile u8 sHouseRoachTotal = 0;

extern "C" HouseRoach *sHouseRoaches[3] = {0};

// mwcc-version: 1.2/base
// ov003 TU22 (field objects, .text 0x02219294-0x0221ffb8): 11 unit files merged; every old file is a namespace
#include "types.h"
#include "Unk_020d8c7c.h"

// ================================================================ other modules' real names
#define CommManager_isOnline _ZN11CommManager8isOnlineEv
#define BlockMap_getDigKind _ZN8BlockMap10getDigKindEii
#define BlockMap_canPlaceItem _ZN8BlockMap12canPlaceItemEii
#define func_02133150 _s32_div_f
#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define CachedModel_release _ZN11CachedModel7releaseEv
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define CachedModel_allocJointRecord _ZN11CachedModel16allocJointRecordEPv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_setCallback _ZN5Model11setCallbackEiiiii
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define func_02135714 __cxa_vec_ctor
#define func_021355f0 __cxa_vec_cleanup
#define Model_drawShapesDirect _ZN5Model16drawShapesDirectEPi
#define CachedModel_loadWithSharedTex _ZN11CachedModel17loadWithSharedTexEPvS0_S0_
#define CachedModel_load _ZN11CachedModel4loadEPvS0_
#define CachedModel_loadWithTex _ZN11CachedModel11loadWithTexEPvS0_S0_S0_Pji
#define ModelSlotPool_acquire _ZN13ModelSlotPool7acquireEPt
#define PooledModel_loadFromSlot _ZN11PooledModel12loadFromSlotEP9ModelSlotPKc
#define PooledModel_getModel _ZN11PooledModel8getModelEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelSlot_getHeap _ZN9ModelSlot7getHeapEv
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj


// ================================================================ shared (global) classes
class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 pad_04[0x94 / 4];
    u32 unk_98;
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

extern "C" {
void TreeAnimSet_Construct(void *p);
}

// the sub-object at +0x4b20: constructed by the explicit call in the scene constructor, destroyed by the implicit member
// destructor, which is the function at 0x0221c4e4
class TreeAnimSet {
public:
    ~TreeAnimSet();
    u8 pad[0x6a70 - 0x4b20];
};

// main's UnitShapeQuery, declared in its label spelling UnitShapeQueryX (its destructor stubs 0x020315d0/f4/2031600/0x0203160c
// are byte-identical; the call in D0 goes to 0x020315d0, which symbols.txt names ...C2Ev, so the base is declared under the
// X spelling, whose D2 label is an alias of it)
struct UnitShapeQueryX {
    virtual ~UnitShapeQueryX();
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
};

class FieldObjectShapeQuery : public UnitShapeQueryX {
public:
    virtual BOOL getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z);
    virtual ~FieldObjectShapeQuery();   // not defined here: D1 is main's, D0 is the separate unit at 0x02219294
};

class FieldObjectManager : public GameProc {
public:
    inline FieldObjectManager()
    {
        TreeAnimSet_Construct(&treeAnimSet);
    }
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_00();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x050 */ u32 iconModels[0x49];
    /* 0x174 */ CachedModel treeModels[0x12];
    /* 0xc6c */ CachedModel cedarModels[6];
    /* 0x1014 */ CachedModel litCedarModels[3];
    /* 0x11e8 */ CachedModel palmModels[6];
    /* 0x1590 */ CachedModel flowerModels[0x28];
    /* 0x2df0 */ CachedModel specialFlowerModels[4];
    /* 0x3060 */ u8 pad_3060[8];
    /* 0x3068 */ CachedModel designModels[0x20];
    /* 0x43e8 */ CachedModel grassModels[5];
    /* 0x46f4 */ u32 stoneModels[5];
    /* 0x4708 */ CachedModel holeModels[2];
    /* 0x4840 */ CachedModel crackModels[2];
    /* 0x4978 */ u32 stumpModels[12];
    /* 0x49a8 */ CachedModel turnipModels[2];
    /* 0x4ae0 */ Unk_020dbd44 iconModelSet;
    /* 0x4af0 */ Unk_020dbd44 dandelionModelSet;
    /* 0x4b00 */ Unk_020dbd44 stoneModelSet;
    /* 0x4b10 */ Unk_020dbd44 stumpModelSet;
    /* 0x4b20 */ TreeAnimSet treeAnimSet;
};

struct FieldItemFx {
    u8 pad_00[0x10];
    u32 unitX;
    u32 unitZ;
    u8 pad_18[0x48];
    u8 seEmitter[0x44];
    FieldItemFx();
    ~FieldItemFx();
};

struct FieldItemFxTable {
    FieldItemFx entries[0x14];
    ~FieldItemFxTable();
};

// zero-initialised 3-word object whose (empty) destructor lives in main
class FxVec3 {
public:
    FxVec3() {}
    ~FxVec3();
    s32 x, y, z;
};

extern "C" {
void func_020f43fc(void *p);
void func_020f440c(void *p);
}

// ================================================================ per-file declarations
namespace ns_0221927c {
struct Unk_ov003_02219578_P2 {
    s32 x, z;
    Unk_ov003_02219578_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_02219578_P2(const Unk_ov003_02219578_P2 &o) { x = o.x; z = o.z; }
};
struct Unk_ov003_02219578_V3 {
    s32 x, y, z;
    Unk_ov003_02219578_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_02219578_V3(const Unk_ov003_02219578_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_ov003_022195b8_Pos {
    s32 x, z;
};
struct Unk_ov003_02219654_V3 {
    s32 x, y, z;
};
struct Unk_ov003_02219654_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02219654_V3 position;
};
typedef Unk_ov003_02219578_P2 P2;
typedef Unk_ov003_02219578_V3 V3;
struct CommManager {
    u8 pad_00[0x64];
    s32 myAid;
};
extern "C" {

extern u8 sFieldItemFxTable[];
extern u8 sLandingUnitOffsets[];
extern CommManager *gCommManager;
BOOL CommManager_isOnline(CommManager *g);

void *TownBlockMap_Get();
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
BOOL BlockMap_getDigKind(void *g, s32 x, s32 z);
void *BlockMap_GetItemPtr(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 PendingUnit_Find(void *p, s32 a);
BOOL BlockMap_canPlaceItem(void *g, s32 x, s32 z);
void *PlayerActor_GetActor(s32 a);
s32 func_02133150(s32 a, s32 b);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
s32 Math_AngleToDir8(s32 a);
u8 *PendingUnit_Get();

s32 FieldItemFxTable_StartForPlayer(void *tbl, s32 a, P2 p, V3 q, s32 k, s32 v, s32 w, s32 x);
s32 FieldItemFxTable_Start(void *tbl, s32 a, P2 p, V3 q, s32 k, s32 v, s32 w, s32 x);
}
// ---- prototypes of this file's functions
extern "C" s32 FieldItemFx_StartFillHoleWithItem(s32 a, s32 b);
extern "C" void FieldItemFx_StartPop(s32 a, s32 b, P2 c);
extern "C" void FieldItemFx_StartTreeDrop(s32 a, s32 v, P2 p, V3 q, s16 t, s32 x);
extern "C" void FieldItemFx_StartTreeDropFloat(s32 a, s32 v, P2 p, V3 q, s32 w);
extern "C" void FieldItemFx_StartBeeHiveDrop(s32 a, s32 v, P2 p, V3 q);
extern "C" s32 FieldItemFx_StartDigUpTree(s32 a, s32 b, s32 c);
extern "C" void FieldItemFx_StartPlant(s32 a, s32 b, P2 c, V3 d);
extern "C" s32 FieldItemFx_StartHoleShrink(s32 a, s32 b);
extern "C" void FieldItemFx_StartStrikeShake(s32 a, s32 b, P2 c);
extern "C" void FieldItemFx_StartBalloonDrop(s32 a, s32 n);
extern "C" s32 FieldItemFx_FindLandingUnit(s32 *p);
extern "C" void FieldItemFx_StartStrikeEject(s32 a, s32 v, P2 p, V3 q);
extern "C" s32 FieldItemFx_StartPitfallClose(s32 a, s32 b);
}

namespace ns_02219b84 {
struct Unk_ov003_022359a4_P2 {
    s32 x, y;
    Unk_ov003_022359a4_P2() {}
    Unk_ov003_022359a4_P2(s32 a, s32 b) {
        x = a;
        y = b;
    }
    Unk_ov003_022359a4_P2(const Unk_ov003_022359a4_P2 &o) {
        x = o.x;
        y = o.y;
    }
    bool operator==(const Unk_ov003_022359a4_P2 &o) const { return x == o.x && y == o.y; }
};
struct Unk_ov003_022359a4_V3 {
    s32 x, y, z;
    Unk_ov003_022359a4_V3() {}
    Unk_ov003_022359a4_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov003_022359a4_V3(const Unk_ov003_022359a4_V3 &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};
struct Unk_ov003_022359a4_Blk {
    s64 v[6];
};
typedef Unk_ov003_022359a4_P2 P2;
typedef Unk_ov003_022359a4_V3 V3;
typedef Unk_ov003_022359a4_Blk Blk;
struct Unk_ov003_022359a4_Ent {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u16 unk_08;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ P2 unk_10;
    /* 0x18 */ V3 unk_18;
    /* 0x24 */ V3 unk_24;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ V3 unk_3c;
    /* 0x48 */ u8 pad_48[6];
    /* 0x4e */ u16 unk_4e;
    /* 0x50 */ u8 pad_50[2];
    /* 0x52 */ s16 unk_52;
    /* 0x54 */ u8 pad_54[0xc];
    /* 0x60 */ u8 unk_60[0x40];
    /* 0xa0 */ u8 unk_a0;
};
typedef Unk_ov003_022359a4_Ent Ent;
struct Unk_ov003_022359a4 {
    Ent e[20];
};
typedef Unk_ov003_022359a4 Tbl;
extern "C" {

extern Tbl sFieldItemFxTable;
extern void *gCommManager;
extern void *gFieldObjectManager;
extern Blk data_021f47e0;

void *TownBlockMap_Get();
void FieldPos_ToUnit(s32 *x, s32 *y, s32 v);
s32 BlockMap_getDigKind(void *m, s32 x, s32 y);
s32 CommManager_isOnline(void *g);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 y);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void func_01ffd070(V3 *, void *, void *);
s32 WorldCurve_ToCurved(V3 *, V3 *);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
void func_020e84f8(Blk *m, s32 x, s32 y, s32 z);
s32 PendingUnit_Find(P2 p, s32 z);
u8 *PendingUnit_Get(s32 i);

s32 FieldItemFx_Finish(Ent *e);
s32 FieldItemFx_Init(Ent *e, s32 g, P2 p, V3 v, s32 a, u32 b, void *map, s32 c, s32 d);
s32 Field_SetUnitItem(s32 x, s32 y, s32 t, s32 z);
s32 FieldObj_DrawItemIcon(void *o, u32 t, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f);
s32 FieldObj_DrawGrass(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawFlower(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawFlowerBySpecies(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawSpecialFlower(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawHole(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawStump(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawTree(void *o, volatile u16 *t, s32 a, s32 b, V3 *c, Blk m);
s32 FieldObj_DrawSapling(void *o, volatile u16 *t, s32 a, s32 b, Blk m);
s32 FieldObj_DrawRock(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawTurnip(void *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawDesign(void *o, volatile u16 *t, Blk m);

void FieldItemFx_UpdateToss(Ent *e);
void FieldItemFx_UpdateHoleOpen(Ent *e);
void FieldItemFx_UpdateHoleClose(Ent *e);
void FieldItemFx_UpdatePop(Ent *e);
void FieldItemFx_UpdateTreeDrop(Ent *e);
void FieldItemFx_UpdateTreeDropFloat(Ent *e);
void FieldItemFx_UpdateBeeHiveDrop(Ent *e);
void FieldItemFx_UpdateDigUpTree(Ent *e);
void FieldItemFx_UpdatePlant(Ent *e);
void FieldItemFx_UpdateHoleShrink(Ent *e);
void FieldItemFx_UpdateStrikeShake(Ent *e);
void FieldItemFx_UpdateBalloonDrop(Ent *e);

s32 FieldItemFxTable_StartForPlayer(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i);
s32 FieldItemFxTable_Start(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i);
Ent *FieldItemFxTable_FindFree(Tbl *t, s32 g);

static inline BOOL Unk_ov003_02219e7c_Chk2(u32 v) {
    BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    if (v <= 5) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 6 || v > 0xb) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) {
            f4 = FALSE;
        }
    }
    return f4;
}

static inline BOOL Unk_ov003_02219e7c_Chk1(volatile u16 *q, volatile u16 *p, u16 &a) {
    BOOL f = FALSE;
    a = *q;
    u32 v = *p;
    if (v >= 0x21 && a <= 0x24) {
        f = TRUE;
    }
    return f;
}

static inline BOOL Unk_ov003_02219e7c_Chk4(u32 a) {
    BOOL f = FALSE;
    u32 d = (u16)(a + 0xffe6);
    if (d <= 4) {
        if ((1 << d) & 0x1b) {
            f = TRUE;
        }
    }
    return f;
}
}
// ---- prototypes of this file's functions
extern "C" { void FieldItemFx_InitPitfallClose(Ent *e, P2 *p, void *m); }
extern "C" { void FieldItemFxTable_Init(Tbl *t); }
extern "C" { void FieldItemFxTable_Update(Tbl *t); }
extern "C" { void FieldItemFxTable_Draw(Ent *e); }
extern "C" { void FieldItemFxTable_Release(Tbl *t); }
extern "C" { Ent *FieldItemFxTable_FindFree(Tbl *t, s32 g); }
extern "C" { s32 FieldItemFxTable_Start(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i); }
extern "C" { s32 FieldItemFxTable_StartForPlayer(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i); }
extern "C" { s32 FieldItemFx_CancelAt(s32 idx, P2 *q); }
extern "C" { s32 FieldItemFx_StartDrop(s32 a, u32 b, P2 p, V3 v); }
extern "C" { s32 FieldItemFx_StartDigHole(s32 type, s32 v, s32 w); }
extern "C" { s32 FieldItemFx_StartPitfallHole(s32 type, s32 v); }
extern "C" { s32 FieldItemFx_StartFillHole(s32 type, s32 v); }
}

namespace ns_0221a4a0 {
struct Unk_ov003_0221a4a0_V3 {
    s32 x, y, z;
};
struct Unk_ov003_0221a4a0_V2 {
    s32 a, b;
};
struct Unk_ov003_0221a4a0_Buf {
    u8 pad_00[0x30];
    s32 waterKind;
    u8 pad_34[8];
    s32 waterSurfaceY;
};
struct Unk_ov003_0221a4a0 {
    /* 0x00 */ u32 sessionSlot;
    /* 0x04 */ s32 active;
    /* 0x08 */ u16 item;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 kind;
    /* 0x10 */ s32 unitX;
    /* 0x14 */ s32 unitZ;
    /* 0x18 */ s32 posX;
    /* 0x1c */ s32 posY;
    /* 0x20 */ s32 posZ;
    /* 0x24 */ s32 offsetX;
    /* 0x28 */ u8 pad_28[8];
    /* 0x30 */ s32 velocityX;
    /* 0x34 */ s32 velocityY;
    /* 0x38 */ s32 velocityZ;
    /* 0x3c */ s32 scaleX;
    /* 0x40 */ s32 scaleY;
    /* 0x44 */ s32 scaleZ;
    /* 0x48 */ s16 startArg;
    /* 0x4a */ u16 pad_4a;
    /* 0x4c */ s16 step;
    /* 0x4e */ u16 frame;
    /* 0x50 */ s16 timer;
    /* 0x52 */ s16 alpha;
    /* 0x54 */ Unk_ov003_0221a4a0_V3 origin;
    /* 0x60 */ u8 seEmitter[0x40];
    /* 0xa0 */ u8 pendingApply;
    /* 0xa1 */ u8 pad_a1[3];
};
extern "C" {

extern Unk_ov003_0221a4a0_V3 sBalloonSplashPos;
extern u8 gEffectSplDefaultInitCbs[];
extern s16 data_02135f44[];
extern s32 sItemPopScaleXZ[];
extern s32 sItemPopScaleY[];

void GroundInfo_initAtPos(Unk_ov003_0221a4a0_Buf *b, void *pos, s32 a, s32 c);
void GroundInfo_Destruct(Unk_ov003_0221a4a0_Buf *b);
void VEC_Add(void *a, void *b, void *out);
void func_01ffd070(Unk_ov003_0221a4a0_V3 *out, void *m, Unk_ov003_0221a4a0_V3 *v);
s32 EffectSpl_CreateOneShot(s32 id, void *v, s32 c, void *cb);
void EffectModel_Start(s32 a, void *fn);
void Sky_PlayBalloonDropSe(s32 a);
void Sky_EndBalloonDrop(void);
void PlayerActor_LocalRequestAct77From(void *p);
void FieldItemFx_Finish(Unk_ov003_0221a4a0 *p);
s32 FieldItemFx_ReleasePending(Unk_ov003_0221a4a0 *p);
s32 FieldItemFx_Clear(Unk_ov003_0221a4a0 *p);
u32 FieldItemFx_FindLandingUnit(void *p);
s32 FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
s32 func_02133150(s32 a, s32 b);
void *PlayerData_GetCurrent(void);
void Unk_02097ff4_setFlag(void *p, s32 a);
void Field_SetUnitItem(s32 a, s32 b, u32 c, s32 d);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
void Insect_SpawnBeeSwarm(void *p);
s32 FieldItemFx_StartPop(u32 a, u32 b, void *p);
void Town_SetBeesReleased(void);
void FieldItemFx_SplashPosCallback(void *p);
}
struct Unk_ov003_0221a664_Obj {
    s32 pad_00;
    Unk_ov003_0221a4a0_V3 pos;
};
static inline s32 Unk_ov003_0221aabc_Idx(s32 a) { return ((u16)a >> 4) * 2; }
static inline BOOL Unk_ov003_0221ad84_Chk(volatile u16 *p, u32 &vr)
{
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE;
    s32 f1 = 0;
    u32 v = *p;
    u32 w = *p;
    vr = v;
    if (w <= 5) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) &&
            (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}
// ---- prototypes of this file's functions
extern "C" void FieldItemFx_UpdateHoleClose(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitPop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p);
extern "C" void FieldItemFx_UpdatePop(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitTreeDrop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, s32 skip);
extern "C" void FieldItemFx_UpdateTreeDrop(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitTreeDropFloat(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q);
extern "C" void FieldItemFx_UpdateTreeDropFloat(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitBeeHiveDrop(Unk_ov003_0221a4a0 *self, s32 a, Unk_ov003_0221a4a0_V3 *p);
extern "C" void FieldItemFx_UpdateBeeHiveDrop(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitDigUpTree(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, u32 ang);
extern "C" void FieldItemFx_UpdateDigUpTree(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitPlant(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, u32 w);
extern "C" void FieldItemFx_UpdatePlant(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitHoleShrink(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p);
extern "C" void FieldItemFx_UpdateHoleShrink(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_InitStrikeShake(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p);
extern "C" void FieldItemFx_UpdateStrikeShake(Unk_ov003_0221a4a0 *self);
extern "C" void FieldItemFx_SplashPosCallback(void *p);
extern "C" void FieldItemFx_InitBalloonDrop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V3 *p);
extern "C" void FieldItemFx_UpdateBalloonDrop(Unk_ov003_0221a4a0 *self);
}

namespace ns_0221aed4 {
struct Unk_ov003_0221aed4_Raw2 {
    s32 x, z;
};
struct Unk_ov003_0221aed4_P2 {
    s32 x, z;
    Unk_ov003_0221aed4_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_0221aed4_P2(const Unk_ov003_0221aed4_P2 &o) { x = o.x; z = o.z; }
    Unk_ov003_0221aed4_P2(const Unk_ov003_0221aed4_Raw2 &o) { x = o.x; z = o.z; }
};
struct Unk_ov003_0221aed4_V3 {
    s32 x, y, z;
    Unk_ov003_0221aed4_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0221aed4_V3(const Unk_ov003_0221aed4_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
typedef Unk_ov003_0221aed4_P2 P2;
typedef Unk_ov003_0221aed4_V3 V3;
struct Unk_ov003_0221aed4_Raw3 {
    s32 x, y, z;
};
struct Unk_ov003_0221b65c_Tmp {
    s32 x, y, z;
    Unk_ov003_0221b65c_Tmp() {}
    ~Unk_ov003_0221b65c_Tmp() {}
};
struct Unk_ov003_0221aed4_Fx {
    /* 0x00 */ s32 sessionSlot;
    /* 0x04 */ s32 active;
    /* 0x08 */ u16 item;
    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ s32 kind;
    /* 0x10 */ s32 unitX;
    /* 0x14 */ s32 unitZ;
    /* 0x18 */ s32 posX;
    /* 0x1c */ s32 posY;
    /* 0x20 */ s32 posZ;
    /* 0x24 */ s32 offsetX;
    /* 0x28 */ s32 offsetY;
    /* 0x2c */ s32 offsetZ;
    /* 0x30 */ s32 velocityX;
    /* 0x34 */ s32 velocityY;
    /* 0x38 */ s32 velocityZ;
    /* 0x3c */ s32 scaleX;
    /* 0x40 */ s32 scaleY;
    /* 0x44 */ s32 scaleZ;
    /* 0x48 */ s16 startArg;
    /* 0x4a */ s16 unk_4a;
    /* 0x4c */ s16 step;
    /* 0x4e */ s16 frame;
    /* 0x50 */ s16 timer;
    /* 0x52 */ s16 alpha;
    /* 0x54 */ s32 originX;
    /* 0x58 */ s32 originY;
    /* 0x5c */ s32 originZ;
    /* 0x60 */ u8 seEmitter[0x40];
    /* 0xa0 */ u8 pendingApply;
    /* 0xa1 */ u8 pendingCommit;
};
struct Unk_ov003_0221b4b8_Obj {
    /* 0x00 */ s32 active;
    /* 0x04 */ s32 sessionSlot;
    /* 0x08 */ Unk_ov003_0221aed4_Raw2 unit;
    /* 0x10 */ s32 animKind;
};
struct Unk_ov003_0221b5e4_Sub {
    u8 pad[0xd4];
    u32 animKind;
};
struct Unk_ov003_0221b5e4_Mid {
    u8 pad[0x2c];
    Unk_ov003_0221b5e4_Sub *ptrUser;
};
struct Unk_ov003_0221b5e4_Kind {
    u8 unk_00;
    u8 nodeId;
};
struct Unk_ov003_0221b5e4_Obj {
    /* 0x00 */ Unk_ov003_0221b5e4_Kind *unk_00;
    /* 0x04 */ Unk_ov003_0221b5e4_Mid *unk_04;
    /* 0x08 */ u8 animModel[0xb0];
    /* 0xb8 */ s32 *pVisAnmResult;
    /* 0xbc */ u8 pad_bc[4];
    /* 0xc0 */ s32 posX;
    /* 0xc4 */ s32 posY;
    /* 0xc8 */ s32 posZ;
    /* 0xcc */ Unk_ov003_0221aed4_Raw2 unit;
    /* 0xd4 */ s32 animKind;
    /* 0xd8 */ s32 alpha;
    /* 0xdc */ s32 leafSpawnCount;
    /* 0xe0 */ u8 pad_e0[0x138 - 0xe0];
    /* 0x138 */ s32 unk_138[3];
    /* 0x144 */ s32 leafRecord;
    /* 0x148 */ s32 seasonalRecord;
};
struct Unk_ov003_0221b7d4_Rec {
    s32 x, y, z;
};
struct Unk_ov003_0221b7d4_Pos {
    s32 x, y, z;
    Unk_ov003_0221b7d4_Pos() {}
};
struct Unk_ov003_0221b7d4_Ent {
    u8 pad_00[8];
    u16 unit;
    u16 unk_0a;
};
extern "C" {

extern u8 *gFieldObjectManager;
extern u32 sTreeAnimPaths[][4];
extern void *sFieldObjectAnimHeap;
extern Unk_ov003_0221b7d4_Rec *data_ov003_0223291c[];

void FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
BOOL BlockMap_getDigKind(void *g, s32 x, s32 z);
s32 Field_SetUnitItem(s32 a, s32 b, u32 c, s32 d);
void VEC_Add(void *a, void *b, void *c);
s32 func_02003e70(void *p, u32 a, u32 b, u32 c);
void *BlockMap_GetItemPtr(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 BlockMap_IsBuriedAtUnit(void *g, s32 x, s32 z);
s32 Item_IsFlower(void *c);
s32 Flower_SpawnPetalFx(void *c, void *p, s32 a, s32 b);
s32 Weed_SpawnPullFx(void *c, void *p);
s32 func_02044014(void *p);
s32 func_02133150(s32 a, s32 b);
s32 PendingUnit_Find(void *p, s32 a);
Unk_ov003_0221b7d4_Ent *PendingUnit_Get(s32 i);
s32 PendingUnit_FindBySlot(u8 a, s32 b);
s32 PendingUnit_ApplyAt(void *p, s32 z);
s32 PendingUnit_CommitAt(void *p, s32 z);
void *TownBlockMap_Get();
s32 PendingUnit_ApplyAtIfAid(const P2 &p, s32 a, s32 b);
void Heap_Free(void *heap, void *p);
void *File_LoadAlloc(void *s, void *heap, s32 a, s32 b);
void *func_021065dc(void *p);
void *func_021065f8(void *p, s32 a);
void BlendAnimModel_initAnim(void *self, s32 a, s32 b, s32 c, u16 d, u16 e);
void AnimModel_attachAnim(void *self);
s32 Item_IsTreeGrown(void *c);
s32 Town_CanReleaseBees();
s32 TreeAnim_Begin(void *self, s32 a);
s32 Tree_GetDropSide(s32 a, void *p);
s32 Tree_DropFruit(void *c, s32 a, P2 p);
s32 Tree_DropBeeHive(s32 a, P2 p);
s32 FieldItemFx_StartTreeDrop(s32 a, s32 v, P2 p, V3 q, s16 t, s32 x);
s32 FieldItemFx_StartTreeDropFloat(s32 a, s32 v, P2 p, V3 q, s32 w);

void FieldItemFx_InitPop(Unk_ov003_0221aed4_Fx *self, P2 p);
void FieldItemFx_InitTreeDrop(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q, s32 a);
void FieldItemFx_InitTreeDropFloat(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void FieldItemFx_InitBeeHiveDrop(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void FieldItemFx_InitDigUpTree(Unk_ov003_0221aed4_Fx *self, P2 p, s16 a);
void FieldItemFx_InitPlant(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q, u32 w);
void FieldItemFx_InitHoleShrink(Unk_ov003_0221aed4_Fx *self, P2 p);
void FieldItemFx_InitStrikeShake(Unk_ov003_0221aed4_Fx *self, P2 p);
void FieldItemFx_InitBalloonDrop(Unk_ov003_0221aed4_Fx *self, V3 q);
void FieldItemFx_InitPitfallClose(Unk_ov003_0221aed4_Fx *self, P2 p, s32 a);

void FieldItemFx_InitToss(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
void FieldItemFx_InitFillHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g);
void FieldItemFx_InitPitfallHole(Unk_ov003_0221aed4_Fx *self, P2 p);
void FieldItemFx_InitDigHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g, s32 flag);
void FieldItemFx_Finish(Unk_ov003_0221aed4_Fx *self);
void FieldItemFx_ReleasePending(Unk_ov003_0221aed4_Fx *self);
void Tree_DropItems(u16 *cell, s32 a, P2 p);
void Tree_DropSpecial(u16 *cell, s32 a, P2 p);
}
// ---- prototypes of this file's functions
extern "C" void Tree_DropSpecial(u16 *cell, s32 a, P2 p);
extern "C" void Tree_DropItems(u16 *cell, s32 a, P2 p);
extern "C" void TreeAnim_DropItems(Unk_ov003_0221b5e4_Obj *self, void *cell);
extern "C" s32 TreeAnim_Start(Unk_ov003_0221b5e4_Obj *self, s32 a, P2 p, s32 kind, s32 idx, s32 last);
extern "C" void TreeAnim_Reset(Unk_ov003_0221b5e4_Obj *self);
extern "C" void TreeAnim_ModelCallback(Unk_ov003_0221b5e4_Obj *self);
extern "C" void TreeAnimSet_LoadAnims(u32 (*arr)[4]);
extern "C" void TreeAnimSet_FreeAnims(u32 (*arr)[4]);
extern "C" s32 TreeAnimSet_GetAnimPath(void *self, u32 a, u32 b);
extern "C" void TreeAnimRequest_Resolve(Unk_ov003_0221b4b8_Obj *self);
extern "C" void FieldItemFx_ReleasePending(Unk_ov003_0221aed4_Fx *self);
extern "C" void FieldItemFx_Init(Unk_ov003_0221aed4_Fx *self, s32 a, P2 p, V3 pos, s32 kind, u16 w, s32 x, s16 y, s32 z);
extern "C" void FieldItemFx_Finish(Unk_ov003_0221aed4_Fx *self);
extern "C" void FieldItemFx_Clear(Unk_ov003_0221aed4_Fx *self);
extern "C" void FieldItemFx_InitToss(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q);
extern "C" void FieldItemFx_UpdateToss(Unk_ov003_0221aed4_Fx *self);
extern "C" void FieldItemFx_InitDigHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g, s32 flag);
extern "C" void FieldItemFx_UpdateHoleOpen(Unk_ov003_0221aed4_Fx *self);
extern "C" void FieldItemFx_InitPitfallHole(Unk_ov003_0221aed4_Fx *self, P2 p);
extern "C" void FieldItemFx_InitFillHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g);
}

namespace ns_0221b8bc {
struct Unk_ov003_0221b8bc_V3 {
    s32 x, y, z;
};
struct Unk_ov003_0221b8bc_V3D : Unk_ov003_0221b8bc_V3 {
    Unk_ov003_0221b8bc_V3D() {}
    ~Unk_ov003_0221b8bc_V3D() {}
};
struct Unk_ov003_0221b8bc_V2 {
    s32 x, z;
};
struct Unk_ov003_0221b8bc_Col {
    u16 a, b, c;
};
struct Unk_ov003_0221b8bc_Col2 {
    u16 a, b;
};
struct Unk_ov003_0221b8bc_Blk {
    s32 v[12];
};
struct Unk_ov003_0221b8bc_Bits {
    u32 a : 12;
    u32 b : 16;
    u32 c : 4;
};
struct Unk_ov003_0221b8bc_Sub {
    u8 pad_00[0xd];
    u8 lifeTimer;
};
struct Unk_ov003_0221b8bc {
    /* 0x00 */ u32 active;
    /* 0x04 */ s32 sessionSlot;
    /* 0x08 */ u8 animModel[0x5c];
    /* 0x64 */ void *resMdl;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov003_0221b8bc_Blk baseMatrix;
    /* 0x9c */ u8 unk_9c[0x10];
    /* 0xac */ Unk_ov003_0221b8bc_Bits animFrame;
    /* 0xb0 */ u8 unk_b0[8];
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 pad_b9[7];
    /* 0xc0 */ Unk_ov003_0221b8bc_V3 pos;
    /* 0xcc */ s32 unitX;
    /* 0xd0 */ s32 unitZ;
    /* 0xd4 */ s32 animKind;
    /* 0xd8 */ s32 alpha;
    /* 0xdc */ s32 leafSpawnCount;
    /* 0xe0 */ u8 seEmitter[0x64];
    /* 0x144 */ Unk_ov003_0221b8bc_Sub *leafRecord;
    /* 0x148 */ Unk_ov003_0221b8bc_Sub *seasonalRecord;
};
struct Unk_ov003_0221c030_Ent {
    /* 0x00 */ s32 active;
    /* 0x04 */ s32 sessionSlot;
    /* 0x08 */ s32 unit[2];
    /* 0x10 */ s32 animKind;
    /* 0x14 */ s32 isChop;
};
extern "C" {

extern void *gCommManager;
extern Unk_ov003_0221b8bc_V3 *data_ov003_0223291c[];
extern u16 sTreeFruitItems[];
extern Unk_ov003_0221b8bc_Blk data_021f47e0;
extern s32 sTreeLeafFx;
extern s32 sFieldObjectAnimHeap;
extern u8 *gFieldObjectManager;

s32 CommManager_isOnline(void *p);
void *PlayerData_GetCurrent(void);
s32 Unk_02097ff4_testFlag(void *p, s32 a);
void FieldPos_FromUnitCenter(Unk_ov003_0221b8bc_V3 *out, s32 x, s32 z);
void func_01ffd070(Unk_ov003_0221b8bc_V3 *out, Unk_ov003_0221b8bc_V3 *a, void *m);
void FieldItemFx_StartBeeHiveDrop(Unk_ov003_0221b8bc *o, s32 id, Unk_ov003_0221b8bc_V2 *a, Unk_ov003_0221b8bc_V3 *b);
s32 PendingUnit_FindBySlot(u8 a, u8 b);
void *PendingUnit_Get(void);
s32 Item_GetFruitTreeFruit(u16 *p);
void FieldPos_ToUnit(s32 *x, s32 *y, Unk_ov003_0221b8bc_V3 *v);
void FieldItemFx_StartTreeDrop(s32 a, s32 id, Unk_ov003_0221b8bc_V2 *p, Unk_ov003_0221b8bc_V3 *v, s32 f, s32 i);
void *Field_AidOrLocal(void *p);
u16 *PlayerActor_GetActor(void *p);
void *TownBlockMap_Get(void);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 e);
s32 PendingUnit_Find(Unk_ov003_0221b8bc_V2 *p, s32 a);
void TreeAnim_DropItems(Unk_ov003_0221b8bc *o, u16 *cell);
void PendingUnit_ApplyAtIfAid(Unk_ov003_0221b8bc_V2 *p, s32 id, s32 a);
void func_02003e70(void *p, u32 a, u32 b, u32 c);
void TreeAnim_Reset(Unk_ov003_0221b8bc *o);
void CachedModel_release(void *p);
void func_02003e50(void *p);
s32 WorldCurve_ToCurved(Unk_ov003_0221b8bc_V3 *out, void *v);
void func_020e8388(void *p, s32 x, s32 y, s32 z);
void func_020e8434(void *p, s32 a);
void AnimModel_drawAnimated(void *p, s32 a);
u16 SceneLights_GetRoomColor(void);
void NNS_G3dMdlSetMdlEmi(void *p, s32 a, s32 b);
void AnimModel_stepAnim(void *p);
s32 AnimFrameCtrl_isFinished(void *p);
void func_02105f00(void *p, s32 a);
void func_02105f48(void *p, s32 a);
s32 Item_GetStumpSize(u16 *p);
s32 Item_GetTreeStage(u16 *p);
void *TreeLeafFx_SpawnLeaves(void *d, s32 mode, s32 n, u16 *cell, Unk_ov003_0221b8bc_V2 *p, s32 c);
void *TreeLeafFx_SpawnSeasonal(void *d, s32 mode, s32 n, u16 *cell, Unk_ov003_0221b8bc_V2 *p, s32 c);
void func_02003e80(void *p, Unk_ov003_0221b8bc_V3 *v);
void CachedModel_allocJointRecord(void *p, s32 a);
void AnimModel_allocAnmObj(void *p, s32 a);
void Model_setCallback(void *p, void *fn, s32 a, s32 b, void *o, s32 c);
void func_02003ecc(void *p);
void TreeAnim_ModelCallback(void);
Unk_ov003_0221b8bc *TreeAnimSet_GetInstance(void *a, u16 *cell, s32 n, s32 f);
s32 Item_IsTreeGrown(u16 *p);
s32 Town_CanReleaseBees(void);
void PendingUnit_ApplyAt(Unk_ov003_0221b8bc_V2 *p, s32 a);
void TreeAnimRequest_Resolve(Unk_ov003_0221c030_Ent *e);
void TreeAnim_Start(Unk_ov003_0221b8bc *a, s32 id, Unk_ov003_0221b8bc_V2 *p, s32 c, s32 n, s32 d);

s32 Tree_GetDropSide(Unk_ov003_0221b8bc *o, Unk_ov003_0221b8bc_V3 *p);
}
// ---- prototypes of this file's functions
extern "C" { void TreeAnimSet_ProcessRequest(void *a, Unk_ov003_0221c030_Ent *o); }
extern "C" { void TreeAnimSet_Request(u8 *a, s32 id, s32 *pos, s32 c, s32 d); }
extern "C" { void Tree_KeepShaking(s32 id, s32 *pos); }
extern "C" { void TreeAnim_Init(Unk_ov003_0221b8bc *o); }
extern "C" { void TreeAnim_Update(Unk_ov003_0221b8bc *o); }
extern "C" { void TreeAnim_Draw(Unk_ov003_0221b8bc *o); }
extern "C" { s32 TreeAnim_Release(Unk_ov003_0221b8bc *o); }
extern "C" { void TreeAnim_Begin(Unk_ov003_0221b8bc *o, s32 flag); }
extern "C" { s32 Tree_GetDropSide(Unk_ov003_0221b8bc *o, Unk_ov003_0221b8bc_V3 *p); }
extern "C" { void Tree_DropFruit(u16 *cell, s32 id, s32 *pos); }
extern "C" { void Tree_DropBeeHive(Unk_ov003_0221b8bc *o, s32 *p); }
}

namespace ns_0221c220 {
struct Unk_ov003_0221c220_Elem {
    u8 pad[0x14c];
};
struct Unk_ov003_0221c53c_Slot {
    s32 active;
    s32 sessionSlot;
    s32 unitX;
    s32 unitZ;
    s32 animKind;
    s32 isChop;
    Unk_ov003_0221c53c_Slot() {
        unitX = 0;
        unitZ = 0;
    }
};
struct Unk_ov003_0221c220_Big {
    Unk_ov003_0221c220_Elem treeAnims[3][4];
    Unk_ov003_0221c220_Elem cedarAnims[4];
    Unk_ov003_0221c220_Elem unk_14c0[3];
    Unk_ov003_0221c220_Elem palmAnims[4];
    Unk_ov003_0221c53c_Slot requests[5];
    u8 animFiles[4];
};
struct Unk_ov003_0221c2d8_Elem {
    u8 pad_00[8];
    u8 animModel[0xc4];
    s32 unitX;
    s32 unitZ;
    u8 pad_d4[0xc];
    u8 seEmitter[0x40];
    s32 unk_120[6];
};
struct Unk_ov003_0221c62c_Vec3 {
    s32 x, y, z;
};
struct Unk_ov003_0221c62c_Pos {
    s32 x, z;
};
struct Unk_ov003_0221c62c_Rec {
    s32 treeType;
    s32 isLeaves;
    s32 motionType;
    u8 treeStage;
    s8 lifeTimer;
    s8 frame;
    u8 animKind;
    s32 tintVariant;
    s32 posX;
    s32 posY;
    s32 posZ;
};
struct Unk_ov003_0221c608_Set {
    Unk_ov003_0221c62c_Rec records[2];
    s32 spawnIndex;
};
struct Unk_ov003_0221ca7c_P {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
    s16 unk_08;
};
struct Unk_ov003_0221c91c_A {
    s32 unk_00;
    s32 posX;
    s32 posY;
    s32 posZ;
};
struct Unk_ov003_0221c91c_B {
    Unk_ov003_0221c91c_A *unk_00;
};
struct Unk_ov003_0221c91c_Tgt {
    u8 pad_00[0x18];
    Unk_ov003_0221c91c_B *unk_18;
    u8 pad_1c[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x18];
    s32 unk_44;
    u8 pad_48[8];
    s32 unk_50;
    u8 pad_54[4];
    u16 unk_58;
    u8 pad_5a[0xe];
    u8 unk_68;
    u8 pad_69[0x17];
    u8 unk_80;
};
struct Unk_ov003_0221c858_Obj {
    u8 pad_00[0xa];
    u8 unk_0a;
    u8 pad_0b;
    Unk_ov003_0221c91c_Tgt *emitter;
};
struct Unk_ov003_0221c91c_Pad {
    s32 v[2];
    Unk_ov003_0221c91c_Pad() {}
    ~Unk_ov003_0221c91c_Pad() {}
};
struct Unk_ov003_0221c62c_Quad {
    s32 v[4];
};
typedef Unk_ov003_0221c220_Big Big;
typedef Unk_ov003_0221c62c_Rec Rec;
typedef Unk_ov003_0221c62c_Vec3 Vec3;
typedef Unk_ov003_0221c62c_Pos Pos;
typedef Unk_ov003_0221c608_Set Set;
typedef Unk_ov003_0221c91c_Tgt Tgt;
typedef Unk_ov003_0221ca7c_P PRec;
typedef Unk_ov003_0221c2d8_Elem Elem2;
extern "C" {

void TreeAnimSet_FreeAnims(void *p);
void TreeAnimSet_LoadAnims(void *p);
void TreeAnim_Release(void *p);
void TreeAnim_Draw(void *p);
void TreeAnim_Update(void *p);
void TreeAnim_Init(void *p);
void TreeAnimSet_ProcessRequest(void *p, void *q);
void func_020f43fc(void *p);
void func_020f440c(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
s32 func_02133150(s32 a, s32 b);
u32 TownState_GetSeasonPeriod();
s32 FieldPos_FromUnitCenter(Vec3 *out, s32 x, s32 z);
s32 EffectSpl_CreateTracked(s32, void *, s32, void *);
s32 EffectCb_UpdateTint(void *);
s32 EffectCb_InitAtPos(void *);
s32 Scene_InTown();
s32 BlockMap_SetItemAtUnit(void *grid, u16 *v, s32 x, s32 y, s32 z);
s32 BlockMap_SetBuriedAtUnit(void *grid, s32 x, s32 y);
s32 BlockMap_ClearBuriedAtUnit(void *grid, s32 x, s32 y);

extern Set sTreeLeafFx;
extern s32 data_ov003_0222f564[][4];
extern s32 data_ov003_0222f594[][4];
extern s16 data_02135f44[];
extern u8 data_ov003_0222f4c8[];
extern u8 data_ov003_0222f534[];
extern s32 data_ov003_0222f298[];
extern Unk_ov003_0221c62c_Quad data_ov003_02232b48;
extern Unk_ov003_0221c62c_Quad data_ov003_02232b78;
extern PRec ****data_ov003_02232928[];
extern s32 data_ov003_022335c0[];
extern void *gSceneBlockMap;

u8 *TreeAnimSet_GetInstance(Big *self, u16 *p, s32 a, s32 b);
void TreeAnimSet_Release(Big *self);
void TreeAnimSet_Draw(Big *self);
void TreeAnimSet_Update(Big *self);
void TreeAnimSet_Init(Big *self);
Elem2 *TreeAnim_Destruct(Elem2 *self);
Big *_ZN11TreeAnimSetD1Ev(Big *self);
Big *TreeAnimSet_Construct(Big *self);
Elem2 *TreeAnim_Construct(Elem2 *self);
void TreeLeafFx_Init(Set *self);
Rec *TreeLeafFx_SpawnLeaves(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5);
Rec *TreeLeafFx_SpawnSeasonal(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5);
void TreeLeafFx_GetTreeType(Set *self, Rec *r, s32 *o1, s32 *o2, Vec3 *out, u16 *tile, Pos *pos);
Rec *TreeLeafFx_FindFree(Set *self);
s32 TreeLeafFx_OnEffectUpdate(Unk_ov003_0221c858_Obj *self);
s32 TreeLeafFx_OnEffectStep(Unk_ov003_0221c858_Obj *self);
void TreeLeafFx_OnEffectInit(Unk_ov003_0221c858_Obj *self);
void TreeLeafFx_UpdatePos(Rec *r, Tgt *t);
void TreeLeafFx_ApplyParams(Rec *r, Tgt *t);
PRec *TreeLeafFx_GetParams(Rec *r);
void TreeLeafFx_SetRecord(Rec *r, s32 a1, s32 a2, s32 a3, u32 c, Vec3 *pos, s32 flag);
void TreeLeafFx_Free(Rec *r);
void Field_SetUnitItem(s32 x, s32 y, u32 tile, s32 flag);
}
// ---- prototypes of this file's functions
extern "C" { void Field_SetUnitItem(s32 x, s32 y, u32 tile, s32 flag); }
extern "C" { void TreeLeafFx_Free(Rec *r); }
extern "C" { void TreeLeafFx_SetRecord(Rec *r, s32 a1, s32 a2, s32 a3, u32 c, Vec3 *pos, s32 flag); }
extern "C" { PRec *TreeLeafFx_GetParams(Rec *r); }
extern "C" { void TreeLeafFx_ApplyParams(Rec *r, Tgt *t); }
extern "C" { void TreeLeafFx_UpdatePos(Rec *r, Tgt *t); }
extern "C" { void TreeLeafFx_OnEffectInit(Unk_ov003_0221c858_Obj *self); }
extern "C" { s32 TreeLeafFx_OnEffectStep(Unk_ov003_0221c858_Obj *self); }
extern "C" { s32 TreeLeafFx_OnEffectUpdate(Unk_ov003_0221c858_Obj *self); }
extern "C" { Rec *TreeLeafFx_FindFree(Set *self); }
extern "C" { void TreeLeafFx_GetTreeType(Set *self, Rec *r, s32 *o1, s32 *o2, Vec3 *out, u16 *tile, Pos *pos); }
extern "C" { Rec *TreeLeafFx_SpawnSeasonal(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5); }
extern "C" { Rec *TreeLeafFx_SpawnLeaves(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5); }
extern "C" { void TreeLeafFx_Init(Set *self); }
extern "C" { Elem2 *TreeAnim_Construct(Elem2 *self); }
extern "C" { Big *TreeAnimSet_Construct(Big *self); }
extern "C" { Big *_ZN11TreeAnimSetD1Ev(Big *self); }
extern "C" { Elem2 *TreeAnim_Destruct(Elem2 *self); }
extern "C" { void TreeAnimSet_Init(Big *self); }
extern "C" { void TreeAnimSet_Update(Big *self); }
extern "C" { void TreeAnimSet_Draw(Big *self); }
extern "C" { void TreeAnimSet_Release(Big *self); }
extern "C" { u8 *TreeAnimSet_GetInstance(Big *self, u16 *p, s32 a, s32 b); }
}

namespace ns_0221cb54 {
struct Unk_ov003_0221cb54_Col;
struct Unk_ov003_0221cb54_P2 {
    s32 x, z;
    Unk_ov003_0221cb54_P2(Unk_ov003_0221cb54_Col *c);
    Unk_ov003_0221cb54_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_0221cb54_P2(const Unk_ov003_0221cb54_P2 &o) { x = o.x; z = o.z; }
};
struct Unk_ov003_0221cb54_V3 {
    s32 x, y, z;
    Unk_ov003_0221cb54_V3() {}
    Unk_ov003_0221cb54_V3(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_ov003_0221d118_V3 {
    s32 x, y, z;
    Unk_ov003_0221d118_V3(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0221d118_V3() {}
};
typedef Unk_ov003_0221d118_V3 V3d;
struct Unk_ov003_0221d118_Raw3 {
    s32 x, y, z;
};
struct Unk_ov003_0221d118_K : Unk_ov003_0221d118_Raw3 {
    Unk_ov003_0221d118_K() {}
    Unk_ov003_0221d118_K(const Unk_ov003_0221cb54_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_0221d118_K() {}
};
typedef Unk_ov003_0221d118_K V3k;
struct Unk_ov003_0221cb54_Raw2 {
    s32 x, z;
};
struct Unk_ov003_0221cb54_Col {
    volatile u16 a, b, c;
};
struct Unk_ov003_0221d37c_Blk {
    s64 v[6];
};
struct Unk_ov003_0221d37c_O {
    u8 pad_00[0x50];
    void *unk_50[4];
};
typedef Unk_ov003_0221d37c_Blk Blk;
typedef Unk_ov003_0221d37c_O O;
typedef Unk_ov003_0221cb54_P2 P2;
typedef Unk_ov003_0221cb54_V3 V3;
typedef Unk_ov003_0221cb54_Raw2 R2;
typedef Unk_ov003_0221cb54_Col Col;
inline Unk_ov003_0221cb54_P2::Unk_ov003_0221cb54_P2(Unk_ov003_0221cb54_Col *c) { x = (s32)c->a >> 8; z = c->b & 0xff; }
struct Unk_ov003_0221cb54_Rec {
    u8 pad_00[8];
    u16 unk_08;
    u16 unk_0a;
};
extern "C" {

extern u8 *gCommManager;
extern u8 *gFieldObjectManager;
extern u8 sFieldItemFxTable[];
extern u8 *sFieldObjectModelHeap;
extern u8 *sFieldObjectAnimHeap;
extern u8 sUnitSearchOffsets81[];
extern u8 *gSceneBlockMap;
extern u8 *gCamera;

s32 PendingUnit_FindBySlot(u8 a, u8 b);
Unk_ov003_0221cb54_Rec *PendingUnit_Get();
void FieldItemFx_StartStrikeShake(u32 a, u32 b, P2 p);
void FieldItemFx_StartStrikeEject(u32 a, u32 b, P2 p, V3 v);
void FieldPos_FromUnitCenter(V3 *out, s32 x, s32 z);
void *TownBlockMap_Get();
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 PendingUnit_FindForAid(void *o, P2 p, s32 a);
s32 Town_IsSaplingBlocker(u16 *c);
void TreeAnimSet_Request(void *a, void *o, P2 p, s32 mode, s32 flag);
s32 Item_IsTreeStage0(u16 *c);
s32 Camera_IsBlockingFocusView(V3 *v, s32 a, s32 b);
void *Field_AidOrZero(void *o);
s32 Item_IsTreeGrown(u16 *c);
void PendingUnit_Apply();
void PendingUnit_ApplyAtIfAid(P2 p, void *a, s32 b);
void FieldObj_DrawItemModel(void *g, void *o, V3 *a, V3 *b, s32 c, s16 d, s16 e);
void FieldObj_DrawItemIcon(void *g, void *o, V3 *a, s32 k, V3 *b, s32 c, s16 d, s16 e);
void FieldObj_DrawIconModel(void *g, void *o, V3 *a, s32 k, V3 *b, s32 c, s16 d, s16 e);
s32 Town_GetRafflesiaPos(V3 *o, s32 z);
void func_020e9960(V3 *out, V3 *a, s32 b);
void FieldPos_ToUnit(s32 *x, s32 *z, V3 *v);
s32 Flower_GetSpecies(u16 *c);
void ModelSet_Release(void *p);
void TreeAnimSet_Release(void *p);
void FieldItemFxTable_Release(void *p);
void FieldItemFxTable_Draw(void *p);
void TreeAnimSet_Draw(void *p);
void PendingUnits_Flush();
void func_020e8c94(void *p);
s32 func_02133150(s32 a, s32 b);
void FieldObj_DrawUnits(O *o, void *g);
extern V3 gCameraLookAt;
extern Blk data_021f47e0;
void FieldPos_SnapToUnitCenter(V3 *out, V3 *in);
s32 WorldCurve_ToCurved(V3 *out, V3 *in);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
u16 *BlockMap_GetItemPtrAtPos(void *g, V3 *pos, s32 layer);
s32 func_01ffcbd8(void *g, s32 x, s32 z);
s32 Item_GetInfoUnk07(u16 *c);
void FieldObj_DrawModel(O *o, void *p, Blk m);
void FieldObj_DrawDesign(O *o, u16 *t, Blk m);
void FieldObj_DrawTurnip(O *o, u16 *t, Blk m);
void FieldObj_DrawCrack(O *o, u16 *t, Blk m);
void FieldObj_DrawHole(O *o, u16 *t, Blk m);
void FieldObj_DrawRockAt(O *o, u16 *t, V3 *v, Blk m);
void FieldObj_DrawGrass(O *o, u16 *t, Blk m);
void FieldObj_DrawSpecialFlower(O *o, u16 *t, Blk m);
void FieldObj_DrawFlowerBySpecies(O *o, u16 *t, Blk m);
void FieldObj_DrawFlower(O *o, u16 *t, Blk m);
void FieldObj_DrawStump(O *o, u16 *t, Blk m);
void FieldObj_DrawSapling(O *o, u16 *t, s32 a, s32 b, Blk m);
void FieldObj_DrawTreeAt(O *o, u16 *t, s32 a, s32 b, V3 *v, Blk m);
s32 Tree_BeginReaction(void *o, P2 p);
s32 Tree_IsPendingStump(void *o, P2 p);
}
static inline BOOL Chk_0221cd80(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (v < 0x5d || v > 0x61) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) f3 = FALSE;
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) f4 = FALSE;
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) f9 = FALSE;
    }
    return f9;
}
static inline BOOL Chk_0221d118(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}
static inline BOOL Chk_0221d37c(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1) {
        if (v < 0x5d || v > 0x61) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) f3 = FALSE;
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) f4 = FALSE;
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x69) f6 = FALSE;
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x6d) f8 = FALSE;
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) f9 = FALSE;
    }
    return f9;
}
// ---- prototypes of this file's functions
extern "C" { void FieldObj_DrawUnits(O *o, void *g); }
extern "C" { s32 _ZN18FieldObjectManager6onDrawEv(u8 *self); }
extern "C" { s32 Field_FindFlowerNear(V3 *out, V3 pos, s32 mask); }
extern "C" { s32 Field_IsRafflesiaNear(V3 *out, s32 b); }
extern "C" { void Field_DrawIconModel(void *o, V3 a, V3 b, s32 c, s16 d, s16 e); }
extern "C" { void Field_DrawItemIcon(void *o, V3 a, V3 b, s32 c, s16 d, s16 e); }
extern "C" { void Field_DrawItemModel(void *o, V3 a, V3 b, s32 c, s16 d, s16 e); }
extern "C" { s32 Tree_IsPendingStump(void *o, P2 pos); }
extern "C" { s32 Tree_BeginReaction(void *o, P2 pos); }
extern "C" { void Tree_RequestShake(void *o, P2 pos, s32 mode); }
extern "C" { void Tree_RequestChop(void *o, P2 pos, s32 mode); }
extern "C" { void FieldItemFx_StartStrikeResult(P2 pos); }
}

namespace ns_0221db54 {
struct Unk_ov003_0221db54_V3 {
    s32 x, y, z;
    Unk_ov003_0221db54_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0221db54_V3(const Unk_ov003_0221db54_V3 &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_ov003_0221db54_Blk {
    s64 v[6];
};
struct Unk_ov003_0221e398_V3 {
    s32 x, y, z;
};
typedef Unk_ov003_0221db54_V3 V3;
typedef Unk_ov003_0221db54_Blk Blk;
class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 pad_04[0x58 / 4];
    u32 unk_5c;
    u32 pad_60;
    u8 unk_64[0x30];
    u32 pad_94[2];
};
class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};
class TreeAnimSet {
public:
    TreeAnimSet();
    ~TreeAnimSet();
    u32 pad[4];
};
class FieldObjectManager : public GameProc {
public:
    FieldObjectManager();
    virtual ~FieldObjectManager();

    /* 0x050 */ u8 pad_050[0x174 - 0x50];
    /* 0x174 */ CachedModel treeModels[0x12];
    /* 0xc6c */ CachedModel cedarModels[6];
    /* 0x1014 */ CachedModel litCedarModels[3];
    /* 0x11e8 */ CachedModel palmModels[6];
    /* 0x1590 */ CachedModel flowerModels[4][10];
    /* 0x2df0 */ CachedModel specialFlowerModels[4];
    /* 0x3060 */ CachedModel *dandelionModel;
    /* 0x3064 */ CachedModel *dandelionPuffModel;
    /* 0x3068 */ CachedModel designModels[0x20];
    /* 0x43e8 */ CachedModel grassModels[5];
    /* 0x46f4 */ CachedModel *stoneModels[5];
    /* 0x4708 */ CachedModel holeModels[2];
    /* 0x4840 */ CachedModel crackModels[2];
    /* 0x4978 */ CachedModel *stumpModels[12];
    /* 0x49a8 */ CachedModel turnipModels[2];
    /* 0x4ae0 */ Unk_020dbd44 iconModelSet;
    /* 0x4af0 */ Unk_020dbd44 dandelionModelSet;
    /* 0x4b00 */ Unk_020dbd44 stoneModelSet;
    /* 0x4b10 */ Unk_020dbd44 stumpModelSet;
    /* 0x4b20 */ TreeAnimSet treeAnimSet;
    /* 0x4b30 */ u8 pad_4b30[0x6a6c - 0x4b30];
    /* 0x6a6c */ s32 frameCounter;
};
typedef FieldObjectManager O;
typedef CachedModel M;
extern "C" {

extern Blk data_021f47e0;
extern V3 data_ov003_0222f510[];
extern V3 data_ov003_0222f4f8[];
extern u16 sTreeFruitIcons[];

void Model_drawShapesDirect(M *p, s32 a);
u16 SceneLights_GetRoomColor();
void func_02105fd8(u32 a, u32 b);
s32 ObjShadow_DrawRock(s32 a);
void ObjShadow_DrawTree(V3 *v, u8 n);
s32 Flower_GetSpecies(u16 *p);
s32 Flower_GetColor(u16 *p);
s32 Item_GetTreeStage(u16 *p);
s32 Item_GetFruitTreeFruit(u16 *p);
s32 Item_IsTreeGrown(u16 *p);
s32 LitCedarList_Find(s32 a, s32 b);
s32 WorldCurve_ToCurved(Unk_ov003_0221e398_V3 *out, Unk_ov003_0221e398_V3 *p);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
s32 func_02133150(s32 a, s32 b);

s32 FieldObj_DrawItemIcon(O *o, u32 id, V3 *p, s32 k, V3 *q, s32 a, s32 b, s32 c);
void FieldObj_DrawTreeFruit(O *o, u16 *p, Unk_ov003_0221e398_V3 *v);
void FieldObj_DrawCedarLights(O *o, Unk_ov003_0221e398_V3 *p, s32 a, s32 b);
M *FieldObj_DrawTree(O *o, u16 *p, s32 a, s32 b, V3 v, Blk m);
}
extern "C" void FieldObj_DrawModel(O *o, M *p, Blk m);
extern "C" M *FieldObj_DrawDesign(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawTurnip(O *o, u16 *t, Blk m);
extern "C" void FieldObj_DrawCrack(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawHole(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawRock(O *o, u16 *t, Blk m);
// ---- prototypes of this file's functions
extern "C" void FieldObj_DrawTreeFruit(O *o, u16 *t, Unk_ov003_0221e398_V3 *v);
extern "C" void FieldObj_DrawCedarLights(O *o, Unk_ov003_0221e398_V3 *t, s32 a, s32 b);
extern "C" M *FieldObj_DrawTree(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m);
extern "C" void FieldObj_DrawTreeAt(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m);
extern "C" M *FieldObj_DrawSapling(O *o, u16 *t, s32 a, s32 b, Blk m);
extern "C" M *FieldObj_DrawStump(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawFlower(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawFlowerBySpecies(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawSpecialFlower(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawGrass(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawRock(O *o, u16 *t, Blk m);
extern "C" s32 FieldObj_DrawRockAt(O *o, u16 *t, s32 r, Blk m);
extern "C" M *FieldObj_DrawHole(O *o, u16 *t, Blk m);
extern "C" void FieldObj_DrawCrack(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawTurnip(O *o, u16 *t, Blk m);
extern "C" M *FieldObj_DrawDesign(O *o, u16 *t, Blk m);
extern "C" void FieldObj_DrawModel(O *o, M *p, Blk m);
}

namespace ns_0221e4d4 {
struct Unk_ov003_0221e4d4_V3 {
    s32 x, y, z;
};
struct Unk_ov003_0221e4d4_Blk {
    s64 v[6];
};
typedef Unk_ov003_0221e4d4_V3 V3;
typedef Unk_ov003_0221e4d4_Blk Blk;
struct Unk_ov003_0221e4d4_Elem {
    u8 pad[0x9c];
};
typedef Unk_ov003_0221e4d4_Elem Elem;
struct Unk_ov003_0221e4d4_Model {
    u8 pad_00[0x5c];
    void *unk_5c;
};
struct Unk_ov003_0221e4d4_Obj {
    /* 0x0000 */ u8 pad_0000[0x50];
    /* 0x0050 */ Unk_ov003_0221e4d4_Model *unk_50[1];
    /* 0x0054 */ u8 pad_0054[0x3068 - 0x54];
    /* 0x3068 */ Elem unk_3068[4][8];
    /* 0x43e8 */ Elem unk_43e8[5];
    /* 0x46f4 */ u8 pad_46f4[0x4708 - 0x46f4];
    /* 0x4708 */ Elem unk_4708;
    /* 0x47a4 */ Elem unk_47a4;
    /* 0x4840 */ Elem unk_4840;
    /* 0x48dc */ Elem unk_48dc;
    /* 0x4978 */ u8 pad_4978[0x49a8 - 0x4978];
    /* 0x49a8 */ Elem unk_49a8[2];
    /* 0x4ae0 */ u8 pad_4ae0[0x4b20 - 0x4ae0];
    /* 0x4b20 */ u8 unk_4b20[0x6a6c - 0x4b20];
    /* 0x6a6c */ s32 unk_6a6c;
};
typedef Unk_ov003_0221e4d4_Obj Obj;
typedef BOOL (*Fn)();
extern "C" {

extern Obj *gFieldObjectManager;
extern void *sFieldObjectModelHeap;
extern void *sFieldObjectAnimHeap;
extern u8 sTreeLeafFx[];
extern u8 sFieldItemFxTable[];
extern Blk data_021f47e0;
extern void *gCurrentHeap;
extern void *data_021f482c_v;
extern Fn sFieldObjectLoaders[];
extern void *data_ov003_02232788[];
extern void *data_ov003_02232648;
extern u8 sFieldObjShapeTable[];
extern u8 data_ov003_02232630[];
extern void *data_ov003_02232634;
extern u8 data_ov003_02232654[];
extern u8 data_ov003_02232650[];
extern void *data_ov003_0222f6fc[];
extern u32 data_ov003_0222f6a0[];
extern void *data_ov003_02232bd8[];
extern u8 sFieldObjectModelHeapBuf[];

s32 WorldCurve_ToCurved(V3 *out, V3 *in);
void func_020e8388(Blk *m, s32 x, s32 y, s32 z);
void func_020e8434(Blk *m, s32 a);
void func_020e8464(Blk *m, s32 x, s32 y, s32 z);
void func_020e84f8(Blk *m, s32 x, s32 y, s32 z);
void func_02105f00(void *p, s32 a);
void Heap_Free(void *heap, void *p);
void *ExpHeap_CreateInPlace(void *p, u32 n);
void *ExpHeap_Create(u32 n, void *heap);
s32 Item_GetInfoUnk07(volatile u16 *p);
u32 TownState_GetSeasonPeriod();
void Field_OnEnter();
s32 CachedModel_loadWithSharedTex(void *p, void *t, u8 a, u8 b);
s32 CachedModel_load(void *p, void *a, void *b);
s32 CachedModel_loadWithTex(void *p, void *a, void *b, u32 c, u32 d, void *e, u32 f);

s32 FieldObj_DrawModel(Obj *o, Unk_ov003_0221e4d4_Model *m, Blk b);
s32 FieldObj_DrawDesign(Obj *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawSpecialFlower(Obj *o, volatile u16 *t, Blk m);
s32 FieldObj_DrawFlower(Obj *o, volatile u16 *t, Blk m);
void FieldItemFxTable_Update(void *t);
void FieldItemFxTable_Init(void *t);
void TreeAnimSet_Update(void *t);
void TreeAnimSet_Init(void *t);
void TreeLeafFx_Init(void *t);
BOOL FieldObj_LoadIconModels(Obj *o);
s32 FieldObj_LoadPaletteFiles(Obj *o, void *a, void *b, void *c, s32 d);

s32 FieldObj_DrawIconModel(Obj *o, u32 idx, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f);
BOOL FieldObj_RunLoaders(Obj *o);
BOOL FieldObj_LoadDesignModels(Obj *o);
BOOL FieldObj_LoadTurnipModels(Obj *o);
BOOL FieldObj_LoadCrackModels(Obj *o, u32 idx);
s32 FieldObj_LoadCrackPalette(Obj *o, void *a, void *b);
BOOL FieldObj_LoadHoleModels(Obj *o, u32 idx);
s32 FieldObj_LoadHolePalette(Obj *o, void *a, void *b);
void *FieldObj_GetGroundTexSet();
BOOL FieldObj_LoadGrassModels(Obj *o, u32 idx);
s32 FieldObj_LoadGrassPalette(Obj *o, void *a, void *b);
s32 FieldObj_LoadFlowerTextures(Obj *o, void *a, void *b);
s32 FieldObj_LoadFlowerPalettes(Obj *o, void *a, void *b);
s32 FieldObj_LoadFlowerModels(Obj *o, void *a, void *b);
s32 FieldObj_LoadSpecialFlowerTextures(Obj *o, void *a, void *b);
s32 FieldObj_LoadSpecialFlowerPalettes(Obj *o, void *a, void *b);
s32 FieldObj_LoadSpecialFlowerModels(Obj *o, void *a, void *b);
s32 FieldObj_LoadDandelionModels(Obj *o);
void FieldObj_FreeFlowerFiles(Obj *o, s32 *b, s32 *d, s32 *f, s32 *h);

static inline BOOL Unk_ov003_0221e4d4_Chk1(volatile u16 *p) {
    BOOL r = TRUE;
    BOOL f = FALSE;
    u32 a = *p;
    u32 v = *p;
    if (v >= 0xd4 && a <= 0xda) {
        f = TRUE;
    }
    if (!f) {
        if (a < 0xdb || a > 0xe1) {
            r = FALSE;
        }
    }
    return r;
}

static inline s32 Unk_ov003_0221e4d4_Kind(volatile u16 *p) {
    u32 v = *p;
    return (v & 0xf000) >> 12;
}

static inline BOOL Unk_ov003_0221e4d4_Chk4(u32 a) {
    BOOL f = FALSE;
    u16 x = a + 0xffe6;
    if (x <= 4) {
        if ((1 << x) & 0x1b) {
            f = TRUE;
        }
    }
    return f;
}

static inline BOOL Unk_ov003_0221e4d4_Chk9(u32 a) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = FALSE;
    if (a <= 5) {
        f2 = TRUE;
    }
    if (!f2) {
        if (a < 6 || a > 0xb) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (a < 0xc || a > 0x11) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if ((a < 0x12 || a > 0x19) && a != 0x1c) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if ((a < 0x8a || a > 0x8f) && (a < 0x90 || a > 0x95) && (a < 0x96 || a > 0x9b) && (a < 0x9c || a > 0xa3) && a != 0xa5) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (a != 0x1a) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (a != 0xa4) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (a != 0x1d) {
            f9 = FALSE;
        }
    }
    return f9;
}
}
// ---- prototypes of this file's functions
extern "C" { void FieldObj_FreeFlowerFiles(Obj *o, s32 *b, s32 *d, s32 *f, s32 *h); }
extern "C" { BOOL FieldObj_LoadFlowers(); }
extern "C" { s32 FieldObj_LoadGrassPalette(Obj *o, void *a, void *b); }
extern "C" { BOOL FieldObj_LoadGrassModels(Obj *o, u32 idx); }
extern "C" { BOOL FieldObj_LoadGrass(); }
extern "C" { void *FieldObj_GetGroundTexSet(); }
extern "C" { s32 FieldObj_LoadHolePalette(Obj *o, void *a, void *b); }
extern "C" { BOOL FieldObj_LoadHoleModels(Obj *o, u32 idx); }
extern "C" { BOOL FieldObj_LoadHoles(); }
extern "C" { s32 FieldObj_LoadCrackPalette(Obj *o, void *a, void *b); }
extern "C" { BOOL FieldObj_LoadCrackModels(Obj *o, u32 idx); }
extern "C" { BOOL FieldObj_LoadCracks(); }
extern "C" { BOOL FieldObj_LoadTurnipModels(Obj *o); }
extern "C" { BOOL FieldObj_LoadTurnips(Obj *o); }
extern "C" { BOOL FieldObj_LoadDesignModels(Obj *o); }
extern "C" { BOOL FieldObj_LoadDesigns(); }
extern "C" { BOOL FieldObj_RunLoaders(Obj *o); }
extern "C" { BOOL _ZN18FieldObjectManager8vfunc_00Ev(Obj *o); }
extern "C" { BOOL _ZN18FieldObjectManager9onExecuteEv(Obj *o); }
extern "C" { s32 FieldObj_DrawIconModel(Obj *o, u32 idx, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f); }
extern "C" { s32 FieldObj_DrawItemIcon(Obj *o, u32 t, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f); }
extern "C" { void FieldObj_DrawItemModel(Obj *o, u32 t, V3 *pos, V3 *scale, s32 rx, s32 ry, s32 rz); }
}

namespace ns_0221ede8 {
struct Unk_ov003_0221efb4_Elem {
    u8 pad[0x9c];
};
typedef Unk_ov003_0221efb4_Elem Elem;
struct Unk_ov003_0221f674_Seg {
    u8 pad_00[8];
    Elem e;
    u8 pad_a4[0x14c - 0xa4];
};
typedef Unk_ov003_0221f674_Seg Seg;
struct Unk_ov003_0221efb4_Obj {
    /* 0x0000 */ u8 pad_0000[0x174];
    /* 0x0174 */ Elem unk_174[3][6];
    /* 0x0c6c */ Elem unk_c6c[6];
    /* 0x1014 */ Elem unk_1014[3];
    /* 0x11e8 */ Elem unk_11e8[6];
    /* 0x1590 */ Elem unk_1590[4][10];
    /* 0x2df0 */ Elem unk_2df0[2][2];
    /* 0x3060 */ void *unk_3060[2];
    /* 0x3068 */ u8 pad_3068[0x4af0 - 0x3068];
    /* 0x4af0 */ u8 unk_4af0[0x10];
    /* 0x4b00 */ u8 pad_4b00[0x4b20 - 0x4b00];
    /* 0x4b20 */ Seg unk_4b20[3][4];
    /* 0x5ab0 */ Seg unk_5ab0[4];
    /* 0x5fe0 */ u8 pad_5fe0[0x63c4 - 0x5fe0];
    /* 0x63c4 */ Seg unk_63c4[4];
};
typedef Unk_ov003_0221efb4_Obj Obj;
extern "C" {

extern Obj *gFieldObjectManager;
extern void *sFieldObjectModelHeap;
extern void *gCurrentHeap;
extern void *data_ov003_02232720[];
extern void *data_ov003_022326e8[];
extern void *data_ov003_02232a28[];
extern u32 data_ov003_0222f4a8[];
extern u8 data_ov003_02232a48[];
extern u8 data_ov003_02232778[];
extern u8 data_ov003_02232a18[];
extern u8 data_ov003_02232bc8[];
extern u8 data_ov003_0222f758[];
extern void *data_ov003_0223264c;

s32 ModelSet_Load(void *t, void *file, void *heap);
void *ModelSet_Find(void *t, void *name);
s32 CachedModel_loadWithTex(void *p, void *a, void *b, u32 c, u32 d, void *e, u32 f);
u32 TownState_GetSeasonPeriod();
void Heap_Free(void *heap, void *p);

s32 FieldObj_LoadPaletteFiles(Obj *o, void *a, void *b, void *c, s32 d);
s32 FieldObj_LoadTextureFiles(Obj *o, void *a, void *b, void *c, s32 d);
s32 FieldObj_LoadTreeTextures(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadTreePalettes(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
s32 FieldObj_LoadCedarTextures(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadCedarPalettes(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
s32 FieldObj_LoadLitCedarTexture(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadLitCedarPalette(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadPalmTextures(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadTreeSaplingModels(Obj *o, u32 *a, u32 *b, void *c);
s32 FieldObj_LoadCedarSaplingModel(Obj *o, u32 *a, u32 *b, void *c);
s32 FieldObj_LoadPalmSaplingModel(Obj *o, u32 *a, u32 *b, void *c);
void *FieldObj_GetPalmModelPath(Obj *o, u32 i);
void *FieldObj_GetCedarModelPath(Obj *o, u32 i);
void *FieldObj_GetPalmAnimModelPath(Obj *o, u32 i);
void *FieldObj_GetCedarAnimModelPath(Obj *o, u32 i);
void *FieldObj_GetTreeAnimModelPath(Obj *o, u32 i, u32 j);
void *FieldObj_GetTreeModelPath(Obj *o, u32 i, u32 j);
s32 FieldObj_GetSeasonSet(Obj *o, u32 i);

BOOL FieldObj_LoadDandelionModels(Obj *o);
BOOL FieldObj_LoadSpecialFlowerModels(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadSpecialFlowerPalettes(Obj *o, void *a, void *b);
s32 FieldObj_LoadSpecialFlowerTextures(Obj *o, void *a, void *b);
BOOL FieldObj_LoadFlowerModels(Obj *o, u32 *a, u32 *b);
s32 FieldObj_LoadFlowerPalettes(Obj *o, void *a, void *b);
s32 FieldObj_LoadFlowerTextures(Obj *o, void *a, void *b);
BOOL FieldObj_LoadTrees();
void FieldObj_FreePalmFileBufs(Obj *o, void **a, void **b, void **c);
void FieldObj_FreeLitCedarFileBufs(Obj *o, void **a, void **b);
void FieldObj_FreeCedarFileBufs(Obj *o, void **a, void **b, void **c);
void FieldObj_FreeTreeFileBufs(Obj *o, void **a, void **b, void **c);
void FieldObj_ClearLitCedarFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
void FieldObj_ClearCedarPalmFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
void FieldObj_ClearTreeFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
BOOL FieldObj_LoadPalmDeadModel(Obj *o, u32 *a, u32 *b, void *c);
BOOL FieldObj_LoadCedarDeadModel(Obj *o, u32 *a, u32 *b, void *c);
BOOL FieldObj_LoadTreeDeadModels(Obj *o, u32 *a, u32 *b, void *c);
BOOL FieldObj_LoadPalmStageModels(Obj *o, u32 *a, u32 *b, void *c);
BOOL FieldObj_LoadLitCedarModels(Obj *o, u32 *a, u32 *b);
BOOL FieldObj_LoadCedarStageModels(Obj *o, u32 *a, u32 *b, void *c);
BOOL FieldObj_LoadTreeStageModels(Obj *o, u32 *a, u32 *b, void *c);
}
// ---- prototypes of this file's functions
extern "C" BOOL FieldObj_LoadTreeStageModels(Obj *o, u32 *a, u32 *b, void *c);
extern "C" BOOL FieldObj_LoadCedarStageModels(Obj *o, u32 *a, u32 *b, void *c);
extern "C" BOOL FieldObj_LoadLitCedarModels(Obj *o, u32 *a, u32 *b);
extern "C" BOOL FieldObj_LoadPalmStageModels(Obj *o, u32 *a, u32 *b, void *c);
extern "C" BOOL FieldObj_LoadTreeDeadModels(Obj *o, u32 *a, u32 *b, void *c);
extern "C" BOOL FieldObj_LoadCedarDeadModel(Obj *o, u32 *a, u32 *b, void *c);
extern "C" BOOL FieldObj_LoadPalmDeadModel(Obj *o, u32 *a, u32 *b, void *c);
extern "C" void FieldObj_ClearTreeFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
extern "C" void FieldObj_ClearCedarPalmFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f);
extern "C" void FieldObj_ClearLitCedarFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d);
extern "C" void FieldObj_FreeTreeFileBufs(Obj *o, void **a, void **b, void **c);
extern "C" void FieldObj_FreeCedarFileBufs(Obj *o, void **a, void **b, void **c);
extern "C" void FieldObj_FreeLitCedarFileBufs(Obj *o, void **a, void **b);
extern "C" void FieldObj_FreePalmFileBufs(Obj *o, void **a, void **b, void **c);
extern "C" BOOL FieldObj_LoadTrees();
extern "C" s32 FieldObj_LoadFlowerTextures(Obj *o, void *a, void *b);
extern "C" s32 FieldObj_LoadFlowerPalettes(Obj *o, void *a, void *b);
extern "C" BOOL FieldObj_LoadFlowerModels(Obj *o, u32 *a, u32 *b);
extern "C" s32 FieldObj_LoadSpecialFlowerTextures(Obj *o, void *a, void *b);
extern "C" s32 FieldObj_LoadSpecialFlowerPalettes(Obj *o, void *a, void *b);
extern "C" BOOL FieldObj_LoadSpecialFlowerModels(Obj *o, u32 *a, u32 *b);
extern "C" BOOL FieldObj_LoadDandelionModels(Obj *o);
}

namespace ns_0221f798 {
extern "C" {

void TreeAnimSet_Construct(void *p);
}
struct Unk_ov003_0221fda8_Ent {
    u8 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};
extern "C" {

extern void *sFieldObjectModelHeap;
extern void *sFieldObjectAnimHeap;
extern void *gFieldObjectManager;
extern void *sFishFinModelPath;
extern void *sFishFinAnimPath;
extern void *sFishFinTexAnimPath;
extern void *gCurrentHeap;
extern void *gSceneBlockMap;
extern u8 sFishShadows[];
extern u32 data_ov003_0222f810[][3];
extern void **data_ov003_022328a4[];
extern void **data_ov003_022328bc[];
extern void **data_ov003_022328f8[];
extern void **data_ov003_02232910[];
extern void **data_ov003_0223294c[];
extern void **data_ov003_022328e0[];
extern u32 data_ov003_02232904[];
extern u32 data_ov003_0223263c[];
extern u32 data_ov003_02232638[];
extern u32 data_ov003_02232644[];
extern u32 data_ov003_02232940[];
extern u32 data_ov003_022328c8[];
extern u32 data_ov003_02232640[];
extern u32 *data_ov003_02232934[];
extern u32 *data_ov003_022328d4[];
extern void *data_ov003_022328b0[];
extern void **data_ov003_022328ec[];
extern void *data_ov003_02234604[];
extern Unk_ov003_0221fda8_Ent data_ov003_0222f4b8[];

BOOL CachedModel_loadWithTex(void *obj, void *res, void *name, void *tex, u32 d, u32 e, s32 f);
BOOL ModelSet_Load(void *t, void *file, void *heap);
void *ModelSet_Find(void *t, void *name);
void Gfx3d_LoadPltt(void *a, u32 b);
void Gfx3d_LoadTex(void *a, u32 b);
u32 Item_GetIconModelName(s32 a, s32 b);
s32 TownState_GetSeasonPeriod();
void *File_LoadAlloc(void *a, void *b, s32 c, s32 d);
void *NNS_G3dGetTex();
void *BlockMap_GetItemPtr(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
void *ModelSlotPool_acquire(void *a, void *b);
BOOL PooledModel_loadFromSlot(void *a, void *b, void *c);
void *PooledModel_getModel(void *a);
void Model_setResource(void *a, void *b, s32 c);
void *ModelSlot_getHeap(void *a);
s32 func_021065dc();
s32 func_021065f8(s32 a, s32 b);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
BOOL AnimModel_allocAnmObj(void *a, void *b);
void BlendAnimModel_initAnim(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void AnimModel_attachAnim(void *a);
BOOL ModelAnim_allocMatAnm(void *a, void *b, void *c);
void ModelAnim_init(void *a, s32 b, s32 c, s32 d, s32 e);
void *Model_getRenderObj(void *a);
void ModelAnim_addToRenderObj(void *a, void *b);
void func_020f43fc(void *p);
void func_020f440c(void *p);

void *FieldObj_GetPalmModelPath(FieldObjectManager *self, s32 i);
void *FieldObj_GetCedarModelPath(FieldObjectManager *self, s32 i);
s32 FieldObj_GetSeasonSet(void *self, s32 i);
void *FieldObj_GetTreeModelPath(void *self, s32 a, s32 i);
u32 FieldObj_GetTreeTexturePaths(void *self, s32 i);
BOOL FieldObj_LoadStumpModels(FieldObjectManager *self);
BOOL FieldObj_LoadStoneModels(FieldObjectManager *self);
BOOL FieldObj_LoadPaletteFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n);
BOOL FieldObj_LoadTextureFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n);
u8 *FieldObj_GetShapeRecord(u8 *p);
u8 *FishShadow_GetActive(s32 i);
}
// ---- prototypes of this file's functions
extern "C" { void *FieldObjectManager_Create(); }
extern "C" { u8 *FieldObj_GetShapeRecord(u8 *p); }
extern "C" { BOOL FieldObj_LoadTextureFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n); }
extern "C" { BOOL FieldObj_LoadPaletteFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n); }
extern "C" { BOOL FieldObj_LoadIconModels(FieldObjectManager *self); }
extern "C" { BOOL FieldObj_LoadStoneModels(FieldObjectManager *self); }
extern "C" { BOOL FieldObj_LoadStones(); }
extern "C" { BOOL FieldObj_LoadStumpModels(FieldObjectManager *self); }
extern "C" { BOOL FieldObj_LoadStumps(); }
extern "C" { s32 FieldObj_GetSeasonSet(void *self, s32 i); }
extern "C" { void *FieldObj_GetTreeModelPath(void *self, s32 a, s32 i); }
extern "C" { void *FieldObj_GetTreeAnimModelPath(void *self, s32 a, s32 i); }
extern "C" { void *FieldObj_GetCedarModelPath(FieldObjectManager *self, s32 i); }
extern "C" { void *FieldObj_GetCedarAnimModelPath(FieldObjectManager *self, s32 i); }
extern "C" { void *FieldObj_GetPalmModelPath(FieldObjectManager *self, s32 i); }
extern "C" { void *FieldObj_GetPalmAnimModelPath(void *self, s32 i); }
extern "C" { u32 FieldObj_GetTreeTexturePaths(void *self, s32 i); }
extern "C" { BOOL FieldObj_LoadTreeTextures(void *self, u32 *a, u32 *b); }
extern "C" { BOOL FieldObj_LoadCedarTextures(void *a, u32 *b, u32 *c); }
extern "C" { BOOL FieldObj_LoadLitCedarTexture(void *a, u32 *b, u32 *c); }
extern "C" { BOOL FieldObj_LoadPalmTextures(void *a, u32 *b, u32 *c); }
extern "C" { BOOL FieldObj_LoadTreePalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e); }
extern "C" { BOOL FieldObj_LoadCedarPalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e); }
extern "C" { BOOL FieldObj_LoadLitCedarPalette(void *a, u32 *b, u32 *c); }
extern "C" { BOOL FieldObj_LoadTreeSaplingModels(FieldObjectManager *self, u32 *a, u32 *b, u32 c); }
extern "C" { BOOL FieldObj_LoadCedarSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c); }
extern "C" { BOOL FieldObj_LoadPalmSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c); }
}

// ================================================================ data declarations
extern "C" char data_ov003_02232eb4[0x1c];
extern "C" const u32 data_ov003_0222f178[3];
extern "C" char data_ov003_022333c0[0x20];
extern "C" const u32 data_ov003_0222f160[3];
extern "C" char data_ov003_02233790[0x24];
extern "C" char data_ov003_02234328[0x28];
extern "C" const u32 data_ov003_0222f0d0[3];
extern "C" char data_ov003_02232c7c[0x18];
extern "C" char data_ov003_02233400[0x20];
extern "C" char data_ov003_022345d4[0x30];
extern "C" char data_ov003_02233288[0x1c];
extern "C" char data_ov003_02232ed0[0x1c];
extern "C" char data_ov003_02232874[0xc];
extern "C" const u32 sUnitSearchOffsets81[21];
extern "C" char data_ov003_02232f08[0x1c];
extern "C" char data_ov003_02232c64[0x18];
extern "C" const u32 data_ov003_0222f148[3];
extern "C" char data_ov003_022337fc[0x24];
extern "C" char data_ov003_02232cac[0x18];
extern "C" char data_ov003_022329b8[0x10];
extern "C" const u32 data_ov003_0222f1c0[3];
extern "C" char data_ov003_02233868[0x24];
extern "C" char data_ov003_02233420[0x20];
extern "C" u32 data_ov003_022326a8[2];
extern "C" const u32 data_ov003_0222f25c[3];
extern "C" char data_ov003_022329c8[0x10];
extern "C" const u32 data_ov003_0222f3b8[3];
extern "C" u32 data_ov003_02232dcc[6];
extern "C" char data_ov003_02232cc4[0x18];
extern "C" u32 data_ov003_022327b0[2];
extern "C" char data_ov003_022338b0[0x24];
extern "C" char data_ov003_02232f24[0x1c];
extern "C" char data_ov003_022338d4[0x24];
extern "C" char data_ov003_0223391c[0x24];
extern "C" char data_ov003_02232988[0x10];
extern "C" char data_ov003_02233820[0x24];
extern "C" const u32 data_ov003_0222f3c4[3];
extern "C" const u32 data_ov003_0222f358[3];
extern "C" char data_ov003_02232f5c[0x1c];
extern "C" char data_ov003_02233988[0x24];
extern "C" char data_ov003_022339ac[0x24];
extern "C" const u32 data_ov003_0222f418[3];
extern "C" u32 data_ov003_022327f0[2];
extern "C" u32 data_ov003_022326c0[2];
extern "C" char data_ov003_022343a0[0x28];
extern "C" const u32 data_ov003_0222f46c[3];
extern "C" const u32 data_ov003_0222f1d8[3];
extern "C" u32 data_ov003_02232800[2];
extern "C" char data_ov003_02233a18[0x24];
extern "C" const u32 data_ov003_0222f2b0[3];
extern "C" u32 data_ov003_022327f8[2];
extern "C" char data_ov003_02233480[0x20];
extern "C" const u32 data_ov003_0222f534[12];
extern "C" char data_ov003_02233a84[0x24];
extern "C" const u32 data_ov003_0222f250[3];
extern "C" char data_ov003_02232cdc[0x18];
extern "C" const u32 data_ov003_0222f2c8[3];
extern "C" char data_ov003_02233aa8[0x24];
extern "C" u32 data_ov003_0223263c[1];
extern "C" const u32 data_ov003_0222f220[3];
extern "C" char data_ov003_02232f78[0x1c];
extern "C" char data_ov003_02233af0[0x24];
extern "C" const u32 data_ov003_0222f2ec[3];
extern "C" char data_ov003_02233b14[0x24];
extern "C" u32 data_ov003_02232a28[4];
extern "C" u32 data_ov003_02232b18[4];
extern "C" char data_ov003_0223288c[0xc];
extern "C" const u32 data_ov003_0222f564[12];
extern "C" u32 data_ov003_02232660[2];
extern "C" u32 data_ov003_02232718[2];
extern "C" const u32 data_ov003_0222f22c[3];
extern "C" char data_ov003_022334a0[0x20];
extern "C" char data_ov003_02233b80[0x24];
extern "C" char data_ov003_02233bec[0x24];
extern "C" char data_ov003_02232f94[0x1c];
extern "C" char data_ov003_02233c10[0x24];
extern "C" u32 data_ov003_022326b0[2];
extern "C" const u32 sLandingUnitOffsets[3];
extern "C" u32 data_ov003_02232768[2];
extern "C" u32 data_ov003_022327d8[2];
extern "C" const u32 sTreeFruitIcons[3];
extern "C" u32 data_ov003_02232630[1];
extern "C" u32 data_ov003_02232770[2];
extern "C" u32 data_ov003_02232a58[4];
extern "C" const u32 data_ov003_0222f6fc[23];
extern "C" const u32 sTreeFruitItems[3];
extern "C" const u32 data_ov003_0222f10c[3];
extern "C" const u32 data_ov003_0222f118[3];
extern "C" u32 sTreeAnimPaths[32];
extern "C" char data_ov003_02233c7c[0x24];
extern "C" u32 data_ov003_02232a78[4];
extern "C" char data_ov003_022329f8[0x10];
extern "C" char data_ov003_02233004[0x1c];
extern "C" u32 data_ov003_02232bec[5];
extern "C" u32 data_ov003_02232910[3];
extern "C" char data_ov003_02233020[0x1c];
extern "C" char data_ov003_0223303c[0x1c];
extern "C" u32 data_ov003_02232a88[4];
extern "C" const u32 data_ov003_0222f238[3];
extern "C" u32 data_ov003_02232d3c[6];
extern "C" u32 data_ov003_02232760[2];
extern "C" u32 data_ov003_02232654[1];
extern "C" char data_ov003_022343f0[0x28];
extern "C" const u32 data_ov003_0222f0a0[3];
extern "C" char data_ov003_02233ce8[0x24];
extern "C" char data_ov003_02233d0c[0x24];
extern "C" char data_ov003_02233d30[0x24];
extern "C" char data_ov003_02233090[0x1c];
extern "C" char data_ov003_02233500[0x20];
extern "C" char data_ov003_02234418[0x28];
extern "C" const u32 data_ov003_0222f328[3];
extern "C" const u32 data_ov003_0222f244[3];
extern "C" u32 data_ov003_02232d84[6];
extern "C" char data_ov003_02233100[0x1c];
extern "C" u32 data_ov003_02232d9c[6];
extern "C" u32 data_ov003_022327b8[2];
extern "C" u32 sFieldObjectManagerProfile[2];
extern "C" char data_ov003_02233138[0x1c];
extern "C" char data_ov003_02234440[0x28];
extern "C" char data_ov003_02232998[0x10];
extern "C" char data_ov003_02234468[0x28];
extern "C" u32 data_ov003_02232a98[4];
extern "C" u32 data_ov003_02232db4[6];
extern "C" u32 data_ov003_02232aa8[4];
extern "C" u32 data_ov003_0223294c[3];
extern "C" u32 data_ov003_02232c3c[5];
extern "C" char data_ov003_02233520[0x20];
extern "C" char data_ov003_02233e2c[0x24];
extern "C" char data_ov003_02233e50[0x24];
extern "C" u32 data_ov003_0223264c[1];
extern "C" u32 data_ov003_02232ac8[4];
extern "C" char data_ov003_02233e74[0x24];
extern "C" const u32 data_ov003_0222f214[3];
extern "C" char data_ov003_02233e98[0x24];
extern "C" u32 data_ov003_022326e0[2];
extern "C" char data_ov003_02233ebc[0x24];
extern "C" char data_ov003_02233f04[0x24];
extern "C" char data_ov003_02233f28[0x24];
extern "C" char data_ov003_02232898[0xc];
extern "C" char data_ov003_02233540[0x20];
extern "C" char data_ov003_0223285c[0xc];
extern "C" char data_ov003_02233f70[0x24];
extern "C" u32 data_ov003_02232a18[4];
extern "C" u32 data_ov003_02232b28[4];
extern "C" const u32 data_ov003_0222f394[3];
extern "C" const u32 data_ov003_0222f37c[3];
extern "C" char data_ov003_022331e0[0x1c];
extern "C" u32 data_ov003_02232dfc[6];
extern "C" char data_ov003_02233fb8[0x24];
extern "C" const u32 data_ov003_0222f2a4[3];
extern "C" const u32 data_ov003_0222f594[12];
extern "C" char data_ov003_02234024[0x24];
extern "C" const u32 data_ov003_0222f268[3];
extern "C" char data_ov003_02233218[0x1c];
extern "C" u32 data_ov003_02232708[2];
extern "C" char data_ov003_02233234[0x1c];
extern "C" char data_ov003_02234048[0x24];
extern "C" const u32 data_ov003_0222f364[3];
extern "C" const u32 data_ov003_0222f28c[3];
extern "C" char data_ov003_02233250[0x1c];
extern "C" char data_ov003_022344e0[0x28];
extern "C" char data_ov003_022340d8[0x24];
extern "C" u32 data_ov003_02232634[1];
extern "C" char data_ov003_0223326c[0x1c];
extern "C" char data_ov003_02233560[0x20];
extern "C" char data_ov003_022345a8[0x2c];
extern "C" const u32 data_ov003_0222f2f8[3];
extern "C" char data_ov003_022340fc[0x24];
extern "C" const u32 data_ov003_0222f304[3];
extern "C" char data_ov003_02234508[0x28];
extern "C" u32 data_ov003_02232648[1];
extern "C" u32 data_ov003_02232798[2];
extern "C" const u32 data_ov003_0222f31c[3];
extern "C" u32 data_ov003_02232b88[4];
extern "C" const u32 data_ov003_0222f3a0[3];
extern "C" char data_ov003_022332c0[0x1c];
extern "C" u32 data_ov003_022326d0[2];
extern "C" char data_ov003_022332dc[0x1c];
extern "C" char data_ov003_02234120[0x24];
extern "C" char data_ov003_022332f8[0x1c];
extern "C" const u32 data_ov003_0222f4e0[6];
extern "C" char data_ov003_02234530[0x28];
extern "C" u32 data_ov003_02232738[2];
extern "C" u32 data_ov003_02232638[1];
extern "C" char data_ov003_02234558[0x28];
extern "C" const u32 data_ov003_0222f3e8[3];
extern "C" u32 data_ov003_022328bc[3];
extern "C" u32 data_ov003_02232928[3];
extern "C" char data_ov003_0223418c[0x24];
extern "C" u32 data_ov003_02232728[2];
extern "C" const u32 data_ov003_0222f40c[3];
extern "C" u32 data_ov003_02232688[2];
extern "C" const u32 data_ov003_0222f490[3];
extern "C" u32 data_ov003_022335c0[8];
extern "C" char data_ov003_022341f8[0x24];
extern "C" const u32 data_ov003_0222f4a8[4];
extern "C" char data_ov003_02233384[0x1c];
extern "C" char data_ov003_0223421c[0x24];
extern "C" u32 data_ov003_02232788[2];
extern "C" u32 sFieldObjectLoaders[9];
extern "C" const u32 data_ov003_0222f4f8[6];
extern "C" const u32 data_ov003_0222f1cc[3];
extern "C" u32 data_ov003_022326f8[2];
extern "C" char data_ov003_02234288[0x28];
extern "C" u32 data_ov003_022328d4[3];
extern "C" u32 data_ov003_02232904[3];
extern "C" char data_ov003_022335e0[0x24];
extern "C" char data_ov003_02233604[0x24];
extern "C" char data_ov003_02232978[0x10];
extern "C" char data_ov003_02232868[0xc];
extern "C" char data_ov003_02233628[0x24];
extern "C" const u32 data_ov003_0222f13c[3];
extern "C" const u32 data_ov003_0222f430[3];
extern "C" const u32 data_ov003_0222f130[3];
extern "C" char data_ov003_02233694[0x24];
extern "C" char data_ov003_02232850[0xc];
extern "C" char data_ov003_02232e44[0x1c];
extern "C" char data_ov003_022336b8[0x24];
extern "C" char data_ov003_02232e60[0x1c];
extern "C" char data_ov003_02234300[0x28];
extern "C" char data_ov003_02232e7c[0x1c];
extern "C" u32 data_ov003_02232680[2];
extern "C" const u32 data_ov003_0222f49c[3];
extern "C" char data_ov003_02233724[0x24];
extern "C" const u32 data_ov003_0222f2e0[3];
extern "C" char data_ov003_02233748[0x24];
extern "C" u32 data_ov003_022327c8[2];
extern "C" u32 data_ov003_02232c28[5];
extern "C" const u32 data_ov003_0222f340[3];
extern "C" char data_ov003_022337b4[0x24];
extern "C" u32 data_ov003_02232a48[4];
extern "C" char data_ov003_022337d8[0x24];
extern "C" u32 data_ov003_02232650[1];
extern "C" const u32 data_ov003_0222f3ac[3];
extern "C" const u32 data_ov003_0222f1e4[3];
extern "C" const u32 data_ov003_0222f298[3];
extern "C" char data_ov003_02234350[0x28];
extern "C" char data_ov003_02233440[0x20];
extern "C" const u32 data_ov003_0222f04c[3];
extern "C" char data_ov003_0223388c[0x24];
extern "C" u32 data_ov003_02232808[2];
extern "C" char data_ov003_02232f40[0x1c];
extern "C" const u32 data_ov003_0222f07c[3];
extern "C" char data_ov003_02233940[0x24];
extern "C" const u32 data_ov003_0222f1a8[3];
extern "C" char data_ov003_02233368[0x1c];
extern "C" u32 data_ov003_02232934[3];
extern "C" char data_ov003_022329d8[0x10];
extern "C" char data_ov003_02233460[0x20];
extern "C" u32 data_ov003_022326d8[2];
extern "C" char data_ov003_02233a60[0x24];
extern "C" u32 data_ov003_02232740[2];
extern "C" const u32 data_ov003_0222f2d4[3];
extern "C" char data_ov003_02232a08[0x10];
extern "C" const u32 data_ov003_0222f388[3];
extern "C" char data_ov003_02233acc[0x24];
extern "C" const u32 data_ov003_0222f208[3];
extern "C" u32 data_ov003_02232ab8[4];
extern "C" u32 data_ov003_02232a38[4];
extern "C" u32 data_ov003_02232940[3];
extern "C" u32 data_ov003_02232d0c[6];
extern "C" char data_ov003_02233ba4[0x24];
extern "C" u32 data_ov003_022327c0[2];
extern "C" char data_ov003_022334e0[0x20];
extern "C" char data_ov003_02233c34[0x24];
extern "C" u32 data_ov003_02232720[2];
extern "C" const u32 data_ov003_0222f100[3];
extern "C" const u32 data_ov003_0222f484[3];
extern "C" u32 data_ov003_02232a68[4];
extern "C" u32 data_ov003_02232758[2];
extern "C" const u32 data_ov003_0222f040[3];
extern "C" char data_ov003_02233ca0[0x24];
extern "C" char data_ov003_022343c8[0x28];
extern "C" const u32 data_ov003_0222f124[3];
extern "C" const u32 data_ov003_0222f088[3];
extern "C" char data_ov003_02233074[0x1c];
extern "C" const u32 data_ov003_0222f19c[3];
extern "C" const u32 data_ov003_0222f094[3];
extern "C" u32 data_ov003_02232d54[6];
extern "C" u32 data_ov003_022328ec[3];
extern "C" char data_ov003_022330ac[0x1c];
extern "C" char data_ov003_02233d54[0x24];
extern "C" char data_ov003_022330e4[0x1c];
extern "C" const u32 data_ov003_0222f0dc[3];
extern "C" char data_ov003_02233d9c[0x24];
extern "C" const u32 data_ov003_0222f1b4[3];
extern "C" const u32 sItemPopScaleXZ[17];
extern "C" char data_ov003_02234490[0x28];
extern "C" char data_ov003_02232820[0xc];
extern "C" char data_ov003_0223318c[0x1c];
extern "C" const u32 data_ov003_0222f424[3];
extern "C" u32 data_ov003_022326e8[2];
extern "C" char data_ov003_022331a8[0x1c];
extern "C" char data_ov003_022344b8[0x28];
extern "C" char data_ov003_02233ee0[0x24];
extern "C" char data_ov003_02233f4c[0x24];
extern "C" const u32 data_ov003_0222f0c4[3];
extern "C" u32 data_ov003_02232b08[4];
extern "C" const u32 data_ov003_0222f43c[3];
extern "C" char data_ov003_02233f94[0x24];
extern "C" const u32 data_ov003_0222f34c[3];
extern "C" u32 data_ov003_02232b48[4];
extern "C" char data_ov003_02234000[0x24];
extern "C" u32 data_ov003_022327d0[2];
extern "C" u32 data_ov003_02232778[2];
extern "C" char data_ov003_0223406c[0x24];
extern "C" u32 data_ov003_02232e14[6];
extern "C" u32 data_ov003_02232818[2];
extern "C" const u32 data_ov003_0222f758[46];
extern "C" const u32 data_ov003_0222f2bc[3];
extern "C" u32 data_ov003_02232810[2];
extern "C" char data_ov003_022332a4[0x1c];
extern "C" u32 data_ov003_02232b68[4];
extern "C" u32 data_ov003_02232e2c[6];
extern "C" const u32 data_ov003_0222f4c8[6];
extern "C" u32 data_ov003_02232b98[4];
extern "C" char data_ov003_02234144[0x24];
extern "C" u32 data_ov003_022328b0[3];
extern "C" u32 data_ov003_02232bb8[4];
extern "C" char data_ov003_022335a0[0x20];
extern "C" const u32 data_ov003_0222f3d0[3];
extern "C" u32 data_ov003_02232bc8[4];
extern "C" u32 data_ov003_022326b8[2];
extern "C" char data_ov003_022341b0[0x24];
extern "C" char data_ov003_022341d4[0x24];
extern "C" u32 data_ov003_02232c50[5];
extern "C" char data_ov003_02234580[0x28];
extern "C" const u32 data_ov003_0222f460[3];
extern "C" const u32 data_ov003_0222f510[9];
extern "C" u32 data_ov003_02232bd8[5];
extern "C" char data_ov003_02232958[0x10];
extern "C" char data_ov003_02232968[0x10];
extern "C" char data_ov003_022342b0[0x28];
extern "C" char data_ov003_0223364c[0x24];
extern "C" char data_ov003_02233670[0x24];
extern "C" const u32 data_ov003_0222f190[3];
extern "C" u32 data_ov003_0223291c[3];
extern "C" const u32 data_ov003_0222f6a0[23];
extern "C" u32 data_ov003_022327a8[2];
extern "C" char data_ov003_02232e98[0x1c];
extern "C" const u32 data_ov003_0222f058[3];
extern "C" const u32 data_ov003_0222f070[3];
extern "C" char data_ov003_02232838[0xc];
extern "C" char data_ov003_02232eec[0x1c];
extern "C" u32 data_ov003_022328a4[3];
extern "C" u32 data_ov003_02232b78[4];
extern "C" u32 data_ov003_02232c14[5];
extern "C" const u32 data_ov003_0222f454[3];
extern "C" u32 data_ov003_022326a0[2];
extern "C" char data_ov003_02233964[0x24];
extern "C" const u32 data_ov003_0222f3f4[3];
extern "C" char data_ov003_022339f4[0x24];
extern "C" u32 data_ov003_022328f8[3];
extern "C" const u32 data_ov003_0222f274[3];
extern "C" const u32 data_ov003_0222f0b8[3];
extern "C" u32 data_ov003_02232af8[4];
extern "C" char data_ov003_02233b38[0x24];
extern "C" u32 data_ov003_02232cf4[6];
extern "C" char data_ov003_022330c8[0x1c];
extern "C" const u32 data_ov003_0222f184[3];
extern "C" char data_ov003_02232fb0[0x1c];
extern "C" char data_ov003_02232fcc[0x1c];
extern "C" char data_ov003_02232fe8[0x1c];
extern "C" u32 data_ov003_02232d24[6];
extern "C" const u32 data_ov003_0222f064[3];
extern "C" char data_ov003_02233cc4[0x24];
extern "C" const u32 data_ov003_0222f3dc[3];
extern "C" const u32 data_ov003_0222f1f0[3];
extern "C" u32 data_ov003_02232d6c[6];
extern "C" const u32 data_ov003_0222f0f4[3];
extern "C" char data_ov003_02233dc0[0x24];
extern "C" char data_ov003_02233154[0x1c];
extern "C" char data_ov003_02233e08[0x24];
extern "C" const u32 data_ov003_0222f1fc[3];
extern "C" u32 data_ov003_022327e8[2];
extern "C" const u32 sFieldObjShapeTable[197];
extern "C" u32 data_ov003_02232de4[6];
extern "C" u32 data_ov003_02232b38[4];
extern "C" char data_ov003_02233fdc[0x24];
extern "C" char data_ov003_022331fc[0x1c];
extern "C" char data_ov003_02234090[0x24];
extern "C" u32 data_ov003_02232790[2];
extern "C" u32 data_ov003_02232780[2];
extern "C" const u32 sItemPopScaleY[17];
extern "C" char data_ov003_02233580[0x20];
extern "C" u32 data_ov003_022327a0[2];
extern "C" const u32 data_ov003_0222f370[3];
extern "C" const u32 data_ov003_0222f0e8[3];
extern "C" char data_ov003_02233314[0x1c];
extern "C" const u32 data_ov003_0222f400[3];
extern "C" char data_ov003_0223334c[0x1c];
extern "C" const u32 data_ov003_0222f448[3];
extern "C" const u32 data_ov003_0222f4b8[4];
extern "C" const u32 data_ov003_0222f16c[3];
extern "C" char data_ov003_02232880[0xc];
extern "C" char data_ov003_02232844[0xc];
extern "C" char data_ov003_022336dc[0x24];
extern "C" u32 data_ov003_022326f0[2];
extern "C" char data_ov003_0223376c[0x24];
extern "C" const u32 data_ov003_0222f310[3];
extern "C" u32 data_ov003_022328c8[3];
extern "C" char data_ov003_02233844[0x24];
extern "C" char data_ov003_022338f8[0x24];
extern "C" char data_ov003_022339d0[0x24];
extern "C" const u32 data_ov003_0222f0ac[3];
extern "C" u32 data_ov003_022328e0[3];
extern "C" char data_ov003_02233b5c[0x24];
extern "C" u32 data_ov003_02232710[2];
extern "C" char data_ov003_02232690[0x8];
extern "C" char data_ov003_02233c58[0x24];
extern "C" char data_ov003_02233058[0x1c];
extern "C" const u32 data_ov003_0222f154[3];
extern "C" u32 data_ov003_02232644[1];
extern "C" char data_ov003_0223311c[0x1c];
extern "C" char data_ov003_02233de4[0x24];
extern "C" u32 data_ov003_02232678[2];
extern "C" u32 data_ov003_02232ae8[4];
extern "C" const u32 data_ov003_0222f478[3];
extern "C" u32 data_ov003_02232698[2];
extern "C" u32 data_ov003_02232700[2];
extern "C" u32 data_ov003_02232730[2];
extern "C" u32 data_ov003_02232658[2];
extern "C" u32 data_ov003_022326c8[2];
extern "C" char data_ov003_02233330[0x1c];
extern "C" char data_ov003_02234240[0x24];
extern "C" char data_ov003_022342d8[0x28];
extern "C" char data_ov003_02233700[0x24];
extern "C" char data_ov003_022329a8[0x10];
extern "C" char data_ov003_02232c94[0x18];
extern "C" char data_ov003_02233170[0x1c];
extern "C" char data_ov003_022329e8[0x10];
extern "C" const u32 data_ov003_0222f280[3];
extern "C" char data_ov003_02233bc8[0x24];
extern "C" u32 data_ov003_02232748[2];
extern "C" char data_ov003_02233d78[0x24];
extern "C" char data_ov003_0223282c[0xc];
extern "C" char data_ov003_022331c4[0x1c];
extern "C" u32 data_ov003_02232b58[4];
extern "C" char data_ov003_022340b4[0x24];
extern "C" char data_ov003_02234168[0x24];
extern "C" u32 data_ov003_02232670[2];
extern "C" char data_ov003_022333a0[0x20];
extern "C" u32 data_ov003_022327e0[2];
extern "C" char data_ov003_02234378[0x28];
extern "C" char data_ov003_022334c0[0x20];
extern "C" const u32 data_ov003_0222f334[3];
extern "C" u32 data_ov003_02232ad8[4];
extern "C" const u32 data_ov003_0222f810[69];
extern "C" u32 data_ov003_02232ba8[4];
extern "C" u32 data_ov003_02234604[12];
extern "C" char data_ov003_02233a3c[0x24];
extern "C" u32 data_ov003_02232640[1];
extern "C" u32 data_ov003_02232750[2];
extern "C" char data_ov003_022333e0[0x20];
extern "C" void TreeLeafFx_OnEffectUpdate();
extern "C" void TreeLeafFx_OnEffectStep();
extern "C" void TreeLeafFx_OnEffectInit();
extern "C" void FieldObj_LoadDesigns();
extern "C" void FieldObj_LoadTurnips();
extern "C" void FieldObj_LoadCracks();
extern "C" void FieldObj_LoadHoles();
extern "C" void FieldObj_LoadGrass();
extern "C" void FieldObj_LoadFlowers();
extern "C" void FieldObj_LoadTrees();
extern "C" void FieldObj_LoadStumps();
extern "C" void FieldObj_LoadStones();
extern "C" void FieldObjectManager_Create();
// ================================================================ data (creation order)
extern "C" char data_ov003_02232eb4[0x1c] = "/fg/flower/rose/rose.nsbmd";
extern "C" const u32 data_ov003_0222f178[3] = {
    3, 0x1a0001, 0x59a,
};
extern "C" char data_ov003_022333c0[0x20] = "/fg/flower/tulip/tulip.nsbmd";
extern "C" const u32 data_ov003_0222f160[3] = {
    2, 0x120001, 0x171,
};
extern "C" char data_ov003_02233790[0x24] = "/fg/tree/tree_mdl/tree_02s.nsbmd";
extern "C" char data_ov003_02234328[0x28] = "/fg/tree/cedar_mdl/cedar_babys.nsbmd";
extern "C" const u32 data_ov003_0222f0d0[3] = {
    0x12, 0xe0008, 0xa4,
};
extern "C" char data_ov003_02232c7c[0x18] = "/fg/grass/grassB.nsbmd";
extern "C" char data_ov003_02233400[0x20] = "/fg/eff_tree/shakeS_03.nsbca";
extern "C" char data_ov003_022345d4[0x30] = "/fg/flower/rafflesia/rafflesia_palette.nsbtx";
extern "C" char data_ov003_02233288[0x1c] = "/fg/eff_tree/anm_p04w.nsbmd";
extern "C" char data_ov003_02232ed0[0x1c] = "/fg/eff_tree/cutR_04.nsbca";
extern "C" char data_ov003_02232874[0xc] = "obj_stnDw";
extern "C" const u32 sUnitSearchOffsets81[21] = {
    0x78898788, 0x79997798, 0xa8868a97, 0x7a769a68, 0x67a76996, 0xaaa66aa9, 0xb8858b66, 0x9b957b58, 0x59b95775,
    0xaba56bb7, 0xbab65a65, 0xbbb55b56, 0xc8848c55, 0x9c947c48, 0x49c94774, 0xaca46cc7, 0x4aca4664, 0xbcb45cc6,
    0x45c54b54, 0xccc44ccb, 0x44,
};
extern "C" char data_ov003_02232f08[0x1c] = "/fg/eff_tree/cutL_01.nsbca";
extern "C" char data_ov003_02232c64[0x18] = "/fg/grass/grassA.nsbmd";
extern "C" const u32 data_ov003_0222f148[3] = {
    0x12, 0xa000a, 0xe1,
};
extern "C" char data_ov003_022337fc[0x24] = "/fg/eff_tree/cutL_04_1unit.nsbca";
u8 sTreeLeafFx[0x44];
extern "C" char data_ov003_02232cac[0x18] = "/fg/grass/grassD.nsbmd";
extern "C" char data_ov003_022329b8[0x10] = "tree03_stamp";
extern "C" const u32 data_ov003_0222f1c0[3] = {
    0x13, 0xe0004, 0x2e1,
};
extern "C" char data_ov003_02233868[0x24] = "/fg/tree/palm_mdl/palm_02w.nsbmd";
extern "C" char data_ov003_02233420[0x20] = "/fg/eff_tree/shakeS_04.nsbca";
extern "C" u32 data_ov003_022326a8[2] = {
    (u32)data_ov003_0222f43c, (u32)data_ov003_0222f088,
};
extern "C" const u32 data_ov003_0222f25c[3] = {
    0x1a, 0x10001b, 0x8f,
};
extern "C" char data_ov003_022329c8[0x10] = "tree01_stamp";
extern "C" const u32 data_ov003_0222f3b8[3] = {
    0x1a, 0x200008, 0xa4,
};
extern "C" u32 data_ov003_02232dcc[6] = {
    (u32)data_ov003_02234048, (u32)data_ov003_02233aa8, (u32)data_ov003_02233acc, (u32)data_ov003_02233af0,
    (u32)data_ov003_02233b14, (u32)data_ov003_0223406c,
};
extern "C" char data_ov003_02232cc4[0x18] = "/fg/grass/clover.nsbmd";
extern "C" u32 data_ov003_022327b0[2] = {
    (u32)data_ov003_0222f2c8, (u32)data_ov003_0222f1e4,
};
extern "C" char data_ov003_022338b0[0x24] = "/fg/tree/palm_mdl/palm_04w.nsbmd";
extern "C" char data_ov003_02232f24[0x1c] = "/fg/eff_tree/cutL_02.nsbca";
extern "C" char data_ov003_022338d4[0x24] = "/fg/tree/palm_mdl/palm_01s.nsbmd";
extern "C" char data_ov003_0223391c[0x24] = "/fg/tree/palm_mdl/palm_03s.nsbmd";
extern "C" char data_ov003_02232988[0x10] = "palm03_stamp";
extern "C" char data_ov003_02233820[0x24] = "/fg/eff_tree/cutR_02_1unit.nsbca";
extern "C" const u32 data_ov003_0222f3c4[3] = {
    3, 0x230001, 0x19a,
};
extern "C" const u32 data_ov003_0222f358[3] = {
    0x13, 0x1a000a, 0x28f,
};
extern "C" char data_ov003_02232f5c[0x1c] = "/fg/eff_tree/cutL_04.nsbca";
extern "C" char data_ov003_02233988[0x24] = "/fg/tree/tree_tex/tree_01w.nsbtx";
extern "C" char data_ov003_022339ac[0x24] = "/fg/tree/tree_tex/tree_02w.nsbtx";
extern "C" const u32 data_ov003_0222f418[3] = {
    3, 0xe0001, 0x2cd,
};
extern "C" u32 data_ov003_022327f0[2] = {
    (u32)data_ov003_0222f250, (u32)data_ov003_0222f478,
};
extern "C" u32 data_ov003_022326c0[2] = {
    (u32)data_ov003_0222f04c, 0,
};
extern "C" char data_ov003_022343a0[0x28] = "/fg/tree/cedar_tex/cedar_deadw.nsbtx";
extern "C" const u32 data_ov003_0222f46c[3] = {
    0x13, 0xa000a, 0x28f,
};
extern "C" const u32 data_ov003_0222f1d8[3] = {
    0x12, 0xa000a, 0xe1,
};
extern "C" u32 data_ov003_02232800[2] = {
    (u32)data_ov003_0222f430, (u32)data_ov003_0222f424,
};
extern "C" char data_ov003_02233a18[0x24] = "/fg/tree/tree_tex/tree_01f.nsbtx";
extern "C" const u32 data_ov003_0222f2b0[3] = {
    0x13, 0xb0006, 0x28f,
};
extern "C" u32 data_ov003_022327f8[2] = {
    (u32)data_ov003_0222f0ac, (u32)data_ov003_0222f190,
};
extern "C" char data_ov003_02233480[0x20] = "/fg/eff_tree/shakeS_01.nsbca";
extern "C" const u32 data_ov003_0222f534[12] = {
    0, 0x101, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
};
extern "C" char data_ov003_02233a84[0x24] = "/fg/tree/tree_tex/tree_04f.nsbtx";
extern "C" const u32 data_ov003_0222f250[3] = {
    4, 0x230001, 0x70a,
};
extern "C" char data_ov003_02232cdc[0x18] = "/fg/hole/obj_hole.nsbmd";
extern "C" const u32 data_ov003_0222f2c8[3] = {
    3, 0xe0001, 0x23d,
};
extern "C" char data_ov003_02233aa8[0x24] = "/fg/tree/tree_tex/tree_01s.nsbtx";
extern "C" u32 data_ov003_0223263c[1] = {
    (u32)data_ov003_02234580,
};
extern "C" const u32 data_ov003_0222f220[3] = {
    2, 0xa0001, 0x19a,
};
extern "C" char data_ov003_02232f78[0x1c] = "/fg/eff_tree/cutR_01.nsbca";
extern "C" char data_ov003_02233af0[0x24] = "/fg/tree/tree_tex/tree_03s.nsbtx";
extern "C" const u32 data_ov003_0222f2ec[3] = {
    0x12, 0x7001b, 0xa4,
};
extern "C" char data_ov003_02233b14[0x24] = "/fg/tree/tree_tex/tree_04s.nsbtx";
extern "C" u32 data_ov003_02232a28[4] = {
    (u32)data_ov003_022333c0, (u32)data_ov003_022333e0, (u32)data_ov003_022334c0, (u32)data_ov003_02232eb4,
};
extern "C" u32 data_ov003_02232b18[4] = {
    (u32)data_ov003_02233170, (u32)data_ov003_0223318c, (u32)data_ov003_022331a8, (u32)data_ov003_022331c4,
};
extern "C" char data_ov003_0223288c[0xc] = "obj_stnCw";
extern "C" const u32 data_ov003_0222f564[12] = {
    0x1800, 0x2000, 0x2e66, 0x3c00, 0x1666, 0x2333, 0x2e66, 0x3c00, 0x1400, 0x1c00, 0x299a, 0x3333,
};
extern "C" u32 data_ov003_02232660[2] = {
    (u32)data_ov003_0222f37c, (u32)data_ov003_0222f460,
};
extern "C" u32 data_ov003_02232718[2] = {
    (u32)data_ov003_0222f2f8, 0,
};
extern "C" const u32 data_ov003_0222f22c[3] = {
    0x12, 0x8000f, 0x8f,
};
extern "C" char data_ov003_022334a0[0x20] = "/fg/grass/grass_palette.nsbtx";
extern "C" char data_ov003_02233b80[0x24] = "/fg/tree/palm_tex/palm_02w.nsbtx";
extern "C" char data_ov003_02233bec[0x24] = "/fg/tree/tree_mdl/tree_01f.nsbmd";
extern "C" char data_ov003_02232f94[0x1c] = "/fg/eff_tree/cutR_02.nsbca";
extern "C" char data_ov003_02233c10[0x24] = "/fg/tree/palm_tex/palm_01s.nsbtx";
extern "C" u32 data_ov003_022326b0[2] = {
    (u32)data_ov003_0222f238, (u32)data_ov003_0222f124,
};
extern "C" const u32 sLandingUnitOffsets[3] = {
    0x78878988, 0x77997998, 0x97,
};
extern "C" u32 data_ov003_02232768[2] = {
    (u32)data_ov003_0222f3a0, 0,
};
extern "C" u32 data_ov003_022327d8[2] = {
    (u32)data_ov003_0222f040, (u32)data_ov003_0222f484,
};
extern "C" const u32 sTreeFruitIcons[3] = {
    0x15191518, 0x151b151a, 0x151c,
};
extern "C" u32 data_ov003_02232630[1] = {
    (u32)data_ov003_02233004,
};
extern "C" u32 data_ov003_02232770[2] = {
    (u32)data_ov003_0222f1f0, (u32)data_ov003_0222f2d4,
};
extern "C" u32 data_ov003_02232a58[4] = {
    (u32)data_ov003_02232800, (u32)data_ov003_022327d8, (u32)data_ov003_022327a8, (u32)data_ov003_022326a8,
};
extern "C" const u32 data_ov003_0222f6fc[23] = {
    3, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3,
};
extern "C" const u32 sTreeFruitItems[3] = {
    0x15191518, 0x151b151a, 0x151c,
};
extern "C" const u32 data_ov003_0222f10c[3] = {
    0x1a, 0x14000f, 0x8f,
};
extern "C" const u32 data_ov003_0222f118[3] = {
    0x12, 0x7001b, 0x29,
};
extern "C" u32 sTreeAnimPaths[32] = {
    (u32)data_ov003_02233330, (u32)data_ov003_0223334c, (u32)data_ov003_02233368, (u32)data_ov003_02233384,
    (u32)data_ov003_02233480, (u32)data_ov003_022333a0, (u32)data_ov003_02233400, (u32)data_ov003_02233420,
    (u32)data_ov003_02233330, (u32)data_ov003_022334e0, (u32)data_ov003_02233500, (u32)data_ov003_02233520,
    (u32)data_ov003_02233330, (u32)data_ov003_02233580, (u32)data_ov003_02233540, (u32)data_ov003_02233560,
    (u32)data_ov003_02232f08, (u32)data_ov003_02232f24, (u32)data_ov003_02232f40, (u32)data_ov003_02232f5c,
    (u32)data_ov003_02232f78, (u32)data_ov003_02232f94, (u32)data_ov003_02232fcc, (u32)data_ov003_02232ed0,
    (u32)data_ov003_02232f08, (u32)data_ov003_02233628, (u32)data_ov003_022336dc, (u32)data_ov003_022337fc,
    (u32)data_ov003_02232f78, (u32)data_ov003_02233820, (u32)data_ov003_02233964, (u32)data_ov003_02233b38,
};
extern "C" char data_ov003_02233c7c[0x24] = "/fg/tree/palm_tex/palm_04s.nsbtx";
extern "C" u32 data_ov003_02232a78[4] = {
    (u32)data_ov003_02232658, (u32)data_ov003_022326f8, (u32)data_ov003_02232738, (u32)data_ov003_02232798,
};
extern "C" char data_ov003_022329f8[0x10] = "cedar02_stamp";
extern "C" char data_ov003_02233004[0x1c] = "/fg/hole/obj_crack_pl.nsbtx";
extern "C" u32 data_ov003_02232bec[5] = {
    (u32)data_ov003_02232898, (u32)data_ov003_02232850, (u32)data_ov003_02232838, (u32)data_ov003_02232820,
    (u32)data_ov003_02232868,
};
extern "C" u32 data_ov003_02232910[3] = {
    (u32)data_ov003_02232d3c, (u32)data_ov003_02232d54, (u32)data_ov003_02232d54,
};
extern "C" char data_ov003_02233020[0x1c] = "/fg/grass/redTurnip_s.nsbmd";
extern "C" char data_ov003_0223303c[0x1c] = "/fg/eff_tree/anm_t01w.nsbmd";
extern "C" u32 data_ov003_02232a88[4] = {
    (u32)data_ov003_02232740, (u32)data_ov003_02232758, (u32)data_ov003_02232688, (u32)data_ov003_022326d8,
};
extern "C" const u32 data_ov003_0222f238[3] = {
    2, 0xc0001, 0x571,
};
extern "C" u32 data_ov003_02232d3c[6] = {
    (u32)data_ov003_022342d8, (u32)data_ov003_02233e08, (u32)data_ov003_02233e2c, (u32)data_ov003_02233e50,
    (u32)data_ov003_02233e74, (u32)data_ov003_02234300,
};
extern "C" u32 data_ov003_02232760[2] = {
    (u32)data_ov003_0222f418, (u32)data_ov003_0222f2bc,
};
extern "C" u32 data_ov003_02232654[1] = {
    (u32)data_ov003_02232eec,
};
extern "C" char data_ov003_022343f0[0x28] = "/fg/tree/cedar_tex/cedar_deads.nsbtx";
extern "C" const u32 data_ov003_0222f0a0[3] = {
    4, 0x1e0001, 0x63d,
};
extern "C" char data_ov003_02233ce8[0x24] = "/fg/tree/tree_pal/tree_setC.nsbtx";
// (registration node 0x223593c is created with the object below)
FieldItemFxTable sFieldItemFxTable;   // __sinit: vector ctor + registered destructor
extern "C" char data_ov003_02233d0c[0x24] = "/fg/flower/rose/rose_palette.nsbtx";
extern "C" char data_ov003_02233d30[0x24] = "/fg/tree/tree_mdl/tree_babyw.nsbmd";
u8 sFieldObjectModelHeap[0x4];
extern "C" char data_ov003_02233090[0x1c] = "/fg/eff_tree/anm_t01f.nsbmd";
extern "C" char data_ov003_02233500[0x20] = "/fg/eff_tree/shakeL_03_1.nsbca";
extern "C" char data_ov003_02234418[0x28] = "/fg/tree/cedar_tex/obj_x_cedar.nsbtx";
extern "C" const u32 data_ov003_0222f328[3] = {
    0x1a, 0x1c000a, 0xe1,
};
extern "C" const u32 data_ov003_0222f244[3] = {
    0x13, 0x210006, 0x28f,
};
extern "C" u32 data_ov003_02232d84[6] = {
    (u32)data_ov003_02233f70, (u32)data_ov003_022338d4, (u32)data_ov003_022338f8, (u32)data_ov003_0223391c,
    (u32)data_ov003_02233940, (u32)data_ov003_02233f94,
};
extern "C" char data_ov003_02233100[0x1c] = "/fg/eff_tree/anm_t02s.nsbmd";
extern "C" u32 data_ov003_02232d9c[6] = {
    (u32)data_ov003_02233fb8, (u32)data_ov003_02233988, (u32)data_ov003_022339ac, (u32)data_ov003_022339d0,
    (u32)data_ov003_022339f4, (u32)data_ov003_02233fdc,
};
extern "C" u32 data_ov003_022327b8[2] = {
    (u32)data_ov003_0222f34c, 0,
};
extern "C" u32 sFieldObjectManagerProfile[2] = {
    (u32)FieldObjectManager_Create, 0xb008a,
};
extern "C" char data_ov003_02233138[0x1c] = "/fg/eff_tree/anm_t04s.nsbmd";
extern "C" char data_ov003_02234440[0x28] = "/fg/tree/cedar_mdl/obj_x_cedar.nsbmd";
extern "C" char data_ov003_02232998[0x10] = "palm04_stamp";
extern "C" char data_ov003_02234468[0x28] = "/fg/flower/tulip/tulip_palette.nsbtx";
extern "C" u32 data_ov003_02232a98[4] = {
    0, (u32)data_ov003_02232808, (u32)data_ov003_022327e0, (u32)data_ov003_02232768,
};
extern "C" u32 data_ov003_02232db4[6] = {
    (u32)data_ov003_02234000, (u32)data_ov003_02233a18, (u32)data_ov003_02233a3c, (u32)data_ov003_02233a60,
    (u32)data_ov003_02233a84, (u32)data_ov003_02234024,
};
extern "C" u32 data_ov003_02232aa8[4] = {
    (u32)data_ov003_0223303c, (u32)data_ov003_02233058, (u32)data_ov003_02233314, (u32)data_ov003_02233074,
};
extern "C" u32 data_ov003_0223294c[3] = {
    (u32)data_ov003_02232aa8, (u32)data_ov003_02232ab8, (u32)data_ov003_02232ac8,
};
extern "C" u32 data_ov003_02232c3c[5] = {
    (u32)data_ov003_02232ad8, (u32)data_ov003_02232b38, (u32)data_ov003_02232a88, (u32)data_ov003_02232ba8,
    (u32)data_ov003_02232a58,
};
extern "C" char data_ov003_02233520[0x20] = "/fg/eff_tree/shakeL_04_1.nsbca";
extern "C" char data_ov003_02233e2c[0x24] = "/fg/tree/cedar_mdl/cedar_02w.nsbmd";
extern "C" char data_ov003_02233e50[0x24] = "/fg/tree/cedar_mdl/cedar_03w.nsbmd";
extern "C" u32 data_ov003_0223264c[1] = {
    (u32)data_ov003_02234440,
};
extern "C" u32 data_ov003_02232ac8[4] = {
    (u32)data_ov003_02232fe8, (u32)data_ov003_02233100, (u32)data_ov003_0223311c, (u32)data_ov003_02233138,
};
extern "C" char data_ov003_02233e74[0x24] = "/fg/tree/cedar_mdl/cedar_04w.nsbmd";
extern "C" const u32 data_ov003_0222f214[3] = {
    0x13, 0xe0004, 0x2e1,
};
extern "C" char data_ov003_02233e98[0x24] = "/fg/tree/cedar_mdl/cedar_01s.nsbmd";
extern "C" u32 data_ov003_022326e0[2] = {
    (u32)data_ov003_0222f2b0, (u32)data_ov003_0222f244,
};
extern "C" char data_ov003_02233ebc[0x24] = "/fg/tree/cedar_mdl/cedar_02s.nsbmd";
extern "C" char data_ov003_02233f04[0x24] = "/fg/tree/cedar_mdl/cedar_04s.nsbmd";
extern "C" char data_ov003_02233f28[0x24] = "/fg/tree/palm_mdl/palm_babyw.nsbmd";
extern "C" char data_ov003_02232898[0xc] = "obj_stnAs";
extern "C" char data_ov003_02233540[0x20] = "/fg/eff_tree/shakeL_03_2.nsbca";
extern "C" char data_ov003_0223285c[0xc] = "tanpopo_w";
extern "C" char data_ov003_02233f70[0x24] = "/fg/tree/palm_mdl/palm_babys.nsbmd";
extern "C" u32 data_ov003_02232a18[4] = {
    (u32)data_ov003_02234468, (u32)data_ov003_02234490, (u32)data_ov003_022344b8, (u32)data_ov003_02233d0c,
};
extern "C" u32 data_ov003_02232b28[4] = {
    (u32)data_ov003_02233250, (u32)data_ov003_02233154, (u32)data_ov003_0223326c, (u32)data_ov003_02233288,
};
extern "C" const u32 data_ov003_0222f394[3] = {
    0x1a, 0x280008, 0x15c,
};
extern "C" const u32 data_ov003_0222f37c[3] = {
    2, 0xb0001, 0x200,
};
extern "C" char data_ov003_022331e0[0x1c] = "/fg/eff_tree/anm_c01s.nsbmd";
extern "C" u32 data_ov003_02232dfc[6] = {
    (u32)data_ov003_022343c8, (u32)data_ov003_02234120, (u32)data_ov003_02234144, (u32)data_ov003_02234168,
    (u32)data_ov003_0223418c, (u32)data_ov003_022343f0,
};
extern "C" char data_ov003_02233fb8[0x24] = "/fg/tree/tree_tex/tree_babyw.nsbtx";
u8 gFieldObjectManager[0x4];
extern "C" const u32 data_ov003_0222f2a4[3] = {
    3, 0xe0001, 0x19a,
};
extern "C" const u32 data_ov003_0222f594[12] = {
    0x733, 0xc00, 0x119a, 0x1666, 0x666, 0x99a, 0xccd, 0x1333, 0x733, 0xb85, 0xe66, 0x1333,
};
extern "C" char data_ov003_02234024[0x24] = "/fg/tree/tree_tex/tree_deadf.nsbtx";
extern "C" const u32 data_ov003_0222f268[3] = {
    2, 0xb0001, 0x171,
};
extern "C" char data_ov003_02233218[0x1c] = "/fg/eff_tree/anm_c03s.nsbmd";
extern "C" u32 data_ov003_02232708[2] = {
    (u32)data_ov003_0222f064, (u32)data_ov003_0222f19c,
};
extern "C" char data_ov003_02233234[0x1c] = "/fg/eff_tree/anm_c04s.nsbmd";
extern "C" char data_ov003_02234048[0x24] = "/fg/tree/tree_tex/tree_babys.nsbtx";
extern "C" const u32 data_ov003_0222f364[3] = {
    8, 0x80005, 0xe1,
};
extern "C" const u32 data_ov003_0222f28c[3] = {
    2, 0x140001, 0x19a,
};
extern "C" char data_ov003_02233250[0x1c] = "/fg/eff_tree/anm_p01w.nsbmd";
extern "C" char data_ov003_022344e0[0x28] = "/fg/tree/tree_pal/tree_baby_setA.nsbtx";
extern "C" char data_ov003_022340d8[0x24] = "/fg/tree/cedar_tex/cedar_03w.nsbtx";
extern "C" u32 data_ov003_02232634[1] = {
    (u32)data_ov003_02232cdc,
};
extern "C" char data_ov003_0223326c[0x1c] = "/fg/eff_tree/anm_p03w.nsbmd";
extern "C" char data_ov003_02233560[0x20] = "/fg/eff_tree/shakeL_04_2.nsbca";
extern "C" char data_ov003_022345a8[0x2c] = "/fg/flower/suzuran/suzuran_palette.nsbtx";
extern "C" const u32 data_ov003_0222f2f8[3] = {
    8, 0xe0005, 0x15c,
};
extern "C" char data_ov003_022340fc[0x24] = "/fg/tree/cedar_tex/cedar_04w.nsbtx";
extern "C" const u32 data_ov003_0222f304[3] = {
    0x1a, 0x18000a, 0x8f,
};
extern "C" char data_ov003_02234508[0x28] = "/fg/tree/tree_pal/tree_baby_setB.nsbtx";
extern "C" u32 data_ov003_02232648[1] = {
    (u32)data_ov003_02232e7c,
};
extern "C" u32 data_ov003_02232798[2] = {
    (u32)data_ov003_0222f184, (u32)data_ov003_0222f394,
};
extern "C" const u32 data_ov003_0222f31c[3] = {
    0x12, 0x8000f, 0xa4,
};
extern "C" u32 data_ov003_02232b88[4] = {
    0, (u32)data_ov003_022326c0, (u32)data_ov003_02232810, (u32)data_ov003_02232718,
};
// (registration node 0x2235954 is created with the object below)
FxVec3 sBalloonSplashPos;   // __sinit: registered destructor
extern "C" const u32 data_ov003_0222f3a0[3] = {
    8, 0xe0005, 0x15c,
};
extern "C" char data_ov003_022332c0[0x1c] = "/fg/eff_tree/anm_p02s.nsbmd";
extern "C" u32 data_ov003_022326d0[2] = {
    (u32)data_ov003_0222f454, (u32)data_ov003_0222f40c,
};
extern "C" char data_ov003_022332dc[0x1c] = "/fg/eff_tree/anm_p03s.nsbmd";
extern "C" char data_ov003_02234120[0x24] = "/fg/tree/cedar_tex/cedar_01s.nsbtx";
extern "C" char data_ov003_022332f8[0x1c] = "/fg/eff_tree/anm_p04s.nsbmd";
extern "C" const u32 data_ov003_0222f4e0[6] = {
    0xffffef00, 0x2800, 0xffffff00, 0x1100, 0x3000, 0xfffff800,
};
extern "C" char data_ov003_02234530[0x28] = "/fg/tree/tree_pal/tree_baby_setC.nsbtx";
extern "C" u32 data_ov003_02232738[2] = {
    (u32)data_ov003_0222f1d8, (u32)data_ov003_0222f448,
};
extern "C" u32 data_ov003_02232638[1] = {
    (u32)data_ov003_02234240,
};
u8 sFieldObjectModelHeapBuf[0x21400];
extern "C" char data_ov003_02234558[0x28] = "/fg/tree/cedar_pal/cedar_baby_set.nsbtx";
extern "C" const u32 data_ov003_0222f3e8[3] = {
    2, 0x1c0001, 0x266,
};
extern "C" u32 data_ov003_022328bc[3] = {
    (u32)data_ov003_02232b28, (u32)data_ov003_02232b58, (u32)data_ov003_02232b58,
};
extern "C" u32 data_ov003_02232928[3] = {
    (u32)data_ov003_02232c50, (u32)data_ov003_02232c28, (u32)data_ov003_02232c3c,
};
extern "C" char data_ov003_0223418c[0x24] = "/fg/tree/cedar_tex/cedar_04s.nsbtx";
extern "C" u32 data_ov003_02232728[2] = {
    (u32)data_ov003_0222f148, (u32)data_ov003_0222f328,
};
extern "C" const u32 data_ov003_0222f40c[3] = {
    0x13, 0x230004, 0x214,
};
extern "C" u32 data_ov003_02232688[2] = {
    (u32)data_ov003_0222f274, (u32)data_ov003_0222f304,
};
extern "C" const u32 data_ov003_0222f490[3] = {
    0x13, 0x1c0006, 0x28f,
};
extern "C" u32 data_ov003_022335c0[8] = {
    1, 0, 2, 2, 3, 3, 3, 3,
};
extern "C" char data_ov003_022341f8[0x24] = "/fg/tree/palm_tex/palm_babys.nsbtx";
extern "C" const u32 data_ov003_0222f4a8[4] = {
    7, 7, 7, 0xa,
};
extern "C" char data_ov003_02233384[0x1c] = "/fg/eff_tree/shake_04.nsbca";
extern "C" char data_ov003_0223421c[0x24] = "/fg/tree/palm_tex/palm_deads.nsbtx";
extern "C" u32 data_ov003_02232788[2] = {
    (u32)data_ov003_02232e98, (u32)data_ov003_02233020,
};
extern "C" u32 sFieldObjectLoaders[9] = {
    (u32)FieldObj_LoadTrees, (u32)FieldObj_LoadFlowers, (u32)FieldObj_LoadGrass, (u32)FieldObj_LoadStones,
    (u32)FieldObj_LoadHoles, (u32)FieldObj_LoadCracks, (u32)FieldObj_LoadStumps, (u32)FieldObj_LoadTurnips,
    (u32)FieldObj_LoadDesigns,
};
extern "C" const u32 data_ov003_0222f4f8[6] = {
    0xfffff900, 0x2633, 0xfffffe33, 0x480, 0x20b3, 0xffffff80,
};
extern "C" const u32 data_ov003_0222f1cc[3] = {
    1, 0x80001, 0x8f,
};
extern "C" u32 data_ov003_022326f8[2] = {
    (u32)data_ov003_0222f22c, (u32)data_ov003_0222f10c,
};
extern "C" char data_ov003_02234288[0x28] = "/fg/flower/rafflesia/rafflesia.nsbtx";
extern "C" u32 data_ov003_022328d4[3] = {
    (u32)data_ov003_02232de4, (u32)data_ov003_02232dfc, (u32)data_ov003_02232dfc,
};
extern "C" u32 data_ov003_02232904[3] = {
    (u32)data_ov003_02232d9c, (u32)data_ov003_02232db4, (u32)data_ov003_02232dcc,
};
extern "C" char data_ov003_022335e0[0x24] = "/fg/flower/suzuran/suzuran.nsbtx";
extern "C" char data_ov003_02233604[0x24] = "/fg/flower/suzuran/suzuran.nsbmd";
extern "C" char data_ov003_02232978[0x10] = "palm02_stamp";
extern "C" char data_ov003_02232868[0xc] = "obj_stnEs";
extern "C" char data_ov003_02233628[0x24] = "/fg/eff_tree/cutL_02_1unit.nsbca";
extern "C" const u32 data_ov003_0222f13c[3] = {
    2, 0x1a0001, 0x200,
};
extern "C" const u32 data_ov003_0222f430[3] = {
    2, 0xc0001, 0x51f,
};
extern "C" const u32 data_ov003_0222f130[3] = {
    5, 0xe0001, 0x733,
};
extern "C" char data_ov003_02233694[0x24] = "/fg/tree/tree_mdl/tree_03w.nsbmd";
extern "C" char data_ov003_02232850[0xc] = "obj_stnBs";
extern "C" char data_ov003_02232e44[0x1c] = "/fg/stone/obj_stnw.nsbmd";
extern "C" char data_ov003_022336b8[0x24] = "/fg/tree/tree_mdl/tree_04w.nsbmd";
extern "C" char data_ov003_02232e60[0x1c] = "/fg/stone/obj_stns.nsbmd";
extern "C" char data_ov003_02234300[0x28] = "/fg/tree/cedar_mdl/cedar_deadw.nsbmd";
extern "C" char data_ov003_02232e7c[0x1c] = "/fg/hole/obj_crack.nsbmd";
extern "C" u32 data_ov003_02232680[2] = {
    (u32)data_ov003_0222f400, (u32)data_ov003_0222f358,
};
extern "C" const u32 data_ov003_0222f49c[3] = {
    4, 0x1e0001, 0x666,
};
extern "C" char data_ov003_02233724[0x24] = "/fg/tree/tree_mdl/tree_03f.nsbmd";
extern "C" const u32 data_ov003_0222f2e0[3] = {
    0x1a, 0xf001b, 0xa4,
};
extern "C" char data_ov003_02233748[0x24] = "/fg/tree/tree_mdl/tree_04f.nsbmd";
extern "C" u32 data_ov003_022327c8[2] = {
    (u32)data_ov003_0222f31c, (u32)data_ov003_0222f310,
};
extern "C" u32 data_ov003_02232c28[5] = {
    (u32)data_ov003_02232a98, (u32)data_ov003_02232bb8, (u32)data_ov003_02232b98, (u32)data_ov003_02232a38,
    (u32)data_ov003_02232a68,
};
extern "C" const u32 data_ov003_0222f340[3] = {
    0x13, 0xb0006, 0x1ec,
};
extern "C" char data_ov003_022337b4[0x24] = "/fg/tree/tree_mdl/tree_03s.nsbmd";
extern "C" u32 data_ov003_02232a48[4] = {
    (u32)data_ov003_022345a8, (u32)data_ov003_022345d4, 0, 0,
};
extern "C" char data_ov003_022337d8[0x24] = "/fg/tree/tree_mdl/tree_04s.nsbmd";
extern "C" u32 data_ov003_02232650[1] = {
    (u32)data_ov003_022334a0,
};
extern "C" const u32 data_ov003_0222f3ac[3] = {
    2, 0xa0001, 0x200,
};
extern "C" const u32 data_ov003_0222f1e4[3] = {
    3, 0x280001, 0x23d,
};
extern "C" const u32 data_ov003_0222f298[3] = {
    0x23, 0x26, 0x28,
};
extern "C" char data_ov003_02234350[0x28] = "/fg/tree/cedar_mdl/cedar_deads.nsbmd";
extern "C" char data_ov003_02233440[0x20] = "/fg/flower/tulip/tulip.nsbtx";
extern "C" const u32 data_ov003_0222f04c[3] = {
    1, 0x80001, 0x8f,
};
extern "C" char data_ov003_0223388c[0x24] = "/fg/tree/palm_mdl/palm_03w.nsbmd";
extern "C" u32 data_ov003_02232808[2] = {
    (u32)data_ov003_0222f1cc, 0,
};
extern "C" char data_ov003_02232f40[0x1c] = "/fg/eff_tree/cutL_03.nsbca";
extern "C" const u32 data_ov003_0222f07c[3] = {
    4, 0x230001, 0x666,
};
extern "C" char data_ov003_02233940[0x24] = "/fg/tree/palm_mdl/palm_04s.nsbmd";
extern "C" const u32 data_ov003_0222f1a8[3] = {
    8, 0xa0005, 0xe1,
};
extern "C" char data_ov003_02233368[0x1c] = "/fg/eff_tree/shake_03.nsbca";
extern "C" u32 data_ov003_02232934[3] = {
    (u32)data_ov003_02232e14, (u32)data_ov003_02232e2c, (u32)data_ov003_02232e2c,
};
extern "C" char data_ov003_022329d8[0x10] = "cedar03_stamp";
extern "C" char data_ov003_02233460[0x20] = "/fg/flower/pansy/pansy.nsbtx";
extern "C" u32 data_ov003_022326d8[2] = {
    (u32)data_ov003_0222f0d0, (u32)data_ov003_0222f3b8,
};
extern "C" char data_ov003_02233a60[0x24] = "/fg/tree/tree_tex/tree_03f.nsbtx";
extern "C" u32 data_ov003_02232740[2] = {
    (u32)data_ov003_0222f118, (u32)data_ov003_0222f280,
};
extern "C" const u32 data_ov003_0222f2d4[3] = {
    0x13, 0x12000a, 0x1ec,
};
extern "C" char data_ov003_02232a08[0x10] = "cedar04_stamp";
extern "C" const u32 data_ov003_0222f388[3] = {
    0x1a, 0x11000f, 0x52,
};
extern "C" char data_ov003_02233acc[0x24] = "/fg/tree/tree_tex/tree_02s.nsbtx";
extern "C" const u32 data_ov003_0222f208[3] = {
    2, 0x190001, 0x171,
};
extern "C" u32 data_ov003_02232ab8[4] = {
    (u32)data_ov003_02233090, (u32)data_ov003_022330ac, (u32)data_ov003_022330c8, (u32)data_ov003_022330e4,
};
extern "C" u32 data_ov003_02232a38[4] = {
    0, (u32)data_ov003_022326f0, (u32)data_ov003_02232678, (u32)data_ov003_022327d0,
};
extern "C" u32 data_ov003_02232940[3] = {
    (u32)data_ov003_02233ca0, (u32)data_ov003_02233cc4, (u32)data_ov003_02233ce8,
};
extern "C" u32 data_ov003_02232d0c[6] = {
    (u32)data_ov003_02233d78, (u32)data_ov003_02233bec, (u32)data_ov003_02233700, (u32)data_ov003_02233724,
    (u32)data_ov003_02233748, (u32)data_ov003_02233d9c,
};
extern "C" char data_ov003_02233ba4[0x24] = "/fg/tree/palm_tex/palm_03w.nsbtx";
extern "C" u32 data_ov003_022327c0[2] = {
    (u32)data_ov003_0222f2a4, (u32)data_ov003_0222f3c4,
};
extern "C" char data_ov003_022334e0[0x20] = "/fg/eff_tree/shakeL_02_1.nsbca";
extern "C" char data_ov003_02233c34[0x24] = "/fg/tree/palm_tex/palm_02s.nsbtx";
extern "C" u32 data_ov003_02232720[2] = {
    (u32)data_ov003_02232690, (u32)data_ov003_0223285c,
};
extern "C" const u32 data_ov003_0222f100[3] = {
    2, 0xb0001, 0x266,
};
extern "C" const u32 data_ov003_0222f484[3] = {
    3, 0x190001, 0x59a,
};
extern "C" u32 data_ov003_02232a68[4] = {
    (u32)data_ov003_02232708, (u32)data_ov003_02232730, (u32)data_ov003_02232780, (u32)data_ov003_02232750,
};
extern "C" u32 data_ov003_02232758[2] = {
    (u32)data_ov003_0222f1b4, (u32)data_ov003_0222f388,
};
extern "C" const u32 data_ov003_0222f040[3] = {
    3, 0xc0001, 0x59a,
};
extern "C" char data_ov003_02233ca0[0x24] = "/fg/tree/tree_pal/tree_setA.nsbtx";
extern "C" char data_ov003_022343c8[0x28] = "/fg/tree/cedar_tex/cedar_babys.nsbtx";
extern "C" const u32 data_ov003_0222f124[3] = {
    2, 0x160001, 0x571,
};
extern "C" const u32 data_ov003_0222f088[3] = {
    5, 0x230001, 0x6e1,
};
extern "C" char data_ov003_02233074[0x1c] = "/fg/eff_tree/anm_t04w.nsbmd";
extern "C" const u32 data_ov003_0222f19c[3] = {
    2, 0x140001, 0x4cd,
};
extern "C" const u32 data_ov003_0222f094[3] = {
    4, 0x230001, 0x63d,
};
extern "C" u32 data_ov003_02232d54[6] = {
    (u32)data_ov003_02234328, (u32)data_ov003_02233e98, (u32)data_ov003_02233ebc, (u32)data_ov003_02233ee0,
    (u32)data_ov003_02233f04, (u32)data_ov003_02234350,
};
extern "C" u32 data_ov003_022328ec[3] = {
    (u32)data_ov003_02232c14, (u32)data_ov003_02232bec, (u32)data_ov003_02232bec,
};
extern "C" char data_ov003_022330ac[0x1c] = "/fg/eff_tree/anm_t02f.nsbmd";
extern "C" char data_ov003_02233d54[0x24] = "/fg/tree/tree_mdl/tree_deadw.nsbmd";
extern "C" char data_ov003_022330e4[0x1c] = "/fg/eff_tree/anm_t04f.nsbmd";
extern "C" const u32 data_ov003_0222f0dc[3] = {
    0x1a, 0x250008, 0x15c,
};
extern "C" char data_ov003_02233d9c[0x24] = "/fg/tree/tree_mdl/tree_deadf.nsbmd";
extern "C" const u32 data_ov003_0222f1b4[3] = {
    0x12, 0x8000f, 0x52,
};
extern "C" const u32 sItemPopScaleXZ[17] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xc00, 0x1000, 0x1600, 0x1300, 0x1000,
};
extern "C" char data_ov003_02234490[0x28] = "/fg/flower/pansy/pansy_palette.nsbtx";
extern "C" char data_ov003_02232820[0xc] = "obj_stnDs";
extern "C" char data_ov003_0223318c[0x1c] = "/fg/eff_tree/anm_c02w.nsbmd";
extern "C" const u32 data_ov003_0222f424[3] = {
    2, 0x140001, 0x51f,
};
extern "C" u32 data_ov003_022326e8[2] = {
    (u32)data_ov003_02233604, (u32)data_ov003_022342b0,
};
extern "C" char data_ov003_022331a8[0x1c] = "/fg/eff_tree/anm_c03w.nsbmd";
extern "C" char data_ov003_022344b8[0x28] = "/fg/flower/cosmos/cosmos_palette.nsbtx";
extern "C" char data_ov003_02233ee0[0x24] = "/fg/tree/cedar_mdl/cedar_03s.nsbmd";
extern "C" char data_ov003_02233f4c[0x24] = "/fg/tree/palm_mdl/palm_deadw.nsbmd";
extern "C" const u32 data_ov003_0222f0c4[3] = {
    0x13, 0x250004, 0x2e1,
};
extern "C" u32 data_ov003_02232b08[4] = {
    0, (u32)data_ov003_02232680, (u32)data_ov003_022326e0, (u32)data_ov003_02232710,
};
extern "C" const u32 data_ov003_0222f43c[3] = {
    5, 0xe0001, 0x6e1,
};
extern "C" char data_ov003_02233f94[0x24] = "/fg/tree/palm_mdl/palm_deads.nsbmd";
extern "C" const u32 data_ov003_0222f34c[3] = {
    8, 0xc0005, 0x15c,
};
extern "C" u32 data_ov003_02232b48[4] = {
    (u32)TreeLeafFx_OnEffectInit, (u32)TreeLeafFx_OnEffectStep, (u32)TreeLeafFx_OnEffectInit, (u32)TreeLeafFx_OnEffectUpdate,
};
extern "C" char data_ov003_02234000[0x24] = "/fg/tree/tree_tex/tree_babyf.nsbtx";
extern "C" u32 data_ov003_022327d0[2] = {
    (u32)data_ov003_0222f1c0, (u32)data_ov003_0222f0c4,
};
extern "C" u32 data_ov003_02232778[2] = {
    (u32)data_ov003_022335e0, (u32)data_ov003_02234288,
};
extern "C" char data_ov003_0223406c[0x24] = "/fg/tree/tree_tex/tree_deads.nsbtx";
extern "C" u32 data_ov003_02232e14[6] = {
    (u32)data_ov003_022341b0, (u32)data_ov003_02233b5c, (u32)data_ov003_02233b80, (u32)data_ov003_02233ba4,
    (u32)data_ov003_02233bc8, (u32)data_ov003_022341d4,
};
extern "C" u32 data_ov003_02232818[2] = {
    (u32)data_ov003_0222f340, (u32)data_ov003_0222f334,
};
extern "C" const u32 data_ov003_0222f758[46] = {
    0x13, 0x16, 0x14, 0x16, 0x15, 0x16, 0, 0x16, 1, 0x16, 2, 0x16, 3, 0x16, 4, 0x16, 5, 0x16, 6, 0x16, 7, 0x16, 8,
    0x16, 9, 0x16, 0xa, 0x16, 0xb, 0x16, 0xc, 0x16, 0xd, 0x16, 0xe, 0x16, 0xf, 0x16, 0x10, 0x16, 0x11, 0x16, 0x12,
    0x16, 0x13, 0x16,
};
extern "C" const u32 data_ov003_0222f2bc[3] = {
    3, 0x250001, 0x2cd,
};
extern "C" u32 data_ov003_02232810[2] = {
    (u32)data_ov003_0222f1a8, 0,
};
extern "C" char data_ov003_022332a4[0x1c] = "/fg/eff_tree/anm_p01s.nsbmd";
extern "C" u32 data_ov003_02232b68[4] = {
    (u32)data_ov003_022326b0, (u32)data_ov003_02232700, (u32)data_ov003_022327f0, (u32)data_ov003_022327f8,
};
extern "C" u32 data_ov003_02232e2c[6] = {
    (u32)data_ov003_022341f8, (u32)data_ov003_02233c10, (u32)data_ov003_02233c34, (u32)data_ov003_02233c58,
    (u32)data_ov003_02233c7c, (u32)data_ov003_0223421c,
};
extern "C" const u32 data_ov003_0222f4c8[6] = {
    0x10101, 0, 0, 0, 0, 0x10000,
};
extern "C" u32 data_ov003_02232b98[4] = {
    (u32)data_ov003_022327a0, (u32)data_ov003_022327c8, (u32)data_ov003_02232728, (u32)data_ov003_022326b8,
};
u8 sFieldObjectAnimHeap[0x4];
extern "C" char data_ov003_02234144[0x24] = "/fg/tree/cedar_tex/cedar_02s.nsbtx";
extern "C" u32 data_ov003_022328b0[3] = {
    (u32)data_ov003_02232e44, (u32)data_ov003_02232e60, (u32)data_ov003_02232e60,
};
extern "C" u32 data_ov003_02232bb8[4] = {
    0, (u32)data_ov003_022326c8, (u32)data_ov003_02232748, (u32)data_ov003_02232760,
};
extern "C" char data_ov003_022335a0[0x20] = "/fg/flower/cosmos/cosmos.nsbtx";
extern "C" const u32 data_ov003_0222f3d0[3] = {
    1, 0x60001, 0x8f,
};
extern "C" u32 data_ov003_02232bc8[4] = {
    (u32)data_ov003_02233440, (u32)data_ov003_02233460, (u32)data_ov003_022335a0, (u32)data_ov003_02232fb0,
};
extern "C" u32 data_ov003_022326b8[2] = {
    (u32)data_ov003_0222f370, (u32)data_ov003_0222f0dc,
};
extern "C" char data_ov003_022341b0[0x24] = "/fg/tree/palm_tex/palm_babyw.nsbtx";
extern "C" char data_ov003_022341d4[0x24] = "/fg/tree/palm_tex/palm_deadw.nsbtx";
extern "C" u32 data_ov003_02232c50[5] = {
    (u32)data_ov003_02232b88, (u32)data_ov003_02232ae8, (u32)data_ov003_02232a78, (u32)data_ov003_02232b08,
    (u32)data_ov003_02232b68,
};
extern "C" char data_ov003_02234580[0x28] = "/fg/tree/cedar_pal/obj_x_cedar_pl.nsbtx";
extern "C" const u32 data_ov003_0222f460[3] = {
    2, 0x210001, 0x200,
};
extern "C" const u32 data_ov003_0222f510[9] = {
    0xffffef00, 0x2800, 0xffffff00, 0x1100, 0x3000, 0xfffff800, 0xfffffd00, 0x3e00, 0xfffff100,
};
extern "C" u32 data_ov003_02232bd8[5] = {
    (u32)data_ov003_02232c64, (u32)data_ov003_02232c7c, (u32)data_ov003_02232c94, (u32)data_ov003_02232cac,
    (u32)data_ov003_02232cc4,
};
extern "C" char data_ov003_02232958[0x10] = "palm01_stamp";
extern "C" char data_ov003_02232968[0x10] = "tree04_stamp";
extern "C" char data_ov003_022342b0[0x28] = "/fg/flower/rafflesia/rafflesia.nsbmd";
extern "C" char data_ov003_0223364c[0x24] = "/fg/tree/tree_mdl/tree_01w.nsbmd";
extern "C" char data_ov003_02233670[0x24] = "/fg/tree/tree_mdl/tree_02w.nsbmd";
extern "C" const u32 data_ov003_0222f190[3] = {
    5, 0x280001, 0x852,
};
extern "C" u32 data_ov003_0223291c[3] = {
    (u32)data_ov003_0222f510, (u32)data_ov003_0222f4e0, (u32)data_ov003_0222f4f8,
};
extern "C" const u32 data_ov003_0222f6a0[23] = {
    9, 9, 9, 0, 1, 1, 1, 2, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 9,
};
extern "C" u32 data_ov003_022327a8[2] = {
    (u32)data_ov003_0222f094, (u32)data_ov003_0222f0a0,
};
extern "C" char data_ov003_02232e98[0x1c] = "/fg/grass/redTurnip.nsbmd";
extern "C" const u32 data_ov003_0222f058[3] = {
    3, 0xc0001, 0x614,
};
extern "C" const u32 data_ov003_0222f070[3] = {
    3, 0x1e0001, 0x614,
};
extern "C" char data_ov003_02232838[0xc] = "obj_stnCs";
extern "C" char data_ov003_02232eec[0x1c] = "/fg/hole/obj_hole_pl.nsbtx";
extern "C" u32 data_ov003_022328a4[3] = {
    (u32)data_ov003_02232d6c, (u32)data_ov003_02232d84, (u32)data_ov003_02232d84,
};
extern "C" u32 data_ov003_02232b78[4] = {
    (u32)TreeLeafFx_OnEffectInit, (u32)TreeLeafFx_OnEffectStep, (u32)TreeLeafFx_OnEffectInit, (u32)TreeLeafFx_OnEffectUpdate,
};
extern "C" u32 data_ov003_02232c14[5] = {
    (u32)data_ov003_02232880, (u32)data_ov003_02232844, (u32)data_ov003_0223288c, (u32)data_ov003_02232874,
    (u32)data_ov003_0223282c,
};
extern "C" const u32 data_ov003_0222f454[3] = {
    0x13, 0xe0004, 0x214,
};
extern "C" u32 data_ov003_022326a0[2] = {
    (u32)data_ov003_0222f0f4, (u32)data_ov003_0222f160,
};
extern "C" char data_ov003_02233964[0x24] = "/fg/eff_tree/cutR_03_1unit.nsbca";
extern "C" const u32 data_ov003_0222f3f4[3] = {
    0x12, 0x7001b, 0x8f,
};
extern "C" char data_ov003_022339f4[0x24] = "/fg/tree/tree_tex/tree_04w.nsbtx";
extern "C" u32 data_ov003_022328f8[3] = {
    (u32)data_ov003_02232b18, (u32)data_ov003_02232af8, (u32)data_ov003_02232af8,
};
extern "C" const u32 data_ov003_0222f274[3] = {
    0x12, 0xa000a, 0x8f,
};
extern "C" const u32 data_ov003_0222f0b8[3] = {
    5, 0x1e0001, 0x733,
};
extern "C" u32 data_ov003_02232af8[4] = {
    (u32)data_ov003_022331e0, (u32)data_ov003_022331fc, (u32)data_ov003_02233218, (u32)data_ov003_02233234,
};
extern "C" char data_ov003_02233b38[0x24] = "/fg/eff_tree/cutR_04_1unit.nsbca";
extern "C" u32 data_ov003_02232cf4[6] = {
    (u32)data_ov003_02233d30, (u32)data_ov003_0223364c, (u32)data_ov003_02233670, (u32)data_ov003_02233694,
    (u32)data_ov003_022336b8, (u32)data_ov003_02233d54,
};
extern "C" char data_ov003_022330c8[0x1c] = "/fg/eff_tree/anm_t03f.nsbmd";
extern "C" const u32 data_ov003_0222f184[3] = {
    0x12, 0xe0008, 0x15c,
};
extern "C" char data_ov003_02232fb0[0x1c] = "/fg/flower/rose/rose.nsbtx";
extern "C" char data_ov003_02232fcc[0x1c] = "/fg/eff_tree/cutR_03.nsbca";
extern "C" char data_ov003_02232fe8[0x1c] = "/fg/eff_tree/anm_t01s.nsbmd";
extern "C" u32 data_ov003_02232d24[6] = {
    (u32)data_ov003_02233dc0, (u32)data_ov003_0223376c, (u32)data_ov003_02233790, (u32)data_ov003_022337b4,
    (u32)data_ov003_022337d8, (u32)data_ov003_02233de4,
};
extern "C" const u32 data_ov003_0222f064[3] = {
    2, 0xc0001, 0x4cd,
};
extern "C" char data_ov003_02233cc4[0x24] = "/fg/tree/tree_pal/tree_setB.nsbtx";
extern "C" const u32 data_ov003_0222f3dc[3] = {
    0x13, 0x280004, 0x2e1,
};
extern "C" const u32 data_ov003_0222f1f0[3] = {
    0x13, 0xa000a, 0x1ec,
};
extern "C" u32 data_ov003_02232d6c[6] = {
    (u32)data_ov003_02233f28, (u32)data_ov003_02233844, (u32)data_ov003_02233868, (u32)data_ov003_0223388c,
    (u32)data_ov003_022338b0, (u32)data_ov003_02233f4c,
};
extern "C" const u32 data_ov003_0222f0f4[3] = {
    2, 0xa0001, 0x171,
};
extern "C" char data_ov003_02233dc0[0x24] = "/fg/tree/tree_mdl/tree_babys.nsbmd";
extern "C" char data_ov003_02233154[0x1c] = "/fg/eff_tree/anm_p02w.nsbmd";
extern "C" char data_ov003_02233e08[0x24] = "/fg/tree/cedar_mdl/cedar_01w.nsbmd";
extern "C" const u32 data_ov003_0222f1fc[3] = {
    0x13, 0x14000a, 0x28f,
};
extern "C" u32 data_ov003_022327e8[2] = {
    (u32)data_ov003_0222f3d0, 0,
};
extern "C" const u32 sFieldObjShapeTable[197] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x6101000, 0, 0, 0, 0, 0, 0, 0, 0x600, 0x6201006,
    0x10062010, 0x20100620, 0x6101006, 0x10061010, 0x10100610, 0x6000006, 0x10062010, 0x20100620, 0x6201006,
    0x10062010, 0x20100620, 0x6000006, 0x10062010, 0x20100620, 0x6201006, 0x10062010, 0x20100620, 0x6000006,
    0x10062010, 0x20100620, 0x6201006, 0x10062010, 0x20100620, 0x6000006, 0x10062010, 0x20100620, 0x6201006,
    0x10062010, 0x20100620, 0x6000006, 0x10062010, 0x20100620, 0x6201006, 0x10062010, 0x20100620, 0x6000006,
    0x10062010, 0x20100620, 0x6201006, 0x60000, 0x20100600, 0x6201006, 0x10062010, 0x10100620, 0x6101006, 0x10061010,
    0x20100610, 0x6201006, 0x10062010, 0x20100620, 0x6201006, 0x10062010, 0x620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0x10000000, 0x610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x6000000, 0x10060000, 0x20100620, 0x6201006,
    0x10062010, 0x20100620, 0x6201006, 0x10061010, 0x10100610, 0x6101006, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x4101000,
    0x10041010, 0x10100410, 0x4101004, 0x10041010, 0x10100410, 0x4101004, 0x10041010, 0x10100410, 0x4101004,
    0x10041010, 0x10100410, 0x4101004, 0x10041010, 0x10100410, 0x4101004, 0x10041010, 0x10100410, 0x4101004,
    0x10020410, 0x204, 0x6101000, 0x10061010, 0x10100610, 6, 4, 4,
};
extern "C" u32 data_ov003_02232de4[6] = {
    (u32)data_ov003_02234378, (u32)data_ov003_02234090, (u32)data_ov003_022340b4, (u32)data_ov003_022340d8,
    (u32)data_ov003_022340fc, (u32)data_ov003_022343a0,
};
extern "C" u32 data_ov003_02232b38[4] = {
    0, (u32)data_ov003_022326a0, (u32)data_ov003_02232698, (u32)data_ov003_022327c0,
};
extern "C" char data_ov003_02233fdc[0x24] = "/fg/tree/tree_tex/tree_deadw.nsbtx";
extern "C" char data_ov003_022331fc[0x1c] = "/fg/eff_tree/anm_c02s.nsbmd";
extern "C" char data_ov003_02234090[0x24] = "/fg/tree/cedar_tex/cedar_01w.nsbtx";
extern "C" u32 data_ov003_02232790[2] = {
    (u32)data_ov003_0222f3ac, (u32)data_ov003_0222f13c,
};
extern "C" u32 data_ov003_02232780[2] = {
    (u32)data_ov003_0222f07c, (u32)data_ov003_0222f49c,
};
extern "C" const u32 sItemPopScaleY[17] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x1600, 0x1100, 0xc00, 0xe00, 0x1000,
};
extern "C" char data_ov003_02233580[0x20] = "/fg/eff_tree/shakeL_02_2.nsbca";
extern "C" u32 data_ov003_022327a0[2] = {
    (u32)data_ov003_0222f2ec, (u32)data_ov003_0222f2e0,
};
extern "C" const u32 data_ov003_0222f370[3] = {
    0x12, 0xe0008, 0x15c,
};
extern "C" const u32 data_ov003_0222f0e8[3] = {
    8, 0xa0005, 0xe1,
};
extern "C" char data_ov003_02233314[0x1c] = "/fg/eff_tree/anm_t03w.nsbmd";
extern "C" const u32 data_ov003_0222f400[3] = {
    0x13, 0xa000a, 0x28f,
};
extern "C" char data_ov003_0223334c[0x1c] = "/fg/eff_tree/shake_02.nsbca";
extern "C" const u32 data_ov003_0222f448[3] = {
    0x1a, 0x1e000a, 0xe1,
};
extern "C" const u32 data_ov003_0222f4b8[4] = {
    (u32)sFieldObjShapeTable, 0x1030000, 0, 0,
};
extern "C" const u32 data_ov003_0222f16c[3] = {
    3, 0xc0001, 0x59a,
};
extern "C" char data_ov003_02232880[0xc] = "obj_stnAw";
extern "C" char data_ov003_02232844[0xc] = "obj_stnBw";
extern "C" char data_ov003_022336dc[0x24] = "/fg/eff_tree/cutL_03_1unit.nsbca";
extern "C" u32 data_ov003_022326f0[2] = {
    (u32)data_ov003_0222f46c, (u32)data_ov003_0222f1fc,
};
extern "C" char data_ov003_0223376c[0x24] = "/fg/tree/tree_mdl/tree_01s.nsbmd";
extern "C" const u32 data_ov003_0222f310[3] = {
    0x1a, 0x14000f, 0xa4,
};
extern "C" u32 data_ov003_022328c8[3] = {
    (u32)data_ov003_022344e0, (u32)data_ov003_02234508, (u32)data_ov003_02234530,
};
extern "C" char data_ov003_02233844[0x24] = "/fg/tree/palm_mdl/palm_01w.nsbmd";
extern "C" char data_ov003_022338f8[0x24] = "/fg/tree/palm_mdl/palm_02s.nsbmd";
extern "C" char data_ov003_022339d0[0x24] = "/fg/tree/tree_tex/tree_03w.nsbtx";
extern "C" const u32 data_ov003_0222f0ac[3] = {
    5, 0xe0001, 0x852,
};
extern "C" u32 data_ov003_022328e0[3] = {
    (u32)data_ov003_02232cf4, (u32)data_ov003_02232d0c, (u32)data_ov003_02232d24,
};
extern "C" char data_ov003_02233b5c[0x24] = "/fg/tree/palm_tex/palm_01w.nsbtx";
extern "C" u32 data_ov003_02232710[2] = {
    (u32)data_ov003_0222f214, (u32)data_ov003_0222f3dc,
};
extern "C" char data_ov003_02232690[0x8] = "tanpopo";
extern "C" char data_ov003_02233c58[0x24] = "/fg/tree/palm_tex/palm_03s.nsbtx";
extern "C" char data_ov003_02233058[0x1c] = "/fg/eff_tree/anm_t02w.nsbmd";
extern "C" const u32 data_ov003_0222f154[3] = {
    0x13, 0xb0006, 0x28f,
};
extern "C" u32 data_ov003_02232644[1] = {
    (u32)data_ov003_02234558,
};
extern "C" char data_ov003_0223311c[0x1c] = "/fg/eff_tree/anm_t03s.nsbmd";
extern "C" char data_ov003_02233de4[0x24] = "/fg/tree/tree_mdl/tree_deads.nsbmd";
extern "C" u32 data_ov003_02232678[2] = {
    (u32)data_ov003_0222f154, (u32)data_ov003_0222f490,
};
extern "C" u32 data_ov003_02232ae8[4] = {
    0, (u32)data_ov003_02232790, (u32)data_ov003_02232660, (u32)data_ov003_022327b0,
};
extern "C" const u32 data_ov003_0222f478[3] = {
    4, 0x230001, 0x70a,
};
extern "C" u32 data_ov003_02232698[2] = {
    (u32)data_ov003_0222f268, (u32)data_ov003_0222f208,
};
extern "C" u32 data_ov003_02232700[2] = {
    (u32)data_ov003_0222f058, (u32)data_ov003_0222f070,
};
extern "C" u32 data_ov003_02232730[2] = {
    (u32)data_ov003_0222f16c, (u32)data_ov003_0222f178,
};
extern "C" u32 data_ov003_02232658[2] = {
    (u32)data_ov003_0222f3f4, (u32)data_ov003_0222f25c,
};
extern "C" u32 data_ov003_022326c8[2] = {
    (u32)data_ov003_0222f220, (u32)data_ov003_0222f28c,
};
extern "C" char data_ov003_02233330[0x1c] = "/fg/eff_tree/shake_01.nsbca";
extern "C" char data_ov003_02234240[0x24] = "/fg/tree/cedar_pal/cedar_set.nsbtx";
extern "C" char data_ov003_022342d8[0x28] = "/fg/tree/cedar_mdl/cedar_babyw.nsbmd";
extern "C" char data_ov003_02233700[0x24] = "/fg/tree/tree_mdl/tree_02f.nsbmd";
extern "C" char data_ov003_022329a8[0x10] = "tree02_stamp";
extern "C" char data_ov003_02232c94[0x18] = "/fg/grass/grassC.nsbmd";
extern "C" char data_ov003_02233170[0x1c] = "/fg/eff_tree/anm_c01w.nsbmd";
extern "C" char data_ov003_022329e8[0x10] = "cedar01_stamp";
extern "C" const u32 data_ov003_0222f280[3] = {
    0x1a, 0xc001b, 0x29,
};
extern "C" char data_ov003_02233bc8[0x24] = "/fg/tree/palm_tex/palm_04w.nsbtx";
extern "C" u32 data_ov003_02232748[2] = {
    (u32)data_ov003_0222f100, (u32)data_ov003_0222f3e8,
};
extern "C" char data_ov003_02233d78[0x24] = "/fg/tree/tree_mdl/tree_babyf.nsbmd";
extern "C" char data_ov003_0223282c[0xc] = "obj_stnEw";
extern "C" char data_ov003_022331c4[0x1c] = "/fg/eff_tree/anm_c04w.nsbmd";
extern "C" u32 data_ov003_02232b58[4] = {
    (u32)data_ov003_022332a4, (u32)data_ov003_022332c0, (u32)data_ov003_022332dc, (u32)data_ov003_022332f8,
};
extern "C" char data_ov003_022340b4[0x24] = "/fg/tree/cedar_tex/cedar_02w.nsbtx";
extern "C" char data_ov003_02234168[0x24] = "/fg/tree/cedar_tex/cedar_03s.nsbtx";
extern "C" u32 data_ov003_02232670[2] = {
    (u32)data_ov003_0222f364, 0,
};
extern "C" char data_ov003_022333a0[0x20] = "/fg/eff_tree/shakeS_02.nsbca";
extern "C" u32 data_ov003_022327e0[2] = {
    (u32)data_ov003_0222f0e8, 0,
};
extern "C" char data_ov003_02234378[0x28] = "/fg/tree/cedar_tex/cedar_babyw.nsbtx";
extern "C" char data_ov003_022334c0[0x20] = "/fg/flower/cosmos/cosmos.nsbmd";
extern "C" const u32 data_ov003_0222f334[3] = {
    0x13, 0x190006, 0x1ec,
};
extern "C" u32 data_ov003_02232ad8[4] = {
    0, (u32)data_ov003_022327e8, (u32)data_ov003_02232670, (u32)data_ov003_022327b8,
};
extern "C" const u32 data_ov003_0222f810[69] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0,
};
extern "C" u32 data_ov003_02232ba8[4] = {
    0, (u32)data_ov003_02232770, (u32)data_ov003_02232818, (u32)data_ov003_022326d0,
};
extern "C" u32 data_ov003_02234604[12] = {
    (u32)data_ov003_022329c8, (u32)data_ov003_022329a8, (u32)data_ov003_022329b8, (u32)data_ov003_02232968,
    (u32)data_ov003_022329e8, (u32)data_ov003_022329f8, (u32)data_ov003_022329d8, (u32)data_ov003_02232a08,
    (u32)data_ov003_02232958, (u32)data_ov003_02232978, (u32)data_ov003_02232988, (u32)data_ov003_02232998,
};
extern "C" char data_ov003_02233a3c[0x24] = "/fg/tree/tree_tex/tree_02f.nsbtx";
extern "C" u32 data_ov003_02232640[1] = {
    (u32)data_ov003_02234418,
};
extern "C" u32 data_ov003_02232750[2] = {
    (u32)data_ov003_0222f130, (u32)data_ov003_0222f0b8,
};
extern "C" char data_ov003_022333e0[0x20] = "/fg/flower/pansy/pansy.nsbmd";
// vtable at 0x2234634 (compiler generated)
// vtable at 0x2232c00 (compiler generated)
// ================================================================ functions (descending address)
FieldItemFx::FieldItemFx()
{
    unitX = 0;
    unitZ = 0;
    func_020f440c(seEmitter);
}

FieldItemFx::~FieldItemFx()
{
    func_020f43fc(seEmitter);
}

FieldItemFxTable::~FieldItemFxTable() {}

namespace ns_0221f798 {
extern "C" {
void *FieldObjectManager_Create()
{
    return new FieldObjectManager;
}
}
}

namespace ns_0221f798 {
extern "C" {
u8 *FieldObj_GetShapeRecord(u8 *p)
{
    u8 *r = NULL;
    if (p != NULL) {
        s32 v = *(u16 *)p;
        s32 hi = v & 0xf000;
        s32 tag = hi >> 12;
        s32 lo = v & 0xfff;
        Unk_ov003_0221fda8_Ent *e = data_ov003_0222f4b8;
        for (; e->unk_00 != NULL; e++) {
            if (tag == e->unk_04) {
                if (e->unk_06 > lo) {
                    r = e->unk_00 + lo * 3;
                }
                break;
            }
        }
        if (r != NULL && *r == 0) {
            r = NULL;
        }
    }
    return r;
}
}
}

BOOL FieldObjectShapeQuery::getUnitShape(s32 *a, s32 *b, s32 *c, s32 x, s32 z) {
    using ns_0221f798::gSceneBlockMap;
    using ns_0221f798::BlockMap_GetItemPtr;
    using ns_0221f798::FieldObj_GetShapeRecord;

    void *g = gSceneBlockMap;
    BOOL ok = FALSE;
    if (g != NULL) {
        s32 px = *(volatile s32 *)&x;
        s32 pz = *(volatile s32 *)&z;
        s32 hx = px >> 4;
        s32 hz = pz >> 4;
        u8 *cell = FieldObj_GetShapeRecord((u8 *)BlockMap_GetItemPtr(g, hx, hz, px - (hx << 4), pz - (hz << 4), 0));
        if (cell != NULL && cell[2] != 0) {
            *a = ((s32)cell[0] << 12) >> 4;
            *b = ((s32)cell[1] << 12) >> 4;
            *c = cell[2];
            ok = TRUE;
        }
    }
    return ok;
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadTextureFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n)
{
    void *heap = gCurrentHeap;
    s32 i;
    for (i = 0; i < n; a++, b++, names++, i++) {
        if (*names != 0) {
            *b = (u32)File_LoadAlloc((void *)*names, heap, -4, 0);
            if (*b == 0) {
                return FALSE;
            }
            *a = (u32)NNS_G3dGetTex();
            Gfx3d_LoadTex((void *)*a, 0);
        } else {
            *a = 0;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadPaletteFiles(void *self, u32 *a, u32 *b, u32 *names, s32 n)
{
    void *heap = gCurrentHeap;
    s32 i;
    for (i = 0; i < n; a++, b++, names++, i++) {
        *b = (u32)File_LoadAlloc((void *)*names, heap, -4, 0);
        if (*b == 0) {
            return FALSE;
        }
        *a = (u32)NNS_G3dGetTex();
        Gfx3d_LoadPltt((void *)*a, 0);
    }
    return TRUE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadIconModels(FieldObjectManager *self)
{
    BOOL ok = FALSE;
    if (ModelSet_Load(&self->iconModelSet, (char *)"/fg/icon/icon.nsbmd", sFieldObjectModelHeap)) {
        s32 i;
        for (i = 0; i < 0x49; i++) {
            self->iconModels[i] = (u32)ModelSet_Find(&self->iconModelSet, (void *)Item_GetIconModelName(i, 1));
        }
        ok = TRUE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadStoneModels(FieldObjectManager *self)
{
    BOOL ok = FALSE;
    s32 t = FieldObj_GetSeasonSet(self, 2);
    if (ModelSet_Load(&self->stoneModelSet, data_ov003_022328b0[t], sFieldObjectAnimHeap)) {
        void **p = data_ov003_022328ec[t];
        void *h = &self->stoneModelSet;
        s32 i;
        for (i = 0; i < 5; i++) {
            self->stoneModels[i] = (u32)ModelSet_Find(h, *p);
            p++;
        }
        ok = TRUE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadStones()
{
    return FieldObj_LoadStoneModels((FieldObjectManager *)gFieldObjectManager);
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadStumpModels(FieldObjectManager *self)
{
    BOOL ok = FALSE;
    if (ModelSet_Load(&self->stumpModelSet, (char *)"/fg/tree/stamp/stamp.nsbmd", sFieldObjectModelHeap)) {
        s32 i;
        for (i = 0; i < 12; i++) {
            self->stumpModels[i] = (u32)ModelSet_Find(&self->stumpModelSet, data_ov003_02234604[i]);
        }
        ok = TRUE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadStumps()
{
    return FieldObj_LoadStumpModels((FieldObjectManager *)gFieldObjectManager);
}
}
}

namespace ns_0221f798 {
extern "C" {
s32 FieldObj_GetSeasonSet(void *self, s32 i)
{
    return data_ov003_0222f810[TownState_GetSeasonPeriod()][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetTreeModelPath(void *self, s32 a, s32 i)
{
    return data_ov003_022328e0[FieldObj_GetSeasonSet(self, a)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetTreeAnimModelPath(void *self, s32 a, s32 i)
{
    return data_ov003_0223294c[FieldObj_GetSeasonSet(self, a)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetCedarModelPath(FieldObjectManager *self, s32 i)
{
    return data_ov003_02232910[FieldObj_GetSeasonSet(self, 2)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetCedarAnimModelPath(FieldObjectManager *self, s32 i)
{
    return data_ov003_022328f8[FieldObj_GetSeasonSet(self, 2)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetPalmModelPath(FieldObjectManager *self, s32 i)
{
    return data_ov003_022328a4[FieldObj_GetSeasonSet(self, 2)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
void *FieldObj_GetPalmAnimModelPath(void *self, s32 i)
{
    return data_ov003_022328bc[FieldObj_GetSeasonSet(self, 2)][i];
}
}
}

namespace ns_0221f798 {
extern "C" {
u32 FieldObj_GetTreeTexturePaths(void *self, s32 i)
{
    return data_ov003_02232904[i];
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadTreeTextures(void *self, u32 *a, u32 *b)
{
    s32 j;
    u32 done[3];
    s32 i;
    for (j = 0; j < 3; j++) {
        done[j] = 0;
    }
    for (i = 0; i < 3; i++) {
        s32 t = FieldObj_GetSeasonSet(self, i);
        u32 *d = &done[t];
        if (*d == 0) {
            u32 *pa = a + t * 6;
            u32 *pb = b + t * 6;
            if (!FieldObj_LoadTextureFiles(self, pa, pb, (u32 *)FieldObj_GetTreeTexturePaths(self, t), 6)) {
                return FALSE;
            }
            *d = 1;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadCedarTextures(void *a, u32 *b, u32 *c)
{
    s32 t = FieldObj_GetSeasonSet(a, 2);
    if (FieldObj_LoadTextureFiles(a, b, c, data_ov003_022328d4[t], 6)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadLitCedarTexture(void *a, u32 *b, u32 *c)
{
    BOOL ok = TRUE;
    if (!FieldObj_LoadTextureFiles(a, b, c, data_ov003_02232640, ok)) {
        ok = FALSE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadPalmTextures(void *a, u32 *b, u32 *c)
{
    s32 t = FieldObj_GetSeasonSet(a, 2);
    if (FieldObj_LoadTextureFiles(a, b, c, data_ov003_02232934[t], 6)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadTreePalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e)
{
    if (!FieldObj_LoadPaletteFiles(a, b, c, data_ov003_02232940, 3)) {
        return FALSE;
    }
    if (FieldObj_LoadPaletteFiles(a, d, e, data_ov003_022328c8, 3)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadCedarPalettes(void *a, u32 *b, u32 *c, u32 *d, u32 *e)
{
    if (!FieldObj_LoadPaletteFiles(a, b, c, data_ov003_02232638, 1)) {
        return FALSE;
    }
    if (FieldObj_LoadPaletteFiles(a, d, e, data_ov003_02232644, 1)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadLitCedarPalette(void *a, u32 *b, u32 *c)
{
    BOOL ok = TRUE;
    if (!FieldObj_LoadPaletteFiles(a, b, c, data_ov003_0223263c, ok)) {
        ok = FALSE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadTreeSaplingModels(FieldObjectManager *self, u32 *a, u32 *b, u32 c)
{
    s32 i;
    BOOL ok = TRUE;
    for (i = 0; i < 3; i++) {
        s32 t = FieldObj_GetSeasonSet(self, i);
        void *n = FieldObj_GetTreeModelPath(self, i, 0);
        if (!CachedModel_loadWithTex((u8 *)self + 0x174 + i * 0x3a8, n, sFieldObjectModelHeap, (void *)a[t * 6], b[i], c, ok)) {
            ok = FALSE;
            break;
        }
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadCedarSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c)
{
    BOOL ok = TRUE;
    if (!CachedModel_loadWithTex(&self->cedarModels[0], FieldObj_GetCedarModelPath(self, 0), sFieldObjectModelHeap, (void *)*a, *b, c, ok)) {
        ok = FALSE;
    }
    return ok;
}
}
}

namespace ns_0221f798 {
extern "C" {
BOOL FieldObj_LoadPalmSaplingModel(FieldObjectManager *self, u32 *a, u32 *b, u32 c)
{
    BOOL ok = TRUE;
    if (!CachedModel_loadWithTex(&self->palmModels[0], FieldObj_GetPalmModelPath(self, 0), sFieldObjectModelHeap, (void *)*a, *b, c, ok)) {
        ok = FALSE;
    }
    return ok;
}
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadTreeStageModels(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i, j;
    Seg *base2; u32 *pb1; u32 *pb2; u32 *q2; u32 *q1; Elem *base1;
    for (i = 0; i < 3; i++) {
        s32 t = FieldObj_GetSeasonSet(o, i);
        j = 1;
        pb1 = &b[i];
        q1 = a + t * 6;
        base1 = o->unk_174[i];
        for (; j <= 4; j++) {
            void *n = FieldObj_GetTreeModelPath(o, i, j);
            if (!CachedModel_loadWithTex(&base1[j], n, sFieldObjectModelHeap, q1[j], *pb1, c, 2)) {
                return FALSE;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        s32 t = FieldObj_GetSeasonSet(o, i);
        j = 0;
        base2 = o->unk_4b20[i];
        pb2 = &b[i];
        q2 = a + t * 6;
        for (; j < 4; j++) {
            void *n = FieldObj_GetTreeAnimModelPath(o, i, j);
            if (!CachedModel_loadWithTex(&base2[j].e, n, sFieldObjectModelHeap, (q2 + j)[1], *pb2, c, 2)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadCedarStageModels(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 1; i <= 4; i++) {
        void *n = FieldObj_GetCedarModelPath(o, i);
        if (!CachedModel_loadWithTex(&o->unk_c6c[i], n, sFieldObjectModelHeap, a[i], *b, c, 2)) {
            return FALSE;
        }
    }
    for (i = 0; i < 4; i++) {
        void *n = FieldObj_GetCedarAnimModelPath(o, i);
        Seg *sg = &o->unk_5ab0[i];
        if (!CachedModel_loadWithTex(&sg->e, n, sFieldObjectModelHeap, (a + i)[1], *b, c, 2)) {
            return FALSE;
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadLitCedarModels(Obj *o, u32 *a, u32 *b)
{
    s32 cnt;
    for (cnt = 0; cnt < 3; cnt++) {
        if (!CachedModel_loadWithTex(&o->unk_1014[cnt], data_ov003_0223264c, sFieldObjectModelHeap, *a, *b, &cnt, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadPalmStageModels(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 1; i <= 4; i++) {
        void *n = FieldObj_GetPalmModelPath(o, i);
        if (!CachedModel_loadWithTex(&o->unk_11e8[i], n, sFieldObjectModelHeap, a[i], *b, c, 2)) {
            return FALSE;
        }
    }
    for (i = 0; i < 4; i++) {
        void *n = FieldObj_GetPalmAnimModelPath(o, i);
        Seg *sg = &o->unk_63c4[i];
        if (!CachedModel_loadWithTex(&sg->e, n, sFieldObjectModelHeap, (a + i)[1], *b, c, 2)) {
            return FALSE;
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadTreeDeadModels(Obj *o, u32 *a, u32 *b, void *c)
{
    s32 i;
    for (i = 0; i < 3; i++) {
        s32 t = FieldObj_GetSeasonSet(o, i);
        void *n = FieldObj_GetTreeModelPath(o, i, 5);
        if (!CachedModel_loadWithTex(&o->unk_174[i][5], n, sFieldObjectModelHeap, (a + t * 6)[5], b[i], c, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadCedarDeadModel(Obj *o, u32 *a, u32 *b, void *c)
{
    void *n = FieldObj_GetCedarModelPath(o, 5);
    if (CachedModel_loadWithTex(&o->unk_c6c[5], n, sFieldObjectModelHeap, a[5], *b, c, 1)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadPalmDeadModel(Obj *o, u32 *a, u32 *b, void *c)
{
    void *n = FieldObj_GetPalmModelPath(o, 5);
    if (CachedModel_loadWithTex(&o->unk_11e8[5], n, sFieldObjectModelHeap, a[5], *b, c, 1)) {
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_ClearTreeFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f)
{
    s32 i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; a++, b++, j++) {
            *a = 0;
            *b = 0;
        }
    }
    for (k = 0; k < 3; c++, d++, e++, f++, k++) {
        *c = 0;
        *d = 0;
        *e = 0;
        *f = 0;
    }
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_ClearCedarPalmFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d, u32 *e, u32 *f)
{
    s32 i;
    for (i = 0; i < 6; i++) {
        *a++ = 0;
        *b++ = 0;
    }
    *c = 0;
    *d = 0;
    *e = 0;
    *f = 0;
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_ClearLitCedarFileBufs(Obj *o, u32 *a, u32 *b, u32 *c, u32 *d)
{
    *a = 0;
    *b = 0;
    *c = 0;
    *d = 0;
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_FreeTreeFileBufs(Obj *o, void **a, void **b, void **c)
{
    void *heap = gCurrentHeap;
    s32 j, i;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; a++, j++) {
            if (*a) {
                Heap_Free(heap, *a);
                *a = 0;
            }
        }
    }
    for (i = 0; i < 3; b++, c++, i++) {
        if (*b) {
            Heap_Free(heap, *b);
            *b = 0;
        }
        if (*c) {
            Heap_Free(heap, *c);
            *c = 0;
        }
    }
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_FreeCedarFileBufs(Obj *o, void **a, void **b, void **c)
{
    void *heap = gCurrentHeap;
    s32 i;
    for (i = 0; i < 6; a++, i++) {
        if (*a) {
            Heap_Free(heap, *a);
            *a = 0;
        }
    }
    if (*b) {
        Heap_Free(heap, *b);
        *b = 0;
    }
    if (*c) {
        Heap_Free(heap, *c);
        *c = 0;
    }
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_FreeLitCedarFileBufs(Obj *o, void **a, void **b)
{
    void *heap = gCurrentHeap;
    if (*a) {
        Heap_Free(heap, *a);
        *a = 0;
    }
    if (*b) {
        Heap_Free(heap, *b);
        *b = 0;
    }
}
}

namespace ns_0221ede8 {
extern "C" void FieldObj_FreePalmFileBufs(Obj *o, void **a, void **b, void **c)
{
    void *heap = gCurrentHeap;
    s32 i;
    for (i = 0; i < 6; a++, i++) {
        if (*a) {
            Heap_Free(heap, *a);
            *a = 0;
        }
    }
    if (*b) {
        Heap_Free(heap, *b);
        *b = 0;
    }
    if (*c) {
        Heap_Free(heap, *c);
        *c = 0;
    }
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadTrees()
{
    u32 idx = TownState_GetSeasonPeriod();
    u8 *p;
    BOOL r7 = FALSE, r4 = FALSE, r6 = FALSE;
    p = (u8 *)data_ov003_0222f758 + idx * 8;
    u32 l_cc[18];
    u32 l_114[18];
    u32 l_3c[3];
    u32 l_48[3];
    u32 l_54[3];
    u32 l_60[3];
    u32 l_6c[6];
    u32 l_84[6];
    u32 l_c[1];
    u32 l_10[1];
    u32 l_14[1];
    u32 l_18[1];
    u32 l_1c[1];
    u32 l_20[1];
    u32 l_24[1];
    u32 l_28[1];
    u32 l_9c[6];
    u32 l_b4[6];
    u32 l_2c[1];
    u32 l_30[1];
    u32 l_34[1];
    u32 l_38[1];

    FieldObj_ClearTreeFileBufs(gFieldObjectManager, l_cc, l_114, l_3c, l_48, l_54, l_60);
    if (FieldObj_LoadTreeTextures(gFieldObjectManager, l_cc, l_114)) {
        if (FieldObj_LoadTreePalettes(gFieldObjectManager, l_3c, l_48, l_54, l_60)) {
            if (FieldObj_LoadTreeSaplingModels(gFieldObjectManager, l_cc, l_54, p)) {
                if (FieldObj_LoadTreeStageModels(gFieldObjectManager, l_cc, l_3c, p)) {
                    if (FieldObj_LoadTreeDeadModels(gFieldObjectManager, l_cc, l_54, p)) {
                        r7 = TRUE;
                    }
                }
            }
        }
    }
    FieldObj_FreeTreeFileBufs(gFieldObjectManager, (void **)l_114, (void **)l_48, (void **)l_60);
    FieldObj_ClearCedarPalmFileBufs(gFieldObjectManager, l_6c, l_84, l_c, l_10, l_14, l_18);
    if (FieldObj_LoadCedarTextures(gFieldObjectManager, l_6c, l_84)) {
        if (FieldObj_LoadCedarPalettes(gFieldObjectManager, l_c, l_10, l_14, l_18)) {
            if (FieldObj_LoadCedarSaplingModel(gFieldObjectManager, l_6c, l_14, p)) {
                if (FieldObj_LoadCedarStageModels(gFieldObjectManager, l_6c, l_c, p)) {
                    if (FieldObj_LoadCedarDeadModel(gFieldObjectManager, l_6c, l_14, p)) {
                        r4 = TRUE;
                    }
                }
            }
        }
    }
    FieldObj_FreeCedarFileBufs(gFieldObjectManager, (void **)l_84, (void **)l_10, (void **)l_18);
    FieldObj_ClearLitCedarFileBufs(gFieldObjectManager, l_1c, l_20, l_24, l_28);
    if (FieldObj_LoadLitCedarTexture(gFieldObjectManager, l_1c, l_20)) {
        if (FieldObj_LoadLitCedarPalette(gFieldObjectManager, l_24, l_28)) {
            if (FieldObj_LoadLitCedarModels(gFieldObjectManager, l_1c, l_24)) {
                r4 = TRUE;
            }
        }
    }
    FieldObj_FreeLitCedarFileBufs(gFieldObjectManager, (void **)l_20, (void **)l_28);
    FieldObj_ClearCedarPalmFileBufs(gFieldObjectManager, l_9c, l_b4, l_2c, l_30, l_34, l_38);
    if (FieldObj_LoadPalmTextures(gFieldObjectManager, l_9c, l_b4)) {
        if (FieldObj_LoadCedarPalettes(gFieldObjectManager, l_2c, l_30, l_34, l_38)) {
            if (FieldObj_LoadPalmSaplingModel(gFieldObjectManager, l_9c, l_34, p)) {
                if (FieldObj_LoadPalmStageModels(gFieldObjectManager, l_9c, l_2c, p)) {
                    if (FieldObj_LoadPalmDeadModel(gFieldObjectManager, l_9c, l_34, p)) {
                        r6 = TRUE;
                    }
                }
            }
        }
    }
    FieldObj_FreePalmFileBufs(gFieldObjectManager, (void **)l_b4, (void **)l_30, (void **)l_38);
    if (r7 && r4 && r6) {
        return TRUE;
    }
    return FALSE;
}
}

namespace ns_0221ede8 {
extern "C" s32 FieldObj_LoadFlowerTextures(Obj *o, void *a, void *b)
{
    return FieldObj_LoadTextureFiles(o, a, b, data_ov003_02232bc8, 4);
}
}

namespace ns_0221ede8 {
extern "C" s32 FieldObj_LoadFlowerPalettes(Obj *o, void *a, void *b)
{
    return FieldObj_LoadPaletteFiles(o, a, b, data_ov003_02232a18, 4);
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadFlowerModels(Obj *o, u32 *a, u32 *b)
{
    s32 i;
    for (i = 0; i < 4; a++, b++, i++) {
        s32 j = 0;
        void **pname = &data_ov003_02232a28[i];
        Elem *base = o->unk_1590[i];
        s32 n = data_ov003_0222f4a8[i];
        for (; j < n; j++) {
            if (!CachedModel_loadWithTex(&base[j], *pname, sFieldObjectModelHeap, *a, *b, &j, 1)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" s32 FieldObj_LoadSpecialFlowerTextures(Obj *o, void *a, void *b)
{
    return FieldObj_LoadTextureFiles(o, a, b, data_ov003_02232778, 2);
}
}

namespace ns_0221ede8 {
extern "C" s32 FieldObj_LoadSpecialFlowerPalettes(Obj *o, void *a, void *b)
{
    return FieldObj_LoadPaletteFiles(o, a, b, data_ov003_02232a48, 2);
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadSpecialFlowerModels(Obj *o, u32 *a, u32 *b)
{
    s32 i;
    for (i = 0; i < 2; a++, b++, i++) {
        s32 j;
        for (j = 0; j < 2; j++) {
            if (!CachedModel_loadWithTex(&o->unk_2df0[i][j], data_ov003_022326e8[i], sFieldObjectModelHeap, *a, *b, &j, 1)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}
}

namespace ns_0221ede8 {
extern "C" BOOL FieldObj_LoadDandelionModels(Obj *o)
{
    BOOL r = FALSE;
    if (ModelSet_Load(o->unk_4af0, (u8 *)"/fg/flower/tanpopo.nsbmd", sFieldObjectModelHeap)) {
        s32 i;
        for (i = 0; i < 2; i++) {
            o->unk_3060[i] = ModelSet_Find(o->unk_4af0, data_ov003_02232720[i]);
        }
        r = TRUE;
    }
    return r;
}
}

namespace ns_0221e4d4 {
extern "C" {
void FieldObj_FreeFlowerFiles(Obj *o, s32 *b, s32 *d, s32 *f, s32 *h) {
    void *heap = gCurrentHeap;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*b != 0) {
            Heap_Free(heap, (void *)*b);
            *b = 0;
        }
        if (*d != 0) {
            Heap_Free(heap, (void *)*d);
            *d = 0;
        }
        b++;
        d++;
    }
    for (i = 0; i < 2; i++) {
        if (*f != 0) {
            Heap_Free(heap, (void *)*f);
            *f = 0;
        }
        if (*h != 0) {
            Heap_Free(heap, (void *)*h);
            *h = 0;
        }
        f++;
        h++;
    }
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadFlowers() {
    BOOL r5 = FALSE, r4 = FALSE;
    void *A[4], *B[4], *C[4], *D[4];
    void *E[2], *F[2], *G[2], *H[2];
    s32 i, j;
    for (i = 0; i < 4; i++) {
        A[i] = NULL;
        B[i] = NULL;
        C[i] = NULL;
        D[i] = NULL;
    }
    for (j = 0; j < 2; j++) {
        E[j] = NULL;
        F[j] = NULL;
        G[j] = NULL;
        H[j] = NULL;
    }
    if (FieldObj_LoadFlowerTextures(gFieldObjectManager, A, B)) {
        if (FieldObj_LoadFlowerPalettes(gFieldObjectManager, C, D)) {
            if (FieldObj_LoadFlowerModels(gFieldObjectManager, A, C)) {
                r5 = TRUE;
            }
        }
    }
    if (FieldObj_LoadSpecialFlowerTextures(gFieldObjectManager, E, F)) {
        if (FieldObj_LoadSpecialFlowerPalettes(gFieldObjectManager, G, H)) {
            if (FieldObj_LoadSpecialFlowerModels(gFieldObjectManager, E, G)) {
                r4 = TRUE;
            }
        }
    }
    FieldObj_FreeFlowerFiles(gFieldObjectManager, (s32 *)B, (s32 *)D, (s32 *)F, (s32 *)H);
    s32 r = FieldObj_LoadDandelionModels(gFieldObjectManager);
    if (r5 && r4 && r) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
s32 FieldObj_LoadGrassPalette(Obj *o, void *a, void *b) {
    return FieldObj_LoadPaletteFiles(o, a, b, data_ov003_02232650, 1);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadGrassModels(Obj *o, u32 idx) {
    s32 i;
    volatile s32 z;
    u32 n = TownState_GetSeasonPeriod();
    i = 0;
    u32 *p = &data_ov003_0222f6a0[n];
    z = 0;
    for (; i < 5; i++) {
        if (!CachedModel_loadWithTex(&o->unk_43e8[i], data_ov003_02232bd8[i], sFieldObjectModelHeap, z, idx, p, 1)) {
            return FALSE;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadGrass() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (FieldObj_LoadGrassPalette(gFieldObjectManager, &a, &b)) {
        if (FieldObj_LoadGrassModels(gFieldObjectManager, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        Heap_Free(gCurrentHeap, b);
    }
    return r;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
void *FieldObj_GetGroundTexSet() {
    return data_ov003_0222f6fc[TownState_GetSeasonPeriod()];
}
}
}

namespace ns_0221e4d4 {
extern "C" {
s32 FieldObj_LoadHolePalette(Obj *o, void *a, void *b) {
    return FieldObj_LoadPaletteFiles(o, a, b, data_ov003_02232654, 1);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadHoleModels(Obj *o, u32 idx) {
    void *m = FieldObj_GetGroundTexSet();
    if (CachedModel_loadWithTex(&o->unk_4708, data_ov003_02232634, sFieldObjectModelHeap, 0, idx, &m, 1) == 0) {
        return FALSE;
    }
    if (CachedModel_loadWithTex(&o->unk_47a4, data_ov003_02232634, sFieldObjectModelHeap, 0, idx, (sFieldObjShapeTable + 0x310), 1)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadHoles() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (FieldObj_LoadHolePalette(gFieldObjectManager, &a, &b)) {
        if (FieldObj_LoadHoleModels(gFieldObjectManager, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        Heap_Free(gCurrentHeap, b);
    }
    return r;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
s32 FieldObj_LoadCrackPalette(Obj *o, void *a, void *b) {
    return FieldObj_LoadPaletteFiles(o, a, b, data_ov003_02232630, 1);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadCrackModels(Obj *o, u32 idx) {
    void *m = FieldObj_GetGroundTexSet();
    if (CachedModel_loadWithTex(&o->unk_4840, data_ov003_02232648, sFieldObjectModelHeap, 0, idx, &m, 1) == 0) {
        return FALSE;
    }
    if (CachedModel_loadWithTex(&o->unk_48dc, data_ov003_02232648, sFieldObjectModelHeap, 0, idx, (sFieldObjShapeTable + 0x30c), 1)) {
        return TRUE;
    }
    return FALSE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadCracks() {
    BOOL r = FALSE;
    void *a = NULL;
    void *b = NULL;
    if (FieldObj_LoadCrackPalette(gFieldObjectManager, &a, &b)) {
        if (FieldObj_LoadCrackModels(gFieldObjectManager, (u32)a)) {
            r = TRUE;
        }
    }
    if (b != NULL) {
        Heap_Free(gCurrentHeap, b);
    }
    return r;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadTurnipModels(Obj *o) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (!CachedModel_load(&gFieldObjectManager->unk_49a8[i], data_ov003_02232788[i], sFieldObjectAnimHeap)) {
            return FALSE;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadTurnips(Obj *o) {
    return FieldObj_LoadTurnipModels(o);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadDesignModels(Obj *o) {
    Elem *p = &o->unk_3068[0][0];
    s32 i;
    u32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if (!CachedModel_loadWithSharedTex(p, (u8 *)"/fg/obj_myD.nsbmd", i, j)) {
                return FALSE;
            }
            p++;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_LoadDesigns() {
    return FieldObj_LoadDesignModels(gFieldObjectManager);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL FieldObj_RunLoaders(Obj *o) {
    s32 i;
    for (i = 0; i < 9; i++) {
        if (!sFieldObjectLoaders[i]()) {
            return FALSE;
        }
    }
    return TRUE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL _ZN18FieldObjectManager8vfunc_00Ev(Obj *o) {
    BOOL r = FALSE;
    if (sFieldObjectModelHeap == NULL) {
        sFieldObjectModelHeap = ExpHeap_CreateInPlace(sFieldObjectModelHeapBuf, (u32)(sFieldObjectModelHeapBuf + 0x21400) - (u32)sFieldObjectModelHeapBuf);
    }
    if (sFieldObjectAnimHeap == NULL) {
        sFieldObjectAnimHeap = ExpHeap_Create(0x8c00, gCurrentHeap);
    }
    if (FieldObj_LoadIconModels(o)) {
        gFieldObjectManager = o;
        if (FieldObj_RunLoaders(o)) {
            o->unk_6a6c = 0;
            TreeAnimSet_Init(o->unk_4b20);
            TreeLeafFx_Init(sTreeLeafFx);
            FieldItemFxTable_Init(sFieldItemFxTable);
            Field_OnEnter();
            r = TRUE;
        } else {
            gFieldObjectManager = NULL;
        }
    }
    return r;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
BOOL _ZN18FieldObjectManager9onExecuteEv(Obj *o) {
    FieldItemFxTable_Update(sFieldItemFxTable);
    TreeAnimSet_Update(o->unk_4b20);
    return TRUE;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
s32 FieldObj_DrawIconModel(Obj *o, u32 idx, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f) {
    Unk_ov003_0221e4d4_Model *m = o->unk_50[idx];
    V3 t;
    s32 ang = WorldCurve_ToCurved(&t, a);
    func_020e8388(&data_021f47e0, t.x, t.y, t.z);
    func_020e8434(&data_021f47e0, ang);
    func_020e8464(&data_021f47e0, *(s16 *)&d, *(s16 *)&e, *(s16 *)&f);
    func_020e84f8(&data_021f47e0, c->x, c->y, c->z);
    func_02105f00(m->unk_5c, b);
    FieldObj_DrawModel(o, m, data_021f47e0);
    return (s32)m;
}
}
}

namespace ns_0221e4d4 {
extern "C" {
s32 FieldObj_DrawItemIcon(Obj *o, u32 t, V3 *a, s32 b, V3 *c, s32 d, s32 e, s32 f) {
    volatile u16 type = 0xfff1;
    V3 va;
    V3 vc;
    type = t;
    va.x = a->x;
    va.y = a->y;
    va.z = a->z;
    vc.x = c->x;
    vc.y = c->y;
    vc.z = c->z;
    s32 idx = Item_GetInfoUnk07(&type);
    return FieldObj_DrawIconModel(o, idx, &va, b, &vc, *(s16 *)&d, *(s16 *)&e, *(s16 *)&f);
}
}
}

namespace ns_0221e4d4 {
extern "C" {
void FieldObj_DrawItemModel(Obj *o, u32 t, V3 *pos, V3 *scale, s32 rx, s32 ry, s32 rz) {
    s32 idx;
    BOOL f9, f8, f7, f6, f5, f4, f3, f2;
    u32 a;
    volatile u16 type = 0xfff1;
    V3 v;
    type = t;
    s32 ang = WorldCurve_ToCurved(&v, pos);
    func_020e8388(&data_021f47e0, v.x, v.y, v.z);
    func_020e8434(&data_021f47e0, ang);
    func_020e8464(&data_021f47e0, *(s16 *)&rx, *(s16 *)&ry, *(s16 *)&rz);
    func_020e84f8(&data_021f47e0, scale->x, scale->y, scale->z);
    if (Unk_ov003_0221e4d4_Chk1(&type)) {
        u16 u = t - 0xd4;
        u16 nv;
        if (u < 7) {
            nv = u + 0x153b;
        } else {
            nv = 0x153b;
        }
        type = nv;
    } else if (t == 0x20) {
        type = 0x156a;
    }
    a = type;
    s32 k = (type & 0xf000) >> 12;
    switch (k) {
    case 0:
        BOOL c4 = FALSE;
        u16 x = a + 0xffe6;
        if (x <= 4) {
            if ((1 << x) & 0x1b) {
                c4 = TRUE;
            }
        }
        if (!c4) {
            if (a != 0x88 && a != 0x89) {
                goto rest;
            }
        }
        FieldObj_DrawSpecialFlower(o, &type, data_021f47e0);
        break;
    rest:
        f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = FALSE;
        if (a <= 5) {
            f2 = TRUE;
        }
        if (!f2) {
            if (a < 6 || a > 0xb) {
                f3 = FALSE;
            }
        }
        if (!f3) {
            if (a < 0xc || a > 0x11) {
                f4 = FALSE;
            }
        }
        if (!f4) {
            if ((a < 0x12 || a > 0x19) && a != 0x1c) {
                f5 = FALSE;
            }
        }
        if (!f5) {
            if ((a < 0x8a || a > 0x8f) && (a < 0x90 || a > 0x95) && (a < 0x96 || a > 0x9b) && (a < 0x9c || a > 0xa3) && a != 0xa5) {
                f6 = FALSE;
            }
        }
        if (!f6) {
            if (a != 0x1a) {
                f7 = FALSE;
            }
        }
        if (!f7) {
            if (a != 0xa4) {
                f8 = FALSE;
            }
        }
        if (!f8) {
            if (a != 0x1d) {
                f9 = FALSE;
            }
        }
        if (f9) {
            FieldObj_DrawFlower(o, &type, data_021f47e0);
        } else if (a >= 0xa7 && a <= 0xc6) {
            FieldObj_DrawDesign(o, &type, data_021f47e0);
        }
        break;
    case 1:
    case 3:
    case 4:
        idx = Item_GetInfoUnk07(&type);
        FieldObj_DrawModel(o, o->unk_50[idx], data_021f47e0);
        break;
    case 2:
        break;
    }
}
}
}

namespace ns_0221db54 {
extern "C" void FieldObj_DrawTreeFruit(O *o, u16 *t, Unk_ov003_0221e398_V3 *v)
{
    u32 id;
    u32 k = 0;
    u32 w = *t;
    if (w >= 0x57 && w <= 0x5b) {
        k = 1;
    }
    if (k) {
        id = 0x14b8;
    } else {
        id = sTreeFruitIcons[Item_GetFruitTreeFruit(t)];
    }
    s32 i = 0;
    s32 z = i;
    do {
        struct {
            Unk_ov003_0221e398_V3 a, b, c;
        } l;
        l.a.x = v->x + data_ov003_0222f510[i].x;
        l.a.y = v->y + data_ov003_0222f510[i].y;
        l.a.z = v->z + data_ov003_0222f510[i].z;
        l.b.x = l.a.x;
        l.b.y = l.a.y;
        l.b.z = l.a.z;
        l.c.x = 0x1000;
        l.c.y = 0x1000;
        l.c.z = 0x1000;
        FieldObj_DrawItemIcon(o, id, (V3 *)&l.b, 0x1f, (V3 *)&l.c, z, z, z);
        i++;
    } while (i < 3);
}
}

namespace ns_0221db54 {
extern "C" void FieldObj_DrawCedarLights(O *o, Unk_ov003_0221e398_V3 *t, s32 a, s32 b)
{
    M *q = NULL;
    s32 idx = LitCedarList_Find(a, b);
    if (idx != -1) {
        s32 d = (o->frameCounter + idx * 15) / 20;
        q = &o->litCedarModels[(idx + d) % 3];
    }
    Unk_ov003_0221e398_V3 v;
    s32 r = WorldCurve_ToCurved(&v, t);
    func_020e8388(&data_021f47e0, v.x, v.y, v.z);
    func_020e8434(&data_021f47e0, r);
    FieldObj_DrawModel(o, q, data_021f47e0);
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawTree(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m)
{
    M *q;
    struct {
        Unk_ov003_0221e398_V3 a1, a2, t1, t2, b1, sc, t3, b2;
    } l;
    s32 n = Item_GetTreeStage(t);
    BOOL f = FALSE;
    u32 id = *t;
    if (id >= 0x2f && id <= 0x56) {
        f = TRUE;
    }
    if (f) {
        if (Item_IsTreeGrown(t)) {
            l.t1.x = v.x;
            l.t1.y = v.y;
            l.t1.z = v.z;
            FieldObj_DrawTreeFruit(o, t, &l.t1);
        }
        q = (M *)((u8 *)o + 0x8c4) + n;
    } else if (id >= 0x57 && id <= 0x5b) {
        a = (a ^ b) & 1;
        if (Item_IsTreeGrown(t)) {
            l.t2.x = v.x;
            l.t2.y = v.y;
            l.t2.z = v.z;
            FieldObj_DrawTreeFruit(o, t, &l.t2);
        }
        u8 *base = (u8 *)o + 0x174;
        a = a * 0x3a8;
        q = (M *)(base + a) + n;
    } else if (id == 0x69) {
        s32 i, z;
        i = 0;
        z = 0;
        do {
            l.a1.x = v.x + data_ov003_0222f510[i].x;
            l.a1.y = v.y + data_ov003_0222f510[i].y;
            l.a1.z = v.z + data_ov003_0222f510[i].z;
            l.b1.x = l.a1.x;
            l.b1.y = l.a1.y;
            l.b1.z = l.a1.z;
            l.sc.x = 0x1000;
            l.sc.y = 0x1000;
            l.sc.z = 0x1000;
            FieldObj_DrawItemIcon(o, 0x1542, (V3 *)&l.b1, 0x1f, (V3 *)&l.sc, z, z, z);
            i++;
        } while (i < 3);
        q = (M *)((u8 *)o + 0x8c4) + n;
    } else if (id >= 0x6a && id <= 0x6c) {
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id == 0x6d) {
        l.t3.x = v.x;
        l.t3.y = v.y;
        l.t3.z = v.z;
        FieldObj_DrawCedarLights(o, &l.t3, a, b);
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id >= 0x5d && id <= 0x61) {
        q = (M *)((u8 *)o + 0xc6c) + n;
    } else if (id >= 0xc8 && id <= 0xcf) {
        if (Item_IsTreeGrown(t)) {
            s32 i, z;
            i = 0;
            z = 0;
            do {
                l.a2.x = v.x + data_ov003_0222f4f8[i].x;
                l.a2.y = v.y + data_ov003_0222f4f8[i].y;
                l.a2.z = v.z + data_ov003_0222f4f8[i].z;
                l.b2.x = l.a2.x;
                l.b2.y = l.a2.y;
                l.b2.z = l.a2.z;
                l.sc.x = 0x1000;
                l.sc.y = 0x1000;
                l.sc.z = 0x1000;
                FieldObj_DrawItemIcon(o, 0x1548, (V3 *)&l.b2, 0x1f, (V3 *)&l.sc, z, z, z);
                i++;
            } while (i < 2);
        }
        q = (M *)((u8 *)o + 0x11e8) + n;
    } else {
        q = (M *)((u8 *)o + 0x174 + ((a ^ b) & 1) * 0x3a8) + n;
    }
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" void FieldObj_DrawTreeAt(O *o, u16 *t, s32 a, s32 b, V3 v, Blk m)
{
    FieldObj_DrawTree(o, t, a, b, v, m);
    ObjShadow_DrawTree(&v, Item_GetTreeStage(t));
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawSapling(O *o, u16 *t, s32 a, s32 b, Blk m)
{
    M *q;
    if (*t == 0x25) {
        q = (M *)((u8 *)o + 0x480 + ((a ^ b) & 1) * 0x3a8);
    } else if (*t == 0xc7) {
        q = (M *)((u8 *)o + 0x14f4);
    } else {
        q = (M *)((u8 *)o + 0xf78);
    }
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawStump(O *o, u16 *t, Blk m)
{
    BOOL f = FALSE;
    u32 v = *t;
    if (v < 0x2b || v > 0x2e) {
    } else {
        f = TRUE;
    }
    if (f) {
        v -= 0x2b;
    } else if (v >= 0xff && v <= 0x102) {
        v -= 0xff;
    } else if (v >= 0x62 && v <= 0x65) {
        v -= 0x5e;
    } else {
        v -= 0xc8;
    }
    M *q = o->stumpModels[v];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawFlower(O *o, u16 *t, Blk m)
{
    s32 a = Flower_GetSpecies(t);
    s32 b = Flower_GetColor(t);
    M *q = &o->flowerModels[a][b];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawFlowerBySpecies(O *o, u16 *t, Blk m)
{
    M *q = &o->flowerModels[Flower_GetSpecies(t)][0];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawSpecialFlower(O *o, u16 *t, Blk m)
{
    M *q;
    switch (*t) {
    case 0x1a:
        q = &o->specialFlowerModels[0];
        break;
    case 0x1b:
        q = &o->specialFlowerModels[2];
        break;
    case 0x1c:
        break;
    case 0x1d:
        q = o->dandelionModel;
        break;
    case 0x1e:
        q = o->dandelionPuffModel;
        break;
    case 0x88:
    case 0xa4:
        q = &o->specialFlowerModels[1];
        break;
    case 0x89:
        q = &o->specialFlowerModels[3];
        break;
    }
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawGrass(O *o, u16 *t, Blk m)
{
    BOOL f = FALSE;
    u32 v = *t;
    if (v < 0x1f || v > 0x20) {
    } else {
        f = TRUE;
    }
    s32 k;
    if (f) {
        k = 4;
    } else {
        k = v - 0x21;
    }
    M *q = &o->grassModels[k];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawRock(O *o, u16 *t, Blk m)
{
    M *q = o->stoneModels[(*t - 0xe3) % 5];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" s32 FieldObj_DrawRockAt(O *o, u16 *t, s32 r, Blk m)
{
    FieldObj_DrawRock(o, t, m);
    return ObjShadow_DrawRock(r);
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawHole(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xfd) {
        k = 1;
    }
    M *q = &o->holeModels[k];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" void FieldObj_DrawCrack(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xfe) {
        k = 1;
    }
    FieldObj_DrawModel(o, &o->crackModels[k], m);
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawTurnip(O *o, u16 *t, Blk m)
{
    s32 k = 0;
    if (*t == 0xe2) {
        k = 1;
    }
    M *q = &o->turnipModels[k];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" M *FieldObj_DrawDesign(O *o, u16 *t, Blk m)
{
    M *q = &o->designModels[*t - 0xa7];
    FieldObj_DrawModel(o, q, m);
    return q;
}
}

namespace ns_0221db54 {
extern "C" void FieldObj_DrawModel(O *o, M *p, Blk m)
{
    if (p != NULL) {
        *(Blk *)p->unk_64 = m;
        Model_drawShapesDirect(p, 0);
        volatile u16 a = SceneLights_GetRoomColor();
        volatile u16 b = a;
        func_02105fd8(p->unk_5c, b);
    }
}
}

namespace ns_0221cb54 {
extern "C" {
void FieldObj_DrawUnits(O *o, void *g) {
    struct {
        s32 x, z;
        V3 D, E, A, B, C;
        union {
            Blk m;
            s32 mw[12];
        };
        V3 F, G;
    } l;
    s32 idx, dist, i, j, cnt;
    u16 *cell;
    if (gCamera != 0) {
        l.A = gCameraLookAt;
        FieldPos_SnapToUnitCenter(&l.C, &l.A);
        FieldPos_ToUnit(&l.x, &l.z, &l.C);
        l.B.x = l.C.x + 0x12000;
        cnt = 0;
        l.B.y = 0;
        l.B.z = l.C.z + 0x8000;
        j = 4;
        goto jtest;
    jloop:
        FieldPos_SnapToUnitCenter(&l.D, &l.B);
        {
            s32 r4 = WorldCurve_ToCurved(&l.E, &l.D);
            func_020e8388(&data_021f47e0, l.E.x, l.E.y, l.E.z);
            func_020e8434(&data_021f47e0, r4);
        }
        l.m = data_021f47e0;
        dist = l.D.z - l.C.z;
        i = 9;
        goto itest;
    iloop:
        cell = BlockMap_GetItemPtrAtPos(g, &l.D, 0);
        if (cell == 0) goto step;
        if (Chk_0221d37c(cell)) {
            if (Item_IsTreeStage0(cell) == 0) {
                if (Camera_IsBlockingFocusView(&l.D, 0x2000, 0x2000) != 0) goto step;
            }
        }
        {
            switch (((s32)(*cell) & 0xf000) >> 12) {
            case 0:
                if (((((*cell) >= 0x26 && (*cell) <= 0x2a) || ((*cell) >= 0x5d && (*cell) <= 0x61) || ((*cell) >= 0x2f && (*cell) <= 0x56) ||
                      ((*cell) >= 0x57 && (*cell) <= 0x5b) || ((*cell) >= 0x66 && (*cell) <= 0x68) || (*cell) == 0x69 ||
                      ((*cell) >= 0x6a && (*cell) <= 0x6c) || (*cell) == 0x6d || ((*cell) >= 0xc8 && (*cell) <= 0xcf) ||
                      ((*cell) >= 0xe3 && (*cell) <= 0xe7) || ((*cell) >= 0xe8 && (*cell) <= 0xfb)) &&
                     dist > -0x1c200 && dist < 0x8200) ||
                    (dist > -0x14a00 && dist < 0x6400)) {
                    if (((*cell) >= 0x26 && (*cell) <= 0x2a) || ((*cell) >= 0x5d && (*cell) <= 0x61) || ((*cell) >= 0x2f && (*cell) <= 0x56) ||
                        ((*cell) >= 0x57 && (*cell) <= 0x5b) || ((*cell) >= 0x66 && (*cell) <= 0x68) || (*cell) == 0x69 ||
                        ((*cell) >= 0x6a && (*cell) <= 0x6c) || (*cell) == 0x6d || ((*cell) >= 0xc8 && (*cell) <= 0xcf)) {
                        l.F.x = l.D.x;
                        l.F.y = l.D.y;
                        l.F.z = l.D.z;
                        FieldObj_DrawTreeAt(o, cell, l.x + i, l.z + j, &l.F, l.m);
                    } else if (((*cell) >= 0x21 && (*cell) <= 0x24) || ((*cell) >= 0x1f && (*cell) <= 0x20)) {
                        FieldObj_DrawGrass(o, cell, l.m);
                    } else {
                        BOOL k = FALSE;
                        if ((*cell) <= 0x19) k = TRUE;
                        if (k || (*cell) == 0x1c) {
                            FieldObj_DrawFlower(o, cell, l.m);
                        } else if (((*cell) >= 0x6e && (*cell) <= 0x73) || ((*cell) >= 0x74 && (*cell) <= 0x79) || ((*cell) >= 0x7a && (*cell) <= 0x7f) ||
                                   ((*cell) >= 0x80 && (*cell) <= 0x87) || ((*cell) >= 0x8a && (*cell) <= 0x8f) || ((*cell) >= 0x90 && (*cell) <= 0x95) ||
                                   ((*cell) >= 0x96 && (*cell) <= 0x9b) || ((*cell) >= 0x9c && (*cell) <= 0xa3) || (*cell) == 0xa5) {
                            FieldObj_DrawFlowerBySpecies(o, cell, l.m);
                        } else if (((*cell) >= 0xe3 && (*cell) <= 0xe7) || ((*cell) >= 0xe8 && (*cell) <= 0xfb)) {
                            l.G.x = l.D.x;
                            l.G.y = l.D.y;
                            l.G.z = l.D.z;
                            FieldObj_DrawRockAt(o, cell, &l.G, l.m);
                        } else if ((*cell) == 0xa6 || (*cell) == 0xfe) {
                            FieldObj_DrawCrack(o, cell, l.m);
                        } else if ((*cell) >= 0xfc && (*cell) <= 0xfd) {
                            FieldObj_DrawHole(o, cell, l.m);
                        } else if ((*cell) == 0x25 || (*cell) == 0x5c || (*cell) == 0xc7) {
                            FieldObj_DrawSapling(o, cell, l.x + i, l.z + j, l.m);
                        } else if (((*cell) >= 0x2b && (*cell) <= 0x2e) || ((*cell) >= 0xff && (*cell) <= 0x102) || ((*cell) >= 0x62 && (*cell) <= 0x65) ||
                                   ((*cell) >= 0xd0 && (*cell) <= 0xd3)) {
                            FieldObj_DrawStump(o, cell, l.m);
                        } else {
                            BOOL k2 = FALSE;
                            {
                                u32 bx = (u16)((*cell) + 0xffe6);
                                if (bx <= 4) {
                                    if (((1 << bx) & 0x1b) != 0) k2 = TRUE;
                                }
                            }
                            if (k2 || (*cell) == 0x88 || (*cell) == 0x89 || (*cell) == 0xa4) {
                                FieldObj_DrawSpecialFlower(o, cell, l.m);
                            } else if (func_01ffcbd8(g, l.x + i, l.z + j)) {
                                FieldObj_DrawCrack(o, cell, l.m);
                            } else {
                                BOOL k3 = FALSE;
                                if ((*cell) >= 0xa7 && (*cell) <= 0xc6) k3 = TRUE;
                                if (k3) {
                                    FieldObj_DrawDesign(o, cell, l.m);
                                } else if (((*cell) >= 0xd4 && (*cell) <= 0xda) || ((*cell) >= 0xdb && (*cell) <= 0xe1) || (*cell) == 0xe2) {
                                    FieldObj_DrawTurnip(o, cell, l.m);
                                }
                            }
                        }
                    }
                    cnt++;
                }
                break;
            case 1:
            case 3:
            case 4:
                if (func_01ffcbd8(g, l.x + i, l.z + j)) {
                    FieldObj_DrawCrack(o, cell, l.m);
                } else {
                    idx = Item_GetInfoUnk07(cell);
                    FieldObj_DrawModel(o, o->unk_50[idx], l.m);
                }
                cnt++;
                break;
            case 2:
                break;
            }
        }
        if (cnt >= 0xfc) goto end;
    step:
        l.mw[9] -= 0x2000;
        l.D.x -= 0x2000;
        i--;
    itest:
        if (i >= -9) goto iloop;
        l.B.z -= 0x2000;
        j--;
    jtest:
        if (j >= -14) goto jloop;
    }
end:;
}
}
}

namespace ns_0221cb54 {
extern "C" {
s32 _ZN18FieldObjectManager6onDrawEv(u8 *self) {
    u8 *a = gSceneBlockMap;
    u8 *b = gCamera;
    if (a != 0 && b != 0) {
        s32 *cnt = (s32 *)(self + 0x6a6c);
        *cnt = (*cnt + 1) % 60;
        FieldObj_DrawUnits((O *)self, a);
        FieldItemFxTable_Draw(sFieldItemFxTable);
        TreeAnimSet_Draw(self + 0x4b20);
    }
    return 1;
}
}
}

BOOL FieldObjectManager::vfunc_0c() {
    using ns_0221cb54::gFieldObjectManager;
    using ns_0221cb54::sFieldObjectModelHeap;
    using ns_0221cb54::sFieldObjectAnimHeap;
    using ns_0221cb54::sFieldItemFxTable;
    using ns_0221cb54::PendingUnits_Flush;
    using ns_0221cb54::ModelSet_Release;
    using ns_0221cb54::func_020e8c94;
    using ns_0221cb54::FieldItemFxTable_Release;
    using ns_0221cb54::TreeAnimSet_Release;
    u8 *self = (u8 *)this;

    ModelSet_Release(self + 0x4ae0);
    ModelSet_Release(self + 0x4af0);
    ModelSet_Release(self + 0x4b00);
    ModelSet_Release(self + 0x4b10);
    TreeAnimSet_Release(self + 0x4b20);
    FieldItemFxTable_Release(sFieldItemFxTable);
    PendingUnits_Flush();
    if (sFieldObjectModelHeap != 0) {
        func_020e8c94(sFieldObjectModelHeap);
        sFieldObjectModelHeap = 0;
    }
    if (sFieldObjectAnimHeap != 0) {
        func_020e8c94(sFieldObjectAnimHeap);
        sFieldObjectAnimHeap = 0;
    }
    gFieldObjectManager = 0;
    return 1;
}

namespace ns_0221cb54 {
extern "C" {
s32 Field_FindFlowerNear(V3 *out, V3 pos, s32 mask) {
    s32 i;
    u8 *g = gSceneBlockMap;
    s32 r = 0;
    if (g != 0) {
        V3k keep(pos);
        s32 xy[2];
        xy[0] = 0;
        xy[1] = 0;
        FieldPos_ToUnit(&xy[0], &xy[1], &pos);
        s32 layer = 0;
        i = 0;
        goto test;
    loop:
        {
            u32 b = sUnitSearchOffsets81[i];
            s32 cx = xy[0] + (((s32)b >> 4) - 8);
            s32 cz = xy[1] + ((b & 0xf) - 8);
            s32 hx = cx >> 4;
            s32 hz = cz >> 4;
            u16 *cell = BlockMap_GetItemPtr(g, hx, hz, cx - (hx << 4), cz - (hz << 4), layer);
            if (cell != 0) {
                if (Chk_0221d118(cell)) {
                    s32 bit = Flower_GetSpecies(cell);
                    if (((mask >> bit) & 1) != 0) {
                        u32 b2 = ((volatile u8 *)sUnitSearchOffsets81)[i];
                        xy[0] = xy[0] + (((s32)b2 >> 4) - 8);
                        xy[1] = xy[1] + ((b2 & 0xf) - 8);
                        FieldPos_FromUnitCenter(out, xy[0], xy[1]);
                        r = 1;
                        goto end;
                    }
                }
            }
        }
        i++;
    test:
        if (i < 0x51) goto loop;
    }
end:
    return r;
}
}
}

namespace ns_0221cb54 {
extern "C" {
s32 Field_IsRafflesiaNear(V3 *out, s32 b) {
    out->x = 0;
    out->y = 0;
    out->z = 0;
    s32 r = Town_GetRafflesiaPos(out, 0);
    if (r != 0) {
        V3k t;
        V3k tmp;
        func_020e9960((V3 *)&tmp, out, b);
        t = tmp;
        s32 sum = t.x * t.x + t.z * t.z;
        if (sum < (s32)0x90000000) {
            r = 1;
        }
    }
    return r;
}
}
}

namespace ns_0221cb54 {
extern "C" {
void Field_DrawIconModel(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (gFieldObjectManager != 0) {
        V3 la(a);
        V3 lb(b);
        FieldObj_DrawIconModel(gFieldObjectManager, o, &la, 0x1f, &lb, c, d, e);
    }
}
}
}

namespace ns_0221cb54 {
extern "C" {
void Field_DrawItemIcon(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (gFieldObjectManager != 0) {
        V3 la(a);
        V3 lb(b);
        FieldObj_DrawItemIcon(gFieldObjectManager, o, &la, 0x1f, &lb, c, d, e);
    }
}
}
}

namespace ns_0221cb54 {
extern "C" {
void Field_DrawItemModel(void *o, V3 a, V3 b, s32 c, s16 d, s16 e) {
    if (gFieldObjectManager != 0) {
        V3 la(a);
        V3 lb(b);
        FieldObj_DrawItemModel(gFieldObjectManager, o, &la, &lb, c, d, e);
    }
}
}
}

namespace ns_0221cb54 {
extern "C" {
s32 Tree_IsPendingStump(void *o, P2 pos) {
    BOOL r = FALSE;
    s32 idx = PendingUnit_FindForAid(o, pos, 0);
    if (idx >= 0) {
        volatile u16 v = 0xfff1;
        v = ((Unk_ov003_0221cb54_Rec *(*)(s32))PendingUnit_Get)(idx)->unk_0a;
        BOOL f1 = TRUE, f2 = TRUE, f3 = TRUE, f0 = FALSE;
        u32 t = v;
        if (v >= 0x2b && t <= 0x2e) f0 = TRUE;
        if (!f0) {
            if (t < 0xff || t > 0x102) f3 = FALSE;
        }
        if (!f3) {
            if (t < 0x62 || t > 0x65) f2 = FALSE;
        }
        if (!f2) {
            if (t < 0xd0 || t > 0xd3) f1 = FALSE;
        }
        if (f1) r = TRUE;
    }
    return r;
}
}
}

namespace ns_0221cb54 {
extern "C" {
s32 Tree_BeginReaction(void *o, P2 pos) {
    s32 result = 0;
    if (gFieldObjectManager != 0) {
        void *g = TownBlockMap_Get();
        if (g != 0) {
            s32 x = pos.x;
            s32 z = pos.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            u16 *cell = BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (cell != 0) {
                if (Chk_0221cd80(cell)) {
                    if (Item_IsTreeStage0(cell) == 0) {
                        V3 v;
                        FieldPos_FromUnitCenter(&v, pos.x, pos.z);
                        if (Camera_IsBlockingFocusView(&v, 0x2000, 0x2000) == 0) {
                            result = 1;
                        }
                    }
                }
            }
        }
    }
    if (result == 0) {
        void *g2 = TownBlockMap_Get();
        if (g2 != 0) {
            s32 x = pos.x;
            s32 z = pos.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            u16 *cell = BlockMap_GetItemPtr(g2, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (cell != 0) {
                void *a = Field_AidOrZero(o);
                BOOL k = FALSE;
                u32 t = *cell;
                if (t >= 0x2f && t <= 0x56) k = TRUE;
                if (k || (t >= 0xc8 && t <= 0xcf) || (t >= 0x57 && t <= 0x5b)) {
                    if (Item_IsTreeGrown(cell) != 0) {
                        s32 i;
                        for (i = 0; i < 3; i++) {
                            if (PendingUnit_FindBySlot((u32)a, i) >= 0) {
                                PendingUnit_Get();
                                PendingUnit_Apply();
                            }
                        }
                    }
                } else if ((t >= 0x66 && t <= 0x68) || (t >= 0x6a && t <= 0x6c)) {
                    if (PendingUnit_FindBySlot((u32)a, 0) >= 0) {
                        PendingUnit_Get();
                        PendingUnit_Apply();
                    }
                }
            }
        }
        PendingUnit_ApplyAtIfAid(pos, Field_AidOrZero(o), 0);
    }
    return result;
}
}
}

namespace ns_0221cb54 {
extern "C" {
void Tree_RequestShake(void *o, P2 pos, s32 mode) {
    if (Tree_BeginReaction(o, pos)) {
        TreeAnimSet_Request(gFieldObjectManager + 0x4b20, o, pos, mode, 0);
    }
}
}
}

namespace ns_0221cb54 {
extern "C" {
void Tree_RequestChop(void *o, P2 pos, s32 mode) {
    if (Tree_BeginReaction(o, pos)) {
        void *g = TownBlockMap_Get();
        s32 x = pos.x;
        s32 z = pos.z;
        s32 hx = x >> 4;
        s32 hz = z >> 4;
        BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
        switch (mode) {
        case 4:
            if (Tree_IsPendingStump(o, pos) == 0) {
                mode = 0;
            } else {
                if (PendingUnit_FindForAid(o, pos, 0) >= 0) {
                    s32 x2 = pos.x;
                    s32 xx = x2 - 2;
                    s32 z2 = pos.z;
                    s32 hx2 = xx >> 4;
                    s32 hz2 = z2 >> 4;
                    u16 *cell = BlockMap_GetItemPtr(g, hx2, hz2, xx - (hx2 << 4), z2 - (hz2 << 4), 0);
                    if (cell != 0 && Town_IsSaplingBlocker(cell)) {
                        mode = 6;
                    } else if (x2 - 2 < 0x10) {
                        mode = 6;
                    }
                } else {
                    mode = 0;
                }
            }
            break;
        case 5:
            if (Tree_IsPendingStump(o, pos) == 0) {
                mode = 0;
            } else {
                if (PendingUnit_FindForAid(o, pos, 0) >= 0) {
                    s32 x2 = pos.x;
                    s32 xx = x2 + 2;
                    s32 z2 = pos.z;
                    s32 hx2 = xx >> 4;
                    s32 hz2 = z2 >> 4;
                    u16 *cell = BlockMap_GetItemPtr(g, hx2, hz2, xx - (hx2 << 4), z2 - (hz2 << 4), 0);
                    if (cell != 0 && Town_IsSaplingBlocker(cell)) {
                        mode = 7;
                    } else if (x2 + 2 >= 0x50) {
                        mode = 7;
                    }
                } else {
                    mode = 0;
                }
            }
            break;
        }
        TreeAnimSet_Request(gFieldObjectManager + 0x4b20, o, pos, mode, 1);
    }
}
}
}

namespace ns_0221cb54 {
extern "C" {
void FieldItemFx_StartStrikeResult(P2 pos) {
    u32 t = *(u32 *)(gCommManager + 0x64);
    if (PendingUnit_FindBySlot(t, 4) >= 0) {
        Unk_ov003_0221cb54_Rec *r = PendingUnit_Get();
        FieldItemFx_StartStrikeShake(t, r->unk_0a, pos);
    }
    if (PendingUnit_FindBySlot(t, 3) >= 0) {
        Unk_ov003_0221cb54_Rec *r = PendingUnit_Get();
        V3 v;
        FieldPos_FromUnitCenter(&v, pos.x, pos.z);
        Col c;
        c.c = r->unk_08;
        u16 tt = c.c;
        c.b = tt;
        c.a = tt;
        FieldItemFx_StartStrikeEject(t, r->unk_0a, P2(&c), v);
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
void Field_SetUnitItem(s32 x, s32 y, u32 tile, s32 flag) {
    void *g;
    volatile u16 t[1];
    Scene_InTown();
    g = gSceneBlockMap;
    if (g != 0) {
        t[0] = 0xfff1;
        t[0] = tile;
        BlockMap_SetItemAtUnit(g, (u16 *)t, x, y, 0);
        if (tile != 0xfff1 && flag != 0) {
            BlockMap_SetBuriedAtUnit(g, x, y);
        } else {
            BlockMap_ClearBuriedAtUnit(g, x, y);
        }
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_Free(Rec *r) {
    r->treeType = 3;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_SetRecord(Rec *r, s32 a1, s32 a2, s32 a3, u32 c, Vec3 *pos, s32 flag) {
    r->treeType = a1;
    r->isLeaves = a2;
    r->frame = 0;
    r->posX = pos->x;
    r->posY = pos->y;
    r->posZ = pos->z;
    r->animKind = a3;
    if (flag == 0) {
        r->motionType = data_ov003_022335c0[a3];
    } else {
        r->motionType = 4;
    }
    r->treeStage = c;
}
}
}

namespace ns_0221c220 {
extern "C" {
PRec *TreeLeafFx_GetParams(Rec *r) {
    PRec *res = 0;
    PRec ****a = data_ov003_02232928[r->treeType];
    if (a != 0) {
        PRec ***b = a[r->motionType];
        if (b != 0) {
            PRec **c = b[r->treeStage];
            if (c != 0) res = c[r->isLeaves];
        }
    }
    return res;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_ApplyParams(Rec *r, Tgt *t) {
    PRec *p = TreeLeafFx_GetParams(r);
    t->unk_68 = p->unk_04;
    t->unk_58 = p->unk_06;
    t->unk_50 = p->unk_08;
    r->lifeTimer = p->unk_00;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_UpdatePos(Rec *r, Tgt *t) {
    s32 sc = data_ov003_0222f564[r->treeType][r->treeStage];
    s32 x, y, z, d, e;
    s32 ang, lim;
    Unk_ov003_0221c91c_Pad pad;
    switch (r->motionType) {
    case 3:
        switch (r->animKind - 4) {
        case 0:
            lim = 0x10;
            ang = -0x4000;
            break;
        case 1:
            lim = 0x10;
            ang = 0x4000;
            break;
        case 2:
            lim = 9;
            ang = -0x2000;
            break;
        case 3:
            lim = 9;
            ang = 0x2000;
            break;
        }
        e = r->frame;
        if (e < lim) ang = (s16)(e * ang / lim);
        d = ((u16)ang >> 4) * 2;
        x = r->posX + ((sc * data_02135f44[d]) >> 12);
        y = r->posY + ((sc * data_02135f44[d + 1]) >> 12);
        z = r->posZ;
        break;
    case 4:
        switch (r->animKind - 4) {
        case 0:
            ang = -0x4000;
            break;
        case 1:
            ang = 0x4000;
            break;
        case 2:
            ang = -0x2000;
            break;
        case 3:
            ang = 0x2000;
            break;
        }
        d = ((u16)ang >> 4) * 2;
        x = r->posX + ((sc * data_02135f44[d]) >> 12);
        y = r->posY + ((sc * data_02135f44[d + 1]) >> 12);
        z = r->posZ;
        break;
    default:
        x = r->posX;
        y = r->posY + sc;
        z = r->posZ;
        break;
    }
    t->unk_20 = x + t->unk_18->unk_00->posX;
    t->unk_24 = y + t->unk_18->unk_00->posY;
    t->unk_28 = z + t->unk_18->unk_00->posZ;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_OnEffectInit(Unk_ov003_0221c858_Obj *self) {
    s32 i;
    Tgt *t = self->emitter;
    Rec *r;
    EffectCb_InitAtPos(self);
    self->unk_0a = sTreeLeafFx.spawnIndex;
    i = sTreeLeafFx.spawnIndex;
    if (i < 0) i = 0;
    r = &sTreeLeafFx.records[i];
    TreeLeafFx_UpdatePos(r, t);
    self->unk_0a = i;
    TreeLeafFx_ApplyParams(r, t);
    t->unk_44 = data_ov003_0222f594[sTreeLeafFx.records[i].treeType][r->treeStage];
    t->unk_80 = r->tintVariant;
}
}
}

namespace ns_0221c220 {
extern "C" {
s32 TreeLeafFx_OnEffectStep(Unk_ov003_0221c858_Obj *self) {
    Rec *rec = &sTreeLeafFx.records[self->unk_0a];
    s32 t = rec->lifeTimer;
    if (t - 1 < 0) rec->treeType = 3;
    rec->lifeTimer = t - 1;
    rec->frame = rec->frame + 1;
    return TreeLeafFx_OnEffectUpdate(self);
}
}
}

namespace ns_0221c220 {
extern "C" {
s32 TreeLeafFx_OnEffectUpdate(Unk_ov003_0221c858_Obj *self) {
    BOOL r = TRUE;
    EffectCb_UpdateTint(self);
    Rec *rec = &sTreeLeafFx.records[self->unk_0a];
    if (rec->treeType == 3) {
        r = FALSE;
    } else {
        TreeLeafFx_UpdatePos(rec, self->emitter);
    }
    return r;
}
}
}

namespace ns_0221c220 {
extern "C" {
Rec *TreeLeafFx_FindFree(Set *self) {
    s32 i = 0;
    goto test;
loop:
    if (self->records[i].treeType == 3) {
        self->spawnIndex = i;
        return &self->records[i];
    }
    i++;
test:
    if (i < 2) goto loop;
    return 0;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_GetTreeType(Set *self, Rec *r, s32 *o1, s32 *o2, Vec3 *out, u16 *tile, Pos *pos) {
    u8 *c = (u8 *)TownState_GetSeasonPeriod();
    s32 k;
    BOOL f = FALSE;
    u32 t = *tile;
    if (t >= 0x26 && t <= 0x2a) f = TRUE;
    if (f) goto grass;
    if (t >= 0x2b && t <= 0x2e) goto grass;
    if (t == 0x67) {
    grass:
        k = (pos->x ^ pos->z) & 1;
        *o1 = 0;
        r->tintVariant = k;
        *o2 = 0x22;
        if ((data_ov003_0222f534 + k * 0x17)[(u32)c] != 0) *o2 = 0x24;
    } else if ((t >= 0x5d && t <= 0x61) || (t >= 0x62 && t <= 0x65) || t == 0x6d || t == 0x6b) {
        *o1 = 1;
        r->tintVariant = 3;
        *o2 = 0x25;
    } else if ((t >= 0xc8 && t <= 0xcf) || (t >= 0xd0 && t <= 0xd3)) {
        *o1 = 2;
        r->tintVariant = 3;
        *o2 = 0x27;
    } else {
        *o1 = 0;
        r->tintVariant = 2;
        *o2 = 0x22;
    }
    FieldPos_FromUnitCenter(out, pos->x, pos->z);
}
}
}

namespace ns_0221c220 {
extern "C" {
Rec *TreeLeafFx_SpawnSeasonal(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5) {
    Unk_ov003_0221c62c_Quad q = data_ov003_02232b48;
    Rec *r = 0;
    if (data_ov003_0222f4c8[TownState_GetSeasonPeriod()] != 0) {
        r = TreeLeafFx_FindFree(self);
        if (r != 0) {
            s32 v14, v18;
            Pos pos;
            Vec3 out;
            Vec3 out2;
            pos.x = p4->x;
            pos.z = p4->z;
            TreeLeafFx_GetTreeType(self, r, &v14, &v18, &out, p3, &pos);
            out2 = out;
            TreeLeafFx_SetRecord(r, v14, 0, p1, p2, &out2, p5);
            if (TreeLeafFx_GetParams(r) != 0) {
                EffectSpl_CreateTracked(data_ov003_0222f298[v14], &out, 0, &q);
            } else {
                r->treeType = 3;
            }
            self->spawnIndex = -1;
        }
    }
    return r;
}
}
}

namespace ns_0221c220 {
extern "C" {
Rec *TreeLeafFx_SpawnLeaves(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5) {
    Unk_ov003_0221c62c_Quad q = data_ov003_02232b78;
    Rec *r = TreeLeafFx_FindFree(self);
    if (r != 0) {
        s32 v14, v18;
        Pos pos;
        Vec3 out;
        Vec3 out2;
        pos.x = p4->x;
        pos.z = p4->z;
        TreeLeafFx_GetTreeType(self, r, &v14, &v18, &out, p3, &pos);
        out2 = out;
        TreeLeafFx_SetRecord(r, v14, 1, p1, p2, &out2, p5);
        if (TreeLeafFx_GetParams(r) != 0) {
            EffectSpl_CreateTracked(v18, &out, 0, &q);
        } else {
            r->treeType = 3;
        }
        self->spawnIndex = -1;
    }
    return r;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeLeafFx_Init(Set *self) {
    Rec *r;
    s32 i;
    for (r = self->records, i = 0; i < 2; r++, i++) {
        TreeLeafFx_Free(r);
    }
    self->spawnIndex = -1;
}
}
}

namespace ns_0221c220 {
extern "C" {
Elem2 *TreeAnim_Construct(Elem2 *self) {
    s32 *p;
    func_020548d0(self->animModel);
    self->unitX = 0;
    self->unitZ = 0;
    func_020f440c(self->seEmitter);
    p = self->unk_120;
    do {
        p[0] = 0;
        p[1] = 0;
        p += 2;
    } while (p != &self->unk_120[6]);
    return self;
}
}
}

namespace ns_0221c220 {
extern "C" {
Big *TreeAnimSet_Construct(Big *self) {
    func_02135714(self, 12, 0x14c, (void *)TreeAnim_Construct, (void *)TreeAnim_Destruct);
    func_02135714(self->cedarAnims, 4, 0x14c, (void *)TreeAnim_Construct, (void *)TreeAnim_Destruct);
    func_02135714(self->unk_14c0, 3, 0x14c, (void *)TreeAnim_Construct, (void *)TreeAnim_Destruct);
    func_02135714(self->palmAnims, 4, 0x14c, (void *)TreeAnim_Construct, (void *)TreeAnim_Destruct);
    {
        Unk_ov003_0221c53c_Slot *s = self->requests;
        do {
            s->unitX = 0;
            s->unitZ = 0;
            s = (Unk_ov003_0221c53c_Slot *)((u8 *)s + 0x18);
        } while (s != (Unk_ov003_0221c53c_Slot *)self->animFiles);
    }
    return self;
}
}
}

namespace ns_0221c220 {
extern "C" {
Big *_ZN11TreeAnimSetD1Ev(Big *self) {
    func_021355f0(self->palmAnims, 4, 0x14c, (void *)TreeAnim_Destruct);
    func_021355f0(self->unk_14c0, 3, 0x14c, (void *)TreeAnim_Destruct);
    func_021355f0(self->cedarAnims, 4, 0x14c, (void *)TreeAnim_Destruct);
    func_021355f0(self, 12, 0x14c, (void *)TreeAnim_Destruct);
    return self;
}
}
}

namespace ns_0221c220 {
extern "C" {
Elem2 *TreeAnim_Destruct(Elem2 *self) {
    func_020f43fc(self->seEmitter);
    func_020548a0(self->animModel);
    return self;
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeAnimSet_Init(Big *self) {
    s32 i, j;
    TreeAnimSet_LoadAnims(self->animFiles);
    for (i = 0; i < 5; i++) self->requests[i].active = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) TreeAnim_Init(&self->treeAnims[i][j]);
    }
    for (i = 0; i < 4; i++) {
        TreeAnim_Init(&self->cedarAnims[i]);
        TreeAnim_Init(&self->palmAnims[i]);
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeAnimSet_Update(Big *self) {
    s32 i, j;
    for (i = 0; i < 5; i++) {
        if (self->requests[i].active != 0) TreeAnimSet_ProcessRequest(self, &self->requests[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) TreeAnim_Update(&self->treeAnims[i][j]);
    }
    for (i = 0; i < 4; i++) {
        TreeAnim_Update(&self->cedarAnims[i]);
        TreeAnim_Update(&self->palmAnims[i]);
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeAnimSet_Draw(Big *self) {
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) TreeAnim_Draw(&self->treeAnims[i][j]);
    }
    for (i = 0; i < 4; i++) {
        TreeAnim_Draw(&self->cedarAnims[i]);
        TreeAnim_Draw(&self->palmAnims[i]);
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
void TreeAnimSet_Release(Big *self) {
    s32 i, j;
    TreeAnimSet_FreeAnims(self->animFiles);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) TreeAnim_Release(&self->treeAnims[i][j]);
    }
    for (i = 0; i < 4; i++) {
        TreeAnim_Release(&self->cedarAnims[i]);
        TreeAnim_Release(&self->palmAnims[i]);
    }
}
}
}

namespace ns_0221c220 {
extern "C" {
u8 *TreeAnimSet_GetInstance(Big *self, u16 *p, s32 a, s32 b) {
    BOOL f = FALSE;
    u32 t = *p;
    if (t >= 0x2f && t <= 0x56) f = TRUE;
    if (f) return (u8 *)self + 0xa60 + a * 0x14c;
    if (t >= 0x57 && t <= 0x5b) return (u8 *)self + b * 0x530 + a * 0x14c;
    if (t == 0x69) return (u8 *)self + 0xa60 + a * 0x14c;
    if (t >= 0x6a && t <= 0x6c) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t == 0x6d) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t >= 0x5d && t <= 0x61) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t >= 0xc8 && t <= 0xcf) return (u8 *)self + 0x18a4 + a * 0x14c;
    return (u8 *)self + b * 0x530 + a * 0x14c;
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnimSet_ProcessRequest(void *a, Unk_ov003_0221c030_Ent *o) {
    s32 w;
    u16 *cell;
    s32 x, z, n;
    Unk_ov003_0221b8bc_V2 p;
    s32 *q;
    s32 hx, hy;
    Unk_ov003_0221b8bc *e;
    void *g = TownBlockMap_Get();
    if (g == 0) {
        TreeAnimRequest_Resolve(o);
        return;
    }
    q = o->unit;
    x = q[0];
    z = q[1];
    hx = x >> 4;
    hy = z >> 4;
    cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
    if (cell == 0) {
        TreeAnimRequest_Resolve(o);
        return;
    }
    q = o->unit;
    x = q[0];
    z = q[1];
    w = o->animKind;
    n = Item_GetTreeStage(cell);
    if (n <= 0 || n > 4) {
        TreeAnimRequest_Resolve(o);
        return;
    }
    e = TreeAnimSet_GetInstance(a, cell, n - 1, (x ^ z) & 1);
    if (e == 0) {
        TreeAnimRequest_Resolve(o);
        return;
    }
    if (e->active == 1) {
        switch (e->animKind) {
        case 4:
        case 5:
        case 6:
        case 7:
            TreeAnimRequest_Resolve(o);
            return;
        default:
            break;
        }
    }
    s32 d = o->isChop;
    p.x = x;
    p.z = z;
    TreeAnim_Start(e, o->sessionSlot, &p, w, n - 1, d);
    o->active = 0;
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnimSet_Request(u8 *a, s32 id, s32 *pos, s32 c, s32 d) {
    void *g = TownBlockMap_Get();
    if (g != 0) {
        s32 x = pos[0];
        s32 z = pos[1];
        s32 hx = x >> 4;
        s32 hy = z >> 4;
        u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
        if (cell != 0) {
            Unk_ov003_0221c030_Ent *e;
            s32 f1, f2;
            u32 v;
            Unk_ov003_0221b8bc_V2 t;
            if (CommManager_isOnline(gCommManager) == 0) {
                id = 0;
            }
            e = (Unk_ov003_0221c030_Ent *)(a + 0x1dd4 + id * 0x18);
            if (e->active != 0) {
                f1 = 0;
                v = *cell;
                if (v >= 0x2f && v <= 0x56) {
                    f1 = 1;
                }
                if (f1 == 0 && v >= 0xc8 && v <= 0xcf) {
                    goto l_ae;
                }
                if (Item_IsTreeGrown(cell) != 0) {
                    goto set;
                }
            l_ae:
                f1 = 1;
                v = *cell;
                if (v != 0x67 && v != 0x6b) {
                    f1 = 0;
                }
                if (f1 != 0) {
                    if (Town_CanReleaseBees() != 0) {
                        goto set;
                    }
                }
                f2 = 1;
                f1 = 0;
                v = *cell;
                if (v >= 0x66 && v <= 0x68) {
                    f1 = f2;
                }
                if (f1 == 0) {
                    if (v < 0x6a || v > 0x6c) {
                        f2 = 0;
                    }
                }
                if (f2 != 0) {
                    goto set;
                }
                if (v >= 0x57 && v <= 0x5b) {
                    goto set;
                }
                if (((volatile s32 *)pos)[0] == e->unit[0] && ((volatile s32 *)pos)[1] == e->unit[1]) {
                    return;
                }
                t.x = pos[0];
                t.z = pos[1];
                PendingUnit_ApplyAt(&t, 0);
                return;
            }
        set:
            e->active = 1;
            e->sessionSlot = id;
            s32 tz = pos[1];
            e->unit[0] = pos[0];
            e->unit[1] = tz;
            e->animKind = c;
            e->isChop = d;
        }
    }
}
}
}

namespace ns_0221b8bc {
extern "C" {
void Tree_KeepShaking(s32 id, s32 *pos) {
    void *g = TownBlockMap_Get();
    if (g != 0) {
        s32 x = pos[0];
        s32 z = pos[1];
        s32 hx = x >> 4;
        s32 hy = z >> 4;
        u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
        if (cell != 0) {
            s32 n;
            Unk_ov003_0221b8bc *e;
            if (CommManager_isOnline(gCommManager) == 0) {
                id = 0;
            }
            n = Item_GetTreeStage(cell);
            if (n > 0 && n <= 4) {
                e = TreeAnimSet_GetInstance(gFieldObjectManager + 0x4b20, cell, n - 1, (pos[0] ^ pos[1]) & 1);
                if (e != 0 && pos[0] == e->unitX && pos[1] == e->unitZ && id == e->sessionSlot) {
                    e->unk_b8 = 0;
                }
            }
        }
    }
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnim_Init(Unk_ov003_0221b8bc *o) {
    CachedModel_allocJointRecord(o->animModel, sFieldObjectAnimHeap);
    AnimModel_allocAnmObj(o->animModel, sFieldObjectAnimHeap);
    o->animKind = 8;
    Model_setCallback(o->animModel, (void *)TreeAnim_ModelCallback, 2, 2, o, 0);
    func_02003ecc(o->seEmitter);
    TreeAnim_Reset(o);
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnim_Update(Unk_ov003_0221b8bc *o) {
    if (o->active == 1) {
        AnimModel_stepAnim(o->animModel);
        if (AnimFrameCtrl_isFinished(o->unk_9c + 8)) {
            TreeAnim_Reset(o);
        } else {
            s32 r5 = 0;
            s32 r6 = *(s32 *)((u8 *)gCommManager + 0x68);
            switch (o->animKind) {
            case 4:
            case 5:
                if (o->animFrame.b >= 0x11) {
                    o->alpha = o->alpha - 0x2955;
                    if (o->alpha < 0) {
                        o->alpha = 0;
                    }
                }
                switch (o->leafSpawnCount) {
                case 0:
                    if (o->animFrame.b >= 4) {
                        r5 = 1;
                    }
                    break;
                case 1:
                    if (o->animFrame.b >= 0x14) {
                        r5 = 1;
                        func_02003e70(o->seEmitter, 0x7ea, 0x7f, 0);
                    }
                    break;
                }
                break;
            case 6:
            case 7:
                if (o->animFrame.b >= 0x11) {
                    o->alpha = o->alpha - 0x2627;
                    if (o->alpha < 0) {
                        o->alpha = 0;
                    }
                }
                switch (o->leafSpawnCount) {
                case 0:
                    if (o->animFrame.b >= 4) {
                        r5 = 1;
                    }
                    break;
                case 1:
                    if (o->animFrame.b >= 0xd) {
                        r5 = 1;
                        func_02003e70(o->seEmitter, 0x7ea, 0x7f, 0);
                    }
                    break;
                }
                break;
            case 2:
                if (o->leafSpawnCount == 0 && o->animFrame.b >= 4) {
                    r5 = 1;
                } else {
                    if (o->leafRecord) {
                        o->leafRecord->lifeTimer = 0x1a;
                    }
                    if (o->seasonalRecord) {
                        o->seasonalRecord->lifeTimer = 0x1a;
                    }
                }
                break;
            case 0:
                if (o->leafSpawnCount == 0 && o->animFrame.b >= 4) {
                    r5 = 1;
                }
                break;
            case 3:
                break;
            case 1:
            default:
                if (o->leafSpawnCount == 0 && o->animFrame.b >= 4) {
                    r5 = 1;
                }
                break;
            }
            func_02105f00(o->resMdl, o->alpha >> 12);
            func_02105f48(o->resMdl, r6 + 0x33);
            if (r5 != 0) {
                void *g = TownBlockMap_Get();
                if (g != 0) {
                    s32 x = o->unitX;
                    s32 z = o->unitZ;
                    s32 hx = x >> 4;
                    s32 hy = z >> 4;
                    u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
                    if (cell != 0) {
                        BOOL f3 = TRUE, f2 = TRUE, f1 = TRUE, f0 = FALSE;
                        u32 v = *cell;
                        s32 n;
                        if (v >= 0x2b && v <= 0x2e) {
                            f0 = TRUE;
                        }
                        if (!f0) {
                            if (v < 0xff || v > 0x102) {
                                f1 = FALSE;
                            }
                        }
                        if (!f1) {
                            if (v < 0x62 || v > 0x65) {
                                f2 = FALSE;
                            }
                        }
                        if (!f2) {
                            if (v < 0xd0 || v > 0xd3) {
                                f3 = FALSE;
                            }
                        }
                        if (f3) {
                            n = Item_GetStumpSize(cell);
                        } else {
                            n = Item_GetTreeStage(cell);
                        }
                        if (n > 0) {
                            Unk_ov003_0221b8bc_V2 a, b;
                            a.x = o->unitX;
                            a.z = o->unitZ;
                            o->leafRecord = (Unk_ov003_0221b8bc_Sub *)TreeLeafFx_SpawnLeaves(&sTreeLeafFx, o->animKind, n - 1, cell, &a, o->leafSpawnCount);
                            b.x = o->unitX;
                            b.z = o->unitZ;
                            o->seasonalRecord = (Unk_ov003_0221b8bc_Sub *)TreeLeafFx_SpawnSeasonal(&sTreeLeafFx, o->animKind, n - 1, cell, &b, o->leafSpawnCount);
                            o->leafSpawnCount = o->leafSpawnCount + 1;
                        }
                    }
                }
            }
        }
        Unk_ov003_0221b8bc_V3 v3;
        v3.x = o->pos.x;
        v3.y = o->pos.y;
        v3.z = o->pos.z;
        func_02003e80(o->seEmitter, &v3);
    }
    o->unk_b8 = 1;
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnim_Draw(Unk_ov003_0221b8bc *o) {
    if (o->active == 1) {
        volatile Unk_ov003_0221b8bc_Col2 l;
        Unk_ov003_0221b8bc_V3 v;
        s32 r = WorldCurve_ToCurved(&v, &o->pos);
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8434(&data_021f47e0, r);
        o->baseMatrix = data_021f47e0;
        AnimModel_drawAnimated(o->animModel, 0);
        l.a = SceneLights_GetRoomColor();
        l.b = l.a;
        NNS_G3dMdlSetMdlEmi(o->resMdl, 0, l.b);
    }
}
}
}

namespace ns_0221b8bc {
extern "C" {
s32 TreeAnim_Release(Unk_ov003_0221b8bc *o) {
    TreeAnim_Reset(o);
    CachedModel_release(o->animModel);
    func_02003e50(o->seEmitter);
}
}
}

namespace ns_0221b8bc {
extern "C" {
void TreeAnim_Begin(Unk_ov003_0221b8bc *o, s32 flag) {
    Unk_ov003_0221b8bc_V2 a, b, c;
    s32 hx, hy, x, z;
    u16 *cell;
    void *g = TownBlockMap_Get();
    x = o->unitX;
    z = o->unitZ;
    hx = x >> 4;
    hy = z >> 4;
    cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), z - (hy << 4), 0);
    switch (o->animKind) {
    case 1:
        break;
    case 2:
    case 3:
        a.x = o->unitX;
        a.z = o->unitZ;
        if (PendingUnit_Find(&a, 0) >= 0) {
            TreeAnim_DropItems(o, cell);
            b.x = o->unitX;
            b.z = o->unitZ;
            PendingUnit_ApplyAtIfAid(&b, o->sessionSlot, 0);
        }
        break;
    default:
        TreeAnim_DropItems(o, cell);
        c.x = o->unitX;
        c.z = o->unitZ;
        PendingUnit_ApplyAtIfAid(&c, o->sessionSlot, 0);
        break;
    }
    if (flag == 0) {
        switch (o->animKind) {
        case 0:
        case 2:
        case 3:
            func_02003e70(o->seEmitter, 0x7dc, 0x7f, 0);
            break;
        case 1:
            func_02003e70(o->seEmitter, 0x7d9, 0x7f, 0);
            break;
        }
    } else {
        switch (o->animKind) {
        case 4:
        case 5:
        case 6:
        case 7:
            func_02003e70(o->seEmitter, 0x855, 0x7f, 0);
            break;
        default:
            func_02003e70(o->seEmitter, 0x7dd, 0x7f, 0);
            break;
        }
    }
    o->active = 1;
}
}
}

namespace ns_0221b8bc {
extern "C" {
s32 Tree_GetDropSide(Unk_ov003_0221b8bc *o, Unk_ov003_0221b8bc_V3 *p) {
    s32 r = 0;
    u16 *q = PlayerActor_GetActor(Field_AidOrLocal(o));
    if (q != 0) {
        if (*(s32 *)((u8 *)q + 0x5c) < p->x) {
            r = 1;
        }
    }
    return r;
}
}
}

namespace ns_0221b8bc {
extern "C" {
void Tree_DropFruit(u16 *cell, s32 id, s32 *pos) {
    volatile Unk_ov003_0221b8bc_Col col;
    Unk_ov003_0221b8bc_V2 xy, xy2;
    Unk_ov003_0221b8bc_V3 base, cur, cp;
    Unk_ov003_0221b8bc_V3 *tbl;
    s32 n, arg, i;
    FieldPos_FromUnitCenter(&base, pos[0], pos[1]);
    switch (*cell) {
    case 0xcc:
        tbl = data_ov003_0223291c[2];
        n = 2;
        arg = 0x1548;
        break;
    case 0x5b:
        tbl = data_ov003_0223291c[0];
        n = 3;
        arg = 0x14b8;
        break;
    default:
        tbl = data_ov003_0223291c[0];
        n = 3;
        arg = sTreeFruitItems[Item_GetFruitTreeFruit(cell)];
        break;
    }
    xy.x = 0;
    xy.z = 0;
    for (i = 0; i < n; i++) {
        s32 r = PendingUnit_FindBySlot(id, i);
        cur.x = base.x + tbl->x;
        cur.y = base.y + tbl->y;
        cur.z = base.z + tbl->z;
        if (r >= 0) {
            u16 v = ((u16 *)PendingUnit_Get())[4];
            col.c = v;
            u16 t = col.c;
            col.b = t;
            col.a = t;
            xy.x = (s32)col.a >> 8;
            xy.z = col.b & 0xff;
            r = 0;
        } else {
            FieldPos_ToUnit(&xy.x, &xy.z, &cur);
            r = 1;
        }
        cp = cur;
        xy2.x = xy.x;
        xy2.z = xy.z;
        FieldItemFx_StartTreeDrop(id, arg, &xy2, &cp, r, i);
        tbl++;
    }
}
}
}

namespace ns_0221b8bc {
extern "C" {
void Tree_DropBeeHive(Unk_ov003_0221b8bc *o, s32 *p) {
    Unk_ov003_0221b8bc_V2 a;
    Unk_ov003_0221b8bc_V3 b;
    Unk_ov003_0221b8bc_V3D c;
    Unk_ov003_0221b8bc_V3 e;
    Unk_ov003_0221b8bc_V3 d;
    if (CommManager_isOnline(gCommManager) == 0 && Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 1) == 0) {
        FieldPos_FromUnitCenter(&b, p[0], p[1]);
        Unk_ov003_0221b8bc_V3 *t = data_ov003_0223291c[0];
        t = t + Tree_GetDropSide(o, &b);
        func_01ffd070(&e, &b, t);
        c.x = e.x;
        c.y = e.y;
        c.z = e.z;
        d = c;
        a.x = p[0];
        a.z = p[1];
        FieldItemFx_StartBeeHiveDrop(o, 0x1569, &a, &d);
    }
}
}
}

namespace ns_0221aed4 {
extern "C" void Tree_DropSpecial(u16 *cell, s32 a, P2 p)
{
    s32 rec = PendingUnit_FindBySlot((u8)a, 0);
    if (rec >= 0) {
        s32 fl = 0;
        Unk_ov003_0221b7d4_Rec *tbl;
        BOOL f = FALSE;
        u32 t = *cell;
        if (t >= 0x66 && t <= 0x68) f = TRUE;
        if (f) {
            tbl = data_ov003_0223291c[0];
            if (t == 0x66) fl = 1;
        } else if (t >= 0x6a && t <= 0x6c) {
            tbl = data_ov003_0223291c[1];
            if (t == 0x6a) fl = 1;
        }
        Unk_ov003_0221aed4_Raw3 d;
        FieldPos_FromUnitCenter(&d, p.x, p.z);
        s32 idx = Tree_GetDropSide(a, &d);
        tbl = tbl + idx;
        Unk_ov003_0221b7d4_Ent *e = PendingUnit_Get(rec);
        Unk_ov003_0221aed4_Raw3 pos;
        s32 px = d.x + tbl->x;
        *(volatile s32 *)&pos.x = px;
        s32 py = d.y + tbl->y;
        *(volatile s32 *)&pos.y = py;
        s32 pz = d.z + tbl->z;
        *(volatile s32 *)&pos.z = pz;
        volatile u16 tt[3];
        tt[2] = e->unit;
        u16 vv = tt[2];
        tt[1] = vv;
        tt[0] = vv;
        s32 hi = tt[0] >> 8;
        s32 lo = tt[1] & 0xff;
        if (fl == 0) {
            FieldItemFx_StartTreeDrop(a, e->unk_0a, P2(hi, lo), V3(px, py, pz), 0, 0);
        } else {
            FieldItemFx_StartTreeDropFloat(a, e->unk_0a, P2(hi, lo), V3(px, py, pz), 0);
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" void Tree_DropItems(u16 *cell, s32 a, P2 p)
{
    BOOL f = FALSE;
    u32 t = *cell;
    if (t >= 0x2f && t <= 0x56) f = TRUE;
    if (f || (t >= 0xc8 && t <= 0xcf) || (t >= 0x57 && t <= 0x5b)) {
        if (Item_IsTreeGrown(cell) != 0) {
            Tree_DropFruit(cell, a, p);
        }
    } else if (t == 0x67 || t == 0x6b) {
        if (Town_CanReleaseBees() != 0) {
            Tree_DropBeeHive(a, p);
        }
    } else if ((t >= 0x66 && t <= 0x68) || (t >= 0x6a && t <= 0x6c)) {
        Tree_DropSpecial(cell, a, p);
    }
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnim_DropItems(Unk_ov003_0221b5e4_Obj *self, void *cell)
{
    Tree_DropItems((u16 *)cell, (s32)self->unk_04, P2(self->unit));
}
}

namespace ns_0221aed4 {
extern "C" s32 TreeAnim_Start(Unk_ov003_0221b5e4_Obj *self, s32 a, P2 p, s32 kind, s32 idx, s32 last)
{
    TownBlockMap_Get();
    BOOL f = TRUE;
    u8 *tbl = gFieldObjectManager + 0x696c;
    if (kind == 2) f = FALSE;
    BlendAnimModel_initAnim(&self->animModel, *(s32 *)(tbl + kind * 16 + 0x80 + idx * 4), f, 0x1000, 0, 0);
    if (self->animKind == 8) {
        AnimModel_attachAnim(&self->animModel);
    }
    self->animKind = kind;
    self->unk_04 = (Unk_ov003_0221b5e4_Mid *)a;
    self->unit.x = p.x;
    self->unit.z = p.z;
    Unk_ov003_0221b65c_Tmp t;
    FieldPos_FromUnitCenter(&t, p.x, p.z);
    self->posX = t.x;
    self->posY = t.y;
    self->posZ = t.z;
    self->alpha = 0x1f000;
    self->leafSpawnCount = 0;
    TreeAnim_Begin(self, last);
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnim_Reset(Unk_ov003_0221b5e4_Obj *self)
{
    self->unk_00 = 0;
    self->alpha = 0;
    self->unit.x = -1;
    self->unit.z = -1;
    for (s32 i = 0; i < 3; i++) {
        self->unk_138[i] = -1;
    }
    self->leafRecord = 0;
    self->seasonalRecord = 0;
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnim_ModelCallback(Unk_ov003_0221b5e4_Obj *self)
{
    Unk_ov003_0221b5e4_Sub *s = self->unk_04->ptrUser;
    if (self->unk_00->nodeId == 2) {
        switch (s->animKind) {
        case 0:
        case 1:
        case 2:
        case 3:
            *self->pVisAnmResult = 0;
            break;
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnimSet_LoadAnims(u32 (*arr)[4])
{
    s32 i = 0;
    for (; i < 8; i++) {
        s32 j = 0;
        for (; j < 4; j++) {
            s32 v = TreeAnimSet_GetAnimPath(arr, i, j);
            if (v != 0) {
                arr[i][j] = (u32)File_LoadAlloc((void *)v, sFieldObjectAnimHeap, 4, 0);
                void *r = func_021065dc((void *)arr[i][j]);
                *(u32 *)((u8 *)&arr[i][j] + 0x80) = (u32)func_021065f8(r, 0);
            } else {
                arr[i][j] = 0;
                *(u32 *)((u8 *)&arr[i][j] + 0x80) = 0;
            }
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnimSet_FreeAnims(u32 (*arr)[4])
{
    void *heap = sFieldObjectAnimHeap;
    s32 i = 0;
    for (; i < 8; i++) {
        s32 j = 0;
        for (; j < 4; j++) {
            if (arr[i][j] != 0) {
                Heap_Free(heap, (void *)arr[i][j]);
                arr[i][j] = 0;
            }
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" s32 TreeAnimSet_GetAnimPath(void *self, u32 a, u32 b)
{
    return sTreeAnimPaths[a][b];
}
}

namespace ns_0221aed4 {
extern "C" void TreeAnimRequest_Resolve(Unk_ov003_0221b4b8_Obj *self)
{
    if (self->animKind != 1) {
        void *g = TownBlockMap_Get();
        if (g != 0) {
            s32 x = self->unit.x;
            s32 z = self->unit.z;
            s32 hx = x >> 4;
            s32 hz = z >> 4;
            void *c = BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
            if (c != 0) {
                Tree_DropItems((u16 *)c, self->sessionSlot, P2(self->unit));
            }
        }
    }
    PendingUnit_ApplyAtIfAid(P2(self->unit), self->sessionSlot, 0);
    self->active = 0;
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_ReleasePending(Unk_ov003_0221aed4_Fx *self)
{
    if (self->pendingApply != 0) {
        self->pendingApply = 0;
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unitX;
        t.z = self->unitZ;
        PendingUnit_ApplyAt(&t, 0);
    } else if (self->pendingCommit != 0) {
        self->pendingCommit = 0;
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unitX;
        t.z = self->unitZ;
        PendingUnit_CommitAt(&t, 0);
    }
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_Init(Unk_ov003_0221aed4_Fx *self, s32 a, P2 p, V3 pos, s32 kind, u16 w, s32 x, s16 y, s32 z)
{
    self->sessionSlot = a;
    self->active = 1;
    self->kind = kind;
    self->unitX = p.x;
    self->unitZ = p.z;
    self->startArg = y;
    self->unk_4a = 0;
    self->originX = pos.x;
    self->originY = pos.y;
    self->originZ = pos.z;
    self->pendingApply = 1;
    self->pendingCommit = 0;
    self->offsetX = 0;
    self->offsetY = 0;
    self->offsetZ = 0;
    {
        Unk_ov003_0221aed4_Raw2 t;
        t.x = self->unitX;
        t.z = self->unitZ;
        s32 i = PendingUnit_Find(&t, 0);
        if (i >= 0) {
            self->unk_0a = PendingUnit_Get(i)->unk_0a;
        } else {
            self->unk_0a = 0xfff1;
        }
    }
    self->item = w;
    self->step = 0;
    self->frame = 0;
    self->timer = 0;
    self->alpha = 0x1f;
    switch (kind) {
    case 0:
    case 13:
        FieldItemFx_InitToss(self, p, pos);
        break;
    case 1:
        FieldItemFx_InitDigHole(self, p, (void *)x, z);
        break;
    case 2:
        FieldItemFx_InitPitfallHole(self, p);
        break;
    case 3:
        FieldItemFx_InitFillHole(self, p, (void *)x);
        break;
    case 4:
        FieldItemFx_InitPop(self, p);
        break;
    case 5:
        FieldItemFx_InitTreeDrop(self, p, pos, z);
        break;
    case 6:
        FieldItemFx_InitTreeDropFloat(self, p, pos);
        break;
    case 7:
        FieldItemFx_InitBeeHiveDrop(self, p, pos);
        break;
    case 8:
        FieldItemFx_InitDigUpTree(self, p, y);
        break;
    case 9:
        FieldItemFx_InitPlant(self, p, pos, w);
        break;
    case 10:
        FieldItemFx_InitHoleShrink(self, p);
        break;
    case 11:
        FieldItemFx_InitStrikeShake(self, p);
        break;
    case 12:
        FieldItemFx_InitBalloonDrop(self, pos);
        break;
    case 14:
        FieldItemFx_InitPitfallClose(self, p, x);
        break;
    }
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_Finish(Unk_ov003_0221aed4_Fx *self)
{
    FieldItemFx_ReleasePending(self);
    self->active = 0;
    self->kind = 0xf;
    self->item = 0xfff1;
    self->unk_0a = 0xfff1;
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_Clear(Unk_ov003_0221aed4_Fx *self)
{
    self->active = 0;
    self->kind = 0xf;
    self->item = 0xfff1;
    self->unk_0a = 0xfff1;
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_InitToss(Unk_ov003_0221aed4_Fx *self, P2 p, V3 q)
{
    Unk_ov003_0221aed4_Raw3 t;
    FieldPos_FromUnitCenter(&t, p.x, p.z);
    s32 a = func_02133150(t.z - q.z, 9);
    self->velocityX = func_02133150(t.x - q.x, 9);
    self->velocityY = 0x1000;
    self->velocityZ = a;
    self->posX = q.x;
    self->posY = q.y;
    self->posZ = q.z;
    BOOL f = FALSE;
    self->scaleX = 0;
    self->scaleY = 0x1000;
    self->scaleZ = 0;
    volatile u16 w = 0xfff1;
    s32 k = -1;
    w = self->item;
    u32 a1 = w;
    u32 b1 = w;
    if (b1 >= 0x1492 && a1 <= 0x14fd) f = TRUE;
    if (f) {
        if (self->kind == 0xd) {
            u32 h = *(volatile u16 *)&self->item;
            if (h >= 0x149b) k = 0x815;
        } else {
            k = 0x74;
        }
    } else {
        k = 0x75;
    }
    if (k >= 0) {
        func_02003e70(self->seEmitter, k, 0x7f, 0);
    }
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_UpdateToss(Unk_ov003_0221aed4_Fx *self)
{
    self->scaleX = self->scaleX + 0x19a;
    if (self->scaleX >= 0x1000) {
        self->scaleX = 0x1000;
    }
    self->scaleZ = self->scaleX;
    self->velocityY = self->velocityY - 0x400;
    VEC_Add(&self->posX, &self->velocityX, &self->posX);
    if (self->posY < 0) {
        self->posY = 0;
        if (self->step == 0) {
            self->step = 1;
            self->velocityX = (self->velocityX * 0x4cd) >> 12;
            self->velocityY = 0x600;
            self->velocityZ = (self->velocityZ * 0x4cd) >> 12;
            volatile u16 t = 0xfff1;
            t = self->item;
            BOOL f = FALSE;
            u32 a = t;
            u32 b = t;
            if (b >= 0x1492 && a <= 0x14fd) f = TRUE;
            if (f) {
                func_02003e70(self->seEmitter, 0x70, 0x7f, 0);
            }
        } else {
            self->step = 2;
            self->velocityX = 0;
            self->velocityY = 0;
            self->velocityZ = 0;
            FieldItemFx_Finish(self);
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_InitDigHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g, s32 flag)
{
    FieldPos_FromUnitCenter(&self->posX, p.x, p.z);
    self->scaleX = 0;
    self->scaleY = 0x1000;
    self->scaleZ = 0;
    self->velocityX = 0;
    self->velocityY = 0;
    self->velocityZ = 0;
    s32 x = p.x;
    s32 z = p.z;
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    u16 *c = (u16 *)BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
    if (c != 0) {
        s32 r = BlockMap_IsBuriedAtUnit(g, p.x, p.z);
        if (Item_IsFlower(c) != 0) {
            Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
            Flower_SpawnPetalFx(c, &q, 0, 0);
        } else {
            BOOL f = FALSE;
            u32 v = *c;
            if (v >= 0x21 && v <= 0x24) f = TRUE;
            if (f || (v >= 0x1f && v <= 0x20)) {
                Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
                Weed_SpawnPullFx(c, &q);
            } else if (v == 0xe2) {
                Unk_ov003_0221aed4_Raw2 q;
            q.x = p.x;
            q.z = p.z;
                func_02044014(&q);
            } else if (r != 0 || (v >= 0xd4 && v <= 0xda) || (v >= 0xdb && v <= 0xe1)) {
                if (flag != 0) {
                    self->pendingApply = 0;
                    self->pendingCommit = 1;
                }
            }
        }
        if (BlockMap_IsBuriedAtUnit(g, p.x, p.z) != 0) {
            Field_SetUnitItem(p.x, p.z, 0xfff1, 0);
        }
    }
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_UpdateHoleOpen(Unk_ov003_0221aed4_Fx *self)
{
    self->scaleX = self->scaleX + 0x571;
    if (self->scaleX >= 0x1000) {
        self->scaleX = 0x1000;
        FieldItemFx_Finish(self);
    }
    self->scaleZ = self->scaleX;
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_InitPitfallHole(Unk_ov003_0221aed4_Fx *self, P2 p)
{
    FieldPos_FromUnitCenter(&self->posX, p.x, p.z);
    self->scaleX = 0;
    self->scaleY = 0x1000;
    self->scaleZ = 0;
    self->velocityX = 0;
    self->velocityY = 0;
    self->velocityZ = 0;
    self->pendingApply = 0;
    self->pendingCommit = 1;
}
}

namespace ns_0221aed4 {
extern "C" void FieldItemFx_InitFillHole(Unk_ov003_0221aed4_Fx *self, P2 p, void *g)
{
    FieldPos_FromUnitCenter(&self->posX, p.x, p.z);
    if (BlockMap_getDigKind(g, p.x, p.z) == 0) {
        self->item = 0xfc;
    } else {
        self->item = 0xfd;
    }
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    self->velocityX = 0;
    self->velocityY = 0;
    self->velocityZ = 0;
    Field_SetUnitItem(p.x, p.z, 0xfff1, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateHoleClose(Unk_ov003_0221a4a0 *self)
{
    self->scaleX = self->scaleX - 0x154;
    if (self->scaleX < 0) {
        volatile u16 tmp;
        Unk_ov003_0221a4a0_V2 pos;
        tmp = 0xfff1;
        self->scaleX = 0;
        tmp = self->unk_0a;
        u32 v;
        if (Unk_ov003_0221ad84_Chk(&tmp, v) || (v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) ||
            (v >= 0x2f && v <= 0x56) || (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 ||
            (v >= 0x6a && v <= 0x6c) || v == 0x6d || (v >= 0xc8 && v <= 0xcf) || (v >= 0xd4 && v <= 0xda)) {
            pos.a = self->unitX;
            pos.b = self->unitZ;
            if (FieldItemFx_StartPop(self->sessionSlot, self->unk_0a, &pos)) {
                self->pendingApply = 0;
                FieldItemFx_Finish(self);
            }
        } else {
            FieldItemFx_Finish(self);
        }
    }
    self->scaleZ = self->scaleX;
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitPop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    struct Pad { s32 v[2]; Pad() {} ~Pad() {} } pad;
    volatile u16 tmp;
    FieldPos_FromUnitCenter(&self->posX, p->a, p->b);
    s32 z = 0;
    self->scaleX = z;
    self->scaleY = z;
    self->scaleZ = z;
    s32 id = 0x813;
    tmp = 0xfff1;
    tmp = self->item;
    u32 a = tmp;
    u32 c = tmp;
    if (c >= 0xa7 && a <= 0xc6) {
        z = 1;
    }
    if (z) {
        id = 0x7f0;
    }
    func_02003e70(self->seEmitter, id, 0x7f, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdatePop(Unk_ov003_0221a4a0 *self)
{
    if ((u16)self->frame >= 0x10) {
        self->frame = 0x10;
        FieldItemFx_Finish(self);
    }
    self->scaleX = sItemPopScaleXZ[(u16)self->frame];
    self->scaleZ = self->scaleX;
    self->scaleY = sItemPopScaleY[(u16)self->frame];
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitTreeDrop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, s32 skip)
{
    volatile u16 tmp;
    s32 z = 0;
    self->velocityX = z;
    self->velocityY = 0x800;
    self->velocityZ = 0x300;
    self->posX = q->x;
    self->posY = q->y;
    self->posZ = q->z;
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    if (self->startArg != 0) {
        self->pendingApply = z;
    }
    if (skip == 0) {
        tmp = 0xfff1;
        tmp = self->item;
        BOOL r = FALSE;
        u32 a = tmp;
        u32 c = tmp;
        if (c >= 0x1492 && a <= 0x14fd) {
            r = TRUE;
        }
        func_02003e70(self->seEmitter, r ? 0x74 : 0x7d6, 0x7f, 0);
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateTreeDrop(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_V3 v;
    volatile u16 tmp;
    self->velocityY = self->velocityY - 0x400;
    VEC_Add(&self->posX, &self->velocityX, &self->posX);
    if (self->posY < 0) {
        if (self->step == 0) {
            FieldPos_FromUnitCenter(&v, self->unitX, self->unitZ);
            s32 r5 = func_02133150(v.z - self->posZ, 8);
            self->velocityX = func_02133150(v.x - self->posX, 8);
            self->velocityY = 0x1000;
            self->velocityZ = r5;
            self->step = 1;
            tmp = 0xfff1;
            tmp = self->item;
            s32 z = 0;
            u32 a = tmp;
            u32 c = tmp;
            if (c >= 0x1492 && a <= 0x14fd) {
                z = 1;
            }
            if (z) {
                func_02003e70(self->seEmitter, 0x70, 0x7f, 0);
            }
        } else {
            self->velocityX = 0;
            self->velocityY = 0;
            self->velocityZ = 0;
            FieldItemFx_Finish(self);
        }
        self->posY = 0;
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitTreeDropFloat(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q)
{
    Unk_ov003_0221a4a0_V3 v;
    FieldPos_FromUnitCenter(&v, p->a, p->b);
    s32 r7 = func_02133150(v.z - q->z, 0x1e);
    s32 r6 = -func_02133150(q->y, 0x1e);
    self->velocityX = func_02133150(v.x - q->x, 0x1e);
    self->velocityY = r6;
    self->velocityZ = r7;
    self->posX = q->x;
    self->posY = q->y;
    self->posZ = q->z;
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    if (self->startArg != 0) {
        FieldItemFx_ReleasePending(self);
    }
    func_02003e70(self->seEmitter, 0x7eb, 0x7f, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateTreeDropFloat(Unk_ov003_0221a4a0 *self)
{
    VEC_Add(&self->posX, &self->velocityX, &self->posX);
    self->frame = self->frame + 0x888;
    self->offsetX = data_02135f44[((u16)(s16)self->frame >> 4) * 2] >> 1;
    if (self->posY < 0) {
        self->posY = 0;
        self->velocityX = 0;
        self->velocityY = 0;
        self->velocityZ = 0;
        FieldItemFx_Finish(self);
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitBeeHiveDrop(Unk_ov003_0221a4a0 *self, s32 a, Unk_ov003_0221a4a0_V3 *p)
{
    self->velocityX = 0;
    self->velocityY = 0x800;
    self->velocityZ = 0x300;
    self->posX = p->x;
    self->posY = p->y;
    self->posZ = p->z;
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    func_02003e70(self->seEmitter, 0x7d6, 0x7f, 0);
    FieldItemFx_ReleasePending(self);
    Town_SetBeesReleased();
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateBeeHiveDrop(Unk_ov003_0221a4a0 *self)
{
    switch (self->step) {
    case 0:
        self->velocityY = self->velocityY - 0x400;
        VEC_Add(&self->posX, &self->velocityX, &self->posX);
        if (self->posY < 0) {
            s32 z = 0;
            self->posY = z;
            self->velocityX = z;
            self->velocityY = 0x1000;
            self->velocityZ = z;
            self->step = 1;
        }
        break;
    case 1:
        self->velocityY = self->velocityY - 0x400;
        VEC_Add(&self->posX, &self->velocityX, &self->posX);
        if (self->posY < 0) {
            self->posY = 0;
            self->velocityX = 0;
            self->velocityY = 0;
            self->velocityZ = 0;
            self->step = 2;
            self->timer = 20;
        }
        break;
    case 2:
        self->timer = self->timer - 1;
        if (self->timer < 0) {
            Insect_SpawnBeeSwarm(&self->posX);
            self->timer = 30;
            self->step = 3;
        }
        break;
    case 3:
        self->timer = self->timer - 1;
        if (self->timer < 0) {
            self->step = 4;
        }
        break;
    default:
        self->alpha = self->alpha - 1;
        if (self->alpha < 0) {
            FieldItemFx_Clear(self);
        }
        break;
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitDigUpTree(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, u32 ang)
{
    FieldPos_FromUnitCenter(&self->posX, p->a, p->b);
    s32 i = ((u16)ang >> 4) * 2;
    self->velocityX = (data_02135f44[i] << 10) >> 12;
    self->velocityY = 0x1000;
    self->velocityZ = (data_02135f44[i + 1] << 10) >> 12;
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    self->pendingApply = 0;
    Field_SetUnitItem(p->a, p->b, 0xfff1, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateDigUpTree(Unk_ov003_0221a4a0 *self)
{
    self->velocityY = self->velocityY - 0x400;
    VEC_Add(&self->posX, &self->velocityX, &self->posX);
    if (self->posY < 0) {
        self->posY = 0;
        self->velocityX = 0;
        self->velocityY = 0;
        self->velocityZ = 0;
        FieldItemFx_Finish(self);
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitPlant(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p, Unk_ov003_0221a4a0_V3 *q, u32 w)
{
    Unk_ov003_0221a4a0_V3 v;
    volatile u16 tmp;
    FieldPos_FromUnitCenter(&v, p->a, p->b);
    s32 r6 = func_02133150(v.z - q->z, 8);
    self->velocityX = func_02133150(v.x - q->x, 8);
    self->velocityY = 0x1000;
    self->velocityZ = r6;
    self->posX = q->x;
    self->posY = q->y;
    self->posZ = q->z;
    s32 z = 0;
    self->scaleX = z;
    self->scaleY = 0x1000;
    self->scaleZ = z;
    self->pendingApply = z;
    tmp = 0xfff1;
    tmp = w;
    u32 a = tmp;
    u32 c = tmp;
    if (c >= 0x1492 && a <= 0x14fd) {
        z = 1;
    }
    func_02003e70(self->seEmitter, z ? 0x74 : 0x75, 0x7f, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdatePlant(Unk_ov003_0221a4a0 *self)
{
    volatile u16 tmp;
    self->scaleX = self->scaleX + 0x19a;
    if (self->scaleX >= 0x1000) {
        self->scaleX = 0x1000;
    }
    self->scaleZ = self->scaleX;
    self->velocityY = self->velocityY - 0x400;
    VEC_Add(&self->posX, &self->velocityX, &self->posX);
    if (self->posY < 0) {
        self->posY = 0;
        self->velocityX = 0;
        self->velocityY = 0;
        self->velocityZ = 0;
        if (self->step == 0) {
            BOOL r = FALSE;
            tmp = 0xfff1;
            tmp = self->unk_0a;
            u32 a = tmp;
            u32 c = tmp;
            if (c >= 0x1492 && a <= 0x14fd) {
                r = TRUE;
            }
            if (r) {
                func_02003e70(self->seEmitter, 0x70, 0x7f, 0);
            }
        }
        self->step = 1;
        FieldItemFx_Finish(self);
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitHoleShrink(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    FieldPos_FromUnitCenter(&self->posX, p->a, p->b);
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    self->velocityX = 0;
    self->velocityY = 0;
    self->velocityZ = 0;
    FieldItemFx_ReleasePending(self);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateHoleShrink(Unk_ov003_0221a4a0 *self)
{
    u32 r = (u16)self->frame;
    if ((r >= 6 && r <= 10) || r >= 0x12) {
        self->scaleX = self->scaleX - 0x19a;
    }
    if (self->scaleX <= 0) {
        self->scaleX = 0;
        FieldItemFx_Finish(self);
    }
    self->scaleZ = self->scaleX;
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitStrikeShake(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V2 *p)
{
    self->scaleX = 0x1000;
    self->scaleY = 0x1000;
    self->scaleZ = 0x1000;
    Field_SetUnitItem(p->a, p->b, 0xfff1, 0);
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateStrikeShake(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_V3 v;
    Unk_ov003_0221a4a0_V3 out;
    self->timer = self->timer + 0x2000;
    s32 h = data_02135f44[((u16)self->timer >> 4) * 2] >> 1;
    v.x = (h * data_02135f44[((u16)self->startArg >> 4) * 2]) >> 12;
    v.y = 0;
    v.z = (h * data_02135f44[((u16)self->startArg >> 4) * 2 + 1]) >> 12;
    func_01ffd070(&out, &self->origin, &v);
    self->posX = out.x;
    self->posY = out.y;
    self->posZ = out.z;
    if (self->timer < 0) {
        FieldItemFx_Finish(self);
    }
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_SplashPosCallback(void *p)
{
    Unk_ov003_0221a664_Obj *o = (Unk_ov003_0221a664_Obj *)p;
    Unk_ov003_0221a4a0_V3 *d = &o->pos;
    o->pos.x = sBalloonSplashPos.x;
    d->y = sBalloonSplashPos.y;
    d->z = sBalloonSplashPos.z;
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_InitBalloonDrop(Unk_ov003_0221a4a0 *self, Unk_ov003_0221a4a0_V3 *p)
{
    self->posX = p->x;
    self->posY = p->y;
    self->posZ = p->z;
    self->velocityX = 0;
    self->velocityY = -0xc00;
    self->velocityZ = 0;
}
}

namespace ns_0221a4a0 {
extern "C" void FieldItemFx_UpdateBalloonDrop(Unk_ov003_0221a4a0 *self)
{
    Unk_ov003_0221a4a0_Buf b;
    Unk_ov003_0221a4a0_V3 v;
    GroundInfo_initAtPos(&b, &self->posX, 0, 0);
    if (b.waterKind != 0) {
        if (self->step == 0) {
            VEC_Add(&self->posX, &self->velocityX, &self->posX);
            s32 t = b.waterSurfaceY;
            if (self->posY < t) {
                self->velocityY = 0;
                sBalloonSplashPos.x = self->posX;
                sBalloonSplashPos.y = self->posY;
                sBalloonSplashPos.z = self->posZ;
                sBalloonSplashPos.y = t;
                EffectSpl_CreateOneShot(0x45, &sBalloonSplashPos, 0, gEffectSplDefaultInitCbs);
                EffectSpl_CreateOneShot(0x4a, &sBalloonSplashPos, 0, gEffectSplDefaultInitCbs);
                EffectModel_Start(2, (void *)FieldItemFx_SplashPosCallback);
                self->step = 1;
                self->timer = 12;
                self->posY = self->posY - 0x2000;
                Sky_PlayBalloonDropSe(1);
            }
        } else {
            self->timer = self->timer - 1;
            if (self->timer < 0) {
                Sky_EndBalloonDrop();
                PlayerActor_LocalRequestAct77From(&self->posX);
                self->pendingApply = 0;
                FieldItemFx_Finish(self);
            }
        }
    } else {
        if (self->step == 0) {
            VEC_Add(&self->posX, &self->velocityX, &self->posX);
            if (self->posY < 0) {
                self->posY = 0;
                self->timer = FieldItemFx_FindLandingUnit(&self->unitX);
                FieldPos_FromUnitCenter(&v, self->unitX, self->unitZ);
                s32 r5 = func_02133150(v.z - self->posZ, 8);
                self->velocityX = func_02133150(v.x - self->posX, 8);
                self->velocityY = 0x1000;
                self->velocityZ = r5;
                self->step = 1;
                Sky_PlayBalloonDropSe(0);
            }
        } else {
            self->velocityY = self->velocityY - 0x400;
            VEC_Add(&self->posX, &self->velocityX, &self->posX);
            if (self->posY < 0) {
                self->posY = 0;
                self->velocityX = 0;
                self->velocityY = 0;
                self->velocityZ = 0;
                Sky_EndBalloonDrop();
                if (self->timer == 0) {
                    if (self->item == 0x137b) {
                        Unk_02097ff4_setFlag(PlayerData_GetCurrent(), 0x30);
                    }
                    Field_SetUnitItem(self->unitX, self->unitZ, self->item, 0);
                }
                self->pendingApply = 0;
                FieldItemFx_Finish(self);
            }
        }
    }
    GroundInfo_Destruct(&b);
}
}

namespace ns_02219b84 {
extern "C" {
void FieldItemFx_InitPitfallClose(Ent *e, P2 *p, void *m) {
    FieldPos_FromUnitCenter(&e->unk_18, p->x, p->y);
    if (BlockMap_getDigKind(m, p->x, p->y) == 0) {
        e->unk_08 = 0xfc;
    } else {
        e->unk_08 = 0xfd;
    }
    e->unk_3c.x = 0x1000;
    e->unk_3c.y = 0x1000;
    e->unk_3c.z = 0x1000;
    s32 z = 0;
    e->unk_30 = z;
    e->unk_34 = z;
    e->unk_38 = z;
    Field_SetUnitItem(p->x, p->y, 0xfff1, z);
    s32 i = PendingUnit_Find(P2(e->unk_10), 0);
    if (i >= 0) {
        *(u16 *)(PendingUnit_Get(i) + 0xa) = 0xfff1;
    }
}
}
}

namespace ns_02219b84 {
extern "C" {
void FieldItemFxTable_Init(Tbl *t) {
    Ent *e = t->e;
    s32 i;
    for (i = 0; i < 20; e++, i++) {
        e->unk_04 = 0;
        e->unk_08 = 0xfff1;
        func_02003ecc(e->unk_60);
    }
}
}
}

namespace ns_02219b84 {
extern "C" {
void FieldItemFxTable_Update(Tbl *t) {
    volatile u16 v = 0xfff1;
    Ent *e = t->e;
    V3 tmp;
    s32 i;
    CommManager_isOnline(gCommManager);
    for (i = 0; i < 20; e++, i++) {
        if (e->unk_04 != 0) {
            e->unk_4e++;
            v = e->unk_08;
            switch (e->unk_0c) {
            case 0:
            case 13:
                FieldItemFx_UpdateToss(e);
                break;
            case 1:
            case 2:
                FieldItemFx_UpdateHoleOpen(e);
                break;
            case 3:
            case 14:
                FieldItemFx_UpdateHoleClose(e);
                break;
            case 4:
                FieldItemFx_UpdatePop(e);
                break;
            case 5:
                FieldItemFx_UpdateTreeDrop(e);
                break;
            case 6:
                FieldItemFx_UpdateTreeDropFloat(e);
                break;
            case 7:
                FieldItemFx_UpdateBeeHiveDrop(e);
                break;
            case 8:
                FieldItemFx_UpdateDigUpTree(e);
                break;
            case 9:
                FieldItemFx_UpdatePlant(e);
                break;
            case 10:
                FieldItemFx_UpdateHoleShrink(e);
                break;
            case 11:
                FieldItemFx_UpdateStrikeShake(e);
                break;
            case 12:
                FieldItemFx_UpdateBalloonDrop(e);
                break;
            }
            tmp.x = e->unk_18.x;
            tmp.y = e->unk_18.y;
            tmp.z = e->unk_18.z;
            func_02003e80(e->unk_60, &tmp);
        }
    }
}
}
}

namespace ns_02219b84 {
extern "C" {
void FieldItemFxTable_Draw(Ent *e) {
    BOOL k4, k3, k2, f1;
    volatile u16 type = 0xfff1;
    s32 i = 0;
    s32 y4;
    s32 y8;
    s32 ang;
    volatile u16 *tp = &type;
    s32 z0c = 0;
    struct {
        V3 v50, v5c, v68, v74, v80, v8c, v98;
    } l;
    for (;;) {
        if (e->unk_04 != 0 && e->unk_08 != 0xfff1) {
            func_01ffd070(&l.v74, &e->unk_18, &e->unk_24);
            l.v5c.x = l.v74.x;
            l.v5c.y = l.v74.y;
            l.v5c.z = l.v74.z;
            type = e->unk_08;
            s32 k = (type & 0xf000) >> 12;
            switch (k) {
            case 1:
            case 3:
            case 4: {
                l.v80.x = l.v5c.x;
                l.v80.y = l.v5c.y;
                l.v80.z = l.v5c.z;
                l.v8c.x = 0x1000;
                l.v8c.y = 0x1000;
                l.v8c.z = 0x1000;
                FieldObj_DrawItemIcon(gFieldObjectManager, e->unk_08, &l.v80, e->unk_52, &l.v8c, z0c, z0c, z0c);
                break;
            }
            default: {
                V3 *pv = &e->unk_3c;
                l.v68.x = pv->x;
                l.v68.y = pv->y;
                l.v68.z = pv->z;
                ang = WorldCurve_ToCurved(&l.v50, &l.v5c);
                func_020e8388(&data_021f47e0, l.v50.x, l.v50.y, l.v50.z);
                func_020e8434(&data_021f47e0, ang);
                func_020e84f8(&data_021f47e0, l.v68.x, l.v68.y, l.v68.z);
                u16 a;
                if (Unk_ov003_02219e7c_Chk1(&type, tp, a) || (a >= 0x1f && a <= 0x20)) {
                    FieldObj_DrawGrass(gFieldObjectManager, &type, data_021f47e0);
                } else {
                k4 = TRUE, k3 = TRUE, k2 = TRUE, f1 = FALSE;
                if (a <= 5) {
                    f1 = TRUE;
                }
                if (!f1) {
                    if (a < 6 || a > 0xb) {
                        k2 = FALSE;
                    }
                }
                if (!k2) {
                    if (a < 0xc || a > 0x11) {
                        k3 = FALSE;
                    }
                }
                if (!k3) {
                    if ((a < 0x12 || a > 0x19) && a != 0x1c) {
                        k4 = FALSE;
                    }
                }
                if (k4 || (a >= 0x8a && a <= 0x8f) || (a >= 0x90 && a <= 0x95) ||
                           (a >= 0x96 && a <= 0x9b) || (a >= 0x9c && a <= 0xa3) || a == 0xa5) {
                    FieldObj_DrawFlower(gFieldObjectManager, &type, data_021f47e0);
                } else if ((a >= 0x6e && a <= 0x73) || (a >= 0x74 && a <= 0x79) || (a >= 0x7a && a <= 0x7f) ||
                           (a >= 0x80 && a <= 0x87)) {
                    FieldObj_DrawFlowerBySpecies(gFieldObjectManager, &type, data_021f47e0);
                } else if (Unk_ov003_02219e7c_Chk4(a) || !(a != 0x88 && a != 0x89)) {
                    FieldObj_DrawSpecialFlower(gFieldObjectManager, &type, data_021f47e0);
                } else if (a >= 0xfc && a <= 0xfd) {
                    FieldObj_DrawHole(gFieldObjectManager, &type, data_021f47e0);
                } else if ((a >= 0x2b && a <= 0x2e) || (a >= 0xff && a <= 0x102) || (a >= 0x62 && a <= 0x65) ||
                           (a >= 0xd0 && a <= 0xd3)) {
                    FieldObj_DrawStump(gFieldObjectManager, &type, data_021f47e0);
                } else if ((a >= 0x26 && a <= 0x2a) || (a >= 0x5d && a <= 0x61) || (a >= 0x2f && a <= 0x56) ||
                           (a >= 0x57 && a <= 0x5b) || (a >= 0x66 && a <= 0x68) || a == 0x69 ||
                           (a >= 0x6a && a <= 0x6c) || a == 0x6d || (a >= 0xc8 && a <= 0xcf)) {
                    l.v98.x = l.v5c.x;
                    l.v98.y = l.v5c.y;
                    l.v98.z = l.v5c.z;
                    s32 px = *(volatile s32 *)&e->unk_10.x;
                    y4 = *(volatile s32 *)&e->unk_10.y;
                    FieldObj_DrawTree(gFieldObjectManager, &type, px, y4, &l.v98, data_021f47e0);
                } else if (a == 0x25 || a == 0x5c || a == 0xc7) {
                    s32 px = *(volatile s32 *)&e->unk_10.x;
                    y8 = *(volatile s32 *)&e->unk_10.y;
                    FieldObj_DrawSapling(gFieldObjectManager, &type, px, y8, data_021f47e0);
                } else if ((a >= 0xe3 && a <= 0xe7) || (a >= 0xe8 && a <= 0xfb)) {
                    FieldObj_DrawRock(gFieldObjectManager, &type, data_021f47e0);
                } else if ((a >= 0xd4 && a <= 0xda) || (a >= 0xdb && a <= 0xe1)) {
                    FieldObj_DrawTurnip(gFieldObjectManager, &type, data_021f47e0);
                } else if (a >= 0xa7 && a <= 0xc6) {
                    FieldObj_DrawDesign(gFieldObjectManager, &type, data_021f47e0);
                }
                }
            }
            }
        }
        e++;
        i++;
        if (i >= 20) {
            break;
        }
    }
}
}
}

namespace ns_02219b84 {
extern "C" {
void FieldItemFxTable_Release(Tbl *t) {
    Ent *e = t->e;
    s32 i;
    for (i = 0; i < 20; e++, i++) {
        if (e->unk_04 != 0) {
            FieldItemFx_Finish(e);
        }
        func_02003e50(e->unk_60);
    }
}
}
}

namespace ns_02219b84 {
extern "C" {
Ent *FieldItemFxTable_FindFree(Tbl *t, s32 g) {
    s32 i;
    Ent *r = 0;
    Ent *e = &t->e[g * 4];
    for (i = 0; i < 4; e++, i++) {
        if (e->unk_04 == 0) {
            r = e;
            break;
        }
    }
    return r;
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFxTable_Start(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i) {
    void *map = TownBlockMap_Get();
    if (map == 0) {
        return 0;
    }
    s32 r = 0;
    Ent *e = FieldItemFxTable_FindFree(t, a);
    if (e != 0) {
        FieldItemFx_Init(e, a, p, v, f, *(u16 *)&g, map, *(s16 *)&h, i);
        r = 1;
    }
    return r;
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFxTable_StartForPlayer(Tbl *t, s32 a, P2 p, V3 v, s32 f, u32 g, s32 h, s32 i) {
    if (CommManager_isOnline(gCommManager) == 0) {
        a = 0;
    }
    return FieldItemFxTable_Start(t, a, p, v, f, *(u16 *)&g, *(s16 *)&h, i);
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFx_CancelAt(s32 idx, P2 *q) {
    s32 r = 0;
    s32 i;
    Ent *e = &sFieldItemFxTable.e[idx * 4];
    for (i = 0; i < 4; e++, i++) {
        if (e->unk_04 != 0) {
            if (P2(e->unk_10) == *q) {
                if (e->unk_a0 != 0) {
                    r = 1;
                }
                FieldItemFx_Finish(e);
                break;
            }
        }
    }
    return r;
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFx_StartDrop(s32 a, u32 b, P2 p, V3 v) {
    return FieldItemFxTable_Start(&sFieldItemFxTable, a, p, v, 0, b, 0, 0);
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFx_StartDigHole(s32 type, s32 v, s32 w) {
    void *map = TownBlockMap_Get();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    FieldPos_ToUnit(&ox, &oy, v);
    u32 k;
    if (BlockMap_getDigKind(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return FieldItemFxTable_StartForPlayer(&sFieldItemFxTable, type, P2(ox, oy), V3(0, 0, 0), 1, k, 0, w);
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFx_StartPitfallHole(s32 type, s32 v) {
    void *map = TownBlockMap_Get();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    FieldPos_ToUnit(&ox, &oy, v);
    u32 k;
    if (BlockMap_getDigKind(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return FieldItemFxTable_StartForPlayer(&sFieldItemFxTable, type, P2(ox, oy), V3(0, 0, 0), 2, k, 0, 0);
}
}
}

namespace ns_02219b84 {
extern "C" {
s32 FieldItemFx_StartFillHole(s32 type, s32 v) {
    void *map = TownBlockMap_Get();
    if (map == 0) {
        return 0;
    }
    s32 ox = 0;
    s32 oy = 0;
    FieldPos_ToUnit(&ox, &oy, v);
    u32 k;
    if (BlockMap_getDigKind(map, ox, oy) == 0) {
        k = 0xfc;
    } else {
        k = 0xfd;
    }
    return FieldItemFxTable_StartForPlayer(&sFieldItemFxTable, type, P2(ox, oy), V3(0, 0, 0), 3, k, 0, 0);
}
}
}

namespace ns_0221927c {
extern "C" s32 FieldItemFx_StartFillHoleWithItem(s32 a, s32 b)
{
    s32 p0 = 0;
    s32 p1 = 0;
    u32 r = 0xfff1;
    FieldPos_ToUnit(&p0, &p1, b);
    Unk_ov003_022195b8_Pos pos;
    pos.x = p0;
    pos.z = p1;
    if (PendingUnit_Find(&pos, 0) >= 0) {
        u8 *c = PendingUnit_Get();
        if (c != NULL) {
            r = *(u16 *)(c + 0xa);
        }
    }
    return FieldItemFxTable_StartForPlayer(sFieldItemFxTable, a, P2(p0, p1), V3(0, 0, 0), 3, r, 0, 0);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartPop(s32 a, s32 b, P2 c)
{
    FieldItemFxTable_Start(sFieldItemFxTable, a, c, V3(0, 0, 0), 4, b, 0, 0);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartTreeDrop(s32 a, s32 v, P2 p, V3 q, s16 t, s32 x)
{
    FieldItemFxTable_Start(sFieldItemFxTable, a, p, q, 5, v, t, x);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartTreeDropFloat(s32 a, s32 v, P2 p, V3 q, s32 w)
{
    FieldItemFxTable_Start(sFieldItemFxTable, a, p, q, 6, v, 0, w);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartBeeHiveDrop(s32 a, s32 v, P2 p, V3 q)
{
    FieldItemFxTable_Start(sFieldItemFxTable, a, p, q, 7, v, 0, 0);
}
}

namespace ns_0221927c {
extern "C" s32 FieldItemFx_StartDigUpTree(s32 a, s32 b, s32 c)
{
    void *g = TownBlockMap_Get();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    FieldPos_ToUnit(&p0, &p1, b);
    s32 x = *(volatile s32 *)&p0;
    s32 z = *(volatile s32 *)&p1;
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    u16 *cell = (u16 *)BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
    u32 r = 0x2b;
    if (cell != NULL) {
        BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
        u32 v = *cell;
        if (v >= 0x2b && v <= 0x2e) f1 = TRUE;
        if (!f1) { if (v < 0xff || v > 0x102) f2 = FALSE; }
        if (!f2) { if (v < 0x62 || v > 0x65) f3 = FALSE; }
        if (!f3) { if (v < 0xd0 || v > 0xd3) f4 = FALSE; }
        if (f4 || (v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) || (v >= 0x2f && v <= 0x56)
            || (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 || (v >= 0x6a && v <= 0x6c)
            || v == 0x6d || (v >= 0xc8 && v <= 0xcf) || v == 0x25 || v == 0x5c || v == 0xc7) {
            r = v;
        }
    }
    return FieldItemFxTable_StartForPlayer(sFieldItemFxTable, a, P2(p0, p1), V3(0, 0, 0), 8, r, c, 0);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartPlant(s32 a, s32 b, P2 c, V3 d)
{
    volatile u16 t;
    t = 0xfff1;
    t = b;
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = t;
    if (t <= 5) f1 = TRUE;
    if (!f1) { if (v < 6 || v > 0xb) f2 = FALSE; }
    if (!f2) { if (v < 0xc || v > 0x11) f3 = FALSE; }
    if (!f3) { if (v < 0x12 || v > 0x19) { if (v != 0x1c) f4 = FALSE; } }
    if (!f4) {
        if (v < 0x8a || v > 0x8f) {
            if (v < 0x90 || v > 0x95) {
                if (v < 0x96 || v > 0x9b) {
                    if (v < 0x9c || v > 0xa3) {
                        if (v != 0xa5) f5 = FALSE;
                    }
                }
            }
        }
    }
    if (!f5) { if (v != 0x1a) f6 = FALSE; }
    if (!f6) { if (v != 0xa4) f7 = FALSE; }
    if (!f7) { if (v != 0x1d) f8 = FALSE; }
    if (f8 || (v >= 0x14fe && v <= 0x1517) || b == 0x1567) b = 0x1408;
    FieldItemFxTable_Start(sFieldItemFxTable, a, c, d, 9, b, 0, 0);
}
}

namespace ns_0221927c {
extern "C" s32 FieldItemFx_StartHoleShrink(s32 a, s32 b)
{
    void *g = TownBlockMap_Get();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    FieldPos_ToUnit(&p0, &p1, b);
    s32 sel;
    if (BlockMap_getDigKind(g, p0, p1) == 0) {
        sel = 0xfc;
    } else {
        sel = 0xfd;
    }
    return FieldItemFxTable_StartForPlayer(sFieldItemFxTable, a, P2(p0, p1), V3(0, 0, 0), 0xa, sel, 0, 0);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartStrikeShake(s32 a, s32 b, P2 c)
{
    s32 r = 0;
    s32 tmp[3];
    FieldPos_FromUnitCenter(tmp, c.x, c.z);
    u8 *obj = (u8 *)PlayerActor_GetActor(4);
    if (obj != NULL) {
        r = (s32)(Math_AngleToDir8(*(s16 *)(obj + 0x8e)) << 29) >> 16;
    }
    FieldItemFxTable_Start(sFieldItemFxTable, a, c, V3(tmp[0], tmp[1], tmp[2]), 0xb, b, r, 0);
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartBalloonDrop(s32 a, s32 n)
{
    V3 A(0, 0, 0);
    s32 p0 = 0;
    s32 p1 = 0;
    Unk_ov003_02219654_Obj *obj = (Unk_ov003_02219654_Obj *)PlayerActor_GetActor(4);
    if (obj != NULL) {
        Unk_ov003_02219654_V3 *pv = &obj->position;
        A.x = pv->x;
        A.y = pv->y;
        A.z = pv->z;
        A.x = A.x + ((n << 12) >> 4);
        FieldPos_ToUnit(&p0, &p1, (s32)&A);
        p1 = (func_02133150(p1, 16) << 4) + 1;
        s32 tmp[3];
        FieldPos_FromUnitCenter(tmp, p0, p1);
        A.z = tmp[2];
    }
    A.y = 0xa000;
    s32 t;
    if (a == 0) {
        t = 0x156b;
    } else {
        t = 0x137b;
    }
    CommManager *g = gCommManager;
    s32 r;
    if (CommManager_isOnline(g)) {
        r = g->myAid;
    } else {
        r = 0;
    }
    FieldItemFxTable_Start(sFieldItemFxTable, r, P2(p0, p1), V3(A.x, A.y, A.z), 0xc, t, 0, 0);
}
}

namespace ns_0221927c {
extern "C" s32 FieldItemFx_FindLandingUnit(s32 *p)
{
    s32 result;
    void *g;
    g = TownBlockMap_Get();
    result = 2;
    if (g == NULL) {
        return result;
    }
    s32 k10, k14;
    s32 i = 0;
    k14 = i;
    k10 = i;
    for (; i < 9; i++) {
        u32 b = sLandingUnitOffsets[i];
        s32 x = p[0] + (((s32)b >> 4) - 8);
        s32 z = p[1] + ((b & 0xf) - 8);
        s32 hx = x >> 4;
        s32 hz = z >> 4;
        u16 *c = (u16 *)BlockMap_GetItemPtr(g, hx, hz, x - (hx << 4), z - (hz << 4), k10);
        if (c != NULL && *c == 0xfff1) {
            Unk_ov003_022195b8_Pos pos;
            pos.x = x;
            pos.z = z;
            if (PendingUnit_Find(&pos, k14) < 0) {
                if (BlockMap_canPlaceItem(g, x, z)) {
                    p[0] = x;
                    p[1] = z;
                    result = 0;
                }
                break;
            }
        }
    }
    return result;
}
}

namespace ns_0221927c {
extern "C" void FieldItemFx_StartStrikeEject(s32 a, s32 v, P2 p, V3 q)
{
    FieldItemFxTable_Start(sFieldItemFxTable, a, p, q, 0xd, v, 0, 0);
}
}

namespace ns_0221927c {
extern "C" s32 FieldItemFx_StartPitfallClose(s32 a, s32 b)
{
    void *g = TownBlockMap_Get();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    FieldPos_ToUnit(&p0, &p1, b);
    s32 sel;
    if (BlockMap_getDigKind(g, p0, p1) == 0) {
        sel = 0xfc;
    } else {
        sel = 0xfd;
    }
    return FieldItemFxTable_StartForPlayer(sFieldItemFxTable, a, P2(p0, p1), V3(0, 0, 0), 0xe, sel, 0, 0);
}
}

#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- real symbol names of main-module methods
// (called as free functions with the object as first argument; the mangled name is the symbols.txt name)
#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtUnit _ZN10GroundInfo10initAtUnitEiiii
#define BlendAnimModel_getAnmObj _ZN14BlendAnimModel9getAnmObjEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_clearResource _ZN5Model13clearResourceEv
#define Model_setResourceAndBind _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define MatTexBinder_getMaterial _ZN12MatTexBinder11getMaterialEv
#define MatTexBinder_bindByIdx _ZN12MatTexBinder9bindByIdxEPhii
#define MatTexBinder_bindByName _ZN12MatTexBinder10bindByNameEPhPKcS2_
#define MatTexBinder_setMaterialByName _ZN12MatTexBinder17setMaterialByNameEPhPKc
#define func_02056fcc _ZN12G3dResAccess13func_02056fccEi
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define func_0206052c _ZN9HouseData13func_0206052cEi
#define func_020607e0 _ZN9HouseRoom13func_020607e0EPtj
#define func_02060808 _ZN9HouseRoom13func_02060808EPtj
#define func_02060834 _ZN9HouseRoom13func_02060834EPi
#define func_02060850 _ZN9HouseRoom13func_02060850EPi
#define PatternTexCache_getPlayerTexKey _ZN15PatternTexCache15getPlayerTexKeyEii
#define func_020b1ddc _ZN12Unk_020b1ddc13func_020b1ddcEv
#define func_020b1e74 _ZN12Unk_020b1ddc13func_020b1e74Ev
#define TouchPicker_addCylinder _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP4Vec3S3_S3_ih
#define TouchPicker_pushCylinder _ZN11TouchPicker12pushCylinderEP17TouchPickCylinder
#define MatTexVramTask_request _ZN14MatTexVramTask7requestEPvjS0_jj
#define MatTexVramTask_cancel _ZN14MatTexVramTask6cancelEv

// ---------------------------------------------------------------- library-side classes (real symbols)
struct FxVec3 {
    s32 x, y, z;
    FxVec3() {
        x = 0;
        y = 0;
        z = 0;
    }
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

struct ItemId {
    u16 v;
    ItemId(u16 a) {
        v = a;
    }
    ~ItemId();
};

extern "C" {
void func_0203c2cc(void *o);
void func_020b8d98(void *o);
}

struct Unk_0203c2cc {
    u8 pad[0x20f0 - 0x2c];
    Unk_0203c2cc() {
        func_0203c2cc(this);
    }
};

struct Unk_020b8d98 {
    u8 pad[0x10f0 - 0x2c];
    Unk_020b8d98() {
        func_020b8d98(this);
    }
};

class MatTexVramTask {
public:
    MatTexVramTask();
    virtual BOOL vfunc_00();
    u8 pad_04[0x24];
};

struct MatTexBinder {
    u8 *unk_00;
    s8 unk_04;

    MatTexBinder();
    ~MatTexBinder();
};

struct AnimModel {
    AnimModel();
    ~AnimModel();
    u8 pad[0x5c];
};

extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *ctor, void *dtor);
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *dtor);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
void _ZN16RoomScene22ShapeC1Ev(void *self);
void _ZN16RoomScene22ShapeD1Ev(void *self);
}

class ModelAnim {
public:
    ModelAnim();
    virtual ~ModelAnim();
    u8 pad_04[4];
    u32 unk_08;
    u8 pad_0c[0xc];
};

struct TouchPickCylinder {
    TouchPickCylinder();
    ~TouchPickCylinder();
    u8 pad[0x20];
};

struct G3dResAccess {
    u8 pad[4];
};

// ---------------------------------------------------------------- shared helper types
struct Unk_ov004_0222a994_Ctx {
    u8 pad[0xb4];
    s32 *unk_b4;
};

struct Unk_ov004_0222a994_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0222a994_Pad {
    s32 v[2];
    Unk_ov004_0222a994_Pad() {}
    ~Unk_ov004_0222a994_Pad() {}
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

struct Unk_ov004_0222a6c0_Fx {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x0c];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 pad_14[4];
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ s32 unk_1c;
    /* 0x20 */ u8 pad_20[0x0c];
    /* 0x2c */ u16 unk_2c;
    /* 0x2e */ u16 unk_2e;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
};

struct Unk_ov004_0222a6c0_Obj {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0xb0 - 0x0c];
    /* 0xb0 */ Unk_ov004_0222a6c0_Fx *unk_b0;
    /* 0xb4 */ u8 pad_b4[0xd8 - 0xb4];
    /* 0xd8 */ u8 *unk_d8;
};

struct Unk_ov004_0222a6c0_Rec {
    u8 pad_00[0x20];
    u16 unk_20;
    u16 unk_22;
    s32 unk_24;
    s32 unk_28;
};

struct Unk_ov004_0222b510_Grid {
    u8 *unk_00;
    u8 *unk_04;
    u8 *unk_08;
};

struct Unk_ov004_0222b45c_Cell {
    u8 pad_00[0x20];
    u8 *unk_20;
};

struct Unk_ov004_0222b45c_Res {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0c[8];
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov004_0222b3e8_Ent {
    u8 pad[0xc];
    u32 flags;
};

struct Unk_ov004_0222b430_Mtx {
    s32 v[12];
};

struct Unk_ov004_0222b954_Pair {
    volatile u16 a;
    volatile u16 b;
};

struct Unk_ov004_0222b9a4_Vec {
    s32 x, y, z;
};

// ---------------------------------------------------------------- classes of this unit
class RoomShellMatAnim : public ModelAnim {
public:
    RoomShellMatAnim();
    virtual ~RoomShellMatAnim();

    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};

// object at manager+0x1228: dummy floor
class RoomCarpet {
public:
    RoomCarpet();
    ~RoomCarpet();
    void release();
    BOOL setCarpet(u16 *q, G3dResAccess *a, s32 key);
    void saveToHouseRoom(u16 *q, u32 key);
    BOOL applyDefault(u16 v, G3dResAccess *a, s32 key);
    BOOL bindMaterial(u8 *buf, u8 *p);
    u32 getDesignKey();
    u16 *getPrevItem();
    u16 *getItem();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ MatTexVramTask unk_04;
    /* 0x002c */ Unk_0203c2cc unk_2c;
    /* 0x20f0 */ s32 unk_20f0;
    /* 0x20f4 */ MatTexBinder unk_20f4;
    /* 0x20fc */ u8 *unk_20fc;
};

// object at manager+0x128: dummy wall
class RoomWallpaper {
public:
    RoomWallpaper();
    ~RoomWallpaper();

    void applyDefault(u16 v, void *a, s32 b);
    BOOL bindMaterial(u8 *a, u32 b);
    u32 getDesignKey();
    u16 *getPrevItem();
    u16 *getItem();

    /* 0x0000 */ u16 unk_00;
    /* 0x0002 */ u16 unk_02;
    /* 0x0004 */ MatTexVramTask unk_04;
    /* 0x002c */ Unk_020b8d98 unk_2c;
    /* 0x10f0 */ s32 unk_10f0;
    /* 0x10f4 */ MatTexBinder unk_10f4;
    /* 0x10fc */ u8 *unk_10fc;
};

// the symbols file names two methods of the wall object after a second class
class Unk_ov004_0222b15c : public RoomWallpaper {
public:
    void release();
    BOOL setWallpaper(u16 *q, G3dResAccess *a, s32 key);
};

// class Y (billboard/effect handle, base TouchPickCylinder)
class RoomScene22Shape : public TouchPickCylinder {
public:
    RoomScene22Shape();
    ~RoomScene22Shape();
    void release();
    void update();
    void init();

    /* 0x20 */ u8 unk_20;
};

// class Z (two 0x9c-byte elements)
class RoomEntranceColliders {
public:
    RoomEntranceColliders();
    ~RoomEntranceColliders();
    void releaseScene0A();
    void initScene0A();
    BOOL release();
    BOOL init();

    u8 unk_00[2][0x9c];
};

class RoomShell : public GameProc {
public:
    RoomShell();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~RoomShell();
    virtual void vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b);
    virtual void vfunc_4c(s32 idx, Unk_ov004_0222a6c0_Obj *o);

    void setMatLightFlags(u8 *p);
    void storeBaseMtx();
    void initAnims();
    void initWallAndFloor();
    void calcRoomSize();

    /* 0x0050 */ AnimModel unk_50;
    /* 0x00ac */ u8 *unk_ac;
    /* 0x00b0 */ u32 unk_b0;
    /* 0x00b4 */ Unk_ov004_0222b430_Mtx unk_b4;
    /* 0x00e4 */ u32 pad_e4[(0x108 - 0xe4) / 4];
    /* 0x0108 */ RoomShellMatAnim unk_108[1];
    /* 0x0128 */ RoomWallpaper unk_128;
    /* 0x1228 */ RoomCarpet unk_1228;
    /* 0x3328 */ RoomEntranceColliders unk_3328;
    /* 0x3460 */ u8 unk_3460[0x9c];  // BoxCollider (C1 / D2 called by hand, as the original does)
    /* 0x34fc */ u8 unk_34fc[0x24];  // RoomScene22Shape
    /* 0x3520 */ s8 unk_3520;
    /* 0x3521 */ s8 unk_3521;
    /* 0x3522 */ s8 unk_3522;
    /* 0x3523 */ s8 unk_3523;
    /* 0x3524 */ u32 pad_3524;
    /* 0x3528 */ Unk_ov004_0222b9a4_Vec unk_3528;
    /* 0x3534 */ void *unk_3534;
    /* 0x3538 */ u8 pad_3538[8];
    /* 0x3540 */ s8 unk_3540;
};


// ---------------------------------------------------------------- externs
extern "C" {
u32 Scene_GetCurrent(void);
s32 Scene_InHouseRoom(void);
s32 Scene_InUnk6To8(void);
s32 Scene_InNookShop(void);
u32 Scene_GetHouseRoom(void);
void Snd_PlaySe(s32 a);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
u32 Scene_GetTouchPicker(void);
u32 TouchPicker_addCylinder(u32 o, void *obj, void *v, s32 a, s32 b, s32 c, s32 d);
u32 TouchPicker_pushCylinder(u32 o, void *obj);
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
u32 Item_GetDesignPlayer(u16 *p);
u32 Item_GetDesignSlot(u16 *p);
u32 PatternTexCache_Get(void);
u8 *PatternTexCache_getPlayerTexKey(u32 a, u32 b, u32 c);
void func_0203411c(u32 a, u16 *p);
void func_0203414c(u32 a, u16 *p);
BOOL func_0203c23c(void *o, u16 *p);
void *func_0203c234(void *o);
BOOL Wallpaper_LoadTexture(void *o, u16 *p);
void *Wallpaper_GetTex(void *o);
void *func_0206052c(void *self, u32 idx);
void func_020607e0(void *o, u16 *p, u32 k);
s32 func_02060808(void *self, u16 *a, u32 b);
BOOL BoxCollider_Unregister(void *self);
BOOL BoxCollider_Register(void *self, s32 a, s32 b, s32 c, void *p, s32 s, void *q);
void MatTexVramTask_cancel(void *self);
BOOL MatTexVramTask_request(void *self, void *a, u32 b, void *c, u32 d, u32 e);
void MatTexBinder_bindByIdx(void *self, u8 *a, s32 b, s32 c);
void MatTexBinder_bindByName(void *self, u8 *a, const char *b, const char *c);
void MatTexBinder_setMaterialByName(void *self, u8 *a, const char *b);
s32 MatTexBinder_getMaterial(void *self);
s32 func_02056fcc(void *self, const char *s);
s32 G3dResAccess_findMatIdx(void *self, const char *s);
s32 FX_Div(s32 a, s32 b);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
u32 SceneLights_GetMatLightMask2();
s32 Model_setResourceAndBind(void *self, u32 a, u32 b);
s32 AnimModel_allocAnmObj(void *self, u32 a);
s32 BlendAnimModel_initAnim(void *self, u32 a, s32 b, s32 c, s32 d, s32 e);
s32 AnimModel_attachAnim(void *self);
s32 ModelAnim_allocMatAnm(void *self, void *a, u32 b);
s32 ModelAnim_init(void *self, u32 a, s32 b, s32 c, s32 d);
u32 Model_getRenderObj(void *self);
s32 ModelAnim_addToRenderObj(void *self, u32 a);
u16 *func_02060850(void *self, s32 *i);
u16 *func_02060834(void *self, s32 *i);
void *SaveVillagers_Get(void *self, s32 i);
u32 Villager_GetWallpaper(void *self);
u32 Villager_GetCarpet(void *self);
u16 *func_02034134(s32 r);
u16 *func_02034104(s32 r);
void *GroundInfo_initAtUnit(void *self, s32 a, s32 b, s32 c, s32 d);
s32 GroundInfoBase_getHeight(void *self, s32 a);
void GroundInfo_Destruct(void *self);
s32 SceneId_IsHouseRoom(s32 r);
s32 SceneId_GetHouseRoom(s32 r);
s32 SceneId_IsVillagerHouse(s32 r);
s32 SceneId_GetVillagerHouse(s32 r);
s32 SceneId_IsNookShop(s32 r);
s32 SceneId_GetNookShop(s32 r);
void Model_clearResource(void *self);
void Unk_02003c30_callRelease(void *self);
void AnimModel_drawAnimated(void *self, s32 a);
void func_020ac40c();
void func_020abe28();
void NNS_G3dMdlSetMdlDiff(void *a, s32 b, u32 c);
s32 BlendAnimModel_getAnmObj(void *self);
void AnimModel_stepAnim(void *self);
void AnimFrameCtrl_step(void *self);
s32 FtrMgr_GetCycleCounter(s32 a);
void RoomBoardSign_Spawn(void *v, s32 a, s32 b, u32 c);
void Unk_02003c40_callRequestSustained(void *self, u32 a);
void Unk_02003c40_callUpdateRelative(void *self, Unk_ov004_0222b9a4_Vec *v);
void Model_setInitCallback(void *self, void *fn, void *obj);
void Unk_02003c30_callReset(void *self);
u16 *Sky_GetCurrentPalette();
u16 Sky_GetLightColor(u32 v);

extern u8 gSaveHouse[];
extern u8 gSaveVillagers[];
extern u8 data_021f47e0[];
extern u8 data_0213b91c[];
extern u32 data_020c8cc0;
extern Unk_ov004_0222b510_Grid *gSceneBlockMap;
extern u32 gBgHeap;
extern u32 data_021ce63c;

// own functions (plain symbols), declared before their first use
void RoomShell_InitRenderObj(void *self);
void RoomShell_NodeDescCallback(void *self);
void RoomShell_MatCallback(void *self);
s16 RoomShell_CalcWdColor(void *self);
void RoomShell_SpawnBoardSigns(void *self);
BOOL func_ov004_0222ae18();
void RoomWallpaper_SaveToHouseRoom(void *self, u16 *a, u32 b);
void RoomShell_GetSceneWallFloor(void *self, u16 *a, s32 *b, u16 *c, s32 *d);
}

struct Unk_ov004_0222ae7c_Obj {
    u8 pad[0x18];
    u32 unk_18;
};

extern "C" u32 func_ov004_0222ae7c(Unk_ov004_0222ae7c_Obj *o);

// ---------------------------------------------------------------- data
extern "C" RoomShell *sRoomShell;
extern "C" char sRoomWallpaperMatNameStr[];
extern "C" char sRoomCarpetMatNameStr[];
extern "C" RoomShell *RoomShell_Create();

extern "C" const char *sRoomCarpetMatName;
extern "C" const char *sRoomWallpaperMatName;
extern "C" FxVec3 sRoomHasuPos;
extern "C" ItemId sRoomNoItem;
extern "C" Unk_ov004_SceneEntry sRoomShellProfile = { (void *(*)())RoomShell_Create, 0xe, 0xa };
extern "C" {
FxVec3 sRoomHasuPos;
RoomShell *sRoomShell;
}


// ---------------------------------------------------------------- functions (descending address order)
extern "C" RoomShell *RoomShell_Create() {
    return new RoomShell;
}

RoomShell::RoomShell() {
    _ZN11BoxColliderC1Ev(unk_3460);
    _ZN16RoomScene22ShapeC1Ev(unk_34fc);
    unk_3534 = data_0213b91c;
    unk_3520 = unk_3521 = unk_3540 = -1;
}

RoomShell::~RoomShell() {
    _ZN16RoomScene22ShapeD1Ev(unk_34fc);
    _ZN11BoxColliderD2Ev(unk_3460);
}

BOOL RoomShell::vfunc_00() {
    sRoomShell = this;
    unk_3328.init();
    ((RoomEntranceColliders *)&unk_3460)->initScene0A();
    ((RoomScene22Shape *)unk_34fc)->init();
    calcRoomSize();
    initAnims();
    setMatLightFlags(unk_ac);
    storeBaseMtx();
    initWallAndFloor();
    unk_3520 = func_02056fcc(unk_ac, "kh_j");
    unk_3521 = func_02056fcc(unk_ac, "km_j");
    unk_3523 = func_02056fcc(unk_ac, "hasu1");
    unk_3540 = G3dResAccess_findMatIdx(unk_ac, "wd");
    Model_setInitCallback(&unk_50, (void *)RoomShell_InitRenderObj, this);
    RoomShell_SpawnBoardSigns(this);
    Unk_02003c30_callReset(&unk_3534);
    return TRUE;
}

BOOL RoomShell::onExecute() {
    if (BlendAnimModel_getAnmObj(&unk_50)) {
        AnimModel_stepAnim(&unk_50);
    }
    RoomShellMatAnim *e = unk_108;
    if (func_ov004_0222ae7c((Unk_ov004_0222ae7c_Obj *)e)) {
        AnimFrameCtrl_step(e);
        *unk_108[0].unk_18 = unk_108[0].unk_08;
    }
    if (unk_3528.x != 0) {
        s32 id = FtrMgr_GetCycleCounter(unk_3528.x);
        if (id == 9 || id == 0x1d) {
            Unk_02003c40_callRequestSustained(&unk_3534, 0x4d1);
        }
    }
    Unk_ov004_0222b9a4_Vec v = unk_3528;
    Unk_02003c40_callUpdateRelative(&unk_3534, &v);
    ((RoomScene22Shape *)unk_34fc)->update();
    data_021ce63c = 0;
    return TRUE;
}

BOOL RoomShell::onDraw() {
    func_020ac40c();
    func_020abe28();
    if (unk_3540 != -1) {
        Unk_ov004_0222b954_Pair t;
        t.a = RoomShell_CalcWdColor(this);
        t.b = t.a;
        NNS_G3dMdlSetMdlDiff(unk_ac, unk_3540, t.b);
    }
    AnimModel_drawAnimated(&unk_50, 0);
    return TRUE;
}

BOOL RoomShell::vfunc_0c() {
    ((Unk_ov004_0222b15c *)&unk_128)->release();
    ((RoomScene22Shape *)unk_34fc)->release();
    ((RoomEntranceColliders *)&unk_3460)->releaseScene0A();
    unk_1228.release();
    unk_3328.release();
    Model_clearResource(&unk_50);
    sRoomShell = 0;
    Unk_02003c30_callRelease(&unk_3534);
    return TRUE;
}

void RoomShell::calcRoomSize() {
    u32 buf[0x44 / 4];
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 16; i++) {
        GroundInfo_initAtUnit(buf, i, 10, 0, 0);
        if (GroundInfoBase_getHeight(buf, 0) == 0) {
            cnt++;
        }
        GroundInfo_Destruct(buf);
    }
    unk_3522 = cnt;
}

struct Unk_ov004_0222b610_Ent {
    u16 v;
};

static inline BOOL Unk_ov004_0222b610_InA(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1100 && *p <= 0x1143) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_0222b610_InB(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1144 && *p <= 0x1187) {
        r = TRUE;
    }
    return r;
}

extern "C" void RoomShell_GetSceneWallFloor(void *self, u16 *a, s32 *b, u16 *c, s32 *d) {
    s32 r = Scene_GetCurrent();
    *d = 0;
    *b = *d;
    if (SceneId_IsHouseRoom(r)) {
        void *o = func_0206052c(gSaveHouse, SceneId_GetHouseRoom(r));
        if (o != NULL) {
            *a = *func_02060850(o, b);
            *c = *func_02060834(o, d);
        }
    } else if (SceneId_IsVillagerHouse(r)) {
        void *o = SaveVillagers_Get(gSaveVillagers, SceneId_GetVillagerHouse(r));
        if (o != NULL) {
            u32 t = Villager_GetWallpaper(o);
            *a = t < 0x44 ? (u16)(t + 0x1100) : 0x1100;
            t = Villager_GetCarpet(o);
            *c = t < 0x44 ? (u16)(t + 0x1144) : 0x1144;
        }
    } else if (SceneId_IsNookShop(r)) {
        s32 i = SceneId_GetNookShop(r);
        u16 *p = func_02034134(r);
        if (Unk_ov004_0222b610_InA(p)) {
            *a = *p;
        } else {
            static ItemId t[6] = {
                ItemId(0x1140), ItemId(0x1141), ItemId(0x1142),
                ItemId(0x1143), ItemId(0x1143), ItemId(0x1143)
            };
            *a = t[i].v;
        }
        p = func_02034104(r);
        if (Unk_ov004_0222b610_InB(p)) {
            *c = *p;
        } else {
            static ItemId t[6] = {
                ItemId(0x1184), ItemId(0x1185), ItemId(0x1186),
                ItemId(0x1187), ItemId(0x1187), ItemId(0x1187)
            };
            *c = t[i].v;
        }
    }
}

static inline BOOL Unk_ov004_0222b510_Range(volatile u16 *p) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1188 && a <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

void RoomShell::initWallAndFloor() {
    Unk_ov004_0222b510_Grid *g = gSceneBlockMap;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    unk_128.bindMaterial(unk_ac, r->unk_20);
    unk_1228.bindMaterial(unk_ac, (u8 *)r->unk_20);
    volatile u16 h[2];
    s32 w8;
    s32 w12;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    RoomShell_GetSceneWallFloor(this, (u16 *)&h[0], &w8, (u16 *)&h[1], &w12);
    if (Unk_ov004_0222b510_Range(&h[0])) {
        unk_128.applyDefault(0x1124, unk_ac, w8);
    }
    if (Unk_ov004_0222b510_Range(&h[1])) {
        unk_1228.applyDefault(0x1182, (G3dResAccess *)unk_ac, w12);
    }
    ((Unk_ov004_0222b15c *)&unk_128)->setWallpaper((u16 *)&h[0], (G3dResAccess *)unk_ac, w8);
    unk_1228.setCarpet((u16 *)&h[1], (G3dResAccess *)unk_ac, w12);
}

void RoomShell::initAnims() {
    Unk_ov004_0222b510_Grid *g = gSceneBlockMap;
    Unk_ov004_0222b45c_Cell *c;
    if (g->unk_04 > (u8 *)0 && g->unk_08 > (u8 *)0 && g->unk_00 != NULL) {
        c = (Unk_ov004_0222b45c_Cell *)g->unk_00;
    } else {
        c = NULL;
    }
    Unk_ov004_0222b45c_Res *r = (Unk_ov004_0222b45c_Res *)c->unk_20;
    Model_setResourceAndBind(&unk_50, r->unk_08, r->unk_20);
    if (r->unk_14 != 0) {
        if (AnimModel_allocAnmObj(&unk_50, gBgHeap)) {
            BlendAnimModel_initAnim(&unk_50, r->unk_14, 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&unk_50);
        }
    }
    if (r->unk_1c != 0) {
        if (ModelAnim_allocMatAnm(unk_108, unk_ac, gBgHeap)) {
            ModelAnim_init(unk_108, r->unk_1c, 0, 0x1000, 0);
            ModelAnim_addToRenderObj(unk_108, Model_getRenderObj(&unk_50));
        }
    }
}

void RoomShell::storeBaseMtx() {
    func_020e8388(data_021f47e0, 0, 0, 0);
    unk_b4 = *(Unk_ov004_0222b430_Mtx *)data_021f47e0;
}

void RoomShell::setMatLightFlags(u8 *p) {
    u32 n = p[0x18];
    u8 *q = p + *(u32 *)(p + 8);
    u32 i;
    for (i = 0; i < n; i++) {
        u8 *a = q + 4;
        u32 off = *(u16 *)(q + 0xa);
        u8 *t = a + off;
        u32 stride = *(u16 *)t;
        u8 *e = q + *(u32 *)(t + stride * i + 4);
        Unk_ov004_0222b3e8_Ent *en = (Unk_ov004_0222b3e8_Ent *)e;
        if ((en->flags & 0xf) != 0) {
            en->flags &= ~0xf;
            en->flags |= SceneLights_GetMatLightMask2();
        }
    }
}

// ---- dummy wall object (manager + 0x128)
RoomWallpaper::RoomWallpaper() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_10f0 = 0;
}

RoomWallpaper::~RoomWallpaper() {
}

u16 *RoomWallpaper::getItem() {
    return &unk_02;
}

u16 *RoomWallpaper::getPrevItem() {
    return &unk_00;
}

u32 RoomWallpaper::getDesignKey() {
    return unk_10f0;
}

BOOL RoomWallpaper::bindMaterial(u8 *a, u32 b) {
    if (b != 0) {
        MatTexBinder_setMaterialByName(&unk_10f4, a, sRoomWallpaperMatNameStr);
        unk_10fc = (u8 *)b;
        return TRUE;
    }
    return FALSE;
}

void RoomWallpaper::applyDefault(u16 v, void *a, s32 b) {
    u16 t = v;
    ((Unk_ov004_0222b15c *)this)->setWallpaper(&t, (G3dResAccess *)a, b);
}

extern "C" void RoomWallpaper_SaveToHouseRoom(void *self, u16 *a, u32 b) {
    if (Scene_InHouseRoom()) {
        void *r = func_0206052c(gSaveHouse, Scene_GetHouseRoom());
        if (r != NULL) {
            func_02060808(r, a, b);
        }
    }
}

BOOL Unk_ov004_0222b15c::setWallpaper(u16 *q, G3dResAccess *a, s32 key) {
    BOOL same;
    if (G3dResAccess_findMatIdx(a, sRoomWallpaperMatName) == -1) return FALSE;
    if (Item_IsFurniture(&unk_02) != 0) {
        u32 x = Item_GetFurnitureIndex(&unk_02);
        u32 y = Item_GetFurnitureIndex(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_10f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1100 && v <= 0x1143) in = TRUE;
        if (in != FALSE) {
            if (Wallpaper_LoadTexture(&unk_2c, q) == 0) goto fail;
            if (Scene_InNookShop() == 0) {
                MatTexBinder_bindByName(&unk_10f4, unk_10fc, "dummy_wall", "dummy_wall_pl");
            }
            void *r = Wallpaper_GetTex(&unk_2c);
            if (MatTexVramTask_request(&unk_04, a, (u32)sRoomWallpaperMatName, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            RoomWallpaper_SaveToHouseRoom(this, &unk_02, key);
            func_0203414c(Scene_GetCurrent(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = Item_GetDesignPlayer(q);
            u32 t8 = Item_GetDesignSlot(q);
            u32 h = PatternTexCache_Get();
            u8 *idx = PatternTexCache_getPlayerTexKey(h, (u8)t7, (u8)t8);
            MatTexBinder_bindByIdx(&unk_10f4, idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_10f0 = key;
            RoomWallpaper_SaveToHouseRoom(this, &unk_02, key);
            func_0203414c(Scene_GetCurrent(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_10f0 = key;
    RoomWallpaper_SaveToHouseRoom(this, &unk_02, key);
    func_0203414c(Scene_GetCurrent(), &unk_02);
    return TRUE;
}

void Unk_ov004_0222b15c::release() {
    MatTexVramTask_cancel(&unk_04);
}

// ---- dummy floor object (manager + 0x1228)
RoomCarpet::RoomCarpet() : unk_00(0xfff1), unk_02(0xfff1) {
    unk_00 = 0xfff1;
    unk_02 = 0xfff1;
    unk_20f0 = 0;
}

RoomCarpet::~RoomCarpet() {
}

u16 *RoomCarpet::getItem() {
    return &unk_02;
}

u16 *RoomCarpet::getPrevItem() {
    return &unk_00;
}

u32 RoomCarpet::getDesignKey() {
    return unk_20f0;
}

BOOL RoomCarpet::bindMaterial(u8 *buf, u8 *p) {
    if (p != 0) {
        MatTexBinder_setMaterialByName(&unk_20f4, buf, sRoomCarpetMatNameStr);
        unk_20fc = p;
        return TRUE;
    }
    return FALSE;
}

BOOL RoomCarpet::applyDefault(u16 v, G3dResAccess *a, s32 key) {
    u16 t = v;
    return setCarpet(&t, a, key);
}

void RoomCarpet::saveToHouseRoom(u16 *q, u32 key) {
    if (Scene_InHouseRoom() != 0) {
        u32 t = Scene_GetHouseRoom();
        void *o = func_0206052c(gSaveHouse, t);
        if (o != 0) {
            func_020607e0(o, q, key);
        }
    }
}

BOOL RoomCarpet::setCarpet(u16 *q, G3dResAccess *a, s32 key) {
    BOOL same;
    if (G3dResAccess_findMatIdx(a, sRoomCarpetMatName) == -1) return FALSE;
    if (Item_IsFurniture(&unk_02) != 0) {
        u32 x = Item_GetFurnitureIndex(&unk_02);
        u32 y = Item_GetFurnitureIndex(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (unk_02 == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && unk_20f0 == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1144 && v <= 0x1187) in = TRUE;
        if (in != FALSE) {
            if (func_0203c23c(&unk_2c, q) == 0) goto fail;
            if (Scene_InNookShop() == 0) {
                MatTexBinder_bindByName(&unk_20f4, unk_20fc, "dummy_floor", "dummy_floor_pl");
            }
            void *r = func_0203c234(&unk_2c);
            if (MatTexVramTask_request(&unk_04, a, (u32)sRoomCarpetMatName, r, 0, 0) == 0) goto fail;
            unk_00 = unk_02;
            unk_02 = *q;
            saveToHouseRoom(&unk_02, key);
            func_0203411c(Scene_GetCurrent(), &unk_02);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = Item_GetDesignPlayer(q);
            u32 t8 = Item_GetDesignSlot(q);
            u32 h = PatternTexCache_Get();
            u8 *idx = PatternTexCache_getPlayerTexKey(h, (u8)t7, (u8)t8);
            MatTexBinder_bindByIdx(&unk_20f4, idx, 0, 0);
            unk_00 = unk_02;
            unk_02 = *q;
            unk_20f0 = key;
            saveToHouseRoom(&unk_02, key);
            func_0203411c(Scene_GetCurrent(), &unk_02);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    unk_00 = unk_02;
    unk_02 = *q;
    unk_20f0 = key;
    saveToHouseRoom(&unk_02, key);
    func_0203411c(Scene_GetCurrent(), &unk_02);
    return TRUE;
}

void RoomCarpet::release() {
    MatTexVramTask_cancel(&unk_04);
}

// ---- element of the manager's 0x20-byte array
RoomShellMatAnim::RoomShellMatAnim() {
}

RoomShellMatAnim::~RoomShellMatAnim() {
}

extern "C" u32 func_ov004_0222ae7c(Unk_ov004_0222ae7c_Obj *o) {
    return o->unk_18;
}

// ---- class Z
RoomEntranceColliders::RoomEntranceColliders() {
    __cxa_vec_ctor(unk_00, 2, 0x9c, (void *)_ZN11BoxColliderC1Ev, (void *)_ZN11BoxColliderD2Ev);
}

RoomEntranceColliders::~RoomEntranceColliders() {
    __cxa_vec_cleanup(unk_00, 2, 0x9c, (void *)_ZN11BoxColliderD2Ev);
}

extern "C" BOOL func_ov004_0222ae18() {
    if (Scene_InHouseRoom() != 0 || Scene_InUnk6To8() != 0) return TRUE;
    return FALSE;
}

struct Unk_ov004_0222ad9c_V {
    s32 x, y, z;
};

BOOL RoomEntranceColliders::init() {
    if (func_ov004_0222ae18() != 0) {
        Unk_ov004_0222ad9c_V a;
        Unk_ov004_0222ad9c_V b;
        a.x = 0xd000;
        a.y = 0;
        a.z = 0x1c000;
        b.x = 0x13000;
        b.y = 0;
        b.z = 0x1c000;
        BOOL r0 = BoxCollider_Register(&unk_00[0], 0x2000, 0, 0x4000, &a, 0, 0);
        BOOL r1 = BoxCollider_Register(&unk_00[1], 0x2000, 0, 0x4000, &b, 0, 0);
        if (r0 != 0 && r1 != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL RoomEntranceColliders::release() {
    if (func_ov004_0222ae18() != 0) {
        BoxCollider_Unregister(&unk_00[0]);
        BoxCollider_Unregister(&unk_00[1]);
    }
    return TRUE;
}

extern "C" char sRoomCarpetMatNameStr[] = "m_dummy_floor";
extern "C" const char *sRoomCarpetMatName = sRoomCarpetMatNameStr;
extern "C" {
ItemId sRoomNoItem(0xfff1);
}

void RoomEntranceColliders::initScene0A() {
    if (Scene_GetCurrent() == 0xa) {
        static FxVec3 s(0xe000, 0, data_020c8cc0 + 0x1000);
        BoxCollider_Register(&unk_00[0], 0x8000, 0x2000, 0x1000, &s, 0, 0);
    }
}

extern "C" char sRoomWallpaperMatNameStr[] = "m_dummy_wall";
extern "C" const char *sRoomWallpaperMatName = sRoomWallpaperMatNameStr;

void RoomEntranceColliders::releaseScene0A() {
    if (Scene_GetCurrent() == 0xa) {
        BoxCollider_Unregister(&unk_00[0]);
    }
}

// ---- class Y
RoomScene22Shape::RoomScene22Shape() {
    unk_20 = 0;
}

RoomScene22Shape::~RoomScene22Shape() {
}

struct Unk_ov004_0222ac54_V {
    s32 x, y, z;
};

void RoomScene22Shape::init() {
    Unk_ov004_0222ac54_V v;
    if (Scene_GetCurrent() == 0x22) {
        unk_20 = 1;
    }
    if (unk_20 != 0) {
        v.x = 0x108f6;
        v.y = 0;
        v.z = 0x1351e;
        TouchPicker_addCylinder(Scene_GetTouchPicker(), this, &v, 0xf33, 0x6000, 0x16, 0xff);
    }
}

void RoomScene22Shape::update() {
    if (unk_20 != 0) {
        TouchPicker_pushCylinder(Scene_GetTouchPicker(), this);
    }
}

void RoomScene22Shape::release() {
}

static inline BOOL Unk_ov004_0222aacc_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" u16 *RoomShell_SetWallpaper(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1100, 0x1143);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        RoomShell *g = sRoomShell;
        if (g != 0) {
            if (((Unk_ov004_0222b15c *)&g->unk_128)->setWallpaper(p, (G3dResAccess *)g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (Scene_InNookShop() != 0) Snd_PlaySe(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(sRoomShell->unk_128.getPrevItem(), 0x1100, 0x1143);
                if (r2 != FALSE) return sRoomShell->unk_128.getPrevItem();
                return (u16 *)&sRoomNoItem;
            }
        }
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_SetCarpet(u16 *p, s32 key, u32 flag) {
    BOOL r = Unk_ov004_0222aacc_R1(p, 0x1144, 0x1187);
    if (r != FALSE || (*p >= 0x1188 && *p <= 0x11a7)) {
        RoomShell *g = sRoomShell;
        if (g != 0) {
            if (g->unk_1228.setCarpet(p, (G3dResAccess *)g->unk_ac, key) != 0) {
                if (flag != 0) {
                    if (Scene_InNookShop() != 0) Snd_PlaySe(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(sRoomShell->unk_1228.getPrevItem(), 0x1144, 0x1187);
                if (r2 != FALSE) return sRoomShell->unk_1228.getPrevItem();
                return (u16 *)&sRoomNoItem;
            }
        }
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetCarpet() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->unk_1228.getItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetPrevCarpet() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->unk_1228.getPrevItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetWallpaper() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->unk_128.getItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetPrevWallpaper() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->unk_128.getPrevItem();
    }
    return (u16 *)&sRoomNoItem;
}

void RoomShell::vfunc_48(s32 a, Unk_ov004_0222a994_Ctx *b) {
    Unk_ov004_0222a994_Pad pad;
    if (unk_3520 == a) {
        func_020b1e74(b);
        Unk_ov004_0222a994_Vec *pv = (Unk_ov004_0222a994_Vec *)(b->unk_b4 + 0x13);
        Unk_ov004_0222a994_Vec v;
        v.y = pv->y;
        v.z = pv->z;
        v.x = pv->x;
        unk_3528.x = v.x;
        unk_3528.y = v.y;
        unk_3528.z = v.z;
    } else if (unk_3521 == a) {
        func_020b1ddc(b);
    } else if (unk_3523 == a) {
        if (b != 0) {
            s32 *p = b->unk_b4;
            s32 z = p[0x15];
            s32 x = p[0x13];
            sRoomHasuPos.x = x;
            sRoomHasuPos.y = 0x3700;
            sRoomHasuPos.z = z;
        }
    }
}

// ---------------------------------------------------------------- 0x0222a6c0 (vtable slot 0x4c; symbol renamed, see renames.txt)
static inline BOOL Unk_ov004_0222a6c0_Rng(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1188 && *p <= 0x11a7) {
        r = TRUE;
    }
    return r;
}

void RoomShell::vfunc_4c(s32 idx, Unk_ov004_0222a6c0_Obj *o) {
    u8 *h = o->unk_d8;
    u8 *t = h + 4;
    u32 off = *(u16 *)(h + 0xa);
    u32 stride = *(u16 *)(t + off);
    Unk_ov004_0222a6c0_Rec *rec = (Unk_ov004_0222a6c0_Rec *)(h + *(u32 *)(t + off + stride * idx + 4));
    BOOL a;
    BOOL b;
    s32 v8, vc, v10;
    if (idx == MatTexBinder_getMaterial(&unk_128.unk_10f4)) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    if (idx == MatTexBinder_getMaterial(&unk_1228.unk_20f4)) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (a && Unk_ov004_0222a6c0_Rng(unk_128.getItem())) {
    } else if (b && Unk_ov004_0222a6c0_Rng(unk_1228.getItem())) {
    } else {
        return;
    }
    o->unk_b0->unk_10 &= 0x3fffffff;
    o->unk_b0->unk_10 &= 0xfffbffff;
    o->unk_b0->unk_10 &= 0xfff7ffff;
    o->unk_b0->unk_10 &= 0xfffeffff;
    o->unk_b0->unk_10 &= 0xfffdffff;
    o->unk_b0->unk_10 |= 0x40000000;
    s32 k;
    if (a) {
        k = unk_128.getDesignKey();
    } else {
        k = unk_1228.getDesignKey();
    }
    o->unk_b0->unk_10 |= 0x10000;
    o->unk_b0->unk_10 |= 0x20000;
    if (k == 1) {
        o->unk_b0->unk_10 |= 0x40000;
        o->unk_b0->unk_10 |= 0x80000;
    }
    o->unk_b0->unk_00 |= 8;
    o->unk_b0->unk_2c = rec->unk_20;
    o->unk_b0->unk_2e = rec->unk_22;
    o->unk_b0->unk_30 = rec->unk_24;
    o->unk_b0->unk_34 = rec->unk_28;
    o->unk_b0->unk_00 &= ~1;
    o->unk_b0->unk_00 |= 6;
    if (a) {
        switch (unk_3522) {
        case 4:
            v8 = FX_Div(0, 0x64000) + 0x2000;
            vc = FX_Div(0, 0x64000) + 0x4000;
            break;
        case 6:
            v8 = FX_Div(0, 0x64000) + 0x2000;
            vc = FX_Div(0, 0x64000) + 0x4000;
            break;
        case 8:
            v8 = FX_Div(0, 0x64000) + 0x2000;
            vc = FX_Div(0, 0x64000) + 0x4000;
            break;
        }
        o->unk_b0->unk_18 = v8;
        o->unk_b0->unk_1c = vc;
    } else {
        switch (unk_3522) {
        case 4:
            v10 = FX_Div(0, 0x64000) + 0x2000;
            break;
        case 6:
            v10 = FX_Div(0, 0x64000) + 0x3000;
            break;
        case 8:
            v10 = FX_Div(0, 0x64000) + 0x4000;
            break;
        }
        o->unk_b0->unk_18 = v10;
        o->unk_b0->unk_1c = v10;
    }
    o->unk_08 &= 0xfffffeff;
}

struct Unk_ov004_0222a644_Rec {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
    u8 unk_08;
    u8 unk_09;
};

struct Unk_ov004_0222a644_Owner {
    u8 pad_00[0x28];
    Unk_ov004_0222a644_Rec *unk_28;
    u32 unk_2c;
};

struct Unk_ov004_0222a644_Cell {
    u8 pad_00[0x20];
    Unk_ov004_0222a644_Owner *unk_20;
};

struct Unk_ov004_0222a644_Grid {
    Unk_ov004_0222a644_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0222a644_V3 {
    s32 x, y, z;
    Unk_ov004_0222a644_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

extern "C" void RoomShell_SpawnBoardSigns(void *self) {
    Unk_ov004_0222a644_Grid *g = (Unk_ov004_0222a644_Grid *)gSceneBlockMap;
    Unk_ov004_0222a644_Cell *c;
    if ((u8 *)g->unk_04 > (u8 *)0 && (u8 *)g->unk_08 > (u8 *)0 && g->unk_00 != 0) {
        c = g->unk_00;
    } else {
        c = 0;
    }
    Unk_ov004_0222a644_Owner *o = c->unk_20;
    if (o != 0) {
        Unk_ov004_0222a644_Rec *e = o->unk_28;
        if (e != 0) {
            if (o->unk_2c != 0) {
                u32 i;
                for (i = 0; i < o->unk_2c; e++, i++) {
                    Unk_ov004_0222a644_V3 v((e->unk_00 << 12) >> 4, (e->unk_02 << 12) >> 4, (e->unk_04 << 12) >> 4);
                    RoomBoardSign_Spawn(&v, (e->unk_06 << 12) >> 4, ((s32)(e->unk_08 << 30)) >> 16, e->unk_09);
                }
            }
        }
    }
}

struct Unk_ov004_0222a560_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
};

extern "C" s16 RoomShell_CalcWdColor(void *self) {
    Unk_ov004_0222a560_Col a;
    Unk_ov004_0222a560_Col c;
    Unk_ov004_0222a560_Col b;
    u16 *p = Sky_GetCurrentPalette();
    *(u16 *)&c = 0xffff;
    if (p != 0) {
        *(u16 *)&a = Sky_GetLightColor(0);
        b = a;
        *(u16 *)&c = p[5];
        s32 r = c.r + b.r / 3;
        s32 g = c.g + b.g / 3;
        s32 l = c.b + b.b / 3;
        if (r > 0x1f) {
            r = 0x1f;
        } else if (r < 0) {
            r = 0;
        }
        if (g > 0x1f) {
            g = 0x1f;
        } else if (g < 0) {
            g = 0;
        }
        if (l > 0x1f) {
            l = 0x1f;
        } else if (l < 0) {
            l = 0;
        }
        c.r = r;
        c.g = g;
        c.b = l;
    }
    return *(s16 *)&c;
}

// ---------------------------------------------------------------- callbacks
struct Unk_ov004_0222a500_Hdr {
    u8 unk_00;
    u8 unk_01;
};

class Unk_ov004_0222a500_Tgt {
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
    virtual void vfunc_48(u32 a, void *b);
    virtual void vfunc_4c(u32 a, void *b);
};

struct Unk_ov004_0222a500_Own {
    u8 pad_00[0x2c];
    /* 0x2c */ Unk_ov004_0222a500_Tgt *unk_2c;
};

struct Unk_ov004_0222a500 {
    /* 0x00 */ Unk_ov004_0222a500_Hdr *unk_00;
    /* 0x04 */ Unk_ov004_0222a500_Own *unk_04;
    /* 0x08 */ u8 pad_08[0x1c - 0x08];
    /* 0x1c */ void (*unk_1c)(Unk_ov004_0222a500 *);
    /* 0x20 */ u8 pad_20[4];
    /* 0x24 */ void (*unk_24)(Unk_ov004_0222a500 *);
    /* 0x28 */ u8 pad_28[0x90 - 0x28];
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91;
    /* 0x92 */ u8 unk_92;
};

extern "C" void RoomShell_MatCallback(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_4c(self->unk_00->unk_01, self);
    }
}

extern "C" void RoomShell_NodeDescCallback(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    Unk_ov004_0222a500_Tgt *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_48(self->unk_00->unk_01, self);
    }
}

extern "C" void RoomShell_InitRenderObj(void *p) {
    Unk_ov004_0222a500 *self = (Unk_ov004_0222a500 *)p;
    self->unk_1c = (void (*)(Unk_ov004_0222a500 *))RoomShell_MatCallback;
    self->unk_90 = 2;
    self->unk_24 = (void (*)(Unk_ov004_0222a500 *))RoomShell_NodeDescCallback;
    self->unk_92 = 2;
}

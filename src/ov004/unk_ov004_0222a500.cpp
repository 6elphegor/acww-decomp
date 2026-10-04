#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "item/ItemId.h"
#include "gfx/G3dResAccess.h"
#include "gfx/MatTexBinder.h"
#include "game/FxVec3.h"
#include "gfx/MatTexVramTask.h"
#include "game/TouchPickCylinder.h"
#include "gfx/AnimModel.h"
#include "gfx/ModelAnim.h"
#include "sys/ProcProfile.h"
#include "gfx/Rgb555.h"
#include "gfx/Mtx43.h"
#include "gfx/NNSG3dRS.h"
#include "gfx/NNSG3dResMatData.h"
#include "gfx/BgModelCache.h"
#include "town/Unk_0204e858_Grid.h"

// ---------------------------------------------------------------- real symbol names of main-module methods
// (called as free functions with the object as first argument; the mangled name is the symbols.txt name)
#define SndEnvChannel_callRelease _ZN13SndEnvChannel11callReleaseEv
#define SndEnvChannel_callRequestSustained _ZN13SndEnvChannel20callRequestSustainedEPv
#define SndEnvChannel_callUpdateRelative _ZN13SndEnvChannel18callUpdateRelativeEP7VecFx32
#define SndEnvChannel_callReset _ZN13SndEnvChannel9callResetEv
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
#define Model_setResourceAndBind _ZN5Model18setResourceAndBindEP12NNSG3dResMdlj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define MatTexBinder_getMaterial _ZN12MatTexBinder11getMaterialEv
#define MatTexBinder_bindByIdx _ZN12MatTexBinder9bindByIdxEPhii
#define MatTexBinder_bindByName _ZN12MatTexBinder10bindByNameEPhPKcS2_
#define MatTexBinder_setMaterialByName _ZN12MatTexBinder17setMaterialByNameEPhPKc
#define G3dResAccess_findNodeIdx _ZN12G3dResAccess11findNodeIdxEi
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define HouseData_getRoom _ZN9HouseData7getRoomEi
#define HouseRoom_setCarpet _ZN9HouseRoom9setCarpetEPtj
#define HouseRoom_setWallpaper _ZN9HouseRoom12setWallpaperEPtj
#define HouseRoom_getCarpet _ZN9HouseRoom9getCarpetEPi
#define HouseRoom_getWallpaper _ZN9HouseRoom12getWallpaperEPi
#define PatternTexCache_getPlayerTexKey _ZN15PatternTexCache15getPlayerTexKeyEii
#define TouchPicker_addCylinder _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP7VecFx32S3_S3_ih
#define TouchPicker_pushCylinder _ZN11TouchPicker12pushCylinderEP17TouchPickCylinder
#define MatTexVramTask_request _ZN14MatTexVramTask7requestEPvjS0_jj
#define MatTexVramTask_cancel _ZN14MatTexVramTask6cancelEv

// ---------------------------------------------------------------- library-side classes (real symbols)


extern "C" {
void CarpetTex_Init(void *o);
void WallpaperTexBuf_Init(void *o);
}

struct CarpetTexBuf {
    u8 pad[0x20f0 - 0x2c];
    CarpetTexBuf() {
        CarpetTex_Init(this);
    }
};

struct WallpaperTexBuf {
    u8 pad[0x10f0 - 0x2c];
    WallpaperTexBuf() {
        WallpaperTexBuf_Init(this);
    }
};




extern "C" {
void *__cxa_vec_ctor(void *array, u32 count, u32 size, void *ctor, void *dtor);
void *__cxa_vec_cleanup(void *array, u32 count, u32 size, void *dtor);
void _ZN11BoxColliderC1Ev(void *self);
void _ZN11BoxColliderD2Ev(void *self);
void _ZN16RoomScene22ShapeC1Ev(void *self);
void _ZN16RoomScene22ShapeD1Ev(void *self);
}





struct RoomShellStackPad {
    s32 v[2];
    RoomShellStackPad() {}
    ~RoomShellStackPad() {}
};


struct Unk_ov004_0222b954_Pair {
    volatile u16 a;
    volatile u16 b;
};

// ---------------------------------------------------------------- classes of this unit
class RoomShellMatAnim : public ModelAnim {
public:
    RoomShellMatAnim();
    virtual ~RoomShellMatAnim();
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

    /* 0x0000 */ u16 prevItem;
    /* 0x0002 */ u16 item;
    /* 0x0004 */ MatTexVramTask texTask;
    /* 0x002c */ CarpetTexBuf texBuf;
    /* 0x20f0 */ s32 designKey;
    /* 0x20f4 */ MatTexBinder matBinder;
    /* 0x20fc */ u8 *texRes;
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

    /* 0x0000 */ u16 prevItem;
    /* 0x0002 */ u16 item;
    /* 0x0004 */ MatTexVramTask texTask;
    /* 0x002c */ WallpaperTexBuf texBuf;
    /* 0x10f0 */ s32 designKey;
    /* 0x10f4 */ MatTexBinder matBinder;
    /* 0x10fc */ u8 *texRes;
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

    /* 0x20 */ u8 isActive;
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

    u8 colliders[2][0x9c];
};

class RoomShell : public GameProc {
public:
    RoomShell();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~RoomShell();
    virtual void onNodeDescCallback(s32 a, NNSG3dRS *b);
    virtual void onMatCallback(s32 idx, NNSG3dRS *o);

    void setMatLightFlags(u8 *p);
    void storeBaseMtx();
    void initAnims();
    void initWallAndFloor();
    void calcRoomSize();

    /* 0x0050 */ AnimModel model;
    /* 0x0108 */ RoomShellMatAnim matAnim[1];
    /* 0x0128 */ RoomWallpaper wallpaper;
    /* 0x1228 */ RoomCarpet carpet;
    /* 0x3328 */ RoomEntranceColliders entranceColliders;
    /* 0x3460 */ u8 scene0ACollider[0x9c];  // BoxCollider (C1 / D2 called by hand, as the original does)
    /* 0x34fc */ u8 scene22Shape[0x24];  // RoomScene22Shape
    /* 0x3520 */ s8 hourHandNode;
    /* 0x3521 */ s8 minuteHandNode;
    /* 0x3522 */ s8 roomSize;
    /* 0x3523 */ s8 hasuNode;
    /* 0x3524 */ u32 pad_3524;
    /* 0x3528 */ VecFx32 clockPos;
    /* 0x3534 */ void *clockSe;
    /* 0x3538 */ u8 pad_3538[8];
    /* 0x3540 */ s8 wdMatIdx;
};


// ---------------------------------------------------------------- externs
extern "C" {
u32 Scene_GetCurrent(void);
s32 Scene_InHouseRoom(void);
s32 Scene_InUnk6To8(void);
s32 Scene_InNookShop(void);
u32 Scene_GetHouseRoom(void);
void Snd_PlaySe(s32 a);
void JointCb_RotateClockHourHand(void *p);
void JointCb_RotateClockMinuteHand(void *p);
u32 Scene_GetTouchPicker(void);
u32 TouchPicker_addCylinder(u32 o, void *obj, void *v, s32 a, s32 b, s32 c, s32 d);
u32 TouchPicker_pushCylinder(u32 o, void *obj);
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
u32 Item_GetDesignPlayer(u16 *p);
u32 Item_GetDesignSlot(u16 *p);
u32 PatternTexCache_Get(void);
u8 *PatternTexCache_getPlayerTexKey(u32 a, u32 b, u32 c);
void RoomWallFloor_SetSceneCarpet(u32 a, u16 *p);
void RoomWallFloor_SetSceneWallpaper(u32 a, u16 *p);
BOOL CarpetTex_Load(void *o, u16 *p);
void *CarpetTex_GetTex(void *o);
BOOL Wallpaper_LoadTexture(void *o, u16 *p);
void *Wallpaper_GetTex(void *o);
void *HouseData_getRoom(void *self, u32 idx);
void HouseRoom_setCarpet(void *o, u16 *p, u32 k);
s32 HouseRoom_setWallpaper(void *self, u16 *a, u32 b);
BOOL BoxCollider_Unregister(void *self);
BOOL BoxCollider_Register(void *self, s32 a, s32 b, s32 c, void *p, s32 s, void *q);
void MatTexVramTask_cancel(void *self);
BOOL MatTexVramTask_request(void *self, void *a, u32 b, void *c, u32 d, u32 e);
void MatTexBinder_bindByIdx(void *self, u8 *a, s32 b, s32 c);
void MatTexBinder_bindByName(void *self, u8 *a, const char *b, const char *c);
void MatTexBinder_setMaterialByName(void *self, u8 *a, const char *b);
s32 MatTexBinder_getMaterial(void *self);
s32 G3dResAccess_findNodeIdx(void *self, const char *s);
s32 G3dResAccess_findMatIdx(void *self, const char *s);
s32 FX_Div(s32 a, s32 b);
void Mtx43_SetTranslate(void *m, s32 a, s32 b, s32 c);
u32 SceneLights_GetMatLightMask2();
s32 Model_setResourceAndBind(void *self, u32 a, u32 b);
s32 AnimModel_allocAnmObj(void *self, u32 a);
s32 BlendAnimModel_initAnim(void *self, u32 a, s32 b, s32 c, s32 d, s32 e);
s32 AnimModel_attachAnim(void *self);
s32 ModelAnim_allocMatAnm(void *self, void *a, u32 b);
s32 ModelAnim_init(void *self, u32 a, s32 b, s32 c, s32 d);
u32 Model_getRenderObj(void *self);
s32 ModelAnim_addToRenderObj(void *self, u32 a);
u16 *HouseRoom_getWallpaper(void *self, s32 *i);
u16 *HouseRoom_getCarpet(void *self, s32 *i);
void *SaveVillagers_Get(void *self, s32 i);
u32 Villager_GetWallpaper(void *self);
u32 Villager_GetCarpet(void *self);
u16 *RoomWallFloor_GetSceneWallpaper(s32 r);
u16 *RoomWallFloor_GetSceneCarpet(s32 r);
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
void SndEnvChannel_callRelease(void *self);
void AnimModel_drawAnimated(void *self, s32 a);
void ObjShadow_Update();
void CharaShadow_UpdateColor();
void NNS_G3dMdlSetMdlDiff(void *a, s32 b, u32 c);
s32 BlendAnimModel_getAnmObj(void *self);
void AnimModel_stepAnim(void *self);
void AnimFrameCtrl_step(void *self);
s32 FtrMgr_GetCycleCounter(s32 a);
void RoomBoardSign_Spawn(void *v, s32 a, s32 b, u32 c);
void SndEnvChannel_callRequestSustained(void *self, u32 a);
void SndEnvChannel_callUpdateRelative(void *self, VecFx32 *v);
void Model_setInitCallback(void *self, void *fn, void *obj);
void SndEnvChannel_callReset(void *self);
u16 *Sky_GetCurrentPalette();
u16 Sky_GetLightColor(u32 v);

extern u8 gSaveHouse[];
extern u8 gSaveVillagers[];
extern u8 data_021f47e0[];
extern u8 data_0213b91c[];
extern u32 data_020c8cc0;
extern Unk_0204e858_Grid *gSceneBlockMap;
extern u32 gBgHeap;
extern u32 data_021ce63c;

// own functions (plain symbols), declared before their first use
void RoomShell_InitRenderObj(void *self);
void RoomShell_NodeDescCallback(void *self);
void RoomShell_MatCallback(void *self);
s16 RoomShell_CalcWdColor(void *self);
void RoomShell_SpawnBoardSigns(void *self);
BOOL RoomEntranceColliders_InHouseScene();
void RoomWallpaper_SaveToHouseRoom(void *self, u16 *a, u32 b);
void RoomShell_GetSceneWallFloor(void *self, u16 *a, s32 *b, u16 *c, s32 *d);
}

extern "C" u32 RoomShellMatAnim_GetAnmObj(ModelAnim *o);

// ---------------------------------------------------------------- data
extern "C" RoomShell *sRoomShell;
extern "C" char sRoomWallpaperMatNameStr[];
extern "C" char sRoomCarpetMatNameStr[];
extern "C" RoomShell *RoomShell_Create();

extern "C" const char *sRoomCarpetMatName;
extern "C" const char *sRoomWallpaperMatName;
extern "C" FxVec3 sRoomHasuPos;
extern "C" ItemId sRoomNoItem;
extern "C" ProcProfile sRoomShellProfile = { (void *(*)())RoomShell_Create, 0xe, 0xa };
extern "C" {
FxVec3 sRoomHasuPos(0, 0, 0);
RoomShell *sRoomShell;
}


// ---------------------------------------------------------------- functions (descending address order)
extern "C" RoomShell *RoomShell_Create() {
    return new RoomShell;
}

RoomShell::RoomShell() {
    _ZN11BoxColliderC1Ev(scene0ACollider);
    _ZN16RoomScene22ShapeC1Ev(scene22Shape);
    clockSe = data_0213b91c;
    hourHandNode = minuteHandNode = wdMatIdx = -1;
}

RoomShell::~RoomShell() {
    _ZN16RoomScene22ShapeD1Ev(scene22Shape);
    _ZN11BoxColliderD2Ev(scene0ACollider);
}

BOOL RoomShell::onCreate() {
    sRoomShell = this;
    entranceColliders.init();
    ((RoomEntranceColliders *)&scene0ACollider)->initScene0A();
    ((RoomScene22Shape *)scene22Shape)->init();
    calcRoomSize();
    initAnims();
    setMatLightFlags((u8 *)model.resMdl);
    storeBaseMtx();
    initWallAndFloor();
    hourHandNode = G3dResAccess_findNodeIdx((u8 *)model.resMdl, "kh_j");
    minuteHandNode = G3dResAccess_findNodeIdx((u8 *)model.resMdl, "km_j");
    hasuNode = G3dResAccess_findNodeIdx((u8 *)model.resMdl, "hasu1");
    wdMatIdx = G3dResAccess_findMatIdx((u8 *)model.resMdl, "wd");
    Model_setInitCallback(&model, (void *)RoomShell_InitRenderObj, this);
    RoomShell_SpawnBoardSigns(this);
    SndEnvChannel_callReset(&clockSe);
    return TRUE;
}

BOOL RoomShell::onExecute() {
    if (BlendAnimModel_getAnmObj(&model)) {
        AnimModel_stepAnim(&model);
    }
    RoomShellMatAnim *e = matAnim;
    if (RoomShellMatAnim_GetAnmObj(e)) {
        AnimFrameCtrl_step(e);
        *(u32 *)matAnim[0].anmObj = matAnim[0].curFrame;
    }
    if (clockPos.x != 0) {
        s32 id = FtrMgr_GetCycleCounter(clockPos.x);
        if (id == 9 || id == 0x1d) {
            SndEnvChannel_callRequestSustained(&clockSe, 0x4d1);
        }
    }
    VecFx32 v = clockPos;
    SndEnvChannel_callUpdateRelative(&clockSe, &v);
    ((RoomScene22Shape *)scene22Shape)->update();
    data_021ce63c = 0;
    return TRUE;
}

BOOL RoomShell::onDraw() {
    ObjShadow_Update();
    CharaShadow_UpdateColor();
    if (wdMatIdx != -1) {
        Unk_ov004_0222b954_Pair t;
        t.a = RoomShell_CalcWdColor(this);
        t.b = t.a;
        NNS_G3dMdlSetMdlDiff((u8 *)model.resMdl, wdMatIdx, t.b);
    }
    AnimModel_drawAnimated(&model, 0);
    return TRUE;
}

BOOL RoomShell::onDelete() {
    ((RoomWallpaper *)&wallpaper)->release();
    ((RoomScene22Shape *)scene22Shape)->release();
    ((RoomEntranceColliders *)&scene0ACollider)->releaseScene0A();
    carpet.release();
    entranceColliders.release();
    Model_clearResource(&model);
    sRoomShell = 0;
    SndEnvChannel_callRelease(&clockSe);
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
    roomSize = cnt;
}

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
        void *o = HouseData_getRoom(gSaveHouse, SceneId_GetHouseRoom(r));
        if (o != NULL) {
            *a = *HouseRoom_getWallpaper(o, b);
            *c = *HouseRoom_getCarpet(o, d);
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
        u16 *p = RoomWallFloor_GetSceneWallpaper(r);
        if (Unk_ov004_0222b610_InA(p)) {
            *a = *p;
        } else {
            static ItemId t[6] = {
                ItemId(0x1140), ItemId(0x1141), ItemId(0x1142),
                ItemId(0x1143), ItemId(0x1143), ItemId(0x1143)
            };
            *a = t[i].id;
        }
        p = RoomWallFloor_GetSceneCarpet(r);
        if (Unk_ov004_0222b610_InB(p)) {
            *c = *p;
        } else {
            static ItemId t[6] = {
                ItemId(0x1184), ItemId(0x1185), ItemId(0x1186),
                ItemId(0x1187), ItemId(0x1187), ItemId(0x1187)
            };
            *c = t[i].id;
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
    Unk_0204e858_Grid *g = gSceneBlockMap;
    TownBlockCell *c;
    if ((u8 *)g->width > (u8 *)0 && (u8 *)g->height > (u8 *)0 && g->blocks != NULL) {
        c = g->blocks;
    } else {
        c = NULL;
    }
    BgAcreModel *r = c->bgModel;
    wallpaper.bindMaterial((u8 *)model.resMdl, (u32)r->tex);
    carpet.bindMaterial((u8 *)model.resMdl, (u8 *)r->tex);
    volatile u16 h[2];
    s32 w8;
    s32 w12;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    RoomShell_GetSceneWallFloor(this, (u16 *)&h[0], &w8, (u16 *)&h[1], &w12);
    if (Unk_ov004_0222b510_Range(&h[0])) {
        wallpaper.applyDefault(0x1124, (u8 *)model.resMdl, w8);
    }
    if (Unk_ov004_0222b510_Range(&h[1])) {
        carpet.applyDefault(0x1182, (G3dResAccess *)model.resMdl, w12);
    }
    ((RoomWallpaper *)&wallpaper)->setWallpaper((u16 *)&h[0], (G3dResAccess *)model.resMdl, w8);
    carpet.setCarpet((u16 *)&h[1], (G3dResAccess *)model.resMdl, w12);
}

void RoomShell::initAnims() {
    Unk_0204e858_Grid *g = gSceneBlockMap;
    TownBlockCell *c;
    if ((u8 *)g->width > (u8 *)0 && (u8 *)g->height > (u8 *)0 && g->blocks != NULL) {
        c = g->blocks;
    } else {
        c = NULL;
    }
    BgAcreModel *r = c->bgModel;
    Model_setResourceAndBind(&model, (u32)r->mdl, (u32)r->tex);
    if (r->jntAnm != 0) {
        if (AnimModel_allocAnmObj(&model, gBgHeap)) {
            BlendAnimModel_initAnim(&model, (u32)r->jntAnm, 0, 0x1000, 0, 0);
            AnimModel_attachAnim(&model);
        }
    }
    if (r->texSrtAnm != 0) {
        if (ModelAnim_allocMatAnm(matAnim, (u8 *)model.resMdl, gBgHeap)) {
            ModelAnim_init(matAnim, (u32)r->texSrtAnm, 0, 0x1000, 0);
            ModelAnim_addToRenderObj(matAnim, Model_getRenderObj(&model));
        }
    }
}

void RoomShell::storeBaseMtx() {
    Mtx43_SetTranslate(data_021f47e0, 0, 0, 0);
    *(Mtx43 *)&model.mtx = *(Mtx43 *)data_021f47e0;
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
        NNSG3dResMatData *en = (NNSG3dResMatData *)e;
        if ((en->polyAttr & 0xf) != 0) {
            en->polyAttr &= ~0xf;
            en->polyAttr |= SceneLights_GetMatLightMask2();
        }
    }
}

// ---- dummy wall object (manager + 0x128)
RoomWallpaper::RoomWallpaper() : prevItem(0xfff1), item(0xfff1) {
    prevItem = 0xfff1;
    item = 0xfff1;
    designKey = 0;
}

RoomWallpaper::~RoomWallpaper() {
}

u16 *RoomWallpaper::getItem() {
    return &item;
}

u16 *RoomWallpaper::getPrevItem() {
    return &prevItem;
}

u32 RoomWallpaper::getDesignKey() {
    return designKey;
}

BOOL RoomWallpaper::bindMaterial(u8 *a, u32 b) {
    if (b != 0) {
        MatTexBinder_setMaterialByName(&matBinder, a, sRoomWallpaperMatNameStr);
        texRes = (u8 *)b;
        return TRUE;
    }
    return FALSE;
}

void RoomWallpaper::applyDefault(u16 v, void *a, s32 b) {
    u16 t = v;
    ((RoomWallpaper *)this)->setWallpaper(&t, (G3dResAccess *)a, b);
}

extern "C" void RoomWallpaper_SaveToHouseRoom(void *self, u16 *a, u32 b) {
    if (Scene_InHouseRoom()) {
        void *r = HouseData_getRoom(gSaveHouse, Scene_GetHouseRoom());
        if (r != NULL) {
            HouseRoom_setWallpaper(r, a, b);
        }
    }
}

BOOL RoomWallpaper::setWallpaper(u16 *q, G3dResAccess *a, s32 key) {
    BOOL same;
    if (G3dResAccess_findMatIdx(a, sRoomWallpaperMatName) == -1) return FALSE;
    if (Item_IsFurniture(&item) != 0) {
        u32 x = Item_GetFurnitureIndex(&item);
        u32 y = Item_GetFurnitureIndex(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (item == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && designKey == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1100 && v <= 0x1143) in = TRUE;
        if (in != FALSE) {
            if (Wallpaper_LoadTexture(&texBuf, q) == 0) goto fail;
            if (Scene_InNookShop() == 0) {
                MatTexBinder_bindByName(&matBinder, texRes, "dummy_wall", "dummy_wall_pl");
            }
            void *r = Wallpaper_GetTex(&texBuf);
            if (MatTexVramTask_request(&texTask, a, (u32)sRoomWallpaperMatName, r, 0, 0) == 0) goto fail;
            prevItem = item;
            item = *q;
            RoomWallpaper_SaveToHouseRoom(this, &item, key);
            RoomWallFloor_SetSceneWallpaper(Scene_GetCurrent(), &item);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = Item_GetDesignPlayer(q);
            u32 t8 = Item_GetDesignSlot(q);
            u32 h = PatternTexCache_Get();
            u8 *idx = PatternTexCache_getPlayerTexKey(h, (u8)t7, (u8)t8);
            MatTexBinder_bindByIdx(&matBinder, idx, 0, 0);
            prevItem = item;
            item = *q;
            designKey = key;
            RoomWallpaper_SaveToHouseRoom(this, &item, key);
            RoomWallFloor_SetSceneWallpaper(Scene_GetCurrent(), &item);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    prevItem = item;
    item = *q;
    designKey = key;
    RoomWallpaper_SaveToHouseRoom(this, &item, key);
    RoomWallFloor_SetSceneWallpaper(Scene_GetCurrent(), &item);
    return TRUE;
}

void RoomWallpaper::release() {
    MatTexVramTask_cancel(&texTask);
}

// ---- dummy floor object (manager + 0x1228)
RoomCarpet::RoomCarpet() : prevItem(0xfff1), item(0xfff1) {
    prevItem = 0xfff1;
    item = 0xfff1;
    designKey = 0;
}

RoomCarpet::~RoomCarpet() {
}

u16 *RoomCarpet::getItem() {
    return &item;
}

u16 *RoomCarpet::getPrevItem() {
    return &prevItem;
}

u32 RoomCarpet::getDesignKey() {
    return designKey;
}

BOOL RoomCarpet::bindMaterial(u8 *buf, u8 *p) {
    if (p != 0) {
        MatTexBinder_setMaterialByName(&matBinder, buf, sRoomCarpetMatNameStr);
        texRes = p;
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
        void *o = HouseData_getRoom(gSaveHouse, t);
        if (o != 0) {
            HouseRoom_setCarpet(o, q, key);
        }
    }
}

BOOL RoomCarpet::setCarpet(u16 *q, G3dResAccess *a, s32 key) {
    BOOL same;
    if (G3dResAccess_findMatIdx(a, sRoomCarpetMatName) == -1) return FALSE;
    if (Item_IsFurniture(&item) != 0) {
        u32 x = Item_GetFurnitureIndex(&item);
        u32 y = Item_GetFurnitureIndex(q);
        if (x == y) same = TRUE;
        else same = FALSE;
    } else {
        if (item == *q) same = TRUE;
        else same = FALSE;
    }
    if (same != FALSE && designKey == key) {
        goto done;
    }
    {
        BOOL in = FALSE;
        u16 v = *q;
        if (v >= 0x1144 && v <= 0x1187) in = TRUE;
        if (in != FALSE) {
            if (CarpetTex_Load(&texBuf, q) == 0) goto fail;
            if (Scene_InNookShop() == 0) {
                MatTexBinder_bindByName(&matBinder, texRes, "dummy_floor", "dummy_floor_pl");
            }
            void *r = CarpetTex_GetTex(&texBuf);
            if (MatTexVramTask_request(&texTask, a, (u32)sRoomCarpetMatName, r, 0, 0) == 0) goto fail;
            prevItem = item;
            item = *q;
            saveToHouseRoom(&item, key);
            RoomWallFloor_SetSceneCarpet(Scene_GetCurrent(), &item);
            return TRUE;
        } else if (v >= 0x1188 && v <= 0x11a7) {
            u32 t7 = Item_GetDesignPlayer(q);
            u32 t8 = Item_GetDesignSlot(q);
            u32 h = PatternTexCache_Get();
            u8 *idx = PatternTexCache_getPlayerTexKey(h, (u8)t7, (u8)t8);
            MatTexBinder_bindByIdx(&matBinder, idx, 0, 0);
            prevItem = item;
            item = *q;
            designKey = key;
            saveToHouseRoom(&item, key);
            RoomWallFloor_SetSceneCarpet(Scene_GetCurrent(), &item);
            return TRUE;
        }
    }
fail:
    return FALSE;
done:
    prevItem = item;
    item = *q;
    designKey = key;
    saveToHouseRoom(&item, key);
    RoomWallFloor_SetSceneCarpet(Scene_GetCurrent(), &item);
    return TRUE;
}

void RoomCarpet::release() {
    MatTexVramTask_cancel(&texTask);
}

// ---- element of the manager's 0x20-byte array
RoomShellMatAnim::RoomShellMatAnim() {
}

RoomShellMatAnim::~RoomShellMatAnim() {
}

extern "C" u32 RoomShellMatAnim_GetAnmObj(ModelAnim *o) {
    return o->anmObj;
}

// ---- class Z
RoomEntranceColliders::RoomEntranceColliders() {
    __cxa_vec_ctor(colliders, 2, 0x9c, (void *)_ZN11BoxColliderC1Ev, (void *)_ZN11BoxColliderD2Ev);
}

RoomEntranceColliders::~RoomEntranceColliders() {
    __cxa_vec_cleanup(colliders, 2, 0x9c, (void *)_ZN11BoxColliderD2Ev);
}

extern "C" BOOL RoomEntranceColliders_InHouseScene() {
    if (Scene_InHouseRoom() != 0 || Scene_InUnk6To8() != 0) return TRUE;
    return FALSE;
}

BOOL RoomEntranceColliders::init() {
    if (RoomEntranceColliders_InHouseScene() != 0) {
        VecFx32 a;
        VecFx32 b;
        a.x = 0xd000;
        a.y = 0;
        a.z = 0x1c000;
        b.x = 0x13000;
        b.y = 0;
        b.z = 0x1c000;
        BOOL r0 = BoxCollider_Register(&colliders[0], 0x2000, 0, 0x4000, &a, 0, 0);
        BOOL r1 = BoxCollider_Register(&colliders[1], 0x2000, 0, 0x4000, &b, 0, 0);
        if (r0 != 0 && r1 != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

BOOL RoomEntranceColliders::release() {
    if (RoomEntranceColliders_InHouseScene() != 0) {
        BoxCollider_Unregister(&colliders[0]);
        BoxCollider_Unregister(&colliders[1]);
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
        BoxCollider_Register(&colliders[0], 0x8000, 0x2000, 0x1000, &s, 0, 0);
    }
}

extern "C" char sRoomWallpaperMatNameStr[] = "m_dummy_wall";
extern "C" const char *sRoomWallpaperMatName = sRoomWallpaperMatNameStr;

void RoomEntranceColliders::releaseScene0A() {
    if (Scene_GetCurrent() == 0xa) {
        BoxCollider_Unregister(&colliders[0]);
    }
}

// ---- class Y
RoomScene22Shape::RoomScene22Shape() {
    isActive = 0;
}

RoomScene22Shape::~RoomScene22Shape() {
}

void RoomScene22Shape::init() {
    VecFx32 v;
    if (Scene_GetCurrent() == 0x22) {
        isActive = 1;
    }
    if (isActive != 0) {
        v.x = 0x108f6;
        v.y = 0;
        v.z = 0x1351e;
        TouchPicker_addCylinder(Scene_GetTouchPicker(), this, &v, 0xf33, 0x6000, 0x16, 0xff);
    }
}

void RoomScene22Shape::update() {
    if (isActive != 0) {
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
            if (((RoomWallpaper *)&g->wallpaper)->setWallpaper(p, (G3dResAccess *)g->model.resMdl, key) != 0) {
                if (flag != 0) {
                    if (Scene_InNookShop() != 0) Snd_PlaySe(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(sRoomShell->wallpaper.getPrevItem(), 0x1100, 0x1143);
                if (r2 != FALSE) return sRoomShell->wallpaper.getPrevItem();
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
            if (g->carpet.setCarpet(p, (G3dResAccess *)g->model.resMdl, key) != 0) {
                if (flag != 0) {
                    if (Scene_InNookShop() != 0) Snd_PlaySe(0x50);
                }
                BOOL r2 = Unk_ov004_0222aacc_R1(sRoomShell->carpet.getPrevItem(), 0x1144, 0x1187);
                if (r2 != FALSE) return sRoomShell->carpet.getPrevItem();
                return (u16 *)&sRoomNoItem;
            }
        }
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetCarpet() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->carpet.getItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetPrevCarpet() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->carpet.getPrevItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetWallpaper() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->wallpaper.getItem();
    }
    return (u16 *)&sRoomNoItem;
}

extern "C" u16 *RoomShell_GetPrevWallpaper() {
    RoomShell *g = sRoomShell;
    if (g != 0) {
        return g->wallpaper.getPrevItem();
    }
    return (u16 *)&sRoomNoItem;
}

void RoomShell::onNodeDescCallback(s32 a, NNSG3dRS *b) {
    RoomShellStackPad pad;
    if (hourHandNode == a) {
        JointCb_RotateClockHourHand(b);
        VecFx32 *pv = (VecFx32 *)&b->pJntAnmResult->trans;
        VecFx32 v;
        v.y = pv->y;
        v.z = pv->z;
        v.x = pv->x;
        clockPos.x = v.x;
        clockPos.y = v.y;
        clockPos.z = v.z;
    } else if (minuteHandNode == a) {
        JointCb_RotateClockMinuteHand(b);
    } else if (hasuNode == a) {
        if (b != 0) {
            NNSG3dJntAnmResult *p = b->pJntAnmResult;
            s32 z = p->trans.z;
            s32 x = p->trans.x;
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

void RoomShell::onMatCallback(s32 idx, NNSG3dRS *o) {
    u8 *h = o->pResMat;
    u8 *t = h + 4;
    u32 off = *(u16 *)(h + 0xa);
    u32 stride = *(u16 *)(t + off);
    NNSG3dResMatData *rec = (NNSG3dResMatData *)(h + *(u32 *)(t + off + stride * idx + 4));
    BOOL a;
    BOOL b;
    s32 v8, vc, v10;
    if (idx == MatTexBinder_getMaterial(&wallpaper.matBinder)) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    if (idx == MatTexBinder_getMaterial(&carpet.matBinder)) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (a && Unk_ov004_0222a6c0_Rng(wallpaper.getItem())) {
    } else if (b && Unk_ov004_0222a6c0_Rng(carpet.getItem())) {
    } else {
        return;
    }
    o->pMatAnmResult->prmTexImage &= 0x3fffffff;
    o->pMatAnmResult->prmTexImage &= 0xfffbffff;
    o->pMatAnmResult->prmTexImage &= 0xfff7ffff;
    o->pMatAnmResult->prmTexImage &= 0xfffeffff;
    o->pMatAnmResult->prmTexImage &= 0xfffdffff;
    o->pMatAnmResult->prmTexImage |= 0x40000000;
    s32 k;
    if (a) {
        k = wallpaper.getDesignKey();
    } else {
        k = carpet.getDesignKey();
    }
    o->pMatAnmResult->prmTexImage |= 0x10000;
    o->pMatAnmResult->prmTexImage |= 0x20000;
    if (k == 1) {
        o->pMatAnmResult->prmTexImage |= 0x40000;
        o->pMatAnmResult->prmTexImage |= 0x80000;
    }
    o->pMatAnmResult->flag |= 8;
    o->pMatAnmResult->origWidth = rec->origWidth;
    o->pMatAnmResult->origHeight = rec->origHeight;
    o->pMatAnmResult->magW = rec->magW;
    o->pMatAnmResult->magH = rec->magH;
    o->pMatAnmResult->flag &= ~1;
    o->pMatAnmResult->flag |= 6;
    if (a) {
        switch (roomSize) {
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
        o->pMatAnmResult->scaleS = v8;
        o->pMatAnmResult->scaleT = vc;
    } else {
        switch (roomSize) {
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
        o->pMatAnmResult->scaleS = v10;
        o->pMatAnmResult->scaleT = v10;
    }
    o->flag &= 0xfffffeff;
}

struct RoomBoardSignDef {
    s16 posX;
    s16 posY;
    s16 posZ;
    s16 radius;
    u8 dir;
    u8 msgIndex;
};

extern "C" void RoomShell_SpawnBoardSigns(void *self) {
    Unk_0204e858_Grid *g = gSceneBlockMap;
    TownBlockCell *c;
    if ((u8 *)g->width > (u8 *)0 && (u8 *)g->height > (u8 *)0 && g->blocks != 0) {
        c = g->blocks;
    } else {
        c = 0;
    }
    BgAcreModel *o = c->bgModel;
    if (o != 0) {
        RoomBoardSignDef *e = (RoomBoardSignDef *)o->mgt;
        if (e != 0) {
            if ((u32)o->mgtCount != 0) {
                u32 i;
                for (i = 0; i < (u32)o->mgtCount; e++, i++) {
                    VecFx32Ctor v((e->posX << 12) >> 4, (e->posY << 12) >> 4, (e->posZ << 12) >> 4);
                    RoomBoardSign_Spawn(&v, (e->radius << 12) >> 4, ((s32)(e->dir << 30)) >> 16, e->msgIndex);
                }
            }
        }
    }
}

extern "C" s16 RoomShell_CalcWdColor(void *self) {
    Rgb555 a;
    Rgb555 c;
    Rgb555 b;
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
extern "C" void RoomShell_MatCallback(void *p) {
    NNSG3dRS *self = (NNSG3dRS *)p;
    RoomShell *t = (RoomShell *)self->pRenderObj->ptrUser;
    if (t != 0) {
        t->onMatCallback(self->c[1], self);
    }
}

extern "C" void RoomShell_NodeDescCallback(void *p) {
    NNSG3dRS *self = (NNSG3dRS *)p;
    RoomShell *t = (RoomShell *)self->pRenderObj->ptrUser;
    if (t != 0) {
        t->onNodeDescCallback(self->c[1], self);
    }
}

extern "C" void RoomShell_InitRenderObj(void *p) {
    NNSG3dRS *self = (NNSG3dRS *)p;
    self->cbVecFunc[4] = (void *)RoomShell_MatCallback;
    self->cbVecTiming[4] = 2;
    self->cbVecFunc[6] = (void *)RoomShell_NodeDescCallback;
    self->cbVecTiming[6] = 2;
}

// mwcc-version: 1.2/base
// ov004 TU33: .text 0x02235fd0-0x02237440 (actor 0224ebec "bug" scene object + scene objects 0224eb9c)
#include "types.h"
#include "gfx/Mtx43.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "actor/ActorListNode.h"
#include "actor/Actor.h"
#include "room/HouseData.h"
#include "actor/ActorProfile.h"
#include "sys/ProcProfile.h"
#include "game/CollisionState.h"

// main / runtime symbols by their real names
#define func_02000c8c _ZN6FxVec3D1Ev
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define SndEnvChannel_callRelease _ZN13SndEnvChannel11callReleaseEv
#define SndEnvChannel_callRequest _ZN13SndEnvChannel11callRequestEPv
#define SndEnvChannel_callRequestSustained _ZN13SndEnvChannel20callRequestSustainedEPv
#define SndEnvChannel_callUpdateRelative _ZN13SndEnvChannel18callUpdateRelativeEP7VecFx32
#define SndEnvChannel_callReset _ZN13SndEnvChannel9callResetEv
#define func_02031c10 _ZN11BoxColliderD2Ev
#define func_02031c48 _ZN11BoxColliderC1Ev
#define func_0203239c _ZN14CollisionStateD1Ev
#define func_020323b0 _ZN14CollisionStateC1Ev
#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP7VecFx32ii
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
#define ActorPlacedCollider_setupForActorAt _ZN19ActorPlacedCollider15setupForActorAtEPvP7VecFx32iijjjhi
#define func_02088c34 _ZN19ActorPlacedColliderD2Ev
#define func_02088c4c _ZN19ActorPlacedColliderC1Ev
#define ActorCollider_isHitByGroup _ZN13ActorCollider12isHitByGroupEj
#define ActorCollider_submit _ZN13ActorCollider6submitEv
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

#pragma opt_loop_invariants off




// a CollisionState built and destroyed by hand (C1/D1); a real CollisionState local would add implicit calls
struct CollisionStateStorage {
    u32 v[0x30 / 4];
};

struct Unk_ov004_0223717c_Grid {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ s32 unitsX;
    /* 0x10 */ s32 unitsZ;
};



extern "C" {
void func_02031c48(void *p);
void func_02031c10(void *p);
void List_Remove(void *list, void *node);
}



#define F08(o) (*(u32 *)((u8 *)(o) + 8))

// vtable 0x0224ebe4, size 0x268
class HouseRoach : public Actor {
public:
    HouseRoach();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~HouseRoach();

    Actor *getNearestCharacter();
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

    /* 0xd4 */ s32 crawlSpeed;
    /* 0xd8 */ s32 jumpSpeed;
    /* 0xdc */ u32 moveResult[12];
    /* 0x10c */ s32 roachState;
    /* 0x110 */ s32 lifeState;
    /* 0x114 */ u32 sound[3];
    /* 0x120 */ u8 model[0x5c];
    /* 0x17c */ u32 modelResMdl;
    /* 0x180 */ u8 pad_180[4];
    /* 0x184 */ Mtx43 modelMtx;
    /* 0x1b4 */ u8 unk_1b4[0x24];
    /* 0x1d8 */ u8 hitBox[0x3c];
    /* 0x214 */ u8 isHit;
    /* 0x215 */ u8 pad_215[0x228 - 0x215];
    /* 0x228 */ s16 spawnAngle;
    /* 0x22a */ u8 isJumping;
    /* 0x22b */ u8 pad_22b;
    /* 0x22c */ s16 stateTimer;
    /* 0x22e */ s16 jumpTimer;
    /* 0x230 */ VecFx32 probePoints[2];
    /* 0x248 */ VecFx32 probePrevPoints[2];
    /* 0x260 */ s8 wallProbe;
    /* 0x261 */ u8 pad_261;
    /* 0x262 */ u8 wallTurnDir;
    /* 0x263 */ u8 wantsCrawlSe;
    /* 0x264 */ s32 soundState;
};

// vtable 0x0224eb9c, size 0x50
class HouseRoachManager : public GameProc {
public:
    HouseRoachManager();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
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
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
void Heap_RestoreCurrent();
void *func_02106788(void *p);
void *func_021067a4(void *p, u32 q);
void BlendAnimModel_initAnim(void *p, void *a, s32 b, s32 c, u16 d, u16 e);
void AnimModel_attachAnim(void *p);
void SndEnvChannel_callReset(void *p);
void func_02088c34(void *p);
void func_020548a0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020548d0(void *p);
void func_02088c4c(void *p);
void func_02000c8c();
void FxVec3_Construct();
void func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
void *NpcRegistry_FindVillager(u32 i);
BOOL BlockMap_canPlaceItem(void *g, s32 x, s32 y);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
void FieldPos_FromUnitCenter(void *p, s32 x, s32 y);
void *Item_GetFurnitureIndex(void *p);
BOOL Item_IsFurniture();
s32 Random_GlobalBelow(s32 n);
void *PlayerActor_GetActor(u32 a);
s32 Vec_DistXZ(void *a, void *b);
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
void SndEnvChannel_callRelease(void *p);
void SndEnvChannel_callRequest(void *p, u32 id);
void SndEnvChannel_callRequestSustained(void *p, u32 id);
s32 SndEnvChannel_callUpdateRelative(void *p, void *v);
void CachedModel_release(void *p);
void Model_setPolygonId(void *p, s32 a);
void NNSi_G3dModifyPolygonAttrMask(u32 a, u32 b, u32 c);
void Model_setAlpha(void *p, u32 v);
void AnimModel_drawAnimated(void *p, u32 v);
void AnimModel_stepAnim(void *p);
void AnimModel_setFrame(void *p);
void CharaShadow_Draw(void *p, s32 a, s32 b, s32 c);
BOOL ActorCollider_isHitByGroup(void *p, u32 mask);
u32 WorldCurve_ToCurved(void *a, void *b);
void Effect_PlayById(u32 a, void *v, s32 b, s32 c);
s32 Math_AngleXZ(void *a, void *b);
s32 ActorPlacedCollider_setupForActorAt(void *a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 ActorCollider_submit(void *a);

void HouseRoach_FindVillager(void *self);
BOOL HouseRoach_LoadCount(void *self);
BOOL HouseRoach_SpawnInitial(void *owner);
}

extern "C" ProcProfile sHouseRoachManagerProfile;
extern "C" char sHouseRoachModelPath[0x18];
extern "C" ActorProfile sHouseRoachProfile;
extern "C" s8 sHouseRoachTurnCounter;
extern "C" volatile u8 sHouseRoachActiveCount;
extern "C" void *sHouseRoachManager;
extern "C" Actor *sHouseRoachVillager;
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

BOOL HouseRoachManager::onDelete() {
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
                    s32 d = Vec_DistXZ(q, (u8 *)o + 0x5c);
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

BOOL HouseRoachManager::onCreate() {
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
    VecFx32 loc;
    u32 *row2;
    u8 k;
    u32 t;
    s32 w;
    u32 b;
    for (y = 0; y < g->unitsZ; y++) {
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
        if (x < g->unitsX) goto xl0;
    }
    for (i = 0; i < 3 && sHouseRoachActiveCount < sHouseRoachTotal; i++) {
        if (cnt == 0) break;
        loc.x = 0;
        loc.y = 0;
        loc.z = 0;
        t = cnt;
        cnt = (u8)(t - 1);
        k = (u8)(Random_GlobalBelow(t) + 1);
        y2 = 0;
        goto yt1;
    yl1:
        x2 = 0;
        row2 = &rows[y2];
        w = g->unitsX;
        goto xt1;
    xl1:
        b = *row2;
        b = b >> x2;
        b = b & 1;
        if (b) k = (u8)(k - 1);
        if (k == 0) {
            *row2 -= 1 << x2;
            FieldPos_FromUnitCenter(&loc, x2, y2);
            loc.y = 0x200;
            y2 = g->unitsZ;
            goto yn1;
        }
        x2++;
    xt1:
        if (x2 < w) goto xl1;
    yn1:
        y2++;
    yt1:
        if (y2 < g->unitsZ) goto yl1;
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
    volatile u32 *p = sound;
    crawlSpeed = 0x614;
    jumpSpeed = 0x6b8;
    func_020323b0(moveResult);
    *p = (u32)data_0213b91c;
    *p = (u32)data_0213b954;
    func_020548d0(model);
    func_02088c4c(hitBox);
    func_02135714(probePoints, 2, 12, (void *)FxVec3_Construct, (void *)func_02000c8c);
    func_02135714(probePrevPoints, 2, 12, (void *)FxVec3_Construct, (void *)func_02000c8c);
    lifeState = 1;
    wallProbe = 0;
    wallTurnDir = 0;
    jumpTimer = 0;
    roachState = 3;
}

HouseRoach::~HouseRoach() {
    func_021355f0(probePrevPoints, 2, 12, (void *)func_02000c8c);
    func_021355f0(probePoints, 2, 12, (void *)func_02000c8c);
    func_02088c34(hitBox);
    func_020548a0(model);
    func_0203239c(moveResult);
}

extern "C" void HouseRoach_FindVillager(void *) {
    u8 i;
    for (i = 0; i < 8; i++) {
        void *r = NpcRegistry_FindVillager(i);
        if (r) sHouseRoachVillager = (Actor *)r;
    }
}

s32 HouseRoach::getSoundState() {
    return soundState;
}

void HouseRoach::setSoundState(s32 v) {
    soundState = v;
}

BOOL HouseRoach::setup() {
    CachedModel_loadCached(model, 0x474f4b49, sHouseRoachModelPath);
    void *h = FrameHeap_CreateAsCurrent(0x5000, gCurrentHeap);
    ProcBase_SetHeap(this, h);
    AnimModel_allocAnmObj(model, 0);
    void *t = File_Load("/insect/51/bug52.nsbva");
    Heap_adjust(h);
    Heap_RestoreCurrent();
    void *r = func_021067a4(func_02106788(t), 0);
    BlendAnimModel_initAnim(model, r, 0, 0x1000, 0, 0);
    AnimModel_attachAnim(model);
    SndEnvChannel_callReset(sound);
    s16 *q = &moveAngleX;
    q[1] = rotY;
    spawnAngle = q[1];
    gravity = -819;
    speed = crawlSpeed;
    isJumping = 0;
    wantsCrawlSe = 0;
    soundState = 0;
    return TRUE;
}

void HouseRoach::updateState() {
    VecFx32 v;
    if (roachState != 2) {
        updateCollision();
    }
    switch (roachState) {
    case 0:
        updateCrawl();
        break;
    case 1:
        speed = crawlSpeed;
        if (stateTimer-- > 0) {
            break;
        }
        if (isJumping != 0) {
            break;
        }
        roachState = 0;
        stateTimer = (Random_GlobalBelow(10) + 3) * 20;
        break;
    case 2:
        Effect_PlayById(0x50, &position, 0, 0);
        F08(this) = F08(this) - 1;
        lifeState = 2;
        playSe(2);
        break;
    case 3:
        if (Random_GlobalBelow(100) > 0x32) {
            roachState = 0;
            stateTimer = (Random_GlobalBelow(10) + 3) * 20;
        } else {
            roachState = 1;
            stateTimer = (Random_GlobalBelow(4) + 3) * 20;
        }
        break;
    }
    VecFx32 *pv = (VecFx32 *)&position;
    v.x = position.x;
    v.y = pv->y;
    v.z = pv->z;
    SndEnvChannel_callUpdateRelative(sound, &v);
}

void HouseRoach::updateCollision() {
    s32 ang;
    VecFx32 *p;
    u32 colliders[4][0x9c / 4]; // four BoxColliders, built (C1) and destroyed (D2) by hand
    u8 fr[4];
    u8 fm[4];
    VecFx32 v[4];
    s32 z1;
    s32 z2;
    u32 n;
    u8 i;
    s32 t;
    func_02031c48(colliders[0]);
    func_02031c48(colliders[1]);
    func_02031c48(colliders[2]);
    func_02031c48(colliders[3]);
    p = (VecFx32 *)this;
    p = (VecFx32 *)((u8 *)p + 0x5c);
    n = 1;
    ang = rotY;
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
            fr[i] = BoxCollider_Register(colliders[i], a, 0x1000, b, &v[i], z2, z2);
        } else {
            s32 a = func_01ffcb0c(0x4000, 0x1000);
            s32 b = func_01ffcb0c(0xa000, 0x1000);
            fr[i] = BoxCollider_Register(colliders[i], 0x1000, a, b, &v[i], z1, z1);
        }
    }
    if (roachState != 0) {
        move();
    }
    updatePosition((ActorCollider *)&hitBox);
    Collision_Move(&moveResult, p, &prevPosition, ang, 0x666, this, 0xf);
    for (i = 0; i < n; i++) {
        if (fr[i] != 0) {
            BoxCollider_Unregister(colliders[i]);
        }
    }
    func_02031c10(colliders[3]);
    func_02031c10(colliders[2]);
    func_02031c10(colliders[1]);
    func_02031c10(colliders[0]);
}

void HouseRoach::updateAppear() {
    VecFx32 v;
    speed = crawlSpeed;
    updateCollision();
    position.y = prevPosition.y;
    VecFx32 *pv = (VecFx32 *)&position;
    v.x = position.x;
    v.y = pv->y;
    v.z = pv->z;
    SndEnvChannel_callUpdateRelative(sound, &v);
}

BOOL HouseRoach::execute() {
    u32 t;
    wantsCrawlSe = 0;
    t = F08(this);
    if (t >= 0x1f) {
        if (lifeState == 1) {
            if (sHouseRoachVillager == NULL) {
                HouseRoach_FindVillager(this);
            }
            checkStomped();
            updateHitBox();
            updateState();
            checkHeight();
            if (isJumping != 0) {
                AnimModel_stepAnim(model);
            }
        } else {
            F08(this) = t - 1;
        }
    } else {
        if (lifeState == 1) {
            F08(this) = t + 2;
            updateAppear();
        } else {
            F08(this) = t - 1;
        }
    }
    if (F08(this) != 0) {
        Mtx43 buf;
        drawTilt = WorldCurve_ToCurved(&drawPos, &position);
        calcModelMatrix(&buf);
        modelMtx = buf;
    } else {
        release();
    }
    if (wantsCrawlSe == 0) {
        setSoundState(0);
    }
    return TRUE;
}

BOOL HouseRoach::checkHeight() {
    if (position.y >= 0xc00) {
        position.y = prevPosition.y;
        if ((moveResult[1] & 1) != 0) {
            u8 buf[0x40];
            roachState = 2;
            GroundInfo_initAtPos(buf, &position, 0, 0);
            position.y = GroundInfoBase_getHeight(buf, 1);
            GroundInfo_Destruct(buf);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL HouseRoach::checkStomped() {
    Actor *pl = (Actor *)PlayerActor_GetActor(4);
    if (isHit != 0) {
        if (isJumping == 0) {
            if (pl != NULL) {
                if (pl->speed > 0) {
                    if (ActorCollider_isHitByGroup(hitBox, 4) != 0) {
                        roachState = 2;
                        return TRUE;
                    }
                }
            }
            if (sHouseRoachVillager != NULL) {
                if (sHouseRoachVillager->speed > 0) {
                    if (ActorCollider_isHitByGroup(hitBox, 8) != 0) {
                        roachState = 2;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL HouseRoach::draw() {
    if (lifeState != 4) {
        VecFx32 *pv = (VecFx32 *)&position;
        if (F08(this) > 0x1f) {
            F08(this) = 0x1f;
        }
        Model_setPolygonId(model, 3);
        NNSi_G3dModifyPolygonAttrMask(modelResMdl, 1, 0x1f0000);
        Model_setAlpha(model, (u8)F08(this));
        AnimModel_drawAnimated(model, 0);
        if (F08(this) >= 0x1f && lifeState == 1) {
            CharaShadow_Draw(pv, 0x400, 0x4000, 0x1000);
        }
    }
    return TRUE;
}

BOOL HouseRoach::release() {
    CachedModel_release(model);
    lifeState = 4;
    F08(this) = 0xffff;
    SndEnvChannel_callRelease(sound);
    return TRUE;
}

void HouseRoach::playSe(u32 sel) {
    switch (sel) {
    case 0:
        wantsCrawlSe = 1;
        if (getSoundState() == 2) {
            SndEnvChannel_callRequest(sound, 0x1d2);
        } else {
            setSoundState(1);
        }
        break;
    case 1:
        SndEnvChannel_callRequestSustained(sound, 0x1d3);
        break;
    default:
        SndEnvChannel_callRequestSustained(sound, 0x1d4);
        break;
    }
}

u8 HouseRoach::probeWalls() {
    u8 r6 = 0;
    VecFx32 *r4r = &probePoints[0];
    CollisionStateStorage o1;
    u32 o2[16];
    u32 o3[16];
    volatile s32 t1;
    s16 t2;
    s16 t1v;
    s16 ang;
    func_020323b0(&o1);
    GroundInfo_initAtPos(o2, r4r, r6, r6);
    ang = rotY;
    if (probePrevPoints[0].x == 0 || probePrevPoints[0].z == 0) {
        probePrevPoints[0].x = probePoints[0].x;
        probePrevPoints[0].y = probePoints[0].y;
        probePrevPoints[0].z = probePoints[0].z;
    }
    Collision_Move(&o1, r4r, &probePrevPoints[0], ang, 0x19a, this, 0xf);
    t1 = (s16)(u16)((CollisionState *)(u32)&o1)->contacts.numContacts;
    if (GroundInfoBase_getHeight(o2, 1) > 0x200 || r4r->y > 0x1000 || t1 > 0) {
        r6++;
    }
    GroundInfo_initAtPos(o3, r4r + 1, 0, 0);
    if (probePrevPoints[1].x == 0 || probePrevPoints[1].z == 0) {
        probePrevPoints[1].x = probePoints[1].x;
        probePrevPoints[1].y = probePoints[1].y;
        probePrevPoints[1].z = probePoints[1].z;
    }
    Collision_Move(&o1, r4r + 1, &probePrevPoints[1], ang, 0x19a, this, 0xf);
    t2 = (s16)(u16)((CollisionState *)(u32)&o1)->contacts.numContacts;
    if (GroundInfoBase_getHeight(o3, 1) > 0x200 || r4r[1].y > 0x1000 || t2 > 0) {
        r6 += 2;
    }
    GroundInfo_Destruct(o3);
    GroundInfo_Destruct(o2);
    func_0203239c(&o1);
    return r6;
}

void HouseRoach::setProbePoints(s32 dist, s32 delta) {
    VecFx32 *pv = (VecFx32 *)&position;
    s16 ang = rotY;
    u32 idx;
    probePoints[0].x = position.x;
    probePoints[0].y = pv->y;
    probePoints[0].z = pv->z;
    probePoints[1].x = position.x;
    probePoints[1].y = pv->y;
    probePoints[1].z = pv->z;
    probePrevPoints[0].x = probePoints[0].x;
    probePrevPoints[0].y = probePoints[0].y;
    probePrevPoints[0].z = probePoints[0].z;
    probePrevPoints[1].x = probePoints[1].x;
    probePrevPoints[1].y = probePoints[1].y;
    probePrevPoints[1].z = probePoints[1].z;
    idx = ((u16)(s16)(ang + delta) >> 4) * 2;
    probePoints[0].x += (dist * data_02135f44[idx]) / 100;
    probePoints[0].z += (dist * data_02135f44[idx + 1]) / 100;
    probePoints[0].y = 0x200;
    idx = ((u16)(s16)(ang - delta) >> 4) * 2;
    probePoints[1].x += (dist * data_02135f44[idx]) / 100;
    probePoints[1].z += (dist * data_02135f44[idx + 1]) / 100;
    probePoints[1].y = 0x200;
}

Actor *HouseRoach::getNearestCharacter() {
    s32 d4, d3, d2, d1;
    Actor *p;
    Actor *g;
    VecFx32 *a;
    VecFx32 *b;
    VecFx32 *c;
    p = (Actor *)PlayerActor_GetActor(4);
    g = sHouseRoachVillager;
    if (g != NULL) {
        if (p != NULL) {
            a = (VecFx32 *)&position;
            b = (VecFx32 *)&p->position;
            c = (VecFx32 *)&g->position;
            d1 = position.x - p->position.x;
            if (d1 < 0) d1 = -d1;
            d2 = a->z - b->z;
            if (d2 < 0) d2 = -d2;
            d3 = position.x - c->x;
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
    u8 *self0 = (u8 *)&position;
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
            stateTimer = stateTimer - 1;
            speed = zero;
            if (stateTimer <= 0) {
                roachState = 1;
                stateTimer = (Random_GlobalBelow(4) + 1) * 20;
                res = 1;
            } else if (*(s32 *)(o + 0x98) > 0) {
                s32 d = Vec_DistXZ(self0, q);
                if (d < func_01ffcb0c(0x1000, 0x4000)) {
                    stateTimer = (Random_GlobalBelow(4) + 2) * 20;
                    roachState = 1;
                    res = 2;
                }
            }
        }
    }
    if (res == 2) {
        Actor *t = getNearestCharacter();
        if (t) {
            s16 *q92 = &moveAngleX;
            q92[1] = Math_AngleXZ(&t->position, self0);
            rotY = q92[1];
        }
    }
}

void HouseRoach::updateHitBox() {
    ActorPlacedCollider_setupForActorAt(hitBox, this, &position, 0x19a, 0x333, 0x81, 0xc, 0, 0xff, 0x1000);
    ActorCollider_submit(hitBox);
}

BOOL HouseRoach::move() {
    s32 a = rotY;
    VecFx32 *p6 = (VecFx32 *)&position;
    s32 hit = 0;
    u8 i;
    setProbePoints(0x3c, 0xe38);
    wallProbe = probeWalls();
    for (i = 0; i < 2; i++) {
        s32 o;
        if (i == 0) {
            o = (s32)PlayerActor_GetActor(4);
        } else {
            o = (s32)sHouseRoachVillager;
        }
        if (o != 0 && hit == 0) {
            VecFx32 *q = (VecFx32 *)(o + 0x5c);
            if (Vec_DistXZ(p6, q) < 0x1800) {
                s32 d = Math_AngleXZ(p6, q);
                if ((d >= 0 && a >= 0) || (d <= 0 && a <= 0)) {
                    s32 t = d - a;
                    if (t < 0) {
                        t = -t;
                    }
                    if (t < 0x2aaa) {
                        jumpTimer = jumpTimer + 1;
                        isJumping = 1;
                        hit = 1;
                        speed = jumpSpeed;
                        playSe(1);
                    }
                }
            }
        }
    }
    s32 c = jumpTimer;
    if (c > 0) {
        s32 k = c << 12;
        s32 r = func_01ffcb0c(0xcd, k);
        p6->y = func_01ffcb0c(0x99a - r, k);
        if (p6->y < 3) {
            p6->y = 3;
            jumpTimer = 0;
            isJumping = 0;
            AnimModel_setFrame(model);
        } else {
            jumpTimer = jumpTimer + 1;
            AnimModel_stepAnim(model);
        }
    } else {
        s32 m = wallProbe;
        if (m > 0) {
            if (m == 3) {
                if (wallTurnDir == 1 || wallTurnDir == 10) {
                    a = (s16)(a - 0xaaa);
                } else {
                    a = (s16)(a + 0xaaa);
                }
            } else if (m == 1 || wallTurnDir == 1) {
                a = (s16)(a - 0xaaa);
                wallTurnDir = 1;
            } else if (m == 2 || wallTurnDir == 2) {
                a = (s16)(a + 0xaaa);
                wallTurnDir = 2;
            }
        } else {
            if (sHouseRoachTurnCounter == 4) {
                a = (s16)(a + 0xaaa);
                sHouseRoachTurnCounter = -1;
            } else if (sHouseRoachTurnCounter == 2) {
                a = (s16)(a - 0xaaa);
            }
            sHouseRoachTurnCounter = sHouseRoachTurnCounter + 1;
            if (wallTurnDir < 10) {
                wallTurnDir = wallTurnDir * 10;
            }
        }
        playSe(m > 0 ? 0 : 0);
    }
    s16 *q92 = &moveAngleX;
    q92[1] = a;
    rotY = q92[1];
    return TRUE;
}

BOOL HouseRoach::onDraw() {
    return draw();
}

// ---- 0224ebec methods (symbols.txt names 0x2235fd0-0x2236244 after the 0224eb9c class; renamed)

BOOL HouseRoach::onCreate() {
    if (Scene_InHouseRoom()) {
        return setup();
    }
    return 1;
}

BOOL HouseRoach::onExecute() {
    return execute();
}

BOOL HouseRoach::onDelete() {
    return release();
}

// Declarations for data defined further down (definition order sets the data layout)

extern "C" ProcProfile sHouseRoachManagerProfile = {(void *(*)())HouseRoachManager_Create, 0xbf, 0xc2};

extern "C" char sHouseRoachModelPath[0x18] = "/insect/51/bug52.nsbmd";

extern "C" ActorProfile sHouseRoachProfile = {(void *(*)())HouseRoach_Create, 0xc0, 0xc3, 2, 0x50000, 0x50000, 0x140000};

extern "C" s8 sHouseRoachTurnCounter = 0;

extern "C" volatile u8 sHouseRoachActiveCount = 0;

extern "C" void *sHouseRoachManager = 0;

extern "C" Actor *sHouseRoachVillager = 0;

extern "C" volatile u8 sHouseRoachTotal = 0;

extern "C" HouseRoach *sHouseRoaches[3] = {0};

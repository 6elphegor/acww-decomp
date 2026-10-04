
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "gfx/Mtx43.h"
#include "gfx/TexVramSlot.h"
#include "gfx/CachedModel.h"
#include "player/FishBobber.h"
#include "game/GroundInfo.h"
#include "gfx/TexVramTask.h"
#include "player/FishBobberStates.h"
#include "actor/Character.h"




// Local scratch object filled by _ZN10GroundInfo9initAtPosEP7VecFx32ii and cleaned by GroundInfo_Destruct.
struct Unk_0205f92c_Buf {
    u8 pad_00[0x30];
    s32 waterKind;
    u8 pad_34[8];
    s32 waterSurfaceY;
};

class FishBobber;
class FishBobberPool;

typedef void (FishBobber::*Unk_0205f8d4_Fn)();





extern "C" {
extern u32 gFishBobberHeap;
extern CommManager *gCommManager;
extern u8 gSaveSongSet[];
extern u8 gSaveHouse[];

s32 Effect_End(s32 h);
s32 Effect_Create(u32 id, void *a, u32 b, u32 c);
void _ZN10GroundInfo9initAtPosEP7VecFx32ii(Unk_0205f92c_Buf *p, VecFx32 *v, s32 a, s32 b);
void GroundInfo_Destruct(Unk_0205f92c_Buf *p);
BOOL FishShadow_FleeFromPlayer(void *p);
void FishCatch_StartLift(void *p, s32 a);
void FishCatch_EndForShadow(void *p);
void FishCatch_IsLandedForShadow(void *p);
BOOL FishShadow_CheckReelResult(void *p);
BOOL FishShadow_TryHook(void *p);
void *NNS_G3dGetTex(void *p);
void File_LoadToBuffer(char *name, void *p, u32 size);
s32 Str_SPrintf(char *buf, char *fmt, ...);
s32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(s32 a);
u32 Scene_GetMaxCharacters(s32 a);
u32 NpcSpawn_GetSpNpcSlotCount();
#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll();
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust();
void *Heap_AllocAligned(u32 heap, u32 size, u32 align);
s32 FishBobberHeap_Destroy();
void FishBobberHeap_Create();
void *func_02060550(void *a, s32 b);
void func_020607c8(void *a, u16 *b);
u16 *func_020607d4(void *a);
u32 FishBobber_GetPlttVramSize();
u32 FishBobber_GetTex4x4VramSize();
u32 FishBobber_GetTexVramSize();
u32 FishBobber_GetModelSize();
char *FishBobber_GetModelPath(u32 n);
void SongSet_ClearBit(u8 *bits, u32 i);
void SongSet_SetBit(u8 *bits, u32 i);
BOOL SongSet_TestBit(u8 *bits, u32 i);
BOOL HouseRoom_SetCurrentSong(u16 *p);
BOOL HouseRoom_SetSongForScene(s32 a, u16 *p);
extern s16 data_02135f44[];

s32 PlayerPaletteHeap_Destroy();
s32 PlayerPaletteHeap_Create();
void NetBuf_WriteU16(void *p, s32 v);
void CommRecord_PackSource(void *p, s32 a, u8 b);
BOOL NetArea_IsLocalOwner();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_02072e44(void *p);
BOOL _ZN11CommManager7isMyAidEj(void *p, s32 h);
u16 NetBuf_ReadU16();
void CommRecord_UnpackSource(void *p, u8 *a, u8 *b);
BOOL SceneId_IsTown(u32 v);
void *TownBlockMap_Get();
void *HouseRoomMaps_GetForScene(u32 v);
void BlockMap_SetItemAtUnit(void *o, u16 *v, s32 a, s32 b, s32 c);
void BlockMap_SetBuriedAtUnit(void *o, s32 a, s32 b);
void BlockMap_ClearBuriedAtUnit(void *o, s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 Math_ApproachS32(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_Atan2(s32 a, s32 b);
s32 Effect_SetPosition(s32 h, VecFx32 *v, void *a, s32 b);
void Vec_ShiftRightTo(VecFx32 *out, VecFx32 *in, s32 n);
void VEC_Add(VecFx32 *a, VecFx32 *b, VecFx32 *out);
void VEC_Subtract(VecFx32 *a, VecFx32 *b, VecFx32 *out);
s32 Vec_DistXZ(VecFx32 *a, VecFx32 *b);
void Vec_ShiftRight(VecFx32 *v, s32 n);
void Mtx43_SetTranslate(Mtx43 *m, s32 x, s32 y, s32 z);
void FieldFish_StartCastSplash();
void WorldCurve_FromCurved(void *p, VecFx32 *v);
void WorldCurve_ToCurved(VecFx32 *a, VecFx32 *b);
void _ZN5Model10drawScaledEPi(void *e, s32 a);
BOOL Fishing_StepArc(VecFx32 *a, s32 k, VecFx32 *b, s32 *c, u8 flag);
void Fishing_CalcArcSpeed(VecFx32 *a, VecFx32 *b, s32 *c, s32 *d, u8 mode);
}


class FishBobberPool {
public:
    FishBobberPool();
    ~FishBobberPool();
    FishBobber *getFloatingBobber(s32 idx);
    void setBobber(s32 idx, FishBobber *p);
    BOOL pollTexUpload(s32 idx);
    void relocateTex(s32 idx);
    void loadModelFile(s32 idx, u32 n);
    void cancelTexUpload(s32 idx);
    CachedModel *getModel(s32 idx);
    TexVramTask *getTexTask(s32 idx);
    TexVramSlot *getTexSlot(s32 idx);
    void *getModelBuffer(s32 idx);
    void freeBuffers();
    void allocBuffers();

    void *modelBuffers[9];
    TexVramSlot texSlots[9];
    TexVramTask texTasks[9];
    CachedModel models[9];
    FishBobber *bobbers[9];
};


typedef void (FishBobberStates::*Unk_0205f360_Fn)();

extern "C" void _ZN16FishBobberStates11updateAct09Ev(void);
extern "C" void _ZN16FishBobberStates12updateEscapeEv(void);
extern "C" void _ZN16FishBobberStates12updateReelInEv(void);
extern "C" void _ZN16FishBobberStates12updateHookedEv(void);
extern "C" void _ZN16FishBobberStates11updateFloatEv(void);
extern "C" void _ZN16FishBobberStates10updateBiteEv(void);
extern "C" void _ZN16FishBobberStates10updateCastEv(void);
extern "C" void _ZN16FishBobberStates14updateCastFailEv(void);
extern "C" void _ZN16FishBobberStates10updateHeldEv(void);
extern "C" void _ZN16FishBobberStates10updateIdleEv(void);

FishBobberPool sFishBobberPool;
void *data_020dc4c4[2] = {(void *)_ZN16FishBobberStates12updateEscapeEv, 0};
void *data_020dc504[2] = {(void *)_ZN16FishBobberStates10updateIdleEv, 0};
void *data_020dc4fc[2] = {(void *)_ZN16FishBobberStates10updateHeldEv, 0};
void *data_020dc4f4[2] = {(void *)_ZN16FishBobberStates14updateCastFailEv, 0};
void *data_020dc4ec[2] = {(void *)_ZN16FishBobberStates10updateCastEv, 0};
void *data_020dc4bc[2] = {(void *)_ZN16FishBobberStates11updateAct09Ev, 0};
void *data_020dc4e4[2] = {(void *)_ZN16FishBobberStates10updateBiteEv, 0};
void *data_020dc4d4[2] = {(void *)_ZN16FishBobberStates12updateHookedEv, 0};
void *data_020dc4cc[2] = {(void *)_ZN16FishBobberStates12updateReelInEv, 0};
void *data_020dc4dc[2] = {(void *)_ZN16FishBobberStates11updateFloatEv, 0};
Unk_0205f360_Fn sFishBobberStateFns[10] = {
    *(Unk_0205f360_Fn *)data_020dc504,
    *(Unk_0205f360_Fn *)data_020dc4fc,
    *(Unk_0205f360_Fn *)data_020dc4f4,
    *(Unk_0205f360_Fn *)data_020dc4ec,
    *(Unk_0205f360_Fn *)data_020dc4dc,
    *(Unk_0205f360_Fn *)data_020dc4e4,
    *(Unk_0205f360_Fn *)data_020dc4d4,
    *(Unk_0205f360_Fn *)data_020dc4cc,
    *(Unk_0205f360_Fn *)data_020dc4c4,
    *(Unk_0205f360_Fn *)data_020dc4bc
};
char sFishBobberPathBuf[0x14];

static inline BOOL Unk_0205fbfc_Is2(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_0205fbfc_Is1(u8 v) { return v == 1 ? TRUE : FALSE; }

extern "C" void FishBobberPool_Create()
{
    FishBobberHeap_Create();
    sFishBobberPool.allocBuffers();
    if (gFishBobberHeap != 0) {
        Heap_adjust();
    }
}

extern "C" void FishBobberPool_Destroy()
{
    sFishBobberPool.freeBuffers();
    FishBobberHeap_Destroy();
}

extern "C" FishBobber *FishBobber_GetFloating(s32 idx)
{
    return sFishBobberPool.getFloatingBobber(idx);
}

extern "C" char *FishBobber_GetModelPath(u32 n)
{
    Str_SPrintf(sFishBobberPathBuf, "/PItm/Uki0/%d.nsbmd", n);
    return sFishBobberPathBuf;
}

extern "C" u32 FishBobber_GetModelSize() { return 0x4d8; }

extern "C" u32 FishBobber_GetTexVramSize() { return 0x200; }

extern "C" u32 FishBobber_GetTex4x4VramSize() { return 0; }

extern "C" u32 FishBobber_GetPlttVramSize() { return 0x20; }

FishBobberPool::FishBobberPool()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        modelBuffers[i] = 0;
        bobbers[i] = 0;
    }
}

FishBobberPool::~FishBobberPool()
{
}

void FishBobberPool::allocBuffers()
{
    u32 a = gCommManager->memberCount;
    u32 n = Scene_GetMaxPlayers(Scene_GetCurrent());
    u32 i;
    u32 m;
    if (a < n) {
        n = a;
    }
    if (n != 0) {
        a = n;
    } else {
        a = 1;
    }
    m = Scene_GetMaxCharacters(Scene_GetCurrent()) + NpcSpawn_GetSpNpcSlotCount() - a;
    for (i = 0; i < n; i++) {
        u32 x = FishBobber_GetTexVramSize();
        u32 y = FishBobber_GetTex4x4VramSize();
        texSlots[i].alloc((void *)x, (void *)y, (void *)FishBobber_GetPlttVramSize());
    }
    for (i = 4; i < m + 4; i++) {
        u32 x = FishBobber_GetTexVramSize();
        u32 y = FishBobber_GetTex4x4VramSize();
        texSlots[i].alloc((void *)x, (void *)y, (void *)FishBobber_GetPlttVramSize());
    }
    u32 heap = gFishBobberHeap;
    for (i = 0; i < n; i++) {
        modelBuffers[i] = Heap_AllocAligned(heap, FishBobber_GetModelSize(), 4);
    }
    u32 j = 4;
    a = 4;
    for (; j < m + 4; j++) {
        modelBuffers[j] = Heap_AllocAligned(heap, FishBobber_GetModelSize(), a);
    }
}

void FishBobberPool::freeBuffers()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        texSlots[i].clear();
    }
    for (i = 0; i < 9; i++) {
        modelBuffers[i] = 0;
        bobbers[i] = 0;
    }
    if (gFishBobberHeap != 0) {
        Heap_freeAll();
    }
}

void *FishBobberPool::getModelBuffer(s32 idx)
{
    return modelBuffers[idx];
}

TexVramSlot *FishBobberPool::getTexSlot(s32 idx)
{
    return &texSlots[idx];
}

TexVramTask *FishBobberPool::getTexTask(s32 idx)
{
    return &texTasks[idx];
}

CachedModel *FishBobberPool::getModel(s32 idx)
{
    return &models[idx];
}

void FishBobber::construct()
{
    slot = 9;
    ownerActor = 0;
    fish = 0;
    effect = -1;
    ownerAid = -1;
}

void FishBobber::destruct()
{
}

void FishBobber::attach(u32 id, Character *actor, u32 n)
{
    slot = id;
    if (n < 3) {
        sFishBobberPool.setBobber(id, this);
        sFishBobberPool.loadModelFile(id, n);
    } else {
        sFishBobberPool.setBobber(id, 0);
        sFishBobberPool.loadModelFile(id, 0);
    }
    void *p = sFishBobberPool.getModelBuffer(id);
    sFishBobberPool.relocateTex(id);
    sFishBobberPool.getModel(id)->setFromFile(p);
    if (actor) {
        ownerActor = actor;
    }
    curState = 0;
}

void FishBobber::detach()
{
    sFishBobberPool.getModel(getSlot())->release();
    sFishBobberPool.cancelTexUpload(getSlot());
    sFishBobberPool.setBobber(getSlot(), 0);
    slot = 9;
}

void FishBobberPool::cancelTexUpload(s32 idx)
{
    if (Unk_0205fbfc_Is1(texTasks[idx].state)) {
        texTasks[idx].cancel();
    } else {
        texTasks[idx].clear();
    }
}

void FishBobberPool::loadModelFile(s32 idx, u32 n)
{
    char *name = FishBobber_GetModelPath(n);
    void *p = getModelBuffer(idx);
    File_LoadToBuffer(name, p, FishBobber_GetModelSize());
}

void FishBobberPool::relocateTex(s32 idx)
{
    void *h = NNS_G3dGetTex(getModelBuffer(idx));
    getTexSlot(idx)->relocateTexture(h);
}

BOOL FishBobberPool::pollTexUpload(s32 idx)
{
    TexVramTask *p = getTexTask(idx);
    u8 t = p->state;
    if (Unk_0205fbfc_Is2(t)) {
        return TRUE;
    }
    if (!Unk_0205fbfc_Is1(t)) {
        p->requestTexResource((u32 *)NNS_G3dGetTex(getModelBuffer(idx)), 1);
    }
    return FALSE;
}

void FishBobberPool::setBobber(s32 idx, FishBobber *p)
{
    bobbers[idx] = p;
}

FishBobber *FishBobberPool::getFloatingBobber(s32 idx)
{
    if (idx >= 4) {
        return 0;
    }
    FishBobber *p = bobbers[idx];
    if (p != 0 && p->curState == 4) {
        return p;
    }
    return 0;
}

u8 FishBobber::getSlot()
{
    return slot;
}

void FishBobber::setOwnerAid(s32 v)
{
    ownerAid = v;
}

void FishBobber::setFish(void *p)
{
    fish = p;
}

void *FishBobber::getFish()
{
    return fish;
}

BOOL FishBobber::isInWater()
{
    if ((u32)(curState - 4) <= 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL FishBobber::tryHook()
{
    if (fish == 0) {
        setState(7);
        return FALSE;
    }
    return FishShadow_TryHook(fish);
}

BOOL FishBobber::checkReelResult()
{
    if (fish == 0) {
        return TRUE;
    }
    return FishShadow_CheckReelResult(fish);
}

void FishBobber::nudge()
{
    Unk_0205f92c_Buf buf;
    _ZN10GroundInfo9initAtPosEP7VecFx32ii(&buf, &pos, 1, 1);
    if (buf.waterKind != 0) {
        pos.y = buf.waterSurfaceY + 0xcd;
    }
    GroundInfo_Destruct(&buf);
}

void FishBobber::isCatchLanded()
{
    FishCatch_IsLandedForShadow(fish);
}

void FishBobber::endCatch()
{
    FishCatch_EndForShadow(fish);
    fish = 0;
}

void FishBobber::startCatchLift()
{
    FishCatch_StartLift((void *)ownerAid, 0);
    fish = 0;
}

void FishBobber::setTargetPos(VecFx32 *v)
{
    targetPos.x = v->x;
    targetPos.y = v->y;
    targetPos.z = v->z;
}

void FishBobber::setPos(VecFx32 *v)
{
    pos.x = v->x;
    pos.y = v->y;
    pos.z = v->z;
}

void FishBobber::setState(s32 state)
{
    VecFx32 v;
    Unk_0205f92c_Buf buf;
    s32 old;

    if (effect != -1) {
        Effect_End(effect);
        effect = -1;
    }
    if (ownerActor == 0) {
        curState = 0;
        return;
    }
    old = curState;
    curState = state;
    stateTimer = 0;
    _ZN10GroundInfo9initAtPosEP7VecFx32ii(&buf, &pos, 1, 1);
    switch (state) {
    case 1:
        if (fish != 0) {
            if (FishShadow_FleeFromPlayer(fish)) {
                fish = 0;
            }
        }
        break;
    case 7: {
        VecFx32 a, b;
        if (!ownerActor->getHeldItemPos((VecFx32 *)&targetPos)) {
            VecFx32 *pv = (VecFx32 *)&ownerActor->position;
            targetPos.x = pv->x;
            targetPos.y = pv->y;
            targetPos.z = pv->z;
        }
        a.x = targetPos.x;
        a.y = targetPos.y;
        a.z = targetPos.z;
        b.x = pos.x;
        b.y = pos.y;
        b.z = pos.z;
        Fishing_CalcArcSpeed(&a, &b, &gravity, &ySpeed, 1);
        if (buf.waterKind != 0) {
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = buf.waterSurfaceY;
            Effect_Create(0xd, &v, 0, 0);
        }
        break;
    }
    case 8: {
        VecFx32 c, d;
        if (!ownerActor->getHeldItemPos((VecFx32 *)&targetPos)) {
            VecFx32 *pv = (VecFx32 *)&ownerActor->position;
            targetPos.x = pv->x;
            targetPos.y = pv->y;
            targetPos.z = pv->z;
        }
        c.x = targetPos.x;
        c.y = targetPos.y;
        c.z = targetPos.z;
        d.x = pos.x;
        d.y = pos.y;
        d.z = pos.z;
        Fishing_CalcArcSpeed(&c, &d, &gravity, &ySpeed, 2);
        break;
    }
    case 5:
        if (buf.waterKind != 0) {
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = buf.waterSurfaceY;
            Effect_Create(0x10, &v, 0, 0);
        }
        break;
    case 4:
        if (old == 6) {
            if (buf.waterKind != 0) {
                v.x = pos.x;
                v.y = pos.y;
                v.z = pos.z;
                v.y = buf.waterSurfaceY;
                Effect_Create(0xf, &v, 0, 0);
            }
        }
        break;
    case 6:
        if (buf.waterKind != 0) {
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = buf.waterSurfaceY;
            effect = Effect_Create(0x11, &v, 0, 0);
        }
        break;
    case 0:
    case 2:
    case 3:
    default:
        break;
    }
    GroundInfo_Destruct(&buf);
}

void FishBobber::update()
{
    sFishBobberPool.pollTexUpload(slot);
    stateTimer++;
    justLanded = 0;
    if (curState >= 10) {
        setState(0);
    }
    (((FishBobberStates *)this)->*sFishBobberStateFns[curState])();
}

extern "C" void FishBobber_Draw(u8 *self, Mtx43 *m, s32 arg)
{
    if (*(s32 *)(self + 4) != 0) {
        u8 *e = (u8 *)sFishBobberPool.getModel(*self);
        Mtx43 mt = *m;
        VecFx32 v;
        if (*(s32 *)(self + 4) <= 1) {
            v.x = mt.m[9];
            v.y = mt.m[10];
            v.z = mt.m[11];
            WorldCurve_FromCurved(self + 8, &v);
        } else {
            v.x = *(s32 *)(self + 8);
            v.y = *(s32 *)(self + 12);
            v.z = *(s32 *)(self + 16);
            if (*(s32 *)(self + 4) == 6) {
                s32 r = (s32)((FishBobber *)self)->getFish();
                if (r != 0) {
                    VecFx32 t;
                    VecFx32 *pv = (VecFx32 *)(r + 0x120);
                    t.x = pv->x;
                    t.y = pv->y;
                    t.z = pv->z;
                    VEC_Subtract(&t, &v, &t);
                    Vec_ShiftRight(&t, 3);
                    t.y = 0;
                    VEC_Add(&v, &t, &v);
                }
            }
            WorldCurve_ToCurved(&v, &v);
            Mtx43 tmp;
            Mtx43_SetTranslate(&tmp, v.x, v.y, v.z);
            mt = tmp;
        }
        *(Mtx43 *)(e + 0x64) = mt;
        _ZN5Model10drawScaledEPi(e, arg);
    }
}

void FishBobberStates::updateIdle()
{
}

void FishBobberStates::updateHeld()
{
}

void FishBobberStates::updateCastFail()
{
    if (stateTimer < 0xf) {
        updateCastSwing();
    } else if (stateTimer >= 0x15) {
        setState(1);
    } else {
        s16 ang = (s16)(*(s16 *)((u8 *)ownerActor + 0x8e) - 0x1838);
        u32 idx = (u16)ang >> 4;
        idx = idx * 2;
        pos.x += func_01ffcb0c(data_02135f44[idx], 0x640);
        pos.z += func_01ffcb0c(data_02135f44[idx + 1], 0x640);
    }
}

void FishBobberStates::updateCast()
{
    GroundInfoBase o; // filled / cleaned by hand: GroundInfo's constructor and destructor are called explicitly
    VecFx32 v, a, b, c;
    if (stateTimer < 0xf) {
        updateCastSwing();
        if (stateTimer == 0xe) {
            a.x = targetPos.x;
            a.y = targetPos.y;
            a.z = targetPos.z;
            b.x = pos.x;
            b.y = pos.y;
            b.z = pos.z;
            Fishing_CalcArcSpeed(&a, &b, &gravity, &ySpeed, 0);
        }
    } else {
        c.x = targetPos.x;
        c.y = targetPos.y;
        c.z = targetPos.z;
        Fishing_StepArc(&c, gravity, &pos, &ySpeed, 0);
        _ZN10GroundInfo9initAtPosEP7VecFx32ii((Unk_0205f92c_Buf *)&o, &pos, 1, 1);
        if (o.waterKind != 0) {
            s32 y = o.waterSurfaceY;
            if (y >= pos.y) {
                setState(4);
                pos.y = o.waterSurfaceY - 0x333;
                v.x = pos.x;
                v.y = pos.y;
                v.z = pos.z;
                v.y = y;
                Effect_Create(0xc, &v, 0, 0);
                justLanded = 1;
                FieldFish_StartCastSplash();
            }
        }
        GroundInfo_Destruct((Unk_0205f92c_Buf *)&o);
    }
}

void FishBobberStates::updateFloat()
{
    u16 ang;
    VecFx32 base;
    GroundInfo o;
    VecFx32 v, w;
    VecFx32 *pb = (VecFx32 *)((u8 *)ownerActor + 0x5c);
    base.x = pb->x;
    base.y = pb->y;
    base.z = pb->z;
    _ZN10GroundInfo9initAtPosEP7VecFx32ii((Unk_0205f92c_Buf *)&o, &pos, 0, 1);
    ang = 0;
    if (o.waterKind != 0) {
                Vec_ShiftRightTo(&w, (VecFx32 *)&o.flowDir, 5);
        ang = Math_Atan2(w.x, w.z);
        VEC_Add(&pos, &w, &pos);
        s32 y = o.waterSurfaceY;
        s32 c = pos.y;
        if (c < y + 0x333) {
            s32 lim = y + 0x19a;
            if (c < lim) {
                pos.y = c + 0x66;
                if (pos.y >= lim) {
                    v.x = pos.x;
                    v.y = pos.y;
                    v.z = pos.z;
                    v.y = y;
                    Effect_Create(0xf, &v, 0, 0);
                }
            } else {
                pos.y = c + 0x66;
            }
        } else {
            pos.y = y + 0x30a;
        }
    }
    s32 dist = Vec_DistXZ(&base, &pos);
    if (dist >= 0x8000) {
        s32 dx = pos.x - base.x;
        s32 dz = pos.z - base.z;
        u32 idx = (u16)Math_Atan2(dx, dz) >> 4;
        idx = idx * 2;
        pos.x = base.x + func_01ffcb0c(0x7f33, data_02135f44[idx]);
        pos.z = base.z + func_01ffcb0c(0x7f33, data_02135f44[idx + 1]);
        if (o.waterKind != 0) {
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = o.waterSurfaceY;
            if (effect == -1) {
                effect = Effect_Create(0xe, &v, (u32)&ang, 0);
            } else {
                Effect_SetPosition(effect, &v, &ang, 0);
            }
        }
    } else {
        if (effect != -1) {
            if (dist < 0x7e66) {
                Effect_End(effect);
                effect = -1;
            } else if (o.waterKind != 0) {
                    v.x = pos.x;
                v.y = pos.y;
                v.z = pos.z;
                v.y = o.waterSurfaceY;
                Effect_SetPosition(effect, &v, &ang, 0);
            }
        }
    }
}

void FishBobberStates::updateBite()
{
    GroundInfo o;
        _ZN10GroundInfo9initAtPosEP7VecFx32ii((Unk_0205f92c_Buf *)&o, &pos, 1, 1);
    if (o.waterKind != 0) {
        s32 lim = o.waterSurfaceY - 0x333;
        if (pos.y > lim) {
            pos.y -= 0x19a;
        } else {
            pos.y = lim;
        }
    }
}

void FishBobberStates::updateHooked()
{
    if (fish == 0) {
        if (_ZN11CommManager7isMyAidEj((void *)gCommManager, ownerAid)) {
            setState(4);
            return;
        }
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP7VecFx32ii((Unk_0205f92c_Buf *)&o, &pos, 1, 1);
        if (o.waterKind != 0) {
            VecFx32 v;
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = o.waterSurfaceY;
            if (effect == -1) {
                effect = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(effect, &v, 0, 0);
            }
        }
    } else {
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP7VecFx32ii((Unk_0205f92c_Buf *)&o, &pos, 1, 1);
        if (o.waterKind != 0) {
            s32 lim = o.waterSurfaceY + 0x4cd;
            if (pos.y < lim) {
                pos.y += 0x19a;
            } else {
                pos.y = lim;
            }
            VecFx32 v;
            v.x = pos.x;
            v.y = pos.y;
            v.z = pos.z;
            v.y = o.waterSurfaceY;
            if (effect == -1) {
                effect = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(effect, &v, 0, 0);
            }
        }
    }
}

void FishBobberStates::updateReelIn()
{
    VecFx32 v;
    v.x = targetPos.x;
    v.y = targetPos.y;
    v.z = targetPos.z;
    if (Fishing_StepArc(&v, gravity, &pos, &ySpeed, 1)) {
        setState(1);
    }
}

void FishBobberStates::updateEscape()
{
    VecFx32 v;
    v.x = targetPos.x;
    v.y = targetPos.y;
    v.z = targetPos.z;
    if (Fishing_StepArc(&v, gravity, &pos, &ySpeed, 1)) {
        setState(1);
    }
}

void FishBobberStates::updateAct09()
{
    pos.y += 0x1000;
    if (pos.y >= 0x28000) {
        setState(0);
    }
}

void FishBobberStates::updateCastSwing()
{
    s32 d = _s32_div_f(stateTimer * stateTimer * 0x4800, 0xe1);
    s16 ang = (s16)(*(s16 *)((u8 *)ownerActor + 0x8e) - d);
    u32 idx = (u16)ang >> 4;
    idx = idx * 2;
    pos.x -= func_01ffcb0c(data_02135f44[idx], 0x2ee);
    pos.z -= func_01ffcb0c(data_02135f44[idx + 1], 0x2ee);
}

extern "C" void Fishing_CalcArcSpeed(VecFx32 *a, VecFx32 *b, s32 *c, s32 *d, u8 mode)
{
    s32 t;
    switch (mode) {
    case 0:
        *c = 0xa3;
        break;
    case 1:
    case 3:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = _s32_div_f(t + 0x4000, 100);
        break;
    case 2:
        t = b->y - a->y;
        if (t < 0) t = -t;
        *c = _s32_div_f(t + 0x8000, 100);
        break;
    }
    *d = *c * 10;
}


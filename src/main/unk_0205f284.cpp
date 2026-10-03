
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0205f7f4_Mtx {
    s32 v[12];
};

struct Unk_0205f8d4_Vec {
    s32 x, y, z;
};

// Actor (see Character): virtual at 0x5c fills a position, position at +0x5c.
class Character : public GameProc {
public:
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c(Unk_0205f8d4_Vec *out);
    u8 pad_50[0xc];
    Unk_0205f8d4_Vec position;
};

// Local scratch object filled by _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii and cleaned by GroundInfo_Destruct.
struct Unk_0205f92c_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
};

class FishBobber;
class FishBobberPool;

typedef void (FishBobber::*Unk_0205f8d4_Fn)();

class TexVramSlot {
public:
    TexVramSlot();
    virtual ~TexVramSlot();
    void clear(void);
    void alloc(void *a, void *b, void *c);
    void relocateTexture(void *p);
    u8 pad_04[0x10];
};

class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();
    BOOL release(void);
    void setFromFile(void *a);
    u8 pad_04[0x98];
};

class TexVramTask {
public:
    TexVramTask();
    virtual BOOL vfunc_00();
    void cancel(void);
    void clear(void);
    BOOL requestTexResource(u32 *a, u8 b);
    u8 pad_04[9];
    u8 unk_0d;
    u8 pad_0e[0x0e];
};

struct CommManager {
    u8 pad_00[0x6c];
    u8 unk_6c;
};
class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    GroundInfo() {}
    GroundInfo *_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f8d4_Vec *v, s32 a, s32 b);
    ~GroundInfo();
};

class Unk_0205f6b4_Obj {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0205f6b4_Obj() {}
    Unk_0205f6b4_Obj *_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f8d4_Vec *v, s32 a, s32 b);
};
extern "C" {
extern u32 gFishBobberHeap;
extern CommManager *gCommManager;
extern u8 gSaveSongSet[];
extern u8 gSaveHouse[];

s32 Effect_End(s32 h);
s32 Effect_Create(u32 id, void *a, u32 b, u32 c);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(Unk_0205f92c_Buf *p, Unk_0205f8d4_Vec *v, s32 a, s32 b);
void GroundInfo_Destruct(Unk_0205f92c_Buf *p);
BOOL FishShadow_FleeFromPlayer(void *p);
void FishCatch_StartLift(void *p, s32 a);
void FishCatch_EndForShadow(void *p);
void FishCatch_IsLandedForShadow(void *p);
BOOL FishShadow_CheckReelResult(void *p);
BOOL FishShadow_TryHook(void *p);
void *NNS_G3dGetTex(void *p);
void File_LoadToBuffer(char *name, void *p, u32 size);
s32 func_020639e8(char *buf, char *fmt, ...);
s32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(s32 a);
u32 Scene_GetMaxCharacters(s32 a);
u32 NpcSpawn_GetSpNpcSlotCount();
void func_020e885c();
void func_020e877c();
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
s32 func_020e7870(s32 *dst, s32 src, s32 step, s32 target, s32 lim);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 Effect_SetPosition(s32 h, Unk_0205f8d4_Vec *v, void *a, s32 b);
void func_020e9790(Unk_0205f8d4_Vec *out, Unk_0205f8d4_Vec *in, s32 n);
void VEC_Add(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, Unk_0205f8d4_Vec *out);
void VEC_Subtract(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, Unk_0205f8d4_Vec *out);
s32 func_020e9650(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b);
void func_020e9768(Unk_0205f8d4_Vec *v, s32 n);
void func_020e8388(Unk_0205f7f4_Mtx *m, s32 x, s32 y, s32 z);
void FieldFish_StartCastSplash();
void WorldCurve_FromCurved(void *p, Unk_0205f8d4_Vec *v);
void WorldCurve_ToCurved(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b);
void _ZN5Model10drawScaledEPi(void *e, s32 a);
BOOL Fishing_StepArc(Unk_0205f8d4_Vec *a, s32 k, Unk_0205f8d4_Vec *b, s32 *c, u8 flag);
void Fishing_CalcArcSpeed(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, s32 *c, s32 *d, u8 mode);
}

class FishBobber {
public:
    void update();
    void setState(s32 state);
    void setPos(Unk_0205f8d4_Vec *v);
    void setTargetPos(Unk_0205f8d4_Vec *v);
    void startCatchLift();
    void endCatch();
    void isCatchLanded();
    void nudge();
    BOOL checkReelResult();
    BOOL tryHook();
    BOOL isInWater();
    void *getFish();
    void setFish(void *p);
    void setOwnerAid(s32 v);
    u8 getSlot();
    void detach();
    void attach(u32 id, Character *actor, u32 n);
    void destruct();
    void construct();

    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    Unk_0205f8d4_Vec unk_08;
    s32 unk_14;
    s32 unk_18;
    Unk_0205f8d4_Vec unk_1c;
    Character *unk_28;
    void *unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 unk_38;
    u8 pad_39[3];
    s32 unk_3c;
};

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

    void *unk_00[9];
    TexVramSlot unk_24[9];
    TexVramTask unk_d8[9];
    CachedModel unk_1d4[9];
    FishBobber *unk_750[9];
};

class FishBobberStates : public FishBobber {
public:
    void updateCastSwing();
    void updateAct09();
    void updateEscape();
    void updateReelIn();
    void updateHooked();
    void updateBite();
    void updateFloat();
    void updateCast();
    void updateCastFail();
    void updateHeld();
    void updateIdle();
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
        func_020e877c();
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
    func_020639e8(sFishBobberPathBuf, "/PItm/Uki0/%d.nsbmd", n);
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
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
}

FishBobberPool::~FishBobberPool()
{
}

void FishBobberPool::allocBuffers()
{
    u32 a = gCommManager->unk_6c;
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
        unk_24[i].alloc((void *)x, (void *)y, (void *)FishBobber_GetPlttVramSize());
    }
    for (i = 4; i < m + 4; i++) {
        u32 x = FishBobber_GetTexVramSize();
        u32 y = FishBobber_GetTex4x4VramSize();
        unk_24[i].alloc((void *)x, (void *)y, (void *)FishBobber_GetPlttVramSize());
    }
    u32 heap = gFishBobberHeap;
    for (i = 0; i < n; i++) {
        unk_00[i] = Heap_AllocAligned(heap, FishBobber_GetModelSize(), 4);
    }
    u32 j = 4;
    a = 4;
    for (; j < m + 4; j++) {
        unk_00[j] = Heap_AllocAligned(heap, FishBobber_GetModelSize(), a);
    }
}

void FishBobberPool::freeBuffers()
{
    s32 i;
    for (i = 0; i < 9; i++) {
        unk_24[i].clear();
    }
    for (i = 0; i < 9; i++) {
        unk_00[i] = 0;
        unk_750[i] = 0;
    }
    if (gFishBobberHeap != 0) {
        func_020e885c();
    }
}

void *FishBobberPool::getModelBuffer(s32 idx)
{
    return unk_00[idx];
}

TexVramSlot *FishBobberPool::getTexSlot(s32 idx)
{
    return &unk_24[idx];
}

TexVramTask *FishBobberPool::getTexTask(s32 idx)
{
    return &unk_d8[idx];
}

CachedModel *FishBobberPool::getModel(s32 idx)
{
    return &unk_1d4[idx];
}

void FishBobber::construct()
{
    unk_00 = 9;
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_3c = -1;
}

void FishBobber::destruct()
{
}

void FishBobber::attach(u32 id, Character *actor, u32 n)
{
    unk_00 = id;
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
        unk_28 = actor;
    }
    unk_04 = 0;
}

void FishBobber::detach()
{
    sFishBobberPool.getModel(getSlot())->release();
    sFishBobberPool.cancelTexUpload(getSlot());
    sFishBobberPool.setBobber(getSlot(), 0);
    unk_00 = 9;
}

void FishBobberPool::cancelTexUpload(s32 idx)
{
    if (Unk_0205fbfc_Is1(unk_d8[idx].unk_0d)) {
        unk_d8[idx].cancel();
    } else {
        unk_d8[idx].clear();
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
    u8 t = p->unk_0d;
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
    unk_750[idx] = p;
}

FishBobber *FishBobberPool::getFloatingBobber(s32 idx)
{
    if (idx >= 4) {
        return 0;
    }
    FishBobber *p = unk_750[idx];
    if (p != 0 && p->unk_04 == 4) {
        return p;
    }
    return 0;
}

u8 FishBobber::getSlot()
{
    return unk_00;
}

void FishBobber::setOwnerAid(s32 v)
{
    unk_3c = v;
}

void FishBobber::setFish(void *p)
{
    unk_2c = p;
}

void *FishBobber::getFish()
{
    return unk_2c;
}

BOOL FishBobber::isInWater()
{
    if ((u32)(unk_04 - 4) <= 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL FishBobber::tryHook()
{
    if (unk_2c == 0) {
        setState(7);
        return FALSE;
    }
    return FishShadow_TryHook(unk_2c);
}

BOOL FishBobber::checkReelResult()
{
    if (unk_2c == 0) {
        return TRUE;
    }
    return FishShadow_CheckReelResult(unk_2c);
}

void FishBobber::nudge()
{
    Unk_0205f92c_Buf buf;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf, &unk_08, 1, 1);
    if (buf.unk_30 != 0) {
        unk_08.y = buf.unk_3c + 0xcd;
    }
    GroundInfo_Destruct(&buf);
}

void FishBobber::isCatchLanded()
{
    FishCatch_IsLandedForShadow(unk_2c);
}

void FishBobber::endCatch()
{
    FishCatch_EndForShadow(unk_2c);
    unk_2c = 0;
}

void FishBobber::startCatchLift()
{
    FishCatch_StartLift((void *)unk_3c, 0);
    unk_2c = 0;
}

void FishBobber::setTargetPos(Unk_0205f8d4_Vec *v)
{
    unk_1c.x = v->x;
    unk_1c.y = v->y;
    unk_1c.z = v->z;
}

void FishBobber::setPos(Unk_0205f8d4_Vec *v)
{
    unk_08.x = v->x;
    unk_08.y = v->y;
    unk_08.z = v->z;
}

void FishBobber::setState(s32 state)
{
    Unk_0205f8d4_Vec v;
    Unk_0205f92c_Buf buf;
    s32 old;

    if (unk_34 != -1) {
        Effect_End(unk_34);
        unk_34 = -1;
    }
    if (unk_28 == 0) {
        unk_04 = 0;
        return;
    }
    old = unk_04;
    unk_04 = state;
    unk_30 = 0;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(&buf, &unk_08, 1, 1);
    switch (state) {
    case 1:
        if (unk_2c != 0) {
            if (FishShadow_FleeFromPlayer(unk_2c)) {
                unk_2c = 0;
            }
        }
        break;
    case 7: {
        Unk_0205f8d4_Vec a, b;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->position;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        a.x = unk_1c.x;
        a.y = unk_1c.y;
        a.z = unk_1c.z;
        b.x = unk_08.x;
        b.y = unk_08.y;
        b.z = unk_08.z;
        Fishing_CalcArcSpeed(&a, &b, &unk_14, &unk_18, 1);
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            Effect_Create(0xd, &v, 0, 0);
        }
        break;
    }
    case 8: {
        Unk_0205f8d4_Vec c, d;
        if (!unk_28->vfunc_5c(&unk_1c)) {
            Unk_0205f8d4_Vec *pv = &unk_28->position;
            unk_1c.x = pv->x;
            unk_1c.y = pv->y;
            unk_1c.z = pv->z;
        }
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        d.x = unk_08.x;
        d.y = unk_08.y;
        d.z = unk_08.z;
        Fishing_CalcArcSpeed(&c, &d, &unk_14, &unk_18, 2);
        break;
    }
    case 5:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            Effect_Create(0x10, &v, 0, 0);
        }
        break;
    case 4:
        if (old == 6) {
            if (buf.unk_30 != 0) {
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = buf.unk_3c;
                Effect_Create(0xf, &v, 0, 0);
            }
        }
        break;
    case 6:
        if (buf.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = buf.unk_3c;
            unk_34 = Effect_Create(0x11, &v, 0, 0);
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
    sFishBobberPool.pollTexUpload(unk_00);
    unk_30++;
    unk_38 = 0;
    if (unk_04 >= 10) {
        setState(0);
    }
    (((FishBobberStates *)this)->*sFishBobberStateFns[unk_04])();
}

extern "C" void FishBobber_Draw(u8 *self, Unk_0205f7f4_Mtx *m, s32 arg)
{
    if (*(s32 *)(self + 4) != 0) {
        u8 *e = (u8 *)sFishBobberPool.getModel(*self);
        Unk_0205f7f4_Mtx mt = *m;
        Unk_0205f8d4_Vec v;
        if (*(s32 *)(self + 4) <= 1) {
            v.x = mt.v[9];
            v.y = mt.v[10];
            v.z = mt.v[11];
            WorldCurve_FromCurved(self + 8, &v);
        } else {
            v.x = *(s32 *)(self + 8);
            v.y = *(s32 *)(self + 12);
            v.z = *(s32 *)(self + 16);
            if (*(s32 *)(self + 4) == 6) {
                s32 r = (s32)((FishBobber *)self)->getFish();
                if (r != 0) {
                    Unk_0205f8d4_Vec t;
                    Unk_0205f8d4_Vec *pv = (Unk_0205f8d4_Vec *)(r + 0x120);
                    t.x = pv->x;
                    t.y = pv->y;
                    t.z = pv->z;
                    VEC_Subtract(&t, &v, &t);
                    func_020e9768(&t, 3);
                    t.y = 0;
                    VEC_Add(&v, &t, &v);
                }
            }
            WorldCurve_ToCurved(&v, &v);
            Unk_0205f7f4_Mtx tmp;
            func_020e8388(&tmp, v.x, v.y, v.z);
            mt = tmp;
        }
        *(Unk_0205f7f4_Mtx *)(e + 0x64) = mt;
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
    if (unk_30 < 0xf) {
        updateCastSwing();
    } else if (unk_30 >= 0x15) {
        setState(1);
    } else {
        s16 ang = (s16)(*(s16 *)((u8 *)unk_28 + 0x8e) - 0x1838);
        u32 idx = (u16)ang >> 4;
        idx = idx * 2;
        unk_08.x += func_01ffcb0c(data_02135f44[idx], 0x640);
        unk_08.z += func_01ffcb0c(data_02135f44[idx + 1], 0x640);
    }
}

void FishBobberStates::updateCast()
{
    Unk_0205f6b4_Obj o;
    Unk_0205f8d4_Vec v, a, b, c;
    if (unk_30 < 0xf) {
        updateCastSwing();
        if (unk_30 == 0xe) {
            a.x = unk_1c.x;
            a.y = unk_1c.y;
            a.z = unk_1c.z;
            b.x = unk_08.x;
            b.y = unk_08.y;
            b.z = unk_08.z;
            Fishing_CalcArcSpeed(&a, &b, &unk_14, &unk_18, 0);
        }
    } else {
        c.x = unk_1c.x;
        c.y = unk_1c.y;
        c.z = unk_1c.z;
        Fishing_StepArc(&c, unk_14, &unk_08, &unk_18, 0);
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 y = o.unk_3c;
            if (y >= unk_08.y) {
                setState(4);
                unk_08.y = o.unk_3c - 0x333;
                v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = y;
                Effect_Create(0xc, &v, 0, 0);
                unk_38 = 1;
                FieldFish_StartCastSplash();
            }
        }
        GroundInfo_Destruct((Unk_0205f92c_Buf *)&o);
    }
}

void FishBobberStates::updateFloat()
{
    u16 ang;
    Unk_0205f8d4_Vec base;
    GroundInfo o;
    Unk_0205f8d4_Vec v, w;
    Unk_0205f8d4_Vec *pb = (Unk_0205f8d4_Vec *)((u8 *)unk_28 + 0x5c);
    base.x = pb->x;
    base.y = pb->y;
    base.z = pb->z;
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 0, 1);
    ang = 0;
    if (o.unk_30 != 0) {
                func_020e9790(&w, (Unk_0205f8d4_Vec *)&o.unk_24, 5);
        ang = func_020e7b98(w.x, w.z);
        VEC_Add(&unk_08, &w, &unk_08);
        s32 y = o.unk_3c;
        s32 c = unk_08.y;
        if (c < y + 0x333) {
            s32 lim = y + 0x19a;
            if (c < lim) {
                unk_08.y = c + 0x66;
                if (unk_08.y >= lim) {
                    v.x = unk_08.x;
                    v.y = unk_08.y;
                    v.z = unk_08.z;
                    v.y = y;
                    Effect_Create(0xf, &v, 0, 0);
                }
            } else {
                unk_08.y = c + 0x66;
            }
        } else {
            unk_08.y = y + 0x30a;
        }
    }
    s32 dist = func_020e9650(&base, &unk_08);
    if (dist >= 0x8000) {
        s32 dx = unk_08.x - base.x;
        s32 dz = unk_08.z - base.z;
        u32 idx = (u16)func_020e7b98(dx, dz) >> 4;
        idx = idx * 2;
        unk_08.x = base.x + func_01ffcb0c(0x7f33, data_02135f44[idx]);
        unk_08.z = base.z + func_01ffcb0c(0x7f33, data_02135f44[idx + 1]);
        if (o.unk_30 != 0) {
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0xe, &v, (u32)&ang, 0);
            } else {
                Effect_SetPosition(unk_34, &v, &ang, 0);
            }
        }
    } else {
        if (unk_34 != -1) {
            if (dist < 0x7e66) {
                Effect_End(unk_34);
                unk_34 = -1;
            } else if (o.unk_30 != 0) {
                    v.x = unk_08.x;
                v.y = unk_08.y;
                v.z = unk_08.z;
                v.y = o.unk_3c;
                Effect_SetPosition(unk_34, &v, &ang, 0);
            }
        }
    }
}

void FishBobberStates::updateBite()
{
    GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
    if (o.unk_30 != 0) {
        s32 lim = o.unk_3c - 0x333;
        if (unk_08.y > lim) {
            unk_08.y -= 0x19a;
        } else {
            unk_08.y = lim;
        }
    }
}

void FishBobberStates::updateHooked()
{
    if (unk_2c == 0) {
        if (_ZN11CommManager7isMyAidEj((void *)gCommManager, unk_3c)) {
            setState(4);
            return;
        }
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            Unk_0205f8d4_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(unk_34, &v, 0, 0);
            }
        }
    } else {
        GroundInfo o;
        _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii((Unk_0205f92c_Buf *)&o, &unk_08, 1, 1);
        if (o.unk_30 != 0) {
            s32 lim = o.unk_3c + 0x4cd;
            if (unk_08.y < lim) {
                unk_08.y += 0x19a;
            } else {
                unk_08.y = lim;
            }
            Unk_0205f8d4_Vec v;
            v.x = unk_08.x;
            v.y = unk_08.y;
            v.z = unk_08.z;
            v.y = o.unk_3c;
            if (unk_34 == -1) {
                unk_34 = Effect_Create(0x11, &v, 0, 0);
            } else {
                Effect_SetPosition(unk_34, &v, 0, 0);
            }
        }
    }
}

void FishBobberStates::updateReelIn()
{
    Unk_0205f8d4_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (Fishing_StepArc(&v, unk_14, &unk_08, &unk_18, 1)) {
        setState(1);
    }
}

void FishBobberStates::updateEscape()
{
    Unk_0205f8d4_Vec v;
    v.x = unk_1c.x;
    v.y = unk_1c.y;
    v.z = unk_1c.z;
    if (Fishing_StepArc(&v, unk_14, &unk_08, &unk_18, 1)) {
        setState(1);
    }
}

void FishBobberStates::updateAct09()
{
    unk_08.y += 0x1000;
    if (unk_08.y >= 0x28000) {
        setState(0);
    }
}

void FishBobberStates::updateCastSwing()
{
    s32 d = _s32_div_f(unk_30 * unk_30 * 0x4800, 0xe1);
    s16 ang = (s16)(*(s16 *)((u8 *)unk_28 + 0x8e) - d);
    u32 idx = (u16)ang >> 4;
    idx = idx * 2;
    unk_08.x -= func_01ffcb0c(data_02135f44[idx], 0x2ee);
    unk_08.z -= func_01ffcb0c(data_02135f44[idx + 1], 0x2ee);
}

extern "C" void Fishing_CalcArcSpeed(Unk_0205f8d4_Vec *a, Unk_0205f8d4_Vec *b, s32 *c, s32 *d, u8 mode)
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


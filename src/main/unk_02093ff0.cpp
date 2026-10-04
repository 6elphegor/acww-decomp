#include "types.h"
#include "gfx/Unk_02093aa8_Vec.h"
#include "gfx/Unk_02093dc8_Obj.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "save/TownId.h"
#include "talk/EncodedStringBase.h"
#include "player/PlayerId.h"







// Particle object
struct Unk_02093c28_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_02093c28_Handle tag;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ struct Unk_02093dc8_Obj *emitter;
};




class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 flowDir, flowDirY, flowDirZ;
    s32 waterKind;
    u8 pad_34[8];
    s32 waterSurfaceY;
    GroundInfo() {}
    GroundInfo *initAtPos(Unk_02093aa8_Vec *v, s32 a, s32 b);
    ~GroundInfo();
};

extern "C" {
extern Unk_02093c28_Entry gEffectManager[];
}

extern "C" {
extern Unk_02093bb4_Scratch data_021d0830;
}

extern "C" {
extern Unk_02093aa8_Vec gVec3Zero;
}

extern "C" {
extern u32 sEffectDefaultTrackedCbs[];
}

extern "C" {
extern u32 sEffectDefaultOneShotCbs[];
}

extern "C" {
extern s16 data_02135f44[];
}

extern "C" {
s32 EffectSpl_CreateTracked(void *, s32, s32, void *);
}

extern "C" {
s32 EffectSpl_CreateOneShot(void *, s32, s32, void *);
}

extern "C" {
s32 EffectSpl_ApplySceneTint(void *);
}

extern "C" {
s32 func_02090424(void *, s32, s32);
}

extern "C" {
s32 func_020904f0(void *, s32, s32, s32, s32, s32, s32);
}

extern "C" {
s32 func_02090538(void *);
}

extern "C" {
void func_020e93a0(void *, s32);
}

extern "C" {
s32 func_020e94f8(void *);
}

extern "C" {
void VEC_Add(void *, void *, void *);
}

extern "C" {
s32 MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
s32 MI_CpuFill8(void *dst, u32 v, u32 n);
}

extern "C" {
s32 memcmp(const void *, const void *, u32);
}

extern "C" {
s32 EffectCb_FollowTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 EffectCb_InitTrackedOffset(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 Effect_StartOneShot(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
}

extern "C" {
void EffectCb_PlaceEmitter(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 EffectCb_PlaceFacingBack(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 EffectCb_PlaceFacing(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 EffectCb_InitOneShot(Unk_02093dc8_Obj *o);
}

 // extern "C"

// ---------------------------------------------------------------------------------------------------------------------
// Message buffers (see unk_0206c714.cpp for the bases)




class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr attr;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 length;
    /* 0x08 */ MsgStringAttr attr;
};

extern "C" BOOL EncodedString_SetRaw(void *, const void *, s32);

// 8-byte destination buffer at +0xe
class EncodedString8 : public EncodedString {
public:
    EncodedString8();
    virtual ~EncodedString8();
    virtual u32 capacity();
    virtual u8 *data();

    void copyTo(void *dst, u32 n);

    /* 0x0e */ u8 text[8];
};

// 9-byte source buffer at +0x12
class MsgString9B : public MsgString {
public:
    MsgString9B();
    virtual ~MsgString9B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 text[9];
};

// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14



extern "C" {
extern TownId gSaveTownId;
s32 TownId_IsValid(TownId *self);
void TownId_CopyTo(TownId *self, TownId *o);
void TownId_CopyFrom(TownId *self, TownId *o);
void TownId_Assign(TownId *self, TownId *o);
void TownId_Clear(TownId *self);
void TownId_Destruct(TownId *self);
void TownId_Construct(TownId *self, void *o);
}

extern "C" {
extern u8 gSavePlayers[];
}

extern "C" {
s32 PlayerDataArray_FindById(void *, void *);
}

extern "C" {
s32 PlayerActor_Get(s32);
}

extern "C" {
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32, u32, u32, u32, u32);
}

extern "C" {
u32 Random_GlobalBelow(u32);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 PlayerActor_GetActor(s32);
}

extern "C" {
BOOL PlayerId_ListContainsId(u16 v, u16 *arr, s32 n);
}

extern "C" {
s32 PlayerActor_IsInAction(s32, s32);
}

extern "C" {
s32 FieldPos_ToUnit(s32 *, s32 *, void *);
}

extern "C" {
s32 Area_PlaceItem(s32, s32, s32, s32, s32);
}
extern "C" void PlayerSession_RemovePitfallOnClimbOut(s32 *a, u8 *b, s32 *c, s32 *d, s32 *e, s32 *f);
extern "C" s32 PlayerActor_GetLocalSessionSlot();
extern "C" s32 PlayerActor_GetObjectSize();
extern "C" s32 PlayerActor_GetObjectAlign();
extern "C" s32 PlayerActor_Spawn(u32 a, u32 b, u32 c, u32 d);
extern "C" BOOL PlayerId_ListContainsId(u16 v, u16 *arr, s32 n);
extern "C" u16 PlayerId_GenerateUniqueId(u16 *arr, s32 n);
extern "C" u16 PlayerId_GenerateRandomId();
extern "C" void PlayerId_GetTownId();
extern "C" s32 PlayerId_FindResidentIndex(void *x);

extern "C" void PlayerSession_RemovePitfallOnClimbOut(s32 *a, u8 *b, s32 *c, s32 *d, s32 *e, s32 *f)
{
    if (*b == Scene_GetCurrent()) {
        if (*c != 0x75 || *d == 0x75) return;
        if (PlayerActor_GetActor(*a) != 0 && PlayerActor_IsInAction(0x75, *a) != 0) return;
    } else {
        if (*d != 0x75 || *c == 0x75) return;
    }
    {
        s32 o1, o2;
        s32 s[3];
        s32 fv = *f;
        s[0] = *e;
        s[1] = 0;
        s[2] = fv;
        FieldPos_ToUnit(&o1, &o2, s);
        Area_PlaceItem(0, o1, o2, 0xfff1, 0);
    }
}

extern "C" s32 PlayerActor_GetLocalSessionSlot()
{
    return *(s32 *)((u8 *)PlayerActor_Get(4) + 0x7fc);
}

extern "C" s32 PlayerActor_GetObjectSize() { return 0xc9c; }

extern "C" s32 PlayerActor_GetObjectAlign() { return 4; }

extern "C" s32 PlayerActor_Spawn(u32 a, u32 b, u32 c, u32 d)
{
    return _ZN5Actor5spawnEPvS0_S0_S0_S0_(9, ((a << 30) & 0xc0000000) | (d & 0x3fffffff), b, c, 0);
}

PlayerId::PlayerId(void *o) { TownId_Construct(this, o); }

PlayerId::PlayerId(const PlayerId &o) { TownId_Construct(this, (void *)&o); copyFrom((PlayerId *)&o); }

PlayerId::PlayerId() { TownId_Destruct(this); }

void PlayerId::setRaw(void *src) { MI_CpuCopy8(src, this, 0x16); }

void PlayerId::clear()
{
    MI_CpuFill8(playerName, 0, 8);
    playerId = 0;
    gender = 2;
    TownId_Clear(this);
}

void PlayerId::copyFrom(PlayerId *o)
{
    MI_CpuCopy8(o->playerName, playerName, 8);
    playerId = o->playerId;
    gender = o->gender;
    TownId_CopyFrom(this, o);
}

void PlayerId::copyTo(PlayerId *o)
{
    MI_CpuCopy8(playerName, o->playerName, 8);
    o->playerId = playerId;
    o->gender = gender;
    TownId_CopyTo(this, o);
}

BOOL PlayerId::isValid()
{
    if (TownId_IsValid(this) == 1 && playerId != 0) return TRUE;
    return FALSE;
}

BOOL PlayerId::equals(PlayerId *o)
{
    if (playerId == o->playerId && gender == o->gender && memcmp(playerName, o->playerName, 8) == 0) return TRUE;
    return FALSE;
}

void PlayerId::set(void *src, u16 a, s8 b, TownId *p)
{
    MI_CpuCopy8(src, playerName, 8);
    playerId = a;
    gender = b;
    if (p == NULL) p = &gSaveTownId;
    TownId_Assign(this, p);
}

extern "C" BOOL PlayerId_ListContainsId(u16 v, u16 *arr, s32 n)
{
    BOOL r = FALSE;
    if (n != 0 && arr != NULL) {
        s32 i = 0;
        for (; i < n; arr++, i++) {
            if (v == *arr) {
                r = TRUE;
                break;
            }
        }
    }
    return r;
}

extern "C" u16 PlayerId_GenerateUniqueId(u16 *arr, s32 n)
{
    u16 t;
    t = PlayerId_GenerateRandomId();
    while (t == 0 || PlayerId_ListContainsId(t, arr, n) == 1) {
        t = PlayerId_GenerateRandomId();
    }
    return t;
}

extern "C" u16 PlayerId_GenerateRandomId()
{
    return (u16)((u16)Random_GlobalBelow(0x7ffc) | 0x8000);
}

u16 PlayerId::getId() { return playerId; }

void PlayerId::setId(u16 v) { playerId = v; }

void PlayerId::setGender(u8 v) { gender = v; }

s8 PlayerId::getGender() { return gender; }

void PlayerId::setName(void *src) { MI_CpuCopy8(src, playerName, 8); }

u8 *PlayerId::getName() { return playerName; }

void PlayerId::getNameString(MsgString *x)
{
    EncodedString8 buf;
    EncodedString_SetRaw(&buf, playerName, 8);
    x->fromEncoded(&buf, 0, 0);
}

void PlayerId::setNameString(MsgString *x)
{
    EncodedString8 buf;
    buf.fromMsgString(x);
    buf.copyTo(playerName, 8);
}

extern "C" void PlayerId_GetTownId() {}

void TownId::setTown(TownId *o) { TownId_Assign(this, o); }

s32 TownId::getTownRelation()
{
    s32 r = 2;
    if (TownId_IsValid(this) != 0) {
        TownId *p = &gSaveTownId;
        if (townId == p->townId && memcmp(townName, p->townName, 8) == 0) {
            r = 0;
        } else {
            r = 1;
        }
    }
    return r;
}

extern "C" s32 PlayerId_FindResidentIndex(void *x)
{
    return PlayerDataArray_FindById(gSavePlayers, x);
}

MsgString9B::MsgString9B() {}

MsgString9B::~MsgString9B() {}

u32 MsgString9B::capacity() { return 9; }

u8 *MsgString9B::data() { return text; }


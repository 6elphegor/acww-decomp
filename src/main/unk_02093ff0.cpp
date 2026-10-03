#include "types.h"

struct Unk_02093aa8_Vec {
    s32 x, y, z;
};

// Effect entry (0x1c bytes), array gEffectManager[32], scratch entry at data_021d0830
struct Unk_02093c28_Entry {
    /* 0x00 */ s32 x, y, z;
    /* 0x0c */ s16 unk_0c;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct Unk_02093bb4_Scratch {
    Unk_02093c28_Entry e;
    /* 0x1c */ u16 unk_1c;
};

struct Unk_02093c28_Handle {
    u8 b[4];
};

struct Unk_02093dc8_Root {
    s32 unk_00;
    s32 unk_04, unk_08, unk_0c;
};

struct Unk_02093dc8_Ptr {
    Unk_02093dc8_Root *unk_00;
};

// Particle object
struct Unk_02093c28_Obj {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_02093c28_Handle unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ struct Unk_02093dc8_Obj *unk_0c;
};

struct Unk_02093dc8_Obj {
    /* 0x00 */ u8 pad_00[0x18];
    /* 0x18 */ Unk_02093dc8_Ptr *unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ s32 unk_20, unk_24, unk_28;
    /* 0x2c */ u8 pad_2c[0x10];
    /* 0x3c */ s16 unk_3c;
    /* 0x3e */ s16 unk_3e;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ u8 pad_42[0x12];
    /* 0x54 */ s32 unk_54;
};

struct Unk_02093aa8_Node {
    /* 0x00 */ Unk_02093aa8_Node *next;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 x, y, z;
    /* 0x14 */ u8 pad_14[0x10];
    /* 0x24 */ u16 unk_24;
    /* 0x26 */ u16 unk_26;
    /* 0x28 */ u8 pad_28[0x10];
    /* 0x38 */ s32 ox, oy, oz;
};

struct Unk_02093aa8_Owner {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_02093aa8_Node *unk_08;
};

class GroundInfo {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
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
s32 func_0208fb20(void *, s32, s32, void *);
}

extern "C" {
s32 func_0208fc88(void *, s32, s32, void *);
}

extern "C" {
s32 func_0208fe0c(void *);
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

class EncodedStringBase {
public:
    virtual ~EncodedStringBase() {}
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
};

class MsgStringAttr {
public:
    MsgStringAttr();
    virtual ~MsgStringAttr();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class MsgString;

class EncodedString : public EncodedStringBase {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ MsgStringAttr unk_04;
};

class MsgString : public MsgStringBase {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
};

extern "C" BOOL func_020a78a4(void *, const void *, s32);

// 8-byte destination buffer at +0xe
class Unk_020e1c4c : public EncodedString {
public:
    Unk_020e1c4c();
    virtual ~Unk_020e1c4c();
    virtual u32 capacity();
    virtual u8 *data();

    void func_02093f90(void *dst, u32 n);

    /* 0x0e */ u8 unk_0e[8];
};

// 9-byte source buffer at +0x12
class Unk_020e1c64 : public MsgString {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[9];
};

// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14

class TownId {
public:
    // constructors and methods at 0x020639b8.. are plain functions in symbols.txt (declared below, `this` first)
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];

    s32 func_02094058();
    void func_02094094(TownId *o);
};

class PlayerId : public TownId {
public:
    PlayerId();
    PlayerId(void *o);
    PlayerId(const PlayerId &o);
    // the base class TownId has no declared constructor: its two are called through their symbols

    void func_020940a0(MsgString *x);
    void func_020940d0(MsgString *x);
    u8 *func_02094104();
    void func_02094108(void *src);
    s8 getGender();
    void func_02094124(u8 v);
    void func_02094128(u16 v);
    u16 func_0209412c();
    void func_020941b4(void *src, u16 a, s8 b, TownId *p);
    BOOL func_020941e8(PlayerId *o);
    BOOL func_02094218();
    void func_02094238(PlayerId *o);
    void func_02094264(PlayerId *o);
    void func_02094294();
    void func_020942b8(void *src);

    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
};

extern "C" {
extern TownId gSaveTownId;
s32 func_02063954(TownId *self);
void func_02063968(TownId *self, TownId *o);
void func_0206397c(TownId *self, TownId *o);
void func_02063990(TownId *self, TownId *o);
void func_020639a0(TownId *self);
void func_020639b8(TownId *self);
void func_020639bc(TownId *self, void *o);
}

extern "C" {
extern u8 gSavePlayers[];
}

extern "C" {
s32 func_02097740(void *, void *);
}

extern "C" {
s32 PlayerActor_Get(s32);
}

extern "C" {
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32, u32, u32, u32, u32);
}

extern "C" {
u32 func_02063b8c(u32);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 func_02095204(s32);
}

extern "C" {
BOOL func_02094184(u16 v, u16 *arr, s32 n);
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
extern "C" void func_02094360(s32 *a, u8 *b, s32 *c, s32 *d, s32 *e, s32 *f);
extern "C" s32 func_02094348();
extern "C" s32 func_02094340();
extern "C" s32 func_0209433c();
extern "C" s32 func_02094308(u32 a, u32 b, u32 c, u32 d);
extern "C" BOOL func_02094184(u16 v, u16 *arr, s32 n);
extern "C" u16 func_02094154(u16 *arr, s32 n);
extern "C" u16 func_02094130();
extern "C" void func_0209409c();
extern "C" s32 func_02094048(void *x);

extern "C" void func_02094360(s32 *a, u8 *b, s32 *c, s32 *d, s32 *e, s32 *f)
{
    if (*b == Scene_GetCurrent()) {
        if (*c != 0x75 || *d == 0x75) return;
        if (func_02095204(*a) != 0 && PlayerActor_IsInAction(0x75, *a) != 0) return;
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

extern "C" s32 func_02094348()
{
    return *(s32 *)((u8 *)PlayerActor_Get(4) + 0x7fc);
}

extern "C" s32 func_02094340() { return 0xc9c; }

extern "C" s32 func_0209433c() { return 4; }

extern "C" s32 func_02094308(u32 a, u32 b, u32 c, u32 d)
{
    return _ZN5Actor5spawnEPvS0_S0_S0_S0_(9, ((a << 30) & 0xc0000000) | (d & 0x3fffffff), b, c, 0);
}

PlayerId::PlayerId(void *o) { func_020639bc(this, o); }

PlayerId::PlayerId(const PlayerId &o) { func_020639bc(this, (void *)&o); func_02094264((PlayerId *)&o); }

PlayerId::PlayerId() { func_020639b8(this); }

void PlayerId::func_020942b8(void *src) { MI_CpuCopy8(src, this, 0x16); }

void PlayerId::func_02094294()
{
    MI_CpuFill8(unk_0c, 0, 8);
    unk_0a = 0;
    unk_14 = 2;
    func_020639a0(this);
}

void PlayerId::func_02094264(PlayerId *o)
{
    MI_CpuCopy8(o->unk_0c, unk_0c, 8);
    unk_0a = o->unk_0a;
    unk_14 = o->unk_14;
    func_0206397c(this, o);
}

void PlayerId::func_02094238(PlayerId *o)
{
    MI_CpuCopy8(unk_0c, o->unk_0c, 8);
    o->unk_0a = unk_0a;
    o->unk_14 = unk_14;
    func_02063968(this, o);
}

BOOL PlayerId::func_02094218()
{
    if (func_02063954(this) == 1 && unk_0a != 0) return TRUE;
    return FALSE;
}

BOOL PlayerId::func_020941e8(PlayerId *o)
{
    if (unk_0a == o->unk_0a && unk_14 == o->unk_14 && memcmp(unk_0c, o->unk_0c, 8) == 0) return TRUE;
    return FALSE;
}

void PlayerId::func_020941b4(void *src, u16 a, s8 b, TownId *p)
{
    MI_CpuCopy8(src, unk_0c, 8);
    unk_0a = a;
    unk_14 = b;
    if (p == NULL) p = &gSaveTownId;
    func_02063990(this, p);
}

extern "C" BOOL func_02094184(u16 v, u16 *arr, s32 n)
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

extern "C" u16 func_02094154(u16 *arr, s32 n)
{
    u16 t;
    t = func_02094130();
    while (t == 0 || func_02094184(t, arr, n) == 1) {
        t = func_02094130();
    }
    return t;
}

extern "C" u16 func_02094130()
{
    return (u16)((u16)func_02063b8c(0x7ffc) | 0x8000);
}

u16 PlayerId::func_0209412c() { return unk_0a; }

void PlayerId::func_02094128(u16 v) { unk_0a = v; }

void PlayerId::func_02094124(u8 v) { unk_14 = v; }

s8 PlayerId::getGender() { return unk_14; }

void PlayerId::func_02094108(void *src) { MI_CpuCopy8(src, unk_0c, 8); }

u8 *PlayerId::func_02094104() { return unk_0c; }

void PlayerId::func_020940d0(MsgString *x)
{
    Unk_020e1c4c buf;
    func_020a78a4(&buf, unk_0c, 8);
    x->fromEncoded(&buf, 0, 0);
}

void PlayerId::func_020940a0(MsgString *x)
{
    Unk_020e1c4c buf;
    buf.fromMsgString(x);
    buf.func_02093f90(unk_0c, 8);
}

extern "C" void func_0209409c() {}

void TownId::func_02094094(TownId *o) { func_02063990(this, o); }

s32 TownId::func_02094058()
{
    s32 r = 2;
    if (func_02063954(this) != 0) {
        TownId *p = &gSaveTownId;
        if (unk_00 == p->unk_00 && memcmp(unk_02, p->unk_02, 8) == 0) {
            r = 0;
        } else {
            r = 1;
        }
    }
    return r;
}

extern "C" s32 func_02094048(void *x)
{
    return func_02097740(gSavePlayers, x);
}

Unk_020e1c64::Unk_020e1c64() {}

Unk_020e1c64::~Unk_020e1c64() {}

u32 Unk_020e1c64::vfunc_08() { return 9; }

u8 *Unk_020e1c64::vfunc_0c() { return unk_12; }


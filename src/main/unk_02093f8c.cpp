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
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
    void clear();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ MsgStringAttr unk_08;
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

    /* 0x0e */ u8 unk_0e[8];
};

// 9-byte source buffer at +0x12
class MsgString9B : public MsgString {
public:
    MsgString9B();
    virtual ~MsgString9B();
    virtual u32 capacity();
    virtual u8 *data();

    /* 0x12 */ u8 unk_12[9];
};

// ---------------------------------------------------------------------------------------------------------------------
// Record with a 10-byte header (id + 8 bytes), a u16 at +0xa, 8 bytes at +0xc and an s8 at +0x14

class TownId {
public:
    TownId();
    TownId(void *o);
    s32 TownId_IsValid();
    void TownId_CopyTo(TownId *o);
    void TownId_CopyFrom(TownId *o);
    void TownId_Assign(TownId *o);
    void TownId_Clear();

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];

    s32 getTownRelation();
    void setTown(TownId *o);
};

class PlayerId : public TownId {
public:
    PlayerId();
    PlayerId(void *o);
    PlayerId(const PlayerId &o);

    void setNameString(MsgString *x);
    void getNameString(MsgString *x);
    u8 *getName();
    void setName(void *src);
    s8 getGender();
    void setGender(u8 v);
    void setId(u16 v);
    u16 getId();
    void set(void *src, u16 a, s8 b, TownId *p);
    BOOL equals(PlayerId *o);
    BOOL isValid();
    void copyTo(PlayerId *o);
    void copyFrom(PlayerId *o);
    void clear();
    void setRaw(void *src);

    /* 0x0a */ u16 unk_0a;
    /* 0x0c */ u8 unk_0c[8];
    /* 0x14 */ s8 unk_14;
};

extern "C" {
extern TownId gSaveTownId;
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
s32 func_02002cf8(u32, u32, u32, u32, u32);
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

EncodedString8::EncodedString8() {}

EncodedString8::~EncodedString8() {}

u32 EncodedString8::capacity() { return 8; }

void EncodedString8::copyTo(void *dst, u32 n) { MI_CpuCopy8(unk_0e, dst, n); }

u8 *EncodedString8::data() { return unk_0e; }


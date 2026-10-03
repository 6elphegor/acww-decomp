#include "types.h"

struct Unk_02093aa8_Vec {
    s32 x, y, z;
};

// Effect entry (0x1c bytes), array data_021d04b0[32], scratch entry at data_021d0830
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

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    u8 pad_34[8];
    s32 unk_3c;
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Unk_02093aa8_Vec *v, s32 a, s32 b);
    ~Unk_0203398c();
};

extern "C" {
extern Unk_02093c28_Entry data_021d04b0[];
}

extern "C" {
extern Unk_02093bb4_Scratch data_021d0830;
}

extern "C" {
extern Unk_02093aa8_Vec gVec3Zero;
}

extern "C" {
extern u32 data_020e17bc[];
}

extern "C" {
extern u32 data_020e16f4[];
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
s32 func_02093c28(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 func_02093c94(Unk_02093c28_Obj *o, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 func_02093d54(s32 a, s32 b, void *c, s32 d, s32 e, void *f);
}

extern "C" {
void func_02093dc8(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e, Unk_02093aa8_Vec *a, Unk_02093aa8_Vec *b);
}

extern "C" {
s32 func_02093e88(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 func_02093efc(Unk_02093dc8_Obj *o, Unk_02093c28_Entry *e);
}

extern "C" {
s32 func_02093f50(Unk_02093dc8_Obj *o);
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
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
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
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

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
    TownId();
    TownId(void *o);
    s32 func_02063954();
    void func_02063968(TownId *o);
    void func_0206397c(TownId *o);
    void func_02063990(TownId *o);
    void func_020639a0();

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
extern TownId data_021d7352;
}

extern "C" {
extern u8 data_021d735c[];
}

extern "C" {
s32 func_02097740(void *, void *);
}

extern "C" {
s32 PlayerActor_Get(s32);
}

extern "C" {
s32 func_02002cf8(u32, u32, u32, u32, u32);
}

extern "C" {
u32 func_02063b8c(u32);
}

extern "C" {
s32 func_020b50e8();
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
s32 func_0204ee10(s32 *, s32 *, void *);
}

extern "C" {
s32 func_0204989c(s32, s32, s32, s32, s32);
}

Unk_020e1c4c::Unk_020e1c4c() {}

Unk_020e1c4c::~Unk_020e1c4c() {}

u32 Unk_020e1c4c::vfunc_08() { return 8; }

void Unk_020e1c4c::func_02093f90(void *dst, u32 n) { MI_CpuCopy8(unk_0e, dst, n); }

u8 *Unk_020e1c4c::vfunc_0c() { return unk_0e; }


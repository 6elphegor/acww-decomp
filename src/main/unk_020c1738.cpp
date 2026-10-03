#include "types.h"

extern "C" {
void _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c(void *a, void *b);
void _ZN12Unk_0201a8c413func_0201a8d0Eiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN12Unk_0201a8c413func_0201a8c4Eh(void *self, s32 a);
s32 func_020b50e8(void);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void _ZN12Unk_0201347413func_020135bcEv(void *self);
void _ZN12Unk_0201347413func_020135c4Ev(void *self);
s32 _ZN12Unk_0201985813func_02019790Ev(void *self);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
s32 _ZN12Unk_0201a33413func_0201a7e8Ev(void *self);
s32 _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(void *self, void *owner, s32 a);
void _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(void *self, void *v);
s32 _ZN12Unk_0201a8c413func_0201a968Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a8f0Ev(void *self);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
void *_ZN12Unk_0201a8c413func_0201a978Ev(void *self);
void func_0201a900(void *out, void *pos, void *a, s32 b);
s32 func_0201a834(void *v);
s32 Math_AngleXZ(void *pos, void *v);
s32 func_0201bd84(s16 a);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_020e7518(void *p);
u32 Random_Next(void *p);
u32 func_02063b8c(u32 n);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *a, void *b);
s32 func_02077f40(void *v, s32 a);
void _ZN12Unk_020d771413func_02015818Ejj(void *self, s32 a, s32 b);
void *PlayerData_GetCurrent(void);
void *_ZN10PlayerData13func_020986a4Ev(void);
s32 _ZN12Unk_020872fc13func_02087364Ev(void *p);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *p, s32 a);
void _ZN12Unk_02097ff413func_0209801cEj(void *p, s32 a);
s32 func_0202e1cc(s32 a, s32 b);
BOOL func_0203d67c(void *p);
u32 _ZN12Unk_020d77a413func_0201bc4cEj(void *p, s32 n);
u32 _ZN12Unk_020d77a413func_0201bcbcEPS_(void *p, void *q);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 gVec3Zero[3];
extern s32 gCamera;
extern s32 gCameraLookAt[3];
extern u8 gRandom[];
extern s16 data_02135f44[];
extern s32 data_020c6cf0;
}

// Library base class (ARM code in autoload_2 / ITCM). vfunc_08 takes a flag here: the slot is shared with
// Unk_020d77a4::postCreate(int).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

// ---- Unk_020e6ad8 and its bases (vtable 0x020ddcf0 chain) ----
class Unk_020ddcf0 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
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
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    /* 0x04 */ u32 unk_04[0x38 / 4];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020d7714 : public Unk_020ddcf0 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual s32 vfunc_6c();
    virtual void vfunc_78(void *out) = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    void *func_02015aac();
    void func_02015ab0(u32 a);

    u32 pad_44[(0xac - 0x44) / 4];
};

struct Unk_020c1d80_Out {
    const char *unk_00;
    u8 unk_04;
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_020e6ad8 : public Unk_020d8b38 {
public:
    Unk_020e6ad8();
    virtual ~Unk_020e6ad8();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *out);

    s32 func_020c1e44();
    void func_020c1e4c(s32 v);
    void func_020c1e54(void *p);

    void *unk_ac;
    s32 unk_b0;
};

// ---- Unk_020e6b68 / Unk_020e6924 and their bases (scene object derived from Unk_020d77a4) ----
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
    }
MEMBER(Unk_020dbd74, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
};
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_020e0cf4 {
    u8 unk_00[0x514 - 0x4cc - 4];
    u8 unk_44;
    u8 pad_45[3];
    Unk_020e0cf4();
};
struct Unk_020135e4 { u8 pad_00[0xb]; u8 unk_0b; Unk_020135e4(); };
struct Unk_02019858 {
    Unk_02019858();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02013b10 {
    u8 unk_00[0x28];
};
struct Unk_02014254 : Unk_02013b10 {
    Unk_02014254();
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
};

struct Unk_020d77a4_Vec3 {
    s32 x, y, z;
};
typedef Unk_020d77a4_Vec3 Unk_0203e7a4_Vec;

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Character : Actor {
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68 - 0];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
    Character();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual ~Character();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(int a);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
};

struct Unk_020d77a4 : Character {
    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_020e0cf4 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(int a);
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_4c(int a);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *p);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68() = 0;
    virtual const char *vfunc_6c() = 0;
    virtual const char *vfunc_70() = 0;
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void vfunc_74(u32 a);
    virtual u32 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual u16 vfunc_84();
    virtual BOOL vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
    u8 unk_651;
};

struct Unk_020c17f8_Vec {
    s32 x, y, z;
};

class Unk_020e6b68;
typedef BOOL (Unk_020e6b68::*Unk_020c2194_Fn)();
struct Unk_020c2194_Entry {
    Unk_020c2194_Fn a;
    Unk_020c2194_Fn b;
};

class Unk_020e6b68 : public Unk_020d8bc8 {
public:
    Unk_020e6b68() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual ~Unk_020e6b68() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual const char *vfunc_6c();
    virtual const char *vfunc_70();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual BOOL vfunc_a8();

    BOOL func_020c178c();
    BOOL func_020c17a8();
    BOOL func_020c17f8();
    BOOL func_020c1a40();
    BOOL func_020c1a64();
    BOOL func_020c1b64(Unk_020c17f8_Vec *out, s32 *data);
    BOOL func_020c1ba0(s32 *px, s32 *pz);
    BOOL func_020c1c30();
    BOOL func_020c1c68(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b);
    BOOL func_020c1cc0();
    BOOL func_020c1ec0();
    BOOL func_020c1f10();
    BOOL func_020c1f50();
    BOOL func_020c1fa0();
    BOOL func_020c1fe8();
    BOOL func_020c2038();
    BOOL func_020c2078();
    BOOL func_020c207c();
    BOOL func_020c20d0();
    BOOL func_020c20d4();
    BOOL func_020c20d8();
    BOOL func_020c20dc();
    BOOL func_020c2114();
    BOOL func_020c2140();
    BOOL func_020c2144();
    BOOL func_020c2160();
    void func_020c2194(s32 state);

    s32 unk_654;
    Unk_020e6ad8 unk_658;
    u32 unk_70c;
};

// Destructor lives in another unit (symbol _ZN6FxVec3D1Ev)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

struct Unk_021f4624_Color {
    u8 v[4];
    Unk_021f4624_Color(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};

extern Unk_020c2194_Entry data_021f4670[10];
extern Unk_020e6b68 *data_021f4638;
extern FxVec3 data_021f4658[2];
extern char data_020e6a74[16];
extern char data_020e6a84[23];
extern char data_020e6ab4[27];
extern const char *data_020e69d0;
extern "C" Unk_020e6b68 *func_020c2454();
void func_020c22e0();
void func_020c22fc();

extern "C" Unk_020e6b68 *func_020c2454() {
    return new Unk_020e6b68();
}

BOOL Unk_020e6b68::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    data_021f4638 = this;
    _ZN12Unk_020d77a413func_0201bc28EP12Unk_0201bc1c(this, &unk_658);
    unk_658.func_020c1e54(this);
    if (func_020b50e8()) {
        _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 2, 0x333, 0xcc, 0x133);
        _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 1, 0x280, 0xcc, 0x133);
    }
    unk_558.unk_0b = 1;
    return TRUE;
}

BOOL Unk_020e6b68::vfunc_a8() {
    if (func_020b50e8()) {
        return Unk_020d8bc8::vfunc_a8();
    }
    return data_020c6cf0;
}

BOOL Unk_020e6b68::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    func_020c2194(0);
    if (func_020b50e8() == 0x2f) {
        unk_4cc.unk_44 = 0;
        _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        unk_5c = 0x10000;
        unk_64 = 0x16800;
    }
    return TRUE;
}

BOOL Unk_020e6b68::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_021f4638 = NULL;
    return TRUE;
}

void func_020c22fc() {
    if (data_021f4638 != NULL) {
        data_021f4638->func_020c2194(4);
    }
}

void func_020c22e0() {
    if (data_021f4638 != NULL) {
        data_021f4638->func_020c2194(6);
    }
}

const char *Unk_020e6b68::vfunc_6c() {
    return data_020e6ab4;
}

const char *Unk_020e6b68::vfunc_70() {
    return data_020e6a84;
}

BOOL Unk_020e6b68::vfunc_68() {
    BOOL result = FALSE;
    if (data_021f4670[unk_654].b != NULL) {
        result = (this->*data_021f4670[unk_654].b)();
    }
    return result;
}

BOOL Unk_020e6b68::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e6b68::vfunc_4c(s32 a) {
    switch (a) {
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(_ZN12Unk_020d77a413func_0201bc4cEj(this, 4));
        func_020c2194(1);
        break;
    case 0:
        func_020c2194(1);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(_ZN12Unk_020d77a413func_0201bc4cEj(this, 4));
        func_020c2194(9);
        break;
    case 8:
        func_020c2194(0);
        break;
    }
}

void Unk_020e6b68::func_020c2194(s32 state) {
    BOOL ok = TRUE;
    if (data_021f4670[state].a != NULL) {
        ok = (this->*data_021f4670[state].a)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_020e6b68::func_020c2160() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2144() {
    if (func_020b50e8() == 0) {
        func_020c2194(7);
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2140() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2114() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_0203d67c(this);
        func_020c2194(2);
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20dc() {
    u32 x;
    void *p = unk_658.func_02015aac();
    x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a413func_0201bcbcEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20d8() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20d4() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c20d0() {
    return TRUE;
}

void Unk_020e6b68::vfunc_8c() {
    func_020c2194(3);
}

void Unk_020e6b68::vfunc_90() {
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    func_020c2194(0);
}

BOOL Unk_020e6b68::func_020c207c() {
    return func_020c2160();
}

BOOL Unk_020e6b68::func_020c2078() {
    return TRUE;
}

BOOL Unk_020e6b68::func_020c2038() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 2, 0xf400, 0x14600, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1fe8() {
    if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1fa0() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201a8c413func_0201a8c4Eh(&unk_350, 2);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1f50() {
    if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1f10() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 4, 2, 0x10000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1ec0() {
    if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

Unk_020e6ad8::Unk_020e6ad8() {}

Unk_020e6ad8::~Unk_020e6ad8() {}

void Unk_020e6ad8::func_020c1e54(void *p) {
    vfunc_08();
    unk_ac = p;
}

void Unk_020e6ad8::func_020c1e4c(s32 v) {
    unk_b0 = v;
}

s32 Unk_020e6ad8::func_020c1e44() {
    return unk_b0;
}

void Unk_020e6ad8::vfunc_78(void *outp) {
    Unk_020c1d80_Out *out = (Unk_020c1d80_Out *)outp;
    void *p = PlayerData_GetCurrent();
    out->unk_00 = data_020e69d0;
    if (_ZN12Unk_02097ff413func_02098044Ej(p, 0x33) == 0) {
        if (_ZN12Unk_02097ff413func_02098044Ej(p, 0x39) == 0) {
            func_020c1e4c(0);
        } else {
            func_020c1e4c(1);
        }
    } else {
        if (func_0202e1cc(0x2a, 0) == 0) {
            func_020c1e4c(2);
        } else {
            func_020c1e4c(3);
        }
    }
    switch (func_020c1e44()) {
    case 0:
        _ZN12Unk_02097ff413func_0209801cEj(p, 0x33);
        out->unk_04 = 0;
        break;
    case 1:
        _ZN12Unk_02097ff413func_0209801cEj(p, 0x33);
        out->unk_04 = func_02063b8c(3) + 1;
        break;
    case 2:
        out->unk_04 = func_02063b8c(3) + 4;
        func_0202e1cc(0x2a, 1);
        break;
    case 3:
        out->unk_04 = func_02063b8c(3) + 7;
        break;
    }
}

void Unk_020e6ad8::vfunc_10() {
    PlayerData_GetCurrent();
    void *r4 = _ZN10PlayerData13func_020986a4Ev();
    _ZN12Unk_020d771413func_02015818Ejj(this, _ZN12Unk_020872fc13func_02087364Ev(r4), 0);
    _ZN12Unk_020d771413func_02015818Ejj(this, _ZN12Unk_020872fc13func_02087364Ev(r4), 1);
}

void Unk_020e6ad8::vfunc_14() {}

void Unk_020e6ad8::vfunc_18() {}

BOOL Unk_020e6b68::func_020c1cc0() {
    unk_651 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c1c68(Unk_020c17f8_Vec *a, Unk_020c17f8_Vec *b) {
    BOOL r = FALSE, c = FALSE, d = FALSE;
    s32 x = a->x;
    s32 bx = b->x;
    if (bx > x - 0x10000 && bx < x + 0x10000) {
        d = TRUE;
    }
    if (d) {
        if (b->z > a->z - 0x1a000) {
            c = TRUE;
        }
    }
    if (c) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_020e6b68::func_020c1c30() {
    Unk_020c17f8_Vec *pos = (Unk_020c17f8_Vec *)&unk_5c;
    s32 r = 0;
    if (gCamera != 0) {
        Unk_020c17f8_Vec v;
        v.x = gCameraLookAt[0];
        v.y = gCameraLookAt[1];
        v.z = gCameraLookAt[2];
        r = func_020c1c68(&v, pos);
    }
    return r;
}

BOOL Unk_020e6b68::func_020c1ba0(s32 *px, s32 *pz) {
    s32 *ppx = px;
    s32 *ppz = pz;
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 m = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = m + unk_5c;
        m = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = m + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, 0)) {
            *ppx = v.x;
            *ppz = v.z;
            result = TRUE;
            break;
        }
    }
    return result;
}

BOOL Unk_020e6b68::func_020c1b64(Unk_020c17f8_Vec *out, s32 *data) {
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    func_0201a900(&v, &unk_5c, data, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

BOOL Unk_020e6b68::func_020c1a64() {
    void *p564 = &unk_564;
    void *p350 = &unk_350;
    s32 st = _ZN12Unk_0201a33413func_0201a7e8Ev(&unk_3a8);
    BOOL result = FALSE;
    Unk_020c17f8_Vec v;
    if (_ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(p350, this, 1) == 0) {
        switch (st) {
        case 3:
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            result = TRUE;
            break;
        case 1:
            if (func_020c1b64(&v, &data_021f4658[1].x)) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            result = TRUE;
            break;
        case 2:
            if (func_020c1b64(&v, &data_021f4658[0].x)) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            result = TRUE;
            break;
        }
    } else {
        if (_ZN12Unk_0201a8c413func_0201a968Ev(p350)) {
            _ZN12Unk_0201a8c413func_0201a8f0Ev(p350);
        }
    }
    return result;
}

BOOL Unk_020e6b68::func_020c1a40() {
    if (unk_98 != 0) {
        if (func_020c1a64()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_020e6b68::func_020c17f8() {
    void *p564 = &unk_564;
    BOOL a = func_020c1c30();
    func_020e7518(&unk_651);
    if (a) {
        if (!func_020c1a40()) {
            if (_ZN12Unk_0201985813func_02019790Ev(p564)) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_020c17f8_Vec v1;
                    v1.x = gVec3Zero[0];
                    v1.y = gVec3Zero[1];
                    v1.z = gVec3Zero[2];
                    if (func_020c1ba0(&v1.x, &v1.z)) {
                        s32 ang = Math_AngleXZ(&unk_5c, &v1);
                        if (func_0201bd84(ang - unk_8e)) {
                            s32 k = 1;
                            if (func_02063b8c(4) == 0) {
                                k = 2;
                            }
                            if (k != _ZN12Unk_0201985813func_020197a8Ev(&unk_564)) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, k, 1, v1.x, v1.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else {
                            if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) != 4) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 4, 1, v1.x, v1.z, 0, ang, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x50;
                            }
                        }
                    } else {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (unk_98 != 0) {
                    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1 || _ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2 || _ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 4) {
                        if (unk_651 == 0) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_020c17f8_Vec *src = (Unk_020c17f8_Vec *)_ZN12Unk_0201a8c413func_0201a978Ev(&unk_350);
                            Unk_020c17f8_Vec v2;
                            v2.x = src->x;
                            v2.y = src->y;
                            v2.z = src->z;
                            s32 ang = Math_AngleXZ(&unk_5c, &v2);
                            if (!func_0201bd84(ang - unk_8e)) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (unk_98 != 0) {
            func_020c2194(8);
        }
    }
    return FALSE;
}

BOOL Unk_020e6b68::func_020c17a8() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347413func_020135bcEv(&unk_558);
    return TRUE;
}

BOOL Unk_020e6b68::func_020c178c() {
    if (func_020c1c30()) {
        func_020c2194(7);
    }
    return TRUE;
}

Unk_021f4624_Color data_021f4630(31, 20, 20, 31);
Unk_021f4624_Color data_021f463c(20, 20, 31, 31);
Unk_021f4624_Color data_021f4634(31, 31, 20, 31);
Unk_021f4624_Color data_021f4624(20, 31, 20, 31);
Unk_021f4624_Color data_021f4628(20, 31, 31, 31);
Unk_021f4624_Color data_021f462c(20, 24, 24, 31);
Unk_020c2194_Entry data_021f4670[10] = {
    { &Unk_020e6b68::func_020c2160, &Unk_020e6b68::func_020c2144 },
    { &Unk_020e6b68::func_020c2140, &Unk_020e6b68::func_020c2114 },
    { &Unk_020e6b68::func_020c20d4, &Unk_020e6b68::func_020c20d0 },
    { &Unk_020e6b68::func_020c207c, &Unk_020e6b68::func_020c2078 },
    { &Unk_020e6b68::func_020c2038, &Unk_020e6b68::func_020c1fe8 },
    { &Unk_020e6b68::func_020c1fa0, &Unk_020e6b68::func_020c1f50 },
    { &Unk_020e6b68::func_020c1f10, &Unk_020e6b68::func_020c1ec0 },
    { &Unk_020e6b68::func_020c1cc0, &Unk_020e6b68::func_020c17f8 },
    { &Unk_020e6b68::func_020c17a8, &Unk_020e6b68::func_020c178c },
    { &Unk_020e6b68::func_020c20dc, &Unk_020e6b68::func_020c20d8 },
};
FxVec3 data_021f4658[2] = { FxVec3(0x800, 0, 0x1000), FxVec3(0xfffff800, 0, 0x1000) };
Unk_020e6b68 *data_021f4638;
char data_020e6a74[] = "sp_npc_missing2";
const char *data_020e69d0 = data_020e6a74;
char data_020e6a84[] = "npc_sp/model/mum.nsbmd";
char data_020e6ab4[] = "npc_sp/model/mum_tex.nsbtx";
struct Unk_020e6a9c_Rec {
    Unk_020e6b68 *(*fn)();
    u32 w[5];
};
Unk_020e6a9c_Rec data_020e6a9c = { func_020c2454, { 0x0083007f, 2, 0x5000, 0x5000, 0x3e800 } };

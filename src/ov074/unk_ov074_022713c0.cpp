// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
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

struct Unk_0201bc1c;
class Unk_ov074_02272608;
class Unk_ov074_02272578;

struct Unk_0201acf8 {
    u16 unk_00;
    u16 unk_02;
    s32 func_0201acfc();
};

struct Unk_ov074_02271450_Ent {
    u8 pad_00[0x5c];
    u32 unk_5c;
};

struct Unk_ov074_02271564_A {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
    u8 g[16];
    u8 h;
};

struct Unk_ov074_02271564_B {
    u16 a;
    u8 b[8];
    u16 c;
    u8 d[8];
    s8 e;
    u8 f;
};

struct Unk_ov074_022717a4_Out {
    char *unk_00;
    u8 unk_04;
};

struct Unk_ov074_02271be8_V {
    s32 v[3];
};

struct Unk_ov074_02271e54_V {
    s32 x, y, z, w;
};

struct Unk_ov074_02272020_V {
    s32 x, y, z;
};

class PlayerData {
public:
    void *getPlayerId();
};

// Other modules' methods are called through their mangled symbol names (self first).
#define func_020135bc _ZN12Unk_0201347413func_020135bcEv
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a7e8 _ZN12Unk_0201a33413func_0201a7e8Ev
#define func_0201a8f0 _ZN12Unk_0201a8c413func_0201a8f0Ev
#define func_0201a968 _ZN12Unk_0201a8c413func_0201a968Ev
#define func_0201a978 _ZN12Unk_0201a8c413func_0201a978Ev
#define func_0201a97c _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3
#define func_0201a9a0 _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei
#define func_0201bcbc _ZN12Unk_020d77a413func_0201bcbcEPS_
#define func_0206260c _ZN8ItemNameD1Ev
#define func_0206267c _ZN8ItemNameC1Ev
#define func_02067a1c _ZN12Unk_020660f813func_02067a1cEiii
#define func_02067a3c _ZN12Unk_020660f813func_02067a3cEiPv
#define func_02067a84 _ZN12Unk_020660f813func_02067a84EPhPv
#define func_02071e04 _ZN7Pattern13func_02071e04Ev
#define func_02071f70 _ZN12Unk_02071ed013func_02071f70EPv
#define func_02071fa0 _ZN12Unk_02071ed013func_02071fa0Ev
#define func_02072064 _ZN12Unk_02071ed0D1Ev
#define func_02087268 _ZN12Unk_0208722413func_02087268Ev
#define func_02087274 _ZN12Unk_0208722413func_02087274Ej
#define func_0208728c _ZN12Unk_0208722413func_0208728cEj
#define func_02087298 _ZN12Unk_0208722413func_02087298Ev
#define func_020941e8 _ZN8PlayerId13func_020941e8EPS_
#define func_02094218 _ZN8PlayerId13func_02094218Ev
#define func_020942c8 _ZN8PlayerIdC1Ev
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_020b8840 _ZN12Unk_020e45e013func_020b8840EPvjS0_jj

extern "C" {
extern u8 data_021eca50[];
extern u32 *data_ov074_022724e4;
extern u32 *gCurrentHeap;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gRandom[];
extern s32 gVec3Zero[];
extern u8 __ptmf_null[];
extern void *gCamera;
extern s32 gCameraLookAt[];
extern s16 data_02135f44[];

void *func_02087298(u8 *p);
s32 func_0203c6b0(u32 h, void *x);
u32 func_0203c6a8(u32 h);
u32 func_0203c6c0();
u32 Heap_Alloc(u32 *a, u32 b);
void Heap_Free(u32 *a, u32 b);
BOOL func_0201bd84(s16 a);
s32 func_0206ed18();
PlayerData *PlayerData_GetCurrent();
s32 func_0207d164(void *a, s32 b, s32 c);
void func_02087274(u8 *p, s32 v);
void func_0208728c(u8 *p, s32 v);
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
s32 func_02067a84(void *self, u8 *b, char *c);
void func_02067a1c(void *self, s32 a, u8 *b, char *c);
void func_02067a3c(void *self, s32 a, void *b);
u32 func_02087268(u8 *p);
s32 ChoiceList_getResult();
Unk_ov074_02271564_A *func_02071e04();
Unk_ov074_02271564_B *func_02071fa0(Unk_ov074_02271564_A *a);
void func_02071f70(Unk_ov074_02271564_A *a, void *b);
void func_02072064(Unk_ov074_02271564_A *a);
BOOL func_02094218(Unk_ov074_02271564_B *b);
BOOL func_020941e8(Unk_ov074_02271564_B *a, void *b);
u32 func_0209409c(Unk_ov074_02271564_B *a);
void func_020942c8(Unk_ov074_02271564_B *a);
s32 memcmp(void *a, void *b, s32 n);
void func_0206267c(void *p);
void func_0206260c(void *p);
u32 func_0201bcbc(void *p, u32 x);
void func_0203d67c(void *p);
void func_020e7518(void *p);
s32 Random_Next(u8 *p);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
s32 Math_AngleXZ(void *a, s32 *b);
Unk_ov074_02271be8_V *func_0201a978(void *p);
s32 func_020b8840(void *p, u32 a, u32 *b, u32 c, s32 d, s32 e);
void func_020135bc(void *p);
void func_020135c4(void *p);
BOOL func_02014220(void *p);
void func_020141b4(void *p, u32 a, u32 b, u32 c);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0201a7e8(void *p);
s32 func_0201a9a0(void *a, void *b, s32 c);
void func_0201a97c(void *a, void *b);
BOOL func_0201a968(void *a);
void func_0201a8f0(void *a);
void func_0201a900(void *out, void *pos, s32 x, s32 y);
s32 func_0201a834(void *p);
void func_0204edd8(void *a, void *b);
BOOL func_02077f40(void *a, s32 b);
void func_0201a6c0(void *p, s32 a, s32 b, s32 c, s32 *d, s32 e, s32 f, s32 g);
}

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov074_022717a4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    s32 func_02015a5c();
    void func_02015ab0(u32 a);
    u32 func_02015aac();
    void func_020157e8(u32 a, u32 b);
    void func_02015818(u32 a, u32 b);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    void func_02015170(u32 a, u32 b);
    void func_020151d0(s32 a);
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_020e45e0 {
public:
    Unk_020e45e0();
    void func_020b8930();
    u8 pad_00[0x28];
};

class Unk_ov074_02271450_Helper {
public:
    Unk_ov074_02271450_Helper();
    ~Unk_ov074_02271450_Helper();
    void func_0227142c(u32 *p);
    void func_02271450(void *e);
    u32 func_0227149c();
    void func_022714b8(u32 *a, void *b);
    u32 unk_00;
    Unk_020e45e0 unk_04;
};

class Unk_ov074_02272578 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov074_02272578::*Fn)();

    Unk_ov074_02272578();
    virtual ~Unk_ov074_02272578();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov074_022717a4_Out *out);
    virtual void vfunc_84();

    void func_02271960(Unk_ov074_02272608 *o);
    BOOL func_022719cc();
    void func_02271a28();
    void func_02271a6c(s32 idx);

    /* 0xac */ Unk_ov074_02272608 *unk_ac;
    /* 0xb0 */ Fn unk_b0;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
MEMBER(Unk_020dbd74, 0x2a0 - 0xec);
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
MEMBER(Unk_02088d00, 0x514 - 0x4cc);
struct Unk_020135e4 {
    u8 unk_00[0xc];
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };
struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    u16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    u32 func_0201bc4c(u32 v);

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
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov074_02272608 : public Unk_020d8bc8 {
public:
    Unk_ov074_02272608() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a8();

    BOOL func_02271b08();
    BOOL func_02271b0c();
    BOOL func_02271b48();
    BOOL func_02271b4c();
    BOOL func_02271b78();
    BOOL func_02271b7c();
    BOOL func_02271b98();
    BOOL func_02271be8();
    BOOL func_022720b0();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov074_02272578 unk_658;
    /* 0x710 */ Unk_ov074_02271450_Helper unk_710;
};

struct Unk_ov074_02272130_Ent {
    BOOL (Unk_ov074_02272608::*enter)();
    BOOL (Unk_ov074_02272608::*exit)();
};

struct Unk_ov074_SceneEntry {
    Unk_ov074_02272608 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov074_Col {
    u8 r, g, b, a;
    Unk_ov074_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

extern "C" {
Unk_ov074_02272608 *func_ov074_0227226c();
void func_ov074_02272130(Unk_ov074_02272608 *self, s32 state);
s32 func_ov074_02272020(void *self);
s32 func_ov074_02271e30(void *self);
s32 func_ov074_02271e54(void *self);
s32 func_ov074_02271f54(void *self, void *out, void *x);
s32 func_ov074_02271f90(void *self, s32 *a, s32 *b);
s32 func_ov074_02272058(void *self, void *a, void *b);
extern u8 data_ov074_02272540[];
extern Unk_ov074_02272130_Ent data_ov074_0227273c[5];
extern FxVec3 data_ov074_02272724[2];
extern Unk_ov074_SceneEntry data_ov074_02272558;
extern Unk_ov074_Col data_ov074_022726e4;
extern Unk_ov074_Col data_ov074_022726f4;
extern Unk_ov074_Col data_ov074_022726e0;
extern Unk_ov074_Col data_ov074_022726f8;
extern Unk_ov074_Col data_ov074_022726e8;
extern Unk_ov074_Col data_ov074_022726f0;
extern u32 data_ov074_022724e0;
}

typedef BOOL (Unk_ov074_02272608::*Unk_ov074_Fn)();
extern "C" {
void _ZN18Unk_ov074_0227260813func_02271b08Ev();
extern void *data_ov074_022724e8[2];
void _ZN18Unk_ov074_0227257813func_022719ccEv();
extern void *data_ov074_022724f0[2];
void _ZN18Unk_ov074_0227260813func_02271b4cEv();
extern void *data_ov074_022724f8[2];
void _ZN18Unk_ov074_0227260813func_02271b48Ev();
extern void *data_ov074_02272500[2];
void _ZN18Unk_ov074_0227260813func_022720b0Ev();
extern void *data_ov074_02272508[2];
void _ZN18Unk_ov074_0227260813func_02271be8Ev();
extern void *data_ov074_02272510[2];
void _ZN18Unk_ov074_0227260813func_02271b98Ev();
extern void *data_ov074_02272518[2];
void _ZN18Unk_ov074_0227260813func_02271b7cEv();
extern void *data_ov074_02272520[2];
void _ZN18Unk_ov074_0227260813func_02271b0cEv();
extern void *data_ov074_02272528[2];
void _ZN18Unk_ov074_0227257813func_02271a28Ev();
extern void *data_ov074_02272530[2];
void _ZN18Unk_ov074_0227260813func_02271b78Ev();
extern void *data_ov074_02272538[2];
}
#define PM(a) (*(Unk_ov074_Fn *)data_ov074_##a)


#define F(T, o) (*(T *)((u8 *)this + (o)))
#define P(o) ((void *)((u8 *)this + (o)))
#define FS(T, o) (*(T *)((u8 *)self + (o)))
#define PS(o) ((void *)((u8 *)self + (o)))

extern "C" Unk_ov074_02272608 *func_ov074_0227226c() {
    return new Unk_ov074_02272608();
}

s32 Unk_ov074_02272608::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov074_02272608::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_02271960(this);
    return TRUE;
}

BOOL Unk_ov074_02272608::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    unk_710.func_022714b8(gCurrentHeap, (u8 *)this + 0xec);
    func_ov074_02272130(this, 3);
    return TRUE;
}

BOOL Unk_ov074_02272608::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    unk_710.func_0227142c(gCurrentHeap);
    return TRUE;
}

u8 *Unk_ov074_02272608::vfunc_6c() { return 0; }

u8 *Unk_ov074_02272608::vfunc_70() { return data_ov074_02272540; }

BOOL Unk_ov074_02272608::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov074_0227273c[unk_654].exit != NULL) {
        result = (this->*data_ov074_0227273c[unk_654].exit)();
    }
    return result;
}

extern "C" void func_ov074_02272130(Unk_ov074_02272608 *self, s32 state) {
    BOOL ok = TRUE;
    if (data_ov074_0227273c[state].enter != NULL) {
        ok = (self->*data_ov074_0227273c[state].enter)();
    }
    if (ok) {
        self->unk_654 = state;
    }
}

BOOL Unk_ov074_02272608::func_022720b0() {
    void *self = this;
    FS(u8, 0x651) = 0;
    func_020196b4(PS(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    func_020135c4(PS(0x558));
    func_020135c4(PS(0x558));
    func_0201a6c0(PS(0x3b0), 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

extern "C" s32 func_ov074_02272058(void *self, void *a, void *b) {
    s32 *pa = (s32 *)a;
    s32 *pb = (s32 *)b;
    BOOL r = FALSE;
    BOOL f6 = FALSE;
    BOOL f5 = FALSE;
    if (pb[0] > pa[0] - 0x10000) {
        if (pb[0] < pa[0] + 0x10000) {
            f5 = TRUE;
        }
    }
    if (f5) {
        if (pb[2] > pa[2] - 0x1a000) {
            f6 = TRUE;
        }
    }
    if (f6) {
        if (pb[2] < pa[2] + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" s32 func_ov074_02272020(void *self) {
    void *pos = PS(0x5c);
    s32 r = 0;
    Unk_ov074_02272020_V v;
    if (gCamera != 0) {
        v.x = gCameraLookAt[0];
        v.y = gCameraLookAt[1];
        v.z = gCameraLookAt[2];
        r = func_ov074_02272058(self, &v, pos);
    }
    return r;
}

extern "C" s32 func_ov074_02271f90(void *self, s32 *a, s32 *b) {
    s32 r6 = 0;
    s32 i;
    Unk_ov074_02272020_V v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s16 ang = Random_Next(gRandom);
        s32 idx = ((u16)ang >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + FS(s32, 0x5c);
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + FS(s32, 0x64);
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r6) != 0) {
            *a = v.x;
            *b = v.z;
            r6 = 1;
            break;
        }
    }
    return r6;
}

extern "C" s32 func_ov074_02271f54(void *self, void *out, void *x) {
    Unk_ov074_02271e54_V t;
    Unk_ov074_02271e54_V *o = (Unk_ov074_02271e54_V *)out;
    s32 r = 0;
    func_0201a900(&t, PS(0x5c), (s32)x, FS(s16, 0x94));
    if (func_0201a834(&t) != 1) {
        o->x = t.x;
        o->y = t.y;
        o->z = t.z;
        r = 1;
    }
    return r;
}

extern "C" s32 func_ov074_02271e54(void *self) {
    void *r1c = PS(0x564);
    void *r4 = PS(0x350);
    s32 r6 = func_0201a7e8(PS(0x3a8));
    s32 r7 = 0;
    Unk_ov074_02272020_V v;

    if (func_0201a9a0(r4, self, 1) == 0) {
        switch (r6) {
        case 3:
            func_020196b4(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r7 = 1;
            break;
        case 1:
            if (func_ov074_02271f54(self, &v, &data_ov074_02272724[1]) != 0) {
                func_0201a97c(r4, &v);
            } else {
                func_020196b4(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r7 = 1;
            break;
        case 2:
            if (func_ov074_02271f54(self, &v, data_ov074_02272724) != 0) {
                func_0201a97c(r4, &v);
            } else {
                func_020196b4(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r7 = 1;
            break;
        }
    } else {
        if (func_0201a968(r4) != 0) {
            func_0201a8f0(r4);
        }
    }
    return r7;
}

// ---------------------------------------------------------------------------------------------------------------------
extern "C" BOOL func_ov074_02271e30(void *self) {
    if (FS(u32, 0x98) != 0 && func_ov074_02271e54(self) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov074_02272608::func_02271be8() {
    s32 r6;
    Unk_ov074_02271be8_V v;
    Unk_ov074_02271be8_V w;
    void *r4 = P(0x564);

    r6 = func_ov074_02272020(this);
    func_020e7518(P(0x651));
    if (r6 != 0) {
        if (func_ov074_02271e30(this) == 0) {
            if (func_02019790(r4) != 0) {
                if (((Unk_0201acf8 *)P(0x3aa))->func_0201acfc() == 2) {
                    func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    v.v[0] = gVec3Zero[0];
                    v.v[1] = gVec3Zero[1];
                    v.v[2] = gVec3Zero[2];
                    if (func_ov074_02271f90(this, &v.v[0], &v.v[2]) != 0) {
                        r6 = Math_AngleXZ(P(0x5c), &v.v[0]);
                        if (func_0201bd84(r6 - F(s16, 0x8e)) != 0) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != func_020197a8(P(0x564))) {
                                func_020196b4(r4, r6, 1, v.v[0], v.v[2], 0, 0, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x64;
                            }
                        } else {
                            if (func_020197a8(P(0x564)) != 4) {
                                func_020196b4(r4, 4, 1, v.v[0], v.v[2], 0, r6, 0, 0, data_020c6cc8, 0);
                                F(u8, 0x651) = 0x50;
                            }
                        }
                    } else {
                        func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else {
                if (F(u32, 0x98) != 0) {
                    if (func_020197a8(P(0x564)) == 1 || func_020197a8(P(0x564)) == 2 || func_020197a8(P(0x564)) == 4) {
                        if (F(u8, 0x651) == 0) {
                            func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        } else {
                            Unk_ov074_02271be8_V *src = func_0201a978(P(0x350));
                            w.v[0] = src->v[0];
                            w.v[1] = src->v[1];
                            w.v[2] = src->v[2];
                            if (func_0201bd84(Math_AngleXZ(P(0x5c), &w.v[0]) - F(s16, 0x8e)) == 0) {
                                func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (F(u32, 0x98) != 0) {
            func_ov074_02272130(this, 3);
        }
    }
    return FALSE;
}

BOOL Unk_ov074_02272608::func_02271b98() {
    func_020196b4(P(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    F(u8, 0x651) = 0;
    func_020135bc(P(0x558));
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b7c() {
    if (func_ov074_02272020(this) != 0) {
        func_ov074_02272130(this, 2);
    }
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b78() { return TRUE; }

BOOL Unk_ov074_02272608::func_02271b4c() {
    if (func_02014220(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov074_02272130(this, 1);
    }
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b48() { return TRUE; }

BOOL Unk_ov074_02272608::func_02271b0c() {
    u32 a = unk_658.func_02015aac();
    s32 b = unk_8e;
    if (a != 0) {
        b = func_0201bcbc(this, a);
    }
    func_020141b4(&unk_618, 0, b, 0);
    return TRUE;
}

BOOL Unk_ov074_02272608::func_02271b08() { return TRUE; }

void Unk_ov074_02272578::vfunc_84() {
    if (unk_b0 != 0) {
        (this->*unk_b0)();
        unk_b0 = *(Fn *)__ptmf_null;
    }
}// Declarations for data defined further down (definition order sets the data layout)
extern u32 *data_ov074_022724e4;
extern u32 data_ov074_022724e0;
extern u8 data_ov074_02272540[];
extern Unk_ov074_SceneEntry data_ov074_02272558;
extern void *data_ov074_022724e8[2];
extern void *data_ov074_022724f0[2];
extern void *data_ov074_022724f8[2];
extern void *data_ov074_02272500[2];
extern void *data_ov074_02272508[2];
extern void *data_ov074_02272510[2];
extern void *data_ov074_02272518[2];
extern void *data_ov074_02272520[2];
extern void *data_ov074_02272528[2];
extern void *data_ov074_02272530[2];
extern void *data_ov074_02272538[2];
extern Unk_ov074_02272130_Ent data_ov074_0227273c[5];
extern FxVec3 data_ov074_02272724[2];


















Unk_ov074_Col data_ov074_022726e4(31, 20, 20, 31);
void *data_ov074_022724f8[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b4cEv, 0};
Unk_ov074_Col data_ov074_022726f4(20, 20, 31, 31);
Unk_ov074_Col data_ov074_022726e0(31, 31, 20, 31);
void *data_ov074_022724f0[2] = {(void *)_ZN18Unk_ov074_0227257813func_022719ccEv, 0};
Unk_ov074_Col data_ov074_022726f8(20, 31, 20, 31);
Unk_ov074_SceneEntry data_ov074_02272558 = {func_ov074_0227226c, 0x67, 0x6d, 2, 0x5000, 0x5000, 0x3e800};
Unk_ov074_Col data_ov074_022726e8(20, 31, 31, 31);
Unk_ov074_Col data_ov074_022726f0(20, 24, 24, 31);
void *data_ov074_02272518[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b98Ev, 0};
u32 data_ov074_022724e0 = 0x66;
void *data_ov074_02272520[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b7cEv, 0};
void *data_ov074_02272528[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b0cEv, 0};
void *data_ov074_02272530[2] = {(void *)_ZN18Unk_ov074_0227257813func_02271a28Ev, 0};
void *data_ov074_02272508[2] = {(void *)_ZN18Unk_ov074_0227260813func_022720b0Ev, 0};
void *data_ov074_02272500[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b48Ev, 0};
u8 data_ov074_02272540[] = "npc_sp/model/mka.nsbmd";
Unk_ov074_02272130_Ent data_ov074_0227273c[5] = {
    {PM(02272538), PM(022724f8)},
    {NULL, PM(02272500)},
    {PM(02272508), PM(02272510)},
    {PM(02272518), PM(02272520)},
    {PM(02272528), PM(022724e8)},
};
FxVec3 data_ov074_02272724[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov074_02272538[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b78Ev, 0};
void *data_ov074_022724e8[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271b08Ev, 0};
u32 *data_ov074_022724e4 = &data_ov074_022724e0;
void *data_ov074_02272510[2] = {(void *)_ZN18Unk_ov074_0227260813func_02271be8Ev, 0};

void Unk_ov074_02272578::func_02271a6c(s32 idx) {
    static Fn tbl[2] = {*(Fn *)data_ov074_02272530, *(Fn *)data_ov074_022724f0};
    unk_b0 = tbl[idx];
}

void Unk_ov074_02272578::func_02271a28() {
    void *p = unk_3c;
    u8 buf[1];
    buf[0] = 0xf;
    if (func_0206ed18() != 0) {
        buf[0] = 0x1c;
        unk_ac->unk_710.func_02271450(&unk_ac->unk_ec);
    }
    func_02067a84(p, buf, ((char *)"sp_npc_mysterycat"));
}

BOOL Unk_ov074_02272578::func_022719cc() {
    if (func_0206ed18() != 0) {
        void *p = unk_3c;
        u8 *const g = data_021eca50;
        u8 buf[1];
        func_02087274(g, func_0207d164(PlayerData_GetCurrent(), 0, 0));
        func_0208728c(g, 3);
        buf[0] = func_02063b8c(3) + 5;
        func_0202e1cc(0x2b, 1);
        func_02067a84(p, buf, ((char *)"sp_npc_mysterycat"));
    }
end:;
}

Unk_ov074_02272578::Unk_ov074_02272578() {}

Unk_ov074_02272578::~Unk_ov074_02272578() {}

void Unk_ov074_02272578::func_02271960(Unk_ov074_02272608 *o) {
    vfunc_08();
    unk_ac = o;
}

void Unk_ov074_02272578::vfunc_78(Unk_ov074_022717a4_Out *out) {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    u32 obj[9];

    out->unk_00 = ((char *)"sp_npc_mysterycat");
    u8 *const g = data_021eca50;
    func_02087298(g);
    l = *func_02071e04();
    m = *func_02071fa0(&l);
    if (func_02063b8c(2) == 0 || func_0202e1cc(0x2b, 0) == 0) {
        out->unk_04 = 3;
    } else {
        if (func_02094218(&m) != 0) {
            PlayerData *p = PlayerData_GetCurrent();
            u16 *q = (u16 *)p->getPlayerId();
            if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                out->unk_04 = func_02063b8c(4) + 0x18;
                goto next;
            }
        }
        out->unk_04 = func_02063b8c(4) + 0x11;
    }
next:
    func_0206267c(obj);
    if (func_02094218(&m) != 0) {
        func_020157e8((u32)&m, 1);
        func_02015818(func_0209409c(&m), 0);
        buf[0] = func_02087268(g);
        func_02067a1c(unk_3c, 2, buf, ((char *)"st_impress"));
        func_02071f70(&l, obj);
        func_02067a3c(unk_3c, 3, obj);
    }
    func_0206260c(obj);
    func_020942c8(&m);
    func_02072064(&l);
}

void Unk_ov074_02272578::vfunc_14() {
    u8 buf[1];
    char *name = ((char *)"sp_npc_mysterycat");
    s32 t = 0xff;

    switch (unk_1e) {
    case 9:
    case 10:
    case 11:
    case 12:
        t = 0xd;
        break;
    case 13:
        break;
    case 14:
        unk_ac->unk_710.func_02271450(&unk_ac->unk_ec);
        func_02015170(3, 0);
        func_020151d0(2);
        func_02271a6c(0);
        break;
    case 0x1c:
        func_02015170(0x14, 0);
        func_020151d0(2);
        func_02271a6c(1);
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        func_02067a84(unk_3c, buf, name);
    }
}

void Unk_ov074_02272578::vfunc_18() {
    u8 buf[1];
    Unk_ov074_02271564_A l;
    Unk_ov074_02271564_B m;
    s32 t;
    s32 r5;

    func_02015a5c();
    r5 = ChoiceList_getResult();
    func_02087298(data_021eca50);
    l = *func_02071e04();
    m = *func_02071fa0(&l);
    char *name = ((char *)"sp_npc_mysterycat");
    t = 0xff;
    switch (unk_1e) {
    case 3:
        if (r5 == 0) {
            if (func_02094218(&m) != 0) {
                PlayerData *p = PlayerData_GetCurrent();
                u16 *q = (u16 *)p->getPlayerId();
                if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                    t = 0xa;
                    break;
                }
            }
            t = 9;
        } else {
            if (func_02094218(&m) != 0) {
                PlayerData *p = PlayerData_GetCurrent();
                u16 *q = (u16 *)p->getPlayerId();
                if (m.a == q[0] && memcmp(m.b, q + 1, 8) == 0 && func_020941e8(&m, q) != 0) {
                    t = 0xc;
                    break;
                }
            }
            t = 0xb;
        }
        break;
    case 0xd:
        if (r5 != 0) {
            t = 0xe;
        }
        break;
    }
    if (t != 0xff) {
        buf[0] = t;
        func_02067a84(unk_3c, buf, name);
    }
    func_020942c8(&m);
    func_02072064(&l);
}

BOOL Unk_ov074_02272608::vfunc_48() {
    BOOL r = FALSE;
    if (func_02014220(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov074_02272608::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov074_02272130(this, 0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov074_02272130(this, 4);
        break;
    case 8:
        func_ov074_02272130(this, 2);
        break;
    }
}

Unk_ov074_02271450_Helper::Unk_ov074_02271450_Helper() {}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov074_02271450_Helper::~Unk_ov074_02271450_Helper() {}

void Unk_ov074_02271450_Helper::func_022714b8(u32 *a, void *b) {
    unk_00 = Heap_Alloc(a, func_0203c6c0());
    func_02271450(b);
}

u32 Unk_ov074_02271450_Helper::func_0227149c() {
    u32 r = 0;
    if (unk_00 != 0) {
        r = func_0203c6a8(unk_00);
    }
    return r;
}

void Unk_ov074_02271450_Helper::func_02271450(void *e) {
    Unk_ov074_02271450_Ent *ent = (Unk_ov074_02271450_Ent *)e;
    void *t;
    u32 h;
    t = func_02087298(data_021eca50);
    if (t != 0) {
        if (func_0203c6b0(unk_00, t) != 0) {
            h = func_0227149c();
            if (h != 0) {
                func_020b8840(&unk_04, ent->unk_5c, data_ov074_022724e4, h, 0, 0);
            }
        }
    }
}

void Unk_ov074_02271450_Helper::func_0227142c(u32 *p) {
    unk_04.func_020b8930();
    if (unk_00 != 0) {
        Heap_Free(p, unk_00);
    }
}


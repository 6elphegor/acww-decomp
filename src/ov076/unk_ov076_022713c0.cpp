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
class Unk_ov076_02272174;
class Unk_ov076_022720e4;

struct ChoiceList {
    s32 getResult();
};

struct Unk_ov076_Vec {
    s32 x, y, z;
};

struct Unk_ov076_02271744_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov076_02271864_Msg {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

struct Unk_ov076_02271a3c_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct ItemPickSpec {
    void set(s32 a, s32 b);
    s32 unk_00;
    s32 unk_04;
};

extern "C" {
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771013func_0201517cEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *p, s32 v);
BOOL _ZN12Unk_020d77a413func_0201bcbcEPS_(void *p, void *q);
void _ZN12Unk_0201a8c413func_0201a99cEs(void *self, s32 a);
void _ZN12Unk_0201a33413func_0201a784Ev(void *self);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN12Unk_0201985813func_020195c8Eiijtt(void *self, s32 a, s32 b, u32 c, s32 d, s32 e);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
BOOL _ZN12Unk_0201985813func_02019790Ev(void *self);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
s32 _ZN12Unk_02015b8c13func_02015e48Ej(void *self, s32 a);
BOOL _ZN12Unk_02015b8c13func_02015e74EP18Unk_02015b8c_Scene(void *self, void *o);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, s32 a, s32 b, s32 c);
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
void func_02099014(u16 *, s32);
void func_02099064();
s32 func_02098ffc();
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
s32 func_0206ea84(BOOL (*cb)(u16 *, s32));
s32 func_0206ed18();
s32 func_0206ed38();
void ItemPick_One(u16 *a, ItemPickSpec *o, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02063388(ItemPickSpec *o);
void func_0203ffa4(u32 id);
void func_0203d67c(void *self);
void func_020e7530(void *a, s32 b, s32 c);
void ProcBase_RequestDelete(void *self);
void func_ov003_02220db0(Unk_ov076_Vec *v, s32 a);
void func_02090330(s32 a, Unk_ov076_Vec *v, s32 b, s32 c);
void func_02003ddc(void *self, s32 a, s32 b, s32 c);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u32 gVec3Zero;
extern u32 __ptmf_null[];
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

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
    virtual void vfunc_78(void *a);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
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
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

class Unk_ov076_022720e4 : public Unk_020d8b38 {
public:
    typedef void (Unk_ov076_022720e4::*Fn)();

    Unk_ov076_022720e4();
    virtual ~Unk_ov076_022720e4();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *a);
    virtual void vfunc_84();

    void func_ov076_022717b4(Unk_ov076_02272174 *o);
    void func_ov076_02271864();
    void func_ov076_0227190c(s32 i);

    s32 unk_ac;
    Unk_ov076_02272174 *unk_b0;
    u16 unk_b4;
    Fn unk_b8;
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
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
    s16 unk_94;
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
    void *func_0201bc4c(u32 v);

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

class Unk_ov076_02272174 : public Unk_020d8bc8 {
public:
    Unk_ov076_02272174() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    BOOL func_ov076_02271ce8();
    BOOL func_ov076_02271cec();
    BOOL func_ov076_0227199c();
    BOOL func_ov076_022719e4();
    BOOL func_ov076_02271a3c();
    BOOL func_ov076_02271b28();
    BOOL func_ov076_02271be0();
    BOOL func_ov076_02271c28();
    BOOL func_ov076_02271c80();
    BOOL func_ov076_02271c84();
    BOOL func_ov076_02271cb0();
    void func_ov076_02271d20(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov076_022720e4 unk_658;
    u8 unk_718;
    u8 pad_719;
    u16 unk_71a;
    s32 unk_71c;
    s16 unk_720;
    u8 pad_722[2];
};

struct Unk_ov076_02271d20_Ent {
    BOOL (Unk_ov076_02272174::*enter)();
    BOOL (Unk_ov076_02272174::*exit)();
};

struct Unk_ov076_SceneEntry {
    Unk_ov076_02272174 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov076_02271f44_Ent {
    const char *a;
    u8 b;
    u8 pad[3];
};

static inline BOOL Unk_ov076_IsItem(u16 *p, u16 k) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        u16 v = k;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == k) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

extern "C" {
extern Unk_ov076_02271d20_Ent data_ov076_0227222c[6];
extern u8 data_ov076_02272080[];
extern u8 data_ov076_02272090[];
extern u8 data_ov076_022720c0[];
extern const Unk_ov076_02271f44_Ent data_ov076_02271f44[3];
BOOL func_ov076_022718bc(u16 *p, s32 x);
Unk_ov076_02272174 *func_ov076_02271e2c();
}

typedef BOOL (Unk_ov076_02272174::*Unk_ov076_Fn)();
extern "C" {
void _ZN18Unk_ov076_0227217419func_ov076_02271be0Ev();
void _ZN18Unk_ov076_0227217419func_ov076_022719e4Ev();
void _ZN18Unk_ov076_0227217419func_ov076_0227199cEv();
void _ZN18Unk_ov076_0227217419func_ov076_02271a3cEv();
void _ZN18Unk_ov076_0227217419func_ov076_02271c84Ev();
void _ZN18Unk_ov076_0227217419func_ov076_02271b28Ev();
void _ZN18Unk_ov076_0227217419func_ov076_02271c28Ev();
void _ZN18Unk_ov076_0227217419func_ov076_02271c80Ev();
void _ZN18Unk_ov076_0227217419func_ov076_02271cecEv();
void _ZN18Unk_ov076_0227217419func_ov076_02271cb0Ev();
void _ZN18Unk_ov076_0227217419func_ov076_02271ce8Ev();
}
// ---------------------------------------------------------------------------------------------------------------------

Unk_ov076_02272174 *func_ov076_02271e2c() {
    return new Unk_ov076_02272174();
}

BOOL Unk_ov076_02272174::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov076_022717b4(this);
    return TRUE;
}

BOOL Unk_ov076_02272174::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    unk_4cc.unk_1c |= 2;
    unk_71a = unk_8e;
    func_ov076_02271d20(0);
    return TRUE;
}

u8 *Unk_ov076_02272174::vfunc_6c() { return data_ov076_022720c0; }

u8 *Unk_ov076_02272174::vfunc_70() { return data_ov076_02272090; }

BOOL Unk_ov076_02272174::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov076_0227222c[unk_654].exit != NULL) {
        result = (this->*data_ov076_0227222c[unk_654].exit)();
    }
    return result;
}

void Unk_ov076_02272174::func_ov076_02271d20(s32 state) {
    BOOL ok = TRUE;
    if (data_ov076_0227222c[state].enter != NULL) {
        ok = (this->*data_ov076_0227222c[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov076_02272174::func_ov076_02271cec() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271ce8() { return TRUE; }

BOOL Unk_ov076_02272174::func_ov076_02271cb0() {
    void *p = unk_658.func_02015aac();
    u32 r = 0;
    if (p != NULL) {
        r = _ZN12Unk_020d77a413func_0201bcbcEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271c84() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_0203d67c(this);
        func_ov076_02271d20(2);
    }
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271c80() { return TRUE; }

BOOL Unk_ov076_02272174::func_ov076_02271c28() {
    if (unk_718 == 1) {
        unk_71a = unk_71a + 0x8000;
    }
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, (s16)unk_71a, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271be0() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            if (unk_718 == 0) {
                func_ov076_02271d20(0);
            } else {
                func_ov076_02271d20(4);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271b28() {
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0xf9, 1, 0, 0);
    func_02003ddc(&unk_514, 0x814, 0x7f, 0);
    unk_8e = unk_8e + 0x8000;
    unk_94 = unk_8e;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, unk_8e);
    s32 t = -(unk_8e / 6);
    if (t < 0) {
        t = -t;
    }
    unk_720 = t;
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, (s32)&gVec3Zero, 4, data_020c6d1c, 1);
    unk_71c = unk_64;
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_02271a3c() {
    Unk_ov076_Vec v;
    if (_ZN12Unk_02015b8c13func_02015e48Ej(&unk_334, 0) == 0xf9 &&
        _ZN12Unk_02015b8c13func_02015e74EP18Unk_02015b8c_Scene(&unk_334, this)) {
        func_ov076_02271d20(5);
    } else {
        if (_ZN12Unk_02015b8c13func_02015e48Ej(&unk_334, 0) == 0xf9 && ((Unk_ov076_02271a3c_Bits *)((u8 *)this + 0x190))->mid == 0xb) {
            *((u8 *)this + 0x511) = 0;
            *((u8 *)this + 0x510) = 0;
        }
        func_020e7530(&unk_8e, 0, unk_720);
        if (((Unk_ov076_02271a3c_Bits *)((u8 *)this + 0x190))->mid == 0x1b) {
            Unk_ov076_Vec *pv = (Unk_ov076_Vec *)&unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y = 0;
            v.z = v.z + 0x3800;
            func_ov003_02220db0(&v, 0x5000);
            func_02090330(0x16, &v, 0, 0);
            func_02003ddc(&unk_514, 0x7ed, 0x7f, 0);
        }
    }
    unk_94 = unk_8e;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, unk_8e);
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_022719e4() {
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0xfa, 0, 0, 0);
    _ZN12Unk_0201a33413func_0201a784Ev(&unk_3b0);
    unk_8e = 0;
    unk_94 = 0;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, 0);
    unk_64 += 0x4000;
    return TRUE;
}

BOOL Unk_ov076_02272174::func_ov076_0227199c() {
    unk_94 = 0;
    unk_8e = 0;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, 0);
    unk_64 += 0xeb;
    if (unk_64 > unk_71c + 0x14000) {
        ProcBase_RequestDelete(this);
    }
    return TRUE;
}

void Unk_ov076_022720e4::vfunc_84() {
    if (unk_b8) {
        (this->*unk_b8)();
        unk_b8 = *(Fn *)__ptmf_null;
    }
}

void Unk_ov076_022720e4::func_ov076_0227190c(s32 i) {
    static Fn tbl[1] = {&Unk_ov076_022720e4::func_ov076_02271864};
    unk_b8 = tbl[i];
}

extern "C" BOOL func_ov076_022718bc(u16 *p, s32 x) {
    if (x == 0) {
        return Unk_ov076_IsItem(p, 0x1559);
    }
    return FALSE;
}

void Unk_ov076_022720e4::func_ov076_02271864() {
    Unk_020660f8 *r4 = unk_3c;
    Unk_ov076_02271864_Msg m;
    m.unk_00 = 5;
    if (func_0206ed18()) {
        if (func_0206ed38() >= 0) {
            func_02099064();
        }
        m.unk_02 = 0x1559;
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &m.unk_02, 0, 5, 0);
        m.unk_00 = 6;
    }
    r4->func_02067a84(&m.unk_00, data_ov076_02272080);
}

Unk_ov076_022720e4::Unk_ov076_022720e4() {
    unk_b4 = 0xfff1;
}

Unk_ov076_022720e4::~Unk_ov076_022720e4() {}

void Unk_ov076_022720e4::vfunc_08() {
    Unk_020d7714::vfunc_08();
    unk_b8 = *(Fn *)__ptmf_null;
}

void Unk_ov076_022720e4::func_ov076_022717b4(Unk_ov076_02272174 *o) {
    vfunc_08();
    unk_b0 = o;
    unk_b0->unk_718 = 0;
    unk_ac = 0;
}

void Unk_ov076_022720e4::vfunc_78(void *a) {
    Unk_ov076_02271744_Out *out = (Unk_ov076_02271744_Out *)a;
    if (func_0206ea84(func_ov076_022718bc)) {
        unk_ac = 0;
    } else if (func_02063b8c(2) == 0) {
        unk_ac = 1;
    } else {
        unk_ac = 2;
    }
    if (unk_ac >= 0 && unk_ac < 3) {
        out->unk_04 = data_ov076_02271f44[unk_ac].b;
        out->unk_00 = (u32)data_ov076_02271f44[unk_ac].a;
    }
}

void Unk_ov076_022720e4::vfunc_14() {
    u8 *tag = data_ov076_02272080;
    u8 code = 0xff;
    u8 msg;
    u16 oa, ob, oc, v;
    s32 t0 = unk_1e;
    if (t0 == 0xfe || (t0 >= 0xf && t0 <= 0xfd)) {
        code = (u8)(func_02063b8c(2) + 0xd);
    }
    switch (unk_1e) {
    case 4:
        _ZN12Unk_020d771013func_0201517cEjjj(this, func_ov076_022718bc, 0xd, 0);
        _ZN12Unk_020d771013func_020151d0Ei(this, 0);
        func_ov076_0227190c(0);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        break;
    case 10:
    case 11:
        if (unk_1e == 10) {
            unk_b4 = 0x4a38;
        } else {
            unk_b4 = 0x1373;
        }
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_b4, 0, 5, 0);
        func_02099014(&unk_b4, 0);
        unk_b0->unk_718 = 1;
        func_0202e1cc(0x18, 1);
        code = 0xc;
        break;
    case 12:
        BOOL ok;
        if (Item_IsFurniture(&unk_b4)) {
            v = 0x4a38;
            if (Item_GetFurnitureIndex(&unk_b4) == Item_GetFurnitureIndex(&v)) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        } else {
            if (unk_b4 == 0x4a38) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
        }
        if (ok) {
            code = 0x33;
        } else {
            code = 0xfd;
        }
        break;
    case 13:
    case 14:
        if (unk_b0->unk_718 == 0) {
            if (func_02098ffc() >= 0) {
                s32 t = func_02063b8c(9);
                if (t <= 6) {
                    ItemPickSpec o0;
                    o0.set(0, 0x15);
                    ItemPick_One(&oa, &o0, 0, 0, 1, 1, 0);
                    unk_b4 = oa;
                    func_02063388(&o0);
                } else if (t == 7) {
                    ItemPickSpec o1;
                    o1.set(4, 0x15);
                    ItemPick_One(&ob, &o1, 0, 0, 1, 1, 0);
                    unk_b4 = ob;
                    func_02063388(&o1);
                } else {
                    ItemPickSpec o2;
                    o2.set(3, 0x15);
                    ItemPick_One(&oc, &o2, 0, 0, 1, 1, 0);
                    unk_b4 = oc;
                    func_02063388(&o2);
                }
                _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_b4, 0, 5, 0);
                func_02099014(&unk_b4, 0);
                func_0202e1cc(0x18, 1);
            }
            unk_b0->unk_718 = 1;
        }
        func_0203ffa4(0x42);
        break;
    }
    if (code != 0xff) {
        msg = code;
        unk_3c->func_02067a84(&msg, tag);
    }
}

void Unk_ov076_022720e4::vfunc_18() {
    s32 mode = func_02015a5c()->getResult();
    u8 *tag = data_ov076_02272080;
    u8 code = 0xff;
    switch (unk_1e) {
    case 0:
    case 1:
        if (mode == 0) {
            code = (u8)(func_02063b8c(0xef) + 0xf);
        } else {
            code = 5;
        }
        break;
    case 2:
        if (mode == 2) {
            code = 4;
        }
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (mode == 0) {
            code = 0xb;
        } else if (mode == 1) {
            code = 9;
        } else {
            code = 0xa;
        }
        break;
    }
    if (code != 0xff) {
        u8 b = code;
        unk_3c->func_02067a84(&b, tag);
    }
}

BOOL Unk_ov076_02272174::vfunc_48() {
    BOOL r = FALSE;
    if (func_0202e1cc(0x18, r) == 1) {
        return r;
    }
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov076_02272174::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)func_0201bc4c(4));
        func_ov076_02271d20(1);
        break;
    case 8:
        if (unk_718 != 0) {
            func_ov076_02271d20(4);
        } else {
            func_ov076_02271d20(3);
        }
        break;
    }
}

// Data (definition order sets the layout)
extern "C" const Unk_ov076_02271f44_Ent data_ov076_02271f44[3] = {
    {(const char *)data_ov076_02272080, 2}, {(const char *)data_ov076_02272080, 0}, {(const char *)data_ov076_02272080, 1},
};

extern "C" u8 data_ov076_02272080[16] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'o', 't', 't', 'e', 'r', 0};

extern "C" u8 data_ov076_02272090[24] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'o', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" Unk_ov076_SceneEntry data_ov076_022720a8 = {func_ov076_02271e2c, 0x68, 0x6e, 2, 0x5000, 0x5000, 0x3e800};

extern "C" u8 data_ov076_022720c0[28] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'o', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

void *data_ov076_02272070[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271cb0Ev, 0};
void *data_ov076_02272068[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271cecEv, 0};
void *data_ov076_02272038[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_0227199cEv, 0};
void *data_ov076_02272058[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271c28Ev, 0};
void *data_ov076_02272050[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271b28Ev, 0};
void *data_ov076_02272048[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271c84Ev, 0};
void *data_ov076_02272060[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271c80Ev, 0};
void *data_ov076_02272078[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271ce8Ev, 0};
void *data_ov076_02272020[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271be0Ev, 0};
void *data_ov076_02272030[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_022719e4Ev, 0};
void *data_ov076_02272040[2] = {(void *)_ZN18Unk_ov076_0227217419func_ov076_02271a3cEv, 0};

Unk_ov076_02271d20_Ent data_ov076_0227222c[6] = {
    {*(Unk_ov076_Fn *)data_ov076_02272068, *(Unk_ov076_Fn *)data_ov076_02272078},
    {*(Unk_ov076_Fn *)data_ov076_02272070, *(Unk_ov076_Fn *)data_ov076_02272048},
    {NULL, *(Unk_ov076_Fn *)data_ov076_02272060},
    {*(Unk_ov076_Fn *)data_ov076_02272058, *(Unk_ov076_Fn *)data_ov076_02272020},
    {*(Unk_ov076_Fn *)data_ov076_02272050, *(Unk_ov076_Fn *)data_ov076_02272040},
    {*(Unk_ov076_Fn *)data_ov076_02272030, *(Unk_ov076_Fn *)data_ov076_02272038},
};

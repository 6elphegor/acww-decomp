#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov078_022724ec;
class Unk_ov078_0227245c;
struct Unk_020868cc;

struct Unk_ov078_Vec {
    s32 x, y, z;
};

struct Unk_020aa3b8 {
    s32 func_020aa514();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_02065dc8_Obj1c {
    u32 v[7];
    Unk_02065dc8_Obj1c();
    ~Unk_02065dc8_Obj1c();
};

extern "C" {
void *func_0209750c();
void *func_0209865c(void *p);
void *func_02099864(void *p);
void *func_0209a108(void *p);
void func_0209a10c(void *p);
u16 *func_0209ab94(void *p);
s32 func_0209ad68(void *p);
s32 func_0209abc4(void *p);
s32 func_0209a05c(void *p);
s32 func_0209a0dc(void *p, void *q);
void func_0209abb4(void *p, s32 v);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
s32 func_0204b2d4(u16 *p);
u32 func_0204b25c(u16 *p);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_0201578c(void *p, u16 *q, s32 a, s32 b);
void func_0206338c(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02063388(Unk_0202368c_Obj *o);
void func_02062f94(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ffa4(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 func_02002bdc(void *p, void *q);
BOOL func_0201bd84(s32 v);
void func_020e7518(void *p);
BOOL func_0201bcbc(void *p, void *q);
u32 func_020e7fa8(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 data_021c3070;
extern Unk_ov078_Vec data_021c309c;
extern s16 data_02135f44[];
extern Unk_ov078_Vec data_ov078_022725f0;
extern Unk_ov078_Vec data_ov078_022725fc;
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
BOOL func_02077f40(Unk_ov078_Vec *a, s32 b);
BOOL func_0201a834(void *p);
void func_0201a900(void *out, Unk_ov078_Vec *a, Unk_ov078_Vec *b, s32 c);
void func_0203d67c(void *p);
void *func_020850e0();
Unk_020868cc *func_0208516c(void *p);
extern u8 data_ov078_02272408[];
extern u8 data_ov078_02272438[];

extern u8 data_ov078_02272598[];
extern u32 data_021c7c88[];
extern Unk_ov078_Vec data_021f4880;
}

struct Unk_020868cc {
    void func_020868dc(s32 a, s32 b);
};

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
    s32 func_02067a3c(s32 idx, void *p);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    void func_02015ab0(void *p);
    Unk_020aa3b8 *func_02015a5c();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

struct Unk_ov078_022717d8_Out {
    u32 a;
    u8 b;
};

class Unk_ov078_0227245c : public Unk_020d8b38 {
public:
    Unk_ov078_0227245c();
    virtual ~Unk_ov078_0227245c();
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
    virtual void vfunc_38();
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
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov078_022717d8_Out *out);

    void func_ov078_02271934(Unk_ov078_022724ec *owner);

    Unk_ov078_022724ec *unk_ac;
    s32 unk_b0;
    Unk_0203442c unk_b4[2];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_02053d3c {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_02053d3c();
    ~Unk_02053d3c();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov078_Vec *func_0201a978();
    BOOL func_0201a9a0(void *owner, s32 v);
    void func_0201a97c(Unk_ov078_Vec *v);
    BOOL func_0201a968();
    void func_0201a8f0();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); s32 func_0201a7e8(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
    s32 func_0201acfc();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
    void func_0201a6c0(s32 a, s32 b, s32 c, Unk_ov078_Vec *d, s32 e, s32 f, s32 g);
};
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_020323b0, 0x30);
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
    void func_020135bc();
    void func_020135c4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    BOOL func_02019790();
    s32 func_020197a8();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
    u8 unk_00[0x28];
};
struct Unk_02082014 { u8 unk_00[8]; Unk_02082014(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
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

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74();
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

    void func_0201bc28(void *p);
    void *func_0201bc4c(u32 v);

    u16 unk_ea;
    Unk_02053d3c unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_020323b0 unk_49c;
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov078_022724ec : public Unk_020d8bc8 {
public:
    Unk_ov078_022724ec() {}
    virtual ~Unk_ov078_022724ec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a8();

    BOOL func_ov078_02271a08();
    BOOL func_ov078_02271a0c();
    BOOL func_ov078_02271a48();
    BOOL func_ov078_02271a64();
    BOOL func_ov078_02271ab4();
    BOOL func_ov078_02271cfc();
    BOOL func_ov078_02271eec();
    BOOL func_ov078_02271e5c(s32 *a, s32 *b);
    void func_ov078_02272030(s32 state);
    BOOL func_ov078_02271d20();
    BOOL func_ov078_02271e20(Unk_ov078_Vec *out, Unk_ov078_Vec *p);
    BOOL func_ov078_02271f24(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
    BOOL func_ov078_02271f7c();
    BOOL func_ov078_02272000();
    BOOL func_ov078_02271ffc();
    BOOL func_ov078_0227202c();

    u8 unk_651;
    s32 unk_654;
    Unk_ov078_0227245c unk_658;
};

// ---------------------------------------------------------------------------------------------------------------------
struct Unk_ov078_02272030_Ent {
    BOOL (Unk_ov078_022724ec::*enter)();
    BOOL (Unk_ov078_022724ec::*exit)();
};
extern Unk_ov078_02272030_Ent data_ov078_02272608[];

BOOL Unk_ov078_022724ec::func_ov078_02271cfc() {
    if (unk_98 != 0) {
        if (func_ov078_02271d20()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271d20() {
    Unk_02019858 *p = &unk_564;
    Unk_0201accc *q = &unk_350;
    s32 r6 = unk_3a8.func_0201a7e8();
    BOOL r = FALSE;
    Unk_ov078_Vec v;
    if (q->func_0201a9a0(this, 1) == 0) {
        switch (r6) {
        case 3:
            p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_ov078_02271e20(&v, &data_ov078_022725fc)) {
                q->func_0201a97c(&v);
            } else {
                p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov078_02271e20(&v, &data_ov078_022725f0)) {
                q->func_0201a97c(&v);
            } else {
                p->func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (q->func_0201a968()) {
            q->func_0201a8f0();
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271e20(Unk_ov078_Vec *out, Unk_ov078_Vec *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    func_0201a900(&t, (Unk_ov078_Vec *)&unk_5c, p, unk_94);
    if (func_0201a834(&t) != 1) {
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271e5c(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov078_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)func_020e7fa8(data_021c7c88) >> 4) * 2;
        s32 g = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = g + unk_5c;
        g = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = g + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271eec() {
    Unk_ov078_Vec *pos = (Unk_ov078_Vec *)&unk_5c;
    BOOL r = FALSE;
    if (data_021c3070 != 0) {
        Unk_ov078_Vec v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        r = func_ov078_02271f24(&v, pos);
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271f24(Unk_ov078_Vec *a, Unk_ov078_Vec *b) {
    BOOL r = FALSE;
    BOOL f1 = FALSE;
    BOOL f2 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz > az - 0x1a000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz < az + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271f7c() {
    unk_651 = 0;
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_558.func_020135c4();
    unk_558.func_020135c4();
    unk_3b0.func_0201a6c0(1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271ffc() { return TRUE; }

BOOL Unk_ov078_022724ec::func_ov078_02272000() {
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov078_02272030(1);
    }
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_0227202c() { return TRUE; }

void Unk_ov078_022724ec::func_ov078_02272030(s32 state) {
    BOOL ok = TRUE;
    if (data_ov078_02272608[state].enter != NULL) {
        ok = (this->*data_ov078_02272608[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov078_022724ec::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov078_02272608[unk_654].exit != NULL) {
        result = (this->*data_ov078_02272608[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov078_022724ec::vfunc_70() { return data_ov078_02272408; }

u8 *Unk_ov078_022724ec::vfunc_6c() { return data_ov078_02272438; }

BOOL Unk_ov078_022724ec::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    func_0208516c(func_020850e0())->func_020868dc(unk_5c, unk_64);
    return TRUE;
}

BOOL Unk_ov078_022724ec::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov078_02272030(3);
    return TRUE;
}

BOOL Unk_ov078_022724ec::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov078_02271934(this);
    return TRUE;
}

s32 Unk_ov078_022724ec::vfunc_a8() { return data_020c6cf0; }

extern "C" Unk_ov078_022724ec *func_ov078_02272154() {
    return new Unk_ov078_022724ec();
}

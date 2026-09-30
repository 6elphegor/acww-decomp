#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov074_02272608;

struct Unk_ov074_02272578 {
    Unk_ov074_02272578();
    void func_02271960(Unk_ov074_02272608 *o);
    u32 pad_00[0xb8 / 4];
};

class Unk_020b895c {
public:
    u8 pad_00[0x28];
};

class Unk_ov074_022714e0 {
public:
    Unk_ov074_022714e0();
    void func_0227142c(u32 *p);
    void func_022714b8(u32 *a, void *b);
    u32 unk_00;
    Unk_020b895c unk_04;
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
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
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
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4() {}
    virtual void vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
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
    virtual BOOL vfunc_10();
    virtual s32 vfunc_a8();

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


class Unk_ov074_02272608 : public Unk_020d8bc8 {
public:
    Unk_ov074_02272608() {}
    virtual ~Unk_ov074_02272608();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a8();

    BOOL func_022720b0();

    s32 unk_654;
    Unk_ov074_02272578 unk_658;
    Unk_ov074_022714e0 unk_710;
};

struct Unk_ov074_02272130_Ent {
    BOOL (Unk_ov074_02272608::*enter)();
    BOOL (Unk_ov074_02272608::*exit)();
};

struct Unk_ov074_02271e54_V {
    s32 x, y, z, w;
};

struct Unk_ov074_02272020_V {
    s32 x, y, z;
};

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 data_021c7c88[];
extern s32 data_021f4880[];
extern u32 *data_021f482c;
extern void *data_021c3070;
extern s32 data_021c309c[];
extern s16 data_02135f44[];
extern u8 data_ov074_02272540[];
extern Unk_ov074_02272130_Ent data_ov074_0227273c[];
extern u8 data_ov074_02272724[];
extern u8 data_ov074_02272730[];

s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0201a7e8(void *p);
s32 func_0201a9a0(void *a, void *b, s32 c);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201a97c(void *a, void *b);
BOOL func_0201a968(void *a);
void func_0201a8f0(void *a);
void func_0201a900(void *out, void *pos, s32 x, s32 y);
s32 func_0201a834(void *p);
s32 func_020e7fa8(u8 *p);
void func_0204edd8(void *a, void *b);
BOOL func_02077f40(void *a, s32 b);
void func_020135c4(void *p);
void func_0201a6c0(void *p, s32 a, s32 b, s32 c, s32 *d, s32 e, s32 f, s32 g);
BOOL func_0202e360();
BOOL func_0202e3a4();
BOOL func_0202e514();

s32 func_ov074_02271e54(void *self);
s32 func_ov074_02271f54(void *self, void *out, void *x);
s32 func_ov074_02271f90(void *self, s32 *a, s32 *b);
s32 func_ov074_02272058(void *self, void *a, void *b);
}

#define F(T, o) (*(T *)((u8 *)self + (o)))
#define P(o) ((void *)((u8 *)self + (o)))

// ---------------------------------------------------------------------------------------------------------------------
extern "C" BOOL func_ov074_02271e30(void *self) {
    if (F(u32, 0x98) != 0 && func_ov074_02271e54(self) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_ov074_02271e54(void *self) {
    void *r1c = P(0x564);
    void *r4 = P(0x350);
    s32 r6 = func_0201a7e8(P(0x3a8));
    s32 r7 = 0;
    Unk_ov074_02272020_V v;

    if (func_0201a9a0(r4, self, 1) == 0) {
        switch (r6) {
        case 3:
            func_020196b4(r1c, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r7 = 1;
            break;
        case 1:
            if (func_ov074_02271f54(self, &v, data_ov074_02272730) != 0) {
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

extern "C" s32 func_ov074_02271f54(void *self, void *out, void *x) {
    Unk_ov074_02271e54_V t;
    Unk_ov074_02271e54_V *o = (Unk_ov074_02271e54_V *)out;
    s32 r = 0;
    func_0201a900(&t, P(0x5c), (s32)x, F(s16, 0x94));
    if (func_0201a834(&t) != 1) {
        o->x = t.x;
        o->y = t.y;
        o->z = t.z;
        r = 1;
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
        s16 ang = func_020e7fa8(data_021c7c88);
        s32 idx = ((u16)ang >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + F(s32, 0x5c);
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + F(s32, 0x64);
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

extern "C" s32 func_ov074_02272020(void *self) {
    void *pos = P(0x5c);
    s32 r = 0;
    Unk_ov074_02272020_V v;
    if (data_021c3070 != 0) {
        v.x = data_021c309c[0];
        v.y = data_021c309c[1];
        v.z = data_021c309c[2];
        r = func_ov074_02272058(self, &v, pos);
    }
    return r;
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

BOOL Unk_ov074_02272608::func_022720b0() {
    void *self = this;
    F(u8, 0x651) = 0;
    func_020196b4(P(0x564), 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    func_020135c4(P(0x558));
    func_020135c4(P(0x558));
    func_0201a6c0(P(0x3b0), 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
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

BOOL Unk_ov074_02272608::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov074_0227273c[unk_654].exit != NULL) {
        result = (this->*data_ov074_0227273c[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov074_02272608::vfunc_70() { return data_ov074_02272540; }

u8 *Unk_ov074_02272608::vfunc_6c() { return 0; }

BOOL Unk_ov074_02272608::vfunc_0c() {
    if (func_0202e360() == 0) {
        return FALSE;
    }
    unk_710.func_0227142c(data_021f482c);
    return TRUE;
}

BOOL Unk_ov074_02272608::vfunc_00() {
    if (func_0202e3a4() == 0) {
        return FALSE;
    }
    unk_710.func_022714b8(data_021f482c, (u8 *)this + 0xec);
    func_ov074_02272130(this, 3);
    return TRUE;
}

BOOL Unk_ov074_02272608::vfunc_04() {
    if (func_0202e514() == 0) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_02271960(this);
    return TRUE;
}

s32 Unk_ov074_02272608::vfunc_a8() { return data_020c6cf0; }

extern "C" Unk_ov074_02272608 *func_ov074_0227226c() {
    return new Unk_ov074_02272608();
}

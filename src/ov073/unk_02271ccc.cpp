#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov073_Vec {
    s32 x, y, z;
};

class Unk_ov073_022724c0;
class Unk_ov073_02272430;

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 data_021c3070;
extern Unk_ov073_Vec data_021c309c;
extern Unk_ov073_Vec data_021f4880;
extern u8 data_021c7c88[];
extern s16 data_02135f44[];
extern u8 data_ov073_022723dc[];
extern u8 data_ov073_0227240c[];
extern u8 data_ov073_022725bc[];
extern u8 data_ov073_022725c8[];

s32 func_0202e3a4(void *p);
s32 func_0202e360(void *p);
s32 func_0202e514(void *p);
void *func_020850e0();
void *func_0208516c(void *p);
void func_020868dc(void *p, s32 x, s32 z);
s32 func_0201a7e8(void *p);
s32 func_0201a9a0(void *p, void *scene, s32 v);
void func_0201a97c(void *p, void *v);
s32 func_0201a968(void *p);
void func_0201a8f0(void *p);
void func_0201a900(void *out, void *pos, void *tbl, s32 ang);
s32 func_0201a834(void *p);
void func_0201a6c0(void *self, u8 a, s32 b, s32 c, Unk_ov073_Vec *v, s32 d, s32 e, u8 f);
void func_020135c4(void *p);
void func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
s32 func_020e7fa8(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *a, void *b);
s32 func_02077f40(void *p, s32 v);
}

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    void *func_02015aac();
    u8 pad_04[0x38];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
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
    Unk_ov073_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    u32 unk_98;
    u8 pad_9c[0xea - 0x9c];
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
    u8 unk_651;
};

typedef void (Unk_ov073_02272430::*Unk_ov073_02272430_Fn)();

class Unk_ov073_02272430 : public Unk_020d8b38 {
public:
    Unk_ov073_02272430();
    virtual ~Unk_ov073_02272430();
    virtual void vfunc_08();

    void func_02271720(s32 v);

    s32 unk_ac;
    s32 unk_b0;
    Unk_ov073_02272430_Fn unk_b4;
    s32 unk_bc;
    s32 unk_c0;
    u8 unk_c4;
};

class Unk_ov073_022724c0 : public Unk_020d8bc8 {
public:
    Unk_ov073_022724c0() {}
    virtual ~Unk_ov073_022724c0();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual s32 vfunc_a8();

    BOOL func_02271ccc();
    BOOL func_02271cf0();
    BOOL func_02271df0(Unk_ov073_Vec *out, void *tbl);
    BOOL func_02271e2c(s32 *a, s32 *b);
    BOOL func_02271ebc();
    BOOL func_02271ef4(Unk_ov073_Vec *a, Unk_ov073_Vec *b);
    BOOL func_02271f4c();
    void func_02271fcc(s32 state);

    s32 unk_654;
    Unk_ov073_02272430 unk_658;
};

struct Unk_ov073_02271fcc_Ent {
    BOOL (Unk_ov073_022724c0::*enter)();
    BOOL (Unk_ov073_022724c0::*exit)();
};

extern "C" {
extern Unk_ov073_02271fcc_Ent data_ov073_022725d4[];
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov073_022724c0::func_02271ccc() {
    if (unk_98 != 0 && func_02271cf0()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov073_022724c0::func_02271cf0() {
    Unk_ov073_Vec v;
    void *q = &unk_564;
    void *s = &unk_350;
    s32 k = func_0201a7e8(&unk_3a8);
    BOOL r = FALSE;
    if (func_0201a9a0(s, this, 1) == 0) {
        switch (k) {
        case 3:
            func_020196b4(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_02271df0(&v, data_ov073_022725c8)) {
                func_0201a97c(s, &v);
            } else {
                func_020196b4(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_02271df0(&v, data_ov073_022725bc)) {
                func_0201a97c(s, &v);
            } else {
                func_020196b4(q, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else if (func_0201a968(s)) {
        func_0201a8f0(s);
    }
    return r;
}

BOOL Unk_ov073_022724c0::func_02271df0(Unk_ov073_Vec *out, void *tbl) {
    BOOL r = FALSE;
    Unk_ov073_Vec v;
    func_0201a900(&v, &unk_5c, tbl, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov073_022724c0::func_02271e2c(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov073_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = r; i < 6; i++) {
        s32 idx = ((u16)(s16)func_020e7fa8(data_021c7c88) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c.x;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_5c.z;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, 0)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov073_022724c0::func_02271ebc() {
    Unk_ov073_Vec *p = &unk_5c;
    BOOL r = FALSE;
    if (data_021c3070 != 0) {
        Unk_ov073_Vec v;
        v.x = data_021c309c.x;
        v.y = data_021c309c.y;
        v.z = data_021c309c.z;
        r = func_02271ef4(&v, p);
    }
    return r;
}

BOOL Unk_ov073_022724c0::func_02271ef4(Unk_ov073_Vec *a, Unk_ov073_Vec *b) {
    BOOL r = FALSE, f2 = FALSE, f1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
        f1 = TRUE;
    }
    if (f1) {
        if (b->z > a->z - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov073_022724c0::func_02271f4c() {
    unk_651 = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    func_020135c4(&unk_558);
    func_020135c4(&unk_558);
    func_0201a6c0(&unk_3b0, 1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
    return TRUE;
}

void Unk_ov073_022724c0::func_02271fcc(s32 state) {
    BOOL ok = TRUE;
    if (data_ov073_022725d4[state].enter != NULL) {
        ok = (this->*data_ov073_022725d4[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov073_022724c0::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov073_022725d4[unk_654].exit != NULL) {
        result = (this->*data_ov073_022725d4[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov073_022724c0::vfunc_70() { return data_ov073_022723dc; }

u8 *Unk_ov073_022724c0::vfunc_6c() { return data_ov073_0227240c; }

BOOL Unk_ov073_022724c0::vfunc_00() {
    if (!func_0202e3a4(this)) {
        return FALSE;
    }
    func_02271fcc(3);
    return TRUE;
}

BOOL Unk_ov073_022724c0::vfunc_0c() {
    if (!func_0202e360(this)) {
        return FALSE;
    }
    func_020868dc(func_0208516c(func_020850e0()), unk_5c.x, unk_5c.z);
    return TRUE;
}

BOOL Unk_ov073_022724c0::vfunc_04() {
    if (!func_0202e514(this)) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_02271720((s32)this);
    return TRUE;
}

s32 Unk_ov073_022724c0::vfunc_a8() { return data_020c6cf0; }

extern "C" Unk_ov073_022724c0 *func_ov073_022720f0() {
    return new Unk_ov073_022724c0();
}

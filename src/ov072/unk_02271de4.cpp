#include "types.h"
#include "Unk_020d8c7c.h"

// Grid (unk_0204e858.cpp): cells are 0x28 bytes
struct Unk_02071a58_Grid {
    u8 *cells;
    u32 w, h;
};

struct Unk_ov072_02272234_Ent {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov072_022715bc_Out {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov072_02271a58_Obj {
    u32 v[2];
};

class Unk_ov072_022724c8;
class Unk_ov072_02272438;

typedef BOOL (Unk_ov072_02272438::*Unk_ov072_022718d0_Fn)();
struct Unk_ov072_022718d0_Ent {
    Unk_ov072_022718d0_Fn f;
    u32 pad;
};

extern "C" {
extern u8 data_021e58a6;
extern u8 data_021f4880[];
extern u32 data_020c6d1c;
extern u8 data_ov072_022723cc[];
extern u8 data_ov072_02272414[];
extern u16 data_020c6cc8;
extern u8 data_ov072_022723c0[];
extern Unk_ov072_02272234_Ent data_ov072_02272234[];
extern u8 data_ov072_02272238[];
extern Unk_ov072_022718d0_Ent data_ov072_022723e4[];
extern u8 data_ov072_022723ec[];

BOOL func_02086244(void *p);
s32 func_02086274(void *p);
void func_02086258(void *p);
void func_02086238(void *p);
BOOL func_0202e1cc(s32 a, s32 b);
void func_0203d67c(void *p);
void func_0203ffa4(s32 a);
void func_02015a5c();
void func_020aa514();
void func_02014f38(void *p, s32 a);
s32 func_02014f74(void *p);
void func_02014ce4(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02014e60(void *p, u16 *q, s32 a, s32 b, s32 c);
void func_02015958(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_02015e48(void *p, s32 a);
void func_0201ad34(void *p, s32 a);
void func_02067a84(void *p, u8 *q, void *r);
s32 func_02098eb0(u16 *p);
void func_02099064(s32 a);
void func_02099014(u16 *p, s32 a);
u32 func_02063b8c(u32 n);
void func_0206338c(Unk_ov072_02271a58_Obj *o, s32 a, s32 b);
void func_02063388(Unk_ov072_02271a58_Obj *o);
void func_02062f94(u16 *out, Unk_ov072_02271a58_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void *func_0204da0c();
void *func_02037558(void *cell, s32 a, s32 b, s32 c);
void func_02037590(void *cell, u16 *h, s32 a, s32 b, s32 c);
BOOL func_0204e440(void *g, s32 x, s32 y, s32 z, s32 w);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *func_0204ebd8(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
BOOL func_0204bd14(void *p);
BOOL func_0204b08c(void *p);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_ov072_02271a58();
BOOL func_ov072_02271b70(u8 *cnt, s32 *pe, void *g);
BOOL func_ov072_02271ca4(s32 *a, s32 *b, void *g);
}

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
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
    void func_0201a6c0(u32 a, u32 b, u32 c, u32 *d, u32 e, u32 f, u32 g);
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
};
struct Unk_02019858 {
    u8 unk_00[0x618 - 0x564];
    Unk_02019858();
    ~Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    void func_020195c8(s32 a, s32 b, u32 c, u16 d, u16 e);
    void func_02019638(u32 a, u8 b, u32 c);
};
struct Unk_02014254 {
    u8 unk_00[0x28];
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_02014198(u8 a, u8 b);
    void func_020141b4(s32 a, s32 b, s32 c);
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
    void func_0203e468(s32 v);
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
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    s32 func_0201b9e8(s32 *a, s32 *b);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void func_0201bc28(void *p);
    s32 func_0201bc4c(u32 id);
    s32 func_0201bcbc(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

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
    void func_0202e548(s32 a, s32 b);

    Unk_02082014 unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};


// Member base (vtable 0x020d8b38 -> Unk_020d7714)
class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    void func_02015ab0(u32 a);
    void *func_02015aac();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    struct Unk_ov072_02271788_Msg *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020d8b38 : public Unk_020d7714 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};

struct Unk_ov072_02271788_Msg {
    u32 unk_00;
    u32 unk_04;
};

// Sub-object at +0x658 (vtable 0x02272438)
class Unk_ov072_02272438 : public Unk_020d8b38 {
public:
    Unk_ov072_02272438();
    virtual ~Unk_ov072_02272438();
    virtual void vfunc_14();
    virtual void vfunc_18();

    void func_ov072_022715bc(Unk_ov072_022715bc_Out *out);
    void func_ov072_02271714(Unk_ov072_022724c8 *owner);
    void func_ov072_02271788();
    void func_ov072_022718c0(s32 s);
    void func_ov072_022718d0();
    void func_ov072_02271920();

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ Unk_ov072_022724c8 *unk_b8;
};

class Unk_ov072_022724c8 : public Unk_020d8bc8 {
public:
    Unk_ov072_022724c8() {}
    virtual ~Unk_ov072_022724c8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    u32 func_0201bc70(s32 n);
    BOOL func_ov072_02271964();
    BOOL func_ov072_02271968();
    BOOL func_ov072_022719d0();
    BOOL func_ov072_02271de4();
    BOOL func_ov072_02271ed8();
    BOOL func_ov072_02271f68();
    BOOL func_ov072_02271f6c();
    void func_ov072_02271fe8(s32 s);

    s32 unk_654;
    Unk_ov072_02272438 unk_658;
    u8 unk_714;
    u8 pad_715[0x718 - 0x715];
    s32 unk_718;
    s32 unk_71c;
};

struct Unk_ov072_02271fe8_Ent {
    BOOL (Unk_ov072_022724c8::*enter)();
    BOOL (Unk_ov072_022724c8::*exit)();
};
extern "C" {
extern Unk_ov072_02271fe8_Ent data_ov072_02272598[];
s32 func_ov072_02271fd8(void *self, s32 *p);
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov072_022724c8::func_ov072_02271de4() {
    if (unk_714 != 0) {
        if (func_ov072_02271fd8(this, &unk_71c) == 2) {
            unk_564.func_02019638(1, 0, data_020c6cc8);
            return TRUE;
        }
        if (unk_71c == 1) {
            unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            return TRUE;
        }
        if (func_ov072_02271fd8(this, &unk_718) == 0) {
            switch (func_02063b8c(3)) {
            case 0:
                unk_564.func_02019638(1, 0xc, data_020c6cc8);
                break;
            case 1:
                unk_564.func_02019638(1, 0xd, data_020c6cc8);
                break;
            case 2:
                unk_564.func_02019638(1, 0xe, data_020c6cc8);
                break;
            }
            unk_718 = 0x190;
            unk_718 += func_02063b8c(0x258);
            unk_71c = 0x7a;
        }
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271ed8() {
    unk_564.func_020196b4(0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_3b0.func_0201a6c0(1, 0, 0, (u32 *)data_021f4880, 4, data_020c6d1c, 1);
    if (unk_714 != 0) {
        unk_718 = 0x190;
        unk_718 += func_02063b8c(0x258);
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271f68() {
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271f6c() {
    unk_3b0.func_0201a6c0(0, 0, 0, (u32 *)data_021f4880, 4, data_020c6d1c, 1);
    unk_564.func_020195c8(1, 0xef, 1, data_020c6cc8, 0);
    func_0201ad34(&unk_2a0, 0xef);
    return TRUE;
}

extern "C" s32 func_ov072_02271fd8(void *self, s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

void Unk_ov072_022724c8::func_ov072_02271fe8(s32 s) {
    BOOL ok = TRUE;
    if (data_ov072_02272598[s].enter != NULL) {
        ok = (this->*data_ov072_02272598[s].enter)();
    }
    if (ok) {
        unk_654 = s;
    }
}

BOOL Unk_ov072_022724c8::vfunc_68() {
    BOOL result = FALSE;
    if (data_ov072_02272598[unk_654].exit != NULL) {
        result = (this->*data_ov072_02272598[unk_654].exit)();
    }
    return result;
}

u8 *Unk_ov072_022724c8::vfunc_70() {
    return data_ov072_022723cc;
}

u8 *Unk_ov072_022724c8::vfunc_6c() {
    return data_ov072_02272414;
}

BOOL Unk_ov072_022724c8::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    u8 *const g = &data_021e58a6;
    if (func_02086244(g)) {
        if (func_02086274(g) >= 5) {
            unk_714 = 1;
        }
        func_ov072_02271fe8(1);
    } else {
        func_ov072_02271fe8(0);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

BOOL Unk_ov072_022724c8::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28(&unk_658);
    unk_658.func_ov072_02271714(this);
    return TRUE;
}

extern "C" Unk_ov072_022724c8 *func_ov072_0227211c() {
    return new Unk_ov072_022724c8();
}

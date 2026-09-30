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
    void func_ov072_02271fe8(s32 s);

    s32 unk_654;
    Unk_ov072_02272438 unk_658;
    u8 unk_714;
    u8 pad_715[0x71c - 0x715];
    s32 unk_71c;
};

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov072_022724c8::~Unk_ov072_022724c8() {}

BOOL Unk_ov072_022724c8::vfunc_48() {
    BOOL r = FALSE;
    if (unk_618.func_02014220() == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov072_022724c8::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(func_0201bc4c(4));
        func_ov072_02271fe8(2);
        break;
    case 8:
        if (func_02086244(&data_021e58a6)) {
            func_ov072_02271fe8(1);
        } else {
            func_ov072_02271fe8(0);
        }
        break;
    }
}

// Member (Unk_ov072_02272438) ctor/dtor
Unk_ov072_02272438::~Unk_ov072_02272438() {}

Unk_ov072_02272438::Unk_ov072_02272438() {}

void Unk_ov072_02272438::vfunc_18() {
    func_02015a5c();
    func_020aa514();
}

void Unk_ov072_02272438::vfunc_14() {
    u8 b;
    u16 h0;
    u16 h1;
    u16 h2;
    Unk_ov072_02271a58_Obj o;
    u8 *const g = &data_021e58a6;
    h0 = 0xfff1;
    u8 *const m = data_ov072_022723c0;
    u32 r = 0xff;
    switch (unk_1e) {
    case 0:
        func_02014f38(this, 0);
        func_ov072_022718c0(1);
        break;
    case 0xb:
        func_ov072_02271a58();
        break;
    case 0x14:
    case 0x15:
        h1 = 0x1568;
        func_02014ce4(this, &h1, 0, 5, 0);
        r = 0x16;
        break;
    case 0x16:
        if (func_02086274(g) >= 5) {
            r = 0x17;
        } else {
            r = (u8)(func_02086274(g) + 0x19);
        }
        break;
    case 0x17:
        break;
    case 0x18:
        func_0206338c(&o, 0, 0x13);
        func_02062f94(&h2, &o, 0, 0, 1, 1, 0);
        h0 = h2;
        func_02063388(&o);
        func_02014e60(this, &h0, 0, 5, 0);
        func_02099014(&h0, 0);
        r = 0x19;
        break;
    case 0x19:
        func_0203ffa4(0x44);
        break;
    }
    if (r != 0xff) {
        b = r;
        func_02067a84(unk_3c, &b, m);
    }
}

void Unk_ov072_02272438::func_ov072_022715bc(Unk_ov072_022715bc_Out *out) {
    u16 h;
    s32 t;
    h = 0x1568;
    t = func_02098eb0(&h);
    if (func_0202e1cc(0x14, 0) == 0) {
        if (func_02086244(&data_021e58a6)) {
            unk_b4 = 2;
            func_0202e1cc(0x14, 1);
        } else {
            unk_b4 = 0;
        }
    } else if (func_02086274(&data_021e58a6) >= 5) {
        unk_b4 = 3;
    } else if (t < 0) {
        if (func_02086274(&data_021e58a6) == 0) {
            unk_b4 = 4;
        } else {
            s32 v;
            unk_b4 = 5;
            v = 5 - func_02086274(&data_021e58a6);
            if (v < 0) {
                v = 0;
            }
            func_02015958(this, v, 0, 2, 0, 0);
        }
    } else {
        s32 i;
        u16 h2;
        if (func_0202e1cc(0x15, 1)) {
            unk_b4 = 6;
        } else {
            unk_b4 = 7;
        }
        for (i = 1; i <= 15; i++) {
            func_02099064(t);
            if (func_02086274(&data_021e58a6) < 5) {
                func_02086258(&data_021e58a6);
            }
            h2 = 0x1568;
            t = func_02098eb0(&h2);
            if (t < 0) {
                break;
            }
        }
        func_02015958(this, i, 1, 2, 0, 0);
    }
    s32 s = unk_b4;
    if (s >= 0 && s < 8) {
        out->unk_00 = data_ov072_02272234[s].unk_00;
        if (unk_b4 == 0) {
            out->unk_04 = func_02063b8c(5);
        } else if (unk_b4 == 3) {
            out->unk_04 = func_02063b8c(5) + 13;
        } else {
            out->unk_04 = *(u8 *)((u8 *)data_ov072_02272238 + unk_b4 * 8);
        }
    }
}

void Unk_ov072_02272438::func_ov072_02271714(Unk_ov072_022724c8 *owner) {
    vfunc_08();
    unk_b8 = owner;
    unk_b4 = 0;
}

void Unk_ov072_02272438::func_ov072_02271788() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            unk_b8->unk_564.func_020195c8(2, 0xd5, 1, data_020c6cc8, 0);
            func_0201ad34(&unk_b8->unk_2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (func_02015e48(&unk_b8->unk_334, 0) == 0xd5) {
            if (unk_b8->unk_564.func_02019790()) {
                unk_b8->unk_564.func_020196b4(3, 2, 0, 0, 0, unk_b8->func_0201bc70(4), 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (unk_b8->unk_564.func_020197a8() == 3) {
            if (unk_b8->unk_564.func_02019790()) {
                u8 b;
                func_02086238(&data_021e58a6);
                func_02014f74(this);
                func_0202e1cc(0x14, 1);
                b = func_02063b8c(5) + 5;
                func_02067a84(unk_3c, &b, data_ov072_022723c0);
                func_ov072_022718c0(0);
            }
        }
        break;
    }
}

void Unk_ov072_02272438::func_ov072_022718c0(s32 s) {
    unk_ac = s;
    unk_b0 = 0;
}

void Unk_ov072_02272438::func_ov072_022718d0() {
    if (data_ov072_022723ec[unk_ac * 12] == 0) {
        if (data_ov072_022723e4[unk_ac].f) {
            (this->*data_ov072_022723e4[unk_ac].f)();
            func_ov072_022718c0(0);
        }
    }
}

void Unk_ov072_02272438::func_ov072_02271920() {
    if (data_ov072_022723ec[unk_ac * 12] != 0) {
        if (data_ov072_022723e4[unk_ac].f) {
            (this->*data_ov072_022723e4[unk_ac].f)();
        }
    }
}

BOOL Unk_ov072_022724c8::func_ov072_02271964() {
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_02271968() {
    if (unk_71c != 0) {
        void *p = unk_658.func_02015aac();
        s32 x = unk_8e;
        if (p != NULL) {
            x = func_0201bcbc((Unk_020d77a4 *)p);
        }
        unk_618.func_020141b4(0, x, 0);
        unk_71c = 0;
    }
    if (unk_618.func_02014220() == 0) {
        func_0203d67c(this);
        func_ov072_02271fe8(3);
    }
    return TRUE;
}

BOOL Unk_ov072_022724c8::func_ov072_022719d0() {
    unk_714 = 0;
    if (func_02086244(&data_021e58a6)) {
        if (unk_71c == 0) {
            void *p = unk_658.func_02015aac();
            s32 x = unk_8e;
            if (p != NULL) {
                x = func_0201bcbc((Unk_020d77a4 *)p);
            }
            unk_618.func_020141b4(0, x, 0);
        } else {
            unk_564.func_02019638(1, 0, data_020c6cc8);
        }
    } else {
        unk_618.func_02014198(0, 0);
    }
    return TRUE;
}

static inline void *Unk_ov072_02271a58_Cell(Unk_02071a58_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return NULL;
}

extern "C" void func_ov072_02271a58() {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)func_0204da0c();
    s32 total, i;
    u8 *cnt, *t;
    s32 v[5];
    u8 arr[16];
    if (g != NULL) {
        total = 0;
        v[0] = total;
        v[1] = total;
        v[2] = total;
        v[3] = total;
        v[4] = total;
        cnt = arr;
        func_02115fb4(cnt, total, 16);
        for (v[1] = 1; v[1] < 5; v[1]++) {
            for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
                void *cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                if (cell != NULL) {
                    t = (u8 *)func_02037558(cell, 0, 0, 0);
                    if (t != NULL) {
                        for (v[3] = 0; v[3] < 16; v[3]++) {
                            for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                if (*(u16 *)t == 0xfff1) {
                                    if (func_0204e440(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                        if (func_ov072_02271ca4(&v[0], &v[2], g)) {
                                            (*cnt)++;
                                        }
                                    }
                                }
                            }
                        }
                        if (*cnt != 0) {
                            total += *cnt;
                            v[4]++;
                        }
                    }
                }
            }
        }
        if (total >= 5) {
            total = 5;
        }
        for (i = 0, t = arr; i < total; i++) {
            func_ov072_02271b70(t, &v[4], g);
            if (v[4] <= 0) {
                break;
            }
        }
    }
}

extern "C" BOOL func_ov072_02271b70(u8 *cnt, s32 *pe, void *g0) {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)g0;
    u8 *t;
    s32 k, k2;
    void *cell;
    u16 h;
    volatile s32 v[4];
    k = func_02063b8c(*pe);
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    for (v[1] = 1; v[1] < 5; v[1]++) {
        for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
            if (*cnt != 0) {
                if (k == 0) {
                    cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                    if (cell != NULL) {
                        t = (u8 *)func_02037558(cell, 0, 0, 0);
                        if (t != NULL) {
                            k2 = func_02063b8c(*cnt);
                            for (v[3] = 0; v[3] < 16; v[3]++) {
                                for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                    if (*(u16 *)t == 0xfff1) {
                                        if (func_0204e440(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                            if (func_ov072_02271ca4((s32 *)&v[0], (s32 *)&v[2], g)) {
                                                if (k2 == 0) {
                                                    h = 0x1568;
                                                    func_02037590(cell, &h, v[2], v[3], 0);
                                                    (*cnt)--;
                                                    if (*cnt == 0) {
                                                        (*pe)--;
                                                    }
                                                    return TRUE;
                                                }
                                                k2--;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                k--;
            }
        }
    }
    return FALSE;
}

static inline BOOL Unk_ov072_02271ca4_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov072_02271ca4_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

extern "C" BOOL func_ov072_02271ca4(s32 *a, s32 *b, void *g) {
    s32 x = 0, y = 0;
    s32 i;
    for (i = 1; i <= 2; i++) {
        s32 hx, hy, xx, yy;
        u16 *cell;
        func_0204edf8(&x, &y, a[0], a[1], b[0], b[1] + i);
        xx = *(volatile s32 *)&x;
        yy = *(volatile s32 *)&y;
        hx = xx >> 4;
        hy = yy >> 4;
        cell = func_0204ebd8(g, hx, hy, xx - (hx << 4), yy - (hy << 4), 0);
        if (cell == NULL) {
            goto fail;
        }
        if (Unk_ov072_02271ca4_R(cell, 0x5000, 0x5021)) {
            goto fail;
        }
        if (func_0204bd14(cell)) {
            goto fail;
        }
        if (func_0204b08c(cell)) {
            continue;
        }
        if (Unk_ov072_02271ca4_Chk(cell)) {
        fail:
            return FALSE;
        }
    }
    return TRUE;
}

#include "types.h"
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "Unk_020d8c7c.h"
#undef vfunc_14
#undef vfunc_08

struct Unk_ov068_02228a40_Vec {
    s32 x, y, z;
    Unk_ov068_02228a40_Vec() {}
    ~Unk_ov068_02228a40_Vec() {}
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov068_02228a40_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov068_022702b4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

union Unk_ov068_022702b4_Word {
    u32 v;
    Unk_ov068_022702b4_Bits b;
};

// Model/animation slot (0xb8 bytes)
struct Unk_ov004_02228a40_A {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 pad_60[0x3c];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u8 pad_a0[4];
    /* 0xa4 */ Unk_ov068_022702b4_Bits unk_a4;
    /* 0xa8 */ u8 pad_a8[0x10];
};

struct Unk_ov004_02228a40_T1 {
    u8 pad_00[0xa4];
};

struct Unk_ov004_02228a40_T2 {
    u32 unk_00;
};

class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();
    void func_ov004_02224f60();
    void func_ov004_02224f90(char *s);

    /* 0x0ec */ Unk_ov004_02228a40_A unk_ec;
    /* 0x1a4 */ Unk_ov004_02228a40_T1 unk_1a4;
    /* 0x248 */ Unk_ov004_02228a40_T2 unk_248;
    /* 0x24c */ u8 unk_24c;
    /* 0x24d */ u8 pad_24d[3];
    /* 0x250 */ u8 pad_250[0x40];
};

// Member object types, named after their constructors.
struct Unk_02055c88 {
    Unk_02055c88();
    ~Unk_02055c88();
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ Unk_ov068_022702b4_Word unk_08;
    /* 0x0c */ u8 pad_0c[0xc];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};
struct Unk_020548d0 {
    Unk_020548d0();
    ~Unk_020548d0();
    u8 pad_00[0xb8];
};
struct Unk_ov004_02224f10 {
    Unk_ov004_02224f10();
    ~Unk_ov004_02224f10();
    u8 pad_00[0xa4];
};
struct Unk_ov004_02224d60 {
    Unk_ov004_02224d60();
    ~Unk_ov004_02224d60();
    u32 unk_00;
};

class Unk_ov068_022702b4;

struct Unk_ov068_0226c298_Arg;
typedef void (*Unk_ov068_0226c298_Fn)(Unk_ov068_0226c298_Arg *);
struct Unk_ov068_0226c298_Arg {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ Unk_ov068_0226c298_Fn unk_1c;
    /* 0x20 */ u8 pad_20[0x70];
    /* 0x90 */ u8 unk_90;
};

struct Unk_ov068_0226c2a8_Inner {
    u8 pad_00;
    u8 unk_01;
};
struct Unk_ov068_0226c2a8_Owner {
    u8 pad_00[0x2c];
    void *unk_2c;
};
struct Unk_ov068_0226c2a8_Arg {
    Unk_ov068_0226c2a8_Inner *unk_00;
    Unk_ov068_0226c2a8_Owner *unk_04;
};

extern "C" {
extern Unk_ov068_022702b4 *data_ov068_022711bc;
extern void *data_021c620c;
extern char data_ov068_0227031c[];
extern char data_ov068_02270328[];
extern char data_ov068_02270338[];
extern char data_ov068_02270348[];
extern char data_ov068_02270350[];
extern char data_ov068_02270358[];
BOOL func_020565e8(void *p, u32 i);
void func_0200402c(u32 a);
void func_02004008(u32 a);
void func_02003ff4(u32 a, u32 b);
void *func_ov004_02224d8c(void *p, u32 i);
void *func_ov004_02224d7c(void *p, u32 i);
void *func_ov004_02224d6c(void *p, u32 i);
void func_ov004_02224ff4(char *s, void *a, void *b, void *c);
void func_ov004_02224f7c(void *a, void *b);
void func_02054720(void *p, void *q, s32 a, s32 b, s32 c, s32 d);
void func_02054710(void *p);
BOOL func_02054800(void *p, void *q);
void *func_020554c0(void *p);
void func_02055b00(void *p, void *a, void *b, s32 c, s32 d, s32 e);
BOOL func_02055bcc(void *p, u32 a, void *q);
void func_02055b38(void *p, void *q, s32 a, s32 b, s32 c);
void func_02055a9c(void *p, void *q);
void func_020547cc(void *p, u32 a);
void func_020547e4(void *p);
void func_020566bc(void *p);
s32 func_ov045_02258e34();
s32 func_ov051_02258e50();
void func_ov068_0226b9a8(void *self, u8 k, void *a, void *b, s32 s0, s32 s1, s32 s2, s32 s3);
s32 func_ov068_0226b9ec(void *p, u32 b, void *c);
void func_02106054(u32 p, s32 a, u8 b);
void func_02055488(void *m, void (*fn)(Unk_ov068_0226c298_Arg *), void *self);
s32 func_02057110(u32 a, const char *s);
}

class Unk_ov068_022702b4 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov068_022702b4();
    virtual ~Unk_ov068_022702b4();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    void func_ov068_0226ba68();
    BOOL func_ov068_0226ba6c();
    void func_ov068_0226ba88();
    BOOL func_ov068_0226bb04();
    void func_ov068_0226bb18();
    BOOL func_ov068_0226bb58();
    void func_ov068_0226bb74();
    BOOL func_ov068_0226bbf0(s32 s);
    void func_ov068_0226bc7c(s32 a);
    void func_ov068_0226bcf8();

    /* 0x290 */ Unk_02055c88 unk_290;
    /* 0x2b0 */ Unk_02055c88 unk_2b0;
    /* 0x2d0 */ Unk_020548d0 unk_2d0;
    /* 0x388 */ Unk_ov004_02224f10 unk_388;
    /* 0x42c */ Unk_ov004_02224d60 unk_42c;
    /* 0x430 */ u8 unk_430;
    /* 0x431 */ u8 pad_431[3];
    /* 0x434 */ Unk_020548d0 unk_434;
    /* 0x4ec */ Unk_ov004_02224f10 unk_4ec;
    /* 0x590 */ Unk_ov004_02224d60 unk_590;
    /* 0x594 */ s32 unk_594;
    /* 0x598 */ u16 unk_598;
    /* 0x59a */ s16 unk_59a;
    /* 0x59c */ s16 unk_59c;
    /* 0x59e */ s16 unk_59e;
    /* 0x5a0 */ s16 unk_5a0;
    /* 0x5a2 */ u16 pad_5a2;
};

extern "C" BOOL func_ov068_0226ba48() {
    Unk_ov068_022702b4 *g = data_ov068_022711bc;
    if (g) {
        return g->func_ov068_0226bbf0(1);
    }
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226ba68() {}

BOOL Unk_ov068_022702b4::func_ov068_0226ba6c() {
    unk_59a = 0;
    func_ov068_0226bc7c(1);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226ba88() {
    if (func_020565e8(&unk_ec.unk_9c, 0)) {
        func_0200402c(0x886);
    } else if (func_020565e8(&unk_ec.unk_9c, 0x1c)) {
        func_0200402c(0x887);
    }
    if (unk_598 % 3 == 0) {
        if (unk_59a >= 0) {
            unk_59a = unk_59a - 1;
            if (unk_59a == 0) {
                func_ov068_0226bbf0(2);
            }
        }
    }
    unk_598++;
}

BOOL Unk_ov068_022702b4::func_ov068_0226bb04() {
    func_ov068_0226bc7c(0);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226bb18() {
    if (func_020565e8(&unk_ec.unk_9c, 0)) {
        func_0200402c(0x886);
    } else if (func_020565e8(&unk_ec.unk_9c, 0x1c)) {
        func_0200402c(0x887);
    }
}

BOOL Unk_ov068_022702b4::func_ov068_0226bb58() {
    unk_59a = 0x1f;
    func_ov068_0226bc7c(0);
    return TRUE;
}

void Unk_ov068_022702b4::func_ov068_0226bb74() {
    static void (Unk_ov068_022702b4::*tbl[3])() = {
        &Unk_ov068_022702b4::func_ov068_0226bb18,
        &Unk_ov068_022702b4::func_ov068_0226ba88,
        &Unk_ov068_022702b4::func_ov068_0226ba68,
    };
    s32 s = unk_594;
    if (s < 3) {
        (this->*tbl[s])();
    }
}

BOOL Unk_ov068_022702b4::func_ov068_0226bbf0(s32 s) {
    static BOOL (Unk_ov068_022702b4::*tbl[3])() = {
        &Unk_ov068_022702b4::func_ov068_0226bb58,
        &Unk_ov068_022702b4::func_ov068_0226bb04,
        &Unk_ov068_022702b4::func_ov068_0226ba6c,
    };
    if (s < 3) {
        if ((this->*tbl[s])()) {
            unk_594 = s;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov068_022702b4::func_ov068_0226bc7c(s32 a) {
    void *p = func_ov004_02224d8c(&unk_1a4, 0);
    func_02054720(&unk_ec, p, a, 0x1000, unk_ec.unk_a4.mid, 0);
    void *r6 = func_020554c0(&unk_ec);
    void *q = func_ov004_02224d7c(&unk_1a4, 0);
    func_02055b00(&unk_290, r6, q, a, 0x1000, unk_290.unk_08.b.mid);
}

void Unk_ov068_022702b4::func_ov068_0226bcf8() {
    func_ov004_02224f90(data_ov068_0227031c);
    if (func_ov004_02224d8c(&unk_1a4, 0)) {
        if (func_02054800(&unk_ec, data_021c620c)) {
            func_02054720(&unk_ec, func_ov004_02224d8c(&unk_1a4, 0), 0, 0x1000, 0, 0);
            func_02054710(&unk_ec);
        }
    }
    if (func_ov004_02224d6c(&unk_1a4, 0)) {
        if (func_02055bcc(&unk_2b0, unk_ec.unk_5c, data_021c620c)) {
            func_02055b38(&unk_2b0, func_ov004_02224d6c(&unk_1a4, 0), 0, 0x1000, 0);
            func_02055a9c(&unk_2b0, func_020554c0(&unk_ec));
        }
    }
    if (func_ov004_02224d7c(&unk_1a4, 0)) {
        if (func_02055bcc(&unk_290, unk_ec.unk_5c, data_021c620c)) {
            func_02055b38(&unk_290, func_ov004_02224d7c(&unk_1a4, 0), 0, 0x1000, 0);
            func_02055a9c(&unk_290, func_020554c0(&unk_ec));
        }
    }
    func_ov004_02224ff4(data_ov068_02270328, &unk_2d0, &unk_388, &unk_42c);
    if (func_ov004_02224d8c(&unk_388, 0)) {
        if (func_02054800(&unk_2d0, data_021c620c)) {
            func_02054720(&unk_2d0, func_ov004_02224d8c(&unk_388, 0), 1, 0x1000, 0, 0);
            func_02054710(&unk_2d0);
        }
    }
    func_ov004_02224ff4(data_ov068_02270338, &unk_434, &unk_4ec, &unk_590);
    if (func_ov004_02224d8c(&unk_4ec, 0)) {
        if (func_02054800(&unk_434, data_021c620c)) {
            func_02054720(&unk_434, func_ov004_02224d8c(&unk_4ec, 0), 0, 0x1000, 0, 0);
            func_02054710(&unk_434);
        }
    }
}

BOOL Unk_ov068_022702b4::vfunc_0c() {
    data_ov068_022711bc = 0;
    func_ov004_02224f60();
    func_ov004_02224f7c(&unk_388, &unk_42c);
    func_ov004_02224f7c(&unk_4ec, &unk_590);
    func_02003ff4(0x884, 1);
    func_02003ff4(0x885, 1);
    return TRUE;
}

BOOL Unk_ov068_022702b4::vfunc_24() {
    func_020547cc(&unk_ec, 0);
    func_020547cc(&unk_2d0, 0);
    func_020547cc(&unk_434, 0);
    return TRUE;
}

BOOL Unk_ov068_022702b4::vfunc_18() {
    func_ov068_0226bb74();
    func_020566bc(&unk_2b0);
    *unk_2b0.unk_18 = unk_2b0.unk_08.v;
    func_020547e4(&unk_ec);
    func_020566bc(&unk_290);
    *unk_290.unk_18 = unk_290.unk_08.v;
    if (unk_430) {
        func_020547e4(&unk_2d0);
    }
    s32 t = func_ov045_02258e34();
    func_ov051_02258e50();
    s32 k = 0;
    switch (t) {
    case 0xfb:
        k = 0;
        break;
    case 0x8d:
        k = 1;
        break;
    case 0x8e:
        k = 2;
        break;
    case 0x8f:
        k = 3;
        break;
    case 0x90:
        k = 4;
        break;
    case 0x91:
        k = 5;
        break;
    }
    func_ov068_0226b9a8(this, k, &unk_434, &unk_4ec, 0, 0x1000, 0, 0);
    func_020547e4(&unk_434);
    func_02106054(unk_ec.unk_5c, unk_59c, unk_59a);
    func_02106054(unk_ec.unk_5c, unk_59e, unk_59a);
    func_02106054(unk_ec.unk_5c, unk_5a0, unk_59a);
    return TRUE;
}

extern "C" void func_ov068_0226c298(Unk_ov068_0226c298_Arg *p);
extern "C" void func_ov068_0226c2a8(Unk_ov068_0226c2a8_Arg *p);

BOOL Unk_ov068_022702b4::vfunc_00() {
    data_ov068_022711bc = this;
    func_ov068_0226bcf8();
    func_02055488(&unk_ec, func_ov068_0226c298, this);
    unk_59c = func_02057110(unk_ec.unk_5c, data_ov068_02270348);
    unk_59e = func_02057110(unk_ec.unk_5c, data_ov068_02270350);
    unk_5a0 = func_02057110(unk_ec.unk_5c, data_ov068_02270358);
    func_ov068_0226bbf0(0);
    func_02004008(0x884);
    func_02004008(0x885);
    return TRUE;
}

Unk_ov068_022702b4::~Unk_ov068_022702b4() {}

extern "C" void func_ov068_0226c298(Unk_ov068_0226c298_Arg *p) {
    p->unk_1c = (Unk_ov068_0226c298_Fn)func_ov068_0226c2a8;
    p->unk_90 = 2;
}

extern "C" void func_ov068_0226c2a8(Unk_ov068_0226c2a8_Arg *p) {
    void *o = p->unk_04->unk_2c;
    if (o) {
        func_ov068_0226b9ec(o, p->unk_00->unk_01, p);
    }
}

Unk_ov068_022702b4::Unk_ov068_022702b4() {}

extern "C" Unk_ov068_022702b4 *func_ov068_0226c2c4() {
    return new Unk_ov068_022702b4;
}

// ---- class with vtable 0x02270810 ----
class Unk_ov068_02270780 {
public:
    virtual ~Unk_ov068_02270780();
    u32 pad_04[(0xd0 - 4) / 4];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    u8 pad_ec[0x640 - 0xec];
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    virtual ~Unk_020d8bc8();
    u8 pad_640[0x18];
};

class Unk_ov068_02270810 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov068_02270810();
    u32 func_ov068_0226c334();

    /* 0x658 */ u32 unk_658;
    /* 0x65c */ Unk_ov068_02270780 unk_65c;
    /* 0x72c */ u32 unk_72c;
};

Unk_ov068_02270810::~Unk_ov068_02270810() {}

u32 Unk_ov068_02270810::func_ov068_0226c334() {
    return unk_72c;
}

extern "C" {
s32 func_0209750c();
s32 func_02062ad4(u16 *out, u32 lo, u32 n, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
}

static inline BOOL Unk_ov068_0226c340_R(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}

extern "C" u16 func_ov068_0226c340() {
    u16 arr[2];
    func_02062ad4(&arr[0], 0x1323, 0x46, 0, 0, (u32)func_0209750c(), 0, 10, 0, 1);
    if (!Unk_ov068_0226c340_R(&arr[0])) {
        func_02062ad4(&arr[1], 0x1323, 0x46, 0, 0, 0, 1, 10, 0, 1);
        arr[0] = arr[1];
    }
    return arr[0];
}

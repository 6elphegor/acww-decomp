#include "types.h"
#include "Unk_020d8c7c.h"

// Callbacks and helpers outside this range.
struct Unk_ov004_022293c0_Vec {
    s32 x, y, z;
    Unk_ov004_022293c0_Vec() {}
    ~Unk_ov004_022293c0_Vec() {}
};

struct Unk_ov004_02229344_Mtx {
    s32 v[12];
};

struct Unk_ov004_02229ae0_Pad {
    s32 v[2];
    Unk_ov004_02229ae0_Pad() {}
    ~Unk_ov004_02229ae0_Pad() {}
};

struct Unk_ov004_02229970_Xyz {
    s32 x, y, z;
};

struct Unk_ov004_02229970_Glob {
    u8 pad_00[0x68];
    s32 unk_68;
};

class Unk_020660f8;

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

// Model resource class (main). Only the members touched from this overlay range are declared.
class Unk_020dbd54 {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    u8 unk_04[0x5c - 4];
    u32 unk_5c;
    u8 pad_60[4];
    Unk_ov004_02229344_Mtx unk_64;
    u8 pad_94[0xac - 0x94];
    s32 unk_ac;
    u8 pad_b0[0xb8 - 0xb0];
};

class Unk_020660f8 {
public:
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    void func_02067978(Unk_020ddcf0 *p);
    void func_02067958();
    void func_02067a84(u8 *src, void *s);
    void *func_020679b4();
};

class Unk_ov004_02224f00 {
public:
    Unk_ov004_02224f00();
    ~Unk_ov004_02224f00();
    u8 pad_00[0xa4];
};

class Unk_ov004_02224d5c {
public:
    Unk_ov004_02224d5c();
    ~Unk_ov004_02224d5c();
    u32 unk_00;
};

class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    ~Unk_020dbe4c();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 *unk_18;
    u8 pad_1c[0x28 - 0x1c];
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
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
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e47c(Unk_020e2a30 *a);
    void func_0203e488(Unk_020e2a30 *a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov004_02229660_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// Base of the 0x0224e034 actor (vtable 0x0224d4e8, size 0x290).
class Unk_ov004_0224d4e8 : public Unk_020d9670 {
public:
    Unk_ov004_0224d4e8();
    virtual ~Unk_ov004_0224d4e8();

    void func_ov004_02224fc8(const char *a, const char *b);
    void func_ov004_02228e00(u32 i, const char *a, const char *b);
    void func_ov004_02229148();
    void func_ov004_022291d4(s32 a);

    /* 0x0ec */ u8 unk_ec[0x188 - 0xec];
    /* 0x188 */ u8 unk_188[4];
    /* 0x18c */ Unk_ov004_02229660_Bits unk_18c;
    /* 0x190 */ u8 pad_190[0x1a4 - 0x190];
    /* 0x1a4 */ u8 unk_1a4[0xa4];
    /* 0x248 */ u8 pad_248[8];
    /* 0x250 */ u8 unk_250[0x40];
};

typedef BOOL (*Unk_ov004_02229be4_Dummy)();

class Unk_ov004_0224e034 : public Unk_ov004_0224d4e8 {
public:
    Unk_ov004_0224e034();
    virtual ~Unk_ov004_0224e034();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();


    /* 0x290 */ Unk_020dbd54 unk_290[3];
    /* 0x4b8 */ Unk_ov004_02224f00 unk_4b8[3];
    /* 0x6a4 */ Unk_ov004_02224d5c unk_6a4[3];
    /* 0x6b0 */ u32 unk_6b0;
    /* 0x6b4 */ Unk_020dbe4c unk_6b4;
};

// Actor with vtable 0x0224e2b8 (size unknown): base Unk_ov004_0224d4e8 plus a model-name object at +0x290.
class Unk_ov004_0224e2b8 : public Unk_ov004_0224d4e8, public Unk_020ddcf0 {
public:
    Unk_ov004_0224e2b8();
    virtual ~Unk_ov004_0224e2b8();

    void func_ov004_02229780(const char *name, u32 flag);
    void func_ov004_022297d0();
    void func_ov004_02229830();
    void func_ov004_02229834();
    void func_ov004_02229858();
    void func_ov004_0222985c();
    void func_ov004_02229888();
    void func_ov004_0222988c();
    void func_ov004_022298b8();
    void func_ov004_022298bc();
    void func_ov004_022298e0();
    void func_ov004_02229900();
    void func_ov004_0222992c(const char *name, u32 flag);
    void func_ov004_0222993c();
    void func_ov004_02229964();
    void func_ov004_02229970();
    void func_ov004_02229a04();
    void func_ov004_02229a08();
    void func_ov004_02229a0c();
    void func_ov004_02229a10();
    void func_ov004_02229a4c();
    void func_ov004_02229a6c();
    void func_ov004_02229a90();
    void func_ov004_02229a94();
    void func_ov004_02229ab8();
    void func_ov004_02229abc();
    void func_ov004_02229ae0();
    void func_ov004_02229b40();
    void func_ov004_02229b64();
    void func_ov004_02229b84();
    void func_ov004_02229be0();
    void func_ov004_02229be4(s32 state);
    void func_ov004_02229c20();

    /* 0x2d4 */ u8 pad_2d4[0x370 - 0x2d4];
    /* 0x370 */ u8 unk_370[0x634 - 0x370];
    /* 0x634 */ s32 unk_634;
    /* 0x638 */ u8 unk_638;
    /* 0x639 */ u8 pad_639[3];
    /* 0x63c */ u32 unk_63c;
};

extern "C" {
extern Unk_ov004_0224e034 *data_ov004_02251230;
extern Unk_ov004_0224e2b8 *volatile data_ov004_02251288;
extern char data_ov004_0224e09c[];
extern char data_ov004_0224e0b4[];
extern char data_ov004_0224e0d0[];
extern char data_ov004_0224e0e8[];
extern char data_ov004_0224e104[];
extern char data_ov004_0224e11c[];
extern char data_ov004_0224e138[];
extern char data_ov004_0224e150[];
extern char data_ov004_0224e26c[];
extern const char *data_ov004_0224e178;
extern void *data_021c620c;
extern u8 data_021c3cc0;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern Unk_ov004_02229970_Glob *data_020cbb18;
extern Unk_ov004_02229344_Mtx data_021f47e0;
extern u8 data_ov004_02240290[];
extern u8 data_ov004_02240294[];
extern u8 data_021d7350[];
extern u8 data_ov004_022402a4[];

s32 func_02067918(s32 a);
void func_020e8388(Unk_ov004_02229344_Mtx *m, s32 x, s32 y, s32 z);
void func_020547e4(void *p);
void func_020566bc(void *p);
s32 func_02054800(void *p, void *q);
s32 func_02054720(void *p, u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02054710(void *p);
BOOL func_02055bcc(void *p, u32 a, void *c);
void func_02055b38(void *p, u32 a, u32 b, u32 c, u32 d);
void *func_020554c0(void *p);
void func_02055a9c(void *p, void *a);
u32 func_ov004_02224d8c(void *p, u32 i);
u32 func_ov004_02224d6c(void *p, u32 i);
void func_ov004_02224ca4(void *p, u32 v);
void func_ov004_022248a0(void *p);
void func_ov004_022248c4(void *p);
BOOL func_02056654(void *p);
BOOL func_0206ec6c();
s32 func_0206ed18();
BOOL func_0206eca4(u32 a);
s32 func_020b50e8();
u8 *func_020b50b4();
void func_020b6928(u8 *o, void *p);
BOOL func_020b6080(u8 *obj, Unk_ov004_02229970_Xyz *out, s32 *a, u8 *b);
s32 func_020b6014(u8 *o, u32 a, u32 b);
void *func_02095204(u32 x);
void *func_020951ec(s32 v);
void func_0203d704(void *p, s32 a);
void func_0203d67c(void *p);
BOOL func_0208f010();
BOOL func_02072e44(void *g);
s32 func_020aa514(void *p);
s32 func_0209e170(void *p, u32 n);
void func_0209e120(void *p, u32 n);
void func_0209e148(void *p, s32 i);
void func_0203cb80(u32 a);
void func_0203cb48(u32 a);
void func_0203cb1c(u32 a);
u32 func_0203cb38();
void func_02003fe4(u32 a);
void func_0203ca94();
}

struct Unk_ov004_02229be4_Ent {
    void (Unk_ov004_0224e2b8::*enter)();
    void (Unk_ov004_0224e2b8::*exit)();
};
extern "C" Unk_ov004_02229be4_Ent data_ov004_02251298[];

BOOL Unk_ov004_0224e034::vfunc_24() {
    return TRUE;
}

BOOL Unk_ov004_0224e034::vfunc_18() {
    func_020547e4(&unk_290[2]);
    func_020566bc(&unk_6b4);
    *unk_6b4.unk_18 = unk_6b4.unk_08;
    func_020e8388(&data_021f47e0, unk_5c[0], unk_5c[1], unk_5c[2]);
    unk_290[1].unk_64 = data_021f47e0;
    unk_290[2].unk_64 = data_021f47e0;
    func_ov004_02229148();
    return TRUE;
}

BOOL Unk_ov004_0224e034::vfunc_00() {
    data_ov004_02251230 = this;
    func_ov004_02224fc8(data_ov004_0224e09c, data_ov004_0224e0b4);
    func_ov004_02228e00(0, data_ov004_0224e0d0, data_ov004_0224e0e8);
    func_ov004_02228e00(1, data_ov004_0224e104, data_ov004_0224e11c);
    func_ov004_02228e00(2, data_ov004_0224e138, data_ov004_0224e150);
    if (func_ov004_02224d8c(&unk_4b8[2], 0)) {
        if (func_02054800(&unk_290[2], data_021c620c)) {
            func_02054720(&unk_290[2], func_ov004_02224d8c(&unk_4b8[2], 0), 1, 0x1000, 0, 0);
            func_02054710(&unk_290[2]);
            unk_290[2].unk_ac = 0;
        }
    }
    if (func_02055bcc(&unk_6b4, unk_290[1].unk_5c, data_021c620c)) {
        func_02055b38(&unk_6b4, func_ov004_02224d6c(&unk_4b8[1], 0), 1, 0x1000, 0);
        func_02055a9c(&unk_6b4, func_020554c0(&unk_290[1]));
        unk_6b4.unk_10 = 0;
    }
    func_ov004_022291d4(0);
    return TRUE;
}

Unk_ov004_0224e034::~Unk_ov004_0224e034() {}

Unk_ov004_0224e034::Unk_ov004_0224e034() {}

extern "C" Unk_ov004_0224e034 *func_ov004_02229644() {
    return new Unk_ov004_0224e034();
}

extern "C" void func_ov004_02229660() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(g->unk_1a4, 0), 1, 0x1000, g->unk_18c.mid, 0);
    }
}

extern "C" void func_ov004_022296ac() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(g->unk_1a4, 0), 3, 0x1000, g->unk_18c.mid, 0);
    }
}

extern "C" void func_ov004_022296f8() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        func_02054720(&data_ov004_02251288->unk_ec, func_ov004_02224d8c(g->unk_1a4, 0), 1, 0x1000, 0, 0);
    }
}

extern "C" BOOL func_ov004_02229738() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        g->func_ov004_02229be4(10);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0222975c() {
    Unk_ov004_0224e2b8 *g = data_ov004_02251288;
    if (g) {
        if (g->unk_638) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov004_0224e2b8::func_ov004_02229780(const char *name, u32 flag) {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    vfunc_s08();
    func_020a710c(name);
    unk_1e = flag;
    p->func_02067978(this);
    p->unk_08 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_022297d0() {
    if (func_0206ec6c()) {
        Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
        u8 c = 0x10;
        if (!func_0206ed18()) {
            c = 0x18;
        }
        p->func_02067a84(&c, data_ov004_0224e26c);
        p->unk_08 = 1;
        if (func_020b50e8() == 6) {
            func_ov004_02229be4(0xc);
        } else {
            func_ov004_02229be4(4);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229830() {}

void Unk_ov004_0224e2b8::func_ov004_02229834() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 5) {
        func_0206eca4(0x30);
        func_ov004_02229be4(0xe);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229858() {}

void Unk_ov004_0224e2b8::func_ov004_0222985c() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        p->func_02067958();
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229888() {}

void Unk_ov004_0224e2b8::func_ov004_0222988c() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        p->func_02067958();
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_022298b8() {}

void Unk_ov004_0224e2b8::func_ov004_022298bc() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02229be4(0xb);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_022298e0() {
    func_ov004_02229780(data_ov004_0224e26c, 0xe);
    unk_638 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229900() {
    Unk_020660f8 *p = (Unk_020660f8 *)func_02067918(0);
    if (p->unk_04 == 0) {
        p->func_02067958();
        unk_638 = 0;
        func_ov004_02229be4(7);
    }
}

void Unk_ov004_0224e2b8::func_ov004_0222992c(const char *name, u32 flag) {
    func_ov004_02229780(data_ov004_0224e26c, 0x22);
}

void Unk_ov004_0224e2b8::func_ov004_0222993c() {
    BOOL f;
    if (data_021c3cc0 == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        func_ov004_02229be4(9);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229964() {
    unk_638 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229970() {
    Unk_ov004_02229970_Xyz out;
    s32 a;
    u8 b;
    BOOL f;
    if (data_021c3cc0 == 2) {
        f = TRUE;
    } else {
        f = FALSE;
    }
    if (f) {
        func_020b6928(func_020b50b4(), unk_370);
        if (func_020b50e8() == 6) {
            if (data_020cbb18->unk_68 != 4) {
                return;
            }
        }
        if (func_0208f010()) {
            if (data_021ef5d0 && data_021ef5cc) {
                f = TRUE;
            } else {
                f = FALSE;
            }
            if (f) {
                if (func_020b6080(func_020b50b4(), &out, &a, &b)) {
                    if (a == 0xd) {
                        func_ov004_02229be4(0xa);
                    }
                }
            }
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a04() {}
void Unk_ov004_0224e2b8::func_ov004_02229a08() {}
void Unk_ov004_0224e2b8::func_ov004_02229a0c() {}

void Unk_ov004_0224e2b8::func_ov004_02229a10() {
    if (func_02056654(unk_188)) {
        func_0203e47c(this);
        func_0203d67c(this);
        func_ov004_02229be4(6);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a4c() {
    func_ov004_022248a0(this);
    func_ov004_02224ca4(unk_250, 0x4d5);
}

void Unk_ov004_0224e2b8::func_ov004_02229a6c() {
    if (unk_3c) {
        if (!unk_3c->unk_04) {
            func_ov004_02229be4(5);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229a90() {}

void Unk_ov004_0224e2b8::func_ov004_02229a94() {
    if (unk_3c) {
        if (!unk_3c->unk_04) {
            func_ov004_02229be4(5);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229ab8() {}

void Unk_ov004_0224e2b8::func_ov004_02229abc() {
    if (unk_3c) {
        if (unk_3c->unk_04) {
            func_ov004_02229be4(3);
        }
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229ae0() {
    Unk_ov004_02229ae0_Pad pad;
    func_0203e488(this);
    func_020a710c(data_ov004_0224e178);
    if (func_02072e44(data_020cbb18)) {
        unk_1e = 0x1d;
    } else {
        unk_1e = 0xe;
    }
    unk_3c->unk_08 = 1;
}

void Unk_ov004_0224e2b8::func_ov004_02229b40() {
    if (func_02056654(unk_188)) {
        func_ov004_02229be4(2);
    }
}

void Unk_ov004_0224e2b8::func_ov004_02229b64() {
    func_ov004_022248c4(this);
    func_ov004_02224ca4(unk_250, 0x4d4);
}

void Unk_ov004_0224e2b8::func_ov004_02229b84() {
    s32 r5 = func_020b6014(func_020b50b4(), 0, 0);
    void *r0 = func_02095204(4);
    if (r5 && r0 && (void *)r5 == r0) {
        if (vfunc_48(func_020951ec(4))) {
            func_0203d704(this, 0);
            return;
        }
    }
    func_020b6928(func_020b50b4(), unk_370);
}

void Unk_ov004_0224e2b8::func_ov004_02229be0() {}

void Unk_ov004_0224e2b8::func_ov004_02229be4(s32 state) {
    if (data_ov004_02251298[state].enter) {
        (this->*data_ov004_02251298[state].enter)();
    }
    unk_634 = state;
}

void Unk_ov004_0224e2b8::func_ov004_02229c20() {
    Unk_020660f8 *p = unk_3c;
    s32 t = func_020aa514(p->func_020679b4());
    u32 r = 0;
    switch (unk_1e) {
    case 0xe:
    case 0x1f:
        if (func_020b50e8() == 6) {
            r = data_ov004_02240294[t];
        } else {
            r = data_ov004_02240290[t];
        }
        if (r == 0x17) {
            if (func_0209e170(data_021d7350, 0x13) && func_0209e170(data_021d7350, 0x14)) {
                r = 0x42;
            } else if (!func_0209e170(data_021d7350, 0x13) && func_0209e170(data_021d7350, 0x14)) {
                r = 0x41;
            } else if (func_0209e170(data_021d7350, 0x13) && !func_0209e170(data_021d7350, 0x14)) {
                r = 0x40;
            } else if (!func_0209e170(data_021d7350, 0x13) && !func_0209e170(data_021d7350, 0x14)) {
                r = 0x3f;
            }
        }
        break;
    case 0x14:
        switch (t) {
        case 0:
            func_0203cb80(r);
            break;
        case 1:
            func_0203cb80(1);
            break;
        }
        break;
    case 0x17:
        switch (t) {
        case 0:
            func_0209e120(data_021d7350, 0x13);
            break;
        case 1:
            func_0209e148(data_021d7350, 0x13);
            break;
        }
        break;
    case 0x1a:
        switch (t) {
        case 0:
            func_0209e120(data_021d7350, 0x14);
            break;
        case 1:
            func_0209e148(data_021d7350, 0x14);
            break;
        }
        break;
    case 0x1b:
        switch (t) {
        case 0:
            func_0203cb48(1);
            func_02003fe4(r);
            r = 0x1c;
            break;
        case 1:
            func_0203cb48(r);
            func_02003fe4(1);
            r = 0x1e;
            break;
        }
        break;
    case 0x11:
        unk_63c = func_0203cb38();
        switch (t) {
        case 0:
            func_0203cb1c(r);
            break;
        case 1:
            func_0203cb1c(1);
            break;
        case 2:
            func_0203cb1c(2);
            break;
        }
        break;
    case 0x2a:
    case 0x2b:
    case 0x2c:
        if (t == 1) {
            func_0203cb1c(unk_63c);
        }
        break;
    }
    if (func_020b50e8() != 6) {
        func_0203ca94();
    }
    if (r) {
        u8 b = r;
        p->func_02067a84(&b, data_ov004_022402a4);
    }
}

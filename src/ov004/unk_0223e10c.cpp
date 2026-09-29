#include "types.h"
#include "Unk_020d8c7c.h"

// ---- sub-object declarations (defined in src/main/unk_0208d154.cpp etc.) ----
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e0ff0 : public Unk_020e0db4 {
public:
    Unk_020e0ff0();
    virtual ~Unk_020e0ff0();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d2d8();
    BOOL func_0208d2f0();
    void func_0208d308(void *p);
    void func_0208d314(s32 a, s32 b);
    void func_0208d31c();
    void func_0208d324(s32 a);

    /* 0x0c */ u8 unk_0c[0x74];
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_0208d580(s32 idx);

    /* 0x0c */ u8 unk_0c[0x40];
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    ~Unk_020e1c64();

    /* 0x00 */ u8 unk_00[0x1c];
};

struct Unk_ov004_0223e10c_Pair {
    s32 a, b;
};

struct Unk_ov004_0223e2f4_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

struct Unk_ov004_0223e2f4_Pad {
    u16 unk_00;
    u16 unk_02;
};

extern "C" {
extern u8 data_021c3cc0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u8 data_021ed2c0[];
extern Unk_ov004_0223e2f4_Pad data_021f47d8;
extern Unk_ov004_0223e2f4_G *data_020cbb18;
extern Unk_ov004_0223e10c_Pair data_ov004_0224480c[];
extern Unk_ov004_0223e10c_Pair data_ov004_022447e4;

s32 func_020978c8(void *, s32);
u8 *func_020951ec(u32 id);
void *func_02097868(void *a, s32 i);
s32 func_0209888c(...);
void func_020940d0(s32 a, void *b);
void func_0203a124(s32 *a, s32 *b, s32 *c);
void func_02094018(void *p);
void func_02094030(void *);
s32 *func_020947f0(u32);
void func_02094b0c(void *v, s32 a, s32 b);
void func_02094ae8(s32 a, u32 b);
BOOL func_020a0868(void);
void func_020a0954(void);
BOOL func_020e7500(void *p);
BOOL func_0208f010();
BOOL func_0208f024();
void func_0208f038(void);
void func_0208f044(void);
u8 *func_020b50b4();
s32 func_020b6080(u8 *obj, void *out, s32 *a, u8 *b);
void func_020b3558(void *o, u8 *p, u32 x);
void func_0209d498(void *p);
s32 func_0209d3d0(void *a, void *b, s32 n);
s32 func_0209e170(void *p, s32 i);
s32 func_02098a48(void *p);
s32 func_0206e838(void);
s32 func_0206e7f8(void);
s32 func_0206e820(void);
s32 func_0206e82c(void);
void func_0203d984(void);
void func_0203d990(void);
u16 *func_020acfa8(void *p, u32 a, void *b);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
void func_ov004_02224ad8(u32 a, u32 b);
BOOL func_ov004_0222975c();
BOOL func_ov004_02229738();
void func_ov004_0223f43c(void *self);
s32 func_ov004_0223f210(u16 *p);
void func_ov004_0223f018(void *self, u16 *p, s32 t);
u16 *func_ov004_0223ed40(void);
}

class Unk_ov004_0224f20c;
typedef void (Unk_ov004_0224f20c::*Unk_ov004_0224f20c_Fn)();
struct Unk_ov004_0223e6bc_Ent {
    Unk_ov004_0224f20c_Fn enter;
    Unk_ov004_0224f20c_Fn exit;
};
extern Unk_ov004_0223e6bc_Ent data_ov004_02258854[];
extern Unk_ov004_0223e6bc_Ent data_ov004_0225885c[];

static inline BOOL Unk_ov004_0223e2f4_IsMode2() {
    if (data_021c3cc0 == 2) {
        return TRUE;
    }
    return FALSE;
}

class Unk_ov004_0224f20c : public Unk_020d8c7c {
public:
    Unk_ov004_0224f20c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_ov004_0224f20c();

    void func_ov004_0223e014();
    void func_ov004_0223e10c();
    void func_ov004_0223e1e0();
    void func_ov004_0223e1e4();
    void func_ov004_0223e218();
    void func_ov004_0223e234();
    void func_ov004_0223e23c();
    void func_ov004_0223e260();
    void func_ov004_0223e280();
    void func_ov004_0223e2a4();
    void func_ov004_0223e2f4();
    void func_ov004_0223e554();
    void func_ov004_0223e580();
    void func_ov004_0223e638();
    void func_ov004_0223e664();
    void func_ov004_0223e690();
    void func_ov004_0223e6bc(s32 state);

    /* 0x050 */ Unk_020e100c unk_50;
    /* 0x09c */ Unk_020e0ff0 unk_9c[5];
    /* 0x31c */ u8 unk_31c;
    /* 0x31d */ u8 unk_31d;
    /* 0x31e */ u8 pad_31e[2];
    /* 0x320 */ s32 unk_320;
    /* 0x324 */ u16 unk_324;
    /* 0x326 */ u8 pad_326[2];
    /* 0x328 */ s32 unk_328;
    /* 0x32c */ s32 unk_32c;
    /* 0x330 */ u8 pad_330[8];
    /* 0x338 */ Unk_020e1c64 unk_338;
};

void Unk_ov004_0224f20c::func_ov004_0223e10c() {
    u8 i;
    for (i = 0; i < 4; i++) {
        if (func_020978c8(data_021d735c, i) != 0) {
            u8 *a = func_020951ec(i);
            if (a != 0) {
                s32 x, y;
                s32 v[3];
                s32 *pv = (s32 *)(a + 0x5c);
                v[0] = *(s32 *)(a + 0x5c);
                v[1] = pv[1];
                v[2] = pv[2];
                Unk_020e1c64 o;
                func_020940d0(func_0209888c(func_02097868(data_021d735c, i)), &o);
                func_0203a124(&x, &y, v);
                x += data_ov004_0224480c[i].a;
                y += data_ov004_0224480c[i].b;
                Unk_020e0ff0 *e = &unk_9c[i];
                e->func_0208d314(x, y);
                e->func_0208d308(&o);
                e->vfunc_0c();
            }
        }
    }
    unk_9c[4].func_0208d314(data_ov004_022447e4.a, data_ov004_022447e4.b);
    unk_9c[4].func_0208d308(&unk_338);
    Unk_020e0ff0 *e4 = &unk_9c[4];
    e4->vfunc_0c();
}

void Unk_ov004_0224f20c::func_ov004_0223e1e0() {
}

void Unk_ov004_0224f20c::func_ov004_0223e1e4() {
    s32 v[3];
    s32 *p = func_020947f0(4);
    v[0] = p[0];
    v[1] = p[1];
    v[2] = p[2];
    v[2] = v[2] + 0x6000;
    func_02094b0c(v, 0x2b8, 4);
}

static inline BOOL Unk_ov004_0223e2f4_Both47() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_0223e580_BothEf() {
    if (data_021ef5d0 != 0 && data_021ef5cc != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224f20c::func_ov004_0223e2f4() {
    Unk_ov004_0223e2f4_G *g;
    u8 st;
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    g = data_020cbb18;
    if (g->unk_68 != 4) {
        func_ov004_0223e6bc(3);
        return;
    }
    if (func_ov004_0222975c()) {
        func_ov004_0223e6bc(0);
        return;
    }
    if (Unk_ov004_0223e2f4_Both47()) {
        func_0208f038();
        func_ov004_0223e6bc(1);
        return;
    }
    if (unk_31d != 0) {
        u16 k = data_021f47d8.unk_02;
        if (k & 0x80) {
            unk_31d = 0;
            goto L500;
        }
        {
            u32 up = k & 0x10;
            if (up == 0 && (k & 0x20) == 0) {
                goto L500;
            }
            st = unk_31c;
            if (up != 0) {
                st = 1;
            } else if (k & 0x20) {
                st = 0;
            }
        }
        if (func_020951ec(st) == 0) {
            goto L500;
        }
        unk_31d = 0;
        unk_31c = st;
        goto L500;
    }
    st = unk_31c;
    switch (st) {
    case 0: {
        u16 k = data_021f47d8.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!func_020951ec(st)) {
                st = st + 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 1: {
        u16 k = data_021f47d8.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x80) {
            st = st + 2;
            if (!func_020951ec(st)) {
                st = st - 1;
            }
        } else if (k & 0x40) {
            unk_31d = 1;
        }
        break;
    }
    case 2: {
        u16 k = data_021f47d8.unk_02;
        if (k & 0x10) {
            st = st + 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!func_020951ec(st)) {
                st = st + 1;
                if (!func_020951ec(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    case 3: {
        u16 k = data_021f47d8.unk_02;
        if (k & 0x20) {
            st = st - 1;
        } else if (k & 0x40) {
            st = st - 2;
            if (!func_020951ec(st)) {
                st = st - 1;
                if (!func_020951ec(st)) {
                    unk_31d = 1;
                }
            }
        }
        break;
    }
    }
    if (func_020951ec(st) != 0) {
        unk_31c = st;
    }
L500:
    {
        u16 k = data_021f47d8.unk_02;
        if ((k & 8) || (k & 1)) {
            if (unk_31d != 0) {
                func_ov004_02229738();
            } else {
                g->unk_68 = unk_31c;
                func_ov004_0223e6bc(3);
            }
        }
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e580() {
    u8 c;
    s32 a;
    s32 out[4];
    if (!Unk_ov004_0223e2f4_IsMode2()) {
        return;
    }
    if (func_0208f010() && Unk_ov004_0223e580_BothEf()) {
        if (func_020b6080(func_020b50b4(), out, &a, &c) && a == 1) {
            data_020cbb18->unk_68 = c;
            unk_31c = c;
            func_ov004_0223e6bc(3);
            return;
        }
    }
    if (func_ov004_0222975c()) {
        func_ov004_0223e6bc(0);
    } else if (data_021f47d8.unk_02 & 0xff3) {
        func_0208f044();
        func_ov004_0223e6bc(2);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e218() {
    if (func_020a0868()) {
        func_ov004_0223e6bc(6);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e234() {
    func_020a0954();
}

void Unk_ov004_0224f20c::func_ov004_0223e23c() {
    if (!func_020e7500(&unk_324)) {
        func_ov004_0223e6bc(5);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e260() {
    func_ov004_0223f43c(this);
    func_02094ae8(0, 4);
    unk_324 = 5;
}

void Unk_ov004_0224f20c::func_ov004_0223e280() {
    if (!func_020e7500(&unk_324)) {
        func_ov004_0223e6bc(4);
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e2a4() {
    BOOL r = FALSE;
    u8 v = unk_31c;
    if (v == 0 || v == 2) {
        r = TRUE;
    }
    func_ov004_02224ad8(r, 1);
    unk_50.func_0208d580(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2d8();
    }
    unk_324 = 0x19;
}

void Unk_ov004_0224f20c::func_ov004_0223e554() {
    unk_50.func_0208d580(7);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2f0();
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e638() {
    unk_50.func_0208d580(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2f0();
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e664() {
    if (!func_ov004_0222975c()) {
        if (func_0208f024()) {
            func_ov004_0223e6bc(2);
        } else {
            func_ov004_0223e6bc(1);
        }
    }
}

void Unk_ov004_0224f20c::func_ov004_0223e690() {
    unk_50.func_0208d580(0);
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d2d8();
    }
}

BOOL Unk_ov004_0224f20c::vfunc_24() {
    unk_50.vfunc_08();
    u8 i;
    for (i = 0; i < 5; i++) {
        Unk_020e0ff0 *e = &unk_9c[i];
        e->vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov004_0224f20c::vfunc_18() {
    func_ov004_0223e014();
    func_ov004_0223e10c();
    if (*(u32 *)((u8 *)data_ov004_0225885c + unk_320 * 16) != 0) {
        (this->*data_ov004_02258854[unk_320].exit)();
    }
    return TRUE;
}

void Unk_ov004_0224f20c::func_ov004_0223e6bc(s32 state) {
    if (data_ov004_02258854[state].enter) {
        (this->*data_ov004_02258854[state].enter)();
    }
    unk_320 = state;
}

BOOL Unk_ov004_0224f20c::vfunc_0c() {
    func_0203d984();
    u8 i;
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d31c();
    }
    if (func_0206e838()) {
        s32 l[2];
        func_0206e7f8();
        l[0] = 0;
        l[1] = 0;
        func_0209d498(l);
        if (func_0209d3d0(&unk_328, l, 0x3f) == -1) {
            func_0206e820();
        } else {
            func_0206e82c();
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224f20c::vfunc_00() {
    u8 *g;
    u8 c;
    u8 i;
    func_0203d990();
    g = data_021d7350;
    for (i = 0; i < 4; i++) {
        void *o = func_02097868(g + 0xc, i);
        if (o != 0 && func_02098a48(o) != 0) {
            unk_31c = i;
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        unk_9c[i].func_0208d324(i);
    }
    c = 0x81;
    func_020b3558(&unk_338, &c, 0);
    if (func_0209e170(g, 0) == 0) {
        func_ov004_0223e6bc(0);
    } else if (func_0208f024()) {
        func_ov004_0223e6bc(2);
    } else {
        func_ov004_0223e6bc(1);
    }
    unk_31d = 0;
    func_0209d498(&unk_328);
    return TRUE;
}

Unk_ov004_0224f20c::~Unk_ov004_0224f20c() {
}

Unk_ov004_0224f20c::Unk_ov004_0224f20c() : unk_50(1), unk_328(0), unk_32c(0) {
}

extern "C" Unk_ov004_0224f20c *func_ov004_0223e9a0() {
    return new Unk_ov004_0224f20c;
}

static inline BOOL Unk_ov004_0223e9d8_Chk(u16 *p, u16 *q) {
    BOOL r = FALSE;
    if (func_0204b2d4(p)) {
        s32 a, b;
        *q = 0xfff1;
        a = func_0204b25c(p);
        b = func_0204b25c(q);
        if (a == b) {
            r = TRUE;
        }
    } else if (*p == 0xfff1) {
        r = TRUE;
    }
    return r;
}

class Unk_ov004_0223e9bc {
public:
    BOOL func_ov004_0223e9bc();
    u16 *func_ov004_0223e9c0();
    BOOL func_ov004_0223e9c8();
    void func_ov004_0223e9d8();
};

BOOL Unk_ov004_0223e9bc::func_ov004_0223e9bc() {
    return TRUE;
}

u16 *Unk_ov004_0223e9bc::func_ov004_0223e9c0() {
    return func_ov004_0223ed40();
}

BOOL Unk_ov004_0223e9bc::func_ov004_0223e9c8() {
    func_ov004_0223e9d8();
    return TRUE;
}

void Unk_ov004_0223e9bc::func_ov004_0223e9d8() {
    u32 i = 0;
    s32 z1 = 0, z2 = 0, z3 = 0, z4 = 0;
    u16 buf[3];
    for (; i < 3; i++) {
        u16 *r4;
        BOOL f;
        buf[0] = 0xfff1;
        r4 = func_020acfa8(data_021ed2c0, i, buf);
        if (func_0204b2d4(r4)) {
            s32 a, b;
            buf[1] = 0xfff1;
            a = func_0204b25c(r4);
            b = func_0204b25c(&buf[1]);
            f = (a == b) ? 1 : z1;
        } else {
            f = (*r4 == 0xfff1) ? 1 : z2;
        }
        if (!f) {
            if (func_0204b2d4(buf)) {
                s32 a, b;
                buf[2] = 0xfff1;
                a = func_0204b25c(buf);
                b = func_0204b25c(&buf[2]);
                f = (a == b) ? 1 : z3;
            } else {
                f = (buf[0] == 0xfff1) ? 1 : z4;
            }
            if (!f) {
                func_ov004_0223f018(this, r4, func_ov004_0223f210(buf));
            }
        }
    }
}

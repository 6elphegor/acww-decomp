#include "types.h"
#include "text/Unk_02050288.h"

// ---- Classes defined in other files (declarations only) ----

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 func_020a7a0c(Unk_020e2a78 *other);
    u8 func_020a7a28(u8 *str);
    u8 func_020a7a64(u8 *str);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// 0x2c bytes (ctor func_020b4154, dtor func_020b413c)
class Unk_020e3efc : public Unk_020e2a78 {
public:
    Unk_020e3efc();
    virtual ~Unk_020e3efc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[6];
};

class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();
};

class Unk_020e45ec {
public:
    Unk_020e45ec();
    BOOL func_020b8a84(u32 a, u32 b, u32 c, u8 d);

    u32 unk_00[7];
};

// ---- Classes of this file ----

class Unk_020d909c : public Unk_020e2a78 {
public:
    Unk_020d909c();
    virtual ~Unk_020d909c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x40];
};

class Unk_020d9084 : public Unk_020e2a78 {
public:
    Unk_020d9084();
    virtual ~Unk_020d9084();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x80];
};

// Members of Unk_020d905c, all derived from Unk_020e2a78
class Unk_020d906c : public Unk_020e2a78 {
public:
    Unk_020d906c();
    virtual ~Unk_020d906c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x100];
};

struct Unk_020dbd34_Mtx {
    s32 m[12];
};

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    ~Unk_020dbd34();

    u8 pad_00[0x5c];
    /* 0x5c */ u8 *unk_5c;
    /* 0x60 */ u32 pad_60;
    /* 0x64 */ Unk_020dbd34_Mtx unk_64;
    u8 pad_94[8];
};

extern "C" {
void _ZN12Unk_020dbe3413func_0205553cEPi(void *self, void *p);
void func_020af330();
s32 func_02004064();
void func_02001504(u32 v);
void func_020014cc(u32 v);
void func_02001574(u32 v);
void func_0200153c(u32 v);
u32 func_02001510();
u32 func_020014d8();
u32 func_02001580();
u32 func_02001548();
char *func_020a6b9c(char *p, u32 n);
u32 func_020a7f94(Unk_020e2a78 *obj);
u8 *func_020382c8();
void func_020b4154(void *);
void func_020b413c(void *);
void func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020e2a90 *func_020a8008(void *a, s32 b, s32 c);
void func_020a7fd8(Unk_020e2a90 *obj);
void *func_020e8594(u32 size);
void func_020e8558(void *p);
void func_02001ea0(void *src, void *dst, s32 w, s32 h);
void MI_CpuFill8(void *p, u32 v, u32 n);
u32 _ZN12Unk_0205712013func_0205713cEv(void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void G3i_PerspectiveW_(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, void *h);
void G3i_LookAt_(void *a, void *b, void *c, s32 d, void *e);
s32 func_01ffcb0c(s32 a, s32 b);
void _ZN12Unk_020dbd3413func_02054b14Ev(void *p);
void _ZN12Unk_020dbd3413func_02054c2cEPvS0_(void *p, u32 a, void *b);
void func_020b3558(void *o, u8 *p, u32 x);
void func_020639e8(void *buf, void *fmt, u32 a);
void func_020382f4(void *a, void *b);
void func_0212a360(void *a, void *b);
s32 func_020ea738();
s32 func_020eaf18();
}

extern u8 data_020d9010[];
extern u8 data_021c2204;
extern u32 data_021c2208;
extern u8 data_021c2240[];
extern Unk_020dbd34_Mtx data_021f47e0;
extern u8 data_020e416c;
extern u8 data_021c4910[];

struct Unk_020d905c_Ptr {
    /* 0x00 */ u32 pad[3];
    /* 0x0c */ u16 unk_0c;
};
extern Unk_020d905c_Ptr *data_021eda68;

struct Unk_02037ea0_V {
    s32 x, y, z;
};

struct Unk_02037ea0_G {
    u8 pad[0x40];
    Unk_02037ea0_V a, c, b;
};
extern Unk_02037ea0_V data_021f4880;
extern Unk_02037ea0_G data_027e02c8;
extern u8 data_027e00d0[];
extern u8 data_027e0114[];
extern u32 data_027e0148[];

struct Unk_02037b90_S {
    u8 a, b, c;
};

class Unk_020d905c {
public:
    Unk_020d905c();
    virtual ~Unk_020d905c();

    void func_02037ac8();
    void func_02037b10();
    void func_02037b70();
    void func_02037b90(u32 a, u32 b);
    void func_02037c40(void *buf, s32 x);
    void func_02037ce4();
    void func_02037d94();
    void func_02037dc8(s32 i);
    void func_02037e0c();
    void func_02037e44();
    void func_02037ea0();
    void func_02037f70(u8 a);
    void func_02038038();
    void func_02038058();

    void func_020376f4();
    void func_0203771c();
    void func_02037734();
    void func_020377c4();
    void func_020377f4();
    void func_02037810();
    void func_02037840();
    void func_020378f0();
    void func_02037924();
    void func_02037954();
    void func_02037978();
    void func_020379b0();
    void func_020379c8();
    void func_02037a04();
    void func_02037ab4();
    void func_02037a1c();
    void func_02037a20();
    void func_02037a28();

    /* 0x004 */ Unk_020dbd34 unk_04;
    /* 0x0a0 */ Unk_020e45ec unk_a0;
    /* 0x0bc */ s32 unk_bc;
    /* 0x0c0 */ s32 unk_c0;
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8;
    /* 0x0c9 */ u8 unk_c9;
    /* 0x0ca */ u8 unk_ca;
    /* 0x0cb */ u8 unk_cb;
    /* 0x0cc */ u16 unk_cc;
    /* 0x0ce */ u16 unk_ce;
    /* 0x0d0 */ u32 unk_d0;
    /* 0x0d4 */ u32 unk_d4;
    /* 0x0d8 */ u32 unk_d8;
    /* 0x0dc */ u32 unk_dc;
    /* 0x0e0 */ s32 unk_e0;
    /* 0x0e4 */ s32 unk_e4;
    /* 0x0e8 */ Unk_020d906c unk_e8;
    /* 0x1fc */ Unk_020d909c unk_1fc;
    /* 0x250 */ Unk_020d9084 unk_250;
    /* 0x2e4 */ u8 unk_2e4[0x800];
};

extern Unk_020d905c data_021c251c;
extern Unk_020d906c data_021c22f4;
extern Unk_020d909c data_021c22a0;
extern Unk_020d906c data_021c2408;

extern "C" {
s32 func_020b50e8(void);
void func_02115468(s32);
s32 func_020eaf18(void);
s32 _ZN12Unk_020cbb1813func_0207235cEv(void *);
s32 func_020ea748(void);
u32 _ZN12Unk_020cbb1813func_02072374Ev(void *);
void _ZN12Unk_020cbb1813func_02072380Ej(void *, s32);
void func_020382fc(void);
void func_0204fe98(void);
void func_02073154(void);
s32 _ZN12Unk_020cbb1813func_0207238cEv(void *);
void _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *, void *);
s32 _s32_div_f(s32, s32);
}
extern void *data_020cbb18;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];

u32 data_021c2208;
Unk_020d905c data_021c251c;
u8 data_020d9010[4] = {0xa0, 0xa0, 0, 0};
u8 data_021c2204;
u8 data_021c2240[0x20];
Unk_020d906c data_021c22f4;
Unk_020d909c data_021c22a0;
Unk_020d906c data_021c2408;

static inline BOOL Unk_02038058_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_02038058_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

extern "C" void func_02038450() {
    void *g = data_020cbb18;
    u32 v = _ZN12Unk_020cbb1813func_02072374Ev(g) | 0x20;
    _ZN12Unk_020cbb1813func_02072380Ej(g, v);
}

Unk_020d906c::Unk_020d906c() { func_020a7c3c(); }

Unk_020d906c::~Unk_020d906c() {}

u32 Unk_020d906c::vfunc_08() { return 0x100; }

u8 *Unk_020d906c::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020d909c::Unk_020d909c() { func_020a7c3c(); }

Unk_020d909c::~Unk_020d909c() {
}

u32 Unk_020d909c::vfunc_08() {
    return 0x40;
}

u8 *Unk_020d909c::vfunc_0c() {
    return (u8 *)this + 0x12;
}

Unk_020d9084::Unk_020d9084() {
    func_020a7c3c();
}

Unk_020d9084::~Unk_020d9084() {
}

u32 Unk_020d9084::vfunc_08() {
    return 0x80;
}

u8 *Unk_020d9084::vfunc_0c() {
    return (u8 *)this + 0x12;
}

extern "C" void func_020382fc() {
    data_021c2208 = func_020ea738();
    u8 f;
    switch (func_020eaf18()) {
    case 3:
    case 4:
        f = 1;
        break;
    default:
        f = 0;
        break;
    }
    data_021c2204 = f;
}

extern "C" void func_020382f4(void *a, void *b) {
    func_0212a360(a, b);
}

u8 *func_020382c8() {
    u8 buf[0x14];
    func_020639e8(buf, (void *)" <%d>", data_021c2208);
    func_020382f4(data_021c2240, buf);
    return data_021c2240;
}

Unk_020d905c::Unk_020d905c()
    : unk_bc(0), unk_c0(0), unk_c4(0), unk_c8(0), unk_c9(0), unk_ca(0), unk_cb(0), unk_cc(0), unk_ce(0), unk_d0(0),
      unk_d4(0), unk_d8(0), unk_dc(0), unk_e0(0), unk_e4(0) {
    MI_CpuFill8(unk_2e4, 0x11, 0x800);
}

Unk_020d905c::~Unk_020d905c() {
}

extern "C" u8 func_0203818c() {
    return data_021c251c.unk_ca;
}

extern "C" BOOL func_02038178() {
    if (data_021c251c.unk_bc >= 5) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02038168() {
    data_021c251c.func_02038058();
}

extern "C" void func_02038158() {
    data_021c251c.func_02038038();
}

extern "C" void func_02038148(u8 a) {
    data_021c251c.func_02037f70(a);
}

extern "C" void func_02038138() {
    data_021c251c.func_02037ea0();
}

extern "C" void func_02038128() {
    data_021c251c.func_02037e44();
}

extern "C" void func_020380e0() {
    u8 c[3];
    c[0] = 0xe3;
    c[1] = 0xe4;
    c[2] = 0xe5;
    func_020b3558(&data_021c22f4, &c[0], 0);
    func_020b3558(&data_021c22a0, &c[1], 0);
    func_020b3558(&data_021c2408, &c[2], 0);
}

void Unk_020d905c::func_02038058() {
    BOOL a = TRUE;
    u8 v = data_020e416c;
    if (!Unk_02038058_IsZero(v)) {
        if (!Unk_02038058_IsOne(v)) {
            a = FALSE;
        }
    }
    BOOL b;
    if (data_021eda68->unk_0c == 5) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    func_02037b70();
    if (a || b) {
        _ZN12Unk_020dbd3413func_02054c2cEPvS0_(&unk_04, 0x43617557, (void *)"caution/caution_window.nsbmd");
        func_02037e0c();
        unk_c4 = 0;
        unk_c8 = 0;
        func_02037a04();
    } else {
        func_02037a20();
    }
}

void Unk_020d905c::func_02038038() {
    if (unk_bc != 0) {
        _ZN12Unk_020dbd3413func_02054b14Ev(&unk_04);
        unk_bc = 0;
    }
}

void Unk_020d905c::func_02037f70(u8 a) {
    unk_c9 = a;
    func_02037a28();
    static void (Unk_020d905c::*tbl[8])() = {
        &Unk_020d905c::func_02037a1c, &Unk_020d905c::func_020379c8, &Unk_020d905c::func_02037978,
        &Unk_020d905c::func_02037924, &Unk_020d905c::func_02037840, &Unk_020d905c::func_020377f4,
        &Unk_020d905c::func_02037734, &Unk_020d905c::func_020376f4,
    };
    (this->*tbl[unk_bc])();
}

void Unk_020d905c::func_02037ea0() {
    if (unk_c8) {
        G3i_PerspectiveW_(0x424, 0xf74, 0x1548, 0xf6, 0x3e800, 0x1000, 0, data_027e00d0);
        data_027e0148[0x7c / 4] &= ~0x50;
        Unk_02037ea0_V a, b, c, d;
        a = data_021f4880;
        b.x = 0;
        b.y = 0;
        b.z = -0x1000;
        c.x = 0;
        c.y = 0x1000;
        c.z = 0;
        data_027e02c8.a = a;
        data_027e02c8.c = c;
        data_027e02c8.b = b;
        G3i_LookAt_(&a, &c, &b, 0, data_027e0114);
        data_027e0148[0x7c / 4] &= ~0xe8;
        s32 r = func_01ffcb0c(0xb7, 0xf6d);
        d.x = r;
        d.y = r;
        d.z = 0x1000;
        _ZN12Unk_020dbe3413func_0205553cEPi(&unk_04, &d);
    }
}

void Unk_020d905c::func_02037e44() {
    if (unk_cb) {
        if (unk_ca) {
            unk_cc = *(volatile u16 *)0x4000050;
            unk_ce = *(volatile u16 *)0x4001050;
            *(volatile u16 *)0x4000050 = 0;
            *(volatile u16 *)0x4001050 = 0;
        } else {
            *(volatile u16 *)0x4000050 = unk_cc;
            *(volatile u16 *)0x4001050 = unk_ce;
        }
        unk_cb = 0;
    }
}

void Unk_020d905c::func_02037e0c() {
    func_020e8388(&data_021f47e0, 0, 0, -0x1000, 0, 0, -0x1000);
    unk_04.unk_64 = data_021f47e0;
}

void Unk_020d905c::func_02037dc8(s32 i) {
    u8 *b = (u8 *)unk_04.unk_5c;
    b += *(s32 *)(b + 8);
    u8 *c = b + *(u16 *)(b + 0xa);
    u32 v = _ZN12Unk_0205712013func_0205713cEv(b + *(s32 *)(c + 8));
    unk_a0.func_020b8a84((u32)unk_2e4, v + (i << 11), 0x800, 2);
}

void Unk_020d905c::func_02037d94() {
    MI_CpuFill8(unk_2e4, 0x11, 0x800);
    for (s32 i = 0; i < 4; i++) {
        func_02037dc8(i);
    }
}

void Unk_020d905c::func_02037ce4() {
    void *buf = func_020e8594(0x800);
    if (buf != NULL) {
        Unk_020e2a90 *o = func_020a8008(buf, 0x20, 2);
        if (o != NULL) {
            o->unk_2c = 5;
            o->unk_10 = (u32)unk_250.vfunc_0c();
            o->unk_58 = 2;
            o->unk_50 = 0;
            o->unk_28 = (Unk_02050288_Font *)data_021c4910;
            o->unk_55 = 0;
            o->func_02050c44();
            o->unk_39 = 1;
            o->unk_38 = 0;
            o->func_02050c90();
            u32 w = o->unk_30;
            func_020a7fd8(o);
            if (unk_e4 >= 0 && unk_e0 != 0) {
                func_02037c40(buf, w);
            }
            func_02001ea0(buf, unk_2e4, 0x20, 2);
        }
        func_020e8558(buf);
    }
}

void Unk_020d905c::func_02037c40(void *buf, s32 x) {
    Unk_020e3efc t;
    func_020b3270(&t, unk_e4, 2, 0, 0, 0);
    u32 w = func_020a7f94(&t);
    u32 off;
    if (w < 0x10) {
        off = (0x10 - w) >> 1;
    } else {
        off = 0;
    }
    s32 px = x + unk_e0 + off;
    Unk_020e2a90 *o = func_020a8008(buf, 0x20, 2);
    if (o != NULL) {
        o->unk_2c = 5;
        o->unk_10 = (u32)((Unk_020e2a78 *)&t)->vfunc_0c();
        o->unk_58 = 2;
        o->unk_50 = 0;
        o->unk_28 = (Unk_02050288_Font *)data_021c4910;
        o->unk_55 = 0;
        o->unk_30 = px;
        o->unk_39 = 1;
        o->unk_38 = 0;
        o->unk_56 = 1;
        o->func_02050c90();
        func_020a7fd8(o);
    }
}

void Unk_020d905c::func_02037b90(u32 a, u32 b) {
    unk_250.func_020a7c3c();
    unk_e0 = 0;
    u8 *r = (u8 *)func_020a6b9c((char *)unk_e8.vfunc_0c(), a);
    if (r != NULL) {
        unk_250.func_020a7a64(r);
        if (unk_e4 >= 0 && a == 3) {
            unk_e0 = func_020a7f94(&unk_250);
            Unk_02037b90_S s = *(Unk_02037b90_S *)data_020d9010;
            unk_250.func_020a7a28((u8 *)&s);
            unk_250.func_020a7a0c(&unk_1fc);
        }
        if (b != 0 && a == 3 && data_021c2204 != 0) {
            unk_250.func_020a7a28(func_020382c8());
        }
    }
}

void Unk_020d905c::func_02037b70() {
    unk_ca = 0;
    unk_d0 = 0;
    unk_d4 = 0;
    unk_d8 = 0;
    unk_dc = 0;
}

void Unk_020d905c::func_02037b10() {
    if (!unk_ca) {
        unk_ca = 1;
        unk_d0 = func_02001510();
        unk_d4 = func_020014d8();
        unk_d8 = func_02001580();
        unk_dc = func_02001548();
        func_02001504(1);
        func_020014cc(0);
        func_02001574(0);
        func_0200153c(0);
        unk_cb = 1;
    }
}

void Unk_020d905c::func_02037ac8() {
    if (unk_ca) {
        unk_ca = 0;
        func_02001504(unk_d0);
        func_020014cc(unk_d4);
        func_02001574(unk_d8);
        func_0200153c(unk_dc);
        unk_cb = 1;
    }
}

void Unk_020d905c::func_02037ab4() {
    func_020af330();
    func_02004064();
}

void Unk_020d905c::func_02037a28() {
    s32 s = func_020eaf18();
    if (s != 0 && s != 6) {
        s32 r4 = _ZN12Unk_020cbb1813func_0207235cEv(data_020cbb18);
        s32 v = func_020ea748();
        if ((r4 == 0 && v != 0 && v != 0x800c && v != 0x400b) ||
            (r4 == 1 && v != 0 && v != 0x80ff && v != 0x800c && v != 0x4006 && v != 0x400a && v != 0x400b)) {
            void *o = data_020cbb18;
            u32 f = _ZN12Unk_020cbb1813func_02072374Ev(o) | 0x10;
            _ZN12Unk_020cbb1813func_02072380Ej(o, f);
        }
    }
}

void Unk_020d905c::func_02037a20() {
    unk_bc = 0;
}

void Unk_020d905c::func_02037a1c() {}

void Unk_020d905c::func_02037a04() {
    unk_bc = 1;
    unk_c8 = 0;
    func_02037ac8();
}

void Unk_020d905c::func_020379c8() {
    if (unk_c9 != 0) {
        if ((_ZN12Unk_020cbb1813func_0207238cEv(data_020cbb18) & 0x7c) != 0) {
            func_02037b10();
            func_02037810();
        } else {
            func_020379b0();
        }
    }
}

void Unk_020d905c::func_020379b0() {
    unk_bc = 2;
    unk_c0 = 0x14;
    unk_c8 = 0;
}

void Unk_020d905c::func_02037978() {
    if (unk_c9 == 0) {
        func_02037a04();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= 0) {
            func_02037954();
        }
    }
}

void Unk_020d905c::func_02037954() {
    unk_bc = 3;
    unk_c8 = 0;
    func_02037d94();
    func_02037b10();
}

void Unk_020d905c::func_02037924() {
    _ZN12Unk_020e2a7813func_020a7bd8EPS_(&unk_e8, &data_021c22f4);
    _ZN12Unk_020e2a7813func_020a7bd8EPS_((u8 *)this + 0x1fc, &data_021c22a0);
    func_020378f0();
}

void Unk_020d905c::func_020378f0() {
    unk_bc = 4;
    unk_c0 = 0x12c;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = 0xf;
}

void Unk_020d905c::func_02037840() {
    s32 q = _s32_div_f(unk_c0 + 0x13, 0x14);
    BOOL changed;
    if (unk_e4 != q) {
        changed = TRUE;
    } else {
        changed = FALSE;
    }
    unk_e4 = q;
    if (unk_c4 < 4) {
        func_02037b90(unk_c4, 0);
        func_02037ce4();
        func_02037dc8(unk_c4);
        unk_c4 = unk_c4 + 1;
    } else if (changed) {
        func_02037b90(3, 0);
        func_02037ce4();
        func_02037dc8(3);
    }
    if (unk_c9 == 0) {
        func_02037a04();
    } else {
        unk_c0 = unk_c0 - 1;
        if (unk_c0 <= -0x14) {
            func_02037810();
        }
    }
}

void Unk_020d905c::func_02037810() {
    unk_bc = 5;
    unk_c8 = 1;
    func_02037d94();
    func_02037ab4();
    func_020382fc();
    func_0204fe98();
    func_02073154();
}

void Unk_020d905c::func_020377f4() {
    _ZN12Unk_020e2a7813func_020a7bd8EPS_(&unk_e8, &data_021c2408);
    func_020377c4();
}

void Unk_020d905c::func_020377c4() {
    unk_bc = 6;
    unk_c4 = 0;
    unk_c8 = 1;
    unk_e0 = 0;
    unk_e4 = -1;
    unk_c0 = 0x14;
}

void Unk_020d905c::func_02037734() {
    if (unk_c4 < 4) {
        func_02037b90(unk_c4, 1);
        func_02037ce4();
        func_02037dc8(unk_c4);
        unk_c4 = unk_c4 + 1;
    }
    unk_c0 = unk_c0 - 1;
    if (unk_c0 <= 0) {
        BOOL b, a;
        if (data_021f4770 != 0 && data_021f4774 != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
        b = (data_021f47d8[1] & 1) ? TRUE : FALSE;
        if (a != 0 || b != 0) {
            func_0203771c();
        }
    }
}

// Data order: this unit is placed object by object (see object_order.txt).

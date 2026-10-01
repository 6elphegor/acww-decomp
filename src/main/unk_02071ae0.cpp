#include "types.h"

struct Unk_02071b10_Id16 {
    u8 b[16];
};
struct Unk_02071fa4_Id8 {
    u8 b[8];
};

class Unk_020942c8 {
public:
    Unk_020942c8();
    ~Unk_020942c8();
    u16 unk_00;
    Unk_02071fa4_Id8 unk_02;
    u16 unk_0a;
    Unk_02071fa4_Id8 unk_0c;
    s8 unk_14;
    u8 unk_15;
    BOOL func_020941e8(Unk_020942c8 *o);
};

class Unk_020dd30c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    Unk_020dd30c();
    virtual ~Unk_020dd30c();
    void func_02062464(u8 *dst, s32 n);
    void func_02050f7c(u8 *src, s32 n);
    u8 unk_04[0x20];
};

class Unk_02071ed0 : public Unk_020942c8 {
public:
    Unk_02071ed0();
    ~Unk_02071ed0();
    Unk_02071b10_Id16 unk_16;
    struct {
        u8 lo : 4;
        u8 hi : 4;
    } unk_26;
    u8 pad_27;

    void func_02071ed0(u32 v);
    u8 func_02071ee8();
    void func_02071ef4(u8 *src);
    void func_02071f08(Unk_020dd30c *o);
    void func_02071f1c(void *x);
    void func_02071f48(u8 *dst);
    void func_02071f5c(Unk_020dd30c *o);
    void func_02071f70(void *x);
    Unk_020942c8 *func_02071fa0();
    void func_02071fa4(Unk_020942c8 *src);
    void func_02071ff0();
    void func_0207200c(u32 v);
    u8 func_0207202c();
    void func_02072040();
    BOOL func_02072084(Unk_02071ed0 *o);
};

class Unk_02071e04 {
public:
    Unk_02071e04();
    ~Unk_02071e04();
    u8 unk_00[0x200];
    Unk_02071ed0 unk_200;

    Unk_02071ed0 *func_02071e04();
    void func_02071e10(u32 v);
    void func_02071e3c(void *dst);
    u8 *func_02071e58();
    BOOL func_02071e8c(Unk_02071e04 *o);
};

class Unk_02071ae0 : public Unk_02071e04 {
public:
    Unk_02071ae0();
    ~Unk_02071ae0();
};

class Unk_02071c1c {
public:
    Unk_02071c1c();
    ~Unk_02071c1c();
    u8 unk_00[8];
    u32 func_02071c1c(u32 i);
    void func_02071c2c(u32 a, u32 b);
    void func_02071c44();
};

class Unk_02071b00 {
public:
    Unk_02071b00();
    ~Unk_02071b00();
    Unk_02071e04 unk_00[8];

    Unk_02071e04 *func_02071b00(u8 i);
    void func_02071b10();
};

class Unk_02071c5c {
public:
    Unk_02071c5c();
    ~Unk_02071c5c();
    Unk_02071e04 unk_00[8];
    Unk_02071c1c unk_1140;

    Unk_02071c1c *func_02071c5c();
    Unk_02071e04 *func_02071c68(u32 i);
    Unk_02071e04 *func_02071c88(u8 i);
    void func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b);
    void func_02071d08(Unk_020942c8 *a);
};

class Unk_020cbb18 {
public:
    u8 unk_00[0x64];
    s32 unk_64;
    u8 unk_68[0xb0];
    u32 unk_118;
    u32 unk_11c;
    u32 unk_120;
    u32 unk_124;
    u16 unk_128[3];
    u16 unk_12e;
    u16 unk_130;
    u16 unk_132;
    u8 unk_134[0x3e0];

    u8 *func_020721ec();
    u8 *func_020721f8();
    void func_02072204(u32 v);
    u32 func_02072210();
    void func_0207221c(u32 v);
    u32 func_02072228();
    void func_02072234(u32 v);
    void func_02072240();
    void func_02072258(s32 i);
    u32 func_020722d4(s32 i);
    u32 func_0207235c();
    void func_02072368(u32 v);
    u32 func_02072374();
    void func_02072380(u32 v);
    u32 func_0207238c();
    void func_02072398(u32 v);
    void func_020723a4(void *src, u32 n);
    void func_020723d4();
    u32 func_020723e0();
    void func_020723ec(u32 v);
    BOOL func_02072e88(s32 i);
    BOOL func_020729cc(s32 i);
    u8 *func_02072ddc(s32 i);
};

struct Unk_020720f8_Data {
    u32 v;
    u8 f;
};

extern "C" {
extern u32 OVERLAY_65_ID[];
extern u32 OVERLAY_66_ID[];
extern u32 OVERLAY_67_ID[];
extern u16 data_020cb6f4;
extern u16 data_020d03cc;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_020720f8_Data data_021cc7d0;

void *func_020e8574(u32 n);
void func_020e8558(void *p);
void func_020712dc(void *p);
void func_0207131c(void *p);
BOOL func_020712a0(void *t, void *buf, s16 i);
BOOL func_020712e0(void *t, void *buf, s16 i);
void func_020712c4(void *t);
void func_02071304(void *t);
void *func_02071320(void);
void func_02071328(void *t, Unk_02071ed0 *s, s32 id);
Unk_020942c8 *func_0209409c(Unk_020942c8 *p);
void func_02063950(Unk_020942c8 *p, u32 v);
void func_02094128(Unk_020942c8 *p, u32 v);
void func_02094094(Unk_020942c8 *a, Unk_020942c8 *b);
s32 func_02128930(void *a, void *b, u32 n);
void func_02116048(void *src, void *dst, u32 n);
s32 func_02076c0c(s32 i);
s32 func_02076b18();
void *func_0209750c();
void *func_0209888c(void *p);
void *func_020716cc();
void func_020716d4(void *p, u32 v);
s32 func_0206d49c();
void func_020a77f8(Unk_020dd30c *o, void *x);
void func_020a7aa0(void *dst, Unk_020dd30c *o, u32 a, u32 b);
}


// ---- callers first
void Unk_02071b00::func_02071b10() {
    void *t = func_020e8574(0x1000);
    if (t) {
        if (t) func_020712dc(t);
        func_020712c4(t);
        u16 g1 = data_020cb6f4;
        u16 g2 = data_020d03cc;
        for (s16 i = 0; (u32)i < 8; i++) {
            func_020712a0(t, func_02071b00(i)->func_02071e58(), i);
            void *tbl = func_02071320();
            func_02071328(tbl, func_02071b00(i)->func_02071e04(), i + 8);
            func_02063950(func_0209409c(func_02071b00(i)->func_02071e04()->func_02071fa0()), g1);
            func_02094128(func_02071b00(i)->func_02071e04()->func_02071fa0(), g2);
        }
        func_020e8558(t);
    }
}

void Unk_02071c5c::func_02071c98(Unk_020942c8 *a, Unk_020942c8 *b) {
    for (u8 i = 0; i < 8; i++) {
        Unk_02071ed0 *s = func_02071c88(i)->func_02071e04();
        Unk_020942c8 *base = s->func_02071fa0();
        Unk_020942c8 *p = func_0209409c(base);
        if (p->unk_00 == b->unk_00) {
            if (func_02128930(&p->unk_02, &b->unk_02, 8) == 0) {
                if (base->func_020941e8(a)) {
                    func_02094094(s->func_02071fa0(), func_0209409c(a));
                }
            }
        }
    }
}

void Unk_02071c5c::func_02071d08(Unk_020942c8 *a) {
    void *t = func_020e8574(0x1000);
    if (t) {
        if (t) func_0207131c(t);
        func_02071304(t);
        for (s16 i = 0; (u32)i < 8; i++) {
            func_020712e0(t, func_02071c88(i)->func_02071e58(), i);
            void *tbl = func_02071320();
            func_02071328(tbl, func_02071c88(i)->func_02071e04(), i);
            func_02071c88(i)->func_02071e04()->func_02071fa4(a);
        }
        func_020e8558(t);
    }
    unk_1140.func_02071c44();
}

Unk_02071c1c *Unk_02071c5c::func_02071c5c() {
    return &unk_1140;
}

Unk_02071e04 *Unk_02071c5c::func_02071c68(u32 i) {
    return &unk_00[unk_1140.func_02071c1c(i)];
}

Unk_02071e04 *Unk_02071b00::func_02071b00(u8 i) {
    return &unk_00[i & 7];
}

Unk_02071e04 *Unk_02071c5c::func_02071c88(u8 i) {
    return &unk_00[i & 7];
}

Unk_02071b00::Unk_02071b00() {}
Unk_02071b00::~Unk_02071b00() {}
Unk_02071c5c::Unk_02071c5c() {}
Unk_02071c5c::~Unk_02071c5c() {}

u32 Unk_02071c1c::func_02071c1c(u32 i) {
    return (u8)(unk_00[i & 7] & 7);
}

void Unk_02071c1c::func_02071c2c(u32 a, u32 b) {
    u8 t = unk_00[a & 7];
    unk_00[a & 7] = unk_00[b & 7];
    unk_00[b & 7] = t;
}

void Unk_02071c1c::func_02071c44() {
    for (u8 i = 0; i < 8; i++) unk_00[i] = i;
}

Unk_02071c1c::Unk_02071c1c() {}
Unk_02071c1c::~Unk_02071c1c() {}

Unk_02071ed0 *Unk_02071e04::func_02071e04() {
    return &unk_200;
}

void Unk_02071e04::func_02071e10(u32 v) {
    u8 b = v | (v << 4);
    u32 w = (b << 24) | ((b << 16) | (b | (b << 8)));
    u32 *p = (u32 *)this;
    u32 *end = (u32 *)((u8 *)this + 0x200);
    while (p < end) *p++ = w;
}

void Unk_02071e04::func_02071e3c(void *dst) {
    func_02116048(dst, func_02071e58(), 0x200);
}

Unk_02071e04::Unk_02071e04() {}
Unk_02071e04::~Unk_02071e04() {}

BOOL Unk_02071e04::func_02071e8c(Unk_02071e04 *o) {
    if (unk_200.func_02072084(&o->unk_200)) {
        u32 *p = (u32 *)this;
        u32 *q = (u32 *)o;
        for (u32 i = 0; i < 0x80; i++) {
            if (*p != *q) return FALSE;
            p++;
            q++;
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_02071ed0::func_02071ed0(u32 v) {
    u8 &f = *(u8 *)&unk_26;
    f = (f & ~0xf) | ((u8)v & 0xf);
}

u8 Unk_02071ed0::func_02071ee8() {
    return unk_26.lo;
}

void Unk_02071ed0::func_02071ef4(u8 *src) {
    *(Unk_02071b10_Id16 *)&unk_16 = *(Unk_02071b10_Id16 *)src;
}

void Unk_02071ed0::func_02071f08(Unk_020dd30c *o) {
    o->func_02062464(unk_16.b, 16);
}

void Unk_02071ed0::func_02071f1c(void *x) {
    Unk_020dd30c s;
    func_020a77f8(&s, x);
    func_02071f08(&s);
}

void Unk_02071ed0::func_02071f48(u8 *dst) {
    *(Unk_02071b10_Id16 *)dst = *(Unk_02071b10_Id16 *)&unk_16;
}

void Unk_02071ed0::func_02071f5c(Unk_020dd30c *o) {
    o->func_02050f7c(unk_16.b, 16);
}

void Unk_02071ed0::func_02071f70(void *x) {
    Unk_020dd30c s;
    func_02071f5c(&s);
    func_020a7aa0(x, &s, 0, 0);
}

void Unk_02071ed0::func_02071fa4(Unk_020942c8 *src) {
    unk_00 = src->unk_00;
    unk_02 = src->unk_02;
    unk_0a = src->unk_0a;
    unk_0c = src->unk_0c;
    unk_14 = src->unk_14;
    unk_15 = src->unk_15;
}

void Unk_02071ed0::func_02071ff0() {
    func_02071fa4((Unk_020942c8 *)func_0209888c(func_0209750c()));
}

void Unk_02071ed0::func_0207200c(u32 v) {
    u8 &f = *(u8 *)&unk_26;
    u32 t = v & 0xf;
    f = (f & ~0xf0) | ((u8)t & 0xf) << 4;
}

u8 Unk_02071ed0::func_0207202c() {
    u8 f = *(u8 *)&unk_26;
    u32 t = (u32)(f << 24) >> 28;
    t &= 0xf;
    return t;
}

void Unk_02071ed0::func_02072040() {
    void *p = func_020716cc();
    func_020716d4(p, func_0207202c());
}

BOOL Unk_02071ed0::func_02072084(Unk_02071ed0 *o) {
    if (unk_26.lo == o->unk_26.lo && unk_26.hi == o->unk_26.hi && unk_00 == o->unk_00 &&
        func_02128930(&unk_02, &o->unk_02, 8) == 0 && func_020941e8(o) != 0) {
        for (u32 i = 0; i < 16; i++) {
            if (unk_16.b[i] != o->unk_16.b[i]) return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

Unk_02071ed0::Unk_02071ed0() {}
Unk_02071ed0::~Unk_02071ed0() {}

BOOL Unk_020942c8::func_020941e8(Unk_020942c8 *o) { return FALSE; }

void func_020720f8() {
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    u32 c = (u32)OVERLAY_67_ID;
    u32 a = (u32)OVERLAY_65_ID;
    u32 b = (u32)OVERLAY_66_ID;
    if (x == a || x == b || x == c) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}

void func_02072144() {
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_67_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}

void func_0207217c() {
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_66_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}

void func_020721b4() {
    u32 x;
    if (data_021cc7d0.f) x = (u32)-1; else x = data_021cc7d0.v;
    BOOL ok;
    if ((u32)OVERLAY_65_ID == x) ok = TRUE; else ok = FALSE;
    if (!ok) func_0206d49c();
}

u8 *Unk_020cbb18::func_020721ec() { return (u8 *)this + 0x514; }
u8 *Unk_020cbb18::func_020721f8() { return unk_134; }
void Unk_020cbb18::func_02072204(u32 v) { unk_132 = v; }
u32 Unk_020cbb18::func_02072210() { return unk_130; }
void Unk_020cbb18::func_0207221c(u32 v) { unk_130 = v; }
u32 Unk_020cbb18::func_02072228() { return unk_12e; }
void Unk_020cbb18::func_02072234(u32 v) { unk_12e = v; }

void Unk_020cbb18::func_02072240() {
    u16 *p = unk_128;
    for (s32 i = 2; i >= 0; i--) *p++ = 0;
}

void Unk_020cbb18::func_02072258(s32 i) {
    unk_128[func_02076c0c(i)] = 0;
}

u32 Unk_020cbb18::func_020722d4(s32 i) {
    return unk_128[func_02076c0c(i)];
}

BOOL func_02072278() {
    s32 i;
    Unk_020cbb18 *g;
    i = 3;
    g = data_020cbb18;
    for (; i >= 0; i--) {
        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
            func_02076c0c(i);
            u32 v = g->func_020722d4(i);
            func_02076b18();
            if (v > 0x258) return TRUE;
        }
    }
    return FALSE;
}

void func_020722f0(Unk_020cbb18 *self) {
    s32 i;
    Unk_020cbb18 *g;
    i = 3;
    g = data_020cbb18;
    for (; i >= 0; i--) {
        if (g->func_02072e88(i) && !g->func_020729cc(i)) {
            s32 idx = func_02076c0c(i);
            u32 v = g->func_020722d4(i);
            func_02076b18();
            if (v <= 0x258) self->unk_128[idx]++;
        }
    }
}

u32 Unk_020cbb18::func_0207235c() { return unk_124; }
void Unk_020cbb18::func_02072368(u32 v) { unk_124 = v; }
u32 Unk_020cbb18::func_02072374() { return unk_120; }
void Unk_020cbb18::func_02072380(u32 v) { unk_120 = v; }
u32 Unk_020cbb18::func_0207238c() { return unk_11c; }
void Unk_020cbb18::func_02072398(u32 v) { unk_11c = v; }

void Unk_020cbb18::func_020723a4(void *src, u32 n) {
    u8 *d = func_02072ddc(4);
    d = d + unk_118;
    func_02116048(src, d, n);
    unk_118 += n;
}

void Unk_020cbb18::func_020723d4() { unk_118 = 0; }
u32 Unk_020cbb18::func_020723e0() { return unk_118; }
void Unk_020cbb18::func_020723ec(u32 v) { unk_118 = v; }

u8 *Unk_02071e04::func_02071e58() { return (u8 *)this; }
Unk_020942c8 *Unk_02071ed0::func_02071fa0() { return this; }

Unk_02071ae0::Unk_02071ae0() {}
Unk_02071ae0::~Unk_02071ae0() {}

void Unk_02071ae0_Use() {
    Unk_02071ae0 x;
}

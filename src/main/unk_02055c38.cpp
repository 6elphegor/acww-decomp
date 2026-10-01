#include "types.h"

struct Unk_020561d8_Vec { s32 x, y, z; };
struct Unk_020561d8_Mtx { s32 m[9]; };

struct Unk_02055cd0_Ent {
    u8 pad_00[0x22];
    u8 unk_22;
    u8 unk_23;
    u8 pad_24[4];
};

struct Unk_02055cd0_Obj {
    u8 pad_00[0x18];
    u32 unk_18;
    u8 pad_1c[0xa];
    u8 unk_26;
    u8 pad_27;
    Unk_02055cd0_Ent *unk_28;
};
struct Unk_02056160_Rec {
    u8 pad[0x28];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Tbl {
    u8 pad[0x34];
    Unk_02056160_Rec *recs;
};

struct Unk_02056160_Hdr {
    u8 pad;
    u8 idx;
};

struct Unk_020561d8_Z {
    u32 flags;
    u8 pad[0x24];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Arg {
    Unk_02056160_Hdr *hdr;
    Unk_02056160_Tbl *tbl;
    u8 pad[0xac];
    Unk_020561d8_Z *z;
};

extern "C" {
void func_02056274(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t);
}

extern "C" {
void func_020562e0(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t);
}

extern "C" s32 _ZN12Unk_02056fd813func_02057110Ei(void *res, ...);
extern "C" u32 _ZN12Unk_02056fd813func_02057100Ei(void *res, ...);
extern "C" void *_ZN12Unk_02056fd813func_020570b0Ei(void *res, u32 x);
extern "C" s32 _ZN12Unk_02056fd813func_02057078Ei(u8 *hdr, const char *name);
extern "C" u8 *_ZN12Unk_02056fd813func_02057048Ei(u8 *hdr, s32 idx);
extern "C" s32 _ZN12Unk_02056fd813func_02056fd8Ei(u8 *hdr, s32 idx);
extern "C" s32 func_02057180(u32 v);
extern "C" void _ZN12Unk_020dbe7c13func_020566bcEv(void *p);
extern "C" void func_02056714(void *p);
extern "C" s32 _ZN12Unk_020dbe7c13func_0205668cEihit(void *p, u32 a, u32 b, void *c, void *d);
extern "C" void *func_02106824(void *p, s32 x);
extern "C" s32 func_02106300(void *a, void *b);
extern "C" void *func_021066cc(void *a, s32 i);
extern "C" void *func_0210629c(void *p);
extern "C" void *func_020e8608(void *heap, u32 size);
extern "C" BOOL _ZN12Unk_020e45ec13func_020b8984EPvjj(void *a, void *b, u32 c, void *d);
extern "C" void _ZN12Unk_020e45ec13func_020b89c8Ev(void *a);
extern "C" void _ZN12Unk_020e45ec13func_020b8b08Ev(void *a);
extern "C" void _ZN12Unk_020e45ecC2Ev(void *a);
extern "C" s32 _ZN12Unk_020e45ec13func_020b8a84Ejjjh(void *self, u8 *a, u32 b, s32 c, s32 d);
extern "C" s32 _ZN12Unk_020e45ec13func_020b8a34Ejjjh(void *self, u8 *a, u32 b, s32 c, s32 d);
extern "C" void func_01ffb448(void *m);
extern "C" s32 func_01ffc5a4(s32 a, s32 b);
extern "C" void func_02115fb4(void *dst, u32 v, u32 n);
extern "C" void func_01ffc928(void *a, void *b, void *c);
extern "C" u8 *func_021066e8(u8 *p, s32 z, u32 v);
extern "C" u8 *func_02106778(u8 *p, u32 v);
extern "C" u8 *func_02106768(u8 *p, u32 v);
extern "C" u32 func_0212a438(const char *s);
extern "C" void func_0212a360(void *p);
extern "C" void operator delete(void *p);
extern "C" void func_020563cc(Unk_020561d8_Vec *v);
extern "C" void func_02056274(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t);
extern "C" void func_020562e0(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t);
extern "C" s32 func_02057158(void *p, s32 a);
extern "C" void *data_021f482c;

class Unk_020dbe7c {
public:
    u32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
    inline Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~Unk_020dbe7c();
    BOOL func_02056654();
    void func_0205668c(s32 frames, u8 mode, s32 speed, u16 last);
    void func_020566bc();
    BOOL func_020565e8(s32 x);
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();

    u32 unk_18;
    u32 unk_1c;
};

class Unk_0205614c {
public:
    void *unk_00;
    u8 unk_04[0x1c];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22;
    u8 unk_23;
    u16 unk_24;

    void func_02056070(u32 frame, u8 *p2, void *p3, void *p4);
    BOOL func_02056018();
    void func_02056028(void *a, void *b);
    void func_020560f8();
    BOOL func_0205610c();
    void func_02056124();
    Unk_0205614c *func_0205614c();
};

class Unk_020dbe5c : public Unk_020dbe7c {
public:
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u16 unk_24;
    u8 unk_26;
    Unk_0205614c *unk_28;

    Unk_020dbe5c();
    virtual ~Unk_020dbe5c();
    void func_02055d18();
    BOOL func_02055d60(s32 unused, u32 x);
    void func_02055df0();
    void func_02055e38();
    void func_02055e4c(void *r1, void *r2, u32 r3, u8 p5, void *p6);
    void func_02055eec();
    BOOL func_02055f1c(void *r1, void *r2, u32 r3, void *heap);
    void func_02055f9c();
};

class Unk_020dbe6c {
public:
    Unk_020561d8_Mtx unk_04;
    Unk_020561d8_Vec unk_28;
    s32 unk_34;
    s32 unk_38;

    Unk_020dbe6c();
    virtual ~Unk_020dbe6c();
    void func_02056160(Unk_02056160_Arg *x);
    void func_020561d8(Unk_02056160_Arg *x);
    void func_02056520(s32 n);
    BOOL func_02056544();
};

struct Unk_02056e28 {
    char unk_00[17];
    Unk_02056e28();
    ~Unk_02056e28();
    char *func_02056dec();
    void func_02056df0(const char *src);
};

// Library class (see unk_020b8464.cpp)
class Unk_020e45ec {
public:
    Unk_020e45ec();
    void func_020b89c8(void);

    u32 unk_00[7];
};

class Unk_02056f94 {
public:
    Unk_02056f94();
    ~Unk_02056f94();

    /* 0x00 */ Unk_020e45ec unk_00[2];
};

struct Unk_02056e38 {
    u32 unk_00[14];
    BOOL func_02056e38(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b);
    BOOL func_02056e88(u8 *hdr, s32 i1, s32 i2, u8 *x, s32 a, s32 b);
};

class Unk_020dbe8c : public Unk_020dbe7c {
public:
    Unk_02056f94 unk_18;
    u8 *unk_50;
    Unk_02056e28 unk_54;
    Unk_02056e28 unk_65;
    u8 *unk_78;
    u8 *unk_7c;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    u8 unk_8c;

    Unk_020dbe8c();
    virtual ~Unk_020dbe8c();
    void func_02056d00();
    void func_02056b84(s32 *a, s32 *b);
    BOOL func_02056bf8();
    BOOL func_02056ca4(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag);
};

struct Unk_02056b74 {
    u8 *unk_00;
    s8 unk_04;

    Unk_02056b74();
    ~Unk_02056b74();
    void func_02056ae8();
    BOOL func_02056b60();
    BOOL func_02056af0(u8 *hdr, s32 idx);
    BOOL func_02056b28(u8 *hdr, const char *name);
    s8 func_020567e4();
    BOOL func_020567ec(u8 *hdr2, s32 idx2);
    BOOL func_020568cc(u8 *hdr2, const char *name);
    BOOL func_020568f8(u8 *hdr2, s32 idx2);
    BOOL func_02056a4c(u8 *hdr2, const char *name);
    BOOL func_02056a78(u8 *hdr2, s32 a, s32 idx);
    BOOL func_02056ab0(u8 *hdr2, const char *n, const char *n2);
};

static inline u8 *Unk_02056e88_Ent(u8 *d, s32 idx) {
    u16 off = *(u16 *)(d + 6);
    u8 *t = d + off + 4;
    u16 stride = *(u16 *)(d + off);
    return t + stride * idx;
}

// Resource header
class Unk_02056fd8 {
public:
    u32 func_02056fcc(s32 a);
    u32 func_02056fd8(s32 idx);
    void func_02057030(void);
    void *func_02057048(s32 idx);
    s32 func_02057078(s32 a);
    u32 func_02057084(s32 idx);
    void *func_020570b0(s32 idx);
    void *func_020570e0(void);
    s32 func_02057100(s32 a);
    u32 func_0205710c(void);
    s32 func_02057110(s32 a);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c[2];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u8 unk_18[0x18];
    /* 0x30 */ u16 unk_30;
    /* 0x32 */ u16 unk_32;
    /* 0x34 */ u16 unk_34;
    /* 0x36 */ u16 unk_36;
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u8 unk_3c[6];
    /* 0x42 */ u16 unk_42;
};

class Unk_02057120 {
public:
    u32 func_02057120(void);
    u32 func_0205713c(void);
    u32 func_0205714c(void);

    /* 0x00 */ u32 unk_00[5];
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u16 unk_1c;
};

s32 func_02057158(void *p, s32 a) {
    u32 buf[4];
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0;
    func_0212a360(buf);
    return func_02106300(p, buf);
}

u32 Unk_02057120::func_0205714c(void) {
    return func_02057180(unk_14);
}

u32 Unk_02057120::func_0205713c(void) {
    return (unk_14 & 0xffff) << 3;
}

u32 Unk_02057120::func_02057120(void) {
    if (((unk_14 & 0x1c000000) >> 26) == 2) {
        return unk_1c << 3;
    }
    return unk_1c << 4;
}

s32 Unk_02056fd8::func_02057110(s32 a) {
    return func_02057158((u8 *)this + unk_08 + 4, a);
}

u32 Unk_02056fd8::func_0205710c(void) {
    return unk_14;
}

s32 Unk_02056fd8::func_02057100(s32 a) {
    return func_02057158((u8 *)this + 0x3c, a);
}

void *Unk_02056fd8::func_020570e0(void) {
    s32 u;
    s32 idx = func_02057100(u);
    void *r = 0;
    if (idx != -1) {
        r = func_020570b0(idx);
    }
    return r;
}

void *Unk_02056fd8::func_020570b0(s32 idx) {
    u8 *base = (u8 *)this + 0x3c;
    u32 off = unk_42;
    u8 *list = base + off;
    u8 *data = (u8 *)this + unk_14;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + ((*(u32 *)(ent + 4) & 0xffff) << 3);
}

u32 Unk_02056fd8::func_02057084(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + 0x3c;
    u32 off = unk_42;
    u8 *list = base + off;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return func_02057180(*(u32 *)(ent + 4));
}

s32 Unk_02056fd8::func_02057078(s32 a) {
    return func_02057158((u8 *)this + unk_34, a);
}

void *Unk_02056fd8::func_02057048(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + unk_34;
    u32 off = *(u16 *)(base + 6);
    u8 *list = base + off;
    u8 *data = (u8 *)this + unk_38;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + (*(u16 *)(ent + 4) << 3);
}

void Unk_02056fd8::func_02057030(void) {
    s32 u;
    func_02057048(func_02057078(u));
}

u32 Unk_02056fd8::func_02056fd8(s32 idx) {
    u8 *base = (u8 *)this + unk_34;
    u8 *ent = 0;
    s32 i;
    u32 cnt;
    if (idx == -1) {
        return (u32)ent;
    }
    u32 off = *(u16 *)(base + 6);
    u32 stride = *(u16 *)(base + off);
    ent = base + off + 4;
    ent += stride * idx;
    i = idx + 1;
    cnt = base[1];
    for (;;) {
        if (i >= (s32)cnt) {
            return (unk_30 - *(u16 *)ent) << 3;
        }
        u8 *b2 = (u8 *)this + *(volatile u16 *)&unk_34;
        u32 off2 = *(u16 *)(b2 + 6);
        u8 *l2 = b2 + off2;
        u32 stride2 = *(u16 *)(b2 + off2);
        u8 *e2 = l2 + stride2 * i;
        u32 q = *(u16 *)(e2 + 4);
        u32 p0 = *(u16 *)ent;
        if (q > p0) {
            return (q - p0) << 3;
        }
        i++;
    }
}

u32 Unk_02056fd8::func_02056fcc(s32 a) {
    return func_02057158((u8 *)this + 0x40, a);
}

Unk_02056f94::Unk_02056f94() {
}

Unk_02056f94::~Unk_02056f94() {
    unk_00[0].func_020b89c8();
    unk_00[1].func_020b89c8();
}

BOOL Unk_02056e38::func_02056e88(u8 *hdr, s32 i1, s32 i2, u8 *x, volatile s32 a, volatile s32 b) {
    u8 *p1;
    u8 *e2;
    u8 *r7;
    u8 *e3;
    p1 = Unk_02056e88_Ent(hdr + 0x3c, i1);
    {
        u8 *g = hdr + *(u16 *)(hdr + 0x34);
        u16 off = *(u16 *)(g + 6);
        u8 *tb = g + off + 4;
        u16 stride = *(u16 *)(g + off);
        e2 = tb + stride * i2;
    }
    s32 ta = a;
    r7 = NULL;
    if (ta != -1) {
        r7 = Unk_02056e88_Ent(x + 0x3c, ta);
    }
    s32 tb = b;
    e3 = NULL;
    if (tb != -1) {
        e3 = Unk_02056e88_Ent(x + *(u16 *)(x + 0x34), tb);
    }
    if (p1 != NULL) {
        func_02057180(*(u32 *)p1);
        u32 r6 = *(u32 *)p1 + (u16) * (u32 *)(hdr + 8);
        if (r7 != NULL) {
            u8 *t = (u8 *)_ZN12Unk_02056fd813func_020570b0Ei(x, a);
            s32 r3 = func_02057180(*(u32 *)r7);
            if (!_ZN12Unk_020e45ec13func_020b8a84Ejjjh(this, t, (r6 & 0xffff) << 3, r3, 2)) {
                return FALSE;
            }
        }
        if (e2 != NULL && e3 != NULL) {
            s32 bb = b;
            u8 *t = _ZN12Unk_02056fd813func_02057048Ei(x, bb);
            s32 r3 = _ZN12Unk_02056fd813func_02056fd8Ei(x, bb);
            if (!_ZN12Unk_020e45ec13func_020b8a34Ejjjh((u8 *)unk_00 + 0x1c, t, (*(u16 *)e2 + (u16) * (u32 *)(hdr + 0x2c)) << 3, r3, 3)) {
                _ZN12Unk_020e45ec13func_020b89c8Ev(this);
                return FALSE;
            }
        }
    }
    return TRUE;
}

BOOL Unk_02056e38::func_02056e38(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b) {
    s32 i1;
    s32 i2;
    if (n1 != NULL) {
        i1 = _ZN12Unk_02056fd813func_02057100Ei(hdr, n1);
    } else {
        i1 = -1;
    }
    if (n2 != NULL) {
        i2 = _ZN12Unk_02056fd813func_02057078Ei(hdr, n2);
    } else {
        i2 = -1;
    }
    return func_02056e88(hdr, i1, i2, x, a, b);
}

Unk_02056e28::Unk_02056e28() {
    for (u32 i = 0; i < 0x11; i++) {
        unk_00[i] = 0;
    }
}

Unk_02056e28::~Unk_02056e28() {}

void Unk_02056e28::func_02056df0(const char *src) {
    if (src != NULL) {
        u32 n = func_0212a438(src) + 1;
        for (u32 i = 0; i < 0x11; i++) {
            if (i < n) {
                unk_00[i] = src[i];
            } else {
                unk_00[i] = 0;
            }
        }
    }
}

char *Unk_02056e28::func_02056dec() {
    return unk_00;
}

Unk_020dbe8c::Unk_020dbe8c() {
    unk_50 = NULL;
    unk_78 = NULL;
    unk_7c = NULL;
    unk_80 = -1;
    unk_84 = -1;
    unk_88 = -1;
}

Unk_020dbe8c::~Unk_020dbe8c() {
    func_02056d00();
}

void Unk_020dbe8c::func_02056d00() {
    unk_50 = NULL;
    unk_78 = NULL;
    unk_7c = NULL;
    unk_80 = -1;
    unk_84 = -1;
}

BOOL Unk_020dbe8c::func_02056ca4(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag) {
    func_02056d00();
    unk_8c = flag;
    unk_54.func_02056df0(n1);
    unk_65.func_02056df0(n2);
    unk_50 = hdr;
    unk_78 = x;
    unk_7c = y;
    func_0205668c(*(u16 *)(y + 4), 0, 0x1000, 0);
    func_02056bf8();
    return TRUE;
}

BOOL Unk_020dbe8c::func_02056bf8() {
    s32 xy[2];
    unk_88 = unk_84;
    func_020566bc();
    func_02056b84(&xy[0], &xy[1]);
    if (unk_84 == xy[0] || unk_8c != 0) {
        xy[0] = -1;
    }
    if (unk_80 == xy[1]) {
        xy[1] = -1;
    }
    char *n1 = unk_54.func_02056dec();
    char *n2 = unk_65.func_02056dec();
    if (((Unk_02056e38 *)&unk_18)->func_02056e38(unk_50, n1, n2, unk_78, xy[0], xy[1])) {
        if (xy[0] != -1) {
            unk_84 = xy[0];
        }
        if (xy[1] != -1) {
            unk_80 = xy[1];
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbe8c::func_02056b84(s32 *a, s32 *b) {
    *b = -1;
    *a = *b;
    u8 *r7 = func_021066e8(unk_7c, 0, (u32)(unk_08 << 4) >> 16);
    if (r7 != NULL) {
        u8 *first = func_02106778(unk_7c, r7[2]);
        r7 = func_02106768(unk_7c, r7[3]);
        *a = first != NULL ? func_02106300(unk_78 + 0x3c, first) : -1;
        u8 *h = unk_78;
        u8 *tbl = h + *(u16 *)(h + 0x34);
        *b = r7 != NULL ? func_02106300(tbl, r7) : -1;
    }
}

Unk_02056b74::Unk_02056b74() {
    func_02056ae8();
}

Unk_02056b74::~Unk_02056b74() {}

BOOL Unk_02056b74::func_02056b60() {
    if (unk_04 != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056b28(u8 *hdr, const char *name) {
    if (!func_02056b60()) {
        s32 idx = (s8)_ZN12Unk_02056fd813func_02057110Ei(hdr, name);
        if (idx != -1) {
            return func_02056af0(hdr, idx);
        }
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056af0(u8 *hdr, s32 idx) {
    if (!func_02056b60()) {
        if (idx != -1 && idx < *(u8 *)(hdr + *(s32 *)(hdr + 8) + 5)) {
            unk_04 = idx;
            unk_00 = hdr;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_02056b74::func_02056ae8() {
    unk_04 = -1;
}

BOOL Unk_02056b74::func_02056ab0(u8 *hdr2, const char *n, const char *n2) {
    BOOL ok = (func_02056a4c(hdr2, n) & 1) ? TRUE : FALSE;
    if (ok & func_020568cc(hdr2, n2)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056a78(u8 *hdr2, s32 a, s32 idx) {
    BOOL ok = (func_020568f8(hdr2, a) & 1) ? TRUE : FALSE;
    if (ok & func_020567ec(hdr2, idx)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02056b74::func_02056a4c(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return func_020568f8(hdr2, _ZN12Unk_02056fd813func_02057100Ei(hdr2, name));
    }
    return TRUE;
}

BOOL Unk_02056b74::func_020568f8(u8 *hdr2, s32 idx2) {
    u8 *r5;
    u8 *r6;
    u8 *r4;
    u32 r3;
    u32 r7;
    u32 v;
    u8 *lst;
    u8 *tb2;
    u16 stride2;
    u8 *e;
    u8 *lst2;
    u32 hi;
    u32 e4;
    u32 lo;
    u8 *q;
    u32 c;
    u8 *ent;
    u32 *w;
    if (func_02056b60()) {
        r5 = NULL;
        if (idx2 != -1) {
            u8 *h = unk_00;
            r6 = h + *(s32 *)(h + 8);
            r4 = r6 + *(u16 *)r6;
            for (r3 = 0; r3 < r4[1]; r3++) {
                u8 *tb = r4 + *(u16 *)(r4 + 6) + 4;
                u16 stride = *(u16 *)(r4 + *(u16 *)(r4 + 6));
                u8 *it = tb + stride * r3;
                lst = r6 + *(u16 *)(tb + stride * r3);
                u32 j;
                for (j = 0; j < it[2]; j++) {
                    if (unk_04 == lst[j]) {
                        r5 = it;
                        break;
                    }
                }
                if (r5 != NULL) {
                    break;
                }
            }
            if (r5 != NULL) {
                q = hdr2 + 0x3c;
                tb2 = q + *(u16 *)(hdr2 + 0x42) + 4;
                stride2 = *(u16 *)(q + *(u16 *)(hdr2 + 0x42));
                e = tb2 + stride2 * idx2;
                if (((*(u32 *)e >> 26) & 7) != 5) {
                    v = *(u32 *)(hdr2 + 8);
                    v = v & 0xffff;
                } else {
                    v = *(u32 *)(hdr2 + 0x18);
                    v = v & 0xffff;
                }
                lst2 = r6 + *(u16 *)r5;
                r7 = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    ent = r6 + *(s32 *)(t + st * lst2[r7] + 4);
                    w = (u32 *)(ent + 0x14);
                    *w = *w & 0xc00f0000;
                    *w = *w | (*(u32 *)e + v);
                    e4 = *(u32 *)(e + 4);
                    lo = e4 & 0x7ff;
                    hi = (e4 >> 11) & 0x7ff;
                    c = *(u16 *)(ent + 0x20);
                    *(s32 *)(ent + 0x24) = lo != c ? func_01ffc5a4(lo << 12, c << 12) : 0x1000;
                    c = *(u16 *)(ent + 0x22);
                    *(s32 *)(ent + 0x28) = hi != c ? func_01ffc5a4(hi << 12, c << 12) : 0x1000;
                }
                r7++;
            test:
                if (r7 < r5[2]) {
                    goto body;
                }
                r5[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_02056b74::func_020568cc(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return func_020567ec(hdr2, _ZN12Unk_02056fd813func_02057078Ei(hdr2, name));
    }
    return TRUE;
}

BOOL Unk_02056b74::func_020567ec(u8 *hdr2, s32 idx2) {
    u8 *r6;
    u8 *r5;
    u8 *r4;
    u16 stride2;
    u8 *r7;
    u32 r3;
    u32 r2;
    u8 *g;
    u8 *tb2;
    u32 sum;
    u8 *e;
    u32 v5;
    u8 *lst2;
    u32 v1;
    if (func_02056b60()) {
        r4 = NULL;
        if (idx2 != -1) {
            u8 *h = unk_00;
            r6 = h + *(s32 *)(h + 8);
            r5 = r6 + *(u16 *)(r6 + 2);
            for (r3 = 0; r3 < r5[1]; r3++) {
                u8 *tb = r5 + *(u16 *)(r5 + 6) + 4;
                u16 stride = *(u16 *)(r5 + *(u16 *)(r5 + 6));
                r7 = tb + stride * r3;
                u8 *lst = r6 + *(u16 *)(tb + stride * r3);
                for (r2 = 0; r2 < r7[2]; r2++) {
                    if (unk_04 == lst[r2]) {
                        r4 = r7;
                        break;
                    }
                }
                if (r4 != NULL) {
                    break;
                }
            }
            if (r4 != NULL) {
                g = hdr2 + *(u16 *)(hdr2 + 0x34);
                tb2 = g + *(u16 *)(g + 6) + 4;
                stride2 = *(u16 *)(g + *(u16 *)(g + 6));
                e = tb2 + stride2 * idx2;
                v5 = *(u16 *)(tb2 + stride2 * idx2);
                v1 = (u16) * (u32 *)(hdr2 + 0x2c);
                if ((*(u16 *)(e + 2) & 1) == 0) {
                    v5 = (u32)(v5 << 15) >> 16;
                    v1 = (u32)(v1 << 15) >> 16;
                }
                lst2 = r6 + *(u16 *)r4;
                u32 n = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    u8 *ent = r6 + *(s32 *)(t + st * lst2[n] + 4);
                    *(u16 *)(ent + 0x1c) = v5 + v1;
                }
                n++;
            test:
                if (n < r4[2]) {
                    goto body;
                }
                r4[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

s8 Unk_02056b74::func_020567e4() {
    return unk_04;
}

extern "C" s32 func_02056794(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    Unk_02056b74 l;
    if (l.func_02056b28(hdr, name)) {
        s32 res = l.func_02056ab0((u8 *)p, (const char *)q, (const char *)r);
        l.func_02056ae8();
        return res;
    }
    return 0;
}

extern "C" s32 func_02056744(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    Unk_02056b74 l;
    if (l.func_02056b28(hdr, name)) {
        s32 res = l.func_02056a78((u8 *)p, q, r);
        l.func_02056ae8();
        return res;
    }
    return 0;
}

Unk_020dbe7c::~Unk_020dbe7c() {}

void Unk_020dbe7c::func_020566bc() {
    s32 cur = unk_08;
    unk_0c = cur;
    u8 m = unk_14;
    s32 v;
    if (m & 2) {
        s32 sp = unk_10;
        if (cur >= sp) {
            v = cur - sp;
        } else if ((m & 1) == 0) {
            v = cur + (unk_04 - sp);
        } else {
            v = 0;
        }
    } else {
        v = cur + unk_10;
        if (v >= (s32)unk_04) {
            if ((m & 1) == 0) {
                v = v - unk_04;
            } else {
                v = unk_04 - 0x1000;
            }
        }
    }
    unk_08 = v;
}

void Unk_020dbe7c::func_0205668c(s32 frames, u8 mode, s32 speed, u16 last) {
    if (last == 0xffff) {
        last = frames - 1;
    }
    unk_04 = frames << 12;
    unk_08 = last << 12;
    unk_10 = speed;
    unk_14 = mode;
    unk_0c = unk_08;
}

BOOL Unk_020dbe7c::func_02056654() {
    switch (unk_14) {
    case 1:
        if (unk_08 >= (s32)unk_04 - 0x1000) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (unk_08 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL Unk_020dbe7c::func_020565e8(s32 x) {
    s32 lim = x << 12;
    s32 a = unk_08;
    s32 b = unk_0c;
    if (b == a) {
        if (a == x) {
            return TRUE;
        }
        return FALSE;
    }
    BOOL flag = (unk_14 & 2) ? TRUE : FALSE;
    if (flag) {
        if (b > a) {
            if (b <= lim) goto no;
            if (a > lim) goto no;
            return TRUE;
        }
        if (lim < b) goto yes1;
        if (lim < a) goto no;
    yes1:
        return TRUE;
    }
    if (b < a) {
        if (b >= lim) goto no;
        if (a < lim) goto no;
        return TRUE;
    }
    if (lim > b) goto yes2;
    if (lim > a) goto no;
yes2:
    return TRUE;
no:
    return FALSE;
}

Unk_020dbe6c::Unk_020dbe6c() {
    func_02115fb4(&unk_04, 0, 0x24);
    unk_34 = 0;
    unk_38 = 0;
}

Unk_020dbe6c::~Unk_020dbe6c() {}

BOOL Unk_020dbe6c::func_02056544() {
    if (unk_38 != 0) {
        unk_34 += unk_38;
        if (unk_34 >= 0x1000) {
            unk_34 = 0x1000;
            unk_38 = 0;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void Unk_020dbe6c::func_02056520(s32 n) {
    unk_34 = 0;
    if (n == 0) {
        unk_38 = 0;
    } else {
        unk_38 = func_01ffc5a4(0x1000, n << 12);
    }
}

#pragma thumb off
extern "C" void func_020563cc(Unk_020561d8_Vec *v) {
    s64 sum = (s64)v->x * v->x;
    sum += (s64)v->y * v->y;
    sum += (s64)v->z * v->z;
    if (sum != 0) {
        volatile u16 *divcnt = (volatile u16 *)0x4000280;
        *divcnt = 2;
        *(volatile s64 *)0x4000290 = (s64)0x1000000 << 32;
        *(volatile s64 *)0x4000298 = sum;
        volatile u16 *sqrtcnt = (volatile u16 *)0x40002b0;
        *sqrtcnt = 1;
        *(volatile s64 *)0x40002b8 = sum << 2;
        while (*sqrtcnt & 0x8000) {}
        s32 sq = *(volatile s32 *)0x40002b4;
        while (*divcnt & 0x8000) {}
        s64 inv = *(volatile s64 *)0x40002a0;
        s64 q = inv * sq;
        v->x = (s32)((q * v->x + ((s64)0x1000 << 32)) >> 45);
        v->y = (s32)((q * v->y + ((s64)0x1000 << 32)) >> 45);
        v->z = (s32)((q * v->z + ((s64)0x1000 << 32)) >> 45);
    }
}

extern "C" void func_020562e0(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t) {
    s32 k = 0x1000 - t;
    out->m[0] = (s32)(((s64)t * a->m[0] + (s64)k * b->m[0]) >> 12);
    out->m[1] = (s32)(((s64)t * a->m[1] + (s64)k * b->m[1]) >> 12);
    out->m[2] = (s32)(((s64)t * a->m[2] + (s64)k * b->m[2]) >> 12);
    out->m[3] = (s32)(((s64)t * a->m[3] + (s64)k * b->m[3]) >> 12);
    out->m[4] = (s32)(((s64)t * a->m[4] + (s64)k * b->m[4]) >> 12);
    out->m[5] = (s32)(((s64)t * a->m[5] + (s64)k * b->m[5]) >> 12);
    func_020563cc((Unk_020561d8_Vec *)&out->m[0]);
    func_020563cc((Unk_020561d8_Vec *)&out->m[3]);
    func_01ffc928(&out->m[0], &out->m[3], &out->m[6]);
    func_01ffc928(&out->m[6], &out->m[0], &out->m[3]);
}

extern "C" void func_02056274(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t) {
    s32 k = 0x1000 - t;
    out->x = (s32)(((s64)t * a->x + (s64)k * b->x) >> 12);
    out->y = (s32)(((s64)t * a->y + (s64)k * b->y) >> 12);
    out->z = (s32)(((s64)t * a->z + (s64)k * b->z) >> 12);
}
#pragma thumb reset

void Unk_020dbe6c::func_020561d8(Unk_02056160_Arg *x) {
    Unk_020561d8_Vec v;
    Unk_020561d8_Mtx m;
    u32 idx = x->hdr->idx;
    if ((x->z->flags & 4) == 0 && idx <= 1) {
        func_02056274(&x->z->vec, &unk_28, &v, unk_34);
        Unk_020561d8_Z *z = x->z;
        Unk_020561d8_Vec *pv = &z->vec;
        pv->x = v.x;
        pv->y = v.y;
        pv->z = v.z;
    }
    if (x->z->flags & 2) {
        func_01ffb448(&x->z->mtx);
    }
    func_020562e0(&x->z->mtx, &unk_04, &m, unk_34);
    x->z->mtx = m;
    x->z->flags &= ~2;
}

void Unk_020dbe6c::func_02056160(Unk_02056160_Arg *x) {
    Unk_02056160_Rec *r = &x->tbl->recs[x->hdr->idx];
    if (r->mtx.m[0] == 0 && r->mtx.m[1] == 0 && r->mtx.m[2] == 0 && r->mtx.m[3] == 0 && r->mtx.m[4] == 0 &&
        r->mtx.m[5] == 0 && r->mtx.m[6] == 0 && r->mtx.m[7] == 0 && r->mtx.m[8] == 0) {
        func_01ffb448(&unk_04);
    } else {
        unk_04 = r->mtx;
    }
    unk_28.x = r->vec.x;
    unk_28.y = r->vec.y;
    unk_28.z = r->vec.z;
}

Unk_0205614c *Unk_0205614c::func_0205614c() {
    _ZN12Unk_020e45ecC2Ev(unk_04);
    return this;
}

void Unk_0205614c::func_02056124() {
    unk_21 = 0xff;
    unk_22 = 0xff;
    unk_20 = 0xff;
    unk_23 = 0;
    unk_00 = NULL;
    unk_24 = 0xffff;
}

BOOL Unk_0205614c::func_0205610c() {
    func_02056124();
    _ZN12Unk_020e45ec13func_020b8b08Ev(unk_04);
    return TRUE;
}

void Unk_0205614c::func_020560f8() {
    func_02056124();
    _ZN12Unk_020e45ec13func_020b89c8Ev(unk_04);
}

void Unk_0205614c::func_02056070(u32 frame, u8 *p2, void *p3, void *p4) {
    u8 *b = p2;
    u8 i;
    u8 *p;
    s32 n;
    u16 *h;
    if (unk_22 != 0xff && frame != unk_24) {
        unk_24 = frame;
        h = (u16 *)unk_00;
        p = b + h[3];
        i = 0;
        n = h[0] - 1;
        for (; i < n; i = i + 1) {
            if (*(u16 *)(p + 4) > frame) break;
            p += 4;
        }
        if (unk_21 != i) {
            unk_21 = i;
            u8 v = func_02106300((u8 *)p3 + 0x3c, b + *(u16 *)(b + 8) + (p[2] << 4));
            if (v != unk_20) {
                unk_20 = v;
                func_02056028(p4, p3);
            }
        }
    }
}

void Unk_0205614c::func_02056028(void *a, void *b) {
    if (!_ZN12Unk_020e45ec13func_020b8984EPvjj(unk_04, a, unk_22, _ZN12Unk_02056fd813func_020570b0Ei(b, unk_20))) {
        unk_21 = 0xff;
        unk_20 = 0xff;
        unk_24 = 0xffff;
    }
}

BOOL Unk_0205614c::func_02056018() { return (unk_23 & 1) ? TRUE : FALSE; }

Unk_020dbe5c::Unk_020dbe5c() { func_02055f9c(); }

Unk_020dbe5c::~Unk_020dbe5c() {}

void Unk_020dbe5c::func_02055f9c() {
    unk_18 = NULL;
    unk_24 = 0;
    unk_26 = 0;
    unk_28 = NULL;
    unk_20 = NULL;
}

BOOL Unk_020dbe5c::func_02055f1c(void *r1, void *r2, u32 r3, void *heap) {
    unk_18 = r1;
    if (heap == NULL) {
        heap = data_021f482c;
    }
    unk_1c = func_0210629c(r2);
    unk_26 = r3;
    unk_28 = (Unk_0205614c *)func_020e8608(heap, unk_26 * 0x28);
    if (unk_28 == NULL) {
        return FALSE;
    }
    s32 i;
    for (i = 0; i < unk_26; i++) {
        Unk_0205614c *e = &unk_28[i];
        if (e) {
            e->func_0205614c();
        }
        if (!unk_28[i].func_0205610c()) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_020dbe5c::func_02055eec() {
    s32 i;
    for (i = 0; i < unk_26; i++) {
        unk_28[i].func_020560f8();
    }
    func_02055f9c();
}

void Unk_020dbe5c::func_02055e4c(void *r1, void *r2, u32 r3, u8 p5, void *p6) {
    unk_20 = func_02106824(r1, 0);
    unk_24 = *(u16 *)((u8 *)unk_20 + 4);
    if (r3 == 0) {
        r3 = unk_24;
    }
    u8 *hdr = (u8 *)unk_18;
    u8 *base = hdr + *(u32 *)(hdr + 8);
    s32 i;
    for (i = 0; i < *((u8 *)unk_20 + 0xd); i++) {
        u8 *a = (u8 *)unk_20 + 0xc;
        a = a + *(u16 *)(a + 6);
        u8 *b = a + *(u16 *)(a + 2);
        unk_28[i].unk_22 = func_02106300(base + 4, b + i * 16);
        unk_28[i].unk_00 = func_021066cc(unk_20, i);
        unk_28[i].unk_21 = 0xff;
        unk_28[i].unk_20 = 0xff;
        unk_28[i].unk_24 = 0xffff;
    }
    ::_ZN12Unk_020dbe7c13func_0205668cEihit(this, r3, p5, p6, r2);
}

void Unk_020dbe5c::func_02055e38() {
    ::_ZN12Unk_020dbe7c13func_020566bcEv(this);
    func_02055df0();
}

void Unk_020dbe5c::func_02055df0() {
    u32 frame = (u32)(unk_08 << 4) >> 16;
    s32 i;
    for (i = 0; i < unk_26; i++) {
        if (!unk_28[i].func_02056018()) {
            unk_28[i].func_02056070(frame, (u8 *)unk_20, unk_1c, unk_18);
        }
    }
}

BOOL Unk_020dbe5c::func_02055d60(s32 unused, u32 x) {
    BOOL z = FALSE;
    s32 id = _ZN12Unk_02056fd813func_02057110Ei(unk_18);
    
    if (id == -1) return z;
    u8 v = _ZN12Unk_02056fd813func_02057100Ei(unk_1c, x);
    
    if (v == -1) return z;
    s32 i = z;
    for (; i < unk_26; i++) {
        if (id == unk_28[i].unk_22) {
            if (v != unk_28[i].unk_20) {
                unk_28[i].unk_20 = v;
                unk_28[i].unk_21 = 0xff;
                unk_28[i].unk_24 = 0xffff;
                unk_28[i].func_02056028(unk_18, unk_1c);
                return TRUE;
            }
            return z;
        }
    }
    return z;
}

void Unk_020dbe5c::func_02055d18() {
    s32 id = _ZN12Unk_02056fd813func_02057110Ei(unk_18);
    s32 i;
    if (id != -1) {
        for (i = 0; i < unk_26; i++) {
            if (id == unk_28[i].unk_22) {
                unk_28[i].unk_23 |= 1;
                break;
            }
        }
    }
}

extern "C" void func_02055cd0(Unk_02055cd0_Obj *p, void *q) {
    s32 i, r;
    r = _ZN12Unk_02056fd813func_02057110Ei((void *)p->unk_18);
    i = 0;
    if (r != -1) {
        u32 n = p->unk_26;
        for (; i < (s32)n; i++) {
            if (r == p->unk_28[i].unk_22) {
                p->unk_28[i].unk_23 &= ~1;
                break;
            }
        }
    }
}

Unk_020dbe4c::Unk_020dbe4c() {
    unk_1c = 0;
    unk_18 = 0;
}

Unk_020dbe4c::~Unk_020dbe4c() {
}


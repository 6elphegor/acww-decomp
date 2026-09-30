#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_02219578_P2 {
    s32 x, z;
    Unk_ov003_02219578_P2(s32 a, s32 b) { x = a; z = b; }
    Unk_ov003_02219578_P2(const Unk_ov003_02219578_P2 &o) { x = o.x; z = o.z; }
};

struct Unk_ov003_02219578_V3 {
    s32 x, y, z;
    Unk_ov003_02219578_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_02219578_V3(const Unk_ov003_02219578_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

struct Unk_ov003_022195b8_Pos {
    s32 x, z;
};

struct Unk_ov003_02219654_V3 {
    s32 x, y, z;
};

struct Unk_ov003_02219654_Obj {
    u8 pad_00[0x5c];
    Unk_ov003_02219654_V3 unk_5c;
};

typedef Unk_ov003_02219578_P2 P2;
typedef Unk_ov003_02219578_V3 V3;

// ---------------------------------------------------------------- classes
class Unk_ov003_022324ec : public Unk_020d8c7c {
public:
    Unk_ov003_022324ec();
};

struct Unk_020d8d3c {
    Unk_020d8d3c();
    virtual ~Unk_020d8d3c();
    virtual s32 vfunc_08();
};

class Unk_ov003_02232c08 : public Unk_020d8d3c {
public:
    virtual ~Unk_ov003_02232c08();
};

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 pad_04[0x94 / 4];
    u32 unk_98;
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

class Unk_ov003_0221c4e4 {
public:
    Unk_ov003_0221c4e4();
    ~Unk_ov003_0221c4e4();
    u32 pad[4];
};

class Unk_ov003_0223463c : public Unk_020d8c7c {
public:
    Unk_ov003_0223463c();
    virtual ~Unk_ov003_0223463c();

    /* 0x050 */ u8 pad_050[0x174 - 0x50];
    /* 0x174 */ Unk_020dbd34 unk_174[0x12];
    /* 0xc6c */ Unk_020dbd34 unk_c6c[6];
    /* 0x1014 */ Unk_020dbd34 unk_1014[3];
    /* 0x11e8 */ Unk_020dbd34 unk_11e8[6];
    /* 0x1590 */ Unk_020dbd34 unk_1590[0x28];
    /* 0x2df0 */ Unk_020dbd34 unk_2df0[4];
    /* 0x3060 */ u8 pad_3060[8];
    /* 0x3068 */ Unk_020dbd34 unk_3068[0x20];
    /* 0x43e8 */ Unk_020dbd34 unk_43e8[5];
    /* 0x46f4 */ u8 pad_46f4[0x14];
    /* 0x4708 */ Unk_020dbd34 unk_4708[2];
    /* 0x4840 */ Unk_020dbd34 unk_4840[2];
    /* 0x4978 */ u8 pad_4978[0x30];
    /* 0x49a8 */ Unk_020dbd34 unk_49a8[2];
    /* 0x4ae0 */ Unk_020dbd44 unk_4ae0;
    /* 0x4af0 */ Unk_020dbd44 unk_4af0;
    /* 0x4b00 */ Unk_020dbd44 unk_4b00;
    /* 0x4b10 */ Unk_020dbd44 unk_4b10;
    /* 0x4b20 */ Unk_ov003_0221c4e4 unk_4b20;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
};

extern "C" {
extern u8 data_ov003_022359a4[];
extern u8 data_ov003_0222f01c[];
extern Unk_020cbb18 *data_020cbb18;

void *func_0204da0c();
void func_0204ee10(s32 *a, s32 *b, s32 c);
BOOL func_0204e3a0(void *g, s32 x, s32 z);
void *func_0204ebd8(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
s32 func_02045354(void *p, s32 a);
BOOL func_0204e474(void *g, s32 x, s32 z);
void *func_02095204(s32 a);
s32 func_02133150(s32 a, s32 b);
void func_0204ed8c(void *out, s32 x, s32 z);
s32 func_02063ba4(s32 a);
u8 *func_02045214();

s32 func_ov003_02219d64(void *tbl, s32 a, P2 p, V3 q, s32 k, s32 v, s32 w, s32 x);
s32 func_ov003_02219dc0(void *tbl, s32 a, P2 p, V3 q, s32 k, s32 v, s32 w, s32 x);
}

// ---------------------------------------------------------------- functions
extern "C" void *func_ov003_0221927c()
{
    return new Unk_ov003_022324ec;
}

Unk_ov003_02232c08::~Unk_ov003_02232c08() {}

Unk_ov003_0223463c::~Unk_ov003_0223463c() {}

extern "C" s32 func_ov003_0221950c(s32 a, s32 b)
{
    void *g = func_0204da0c();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    func_0204ee10(&p0, &p1, b);
    s32 sel;
    if (func_0204e3a0(g, p0, p1) == 0) {
        sel = 0xfc;
    } else {
        sel = 0xfd;
    }
    return func_ov003_02219d64(data_ov003_022359a4, a, P2(p0, p1), V3(0, 0, 0), 0xe, sel, 0, 0);
}

extern "C" void func_ov003_02219578(s32 a, s32 v, P2 p, V3 q)
{
    func_ov003_02219dc0(data_ov003_022359a4, a, p, q, 0xd, v, 0, 0);
}

extern "C" s32 func_ov003_022195b8(s32 *p)
{
    s32 result;
    void *g;
    g = func_0204da0c();
    result = 2;
    if (g == NULL) {
        return result;
    }
    volatile s32 k10, k14;
    s32 i = 0;
    k14 = i;
    k10 = i;
    for (; i < 9; i++) {
        u32 b = data_ov003_0222f01c[i];
        s32 x = p[0] + (((s32)b >> 4) - 8);
        s32 z = p[1] + ((b & 0xf) - 8);
        s32 hx = x >> 4;
        s32 hz = z >> 4;
        u16 *c = (u16 *)func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), k10);
        if (c != NULL && *c == 0xfff1) {
            Unk_ov003_022195b8_Pos pos;
            pos.x = x;
            pos.z = z;
            if (func_02045354(&pos, k14) < 0) {
                if (func_0204e474(g, x, z)) {
                    p[0] = x;
                    p[1] = z;
                    result = 0;
                }
                break;
            }
        }
    }
    return result;
}

extern "C" void func_ov003_02219654(s32 a, s32 n)
{
    V3 A(0, 0, 0);
    s32 p0 = 0;
    s32 p1 = 0;
    Unk_ov003_02219654_Obj *obj = (Unk_ov003_02219654_Obj *)func_02095204(4);
    if (obj != NULL) {
        Unk_ov003_02219654_V3 *pv = &obj->unk_5c;
        A.x = pv->x;
        A.y = pv->y;
        A.z = pv->z;
        A.x = A.x + ((n << 12) >> 4);
        func_0204ee10(&p0, &p1, (s32)&A);
        p1 = (func_02133150(p1, 16) << 4) + 1;
        s32 tmp[3];
        func_0204ed8c(tmp, p0, p1);
        A.z = tmp[2];
    }
    A.y = 0xa000;
    s32 t;
    if (a == 0) {
        t = 0x156b;
    } else {
        t = 0x137b;
    }
    Unk_020cbb18 *g = data_020cbb18;
    s32 r;
    if (g->func_02072e44()) {
        r = g->unk_64;
    } else {
        r = 0;
    }
    func_ov003_02219dc0(data_ov003_022359a4, r, P2(p0, p1), V3(A.x, A.y, A.z), 0xc, t, 0, 0);
}

extern "C" void func_ov003_02219718(s32 a, s32 b, P2 c)
{
    s32 r = 0;
    s32 tmp[3];
    func_0204ed8c(tmp, c.x, c.z);
    u8 *obj = (u8 *)func_02095204(4);
    if (obj != NULL) {
        r = (s32)(func_02063ba4(*(s16 *)(obj + 0x8e)) << 29) >> 16;
    }
    func_ov003_02219dc0(data_ov003_022359a4, a, c, V3(tmp[0], tmp[1], tmp[2]), 0xb, b, r, 0);
}

extern "C" s32 func_ov003_0221977c(s32 a, s32 b)
{
    void *g = func_0204da0c();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    func_0204ee10(&p0, &p1, b);
    s32 sel;
    if (func_0204e3a0(g, p0, p1) == 0) {
        sel = 0xfc;
    } else {
        sel = 0xfd;
    }
    return func_ov003_02219d64(data_ov003_022359a4, a, P2(p0, p1), V3(0, 0, 0), 0xa, sel, 0, 0);
}

extern "C" void func_ov003_022197e8(s32 a, s32 b, P2 c, V3 d)
{
    volatile u16 t;
    t = 0xfff1;
    t = b;
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = t;
    if (t <= 5) f1 = TRUE;
    if (!f1) { if (v < 6 || v > 0xb) f2 = FALSE; }
    if (!f2) { if (v < 0xc || v > 0x11) f3 = FALSE; }
    if (!f3) { if (v < 0x12 || v > 0x19) { if (v != 0x1c) f4 = FALSE; } }
    if (!f4) {
        if (v < 0x8a || v > 0x8f) {
            if (v < 0x90 || v > 0x95) {
                if (v < 0x96 || v > 0x9b) {
                    if (v < 0x9c || v > 0xa3) {
                        if (v != 0xa5) f5 = FALSE;
                    }
                }
            }
        }
    }
    if (!f5) { if (v != 0x1a) f6 = FALSE; }
    if (!f6) { if (v != 0xa4) f7 = FALSE; }
    if (!f7) { if (v != 0x1d) f8 = FALSE; }
    if (f8 || (v >= 0x14fe && v <= 0x1517) || b == 0x1567) b = 0x1408;
    func_ov003_02219dc0(data_ov003_022359a4, a, c, d, 9, b, 0, 0);
}

extern "C" s32 func_ov003_02219908(s32 a, s32 b, s32 c)
{
    void *g = func_0204da0c();
    if (g == NULL) {
        return 0;
    }
    s32 p0 = 0;
    s32 p1 = 0;
    func_0204ee10(&p0, &p1, b);
    s32 x = p0;
    s32 z = p1;
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    u16 *cell = (u16 *)func_0204ebd8(g, hx, hz, x - (hx << 4), z - (hz << 4), 0);
    u32 r = 0x2b;
    if (cell != NULL) {
        BOOL f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
        u32 v = *cell;
        if (v >= 0x2b && v <= 0x2e) f1 = TRUE;
        if (!f1) { if (v < 0xff || v > 0x102) f2 = FALSE; }
        if (!f2) { if (v < 0x62 || v > 0x65) f3 = FALSE; }
        if (!f3) { if (v < 0xd0 || v > 0xd3) f4 = FALSE; }
        if (f4 || (v >= 0x26 && v <= 0x2a) || (v >= 0x5d && v <= 0x61) || (v >= 0x2f && v <= 0x56)
            || (v >= 0x57 && v <= 0x5b) || (v >= 0x66 && v <= 0x68) || v == 0x69 || (v >= 0x6a && v <= 0x6c)
            || v == 0x6d || (v >= 0xc8 && v <= 0xcf) || v == 0x25 || v == 0x5c || v == 0xc7) {
            r = v;
        }
    }
    return func_ov003_02219d64(data_ov003_022359a4, a, P2(p0, p1), V3(0, 0, 0), 8, r, c, 0);
}

extern "C" void func_ov003_02219a1c(s32 a, s32 v, P2 p, V3 q)
{
    func_ov003_02219dc0(data_ov003_022359a4, a, p, q, 7, v, 0, 0);
}

extern "C" void func_ov003_02219a5c(s32 a, s32 v, P2 p, V3 q, s32 w)
{
    func_ov003_02219dc0(data_ov003_022359a4, a, p, q, 6, v, 0, w);
}

extern "C" void func_ov003_02219a9c(s32 a, s32 v, P2 p, V3 q, s16 t, s32 x)
{
    func_ov003_02219dc0(data_ov003_022359a4, a, p, q, 5, v, t, x);
}

extern "C" void func_ov003_02219ae0(s32 a, s32 b, P2 c)
{
    func_ov003_02219dc0(data_ov003_022359a4, a, c, V3(0, 0, 0), 4, b, 0, 0);
}

extern "C" s32 func_ov003_02219b18(s32 a, s32 b)
{
    s32 p0 = 0;
    s32 p1 = 0;
    u32 r = 0xfff1;
    func_0204ee10(&p0, &p1, b);
    Unk_ov003_022195b8_Pos pos;
    pos.x = p0;
    pos.z = p1;
    if (func_02045354(&pos, 0) >= 0) {
        u8 *c = func_02045214();
        if (c != NULL) {
            r = *(u16 *)(c + 0xa);
        }
    }
    return func_ov003_02219d64(data_ov003_022359a4, a, P2(p0, p1), V3(0, 0, 0), 3, r, 0, 0);
}

#include "types.h"

extern "C" {
void func_02071a4c(void *p);
void func_020719b0(void *p);
u32 func_02063b8c(u32 n);
void func_020b2608(void *p);
void func_020b260c(void *p);
void func_02071ae0(void *p);
void func_02071af0(void *p);
}

// ---- Unk_020b246c
class Unk_020b246c_Sub {
public:
    Unk_020b246c_Sub();
    ~Unk_020b246c_Sub();
};

class Unk_020b246c {
public:
    Unk_020b246c();
    ~Unk_020b246c();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_020b246c_Sub unk_04;
};

Unk_020b246c::Unk_020b246c() {
    func_020b2608(this);
}

Unk_020b246c::~Unk_020b246c() {
    func_020b260c(this);
}

Unk_020b246c_Sub::Unk_020b246c_Sub() {
    func_02071ae0(this);
}

Unk_020b246c_Sub::~Unk_020b246c_Sub() {
    func_02071af0(this);
}

extern "C" {
void func_020b249c(void *p) { func_02071a4c(p); }
void func_020b24a4(void *p) { func_020719b0(p); }
void func_020b2608(void *p) {}
void func_020b260c(void *p) {}
}

// ---- Unk_020b24ac
extern "C" void *func_02071a50(void *p);

class Unk_020b24ac {
public:
    void func_020b24ac();
    Unk_020b24ac *func_020b24d4();

    /* 0x000 */ u8 unk_000[0x228];
    /* 0x228 */ u8 unk_228;
};

void Unk_020b24ac::func_020b24ac() {
    if (unk_228 >= 3) {
        unk_228 = unk_228 % 3;
        func_020b24ac();
    }
}

Unk_020b24ac *Unk_020b24ac::func_020b24d4() {
    unk_228 = func_02063b8c(3);
    return (Unk_020b24ac *)func_02071a50(this);
}

extern "C" u32 func_020b2514(u8 *p, u32 idx) {
    u32 v = p[idx & 3];
    if (v >= 25) {
        v = (s32)v % 25;
    }
    return v;
}

extern "C" void func_020b2530(u8 *out) {
    s32 a = func_02063b8c(5);
    s32 sel = 0;
    s32 b = func_02063b8c(4);
    s32 n = 0;
    u32 i;
    for (i = 0; i < 5; i++) {
        if ((s32)i == a) {
            continue;
        }
        if (n == b) {
            sel = i;
            break;
        }
        n++;
    }
    for (i = 0; i < 4; i++) {
        out[i] = 0xff;
    }
    u32 k = 0;
    s32 base = a % 5;
    base = base * 5;
    for (; k < 3; k++) {
        s32 skip = func_02063b8c(5 - k);
        s32 cnt = 0;
        for (u32 j = 0; j < 5; j++) {
            BOOL found = FALSE;
            u32 v = j % 5 + base;
            for (u32 m = 0; m < 4; m++) {
                if (out[m] == v) {
                    found = TRUE;
                    break;
                }
            }
            if (!found) {
                if (cnt == skip) {
                    out[k] = v;
                    break;
                }
                cnt++;
            }
        }
    }
    u32 r = func_02063b8c(5);
    s32 s = sel % 5;
    out[3] = s * 5 + r % 5;
}

// ---- Unk_020e3dcc
struct Pos_020b2610 {
    s32 x, y;
};

extern "C" {
extern u8 data_020e416c;
extern u8 data_021ee2b0[];
extern void *data_021c47c4;
extern u8 data_021ed2e6[];
extern u32 data_021ee2bc;
BOOL func_ov003_0221fd44(void *p, s32 *a, s32 *b, s32 *c, s32 x, s32 y);
u16 *func_0204ebd8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_0204b14c(void *p);
s32 func_0204b124(void *p);
void func_020af590(void *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g);
s32 func_020b50e8(void);
void operator delete(void *p);
}

static inline BOOL func_020b2768_is_flag() {
    if (data_020e416c == 0) {
        return TRUE;
    }
    return FALSE;
}

static inline u16 *lookup_020b2610(s32 x, s32 y) {
    void *m = data_021c47c4;
    if (m != NULL) {
        s32 xh = x >> 4;
        s32 yh = y >> 4;
        return func_0204ebd8(m, xh, yh, x - (xh << 4), y - (yh << 4), 0);
    }
    return NULL;
}

class Unk_0203160c {
public:
    Unk_0203160c();
    virtual ~Unk_0203160c();
};

class Unk_020e3dcc : public Unk_0203160c {
public:
    Unk_020e3dcc();
    virtual ~Unk_020e3dcc();
    virtual BOOL vfunc_08(s32 *a, s32 *b, s32 *c, volatile s32 x, volatile s32 y);
};

Unk_020e3dcc::Unk_020e3dcc() {}

Unk_020e3dcc::~Unk_020e3dcc() {}

BOOL Unk_020e3dcc::vfunc_08(s32 *a, s32 *b, s32 *c, volatile s32 x, volatile s32 y) {
    if (func_020b2768_is_flag()) {
        if (!func_ov003_0221fd44(data_021ee2b0, a, b, c, x, y)) {
            void *m = data_021c47c4;
            if (m != NULL) {
                s32 lx = x;
                s32 ly = y;
                s32 xh = lx >> 4;
                s32 yh = ly >> 4;
                u16 *p = func_0204ebd8(m, xh, yh, lx - (xh << 4), ly - (yh << 4), 0);
                if (p != NULL) {
                    if (*p == 0x500a) {
                        *a = 0xb33;
                        *b = 0x2000;
                        *c = 10;
                        return TRUE;
                    } else if (func_0204b14c(p)) {
                        s32 t = func_0204b124(p);
                        s32 u, w;
                        func_020af590(data_021ed2e6, t, &u, &w, 0, 0, 0, 0);
                        *a = 0x1000;
                        *b = 0x2000;
                        *c = 0;
                        return TRUE;
                    }
                }
            }
            return FALSE;
        }
        return TRUE;
    } else if (func_020b50e8() == 0x1d && x == 3 && y == 4) {
        *a = 0xe66;
        *b = 0x2000;
        *c = 10;
        return TRUE;
    }
    return FALSE;
}

// ---- globals / lookup table
extern "C" {
extern void *data_021ee29c;
extern u32 data_021ee354[0x22];
extern u8 data_020e3df4[];
extern u32 data_021f482c;
extern u8 data_020e3e04[];
extern u8 data_020e3e08[];
void *func_020641ec(void *name, u32 a, u32 b, u32 c);
void func_020639e8(char *buf, const void *fmt, ...);
void func_020e8558(void *p);
BOOL func_02101340(void *file, const void *mode);
void *func_021012bc(char *name);
void func_02101310(void *file);
}

extern "C" u32 func_020b2768(void) {
    return data_021ee2bc;
}

extern "C" BOOL func_020b2774(void) {
    if (data_021ee2bc != 0) {
        data_021ee2bc = 0;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b278c(u32 v) {
    if (data_021ee2bc == 0) {
        data_021ee2bc = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_020b27a4(u16 *p) {
    if (data_021ee29c != NULL) {
        s32 idx;
        BOOL in = FALSE;
        u32 v = *p;
        if (v >= 0x5000 && v <= 0x5021) {
            in = TRUE;
        }
        if (in) {
            idx = v & 0xfff;
        } else {
            idx = -1;
        }
        if (idx != -1) {
            return data_021ee354[idx];
        }
    }
    return 0;
}

extern "C" void func_020b27f4(void) {
    for (u32 i = 0; i < 0x22; i++) {
        data_021ee354[i] = 0;
    }
    if (data_021ee29c != NULL) {
        func_020e8558(data_021ee29c);
        data_021ee29c = NULL;
    }
}

extern "C" void func_020b2828(void) {
    char name[0x20];
    u8 file[0x6c];
    u32 i;
    void *p;
    p = func_020641ec(data_020e3df4, data_021f482c, 4, 0);
    data_021ee29c = p;
    if (p != NULL) {
        if (func_02101340(file, data_020e3e04)) {
            for (i = 0; i < 0x22; i++) {
                func_020639e8(name, data_020e3e08, i);
                data_021ee354[i] = (u32)func_021012bc(name);
            }
            func_02101310(file);
        }
    } else {
        for (i = 0; i < 0x22; i++) {
            data_021ee354[i] = 0;
        }
    }
}

// ---- Unk_020b28ac: a packed table of 4-byte entries whose first byte is a type character
class Unk_020b28ac {
public:
    void func_020b28ac(s32 *outX, s32 *outY, s32 *outW, s32 *outH);
    BOOL func_020b2958(s32 *a, s32 *b, s32 *c, u32 idx);
    u32 func_020b29e4();
    BOOL func_020b2a0c(s32 *a, s32 *b, s32 *c, u32 idx);
    BOOL func_020b2a5c(s32 *a, s32 *b, u32 idx);
    BOOL func_020b2aac(s32 *a, s32 *b, u32 idx);
    BOOL func_020b2ae0(s32 *a, s32 *b, u32 idx);
    u32 func_020b2b0c();
    u32 func_020b2b28();
    u32 func_020b2b5c();
    u32 func_020b2b80();
    u32 func_020b2b98();
};

u32 Unk_020b28ac::func_020b2b80() {
    s8 *p = (s8 *)this;
    u32 n = 0;
    s32 c;
    while ((c = p[0]) == 0x52 || c == 0x4d) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b98() {
    s8 *p = (s8 *)this;
    u32 n = 0;
    while (p[0] == 0x4d) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b5c() {
    s8 *p = (s8 *)this + func_020b2b80() * 4;
    u32 n = 0;
    while (p[0] == 0x46) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b28() {
    u32 a = func_020b2b80();
    u32 b = func_020b2b5c();
    s8 *p = (s8 *)this + a * 4 + b * 4;
    u32 n = 0;
    while (p[0] == 0x53) {
        p += 4;
        n++;
    }
    return n;
}

u32 Unk_020b28ac::func_020b2b0c() {
    u32 a = func_020b2b5c();
    return a + func_020b2b28();
}

u32 Unk_020b28ac::func_020b29e4() {
    u32 a = func_020b2b5c();
    u32 b = func_020b2b80();
    u32 c = func_020b2b28();
    return *(u32 *)((u8 *)this + (a + (b + c) + 1) * 4);
}

BOOL Unk_020b28ac::func_020b2a0c(s32 *a, s32 *b, s32 *c, u32 idx) {
    s8 *base = (s8 *)this + func_020b2b80() * 4;
    if (idx < func_020b2b28()) {
        u32 t = func_020b2b5c();
        s8 *e = base + (t + idx) * 4;
        *a = e[1];
        *b = e[2];
        *c = e[3];
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2a5c(s32 *a, s32 *b, u32 idx) {
    s8 *base = (s8 *)this + func_020b2b80() * 4;
    if (idx < func_020b2b0c()) {
        s8 *e = base + idx * 4;
        *a = e[2];
        *b = e[3];
        if (*a == 0 && *b == 0) {
            return FALSE;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2aac(s32 *a, s32 *b, u32 idx) {
    if (idx < func_020b2b80()) {
        s8 *e = (s8 *)this + idx * 4;
        *a = e[2];
        *b = e[3];
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2ae0(s32 *a, s32 *b, u32 idx) {
    if (idx < func_020b2b98()) {
        return func_020b2aac(a, b, idx);
    }
    return FALSE;
}

BOOL Unk_020b28ac::func_020b2958(s32 *a, s32 *b, s32 *c, u32 idx) {
    u32 count = func_020b29e4();
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    b[0] = 0;
    b[1] = 0;
    b[2] = 0;
    c[0] = 0;
    c[1] = 0;
    c[2] = 0;
    if (idx < count) {
        u32 x = func_020b2b5c();
        u32 y = func_020b2b80();
        u32 z = func_020b2b28();
        u8 *base = (u8 *)this + ((x + (y + z) + 1) * 4 + 4);
        s32 *e = (s32 *)(base + idx * 0x24);
        a[0] = e[0];
        a[1] = e[1];
        a[2] = e[2];
        b[0] = e[3];
        b[1] = e[4];
        b[2] = e[5];
        c[0] = e[6];
        c[1] = e[7];
        c[2] = e[8];
        return TRUE;
    }
    return FALSE;
}

void Unk_020b28ac::func_020b28ac(s32 *outX, s32 *outY, s32 *outW, s32 *outH) {
    s32 maxX = 0, minX = 0, maxY = 0, minY = 0;
    u32 count = func_020b2b28();
    if (count != 0) {
        u32 i = 0;
        maxX = -1;
        minX = 1;
        maxY = -1;
        minY = 1;
        for (; i < count; i++) {
            s32 ea, ex, ey;
            if (func_020b2a0c(&ea, &ex, &ey, i)) {
                if (ex < minX) {
                    minX = ex;
                }
                if (ey < minY) {
                    minY = ey;
                }
                if (ex > maxX) {
                    maxX = ex;
                }
                if (ey > maxY) {
                    maxY = ey;
                }
            }
        }
    }
    s32 x1 = (maxX << 13) + 0x1000;
    s32 x0 = (minX << 13) - 0x1000;
    s32 y1 = (maxY << 13) + 0x1000;
    s32 y0 = (minY << 13) - 0x1000;
    *outX = (x1 + x0) >> 1;
    *outY = (y1 + y0) >> 1;
    s32 w = x1 - x0;
    if (w < 0) {
        w = -w;
    }
    *outW = w;
    s32 h = y1 - y0;
    if (h < 0) {
        h = -h;
    }
    *outH = h;
}

extern "C" {
BOOL func_0204b1a0(u16 *p);
u16 func_0204b160(u32 a);
BOOL func_0204b0f8(u16 *p);
u16 func_0204b0e0(u32 a);
}

extern "C" s32 func_020b2bac(u16 arg) {
    u16 v = arg;
    if (func_0204b1a0(&v)) {
        v = func_0204b160(0);
    }
    if (func_0204b0f8(&v)) {
        v = func_0204b0e0(0);
    }
    BOOL in = FALSE;
    volatile u16 &vv = v;
    u32 w = vv;
    if (vv >= 0x5000 && w <= 0x5021) { in = TRUE; }
    if (in) { return w & 0xfff; }
    return -1;
}

extern "C" u32 func_020b2c14(s32 v) {
    u32 n = 0;
    for (u32 i = 0; i < 4; i++) {
        if ((v >> i) & 1) {
            n++;
        }
    }
    return n;
}

// ---- overlay class whose vtable is at 0x02232c08 (only its D1 is in this range)
class Unk_ov003_02232c08 : public Unk_0203160c {
public:
    virtual ~Unk_ov003_02232c08();
};

Unk_ov003_02232c08::~Unk_ov003_02232c08() {}

// ---- Unk_020e3ecc
extern "C" u32 data_020d0bdc[];

class Unk_020a7160 {
public:
    Unk_020a7160();
    virtual ~Unk_020a7160();
    virtual void vfunc_08();

    /* 0x04 */ u8 unk_04[0x1c];
};

class Unk_020e3ecc : public Unk_020a7160 {
public:
    Unk_020e3ecc();
    virtual ~Unk_020e3ecc();
    virtual u32 vfunc_0c();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 unk_29;
};

Unk_020e3ecc::Unk_020e3ecc() : unk_20(0), unk_24(0), unk_28(0), unk_29(0) {}

Unk_020e3ecc::~Unk_020e3ecc() {}

u32 Unk_020e3ecc::vfunc_0c() {
    return data_020d0bdc[unk_20];
}

// ---- Unk_020b2d30: large aggregate (ctor at 0x020b2d30, dtor at 0x020b2cc4)
extern "C" void func_02115fb4(void *dst, u32 value, u32 size);

class Unk_020b2d30;

class Unk_020b3f3c {
public:
    Unk_020b3f3c(Unk_020b2d30 *owner);
    ~Unk_020b3f3c();
    u8 unk_00[0x4c];
};

class Unk_020b3fd4 {
public:
    Unk_020b3fd4();
    ~Unk_020b3fd4();
    u8 unk_00[0x4a4];
};

class Unk_020a8b5c {
public:
    Unk_020a8b5c();
    ~Unk_020a8b5c();
    u8 unk_00[0xc];
};

class Unk_020a71b8 {
public:
    Unk_020a71b8();
    ~Unk_020a71b8();
    u8 unk_00[0x34];
};

class Unk_020b3854 {
public:
    Unk_020b3854();
    ~Unk_020b3854();
    u8 unk_00[0x40];
};

class Unk_020b368c {
public:
    Unk_020b368c();
    ~Unk_020b368c();
    u8 unk_00[0x30];
};

class Unk_020b4030 {
public:
    Unk_020b4030();
    ~Unk_020b4030();
    u8 unk_00[0x20];
};

class Unk_020b2d30 {
public:
    Unk_020b2d30();
    ~Unk_020b2d30();

    /* 0x000 */ Unk_020b3f3c unk_000;
    /* 0x04c */ Unk_020b3fd4 unk_04c;
    /* 0x4f0 */ Unk_020a8b5c unk_4f0;
    /* 0x4fc */ u8 unk_4fc[0x400];
    /* 0x8fc */ Unk_020a71b8 unk_8fc[11];
    /* 0xb38 */ u32 unk_b38;
    /* 0xb3c */ Unk_020b3854 unk_b3c;
    /* 0xb7c */ Unk_020b368c unk_b7c;
    /* 0xbac */ Unk_020b4030 unk_bac[16];
};

Unk_020b2d30::Unk_020b2d30() : unk_000(this), unk_b38(0) {
    func_02115fb4(unk_4fc, 0, 0x400);
}

Unk_020b2d30::~Unk_020b2d30() {}

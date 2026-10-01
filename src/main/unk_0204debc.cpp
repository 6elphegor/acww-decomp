#include "types.h"

struct Unk_0204debc_Pos {
    s32 x, y;
};

struct Unk_0204debc_Entry {
    u32 v;
    void *a;
    u32 z;
    void *b;
};

struct Unk_0204dcf0 {
    u8 data[0x200];
    Unk_0204dcf0();
    ~Unk_0204dcf0();
};

struct Unk_0203745c {
    u8 data[0x20];
    Unk_0203745c();
    ~Unk_0203745c();
};

struct Unk_0204e1a8_Out {
    s32 v[2];
};

struct Unk_0204e1a8_Vec {
    s32 x, y, z;
};

struct Unk_0204e1a8_Loc {
    volatile s32 x, y;
    Unk_0204e1a8_Vec v;
};

struct Unk_021c47cc {
    u8 data[0x10];
    Unk_021c47cc();
    ~Unk_021c47cc();
};

extern "C" {
void *func_020375dc(s32 count, s32 heap, s32 align);
void func_02030528(s32 w, s32 h, void *obj, s32 v);
s32 func_020302f8(s32 v);
void func_02030598(s32 v);
s32 func_02030164(s32 a, s32 b);
s32 func_02031154(s32 a, s32 b);
s32 func_020311ec(s32 a, s32 b);
s32 func_02031218(s32 a, s32 b);
s32 func_020311c0(s32 a, s32 b);
s32 func_02031260(s32 a, s32 b);
s32 func_0203123c(s32 a, s32 b);
s32 func_02031284(s32 a, s32 b);
void func_020e85fc(s32 heap, void *p);
u32 func_02036c58();
u32 func_02036d54(u32 a, u32 b);
void func_02037638(void *a, u32 b, void *c, void *d, u32 e, void *f, u32 g, u32 h, void *i, u32 j);
extern s32 data_020c8cbc, data_020c8cb8;
extern u32 data_021c47d8;
u32 func_020b5bbc();
void func_020af694(const char *s);
void *func_0204ee64(s32 n, s32 heap);
void func_0203744c(void *p);
void func_0204dcb4(void *p);
void *func_0204dcb0(void *p);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
void func_0204edf8(s32 *out1, s32 *out2, s32 a, s32 b, s32 c, s32 d);
void func_0204ee10(s32 *out1, s32 *out2, void *p);
BOOL func_0204b300(u16 *p);
BOOL func_0204b2d4(u16 *p);
void func_02039e6c(u16 v);
s32 func_020b2768();
BOOL func_ov003_02218e2c(s32 a, void *b, s32 x, s32 y, s32 f);
void func_0204eb30(void *self, u16 *p, s32 x, s32 y, u32 flag);
void func_0204e914(void *self, s32 x, s32 y);
void *func_020b27a4(u16 *p);
u32 func_020b2b0c(void *h);
u32 func_020b2b80(void *h);
BOOL func_020b2a5c(void *h, s32 *dx, s32 *dy, u32 i);
BOOL func_020b2aac(void *h, s32 *dx, s32 *dy, u32 i);
BOOL func_02072e44(void *g);
BOOL func_0204b14c(u16 *p);
s32 func_0204b124(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0204b08c(u16 *p);
s32 func_0204aba4(u16 *p);
void func_020af64c(void *obj, s32 v);
extern char data_021ed2e6[];
extern void *data_020cbb18;
}

class Unk_0204debc {
public:
    u8 unk_00[0x24];
    Unk_0204dcf0 unk_24[16];
    Unk_0203745c unk_2024[16];
    u8 unk_2224_lo : 2;
    u8 unk_2224_hi : 6;

    Unk_0204debc();
    ~Unk_0204debc();

    void *func_0204debc(s32 heap);
    void func_0204df30();
    u32 func_0204df64();
    BOOL func_0204df74(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in);
    BOOL func_0204dfa0(s32 x, s32 y);
    void *func_0204dfb8(Unk_0204debc_Pos *in);
    void *func_0204dff8(Unk_0204debc_Pos *in);
    void func_0204e038();
    BOOL func_0204e114(u16 *a, s32 x, s32 y, u8 flag);
    BOOL func_0204e51c(u16 *a, s32 x, s32 y);
    BOOL func_0204e49c(s32 x, s32 y, u16 *p);
    BOOL func_0204e56c(u16 *a, u16 *b, u16 *c, s32 x, s32 y);
    BOOL func_0204e56c(u16 *a, u16 *b, u16 *c, Unk_0204debc_Pos pos);
};

BOOL Unk_0204debc::func_0204dfa0(s32 x, s32 y) {
    if (x > 0 && x < 5 && y > 0 && y < 5) return TRUE;
    return FALSE;
}

void *Unk_0204debc::func_0204debc(s32 heap) {
    volatile s32 zero0, zero1;
    Unk_0204debc_Pos pos;
    Unk_0204debc_Entry *r;
    s32 idx;
    pos.x = 0;
    pos.y = 0;
    r = (Unk_0204debc_Entry *)func_0204ee64(0x24, heap);
    if (r) {
        idx = 0;
        pos.y = 0;
        zero0 = 0;
        zero1 = 0;
        for (; pos.y < 6; pos.y++) {
            for (pos.x = zero0; pos.x < 6; pos.x++) {
                Unk_0204debc_Entry *e = &r[idx];
                e->v = ((u8 *)this + pos.y * 6)[pos.x];
                e->a = func_0204dff8(&pos);
                e->z = zero1;
                e->b = func_0204dfb8(&pos);
                idx++;
            }
        }
    }
    return r;
}

void Unk_0204debc::func_0204df30() {
    u32 v = func_020b5bbc();
    unk_2224_hi = v;
    func_020af694(data_021ed2e6);
}

u32 Unk_0204debc::func_0204df64() {
    return unk_2224_lo;
}

BOOL Unk_0204debc::func_0204df74(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in) {
    BOOL r = FALSE;
    if (func_0204dfa0(in->x, in->y)) {
        out->x = in->x - 1;
        out->y = in->y - 1;
        r = TRUE;
    }
    return r;
}

void *Unk_0204debc::func_0204dfb8(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (func_0204df74(&a, &b)) {
        r = (u8 *)this + 0x2024 + a.y * 0x80 + a.x * 0x20;
    }
    return r;
}

void *Unk_0204debc::func_0204dff8(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (func_0204df74(&a, &b)) {
        r = func_0204dcb0((u8 *)this + 0x24 + a.y * 0x800 + a.x * 0x200);
    }
    return r;
}

void Unk_0204debc::func_0204e038() {
    u8 *p = unk_00;
    Unk_0204dcf0 *a = unk_24;
    Unk_0203745c *b = unk_2024;
    s32 i, j;
    for (i = 0; i < 0x24; i++) *p++ = 0x86;
    for (j = 0; j < 16; j++) {
        func_0204dcb4(a);
        func_0203744c(b);
        a++;
        b++;
    }
    unk_2224_lo = 0;
}

Unk_0204debc::~Unk_0204debc() {}
Unk_0204debc::Unk_0204debc() {}

BOOL Unk_0204debc::func_0204e114(u16 *a, s32 x, s32 y, u8 flag) {
    u16 tile;
    s32 hx = x >> 4, hy = y >> 4;
    u16 *p = (u16 *)func_0204ebd8(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    tile = 0xfff1;
    if (p) tile = *p;
    if (flag && func_020b2768()) {
        return func_ov003_02218e2c(func_020b2768(), a, x, y, 1);
    }
    if (func_0204e51c(a, x, y)) {
        if (func_0204b300(&tile) || func_0204b2d4(&tile)) func_02039e6c(tile);
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_0204e51c_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

BOOL Unk_0204debc::func_0204e49c(s32 x, s32 y, u16 *p) {
    u16 t[2];
    s32 hx = x >> 4, hy = y >> 4;
    u16 *c = (u16 *)func_0204ebd8(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    BOOL r = FALSE;
    if (c) {
        if (Unk_0204e51c_InRange(c, 0x5000, 0x5021)) {
            t[0] = 0xfff1;
            if (p) t[0] = *p;
            t[1] = 0xfff1;
            r = func_0204e56c(t, c, &t[1], x, y);
        }
    }
    return r;
}

BOOL Unk_0204debc::func_0204e51c(u16 *a, s32 x, s32 y) {
    BOOL r = FALSE;
    if (Unk_0204e51c_InRange(a, 0x5000, 0x5021)) {
        u16 t = 0xf030;
        r = func_0204e56c(a, a, &t, x, y);
    }
    return r;
}

BOOL Unk_0204debc::func_0204e56c(u16 *a, u16 *b, u16 *c, volatile s32 x, volatile s32 y) {
    BOOL result;
    u32 cnt, cnt2;
    BOOL f9, f8, f7, f6, f5, f4, f3, f2, f1;
    s32 qy;
    s32 gx, gy;
    void *g;
    s32 py;
    u32 j;
    void *h;
    u16 tile, empty, key;
    s32 dx, dy;
    u32 i;
    s32 px, qx;
    u16 *p, *cell, *cell2;
    s32 hx, hy, tx, ty;
    BOOL ok;
    u32 v;
    h = NULL;
    result = FALSE;
    tx = x;
    ty = y;
    hx = tx >> 4;
    hy = ty >> 4;
    p = (u16 *)func_0204ebd8(this, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
    if (p) {
        tile = *p;
        if (func_0204b300(&tile) || func_0204b2d4(&tile)) func_02039e6c(tile);
    }
    if (Unk_0204e51c_InRange(b, 0x5000, 0x5021)) h = func_020b27a4(b);
    if (h) {
        cnt = func_020b2b0c(h);
        i = 0;
        gx = x;
        gy = y;
        g = data_020cbb18;
        for (; i < cnt; i++) {
            if (func_020b2a5c(h, &dx, &dy, i)) {
                px = gx + dx;
                py = gy + dy;
                hx = px >> 4;
                hy = py >> 4;
                cell = (u16 *)func_0204ebd8(this, hx, hy, px - (hx << 4), py - (hy << 4), 0);
                if (cell) {
                    if (func_0204b2d4(cell) || func_0204b300(cell)) {
                        if (!func_02072e44(g)) func_02039e6c(*cell);
                    } else if (func_0204b14c(cell)) {
                        func_020af64c(data_021ed2e6, func_0204b124(cell));
                    }
                }
                func_0204eb30(this, c, px, py, 0);
                func_0204e914(this, px, py);
            }
        }
        func_0204eb30(this, a, x, y, 0);
        if (func_0204b2d4(c)) {
            key = 0xf030;
            ok = func_0204b25c(c) == func_0204b25c(&key);
        } else {
            ok = *c == 0xf030;
        }
        if (ok) {
            cnt2 = func_020b2b80(h);
            for (j = 0; j < cnt2; j++) {
                if (func_020b2aac(h, &dx, &dy, j)) {
                    qx = gx + dx;
                    qy = gy + dy;
                    hx = qx >> 4;
                    hy = qy >> 4;
                    cell2 = (u16 *)func_0204ebd8(this, hx, hy, qx - (hx << 4), qy - (hy << 4), 0);
                    if (cell2) {
                        f9 = TRUE; f8 = TRUE; f7 = TRUE; f6 = TRUE; f5 = TRUE; f4 = TRUE; f3 = TRUE; f2 = TRUE; f1 = FALSE;
                        v = *cell2;
                        if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
                        if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
                        if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
                        if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
                        if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
                        if (!f5 && !(v == 0x69)) f6 = FALSE;
                        if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
                        if (!f7 && !(v == 0x6d)) f8 = FALSE;
                        if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
                        if ((f9 && !func_0204b08c(cell2)) || func_0204aba4(cell2) != -1) {
                            empty = 0xfff1;
                            func_0204eb30(this, &empty, qx, qy, 0);
                        }
                    }
                }
            }
        }
        result = TRUE;
    }
    return result;
}

class Unk_0204e2f0 {
public:
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;

    BOOL func_0204e1a8(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap);
    void func_0204e2cc(s32 heap);
    void func_0204e2f0();
    s32 func_0204e300(s32 a, s32 b);
    void func_0204e328(void *a);
    s32 func_0204e350(s32 a, s32 b);
    s32 func_0204e378(s32 a, s32 b);
    s32 func_0204e3a0(s32 a, s32 b);
    s32 func_0204e3c8(s32 a, s32 b);
    s32 func_0204e3f0(s32 a, s32 b);
    s32 func_0204e418(s32 a, s32 b);
    void func_0204e440(s32 a, s32 b, s32 c, s32 d);
    s32 func_0204e474(s32 a, s32 b);
};

BOOL Unk_0204e2f0::func_0204e1a8(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap) {
    s32 count = sz->v[0] * sz->v[1];
    BOOL r = FALSE;
    unk_1c = 0;
    if (unk_00 == NULL) unk_00 = func_020375dc(count, heap, 4);
    if (unk_00) {
        Unk_0204e1a8_Loc l;
        u8 *buf;
        s32 zero = 0;
        l.x = zero;
        l.y = zero;
        l.v.x = zero;
        l.v.y = zero;
        l.v.z = zero;
        buf = (u8 *)unk_00;
        unk_04 = sz->v[0];
        unk_08 = sz->v[1];
        unk_14 = unk_04 * data_020c8cbc;
        unk_18 = unk_08 * data_020c8cb8;
        func_0204edf8(&unk_0c, &unk_10, unk_04, unk_08, 0, 0);
        static Unk_021c47cc obj;
        func_02030528(unk_04, unk_08, &obj, unk_1c);
        for (l.y = 0; l.y < unk_08; l.y++) {
            for (l.x = 0; l.x < unk_04; l.x++) {
                Unk_0204e1a8_Vec w;
                l.v.x = l.x << 17;
                l.v.z = l.y << 17;
                w = l.v;
                u32 h = func_02036d54(func_02036c58(), e->v);
                func_02037638(buf, e->v, &w, e->a, e->z, e->b, h, 0, (void *)&l, 0);
                buf += 0x28;
                e++;
            }
        }
        r = TRUE;
    }
    return r;
}

void Unk_0204e2f0::func_0204e2cc(s32 heap) {
    if (unk_00) {
        func_020e85fc(heap, unk_00);
        unk_00 = NULL;
    }
    func_020302f8(unk_1c);
}

void Unk_0204e2f0::func_0204e2f0() {
    s32 z = 0;
    unk_04 = z;
    unk_08 = z;
    unk_0c = z;
    unk_10 = z;
    unk_00 = (void *)z;
    unk_1c = z;
}

#define WRAP(NAME, CALLEE) \
s32 Unk_0204e2f0::NAME(s32 a, s32 b) { \
    func_02030598(unk_1c); \
    s32 r = CALLEE(a, b); \
    func_02030598(0); \
    return r; \
}
WRAP(func_0204e300, func_02030164)
WRAP(func_0204e350, func_02031154)
WRAP(func_0204e378, func_020311ec)
WRAP(func_0204e3a0, func_02031218)
WRAP(func_0204e3c8, func_020311c0)
WRAP(func_0204e3f0, func_02031260)
WRAP(func_0204e418, func_0203123c)
WRAP(func_0204e474, func_02031284)

void Unk_0204e2f0::func_0204e328(void *a) {
    s32 x = 0, y = 0;
    func_0204ee10(&x, &y, a);
    func_0204e350(x, y);
}

void Unk_0204e2f0::func_0204e440(s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, y = 0;
    func_0204edf8(&x, &y, a, b, c, d);
    func_0204e474(x, y);
}

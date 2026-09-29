#include "types.h"

typedef u32 Unk_02077a54_Fn;

struct Unk_020781ec_Elem {
    u8 pad_00[0x1d];
    u8 unk_1d;
    u8 pad_1e[0x2c - 0x1e];
};

struct Unk_020781ec_Data {
    Unk_020781ec_Elem unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u8 pad_165[3];
    s32 unk_168;
    s8 unk_16c;
};

extern "C" {
extern void *data_020cbb18;
extern void *data_021cc8b0[];
extern void *data_021cc914[];
extern void *data_021cc8e8[];
extern void *data_021c61a4;
extern void *data_021c61a8;
extern void *data_021c61ac;
extern u8 data_020e416c;
extern void *data_021c47c4;
extern void *data_021f482c;

BOOL func_02072e44(void *);
void func_020728d4(void *);
void func_020728a4(void *, void *, s32);
void func_02072824(void *, s32, s32);
void func_02077ab4(u8 *, s32, s32);
void *func_02077c0c(void **, s32);
void *func_02077cd4(void **, s32);
void *func_02077dc4(void **, s32);
void func_02077b98(void **);
void func_02077bd4(void **);
void func_02077c68(void **);
void func_02077ca4(void **);
void func_02077d30(void **);
void func_02077d58(void **);
void func_020e885c(void *);
void func_020e877c(void *);
void *func_020e8da0(s32, void *);
void *func_020e8628(void *, s32, s32);
void func_020641b4(void *, void *, s32);
void func_0205b944();
void func_0205b960();
void func_0205b9a4();
void func_0205b9c0();
void func_0205ba00();
void func_0205ba1c();
void func_0205b8a0();
void func_0205b8c0(void *);
s32 func_02084fbc();
s32 func_020812f4();
s32 func_020b50e8();
s32 func_020b491c(s32);
s32 func_020b4928(s32);
void func_0204ee10(s32 *, s32 *, s32);
void *func_0204ebd8(void *, s32, s32, s32, s32, s32);
BOOL func_0204e418(void *, s32, s32);
BOOL func_0204b300(void *);
BOOL func_020780e4(s32, s32);
s32 func_02078104(s32, s32);
BOOL func_02077eb0(s32, s32, s32, s32 *, s32 *);
BOOL func_02077f68(s32, s32, void *);
BOOL func_0204b2d4(void *);
BOOL func_0204b08c(void *);
s32 func_02081650(s32, s32);
void *func_020947f0(s32);
s32 func_020951ec(s32);
struct Unk_020781ec_Data *func_020783f8();
void *func_020784f4(void *);
s32 func_020784e0(void *);
s32 func_02078384(void *);
s32 func_020783d4(void *);
s32 func_02078400(void *);
void *func_020805c4(void *);
BOOL func_020030b4(void *);
s32 func_0207e1f0(void *);
s32 func_0207c6d4(void *);
void *func_0207f86c(void *, s32);
BOOL func_02080f94(void *);
void func_02080a88(void *);
void func_02080a54(void *);
void func_02080a18(void *);
void func_020809dc(void *);
void func_020809a0(void *);
void func_02080964(void *);
void func_02080930(void *);
void func_02080078(void *, s32);
void func_0207ff14(void *, s32);

void func_02077a54(s32 a, s32 b);
void func_02077a9c(s32 *a, s32 *b, u8 *p);
void func_02077ab4(u8 *p, s32 a, s32 b);
void *func_02077ac4(s32 *p);
void func_02077ad8(s32 *p, s32 x);
void func_02077af8();
void func_02077afc(s32 *p);
void *func_02077b04(s32 *p);
void func_02077b18(s32 *p, s32 x);
void func_02077b38();
void func_02077b3c(s32 *p);
void *func_02077b44(s32 *p);
void func_02077b58(s32 *p, void *dst);
void func_02077b84(s32 *p, s32 v);
void func_02077b80(s32 *p, s32 v);
}

static inline BOOL Unk_02077d58_IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}

extern "C" {

void func_02077a54(s32 a, s32 b)
{
    u8 buf;
    if (func_02072e44(data_020cbb18)) {
        func_02077ab4(&buf, a, b);
        void *t = data_020cbb18;
        func_020728d4(t);
        func_020728a4(t, &buf, 1);
        func_02072824(t, 0x36, 4);
    }
}

void func_02077a9c(s32 *a, s32 *b, u8 *p)
{
    *a = (*p >> 4) & 0xf;
    *b = *p & 0xf;
}

void func_02077ab4(u8 *p, s32 a, s32 b)
{
    *p = ((a << 4) & 0xf0) | (b & 0xf);
}

void *func_02077ac4(s32 *p)
{
    return func_02077c0c(data_021cc8b0, *p);
}

void func_02077ad8(s32 *p, s32 x)
{
    func_020e885c(func_02077c0c(data_021cc8b0, x));
    *p = x;
}

void func_02077af8() {}

void func_02077afc(s32 *p)
{
    *p = 4;
}

void *func_02077b04(s32 *p)
{
    return func_02077cd4(data_021cc914, *p);
}

void func_02077b18(s32 *p, s32 x)
{
    func_020e885c(func_02077cd4(data_021cc914, x));
    *p = x;
}

void func_02077b38() {}

void func_02077b3c(s32 *p)
{
    *p = 8;
}

void *func_02077b44(s32 *p)
{
    return func_02077dc4(data_021cc8e8, *p);
}

void func_02077b58(s32 *p, void *dst)
{
    void *t = func_02077dc4(data_021cc8e8, *p);
    func_020641b4(dst, t, 0x2f88);
}

void func_02077b84(s32 *p, s32 v)
{
    func_02077b80(p, v);
}

void func_02077b80(s32 *p, s32 v)
{
    *p = v;
}

void func_02077b8c() {}

void func_02077b90(s32 *p)
{
    *p = 5;
}

void func_02077b98(void **p)
{
    void *heap = data_021c61a4;
    s32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        if (p[i] != 0) {
            func_020e885c(p[i]);
            p[i] = (void *)z;
        }
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}

void func_02077bd4(void **p)
{
    void *heap = data_021c61a4;
    s32 n = func_02084fbc();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = func_020e8da0(0x7ac, heap);
    }
}

void *func_02077c0c(void **p, s32 i)
{
    return p[i];
}

void func_02077c2c(void *);
void func_02077cdc();
void func_02077dcc();

void func_02077c14()
{
    func_02077b98(data_021cc8b0);
    func_0205b944();
}

void func_02077c2c(void *)
{
    func_0205b960();
    func_02077bd4(data_021cc8b0);
    if (data_021c61a4 != 0) {
        func_020e877c(data_021c61a4);
    }
}

void func_02077c54() {}

void func_02077c58(void **p)
{
    s32 i;
    for (i = 0; i < 4; i++) {
        p[i] = 0;
    }
}

void func_02077c68(void **p)
{
    void *heap = data_021c61a8;
    s32 i;
    s32 z = 0;
    for (i = 0; i < 8; i++) {
        if (p[i] != 0) {
            func_020e885c(p[i]);
            p[i] = (void *)z;
        }
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}

void func_02077ca4(void **p)
{
    void *heap = data_021c61a8;
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = func_020e8da0(0x7ac, heap);
    }
}

void *func_02077cd4(void **p, s32 i)
{
    return p[i];
}

void func_02077cdc()
{
    func_02077c68(data_021cc914);
    func_0205b9a4();
}

void func_02077cf4(void *)
{
    func_0205b9c0();
    func_02077ca4(data_021cc914);
    if (data_021c61a8 != 0) {
        func_020e877c(data_021c61a8);
    }
}

void func_02077d1c() {}

void func_02077d20(void **p)
{
    s32 i;
    for (i = 0; i < 8; i++) {
        p[i] = 0;
    }
}

void func_02077d30(void **p)
{
    void *heap = data_021c61ac;
    s32 i;
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
    if (heap != 0) {
        func_020e885c(heap);
    }
}

static inline s32 Unk_02077d58_Count()
{
    s32 t;
    if (Unk_02077d58_IsZero(data_020e416c)) {
        t = func_020812f4();
    } else {
        t = func_020b491c(func_020b50e8());
        t -= func_020b4928(func_020b50e8());
    }
    return t;
}

void func_02077d58(void **p)
{
    void *heap = data_021c61ac;
    s32 t = Unk_02077d58_Count();
    s32 n = t + func_02084fbc();
    s32 i;
    for (i = 0; i < n; i++) {
        p[i] = func_020e8628(heap, 0x2f88, 4);
    }
}

void *func_02077dc4(void **p, s32 i)
{
    return p[i];
}

void func_02077de4(void *);
void func_02077cf4(void *);
void func_02077c2c(void *);

void func_02077dcc()
{
    func_02077d30(data_021cc8e8);
    func_0205ba00();
}

void func_02077de4(void *)
{
    func_0205ba1c();
    func_02077d58(data_021cc8e8);
    if (data_021c61ac != 0) {
        func_020e877c(data_021c61ac);
    }
}

void func_02077e0c() {}

void func_02077e10(void **p)
{
    s32 i;
    for (i = 0; i < 5; i++) {
        p[i] = 0;
    }
}

s32 func_02077e20()
{
    return 0x31ec;
}

s32 func_02077e28()
{
    return 0x2bcc;
}

void func_02077e30()
{
    func_0205b8a0();
    func_02077dcc();
    func_02077cdc();
    func_02077c14();
}

void func_02077e4c()
{
    func_0205b8c0(data_021f482c);
    func_02077de4(data_021f482c);
    func_02077cf4(data_021f482c);
    func_02077c2c(data_021f482c);
}



BOOL func_02077e7c(s32 a, s32 h, s32 *px, s32 *py)
{
    s32 x = 0;
    s32 y = 0;
    func_0204ee10(&x, &y, a);
    return func_02077eb0(x, y, h, px, py);
}

BOOL func_02077eb0(s32 x, s32 y, s32 h, s32 *px, s32 *py)
{
    s32 i;
    void *grid = data_021c47c4;
    if (grid != 0 && h >= 0) {
        i = 0;
        goto test0;
    loop0:
        {
            s32 hx, hy;
            u16 *c;
            hx = x >> 4;
            hy = (y - (i + 1)) >> 4;
            c = (u16 *)func_0204ebd8(grid, hx, hy, x - (hx << 4), (y - (i + 1)) - (hy << 4), 0);
            if (c != 0) {
                BOOL r = FALSE;
                u32 v = *c;
                if (v >= 0x5000 && v <= 0x5021) {
                    r = TRUE;
                }
                if (r) {
                    if (px != 0 && py != 0) {
                        *px = x;
                        *py = y - (i + 1);
                    }
                    return TRUE;
                }
            }
        }
        i++;
    test0:
        if (i <= h) goto loop0;
    }
    return FALSE;
}

BOOL func_02077f40(s32 a, void *grid)
{
    s32 x = 0;
    s32 y = 0;
    func_0204ee10(&x, &y, a);
    return func_02077f68(x, y, grid);
}

static inline BOOL Unk_02077f68_R(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02077f68_C2(u16 *p)
{
    BOOL k2 = TRUE, k1 = TRUE;
    u32 v = *p;
    if (v != 0x25 && v != 0x5c) k1 = FALSE;
    if (!k1) {
        if (v != 0xc7) k2 = FALSE;
    }
    return k2;
}

static inline BOOL Unk_02077f68_C9(u16 *p)
{
    BOOL h = TRUE, g = TRUE, f = TRUE, e = TRUE, d = TRUE, cc = TRUE, b = TRUE, a = FALSE;
    u32 v = *p;
    if (v <= 5) a = TRUE;
    if (!a) {
        if (v < 6 || v > 11) b = FALSE;
    }
    if (!b) {
        if (v < 12 || v > 17) cc = FALSE;
    }
    if (!cc) {
        if ((v < 18 || v > 25) && v != 0x1c) d = FALSE;
    }
    if (!d) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) e = FALSE;
    }
    if (!e) {
        if (v != 0x1a) f = FALSE;
    }
    if (!f) {
        if (v != 0xa4) g = FALSE;
    }
    if (!g) {
        if (v != 0x1d) h = FALSE;
    }
    return h;
}

BOOL func_02077f68(s32 x, s32 y, void *grid)
{
    BOOL result = FALSE;
    if (grid == 0) {
        grid = data_021c47c4;
    }
    if (grid != 0 && func_0204e418(grid, x, y)) {
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            u32 v = *c;
            if (v == 0xfff1) goto yes;
            if (func_0204b300(c)) goto yes;
            if (Unk_02077f68_R(c, 0xa7, 0xc6)) goto yes;
            if (Unk_02077d58_IsZero(data_020e416c)) {
                if (func_0204b2d4(c)) goto yes;
            }
            if (func_0204b08c(c)) goto yes;
            if (Unk_02077f68_C2(c)) goto yes;
            if (Unk_02077f68_C9(c)) {
            yes:
                if (!func_020780e4(x, y)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}

BOOL func_020780e4(s32 a, s32 b)
{
    BOOL r = func_02078104(a, b);
    if (r == 0) {
        r = func_02081650(a, b);
    }
    return r;
}

s32 func_02078104(s32 x, s32 y)
{
    s32 result = 0;
    s32 ax = 0;
    s32 ay = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = func_020947f0(i);
        if (o != 0) {
            func_0204ee10(&ax, &ay, (s32)o);
            if (ax == x && ay == y) {
                result = func_020951ec(i);
                break;
            }
        }
    }
    return result;
}

void func_02078150(u8 *a, s32 b)
{
    s32 z1 = 0;
    s32 z2 = 0;
    s32 i;
    for (i = 0; i < 8; a += 0x700, i++) {
        if (func_020030b4(func_020805c4(a))) {
            s32 j;
            u8 *e;
            if (func_0207e1f0(a) == 3) {
                func_0207c6d4(a);
            }
            e = (u8 *)func_0207f86c(a, z1);
            for (j = z2; j < 8; e += 0x68, j++) {
                if (func_02080f94(e)) {
                    func_02080a88(e);
                    func_02080a54(e);
                    func_02080a18(e);
                    func_020809dc(e);
                    func_020809a0(e);
                    func_02080964(e);
                    func_02080930(e);
                }
            }
            func_02080078(a, b);
            func_0207ff14(a, b);
        }
    }
}

void func_020781ec()
{
    func_020783f8()->unk_168 = 0;
}

s32 func_02078204()
{
    return func_020783f8()->unk_164;
}

void func_0207821c(s32 v)
{
    func_020783f8()->unk_164 = v;
}

s32 func_02078234()
{
    return func_020783f8()->unk_16c;
}

s32 func_02078264()
{
    return func_020783f8()->unk_163;
}

s32 func_02078294()
{
    return func_020783f8()->unk_162;
}

void func_0207824c(s32 v)
{
    func_020783f8()->unk_16c = v;
}

void func_0207827c(s32 v)
{
    func_020783f8()->unk_163 = v;
}

void func_020782ac(s32 v)
{
    func_020783f8()->unk_162 = v;
}

void func_020782c4()
{
    func_020783f8()->unk_160 = -1;
}

void func_020782e0()
{
    u8 *p = (u8 *)func_020783f8();
    s32 i;
    for (i = 0; i < 8; p += 0x2c, i++) {
        func_020784e0(func_020784f4(p));
    }
}

void func_02078308()
{
    Unk_020781ec_Elem *e = func_020783f8()->unk_00;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->unk_1d &= ~4;
    }
}

void func_02078328()
{
    Unk_020781ec_Elem *e = func_020783f8()->unk_00;
    s32 i;
    for (i = 0; i < 8; e++, i++) {
        e->unk_1d &= ~1;
    }
}

void func_02078348()
{
    func_02078384(func_020783f8());
}

void func_0207835c()
{
    func_020783d4(func_020783f8());
}

void func_02078370()
{
    func_02078400(func_020783f8());
}

}

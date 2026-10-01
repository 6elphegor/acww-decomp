#include "types.h"

struct Unk_ov114_0229559c {
    u8 pad_000[0x808];
    u8 unk_808[0x81a - 0x808];
    u8 unk_81a[0x9d8 - 0x81a];
    u16 unk_9d8;
    u16 unk_9da;
    u8 pad_9dc[0x9f8 - 0x9dc];
    u16 unk_9f8;
    u8 pad_9fa[0xe94 - 0x9fa];
    u8 unk_e94[0x108c - 0xe94];
    u8 unk_108c[0x10f8 - 0x108c];
    u8 unk_10f8[0x11b8 - 0x10f8];
    u8 unk_11b8[0x11f8 - 0x11b8];
    u8 unk_11f8[0x124c - 0x11f8];
    s32 unk_124c;
    s32 unk_1250;
    s32 unk_1254;
    s32 unk_1258;
    s32 unk_125c;
    s32 unk_1260;
    s32 unk_1264;
    s32 unk_1268;
    s32 unk_126c;
    u8 pad_1270[4];
    s32 unk_1274;
    s32 unk_1278;
    s32 unk_127c;
    u8 pad_1280[0x128a - 0x1280];
    u8 unk_128a;
    u8 unk_128b;
    u8 unk_128c;
    u8 unk_128d;
    u8 pad_128e[2];
    u8 unk_1290;
    u8 unk_1291;
    u8 unk_1292;
    u8 unk_1293;
    u8 unk_1294;
    u8 unk_1295;
    u8 pad_1296;
    u8 unk_1297;
};

typedef Unk_ov114_0229559c S;

extern "C" {
extern u8 data_ov114_02296580[];
extern u8 data_ov114_02296598[];
extern u8 data_ov114_022965a0[];
extern u8 data_ov114_0229666c[];
extern u8 data_ov114_0229667c[];
extern u16 data_021f47d8;

void func_ov114_022953e4(S *s, u16 *p, s32 i);
BOOL func_ov114_02294c78(S *s, s32 i);
void func_ov114_02294c50(S *s, s32 v);
void func_ov114_02295f80(S *s);
void func_ov114_02295fc0(S *s);
void func_ov114_02295a18(S *s);
void *func_ov114_02295830(S *s);

void func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void func_0206267c(void *p);
void func_0206260c(void *p);
void func_02062564(void *p, u16 *c);
void func_020a7c3c(void *p);
void func_020a7bd8(void *p, void *q);
void func_020a7a64(void *p, s32 v);
s32 func_020a6b9c(void *p, s32 i);
void func_0206fb9c(void *p, u32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206fc44(void *p);
void func_020b87d0(void *p);
void func_020b35f8(void *p, u8 *q, const char *name);
void func_0200402c(s32 v);
BOOL func_0208d9a8(void *p);
void func_ov002_02202f0c(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202e54(void *p);
void func_020e761c(void *p, s32 a, s32 b);
}

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();

    u32 unk_04;
    Unk_020e2a08 unk_08;
};

class Unk_ov114_022965b0 : public Unk_020e2a78 {
public:
    Unk_ov114_022965b0();
    virtual ~Unk_ov114_022965b0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_12[0x196 - 0x12];
};

extern "C" {

void func_ov114_0229559c(S *s)
{
    s32 zero;
    u16 col;
    u32 pos;
    s32 i;
    s32 idx;
    s->unk_126c = s->unk_1268 % 9;
    pos = s->unk_1268;
    idx = s->unk_126c;
    col = 0xfff1;
    zero = 0;
    i = 0;
    goto test0;
loop0:
    switch (s->unk_1293) {
    case 0:
        col = pos < 0x38 ? (u16)(pos + 0x12e8) : 0x12e8;
        break;
    case 1:
        col = pos < 0x38 ? (u16)(pos + 0x12b0) : 0x12b0;
        break;
    default:
        return;
    }
    func_ov114_022953e4(s, &col, idx);
    idx++;
    if (idx >= 9) {
        idx = zero;
    }
    pos++;
    if (pos >= 0x38) {
        return;
    }
    i++;
test0:
    if (i < 9) goto loop0;
}

BOOL func_ov114_0229563c(S *s, s32 v)
{
    if (v < 0) {
        v = 0;
    }
    if (v >= s->unk_1274) {
        v = s->unk_1274;
    }
    s->unk_1258 = v;
    s32 old = s->unk_1268;
    s->unk_1260 = 0x22 - v;
    s->unk_1268 = 0;
    while (s->unk_1260 < 8) {
        s->unk_1260 += 0x1b;
        s->unk_1268++;
    }
    if (old != s->unk_1268) {
        return TRUE;
    }
    return FALSE;
}

void func_ov114_022956a4(S *s, s32 a)
{
    s32 z18 = 0, z1c = 0, z20 = 0, z24 = 0;
    s32 i;
    s32 rowY = s->unk_1260;
    s32 x = s->unk_1264 + a;
    s32 idx = s->unk_126c;
    s32 m1;
    s32 t14;
    void *src;
    i = 0;
    m1 = -1;
    do {
        if (func_ov114_02294c78(s, s->unk_1268 + i)) {
            src = &s->unk_108c[idx * 12];
            t14 = m1;
        } else {
            src = data_ov114_02296580;
            t14 = 4;
        }
        func_02088730(1, src, rowY, x, m1, 2, z18);
        if (*(u8 *)((u8 *)s + 0x1295) == s->unk_1268 + i) {
            func_02088730(1, data_ov114_022965a0, rowY, x, m1, 2, z1c);
        }
        func_02088730(1, data_ov114_02296598, rowY, x, t14, 2, z20);
        rowY += 0x1b;
        idx++;
        if (idx >= 9) {
            idx = z24;
        }
        i++;
    } while (i < 9);
}

void func_ov114_02295780(S *s, u32 a)
{
    u32 obj[9];
    u16 col;
    u32 v;
    func_0206267c(obj);
    if (a == 0xff) {
        func_020a7c3c(obj);
    } else {
        switch (s->unk_1293) {
        case 0:
            v = a < 0x38 ? (u16)(a + 0x12e8) : 0x12e8;
            break;
        case 1:
            v = a < 0x38 ? (u16)(a + 0x12b0) : 0x12b0;
            break;
        default:
            func_0206260c(obj);
            return;
        }
        col = v;
        func_02062564(obj, &col);
    }
    void *t = func_ov114_02295830(s);
    func_020a7bd8(t, obj);
    func_0206fb9c(t, s->unk_128d, 0xa1, 0xd, 1, 3, 0);
    func_0206fab4(t, 1, 0);
    func_0206260c(obj);
}

void *func_ov114_02295830(S *s)
{
    u8 *p = &s->unk_1292;
    u32 c = *p;
    if (c >= 4) {
        return &s->unk_11b8;
    }
    *p = c + 1;
    return &s->unk_10f8[(*p - 1) << 6];
}

void func_ov114_02295860(S *s)
{
    s32 i;
    s->unk_1292 = 0;
    u8 *b = s->unk_10f8;
    for (i = 0; i < 4; i++) {
        func_0206fc44(b + (i << 6));
    }
}

u32 func_ov114_0229588c(S *s)
{
    u32 c = s->unk_1290;
    if (c >= 9) {
        return 8;
    }
    s->unk_1290 = c + 1;
    return c;
}

void func_ov114_022958a4(S *s)
{
    s32 i;
    for (i = 0; i < 9; i++) {
        func_020b87d0(&s->unk_e94[i * 0x38]);
    }
    s->unk_1290 = 0;
}

void func_ov114_022958d8(S *s, s32 a, s32 b)
{
    s32 c1 = s->unk_9da;
    u8 r = c1 & 0x1f;
    u8 g = (c1 & 0x3e0) >> 5;
    u8 bl = (c1 & 0x7c00) >> 10;
    s32 d = b - a;
    s32 c2 = s->unk_9d8;
    r = ((u8)(c2 & 0x1f) * a + r * d) / b;
    g = ((u8)((c2 & 0x3e0) >> 5) * a + g * d) / b;
    bl = ((u8)((c2 & 0x7c00) >> 10) * a + bl * d) / b;
    s->unk_9f8 = r | (g << 5) | (bl << 10);
    func_ov114_02294c50(s, 1);
}

BOOL func_ov114_022959a0(S *s)
{
    u32 c = s->unk_1291;
    if (c != 0) {
        s->unk_1291 = c - 1;
        s->unk_128b = 5;
        func_ov114_02295a18(s);
        func_0200402c(0x39);
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov114_022959d8(S *s)
{
    s32 n = s->unk_1291 + 1;
    if (n < s->unk_128c) {
        s->unk_1291 = n;
        s->unk_128a = 5;
        func_ov114_02295a18(s);
        func_0200402c(0x39);
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02295a18(S *s)
{
    void *o[3];
    s32 z10 = 0;
    s32 z14 = 0;
    s32 k = (u8)s->unk_1291 * 3;
    s32 y;
    s32 i;
    o[0] = func_ov114_02295830(s);
    o[1] = func_ov114_02295830(s);
    o[2] = func_ov114_02295830(s);
    y = 0xbb;
    i = 0;
    do {
        s32 t = func_020a6b9c(s->unk_81a, k);
        void *ob;
        if (t != 0) {
            ob = o[i];
            func_020a7a64(ob, t);
        } else {
            ob = o[i];
            func_020a7c3c(ob);
        }
        func_0206fb9c(ob, s->unk_128d, y, 0xd, 2, 3, z10);
        func_0206fab4(ob, z14, z14);
        k++;
        y += 0x1a;
        i++;
    } while (i < 3);
    if (s->unk_1291 == 0) {
        s->unk_127c = 4;
    } else {
        s->unk_127c = 5;
    }
    if (s->unk_1291 + 1 >= s->unk_128c) {
        s->unk_1278 = 4;
    } else {
        s->unk_1278 = 5;
    }
}

u8 func_ov114_02295af0(S *s)
{
    s32 n = 0;
    s32 k = n;
    for (; n < 5; n++) {
        s32 a = func_020a6b9c(s->unk_81a, k);
        s32 b = func_020a6b9c(s->unk_81a, k + 1);
        s32 c = func_020a6b9c(s->unk_81a, k + 2);
        k += 3;
        if (a == 0 && b == 0 && c == 0) {
            return (u8)n;
        }
    }
    return 5;
}

void func_ov114_02295b48(S *s)
{
    u8 v = s->unk_1294;
    const char *name;
    switch (s->unk_1293) {
    case 0:
        name = (const char *)data_ov114_0229666c;
        break;
    case 1:
        name = (const char *)data_ov114_0229667c;
        break;
    }
    if (v == 0xff) {
        func_020a7c3c(s->unk_808);
        s->unk_128c = 1;
    } else {
        u8 key = v;
        func_020b35f8(s->unk_808, &key, name);
        s->unk_128c = func_ov114_02295af0(s);
    }
    s->unk_1291 = 0;
    func_ov114_02295a18(s);
}

void func_ov114_02295c28(S *s)
{
    s32 pos = s->unk_1258;
    s32 r = s->unk_125c;
    if (r > 0) {
        if (r < 0xb) {
            pos += r;
            s->unk_125c = 0;
        } else {
            pos += 0xb;
            r -= 0xb;
            s->unk_125c = r;
        }
    } else if (r < 0) {
        if (r > -11) {
            pos += r;
            s->unk_125c = 0;
        } else {
            pos -= 0xb;
            r += 0xb;
            s->unk_125c = r;
        }
    }
    if (pos != s->unk_1258) {
        func_ov114_02295fc0(s);
        if (func_ov114_0229563c(s, pos)) {
            func_ov114_0229559c(s);
        }
    }
}

BOOL func_ov114_02295c9c(S *s)
{
    if (s->unk_1297 == 2) {
        if (func_0208d9a8(s->unk_11f8)) {
            func_ov002_02202f0c(s->unk_11f8);
            s->unk_1297 = 4;
            return TRUE;
        }
    } else {
        s->unk_1297 = 4;
        return TRUE;
    }
    return FALSE;
}

void func_ov114_02295ce0(S *s)
{
    if (s->unk_1297 == 2) {
        func_ov002_02202ef4(s->unk_11f8);
    }
}

void func_ov114_02295d04(S *s)
{
    s32 old = s->unk_124c;
    switch (s->unk_1297) {
    case 2: {
        u16 k = data_021f47d8;
        if (k & 0x20) {
            s->unk_124c = old - 2;
        } else if (k & 0x10) {
            s->unk_124c = old + 2;
        }
        break;
    }
    case 0:
        s->unk_124c = old - 2;
        break;
    case 1:
        s->unk_124c = old + 2;
        break;
    }
    if (s->unk_124c < 0) {
        s->unk_124c = 0;
    }
    if (s->unk_124c > 0x8c) {
        s->unk_124c = 0x8c;
    }
    if (s->unk_124c != old) {
        func_ov002_02202e54(s->unk_11f8);
    }
    func_ov114_02295f80(s);
}

s32 func_ov114_02295d98(S *s)
{
    if (s->unk_1297 == 2) {
        return func_0208d9a8(s->unk_11f8);
    }
    func_ov114_02295d04(s);
    return TRUE;
}

void func_ov114_02295dc4(S *s)
{
    if (s->unk_1297 == 2) {
        func_ov002_02202ef4(s->unk_11f8);
    }
    s->unk_1297 = 4;
}

void func_ov114_02295dec(S *s, s32 a)
{
    s32 *p = &s->unk_124c;
    s32 old = *p;
    switch (s->unk_1297) {
    case 2:
        *p = a + s->unk_1250;
        break;
    case 0:
        *p = old - 2;
        break;
    case 1:
        *p = old + 2;
        break;
    case 3:
        func_020e761c(p, a - 0x3a, 4);
        break;
    }
    if (s->unk_124c < 0) {
        s->unk_124c = 0;
    }
    if (s->unk_124c > 0x8c) {
        s->unk_124c = 0x8c;
    }
    func_ov114_02295f80(s);
    if (s->unk_1297 == 2) {
        s32 d = s->unk_1254 - s->unk_124c;
        if (d >= 4 || d <= -4) {
            func_ov002_02202e54(s->unk_11f8);
            s->unk_1254 = s->unk_124c;
        }
    } else if (s->unk_124c != old) {
        func_ov002_02202e54(s->unk_11f8);
    }
}

}

Unk_ov114_022965b0::~Unk_ov114_022965b0() {}
Unk_ov114_022965b0::Unk_ov114_022965b0() { func_020a7c3c(); }
u32 Unk_ov114_022965b0::vfunc_08() { return 0x196; }
u8 *Unk_ov114_022965b0::vfunc_0c() { return (u8 *)this + 0x12; }

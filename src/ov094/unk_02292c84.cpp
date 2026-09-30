#include "types.h"

struct Unk_ov094_02292d6c_Ent8 {
    u8 b[8];
};

struct Unk_ov094_02292d6c_Obj38 {
    u8 b[0x38];
};

struct Unk_ov094_02292d6c_Rec {
    u32 unk_00;
    u32 id : 10;
    u32 pad : 2;
    u32 c : 4;
    u32 hi : 16;
};

struct Unk_ov094_02292d6c {
    /* 0x000 */ u32 unk_00;
    /* 0x004 */ u8 unk_04[0x4];
    /* 0x008 */ u16 unk_08;
    /* 0x00a */ u8 unk_0a[4];
    /* 0x00e */ u8 unk_0e;
    /* 0x00f */ u8 unk_0f;
    /* 0x010 */ u8 unk_10;
    /* 0x011 */ u8 unk_11[3];
    /* 0x014 */ u8 unk_14;
    /* 0x015 */ u8 unk_15[0x23];
    /* 0x038 */ u8 unk_38[0xa8];
    /* 0x0e0 */ u8 unk_e0[0x80];
    /* 0x160 */ u8 unk_160[0x24];
    /* 0x184 */ u8 unk_184[0x808];
    /* 0x98c */ Unk_ov094_02292d6c_Obj38 unk_98c[3];
    /* 0xa34 */ u16 *unk_a34;
    /* 0xa38 */ u32 unk_a38[2];
    /* 0xa40 */ u32 unk_a40[2];
    /* 0xa48 */ u32 unk_a48[2];
    /* 0xa50 */ s32 unk_a50;
    /* 0xa54 */ u16 unk_a54;
    /* 0xa56 */ u8 unk_a56;
    /* 0xa57 */ u8 unk_a57;
    /* 0xa58 */ u8 unk_a58;
    /* 0xa59 */ u8 unk_a59;
    /* 0xa5a */ u8 unk_a5a;
    /* 0xa5b */ u8 unk_a5b;
    /* 0xa5c */ u8 unk_a5c;
};

typedef Unk_ov094_02292d6c S;
typedef Unk_ov094_02292d6c_Ent8 Ent8;
typedef Unk_ov094_02292d6c_Rec Rec;

extern "C" {
extern u32 data_021f482c;
extern char data_ov094_0229499c[];
extern char data_ov094_022949b8[];
extern char data_ov094_022949d8[];
extern char data_ov094_022949f8[];
extern char data_ov094_02294a14[];
extern u8 data_ov094_02294a30[];
extern u8 data_ov094_02294a58[];
extern u8 data_ov094_02294a60[];
extern u8 data_ov094_02294a68[];
extern Ent8 data_ov094_02294a70[];
extern u8 data_ov094_022946b4[];
extern u8 data_ov094_022946bc[];
extern s32 data_ov094_022946d0[];

void func_020026c4(char *s, u32 a, u32 b, s32 c, s32 d, s32 e);
void func_020641b4(char *s, void *dst, u32 n);
void func_020024f0(void *a, u32 b, u32 c, s32 d);
void func_0200261c(char *s, u32 a, u32 b, s32 c, s32 d, s32 e);
void func_020b85f8(void *p);
void func_020b87d0(void *p);
s32 func_021355f0(void *p, s32 n, u32 sz, void *dtor);
s32 func_02135714(void *p, s32 n, u32 sz, void *ctor, void *dtor);
void func_0206fca8(void *p);
void func_0206fcc8(void *p);
s32 func_02087e14(void *p);
s32 func_02087e0c(void *p);
void func_02088730(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, void *g);
void func_02116048(void *dst, void *src, u32 n);
void func_020b851c(void *a, void *b, void *c, s32 d, u32 e, u32 f, u32 g, u32 h);
void func_0209909c(u16 *a, s32 b, s32 c);
s32 func_0209750c();
s32 func_02098750(s32 a);
u32 func_02097eb0(s32 a, s32 b);
u16 *func_02097f6c(s32 a, s32 b);
BOOL func_0206ef0c();

s32 func_ov094_02292c08(S *s);
s32 func_ov094_0229260c(S *s);
s32 func_ov094_022935fc(S *s, s32 i);
s32 func_ov094_022935e8(S *s);
s32 func_ov094_02293624(S *s, s32 i);
s32 func_ov094_02293730(S *s, u16 *v, s32 m);
void *func_ov094_02293b08(void *p, s32 i);
u32 func_ov094_02293abc(void *p, s32 i);
s32 func_ov094_02293ac8(void *p, s32 i, s32 j);

BOOL func_ov094_02292da8(u32 *bits, s32 i);
void func_ov094_02292dcc(u32 *bits, s32 i);
void func_ov094_02292dec(u32 *bits, s32 i);
void func_ov094_02292e0c(u32 *bits);
s32 func_ov094_02292e1c(S *s);
void func_ov094_02292ee4(S *s);
u32 func_ov094_02292f40(S *s);
u32 func_ov094_02292f8c(u32 i);
Ent8 *func_ov094_02292fa4(S *s, s32 i);
void func_ov094_02292fb0(S *s, Ent8 *e, s32 idx, s32 x, s32 y);
void func_ov094_02293080(S *s, s32 a, s32 b);
void func_ov094_022930b4(S *s, s32 a, s32 b, s32 c);
void func_ov094_022930e8(S *s, s32 a, s32 b);
void func_ov094_02293308(S *s, s32 i);
BOOL func_ov094_0229333c(S *s, s32 i);
void func_ov094_0229334c(S *s, Rec *r, void *dst, s32 c);
void func_ov094_022933d8(S *s, Rec *r, u32 v, s32 m);
void func_ov094_0229341c(S *s, Rec *r, s32 m);
void func_ov094_02293494(S *s, s32 i, u32 v, s32 x);
u32 func_ov094_02293504(S *s, s32 i);
u16 func_ov094_0229352c(S *s, s32 i);

void func_ov094_02292c84(S *s, s32 flag) {
    u32 h = data_021f482c;
    func_020026c4(data_ov094_0229499c, h, s->unk_0e, 0, 1, 0xd);
    func_020641b4(flag ? data_ov094_022949b8 : data_ov094_022949d8, s->unk_160, 0x800);
    func_020024f0(s->unk_160, s->unk_0e, 0x800, 0);
    func_0200261c(data_ov094_022949f8, h, s->unk_0e, 0, 0x10, 0xff);
    func_0200261c(data_ov094_02294a14, h, s->unk_0e, 0x100, 0x100, 0x1ff);
}

void func_ov094_02292d1c(S *s, s32 flag) {
    func_ov094_02292c84(s, flag);
    func_ov094_02292c08(s);
}

void func_ov094_02292d30(S *s, u32 v) {
    s->unk_0e = v;
    s->unk_08 = 0;
    func_ov094_0229260c(s);
    s->unk_0f = 2;
    s->unk_10 = 2;
    s->unk_14 = 8;
}

S *func_ov094_02292d50(S *s) {
    func_021355f0(s->unk_e0, 2, 0x40, (void *)func_0206fca8);
    return s;
}

S *func_ov094_02292d6c(S *s) {
    u8 *p = s->unk_38;
    u8 *e = s->unk_e0;
    do {
        func_020b85f8(p);
        p += 0x38;
    } while (p != e);
    func_02135714(e, 2, 0x40, (void *)func_0206fcc8, (void *)func_0206fca8);
    return s;
}

BOOL func_ov094_02292da8(u32 *bits, s32 i) {
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & bits[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

void func_ov094_02292dcc(u32 *bits, s32 i) {
    bits[i >> 5] &= ~(1 << (i & 0x1f));
}

void func_ov094_02292dec(u32 *bits, s32 i) {
    bits[i >> 5] |= 1 << (i & 0x1f);
}

void func_ov094_02292e0c(u32 *bits) {
    s32 i;
    u32 z;
    i = 0;
    z = i;
    for (; i < 2; i++) {
        bits[i] = z;
    }
}

s32 func_ov094_02292e1c(S *s) {
    return data_ov094_022946b4[s->unk_a5a - 6];
}

BOOL func_ov094_02292e30(S *s) {
    u32 st = s->unk_a5a;
    if (st < 6) {
        u32 v = data_ov094_022946bc[st];
        if (v != 0xff) {
            s32 r = func_ov094_02293ac8(s->unk_184, v, s->unk_a5b);
            func_ov094_0229334c(s, (Rec *)data_ov094_02294a30, (void *)r, 8);
        }
        s->unk_a5a++;
    } else if (st < 8) {
        s->unk_a59 = func_ov094_02292e1c(s);
        s->unk_a5a++;
    } else if (st == 8) {
        func_ov094_0229341c(s, (Rec *)s->unk_a54, 0);
        s->unk_a59 = 0;
        s->unk_a5a++;
    } else if (st < 0xc) {
        s->unk_a59 = func_ov094_02292e1c(s);
        s->unk_a5a++;
    } else {
        func_ov094_02292ee4(s);
        return TRUE;
    }
    return FALSE;
}

void func_ov094_02292ee4(S *s) {
    s->unk_a59 = 10;
    s->unk_a5c = 1;
}

void func_ov094_02292efc(S *s, u32 v, s32 m) {
    s->unk_a54 = v;
    s->unk_a5a = 0;
    if (m == 1) {
        s->unk_a5b = 0;
    } else {
        s->unk_a5b = 1;
    }
    if (func_0206ef0c()) {
        s->unk_a5c = 0;
    }
}

u32 func_ov094_02292f40(S *s) {
    u32 v = s->unk_a58;
    if (v >= 3) {
        return 2;
    }
    s->unk_a58 = v + 1;
    return v;
}

void func_ov094_02292f58(S *s) {
    s32 i;
    for (i = 0; i < 3; i++) {
        func_020b87d0(&s->unk_98c[i]);
    }
    s->unk_a58 = 0;
}

u32 func_ov094_02292f8c(u32 i) {
    if (i >= 10) {
        return 0x1000;
    }
    return data_ov094_022946d0[i];
}

Ent8 *func_ov094_02292fa4(S *s, s32 i) {
    return &data_ov094_02294a70[i];
}

void func_ov094_02292fb0(S *s, Ent8 *e, s32 idx, s32 x, s32 y) {
    s32 a = x + func_02087e14(e);
    s32 b = y + func_02087e0c(e);
    s32 off = 0;
    if (func_ov094_022935fc(s, idx)) {
        off = func_ov094_022935e8(s);
        a += off;
        b += off;
    }
    if (func_ov094_02292da8(s->unk_a40, idx)) {
        func_ov094_022930e8(s, a, b);
    }
    if (func_ov094_02292da8(s->unk_a38, idx)) {
        s32 c = -1;
        if (func_ov094_0229333c(s, (u8)idx)) {
            c = 0xe;
        }
        func_02088730(1, e, x + off, y + off, c, s->unk_a50, 0);
        func_ov094_022930b4(s, a, b, c);
        if (func_ov094_022935fc(s, idx)) {
            func_ov094_02293080(s, a, b);
        }
    }
}

void func_ov094_02293080(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a60, a - 8, b - 8, -1, s->unk_a50, 0);
}

void func_ov094_022930b4(S *s, s32 a, s32 b, s32 c) {
    func_02088730(1, data_ov094_02294a58, a - 8, b - 8, c, s->unk_a50, 0);
}

void func_ov094_022930e8(S *s, s32 a, s32 b) {
    func_02088730(1, data_ov094_02294a68, a - 8, b - 8, -1, s->unk_a50, 0);
}

BOOL func_ov094_0229311c(S *s, s32 i) {
    BOOL r;
    if (func_ov094_02292da8(s->unk_a38, i)) {
        r = FALSE;
    } else {
        r = TRUE;
    }
    return r;
}

struct Unk_ov094_0229313c_L {
    s32 v[4];
};

void func_ov094_0229313c(S *s, s32 x, s32 y) {
    s32 a = x + func_02087e14(data_ov094_02294a30);
    s32 b = y + func_02087e0c(data_ov094_02294a30);
    u32 v = func_ov094_02292f8c(s->unk_a59);
    if (v != 0) {
        if (v == 0x1000) {
            func_02088730(1, data_ov094_02294a30, x, y, -1, s->unk_a50, 0);
        } else {
            Unk_ov094_0229313c_L l;
            l.v[0] = v;
            l.v[1] = 0;
            l.v[2] = 0;
            l.v[3] = v;
            func_02088730(1, data_ov094_02294a30, x, y, -1, s->unk_a50, &l);
        }
    }
    func_ov094_022930b4(s, a, b, -1);
    if (s->unk_a5c) {
        func_ov094_02293080(s, a, b);
    }
}

void func_ov094_022931e8(S *s, s32 x, s32 y) {
    if (func_ov094_02292da8(s->unk_a40, 0x21)) {
        Ent8 *e = func_ov094_02292fa4(s, 0x21);
        s32 a = x + func_02087e14(e) + 0x80;
        s32 b = y + func_02087e0c(e) + 0x60;
        func_ov094_022930e8(s, a, b);
    }
    if (func_ov094_02292da8(s->unk_a40, 0x22)) {
        func_ov094_022930e8(s, x + 4, y + 0xac);
    }
}

void func_ov094_0229324c(S *s, s32 x, s32 y) {
    Ent8 *e = func_ov094_02292fa4(s, 0xf);
    s32 i;
    for (i = 0xf; i <= 0x1d; e++, i++) {
        func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
    }
}

void func_ov094_02293284(S *s, s32 x, s32 y, s32 w) {
    Ent8 *e = func_ov094_02292fa4(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        if (func_ov094_02293624(s, (u8)i) + 0x18 > w) {
            func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
        }
    }
}

void func_ov094_022932d0(S *s, s32 x, s32 y) {
    Ent8 *e = func_ov094_02292fa4(s, 0);
    s32 i;
    for (i = 0; i <= 0xe; e++, i++) {
        func_ov094_02292fb0(s, e, i, x + 0x80, y + 0x60);
    }
}

void func_ov094_02293308(S *s, s32 i) {
    func_ov094_02292dec(s->unk_a48, i);
}

void func_ov094_02293318(S *s, u8 i, u8 e) {
    while (i <= e) {
        func_ov094_02293308(s, i);
        i++;
    }
}

BOOL func_ov094_0229333c(S *s, s32 i) {
    return func_ov094_02292da8(s->unk_a48, i);
}

struct Unk_ov094_0229334c_Blk {
    u8 a[0x40];
    u8 b[0x40];
};

void func_ov094_0229334c(S *s, Rec *r, void *dst, s32 c) {
    u32 t = r->id;
    u32 k = func_ov094_02292f40(s);
    Unk_ov094_0229334c_Blk *e = (Unk_ov094_0229334c_Blk *)((u8 *)s + 4) + k;
    u8 *p = e->a;
    u8 *q = e->b;
    func_02116048(dst, p, 0x40);
    func_02116048((u8 *)dst + 0x400, q, 0x40);
    k *= 0x38;
    func_020b851c((u8 *)s->unk_98c + k, p, q, 8, t, t + 1, t + 0x20, t + 0x21);
    c &= 0xf;
    ((u32 *)r)[1] = (((u32 *)r)[1] & 0xffff0fff) | (c << 12);
}

void func_ov094_022933d8(S *s, Rec *r, u32 v, s32 m) {
    u16 w = v;
    s32 idx = func_ov094_02293730(s, &w, m);
    void *d = func_ov094_02293b08(s->unk_184, idx);
    u32 c = func_ov094_02293abc(s->unk_184, idx);
    func_ov094_0229334c(s, r, d, c);
}

void func_ov094_0229341c(S *s, Rec *r, s32 m) {
    func_ov094_022933d8(s, (Rec *)data_ov094_02294a30, (u32)r, m);
}

void func_ov094_02293434(S *s, s32 i) {
    Ent8 *e = func_ov094_02292fa4(s, i);
    u16 v = func_ov094_0229352c(s, i);
    u32 c = func_ov094_02293504(s, i);
    volatile u16 t = v;
    if (t == 0xfff1) {
        func_ov094_02292dcc(s->unk_a38, i);
    } else {
        func_ov094_02292dec(s->unk_a38, i);
        func_ov094_022933d8(s, (Rec *)e, v, c);
    }
}

void func_ov094_02293494(S *s, s32 i, u32 v, s32 x) {
    volatile u16 w = 0xfff1;
    w = v;
    if (i >= 0 && i <= 0xe) {
        func_0209909c((u16 *)&w, x, i);
    } else if (i >= 0xf && i <= 0x1d) {
        s->unk_a34[i - 0xf] = v;
    }
}

void func_ov094_022934d8(S *s, s32 i) {
    func_ov094_02293494(s, i, 0xfff1, 0);
    func_ov094_02292dcc(s->unk_a38, i);
}

u32 func_ov094_02293504(S *s, s32 i) {
    if (i >= 0 && i <= 0xe) {
        return (u8)func_02097eb0(func_02098750(func_0209750c()), i);
    }
    return 0;
}

u16 func_ov094_0229352c(S *s, s32 i) {
    s32 t = func_02098750(func_0209750c());
    if (i >= 0 && i <= 0xe) {
        return func_02097f6c(t, 0)[i];
    }
    if (i >= 0xf && i <= 0x1d) {
        u16 *p = s->unk_a34;
        if (p) {
            return p[i - 0xf];
        }
    }
    return 0xfff1;
}

void func_ov094_0229357c(S *s, s32 i) {
    func_ov094_02292dec(s->unk_a40, i);
}

void func_ov094_0229358c(S *s) {
    func_ov094_02292e0c(s->unk_a40);
}
}

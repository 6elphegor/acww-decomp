#include "types.h"

struct Unk_ov143_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov143_Scene {
    u8 pad_00[0x8d];
    u8 unk_8d;
    u8 pad_8e[0x9a - 0x8e];
    u16 unk_9a;
    s16 unk_9c;
    u8 unk_9e;
    u8 pad_9f;
    u8 *unk_a0;
    u8 unk_a4;
    u8 unk_a5;
    u8 pad_a6[2];
    s32 unk_a8;
    u8 unk_ac[0x110 - 0xac];
    u8 unk_110[0x20];
};

typedef Unk_ov143_Scene S;

struct Unk_ov143_02292898_V {
    s32 x, y, z;
};

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern s32 data_020ddf8c;
extern void *data_020cbb18;
extern u8 data_021ed2f8[];
extern u8 data_021dfd8c[];

extern "C" {
BOOL func_0206ed18();
BOOL func_0206ef0c();
void func_0206ecf8(s32 v);
s32 func_02072e44(void *p);
void func_020728d4(void *p);
void func_020728a4(void *p, void *buf, s32 n);
void func_02072824(void *p, s32 a, s32 b);
s16 func_02072e34(void *p);
s32 func_020740a0(s32 v);
void func_02116048(void *dst, void *src, s32 n);
void func_0206db34(void *a, void *b);
void func_0206dad8();
void func_020795a8(void *a);
void func_0200402c(s32 v);
void func_0206da5c(s32 v);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
s32 func_02133150(s32 a, s32 b);

void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202ca0(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_02203110(void *p, s32 a);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a50(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
s32 func_ov002_02200a14(void *self, s32 s);
void func_ov002_02200980(void *self);
u32 func_ov002_022009d4(void *self);
u32 func_ov002_022009c8(void *self);
s32 func_ov002_022009a4(void *self);
s32 func_ov002_02200998(void *self);
s32 func_ov002_022028f0(void *p);
s32 func_ov002_0220128c(u32 p);
s32 func_ov002_0220127c(u32 p);

void func_ov143_02291ff0(S *s, s32 v);
s32 func_ov143_02292010(S *s, s32 v);
void func_ov143_02292064(S *s, Unk_ov143_02292898_V *out, u32 i);
u32 func_ov143_02292170(S *s, u32 v);
u32 func_ov143_02292198(S *s, u32 v);
void func_ov143_0229245c(S *s);
void func_ov143_022924c4(S *s);
s32 func_ov143_022925d4(S *s, u32 v);
s32 func_ov143_022927d8(S *s, u32 v);
void func_ov143_022935d0(S *s);

u32 func_ov143_02292898(S *s, s32 x, s32 y);
void func_ov143_02292908(S *s);
void func_ov143_0229292c(S *s);
void func_ov143_02292944(S *s);
void func_ov143_02292960(S *s, s32 a, s32 b);
void func_ov143_02292990(S *s);
void func_ov143_022929d4(S *s);
s32 func_ov143_022929f0(S *s);
s32 func_ov143_02292a70(S *s);
void func_ov143_02292af4(S *s);
BOOL func_ov143_02292b2c(S *s);
void func_ov143_02292b64(S *s);
void func_ov143_02292bc0(S *s);
void func_ov143_02292bf0(S *s);
void func_ov143_02292c44(S *s);
void func_ov143_02292c64(S *s);
void func_ov143_02292c88(S *s);
void func_ov143_02292ca0(S *s);
void func_ov143_02292cc0(S *s);
void func_ov143_02292cdc(S *s);
void func_ov143_02292cf4(S *s);
void func_ov143_02292d34(S *s);
void func_ov143_02292da0(S *s);
void func_ov143_02292dc4(S *s);
void func_ov143_02292df8(S *s);
void func_ov143_02292ea0(S *s);
void func_ov143_02292f0c(S *s);
void func_ov143_02292f30(S *s);
void func_ov143_02292f64(S *s);
void func_ov143_02292f8c(S *s);
void func_ov143_0229303c(S *s);
void func_ov143_022930b8(S *s);
void func_ov143_0229312c(S *s);
}

static inline BOOL Unk_ov143_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

u32 func_ov143_02292898(S *s, s32 x, s32 y) {
    Unk_ov143_02292898_V v;
    s32 i;
    for (i = 0; i < 16; i++) {
        func_ov143_02292064(s, &v, i);
        if (v.x <= x && v.x + 0x14 > x && v.y <= y && v.y + 0x12 > y) {
            return (u8)i;
        }
    }
    if (x >= 0 && x < 0x38 && y >= 0x90 && y < 0xac) return 0x10;
    if (x >= 0x60 && x < 0xb0 && y >= 0x90 && y < 0xb8) return 0x11;
    return 0x16;
}

void func_ov143_02292908(S *s) {
    func_ov002_02202af0(s->unk_ac);
    s->unk_9e = s->unk_8d;
    func_ov002_02200a58(s, 6);
}

void func_ov143_0229292c(S *s) {
    func_ov002_02202b68(s->unk_ac);
    func_ov002_02200a58(s, 5);
}

void func_ov143_02292944(S *s) {
    func_ov002_02202a78(s->unk_ac);
    ((Unk_ov143_Sub *)s->unk_ac)->vfunc_0c();
}

void func_ov143_02292960(S *s, s32 a, s32 b) {
    func_ov002_022029e8(s->unk_ac, a, b, 3, 1);
    s->unk_9e = s->unk_8d;
    func_ov002_02200a58(s, 4);
}

void func_ov143_02292990(S *s) {
    s32 a, b;
    switch (s->unk_a4) {
    case 0x12:
    case 0x13:
        func_ov002_02202ca0(s->unk_ac);
        break;
    default:
        func_ov002_02202c40(s->unk_ac);
        break;
    }
    a = func_ov143_02292a70(s);
    b = func_ov143_022929f0(s);
    func_ov143_02292960(s, a, b);
}

void func_ov143_022929d4(S *s) {
    func_ov002_02202d00(s->unk_ac, 0);
    ((Unk_ov143_Sub *)s->unk_ac)->vfunc_0c();
}

s32 func_ov143_022929f0(S *s) {
    Unk_ov143_02292898_V v;
    u32 t = s->unk_a4;
    if (t <= 0xf) {
        func_ov143_02292064(s, &v, t);
        return v.y + 3;
    }
    switch (t - 0x10) {
    case 0:
        return 0xa0;
    case 1:
        return 0xa0;
    case 2:
        return func_ov002_022030b8(s->unk_110, 1);
    case 3:
        return func_ov002_022030b8(s->unk_110, 2);
    case 4:
        return func_ov002_022030b8(s->unk_110, 3);
    case 5:
        return func_ov002_022030b8(s->unk_110, 4);
    }
    return 0x60;
}

s32 func_ov143_02292a70(S *s) {
    Unk_ov143_02292898_V v;
    u32 t = s->unk_a4;
    if (t <= 0xf) {
        func_ov143_02292064(s, &v, t);
        return v.x + 0xa;
    }
    switch (t - 0x10) {
    case 0:
        return 0x2e;
    case 1:
        return 0x94;
    case 2:
        return func_ov002_022030f4(s->unk_110, 1) - 6;
    case 3:
        return func_ov002_022030f4(s->unk_110, 2) - 6;
    case 4:
        return func_ov002_022030f4(s->unk_110, 3);
    case 5:
        return func_ov002_022030f4(s->unk_110, 4);
    }
    return 0x80;
}

void func_ov143_02292af4(S *s) {
    s32 a = func_ov143_02292a70(s);
    s32 b = func_ov143_022929f0(s);
    func_ov002_02202a40(s->unk_ac, a, b);
    func_ov002_02202d00(s->unk_ac, 1);
    func_ov143_02292944(s);
}

BOOL func_ov143_02292b2c(S *s) {
    if (func_0206ed18() == 0) return TRUE;
    if (func_02072e44(data_020cbb18) != 0) {
        if (func_020740a0(s->unk_9c) == 0) return FALSE;
    }
    return TRUE;
}

void func_ov143_02292b64(S *s) {
    u8 buf[0x11];
    if (func_02072e44(data_020cbb18) != 0) {
        void *g;
        buf[0] = 0xc;
        func_02116048(s->unk_a0, buf + 1, 0x10);
        g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, buf, 0x11);
        func_02072824(g, 0x16, 4);
        s->unk_9c = func_02072e34(g);
    }
}

void func_ov143_02292bc0(S *s) {
    func_0206ecf8(0);
    func_ov002_022030ac(s->unk_110, 2);
    func_ov002_02200a50(s, 2);
    func_ov002_02200a58(s, 9);
}

void func_ov143_02292bf0(S *s) {
    func_0206ecf8(1);
    func_ov002_022030ac(s->unk_110, 1);
    func_ov002_02200a50(s, 2);
    func_ov002_02200a58(s, 9);
    func_0206db34(data_021ed2f8, s->unk_a0);
    func_0206dad8();
    func_020795a8(data_021dfd8c);
    func_ov143_02292b64(s);
}

void func_ov143_02292c44(S *s) {
    if (func_0206ef0c() != 0) {
        func_ov143_02292c88(s);
    } else {
        func_ov143_02292c64(s);
    }
}

void func_ov143_02292c64(S *s) {
    s->unk_a4 = 0x15;
    func_ov143_02292af4(s);
    func_ov002_02200980(s);
    func_ov002_02200a58(s, 8);
}

void func_ov143_02292c88(S *s) {
    func_ov143_022929d4(s);
    func_ov002_02200a58(s, 7);
}

void func_ov143_02292ca0(S *s) {
    if (func_0206ef0c() != 0) {
        func_ov143_02292cdc(s);
    } else {
        func_ov143_02292cc0(s);
    }
}

void func_ov143_02292cc0(S *s) {
    func_ov143_02292af4(s);
    func_ov002_02200980(s);
    func_ov002_02200a58(s, 2);
}

void func_ov143_02292cdc(S *s) {
    func_ov143_022929d4(s);
    func_ov002_02200a58(s, 0);
}

void func_ov143_02292cf4(S *s) {
    s32 v = data_020ddf8c;
    if (v == -1 || v >= 0x10) {
        if (func_ov143_02292010(s, 8) == 0) {
            func_ov143_022924c4(s);
        }
    } else {
        func_ov143_02291ff0(s, 8);
        s->unk_9a = v;
    }
}

void func_ov143_02292d34(S *s) {
    if (func_ov002_0220308c(s->unk_110) != 0) {
        if (func_0208d534(s->unk_ac) != 0) {
            s32 a = func_ov002_0220306c(s->unk_110);
            s32 b = func_ov002_022030f4(s->unk_110, -1);
            s32 c = func_ov002_022030b8(s->unk_110, -1);
            func_ov002_02202a40(s->unk_ac, a + (b - 6), a + c);
        }
    } else {
        func_ov143_022929d4(s);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov143_02292da0(S *s) {
    func_ov143_0229245c(s);
    func_0200402c(0x2a);
    func_ov002_022030ac(s->unk_110, 4);
}

void func_ov143_02292dc4(S *s) {
    s32 i;
    func_ov143_0229245c(s);
    func_ov002_022030ac(s->unk_110, 3);
    func_0200402c(0x5a);
    i = 0;
    do {
        s->unk_a0[i] = 0xf;
        i++;
    } while (i < 16);
}

void func_ov143_02292df8(S *s) {
    u32 old;
    u32 k;
    if (func_ov002_022009d4(s) != 0) {
        func_ov143_02292c88(s);
        return;
    }
    old = s->unk_a4;
    func_ov002_022009c8(s);
    if (func_ov002_022009a4(s) != 0) {
        s->unk_a4 = 0x14;
    } else if (func_ov002_02200998(s) != 0) {
        s->unk_a4 = 0x15;
    }
    if (old != s->unk_a4) {
        func_ov143_02292990(s);
        return;
    }
    k = data_021f47d8[1];
    if (k & 1) {
        func_ov143_0229292c(s);
    } else if (k & 2) {
        func_ov143_022929d4(s);
        func_ov143_02292da0(s);
    } else if (k & 8) {
        func_ov143_022929d4(s);
        func_ov143_02292dc4(s);
    }
}

void func_ov143_02292ea0(S *s) {
    if (func_ov002_02200a14(s, 1) != 0) {
        func_ov143_02292c64(s);
        return;
    }
    if (Unk_ov143_Both()) {
        if (func_ov002_02203110(s->unk_110, 3) != 0) {
            func_ov143_02292dc4(s);
        } else if (func_ov002_02203110(s->unk_110, 4) != 0) {
            func_ov143_02292da0(s);
        }
    }
}

void func_ov143_02292f0c(S *s) {
    if (func_0208d4fc(s->unk_ac) != 0) {
        func_ov143_02292944(s);
        func_ov002_02200a58(s, s->unk_9e);
    }
}

void func_ov143_02292f30(S *s) {
    if (func_0208d4fc(s->unk_ac) != 0) {
        if (func_ov143_022927d8(s, s->unk_a4) == 0) {
            func_ov002_02200a58(s, 2);
            func_ov143_02292908(s);
        }
    }
}

void func_ov143_02292f64(S *s) {
    if (func_ov002_022028f0(s->unk_ac) == 0) {
        func_ov002_02200a58(s, s->unk_9e);
        func_ov143_022935d0(s);
    }
}

void func_ov143_02292f8c(S *s) {
    if ((data_021f47d8[0] & 1) != 0) {
        u32 t = func_ov002_022009c8(s);
        if (t != 0) {
            u32 idx = s->unk_a4;
            u32 n = func_ov143_02292198(s, s->unk_a0[idx]);
            u32 old = n;
            if (func_ov002_0220128c(t) != 0) {
                if (n < 0xf) n = (u8)(n + 1);
            } else if (func_ov002_0220127c(t) != 0) {
                if (n != 0) n = (u8)(n - 1);
            }
            if (n != old) {
                s32 a, b;
                s->unk_a0[idx] = func_ov143_02292170(s, n);
                func_0206da5c(s->unk_a0[idx]);
                a = func_ov143_02292a70(s);
                b = func_ov143_022929f0(s);
                func_ov002_02202a40(s->unk_ac, a, b);
            }
        }
    } else {
        func_ov143_02292ca0(s);
        func_ov143_02292908(s);
    }
}

void func_ov143_0229303c(S *s) {
    u32 k;
    if (func_ov002_022009d4(s) != 0) {
        func_ov143_02292cdc(s);
        return;
    }
    if (func_ov143_022925d4(s, func_ov002_022009c8(s)) != 0) {
        func_ov143_02292990(s);
        return;
    }
    k = data_021f47d8[1];
    if (k & 1) {
        func_ov143_0229292c(s);
    } else if (k & 2) {
        func_ov143_022929d4(s);
        func_ov143_02292bc0(s);
    } else if (k & 8) {
        func_ov143_022929d4(s);
        func_ov143_02292bf0(s);
    }
}

void func_ov143_022930b8(S *s) {
    s32 v;
    u32 idx;
    u32 cur, nw;
    if (data_021f4770 == 0) {
        func_ov143_02292ca0(s);
        return;
    }
    v = s->unk_a5 + (s->unk_a8 - data_021ef5ec) / 3;
    if (v < 0) v = 0;
    else if (v > 0xf) v = 0xf;
    idx = s->unk_a4;
    cur = s->unk_a0[idx];
    nw = func_ov143_02292170(s, (u8)v);
    if (cur != nw) {
        func_0206da5c(nw);
        s->unk_a0[idx] = nw;
    }
}

void func_ov143_0229312c(S *s) {
    u32 r;
    if (func_ov002_02200a14(s, 1) != 0) {
        func_ov143_02292cc0(s);
        return;
    }
    if (Unk_ov143_Both()) {
        r = func_ov143_02292898(s, data_021ef5f0, data_021ef5ec);
        if (r != 0x16) {
            func_ov143_022927d8(s, r);
        } else if (func_ov002_02203110(s->unk_110, 1) != 0) {
            func_ov143_02292bf0(s);
        } else if (func_ov002_02203110(s->unk_110, 2) != 0) {
            func_ov143_02292bc0(s);
        }
    }
}

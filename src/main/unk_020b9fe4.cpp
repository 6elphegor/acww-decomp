#include "types.h"

struct Unk_020ba1dc_Time {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_020ba518_Time {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_020ba6f4_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};

struct Unk_020ba8cc_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_020ba8cc_State {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[8];
    s32 unk_34;
};

struct Unk_021ed2b0 {
    u8 pad_00[0xa];
    u8 unk_0a;
    u8 pad_0b;
    s8 unk_0c;
    u8 unk_0d;
};

struct Unk_020b9fe4 {
    s32 unk_0000;
    u8 pad_0004[0x1204];
    s32 unk_1208;
    s32 unk_120c;
    u8 pad_1210[0x304];
    s32 unk_1514;
    s32 unk_1518;
    s32 unk_151c;
    s32 unk_1520;
    s32 unk_1524;
    s32 unk_1528;
    s32 unk_152c;
    s32 unk_1530;
    s32 unk_1534;
    s16 unk_1538;
    u8 pad_153a[2];
    u16 unk_153c;
    u16 unk_153e;
    u8 pad_1540[4];
    s32 unk_1544[2][2];
    s32 unk_1554[2][2];
    s32 unk_1564;
    s32 unk_1568;
    s32 unk_156c;
    s32 unk_1570;
    s32 unk_1574;
    s32 unk_1578;
    s32 unk_157c;
    u8 pad_1580[4];
    u8 *unk_1584;
    u32 unk_1588;
    s32 unk_158c;

    Unk_020b9fe4();
    void func_020b9fe4();
    void func_020ba06c();
    BOOL func_020ba10c(u8 **p1, u32 *p2, s32 mode, s32 idx);
    BOOL func_020ba170(s32 idx, s32 unused);
    s32 func_020ba1a4(s32 a, s32 b);
    s32 func_020ba1b4(s32 v);
    void func_020ba1dc();
    BOOL func_020ba260(s32 v);
    void func_020ba2a4(s32 v);
    void func_020ba2e4(s32 a, s32 b);
    s32 func_020ba334(s32 v);
    void func_020ba3e4();
    void func_020ba49c();
    void func_020ba670(s32 *a, s32 *b);
    void func_020ba794();
};

extern "C" {
BOOL func_020ba800(u16 **p);
BOOL func_020ba834();
void func_020ba518();
s32 func_020ba624(s32 x);
void func_020ba6c4(u16 *d, u16 *s1, u16 *s2, s32 t);
void func_020ba6f4(u16 *d, u16 *s1, u16 *s2, s32 t);
void func_020ba8cc(Unk_020ba8cc_Obj *o);
}

extern "C" {
BOOL func_020024f0(void *p, s32 a, s32 b);
BOOL func_020025fc(u32 res, void *heap, s32 c, s32 d, s32 e, s32 f);
s32 func_02002580(u8 *a, s32 b, s32 c, s32 d, s32 e);
u8 *func_020641ec(u32 res, void *heap, s32 a, void *b);
BOOL func_020641b4(u32 res, u8 *a, s32 b);
s32 func_02063b8c(s32 a);
s32 func_02133150(s32 a, s32 b);
void func_02063968(void *a, void *b);
void func_0209d498(void *p);
s32 func_0209cc08(void *p);
void func_0209d124(void *p, s32 a);
void func_0209cf18(void *p);
void func_020c010c(void *dst, void *src);
u16 func_020b9cd8(Unk_020b9fe4 *self, void *t);
u16 func_020b9d18(Unk_020b9fe4 *self, void *t);
void func_020b9c90(void *a, s32 b, s32 c, s32 d);
void func_020baa10(s32 a, s32 b);
u32 func_0213335c(u32 a, u32 b);
void func_020e7fcc(void *st, u32 v);
s32 func_020e7f90(void *st, s32 n);
void *func_020e8594(s32 n);
void func_020e759c(s32 *p, s32 a, s32 b);

extern u32 data_021f482c;
extern Unk_020b9fe4 data_021eff48;
extern u32 *data_020e4ad0[];
extern u32 data_020e4d34[];
extern s8 data_020d13e8[];
extern Unk_021ed2b0 data_021ed2b0;
extern u8 data_021d7350[];
extern u8 data_021d7352[];
extern u16 *data_021f14ac[3];
extern s32 data_021ef670;
extern u8 data_020d0df0[];
extern s32 data_021f146c;
extern s32 data_020d0ea0[];
extern u8 *data_021f148c[][2];
extern Unk_020ba8cc_State data_021f1448;
extern u8 data_021ef908[];
extern u32 data_021f149c[2][2];
extern u32 data_020e4ca4[2][2];
}

void Unk_020b9fe4::func_020b9fe4() {
    s32 idx = unk_1578;
    s32 blk = (((unk_1208 >> 8) - 8) & 0xff) >> 3;
    if (blk == idx) {
        if (func_020024f0((u8 *)((blk << 5) + (u32)unk_1584), 6, 32)) {
            s32 cnt = unk_120c;
            idx = idx + 1;
            cnt = cnt + 1;
            if (idx >= 32) {
                idx = -1;
                cnt = 32;
                func_020ba2e4(unk_1528, unk_1528);
                unk_1570 = unk_1574;
                unk_158c = 3;
            }
            unk_1578 = idx;
            unk_120c = cnt;
        }
    }
}

void Unk_020b9fe4::func_020ba06c() {
    s32 mode, next;
    if (unk_1530 == 0) {
        mode = 1;
        next = unk_1524 + 1;
    } else {
        mode = 2;
        next = unk_1524 - 1;
    }
    if (func_020ba170(next, 6)) {
        if (func_020ba10c(&unk_1584, &unk_1588, mode, next)) {
            func_020ba2e4(unk_1524, next);
            if (unk_1524 < 3 && unk_1528 >= 3) {
                func_020ba794();
            }
            unk_1578 = 0;
            unk_120c = 0;
            unk_158c = 2;
        }
    }
}

BOOL Unk_020b9fe4::func_020ba10c(u8 **p1, u32 *p2, s32 mode, s32 idx) {
    BOOL ok = FALSE;
    s32 i;
    u32 res;
    if (mode == 0) {
        s32 t = idx * 2;
        i = t + unk_1570;
    } else {
        i = idx;
    }
    res = data_020e4ad0[mode][i];
    if (*p1 == NULL) {
        *p1 = func_020641ec(res, (void *)data_021f482c, -4, p2);
        if (*p1 != NULL) {
            ok = TRUE;
        }
    } else if (func_020641b4(res, *p1, *p2)) {
        ok = TRUE;
    }
    return ok;
}

BOOL Unk_020b9fe4::func_020ba170(s32 idx, s32 unused) {
    BOOL ok = FALSE;
    if (func_020025fc(data_020e4d34[idx], (void *)data_021f482c, unused, 16, 16, 47)) {
        ok = TRUE;
    }
    return ok;
}

s32 Unk_020b9fe4::func_020ba1a4(s32 a, s32 b) {
    s8 *p = data_020d13e8 + a * 24;
    return p[b];
}

s32 Unk_020b9fe4::func_020ba1b4(s32 v) {
    s32 t = v + data_021ed2b0.unk_0c;
    return func_020ba1a4(data_021ed2b0.unk_0a, t % 24);
}

void Unk_020b9fe4::func_020ba1dc() {
    Unk_020ba1dc_Time t;
    u8 *base = data_021d7350;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    if ((data_021ed2b0.unk_0c + 6) % 24 != ((u8 *)&t)[2]) {
        s32 r;
        func_020c010c(base + 0x15f66, &t);
        r = func_020ba1b4(1);
        switch (r) {
        case 3:
        case 4:
            base[0x15f6d] = 1;
            break;
        }
        if (func_020ba260(r)) {
            s32 h = ((u8 *)&t)[2] - 6;
            if (h < 0) {
                h += 24;
            }
            base[0x15f6c] = h;
        }
    }
}

BOOL Unk_020b9fe4::func_020ba260(s32 v) {
    BOOL r = FALSE;
    if (v == -1) {
    } else if (v == unk_1524) {
        r = TRUE;
    } else if (unk_1520 == 0) {
        func_020ba2a4(v);
        r = TRUE;
        unk_158c = r;
        unk_1520 = r;
    }
    return r;
}

void Unk_020b9fe4::func_020ba2a4(s32 v) {
    unk_152c = v;
    if (v > unk_1524) {
        unk_1530 = 0;
    } else {
        unk_1530 = 1;
    }
    unk_1574 = func_02063b8c(2);
}

void Unk_020b9fe4::func_020ba2e4(s32 a, s32 b) {
    s32 x = func_020ba334(a);
    s32 y = func_020ba334(b);
    if (x != 0) {
        unk_1534 = x;
    } else if (y != 0) {
        unk_1534 = y;
    } else {
        unk_1534 = 0;
    }
    unk_1524 = a;
    unk_1528 = b;
}

s32 Unk_020b9fe4::func_020ba334(s32 v) {
    s32 r = 0;
    Unk_020ba1dc_Time t;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    switch (v) {
    case 3:
    case 4:
        switch (func_0209cc08(&t)) {
        case 0:
        case 1:
        case 2:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            r = 2;
            break;
        default:
            r = 1;
            break;
        }
        break;
    }
    return r;
}

extern "C" s32 func_020ba3a0(s32 x) {
    s32 r = 0;
    if (func_020ba834()) {
        if (func_020ba800(data_021f14ac)) {
            if (data_021ef670 != 0) {
                r = func_020ba624(x);
            } else {
                func_020ba518();
                r = TRUE;
            }
        }
    }
    return r;
}

void Unk_020b9fe4::func_020ba3e4() {
    Unk_020ba1dc_Time t;
    s32 r = func_020ba1b4(0);
    switch (r) {
    case 3:
    case 4:
        data_021ed2b0.unk_0d = 1;
        break;
    }
    func_020ba2e4(r, r);
    unk_0000 = 1;
    unk_158c = 0;
    unk_152c = -1;
    unk_1530 = 2;
    unk_1574 = func_02063b8c(2);
    unk_1570 = unk_1574;
    unk_1520 = 0;
    unk_1578 = 0;
    unk_120c = 0;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    unk_153e = func_020b9cd8(this, &t);
    func_0209d124(&t, 6);
    unk_153c = func_020b9d18(this, &t);
}

void Unk_020b9fe4::func_020ba49c() {
}

Unk_020b9fe4::Unk_020b9fe4() {
    unk_0000 = 0;
    unk_1520 = 0;
    unk_157c = 0;
    unk_1584 = 0;
    unk_158c = 0;
    unk_1578 = -1;
    unk_1514 = 0;
    unk_1518 = 0;
    unk_151c = 0;
    unk_1564 = 0;
    unk_1568 = 0;
    unk_156c = 0;
    unk_1534 = 0;
    func_020ba794();
}

void Unk_020b9fe4::func_020ba670(s32 *a, s32 *b) {
    Unk_020ba518_Time t;
    func_0209cf18(&t);
    *a = (u32)(t.unk_00 * 0x44445) >> 12;
    if (unk_1528 != unk_1524) {
        *b = func_02133150(unk_120c << 12, 32);
    } else {
        *b = 0;
    }
}

extern "C" void func_020ba6c4(u16 *d, u16 *s1, u16 *s2, s32 t) {
    s32 i;
    for (i = 0; i < 6; i++) {
        func_020ba6f4(d, s1, s2, t);
        d++;
        s1++;
        s2++;
    }
}

extern "C" void func_020ba6f4(u16 *d, u16 *s1, u16 *s2, s32 t) {
    Unk_020ba6f4_Color *dc = (Unk_020ba6f4_Color *)d;
    Unk_020ba6f4_Color *c1 = (Unk_020ba6f4_Color *)s1;
    Unk_020ba6f4_Color *c2 = (Unk_020ba6f4_Color *)s2;
    s32 inv = 0x1000 - t;
    dc->r = (c1->r * inv + c2->r * t) >> 12;
    dc->g = (c1->g * inv + c2->g * t) >> 12;
    dc->b = (c1->b * inv + c2->b * t) >> 12;
    dc->a = 0;
}

void Unk_020b9fe4::func_020ba794() {
    Unk_020ba1dc_Time t;
    u32 st;
    u16 buf[8];
    u32 seed;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_02063968(data_021d7352, buf);
    func_0209d498(&t);
    seed = ((u8 *)&t)[3] | ((((u8 *)&t)[4] << 5) | ((buf[0] << 16) | ((((u8 *)&t)[5] & 0x1f) << 9)));
    func_020e7fcc(&st, 1);
    func_020e7fcc(&st, seed);
    unk_1538 = func_020e7f90(&st, 0x2aaa) - 0x1555;
}

extern "C" BOOL func_020ba800(u16 **p) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (*p == 0) {
            *p = (u16 *)func_020e8594(32);
            if (*p == 0) {
                return FALSE;
            }
        }
        p++;
    }
    return TRUE;
}

extern "C" void func_020ba8cc(Unk_020ba8cc_Obj *o) {
    s32 a = data_021f1448.unk_28 == 3;
    s32 b = data_021f1448.unk_28 == 4;
    s32 on = data_021f1448.unk_34 == 1;
    s32 v = 0;
    s32 w;
    if (on) {
        if (a) {
            v = 0x99a00;
        } else if (b) {
            v = 0x100000;
        }
    }
    w = 0xdf;
    if (on) {
        if (v < o->unk_0c) {
            w = 0x1eb;
        }
    } else {
        w = 0x5200;
    }
    func_020e759c(&o->unk_0c, v, w);
}

extern "C" void func_020ba518() {
    u16 **pal = data_021f14ac;
    Unk_020ba518_Time t;
    s32 a = 0;
    s32 b = 0;
    s32 h, pm;
    s32 h2, pm2;
    data_021eff48.func_020ba670(&a, &b);
    func_0209cf18(&t);
    h = t.unk_01;
    if ((s32)t.unk_01 < 12) {
        pm = 0;
    } else {
        h -= 12;
        pm = 1;
    }
    h2 = (u32)(t.unk_01 + 1) % 24;
    if (h2 < 12) {
        pm2 = 0;
    } else {
        h2 -= 12;
        pm2 = 1;
    }
    func_020ba6c4(pal[0], (u16 *)(data_021f148c[data_020d0ea0[data_021f146c]][pm] + h * 32), (u16 *)(data_021f148c[data_020d0ea0[data_021f146c]][pm2] + h2 * 32), a);
    if (data_021f1448.unk_28 != data_021f146c) {
            func_020ba6c4(pal[1], (u16 *)(data_021f148c[data_020d0ea0[data_021f1448.unk_28]][pm] + h * 32), (u16 *)(data_021f148c[data_020d0ea0[data_021f1448.unk_28]][pm2] + h2 * 32), a);
        func_020ba6c4(pal[2], pal[0], pal[1], b);
        func_020b9c90(data_021ef908, 0, pal[2][4], 0);
        func_020b9c90(data_021ef908, 1, pal[2][5], 0xc0);
    } else {
        func_020b9c90(data_021ef908, 0, pal[0][4], 0);
        func_020b9c90(data_021ef908, 1, pal[0][5], 0xc0);
    }
    func_020baa10(a, b);
}

extern "C" s32 func_020ba624(s32 x) {
    u16 **pal = data_021f14ac;
    s32 r;
    func_020ba518();
    if (data_021f1448.unk_28 != data_021f1448.unk_24) {
        r = func_02002580((u8 *)pal[2], data_020d0df0[x], 1, 1, 1);
    } else {
        r = func_02002580((u8 *)pal[0], data_020d0df0[x], 1, 1, 1);
    }
    return r;
}

extern "C" BOOL func_020ba834() {
    s32 i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (data_021eff48.unk_1544[i][j] == 0) {
                u8 **dst = &data_021f148c[i][j];
                *dst = func_020641ec(data_020e4ca4[i][j], (void *)data_021f482c, -4, &data_021f149c[i][j]);
                if (!*dst) {
                    return FALSE;
                }
            } else {
                func_020641b4(data_020e4ca4[i][j], (u8 *)data_021eff48.unk_1544[i][j], data_021eff48.unk_1554[i][j]);
            }
        }
    }
    return TRUE;
}

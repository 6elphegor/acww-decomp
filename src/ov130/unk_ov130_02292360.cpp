#include "types.h"

struct Unk_ov130_02292360 {
    u16 flags;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 pad_24[8];
    u8 slots[5][0x40];
    u8 pad_16c[0x1b4 - 0x16c];
    u16 map[0x400];
};

extern "C" {
void func_0206fc44(void *p);
void func_0200402c(s32 v);
void func_02003f2c(u32 a);
s32 func_02087e70(s32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
BOOL func_ov002_0220128c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220125c(u32 v);

extern u32 data_ov130_0229322c[];
extern u32 data_ov130_02293244[];
extern u8 data_ov130_022931e0[];
extern u8 data_ov130_022931ec[];
extern u8 data_ov130_022931fc[];
extern u8 data_ov130_0229320c[];
extern u8 data_ov130_0229321c[];
extern u32 data_ov130_0229325c[];
extern u32 data_ov130_02293288[];
extern u32 data_ov130_022932b4[];
extern u32 data_ov130_022932e0[];
extern u32 data_ov130_02293314[];
extern u16 data_ov130_02293390[];
extern u32 data_ov130_022934d8[];
extern u32 data_ov130_022935e8[];
extern u32 data_ov130_02293518[];
extern u32 data_ov130_022935a8[];
extern u32 data_ov130_02293568[];
extern u32 data_ov130_02293538[];
extern u32 data_ov130_02293540[];
extern u32 data_ov130_02293548[];
extern u32 data_ov130_02293550[];
extern u32 data_ov130_02293558[];
extern u32 data_ov130_02293560[];
extern u32 data_ov130_02293508[];
extern u32 data_ov130_02293510[];
extern u32 data_ov130_022934f8[];
extern u32 data_ov130_02293500[];

void func_ov130_02292360(Unk_ov130_02292360 *s, u32 m);
void func_ov130_02292368(Unk_ov130_02292360 *s, u32 m);
BOOL func_ov130_02292370(Unk_ov130_02292360 *s, u32 m);
void *func_ov130_02292380(Unk_ov130_02292360 *s);
void func_ov130_022923a4(Unk_ov130_02292360 *s);
void func_ov130_022923c8(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y);
void func_ov130_02292418(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n);
void func_ov130_02292480(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n);
void func_ov130_022924b0(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y);
void func_ov130_02292548(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n);
void func_ov130_02292598(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n);
void func_ov130_022925c8(Unk_ov130_02292360 *s);
void func_ov130_02292708(Unk_ov130_02292360 *s);
BOOL func_ov130_02292758(Unk_ov130_02292360 *s);
void func_ov130_0229277c();
void func_ov130_02292788(u32 idx);
void func_ov130_02292b30(Unk_ov130_02292360 *s, u32 idx);
void func_ov130_02292b44(Unk_ov130_02292360 *s, u32 idx);
void func_ov130_02292b50(Unk_ov130_02292360 *s, u32 idx, s32 n);
void func_ov130_02292ba4(Unk_ov130_02292360 *s);
void func_ov130_02292c1c(Unk_ov130_02292360 *s);

void func_ov130_02292360(Unk_ov130_02292360 *s, u32 m) {
    s->flags &= ~m;
}

void func_ov130_02292368(Unk_ov130_02292360 *s, u32 m) {
    s->flags |= m;
}

BOOL func_ov130_02292370(Unk_ov130_02292360 *s, u32 m) {
    if ((s->flags & m) != 0) return TRUE;
    return FALSE;
}

void *func_ov130_02292380(Unk_ov130_02292360 *s) {
    if (s->unk_06 >= 5) return (u8 *)s + 0x12c;
    s->unk_06++;
    return s->slots[s->unk_06 - 1];
}

void func_ov130_022923a4(Unk_ov130_02292360 *s) {
    s32 i;
    s->unk_06 = 0;
    for (i = 0; i < 5; i++) func_0206fc44(s->slots[i]);
}

void func_ov130_022923c8(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y) {
    s32 p;
    u16 *m;
    u16 t = (u16)(idx * 2 + 0x160);
    p = x + y * 32;
    m = s->map;
    m[p] = (m[p] & 0xfc00) | t;
    p += 0x20;
    t = (u16)(t + 1);
    m[p] = (m[p] & 0xfc00) | t;
    func_ov130_02292368(s, 1);
}

void func_ov130_02292418(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n) {
    s32 z = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        if (val == 0) {
            if (i == 0) func_ov130_022923c8(s, z, x, y);
            else func_ov130_022923c8(s, 11, x, y);
        } else {
            func_ov130_022923c8(s, val % 10, x, y);
            val = val / 10;
        }
        x--;
    }
}

void func_ov130_02292480(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        func_ov130_022923c8(s, idx, x, y);
        x--;
    }
}

void func_ov130_022924b0(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y) {
    u16 b;
    s32 p;
    if (idx != 11) b = (u16)(idx * 4 + 0x84);
    else b = 0x176;
    p = x + y * 32;
    s->map[p] = (s->map[p] & 0xfc00) | b;
    s->map[p + 1] = (s->map[p + 1] & 0xfc00) | (u16)(b + 1);
    b += 2;
    if (idx == 11) b = 0x176;
    s->map[p + 0x20] = (s->map[p + 0x20] & 0xfc00) | b;
    s->map[p + 0x21] = (s->map[p + 0x21] & 0xfc00) | (u16)(b + 1);
    func_ov130_02292368(s, 1);
}

void func_ov130_02292548(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (val == 0) {
            func_ov130_022924b0(s, 11, x, y);
        } else {
            func_ov130_022924b0(s, val % 10, x, y);
            val = val / 10;
        }
        x -= 2;
    }
}

void func_ov130_02292598(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        func_ov130_022924b0(s, idx, x, y);
        x -= 2;
    }
}

}
namespace Unk_ov130_022925c8_Imp {
extern "C" {
s32 func_ov130_02292418(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n);
s32 func_ov130_02292480(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n);
s32 func_ov130_02292548(Unk_ov130_02292360 *s, s32 val, s32 x, s32 y, s32 n);
s32 func_ov130_02292598(Unk_ov130_02292360 *s, s32 idx, s32 x, s32 y, s32 n);
}
}
extern "C" {
void func_ov130_022925c8(Unk_ov130_02292360 *s) {
    u32 m = s->unk_08;
    u32 a = data_ov130_0229322c[m];
    u32 b = data_ov130_02293244[m];
    switch (m) {
    case 4:
        if (s->unk_0c == 0) Unk_ov130_022925c8_Imp::func_ov130_02292480(s, 10, a, b, 2);
        else Unk_ov130_022925c8_Imp::func_ov130_02292418(s, s->unk_0c, a, b, 2);
        break;
    case 5:
        if (s->unk_0c == 0) {
            Unk_ov130_022925c8_Imp::func_ov130_02292418(s, 0, a, b, 9);
            Unk_ov130_022925c8_Imp::func_ov130_02292480(s, 10, a, b, 7);
        } else {
            Unk_ov130_022925c8_Imp::func_ov130_02292418(s, s->unk_0c, a, b, 7);
        }
        break;
    default:
        s->unk_1c = s->unk_14;
        if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::func_ov130_02292418(s, s->unk_1c, a, b, 9);
        else Unk_ov130_022925c8_Imp::func_ov130_02292548(s, s->unk_1c, a, b, 6);
        if (s->unk_0c == 0) {
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::func_ov130_02292480(s, 10, a, b + 3, 9);
            else Unk_ov130_022925c8_Imp::func_ov130_02292598(s, 10, a, b + 3, 6);
        } else {
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::func_ov130_02292418(s, s->unk_0c, a, b + 3, 9);
            else Unk_ov130_022925c8_Imp::func_ov130_02292548(s, s->unk_0c, a, b + 3, 6);
        }
        if (s->unk_08 == 0 || s->unk_08 == 2) {
            s32 t = s->unk_18;
            if (s->unk_07 != 0) t += s->unk_0c;
            s->unk_20 = t;
            if (s->unk_08 >= 2) Unk_ov130_022925c8_Imp::func_ov130_02292418(s, s->unk_20, a, b + 6, 9);
            else Unk_ov130_022925c8_Imp::func_ov130_02292548(s, s->unk_20, a, b + 6, 6);
        }
    }
}

void func_ov130_02292708(Unk_ov130_02292360 *s) {
    s32 n;
    s32 v = s->unk_0c;
    u32 k = s->unk_04;
    if (k == 10) {
        if (!func_ov130_02292758(s)) func_0200402c(0x34);
    } else {
        n = k + v * 10;
        if (n > s->unk_10) n = s->unk_10;
        if (n == v) {
            func_0200402c(0x34);
        } else {
            func_ov130_02292788(k);
            s->unk_0c = n;
            func_ov130_022925c8(s);
        }
    }
}

BOOL func_ov130_02292758(Unk_ov130_02292360 *s) {
    if (s->unk_0c == 0) return FALSE;
    s->unk_0c = 0;
    func_ov130_0229277c();
    func_ov130_022925c8(s);
    return TRUE;
}

void func_ov130_0229277c() {
    func_0200402c(0x2a);
}

void func_ov130_02292788(u32 idx) {
    func_02003f2c(data_ov130_02293390[idx]);
}

s32 func_ov130_0229279c(Unk_ov130_02292360 *s) {
    return s->unk_18;
}

s32 func_ov130_022927a0(Unk_ov130_02292360 *s) {
    return s->unk_14;
}

s32 func_ov130_022927a4(Unk_ov130_02292360 *s) {
    return s->unk_0c;
}

void func_ov130_022927a8(Unk_ov130_02292360 *s, s32 a, s32 b, s32 c) {
    s->unk_10 = a;
    s->unk_14 = b;
    s->unk_18 = c;
}

void func_ov130_022927b0(Unk_ov130_02292360 *s, s32 y) {
    s32 r4 = y;
    s32 r6 = r4 + 0x60;
    u32 *t1;
    u32 *t2;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        t1 = data_ov130_022934d8;
        t2 = data_ov130_022935e8;
    } else if (s->unk_08 == 4) {
        t1 = data_ov130_02293518;
        t2 = data_ov130_022935a8;
    } else {
        t1 = data_ov130_02293518;
        t2 = data_ov130_02293568;
    }
    if (s->unk_09 == 3) r6 += 10;
    func_02087e70(1, t1, 0x80, r6, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, t2, 0x80, r6, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    r4 += 0x60;
    if (s->unk_08 == 4) return;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        if (s->unk_0c >= 1000) func_02088730(1, data_ov130_02293538, 0x80, r4, -1, 2, 0);
        if (s->unk_0c >= 1000000) func_02088730(1, data_ov130_02293540, 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000) func_02088730(1, data_ov130_02293548, 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000000) func_02088730(1, data_ov130_02293550, 0x80, r4, -1, 2, 0);
        if (s->unk_20 >= 1000) func_02088730(1, data_ov130_02293558, 0x80, r4, -1, 2, 0);
        if (s->unk_20 >= 1000000) func_02088730(1, data_ov130_02293560, 0x80, r4, -1, 2, 0);
    } else {
        if (s->unk_08 == 5) r4 -= 8;
        if (s->unk_0c >= 1000) func_02088730(1, data_ov130_02293508, 0x80, r4, -1, 2, 0);
        if (s->unk_0c >= 1000000) func_02088730(1, data_ov130_02293510, 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000) func_02088730(1, data_ov130_022934f8, 0x80, r4, -1, 2, 0);
        if (s->unk_1c >= 1000000) func_02088730(1, data_ov130_02293500, 0x80, r4, -1, 2, 0);
    }
}

void func_ov130_022929d4(Unk_ov130_02292360 *s) {
    s32 y = (s32)s + 0x60;
    func_02087e70(1, data_ov130_02293518, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov130_02293568, 0x80, y, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
}

BOOL func_ov130_02292a38(Unk_ov130_02292360 *s) {
    if (s->unk_05 == 0xb) return TRUE;
    return FALSE;
}

BOOL func_ov130_02292a48(Unk_ov130_02292360 *s) {
    u32 t = s->unk_05;
    if ((u8)(t + 0xf5) <= 1) return FALSE;
    s->unk_04 = t;
    func_ov130_02292c1c(s);
    return TRUE;
}

BOOL func_ov130_02292a6c(Unk_ov130_02292360 *s, u32 p) {
    u32 old;
    if (p == 0) return FALSE;
    old = s->unk_05;
    if (func_ov002_0220128c(p)) s->unk_05 = data_ov130_0229320c[s->unk_05];
    else if (func_ov002_0220127c(p)) s->unk_05 = data_ov130_0229321c[s->unk_05];
    if (func_ov002_0220126c(p)) s->unk_05 = data_ov130_022931fc[s->unk_05];
    else if (func_ov002_0220125c(p)) s->unk_05 = data_ov130_022931ec[s->unk_05];
    if (old != s->unk_05) return TRUE;
    return FALSE;
}

BOOL func_ov130_02292aec(Unk_ov130_02292360 *s) {
    BOOL r = TRUE;
    u32 t = s->unk_05;
    if (t != 0xb && t != 0xc) r = FALSE;
    return r;
}

u32 func_ov130_02292b00(Unk_ov130_02292360 *s) {
    return data_ov130_022932e0[s->unk_05];
}

u32 func_ov130_02292b10(Unk_ov130_02292360 *s) {
    u32 t = s->unk_05;
    u32 v = data_ov130_02293314[t];
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        if (t <= 10) v += 0x40;
    }
    return v;
}

void func_ov130_02292b30(Unk_ov130_02292360 *s, u32 idx) {
    s32 n;
    if (idx == 10) n = 1;
    else n = 2;
    func_ov130_02292b50(s, idx, n);
}

void func_ov130_02292b44(Unk_ov130_02292360 *s, u32 idx) {
    func_ov130_02292b50(s, idx, 3);
}

void func_ov130_02292b50(Unk_ov130_02292360 *s, u32 idx, s32 n) {
    s32 a = data_ov130_0229325c[idx];
    s32 b = data_ov130_02293288[idx];
    s32 c = data_ov130_022932b4[idx];
    s32 d = c + 1;
    if (s->unk_08 == 0 || s->unk_08 == 2) {
        a += 8;
        b += 8;
    }
    func_0206ee80((u8 *)s + 0x9b4, a, c, b, d, n);
    func_ov130_02292368(s, 2);
}

void func_ov130_02292ba4(Unk_ov130_02292360 *s) {
    s32 x;
    if (s->unk_08 == 0 || s->unk_08 == 2) x = 0x12;
    else x = 0xa;
    func_0206ee80((u8 *)s + 0x9b4, x, 0xc, x + 0xc, 0x13, 2);
    func_ov130_02292b30(s, 10);
    func_ov130_02292368(s, 2);
}

BOOL func_ov130_02292bec(Unk_ov130_02292360 *s) {
    if (s->unk_02 != 0) {
        s->unk_02--;
        if (s->unk_02 == 0) {
            s->unk_02 = 2;
            func_ov130_02292708(s);
            return TRUE;
        }
    }
    return FALSE;
}

void func_ov130_02292c14(Unk_ov130_02292360 *s) {
    s->unk_02 = 0;
}

void func_ov130_02292c1c(Unk_ov130_02292360 *s) {
    func_ov130_02292ba4(s);
    func_ov130_02292b44(s, s->unk_04);
    s->unk_02 = 0xd;
    s->unk_03 = 5;
    func_ov130_02292708(s);
}

u32 func_ov130_02292c40(Unk_ov130_02292360 *s, s32 x, s32 y) {
    s32 yy;
    x -= 0x50;
    yy = y - 0x60;
    y = yy;
    if (s->unk_08 == 0 || s->unk_08 == 2) x -= 0x40;
    if (x >= 0 && x < 0x60 && y >= 0 && y < 0x40) {
        s->unk_04 = data_ov130_022931e0[(x >> 5) + (y >> 4) * 3];
        return s->unk_04;
    }
    return 13;
}

}

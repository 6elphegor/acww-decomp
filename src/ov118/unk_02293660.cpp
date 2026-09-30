#include "types.h"

struct Unk_ov118_02293660_Ent {
    u8 x;
    u8 y;
    u8 type;
};

struct Unk_ov118_02293660 {
    u8 pad_000[0x98];
    u16 unk_98;
    u16 unk_9a;
    u16 unk_9c;
    u8 pad_9e[0xa1 - 0x9e];
    u8 unk_a1;
    u8 unk_a2;
    u8 unk_a3;
    u8 unk_a4;
    u8 unk_a5;
    u8 unk_a6;
    u8 unk_a7;
    u8 pad_a8;
    u8 unk_a9;
    u8 unk_aa;
    u8 pad_ab[0xb0 - 0xab];
    u8 unk_b0;
    u8 pad_b1[0x43c - 0xb1];
    u8 unk_43c[0x4e8 - 0x43c];
    u8 unk_4e8[0x14e8 - 0x4e8];
    u8 unk_14e8[0x454e - 0x14e8];
    u8 unk_454e[13];
    u8 unk_455b[13];
    Unk_ov118_02293660_Ent unk_4568[3];
    Unk_ov118_02293660_Ent unk_4571[14];
};

typedef Unk_ov118_02293660 S;

struct Unk_ov118_02295500 {
    u16 unk_0;
    u16 a : 9;
    u16 pal : 5;
    u16 b : 2;
    u16 tile : 10;
    u16 c : 6;
};

extern "C" {
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_ov118_02295450[];
extern u8 data_ov118_02295458[];
extern u8 data_ov118_02295460[];
extern Unk_ov118_02295500 data_ov118_02295500;
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];

BOOL func_ov118_02292e20(S *s, u32 m);
void func_ov118_02292e00(S *s, u32 m);
void func_ov118_02292e10(S *s, u32 m);
void func_ov118_02293458(S *s);
void func_ov118_02293474(S *s);
void *func_ov118_02293ff0(S *s);
void func_ov118_022940a0(S *s);

BOOL func_ov002_02202f18(void *p, u32 x, u32 y);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_022019a4(void *p, s32 a);
void func_ov002_02201984(void *p, s32 a);
void func_ov002_02201938(void *p, s32 a);
s16 *func_ov117_02292c40(void *p, s32 i);
u32 func_ov117_02292c2c(void *p, s32 i);

void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206fb9c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206fab4(void *p, s32 a, s32 b);
void func_0206f9fc(void *p, u32 v);
void func_020a7c3c(void *p);
void *func_0209750c();
s32 func_0209888c(...);
s32 func_02097740(void *a, s32 b);
BOOL func_020978c8(void *a, s32 b);
BOOL func_0207bf84(void *a, s32 b);
s32 func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);

BOOL func_ov118_02293660(S *s);
void func_ov118_022936e4(S *s);
BOOL func_ov118_02293794(S *s);
void func_ov118_022937a0(S *s, u32 v);
void func_ov118_022937b0(S *s, u32 v);
void func_ov118_022937cc(S *s);
void func_ov118_02293824(S *s);
u8 func_ov118_02293850(S *s, u32 v);
u8 func_ov118_022938b8(S *s, u32 v);
s32 func_ov118_02293924(S *s, u32 v);
void func_ov118_02293994(S *s, u8 v);
u8 func_ov118_02293a48(S *s, s32 x, s32 y);
BOOL func_ov118_02293aa8(S *s);
void func_ov118_02293ae0(S *s, void *p);
void func_ov118_02293c3c(s32 u, s32 x, s32 y, s32 n, s32 flag, s32 pal);
BOOL func_ov118_02293cd0(S *s);
s32 func_ov118_02293d34(S *s);
u8 func_ov118_02293d50(S *s);
u8 *func_ov118_02293d70(S *s);
s32 func_ov118_02293d98(S *s);
void func_ov118_02293dfc(S *s);
void func_ov118_02293e14(S *s);
void func_ov118_02293e2c(S *s, void *p, u32 idx);
s32 func_ov118_02293e98(S *s, u8 *tbl);
void func_ov118_02293ef0(S *s);
void func_ov118_02293f24(S *s);
}

BOOL func_ov118_02293660(S *s) {
    s32 x, y;
    if (!func_ov118_02292e20(s, 8)) {
        return FALSE;
    }
    x = data_021ef5f0;
    y = data_021ef5ec;
    if (func_ov002_02202f18(s->unk_43c, x, y)) {
        s->unk_a5 = y;
        s->unk_a7 = s->unk_a4;
        s->unk_a6 = s->unk_a7;
        func_ov002_02200a58(s, 1);
        return TRUE;
    } else if (x > 0xe8 && x < 0xf5 && y > 0x56 && y < 0xae) {
        func_ov002_02200a58(s, 2);
        return TRUE;
    }
    return FALSE;
}

void func_ov118_022936e4(S *s) {
    s32 n = func_ov118_02293d34(s);
    if (n == 0) {
        func_ov118_02292e00(s, 0x10);
        s->unk_a4 = 0;
    } else {
        u32 a = ((volatile S *)s)->unk_9a;
        u32 b = ((volatile S *)s)->unk_98;
        if (b == a) {
            func_ov118_02292e00(s, 0x10);
        } else if (b < a) {
            s->unk_98 = s->unk_98 + 8;
            if (s->unk_98 > s->unk_9a) {
                s->unk_98 = s->unk_9a;
            }
        } else if (b < 8) {
            s->unk_98 = a;
        } else {
            s->unk_98 = s->unk_98 - 8;
            if (s->unk_98 < s->unk_9a) {
                s->unk_98 = s->unk_9a;
            }
        }
        s->unk_a4 = (s32)(s->unk_98 * 0x58) / n;
    }
}

BOOL func_ov118_02293794(S *s) {
    return func_ov118_02292e20(s, 0x10);
}

void func_ov118_022937a0(S *s, u32 v) {
    s->unk_9a = v;
    func_ov118_02292e10(s, 0x10);
}

void func_ov118_022937b0(S *s, u32 v) {
    s->unk_98 = v;
    s->unk_9a = s->unk_98;
    func_ov118_02292e10(s, 0x10);
}

void func_ov118_022937cc(S *s) {
    u32 c = s->unk_aa;
    if (c != 0xe) {
        if (c == 0xd) {
            func_ov118_022937a0(s, 0);
        } else {
            s32 t = (s->unk_98 + 0xf) >> 4;
            if ((s32)c < t) {
                func_ov118_022937a0(s, c << 4);
            }
            s32 h = s->unk_98 >> 4;
            u32 a = s->unk_aa;
            s32 m;
            if (a <= 5) {
                m = 0;
            } else {
                m = a - 5;
            }
            if (h < m) {
                func_ov118_022937a0(s, m << 4);
            }
        }
    }
}

void func_ov118_02293824(S *s) {
    u32 a = s->unk_aa;
    u32 v;
    if (a <= 5 || a == 0xd) {
        v = 0;
    } else {
        v = (a - 5) << 4;
    }
    func_ov118_022937b0(s, v);
    s->unk_a3 = 0xff;
}

u8 func_ov118_02293850(S *s, u32 v) {
    if (v >= 1 && v < 0xf) {
        return (u8)(v - 1);
    }
    if (v >= 0xf && v < 0x1c) {
        u32 b = func_ov118_02293d70(s)[v - 0xf];
        if (b == 0) {
            return 0xe;
        }
        if (b == 1 || (b >= 2 && b < 6)) {
            return 8;
        }
        if (b >= 6 && b < 0xe) {
            return (u8)(b - 6);
        }
        if (b >= 0xe && b < 0x13) {
            return data_ov118_02295450[b - 0xe];
        }
    }
    return 0xe;
}

u8 func_ov118_022938b8(S *s, u32 v) {
    if (v == 9) {
        return 0xd;
    }
    if (v >= 1 && v < 9) {
        s32 t = v + 5;
        s32 i = 0;
        s32 n = s->unk_a1;
        for (; i < n; i++) {
            if (t == s->unk_454e[i]) {
                return (u8)i;
            }
        }
        return 0xe;
    }
    if (v < 0xf && v >= 0xa) {
        return data_ov118_02295458[v - 0xa];
    }
    if (v < 0x1c && v >= 0xf) {
        return (u8)(v - 0xf);
    }
    return 0xe;
}

s32 func_ov118_02293924(S *s, u32 v) {
    func_ov118_02292e10(s, 0x80);
    if (v == 0xe) {
        func_0206ee80(s->unk_14e8, 0x13, 0, 0x1c, 0x19, 4);
    } else if (v == 0xd) {
        func_0206ee80(s->unk_14e8, 0x13, 0, 0x1c, s->unk_b0 * 2 - 1, 3);
    } else {
        func_0206ee80(s->unk_14e8, 0x13, v * 2, 0x1c, v * 2 + 1, 3);
    }
}

void func_ov118_02293994(S *s, u8 v) {
    if (v == 0) {
        s->unk_a9 = 0xe;
        s->unk_aa = 0xe;
        func_ov118_02293458(s);
        return;
    }
    func_ov118_02293474(s);
    s->unk_aa = func_ov118_022938b8(s, v);
    s->unk_a9 = func_ov118_02293850(s, v);
    if (v >= 1 && v < 0xf) {
        func_ov118_02292e00(s, 0x200);
        if (func_ov118_02292e20(s, 1)) {
            if (v >= 1 && v <= 9) {
                func_ov118_02293e14(s);
                func_ov118_02293824(s);
                return;
            }
        } else {
            if (v < 1 || v > 9) {
                func_ov118_02293dfc(s);
                func_ov118_02293824(s);
                return;
            }
        }
    } else {
        func_ov118_02292e10(s, 0x200);
    }
    func_ov118_022937cc(s);
    func_ov118_02293924(s, 0xe);
    func_ov118_02293924(s, s->unk_aa);
}

u8 func_ov118_02293a48(S *s, s32 x, s32 y) {
    s32 i;
    for (i = 0; i < 0xe; i++) {
        u8 *e = (u8 *)s + i * 3;
        if (e[0x4573] != 0xc) {
            s32 px = e[0x4571];
            if (px - 8 < x && px + 8 > x) {
                s32 py = e[0x4572];
                if (py - 8 < y && py + 8 > y) {
                    return (u8)i;
                }
            }
        }
    }
    return 0xe;
}

BOOL func_ov118_02293aa8(S *s) {
    u8 r = func_ov118_02293a48(s, data_021ef5f0, data_021ef5ec);
    if (r == 0xe) {
        return FALSE;
    }
    func_ov118_02293994(s, r + 1);
    return TRUE;
}

void func_ov118_02293ae0(S *s, void *p) {
    s32 k, i;
    u32 j;
    s16 *rec;
    i = 0;
    k = i;
    for (; k < 3; i++, k++) {
        rec = func_ov117_02292c40(p, i);
        if (rec != 0) {
            switch (func_ov117_02292c2c(p, i)) {
            case 0:
                *((u8 *)s + k * 3 + 0x456a) = 8;
                break;
            case 1:
                *((u8 *)s + k * 3 + 0x456a) = 7;
                break;
            case 2:
                *((u8 *)s + k * 3 + 0x456a) = 9;
                break;
            case 3:
                *((u8 *)s + k * 3 + 0x456a) = 0x89;
                break;
            default:
                *((u8 *)s + k * 3 + 0x456a) = 0xc;
                break;
            }
            *((u8 *)s + k * 3 + 0x4568) = rec[0] - 8;
            *((u8 *)s + k * 3 + 0x4569) = rec[1] + 0x10;
        } else {
            *((u8 *)s + k * 3 + 0x456a) = 0xc;
        }
    }
    j = 3;
    k = 0;
    for (; k < 0xe; j++, k++) {
        rec = func_ov117_02292c40(p, j);
        if (rec != 0) {
            if (j >= 3 && j <= 0xa) {
                *((u8 *)s + k * 3 + 0x4573) = 0;
            } else if (j == 0xb) {
                *((u8 *)s + k * 3 + 0x4573) = 1;
            } else {
                *((u8 *)s + k * 3 + 0x4573) = *(data_ov118_02295460 + j - 0xc);
            }
            *((u8 *)s + k * 3 + 0x4571) = rec[0] - 8;
            *((u8 *)s + k * 3 + 0x4572) = rec[1] + 0x10;
        } else {
            *((u8 *)s + k * 3 + 0x4573) = 0xc;
        }
    }
}

void func_ov118_02293c3c(s32 u, s32 x, s32 y, s32 n, s32 flag, s32 pal) {
    u16 t;
    data_ov118_02295500.tile = n * 2 + 0xc0;
    if (flag != 0) {
        t = data_ov118_02295500.pal | 8;
        data_ov118_02295500.pal = t;
    }
    func_02088730(1, &data_ov118_02295500, x, y, pal, 1, 0);
    if (flag != 0) {
        data_ov118_02295500.pal = t & 0x17;
    }
}

BOOL func_ov118_02293cd0(S *s) {
    s32 x = data_021ef5f0;
    s32 y = data_021ef5ec;
    s32 idx;
    if (x < 0x98 || x > 0xe8) {
        return FALSE;
    }
    if (y < 0x50 || y >= 0xb0) {
        return FALSE;
    }
    idx = (y + (s->unk_98 - 0x50)) >> 4;
    if (func_ov118_02292e20(s, 1) && idx == 5) {
        return FALSE;
    }
    func_ov118_02293994(s, idx + 0xf);
    return TRUE;
}

s32 func_ov118_02293d34(S *s) {
    u32 r = func_ov118_02293d50(s);
    if (r <= 6) {
        return 0;
    }
    return (r - 6) << 4;
}

u8 func_ov118_02293d50(S *s) {
    if (func_ov118_02292e20(s, 1)) {
        return s->unk_a2;
    }
    return s->unk_a1;
}

u8 *func_ov118_02293d70(S *s) {
    if (func_ov118_02292e20(s, 1)) {
        return s->unk_455b;
    }
    return s->unk_454e;
}

s32 func_ov118_02293d98(S *s) {
    s32 k;
    func_ov118_022940a0(s);
    func_ov118_02293ef0(s);
    if (func_ov118_02293d34(s) == 0) {
        func_ov118_02292e00(s, 8);
        k = 4;
    } else {
        func_ov118_02292e10(s, 8);
        k = 3;
    }
    func_0206ee80(s->unk_4e8, 0x1d, 0xa, 0x1d, 0x15, k);
    func_ov118_02292e10(s, 0x20);
    func_ov118_02293924(s, s->unk_aa);
}

void func_ov118_02293dfc(S *s) {
    func_ov118_02292e10(s, 1);
    func_ov118_02293d98(s);
}

void func_ov118_02293e14(S *s) {
    func_ov118_02292e00(s, 1);
    func_ov118_02293d98(s);
}

void func_ov118_02293e2c(S *s, void *p, u32 idx) {
    if (idx == 0) {
        func_020a7c3c(p);
    } else if (idx == 1) {
        func_ov002_022019a4(p, func_0209888c(func_0209750c()));
    } else if (idx >= 2 && idx < 6) {
        func_ov002_02201984(p, idx - 2);
    } else if (idx >= 6 && idx < 0xe) {
        func_ov002_02201938(p, idx - 6);
    } else if (idx >= 0xe && idx < 0x13) {
        func_0206f9fc(p, idx + 0x88);
    } else {
        func_020a7c3c(p);
    }
}

s32 func_ov118_02293e98(S *s, u8 *tbl) {
    s32 i;
    for (i = 0; i < 0xd; i++) {
        void *w = func_ov118_02293ff0(s);
        func_0206fb9c(w, 6, (i << 4) + 0x160, 8, 1, 0xf, 0);
        func_ov118_02293e2c(s, w, tbl[i]);
        func_0206fab4(w, 0, 0);
    }
}

void func_ov118_02293ef0(S *s) {
    if (func_ov118_02292e20(s, 1)) {
        func_ov118_02293e98(s, s->unk_455b);
    } else {
        func_ov118_02293e98(s, s->unk_454e);
    }
}

void func_ov118_02293f24(S *s) {
    s32 n = 0;
    s32 m, i;
    m = func_02097740(data_021d735c, func_0209888c(func_0209750c()));
    if (m != -1) {
        s->unk_454e[0] = 1;
        n++;
    }
    for (i = 0; i < 4; i++) {
        if (i == m) {
            continue;
        }
        if (!func_020978c8(data_021d735c, i)) {
            continue;
        }
        s->unk_454e[n] = i + 2;
        n++;
    }
    s->unk_b0 = n;
    for (i = 0; i < 8; i++) {
        if (func_0207bf84(data_021dfd8c, i)) {
            s->unk_454e[n] = i + 6;
            n++;
        }
    }
    s->unk_a1 = n;
    for (; n < 0xd; n++) {
        s->unk_455b[n] = 0;
    }
    n = 0;
    for (i = 0; i < 5; i++) {
        s->unk_455b[n] = i + 0xe;
        n++;
    }
    s->unk_a2 = n;
    for (; n < 0xd; n++) {
        s->unk_455b[n] = 0;
    }
}

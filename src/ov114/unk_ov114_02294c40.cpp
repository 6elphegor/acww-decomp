#include "types.h"

struct Unk_ov114_02294c40_Bits {
    u32 idx : 10;
    u32 mid : 2;
    u32 pal : 4;
    u32 hi : 16;
};

struct Unk_ov114_02294c40_Entry {
    u32 unk_00;
    Unk_ov114_02294c40_Bits unk_04;
    s32 unk_08;
};

struct Unk_ov114_02294c40 {
    /* 0x0000 */ u8 unk_0000[0xa14];
    /* 0x0a14 */ u8 unk_0a14[0x480];
    /* 0x0e94 */ u8 unk_0e94[0x1f8];
    /* 0x108c */ Unk_ov114_02294c40_Entry unk_108c[9];
    /* 0x10f8 */ u8 unk_10f8[0x100];
    /* 0x11f8 */ u8 unk_11f8[0x48];
    /* 0x1240 */ u32 unk_1240[3];
    /* 0x124c */ u8 unk_124c[0xc];
    /* 0x1258 */ s32 unk_1258;
    /* 0x125c */ s32 unk_125c;
    /* 0x1260 */ u8 unk_1260[4];
    /* 0x1264 */ s32 unk_1264;
    /* 0x1268 */ s32 unk_1268;
    /* 0x126c */ u8 unk_126c[4];
    /* 0x1270 */ s32 unk_1270;
    /* 0x1274 */ u8 unk_1274[0xc];
    /* 0x1280 */ void *unk_1280;
    /* 0x1284 */ void *unk_1284;
    /* 0x1288 */ u16 unk_1288;
    /* 0x128a */ u8 unk_128a[5];
    /* 0x128f */ u8 unk_128f;
    /* 0x1290 */ u8 unk_1290[3];
    /* 0x1293 */ u8 unk_1293;
    /* 0x1294 */ u8 unk_1294;
    /* 0x1295 */ u8 unk_1295;
    /* 0x1296 */ u8 unk_1296;
    /* 0x1297 */ u8 unk_1297;
    /* 0x1298 */ u8 unk_1298;
    /* 0x1299 */ u8 unk_1299;
};

extern "C" {
extern u8 data_ov114_0229654c[];
extern u8 data_ov114_02296550[];
extern s32 data_ov114_02296554[];
extern s32 data_ov114_02296564[];
extern u8 data_ov114_02296580[];
extern u8 data_ov114_022965e0[];
extern char data_ov114_02296628[];
extern char data_ov114_02296638[];
extern char data_ov114_02296648[];
extern char data_ov114_0229665c[];
extern char *data_ov114_022967a0;
extern char data_ov114_022967a8[];
extern u32 *data_021f482c;

void *func_0209750c();
void *func_020986c8(void *p);
BOOL func_0203c4cc(void *p, u16 *v);
void func_0200402c(s32 v);
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov002_02202f00(void *p);
void func_ov002_02202e48(void *p);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
s32 func_ov090_02291a78(s32 v);
s32 func_02133150(s32 a, s32 b);
void func_020020b8(u32 v);
void func_020013b4(void *a, void *b, u32 c);
void func_020013a4();
void func_0200212c(u32 v);
s32 func_020639e8(char *buf, char *fmt, ...);
void func_0200261c(char *buf, u32 *font, u32 a, s32 b, s32 c, s32 d);
void func_02002688(char *buf, u32 *font, u32 a, u8 b, s32 c);
s32 func_0204bcb0(u32 v);
void *func_02087e0c(void *p);
void *func_02116048(void *dst, void *src, u32 n);
void func_020b851c(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h);
void *func_ov094_02293b08(Unk_ov114_02294c40 *s, s32 v);
s32 func_ov094_02293abc(Unk_ov114_02294c40 *s, s32 v);

s32 func_ov114_02295780(Unk_ov114_02294c40 *s, u32 v);
void func_ov114_022959a0(Unk_ov114_02294c40 *s);
void func_ov114_022959d8(Unk_ov114_02294c40 *s);
s32 func_ov114_022958d8(Unk_ov114_02294c40 *s, u32 a, u32 b);
s32 func_ov114_0229588c(Unk_ov114_02294c40 *s);
s32 func_ov114_02295b48(Unk_ov114_02294c40 *s);
s32 func_ov114_0229563c(Unk_ov114_02294c40 *s, u32 v);

void func_ov114_02294c40(Unk_ov114_02294c40 *s, u32 m);
void func_ov114_02294c50(Unk_ov114_02294c40 *s, u32 m);
BOOL func_ov114_02294c60(Unk_ov114_02294c40 *s, u32 m);
BOOL func_ov114_02294c78(Unk_ov114_02294c40 *s, s32 i);
void func_ov114_02294ca4(Unk_ov114_02294c40 *s);
BOOL func_ov114_02294d88(Unk_ov114_02294c40 *s);
u8 func_ov114_02294e30(Unk_ov114_02294c40 *s);
void func_ov114_02294e6c(Unk_ov114_02294c40 *s);
BOOL func_ov114_02294ed0(Unk_ov114_02294c40 *s, void *pad);
BOOL func_ov114_022950b4(Unk_ov114_02294c40 *s);
s32 func_ov114_022950cc(Unk_ov114_02294c40 *s);
s32 func_ov114_022950e8(Unk_ov114_02294c40 *s);
s32 func_ov114_02295150(Unk_ov114_02294c40 *s);
void func_ov114_022951b8(Unk_ov114_02294c40 *s, u8 v);
void func_ov114_022951e0(Unk_ov114_02294c40 *s);
void func_ov114_02295290(Unk_ov114_02294c40 *s);
void func_ov114_02295350(Unk_ov114_02294c40 *s);
void func_ov114_02295374(Unk_ov114_02294c40 *s);
void func_ov114_0229539c(Unk_ov114_02294c40 *s);
void func_ov114_022953e4(Unk_ov114_02294c40 *s, u32 a, s32 idx);
void func_ov114_0229549c(Unk_ov114_02294c40 *s);
BOOL func_ov114_02295510(Unk_ov114_02294c40 *s, s32 x, s32 y);
}

void func_ov114_02294c40(Unk_ov114_02294c40 *s, u32 m) { s->unk_1288 = s->unk_1288 & ~m; }

void func_ov114_02294c50(Unk_ov114_02294c40 *s, u32 m) { s->unk_1288 = s->unk_1288 | m; }

BOOL func_ov114_02294c60(Unk_ov114_02294c40 *s, u32 m) {
    if (s->unk_1288 & m) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov114_02294c78(Unk_ov114_02294c40 *s, s32 i) {
    BOOL r = TRUE;
    if (((1 << (i & 0x1f)) & s->unk_1240[i >> 5]) == 0) {
        r = FALSE;
    }
    return r;
}

void func_ov114_02294ca4(Unk_ov114_02294c40 *s) {
    s32 i;
    u16 v;
    for (i = 0; i < 3; i++) {
        s->unk_1240[i] = 0;
    }
    void *p = func_0209750c();
    v = 0xfff1;
    if (s->unk_1293 == 0) {
        for (i = 0; i < s->unk_1270; i++) {
            v = (u32)i < 0x38 ? (u16)(i + 0x12e8) : 0x12e8;
            if (func_0203c4cc(func_020986c8(p), &v)) {
                s->unk_1240[i >> 5] |= 1 << (i & 0x1f);
            }
        }
    } else {
        for (i = 0; i < s->unk_1270; i++) {
            v = (u32)i < 0x38 ? (u16)(i + 0x12b0) : 0x12b0;
            if (func_0203c4cc(func_020986c8(p), &v)) {
                s->unk_1240[i >> 5] |= 1 << (i & 0x1f);
            }
        }
    }
}

BOOL func_ov114_02294d88(Unk_ov114_02294c40 *s) {
    u32 t = s->unk_1298;
    if (t >= 0xd) {
        u32 k = t - 0xd;
        if (func_ov114_02294c78(s, k)) {
            if (s->unk_1295 != k) {
                func_0200402c(0x29);
            }
            func_ov114_022951b8(s, (u8)k);
        }
        return FALSE;
    } else {
        switch (t) {
        case 1:
            func_ov114_022959a0(s);
            return FALSE;
        case 0:
            func_ov114_022959d8(s);
            return FALSE;
        case 2:
            s->unk_1297 = 0;
            return TRUE;
        case 3:
            s->unk_1297 = 1;
            return TRUE;
        case 4:
            s->unk_1297 = 2;
            func_ov002_02202f00(s->unk_11f8);
            func_ov002_02202e48(s->unk_11f8);
            return TRUE;
        default:
            return FALSE;
        }
    }
}

u8 func_ov114_02294e30(Unk_ov114_02294c40 *s) {
    s32 t = func_ov114_02295150(s) - (0x15 - s->unk_1258);
    if (t < 0) {
        t = 0;
    }
    s32 q = t / 0x1b;
    if (q >= s->unk_1270) {
        q = s->unk_1270 - 1;
    }
    return q + 0xd;
}

void func_ov114_02294e6c(Unk_ov114_02294c40 *s) {
    if (s->unk_1298 >= 0xd) {
        s32 r = func_ov114_02295150(s);
        if (r < 0x20) {
            s->unk_1298 = s->unk_1268 + 0xd;
            if (func_ov114_02295150(s) < 0x20) {
                s->unk_1298 = s->unk_1298 + 1;
            }
        } else if (r > 0xe0) {
            s->unk_1298 = s->unk_1268 + 0x14;
            if (func_ov114_02295150(s) > 0xe0) {
                s->unk_1298 = s->unk_1298 - 1;
            }
        }
    }
}

BOOL func_ov114_02294ed0(Unk_ov114_02294c40 *s, void *pad) {
    u8 c;
    if (pad == 0) {
        return FALSE;
    }
    u8 old = s->unk_1298;
    if (func_ov114_022950cc(s) != -1) {
        if (func_ov002_0220127c(pad)) {
            s->unk_1298 = 0;
        } else if (func_ov002_0220126c(pad)) {
            if (s->unk_1298 > 5) {
                s->unk_1298 = s->unk_1298 - 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (s->unk_1298 < 0xc) {
                s->unk_1298 = s->unk_1298 + 1;
            }
        }
    } else {
        s32 c = s->unk_1298;
        if ((u32)c <= 1) {
            if (func_ov002_0220128c(pad)) {
                s->unk_1298 = s->unk_1299;
            } else if (func_ov002_0220127c(pad)) {
                s->unk_1298 = func_ov114_02294e30(s);
            } else if (func_ov002_0220126c(pad)) {
                s->unk_1298 = 1;
            } else {
                if (func_ov002_0220125c(pad)) {
                    s->unk_1298 = 0;
                }
            }
        } else if ((u32)c >= 0xd) {
            c -= 0xd;
            if (func_ov002_0220128c(pad)) {
                if (func_ov114_02295150(s) < 0x48) {
                    s->unk_1298 = 1;
                } else {
                    s->unk_1298 = 0;
                }
            } else if (func_ov002_0220127c(pad)) {
                s32 r = func_ov114_02295150(s);
                if (r < 0x40) {
                    s->unk_1298 = 2;
                } else if (r >= 0xc0) {
                    s->unk_1298 = 3;
                } else {
                    s->unk_1298 = 4;
                }
            } else if (func_ov002_0220125c(pad)) {
                if (c < s->unk_1270 - 1) {
                    s->unk_1298 = s->unk_1298 + 1;
                    s32 r = func_ov114_02295150(s);
                    if (r > 0xe0) {
                        s->unk_125c = r - 0xe0;
                    }
                }
            } else if (func_ov002_0220126c(pad)) {
                if (c > 0) {
                    s->unk_1298 = s->unk_1298 - 1;
                    s32 r = func_ov114_02295150(s);
                    if (r < 0x20) {
                        s->unk_125c = r - 0x20;
                    }
                }
            }
        } else {
            c -= 2;
            if (func_ov002_0220128c(pad)) {
                s->unk_1298 = func_ov114_02294e30(s);
            } else if (func_ov002_0220126c(pad)) {
                s->unk_1298 = data_ov114_02296550[c];
            } else if (func_ov002_0220125c(pad)) {
                s->unk_1298 = data_ov114_0229654c[c];
            }
        }
    }
    if (old != s->unk_1298) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov114_022950b4(Unk_ov114_02294c40 *s) {
    BOOL r = TRUE;
    u8 v = s->unk_1298;
    if (v != 0 && v != 1) {
        r = FALSE;
    }
    return r;
}

s32 func_ov114_022950cc(Unk_ov114_02294c40 *s) {
    u8 v = s->unk_1298;
    if (v >= 5 && v <= 0xc) {
        return v - 5;
    }
    return -1;
}

s32 func_ov114_022950e8(Unk_ov114_02294c40 *s) {
    s32 r;
    if (func_ov114_022950cc(s) != -1) {
        return 8;
    }
    u32 t = s->unk_1298;
    if (t == 4) {
        return func_ov002_02202e60(s->unk_11f8);
    }
    if (t < 4) {
        r = data_ov114_02296564[t];
        if (t == 2 && s->unk_1297 == 0) {
            r += 2;
        } else if (t == 3 && s->unk_1297 == 1) {
            r += 2;
        }
    } else {
        r = 0x9e;
    }
    return r;
}

s32 func_ov114_02295150(Unk_ov114_02294c40 *s) {
    s32 r;
    if (func_ov114_022950cc(s) != -1) {
        r = func_ov090_02291a78(s->unk_1298 - 5);
    } else {
        u32 t = s->unk_1298;
        if (t == 4) {
            r = func_ov002_02202e84(s->unk_11f8);
        } else if (t < 4) {
            r = data_ov114_02296554[t];
        } else {
            r = (t - 0xd) * 0x1b + 0x22 - s->unk_1258 - s->unk_125c;
        }
    }
    return r;
}

void func_ov114_022951b8(Unk_ov114_02294c40 *s, u8 v) {
    s->unk_1295 = v;
    if (s->unk_1295 != s->unk_1294) {
        func_ov114_02295780(s, v);
    }
}

void func_ov114_022951e0(Unk_ov114_02294c40 *s) {
    u8 old = s->unk_1296;
    u32 a = s->unk_1294;
    if (a == s->unk_1295) {
        if (a != 0xff && old != 0x10) {
            if (old < 0xc) {
                if (old == 0) {
                    func_020020b8(s->unk_128f);
                }
                s->unk_1296 = s->unk_1296 + 4;
                func_020013b4(s->unk_1284, s->unk_1280, s->unk_1296);
            } else {
                func_020013a4();
            }
        }
    } else if (old == 0) {
        func_ov114_02295350(s);
    } else if (old > 4) {
        s->unk_1296 = old - 4;
        func_020013b4(s->unk_1284, s->unk_1280, s->unk_1296);
    } else {
        s->unk_1296 = 0;
        func_0200212c(s->unk_128f);
    }
    if (old != s->unk_1296) {
        func_ov114_022958d8(s, s->unk_1296, 0x10);
    }
}

void func_ov114_02295290(Unk_ov114_02294c40 *s) {
    u32 c = s->unk_1294;
    if (c == 0xff) {
        return;
    }
    s32 q = (s32)c / 12;
    u32 *font = data_021f482c;
    switch (s->unk_1293) {
    case 0:
        data_ov114_022967a0 = data_ov114_02296628;
        break;
    case 1:
        data_ov114_022967a0 = data_ov114_02296638;
        break;
    default:
        return;
    }
    func_020639e8(data_ov114_022967a8, data_ov114_02296648, data_ov114_022967a0, q, q, c);
    func_0200261c(data_ov114_022967a8, font, s->unk_128f, 0x11, 0x11, 0xa0);
    func_020639e8(data_ov114_022967a8, data_ov114_0229665c, data_ov114_022967a0, q, q, c);
    func_02002688(data_ov114_022967a8, font, s->unk_128f, (s32)c % 12, 5);
}

void func_ov114_02295350(Unk_ov114_02294c40 *s) {
    s->unk_1294 = s->unk_1295;
    func_ov114_02295290(s);
    func_ov114_02295b48(s);
}

void func_ov114_02295374(Unk_ov114_02294c40 *s) {
    s->unk_1295 = s->unk_1294;
    func_020013a4();
    s->unk_1296 = 0x10;
}

void func_ov114_0229539c(Unk_ov114_02294c40 *s) {
    s->unk_1295 = 0xff;
    s->unk_1296 = 0;
    func_ov114_02295780(s, 0xff);
    func_ov114_02295350(s);
    func_ov114_022958d8(s, 0, 0x10);
    func_020013b4(s->unk_1284, s->unk_1280, 0);
}

void func_ov114_022953e4(Unk_ov114_02294c40 *s, u32 a, s32 idx) {
    Unk_ov114_02294c40_Entry *e = &s->unk_108c[idx];
    s32 key = func_0204bcb0(a);
    if (key != e->unk_08) {
        e->unk_08 = key;
        u32 lo = e->unk_04.idx;
        void *dst = func_ov094_02293b08(s, key);
        s32 n = func_ov114_0229588c(s);
        u8 *src = s->unk_0a14 + n * 0x80;
        u8 *src2 = src + 0x40;
        func_02116048(dst, src, 0x40);
        func_02116048((u8 *)dst + 0x400, src2, 0x40);
        func_020b851c(s->unk_0e94 + n * 0x38, src, src2, 8, lo, lo + 1, lo + 0x20, lo + 0x21);
        e->unk_04.pal = func_ov094_02293abc(s, key);
    }
}

void func_ov114_0229549c(Unk_ov114_02294c40 *s) {
    s32 i;
    for (i = 0; i < 9; i++) {
        Unk_ov114_02294c40_Entry *e = &s->unk_108c[i];
        func_02116048(data_ov114_02296580, e, 8);
        e->unk_04.idx = i * 2 + 0xc0;
        e->unk_08 = -1;
    }
    s->unk_1264 = (s32)func_02087e0c(data_ov114_022965e0) + 0x70;
    func_ov114_0229563c(s, 0);
}

BOOL func_ov114_02295510(Unk_ov114_02294c40 *s, s32 x, s32 y) {
    if (y < 0x90 || y >= 0xb0) {
        return FALSE;
    }
    if (x < 0x10 || x >= 0xf0) {
        return FALSE;
    }
    if (x < 0x18) {
        x = 0x18;
    }
    if (x > 0xe8) {
        x = 0xe8;
    }
    s32 t = x - (0x15 - s->unk_1258);
    if (t < 0) {
        t = 0;
    }
    s32 q = t / 0x1b;
    if (q >= s->unk_1270) {
        q = s->unk_1270 - 1;
    }
    if (func_ov114_02294c78(s, q)) {
        if (s->unk_1295 != q) {
            func_0200402c(0x29);
        }
        func_ov114_022951b8(s, (u8)q);
        return TRUE;
    }
    return FALSE;
}

#include "types.h"
#include "text/Unk_02050288.h"

struct Unk_ov111_02298a48 {
    u8 pad_000[0x94];
    s32 unk_094;
    u8 pad_098;
    u8 unk_099;
    u8 unk_09a;
    volatile u8 unk_09b;
    u8 unk_09c;
    u8 unk_09d;
    u8 unk_09e;
    u8 unk_09f;
    u8 unk_0a0;
    u8 unk_0a1;
    u8 unk_0a2;
    u8 pad_0a3;
    u16 unk_0a4;
    u8 pad_0a6[2];
    Unk_02050288 *unk_0a8;
    u8 unk_0ac[0x2468 - 0xac];
    u8 unk_2468[0x3c68 - 0x2468];
    u8 unk_3c68[0x3c9c - 0x3c68];
    u8 unk_3c9c[0x3caa - 0x3c9c];
    u8 unk_3caa[0x3ccc - 0x3caa];
    u8 unk_3ccc[0x3d30 - 0x3ccc];
    u8 unk_3d30[0x3e38 - 0x3d30];
    u8 unk_3e38[0x20];
};

typedef Unk_ov111_02298a48 S;

extern u8 data_021f4770;
extern u8 data_021f4774;
extern u32 data_020cbb18;
extern u32 data_021f482c;
extern u32 data_ov111_022989b8[];

static inline BOOL Unk_ov111_02297a34_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

extern "C" {
void func_0200402c(s32 a);
void func_0205125c(void *p, s32 n);
s32 func_02051268(void *src, void *dst, s32 n);
s32 func_020512e0(void *p, s32 n);
s32 func_020641ec(u32 id, u32 g, s32 a, s32 b);
s32 func_02116048(void *src, void *dst, s32 n);
void func_020e85fc(u32 g, s32 a);
void func_0206ee0c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL func_0206ef0c();
BOOL func_0206ef00();
void func_020943f8();
void func_020943fc();
s32 func_0206e5b4();
void func_020ed174(void *p);
s32 func_0209750c();
void func_02094030(void *p);
s32 func_0209888c(s32 p);
void func_020940d0(s32 a, void *p);
void func_020b30bc(void *p);
void func_02038fd4(s32 a);
void func_02038fe8(s32 a, void *p, void *q);
void func_02094018(void *p);
s32 func_0208d534(void *p);
void *func_020a8054(u32 a, u32 b, u32 c);
void func_020a7fd8(void *p);
void func_020a7aa0(void *a, void *b, s32 c, s32 d);

void func_ov095_02293d94(void *p);
void func_ov095_02293dc0(void *p);
u32 func_ov095_02293fb4(void *p, void *q, u32 a, u32 b, u32 c);
BOOL func_ov095_022940f0(void *p, void *q, u32 a, void *r, u32 b, u32 c, u32 d, u32 e);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_022951e4(void *p);
u32 func_ov095_02293f88(void *p, u32 a);
u32 func_ov095_02293f8c(void *p, u32 a);
u32 func_ov095_02293f90(void *p, u32 a);
BOOL func_ov095_02293f94(void *p, void *q, u32 a, u32 b, u32 c, u32 d);
u32 func_ov095_02293da0(void *p);
void func_ov095_02293b60(void *p, u32 a, u32 b, u32 c);
void func_ov095_02293a78(void *p, u32 a, u32 b);
void func_ov095_02293a30(void *p, u32 a, u32 b, u32 c, u32 d);
void func_ov095_022938f8(void *p, u32 a, u32 b, u32 c);
void func_ov095_0229388c(void *p, u32 a, u32 b);
void func_ov095_022937e4(void *p, u32 a, u32 b, u32 c);
void func_ov095_0229434c(void *p);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p);
void func_ov095_02294324(void *p);
BOOL func_ov095_0229394c(void *p);
BOOL func_ov090_02291934();
s32 func_ov002_02200920(S *s);
void func_ov002_02200a58(void *p, u32 a);
BOOL func_ov002_02204234(void *p, u32 a);
void func_ov002_02202af0(void *p);

BOOL func_ov111_02296978(S *s, u32 m);
void func_ov111_02296958(S *s, u32 m);
void func_ov111_02296968(S *s, u32 m);
void func_ov111_0229698c(S *s);
void func_ov111_02296e64(S *s);
BOOL func_ov111_02296e7c(S *s);
u32 func_ov111_02296ea4(S *s);
void func_ov111_02296ec0(S *s);
void func_ov111_02297c10(S *s);
void func_ov111_02297bec(S *s);
void func_ov111_02297c30(S *s);
}

extern "C" {
void func_ov111_02297224(S *s);
void func_ov111_02297230(S *s);
void func_ov111_022972fc(S *s);
void func_ov111_02297360(S *s);
void func_ov111_022973a0(S *s);
BOOL func_ov111_022973c8(S *s);
void func_ov111_0229741c(S *s);
BOOL func_ov111_02297444(S *s);
void func_ov111_02297498(S *s);
BOOL func_ov111_022974c0(S *s);
void func_ov111_02297514(S *s);
BOOL func_ov111_02297558(S *s, s32 a);
BOOL func_ov111_022975ec(S *s, u32 a);
void func_ov111_02297650();
void func_ov111_02297664(S *s);
void func_ov111_022976bc(S *s);
void func_ov111_0229773c(S *s);
void func_ov111_022977f8(S *s);
void func_ov111_02297814(S *s);
void func_ov111_022978f0(S *s, u32 a);
void func_ov111_02297978(S *s);
void func_ov111_022979a0(S *s);
void func_ov111_02297a0c(S *s);
void func_ov111_02297a34(S *s);
void func_ov111_02297b0c(S *s);

void func_ov111_02297224(S *s) {
    func_0200402c(0x34);
}

void func_ov111_02297230(S *s) {
    if (func_ov111_02296978(s, 8)) {
        s32 n;
        s32 i;
        s32 z;
        func_ov095_02293d94(s->unk_0ac);
        if (func_ov111_02296e7c(s)) {
            s->unk_09e = func_ov095_02293fb4(s->unk_0ac, s->unk_3caa, s->unk_09f, s->unk_0a0, 0x20);
            func_ov111_02296958(s, 1);
        }
        func_ov095_02293dc0(s->unk_0ac);
        n = func_020512e0(s->unk_3e38, 0x20);
        i = 0;
        z = i;
        for (; i < n; i++) {
            if (!func_ov095_022940f0(s->unk_0ac, s->unk_3caa, s->unk_3e38[i], &s->unk_09e, 0x20, 0xa0, z, z)) {
                if (i == 0) {
                    func_ov111_02297224(s);
                }
                i = n;
            }
        }
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
        func_ov095_022923ec(s->unk_0ac);
        func_ov095_02293d88(s->unk_0ac);
    }
}

void func_ov111_022972fc(S *s) {
    if (func_ov111_02296e7c(s)) {
        u32 a = s->unk_0a0;
        u32 b = s->unk_09f;
        u32 lo, cnt;
        if (b > a) {
            lo = a;
            cnt = b - a;
        } else {
            lo = b;
            cnt = a - b;
        }
        func_0205125c(s->unk_3e38, 0x20);
        func_02051268(s->unk_3caa + lo, s->unk_3e38, cnt);
        func_ov111_02296968(s, 8);
        func_ov095_022923f8(s->unk_0ac);
        func_ov111_0229698c(s);
    }
}

void func_ov111_02297360(S *s) {
    s->unk_09c = 0x10;
    s->unk_0a1 = 0;
    s->unk_09e = 0;
    func_ov111_02296e64(s);
    func_ov111_0229698c(s);
    func_ov095_022951e4(s->unk_0ac);
    func_0205125c(s->unk_3caa, 0x20);
}

void func_ov111_022973a0(S *s) {
    if (func_ov111_022973c8(s)) {
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

BOOL func_ov111_022973c8(S *s) {
    u32 a = func_ov111_02296ea4(s);
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f88(s->unk_0ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(s->unk_0ac, s->unk_3caa, b, s->unk_09e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_0229741c(S *s) {
    if (func_ov111_02297444(s)) {
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

BOOL func_ov111_02297444(S *s) {
    u32 a = func_ov111_02296ea4(s);
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f8c(s->unk_0ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(s->unk_0ac, s->unk_3caa, b, s->unk_09e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_02297498(S *s) {
    if (func_ov111_022974c0(s)) {
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

BOOL func_ov111_022974c0(S *s) {
    u32 a = func_ov111_02296ea4(s);
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f90(s->unk_0ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(s->unk_0ac, s->unk_3caa, b, s->unk_09e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_02297514(S *s) {
    u32 a = s->unk_0a0;
    u32 b = s->unk_09f;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    s->unk_09e = func_ov095_02293fb4(s->unk_0ac, s->unk_3caa, lo, hi, 0x20);
    func_ov111_02296e64(s);
}

BOOL func_ov111_02297558(S *s, s32 a) {
    if (func_ov111_02296e7c(s)) {
        func_ov095_02293dc0(s->unk_0ac);
        func_0200402c(0x35);
    } else if (s->unk_09e != 0) {
        s->unk_09f = s->unk_09e;
        s->unk_0a0 = s->unk_09e - 1;
        func_0200402c(0x35);
    } else if (s->unk_3caa[0] != 0) {
        s->unk_09f = 0;
        s->unk_0a0 = 1;
        func_0200402c(0x35);
    } else {
        if (a != 0) {
            func_0200402c(0x34);
        }
        return FALSE;
    }
    func_ov111_02297514(s);
    func_ov111_022976bc(s);
    func_ov111_02296ec0(s);
    return TRUE;
}

BOOL func_ov111_022975ec(S *s, u32 a) {
    if (func_ov111_02296e7c(s)) {
        func_ov111_02297514(s);
        func_ov095_02293dc0(s->unk_0ac);
    }
    if (func_ov095_022940f0(s->unk_0ac, s->unk_3caa, a, &s->unk_09e, 0x20, 0xa0, 0, 1)) {
        func_ov111_02296ec0(s);
        func_ov111_022976bc(s);
    } else {
        return FALSE;
    }
    return TRUE;
}

void func_ov111_02297650() {
    func_02038fd4(*(s32 *)(data_020cbb18 + 0x64));
}

void func_ov111_02297664(S *s) {
    u32 buf[7];
    s32 r = func_0209750c();
    func_02094030(buf);
    func_020940d0(func_0209888c(r), buf);
    func_020b30bc(s->unk_3c68);
    func_02038fe8(*(s32 *)(data_020cbb18 + 0x64), buf, s->unk_3c68);
    func_ov111_02297360(s);
    func_ov111_022976bc(s);
    func_02094018(buf);
}

void func_ov111_022976bc(S *s) {
    func_ov111_0229773c(s);
    if (s->unk_0a8 != NULL) {
        func_020a7aa0(s->unk_3c68, s->unk_3c9c, 0, 0);
        Unk_02050288 *t = s->unk_0a8;
        t->unk_10 = ((Unk_02050288 *)s->unk_3c68)->func_0c();
        s->unk_0a8->func_02050c90();
        s->unk_094 = func_020512e0(s->unk_3caa, 0x20) * 0x1f / 0x20;
        if (s->unk_094 > 0x1f) {
            s->unk_094 = 0x1f;
        }
    }
}

void func_ov111_0229773c(S *s) {
    if (s->unk_0a8 == NULL) {
        s->unk_0a8 = (Unk_02050288 *)func_020a8054(0x13d, 0x15, 2);
        if (s->unk_0a8 != NULL) {
            s->unk_0a8->unk_2c = 3;
            s->unk_0a8->unk_50 = 1;
            s->unk_0a8->unk_55 = 0;
            s->unk_0a8->unk_39 = 2;
            s->unk_0a8->unk_38 = 1;
            if (func_ov111_02296e7c(s)) {
                u32 a = s->unk_0a0;
                u32 b = s->unk_09f;
                u32 lo, cnt;
                if (b > a) {
                    lo = a;
                    cnt = b - a;
                } else {
                    lo = b;
                    cnt = a - b;
                }
                s->unk_0a8->func_02050c04(2, 1, lo, cnt);
            } else {
                u32 r = func_ov095_02293da0(s->unk_0ac);
                if (r != 0) {
                    s->unk_0a8->func_02050c04(0xe, 2, s->unk_09e - r, r);
                }
            }
        }
    }
}

void func_ov111_022977f8(S *s) {
    if (s->unk_0a8 != NULL) {
        func_020a7fd8(s->unk_0a8);
        s->unk_0a8 = NULL;
    }
}

void func_ov111_02297814(S *s) {
    u32 r4 = func_ov002_02200920(s) + 0x60;
    u32 t;
    func_ov095_02293b60(s->unk_0ac, 0x80, r4, 2);
    func_ov095_02293a78(s->unk_0ac, 0x80, r4);
    if (s->unk_09a != 0) {
        if (s->unk_09b < 2) {
            s->unk_09b = s->unk_09b + 1;
        }
        t = 7;
    } else {
        if (s->unk_09b != 0) {
            s->unk_09b = s->unk_09b - 1;
        }
        t = 6;
    }
    func_ov095_02293a30(s->unk_0ac, 0x80, r4, t, s->unk_09b);
    s->unk_09c = s->unk_09c + 1;
    if (s->unk_09a == 0 && (s->unk_09c & 0x10) != 0) {
        func_ov095_022938f8(s->unk_0ac, s->unk_0a1 + 0x18, r4 - 0x38, 2);
    }
    func_ov095_0229388c(s->unk_0ac, 0x80, r4);
    func_ov095_022937e4(s->unk_0ac, 0x80, r4, s->unk_094);
}

void func_ov111_022978f0(S *s, u32 a) {
    s32 r;
    u32 name;
    u32 g = data_021f482c;
    if (a == 0) {
        name = data_ov111_022989b8[0];
    } else {
        name = data_ov111_022989b8[a - 1];
    }
    r = func_020641ec(name, g, -4, 0);
    {
        u8 *src = s->unk_2468;
        func_02116048((void *)(r + 0x100), src + 0x100, 0x140);
        if (a == 1) {
            func_0206ee0c(src, 0, 4, 0x1f, 9, 5, 6);
        }
    }
    func_020e85fc(g, r);
    func_ov095_0229434c(s->unk_0ac);
}

void func_ov111_02297978(S *s) {
    func_ov111_022977f8(s);
    func_ov095_02294438(s->unk_0ac);
    if (!func_ov111_02296978(s, 0x10)) {
        func_020943f8();
    }
}

void func_ov111_022979a0(S *s) {
    s->unk_0a4 = 0;
    s->unk_099 = 0;
    s->unk_09a = 0;
    s->unk_09b = 0;
    s->unk_0a2 = 0;
    func_ov111_02297360(s);
    s->unk_0a8 = NULL;
    func_ov095_02294478(s->unk_0ac);
    func_02051268((void *)func_0206e5b4(), s->unk_3caa, 0x20);
    func_020943fc();
    func_020ed174(s);
    if (func_ov090_02291934()) {
        func_ov111_02296968(s, 0x20);
    }
}

void func_ov111_02297a0c(S *s) {
    func_ov095_02294324(s->unk_0ac);
    if (func_ov002_02204234(s->unk_3d30, 1)) {
        func_ov111_02297c10(s);
    }
}

void func_ov111_02297a34(S *s) {
    if (func_0206ef0c()) {
        if (Unk_ov111_02297a34_Both()) {
            if (s->unk_0a2 == 0) {
                if (func_ov095_0229394c(s->unk_0ac)) {
                    func_ov111_02297bec(s);
                }
            }
        }
    }
    if (s->unk_09a != 0) {
        if (s->unk_09a == 3) {
            func_ov111_02297664(s);
        }
        s->unk_09a = s->unk_09a - 1;
        func_ov111_022978f0(s, s->unk_09a);
        if (s->unk_09a == 1) {
            if (func_0206ef00()) {
                func_ov002_02202af0(s->unk_3ccc);
            }
        }
    } else {
        func_ov111_02297360(s);
        func_ov111_022976bc(s);
        if (func_0206ef0c()) {
            func_ov002_02200a58(s, 0);
        } else if (func_0208d534(s->unk_3ccc)) {
            func_ov002_02200a58(s, 7);
        } else {
            func_ov111_02297c30(s);
        }
    }
}

void func_ov111_02297b0c(S *s) {
    if (func_0206ef0c()) {
        if (Unk_ov111_02297a34_Both()) {
            if (s->unk_0a2 == 0) {
                if (func_ov095_0229394c(s->unk_0ac)) {
                    func_ov111_02297bec(s);
                }
            }
        }
    }
    if (s->unk_09a < 4) {
        s->unk_09a = *(volatile u8 *)&s->unk_09a + 1;
        func_ov111_022978f0(s, *(volatile u8 *)&s->unk_09a);
        s->unk_09d = 3;
    } else if (s->unk_09d != 0) {
        s->unk_09d = *(volatile u8 *)&s->unk_09d - 1;
    } else {
        func_ov095_02293dc0(s->unk_0ac);
        func_ov002_02200a58(s, 0xe);
    }
}
}

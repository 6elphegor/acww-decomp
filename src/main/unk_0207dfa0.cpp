#include "types.h"

struct Unk_02002fc8 {
    u16 unk_00;
    u8 unk_02[8];
    u8 unk_0a;
    u8 unk_0b;
    u32 func_02002fc8(u32 arg);
    u32 func_020030b4();
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    u32 func_02072e88(s32 i);
};
extern Unk_020cbb18 *data_020cbb18;

struct Unk_0207e268 {
    u8 pad_00[0x65c];
    u8 unk_65c[0x50];
    u16 unk_6ac[10];
    u8 pad_6c0[0x2e];
    u8 unk_6ee;
    u8 unk_6ef;
    u8 unk_6f0;
    u8 pad_6f1;
    u8 unk_6f2;
};

extern u8 data_021dfd8c[];
extern u8 data_020e05ac[];
extern u16 data_020cbfb0[];

extern "C" {
void *func_0207aaac(void *, void *);
Unk_02002fc8 *func_020805c4(void *);
void *func_02099db4(void *, s32);
void *func_0209a4f0(void *);
s32 func_0209ad68(void *);
void *func_0209a4e4(void *, s32);
s32 func_02128930(void *, void *, s32);
s32 func_02099868(void *, void *);
s32 func_02099ed4(void *, void *);
void *func_0209750c();
void *func_0209865c(void *);
void *func_0209a610(void *);
s32 func_0209b354(void *);
s32 func_0209b2e4(void *);
s32 func_0209b328(void *);
s32 func_0209b014(s32, s32);
s32 func_020785ec(s32);
s32 func_02078580(s32);
s32 func_020783f8();
s32 func_020783d8(s32, s32);
s32 func_0207bfb4(void *, void *);
s32 func_02002ff8(Unk_02002fc8 *);
u8 *func_020815b4(s32);
s32 func_0207f040(void *, s32);
s32 func_0207c6a8(void *, s32);
s32 func_0207c67c(void *, s32);
s32 func_0207eff8(void *, void *);
s32 func_0207efac(void *, void *, s32);
s32 func_0207ec54(void *, s32, s32, s32);
s32 func_0207ef34(void *, s32 *, s32 *, s32, s32, s32);
s32 func_0207ecd4(void *, void *, s32);
s32 func_0207eb70(void *, s32, s32, s32, s32);
s32 func_0207e940(void *, void *, s32, s32, s32, s32);
s32 func_0207ec10(void *);
s32 func_0207ec38(void *);
u16 *func_0207d074(void *, s32);
s32 func_0207d08c(void *);
s32 func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
s32 func_0204b220(u16 *, s32);
s32 func_02053228(u16 *);
s32 func_02052648(s32);
s32 func_0209a60c(void *);
s32 func_0209a9bc(s32);
void func_02061168(u16 *, u16 *, s32);
s32 func_02063b8c(s32);

void func_0207dfa0(void *a, u32 b);
void func_0207dfdc(Unk_0207e268 *a, u32 b);
u32 func_0207dfe8(Unk_0207e268 *a);
BOOL func_0207dff4(Unk_0207e268 *a, void *b);
BOOL func_0207e114(Unk_0207e268 *a);
BOOL func_0207e160(Unk_0207e268 *a);
BOOL func_0207e190(Unk_0207e268 *a);
BOOL func_0207e1c0(Unk_0207e268 *a);
s32 func_0207e1f0(Unk_0207e268 *a);
s32 func_0207e224(Unk_0207e268 *a, s32 b);
void *func_0207e268(Unk_0207e268 *a);
BOOL func_0207e274();
s32 func_0207e278(Unk_0207e268 *a);
s32 func_0207e310(Unk_0207e268 *a);
s32 func_0207e334(Unk_0207e268 *a);
s32 func_0207e33c(Unk_0207e268 *a);
u32 func_0207e364();
void func_0207e388(Unk_0207e268 *a, u8 b);
void func_0207e394(Unk_0207e268 *a, u8 b);
u32 func_0207e3a0(Unk_0207e268 *a);
u32 func_0207e3ac(Unk_0207e268 *a);
BOOL func_0207e3b8(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
BOOL func_0207e400(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
s32 func_0207e440(Unk_0207e268 *a, u32 *b, u8 *c, s32 d);
void func_0207e4b4(Unk_0207e268 *a, s32 b, s32 c);
void func_0207e4f4(Unk_0207e268 *a);
void func_0207e568(Unk_0207e268 *a, u16 *b);
void func_0207e630(u16 *out, void *a, u16 *in);
void func_0207e668(Unk_0207e268 *a);
void func_0207e684(Unk_0207e268 *a);
s32 func_0207e77c(Unk_0207e268 *a);
s32 func_0207e7a8(Unk_0207e268 *a, u16 *b);
BOOL func_0207e80c(Unk_0207e268 *a, u16 *b);
}

static inline BOOL Unk_0207e440_InRange(volatile u16 *p) {
    BOOL r = FALSE;
    u32 v1 = *p;
    u32 v2 = *p;
    if (v2 >= 0xf000 && v1 <= 0xf02f) r = TRUE;
    return r;
}

extern "C" {

void func_0207dfa0(void *a, u32 b) {
    void *r = func_0207aaac(data_021dfd8c, a);
    if (r != 0) {
        if (func_020805c4(r)->func_020030b4() != 0) {
            func_020805c4(r)->func_02002fc8(b);
        }
    }
}

void func_0207dfdc(Unk_0207e268 *a, u32 b) { a->unk_6f0 = b; }

u32 func_0207dfe8(Unk_0207e268 *a) { return a->unk_6f0; }

#define M(r5, r4, e) ((r5 = (Unk_02002fc8 *)(e)), (r5->unk_00 == r4->unk_00 && func_02128930(r5->unk_02, r4->unk_02, 8) == 0 && r5->unk_0b == r4->unk_0b))
BOOL func_0207dff4(Unk_0207e268 *a, void *b) {
    Unk_02002fc8 *r4 = func_020805c4(a);
    if (r4->func_020030b4() != 0) {
        void *r7 = func_02099db4(b, 0);
        void *s0 = func_02099db4(b, 1);
        void *s4 = b;
        Unk_02002fc8 *r5;
        s4 = (u8 *)b + 0x88;
        if (func_0209ad68(func_0209a4f0(r7)) != 0) {
            if (M(r5, r4, func_0209a4e4(r7, 0)) || M(r5, r4, func_0209a4e4(r7, 1))) return TRUE;
        }
        if (func_0209ad68(func_0209a4f0(s0)) != 0) {
            if (M(r5, r4, func_0209a4e4(s0, 0)) || M(r5, r4, func_0209a4e4(s0, 1))) return TRUE;
        }
        if (func_02099868(b, r4) != 0) return TRUE;
        if (func_02099ed4(s4, r4) != 0) return TRUE;
    }
    return FALSE;
}
#undef M

BOOL func_0207e114(Unk_0207e268 *a) {
    void *r4 = func_0209865c(func_0209750c());
    if (func_020805c4(a)->func_020030b4() != 0) {
        if (func_0207e1f0(a) == 3) {
            if (func_0207e278(a) != 2) {
                if (func_0207dff4(a, r4) == 0) return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL func_0207e160(Unk_0207e268 *a) {
    if (func_020805c4(a)->func_020030b4() != 0) {
        if (func_0209b354(func_0209a610(func_0207e268(a))) == 0xb) return TRUE;
    }
    return FALSE;
}

BOOL func_0207e190(Unk_0207e268 *a) {
    if (func_020805c4(a)->func_020030b4() != 0) {
        if (func_0209b354(func_0209a610(func_0207e268(a))) == 0xa) return TRUE;
    }
    return FALSE;
}

BOOL func_0207e1c0(Unk_0207e268 *a) {
    if (func_020805c4(a)->func_020030b4() != 0) {
        if (func_0209b354(func_0209a610(func_0207e268(a))) == 9) return TRUE;
    }
    return FALSE;
}

s32 func_0207e1f0(Unk_0207e268 *a) {
    if (func_0207e1c0(a) != 0) return 0;
    if (func_0207e190(a) != 0) return 1;
    if (func_0207e160(a) != 0) return 2;
    return 3;
}

s32 func_0207e224(Unk_0207e268 *a, s32 b) {
    if ((u32)func_0209b328(func_0209a610(a->unk_65c)) <= 1) {
        func_0209b014(b, func_0209b354(func_0209a610(a->unk_65c)));
    } else {
        func_0209b014(b, 7);
    }
}

void *func_0207e268(Unk_0207e268 *a) { return a->unk_65c; }

BOOL func_0207e274() { return TRUE; }

s32 func_0207e278(Unk_0207e268 *a) {
    s32 r4 = 0;
    if (func_020805c4(a)->func_020030b4() != 0) {
        r4 = func_0207e310(a);
        if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
            if (func_02078580(r4) == 2) r4 = 2;
            else r4 = 1;
        } else {
            switch (func_020785ec(r4)) {
            case 0:
                if (func_02078580(r4) == 2) r4 = 2;
                else r4 = 1;
                break;
            case 2:
                r4 = 3;
                break;
            case 3:
                r4 = 4;
                break;
            case 5:
                r4 = 6;
                break;
            case 6:
                r4 = 7;
                break;
            case 4:
                r4 = 5;
                break;
            case 1:
            default:
                r4 = 0;
                break;
            }
        }
    }
    return r4;
}

s32 func_0207e310(Unk_0207e268 *a) {
    s32 r4 = func_020783f8();
    return func_020783d8(r4, func_0207e33c(a));
}

s32 func_0207e334(Unk_0207e268 *a) { return func_0207e33c(a); }

s32 func_0207e33c(Unk_0207e268 *a) {
    u32 g = (u32)data_021dfd8c;
    s32 r = -1;
    if (g != 0) {
        r = func_0207bfb4((void *)g, func_020805c4(a));
    }
    return r;
}

u32 func_0207e364() {
    void *u;
    u8 *p = func_020815b4(func_02002ff8(func_020805c4(u)));
    if (p != 0) return p[0x4d];
    return 0;
}

u32 func_0207e3a0(Unk_0207e268 *a) { return a->unk_6ef; }

u32 func_0207e3ac(Unk_0207e268 *a) { return a->unk_6ee; }

BOOL func_0207e3b8(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = func_0207e440(a, b, c, d);
    if (func_0207f040(a, r4) != 0) {
        if (a->unk_6ac[r4] != 0xfff1) {
            if (func_0207c6a8(a, r4) != 0) return TRUE;
        }
    }
    return FALSE;
}

BOOL func_0207e400(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    s32 r4 = func_0207e440(a, b, c, d);
    if (func_0207f040(a, r4) != 0) {
        a->unk_6ac[r4] = 0xfff1;
        func_0207c67c(a, r4);
        return TRUE;
    }
    return FALSE;
}

s32 func_0207e440(Unk_0207e268 *a, u32 *b, u8 *c, s32 d) {
    if (c != 0) {
        u32 y = b[1];
        u32 x = b[0];
        if (x < 16 && y < 16) {
            s32 i;
            u8 *e = c;
            for (i = 0; i < d; e += 4, i++) {
                if (b[0] == e[2] && b[1] == e[3]) {
                    u16 code = *(u16 *)e;
                    if (Unk_0207e440_InRange(&code)) return func_0207eff8(a, &code);
                }
            }
        }
    }
    return -1;
}

void func_0207e4b4(Unk_0207e268 *a, s32 b, s32 c) {
    if (b == 2) {
        a->unk_6f2 = func_02063b8c(10);
        func_0207e668(a);
    } else {
        a->unk_6f2 = func_02063b8c(0x28);
        if (c != 0) func_0207e668(a);
    }
}

void func_0207e4f4(Unk_0207e268 *a) {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) == 0) {
        if (func_020805c4(a)->func_020030b4() != 0) {
            u16 *r4 = func_0207d074(a, 0);
            BOOL r6 = FALSE;
            s32 i = 0;
            do {
                if (func_0207e80c(a, r4) != 0) r6 = TRUE;
                r4++; i++;
            } while (i < 4);
            func_0207d08c(a);
            if (r6 != 0) {
                func_02052648(func_0207e334(a));
            }
            func_0209a9bc(func_0209a60c(func_0207e268(a)));
        }
    }
}

void func_0207e568(Unk_0207e268 *a, u16 *b) {
    u16 x, y, z;
    s32 i, idx;
    BOOL r7;
    x = 0xfff1;
    r7 = (func_0207e1f0(a) != 3) ? 1 : 0;
    i = 0;
    for (i = 0; i < 0x100; b++, i++) {
        BOOL f = FALSE;
        if (*b >= 0xf000 && *b <= 0xf02f) f = TRUE;
        if (f) {
            idx = func_0207eff8(a, b);
            func_0207efac(&y, a, idx);
            x = y;
            if (r7) {
                if (func_0204b2d4(&x)) {
                    if (func_0207c6a8(a, idx)) {
                        func_0207e630(&z, a, &x);
                        x = z;
                    } else {
                        x = 0xfff1;
                    }
                }
            }
            if (func_0204b2d4(&x)) {
                func_0204b220(&x, *b & 3);
                *b = x;
            } else {
                *b = 0xfff1;
            }
        }
    }
}

void func_0207e630(u16 *out, void *a, u16 *in) {
    *out = 0xfff1;
    if (func_0204b2d4(in) != 0) {
        s32 r = func_02053228(in);
        if (r < 3) *out = data_020cbfb0[r];
    }
}

void func_0207e668(Unk_0207e268 *a) {
    u16 *p = &a->unk_6ac[1];
    s32 i;
    for (i = 0; i < 2; p++, i++) *p = 0xfff1;
}

struct Unk_0207e684_Tbl {
    s32 v[3];
};

void func_0207e684(Unk_0207e268 *a) {
    s32 cnt, r6, i;
    s32 s8, sc;
    s32 x, y;
    Unk_0207e684_Tbl tbl;
    if (func_020805c4(a)->func_020030b4() != 0) {
        if (func_0207e77c(a) >= 7) {
            if (func_02063b8c(2) == 0) {
                void *r4 = func_0209a610(func_0207e268(a));
                s8 = func_0209b354(r4);
                sc = func_0209b2e4(r4);
                tbl = *(Unk_0207e684_Tbl *)data_020e05ac;
                s32 *p = tbl.v;
                cnt = 0;
                x = 0;
                y = 0;
                for (r6 = 0; r6 < 3; r6++) {
                    if (func_0207ef34(a, &x, &y, r6, s8, sc) != 0) {
                        p[r6] = func_0207ec54(a, s8, x, y);
                        if (func_0207f040(a, p[r6]) != 0) cnt++;
                    }
                }
                if (cnt > 0) {
                    r6 = func_02063b8c(cnt);
                    if (r6 < 3) {
                        for (i = 0; i < 3; i++) {
                            s32 r7 = tbl.v[i];
                            if (func_0207f040(a, r7) != 0) {
                                if (r6 == 0) {
                                    u16 *q = (u16 *)((u8 *)a + 0x6ac) + r7;
                                    if (*q != 0xfff1) func_0207ec38(q);
                                    *q = 0xfff1;
                                    break;
                                }
                                r6--;
                            }
                        }
                    }
                }
            }
        }
    }
}

s32 func_0207e77c(Unk_0207e268 *a) {
    u16 *p = a->unk_6ac;
    s32 cnt = 0;
    s32 i;
    for (i = 0; i < 10; p++, i++) {
        if (*p != 0xfff1) cnt++;
    }
    return cnt;
}

s32 func_0207e7a8(Unk_0207e268 *a, u16 *b) {
    u16 *p = a->unk_6ac;
    s32 cnt = 0;
    s32 i = 0;
    s32 z2 = 0;
    s32 z1 = 0;
    do {
        s32 r;
        if (func_0204b2d4(p) != 0) {
            s32 t = func_0204b25c(p);
            r = (t == func_0204b25c(b)) ? 1 : z1;
        } else {
            r = (*p == *b) ? 1 : z2;
        }
        if (r != 0) cnt++;
        p++; i++;
    } while (i < 10);
    return cnt;
}

BOOL func_0207e80c(Unk_0207e268 *a, u16 *b) {
    u16 v[1];
    if (*b != 0xfff1) {
        void *r6;
        s32 r7, s8, n, f;
        func_02061168(v, b, 1);
        r6 = func_0209a610(func_0207e268(a));
        r7 = func_0209b354(r6);
        s8 = func_0209b2e4(r6);
        if (func_0204b2d4(v) != 0) {
            s32 r6 = func_0207ecd4(a, b, r7);
            n = func_02053228(v);
            f = 0;
            if (*b >= 0x450c && *b <= 0x45db) f = 1;
            if (f != 0 && n == 2) {
                return func_0207e940(a, b, n, r7, s8, r6);
            }
            r6 = func_0207eb70(a, n, r7, s8, r6);
            if (func_0207f040(a, r6) != 0) {
                a->unk_6ac[r6] = *b;
                return TRUE;
            }
            func_0207ec10(b);
        } else {
            f = 0;
            if (*b >= 0x1100 && *b <= 0x1143) f = 1;
            if (f != 0) {
                func_0207e394(a, (u8)((*b >= 0x1100 && *b <= 0x1143) ? *b - 0x1100 : -1));
            } else if (*b >= 0x1144 && *b <= 0x1187) {
                func_0207e388(a, (u8)((*b >= 0x1144 && *b <= 0x1187) ? *b - 0x1144 : -1));
            }
        }
    }
    return FALSE;
}

void func_0207e388(Unk_0207e268 *a, u8 b) { a->unk_6ef = b; }
void func_0207e394(Unk_0207e268 *a, u8 b) { a->unk_6ee = b; }
}

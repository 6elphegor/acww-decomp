#include "types.h"

extern "C" {
void *func_020639bc(void *);
s32 func_02072e44(void *);
void *func_0209750c();
BOOL func_02098044(void *, s32);
void func_02097ff4(void *, s32);
void *func_020986b0(void *);
void *func_0209868c(void *);
void func_02116048(void *, void *, s32);
void func_02115fb4(void *, s32, s32);
void func_0209cf88(void *);
s32 func_0209ce68(u8 a, u32 b, u32 c, u32 d);
s32 func_0209d3a4(void *, void *);
void func_0209d2c0(void *, s32);
s32 func_020ae02c(void *);
s32 func_02070060(void *);
void func_020b4154(void *);
void func_020b413c(void *);
void func_02094030(void *);
void func_02094018(void *);
void func_020b3270(void *, s32, s32, s32, s32, s32);
void func_0203ce4c(s32, void *);
s32 func_02063b8c(s32);
void func_02065cd4(void *);
void func_02065cc8(void *);
u32 func_0209888c(void *);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void func_02065588(void *a, u32 b, s32 c);
BOOL func_02096a50(void *a, s32 b);
void func_0206338c(void *, s32, s32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, u32, u32, u32, u32, u32);
s32 func_020966d0(s32, s32);
s32 func_02087e14(void *);
s32 func_02087e50(void *);
s32 func_02087e0c(void *);
s32 func_02087e30(void *);
extern void *data_020cbb18;
extern u8 data_020cf288[];
extern u8 data_020cf328[];
extern u8 data_021d7350[];
extern u8 data_021ed0a0[];
extern u8 data_020e0c54[];
extern u8 data_020e0cc8[];
extern u8 data_020e0c4c[];
extern u8 data_020e0cdc[];
extern u8 data_020e0c44[];
extern s32 data_021c5384;
}

struct Unk_020874e8_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

struct Unk_02087650_E {
    u8 a;
    u8 b;
    u8 pad[2];
    u32 c;
};

struct Unk_02087650_S {
    union {
        u32 z[2];
        struct {
            u8 pad[3];
            u8 c, b, a;
            u8 pad2[2];
        };
    };
};

class Unk_020877e0 {
public:
    void func_020877e0(u32 i);
    void func_02087804(u32 i);
    BOOL func_02087838(u32 i);
    void func_02087860(u8 *src);
    void func_02087870();
    void func_02087af0();

    u8 unk_00[3];
    u32 unk_04[2];
};

class Unk_02087ad8 {
public:
    void func_02087888();
    BOOL func_020879b4(s32 idx, u16 *v);
    void func_02087ad8();
    u32 func_02087aec();
    void func_02087b18();
    void func_02087b24();
    u32 func_02087b30();
    void func_02087b38();
    void func_02087b40();
    void func_02087b4c();
    u32 func_02087b8c();
    void func_02087b94(s32 v);
    u32 func_02087ba8();
    void func_02087bb0(s32 v);
    u32 func_02087bc0();
    void func_02087bc8(u32 v);
    u32 func_02087bdc();
    void func_02087be0();
    u32 func_02087bf4();
    void func_02087bf8();
    u32 func_02087c0c();
    void func_02087c10(s32 v);
    u32 func_02087c20();
    void func_02087c24(u32 v);
    u32 func_02087c38();
    void func_02087c3c(u32 v);
    u32 func_02087c4c();
    void func_02087c50(u32 v);
    u32 func_02087c54();
    void func_02087c58();
    u8 *func_02087c7c();

    u8 unk_00[8];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    union {
        u8 unk_10;
        struct {
            u8 unk_10_0 : 1;
            u8 unk_10_1 : 1;
            u8 unk_10_2 : 4;
            u8 unk_10_6 : 1;
            u8 unk_10_7 : 1;
        };
    };
};

extern "C" void *func_020874d8(void *p) {
    func_020639bc(p);
    return p;
}

extern "C" BOOL func_02087650(s32 lim, s32 b, s32 c, Unk_020874e8_Bits *out);
extern "C" u8 *func_0208779c(u8 *p);
extern "C" void func_020877c0(void *a, void *b);

enum Unk_020874e8_K { UNK_020874E8_K = 0x15db4 };
extern "C" BOOL func_020874e8(s32 a, s32 b, s32 c, Unk_020874e8_Bits *d) {
    if (func_02072e44(data_020cbb18)) {
        return FALSE;
    }
    void *o = func_0209750c();
    if (func_02098044(o, 1)) {
        return FALSE;
    }
    if (!func_02087650(a, b, c, d)) {
        return FALSE;
    }
    Unk_020874e8_Bits t;
    func_020877c0(func_020986b0(o), &t);
    u8 *p = func_0208779c((u8 *)func_020986b0(o));
    if (d->a == t.a && d->b == t.b && d->c == t.c) {
        if ((p[2] == a && p[1] == b && p[0] == c) || (p[2] == 0 && p[1] == 0 && p[0] == 0)) {
            return TRUE;
        }
        return FALSE;
    }
    if (d->c == 0) {
        switch (d->a) {
        case 0:
            if (func_02098044(o, 6)) {
                return TRUE;
            }
            break;
        case 2:
            if (((Unk_02087ad8 *)func_0209868c(o))->func_02087c54() == 0xf) {
                return TRUE;
            }
            break;
        case 3:
            Unk_020874e8_K k = UNK_020874E8_K;
            if (func_020ae02c((u8 *)((u32)data_021d7350 + k)) == 3) {
                return TRUE;
            }
            break;
        case 1:
            if (func_02098044(o, 8) || func_02070060(data_021ed0a0)) {
                return TRUE;
            }
            break;
        }
    } else {
        u8 v = d->c - 1;
        if (d->a == t.a && d->b == t.b && v == t.c) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02087650(s32 lim, s32 b, s32 c, Unk_020874e8_Bits *out) {
    Unk_02087650_S s1, s2;
    s32 r4, r7, r6;
    u32 x4, x8, xc;
    s32 j;
    s32 v;
    Unk_02087650_E *t1;
    u8 *t2;
    u32 *t3;
    s1.z[0] = 0;
    s1.z[1] = 0;
    s1.a = lim;
    s1.b = b;
    s1.c = c;
    r4 = lim - 1;
    goto test4;
loop4:
    if (r4 >= 0) {
        r7 = 0;
        goto test7;
    loop7:
        r6 = 0;
        t1 = (Unk_02087650_E *)(data_020cf288 + r7 * 0x28);
        t2 = data_020cf328 + r7 * 0x8c;
        goto test6;
    loop6:
        Unk_02087650_E *e;
        e = &t1[r6];
        x8 = t1[r6].a;
        if (x8 != 0) {
            x4 = e->b;
            xc = e->c;
        retry:
            s32 r;
            r = func_0209ce68(r4, x8, xc, x4);
            if (r == -1) {
                x4 = (u8)(x4 - 1);
                goto retry;
            }
            s2.z[0] = 0;
            s2.z[1] = 0;
            s2.a = r4;
            s2.b = x8;
            s2.c = r;
            j = 0;
            t3 = (u32 *)(t2 + r6 * 0x1c);
            for (; j < 7; j++) {
                v = t3[j];
                if (v == 0) continue;
                s32 t = func_0209d3a4(&s1, &s2);
                if (t == 0) {
                    t = -func_0209d3a4(&s2, &s1);
                }
                if (t + v > 0 && t <= 0) {
                    out->a = r7;
                    out->b = r6;
                    out->c = j;
                    return TRUE;
                }
                func_0209d2c0(&s2, v);
            }
        }
        r6++;
    test6:
        if (r6 < 5) goto loop6;
        r7++;
    test7:
        if (r7 < 4) goto loop7;
    }
    r4++;
test4:
    if (r4 <= lim) goto loop4;
    return FALSE;
}

extern "C" void func_020877a0(s32 a, void *b) {
    func_0209cf88((void *)(a + 1));
    func_02116048(b, (void *)a, 1);
}

extern "C" void func_020877cc(void *a) {
    func_02115fb4(a, 0xff, 1);
}

extern "C" void func_020877d8() {}
extern "C" void func_020877dc() {}

void Unk_020877e0::func_020877e0(u32 i) {
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        unk_04[w] = ~(1 << b) & *(volatile u32 *)&unk_04[w];
    }
}

void Unk_020877e0::func_02087804(u32 i) {
    u8 tmp[3];
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        unk_04[w] = *(volatile u32 *)&unk_04[w] | (1 << b);
    }
    func_0209cf88(tmp);
    func_02087860(tmp);
}

BOOL Unk_020877e0::func_02087838(u32 i) {
    BOOL r;
    s32 w = i >> 5;
    u32 b = i & 0x1f;
    if (w < 2) {
        r = TRUE;
        if (((r << b) & unk_04[w]) != 0) {
            goto out;
        }
    }
    r = FALSE;
out:
    return r;
}

void Unk_020877e0::func_02087860(u8 *src) {
    unk_00[2] = src[2];
    unk_00[1] = src[1];
    unk_00[0] = src[0];
}

void Unk_020877e0::func_02087870() {
    func_02115fb4(unk_04, 0, 8);
}

extern "C" void func_02087880() {}
extern "C" void func_02087884() {}

void Unk_02087ad8::func_02087888() {
    u32 bufA[11];
    u32 bufB[8];
    u16 h[3];
    s32 r6;
    func_020b4154(bufA);
    void *obj = func_0209750c();
    func_02094030(bufB);
    Unk_02087ad8 *r7 = (Unk_02087ad8 *)func_0209868c(obj);
    if (func_02098044(obj, 0x17)) {
        if (func_02098044(obj, 0x19)) {
            h[0] = 0x1492;
            s32 r = func_02063b8c(2);
            if (func_020879b4(r, &h[0])) {
                func_02097ff4(obj, 0x19);
            }
        }
        if (func_02098044(obj, 0x1a)) {
            h[1] = 0x1492;
            s32 r = func_02063b8c(2);
            if (func_020879b4(r + 2, &h[1])) {
                func_02097ff4(obj, 0x1a);
            }
        }
    }
    if (func_02098044(obj, 0x18)) {
        if (r7->func_02087aec() >= 1) {
            func_020b3270(bufA, r7->func_02087aec(), 10, 0, 0, 0);
            func_0203ce4c(3, bufA);
            r6 = func_02063b8c(2) + 4;
            u32 cnt = r7->func_02087aec();
            if (cnt >= 10) {
                cnt = 10;
                r6 = 6;
            }
            func_020b3270(bufA, cnt * 100, 10, 0, 0, 0);
            func_0203ce4c(4, bufA);
            h[2] = cnt + 0x1491;
            if (func_020879b4(r6, &h[2])) {
                unk_0f = 0;
            }
        }
    }
    func_02094018(bufB);
    func_020b413c(bufA);
}

BOOL Unk_02087ad8::func_020879b4(s32 idx, u16 *v) {
    u32 big[0x3d];
    u8 c;
    BOOL r;
    func_02065cd4(big);
    c = 0;
    void *o = func_0209750c();
    c = idx;
    func_020656dc(big, &c, data_020e0cc8, data_020e0c4c, data_020e0c54, func_0209888c(o));
    func_02065588(big, *v, 1);
    if (func_02096a50(big, 0)) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    func_02065cc8(big);
    return r;
}

struct Unk_02087a20_L {
    u8 a;
    u8 b;
    u16 h;
    u8 c[3];
    u8 pad;
};

extern "C" void func_02087a20() {
    u8 big[0xf4];
    Unk_02087a20_L l;
    u8 obj[8];
    void *r4 = func_0209750c();
    if (r4 != NULL && func_02098044(r4, 0x36)) {
        func_02065cd4(big);
        l.a = 0;
        l.a = func_02063b8c(3);
        func_0209cf88(l.c);
        l.b = func_020966d0(3, l.c[1]);
        func_020656dc(big, &l, data_020e0cdc, data_020e0c44, &l.b, func_0209888c(r4));
        func_0206338c(obj, 0, 0x1b);
        func_02062f94(&l.h, obj, 0, 0, 1, 1, 0);
        func_02065588(big, l.h, 1);
        func_02063388(obj);
        if (func_02096a50(big, 0)) {
            func_02097ff4(r4, 0x36);
        }
        func_02065cc8(big);
    }
}

void Unk_02087ad8::func_02087ad8() {
    unk_0f = unk_0f + 1;
    if (unk_0f >= 0xff) unk_0f = 0xff;
}
u32 Unk_02087ad8::func_02087aec() { return unk_0f; }

void Unk_020877e0::func_02087af0() {
    u8 tmp[3];
    func_0209cf88(tmp);
    unk_00[2] = tmp[2];
    unk_00[1] = tmp[1];
    unk_00[0] = tmp[0];
}

extern "C" void func_02087b14() {}

void Unk_02087ad8::func_02087b18() { unk_10_6 = 0; }
void Unk_02087ad8::func_02087b24() { unk_10_6 = 1; }
u32 Unk_02087ad8::func_02087b30() { return unk_10_6; }
void Unk_02087ad8::func_02087b38() { unk_0b = 0; unk_0c = 0; }
void Unk_02087ad8::func_02087b40() { unk_10_2 = 0; }
void Unk_02087ad8::func_02087b4c() {
    unk_10_2 = unk_10_2 + 1;
    if (unk_10_2 > 10) {
        unk_10_2 = 10;
    }
}
u32 Unk_02087ad8::func_02087b8c() { return unk_10_2; }
void Unk_02087ad8::func_02087b94(s32 v) { unk_10 = (unk_10 & ~2) | ((v & 1) << 1); }
u32 Unk_02087ad8::func_02087ba8() { return unk_10_1; }
void Unk_02087ad8::func_02087bb0(s32 v) { unk_10 = (unk_10 & ~1) | (v & 1); }
u32 Unk_02087ad8::func_02087bc0() { return unk_10_0; }
void Unk_02087ad8::func_02087bc8(u32 v) {
    unk_0e = unk_0e + v;
    if (unk_0e > 100) unk_0e = 100;
}
u32 Unk_02087ad8::func_02087bdc() { return unk_0e; }
void Unk_02087ad8::func_02087be0() {
    unk_0d = unk_0d + 1;
    if (unk_0d > 6) unk_0d = 6;
}
u32 Unk_02087ad8::func_02087bf4() { return unk_0d; }
void Unk_02087ad8::func_02087bf8() {
    unk_0c = unk_0c + 1;
    if (unk_0c > 12) unk_0c = 12;
}
u32 Unk_02087ad8::func_02087c0c() { return unk_0c; }
void Unk_02087ad8::func_02087c10(s32 v) {
    s32 t = unk_0b;
    t = t + v;
    if (t > 255) t = 255;
    unk_0b = t;
}
u32 Unk_02087ad8::func_02087c20() { return unk_0b; }
void Unk_02087ad8::func_02087c24(u32 v) {
    unk_0a = unk_0a + v;
    if (unk_0a > 16) unk_0a = 16;
}
u32 Unk_02087ad8::func_02087c38() { return unk_0a; }
void Unk_02087ad8::func_02087c3c(u32 v) {
    unk_09 = v;
    if (unk_09 > 15) unk_09 = 15;
}
u32 Unk_02087ad8::func_02087c4c() { return unk_09; }
void Unk_02087ad8::func_02087c50(u32 v) { unk_08 = v; }
void Unk_02087ad8::func_02087c58() {
    u8 tmp[3];
    func_0209cf88(tmp);
    unk_00[6] = tmp[2];
    unk_00[5] = tmp[1];
    unk_00[4] = tmp[0];
}
u8 *Unk_02087ad8::func_02087c7c() { return unk_00 + 4; }

extern "C" void func_02087c80() {}
extern "C" void func_02087c84() {}
extern "C" void func_02087c88() {}

extern "C" BOOL func_02087c8c(s32 t) {
    switch (t) {
    case 0:
        return TRUE;
    case 1:
        return FALSE;
    case 2:
        if (data_021c5384 == 1) return TRUE;
        return FALSE;
    case 3:
        if (data_021c5384 == 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" s32 func_02087cd8(u8 *self, s32 *cnt, s32 *v) {
    volatile s32 *vv = v;
    s32 a = (u32)(vv[0] << 12) >> 16;
    s32 b = (u32)(vv[1] << 12) >> 16;
    s32 c = (u32)(vv[2] << 12) >> 16;
    s32 d = (u32)(vv[3] << 12) >> 16;
    s32 i, n;
    i = 0;
    n = *cnt;
    for (; i < n; i += 4) {
        u16 *e = (u16 *)(self + i * 8);
        if (a == e[3] && b == e[7] && c == e[11] && d == e[15]) {
            return i >> 2;
        }
    }
    if (n < 128) {
        u16 *e = (u16 *)(self + n * 8);
        e[3] = v[0] >> 4;
        e[7] = v[1] >> 4;
        e[11] = v[2] >> 4;
        e[15] = v[3] >> 4;
        s32 r = *cnt >> 2;
        *cnt += 4;
        return r;
    }
    return -1;
}

extern "C" BOOL func_02087dac(void *p, s32 a, s32 b, s32 c, s32 d);

extern "C" s32 func_02087d6c(void *p, s32 n, s32 c, s32 d, s32 e, s32 f) {
    s32 i;
    for (i = 0; i < n; p = (u8 *)p + 8, i++) {
        if (func_02087dac(p, c, d, e, f)) {
            return i;
        }
    }
    return -1;
}

extern "C" BOOL func_02087dac(void *p, s32 a, s32 b, s32 c, s32 d) {
    s32 r7 = func_02087e14(p) - c;
    if (r7 > a) return FALSE;
    if (r7 + (c * 2 + func_02087e50(p)) < a) return FALSE;
    s32 t = func_02087e0c(p) - d;
    if (t > b) return FALSE;
    if (t + (d * 2 + func_02087e30(p)) >= b) return TRUE;
    return FALSE;
}

extern "C" u8 *func_0208779c(u8 *p) {
    return p + 1;
}

u32 Unk_02087ad8::func_02087c54() { return unk_08; }
extern "C" void func_020877c0(void *a, void *b) {
    func_02116048(a, b, 1);
}


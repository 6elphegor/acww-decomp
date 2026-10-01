#include "types.h"

struct Counter {
    Counter();
    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};
struct Counter2 {
    Counter2();
    u8 unk_00;
    u8 unk_01;
};

struct Elem2a { Elem2a(); u16 d; };
struct Elem2b { Elem2b(); ~Elem2b(); u16 d; };
struct ArrA { u32 vt; u16 e[0x25]; ArrA(); };
struct ArrB { u32 vt; Elem2b e[0x25]; ArrB(); };

struct Str { Str(const u16 *s); ~Str(); u8 d[0x24]; };
struct Obj30 { Obj30(); ~Obj30(); u8 d[0x30]; };
struct Obj12 { Obj12(u32 a, u32 b); ~Obj12(); u32 d[3]; };
struct Big { Big(); ~Big(); u8 d[0xf4]; };

struct Bits5a {
    u16 unk_00 : 5;
    u16 unk_05 : 4;
    u16 unk_09 : 2;
    u16 unk_0b : 5;
};
struct Unk_020aebbc {
    /* 0x00 */ u32 unk_00;
    u8 pad[0x51 - 4];
    /* 0x51 */ u8 unk_51;
    u8 pad2[7];
    /* 0x59 */ u8 unk_59;
    /* 0x5a */ Bits5a unk_5a;
};
struct Unk_020aec74_Out {
    u8 unk_00, unk_01, unk_02, unk_03, unk_04, unk_05;
    u16 unk_06;
};
struct Unk_021c47c4 {
    u32 unk_00, unk_04, unk_08;
};

extern "C" {
void *func_021355f0(void *p, s32 n, s32 size, void *ctor);
void func_020ae870(void *p);
u8 *func_020aeac4(void *p);
u8 *func_020ae02c(void *p);
s32 func_02076fc8(u8 *a, const void *b);
void func_0203ce38(s32 a, s32 b);
void func_0203ce24(s32 a, s32 b);
void func_0203ce4c(s32 a, void *b);
u8 *func_02063b8c(s32 a);
BOOL func_02072e44(void *p);
u32 func_020b50e8();
void *func_02037558(void *a, s32 b, s32 c, s32 d);
BOOL func_0204b2d4(void *p);
u32 func_0204b25c(void *p);
void *func_0204ebd8(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL func_0204b288();
BOOL func_0204b300(void *p);
void func_0204eb30(void *a, void *b, s32 c, s32 d, s32 e);
s32 func_0200402c(s32 a);
void func_02004054();
void func_02004064();
void *func_0223xxxx();
void func_020b3270(void *o, u8 a, s32 b, s32 c, s32 d, s32 e);
void func_02062e90(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, const void *h, s32 i);
void func_02061168(void *a, void *b, s32 c);
void func_02062f70(void *a, s32 b, void *c, s32 d, const void *e, s32 f, s32 g, s32 h);
s32 func_0211c444();
s32 func_0211c460(s32 a);
void func_0211c6c4(s32 a, s32 b);
void func_0211c5a0(void *a, void *b);
void *func_0209750c();
void *func_020986c8(void *a);
BOOL func_0203c4cc(void *a, void *b);
void func_020af488(u32 a);
void *func_ov004_02235718();
void *func_ov004_022355d8(void *a, s32 b, s32 c, s32 d);
void *func_ov004_0223584c();
void func_ov004_02235740(void *a, void *b);
void func_ov004_022344dc();
void func_020aee90(s32 x, s32 y, u32 a, s32 b);
u32 func_0209888c(void *a);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
void func_02065588(void *a, u32 b, s32 c);
void func_02096a50(void *a, s32 b);
void func_02065cd4(void *a);
void func_02065cc8(void *a);
s32 func_ov003_0222eb68(s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_020af0a4(u32 i, u32 n, u8 *bits);
u16 *func_020af034(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out);
BOOL func_020af278(s32 m);
void func_020af258(s32 m);
void func_020af268(s32 m);
void func_020af2fc();
void func_020af2c4();
void func_020af290();
void func_020af230(Counter *p);
BOOL func_020af1ec(Counter *p);

extern u8 data_021ed104[];
extern u8 data_020e2e9c[];
extern u8 data_020e2ea8[];
extern u8 data_020cbb18[];
extern u8 data_021ee160[];
extern u16 data_021ee164;
extern u16 data_021ee168;
extern u8 data_021ee1f4[];
extern u8 data_021ee240;
extern u8 data_021ee244;
extern u32 data_021ee248;
extern u32 data_021ee24c;
extern u8 data_021ee25c[];
extern u8 data_020e416c;
extern Unk_021c47c4 *data_021c47c4;
extern u16 data_020d09cc[];
extern u8 data_020e2ebc[], data_020e2ec0[], data_020e2eb8[];

void func_020aebbc(Unk_020aebbc *p) {
    func_020ae870(p);
    p->unk_5a.unk_09 = 0;
    p->unk_00 = 0;
    p->unk_5a.unk_00 = 0;
    p->unk_51 = 1;
    p->unk_59 = 0;
}

void func_02004b60(void *p);
ArrA::ArrA() { func_021355f0(&e, 0x25, 2, (void *)func_02004b60); }
ArrB::ArrB() { func_020aebbc((Unk_020aebbc *)this); }

BOOL func_020aec4c() {
    if (func_02072e44(*(void **)data_020cbb18)) {
        return func_020af1ec((Counter *)data_021ee160);
    }
    return TRUE;
}

BOOL func_020aec74(Unk_020aec74_Out *out) {
    u8 *h = data_021ed104;
    if (func_020aeac4(h)[3] != 0) {
        out->unk_05 = func_020aeac4(h)[2];
        out->unk_04 = func_020aeac4(h)[1];
        out->unk_03 = func_020aeac4(h)[0];
        out->unk_02 = 6;
        out->unk_01 = 0;
        out->unk_00 = 0;
        out->unk_06 = 0;
        return TRUE;
    }
    return FALSE;
}

s32 func_020aecc4() {
    return func_02076fc8(func_020ae02c(data_021ed104) + 3, data_020e2e9c);
}

void func_020aece4(s32 a, s32 b) {
    func_0203ce38(2, a);
    func_0203ce24(3, b);
    func_02076fc8(func_020ae02c(data_021ed104), data_020e2e9c);
}

void func_020aed14(const u16 *s) {
    Str str(s);
    func_0203ce4c(3, &str);
    func_02076fc8(func_02063b8c(2) + 4, data_020e2ea8);
}

void func_020aed48(s32 x) {
    Obj30 o;
    func_020b3270(&o, x % 12, 10, 0, 0, 0);
    func_0203ce4c(2, &o);
    func_02076fc8(func_02063b8c(2) + 2, data_020e2ea8);
}

void func_020aed98(s32 a, s32 b) {
    func_0203ce38(0, a);
    func_0203ce24(1, b);
    func_02076fc8(func_02063b8c(2), data_020e2ea8);
}

static inline BOOL R1(u16 *p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
static inline BOOL R2(u16 *p, u32 lo, u32 hi) { if (*p >= lo && *p <= hi) return TRUE; return FALSE; }
static inline BOOL InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
static inline BOOL IsEq(u32 c, u32 v) { if (c >= v && c <= v) return TRUE; return FALSE; }
static inline BOOL IsZ() { if (data_020e416c == 0) return TRUE; return FALSE; }
void func_020aedc4(u16 *p, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != func_020b50e8()) return;
    Unk_021c47c4 *s = data_021c47c4;
    if (s == 0) return;
    void *q; u32 k = 0;
    if (s->unk_04 > k && s->unk_08 > k && s->unk_00 != 0) q = (void *)s->unk_00;
    else q = 0;
    if (q == 0) return;
    for (s32 y = 0; y < 16; y++) {
        for (s32 x = 0; x < 16; x++) {
            u16 *e = (u16 *)func_02037558(q, x, y, 0);
            if (e == 0) continue;
            BOOL eq;
            if (func_0204b2d4(e)) eq = func_0204b25c(e) == func_0204b25c(p);
            else eq = *e == *p;
            if (eq) {
                func_020aee90(x, y, a, b);
                return;
            }
        }
    }
}

void func_020aee90(s32 x, s32 y, u32 a, s32 b) {
    if (IsZ()) return;
    if (a != func_020b50e8()) return;
    void *w = data_021c47c4;
    s32 bx = x >> 4;
    s32 by = y >> 4;
    void *o = func_0204ebd8(w, bx, by, x - (bx << 4), y - (by << 4), 0);
    if (o == 0) return;
    if (func_0204b288()) {
        void *r = func_ov004_02235718();
        void *t = func_ov004_022355d8(r, x, y, 0);
        if (t != 0) {
            func_ov004_02235740(func_ov004_0223584c(), t);
            func_ov004_022344dc();
        }
        if (b != 0) func_0200402c(0x2e);
    } else if (func_0204b300(o)) {
        u16 *pc = (u16 *)o;
        if (!R1(pc, 0x1000, 0x10ff)) {
            if (!R2(pc, 0x151f, 0x151f)) func_0204eb30(w, &data_021ee168, x, y, 0);
        }
        if (b != 0) func_0200402c(0x2e);
    }
}

s32 func_020aef80(u16 *key, u16 *arr, u8 *bits, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        u16 *p = func_020af034(i, arr, bits, n, 0);
        BOOL eq;
        if (func_0204b2d4(p)) eq = func_0204b25c(p) == func_0204b25c(key);
        else eq = *p == *key;
        if (eq) {
            BOOL eq2;
            if (func_0204b2d4(key)) eq2 = func_0204b25c(key) == func_0204b25c(&data_021ee168);
            else eq2 = *key == data_021ee168;
            if (!eq2) return i;
        }
    }
    return -1;
}

u16 *func_020af034(u32 i, u16 *arr, u8 *bits, u32 n, u16 *out) {
    if (i < n) {
        u16 *p = arr + i;
        if (out) *out = *p;
        if (func_020af0a4(i, n, bits)) return &data_021ee168;
        return p;
    }
    return &data_021ee164;
}

BOOL func_020af070(u32 i, u32 n, u8 *bits) {
    if (i < n && !func_020af0a4(i, n, bits)) {
        bits[i >> 3] |= 1 << (i & 7);
        return TRUE;
    }
    return FALSE;
}

BOOL func_020af0a4(u32 i, u32 n, u8 *bits) {
    if (i < n) {
        if ((bits[i >> 3] >> (i & 7)) & 1) return TRUE;
        return FALSE;
    }
    return TRUE;
}

void func_020af0c4(u16 *a, u8 *b, u32 n) {
    for (u32 i = 0; i < n; i++) a[i] = 0xfff1;
    u32 m = n / 8 + 1;
    for (u32 j = 0; j < m; j++) b[j] = 0;
}

void func_020af0f8(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        func_02062e90((u8 *)buf + *pos * 2, n, r2, r3, 0, 0, 10, data_021ee1f4, 0);
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                func_02061168(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}

void func_020af160(u16 *buf, u32 *pos, s32 r2, s32 r3, u32 n, s32 unused, u8 flag) {
    if (n != 0) {
        u16 tmp;
        {
            Obj12 o(r2, r3);
            func_02062f70((u8 *)buf + *pos * 2, n, &o, 0, data_021ee1f4, 0, 1, 0);
        }
        if (flag) {
            for (u32 i = 0; i < n; i++) {
                s32 off = (i + *pos) * 2;
                func_02061168(&tmp, (u8 *)buf + off, 1);
                *(u16 *)((u8 *)buf + off) = tmp;
            }
        }
        *pos += n;
    }
}

void func_020af1d8(Counter *c) {
    if (c->unk_01 < c->unk_00) c->unk_01++;
    func_020af1ec(c);
}

BOOL func_020af1ec(Counter *c) {
    if (c->unk_01 >= c->unk_00) return TRUE;
    return FALSE;
}

void func_020af1fc(Counter *c) {
    c->unk_01 = 0;
    u8 *p = *(u8 **)data_020cbb18;
    if (func_02072e44(p)) c->unk_00 = p[0x6c] - 1;
    else c->unk_00 = 0;
}

void func_020af230(Counter *c) {
    c->unk_00 = 0;
    c->unk_01 = 0;
}

Counter::Counter() { func_020af230(this); }
Counter2::Counter2() { func_020af230((Counter *)this); }

void func_020af258(s32 m) { data_021ee240 &= ~m; }
void func_020af268(s32 m) { data_021ee240 |= m; }
BOOL func_020af278(s32 m) {
    if (data_021ee240 & m) return TRUE;
    return FALSE;
}

void func_020af290() {
    if (func_0211c444() == 1 || func_0211c460(1)) {
        if (!func_020af278(2)) func_02004054();
        data_021ee244 = 0;
    }
}

void func_020af2c4() {
    if (func_020af278(1)) {
        func_0211c6c4(0, data_021ee24c);
        func_0211c6c4(1, data_021ee248);
        func_020af258(1);
    }
}

void func_020af2fc() {
    if (!func_020af278(1)) {
        func_0211c5a0(&data_021ee24c, &data_021ee248);
        func_0211c6c4(2, 0);
        func_020af268(1);
    }
}

void func_020af330() { func_020af268(2); }

void func_020af33c() {
    switch (data_021ee244) {
    case 0:
        if ((*(vu16 *)0x27fffa8 & 0x8000) >> 15) {
            data_021ee244 = 1;
            func_020af2fc();
            func_0211c460(0);
            func_02004064();
        }
        break;
    case 1:
        if (!((*(vu16 *)0x27fffa8 & 0x8000) >> 15)) {
            data_021ee244 = 2;
            func_020af2c4();
            func_020af290();
        }
        break;
    case 2:
        func_020af290();
        break;
    }
}

void func_020af3a8() {
    data_021ee240 = 0;
    data_021ee244 = 0;
}

s32 func_020af3bc(s32 a, s32 b, s32 c, s32 d, s16 e) {
    BOOL z = data_020e416c == 0;
    if (z && d > 0) return func_ov003_0222eb68(a, b, c, d, e);
    return 0;
}

u8 *func_020af3f4() { return data_021ee25c; }

void func_020af3fc() {
    void *obj = func_0209750c();
    if (obj) {
        u32 count = 0;
        for (u32 i = 0; i < 13; i++) {
            u16 t = data_020d09cc[i];
            if (!func_0203c4cc(func_020986c8(obj), &t)) count++;
        }
        if (count) {
            u32 r = (u32)func_02063b8c(count);
            u32 c = 0;
            for (u32 i = 0; i < 13; i++) {
                u16 t = data_020d09cc[i];
                if (!func_0203c4cc(func_020986c8(obj), &t)) {
                    if (c == r) {
                        func_020af488(i);
                        return;
                    }
                    c++;
                }
            }
        }
        func_020af488((u32)func_02063b8c(13));
    }
}

struct Loc488 { u8 a; u8 pad; u16 b; };
void func_020af488(u32 idx) {
    if (idx < 13) {
        Loc488 l;
        l.b = data_020d09cc[idx];
        void *obj = func_0209750c();
        if (obj) {
            Big big;
            l.a = idx;
            Str s(&l.b);
            func_0203ce4c(1, &s);
            func_020656dc(&big, &l, data_020e2ec0, data_020e2eb8, data_020e2ebc, func_0209888c(obj));
            func_02065588(&big, l.b, 1);
            func_02096a50(&big, 0);
        }
    }
}
}

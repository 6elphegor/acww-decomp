#include "types.h"

extern "C" {
void func_020720f8();
u32 func_02076c0c(s32 a);
void func_02076bdc(u8 *p);
void func_02076bf0(u8 *p, u32 a, u32 b);
void func_02076b18();
s32 func_02073a78();
void func_020a5ca4();
void func_020a5cb4();
void func_020a5f8c(s32 a);
void func_020a5f9c(s32 a, s32 b);
void func_020a63bc(u32 a, s32 b, u32 c, u32 d, u32 e);
s32 func_020b50e8();
u32 func_020eb004();
BOOL func_020eaca0();
BOOL func_020eaf90();
u32 func_020eaf28();
BOOL func_020eb650();
BOOL func_020eabe8(u8 *a, u32 b, u32 c, u32 d, u8 *e, u32 f, u16 g, u32 h, u8 *i, u32 j, u16 k, u32 l);
void func_020eb068(u16 a, u8 *p, u32 sz);
}

struct Unk_020cbb18 {
    u8 unk_00[4];
    u16 unk_04;
    u8 unk_06;
    u8 unk_07;
    u8 *unk_08;
    u32 unk_0c[3];
    u8 pad_18[0x64 - 0x18];
    s32 unk_64;
    s32 unk_68;
    u8 unk_6c;

    void func_02072d5c();
    void func_02072d6c(s32 a);
    void func_02072d84(s32 a, u32 b);
    void func_02072da4(s32 a, u32 b);
    u32 func_02072dc4(s32 a);
    u8 *func_02072ddc(s32 i);
    void func_02072e18(u8 *p);
    u8 func_02072e1c();
    void func_02072e20(u32 v);
    u8 func_02072e24();
    void func_02072e28(u32 v);
    void func_02072e2c();
    s16 func_02072e34();
    BOOL func_02072e44();
    void func_02072e68();
    u32 func_02072e88(s32 i);
    void func_02072e94(s32 i, u32 v);
    BOOL func_02072e98();
    BOOL func_02072ee4(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9);
    void func_02072fb4();
    void func_02073044();
    void func_02073068();

    /* callees defined elsewhere */
    BOOL func_020729cc(u32 v);
    u32 func_02072210();
    u32 func_02072228();
    void func_0207221c(u32 v);
    void func_02072234(u16 v);
    u32 func_02072374();
    void func_02072380(u32 v);
    u8 *func_02072ca8(s32 a, s32 b);
    void func_020728d4();
    void func_020728a4(u8 *src, u32 n);
    void func_02072824(u32 a, u32 b);
    void func_02072cfc();
    void func_02072c38();
    void func_02072940();
    void func_02072910();
    void func_02072808();
    void func_02072754();
    void func_02072630();
    void func_02072568();
    void func_020724c4();
    void func_02072460();
    void func_02072408();
    void func_020723f8();
    void func_02072240();
    void func_02072368(u32 v);
    void func_0207299c();
    void func_02072398(u32 v);
};

extern Unk_020cbb18 *data_020cbb18;

extern "C" {
BOOL func_02073090(s32 a);
void func_0207312c();
s32 func_02073154();
u32 func_02073168();
u32 func_02073190();
void func_020731d4();
void func_02073204();
BOOL func_02073230(u8 a);
void func_020732dc(u32 a);
void func_02073340();
void func_02073348(u32 a);
void func_02073368();
void func_020733b0();
BOOL func_020733bc();
}

void Unk_020cbb18::func_02072d5c() {
    u32 *p = unk_0c;
    for (s32 i = 2; i >= 0; i--) {
        *p++ = 3;
    }
}
void Unk_020cbb18::func_02072d6c(s32 a) { unk_0c[func_02076c0c(a)] = 3; }
void Unk_020cbb18::func_02072d84(s32 a, u32 b) { unk_0c[func_02076c0c(a)] -= b; }
void Unk_020cbb18::func_02072da4(s32 a, u32 b) { unk_0c[func_02076c0c(a)] += b; }
u32 Unk_020cbb18::func_02072dc4(s32 a) { return unk_0c[func_02076c0c(a)]; }

u8 *Unk_020cbb18::func_02072ddc(s32 i) {
    if (i >= 4) {
        return unk_08;
    }
    if (func_020729cc(i)) {
        return NULL;
    }
    if (i < unk_64) {
        return unk_08 + (i << 12);
    }
    return unk_08 + ((i - 1) << 12);
}

void Unk_020cbb18::func_02072e18(u8 *p) { unk_08 = p; }
u8 Unk_020cbb18::func_02072e1c() { return unk_07; }
void Unk_020cbb18::func_02072e20(u32 v) { unk_07 = v; }
u8 Unk_020cbb18::func_02072e24() { return unk_06; }
void Unk_020cbb18::func_02072e28(u32 v) { unk_06 = v; }
void Unk_020cbb18::func_02072e2c() { unk_04 = unk_04 + 1; }
s16 Unk_020cbb18::func_02072e34() { return (s16)(unk_04 & 0x7fff); }

BOOL Unk_020cbb18::func_02072e44() {
    if (func_02072e88(unk_64) && unk_6c >= 2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020cbb18::func_02072e68() {
    for (s32 i = 3; i >= 0; i--) {
        func_02072e94(i, 0);
    }
}

u32 Unk_020cbb18::func_02072e88(s32 i) {
    if (i < 4) {
        return unk_00[i];
    }
    return 0;
}

void Unk_020cbb18::func_02072e94(s32 i, u32 v) { unk_00[i] = v; }

BOOL Unk_020cbb18::func_02072e98() {
    s32 n = unk_64;
    if (func_02072e88(n)) {
        if (n == 0) {
            if (func_020eb004() > 1) {
                func_020720f8();
                if (func_020eaca0()) {
                    return TRUE;
                }
                return FALSE;
            }
        } else {
            func_020720f8();
            if (func_020eaca0()) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_020cbb18::func_02072ee4(u8 *a1, u32 a2, u32 a3, u8 *s4, u32 s5, u16 s6, u8 *s7, u32 s8, u16 s9) {
    func_020720f8();
    if (func_020eabe8(a1, a2, a3, 0, s4, s5, s6, 0, s7, s8, s9, 0)) {
        if (func_02072e24() != 2) {
            if ((a1 != NULL || s4 != NULL || s7 != NULL) && (a2 != 0 || s5 != 0 || s8 != 0)) {
                if (a1 != NULL && a2 != 0) {
                    func_02076bdc(a1);
                }
                if (s4 != NULL && s5 != 0) {
                    func_02076bdc(s4);
                }
                if (s7 != NULL && s8 != 0) {
                    func_02076bdc(s7);
                }
                func_02072234(0);
                func_02076b18();
                func_0207221c(0x258);
            }
        } else {
            func_02072234(0);
            func_0207221c(0);
        }
        return TRUE;
    }
    return FALSE;
}

void Unk_020cbb18::func_02072fb4() {
    func_02072e68();
    func_02072e28(0);
    func_02072e20(3);
    func_02072d5c();
    func_02072cfc();
    func_02072c38();
    unk_64 = 4;
    func_02072940();
    func_02072910();
    func_02072808();
    func_02072754();
    func_02072630();
    func_02072568();
    func_020724c4();
    func_02072460();
    func_02072408();
    func_020723f8();
    func_02072240();
    func_02072234(0);
    func_0207221c(0);
    func_02072368(0);
}

void Unk_020cbb18::func_02073044() {
    unk_68 = 4;
    func_0207299c();
    func_02072398(0);
    func_02072380(0);
}

void Unk_020cbb18::func_02073068() {
    func_02073044();
    func_02072fb4();
}

extern "C" {

void func_0207307c() {}

Unk_020cbb18 *func_02073080(Unk_020cbb18 *self) {
    self->func_02073068();
    return self;
}

BOOL func_02073090(s32 a) {
    Unk_020cbb18 *o = data_020cbb18;
    u32 n = o->func_02072210();
    if (n != 0) {
        if (o->func_02072e98()) {
            o = data_020cbb18;
            o->func_02072234(0);
            o->func_0207221c(0);
        } else {
            u32 c = o->func_02072228();
            if (c >= n) {
                return TRUE;
            }
            o->func_02072234(c + 1);
        }
    }
    if (a >= 0) {
        u16 h = a;
        if (func_020eaf90()) {
            if (a <= 0) {
                goto zero;
            }
            func_020720f8();
            if (func_020eb650()) {
                goto zero;
            }
            return TRUE;
        }
        u32 m = func_020eaf28();
        if (h == (h & m)) {
            goto zero;
        }
        return TRUE;
    }
    if (func_020eaf28() != 0) {
        goto zero;
    }
    return TRUE;
zero:
    return FALSE;
}

void func_0207312c() {
    Unk_020cbb18 *o = data_020cbb18;
    u32 v = o->func_02072374();
    if ((v & 0x40) == 0) {
        o->func_02072380(v | 0x40);
    }
}

s32 func_02073154() {
    func_02073340();
    return func_02073a78();
}

u32 func_02073168() {
    u32 r = func_02073190();
    Unk_020cbb18 *o = data_020cbb18;
    s32 i = o->unk_64;
    if (i < 4) {
        r |= (u16)(1 << i);
    }
    return r;
}

u32 func_02073190() {
    u32 r = 0;
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i) && !o->func_020729cc(i)) {
            r |= (u8)(1 << i);
        }
    }
    return r;
}

void func_020731d4() {
    s32 a = data_020cbb18->unk_64;
    if (!data_020cbb18->func_02072e88(a)) {
        func_020a5f9c(3, 7);
    } else {
        func_020a5f9c(a, 7);
    }
}

void func_02073204() {
    s32 a = data_020cbb18->unk_64;
    if (!data_020cbb18->func_02072e88(a)) {
        func_020a5f8c(3);
    } else {
        func_020a5f8c(a);
    }
}

BOOL func_02073230(u8 a) {
    u8 tmp;
    Unk_020cbb18 *o = data_020cbb18;
    s32 idx = o->unk_64;
    if (!o->func_02072e88(idx)) {
        func_020a5f9c(3, 4);
        o = data_020cbb18;
        u8 *p = o->func_02072ddc(4);
        func_02076bf0(p, 0, 5);
        p[1] = 0;
        return o->func_02072ee4(o->func_02072ddc(4), 2, 1, 0, 0, 0, 0, 0, 0);
    }
    if (o->func_020729cc(0)) {
        func_020a5f9c(idx, a);
    } else {
        func_020a5f9c(idx, 4);
        tmp = a;
        o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&tmp, 1);
        o->func_02072824(0, 0);
    }
    return TRUE;
}

void func_020732dc(u32 a) {
    s32 i = 3;
    Unk_020cbb18 *g = data_020cbb18;
    for (; i >= 0; i--) {
        if (i < a) {
            u8 *p = g->func_02072ca8(i, 0);
            func_020720f8();
            func_020eb068(i, p, 0x1000);
        } else if (i > a) {
            u8 *p = g->func_02072ca8(i - 1, 0);
            func_020720f8();
            func_020eb068(i, p, 0x1000);
        }
    }
}

void func_02073340() { func_020a5ca4(); }

void func_02073348(u32 a) {
    data_020cbb18->func_02072e28(0);
    func_020732dc(a);
}

void func_02073368() {
    Unk_020cbb18 *o = data_020cbb18;
    o->func_02072e28(2);
    o->unk_64 = 0;
    o->func_02072e94(o->unk_64, 1);
    func_020732dc(0);
    func_020a5cb4();
    func_020a63bc(0, func_020b50e8(), 1, 0, 7);
}

void func_020733b0() { func_020732dc(0); }

BOOL func_020733bc() { return data_020cbb18->func_02072ee4(0, 0, 0, 0, 0, 0, 0, 0, 0); }

}

#include "types.h"

struct Unk_02070248_Str {
    Unk_02070248_Str();
    ~Unk_02070248_Str();
    u32 pad[7];
};
struct Unk_02070248_Big {
    Unk_02070248_Big();
    ~Unk_02070248_Big();
    u8 d[0xf4];
};

extern "C" {
extern u8 data_021d735c[];
extern u16 data_021d7352[];
extern u8 data_021d7350[];
extern u8 data_020e049c[];
extern u8 data_020e04a0[];
extern u8 data_020e0498[];
extern u32 data_021cbd18[];
extern u32 data_021cbd80[8][8];
extern u8 *data_021cbca4;
extern u8 *data_021cbcb4;
extern u8 *data_021cbcb8;
extern u8 *data_021cbcb0;
extern u8 data_021e6e4c[];
extern u8 data_021eca50[];
extern u8 data_021dfd8c[];
extern u8 data_021ecc7c[];
extern s32 (*data_020cbaf0[])(s32);

s32 func_01ffc5a4(s32 a, s32 b);
void *func_02097868(void *a, s32 i);
s32 func_0209888c(void *p);
void func_020940d0(s32 a, s32 b);
s32 func_020974f8();
s32 func_020978fc(s32 t);
void func_0209d498(void *p);
s32 func_0209e170(void *p, s32 i);
void func_0209e148(void *p, s32 i);
s32 func_02098a48(void *p);
s32 func_02096aac(void *p);
void func_020638d0(void *a, void *b);
void func_0203ce4c(s32 i, void *p);
void func_02065588(void *p, u32 a, s32 b);
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, s32 f);
void func_02070b68(u32 a, u8 b, u32 c, u8 d, s32 e);
void func_02070e4c(u32 a, u8 b, u32 c, u8 d, s32 e);
s32 func_02071b00(void *p, s32 i);
void func_0203c6f8(void *p, s32 v);
s32 func_0203c6c8(void *p);
void func_02056e88(void *a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
void *func_020986d4(void *p);
void *func_02071c88(void *p, s32 i);
void *func_0209750c();
s32 func_02087298(void *p);
s32 func_020718dc();
s32 func_020718e8(s32 t, s32 x);
s32 func_020718e4(s32 t);
void *func_0207bf60(void *a, s32 x);
s32 func_020805b8(void *p);
s32 func_020b23a0(void *p);
void func_020b249c(s32 p);
}

struct Unk_020702ec_Date {
    u8 b0, b1, b2, b3, b4, b5, b6, b7;
};
struct Unk_0206fe80_Bits {
    u32 a : 4;
    u32 b : 10;
    u32 c : 4;
    u32 d : 10;
    u32 e : 1;
};

class Unk_0206fe80 {
public:
    s32 func_0206fe80();
    BOOL func_0206ff58();
    BOOL func_0206ff9c();
    BOOL func_0206ffdc();
    BOOL func_0207001c();
    BOOL func_02070060();
    BOOL func_020700a4(s32 x, u16 *id);
    void func_020700e8(u32 v);
    void func_020701d0(u16 *id);
    BOOL func_02070248();
    void func_020702ec();
    BOOL func_02070358(u16 *id);
    u32 func_02070370(u16 *id);
    u32 func_020703ac(u16 *id);
    u8 *func_020703d8(u16 *id, s32 *out);
    void func_020704ac(u16 *id);
    void func_020704e4(u16 *id);
    void func_02070510();
    void func_0207054c();
    Unk_0206fe80 *func_02070550();

    u8 unk_00[0x1b];
    u8 unk_1b[0x1d];
    u8 unk_38[0x1d];
    u8 unk_55[0xb];
    u8 unk_60;
    u8 unk_61;
    u8 unk_62;
    u8 unk_63;
};

static inline BOOL Unk_020703d8_R(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

s32 Unk_0206fe80::func_0206fe80() {
    u16 l[4];
    s32 cnt = 0;
    u32 i;
    for (i = 0; i < 0x14; i++) {
        l[0] = i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (func_02070358(&l[0])) cnt++;
    }
    for (i = 0; i < 0x38; i++) {
        l[1] = i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (func_02070358(&l[1])) cnt++;
    }
    for (i = 0; i < 0x38; i++) {
        l[2] = i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (func_02070358(&l[2])) cnt++;
    }
    for (i = 0; i < 0x34; i++) {
        l[3] = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (func_02070358(&l[3])) cnt++;
    }
    return func_01ffc5a4((cnt * 100) << 12, 0xb8000);
}

BOOL Unk_0206fe80::func_0206ff58() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x38; i++) {
        v = (u32)i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (!func_02070358(&v)) return FALSE;
    }
    return TRUE;
}

BOOL Unk_0206fe80::func_0206ff9c() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x14; i++) {
        v = (u32)i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (!func_02070358(&v)) return FALSE;
    }
    return TRUE;
}

BOOL Unk_0206fe80::func_0206ffdc() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x34; i++) {
        v = (u32)i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (!func_02070358(&v)) return FALSE;
    }
    return TRUE;
}

BOOL Unk_0206fe80::func_0207001c() {
    u16 v;
    s32 i;
    for (i = 0; (u32)i < 0x38; i++) {
        v = (u32)i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (!func_02070358(&v)) return FALSE;
    }
    return TRUE;
}

BOOL Unk_0206fe80::func_02070060() {
    if (!func_0206ff9c()) return FALSE;
    if (!func_0206ff58()) return FALSE;
    if (!func_0207001c()) return FALSE;
    if (func_0206ffdc()) return TRUE;
    return FALSE;
}

BOOL Unk_0206fe80::func_020700a4(s32 x, u16 *id) {
    if (func_02070370(id) <= 1) {
        s32 q = (func_020703ac(id) - 1) & 3;
        void *p = func_02097868(data_021d735c, q);
        if (p) {
            func_020940d0(func_0209888c(p), x);
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_0206fe80::func_020700e8(u32 v) {
    u16 l[4];
    u32 i = 0;
    u32 k = (v & 3) + 1;
    for (; i < 0x34; i++) {
        l[0] = i < 0x34 ? 0x450c + i * 4 : 0x450c;
        if (k == func_020703ac(&l[0])) func_020704ac(&l[0]);
    }
    for (i = 0; i < 0x38; i++) {
        l[1] = i < 0x38 ? (u16)(0x12e8 + i) : 0x12e8;
        if (k == func_020703ac(&l[1])) func_020704ac(&l[1]);
    }
    for (i = 0; i < 0x38; i++) {
        l[2] = i < 0x38 ? (u16)(0x12b0 + i) : 0x12b0;
        if (k == func_020703ac(&l[2])) func_020704ac(&l[2]);
    }
    for (i = 0; i < 0x14; i++) {
        l[3] = i < 0x14 ? 0x3894 + i * 4 : 0x3894;
        if (k == func_020703ac(&l[3])) func_020704ac(&l[3]);
    }
}

void Unk_0206fe80::func_020701d0(u16 *id) {
    s32 idx;
    u32 t[2];
    func_020704e4(id);
    u8 *p = func_020703d8(id, &idx);
    if (p) {
        u32 e = func_020974f8() & 3;
        p[idx >> 1] |= (e + 1) << ((idx & 1) * 4);
    }
    if (func_02070060()) {
        t[0] = 0;
        t[1] = 0;
        func_0209d498(t);
        unk_62 = ((u8 *)t)[5];
        unk_61 = ((u8 *)t)[4];
        unk_60 = ((u8 *)t)[3];
        unk_63 = 0;
    }
}

BOOL Unk_0206fe80::func_02070248() {
    Unk_02070248_Str str;
    func_020638d0(data_021d7352, &str);
    func_0203ce4c(2, &str);
    BOOL r = FALSE;
    s32 i = 0;
    u8 b;
    for (; i < 4; i++) {
        void *p = func_02097868(data_021d735c, i);
        if (p && func_02098a48(p)) {
            Unk_02070248_Big big;
            b = 0;
            func_020656dc(&big, &b, data_020e04a0, data_020e0498, data_020e049c, func_0209888c(p));
            func_02065588(&big, 0x3870, 1);
            if (func_02096aac(&big)) r = TRUE;
        }
    }
    return r;
}

void Unk_0206fe80::func_020702ec() {
    if (func_0209e170(data_021d7350, 3) == 0) {
        if (func_02070060()) {
            Unk_020702ec_Date t;
            ((u32 *)&t)[0] = 0;
            ((u32 *)&t)[1] = 0;
            func_0209d498(&t);
            if (unk_62 != t.b5 || unk_61 != t.b4 || unk_60 != t.b3) {
                if (func_02070248()) func_0209e148(data_021d7350, 3);
            }
        }
    }
}







void Unk_0206fe80::func_02070510() {
    u32 i;
    for (i = 0; i < 0x1b; i++) unk_00[i] = 0;
    for (i = 0; i < 0x1d; i++) unk_1b[i] = 0;
    for (i = 0; i < 0x1d; i++) unk_38[i] = 0;
    for (i = 0; i < 0xb; i++) unk_55[i] = 0;
}

void Unk_0206fe80::func_0207054c() {}

Unk_0206fe80 *Unk_0206fe80::func_02070550() {
    func_02070510();
    return this;
}

extern "C" void func_02070560(Unk_0206fe80_Bits *p) {
    Unk_0206fe80_Bits &v = *p;
    u32 a = v.a;
    u8 b = v.b;
    u32 c = v.c;
    u8 d = v.d;
    u32 e = v.e;
    if (e) {
        func_02070b68(a, b, c, d, 0);
    } else {
        func_02070e4c(a, b, c, d, 0);
    }
}

extern "C" BOOL func_020705a0(u32 x) {
    u8 i = x & 7;
    u32 t = data_021cbd18[i];
    if (t && data_021cbca4 && data_021cbcb4) {
        s32 off = i * 0x2c4;
        func_0203c6f8(data_021cbca4 + off, func_02071b00(data_021e6e4c, x));
        func_02056e88(data_021cbcb4 + i * 0x38, t, 0, 0, func_0203c6c8(data_021cbca4 + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02070628(u32 a, u32 b) {
    u8 x = a & 7;
    u8 y = b & 7;
    u32 t = data_021cbd80[x][y];
    if (t && data_021cbcb8 && data_021cbcb0) {
        void *q = func_02071c88(func_020986d4(func_02097868(data_021d735c, x)), y);
        s32 off = y * 0x2c4;
        func_0203c6f8(data_021cbcb8 + off, (s32)q);
        func_02056e88(data_021cbcb0 + y * 0x38, t, 0, 0, func_0203c6c8(data_021cbcb8 + off), 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_020706c4(s32 i, s32 a) {
    if (i < 10) return data_020cbaf0[i](a);
    return 0;
}

extern "C" void *func_020706e8(s32 i) {
    void *p = func_0209750c();
    if (p) return func_02071c88(func_020986d4(p), i);
    return 0;
}

extern "C" s32 func_02070708() {
    return func_02087298(data_021eca50);
}

extern "C" s32 func_02070718(s32 x) {
    s32 t = func_020718dc();
    func_020718e8(t, x);
    return func_020718e4(t);
}

extern "C" s32 func_02070738(s32 x) {
    void *p = func_0207bf60(data_021dfd8c, x);
    if (p) return func_020805b8(p);
    return 0;
}

extern "C" void func_0207075c() {
    func_020b249c(func_020b23a0(data_021ecc7c));
}

extern "C" s32 func_02070774(s32 x) {
    return func_02071b00(data_021e6e4c, x);
}

BOOL Unk_0206fe80::func_02070358(u16 *id) {
    if (func_020703ac(id)) return TRUE;
    return FALSE;
}

u32 Unk_0206fe80::func_02070370(u16 *id) {
    u32 v = func_020703ac(id);
    if (v == 0) return 3;
    if (v == 5) return 2;
    s32 t = func_020974f8();
    if (func_020978fc(t) == 1 && v == t + 1) return 0;
    return 1;
}

u32 Unk_0206fe80::func_020703ac(u16 *id) {
    s32 idx;
    u8 *p = func_020703d8(id, &idx);
    if (p) return (p[idx >> 1] >> ((idx & 1) * 4)) & 0xf;
    return 0;
}

u8 *Unk_0206fe80::func_020703d8(u16 *id, s32 *out) {
    BOOL in = FALSE;
    u16 v = *id;
    if (v >= 0x450c && v <= 0x45db) in = TRUE;
    if (in) {
        if (out) *out = (v >= 0x450c && v <= 0x45db) ? (v - 0x450c) >> 2 : -1;
        return (u8 *)this;
    }
    if (v >= 0x3894 && v <= 0x38e3) {
        if (out) *out = (v >= 0x3894 && v <= 0x38e3) ? (v - 0x3894) >> 2 : -1;
        return (u8 *)this + 0x55;
    }
    if (v >= 0x12b0 && v <= 0x12e7) {
        if (out) *out = (v >= 0x12b0 && v <= 0x12e7) ? v - 0x12b0 : -1;
        return (u8 *)this + 0x38;
    }
    if (v >= 0x12e8 && v <= 0x131f) {
        if (out) *out = (v >= 0x12e8 && v <= 0x131f) ? v - 0x12e8 : -1;
        return (u8 *)this + 0x1b;
    }
    return 0;
}

void Unk_0206fe80::func_020704ac(u16 *id) {
    s32 idx;
    u8 *p = func_020703d8(id, &idx);
    if (p) {
        s32 s = (idx & 1) * 4;
        s32 h = idx >> 1;
        p[h] &= ~(0xf << s);
        p[h] |= 5 << s;
    }
}

void Unk_0206fe80::func_020704e4(u16 *id) {
    s32 idx;
    u8 *p = func_020703d8(id, &idx);
    if (p) {
        p[idx >> 1] &= ~(0xf << ((idx & 1) * 4));
    }
}

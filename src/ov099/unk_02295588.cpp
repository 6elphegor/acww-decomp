#include "types.h"

struct Unk_ov099_02295588 {
    u8 pad_000[0x94];
    u8 unk_094[0x38];
    u8 unk_0cc[0xb2c - 0xcc];
    u8 unk_b2c[0x2134 - 0xb2c];
    u8 unk_2134[0x21f4 - 0x2134];
    u8 unk_21f4[0x220c - 0x21f4];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2570 - 0x2270];
    u8 unk_2570[0x2680 - 0x2570];
    s32 unk_2680;
    s32 unk_2684;
    s32 unk_2688;
    s32 unk_268c;
    u8 pad_2690[0x2787 - 0x2690];
    u8 unk_2787;
    u8 unk_2788;
    u8 unk_2789;
    u8 unk_278a;
    u8 unk_278b;
    u8 unk_278c;
    u8 unk_278d;
    u8 unk_278e;
};

typedef Unk_ov099_02295588 S;

extern u8 data_021ef5c8;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;

extern "C" {
void func_020b87d0(void *p);
BOOL func_0206ef00();
BOOL func_0206ef0c();
s32 func_0208d644(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);

void func_ov094_0229357c(void *p, u32 v);
void func_ov094_0229358c(void *p);
void func_ov094_0229359c(void *p, u32 v);
void func_ov094_022935dc(void *p);
u32 func_ov094_02293504(void *p, u32 v);
u32 func_ov094_0229352c(void *p, u32 v);
BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
u32 func_ov094_02294610(void *p);
BOOL func_ov094_02293d80(void *p, u32 v);
s32 func_ov094_02293d9c(void *p, u32 v);
s32 func_ov094_02293df8(void *p, u32 v);
BOOL func_ov094_022941ec(void *p, u32 v);
void func_ov094_022943a4(void *p, u32 v);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 v);
void func_ov094_022943f8(void *p);

s32 func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02202718(void *p);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_022006b8(void *p);
void func_ov002_02200980(void *self);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_02201a28(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02202064(void *p, s32 x);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_022028fc(void *p);

void func_ov099_02294d4c(S *s, u32 v);
void func_ov099_02294d5c(S *s, u32 v);
void func_ov099_02294fbc(S *s);
void func_ov099_022950a8(S *s);
void func_ov099_022950c8(S *s);
void func_ov099_022950fc(S *s);
void func_ov099_02295214(S *s);
void func_ov099_02295290(S *s);
void func_ov099_022952cc(S *s, u32 v);
void func_ov099_0229530c(S *s, u32 v);
void func_ov099_02295340(S *s, u32 v);
void func_ov099_022953b8(S *s);
void func_ov099_022953e8(S *s);
void func_ov099_0229541c(S *s);
void func_ov099_02295490(S *s);

u32 func_ov099_02295700(S *s, u32 a);
u32 func_ov099_022956d0(S *s, u32 a);
u32 func_ov099_022958c4(S *s, u32 a);
u32 func_ov099_022958d4(S *s, u32 a);
void func_ov099_022958e8(S *s, u32 a, u32 b, u32 c);
u32 func_ov099_022959b4(S *s, u32 a);
u32 func_ov099_022959c4(S *s, u32 a);
BOOL func_ov099_022959e0(S *s, u32 a);
BOOL func_ov099_022959f0(S *s, u32 a);
s32 func_ov099_02295830(S *s, u32 a);
s32 func_ov099_022957dc(S *s, u32 a);
BOOL func_ov099_02295788(S *s, u32 a);
void func_ov099_02295bb0(S *s);
void func_ov099_02295bd0(S *s);
void func_ov099_02295c0c(S *s);
BOOL func_ov099_02295928(S *s, u32 a);
void func_ov099_0229564c(S *s, u32 a);
void func_ov099_022956b4(S *s);
void func_ov099_02295a08(S *s, u32 a, u32 b);
void func_ov099_02295a74(S *s, u32 a);

BOOL func_ov099_02295588(void *self, s32 v) {
    if (data_021ef5c8 >= v) return TRUE;
    return FALSE;
}

BOOL func_ov099_0229559c() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov099_022955e0(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        func_ov094_0229357c(s->unk_0cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        func_ov094_022943a4(s->unk_b2c, func_ov099_022958d4(s, a));
    }
}

void func_ov099_02295630(S *s) {
    func_ov094_0229358c(s->unk_0cc);
    func_ov094_022943b0(s->unk_b2c);
}

void func_ov099_0229564c(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        func_ov094_0229359c(s->unk_0cc, func_ov099_022959c4(s, a));
        func_ov094_022943f8(s->unk_b2c);
    } else if (func_ov099_022959e0(s, a)) {
        func_ov094_022943bc(s->unk_b2c, func_ov099_022958d4(s, a));
        func_ov094_022935dc(s->unk_0cc);
    } else {
        func_ov099_022956b4(s);
    }
}

void func_ov099_022956b4(S *s) {
    func_ov094_022935dc(s->unk_0cc);
    func_ov094_022943f8(s->unk_b2c);
}

u32 func_ov099_022956d0(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293504(s->unk_0cc, func_ov099_022959c4(s, a));
    }
    return 0xf1;
}

u32 func_ov099_02295700(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229352c(s->unk_0cc, func_ov099_022959c4(s, a));
    }
    return 0xfff1;
}

BOOL func_ov099_02295734(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229311c(s->unk_0cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293d80(s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return TRUE;
}

BOOL func_ov099_02295788(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_0229333c(s->unk_0cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_022941ec(s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return FALSE;
}

s32 func_ov099_022957dc(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293610(s->unk_0cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293d9c(s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return 0;
}

s32 func_ov099_02295830(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        return func_ov094_02293624(s->unk_0cc, func_ov099_022959c4(s, a));
    } else if (func_ov099_022959e0(s, a)) {
        return func_ov094_02293df8(s->unk_b2c, func_ov099_022958d4(s, a));
    }
    return 0;
}

u32 func_ov099_02295884(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02294610(s->unk_b2c);
    if (t != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(s->unk_b2c, t)) return 0x1d;
        }
        return func_ov099_022958c4(s, t);
    }
    return 0x1d;
}

u32 func_ov099_022958c4(S *s, u32 a) {
    if (a <= 9) return (u8)(a + 0xf);
    return 0x1d;
}

u32 func_ov099_022958d4(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return (u8)(a - 0xf);
    return 0;
}

void func_ov099_022958e8(S *s, u32 a, u32 b, u32 c) {
    if (func_ov099_022959f0(s, a)) {
        u32 t = func_ov099_022959c4(s, a);
        func_ov094_02293494(s->unk_0cc, t, b, c);
        func_ov094_02293434(s->unk_0cc, t);
    }
}

BOOL func_ov099_02295928(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) {
        u32 t = func_ov099_02295700(s, a);
        if (t != 0xfff1) {
            func_ov099_022958e8(s, s->unk_278a, t, func_ov099_022956d0(s, a));
        }
        func_ov099_0229530c(s, a);
        return TRUE;
    }
    return FALSE;
}

u32 func_ov099_02295978(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_0cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0cc, t)) return 0x1d;
        }
        return func_ov099_022959b4(s, t);
    }
    return 0x1d;
}

u32 func_ov099_022959b4(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1d;
}

u32 func_ov099_022959c4(S *s, u32 a) {
    if (func_ov099_022959f0(s, a)) return (u8)a;
    return 0;
}

BOOL func_ov099_022959e0(S *s, u32 a) {
    if (a >= 0xf && a <= 0x18) return TRUE;
    return FALSE;
}

BOOL func_ov099_022959f0(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

void func_ov099_022959fc(S *s) {
    func_020b87d0(s->unk_094);
}

void func_ov099_02295a08(S *s, u32 a, u32 b) {
    s->unk_278a = a;
    func_ov002_022026f4(s->unk_21f4, s->unk_2688, s->unk_268c);
    s32 x = func_ov099_02295830(s, a);
    func_ov002_022026c4(s->unk_21f4, x, func_ov099_022957dc(s, a), b);
    func_ov002_02202718(s->unk_21f4);
    func_ov099_022953b8(s);
    func_ov002_02200a58(s, 0x10);
}

void func_ov099_02295a74(S *s, u32 a) {
    s->unk_278a = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov099_02295340(s, a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) s->unk_278e = 5;
    }
    func_ov099_022953e8(s);
}

void func_ov099_02295ac4(S *s, u32 a) {
    s->unk_278a = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov099_02295340(s, a);
    if (s->unk_2787 != 1) {
        if (s->unk_2787 == 2) func_ov002_02200a58(s, 3);
    }
    func_ov099_0229541c(s);
}

void func_ov099_02295b10(S *s, u32 a) {
    u32 r6, r7;
    s->unk_2788 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_2680 = func_ov099_02295830(s, s->unk_2788) - r6;
    s->unk_2684 = func_ov099_022957dc(s, s->unk_2788) - r7;
    s->unk_2789 = a;
    func_ov002_022006b8(s->unk_2134);
    if (func_ov099_022959e0(s, a)) {
        func_ov099_02294d4c(s, 4);
    } else if (func_ov099_02295788(s, a)) {
        func_ov099_02294d4c(s, 4);
    } else {
        func_ov099_02294d5c(s, 4);
    }
}

void func_ov099_02295bb0(S *s) {
    if (func_0206ef0c()) {
        func_ov099_02295c0c(s);
    } else {
        func_ov099_02295bd0(s);
    }
}

void func_ov099_02295bd0(S *s) {
    s->unk_2789 = 0x1d;
    func_ov099_02295290(s);
    func_ov002_02200980(s);
    func_ov099_02295490(s);
    func_ov002_02200a58(s, 4);
    func_ov099_0229564c(s, s->unk_278b);
}

void func_ov099_02295c0c(S *s) {
    func_ov099_02295214(s);
    func_ov099_022956b4(s);
    func_ov002_02200a58(s, 0);
}

void func_ov099_02295c28(S *s) {
    if (func_ov002_02204234(s->unk_2570, 0)) {
        func_ov002_02200a58(s, s->unk_278e);
        func_0208d644(s->unk_220c);
    }
}

void func_ov099_02295c60(S *s) {
    if (func_ov002_022017a4(s->unk_2270)) {
        func_ov099_02294fbc(s);
    }
}

void func_ov099_02295c80(S *s) {
    if (func_ov002_02201a28(s->unk_2270)) {
        func_ov002_02202064(s->unk_2270, 0);
        if (func_0208d534(s->unk_220c)) {
            func_ov099_022950c8(s);
        }
        func_ov002_02200a58(s, 0x13);
    }
}

void func_ov099_02295cc4(S *s) {
    if (func_ov002_022017b4(s->unk_2270)) {
        if (func_0206ef00()) {
            func_ov099_022950fc(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov099_02295d00(S *s) {
    if (func_ov002_02202718(s->unk_21f4)) {
        func_ov099_0229530c(s, s->unk_278a);
        func_ov099_02295bb0(s);
    } else {
        func_ov099_022953b8(s);
    }
}

void func_ov099_02295d38(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_278e);
    }
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov099_02294d4c(s, 0x40);
        func_ov099_022953e8(s);
    }
}

void func_ov099_02295d7c(S *s) {
    if (!func_ov002_022028fc(s->unk_220c)) {
        func_ov099_022952cc(s, s->unk_278d);
        func_ov099_02294d5c(s, 0x40);
        func_ov002_02200a58(s, 0xf);
        func_ov099_02295490(s);
    } else {
        func_ov002_02200a58(s, 4);
    }
}

void func_ov099_02295dc4(S *s) {
    if (!func_ov002_02202928(s->unk_220c)) {
        u32 a = s->unk_278d;
        if (s->unk_278b == a) {
            func_ov099_02295928(s, a);
            func_ov099_02295490(s);
            func_ov002_02200a58(s, 4);
        } else {
            func_ov099_02295a08(s, a, 4);
        }
    } else {
        func_ov099_022953e8(s);
    }
}

void func_ov099_02295e18(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_278e);
    }
    func_ov099_022953e8(s);
}

void func_ov099_02295e48(S *s) {
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov099_02295a74(s, s->unk_278b);
        func_ov002_02200a58(s, 0xc);
    }
}

void func_ov099_02295e78(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov099_022950a8(s);
        func_ov002_02200a58(s, 4);
    }
}
}

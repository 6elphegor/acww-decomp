#include "types.h"

struct Unk_ov103_0229555c {
    u8 pad_000[0x94];
    u8 unk_094[0xcc - 0x94];
    u8 unk_0cc[0xb2c - 0xcc];
    u8 unk_b2c[0x2134 - 0xb2c];
    u8 unk_2134[0x21f4 - 0x2134];
    u8 unk_21f4[0x220c - 0x21f4];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2569 - 0x2270];
    u8 unk_2569[7];
    u8 unk_2570[0x2888 - 0x2570];
    u8 unk_2888[0x2900 - 0x2888];
    s32 unk_2900;
    s32 unk_2904;
    s32 unk_2908;
    s32 unk_290c;
    u8 pad_2910[0x2a04 - 0x2910];
    u8 unk_2a04[0x2af8 - 0x2a04];
    u8 unk_2af8;
    u8 unk_2af9;
    u8 unk_2afa;
    u8 unk_2afb;
    u8 unk_2afc;
    u8 unk_2afd;
    u8 unk_2afe;
    u8 unk_2aff;
    u8 unk_2b00;
    u8 unk_2b01;
};

typedef Unk_ov103_0229555c S;

extern u8 data_021ef5c8;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;

extern "C" {
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_02089ad8(void *p, s32 x, s32 y);
s32 func_0208d644(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
void func_020b87d0(void *p);
void func_02065e70(void *p, u32 v);

void func_ov094_02294420(void *p, void *q, u32 a);
void func_ov094_022943a4(void *p, u32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 a);
void func_ov094_022935dc(void *p);
void func_ov094_022943f8(void *p);
BOOL func_ov094_02293d80(void *p, u32 a);
BOOL func_ov094_022941ec(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
BOOL func_ov094_0229433c(void *p, u32 a);
void func_ov094_02294318(void *p, u32 a, void *b);
void func_ov094_02293318(void *p, u32 a, u32 b);
u32 func_ov094_02294610(void *p);

void func_ov002_022006b8(void *p);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_02200980(void *self);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a50(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02201aa0(void *p, u32 a, u32 b);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, s32 x);
s32 func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02202718(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_022028fc(void *p);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_02203f08(void *p);
s32 func_ov002_02203f78(void *p, s32 a);
s32 func_ov002_02203f28(void *p, s32 a);

void func_ov103_02295048(S *s);
void func_ov103_02295120(S *s);
void func_ov103_02295140(S *s);
void func_ov103_02295160(S *s);
void func_ov103_02295194(S *s);
void func_ov103_022952ac(S *s);
void func_ov103_02295328(S *s);
void func_ov103_02295364(S *s, u32 a);
void func_ov103_022953a8(S *s, u32 a);
void func_ov103_022953d0(S *s, u32 a);
void func_ov103_02295424(S *s);
void func_ov103_02295454(S *s);
void func_ov103_02295488(S *s);
void func_ov103_02295508(S *s);
void func_ov103_02294d94(S *s, u32 a);
void func_ov103_02294da4(S *s, u32 a);
void func_ov103_02296820(S *s);

void func_ov103_022956ac(S *s);
u32 func_ov103_022958a8(S *s, u32 a);
BOOL func_ov103_022958bc(S *s, u32 a);
s32 func_ov103_02295740(S *s, u32 a);
s32 func_ov103_02295774(S *s, u32 a);
BOOL func_ov103_022956c8(S *s, u32 a);
BOOL func_ov103_022956fc(S *s, u32 a);
BOOL func_ov103_022957a8(S *s, u32 a);
void func_ov103_022957dc(S *s, u32 a, void *b);
void func_ov103_0229566c(S *s, u32 a);
BOOL func_ov103_0229580c(S *s, u32 a);
u32 func_ov103_02295898(S *s, u32 a);
void func_ov103_02295a60(S *s);
void func_ov103_02295a80(S *s);
void func_ov103_02295abc(S *s);
void func_ov103_02295944(S *s, u32 a);
void func_ov103_022958d8(S *s, u32 a, u32 b);

void func_ov103_0229555c(S *s) {
    s32 r6 = func_ov103_02295774(s, s->unk_2afa) - 0x6d;
    s32 r4 = func_ov103_02295740(s, s->unk_2afa) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    func_02089ad8(s->unk_2134, r6, r4);
    if (func_ov103_022958bc(s, s->unk_2afa)) {
        func_ov094_02294420(s->unk_b2c, s->unk_2134, func_ov103_022958a8(s, s->unk_2afa));
    }
}

BOOL func_ov103_022955c8(void *p, s32 a) {
    if (data_021ef5c8 < a) return FALSE;
    return TRUE;
}

BOOL func_ov103_022955dc() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov103_02295620(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        func_ov094_022943a4(s->unk_b2c, func_ov103_022958a8(s, a));
    }
}

void func_ov103_02295650(S *s) {
    func_ov094_0229358c(s->unk_0cc);
    func_ov094_022943b0(s->unk_b2c);
}

void func_ov103_0229566c(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        func_ov094_022943bc(s->unk_b2c, func_ov103_022958a8(s, a));
        func_ov094_022935dc(s->unk_0cc);
    } else {
        func_ov103_022956ac(s);
    }
}

void func_ov103_022956ac(S *s) {
    func_ov094_022935dc(s->unk_0cc);
    func_ov094_022943f8(s->unk_b2c);
}

BOOL func_ov103_022956c8(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        return func_ov094_02293d80(s->unk_b2c, func_ov103_022958a8(s, a));
    }
    return TRUE;
}

BOOL func_ov103_022956fc(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        return func_ov094_022941ec(s->unk_b2c, func_ov103_022958a8(s, a));
    }
    return FALSE;
}

void func_ov103_02295730(S *s) {
    func_ov094_02293318(s->unk_0cc, 0, 0xe);
}

s32 func_ov103_02295740(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        return func_ov094_02293d9c(s->unk_b2c, func_ov103_022958a8(s, a));
    }
    return 0;
}

s32 func_ov103_02295774(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        return func_ov094_02293df8(s->unk_b2c, func_ov103_022958a8(s, a));
    }
    return 0;
}

BOOL func_ov103_022957a8(S *s, u32 a) {
    if (func_ov103_022958bc(s, a)) {
        return func_ov094_0229433c(s->unk_b2c, func_ov103_022958a8(s, a));
    }
    return FALSE;
}

void func_ov103_022957dc(S *s, u32 a, void *b) {
    if (func_ov103_022958bc(s, a)) {
        func_ov094_02294318(s->unk_b2c, func_ov103_022958a8(s, a), b);
    }
}

BOOL func_ov103_0229580c(S *s, u32 a) {
    if (!func_ov103_022956c8(s, a)) {
        func_02065e70(s->unk_2a04, func_ov103_022957a8(s, a));
        func_ov103_022957dc(s, s->unk_2afb, s->unk_2a04);
    }
    func_ov103_022953a8(s, a);
    return TRUE;
}

u32 func_ov103_02295858(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02294610(s->unk_b2c);
    if (t != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(s->unk_b2c, t)) return 0x15;
        }
        return func_ov103_02295898(s, t);
    }
    return 0x15;
}

u32 func_ov103_02295898(S *s, u32 a) {
    if (a <= 9) return (u8)(a + 11);
    return 0x15;
}

u32 func_ov103_022958a8(S *s, u32 a) {
    if (a >= 0xb && a <= 0x14) return (u8)(a - 11);
    return 0;
}

BOOL func_ov103_022958bc(S *s, u32 a) {
    if (a >= 0xb && a <= 0x14) return TRUE;
    return FALSE;
}

void func_ov103_022958cc(S *s) {
    func_020b87d0(s->unk_094);
}

void func_ov103_022958d8(S *s, u32 a, u32 b) {
    s->unk_2afb = a;
    func_ov002_022026f4(s->unk_21f4, s->unk_2908, s->unk_290c);
    s32 x = func_ov103_02295774(s, a);
    func_ov002_022026c4(s->unk_21f4, x, func_ov103_02295740(s, a), b);
    func_ov002_02202718(s->unk_21f4);
    func_ov103_02295424(s);
    func_ov002_02200a58(s, 0x13);
}

void func_ov103_02295944(S *s, u32 a) {
    s->unk_2afb = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov103_022953d0(s, a);
    if (s->unk_2af8 == 1) s->unk_2aff = 6;
    func_ov103_02295454(s);
}

void func_ov103_02295990(S *s, u32 a) {
    s->unk_2afb = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov103_022953d0(s, a);
    if (s->unk_2af8 == 1) func_ov002_02200a58(s, 2);
    func_ov103_02295488(s);
}

void func_ov103_022959d8(S *s, u32 a) {
    u32 r6, r7;
    s->unk_2af9 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_2900 = func_ov103_02295774(s, s->unk_2af9) - r6;
    s->unk_2904 = func_ov103_02295740(s, s->unk_2af9) - r7;
    s->unk_2afa = a;
    func_ov002_022006b8(s->unk_2134);
    if (func_ov103_022956fc(s, a)) {
        func_ov103_02294d94(s, 4);
    } else {
        func_ov103_02294da4(s, 4);
    }
}

void func_ov103_02295a60(S *s) {
    if (func_0206ef0c()) {
        func_ov103_02295abc(s);
    } else {
        func_ov103_02295a80(s);
    }
}

void func_ov103_02295a80(S *s) {
    s->unk_2afa = 0x15;
    func_ov103_02295328(s);
    func_ov002_02200980(s);
    func_ov103_02295508(s);
    func_ov002_02200a58(s, 5);
    func_ov103_0229566c(s, s->unk_2afc);
}

void func_ov103_02295abc(S *s) {
    func_ov103_022952ac(s);
    func_ov103_022956ac(s);
    func_ov002_02200a58(s, 0);
}

void func_ov103_02295ad8(S *s) {
    if (func_ov002_02203f08(s->unk_2888)) {
        if (func_0208d534(s->unk_220c)) {
            s32 r4 = func_ov002_02203f78(s->unk_2888, 1);
            s32 r2 = func_ov002_02203f28(s->unk_2888, 1);
            func_ov002_02202a40(s->unk_220c, r4, r2);
        }
    } else {
        func_ov103_022952ac(s);
        func_ov002_02200a50(s, 7);
        func_ov002_02200a60(s, 1);
    }
}

void func_ov103_02295b40(S *s) {
    if (func_ov002_02204234(s->unk_2570, 0)) {
        func_ov002_02200a58(s, s->unk_2aff);
        func_0208d644(s->unk_220c);
    }
}

void func_ov103_02295b78(S *s) {
    if (func_ov002_022017a4(s->unk_2270)) {
        func_ov103_02295048(s);
    }
}

void func_ov103_02295b98(S *s) {
    if (func_ov002_02201a28(s->unk_2270)) {
        func_ov002_02202064(s->unk_2270, 0);
        if (func_0208d534(s->unk_220c)) {
            func_ov103_02295160(s);
        }
        func_ov002_02200a58(s, 0x16);
    }
}

void func_ov103_02295bdc(S *s) {
    if (func_ov002_022017b4(s->unk_2270)) {
        if (func_0206ef00()) {
            func_ov103_02295194(s);
            func_ov002_02200a58(s, 9);
        } else {
            func_ov002_02200a58(s, 4);
        }
    }
}

void func_ov103_02295c18(S *s) {
    if (func_ov002_02202718(s->unk_21f4)) {
        func_ov103_022953a8(s, s->unk_2afb);
        func_ov103_02295a60(s);
    } else {
        func_ov103_02295424(s);
    }
}

void func_ov103_02295c50(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_2aff);
    }
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov103_02294d94(s, 0x40);
        func_ov103_02295454(s);
    }
}

void func_ov103_02295c94(S *s) {
    if (!func_ov002_022028fc(s->unk_220c)) {
        func_ov103_02295364(s, s->unk_2afe);
        func_ov103_02294da4(s, 0x40);
        func_ov002_02200a58(s, 0x12);
        func_ov103_02295508(s);
    } else {
        func_ov002_02200a58(s, 5);
    }
}

void func_ov103_02295cdc(S *s) {
    if (!func_ov002_02202928(s->unk_220c)) {
        u32 a = s->unk_2afe;
        if (s->unk_2afc == a) {
            func_ov103_0229580c(s, a);
            func_ov103_02295508(s);
            func_ov002_02200a58(s, 5);
        } else {
            func_ov103_022958d8(s, a, 4);
        }
    } else {
        func_ov103_02295454(s);
    }
}

void func_ov103_02295d30(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_2aff);
    }
    func_ov103_02295454(s);
}

void func_ov103_02295d60(S *s) {
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov103_02295944(s, s->unk_2afc);
        func_ov002_02200a58(s, 0xf);
    }
}

void func_ov103_02295d90(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov103_02295140(s);
        func_ov002_02200a58(s, 5);
    }
}

void func_ov103_02295db8(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov103_02295120(s);
    }
}

void func_ov103_02295dd8(S *s) {
    if (!func_ov002_022028f0(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_2aff);
        if (s->unk_2aff == 5) {
            func_ov103_0229566c(s, s->unk_2afc);
        }
        func_ov103_02296820(s);
    }
    func_ov103_02295454(s);
}

void func_ov103_02295e24(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02201aa0(s->unk_2270, s->unk_2b01, 1);
        s->unk_2b00 = s->unk_2569[s->unk_2b01];
        func_ov002_02200a58(s, 0x15);
    }
}
}

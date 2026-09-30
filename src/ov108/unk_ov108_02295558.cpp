#include "types.h"

struct Unk_ov108_02295558 {
    u8 pad_000[0x8c];
    u8 unk_08c;
    u8 pad_08d[0x9c - 0x8d];
    s32 unk_09c;
    s32 unk_0a0;
    s32 unk_0a4;
    s32 unk_0a8;
    u8 pad_0ac[0x1a0 - 0xac];
    u8 unk_1a0[0x294 - 0x1a0];
    u8 unk_294;
    u8 unk_295;
    u8 unk_296;
    u8 unk_297;
    u8 unk_298;
    u8 unk_299;
    u8 unk_29a;
    u8 unk_29b;
    u8 unk_29c;
    u8 unk_29d;
    u8 unk_29e;
    u8 pad_29f;
    u8 unk_2a0[0x2d8 - 0x2a0];
    u8 unk_2d8[0xd38 - 0x2d8];
    u8 unk_d38[0x2340 - 0xd38];
    u8 unk_2340[0x2400 - 0x2340];
    u8 unk_2400[0x2418 - 0x2400];
    u8 unk_2418[0x247c - 0x2418];
    u8 unk_247c[0x2775 - 0x247c];
    u8 unk_2775[0x277c - 0x2775];
    u8 unk_277c[0x2884 - 0x277c];
    u8 unk_2884[0x2900 - 0x2884];
};

typedef Unk_ov108_02295558 S;

namespace X {
extern "C" s32 func_ov108_02295780(void *s);
}

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;

extern "C" {
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_0206ed2c(u32 a);
void func_0206ecf8(u32 a);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
void func_0208d644(void *p);
void func_02065e70(void *p, void *q);
void func_020b87d0(void *p);
void func_0200402c(u32 a);

void func_ov094_022943a4(void *p, u32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 a);
void func_ov094_022935dc(void *p);
void func_ov094_022943f8(void *p);
s32 func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_022941ec(void *p, u32 a);
void func_ov094_02293318(void *p, u32 a, u32 b);
void func_ov094_022941f8(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);
void *func_ov094_0229433c(void *p, u32 a);
void func_ov094_02294318(void *p, u32 a, void *b);
u32 func_ov094_02294610(void *p);

void func_ov002_022030ac(void *p, u32 a);
void func_ov002_02200a58(void *p, u32 a);
void func_ov002_02200a60(void *p, u32 a);
void func_ov002_02200980(void *p);
void func_ov002_022006e4(void *p, u32 a);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, u32 c);
BOOL func_ov002_02202718(void *p);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_02204234(void *p, u32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_022017b4(void *p);
BOOL func_ov002_02201a28(void *p);
void func_ov002_02202064(void *p, u32 a);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_022028fc(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_02201aa0(void *p, u32 a, u32 b);

void func_ov108_02294d7c(S *s, u32 a);
void func_ov108_02294d8c(S *s, u32 a);
void func_ov108_02294fc8(S *s);
void func_ov108_02295094(S *s);
void func_ov108_022950b4(S *s);
void func_ov108_022950e8(S *s);
void func_ov108_02295254(S *s);
void func_ov108_022952d0(S *s);
void func_ov108_02295324(S *s, u32 a);
void func_ov108_02295364(S *s, u32 a);
void func_ov108_02295388(S *s, u32 a);
void func_ov108_022953d8(S *s);
void func_ov108_02295400(S *s);
void func_ov108_02295498(S *s);
void func_ov108_0229665c(S *s);

u32 func_ov108_0229581c(S *s, u32 b);
BOOL func_ov108_02295830(S *s, u32 b);
void func_ov108_022955f0(S *s);

void func_ov108_02295558(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        func_ov094_022943a4(s->unk_d38, func_ov108_0229581c(s, b));
    }
}

void func_ov108_02295588(S *s) {
    func_ov094_0229358c(s->unk_2d8);
    func_ov094_022943b0(s->unk_d38);
}

void func_ov108_022955ac(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        func_ov094_022943bc(s->unk_d38, func_ov108_0229581c(s, b));
        func_ov094_022935dc(s->unk_2d8);
    } else {
        func_ov108_022955f0(s);
    }
}

void func_ov108_022955f0(S *s) {
    func_ov094_022935dc(s->unk_2d8);
    func_ov094_022943f8(s->unk_d38);
}

s32 func_ov108_02295614(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        return func_ov094_02293d80(s->unk_d38, func_ov108_0229581c(s, b));
    }
    return 1;
}

s32 func_ov108_02295648(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        return func_ov094_022941ec(s->unk_d38, func_ov108_0229581c(s, b));
    }
    return 0;
}

void func_ov108_0229567c(S *s) {
    func_ov094_02293318(s->unk_2d8, 0, 0xe);
    func_ov094_022941f8(s->unk_d38, 3);
}

s32 func_ov108_022956a4(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        return func_ov094_02293d9c(s->unk_d38, func_ov108_0229581c(s, b)) - 0x10;
    }
    if (b == 0x15) {
        return 0xb6;
    }
    return 0;
}

s32 func_ov108_022956e0(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        return func_ov094_02293df8(s->unk_d38, func_ov108_0229581c(s, b));
    }
    if (b == 0x15) {
        return 0xbc;
    }
    return 0;
}

void *func_ov108_0229571c(S *s, u32 b) {
    if (func_ov108_02295830(s, b)) {
        return func_ov094_0229433c(s->unk_d38, func_ov108_0229581c(s, b));
    }
    return 0;
}

void func_ov108_02295750(S *s, u32 b, void *c) {
    if (func_ov108_02295830(s, b)) {
        func_ov094_02294318(s->unk_d38, func_ov108_0229581c(s, b), c);
    }
}

BOOL func_ov108_02295780(S *s, u32 b) {
    if (func_ov108_02295614(s, b) == 0) {
        func_02065e70(s->unk_1a0, func_ov108_0229571c(s, b));
        func_ov108_02295750(s, s->unk_297, s->unk_1a0);
    }
    func_ov108_02295364(s, b);
    return TRUE;
}

u32 func_ov108_0229580c(S *s, u32 b);

u32 func_ov108_022957cc(S *s, u32 a, u32 b, u32 c) {
    u32 r6 = func_ov094_02294610(s->unk_d38);
    if (r6 != 0x37) {
        if (c != 0) {
            if (func_ov094_02293d80(s->unk_d38, r6) != 0) {
                return 0x16;
            }
        }
        return func_ov108_0229580c(s, r6);
    }
    return 0x16;
}

u32 func_ov108_0229580c(S *s, u32 b) {
    if (b <= 9) {
        return (u8)(b + 0xb);
    }
    return 0x16;
}

u32 func_ov108_0229581c(S *s, u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return (u8)(b - 0xb);
    }
    return 0;
}

BOOL func_ov108_02295830(S *s, u32 b) {
    if (b >= 0xb && b <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

void func_ov108_02295840(S *s) {
    func_020b87d0(s->unk_2a0);
}

void func_ov108_02295850(S *s) {
    func_ov002_022030ac(s->unk_2884, 9);
    func_ov002_02200a58(s, 0x17);
    func_0200402c(0x28);
}

void func_ov108_02295878(S *s) {
    func_0206ed2c((u8)(s->unk_299 - 0xb));
    func_0206ecf8(1);
    s->unk_08c = 3;
    func_ov002_02200a60(s, 1);
    func_ov002_022006e4(s->unk_2340, 1);
    func_ov108_02295254(s);
}

void func_ov108_022958c0(S *s, u32 a, u32 c) {
    s->unk_297 = a;
    func_ov002_022026f4(s->unk_2400, s->unk_0a4, s->unk_0a8);
    s32 r7 = func_ov108_022956e0(s, a);
    s32 r2 = func_ov108_022956a4(s, a);
    func_ov002_022026c4(s->unk_2400, r7, r2, c);
    func_ov002_02202718(s->unk_2400);
    func_ov108_022953d8(s);
    func_ov002_02200a58(s, 0x12);
}

void func_ov108_02295928(S *s, u32 b) {
    s->unk_297 = b;
    func_ov002_022006e4(s->unk_2340, 1);
    func_ov108_02295388(s, b);
    if (s->unk_294 == 1) {
        s->unk_29b = 7;
    }
    func_ov108_02295400(s);
}

void func_ov108_02295974(S *s, u32 b) {
    s->unk_295 = b;
    func_ov002_02200a58(s, 1);
    u32 r6 = data_021ef5f0;
    u32 r7 = data_021ef5ec;
    s->unk_09c = func_ov108_022956e0(s, s->unk_295) - r6;
    s->unk_0a0 = func_ov108_022956a4(s, s->unk_295) - r7;
    s->unk_296 = b;
    func_ov002_022006b8(s->unk_2340);
    func_ov002_022006c0(s->unk_2340);
    s->unk_29e = 2;
    if (func_ov108_02295648(s, b)) {
        func_ov108_02294d7c(s, 4);
    } else {
        func_ov108_02294d8c(s, 4);
    }
}

void func_ov108_02295a2c(S *s);
void func_ov108_02295a68(S *s);

void func_ov108_02295a0c(S *s) {
    if (func_0206ef0c()) {
        func_ov108_02295a68(s);
    } else {
        func_ov108_02295a2c(s);
    }
}

void func_ov108_02295a2c(S *s) {
    s->unk_296 = 0x16;
    func_ov108_022952d0(s);
    func_ov002_02200980(s);
    func_ov108_02295498(s);
    func_ov002_02200a58(s, 6);
    func_ov108_022955ac(s, s->unk_298);
}

void func_ov108_02295a68(S *s) {
    func_ov108_02295254(s);
    func_ov108_022955f0(s);
    func_ov002_02200a58(s, 0);
}

void func_ov108_02295a84(S *s) {
    if (func_ov002_0220308c(s->unk_2884)) {
        if (func_0208d534(s->unk_2418)) {
            s32 r4 = func_ov002_0220306c(s->unk_2884);
            s32 r6 = func_ov002_022030f4(s->unk_2884, -1);
            s32 r2 = func_ov002_022030b8(s->unk_2884, -1);
            func_ov002_02202a40(s->unk_2418, r4 + r6, r4 + r2);
        }
    } else {
        func_0206ecf8(0);
        s->unk_08c = 3;
        func_ov002_02200a60(s, 1);
        func_ov002_022006e4(s->unk_2340, 1);
        func_ov108_02295254(s);
    }
}

void func_ov108_02295b0c(S *s) {
    if (func_ov002_02204234(s->unk_277c, 0)) {
        func_ov002_02200a58(s, s->unk_29b);
        func_0208d644(s->unk_2418);
    }
}

void func_ov108_02295b44(S *s) {
    if (func_ov002_022017a4(s->unk_247c)) {
        func_ov108_02294fc8(s);
    }
}

void func_ov108_02295b64(S *s) {
    if (func_ov002_02201a28(s->unk_247c)) {
        func_ov002_02202064(s->unk_247c, 0);
        func_ov002_022006e4(s->unk_2340, 1);
        if (func_0208d534(s->unk_2418)) {
            func_ov108_022950b4(s);
        }
        func_ov002_02200a58(s, 0x15);
    }
}

void func_ov108_02295bb4(S *s) {
    if (func_ov002_022017b4(s->unk_247c)) {
        if (func_0206ef00()) {
            func_ov108_022950e8(s);
            func_ov002_02200a58(s, 8);
        } else {
            func_ov002_02200a58(s, 5);
        }
    }
}

void func_ov108_02295bf0(S *s) {
    if (func_ov002_02202718(s->unk_2400)) {
        func_ov108_02295364(s, s->unk_297);
        func_ov108_02295a0c(s);
    } else {
        func_ov108_022953d8(s);
    }
}

void func_ov108_02295c28(S *s) {
    if (func_0208d4fc(s->unk_2418)) {
        func_ov002_02200a58(s, s->unk_29b);
    }
    if (func_ov002_02202928(s->unk_2418)) {
        func_ov108_02294d7c(s, 0x40);
        func_ov108_02295400(s);
    }
}

void func_ov108_02295c6c(S *s) {
    if (func_ov002_022028fc(s->unk_2418) == 0) {
        func_ov108_02295324(s, s->unk_29a);
        func_ov108_02294d8c(s, 0x40);
        func_ov002_02200a58(s, 0x11);
        func_ov108_02295498(s);
    } else {
        func_ov002_02200a58(s, 6);
    }
}

void func_ov108_02295cb4(S *s) {
    if (func_ov002_02202928(s->unk_2418) == 0) {
        u32 a = s->unk_29a;
        if (s->unk_298 == a) {
            X::func_ov108_02295780(s);
            func_ov108_02295498(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov108_022958c0(s, a, 4);
        }
    } else {
        func_ov108_02295400(s);
    }
}

void func_ov108_02295d08(S *s) {
    if (func_0208d4fc(s->unk_2418)) {
        func_ov002_02200a58(s, s->unk_29b);
    }
    func_ov108_02295400(s);
}

void func_ov108_02295d38(S *s) {
    if (func_ov002_02202928(s->unk_2418)) {
        func_ov108_02295928(s, s->unk_298);
        func_ov002_02200a58(s, 0xe);
    }
}

void func_ov108_02295d68(S *s) {
    if (func_0208d4fc(s->unk_2418)) {
        func_ov108_02295094(s);
        func_ov002_02200a58(s, 6);
    }
}

void func_ov108_02295d90(S *s) {
    if (func_0208d4fc(s->unk_2418)) {
        func_ov002_022030ac(s->unk_2884, 9);
        func_ov002_02200a58(s, 0x17);
    }
}

void func_ov108_02295dc0(S *s) {
    if (func_ov002_022028f0(s->unk_2418) == 0) {
        func_ov002_02200a58(s, s->unk_29b);
        if (s->unk_29b == 6) {
            func_ov108_022955ac(s, s->unk_298);
        }
        func_ov108_0229665c(s);
    }
    func_ov108_02295400(s);
}

void func_ov108_02295e0c(S *s) {
    if (func_0208d4fc(s->unk_2418)) {
        func_ov002_02201aa0(s->unk_247c, s->unk_29d, 1);
        s->unk_29c = s->unk_2775[s->unk_29d];
        func_ov002_02200a58(s, 0x14);
    }
}
}

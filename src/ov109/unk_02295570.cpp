#include "types.h"

struct Unk_ov109_02295570 {
    u8 pad_000[0x94];
    u8 unk_094[0x38];
    u8 unk_0cc[0x2134 - 0xcc];
    u8 unk_2134[0x220c - 0x2134];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2569 - 0x2270];
    u8 unk_2569[0x2570 - 0x2569];
    u8 unk_2570[0x2678 - 0x2570];
    u8 unk_2678[0x27e4 - 0x2678];
    s32 unk_27e4;
    s32 unk_27e8;
    u8 pad_27ec[0x27f8 - 0x27ec];
    u8 unk_27f8;
    u8 unk_27f9;
    u8 pad_27fa;
    u8 unk_27fb;
    u8 pad_27fc[2];
    u8 unk_27fe;
    u8 unk_27ff;
    u8 unk_2800;
    u8 unk_2801;
};

typedef Unk_ov109_02295570 S;

extern u8 data_021edb68;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];

extern "C" {
void func_020b87d0(void *p);
BOOL func_0206ef00();
BOOL func_0206ef0c();
s32 func_0206e61c();
s32 func_0208d644(void *p);
s32 func_0208d63c(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
void func_0200402c(s32 a);

BOOL func_ov094_0229311c(void *p, u32 v);
BOOL func_ov094_0229333c(void *p, u32 v);
void func_ov094_02293308(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
void func_ov094_0229238c();

void func_ov002_02204394(void *p, void *q, s32 a, s32 b);
void func_ov002_02200a58(void *self, s32 s);
s32 func_ov002_02200a14(void *self, s32 s);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_022006a4(void *p, s32 a);
s32 func_ov002_02200680(void *p);
void func_ov002_02200980(void *self);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_02201a28(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02202064(void *p, s32 x);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
s32 func_ov002_022030f4(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_02203110(void *p, s32 a);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
s32 func_ov002_022014c0(void *p, s32 a, s32 b);
void func_ov002_02202b68(void *p);
u32 func_ov002_022009d4(void *self);
u32 func_ov002_022009c8(void *self);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);

void func_ov109_02294ed8(S *s, u32 a, u32 b);
void func_ov109_02294f58(S *s);
void func_ov109_02294f8c(S *s);
void func_ov109_02294ff4(S *s);
void func_ov109_02295094(S *s);
void func_ov109_022950f8(S *s);
void func_ov109_02295118(S *s);
void func_ov109_02295138(S *s);
void func_ov109_0229516c(S *s);
void func_ov109_022951b8(S *s);
void func_ov109_0229521c(S *s);
void func_ov109_02295270(S *s);
void func_ov109_022952e8(S *s);
void func_ov109_02295364(S *s);
void func_ov109_022953f4(S *s);
void func_ov109_022954b0(S *s, u32 a);
void func_ov109_022954f0(S *s);
BOOL func_ov109_0229550c(S *s, u32 a);
u32 func_ov109_0229553c(S *s, u32 a);
void func_ov109_02296274(S *s);
BOOL func_ov109_02294d84(S *s, u32 a);

BOOL func_ov109_02295774(S *s, u32 a);
u32 func_ov109_02295758(S *s, u32 a);
u32 func_ov109_02295748(S *s, u32 a);
BOOL func_ov109_02295570(S *s, u32 a);
BOOL func_ov109_022955a0(S *s, u32 a);
s32 func_ov109_0229565c(S *s, u32 a);
s32 func_ov109_02295694(S *s, u32 a);
u32 func_ov109_0229570c(S *s, u32 a, u32 b, s32 c);
void func_ov109_0229585c(S *s);
void func_ov109_0229587c(S *s);
void func_ov109_022958b8(S *s);
void func_ov109_022957d0(S *s, u32 a);


static inline BOOL Unk_ov109_022955d0_Rng(volatile u16 *p, BOOL z) {
    BOOL r = z;
    u32 a = *p;
    u32 b = *p;
    if (b >= 0x1323 && a <= 0x1368) r = TRUE;
    return r;
}

void func_ov109_022955d0(S *s) {
    volatile u16 v = 0xfff1;
    u8 i;
    BOOL z = FALSE;
    for (i = 0; i <= 0xe; i++) {
        BOOL r = FALSE;
        if (!func_ov109_02295570(s, i)) {
            if (func_ov109_0229550c(s, i)) {
                r = TRUE;
            } else {
                v = func_ov109_0229553c(s, i);
                if (!Unk_ov109_022955d0_Rng(&v, z)) r = TRUE;
            }
        }
        if (r) {
            func_ov094_02293308(s->unk_0cc, func_ov109_02295758(s, i));
        }
    }
}

BOOL func_ov109_02295570(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_0229311c(s->unk_0cc, func_ov109_02295758(s, a));
    }
    return TRUE;
}

BOOL func_ov109_022955a0(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_0229333c(s->unk_0cc, func_ov109_02295758(s, a));
    }
    return FALSE;
}

s32 func_ov109_0229565c(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_02293610(s->unk_0cc, func_ov109_02295758(s, a)) - 0x10;
    } else if (a == 0xf) {
        return 0xb6;
    }
    return 0;
}

s32 func_ov109_02295694(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) {
        return func_ov094_02293624(s->unk_0cc, func_ov109_02295758(s, a));
    } else if (a == 0xf) {
        return 0xbc;
    }
    return 0;
}

void func_ov109_022956cc(S *s, u32 a, u32 b, u32 c) {
    if (func_ov109_02295774(s, a)) {
        u32 t = func_ov109_02295758(s, a);
        func_ov094_02293494(s->unk_0cc, t, b, c);
        func_ov094_02293434(s->unk_0cc, t);
    }
}

u32 func_ov109_0229570c(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_0cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0cc, t)) return 0x10;
        }
        return func_ov109_02295748(s, t);
    }
    return 0x10;
}

void func_ov109_02295780(S *s) {
    func_020b87d0(s->unk_094);
}

void func_ov109_0229578c(S *s, u32 a) {
    volatile u8 b = data_021edb68;
    b = a;
    func_ov002_02204394(s->unk_2570, (void *)&b, 1, 0);
    func_ov002_02200a58(s, 0xe);
    func_0208d63c(s->unk_220c);
}

void func_ov109_022957d0(S *s, u32 a) {
    u32 x, y;
    s->unk_27f8 = a;
    func_ov002_02200a58(s, 1);
    x = data_021ef5f0;
    y = data_021ef5ec;
    s->unk_27e4 = func_ov109_02295694(s, s->unk_27f8) - x;
    s->unk_27e8 = func_ov109_0229565c(s, s->unk_27f8) - y;
    s->unk_27f9 = a;
    func_ov002_022006b8(s->unk_2134);
    func_ov002_022006c0(s->unk_2134);
    s->unk_2801 = 2;
    if (!func_ov109_022955a0(s, a)) func_ov094_0229238c();
}

void func_ov109_0229585c(S *s) {
    if (func_0206ef0c()) {
        func_ov109_022958b8(s);
    } else {
        func_ov109_0229587c(s);
    }
}

void func_ov109_0229587c(S *s) {
    s->unk_27f9 = 0x10;
    func_ov109_02295364(s);
    func_ov002_02200980(s);
    func_ov109_022953f4(s);
    func_ov002_02200a58(s, 5);
    func_ov109_022954b0(s, s->unk_27fb);
}

void func_ov109_022958b8(S *s) {
    func_ov109_022952e8(s);
    func_ov109_022954f0(s);
    func_ov002_02200a58(s, 0);
}

void func_ov109_022958d4(S *s) {
    if (func_ov002_0220308c(s->unk_2678)) {
        if (func_0208d534(s->unk_220c)) {
            s32 t = func_ov002_0220306c(s->unk_2678);
            s32 u = func_ov002_022030f4(s->unk_2678, -1);
            s32 w = func_ov002_022030b8(s->unk_2678, -1);
            func_ov002_02202a40(s->unk_220c, t + u, t + w);
        }
    } else {
        func_ov109_02294f58(s);
    }
}

void func_ov109_02295938(S *s) {
    if (func_ov002_02204234(s->unk_2570, 1)) {
        func_ov109_0229585c(s);
        func_0208d644(s->unk_220c);
    }
}

void func_ov109_02295968(S *s) {
    if (func_ov002_022017a4(s->unk_2270)) {
        func_ov109_02295094(s);
    }
}

void func_ov109_02295988(S *s) {
    if (func_ov002_02201a28(s->unk_2270)) {
        func_ov002_02202064(s->unk_2270, 0);
        func_ov002_022006e4(s->unk_2134, 1);
        if (func_0208d534(s->unk_220c)) {
            func_ov109_02295138(s);
        }
        func_ov002_02200a58(s, 0xd);
    }
}

void func_ov109_022959d8(S *s) {
    if (func_ov002_022017b4(s->unk_2270)) {
        if (func_0206ef00()) {
            func_ov109_0229516c(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov002_02200a58(s, 4);
        }
    }
}

void func_ov109_02295a14(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov109_02295118(s);
        func_ov002_02200a58(s, 5);
    }
}

void func_ov109_02295a3c(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_022030ac(s->unk_2678, 9);
        func_ov002_02200a58(s, 0xf);
        func_0200402c(0x28);
    }
}

void func_ov109_02295a74(S *s) {
    if (!func_ov002_022028f0(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_27fe);
        if (s->unk_27fe == 5) {
            func_ov109_022954b0(s, s->unk_27fb);
        }
        func_ov109_02296274(s);
    }
}

void func_ov109_02295ab8(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02201aa0(s->unk_2270, s->unk_2800, 1);
        s->unk_27ff = s->unk_2569[s->unk_2800];
        func_ov002_02200a58(s, 0xc);
    }
}

void func_ov109_02295b08(S *s) {
    if (func_0206e61c()) {
        func_ov109_02294ff4(s);
    } else if (func_ov002_022009d4(s)) {
        func_ov109_02294ff4(s);
    } else if (func_ov002_022019d0(s->unk_2270, func_ov002_022009c8(s), &s->unk_2800, 0)) {
        func_ov109_0229521c(s);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) != 0) {
            func_ov002_02202b68(s->unk_220c);
            func_ov002_02200a58(s, 7);
        } else if ((k & 2) != 0) {
            func_ov109_022951b8(s);
        }
    }
}

void func_ov109_02295b94(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov109_022958b8(s);
        func_ov002_022006e4(s->unk_2134, 1);
    } else if (func_ov109_02294d84(s, func_ov002_022009c8(s))) {
        func_ov109_022953f4(s);
        func_ov109_02295270(s);
        func_ov002_022006e4(s->unk_2134, 0);
    } else if (!func_ov109_022955a0(s, s->unk_27fb) && (data_021f47d8[1] & 1) != 0) {
        if (func_ov109_02295774(s, s->unk_27fb)) {
            if (!func_ov109_02295570(s, s->unk_27fb)) {
                func_ov109_02294ed8(s, s->unk_27fb, 0);
            }
        } else if (s->unk_27fb == 0xf) {
            func_ov109_022950f8(s);
        }
    } else if ((data_021f47d8[1] & 2) != 0) {
        func_ov109_022952e8(s);
        func_ov109_02294f8c(s);
        func_ov002_022006e4(s->unk_2134, 0);
    } else {
        func_ov002_022006c0(s->unk_2134);
    }
}

static inline BOOL Unk_ov109_02295c70_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

void func_ov109_02295c70(S *s) {
    if (func_ov002_022017b4(s->unk_2270)) {
        if (func_0206e61c()) {
            func_ov109_02294ff4(s);
        } else if (func_ov002_02200a14(s, 1)) {
            func_ov109_02294ff4(s);
        } else if (Unk_ov109_02295c70_Both()) {
            s32 r = func_ov002_022014c0(s->unk_2270, data_021ef5f0, data_021ef5ec);
            if (r >= 0) {
                func_ov002_02201aa0(s->unk_2270, r, 1);
                s->unk_27ff = s->unk_2569[r];
                func_ov002_02200a58(s, 0xc);
            }
        }
    }
}

void func_ov109_02295d18(S *s) {
    if (func_ov002_02200680(s->unk_2134)) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            func_ov109_02294ed8(s, s->unk_27f8, 1);
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov109_02295d60(S *s) {
    if (func_0206e61c()) {
        func_ov002_02200a58(s, 4);
    } else if (data_021f4770 == 0) {
        func_ov002_02200a58(s, 4);
    }
}

void func_ov109_02295d90(S *s) {
    if (data_021f4770 == 0) {
        if (func_ov109_022955a0(s, s->unk_27f8)) {
            func_ov002_02200a58(s, 0);
            func_ov002_022006a4(s->unk_2134, 0x3c);
        } else {
            func_ov002_02200a58(s, 3);
            func_ov109_02296274(s);
        }
    } else if (!func_ov109_022955a0(s, s->unk_27f8) && func_ov002_02200680(s->unk_2134)) {
        u8 v = s->unk_2801;
        if (v != 0) {
            s->unk_2801 = v - 1;
        } else {
            func_ov109_02294ed8(s, s->unk_27f8, 1);
            func_ov002_02200a58(s, 2);
        }
    } else {
        func_ov002_022006c0(s->unk_2134);
    }
}

void func_ov109_02295e28(S *s) {
    if (func_ov002_02200a14(s, 1)) {
        func_ov109_0229587c(s);
    } else if (Unk_ov109_02295c70_Both()) {
        u32 r = func_ov109_0229570c(s, data_021ef5f0, data_021ef5ec + 0x10, 1);
        if (r != 0x10) {
            func_ov109_022957d0(s, r);
        } else if (func_ov002_02203110(s->unk_2678, 9)) {
            func_ov109_02294f8c(s);
        }
    }
}

u32 func_ov109_02295748(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x10;
}

u32 func_ov109_02295758(S *s, u32 a) {
    if (func_ov109_02295774(s, a)) return (u8)a;
    return 0;
}

BOOL func_ov109_02295774(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

}

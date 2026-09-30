#include "types.h"

struct Unk_ov100_02295e98 {
    u8 pad_000[0x8c];
    u8 unk_08c;
    u8 pad_08d[7];
    u8 unk_094[0x38];
    u8 unk_0cc[0xb2c - 0xcc];
    u8 unk_b2c[0x2134 - 0xb2c];
    u8 unk_2134[0x21f4 - 0x2134];
    u8 unk_21f4[0x220c - 0x21f4];
    u8 unk_220c[0x2270 - 0x220c];
    u8 unk_2270[0x2570 - 0x2270];
    u8 unk_2570[0x2704 - 0x2570];
    s32 unk_2704;
    s32 unk_2708;
    s32 unk_270c;
    s32 unk_2710;
    u16 unk_2714[0x0f];
    u8 pad_2732[0x2755 - 0x2732];
    u8 unk_2755;
    u8 unk_2756;
    u8 unk_2757;
    u8 unk_2758;
    u8 unk_2759;
    u8 unk_275a;
    u8 unk_275b;
    u8 unk_275c;
    u8 unk_275d;
    u8 unk_275e;
    u8 unk_275f;
    u8 unk_2760;
};

typedef Unk_ov100_02295e98 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u16 data_021f47d8[];

extern "C" {
void func_020b87d0(void *p);
BOOL func_0206ef00();
BOOL func_0206ef0c();
s32 func_0208d644(void *p);
s32 func_0208d534(void *p);
s32 func_0208d4fc(void *p);
s32 func_02098ffc();

BOOL func_ov094_0229311c(void *p, u32 v);
s32 func_ov094_02293610(void *p, u32 v);
s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
u32 func_ov094_02293938(void *p, u32 a, u32 b);
void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();

s32 func_ov002_022026f4(void *p, s32 a, s32 b);
void func_ov002_022026c4(void *p, s32 a, s32 b, s32 c);
BOOL func_ov002_02202718(void *p);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_02200a60(void *self, s32 s);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_022006b8(void *p);
void func_ov002_022006c0(void *p);
void func_ov002_02200980(void *self);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_022017a4(void *p);
BOOL func_ov002_02201a28(void *p);
BOOL func_ov002_022017b4(void *p);
void func_ov002_02202064(void *p, s32 x);
BOOL func_ov002_02202928(void *p);
BOOL func_ov002_022028fc(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02202b68(void *p);
u32 func_ov002_022009d4(void *self);
u32 func_ov002_022009c8(void *self);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, s32 b);
void func_ov002_02200980(void *self);

void func_ov100_02294d60(S *s, u32 v);
void func_ov100_02294d70(S *s, u32 v);
BOOL func_ov100_02294d80(S *s, u32 v);
void func_ov100_02294e80(S *s);
void func_ov100_02294fac(S *s);
BOOL func_ov100_022950cc(S *s, u32 a, u32 b);
void func_ov100_02295400(S *s);
void func_ov100_02295430(S *s);
void func_ov100_02295454(S *s, u32 v);
void func_ov100_022954a0(S *s, u32 v);
void func_ov100_022954dc(S *s);
void func_ov100_022954fc(S *s);
void func_ov100_0229553c(S *s);
void func_ov100_0229555c(S *s);
void func_ov100_02295590(S *s);
void func_ov100_022955dc(S *s);
void func_ov100_02295640(S *s);
void func_ov100_02295694(S *s);
void func_ov100_022956fc(S *s);
void func_ov100_02295778(S *s);
void func_ov100_022957d0(S *s, u32 v);
void func_ov100_0229580c(S *s, u32 v);
void func_ov100_0229583c(S *s, u32 v);
void func_ov100_022958b4(S *s);
void func_ov100_022958e4(S *s);
void func_ov100_02295918(S *s);
void func_ov100_0229598c(S *s);
void func_ov100_02295b28(S *s, u32 v);
void func_ov100_02295b80(S *s);
u32 func_ov100_02295b9c(S *s, u32 v);
u32 func_ov100_02295bd8(S *s, u32 v);
BOOL func_ov100_02295c18(S *s, u32 v);
BOOL func_ov100_02295c54(S *s, u32 v);
void func_ov100_0229728c(S *s);

u32 func_ov100_02295e98(S *s, u32 a);
u32 func_ov100_02295eec(S *s, u32 a);
u32 func_ov100_02295f38(S *s, u32 a);
u32 func_ov100_02295f4c(S *s, u32 a);
void func_ov100_02295f68(S *s, u32 a, u32 b, u32 c);
BOOL func_ov100_02295fb4(S *s, u32 a);
u32 func_ov100_02296010(S *s, u32 a, u32 b, s32 c);
u32 func_ov100_02296084(S *s, u32 a);
u32 func_ov100_02296094(S *s, u32 a);
BOOL func_ov100_022960cc(S *s, u32 a);
BOOL func_ov100_022960e0(S *s, u32 a);
BOOL func_ov100_022960f0(S *s, u32 a);
u32 func_ov100_02296108(S *s);
u32 func_ov100_0229613c(S *s);
void func_ov100_0229615c(S *s, u32 a, u32 b);
void func_ov100_02296198(S *s, u32 a, s32 b);
void func_ov100_022961dc(S *s, u32 a, u32 b);
void func_ov100_02296248(S *s, u32 a);
void func_ov100_02296298(S *s, u32 a);
void func_ov100_022962e4(S *s, u32 a);
void func_ov100_02296370(S *s);
void func_ov100_02296390(S *s);
void func_ov100_022963cc(S *s);

u32 func_ov100_02295e98(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293610(s->unk_0cc, func_ov100_02296094(s, a));
    }
    if (func_ov100_022960cc(s, a)) {
        if (a == 0x1e) return 0x58;
        return 0x68;
    }
    return 0;
}

u32 func_ov100_02295eec(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        return func_ov094_02293624(s->unk_0cc, func_ov100_02296094(s, a));
    }
    if (func_ov100_022960cc(s, a)) return 0xc4;
    return 0;
}

u32 func_ov100_02295f38(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x20;
}

u32 func_ov100_02295f4c(S *s, u32 a) {
    if (func_ov100_022960e0(s, a)) return (u8)a;
    return 0xf;
}

void func_ov100_02295f68(S *s, u32 a, u32 b, u32 c) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02296094(s, a);
        func_ov094_02293494(s->unk_0cc, t, b, c);
        func_ov094_02293434(s->unk_0cc, t);
    }
}

BOOL func_ov100_02295fb4(S *s, u32 a) {
    if (func_ov100_022960f0(s, a) || func_ov100_022960e0(s, a)) {
        u32 t = func_ov100_02295bd8(s, a);
        if (t != 0xfff1) {
            func_ov100_02295f68(s, s->unk_2758, t, func_ov100_02295b9c(s, a));
        }
        func_ov100_0229580c(s, a);
        return TRUE;
    }
    return FALSE;
}

u32 func_ov100_02296010(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_0cc);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0cc, t)) return 0x20;
        }
        return func_ov100_02296084(s, t);
    }
    t = func_ov094_02293938(s->unk_0cc, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_0cc, t)) return 0x20;
        }
        return func_ov100_02295f38(s, t);
    }
    return 0x20;
}

u32 func_ov100_02296084(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x20;
}

u32 func_ov100_02296094(S *s, u32 a) {
    if (func_ov100_022960f0(s, a)) return (u8)a;
    if (func_ov100_022960e0(s, a)) return func_ov100_02295f4c(s, a);
    return 0;
}

BOOL func_ov100_022960cc(S *s, u32 a) {
    if ((u8)(a + 0xe2) <= 1) return TRUE;
    return FALSE;
}

BOOL func_ov100_022960e0(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

BOOL func_ov100_022960f0(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

void func_ov100_022960fc(S *s) {
    func_020b87d0(s->unk_094);
}

void func_ov100_0229615c(S *s, u32 a, u32 b) {
    func_ov100_0229583c(s, a);
    s->unk_270c = func_ov100_02295eec(s, a);
    s->unk_2710 = func_ov100_02295e98(s, a);
    func_ov100_022961dc(s, b, 4);
}

void func_ov100_02296198(S *s, u32 a, s32 b) {
    u32 r = 0x20;
    if (b >= 0x6c) {
        if (func_ov100_022960e0(s, a)) r = func_ov100_0229613c(s);
    } else {
        if (func_ov100_022960f0(s, a)) r = func_ov100_02296108(s);
    }
    if (r != 0x20) a = r;
    func_ov100_022961dc(s, a, 4);
}

void func_ov100_022961dc(S *s, u32 a, u32 b) {
    s->unk_2758 = a;
    func_ov002_022026f4(s->unk_21f4, s->unk_270c, s->unk_2710);
    u32 x = func_ov100_02295eec(s, a);
    u32 y = func_ov100_02295e98(s, a);
    func_ov002_022026c4(s->unk_21f4, x, y, b);
    func_ov002_02202718(s->unk_21f4);
    func_ov100_022958b4(s);
    func_ov002_02200a58(s, 0x10);
}

void func_ov100_02296248(S *s, u32 a) {
    s->unk_2758 = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov100_0229583c(s, a);
    if (s->unk_2755 == 1) {
        s->unk_275c = 5;
    }
    func_ov100_022958e4(s);
    func_ov094_02292380();
}

void func_ov100_02296298(S *s, u32 a) {
    s->unk_2758 = a;
    func_ov002_022006e4(s->unk_2134, 1);
    func_ov100_0229583c(s, a);
    if (s->unk_2755 == 1) {
        func_ov002_02200a58(s, 3);
    }
    func_ov100_02295918(s);
    func_ov094_02292380();
}

void func_ov100_022962e4(S *s, u32 a) {
    u32 r6, r7;
    s->unk_2756 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_2704 = func_ov100_02295eec(s, s->unk_2756) - r6;
    s->unk_2708 = func_ov100_02295e98(s, s->unk_2756) - r7;
    s->unk_2757 = a;
    func_ov002_022006b8(s->unk_2134);
    if (func_ov100_02295c54(s, a)) {
        func_ov100_02294d60(s, 4);
    } else {
        func_ov100_02294d70(s, 4);
        func_ov094_0229238c();
    }
}

void func_ov100_02296370(S *s) {
    if (func_0206ef0c()) {
        func_ov100_022963cc(s);
    } else {
        func_ov100_02296390(s);
    }
}

void func_ov100_02296390(S *s) {
    s->unk_2757 = 0x20;
    func_ov100_02295778(s);
    func_ov002_02200980(s);
    func_ov100_0229598c(s);
    func_ov002_02200a58(s, 4);
    func_ov100_02295b28(s, s->unk_2759);
}

void func_ov100_022963cc(S *s) {
    func_ov100_022956fc(s);
    func_ov100_02295b80(s);
    func_ov002_02200a58(s, 0);
}

void func_ov100_022963e8(S *s) {
    if (s->unk_2760 != 0) {
        s->unk_2760--;
    } else {
        s->unk_08c = 4;
        func_ov002_02200a60(s, 1);
        func_ov002_022006e4(s->unk_2134, 0);
        func_ov100_022956fc(s);
    }
}

void func_ov100_02296428(S *s) {
    if (func_ov002_02204234(s->unk_2570, 0)) {
        func_ov002_02200a58(s, s->unk_275c);
        func_0208d644(s->unk_220c);
    }
}

void func_ov100_02296460(S *s) {
    if (func_ov002_022017a4(s->unk_2270)) {
        func_ov100_02295430(s);
    }
}

void func_ov100_02296480(S *s) {
    if (func_ov002_02201a28(s->unk_2270)) {
        func_ov002_02202064(s->unk_2270, 0);
        if (func_0208d534(s->unk_220c)) {
            func_ov100_0229555c(s);
        }
        func_ov002_02200a58(s, 0x13);
    }
}

void func_ov100_022964c4(S *s) {
    if (func_ov002_022017b4(s->unk_2270)) {
        if (func_0206ef00()) {
            func_ov100_02295590(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov100_02296500(S *s) {
    if (func_ov002_02202718(s->unk_21f4)) {
        func_ov100_0229580c(s, s->unk_2758);
        func_ov100_02296370(s);
        func_ov094_02292398();
    } else {
        func_ov100_022958b4(s);
    }
}

void func_ov100_0229653c(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_275c);
    }
    if (func_ov002_02202928(s->unk_220c)) {
        if (func_ov100_02294d80(s, 0x40)) {
            func_ov100_02294d60(s, 0x40);
            func_ov094_02292380();
        }
        func_ov100_022958e4(s);
    }
}

void func_ov100_02296590(S *s) {
    if (!func_ov002_022028fc(s->unk_220c)) {
        func_ov100_022957d0(s, s->unk_275b);
        func_ov100_02294d70(s, 0x40);
        func_ov002_02200a58(s, 0xf);
        func_ov100_0229598c(s);
    } else {
        func_ov002_02200a58(s, 4);
    }
}

void func_ov100_022965d8(S *s) {
    if (!func_ov002_02202928(s->unk_220c)) {
        u32 a = s->unk_275b;
        if (s->unk_2759 == a) {
            func_ov100_02295fb4(s, a);
            func_ov100_0229598c(s);
            func_ov002_02200a58(s, 4);
            func_ov094_02292398();
        } else {
            func_ov100_022961dc(s, a, 4);
        }
    } else {
        func_ov100_022958e4(s);
    }
}

void func_ov100_02296630(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_275c);
    }
    func_ov100_022958e4(s);
}

void func_ov100_02296660(S *s) {
    if (func_ov002_02202928(s->unk_220c)) {
        func_ov100_02296248(s, s->unk_2759);
        func_ov002_02200a58(s, 0xc);
    }
}

void func_ov100_02296690(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov100_0229553c(s);
        func_ov002_02200a58(s, 4);
    }
}

void func_ov100_022966b8(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        u32 t = s->unk_2759;
        if (t == 0x1e) {
            func_ov100_02294e80(s);
        } else if (t == 0x1f) {
            func_ov100_02294fac(s);
        } else {
            func_ov100_022954fc(s);
        }
    }
}

void func_ov100_022966f8(S *s) {
    if (!func_ov002_022028f0(s->unk_220c)) {
        func_ov002_02200a58(s, s->unk_275c);
        if ((u8)(s->unk_275c + 0xfc) <= 1) {
            func_ov100_02295b28(s, s->unk_2759);
        }
        func_ov100_0229728c(s);
    }
    func_ov100_022958e4(s);
}

void func_ov100_02296748(S *s) {
    if (func_0208d4fc(s->unk_220c)) {
        func_ov002_02201aa0(s->unk_2270, s->unk_275e, 1);
        s->unk_275d = *(u8 *)((u8 *)s + s->unk_275e + 0x2569);
        func_ov002_02200a58(s, 0x12);
    }
}

void func_ov100_02296798(S *s) {
    if (func_ov002_022009d4(s)) {
        func_ov100_02295400(s);
    } else if (func_ov002_022019d0(s->unk_2270, func_ov002_022009c8(s), &s->unk_275e, 0)) {
        func_ov100_02295640(s);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) != 0) {
            func_ov002_02202b68(s->unk_220c);
            func_ov002_02200a58(s, 7);
        } else if ((k & 2) != 0) {
            func_ov100_022955dc(s);
        }
    }
}
u32 func_ov100_02296108(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->unk_2714[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x20;
}

u32 func_ov100_0229613c(S *s) {
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) return 0x20;
    return (u8)t;
}

}

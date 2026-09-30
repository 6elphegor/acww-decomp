#include "types.h"

struct Unk_ov110_02295e98 {
    u8 pad_000[0x8c];
    u8 unk_08c;
    u8 pad_08d[0xa0 - 0x8d];
    s32 unk_0a0;
    s32 unk_0a4;
    s32 unk_0a8;
    s32 unk_0ac;
    u16 unk_0b0[0x0f];
    u8 pad_0ce[0xf1 - 0xce];
    u8 unk_0f1;
    u8 unk_0f2;
    u8 unk_0f3;
    u8 unk_0f4;
    u8 unk_0f5;
    u8 unk_0f6;
    u8 unk_0f7;
    u8 unk_0f8;
    u8 unk_0f9;
    u8 unk_0fa;
    u8 unk_0fb;
    u8 unk_0fc;
    u8 pad_0fd[0x100 - 0xfd];
    u8 unk_100[0x138 - 0x100];
    u8 unk_138[0x21a0 - 0x138];
    u8 unk_21a0[0x2260 - 0x21a0];
    u8 unk_2260[0x2278 - 0x2260];
    u8 unk_2278[0x22dc - 0x2278];
    u8 unk_22dc[0x25d5 - 0x22dc];
    u8 unk_25d5[7];
    u8 unk_25dc[0x2600 - 0x25dc];
};

typedef Unk_ov110_02295e98 S;

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

s32 func_ov094_02293624(void *p, u32 v);
void func_ov094_02293494(void *p, u32 a, u32 b, u32 c);
void func_ov094_02293434(void *p, u32 a);
u32 func_ov094_02293968(void *p);
u32 func_ov094_02293938(void *p, u32 a, u32 b);
BOOL func_ov094_0229311c(void *p, u32 v);
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

u32 func_ov110_02295e48(S *s, u32 a);
BOOL func_ov110_02295060(S *s, u32 a, u32 b);
void func_ov110_022953b4(S *s);
void func_ov110_022953e0(S *s);
void func_ov110_02295404(S *s, u32 v);
void func_ov110_0229544c(S *s, u32 v);
void func_ov110_022954a8(S *s);
void func_ov110_022954e8(S *s);
void func_ov110_02295508(S *s);
void func_ov110_0229553c(S *s);
void func_ov110_02295588(S *s);
void func_ov110_022955e8(S *s);
void func_ov110_02295638(S *s);
void func_ov110_022956a0(S *s);
void func_ov110_02295718(S *s);
void func_ov110_02295770(S *s, u32 v);
void func_ov110_022957a8(S *s, u32 v);
void func_ov110_022957d4(S *s, u32 v);
void func_ov110_0229584c(S *s);
void func_ov110_02295874(S *s);
void func_ov110_022958a0(S *s);
void func_ov110_02295904(S *s);
void func_ov110_02295ab8(S *s, u32 v);
void func_ov110_02295b14(S *s);
u32 func_ov110_02295b38(S *s, u32 v);
u32 func_ov110_02295b78(S *s, u32 v);
BOOL func_ov110_02295bbc(S *s, u32 v);
BOOL func_ov110_02295bfc(S *s, u32 v);
void func_ov110_02294d68(S *s, u32 v);
void func_ov110_02294d78(S *s, u32 v);
BOOL func_ov110_02294d88(S *s, u32 v);
void func_ov110_02294e78(S *s, u32 v);
BOOL func_ov110_0229726c(S *s);
void func_ov110_0229728c(S *s);

u32 func_ov110_02295e98(S *s, u32 a);
u32 func_ov110_02295ee8(S *s, u32 a);
u32 func_ov110_02295efc(S *s, u32 a);
void func_ov110_02295f18(S *s, u32 a, u32 b, u32 c);
BOOL func_ov110_02295f68(S *s, u32 a);
u32 func_ov110_02295fc4(S *s, u32 a, u32 b, s32 c);
u32 func_ov110_02296040(S *s, u32 a);
u32 func_ov110_02296050(S *s, u32 a);
BOOL func_ov110_02296088(S *s, u32 a);
BOOL func_ov110_02296094(S *s, u32 a);
BOOL func_ov110_022960a4(S *s, u32 a);
u32 func_ov110_022960c0(S *s);
u32 func_ov110_022960e8(S *s);
void func_ov110_02296184(S *s, u32 a, u32 b);
void func_ov110_022961e8(S *s, u32 a);
void func_ov110_02296300(S *s);
void func_ov110_02296320(S *s);
void func_ov110_02296354(S *s);

u32 func_ov110_02295e98(S *s, u32 a) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        return func_ov094_02293624(s->unk_138, func_ov110_02296050(s, a));
    }
    if (func_ov110_02296088(s, a)) return 0xc4;
    return 0;
}

u32 func_ov110_02295ee8(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return (u8)a;
    return 0x1f;
}

u32 func_ov110_02295efc(S *s, u32 a) {
    if (func_ov110_02296094(s, a)) return (u8)a;
    return 0xf;
}

void func_ov110_02295f18(S *s, u32 a, u32 b, u32 c) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02296050(s, a);
        func_ov094_02293494(s->unk_138, t, b, c);
        func_ov094_02293434(s->unk_138, t);
    }
}

BOOL func_ov110_02295f68(S *s, u32 a) {
    if (func_ov110_022960a4(s, a) || func_ov110_02296094(s, a)) {
        u32 t = func_ov110_02295b78(s, a);
        if (t != 0xfff1) {
            func_ov110_02295f18(s, s->unk_0f4, t, func_ov110_02295b38(s, a));
        }
        func_ov110_022957a8(s, a);
        return TRUE;
    }
    return FALSE;
}

u32 func_ov110_02295fc4(S *s, u32 a, u32 b, s32 c) {
    u32 t = func_ov094_02293968(s->unk_138);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_138, t)) return 0x1f;
        }
        return func_ov110_02296040(s, t);
    }
    t = func_ov094_02293938(s->unk_138, a, b);
    if (t != 0x23) {
        if (c != 0) {
            if (func_ov094_0229311c(s->unk_138, t)) return 0x1f;
        }
        return func_ov110_02295ee8(s, t);
    }
    return 0x1f;
}

u32 func_ov110_02296040(S *s, u32 a) {
    if (a <= 0xe) return (u8)a;
    return 0x1f;
}

u32 func_ov110_02296050(S *s, u32 a) {
    if (func_ov110_022960a4(s, a)) return (u8)a;
    if (func_ov110_02296094(s, a)) return func_ov110_02295efc(s, a);
    return 0;
}

BOOL func_ov110_02296088(S *s, u32 a) {
    if (a == 0x1e) return TRUE;
    return FALSE;
}

BOOL func_ov110_02296094(S *s, u32 a) {
    if (a >= 0xf && a <= 0x1d) return TRUE;
    return FALSE;
}

BOOL func_ov110_022960a4(S *s, u32 a) {
    if (a <= 0xe) return TRUE;
    return FALSE;
}

void func_ov110_022960b0(S *s) {
    func_020b87d0(s->unk_100);
}

u32 func_ov110_022960c0(S *s) {
    s32 i;
    for (i = 0; i < 0xf; i++) {
        if (s->unk_0b0[i] == 0xfff1) return (u8)(i + 0xf);
    }
    return 0x1f;
}

u32 func_ov110_022960e8(S *s) {
    s32 t = func_02098ffc();
    s32 m = -1;
    if (t == m) return 0x1f;
    return (u8)t;
}

void func_ov110_02296108(S *s, u32 a, u32 b) {
    func_ov110_022957d4(s, a);
    s->unk_0a8 = func_ov110_02295e98(s, a);
    s->unk_0ac = func_ov110_02295e48(s, a);
    func_ov110_02296184(s, b, 4);
}

void func_ov110_02296140(S *s, u32 a, s32 b) {
    u32 r = 0x1f;
    if (b >= 0x6c) {
        if (func_ov110_02296094(s, a)) r = func_ov110_022960e8(s);
    } else {
        if (func_ov110_022960a4(s, a)) r = func_ov110_022960c0(s);
    }
    if (r != 0x1f) a = r;
    func_ov110_02296184(s, a, 4);
}

void func_ov110_02296184(S *s, u32 a, u32 b) {
    s->unk_0f4 = a;
    func_ov002_022026f4(s->unk_2260, s->unk_0a8, s->unk_0ac);
    u32 x = func_ov110_02295e98(s, a);
    u32 y = func_ov110_02295e48(s, a);
    func_ov002_022026c4(s->unk_2260, x, y, b);
    func_ov002_02202718(s->unk_2260);
    func_ov110_0229584c(s);
    func_ov002_02200a58(s, 0x10);
}

void func_ov110_022961e8(S *s, u32 a) {
    s->unk_0f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    func_ov110_022957d4(s, a);
    if (s->unk_0f1 == 1) {
        s->unk_0f8 = 5;
    }
    func_ov110_02295874(s);
    func_ov094_02292380();
}

void func_ov110_02296230(S *s, u32 a) {
    s->unk_0f4 = a;
    func_ov002_022006e4(s->unk_21a0, 1);
    func_ov110_022957d4(s, a);
    if (s->unk_0f1 == 1) {
        func_ov002_02200a58(s, 3);
    }
    func_ov110_022958a0(s);
    func_ov094_02292380();
}

void func_ov110_02296278(S *s, u32 a) {
    u32 r6, r7;
    s->unk_0f2 = a;
    func_ov002_02200a58(s, 1);
    r6 = data_021ef5f0;
    r7 = data_021ef5ec;
    s->unk_0a0 = func_ov110_02295e98(s, s->unk_0f2) - r6;
    s->unk_0a4 = func_ov110_02295e48(s, s->unk_0f2) - r7;
    s->unk_0f3 = a;
    func_ov002_022006b8(s->unk_21a0);
    if (func_ov110_02295bfc(s, a)) {
        func_ov110_02294d68(s, 4);
    } else {
        func_ov110_02294d78(s, 4);
        func_ov094_0229238c();
    }
}

void func_ov110_02296300(S *s) {
    if (func_0206ef0c()) {
        func_ov110_02296354(s);
    } else {
        func_ov110_02296320(s);
    }
}

void func_ov110_02296320(S *s) {
    s->unk_0f3 = 0x1f;
    func_ov110_02295718(s);
    func_ov002_02200980(s);
    func_ov110_02295904(s);
    func_ov002_02200a58(s, 4);
    func_ov110_02295ab8(s, s->unk_0f5);
}

void func_ov110_02296354(S *s) {
    func_ov110_022956a0(s);
    func_ov110_02295b14(s);
    func_ov002_02200a58(s, 0);
}

void func_ov110_02296370(S *s) {
    if (s->unk_0fc != 0) {
        s->unk_0fc--;
    } else {
        s->unk_08c = 4;
        func_ov002_02200a60(s, 1);
        func_ov002_022006e4(s->unk_21a0, 0);
        func_ov110_022956a0(s);
    }
}

void func_ov110_022963b4(S *s) {
    if (func_ov002_02204234(s->unk_25dc, 1)) {
        func_ov002_02200a58(s, s->unk_0f8);
        func_0208d644(s->unk_2278);
    }
}

void func_ov110_022963e8(S *s) {
    if (func_ov002_022017a4(s->unk_22dc)) {
        func_ov110_022953e0(s);
    }
}

void func_ov110_02296408(S *s) {
    if (func_ov002_02201a28(s->unk_22dc)) {
        func_ov002_02202064(s->unk_22dc, 0);
        if (func_0208d534(s->unk_2278)) {
            func_ov110_02295508(s);
        }
        func_ov002_02200a58(s, 0x13);
    }
}

void func_ov110_0229644c(S *s) {
    if (func_ov002_022017b4(s->unk_22dc)) {
        if (func_0206ef00()) {
            func_ov110_0229553c(s);
            func_ov002_02200a58(s, 6);
        } else {
            func_ov002_02200a58(s, 2);
        }
    }
}

void func_ov110_02296488(S *s) {
    if (func_ov002_02202718(s->unk_2260)) {
        func_ov110_022957a8(s, s->unk_0f4);
        func_ov110_02296300(s);
        func_ov094_02292398();
    } else {
        func_ov110_0229584c(s);
    }
}

void func_ov110_022964c0(S *s) {
    if (func_0208d4fc(s->unk_2278)) {
        func_ov002_02200a58(s, s->unk_0f8);
    }
    if (func_ov002_02202928(s->unk_2278)) {
        if (func_ov110_02294d88(s, 0x40)) {
            func_ov110_02294d68(s, 0x40);
            func_ov094_02292380();
        }
        func_ov110_02295874(s);
    }
}

void func_ov110_02296510(S *s) {
    if (!func_ov002_022028fc(s->unk_2278)) {
        func_ov110_02295770(s, s->unk_0f7);
        func_ov110_02294d78(s, 0x40);
        func_ov002_02200a58(s, 0xf);
        func_ov110_02295904(s);
    } else {
        func_ov002_02200a58(s, 4);
    }
}

void func_ov110_02296558(S *s) {
    if (!func_ov002_02202928(s->unk_2278)) {
        u32 a = s->unk_0f7;
        if (s->unk_0f5 == a) {
            func_ov110_02295f68(s, a);
            func_ov110_02295904(s);
            func_ov002_02200a58(s, 4);
            func_ov094_02292398();
        } else {
            func_ov110_02296184(s, a, 4);
        }
    } else {
        func_ov110_02295874(s);
    }
}

void func_ov110_022965ac(S *s) {
    if (func_0208d4fc(s->unk_2278)) {
        func_ov002_02200a58(s, s->unk_0f8);
    }
    func_ov110_02295874(s);
}

void func_ov110_022965d8(S *s) {
    if (func_ov002_02202928(s->unk_2278)) {
        func_ov110_022961e8(s, s->unk_0f5);
        func_ov002_02200a58(s, 0xc);
    }
}

void func_ov110_02296608(S *s) {
    if (func_0208d4fc(s->unk_2278)) {
        func_ov110_022954e8(s);
        func_ov002_02200a58(s, 4);
    }
}

void func_ov110_02296630(S *s) {
    if (func_0208d4fc(s->unk_2278)) {
        u32 t = s->unk_0f5;
        if (t == 0x1e) {
            func_ov110_02294e78(s, 1);
        } else {
            func_ov110_022954a8(s);
        }
    }
}

void func_ov110_02296664(S *s) {
    if (!func_ov002_022028f0(s->unk_2278)) {
        func_ov002_02200a58(s, s->unk_0f8);
        if ((u8)(s->unk_0f8 + 0xfc) <= 1) {
            func_ov110_02295ab8(s, s->unk_0f5);
        }
        func_ov110_0229728c(s);
    }
    func_ov110_02295874(s);
}

void func_ov110_022966b4(S *s) {
    if (func_0208d4fc(s->unk_2278)) {
        func_ov002_02201aa0(s->unk_22dc, s->unk_0fa, 1);
        s->unk_0f9 = *(u8 *)((u8 *)s + s->unk_0fa + 0x25d5);
        func_ov002_02200a58(s, 0x12);
    }
}

void func_ov110_02296700(S *s) {
    if (func_ov002_022009d4(s) || func_ov110_0229726c(s)) {
        func_ov110_022953b4(s);
    } else if (func_ov002_022019d0(s->unk_22dc, func_ov002_022009c8(s), &s->unk_0fa, 0)) {
        func_ov110_022955e8(s);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) != 0) {
            func_ov002_02202b68(s->unk_2278);
            func_ov002_02200a58(s, 7);
        } else if ((k & 2) != 0) {
            func_ov110_02295588(s);
        }
    }
}

void func_ov110_02296780(S *s) {
    if (func_ov110_0229726c(s)) {
        func_ov110_022957a8(s, s->unk_0f4);
        func_ov110_022956a0(s);
        func_ov002_022006e4(s->unk_21a0, 0);
        func_ov110_02294e78(s, 0);
    } else if (func_ov110_02295060(s, func_ov002_022009c8(s), 1)) {
        func_ov110_02295904(s);
        func_ov110_02295638(s);
        func_ov002_022006e4(s->unk_21a0, 0);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) != 0) {
            if (func_ov110_022960a4(s, s->unk_0f5) || func_ov110_02296094(s, s->unk_0f5)) {
                if (!func_ov110_02295bfc(s, s->unk_0f5)) {
                    if (func_ov110_02295bbc(s, s->unk_0f5)) {
                        func_ov110_0229544c(s, s->unk_0f5);
                    } else {
                        func_ov110_02295404(s, s->unk_0f5);
                    }
                }
            }
        } else if ((k & 2) != 0) {
            func_ov110_0229544c(s, s->unk_0f4);
        } else {
            func_ov110_02295874(s);
            func_ov002_022006c0(s->unk_21a0);
        }
    }
}
}

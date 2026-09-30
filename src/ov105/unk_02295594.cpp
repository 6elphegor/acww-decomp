#include "types.h"

struct Unk_ov105_02295594_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov105_02295594 {
    u8 pad_000[0x8d];
    u8 unk_08d;
    u8 pad_08e[0xa4 - 0x8e];
    s32 unk_0a4;
    s32 unk_0a8;
    s32 unk_0ac;
    s32 unk_0b0;
    u8 unk_0b4[0x1a8 - 0xb4];
    u8 unk_1a8[0x29c - 0x1a8];
    u8 unk_29c;
    u8 pad_29d;
    u8 unk_29e;
    u8 pad_29f[0x2a2 - 0x29f];
    u8 unk_2a2;
    u8 unk_2a3;
    u8 unk_2a4;
    u8 unk_2a5;
    u8 unk_2a6;
    u8 unk_2a7;
    u8 pad_2a8[0x2e4 - 0x2a8];
    u8 unk_2e4[0xd44 - 0x2e4];
    u8 unk_d44[0x234c - 0xd44];
    u8 unk_234c[0x240c - 0x234c];
    u8 unk_240c[0x2424 - 0x240c];
    u8 unk_2424[0x2488 - 0x2424];
    u8 unk_2488[0x277c - 0x2488];
    u8 unk_277c[0x2800 - 0x277c];
};

typedef Unk_ov105_02295594 S;
typedef Unk_ov105_02295594_Obj Obj;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u8 data_021ef5f4;
extern u8 data_021ef5f8;

extern "C" {
BOOL func_0206ef00();
void func_02089ad8(void *p, s32 x, s32 y);
s32 func_0208d534(void *p);
void func_0208d538(void *p, u32 a);
void func_02065e70(void *p, void *q);
u32 func_02065578(u32 v);
u32 func_020655d0(u32 v);

void func_ov094_022943a4(void *p, u32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022943b0(void *p);
void func_ov094_022943bc(void *p, u32 a);
void func_ov094_022935dc(void *p);
void *func_ov094_0229433c(void *p, u32 a);
void func_ov094_022942f4(void *p, u32 a);
void func_ov094_02294420(void *p, void *q, u32 a);
void func_ov094_0229405c(void *p, s32 a, s32 b, void *c);

void func_ov002_022006b0(void *p);
void func_ov002_022006b8(void *p);
void func_ov002_022006e4(void *self, s32 a);
void func_ov002_02200a58(void *self, s32 s);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
void func_ov002_0220160c(void *p, void *q, s32 a);
void func_ov002_02202064(void *p, s32 x);
void func_ov002_02202098(void *p, s32 x);
void func_ov002_02202200(void *p, void *q, s32 a);
void func_ov002_0220229c(void *p, s32 a, s32 b);
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a18(void *p, s32 a, s32 b, s32 c);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov002_022014a4(void *p);
s32 func_ov002_02201498(void *p, u32 a);
u8 func_ov002_02201a70(void *p, u32 a);
s32 func_ov002_02202710(void *p);
s32 func_ov002_02202708(void *p);
s32 func_ov002_022028c8(void *p);
s32 func_ov002_022028a0(void *p);

void func_ov105_02294dd8(S *s, u32 a);
void func_ov105_02294de8(S *s, u32 a);
BOOL func_ov105_02294df8(S *s, u32 a);
u32 func_ov105_02296054(S *s, u32 a);
void func_ov105_02296094(S *s, u32 a, void *b);
s32 func_ov105_02295fe8(S *s, u32 a);
s32 func_ov105_02295f7c(S *s, u32 a);
BOOL func_ov105_02295ee0(S *s, u32 a);
BOOL func_ov105_02296208(S *s, u32 a);
BOOL func_ov105_02296214(S *s, u32 a);
BOOL func_ov105_02296224(S *s, u32 a);
u32 func_ov105_022961d0(S *s, u32 a);
void func_ov105_022965cc(S *s);
void func_ov105_02295ebc(S *s);
void func_ov105_022951ec(S *s);
void func_ov105_02295158(S *s);
void func_ov105_02295150(S *s);

void func_ov105_02295a78(S *s);
void func_ov105_02295698(S *s, u32 b);
void func_ov105_02295874(S *s);
s32 func_ov105_02295aac(S *s);
s32 func_ov105_02295a9c(S *s);
void func_ov105_02295854(S *s);
void func_ov105_02295bb0(S *s, u32 b);
void func_ov105_022957e8(S *s);

void func_ov105_02295594(S *s, u32 a, u32 b) {
    func_ov105_02294dd8(s, 0x800);
    s->unk_2a3 = a;
    func_ov002_022016e4(s->unk_277c, 4);
    u32 r7 = func_ov105_02296054(s, a);
    if (func_0206ef00()) {
        func_ov002_02201700(s->unk_277c, 0, 0);
    }
    u32 r5 = func_02065578(r7);
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(s->unk_277c, 0x17, 1);
        } else {
            func_ov002_02201700(s->unk_277c, 0x14, 1);
        }
    }
    if (func_020655d0(r7) == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(s->unk_277c, 0x15, 3);
        }
    }
    func_ov002_02201700(s->unk_277c, 2, 4);
    func_ov105_02295a78(s);
    if (b == 0) {
        func_ov002_022006e4(s->unk_234c, 1);
    }
    func_ov105_02295698(s, b);
}

void func_ov105_02295668(S *s) {
    s->unk_2a6 = 4;
    func_ov105_02295874(s);
    func_ov002_02202064(s->unk_2488, 0);
    func_ov002_02200a58(s, 0x18);
}

void func_ov105_02295698(S *s, u32 b) {
    u32 r2 = func_ov105_02294df8(s, 0x800);
    func_ov002_0220160c(s->unk_2488, s->unk_277c, r2);
    s32 r6 = func_ov105_02295fe8(s, s->unk_2a3);
    s32 r2b = func_ov105_02295f7c(s, s->unk_2a3);
    if (b != 0) {
        func_ov002_02202200(s->unk_2488, s->unk_234c, r2b);
    } else {
        func_ov002_0220229c(s->unk_2488, r6, r2b);
    }
    func_ov002_02202098(s->unk_2488, 0);
    func_ov002_02200a58(s, 0x16);
}

void func_ov105_02295714(S *s) {
    switch (s->unk_2a6) {
    case 0:
        func_ov105_022957e8(s);
        break;
    case 1:
        func_ov105_022951ec(s);
        break;
    case 2:
        func_ov105_02295158(s);
        break;
    case 3:
        func_ov105_02295150(s);
        break;
    case 4:
    default:
        func_ov105_022965cc(s);
        break;
    }
}

void func_ov105_02295760(S *s, u32 b) {
    func_ov002_022006e4(s->unk_234c, 1);
    s->unk_2a5 = s->unk_08d;
    s->unk_2a4 = b;
    func_ov002_02202d00(s->unk_2424, 6);
    func_ov002_02200a58(s, 0x13);
}

void func_ov105_022957ac(S *s, u32 b) {
    func_ov002_022006e4(s->unk_234c, 1);
    s->unk_2a4 = b;
    func_ov002_02202d00(s->unk_2424, 5);
    func_ov002_02200a58(s, 0x12);
}

void func_ov105_022957e8(S *s) {
    func_ov002_02202d00(s->unk_2424, 4);
    func_ov002_02200a58(s, 0x10);
    func_ov105_02294de8(s, 0x1000);
}

void func_ov105_02295814(S *s) {
    func_ov002_02202af0(s->unk_2424);
    func_ov002_02200a58(s, 0xf);
}

void func_ov105_02295834(S *s) {
    func_ov002_02202b68(s->unk_2424);
    func_ov002_02200a58(s, 0xe);
}

void func_ov105_02295854(S *s) {
    func_ov002_02202a78(s->unk_2424);
    ((Obj *)s->unk_2424)->vfunc_0c();
}

void func_ov105_02295874(S *s) {
    s32 r4 = func_ov105_02295aac(s);
    s32 r2 = func_ov105_02295a9c(s);
    func_ov002_02202a40(s->unk_2424, r4, r2);
    func_ov002_02202d00(s->unk_2424, 1);
}

void func_ov105_022958a8(S *s) {
    if (func_ov105_02294df8(s, 0x800)) {
        s->unk_2a7 = 1;
    } else {
        s->unk_2a7 = 0;
    }
    s32 r4 = func_ov002_022014a4(s->unk_2488);
    s32 r2 = func_ov002_02201498(s->unk_2488, s->unk_2a7);
    func_ov002_02202a40(s->unk_2424, r4, r2);
    func_ov002_02202d00(s->unk_2424, 7);
}

void func_ov105_0229590c(S *s) {
    s->unk_2a6 = 4;
    s->unk_2a7 = func_ov002_02201a70(s->unk_2488, 1);
    s32 r4 = func_ov002_022014a4(s->unk_2488);
    s32 r2 = func_ov002_02201498(s->unk_2488, s->unk_2a7);
    func_ov002_02202a40(s->unk_2424, r4, r2);
    func_0208d538(s->unk_2424, 8);
    func_ov002_02200a58(s, 0x17);
}

void func_ov105_02295974(S *s) {
    s32 r4 = func_ov002_022014a4(s->unk_2488);
    s32 r2 = func_ov002_02201498(s->unk_2488, s->unk_2a7);
    func_ov002_02202a18(s->unk_2424, r4, r2, 2);
    s->unk_2a5 = s->unk_08d;
    func_ov002_02200a58(s, 0xd);
}

void func_ov105_022959c8(S *s, s32 a, s32 b) {
    func_ov002_022029e8(s->unk_2424, a, b, 3, 1);
    s->unk_2a5 = s->unk_08d;
    func_ov002_02200a58(s, 0xd);
}

void func_ov105_02295a00(S *s) {
    if (func_ov105_02294df8(s, 8)) {
        s32 r5 = func_ov105_02295aac(s);
        s32 r2 = func_ov105_02295a9c(s);
        func_ov002_02202a40(s->unk_2424, r5, r2);
        func_ov105_02294dd8(s, 8);
    } else {
        s32 r5 = func_ov105_02295aac(s);
        s32 r2 = func_ov105_02295a9c(s);
        func_ov002_022029e8(s->unk_2424, r5, r2, 3, 1);
        s->unk_2a5 = s->unk_08d;
        func_ov002_02200a58(s, 0xd);
    }
}

void func_ov105_02295a78(S *s) {
    func_ov002_02202d00(s->unk_2424, 0);
    ((Obj *)s->unk_2424)->vfunc_0c();
}

s32 func_ov105_02295a9c(S *s) {
    return func_ov105_02295f7c(s, s->unk_2a2);
}

s32 func_ov105_02295aac(S *s) {
    s32 r4 = func_ov105_02295fe8(s, s->unk_2a2);
    if (func_ov105_02294df8(s, 0x20)) {
        r4 += 0x100;
    } else if (func_ov105_02294df8(s, 0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

void func_ov105_02295af4(S *s) {
    s32 r4 = func_ov105_02295aac(s);
    s32 r2 = func_ov105_02295a9c(s);
    func_ov002_02202a40(s->unk_2424, r4, r2);
    if (func_ov105_02296208(s, s->unk_2a2)) {
        func_ov002_02202d00(s->unk_2424, 7);
    } else {
        func_ov002_02202d00(s->unk_2424, 1);
    }
    func_ov105_02295854(s);
}

void func_ov105_02295b4c(S *s, u32 b) {
    if (s->unk_29c == 1) {
        func_02065e70(s->unk_1a8, s->unk_0b4);
        func_ov105_02295bb0(s, b);
        func_ov105_02296094(s, b, s->unk_1a8);
    }
}

void func_ov105_02295b8c(S *s, u32 b) {
    if (s->unk_29c == 1) {
        func_ov105_02296094(s, b, s->unk_0b4);
    }
    s->unk_29c = 0;
}

void func_ov105_02295bb0(S *s, u32 b) {
    if (func_ov105_02296224(s, b) || func_ov105_02296214(s, b)) {
        u32 r4 = func_ov105_022961d0(s, b);
        s->unk_29c = 1;
        func_02065e70(s->unk_0b4, func_ov094_0229433c(s->unk_d44, r4));
        func_ov094_022942f4(s->unk_d44, r4);
    }
}

void func_ov105_02295c0c(S *s) {
    s->unk_0ac = func_ov002_02202710(s->unk_240c);
    s->unk_0b0 = func_ov002_02202708(s->unk_240c);
}

void func_ov105_02295c34(S *s) {
    s->unk_0ac = func_ov002_022028c8(s->unk_2424) - 2;
    s->unk_0b0 = func_ov002_022028a0(s->unk_2424) - 4;
    if (func_0208d534(s->unk_2424) == 1) {
        s->unk_0b0 -= 0x16;
    }
}

void func_ov105_02295c7c(S *s) {
    s->unk_0ac = s->unk_0a4 + data_021ef5f0;
    s->unk_0b0 = s->unk_0a8 + data_021ef5ec;
}

void func_ov105_02295ca8(S *s) {
    if (func_ov105_02294df8(s, 0x40) == 0) {
        u32 v = s->unk_29c;
        if (v == 0) {
        } else if (v == 1) {
            func_ov094_0229405c(s->unk_d44, s->unk_0ac, s->unk_0b0, s->unk_0b4);
        }
    }
}

void func_ov105_02295ce8(S *s) {
    if (func_ov105_02296224(s, s->unk_2a2) || func_ov105_02296214(s, s->unk_2a2)) {
        if (func_ov105_02295ee0(s, s->unk_2a2)) {
            func_ov002_022006b0(s->unk_234c);
        } else {
            s->unk_29e = s->unk_2a2;
            func_ov002_022006b8(s->unk_234c);
        }
    } else {
        func_ov002_022006b0(s->unk_234c);
    }
}

void func_ov105_02295d4c(S *s) {
    s32 r6 = func_ov105_02295fe8(s, s->unk_29e) - 0x6d;
    s32 r4 = func_ov105_02295f7c(s, s->unk_29e) - 0x78;
    if (func_0206ef00()) r4 -= 8;
    func_02089ad8(s->unk_234c, r6, r4);
    if (func_ov105_02296224(s, s->unk_29e) || func_ov105_02296214(s, s->unk_29e)) {
        func_ov094_02294420(s->unk_d44, s->unk_234c, func_ov105_022961d0(s, s->unk_29e));
    }
}

BOOL func_ov105_02295dc8() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void func_ov105_02295e0c(S *s, u32 b) {
    if (func_ov105_02296224(s, b) || func_ov105_02296214(s, b)) {
        func_ov094_022943a4(s->unk_d44, func_ov105_022961d0(s, b));
    }
}

void func_ov105_02295e48(S *s) {
    func_ov094_0229358c(s->unk_2e4);
    func_ov094_022943b0(s->unk_d44);
}

void func_ov105_02295e6c(S *s, u32 b) {
    if (func_ov105_02296224(s, b) || func_ov105_02296214(s, b)) {
        func_ov094_022943bc(s->unk_d44, func_ov105_022961d0(s, b));
        func_ov094_022935dc(s->unk_2e4);
    } else {
        func_ov105_02295ebc(s);
    }
}
}

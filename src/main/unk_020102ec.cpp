#include "types.h"

struct Unk_02010924_Msg {
    u8 unk_00;
    s16 unk_02;
    s16 unk_04;
};

struct Unk_02010a58_Blk {
    u16 unk_00;
    s16 unk_02;
};

struct Unk_02010b08_Time {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02010b08_Bits {
    u16 unk_a : 7;
    u16 unk_b : 4;
    u16 unk_c : 5;
};

struct Unk_0201065c_Vec {
    s32 x, y, z;
};

struct Unk_020107c8_Blk {
    u32 unk_00, unk_04, unk_08;
};

class Unk_020102ec;
extern "C" s32 func_02010564(Unk_020102ec *a, s32 *b, u8 *c);

extern "C" {
extern void *data_020cbb18;
extern u8 data_020c655c[];
extern u16 data_020c68d4[];
BOOL func_020729bc(void *a, u32 b);
BOOL func_020b52d0(void);
u32 func_020b50e8(void);
u32 func_020b50b4(void);
void func_020b6860(u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
void func_0205c2dc(void *a, s32 b, u32 c, u32 d);
s32 func_0205c254(void *a);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, u32 b);
void func_02053ee8(void *a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g);
void func_02053f20(void *a);
void func_02010284(Unk_020102ec *a, s32 b, u32 c);
void func_0205ce78(void *a, s32 b, u32 c, u32 d);
s32 func_0205cf54(void *a);
s32 func_0205cf60(void *a);
s32 func_0205c5dc(s32 a);
s32 func_0205c5e8(s32 a);
void func_02055e4c(void *a, s32 b, u32 c, u32 d, u32 e, u32 f);
s32 func_02055e38(void *a);
s32 func_0205d340(void *a);
s32 func_0205d1f8(void *a);
void func_02055f1c(void *a, s32 b, s32 c, u32 d, s32 e);
void func_02089040(void *a);
void func_02088bf8(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
u32 func_02030814(u32 a);
BOOL func_020565e8(void *a, u32 b);
BOOL func_02063ca0(void *a);
BOOL func_0200e35c(Unk_020102ec *a, Unk_02010924_Msg *b, u32 *c, u32 *d, s16 *e);
BOOL func_02010d74(s16 *a, s32 b);
void func_02010e48(void *a, u32 b);
void func_02002cb0(Unk_020102ec *a, void *b);
void func_020323b0(void *a);
void func_0203239c(void *a);
void func_020309d4(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
void func_02002c10(Unk_020102ec *a);
void func_02010d98(void *a);
u32 func_02010d20(u32 a);
u32 func_02010c74(u32 a);
u32 func_020951dc(u32 a);
BOOL func_0200e7c0(u32 a);
s32 func_0200f1e4(u32 a, void *b, void *c);
void func_0200f17c(u32 a, u32 b, void *c);
s32 func_0209d3a4(void *a, void *b);
u8 *func_020952c8(void);
u16 *func_020952d0(void);
void func_020987d0(u32 a, u32 b);
void func_0200ead0(u32 a);
u16 *func_02098744(void);
u32 func_02098868(u32 a);
BOOL func_02098778(u32 a);
u16 *func_020986fc(void);
}

class Unk_020102ec {
public:
    void func_020102ec();
    void func_02010358(s32 a, u32 b, u16 c);
    void func_02010380(s32 a, u32 b, u16 c);
    void func_020103b4(s32 a, u32 b, u16 c);
    void func_020103dc(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g);
    void func_020104ac(s32 *a, u8 *b);
    void func_02010508(s32 *a, u8 *b);
    void func_02010564(s32 *a, u8 *b);
    void func_020105a8(s32 *a, u8 *b);
    void func_020105ec();
    void func_0201065c();
    void func_020106e0(u32 *a);
    void func_0201071c();
    void func_02010740(u32 a, u32 b, u32 c);
    void func_02010780(u32 *a);
    void func_020107c8(u32 *a);
    void func_02010800(u32 *a);
    void func_02010810(Unk_020107c8_Blk *a, u32 *b);
    u32 func_0201086c(u32 *a);
    void func_02010884();
    void func_020108ac();
    void func_02010900();
    void func_02010914();
    BOOL func_02010924();
    void func_020109ac();
    void func_020109c4();
    void func_02010a34(u32 *a);
    void func_02010a44();
    void func_02010a50(u16 a);
    void func_02010a58(s16 *a);
    u32 func_02010a6c(u32 *a);
    u8 func_02007c50(u32 a);
    u32 func_02010b08(u32 a);
    u8 *P(u32 off) { return (u8 *)this + off; }


    u8 pad_00[0x8];
    /* 0x08 */ u32 unk_08;
    u8 pad_0c[0x50];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ s32 unk_64;
    u8 pad_68[0x24];
    /* 0x8c */ u16 unk_8c;
    /* 0x8e */ s16 unk_8e;
    u8 pad_90[0x4];
    /* 0x94 */ s16 unk_94;
    u8 pad_96[0x2];
    /* 0x98 */ u32 unk_98;
    u8 pad_9c[0x238];
    /* 0x2d4 */ u32 unk_2d4_lo : 12;
    u32 unk_2d4_mid : 16;
    u32 unk_2d4_hi : 4;
    u8 pad_2d8[0x4];
    /* 0x2dc */ u32 unk_2dc;
    /* 0x2e0 */ u8 unk_2e0;
    u8 pad_2e1[0x103];
    /* 0x3e4 */ s32 unk_3e4;
    u8 pad_3e8[0x308];
    /* 0x6f0 */ u32 unk_6f0;
    u8 pad_6f4[0x4];
    /* 0x6f8 */ u32 unk_6f8;
    u8 pad_6fc[0x4];
    /* 0x700 */ s32 unk_700;
    u8 pad_704[0x4];
    /* 0x708 */ u8 unk_708;
    u8 pad_709[0xb];
    /* 0x714 */ s32 unk_714;
    u8 pad_718[0x28];
    /* 0x740 */ s32 unk_740;
    u8 pad_744[0x24];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ s32 unk_76c;
    u8 pad_770[0x7c];
    /* 0x7ec */ u32 unk_7ec;
    u8 pad_7f0[0xc];
    /* 0x7fc */ u32 unk_7fc;
};

void Unk_020102ec::func_020102ec() {
    u32 b, a;
    a = (u32)(unk_714 >> 12) << 16;
    b = (u32)(unk_740 >> 12) << 16;
    func_020103dc(unk_700, 3, unk_2e0, unk_2dc, unk_2d4_mid, 0, 0x137);
    unk_714 = a >> 4;
    unk_740 = b >> 4;
}

void Unk_020102ec::func_02010358(s32 a, u32 b, u16 c) {
    func_020103dc(a, b, 1, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::func_02010380(s32 a, u32 b, u16 c) {
    func_020103dc(a, b, 0, unk_2dc, unk_2d4_mid, c, 0x137);
}

void Unk_020102ec::func_020103b4(s32 a, u32 b, u16 c) {
    func_020103dc(a, b, 0, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::func_020103dc(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g) {
    s32 t = unk_700;
    s32 v;
    if (t == 0xa1) {
        b = 0;
        f = 0;
    }
    v = g >= 0x137 ? func_02010a6c((u32 *)&a) : g;
    if (!(a == 0 && t == 0 && *(u16 *)&e == 0 && b != 0 && g >= 0x137)) {
        func_0205c2dc(P(0x6fc), v, 1, 0);
        u32 r = func_021065f8(func_021065dc(func_0205c254(P(0x6fc))), 0);
        func_02053ee8(P(0x230), r, b, c, d, *(u16 *)&e, 0);
        unk_700 = a;
        unk_708 = c;
    }
    func_02010284(this, v, f);
    func_020105a8(&v, &c);
    ::func_02010564(this, &v, &c);
}

void Unk_020102ec::func_020104ac(s32 *a, u8 *b) {
    func_0205ce78(P(0x70a), *a, 1, 0);
    s32 r = func_0205cf54(P(0x70a));
    func_02055e4c(P(0x738), r, 0, 0, *b, 0x1000);
    func_02055e38(P(0x738));
    unk_76c = *a;
}

void Unk_020102ec::func_02010508(s32 *a, u8 *b) {
    func_0205ce78(P(0x70a), *a, 1, 0);
    s32 r = func_0205cf60(P(0x70a));
    func_02055e4c(P(0x70c), r, 0, 0, *b, 0x1000);
    func_02055e38(P(0x70c));
    unk_768 = *a;
}

void Unk_020102ec::func_02010564(s32 *a, u8 *b) {
    s32 t = unk_76c;
    s32 v = func_0205c5dc(*a);
    if (v == 0x16f && t != 0xba) {
        v = 0xba;
    }
    if (v != 0x16f) {
        func_020104ac(&v, b);
    }
}

void Unk_020102ec::func_020105a8(s32 *a, u8 *b) {
    s32 t = unk_768;
    s32 v = func_0205c5e8(*a);
    if (v == 0x16f && t != 0) {
        v = 0;
    }
    if (v != 0x16f) {
        func_02010508(&v, b);
    }
}

void Unk_020102ec::func_020105ec() {
    s32 t = unk_3e4;
    s32 a = func_0205d340(P(0x709));
    s32 b = func_0205d1f8(P(0x70b));
    func_02055f1c(P(0x70c), t, a, 1, b);
    t = unk_3e4;
    a = func_0205d340(P(0x709));
    b = func_0205d1f8(P(0x70b));
    func_02055f1c(P(0x738), t, a, 1, b);
}

void Unk_020102ec::func_0201065c() {
    if (func_020729bc(data_020cbb18, unk_7fc) || (func_020b52d0() && unk_7ec == 8)) {
        Unk_0201065c_Vec *p = (Unk_0201065c_Vec *)P(0x5c);
        Unk_0201065c_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        v.y += 0xb33;
        u32 r = func_020b50b4();
        func_020b6860(r, P(0x210), &v, 0xa00, 0x15cf, 1, (u8)unk_7fc);
    }
}

void Unk_020102ec::func_020106e0(u32 *a) {
    func_020107c8((u32 *)P(0x7ec));
    func_02089040(P(0x170));
    func_02010780(a);
    func_02089040(P(0x1c0));
}

void Unk_020102ec::func_0201071c() {
    func_02010800((u32 *)P(0x7ec));
    func_02089040(P(0x170));
}

void Unk_020102ec::func_02010740(u32 a, u32 b, u32 c) {
    func_02088bf8(P(0x1c0), this, a, b, c, 0x11, 0x2c, 0, 0xff, 0x1000);
}

void Unk_020102ec::func_02010780(u32 *a) {
    func_02088bf8(P(0x1c0), this, (u32)a, 0xfd7, 0x2800, 6, 0x2fc, 0, 0xff, 0x1000);
}

void Unk_020102ec::func_020107c8(u32 *a) {
    Unk_020107c8_Blk b;
    b.unk_00 = unk_6f0;
    b.unk_04 = func_02030814(0);
    b.unk_08 = unk_6f8;
    func_02010810(&b, a);
}

void Unk_020102ec::func_02010800(u32 *a) {
    func_02010810((Unk_020107c8_Blk *)P(0x5c), a);
}

void Unk_020102ec::func_02010810(Unk_020107c8_Blk *a, u32 *b) {
    u32 f = func_0201086c(b);
    func_02088bf8(P(0x170), this, (u32)a, 0xfd7, 0x2800, f | 4, 0x2fc, 0x15, (u8)unk_7fc, 0x1000);
}

u32 Unk_020102ec::func_0201086c(u32 *a) {
    if (data_020c655c[*a] != 0) {
        return 2;
    }
    return 0;
}

void Unk_020102ec::func_02010884() {
    if (unk_76c != 0x16f) {
        func_02055e38(P(0x738));
    }
}

void Unk_020102ec::func_020108ac() {
    s32 t = unk_768;
    if (t != 0x16f) {
        if (t == 0) {
            if (func_020565e8(P(0x70c), 0)) {
                if (!func_02063ca0(P(0x764))) {
                    return;
                }
            }
            func_02055e38(P(0x70c));
        } else {
            func_02055e38(P(0x70c));
        }
    }
}

void Unk_020102ec::func_02010900() {
    func_020108ac();
    func_02010884();
}

void Unk_020102ec::func_02010914() {
    func_02053f20(P(0x230));
}

BOOL Unk_020102ec::func_02010924() {
    Unk_02010924_Msg m;
    u32 x, y;
    BOOL r;
    if (!func_0200e35c(this, &m, &x, &y, &m.unk_02)) {
        return FALSE;
    }
    if (m.unk_00 != func_020b50e8()) {
        return FALSE;
    }
    m.unk_04 = unk_8e;
    r = func_02010d74(&m.unk_04, m.unk_02) == 0 ? TRUE : FALSE;
    func_02010a58(&m.unk_04);
    func_02010e48(P(0x5c), x);
    func_02010e48(P(0x64), y);
    if (r) {
        if (x == unk_5c && y == unk_64) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_020102ec::func_020109ac() {
    func_02002cb0(this, 0);
    unk_60 = func_02030814(0);
}

void Unk_020102ec::func_020109c4() {
    u8 tmp[0x34];
    u8 *p = P(0x5c);
    func_02002cb0(this, P(0x170));
    func_020323b0(tmp);
    s16 h = unk_8e;
    void *q = func_02007c50(unk_7ec) == 0 ? (void *)tmp : (void *)P(0x7a0);
    func_020309d4(q, p, P(0x68), h, 0xfd7, this, 0xf);
    func_0203239c(tmp);
    *(u32 *)(p + 4) = func_02030814(0);
}

void Unk_020102ec::func_02010a34(u32 *a) {
    unk_98 = *a;
    func_02002c10(this);
}

void Unk_020102ec::func_02010a44() {
    func_02010d98(P(0x8c));
}

void Unk_020102ec::func_02010a50(u16 a) {
    unk_8c = a;
}

void Unk_020102ec::func_02010a58(s16 *a) {
    Unk_02010a58_Blk *p = (Unk_02010a58_Blk *)P(0x8c);
    s16 v = *a;
    p->unk_02 = v;
    unk_94 = p->unk_02;
}

u32 Unk_020102ec::func_02010a6c(u32 *a) {
    return data_020c68d4[*a];
}

extern "C" void func_02010a7c(u16 *out, u32 x) {
    *out = 0xfff1;
    if (func_02010d20(x)) {
        *out = *func_02098744();
    }
}

extern "C" u32 func_02010aa0(u32 x) {
    u32 a = func_02010d20(x);
    s32 r = 0x20;
    if (a) {
        r = func_02098868(a);
        if (func_02098778(a)) {
            r += 0x10;
        }
    }
    if (r >= 0x20) {
        r = 0;
    }
    return r;
}

extern "C" u32 func_02010ad4(u32 x) {
    u32 a = func_02010d20(x);
    if (a) {
        return func_02098778(a);
    }
    return 0;
}

extern "C" void func_02010af0(u16 *out, u32 x) {
    func_02010d20(x);
    *out = *func_020986fc();
}

u32 Unk_020102ec::func_02010b08(u32 r7) {
    u32 r5 = func_02010c74((u32)this);
    BOOL flag = FALSE;
    u32 k = func_020b50e8();
    if (k == 0x2e || k == 0xd || k == 0xe || k == 0xc || k == 0x2f) {
        return r5;
    }
    if (!(func_020b52d0() && func_020951dc(unk_08) == 8)) {
        if (!func_020729bc(data_020cbb18, unk_7fc)) {
            return r5;
        }
        if (r7 == 0) {
            return r5;
        }
    } else if (r7 == 1) {
        r7 = 0;
    }
    if (func_0200e7c0((u32)this)) {
        flag = TRUE;
    }
    u32 obj = func_02010d20((u32)this);
    Unk_02010b08_Time a, b;
    Unk_02010b08_Bits bits;
    a.unk_00 = 0;
    a.unk_04 = 0;
    b.unk_00 = 0;
    b.unk_04 = 0;
    s32 r3 = func_0200f1e4((u32)this, &a, &b);
    bits.unk_a = *((u8 *)&a + 5);
    bits.unk_b = *((u8 *)&a + 4);
    bits.unk_c = *((u8 *)&a + 3);
    switch (r3) {
    case -1:
        if (r7 != 0) {
            func_0200f17c((u32)this, obj, &bits);
        }
        break;
    case 0:
        break;
    default: {
        s32 n = func_0209d3a4(&b, &a);
        u8 *p = func_020952c8();
        if (n >= 2) {
            s32 h = n >> 1;
            if ((s32)r5 > h) {
                r5 = (u8)(r5 - h);
            } else {
                r5 = 0;
            }
            if (r7 != 0) {
                func_020987d0(obj, r5);
                func_0200f17c((u32)this, obj, &bits);
                *p &= 0xfd;
                if (!flag) {
                    *p &= ~0x10;
                }
                func_0200ead0((u32)this);
            }
        }
        *p &= 0xfe;
        break;
    }
    }
    u16 *q = func_020952d0();
    if (*q == 0) {
        *q = 0x4650;
    }
    return r5;
}

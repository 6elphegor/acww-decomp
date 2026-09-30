#include "types.h"

extern "C" {
s32 func_ov002_02202878(void *p);
s32 func_ov002_02203110(void *p, s32 a);
void func_ov002_02200a58(void *self, s32 a);
void func_ov002_02202f00(void *p);
void func_ov002_02202e48(void *p);
s32 func_ov004_02235a04();
void func_ov004_02235a2c();
void func_ov004_02235a54(s32 a, void *p);
s32 func_0204b858(u16 *p);
s32 func_0204bde8(u16 *p);
s32 func_0204b8ac(u16 *p);
void func_0200402c(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_02115e30(u32 v, void *dst, s32 n);
void func_02115e48(void *dst, void *src, s32 n);
void *func_0209750c();
void *func_020986c8(void *p);
s32 func_0203c4cc(void *a, u16 *b);
}

extern u8 data_020e416c;

class Unk_ov142_02294da8 {
public:
    void func_ov142_02291f60();
    void func_ov142_02292008(u32 m);
    void func_ov142_02292018(u32 m);
    BOOL func_ov142_02292028(u32 m);
    void func_ov142_02292414();
    void func_ov142_022922d8();
    void func_ov142_022922e8();
    void func_ov142_02293528(u32 v);
    void func_ov142_022935bc();
    void func_ov142_022935f8();
    void func_ov142_0229365c(s32 v);
    void func_ov142_022936a4();
    void func_ov142_02293734();
    void func_ov142_02293acc();
    void func_ov142_02293af8();
    void func_ov142_02293cb8();
    void func_ov142_02293d10();

    void func_ov142_0229291c();
    void func_ov142_0229294c();
    void func_ov142_02292964();
    BOOL func_ov142_0229297c();
    void func_ov142_02292a1c();
    void func_ov142_02292a3c();
    void func_ov142_02292a5c();
    void func_ov142_02292a94();
    BOOL func_ov142_02292ab8(u32 a, s32 b);
    u32 func_ov142_02292bbc(s32 x, s32 y);
    BOOL func_ov142_02292c58(u32 a);
    void func_ov142_02292d80();
    void func_ov142_02292e1c();
    void func_ov142_02292e94(s32 v);
    void func_ov142_02292f00();
    void func_ov142_02292f8c();
    u16 *func_ov142_02293004(s32 idx);
    s32 func_ov142_02293098();
    s32 func_ov142_022930a8();
    s32 func_ov142_022930b8(u16 *out, u16 start, s32 n, s32 off);
    s32 func_ov142_0229312c(u16 *out, u16 start, s32 n, s32 off);
    void func_ov142_022931a0();
    void func_ov142_0229320c();

    /* 0x00 */ u8 unk_00[0x9c];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u8 unk_a8[0xc];
    /* 0xb4 */ s16 unk_b4;
    /* 0xb6 */ u16 unk_b6;
    /* 0xb8 */ s16 unk_b8;
    /* 0xba */ u8 unk_ba[2];
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ u8 unk_bf;
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3;
    /* 0xc4 */ s16 unk_c4[9];
    /* 0xd6 */ s16 unk_d6[9];
    /* 0xe8 */ u8 unk_e8[0x64];
    /* 0x14c */ u8 unk_14c[0x48];
    /* 0x194 */ u8 unk_194[0x4e4];
    /* 0x678 */ u8 unk_678[0x24];
    /* 0x69c */ u8 unk_69c[0x6c];
    /* 0x708 */ u8 unk_708[0x1688];
    /* 0x1d90 */ u8 unk_1d90[0x800];
    /* 0x2590 */ u8 unk_2590[0x80];
};

void Unk_ov142_02294da8::func_ov142_0229291c() {
    s32 t = func_ov002_02202878(&unk_e8);
    if ((t & 0xf) == 0) {
        t = t - 1;
    }
    if (t < 0x18) {
        t = 0x18;
    }
    if (t >= 0xa8) {
        t = 0xa7;
    }
    unk_c0 = (t - 0x18) >> 4;
}

void Unk_ov142_02294da8::func_ov142_0229294c() {
    if (func_ov142_0229297c() == 0) {
        func_ov142_0229291c();
    }
}

void Unk_ov142_02294da8::func_ov142_02292964() {
    if (func_ov142_0229297c() == 0) {
        func_ov142_02292a3c();
    }
}

BOOL Unk_ov142_02294da8::func_ov142_0229297c() {
    s32 n = func_ov142_02293098();
    if (n == 0) {
        return FALSE;
    }
    if (n > 9) {
        n = 9;
    }
    s32 y = func_ov002_02202878(&unk_e8);
    if (y < 0x20) {
        y = 0x20;
    }
    if (y >= 0xa0) {
        y = 0x9f;
    }
    s32 r = unk_a0 & 0xf;
    s32 k = (y - (0x20 - r)) >> 4;
    if (k >= n) {
        k = n - 1;
    }
    unk_c0 = k + 9;
    if (r != 0) {
        if (k == 0) {
            unk_a0 = unk_a0 - r;
        } else if (k == n - 1) {
            unk_c0 = unk_c0 - 1;
            unk_a0 = unk_a0 + (0x10 - (unk_a0 & 0xf));
        }
    }
    return TRUE;
}

void Unk_ov142_02294da8::func_ov142_02292a1c() {
    if (unk_a4 == 0) {
        func_ov142_0229294c();
    } else {
        func_ov142_02292a5c();
    }
}

void Unk_ov142_02294da8::func_ov142_02292a3c() {
    if (unk_a4 == 0) {
        func_ov142_02292a94();
    } else {
        func_ov142_02292a5c();
    }
}

void Unk_ov142_02294da8::func_ov142_02292a5c() {
    if (func_ov002_02202878(&unk_e8) < 0x2b) {
        unk_c0 = 0x15;
    } else if (func_ov002_02202878(&unk_e8) > 0x93) {
        unk_c0 = 0x16;
    } else {
        unk_c0 = 0x14;
    }
}

void Unk_ov142_02294da8::func_ov142_02292a94() {
    if (func_ov002_02202878(&unk_e8) > 0x89) {
        unk_c0 = 0x13;
    } else {
        unk_c0 = 0x12;
    }
}

BOOL Unk_ov142_02294da8::func_ov142_02292ab8(u32 a, s32 b) {
    BOOL r = TRUE;
    volatile u16 tmp;
    if (unk_be == a && unk_b8 == b) {
        r = FALSE;
    }
    unk_be = a;
    unk_b8 = b;
    if (b == -1) {
        func_ov142_022935bc();
        func_ov142_02292008(0x20);
        unk_bf = 6;
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            if (func_ov142_02292028(0x40)) {
                func_ov142_02292008(0x40);
                func_ov004_02235a04();
                func_ov004_02235a2c();
            }
        }
    } else {
        u16 v = *func_ov142_02293004(b);
        tmp = 0xfff1;
        tmp = v;
        if (func_0204b858((u16 *)&tmp)) {
            func_ov142_022935f8();
            unk_bf = 6;
            func_ov142_02292008(0x20);
        } else {
            func_ov142_0229365c(func_0204bde8((u16 *)&tmp));
            func_ov142_02292018(0x20);
            unk_bf = 5;
        }
        BOOL t;
        if (data_020e416c == 1) {
            t = TRUE;
        } else {
            t = FALSE;
        }
        if (t) {
            func_ov142_02292018(0x40);
            func_ov004_02235a54(func_ov004_02235a04(), (void *)&tmp);
        }
    }
    func_ov142_02292018(2);
    return r;
}

u32 Unk_ov142_02294da8::func_ov142_02292bbc(s32 x, s32 y) {
    if (func_ov002_02203110(&unk_194, 6)) {
        return 0x13;
    }
    if (func_ov142_02292028(0x20)) {
        if (x >= 0xc4 && x < 0xe8 && y >= 0x4d && y < 0x71) {
            return 0x12;
        }
    }
    if (x <= 0x1b) {
        if (y >= 0x18 && y < 0xa8) {
            return (u8)((y - 0x18) >> 4);
        }
        return 0x19;
    }
    if (x >= 0x38 && x <= 0x9c) {
        if (y >= 0x20 && y < 0xa0) {
            s32 k = (y - (0x20 - (unk_a0 & 0xf))) >> 4;
            if (k >= func_ov142_02293098()) {
                return 0x19;
            }
            return (u8)(k + 9);
        }
        return 0x19;
    }
    return 0x19;
}

BOOL Unk_ov142_02294da8::func_ov142_02292c58(u32 a) {
    switch (a) {
    case 0x13:
        func_ov142_02293acc();
        return TRUE;
    case 0x12:
        if (func_ov142_02292028(0x20)) {
            func_ov142_02293af8();
            return TRUE;
        }
        return FALSE;
    case 0x14:
        func_ov002_02202f00(&unk_14c);
        func_ov002_02202e48(&unk_14c);
        func_ov002_02200a58(this, 5);
        return TRUE;
    case 0x17:
        func_ov142_02293d10();
        return TRUE;
    case 0x18:
        func_ov142_02293cb8();
        return TRUE;
    case 0x15:
        if (func_ov142_02292028(0x400)) {
            return FALSE;
        }
        func_ov142_022922e8();
        func_ov002_02200a58(this, 7);
        return TRUE;
    case 0x16:
        if (func_ov142_02292028(0x800)) {
            return FALSE;
        }
        func_ov142_022922d8();
        func_ov002_02200a58(this, 7);
        return TRUE;
    default:
        break;
    }
    if (a <= 8) {
        if (unk_bd != a) {
            func_0200402c(0xc);
            func_ov142_02293528((u8)a);
        }
        return FALSE;
    }
    if (a >= 9 && a <= 0x11) {
        if (unk_c2 != 0) {
            return FALSE;
        }
        if (func_ov142_02292ab8(unk_bc, (s16)(unk_b4 + (a - 9)))) {
            func_0200402c(0x29);
        }
    }
    return FALSE;
}

void Unk_ov142_02294da8::func_ov142_02292d80() {
    s32 v;
    if (func_ov142_02292028(0x200)) {
        v = 5;
    } else {
        v = 3;
    }
    func_0206ee80(unk_1d90, 0, 0, 0x1f, 0x1f, v);
    if (unk_bc == unk_be) {
        s32 b = unk_b8;
        s32 d = b - unk_b4;
        if (d >= 0 && d < 9) {
            s32 m = (b & 0xf) * 2;
            func_0206ee80(unk_1d90, 0, m, 0x1f, m + 1, 4);
        }
    }
    if (func_020b86c0(&unk_678, unk_1d90, 4, 0x800, 0)) {
        func_ov142_02292008(2);
    }
}

void Unk_ov142_02294da8::func_ov142_02292e1c() {
    s32 a = unk_a0;
    if (unk_9c != a) {
        if (unk_9c > a) {
            unk_9c = unk_9c - 6;
            if (unk_9c < unk_a0) {
                unk_9c = unk_a0;
            }
        } else {
            unk_9c = unk_9c + 6;
            if (unk_9c > unk_a0) {
                unk_9c = unk_a0;
            }
        }
        func_ov142_02292e94(unk_9c);
        func_ov142_02292414();
    }
}

void Unk_ov142_02294da8::func_ov142_02292e94(s32 v) {
    func_ov142_02292008(0xc00);
    if (v <= 0) {
        func_ov142_02292018(0x400);
    }
    if (v >= unk_a4) {
        func_ov142_02292018(0x800);
    }
    unk_9c = v;
    func_020021fc(4, 0, unk_9c - 0x20);
    unk_b4 = v >> 4;
    func_ov142_02292f8c();
    func_ov142_02292018(4);
}

void Unk_ov142_02294da8::func_ov142_02292f00() {
    if (func_ov142_02292028(2)) {
        func_ov142_02292d80();
    }
    if (func_ov142_02292028(0x10)) {
        if (func_020b86c0(&unk_69c, unk_2590, 6, 0x800, 0)) {
            func_ov142_02292008(0x10);
        }
    }
    if (func_ov142_02292028(4)) {
        func_ov142_02292008(4);
        func_ov142_02293734();
    }
    if (func_ov142_02292028(8)) {
        func_ov142_02292008(8);
        func_ov142_022936a4();
    }
}

void Unk_ov142_02294da8::func_ov142_02292f8c() {
    s32 a = unk_b4;
    s32 i = (a + 9) % 9;
    s32 j = a & 0xf;
    volatile u16 fill = 0x10;
    func_02115e30(fill, unk_1d90, 0x800);
    s32 z = 0;
    for (s32 n = 0; n < 9; n++) {
        func_02115e48((u8 *)this + 0x1590 + i * 0x80, unk_1d90 + j * 0x80, 0x80);
        i++;
        if (i >= 9) {
            i = z;
        }
        j = (j + 1) & 0xf;
    }
    func_ov142_02292018(2);
}

u16 *Unk_ov142_02294da8::func_ov142_02293004(s32 idx) {
    static u16 *tbl[9] = {
        (u16 *)((u8 *)this + 0x708), (u16 *)((u8 *)this + 0xf08), (u16 *)((u8 *)this + 0xf90),
        (u16 *)((u8 *)this + 0x1018), (u16 *)((u8 *)this + 0x1218), (u16 *)((u8 *)this + 0x1258),
        (u16 *)((u8 *)this + 0x1398), (u16 *)((u8 *)this + 0x1418), (u16 *)((u8 *)this + 0x1516)
    };
    if (idx < 0) {
        idx = 0;
    }
    return tbl[unk_bc] + idx;
}

s32 Unk_ov142_02294da8::func_ov142_02293098() {
    return unk_c4[unk_bc];
}

s32 Unk_ov142_02294da8::func_ov142_022930a8() {
    return unk_d6[unk_bc];
}

s32 Unk_ov142_02294da8::func_ov142_022930b8(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    u16 tmp = 0xfff1;
    void *p = func_0209750c();
    s32 i = 0;
    Unk_ov142_02294da8 *q = (Unk_ov142_02294da8 *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (func_0204b8ac(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (func_0203c4cc(func_020986c8(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 1;
    }
    return cnt;
}

s32 Unk_ov142_02294da8::func_ov142_0229312c(u16 *out, u16 start, s32 n, s32 off) {
    s32 cnt = 0;
    void *p = func_0209750c();
    u16 tmp = 0xfff1;
    s32 i = 0;
    Unk_ov142_02294da8 *q = (Unk_ov142_02294da8 *)((u8 *)this + off * 2);
    for (; i < n; i++) {
        tmp = start;
        if (func_0204b8ac(&tmp)) {
            q->unk_d6[0] = q->unk_d6[0] + 1;
            if (func_0203c4cc(func_020986c8(p), &tmp)) {
                out[cnt] = start;
                cnt++;
            }
        }
        start = start + 4;
    }
    return cnt;
}

void Unk_ov142_02294da8::func_ov142_022931a0() {
    *(u16 *)((u8 *)this + 0xe0) = 0;
    s32 a = func_ov142_0229312c((u16 *)&unk_708[0x1258 - 0x708], 0x3fa4, 0x40, 5);
    s32 b = func_ov142_0229312c((u16 *)&unk_708[0x1258 - 0x708] + a, 0x40a4, 0x20, 5);
    a += b;
    s32 c = func_ov142_0229312c((u16 *)&unk_708[0x1258 - 0x708] + a, 0x4124, 0x40, 5);
    *(u16 *)((u8 *)this + 0xce) = a + c;
}

void Unk_ov142_02294da8::func_ov142_0229320c() {
    *(u16 *)((u8 *)this + 0xe6) = 0;
    s32 n = func_ov142_0229312c((u16 *)&unk_708[0x1516 - 0x708], 0x450c, 0x34, 8);
    *(u16 *)((u8 *)this + 0xd4) = n;
}

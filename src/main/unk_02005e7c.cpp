#include "types.h"

struct Unk_02005f50_V3 {
    s32 x, y, z;
};

struct Unk_02005f50_Area {
    s32 a[3];
    u8 e[4];
};

struct Unk_02005f50_Flags {
    u8 type : 5;
    u8 sub : 2;
    u8 set : 1;
};

extern "C" {
extern u8 data_020c64c8[];
extern u8 data_020c6434[];
extern u8 data_020c63a0[];
}

class Unk_02005e7c {
public:
    u8 pad_000[0x168];
    u8 unk_168;
    u8 pad_169[3];
    s32 unk_16c;
    u8 pad_170[0x170];
    u8 unk_2e0;
    u8 pad_2e1[0x40b];
    s32 unk_6ec;
    u8 pad_6f0[0xe0];
    u8 unk_7d0[0x1c];
    s32 unk_7ec;
    u8 pad_7f0[8];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0xe8];
    u8 unk_8e8;
    u8 pad_8e9[3];
    u8 unk_8ec[8];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    Unk_02005f50_Flags unk_900;
    u8 pad_901[0x37f];
    s16 unk_c80;
    u8 pad_c82[2];
    s32 unk_c84;

    void func_02005e7c(u32 i);
    void func_02005ea0(u32 i);
    void func_02005f04();
    void func_02005f50();
    void func_020063a0();
    s32 func_02006d14(void *p);
    void func_0200d538(s32 idx);
    void func_0200ceec(s32 idx);
    void func_0200ce28(s32 idx);
    void func_0200caf4(s32 idx);
    void func_0200c46c(s32 idx);
    void func_0200c328(s32 idx);
    void func_ov003_02211e48(s32 idx);
    void func_0200c180(s32 idx);
    void func_ov004_02224708(s32 idx);
    void func_ov004_022244d0(s32 idx);
    void func_ov004_02224254(s32 idx);
    void func_ov004_02223f7c(s32 idx);
    void func_ov004_02223e30(s32 idx);
    void func_ov004_02223cb8(s32 idx);
    void func_ov004_02223a80(s32 idx);
    void func_ov004_0222381c(s32 idx);
    void func_0200bd18(s32 idx);
    void func_ov003_0221194c(s32 idx);
    void func_ov001_02223688(s32 idx);
    void func_0200bb48(s32 idx);
    void func_0200b9cc(s32 idx);
    void func_0200b848(s32 idx);
    void func_ov003_022117c8(s32 idx);
    void func_ov003_022115f0(s32 idx);
    void func_0200b578(s32 idx);
    void func_0200ad64(s32 idx);
    void func_0200a484(s32 idx);
    void func_02009f68(s32 idx);
    void func_ov004_02223454(s32 idx);
    void func_ov004_02222d94(s32 idx);
    void func_ov004_02222b40(s32 idx);
    void func_ov004_02222838(s32 idx);
    void func_ov004_022226c0(s32 idx);
    void func_ov004_02222550(s32 idx);
    void func_ov001_022223c0(s32 idx);
    void func_ov004_022222a4(s32 idx);
    void func_ov004_02221ffc(s32 idx);
    void func_ov004_02221d4c(s32 idx);
    void func_ov004_02221b04(s32 idx);
    void func_ov004_022218bc(s32 idx);
    void func_ov004_02221778(s32 idx);
    void func_ov004_02221568(s32 idx);
    void func_ov004_0222149c(s32 idx);
    void func_ov004_0222137c(s32 idx);
    void func_ov004_0222117c(s32 idx);
    void func_ov004_02220ef4(s32 idx);
    void func_ov004_02220ce0(s32 idx);
    void func_ov004_02220ba8(s32 idx);
    void func_02009d58(s32 idx);
    void func_02009c90(s32 idx);
    void func_02009bd0(s32 idx);
    void func_02009944(s32 idx);
    void func_02009884(s32 idx);
    void func_020097d4(s32 idx);
    void func_ov004_02220a74(s32 idx);
    void func_ov004_02220954(s32 idx);
    void func_ov003_022111bc(s32 idx);
    void func_ov003_02210ef0(s32 idx);
    void func_ov003_02210d98(s32 idx);
    void func_ov003_02210b94(s32 idx);
    void func_ov003_02210720(s32 idx);
    void func_ov003_02210438(s32 idx);
    void func_ov003_0220ffd4(s32 idx);
    void func_020095f8(s32 idx);
    void func_ov004_02220744(s32 idx);
    void func_ov004_02220314(s32 idx);
    void func_ov004_02220120(s32 idx);
    void func_ov004_0221ff3c(s32 idx);
    void func_ov003_0221fe04(s32 idx);
    void func_ov003_0220fdcc(s32 idx);
    void func_ov003_0220fa3c(s32 idx);
    void func_ov003_0220f860(s32 idx);
    void func_ov003_0220f570(s32 idx);
    void func_ov003_0220f370(s32 idx);
    void func_ov003_0220f00c(s32 idx);
    void func_ov003_0220ed24(s32 idx);
    void func_ov003_0220ea4c(s32 idx);
    void func_ov003_0220e804(s32 idx);
    void func_ov003_0220e67c(s32 idx);
    void func_ov003_0220e490(s32 idx);
    void func_ov003_0220e0d8(s32 idx);
    void func_ov003_0220df10(s32 idx);
    void func_ov003_0220de20(s32 idx);
    void func_ov003_0220dcb8(s32 idx);
    void func_ov003_0220db30(s32 idx);
    void func_ov003_0220d568(s32 idx);
    void func_ov003_0220cfc0(s32 idx);
    void func_ov003_0220c30c(s32 idx);
    void func_ov003_0220baa4(s32 idx);
    void func_ov003_0220b488(s32 idx);
    void func_ov003_0220b130(s32 idx);
    void func_ov003_0220ae34(s32 idx);
    void func_ov003_0220ad50(s32 idx);
    void func_ov003_0220ab80(s32 idx);
    void func_ov003_0220a680(s32 idx);
    void func_ov003_02209f68(s32 idx);
    void func_ov003_0220987c(s32 idx);
    void func_ov003_022094fc(s32 idx);
    void func_ov003_02209310(s32 idx);
    void func_ov003_02208ff8(s32 idx);
    void func_ov003_02208c94(s32 idx);
    void func_ov003_02208b00(s32 idx);
    void func_ov003_02208984(s32 idx);
    void func_ov003_022086c4(s32 idx);
    void func_ov003_022083bc(s32 idx);
    void func_ov003_0220809c(s32 idx);
    void func_ov003_02207e3c(s32 idx);
    void func_ov003_02207d54(s32 idx);
    void func_ov003_02207cb0(s32 idx);
    void func_ov003_02207b30(s32 idx);
    void func_ov003_02207938(s32 idx);
    void func_020092c4(s32 idx);
    void func_02008f18(s32 idx);
    void func_ov003_022076e8(s32 idx);
    void func_ov003_022073c8(s32 idx);
    void func_ov003_022071ec(s32 idx);
    void func_ov003_02206edc(s32 idx);
    void func_ov003_02206adc(s32 idx);
    void func_02008cc0(s32 idx);
    void func_020086dc(s32 idx);
    void func_ov003_022069c4(s32 idx);
    void func_02008598(s32 idx);
    void func_ov004_0221fcb8(s32 idx);
    void func_ov004_0221fba4(s32 idx);
    void func_ov004_0221fadc(s32 idx);
    void func_ov004_0221f908(s32 idx);
    void func_ov004_0221f818(s32 idx);
    void func_ov004_0221f770(s32 idx);
    void func_ov003_02206750(s32 idx);
    void func_ov003_02206500(s32 idx);
    void func_ov003_02206234(s32 idx);
    void func_020083dc(s32 idx);
    void func_020082ac(s32 idx);
    void func_02008040(s32 idx);
    void func_02007dc8(s32 idx);
    void func_ov068_0226a93c(s32 idx);
    void func_ov068_0226a838(s32 idx);
    void func_ov003_02206034(s32 idx);
    void func_ov004_0221f6c4(s32 idx);
    void func_ov004_0221f448(s32 idx);
    void func_ov004_0221f0b8(s32 idx);
    void func_ov004_0221eebc(s32 idx);
    void func_ov004_0221ecb8(s32 idx);
    void func_ov003_02205dd0(s32 idx);
    void func_02007d00(s32 idx);
    void func_02007cac(s32 idx);
    void func_02007c9c(s32 idx);};

extern "C" {
void func_02005ee0(void *p, u32 i, s32 force);
s32 func_020420c4(void *out, s32 v);
void func_0204ed8c(Unk_02005f50_V3 *out, s32 x, s32 y);
void func_0204ee10(s32 *x, s32 *y, Unk_02005f50_V3 *v);
s32 func_0200ec44(void *p, s32 v);
void func_0200ec1c(void *p, s32 v);
s32 func_0200ec30(void *p, s32 v);
s32 func_0200e208(void *p);
s32 func_0200e3c0(void *p, s32 v);
void *func_0200e220(void *p, s32 i);
s32 func_0200ebe8();
s32 func_0208f038();
s32 func_0208f044();
s32 func_0208f050();
s32 func_02010a44(void *p, s32 v);
s32 func_0200b1ec(void *p, void *v, s32 a, s32 b, s32 c, s32 d);
s32 func_0200a6d4(void *p, void *v, s32 a, s32 b, s32 c);
s32 func_0200ce98(void *p, s32 a, s32 b, s32 c);
s32 func_02095574(s32 *out, s32 a, s32 b);
u8 *func_02095720(s32 v);
s32 func_0207697c(void *p);
void func_02116048(void *dst, void *src, s32 n);
void func_ov003_022084f4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov003_02211674(void *p, void *v, s32 a, s32 b);
void func_ov003_0220eddc(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220f064(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void func_ov003_0220a710(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220a344(void *p, void *v, s32 a, s32 b, s32 c);
void func_ov003_022093bc(void *p, s32 a, void *v, s32 b, s32 c, s32 d);
void func_ov003_02208a88(void *p, void *v, s32 a, s32 b, s32 c);
void func_ov003_0220ac74(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220f484(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
}

void Unk_02005e7c::func_02005e7c(u32 i) {
    if (data_020c64c8[i] == 0) {
        unk_6ec = 0;
    } else {
        unk_6ec = 0xb33;
    }
}

void Unk_02005e7c::func_02005ea0(u32 i) {
    if (data_020c6434[i] != 0) {
        switch (unk_16c) {
        case 1:
            func_0208f044();
            break;
        case 2:
            func_0208f038();
            break;
        default:
            func_0208f050();
            break;
        }
    } else {
        func_0200ebe8();
    }
}

extern "C" void func_02005ee0(void *p, u32 i, s32 force) {
    u32 v;
    if (force != 0) {
        v = 1;
    } else {
        v = data_020c63a0[i];
    }
    if (v != 0) {
        func_02010a44(p, 0);
    }
}

void Unk_02005e7c::func_02005f04() {
    func_02005f50();
    s32 i;
    s32 *p;
    for (i = 0; i < 30; i++) {
        p = (s32 *)func_0200e220(this, i);
        if (p == NULL) {
            break;
        }
        if (p[1] > unk_7f8) {
            func_02006d14(p);
        }
    }
    func_0200e208(this);
    func_0200ec1c(this, 0x17);
}

struct Unk_02005f50_Pkt {
    u8 type;
    u8 sub;
    volatile u16 pos;
};

void Unk_02005e7c::func_02005f50() {
    Unk_02005f50_Pkt pkt;
    volatile u16 pos;
    s32 ux, uy;
    s32 ux2, uy2;
    u8 sub;
    Unk_02005f50_Area *pa;
    s32 flag;
    u8 type;
    s32 x, y;
    s32 v34[2], v2122[2], v5[2], v6a[2], v6b[2], v19[2], v20[2], v14a[2], v14b[2], v14c[2];
    Unk_02005f50_V3 w, q1, q8, q11, q10, q20;

    if (!func_020420c4(&pkt, unk_7fc) && !unk_900.set) {
        return;
    }
    ux = 0;
    uy = 0;
    if (unk_900.set) {
        unk_900.set = 0;
        x = unk_8f8;
        y = unk_8fc;
        type = unk_900.type;
        sub = unk_900.sub;
    } else {
        pos = pkt.pos;
        y = pos;
        x = y >> 8;
        y &= 0xff;
        type = pkt.type;
        sub = pkt.sub;
    }
    func_0204ed8c(&w, x, y);
    switch (type) {
    case 17:
        if (unk_7ec != 0) {
            break;
        }
        unk_8e8 = 2;
        // fallthrough
    case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    case 14: case 19: case 20: case 21: case 22:
        if (func_0200ec44(this, 10) == 0) {
            unk_900.set = 1;
            unk_8f8 = x;
            unk_8fc = y;
            unk_900.type = type;
            unk_900.sub = sub;
            return;
        }
        func_0200e208(this);
        break;
    case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        return;
    }
    switch (type) {
    case 1:
    case 2: {
        if (unk_7ec == 0x68) {
            pa = (Unk_02005f50_Area *)unk_7d0;
            s32 t = pa->a[1]; q1.x = pa->a[0]; q1.y = 0; q1.z = t;
            func_0204ee10(&ux, &uy, &q1);
            if (ux == x && uy == y) {
                pa->e[0] = 1;
                unk_2e0 = 1;
                return;
            }
        }
        func_ov003_022084f4(this, w.x, w.z, type != 1, 1, 6, -1);
        break;
    }
    case 3:
    case 4:
    case 21:
    case 22:
        if (unk_7ec == 0x18) {
            u8 *p = unk_7d0;
            ux = p[5];
            uy = p[5];
            if (ux == x && uy == y) {
                p[4] = 1;
                p[7] = type;
                return;
            }
        }
        flag = 1;
        switch (type) {
        case 3:
            flag = 0;
        case 4: {
            v34[0] = x; v34[1] = y;
            func_0200b1ec(this, v34, -1, flag, 6, -1);
            break;
        }
        case 21:
            flag = 0;
        case 22: {
            v2122[0] = x; v2122[1] = y;
            func_0200a6d4(this, v2122, flag, 6, -1);
            break;
        }
        }
        break;
    case 5:
        if (unk_7ec == 0x16) {
            u8 *p = unk_7d0;
            ux = p[0];
            uy = p[1];
            if (ux == x && uy == y) {
                p[2] = 1;
                return;
            }
        }
        {
            v5[0] = x; v5[1] = y;
            func_ov003_02211674(this, v5, 6, -1);
        }
        break;
    case 6:
    case 7:
        if (sub == 2) {
            v6a[0] = x; v6a[1] = y;
            func_ov003_0220eddc(this, 1, v6a, 6, -1);
        } else {
            v6b[0] = x; v6b[1] = y;
            func_ov003_0220f064(this, sub != 0, type != 6, v6b, 6, -1);
        }
        break;
    case 8: {
        q8 = w;
        func_ov003_0220a710(this, 0, &q8, 6, -1);
        break;
    }
    case 11: {
        q11 = w;
        func_ov003_0220a710(this, 1, &q11, 6, -1);
        break;
    }
    case 9:
        flag = 0;
    case 10: {
        q10 = w;
        func_ov003_0220a344(this, &q10, flag, 6, -1);
        break;
    }
    case 19: {
        v19[0] = x; v19[1] = y;
        func_ov003_022093bc(this, 0, v19, 0xfff1, 6, -1);
        break;
    }
    case 20:
        if (unk_7ec == 0x66) {
            pa = (Unk_02005f50_Area *)unk_7d0;
            ux2 = 0;
            uy2 = 0;
            q20.x = pa->a[0]; q20.y = pa->a[1]; q20.z = pa->a[2];
            func_0204ee10(&ux2, &uy2, &q20);
            if (ux2 == x && uy2 == y) {
                func_0200ec30(this, 0x1c);
                pa->e[3] = 1;
                return;
            }
        }
        {
            v20[0] = x; v20[1] = y;
            func_ov003_02208a88(this, v20, 1, 6, -1);
        }
        break;
    case 14:
        unk_168 = 0;
        if (sub == 2) {
            v14a[0] = x; v14a[1] = y;
            func_ov003_0220eddc(this, 1, v14a, 6, -1);
        } else if (sub == 3) {
            v14b[0] = x; v14b[1] = y;
            func_ov003_0220ac74(this, 1, v14b, 6, -1);
        } else {
            v14c[0] = x; v14c[1] = y;
            func_ov003_0220f484(this, sub != 0, 1, v14c, 6, -1);
        }
        break;
    case 17:
        if (unk_7ec == 0) {
            func_0200ce98(this, 3, 1, -1);
            func_0200ec1c(this, 0x1c);
        }
        break;
    case 0: case 12: case 13: case 15: case 16: case 18: case 23: case 24: case 25: case 26:
        break;
    }
}

void Unk_02005e7c::func_020063a0() {
    s32 st;
    if (!func_02095574(&st, -1, unk_7fc)) {
        unk_8f4 = 0x93;
        return;
    }
    if (st >= 0x93) {
        unk_8f4 = 0x93;
        return;
    }
    if (func_0200ec44(this, 0x12) != 0) {
        if (st != 0x1a) {
            return;
        }
        if (unk_7ec != 0x19) {
            return;
        }
        func_0200ec1c(this, 0x12);
    }
    unk_8f4 = st;
    u8 *r = func_02095720(unk_7fc);
    if (r != NULL) {
        func_02116048(r + 4, unk_8ec, 8);
    }
    s32 a = func_0200e3c0(this, unk_7ec);
    s32 b = func_0200e3c0(this, st);
    if (a == 1 && b == 1) {
        return;
    }
    if (b == 1) {
        st = 2;
    }
    s32 idx = -1;
    r = func_02095720(unk_7fc);
    if (r != NULL) {
        idx = func_0207697c(r + 2);
    }
    s32 c = unk_c80;
    if (c >= 0 && unk_c84 == st && idx == c) {
        return;
    }
    static void (Unk_02005e7c::*tbl[147])(s32) = {
        &Unk_02005e7c::func_0200d538,
        &Unk_02005e7c::func_0200ceec,
        &Unk_02005e7c::func_0200ce28,
        &Unk_02005e7c::func_0200caf4,
        &Unk_02005e7c::func_0200c46c,
        &Unk_02005e7c::func_0200c328,
        &Unk_02005e7c::func_ov003_02211e48,
        &Unk_02005e7c::func_0200c180,
        &Unk_02005e7c::func_ov004_02224708,
        &Unk_02005e7c::func_ov004_022244d0,
        &Unk_02005e7c::func_ov004_02224254,
        &Unk_02005e7c::func_ov004_02223f7c,
        &Unk_02005e7c::func_ov004_02223e30,
        &Unk_02005e7c::func_ov004_02223cb8,
        &Unk_02005e7c::func_ov004_02223a80,
        &Unk_02005e7c::func_ov004_0222381c,
        &Unk_02005e7c::func_0200bd18,
        &Unk_02005e7c::func_ov003_0221194c,
        &Unk_02005e7c::func_ov001_02223688,
        &Unk_02005e7c::func_0200bb48,
        &Unk_02005e7c::func_0200b9cc,
        &Unk_02005e7c::func_0200b848,
        &Unk_02005e7c::func_ov003_022117c8,
        &Unk_02005e7c::func_ov003_022115f0,
        &Unk_02005e7c::func_0200b578,
        &Unk_02005e7c::func_0200ad64,
        &Unk_02005e7c::func_0200a484,
        &Unk_02005e7c::func_02009f68,
        &Unk_02005e7c::func_ov004_02223454,
        &Unk_02005e7c::func_ov004_02222d94,
        &Unk_02005e7c::func_ov004_02222b40,
        &Unk_02005e7c::func_ov004_02222838,
        &Unk_02005e7c::func_ov004_022226c0,
        &Unk_02005e7c::func_ov004_02222550,
        &Unk_02005e7c::func_ov001_022223c0,
        &Unk_02005e7c::func_ov004_022222a4,
        &Unk_02005e7c::func_ov004_02221ffc,
        &Unk_02005e7c::func_ov004_02221d4c,
        &Unk_02005e7c::func_ov004_02221b04,
        &Unk_02005e7c::func_ov004_022218bc,
        &Unk_02005e7c::func_ov004_02221778,
        &Unk_02005e7c::func_ov004_02221568,
        &Unk_02005e7c::func_ov004_0222149c,
        &Unk_02005e7c::func_ov004_0222137c,
        &Unk_02005e7c::func_ov004_0222117c,
        &Unk_02005e7c::func_ov004_02220ef4,
        &Unk_02005e7c::func_ov004_02220ce0,
        &Unk_02005e7c::func_ov004_02220ba8,
        &Unk_02005e7c::func_02009d58,
        &Unk_02005e7c::func_02009c90,
        &Unk_02005e7c::func_02009bd0,
        &Unk_02005e7c::func_02009944,
        &Unk_02005e7c::func_02009884,
        &Unk_02005e7c::func_020097d4,
        &Unk_02005e7c::func_ov004_02220a74,
        &Unk_02005e7c::func_ov004_02220954,
        &Unk_02005e7c::func_ov003_022111bc,
        &Unk_02005e7c::func_ov003_02210ef0,
        &Unk_02005e7c::func_ov003_02210d98,
        &Unk_02005e7c::func_ov003_02210b94,
        &Unk_02005e7c::func_ov003_02210720,
        &Unk_02005e7c::func_ov003_02210438,
        &Unk_02005e7c::func_ov003_0220ffd4,
        &Unk_02005e7c::func_020095f8,
        &Unk_02005e7c::func_ov004_02220744,
        &Unk_02005e7c::func_ov004_02220314,
        &Unk_02005e7c::func_ov004_02220120,
        &Unk_02005e7c::func_ov004_0221ff3c,
        &Unk_02005e7c::func_ov003_0221fe04,
        &Unk_02005e7c::func_ov003_0220fdcc,
        &Unk_02005e7c::func_ov003_0220fa3c,
        &Unk_02005e7c::func_ov003_0220f860,
        &Unk_02005e7c::func_ov003_0220f570,
        &Unk_02005e7c::func_ov003_0220f370,
        &Unk_02005e7c::func_ov003_0220f00c,
        &Unk_02005e7c::func_ov003_0220ed24,
        &Unk_02005e7c::func_ov003_0220ea4c,
        &Unk_02005e7c::func_ov003_0220e804,
        &Unk_02005e7c::func_ov003_0220e67c,
        &Unk_02005e7c::func_ov003_0220e490,
        &Unk_02005e7c::func_ov003_0220e0d8,
        &Unk_02005e7c::func_ov003_0220df10,
        &Unk_02005e7c::func_ov003_0220de20,
        &Unk_02005e7c::func_ov003_0220dcb8,
        &Unk_02005e7c::func_ov003_0220db30,
        &Unk_02005e7c::func_ov003_0220d568,
        &Unk_02005e7c::func_ov003_0220cfc0,
        &Unk_02005e7c::func_ov003_0220c30c,
        &Unk_02005e7c::func_ov003_0220baa4,
        &Unk_02005e7c::func_ov003_0220b488,
        &Unk_02005e7c::func_ov003_0220b130,
        &Unk_02005e7c::func_ov003_0220ae34,
        &Unk_02005e7c::func_ov003_0220ad50,
        &Unk_02005e7c::func_ov003_0220ab80,
        &Unk_02005e7c::func_ov003_0220a680,
        &Unk_02005e7c::func_ov003_02209f68,
        &Unk_02005e7c::func_ov003_0220987c,
        &Unk_02005e7c::func_ov003_022094fc,
        &Unk_02005e7c::func_ov003_02209310,
        &Unk_02005e7c::func_ov003_02208ff8,
        &Unk_02005e7c::func_ov003_02208c94,
        &Unk_02005e7c::func_ov003_02208b00,
        &Unk_02005e7c::func_ov003_02208984,
        &Unk_02005e7c::func_ov003_022086c4,
        &Unk_02005e7c::func_ov003_022083bc,
        &Unk_02005e7c::func_ov003_0220809c,
        &Unk_02005e7c::func_ov003_02207e3c,
        &Unk_02005e7c::func_ov003_02207d54,
        &Unk_02005e7c::func_ov003_02207cb0,
        &Unk_02005e7c::func_ov003_02207b30,
        &Unk_02005e7c::func_ov003_02207938,
        &Unk_02005e7c::func_020092c4,
        &Unk_02005e7c::func_02008f18,
        &Unk_02005e7c::func_ov003_022076e8,
        &Unk_02005e7c::func_ov003_022073c8,
        &Unk_02005e7c::func_ov003_022071ec,
        &Unk_02005e7c::func_ov003_02206edc,
        &Unk_02005e7c::func_ov003_02206adc,
        &Unk_02005e7c::func_02008cc0,
        &Unk_02005e7c::func_020086dc,
        &Unk_02005e7c::func_ov003_022069c4,
        &Unk_02005e7c::func_02008598,
        &Unk_02005e7c::func_ov004_0221fcb8,
        &Unk_02005e7c::func_ov004_0221fba4,
        &Unk_02005e7c::func_ov004_0221fadc,
        &Unk_02005e7c::func_ov004_0221f908,
        &Unk_02005e7c::func_ov004_0221f818,
        &Unk_02005e7c::func_ov004_0221f770,
        &Unk_02005e7c::func_ov003_02206750,
        &Unk_02005e7c::func_ov003_02206500,
        &Unk_02005e7c::func_ov003_02206234,
        &Unk_02005e7c::func_020083dc,
        &Unk_02005e7c::func_020082ac,
        &Unk_02005e7c::func_02008040,
        &Unk_02005e7c::func_02007dc8,
        &Unk_02005e7c::func_ov068_0226a93c,
        &Unk_02005e7c::func_ov068_0226a838,
        &Unk_02005e7c::func_ov003_02206034,
        &Unk_02005e7c::func_ov004_0221f6c4,
        &Unk_02005e7c::func_ov004_0221f448,
        &Unk_02005e7c::func_ov004_0221f0b8,
        &Unk_02005e7c::func_ov004_0221eebc,
        &Unk_02005e7c::func_ov004_0221ecb8,
        &Unk_02005e7c::func_ov003_02205dd0,
        &Unk_02005e7c::func_02007d00,
        &Unk_02005e7c::func_02007cac,
        &Unk_02005e7c::func_02007c9c
    };
    (this->*tbl[st])(idx);
}

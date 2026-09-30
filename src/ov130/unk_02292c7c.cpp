#include "types.h"

extern "C" {
extern void *data_021f482c;
extern u8 data_ov130_022931c8[];
extern u8 data_ov130_022931d0[];
extern u8 data_ov130_022931d8[];
extern u32 data_ov130_02293360[];
extern u32 data_ov130_02293470[];
extern u32 data_ov130_02293488[];
extern u8 data_ov130_02293628[];
extern u8 data_ov130_0229363c[];
extern u8 data_ov130_02293650[];
extern u8 data_ov130_02293664[];
extern u8 data_ov130_02293678[];
extern u8 data_ov130_0229368c[];
extern u8 data_ov130_022936a0[];

void func_020026c4(const void *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void func_0200261c(const void *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void func_02002438(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02002688(const void *buf, void *h, s32 a, s32 b, s32 c);
void func_020024f0(void *p, s32 a, s32 b, s32 c);
u8 *func_020641ec(u32 id, void *heap, s32 a, void *out);
void func_020641b4(u32 src, void *dst, s32 n);
void func_020e85fc(void *heap, void *p);
void func_0206f9fc(void *o, u32 v);
void func_0206ee80(void *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to);
s32 func_0209750c();
void func_0209888c();
s32 func_0209411c();
void func_02003f3c(u32 v);
void func_02292db8(s32 n);
}

// text buffer object, 0x40 bytes (vtable 0x020e0488, see src/main/unk_0206f53c.cpp)
class Unk_020e0488 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    u8 unk_04[0x3c];
};

// sound/effect handle, 0x24 bytes (see src/main/unk_020b8464.cpp)
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    virtual void vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    void func_020b87d0();
    u8 unk_04[0x20];
};

extern "C" {
void func_ov130_02292db8(s32 n);
void func_ov130_0229304c(s32 x);
}

class Unk_ov130_02292360 {
public:
    Unk_ov130_02292360();
    ~Unk_ov130_02292360();

    void func_ov130_02292360(u32 m);
    BOOL func_ov130_02292370(u32 m);
    Unk_020e0488 *func_ov130_02292380();
    void func_ov130_022923a4();
    void func_ov130_022925c8();
    void func_ov130_02292b30(u32 v);
    void func_ov130_02292ba4();
    void func_ov130_02292c7c();
    void func_ov130_02292cf4();
    void func_ov130_02292d40();
    void func_ov130_02292d68();
    void func_ov130_02292e90();
    void func_ov130_022930ac(u32 mode, u32 a, u32 b);

    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05;
    /* 0x06 */ u8 unk_06;
    /* 0x07 */ u8 unk_07;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c[0x2c - 0x1c];
    /* 0x2c */ Unk_020e0488 unk_2c[5];
    /* 0x16c */ Unk_020e45f8 unk_16c[2];
    /* 0x1b4 */ u8 unk_1b4[0x800];
    /* 0x9b4 */ u8 unk_9b4[0x800];
};

void Unk_ov130_02292360::func_ov130_02292c7c() {
    if (func_ov130_02292370(1)) {
        if (unk_16c[0].func_020b86c0((u32)unk_1b4, unk_0a, 0x800, 0)) {
            func_ov130_02292360(1);
        }
    }
    if (func_ov130_02292370(2)) {
        if (unk_16c[1].func_020b86c0((u32)unk_9b4, unk_0b, 0x800, 0)) {
            func_ov130_02292360(2);
        }
    }
}

void Unk_ov130_02292360::func_ov130_02292cf4() {
    func_ov130_022923a4();
    unk_16c[0].func_020b87d0();
    unk_16c[1].func_020b87d0();
    if (unk_03 != 0) {
        unk_03 = unk_03 - 1;
        if (*(volatile u8 *)&unk_03 == 0) {
            if (unk_02 != 0) {
                unk_03 = 1;
            } else {
                func_ov130_02292b30(unk_04);
            }
        }
    }
}

void Unk_ov130_02292360::func_ov130_02292d40() {
    func_ov130_022923a4();
    unk_16c[0].func_020b87d0();
    unk_16c[1].func_020b87d0();
}

void Unk_ov130_02292360::func_ov130_02292d68() {
    func_ov130_02292db8(unk_09);
    Unk_020e0488 *o = func_ov130_02292380();
    func_0206f9fc(o, data_ov130_022931c8[unk_07]);
    o->func_0206fb9c(8, 0x14c, 0xe, 0xf, 0, 0);
    o->func_0206fab4(1, 0);
}

void func_ov130_02292db8(s32 n) {
    void *h = data_021f482c;
    u32 local;
    func_020026c4(data_ov130_02293628, h, 8, 4, 4, 0xe);
    func_0200261c(data_ov130_0229363c, h, 8, 0xc0, 0xc0, 0x15f);
    func_0200261c(data_ov130_02293650, h, 8, 0x160, 0x160, 0x1ff);
    u8 *res = func_020641ec(data_ov130_02293360[n / 5], h, -4, &local);
    u8 *p = res + (n % 5) * 0xc0;
    s32 c = 0x15a;
    s32 i;
    for (i = 0; i < 6; i++) {
        func_02002438(p, 8, c, c, c + 5);
        p += 0x400;
        c += 0x20;
    }
    func_020e85fc(h, res);
    func_02002688(data_ov130_02293664, h, 8, n, 4);
}

void Unk_ov130_02292360::func_ov130_02292e90() {
    func_ov130_0229304c(unk_0a);
    func_020641b4(data_ov130_02293488[unk_08], unk_1b4, 0x800);
    switch (unk_07) {
    case 0:
    case 1:
        func_0206ee80(unk_1b4, 2, 8, 0xd, 9, 0xa);
        break;
    case 2:
        func_0206ee80(unk_1b4, 2, 2, 0xd, 3, 0xa);
        break;
    }
    func_020024f0(unk_1b4, unk_0a, 0x800, 0);
    func_020641b4(data_ov130_02293470[unk_08], unk_9b4, 0x800);
    func_020024f0(unk_9b4, unk_0b, 0x800, 0);
    Unk_020e0488 *o = func_ov130_02292380();
    if (unk_07 == 6) {
        func_0206f9fc(o, 0x51);
    } else {
        func_0206f9fc(o, 0xb8);
    }
    u32 a = 0xec;
    u32 b = 4;
    if (unk_07 == 6) {
        a = 0x14c;
        b = 6;
    }
    o->func_0206fb9c(unk_0b, a, b, 0xf, 0, 0);
    o->func_0206fab4(1, 0);
    o = func_ov130_02292380();
    switch (unk_07) {
    case 2:
        func_0206f9fc(o, 0x59);
        break;
    case 4:
        func_0206f9fc(o, 0x50);
        break;
    default:
        func_0206f9fc(o, 0x54);
        break;
    }
    o->func_0206fb9c(unk_0b, 0xb0, 0xa, 0xf, 0, 0);
    o->func_0206fab4(1, 0);
    o = func_ov130_02292380();
    func_0206f9fc(o, data_ov130_022931d0[unk_07]);
    o->func_0206fb9c(unk_0b, 0xc4, 0xa, 0xf, 0, 0);
    o->func_0206fab4(1, 0);
    if (unk_08 == 0 || unk_08 == 2) {
        o = func_ov130_02292380();
        func_0206f9fc(o, data_ov130_022931d8[unk_07]);
        o->func_0206fb9c(unk_0b, 0xd8, 0xa, 0xf, 0, 0);
        o->func_0206fab4(1, 0);
    }
    func_ov130_02292ba4();
    func_ov130_022925c8();
}

void func_ov130_0229304c(s32 x) {
    void *h = data_021f482c;
    func_0200261c(data_ov130_02293678, h, x, 0x10, 0x10, 0xff);
    func_0200261c(data_ov130_0229368c, h, x, 0x100, 0x100, 0x1a9);
    func_020026c4(data_ov130_022936a0, h, x, 1, 1, 0xd);
}

void Unk_ov130_02292360::func_ov130_022930ac(u32 mode, u32 a, u32 b) {
    unk_00 = 0;
    unk_07 = mode;
    switch (unk_07) {
    case 0:
        unk_08 = 2;
        unk_09 = 0;
        break;
    case 1:
        unk_08 = 2;
        unk_09 = 5;
        break;
    case 2:
        unk_08 = 2;
        unk_09 = 1;
        break;
    case 3:
        unk_08 = 3;
        unk_09 = 2;
        break;
    case 4:
        unk_08 = 5;
        unk_09 = 3;
        break;
    case 5:
        unk_08 = 3;
        unk_09 = 4;
        break;
    case 6:
        unk_08 = 4;
        unk_09 = 6;
        break;
    }
    unk_0a = a;
    unk_0b = b;
    func_ov130_022923a4();
    unk_05 = 0xa;
    unk_04 = 0xd;
    unk_03 = 0;
    unk_02 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
    if (func_0209750c() != 0) {
        func_0209888c();
        if (func_0209411c() == 0) {
            func_02003f3c(0);
            return;
        }
    }
    func_02003f3c(1);
}

Unk_ov130_02292360::~Unk_ov130_02292360() {}

Unk_ov130_02292360::Unk_ov130_02292360() {}

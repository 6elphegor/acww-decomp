// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222deb4_G {
    void *unk_00;
    void *unk_04[3];
    void *unk_10[3];
    u8 unk_1c;
    u8 unk_1d;
};

struct Unk_ov001_02219c3c_Q { u8 b[4]; };

extern "C" {
extern u8 data_ov001_0222b1fc[];
extern u8 data_ov001_0222b214[];
extern u8 data_ov001_0222b22c[];
extern u8 data_ov001_0222b240[];
extern u8 data_ov001_0222b244[];
extern u8 data_ov001_0222b260[];
extern u16 data_ov001_0222deac;
extern u8 data_ov001_0222dea8;
extern u8 data_ov001_0222deb0;
extern Unk_ov001_0222deb4_G *data_ov001_0222deb4;
extern u8 data_ov001_0222a15c[];
extern u16 data_ov001_0222a168[];
extern u16 data_ov001_0222a16a[];
extern u8 data_ov001_0222a1b8[];
extern u8 data_ov001_0222a1ba[];
extern u8 data_ov001_0222a1bc[];
extern u8 data_ov001_0222a1be[];

extern void func_0211172c();
extern void func_02111ec8();
extern void func_02111a6c();
extern void func_02111df8();
extern void func_ov001_02224ff8(s32, s32, s32, s32);
extern void func_ov001_02225cb4(s32, s32);
extern void func_ov001_02225c58(s32, s32);
extern void func_ov001_0220c668(void *);
extern s32 func_ov001_02208594(void *, void *);
extern void func_ov001_02208290(s32, s32, s32);
extern void func_ov001_022088f8();
extern void func_ov001_02208538(s32);
extern void func_ov001_02208478(s32);
extern void func_ov001_02207a40(s32);
extern void func_ov001_0221dca4();
extern void func_ov001_0221db6c();
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0221ce08(void *, s32, s32);
extern s32 func_ov001_0221e434();
extern s32 func_ov001_02224670(void *, s32, s32, s32);
extern s32 func_ov001_022206f8();
extern void func_ov001_02208088();
extern s32 func_ov001_02220714();
extern void func_ov001_02220728();
extern void func_ov001_0221dfcc(s32);
extern void *func_ov001_022247d4(void *, s32);
extern void func_ov001_02224b9c(s32, s32, void *);
extern void func_ov001_02224558(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void func_ov001_022247e0(void *);
extern void func_ov001_02208690(s32, s32, s32, s32);
extern void func_ov001_02208780(s32, s32, s32, s32);
extern s32 func_ov001_022250e0(s32);
extern s32 func_ov001_0221eb38();
extern s32 func_ov001_022080a0();
extern void func_ov001_0220864c();
extern void func_ov001_02208244();
extern void func_ov001_02224038(void *);
extern void func_ov001_0220c654(s32, s32);
extern void func_ov001_0220c618(s32, s32);
extern u8 *func_ov001_0221e8b4();
extern void func_ov001_022156e0(s32);
extern void func_ov001_02225d58(void *);
extern void func_ov001_0220dd94();
extern void func_ov001_0221b318();
extern void func_ov001_02217e40();
extern void func_ov001_0221c5a0();
extern void func_ov001_0221a780();

void func_ov001_02219a40();
void func_ov001_02219a98();
void func_ov001_02219af8();
void func_ov001_02219bc0();
void func_ov001_02219c3c();
void func_ov001_02219d2c();
void func_ov001_02219d64();
void func_ov001_02219ee4();
void func_ov001_02219f80(u32 a);
void func_ov001_0221a1a8();
void func_ov001_0221a238();

#pragma thumb off

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

void func_ov001_02219a98() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02219a40);
}

void func_ov001_02219af8() {
    func_ov001_02208594(data_ov001_0222b1fc, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222b214, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222b22c, (void *)func_02111a6c);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x4000008, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

void func_ov001_02219bc0() {
    data_ov001_0222deac = 0;
    data_ov001_0222dea8 = 0;
    func_ov001_02219af8();
    func_ov001_02208290(0x7f, -1, 0);
    func_ov001_022088f8();
    func_ov001_02208538(2);
    func_ov001_02208478(0x7f);
    func_ov001_02207a40(0);
    func_ov001_0221dca4();
    func_ov001_0221db6c();
    func_ov001_0221e9a0(10);
    func_ov001_0220c668((void *)func_ov001_02219a98);
}

void func_ov001_02219c3c() {
    Unk_ov001_02219c3c_Q b = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b240;
    Unk_ov001_02219c3c_Q c = *(Unk_ov001_02219c3c_Q *)data_ov001_0222b244;
    if (data_ov001_0222deb0 > 3) return;
    u32 v = b.b[data_ov001_0222deb0];
    func_ov001_0221ce08(data_ov001_0222deb4->unk_00, v, v);
    if (data_ov001_0222deb0 == 3) return;
    s32 r = func_ov001_0221e434();
    if (r > 2) r = 3;
    func_ov001_02224670(data_ov001_0222deb4->unk_04[data_ov001_0222deb0], -1, 0, c.b[r]);
}

void func_ov001_02219d2c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221a780);
}

void func_ov001_02219d64() {
    s32 i = data_ov001_0222deb0 - 4;
    s32 r = func_ov001_02220714();
    switch (r) {
    case 1:
        func_ov001_0221e9a0(14);
        func_ov001_0221dfcc(i);
        func_ov001_02224b9c(0, data_ov001_0222a15c[3], func_ov001_022247d4(data_ov001_0222deb4->unk_04[i], 0));
        func_ov001_02224558(data_ov001_0222deb4->unk_04[i], -1, ((u16 (*)[2])data_ov001_0222a168)[i][0], ((u16 (*)[2])data_ov001_0222a16a)[i][0]);
        func_ov001_022244d8(data_ov001_0222deb4->unk_04[i], -1, 3);
        func_ov001_022247e0(data_ov001_0222deb4->unk_10[i]);
        data_ov001_0222deb4->unk_10[i] = 0;
        break;
    case 0:
        func_ov001_0221e9a0(7);
        func_ov001_02224b9c(0, 0x11, func_ov001_022247d4(data_ov001_0222deb4->unk_10[i], 0));
        func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, data_ov001_0222a168[(i + 3) * 2], data_ov001_0222a16a[(i + 3) * 2]);
        func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
        break;
    default:
        return;
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02219d2c);
}

void func_ov001_02219ee4() {
    s32 i = data_ov001_0222deb0 - 4;
    func_ov001_02224b9c(0, 0x32, func_ov001_022247d4(data_ov001_0222deb4->unk_10[i], 0));
    func_ov001_02224558(data_ov001_0222deb4->unk_10[i], -1, data_ov001_0222a168[(i + 3) * 2], data_ov001_0222a16a[(i + 3) * 2]);
    func_ov001_022244d8(data_ov001_0222deb4->unk_10[i], -1, 3);
}

void func_ov001_02219f80(u32 a) {
    u32 f = 1;
    switch (data_ov001_0222deb0) {
    case 0:
        data_ov001_0222deb4->unk_1c = 0;
        if (a == 0) data_ov001_0222deb0 = 2;
        else if (a == 2) data_ov001_0222deb0 = 1;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 4;
        break;
    case 1:
        data_ov001_0222deb4->unk_1c = 1;
        if (a == 0) data_ov001_0222deb0 = 0;
        else if (a == 2) data_ov001_0222deb0 = 2;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 5;
        break;
    case 2:
        data_ov001_0222deb4->unk_1c = 2;
        if (a == 0) data_ov001_0222deb0 = 1;
        else if (a == 2) data_ov001_0222deb0 = 0;
        else if (a == 1) data_ov001_0222deb0 = 3;
        else data_ov001_0222deb0 = 6;
        break;
    case 3: {
        u32 t = data_ov001_0222deb4->unk_1c;
        u32 t4 = t + 4;
        if (a == 1) data_ov001_0222deb0 = t4;
        else if (a == 3) data_ov001_0222deb0 = t;
        else f = 0;
        break;
    }
    case 4:
        data_ov001_0222deb4->unk_1c = 0;
        if (a == 0) data_ov001_0222deb0 = 6;
        else if (a == 2) data_ov001_0222deb0 = 5;
        else if (a == 1) data_ov001_0222deb0 = 0;
        else data_ov001_0222deb0 = 3;
        break;
    case 5:
        data_ov001_0222deb4->unk_1c = 1;
        if (a == 0) data_ov001_0222deb0 = 4;
        else if (a == 2) data_ov001_0222deb0 = 6;
        else if (a == 1) data_ov001_0222deb0 = 1;
        else data_ov001_0222deb0 = 3;
        break;
    case 6:
        data_ov001_0222deb4->unk_1c = 2;
        if (a == 0) data_ov001_0222deb0 = 5;
        else if (a == 2) data_ov001_0222deb0 = 4;
        else if (a == 1) data_ov001_0222deb0 = 2;
        else data_ov001_0222deb0 = 3;
        break;
    }
    if (f == 0) return;
    func_ov001_0221e9a0(8);
    func_ov001_0221a1a8();
}

void func_ov001_0221a1a8() {
    u32 i = data_ov001_0222deb0;
    if (i < 4) {
        func_ov001_02208690(*(u16 *)(data_ov001_0222a1b8 + (i << 3)), *(u16 *)(data_ov001_0222a1bc + (i << 3)), *(u16 *)(data_ov001_0222a1ba + (i << 3)), *(u16 *)(data_ov001_0222a1be + (i << 3)));
    } else {
        func_ov001_02208780(0, *(u16 *)(data_ov001_0222a1b8 + (i << 3)), *(u16 *)(data_ov001_0222a1bc + (i << 3)), *(u16 *)(data_ov001_0222a1ba + (i << 3)));
    }
}

void func_ov001_0221a238() {
    s32 i;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0221eb38() == 0) return;
    if (func_ov001_022080a0() == 0) return;
    for (i = 0; (u32)i < 3; i++) {
        if (data_ov001_0222deb4->unk_04[i] != 0) func_ov001_022247e0(data_ov001_0222deb4->unk_04[i]);
    }
    for (i = 0; (u32)i < 3; i++) {
        if (data_ov001_0222deb4->unk_10[i] != 0) func_ov001_022247e0(data_ov001_0222deb4->unk_10[i]);
    }
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222deb4->unk_00);
    func_ov001_02208594(data_ov001_0222b260, (void *)func_02111df8);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    if (data_ov001_0222deb4->unk_1d == 2) {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0220dd94);
    } else {
        switch (data_ov001_0222deb0) {
        case 0: case 1: case 2:
            func_ov001_0220c654(2, 0);
            if (func_ov001_0221e8b4()[0xe7] == 0xff) {
                func_ov001_0220c668((void *)func_ov001_0221b318);
            } else {
                func_ov001_0220c618(0, 0);
                func_ov001_022156e0(0);
                func_ov001_0220c668((void *)func_ov001_02217e40);
            }
            break;
        case 3:
            func_ov001_0220c654(2, 1);
            func_ov001_0220c668((void *)func_ov001_0221c5a0);
            break;
        }
    }
    func_ov001_02225d58(&data_ov001_0222deb4);
}

}

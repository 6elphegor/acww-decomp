// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
extern u8 data_ov001_0222de98;
extern u8 data_ov001_0222de9c;
extern u8 data_ov001_0222dea0;
extern u8 data_ov001_0222dea4;
extern u8 data_ov001_0222b190[];
extern u8 data_ov001_0222b1a4[];

s32 func_021132e0(s32);
s32 func_02111a6c();
s32 func_ov001_0221873c();
s32 func_ov001_022088f8();
s32 func_ov001_02208478(s32);
s32 func_ov001_02207a40(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0221e93c();
s32 func_ov001_0220d23c();
s32 func_ov001_0220d20c();
s32 func_ov001_0220d310();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_02208070();
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
s32 func_ov001_022079fc();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208114();
s32 func_ov001_02208100();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_02208088();
s32 func_ov001_022084f8(s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0221be7c();
s32 func_ov001_0221b318();
s32 func_ov001_022192f4();
void func_ov001_022186fc();
void func_ov001_02218b14();
void func_ov001_02218844();
void func_ov001_02218878();
void func_ov001_02218a9c();
void func_ov001_022189b4();
void func_ov001_0221901c();
void func_ov001_02218bd8();
void func_ov001_02218e9c();
void func_ov001_02218c40();
void func_ov001_02218c04();
void func_ov001_02218c80();
void func_ov001_02218ee8();
void func_ov001_02218f04();
void func_ov001_02218f3c();
void func_ov001_02219064();
void func_ov001_02219098();
void func_ov001_02218e10();
BOOL func_ov001_02218da8();
void func_ov001_02218cc0();
void func_ov001_02218f7c();
void func_ov001_022188b8();
void func_ov001_02218b84();
void func_ov001_02218b80();
void func_ov001_02218b40();
void func_ov001_02218dc8();
void func_ov001_02218ee4();

void func_ov001_022187dc() {
    data_ov001_0222de98 = 0;
    func_ov001_0221873c();
    func_ov001_022088f8();
    func_ov001_02208478(0x6a);
    func_ov001_02207a40(1);
    func_ov001_0220c668((void *)func_ov001_022186fc);
}

BOOL func_ov001_02218824() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void func_ov001_02218844() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_02218b14);
}

void func_ov001_02218878() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02218844);
}

void func_ov001_022188b8() {
    switch (func_ov001_0220d23c()) {
    case 3:
        data_ov001_0222de9c = 1;
        func_ov001_0221e93c();
        func_ov001_0220d20c();
        func_ov001_0220c668((void *)func_ov001_02218b14);
        break;
    case 4:
        data_ov001_0222de9c = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_02220778(0x41, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02218878);
        break;
    case 5:
        data_ov001_0222de9c = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(0x12);
        func_ov001_02220778(0x42, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02218878);
        break;
    }
}

void func_ov001_022189b4() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222de9c == 0) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222de9c == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_0220d310();
    if (data_ov001_0222de9c == 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
    } else {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0221901c);
    }
}

void func_ov001_02218a9c() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de9c == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_022189b4);
}

void func_ov001_02218b14() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02218a9c);
}

void func_ov001_02218b40() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_02218b14);
}

void func_ov001_02218b80() {
}

void func_ov001_02218b84() {
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_02218da8() == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02218bd8() {
    func_021132e0(10);
    func_ov001_022188b8();
    func_ov001_02218b84();
    func_ov001_02218b80();
    func_ov001_02218b40();
}

void func_ov001_02218c04() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02218bd8);
}

void func_ov001_02218c40() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02218c04);
}

void func_ov001_02218c80() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02218c40);
}

void func_ov001_02218cc0() {
    func_ov001_02208594(data_ov001_0222b190, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void func_ov001_02218d60() {
    data_ov001_0222de9c = 0;
    func_ov001_02218cc0();
    func_ov001_022088f8();
    func_ov001_02208478(0x71);
    func_ov001_02207a40(2);
    func_ov001_0220c668((void *)func_ov001_02218c80);
}

BOOL func_ov001_02218da8() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void func_ov001_02218dc8() {
    data_ov001_0222dea0++;
    if (data_ov001_0222dea0 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_02218e9c);
}

void func_ov001_02218e10() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 0);
    func_ov001_0220c618(0, 1);
    func_ov001_0220c668((void *)func_ov001_0221be7c);
}

void func_ov001_02218e9c() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02218e10);
}

void func_ov001_02218ee4() {
}

void func_ov001_02218ee8() {
    func_ov001_02218dc8();
    func_ov001_02218ee4();
}

void func_ov001_02218f04() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_02218ee8);
}

void func_ov001_02218f3c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02218f04);
}

void func_ov001_02218f7c() {
    func_ov001_02208594(data_ov001_0222b1a4, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x4000008;
    volatile u16 *r4 = (volatile u16 *)0x400000a;
    volatile u16 *r5 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
    *r5 = (*r5 & ~3) | 3;
}

void func_ov001_0221901c() {
    data_ov001_0222dea0 = 0;
    func_ov001_02218f7c();
    func_ov001_022088f8();
    func_ov001_02208478(0x6b);
    func_ov001_0221e9a0(0x10);
    func_ov001_0220c668((void *)func_ov001_02218f3c);
}

void func_ov001_02219064() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_022192f4);
}

void func_ov001_02219098() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02219064);
}

void func_ov001_022190d8() {
    switch (func_ov001_0220d23c()) {
    case 1:
        data_ov001_0222dea4 = 1;
        func_ov001_0220c668((void *)func_ov001_022192f4);
        break;
    case 4:
        data_ov001_0222dea4 = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_02220778(0x41, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02219098);
        break;
    }
}

}

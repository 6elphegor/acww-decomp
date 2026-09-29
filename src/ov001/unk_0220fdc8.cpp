// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_ov001_0222de40;
extern u8 data_ov001_0222de44;
extern u8 data_ov001_0222de48;
extern u8 data_ov001_0222de4c;
extern u8 data_ov001_0222adec[];
extern u8 data_ov001_0222ae00[];
extern u8 func_02111a6c[];

s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_0220d064();
s32 func_ov001_0220c668(void *p);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_02208478(u32 a);
s32 func_ov001_0220891c(u32 a);
s32 func_ov001_02208290(u32 a, s32 b, u32 c);
s32 func_ov001_02208070();
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_02208100();
s32 func_ov001_022261cc(u32 a);
s32 func_ov001_022080e0(u32 a);
s32 func_ov001_02208088();
s32 func_ov001_022084f8(u32 a);
s32 func_ov001_022080a0();
s32 func_ov001_02208114();
s32 func_ov001_02208244();
s32 func_ov001_0220f304();
s32 func_ov001_02211150();

void func_ov001_0220fcdc();
void func_ov001_0220fdc8();
void func_ov001_0220fe40();
void func_ov001_0220fe6c();
void func_ov001_0220fed0();
void func_ov001_0220fed4();
void func_ov001_0220ff20();
void func_ov001_0220ff40();
void func_ov001_0220ff7c();
void func_ov001_0220ffbc();
void func_ov001_0221001c();
void func_ov001_022100bc();
void func_ov001_02210110();
void func_ov001_02210158();
void func_ov001_022101d8();
void func_ov001_02210220();
void func_ov001_02210224();
void func_ov001_02210240();
void func_ov001_0221028c();
void func_ov001_022102cc();
void func_ov001_02210354();
void func_ov001_02210390();
void func_ov001_0221046c();
void func_ov001_022104e4();
void func_ov001_02210510();
void func_ov001_0221057c();
void func_ov001_02210580();
void func_ov001_022105cc();
void func_ov001_022105ec();
void func_ov001_0221063c();
void func_ov001_02210694();

#pragma thumb off

void func_ov001_0220fdc8() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de40 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220fcdc);
}

void func_ov001_0220fe40() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220fdc8);
}

void func_ov001_0220fe6c() {
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_ov001_0221e9a0(6);
        data_ov001_0222de40 = 1;
        break;
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_0220fe40);
}

void func_ov001_0220fed0() {
}

void func_ov001_0220fed4() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0220ff20() {
    func_ov001_0220fed4();
    func_ov001_0220fed0();
    func_ov001_0220fe6c();
}

void func_ov001_0220ff40() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220ff20);
}

void func_ov001_0220ff7c() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_0220ff40);
}

void func_ov001_0220ffbc() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220ff7c);
}

void func_ov001_0221001c() {
    func_ov001_02208594(data_ov001_0222adec, (void *)func_02111a6c);
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

void func_ov001_022100bc() {
    data_ov001_0222de40 = 0;
    func_ov001_0221001c();
    func_ov001_0220891c(0x13);
    func_ov001_02208290(0x8d, -1, 0);
    func_ov001_02208478(0x5d);
    func_ov001_0220c668((void *)func_ov001_0220ffbc);
}

void func_ov001_02210110() {
    data_ov001_0222de44 = data_ov001_0222de44 + 1;
    if (data_ov001_0222de44 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_022101d8);
}

void func_ov001_02210158() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 1);
    func_ov001_0220c668((void *)func_ov001_0220f304);
}

void func_ov001_022101d8() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02210158);
}

void func_ov001_02210220() {
}

void func_ov001_02210224() {
    func_ov001_02210110();
    func_ov001_02210220();
}

void func_ov001_02210240() {
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0220d064() == 0) return;
    func_ov001_0220c668((void *)func_ov001_02210224);
}

void func_ov001_0221028c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02210240);
}

void func_ov001_022102cc() {
    func_ov001_02208594(data_ov001_0222ae00, (void *)func_02111a6c);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

void func_ov001_02210354() {
    data_ov001_0222de44 = 0;
    func_ov001_022102cc();
    func_ov001_02208478(0x63);
    func_ov001_0220c668((void *)func_ov001_0221028c);
}

void func_ov001_02210390() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    if (data_ov001_0222de4c == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de4c == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220f304);
    } else {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_02211150);
    }
}

void func_ov001_0221046c() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de4c == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02210390);
}

void func_ov001_022104e4() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221046c);
}

void func_ov001_02210510() {
    s32 r = func_ov001_02208100();
    if (r != 0) {
        if (r != 1) return;
        data_ov001_0222de4c = 1;
        func_ov001_0221e9a0(6);
    } else {
        data_ov001_0222de4c = 0;
        func_ov001_0221e9a0(7);
    }
    func_ov001_0220c668((void *)func_ov001_022104e4);
}

void func_ov001_0221057c() {
}

void func_ov001_02210580() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_022105cc() {
    func_ov001_02210580();
    func_ov001_0221057c();
    func_ov001_02210510();
}

void func_ov001_022105ec() {
    if (func_ov001_02208100() == -2) return;
    if (func_ov001_0220d064() == 0) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_022105cc);
}

void func_ov001_0221063c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_022105ec);
}

void func_ov001_02210694() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    if (data_ov001_0222de48 != 0) {
        func_ov001_02224ff8(2, 1, 1, 8);
        func_ov001_02225cb4(1, 1);
    }
    func_ov001_0220c668((void *)func_ov001_0221063c);
}

#pragma thumb reset
}

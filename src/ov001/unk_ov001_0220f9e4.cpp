// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 func_02111a6c[];
s32 func_01ffa494(u32 a);
s32 func_0211c670();
s32 func_ov001_022079fc();
s32 func_ov001_02207a40(u32 a);
s32 func_ov001_02208070();
s32 func_ov001_02208088();
s32 func_ov001_022080a0();
s32 func_ov001_022080e0(u32 a);
s32 func_ov001_02208100();
s32 func_ov001_02208114();
s32 func_ov001_02208244();
s32 func_ov001_02208290(u32 a, s32 b, u32 c);
s32 func_ov001_02208478(u32 a);
s32 func_ov001_022084f8(u32 a);
void func_ov001_02208594(void *a, void *b);
s32 func_ov001_0220891c(u32 a);
s32 func_ov001_02208af8();
s32 func_ov001_02208b4c(u32 a);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_0220d04c(void *a);
s32 func_ov001_0220d064();
s32 func_ov001_0220d0c4();
s32 func_ov001_0220f304();
s32 func_ov001_0220f3fc(s32 a);
s32 func_ov001_0220f490();
s32 func_ov001_0220f550();
void func_ov001_0220f584();
void func_ov001_0220f588();
void func_ov001_0220f58c();
s32 func_ov001_0220f5a8();
s32 func_ov001_0220f5ec();
void func_ov001_0220f62c();
s32 func_ov001_0220f6cc();
s32 func_ov001_0220f710();
s32 func_ov001_0220f760();
s32 func_ov001_0220f7c0();
s32 func_ov001_0220f7ec();
void func_ov001_0220f828();
s32 func_ov001_0220f82c();
s32 func_ov001_0220f860();
s32 func_ov001_0220f880();
s32 func_ov001_0220f8bc();
s32 func_ov001_0220f8fc();
void func_ov001_0220f93c();
s32 func_ov001_0220f9b8();
s32 func_ov001_0220f9e4();
s32 func_ov001_0220fa50();
s32 func_ov001_0220faa0();
s32 func_ov001_0220facc();
void func_ov001_0220fb08();
s32 func_ov001_0220fb0c();
s32 func_ov001_0220fb40();
s32 func_ov001_0220fb60();
s32 func_ov001_0220fb9c();
s32 func_ov001_0220fbf4();
void func_ov001_0220fc34();
s32 func_ov001_0220fcb0();
s32 func_ov001_0220fcdc();
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
s32 func_ov001_02210354();
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
s32 func_ov001_022107a8();
s32 func_ov001_02211150();
s32 func_ov001_0221df10();
s32 func_ov001_0221e93c();
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_022261cc(u32 a);

u8 data_ov001_0222de40;

#pragma thumb off

#define C668(f) func_ov001_0220c668((void *)f)
#define BGCNT_SET(a) *(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3

void func_ov001_022100bc() {
    data_ov001_0222de40 = 0;
    func_ov001_0221001c();
    func_ov001_0220891c(0x13);
    func_ov001_02208290(0x8d, -1, 0);
    func_ov001_02208478(0x5d);
    func_ov001_0220c668((void *)func_ov001_0220ffbc);
}

void func_ov001_0221001c() {
    func_ov001_02208594((void *)"char/yb5Multi.nsc.l", (void *)func_02111a6c);
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

void func_ov001_0220ffbc() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220ff7c);
}

void func_ov001_0220ff7c() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_0220ff40);
}

void func_ov001_0220ff40() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220ff20);
}

void func_ov001_0220ff20() {
    func_ov001_0220fed4();
    func_ov001_0220fed0();
    func_ov001_0220fe6c();
}

void func_ov001_0220fed4() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0220fed0() {
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

void func_ov001_0220fe40() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220fdc8);
}

void func_ov001_0220fdc8() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de40 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220fcdc);
}

s32 func_ov001_0220fcdc() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222de40 == 0) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    if (data_ov001_0222de40 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de40 == 0) {
        func_ov001_0220c654(0, 1);
        C668(func_ov001_0220f304);
    } else {
        func_ov001_0220c654(0, 1);
        C668(func_ov001_0220fcb0);
    }
}

s32 func_ov001_0220fcb0() {
    func_ov001_0220fc34();
    func_ov001_02208478(0x5c);
    C668(func_ov001_0220fbf4);
}

void func_ov001_0220fc34() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 func_ov001_0220fbf4() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    C668(func_ov001_0220fb9c);
}

s32 func_ov001_0220fb9c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(4);
    C668(func_ov001_0220fb60);
}

s32 func_ov001_0220fb60() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    C668(func_ov001_0220fb40);
}

s32 func_ov001_0220fb40() {
    func_ov001_0220fb0c();
    func_ov001_0220fb08();
    func_ov001_0220facc();
}

s32 func_ov001_0220fb0c() {
    if (func_ov001_022261cc(1) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0220fb08() {}

s32 func_ov001_0220facc() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    C668(func_ov001_0220faa0);
}

s32 func_ov001_0220faa0() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    C668(func_ov001_0220fa50);
}

s32 func_ov001_0220fa50() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 0, 0x15, 8);
    C668(func_ov001_0220f9e4);
}

s32 func_ov001_0220f9e4() {
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 1);
    C668(func_ov001_02211150);
}
}

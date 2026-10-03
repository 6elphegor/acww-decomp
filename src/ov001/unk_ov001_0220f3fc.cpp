// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
s32 OS_SpinWait(u32 a);
s32 PM_ForceToPowerOff();
s32 func_ov001_022079fc();
s32 func_ov001_02207a40(u32 a);
s32 func_ov001_02208070();
s32 func_ov001_02208088();
s32 func_ov001_022080a0();
s32 func_ov001_022080e0(u32 a);
s32 func_ov001_02208100();
s32 func_ov001_02208114();
s32 func_ov001_02208244();
s32 func_ov001_02208478(u32 a);
s32 func_ov001_022084f8(u32 a);
void func_ov001_02208594(void *a, void *b);
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
s32 func_ov001_02210354();
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

u8 data_ov001_0222de3c;

#pragma thumb off

#define C668(f) func_ov001_0220c668((void *)f)
#define BGCNT_SET(a) *(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | 3

static inline void Unk_ov001_0220f62c_Bg() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 func_ov001_0220f9b8() {
    func_ov001_0220f93c();
    func_ov001_02208478(0x61);
    C668(func_ov001_0220f8fc);
}

void func_ov001_0220f93c() {
    BGCNT_SET(0x4001008);
    BGCNT_SET(0x400100a);
    BGCNT_SET(0x4000008);
    BGCNT_SET(0x400000a);
    BGCNT_SET(0x400000c);
}

s32 func_ov001_0220f8fc() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    C668(func_ov001_0220f8bc);
}

s32 func_ov001_0220f8bc() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(5);
    C668(func_ov001_0220f880);
}

s32 func_ov001_0220f880() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    C668(func_ov001_0220f860);
}

s32 func_ov001_0220f860() {
    func_ov001_0220f82c();
    func_ov001_0220f828();
    func_ov001_0220f7ec();
}

s32 func_ov001_0220f82c() {
    if (func_ov001_022261cc(1) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0220f828() {}

s32 func_ov001_0220f7ec() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    C668(func_ov001_0220f7c0);
}

s32 func_ov001_0220f7c0() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    C668(func_ov001_0220f760);
}

s32 func_ov001_0220f760() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 0x3f, 0x40);
    func_ov001_02224ff8(3, 0, 0x3f, 0x40);
    C668(func_ov001_0220f710);
}

s32 func_ov001_0220f710() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    OS_SpinWait(0x1000000);
    PM_ForceToPowerOff();
}

s32 func_ov001_0220f6cc() {
    func_ov001_0220f62c();
    func_ov001_02208478(0x60);
    func_ov001_02207a40(0);
    func_ov001_02208b4c(1);
    func_ov001_0221e9a0(0xb);
    C668(func_ov001_0220f5ec);
}

void func_ov001_0220f62c() {
    func_ov001_02208594((void *)"char/yb5Multi.nsc.l", GX_LoadBG2Scr);
    Unk_ov001_0220f62c_Bg();
}

s32 func_ov001_0220f5ec() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    C668(func_ov001_0220f5a8);
}

s32 func_ov001_0220f5a8() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220d04c((void *)func_ov001_0220f3fc);
    C668(func_ov001_0220f58c);
}

void func_ov001_0220f58c() {
    func_ov001_0220f588();
    func_ov001_0220f584();
}

void func_ov001_0220f588() {}

void func_ov001_0220f584() {}

s32 func_ov001_0220f550() {
    func_ov001_02224ff8(3, 0, 0x15, 8);
    C668(func_ov001_0220f490);
}

s32 func_ov001_0220f490() {
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0220d064() == 0) return;
    func_ov001_02208af8();
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 1);
    if (data_ov001_0222de3c == 0) {
        C668(func_ov001_022107a8);
    } else if (data_ov001_0222de3c == 2) {
        C668(func_ov001_02210354);
    } else {
        C668(func_ov001_0220f9b8);
    }
}

s32 func_ov001_0220f3fc(s32 a) {
    if (a == 2) {
        func_ov001_0221df10();
        data_ov001_0222de3c = 1;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(0x10);
    } else if (a == 3) {
        data_ov001_0222de3c = 2;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(0x12);
    } else {
        data_ov001_0222de3c = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(0x12);
    }
    func_ov001_0220d04c(0);
    func_ov001_0220d0c4();
    C668(func_ov001_0220f550);
}
}

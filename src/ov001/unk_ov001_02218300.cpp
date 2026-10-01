// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

extern "C" {
u8 data_ov001_0222de98;
}

extern "C" {
s32 func_02111a6c(void *, s32, u32);
s32 func_021132e0(s32);
s32 func_ov001_022079fc();
s32 func_ov001_02207a40(s32);
s32 func_ov001_02208070();
s32 func_ov001_02208088();
s32 func_ov001_022080a0();
s32 func_ov001_022080e0(s32);
s32 func_ov001_02208100();
s32 func_ov001_02208114();
s32 func_ov001_02208244();
s32 func_ov001_02208478(s32);
s32 func_ov001_022084f8(s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_022088f8();
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220d23c();
s32 func_ov001_0220d310();
void func_ov001_02218300();
void func_ov001_02218334();
void func_ov001_02218374();
void func_ov001_02218414();
void func_ov001_02218508();
void func_ov001_02218590();
void func_ov001_022185bc();
void func_ov001_022185fc();
void func_ov001_02218600();
void func_ov001_02218654();
void func_ov001_02218680();
void func_ov001_022186bc();
void func_ov001_022186fc();
void func_ov001_0221873c();
void func_ov001_022187dc();
BOOL func_ov001_02218824();
void func_ov001_02218d60();
s32 func_ov001_0221b318();
s32 func_ov001_0221e93c();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_022253d4(s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_022261cc(s32);
}

extern "C" BOOL func_ov001_02218824() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

extern "C" void func_ov001_022187dc() {
    data_ov001_0222de98 = 0;
    func_ov001_0221873c();
    func_ov001_022088f8();
    func_ov001_02208478(0x6a);
    func_ov001_02207a40(1);
    func_ov001_0220c668((void *)func_ov001_022186fc);
}

extern "C" void func_ov001_0221873c() {
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)func_02111a6c);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

extern "C" void func_ov001_022186fc() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022186bc);
}

extern "C" void func_ov001_022186bc() {
    if (func_ov001_022250e0(0)) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02218680);
}

extern "C" void func_ov001_02218680() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02218654);
}

extern "C" void func_ov001_02218654() {
    func_021132e0(10);
    func_ov001_02218374();
    func_ov001_02218600();
    func_ov001_022185fc();
    func_ov001_022185bc();
}

extern "C" void func_ov001_02218600() {
    if (func_ov001_022261cc(2)) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_02218824() == 0) return;
    func_ov001_022080e0(0);
}

extern "C" void func_ov001_022185fc() {}

extern "C" void func_ov001_022185bc() {
    if (func_ov001_02208100()) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_02218590);
}

extern "C" void func_ov001_02218590() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02218508);
}

extern "C" void func_ov001_02218508() {
    if (func_ov001_022250e0(1)) return;
    if (data_ov001_0222de98 == 0) {
        func_ov001_02208114();
    }
    if (data_ov001_0222de98 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02218414);
}

extern "C" void func_ov001_02218414() {
    if (func_ov001_022250e0(0)) return;
    if (data_ov001_0222de98 == 0) {
        if (func_ov001_022250e0(1)) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222de98 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de98 == 0) {
        func_ov001_0220d310();
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
        return;
    }
    func_ov001_0220c654(0, 0);
    func_ov001_0220c668((void *)func_ov001_02218d60);
}

extern "C" void func_ov001_02218374() {
    switch (func_ov001_0220d23c()) {
    case 2:
        data_ov001_0222de98 = 1;
        func_ov001_0220c668((void *)func_ov001_02218590);
        break;
    case 4:
        data_ov001_0222de98 = 0;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_02220778(0x41, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02218334);
        break;
    }
}

extern "C" void func_ov001_02218334() {
    if (func_ov001_02220714()) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02218300);
}

extern "C" void func_ov001_02218300() {
    if (func_ov001_022206f8()) return;
    func_ov001_0220c668((void *)func_ov001_02218590);
}

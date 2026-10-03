// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_022198a4_E { u8 pad_00[0x28]; u8 unk_28; u8 pad_29[0x1]; };

extern "C" {
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
void func_ov001_022079fc();
void func_ov001_022253d4(s32);
void func_ov001_02208244();
void func_ov001_02225c58(s32, s32);
void func_ov001_02225cb4(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220c668(void *);
void func_ov001_02208114();
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
void func_ov001_0221e93c();
void func_ov001_0221e9a0(s32);
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
void func_ov001_02208088();
void func_ov001_022084f8(s32);
s32 func_ov001_02208594(void *, void *);
void GX_LoadBG2Char();
void GX_LoadBGPltt();
void GX_LoadBG2Scr();
void func_ov001_022088f8();
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void func_ov001_02208478(s32);
void func_ov001_02207a40(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
void func_ov001_02220728();
s32 func_ov001_0221da70();
void func_ov001_0221dc60();
u8 *func_ov001_0221e8b4();
void func_ov001_0221e348(s32);
void func_ov001_0220c618(s32, s32);
s32 func_ov001_0221da0c(void *);
void func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_0221b318();
void func_ov001_02213338();
void func_ov001_0221dca4();
void func_ov001_0221db6c();

void func_ov001_02219a40();
void func_ov001_02219a98();
void func_ov001_02219af8();
void func_ov001_02219bc0();
void func_ov001_0221962c();
void func_ov001_02219660();
void func_ov001_022196a0();
void func_ov001_02219798();
void func_ov001_022197fc();
void func_ov001_02219828();
void func_ov001_02219868();
void func_ov001_0221986c();
void func_ov001_022198a4();
void func_ov001_022199e0();
void func_ov001_02219a04();
}

extern "C" u8 data_ov001_0222dea8 = 0;
extern "C" volatile u16 data_ov001_0222deac = 0;

#define REGSET(a, v) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= (v); *(volatile u16 *)(a) = t; } while (0)

extern "C" void func_ov001_02219bc0() {
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

extern "C" void func_ov001_02219af8() {
    func_ov001_02208594((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    func_ov001_02208594((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", (void *)GX_LoadBG2Scr);
    REGSET(0x4001008, 3);
    REGSET(0x400100a, 3);
    REGSET(0x4000008, 3);
    REGSET(0x400000a, 3);
    REGSET(0x400000c, 3);
}

extern "C" void func_ov001_02219a98() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02219a40);
}

extern "C" void func_ov001_02219a40() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02219a04);
}

extern "C" void func_ov001_02219a04() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_022199e0);
}

extern "C" void func_ov001_022199e0() {
    func_ov001_0221986c();
    func_ov001_02219868();
    func_ov001_02219828();
    func_ov001_022198a4();
}

extern "C" void func_ov001_022198a4() {
    Unk_ov001_022198a4_E *buf;
    s32 n, i;
    data_ov001_0222deac = data_ov001_0222deac + 1;
    if (data_ov001_0222deac < 0x12c) return;
    func_ov001_0221e93c();
    n = func_ov001_0221da0c(&buf);
    if (n == 0) {
        data_ov001_0222dea8 = 2;
        func_ov001_02220778(0x43, 1, 1, -1, 0);
        func_ov001_0221e9a0(0x12);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02219660);
        return;
    }
    for (i = 0; i < n; i++) {
        if (buf[i].unk_28 != 2) break;
    }
    if (i == n) {
        data_ov001_0222dea8 = 3;
        func_ov001_02220778(0x42, 1, 1, -1, 0);
        func_ov001_0221e9a0(0x12);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_02219660);
        return;
    }
    data_ov001_0222dea8 = 1;
    func_ov001_0221e9a0(0xf);
    func_ov001_0220c668((void *)func_ov001_022197fc);
}

extern "C" void func_ov001_0221986c() {
    if (func_ov001_022261cc(2) == 0) return;
    func_ov001_0221e93c();
    func_ov001_022080e0(0);
}

extern "C" void func_ov001_02219868() {}

extern "C" void func_ov001_02219828() {
    if (func_ov001_02208100()) return;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_022197fc);
}

extern "C" void func_ov001_022197fc() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02219798);
}

extern "C" void func_ov001_02219798() {
    if (func_ov001_022250e0(1)) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_022196a0);
}

extern "C" void func_ov001_022196a0() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    if (func_ov001_022080a0() == 0) return;
    while (func_ov001_0221da70() == 0) {}
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222dea8 != 1) {
        func_ov001_0221dc60();
        func_ov001_0221e348(func_ov001_0221e8b4()[0xf4]);
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
        return;
    }
    func_ov001_0220c654(0, 1);
    func_ov001_0220c618(0, 0);
    func_ov001_0220c668((void *)func_ov001_02213338);
}

extern "C" void func_ov001_02219660() {
    if (func_ov001_02220714()) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_0221962c);
}

extern "C" void func_ov001_0221962c() {
    if (func_ov001_022206f8()) return;
    func_ov001_0220c668((void *)func_ov001_022197fc);
}


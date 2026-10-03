// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

extern "C" {
void GX_LoadBG2Char();
s32 GX_LoadBG2Scr(void *, s32, u32);
void GX_LoadBGPltt();
s32 func_ov001_02208244();
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_022088f8();
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
void func_ov001_02218054();
void func_ov001_022180cc();
void func_ov001_02218114();
void func_ov001_02218118();
void func_ov001_0221811c();
void func_ov001_02218158();
void func_ov001_022181c4();
void func_ov001_02218224();
void func_ov001_022182d4();
void func_ov001_0221aae4();
void func_ov001_0221e25c();
s32 func_ov001_022206f8();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
}

extern "C" void func_ov001_022182d4() {
    func_ov001_02218224();
    func_ov001_022088f8();
    func_ov001_0221e25c();
    func_ov001_0220c668((void *)func_ov001_022181c4);
}

extern "C" void func_ov001_02218224() {
    func_ov001_02208594((void *)"char/jbBgStep3.ncg.l", (void *)GX_LoadBG2Char);
    func_ov001_02208594((void *)"char/ybBgStep3.ncl.l", (void *)GX_LoadBGPltt);
    func_ov001_02208594((void *)"char/xb4None.nsc.l", (void *)GX_LoadBG2Scr);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x400000a, 3);
    BGCNT(0x400000c, 3);
}

extern "C" void func_ov001_022181c4() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_02218158);
}

extern "C" void func_ov001_02218158() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_02220778(0x96, 5, 1, -1, 0);
    func_ov001_0220c668((void *)func_ov001_0221811c);
}

extern "C" void func_ov001_0221811c() {
    func_ov001_02218118();
    func_ov001_02218114();
    if (func_ov001_022206f8()) return;
    func_ov001_0220c668((void *)func_ov001_022180cc);
}

extern "C" void func_ov001_02218118() {}

extern "C" void func_ov001_02218114() {}

extern "C" void func_ov001_022180cc() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_02218054);
}

extern "C" void func_ov001_02218054() {
    if (func_ov001_022250e0(1)) return;
    if (func_ov001_022250e0(0)) return;
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    func_ov001_0220c654(2, 1);
    func_ov001_0220c668((void *)func_ov001_0221aae4);
}

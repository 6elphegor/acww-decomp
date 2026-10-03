// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 func_ov001_022261cc(s32);
void func_ov001_022080e0(s32);
void func_ov001_0220e044();
s32 func_ov001_02208100();
void func_ov001_02208088();
void func_ov001_0220c668(void *);
s32 func_ov001_022250e0(s32);
void func_ov001_022084f8(s32);
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02225cb4(s32, s32);
s32 func_ov001_02208594(void *, void *);
void func_02111a6c();
s32 func_ov001_0220891c(s32);
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208478(s32);
void func_01ffa494(u32);
void func_0211c670();
void func_ov001_02208070();
void func_ov001_02224e4c(s32);
void func_ov001_0221e9a0(s32);
void func_ov001_0221df10();
s32 func_ov001_022080a0();
void func_ov001_022253d4(s32);
void func_ov001_02208244();
void func_ov001_02225c58(s32, s32);
void func_ov001_0220c654(s32, s32);
void func_ov001_0220f304();
void func_ov001_02208114();
void *func_ov001_0222558c(s32, s32);
void OS_GetMacAddress(void *);
void func_0212c234(void *, s32, void *, ...);
void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
void func_020ff0bc(u64 *);
void func_ov001_0222516c(void *);
void func_ov001_0220e0c8();
void func_ov001_0220e0cc();
void func_ov001_0220e118();
void func_ov001_0220e138();
void func_ov001_0220e174();
void func_ov001_0220e1cc();
void func_ov001_0220e22c();
void func_ov001_0220e2cc();
void func_ov001_0220e320();
void func_ov001_0220e370();
void func_ov001_0220e3d0();
void func_ov001_0220e3fc();
void func_ov001_0220e438();
void func_ov001_0220e43c();
void func_ov001_0220e470();
void func_ov001_0220e490();
void func_ov001_0220e4cc();
void func_ov001_0220e50c();
void func_ov001_0220e54c();
void func_ov001_0220e5ec();
void func_ov001_0220e61c();
void func_ov001_0220e6b0();
void func_ov001_0220e714();
void func_ov001_0220e740();
void func_ov001_0220e77c();
void func_ov001_0220e780();
void func_ov001_0220e7b4();
void func_ov001_0220e7d4();
void func_ov001_0220e810();
void func_ov001_0220e868();
}

extern "C" void func_ov001_0220e5ec() {
    func_ov001_0220e54c();
    func_ov001_02208478(0x57);
    func_ov001_0221df10();
    func_ov001_0220c668((void *)func_ov001_0220e50c);
}

extern "C" void func_ov001_0220e54c() {
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

extern "C" void func_ov001_0220e50c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e4cc);
}

extern "C" void func_ov001_0220e4cc() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(5);
    func_ov001_0220c668((void *)func_ov001_0220e490);
}

extern "C" void func_ov001_0220e490() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e470);
}

extern "C" void func_ov001_0220e470() {
    func_ov001_0220e43c();
    func_ov001_0220e438();
    func_ov001_0220e3fc();
}

extern "C" void func_ov001_0220e43c() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(0);
    }
}

extern "C" void func_ov001_0220e438() {}

extern "C" void func_ov001_0220e3fc() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_0220c668((void *)func_ov001_0220e3d0);
}

extern "C" void func_ov001_0220e3d0() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220e370);
}

extern "C" void func_ov001_0220e370() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 0x3f, 0x40);
    func_ov001_02224ff8(3, 0, 0x3f, 0x40);
    func_ov001_0220c668((void *)func_ov001_0220e320);
}

extern "C" void func_ov001_0220e320() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_01ffa494(0x1000000);
    func_0211c670();
}


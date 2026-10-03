// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
volatile u8 data_ov001_0222de28;
}

extern "C" {
s32 func_ov001_0221ce08(u32 *, u32, u32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_02208690(u32, u32, u32, u32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_0220864c();
s32 func_ov001_02208244();
s32 func_ov001_02224038(u32 *);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02208070();
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
s32 func_ov001_022260ac(void *);
s32 func_ov001_022080e0(s32);
s32 func_ov001_022261cc(s32);
s32 func_ov001_022261a8(s32);
s32 func_ov001_02208088();
s32 func_ov001_022084f8(s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_022085e0(void *);
u32 *func_ov001_02224074(s32, s32, s32);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_0221eae4(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208114();
s32 func_ov001_022080a0();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
void func_ov001_0220d440();
void func_ov001_0220f304();
void func_ov001_0220e5ec();
void func_ov001_0221aae4();
void func_0211172c();
void GX_LoadBGPltt();
void func_02111a6c();
void func_ov001_0220d844();
void func_ov001_0220d91c();
void func_ov001_0220d97c();
void func_ov001_0220db88();
void func_ov001_0220dba8();
void func_ov001_0220dbe4();
void func_ov001_0220dc3c();
void func_ov001_0220dd94();
void func_ov001_0220de1c();
void func_ov001_0220de50();
void func_ov001_0220deb4();
void func_ov001_0220dfa0();
void func_ov001_0220e018();
void func_ov001_0220da18();
void func_ov001_0220da14();
void func_ov001_0220d9a8();
void func_ov001_0220dc9c();
void func_ov001_0220e044();
void func_ov001_02208478(s32);
void func_01ffa494(u32);
void func_0211c670();
void func_ov001_0221df10();
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

extern "C" void func_ov001_0220e2cc() {
    data_ov001_0222de28 = 0;
    func_ov001_0220e22c();
    func_ov001_0220891c(0x12);
    func_ov001_02208290(0x8c, -1, 0);
    func_ov001_02208478(0x55);
    func_ov001_0220c668((void *)func_ov001_0220e1cc);
}

extern "C" void func_ov001_0220e22c() {
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

extern "C" void func_ov001_0220e1cc() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0220e174);
}

extern "C" void func_ov001_0220e174() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_0220e138);
}

extern "C" void func_ov001_0220e138() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220e118);
}

extern "C" void func_ov001_0220e118() {
    func_ov001_0220e0cc();
    func_ov001_0220e0c8();
    func_ov001_0220e044();
}

extern "C" void func_ov001_0220e0cc() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
    }
}

extern "C" void func_ov001_0220e0c8() {}

extern "C" void func_ov001_0220e044() {
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        func_ov001_0220c668((void *)func_ov001_0220e018);
        break;
    case 1:
        func_ov001_0221e9a0(6);
        func_ov001_02220778(0x56, 0, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_0220de50);
        break;
    }
}

extern "C" void func_ov001_0220e018() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220dfa0);
}

extern "C" void func_ov001_0220dfa0() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de28 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220deb4);
}

extern "C" void func_ov001_0220deb4() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222de28 == 0) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    if (data_ov001_0222de28 == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de28 == 0) {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220f304);
    } else {
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_0220e5ec);
    }
}

extern "C" void func_ov001_0220de50() {
    s32 r = func_ov001_02220714();
    if (r != 0) {
        if (r != 1) return;
        func_ov001_0221e9a0(0xe);
        data_ov001_0222de28 = 1;
    } else {
        func_ov001_0221e9a0(7);
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_0220de1c);
}

extern "C" void func_ov001_0220de1c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_0220e018);
}


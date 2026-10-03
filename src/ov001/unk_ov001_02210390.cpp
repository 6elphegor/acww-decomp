// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 func_02111a6c[];
void MIi_CpuClear16(u32 a, void *b, u32 c);
void MIi_CpuCopy16(void *a, void *b, u32 c);
s32 func_ov001_022079fc();
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
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_0220891c(u32 a);
s32 func_ov001_0220c654(u32 a, u32 b);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_0220d040();
s32 func_ov001_0220d04c(void *a);
s32 func_ov001_0220d064();
s32 func_ov001_0220d0c4();
s32 func_ov001_0220f304();
void func_ov001_0220f6cc();
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
void func_ov001_02210708();
void func_ov001_022107a8();
void func_ov001_022107f0();
void func_ov001_02210804();
void func_ov001_022108fc();
void func_ov001_02210980();
void func_ov001_022109f0();
void func_ov001_022109f4();
void func_ov001_022109f8();
void func_ov001_02210a7c();
void func_ov001_02210ab4();
void func_ov001_02210b04();
void func_ov001_02210b44();
void func_ov001_02210be4();
void func_ov001_02210cc0(s32 a);
void func_ov001_02210d20();
void func_ov001_02210e60();
void func_ov001_02210efc();
void func_ov001_02210f40();
void func_ov001_02210f80();
void func_ov001_02210f84();
void func_ov001_02210fd8();
void func_ov001_02210ff8();
s32 func_ov001_02211150();
s32 func_ov001_022111a8();
s32 func_ov001_0221e93c();
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_02220778(u32 a, u32 b, u32 c, s32 d, u32 e);
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_0222516c(void *);
s32 func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_022261cc(u32 a);

u8 data_ov001_0222de48;
u8 data_ov001_0222de4c;

#pragma thumb off


void func_ov001_022107a8() {
    func_ov001_02210708();
    func_ov001_02208478(0x62);
    data_ov001_0222de48 = func_ov001_02208290(0x8d, -1, 0);
    func_ov001_0220c668((void *)func_ov001_02210694);
}

void func_ov001_02210708() {
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

void func_ov001_02210694() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    if (data_ov001_0222de48 != 0) {
        func_ov001_02224ff8(2, 1, 1, 8);
        func_ov001_02225cb4(1, 1);
    }
    func_ov001_0220c668((void *)func_ov001_0221063c);
}

void func_ov001_0221063c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(3);
    func_ov001_0220c668((void *)func_ov001_022105ec);
}

void func_ov001_022105ec() {
    if (func_ov001_02208100() == -2) return;
    if (func_ov001_0220d064() == 0) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_022105cc);
}

void func_ov001_022105cc() {
    func_ov001_02210580();
    func_ov001_0221057c();
    func_ov001_02210510();
}

void func_ov001_02210580() {
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
    }
    if (func_ov001_022261cc(2) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_0221057c() {
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

void func_ov001_022104e4() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221046c);
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
}

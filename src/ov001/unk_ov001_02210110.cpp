// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 GX_LoadBG2Scr[];
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
s32 func_ov001_0220d064();
s32 func_ov001_0220f304();
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
s32 func_ov001_02211150();
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_02224e4c(u32 a);
s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_022253d4(u32 a);
s32 func_ov001_02225c58(u32 a, u32 b);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_022261cc(u32 a);

u8 data_ov001_0222de44;

#pragma thumb off


void func_ov001_02210354() {
    data_ov001_0222de44 = 0;
    func_ov001_022102cc();
    func_ov001_02208478(0x63);
    func_ov001_0220c668((void *)func_ov001_0221028c);
}

void func_ov001_022102cc() {
    func_ov001_02208594((void *)"char/yb5Multi.nsc.l", (void *)GX_LoadBG2Scr);
    volatile u16 *r1 = (volatile u16 *)0x4001008;
    volatile u16 *r2 = (volatile u16 *)0x400100a;
    volatile u16 *r3 = (volatile u16 *)0x400000a;
    volatile u16 *r4 = (volatile u16 *)0x400000c;
    *r1 = (*r1 & ~3) | 3;
    *r2 = (*r2 & ~3) | 3;
    *r3 = (*r3 & ~3) | 3;
    *r4 = (*r4 & ~3) | 3;
}

void func_ov001_0221028c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02210240);
}

void func_ov001_02210240() {
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_0220d064() == 0) return;
    func_ov001_0220c668((void *)func_ov001_02210224);
}

void func_ov001_02210224() {
    func_ov001_02210110();
    func_ov001_02210220();
}

void func_ov001_02210220() {
}

void func_ov001_022101d8() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02210158);
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

void func_ov001_02210110() {
    data_ov001_0222de44 = data_ov001_0222de44 + 1;
    if (data_ov001_0222de44 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_022101d8);
}
}

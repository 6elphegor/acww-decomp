// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

#define REGSET(a) do { u32 t = *(volatile u16 *)(a); t &= ~3; t |= 3; *(volatile u16 *)(a) = t; } while (0)
extern "C" {
extern void *data_ov001_0222de1c;

s32 func_ov001_022147a4();
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_0220c5f0(void *, void *);
s32 func_ov001_0220c5e0();
s32 func_ov001_0220cc10(void *, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02208594(const char *, void *);
s32 func_ov001_0222558c(s32, s32);
s32 func_ov001_022080a0();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_02208088();
s32 func_ov001_022084f8(s32);
s32 func_ov001_02225290(s32, s32, s32, s32, s32, void *, s32);
s32 func_ov001_02208388();
s32 func_ov001_02225254(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_ov001_0222516c(s32);
s32 func_ov001_022156e0(s32);
s32 func_0212c234(void *, s32, void *, s32);
void GX_LoadBG2Scr(void *, s32, u32);
void func_ov001_0221aae4();
void func_ov001_02217e40();

void func_ov001_02214f50(s32 a);
void func_ov001_02214f60();
void func_ov001_02215044();
void func_ov001_022150a8();
void func_ov001_022150d4();
void func_ov001_02215110();
void func_ov001_02215114();
void func_ov001_02215148();
void func_ov001_02215168();
void func_ov001_022151a4();
void func_ov001_022151fc();
void func_ov001_0221523c();
void func_ov001_02215618();
void func_ov001_022156b8();

const u16 data_ov001_0222a088[4] = {0x0d, 0x3c, 0xe6, 0x5e};
const u8 data_ov001_0222a080[8] = {0, 1, 1, 1, 1, 1, 0, 0};
const u16 data_ov001_0222a090[6][2] = {{0x62, 0x22}, {0x62, 0x22}, {0x3d, 0x22}, {0x65, 0x22}, {0x6c, 0x22}, {0x34, 0x22}};
u16 data_ov001_0222b030[4] = {0x25, 0x64, 0, 0};
s32 data_ov001_0222de80;

void func_ov001_022156b8() {
    func_ov001_02215618();
    func_ov001_0221523c();
    func_ov001_0220c668((void *)func_ov001_022151fc);
}

void func_ov001_02215618() {
    func_ov001_02208594("char/jb4Error.nsc.l", (void *)GX_LoadBG2Scr);
    REGSET(0x4001008);
    REGSET(0x400100a);
    REGSET(0x4000008);
    REGSET(0x400000a);
    REGSET(0x400000c);
}

void func_ov001_0221523c() {
    s32 sel;
    s32 r4;
    u16 buf[8];
    func_ov001_0220c5f0(0, &sel);
    s32 v = data_ov001_0222de80;
    if (v >= -20099) r4 = 0;
    else if (v >= -20100) r4 = 21;
    else if (v >= -20101) r4 = 74;
    else if (v >= -20107) r4 = 21;
    else if (v >= -20108) r4 = 73;
    else if (v >= -20109) r4 = 21;
    else if (v >= -20110) r4 = 24;
    else if (v >= -20999) r4 = 21;
    else if (v >= -22999) r4 = 0;
    else if (v >= -23999) r4 = 74;
    else if (v >= -49999) r4 = 0;
    else if (v >= -50002) r4 = 53;
    else if (v >= -50003) r4 = 38;
    else if (v >= -50098) r4 = 0;
    else if (v >= -50099) { r4 = (sel == 2) ? 0x26 : 0x35; }
    else if (v >= -51098) r4 = 0;
    else if (v >= -51099) { r4 = (sel == 2) ? 0x26 : 0x36; }
    else if (v >= -51102) r4 = 55;
    else if (v >= -51103) r4 = 38;
    else if (v >= -51199) r4 = 0;
    else if (v >= -51299) r4 = 76;
    else if (v >= -51302) r4 = 77;
    else if (v >= -51303) r4 = 37;
    else if (v >= -51999) r4 = 0;
    else if (v >= -52002) r4 = 56;
    else if (v >= -52003) r4 = 78;
    else if (v >= -52099) r4 = 0;
    else if (v >= -52103) r4 = 59;
    else if (v >= -52199) r4 = 0;
    else if (v >= -52203) r4 = 59;
    else if (v >= -52299) r4 = 0;
    else if (v >= -52399) r4 = 21;
    else if (v >= -52999) r4 = 0;
    else if (v >= -53299) r4 = 0x15;
    else r4 = 0;
    s32 r5 = func_ov001_0222558c(0, data_ov001_0222a080[func_ov001_0220c5e0()]);
    s32 r4b = func_ov001_0220cc10(data_ov001_0222de1c, r4);
    func_0212c234(buf, 8, data_ov001_0222b030, -data_ov001_0222de80);
    u32 a = data_ov001_0222a090[func_ov001_0220c5e0()][1];
    u32 b = data_ov001_0222a090[func_ov001_0220c5e0()][0];
    func_ov001_02225290(r5, b, a, 2, 10, buf, 0);
    func_ov001_02225254(r5, data_ov001_0222a088[0], data_ov001_0222a088[1], data_ov001_0222a088[2], data_ov001_0222a088[3], 2, func_ov001_02208388(), r4b);
    func_ov001_0222516c(r5);
}

void func_ov001_022151fc() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022151a4);
}

void func_ov001_022151a4() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(4);
    func_ov001_0220c668((void *)func_ov001_02215168);
}

void func_ov001_02215168() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02215148);
}

void func_ov001_02215148() {
    func_ov001_02215114();
    func_ov001_02215110();
    func_ov001_022150d4();
}

void func_ov001_02215114() {
    if (func_ov001_022261cc(1) == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02215110() {}

void func_ov001_022150d4() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_0220c668((void *)func_ov001_022150a8);
}

void func_ov001_022150a8() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02215044);
}

void func_ov001_02215044() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02214f60);
}

void func_ov001_02214f60() {
    s32 sel;
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c5f0(0, &sel);
    if (sel != 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
    } else {
        func_ov001_0220c654(2, 0);
        func_ov001_0220c618(0, 0);
        func_ov001_022156e0(0);
        func_ov001_0220c668((void *)func_ov001_02217e40);
    }
}

void func_ov001_02214f50(s32 a) {
    data_ov001_0222de80 = a;
}
}
#pragma thumb reset

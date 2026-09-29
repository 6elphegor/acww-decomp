// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
extern u8 data_ov001_0222ae3c[];
extern u8 data_ov001_0222ae50[];
extern u8 data_ov001_0222ae68[];
extern u8 data_ov001_0222ae80[];
extern volatile u8 data_ov001_0222de58;
extern volatile u8 data_ov001_0222de5c;
extern volatile u16 data_ov001_0222de60;
extern u32 data_ov001_0222de64;
extern volatile u8 data_ov001_0222de68;

s32 func_ov001_022250e0(s32);
s32 func_ov001_022084f8(s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220d0e4(void *);
s32 func_ov001_02208478(s32);
s32 func_ov001_02207a40(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0221e93c();
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_022264d8();
s32 func_ov001_022270b4(s32);
s32 func_ov001_022080a0();
s32 func_ov001_0220c414(s32);
s32 func_ov001_022079fc();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02226fd0(s32, s32);
s32 func_ov001_02208100();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_022261f0(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_0220c398();
s32 func_ov001_02227094(s32, void *, s32, s32);
s32 func_ov001_022088f8();
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_02208538(s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_0220c474();
void func_ov001_02210ff8();
void func_ov001_02210cc0();
void func_ov001_0221b318();
void func_ov001_02211ae4();
void func_ov001_0221be7c();
void func_ov001_0221197c();
void func_0211172c();
void func_02111ec8();
void func_02111a6c();

void func_ov001_02211030();
void func_ov001_02211070();
void func_ov001_022110b0();
void func_ov001_02211150();
BOOL func_ov001_022111a8();
void func_ov001_022111c8();
void func_ov001_02211204();
void func_ov001_02211264();
void func_ov001_02211298();
void func_ov001_022112d8();
void func_ov001_02211300();
void func_ov001_02211408();
void func_ov001_02211480();
void func_ov001_022114c8();
void func_ov001_02211500();
void func_ov001_02211504();
void func_ov001_02211558();
void func_ov001_02211640();
void func_ov001_0221169c();
void func_ov001_022116f4();
void func_ov001_02211754();
void func_ov001_0221181c();
BOOL func_ov001_02211888();
void func_ov001_022118a8();
void func_ov001_022118f0();

void func_ov001_02211030() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02210ff8);
}

void func_ov001_02211070() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_02211030);
}

void func_ov001_022110b0() {
    func_ov001_02208594(data_ov001_0222ae3c, (void *)func_02111a6c);
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

void func_ov001_02211150() {
    func_ov001_0220d0e4((void *)func_ov001_02210cc0);
    data_ov001_0222de58 = 0;
    func_ov001_022110b0();
    func_ov001_02208478(0x5e);
    func_ov001_02207a40(0);
    func_ov001_0221e9a0(0xb);
    func_ov001_0220c668((void *)func_ov001_02211070);
}

BOOL func_ov001_022111a8() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void func_ov001_022111c8() {
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    data_ov001_0222de5c = 0;
    func_ov001_0220c668((void *)func_ov001_02211480);
}

void func_ov001_02211204() {
    func_ov001_02211504();
    func_ov001_02211500();
    func_ov001_022114c8();
    data_ov001_0222de60 = data_ov001_0222de60 + 1;
    if (data_ov001_0222de60 < 0x438) return;
    func_ov001_0221e93c();
    func_ov001_0220c668((void *)func_ov001_02211480);
}

void func_ov001_02211264() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_02211480);
}

void func_ov001_02211298() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02211264);
}

void func_ov001_022112d8() {
    func_ov001_022264d8();
    func_ov001_022270b4(0);
    func_ov001_02211504();
    func_ov001_022114c8();
}

void func_ov001_02211300() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222de5c == 0) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_0220c414(data_ov001_0222de5c != 0 ? 1 : 0);
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if (data_ov001_0222de5c == 0) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222de5c == 0) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221b318);
        return;
    }
    func_ov001_0220c654(0, 0);
    func_ov001_0220c668((void *)func_ov001_02211ae4);
}

void func_ov001_02211408() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de5c == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_02211300);
}

void func_ov001_02211480() {
    func_ov001_02208070();
    if (data_ov001_0222de64 != 0) {
        func_ov001_02226fd0(1, data_ov001_0222de64);
    }
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_02211408);
}

void func_ov001_022114c8() {
    if (func_ov001_02208100() != 0) return;
    func_ov001_02208070();
    func_ov001_0220c668((void *)func_ov001_022111c8);
}

void func_ov001_02211500() {
}

void func_ov001_02211504() {
    if (func_ov001_022261f0(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_02211888() == 0) return;
    func_ov001_022080e0(0);
}

void func_ov001_02211558() {
    func_ov001_02211504();
    func_ov001_02211500();
    func_ov001_022114c8();
    s32 r = func_ov001_0220c398();
    switch (r) {
    case 0: return;
    case 1: {
        u32 t = data_ov001_0222de64;
        data_ov001_0222de5c = 1;
        func_ov001_02226fd0(1, t);
        data_ov001_0222de64 = 0;
        func_ov001_0220c668((void *)func_ov001_02211204);
        break;
    }
    case 2: {
        func_ov001_0221e93c();
        func_ov001_02220778(0x40, 1, 1, -1, 0);
        func_ov001_0221e9a0(9);
        func_ov001_02208070();
        func_ov001_02226fd0(1, data_ov001_0222de64);
        data_ov001_0222de64 = 0;
        func_ov001_0220c668((void *)func_ov001_02211298);
        break;
    }
    }
}

void func_ov001_02211640() {
    if (func_ov001_02208100() == -2) return;
    data_ov001_0222de64 = func_ov001_02227094(1, (void *)func_ov001_022112d8, 0, 0x78);
    func_ov001_0220c668((void *)func_ov001_02211558);
}

void func_ov001_0221169c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(1);
    func_ov001_0220c668((void *)func_ov001_02211640);
}

void func_ov001_022116f4() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221169c);
}

void func_ov001_02211754() {
    func_ov001_02208594(data_ov001_0222ae50, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222ae68, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222ae80, (void *)func_02111a6c);
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

void func_ov001_0221181c() {
    data_ov001_0222de60 = 0;
    func_ov001_02211754();
    func_ov001_022088f8();
    func_ov001_02208290(0x82, -1, 0);
    func_ov001_02208538(2);
    func_ov001_02208478(0x67);
    func_ov001_02207a40(0);
    func_ov001_0220c474();
    func_ov001_0221e9a0(0xb);
    func_ov001_0220c668((void *)func_ov001_022116f4);
}

BOOL func_ov001_02211888() {
    s32 t = (s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15;
    if (t != 0) return TRUE;
    return FALSE;
}

void func_ov001_022118a8() {
    data_ov001_0222de68 = data_ov001_0222de68 + 1;
    if (data_ov001_0222de68 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_0221197c);
}

void func_ov001_022118f0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022253d4(0);
    func_ov001_02208244();
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x15);
    func_ov001_0220c654(0, 0);
    func_ov001_0220c618(0, 1);
    func_ov001_0220c668((void *)func_ov001_0221be7c);
}
}

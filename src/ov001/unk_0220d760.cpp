// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0220d7b4_Rec { u16 a; u16 b; u16 c; u16 d; };
struct Unk_ov001_0220dc9c_Pair { u8 a; u8 b; };

extern "C" {
extern u8 data_ov001_0222ac50[2];
extern volatile u8 data_ov001_0222de20;
extern volatile u8 data_ov001_0222de28;
extern u32 *data_ov001_0222de24;
extern u16 data_ov001_02229fa0[][4];
extern u16 data_ov001_02229fa2[][4];
extern u16 data_ov001_02229fa4[][4];
extern u16 data_ov001_02229fa6[][4];
extern u8 data_ov001_02229f90[];
extern u8 data_ov001_0222ac54[22];
extern u8 data_ov001_0222ac6c[];
extern u8 data_ov001_0222ac84[];
extern u8 data_ov001_0222ac9c[];

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
void func_02111ec8();
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


s32 func_ov001_0220d760() {
    u8 t[2] = {1, 2};
    u32 v = t[data_ov001_0222de20];
    return func_ov001_0221ce08(data_ov001_0222de24, v, v);
}

void func_ov001_0220d7b4(s32 a) {
    if (a == 1) return;
    if (a == 3) return;
    data_ov001_0222de20 = data_ov001_0222de20 ^ 1;
    func_ov001_0221e9a0(8);
    u32 i = data_ov001_0222de20;
    func_ov001_02208690(data_ov001_02229fa0[i][0], data_ov001_02229fa4[i][0], data_ov001_02229fa2[i][0], data_ov001_02229fa6[i][0]);
}

void func_ov001_0220d844() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_02224038(data_ov001_0222de24);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x14);
    switch (data_ov001_0222de20) {
    case 0:
        func_ov001_0220c654(1, 0);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
        break;
    case 1:
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0220f304);
        break;
    }
}

void func_ov001_0220d91c() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x14, 8);
    func_ov001_0220c668((void *)func_ov001_0220d844);
}

void func_ov001_0220d97c() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220d91c);
}

void func_ov001_0220d9a8() {
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        func_ov001_0220c668((void *)func_ov001_0220d440);
        break;
    case 1:
        func_ov001_0221e9a0(6);
        func_ov001_0220d760();
        func_ov001_0220c668((void *)func_ov001_0220d97c);
        break;
    }
}

void func_ov001_0220da14() {}

void func_ov001_0220da18() {
    u32 i = 0;
    u8 *p = data_ov001_02229f90;
    do {
        if (func_ov001_022260ac(p) != 0) {
            func_ov001_022080e0(1);
            data_ov001_0222de20 = i;
            u32 k = data_ov001_0222de20;
            func_ov001_02208690(data_ov001_02229fa0[k][0], data_ov001_02229fa4[k][0], data_ov001_02229fa2[k][0], data_ov001_02229fa6[k][0]);
            return;
        }
        i++;
        p += 8;
    } while (i < 2);
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
        return;
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_022261a8(0x40) != 0) {
        func_ov001_0220d7b4(1);
        return;
    }
    if (func_ov001_022261a8(0x80) != 0) {
        func_ov001_0220d7b4(3);
        return;
    }
    if (func_ov001_022261a8(0x20) != 0) {
        func_ov001_0220d7b4(0);
        return;
    }
    if (func_ov001_022261a8(0x10) == 0) return;
    func_ov001_0220d7b4(2);
}

void func_ov001_0220db88() {
    func_ov001_0220da18();
    func_ov001_0220da14();
    func_ov001_0220d9a8();
}

void func_ov001_0220dba8() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0220db88);
}

void func_ov001_0220dbe4() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_0220dba8);
}

void func_ov001_0220dc3c() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x14, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x14);
    func_ov001_0220c668((void *)func_ov001_0220dbe4);
}

void func_ov001_0220dc9c() {
    char l[22] = "char/ybBgStep11.ncl.l";
    func_ov001_02208594(data_ov001_0222ac6c, (void *)func_0211172c);
    func_ov001_02208594(data_ov001_0222ac84, (void *)func_02111ec8);
    func_ov001_02208594(data_ov001_0222ac9c, (void *)func_02111a6c);
    data_ov001_0222de24 = func_ov001_02224074(func_ov001_022085e0(l), 0, 4);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void func_ov001_0220dd94() {
    func_ov001_0220dc9c();
    func_ov001_0220891c(0);
    func_ov001_02208290(0x7a, -1, 0);
    func_ov001_0221eae4(4);
    u32 i = data_ov001_0222de20;
    func_ov001_02208690(data_ov001_02229fa0[i][0], data_ov001_02229fa4[i][0], data_ov001_02229fa2[i][0], data_ov001_02229fa6[i][0]);
    func_ov001_0220c668((void *)func_ov001_0220dc3c);
}

void func_ov001_0220de1c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_0220e018);
}

void func_ov001_0220de50() {
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

void func_ov001_0220deb4() {
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

void func_ov001_0220dfa0() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if (data_ov001_0222de28 == 0) {
        func_ov001_02224ff8(3, 1, 1, 8);
    }
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0220deb4);
}

void func_ov001_0220e018() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0220dfa0);
}

void func_ov001_0220e044() {
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

}

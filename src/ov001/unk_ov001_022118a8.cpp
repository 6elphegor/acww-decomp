// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
u8 data_ov001_0222de68;
}


namespace F0221197c {

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 *unk_10[5];
    u32 *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[3];
    u8 pad_4e[3];
    u8 unk_51;
    u8 pad_52;
    u8 unk_53;
    u8 pad_54[2];
    u8 unk_56;
    u8 pad_57[2];
    u8 unk_59;
};

extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 func_02111a6c[];
extern u8 data_ov001_0222de68;
extern u8 data_ov001_0222aea8;
extern u8 data_ov001_0222de6c;
extern u16 data_ov001_0222de70;
extern Unk_ov001_0222de74 *data_ov001_0222de74;
extern u16 data_ov001_0222a030[];
extern u16 data_ov001_0222a032[];
extern u16 data_ov001_0222a034[];

s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_022088f8();
s32 func_ov001_02208478(u32 a);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_022206f8();
s32 func_ov001_02208088();
s32 func_ov001_0221d5d0();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_0221ce08(void *a, u32 b, u32 c);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02226fdc(s32, s32);
s32 func_ov001_022123e4();
s32 func_ov001_0221d5e8(u32 a);
s32 func_ov001_0221d5b8();
s32 func_ov001_0220864c();
void func_ov001_02208780(u32 a, u32 b, u32 c, u32 d);
s32 func_01ffc2c4(s32, s32);
s32 func_01ffc31c(s32, s32);
s32 func_ov001_02226c24(void *a, u32 b);
void func_ov001_02225290(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
void *func_02115fb4(void *, s32, u32);

void func_ov001_022118f0();
void func_ov001_022119c8();
void func_ov001_022119e4();
void func_ov001_02211a1c();
void func_ov001_02212e84();
void func_ov001_02211b2c();
void func_ov001_02211f78(u32 a);
void func_ov001_02212020(u32 a);
void func_ov001_02211ea0();
void func_ov001_02211be8();
void func_ov001_022118a8();
void func_ov001_02212108();
}

extern "C" {

void func_ov001_0221197c();
void func_ov001_022119c4();
void func_ov001_022119c8();
void func_ov001_022119e4();
void func_ov001_02211a1c();
void func_ov001_02211a5c();
void func_ov001_02211ae4();
void func_ov001_02211ae4() {
    data_ov001_0222de68 = 0;
    func_ov001_02211a5c();
    func_ov001_022088f8();
    func_ov001_02208478(0x68);
    func_ov001_0221e9a0(0x10);
    func_ov001_0220c668((void *)func_ov001_02211a1c);
}

void func_ov001_02211a5c() {
    func_ov001_02208594((void *)"char/xb4Multi.nsc.l", func_02111a6c);
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & ~3) | 3;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & ~3) | 3;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & ~3) | 3;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & ~3) | 3;
}

void func_ov001_02211a1c() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_022119e4);
}

void func_ov001_022119e4() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_0220c668((void *)func_ov001_022119c8);
}

void func_ov001_022119c8() {
    func_ov001_022118a8();
    func_ov001_022119c4();
}

void func_ov001_022119c4() {}

void func_ov001_0221197c() {
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_022118f0);
}

}
}

namespace F02211030 {


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

void func_ov001_022118a8();
void func_ov001_022118f0();
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

void func_ov001_022118a8() {
    data_ov001_0222de68 = data_ov001_0222de68 + 1;
    if (data_ov001_0222de68 < 0x78) return;
    func_ov001_0220c668((void *)func_ov001_0221197c);
}

}
}

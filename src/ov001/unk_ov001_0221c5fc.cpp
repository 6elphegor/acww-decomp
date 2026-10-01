// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0221ccb4_S { u8 pad_00[4]; u8 unk_04[0x14]; u16 unk_18; u8 pad_1a[0x3a]; };

extern "C" {
s32 func_02111a6c();
s32 func_0211172c();
s32 func_02111ec8();
s32 func_021155c4(void *);
void func_02115e30(u16, void *, u32);
void func_02115e48(void *, void *, u32);
s32 func_ov001_02208594(void *, void *);
s32 func_ov001_0220891c(s32);
s32 func_ov001_02208478(s32);
s32 func_ov001_02208290(s32, s32, s32);
s32 func_ov001_02208538(s32);
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_0221e93c();
s32 func_ov001_0220c668(void *);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
s32 func_ov001_022253d4(s32);
s32 func_ov001_02208244();
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_02225cb4(s32, s32);
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02208100();
s32 func_ov001_02208088();
s32 func_ov001_022261cc(s32);
s32 func_ov001_022080e0(s32);
s32 func_ov001_022084f8(s32);
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_0221fbb4(s32);
s32 func_ov001_0221fbcc();
s32 func_ov001_022079fc();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_022083ac(void *, s32);
s32 func_ov001_02207a40(s32);
s32 func_ov001_0221fd14(void *);
s32 func_ov001_0221aae4();

void func_ov001_0221c5fc();
void func_ov001_0221c680();
void func_ov001_0221c6f0();
void func_ov001_0221c724();
void func_ov001_0221c764(u32);
void func_ov001_0221c87c();
void func_ov001_0221c9a4();
void func_ov001_0221ca24();
void func_ov001_0221ca50();
void func_ov001_0221cab8();
s32 func_ov001_0221cabc();
void func_ov001_0221cb10();
void func_ov001_0221cb30();
void func_ov001_0221cb6c();
void func_ov001_0221cbac();
void func_ov001_0221cbec();
void func_ov001_0221ccb4();
s32 func_ov001_0221cd54();
void func_ov001_0221c134();
void func_ov001_0221c5a0();
}

extern "C" u8 data_ov001_0222ded8 = 0;

extern "C" s32 func_ov001_0221cd54() {
    s32 t = *(u16 *)0x27fffa8 & 0x8000;
    return (t >> 15) ? TRUE : FALSE;
}

extern "C" void func_ov001_0221ccb4() {
    volatile u16 z;
    u8 b[0x16];
    Unk_ov001_0221ccb4_S s;
    data_ov001_0222ded8 = 0;
    func_ov001_0221cbec();
    func_ov001_0220891c(8);
    func_ov001_02208538(2);
    func_021155c4(&s);
    z = 0;
    func_02115e30(z, b, 0x16);
    func_02115e48(s.unk_04, b, s.unk_18 << 1);
    func_ov001_022083ac(b, 0x6d);
    func_ov001_02207a40(0);
    func_ov001_0221fd14((void *)func_ov001_0221c764);
    func_ov001_0221e9a0(0xb);
    func_ov001_0220c668((void *)func_ov001_0221cbac);
}

extern "C" void func_ov001_0221cbec() {
    func_ov001_02208594((void *)"char/jbBgStep3.ncg.l", (void *)func_0211172c);
    func_ov001_02208594((void *)"char/ybBgStep3.ncl.l", (void *)func_02111ec8);
    func_ov001_02208594((void *)"char/jb4Usb.nsc.l", (void *)func_02111a6c);
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

extern "C" void func_ov001_0221cbac() {
    func_ov001_02224ff8(2, 0, 0x15, 8);
    func_ov001_02225cb4(0, 0x15);
    func_ov001_0220c668((void *)func_ov001_0221cb6c);
}

extern "C" void func_ov001_0221cb6c() {
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(2);
    func_ov001_0220c668((void *)func_ov001_0221cb30);
}

extern "C" void func_ov001_0221cb30() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_0221cb10);
}

extern "C" void func_ov001_0221cb10() {
    func_ov001_0221cabc();
    func_ov001_0221cab8();
    func_ov001_0221ca50();
}

extern "C" s32 func_ov001_0221cabc() {
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_0221cd54() == 0) return;
    func_ov001_022080e0(0);
}

extern "C" void func_ov001_0221cab8() {}

extern "C" void func_ov001_0221ca50() {
    if (data_ov001_0222ded8 != 0) return;
    if (func_ov001_02208100() != 0) return;
    data_ov001_0222ded8 = 2;
    func_ov001_0221e93c();
    func_ov001_0221e9a0(7);
    func_ov001_0220c668((void *)func_ov001_0221ca24);
}

extern "C" void func_ov001_0221ca24() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_0221c9a4);
}

extern "C" void func_ov001_0221c9a4() {
    if (func_ov001_022250e0(1) != 0) return;
    func_ov001_02208114();
    if ((u8)(data_ov001_0222ded8 + 0xfe) <= 1) func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x15, 8);
    func_ov001_0220c668((void *)func_ov001_0221c87c);
}

extern "C" void func_ov001_0221c87c() {
    if (func_ov001_022250e0(0) != 0) return;
    if (data_ov001_0222ded8 == 2) {
        if (func_ov001_022250e0(1) != 0) return;
    }
    if (func_ov001_022080a0() == 0) return;
    func_ov001_0221fbcc();
    func_ov001_022079fc();
    func_ov001_022253d4(0);
    if ((u8)(data_ov001_0222ded8 + 0xfe) <= 1) {
        func_ov001_02208244();
        func_ov001_02225c58(1, 1);
    }
    func_ov001_02225c58(0, 0x15);
    if (data_ov001_0222ded8 == 2) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221aae4);
    } else if (data_ov001_0222ded8 == 3) {
        func_ov001_0220c654(2, 1);
        func_ov001_0220c668((void *)func_ov001_0221c5a0);
    } else {
        func_ov001_0220c654(0, 0);
        func_ov001_0220c668((void *)func_ov001_0221c134);
    }
}

extern "C" void func_ov001_0221c764(u32 a) {
    if (data_ov001_0222ded8 != 0) return;
    switch (a) {
    case 0:
        data_ov001_0222ded8 = 3;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(0x12);
        func_ov001_02220778(0x45, 1, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_0221c724);
        break;
    case 1:
        data_ov001_0222ded8 = 1;
        func_ov001_0221e93c();
        func_ov001_0220c668((void *)func_ov001_0221ca24);
        break;
    case 2:
        func_ov001_0221e93c();
        func_ov001_0221fbb4(0);
        func_ov001_02220778(0x47, 0, 1, -1, 0);
        func_ov001_02208070();
        func_ov001_0220c668((void *)func_ov001_0221c680);
        break;
    case 3:
        data_ov001_0222ded8 = 2;
        func_ov001_0221e93c();
        func_ov001_0221e9a0(9);
        func_ov001_0220c668((void *)func_ov001_0221ca24);
        break;
    }
}

extern "C" void func_ov001_0221c724() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_0221c6f0);
}

extern "C" void func_ov001_0221c6f0() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_0220c668((void *)func_ov001_0221ca24);
}

extern "C" void func_ov001_0221c680() {
    s32 r = func_ov001_02220714();
    if (r != 0) {
        if (r != 1) return;
        data_ov001_0222ded8 = 3;
        func_ov001_0221e9a0(6);
    } else {
        data_ov001_0222ded8 = 1;
        func_ov001_0221e9a0(7);
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_0221c5fc);
}

extern "C" void func_ov001_0221c5fc() {
    if (func_ov001_022206f8() != 0) return;
    if (data_ov001_0222ded8 == 1) {
        func_ov001_0220c668((void *)func_ov001_0221ca24);
        return;
    }
    func_ov001_0221e9a0(0xb);
    func_ov001_02208088();
    data_ov001_0222ded8 = 0;
    func_ov001_0221fbb4((s32)func_ov001_0221c764);
    func_ov001_0220c668((void *)func_ov001_0221cb10);
}

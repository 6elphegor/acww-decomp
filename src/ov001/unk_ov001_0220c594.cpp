// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220c5c8_Bits {
    u32 lo : 4;
    u32 hi : 28;
};

extern "C" {
//DEFS
u8 data_ov001_0222ddec;
u32 data_ov001_0222ddf8;
u8 data_ov001_0222ddf0;
u32 data_ov001_0222ddf4;
void (*data_ov001_0222ddfc)();
u32 data_ov001_0222de00[4];
//ENDDEFS

extern void func_0206d49c();
extern void func_020ff2e4();
extern void VBlankIntrWait();


extern void func_ov001_02225d08();
void func_ov001_0220d570();
void func_ov001_0220c668(void (*)());
s32 func_ov001_0220c9d8();
s32 func_ov001_0220c6d4();
s32 func_ov001_0220c678();
s32 func_ov001_0220caac(s32, u32);
void func_ov001_0220c37c();
void *func_ov001_0220c388(s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void *func_ov001_02225db0(s32, s32);
extern void func_ov001_02225d58(void *);
extern void func_ov001_0221e024(void *);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MI_CpuCopy8(void *, void *);
extern void OS_GetMacAddress(void *);
extern s32 GX_DispOff();
extern void GX_VBlankIntr(s32);
extern void GX_SetBankForBG(s32);
extern void GX_SetBankForOBJ(s32);
extern void GX_SetGraphicsMode(s32, s32, s32);
extern void GXx_SetMasterBrightness_(u32, s32);
extern void G2x_SetBlendBrightness_(u32, s32, s32);
extern void GX_SetBankForSubBG(s32);
extern void GX_SetBankForSubOBJ(s32);
extern void GXS_SetGraphicsMode(s32);
extern void GX_DispOn();
extern s32 OS_IsTickAvailable();
extern s32 OS_IsAlarmAvailable();
extern void func_01ffcb28();
extern void FS_Init(s32);
extern void TP_Init();
extern void RTC_Init();
extern void func_ov001_02226c50();
extern void func_ov001_022264f4();
extern void func_ov001_022265e0();
extern void func_ov001_0221e9c4();
extern void func_ov001_022249e8();
extern void func_ov001_0222685c();
extern void func_ov001_02225828();
extern void func_ov001_02225104();
extern void func_ov001_02224258();
extern void func_ov001_0222718c();
extern s32 func_ov001_02225e28();
extern void func_ov001_02226d68();
extern void func_ov001_0222587c();
extern void func_ov001_022268e4();
extern void func_ov001_02226b60();
extern void func_ov001_02224a3c();
extern void func_ov001_02226ea8();
extern void func_ov001_02225e58(u32);
extern void func_ov001_0222662c();
extern void func_ov001_022271dc();
extern void func_ov001_022242e8();
extern void func_ov001_0222652c();
extern void func_ov001_02225118();
extern void func_ov001_0221e9f8();
extern void func_ov001_022264d8();
extern void func_ov001_022270b4(s32);
extern void func_ov001_02225ea0();
extern void func_ov001_02226c60();
extern void func_ov001_02224038(void *);
extern void *func_ov001_02224ca0(void *);
extern void func_ov001_02224cfc(void *, void *);
extern void *func_ov001_02224074(void *, void *, u32);


#pragma thumb off


s32 func_ov001_0220cb30(u32 a, s32 b, u32 c) {
    data_ov001_0222ddf4 = a;
    if (func_ov001_0220caac(b, c) == 0) return -1;
    data_ov001_0222ddf0 = 0;
    func_ov001_0220c9d8();
    func_ov001_0220c6d4();
    func_ov001_0221e9f8();
    func_ov001_0220c668(func_ov001_0220d570);
    do {
        func_ov001_022264d8();
        data_ov001_0222ddfc();
        func_ov001_022270b4(0);
        func_ov001_02225ea0();
        func_ov001_02226c60();
        VBlankIntrWait();
    } while (data_ov001_0222ddf0 == 0);
    func_ov001_0220c678();
    return 0;
}

s32 func_ov001_0220caac(s32 a, u32 b) {
    data_ov001_0222ddec = a;
    data_ov001_0222ddf8 = b;
    if (a < 0 || a > 5) return 0;
    if ((u32)(b << 28) >> 28 > 1) return 0;
    if (a != 0) {
        if (((b >> 4) & 1) != 0) return 0;
    }
    if (a == 0) {
        if (((*(volatile u32 *)&data_ov001_0222ddf8 >> 4) & 1) == 0) return 0;
    }
    return 1;
}

s32 func_ov001_0220c9d8() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 old = *ime;
    *ime = 0;
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    if (OS_IsTickAvailable() == 0) func_0206d49c();
    if (OS_IsAlarmAvailable() == 0) func_0206d49c();
    GX_VBlankIntr(0);
    func_01ffcb28();
    FS_Init(-1);
    TP_Init();
    RTC_Init();
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    func_ov001_02226ea8();
    func_ov001_02225e58(data_ov001_0222ddf4);
    func_ov001_0222662c();
    func_ov001_022271dc();
    func_ov001_022242e8();
    func_ov001_0222652c();
    func_ov001_02225118();
    void *p = func_ov001_02225dd8(0x700, 0x20);
    func_020ff2e4();
    func_ov001_02225d58(&p);
}

s32 func_ov001_0220c6d4() {
    GX_VBlankIntr(0);
    GX_SetBankForBG(1);
    GX_SetBankForOBJ(2);
    GX_SetGraphicsMode(1, 0, 0);
    *(volatile u32 *)0x4000000 &= ~0x1f00;
    *(volatile u32 *)0x4000000 &= ~0xe000;
    GXx_SetMasterBrightness_(0x400006c, 0);
    *(volatile u32 *)0x4000000 = (*(volatile u32 *)0x4000000 & 0xffcfffef) | 0x200010;
    *(volatile u16 *)0x4000008 &= ~0x40;
    *(volatile u16 *)0x400000a &= ~0x40;
    *(volatile u16 *)0x400000c &= ~0x40;
    *(volatile u16 *)0x400000e &= ~0x40;
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000014 = 0;
    *(volatile u32 *)0x4000018 = 0;
    *(volatile u32 *)0x400001c = 0;
    G2x_SetBlendBrightness_(0x4000050, 0x3f, 0x10);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0x100);
    GXS_SetGraphicsMode(0);
    *(volatile u32 *)0x4001000 &= ~0x1f00;
    *(volatile u32 *)0x4001000 &= ~0xe000;
    GXx_SetMasterBrightness_(0x400106c, 0);
    *(volatile u32 *)0x4001000 = (*(volatile u32 *)0x4001000 & 0xffcfffef) | 0x10;
    *(volatile u16 *)0x4001008 &= ~0x40;
    *(volatile u16 *)0x400100a &= ~0x40;
    *(volatile u16 *)0x400100c &= ~0x40;
    *(volatile u16 *)0x400100e &= ~0x40;
    *(volatile u32 *)0x4001010 = 0;
    *(volatile u32 *)0x4001014 = 0;
    *(volatile u32 *)0x4001018 = 0;
    *(volatile u32 *)0x400101c = 0;
    G2x_SetBlendBrightness_(0x4001050, 0x3f, 0x10);
    *(volatile u16 *)0x4000008 = (*(volatile u16 *)0x4000008 & 0x43) | 0xc00;
    *(volatile u16 *)0x400000a = (*(volatile u16 *)0x400000a & 0x43) | 0xd08;
    *(volatile u16 *)0x400000c = (*(volatile u16 *)0x400000c & 0x43) | 0xe10;
    *(volatile u16 *)0x400000e = (*(volatile u16 *)0x400000e & 0x43) | 0xf10;
    *(volatile u16 *)0x4001008 = (*(volatile u16 *)0x4001008 & 0x43) | 0xc00;
    *(volatile u16 *)0x400100a = (*(volatile u16 *)0x400100a & 0x43) | 0xd00;
    *(volatile u16 *)0x400100c = (*(volatile u16 *)0x400100c & 0x43) | 0xe00;
    *(volatile u16 *)0x400100e = (*(volatile u16 *)0x400100e & 0x43) | 0xf00;
    *(volatile u16 *)0x4000304 &= ~0x8000;
    func_ov001_0222587c();
    func_ov001_022268e4();
    func_ov001_02226b60();
    func_ov001_02224a3c();
    GX_DispOn();
    *(volatile u32 *)0x4001000 |= 0x10000;
    GX_VBlankIntr(1);
}

s32 func_ov001_0220c678() {
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    func_ov001_02226c50();
    func_ov001_022264f4();
    func_ov001_022265e0();
    func_ov001_0221e9c4();
    func_ov001_022249e8();
    func_ov001_0222685c();
    func_ov001_02225828();
    func_ov001_02225104();
    func_ov001_02224258();
    func_ov001_0222718c();
    func_ov001_02225e28();
    func_ov001_02226d68();
}

void func_ov001_0220c668(void (*f)()) {
    data_ov001_0222ddfc = f;
}

void func_ov001_0220c654(u32 a, u32 b) {
    data_ov001_0222de00[0] = a;
    data_ov001_0222de00[1] = b;
}

void func_ov001_0220c62c(u32 *a, u32 *b) {
    if (a) *a = data_ov001_0222de00[0];
    if (b) *b = data_ov001_0222de00[1];
}

void func_ov001_0220c618(u32 a, u32 b) {
    data_ov001_0222de00[2] = a;
    data_ov001_0222de00[3] = b;
}

void func_ov001_0220c5f0(u32 *a, u32 *b) {
    if (a) *a = data_ov001_0222de00[2];
    if (b) *b = data_ov001_0222de00[3];
}

u32 func_ov001_0220c5e0() {
    return data_ov001_0222ddec;
}

u32 func_ov001_0220c5c8() {
    return ((Unk_ov001_0220c5c8_Bits *)&data_ov001_0222ddf8)->lo;
}

BOOL func_ov001_0220c5a8(u32 m) {
    if (((data_ov001_0222ddf8 >> 4) & m) != 0) return TRUE;
    return FALSE;
}

void func_ov001_0220c594() {
    data_ov001_0222ddf0 = 1;
}
}
#pragma thumb reset

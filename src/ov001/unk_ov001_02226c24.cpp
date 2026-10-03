// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02226d68_Regs {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20, unk_24, unk_28, unk_2c, unk_30;
};

extern "C" {
u32 func_0210f614();
u32 func_0210f600();
u32 func_0210f5dc();
u32 func_0210f5b8();
u32 func_0210f5a4();
u32 func_0210f590();
u32 func_0210f57c();
u32 func_0210f540();
u32 func_0210f52c();
u32 func_0210f504();
u32 func_0210f4dc();
u32 func_0210f568();
u32 func_0210f554();
void GX_SetBankForBG(u32);
void GX_SetBankForOBJ(u32);
void GX_SetBankForBGExtPltt(u32);
void GX_SetBankForOBJExtPltt(u32);
void GX_SetBankForTex(u32);
void GX_SetBankForTexPltt(u32);
void GX_SetBankForClearImage(u32);
void func_0210f900(u32);
void GX_SetBankForSubOBJ(u32);
void GX_SetBankForSubBGExtPltt(u32);
void GX_SetBankForSubOBJExtPltt(u32);
void GX_SetBankForLCDC(u32);
void func_0210f9cc(u32);
void PM_SetLCDPower(s32);
void func_0211c3b4(s32);
s32 func_0211c328(u32 *);
void MIi_CpuClearFast(u32, void *, u32);
s32 func_ov001_02226c24(u8 *s, s32 n);
void func_ov001_02226c50();
void func_ov001_02226c60();
void func_ov001_02226ca8();
void func_ov001_02226d68();
void func_ov001_02226ea8();
}

extern "C" Unk_ov001_02226d68_Regs data_ov001_0222df78 = {0};

#pragma thumb off

void func_ov001_02226ea8() {
    data_ov001_0222df78.unk_00 = func_0210f614();
    data_ov001_0222df78.unk_04 = func_0210f600();
    data_ov001_0222df78.unk_08 = func_0210f5dc();
    data_ov001_0222df78.unk_0c = func_0210f5b8();
    data_ov001_0222df78.unk_10 = func_0210f5a4();
    data_ov001_0222df78.unk_14 = func_0210f590();
    data_ov001_0222df78.unk_18 = func_0210f57c();
    data_ov001_0222df78.unk_1c = func_0210f540();
    data_ov001_0222df78.unk_20 = func_0210f52c();
    data_ov001_0222df78.unk_24 = func_0210f504();
    data_ov001_0222df78.unk_28 = func_0210f4dc();
    data_ov001_0222df78.unk_2c = func_0210f568();
    data_ov001_0222df78.unk_30 = func_0210f554();
    func_0210f9cc(data_ov001_0222df78.unk_2c);
    func_ov001_02226ca8();
}

void func_ov001_02226d68() {
    func_0210f614();
    func_0210f600();
    func_0210f540();
    func_0210f52c();
    func_ov001_02226ca8();
    GX_SetBankForBG(data_ov001_0222df78.unk_00);
    GX_SetBankForOBJ(data_ov001_0222df78.unk_04);
    GX_SetBankForBGExtPltt(data_ov001_0222df78.unk_08);
    GX_SetBankForOBJExtPltt(data_ov001_0222df78.unk_0c);
    GX_SetBankForTex(data_ov001_0222df78.unk_10);
    GX_SetBankForTexPltt(data_ov001_0222df78.unk_14);
    GX_SetBankForClearImage(data_ov001_0222df78.unk_18);
    func_0210f900(data_ov001_0222df78.unk_1c);
    GX_SetBankForSubOBJ(data_ov001_0222df78.unk_20);
    GX_SetBankForSubBGExtPltt(data_ov001_0222df78.unk_24);
    GX_SetBankForSubOBJExtPltt(data_ov001_0222df78.unk_28);
    GX_SetBankForLCDC(data_ov001_0222df78.unk_30);
    *(volatile u16 *)0x4000050 = 0;
    *(volatile u16 *)0x4001050 = 0;
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000014 = 0;
    *(volatile u32 *)0x4000018 = 0;
    *(volatile u32 *)0x400001c = 0;
    *(volatile u32 *)0x4001010 = 0;
    *(volatile u32 *)0x4001014 = 0;
    *(volatile u32 *)0x4001018 = 0;
    *(volatile u32 *)0x400101c = 0;
    PM_SetLCDPower(1);
}

void func_ov001_02226ca8()
{
    volatile u32 a, b, c, d, e, f;
    GX_SetBankForLCDC(0x1f3);
    c = 0;
    MIi_CpuClearFast(c, (void *)0x6800000, 0x40000);
    d = 0;
    MIi_CpuClearFast(d, (void *)0x6880000, 0x24000);
    func_0210f554();
    a = 0x200;
    MIi_CpuClearFast(a, (void *)0x7000000, 0x400);
    e = 0;
    MIi_CpuClearFast(e, (void *)0x5000000, 0x400);
    b = 0x200;
    MIi_CpuClearFast(b, (void *)0x7000400, 0x400);
    f = 0;
    MIi_CpuClearFast(f, (void *)0x5000400, 0x400);
}

void func_ov001_02226c60()
{
    u32 v;
    if (func_0211c328(&v) != 0) return;
    if (v == 0xf) return;
    func_0211c3b4(0xf);
}

void func_ov001_02226c50()
{
    func_0211c3b4(1);
}

s32 func_ov001_02226c24(u8 *s, s32 n)
{
    s32 i = 0;
    if (n > 0) {
        do {
            if (s[i] == 0) break;
            i++;
        } while (i < n);
    }
    return i;
}


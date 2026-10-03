// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_027e0000[];
void func_ov001_022270b4(s32);
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void OS_SetIrqMask(u32);
void OS_ResetRequestIrqMask(s32);
s32 OS_GetIrqFunction(s32);
void OS_SetIrqFunction(s32, void *);
void func_01ffa314(s32);
void func_ov001_022265ac();
void func_ov001_022265e0();
void func_ov001_0222662c();
}

extern "C" u32 data_ov001_0222df68 = 0;
extern "C" u32 data_ov001_0222df6c = 0;

#pragma thumb off

void func_ov001_0222662c()
{
    data_ov001_0222df6c = *(volatile u32 *)0x4000210;
    OS_SetIrqMask(0x40018);
    OS_EnableIrqMask(1);
    data_ov001_0222df68 = OS_GetIrqFunction(1);
    OS_SetIrqFunction(1, (void *)func_ov001_022265ac);
    OS_ResetRequestIrqMask(1);
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 1;
    func_01ffa314(1);
}

void func_ov001_022265e0()
{
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 0;
    OS_SetIrqMask(data_ov001_0222df6c);
    OS_SetIrqFunction(1, (void *)data_ov001_0222df68);
}

void func_ov001_022265ac()
{
    func_ov001_022270b4(1);
    u32 *g = (u32 *)data_027e0000;
    g += 0xc00;
    g[0x3fe] |= 1;
}


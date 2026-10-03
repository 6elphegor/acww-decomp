// mwcc-flags: -O4,p
#include "types.h"

extern "C" {
extern u8 data_027e0000[];
void WfcTask_RunList(s32);
s32 OS_DisableIrqMask(s32);
s32 OS_EnableIrqMask(s32);
void OS_SetIrqMask(u32);
void OS_ResetRequestIrqMask(s32);
s32 OS_GetIrqFunction(s32);
void OS_SetIrqFunction(s32, void *);
void func_01ffa314(s32);
void WfcIrq_VBlank();
void WfcIrq_Restore();
void WfcIrq_Init();
}

extern "C" u32 sWfcSavedVBlankHandler = 0;
extern "C" u32 sWfcSavedIrqMask = 0;

#pragma thumb off

void WfcIrq_Init()
{
    sWfcSavedIrqMask = *(volatile u32 *)0x4000210;
    OS_SetIrqMask(0x40018);
    OS_EnableIrqMask(1);
    sWfcSavedVBlankHandler = OS_GetIrqFunction(1);
    OS_SetIrqFunction(1, (void *)WfcIrq_VBlank);
    OS_ResetRequestIrqMask(1);
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 1;
    func_01ffa314(1);
}

void WfcIrq_Restore()
{
    u16 t = *(volatile u16 *)0x4000208;
    *(volatile u16 *)0x4000208 = 0;
    OS_SetIrqMask(sWfcSavedIrqMask);
    OS_SetIrqFunction(1, (void *)sWfcSavedVBlankHandler);
}

void WfcIrq_VBlank()
{
    WfcTask_RunList(1);
    u32 *g = (u32 *)data_027e0000;
    g += 0xc00;
    g[0x3fe] |= 1;
}


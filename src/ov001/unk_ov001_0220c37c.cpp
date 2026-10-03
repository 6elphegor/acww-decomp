// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220c474_Rec {
    u16 unk_00[0x82];
};

struct Unk_ov001_0220c398_Obj {
    u16 unk_000;
    Unk_ov001_0220c474_Rec unk_002;
    u16 unk_106;
    s16 unk_108;
    u16 unk_10a;
    s16 unk_10c;
    s16 unk_10e;
    u8 unk_110[6];
    u8 unk_116;
    u8 unk_117[0x155];
};

extern "C" {
extern const char data_ov001_02229f84[12];
const char data_ov001_02229f84[12] = "NINTENDO-DS";

volatile u8 sWfcAossSucceeded;
Unk_ov001_0220c398_Obj *sWfcAossConfig;

extern s32 Aoss_Run(void *);
extern s32 Aoss_WlanShutdown();
extern s32 Aoss_WlanStartup(void *, void *);
extern void Fatal_Trap();

#pragma thumb off

extern void WfcHeap_Free();
void WfcAoss_Free();
void *WfcAoss_Alloc(s32);
extern void *WfcHeap_Alloc(s32, s32);
extern void *WfcHeap_AllocClear(s32, s32);
extern void WfcHeap_FreeAndClear(void *);
extern void WfcConfig_StoreAoss(void *);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MI_CpuCopy8(const void *, void *);
extern void OS_GetMacAddress(void *);

void WfcAoss_Begin() {
    volatile u16 z;
    Unk_ov001_0220c474_Rec r;
    sWfcAossConfig = (Unk_ov001_0220c398_Obj *)WfcHeap_AllocClear(0x26c, 4);
    sWfcAossSucceeded = 0;
    z = 0;
    MIi_CpuClear16(z, &r, 0x104);
    *(u8 *)&r = 0x50;
    r.unk_00[1] = 0xc;
    MI_CpuCopy8(data_ov001_02229f84, &r.unk_00[2]);
    sWfcAossConfig->unk_000 = 3;
    sWfcAossConfig->unk_002 = r;
    sWfcAossConfig->unk_106 = 1;
    sWfcAossConfig->unk_108 = -1;
    sWfcAossConfig->unk_10a = 1;
    sWfcAossConfig->unk_10c = -1;
    sWfcAossConfig->unk_10e = -1;
    OS_GetMacAddress(sWfcAossConfig->unk_110);
    if (Aoss_WlanStartup((void *)WfcAoss_Alloc, (void *)WfcAoss_Free) != 0) {
        Fatal_Trap();
    }
}

void WfcAoss_End(s32 a) {
    Aoss_WlanShutdown();
    if (a != 0) {
        Unk_ov001_0220c398_Obj *o = sWfcAossConfig;
        if (o->unk_116 == 0) {
            if (sWfcAossSucceeded == 1) {
                WfcConfig_StoreAoss(o->unk_117);
            }
        }
    }
    WfcHeap_FreeAndClear(&sWfcAossConfig);
}

u32 WfcAoss_Run() {
    if (Aoss_Run(sWfcAossConfig) == 0) {
        sWfcAossSucceeded = 1;
        return 1;
    }
    u32 t = sWfcAossConfig->unk_116;
    if (t == 1) goto zero;
    if ((u8)(t + 0xfd) > 2) goto two;
zero:
    return 0;
two:
    return 2;
}

void *WfcAoss_Alloc(s32 a) {
    return WfcHeap_Alloc(a, 0x20);
}

void WfcAoss_Free() {
    WfcHeap_Free();
}
}
#pragma thumb reset

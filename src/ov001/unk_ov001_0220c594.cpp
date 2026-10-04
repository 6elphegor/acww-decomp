// mwcc-flags: -O4,p
#include "types.h"

struct WfcParamBits {
    u32 startMode : 4;
    u32 optionFlags : 28;
};

extern "C" {
//DEFS
u8 sWfcLanguage;
u32 sWfcParams;
u8 sWfcExitRequested;
u32 sWfcWorkArea;
void (*sWfcSceneFunc)();
u32 sWfcScreenFlags[4];
//ENDDEFS

extern void Fatal_Trap();
extern void DWC_BM_Init();
extern void VBlankIntrWait();


extern void WfcHeap_Free();
void WfcBoot_Enter();
void WfcUtil_SetScene(void (*)());
s32 WfcUtil_InitSystem();
s32 WfcUtil_InitDisplay();
s32 WfcUtil_Shutdown();
s32 WfcUtil_CheckParams(s32, u32);
void WfcAoss_Free();
void *WfcAoss_Alloc(s32);
extern void *WfcHeap_Alloc(s32, s32);
extern void *WfcHeap_AllocClear(s32, s32);
extern void WfcHeap_FreeAndClear(void *);
extern void WfcConfig_StoreAoss(void *);
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
extern void WfcUtil_RestoreLed();
extern void WfcInput_Shutdown();
extern void WfcIrq_Restore();
extern void WfcSound_Shutdown();
extern void WfcObj_Shutdown();
extern void WfcOam_Shutdown();
extern void WfcText_Shutdown();
extern void WfcFade_Shutdown();
extern void WfcFs_UnmountArchive();
extern void WfcTask_Shutdown();
extern s32 WfcHeap_Destroy();
extern void WfcGx_RestoreVramBanks();
extern void WfcText_Init();
extern void WfcOam_Init();
extern void WfcVram_Init();
extern void WfcObj_Init();
extern void WfcGx_SaveVramBanks();
extern void WfcHeap_Init(u32);
extern void WfcIrq_Init();
extern void WfcTask_Init();
extern void WfcFs_MountArchive();
extern void WfcInput_Init();
extern void WfcFade_Init();
extern void WfcSound_Init();
extern void WfcInput_Update();
extern void WfcTask_RunList(s32);
extern void WfcUtil_UpdateLidPower();
extern void WfcUtil_UpdateLed();
extern void WfcFs_FreeFile(void *);
extern void *WfcPool_Get(void *);
extern void WfcPool_Put(void *, void *);
extern void *WfcFs_LoadFile(void *, void *, u32);


#pragma thumb off


s32 WfcUtil_Run(u32 a, s32 b, u32 c) {
    sWfcWorkArea = a;
    if (WfcUtil_CheckParams(b, c) == 0) return -1;
    sWfcExitRequested = 0;
    WfcUtil_InitSystem();
    WfcUtil_InitDisplay();
    WfcSound_Init();
    WfcUtil_SetScene(WfcBoot_Enter);
    do {
        WfcInput_Update();
        sWfcSceneFunc();
        WfcTask_RunList(0);
        WfcUtil_UpdateLidPower();
        WfcUtil_UpdateLed();
        VBlankIntrWait();
    } while (sWfcExitRequested == 0);
    WfcUtil_Shutdown();
    return 0;
}

s32 WfcUtil_CheckParams(s32 a, u32 b) {
    sWfcLanguage = a;
    sWfcParams = b;
    if (a < 0 || a > 5) return 0;
    if ((u32)(b << 28) >> 28 > 1) return 0;
    if (a != 0) {
        if (((b >> 4) & 1) != 0) return 0;
    }
    if (a == 0) {
        if (((*(volatile u32 *)&sWfcParams >> 4) & 1) == 0) return 0;
    }
    return 1;
}

s32 WfcUtil_InitSystem() {
    volatile u16 *ime = (volatile u16 *)0x4000208;
    u16 old = *ime;
    *ime = 0;
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    if (OS_IsTickAvailable() == 0) Fatal_Trap();
    if (OS_IsAlarmAvailable() == 0) Fatal_Trap();
    GX_VBlankIntr(0);
    func_01ffcb28();
    FS_Init(-1);
    TP_Init();
    RTC_Init();
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    WfcGx_SaveVramBanks();
    WfcHeap_Init(sWfcWorkArea);
    WfcIrq_Init();
    WfcTask_Init();
    WfcFs_MountArchive();
    WfcInput_Init();
    WfcFade_Init();
    void *p = WfcHeap_Alloc(0x700, 0x20);
    DWC_BM_Init();
    WfcHeap_FreeAndClear(&p);
}

s32 WfcUtil_InitDisplay() {
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
    WfcText_Init();
    WfcOam_Init();
    WfcVram_Init();
    WfcObj_Init();
    GX_DispOn();
    *(volatile u32 *)0x4001000 |= 0x10000;
    GX_VBlankIntr(1);
}

s32 WfcUtil_Shutdown() {
    GX_DispOff();
    *(volatile u32 *)0x4001000 &= ~0x10000;
    WfcUtil_RestoreLed();
    WfcInput_Shutdown();
    WfcIrq_Restore();
    WfcSound_Shutdown();
    WfcObj_Shutdown();
    WfcOam_Shutdown();
    WfcText_Shutdown();
    WfcFade_Shutdown();
    WfcFs_UnmountArchive();
    WfcTask_Shutdown();
    WfcHeap_Destroy();
    WfcGx_RestoreVramBanks();
}

void WfcUtil_SetScene(void (*f)()) {
    sWfcSceneFunc = f;
}

void WfcUtil_SetScreenFlags(u32 a, u32 b) {
    sWfcScreenFlags[0] = a;
    sWfcScreenFlags[1] = b;
}

void WfcUtil_GetScreenFlags(u32 *a, u32 *b) {
    if (a) *a = sWfcScreenFlags[0];
    if (b) *b = sWfcScreenFlags[1];
}

void WfcUtil_SetEditParams(u32 a, u32 b) {
    sWfcScreenFlags[2] = a;
    sWfcScreenFlags[3] = b;
}

void WfcUtil_GetEditParams(u32 *a, u32 *b) {
    if (a) *a = sWfcScreenFlags[2];
    if (b) *b = sWfcScreenFlags[3];
}

u32 WfcUtil_GetLanguage() {
    return sWfcLanguage;
}

u32 WfcUtil_GetStartMode() {
    return ((WfcParamBits *)&sWfcParams)->startMode;
}

BOOL WfcUtil_TestOptionFlag(u32 m) {
    if (((sWfcParams >> 4) & m) != 0) return TRUE;
    return FALSE;
}

void WfcUtil_RequestExit() {
    sWfcExitRequested = 1;
}
}
#pragma thumb reset

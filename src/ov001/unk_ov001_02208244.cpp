// mwcc-flags: -O4,p
#include "types.h"

typedef void (*WfcLoadFunc)(void *, s32, u32);

extern "C" u8 sWfcTopMessageShown = 0;
extern "C" const u16 data_ov001_02229b74[4] = {0x14, 0, 0xd8, 0x40};

extern "C" {
extern void *gWfcMsgBank;
extern void GXS_LoadBG0Scr(void *, s32, u32);
extern void WfcText_DestroyBgCanvas(s32);
extern void *WfcText_CreateBgCanvas(s32, s32);
extern void *WfcMsg_GetStringWithDigit(void *, s32, s32, s32);
extern void WfcText_DrawTextRect(void *, u32, u32, u32, u32, s32, u32, void *);
extern void WfcText_RequestTransfer(void *);
s32 WfcUtil_LoadFileTo(void *a, WfcLoadFunc fn);
u32 WfcUtil_GetTextFlags();
}

#pragma thumb off

extern "C" void WfcUtil_ResetTopMessage() {
    sWfcTopMessageShown = 0;
}

extern "C" s32 WfcUtil_ShowTopMessage(s32 a, s32 b, s32 c) {
    void *r4, *r5;
    if (sWfcTopMessageShown != 0) return 0;
    WfcUtil_LoadFileTo((void *)"char/jtNull.nsc.l", GXS_LoadBG0Scr);
    *(volatile u32 *)0x4001010 = 0x1920000;
    r4 = WfcText_CreateBgCanvas(1, 0);
    r5 = WfcMsg_GetStringWithDigit(gWfcMsgBank, a, b, c);
    u32 t = WfcUtil_GetTextFlags();
    const u16 *s = data_ov001_02229b74;
    WfcText_DrawTextRect(r4, s[0], s[1], s[2], s[3], 2, t, r5);
    WfcText_RequestTransfer(r4);
    sWfcTopMessageShown = 1;
    return 1;
}

extern "C" s32 WfcUtil_HideTopMessage() {
    if (sWfcTopMessageShown == 0) return 0;
    WfcText_DestroyBgCanvas(1);
    sWfcTopMessageShown = 0;
    return 1;
}

#pragma thumb reset

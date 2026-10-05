// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
s32 DC_FlushRange(void *, u32);
s32 GXS_LoadBG1Scr(void *, u32, u32);
s32 WfcFs_FreeFile(void *);
void *WfcUtil_LocalizePath(u32);
s32 WfcFs_LoadFile(void *, void *, u32);
s32 WfcTask_RequestDelete(s32, s32);
s32 WfcTask_Add(s32, void *, s32, s32);

void WfcTop_TransferTask(s32 a);
void WfcTop_LoadScreen(u32 i);
}

char data_ov001_0222b46c[] = "char/jtTop.nsc.l";
char data_ov001_0222b480[] = "char/jtStep1.nsc.l";
char data_ov001_0222b494[] = "char/jtStep2.nsc.l";
char data_ov001_0222b4a8[] = "char/jtStep3.nsc.l";
char data_ov001_0222b4bc[] = "char/jtOption.nsc.l";
char *sWfcTopScreenPaths[5] = { data_ov001_0222b480, data_ov001_0222b494, data_ov001_0222b4a8, data_ov001_0222b4bc, data_ov001_0222b46c };
u8 *sWfcTopScreenData;

void WfcTop_LoadScreen(u32 i)
{
    void *p = WfcUtil_LocalizePath((u32)sWfcTopScreenPaths[i]);
    sWfcTopScreenData = (u8 *)WfcFs_LoadFile(p, 0, 4);
    WfcTask_Add(1, (void *)WfcTop_TransferTask, 0, 0x78);
}

void WfcTop_TransferTask(s32 a)
{
    DC_FlushRange(sWfcTopScreenData, 0x600);
    GXS_LoadBG1Scr(sWfcTopScreenData, 0, 0x600);
    WfcFs_FreeFile(sWfcTopScreenData);
    WfcTask_RequestDelete(1, a);
}


// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222df2c_Rec {
    u16 unk_00;
    u8 pad_02[0x42];
};

struct Unk_ov001_0222df2c {
    u32 pad_000[0x40];
    Unk_ov001_0222df2c_Rec unk_100[2];
    u8 pad_188[0x200 - 0x188];
    u16 unk_200;
    u16 unk_202;
    u32 unk_204;
    u32 unk_208[16];
    u8 pad_248[0x648 - 0x248];
    u16 unk_648;
    u16 unk_64a;
    u8 unk_64c[0xa50 - 0x64c];
    u8 unk_a50[0x40];
    u8 unk_a90;
    u8 unk_a91;
    u8 unk_a92;
    u8 unk_a93;
    u32 unk_a94;
    u32 unk_a98;
    u32 unk_a9c;
    u32 unk_aa0[1];
    u8 *unk_aa4;
    u8 pad_aa8[4];
    u8 unk_aac;
    u8 pad_aad[3];
    void *unk_ab0;
    u32 unk_ab4;
    u32 unk_ab8;
    u32 unk_abc;
    u32 unk_ac0;
    u32 unk_ac4;
    u32 unk_ac8;
    u8 unk_acc;
    u8 pad_acd[0x33];
    u8 unk_b00[1];
};

extern "C" {
void MI_CpuFill8(void *, s32, s32);
void MI_CpuCopy8(void *, void *, s32);
void MB_End();
s32 MB_CommGetChildUser(s32);
void Fatal_Trap();
u64 OS_GetTick();
u32 WM_GetNextTgid();
void func_020fefb0(void *);

s32 WfcMoveMb_FindAidByMac(s32);
s32 WfcMoveMb_GetChildInfo();
s32 WfcMoveMb_GetState();
s32 WfcMoveMb_GetChildMask(s32);
s32 WfcMoveMb_IsAllBootable();
s32 WfcMoveMb_StartRebootAll();
s32 WfcMoveMb_Cancel();
void WfcMoveMb_StartDownloadAll();
s32 WfcMoveMb_StartParent(void *, u16);
s32 WfcMoveMb_Init(void *, u16);
s32 WfcMoveWh_End();
s32 DWCi_MOV_WH_Finalize();
s32 WfcMoveWh_Reset();
s32 DWCi_MOV_WH_StepDataSharing(void *);
void *WfcMoveWh_GetSharedData(u32);
void WfcMoveWh_SetJudgeCallback(void *);
s32 WfcMoveWh_ParentConnect(s32, u16, u16);
void WfcMoveWh_Initialize();
void WfcMoveMb_SetWork(void *);
s32 WfcMoveWh_DecideChannel();
s32 WfcMoveWh_StartMeasureChannel();
s32 WfcMoveWh_GetSysState();
s32 WfcMoveWh_GetConnectedBitmap();
void WfcMoveWh_SetGgid(u32);
u8 *WfcConfig_Get();

s32 WfcMove_GetChildReply();
void WfcMove_ProcessRecv();
void WfcMove_SendBlock(u32 a, u32 b, void *src);
void WfcMove_ClearBuffers();
s32 WfcMove_JudgeChild(s32 a);
s32 WfcMove_TryEnd();
void WfcMove_SetDone();
void WfcMove_StepDataShare();
void WfcMove_StepStartDataShare();
void WfcMove_StepMb();
void WfcMove_StepInitMb();
void WfcMove_StepMeasureChannel();
void WfcMove_ResetSession();
BOOL WfcMove_Start();
}

extern "C" Unk_ov001_0222df2c *sWfcMove = 0;

#define H (sWfcMove)

void WfcMove_ResetSession();

extern "C" void WfcMove_Init(Unk_ov001_0222df2c *self, u32 *a) {
    sWfcMove = self;
    WfcMoveMb_SetWork(self->unk_b00);
    sWfcMove->unk_648 = 0;
    sWfcMove->unk_64a = 0;
    sWfcMove->unk_a90 = 1;
    sWfcMove->unk_a91 = 1;
    sWfcMove->unk_a9c = 0;
    WfcMove_ClearBuffers();
    sWfcMove->unk_ab4 = a[0];
    sWfcMove->unk_ab8 = a[1];
    sWfcMove->unk_abc = a[2];
    sWfcMove->unk_ac0 = a[3];
    sWfcMove->unk_ac4 = a[4];
    sWfcMove->unk_ac8 = a[5];
    sWfcMove->unk_a92 = *(u8 *)&a[6];
    sWfcMove->unk_acc = 2;
    OS_GetTick();
    func_020fefb0(sWfcMove->unk_64c);
    OS_GetTick();
    sWfcMove->unk_aa4 = WfcConfig_Get();
}

extern "C" BOOL WfcMove_RequestCancel() {
    Unk_ov001_0222df2c *s = sWfcMove;
    u32 st = s->unk_a90;
    if (st == 1 || st == 0x14 || st == 0x17 || st == 0x1a || st == 0x1d) {
        s->unk_a90 = 0x22;
        sWfcMove->unk_aac = 0;
        return TRUE;
    }
    if (st == 4 || st == 5 || st == 6 || st == 0xd) {
        if (st == 4) {
            if (s->unk_a98 < 6) {
                return FALSE;
            }
        }
        MB_End();
        sWfcMove->unk_a90 = 0x10;
        sWfcMove->unk_aac = 2;
        return TRUE;
    }
    if ((u8)(st + 0xf7) <= 1) {
        s->unk_a90 = 0x20;
        return TRUE;
    }
    if (st == 0xc) {
        s->unk_a90 = 0x22;
        return TRUE;
    }
    BOOL r = FALSE;
    if (st == 2) {
        r = FALSE;
    } else {
        r = st - st;
    }
    return r;
}

extern "C" void WfcMove_ResetSession() {
    WfcMoveWh_SetGgid(sWfcMove->unk_ac8);
    sWfcMove->unk_a90 = 1;
    sWfcMove->unk_648 = WM_GetNextTgid();
    MI_CpuCopy8(sWfcMove->unk_aa4, sWfcMove->unk_a50, 0x40);
    sWfcMove->unk_a93 = 0;
    sWfcMove->unk_204 = 0;
    sWfcMove->unk_648 = sWfcMove->unk_648 + 1;
}

extern "C" BOOL WfcMove_Start() {
    u32 st = sWfcMove->unk_a90;
    if (st == 1 || st == 0x1a || st == 0x1d) {
        WfcMove_ResetSession();
        WfcMoveWh_Initialize();
        sWfcMove->unk_a90 = 2;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL WfcMove_StartDownload() {
    Unk_ov001_0222df2c *s = sWfcMove;
    if (s->unk_a90 != 5) {
        return FALSE;
    }
    s->unk_a90 = 6;
    WfcMoveMb_StartDownloadAll();
    return TRUE;
}

extern "C" void WfcMove_Update() {
    switch (sWfcMove->unk_a90) {
    case 1:
        if (sWfcMove->unk_aac == 1) {
            sWfcMove->unk_aac = 0;
            WfcMove_Start();
            return;
        }
        if (sWfcMove->unk_aac != 2) return;
        sWfcMove->unk_aac = 0;
        sWfcMove->unk_a90 = 0x22;
        return;
    case 2:
        WfcMove_StepMeasureChannel();
        return;
    case 3:
        WfcMove_StepInitMb();
        sWfcMove->unk_a90 = 4;
        return;
    case 4:
        sWfcMove->unk_a98++;
        WfcMove_StepMb();
        return;
    case 5:
    case 6:
        WfcMove_StepMb();
        return;
    case 7:
        WfcMove_StepStartDataShare();
        return;
    case 8:
    case 9:
    case 10:
        WfcMove_StepDataShare();
        return;
    case 11:
        WfcMove_SetDone();
        return;
    case 16:
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x11;
        return;
    case 17:
        if ((u32)sWfcMove->unk_a9c++ <= 0x1e) return;
        WfcMove_TryEnd();
        return;
    case 18:
        MB_End();
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x16;
        return;
    case 19:
        if ((u32)sWfcMove->unk_a9c++ <= 0x1e) return;
        if (WfcMoveWh_GetSysState() != 1) return;
        WfcMoveWh_End();
        sWfcMove->unk_a90 = 0x14;
        return;
    case 21:
        DWCi_MOV_WH_Finalize();
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x16;
        return;
    case 22:
        if ((u32)sWfcMove->unk_a9c++ <= 0x1e) return;
        if (WfcMoveWh_GetSysState() != 1) return;
        WfcMoveWh_End();
        sWfcMove->unk_a90 = 0x17;
        return;
    case 24:
        DWCi_MOV_WH_Finalize();
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x19;
        return;
    case 25:
        if ((u32)sWfcMove->unk_a9c++ <= 0x1e) return;
        if (WfcMoveWh_GetSysState() != 1) return;
        WfcMoveWh_End();
        sWfcMove->unk_a90 = 0x1a;
        return;
    case 27:
        DWCi_MOV_WH_Finalize();
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x1c;
        return;
    case 28: {
        u32 c = sWfcMove->unk_a9c++;
        if (c <= 0x1e) return;
        if (WfcMoveWh_GetSysState() == 1) {
            WfcMoveWh_End();
            sWfcMove->unk_a90 = 0x1d;
            return;
        }
        u32 t = sWfcMove->unk_a9c;
        if (t % 30 != 1) return;
        if (t <= 0x37) return;
        DWCi_MOV_WH_Finalize();
        return;
    }
    case 32:
        DWCi_MOV_WH_Finalize();
        sWfcMove->unk_a9c = 0;
        sWfcMove->unk_a90 = 0x21;
        return;
    case 33:
        if ((u32)sWfcMove->unk_a9c++ <= 0x1e) return;
        if (WfcMoveWh_GetSysState() != 1) return;
        WfcMoveWh_End();
        sWfcMove->unk_a90 = 0x22;
        return;
    case 30:
        DWCi_MOV_WH_Finalize();
        break;
    case 34:
        break;
    }
}

extern "C" void WfcMove_GetState(u8 *a, u8 *b) {
    *a = sWfcMove->unk_a90;
    if (sWfcMove->unk_a90 != sWfcMove->unk_a91) *b = 1;
    else *b = 0;
    sWfcMove->unk_a91 = sWfcMove->unk_a90;
}

extern "C" s32 WfcMove_GetChildUser() {
    return MB_CommGetChildUser(1);
}

extern "C" void WfcMove_StepMeasureChannel() {
    switch (WfcMoveWh_GetSysState()) {
    case 1:
        WfcMoveWh_StartMeasureChannel();
        return;
    case 7:
        sWfcMove->unk_64a = WfcMoveWh_DecideChannel();
        sWfcMove->unk_a98 = 0;
        sWfcMove->unk_a90 = 3;
        return;
    case 0:
        sWfcMove->unk_a98 = 0;
        sWfcMove->unk_a90 = 3;
        return;
    case 9:
        WfcMoveWh_Reset();
        return;
    default:
        Fatal_Trap();
    case 3:
        return;
    }
}

extern "C" void WfcMove_StepInitMb() {
    WfcMoveMb_Init((void *)sWfcMove->unk_ac8, sWfcMove->unk_648);
}

extern "C" void WfcMove_StepMb() {
    switch (WfcMoveMb_GetState()) {
    case 1:
        WfcMoveMb_StartParent((u8 *)sWfcMove + 0xab4, sWfcMove->unk_64a);
        return;
    case 2:
        if (WfcMoveMb_GetChildMask(2) != 0) { sWfcMove->unk_a90 = 5; return; }
        if (WfcMoveMb_GetChildMask(3) != 0 || WfcMoveMb_GetChildMask(4) != 0) { sWfcMove->unk_a90 = 6; return; }
        if (sWfcMove->unk_a90 != 5) return;
        if (WfcMoveMb_GetChildMask(2) == 0) sWfcMove->unk_a90 = 0xd;
        return;
    case 3:
        if (WfcMoveMb_IsAllBootable() != 0) { WfcMoveMb_StartRebootAll(); return; }
        if ((u8)(sWfcMove->unk_a90 + 0xfa) > 1) return;
        if (WfcMoveMb_GetChildMask(3) == 0) sWfcMove->unk_a90 = 0x12;
        return;
    case 5:
        sWfcMove->unk_a90 = 7;
        return;
    case 7:
        WfcMoveMb_Cancel();
        sWfcMove->unk_a90 = 1;
        return;
    case 0:
        switch (WfcMoveWh_GetSysState()) {
        case 1: WfcMoveWh_End(); return;
        case 0: sWfcMove->unk_a90 = 0x1f; return;
        case 3: return;
        default: sWfcMove->unk_a90 = 0x1f; return;
        }
    }
}

extern "C" void WfcMove_StepStartDataShare() {
    WfcMove_ClearBuffers();
    WfcMoveWh_SetJudgeCallback((void *)WfcMove_JudgeChild);
    sWfcMove->unk_a90 = 8;
}

extern "C" void WfcMove_StepDataShare() {
    switch (WfcMoveWh_GetSysState()) {
    case 1:
        WfcMoveWh_ParentConnect(4, sWfcMove->unk_648 + 1, sWfcMove->unk_64a);
        return;
    case 4:
    case 5:
    case 6: {
        s32 v = sWfcMove->unk_200;
        WfcMove_SendBlock(0, v, sWfcMove->unk_aa4 + (v % 16) * 0x40);
        WfcMove_ProcessRecv();
        if (sWfcMove->unk_a90 == 0x1b) return;
        if (sWfcMove->unk_204 > 0x1e0) {
            sWfcMove->unk_a90 = 0x1b;
            return;
        }
        if (WfcMove_GetChildReply() == 0x10 || WfcMove_GetChildReply() == 0x20) {
            WfcMove_GetChildReply();
            sWfcMove->unk_a90 = 10;
            return;
        }
        if (WfcMove_GetChildReply() == 0x40) { sWfcMove->unk_a90 = 11; return; }
        if (WfcMove_GetChildReply() == 0xff) { sWfcMove->unk_a90 = 0x1b; return; }
        if (WfcMove_GetChildReply() == 0x50) { sWfcMove->unk_a90 = 0x15; return; }
        if (WfcMove_GetChildReply() == 0x60) { sWfcMove->unk_a90 = 0x18; return; }
        if (WfcMove_GetChildReply() == 0x70) { sWfcMove->unk_a90 = 0x1b; return; }
        if (WfcMove_GetChildReply() == 0) { sWfcMove->unk_a90 = 8; return; }
        if (WfcMove_GetChildReply() == 0xbd) sWfcMove->unk_a90 = 9;
        else sWfcMove->unk_a90 = 0x1f;
        break;
    }
    }
}

extern "C" void WfcMove_SetDone() {
    sWfcMove->unk_a90 = 12;
}

extern "C" s32 WfcMove_TryEnd() {
    if (WfcMoveWh_GetSysState() != 1) return 0;
    WfcMoveWh_End();
    sWfcMove->unk_a90 = 1;
    return 1;
}

extern "C" s32 WfcMove_JudgeChild(s32 a) {
    s32 r = WfcMoveMb_FindAidByMac(a + 10);
    if (r == 0) return 0;
    sWfcMove->unk_aa0[r - 1] = WfcMoveMb_GetChildInfo();
    return 1;
}

extern "C" void WfcMove_ClearBuffers() {
    MI_CpuFill8((u8 *)sWfcMove + 0x100, 0, 0x100);
    MI_CpuFill8(sWfcMove, 0, 0x100);
    sWfcMove->unk_ab0 = sWfcMove;
}

extern "C" void WfcMove_SendBlock(u32 a, u32 b, void *src) {
    Unk_ov001_0222df2c *h = H;
    u16 i;
    if (h->unk_a93 == 1) {
        *(u16 *)h->unk_ab0 = a;
        *((u16 *)H->unk_ab0 + 1) = b;
        MI_CpuCopy8(src, (u8 *)H->unk_ab0 + 4, 0x40);
    } else {
        h->unk_204 = h->unk_204 + 1;
        *(u16 *)H->unk_ab0 = 0xbc;
        *((u8 *)H->unk_ab0 + 4) = H->unk_a92;
    }
    if (WfcMoveWh_GetSysState() != 5) {
        return;
    }
    if (DWCi_MOV_WH_StepDataSharing(H) == 0) {
        H->unk_204 = H->unk_204 + 4;
        return;
    }
    h = H;
    if (h->unk_a93 == 0) {
        h->unk_204 = h->unk_204 + 1;
    } else {
        h->unk_204 = 0;
        if (WfcMoveWh_GetConnectedBitmap() != 3) {
            H->unk_a90 = 0x1b;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        void *s = WfcMoveWh_GetSharedData(i);
        if (s != 0) {
            MI_CpuCopy8(s, &H->unk_100[i], 0x44);
            H->unk_208[i] = 1;
        } else {
            H->unk_208[i] = 0;
        }
    }
}

extern "C" void WfcMove_ProcessRecv() {
    s32 i;
    for (i = 0; i < 16; i++) {
        Unk_ov001_0222df2c *h = H;
        if (h->unk_208[i] != 0) {
            Unk_ov001_0222df2c_Rec *r = &h->unk_100[(u32)i];
            if (i == 1) {
                if (h->unk_a93 == 1) {
                    if (r->unk_00 != 0x10) {
                        return;
                    }
                    h->unk_a94 = h->unk_a94 + 1;
                    h = H;
                    if ((h->unk_a94 & 1) == 0) {
                        h->unk_200 = h->unk_200 + 1;
                        h = H;
                        if (h->unk_200 >= 0x24) {
                            h->unk_200 = 0;
                        }
                    }
                } else {
                    h->unk_202 = 0xbc;
                    if (r->unk_00 == 0xbd) {
                        H->unk_a93 = 1;
                        H->unk_200 = 0;
                        H->unk_a94 = 0;
                    }
                }
            }
        }
    }
}

extern "C" s32 WfcMove_GetChildReply() {
    return *(u16 *)((u8 *)H + 0x144);
}


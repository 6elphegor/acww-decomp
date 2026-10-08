// mwcc-flags: -O4,p
#include "types.h"
#include "net/WfcTransfer.h"
#include "proto/main/unk_0206d49c.h"
#include "proto/ov001/unk_ov001_0220c594.h"
#include "proto/ov001/unk_ov001_0220cbd0.h"
#include "proto/ov001/unk_ov001_0220cd24.h"
#include "proto/ov001/unk_ov001_0220d1d8.h"
#include "proto/ov001/unk_ov001_02222e84.h"
#include "proto/ov001/unk_ov001_02225924.h"
#include "proto/ov001/unk_ov001_02226f68.h"

struct WfcTransferWork {
    // the transfer's work (WfcMoveWork, unk_ov001_02222e84.cpp: its multiboot and wireless work follow it; on
    // x86-64 they end at 0x1da84, inside this area)
    u8 moveWork[0x1e280];
    u8 childUser[0x18];
    WfcTransferCallback callback;
    void *task;
    u8 hasPendingEvent;
    u8 isCancelled;
};

// WfcMove_Init's parameters (u32 slots: rom file path, game name, introduction, icon character and palette paths,
// ggid, language code in the low byte of the last)
struct WfcMoveParams {
    u32 v[7];
};

//DEFS
extern "C" char data_ov001_0222aa60[0x14] = "dwc:/move/child.srl";
extern "C" char data_ov001_0222aa8c[0x18] = "dwc:/move/banner.char";
extern "C" char data_ov001_0222aa74[0x18] = "dwc:/move/banner.plt";
extern "C" WfcMoveParams data_ov001_0222aaa4 = {{(u32)data_ov001_0222aa60, 0, 0, (u32)data_ov001_0222aa8c, (u32)data_ov001_0222aa74, 0x159, 0}};
WfcTransferWork *sWfcTransfer;
//ENDDEFS

extern "C" {

void MIi_CpuCopy16(const void *src, void *dst, u32 size);

#pragma thumb off

void WfcTransfer_Start(WfcTransferCallback a) {
    sWfcTransfer = (WfcTransferWork *)WfcHeap_Alloc(sizeof(WfcTransferWork), 0x20);
    sWfcTransfer->callback = a;
    sWfcTransfer->hasPendingEvent = 0;
    sWfcTransfer->isCancelled = 0;
    WfcMoveParams s = data_ov001_0222aaa4;
    s.v[1] = (u32)WfcMsg_GetString((WfcMsgBank *)gWfcMsgBank, 0xf);
    s.v[2] = (u32)WfcMsg_GetString((WfcMsgBank *)gWfcMsgBank, 0x10);
    *(u8 *)&s.v[6] = WfcUtil_GetLanguage() + 0x31;
    WfcMove_Init((WfcMoveWork *)sWfcTransfer->moveWork, s.v);
    if (WfcMove_Start() == 0) Fatal_Trap();
    sWfcTransfer->task = WfcTask_Add(0, (void *)WfcTransfer_Task, 0, 0x78);
}

void WfcTransfer_RequestEnd() {
    WfcTask_Add(0, (void *)WfcTransfer_EndTask, 0, 0x78);
}

void WfcTransfer_EndTask(void *task) {
    if (WfcMove_RequestCancel() != 0) {
        sWfcTransfer->isCancelled = 1;
        WfcTask_RequestDelete(0, task);
    }
}

BOOL WfcTransfer_IsFinished() {
    return sWfcTransfer == 0;
}

void WfcTransfer_SetCallback(WfcTransferCallback f) {
    sWfcTransfer->callback = f;
}

void WfcTransfer_StartSend() {
    WfcMove_StartDownload();
}

u8 *WfcTransfer_GetChildUser() {
    return sWfcTransfer->childUser;
}

// NONMATCHING: the switch dispatch of this function cannot be reproduced from C with any available mwcc build
// (see docs/assembly.md). The assembly below is the original code; the C version under
// NONMATCHING is the closest known attempt (2 bytes differ: the jump-table guard comes out as
// `cmp r0, #20` / `addls` instead of the original lower-bound-only `cmp r0, #0` / `addge`).
void WfcTransfer_Task(void *task) {
    u8 t[2];
    s32 x;
    WfcMove_Update();
    if (sWfcTransfer->hasPendingEvent != 0 && sWfcTransfer->isCancelled == 0) {
        WfcTransferCallback f = sWfcTransfer->callback;
        if (f != 0) f(0);
        return;
    }
    WfcMove_GetState(&t[0], &t[1]);
    x = t[0];
    if (x > 26) goto high;
    if (x >= 26) goto b26;
    if (x > 20) goto middle;
    switch (x) {
    case 0: goto end;
    case 1: goto end;
    case 2: goto end;
    case 3: goto end;
    case 4: goto end;
    case 5: goto b5;
    case 6: goto end;
    case 7: goto end;
    case 8: goto end;
    case 9: goto end;
    case 10: goto end;
    case 11: goto end;
    case 12: goto b12;
    case 13: goto b13;
    case 14: goto end;
    case 15: goto end;
    case 16: goto end;
    case 17: goto end;
    case 18: goto end;
    case 19: goto end;
    case 20: goto b20;
    default: goto end;
    }
middle:
    switch (x) { case 23: goto b20; }
    goto end;
high:
    if (x > 29) goto high34;
    switch (x) { case 29: goto b26; }
    goto end;
high34:
    switch (x) { case 34: goto b34; }
    goto end;
b5:
        if (t[1] != 0) {
            u8 *d = sWfcTransfer->childUser;
            u8 *q = WfcMove_GetChildUser();
            MIi_CpuCopy16(q, d, 0x16);
            WfcTransferCallback f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(0);
        }
    goto end;
b13:
        if (t[1] != 0) {
            WfcTransferCallback f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(1);
        }
    goto end;
b20:
        if (t[1] != 0) {
            WfcTransferCallback f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(3);
        }
    goto end;
b26:
        if (t[1] != 0) {
            WfcTransferCallback f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(4);
        }
    goto end;
b12:
        if (t[1] != 0) {
            WfcTransferCallback f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(2);
        }
    goto end;
b34:
        WfcTask_RequestDelete(0, task);
        WfcHeap_FreeAndClear((void **)&sWfcTransfer);
    goto end;
end:;
}
}

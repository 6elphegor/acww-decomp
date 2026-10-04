// mwcc-flags: -O4,p
#include "types.h"

typedef void (*Unk_ov001_0220cd24_Fn)(u32);

struct WfcTransferWork {
    u8 unk_00000[0x1e280];
    u8 childUser[0x18];
    Unk_ov001_0220cd24_Fn callback;
    void *task;
    u8 hasPendingEvent;
    u8 isCancelled;
};

struct Unk_ov001_0220d0e4_Init {
    s32 v[7];
};

//DEFS
extern "C" char data_ov001_0222aa60[0x14] = "dwc:/move/child.srl";
extern "C" char data_ov001_0222aa8c[0x18] = "dwc:/move/banner.char";
extern "C" char data_ov001_0222aa74[0x18] = "dwc:/move/banner.plt";
extern "C" Unk_ov001_0220d0e4_Init data_ov001_0222aaa4 = {{(s32)data_ov001_0222aa60, 0, 0, (s32)data_ov001_0222aa8c, (s32)data_ov001_0222aa74, 0x159, 0}};
extern "C" WfcTransferWork *sWfcTransfer;
WfcTransferWork *sWfcTransfer;
//ENDDEFS

extern "C" {
extern void *gWfcMsgBank;

extern void Fatal_Trap();
extern void MIi_CpuCopy16(void *, void *, u32);

extern u32 WfcUtil_GetLanguage();
extern void *WfcMsg_GetString(void *, s32);
extern s32 WfcMove_RequestCancel();
extern void WfcMove_Init(void *, void *);
extern s32 WfcMove_Start();
extern void WfcMove_Update(void *);
extern void WfcMove_GetState(u8 *, u8 *);
extern void *WfcMove_GetChildUser();
extern void WfcMove_StartDownload();
extern void WfcHeap_FreeAndClear(void *);
extern void *WfcHeap_Alloc(s32, s32);
extern void WfcTask_RequestDelete(s32, s32);
extern void *WfcTask_Add(s32, void *, s32, s32);

void WfcTransfer_Task(s32 a);
void WfcTransfer_EndTask(s32 a);

#pragma thumb off

void WfcTransfer_Start(Unk_ov001_0220cd24_Fn a) {
    sWfcTransfer = (WfcTransferWork *)WfcHeap_Alloc(0x1e2a4, 0x20);
    sWfcTransfer->callback = a;
    sWfcTransfer->hasPendingEvent = 0;
    sWfcTransfer->isCancelled = 0;
    Unk_ov001_0220d0e4_Init s = data_ov001_0222aaa4;
    s.v[1] = (s32)WfcMsg_GetString(gWfcMsgBank, 0xf);
    s.v[2] = (s32)WfcMsg_GetString(gWfcMsgBank, 0x10);
    *(u8 *)&s.v[6] = WfcUtil_GetLanguage() + 0x31;
    WfcMove_Init(sWfcTransfer, &s);
    if (WfcMove_Start() == 0) Fatal_Trap();
    sWfcTransfer->task = WfcTask_Add(0, (void *)WfcTransfer_Task, 0, 0x78);
}

void WfcTransfer_RequestEnd() {
    WfcTask_Add(0, (void *)WfcTransfer_EndTask, 0, 0x78);
}

void WfcTransfer_EndTask(s32 a) {
    if (WfcMove_RequestCancel() != 0) {
        sWfcTransfer->isCancelled = 1;
        WfcTask_RequestDelete(0, a);
    }
}

BOOL WfcTransfer_IsFinished() {
    return sWfcTransfer == 0;
}

void WfcTransfer_SetCallback(Unk_ov001_0220cd24_Fn f) {
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
#ifdef NONMATCHING
void WfcTransfer_Task(s32 a) {
    u8 t[2];
    s32 x;
    WfcMove_Update((void *)a);
    if (sWfcTransfer->hasPendingEvent != 0 && sWfcTransfer->isCancelled == 0) {
        Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
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
            void *q = WfcMove_GetChildUser();
            MIi_CpuCopy16(q, d, 0x16);
            Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(0);
        }
    goto end;
b13:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(1);
        }
    goto end;
b20:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(3);
        }
    goto end;
b26:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(4);
        }
    goto end;
b12:
        if (t[1] != 0) {
            Unk_ov001_0220cd24_Fn f = sWfcTransfer->callback;
            if (f == 0) sWfcTransfer->hasPendingEvent = 1;
            else f(2);
        }
    goto end;
b34:
        WfcTask_RequestDelete(0, a);
        WfcHeap_FreeAndClear(&sWfcTransfer);
    goto end;
end:;
}
#else
asm void WfcTransfer_Task(s32 a) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #8
    mov r4, r0
    bl WfcMove_Update
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldrb r1, [r0, #0x2a0]
    cmp r1, #0
    beq dispatch
    ldrb r1, [r0, #0x2a1]
    cmp r1, #0
    bne dispatch
    ldr r1, [r0, #0x298]
    cmp r1, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #0
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
dispatch:
    add r0, sp, #0
    add r1, sp, #1
    bl WfcMove_GetState
    ldrb r0, [sp]
    cmp r0, #26
    bgt high
    cmp r0, #26
    bge b26
    cmp r0, #20
    bgt middle
    cmp r0, #0
    addge pc, pc, r0, lsl #2
    b end
    b end
    b end
    b end
    b end
    b end
    b b5
    b end
    b end
    b end
    b end
    b end
    b end
    b b12
    b b13
    b end
    b end
    b end
    b end
    b end
    b end
    b b20
middle:
    cmp r0, #23
    beq b20
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
high:
    cmp r0, #29
    bgt high34
    cmp r0, #29
    beq b26
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
high34:
    cmp r0, #34
    beq b34
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b5:
    ldrb r0, [sp, #1]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r1, =sWfcTransfer
    ldr r0, =0x1e280
    ldr r1, [r1]
    add r4, r1, r0
    bl WfcMove_GetChildUser
    mov r1, r4
    mov r2, #22
    bl MIi_CpuCopy16
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x2a0]
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #0
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b13:
    ldrb r0, [sp, #1]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x2a0]
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #1
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b20:
    ldrb r0, [sp, #1]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x2a0]
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #3
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b26:
    ldrb r0, [sp, #1]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x2a0]
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #4
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b12:
    ldrb r0, [sp, #1]
    cmp r0, #0
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =sWfcTransfer
    ldr r0, [r0]
    add r0, r0, #0x1e000
    ldr r1, [r0, #0x298]
    cmp r1, #0
    moveq r1, #1
    streqb r1, [r0, #0x2a0]
    addeq sp, sp, #8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, #2
    blx r1
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
b34:
    mov r1, r4
    mov r0, #0
    bl WfcTask_RequestDelete
    ldr r0, =sWfcTransfer
    bl WfcHeap_FreeAndClear
end:
    add sp, sp, #8
    ldmfd sp!, {r4, lr}
    bx lr
}
#endif
}

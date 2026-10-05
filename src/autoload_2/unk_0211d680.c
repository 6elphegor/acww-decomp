// mwcc-flags: -nothumb -O4,p
#include "nitro/os_rtc.h"
// NitroSDK CARD (card_common.c), autoload_2 0x0211d680-0x0211da74, with its bss (autoload_3 0x021febb4-0x021ff220).
// Split from unk_0211d20c.c (rtc.c) by the files' bss. ARM code, mwcc 1.2/base -O4,p.
// Functions are in reverse address order (mwcc emits in reverse source order).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef long long s64;
typedef int BOOL;

typedef struct { u32 head, tail; } OSQ;
typedef struct { u32 w[0x30]; } OST;

typedef struct {
    u32 lock;
    u32 f4, f8, fc, f10;
    u32 command;
    u32 f18;
    u32 f1c;
    u32 result;
} RTCWork;

typedef struct {
    u32 result;
    u32 command;
    u32 f8;
    u32 srcBuf;
    u32 dstBuf;
    u32 len;
    u32 f18;
    u32 f1c, f20, f24, f28, f2c, f30, f34, f38, f3c;
} CARDCmd;

typedef struct CARDCommon {
    CARDCmd *cmd;
    u32 f4;
    volatile u32 lockOwner;
    volatile u32 lockCount;
    OSQ queue;
    u32 lockType;
    u32 src;
    u32 dst;
    u32 len;
    u32 op;
    u32 f2c, f30, f34;
    void (*callback)(void *);
    void *cbArg;
    void (*task)(struct CARDCommon *);
    OST thread;
    OST *curThread;
    u32 priority;
    OSQ tq;
    volatile u32 flag;
    u32 f118, f11c;
    u8 buf[0x100];
} CARDCommon;

typedef struct {
    void (*fn)(void *);
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10, f14, f18, f1c;
    u32 buf[512];
} RomDev;

extern RTCWork data_021feb90;
extern u16 data_021feb8c;
extern CARDCommon data_021fec00;
extern u32 data_021febb4;
extern u8 data_021febc0[0x40];
extern u32 data_021ff220;
extern RomDev data_021ff240;
extern u32 data_021fcc2c[];
extern u32 data_0213c1cc[12];

u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void OSi_ReferSymbol(void *);
void Fatal_Trap(void);
void OS_UnlockCard(u32);
void OS_LockCard(u32);
void OS_SetThreadPriority(void *, u32);
void OS_WakeupThreadDirect(void *);
void OS_WakeupThread(void *);
void OS_SleepThread(void *);
void OS_CreateThread(void *, void (*)(void *), void *, void *, u32, u32);
void DC_InvalidateRange(void *, u32);
void DC_FlushRange(void *, u32);
void DC_WaitWriteBufferEmpty(void);
void MI_StopDma(u32);
void MIi_CpuClearFast(u32, void *, u32);
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(const void *, void *, u32);
void PXI_Init(void);
BOOL PXI_IsCallbackReady(u32, u32);
s32 PXI_SendWordByFifo(u32, u32, u32);
void PXI_SetFifoRecvCallback(u32, void *);
void RtcWaitBusy(void);
void RtcGetResultCallback(void);
void RtcCommonCallback(void);
void CARDi_TaskThread(void *);
void CARDi_OnFifoRecv(void);
BOOL CARDi_Request(void *, u32, u32);
void CARD_InitPulledOutCallback(void);
void CARDi_SetRomOp(u32, u32);
BOOL CARDi_ReadFromCache(void *);
BOOL CARDi_TryReadCardDma(void *);

u32 RTC_GetDateTimeAsync(u32, u32, void (*)(void), u32);
u32 RTC_GetTimeAsync(u32, void (*)(void), u32);
u32 RTC_GetDateAsync(u32, void (*)(void), u32);
BOOL RtcSendPxiCommand(u32);
BOOL RTCi_ReadRawDateAsync(void);
BOOL RTCi_ReadRawTimeAsync(void);
BOOL RTCi_ReadRawDateTimeAsync(void);
s32 RTCi_ConvertTimeToSecond(RTCTime *);
s32 RTC_ConvertDateToDay(RTCDate *);
void CARD_Enable(u32);
void CARD_CheckEnabled(void);
u32 CARD_IsEnabled(void);
void CARDi_InitCommon(void);
void CARDi_UnlockResource(u32, u32);
void CARDi_LockResource(u32, u32);
void CARDi_SetTask(void (*)(CARDCommon *));
void CARDi_IdentifyBackupCore(s32);
void CARDi_RequestStreamCommandCore(CARDCommon *);
void *CARDi_GetRomAccessor(void);
BOOL CARD_WaitRomAsync(void);
void CARDi_ReadRomSyncCore(CARDCommon *);
void CARDi_ReadCard(void *);
BOOL CARDi_TryWaitAsync(void);
BOOL CARDi_WaitAsync(void);

#define REG_MCCNT1 (*(volatile u32 *)0x040001a4)
#define REG_MCD1 (*(volatile u32 *)0x04100010)
// CARDi_SetTask
void CARDi_SetTask(void (*task)(CARDCommon *)) {
    CARDCommon *const c = &data_021fec00;
    OS_SetThreadPriority(&c->thread, c->priority);
    c->curThread = &c->thread;
    c->task = task;
    c->flag |= 8;
    OS_WakeupThreadDirect(&c->thread);
}

// CARDi_LockResource (lock id, target)
void CARDi_LockResource(u32 id, u32 type) {
    CARDCommon *const c = &data_021fec00;
    u32 irq = OS_DisableInterrupts();
    if (c->lockOwner == id) {
        if (c->lockType != type) Fatal_Trap();
    } else {
        while (c->lockOwner != (u32)-3) OS_SleepThread(&c->queue);
        c->lockOwner = id;
        c->lockType = type;
    }
    c->lockCount++;
    c->cmd->result = 0;
    OS_RestoreInterrupts(irq);
}

// CARDi_UnlockResource (lock id, target)
void CARDi_UnlockResource(u32 id, u32 type) {
    CARDCommon *c = &data_021fec00;
    u32 irq = OS_DisableInterrupts();
    if (c->lockOwner != id || c->lockCount == 0) {
        Fatal_Trap();
    } else {
        if (c->lockType != type) Fatal_Trap();
        c->lockCount--;
        if (c->lockCount == 0) {
            c->lockOwner = (u32)-3;
            c->lockType = 0;
            OS_WakeupThread(&c->queue);
        }
    }
    c->cmd->result = 0;
    OS_RestoreInterrupts(irq);
}

// CARDi_InitCommon
void CARDi_InitCommon(void) {
    CARDCommon *const c = &data_021fec00;
    volatile u32 zero; // MI_CpuClear32 inline: vu32 data = 0
    data_021fec00.lockOwner = (u32)-3;
    data_021fec00.lockCount = 0;
    zero = 0;
    data_021fec00.lockType = 0;
    data_021fec00.cmd = (CARDCmd *)data_021febc0;
    MIi_CpuClearFast(zero, data_021febc0, 64);
    DC_FlushRange(data_021febc0, 64);
    if (*(u16 *)0x027ffc40 != 2) MI_CpuCopy8((void *)0x027ffe00, (void *)0x027ffa80, 0x160);
    c->queue.head = c->queue.tail = 0;
    c->tq.head = c->tq.tail = 0;
    c->priority = 4;
    OS_CreateThread(&c->thread, CARDi_TaskThread, 0, &data_021ff220, 0x400, c->priority);
    OS_WakeupThreadDirect(&c->thread);
    PXI_SetFifoRecvCallback(11, CARDi_OnFifoRecv);
    if (*(u16 *)0x027ffc40 != 2) CARD_Enable(1);
}

// CARD_IsEnabled
u32 CARD_IsEnabled(void) {
    return data_021febb4;
}

// CARD_CheckEnabled
void CARD_CheckEnabled(void) {
    if (CARD_IsEnabled()) return;
    Fatal_Trap();
}

// CARD_Enable
void CARD_Enable(u32 v) {
    data_021febb4 = v;
}

// CARDi_WaitAsync
BOOL CARDi_WaitAsync(void) {
    CARDCommon *const c = &data_021fec00;
    u32 irq = OS_DisableInterrupts();
    while (c->flag & 4) OS_SleepThread(&c->tq);
    OS_RestoreInterrupts(irq);
    return c->cmd->result == 0;
}

// CARD_TryWaitBackupAsync~ (card idle test)
BOOL CARDi_TryWaitAsync(void) {
    return !(data_021fec00.flag & 4);
}

// CARD_IsAvailable
BOOL CARD_IsAvailable(void) {
    return data_021fec00.flag != 0;
}

// CARD_GetResultCode
u32 CARD_GetResultCode(void) {
    return data_021fec00.cmd->result;
}

// CARD_GetThreadPriority
u32 CARD_GetThreadPriority(void) {
    return data_021fec00.priority;
}

// CARD_LockRom
void CARD_LockRom(u32 id) {
    CARDi_LockResource(id, 1);
    OS_LockCard(id);
}

// CARD_UnlockRom
void CARD_UnlockRom(u32 id) {
    OS_UnlockCard(id);
    CARDi_UnlockResource(id, 1);
}

// CARD_LockBackup
void CARD_LockBackup(u32 id) {
    CARDi_LockResource(id, 2);
}

// CARD_UnlockBackup
void CARD_UnlockBackup(u32 id) {
    CARDi_UnlockResource(id, 2);
}

// ---- file-scope objects (autoload_3 .bss 0x021febb4-0x021ff220; the CARD thread's stack ends at data_021ff220, the
// name CARDi_InitCommon uses. This definition order gives the original order after mwcc's size sort.)
u32 data_021febb4;
u8 data_021febc0[0x40] __attribute__((aligned(32)));
CARDCommon data_021fec00 __attribute__((aligned(32)));
u32 data_021fee20[0x100]; // the CARD thread's stack

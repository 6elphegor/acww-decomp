#include "sys/CardCommon.h"
#include "nitro/wm.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK CARD (card_rom.c, end: DMA / cache / task thread), autoload_2 0x0211e558-0x0211ea4c. The former unit
// 0x0211e558-0x0211eeec is split into its files by their bss. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)
#define va_arg(ap, t) (*(t *)((ap += 4) - 4))
#define va_end(ap)

typedef struct CardCommon CardCommon;

typedef struct {
    u16 state;
    u8 _02[0x44];
    u16 f46;
    u8 _48[0x70];
    u16 fb8;
    u8 _ba[0x17e - 0xba];
    u16 f17e;
} WMStatus;

typedef struct {
    void *w0;
    WMStatus *status;
    u32 f8;
    u8 *f0c;
    u8 *f10;
    u16 dmaNo;
    u16 f16;
    void (*cb18[42])(WMMsg *);
    void (*cbC0)(WMMsg *);
    void (*reqCb[16])(WMMsg *);
    u32 reqArg[16];
} WMArm9Buf;

extern CardCommon data_021fec00;
extern u32 data_021ff240[];
extern int (*data_021ff464)(void);
extern u32 data_021ff460;
extern WMArm9Buf *data_021ff46c;
extern u16 data_021ff468;
extern u8 data_021ff470[];
extern u8 data_021ff490[];
extern WMMsg data_021ff4b8;
extern u8 data_021ff4cc[];
extern u8 data_021ff4dc[];
extern u8 data_021ff500[];
extern u32 data_0213c1fc;

extern void func_01ff8000(void);
extern u32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(u32);
extern void OS_SetIrqFunction(u32, void (*)(void));
extern void OS_ResetRequestIrqMask(u32);
extern void OS_EnableIrqMask(u32);
extern void OS_DisableIrqMask(u32);
extern void OS_SpinWait(u32);
extern void DC_InvalidateRange(void *, u32);
extern void DC_StoreRange(void *, u32);
extern void DC_FlushRange(void *, u32);
extern void IC_InvalidateRange(void *, u32);
extern void DC_WaitWriteBufferEmpty(void);
extern u32 OS_GetDTCMAddress(void);
extern void MI_StopDma(u32);
extern void MIi_CardDmaCopy32(u32, u32, u32, u32);
extern void MI_CpuCopy8(void *, void *, u32);
extern void OS_WakeupThread(void *);
extern void OS_WakeupThreadDirect(void *);
extern void OS_SleepThread(u32);
extern int PXI_IsCallbackReady(u32, u32);
extern int PXI_SendWordByFifo(u32, u32, u32);
extern void PXI_Init(void);
extern void PXI_SetFifoRecvCallback(u32, void *);
extern void WaitByLoop(u32);
extern void Fatal_Trap(void);
extern void PM_ForceToPowerOff(void);
extern int OS_ReceiveMessage(void *, void *, u32);
extern void OS_JamMessage(void *, void *, u32);
extern void OS_SendMessage(void *, void *, u32);
extern void OS_InitMessageQueue(void *, void *, u32);
extern void MI_DmaCopy32(u32, void *, void *, u32);
extern void MI_DmaFill32(u32, void *, u32, u32);
extern void MIi_CpuCopy16(void *, void *, u32);
extern void MIi_CpuClear16(u32, void *, u32);
extern void OS_GetMacAddress(u8 *);
extern void RTC_Init(void);
extern int RTC_GetTime(u32 *);
extern void func_0211fb0c(u16, u32, u32);

BOOL func_0211f7e4(void);
u32 WM_GetLinkLevel(void);
u32 WM_GetDispersionBeaconPeriod(void);
u32 WM_GetDispersionScanPeriod(void);
WMOtherElements WM_GetOtherElements(WMBssDesc *b);
u32 WM_GetNextTgid(void);
u32 WM_Init(void *buf, u16 dmaNo);
u32 func_0211f1fc(void *buf, u16 dmaNo, u32 size);
u32 func_0211f188(void);
void WMi_SetCallbackTable(u32 idx, void (*cb)(WMMsg *));
u32 func_0211f01c(u32 id, u16 paramNum, ...);
WMArm9Buf *WMi_GetSystemWork(void);
u32 WMi_CheckInitialized(void);
u32 WMi_CheckIdle(void);
u32 WMi_CheckStateEx(int n, ...);
void func_0211eb4c(u32 tag, WMMsg *m, BOOL err);
void WmClearFifoRecvFlag(void);
u32 WMi_GetStatusAddress(void);
void CARD_InitPulledOutCallback(void);
void CARDi_PulledOutCallback(u32 tag, u32 data, BOOL err);
void func_0211ea4c(int (*cb)(void));
void func_0211ea0c(void);
void func_0211e9a8(u32 data, u32 n);
void CARDi_OnFifoRecv(u32 tag, u32 data, BOOL err);
void CARDi_TaskThread(void);
BOOL CARDi_Request(CardCommon *c, u32 arg, int retry);
BOOL CARDi_ReadFromCache(u8 *cache);
void CARDi_SetRomOp(u32 hi, u32 lo);
void CARDi_SetCardDma(void);
void CARDi_OnReadCard(void);
BOOL CARDi_TryReadCardDma(CardCommon *req);void func_0211ea0c(void) {
    if ((*(u16 *)0x027fffa8 & 0x8000) >> 15) PM_ForceToPowerOff();
    func_0211e9a8(1, 1);
    Fatal_Trap();
}

void func_0211e9a8(u32 data, u32 n) {
    if (PXI_SendWordByFifo(14, data, 0) == 0) return;
    do {
        WaitByLoop(n);
    } while (PXI_SendWordByFifo(14, data, 0) != 0);
}

void CARDi_OnFifoRecv(u32 tag, u32 data, BOOL err) {
    if (tag != 11) return;
    if (err == 0) return;
    {
        CardCommon *const c = &data_021fec00;
        c->flag &= ~0x20;
        OS_WakeupThreadDirect(c->waiter);
    }
}

void CARDi_TaskThread(void) {
    CardCommon *const c = &data_021fec00;
    u32 irq;
    for (;;) {
        irq = OS_DisableInterrupts();
        while ((c->flag & 8) == 0) {
            c->waiter = (u8 *)c + 0x44;
            OS_SleepThread(0);
        }
        OS_RestoreInterrupts(irq);
        c->task(c);
    }
}

BOOL CARDi_Request(CardCommon *c, u32 arg, int retry) {
    u32 irq;
    if ((*(volatile u32 *)&c->flag & 2) == 0) {
        c->flag |= 2;
        if (PXI_IsCallbackReady(11, 1) == 0) {
            do {
                OS_SpinWait(100);
            } while (PXI_IsCallbackReady(11, 1) == 0);
        }
        CARDi_Request(c, 0, 1);
    }
    DC_FlushRange(c->result, 64);
    DC_WaitWriteBufferEmpty();
    do {
        c->arg = arg;
        c->flag |= 0x20;
        while (PXI_SendWordByFifo(11, arg, 1) < 0) {}
        if (arg == 0) {
            u32 r = (u32)c->result;
            while (PXI_SendWordByFifo(11, r, 1) < 0) {}
        }
        irq = OS_DisableInterrupts();
        if ((c->flag & 0x20) != 0) {
            do {
                OS_SleepThread(0);
            } while ((c->flag & 0x20) != 0);
        }
        OS_RestoreInterrupts(irq);
    } while (*c->result == 4 && --retry > 0);
    return *c->result == 0;
}

BOOL CARDi_ReadFromCache(u8 *cache) {
    CardCommon *c = &data_021fec00;
    u32 base = c->src & -512;
    if (base == *(u32 *)(cache + 8)) {
        u32 off = c->src - base;
        u32 n = 512 - off;
        if (n > c->len) n = c->len;
        MI_CpuCopy8(cache + 0x20 + off, (void *)c->dst, n);
        c->src += n;
        c->dst += n;
        c->len -= n;
    }
    return c->len != 0;
}

void CARDi_SetRomOp(u32 hi, u32 lo) {
    while (*(volatile u32 *)0x040001a4 & 0x80000000) {}
    *(volatile u8 *)0x040001a1 = 0xc0;
    *(volatile u8 *)0x040001a8 = hi >> 24;
    *(volatile u8 *)0x040001a9 = hi >> 16;
    *(volatile u8 *)0x040001aa = hi >> 8;
    *(volatile u8 *)0x040001ab = hi;
    *(volatile u8 *)0x040001ac = lo >> 24;
    *(volatile u8 *)0x040001ad = lo >> 16;
    *(volatile u8 *)0x040001ae = lo >> 8;
    *(volatile u8 *)0x040001af = lo;
}

void CARDi_SetCardDma(void) {
    CardCommon *const c = &data_021fec00;
    u32 dma = c->dma;
    u32 dst = c->dst;
    MIi_CardDmaCopy32(dma, 0x04100010, dst, 512);
    CARDi_SetRomOp(0xb7000000 | (c->src >> 8), c->src << 24);
    *(volatile u32 *)0x040001a4 = data_021ff240[1];
}

void CARDi_OnReadCard(void) {
    MI_StopDma(data_021fec00.dma);
    data_021fec00.src += 0x200;
    data_021fec00.dst += 0x200;
    data_021fec00.len -= 0x200;
    if (data_021fec00.len == 0) {
        OS_DisableIrqMask(0x80000);
        OS_ResetRequestIrqMask(0x80000);
        {
            CardCommon *const c = &data_021fec00;
            void (*cb)(u32);
            u32 arg;
            u32 irq;
            *c->result = 0;
            cb = c->callback;
            arg = c->callbackArg;
            irq = OS_DisableInterrupts();
            c->flag &= ~0x4c;
            OS_WakeupThread((u8 *)c + 0x10c);
            if ((c->flag & 0x10) != 0) OS_WakeupThreadDirect((u8 *)c + 0x44);
            OS_RestoreInterrupts(irq);
            if (cb != 0) cb(arg);
        }
    } else {
        CARDi_SetCardDma();
    }
}

#include "sys/CardCommon.h"
#include "nitro/wm_status.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK CARD (ROM read) + WM (wireless manager) region, autoload_2 0x0211e3fc-0x0211f800. ARM code, mwcc 1.2/base.
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

extern void CPi_RestoreContext(void);
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
extern void WM_SetPortCallback(u16, u32, u32);

BOOL func_0211f7e4(void);
u32 WM_GetLinkLevel(void);
u32 WM_GetDispersionBeaconPeriod(void);
u32 WM_GetDispersionScanPeriod(void);
WMOtherElements WM_GetOtherElements(WMBssDesc *b);
u32 WM_GetNextTgid(void);
u32 WM_Init(void *buf, u16 dmaNo);
u32 WmInitCore(void *buf, u16 dmaNo, u32 size);
u32 WM_Finish(void);
void WMi_SetCallbackTable(u32 idx, void (*cb)(WMMsg *));
u32 WMi_SendCommand(u32 id, u16 paramNum, ...);
WMArm9Buf *WMi_GetSystemWork(void);
u32 WMi_CheckInitialized(void);
u32 WMi_CheckIdle(void);
u32 WMi_CheckStateEx(int n, ...);
void WmReceiveFifo(u32 tag, WMMsg *m, BOOL err);
void WmClearFifoRecvFlag(void);
u32 WMi_GetStatusAddress(void);
void CARD_InitPulledOutCallback(void);
void CARDi_PulledOutCallback(u32 tag, u32 data, BOOL err);
void CARD_SetPulledOutCallback(int (*cb)(void));
void CARD_TerminateForPulledOut(void);
void CARDi_SendtoPxi(u32 data, u32 n);
void CARDi_OnFifoRecv(u32 tag, u32 data, BOOL err);
void CARDi_TaskThread(void);
BOOL CARDi_Request(CardCommon *c, u32 arg, int retry);
BOOL CARDi_ReadFromCache(u8 *cache);
void CARDi_SetRomOp(u32 hi, u32 lo);
void CARDi_SetCardDma(void);
void CARDi_OnReadCard(void);
BOOL CARDi_TryReadCardDma(CardCommon *req);

// NOT in S013's range (starts at 0x0211e3fc < 0x0211e400); handed to the unit below.

static inline BOOL CARDi_IsInTcm(u32 buf, u32 len) {
const u32 i = 0x01ff8000;
    const u32 d = OS_GetDTCMAddress();
return ((i < buf + len) && (i + 0x8000 > buf)) || ((d < buf + len) && (d + 0x4000 > buf));
}
BOOL CARDi_TryReadCardDma(CardCommon *req) {
    CardCommon *const c = &data_021fec00;
    u32 dst = c->dst;
    u32 len = c->len;
    BOOL use = 0;
    BOOL aligned = 0;
    BOOL ok = 0;
if ((dst & 3) == 0 && c->dma <= 3) { if (!CARDi_IsInTcm(dst, len)) ok = 1; }
    if (ok) {
        if (((c->src | len) & 0x1ff) == 0) aligned = 1;
    }
    if (aligned) {
        if (len != 0) use = 1;
    }
    req->arg = (*(u32 *)0x027ffe60 & ~0x7000000) | 0xa1000000;
    if (use) {
        u32 irq = OS_DisableInterrupts();
        IC_InvalidateRange((void *)dst, len);
        if ((dst & 31) != 0) {
            dst -= dst & 31;
            DC_StoreRange((void *)dst, 32);
            DC_StoreRange((void *)(dst + len), 32);
            len += 32;
        }
        DC_InvalidateRange((void *)dst, len);
        DC_WaitWriteBufferEmpty();
        OS_SetIrqFunction(0x80000, (void (*)(void))CARDi_OnReadCard);
        OS_ResetRequestIrqMask(0x80000);
        OS_EnableIrqMask(0x80000);
        OS_RestoreInterrupts(irq);
        CARDi_SetCardDma();
    }
    return use;
}

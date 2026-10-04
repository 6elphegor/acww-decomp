#include "sys/CardCommon.h"
#include "nitro/wm.h"
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

// Best attempt: differs only in register allocation/one hoisted constant. The original keeps a zero in r2
// (mov r2,#0 before the loop; "moveq r0,r2") and the va pointer in r12; mine folds the 0 into "moveq r0,#0"
// and keeps the va pointer in r2 (40 vs 41 instructions).
u32 WMi_CheckStateEx(int n, ...) {
    u32 result;
    u16 now;
    u32 temp;
    va_list vlist;
    result = WMi_CheckInitialized();
    if (result != 0) return result;
    DC_InvalidateRange(data_021ff46c->status, 2);
    now = data_021ff46c->status->state;
    result = 3;
    va_start(vlist, n);
    for (; n; n--) {
        temp = va_arg(vlist, u32);
        if (temp == now) {
            result = 0;
        }
    }
    va_end(vlist);
    return result;
}

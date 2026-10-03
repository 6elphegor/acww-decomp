// mwcc-flags: -nothumb -O4,p
// NitroSDK region, autoload_2 0x0211f5f4-0x0211f800. ARM code, mwcc 1.2/base.
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
struct CardCommon {
    u32 *result;      // 0x00
    u32 arg;          // 0x04
    u8 _08[0x14];
    u32 src;          // 0x1c
    u32 dst;          // 0x20
    u32 len;          // 0x24
    u32 dma;          // 0x28
    u8 _2c[0xc];
    void (*callback)(u32); // 0x38
    u32 callbackArg;       // 0x3c
    void (*task)(CardCommon *); // 0x40
    u8 thread[0xc0];       // 0x44
    void *waiter;          // 0x104
    u8 _108[4];
    u8 queue[8];           // 0x10c
    u32 flag;              // 0x114
};

typedef struct {
    u16 state;
    u8 _02[0x44];
    u16 f46;
    u8 _48[0x70];
    u16 fb8;
    u8 _ba[0x17e - 0xba];
    u16 f17e;
} WMStatus;

typedef struct WMMsg WMMsg;
struct WMMsg {
    u16 id;     // 0
    u16 f2;
    u16 f4;
    u16 f6;
    union {
        u32 f8;
        u16 f8w;
    };
    u32 fc;
    u16 f10;
    u16 f12;
    u8 _14[6];
    u16 f1a;
    u32 f1c;
    u16 f20;
};

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

typedef struct {
    u8 id;
    u8 length;
    u16 _pad;
    u8 *body;
} WMOtherElement;

typedef struct {
    u8 count;
    WMOtherElement element[16];
} WMOtherElements;

typedef struct {
    u8 _00[0x3c];
    u16 f3c;
    u16 f3e;
} WMBssDesc;

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
extern void func_0206d49c(void);
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
BOOL CARDi_TryReadCardDma(CardCommon *req);

BOOL func_0211f7e4(void) {
    return *(u16 *)0x027ffcf4 != 0;
}

u32 WM_GetLinkLevel(void) {
    WMArm9Buf *w = WMi_GetSystemWork();
    WMStatus *s;
    if (WMi_CheckInitialized() != 0) return 0;
    DC_InvalidateRange(w->status, 2);
    s = w->status;
    switch (s->state) {
    case 9:
        DC_InvalidateRange(&s->f17e, 2);
        s = w->status;
        if (s->f17e == 0) return 0;
    case 10:
    case 11:
        DC_InvalidateRange(&s->fb8, 2);
        return w->status->fb8;
    default:
        return 0;
    }
}

u32 WM_GetDispersionBeaconPeriod(void) {
    u8 mac[6];
    u16 sum;
    int i;
    OS_GetMacAddress(mac);
    sum = i = 0;
    for (; i < 6; i++) sum = sum + mac[i];
    sum = sum + *(u32 *)0x027ffc3c;
    sum = sum * 7;
    return (u16)(sum % 20 + 200);
}

u32 WM_GetDispersionScanPeriod(void) {
    u8 mac[6];
    u16 sum;
    int i;
    OS_GetMacAddress(mac);
    sum = i = 0;
    for (; i < 6; i++) sum = sum + mac[i];
    sum = sum + *(u32 *)0x027ffc3c;
    sum = sum * 13;
    return (u16)(sum % 10 + 30);
}


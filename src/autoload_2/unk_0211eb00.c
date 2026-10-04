#include "sys/CardCommon.h"
#include "nitro/wm.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK WM (status address, ARM7 buffer set-up), autoload_2 0x0211eb00-0x0211eeec, with the WM buffers
// (autoload_3 .bss 0x021ff4cc-0x021fff00). Split from unk_0211e558.c by the files' bss. ARM code, mwcc 1.2/base.
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
extern u8 data_021ff4cc[0x10];
extern u8 data_021ff4dc[0x24];
extern u8 data_021ff500[0xa00];
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
BOOL CARDi_TryReadCardDma(CardCommon *req);void func_0211eb4c(u32 tag, WMMsg *m, BOOL err) {
    if (err != 0) return;
    DC_InvalidateRange(data_021ff46c->f10, 0x100);
    if (data_021ff46c->f16 == 0) DC_InvalidateRange(data_021ff46c->status, 0x800);
    if (m != (WMMsg *)data_021ff46c->f10) DC_InvalidateRange(m, 0x100);
    if (m->id >= 42) {
        if (m->id == 0x80) {
            if (m->errcode == 19) Fatal_Trap();
            if (data_021ff46c->cbC0 != 0) data_021ff46c->cbC0(m);
        } else if (m->id == 0x82) {
            if (data_021ff46c->reqCb[m->f06] != 0) {
                m->arg = (void *)data_021ff46c->reqArg[m->f06];
                DC_InvalidateRange((void *)m->f08, data_021ff46c->status->f46);
                data_021ff46c->reqCb[m->f06](m);
            }
        } else if (m->id == 0x81) {
            m->id = 15;
            if (m->arg != 0) ((void (*)(WMMsg *))m->arg)(m);
        }
    } else {
        void (*cb)(WMMsg *);
        u32 r8;
        u32 r7;
        u32 r6;
        u8 *r5;
        u8 *r4;
        if (m->id == 14 && (u16)(m->f04 + 0xfff5) <= 1 && m->errcode == 0)
            DC_InvalidateRange((void *)m->f08, data_021ff46c->status->f46);
        if (m->id == 2 && m->errcode == 0) {
            cb = data_021ff46c->cb18[m->id];
            func_0211f188();
            if (cb != 0) cb(m);
            return;
        }
        cb = data_021ff46c->cb18[m->id];
        if (cb != 0) {
            cb(m);
            if (data_021ff468 == 0) return;
        }
        if (m->id == 8 || m->id == 12) {
            if (m->id == 8) {
                r5 = (u8 *)m + 10;
                r4 = (u8 *)m + 20;
                r8 = m->f08w;
                r7 = m->f10;
                r6 = 0;
            } else if (m->id == 12) {
                r7 = 0;
                r8 = m->f08w;
                r6 = m->f10;
                r4 = (u8 *)r7;
                r5 = (u8 *)m + 10;
            }
            if (r8 == 7 || r8 == 9) {
                u16 i;
                data_021ff4b8.id = 0x82;
                data_021ff4b8.errcode = 0;
                data_021ff4b8.f04 = r8;
                data_021ff4b8.f08 = 0;
                data_021ff4b8.f0c = 0;
                data_021ff4b8.f10 = 0;
                data_021ff4b8.f12 = r7;
                data_021ff4b8.f20h = r6;
                data_021ff4b8.f1a = 0xffff;
                MI_CpuCopy8(r5, data_021ff4cc, 6);
                if (r4 != 0) {
                    MIi_CpuCopy16(r4, data_021ff4dc, 0x18);
                } else {
                    volatile u16 z = 0;
                    MIi_CpuClear16(z, data_021ff4dc, 0x18);
                }
                for (i = 0; i < 16; i++) {
                    data_021ff4b8.f06 = i;
                    if (data_021ff46c->reqCb[i] != 0) {
                        data_021ff4b8.arg = (void *)data_021ff46c->reqArg[i];
                        data_021ff46c->reqCb[i](&data_021ff4b8);
                    }
                }
            }
        }
    }
    DC_InvalidateRange(data_021ff46c->f10, 0x100);
    WmClearFifoRecvFlag();
    if (m != (WMMsg *)data_021ff46c->f10) {
        m->id |= 0x8000;
        DC_StoreRange(m, 0x100);
    }
}

void WmClearFifoRecvFlag(void) {
    u16 *p = (u16 *)0x027fff96;
    if (*p & 1) *p &= ~1;
}

u32 WMi_GetStatusAddress(void) {
    return WMi_CheckInitialized() != 0 ? 0 : (u32)data_021ff46c->status;
}

// ---- file-scope objects (autoload_3 .bss 0x021ff4cc-0x021fff00; this definition order gives the original order after mwcc's size
// sort)
u8 data_021ff4cc[0x10];
u8 data_021ff4dc[0x24];
u8 data_021ff500[0xa00];

// mwcc-flags: -nothumb -O4,p
// NitroSDK RTC (rtc.c) + CARD common/rom (card_common.c, card_rom.c), autoload_2 0x0211dc4c-0x0211e3fc. ARM code, mwcc 1.2/base -O4,p.
// Functions are in reverse address order (mwcc emits in reverse source order).
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef long long s64;
typedef int BOOL;

typedef struct { u32 head, tail; } OSQ;
typedef struct { u32 year, month, day; s32 week; } RTCDate;
typedef struct { s32 hour, minute, second; } RTCTime;
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
extern u8 data_021febc0[];
extern u32 data_021ff220;
extern RomDev data_021ff240;
extern u32 data_021fcc2c[];
extern u32 data_0213c1c8[];

u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void func_02000b44(void *);
void func_0206d49c(void);
void func_021124a0(u32);
void func_021124bc(u32);
void OS_SetThreadPriority(void *, u32);
void OS_WakeupThreadDirect(void *);
void OS_WakeupThread(void *);
void OS_SleepThread(void *);
void func_02113a70(void *, void (*)(void *), void *, void *, u32, u32);
void DC_InvalidateRange(void *, u32);
void DC_FlushRange(void *, u32);
void func_021145f0(void);
void MI_StopDma(u32);
void MIi_CpuClearFast(u32, void *, u32);
void MI_CpuFill8(void *, u32, u32);
void MI_CpuCopy8(const void *, void *, u32);
void func_02117dcc(void);
BOOL PXI_IsCallbackReady(u32, u32);
s32 PXI_SendWordByFifo(u32, u32, u32);
void PXI_SetFifoRecvCallback(u32, void *);
void func_0211cbd0(void);
void func_0211cbe8(void);
void func_0211cc7c(void);
void CARDi_TaskThread(void *);
void CARDi_OnFifoRecv(void);
BOOL func_0211e7c0(void *, u32, u32);
void CARD_InitPulledOutCallback(void);
void CARDi_SetRomOp(u32, u32);
BOOL CARDi_ReadFromCache(void *);
BOOL func_0211e3fc(void *);

u32 RTC_GetDateTimeAsync(u32, u32, void (*)(void), u32);
u32 RTC_GetTimeAsync(u32, void (*)(void), u32);
u32 RTC_GetDateAsync(u32, void (*)(void), u32);
BOOL RtcSendPxiCommand(u32);
BOOL func_0211d538(void);
BOOL func_0211d528(void);
BOOL func_0211d548(void);
s32 RTCi_ConvertTimeToSecond(RTCTime *);
s32 RTC_ConvertDateToDay(RTCDate *);
void func_0211d798(u32);
void func_0211d7a8(void);
u32 func_0211d7d4(void);
void func_0211d7e4(void);
void func_0211d8ec(u32, u32);
void func_0211d990(u32, u32);
void CARDi_SetTask(void (*)(CARDCommon *));
void func_0211da74(s32);
void func_0211ded8(CARDCommon *);
void *func_0211e094(void);
BOOL func_0211e0a0(void);
void func_0211e258(CARDCommon *);
void CARDi_ReadCard(void *);
BOOL CARDi_TryWaitAsync(void);
BOOL CARDi_WaitAsync(void);

#define REG_MCCNT1 (*(volatile u32 *)0x040001a4)
#define REG_MCD1 (*(volatile u32 *)0x04100010)

// CARDi_ReadRomSyncCore~ (reads 512-byte pages through REG_MCCNT1 / REG_MCD1)
void CARDi_ReadCard(void *p) {
    RomDev *d = (RomDev *)p;
    CARDCommon *const c = &data_021fec00;
    u32 *dst;
    u32 *buf = d->buf;
    u32 mask = -512;
    do {
        u32 src = c->src;
        u32 page = src & mask;
        u32 n;
        u32 st;
        if (page != src || (dst = (u32 *)c->dst, ((u32)dst & 3)) || c->len < 512) {
            dst = buf;
            d->f8 = page;
        }
        CARDi_SetRomOp((page >> 8) | 0xb7000000, page << 24);
        REG_MCCNT1 = d->f4;
        n = 0;
        do {
            st = REG_MCCNT1;
            if (st & 0x800000) {
                u32 v = REG_MCD1;
                if (n < 512) dst[n++] = v;
            }
        } while (st & 0x80000000);
        if (dst == (u32 *)c->dst) {
            data_021fec00.src += 512;
            data_021fec00.dst += 512;
            data_021fec00.len -= 512;
            if (data_021fec00.len == 0) return;
        } else {
            if (!CARDi_ReadFromCache(d)) return;
        }
    } while (1);
}

// CARDi_ReadRomEnd~ (task body)
void func_0211e258(CARDCommon *unused) {
    RomDev *d = &data_021ff240;
    if (CARDi_ReadFromCache(d)) d->fn(d);
    {
        CARDCommon *const c = &data_021fec00;
        void (*cb)(void *);
        void *arg;
        u32 irq;
        c->cmd->result = 0;
        cb = c->callback;
        arg = c->cbArg;
        irq = OS_DisableInterrupts();
        c->flag &= ~0x4c;
        OS_WakeupThread(&c->tq);
        if (c->flag & 0x10) OS_WakeupThreadDirect(&c->thread);
        OS_RestoreInterrupts(irq);
        if (cb) cb(arg);
    }
}

// CARDi_ReadRom
void CARDi_ReadRom(u32 cmd, u32 off, u32 dst, u32 len, void (*cb)(void *), void *arg, BOOL async) {
    CARDCommon *const c = &data_021fec00;
    RomDev *d = &data_021ff240;
    u32 irq;
    func_0211d7a8();
    irq = OS_DisableInterrupts();
    while (c->flag & 4) OS_SleepThread(&c->tq);
    c->flag |= 4;
    c->callback = cb;
    c->cbArg = arg;
    OS_RestoreInterrupts(irq);
    c->op = cmd;
    c->src = off + data_021ff220;
    c->dst = dst;
    c->len = len;
    if (cmd <= 3) MI_StopDma(cmd);
    if (func_0211e3fc(d)) {
        if (async) return;
        func_0211e0a0();
        return;
    }
    if (async) {
        CARDi_SetTask(func_0211e258);
        return;
    }
    c->curThread = (OST *)data_021fcc2c[1];
    func_0211e258(c);
}

// CARD_Init
void CARD_Init(void) {
    CARDCommon *const c = &data_021fec00;
    if (c->flag != 0) return;
    c->flag = 1;
    c->src = c->dst = c->len = 0;
    c->op = -1;
    c->callback = 0;
    c->cbArg = 0;
    data_021ff220 = 0;
    func_0211d7e4();
    data_021ff240.fn = (void (*)(void *))func_0211e094();
    CARD_InitPulledOutCallback();
}

// CARD_WaitRomAsync~ (tail call to CARDi_WaitAsync)
BOOL func_0211e0a0(void) {
    return CARDi_WaitAsync();
}

// returns the ROM read routine CARDi_ReadCard
void *func_0211e094(void) {
    return CARDi_ReadCard;
}

// CARDi_ExecuteStreamTask~ (task body, 256-byte transfer loop)
void func_0211ded8(CARDCommon *c) {
    u32 g = c->f2c;
    u32 mode = c->f34;
    u32 h = c->f30;
    u32 pg = 256;
    u32 one = 1;
    void (*cb)(void *);
    void *arg;
    u32 irq;
    func_02000b44((void *)0x02000bbc);
    do {
        u32 len = c->len;
        if (len > pg) len = pg;
        c->cmd->len = len;
        if (c->flag & 0x40) {
            c->flag &= ~0x40;
            c->cmd->result = 7;
            break;
        }
        if (mode == 0) {
            DC_InvalidateRange(c->buf, len);
            c->cmd->srcBuf = c->src;
            c->cmd->dstBuf = (u32)(void *)c->buf;
        } else {
            MI_CpuCopy8((void *)c->src, c->buf, len);
            DC_FlushRange(c->buf, len);
            func_021145f0();
            c->cmd->srcBuf = (u32)c->buf;
            c->cmd->dstBuf = c->dst;
        }
        if (!func_0211e7c0(c, g, h)) break;
        if (mode == 2) {
            if (!func_0211e7c0(c, 9, one)) break;
        } else if (mode == 0) {
            MI_CpuCopy8(c->buf, (void *)c->dst, len);
        }
        c->src += len;
        c->dst += len;
        c->len -= len;
    } while (c->len != 0);
    cb = c->callback;
    arg = c->cbArg;
    irq = OS_DisableInterrupts();
    c->flag &= ~0x4c;
    OS_WakeupThread(&c->tq);
    if (c->flag & 0x10) OS_WakeupThreadDirect(&c->thread);
    OS_RestoreInterrupts(irq);
    if (cb) cb(arg);
}

// CARDi_RequestStreamCommand~ (src, dst, len, callback, arg, is_async, req_type, retry, mode)
BOOL CARDi_RequestStreamCommand(u32 a, u32 b, u32 len, void (*cb)(void *), void *arg, BOOL async, u32 g, u32 h, u32 mode) {
    CARDCommon *const c = &data_021fec00;
    u32 irq;
    func_02000b44((void *)0x02000bbc);
    irq = OS_DisableInterrupts();
    while (c->flag & 4) OS_SleepThread(&c->tq);
    c->flag |= 4;
    c->callback = cb;
    c->cbArg = arg;
    OS_RestoreInterrupts(irq);
    c->src = a;
    c->dst = b;
    c->len = len;
    c->f2c = g;
    c->f30 = h;
    c->f34 = mode;
    if (async) {
        CARDi_SetTask(func_0211ded8);
        return 1;
    }
    data_021fec00.curThread = (OST *)data_021fcc2c[1];
    func_0211ded8(c);
    return c->cmd->result == 0;
}

// returns a field of the current command block (+0x18)
u32 func_0211ddd0(void) {
    return data_021fec00.cmd->f18;
}

// CARD_IdentifyBackup~ (type)
BOOL func_0211dc88(u32 op) {
    CARDCommon *c = &data_021fec00;
    void (*cb)(void *);
    void *arg;
    u32 irq;
    func_02000b44((void *)0x02000bbc);
    if (op == 0) func_0206d49c();
    func_0211d7a8();
    irq = OS_DisableInterrupts();
    while (c->flag & 4) OS_SleepThread(&c->tq);
    c->flag |= 4;
    c->callback = 0;
    c->cbArg = 0;
    OS_RestoreInterrupts(irq);
    func_0211da74(op);
    data_021fec00.curThread = (OST *)data_021fcc2c[1];
    func_0211e7c0(c, 2, 1);
    c->cmd->srcBuf = 0;
    c->cmd->dstBuf = (u32)c->buf;
    c->cmd->len = 1;
    func_0211e7c0(c, 6, 1);
    cb = c->callback;
    arg = c->cbArg;
    irq = OS_DisableInterrupts();
    c->flag &= ~0x4c;
    OS_WakeupThread(&c->tq);
    if (c->flag & 0x10) OS_WakeupThreadDirect(&c->thread);
    OS_RestoreInterrupts(irq);
    if (cb) cb(arg);
    return c->cmd->result == 0;
}

// CARD_TryWaitRomAsync~ (tail call to CARDi_TryWaitAsync)
BOOL func_0211dc7c(void) {
    return CARDi_TryWaitAsync();
}

// sets the cancel flag 0x40 under IRQ disable (CARD_CancelAll~)
void CARD_CancelBackupAsync(void) {
    u32 irq = OS_DisableInterrupts();
    data_021fec00.flag |= 0x40;
    OS_RestoreInterrupts(irq);
}

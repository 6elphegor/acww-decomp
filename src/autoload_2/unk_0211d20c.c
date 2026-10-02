// mwcc-flags: -nothumb -O4,p
// NitroSDK RTC (rtc.c) + CARD common/rom (card_common.c, card_rom.c), autoload_2 0x0211d20c-0x0211da74. ARM code, mwcc 1.2/base -O4,p.
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

u32 func_01ffa2ec(void);
void func_01ffa3d4(u32);
void func_02000b44(void *);
void func_0206d49c(void);
void func_021124a0(u32);
void func_021124bc(u32);
void func_02113384(void *, u32);
void func_0211366c(void *);
void func_021136a0(void *);
void func_02113720(void *);
void func_02113a70(void *, void (*)(void *), void *, void *, u32, u32);
void func_02114594(void *, u32);
void func_021145cc(void *, u32);
void func_021145f0(void);
void func_021159a8(u32);
void func_02115ea8(u32, void *, u32);
void func_02115fb4(void *, u32, u32);
void func_02116048(const void *, void *, u32);
void func_02117dcc(void);
BOOL func_02117e8c(u32, u32);
s32 func_02117dd8(u32, u32, u32);
void func_02117eb4(u32, void *);
void func_0211cbd0(void);
void func_0211cbe8(void);
void func_0211cc7c(void);
void func_0211e8fc(void *);
void func_0211e958(void);
BOOL func_0211e7c0(void *, u32, u32);
void func_0211eac8(void);
void func_0211e688(u32, u32);
BOOL func_0211e728(void *);
BOOL func_0211e3fc(void *);

u32 func_0211d250(u32, u32, void (*)(void), u32);
u32 func_0211d324(u32, void (*)(void), u32);
u32 func_0211d3e4(u32, void (*)(void), u32);
BOOL func_0211d4e4(u32);
BOOL func_0211d538(void);
BOOL func_0211d528(void);
BOOL func_0211d548(void);
s32 func_0211d5d0(RTCTime *);
s32 func_0211d5ec(RTCDate *);
void func_0211d798(u32);
void func_0211d7a8(void);
u32 func_0211d7d4(void);
void func_0211d7e4(void);
void func_0211d8ec(u32, u32);
void func_0211d990(u32, u32);
void func_0211da2c(void (*)(CARDCommon *));
void func_0211da74(s32);
void func_0211ded8(CARDCommon *);
void *func_0211e094(void);
BOOL func_0211e0a0(void);
void func_0211e258(CARDCommon *);
void func_0211e2fc(void *);
BOOL func_0211d720(void);
BOOL func_0211d73c(void);

#define REG_MCCNT1 (*(volatile u32 *)0x040001a4)
#define REG_MCD1 (*(volatile u32 *)0x04100010)

// CARDi_SetTask
void func_0211da2c(void (*task)(CARDCommon *)) {
    CARDCommon *const c = &data_021fec00;
    func_02113384(&c->thread, c->priority);
    c->curThread = &c->thread;
    c->task = task;
    c->flag |= 8;
    func_0211366c(&c->thread);
}

// CARDi_LockResource (lock id, target)
void func_0211d990(u32 id, u32 type) {
    CARDCommon *const c = &data_021fec00;
    u32 irq = func_01ffa2ec();
    if (c->lockOwner == id) {
        if (c->lockType != type) func_0206d49c();
    } else {
        while (c->lockOwner != (u32)-3) func_02113720(&c->queue);
        c->lockOwner = id;
        c->lockType = type;
    }
    c->lockCount++;
    c->cmd->result = 0;
    func_01ffa3d4(irq);
}

// CARDi_UnlockResource (lock id, target)
void func_0211d8ec(u32 id, u32 type) {
    CARDCommon *c = &data_021fec00;
    u32 irq = func_01ffa2ec();
    if (c->lockOwner != id || c->lockCount == 0) {
        func_0206d49c();
    } else {
        if (c->lockType != type) func_0206d49c();
        c->lockCount--;
        if (c->lockCount == 0) {
            c->lockOwner = (u32)-3;
            c->lockType = 0;
            func_021136a0(&c->queue);
        }
    }
    c->cmd->result = 0;
    func_01ffa3d4(irq);
}

// CARDi_InitCommon
void func_0211d7e4(void) {
    CARDCommon *const c = &data_021fec00;
    volatile u32 zero; // MI_CpuClear32 inline: vu32 data = 0
    data_021fec00.lockOwner = (u32)-3;
    data_021fec00.lockCount = 0;
    zero = 0;
    data_021fec00.lockType = 0;
    data_021fec00.cmd = (CARDCmd *)data_021febc0;
    func_02115ea8(zero, data_021febc0, 64);
    func_021145cc(data_021febc0, 64);
    if (*(u16 *)0x027ffc40 != 2) func_02116048((void *)0x027ffe00, (void *)0x027ffa80, 0x160);
    c->queue.head = c->queue.tail = 0;
    c->tq.head = c->tq.tail = 0;
    c->priority = 4;
    func_02113a70(&c->thread, func_0211e8fc, 0, &data_021ff220, 0x400, c->priority);
    func_0211366c(&c->thread);
    func_02117eb4(11, func_0211e958);
    if (*(u16 *)0x027ffc40 != 2) func_0211d798(1);
}

// CARD_IsEnabled
u32 func_0211d7d4(void) {
    return data_021febb4;
}

// CARD_CheckEnabled
void func_0211d7a8(void) {
    if (func_0211d7d4()) return;
    func_0206d49c();
}

// CARD_Enable
void func_0211d798(u32 v) {
    data_021febb4 = v;
}

// CARDi_WaitAsync
BOOL func_0211d73c(void) {
    CARDCommon *const c = &data_021fec00;
    u32 irq = func_01ffa2ec();
    while (c->flag & 4) func_02113720(&c->tq);
    func_01ffa3d4(irq);
    return c->cmd->result == 0;
}

// CARD_TryWaitBackupAsync~ (card idle test)
BOOL func_0211d720(void) {
    return !(data_021fec00.flag & 4);
}

// func_0211d704
BOOL func_0211d704(void) {
    return data_021fec00.flag != 0;
}

// CARD_GetResultCode
u32 func_0211d6f0(void) {
    return data_021fec00.cmd->result;
}

// CARD_GetThreadPriority
u32 func_0211d6e0(void) {
    return data_021fec00.priority;
}

// CARD_LockRom
void func_0211d6c0(u32 id) {
    func_0211d990(id, 1);
    func_021124bc(id);
}

// CARD_UnlockRom
void func_0211d6a0(u32 id) {
    func_021124a0(id);
    func_0211d8ec(id, 1);
}

// CARD_LockBackup
void func_0211d690(u32 id) {
    func_0211d990(id, 2);
}

// CARD_UnlockBackup
void func_0211d680(u32 id) {
    func_0211d8ec(id, 2);
}

// RTC_ConvertDateToDay
s32 func_0211d5ec(RTCDate *date) {
    s32 days;
    if (date->year >= 100 || date->month < 1 || date->month > 12 || date->day < 1 || date->day > 31 || date->week >= 7 || date->month < 1 || date->month > 12)
        return -1;
    days = date->day - 1 + data_0213c1c8[date->month];
    if (date->month >= 3 && (date->year & 3) == 0) days++;
    return date->year * 365 + days + ((date->year + 3) >> 2);
}

// RTC_ConvertTimeToSecond
s32 func_0211d5d0(RTCTime *t) {
    return (t->hour * 60 + t->minute) * 60 + t->second;
}

// RTC_ConvertDateTimeToSecond
s64 func_0211d558(RTCDate *date, RTCTime *time) {
    s32 day = func_0211d5ec(date);
    s32 sec;
    if (day == -1) return -1;
    sec = func_0211d5d0(time);
    if (sec == -1) return -1;
    return (s64)day * 86400 + sec;
}

// func_0211d548
BOOL func_0211d548(void) {
    return func_0211d4e4(0x10);
}

// func_0211d538
BOOL func_0211d538(void) {
    return func_0211d4e4(0x11);
}

// func_0211d528
BOOL func_0211d528(void) {
    return func_0211d4e4(0x12);
}

// func_0211d518
BOOL func_0211d518(void) {
    return func_0211d4e4(0x27);
}

// RTCi_SendPxiCommand (PXI tag 5, command in bits 8..14)
BOOL func_0211d4e4(u32 cmd) {
    return func_02117dd8(5, (cmd << 8) & 0x7f00, 0) >= 0;
}

// RTC_Init
void func_0211d45c(void) {
    if (data_021feb8c) return;
    data_021feb8c = 1;
    data_021feb90.lock = 0;
    data_021feb90.f4 = 0;
    data_021feb90.f1c = 0;
    data_021feb90.f8 = 0;
    data_021feb90.fc = 0;
    func_02117dcc();
    while (!func_02117e8c(5, 1)) {
    }
    func_02117eb4(5, func_0211cc7c);
}

// RTC_ReadDateAsync (date, callback, arg)
u32 func_0211d3e4(u32 a, void (*cb)(void), u32 arg) {
    u32 irq = func_01ffa2ec();
    if (data_021feb90.lock) {
        func_01ffa3d4(irq);
        return 1;
    }
    data_021feb90.lock = 1;
    func_01ffa3d4(irq);
    data_021feb90.command = 0;
    data_021feb90.f18 = 0;
    data_021feb90.f8 = a;
    data_021feb90.f4 = (u32)cb;
    data_021feb90.f10 = arg;
    return func_0211d538() ? 0 : 3;
}

// RTC_ReadDate (sync)
u32 func_0211d3a0(u32 a) {
    u32 r = func_0211d3e4(a, func_0211cbe8, 0);
    data_021feb90.result = r;
    if (!r) func_0211cbd0();
    return data_021feb90.result;
}

// RTC_ReadTimeAsync (time, callback, arg)
u32 func_0211d324(u32 a, void (*cb)(void), u32 arg) {
    u32 irq = func_01ffa2ec();
    if (data_021feb90.lock) {
        func_01ffa3d4(irq);
        return 1;
    }
    data_021feb90.lock = 1;
    func_01ffa3d4(irq);
    data_021feb90.command = 1;
    data_021feb90.f18 = 0;
    data_021feb90.f8 = a;
    data_021feb90.f4 = (u32)cb;
    data_021feb90.f10 = arg;
    return func_0211d528() ? 0 : 3;
}

// RTC_ReadTime (sync)
u32 func_0211d2e0(u32 a) {
    u32 r = func_0211d324(a, func_0211cbe8, 0);
    data_021feb90.result = r;
    if (!r) func_0211cbd0();
    return data_021feb90.result;
}

// RTC_ReadDateTimeAsync (date, time, callback, arg)
u32 func_0211d250(u32 a, u32 b, void (*cb)(void), u32 arg) {
    u32 irq = func_01ffa2ec();
    if (data_021feb90.lock) {
        func_01ffa3d4(irq);
        return 1;
    }
    data_021feb90.lock = 1;
    func_01ffa3d4(irq);
    data_021feb90.command = 2;
    data_021feb90.f18 = 0;
    data_021feb90.f8 = a;
    data_021feb90.fc = b;
    data_021feb90.f4 = (u32)cb;
    data_021feb90.f10 = arg;
    return func_0211d548() ? 0 : 3;
}

// RTC_ReadDateTime (sync wrapper of RTC_ReadDateTimeAsync; waits in func_0211cbd0)
u32 func_0211d20c(u32 a, u32 b) {
    u32 r = func_0211d250(a, b, func_0211cbe8, 0);
    data_021feb90.result = r;
    if (!r) func_0211cbd0();
    return data_021feb90.result;
}

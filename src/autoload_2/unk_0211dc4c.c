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

// CARDi_ReadRomSyncCore~ (reads 512-byte pages through REG_MCCNT1 / REG_MCD1)
void func_0211e2fc(void *p) {
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
        func_0211e688((page >> 8) | 0xb7000000, page << 24);
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
            if (!func_0211e728(d)) return;
        }
    } while (1);
}

// CARDi_ReadRomEnd~ (task body)
void func_0211e258(CARDCommon *unused) {
    RomDev *d = &data_021ff240;
    if (func_0211e728(d)) d->fn(d);
    {
        CARDCommon *const c = &data_021fec00;
        void (*cb)(void *);
        void *arg;
        u32 irq;
        c->cmd->result = 0;
        cb = c->callback;
        arg = c->cbArg;
        irq = func_01ffa2ec();
        c->flag &= ~0x4c;
        func_021136a0(&c->tq);
        if (c->flag & 0x10) func_0211366c(&c->thread);
        func_01ffa3d4(irq);
        if (cb) cb(arg);
    }
}

// CARDi_ReadRom
void func_0211e130(u32 cmd, u32 off, u32 dst, u32 len, void (*cb)(void *), void *arg, BOOL async) {
    CARDCommon *const c = &data_021fec00;
    RomDev *d = &data_021ff240;
    u32 irq;
    func_0211d7a8();
    irq = func_01ffa2ec();
    while (c->flag & 4) func_02113720(&c->tq);
    c->flag |= 4;
    c->callback = cb;
    c->cbArg = arg;
    func_01ffa3d4(irq);
    c->op = cmd;
    c->src = off + data_021ff220;
    c->dst = dst;
    c->len = len;
    if (cmd <= 3) func_021159a8(cmd);
    if (func_0211e3fc(d)) {
        if (async) return;
        func_0211e0a0();
        return;
    }
    if (async) {
        func_0211da2c(func_0211e258);
        return;
    }
    c->curThread = (OST *)data_021fcc2c[1];
    func_0211e258(c);
}

// CARD_Init
void func_0211e0ac(void) {
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
    func_0211eac8();
}

// CARD_WaitRomAsync~ (tail call to func_0211d73c)
BOOL func_0211e0a0(void) {
    return func_0211d73c();
}

// returns the ROM read routine func_0211e2fc
void *func_0211e094(void) {
    return func_0211e2fc;
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
            func_02114594(c->buf, len);
            c->cmd->srcBuf = c->src;
            c->cmd->dstBuf = (u32)(void *)c->buf;
        } else {
            func_02116048((void *)c->src, c->buf, len);
            func_021145cc(c->buf, len);
            func_021145f0();
            c->cmd->srcBuf = (u32)c->buf;
            c->cmd->dstBuf = c->dst;
        }
        if (!func_0211e7c0(c, g, h)) break;
        if (mode == 2) {
            if (!func_0211e7c0(c, 9, one)) break;
        } else if (mode == 0) {
            func_02116048(c->buf, (void *)c->dst, len);
        }
        c->src += len;
        c->dst += len;
        c->len -= len;
    } while (c->len != 0);
    cb = c->callback;
    arg = c->cbArg;
    irq = func_01ffa2ec();
    c->flag &= ~0x4c;
    func_021136a0(&c->tq);
    if (c->flag & 0x10) func_0211366c(&c->thread);
    func_01ffa3d4(irq);
    if (cb) cb(arg);
}

// CARDi_RequestStreamCommand~ (src, dst, len, callback, arg, is_async, req_type, retry, mode)
BOOL func_0211dde4(u32 a, u32 b, u32 len, void (*cb)(void *), void *arg, BOOL async, u32 g, u32 h, u32 mode) {
    CARDCommon *const c = &data_021fec00;
    u32 irq;
    func_02000b44((void *)0x02000bbc);
    irq = func_01ffa2ec();
    while (c->flag & 4) func_02113720(&c->tq);
    c->flag |= 4;
    c->callback = cb;
    c->cbArg = arg;
    func_01ffa3d4(irq);
    c->src = a;
    c->dst = b;
    c->len = len;
    c->f2c = g;
    c->f30 = h;
    c->f34 = mode;
    if (async) {
        func_0211da2c(func_0211ded8);
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
    irq = func_01ffa2ec();
    while (c->flag & 4) func_02113720(&c->tq);
    c->flag |= 4;
    c->callback = 0;
    c->cbArg = 0;
    func_01ffa3d4(irq);
    func_0211da74(op);
    data_021fec00.curThread = (OST *)data_021fcc2c[1];
    func_0211e7c0(c, 2, 1);
    c->cmd->srcBuf = 0;
    c->cmd->dstBuf = (u32)c->buf;
    c->cmd->len = 1;
    func_0211e7c0(c, 6, 1);
    cb = c->callback;
    arg = c->cbArg;
    irq = func_01ffa2ec();
    c->flag &= ~0x4c;
    func_021136a0(&c->tq);
    if (c->flag & 0x10) func_0211366c(&c->thread);
    func_01ffa3d4(irq);
    if (cb) cb(arg);
    return c->cmd->result == 0;
}

// CARD_TryWaitRomAsync~ (tail call to func_0211d720)
BOOL func_0211dc7c(void) {
    return func_0211d720();
}

// sets the cancel flag 0x40 under IRQ disable (CARD_CancelAll~)
void func_0211dc4c(void) {
    u32 irq = func_01ffa2ec();
    data_021fec00.flag |= 0x40;
    func_01ffa3d4(irq);
}

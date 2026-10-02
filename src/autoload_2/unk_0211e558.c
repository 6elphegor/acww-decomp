// mwcc-flags: -nothumb -O4,p
// NitroSDK region, autoload_2 0x0211e558-0x0211eeec. ARM code, mwcc 1.2/base.
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
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_01ffa404(u32, void (*)(void));
extern void func_01ff81a8(u32);
extern void func_01ff8128(u32);
extern void func_01ff80e0(u32);
extern void func_01ffa494(u32);
extern void func_02114594(void *, u32);
extern void func_021145b0(void *, u32);
extern void func_021145cc(void *, u32);
extern void func_02114608(void *, u32);
extern void func_021145f0(void);
extern u32 func_02114b10(void);
extern void func_021159a8(u32);
extern void func_02116224(u32, u32, u32, u32);
extern void func_02116048(void *, void *, u32);
extern void func_021136a0(void *);
extern void func_0211366c(void *);
extern void func_02113720(u32);
extern int func_02117e8c(u32, u32);
extern int func_02117dd8(u32, u32, u32);
extern void func_02117dcc(void);
extern void func_02117eb4(u32, void *);
extern void WaitByLoop(u32);
extern void func_0206d49c(void);
extern void func_0211c670(void);
extern int func_02114188(void *, void *, u32);
extern void func_021140d4(void *, void *, u32);
extern void func_02114234(void *, void *, u32);
extern void func_021142dc(void *, void *, u32);
extern void func_02115c24(u32, void *, void *, u32);
extern void func_02115ca0(u32, void *, u32, u32);
extern void func_02115e48(void *, void *, u32);
extern void func_02115e30(u32, void *, u32);
extern void func_02115640(u8 *);
extern void func_0211d45c(void);
extern int func_0211d2e0(u32 *);
extern void func_0211fb0c(u16, u32, u32);

BOOL func_0211f7e4(void);
u32 func_0211f73c(void);
u32 func_0211f698(void);
u32 func_0211f5f4(void);
WMOtherElements func_0211f488(WMBssDesc *b);
u32 func_0211f410(void);
u32 func_0211f3dc(void *buf, u16 dmaNo);
u32 func_0211f1fc(void *buf, u16 dmaNo, u32 size);
u32 func_0211f188(void);
void func_0211f170(u32 idx, void (*cb)(WMMsg *));
u32 func_0211f01c(u32 id, u16 paramNum, ...);
WMArm9Buf *func_0211f00c(void);
u32 func_0211eff0(void);
u32 func_0211ef94(void);
u32 func_0211eeec(int n, ...);
void func_0211eb4c(u32 tag, WMMsg *m, BOOL err);
void func_0211eb30(void);
u32 func_0211eb00(void);
void func_0211eac8(void);
void func_0211ea5c(u32 tag, u32 data, BOOL err);
void func_0211ea4c(int (*cb)(void));
void func_0211ea0c(void);
void func_0211e9a8(u32 data, u32 n);
void func_0211e958(u32 tag, u32 data, BOOL err);
void func_0211e8fc(void);
BOOL func_0211e7c0(CardCommon *c, u32 arg, int retry);
BOOL func_0211e728(u8 *cache);
void func_0211e688(u32 hi, u32 lo);
void func_0211e630(void);
void func_0211e558(void);
BOOL func_0211e3fc(CardCommon *req);

void func_0211eb4c(u32 tag, WMMsg *m, BOOL err) {
    if (err != 0) return;
    func_02114594(data_021ff46c->f10, 0x100);
    if (data_021ff46c->f16 == 0) func_02114594(data_021ff46c->status, 0x800);
    if (m != (WMMsg *)data_021ff46c->f10) func_02114594(m, 0x100);
    if (m->id >= 42) {
        if (m->id == 0x80) {
            if (m->f2 == 19) func_0206d49c();
            if (data_021ff46c->cbC0 != 0) data_021ff46c->cbC0(m);
        } else if (m->id == 0x82) {
            if (data_021ff46c->reqCb[m->f6] != 0) {
                m->f1c = data_021ff46c->reqArg[m->f6];
                func_02114594((void *)m->f8, data_021ff46c->status->f46);
                data_021ff46c->reqCb[m->f6](m);
            }
        } else if (m->id == 0x81) {
            m->id = 15;
            if (m->f1c != 0) ((void (*)(WMMsg *))m->f1c)(m);
        }
    } else {
        void (*cb)(WMMsg *);
        u32 r8;
        u32 r7;
        u32 r6;
        u8 *r5;
        u8 *r4;
        if (m->id == 14 && (u16)(m->f4 + 0xfff5) <= 1 && m->f2 == 0)
            func_02114594((void *)m->f8, data_021ff46c->status->f46);
        if (m->id == 2 && m->f2 == 0) {
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
                r8 = m->f8w;
                r7 = m->f10;
                r6 = 0;
            } else if (m->id == 12) {
                r7 = 0;
                r8 = m->f8w;
                r6 = m->f10;
                r4 = (u8 *)r7;
                r5 = (u8 *)m + 10;
            }
            if (r8 == 7 || r8 == 9) {
                u16 i;
                data_021ff4b8.id = 0x82;
                data_021ff4b8.f2 = 0;
                data_021ff4b8.f4 = r8;
                data_021ff4b8.f8 = 0;
                data_021ff4b8.fc = 0;
                data_021ff4b8.f10 = 0;
                data_021ff4b8.f12 = r7;
                data_021ff4b8.f20 = r6;
                data_021ff4b8.f1a = 0xffff;
                func_02116048(r5, data_021ff4cc, 6);
                if (r4 != 0) {
                    func_02115e48(r4, data_021ff4dc, 0x18);
                } else {
                    volatile u16 z = 0;
                    func_02115e30(z, data_021ff4dc, 0x18);
                }
                for (i = 0; i < 16; i++) {
                    data_021ff4b8.f6 = i;
                    if (data_021ff46c->reqCb[i] != 0) {
                        data_021ff4b8.f1c = data_021ff46c->reqArg[i];
                        data_021ff46c->reqCb[i](&data_021ff4b8);
                    }
                }
            }
        }
    }
    func_02114594(data_021ff46c->f10, 0x100);
    func_0211eb30();
    if (m != (WMMsg *)data_021ff46c->f10) {
        m->id |= 0x8000;
        func_021145b0(m, 0x100);
    }
}

void func_0211eb30(void) {
    u16 *p = (u16 *)0x027fff96;
    if (*p & 1) *p &= ~1;
}

u32 func_0211eb00(void) {
    return func_0211eff0() != 0 ? 0 : (u32)data_021ff46c->status;
}

void func_0211eac8(void) {
    func_02117dcc();
    func_02117eb4(14, func_0211ea5c);
    data_021ff464 = 0;
}

void func_0211ea5c(u32 tag, u32 data, BOOL err) {
    if ((data & 0x3f) == 17) {
        int ret = 1;
        data_021ff460 = 1;
        if (data_021ff464 != 0) ret = data_021ff464();
        if (ret == 0) return;
        func_0211ea0c();
    } else {
        func_0206d49c();
    }
}

void func_0211ea4c(int (*cb)(void)) {
    data_021ff464 = cb;
}

void func_0211ea0c(void) {
    if ((*(u16 *)0x027fffa8 & 0x8000) >> 15) func_0211c670();
    func_0211e9a8(1, 1);
    func_0206d49c();
}

void func_0211e9a8(u32 data, u32 n) {
    if (func_02117dd8(14, data, 0) == 0) return;
    do {
        WaitByLoop(n);
    } while (func_02117dd8(14, data, 0) != 0);
}

void func_0211e958(u32 tag, u32 data, BOOL err) {
    if (tag != 11) return;
    if (err == 0) return;
    {
        CardCommon *const c = &data_021fec00;
        c->flag &= ~0x20;
        func_0211366c(c->waiter);
    }
}

void func_0211e8fc(void) {
    CardCommon *const c = &data_021fec00;
    u32 irq;
    for (;;) {
        irq = func_01ffa2ec();
        while ((c->flag & 8) == 0) {
            c->waiter = (u8 *)c + 0x44;
            func_02113720(0);
        }
        func_01ffa3d4(irq);
        c->task(c);
    }
}

BOOL func_0211e7c0(CardCommon *c, u32 arg, int retry) {
    u32 irq;
    if ((*(volatile u32 *)&c->flag & 2) == 0) {
        c->flag |= 2;
        if (func_02117e8c(11, 1) == 0) {
            do {
                func_01ffa494(100);
            } while (func_02117e8c(11, 1) == 0);
        }
        func_0211e7c0(c, 0, 1);
    }
    func_021145cc(c->result, 64);
    func_021145f0();
    do {
        c->arg = arg;
        c->flag |= 0x20;
        while (func_02117dd8(11, arg, 1) < 0) {}
        if (arg == 0) {
            u32 r = (u32)c->result;
            while (func_02117dd8(11, r, 1) < 0) {}
        }
        irq = func_01ffa2ec();
        if ((c->flag & 0x20) != 0) {
            do {
                func_02113720(0);
            } while ((c->flag & 0x20) != 0);
        }
        func_01ffa3d4(irq);
    } while (*c->result == 4 && --retry > 0);
    return *c->result == 0;
}

BOOL func_0211e728(u8 *cache) {
    CardCommon *c = &data_021fec00;
    u32 base = c->src & -512;
    if (base == *(u32 *)(cache + 8)) {
        u32 off = c->src - base;
        u32 n = 512 - off;
        if (n > c->len) n = c->len;
        func_02116048(cache + 0x20 + off, (void *)c->dst, n);
        c->src += n;
        c->dst += n;
        c->len -= n;
    }
    return c->len != 0;
}

void func_0211e688(u32 hi, u32 lo) {
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

void func_0211e630(void) {
    CardCommon *const c = &data_021fec00;
    u32 dma = c->dma;
    u32 dst = c->dst;
    func_02116224(dma, 0x04100010, dst, 512);
    func_0211e688(0xb7000000 | (c->src >> 8), c->src << 24);
    *(volatile u32 *)0x040001a4 = data_021ff240[1];
}

void func_0211e558(void) {
    func_021159a8(data_021fec00.dma);
    data_021fec00.src += 0x200;
    data_021fec00.dst += 0x200;
    data_021fec00.len -= 0x200;
    if (data_021fec00.len == 0) {
        func_01ff80e0(0x80000);
        func_01ff81a8(0x80000);
        {
            CardCommon *const c = &data_021fec00;
            void (*cb)(u32);
            u32 arg;
            u32 irq;
            *c->result = 0;
            cb = c->callback;
            arg = c->callbackArg;
            irq = func_01ffa2ec();
            c->flag &= ~0x4c;
            func_021136a0((u8 *)c + 0x10c);
            if ((c->flag & 0x10) != 0) func_0211366c((u8 *)c + 0x44);
            func_01ffa3d4(irq);
            if (cb != 0) cb(arg);
        }
    } else {
        func_0211e630();
    }
}


// mwcc-flags: -nothumb -O4,p
// autoload_2 0x02125c94-0x0212703c: wireless helper (WH-like) state callback, job-queue thread, chunk reassembly. mwcc 1.2/base, -O4,p.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef int BOOL;

typedef struct { s32 size; s32 count; s32 total; } WQCfg;
extern u8 *data_02200044;
extern WQCfg data_02200048;
extern u32 func_01ffa2ec(void);
extern void func_01ffa3d4(u32);
extern void func_02115fb4(void *, u32, u32);
extern void func_02116048(void *, void *, u32);
extern s32 _s32_div_f(s32, s32);
extern s32 func_02117dd8(s32, u32, u32);
extern void WaitByLoop(u32);
extern void func_021123c4(u32);
extern u32 func_02112468(u32);
extern u32 func_02112508(u32);

typedef struct WJob WJob;
struct WJob {
    WJob *next;
    u32 busy : 1;
    u32 prio : 31;
    void (*pre)(WJob *);
    void (*post)(WJob *);
    u8 pad[0x10];
};
#define HEAD(sys) ((sys)->head)
typedef struct {
    u8 thread[0xc0];
    WJob *volatile head;
    WJob sentinel;
} WSys;
typedef struct {
    u32 addr;
    u32 size;
    u8 *ptr;
    u32 state;
} WSlot;
typedef struct {
    u32 f0;
    u8 pad[0x2c];
    WSlot slot[4];
} WSlotTab;

extern WSys *data_02200040;
extern u32 func_0211337c(void *);
extern void func_02113384(void *, u32);
extern void func_02113720(u32);
extern void func_02113a70(void *, void *, void *, void *, u32, u32);
extern void func_0211366c(void *);
extern void func_02113a44(void);
extern void func_0206d49c(void);
extern u32 func_0211f800(void);

typedef struct { u32 flag; u32 irq; } WLock;

typedef struct {
    u8 _0[0x40];
    u8 f40[0x4c4];
    u32 f504;
    u32 _508;
    u8 f50c;
    u8 f50d;
    u8 _50e[10];
    u16 f518;
    u16 f51a;
    void (*cb)();
    u8 _520[6];
    u16 f526;
    u16 f528;
    u16 f52a;
    u16 f52c;
} WS18;
extern WS18 *data_02200018;
extern u16 data_0213c20c;
extern u16 data_0213c210;
extern u16 data_0213c214;
extern u16 data_0213c218;
extern u32 func_0211fb68(void *);
#define W8(p, o) (*(u8 *)((u8 *)(p) + (o)))
#define W16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define W32(p, o) (*(u32 *)((u8 *)(p) + (o)))
extern u8 *data_0220001c;
extern u32 data_0213c220;
extern void func_01ffa494(u32);
extern u32 func_02120164(void *, void *);
extern u32 func_021219b4(void *, u32);
extern u32 func_021200b8(void *, u32);
extern u32 func_021206b4(void *, u32, u32, void *, u32, u32, u32, u32, u32, u32, u32);
extern u32 func_0212026c(void *);
extern void func_0211fb0c(u32, u32, u32);
typedef struct { u8 _0[0x131c]; u32 f131c; u32 f1320; u8 _1324[0x1340-0x1324]; u8 _1340[0x14e8-0x1340]; u32 state[15]; } WWork;
typedef struct { u16 id; u16 res; u16 sub; u16 f6; u16 f8; u16 fa; u16 fc; u16 fe; u16 f10; } WMsg2;

extern void func_02124830(u32, u32);
extern u32 func_02121948(void *, u32, u32, u32, u32);
void func_02125d0c(WMsg2 *m);
void func_02126568(void);

void func_021269e4(void *p);
BOOL func_021269f8(void);
BOOL func_021269cc(WJob *job);
void func_0212683c(WJob *job, void (*pre)(WJob *), void (*post)(WJob *), u32 prio);
BOOL func_02126bb4(u32 n);
u8 *func_02126c14(u8 *msg, u32 aid);
void func_02126a9c(WSys *sys);
typedef struct { u8 pad[4]; u16 cur; } WRot;

// lock acquire helper: spin on lock word 0x027fffe8 bit 0x40 / func_02112508
void func_02126fbc(u32 a, WLock *st) {
    u32 *const p = (u32 *)0x027fffe8;
    for (;;) {
        st->irq = func_01ffa2ec();
        st->flag = func_02112468((u32)p) & 0x40;
        if (st->flag != 0) return;
        if (func_02112508(a) == 0) return;
        func_01ffa3d4(st->irq);
        WaitByLoop(1);
    }
}

// lock release helper (RestoreInterrupts of the saved state)
void func_02126f94(u32 a, WLock *st) {
    if (st->flag == 0) func_021123c4(a);
    func_01ffa3d4(st->irq);
}

// spin until func_02117dd8(13, x, 0) returns 0 (WaitByLoop(1) between polls)
void func_02126f30(u32 x) {
    if (func_02117dd8(13, x, 0) == 0) return;
    do {
        WaitByLoop(1);
    } while (func_02117dd8(13, x, 0) != 0);
}

// chunk reassembly: configure chunk size n-2 and count 30/(n-2)
void func_02126ef4(s32 n) {
    data_02200048.size = n - 2;
    data_02200048.count = _s32_div_f(30, n - 2);
    data_02200048.total = 30;
}

// chunk reassembly: set work buffer and clear it (0x21c bytes)
void func_02126ed4(void *p) {
    data_02200044 = p;
    func_02115fb4(p, 0, 0x21c);
}

// chunk reassembly: clear entry n
void func_02126e88(u32 n) {
    u32 i;
    if (data_02200044 == 0) return;
    i = n - 1;
    func_02115fb4(data_02200044 + i * 32, 0, 30);
    *(u32 *)(data_02200044 + i * 4 + 0x1e0) = 0;
}

// packet encode: record types 1..6 (type 4 carries two u16)
u8 *func_02126e00(u8 *src, u8 *dst) {
    u8 *p = dst;
    *p++ = *src;
    switch (*src) {
    case 4:
        *p++ = *(u16 *)(src + 2);
        *p++ = (*(u16 *)(src + 2) & 0xff00) >> 8;
        *p++ = *(u16 *)(src + 4);
        *p++ = (*(u16 *)(src + 4) & 0xff00) >> 8;
        break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
        break;
    default:
        return 0;
    }
    return p;
}

// packet decode: record types 7/8/9
u8 *func_02126cc4(u8 *src, u8 *dst, u32 aid) {
    u8 *ret;
    dst[0] = src[0];
    switch (dst[0]) {
    case 7:
        if (func_02126bb4(aid) != 0) return data_02200044 + (aid - 1) * 32;
        dst[2] = src[1];
        if (dst[2] > data_02200048.count) return 0;
        func_02116048(src + 2, dst + 3, data_02200048.size);
        ret = func_02126c14(dst, aid);
        break;
    case 8:
        ret = src + 3;
        *(u16 *)(dst + 2) = src[1] & 0xff;
        *(u16 *)(dst + 2) |= (src[2] << 8) & 0xff00;
        break;
    case 9:
        ret = src + 3;
        *(u16 *)(dst + 2) = src[1] & 0xff;
        *(u16 *)(dst + 2) |= (src[2] << 8) & 0xff00;
        func_02116048(ret, dst + 4, data_02200048.size);
        ret += data_02200048.size;
        break;
    default:
        return 0;
    }
    return ret;
}

// chunk reassembly: store chunk msg[2] of entry aid
u8 *func_02126c14(u8 *msg, u32 aid) {
    u32 j; u32 off; s32 i; u32 *w;
    u8 *base = data_02200044;
    if (base == 0) return 0;
    i = msg[2];
    if (i > data_02200048.count) return 0;
    j = aid - 1;
    off = j << 5;
    func_02116048(msg + 3, base + j * 32 + i * data_02200048.size, data_02200048.size);
    ((u32 *)(data_02200044 + 0x1e0))[j] |= 1 << i;
    if (func_02126bb4(aid) != 0) return data_02200044 + off;
    return 0;
}

// chunk reassembly: have all chunks of entry n arrived (bit mask check)
BOOL func_02126bb4(u32 n) {
    u16 i = 0;
    if (data_02200048.count > 0) {
        u32 m = *(u32 *)(data_02200044 + (n - 1) * 4 + 0x1e0);
        do {
            if (((1 << i) & m) == 0) return 0;
            i++;
        } while (i < data_02200048.count);
    }
    return 1;
}

// job-queue thread: worker entry, runs pre/post callbacks per job until the sentinel job
void func_02126a9c(WSys *sys) {
    WJob *job;
    u32 irq;
    u32 irq2;
    u32 zero = 0;
    void (*post)(WJob *);
    u32 cur;
    u32 np;
    for (;;) {
        irq = func_01ffa2ec();
        while (HEAD(sys) == 0) {
            func_02113384(sys, zero);
            func_02113720(zero);
        }
        job = HEAD(sys);
        HEAD(sys) = HEAD(sys)->next;
        func_02113384(sys, job->prio);
        func_01ffa3d4(irq);
        if (job->pre != 0) job->pre(job);
        irq2 = func_01ffa2ec();
        post = job->post;
        cur = func_0211337c(sys);
        if (HEAD(sys) == 0) {
            np = zero;
        } else if (cur < HEAD(sys)->prio) {
            np = HEAD(sys)->prio;
        } else {
            np = cur;
        }
        if (np != cur) func_02113384(sys, np);
        job->next = 0;
        job->busy = 0;
        if (post != 0) post(job);
        if (job == &sys->sentinel) break;
        func_01ffa3d4(irq2);
    }
    func_02113a44();
}

// job-queue thread: init and create the worker thread
void func_02126a14(WSys *sys, u32 size) {
    u32 irq = func_01ffa2ec();
    if (data_02200040 == 0) {
        u32 ss;
        data_02200040 = sys;
        func_021269e4(&sys->sentinel);
        sys->head = 0;
        ss = (size - 0xe4) & ~3;
        func_02113a70(sys, (void *)func_02126a9c, sys, (u8 *)sys + 0xe4 + ss, ss, 0);
        func_0211366c(sys);
    }
    func_01ffa3d4(irq);
}

// job-queue: is queue running (data_02200040 != 0)
BOOL func_021269f8(void) {
    return data_02200040 != 0;
}

// job-queue: clear sentinel job (MI_CpuFill8 0, 0x20)
void func_021269e4(void *p) {
    func_02115fb4(p, 0, 0x20);
}

// job-queue: is job busy
BOOL func_021269cc(WJob *job) {
    return job->busy ? 1 : 0;
}

// job-queue thread: enqueue a job (priority insert; sentinel job shuts the queue down)
void func_0212683c(WJob *job, void (*pre)(WJob *), void (*post)(WJob *), u32 prio) {
    WSys *sys = data_02200040;
    u32 irq;
    if (func_021269f8() == 0) func_0206d49c();
    if (job->busy != 0) func_0206d49c();
    if (prio > 31) {
        u32 cur = func_0211337c(sys);
        if (prio == 32) {
            prio = cur != 0 ? cur - 1 : 0;
        } else if (prio == 33) {
            prio = cur < 31 ? cur + 1 : 31;
        } else if (prio == 34) {
            prio = cur;
        } else {
            prio = 31;
        }
    }
    irq = func_01ffa2ec();
    job->busy = 1;
    job->prio = prio;
    job->pre = pre;
    job->post = post;
    if (HEAD(sys) == 0) {
        if (job == &sys->sentinel) data_02200040 = 0;
        HEAD(sys) = job;
        func_0211366c(sys);
    } else {
        WJob *t = HEAD(sys);
        if (job == &sys->sentinel) {
            while (t->next != 0) t = t->next;
            t->next = job;
            data_02200040 = 0;
        } else if (t->prio > prio) {
            HEAD(sys) = job;
            job->next = t;
        } else {
            WJob *n;
            for (; (n = t->next) != 0 && n->prio <= prio; t = n) {
            }
            job->next = n;
            t->next = job;
        }
    }
    func_01ffa3d4(irq);
}

// job-queue thread: post the shutdown (sentinel) job
void func_021267e8(void (*post)(WJob *)) {
    u32 irq = func_01ffa2ec();
    if (func_021269f8() != 0) func_0212683c(&data_02200040->sentinel, 0, post, 0);
    func_01ffa3d4(irq);
}

// slot table: clear (MI_CpuFill8 0, 0x70)
void func_021267d4(void *p) {
    func_02115fb4(p, 0, 0x70);
}

// slot table: register a slot in the first free entry (Terminate if full)
void func_02126760(WSlotTab *t, u32 addr, u32 size, u8 *ptr, u32 state) {
    u32 irq = func_01ffa2ec();
    WSlot *e = t->slot;
    WSlot *end = t->slot + 4;
    for (;;) {
        if (e >= end) func_0206d49c();
        if (e->state == 0) {
            e->addr = addr;
            e->size = size;
            e->ptr = ptr;
            e->state = state;
            break;
        }
        e++;
    }
    func_01ffa3d4(irq);
}

// slot table: copy data out of the registered slot containing [addr, addr+len) (state >= 2)
BOOL func_021266c0(WSlotTab *t, u32 addr, void *src, u32 len) {
    BOOL ok = 0;
    u32 irq = func_01ffa2ec();
    WSlot *e = t->slot;
    WSlot *end = t->slot + 4;
    for (; e < end; e++) {
        if (e->state >= 2) {
            s32 off = addr - e->addr;
            if (off >= 0 && off + len <= e->size) {
                func_02116048(e->ptr + off, src, len);
                ok = 1;
                t->f0 = ok;
                break;
            }
        }
    }
    func_01ffa3d4(irq);
    return ok;
}

// select next set bit of a 16-bit mask, rotating from p->cur
BOOL func_02126644(WRot *p) {
    u32 mask = func_0211f800();
    u16 lr;
    u16 n;
    u16 cur;
    if (mask == 0) return 0;
    cur = p->cur;
    n = 0;
    lr = cur;
    do {
        if ((mask & (1 << (lr - 1))) != 0) {
            if (cur != lr) {
                p->cur = lr;
                break;
            }
        }
        n++;
        lr = lr == 16 ? 1 : lr + 1;
    } while (n < 16);
    return 1;
}

// wireless helper: BOOL query on state flags (f528==1 && f50c==0 && f526==0 && f52a!=0)
BOOL func_021265dc(void) {
    BOOL r = 0;
    BOOL b = 0;
    BOOL a = 0;
    WS18 *s = data_02200018;
    if (s->f528 == 1) {
        if (s->f50c == 0) a = 1;
    }
    if (a) {
        if (s->f526 == 0) b = 1;
    }
    if (b) {
        if (s->f52a != 0) r = 1;
    }
    return r;
}

// wireless helper: start sequence (issues WM calls with func_02125d0c as callback)
void func_02126568(void) {
    func_02124830(0x80, func_0211fb68((void *)func_02125d0c));
    func_02124830(0x1d, func_02121948((void *)func_02125d0c, data_0213c218, data_0213c210, data_0213c20c, data_0213c214));
}

// wireless helper (WH-style) WM completion callback; switch on WM API id (0 INITIALIZE, 1 RESET, 2 END, 7, 8, 13, 14, 15, 25, 29, 0x80 INDICATION)
void func_02125d0c(WMsg2 *m) {
    switch (m->id) {
    case 0:
        if (m->res != 0) {
            data_02200018->cb(0x100, m);
            return;
        }
        func_02126568();
        return;
    case 29:
        if (m->res != 0) {
            data_02200018->cb(0x100, m);
            return;
        }
        func_02124830(7, func_02120164((void *)func_02125d0c, data_02200018));
        return;
    case 7:
        data_02200018->cb(21, m);
        func_02124830(25, func_021219b4((void *)func_02125d0c, 1));
        return;
    case 25:
        if (m->res != 0) {
            data_02200018->cb(0x100, m);
            return;
        }
        func_02124830(8, func_021200b8((void *)func_02125d0c, data_0213c220));
        return;
    case 8:
        if (m->res != 0) {
            data_02200018->cb(0x100, m);
            return;
        }
        switch (m->f8) {
        case 0:
            data_02200018->f52a = 0;
            data_02200018->f528 = 0;
            return;
        case 7:
            if (data_02200018->f526 == 1) return;
            data_02200018->f52a |= 1 << m->f10;
            data_02200018->cb(0, m);
            if (data_02200018->f528 == 0 && ((WWork *)data_0220001c)->f131c == 0) {
                u16 x;
                ((WWork *)data_0220001c)->f131c = 1;
                x = (data_02200018->f52c == 0) ? 1 : 0;
                func_02124830(14, func_021206b4((void *)func_02125d0c, data_02200018->f504, data_02200018->f51a, data_02200018->f40, data_02200018->f518, x, 0, 0, 0, 1, 1));
                return;
            }
            if (func_021265dc() == 0) return;
            data_02200018->cb(25, 0);
            return;
        case 9:
            data_02200018->f52a &= ~(1 << m->f10);
            data_02200018->cb(1, m);
            return;
        case 2:
            if (data_02200018->f526 == 1) return;
            data_02200018->cb(0x1c, m);
            return;
        default:
            data_02200018->cb(0x100, m);
            return;
        }
    case 14:
        ((WWork *)data_0220001c)->f131c = 0;
        switch (m->sub) {
        case 10:
            data_02200018->f528 = 1;
            data_02200018->cb(25, 0);
            return;
        case 11:
            data_02200018->cb(3, *(u32 *)&m->f8);
            return;
        default:
            data_02200018->cb(0x100, m);
            return;
        }
    case 15: {
        u32 cnt;
        u32 i;
        if (W32(data_0220001c + 0x7000, 0x4c8) != 0) {
            i = cnt = 0;
            do {
                if (((WWork *)data_0220001c)->state[i] != 0) {
                    cnt++;
                    if (cnt >= 2) break;
                }
                i++;
            } while (i < 15);
            if (cnt == 1) func_01ffa494(0x32c8);
        }
        data_02200018->f50c = 0;
        if (m->res == 0) {
            data_02200018->cb(2, m);
            data_02200018->cb(25, 0);
            return;
        }
        if (m->res == 10) {
            data_02200018->cb(42, m);
            return;
        }
        data_02200018->cb(19, m);
        data_02200018->cb(25, 0);
        return;
    }
    case 1:
        if (W32(data_0220001c + 0x1000, 0x320) == 0) {
            if (m->res != 0) {
                data_02200018->f526 = 0;
                data_02200018->cb(0x100, m);
                return;
            }
            data_02200018->f52a = 0;
            data_02200018->f528 = 0;
            func_02124830(2, func_0212026c((void *)func_02125d0c));
            return;
        }
        func_0211fb0c(1, 0, 0);
        func_0211fb68(0);
    case 2:
        if (m->res != 0) {
            data_02200018->f526 = 0;
            data_02200018->cb(0x100, m);
            return;
        }
        data_02200018->f50d = 0;
        W16(data_0220001c + 0x1300, 0x16) = 0;
        data_02200018->cb(17, m);
        return;
    case 13:
        if (m->res != 0) return;
        data_02200018->f52a &= ~m->fa;
        return;
    case 128:
        switch (m->sub - 16) {
        case 0:
            data_02200018->cb(29, m);
            return;
        case 1:
            data_02200018->cb(31, m);
            return;
        case 2:
            data_02200018->cb(32, m);
            return;
        case 3:
            data_02200018->cb(33, m);
            return;
        case 6:
            func_0206d49c();
            return;
        case 4:
        case 5:
        case 7:
            break;
        }
        break;
    default:
        data_02200018->cb(0x100, m);
        break;
    }
}

// WM callback filter: on api 0x15 result 0 (excluding sub 7/9) forwards event 9 to the user callback
void func_02125c94(WMsg2 *m) {
    if (m->res != 0) return;
    if (m->sub == 7) return;
    if (m->sub == 9) return;
    if (m->sub != 21) return;
    data_02200018->cb(9, m);
}

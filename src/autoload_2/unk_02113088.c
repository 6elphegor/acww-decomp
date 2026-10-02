// mwcc-flags: -nothumb -O4,p
// NitroSDK OS (os_printf.c tail, os_thread.c, os_system.c, os_message.c, os_mutex.c): autoload_2 0x02113088-0x02114410.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;

typedef char *va_list;
#define va_start(ap, parm) ((ap) = (va_list)(((u32)&(parm)) & ~3) + 4)
#define va_end(ap)

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;

typedef struct {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;

typedef struct {
    u32 cpsr;
    u32 r[15];
    u32 pc_plus4;
    u32 sp_svc;
    u32 cp_context[7];
} OSContext;

struct OSThread {
    OSContext context;      // 0x00
    u32 state;              // 0x64: 0 waiting, 1 ready, 2 terminated
    OSThread *next;         // 0x68
    u32 id;                 // 0x6c
    u32 priority;           // 0x70
    void *profiler;         // 0x74
    OSThreadQueue *queue;   // 0x78
    OSThread *linkPrev;     // 0x7c
    OSThread *linkNext;     // 0x80
    void *mutex;            // 0x84
    OSMutex *mutexHead;     // 0x88
    OSMutex *mutexTail;     // 0x8c
    u32 stackTop;           // 0x90
    u32 stackBottom;        // 0x94
    u32 stackWarningOffset; // 0x98
    OSThreadQueue joinQueue; // 0x9c
    u32 specific[3];        // 0xa4
    void *alarm;            // 0xb0
    void (*destructor)(void *); // 0xb4
    u32 parameter;          // 0xb8
};

struct OSMutex {
    OSThreadQueue queue;    // 0x00
    OSThread *thread;       // 0x08
    s32 count;              // 0x0c
    OSMutex *next;          // 0x10
    OSMutex *prev;          // 0x14
};

typedef struct {
    OSThreadQueue sendQueue;
    OSThreadQueue recvQueue;
    void **msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;

typedef struct {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void (*switchCallback)(OSThread *, OSThread *);
} OSThreadInfo;

typedef struct {
    s32 len;
    char *ptr;
} StrBuf;

extern OSThreadInfo data_021fcc2c;
extern OSThread *data_021fcc30;
extern OSThread **data_021fcc24;
extern u32 data_021fcc14;
extern u32 data_021fcc18;
extern u32 data_021fcc1c;
extern void (*data_021fcc20)(OSThread *, OSThread *);
extern u32 data_021fcc28;
extern OSThread data_021fcc3c;
extern OSThread data_021fccfc;
extern u32 data_021fce84;
extern u32 data_0213bff0;
#define data_027fffa0 (*(OSThreadInfo * volatile *)0x027fffa0)

u32 func_01ffa2ec(void);
void func_01ffa3d4(u32 e);
u32 func_01ffa3b4(void);
u32 func_01ffa3cc(void);
void func_01ff8164(OSThread *t);
BOOL func_01ff81dc(OSThread *t);
void func_01ffa4ec(void *);
void func_0206d49c(void);
u32 func_021123d0(void);
u32 func_02112468(u32 addr);
u32 func_02112508(u32 id);
void func_02112528(u32 id);
void func_021127c0(char *dst, u32 len, const char *fmt, va_list ap);
void func_021152e4(void *alarm);
void func_0211512c(void *alarm, u32 tick, u32 period, void (*cb)(void *), void *arg);
void func_02115094(void *alarm);
void func_02115e64(u32 data, void *dest, u32 size);

void func_021136a0(OSThreadQueue *q);
void *func_0211328c(void (*cb)(OSThread *, OSThread *));
void func_021130b8(char *dst, const char *fmt, va_list ap);
void func_02113720(OSThreadQueue *q);
void func_02113554(void);
void func_0211366c(OSThread *t);
u32 func_02113254(void);
u32 func_0211321c(void);
void func_02113cc8(OSThread *t);
void func_02113d10(OSThread *t);
OSThread *func_02113da8(OSThreadQueue *q);
void func_02113ddc(OSThreadQueue *q, OSThread *t);
void func_02113e6c(OSContext *c, u32 pc, u32 sp);
void func_02113990(void *arg);
void func_02113944(void);
void func_021139d4(OSThread *t, void *arg);
void func_02113a44(void);
void func_021137c4(OSThread *t);
void func_02113214(OSThread *t, void (*d)(void *));
BOOL func_02113384(OSThread *t, u32 prio);
OSThread *func_02113640(void);
void func_021143c8(OSThread *t);
void func_02114330(OSThread *t, OSMutex *m);
OSMutex *func_02113d78(OSMutex **q);
u32 func_02113f04(void);
BOOL func_02113ed0(void);
u32 func_02113e54(void);
void func_021132c0(OSThread **p);
void func_0211366c(OSThread *t);
void func_021137f0(OSThread *t, void *arg, u32 prio);
u32 func_0211337c(OSThread *t);
void func_02113a70(OSThread *t, void (*f)(void *), void *arg, void *stack, u32 size, u32 prio);

// OS_CreateThread
void func_02113a70(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio) {
    u32 e = func_01ffa2ec();
    volatile u32 zero;
    u32 stackTop;
    u32 id = func_02113e54();
    thread->priority = prio;
    thread->id = id;
    thread->state = 0;
    thread->profiler = 0;
    func_02113d10(thread);
    thread->stackBottom = (u32)stack;
    stackTop = (u32)stack - stackSize;
    thread->stackTop = stackTop;
    thread->stackWarningOffset = 0;
    ((u32 *)thread->stackBottom)[-1] = 0xfddb597d;
    *(u32 *)thread->stackTop = 0x7bf9dd5b;
    thread->joinQueue.tail = 0;
    thread->joinQueue.head = thread->joinQueue.tail;
    func_02113e6c(&thread->context, (u32)func, (u32)stack - 4);
    thread->context.r[0] = (u32)arg;
    thread->context.r[14] = (u32)func_02113a44;
    zero = 0;
    func_02115e64(zero, (void *)(stackTop + 4), stackSize - 8);
    func_02113214(thread, 0);
    thread->queue = 0;
    thread->linkNext = 0;
    thread->linkPrev = thread->linkNext;
    thread->alarm = 0;
    func_01ffa3d4(e);
}

// OS_ExitThread
void func_02113a44(void) {
    func_01ffa2ec();
    func_021139d4(data_021fcc2c.current, 0);
}

// OSi_ExitThread_ARM
void func_021139d4(OSThread *t, void *arg) {
    if (data_021fcc14 != 0) {
        func_02113e6c(&t->context, (u32)func_02113990, data_021fcc14);
        t->context.r[0] = (u32)arg;
        t->context.cpsr |= 0x80;
        t->state = 1;
        func_01ff8164(t);
    } else {
        func_02113990(arg);
    }
}

// OSi_ExitThread_Callback
void func_02113990(void *arg) {
    OSThread *t = *data_021fcc24;
    void (*d)(void *) = t->destructor;
    if (d != 0) {
        t->destructor = 0;
        d(arg);
        func_01ffa2ec();
    }
    func_02113944();
}

// OSi_ExitThread_Destroy
void func_02113944(void) {
    OSThread *t = *data_021fcc24;
    func_02113254();
    func_021143c8(t);
    func_02113cc8(t);
    t->state = 2;
    func_021136a0(&t->joinQueue);
    func_0211321c();
    func_02113554();
    func_0206d49c();
}

// OS_DestroyThread
void func_021138d0(OSThread *t) {
    u32 e = func_01ffa2ec();
    if (data_021fcc2c.current == t) func_02113944();
    func_02113254();
    func_021143c8(t);
    func_021137c4(t);
    func_02113cc8(t);
    t->state = 2;
    func_021136a0(&t->joinQueue);
    func_0211321c();
    func_01ffa3d4(e);
    func_02113554();
}

// OS_KillThread
void func_021138a0(OSThread *t, void *arg) {
    func_021137f0(t, arg, func_0211337c(t));
}

// OSi_KillThreadWithPriority
void func_021137f0(OSThread *t, void *arg, u32 prio) {
    u32 e = func_01ffa2ec();
    u32 sp;
    if (t == data_021fcc2c.current) func_021139d4(t, arg);
    func_021137c4(t);
    sp = data_021fcc14;
    if (sp == 0) sp = t->stackBottom - 4;
    func_02113e6c(&t->context, (u32)func_02113990, sp);
    t->context.r[0] = (u32)arg;
    t->context.cpsr |= 0x80;
    t->state = 1;
    func_02113254();
    func_02113384(t, prio);
    func_0211321c();
    func_02113554();
    func_01ffa3d4(e);
}

// OSi_CancelThreadAlarm
void func_021137c4(OSThread *t) {
    if (t->alarm == 0) return;
    func_02115094(t->alarm);
}

// OS_JoinThread
void func_02113788(OSThread *t) {
    u32 e = func_01ffa2ec();
    if (t->state != 2) func_02113720(&t->joinQueue);
    func_01ffa3d4(e);
}

// OS_IsThreadTerminated
BOOL func_02113774(OSThread *t) {
    return t->state == 2;
}

// OS_SleepThread
void func_02113720(OSThreadQueue *q) {
    u32 e = func_01ffa2ec();
    OSThread *cur = *data_021fcc24;
    if (q != 0) {
        cur->queue = q;
        func_02113ddc(q, cur);
    }
    cur->state = 0;
    func_02113554();
    func_01ffa3d4(e);
}

// OS_WakeupThread
void func_021136a0(OSThreadQueue *q) {
    u32 e = func_01ffa2ec();
    if (q->head != 0) {
        while (q->head != 0) {
            OSThread *t = func_02113da8(q);
            t->state = 1;
            t->queue = 0;
            t->linkNext = 0;
            t->linkPrev = t->linkNext;
        }
        q->tail = 0;
        q->head = q->tail;
        func_02113554();
    }
    func_01ffa3d4(e);
}

// OS_WakeupThreadDirect
void func_0211366c(OSThread *t) {
    u32 e = func_01ffa2ec();
    t->state = 1;
    func_02113554();
    func_01ffa3d4(e);
}

// OSi_SelectThread
OSThread *func_02113640(void) {
    OSThread *t = data_021fcc2c.list;
    while (t != 0 && t->state != 1) t = t->next;
    return t;
}

// OS_RescheduleThread
void func_02113554(void) {
    OSThread *cur;
    OSThread *next;
    OSThreadInfo *ti = &data_021fcc2c;
    if (data_021fcc18 != 0) return;
    if (ti->irqDepth != 0 || func_01ffa3b4() == 0x12) {
        ti->isNeedRescheduling = 1;
        return;
    }
    cur = *data_021fcc24;
    next = func_02113640();
    if (cur == next) return;
    if (next == 0) return;
    if (cur->state != 2 && func_01ff81dc(cur) != 0) return;
    if (data_021fcc20 != 0) data_021fcc20(cur, next);
    if (ti->switchCallback != 0) ti->switchCallback(cur, next);
    data_021fcc2c.current = next;
    func_01ff8164(next);
}

// OS_YieldThread
void func_02113498(void) {
    OSThread *cur = data_021fcc2c.current;
    OSThread *prevCur = 0;
    OSThread *last = 0;
    OSThread *prev;
    OSThread *t;
    s32 n = 0;
    u32 e = func_01ffa2ec();
    for (prev = 0, t = data_021fcc2c.list; t != 0; prev = t, t = t->next) {
        if (t == cur) prevCur = prev;
        if (cur->priority == t->priority) {
            last = t;
            n++;
        }
    }
    if (n <= 1 || last == cur) {
        func_01ffa3d4(e);
        return;
    }
    if (prevCur == 0) data_021fcc2c.list = cur->next;
    else prevCur->next = cur->next;
    cur->next = last->next;
    last->next = cur;
    func_02113554();
    func_01ffa3d4(e);
}

// OS_CheckStack
u32 func_02113438(OSThread *t) {
    u32 *top = (u32 *)t->stackTop;
    if (*top != 0x7bf9dd5b) return 1;
    if (t->stackWarningOffset != 0) {
        if (*(u32 *)((u8 *)top + t->stackWarningOffset) != 0x597dfbd9) return 2;
    }
    if (((u32 *)t->stackBottom)[-1] != 0xfddb597d) return 3;
    return 0;
}

// OS_SetThreadPriority
BOOL func_02113384(OSThread *thread, u32 prio) {
    OSThread *t = data_021fcc2c.list;
    OSThread *prev = 0;
    u32 e = func_01ffa2ec();
    for (; t != 0 && t != thread; prev = t, t = t->next) {}
    if (t == 0 || t == &data_021fcc3c) {
        func_01ffa3d4(e);
        return 0;
    }
    if (t->priority != prio) {
        if (prev == 0) data_021fcc2c.list = thread->next;
        else prev->next = thread->next;
        thread->priority = prio;
        func_02113d10(thread);
        func_02113554();
    }
    func_01ffa3d4(e);
    return 1;
}

// OS_GetThreadPriority
u32 func_0211337c(OSThread *t) {
    return t->priority;
}

// OS_Sleep
void func_021132e0(u32 msec) {
    u32 alarm[11];
    OSThread *thread;
    u32 e;
    func_021152e4(alarm);
    thread = *data_021fcc24;
    e = func_01ffa2ec();
    thread->alarm = alarm;
    func_0211512c(alarm, (msec * 0x82ea) >> 6, 0, (void (*)(void *))func_021132c0, &thread);
    while (thread != 0) func_02113720(0);
    func_01ffa3d4(e);
}

// OSi_SleepAlarmCallback
void func_021132c0(OSThread **p) {
    OSThread *t = *p;
    *p = 0;
    t->alarm = 0;
    func_0211366c(t);
}

// OS_SetSwitchThreadCallback
void *func_0211328c(void (*cb)(OSThread *, OSThread *)) {
    void (*old)(OSThread *, OSThread *);
    /* returns previous callback */
    u32 e = func_01ffa2ec();
    old = data_021fcc2c.switchCallback;
    data_021fcc2c.switchCallback = cb;
    func_01ffa3d4(e);
    return old;
}

// OS_DisableScheduler
u32 func_02113254(void) {
    u32 e = func_01ffa2ec();
    u32 old;
    if (data_021fcc18 < 0xffffffff) {
        old = data_021fcc18;
        data_021fcc18 = old + 1;
    }
    func_01ffa3d4(e);
    return old;
}

// OS_EnableScheduler
u32 func_0211321c(void) {
    u32 e = func_01ffa2ec();
    u32 old = 0;
    if (data_021fcc18 != 0) {
        old = data_021fcc18;
        data_021fcc18 = old - 1;
    }
    func_01ffa3d4(e);
    return old;
}

// OS_SetThreadDestructor
void func_02113214(OSThread *t, void (*d)(void *)) {
    t->destructor = d;
}

// OS_SetThreadParameter (thread+0xb8)
void func_0211320c(OSThread *t, u32 v) {
    t->parameter = v;
}

// OS_GetThreadParameter (thread+0xb8)
u32 func_02113204(OSThread *t) {
    return t->parameter;
}

// OS_IsThreadAvailable
u32 func_021131f4(void) {
    return data_021fcc28;
}

// OS_VSNPrintf string-buffer sink: append one char
void func_021131c8(StrBuf *p, int c) {
    if (p->len != 0) {
        *p->ptr = c;
        p->len--;
    }
    p->ptr++;
}

// OS_VSNPrintf string-buffer sink: append n copies of c
void func_02113160(StrBuf *p, char c, s32 n) {
    u32 i;
    u32 m;
    if (n <= 0) return;
    m = p->len;
    if (m > n) m = n;
    for (i = 0; i < m; i++) p->ptr[i] = c;
    p->len -= m;
    p->ptr += n;
}

// OS_VSNPrintf string-buffer sink: append n chars
void func_02113100(StrBuf *p, const char *s, s32 n) {
    u32 i;
    u32 m;
    if (n <= 0) return;
    m = p->len;
    if (m > n) m = n;
    for (i = 0; i < m; i++) p->ptr[i] = s[i];
    p->len -= m;
    p->ptr += n;
}

// OS_SPrintf
void func_021130d0(char *dst, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_021130b8(dst, fmt, va);
    va_end(va);
}

// OS_VSPrintf
void func_021130b8(char *dst, const char *fmt, va_list ap) {
    func_021127c0(dst, 0x7fffffff, fmt, ap);
}

// OS_SNPrintf
void func_02113088(char *dst, u32 len, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    func_021127c0(dst, len, fmt, va);
    va_end(va);
}


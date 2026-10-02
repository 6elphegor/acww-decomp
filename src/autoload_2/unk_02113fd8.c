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

// OSi_UnlockAllMutex
void func_021143c8(OSThread *t) {
    OSMutex **q;
    if (t->mutexHead == 0) return;
    q = &t->mutexHead;
    do {
        OSMutex *m = func_02113d78(q);
        m->count = 0;
        m->thread = 0;
        func_021136a0(&m->queue);
    } while (t->mutexHead != 0);
}

// OS_TryLockMutex
BOOL func_02114354(OSMutex *m) {
    BOOL r;
    u32 e = func_01ffa2ec();
    OSThread *cur = data_021fcc2c.current;
    if (m->thread == 0) {
        m->thread = cur;
        m->count++;
        func_02114330(cur, m);
        r = 1;
    } else if (m->thread == cur) {
        m->count++;
        r = 1;
    } else {
        r = 0;
    }
    func_01ffa3d4(e);
    return r;
}

// OSi_AddMutexToQueue
void func_02114330(OSThread *t, OSMutex *m) {
    OSMutex *tail = t->mutexTail;
    if (tail == 0) t->mutexHead = m;
    else tail->next = m;
    m->prev = tail;
    m->next = 0;
    t->mutexTail = m;
}

// OSi_RemoveMutexFromQueue
void func_0211430c(OSThread *t, OSMutex *m) {
    OSMutex *next = m->next;
    OSMutex *prev = m->prev;
    if (next == 0) t->mutexTail = prev;
    else next->prev = prev;
    if (prev == 0) t->mutexHead = next;
    else prev->next = next;
}

// OS_InitMessageQueue
void func_021142dc(OSMessageQueue *mq, void **buf, s32 count) {
    mq->sendQueue.tail = 0;
    mq->sendQueue.head = mq->sendQueue.tail;
    mq->recvQueue.tail = 0;
    mq->recvQueue.head = mq->recvQueue.tail;
    mq->msgArray = buf;
    mq->msgCount = count;
    mq->firstIndex = 0;
    mq->usedCount = 0;
}

// OS_SendMessage
BOOL func_02114234(OSMessageQueue *mq, void *msg, s32 flags) {
    u32 e = func_01ffa2ec();
    while (mq->msgCount <= mq->usedCount) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        func_02113720(&mq->sendQueue);
    }
    mq->msgArray[(mq->firstIndex + mq->usedCount) % mq->msgCount] = msg;
    mq->usedCount++;
    func_021136a0(&mq->recvQueue);
    func_01ffa3d4(e);
    return 1;
}

// OS_ReceiveMessage
BOOL func_02114188(OSMessageQueue *mq, void **msg, s32 flags) {
    u32 e = func_01ffa2ec();
    while (mq->usedCount == 0) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        func_02113720(&mq->recvQueue);
    }
    if (msg != 0) *msg = mq->msgArray[mq->firstIndex];
    mq->firstIndex = (mq->firstIndex + 1) % mq->msgCount;
    mq->usedCount--;
    func_021136a0(&mq->sendQueue);
    func_01ffa3d4(e);
    return 1;
}

// OS_JamMessage
BOOL func_021140d4(OSMessageQueue *mq, void *msg, s32 flags) {
    u32 e = func_01ffa2ec();
    while (mq->msgCount <= mq->usedCount) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        func_02113720(&mq->sendQueue);
    }
    mq->firstIndex = (mq->firstIndex + mq->msgCount - 1) % mq->msgCount;
    mq->msgArray[mq->firstIndex] = msg;
    mq->usedCount++;
    func_021136a0(&mq->recvQueue);
    func_01ffa3d4(e);
    return 1;
}

// OS_ReadMessage
BOOL func_02114050(OSMessageQueue *mq, void **msg, s32 flags) {
    u32 e = func_01ffa2ec();
    while (mq->usedCount == 0) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        func_02113720(&mq->recvQueue);
    }
    if (msg != 0) *msg = mq->msgArray[mq->firstIndex];
    func_01ffa3d4(e);
    return 1;
}

// OS_GetConsoleType
u32 func_02113fd8(void) {
    if (data_0213bff0 == 0xffffffff) {
        u32 base = func_02113f04();
        u32 v;
        if (func_01ffa3cc() != 0) v = base | 0x10000000;
        else if (func_02113ed0() != 0) v = base | 0x40000000;
        else if (base & 0x01000000) v = base | 0x20000000;
        else v = base | 0x80000000;
        data_0213bff0 = v | *(volatile u16 *)0x027ffffa;
    }
    return data_0213bff0;
}


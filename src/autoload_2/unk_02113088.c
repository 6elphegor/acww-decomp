#include "sys/OSThread.h"
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

u32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32 e);
u32 OS_GetProcMode(void);
u32 OS_IsRunOnEmulator(void);
void OS_LoadContext(OSThread *t);
BOOL OS_SaveContext(OSThread *t);
void func_01ffa4ec(void *);
void Fatal_Trap(void);
u32 OS_GetLockID(void);
u32 OS_ReadOwnerOfLockWord(u32 addr);
u32 OS_TryLockCartridge(u32 id);
void OS_UnlockCartridge(u32 id);
void OS_VSNPrintf(char *dst, u32 len, const char *fmt, va_list ap);
void OS_CreateAlarm(void *alarm);
void OS_SetAlarm(void *alarm, u32 tick, u32 period, void (*cb)(void *), void *arg);
void OS_CancelAlarm(void *alarm);
void MIi_CpuClear32(u32 data, void *dest, u32 size);

void OS_WakeupThread(OSThreadQueue *q);
void *OS_SetSwitchThreadCallback(void (*cb)(OSThread *, OSThread *));
void OS_VSPrintf(char *dst, const char *fmt, va_list ap);
void OS_SleepThread(OSThreadQueue *q);
void OSi_RescheduleThread(void);
void OS_WakeupThreadDirect(OSThread *t);
u32 OS_DisableScheduler(void);
u32 OS_EnableScheduler(void);
void OSi_RemoveThreadFromList(OSThread *t);
void OSi_InsertThreadToList(OSThread *t);
OSThread *OSi_RemoveLinkFromQueue(OSThreadQueue *q);
void OSi_InsertLinkToQueue(OSThreadQueue *q, OSThread *t);
void OS_InitContext(OSContext *c, u32 pc, u32 sp);
void OSi_ExitThread(void *arg);
void OSi_ExitThread_Destroy(void);
void OSi_ExitThread_ArgSpecified(OSThread *t, void *arg);
void OS_ExitThread(void);
void OSi_CancelThreadAlarmForSleep(OSThread *t);
void OS_SetThreadDestructor(OSThread *t, void (*d)(void *));
BOOL OS_SetThreadPriority(OSThread *t, u32 prio);
OSThread *OS_SelectThread(void);
void OSi_UnlockAllMutex(OSThread *t);
void OSi_EnqueueTail(OSThread *t, OSMutex *m);
OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutex **q);
u32 func_02113f04(void);
BOOL func_02113ed0(void);
u32 OSi_GetUnusedThreadId(void);
void OSi_SleepAlarmCallback(OSThread **p);
void OS_WakeupThreadDirect(OSThread *t);
void OS_KillThreadWithPriority(OSThread *t, void *arg, u32 prio);
u32 OS_GetThreadPriority(OSThread *t);
void OS_CreateThread(OSThread *t, void (*f)(void *), void *arg, void *stack, u32 size, u32 prio);

// OS_CreateThread
void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio) {
    u32 e = OS_DisableInterrupts();
    volatile u32 zero;
    u32 stackTop;
    u32 id = OSi_GetUnusedThreadId();
    thread->priority = prio;
    thread->id = id;
    thread->state = 0;
    thread->profiler = 0;
    OSi_InsertThreadToList(thread);
    thread->stackBottom = (u32)stack;
    stackTop = (u32)stack - stackSize;
    thread->stackTop = stackTop;
    thread->stackWarningOffset = 0;
    ((u32 *)thread->stackBottom)[-1] = 0xfddb597d;
    *(u32 *)thread->stackTop = 0x7bf9dd5b;
    thread->joinQueue.tail = 0;
    thread->joinQueue.head = thread->joinQueue.tail;
    OS_InitContext(&thread->context, (u32)func, (u32)stack - 4);
    thread->context.r[0] = (u32)arg;
    thread->context.r[14] = (u32)OS_ExitThread;
    zero = 0;
    MIi_CpuClear32(zero, (void *)(stackTop + 4), stackSize - 8);
    OS_SetThreadDestructor(thread, 0);
    thread->queue = 0;
    thread->linkNext = 0;
    thread->linkPrev = thread->linkNext;
    thread->alarm = 0;
    OS_RestoreInterrupts(e);
}

// OS_ExitThread
void OS_ExitThread(void) {
    OS_DisableInterrupts();
    OSi_ExitThread_ArgSpecified(data_021fcc2c.current, 0);
}

// OSi_ExitThread_ARM
void OSi_ExitThread_ArgSpecified(OSThread *t, void *arg) {
    if (data_021fcc14 != 0) {
        OS_InitContext(&t->context, (u32)OSi_ExitThread, data_021fcc14);
        t->context.r[0] = (u32)arg;
        t->context.cpsr |= 0x80;
        t->state = 1;
        OS_LoadContext(t);
    } else {
        OSi_ExitThread(arg);
    }
}

// OSi_ExitThread_Callback
void OSi_ExitThread(void *arg) {
    OSThread *t = *data_021fcc24;
    void (*d)(void *) = t->destructor;
    if (d != 0) {
        t->destructor = 0;
        d(arg);
        OS_DisableInterrupts();
    }
    OSi_ExitThread_Destroy();
}

// OSi_ExitThread_Destroy
void OSi_ExitThread_Destroy(void) {
    OSThread *t = *data_021fcc24;
    OS_DisableScheduler();
    OSi_UnlockAllMutex(t);
    OSi_RemoveThreadFromList(t);
    t->state = 2;
    OS_WakeupThread(&t->joinQueue);
    OS_EnableScheduler();
    OSi_RescheduleThread();
    Fatal_Trap();
}

// OS_DestroyThread
void OS_DestroyThread(OSThread *t) {
    u32 e = OS_DisableInterrupts();
    if (data_021fcc2c.current == t) OSi_ExitThread_Destroy();
    OS_DisableScheduler();
    OSi_UnlockAllMutex(t);
    OSi_CancelThreadAlarmForSleep(t);
    OSi_RemoveThreadFromList(t);
    t->state = 2;
    OS_WakeupThread(&t->joinQueue);
    OS_EnableScheduler();
    OS_RestoreInterrupts(e);
    OSi_RescheduleThread();
}

// OS_KillThread
void OS_KillThread(OSThread *t, void *arg) {
    OS_KillThreadWithPriority(t, arg, OS_GetThreadPriority(t));
}

// OSi_KillThreadWithPriority
void OS_KillThreadWithPriority(OSThread *t, void *arg, u32 prio) {
    u32 e = OS_DisableInterrupts();
    u32 sp;
    if (t == data_021fcc2c.current) OSi_ExitThread_ArgSpecified(t, arg);
    OSi_CancelThreadAlarmForSleep(t);
    sp = data_021fcc14;
    if (sp == 0) sp = t->stackBottom - 4;
    OS_InitContext(&t->context, (u32)OSi_ExitThread, sp);
    t->context.r[0] = (u32)arg;
    t->context.cpsr |= 0x80;
    t->state = 1;
    OS_DisableScheduler();
    OS_SetThreadPriority(t, prio);
    OS_EnableScheduler();
    OSi_RescheduleThread();
    OS_RestoreInterrupts(e);
}

// OSi_CancelThreadAlarm
void OSi_CancelThreadAlarmForSleep(OSThread *t) {
    if (t->alarm == 0) return;
    OS_CancelAlarm(t->alarm);
}

// OS_JoinThread
void OS_JoinThread(OSThread *t) {
    u32 e = OS_DisableInterrupts();
    if (t->state != 2) OS_SleepThread(&t->joinQueue);
    OS_RestoreInterrupts(e);
}

// OS_IsThreadTerminated
BOOL OS_IsThreadTerminated(OSThread *t) {
    return t->state == 2;
}

// OS_SleepThread
void OS_SleepThread(OSThreadQueue *q) {
    u32 e = OS_DisableInterrupts();
    OSThread *cur = *data_021fcc24;
    if (q != 0) {
        cur->queue = q;
        OSi_InsertLinkToQueue(q, cur);
    }
    cur->state = 0;
    OSi_RescheduleThread();
    OS_RestoreInterrupts(e);
}

// OS_WakeupThread
void OS_WakeupThread(OSThreadQueue *q) {
    u32 e = OS_DisableInterrupts();
    if (q->head != 0) {
        while (q->head != 0) {
            OSThread *t = OSi_RemoveLinkFromQueue(q);
            t->state = 1;
            t->queue = 0;
            t->linkNext = 0;
            t->linkPrev = t->linkNext;
        }
        q->tail = 0;
        q->head = q->tail;
        OSi_RescheduleThread();
    }
    OS_RestoreInterrupts(e);
}

// OS_WakeupThreadDirect
void OS_WakeupThreadDirect(OSThread *t) {
    u32 e = OS_DisableInterrupts();
    t->state = 1;
    OSi_RescheduleThread();
    OS_RestoreInterrupts(e);
}

// OSi_SelectThread
OSThread *OS_SelectThread(void) {
    OSThread *t = data_021fcc2c.list;
    while (t != 0 && t->state != 1) t = t->next;
    return t;
}

// OS_RescheduleThread
void OSi_RescheduleThread(void) {
    OSThread *cur;
    OSThread *next;
    OSThreadInfo *ti = &data_021fcc2c;
    if (data_021fcc18 != 0) return;
    if (ti->irqDepth != 0 || OS_GetProcMode() == 0x12) {
        ti->isNeedRescheduling = 1;
        return;
    }
    cur = *data_021fcc24;
    next = OS_SelectThread();
    if (cur == next) return;
    if (next == 0) return;
    if (cur->state != 2 && OS_SaveContext(cur) != 0) return;
    if (data_021fcc20 != 0) data_021fcc20(cur, next);
    if (ti->switchCallback != 0) ti->switchCallback(cur, next);
    data_021fcc2c.current = next;
    OS_LoadContext(next);
}

// OS_YieldThread
void OS_YieldThread(void) {
    OSThread *cur = data_021fcc2c.current;
    OSThread *prevCur = 0;
    OSThread *last = 0;
    OSThread *prev;
    OSThread *t;
    s32 n = 0;
    u32 e = OS_DisableInterrupts();
    for (prev = 0, t = data_021fcc2c.list; t != 0; prev = t, t = t->next) {
        if (t == cur) prevCur = prev;
        if (cur->priority == t->priority) {
            last = t;
            n++;
        }
    }
    if (n <= 1 || last == cur) {
        OS_RestoreInterrupts(e);
        return;
    }
    if (prevCur == 0) data_021fcc2c.list = cur->next;
    else prevCur->next = cur->next;
    cur->next = last->next;
    last->next = cur;
    OSi_RescheduleThread();
    OS_RestoreInterrupts(e);
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
BOOL OS_SetThreadPriority(OSThread *thread, u32 prio) {
    OSThread *t = data_021fcc2c.list;
    OSThread *prev = 0;
    u32 e = OS_DisableInterrupts();
    for (; t != 0 && t != thread; prev = t, t = t->next) {}
    if (t == 0 || t == &data_021fcc3c) {
        OS_RestoreInterrupts(e);
        return 0;
    }
    if (t->priority != prio) {
        if (prev == 0) data_021fcc2c.list = thread->next;
        else prev->next = thread->next;
        thread->priority = prio;
        OSi_InsertThreadToList(thread);
        OSi_RescheduleThread();
    }
    OS_RestoreInterrupts(e);
    return 1;
}

// OS_GetThreadPriority
u32 OS_GetThreadPriority(OSThread *t) {
    return t->priority;
}

// OS_Sleep
void OS_Sleep(u32 msec) {
    u32 alarm[11];
    OSThread *thread;
    u32 e;
    OS_CreateAlarm(alarm);
    thread = *data_021fcc24;
    e = OS_DisableInterrupts();
    thread->alarm = alarm;
    OS_SetAlarm(alarm, (msec * 0x82ea) >> 6, 0, (void (*)(void *))OSi_SleepAlarmCallback, &thread);
    while (thread != 0) OS_SleepThread(0);
    OS_RestoreInterrupts(e);
}

// OSi_SleepAlarmCallback
void OSi_SleepAlarmCallback(OSThread **p) {
    OSThread *t = *p;
    *p = 0;
    t->alarm = 0;
    OS_WakeupThreadDirect(t);
}

// OS_SetSwitchThreadCallback
void *OS_SetSwitchThreadCallback(void (*cb)(OSThread *, OSThread *)) {
    void (*old)(OSThread *, OSThread *);
    /* returns previous callback */
    u32 e = OS_DisableInterrupts();
    old = data_021fcc2c.switchCallback;
    data_021fcc2c.switchCallback = cb;
    OS_RestoreInterrupts(e);
    return old;
}

// OS_DisableScheduler
u32 OS_DisableScheduler(void) {
    u32 e = OS_DisableInterrupts();
    u32 old;
    if (data_021fcc18 < 0xffffffff) {
        old = data_021fcc18;
        data_021fcc18 = old + 1;
    }
    OS_RestoreInterrupts(e);
    return old;
}

// OS_EnableScheduler
u32 OS_EnableScheduler(void) {
    u32 e = OS_DisableInterrupts();
    u32 old = 0;
    if (data_021fcc18 != 0) {
        old = data_021fcc18;
        data_021fcc18 = old - 1;
    }
    OS_RestoreInterrupts(e);
    return old;
}

// OS_SetThreadDestructor
void OS_SetThreadDestructor(OSThread *t, void (*d)(void *)) {
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
void string_put_char(StrBuf *p, int c) {
    if (p->len != 0) {
        *p->ptr = c;
        p->len--;
    }
    p->ptr++;
}

// OS_VSNPrintf string-buffer sink: append n copies of c
void string_fill_char(StrBuf *p, char c, s32 n) {
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
void string_put_string(StrBuf *p, const char *s, s32 n) {
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
void OS_SPrintf(char *dst, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    OS_VSPrintf(dst, fmt, va);
    va_end(va);
}

// OS_VSPrintf
void OS_VSPrintf(char *dst, const char *fmt, va_list ap) {
    OS_VSNPrintf(dst, 0x7fffffff, fmt, ap);
}

// OS_SNPrintf
void OS_SNPrintf(char *dst, u32 len, const char *fmt, ...) {
    va_list va;
    va_start(va, fmt);
    OS_VSNPrintf(dst, len, fmt, va);
    va_end(va);
}


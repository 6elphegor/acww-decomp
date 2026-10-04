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
void OSi_IdleThreadProc(void *);
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

// OSi_IncrementThreadId
u32 OSi_GetUnusedThreadId(void) {
    data_021fcc1c++;
    return data_021fcc1c;
}

// OSi_EnqueueThread
void OSi_InsertLinkToQueue(OSThreadQueue *q, OSThread *thread) {
    OSThread *cur = q->head;
    OSThread *prev;
    for (; cur != 0 && cur->priority <= thread->priority; cur = cur->linkNext) {
        if (cur == thread) return;
    }
    if (cur == 0) {
        prev = q->tail;
        if (prev == 0) q->head = thread;
        else prev->linkNext = thread;
        thread->linkPrev = prev;
        thread->linkNext = 0;
        q->tail = thread;
        return;
    }
    prev = cur->linkPrev;
    if (prev == 0) q->head = thread;
    else prev->linkNext = thread;
    thread->linkPrev = prev;
    thread->linkNext = cur;
    cur->linkPrev = thread;
}

// OSi_DequeueThread
OSThread *OSi_RemoveLinkFromQueue(OSThreadQueue *q) {
    OSThread *t = q->head;
    if (t != 0) {
        OSThread *n = t->linkNext;
        q->head = n;
        if (n != 0) n->linkPrev = 0;
        else {
            q->tail = 0;
            t->queue = 0;
        }
    }
    return t;
}

// OSi_DequeueItem (mutex queue)
OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutex **q) {
    OSMutex *m = q[0];
    if (m != 0) {
        OSMutex *n = m->next;
        q[0] = n;
        if (n != 0) n->prev = 0;
        else q[1] = 0;
    }
    return m;
}

// OSi_InsertThreadToList
void OSi_InsertThreadToList(OSThread *thread) {
    OSThread *t;
    OSThread *prev;
    OSThread *head;
    prev = 0;
    head = data_021fcc2c.list;
    t = head;
    while (t != 0 && t->priority < thread->priority) {
        prev = t;
        t = t->next;
    }
    if (prev == 0) {
        thread->next = head;
        data_021fcc2c.list = thread;
    } else {
        thread->next = prev->next;
        prev->next = thread;
    }
}

// OSi_RemoveThreadFromList
void OSi_RemoveThreadFromList(OSThread *thread) {
    OSThread *prev = 0;
    OSThread *t = data_021fcc2c.list;
    for (; t != 0 && t != thread; prev = t, t = t->next) {}
    if (prev == 0) data_021fcc2c.list = thread->next;
    else prev->next = thread->next;
}


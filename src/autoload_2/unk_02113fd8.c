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

// OSi_UnlockAllMutex
void OSi_UnlockAllMutex(OSThread *t) {
    OSMutex **q;
    if (t->mutexHead == 0) return;
    q = &t->mutexHead;
    do {
        OSMutex *m = OSi_RemoveMutexLinkFromQueue(q);
        m->count = 0;
        m->thread = 0;
        OS_WakeupThread(&m->queue);
    } while (t->mutexHead != 0);
}

// OS_TryLockMutex
BOOL OS_TryLockMutex(OSMutex *m) {
    BOOL r;
    u32 e = OS_DisableInterrupts();
    OSThread *cur = data_021fcc2c.current;
    if (m->thread == 0) {
        m->thread = cur;
        m->count++;
        OSi_EnqueueTail(cur, m);
        r = 1;
    } else if (m->thread == cur) {
        m->count++;
        r = 1;
    } else {
        r = 0;
    }
    OS_RestoreInterrupts(e);
    return r;
}

// OSi_AddMutexToQueue
void OSi_EnqueueTail(OSThread *t, OSMutex *m) {
    OSMutex *tail = t->mutexTail;
    if (tail == 0) t->mutexHead = m;
    else tail->next = m;
    m->prev = tail;
    m->next = 0;
    t->mutexTail = m;
}

// OSi_RemoveMutexFromQueue
void OSi_DequeueItem(OSThread *t, OSMutex *m) {
    OSMutex *next = m->next;
    OSMutex *prev = m->prev;
    if (next == 0) t->mutexTail = prev;
    else next->prev = prev;
    if (prev == 0) t->mutexHead = next;
    else prev->next = next;
}

// OS_InitMessageQueue
void OS_InitMessageQueue(OSMessageQueue *mq, void **buf, s32 count) {
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
BOOL OS_SendMessage(OSMessageQueue *mq, void *msg, s32 flags) {
    u32 e = OS_DisableInterrupts();
    while (mq->msgCount <= mq->usedCount) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(e);
            return 0;
        }
        OS_SleepThread(&mq->sendQueue);
    }
    mq->msgArray[(mq->firstIndex + mq->usedCount) % mq->msgCount] = msg;
    mq->usedCount++;
    OS_WakeupThread(&mq->recvQueue);
    OS_RestoreInterrupts(e);
    return 1;
}

// OS_ReceiveMessage
BOOL OS_ReceiveMessage(OSMessageQueue *mq, void **msg, s32 flags) {
    u32 e = OS_DisableInterrupts();
    while (mq->usedCount == 0) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(e);
            return 0;
        }
        OS_SleepThread(&mq->recvQueue);
    }
    if (msg != 0) *msg = mq->msgArray[mq->firstIndex];
    mq->firstIndex = (mq->firstIndex + 1) % mq->msgCount;
    mq->usedCount--;
    OS_WakeupThread(&mq->sendQueue);
    OS_RestoreInterrupts(e);
    return 1;
}

// OS_JamMessage
BOOL OS_JamMessage(OSMessageQueue *mq, void *msg, s32 flags) {
    u32 e = OS_DisableInterrupts();
    while (mq->msgCount <= mq->usedCount) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(e);
            return 0;
        }
        OS_SleepThread(&mq->sendQueue);
    }
    mq->firstIndex = (mq->firstIndex + mq->msgCount - 1) % mq->msgCount;
    mq->msgArray[mq->firstIndex] = msg;
    mq->usedCount++;
    OS_WakeupThread(&mq->recvQueue);
    OS_RestoreInterrupts(e);
    return 1;
}

// OS_ReadMessage
BOOL OS_ReadMessage(OSMessageQueue *mq, void **msg, s32 flags) {
    u32 e = OS_DisableInterrupts();
    while (mq->usedCount == 0) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(e);
            return 0;
        }
        OS_SleepThread(&mq->recvQueue);
    }
    if (msg != 0) *msg = mq->msgArray[mq->firstIndex];
    OS_RestoreInterrupts(e);
    return 1;
}

// OS_GetConsoleType
u32 func_02113fd8(void) {
    if (data_0213bff0 == 0xffffffff) {
        u32 base = func_02113f04();
        u32 v;
        if (OS_IsRunOnEmulator() != 0) v = base | 0x10000000;
        else if (func_02113ed0() != 0) v = base | 0x40000000;
        else if (base & 0x01000000) v = base | 0x20000000;
        else v = base | 0x80000000;
        data_0213bff0 = v | *(volatile u16 *)0x027ffffa;
    }
    return data_0213bff0;
}

// ---- file-scope objects (.data 0x0213bff0-0x0213bff4)
u32 data_0213bff0 = 0xffffffff;

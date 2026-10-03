// mwcc-flags: -nothumb -O4,p
// NitroSDK OS mutex (os_mutex.c): autoload_2 0x02114410-0x02114528. ARM code, mwcc 1.2/base.
typedef unsigned int u32;
typedef int s32;

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef struct {
    volatile OSThread *head;
    volatile OSThread *tail;
} OSThreadQueue;
struct OSThread {
    u32 pad[33];
    OSMutex *mutex; // 0x84
};
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
};

typedef struct {
    u32 unk0;
    OSThread *current;
} OSThreadInfo;

extern OSThreadInfo data_021fcc2c; // OSi_ThreadInfo

u32 OS_DisableInterrupts(void);       // OS_DisableInterrupts_IrqAndFiq
void OS_RestoreInterrupts(u32 state); // OS_RestoreInterrupts_IrqAndFiq
void OSi_DequeueItem(OSThread *thread, OSMutex *mutex); // OSi_RemoveMutexLink
void OSi_EnqueueTail(OSThread *thread, OSMutex *mutex); // OSi_InsertMutexLink
void OS_WakeupThread(OSThreadQueue *queue);              // OS_WakeupThread
void OS_SleepThread(OSThreadQueue *queue);              // OS_SleepThread

// OS_InitMutex
void OS_InitMutex(OSMutex *mutex) {
    mutex->queue.head = mutex->queue.tail = 0;
    mutex->thread = 0;
    mutex->count = 0;
}

// OS_LockMutex
void OS_LockMutex(OSMutex *mutex) {
    u32 enabled = OS_DisableInterrupts();
    OSThread *currentThread = data_021fcc2c.current;
    for (;;) {
        if (mutex->thread == 0) {
            mutex->thread = currentThread;
            mutex->count++;
            OSi_EnqueueTail(currentThread, mutex);
            break;
        }
        if (mutex->thread == currentThread) {
            mutex->count++;
            break;
        }
        currentThread->mutex = mutex;
        OS_SleepThread(&mutex->queue);
        currentThread->mutex = 0;
    }
    OS_RestoreInterrupts(enabled);
}

// OS_UnlockMutex
void OS_UnlockMutex(OSMutex *mutex) {
    u32 enabled = OS_DisableInterrupts();
    OSThread *currentThread = data_021fcc2c.current;
    if (mutex->thread == currentThread) {
        if (--mutex->count == 0) {
            OSi_DequeueItem(currentThread, mutex);
            mutex->thread = 0;
            OS_WakeupThread(&mutex->queue);
        }
    }
    OS_RestoreInterrupts(enabled);
}

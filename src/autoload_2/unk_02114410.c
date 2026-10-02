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

u32 func_01ffa2ec(void);       // OS_DisableInterrupts_IrqAndFiq
void func_01ffa3d4(u32 state); // OS_RestoreInterrupts_IrqAndFiq
void func_0211430c(OSThread *thread, OSMutex *mutex); // OSi_RemoveMutexLink
void func_02114330(OSThread *thread, OSMutex *mutex); // OSi_InsertMutexLink
void func_021136a0(OSThreadQueue *queue);              // OS_WakeupThread
void func_02113720(OSThreadQueue *queue);              // OS_SleepThread

// OS_InitMutex
void func_0211450c(OSMutex *mutex) {
    mutex->queue.head = mutex->queue.tail = 0;
    mutex->thread = 0;
    mutex->count = 0;
}

// OS_LockMutex
void func_02114480(OSMutex *mutex) {
    u32 enabled = func_01ffa2ec();
    OSThread *currentThread = data_021fcc2c.current;
    for (;;) {
        if (mutex->thread == 0) {
            mutex->thread = currentThread;
            mutex->count++;
            func_02114330(currentThread, mutex);
            break;
        }
        if (mutex->thread == currentThread) {
            mutex->count++;
            break;
        }
        currentThread->mutex = mutex;
        func_02113720(&mutex->queue);
        currentThread->mutex = 0;
    }
    func_01ffa3d4(enabled);
}

// OS_UnlockMutex
void func_02114410(OSMutex *mutex) {
    u32 enabled = func_01ffa2ec();
    OSThread *currentThread = data_021fcc2c.current;
    if (mutex->thread == currentThread) {
        if (--mutex->count == 0) {
            func_0211430c(currentThread, mutex);
            mutex->thread = 0;
            func_021136a0(&mutex->queue);
        }
    }
    func_01ffa3d4(enabled);
}

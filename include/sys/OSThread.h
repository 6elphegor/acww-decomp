#ifndef SYS_OSTHREAD_H
#define SYS_OSTHREAD_H

#include "types.h"

// NitroSDK OS thread and mutex records (os_thread.c / os_mutex.c, autoload_2 0x02113088-0x02114410).
// Used by the C units src/autoload_2/unk_02113088.c, unk_02113b6c.c, unk_02113cc8.c, unk_02113ed0.c, unk_02113fd8.c.

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;

typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;

typedef struct OSContext {
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

#endif

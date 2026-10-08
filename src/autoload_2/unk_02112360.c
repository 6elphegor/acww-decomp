#include "host_labels.h"
// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct { void *head, *tail; } ThreadQueue;  // OSThreadQueue
void OS_EnableIrqMask(u32 mask);                                   // OS_EnableIrqMask
typedef struct { void *func; u32 enable; void *arg; } IrqCb;  // (OSIrqCallbackInfo: pointers on hosts)
#define data_027e0088 HOST_LABEL(IrqCb (*)[], data_027e0088)  // OSi_IrqCallbackInfo

// clears two words at 0x027e0450 (DTCM), probably an OS_Init* helper
void OS_InitIrqTable(void) {
    extern ThreadQueue data_027e0450; // OSi_IrqThreadQueue
    ThreadQueue *p = &data_027e0450;
    p->tail = 0;
    p->head = 0;
}

// OSi_EnterTimerCallback (arg 0 = timer index; OSi_IrqCallbackInfo[index] = {func, enable, arg})
void OSi_EnterTimerCallback(u32 n, void *func, void *arg) {
    data_027e0088[n].func = func;
    data_027e0088[n].arg = arg;
    OS_EnableIrqMask(1 << (n + 3));
    data_027e0088[n].enable = 1;
}


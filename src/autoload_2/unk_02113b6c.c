#include "sys/OSThread.h"
// mwcc-flags: -nothumb -O4,p
// NitroSDK os_thread.c: OS_InitThread, autoload_2 0x02113b6c-0x02113cc8. ARM code, mwcc 1.2/base.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;


typedef struct {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void (*switchCallback)(OSThread *, OSThread *);
} OSThreadInfo;

extern OSThread **data_021fcc24;   // OSi_CurrentThreadPtr
extern u32 data_021fcc28;          // OSi_IsThreadInitialized
extern OSThreadInfo data_021fcc2c; // OSi_ThreadInfo
extern OSThread *data_021fcc30;    // OSi_ThreadInfo.current
extern OSThread data_021fcc3c;     // OSi_IdleThread
extern OSThread data_021fccfc;     // OSi_LauncherThread
extern u32 data_021fce84;          // end of the idle thread's stack (200 bytes below)
extern u8 data_027e0000[];         // SDK_AUTOLOAD_DTCM_START (HW_DTCM): a real relocation to the dtcm module

#define data_027fffa0 (*(OSThreadInfo * volatile *)0x027fffa0)

// Absolute symbols of the linker script (config/usa/arm9/abs_symbols.txt)
extern u8 SDK_SYS_STACKSIZE[];            // 0x2000
extern u8 SDK_IRQ_STACKSIZE[];            // 0x1000
extern u8 SDK_SECTION_ARENA_DTCM_START[]; // 0x027e0460

#define HW_DTCM ((u32)data_027e0000)
#define HW_DTCM_SVC_STACK (HW_DTCM + 0x3f80)
#define OSi_SYS_STACK_SIZE ((s32)SDK_SYS_STACKSIZE)
#define OSi_IRQ_STACK_SIZE ((s32)SDK_IRQ_STACKSIZE)

void func_01ffa4ec(void *);
void *OS_SetSwitchThreadCallback(void (*cb)(OSThread *, OSThread *));
void OS_CreateThread(OSThread *t, void (*f)(void *), void *arg, void *stack, u32 size, u32 prio);

// OS_InitThread
void OS_InitThread(void) {
    void *stackLo;
    if (data_021fcc28) return;
    data_021fcc28 = 1;
    data_021fcc24 = &data_021fcc30;
    data_021fccfc.priority = 16;
    data_021fccfc.id = 0;
    data_021fccfc.state = 1;
    data_021fccfc.next = 0;
    data_021fccfc.profiler = 0;
    data_021fcc2c.list = &data_021fccfc;
    data_021fcc2c.current = &data_021fccfc;
    stackLo = (OSi_SYS_STACK_SIZE <= 0) ? (void *)((u32)SDK_SECTION_ARENA_DTCM_START - OSi_SYS_STACK_SIZE)
                                        : (void *)((u32)(HW_DTCM_SVC_STACK - OSi_IRQ_STACK_SIZE) - OSi_SYS_STACK_SIZE);
    data_021fccfc.stackBottom = (u32)(HW_DTCM_SVC_STACK - OSi_IRQ_STACK_SIZE);
    data_021fccfc.stackTop = (u32)stackLo;
    data_021fccfc.stackWarningOffset = 0;
    *(u32 *)(data_021fccfc.stackBottom - sizeof(u32)) = 0xfddb597d;
    *(u32 *)(data_021fccfc.stackTop) = 0x7bf9dd5b;
    data_021fccfc.joinQueue.tail = 0;
    data_021fccfc.joinQueue.head = 0;
    data_021fcc2c.isNeedRescheduling = 0;
    data_021fcc2c.irqDepth = 0;
    data_027fffa0 = &data_021fcc2c;
    OS_SetSwitchThreadCallback(0);
    OS_CreateThread(&data_021fcc3c, func_01ffa4ec, 0, &data_021fce84, 200, 31);
    data_021fcc3c.priority = 32;
    data_021fcc3c.state = 1;
}

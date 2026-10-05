// mwcc-flags: -nothumb
// NitroSDK OS (os_irqHandler.c): OSi_IrqThreadQueue, the queue of threads waiting for an interrupt (head, tail), DTCM
// .data 0x027e0450-0x027e0458, zero in the image; the DTCM image ends with 8 bytes of padding to 0x027e0460. The
// thread-switching IRQ handler (ITCM, src/itcm/unk_01ffd50c.s) wakes it, OS_InitIrqTable (autoload_2) clears it.
// A data-only unit (the code is in two other modules); placed with the SDK's DTCM section pragma (see
// unk_027e0000.c), as in NitroSDK's os_irqHandler.c (`OSThreadQueue OSi_IrqThreadQueue = {NULL, NULL};`).
#pragma define_section DTCM ".dtcm" abs32 RWX

#define NULL 0

typedef struct OSThread OSThread;
typedef struct OSThreadQueue {
    OSThread *head;
    OSThread *tail;
} OSThreadQueue;

#pragma section DTCM begin

// OSi_IrqThreadQueue
OSThreadQueue data_027e0450 = {NULL, NULL};

#pragma section DTCM end

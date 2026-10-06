#ifndef SYS_CARDCOMMON_H
#define SYS_CARDCOMMON_H

// Card library common work area (CARDiCommon, 0x118 bytes) of the card access units src/autoload_2/unk_0211e3fc.c ..
// unk_0211f5f4.c. C header: the units keep their own `typedef struct CardCommon CardCommon;`.
#include "types.h"
#include "sys/OSThread.h"

struct CardCommon {
    // the same types at each offset as CARDCommon (src/autoload_2/unk_0211dc4c.c ...): the two views agree on
    // 64-bit hosts too (pointers and the thread larger there)
    /* 0x00 */ u32 *result;              // CARDCommon.cmd (its first word is the result)
    /* 0x04 */ u32 arg;
    /* 0x08 */ volatile u32 lockOwner;
    /* 0x0c */ volatile u32 lockCount;
    /* 0x10 */ OSThreadQueue lockQueue;
    /* 0x18 */ u32 lockType;
    /* 0x1c */ u32 src;
    /* 0x20 */ u32 dst;
    /* 0x24 */ u32 len;
    /* 0x28 */ u32 dma;
    /* 0x2c */ u32 _2c[3];
    /* 0x38 */ void (*callback)(u32);
    /* 0x3c */ uptr callbackArg;         // void *
    /* 0x40 */ void (*task)(struct CardCommon *);
    /* 0x44 */ OSThread thread;
    /* 0x104 */ void *waiter;            // OSThread *
    /* 0x108 */ u32 priority;
    /* 0x10c */ OSThreadQueue queue;
    /* 0x114 */ u32 flag;
};

#endif

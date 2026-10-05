#ifndef SYS_CARDCOMMON_H
#define SYS_CARDCOMMON_H

// Card library common work area (CARDiCommon, 0x118 bytes) of the card access units src/autoload_2/unk_0211e3fc.c ..
// unk_0211f5f4.c. C header: the units keep their own `typedef struct CardCommon CardCommon;`.
#include "types.h"

struct CardCommon {
    /* 0x00 */ u32 *result;
    /* 0x04 */ u32 arg;
    /* 0x08 */ u8 _08[0x14];
    /* 0x1c */ u32 src;
    /* 0x20 */ u32 dst;
    /* 0x24 */ u32 len;
    /* 0x28 */ u32 dma;
    /* 0x2c */ u8 _2c[0xc];
    /* 0x38 */ void (*callback)(u32);
    /* 0x3c */ u32 callbackArg;
    /* 0x40 */ void (*task)(struct CardCommon *);
    /* 0x44 */ u8 thread[0xc0];
    /* 0x104 */ void *waiter;
    /* 0x108 */ u8 _108[4];
    /* 0x10c */ u8 queue[8];
    /* 0x114 */ u32 flag;
};

#endif

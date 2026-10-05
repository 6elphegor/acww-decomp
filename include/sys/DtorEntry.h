#ifndef SYS_DTORENTRY_H
#define SYS_DTORENTRY_H

// Runtime global-destructor chain entry (__register_global_object / __destroy_global_chain), used by the runtime
// units src/autoload_2/unk_02119434.c .. unk_0211a6c0.c. C header: the units keep `typedef struct DtorEntry DtorEntry;`.
#include "types.h"

struct DtorEntry {
    /* 0x0 */ struct DtorEntry *next;
    /* 0x4 */ void (*dtor)(void *);
    /* 0x8 */ void *obj;
};

#endif

#ifndef NET_GSARRAY_H
#define NET_GSARRAY_H

#include "types.h"

// GameSpy dynamic array (GsArray_*, defined in src/ov065/unk_ov065_02278328.cpp).

typedef void (*GsElemFreeFn)(void *);

struct GsArray {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 capacity;
    /* 0x08 */ s32 elemSize;
    /* 0x0c */ s32 growBy;
    /* 0x10 */ GsElemFreeFn freeElemFn;
    /* 0x14 */ u8 *elems;
};

#endif

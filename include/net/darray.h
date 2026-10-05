#ifndef NET_DARRAY_H
#define NET_DARRAY_H

#include "types.h"

// GameSpy darray.c DArrayImplementation (DArray) and the darray.h callback types; the functions (ArrayNew ...)
// are defined in src/ov065/unk_ov065_02278328.cpp. ArrayElementFreeFn / ArrayCompareFn also serve as the hashtable.h
// TableElementFreeFn / TableCompareFn (same shape); GsArrayMapFn is used for both ArrayMapFn (void) and ArrayMapFn2
// (int) callbacks.

typedef void (*ArrayElementFreeFn)(void *);
typedef s32 (*ArrayCompareFn)(void *, void *);
typedef s32 (*GsArrayMapFn)(void *, void *);

struct DArrayImplementation {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 capacity;
    /* 0x08 */ s32 elemsize;
    /* 0x0c */ s32 growby;
    /* 0x10 */ ArrayElementFreeFn elemfreefn;
    /* 0x14 */ u8 *list;
};

#endif

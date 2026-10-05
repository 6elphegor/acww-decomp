#ifndef NET_HASHTABLE_H
#define NET_HASHTABLE_H

#include "types.h"
#include "net/darray.h"

// GameSpy hashtable.c HashImplementation (HashTable = pointer typedef in the SDK) and hashtable.h TableHashFn; the
// functions (TableNew ...) are defined in src/ov065/unk_ov065_02278328.cpp. The element free / compare callbacks use
// the darray.h types (TableElementFreeFn / TableCompareFn have the same shape).

typedef s32 (*TableHashFn)(void *, s32);

struct HashImplementation {
    /* 0x00 */ DArrayImplementation **buckets;
    /* 0x04 */ s32 nbuckets;
    /* 0x08 */ ArrayElementFreeFn freefn;
    /* 0x0c */ TableHashFn hashfn;
    /* 0x10 */ ArrayCompareFn compfn;
};

#endif

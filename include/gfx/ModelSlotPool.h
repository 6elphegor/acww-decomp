#ifndef GFX_MODELSLOTPOOL_H
#define GFX_MODELSLOTPOOL_H

// Pool of model slots and the u16 handle into it. Defined in src/main/unk_0209c08c.cpp (pool methods 0x0209c15c..,
// handle ctor/dtor = ModelSlotHandle_Init/_Destroy at 0x0209c364, which store 0xffff).
#include "types.h"

class ModelSlot;

typedef void (*ModelSlotFreeFunc)();
typedef void *(*ModelSlotAllocFunc)(u32, u32);

class ModelSlotHandle {
public:
    ModelSlotHandle();
    ~ModelSlotHandle();
    /* 0x0 */ u16 index;
};

class ModelSlotPool {
public:
    ModelSlotPool();
    ~ModelSlotPool();
    BOOL destroy();
    BOOL init(u32 n, void *a, void *b, u32 size, ModelSlotAllocFunc alloc, ModelSlotFreeFunc free);
    void release(u16 *idx);
    ModelSlot *acquire(u16 *idx);

    /* 0x00 */ u16 lastFreed;
    /* 0x04 */ u32 numSlots;
    /* 0x08 */ u32 numInUse;
    /* 0x0c */ ModelSlot *slots;
    /* 0x10 */ ModelSlotAllocFunc allocFunc;
    /* 0x14 */ ModelSlotFreeFunc freeFunc;
};

#endif

#ifndef GFX_MODELSLOTPOOL_H
#define GFX_MODELSLOTPOOL_H

// Pool of model slots and the u16 handle into it. Defined in src/main/unk_0209c08c.cpp (pool methods 0x0209c15c..,
// handle ctor/dtor = ModelSlotHandle_Init/_Destroy at 0x0209c364, which store 0xffff).
#include "types.h"
#include "gfx/TexVramSlot.h"

class Heap;

// a pool entry (0x1c bytes on the DS): a frame heap carved from the pool's heap and a texture VRAM slot
class ModelSlot {
public:
    ModelSlot();
    BOOL clear();
    BOOL init(void *texSize, void *plttSize, u32 heapSize, Heap *parent);
    TexVramSlot *getVramSlot();
    Heap *getHeap();

    /* 0x00 */ u8 inUse;
    /* 0x04 */ Heap *heap;
    /* 0x08 */ TexVramSlot vramSlot;
};

typedef void (*ModelSlotFreeFunc)();
// creates the heap the slots' frame heaps are carved from and returns it (the *Heap_Create functions of
// src/main/unk_0205b7b0.cpp)
typedef Heap *(*ModelSlotAllocFunc)(u32 size, Heap *parent);

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

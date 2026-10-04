#ifndef SYS_HEAP_H
#define SYS_HEAP_H

// Abstract heap base class (vtable 0x0213b000; NNS_Fnd heap wrapper). Methods at 0x020e86fc..0x020e9110
// (src/autoload_2/unk_020e8558.cpp). Virtual order = vtable slots.
#include "types.h"

class Heap {
public:
    Heap(u32 a, u32 b, Heap *parent);
    virtual ~Heap(); // 0x00 / 0x04
    virtual void doLock();
    virtual void doUnlock();
    virtual BOOL tryLock();
    virtual void doDestroy() = 0;
    virtual void *doAlloc(u32 size, s32 align) = 0; // alloc
    virtual void doFree(void *p) = 0; // free
    virtual void doFreeAll() = 0; // free all
    virtual BOOL vfunc_24() = 0;
    virtual void doDump() = 0;
    virtual s32 doResize(void *p, u32 size) = 0; // resize
    virtual u32 vfunc_30(void *p) = 0; // block size
    virtual u32 doGetFreeSize() = 0;
    virtual u32 doGetMaxFreeBlockSize() = 0;
    virtual u32 vfunc_3c(s32 align) = 0; // largest allocatable size
    virtual u32 getTotalFreeSize() = 0;
    virtual void *changeGroupId() = 0;
    virtual void *getGroupId() = 0;
    virtual void *doAdjust() = 0;

    void lock();
    void unlock();
    void destroy();
    void destroy2();
    void *alloc(u32 size, s32 align);
    void dump();
    u32 getFreeSize();
    u32 getMaxFreeBlockSize();
    u32 maxAlloc(s32 align);
    s32 resize(void *p, u32 size);
    void free(void *p);
    void freeAll();
    void *adjust();
    u32 setFlags(u32 flags);

    /* 0x04 */ u32 regionStart;
    /* 0x08 */ u32 regionSize;
    /* 0x0c */ Heap *parentHeap; // parent heap
    /* 0x10 */ u32 heapFlags; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x2000 allow outside system mode, 0x4000 stop when out of memory
    /* 0x14 */ void *heapHandle; // NNS_Fnd heap handle
};

#endif

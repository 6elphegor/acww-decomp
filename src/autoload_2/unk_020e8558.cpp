// mwcc-flags: -nothumb -O4,p
// RC_020e8558: the in-house HEAP source file as REAL C++ classes. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020e8558-0x020e92f4 (83 functions), .data 0x0213af4c-0x0213b058 (gHeapCreateOption + 3 vtables), autoload_3 .bss
// 0x021f4810-0x021f4874. Supersedes G001b (unk_020e8558.cpp), G002a (unk_020e8c48.cpp), unk_020e914c.cpp and the first four functions
// of G002b (unk_020e91cc.cpp). Every function lands on its original address with the original bytes; every old symbols.txt name stays
// (aliases.txt adds the compiler's names as labels, nothing but the three vtables is renamed).
// Classes (vtable start / dsd label at +8):
//   Heap   abstract heap, vtable 0x0213b000 (5 slots + 15 pure); key function ~Heap (D2 f906c, D0 f907c, D1 f90a0);
//                  C2 f9110 (called by the derived constructors; C1 unreferenced, dead-stripped); non-virtual lock/unlock/alloc/free/...
//   FrameHeap   frame heap (0x18 bytes), vtable 0x0213afa8; C1 f90b0, D0 f8fcc / D1 f8ff8 (D2 unreferenced, dead-stripped)
//   ExpHeap   expanded heap (0x30 bytes, OSMutex at +0x18), vtable 0x0213af50; C1 f90dc, D0 f901c / D1 f9048
// The creation functions f8da0 / f8e7c / f8f58 construct the heap object in the head of its own block with placement new (the
// original's `if (p != NULL) ctor(p, ...)` is the null test of placement new).
// The class DECLARATION order (frame heap before expanded heap) and the definition order of the file-scope objects below set the
// vtable / data / bss order: keep both.
// Plain helpers that other code calls by name (Mem_Free..86c8, the creation functions, the start-up 914c..9284, the visitor
// 8844) stay extern "C".
#include "types.h"
#include "sys/Heap.h"
#include "sys/OSThread.h"


inline void *operator new(unsigned long, void *p) {
    return p;
}


// frame heap (vtable 0x0213afa8), 0x18 bytes
class FrameHeap : public Heap {
public:
    FrameHeap(void *block, u32 size, Heap *parent, void *handle);
    virtual ~FrameHeap();
    virtual void doDestroy();
    virtual void *doAlloc(u32 size, s32 align);
    virtual void doFree(void *p);
    virtual void doFreeAll();
    virtual BOOL vfunc_24();
    virtual void doDump();
    virtual s32 doResize(void *p, u32 size);
    virtual u32 vfunc_30(void *p);
    virtual u32 doGetFreeSize();
    virtual u32 doGetMaxFreeBlockSize();
    virtual u32 vfunc_3c(s32 align);
    virtual u32 getTotalFreeSize();
    virtual void *changeGroupId();
    virtual void *getGroupId();
    virtual void *doAdjust();
};

// expanded heap (vtable 0x0213af50), 0x30 bytes
class ExpHeap : public Heap {
public:
    ExpHeap(void *block, u32 size, Heap *parent, void *handle);
    virtual ~ExpHeap();
    virtual void doLock();
    virtual void doUnlock();
    virtual BOOL tryLock();
    virtual void doDestroy();
    virtual void *doAlloc(u32 size, s32 align);
    virtual void doFree(void *p);
    virtual void doFreeAll();
    virtual BOOL vfunc_24();
    virtual void doDump();
    virtual s32 doResize(void *p, u32 size);
    virtual u32 vfunc_30(void *p);
    virtual u32 doGetFreeSize();
    virtual u32 doGetMaxFreeBlockSize();
    virtual u32 vfunc_3c(s32 align);
    virtual u32 getTotalFreeSize();
    virtual void *changeGroupId();
    virtual void *getGroupId();
    virtual void *doAdjust();

    /* 0x18 */ OSMutex mutex;
};

typedef void (*HeapFreeHook)(Heap *heap, void *p);
typedef void (*HeapAllocHook)(Heap *heap, void *p, u32 size, s32 align);
typedef void (*ThreadHook)(void *, void *);

extern "C" {
u32 OS_DisableInterrupts(void); // OS_DisableInterrupts
u32 OS_RestoreInterrupts(u32); // OS_RestoreInterrupts
u32 OS_GetProcMode(void); // OS_GetProcMode
void Fatal_Trap(void); // Thumb, in main: fatal stop
void *NNS_FndAdjustFrmHeap(void *heap);
u32 NNS_FndGetGroupIDForExpHeap(void *heap);
u32 NNS_FndSetGroupIDForExpHeap(void *heap);
u32 NNS_FndGetSizeForMBlockExpHeap(void *p);
u32 NNS_FndFreeToFrmHeap(void *heap, s32);
void NNS_FndVisitAllocatedForExpHeap(void *heap, void (*visitor)(void *block, void *heap, u32 param), u32 param);
void NNS_FndFreeToExpHeap(void *heap, void *p); // NNS_FndFreeToExpHeap
void *NNS_FndResizeForMBlockFrmHeap(void *heap);
s32 NNS_FndResizeForMBlockExpHeap(void *heap, void *p, u32 size); // NNS_FndResizeForMBlockExpHeap
u32 NNS_FndGetAllocatableSizeForFrmHeapEx(void *heap, s32 align); // NNS_FndGetAllocatableSizeForFrmHeapEx
u32 NNS_FndGetTotalFreeSizeForExpHeap(void *heap); // NNS_FndGetTotalFreeSizeForExpHeap
u32 NNS_FndGetAllocatableSizeForExpHeapEx(void *heap, s32 align);
void *NNS_FndAllocFromFrmHeapEx(void *heap, u32 size, s32 align); // NNS_FndAllocFromFrmHeapEx
void *NNS_FndAllocFromExpHeapEx(void *heap, u32 size, s32 align); // NNS_FndAllocFromExpHeapEx
void NNS_FndDestroyFrmHeap(void *heap);
void NNS_FndDestroyExpHeap(void *heap);
void *NNS_FndCreateFrmHeapEx(void *p, u32 size, u32 opt);
void *NNS_FndCreateExpHeapEx(void *p, u32 size, u32 opt);
BOOL OS_TryLockMutex(void *p);
void OS_UnlockMutex(void *p);
void OS_LockMutex(void *p);
void OS_InitMutex(void *p);
u32 OS_GetArenaLo(u32); // OS_GetArenaLo(id)
u32 OS_GetArenaHi(u32);
void *OS_AllocFromArenaLo(u32, u32, u32);
ThreadHook OS_SetSwitchThreadCallback(ThreadHook);
void OS_SetThreadParameter(void *thread, void *v);
void *OS_GetThreadParameter(void *thread);

extern OSThreadInfo data_021fcc2c; // OSi_ThreadInfo

void ExpHeap_FreeBlockVisitor(void *block, void *heap, u32 param);
void Heap_OnThreadSwitch(void *a, void *b);
}

// ---- file-scope objects. Their DEFINITION order sets the .data/.bss layout (mwcc heapsorts all objects of the file by size;
// order solved with linkprep.py data): bss 0x021f4810 (u8) .. 0x021f4830 (words), 0x021f4834 (array); .data 0x0213af4c.
u32 sRootHeapSize; // preset heap size (0 = whole arena)
u8 sHeapSystemReady; // set once the heap system is up
HeapAllocHook sHeapAllocHook;
u32 sRootHeapArenaId; // arena id
Heap *gCurrentHeap; // current heap
u16 gHeapCreateOption = 3; // option word passed to the NNS heap creation functions
Heap *sSavedCurrentHeap[16]; // per thread id: heap saved by Heap_SaveCurrent
ThreadHook sPrevThreadSwitchCallback; // previous thread switch callback
HeapFreeHook sHeapFreeHook;
Heap *gProcHeap;
Heap *gRootHeap; // main heap

// ---- functions, highest address first

extern "C" void Heap_OnThreadSwitch(void *a, void *b) {
    OS_SetThreadParameter(a, gCurrentHeap);
    gCurrentHeap = (Heap *)OS_GetThreadParameter(b);
    OS_SetThreadParameter(b, NULL);
    if (sPrevThreadSwitchCallback != NULL) sPrevThreadSwitchCallback(a, b);
}

extern "C" Heap *Heap_SetCurrent(Heap *heap);

extern "C" Heap *Heap_SetThreadHeap(void *thread, Heap *heap) {
    if (thread == data_021fcc2c.current) return Heap_SetCurrent(heap);
    OS_SetThreadParameter(thread, heap);
}

extern "C" void Heap_InstallThreadSwitchCallback(void) {
    u32 e = OS_DisableInterrupts();
    sPrevThreadSwitchCallback = OS_SetSwitchThreadCallback(Heap_OnThreadSwitch);
    OS_RestoreInterrupts(e);
}

extern "C" ExpHeap *ExpHeap_CreateInPlace(void *p, u32 n);

extern "C" ExpHeap *Heap_CreateRootHeap(void *p, u32 n) {
    ExpHeap *h = ExpHeap_CreateInPlace(p, n);
    if (h != NULL) {
        gRootHeap = h;
        gCurrentHeap = h;
    }
    sHeapSystemReady = 1;
    return h;
}

// heap start-up: arena id 0 (main); size = OS_GetArenaHi(id) - round32(OS_GetArenaLo(id)) unless preset
extern "C" void Heap_InitSystem(void) {
    u32 size;
    u32 t;
    sRootHeapArenaId = 0;
    t = *(s32 *)&sRootHeapSize;
    size = sRootHeapSize;
    if (t == 0) {
        size = OS_GetArenaLo(0);
        size = OS_GetArenaHi(sRootHeapArenaId) - ((size + 31) & ~31);
    }
    if (Heap_CreateRootHeap(OS_AllocFromArenaLo(sRootHeapArenaId, size, 32), size) != NULL) Heap_InstallThreadSwitchCallback();
}

Heap::Heap(u32 a, u32 b, Heap *parent) {
    regionStart = a;
    regionSize = b;
    parentHeap = parent;
    heapFlags = 0;
    heapFlags = 0x4000;
}

ExpHeap::ExpHeap(void *block, u32 size, Heap *parent, void *handle)
    : Heap((u32)block, size, parent) {
    heapHandle = handle;
    OS_InitMutex(&mutex);
}

FrameHeap::FrameHeap(void *block, u32 size, Heap *parent, void *handle)
    : Heap((u32)block, size, parent) {
    heapHandle = handle;
}

Heap::~Heap() {
}

ExpHeap::~ExpHeap() {
}

FrameHeap::~FrameHeap() {
}

extern "C" ExpHeap *ExpHeap_CreateInPlace(void *p, u32 n) {
    u32 region = n - 0x30;
    void *q = (u8 *)p + 0x30;
    void *h = NNS_FndCreateExpHeapEx(q, region, gHeapCreateOption);
    if (h != NULL) {
        new (p) ExpHeap(q, region, NULL, h);
        return (ExpHeap *)p;
    }
    return NULL;
}

extern "C" ExpHeap *ExpHeap_Create(u32 size, Heap *parent) {
    u32 region;
    u32 total;
    ExpHeap *p;
    void *q;
    void *h;
    if (parent == NULL) parent = gCurrentHeap;
    if (size == 0xffffffff) {
        total = parent->maxAlloc(4);
        if (total < 0x7c) return NULL;
        region = total - 0x30;
    } else {
        region = ((size + 3) & ~3) + 0x4c;
        total = region + 0x30;
    }
    p = (ExpHeap *)parent->alloc(total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x30;
        h = NNS_FndCreateExpHeapEx(q, region, gHeapCreateOption);
        if (h == NULL) {
            parent->free(p);
            p = NULL;
        } else {
            new (p) ExpHeap(q, region, parent, h);
        }
    }
    return p;
}

extern "C" FrameHeap *FrameHeap_Create(u32 size, Heap *parent) {
    u32 region;
    u32 total;
    FrameHeap *p;
    void *q;
    void *h;
    if (parent == NULL) parent = gCurrentHeap;
    if (size == 0xffffffff) {
        total = parent->maxAlloc(4);
        if (total < 0x48) return NULL;
        region = total - 0x18;
    } else {
        region = ((size + 3) & ~3) + 0x30;
        total = region + 0x18;
    }
    p = (FrameHeap *)parent->alloc(total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x18;
        h = NNS_FndCreateFrmHeapEx(q, region, gHeapCreateOption);
        if (h == NULL) {
            parent->free(p);
            p = NULL;
        } else {
            new (p) FrameHeap(q, region, parent, h);
        }
    }
    return p;
}

void Heap::lock() {
    if (OS_GetProcMode() != 31 && (heapFlags & 0x2000) == 0) Fatal_Trap();
    doLock();
}

void Heap::unlock() {
    doUnlock();
}

void Heap::doLock() {
}

void Heap::doUnlock() {
}

BOOL Heap::tryLock() {
    return TRUE;
}

void ExpHeap::doLock() {
    OS_LockMutex(&mutex);
}

void ExpHeap::doUnlock() {
    OS_UnlockMutex(&mutex);
}

BOOL ExpHeap::tryLock() {
    return OS_TryLockMutex(&mutex);
}

void Heap::destroy() {
    Heap *parent;
    lock();
    doDestroy();
    regionStart = 0;
    regionSize = 0;
    unlock();
    parent = parentHeap;
    this->~Heap();
    if (parent != NULL) parent->free(this);
}

void Heap::destroy2() {
    destroy();
}

void ExpHeap::doDestroy() {
    NNS_FndDestroyExpHeap(heapHandle);
    heapHandle = NULL;
}

void FrameHeap::doDestroy() {
    NNS_FndDestroyFrmHeap(heapHandle);
    heapHandle = NULL;
}

void *Heap::alloc(u32 size, s32 align) {
    void *p;
    lock();
    if (size == 0xffffffff) size = maxAlloc(align);
    p = doAlloc(size, align);
    if (sHeapAllocHook != NULL && (heapFlags & 0x400)) sHeapAllocHook(this, p, size, align);
    if (p == NULL && (heapFlags & 0x4000)) Fatal_Trap();
    unlock();
    return p;
}

void *ExpHeap::doAlloc(u32 size, s32 align) {
    return NNS_FndAllocFromExpHeapEx(heapHandle, size, align);
}

void *FrameHeap::doAlloc(u32 size, s32 align) {
    return NNS_FndAllocFromFrmHeapEx(heapHandle, size, align);
}

BOOL ExpHeap::vfunc_24() {
    return TRUE;
}

BOOL FrameHeap::vfunc_24() {
    return TRUE;
}

void Heap::dump() {
    lock();
    doDump();
    unlock();
}

void ExpHeap::doDump() {
}

void FrameHeap::doDump() {
}

u32 Heap::getFreeSize() {
    u32 r;
    lock();
    r = doGetFreeSize();
    unlock();
    return r;
}

u32 ExpHeap::doGetFreeSize() {
    return NNS_FndGetAllocatableSizeForExpHeapEx(heapHandle, 4);
}

u32 FrameHeap::doGetFreeSize() {
    return NNS_FndGetAllocatableSizeForFrmHeapEx(heapHandle, 4);
}

u32 Heap::getMaxFreeBlockSize() {
    u32 r;
    lock();
    r = doGetMaxFreeBlockSize();
    unlock();
    return r;
}

u32 ExpHeap::doGetMaxFreeBlockSize() {
    return NNS_FndGetAllocatableSizeForExpHeapEx(heapHandle, 4);
}

u32 FrameHeap::doGetMaxFreeBlockSize() {
    return NNS_FndGetAllocatableSizeForFrmHeapEx(heapHandle, 4);
}

u32 Heap::maxAlloc(s32 align) {
    u32 r;
    lock();
    r = vfunc_3c(align);
    unlock();
    return r;
}

u32 ExpHeap::vfunc_3c(s32 align) {
    return NNS_FndGetAllocatableSizeForExpHeapEx(heapHandle, align);
}

u32 FrameHeap::vfunc_3c(s32 align) {
    return NNS_FndGetAllocatableSizeForFrmHeapEx(heapHandle, align);
}

u32 ExpHeap::getTotalFreeSize() {
    return NNS_FndGetTotalFreeSizeForExpHeap(heapHandle);
}

u32 FrameHeap::getTotalFreeSize() {
    return NNS_FndGetAllocatableSizeForFrmHeapEx(heapHandle, 4);
}

s32 Heap::resize(void *p, u32 size) {
    s32 r;
    lock();
    r = doResize(p, size);
    unlock();
    return r;
}

s32 ExpHeap::doResize(void *p, u32 size) {
    return NNS_FndResizeForMBlockExpHeap(heapHandle, p, size);
}

s32 FrameHeap::doResize(void *p, u32 size) {
    return (s32)NNS_FndResizeForMBlockFrmHeap(heapHandle);
}

void Heap::free(void *p) {
    if (p == NULL) return;
    lock();
    if (sHeapFreeHook != NULL && (heapFlags & 0x800)) sHeapFreeHook(this, p);
    doFree(p);
    unlock();
}

void ExpHeap::doFree(void *p) {
    if (p == NULL) return;
    NNS_FndFreeToExpHeap(heapHandle, p);
}

void FrameHeap::doFree(void *p) {
    if (p == NULL) return;
    Fatal_Trap();
}

void Heap::freeAll() {
    lock();
    if (sHeapFreeHook != NULL && (heapFlags & 0x800)) sHeapFreeHook(this, NULL);
    doFreeAll();
    unlock();
}

extern "C" void ExpHeap_FreeBlockVisitor(void *block, void *heap, u32 param) {
    NNS_FndFreeToExpHeap(heap, block);
}

void ExpHeap::doFreeAll() {
    NNS_FndVisitAllocatedForExpHeap(heapHandle, ExpHeap_FreeBlockVisitor, 0);
}

void FrameHeap::doFreeAll() {
    NNS_FndFreeToFrmHeap(heapHandle, 3);
}

u32 ExpHeap::vfunc_30(void *p) {
    return NNS_FndGetSizeForMBlockExpHeap(p);
}

u32 FrameHeap::vfunc_30(void *p) {
    return (u32)-1;
}

void *ExpHeap::changeGroupId() {
    return (void *)NNS_FndSetGroupIDForExpHeap(heapHandle);
}

void *FrameHeap::changeGroupId() {
    return NULL;
}

void *ExpHeap::getGroupId() {
    return (void *)NNS_FndGetGroupIDForExpHeap(heapHandle);
}

void *FrameHeap::getGroupId() {
    return NULL;
}

void *Heap::adjust() {
    void *r;
    lock();
    r = doAdjust();
    if (r == NULL && (heapFlags & 0x4000)) Fatal_Trap();
    unlock();
    return r;
}

void *ExpHeap::doAdjust() {
    return NULL;
}

void *FrameHeap::doAdjust() {
    void *state = NNS_FndAdjustFrmHeap(heapHandle);
    void *p;
    if (state == NULL) return NULL;
    p = (u8 *)state + 0x18;
    if (parentHeap->resize(this, (u32)p) < 0) return NULL;
    regionSize = (u32)state;
    return p;
}

u32 Heap::setFlags(u32 flags) {
    u32 irq = OS_DisableInterrupts();
    u32 old = heapFlags;
    if (!(flags & 0x8000)) heapFlags = flags;
    OS_RestoreInterrupts(irq);
    return old;
}

extern "C" Heap *Heap_SetCurrent(Heap *heap) {
    u32 irq = OS_DisableInterrupts();
    Heap *old = gCurrentHeap;
    gCurrentHeap = heap;
    OS_RestoreInterrupts(irq);
    return old;
}

extern "C" void Heap_SaveCurrent(void);

extern "C" Heap *FrameHeap_CreateAsCurrent(u32 size, Heap *parent) {
    Heap *heap = FrameHeap_Create(size, parent);
    if (heap == NULL) return NULL;
    Heap_SaveCurrent();
    Heap_SetCurrent(heap);
    return heap;
}

extern "C" void Heap_SaveCurrent(void) {
    sSavedCurrentHeap[data_021fcc2c.current->id] = gCurrentHeap;
}

extern "C" void Heap_RestoreCurrent(void) {
    u32 id = data_021fcc2c.current->id;
    Heap_SetCurrent(sSavedCurrentHeap[id]);
    sSavedCurrentHeap[id] = NULL;
}

extern "C" void *Heap_AllocAligned(Heap *heap, u32 size, s32 align) {
    return heap->alloc(size, align);
}

extern "C" void *Heap_AllocTail(Heap *heap, u32 size) {
    return heap->alloc(size, -4);
}

extern "C" void *Heap_Alloc(Heap *heap, u32 size) {
    return heap->alloc(size, 4);
}

extern "C" void Heap_Free(Heap *heap, void *p) {
    heap->free(p);
}

extern "C" void Heap_CreateProcHeap(u32 size, Heap *parent) {
    gProcHeap = ExpHeap_Create(size, parent);
}

extern "C" void *Mem_AllocAligned(u32 size, s32 align) {
    return gCurrentHeap->alloc(size, align);
}

extern "C" void *Mem_AllocTail(u32 size) {
    return gCurrentHeap->alloc(size, -4);
}

extern "C" void *Mem_Alloc(u32 size) {
    return gCurrentHeap->alloc(size, 4);
}

extern "C" void Mem_Free(void *p) {
    gCurrentHeap->free(p);
}

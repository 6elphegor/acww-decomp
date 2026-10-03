// mwcc-flags: -nothumb -O4,p
// RC_020e8558: the in-house HEAP source file as REAL C++ classes (pipeline_wip/realclass_work/PLAN.md #5). mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020e8558-0x020e92f4 (83 functions), .data 0x0213af4c-0x0213b058 (data_0213af4c + 3 vtables), autoload_3 .bss
// 0x021f4810-0x021f4874. Supersedes G001b (unk_020e8558.cpp), G002a (unk_020e8c48.cpp), unk_020e914c.cpp and the first four functions
// of G002b (unk_020e91cc.cpp). Every function lands on its original address with the original bytes; every old symbols.txt name stays
// (aliases.txt adds the compiler's names as labels, nothing but the three vtables is renamed).
// Classes (vtable start / dsd label at +8):
//   Unk_020e8b94   abstract heap, vtable 0x0213b000 (5 slots + 15 pure); key function ~Unk_020e8b94 (D2 f906c, D0 f907c, D1 f90a0);
//                  C2 f9110 (called by the derived constructors; C1 unreferenced, dead-stripped); non-virtual lock/unlock/alloc/free/...
//   Unk_0213afb0   frame heap (0x18 bytes), vtable 0x0213afa8; C1 f90b0, D0 f8fcc / D1 f8ff8 (D2 unreferenced, dead-stripped)
//   Unk_0213af58   expanded heap (0x30 bytes, OSMutex at +0x18), vtable 0x0213af50; C1 f90dc, D0 f901c / D1 f9048
// The creation functions f8da0 / f8e7c / f8f58 construct the heap object in the head of its own block with placement new (the
// original's `if (p != NULL) ctor(p, ...)` is the null test of placement new).
// The class DECLARATION order (frame heap before expanded heap) and the definition order of the file-scope objects below set the
// vtable / data / bss order: keep both.
// Plain helpers that other code calls by name (func_020e8558..86c8, the creation functions, the start-up 914c..9284, the visitor
// 8844) stay extern "C".
#include "types.h"

// OSMutex (0x18 bytes)
struct OSMutex_View {
    u32 w[6];
};

struct OSThread_View {
    u8 pad[0x6c];
    u32 id;
};
struct OSThreadInfo_View {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread_View *current;
};

inline void *operator new(unsigned long, void *p) {
    return p;
}

class Unk_020e8b94 {
public:
    Unk_020e8b94(u32 a, u32 b, Unk_020e8b94 *parent);
    virtual ~Unk_020e8b94(); // 0x00 / 0x04
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_14() = 0;
    virtual void *vfunc_18(u32 size, s32 align) = 0; // alloc
    virtual void vfunc_1c(void *p) = 0; // free
    virtual void vfunc_20() = 0; // free all
    virtual BOOL vfunc_24() = 0;
    virtual void vfunc_28() = 0;
    virtual s32 vfunc_2c(void *p, u32 size) = 0; // resize
    virtual u32 vfunc_30(void *p) = 0; // block size
    virtual u32 vfunc_34() = 0;
    virtual u32 vfunc_38() = 0;
    virtual u32 vfunc_3c(s32 align) = 0; // largest allocatable size
    virtual u32 vfunc_40() = 0;
    virtual void *vfunc_44() = 0;
    virtual void *vfunc_48() = 0;
    virtual void *vfunc_4c() = 0;

    void lock();
    void unlock();
    void destroy();
    void destroy2();
    void *alloc(u32 size, s32 align);
    void call_28();
    u32 call_34();
    u32 call_38();
    u32 maxAlloc(s32 align);
    s32 resize(void *p, u32 size);
    void free(void *p);
    void freeAll();
    void *call_4c();
    u32 setFlags(u32 flags);

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ Unk_020e8b94 *unk_0c; // parent heap
    /* 0x10 */ u32 unk_10; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x2000 allow outside system mode, 0x4000 stop when out of memory
    /* 0x14 */ void *unk_14; // NNS_Fnd heap handle
};

// frame heap (vtable 0x0213afa8), 0x18 bytes
class Unk_0213afb0 : public Unk_020e8b94 {
public:
    Unk_0213afb0(void *block, u32 size, Unk_020e8b94 *parent, void *handle);
    virtual ~Unk_0213afb0();
    virtual void vfunc_14();
    virtual void *vfunc_18(u32 size, s32 align);
    virtual void vfunc_1c(void *p);
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
    virtual void vfunc_28();
    virtual s32 vfunc_2c(void *p, u32 size);
    virtual u32 vfunc_30(void *p);
    virtual u32 vfunc_34();
    virtual u32 vfunc_38();
    virtual u32 vfunc_3c(s32 align);
    virtual u32 vfunc_40();
    virtual void *vfunc_44();
    virtual void *vfunc_48();
    virtual void *vfunc_4c();
};

// expanded heap (vtable 0x0213af50), 0x30 bytes
class Unk_0213af58 : public Unk_020e8b94 {
public:
    Unk_0213af58(void *block, u32 size, Unk_020e8b94 *parent, void *handle);
    virtual ~Unk_0213af58();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_14();
    virtual void *vfunc_18(u32 size, s32 align);
    virtual void vfunc_1c(void *p);
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
    virtual void vfunc_28();
    virtual s32 vfunc_2c(void *p, u32 size);
    virtual u32 vfunc_30(void *p);
    virtual u32 vfunc_34();
    virtual u32 vfunc_38();
    virtual u32 vfunc_3c(s32 align);
    virtual u32 vfunc_40();
    virtual void *vfunc_44();
    virtual void *vfunc_48();
    virtual void *vfunc_4c();

    /* 0x18 */ OSMutex_View mutex;
};

typedef void (*HeapFreeHook)(Unk_020e8b94 *heap, void *p);
typedef void (*HeapAllocHook)(Unk_020e8b94 *heap, void *p, u32 size, s32 align);
typedef void (*ThreadHook)(void *, void *);

extern "C" {
u32 func_01ffa2ec(void); // OS_DisableInterrupts
u32 func_01ffa3d4(u32); // OS_RestoreInterrupts
u32 func_01ffa3b4(void); // OS_GetProcMode
void func_0206d49c(void); // Thumb, in main: fatal stop
void *func_02100f20(void *heap);
u32 func_02100600(void *heap);
u32 func_02100608(void *heap);
u32 func_021005a4(void *p);
u32 func_02101048(void *heap, s32);
void func_021005ac(void *heap, void (*visitor)(void *block, void *heap, u32 param), u32 param); // NNS_FndVisitAllocatedForExpHeap
void func_021006c8(void *heap, void *p); // NNS_FndFreeToExpHeap
void *func_02100e7c(void *heap);
s32 func_02100708(void *heap, void *p, u32 size); // NNS_FndResizeForMBlockExpHeap
u32 func_02101008(void *heap, s32 align); // NNS_FndGetAllocatableSizeForFrmHeapEx
u32 func_021006a0(void *heap); // NNS_FndGetTotalFreeSizeForExpHeap
u32 func_02100618(void *heap, s32 align); // NNS_FndGetAllocatableSizeForExpHeapEx
void *func_02101088(void *heap, u32 size, s32 align); // NNS_FndAllocFromFrmHeapEx
void *func_02100890(void *heap, u32 size, s32 align); // NNS_FndAllocFromExpHeapEx
void func_021010d0(void *heap);
void func_021008d4(void *heap);
void *func_021010dc(void *p, u32 size, u32 opt);
void *func_021008e0(void *p, u32 size, u32 opt);
BOOL func_02114354(void *p);
void func_02114410(void *p);
void func_02114480(void *p);
void func_0211450c(void *p);
u32 func_02114940(u32); // OS_GetArenaLo(id)
u32 func_02114954(u32);
void *func_02114674(u32, u32, u32);
ThreadHook func_0211328c(ThreadHook);
void func_0211320c(void *thread, void *v);
void *func_02113204(void *thread);

extern OSThreadInfo_View data_021fcc2c; // OSi_ThreadInfo

void func_020e8844(void *block, void *heap, u32 param);
void func_020e9284(void *a, void *b);
}

// ---- file-scope objects. Their DEFINITION order sets the .data/.bss layout (mwcc heapsorts all objects of the file by size;
// order solved with linkprep.py data): bss 0x021f4810 (u8) .. 0x021f4830 (words), 0x021f4834 (array); .data 0x0213af4c.
u32 data_021f4828; // preset heap size (0 = whole arena)
u8 data_021f4810; // set once the heap system is up
HeapAllocHook data_021f481c;
u32 data_021f4830; // arena id
Unk_020e8b94 *data_021f482c; // current heap
u16 data_0213af4c = 3; // option word passed to the NNS heap creation functions
Unk_020e8b94 *data_021f4834[16]; // per thread id: heap saved by func_020e866c
ThreadHook data_021f4820; // previous thread switch callback
HeapFreeHook data_021f4814;
Unk_020e8b94 *data_021f4818;
Unk_020e8b94 *data_021f4824; // main heap

// ---- functions, highest address first

extern "C" void func_020e9284(void *a, void *b) {
    func_0211320c(a, data_021f482c);
    data_021f482c = (Unk_020e8b94 *)func_02113204(b);
    func_0211320c(b, NULL);
    if (data_021f4820 != NULL) data_021f4820(a, b);
}

extern "C" Unk_020e8b94 *func_020e86c8(Unk_020e8b94 *heap);

extern "C" Unk_020e8b94 *func_020e9244(void *thread, Unk_020e8b94 *heap) {
    if (thread == data_021fcc2c.current) return func_020e86c8(heap);
    func_0211320c(thread, heap);
}

extern "C" void func_020e9210(void) {
    u32 e = func_01ffa2ec();
    data_021f4820 = func_0211328c(func_020e9284);
    func_01ffa3d4(e);
}

extern "C" Unk_0213af58 *func_020e8f58(void *p, u32 n);

extern "C" Unk_0213af58 *func_020e91cc(void *p, u32 n) {
    Unk_0213af58 *h = func_020e8f58(p, n);
    if (h != NULL) {
        data_021f4824 = h;
        data_021f482c = h;
    }
    data_021f4810 = 1;
    return h;
}

// heap start-up: arena id 0 (main); size = OS_GetArenaHi(id) - round32(OS_GetArenaLo(id)) unless preset
extern "C" void func_020e914c(void) {
    u32 size;
    u32 t;
    data_021f4830 = 0;
    t = *(s32 *)&data_021f4828;
    size = data_021f4828;
    if (t == 0) {
        size = func_02114940(0);
        size = func_02114954(data_021f4830) - ((size + 31) & ~31);
    }
    if (func_020e91cc(func_02114674(data_021f4830, size, 32), size) != NULL) func_020e9210();
}

Unk_020e8b94::Unk_020e8b94(u32 a, u32 b, Unk_020e8b94 *parent) {
    unk_04 = a;
    unk_08 = b;
    unk_0c = parent;
    unk_10 = 0;
    unk_10 = 0x4000;
}

Unk_0213af58::Unk_0213af58(void *block, u32 size, Unk_020e8b94 *parent, void *handle)
    : Unk_020e8b94((u32)block, size, parent) {
    unk_14 = handle;
    func_0211450c(&mutex);
}

Unk_0213afb0::Unk_0213afb0(void *block, u32 size, Unk_020e8b94 *parent, void *handle)
    : Unk_020e8b94((u32)block, size, parent) {
    unk_14 = handle;
}

Unk_020e8b94::~Unk_020e8b94() {
}

Unk_0213af58::~Unk_0213af58() {
}

Unk_0213afb0::~Unk_0213afb0() {
}

extern "C" Unk_0213af58 *func_020e8f58(void *p, u32 n) {
    u32 region = n - 0x30;
    void *q = (u8 *)p + 0x30;
    void *h = func_021008e0(q, region, data_0213af4c);
    if (h != NULL) {
        new (p) Unk_0213af58(q, region, NULL, h);
        return (Unk_0213af58 *)p;
    }
    return NULL;
}

extern "C" Unk_0213af58 *func_020e8e7c(u32 size, Unk_020e8b94 *parent) {
    u32 region;
    u32 total;
    Unk_0213af58 *p;
    void *q;
    void *h;
    if (parent == NULL) parent = data_021f482c;
    if (size == 0xffffffff) {
        total = parent->maxAlloc(4);
        if (total < 0x7c) return NULL;
        region = total - 0x30;
    } else {
        region = ((size + 3) & ~3) + 0x4c;
        total = region + 0x30;
    }
    p = (Unk_0213af58 *)parent->alloc(total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x30;
        h = func_021008e0(q, region, data_0213af4c);
        if (h == NULL) {
            parent->free(p);
            p = NULL;
        } else {
            new (p) Unk_0213af58(q, region, parent, h);
        }
    }
    return p;
}

extern "C" Unk_0213afb0 *func_020e8da0(u32 size, Unk_020e8b94 *parent) {
    u32 region;
    u32 total;
    Unk_0213afb0 *p;
    void *q;
    void *h;
    if (parent == NULL) parent = data_021f482c;
    if (size == 0xffffffff) {
        total = parent->maxAlloc(4);
        if (total < 0x48) return NULL;
        region = total - 0x18;
    } else {
        region = ((size + 3) & ~3) + 0x30;
        total = region + 0x18;
    }
    p = (Unk_0213afb0 *)parent->alloc(total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x18;
        h = func_021010dc(q, region, data_0213af4c);
        if (h == NULL) {
            parent->free(p);
            p = NULL;
        } else {
            new (p) Unk_0213afb0(q, region, parent, h);
        }
    }
    return p;
}

void Unk_020e8b94::lock() {
    if (func_01ffa3b4() != 31 && (unk_10 & 0x2000) == 0) func_0206d49c();
    vfunc_08();
}

void Unk_020e8b94::unlock() {
    vfunc_0c();
}

void Unk_020e8b94::vfunc_08() {
}

void Unk_020e8b94::vfunc_0c() {
}

BOOL Unk_020e8b94::vfunc_10() {
    return TRUE;
}

void Unk_0213af58::vfunc_08() {
    func_02114480(&mutex);
}

void Unk_0213af58::vfunc_0c() {
    func_02114410(&mutex);
}

BOOL Unk_0213af58::vfunc_10() {
    return func_02114354(&mutex);
}

void Unk_020e8b94::destroy() {
    Unk_020e8b94 *parent;
    lock();
    vfunc_14();
    unk_04 = 0;
    unk_08 = 0;
    unlock();
    parent = unk_0c;
    this->~Unk_020e8b94();
    if (parent != NULL) parent->free(this);
}

void Unk_020e8b94::destroy2() {
    destroy();
}

void Unk_0213af58::vfunc_14() {
    func_021008d4(unk_14);
    unk_14 = NULL;
}

void Unk_0213afb0::vfunc_14() {
    func_021010d0(unk_14);
    unk_14 = NULL;
}

void *Unk_020e8b94::alloc(u32 size, s32 align) {
    void *p;
    lock();
    if (size == 0xffffffff) size = maxAlloc(align);
    p = vfunc_18(size, align);
    if (data_021f481c != NULL && (unk_10 & 0x400)) data_021f481c(this, p, size, align);
    if (p == NULL && (unk_10 & 0x4000)) func_0206d49c();
    unlock();
    return p;
}

void *Unk_0213af58::vfunc_18(u32 size, s32 align) {
    return func_02100890(unk_14, size, align);
}

void *Unk_0213afb0::vfunc_18(u32 size, s32 align) {
    return func_02101088(unk_14, size, align);
}

BOOL Unk_0213af58::vfunc_24() {
    return TRUE;
}

BOOL Unk_0213afb0::vfunc_24() {
    return TRUE;
}

void Unk_020e8b94::call_28() {
    lock();
    vfunc_28();
    unlock();
}

void Unk_0213af58::vfunc_28() {
}

void Unk_0213afb0::vfunc_28() {
}

u32 Unk_020e8b94::call_34() {
    u32 r;
    lock();
    r = vfunc_34();
    unlock();
    return r;
}

u32 Unk_0213af58::vfunc_34() {
    return func_02100618(unk_14, 4);
}

u32 Unk_0213afb0::vfunc_34() {
    return func_02101008(unk_14, 4);
}

u32 Unk_020e8b94::call_38() {
    u32 r;
    lock();
    r = vfunc_38();
    unlock();
    return r;
}

u32 Unk_0213af58::vfunc_38() {
    return func_02100618(unk_14, 4);
}

u32 Unk_0213afb0::vfunc_38() {
    return func_02101008(unk_14, 4);
}

u32 Unk_020e8b94::maxAlloc(s32 align) {
    u32 r;
    lock();
    r = vfunc_3c(align);
    unlock();
    return r;
}

u32 Unk_0213af58::vfunc_3c(s32 align) {
    return func_02100618(unk_14, align);
}

u32 Unk_0213afb0::vfunc_3c(s32 align) {
    return func_02101008(unk_14, align);
}

u32 Unk_0213af58::vfunc_40() {
    return func_021006a0(unk_14);
}

u32 Unk_0213afb0::vfunc_40() {
    return func_02101008(unk_14, 4);
}

s32 Unk_020e8b94::resize(void *p, u32 size) {
    s32 r;
    lock();
    r = vfunc_2c(p, size);
    unlock();
    return r;
}

s32 Unk_0213af58::vfunc_2c(void *p, u32 size) {
    return func_02100708(unk_14, p, size);
}

s32 Unk_0213afb0::vfunc_2c(void *p, u32 size) {
    return (s32)func_02100e7c(unk_14);
}

void Unk_020e8b94::free(void *p) {
    if (p == NULL) return;
    lock();
    if (data_021f4814 != NULL && (unk_10 & 0x800)) data_021f4814(this, p);
    vfunc_1c(p);
    unlock();
}

void Unk_0213af58::vfunc_1c(void *p) {
    if (p == NULL) return;
    func_021006c8(unk_14, p);
}

void Unk_0213afb0::vfunc_1c(void *p) {
    if (p == NULL) return;
    func_0206d49c();
}

void Unk_020e8b94::freeAll() {
    lock();
    if (data_021f4814 != NULL && (unk_10 & 0x800)) data_021f4814(this, NULL);
    vfunc_20();
    unlock();
}

extern "C" void func_020e8844(void *block, void *heap, u32 param) {
    func_021006c8(heap, block);
}

void Unk_0213af58::vfunc_20() {
    func_021005ac(unk_14, func_020e8844, 0);
}

void Unk_0213afb0::vfunc_20() {
    func_02101048(unk_14, 3);
}

u32 Unk_0213af58::vfunc_30(void *p) {
    return func_021005a4(p);
}

u32 Unk_0213afb0::vfunc_30(void *p) {
    return (u32)-1;
}

void *Unk_0213af58::vfunc_44() {
    return (void *)func_02100608(unk_14);
}

void *Unk_0213afb0::vfunc_44() {
    return NULL;
}

void *Unk_0213af58::vfunc_48() {
    return (void *)func_02100600(unk_14);
}

void *Unk_0213afb0::vfunc_48() {
    return NULL;
}

void *Unk_020e8b94::call_4c() {
    void *r;
    lock();
    r = vfunc_4c();
    if (r == NULL && (unk_10 & 0x4000)) func_0206d49c();
    unlock();
    return r;
}

void *Unk_0213af58::vfunc_4c() {
    return NULL;
}

void *Unk_0213afb0::vfunc_4c() {
    void *state = func_02100f20(unk_14);
    void *p;
    if (state == NULL) return NULL;
    p = (u8 *)state + 0x18;
    if (unk_0c->resize(this, (u32)p) < 0) return NULL;
    unk_08 = (u32)state;
    return p;
}

u32 Unk_020e8b94::setFlags(u32 flags) {
    u32 irq = func_01ffa2ec();
    u32 old = unk_10;
    if (!(flags & 0x8000)) unk_10 = flags;
    func_01ffa3d4(irq);
    return old;
}

extern "C" Unk_020e8b94 *func_020e86c8(Unk_020e8b94 *heap) {
    u32 irq = func_01ffa2ec();
    Unk_020e8b94 *old = data_021f482c;
    data_021f482c = heap;
    func_01ffa3d4(irq);
    return old;
}

extern "C" void func_020e866c(void);

extern "C" Unk_020e8b94 *func_020e8698(u32 size, Unk_020e8b94 *parent) {
    Unk_020e8b94 *heap = func_020e8da0(size, parent);
    if (heap == NULL) return NULL;
    func_020e866c();
    func_020e86c8(heap);
    return heap;
}

extern "C" void func_020e866c(void) {
    data_021f4834[data_021fcc2c.current->id] = data_021f482c;
}

extern "C" void func_020e8634(void) {
    u32 id = data_021fcc2c.current->id;
    func_020e86c8(data_021f4834[id]);
    data_021f4834[id] = NULL;
}

extern "C" void *func_020e8628(Unk_020e8b94 *heap, u32 size, s32 align) {
    return heap->alloc(size, align);
}

extern "C" void *func_020e8618(Unk_020e8b94 *heap, u32 size) {
    return heap->alloc(size, -4);
}

extern "C" void *func_020e8608(Unk_020e8b94 *heap, u32 size) {
    return heap->alloc(size, 4);
}

extern "C" void func_020e85fc(Unk_020e8b94 *heap, void *p) {
    heap->free(p);
}

extern "C" void func_020e85d8(u32 size, Unk_020e8b94 *parent) {
    data_021f4818 = func_020e8e7c(size, parent);
}

extern "C" void *func_020e85b4(u32 size, s32 align) {
    return data_021f482c->alloc(size, align);
}

extern "C" void *func_020e8594(u32 size) {
    return data_021f482c->alloc(size, -4);
}

extern "C" void *func_020e8574(u32 size) {
    return data_021f482c->alloc(size, 4);
}

extern "C" void func_020e8558(void *p) {
    data_021f482c->free(p);
}

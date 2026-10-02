// mwcc-flags: -nothumb -O4,p
// G001b: heap wrappers and heap class methods, autoload_2 0x020e8558-0x020e8c48. mwcc 1.2/base, C++, ARM, -O4,p.
// PARTIAL translation unit: the same source file continues at 0x020e8c48 (the remaining virtuals, lock/unlock,
// creation, constructors and destructors up to about 0x020e9150) and owns three vtables in .data
// (0x0213af50 exp heap, 0x0213afa8 frame heap, 0x0213b000 abstract base; object pointers are vtable + 8).
// Until that part is done the methods are written as extern "C" functions taking the object first, under their
// symbols.txt names, and the class below only DECLARES its virtuals (no vtable is emitted here).
#include "types.h"

class Unk_020e8b94 {
public:
    virtual ~Unk_020e8b94(); // 0x00 / 0x04
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
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

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ Unk_020e8b94 *unk_0c; // parent heap
    /* 0x10 */ u32 unk_10; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x4000 stop when out of memory
    /* 0x14 */ void *unk_14; // NNS_Fnd heap handle
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

typedef void (*HeapFreeHook)(Unk_020e8b94 *heap, void *p);
typedef void (*HeapAllocHook)(Unk_020e8b94 *heap, void *p, u32 size, s32 align);

extern "C" {
u32 func_01ffa2ec(void); // OS_DisableInterrupts
u32 func_01ffa3d4(u32); // OS_RestoreInterrupts
void func_0206d49c(void); // Thumb, in main: fatal stop
void *func_02100f20(void *heap); // NNS_FndRecordStateForFrmHeap-like: returns the state block
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

extern HeapFreeHook data_021f4814;
extern Unk_020e8b94 *data_021f4818;
extern HeapAllocHook data_021f481c;
extern Unk_020e8b94 *data_021f482c; // current heap
extern Unk_020e8b94 *data_021f4834[]; // per thread id: heap saved by func_020e866c
extern OSThreadInfo_View data_021fcc2c; // OSi_ThreadInfo

void func_020e866c(void);
Unk_020e8b94 *func_020e86c8(Unk_020e8b94 *heap);
void func_020e8844(void *block, void *heap, u32 param);
void func_020e8908(Unk_020e8b94 *self, void *p);
s32 func_020e899c(Unk_020e8b94 *self, void *p, u32 size);
u32 func_020e8a24(Unk_020e8b94 *self, s32 align);
void *func_020e8b94(Unk_020e8b94 *self, u32 size, s32 align);
void func_020e8d64(Unk_020e8b94 *self); // lock
void func_020e8d44(Unk_020e8b94 *self); // unlock
Unk_020e8b94 *func_020e8da0(u32 size, Unk_020e8b94 *parent);
Unk_020e8b94 *func_020e8e7c(u32 size, Unk_020e8b94 *parent);
}

extern "C" void *func_020e8b94(Unk_020e8b94 *self, u32 size, s32 align) {
    void *p;
    func_020e8d64(self);
    if (size == 0xffffffff) size = func_020e8a24(self, align);
    p = self->vfunc_18(size, align);
    if (data_021f481c != NULL && (self->unk_10 & 0x400)) data_021f481c(self, p, size, align);
    if (p == NULL && (self->unk_10 & 0x4000)) func_0206d49c();
    func_020e8d44(self);
    return p;
}

extern "C" void *func_020e8b84(Unk_020e8b94 *self, u32 size, s32 align) {
    return func_02100890(self->unk_14, size, align);
}

extern "C" void *func_020e8b74(Unk_020e8b94 *self, u32 size, s32 align) {
    return func_02101088(self->unk_14, size, align);
}

extern "C" BOOL func_020e8b6c(Unk_020e8b94 *self) {
    return TRUE;
}

extern "C" BOOL func_020e8b64(Unk_020e8b94 *self) {
    return TRUE;
}

extern "C" void func_020e8b38(Unk_020e8b94 *self) {
    func_020e8d64(self);
    self->vfunc_28();
    func_020e8d44(self);
}

extern "C" void func_020e8b34(Unk_020e8b94 *self) {
}

extern "C" void func_020e8b30(Unk_020e8b94 *self) {
}

extern "C" u32 func_020e8af4(Unk_020e8b94 *self) {
    u32 r;
    func_020e8d64(self);
    r = self->vfunc_34();
    func_020e8d44(self);
    return r;
}

extern "C" u32 func_020e8ae0(Unk_020e8b94 *self) {
    return func_02100618(self->unk_14, 4);
}

extern "C" u32 func_020e8acc(Unk_020e8b94 *self) {
    return func_02101008(self->unk_14, 4);
}

extern "C" u32 func_020e8a90(Unk_020e8b94 *self) {
    u32 r;
    func_020e8d64(self);
    r = self->vfunc_38();
    func_020e8d44(self);
    return r;
}

extern "C" u32 func_020e8a7c(Unk_020e8b94 *self) {
    return func_02100618(self->unk_14, 4);
}

extern "C" u32 func_020e8a68(Unk_020e8b94 *self) {
    return func_02101008(self->unk_14, 4);
}

extern "C" u32 func_020e8a24(Unk_020e8b94 *self, s32 align) {
    u32 r;
    func_020e8d64(self);
    r = self->vfunc_3c(align);
    func_020e8d44(self);
    return r;
}

extern "C" u32 func_020e8a14(Unk_020e8b94 *self, s32 align) {
    return func_02100618(self->unk_14, align);
}

extern "C" u32 func_020e8a04(Unk_020e8b94 *self, s32 align) {
    return func_02101008(self->unk_14, align);
}

extern "C" u32 func_020e89f4(Unk_020e8b94 *self) {
    return func_021006a0(self->unk_14);
}

extern "C" u32 func_020e89e0(Unk_020e8b94 *self) {
    return func_02101008(self->unk_14, 4);
}

extern "C" s32 func_020e899c(Unk_020e8b94 *self, void *p, u32 size) {
    s32 r;
    func_020e8d64(self);
    r = self->vfunc_2c(p, size);
    func_020e8d44(self);
    return r;
}

extern "C" s32 func_020e898c(Unk_020e8b94 *self, void *p, u32 size) {
    return func_02100708(self->unk_14, p, size);
}

extern "C" void *func_020e897c(Unk_020e8b94 *self) {
    return func_02100e7c(self->unk_14);
}

extern "C" void func_020e8908(Unk_020e8b94 *self, void *p) {
    if (p == NULL) return;
    func_020e8d64(self);
    if (data_021f4814 != NULL && (self->unk_10 & 0x800)) data_021f4814(self, p);
    self->vfunc_1c(p);
    func_020e8d44(self);
}

extern "C" void func_020e88dc(Unk_020e8b94 *self, void *p) {
    if (p == NULL) return;
    func_021006c8(self->unk_14, p);
}

extern "C" void func_020e88b4(Unk_020e8b94 *self, void *p) {
    if (p == NULL) return;
    func_0206d49c();
}

extern "C" void func_020e885c(Unk_020e8b94 *self) {
    func_020e8d64(self);
    if (data_021f4814 != NULL && (self->unk_10 & 0x800)) data_021f4814(self, NULL);
    self->vfunc_20();
    func_020e8d44(self);
}

extern "C" void func_020e8844(void *block, void *heap, u32 param) {
    func_021006c8(heap, block);
}

extern "C" void func_020e8828(Unk_020e8b94 *self) {
    func_021005ac(self->unk_14, func_020e8844, 0);
}

extern "C" u32 func_020e8814(Unk_020e8b94 *self) {
    return func_02101048(self->unk_14, 3);
}

extern "C" u32 func_020e8804(Unk_020e8b94 *self, void *p) {
    return func_021005a4(p);
}

extern "C" s32 func_020e87fc(Unk_020e8b94 *self) {
    return -1;
}

extern "C" u32 func_020e87ec(Unk_020e8b94 *self) {
    return func_02100608(self->unk_14);
}

extern "C" void *func_020e87e4(Unk_020e8b94 *self) {
    return NULL;
}

extern "C" u32 func_020e87d4(Unk_020e8b94 *self) {
    return func_02100600(self->unk_14);
}

extern "C" void *func_020e87cc(Unk_020e8b94 *self) {
    return NULL;
}

extern "C" void *func_020e877c(Unk_020e8b94 *self) {
    void *r;
    func_020e8d64(self);
    r = self->vfunc_4c();
    if (r == NULL && (self->unk_10 & 0x4000)) func_0206d49c();
    func_020e8d44(self);
    return r;
}

extern "C" void *func_020e8774(Unk_020e8b94 *self) {
    return NULL;
}

extern "C" void *func_020e8728(Unk_020e8b94 *self) {
    void *state = func_02100f20(self->unk_14);
    void *p;
    if (state == NULL) return NULL;
    p = (u8 *)state + 0x18;
    if (func_020e899c(self->unk_0c, self, (u32)p) < 0) return NULL;
    self->unk_08 = state;
    return p;
}

extern "C" u32 func_020e86fc(Unk_020e8b94 *self, u32 flags) {
    u32 irq = func_01ffa2ec();
    u32 old = self->unk_10;
    if (!(flags & 0x8000)) self->unk_10 = flags;
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
    return func_020e8b94(heap, size, align);
}

extern "C" void *func_020e8618(Unk_020e8b94 *heap, u32 size) {
    return func_020e8b94(heap, size, -4);
}

extern "C" void *func_020e8608(Unk_020e8b94 *heap, u32 size) {
    return func_020e8b94(heap, size, 4);
}

extern "C" void func_020e85fc(Unk_020e8b94 *heap, void *p) {
    func_020e8908(heap, p);
}

extern "C" void func_020e85d8(u32 size, Unk_020e8b94 *parent) {
    data_021f4818 = func_020e8e7c(size, parent);
}

extern "C" void *func_020e85b4(u32 size, s32 align) {
    return func_020e8b94(data_021f482c, size, align);
}

extern "C" void *func_020e8594(u32 size) {
    return func_020e8b94(data_021f482c, size, -4);
}

extern "C" void *func_020e8574(u32 size) {
    return func_020e8b94(data_021f482c, size, 4);
}

extern "C" void func_020e8558(void *p) {
    func_020e8908(data_021f482c, p);
}


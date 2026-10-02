// mwcc-flags: -nothumb -O4,p
// G002a: heap file, middle part: autoload_2 0x020e8c48-0x020e914c (25 functions). mwcc 1.2/base, C++, ARM, -O4,p.
// PARTIAL translation unit (same shape as G001b, which is the first part): the heap source file spans
// 0x020e8558-0x020e92f4 and owns the vtables 0x0213af50 (exp heap), 0x0213afa8 (frame heap), 0x0213b000 (base) in .data.
// Methods are extern "C" functions taking the object first; the class only DECLARES its virtuals (no vtable emitted).
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
    /* 0x10 */ u32 unk_10; // flags: 0x400 call alloc hook, 0x800 call free hook, 0x2000 allow outside system mode, 0x4000 stop when out of memory
    /* 0x14 */ void *unk_14; // NNS_Fnd heap handle
};

typedef void (*HeapFreeHook)(Unk_020e8b94 *heap, void *p);
typedef void (*HeapAllocHook)(Unk_020e8b94 *heap, void *p, u32 size, s32 align);

extern "C" {
u32 func_01ffa3b4(void); // OS_GetProcMode
void func_0206d49c(void); // Thumb, in main: fatal stop
void func_021010d0(void *heap);
void func_021008d4(void *heap);
void *func_021010dc(void *p, u32 size, u32 opt);
void *func_021008e0(void *p, u32 size, u32 opt);
void func_02114354(void *p);
void func_02114410(void *p);
void func_02114480(void *p);
void func_0211450c(void *p);
void _ZdlPv(void *p); // operator delete

extern u16 data_0213af4c;
extern u32 data_0213af58[];
extern u32 data_0213afb0[];
extern u32 data_0213b008[];
extern Unk_020e8b94 *data_021f482c; // current heap

void func_020e8908(Unk_020e8b94 *self, void *p);
u32 func_020e8a24(Unk_020e8b94 *self, s32 align);
void *func_020e8b94(Unk_020e8b94 *self, u32 size, s32 align);
void func_020e8c94(Unk_020e8b94 *self);
void func_020e8d64(Unk_020e8b94 *self); // lock
void func_020e8d44(Unk_020e8b94 *self); // unlock
Unk_020e8b94 *func_020e8da0(u32 size, Unk_020e8b94 *parent);
Unk_020e8b94 *func_020e8e7c(u32 size, Unk_020e8b94 *parent);
Unk_020e8b94 *func_020e8f58(Unk_020e8b94 *p, u32 n);
void func_020e906c(Unk_020e8b94 *self);
Unk_020e8b94 *func_020e90b0(Unk_020e8b94 *self, void *block, u32 size, Unk_020e8b94 *parent, void *handle);
Unk_020e8b94 *func_020e90dc(Unk_020e8b94 *self, void *block, u32 size, Unk_020e8b94 *parent, void *handle);
void func_020e9110(Unk_020e8b94 *self, u32 a, void *b, Unk_020e8b94 *parent);
}

extern "C" void func_020e9110(Unk_020e8b94 *self, u32 a, void *b, Unk_020e8b94 *parent) {
    *(u32 **)self = data_0213b008;
    self->unk_04 = a;
    self->unk_08 = b;
    self->unk_0c = parent;
    self->unk_10 = 0;
    self->unk_10 = 0x4000;
}

extern "C" Unk_020e8b94 *func_020e90dc(Unk_020e8b94 *self, void *block, u32 size, Unk_020e8b94 *parent, void *handle) {
    func_020e9110(self, (u32)block, (void *)size, parent);
    *(u32 **)self = data_0213af58;
    self->unk_14 = handle;
    func_0211450c((u8 *)self + 0x18);
    return self;
}

extern "C" Unk_020e8b94 *func_020e90b0(Unk_020e8b94 *self, void *block, u32 size, Unk_020e8b94 *parent, void *handle) {
    func_020e9110(self, (u32)block, (void *)size, parent);
    *(u32 **)self = data_0213afb0;
    self->unk_14 = handle;
    return self;
}

extern "C" void func_020e90a0(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213b008;
}

extern "C" Unk_020e8b94 *func_020e907c(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213b008;
    _ZdlPv(self);
    return self;
}

extern "C" void func_020e906c(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213b008;
}

extern "C" Unk_020e8b94 *func_020e9048(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213af58;
    func_020e906c(self);
    return self;
}

extern "C" Unk_020e8b94 *func_020e901c(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213af58;
    func_020e906c(self);
    _ZdlPv(self);
    return self;
}

extern "C" Unk_020e8b94 *func_020e8ff8(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213afb0;
    func_020e906c(self);
    return self;
}

extern "C" Unk_020e8b94 *func_020e8fcc(Unk_020e8b94 *self) {
    *(u32 **)self = data_0213afb0;
    func_020e906c(self);
    _ZdlPv(self);
    return self;
}

extern "C" Unk_020e8b94 *func_020e8f58(Unk_020e8b94 *p, u32 n) {
    u32 region = n - 0x30;
    void *q = (u8 *)p + 0x30;
    void *h = func_021008e0(q, region, data_0213af4c);
    if (h != NULL) {
        if (p != NULL) func_020e90dc(p, q, region, NULL, h);
        return p;
    }
    return NULL;
}

extern "C" Unk_020e8b94 *func_020e8e7c(u32 size, Unk_020e8b94 *parent) {
    u32 region;
    u32 total;
    Unk_020e8b94 *p;
    void *q;
    void *h;
    if (parent == NULL) parent = data_021f482c;
    if (size == 0xffffffff) {
        total = func_020e8a24(parent, 4);
        if (total < 0x7c) return NULL;
        region = total - 0x30;
    } else {
        region = ((size + 3) & ~3) + 0x4c;
        total = region + 0x30;
    }
    p = (Unk_020e8b94 *)func_020e8b94(parent, total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x30;
        h = func_021008e0(q, region, data_0213af4c);
        if (h == NULL) {
            func_020e8908(parent, p);
            p = NULL;
        } else if (p != NULL) {
            func_020e90dc(p, q, region, parent, h);
        }
    }
    return p;
}

extern "C" Unk_020e8b94 *func_020e8da0(u32 size, Unk_020e8b94 *parent) {
    u32 region;
    u32 total;
    Unk_020e8b94 *p;
    void *q;
    void *h;
    if (parent == NULL) parent = data_021f482c;
    if (size == 0xffffffff) {
        total = func_020e8a24(parent, 4);
        if (total < 0x48) return NULL;
        region = total - 0x18;
    } else {
        region = ((size + 3) & ~3) + 0x30;
        total = region + 0x18;
    }
    p = (Unk_020e8b94 *)func_020e8b94(parent, total, 4);
    if (p != NULL) {
        q = (u8 *)p + 0x18;
        h = func_021010dc(q, region, data_0213af4c);
        if (h == NULL) {
            func_020e8908(parent, p);
            p = NULL;
        } else if (p != NULL) {
            func_020e90b0(p, q, region, parent, h);
        }
    }
    return p;
}

extern "C" void func_020e8d64(Unk_020e8b94 *self) {
    if (func_01ffa3b4() != 31 && (self->unk_10 & 0x2000) == 0) func_0206d49c();
    self->vfunc_08();
}

extern "C" void func_020e8d44(Unk_020e8b94 *self) {
    self->vfunc_0c();
}

extern "C" void func_020e8d40(Unk_020e8b94 *self) {
}

extern "C" void func_020e8d3c(Unk_020e8b94 *self) {
}

extern "C" BOOL func_020e8d34(Unk_020e8b94 *self) {
    return TRUE;
}

extern "C" void func_020e8d24(Unk_020e8b94 *self) {
    func_02114480((u8 *)self + 0x18);
}

extern "C" void func_020e8d14(Unk_020e8b94 *self) {
    func_02114410((u8 *)self + 0x18);
}

extern "C" void func_020e8d04(Unk_020e8b94 *self) {
    func_02114354((u8 *)self + 0x18);
}

extern "C" void func_020e8c94(Unk_020e8b94 *self) {
    Unk_020e8b94 *parent;
    func_020e8d64(self);
    self->vfunc_14();
    self->unk_04 = 0;
    self->unk_08 = 0;
    func_020e8d44(self);
    parent = self->unk_0c;
    self->~Unk_020e8b94();
    if (parent != NULL) func_020e8908(parent, self);
}

extern "C" void func_020e8c88(Unk_020e8b94 *self) {
    func_020e8c94(self);
}

extern "C" void func_020e8c68(Unk_020e8b94 *self) {
    func_021008d4(self->unk_14);
    self->unk_14 = NULL;
}

extern "C" void func_020e8c48(Unk_020e8b94 *self) {
    func_021010d0(self->unk_14);
    self->unk_14 = NULL;
}


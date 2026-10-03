#include "types.h"

extern "C" {
void *File_LoadAlloc(void *a, void *heap, s32 b, s32 c);
}

extern "C" {
void *NNS_G3dGetMdlSet(void *h);
}

extern "C" {
void *NNS_G3dGetTex(void *h);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
void NNS_G3dBindMdlTex(void *a, void *b);
}

extern "C" {
void NNS_G3dBindMdlPltt(void *a, void *b);
}

extern "C" {
void *func_02055928(void *a, void *b);
}

extern "C" {
void *func_0205588c(void *a, void *b);
}

extern "C" {
extern void *gCurrentHeap;
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020e45ec();
    virtual BOOL vfunc_00();
    void func_020b89c8(void);
    BOOL func_020b89f0(u32 *a, u8 b);
};

class TexVramSlot {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    TexVramSlot();
    virtual ~TexVramSlot();
    void func_020551f4(u32 a, u32 b, u32 c);
    void func_02055210(void *p);
};

class ModelResource {
public:
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    Unk_020e45ec unk_14;
    u8 unk_30;
    u8 unk_31;

    ModelResource();
    virtual ~ModelResource();
    u32 func_02055014(void *a, TexVramSlot *b, void *c);
    u32 func_02055090(void *res, TexVramSlot *b, void *tex, void *heap);
    void func_0205516c(void);
    void *func_0205500c(void);
    void *func_02055010(void);
};

static inline u8 *Unk_02054b70_Off(u8 *p) {
    return p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

static inline BOOL Unk_02055014_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

void TexVramSlot::func_020551f4(u32 a, u32 b, u32 c) {
    unk_04 = a;
    unk_08 = b;
    unk_0c = c;
    unk_11 = 1;
}

ModelResource::ModelResource() {
    unk_04 = 0;
    unk_08 = NULL;
    unk_0c = NULL;
    unk_10 = NULL;
    unk_30 = 0;
    unk_31 = 0;
}

ModelResource::~ModelResource() {}

void ModelResource::func_0205516c(void) {
    if (unk_04 != 0) {
        Heap_Free(unk_08, (void *)unk_04);
    }
    unk_04 = 0;
    unk_08 = NULL;
    unk_0c = NULL;
    unk_10 = NULL;
    unk_30 = 0;
    unk_14.func_020b89c8();
}

u32 ModelResource::func_02055090(void *res, TexVramSlot *b, void *tex, void *heap) {
    u32 st = unk_30;
    if (st == 3) {
        return st;
    }
    if (heap == NULL) {
        heap = gCurrentHeap;
    }
    if (st == 0) {
        unk_04 = (u32)File_LoadAlloc(res, heap, -4, 0);
        unk_08 = heap;
        void *q = NNS_G3dGetTex((void *)unk_04);
        b->func_02055210(q);
        unk_14.func_020b89f0((u32 *)q, 1);
        unk_30 = 1;
        return unk_30;
    }
    if (st == 1) {
        if (!Unk_02055014_IsTwo(unk_14.unk_0d)) {
            return st;
        }
        unk_30 = 2;
    }
    if (unk_30 == 2) {
        u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet((void *)unk_04));
        unk_0c = func_02055928(p, tex);
        void *q = NNS_G3dGetTex((void *)unk_04);
        NNS_G3dBindMdlTex(unk_0c, q);
        NNS_G3dBindMdlPltt(unk_0c, q);
        Heap_Free(unk_08, (void *)unk_04);
        unk_08 = NULL;
        unk_04 = 0;
        unk_30 = 3;
    }
    return unk_30;
}

u32 ModelResource::func_02055014(void *a, TexVramSlot *b, void *c) {
    u32 st = unk_30;
    if (st == 3) {
        return st;
    }
    if (st == 0) {
        b->func_02055210(a);
        unk_14.func_020b89f0((u32 *)a, 1);
        unk_30 = 1;
        return unk_30;
    }
    if (st == 1) {
        if (!Unk_02055014_IsTwo(unk_14.unk_0d)) {
            return st;
        }
        unk_30 = 2;
    }
    if (unk_30 == 2) {
        unk_10 = func_0205588c(a, c);
        unk_30 = 3;
    }
    return unk_30;
}

void *ModelResource::func_02055010(void) {
    return unk_0c;
}

void *ModelResource::func_0205500c(void) {
    return unk_10;
}


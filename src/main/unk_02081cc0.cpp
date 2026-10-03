#include "types.h"

extern "C" {
s32 NpcBodyAnimPool_Get();
s32 _ZN10NpcResPool13clearAllSlotsEv();
s32 NpcClothTexPool_Get();
s32 NpcTexPatBufRefPool_Get();
s32 NpcFaceAnimPool_Get();
s32 NpcTexPatHeapPool_Get();
s32 NpcHeldItemModelPool_Get();
s32 SpNpcAnimHeapRefPool_Get();
s32 VillagerAnimHeapRefPool_Get();
s32 _ZN20NpcHeldItemModelPool8getModelEj(void *, s32);
s32 _ZN20NpcHeldItemModelPool8loadItemEjPt(void *, s32, s32);
s32 _ZN17NpcTexPatHeapPool10getHeapRefEj(void *, s32);
s32 _ZN15NpcFaceAnimPool11getFaceAnimEj(void *, s32);
s32 _ZN19NpcTexPatBufRefPool9getBufRefEj(void *, s32);
s32 _ZN15NpcClothTexPool11getClothTexEj(void *, s32);
s32 _ZN20SpNpcAnimHeapRefPool10getHeapRefEj(void *, s32);
s32 _ZN23VillagerAnimHeapRefPool10getHeapRefEj(void *, s32);
s32 _ZN15NpcBodyAnimPool8getLayerEjj(void *, s32, u32);
s32 _ZN10NpcResPool12findFreeSlotEv(void *);
void func_02081d10();
}

struct NpcResPool {
    s32 unk_04;
    virtual ~NpcResPool();
    virtual void occupySlot(u32 i) = 0;
    virtual void releaseSlot(u32 i);
    virtual void *getSlot(u32 i) = 0;
};

// Same object as Unk_020e0718 (symbols.txt names two of its methods after the class Unk_020821b4); declaration only.
struct Unk_020821b4 {
    s8 unk_04;
    Unk_020821b4();
    virtual ~Unk_020821b4();
    virtual NpcResPool *vfunc_08() = 0;
    void *func_02081d4c();
    void *func_02081d6c(s32 a);
};

struct Unk_020e0768 : Unk_020821b4 {
    Unk_020e0768();
    virtual ~Unk_020e0768();
    virtual NpcResPool *vfunc_08();
    void *func_02081f44();
};

struct Unk_020e06c8 : Unk_020821b4 {
    Unk_020e06c8();
    virtual ~Unk_020e06c8();
    virtual NpcResPool *vfunc_08();
    void *func_02081e5c();
};

struct Unk_020e06dc : Unk_020821b4 {
    Unk_020e06dc();
    virtual ~Unk_020e06dc();
    virtual NpcResPool *vfunc_08();
    void *func_0208202c();
};

struct Unk_020e06f0 : Unk_020821b4 {
    Unk_020e06f0();
    virtual ~Unk_020e06f0();
    virtual NpcResPool *vfunc_08();
};

struct Unk_020e0704 : Unk_020821b4 {
    Unk_020e0704();
    virtual ~Unk_020e0704();
    virtual NpcResPool *vfunc_08();
};

struct Unk_020e0718 {
    s8 unk_04;
    Unk_020e0718();
    virtual ~Unk_020e0718();
    virtual NpcResPool *vfunc_08() = 0;
    void *func_020820a0(u32 off);
    void func_0208211c();
    BOOL func_02082140();
};

struct Unk_020e072c : Unk_020e0718 {
    Unk_020e072c();
    virtual ~Unk_020e072c();
    virtual NpcResPool *vfunc_08();
    void *func_02081de8();
};

struct Unk_020e0740 : Unk_020e0718 {
    Unk_020e0740();
    virtual ~Unk_020e0740();
    virtual NpcResPool *vfunc_08();
    void *func_02081fb8();
};

struct Unk_020e0754 : Unk_020e0718 {
    Unk_020e0754();
    virtual ~Unk_020e0754();
    virtual NpcResPool *vfunc_08();
    void *func_02081ed0();
};

Unk_020e0718::Unk_020e0718() : unk_04(-1) {}

Unk_020e0718::~Unk_020e0718() {}

BOOL Unk_020e0718::func_02082140() {
    NpcResPool *c = vfunc_08();
    BOOL r = FALSE;
    if (c) {
        if (unk_04 == -1) {
            u32 i = _ZN10NpcResPool12findFreeSlotEv(c);
            if (i < (u32)c->unk_04) {
                unk_04 = i;
                c->occupySlot(unk_04);
                r = TRUE;
            }
        } else {
            r = TRUE;
        }
    }
    return r;
}

void Unk_020e0718::func_0208211c() {
    NpcResPool *c = vfunc_08();
    if (c) {
        c->releaseSlot(unk_04);
        unk_04 = -1;
    }
}

Unk_020e0704::Unk_020e0704() {}

Unk_020e0704::~Unk_020e0704() {}

void *Unk_020e0718::func_020820a0(u32 off) {
    NpcResPool *c = vfunc_08();
    void *r = 0;
    if (c) {
        r = (void *)_ZN15NpcBodyAnimPool8getLayerEjj(c, unk_04, off);
    }
    return r;
}

Unk_020e06f0::Unk_020e06f0() {}

Unk_020e06f0::~Unk_020e06f0() {}

void *Unk_020e06dc::func_0208202c() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN23VillagerAnimHeapRefPool10getHeapRefEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e06dc::Unk_020e06dc() {}

Unk_020e06dc::~Unk_020e06dc() {}

void *Unk_020e0740::func_02081fb8() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN20SpNpcAnimHeapRefPool10getHeapRefEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0740::Unk_020e0740() {}

Unk_020e0740::~Unk_020e0740() {}

void *Unk_020e0768::func_02081f44() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN15NpcClothTexPool11getClothTexEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0768::Unk_020e0768() {}

Unk_020e0768::~Unk_020e0768() {}

void *Unk_020e0754::func_02081ed0() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN19NpcTexPatBufRefPool9getBufRefEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0754::Unk_020e0754() {}

Unk_020e0754::~Unk_020e0754() {}

void *Unk_020e06c8::func_02081e5c() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN15NpcFaceAnimPool11getFaceAnimEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e06c8::Unk_020e06c8() {}

Unk_020e06c8::~Unk_020e06c8() {}

void *Unk_020e072c::func_02081de8() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN17NpcTexPatHeapPool10getHeapRefEj(p, (s8)unk_04);
    }
    return r;
}

Unk_020e072c::Unk_020e072c() {}

Unk_020e072c::~Unk_020e072c() {}

void *Unk_020821b4::func_02081d6c(s32 a) {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN20NpcHeldItemModelPool8loadItemEjPt(p, (s8)unk_04, a);
    }
    return r;
}

void *Unk_020821b4::func_02081d4c() {
    void *p = vfunc_08();
    if (p) {
        return (void *)_ZN20NpcHeldItemModelPool8getModelEj(p, (s8)unk_04);
    }
    return 0;
}

extern "C" void func_02081d10() {
    NpcBodyAnimPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
    NpcClothTexPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
    NpcTexPatBufRefPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
    NpcFaceAnimPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
    NpcTexPatHeapPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
    NpcHeldItemModelPool_Get();
    _ZN10NpcResPool13clearAllSlotsEv();
}

extern "C" void func_02081d08() { func_02081d10(); }

extern "C" void func_02081d00() { func_02081d10(); }

NpcResPool *Unk_020e072c::vfunc_08() { return (NpcResPool *)NpcHeldItemModelPool_Get(); }

NpcResPool *Unk_020e06c8::vfunc_08() { return (NpcResPool *)NpcTexPatHeapPool_Get(); }

NpcResPool *Unk_020e0754::vfunc_08() { return (NpcResPool *)NpcFaceAnimPool_Get(); }

NpcResPool *Unk_020e0768::vfunc_08() { return (NpcResPool *)NpcTexPatBufRefPool_Get(); }

NpcResPool *Unk_020e0740::vfunc_08() { return (NpcResPool *)NpcClothTexPool_Get(); }

NpcResPool *Unk_020e06dc::vfunc_08() { return (NpcResPool *)SpNpcAnimHeapRefPool_Get(); }

NpcResPool *Unk_020e06f0::vfunc_08() { return (NpcResPool *)VillagerAnimHeapRefPool_Get(); }

NpcResPool *Unk_020e0704::vfunc_08() { return (NpcResPool *)NpcBodyAnimPool_Get(); }


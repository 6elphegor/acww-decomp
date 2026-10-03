#include "types.h"

struct Unk_02082d68 {
    u8 unk_00;
    Unk_02082d68();
    ~Unk_02082d68();
};

struct NpcResPool {
    s32 unk_04;
    NpcResPool(s32 n);
    virtual ~NpcResPool();
    virtual void occupySlot(u32 i) = 0;
    virtual void releaseSlot(u32 i);
    virtual Unk_02082d68 *getSlot(u32 i) = 0;
    s32 findFreeSlot();
    void clearAllSlots();
};

extern "C" {
void HeldItemModel_Release(void *);
void HeldItemModel_Setup(void *, u32, u32, u16 *, u32, u32);
void _ZN12Unk_0205d1f813func_0205d20cEj(void *);
void _ZN12Unk_0205ce0c13func_0205cf84Ej(void *);
void _ZN12Unk_0205ca9413func_0205cba8Ev(void *);
void _ZN12Unk_0205ca9413func_0205cbb0Ej(void *);
void NpcTexPatBufRef_Assign(void *);
void SpNpcAnimHeapRef_Assign(void *);
void VillagerAnimHeapRef_Assign(void *);
void AnimSlotRef_Assign(void *);
struct SpNpcAnimHeapRefSlot;
void _ZN20SpNpcAnimHeapRefSlot6assignEv(SpNpcAnimHeapRefSlot *, u32);
}

struct HeldItemModel {
    u32 pad[26];
    HeldItemModel();
    ~HeldItemModel();
};
struct Unk_0205d1f8 {
    u8 pad;
    Unk_0205d1f8();
    ~Unk_0205d1f8();
};
struct Unk_0205ce0c {
    u8 pad;
    Unk_0205ce0c();
    ~Unk_0205ce0c();
};
struct NpcTexPatBufRef {
    u32 pad;
    NpcTexPatBufRef();
    ~NpcTexPatBufRef();
};
struct Unk_0205ca94 {
    u8 pad;
    Unk_0205ca94();
    ~Unk_0205ca94();
};
struct SpNpcAnimHeapRef {
    u32 unk_00;
    SpNpcAnimHeapRef();
    ~SpNpcAnimHeapRef();
};
struct VillagerAnimHeapRef {
    u32 unk_00;
    VillagerAnimHeapRef();
    ~VillagerAnimHeapRef();
};
struct Unk_0205c3a4 {
    Unk_0205c3a4();
    ~Unk_0205c3a4();
};

// ---- 0x020e077c
struct NpcFaceAnimSlot : Unk_02082d68 {
    NpcFaceAnimSlot();
    ~NpcFaceAnimSlot();
    Unk_0205ce0c unk_01;
    void assign(u32 id);
};

struct NpcFaceAnimPool : NpcResPool {
    NpcFaceAnimSlot unk_08[5];
    NpcFaceAnimPool();
    virtual ~NpcFaceAnimPool();
    virtual void occupySlot(u32 i);
    virtual NpcFaceAnimSlot *getSlot(u32 i);
    Unk_0205ce0c *getFaceAnim(u32 i);
};

extern NpcFaceAnimPool sNpcFaceAnimPool;
extern "C" NpcFaceAnimPool *NpcFaceAnimPool_Get();

// ---- 0x020e0798
struct VillagerAnimHeapRefSlot : Unk_02082d68 {
    VillagerAnimHeapRefSlot();
    ~VillagerAnimHeapRefSlot();
    VillagerAnimHeapRef unk_04;
    void assign(u32 x);
};

struct VillagerAnimHeapRefPool : NpcResPool {
    VillagerAnimHeapRefSlot unk_08[8];
    VillagerAnimHeapRefPool();
    virtual ~VillagerAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual VillagerAnimHeapRefSlot *getSlot(u32 i);
    VillagerAnimHeapRef *getHeapRef(u32 i);
};

extern VillagerAnimHeapRefPool sVillagerAnimHeapRefPool;
extern "C" VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get();

// ---- 0x020e07b4
struct NpcTexPatBufRefSlot : Unk_02082d68 {
    NpcTexPatBufRefSlot();
    ~NpcTexPatBufRefSlot();
    NpcTexPatBufRef unk_04;
    void assign(u32 id);
};

struct NpcTexPatBufRefPool : NpcResPool {
    NpcTexPatBufRefSlot unk_08[5];
    NpcTexPatBufRefPool();
    virtual ~NpcTexPatBufRefPool();
    virtual void occupySlot(u32 i);
    virtual NpcTexPatBufRefSlot *getSlot(u32 i);
    NpcTexPatBufRef *getBufRef(u32 i);
};

extern NpcTexPatBufRefPool sNpcTexPatBufRefPool;
extern "C" NpcTexPatBufRefPool *NpcTexPatBufRefPool_Get();

// ---- 0x020e07d0
struct NpcClothTexSlot : Unk_02082d68 {
    NpcClothTexSlot();
    ~NpcClothTexSlot();
    Unk_0205ca94 unk_01;
    void assign(u32 id);
    void release();
};

struct NpcClothTexPool : NpcResPool {
    NpcClothTexSlot unk_08[5];
    NpcClothTexPool();
    virtual ~NpcClothTexPool();
    virtual void occupySlot(u32 i);
    virtual void releaseSlot(u32 i);
    virtual NpcClothTexSlot *getSlot(u32 i);
    Unk_0205ca94 *getClothTex(u32 i);
};

extern NpcClothTexPool sNpcClothTexPool;
extern "C" NpcClothTexPool *NpcClothTexPool_Get();

// ---- 0x020e07ec
struct NpcHeldItemModelSlot : Unk_02082d68 {
    NpcHeldItemModelSlot();
    ~NpcHeldItemModelSlot();
    HeldItemModel unk_04;
    void unload();
    void load(u32 id, u16 *p);
};

struct NpcHeldItemModelPool : NpcResPool {
    NpcHeldItemModelSlot unk_08[5];
    NpcHeldItemModelPool();
    virtual ~NpcHeldItemModelPool();
    virtual void occupySlot(u32 i);
    virtual void releaseSlot(u32 i);
    virtual NpcHeldItemModelSlot *getSlot(u32 i);
    HeldItemModel *getModel(u32 i);
    BOOL loadItem(u32 i, u16 *p);
};

extern NpcHeldItemModelPool sNpcHeldItemModelPool;
extern "C" NpcHeldItemModelPool *NpcHeldItemModelPool_Get();

// ---- 0x020e0808
struct SpNpcAnimHeapRefSlot : Unk_02082d68 {
    SpNpcAnimHeapRef unk_04;
    void assign();
    SpNpcAnimHeapRefSlot();
    ~SpNpcAnimHeapRefSlot();
};

struct SpNpcAnimHeapRefPool : NpcResPool {
    SpNpcAnimHeapRefSlot unk_08[4];
    SpNpcAnimHeapRefPool();
    virtual ~SpNpcAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual SpNpcAnimHeapRefSlot *getSlot(u32 i);
    SpNpcAnimHeapRef *getHeapRef(u32 i);
};

extern SpNpcAnimHeapRefPool sSpNpcAnimHeapRefPool;
extern "C" SpNpcAnimHeapRefPool *SpNpcAnimHeapRefPool_Get();

// ---- 0x020e0824
struct NpcTexPatHeapSlot : Unk_02082d68 {
    NpcTexPatHeapSlot();
    ~NpcTexPatHeapSlot();
    Unk_0205d1f8 unk_01;
    void assign(u32 id);
};

struct NpcTexPatHeapPool : NpcResPool {
    NpcTexPatHeapSlot unk_08[5];
    NpcTexPatHeapPool();
    virtual ~NpcTexPatHeapPool();
    virtual void occupySlot(u32 i);
    virtual NpcTexPatHeapSlot *getSlot(u32 i);
    Unk_0205d1f8 *getHeapRef(u32 i);
};

extern NpcTexPatHeapPool sNpcTexPatHeapPool;
extern "C" NpcTexPatHeapPool *NpcTexPatHeapPool_Get();

// ---- 0x020e0840
struct NpcBodyAnimSlot : Unk_02082d68 {
    NpcBodyAnimSlot();
    ~NpcBodyAnimSlot();
    Unk_0205c3a4 unk_01[3];
    void assignLayer(s32 a, s32 i);
};

struct NpcBodyAnimPool : NpcResPool {
    NpcBodyAnimSlot unk_08[5];
    NpcBodyAnimPool();
    virtual ~NpcBodyAnimPool();
    virtual NpcBodyAnimSlot *getSlot(u32 i);
    virtual void occupySlot(u32 i);
    Unk_0205c3a4 *getLayer(u32 i, u32 off);
};

extern NpcBodyAnimPool sNpcBodyAnimPool;
extern "C" NpcBodyAnimPool *NpcBodyAnimPool_Get();

extern const s32 sNpcBodyAnimLayerIdBases[];
const s32 sNpcBodyAnimLayerIdBases[3] = {4, 0xd, 0x12};

void NpcResPool::clearAllSlots() {
    for (s32 i = 0; i < unk_04; i++) {
        Unk_02082d68 *p = getSlot(i);
        if (p) p->unk_00 = 0;
    }
}

void NpcResPool::releaseSlot(u32 i) {
    if (i < (u32)unk_04) {
        Unk_02082d68 *p = getSlot(i);
        if (p) p->unk_00 = 0;
    }
}

s32 NpcResPool::findFreeSlot() {
    s32 r = -1;
    for (s32 i = 0; i < unk_04; i++) {
        Unk_02082d68 *p = getSlot(i);
        if (p && p->unk_00 == 0) {
            r = i;
            break;
        }
    }
    return r;
}

NpcBodyAnimSlot::NpcBodyAnimSlot() {}

NpcBodyAnimSlot::~NpcBodyAnimSlot() {}

void NpcBodyAnimSlot::assignLayer(s32 a, s32 i) {
    AnimSlotRef_Assign(&unk_01[i]);
}

NpcBodyAnimPool::NpcBodyAnimPool() : NpcResPool(5) {}

NpcBodyAnimPool::~NpcBodyAnimPool() {}

extern "C" NpcBodyAnimPool *NpcBodyAnimPool_Get() { return &sNpcBodyAnimPool; }

void NpcBodyAnimPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        for (s32 k = 0; k < 3; k++) {
            NpcBodyAnimPool_Get()->unk_08[i].assignLayer(i + sNpcBodyAnimLayerIdBases[k], k);
            NpcBodyAnimSlot *a = NpcBodyAnimPool_Get()->unk_08;
            *(u8 *)(i * 4 + (u32)a) = 1;
        }
    }
}

NpcBodyAnimSlot *NpcBodyAnimPool::getSlot(u32 i) {
    NpcBodyAnimSlot *r = 0;
    if (i < (u32)unk_04) r = &unk_08[i];
    return r;
}

Unk_0205c3a4 *NpcBodyAnimPool::getLayer(u32 i, u32 off) {
    Unk_0205c3a4 *r = 0;
    if (i < (u32)unk_04) r = (Unk_0205c3a4 *)((u8 *)&NpcBodyAnimPool_Get()->unk_08[i] + 1 + off);
    return r;
}

VillagerAnimHeapRefSlot::VillagerAnimHeapRefSlot() {}

VillagerAnimHeapRefSlot::~VillagerAnimHeapRefSlot() {}

void VillagerAnimHeapRefSlot::assign(u32 x) {
    VillagerAnimHeapRef_Assign(&unk_04);
    unk_00 = 1;
}

VillagerAnimHeapRefPool::VillagerAnimHeapRefPool() : NpcResPool(8) {}

VillagerAnimHeapRefPool::~VillagerAnimHeapRefPool() {}

extern "C" VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get() { return &sVillagerAnimHeapRefPool; }

void VillagerAnimHeapRefPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 t = 0;
        t += i;
        VillagerAnimHeapRefPool_Get()->unk_08[i].assign(t);
    }
}

VillagerAnimHeapRefSlot *VillagerAnimHeapRefPool::getSlot(u32 i) {
    VillagerAnimHeapRefSlot *r = 0;
    if (i < (u32)unk_04) r = &unk_08[i];
    return r;
}

VillagerAnimHeapRef *VillagerAnimHeapRefPool::getHeapRef(u32 i) {
    VillagerAnimHeapRef *r = 0;
    if (i < (u32)unk_04) {
        VillagerAnimHeapRefSlot *e = &VillagerAnimHeapRefPool_Get()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

SpNpcAnimHeapRefSlot::SpNpcAnimHeapRefSlot() {}

SpNpcAnimHeapRefSlot::~SpNpcAnimHeapRefSlot() {}

void SpNpcAnimHeapRefSlot::assign() {
    SpNpcAnimHeapRef_Assign(&unk_04);
    unk_00 = 1;
}

SpNpcAnimHeapRefPool::SpNpcAnimHeapRefPool() : NpcResPool(4) {}

SpNpcAnimHeapRefPool::~SpNpcAnimHeapRefPool() {}

extern "C" SpNpcAnimHeapRefPool *SpNpcAnimHeapRefPool_Get() { return &sSpNpcAnimHeapRefPool; }

void SpNpcAnimHeapRefPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        _ZN20SpNpcAnimHeapRefSlot6assignEv(&SpNpcAnimHeapRefPool_Get()->unk_08[i], id);
    }
}

SpNpcAnimHeapRefSlot *SpNpcAnimHeapRefPool::getSlot(u32 i) {
    SpNpcAnimHeapRefSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

SpNpcAnimHeapRef *SpNpcAnimHeapRefPool::getHeapRef(u32 i) {
    SpNpcAnimHeapRef *r = 0;
    if (i < (u32)unk_04) {
        SpNpcAnimHeapRefSlot *e = &SpNpcAnimHeapRefPool_Get()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

NpcClothTexSlot::NpcClothTexSlot() {}

NpcClothTexSlot::~NpcClothTexSlot() {}

void NpcClothTexSlot::assign(u32 id) {
    _ZN12Unk_0205ca9413func_0205cbb0Ej(&unk_01);
    unk_00 = 1;
}

void NpcClothTexSlot::release() {
    _ZN12Unk_0205ca9413func_0205cba8Ev(&unk_01);
    unk_00 = 0;
}

NpcClothTexPool::NpcClothTexPool() : NpcResPool(5) {}

NpcClothTexPool::~NpcClothTexPool() {}

extern "C" NpcClothTexPool *NpcClothTexPool_Get() { return &sNpcClothTexPool; }

void NpcClothTexPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 5;
        id += i;
        NpcClothTexPool_Get()->unk_08[i].assign(id);
    }
}

void NpcClothTexPool::releaseSlot(u32 i) {
    NpcResPool::releaseSlot(i);
    if (i < (u32)unk_04) {
        NpcClothTexPool_Get()->unk_08[i].release();
    }
}

NpcClothTexSlot *NpcClothTexPool::getSlot(u32 i) {
    NpcClothTexSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205ca94 *NpcClothTexPool::getClothTex(u32 i) {
    Unk_0205ca94 *r = 0;
    if (i < (u32)unk_04) {
        NpcClothTexSlot *e = &NpcClothTexPool_Get()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

NpcTexPatBufRefSlot::NpcTexPatBufRefSlot() {}

NpcTexPatBufRefSlot::~NpcTexPatBufRefSlot() {}

void NpcTexPatBufRefSlot::assign(u32 id) {
    NpcTexPatBufRef_Assign(&unk_04);
    unk_00 = 1;
}

NpcTexPatBufRefPool::NpcTexPatBufRefPool() : NpcResPool(5) {}

NpcTexPatBufRefPool::~NpcTexPatBufRefPool() {}

extern "C" NpcTexPatBufRefPool *NpcTexPatBufRefPool_Get() { return &sNpcTexPatBufRefPool; }

void NpcTexPatBufRefPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        NpcTexPatBufRefPool_Get()->unk_08[i].assign(id);
    }
}

NpcTexPatBufRefSlot *NpcTexPatBufRefPool::getSlot(u32 i) {
    NpcTexPatBufRefSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

NpcTexPatBufRef *NpcTexPatBufRefPool::getBufRef(u32 i) {
    NpcTexPatBufRef *r = 0;
    if (i < (u32)unk_04) {
        NpcTexPatBufRefSlot *e = &NpcTexPatBufRefPool_Get()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

NpcFaceAnimSlot::NpcFaceAnimSlot() {}

NpcFaceAnimSlot::~NpcFaceAnimSlot() {}

void NpcFaceAnimSlot::assign(u32 id) {
    _ZN12Unk_0205ce0c13func_0205cf84Ej(&unk_01);
    unk_00 = 1;
}

NpcFaceAnimPool::NpcFaceAnimPool() : NpcResPool(5) {}

NpcFaceAnimPool::~NpcFaceAnimPool() {}

extern "C" NpcFaceAnimPool *NpcFaceAnimPool_Get() { return &sNpcFaceAnimPool; }

void NpcFaceAnimPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        NpcFaceAnimPool_Get()->unk_08[i].assign(id);
    }
}

NpcFaceAnimSlot *NpcFaceAnimPool::getSlot(u32 i) {
    NpcFaceAnimSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205ce0c *NpcFaceAnimPool::getFaceAnim(u32 i) {
    Unk_0205ce0c *r = 0;
    if (i < (u32)unk_04) {
        NpcFaceAnimSlot *e = &NpcFaceAnimPool_Get()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

NpcTexPatHeapSlot::NpcTexPatHeapSlot() {}

NpcTexPatHeapSlot::~NpcTexPatHeapSlot() {}

void NpcTexPatHeapSlot::assign(u32 id) {
    _ZN12Unk_0205d1f813func_0205d20cEj(&unk_01);
    unk_00 = 1;
}

NpcTexPatHeapPool::NpcTexPatHeapPool() : NpcResPool(5) {}

NpcTexPatHeapPool::~NpcTexPatHeapPool() {}

extern "C" NpcTexPatHeapPool *NpcTexPatHeapPool_Get() { return &sNpcTexPatHeapPool; }

void NpcTexPatHeapPool::occupySlot(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        NpcTexPatHeapPool_Get()->unk_08[i].assign(id);
    }
}

NpcTexPatHeapSlot *NpcTexPatHeapPool::getSlot(u32 i) {
    NpcTexPatHeapSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205d1f8 *NpcTexPatHeapPool::getHeapRef(u32 i) {
    Unk_0205d1f8 *r = 0;
    if (i < (u32)unk_04) {
        NpcTexPatHeapSlot *e = &NpcTexPatHeapPool_Get()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

NpcHeldItemModelSlot::NpcHeldItemModelSlot() {}

NpcHeldItemModelSlot::~NpcHeldItemModelSlot() {}

void NpcHeldItemModelSlot::load(u32 id, u16 *p) {
    HeldItemModel_Setup(&unk_04, id, 0, p, 0, 0);
    unk_00 = 1;
}

void NpcHeldItemModelSlot::unload() {
    HeldItemModel_Release(&unk_04);
    unk_00 = 0;
}

NpcHeldItemModelPool::NpcHeldItemModelPool() : NpcResPool(5) {}

NpcHeldItemModelPool::~NpcHeldItemModelPool() {}

extern "C" NpcHeldItemModelPool *NpcHeldItemModelPool_Get() { return &sNpcHeldItemModelPool; }

void NpcHeldItemModelPool::occupySlot(u32 i) {
    u16 t = 0xfff1;
    loadItem(i, &t);
}

void NpcHeldItemModelPool::releaseSlot(u32 i) {
    NpcResPool::releaseSlot(i);
    if (i < (u32)unk_04) {
        NpcHeldItemModelPool_Get()->unk_08[i].unload();
    }
}

BOOL NpcHeldItemModelPool::loadItem(u32 i, u16 *p) {
    BOOL r = FALSE;
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        NpcHeldItemModelPool_Get()->unk_08[i].load(id, p);
        r = TRUE;
    }
    return r;
}

NpcHeldItemModelSlot *NpcHeldItemModelPool::getSlot(u32 i) {
    NpcHeldItemModelSlot *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

// ---- 0x020e07ec functions
HeldItemModel *NpcHeldItemModelPool::getModel(u32 i) {
    if (i < (u32)unk_04) {
        NpcHeldItemModelSlot *e = &NpcHeldItemModelPool_Get()->unk_08[i];
        return &e->unk_04;
    }
    return 0;
}

// bss, in the original __sinit construction order
NpcBodyAnimPool sNpcBodyAnimPool;
VillagerAnimHeapRefPool sVillagerAnimHeapRefPool;
SpNpcAnimHeapRefPool sSpNpcAnimHeapRefPool;
NpcClothTexPool sNpcClothTexPool;
NpcTexPatBufRefPool sNpcTexPatBufRefPool;
NpcFaceAnimPool sNpcFaceAnimPool;
NpcTexPatHeapPool sNpcTexPatHeapPool;
NpcHeldItemModelPool sNpcHeldItemModelPool;

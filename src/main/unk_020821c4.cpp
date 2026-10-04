#include "types.h"
#include "npc/NpcResPool.h"
#include "player/Unk_0205c3a4.h"
#include "actor/CharaClothTexRef.h"
#include "actor/CharaFaceAnimRef.h"
#include "actor/CharaFaceAnimWorkRef.h"
#include "npc/SpNpcAnimHeapRefSlot.h"



extern "C" {
void HeldItemModel_Release(void *);
void HeldItemModel_Setup(void *, u32, u32, u16 *, u32, u32);
void _ZN20CharaFaceAnimWorkRef6assignEj(void *);
void _ZN16CharaFaceAnimRef6assignEj(void *);
void _ZN16CharaClothTexRef7releaseEv(void *);
void _ZN16CharaClothTexRef6assignEj(void *);
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
struct NpcTexPatBufRef {
    u32 pad;
    NpcTexPatBufRef();
    ~NpcTexPatBufRef();
};
struct VillagerAnimHeapRef {
    u32 slot;
    VillagerAnimHeapRef();
    ~VillagerAnimHeapRef();
};

// ---- 0x020e077c
struct NpcFaceAnimSlot : NpcResSlot {
    NpcFaceAnimSlot();
    ~NpcFaceAnimSlot();
    CharaFaceAnimRef faceAnim;
    void assign(u32 id);
};

struct NpcFaceAnimPool : NpcResPool {
    NpcFaceAnimSlot slots[5];
    NpcFaceAnimPool();
    virtual ~NpcFaceAnimPool();
    virtual void occupySlot(u32 i);
    virtual NpcFaceAnimSlot *getSlot(u32 i);
    CharaFaceAnimRef *getFaceAnim(u32 i);
};

extern NpcFaceAnimPool sNpcFaceAnimPool;
extern "C" NpcFaceAnimPool *NpcFaceAnimPool_Get();

// ---- 0x020e0798
struct VillagerAnimHeapRefSlot : NpcResSlot {
    VillagerAnimHeapRefSlot();
    ~VillagerAnimHeapRefSlot();
    VillagerAnimHeapRef heapRef;
    void assign(u32 x);
};

struct VillagerAnimHeapRefPool : NpcResPool {
    VillagerAnimHeapRefSlot slots[8];
    VillagerAnimHeapRefPool();
    virtual ~VillagerAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual VillagerAnimHeapRefSlot *getSlot(u32 i);
    VillagerAnimHeapRef *getHeapRef(u32 i);
};

extern VillagerAnimHeapRefPool sVillagerAnimHeapRefPool;
extern "C" VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get();

// ---- 0x020e07b4
struct NpcTexPatBufRefSlot : NpcResSlot {
    NpcTexPatBufRefSlot();
    ~NpcTexPatBufRefSlot();
    NpcTexPatBufRef bufRef;
    void assign(u32 id);
};

struct NpcTexPatBufRefPool : NpcResPool {
    NpcTexPatBufRefSlot slots[5];
    NpcTexPatBufRefPool();
    virtual ~NpcTexPatBufRefPool();
    virtual void occupySlot(u32 i);
    virtual NpcTexPatBufRefSlot *getSlot(u32 i);
    NpcTexPatBufRef *getBufRef(u32 i);
};

extern NpcTexPatBufRefPool sNpcTexPatBufRefPool;
extern "C" NpcTexPatBufRefPool *NpcTexPatBufRefPool_Get();

// ---- 0x020e07d0
struct NpcClothTexSlot : NpcResSlot {
    NpcClothTexSlot();
    ~NpcClothTexSlot();
    CharaClothTexRef clothTex;
    void assign(u32 id);
    void release();
};

struct NpcClothTexPool : NpcResPool {
    NpcClothTexSlot slots[5];
    NpcClothTexPool();
    virtual ~NpcClothTexPool();
    virtual void occupySlot(u32 i);
    virtual void releaseSlot(u32 i);
    virtual NpcClothTexSlot *getSlot(u32 i);
    CharaClothTexRef *getClothTex(u32 i);
};

extern NpcClothTexPool sNpcClothTexPool;
extern "C" NpcClothTexPool *NpcClothTexPool_Get();

// ---- 0x020e07ec
struct NpcHeldItemModelSlot : NpcResSlot {
    NpcHeldItemModelSlot();
    ~NpcHeldItemModelSlot();
    HeldItemModel model;
    void unload();
    void load(u32 id, u16 *p);
};

struct NpcHeldItemModelPool : NpcResPool {
    NpcHeldItemModelSlot slots[5];
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

struct SpNpcAnimHeapRefPool : NpcResPool {
    SpNpcAnimHeapRefSlot slots[4];
    SpNpcAnimHeapRefPool();
    virtual ~SpNpcAnimHeapRefPool();
    virtual void occupySlot(u32 i);
    virtual SpNpcAnimHeapRefSlot *getSlot(u32 i);
    SpNpcAnimHeapRef *getHeapRef(u32 i);
};

extern SpNpcAnimHeapRefPool sSpNpcAnimHeapRefPool;
extern "C" SpNpcAnimHeapRefPool *SpNpcAnimHeapRefPool_Get();

// ---- 0x020e0824
struct NpcTexPatHeapSlot : NpcResSlot {
    NpcTexPatHeapSlot();
    ~NpcTexPatHeapSlot();
    CharaFaceAnimWorkRef workRef;
    void assign(u32 id);
};

struct NpcTexPatHeapPool : NpcResPool {
    NpcTexPatHeapSlot slots[5];
    NpcTexPatHeapPool();
    virtual ~NpcTexPatHeapPool();
    virtual void occupySlot(u32 i);
    virtual NpcTexPatHeapSlot *getSlot(u32 i);
    CharaFaceAnimWorkRef *getHeapRef(u32 i);
};

extern NpcTexPatHeapPool sNpcTexPatHeapPool;
extern "C" NpcTexPatHeapPool *NpcTexPatHeapPool_Get();

// ---- 0x020e0840
struct NpcBodyAnimSlot : NpcResSlot {
    NpcBodyAnimSlot();
    ~NpcBodyAnimSlot();
    Unk_0205c3a4 layers[3];
    void assignLayer(s32 a, s32 i);
};

struct NpcBodyAnimPool : NpcResPool {
    NpcBodyAnimSlot slots[5];
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
    for (s32 i = 0; i < numSlots; i++) {
        NpcResSlot *p = getSlot(i);
        if (p) p->inUse = 0;
    }
}

void NpcResPool::releaseSlot(u32 i) {
    if (i < (u32)numSlots) {
        NpcResSlot *p = getSlot(i);
        if (p) p->inUse = 0;
    }
}

s32 NpcResPool::findFreeSlot() {
    s32 r = -1;
    for (s32 i = 0; i < numSlots; i++) {
        NpcResSlot *p = getSlot(i);
        if (p && p->inUse == 0) {
            r = i;
            break;
        }
    }
    return r;
}

NpcBodyAnimSlot::NpcBodyAnimSlot() {}

NpcBodyAnimSlot::~NpcBodyAnimSlot() {}

void NpcBodyAnimSlot::assignLayer(s32 a, s32 i) {
    AnimSlotRef_Assign(&layers[i]);
}

NpcBodyAnimPool::NpcBodyAnimPool() : NpcResPool(5) {}

NpcBodyAnimPool::~NpcBodyAnimPool() {}

extern "C" NpcBodyAnimPool *NpcBodyAnimPool_Get() { return &sNpcBodyAnimPool; }

void NpcBodyAnimPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        for (s32 k = 0; k < 3; k++) {
            NpcBodyAnimPool_Get()->slots[i].assignLayer(i + sNpcBodyAnimLayerIdBases[k], k);
            NpcBodyAnimSlot *a = NpcBodyAnimPool_Get()->slots;
            *(u8 *)(i * 4 + (u32)a) = 1;
        }
    }
}

NpcBodyAnimSlot *NpcBodyAnimPool::getSlot(u32 i) {
    NpcBodyAnimSlot *r = 0;
    if (i < (u32)numSlots) r = &slots[i];
    return r;
}

Unk_0205c3a4 *NpcBodyAnimPool::getLayer(u32 i, u32 off) {
    Unk_0205c3a4 *r = 0;
    if (i < (u32)numSlots) r = (Unk_0205c3a4 *)((u8 *)&NpcBodyAnimPool_Get()->slots[i] + 1 + off);
    return r;
}

VillagerAnimHeapRefSlot::VillagerAnimHeapRefSlot() {}

VillagerAnimHeapRefSlot::~VillagerAnimHeapRefSlot() {}

void VillagerAnimHeapRefSlot::assign(u32 x) {
    VillagerAnimHeapRef_Assign(&heapRef);
    inUse = 1;
}

VillagerAnimHeapRefPool::VillagerAnimHeapRefPool() : NpcResPool(8) {}

VillagerAnimHeapRefPool::~VillagerAnimHeapRefPool() {}

extern "C" VillagerAnimHeapRefPool *VillagerAnimHeapRefPool_Get() { return &sVillagerAnimHeapRefPool; }

void VillagerAnimHeapRefPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 t = 0;
        t += i;
        VillagerAnimHeapRefPool_Get()->slots[i].assign(t);
    }
}

VillagerAnimHeapRefSlot *VillagerAnimHeapRefPool::getSlot(u32 i) {
    VillagerAnimHeapRefSlot *r = 0;
    if (i < (u32)numSlots) r = &slots[i];
    return r;
}

VillagerAnimHeapRef *VillagerAnimHeapRefPool::getHeapRef(u32 i) {
    VillagerAnimHeapRef *r = 0;
    if (i < (u32)numSlots) {
        VillagerAnimHeapRefSlot *e = &VillagerAnimHeapRefPool_Get()->slots[i];
        r = &e->heapRef;
    }
    return r;
}

SpNpcAnimHeapRefSlot::SpNpcAnimHeapRefSlot() {}

SpNpcAnimHeapRefSlot::~SpNpcAnimHeapRefSlot() {}

void SpNpcAnimHeapRefSlot::assign() {
    SpNpcAnimHeapRef_Assign(&heapRef);
    inUse = 1;
}

SpNpcAnimHeapRefPool::SpNpcAnimHeapRefPool() : NpcResPool(4) {}

SpNpcAnimHeapRefPool::~SpNpcAnimHeapRefPool() {}

extern "C" SpNpcAnimHeapRefPool *SpNpcAnimHeapRefPool_Get() { return &sSpNpcAnimHeapRefPool; }

void SpNpcAnimHeapRefPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 id = 0;
        id += i;
        _ZN20SpNpcAnimHeapRefSlot6assignEv(&SpNpcAnimHeapRefPool_Get()->slots[i], id);
    }
}

SpNpcAnimHeapRefSlot *SpNpcAnimHeapRefPool::getSlot(u32 i) {
    SpNpcAnimHeapRefSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

SpNpcAnimHeapRef *SpNpcAnimHeapRefPool::getHeapRef(u32 i) {
    SpNpcAnimHeapRef *r = 0;
    if (i < (u32)numSlots) {
        SpNpcAnimHeapRefSlot *e = &SpNpcAnimHeapRefPool_Get()->slots[i];
        r = &e->heapRef;
    }
    return r;
}

NpcClothTexSlot::NpcClothTexSlot() {}

NpcClothTexSlot::~NpcClothTexSlot() {}

void NpcClothTexSlot::assign(u32 id) {
    _ZN16CharaClothTexRef6assignEj(&clothTex);
    inUse = 1;
}

void NpcClothTexSlot::release() {
    _ZN16CharaClothTexRef7releaseEv(&clothTex);
    inUse = 0;
}

NpcClothTexPool::NpcClothTexPool() : NpcResPool(5) {}

NpcClothTexPool::~NpcClothTexPool() {}

extern "C" NpcClothTexPool *NpcClothTexPool_Get() { return &sNpcClothTexPool; }

void NpcClothTexPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 id = 5;
        id += i;
        NpcClothTexPool_Get()->slots[i].assign(id);
    }
}

void NpcClothTexPool::releaseSlot(u32 i) {
    NpcResPool::releaseSlot(i);
    if (i < (u32)numSlots) {
        NpcClothTexPool_Get()->slots[i].release();
    }
}

NpcClothTexSlot *NpcClothTexPool::getSlot(u32 i) {
    NpcClothTexSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

CharaClothTexRef *NpcClothTexPool::getClothTex(u32 i) {
    CharaClothTexRef *r = 0;
    if (i < (u32)numSlots) {
        NpcClothTexSlot *e = &NpcClothTexPool_Get()->slots[i];
        r = &e->clothTex;
    }
    return r;
}

NpcTexPatBufRefSlot::NpcTexPatBufRefSlot() {}

NpcTexPatBufRefSlot::~NpcTexPatBufRefSlot() {}

void NpcTexPatBufRefSlot::assign(u32 id) {
    NpcTexPatBufRef_Assign(&bufRef);
    inUse = 1;
}

NpcTexPatBufRefPool::NpcTexPatBufRefPool() : NpcResPool(5) {}

NpcTexPatBufRefPool::~NpcTexPatBufRefPool() {}

extern "C" NpcTexPatBufRefPool *NpcTexPatBufRefPool_Get() { return &sNpcTexPatBufRefPool; }

void NpcTexPatBufRefPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 id = 0;
        id += i;
        NpcTexPatBufRefPool_Get()->slots[i].assign(id);
    }
}

NpcTexPatBufRefSlot *NpcTexPatBufRefPool::getSlot(u32 i) {
    NpcTexPatBufRefSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

NpcTexPatBufRef *NpcTexPatBufRefPool::getBufRef(u32 i) {
    NpcTexPatBufRef *r = 0;
    if (i < (u32)numSlots) {
        NpcTexPatBufRefSlot *e = &NpcTexPatBufRefPool_Get()->slots[i];
        r = &e->bufRef;
    }
    return r;
}

NpcFaceAnimSlot::NpcFaceAnimSlot() {}

NpcFaceAnimSlot::~NpcFaceAnimSlot() {}

void NpcFaceAnimSlot::assign(u32 id) {
    _ZN16CharaFaceAnimRef6assignEj(&faceAnim);
    inUse = 1;
}

NpcFaceAnimPool::NpcFaceAnimPool() : NpcResPool(5) {}

NpcFaceAnimPool::~NpcFaceAnimPool() {}

extern "C" NpcFaceAnimPool *NpcFaceAnimPool_Get() { return &sNpcFaceAnimPool; }

void NpcFaceAnimPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 id = 4;
        id += i;
        NpcFaceAnimPool_Get()->slots[i].assign(id);
    }
}

NpcFaceAnimSlot *NpcFaceAnimPool::getSlot(u32 i) {
    NpcFaceAnimSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

CharaFaceAnimRef *NpcFaceAnimPool::getFaceAnim(u32 i) {
    CharaFaceAnimRef *r = 0;
    if (i < (u32)numSlots) {
        NpcFaceAnimSlot *e = &NpcFaceAnimPool_Get()->slots[i];
        r = &e->faceAnim;
    }
    return r;
}

NpcTexPatHeapSlot::NpcTexPatHeapSlot() {}

NpcTexPatHeapSlot::~NpcTexPatHeapSlot() {}

void NpcTexPatHeapSlot::assign(u32 id) {
    _ZN20CharaFaceAnimWorkRef6assignEj(&workRef);
    inUse = 1;
}

NpcTexPatHeapPool::NpcTexPatHeapPool() : NpcResPool(5) {}

NpcTexPatHeapPool::~NpcTexPatHeapPool() {}

extern "C" NpcTexPatHeapPool *NpcTexPatHeapPool_Get() { return &sNpcTexPatHeapPool; }

void NpcTexPatHeapPool::occupySlot(u32 i) {
    if (i < (u32)numSlots) {
        u32 id = 4;
        id += i;
        NpcTexPatHeapPool_Get()->slots[i].assign(id);
    }
}

NpcTexPatHeapSlot *NpcTexPatHeapPool::getSlot(u32 i) {
    NpcTexPatHeapSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

CharaFaceAnimWorkRef *NpcTexPatHeapPool::getHeapRef(u32 i) {
    CharaFaceAnimWorkRef *r = 0;
    if (i < (u32)numSlots) {
        NpcTexPatHeapSlot *e = &NpcTexPatHeapPool_Get()->slots[i];
        r = &e->workRef;
    }
    return r;
}

NpcHeldItemModelSlot::NpcHeldItemModelSlot() {}

NpcHeldItemModelSlot::~NpcHeldItemModelSlot() {}

void NpcHeldItemModelSlot::load(u32 id, u16 *p) {
    HeldItemModel_Setup(&model, id, 0, p, 0, 0);
    inUse = 1;
}

void NpcHeldItemModelSlot::unload() {
    HeldItemModel_Release(&model);
    inUse = 0;
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
    if (i < (u32)numSlots) {
        NpcHeldItemModelPool_Get()->slots[i].unload();
    }
}

BOOL NpcHeldItemModelPool::loadItem(u32 i, u16 *p) {
    BOOL r = FALSE;
    if (i < (u32)numSlots) {
        u32 id = 4;
        id += i;
        NpcHeldItemModelPool_Get()->slots[i].load(id, p);
        r = TRUE;
    }
    return r;
}

NpcHeldItemModelSlot *NpcHeldItemModelPool::getSlot(u32 i) {
    NpcHeldItemModelSlot *r = 0;
    if (i < (u32)numSlots) {
        r = &slots[i];
    }
    return r;
}

// ---- 0x020e07ec functions
HeldItemModel *NpcHeldItemModelPool::getModel(u32 i) {
    if (i < (u32)numSlots) {
        NpcHeldItemModelSlot *e = &NpcHeldItemModelPool_Get()->slots[i];
        return &e->model;
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

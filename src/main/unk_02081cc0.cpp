#include "types.h"
#include "npc/NpcResPool.h"
#include "npc/NpcResHandleView.h"
#include "npc/VillagerAnimHeapRefPool.h"
#include "proto/main/unk_02081cc0.h"
#include "proto/main/unk_020821c4.h"

extern "C" {
s32 NpcBodyAnimPool_Get();
s32 NpcClothTexPool_Get();
s32 NpcTexPatBufRefPool_Get();
s32 NpcFaceAnimPool_Get();
s32 NpcTexPatHeapPool_Get();
s32 NpcHeldItemModelPool_Get();
s32 SpNpcAnimHeapRefPool_Get();
s32 _ZN20NpcHeldItemModelPool8getModelEj(void *, s32);
BOOL _ZN20NpcHeldItemModelPool8loadItemEjPt(void *, u32, u16 *);
s32 _ZN17NpcTexPatHeapPool10getHeapRefEj(void *, s32);
s32 _ZN15NpcFaceAnimPool11getFaceAnimEj(void *, s32);
s32 _ZN19NpcTexPatBufRefPool9getBufRefEj(void *, s32);
s32 _ZN15NpcClothTexPool11getClothTexEj(void *, s32);
s32 _ZN20SpNpcAnimHeapRefPool10getHeapRefEj(void *, s32);
AnimSlotRef *_ZN15NpcBodyAnimPool8getLayerEjj(void *, s32, u32);
}












NpcResHandle::NpcResHandle() : slot(-1) {}

NpcResHandle::~NpcResHandle() {}

BOOL NpcResHandle::acquire() {
    NpcResPool *c = getPool();
    BOOL r = FALSE;
    if (c) {
        if (slot == -1) {
            u32 i = ((NpcResPool *)(c))->findFreeSlot();
            if (i < (u32)c->numSlots) {
                slot = i;
                c->occupySlot(slot);
                r = TRUE;
            }
        } else {
            r = TRUE;
        }
    }
    return r;
}

void NpcResHandle::release() {
    NpcResPool *c = getPool();
    if (c) {
        c->releaseSlot(slot);
        slot = -1;
    }
}

NpcBodyAnimHandle::NpcBodyAnimHandle() {}

NpcBodyAnimHandle::~NpcBodyAnimHandle() {}

AnimSlotRef *NpcResHandle::getBodyAnimLayer(u32 off) {
    NpcResPool *c = getPool();
    AnimSlotRef *r = 0;
    if (c) {
        r = _ZN15NpcBodyAnimPool8getLayerEjj(c, slot, off);
    }
    return r;
}

VillagerAnimHeapHandle::VillagerAnimHeapHandle() {}

VillagerAnimHeapHandle::~VillagerAnimHeapHandle() {}

void *SpNpcAnimHeapHandle::getVillagerAnimHeapRef() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)((VillagerAnimHeapRefPool *)(p))->getHeapRef((s8)slot);
    }
    return r;
}

SpNpcAnimHeapHandle::SpNpcAnimHeapHandle() {}

SpNpcAnimHeapHandle::~SpNpcAnimHeapHandle() {}

void *NpcClothTexHandle::getSpNpcAnimHeapRef() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN20SpNpcAnimHeapRefPool10getHeapRefEj(p, (s8)slot);
    }
    return r;
}

NpcClothTexHandle::NpcClothTexHandle() {}

NpcClothTexHandle::~NpcClothTexHandle() {}

void *NpcTexPatBufRefHandle::getClothTex() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN15NpcClothTexPool11getClothTexEj(p, (s8)slot);
    }
    return r;
}

NpcTexPatBufRefHandle::NpcTexPatBufRefHandle() {}

NpcTexPatBufRefHandle::~NpcTexPatBufRefHandle() {}

void *NpcFaceAnimHandle::getTexPatBufRef() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN19NpcTexPatBufRefPool9getBufRefEj(p, (s8)slot);
    }
    return r;
}

NpcFaceAnimHandle::NpcFaceAnimHandle() {}

NpcFaceAnimHandle::~NpcFaceAnimHandle() {}

void *NpcTexPatHeapHandle::getFaceAnim() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN15NpcFaceAnimPool11getFaceAnimEj(p, (s8)slot);
    }
    return r;
}

NpcTexPatHeapHandle::NpcTexPatHeapHandle() {}

NpcTexPatHeapHandle::~NpcTexPatHeapHandle() {}

void *NpcHeldItemModelHandle::getTexPatHeapRef() {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN17NpcTexPatHeapPool10getHeapRefEj(p, (s8)slot);
    }
    return r;
}

NpcHeldItemModelHandle::NpcHeldItemModelHandle() {}

NpcHeldItemModelHandle::~NpcHeldItemModelHandle() {}

void *NpcResHandleView::loadHeldItem(u16 *a) {
    void *p = getPool();
    void *r = 0;
    if (p) {
        r = (void *)_ZN20NpcHeldItemModelPool8loadItemEjPt(p, (s8)slot, a);
    }
    return r;
}

void *NpcResHandleView::getHeldItemModel() {
    void *p = getPool();
    if (p) {
        return (void *)_ZN20NpcHeldItemModelPool8getModelEj(p, (s8)slot);
    }
    return 0;
}

extern "C" void NpcResPools_ClearAll() {
    ((NpcResPool *)((void *)NpcBodyAnimPool_Get()))->clearAllSlots();
    ((NpcResPool *)((void *)NpcClothTexPool_Get()))->clearAllSlots();
    ((NpcResPool *)((void *)NpcTexPatBufRefPool_Get()))->clearAllSlots();
    ((NpcResPool *)((void *)NpcFaceAnimPool_Get()))->clearAllSlots();
    ((NpcResPool *)((void *)NpcTexPatHeapPool_Get()))->clearAllSlots();
    ((NpcResPool *)((void *)NpcHeldItemModelPool_Get()))->clearAllSlots();
}

extern "C" void NpcResPools_ClearOnSceneCreate() { NpcResPools_ClearAll(); }

extern "C" void NpcResPools_ClearOnSceneDelete() { NpcResPools_ClearAll(); }

NpcResPool *NpcHeldItemModelHandle::getPool() { return (NpcResPool *)NpcHeldItemModelPool_Get(); }

NpcResPool *NpcTexPatHeapHandle::getPool() { return (NpcResPool *)NpcTexPatHeapPool_Get(); }

NpcResPool *NpcFaceAnimHandle::getPool() { return (NpcResPool *)NpcFaceAnimPool_Get(); }

NpcResPool *NpcTexPatBufRefHandle::getPool() { return (NpcResPool *)NpcTexPatBufRefPool_Get(); }

NpcResPool *NpcClothTexHandle::getPool() { return (NpcResPool *)NpcClothTexPool_Get(); }

NpcResPool *SpNpcAnimHeapHandle::getPool() { return (NpcResPool *)SpNpcAnimHeapRefPool_Get(); }

NpcResPool *VillagerAnimHeapHandle::getPool() { return (NpcResPool *)VillagerAnimHeapRefPool_Get(); }

NpcResPool *NpcBodyAnimHandle::getPool() { return (NpcResPool *)NpcBodyAnimPool_Get(); }


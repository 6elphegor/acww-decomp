#ifndef NPC_NPCRESHANDLEVIEW_H
#define NPC_NPCRESHANDLEVIEW_H

// NPC resource handles derived from NpcResHandleView (same object as NpcResHandle; symbols.txt names two of its methods
// after this class): texture-pattern buffer/heap handles and the special-NPC animation heap handle (member animHeapHandle
// of SpNpcActor), plus the villager/body-anim handles and the NpcResHandle family (held item model, cloth texture, face
// animation). Defined in src/main/unk_02081cc0.cpp; keep this declaration order (it decides the vtable order there).
#include "types.h"

class NpcResPool;

struct NpcResHandleView {
    /* 0x00 */ s8 slot;
    NpcResHandleView();
    virtual ~NpcResHandleView();
    virtual NpcResPool *getPool() = 0;
    void *getHeldItemModel();
    void *loadHeldItem(s32 a);
};

struct NpcTexPatBufRefHandle : NpcResHandleView {
    NpcTexPatBufRefHandle();
    virtual ~NpcTexPatBufRefHandle();
    virtual NpcResPool *getPool();
    void *getClothTex();
};

struct NpcTexPatHeapHandle : NpcResHandleView {
    NpcTexPatHeapHandle();
    virtual ~NpcTexPatHeapHandle();
    virtual NpcResPool *getPool();
    void *getFaceAnim();
};

struct SpNpcAnimHeapHandle : NpcResHandleView {
    SpNpcAnimHeapHandle();
    virtual ~SpNpcAnimHeapHandle();
    virtual NpcResPool *getPool();
    void *getVillagerAnimHeapRef();
};

struct VillagerAnimHeapHandle : NpcResHandleView {
    VillagerAnimHeapHandle();
    virtual ~VillagerAnimHeapHandle();
    virtual NpcResPool *getPool();
};

struct NpcBodyAnimHandle : NpcResHandleView {
    NpcBodyAnimHandle();
    virtual ~NpcBodyAnimHandle();
    virtual NpcResPool *getPool();
};

struct NpcResHandle {
    /* 0x04 */ s8 slot;
    NpcResHandle();
    virtual ~NpcResHandle();
    virtual NpcResPool *getPool() = 0;
    void *getBodyAnimLayer(u32 off);
    void release();
    BOOL acquire();
};

struct NpcHeldItemModelHandle : NpcResHandle {
    NpcHeldItemModelHandle();
    virtual ~NpcHeldItemModelHandle();
    virtual NpcResPool *getPool();
    void *getTexPatHeapRef();
};

struct NpcClothTexHandle : NpcResHandle {
    NpcClothTexHandle();
    virtual ~NpcClothTexHandle();
    virtual NpcResPool *getPool();
    void *getSpNpcAnimHeapRef();
};

struct NpcFaceAnimHandle : NpcResHandle {
    NpcFaceAnimHandle();
    virtual ~NpcFaceAnimHandle();
    virtual NpcResPool *getPool();
    void *getTexPatBufRef();
};

#endif // NPC_NPCRESHANDLEVIEW_H

#ifndef NPC_NPCRESHANDLE_H
#define NPC_NPCRESHANDLE_H

// NPC resource handles: a slot in one of the NPC resource pools (npc/NpcResPools.h, npc/NpcBodyAnimPool.h,
// npc/VillagerAnimHeapRefPool.h); each handle class names its pool (getPool) and reads its entry. Defined in
// src/main/unk_02081cc0.cpp; keep this declaration order (it decides the vtable order there).
#include "types.h"

class NpcResPool;
class AnimSlotRef;
class HeldItemModel;
struct NpcTexPatBufRef;
struct CharaFaceAnimWorkRef;
struct CharaFaceAnimRef;
struct CharaClothTexRef;
struct SpNpcAnimHeapRef;
struct VillagerAnimHeapRef;

struct NpcResHandle {
    /* 0x04 */ s8 slot;
    NpcResHandle();
    virtual ~NpcResHandle();
    virtual NpcResPool *getPool() = 0;
    void release();
    BOOL acquire();
};

struct NpcTexPatBufRefHandle : NpcResHandle {
    NpcTexPatBufRefHandle();
    virtual ~NpcTexPatBufRefHandle();
    virtual NpcResPool *getPool();
    NpcTexPatBufRef *getTexPatBufRef();
};

struct NpcTexPatHeapHandle : NpcResHandle {
    NpcTexPatHeapHandle();
    virtual ~NpcTexPatHeapHandle();
    virtual NpcResPool *getPool();
    CharaFaceAnimWorkRef *getTexPatHeapRef();
};

struct SpNpcAnimHeapHandle : NpcResHandle {
    SpNpcAnimHeapHandle();
    virtual ~SpNpcAnimHeapHandle();
    virtual NpcResPool *getPool();
    SpNpcAnimHeapRef *getSpNpcAnimHeapRef();
};

struct VillagerAnimHeapHandle : NpcResHandle {
    VillagerAnimHeapHandle();
    virtual ~VillagerAnimHeapHandle();
    virtual NpcResPool *getPool();
    VillagerAnimHeapRef *getVillagerAnimHeapRef();
};

struct NpcBodyAnimHandle : NpcResHandle {
    NpcBodyAnimHandle();
    virtual ~NpcBodyAnimHandle();
    virtual NpcResPool *getPool();
    AnimSlotRef *getBodyAnimLayer(u32 off);
};

struct NpcHeldItemModelHandle : NpcResHandle {
    NpcHeldItemModelHandle();
    virtual ~NpcHeldItemModelHandle();
    virtual NpcResPool *getPool();
    HeldItemModel *getHeldItemModel();
    BOOL loadHeldItem(u16 *item);
};

struct NpcClothTexHandle : NpcResHandle {
    NpcClothTexHandle();
    virtual ~NpcClothTexHandle();
    virtual NpcResPool *getPool();
    CharaClothTexRef *getClothTex();
};

struct NpcFaceAnimHandle : NpcResHandle {
    NpcFaceAnimHandle();
    virtual ~NpcFaceAnimHandle();
    virtual NpcResPool *getPool();
    CharaFaceAnimRef *getFaceAnim();
};

#endif // NPC_NPCRESHANDLE_H

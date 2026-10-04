#ifndef NPC_NPCRESHANDLEVIEW_H
#define NPC_NPCRESHANDLEVIEW_H

// NPC resource handles derived from NpcResHandleView (same object as NpcResHandle; symbols.txt names two of its methods
// after this class): texture-pattern buffer/heap handles and the special-NPC animation heap handle (member animHeapHandle
// of SpNpcActor). Defined in src/main/unk_02081cc0.cpp; keep this declaration order (it decides the vtable order there).
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

#endif // NPC_NPCRESHANDLEVIEW_H

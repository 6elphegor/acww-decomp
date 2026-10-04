#include "types.h"

struct Unk_0205f6f8_Cfg { u8 pad[0x6c]; u8 unk_6c; };

struct PlayerBodyWorkPool {
    u32 heaps[4];
    PlayerBodyWorkPool();
    ~PlayerBodyWorkPool();
};

struct PlayerBodyWorkRef {
    u8 slot;
    PlayerBodyWorkRef();
};

extern "C" {
extern void *gPlayerBodyAnimHeap;
extern Unk_0205f6f8_Cfg *gCommManager;
extern void PlayerBodyAnimHeap_Create(void);
extern s32 PlayerBodyAnimHeap_Destroy(void);
extern void func_020e885c(void *p);
extern void func_020e877c(void *p);
extern void *FrameHeap_Create(u32 size, void *heap);
u32 PlayerBodyWork_GetHeapSize(void);
u32 PlayerBodyWorkPool_GetHeap(u32 *base, u32 idx);
void PlayerBodyWorkPool_DestroyHeaps(u32 *tbl);
void PlayerBodyWorkPool_CreateHeaps(u32 *tbl);
}

PlayerBodyWorkPool sPlayerBodyWorkPool;

extern "C" void PlayerBodyWorkPool_Create(void) {
    PlayerBodyAnimHeap_Create();
    PlayerBodyWorkPool_CreateHeaps(sPlayerBodyWorkPool.heaps);
    if (gPlayerBodyAnimHeap) {
        func_020e877c(gPlayerBodyAnimHeap);
    }
}

extern "C" void PlayerBodyWorkPool_Destroy(void) {
    PlayerBodyWorkPool_DestroyHeaps(sPlayerBodyWorkPool.heaps);
    PlayerBodyAnimHeap_Destroy();
}

extern "C" u32 PlayerBodyWork_GetHeapSize(void) { return 0x768; }

PlayerBodyWorkPool::PlayerBodyWorkPool() {}

PlayerBodyWorkPool::~PlayerBodyWorkPool() {}

extern "C" void PlayerBodyWorkPool_CreateHeaps(u32 *tbl) {
    void *heap = gPlayerBodyAnimHeap;
    u32 n = gCommManager->unk_6c;
    u32 i;
    for (i = 0; i < n; i++) {
        tbl[i] = (u32)FrameHeap_Create(PlayerBodyWork_GetHeapSize(), heap);
    }
}

extern "C" void PlayerBodyWorkPool_DestroyHeaps(u32 *tbl) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (tbl[i]) {
            func_020e885c((void *)tbl[i]);
            tbl[i] = 0;
        }
    }
    if (gPlayerBodyAnimHeap) {
        func_020e885c(gPlayerBodyAnimHeap);
    }
}

extern "C" u32 PlayerBodyWorkPool_GetHeap(u32 *base, u32 idx) {
    return base[idx];
}

PlayerBodyWorkRef::PlayerBodyWorkRef() { slot = 4; }

extern "C" void PlayerBodyWorkRef_Destruct(void) {}

extern "C" void PlayerBodyWorkRef_Assign(u8 *p, u8 v) {
    func_020e885c((void *)PlayerBodyWorkPool_GetHeap(sPlayerBodyWorkPool.heaps, v));
    *p = v;
}

extern "C" u32 PlayerBodyWorkRef_GetHeap(u8 *p) {
    return PlayerBodyWorkPool_GetHeap(sPlayerBodyWorkPool.heaps, *p);
}

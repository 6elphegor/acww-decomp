#include "types.h"
#include "net/Unk_0205f6f8_Cfg.h"
#include "player/PlayerBodyWorkRef.h"


struct PlayerBodyWorkPool {
    u32 heaps[4];
    PlayerBodyWorkPool();
    ~PlayerBodyWorkPool();
};


extern "C" {
extern void *gPlayerBodyAnimHeap;
extern Unk_0205f6f8_Cfg *gCommManager;
extern void PlayerBodyAnimHeap_Create(void);
extern s32 PlayerBodyAnimHeap_Destroy(void);
#define Heap_freeAll _ZN4Heap7freeAllEv
extern void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
extern void Heap_adjust(void *p);
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
        Heap_adjust(gPlayerBodyAnimHeap);
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
    u32 n = gCommManager->memberCount;
    u32 i;
    for (i = 0; i < n; i++) {
        tbl[i] = (u32)FrameHeap_Create(PlayerBodyWork_GetHeapSize(), heap);
    }
}

extern "C" void PlayerBodyWorkPool_DestroyHeaps(u32 *tbl) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (tbl[i]) {
            Heap_freeAll((void *)tbl[i]);
            tbl[i] = 0;
        }
    }
    if (gPlayerBodyAnimHeap) {
        Heap_freeAll(gPlayerBodyAnimHeap);
    }
}

extern "C" u32 PlayerBodyWorkPool_GetHeap(u32 *base, u32 idx) {
    return base[idx];
}

PlayerBodyWorkRef::PlayerBodyWorkRef() { slot = 4; }

extern "C" void PlayerBodyWorkRef_Destruct(void) {}

extern "C" void PlayerBodyWorkRef_Assign(u8 *p, u8 v) {
    Heap_freeAll((void *)PlayerBodyWorkPool_GetHeap(sPlayerBodyWorkPool.heaps, v));
    *p = v;
}

extern "C" u32 PlayerBodyWorkRef_GetHeap(u8 *p) {
    return PlayerBodyWorkPool_GetHeap(sPlayerBodyWorkPool.heaps, *p);
}

#include "types.h"
#include "actor/CharaFaceAnimWorkRef.h"

struct CharaFaceAnimWorkPool {
    void *ptr[9];
    CharaFaceAnimWorkPool();
    ~CharaFaceAnimWorkPool();
    void *getHeap(u32 idx);
    void destroyHeaps();
    void createHeaps();
};

extern "C" {
extern void *gCharaFaceAnimWorkHeap;
extern u8 *gCommManager;
extern CharaFaceAnimWorkPool sCharaFaceAnimWorkPool;

void CharaFaceAnimWorkHeap_Destroy();
void CharaFaceAnimWorkHeap_Create();
void *FrameHeap_Create(u32 size, void *heap);
#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
u32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(u32 a);
u32 Scene_GetMaxCharacters(u32 a);
u32 NpcSpawn_GetSpNpcSlotCount();
u32 CharaFaceAnimWork_GetHeapSize();
}


extern "C" void CharaFaceAnimWorkPool_Create() {
    CharaFaceAnimWorkHeap_Create();
    sCharaFaceAnimWorkPool.createHeaps();
    if (gCharaFaceAnimWorkHeap) Heap_adjust(gCharaFaceAnimWorkHeap);
}

extern "C" void CharaFaceAnimWorkPool_Destroy() {
    sCharaFaceAnimWorkPool.destroyHeaps();
    CharaFaceAnimWorkHeap_Destroy();
}

extern "C" u32 CharaFaceAnimWork_GetHeapSize() { return 0x50; }

CharaFaceAnimWorkPool::CharaFaceAnimWorkPool() {}

CharaFaceAnimWorkPool::~CharaFaceAnimWorkPool() {}

void CharaFaceAnimWorkPool::createHeaps() {
    void *heap = gCharaFaceAnimWorkHeap;
    u32 n, i, m;
    n = gCommManager[0x6c];
    m = Scene_GetMaxPlayers(Scene_GetCurrent());
    if (n < m) m = n;
    for (i = 0; i < m; i++) {
        ptr[i] = FrameHeap_Create(CharaFaceAnimWork_GetHeapSize(), heap);
    }
    if (m == 0) m = 1;
    u32 q = Scene_GetMaxCharacters(Scene_GetCurrent());
    m = (q + NpcSpawn_GetSpNpcSlotCount()) - m;
    for (i = 4; i < m + 4; i++) {
        ptr[i] = FrameHeap_Create(CharaFaceAnimWork_GetHeapSize(), heap);
    }
}

void CharaFaceAnimWorkPool::destroyHeaps() {
    for (s32 i = 0; i < 9; i++) {
        void **p = &ptr[i];
        if (ptr[i]) {
            Heap_freeAll(ptr[i]);
            *p = NULL;
        }
    }
    if (gCharaFaceAnimWorkHeap) Heap_freeAll(gCharaFaceAnimWorkHeap);
}

void *CharaFaceAnimWorkPool::getHeap(u32 idx) { return ptr[idx]; }

CharaFaceAnimWorkRef::CharaFaceAnimWorkRef() { v = 9; }

CharaFaceAnimWorkRef::~CharaFaceAnimWorkRef() {}

void CharaFaceAnimWorkRef::assign(u32 x) {
    Heap_freeAll(sCharaFaceAnimWorkPool.getHeap(x));
    v = x;
}

void *CharaFaceAnimWorkRef::getHeap() { return sCharaFaceAnimWorkPool.getHeap(v); }

CharaFaceAnimWorkPool sCharaFaceAnimWorkPool;

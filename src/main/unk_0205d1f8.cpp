#include "types.h"
#include "actor/CharaFaceAnimWorkRef.h"
#include "sys/Heap.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_0205d1f8.h"
#include "proto/main/unk_02082d74.h"

extern "C" const u32 data_020cb35c;
extern "C" const u32 data_020cb360;

struct CharaFaceAnimWorkPool {
    void *ptr[9];
    CharaFaceAnimWorkPool();
    ~CharaFaceAnimWorkPool();
    void *getHeap(u32 idx);
    void destroyHeaps();
    void createHeaps();
};

extern "C" {
extern u8 *gCommManager;

#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
u32 Scene_GetCurrent();
u32 Scene_GetMaxPlayers(u32 a);
u32 Scene_GetMaxCharacters(u32 a);
}


extern "C" void CharaFaceAnimWorkPool_Create(void *parent) {
    CharaFaceAnimWorkHeap_Create(parent);
    sCharaFaceAnimWorkPool.createHeaps();
    if (gCharaFaceAnimWorkHeap) ((Heap *)(gCharaFaceAnimWorkHeap))->adjust();
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
            ((Heap *)(ptr[i]))->freeAll();
            *p = NULL;
        }
    }
    if (gCharaFaceAnimWorkHeap) ((Heap *)(gCharaFaceAnimWorkHeap))->freeAll();
}

void *CharaFaceAnimWorkPool::getHeap(u32 idx) { return ptr[idx]; }

CharaFaceAnimWorkRef::CharaFaceAnimWorkRef() { v = 9; }

CharaFaceAnimWorkRef::~CharaFaceAnimWorkRef() {}

void CharaFaceAnimWorkRef::assign(u32 x) {
    ((Heap *)(sCharaFaceAnimWorkPool.getHeap(x)))->freeAll();
    v = x;
}

void *CharaFaceAnimWorkRef::getHeap() { return sCharaFaceAnimWorkPool.getHeap(v); }

CharaFaceAnimWorkPool sCharaFaceAnimWorkPool;


// Constants shared with other files (loaded through their addresses; defined after the code here, where a visible const would be folded).
// Owned here by position: it lies between the data of the neighbouring files in link order and fits this file's
// size order (linkprep check); the original file is this one or another file between those neighbours.
const u32 data_020cb35c = 0x40;
const u32 data_020cb360 = 0xb;

#include "types.h"
#include "net/CommManager.h"
#include "player/PlayerFaceTexRef.h"
#include "sys/Heap.h"
#include "proto/autoload_2/unk_020e8558.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_0205d340.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"

extern "C" {
extern CommManager *gCommManager;

#define Heap_freeAll _ZN4Heap7freeAllEv
void Heap_freeAll(void *p);
#define Heap_adjust _ZN4Heap6adjustEv
void Heap_adjust(void *p);
}

struct PlayerFaceTexPool {
    u32 ptr[4];
    PlayerFaceTexPool();
    ~PlayerFaceTexPool();
    void *getBuffer(u32 idx);
    void freeBuffers();
};


char sPlayerFaceTexPathBuf[0x14];
PlayerFaceTexPool sPlayerFaceTexPool;

extern "C" void PlayerFaceTexPool_Create(void *parent) {
    PlayerFaceTexHeap_Create(parent);
    PlayerFaceTexPool_AllocBuffers(sPlayerFaceTexPool.ptr);
    if (gPlayerFaceTexHeap) {
        ((Heap *)(gPlayerFaceTexHeap))->adjust();
    }
}

extern "C" void PlayerFaceTexPool_Destroy() {
    sPlayerFaceTexPool.freeBuffers();
    PlayerFaceTexHeap_Destroy();
}

extern "C" void *PlayerFaceTex_GetPath(u32 x) {
    Str_SPrintf(sPlayerFaceTexPathBuf, "/PFcTx/%d/%d.nsbtx", x >> 5, x);
    return sPlayerFaceTexPathBuf;
}

extern "C" s32 PlayerFaceTex_GetBufferSize() { return 0x2e30; }

PlayerFaceTexPool::PlayerFaceTexPool() {}

PlayerFaceTexPool::~PlayerFaceTexPool() {}

extern "C" void PlayerFaceTexPool_AllocBuffers(u32 *arr) {
    void *heap = gPlayerFaceTexHeap;
    u32 n = gCommManager->memberCount;
    u32 i;
    for (i = 0; i < n; i++) {
        arr[i] = (u32)Heap_AllocAligned(heap, PlayerFaceTex_GetBufferSize(), 4);
    }
}

void PlayerFaceTexPool::freeBuffers() {
    for (s32 i = 0; i < 4; i++) ptr[i] = 0;
    if (gPlayerFaceTexHeap) ((Heap *)(gPlayerFaceTexHeap))->freeAll();
}

void *PlayerFaceTexPool::getBuffer(u32 idx) { return (void *)ptr[idx]; }

PlayerFaceTexRef::PlayerFaceTexRef() { v = 4; }

PlayerFaceTexRef::~PlayerFaceTexRef() {}

void PlayerFaceTexRef::assign(u32 x) { setSlot(x); }

void PlayerFaceTexRef::setSlot(u32 x) { v = x; }

s32 PlayerFaceTexRef::load(u32 idx) {
    void *p = sPlayerFaceTexPool.getBuffer(v);
    void *name = PlayerFaceTex_GetPath(idx);
    return File_LoadToBuffer(name, p, PlayerFaceTex_GetBufferSize());
}

void *PlayerFaceTexRef::getBuffer() { return sPlayerFaceTexPool.getBuffer(v); }

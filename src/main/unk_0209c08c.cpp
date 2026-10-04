#include "types.h"
#include "net/CommManager.h"
#include "sys/Unk_020b83b0.h"
#include "room/Unk_0209c41c_Actor.h"
#include "gfx/TexVramSlot.h"
#include "town/TownAcreIndex.h"
#include "gfx/ModelSlotPool.h"
#include "gfx/TexTransfer.h"
#include "sys/RecordFile.h"
#include "town/TownAcreCell.h"
#include "room/Unk_0209c614_Actor.h"

inline void *operator new(unsigned long, void *p) { return p; }

typedef void (*Unk_0209c15c_Fn)();
typedef void *(*Unk_0209c1a4_Alloc)(u32, u32);

extern "C" {
void Mem_Free(void *p);
}

extern "C" {
void *Mem_Alloc(u32 n);
}

extern "C" {
void func_020e885c(void *p);
}

extern "C" {
void *FrameHeap_Create(u32 a, u32 b);
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
struct Unk_0209c614_Actor;
}

extern "C" {
}

extern "C" {
}

// ---- CommManager (comm state; only the methods used here)

// ---- RecordFile (cached record table)

// ---- 8-byte cell

// ---- 6x6 cell grid
class TownAcreGenerator {
public:
    TownAcreGenerator();
    ~TownAcreGenerator();
    TownAcreCell *func_0209bc54(u32 x, u32 y);
    void func_0209b5d4(s32 v);
    BOOL func_0209b63c();
    BOOL func_0209b830();
    BOOL func_0209b9ac(s32 v);
    BOOL func_0209bcf8();
    BOOL func_0209bca8();

    void writeAcreIds(u8 *out);
    u32 getTotalArchiveSize();
    BOOL generate(s32 v);
    void closeCandidates();
    BOOL openCandidates();

    TownAcreCell cells[0x24];
    RecordFile candidates;
};

// ---- row helper

// ---- model resource helpers

class VramTask : public Unk_020b83b0 {
public:
    u8 state;
    u8 kind;
    u8 cost;
    VramTask();
    virtual BOOL execute() = 0;
};


class TexVramTask : public VramTask {
public:
    TexTransfer xfer;
    TexVramTask();
    virtual BOOL execute();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
};


class ModelResource {
public:
    u32 fileData;
    void *fileHeap;
    void *model;
    void *texture;
    TexVramTask texVramTask;
    u8 loadState;
    u8 unk_31;

    ModelResource();
    virtual ~ModelResource();
    u32 loadTexture(void *a, TexVramSlot *b, void *c);
    u32 loadModel(void *res, TexVramSlot *b, void *tex, void *heap);
    void release(void);
    void *getTexture(void);
    void *getModel(void);
};

// ---- pool entry (0x1c bytes)
class ModelSlot {
public:
    ModelSlot();
    BOOL clear();
    BOOL init(void *a, void *b, u32 size, void *extra);
    TexVramSlot *getVramSlot();
    void *getHeap();

    u8 inUse;
    void *heap;
    TexVramSlot vramSlot;
};

// ---- model resource holder (derived from ModelResource)
class PooledModel {
public:
    PooledModel();
    ~PooledModel();
    void *getModel();
    void unload();
    void reset();
    s32 loadFromSlot(ModelSlot *e, const char *name);

    ModelResource resource;
    u8 isLoaded;
    void *slot;
    void *unk_3c;
};

// ---- pool of 0x1c-byte entries
// global of the file: 1-byte state with empty inline constructor/destructor (func_0209c0a8 / func_0209c0a4)
class SavedFadeIn {
public:
    SavedFadeIn();
    ~SavedFadeIn();
    u8 fadeIn;
};

SavedFadeIn sSavedFadeIn;

extern "C" void ModelSlotHandle_Init(u16 *p);
extern "C" void ModelSlotHandle_Destroy(u16 *p);
extern "C" void Scene_SaveFadeIn(u32 v);
extern "C" u32 Scene_GetSavedFadeIn();

extern "C" void ModelSlotHandle_Init(u16 *p) {
    *p = 0xffff;
}

extern "C" void ModelSlotHandle_Destroy(u16 *p) {
    *p = 0xffff;
}

ModelSlot::ModelSlot() {
    inUse = 0;
    heap = 0;
}

void *ModelSlot::getHeap() {
    return heap;
}

TexVramSlot *ModelSlot::getVramSlot() {
    return &vramSlot;
}

// TexVramSlot::alloc is void, but this caller tests its (leftover) return register.
extern "C" s32 _ZN11TexVramSlot5allocEPvS0_S0_(TexVramSlot *self, void *a, void *b, void *c);

BOOL ModelSlot::init(void *a, void *b, u32 size, void *extra) {
    if (size) {
        heap = FrameHeap_Create((size + 3) & ~3, (u32)extra);
    }
    if (a != 0 || b != 0) {
        if (_ZN11TexVramSlot5allocEPvS0_S0_(&vramSlot, a, 0, b)) return TRUE;
        return FALSE;
    }
    return TRUE;
}

BOOL ModelSlot::clear() {
    inUse = 0;
    heap = 0;
    return TRUE;
}

ModelSlotPool::ModelSlotPool() {
    allocFunc = 0;
    freeFunc = 0;
    slots = 0;
    numSlots = 0;
    numInUse = 0;
    lastFreed = 0xffff;
}

ModelSlotPool::~ModelSlotPool() {}

ModelSlot *ModelSlotPool::acquire(u16 *idx) {
    u32 i = *idx;
    if (i == 0xffff) {
        ModelSlot *e;
        u16 k;
        u32 n;
        ModelSlot *arr;
        arr = slots;
        e = arr;
        k = 0;
        n = numSlots;
        for (; k < n; e++, k++) {
            if (e->inUse == 0 && k != lastFreed) {
                e->inUse = 1;
                *idx = k;
                numInUse++;
                return e;
            }
        }
        u32 h = lastFreed;
        ModelSlot *r = &arr[h];
        if (arr[h].inUse == 0) {
            r->inUse = 1;
            *idx = lastFreed;
            numInUse++;
            return r;
        }
    } else {
        if (i < numSlots) return &slots[i];
        *idx = 0xffff;
    }
    return 0;
}

void ModelSlotPool::release(u16 *idx) {
    u32 i = *idx;
    if (i != 0xffff) {
        ModelSlot *arr = slots;
        ModelSlot *e = &arr[i];
        arr[i].inUse = 0;
        lastFreed = *idx;
        *idx = 0xffff;
        if (e->heap) func_020e885c(e->heap);
        numInUse--;
    }
}

BOOL ModelSlotPool::init(u32 n, void *a, void *b, u32 size, Unk_0209c1a4_Alloc alloc, Unk_0209c15c_Fn free) {
    void *mem;
    allocFunc = alloc;
    freeFunc = free;
    u32 total = n * ((size + 0x5b) & ~3);
    numSlots = n;
    mem = 0;
    numInUse = 0;
    if (size) mem = allocFunc(total, 0);
    slots = (ModelSlot *)Mem_Alloc(numSlots * 0x1c);
    ModelSlot *e = slots;
    if (e) {
        u32 i;
        for (i = 0; i < numSlots; i++) {
            e = new (e) ModelSlot;
            if (!e->init(a, b, size, mem)) return FALSE;
            e++;
        }
    }
    return TRUE;
}

BOOL ModelSlotPool::destroy() {
    ModelSlot *e = slots;
    if (e != 0) {
        u32 i;
        for (i = 0; i < numSlots; i++) {
            e->clear();
            e++;
        }
        Mem_Free(slots);
    }
    if (freeFunc) freeFunc();
    allocFunc = 0;
    freeFunc = 0;
    numSlots = 0;
    numInUse = 0;
    lastFreed = 0xffff;
    slots = 0;
    return TRUE;
}

PooledModel::PooledModel() {
    isLoaded = 0;
    slot = 0;
}

PooledModel::~PooledModel() {
    unload();
}

s32 PooledModel::loadFromSlot(ModelSlot *e, const char *name) {
    if (slot == 0) slot = e;
    if (isLoaded == 0) {
        TexVramSlot *r = e->getVramSlot();
        void *t = e->getHeap();
        if (resource.loadModel((void *)name, r, t, gCurrentHeap) == 3) isLoaded = 1;
    }
    return isLoaded;
}

void PooledModel::reset() {
    unload();
}

void PooledModel::unload() {
    isLoaded = 0;
    slot = 0;
    unk_3c = 0;
    resource.release();
}

void *PooledModel::getModel() {
    return resource.getModel();
}

SavedFadeIn::SavedFadeIn() {}

SavedFadeIn::~SavedFadeIn() {}

extern "C" void Scene_SaveFadeIn(u32 v) {
    sSavedFadeIn.fadeIn = v;
}

extern "C" u32 Scene_GetSavedFadeIn() {
    return sSavedFadeIn.fadeIn;
}





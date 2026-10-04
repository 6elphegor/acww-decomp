#include "types.h"
#include "net/CommManager.h"

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
struct Unk_0209c614_Vec {
    s32 x, y, z;
};
}

extern "C" {
struct Unk_0209c614_S {
    u8 a, b, c, d;
    u16 e;
    s16 f;
};
}

// ---- CommManager (comm state; only the methods used here)

// ---- RecordFile (cached record table)
class RecordFile {
public:
    RecordFile();
    ~RecordFile();
    void close();
    void loadAll();
    BOOL open(const char *path, s32 size, s32 count);
    u8 pad[0x1c];
};

// ---- 8-byte cell
class TownAcreCell {
public:
    TownAcreCell();
    ~TownAcreCell();
    BOOL setType(s32 v);
    void setAcreId(s32 v);
    s32 getType();
    s32 getAcreId();

    s32 type;
    s32 acreId;
};

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
class TownAcreIndex {
public:
    u8 *calcIndex(s32 i);
};

// ---- model resource helpers
class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 next;
    u8 priority;
    Unk_020b83b0() : unk_04(0), next(0), priority(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 state;
    u8 kind;
    u8 cost;
    VramTask();
    virtual BOOL execute() = 0;
};

struct TexTransfer {
    u32 dstAddr;
    u32 src;
    u32 size;
};

class TexVramTask : public VramTask {
public:
    TexTransfer xfer;
    TexVramTask();
    virtual BOOL execute();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
};

class TexVramSlot {
public:
    u32 texKeyBase;
    u32 tex4x4KeyBase;
    u32 plttKeyBase;
    u8 unk_10;
    u8 unk_11;

    TexVramSlot();
    virtual ~TexVramSlot();
    void setKeys(u32 a, u32 b, u32 c);
    void clear(void);
    void relocateTexture(void *p);
    u32 makePlttKeyAt(u32 a, u32 b);
    u32 makeKeyAtOffset(u32 a, u32 b, u32 c);
    u32 makeTex4x4KeyAt(u32 a, u32 b);
    u32 makeTexKeyAt(u32 a, u32 b);
    u32 makePlttKey(u32 a);
    u32 makeKeyWithBase(u32 a, u32 b);
    u32 makeTex4x4Key(u32 a);
    u32 makeTexKey(u32 a);
    s32 alloc(void *a, void *b, void *c);
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
class ModelSlotPool {
public:
    ModelSlotPool();
    ~ModelSlotPool();
    BOOL destroy();
    BOOL init(u32 n, void *a, void *b, u32 size, Unk_0209c1a4_Alloc alloc, Unk_0209c15c_Fn free);
    void release(u16 *idx);
    ModelSlot *acquire(u16 *idx);

    u16 lastFreed;
    u32 numSlots;
    u32 numInUse;
    ModelSlot *slots;
    Unk_0209c1a4_Alloc allocFunc;
    Unk_0209c15c_Fn freeFunc;
};
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

BOOL ModelSlot::init(void *a, void *b, u32 size, void *extra) {
    if (size) {
        heap = FrameHeap_Create((size + 3) & ~3, (u32)extra);
    }
    if (a != 0 || b != 0) {
        if (vramSlot.alloc(a, 0, b)) return TRUE;
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

struct Unk_0209c3cc_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

class Unk_0209c41c_Actor {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual BOOL vfunc_60(u32 v);
};

struct Unk_0209c41c_Pack {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_0209c614_Actor {
    u8 pad_00[0x5c];
    Unk_0209c614_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
};

#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

typedef void (*Unk_0209c15c_Fn)();
typedef void *(*Unk_0209c1a4_Alloc)(u32, u32);

extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}

extern "C" {
void func_020639e8(char *dst, const char *fmt, ...);
}

extern "C" {
s32 File_GetDecodedSizeByPath(const char *s);
}

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
void *func_02135714(void *p, s32 n, s32 size, void *ctor, void *dtor);
}

extern "C" {
void func_021355f0(void *p, s32 n, s32 size, void *dtor);
}

extern "C" {
extern const char data_020e22d0[];
}

extern "C" {
extern const char data_020e22e4[];
}

extern "C" {
extern u32 sPondAcreIds[6];
}

extern "C" {
extern u16 data_021d7168[];
}

extern "C" {
extern u8 data_021d726c;
}

extern "C" {
extern u8 data_021d7270;
}

extern "C" {
extern u8 data_021f47d0;
}

extern "C" {
extern u8 data_021d7274[3];
}

extern "C" {
extern u8 gFieldSceneKind;
}

extern "C" {
extern u8 sExclusiveRoomScenes[];
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
extern u8 sRoomEntryRequest[];
}

extern "C" {
extern u8 sSceneOccupantTable[];
}

extern "C" {
s32 RoomEntryRequest_SetResult(void *p, s32 v);
}

extern "C" {
s32 SceneOccupantTable_CountWith(void *p, u32 a, u32 b);
}

extern "C" {
s32 SceneOccupantTable_Remove(void *p, u32 a, u32 b);
}

extern "C" {
s32 SceneOccupantTable_Add(void *p, u32 a, u32 b);
}

extern "C" {
s32 RoomEntryRequest_Init(void *p);
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

extern "C" {
Unk_0209c614_Actor *PlayerActor_GetActor(u32 n);
}

extern "C" {
void *Scene_GetWarpRequest();
}

extern "C" {
s32 SceneExit_Resolve(void *o, u32 id, u8 *a, Unk_0209c614_Vec *v, u32 *p20, u16 *e, u8 *c, u8 *b, s32 z0, s32 z1);
}

extern "C" {
void SceneExit_GetDoor(void *o, u32 id, u32 *p24, s16 *f);
}

extern "C" {
void SceneExit_SnapPos(void *o, u32 id, Unk_0209c614_Vec *v34, Unk_0209c614_Vec *v40);
}

extern "C" {
void RoomEntryRequest_SetExitId(void *p, u32 id);
}

extern "C" {
void RoomEntryRequest_SetDoorKind(void *p, u32 v);
}

extern "C" {
void RoomEntryRequest_SetScene(void *p, u32 v);
}

extern "C" {
void RoomEntryRequest_SetPos(void *p, Unk_0209c614_Vec *v);
}

extern "C" {
void RoomEntryRequest_SetAngle(void *p, s32 v);
}

extern "C" {
void RoomEntryRequest_SetRetreatPos(void *p, Unk_0209c614_Vec *v);
}

extern "C" {
BOOL RoomEntry_IsExclusiveScene(u32 v);
}

extern "C" {
void FieldPos_SnapToUnitCenter(Unk_0209c614_Vec *a, Unk_0209c614_Vec *b);
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 Scene_GetPrevious();
}

// ---- CommManager (comm state; only the methods used here)
class CommManager {
public:
    BOOL isOnline();
    void beginRecord();
    void writeRecord(u8 *buf, u32 n);
    void endRecord(u32 cmd, u32 arg);
    u32 isMyAid(u32 v);
};
extern "C" CommManager *gCommManager;

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

    s32 unk_00;
    s32 unk_04;
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

    TownAcreCell unk_00[0x24];
    RecordFile unk_120;
};

// ---- row helper
class Unk_0209c038 {
public:
    u8 *func_0209c038(s32 i);
};

// ---- model resource helpers
class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    VramTask();
    virtual BOOL execute() = 0;
};

struct TexTransfer {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class TexVramTask : public VramTask {
public:
    TexTransfer unk_10;
    TexVramTask();
    virtual BOOL execute();
    void cancel(void);
    BOOL requestTexResource(u32 *a, u8 b);
};

class TexVramSlot {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
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
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    TexVramTask unk_14;
    u8 unk_30;
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

    u8 unk_00;
    void *unk_04;
    TexVramSlot unk_08;
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

    ModelResource unk_00;
    u8 unk_34;
    void *unk_38;
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

    u16 unk_00;
    u32 unk_04;
    u32 unk_08;
    ModelSlot *unk_0c;
    Unk_0209c1a4_Alloc unk_10;
    Unk_0209c15c_Fn unk_14;
};
// global of the file: 1-byte state with empty inline constructor/destructor (func_0209c0a8 / func_0209c0a4)
class SavedFadeIn {
public:
    SavedFadeIn();
    ~SavedFadeIn();
    u8 unk_00;
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
    unk_00 = 0;
    unk_04 = 0;
}

void *ModelSlot::getHeap() {
    return unk_04;
}

TexVramSlot *ModelSlot::getVramSlot() {
    return &unk_08;
}

BOOL ModelSlot::init(void *a, void *b, u32 size, void *extra) {
    if (size) {
        unk_04 = FrameHeap_Create((size + 3) & ~3, (u32)extra);
    }
    if (a != 0 || b != 0) {
        if (unk_08.alloc(a, 0, b)) return TRUE;
        return FALSE;
    }
    return TRUE;
}

BOOL ModelSlot::clear() {
    unk_00 = 0;
    unk_04 = 0;
    return TRUE;
}

ModelSlotPool::ModelSlotPool() {
    unk_10 = 0;
    unk_14 = 0;
    unk_0c = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_00 = 0xffff;
}

ModelSlotPool::~ModelSlotPool() {}

ModelSlot *ModelSlotPool::acquire(u16 *idx) {
    u32 i = *idx;
    if (i == 0xffff) {
        ModelSlot *e;
        u16 k;
        u32 n;
        ModelSlot *arr;
        arr = unk_0c;
        e = arr;
        k = 0;
        n = unk_04;
        for (; k < n; e++, k++) {
            if (e->unk_00 == 0 && k != unk_00) {
                e->unk_00 = 1;
                *idx = k;
                unk_08++;
                return e;
            }
        }
        u32 h = unk_00;
        ModelSlot *r = &arr[h];
        if (arr[h].unk_00 == 0) {
            r->unk_00 = 1;
            *idx = unk_00;
            unk_08++;
            return r;
        }
    } else {
        if (i < unk_04) return &unk_0c[i];
        *idx = 0xffff;
    }
    return 0;
}

void ModelSlotPool::release(u16 *idx) {
    u32 i = *idx;
    if (i != 0xffff) {
        ModelSlot *arr = unk_0c;
        ModelSlot *e = &arr[i];
        arr[i].unk_00 = 0;
        unk_00 = *idx;
        *idx = 0xffff;
        if (e->unk_04) func_020e885c(e->unk_04);
        unk_08--;
    }
}

BOOL ModelSlotPool::init(u32 n, void *a, void *b, u32 size, Unk_0209c1a4_Alloc alloc, Unk_0209c15c_Fn free) {
    void *mem;
    unk_10 = alloc;
    unk_14 = free;
    u32 total = n * ((size + 0x5b) & ~3);
    unk_04 = n;
    mem = 0;
    unk_08 = 0;
    if (size) mem = unk_10(total, 0);
    unk_0c = (ModelSlot *)Mem_Alloc(unk_04 * 0x1c);
    ModelSlot *e = unk_0c;
    if (e) {
        u32 i;
        for (i = 0; i < unk_04; i++) {
            e = new (e) ModelSlot;
            if (!e->init(a, b, size, mem)) return FALSE;
            e++;
        }
    }
    return TRUE;
}

BOOL ModelSlotPool::destroy() {
    ModelSlot *e = unk_0c;
    if (e != 0) {
        u32 i;
        for (i = 0; i < unk_04; i++) {
            e->clear();
            e++;
        }
        Mem_Free(unk_0c);
    }
    if (unk_14) unk_14();
    unk_10 = 0;
    unk_14 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_00 = 0xffff;
    unk_0c = 0;
    return TRUE;
}

PooledModel::PooledModel() {
    unk_34 = 0;
    unk_38 = 0;
}

PooledModel::~PooledModel() {
    unload();
}

s32 PooledModel::loadFromSlot(ModelSlot *e, const char *name) {
    if (unk_38 == 0) unk_38 = e;
    if (unk_34 == 0) {
        TexVramSlot *r = e->getVramSlot();
        void *t = e->getHeap();
        if (unk_00.loadModel((void *)name, r, t, gCurrentHeap) == 3) unk_34 = 1;
    }
    return unk_34;
}

void PooledModel::reset() {
    unload();
}

void PooledModel::unload() {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_00.release();
}

void *PooledModel::getModel() {
    return unk_00.getModel();
}

SavedFadeIn::SavedFadeIn() {}

SavedFadeIn::~SavedFadeIn() {}

extern "C" void Scene_SaveFadeIn(u32 v) {
    sSavedFadeIn.unk_00 = v;
}

extern "C" u32 Scene_GetSavedFadeIn() {
    return sSavedFadeIn.unk_00;
}

struct Unk_0209c3cc_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" BOOL func_0209c3e0(u32 idx, u8 v);

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

extern "C" void RoomEntry_Leave(u32 a, u32 b);

struct Unk_0209c614_Actor {
    u8 pad_00[0x5c];
    Unk_0209c614_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

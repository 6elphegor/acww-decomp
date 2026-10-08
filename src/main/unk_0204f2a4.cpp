#include "uptr.h"
#include "gfx/ModelSlotPool.h"
#include "gfx/PooledModel.h"
#include "gfx/AnimModel.h"
#include "snd/SndSeEmitter.h"
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "save/Backup.h"
#include "gfx/Mtx43.h"
#include "sys/ProcProfile.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/CachedModel.h"
#include "gfx/Model.h"
#include "gfx/TwoLayerAnimModel.h"
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_0203ecec.h"
#include "proto/main/unk_0204f2a4.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_020742f4.h"
#include "proto/main/unk_0209c08c.h"

extern "C" const u8 data_020ca314[4];

// One displayed fish (0x16c bytes on the DS): its sound emitter, model slot, pooled resource and animated model.
struct FishDisplayEntry {
    FishDisplayEntry();

    /* 0x000 */ SndSeEmitter emitter;
    /* 0x040 */ s32 fishId;
    /* 0x044 */ s32 entryState;
    /* 0x048 */ ModelSlotHandle modelSlot;
    /* 0x04a */ u8 pad_4a[2];
    /* 0x04c */ PooledModel pooledModel;
    /* 0x08c */ VecFx32 pos;
    /* 0x098 */ AnimModel model;
    /* 0x150 */ VecFx32 scale;
    /* 0x15c */ s16 rotX, rotY, rotZ;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ u32 alpha;
    /* 0x168 */ u8 animate;
    /* 0x169 */ u8 playSound;
    /* 0x16a */ u8 pad_16a[2];
};

// The model slot of the pool (src/main/unk_0209c08c.cpp keeps the class to itself): its heap.
class ModelSlot {
public:
    void *getHeap();
};

struct FishDisplayRequest {
    u8 kind;
    u8 fishId;
    u32 posX;
    u32 posZ;
};

class FishDisplay;

extern "C" {
s32 FishDisplay_FindFreeEntry(void);
u32 FishDisplay_GetRequestKind(u32 i);
void FishDisplayEntry_SetScale(FishDisplayEntry *, VecFx32 *);
void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e);
extern s32 sFishDisplayEntryCount;
extern FishDisplay *gFishDisplay;
extern u8 gFieldSceneKind;
u8 *func_021065dc(u8 *p);              // the animation file's first animation (NNS G3D resource helpers)
u8 *func_021065f8(u8 *p, u32 i);
void NNS_G3dMdlSetMdlAlpha(u8 *res, u32 i, u32 v);
void Mtx43_SetTranslate(Mtx43 *m, s32 x, s32 y, s32 z);
void Mtx43_RotateX(Mtx43 *m, s32 angle);
void Mtx43_RotateXYZ(Mtx43 *m, s32 x, s32 y, s32 z);
void Mtx43_RotateY(Mtx43 *m, s32 angle);
void Mtx43_RotateZ(Mtx43 *m, s32 angle);
extern Mtx43 data_021f47e0;            // the scratch matrix
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
FishDisplayEntry *FishDisplayEntry_Construct(FishDisplayEntry *p);
FishDisplayEntry *FishDisplayEntry_Destruct(FishDisplayEntry *p);
FishDisplay *FishDisplay_Create(void);
}

class FishDisplay : public GameProc {
public:
    inline FishDisplay();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    ~FishDisplay() {}
    void releaseEntry(s32);
    BOOL beginLoad(s32);
    void updateTransform(FishDisplayEntry *);
    BOOL loadShadowModel(ModelSlotPool *, FishDisplayEntry *);
    BOOL loadStaticModel(ModelSlotPool *, FishDisplayEntry *);
    BOOL loadFishModel(ModelSlotPool *, FishDisplayEntry *);

    FishDisplayEntry entries[4];
    ModelSlotPool modelPool;
};

extern "C" {
FishDisplayEntry *FishDisplayEntry_Construct(FishDisplayEntry *p);
FishDisplayEntry *FishDisplayEntry_Destruct(FishDisplayEntry *p);
FishDisplay *FishDisplay_Create(void);
}

// Declarations for data defined further down (definition order sets the data layout)
extern char *sFishShadowMdlPath;
extern const char *sFishShadowAnmPath;
extern char sFishMdl56File[];
extern char sFishMdl57File[];
extern char sFishMdl58File[];
extern char sFishShadowMdlFile[];
extern char sFishShadowAnmFile[];
extern ProcProfile sFishDisplayProfile;
extern char *sFishStaticMdlPaths[3];
extern FishDisplayRequest sFishDisplayRequests[4];
extern const u8 sFishBaseSizes[0x160];
extern Backup gBackup;

inline FishDisplay::FishDisplay() {}

extern const u8 sFishBaseSizes[];

static inline BOOL Unk_0204f4f8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void FishDisplay_RecvAct00(s8 *p, u32 v) {
    u32 a, b;
    u8 buf[8];
    s32 c = p[1];
    MI_CpuCopy8(p + 2, buf, 5);
    NetBuf_UnpackPair20(buf, &a, &b);
    FishDisplay_PostRequest((u8)v, 0, c, a, b);
}

extern "C" void FishDisplay_RecvAct01(void *p, u32 v) {
    FishDisplay_PostRequest((u8)v, 1, -1, 0, 0);
}

extern "C" void FishDisplay_RecvAct02(void *p, u32 v) {
    FishDisplay_PostRequest((u8)v, 2, -1, 0, 0);
}

extern "C" FishDisplay *FishDisplay_Create(void) {
    return new FishDisplay();
}

FishDisplayEntry::FishDisplayEntry() {
    fishId = -1;
    entryState = 0;
    pooledModel.reset();
    pos.x = 0x1000;
    pos.y = 0x1000;
    pos.z = 0x1000;
    scale.x = 0x1000;
    scale.y = 0x1000;
    scale.z = 0x1000;
    rotX = 0;
    rotY = 0;
    rotZ = 0;
    alpha = 0x1f;
}

extern "C" FishDisplayEntry *FishDisplayEntry_Construct(FishDisplayEntry *e) {
    new (e) FishDisplayEntry();
    return e;
}

extern "C" FishDisplayEntry *FishDisplayEntry_Destruct(FishDisplayEntry *e) {
    e->~FishDisplayEntry();
    return e;
}

extern "C" s32 FishDisplay_FindFreeEntry(void) {
    s32 i = 0;
    s32 r = -1;
    if (gFishDisplay != NULL) {
        FishDisplayEntry *e = gFishDisplay->entries;
        for (; i < sFishDisplayEntryCount; e++, i++) {
            if (e->entryState == 0) {
                r = i;
                e->entryState = 1;
                break;
            }
        }
    }
    return r;
}

BOOL FishDisplay::beginLoad(s32 idx) {
    BOOL r = FALSE;
    if (gFishDisplay == NULL) {
        return FALSE;
    }
    if (idx != -1) {
        FishDisplayEntry *e = &gFishDisplay->entries[idx];
        e->entryState = 2;
        modelPool.acquire(&e->modelSlot.index);
        e->pooledModel.reset();
        e->emitter.callInit();
        r = TRUE;
    }
    return r;
}

void FishDisplay::releaseEntry(s32 idx) {
    if (idx >= 0 && idx < sFishDisplayEntryCount && gFishDisplay != NULL) {
        FishDisplayEntry *e = &gFishDisplay->entries[idx];
        if (e->entryState != 0 && e->entryState != 1) {
            e->emitter.callStop();
        }
        e->fishId = -1;
        e->entryState = 0;
        e->model.detachJointAnim();
        e->pooledModel.unload();
        e->model.CachedModel::release();
        modelPool.release(&e->modelSlot.index);
    }
}

BOOL FishDisplay::onCreate() {
    if ((s32)param == 0) {
        sFishDisplayEntryCount = 4;
    } else if ((s32)param == 1) {
        sFishDisplayEntryCount = 1;
    }
    modelPool.init(sFishDisplayEntryCount, (void *)(0x800), (void *)(0x80), 0x134c, FishDisplayHeap_Create, FishDisplayHeap_Destroy);
    gFishDisplay = this;
    return TRUE;
}

BOOL FishDisplay::onExecute() {
    volatile s32 v0, v4;
    FishDisplay *g = gFishDisplay;
    if (g == NULL) return FALSE;
    FishDisplayEntry *e = g->entries;
    s32 i = 0;
    v4 = 0;
    v0 = 0;
    for (; i < sFishDisplayEntryCount; e++, i++) {
        switch (e->entryState) {
        case 1:
            if (e->fishId != -1) {
                beginLoad(i);
            }
            break;
        case 2: {
            s32 t = e->fishId;
            if ((u32)(t - 0x38) <= 2) {
                loadStaticModel(&modelPool, e);
            } else if (t == 0x3b) {
                loadShadowModel(&modelPool, e);
            } else {
                loadFishModel(&modelPool, e);
            }
            break;
        }
        case 3:
            if (e->fishId == 0x3b) {
                e->model.stepAnim();
                NNS_G3dMdlSetMdlAlpha((u8 *)e->pooledModel.getModel(), v0, e->alpha);
            } else if (e->fishId == 0x38 || e->fishId == 0x39 || e->fishId == 0x3a) {
            } else {
                e->model.stepAnim();
                if (e->playSound != 0) {
                    VecFx32 *p = &e->pos;
                    VecFx32 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    e->emitter.callUpdateRelative(&t);
                    if (static_cast<AnimFrameCtrl *>(&e->model)->hasPassedFrame(1)) {
                        Snd_SeEmitterPlayOneShot(&e->emitter, 0x84d, 0x7f, v4);
                    }
                }
            }
            updateTransform(e);
            break;
        case 4:
            releaseEntry(i);
            break;
        }
    }
    return TRUE;
}

void FishDisplay::updateTransform(FishDisplayEntry *e) {
    AnimModel *m = &e->model;
    s32 id = e->fishId;
    VecFx32 v;
    VecFx32 o;
    s32 ang;
    VecFx32 *pv = &e->pos;
    v.x = pv->x; v.y = pv->y; v.z = pv->z;
    s32 mode = param;
    if (mode == 0) {
        ang = WorldCurve_ToCurved(&o, &v);
    } else if (mode == 1) {
        ang = 0;
        o = v;
    }
    Mtx43_SetTranslate(&data_021f47e0, o.x, o.y, o.z);
    Mtx43_RotateX(&data_021f47e0, ang);
    if (id != 0xf) {
        Mtx43_RotateXYZ(&data_021f47e0, e->rotX, e->rotY, e->rotZ);
    } else {
        Mtx43_RotateY(&data_021f47e0, e->rotY);
        Mtx43_RotateZ(&data_021f47e0, e->rotZ);
        Mtx43_RotateX(&data_021f47e0, e->rotX);
    }
    m->mtx = data_021f47e0;
}

BOOL FishDisplay::loadFishModel(ModelSlotPool *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    char buf[0x18];
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    ModelSlot *x = p->acquire(&e->modelSlot.index);
    void *t;
    PooledModel *y = &e->pooledModel;
    s32 q = id / 16;
    if (id < 10) {
        Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbmd", q, id);
    } else {
        Str_SPrintf(buf, "/fish/0%d/fish%d.nsbmd", q, id);
    }
    if (y->loadFromSlot(x, buf)) {
        AnimModel *m = &e->model;
        m->setResource((NNSG3dResMdl *)y->getModel(), 0);
        t = x->getHeap();
        if (id < 10) {
            Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbca", q, id);
        } else {
            Str_SPrintf(buf, "/fish/0%d/fish%d.nsbca", q, id);
        }
        void *u = func_021065f8(func_021065dc((u8 *)File_LoadAlloc(buf, t, 4, 0)), 0);
        s32 flag = 0x1000;
        if (e->animate == 0) flag = 0;
        if (m->allocAnmObj(t)) {
            static_cast<BlendAnimModel *>(m)->initAnim(u, 0, flag, 1, 0); // (initAnim uses the AnimModel part)
            m->attachAnim();
            e->entryState = 3;
            updateTransform(e);
            r = TRUE;
        }
    }
    return r;
}

BOOL FishDisplay::loadStaticModel(ModelSlotPool *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    ModelSlot *x = p->acquire(&e->modelSlot.index);
    PooledModel *y = &e->pooledModel;
    if (y->loadFromSlot(x, sFishStaticMdlPaths[id - 0x38])) {
        e->model.setResource((NNSG3dResMdl *)y->getModel(), NULL);
        e->entryState = 3;
        updateTransform(e);
        r = TRUE;
    }
    return r;
}

BOOL FishDisplay::loadShadowModel(ModelSlotPool *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    ModelSlot *x = p->acquire(&e->modelSlot.index);
    PooledModel *y = &e->pooledModel;
    if (y->loadFromSlot(x, sFishShadowMdlPath)) {
        AnimModel *m = &e->model;
        m->setResource((NNSG3dResMdl *)y->getModel(), NULL);
        void *t = x->getHeap();
        void *u = func_021065f8(func_021065dc((u8 *)File_LoadAlloc(sFishShadowAnmPath, t, 4, NULL)), 0);
        if (m->allocAnmObj(t)) {
            static_cast<BlendAnimModel *>(m)->initAnim(u, 0, 0x1000, 1, 0); // (initAnim uses the AnimModel part)
            m->attachAnim();
            e->entryState = 3;
            updateTransform(e);
            if (id == 0x3b) {
                NNS_G3dMdlSetMdlAlpha((u8 *)y->getModel(), r, e->alpha);
            }
            r = TRUE;
        }
    }
    return r;
}

BOOL FishDisplay::onDraw() {
    FishDisplay *g = gFishDisplay;
    if (g == NULL) return FALSE;
    FishDisplayEntry *e = g->entries;
    for (s32 i = 0; i < sFishDisplayEntryCount; e++, i++) {
        if (e->entryState == 3) {
            VecFx32 v;
            v.x = e->scale.x;
            v.y = e->scale.y;
            v.z = e->scale.z;
            e->model.drawAnimated(&v);
        }
    }
    return TRUE;
}

BOOL FishDisplay::onDelete() {
    for (s32 i = 0; i < sFishDisplayEntryCount; i++) {
        releaseEntry(i);
    }
    modelPool.destroy();
    gFishDisplay = NULL;
    return TRUE;
}

extern "C" void FishDisplayEntry_SetScale(FishDisplayEntry *e, VecFx32 *v) {
    e->scale.x = v->x;
    e->scale.y = v->y;
    e->scale.z = v->z;
}

extern "C" void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e) {
    if (a < 4 && c < 0x38) {
        switch (b) {
        case 0:
            sFishDisplayRequests[a].kind = b;
            sFishDisplayRequests[a].fishId = c;
            sFishDisplayRequests[a].posX = d;
            sFishDisplayRequests[a].posZ = e;
            break;
        case 3:
            sFishDisplayRequests[a].kind = b;
            break;
        case 1:
            if (Unk_0204f4f8_IsZero(gFieldSceneKind)) {
                if (FishDisplay_GetRequestKind(a) == 3) {
                    sFishDisplayRequests[a].kind = b;
                } else {
                    sFishDisplayRequests[a].kind = 8;
                }
                sFishDisplayRequests[a].fishId = c;
                sFishDisplayRequests[a].posX = d;
                sFishDisplayRequests[a].posZ = e;
            } else {
                sFishDisplayRequests[a].kind = 8;
                sFishDisplayRequests[a].fishId = c;
                sFishDisplayRequests[a].posX = d;
                sFishDisplayRequests[a].posZ = e;
            }
            break;
        case 2:
            if (Unk_0204f4f8_IsZero(gFieldSceneKind)) {
                if (FishDisplay_GetRequestKind(a) == 3 || FishDisplay_GetRequestKind(a) == 8 || FishDisplay_GetRequestKind(a) == 1) {
                    sFishDisplayRequests[a].kind = b;
                } else {
                    sFishDisplayRequests[a].kind = 8;
                }
                sFishDisplayRequests[a].fishId = c;
                sFishDisplayRequests[a].posX = d;
                sFishDisplayRequests[a].posZ = e;
            } else {
                sFishDisplayRequests[a].kind = 8;
                sFishDisplayRequests[a].fishId = c;
                sFishDisplayRequests[a].posX = d;
                sFishDisplayRequests[a].posZ = e;
            }
            break;
        case 4:
            sFishDisplayRequests[a].kind = b;
            break;
        case 5:
            sFishDisplayRequests[a].kind = b;
            break;
        case 8:
            sFishDisplayRequests[a].kind = 8;
            sFishDisplayRequests[a].fishId = c;
            sFishDisplayRequests[a].posX = d;
            sFishDisplayRequests[a].posZ = e;
            break;
        case 6:
        case 7:
        default:
            sFishDisplayRequests[a].kind = b;
            break;
        }
    }
}

extern "C" u32 FishDisplay_GetRequestKind(u32 i) {
    if (i >= 4) return 9;
    return sFishDisplayRequests[i].kind;
}

extern "C" u32 FishDisplay_GetRequestFish(u32 i) {
    if (i >= 4) return 0xff;
    return sFishDisplayRequests[i].fishId;
}

extern "C" BOOL FishDisplay_GetRequestPos(u32 *a, u32 *b, u32 i) {
    if (i >= 4) return FALSE;
    *a = sFishDisplayRequests[i].posX;
    *b = sFishDisplayRequests[i].posZ;
    return TRUE;
}

extern "C" s32 FishDisplay_Acquire(void) {
    return FishDisplay_FindFreeEntry();
}

extern "C" BOOL FishDisplay_SetEntry(s32 idx, s32 id, VecFx32 *pos, VecFx32 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10) {
    BOOL r = FALSE;
    FishDisplay *g = gFishDisplay;
    if (g != NULL && idx >= 0 && idx < sFishDisplayEntryCount && id >= 0 && id < 0x3c) {
        FishDisplayEntry *e = &g->entries[idx];
        e->fishId = id;
        VecFx32 *d = &e->pos;
        d->x = pos->x; d->y = pos->y; d->z = pos->z;
        VecFx32 t;
        t.x = vec->x; t.y = vec->y; t.z = vec->z;
        FishDisplayEntry_SetScale(e, &t);
        e->rotX = a5;
        e->rotY = a6;
        e->rotZ = a7;
        e->animate = a8;
        e->playSound = a9;
        e->alpha = a10;
        r = TRUE;
    }
    return r;
}

extern "C" void FishDisplay_Release(s32 idx) {
    if (gFishDisplay != NULL && idx >= 0 && idx < sFishDisplayEntryCount) {
        gFishDisplay->entries[idx].entryState = 4;
    }
}

extern "C" BOOL FishDisplay_HasPassedFrame(s32 idx, s32 unused) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < sFishDisplayEntryCount) {
        FishDisplayEntry *e = &gFishDisplay->entries[idx];
        s32 t = e->fishId;
        if (t < 0 || t >= 0x38) return FALSE;
        if (static_cast<AnimFrameCtrl *>(&e->model)->hasPassedFrame(unused)) r = TRUE;
    }
    return r;
}

extern "C" u32 Fish_GetBaseSize(u32 x) {
    if (x >= 0x38) return 10;
    return *(u16 *)(sFishBaseSizes + x * 6);
}

// ---------------------------------------------------------------- functions
extern "C" u32 Fish_GetSizeClass(u32 x) {
    if (x >= 0x3b) return 3;
    return data_020ca314[x * 6];
}

// Declarations for data defined further down (definition order sets the data layout)
extern const char *sFishShadowAnmPath;
extern char *sFishShadowMdlPath;
extern char sFishMdl56File[];
extern char sFishMdl57File[];
extern char sFishMdl58File[];
extern char sFishShadowMdlFile[];
extern char sFishShadowAnmFile[];
extern s32 sFishDisplayEntryCount;
extern ProcProfile sFishDisplayProfile;
extern char *sFishStaticMdlPaths[3];
extern FishDisplayRequest sFishDisplayRequests[4];
extern const u8 sFishBaseSizes[0x160];
extern Backup gBackup;
extern FishDisplay *gFishDisplay;
extern const u8 data_020ca314[4];

const char *sFishShadowAnmPath = sFishShadowAnmFile;

char *sFishShadowMdlPath = sFishShadowMdlFile;

// ---------------------------------------------------------------- data
char sFishMdl56File[] = "/fish/03/fish56.nsbmd";

char sFishMdl57File[] = "/fish/03/fish57.nsbmd";

char sFishMdl58File[] = "/fish/03/fish58.nsbmd";

char sFishShadowMdlFile[] = "/fish/03/fish_shadow.nsbmd";

char sFishShadowAnmFile[] = "/fish/03/fish_shadow.nsbca";

s32 sFishDisplayEntryCount = 4;

ProcProfile sFishDisplayProfile = {(void *(*)())FishDisplay_Create, 0xc2, 8};

char *sFishStaticMdlPaths[3] = {sFishMdl56File, sFishMdl57File, sFishMdl58File};

FishDisplayRequest sFishDisplayRequests[4] = {
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
    {8, 0xff, 0, 0},
};

const u8 sFishBaseSizes[0x160] = {
    0x0a, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x00, 0x01, 0x03, 0x04, 0x00, 0x1e, 0x00, 0x01, 0x03,
    0x03, 0x00, 0x23, 0x00, 0x02, 0x02, 0x03, 0x00, 0x32, 0x00, 0x03, 0x02, 0x03, 0x00, 0x4b, 0x00,
    0x03, 0x02, 0x03, 0x00, 0x4b, 0x00, 0x00, 0x02, 0x03, 0x00, 0x0f, 0x00, 0x00, 0x02, 0x03, 0x00,
    0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x04,
    0x03, 0x00, 0x0c, 0x00, 0x00, 0x02, 0x04, 0x00, 0x0f, 0x00, 0x00, 0x03, 0x03, 0x00, 0x14, 0x00,
    0x02, 0x02, 0x04, 0x00, 0x3c, 0x00, 0x07, 0x01, 0x01, 0x00, 0x64, 0x00, 0x03, 0x02, 0x01, 0x00,
    0x50, 0x00, 0x01, 0x04, 0x04, 0x00, 0x19, 0x00, 0x01, 0x01, 0x01, 0x00, 0x23, 0x00, 0x02, 0x02,
    0x02, 0x00, 0x32, 0x00, 0x00, 0x03, 0x03, 0x00, 0x0f, 0x00, 0x01, 0x02, 0x01, 0x00, 0x19, 0x00,
    0x01, 0x01, 0x01, 0x00, 0x23, 0x00, 0x02, 0x01, 0x01, 0x00, 0x32, 0x00, 0x03, 0x02, 0x02, 0x00,
    0x46, 0x00, 0x04, 0x00, 0x01, 0x00, 0x96, 0x00, 0x04, 0x02, 0x01, 0x00, 0x5a, 0x00, 0x05, 0x02,
    0x01, 0x00, 0xa0, 0x00, 0x00, 0x02, 0x03, 0x00, 0x04, 0x00, 0x00, 0x02, 0x02, 0x00, 0x0c, 0x00,
    0x01, 0x04, 0x03, 0x00, 0x1e, 0x00, 0x03, 0x03, 0x02, 0x00, 0x46, 0x00, 0x04, 0x01, 0x00, 0x00,
    0x64, 0x00, 0x05, 0x03, 0x01, 0x00, 0xbe, 0x00, 0x05, 0x01, 0x01, 0x00, 0x2c, 0x01, 0x00, 0x00,
    0x02, 0x00, 0x03, 0x00, 0x01, 0x02, 0x04, 0x00, 0x19, 0x00, 0x00, 0x01, 0x01, 0x00, 0x08, 0x00,
    0x00, 0x02, 0x01, 0x00, 0x0f, 0x00, 0x01, 0x03, 0x03, 0x00, 0x1e, 0x00, 0x01, 0x02, 0x02, 0x00,
    0x23, 0x00, 0x01, 0x03, 0x03, 0x00, 0x28, 0x00, 0x02, 0x02, 0x00, 0x00, 0x3c, 0x00, 0x04, 0x03,
    0x02, 0x00, 0x64, 0x00, 0x03, 0x02, 0x01, 0x00, 0x5a, 0x00, 0x02, 0x02, 0x02, 0x00, 0x32, 0x00,
    0x03, 0x01, 0x01, 0x00, 0x50, 0x00, 0x01, 0x03, 0x02, 0x00, 0x23, 0x00, 0x02, 0x03, 0x02, 0x00,
    0x3c, 0x00, 0x02, 0x03, 0x03, 0x00, 0x3c, 0x00, 0x05, 0x01, 0x00, 0x00, 0xe6, 0x00, 0x05, 0x01,
    0x00, 0x00, 0xdc, 0x00, 0x06, 0x00, 0x01, 0x00, 0x2c, 0x01, 0x06, 0x01, 0x01, 0x00, 0xfa, 0x00,
    0x06, 0x01, 0x00, 0x00, 0x1c, 0x02, 0x04, 0x00, 0x00, 0x00, 0x96, 0x00, 0x01, 0x03, 0x03, 0x00,
    0x00, 0x00, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x03, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
};

Backup gBackup;

FishDisplay *gFishDisplay;

// A byte table shared with other files (loaded through its address; defined after the code here, where a visible const would be folded). Other code uses the addresses of its bytes 1 and 2 (lcf_symbols.txt).
// Owned here by position: it lies between the data of the neighbouring files in link order and fits this file's
// size order (linkprep check); the original file is this one or another file between those neighbours.
const u8 data_020ca314[4] = {0, 2, 1, 0};

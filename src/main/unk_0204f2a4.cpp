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
#define PROTO_LOCAL_ModelSlotHandle_Destroy  // declared below: the shared prototype conflicts with the calls here
#define PROTO_LOCAL_ModelSlotHandle_Init  // declared below: the shared prototype conflicts with the calls here
#include "proto/main/unk_020039ec.h"
#include "proto/main/unk_0203ecec.h"
#include "proto/main/unk_0204f2a4.h"
#include "proto/main/unk_0205b7b0.h"
#include "proto/main/unk_02063904.h"
#include "proto/main/unk_02063f3c.h"
#include "proto/main/unk_020742f4.h"

#include "item/FishInfo.h"

struct FishDisplayEntry {
    u8 pad_00[HOST_SIZED(0x40, SndSeEmitter)] HOST_ALIGN8;  // SndSeEmitter (Snd_SeEmitterPlayOneShot)
    s32 fishId;
    s32 entryState;
    u8 modelSlot[4];
    u8 pooledModel[HOST_SIZED(0x40, PooledModel)] HOST_ALIGN8;
    VecFx32 pos;
    u8 model[HOST_SIZED(0xb8, AnimModel)] HOST_ALIGN8;
    VecFx32 scale;
    s16 rotX, rotY, rotZ;
    u8 pad_162[2];
    u32 alpha;
    u8 animate;
    u8 playSound;
    u8 pad_16a[2];
};

struct FishDisplayRequest {
    u8 kind;
    u8 fishId;
    u32 posX;
    u32 posZ;
};

class FishDisplay;

extern "C" {
s32 func_02072e44(void *);
void *__cxa_vec_cleanup(void *p, u32 n, u32 size, void *dtor);
s32 FishDisplay_FindFreeEntry(void);
u32 FishDisplay_GetRequestKind(u32 i);
void FishDisplayEntry_SetScale(FishDisplayEntry *, VecFx32 *);
void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e);
extern s32 sFishDisplayEntryCount;
extern FishDisplay *gFishDisplay;
extern u8 gFieldSceneKind;
void *_ZN9ModelSlot7getHeapEv(void *);
void *func_021065dc(void *p);
void *func_021065f8(void *p, u32 i);
void NNS_G3dMdlSetMdlAlpha(void *, s32, u32);
void Mtx43_SetTranslate(void *, s32, s32, s32);
void Mtx43_RotateX(void *, s32);
void Mtx43_RotateXYZ(void *, s32, s32, s32);
void Mtx43_RotateY(void *, s32);
void Mtx43_RotateZ(void *, s32);
extern u8 data_021f47e0[];
void ModelSlotHandle_Destroy(void *p);
#define SndSeEmitter_dtor _ZN12SndSeEmitterD1Ev
void SndSeEmitter_dtor(void *p);
#define SndSeEmitter_ctor _ZN12SndSeEmitterC1Ev
void SndSeEmitter_ctor(void *p);
void ModelSlotHandle_Init(void *p);
void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
s32 MI_CpuCopy8(void *src, void *dst, s32 n);
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
    ~FishDisplay() {
        ((ModelSlotPool *)(modelPool))->~ModelSlotPool();
        __cxa_vec_cleanup(entries, 4, sizeof(FishDisplayEntry), (void *)FishDisplayEntry_Destruct);
    }
    void releaseEntry(s32);
    BOOL beginLoad(s32);
    void updateTransform(FishDisplayEntry *);
    BOOL loadShadowModel(void *, FishDisplayEntry *);
    BOOL loadStaticModel(void *, FishDisplayEntry *);
    BOOL loadFishModel(void *, FishDisplayEntry *);

    FishDisplayEntry entries[4];
    u8 modelPool[HOST_SIZED(0x18, ModelSlotPool) / 1] HOST_ALIGN8;
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
extern Backup gBackup;

inline FishDisplay::FishDisplay() {
    __cxa_vec_ctor(entries, 4, sizeof(FishDisplayEntry), (void *)FishDisplayEntry_Construct, (void *)FishDisplayEntry_Destruct);
    new (modelPool) ModelSlotPool();
}

static inline BOOL Unk_0204f4f8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" void FishDisplay_RecvAct00(s8 *p, u32 v) {
    s32 a, b;
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

extern "C" FishDisplayEntry *FishDisplayEntry_Construct(FishDisplayEntry *e) {
    new (e) SndSeEmitter();
    ModelSlotHandle_Init(e->modelSlot);
    new (e->pooledModel) PooledModel();
    new (e->model) AnimModel();
    e->fishId = -1;
    e->entryState = 0;
    ((PooledModel *)(e->pooledModel))->reset();
    e->pos.x = 0x1000;
    e->pos.y = 0x1000;
    e->pos.z = 0x1000;
    e->scale.x = 0x1000;
    e->scale.y = 0x1000;
    e->scale.z = 0x1000;
    e->rotX = 0;
    e->rotY = 0;
    e->rotZ = 0;
    e->alpha = 0x1f;
    return e;
}

extern "C" FishDisplayEntry *FishDisplayEntry_Destruct(FishDisplayEntry *e) {
    ((AnimModel *)(e->model))->AnimModel::~AnimModel();
    ((PooledModel *)(e->pooledModel))->~PooledModel();
    ModelSlotHandle_Destroy(e->modelSlot);
    ((SndSeEmitter *)(e))->SndSeEmitter::~SndSeEmitter();
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
        ((ModelSlotPool *)(modelPool))->acquire((u16 *)(e->modelSlot));
        ((PooledModel *)(e->pooledModel))->reset();
        ((SndSeEmitter *)(e))->callInit();
        r = TRUE;
    }
    return r;
}

void FishDisplay::releaseEntry(s32 idx) {
    if (idx >= 0 && idx < sFishDisplayEntryCount && gFishDisplay != NULL) {
        FishDisplayEntry *e = &gFishDisplay->entries[idx];
        if (e->entryState != 0 && e->entryState != 1) {
            ((SndSeEmitter *)(e))->callStop();
        }
        e->fishId = -1;
        e->entryState = 0;
        ((AnimModel *)(e->model))->detachJointAnim();
        ((PooledModel *)(e->pooledModel))->unload();
        ((CachedModel *)(e->model))->release();
        ((ModelSlotPool *)(modelPool))->release((u16 *)(e->modelSlot));
    }
}

BOOL FishDisplay::onCreate() {
    if ((s32)param == 0) {
        sFishDisplayEntryCount = 4;
    } else if ((s32)param == 1) {
        sFishDisplayEntryCount = 1;
    }
    ((ModelSlotPool *)(modelPool))->init(sFishDisplayEntryCount, (void *)(0x800), (void *)(0x80), 0x134c, (ModelSlotAllocFunc)((void *)FishDisplayHeap_Create), (ModelSlotFreeFunc)((void *)FishDisplayHeap_Destroy));
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
                loadStaticModel(modelPool, e);
            } else if (t == 0x3b) {
                loadShadowModel(modelPool, e);
            } else {
                loadFishModel(modelPool, e);
            }
            break;
        }
        case 3:
            if (e->fishId == 0x3b) {
                ((AnimModel *)(HOST_AT(e, 0x98, model[0], 0)))->stepAnim();
                NNS_G3dMdlSetMdlAlpha(((PooledModel *)(HOST_AT(e, 0x4c, pooledModel[0], 0)))->getModel(), v0, *(u32 *)(HOST_AT(e, 0x164, alpha, 0)));
            } else if (e->fishId == 0x38 || e->fishId == 0x39 || e->fishId == 0x3a) {
            } else {
                ((AnimModel *)(HOST_AT(e, 0x98, model[0], 0)))->stepAnim();
                if (e->playSound != 0) {
                    VecFx32 *p = &e->pos;
                    VecFx32 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    ((SndSeEmitter *)(e))->callUpdateRelative((VecFx32 *)(&t));
                    if (((AnimFrameCtrl *)(HOST_AT(e, 0x134, model[156], 0)))->hasPassedFrame(1)) {
                        Snd_SeEmitterPlayOneShot((SndSeEmitter *)e->pad_00, 0x84d, 0x7f, v4);
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
    u8 *m = HOST_AT(e, 0x98, model[0], 0);
    s32 id = e->fishId;
    VecFx32 v;
    VecFx32 o;
    s32 ang;
    VecFx32 *pv = &e->pos;
    v.x = pv->x; v.y = pv->y; v.z = pv->z;
    s32 mode = *(s32 *)((u8 *)this + 8);
    if (mode == 0) {
        ang = WorldCurve_ToCurved(&o, &v);
    } else if (mode == 1) {
        ang = 0;
        o = v;
    }
    Mtx43_SetTranslate(data_021f47e0, o.x, o.y, o.z);
    Mtx43_RotateX(data_021f47e0, ang);
    if (id != 0xf) {
        Mtx43_RotateXYZ(data_021f47e0, e->rotX, e->rotY, e->rotZ);
    } else {
        Mtx43_RotateY(data_021f47e0, e->rotY);
        Mtx43_RotateZ(data_021f47e0, e->rotZ);
        Mtx43_RotateX(data_021f47e0, e->rotX);
    }
    *(Mtx43 *)(m + 0x64) = *(Mtx43 *)data_021f47e0;
}

BOOL FishDisplay::loadFishModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    char buf[0x18];
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    void *x = ((ModelSlotPool *)(p))->acquire((u16 *)(HOST_AT(e, 0x48, modelSlot[0], 0)));
    void *t;
    void *y = HOST_AT(e, 0x4c, pooledModel[0], 0);
    s32 q = id / 16;
    if (id < 10) {
        Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbmd", q, id);
    } else {
        Str_SPrintf(buf, "/fish/0%d/fish%d.nsbmd", q, id);
    }
    if (((PooledModel *)(y))->loadFromSlot((ModelSlot *)(x), buf)) {
        u8 *m = HOST_AT(e, 0x98, model[0], 0);
        ((Model *)(m))->setResource((NNSG3dResMdl *)(((PooledModel *)(y))->getModel()), 0);
        t = _ZN9ModelSlot7getHeapEv(x);
        if (id < 10) {
            Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbca", q, id);
        } else {
            Str_SPrintf(buf, "/fish/0%d/fish%d.nsbca", q, id);
        }
        void *u = func_021065f8(func_021065dc(File_LoadAlloc(buf, t, 4, 0)), 0);
        s32 flag = 0x1000;
        if (e->animate == 0) flag = 0;
        if (((AnimModel *)(m))->allocAnmObj(t)) {
            ((BlendAnimModel *)(m))->initAnim(u, 0, flag, 1, 0);
            ((AnimModel *)(m))->attachAnim();
            e->entryState = 3;
            updateTransform(e);
            r = TRUE;
        }
    }
    return r;
}

BOOL FishDisplay::loadStaticModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    void *x = ((ModelSlotPool *)(p))->acquire((u16 *)(HOST_AT(e, 0x48, modelSlot[0], 0)));
    void *y = HOST_AT(e, 0x4c, pooledModel[0], 0);
    if (((PooledModel *)(y))->loadFromSlot((ModelSlot *)(x), sFishStaticMdlPaths[id - 0x38])) {
        ((Model *)(HOST_AT(e, 0x98, model[0], 0)))->setResource((NNSG3dResMdl *)(((PooledModel *)(y))->getModel()), NULL);
        e->entryState = 3;
        updateTransform(e);
        r = TRUE;
    }
    return r;
}

BOOL FishDisplay::loadShadowModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->fishId;
    void *x = ((ModelSlotPool *)(p))->acquire((u16 *)(HOST_AT(e, 0x48, modelSlot[0], 0)));
    void *y = HOST_AT(e, 0x4c, pooledModel[0], 0);
    if (((PooledModel *)(y))->loadFromSlot((ModelSlot *)(x), sFishShadowMdlPath)) {
        u8 *m = HOST_AT(e, 0x98, model[0], 0);
        ((Model *)(m))->setResource((NNSG3dResMdl *)(((PooledModel *)(y))->getModel()), NULL);
        void *t = _ZN9ModelSlot7getHeapEv(x);
        void *u = func_021065f8(func_021065dc(File_LoadAlloc(sFishShadowAnmPath, t, 4, NULL)), 0);
        if (((AnimModel *)(m))->allocAnmObj(t)) {
            ((BlendAnimModel *)(m))->initAnim(u, 0, 0x1000, 1, 0);
            ((AnimModel *)(m))->attachAnim();
            e->entryState = 3;
            updateTransform(e);
            if (id == 0x3b) {
                NNS_G3dMdlSetMdlAlpha(((PooledModel *)(y))->getModel(), r, e->alpha);
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
            ((AnimModel *)(HOST_AT(e, 0x98, model[0], 0)))->drawAnimated(&v);
        }
    }
    return TRUE;
}

BOOL FishDisplay::onDelete() {
    for (s32 i = 0; i < sFishDisplayEntryCount; i++) {
        releaseEntry(i);
    }
    ((ModelSlotPool *)(modelPool))->destroy();
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
        if (((AnimFrameCtrl *)(HOST_AT(e, 0x134, model[156], 0)))->hasPassedFrame(unused)) r = TRUE;
    }
    return r;
}

extern "C" u32 Fish_GetBaseSize(u32 x) {
    if (x >= 0x38) return 10;
    return gFishInfo[x].baseSize;
}

// ---------------------------------------------------------------- functions
extern "C" u32 Fish_GetSizeClass(u32 x) {
    if (x >= 0x3b) return 3;
    return gFishInfo[x].sizeClass;
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
extern Backup gBackup;
extern FishDisplay *gFishDisplay;

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


Backup gBackup;

FishDisplay *gFishDisplay;

// The per-fish constants (item/FishInfo.h; data_020ca314 on the DS, 6-byte records).
// sizeClass, rodClass, timingClass, baseSize
const FishInfo gFishInfo[FISH_INFO_COUNT] = {
    {0, 2, 1, 10}, {0, 3, 3, 15}, {1, 3, 4, 30}, {1, 3, 3, 35},
    {2, 2, 3, 50}, {3, 2, 3, 75}, {3, 2, 3, 75}, {0, 2, 3, 15},
    {0, 2, 3, 15}, {0, 2, 2, 4}, {0, 4, 4, 12}, {0, 4, 3, 12},
    {0, 2, 4, 15}, {0, 3, 3, 20}, {2, 2, 4, 60}, {7, 1, 1, 100},
    {3, 2, 1, 80}, {1, 4, 4, 25}, {1, 1, 1, 35}, {2, 2, 2, 50},
    {0, 3, 3, 15}, {1, 2, 1, 25}, {1, 1, 1, 35}, {2, 1, 1, 50},
    {3, 2, 2, 70}, {4, 0, 1, 150}, {4, 2, 1, 90}, {5, 2, 1, 160},
    {0, 2, 3, 4}, {0, 2, 2, 12}, {1, 4, 3, 30}, {3, 3, 2, 70},
    {4, 1, 0, 100}, {5, 3, 1, 190}, {5, 1, 1, 300}, {0, 0, 2, 3},
    {1, 2, 4, 25}, {0, 1, 1, 8}, {0, 2, 1, 15}, {1, 3, 3, 30},
    {1, 2, 2, 35}, {1, 3, 3, 40}, {2, 2, 0, 60}, {4, 3, 2, 100},
    {3, 2, 1, 90}, {2, 2, 2, 50}, {3, 1, 1, 80}, {1, 3, 2, 35},
    {2, 3, 2, 60}, {2, 3, 3, 60}, {5, 1, 0, 230}, {5, 1, 0, 220},
    {6, 0, 1, 300}, {6, 1, 1, 250}, {6, 1, 0, 540}, {4, 0, 0, 150},
    {1, 3, 3, 0}, {2, 2, 3, 0}, {3, 2, 3, 0},
};

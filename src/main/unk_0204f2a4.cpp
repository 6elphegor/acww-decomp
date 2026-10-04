#include "types.h"
#include "Unk_020d8c7c.h"
#include "save/Backup.h"
#include "gfx/Mtx43.h"
#include "sys/ProcProfile.h"

struct Unk_020db984_Vec3 {
    s32 x, y, z;
};

struct FishDisplayEntry {
    u8 pad_00[0x40];
    s32 fishId;
    s32 entryState;
    u8 pad_48[0x44];
    Unk_020db984_Vec3 pos;
    u8 pad_98[0xb8];
    Unk_020db984_Vec3 scale;
    s16 rotX, rotY, rotZ;
    u8 pad_162[2];
    u32 alpha;
    u8 animate;
    u8 playSound;
    u8 pad_16a[2];
};

struct Unk_0204fd24 {
    /* 0x000 */ u8 unk_00[0x40];
    /* 0x040 */ s32 fishId;
    /* 0x044 */ s32 entryState;
    /* 0x048 */ u8 modelSlot[4];
    /* 0x04c */ u8 pooledModel[0x40];
    /* 0x08c */ s32 pos;
    /* 0x090 */ s32 posY;
    /* 0x094 */ s32 posZ;
    /* 0x098 */ u8 model[0xb8];
    /* 0x150 */ s32 scale;
    /* 0x154 */ s32 scaleY;
    /* 0x158 */ s32 scaleZ;
    /* 0x15c */ u16 rotX;
    /* 0x15e */ u16 rotY;
    /* 0x160 */ u16 rotZ;
    /* 0x164 */ s32 alpha;
    /* 0x168 */ s32 unk_168;
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
void _ZN13ModelSlotPoolD1Ev(void *);
void _ZN13ModelSlotPool7destroyEv(void *);
void *__cxa_vec_cleanup(void *p, u32 n, u32 size, void *dtor);
s32 FishDisplay_FindFreeEntry(void);
u32 FishDisplay_GetRequestKind(u32 i);
s32 _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, s32);
void FishDisplayEntry_SetScale(FishDisplayEntry *, Unk_020db984_Vec3 *);
void _ZN9AnimModel12drawAnimatedEPv(void *, void *);
void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e);
extern s32 sFishDisplayEntryCount;
extern FishDisplay *gFishDisplay;
extern u8 data_020ca314[];
extern u8 gFieldSceneKind;
void *_ZN13ModelSlotPool7acquireEPt(void *, void *);
s32 _ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(void *, void *, const char *);
void *_ZN11PooledModel8getModelEv(void *);
void _ZN5Model11setResourceEP12NNSG3dResMdlj(void *, void *, s32);
void *_ZN9ModelSlot7getHeapEv(void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_021065dc(void);
s32 func_021065f8(s32, s32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, void *);
void _ZN14BlendAnimModel8initAnimEiiitt(void *, s32, s32, s32, s32, s32);
void _ZN9AnimModel10attachAnimEv(void *);
void NNS_G3dMdlSetMdlAlpha(void *, s32, u32);
s32 WorldCurve_ToCurved(void *, void *);
void Mtx43_SetTranslate(void *, s32, s32, s32);
void Mtx43_RotateX(void *, s32);
void Mtx43_RotateXYZ(void *, s32, s32, s32);
void Mtx43_RotateY(void *, s32);
void Mtx43_RotateZ(void *, s32);
s32 Str_SPrintf(char *, const char *, ...);
extern u8 data_021f47e0[];
void _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, const char *f);
void FishDisplayHeap_Create(void);
void FishDisplayHeap_Destroy(void);
void _ZN12SndSeEmitter8callStopEv(void *p);
void _ZN12SndSeEmitter8callInitEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *p);
void _ZN11PooledModel6unloadEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN13ModelSlotPool7releaseEPt(void *p, void *q);
void _ZN11PooledModel5resetEv(void *p);
void _ZN9AnimModelD1Ev(void *p);
void _ZN11PooledModelD1Ev(void *p);
void ModelSlotHandle_Destroy(void *p);
#define SndSeEmitter_dtor _ZN12SndSeEmitterD1Ev
void SndSeEmitter_dtor(void *p);
#define SndSeEmitter_ctor _ZN12SndSeEmitterC1Ev
void SndSeEmitter_ctor(void *p);
void ModelSlotHandle_Init(void *p);
void _ZN11PooledModelC1Ev(void *p);
void _ZN9AnimModelC1Ev(void *p);
void _ZN13ModelSlotPoolC1Ev(void *p);
void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void _ZN9AnimModel8stepAnimEv(void *);
void _ZN12SndSeEmitter18callUpdateRelativeEP16Unk_02003a6c_Vec(void *, void *);
void Snd_SeEmitterPlayOneShot(void *, u32, u32, u32);
s32 MI_CpuCopy8(void *src, void *dst, s32 n);
void NetBuf_UnpackPair20(void *buf, s32 *a, s32 *b);
}

extern "C" {
Unk_0204fd24 *FishDisplayEntry_Construct(Unk_0204fd24 *p);
Unk_0204fd24 *FishDisplayEntry_Destruct(Unk_0204fd24 *p);
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
        _ZN13ModelSlotPoolD1Ev(modelPool);
        __cxa_vec_cleanup(entries, 4, 0x16c, (void *)FishDisplayEntry_Destruct);
    }
    void releaseEntry(s32);
    BOOL beginLoad(s32);
    void updateTransform(FishDisplayEntry *);
    BOOL loadShadowModel(void *, FishDisplayEntry *);
    BOOL loadStaticModel(void *, FishDisplayEntry *);
    BOOL loadFishModel(void *, FishDisplayEntry *);

    FishDisplayEntry entries[4];
    u8 modelPool[0x18];
};

extern "C" {
Unk_0204fd24 *FishDisplayEntry_Construct(Unk_0204fd24 *p);
Unk_0204fd24 *FishDisplayEntry_Destruct(Unk_0204fd24 *p);
FishDisplay *FishDisplay_Create(void);
}

// Declarations for data defined further down (definition order sets the data layout)
extern char *sFishShadowMdlPath;
extern void *sFishShadowAnmPath;
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

inline FishDisplay::FishDisplay() {
    __cxa_vec_ctor(entries, 4, 0x16c, (void *)FishDisplayEntry_Construct, (void *)FishDisplayEntry_Destruct);
    _ZN13ModelSlotPoolC1Ev(modelPool);
}

extern const u8 sFishBaseSizes[];

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

extern "C" Unk_0204fd24 *FishDisplayEntry_Construct(Unk_0204fd24 *e) {
    SndSeEmitter_ctor(e);
    ModelSlotHandle_Init(e->modelSlot);
    _ZN11PooledModelC1Ev(e->pooledModel);
    _ZN9AnimModelC1Ev(e->model);
    e->fishId = -1;
    e->entryState = 0;
    _ZN11PooledModel5resetEv(e->pooledModel);
    e->pos = 0x1000;
    e->posY = 0x1000;
    e->posZ = 0x1000;
    e->scale = 0x1000;
    e->scaleY = 0x1000;
    e->scaleZ = 0x1000;
    e->rotX = 0;
    e->rotY = 0;
    e->rotZ = 0;
    e->alpha = 0x1f;
    return e;
}

extern "C" Unk_0204fd24 *FishDisplayEntry_Destruct(Unk_0204fd24 *e) {
    _ZN9AnimModelD1Ev(e->model);
    _ZN11PooledModelD1Ev(e->pooledModel);
    ModelSlotHandle_Destroy(e->modelSlot);
    SndSeEmitter_dtor(e);
    return e;
}

extern "C" s32 FishDisplay_FindFreeEntry(void) {
    s32 i = 0;
    s32 r = -1;
    if (gFishDisplay != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)gFishDisplay->entries;
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
        Unk_0204fd24 *e = (Unk_0204fd24 *)&gFishDisplay->entries[idx];
        e->entryState = 2;
        _ZN13ModelSlotPool7acquireEPt(modelPool, e->modelSlot);
        _ZN11PooledModel5resetEv(e->pooledModel);
        _ZN12SndSeEmitter8callInitEv(e);
        r = TRUE;
    }
    return r;
}

void FishDisplay::releaseEntry(s32 idx) {
    if (idx >= 0 && idx < sFishDisplayEntryCount && gFishDisplay != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)&gFishDisplay->entries[idx];
        if (e->entryState != 0 && e->entryState != 1) {
            _ZN12SndSeEmitter8callStopEv(e);
        }
        e->fishId = -1;
        e->entryState = 0;
        _ZN9AnimModel15detachJointAnimEv(e->model);
        _ZN11PooledModel6unloadEv(e->pooledModel);
        _ZN11CachedModel7releaseEv(e->model);
        _ZN13ModelSlotPool7releaseEPt(modelPool, e->modelSlot);
    }
}

BOOL FishDisplay::onCreate() {
    if ((s32)param == 0) {
        sFishDisplayEntryCount = 4;
    } else if ((s32)param == 1) {
        sFishDisplayEntryCount = 1;
    }
    _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE(modelPool, sFishDisplayEntryCount, 0x800, 0x80, 0x134c, (void *)FishDisplayHeap_Create, (void *)FishDisplayHeap_Destroy, "fish_disp");
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
                _ZN9AnimModel8stepAnimEv((u8 *)e + 0x98);
                NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv((u8 *)e + 0x4c), v0, *(u32 *)((u8 *)e + 0x164));
            } else if (e->fishId == 0x38 || e->fishId == 0x39 || e->fishId == 0x3a) {
            } else {
                _ZN9AnimModel8stepAnimEv((u8 *)e + 0x98);
                if (e->playSound != 0) {
                    Unk_020db984_Vec3 *p = &e->pos;
                    Unk_020db984_Vec3 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    _ZN12SndSeEmitter18callUpdateRelativeEP16Unk_02003a6c_Vec(e, &t);
                    if (_ZN13AnimFrameCtrl14hasPassedFrameEi((u8 *)e + 0x134, 1)) {
                        Snd_SeEmitterPlayOneShot(e, 0x84d, 0x7f, v4);
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
    u8 *m = (u8 *)e + 0x98;
    s32 id = e->fishId;
    Unk_020db984_Vec3 v;
    Unk_020db984_Vec3 o;
    s32 ang;
    Unk_020db984_Vec3 *pv = &e->pos;
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
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *t;
    void *y = (u8 *)e + 0x4c;
    s32 q = id / 16;
    if (id < 10) {
        Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbmd", q, id);
    } else {
        Str_SPrintf(buf, "/fish/0%d/fish%d.nsbmd", q, id);
    }
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, buf)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN5Model11setResourceEP12NNSG3dResMdlj(m, _ZN11PooledModel8getModelEv(y), 0);
        t = _ZN9ModelSlot7getHeapEv(x);
        if (id < 10) {
            Str_SPrintf(buf, "/fish/0%d/fish0%d.nsbca", q, id);
        } else {
            Str_SPrintf(buf, "/fish/0%d/fish%d.nsbca", q, id);
        }
        File_LoadAlloc(buf, t, 4, 0);
        s32 u = func_021065f8(func_021065dc(), 0);
        s32 flag = 0x1000;
        if (e->animate == 0) flag = 0;
        if (_ZN9AnimModel11allocAnmObjEPv(m, t)) {
            _ZN14BlendAnimModel8initAnimEiiitt(m, u, 0, flag, 1, 0);
            _ZN9AnimModel10attachAnimEv(m);
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
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, sFishStaticMdlPaths[id - 0x38])) {
        _ZN5Model11setResourceEP12NNSG3dResMdlj((u8 *)e + 0x98, _ZN11PooledModel8getModelEv(y), r);
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
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, sFishShadowMdlPath)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN5Model11setResourceEP12NNSG3dResMdlj(m, _ZN11PooledModel8getModelEv(y), r);
        void *t = _ZN9ModelSlot7getHeapEv(x);
        File_LoadAlloc(sFishShadowAnmPath, t, 4, r);
        s32 u = func_021065f8(func_021065dc(), r);
        if (_ZN9AnimModel11allocAnmObjEPv(m, t)) {
            _ZN14BlendAnimModel8initAnimEiiitt(m, u, r, 0x1000, 1, r);
            _ZN9AnimModel10attachAnimEv(m);
            e->entryState = 3;
            updateTransform(e);
            if (id == 0x3b) {
                NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv(y), r, e->alpha);
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
            Unk_020db984_Vec3 v;
            v.x = e->scale.x;
            v.y = e->scale.y;
            v.z = e->scale.z;
            _ZN9AnimModel12drawAnimatedEPv((u8 *)e + 0x98, &v);
        }
    }
    return TRUE;
}

BOOL FishDisplay::onDelete() {
    for (s32 i = 0; i < sFishDisplayEntryCount; i++) {
        releaseEntry(i);
    }
    _ZN13ModelSlotPool7destroyEv(modelPool);
    gFishDisplay = NULL;
    return TRUE;
}

extern "C" void FishDisplayEntry_SetScale(FishDisplayEntry *e, Unk_020db984_Vec3 *v) {
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

extern "C" BOOL FishDisplay_SetEntry(s32 idx, s32 id, Unk_020db984_Vec3 *pos, Unk_020db984_Vec3 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10) {
    BOOL r = FALSE;
    FishDisplay *g = gFishDisplay;
    if (g != NULL && idx >= 0 && idx < sFishDisplayEntryCount && id >= 0 && id < 0x3c) {
        FishDisplayEntry *e = &g->entries[idx];
        e->fishId = id;
        Unk_020db984_Vec3 *d = &e->pos;
        d->x = pos->x; d->y = pos->y; d->z = pos->z;
        Unk_020db984_Vec3 t;
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
        if (_ZN13AnimFrameCtrl14hasPassedFrameEi((u8 *)e + 0x134, unused)) r = TRUE;
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

char *sFishShadowMdlPath = sFishShadowMdlFile;

void *sFishShadowAnmPath = sFishShadowAnmFile;

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

FishDisplay *gFishDisplay;

Backup gBackup;

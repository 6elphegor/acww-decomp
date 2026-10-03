#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_020db984_Vec3 {
    s32 x, y, z;
};

struct FishDisplayEntry {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x44];
    Unk_020db984_Vec3 unk_8c;
    u8 pad_98[0xb8];
    Unk_020db984_Vec3 unk_150;
    s16 unk_15c, unk_15e, unk_160;
    u8 pad_162[2];
    u32 unk_164;
    u8 unk_168;
    u8 unk_169;
    u8 pad_16a[2];
};

struct Unk_0204fd24 {
    /* 0x000 */ u8 unk_00[0x40];
    /* 0x040 */ s32 unk_40;
    /* 0x044 */ s32 unk_44;
    /* 0x048 */ u8 unk_48[4];
    /* 0x04c */ u8 unk_4c[0x40];
    /* 0x08c */ s32 unk_8c;
    /* 0x090 */ s32 unk_90;
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u8 unk_98[0xb8];
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ u16 unk_160;
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s32 unk_168;
};

struct Backup {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    Backup() {
        unk_00 = 0;
        unk_04 = -3;
    }
};

struct Unk_020db94c_Ent {
    u8 unk_00;
    u8 unk_01;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_020db8b8_Rec {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
};

struct Unk_0204f98c_Mtx {
    s32 v[12];
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
void _ZN5Model11setResourceEP16Unk_020553f8_Resj(void *, void *, s32);
void *_ZN9ModelSlot7getHeapEv(void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_021065dc(void);
s32 func_021065f8(s32, s32);
s32 _ZN9AnimModel11allocAnmObjEPv(void *, void *);
void _ZN14BlendAnimModel8initAnimEiiitt(void *, s32, s32, s32, s32, s32);
void _ZN9AnimModel10attachAnimEv(void *);
void NNS_G3dMdlSetMdlAlpha(void *, s32, u32);
s32 WorldCurve_ToCurved(void *, void *);
void func_020e8388(void *, s32, s32, s32);
void func_020e8434(void *, s32);
void func_020e8464(void *, s32, s32, s32);
void func_020e8404(void *, s32);
void func_020e83d4(void *, s32);
s32 func_020639e8(char *, const char *, ...);
extern u8 data_021f47e0[];
void _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, const char *f);
void FishDisplayHeap_Create(void);
void FishDisplayHeap_Destroy(void);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
void _ZN9AnimModel15detachJointAnimEv(void *p);
void _ZN11PooledModel6unloadEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
void _ZN13ModelSlotPool7releaseEPt(void *p, void *q);
void _ZN11PooledModel5resetEv(void *p);
void _ZN9AnimModelD1Ev(void *p);
void _ZN11PooledModelD1Ev(void *p);
void ModelSlotHandle_Destroy(void *p);
void func_020f43fc(void *p);
void func_020f440c(void *p);
void ModelSlotHandle_Init(void *p);
void _ZN11PooledModelC1Ev(void *p);
void _ZN9AnimModelC1Ev(void *p);
void _ZN13ModelSlotPoolC1Ev(void *p);
void *__cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void _ZN9AnimModel8stepAnimEv(void *);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *, void *);
void func_02003e70(void *, u32, u32, u32);
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
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    ~FishDisplay() {
        _ZN13ModelSlotPoolD1Ev(unk_600);
        __cxa_vec_cleanup(unk_50, 4, 0x16c, (void *)FishDisplayEntry_Destruct);
    }
    void releaseEntry(s32);
    BOOL beginLoad(s32);
    void updateTransform(FishDisplayEntry *);
    BOOL loadShadowModel(void *, FishDisplayEntry *);
    BOOL loadStaticModel(void *, FishDisplayEntry *);
    BOOL loadFishModel(void *, FishDisplayEntry *);

    FishDisplayEntry unk_50[4];
    u8 unk_600[0x18];
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
extern Unk_020db8b8_Rec sFishDisplayProfile;
extern char *sFishStaticMdlPaths[3];
extern Unk_020db94c_Ent sFishDisplayRequests[4];
extern const u8 sFishBaseSizes[0x160];
extern Backup gBackup;

inline FishDisplay::FishDisplay() {
    __cxa_vec_ctor(unk_50, 4, 0x16c, (void *)FishDisplayEntry_Construct, (void *)FishDisplayEntry_Destruct);
    _ZN13ModelSlotPoolC1Ev(unk_600);
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
    func_020f440c(e);
    ModelSlotHandle_Init(e->unk_48);
    _ZN11PooledModelC1Ev(e->unk_4c);
    _ZN9AnimModelC1Ev(e->unk_98);
    e->unk_40 = -1;
    e->unk_44 = 0;
    _ZN11PooledModel5resetEv(e->unk_4c);
    e->unk_8c = 0x1000;
    e->unk_90 = 0x1000;
    e->unk_94 = 0x1000;
    e->unk_150 = 0x1000;
    e->unk_154 = 0x1000;
    e->unk_158 = 0x1000;
    e->unk_15c = 0;
    e->unk_15e = 0;
    e->unk_160 = 0;
    e->unk_164 = 0x1f;
    return e;
}

extern "C" Unk_0204fd24 *FishDisplayEntry_Destruct(Unk_0204fd24 *e) {
    _ZN9AnimModelD1Ev(e->unk_98);
    _ZN11PooledModelD1Ev(e->unk_4c);
    ModelSlotHandle_Destroy(e->unk_48);
    func_020f43fc(e);
    return e;
}

extern "C" s32 FishDisplay_FindFreeEntry(void) {
    s32 i = 0;
    s32 r = -1;
    if (gFishDisplay != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)gFishDisplay->unk_50;
        for (; i < sFishDisplayEntryCount; e++, i++) {
            if (e->unk_44 == 0) {
                r = i;
                e->unk_44 = 1;
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
        Unk_0204fd24 *e = (Unk_0204fd24 *)&gFishDisplay->unk_50[idx];
        e->unk_44 = 2;
        _ZN13ModelSlotPool7acquireEPt(unk_600, e->unk_48);
        _ZN11PooledModel5resetEv(e->unk_4c);
        _ZN12Unk_02003c3013func_02003eccEv(e);
        r = TRUE;
    }
    return r;
}

void FishDisplay::releaseEntry(s32 idx) {
    if (idx >= 0 && idx < sFishDisplayEntryCount && gFishDisplay != NULL) {
        Unk_0204fd24 *e = (Unk_0204fd24 *)&gFishDisplay->unk_50[idx];
        if (e->unk_44 != 0 && e->unk_44 != 1) {
            _ZN12Unk_02003c3013func_02003e50Ev(e);
        }
        e->unk_40 = -1;
        e->unk_44 = 0;
        _ZN9AnimModel15detachJointAnimEv(e->unk_98);
        _ZN11PooledModel6unloadEv(e->unk_4c);
        _ZN11CachedModel7releaseEv(e->unk_98);
        _ZN13ModelSlotPool7releaseEPt(unk_600, e->unk_48);
    }
}

BOOL FishDisplay::vfunc_00() {
    if (*(s32 *)&unk_04[4] == 0) {
        sFishDisplayEntryCount = 4;
    } else if (*(s32 *)&unk_04[4] == 1) {
        sFishDisplayEntryCount = 1;
    }
    _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE(unk_600, sFishDisplayEntryCount, 0x800, 0x80, 0x134c, (void *)FishDisplayHeap_Create, (void *)FishDisplayHeap_Destroy, "fish_disp");
    gFishDisplay = this;
    return TRUE;
}

BOOL FishDisplay::onExecute() {
    volatile s32 v0, v4;
    FishDisplay *g = gFishDisplay;
    if (g == NULL) return FALSE;
    FishDisplayEntry *e = g->unk_50;
    s32 i = 0;
    v4 = 0;
    v0 = 0;
    for (; i < sFishDisplayEntryCount; e++, i++) {
        switch (e->unk_44) {
        case 1:
            if (e->unk_40 != -1) {
                beginLoad(i);
            }
            break;
        case 2: {
            s32 t = e->unk_40;
            if ((u32)(t - 0x38) <= 2) {
                loadStaticModel(unk_600, e);
            } else if (t == 0x3b) {
                loadShadowModel(unk_600, e);
            } else {
                loadFishModel(unk_600, e);
            }
            break;
        }
        case 3:
            if (e->unk_40 == 0x3b) {
                _ZN9AnimModel8stepAnimEv((u8 *)e + 0x98);
                NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv((u8 *)e + 0x4c), v0, *(u32 *)((u8 *)e + 0x164));
            } else if (e->unk_40 == 0x38 || e->unk_40 == 0x39 || e->unk_40 == 0x3a) {
            } else {
                _ZN9AnimModel8stepAnimEv((u8 *)e + 0x98);
                if (e->unk_169 != 0) {
                    Unk_020db984_Vec3 *p = &e->unk_8c;
                    Unk_020db984_Vec3 t;
                    t.x = p->x;
                    t.y = p->y;
                    t.z = p->z;
                    _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(e, &t);
                    if (_ZN13AnimFrameCtrl14hasPassedFrameEi((u8 *)e + 0x134, 1)) {
                        func_02003e70(e, 0x84d, 0x7f, v4);
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
    s32 id = e->unk_40;
    Unk_020db984_Vec3 v;
    Unk_020db984_Vec3 o;
    s32 ang;
    Unk_020db984_Vec3 *pv = &e->unk_8c;
    v.x = pv->x; v.y = pv->y; v.z = pv->z;
    s32 mode = *(s32 *)((u8 *)this + 8);
    if (mode == 0) {
        ang = WorldCurve_ToCurved(&o, &v);
    } else if (mode == 1) {
        ang = 0;
        o = v;
    }
    func_020e8388(data_021f47e0, o.x, o.y, o.z);
    func_020e8434(data_021f47e0, ang);
    if (id != 0xf) {
        func_020e8464(data_021f47e0, e->unk_15c, e->unk_15e, e->unk_160);
    } else {
        func_020e8404(data_021f47e0, e->unk_15e);
        func_020e83d4(data_021f47e0, e->unk_160);
        func_020e8434(data_021f47e0, e->unk_15c);
    }
    *(Unk_0204f98c_Mtx *)(m + 0x64) = *(Unk_0204f98c_Mtx *)data_021f47e0;
}

BOOL FishDisplay::loadFishModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    char buf[0x18];
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *t;
    void *y = (u8 *)e + 0x4c;
    s32 q = id / 16;
    if (id < 10) {
        func_020639e8(buf, "/fish/0%d/fish0%d.nsbmd", q, id);
    } else {
        func_020639e8(buf, "/fish/0%d/fish%d.nsbmd", q, id);
    }
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, buf)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN5Model11setResourceEP16Unk_020553f8_Resj(m, _ZN11PooledModel8getModelEv(y), 0);
        t = _ZN9ModelSlot7getHeapEv(x);
        if (id < 10) {
            func_020639e8(buf, "/fish/0%d/fish0%d.nsbca", q, id);
        } else {
            func_020639e8(buf, "/fish/0%d/fish%d.nsbca", q, id);
        }
        File_LoadAlloc(buf, t, 4, 0);
        s32 u = func_021065f8(func_021065dc(), 0);
        s32 flag = 0x1000;
        if (e->unk_168 == 0) flag = 0;
        if (_ZN9AnimModel11allocAnmObjEPv(m, t)) {
            _ZN14BlendAnimModel8initAnimEiiitt(m, u, 0, flag, 1, 0);
            _ZN9AnimModel10attachAnimEv(m);
            e->unk_44 = 3;
            updateTransform(e);
            r = TRUE;
        }
    }
    return r;
}

BOOL FishDisplay::loadStaticModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, sFishStaticMdlPaths[id - 0x38])) {
        _ZN5Model11setResourceEP16Unk_020553f8_Resj((u8 *)e + 0x98, _ZN11PooledModel8getModelEv(y), r);
        e->unk_44 = 3;
        updateTransform(e);
        r = TRUE;
    }
    return r;
}

BOOL FishDisplay::loadShadowModel(void *p, FishDisplayEntry *e) {
    BOOL r = FALSE;
    if (p == NULL || e == NULL) return FALSE;
    s32 id = e->unk_40;
    void *x = _ZN13ModelSlotPool7acquireEPt(p, (u8 *)e + 0x48);
    void *y = (u8 *)e + 0x4c;
    if (_ZN11PooledModel12loadFromSlotEP9ModelSlotPKc(y, x, sFishShadowMdlPath)) {
        u8 *m = (u8 *)e + 0x98;
        _ZN5Model11setResourceEP16Unk_020553f8_Resj(m, _ZN11PooledModel8getModelEv(y), r);
        void *t = _ZN9ModelSlot7getHeapEv(x);
        File_LoadAlloc(sFishShadowAnmPath, t, 4, r);
        s32 u = func_021065f8(func_021065dc(), r);
        if (_ZN9AnimModel11allocAnmObjEPv(m, t)) {
            _ZN14BlendAnimModel8initAnimEiiitt(m, u, r, 0x1000, 1, r);
            _ZN9AnimModel10attachAnimEv(m);
            e->unk_44 = 3;
            updateTransform(e);
            if (id == 0x3b) {
                NNS_G3dMdlSetMdlAlpha(_ZN11PooledModel8getModelEv(y), r, e->unk_164);
            }
            r = TRUE;
        }
    }
    return r;
}

BOOL FishDisplay::onDraw() {
    FishDisplay *g = gFishDisplay;
    if (g == NULL) return FALSE;
    FishDisplayEntry *e = g->unk_50;
    for (s32 i = 0; i < sFishDisplayEntryCount; e++, i++) {
        if (e->unk_44 == 3) {
            Unk_020db984_Vec3 v;
            v.x = e->unk_150.x;
            v.y = e->unk_150.y;
            v.z = e->unk_150.z;
            _ZN9AnimModel12drawAnimatedEPv((u8 *)e + 0x98, &v);
        }
    }
    return TRUE;
}

BOOL FishDisplay::vfunc_0c() {
    for (s32 i = 0; i < sFishDisplayEntryCount; i++) {
        releaseEntry(i);
    }
    _ZN13ModelSlotPool7destroyEv(unk_600);
    gFishDisplay = NULL;
    return TRUE;
}

extern "C" void FishDisplayEntry_SetScale(FishDisplayEntry *e, Unk_020db984_Vec3 *v) {
    e->unk_150.x = v->x;
    e->unk_150.y = v->y;
    e->unk_150.z = v->z;
}

extern "C" void FishDisplay_PostRequest(u32 a, u32 b, s32 c, u32 d, u32 e) {
    if (a < 4 && c < 0x38) {
        switch (b) {
        case 0:
            sFishDisplayRequests[a].unk_00 = b;
            sFishDisplayRequests[a].unk_01 = c;
            sFishDisplayRequests[a].unk_04 = d;
            sFishDisplayRequests[a].unk_08 = e;
            break;
        case 3:
            sFishDisplayRequests[a].unk_00 = b;
            break;
        case 1:
            if (Unk_0204f4f8_IsZero(gFieldSceneKind)) {
                if (FishDisplay_GetRequestKind(a) == 3) {
                    sFishDisplayRequests[a].unk_00 = b;
                } else {
                    sFishDisplayRequests[a].unk_00 = 8;
                }
                sFishDisplayRequests[a].unk_01 = c;
                sFishDisplayRequests[a].unk_04 = d;
                sFishDisplayRequests[a].unk_08 = e;
            } else {
                sFishDisplayRequests[a].unk_00 = 8;
                sFishDisplayRequests[a].unk_01 = c;
                sFishDisplayRequests[a].unk_04 = d;
                sFishDisplayRequests[a].unk_08 = e;
            }
            break;
        case 2:
            if (Unk_0204f4f8_IsZero(gFieldSceneKind)) {
                if (FishDisplay_GetRequestKind(a) == 3 || FishDisplay_GetRequestKind(a) == 8 || FishDisplay_GetRequestKind(a) == 1) {
                    sFishDisplayRequests[a].unk_00 = b;
                } else {
                    sFishDisplayRequests[a].unk_00 = 8;
                }
                sFishDisplayRequests[a].unk_01 = c;
                sFishDisplayRequests[a].unk_04 = d;
                sFishDisplayRequests[a].unk_08 = e;
            } else {
                sFishDisplayRequests[a].unk_00 = 8;
                sFishDisplayRequests[a].unk_01 = c;
                sFishDisplayRequests[a].unk_04 = d;
                sFishDisplayRequests[a].unk_08 = e;
            }
            break;
        case 4:
            sFishDisplayRequests[a].unk_00 = b;
            break;
        case 5:
            sFishDisplayRequests[a].unk_00 = b;
            break;
        case 8:
            sFishDisplayRequests[a].unk_00 = 8;
            sFishDisplayRequests[a].unk_01 = c;
            sFishDisplayRequests[a].unk_04 = d;
            sFishDisplayRequests[a].unk_08 = e;
            break;
        case 6:
        case 7:
        default:
            sFishDisplayRequests[a].unk_00 = b;
            break;
        }
    }
}

extern "C" u32 FishDisplay_GetRequestKind(u32 i) {
    if (i >= 4) return 9;
    return sFishDisplayRequests[i].unk_00;
}

extern "C" u32 FishDisplay_GetRequestFish(u32 i) {
    if (i >= 4) return 0xff;
    return sFishDisplayRequests[i].unk_01;
}

extern "C" BOOL FishDisplay_GetRequestPos(u32 *a, u32 *b, u32 i) {
    if (i >= 4) return FALSE;
    *a = sFishDisplayRequests[i].unk_04;
    *b = sFishDisplayRequests[i].unk_08;
    return TRUE;
}

extern "C" s32 FishDisplay_Acquire(void) {
    return FishDisplay_FindFreeEntry();
}

extern "C" BOOL FishDisplay_SetEntry(s32 idx, s32 id, Unk_020db984_Vec3 *pos, Unk_020db984_Vec3 *vec, s16 a5, s16 a6, s16 a7, u8 a8, u8 a9, u32 a10) {
    BOOL r = FALSE;
    FishDisplay *g = gFishDisplay;
    if (g != NULL && idx >= 0 && idx < sFishDisplayEntryCount && id >= 0 && id < 0x3c) {
        FishDisplayEntry *e = &g->unk_50[idx];
        e->unk_40 = id;
        Unk_020db984_Vec3 *d = &e->unk_8c;
        d->x = pos->x; d->y = pos->y; d->z = pos->z;
        Unk_020db984_Vec3 t;
        t.x = vec->x; t.y = vec->y; t.z = vec->z;
        FishDisplayEntry_SetScale(e, &t);
        e->unk_15c = a5;
        e->unk_15e = a6;
        e->unk_160 = a7;
        e->unk_168 = a8;
        e->unk_169 = a9;
        e->unk_164 = a10;
        r = TRUE;
    }
    return r;
}

extern "C" void FishDisplay_Release(s32 idx) {
    if (gFishDisplay != NULL && idx >= 0 && idx < sFishDisplayEntryCount) {
        gFishDisplay->unk_50[idx].unk_44 = 4;
    }
}

extern "C" BOOL FishDisplay_HasPassedFrame(s32 idx, s32 unused) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < sFishDisplayEntryCount) {
        FishDisplayEntry *e = &gFishDisplay->unk_50[idx];
        s32 t = e->unk_40;
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

Unk_020db8b8_Rec sFishDisplayProfile = {(void *)FishDisplay_Create, 0xc2, 8};

char *sFishStaticMdlPaths[3] = {sFishMdl56File, sFishMdl57File, sFishMdl58File};

Unk_020db94c_Ent sFishDisplayRequests[4] = {
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

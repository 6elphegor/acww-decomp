// mwcc-version: 1.2/sp2
#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

struct Unk_02053a54_Obj {
    u32 unk_00;
    u8 pad_04[0x48];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

struct Unk_02053a54_Hdr {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_02053a54_Msg {
    Unk_02053a54_Hdr *unk_00;
    u8 pad_04[0xb0];
    Unk_02053a54_Obj *unk_b4;
};

struct Unk_02054584_Data {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 pad_0c[0x1c];
    u8 unk_28[0x24];
    s32 unk_4c;
    s32 unk_50;
    s32 unk_54;
};

struct Unk_02054628_Obj {
    u8 *unk_00;
    u8 pad_04[0xb0];
    Unk_02054584_Data *unk_b4;
    u8 pad_b8[0x1c];
    u8 *unk_d4;
};

struct Unk_02054778_Info {
    u32 unk_00;
    u16 unk_04;
    u16 pad_06;
    u32 unk_08;
};

struct Unk_0205415c_Item {
    u8 pad_00[0x10];
    u32 unk_10;
};
struct Unk_0205415c_Obj {
    u8 pad_00[8];
    u8 unk_08[0x10];
    Unk_0205415c_Item *unk_18;
};

class Model {
public:
    Model();
    virtual ~Model();
    u16 modelFlags;
    u8 pad_06[2];
    u32 renderObj;
    u8 *renderResMdl;
    u8 pad_10[8];
    Unk_02054584_Data *renderAnmJnt;
    s32 unk_1c;
    Unk_02054584_Data *renderAnmVis;
    u8 pad_24[0x18];
    void *renderJntRecord;
    u8 pad_40[0x1c];
    void *unk_5c;
    u8 pad_60[0x34];
    void *texVramSlot;

    BOOL clearResource(void);
    void initRenderObj(void);
};

class CachedModel : public Model {
public:
    CachedModel();
    virtual ~CachedModel();
    u32 unk_98;
    BOOL release(void);
    BOOL allocJointRecord(void *heap);
    void setFromFile(void *a);
    BOOL loadWithSharedTex(void *a, void *b, void *c);
    BOOL loadCached(void *a, void *b);
    BOOL loadWithTex(void *res, void *name, void *tex, void *d, u32 *e, s32 f);
    BOOL load(void *res, void *name);
    BOOL loadWithTexKeyed(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag);
    BOOL loadKeyed(void *res, void *name, u32 tag);
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};


class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    u32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u8 unk_b0;
    u8 pad_b1[3];
};

class JointBlend {
public:
    JointBlend();
    virtual ~JointBlend();
    u8 unk_bc[0x18];
    u8 *unk_d4;
    u8 unk_d8[0x14];
    u32 unk_ec;
    s32 unk_f0;
};

class AnimModel : public CachedModel, public AnimFrameCtrl {
public:
    AnimModel();
    virtual ~AnimModel();
    Unk_02054584_Data *unk_b4;

    void detachAnim();
    void detachVisAnim();
    void detachJointAnim();
    s32 attachAnim();
    void setFrame(s32 v);
    s32 drawAnimated(void *q);
    void stepAnim();
    BOOL allocAnmObj(void *x);
};

class BlendAnimModel : public AnimModel, public JointBlend {
public:
    BlendAnimModel();
    virtual ~BlendAnimModel();

    void playBlend(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void stepBlend();
    void onJointCalcPost(BlendAnimModel *x);
    void applyJointBlend(BlendAnimModel *x);
    void onJointCalcPre(BlendAnimModel *x);
    void captureJointPose(BlendAnimModel *x);
    Unk_02054584_Data *getAnmObj();
    u32 getAnmRes();
    void initAnim(s32 a, s32 b, s32 c, u16 d, u16 e);
};

class TwoLayerAnimModel : public BlendAnimModel {
public:
    TwoLayerAnimModel();
    virtual ~TwoLayerAnimModel();
    void clearLayer2Mask();
    void releaseJointsFromLayer2(u32 a, u32 b);
    void assignJointsToLayer2(u32 a, u32 b);
    void playLayer2FromBase(u32 a, u32 b);
    void playLayer2(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void drawLayered(u32 a);
    void updateLayers();
    BOOL allocLayerAnims(u32 a);
    void onJointCalcPostLayer2(Unk_02053a54_Msg *m);
    void applyLayer2Blend(Unk_02053a54_Msg *m);
    void onJointCalcPreLayer2(Unk_02053a54_Msg *m);
    void captureLayer2Pose(Unk_02053a54_Msg *m);
    BOOL isLayer2Joint(u32 i);
    void clearLayer2Joint(u32 i);
    void setLayer2Joint(u32 i);
    void onJointLayerAssign(u32 i);
    void onJointLayerRelease(u32 i);

    void *unk_f4;
    AnimFrameCtrl unk_f8;
    JointBlend unk_110;
    u32 unk_14c;
    u32 unk_150;
};

class ThreeLayerAnimModel : public TwoLayerAnimModel {
public:
    ThreeLayerAnimModel();
    virtual ~ThreeLayerAnimModel();
    void assignJointsToLayer3(u32 a, u32 b);
    void playLayer3FromBase(u32 a, u32 b);
    void checkLayer3Finished();
    void playLayer3(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void updateLayers3();
    BOOL allocLayer3Anims(u32 a);
    void onJointCalcPostLayer3(Unk_02053a54_Msg *m);
    void applyLayer3Blend(Unk_02053a54_Msg *m);
    void onJointCalcPreLayer3(Unk_02053a54_Msg *m);
    void captureLayer3Pose(Unk_02053a54_Msg *m);
    BOOL isLayer3Joint(u32 i);
    void clearLayer3Joint(u32 i);
    void setLayer3Joint(u32 i);

    void *unk_154;
    AnimFrameCtrl unk_158;
    JointBlend unk_170;
    u32 unk_1ac;
    u32 unk_1b0;
};

struct ModelSet {
    u32 unk_00;
    u32 unk_04;
    CachedModel *unk_08;
    u8 *unk_0c;
};

extern "C" {
void MTX_Identity33_(void *p);
s32 func_01ffcc10(void);
void _ZN10JointBlend5startEi(void *p, s32 v);
s32 _ZN10JointBlend7advanceEv(void *p);
void _ZN10JointBlend11capturePoseEP16Unk_02056160_Arg(void *p, void *q);
void _ZN10JointBlend9blendPoseEP16Unk_02056160_Arg(void *p, void *q);
void _ZN13AnimFrameCtrl5setupEihit(void *p, u32 a, s32 b, s32 c, u32 d);
s32 _ZN13AnimFrameCtrl4stepEv(void *p);
void _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void NNS_G3dAnmObjInit(void *a, s32 b, void *c, s32 d);
void NNS_G3dRenderObjRemoveAnmObj(void *a, void *b);
void NNS_G3dRenderObjAddAnmObj(void *a, void *b);
void _ZN5Model10drawScaledEPi(void *p, void *q);
void *Gfx3d_AllocAnmObj(void *a, void *b, void *c);
extern u8 sJointAnmHeader2[];
s32 _ZN9AnimModel12drawAnimatedEPv(void *p);
void CpuMtx_RestoreFromStack(u32 v);
void CpuMtx_StoreToStack(u32 v);
void CpuMtx_MultRotScaledTrans(void *a, void *b, void *c);
void CpuMtx_MultTrans(void *a);
void CpuMtx_MultRot(void *a);
void CpuMtx_MultRotTrans(void *a, void *b);
s32 strcmp(void *a, void *b);
void *File_LoadAlloc(void *a, void *b, s32 c, s32 d);
extern void *gCurrentHeap;
extern void *gModelCacheHeap;
void *NNS_G3dGetMdlSet(void *p);
void *NNS_G3dGetTex(void *p);
void *Heap_Alloc(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void MI_CpuCopy8(void *src, void *dst, u32 size);
void Gfx3d_LoadTexAndPltt(void *a, void *b);
void *Gfx3d_CopyTex(void *a, void *heap);
void *Gfx3d_CopyModel(void *a, void *heap);
void _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj(void *a, void *b, void *c);
void NNS_G3dBindMdlTex(void *a, void *b);
void NNS_G3dBindMdlPltt(void *a, void *b);
void func_02103978(void *a, void *b, s32 c, s32 d);
void func_021037b4(void *a, void *b, s32 c, void *d);
void *ResCache_GetModel(void *a, u32 tag);
void *ResCache_FindModel(void *a);
void *PatternTexCache_Get(void);
void *_ZN15PatternTexCache15getPlayerTexKeyEii(void *a, void *b, void *c);
void ThreeLayerAnimModel_ClearLayer3Mask(void *p);
void BlendAnimModel_Play(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
void AnimModel_SwitchAnmObj(void *p, void *q);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, u32 b, u32 c);
void BlendAnimModel_Play2(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
u16 Anim_GetFrameCountForMode(u32 kind, Unk_02054778_Info *p);
}

u8 sJointAnmHeader2[4] = {0x4a, 0x00, 0x41, 0x43};

static inline u8 *Unk_02054b70_Off(u8 *p) {
    return p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

CachedModel::CachedModel() : unk_98(0x4e554c4c) {}

CachedModel::~CachedModel() {}

BOOL CachedModel::loadKeyed(void *res, void *name, u32 tag) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    void *q = NNS_G3dGetTex(h);
    if (name != NULL) {
        unk_5c = Gfx3d_CopyModel(p, name);
    } else {
        unk_5c = ResCache_GetModel(p, tag);
    }
    if (q != NULL) {
        Gfx3d_LoadTexAndPltt(q, texVramSlot);
        NNS_G3dBindMdlTex(unk_5c, q);
        NNS_G3dBindMdlPltt(unk_5c, q);
    }
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

BOOL CachedModel::loadWithTexKeyed(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    if (name != NULL) {
        unk_5c = Gfx3d_CopyModel(p, name);
    } else {
        unk_5c = ResCache_GetModel(p, tag);
    }
    if (tex != NULL) {
        NNS_G3dBindMdlTex(unk_5c, tex);
    } else {
        void *q = NNS_G3dGetTex(h);
        if (q != NULL) {
            Gfx3d_LoadTexAndPltt(q, texVramSlot);
            NNS_G3dBindMdlTex(unk_5c, q);
        }
    }
    if (d != NULL) {
        s32 i;
        for (i = 0; i < f; i++) {
            func_021037b4(unk_5c, d, i, (void *)e[i]);
        }
    }
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

BOOL CachedModel::load(void *res, void *name) {
    return loadKeyed(res, name, 0x4e554c4c);
}

BOOL CachedModel::loadWithTex(void *res, void *name, void *tex, void *d, u32 *e, s32 f) {
    return loadWithTexKeyed(res, name, tex, d, e, f, 0x4e554c4c);
}

BOOL CachedModel::loadCached(void *a, void *b) {
    unk_5c = ResCache_FindModel(a);
    if (unk_5c != NULL) {
        initRenderObj();
        return TRUE;
    }
    unk_98 = (u32)a;
    return loadKeyed(b, NULL, (u32)a);
}

BOOL CachedModel::loadWithSharedTex(void *a, void *b, void *c) {
    void *heap = gCurrentHeap;
    void *h = File_LoadAlloc(a, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(h));
    unk_5c = ResCache_GetModel(p, 0x4e554c4c);
    void *r = _ZN15PatternTexCache15getPlayerTexKeyEii(PatternTexCache_Get(), b, c);
    func_02103978(unk_5c, r, 0, 0);
    func_021037b4(unk_5c, r, 0, 0);
    Heap_Free(heap, h);
    initRenderObj();
    return TRUE;
}

void CachedModel::setFromFile(void *a) {
    u8 *p = Unk_02054b70_Off((u8 *)NNS_G3dGetMdlSet(a));
    void *q = NNS_G3dGetTex(a);
    unk_5c = p;
    NNS_G3dBindMdlTex(unk_5c, q);
    NNS_G3dBindMdlPltt(unk_5c, q);
    initRenderObj();
}

BOOL CachedModel::allocJointRecord(void *heap) {
    u32 size = renderResMdl[0x17] * 0x58;
    if (heap == NULL) {
        heap = gCurrentHeap;
    }
    void *p = Heap_Alloc(heap, size);
    if (p == NULL) {
        return FALSE;
    }
    renderJntRecord = p;
    renderObj |= 1;
    return TRUE;
}

BOOL CachedModel::release(void) {
    BOOL r = TRUE;
    r &= clearResource();
    unk_98 = 0x4e554c4c;
    return r;
}

Unk_020dbd44::Unk_020dbd44() : unk_04(0), unk_08(0) {}

Unk_020dbd44::~Unk_020dbd44() {}

extern "C" BOOL ModelSet_Load(ModelSet *t, void *file, void *heap)
{
    u32 size;
    void *fileHeap;
    void *res;
    void *hdr;
    u32 i;
    if (heap == 0) {
        heap = gModelCacheHeap;
    }
    fileHeap = gCurrentHeap;
    res = File_LoadAlloc(file, fileHeap, -4, 0);
    if (res == 0) {
        return FALSE;
    }
    u8 *hdr2 = (u8 *)NNS_G3dGetMdlSet(res);
    t->unk_04 = hdr2[9];
    size = t->unk_04 << 4;
    t->unk_0c = (u8 *)Heap_Alloc(heap, size);
    {
        u8 *p = hdr2 + 8;
        p = p + *(u16 *)(hdr2 + 0xe);
        MI_CpuCopy8(p + *(u16 *)(p + 2), t->unk_0c, size);
    }
    t->unk_08 = (CachedModel *)Heap_Alloc(heap, t->unk_04 * 0x9c);
    for (i = 0; i < t->unk_04; i++) {
        new (&t->unk_08[i]) CachedModel();
    }
    hdr = NNS_G3dGetTex(res);
    Gfx3d_LoadTexAndPltt(hdr, 0);
    hdr = Gfx3d_CopyTex(hdr, heap);
    for (i = 0; i < t->unk_04; i++) {
        u8 *h = (u8 *)NNS_G3dGetMdlSet(res);
        u8 *p = h + 8;
        u32 off = *(u16 *)(h + 0xe);
        u32 st = *(u16 *)(p + off);
        u8 *q = h + *(s32 *)(p + off + st * i + 4);
        void *r = Gfx3d_CopyModel(q, heap);
        _ZN5Model18setResourceAndBindEP16Unk_020553f8_Resj(&t->unk_08[i], r, hdr);
    }
    Heap_Free(fileHeap, res);
    return TRUE;
}

extern "C" void *ModelSet_Find(ModelSet *t, void *name)
{
    u32 i = 0;
    u32 n = t->unk_04;
    for (; i < n; i++) {
        if (strcmp(name, t->unk_0c + i * 16) == 0) {
            return &t->unk_08[i];
        }
    }
    return 0;
}

extern "C" BOOL ModelSet_Release(ModelSet *t)
{
    BOOL r = TRUE;
    if (t->unk_04 == 0) {
        return r;
    }
    for (u32 i = 0; i < t->unk_04; i++) {
        r &= t->unk_08[i].release();
    }
    t->unk_04 = 0;
    return TRUE;
}

AnimModel::AnimModel()
{
    unk_b4 = 0;
}

AnimModel::~AnimModel() {}

BOOL AnimModel::allocAnmObj(void *x)
{
    if (unk_b4 != 0 || unk_5c == 0) {
        return FALSE;
    }
    unk_b4 = (Unk_02054584_Data *)Gfx3d_AllocAnmObj(unk_5c, sJointAnmHeader2, x);
    if (unk_b4 != 0) {
        return TRUE;
    }
    return FALSE;
}

void AnimModel::stepAnim()
{
    AnimFrameCtrl &r = *this;
    _ZN13AnimFrameCtrl4stepEv(&r);
    unk_b4->unk_00 = unk_a4;
}

s32 AnimModel::drawAnimated(void *q)
{
    if (renderJntRecord != 0) {
        renderObj |= 1;
    }
    _ZN5Model10drawScaledEPi(this, q);
}

void AnimModel::setFrame(s32 v)
{
    unk_a4 = v << 12;
    unk_b4->unk_00 = unk_a4;
    if (renderJntRecord != 0) {
        renderObj |= 1;
    }
}

extern "C" u16 Anim_GetFrameCountForMode(u32 kind, Unk_02054778_Info *p)
{
    u16 r = p->unk_04;
    if (kind == 0 || kind == 2) {
        u32 f = p->unk_08;
        if (f & 2) {
            return r;
        }
        if (f & 1) {
            r = r - 1;
        }
    }
    return r;
}

void BlendAnimModel::initAnim(s32 a, s32 b, s32 c, u16 d, u16 e)
{
    if (e == 0) {
        e = Anim_GetFrameCountForMode(b, (Unk_02054778_Info *)a);
    }
    AnimFrameCtrl &r = *this;
    _ZN13AnimFrameCtrl5setupEihit(&r, e, b, c, d);
    NNS_G3dAnmObjInit(unk_b4, a, unk_5c, 0);
    unk_b4->unk_00 = unk_a4;
}

s32 AnimModel::attachAnim()
{
    NNS_G3dRenderObjAddAnmObj(&renderObj, unk_b4);
}

void AnimModel::detachJointAnim()
{
    if (unk_b4 != 0) {
        NNS_G3dRenderObjRemoveAnmObj(&renderObj, renderAnmJnt);
        unk_b4 = 0;
    }
}

void AnimModel::detachVisAnim()
{
    if (unk_b4 != 0) {
        NNS_G3dRenderObjRemoveAnmObj(&renderObj, renderAnmVis);
        unk_b4 = 0;
    }
}

void AnimModel::detachAnim()
{
    if (unk_b4 != 0) {
        if (renderAnmJnt == unk_b4) {
            NNS_G3dRenderObjRemoveAnmObj(&renderObj, renderAnmJnt);
            unk_b4 = 0;
        } else if (renderAnmVis == unk_b4) {
            NNS_G3dRenderObjRemoveAnmObj(&renderObj, renderAnmVis);
            unk_b4 = 0;
        }
    }
}

extern "C" void JointCb_UseRestTranslation(Unk_02054628_Obj *o, s32 x)
{
    u32 idx = o->unk_00[1];
    if (idx >= 2) {
        u8 *b = o->unk_d4;
        u32 off = *(u16 *)(b + 6);
        u8 *t = b + off;
        u32 st = *(u16 *)(b + off);
        u8 *e = b + *(s32 *)(t + st * idx + 4);
        s32 *v = (s32 *)(e + 4);
        Unk_02054584_Data *d = o->unk_b4;
        d->unk_4c = v[0];
        d->unk_50 = v[1];
        d->unk_54 = v[2];
    } else if (idx == 1) {
        if (x != 0) {
            u8 *b = o->unk_d4;
            u32 off = *(u16 *)(b + 6);
            u8 *t = b + off;
            Unk_02054584_Data *d = o->unk_b4;
            s32 old = d->unk_50;
            u32 st = *(u16 *)(b + off);
            u8 *e = b + *(s32 *)(t + st * idx + 4);
            d->unk_50 = old + (*(s32 *)(e + 8) - x);
        }
    }
}

extern "C" void JointCb_CalcCpuMatrix(void *unused, Unk_02054628_Obj *o, void *p)
{
    u32 t = *o->unk_00 & 0xe0;
    if (t == 0x40) {
        CpuMtx_RestoreFromStack(o->unk_00[4]);
    } else if (t == 0x60) {
        CpuMtx_RestoreFromStack(o->unk_00[5]);
    }
    if (p != 0) {
        Unk_02054584_Data *d = o->unk_b4;
        CpuMtx_MultRotScaledTrans(d->unk_28, &d->unk_4c, p);
    } else {
        Unk_02054584_Data *d = o->unk_b4;
        u32 f = d->unk_00;
        if (f & 2) {
            if (!(f & 4)) {
                CpuMtx_MultTrans(&d->unk_4c);
            }
        } else if (f & 4) {
            CpuMtx_MultRot(d->unk_28);
        } else {
            CpuMtx_MultRotTrans(d->unk_28, &d->unk_4c);
        }
    }
    if (t == 0x20 || t == 0x60) {
        CpuMtx_StoreToStack(o->unk_00[4]);
    }
}

u32 BlendAnimModel::getAnmRes()
{
    return unk_b4->unk_08;
}

Unk_02054584_Data *BlendAnimModel::getAnmObj()
{
    return unk_b4;
}

BlendAnimModel::BlendAnimModel()
{
}

BlendAnimModel::~BlendAnimModel() {}

void BlendAnimModel::captureJointPose(BlendAnimModel *x)
{
    if (unk_f0 != 0) {
        JointBlend &r = *this;
        _ZN10JointBlend11capturePoseEP16Unk_02056160_Arg(&r, x);
    }
}

void BlendAnimModel::onJointCalcPre(BlendAnimModel *x)
{
    if (func_01ffcc10() == 0) {
        captureJointPose(x);
    }
}

void BlendAnimModel::applyJointBlend(BlendAnimModel *x)
{
    Unk_02054584_Data *d = x->unk_b4;
    if (d->unk_00 & 4) {
        d->unk_4c = 0;
        d->unk_50 = 0;
        d->unk_54 = 0;
    }
    if (d->unk_00 & 2) {
        MTX_Identity33_(d->unk_28);
    }
    if (unk_f0 != 0) {
        JointBlend &r = *this;
        _ZN10JointBlend9blendPoseEP16Unk_02056160_Arg(&r, x);
    }
}

void BlendAnimModel::onJointCalcPost(BlendAnimModel *x)
{
    if (func_01ffcc10() == 0) {
        applyJointBlend(x);
    }
}

void BlendAnimModel::stepBlend()
{
    JointBlend &r = *this;
    _ZN10JointBlend7advanceEv(&r);
    stepAnim();
}

void BlendAnimModel::playBlend(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f)
{
    JointBlend &r = *this;
    _ZN10JointBlend5startEi(&r, b);
    initAnim(a, c, d, e, f);
}

TwoLayerAnimModel::TwoLayerAnimModel()
{
    unk_f4 = 0;
    unk_14c = 0;
    unk_150 = 0;
}

TwoLayerAnimModel::~TwoLayerAnimModel() {}

extern "C" void AnimModel_SwitchAnmObj(void *pv, void *qv) {
    Unk_0205415c_Obj *p = (Unk_0205415c_Obj *)pv;
    Unk_0205415c_Item *q = (Unk_0205415c_Item *)qv;
    Unk_0205415c_Item *cur = p->unk_18;
    if (cur != q && cur != NULL && cur->unk_10 == 0) {
        NNS_G3dRenderObjRemoveAnmObj(&p->unk_08, cur);
        NNS_G3dRenderObjAddAnmObj(&p->unk_08, q);
    }
}

void TwoLayerAnimModel::onJointLayerRelease(u32 i) {}

void TwoLayerAnimModel::onJointLayerAssign(u32 i) {}

void TwoLayerAnimModel::setLayer2Joint(u32 i) {
    if (i >= 0x20) {
        unk_150 |= 1 << (i - 0x20);
    } else {
        unk_14c |= 1 << i;
    }
}

void TwoLayerAnimModel::clearLayer2Joint(u32 i) {
    if (i >= 0x20) {
        unk_150 &= ~(1 << (i - 0x20));
    } else {
        unk_14c &= ~(1 << i);
    }
}

BOOL TwoLayerAnimModel::isLayer2Joint(u32 i) {
    if (i >= 0x20) {
        if ((unk_150 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_14c & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void TwoLayerAnimModel::captureLayer2Pose(Unk_02053a54_Msg *m) {
    if (unk_110.unk_f0 != 0) {
        _ZN10JointBlend11capturePoseEP16Unk_02056160_Arg(&unk_110, m);
    }
}

void TwoLayerAnimModel::onJointCalcPreLayer2(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (isLayer2Joint(m->unk_00->unk_01)) {
            AnimModel_SwitchAnmObj(this, unk_f4);
            captureLayer2Pose(m);
        } else {
            AnimModel_SwitchAnmObj(this, unk_b4);
            captureJointPose((BlendAnimModel *)m);
        }
    }
}

void TwoLayerAnimModel::applyLayer2Blend(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_110.unk_f0 != 0) {
        _ZN10JointBlend9blendPoseEP16Unk_02056160_Arg(&unk_110, m);
    }
}

void TwoLayerAnimModel::onJointCalcPostLayer2(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (isLayer2Joint(m->unk_00->unk_01)) {
            applyLayer2Blend(m);
        } else {
            applyJointBlend((BlendAnimModel *)m);
        }
    }
}

BOOL TwoLayerAnimModel::allocLayerAnims(u32 a) {
    if (!allocAnmObj((void *)a)) {
        return FALSE;
    }
    unk_f4 = Gfx3d_AllocAnmObj(unk_5c, sJointAnmHeader2, (void *)a);
    if (unk_f4 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void TwoLayerAnimModel::updateLayers() {
    stepBlend();
    if (unk_14c != 0 || unk_150 != 0) {
        if (_ZN10JointBlend7advanceEv(&unk_110) != 0 && (modelFlags & 0x4000) != 0) {
            clearLayer2Mask();
            modelFlags = modelFlags & 0xffffbfff;
        }
        _ZN13AnimFrameCtrl4stepEv(&unk_f8);
        *(u32 *)unk_f4 = unk_f8.unk_a4;
    }
}

void TwoLayerAnimModel::drawLayered(u32 a) {
    _ZN9AnimModel12drawAnimatedEPv(this);
    AnimModel_SwitchAnmObj(this, unk_b4);
}

extern "C" void BlendAnimModel_Play(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f) {
    ((BlendAnimModel *)p)->playBlend(a, b, c, d, e, f);
}

void TwoLayerAnimModel::playLayer2(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    _ZN10JointBlend5startEi(&unk_110, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = Anim_GetFrameCountForMode(c, (Unk_02054778_Info *)a);
    }
    _ZN13AnimFrameCtrl5setupEihit(&unk_f8, *(u16 *)&f, c, d, *(u16 *)&e);
    NNS_G3dAnmObjInit(unk_f4, a, unk_5c, 0);
    if (g != 0) {
        modelFlags = modelFlags | 0x4000;
    } else {
        modelFlags = modelFlags & 0xffffbfff;
    }
}

void TwoLayerAnimModel::playLayer2FromBase(u32 a, u32 b) {
    if (a == 0) {
        clearLayer2Mask();
    } else {
        playLayer2(getAnmRes(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void TwoLayerAnimModel::assignJointsToLayer2(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        onJointLayerAssign(i);
        setLayer2Joint(i);
    }
}

void TwoLayerAnimModel::releaseJointsFromLayer2(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        onJointLayerRelease(i);
        clearLayer2Joint(i);
    }
}

void TwoLayerAnimModel::clearLayer2Mask() {
    unk_150 = 0;
    unk_14c = unk_150;
}

ThreeLayerAnimModel::ThreeLayerAnimModel() {
    unk_154 = NULL;
    unk_1ac = 0;
    unk_1b0 = 0;
}

ThreeLayerAnimModel::~ThreeLayerAnimModel() {
}

void ThreeLayerAnimModel::setLayer3Joint(u32 i) {
    if (i >= 0x20) {
        unk_1b0 |= 1 << (i - 0x20);
    } else {
        unk_1ac |= 1 << i;
    }
}

void ThreeLayerAnimModel::clearLayer3Joint(u32 i) {
    if (i >= 0x20) {
        unk_1b0 &= ~(1 << (i - 0x20));
    } else {
        unk_1ac &= ~(1 << i);
    }
}

BOOL ThreeLayerAnimModel::isLayer3Joint(u32 i) {
    if (i >= 0x20) {
        if ((unk_1b0 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_1ac & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void ThreeLayerAnimModel::captureLayer3Pose(Unk_02053a54_Msg *m) {
    if (unk_170.unk_f0 != 0) {
        _ZN10JointBlend11capturePoseEP16Unk_02056160_Arg(&unk_170, m);
    }
}

void ThreeLayerAnimModel::onJointCalcPreLayer3(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 t = m->unk_00->unk_01;
        u32 v;
        if (t >= 0x20) {
            v = unk_1b0 & (1 << (t - 0x20));
        } else {
            v = unk_1ac & (1 << t);
        }
        if (v != 0) {
            AnimModel_SwitchAnmObj(this, unk_154);
            captureLayer3Pose(m);
        } else {
            u32 w;
            if (t >= 0x20) {
                w = unk_150 & (1 << (t - 0x20));
            } else {
                w = unk_14c & (1 << t);
            }
            if (w != 0) {
                AnimModel_SwitchAnmObj(this, unk_f4);
                captureLayer2Pose(m);
            } else {
                AnimModel_SwitchAnmObj(this, unk_b4);
                captureJointPose((BlendAnimModel *)m);
            }
        }
    }
}

void ThreeLayerAnimModel::applyLayer3Blend(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_170.unk_f0 != 0) {
        _ZN10JointBlend9blendPoseEP16Unk_02056160_Arg(&unk_170, m);
    }
}

void ThreeLayerAnimModel::onJointCalcPostLayer3(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 x = unk_1b0 | (unk_1ac | (unk_14c | unk_150));
        if (x == 0) {
            applyJointBlend((BlendAnimModel *)m);
        } else {
            u32 t = m->unk_00->unk_01;
            if ((x & (1 << (t & 0x1f))) == 0) {
                applyJointBlend((BlendAnimModel *)m);
            } else if (isLayer3Joint(t)) {
                applyLayer3Blend(m);
            } else if (isLayer2Joint(t)) {
                applyLayer2Blend(m);
            } else {
                applyJointBlend((BlendAnimModel *)m);
            }
        }
    }
}

BOOL ThreeLayerAnimModel::allocLayer3Anims(u32 a) {
    if (!allocLayerAnims(a)) {
        return FALSE;
    }
    unk_154 = Gfx3d_AllocAnmObj(unk_5c, sJointAnmHeader2, (void *)a);
    if (unk_154 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void ThreeLayerAnimModel::updateLayers3() {
    updateLayers();
    if (unk_1ac != 0 || unk_1b0 != 0) {
        if (_ZN10JointBlend7advanceEv(&unk_170) != 0 && (modelFlags & 0x8000) != 0) {
            ThreeLayerAnimModel_ClearLayer3Mask(this);
            modelFlags = modelFlags & 0xffff7fff;
        }
        _ZN13AnimFrameCtrl4stepEv(&unk_158);
        *(u32 *)unk_154 = unk_158.unk_a4;
    }
}

extern "C" void BlendAnimModel_Play2(void *p, s32 a, s32 b, s32 c, s32 d, u16 e, u16 f) { BlendAnimModel_Play(p, a, b, c, d, e, f); }

void ThreeLayerAnimModel::playLayer3(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    _ZN10JointBlend5startEi(&unk_170, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = Anim_GetFrameCountForMode(c, (Unk_02054778_Info *)a);
    }
    _ZN13AnimFrameCtrl5setupEihit(&unk_158, *(u16 *)&f, c, d, *(u16 *)&e);
    NNS_G3dAnmObjInit(unk_154, a, unk_5c, 0);
    if (g != 0) {
        modelFlags = modelFlags | 0x8000;
    } else {
        modelFlags = modelFlags & 0xffff7fff;
    }
}

void ThreeLayerAnimModel::checkLayer3Finished() { _ZN13AnimFrameCtrl10isFinishedEv(&unk_158); }

void ThreeLayerAnimModel::playLayer3FromBase(u32 a, u32 b) {
    if (a == 0) {
        ThreeLayerAnimModel_ClearLayer3Mask(this);
    } else {
        playLayer3(getAnmRes(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void ThreeLayerAnimModel::assignJointsToLayer3(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        onJointLayerAssign(i);
        clearLayer2Joint(i);
        setLayer3Joint(i);
    }
}

extern "C" void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, u32 b, u32 c)
{
    ThreeLayerAnimModel *o = (ThreeLayerAnimModel *)a;
    for (; b <= c; b++) {
        o->onJointLayerAssign(b);
        o->setLayer2Joint(b);
        o->clearLayer3Joint(b);
    }
}


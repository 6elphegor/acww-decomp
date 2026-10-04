#include "types.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/G3dResAccess.h"
#include "gfx/MatTexBinder.h"

struct Unk_020561d8_Vec { s32 x, y, z; };
struct Unk_020561d8_Mtx { s32 m[9]; };

struct Unk_02055cd0_Ent {
    u8 pad_00[0x22];
    u8 matIdx;
    u8 flags;
    u8 pad_24[4];
};

struct Unk_02055cd0_Obj {
    u8 pad_00[0x18];
    u32 resMdl;
    u8 pad_1c[0xa];
    u8 numTracks;
    u8 pad_27;
    Unk_02055cd0_Ent *tracks;
};
struct Unk_02056160_Rec {
    u8 pad[0x28];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Tbl {
    u8 pad[0x34];
    Unk_02056160_Rec *recs;
};

struct Unk_02056160_Hdr {
    u8 pad;
    u8 idx;
};

struct Unk_020561d8_Z {
    u32 flags;
    u8 pad[0x24];
    Unk_020561d8_Mtx mtx;
    Unk_020561d8_Vec vec;
};

struct Unk_02056160_Arg {
    Unk_02056160_Hdr *hdr;
    Unk_02056160_Tbl *tbl;
    u8 pad[0xac];
    Unk_020561d8_Z *z;
};

extern "C" {
void Anim_LerpVec(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t);
}

extern "C" {
void Anim_LerpRotMtx(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t);
}

extern "C" s32 _ZN12G3dResAccess10findMatIdxEi(void *res, ...);
extern "C" u32 _ZN12G3dResAccess10findTexIdxEi(void *res, ...);
extern "C" void *_ZN12G3dResAccess10getTexDataEi(void *res, u32 x);
extern "C" s32 _ZN12G3dResAccess11findPlttIdxEi(u8 *hdr, const char *name);
extern "C" u8 *_ZN12G3dResAccess11getPlttDataEi(u8 *hdr, s32 idx);
extern "C" s32 _ZN12G3dResAccess11getPlttSizeEi(u8 *hdr, s32 idx);
extern "C" s32 G3dTex_GetImageSize(u32 v);
extern "C" void _ZN13AnimFrameCtrl4stepEv(void *p);
extern "C" void func_02056714(void *p);
extern "C" s32 _ZN13AnimFrameCtrl5setupEihit(void *p, u32 a, u32 b, void *c, void *d);
extern "C" void *NNS_G3dGetAnmByIdx(void *p, s32 x);
extern "C" s32 NNS_G3dGetResDictIdxByName(void *a, void *b);
extern "C" void *NNSi_G3dGetTexPatAnmDataByIdx(void *a, s32 i);
extern "C" void *NNS_G3dGetTex(void *p);
extern "C" void *Heap_Alloc(void *heap, u32 size);
extern "C" BOOL _ZN11TexVramTask13requestMatTexEPvjj(void *a, void *b, u32 c, void *d);
extern "C" void _ZN11TexVramTask6cancelEv(void *a);
extern "C" void _ZN11TexVramTask5clearEv(void *a);
extern "C" void _ZN11TexVramTaskC2Ev(void *a);
extern "C" s32 _ZN11TexVramTask10requestTexEjjjh(void *self, u8 *a, u32 b, s32 c, s32 d);
extern "C" s32 _ZN11TexVramTask11requestPlttEjjjh(void *self, u8 *a, u32 b, s32 c, s32 d);
extern "C" void MTX_Identity33_(void *m);
extern "C" s32 FX_Div(s32 a, s32 b);
extern "C" void MI_CpuFill8(void *dst, u32 v, u32 n);
extern "C" void VEC_CrossProduct(void *a, void *b, void *c);
extern "C" u8 *NNSi_G3dGetTexPatAnmFV(u8 *p, s32 z, u32 v);
extern "C" u8 *NNSi_G3dGetTexPatAnmTexNameByIdx(u8 *p, u32 v);
extern "C" u8 *NNSi_G3dGetTexPatAnmPlttNameByIdx(u8 *p, u32 v);
extern "C" u32 func_0212a438(const char *s);
extern "C" void func_0212a360(void *p);
extern "C" void operator delete(void *p);
extern "C" void Anim_NormalizeVec(Unk_020561d8_Vec *v);
extern "C" void Anim_LerpVec(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t);
extern "C" void Anim_LerpRotMtx(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t);
extern "C" s32 G3dRes_FindDictIdx(void *p, s32 a);
extern "C" void *gCurrentHeap;


class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();

    u32 anmObj;
    u32 resMdl;
};

class MatTexPatTrack {
public:
    void *patData;
    u8 vramTask[0x1c];
    u8 texIdx;
    u8 keyIdx;
    u8 matIdx;
    u8 flags;
    u16 lastFrame;

    void update(u32 frame, u8 *p2, void *p3, void *p4);
    BOOL isPaused();
    void upload(void *a, void *b);
    void release();
    BOOL init();
    void reset();
    MatTexPatTrack *construct();
};

class MatTexPatAnim : public AnimFrameCtrl {
public:
    void *resMdl;
    void *resTex;
    void *patAnm;
    u16 patNumFrames;
    u8 numTracks;
    MatTexPatTrack *tracks;

    MatTexPatAnim();
    virtual ~MatTexPatAnim();
    void pauseMaterial();
    BOOL setMaterialTex(s32 unused, u32 x);
    void applyFrame();
    void update();
    void setAnim(void *r1, void *r2, u32 r3, u8 p5, void *p6);
    void release();
    BOOL init(void *r1, void *r2, u32 r3, void *heap);
    void clear();
};

class JointBlend {
public:
    Unk_020561d8_Mtx poseRot;
    Unk_020561d8_Vec poseTrans;
    s32 blendRatio;
    s32 blendStep;

    JointBlend();
    virtual ~JointBlend();
    void capturePose(Unk_02056160_Arg *x);
    void blendPose(Unk_02056160_Arg *x);
    void start(s32 n);
    BOOL advance();
};

struct ResName16 {
    char unk_00[17];
    ResName16();
    ~ResName16();
    char *get();
    void set(const char *src);
};

// Library class (see unk_020b8464.cpp)
class TexVramTask {
public:
    TexVramTask();
    void cancel(void);

    u32 unk_00[7];
};

class TexPatVramTasks {
public:
    TexPatVramTasks();
    ~TexPatVramTasks();

    /* 0x00 */ TexVramTask tasks[2];
};

struct TexPatVramUploader {
    u32 tasks[14];
    BOOL uploadByName(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b);
    BOOL uploadByIdx(u8 *hdr, s32 i1, s32 i2, u8 *x, s32 a, s32 b);
};

class TexPatVramAnim : public AnimFrameCtrl {
public:
    TexPatVramTasks vramTasks;
    u8 *dstTex;
    ResName16 texName;
    ResName16 plttName;
    u8 *srcTex;
    u8 *patAnm;
    s32 curPlttIdx;
    s32 curTexIdx;
    s32 prevTexIdx;
    u8 plttOnly;

    TexPatVramAnim();
    virtual ~TexPatVramAnim();
    void clear();
    void getFrameIndices(s32 *a, s32 *b);
    BOOL update();
    BOOL init(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag);
};


static inline u8 *Unk_02056e88_Ent(u8 *d, s32 idx) {
    u16 off = *(u16 *)(d + 6);
    u8 *t = d + off + 4;
    u16 stride = *(u16 *)(d + off);
    return t + stride * idx;
}


class G3dMatData {
public:
    u32 getPlttAddr(void);
    u32 getTexAddr(void);
    u32 getTexSize(void);

    /* 0x00 */ u32 unk_00[5];
    /* 0x14 */ u32 texImageParam;
    /* 0x18 */ u32 texImageParamMask;
    /* 0x1c */ u16 texPlttBase;
};

s32 G3dRes_FindDictIdx(void *p, s32 a) {
    u32 buf[4];
    buf[0] = 0;
    buf[1] = 0;
    buf[2] = 0;
    buf[3] = 0;
    func_0212a360(buf);
    return NNS_G3dGetResDictIdxByName(p, buf);
}

u32 G3dMatData::getTexSize(void) {
    return G3dTex_GetImageSize(texImageParam);
}

u32 G3dMatData::getTexAddr(void) {
    return (texImageParam & 0xffff) << 3;
}

u32 G3dMatData::getPlttAddr(void) {
    if (((texImageParam & 0x1c000000) >> 26) == 2) {
        return texPlttBase << 3;
    }
    return texPlttBase << 4;
}

s32 G3dResAccess::findMatIdx(s32 a) {
    return G3dRes_FindDictIdx((u8 *)this + unk_08 + 4, a);
}

u32 G3dResAccess::getTexImageOffset(void) {
    return texDataOffset;
}

s32 G3dResAccess::findTexIdx(s32 a) {
    return G3dRes_FindDictIdx((u8 *)this + 0x3c, a);
}

void *G3dResAccess::findTexData(void) {
    s32 u;
    s32 idx = findTexIdx(u);
    void *r = 0;
    if (idx != -1) {
        r = getTexData(idx);
    }
    return r;
}

void *G3dResAccess::getTexData(s32 idx) {
    u8 *base = (u8 *)this + 0x3c;
    u32 off = texDictEntryOffset;
    u8 *list = base + off;
    u8 *data = (u8 *)this + texDataOffset;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + ((*(u32 *)(ent + 4) & 0xffff) << 3);
}

u32 G3dResAccess::getTexSize(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + 0x3c;
    u32 off = texDictEntryOffset;
    u8 *list = base + off;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return G3dTex_GetImageSize(*(u32 *)(ent + 4));
}

s32 G3dResAccess::findPlttIdx(s32 a) {
    return G3dRes_FindDictIdx((u8 *)this + plttDictOffset, a);
}

void *G3dResAccess::getPlttData(s32 idx) {
    if (idx == -1) {
        return 0;
    }
    u8 *base = (u8 *)this + plttDictOffset;
    u32 off = *(u16 *)(base + 6);
    u8 *list = base + off;
    u8 *data = (u8 *)this + plttDataOffset;
    u32 stride = *(u16 *)(base + off);
    u8 *ent = list + stride * idx;
    return data + (*(u16 *)(ent + 4) << 3);
}

void G3dResAccess::findPlttData(void) {
    s32 u;
    getPlttData(findPlttIdx(u));
}

u32 G3dResAccess::getPlttSize(s32 idx) {
    u8 *base = (u8 *)this + plttDictOffset;
    u8 *ent = 0;
    s32 i;
    u32 cnt;
    if (idx == -1) {
        return (u32)ent;
    }
    u32 off = *(u16 *)(base + 6);
    u32 stride = *(u16 *)(base + off);
    ent = base + off + 4;
    ent += stride * idx;
    i = idx + 1;
    cnt = base[1];
    for (;;) {
        if (i >= (s32)cnt) {
            return (plttDataSize - *(u16 *)ent) << 3;
        }
        u8 *b2 = (u8 *)this + *(volatile u16 *)&plttDictOffset;
        u32 off2 = *(u16 *)(b2 + 6);
        u8 *l2 = b2 + off2;
        u32 stride2 = *(u16 *)(b2 + off2);
        u8 *e2 = l2 + stride2 * i;
        u32 q = *(u16 *)(e2 + 4);
        u32 p0 = *(u16 *)ent;
        if (q > p0) {
            return (q - p0) << 3;
        }
        i++;
    }
}

u32 G3dResAccess::func_02056fcc(s32 a) {
    return G3dRes_FindDictIdx((u8 *)this + 0x40, a);
}

TexPatVramTasks::TexPatVramTasks() {
}

TexPatVramTasks::~TexPatVramTasks() {
    tasks[0].cancel();
    tasks[1].cancel();
}

BOOL TexPatVramUploader::uploadByIdx(u8 *hdr, s32 i1, s32 i2, u8 *x, volatile s32 a, volatile s32 b) {
    u8 *p1;
    u8 *e2;
    u8 *r7;
    u8 *e3;
    p1 = Unk_02056e88_Ent(hdr + 0x3c, i1);
    {
        u8 *g = hdr + *(u16 *)(hdr + 0x34);
        u16 off = *(u16 *)(g + 6);
        u8 *tb = g + off + 4;
        u16 stride = *(u16 *)(g + off);
        e2 = tb + stride * i2;
    }
    s32 ta = a;
    r7 = NULL;
    if (ta != -1) {
        r7 = Unk_02056e88_Ent(x + 0x3c, ta);
    }
    s32 tb = b;
    e3 = NULL;
    if (tb != -1) {
        e3 = Unk_02056e88_Ent(x + *(u16 *)(x + 0x34), tb);
    }
    if (p1 != NULL) {
        G3dTex_GetImageSize(*(u32 *)p1);
        u32 r6 = *(u32 *)p1 + (u16) * (u32 *)(hdr + 8);
        if (r7 != NULL) {
            u8 *t = (u8 *)_ZN12G3dResAccess10getTexDataEi(x, a);
            s32 r3 = G3dTex_GetImageSize(*(u32 *)r7);
            if (!_ZN11TexVramTask10requestTexEjjjh(this, t, (r6 & 0xffff) << 3, r3, 2)) {
                return FALSE;
            }
        }
        if (e2 != NULL && e3 != NULL) {
            s32 bb = b;
            u8 *t = _ZN12G3dResAccess11getPlttDataEi(x, bb);
            s32 r3 = _ZN12G3dResAccess11getPlttSizeEi(x, bb);
            if (!_ZN11TexVramTask11requestPlttEjjjh((u8 *)tasks + 0x1c, t, (*(u16 *)e2 + (u16) * (u32 *)(hdr + 0x2c)) << 3, r3, 3)) {
                _ZN11TexVramTask6cancelEv(this);
                return FALSE;
            }
        }
    }
    return TRUE;
}

BOOL TexPatVramUploader::uploadByName(u8 *hdr, const char *n1, const char *n2, u8 *x, s32 a, s32 b) {
    s32 i1;
    s32 i2;
    if (n1 != NULL) {
        i1 = _ZN12G3dResAccess10findTexIdxEi(hdr, n1);
    } else {
        i1 = -1;
    }
    if (n2 != NULL) {
        i2 = _ZN12G3dResAccess11findPlttIdxEi(hdr, n2);
    } else {
        i2 = -1;
    }
    return uploadByIdx(hdr, i1, i2, x, a, b);
}

ResName16::ResName16() {
    for (u32 i = 0; i < 0x11; i++) {
        unk_00[i] = 0;
    }
}

ResName16::~ResName16() {}

void ResName16::set(const char *src) {
    if (src != NULL) {
        u32 n = func_0212a438(src) + 1;
        for (u32 i = 0; i < 0x11; i++) {
            if (i < n) {
                unk_00[i] = src[i];
            } else {
                unk_00[i] = 0;
            }
        }
    }
}

char *ResName16::get() {
    return unk_00;
}

TexPatVramAnim::TexPatVramAnim() {
    dstTex = NULL;
    srcTex = NULL;
    patAnm = NULL;
    curPlttIdx = -1;
    curTexIdx = -1;
    prevTexIdx = -1;
}

TexPatVramAnim::~TexPatVramAnim() {
    clear();
}

void TexPatVramAnim::clear() {
    dstTex = NULL;
    srcTex = NULL;
    patAnm = NULL;
    curPlttIdx = -1;
    curTexIdx = -1;
}

BOOL TexPatVramAnim::init(u8 *hdr, const char *n1, const char *n2, u8 *x, u8 *y, u8 flag) {
    clear();
    plttOnly = flag;
    texName.set(n1);
    plttName.set(n2);
    dstTex = hdr;
    srcTex = x;
    patAnm = y;
    setup(*(u16 *)(y + 4), 0, 0x1000, 0);
    update();
    return TRUE;
}

BOOL TexPatVramAnim::update() {
    s32 xy[2];
    prevTexIdx = curTexIdx;
    step();
    getFrameIndices(&xy[0], &xy[1]);
    if (curTexIdx == xy[0] || plttOnly != 0) {
        xy[0] = -1;
    }
    if (curPlttIdx == xy[1]) {
        xy[1] = -1;
    }
    char *n1 = texName.get();
    char *n2 = plttName.get();
    if (((TexPatVramUploader *)&vramTasks)->uploadByName(dstTex, n1, n2, srcTex, xy[0], xy[1])) {
        if (xy[0] != -1) {
            curTexIdx = xy[0];
        }
        if (xy[1] != -1) {
            curPlttIdx = xy[1];
        }
        return TRUE;
    }
    return FALSE;
}

void TexPatVramAnim::getFrameIndices(s32 *a, s32 *b) {
    *b = -1;
    *a = *b;
    u8 *r7 = NNSi_G3dGetTexPatAnmFV(patAnm, 0, (u32)(curFrame << 4) >> 16);
    if (r7 != NULL) {
        u8 *first = NNSi_G3dGetTexPatAnmTexNameByIdx(patAnm, r7[2]);
        r7 = NNSi_G3dGetTexPatAnmPlttNameByIdx(patAnm, r7[3]);
        *a = first != NULL ? NNS_G3dGetResDictIdxByName(srcTex + 0x3c, first) : -1;
        u8 *h = srcTex;
        u8 *tbl = h + *(u16 *)(h + 0x34);
        *b = r7 != NULL ? NNS_G3dGetResDictIdxByName(tbl, r7) : -1;
    }
}

MatTexBinder::MatTexBinder() {
    clear();
}

MatTexBinder::~MatTexBinder() {}

BOOL MatTexBinder::hasMaterial() {
    if (matIdx != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL MatTexBinder::setMaterialByName(u8 *hdr, const char *name) {
    if (!hasMaterial()) {
        s32 idx = (s8)_ZN12G3dResAccess10findMatIdxEi(hdr, name);
        if (idx != -1) {
            return setMaterial(hdr, idx);
        }
        return FALSE;
    }
    return FALSE;
}

BOOL MatTexBinder::setMaterial(u8 *hdr, s32 idx) {
    if (!hasMaterial()) {
        if (idx != -1 && idx < *(u8 *)(hdr + *(s32 *)(hdr + 8) + 5)) {
            matIdx = idx;
            resMdl = hdr;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void MatTexBinder::clear() {
    matIdx = -1;
}

BOOL MatTexBinder::bindByName(u8 *hdr2, const char *n, const char *n2) {
    BOOL ok = (bindTexByName(hdr2, n) & 1) ? TRUE : FALSE;
    if (ok & bindPlttByName(hdr2, n2)) {
        return TRUE;
    }
    return FALSE;
}

BOOL MatTexBinder::bindByIdx(u8 *hdr2, s32 a, s32 idx) {
    BOOL ok = (bindTex(hdr2, a) & 1) ? TRUE : FALSE;
    if (ok & bindPltt(hdr2, idx)) {
        return TRUE;
    }
    return FALSE;
}

BOOL MatTexBinder::bindTexByName(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return bindTex(hdr2, _ZN12G3dResAccess10findTexIdxEi(hdr2, name));
    }
    return TRUE;
}

BOOL MatTexBinder::bindTex(u8 *hdr2, s32 idx2) {
    u8 *r5;
    u8 *r6;
    u8 *r4;
    u32 r3;
    u32 r7;
    u32 v;
    u8 *lst;
    u8 *tb2;
    u16 stride2;
    u8 *e;
    u8 *lst2;
    u32 hi;
    u32 e4;
    u32 lo;
    u8 *q;
    u32 c;
    u8 *ent;
    u32 *w;
    if (hasMaterial()) {
        r5 = NULL;
        if (idx2 != -1) {
            u8 *h = resMdl;
            r6 = h + *(s32 *)(h + 8);
            r4 = r6 + *(u16 *)r6;
            for (r3 = 0; r3 < r4[1]; r3++) {
                u8 *tb = r4 + *(u16 *)(r4 + 6) + 4;
                u16 stride = *(u16 *)(r4 + *(u16 *)(r4 + 6));
                u8 *it = tb + stride * r3;
                lst = r6 + *(u16 *)(tb + stride * r3);
                u32 j;
                for (j = 0; j < it[2]; j++) {
                    if (matIdx == lst[j]) {
                        r5 = it;
                        break;
                    }
                }
                if (r5 != NULL) {
                    break;
                }
            }
            if (r5 != NULL) {
                q = hdr2 + 0x3c;
                tb2 = q + *(u16 *)(hdr2 + 0x42) + 4;
                stride2 = *(u16 *)(q + *(u16 *)(hdr2 + 0x42));
                e = tb2 + stride2 * idx2;
                if (((*(u32 *)e >> 26) & 7) != 5) {
                    v = *(u32 *)(hdr2 + 8);
                    v = v & 0xffff;
                } else {
                    v = *(u32 *)(hdr2 + 0x18);
                    v = v & 0xffff;
                }
                lst2 = r6 + *(u16 *)r5;
                r7 = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    ent = r6 + *(s32 *)(t + st * lst2[r7] + 4);
                    w = (u32 *)(ent + 0x14);
                    *w = *w & 0xc00f0000;
                    *w = *w | (*(u32 *)e + v);
                    e4 = *(u32 *)(e + 4);
                    lo = e4 & 0x7ff;
                    hi = (e4 >> 11) & 0x7ff;
                    c = *(u16 *)(ent + 0x20);
                    *(s32 *)(ent + 0x24) = lo != c ? FX_Div(lo << 12, c << 12) : 0x1000;
                    c = *(u16 *)(ent + 0x22);
                    *(s32 *)(ent + 0x28) = hi != c ? FX_Div(hi << 12, c << 12) : 0x1000;
                }
                r7++;
            test:
                if (r7 < r5[2]) {
                    goto body;
                }
                r5[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL MatTexBinder::bindPlttByName(u8 *hdr2, const char *name) {
    if (name != NULL) {
        return bindPltt(hdr2, _ZN12G3dResAccess11findPlttIdxEi(hdr2, name));
    }
    return TRUE;
}

BOOL MatTexBinder::bindPltt(u8 *hdr2, s32 idx2) {
    u8 *r6;
    u8 *r5;
    u8 *r4;
    u16 stride2;
    u8 *r7;
    u32 r3;
    u32 r2;
    u8 *g;
    u8 *tb2;
    u32 sum;
    u8 *e;
    u32 v5;
    u8 *lst2;
    u32 v1;
    if (hasMaterial()) {
        r4 = NULL;
        if (idx2 != -1) {
            u8 *h = resMdl;
            r6 = h + *(s32 *)(h + 8);
            r5 = r6 + *(u16 *)(r6 + 2);
            for (r3 = 0; r3 < r5[1]; r3++) {
                u8 *tb = r5 + *(u16 *)(r5 + 6) + 4;
                u16 stride = *(u16 *)(r5 + *(u16 *)(r5 + 6));
                r7 = tb + stride * r3;
                u8 *lst = r6 + *(u16 *)(tb + stride * r3);
                for (r2 = 0; r2 < r7[2]; r2++) {
                    if (matIdx == lst[r2]) {
                        r4 = r7;
                        break;
                    }
                }
                if (r4 != NULL) {
                    break;
                }
            }
            if (r4 != NULL) {
                g = hdr2 + *(u16 *)(hdr2 + 0x34);
                tb2 = g + *(u16 *)(g + 6) + 4;
                stride2 = *(u16 *)(g + *(u16 *)(g + 6));
                e = tb2 + stride2 * idx2;
                v5 = *(u16 *)(tb2 + stride2 * idx2);
                v1 = (u16) * (u32 *)(hdr2 + 0x2c);
                if ((*(u16 *)(e + 2) & 1) == 0) {
                    v5 = (u32)(v5 << 15) >> 16;
                    v1 = (u32)(v1 << 15) >> 16;
                }
                lst2 = r6 + *(u16 *)r4;
                u32 n = 0;
                goto test;
            body:
                {
                    u8 *b4 = r6 + 4;
                    u8 *t = b4 + *(u16 *)(r6 + 0xa);
                    u16 st = *(u16 *)(b4 + *(u16 *)(r6 + 0xa));
                    u8 *ent = r6 + *(s32 *)(t + st * lst2[n] + 4);
                    *(u16 *)(ent + 0x1c) = v5 + v1;
                }
                n++;
            test:
                if (n < r4[2]) {
                    goto body;
                }
                r4[3] |= 1;
                return TRUE;
            }
        }
    }
    return FALSE;
}

s8 MatTexBinder::getMaterial() {
    return matIdx;
}

extern "C" s32 Model_BindMatTexByName(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    MatTexBinder l;
    if (l.setMaterialByName(hdr, name)) {
        s32 res = l.bindByName((u8 *)p, (const char *)q, (const char *)r);
        l.clear();
        return res;
    }
    return 0;
}

extern "C" s32 Model_BindMatTexByIdx(u8 *hdr, const char *name, s32 p, s32 q, s32 r) {
    MatTexBinder l;
    if (l.setMaterialByName(hdr, name)) {
        s32 res = l.bindByIdx((u8 *)p, q, r);
        l.clear();
        return res;
    }
    return 0;
}

AnimFrameCtrl::~AnimFrameCtrl() {}

void AnimFrameCtrl::step() {
    s32 cur = curFrame;
    prevFrame = cur;
    u8 m = playMode;
    s32 v;
    if (m & 2) {
        s32 sp = frameStep;
        if (cur >= sp) {
            v = cur - sp;
        } else if ((m & 1) == 0) {
            v = cur + (numFrames - sp);
        } else {
            v = 0;
        }
    } else {
        v = cur + frameStep;
        if (v >= (s32)numFrames) {
            if ((m & 1) == 0) {
                v = v - numFrames;
            } else {
                v = numFrames - 0x1000;
            }
        }
    }
    curFrame = v;
}

void AnimFrameCtrl::setup(s32 frames, u8 mode, s32 speed, u16 last) {
    if (last == 0xffff) {
        last = frames - 1;
    }
    numFrames = frames << 12;
    curFrame = last << 12;
    frameStep = speed;
    playMode = mode;
    prevFrame = curFrame;
}

BOOL AnimFrameCtrl::isFinished() {
    switch (playMode) {
    case 1:
        if (curFrame >= (s32)numFrames - 0x1000) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (curFrame == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL AnimFrameCtrl::hasPassedFrame(s32 x) {
    s32 lim = x << 12;
    s32 a = curFrame;
    s32 b = prevFrame;
    if (b == a) {
        if (a == x) {
            return TRUE;
        }
        return FALSE;
    }
    BOOL flag = (playMode & 2) ? TRUE : FALSE;
    if (flag) {
        if (b > a) {
            if (b <= lim) goto no;
            if (a > lim) goto no;
            return TRUE;
        }
        if (lim < b) goto yes1;
        if (lim < a) goto no;
    yes1:
        return TRUE;
    }
    if (b < a) {
        if (b >= lim) goto no;
        if (a < lim) goto no;
        return TRUE;
    }
    if (lim > b) goto yes2;
    if (lim > a) goto no;
yes2:
    return TRUE;
no:
    return FALSE;
}

JointBlend::JointBlend() {
    MI_CpuFill8(&poseRot, 0, 0x24);
    blendRatio = 0;
    blendStep = 0;
}

JointBlend::~JointBlend() {}

BOOL JointBlend::advance() {
    if (blendStep != 0) {
        blendRatio += blendStep;
        if (blendRatio >= 0x1000) {
            blendRatio = 0x1000;
            blendStep = 0;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void JointBlend::start(s32 n) {
    blendRatio = 0;
    if (n == 0) {
        blendStep = 0;
    } else {
        blendStep = FX_Div(0x1000, n << 12);
    }
}

#pragma thumb off
extern "C" void Anim_NormalizeVec(Unk_020561d8_Vec *v) {
    s64 sum = (s64)v->x * v->x;
    sum += (s64)v->y * v->y;
    sum += (s64)v->z * v->z;
    if (sum != 0) {
        volatile u16 *divcnt = (volatile u16 *)0x4000280;
        *divcnt = 2;
        *(volatile s64 *)0x4000290 = (s64)0x1000000 << 32;
        *(volatile s64 *)0x4000298 = sum;
        volatile u16 *sqrtcnt = (volatile u16 *)0x40002b0;
        *sqrtcnt = 1;
        *(volatile s64 *)0x40002b8 = sum << 2;
        while (*sqrtcnt & 0x8000) {}
        s32 sq = *(volatile s32 *)0x40002b4;
        while (*divcnt & 0x8000) {}
        s64 inv = *(volatile s64 *)0x40002a0;
        s64 q = inv * sq;
        v->x = (s32)((q * v->x + ((s64)0x1000 << 32)) >> 45);
        v->y = (s32)((q * v->y + ((s64)0x1000 << 32)) >> 45);
        v->z = (s32)((q * v->z + ((s64)0x1000 << 32)) >> 45);
    }
}

extern "C" void Anim_LerpRotMtx(Unk_020561d8_Mtx *a, Unk_020561d8_Mtx *b, Unk_020561d8_Mtx *out, s32 t) {
    s32 k = 0x1000 - t;
    out->m[0] = (s32)(((s64)t * a->m[0] + (s64)k * b->m[0]) >> 12);
    out->m[1] = (s32)(((s64)t * a->m[1] + (s64)k * b->m[1]) >> 12);
    out->m[2] = (s32)(((s64)t * a->m[2] + (s64)k * b->m[2]) >> 12);
    out->m[3] = (s32)(((s64)t * a->m[3] + (s64)k * b->m[3]) >> 12);
    out->m[4] = (s32)(((s64)t * a->m[4] + (s64)k * b->m[4]) >> 12);
    out->m[5] = (s32)(((s64)t * a->m[5] + (s64)k * b->m[5]) >> 12);
    Anim_NormalizeVec((Unk_020561d8_Vec *)&out->m[0]);
    Anim_NormalizeVec((Unk_020561d8_Vec *)&out->m[3]);
    VEC_CrossProduct(&out->m[0], &out->m[3], &out->m[6]);
    VEC_CrossProduct(&out->m[6], &out->m[0], &out->m[3]);
}

extern "C" void Anim_LerpVec(Unk_020561d8_Vec *a, Unk_020561d8_Vec *b, Unk_020561d8_Vec *out, s32 t) {
    s32 k = 0x1000 - t;
    out->x = (s32)(((s64)t * a->x + (s64)k * b->x) >> 12);
    out->y = (s32)(((s64)t * a->y + (s64)k * b->y) >> 12);
    out->z = (s32)(((s64)t * a->z + (s64)k * b->z) >> 12);
}
#pragma thumb reset

void JointBlend::blendPose(Unk_02056160_Arg *x) {
    Unk_020561d8_Vec v;
    Unk_020561d8_Mtx m;
    u32 idx = x->hdr->idx;
    if ((x->z->flags & 4) == 0 && idx <= 1) {
        Anim_LerpVec(&x->z->vec, &poseTrans, &v, blendRatio);
        Unk_020561d8_Z *z = x->z;
        Unk_020561d8_Vec *pv = &z->vec;
        pv->x = v.x;
        pv->y = v.y;
        pv->z = v.z;
    }
    if (x->z->flags & 2) {
        MTX_Identity33_(&x->z->mtx);
    }
    Anim_LerpRotMtx(&x->z->mtx, &poseRot, &m, blendRatio);
    x->z->mtx = m;
    x->z->flags &= ~2;
}

void JointBlend::capturePose(Unk_02056160_Arg *x) {
    Unk_02056160_Rec *r = &x->tbl->recs[x->hdr->idx];
    if (r->mtx.m[0] == 0 && r->mtx.m[1] == 0 && r->mtx.m[2] == 0 && r->mtx.m[3] == 0 && r->mtx.m[4] == 0 &&
        r->mtx.m[5] == 0 && r->mtx.m[6] == 0 && r->mtx.m[7] == 0 && r->mtx.m[8] == 0) {
        MTX_Identity33_(&poseRot);
    } else {
        poseRot = r->mtx;
    }
    poseTrans.x = r->vec.x;
    poseTrans.y = r->vec.y;
    poseTrans.z = r->vec.z;
}

MatTexPatTrack *MatTexPatTrack::construct() {
    _ZN11TexVramTaskC2Ev(vramTask);
    return this;
}

void MatTexPatTrack::reset() {
    keyIdx = 0xff;
    matIdx = 0xff;
    texIdx = 0xff;
    flags = 0;
    patData = NULL;
    lastFrame = 0xffff;
}

BOOL MatTexPatTrack::init() {
    reset();
    _ZN11TexVramTask5clearEv(vramTask);
    return TRUE;
}

void MatTexPatTrack::release() {
    reset();
    _ZN11TexVramTask6cancelEv(vramTask);
}

void MatTexPatTrack::update(u32 frame, u8 *p2, void *p3, void *p4) {
    u8 *b = p2;
    u8 i;
    u8 *p;
    s32 n;
    u16 *h;
    if (matIdx != 0xff && frame != lastFrame) {
        lastFrame = frame;
        h = (u16 *)patData;
        p = b + h[3];
        i = 0;
        n = h[0] - 1;
        for (; i < n; i = i + 1) {
            if (*(u16 *)(p + 4) > frame) break;
            p += 4;
        }
        if (keyIdx != i) {
            keyIdx = i;
            u8 v = NNS_G3dGetResDictIdxByName((u8 *)p3 + 0x3c, b + *(u16 *)(b + 8) + (p[2] << 4));
            if (v != texIdx) {
                texIdx = v;
                upload(p4, p3);
            }
        }
    }
}

void MatTexPatTrack::upload(void *a, void *b) {
    if (!_ZN11TexVramTask13requestMatTexEPvjj(vramTask, a, matIdx, _ZN12G3dResAccess10getTexDataEi(b, texIdx))) {
        keyIdx = 0xff;
        texIdx = 0xff;
        lastFrame = 0xffff;
    }
}

BOOL MatTexPatTrack::isPaused() { return (flags & 1) ? TRUE : FALSE; }

MatTexPatAnim::MatTexPatAnim() { clear(); }

MatTexPatAnim::~MatTexPatAnim() {}

void MatTexPatAnim::clear() {
    resMdl = NULL;
    patNumFrames = 0;
    numTracks = 0;
    tracks = NULL;
    patAnm = NULL;
}

BOOL MatTexPatAnim::init(void *r1, void *r2, u32 r3, void *heap) {
    resMdl = r1;
    if (heap == NULL) {
        heap = gCurrentHeap;
    }
    resTex = NNS_G3dGetTex(r2);
    numTracks = r3;
    tracks = (MatTexPatTrack *)Heap_Alloc(heap, numTracks * 0x28);
    if (tracks == NULL) {
        return FALSE;
    }
    s32 i;
    for (i = 0; i < numTracks; i++) {
        MatTexPatTrack *e = &tracks[i];
        if (e) {
            e->construct();
        }
        if (!tracks[i].init()) {
            return FALSE;
        }
    }
    return TRUE;
}

void MatTexPatAnim::release() {
    s32 i;
    for (i = 0; i < numTracks; i++) {
        tracks[i].release();
    }
    clear();
}

void MatTexPatAnim::setAnim(void *r1, void *r2, u32 r3, u8 p5, void *p6) {
    patAnm = NNS_G3dGetAnmByIdx(r1, 0);
    patNumFrames = *(u16 *)((u8 *)patAnm + 4);
    if (r3 == 0) {
        r3 = patNumFrames;
    }
    u8 *hdr = (u8 *)resMdl;
    u8 *base = hdr + *(u32 *)(hdr + 8);
    s32 i;
    for (i = 0; i < *((u8 *)patAnm + 0xd); i++) {
        u8 *a = (u8 *)patAnm + 0xc;
        a = a + *(u16 *)(a + 6);
        u8 *b = a + *(u16 *)(a + 2);
        tracks[i].matIdx = NNS_G3dGetResDictIdxByName(base + 4, b + i * 16);
        tracks[i].patData = NNSi_G3dGetTexPatAnmDataByIdx(patAnm, i);
        tracks[i].keyIdx = 0xff;
        tracks[i].texIdx = 0xff;
        tracks[i].lastFrame = 0xffff;
    }
    ::_ZN13AnimFrameCtrl5setupEihit(this, r3, p5, p6, r2);
}

void MatTexPatAnim::update() {
    ::_ZN13AnimFrameCtrl4stepEv(this);
    applyFrame();
}

void MatTexPatAnim::applyFrame() {
    u32 frame = (u32)(curFrame << 4) >> 16;
    s32 i;
    for (i = 0; i < numTracks; i++) {
        if (!tracks[i].isPaused()) {
            tracks[i].update(frame, (u8 *)patAnm, resTex, resMdl);
        }
    }
}

BOOL MatTexPatAnim::setMaterialTex(s32 unused, u32 x) {
    BOOL z = FALSE;
    s32 id = _ZN12G3dResAccess10findMatIdxEi(resMdl);
    
    if (id == -1) return z;
    u8 v = _ZN12G3dResAccess10findTexIdxEi(resTex, x);
    
    if (v == -1) return z;
    s32 i = z;
    for (; i < numTracks; i++) {
        if (id == tracks[i].matIdx) {
            if (v != tracks[i].texIdx) {
                tracks[i].texIdx = v;
                tracks[i].keyIdx = 0xff;
                tracks[i].lastFrame = 0xffff;
                tracks[i].upload(resMdl, resTex);
                return TRUE;
            }
            return z;
        }
    }
    return z;
}

void MatTexPatAnim::pauseMaterial() {
    s32 id = _ZN12G3dResAccess10findMatIdxEi(resMdl);
    s32 i;
    if (id != -1) {
        for (i = 0; i < numTracks; i++) {
            if (id == tracks[i].matIdx) {
                tracks[i].flags |= 1;
                break;
            }
        }
    }
}

extern "C" void MatTexPatAnim_ResumeMaterial(Unk_02055cd0_Obj *p, void *q) {
    s32 i, r;
    r = _ZN12G3dResAccess10findMatIdxEi((void *)p->resMdl);
    i = 0;
    if (r != -1) {
        u32 n = p->numTracks;
        for (; i < (s32)n; i++) {
            if (r == p->tracks[i].matIdx) {
                p->tracks[i].flags &= ~1;
                break;
            }
        }
    }
}

ModelAnim::ModelAnim() {
    resMdl = 0;
    anmObj = 0;
}

ModelAnim::~ModelAnim() {
}


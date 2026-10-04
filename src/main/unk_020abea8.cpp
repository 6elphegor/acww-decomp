// mwcc-flags: -str reuse
#include "types.h"
#include "game/Unk_02033914.h"
#include "gfx/Unk_020ac0c4_Entry.h"
#include "gfx/Unk_020ac500_Tex.h"
#include "gfx/Unk_020d094c.h"
#include "gfx/Unk_021ede90.h"
#include "game/Vec3.h"
#include "gfx/ObjShadowBits.h"
#include "gfx/Unk_020ac2e8_V.h"


struct Vec3Z2 {
    s32 x, y, z;
    Vec3Z2() {
        x = 0;
        y = 0;
        z = 0x1000;
    }
    ~Vec3Z2();
};


struct Vec3Z {
    s32 x, y, z;
    Vec3Z() {
        x = 0;
        y = 0;
        z = 0;
    }
    ~Vec3Z();
};

struct Col {
    u16 v;
};




struct Mtx43 {
    s32 m[12];
};


class ObjShadowStrip {
public:
    void release(s32 heap);
    void draw(Vec3 *pos);
    BOOL build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    ObjShadowStrip();
    ~ObjShadowStrip();

    /* 0x00 */ Vec3 basePos;
    /* 0x0c */ s32 halfWidth;
    /* 0x10 */ s32 cullExtent;
    /* 0x14 */ u32 numRows;
    /* 0x18 */ s32 cachedZ;
    /* 0x1c */ s32 *rowDepths;
    /* 0x20 */ s32 texLeftS;
    /* 0x24 */ s32 texRightS;
    /* 0x28 */ s32 *rowTexT;
    /* 0x2c */ Vec3 *rowVertices;
    /* 0x30 */ Unk_020ac0c4_Entry *texture;
};


struct Bits {
    u32 a : 6;
    u32 b : 19;
    u32 c : 1;
    u32 d : 6;
};

extern "C" {
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void NNS_G3dGeFlushBuffer(void);
void G3_LoadMtx43(void *p);
void func_01ffd070(Vec3 *out, Vec3 *a, Vec3 *b);
u32 _s32_div_f(u32 a, u32 b);
void *Heap_Alloc(s32 heap, u32 size);
void Heap_Free(s32 heap, void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e84f8(void *m, s32 a, s32 b, s32 c);
void MTX_Concat43(void *a, void *b, void *c);
void VEC_Normalize(void *a, void *b);
s32 Ground_GetDefaultY(s32 a);
void WorldCurve_Apply(Vec3 *out, Vec3 *in);
Col SceneLights_GetRoomColor(void);
RGB SceneLights_GetFlashColor(void);
s32 SceneLights_GetLightParam(s32 a);
void Clock_GetMinuteHour(void *p);
extern s32 gCurrentHeap;
extern s32 gBgHeap;
extern u8 data_021f47e0[];
void *File_Load(void *p);
u8 *NNS_G3dGetTex(void *p);
void Gfx3d_LoadTexAndPltt(void *p, s32 a);
u8 *Gfx3d_CopyTex(void *p, s32 heap);
void Mem_Free(void *p);
void func_020639e8(char *buf, const void *fmt, ...);
u32 _ZN12G3dResAccess10findTexIdxEi(u8 *base, char *name);
u32 _ZN12G3dResAccess11findPlttIdxEi(u8 *base, char *name);
extern s32 gCamera;
extern Vec3 gCameraLookAt;
extern u8 gViewMtx[];
void ObjShadow_NormalizeAxes(void *a, void *b);
u8 ObjShadow_CalcAlpha(Vec3 *p, s32 q, u8 c);
u8 ObjShadow_GetCharaAlpha(Vec3 *p, s32 q);
u8 ObjShadow_GetObjAlpha(Vec3 *p, s32 q);
}

#define REG(a) (*(volatile u32 *)(a))

extern const s32 sObjShadowCoordShift;
extern const Unk_020d094c sObjShadowTexDefs[];
extern char sObjShadowTexNameFc[];
extern char sObjShadowTexNameTr[];
extern char sObjShadowTexNameGr[];
extern u8 sCharaShadowAlpha;
extern u8 sObjShadowAlpha;

extern s32 sObjShadowSkew;
extern u8 sObjShadowNormMtx[];
extern u8 sObjShadowViewMtx[];
extern Unk_020ac0c4_Entry sObjShadowTextures[];
extern ObjShadowStrip sTreeShadowStage2;
extern ObjShadowStrip sTreeShadowStage3;
extern ObjShadowStrip sTreeShadowStage4;
extern ObjShadowStrip sRockShadow;
extern ObjShadowStrip sSignShadow;

static inline void *Unk_020ac500_Data(const Unk_020ac500_Dict *dict, u32 idx) {
    Unk_020ac500_DictHdr *hdr = (Unk_020ac500_DictHdr *)((u8 *)dict + dict->ofsEntry);
    return &hdr->data[hdr->sizeUnit * idx];
}
static inline u32 *Unk_020ac500_TexData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (u32 *)Unk_020ac500_Data(&tex->dict, idx);
}
static inline Unk_020ac500_Pltt *Unk_020ac500_PlttData(const Unk_020ac500_Tex *tex, u32 idx) {
    return (Unk_020ac500_Pltt *)Unk_020ac500_Data((const Unk_020ac500_Dict *)((u8 *)tex + tex->ofsPlttDict), idx);
}


extern "C" void ObjShadow_NormalizeAxes(void *a, void *b) {
    VEC_Normalize(a, b);
    VEC_Normalize((u8 *)a + 12, (u8 *)b + 12);
    VEC_Normalize((u8 *)a + 24, (u8 *)b + 24);
}

extern "C" void ObjShadow_Init(void *arg) {
    u32 *texData;
    s32 heap = gBgHeap;
    if (arg != 0) {
        sObjShadowSkew = 0;
        Unk_020ac0c4_Entry *e = sObjShadowTextures;
        void *file = File_Load((void *)"/shadow/tex_shadow.nsbtx");
        u8 *res = NNS_G3dGetTex(file);
        Gfx3d_LoadTexAndPltt(res, 0);
        res = Gfx3d_CopyTex(res, heap);
        Mem_Free(file);
        u32 i;
        for (i = 0; i < 3; i++) {
            char *name = sObjShadowTexDefs[i].unk_00;
            char buf[36];
            func_020639e8(buf, "%s_pl", name);
            e->texRes = 0;
            e->texImageParam = 0;
            e->plttBase = 0;
            e->texRes = res;
            e->unk_14 = sObjShadowTexDefs[i].unk_06;
            u32 idx1 = _ZN12G3dResAccess10findTexIdxEi(e->texRes, name);
            u32 idx2 = _ZN12G3dResAccess11findPlttIdxEi(e->texRes, buf);
            Unk_020ac500_Tex *tex = (Unk_020ac500_Tex *)e->texRes;
            texData = Unk_020ac500_TexData(tex, idx1);
            u32 plttOfs = Unk_020ac500_PlttData(tex, idx2)->offset;
            u32 plttKey = (u16)tex->plttKey;
            u32 texParam = *texData;
            u32 texKey = (u16)tex->texKey;
            e->texImageParam = texParam + texKey;
            e->plttBase = plttOfs + plttKey;
            e->texImageParam |= sObjShadowTexDefs[i].unk_04 << 18;
            e->texImageParam |= sObjShadowTexDefs[i].unk_05 << 16;
            e->texFormat = (*texData >> 26) & 7;
            if (e->texFormat != 2) {
                e->plttBase >>= 1;
            }
            e->width = 1 << (((*texData >> 20) & 7) + 3);
            e->height = 1 << (((*texData >> 23) & 7) + 3);
            e++;
        }
        static Vec3Z2 v;
        sTreeShadowStage2.build((Vec3 *)&v, 0x119a, 0x119a, 2, 0x2000, 0, heap);
        sTreeShadowStage3.build((Vec3 *)&v, 0x1666, 0x1666, 2, 0x2000, 0, heap);
        sTreeShadowStage4.build((Vec3 *)&v, 0x2000, 0x2000, 2, 0x2000, 0, heap);
        sRockShadow.build((Vec3 *)&v, 0x1ccc, 0x1ccc, 0, 0, 0, heap);
        sSignShadow.build((Vec3 *)&v, 0x555, 0x1000, 0, 0, 0, heap);
    }
}

char sObjShadowTexNameFc[] = "obj_sdw_fc";
ObjShadowStrip sTreeShadowStage2;
Unk_020ac0c4_Entry sObjShadowTextures[3];
u8 sObjShadowAlpha = 0xe;
ObjShadowStrip sTreeShadowStage3;
ObjShadowStrip sTreeShadowStage4;
ObjShadowStrip sRockShadow;
ObjShadowStrip sSignShadow;

extern "C" void ObjShadow_Update() {
    struct {
        u8 a, b;
    } t;
    Clock_GetMinuteHour(&t);
    s32 x = (t.a + ((t.b + 6) % 12) * 60) << 12;
    x = FX_Div(x, 0x2d0000);
    sObjShadowSkew = func_01ffcb0c((x - 0x800) << 1, 0x1000);
    func_020e8388(data_021f47e0, 0, 0, 0);
    func_020e84f8(data_021f47e0, 0x20000, 0x20000, 0x20000);
    MTX_Concat43(data_021f47e0, gViewMtx, sObjShadowViewMtx);
    ObjShadow_NormalizeAxes(sObjShadowViewMtx, sObjShadowNormMtx);
    RGB c1 = SceneLights_GetFlashColor();
    u8 s = c1.b + (c1.r + c1.g);
    u8 r4 = func_01ffcb0c(0x10000, FX_Div(s << 12, 0x5d000)) >> 12;
    s32 base = SceneLights_GetLightParam(0);
    u8 v = base + r4;
    if (v > 0x1f) {
        v = 0x1f;
    }
    sObjShadowAlpha = v;
    sCharaShadowAlpha = v;
}

extern "C" void ObjShadow_Exit() {
    sObjShadowSkew = 0;
    Unk_020ac0c4_Entry *e = sObjShadowTextures;
    u32 i;
    for (i = 0; i < 3; i++) {
        e->texRes = 0;
        e++;
    }
    s32 heap = gBgHeap;
    sTreeShadowStage2.release(heap);
    sTreeShadowStage3.release(heap);
    sTreeShadowStage4.release(heap);
    sRockShadow.release(heap);
    sSignShadow.release(heap);
}

extern "C" u8 ObjShadow_CalcAlpha(Vec3 *p, s32 q, u8 r4) {
    if (gCamera != 0) {
        Unk_020ac2e8_V v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        s32 d, e;
        s32 pz = p->z;
        if (v.z > pz) {
            d = v.z - pz;
            if (0xb000 < d) {
                r4 = r4 >> 5;
            } else {
                static s32 inv = FX_Div(0xf80, 0xb000);
                r4 = r4 - (u8)(func_01ffcb0c(func_01ffcb0c(r4 << 12, inv), d) >> 12);
            }
        } else {
            d = pz - v.z;
            if (d > q + 0xc000) {
                return 0;
            }
            e = p->x - v.x;
            if (e < 0) {
                e = -e;
            }
            if (e > q + 0xf000) {
                return 0;
            }
        }
    }
    return r4;
}

char sObjShadowTexNameTr[] = "obj_sdw_tr";
const Unk_020d094c sObjShadowTexDefs[3] = {
    {sObjShadowTexNameGr, 0, 1, 0x3d, 0},
    {sObjShadowTexNameFc, 0, 1, 0x3a, 0},
    {sObjShadowTexNameTr, 1, 1, 0x3a, 0},
};
char sObjShadowTexNameGr[] = "obj_sdw_gr";
s32 sObjShadowSkew;
u8 sCharaShadowAlpha = 0x12;
u8 sObjShadowNormMtx[0x24];
u8 sObjShadowViewMtx[0x30];

extern "C" u8 ObjShadow_GetObjAlpha(Vec3 *p, s32 q) {
    return ObjShadow_CalcAlpha(p, q, sObjShadowAlpha);
}

extern "C" u8 ObjShadow_GetCharaAlpha(Vec3 *p, s32 q) {
    return ObjShadow_CalcAlpha(p, q, sCharaShadowAlpha);
}

extern "C" void ObjShadow_DrawTree(Vec3 *p, u32 n) {
    if (n >= 2) {
        static Vec3Z v;
        Vec3 out;
        func_01ffd070(&out, p, (Vec3 *)&v);
        if (n == 2) {
            sTreeShadowStage2.draw(&out);
        } else if (n == 3) {
            sTreeShadowStage3.draw(&out);
        } else if (n == 4) {
            sTreeShadowStage4.draw(&out);
        }
    }
}

extern "C" void ObjShadow_DrawRock(Vec3 *p) {
    sRockShadow.draw(p);
}

extern "C" void ObjShadow_DrawSign(Vec3 *p) {
    Vec3 local;
    Vec3 out;
    local.x = 0x166;
    local.y = 0;
    local.z = 0xc80;
    func_01ffd070(&out, p, &local);
    sSignShadow.draw(&out);
}

ObjShadowStrip::ObjShadowStrip() {
    basePos.x = 0;
    basePos.y = 0;
    basePos.z = 0;
    halfWidth = 0;
    cullExtent = 0;
    numRows = 0;
    rowDepths = 0;
    rowTexT = 0;
    rowVertices = 0;
    texture = 0;
}

ObjShadowStrip::~ObjShadowStrip() {}

BOOL ObjShadowStrip::build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap) {
    u32 i;
    if (heap == 0) {
        heap = gCurrentHeap;
    }
    texture = &sObjShadowTextures[idx];
    basePos = *pos;
    halfWidth = size >> 1;
    s32 v = halfWidth;
    if ((v >> shift) == 0) {
        v = shift;
    }
    cullExtent = v;
    cachedZ = 0;
    numRows = _s32_div_f(shift - 0x200, 0x2000) + 2;
    u32 n4 = numRows << 2;
    rowDepths = (s32 *)Heap_Alloc(heap, (n4 << 1) + numRows * 12);
    rowTexT = (s32 *)((u8 *)rowDepths + n4);
    rowVertices = (Vec3 *)((u8 *)rowTexT + n4);
    for (i = 0; i < numRows; i++) {
        if (i == numRows - 1) {
            rowDepths[i] = shift;
        } else {
            rowDepths[i] = i << 13;
        }
    }
    if (a == 0 && b == 0) {
        texLeftS = 0;
        texRightS = texture->width << 12;
    } else {
        texLeftS = func_01ffcb0c(texture->width << 12, a);
        texRightS = func_01ffcb0c(texture->width << 12, b);
    }
    s32 *p6 = rowDepths;
    s32 *p7 = rowTexT;
    for (i = 0; i < numRows; i++) {
        *p7++ = func_01ffcb0c(0x1000 - FX_Div(*p6, shift), texture->height << 12);
        p6++;
    }
    return TRUE;
}

void ObjShadowStrip::draw(Vec3 *pos) {
    Vec3 tmp;
    Col c0, c1;
    if (texture != 0 && texture->texRes != 0) {
        u8 lvl = ObjShadow_GetObjAlpha(pos, cullExtent);
        if (lvl > 1) {
            NNS_G3dGeFlushBuffer();
            REG(0x40004a8) = texture->texImageParam;
            REG(0x40004ac) = texture->plttBase;
            REG(0x4000440) = 1;
            G3_LoadMtx43(sObjShadowViewMtx);
            REG(0x40004a4) = (lvl << 16) | ((texture->unk_14 << 24) | 0x8080);
            s32 *p7 = rowDepths;
            s32 *p28 = rowTexT;
            Vec3 *vp = rowVertices;
            REG(0x4000500) = 3;
            s32 e1 = rowDepths[1];
            u32 i = 0;
            s32 lo, hi, neg;
            s32 shift = sObjShadowCoordShift;
            s32 z1 = i;
            s32 z2 = i;
            for (; i < numRows; i++) {
                s32 v;
                if (i != 0) {
                    v = e1;
                } else {
                    v = *p7;
                }
                s32 t = func_01ffcb0c(sObjShadowSkew, v);
                lo = t + (pos->x - halfWidth);
                hi = t + (pos->x + halfWidth);
                if (pos->z != cachedZ) {
                    neg = -*p7;
                    s32 y = Ground_GetDefaultY(z1);
                    tmp.x = z2;
                    tmp.y = y;
                    tmp.z = neg;
                    tmp.z = neg + pos->z;
                    WorldCurve_Apply(vp, &tmp);
                    vp->y >>= shift;
                    vp->z >>= shift;
                }
                c0 = SceneLights_GetRoomColor();
                c1 = c0;
                REG(0x4000480) = c1.v;
                REG(0x4000488) = (u16)((texLeftS << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                s16 zz = vp->z;
                REG(0x400048c) = (u16)((lo << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                REG(0x4000488) = (u16)((texRightS << 8) >> 16) | ((u16)((*p28 << 8) >> 16) << 16);
                zz = vp->z;
                REG(0x400048c) = (u16)((hi << 11) >> 16) | ((u16)(s16)vp->y << 16);
                REG(0x400048c) = (u16)zz;
                p7++;
                p28++;
                vp++;
            }
            REG(0x4000504) = 0;
            REG(0x4000448) = 1;
            cachedZ = pos->z;
        }
    }
}

void ObjShadowStrip::release(s32 heap) {
    if (heap == 0) {
        heap = gCurrentHeap;
    }
    if (rowDepths != 0) {
        Heap_Free(heap, rowDepths);
        rowDepths = 0;
    }
    texture = 0;
}



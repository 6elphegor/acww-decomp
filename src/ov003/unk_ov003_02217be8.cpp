// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// TU19 of ov003: ground part classes 0x02217be8 / 0x02217dbc and the scene 0x02232418 (0x02217be8-0x022187f8)

struct Unk_ov003_02215c7c_Blk {
    s64 v[6];
};

struct Unk_020553f8_Res;

struct Unk_ov003_02217910_V3 {
    s32 x, y, z;
};

// ---- main-module helper classes ----
class CachedModel {
public:
    CachedModel();
    virtual ~CachedModel();

    u8 pad_04[0x64 - 4];
    Unk_ov003_02215c7c_Blk unk_64;
    u8 pad_94[4];
    u32 unk_98;
};

class Model : public CachedModel {
public:
    void setInitCallback(s32 a, s32 b);
    u32 getRenderObj();
    void drawScaled(s32 *p);
    void clearResource();
    void setResourceAndBind(Unk_020553f8_Res *r, u32 a);
};

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();
    inline AnimFrameCtrl() : curFrame(0), prevFrame(0), frameStep(0x1000) {}
    void step();

    u32 numFrames;
    u32 curFrame;
    u32 prevFrame;
    u32 frameStep;
    u32 playMode;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    void addToRenderObj(u32 a);
    void init(s32 a, s32 b, s32 c, u16 d);
    BOOL allocMatAnm(u32 a, void *c);

    s32 *anmObj;
    u32 resMdl;
};

class TexPatVramAnim {
public:
    u32 pad[0x90 / 4];
    TexPatVramAnim();
    ~TexPatVramAnim();
    BOOL update();
};

// ---- this overlay's part classes ----
struct Unk_ov003_02217b78_Ent {
    u8 pad_00[8];
    Unk_020553f8_Res *unk_08;
};

struct Unk_ov003_02217c3c_P {
    u8 pad_00[8];
    Unk_020553f8_Res *unk_08;
    u8 pad_0c[0x14];
    u32 unk_20;
};

struct Unk_ov003_02217c3c_Obj {
    u8 pad_00[0x20];
    Unk_ov003_02217c3c_P *unk_20;
};

class FieldGroundBackdrop {
public:
    FieldGroundBackdrop();
    ~FieldGroundBackdrop();
    BOOL followCamera();
    BOOL init();
    void clear();

    /* 0x00 */ CachedModel unk_00;
    /* 0x9c */ void *unk_9c;
};

class FieldGroundBlock {
public:
    static void *operator new(unsigned long, void *p) { return p; }
    FieldGroundBlock();
    BOOL release();
    BOOL draw();
    BOOL updateAnims();
    BOOL init(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ CachedModel unk_04;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ ModelAnim unk_a8[2];
    /* 0xe8 */ s8 unk_e8;
};

class FieldGroundPiece {
public:
    FieldGroundPiece();
    ~FieldGroundPiece();
    BOOL release();
    BOOL draw();
    BOOL updateAnims();
    BOOL setup(Unk_ov003_02217910_V3 *pos, s32 idx);
    BOOL isActive();
    s32 getBlockZ();
    s32 getBlockX();
    Unk_ov003_02217910_V3 *getPos();
    s32 getCurveAngle();

    /* 0x00 */ CachedModel unk_00;
    /* 0x9c */ Unk_ov003_02217910_V3 unk_9c;
    /* 0xa8 */ s16 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ s32 unk_b0;
    /* 0xb4 */ ModelAnim unk_b4[2];
};

// 4-byte colour constructors (unreferenced except by __sinit)
struct Unk_ov003_02235498_Col {
    u8 r, g, b, a;
    Unk_ov003_02235498_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

// ---- scene ----
struct Unk_ov003_02218478_V3 {
    s32 x, y, z;
    Unk_ov003_02218478_V3() {}
};

struct Unk_ov003_02218478_Cell {
    u8 pad[0x28];
};

struct Unk_ov003_02218478_Grid {
    Unk_ov003_02218478_Cell *cells;
    u32 w, h;
};

struct Unk_ov003_02217948 {
    u32 pad[0xc / 4];
};

struct Unk_ov003_022179b8_Rec {
    u32 pad[0x1c / 4];
};

class FieldGround : public GameProc {
public:
    /* 0x50 */ FieldGroundBlock *unk_50;
    /* 0x54 */ FieldGroundPiece unk_54;
    /* 0x148 */ s32 unk_148;
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ FieldGroundBackdrop unk_150;
    /* 0x1f0 */ TexPatVramAnim unk_1f0;
    /* 0x280 */ TexPatVramAnim unk_280;
    /* 0x310 */ Unk_ov003_02217948 unk_310;

    FieldGround();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FieldGround();
    void updateAmbientSe();
};

struct Unk_ov003_02218034_Obj {
    u8 pad_00[0x5c];
    u8 *unk_5c;
};

struct Unk_ov003_02218784_Obj {
    u8 pad_00[0x1c];
    void (*unk_1c)(struct Unk_ov003_02218794_Obj *);
    u8 pad_20[0x90 - 0x20];
    u8 unk_90;
};

struct Unk_ov003_02218794_Inner {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_ov003_02218794_A {
    u8 pad_00[1];
    u8 unk_01;
};

struct Unk_ov003_02218794_B {
    u8 pad_00[0x28];
    u32 unk_28;
};

struct Unk_ov003_02218794_Obj {
    Unk_ov003_02218794_A *unk_00;
    Unk_ov003_02218794_Inner *unk_04;
    u8 pad_08[0xb0 - 0x8];
    struct Unk_ov003_02218794_B *unk_b0;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define G3dResAccess_findMatIdx _ZN12G3dResAccess10findMatIdxEi
#define MapBlockAcre_getAcreId _ZN12MapBlockAcre9getAcreIdEv
#define BgModelCache_getGroundTex _ZN12BgModelCache12getGroundTexEv
#define BgModelCache_getRiverPatTex _ZN12BgModelCache14getRiverPatTexEv
#define BgModelCache_getRiverPatAnm _ZN12BgModelCache14getRiverPatAnmEv
#define BgModelCache_getBeBPatTex _ZN12BgModelCache12getBeBPatTexEv
#define BgModelCache_getBeBPatAnm _ZN12BgModelCache12getBeBPatAnmEv
#define BgModelCache_getAcre _ZN12BgModelCache7getAcreEi
#define BgModelCache_getGroundMatAnm _ZN12BgModelCache15getGroundMatAnmEv
#define BgModelCache_getGroundTexSrtAnm _ZN12BgModelCache18getGroundTexSrtAnmEv
#define Unk_020d93b8_getEyeCurveAngle _ZN12Unk_020d93b816getEyeCurveAngleEv
#define TexPatVramAnim_init _ZN14TexPatVramAnim4initEPhPKcS2_S0_S0_h

extern "C" {
extern void *gCamera;
extern Unk_ov003_02218478_V3 gCameraLookAt;
extern void *gBgHeap;
extern Unk_ov003_02218478_Grid *gSceneBlockMap;
extern s32 data_021ce63c;
extern s32 data_020c8cbc;
extern u8 data_021f47e0[];

s32 G3dResAccess_findMatIdx(void *self, s32 a);
s32 ObjShadow_Update();
s32 CharaShadow_UpdateColor();
void *BgModelCache_Get();
s32 BgModelCache_getGroundTex(void *self);
s32 BgModelCache_getRiverPatTex(void *self);
s32 BgModelCache_getRiverPatAnm(void *self);
s32 BgModelCache_getGroundMatAnm(void *self);
s32 BgModelCache_getGroundTexSrtAnm(void *self);
s32 BgModelCache_getBeBPatTex(void *self);
s32 BgModelCache_getBeBPatAnm(void *self);
void *BgModelCache_getAcre(void *self, s32 i);
s32 MapBlockAcre_getAcreId(void *self);
s32 Acre_GetAttr(s32 a);
s32 Unk_020d93b8_getEyeCurveAngle(void *self);
void Camera_GetLookAtBlock(void *, s32 *, s32 *);
s32 WorldCurve_AngleToDistance(s32);
s16 WorldCurve_ToCurved(Unk_ov003_02218478_V3 *out, Unk_ov003_02218478_V3 *v);
s32 WorldCurve_GetAngleScale();
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
s32 Ground_GetSpecialPieceKind(s32, s32);
void FieldPos_FromBlockUnitCenter(Unk_ov003_02218478_V3 *, s32, s32, s32, s32);
void *Heap_Alloc(void *, s32);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s32 a);
s32 Ground_SetWaveLevel();
s32 FX_Div(s32 a, s32 b);
s32 TexPatVramAnim_init(void *self, void *hdr, const char *n1, const char *n2, s32 x, s32 y, s32 flag);

// TU17 functions (the nearest-record class, sound handle helpers)
void FieldGround_ReleaseEnvChannel(void *p);
void FieldGround_PlayEnvSe(void *p, void *a, u16 b);
void FieldGround_ResetEnvChannel(void *p);
void FieldGround_DestroyEnvChannel(void *p);
void FieldGround_InitEnvChannel(void *p);
s32 FieldGround_GetSoundSrcKind(void *p);
void *FieldGround_GetSoundSrcPos(void *p);
void FieldGround_EndSoundSrc(void *p);
void FieldGround_FindSoundSrc(void *out, Unk_ov003_02218478_V3 *pos);
s32 FieldGround_ReleaseBackdrop(void *p);
s32 FieldGround_DrawBackdrop(void *p);

}

// scene registration entry {factory, 0xd, 0x9}
struct Unk_ov003_022323ec_Entry {
    void *factory;
    u16 a, b;
};

extern "C" FieldGround *FieldGround_Create();

extern "C" {
// the six header colours first (in __sinit store order), then the unit's own data
Unk_ov003_02235498_Col data_ov003_022354a4(31, 20, 20, 31);
Unk_ov003_02235498_Col data_ov003_022354a8(20, 20, 31, 31);
Unk_ov003_02235498_Col data_ov003_02235498(31, 31, 20, 31);
Unk_ov003_02235498_Col data_ov003_022354a0(20, 31, 20, 31);
Unk_ov003_02235498_Col data_ov003_0223549c(20, 31, 31, 31);
Unk_ov003_02235498_Col data_ov003_022354ac(20, 24, 24, 31);
const s32 sFieldGroundPieceAcres[2] = {0x84, 0x85};
u8 data_ov003_02235490;
s32 data_ov003_02235494;
char data_ov003_022323f4[0xc] = "m_grd_riv";
char data_ov003_02232400[0x10] = "m_grd_sea085";
u32 sWaterMatNames[2] = {(u32)data_ov003_022323f4, (u32)data_ov003_02232400};
Unk_ov003_022323ec_Entry sFieldGroundProfile = {(void *)FieldGround_Create, 0xd, 0x9};
}

// ---- functions ----

extern "C" FieldGround *FieldGround_Create() {
    return new FieldGround;
}

extern "C" void FieldGround_OnBeachMaterial(Unk_ov003_02218794_Obj *o) {
    if (data_ov003_02235494 == 0) {
        Unk_ov003_02218794_Inner *in = o->unk_04;
        u8 *r3 = in->unk_2c;
        u8 b = o->unk_00->unk_01;
        if (r3 != 0) {
            if (*(s8 *)(r3 + 0xe8) == b) {
                FX_Div(o->unk_b0->unk_28 + 0xda2, 0xda2);
                Ground_SetWaveLevel();
                data_ov003_02235494 = 1;
            }
        }
    }
}

extern "C" void FieldGround_OnModelInit(Unk_ov003_02218784_Obj *o) {
    o->unk_1c = FieldGround_OnBeachMaterial;
    o->unk_90 = 2;
}

FieldGround::FieldGround() {
    FieldGround_InitEnvChannel(&unk_310);
}

FieldGround::~FieldGround() {
    FieldGround_DestroyEnvChannel(&unk_310);
}

BOOL FieldGround::vfunc_00() {
    unk_150.clear();
    unk_150.init();
    s32 r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    s32 r4 = BgModelCache_getRiverPatTex(BgModelCache_Get());
    s32 r0 = BgModelCache_getRiverPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&unk_1f0, (void *)r6, "grd_riv.0", "grd_riv_pl", r4, r0, 0);
    r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    r4 = BgModelCache_getBeBPatTex(BgModelCache_Get());
    r0 = BgModelCache_getBeBPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&unk_280, (void *)r6, "grd_beB", "grd_beB_pl", r4, r0, 1);
    Unk_ov003_02218478_Grid *g = gSceneBlockMap;
    unk_148 = g->w;
    unk_14c = g->h;
    unk_50 = (FieldGroundBlock *)Heap_Alloc(gBgHeap, unk_14c * (unk_148 * 0xec));
    {
        FieldGroundBlock *e = unk_50;
        for (; e < unk_50 + unk_148 * unk_14c; e++) {
            e = new (e) FieldGroundBlock;
        }
    }
    u32 by, bx;
    u32 tx, ty;
    for (by = 0; by < unk_14c; by++) {
        for (bx = 0; bx < unk_148; bx++) {
            for (ty = 0; ty < 16; ty++) {
                for (tx = 0; tx < 16; tx++) {
                    s32 o1, o2;
                    FieldUnit_FromBlockUnit(&o1, &o2, bx, by, tx, ty);
                    s32 t = Ground_GetSpecialPieceKind(o1, o2);
                    if (t != -1) {
                        Unk_ov003_02217910_V3 v;
                        v.x = 0;
                        v.y = 0;
                        v.z = 0;
                        FieldPos_FromBlockUnitCenter((Unk_ov003_02218478_V3 *)&v, bx, by, tx, ty);
                        unk_54.setup(&v, t);
                    }
                }
            }
        }
    }
    s32 idx = 0;
    for (bx = 0; bx < unk_14c; bx++) {
        for (by = 0; by < unk_148; by++) {
            Unk_ov003_02218478_Cell *c;
            if (by < g->w && bx < g->h && g->cells != 0) {
                c = &g->cells[bx * g->w + by];
            } else {
                c = 0;
            }
            (unk_50 + idx++)->init((Unk_ov003_02217c3c_Obj *)c, by, bx);
        }
    }
    FieldGround_ResetEnvChannel(&unk_310);
    return TRUE;
}

BOOL FieldGround::onExecute() {
    FieldGroundBlock *e;
    s32 i, j;
    unk_150.followCamera();
    unk_54.updateAnims();
    e = unk_50;
    i = 0;
    goto test0;
loop0:
    {
        j = 0;
        s32 *volatile pw = &unk_148;
        goto test1;
    loop1:
        e->updateAnims();
        e++;
        j++;
    test1:
        if (j < *pw) goto loop1;
    }
    i++;
test0:
    if (i < unk_14c) goto loop0;
    unk_1f0.update();
    unk_280.update();
    updateAmbientSe();
    data_021ce63c = 0;
    return TRUE;
}

static inline BOOL Unk_ov003_022181bc_Chk(s32 x, s32 y, s32 cx, s32 cy) {
    if (x >= cx - 1 && x <= cx + 1 && y >= cy - 2 && y <= cy + 1) return TRUE;
    return FALSE;
}

BOOL FieldGround::onDraw() {
    s32 a, cx, cy, b, cam_r, found;
    s32 x, y, idx;
    void *cam;
    data_ov003_02235494 = 0;
    ObjShadow_Update();
    CharaShadow_UpdateColor();
    a = 0;
    cx = 0;
    cy = 0;
    b = ((s32 *)unk_54.getPos())[2];
    cam_r = 0;
    cam = gCamera;
    if (cam != 0) {
        cam_r = Unk_020d93b8_getEyeCurveAngle(cam);
        Camera_GetLookAtBlock(cam, &cx, &cy);
        a = WorldCurve_AngleToDistance(cam_r);
    }
    found = 0;
    for (y = 0; y < unk_14c; y++) {
        for (x = 0; x < unk_148; x++) {
            BOOL r = FALSE;
            r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
            if (r) {
                if (x == unk_54.getBlockX() && y == unk_54.getBlockZ()) {
                    found = 1;
                }
            }
        }
    }
    if (found == 0) {
        FieldGround_DrawBackdrop(&unk_150);
    }
    if (found == 0) {
        idx = 0;
        for (y = 0; y < unk_14c; y++) {
            for (x = 0; x < unk_148; x++) {
                BOOL r = FALSE;
                r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                if (r) (unk_50 + idx)->draw();
                idx++;
            }
        }
    } else {
        if (unk_54.getCurveAngle() < cam_r) {
            if (b < a) {
                unk_54.draw();
                FieldGround_DrawBackdrop(&unk_150);
            } else {
                FieldGround_DrawBackdrop(&unk_150);
                unk_54.draw();
            }
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (unk_50 + idx)->draw();
                    idx++;
                }
            }
        } else {
            FieldGround_DrawBackdrop(&unk_150);
            idx = 0;
            for (y = 0; y < unk_14c; y++) {
                for (x = 0; x < unk_148; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (unk_50 + idx)->draw();
                    idx++;
                }
            }
            unk_54.draw();
        }
    }
    return TRUE;
}

BOOL FieldGround::vfunc_0c() {
    s32 i, j;
    s32 idx;
    unk_54.release();
    idx = 0;
    for (i = 0; i < unk_14c; i++) {
        for (j = 0; j < unk_148; j++) {
            (unk_50 + idx++)->release();
        }
    }
    FieldGround_ReleaseBackdrop(&unk_150);
    FieldGround_ReleaseEnvChannel(&unk_310);
    return TRUE;
}

void FieldGround::updateAmbientSe() {
    data_ov003_02235490 = 0;
    if (gCamera != 0) {
        Unk_ov003_02218478_V3 v = gCameraLookAt;
        Unk_ov003_022179b8_Rec q;
        FieldGround_FindSoundSrc(&q, &v);
        void *r6 = (void *)FieldGround_GetSoundSrcPos(&q);
        if (r6 != 0) {
            u32 r4 = 0x80d;
            switch (FieldGround_GetSoundSrcKind(&q)) {
            case 0x11:
                r4 = 0x80b;
                break;
            case 0x12:
                data_ov003_02235490 = 1;
                break;
            case 5:
                r4 = 0x80e;
                break;
            case 0xf:
                r4 = 0x80c;
                break;
            }
            FieldGround_PlayEnvSe(&unk_310, r6, r4);
        }
        FieldGround_EndSoundSrc(&q);
    }
}

extern "C" void FieldGround_SetWaterMatFlags(void *op, s32 flag) {
    Unk_ov003_02218034_Obj *o = (Unk_ov003_02218034_Obj *)op;
    u32 i;
    u8 *base = o->unk_5c;
    u8 *r4 = base + *(s32 *)(base + 8);
    for (i = 0; i < 2; i++) {
        u32 t = G3dResAccess_findMatIdx(o->unk_5c, sWaterMatNames[i]);
        if (t != (u32)-1) {
            u8 *r1 = r4 + 4;
            u32 hw = *(u16 *)(r4 + 0xa);
            u8 *r2 = r1 + hw;
            u32 st = *(u16 *)(r1 + hw);
            u8 *e = r4 + *(s32 *)(r2 + st * t + 4);
            if (e != 0) {
                *(u32 *)(e + 0x10) |= 0x800;
                if (flag != 0) {
                    *(u32 *)(e + 0xc) |= 0x800;
                } else {
                    *(u32 *)(e + 0xc) &= ~0x800;
                }
            }
        }
    }
}

FieldGroundPiece::FieldGroundPiece() {
    unk_ac = -1;
    unk_b0 = -1;
    unk_9c.x = 0;
    unk_9c.y = 0;
    unk_9c.z = 0;
}

FieldGroundPiece::~FieldGroundPiece() {
}

s32 FieldGroundPiece::getCurveAngle() {
    return unk_a8;
}

Unk_ov003_02217910_V3 *FieldGroundPiece::getPos() {
    return &unk_9c;
}

s32 FieldGroundPiece::getBlockX() {
    return unk_ac;
}

s32 FieldGroundPiece::getBlockZ() {
    return unk_b0;
}

BOOL FieldGroundPiece::isActive() {
    if (getBlockX() != -1 && getBlockZ() != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::setup(Unk_ov003_02217910_V3 *pos, s32 idx) {
    if (isActive()) {
        return FALSE;
    }
    unk_9c.x = pos->x;
    unk_9c.y = pos->y;
    unk_9c.z = pos->z;
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)BgModelCache_getAcre(BgModelCache_Get(), sFieldGroundPieceAcres[idx]);
    s32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    Unk_020553f8_Res *res = e->unk_08;
    ((Model *)&unk_00)->setResourceAndBind(res, t);
    if (unk_b4[0].allocMatAnm((u32)res, gBgHeap)) {
        unk_b4[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_b4[0].addToRenderObj(((Model *)&unk_00)->getRenderObj());
    }
    if (unk_b4[1].allocMatAnm((u32)res, gBgHeap)) {
        unk_b4[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_b4[1].addToRenderObj(((Model *)&unk_00)->getRenderObj());
    }
    Unk_ov003_02217910_V3 tmp;
    unk_a8 = WorldCurve_ToCurved((Unk_ov003_02218478_V3 *)&tmp, (Unk_ov003_02218478_V3 *)&unk_9c);
    func_020e8388(data_021f47e0, unk_9c.x, 0, 0);
    func_020e8434(data_021f47e0, unk_a8);
    unk_00.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    unk_ac = pos->x >> 17;
    unk_b0 = pos->z >> 17;
    return TRUE;
}

BOOL FieldGroundPiece::updateAnims() {
    if (isActive()) {
        ModelAnim *p = &unk_b4[0];
        ModelAnim *e = &unk_b4[2];
        for (; p < e; p++) {
            p->step();
            *p->anmObj = p->curFrame;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::draw() {
    if (isActive()) {
        ((Model *)&unk_00)->drawScaled(0);
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::release() {
    if (isActive()) {
        ((Model *)&unk_00)->clearResource();
        unk_b0 = -1;
        unk_ac = unk_b0;
        return TRUE;
    }
    return FALSE;
}

FieldGroundBlock::FieldGroundBlock() {
    unk_00 = 0;
    unk_a0 = 0;
    unk_a4 = 0;
}

BOOL FieldGroundBlock::init(Unk_ov003_02217c3c_Obj *o, s32 a, s32 b) {
    unk_a0 = a;
    unk_a4 = b;
    unk_00 = MapBlockAcre_getAcreId(o);
    u32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    Unk_ov003_02217c3c_P *p = o->unk_20;
    u32 q = p->unk_20;
    if (q != 0) t = q;
    Unk_020553f8_Res *res = p->unk_08;
    ((Model *)&unk_04)->setResourceAndBind(res, t);
    if (unk_a8[0].allocMatAnm((u32)res, gBgHeap)) {
        unk_a8[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_a8[0].addToRenderObj(((Model *)&unk_04)->getRenderObj());
    }
    if (unk_a8[1].allocMatAnm((u32)res, gBgHeap)) {
        unk_a8[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        unk_a8[1].addToRenderObj(((Model *)&unk_04)->getRenderObj());
    }
    func_020e8388(data_021f47e0, a * data_020c8cbc, 0, 0);
    s16 ang = b * WorldCurve_GetAngleScale();
    func_020e8434(data_021f47e0, ang);
    unk_04.unk_64 = *(Unk_ov003_02215c7c_Blk *)data_021f47e0;
    if (Acre_GetAttr(unk_00) & 8) {
        unk_e8 = G3dResAccess_findMatIdx(res, (s32)"m_grd_beA");
        if (unk_e8 != -1) {
            ((Model *)&unk_04)->setInitCallback((s32)FieldGround_OnModelInit, (s32)this);
        }
    }
    FieldGround_SetWaterMatFlags(&unk_04, 1);
    return TRUE;
}

BOOL FieldGroundBlock::updateAnims() {
    ModelAnim *e;
    ModelAnim *p;
    p = &unk_a8[0];
    e = &unk_a8[2];
    for (; p < e; p++) {
        p->step();
        *p->anmObj = p->curFrame;
    }
    return TRUE;
}

BOOL FieldGroundBlock::draw() {
    ((Model *)&unk_04)->drawScaled(0);
    return TRUE;
}

BOOL FieldGroundBlock::release() {
    ((Model *)&unk_04)->clearResource();
    return TRUE;
}

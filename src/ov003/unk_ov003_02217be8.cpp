// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "Unk_020d8c7c.h"
#include "gfx/Mtx43.h"
#include "field/Unk_ov003_02217b78_Ent.h"
#include "gfx/AnimFrameCtrl.h"
#include "gfx/ModelAnim.h"
#include "gfx/TexPatVramAnim.h"
#include "field/FieldGroundBackdrop.h"
#include "gfx/Model.h"
#include "sys/ProcProfile.h"
#include "gfx/DebugColor.h"
#include "gfx/NNSG3dRS.h"
#include "town/Unk_0204e858_Grid.h"
#include "gfx/BgModelCache.h"

// TU19 of ov003: ground part classes 0x02217be8 / 0x02217dbc and the scene 0x02232418 (0x02217be8-0x022187f8)


struct NNSG3dResMdl;


// ---- main-module helper classes ----





// ---- this overlay's part classes ----


class FieldGroundBlock {
public:
    static void *operator new(unsigned long, void *p) { return p; }
    FieldGroundBlock();
    BOOL release();
    BOOL draw();
    BOOL updateAnims();
    BOOL init(TownBlockCell *o, s32 a, s32 b);

    /* 0x00 */ s32 acreId;
    /* 0x04 */ CachedModel model;
    /* 0xa0 */ s32 blockX;
    /* 0xa4 */ s32 blockZ;
    /* 0xa8 */ ModelAnim matAnims[2];
    /* 0xe8 */ s8 beachMatIdx;
};

class FieldGroundPiece {
public:
    FieldGroundPiece();
    ~FieldGroundPiece();
    BOOL release();
    BOOL draw();
    BOOL updateAnims();
    BOOL setup(VecFx32 *pos, s32 idx);
    BOOL isActive();
    s32 getBlockZ();
    s32 getBlockX();
    VecFx32 *getPos();
    s32 getCurveAngle();

    /* 0x00 */ CachedModel model;
    /* 0x9c */ VecFx32 position;
    /* 0xa8 */ s16 curveAngle;
    /* 0xac */ s32 blockX;
    /* 0xb0 */ s32 blockZ;
    /* 0xb4 */ ModelAnim matAnims[2];
};


struct SndEnvChannelStorage {
    u32 pad[0xc / 4];
};

struct GroundSoundSrcView {
    u32 pad[0x1c / 4];
};

class FieldGround : public GameProc {
public:
    /* 0x50 */ FieldGroundBlock *blocks;
    /* 0x54 */ FieldGroundPiece piece;
    /* 0x148 */ s32 numBlocksX;
    /* 0x14c */ s32 numBlocksZ;
    /* 0x150 */ FieldGroundBackdrop backdrop;
    /* 0x1f0 */ TexPatVramAnim riverPatAnim;
    /* 0x280 */ TexPatVramAnim beachPatAnim;
    /* 0x310 */ SndEnvChannelStorage envChannel;

    FieldGround();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~FieldGround();
    void updateAmbientSe();
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
#define Camera_getEyeCurveAngle _ZN6Camera16getEyeCurveAngleEv
#define TexPatVramAnim_init _ZN14TexPatVramAnim4initEPhPKcS2_S0_S0_h

extern "C" {
extern void *gCamera;
extern VecFx32Ctor gCameraLookAt;
extern void *gBgHeap;
extern Unk_0204e858_Grid *gSceneBlockMap;
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
s32 Camera_getEyeCurveAngle(void *self);
void Camera_GetLookAtBlock(void *, s32 *, s32 *);
s32 WorldCurve_AngleToDistance(s32);
s16 WorldCurve_ToCurved(VecFx32Ctor *out, VecFx32Ctor *v);
s32 WorldCurve_GetAngleScale();
void FieldUnit_FromBlockUnit(s32 *, s32 *, s32, s32, s32, s32);
s32 Ground_GetSpecialPieceKind(s32, s32);
void FieldPos_FromBlockUnitCenter(VecFx32Ctor *, s32, s32, s32, s32);
void *Heap_Alloc(void *, s32);
void Mtx43_SetTranslate(void *m, s32 x, s32 y, s32 z);
void Mtx43_RotateX(void *m, s32 a);
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
void FieldGround_FindSoundSrc(void *out, VecFx32Ctor *pos);
s32 FieldGround_ReleaseBackdrop(void *p);
s32 FieldGround_DrawBackdrop(void *p);

}


extern "C" FieldGround *FieldGround_Create();

extern "C" {
// the six header colours first (in __sinit store order), then the unit's own data
DebugColor data_ov003_022354a4(31, 20, 20, 31);
DebugColor data_ov003_022354a8(20, 20, 31, 31);
DebugColor data_ov003_02235498(31, 31, 20, 31);
DebugColor data_ov003_022354a0(20, 31, 20, 31);
DebugColor data_ov003_0223549c(20, 31, 31, 31);
DebugColor data_ov003_022354ac(20, 24, 24, 31);
const s32 sFieldGroundPieceAcres[2] = {0x84, 0x85};
u8 data_ov003_02235490;
s32 data_ov003_02235494;
char data_ov003_022323f4[0xc] = "m_grd_riv";
char data_ov003_02232400[0x10] = "m_grd_sea085";
u32 sWaterMatNames[2] = {(u32)data_ov003_022323f4, (u32)data_ov003_02232400};
ProcProfile sFieldGroundProfile = {(void *(*)())FieldGround_Create, 0xd, 0x9};
}

// ---- functions ----

extern "C" FieldGround *FieldGround_Create() {
    return new FieldGround;
}

extern "C" void FieldGround_OnBeachMaterial(NNSG3dRS *rs) {
    if (data_ov003_02235494 == 0) {
        NNSG3dRenderObj *in = rs->pRenderObj;
        FieldGroundBlock *blk = (FieldGroundBlock *)in->ptrUser;
        u8 b = rs->c[1]; // material id of the SBC MAT command
        if (blk != 0) {
            if (blk->beachMatIdx == b) {
                FX_Div(rs->pMatAnmResult->transT + 0xda2, 0xda2);
                Ground_SetWaveLevel();
                data_ov003_02235494 = 1;
            }
        }
    }
}

extern "C" void FieldGround_OnModelInit(NNSG3dRS *rs) {
    rs->cbVecFunc[4] = (void *)FieldGround_OnBeachMaterial; // NNS_G3D_SBC_MAT
    rs->cbVecTiming[4] = 2;
}

FieldGround::FieldGround() {
    FieldGround_InitEnvChannel(&envChannel);
}

FieldGround::~FieldGround() {
    FieldGround_DestroyEnvChannel(&envChannel);
}

BOOL FieldGround::onCreate() {
    backdrop.clear();
    backdrop.init();
    s32 r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    s32 r4 = BgModelCache_getRiverPatTex(BgModelCache_Get());
    s32 r0 = BgModelCache_getRiverPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&riverPatAnim, (void *)r6, "grd_riv.0", "grd_riv_pl", r4, r0, 0);
    r6 = BgModelCache_getGroundTex(BgModelCache_Get());
    r4 = BgModelCache_getBeBPatTex(BgModelCache_Get());
    r0 = BgModelCache_getBeBPatAnm(BgModelCache_Get());
    TexPatVramAnim_init(&beachPatAnim, (void *)r6, "grd_beB", "grd_beB_pl", r4, r0, 1);
    Unk_0204e858_Grid *g = gSceneBlockMap;
    numBlocksX = g->width;
    numBlocksZ = g->height;
    blocks = (FieldGroundBlock *)Heap_Alloc(gBgHeap, numBlocksZ * (numBlocksX * 0xec));
    {
        FieldGroundBlock *e = blocks;
        for (; e < blocks + numBlocksX * numBlocksZ; e++) {
            e = new (e) FieldGroundBlock;
        }
    }
    u32 by, bx;
    u32 tx, ty;
    for (by = 0; by < numBlocksZ; by++) {
        for (bx = 0; bx < numBlocksX; bx++) {
            for (ty = 0; ty < 16; ty++) {
                for (tx = 0; tx < 16; tx++) {
                    s32 o1, o2;
                    FieldUnit_FromBlockUnit(&o1, &o2, bx, by, tx, ty);
                    s32 t = Ground_GetSpecialPieceKind(o1, o2);
                    if (t != -1) {
                        VecFx32 v;
                        v.x = 0;
                        v.y = 0;
                        v.z = 0;
                        FieldPos_FromBlockUnitCenter((VecFx32Ctor *)&v, bx, by, tx, ty);
                        piece.setup(&v, t);
                    }
                }
            }
        }
    }
    s32 idx = 0;
    for (bx = 0; bx < numBlocksZ; bx++) {
        for (by = 0; by < numBlocksX; by++) {
            TownBlockCell *c;
            if (by < g->width && bx < g->height && g->blocks != 0) {
                c = &g->blocks[bx * g->width + by];
            } else {
                c = 0;
            }
            (blocks + idx++)->init(c, by, bx);
        }
    }
    FieldGround_ResetEnvChannel(&envChannel);
    return TRUE;
}

BOOL FieldGround::onExecute() {
    FieldGroundBlock *e;
    s32 i, j;
    backdrop.followCamera();
    piece.updateAnims();
    e = blocks;
    i = 0;
    goto test0;
loop0:
    {
        j = 0;
        s32 *volatile pw = &numBlocksX;
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
    if (i < numBlocksZ) goto loop0;
    riverPatAnim.update();
    beachPatAnim.update();
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
    b = ((s32 *)piece.getPos())[2];
    cam_r = 0;
    cam = gCamera;
    if (cam != 0) {
        cam_r = Camera_getEyeCurveAngle(cam);
        Camera_GetLookAtBlock(cam, &cx, &cy);
        a = WorldCurve_AngleToDistance(cam_r);
    }
    found = 0;
    for (y = 0; y < numBlocksZ; y++) {
        for (x = 0; x < numBlocksX; x++) {
            BOOL r = FALSE;
            r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
            if (r) {
                if (x == piece.getBlockX() && y == piece.getBlockZ()) {
                    found = 1;
                }
            }
        }
    }
    if (found == 0) {
        FieldGround_DrawBackdrop(&backdrop);
    }
    if (found == 0) {
        idx = 0;
        for (y = 0; y < numBlocksZ; y++) {
            for (x = 0; x < numBlocksX; x++) {
                BOOL r = FALSE;
                r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                if (r) (blocks + idx)->draw();
                idx++;
            }
        }
    } else {
        if (piece.getCurveAngle() < cam_r) {
            if (b < a) {
                piece.draw();
                FieldGround_DrawBackdrop(&backdrop);
            } else {
                FieldGround_DrawBackdrop(&backdrop);
                piece.draw();
            }
            idx = 0;
            for (y = 0; y < numBlocksZ; y++) {
                for (x = 0; x < numBlocksX; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (blocks + idx)->draw();
                    idx++;
                }
            }
        } else {
            FieldGround_DrawBackdrop(&backdrop);
            idx = 0;
            for (y = 0; y < numBlocksZ; y++) {
                for (x = 0; x < numBlocksX; x++) {
                    BOOL r = FALSE;
                    r = Unk_ov003_022181bc_Chk(x, y, cx, cy);
                    if (r) (blocks + idx)->draw();
                    idx++;
                }
            }
            piece.draw();
        }
    }
    return TRUE;
}

BOOL FieldGround::onDelete() {
    s32 i, j;
    s32 idx;
    piece.release();
    idx = 0;
    for (i = 0; i < numBlocksZ; i++) {
        for (j = 0; j < numBlocksX; j++) {
            (blocks + idx++)->release();
        }
    }
    FieldGround_ReleaseBackdrop(&backdrop);
    FieldGround_ReleaseEnvChannel(&envChannel);
    return TRUE;
}

void FieldGround::updateAmbientSe() {
    data_ov003_02235490 = 0;
    if (gCamera != 0) {
        VecFx32Ctor v = gCameraLookAt;
        GroundSoundSrcView q;
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
            FieldGround_PlayEnvSe(&envChannel, r6, r4);
        }
        FieldGround_EndSoundSrc(&q);
    }
}

extern "C" void FieldGround_SetWaterMatFlags(Model *o, s32 flag) {
    u32 i;
    u8 *base = (u8 *)o->resMdl;
    u8 *r4 = base + *(s32 *)(base + 8);
    for (i = 0; i < 2; i++) {
        u32 t = G3dResAccess_findMatIdx(o->resMdl, sWaterMatNames[i]);
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
    blockX = -1;
    blockZ = -1;
    position.x = 0;
    position.y = 0;
    position.z = 0;
}

FieldGroundPiece::~FieldGroundPiece() {
}

s32 FieldGroundPiece::getCurveAngle() {
    return curveAngle;
}

VecFx32 *FieldGroundPiece::getPos() {
    return &position;
}

s32 FieldGroundPiece::getBlockX() {
    return blockX;
}

s32 FieldGroundPiece::getBlockZ() {
    return blockZ;
}

BOOL FieldGroundPiece::isActive() {
    if (getBlockX() != -1 && getBlockZ() != -1) {
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::setup(VecFx32 *pos, s32 idx) {
    if (isActive()) {
        return FALSE;
    }
    position.x = pos->x;
    position.y = pos->y;
    position.z = pos->z;
    Unk_ov003_02217b78_Ent *e = (Unk_ov003_02217b78_Ent *)BgModelCache_getAcre(BgModelCache_Get(), sFieldGroundPieceAcres[idx]);
    s32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    NNSG3dResMdl *res = e->modelRes;
    ((Model *)&model)->setResourceAndBind(res, t);
    if (matAnims[0].allocMatAnm((u32)res, gBgHeap)) {
        matAnims[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        matAnims[0].addToRenderObj((u32)((Model *)&model)->getRenderObj());
    }
    if (matAnims[1].allocMatAnm((u32)res, gBgHeap)) {
        matAnims[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        matAnims[1].addToRenderObj((u32)((Model *)&model)->getRenderObj());
    }
    VecFx32 tmp;
    curveAngle = WorldCurve_ToCurved((VecFx32Ctor *)&tmp, (VecFx32Ctor *)&position);
    Mtx43_SetTranslate(data_021f47e0, position.x, 0, 0);
    Mtx43_RotateX(data_021f47e0, curveAngle);
    *(Mtx43 *)((u8 *)&model + 0x64) = *(Mtx43 *)data_021f47e0;
    blockX = pos->x >> 17;
    blockZ = pos->z >> 17;
    return TRUE;
}

BOOL FieldGroundPiece::updateAnims() {
    if (isActive()) {
        ModelAnim *p = &matAnims[0];
        ModelAnim *e = &matAnims[2];
        for (; p < e; p++) {
            p->step();
            *(s32 *)p->anmObj = p->curFrame;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::draw() {
    if (isActive()) {
        ((Model *)&model)->drawScaled(0);
        return TRUE;
    }
    return FALSE;
}

BOOL FieldGroundPiece::release() {
    if (isActive()) {
        ((Model *)&model)->clearResource();
        blockZ = -1;
        blockX = blockZ;
        return TRUE;
    }
    return FALSE;
}

FieldGroundBlock::FieldGroundBlock() {
    acreId = 0;
    blockX = 0;
    blockZ = 0;
}

BOOL FieldGroundBlock::init(TownBlockCell *o, s32 a, s32 b) {
    blockX = a;
    blockZ = b;
    acreId = MapBlockAcre_getAcreId(o);
    u32 t = BgModelCache_getGroundTex(BgModelCache_Get());
    BgAcreModel *p = o->bgModel;
    u32 q = (u32)p->tex;
    if (q != 0) t = q;
    NNSG3dResMdl *res = (NNSG3dResMdl *)p->mdl;
    ((Model *)&model)->setResourceAndBind(res, t);
    if (matAnims[0].allocMatAnm((u32)res, gBgHeap)) {
        matAnims[0].init(BgModelCache_getGroundMatAnm(BgModelCache_Get()), 0, 0x1000, 0);
        matAnims[0].addToRenderObj((u32)((Model *)&model)->getRenderObj());
    }
    if (matAnims[1].allocMatAnm((u32)res, gBgHeap)) {
        matAnims[1].init(BgModelCache_getGroundTexSrtAnm(BgModelCache_Get()), 0, 0x1000, 0);
        matAnims[1].addToRenderObj((u32)((Model *)&model)->getRenderObj());
    }
    Mtx43_SetTranslate(data_021f47e0, a * data_020c8cbc, 0, 0);
    s16 ang = b * WorldCurve_GetAngleScale();
    Mtx43_RotateX(data_021f47e0, ang);
    *(Mtx43 *)((u8 *)&model + 0x64) = *(Mtx43 *)data_021f47e0;
    if (Acre_GetAttr(acreId) & 8) {
        beachMatIdx = G3dResAccess_findMatIdx(res, (s32)"m_grd_beA");
        if (beachMatIdx != -1) {
            ((Model *)&model)->setInitCallback((s32)FieldGround_OnModelInit, (s32)this);
        }
    }
    FieldGround_SetWaterMatFlags(&model, 1);
    return TRUE;
}

BOOL FieldGroundBlock::updateAnims() {
    ModelAnim *e;
    ModelAnim *p;
    p = &matAnims[0];
    e = &matAnims[2];
    for (; p < e; p++) {
        p->step();
        *(s32 *)p->anmObj = p->curFrame;
    }
    return TRUE;
}

BOOL FieldGroundBlock::draw() {
    ((Model *)&model)->drawScaled(0);
    return TRUE;
}

BOOL FieldGroundBlock::release() {
    ((Model *)&model)->clearResource();
    return TRUE;
}

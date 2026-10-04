// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"
#include "gfx/Unk_0203bd10_Dtcm.h"
#include "actor/VillagerActor.h"
#include "game/Unk_021c47c4.h"
#include "gfx/CameraPose.h"
#include "gfx/CameraSetup.h"
#include "gfx/FxMtx43.h"
#include "sys/CameraBase.h"
#include "gfx/Camera.h"
#include "sys/ProcProfile.h"
#include "gfx/Unk_ov068_0226647c_Cam.h"

typedef Unk_0203b350_V V3;
typedef Unk_0203b350_V Unk_0203a148_Vec;
typedef Unk_0203b350_V Unk_0203a9b8_Vec;
typedef Unk_0203b350_V Unk_0203c0b0_Vec;

struct FxVec3 : Unk_0203b350_V {
    FxVec3() {}
    ~FxVec3();
};

struct MtxFx43 {
    s32 m[12];
};




struct SceneInfoView {
    u8 pad[4];
    u8 isOutdoor;
};

struct CameraPoseGridRow {
    s32 v[3];
};

struct CameraShakeParam {
    s32 len;
    s16 ang, vel;
};


struct GxColorRgba {
    u8 v[4];
    GxColorRgba(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};









#define M(T, o) (*(T *)((u8 *)this + (o)))

class Camera;
typedef BOOL (Camera::*CameraModeInitFn)();
typedef void (Camera::*CameraModeUpdateFn)();
struct CameraModeEntry {
    CameraModeInitFn init;
    CameraModeUpdateFn update;
};


static inline BOOL Unk_0203c23c_InRange(u16 c, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (c >= lo && c <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0203c23c_InRangeP(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_0203c23c_Idx(u16 c, u32 lo, u32 hi) {
    if (Unk_0203c23c_InRange(c, lo, hi)) return c - lo;
    return -1;
}

static inline s32 Unk_0203c23c_None() {
    return Unk_0203c23c_Idx(0, 1, 0);
}

#define R096_TAIL(V) \
    updateBlend(); \
    Camera_GetLookAtPoint(&V, this); \
    s32 a = getPitch(); \
    s32 b = getYaw(); \
    setLookAtOrbit(&V, a, b, getDistance());

// ---- externals ----
extern "C" {
extern Camera *gCamera;
extern MtxFx43 data_021f47e0;
extern s32 sCameraSpanDepthScale;
extern s32 sCameraFollowVillagerIdx;
extern s16 data_02135f44[];
extern Unk_0203a9b8_Vec gVec3Zero;
extern SceneInfoView *gCurSceneInfo;
extern const CameraPoseGridRow sCameraPoseGrid[3];
extern s32 data_020c8cb8;
extern Unk_021c47c4 *gSceneBlockMap;
extern u8 gViewFrustum[];
extern u32 gWorldCurve[];
extern u32 data_021c3240;
extern u16 data_021c323c;
extern u8 data_020d9400[];
extern u32 data_027e0148[];
extern Unk_0203bd10_Dtcm data_027e02c8;
extern u32 data_027e00d0[];
extern u32 data_027e0114[];
}
extern CameraModeEntry sCameraModeTable[];
extern const u32 sCameraBlendTable[6][4];
extern const CameraPose sCameraPoseTable[33];
extern FxVec3 gCameraLookAt;
extern FxVec3 gCameraEye;
extern FxVec3 sCameraSavedEye;
extern CameraSetup sCameraSavedSetup;
extern s32 gCameraDistance;

extern "C" {
s32 WorldCurve_Apply(void *p, void *q);
void MTX_MultVec43(void *in, void *m, void *out);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void Vec_Scale(void *v, s32 s);
void Snd_PlaySe(s32 a);
void Camera_GetLookAtPoint(void *out, void *o);
void Camera_SetSwayPattern(void *o, s32 a);
V3 *PlayerActor_GetBodyPos(s32 a);
s32 Scene_GetCurrent();
void Vec_Sub(void *out, void *a, void *b);
void func_01ffd070(void *out, void *a, void *b);
void Vec_ShiftRightTo(void *out, void *in, s32 s);
s32 VEC_Mag(void *v);
void MTX_MultVec33(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
void Math_StepS16(s16 *p, s32 a, s32 b);
void Math_ApproachS32(s32 *p, s32 a, s32 b, s32 c, s32 d);
void *PlayerActor_GetTrackTarget(s32 id);
s32 Vec_MagXZ(void *v);
s32 Math_AngleXZ(void *a, void *b);
void Vec_RotateX(void *v, s32 a);
void Vec_RotateY(void *v, s32 a);
s32 MenuCtrl_GetTransitionProgress();
s32 Scene_InHouseRoom();
s32 Scene_InVillagerHouse();
s32 Scene_InMuseumRoom();
s32 Camera_UpdateSway(void *self);
void Camera_UpdateRoomFocus(void *self, s32 a);
void FieldCamera_UpdateFocusZoom(void *self);
BOOL Vec_SafeNormalize(void *v);
void Vec_RotateZ(void *v, s32 a);
s32 WorldCurve_GetHorizonAngle(void *p);
s32 Math_EaseRampProgress(s32, s32, s32, s32, s32);
s32 FX_Inv(s32);
s32 Ground_GetFloorBounds(s32 *, s32 *, s32 *, s32 *);
s32 _ZN12MapBlockAcre9getAcreIdEv(u32);
void _ZN11ViewFrustum14setPerspectiveEitii(void *, s32, s32, s32, s32);
void MTX_Inverse43(void *a, void *b);
void Vec_ScaleTo(void *out, void *a, s32 n);
void G3i_PerspectiveW_(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h);
void G3i_LookAt_(void *a, void *b, void *c, s32 d, void *e);
void WorldCurve_Update(void *a, void *b);
s32 NpcRegistry_PickRandomVillager(s32 a);
VillagerActor *NpcRegistry_GetVillager(s32 i);
void *PlayerData_GetCurrent();
s32 _ZN12Unk_02097ff48testFlagEj(void *s, s32 a);
void *Scene_GetPrevious();
s32 SceneId_IsHouseRoom(void *a);
s32 NNS_G3dGetTex();
void func_02135558(void *a, void *b, void *c);
BOOL File_LoadToBufferF(u32 a, s32 b, void *s, s32 idx);
void *func_020986c8(void *s);
BOOL Catalog_AddItem(void *a, u16 *p, s32 c);
BOOL Catalog_SetItem(u8 *base, u16 *p, s32 skip, s32 set);
BOOL Catalog_HasItem(u8 *base, u16 *p);
u8 *Catalog_GetBit(u8 *base, u8 *out, u16 *p);
s32 Catalog_CountRange(u16 base, u32 n);
s32 Catalog_CountInsects();
s32 Catalog_CountFish();
s32 Catalog_GetInsectTotal();
s32 Catalog_GetFishTotal();
void Item_ToPlacedForm(u16 *out, u16 *in, s32 n);
BOOL Item_IsNormalItem(u16 *p);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetPaperIndex(u16 *p);
s32 Item_MakeFurniture(s32 a, s32 b);
BOOL Item_TestInfoFlag3(u16 *p);
}

extern "C" void Camera_UpdateMode20();
extern "C" void _ZN6Camera13initModeShakeEv();
extern "C" void Camera_UpdateMode16();
extern "C" void Camera_InitMode11();
extern "C" void Camera_InitMode12();
extern "C" void _ZN6Camera15initModeDefaultEv();
extern "C" void _ZN16CameraEventModes10initMode13Ev();
extern "C" void Camera_UpdateMode18();
extern "C" void _ZN16CameraEventModes12updateMode13Ev();
extern "C" void Camera_UpdateMode12();
extern "C" void _ZN6Camera9initMode4Ev();
extern "C" void Camera_InitMode18();
extern "C" void Camera_InitMode14();
extern "C" void Camera_InitMode10();
extern "C" void _ZN16CameraEventModes14updateModeSwayEv();
extern "C" void _ZN16CameraEventModes12initModeSwayEv();
extern "C" void _ZN16CameraEventModes18updateModeTownTourEv();
extern "C" void Camera_UpdateMode14();
extern "C" void _ZN6Camera19updateModeTrackPairEv();
extern "C" void _ZN6Camera15initModeRestoreEv();
extern "C" void Camera_InitMode15();
extern "C" void _ZN6Camera17initModeTrackPairEv();
extern "C" void _ZN6Camera11updateMode4Ev();
extern "C" void _ZN6Camera17updateModeRestoreEv();
extern "C" void _ZN6Camera11updateMode3Ev();
extern "C" void _ZN6Camera9initMode3Ev();
extern "C" void _ZN6Camera15updateModeFocusEv();
extern "C" void _ZN6Camera13initModeFocusEv();
extern "C" void _ZN6Camera11updateMode1Ev();
extern "C" void _ZN6Camera9initMode1Ev();
extern "C" void _ZN6Camera17updateModeDefaultEv();
extern "C" void SslCert_MatchHostName();
extern "C" void Camera_UpdateMode15();
extern "C" void _ZN16CameraEventModes22updateModeFollowTargetEv();
extern "C" void Camera_UpdateMode11();
extern "C" void _ZN16CameraEventModes16initModeTownTourEv();
extern "C" void Camera_InitMode16();
extern "C" void Camera_UpdateMode10();
extern "C" void Camera_InitMode20();
extern void *data_020d9258[2];
extern void *data_020d9260[2];
extern void *data_020d9268[2];
extern void *data_020d9270[2];
extern void *data_020d9278[2];
extern void *data_020d9280[2];
extern void *data_020d9290[2];
extern void *data_020d9298[2];
extern void *data_020d92a0[2];
extern void *data_020d92a8[2];
extern void *data_020d92b0[2];
extern void *data_020d92b8[2];
extern void *data_020d92c0[2];
extern void *data_020d92c8[2];
extern void *data_020d92d0[2];
extern void *data_020d92d8[2];
extern void *data_020d92e0[2];
extern void *data_020d92e8[2];
extern void *data_020d92f0[2];
extern void *data_020d92f8[2];
extern void *data_020d9300[2];
extern void *data_020d9308[2];
extern void *data_020d9310[2];
extern void *data_020d9318[2];
extern void *data_020d9320[2];
extern void *data_020d9328[2];
extern void *data_020d9330[2];
extern void *data_020d9338[2];
extern void *data_020d9340[2];
extern void *data_020d9348[2];
extern void *data_020d9350[2];
extern void *data_020d9358[2];
extern void *data_020d9360[2];
extern void *data_020d9368[2];
extern void *data_020d9370[2];
extern void *data_020d9378[2];
extern void *data_020d9380[2];
extern void *data_020d9388[2];
extern void *data_020d9390[2];
extern void *data_020d9398[2];
extern void *data_020d93a0[2];
extern void *data_020d93a8[2];

// ---- own plain functions (file unk_0203a058) ----
extern "C" {
BOOL Camera_SetModeDefault(void);
MtxFx43 *Camera_GetViewMatrix(void);
void Camera_StartBlend(void);
void Camera_FinishBlend(void);
s32 Camera_CalcPointSpan(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d);
s32 Camera_CalcTriangleSpan(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e);
BOOL Camera_ProjectToScreen(s32 *x, s32 *y, Unk_0203a148_Vec *p);
BOOL Camera_IsBlending(void);
void Camera_RestoreView(void);
void Camera_PlaySe(Camera *o, s32 a);
void Camera_GetLookAtBlock(s32 a, s32 *x, s32 *z);
}

// ---- members called from the plain functions (explicit object argument; names filled by the build script) ----
extern "C" {
s32 _ZN6Camera9getFovTanEv(Camera *o);
s32 _ZN6Camera11getDistanceEv(Camera *o);
s32 _ZN6Camera6getYawEv(Camera *o);
s32 _ZN6Camera8getPitchEv(Camera *o);
s32 _ZN6Camera11getBlendEndEv(Camera *o);
void _ZN6Camera16setFocusPreset11EPhP14Unk_0203b350_V(Camera *o, CameraSetup *c, s32 a);
void _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(Camera *o, void *a, s32 b, s32 c, s32 d);
void _ZN6Camera7popViewEv(Camera *o);
void _ZN6Camera8pushViewEv(Camera *o);
s32 _ZN6Camera7setModeEi(Camera *o, s32 a);
void _ZN6Camera11updateBlendEv(Camera *o);
void _ZN6Camera11dragFocusToEP14Unk_0203b350_V(Camera *o, void *a);
void _ZN6Camera8loadPoseEiP10CameraPose(Camera *o, s32 a, s32 b);
void _ZN6Camera14setBlendPresetEi(Camera *o, s32 a);
}

extern "C" s32 CarpetTex_GetTex() {
    return NNS_G3dGetTex();
}

CameraSetup::~CameraSetup() {}

extern "C" Camera *Camera_Create() {
    return new Camera();
}

void Camera::loadPose(s32 i, CameraPose *out) {
    if (!out) out = &target;
    out->x = sCameraPoseTable[i].x;
    out->y = sCameraPoseTable[i].y;
    out->z = sCameraPoseTable[i].z;
    out->w0 = sCameraPoseTable[i].w0;
    out->h1 = sCameraPoseTable[i].h1;
    out->h0 = sCameraPoseTable[i].h0;
}

void Camera::lerpPoses(s32 a, s32 b, s32 n) {
    Unk_0203c0b0_Vec d, q;
    d.x = sCameraPoseTable[b].x - sCameraPoseTable[a].x;
    d.y = sCameraPoseTable[b].y - sCameraPoseTable[a].y;
    d.z = sCameraPoseTable[b].z - sCameraPoseTable[a].z;
    target.x = sCameraPoseTable[a].x;
    target.y = sCameraPoseTable[a].y;
    target.z = sCameraPoseTable[a].z;
    s32 w = sCameraPoseTable[a].w0;
    target.w0 = w;
    s16 h1 = sCameraPoseTable[a].h1;
    target.h1 = h1;
    s16 h0 = sCameraPoseTable[a].h0;
    target.h0 = h0;
    Vec_ScaleTo(&q, &d, n);
    VEC_Add(&target.x, &q, &target.x);
    target.w0 += func_01ffcb0c(sCameraPoseTable[b].w0 - w, n);
    target.h1 = target.h1 + (s16)func_01ffcb0c((s16)(sCameraPoseTable[b].h1 - h1), n);
    target.h0 = target.h0 + (s16)func_01ffcb0c((s16)(sCameraPoseTable[b].h0 - h0), n);
}

void Camera::setBlendPreset(s32 i) {
    setBlendParams((u32 *)sCameraBlendTable[i]);
}

void Camera::setBlendParams(u32 *src) {
    blendDelay = src[0];
    blendEnd = src[1];
    blendEaseIn = src[2];
    blendEaseOut = src[3];
}

BOOL Camera::onCreate() {
    gCamera = (Camera *)this;
    resetOffsets();
    presetCol = 1;
    presetRow = 1;
    fovy = 0x1555;
    closeUpFactorTarget = 0;
    closeUpFactor = 0;
    mode = prevMode = 0;
    if (setMode(0)) {
        CameraPose *p = (CameraPose *)PlayerActor_GetBodyPos(4);
        if (p) {
            targetFocus.x = ((s32 *)p)[0];
            targetFocus.y = ((s32 *)p)[1];
            targetFocus.z = ((s32 *)p)[2];
        }
    }
    calcRoomBounds();
    s32 r = Scene_GetCurrent();
    if (r == 9) {
        sCameraSpanDepthScale = 0x1000;
    } else {
        sCameraSpanDepthScale = 0x1800;
    }
    switch (r) {
    case 0x2c: {
        VillagerActor *p = 0;
        s32 *g = &sCameraFollowVillagerIdx;
        s32 i = *g;
        if (i == 8) {
            p = (VillagerActor *)NpcRegistry_PickRandomVillager((s32)g);
        } else {
            i = i + 1;
            if (i == 8) {
                i = (s32)p;
            } else {
                while (i != sCameraFollowVillagerIdx) {
                    p = NpcRegistry_GetVillager(i);
                    if (p) {
                        if (p->isPickable()) break;
                    }
                    i++;
                    if (i == 8) {
                        i = 0;
                        break;
                    }
                }
            }
            sCameraFollowVillagerIdx = i;
        }
        if (p) {
            modeParam = (s32)p;
            setMode(7);
        } else {
            sCameraFollowVillagerIdx = 8;
            setMode(8);
        }
        break;
    }
    case 0x2d:
        setMode(9);
        break;
    case 6:
        setMode(0xa);
        break;
    case 13:
    case 14:
    case 0x2f:
        setMode(0xe);
        break;
    case 12:
        setMode(6);
        break;
    case 0: {
        void *s = PlayerData_GetCurrent();
        if (s) {
            if (_ZN12Unk_02097ff48testFlagEj(s, 0x23)) {
                if (SceneId_IsHouseRoom(Scene_GetPrevious()) != 0 || (s32)Scene_GetPrevious() == 6) setMode(0xd);
            }
        }
        break;
    }
    }
    onDraw();
    prevMode = mode;
    startMode = prevMode;
    Camera_FinishBlend();
    return TRUE;
}

BOOL Camera::onExecute() {
    s32 v[4];
    updateMode();
    Camera_GetLookAtPoint(v, this);
    WorldCurve_Update(gWorldCurve, v);
    return TRUE;
}

BOOL Camera::onDraw() {
    s32 i = fovy >> 5;
    s32 k = i * 2;
    G3i_PerspectiveW_(data_02135f44[k], data_02135f44[k + 1], aspect, nearClip, farClip, 0x1000, 1, 0);
    G3i_LookAt_(&lookEye, &lookUp, &lookTarget, 1, (u8 *)this + 0x50);
    MTX_Inverse43((u8 *)this + 0x50, (u8 *)this + 0xcc);
    s32 j = (s16)(fovy + fovyOffset) >> 5;
    s32 m = j * 2;
    G3i_PerspectiveW_(data_02135f44[m], data_02135f44[m + 1], aspect, nearClip + nearOffset, farClip + farOffset, 0x1000, 0,
                  (u32)data_027e00d0);
    data_027e0148[0x7c / 4] &= ~0x50;
    data_027e02c8.a = lookEye;
    data_027e02c8.b = lookEyeY;
    data_027e02c8.c = lookEyeZ;
    data_027e02c8.d = lookUp;
    data_027e02c8.e = lookUpY;
    data_027e02c8.f = lookUpZ;
    data_027e02c8.g = lookTarget;
    data_027e02c8.h = lookTargetY;
    data_027e02c8.i = lookTargetZ;
    G3i_LookAt_(&lookEye, &lookUp, &lookTarget, 0, data_027e0114);
    data_027e0148[0x7c / 4] &= ~0xe8;
    return CameraBase::onDraw();
}

BOOL Camera::onDelete() {
    gCamera = 0;
    return TRUE;
}

void Camera::resetOffsets() {
    distanceOffset = 0;
    pitchOffset = 0;
    yawOffset = 0;
    unk_84 = 0;
    unk_88 = 0;
    unk_8c = 0;
    fovyOffset = 0;
    nearOffset = 0;
    farOffset = 0;
    followSlackOffset = 0;
    blendDelayOffset = 0;
    blendEndOffset = 0;
    blendEaseInOffset = 0;
    blendEaseOutOffset = 0;
}

V3 *Camera::getEye() {
    return (V3 *)((u8 *)this + 0x168);
}

s16 Camera::getEyeCurveAngle() {
    return eyeCurveAngle;
}

s16 Camera::getPitch() {
    return currentPitch + pitchOffset;
}

s16 Camera::getYaw() {
    return current + yawOffset;
}

s32 Camera::getFollowSlack() {
    return (s32)((u8 *)followSlackOffset + 0xf0a);
}

s32 Camera::getDistance()
{
    return M(s32, 0x14c) + M(s32, 0x80);
}

s32 Camera::getFovTan()
{
    return M(s32, 0x1c4);
}

s32 Camera::getBlendDelay()
{
    s32 r = M(s32, 0xb8) + M(s32, 0xa8);
    if (r < 0) r = 0;
    return r;
}

s32 Camera::getBlendEnd()
{
    s32 a = getBlendEaseOut();
    s32 b = getBlendDelay();
    s32 tot = a + (b + getBlendEaseIn());
    if (M(s32, 0xbc) < tot) M(s32, 0xbc) = tot;
    s32 t = M(s32, 0xbc) + M(s32, 0xac);
    if (t >= tot) tot = t;
    return tot;
}

s32 Camera::getBlendEaseIn()
{
    s32 r = M(s32, 0xc0) + M(s32, 0xb0);
    if (r < 0) r = 0;
    return r;
}

s32 Camera::getBlendEaseOut()
{
    s32 r = M(s32, 0xc4) + M(s32, 0xb4);
    if (r < 0) r = 0;
    return r;
}

void Camera::setFovy(s32 a)
{
    M(s16, 0x1c8) = a;
    s32 i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1bc) = data_02135f44[i * 2];
    i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1c0) = data_02135f44[i * 2 + 1];
    M(s32, 0x1c4) = func_01ffcb0c(M(s32, 0x1bc), FX_Inv(M(s32, 0x1c0)));
    _ZN11ViewFrustum14setPerspectiveEitii(gViewFrustum, M(s32, 0x1b0), (s16)(M(s16, 0x1c8) + M(s16, 0x98)), M(s32, 0x1b4) + M(s32, 0x90),
                  M(s32, 0x1b8) + M(s32, 0x94));
}

void Camera::updateEyeCurveAngle()
{
    M(s16, 0x1ac) = WorldCurve_GetHorizonAngle(&M(u8, 0x194));
}

extern "C" void Camera_GetLookAtBlock(s32 a, s32 *x, s32 *z)
{
    V3 t;
    Camera_GetLookAtPoint(&t, (void *)a);
    *x = t.x >> 17;
    *z = t.z >> 17;
}

void Camera::calcRoomBounds()
{
    if (gCurSceneInfo->isOutdoor == 0) {
        Ground_GetFloorBounds(&M(s32, 0x178), &M(s32, 0x17c), &M(s32, 0x180), &M(s32, 0x184));
        s32 m = data_020c8cb8;
        if (M(s32, 0x184) < m) {
            M(s32, 0x184) = m;
        }
    }
    if (Scene_GetCurrent() == 0x29) {
        M(s32, 0x17c) += 0x4000;
        M(s32, 0x184) += 0x4000;
    } else {
        Unk_021c47c4 *g = gSceneBlockMap;
        u32 arg;
        if ((u32 *)g->width > (u32 *)0 && (u32 *)g->height > (u32 *)0 && g->blocks != 0) {
            arg = g->blocks;
        } else {
            arg = 0;
        }
        switch (_ZN12MapBlockAcre9getAcreIdEv(arg) - 0x1009) {
        case 0:
        case 3:
            M(s32, 0x178) += 0x2000;
            break;
        case 1:
            M(s32, 0x17c) -= 0x2000;
            break;
        case 2:
        case 4:
            M(s32, 0x178) += 0x2000;
            M(s32, 0x17c) -= 0x2000;
            break;
        }
    }
}

BOOL Camera::clampToRoomBounds(s32 *p)
{
    BOOL r = FALSE;
    if (M(s32, 0x17c) - M(s32, 0x178) <= 0xa000) {
        p[0] = (M(s32, 0x17c) + M(s32, 0x178)) >> 1;
        r = TRUE;
    } else if (p[0] < M(s32, 0x178) + 0x5000) {
        p[0] = M(s32, 0x178) + 0x5000;
        r = TRUE;
    } else if (p[0] > M(s32, 0x17c) - 0x5000) {
        p[0] = M(s32, 0x17c) - 0x5000;
        r = TRUE;
    }
    if (M(s32, 0x184) - M(s32, 0x180) <= 0x7000) {
        p[2] = (M(s32, 0x184) + M(s32, 0x180)) >> 1;
        r = TRUE;
    } else if (p[2] < M(s32, 0x180) + 0x2000) {
        p[2] = M(s32, 0x180) + 0x2000;
        r = TRUE;
    } else if (p[2] > M(s32, 0x184) - 0x5000) {
        p[2] = M(s32, 0x184) - 0x5000;
        r = TRUE;
    }
    return r;
}

void Camera::setFocusPreset11(u8 *o, V3 *v)
{
    if (o == NULL) {
        o = &M(u8, 0xfc);
    }
    loadPose(0xb, 0);
    ((V3 *)(o + 0x14))->x = v->x;
    ((V3 *)(o + 0x14))->y = v->y;
    ((V3 *)(o + 0x14))->z = v->z;
}

s32 Camera::getRoomEdgeSide(s32 *p)
{
    s32 v = *p;
    if (v < M(s32, 0x178) + 0x5000) {
        return 1;
    }
    if (v > M(s32, 0x17c) - 0x5000) {
        return 2;
    }
    return 0;
}

BOOL Camera::setMode(s32 idx)
{
    if (idx < 0x15) {
        if (idx != M(s32, 0x1f8)) {
            M(s32, 0x1fc) = M(s32, 0x1f8);
            if (idx != M(s32, 0x200)) {
                M(s16, 0x11c) = M(s16, 0xfc);
                M(s16, 0x11e) = M(s16, 0xfe);
                M(s32, 0x120) = M(s32, 0x100);
                M(s32, 0x124) = M(s32, 0x104);
                M(s32, 0x128) = M(s32, 0x108);
                M(s32, 0x12c) = M(s32, 0x10c);
                M(s32, 0x130) = M(s32, 0x110);
                M(s32, 0x134) = M(s32, 0x114);
                M(s32, 0x138) = M(s32, 0x118);
                M(s32, 0x13c) = M(s32, 0x168);
                M(s32, 0x140) = M(s32, 0x16c);
                M(s32, 0x144) = M(s32, 0x170);
            }
        }
        M(u8, 0x1f4) = 0;
        if ((this->*sCameraModeTable[idx].init)()) {
            setDefaultProjection();
            M(s32, 0x1f8) = idx;
            updateMode();
            return TRUE;
        }
    }
    return FALSE;
}

void Camera::updateMode()
{
    s32 i = M(s32, 0x1f8);
    if (i < 0x15) {
        (this->*sCameraModeTable[i].update)();
        updateEyeCurveAngle();
    }
}

void Camera::setDefaultProjection()
{
    M(s32, 0x1b0) = 0x1548;
    M(s32, 0x1b4) = 0xf6;
    M(s32, 0x1b8) = 0x3e800;
    setFovy(M(s16, 0x1c8));
}

void Camera::updateBlend()
{
    V3 t1, t2, o1, o2;
    s32 a, b, c, d;
    if (Camera_IsBlending()) {
        a = getBlendDelay();
        b = getBlendEnd();
        c = getBlendEaseIn();
        d = getBlendEaseOut();
        a = Math_EaseRampProgress(M(s32, 0xc8), a, b, c, d);
        Vec_Sub(&t1, (V3 *)&M(u8, 0x110), (V3 *)&M(u8, 0x15c));
        Vec_Scale(&t1, a);
        func_01ffd070(&o1, (V3 *)&M(u8, 0x15c), &t1);
        M(s32, 0x15c) = o1.x;
        M(s32, 0x160) = o1.y;
        M(s32, 0x164) = o1.z;
        Vec_Sub(&t2, (V3 *)&M(u8, 0x104), (V3 *)&M(u8, 0x150));
        Vec_Scale(&t2, a);
        func_01ffd070(&o2, (V3 *)&M(u8, 0x150), &t2);
        M(s32, 0x150) = o2.x;
        M(s32, 0x154) = o2.y;
        M(s32, 0x158) = o2.z;
        M(s16, 0x14a) += func_01ffcb0c(M(s16, 0xfe) - M(s16, 0x14a), a);
        M(s16, 0x148) += func_01ffcb0c(M(s16, 0xfc) - M(s16, 0x148), a);
        M(s32, 0x14c) += func_01ffcb0c(M(s32, 0x100) - M(s32, 0x14c), a);
        M(s32, 0x1e8) += func_01ffcb0c(M(s32, 0x1e4) - M(s32, 0x1e8), a);
        M(s32, 0xc8) += 0x1000;
    } else {
        M(s32, 0x15c) = M(s32, 0x110);
        M(s32, 0x160) = M(s32, 0x114);
        M(s32, 0x164) = M(s32, 0x118);
        M(s32, 0x150) = M(s32, 0x104);
        M(s32, 0x154) = M(s32, 0x108);
        M(s32, 0x158) = M(s32, 0x10c);
        M(s16, 0x14a) = M(s16, 0xfe);
        M(s16, 0x148) = M(s16, 0xfc);
        M(s32, 0x14c) = M(s32, 0x100);
        M(s32, 0x1e8) = M(s32, 0x1e4);
    }
}

void Camera::setLookAtOrbit(V3 *a, s32 r, s32 s, s32 z)
{
    V3 t, o;
    t.x = 0;
    t.y = 0;
    t.z = z;
    Vec_RotateX(&t, (s16)-r);
    Vec_RotateY(&t, s);
    func_01ffd070(&o, a, &t);
    M(s32, 0x168) = o.x;
    M(s32, 0x16c) = o.y;
    M(s32, 0x170) = o.z;
    s32 ang = WorldCurve_Apply(&M(u8, 0x188), a);
    WorldCurve_Apply(&M(u8, 0x194), getEye());
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    Vec_RotateX((V3 *)&M(u8, 0x1a0), ang);
    Vec_RotateZ((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    gCameraLookAt.x = a->x;
    gCameraLookAt.y = a->y;
    gCameraLookAt.z = a->z;
    V3 *c = getEye();
    gCameraEye.x = c->x;
    gCameraEye.y = c->y;
    gCameraEye.z = c->z;
    gCameraDistance = z;
}

void Camera::setLookAt(V3 *a, V3 *b)
{
    V3 d;
    s32 ang = WorldCurve_Apply(&M(u8, 0x188), a);
    WorldCurve_Apply(&M(u8, 0x194), b);
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    s32 i = (u16)ang >> 4;
    M(s32, 0x1a4) = data_02135f44[i * 2 + 1];
    M(s32, 0x1a8) = data_02135f44[i * 2];
    Vec_RotateZ((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    gCameraLookAt.x = a->x;
    gCameraLookAt.y = a->y;
    gCameraLookAt.z = a->z;
    gCameraEye.x = b->x;
    gCameraEye.y = b->y;
    gCameraEye.z = b->z;
    Vec_Sub(&d, a, b);
    gCameraDistance = VEC_Mag(&d);
}

void Camera::dragFocusTo(V3 *p)
{
    V3 d;
    s32 len, ex;
    targetFocus.y = p->y;
    Vec_Sub(&d, &targetFocus, p);
    len = Vec_MagXZ(&d);
    if (len > getFollowSlack()) {
        ex = len - getFollowSlack();
        if (Vec_SafeNormalize(&d)) {
            targetFocus.x -= func_01ffcb0c(d.x, ex);
            targetFocus.z -= func_01ffcb0c(d.z, ex);
        }
    }
}

BOOL Camera::initModeDefault() {
    if (gCurSceneInfo->isOutdoor == 0) {
        if (prevMode == 2) {
            focusYawLocked = 0;
        }
        loadPose(sCameraPoseGrid[presetRow].v[presetCol], 0);
    } else {
        loadPose(0, 0);
    }
    setBlendPreset(0);
    s32 t = prevMode;
    if (t == 2 || t == 4 || t == 0x10 || t == 5 || t == 6 || t == 0x12 || (u32)(t - 0xb) <= 1) {
        Camera_StartBlend();
        closeUpFactorTarget = 0;
    } else {
        closeUpFactorTarget = 0;
        closeUpFactor = 0;
        Camera_FinishBlend();
    }
    if (prevMode == 2 || prevMode == 0x10) {
        Camera_PlaySe((Camera *)this, 0x30);
    }
    return TRUE;
}

void Camera::updateModeDefault() {
    volatile Unk_0203a9b8_Vec cur;
    cur.x = targetFocus.x;
    cur.y = targetFocus.y;
    cur.z = targetFocus.z;
    volatile Unk_0203a9b8_Vec d;
    d.x = gVec3Zero.x;
    d.y = gVec3Zero.y;
    d.z = gVec3Zero.z;
    Unk_0203a9b8_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (gCurSceneInfo->isOutdoor == 0) {
        if (Scene_InHouseRoom() || Scene_InVillagerHouse() || (Scene_InMuseumRoom() && Scene_GetCurrent() != 0x20 && Scene_GetCurrent() != 0x22)) {
            loadPose(sCameraPoseGrid[presetRow].v[presetCol], 0);
            targetFocus.x = d.x;
            targetFocus.y = d.y;
            targetFocus.z = d.z;
            if (presetRow != 0) {
                clampToRoomBounds((s32 *)&targetFocus.x);
            }
        } else {
            targetFocus.x = d.x;
            targetFocus.y = d.y;
            targetFocus.z = d.z;
            clampToRoomBounds((s32 *)&targetFocus.x);
        }
    } else {
        dragFocusTo((Unk_0203a9b8_Vec *)&d);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

void Camera::pushView() {
    viewPushed = 1;
    saved = target.h0;
    savedPitch = target.h1;
    savedDistance = target.w0;
    savedOffset = target.x;
    savedOffsetY = target.y;
    savedOffsetZ = target.z;
    savedFocus = targetFocus.x;
    savedFocusY = targetFocus.y;
    savedFocusZ = targetFocus.z;
    savedEye = eye;
    savedEyeY = eyeY;
    savedEyeZ = eyeZ;
    initMode1();
}

void Camera::popView() {
    viewPushed = 0;
    initMode1();
    target.h0 = saved;
    target.h1 = savedPitch;
    target.w0 = savedDistance;
    target.x = savedOffset;
    target.y = savedOffsetY;
    target.z = savedOffsetZ;
    targetFocus.x = savedFocus;
    targetFocus.y = savedFocusY;
    targetFocus.z = savedFocusZ;
    eye = savedEye;
    eyeY = savedEyeY;
    eyeZ = savedEyeZ;
    restoreFocus = targetFocus.x;
    restoreFocusY = targetFocus.y;
    restoreFocusZ = targetFocus.z;
    restoreEye = eye;
    restoreEyeY = eyeY;
    restoreEyeZ = eyeZ;
    Camera_StartBlend();
    setBlendPreset(2);
}

BOOL Camera::initMode1() {
    Unk_0203a9b8_Vec v;
    if (viewPushed == 0) {
        Camera_GetLookAtPoint(&v, this);
        restoreFocus = v.x;
        restoreFocusY = v.y;
        restoreFocusZ = v.z;
        Unk_0203a9b8_Vec *p = getEye();
        restoreEye = p->x;
        restoreEyeY = p->y;
        restoreEyeZ = p->z;
        Camera_FinishBlend();
    } else {
        if (gCurSceneInfo->isOutdoor == 0) {
            loadPose(0xf, 0);
        } else {
            loadPose(0xe, 0);
        }
        setBlendPreset(1);
        Camera_StartBlend();
    }
    return TRUE;
}

void Camera::updateMode1() {
    volatile Unk_0203a9b8_Vec d;
    Unk_0203a9b8_Vec v, e, r, o, v2;
    d.x = gVec3Zero.x;
    d.y = gVec3Zero.y;
    d.z = gVec3Zero.z;
    Unk_0203a9b8_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (viewPushed == 0) {
        updateBlend();
        Camera_GetLookAtPoint(&v, this);
        Unk_0203a9b8_Vec *pp = getEye();
        e.x = pp->x;
        e.y = pp->y;
        e.z = pp->z;
        if (Camera_IsBlending()) {
            s32 z = getDistance();
            r.x = 0;
            r.y = 0;
            r.z = z;
            Vec_RotateX(&r, (s16)-getPitch());
            Vec_RotateY(&r, getYaw());
            func_01ffd070(&o, &v, &r);
            e.x = o.x;
            e.y = o.y;
            e.z = o.z;
        }
        v.y = v.y + (0x1000 - MenuCtrl_GetTransitionProgress()) * 15;
        e.y = e.y + (0x1000 - MenuCtrl_GetTransitionProgress()) * 2;
        if (prevMode == 9) {
            v.y = v.y + Camera_UpdateSway(this);
        }
        setLookAt(&v, &e);
    } else {
        targetFocus.x = d.x;
        targetFocus.y = d.y;
        targetFocus.z = d.z;
        R096_TAIL(v2)
    }
}

BOOL Camera::initModeFocus() {
    if (gCurSceneInfo->isOutdoor == 0) {
        loadPose(0xb, 0);
        roomFocusSide = 3;
        Camera_UpdateRoomFocus(this, 0);
    } else {
        loadPose(0xa, 0);
        FieldCamera_UpdateFocusZoom(this);
    }
    setBlendPreset(0);
    if (prevMode == 1) {
        Camera_FinishBlend();
    } else {
        Camera_StartBlend();
    }
    Camera_PlaySe((Camera *)this, 0x2f);
    return TRUE;
}

void Camera::updateModeFocus() {
    if (gCurSceneInfo->isOutdoor == 0) {
        Camera_UpdateRoomFocus(this, 0);
    } else {
        FieldCamera_UpdateFocusZoom(this);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Camera::initMode3() {
    if (gCurSceneInfo->isOutdoor == 0) {
        loadPose(0x1c, 0);
    } else {
        loadPose(0x1b, 0);
    }
    setBlendPreset(3);
    Camera_StartBlend();
    return TRUE;
}

void Camera::updateMode3() {
    volatile Unk_0203a9b8_Vec d;
    d.x = gVec3Zero.x;
    d.y = gVec3Zero.y;
    d.z = gVec3Zero.z;
    Unk_0203a9b8_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    targetFocus.x = d.x;
    targetFocus.y = d.y;
    targetFocus.z = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Camera::initMode4() {
    if (gCurSceneInfo->isOutdoor == 0) {
        loadPose(0xd, 0);
    } else {
        loadPose(0xc, 0);
    }
    setBlendPreset(0);
    Camera_StartBlend();
    closeUpFactorTarget = 0x1000;
    return TRUE;
}

void Camera::updateMode4() {
    volatile Unk_0203a9b8_Vec d;
    d.x = gVec3Zero.x;
    d.y = gVec3Zero.y;
    d.z = gVec3Zero.z;
    Unk_0203a9b8_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    targetFocus.x = d.x;
    targetFocus.y = d.y;
    targetFocus.z = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Camera::initModeTrackPair() {
    loadPose(0, 0);
    setBlendPreset(0);
    Camera_StartBlend();
    return TRUE;
}

void Camera::updateModeTrackPair() {
    Unk_0203a9b8_Vec d;
    d = gVec3Zero;
    Unk_0203a9b8_Vec *p = PlayerActor_GetBodyPos(4);
    void *q = PlayerActor_GetTrackTarget(4);
    if (p && q) {
        Unk_0203a9b8_Vec t;
        Vec_Sub(&t, p, q);
        s32 len = Vec_MagXZ(&t);
        s32 ang = Math_AngleXZ(p, q);
        s32 sc = func_01ffcb0c(len, 0xb33);
        d = *p;
        s32 idx = ((u16)ang >> 4) * 2;
        d.x += func_01ffcb0c(sc, data_02135f44[idx]);
        d.z += func_01ffcb0c(sc, data_02135f44[idx + 1]);
    }
    dragFocusTo(&d);
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Camera::initModeRestore() {
    Camera_RestoreView();
    Camera_FinishBlend();
    return TRUE;
}

void Camera::updateModeRestore() {
    Unk_0203a9b8_Vec v;
    Camera_RestoreView();
    R096_TAIL(v)
}

BOOL Camera::initModeShake() {
    CameraShakeParam *sub = (CameraShakeParam *)&modeParam;
    sub->ang = 0;
    sub->vel = 0x2000;
    Camera_FinishBlend();
    return TRUE;
}

extern "C" void Camera_UpdateModeShake(Camera *o) {
    Unk_0203a148_Vec v;
    Unk_0203a148_Vec cam;
    CameraShakeParam *r = (CameraShakeParam *)&o->modeParam;
    s32 sc;
    r->ang = r->ang + r->vel;
    Math_StepS16(&r->vel, 0x6000, 0x180);
    sc = func_01ffcb0c(data_02135f44[((u16)r->ang >> 4) * 2], o->modeParam);
    _ZN6Camera11dragFocusToEP14Unk_0203b350_V(o, &o->savedFocus);
    Math_ApproachS32((s32 *)r, 0, 0x400, 0x80, 0x10);
    _ZN6Camera11updateBlendEv(o);
    Camera_GetLookAtPoint(&cam, o);
    s32 p = _ZN6Camera8getPitchEv(o);
    s32 q = _ZN6Camera6getYawEv(o);
    _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(o, &cam, p, q, _ZN6Camera11getDistanceEv(o));
    v.x = 0;
    v.y = 0x1000;
    v.z = 0;
    MTX_MultVec33(&v, &o->invViewMtx, &v);
    Vec_Scale(&v, sc);
    VEC_Add(&o->lookEye, &v, &o->lookEye);
    VEC_Add(&o->lookTarget, &v, &o->lookTarget);
}

extern "C" BOOL Camera_InitMode19(Camera *o) {
    _ZN6Camera8loadPoseEiP10CameraPose(o, 0x1f, 0);
    _ZN6Camera14setBlendPresetEi(o, 5);
    Camera_StartBlend();
    return TRUE;
}

extern "C" void Camera_UpdateMode19(Camera *o) {
    Unk_0203a148_Vec v;
    _ZN6Camera11updateBlendEv(o);
    Camera_GetLookAtPoint(&v, o);
    s32 p = _ZN6Camera8getPitchEv(o);
    s32 q = _ZN6Camera6getYawEv(o);
    _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(o, &v, p, q, _ZN6Camera11getDistanceEv(o));
}

extern "C" BOOL Camera_SetModeDefault(void) {
    s32 t = gCamera->mode;
    if (t == 9) {
        return FALSE;
    }
    if (t == 0) {
        return TRUE;
    }
    return _ZN6Camera7setModeEi(gCamera, 0);
}

extern "C" void Camera_SetMode1(void) {
    _ZN6Camera7setModeEi(gCamera, 1);
}

extern "C" s32 Camera_CalcPointSpan(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d) {
    s32 len;
    Unk_0203a148_Vec sub, v2, t1, t2;
    Vec_Sub(&sub, a, b);
    v2.x = sub.x;
    v2.y = sub.y;
    v2.z = sub.z;
    v2.z = func_01ffcb0c(*(volatile s32 *)&sub.z, sCameraSpanDepthScale);
    len = VEC_Mag(&v2);
    if (c != NULL) {
        func_01ffd070(&t1, a, b);
        Vec_ShiftRightTo(&t2, &t1, 1);
        c->x = t2.x;
        c->y = t2.y;
        c->z = t2.z;
        if (d != NULL) {
            s32 t = sub.z >> 1;
            if (t < 0) {
                t = -t;
            }
            *d = t;
        }
    }
    return len;
}

extern "C" s32 Camera_CalcTriangleSpan(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e) {
    Unk_0203a148_Vec lo, hi, diff, t1, t2;
    s32 r;
    lo.x = a->x;
    lo.y = a->y;
    lo.z = a->z;
    hi.x = a->x;
    hi.y = a->y;
    hi.z = a->z;
    if (lo.x > b->x) {
        lo.x = b->x;
    } else {
        hi.x = b->x;
    }
    if (lo.z > b->z) {
        lo.z = b->z;
    } else {
        hi.z = b->z;
    }
    if (lo.x > c->x) {
        lo.x = c->x;
    }
    if (lo.z > c->z) {
        lo.z = c->z;
    }
    if (hi.x < c->x) {
        hi.x = c->x;
    }
    if (hi.z < c->z) {
        hi.z = c->z;
    }
    Vec_Sub(&diff, &hi, &lo);
    s32 z = diff.z;
    r = diff.x;
    if (r <= z) {
        r = z;
    }
    if (d != NULL) {
        func_01ffd070(&t1, &lo, &hi);
        Vec_ShiftRightTo(&t2, &t1, 1);
        d->x = t2.x;
        d->y = t2.y;
        d->z = t2.z;
        d->y = (a->y + b->y) >> 1;
        if (e != NULL) {
            *e = diff.z >> 1;
        }
    }
    return r;
}

extern "C" BOOL Camera_FocusOnPoint(Unk_0203a148_Vec *a) {
    if (gCamera->mode == 9) {
        return FALSE;
    }
    if (Scene_GetCurrent() == 0xc) {
        return FALSE;
    }
    s32 r = Camera_CalcPointSpan(PlayerActor_GetBodyPos(4), a, NULL, NULL);
    if (r >= 0xb000) {
        return Camera_SetModeDefault();
    }
    gCamera->focusIsPair = 0;
    gCamera->focusPointA = *a;
    return _ZN6Camera7setModeEi(gCamera, 2);
}

extern "C" void Camera_FocusOnPair(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b) {
    s32 r = Camera_CalcTriangleSpan(PlayerActor_GetBodyPos(4), a, b, NULL, NULL);
    if (r >= 0xb000) {
        Camera_SetModeDefault();
    } else {
        gCamera->focusIsPair = 1;
        gCamera->focusPointA = *a;
        gCamera->focusPointB = *b;
        _ZN6Camera7setModeEi(gCamera, 2);
    }
}

extern "C" void Camera_StartShake(s32 a) {
    gCamera->modeParam = a;
    _ZN6Camera7setModeEi(gCamera, 0x11);
}

extern "C" void Camera_SetMode19(void) {
    _ZN6Camera7setModeEi(gCamera, 0x13);
}

extern "C" void Camera_SetMode3(void) {
    _ZN6Camera7setModeEi(gCamera, 3);
}

extern "C" void Camera_RestorePrevMode(void) {
    _ZN6Camera7setModeEi(gCamera, gCamera->prevMode);
}

extern "C" void Camera_SetMode4(void) {
    _ZN6Camera7setModeEi(gCamera, 4);
}

extern "C" void Camera_SetMode5(void) {
    _ZN6Camera7setModeEi(gCamera, 5);
}

extern "C" BOOL Camera_RetargetFocus(Unk_0203a148_Vec *v) {
    if (gCamera->mode == 0x13) {
        gCamera->blendTime = 0;
        gCamera->blendDelay = 0;
        gCamera->blendEnd = 0x15000;
        return TRUE;
    }
    Unk_0203a148_Vec *d = &gCamera->focusPointA;
    *d = *v;
    gCamera->blendTime = 0;
    gCamera->roomFocusSide = 3;
    return TRUE;
}

extern "C" BOOL Camera_IsBlockingFocusView(Unk_0203a148_Vec *v, s32 unused, s32 h) {
    Camera *o = gCamera;
    if (o != NULL) {
        s32 t = o->mode;
        if (t != 2 && t != 4) {
            if (t == 1 && o->prevMode == 2) {
            } else if (o->viewPushed == 0) {
                return FALSE;
            }
        }
        if (v->z - (h >> 1) > o->targetFocus.z - 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" s32 Camera_GetCloseUpFactor(void) {
    return gCamera->closeUpFactor;
}

extern "C" BOOL Camera_IsBlending(void) {
    if (gCamera->blendTime <= _ZN6Camera11getBlendEndEv(gCamera)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void Camera_FinishBlend(void) {
    gCamera->blendTime = _ZN6Camera11getBlendEndEv(gCamera);
}

extern "C" void Camera_StartBlend(void) {
    gCamera->blendTime = 0;
}

extern "C" u8 Camera_GetBlendFramesLeft(void) {
    return (_ZN6Camera11getBlendEndEv(gCamera) - gCamera->blendTime) >> 12;
}

extern "C" void Camera_SaveView(void) {
    sCameraSavedSetup = *(CameraSetup *)&gCamera->target;
    *(Unk_0203a148_Vec *)&sCameraSavedEye = *(Unk_0203a148_Vec *)&gCamera->eye;
}

extern "C" void Camera_RestoreView(void) {
    *(CameraSetup *)&gCamera->target = sCameraSavedSetup;
    *(Unk_0203a148_Vec *)&gCamera->eye = sCameraSavedEye;
}

extern "C" BOOL Camera_IsViewPushed(void) {
    if (gCamera->viewPushed != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Camera_PushView(void) {
    _ZN6Camera8pushViewEv(gCamera);
    return TRUE;
}

extern "C" BOOL Camera_PopView(void) {
    _ZN6Camera7popViewEv(gCamera);
    return TRUE;
}

extern "C" void Camera_SetSwayPattern3(void) {
    Camera_SetSwayPattern(gCamera, 3);
}

extern "C" void Camera_LockFocusYaw(void) {
    gCamera->focusYawLocked = 1;
}

extern "C" void Camera_SnapToFocus(s32 a) {
    _ZN6Camera16setFocusPreset11EPhP14Unk_0203b350_V(gCamera, (CameraSetup *)&gCamera->target, a);
    *(CameraSetup *)&gCamera->current = *(CameraSetup *)&gCamera->target;
    Unk_0203a148_Vec v;
    Camera_GetLookAtPoint(&v, gCamera);
    s32 p = _ZN6Camera8getPitchEv(gCamera);
    s32 q = _ZN6Camera6getYawEv(gCamera);
    _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(gCamera, &v, p, q, _ZN6Camera11getDistanceEv(gCamera));
}

extern "C" void Camera_MuteSe(void) {
    gCamera->seMuted = 1;
}

extern "C" void Camera_UnmuteSe(void) {
    gCamera->seMuted = 0;
}

extern "C" void Camera_PlaySe(Camera *o, s32 a) {
    if (o->seMuted == 0) {
        Snd_PlaySe(a);
    }
}

extern "C" MtxFx43 *Camera_GetViewMatrix(void) {
    if (gCamera != NULL) {
        return (MtxFx43 *)&(FxMtx43 &)*gCamera;
    }
    return NULL;
}

extern "C" BOOL Camera_SetPresetCell(s32 a, s32 b) {
    Camera *o = gCamera;
    if (o != NULL) {
        if (o->presetCol != b || o->presetRow != a) {
            Camera_StartBlend();
            gCamera->presetRow = a;
            gCamera->presetCol = b;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL Camera_ProjectToScreen(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    struct {
        Unk_0203a148_Vec v;
        MtxFx43 m;
    } l;
    if (gCamera != NULL) {
        MtxFx43 *src = Camera_GetViewMatrix();
        l.m = *src;
        data_021f47e0 = l.m;
        MTX_MultVec43(p, &data_021f47e0, &l.v);
        s32 t = FX_Div(0x60000, _ZN6Camera9getFovTanEv(gCamera));
        t = FX_Div(-t, l.v.z);
        Vec_Scale(&l.v, t);
        *x = l.v.x >> 12;
        *y = -(l.v.y >> 12);
        return TRUE;
    }
    return FALSE;
}

// ======== FUNCTIONS ========

extern "C" BOOL Camera_ProjectCurvedToScreen(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    Unk_0203a148_Vec v;
    WorldCurve_Apply(&v, p);
    return Camera_ProjectToScreen(x, y, &v);
}

GxColorRgba data_021c3060(31, 20, 20, 31);
GxColorRgba data_021c3074(20, 20, 31, 31);
GxColorRgba data_021c3064(31, 31, 20, 31);
GxColorRgba data_021c305c(20, 31, 20, 31);
GxColorRgba data_021c3058(20, 31, 31, 31);
GxColorRgba data_021c306c(20, 24, 24, 31);
FxVec3 gCameraEye;
FxVec3 gCameraLookAt;
CameraSetup sCameraSavedSetup;
FxVec3 sCameraSavedEye;
CameraModeEntry sCameraModeTable[21] = {
    { *(CameraModeInitFn *)data_020d9280, *(CameraModeUpdateFn *)data_020d9368 },
    { *(CameraModeInitFn *)data_020d9360, *(CameraModeUpdateFn *)data_020d9358 },
    { *(CameraModeInitFn *)data_020d9350, *(CameraModeUpdateFn *)data_020d9348 },
    { *(CameraModeInitFn *)data_020d9340, *(CameraModeUpdateFn *)data_020d9338 },
    { *(CameraModeInitFn *)data_020d92b0, *(CameraModeUpdateFn *)data_020d9328 },
    { *(CameraModeInitFn *)data_020d9320, *(CameraModeUpdateFn *)data_020d9300 },
    { *(CameraModeInitFn *)data_020d9308, *(CameraModeUpdateFn *)data_020d9330 },
    { *(CameraModeInitFn *)data_020d9370, *(CameraModeUpdateFn *)data_020d9380 },
    { *(CameraModeInitFn *)data_020d9390, *(CameraModeUpdateFn *)data_020d92e8 },
    { *(CameraModeInitFn *)data_020d92e0, *(CameraModeUpdateFn *)data_020d92d8 },
    { *(CameraModeInitFn *)data_020d92d0, *(CameraModeUpdateFn *)data_020d93a0 },
    { *(CameraModeInitFn *)data_020d9270, *(CameraModeUpdateFn *)data_020d9388 },
    { *(CameraModeInitFn *)data_020d9278, *(CameraModeUpdateFn *)data_020d92a8 },
    { *(CameraModeInitFn *)data_020d9290, *(CameraModeUpdateFn *)data_020d92a0 },
    { *(CameraModeInitFn *)data_020d92c0, *(CameraModeUpdateFn *)data_020d92f8 },
    { *(CameraModeInitFn *)data_020d9310, *(CameraModeUpdateFn *)data_020d9378 },
    { *(CameraModeInitFn *)data_020d9398, *(CameraModeUpdateFn *)data_020d9268 },
    { *(CameraModeInitFn *)data_020d9260, *(CameraModeUpdateFn *)data_020d92c8 },
    { *(CameraModeInitFn *)data_020d92b8, *(CameraModeUpdateFn *)data_020d9298 },
    { *(CameraModeInitFn *)data_020d92f0, *(CameraModeUpdateFn *)data_020d9318 },
    { *(CameraModeInitFn *)data_020d93a8, *(CameraModeUpdateFn *)data_020d9258 }
};
Camera *gCamera;
s32 gCameraDistance;

s32 sCameraFollowVillagerIdx = 0x8;
s32 sCameraSpanDepthScale = 0x1800;
ProcProfile sCameraProfile = { (void *(*)())Camera_Create, 0xb, 0x6 };
void *data_020d9258[2] = { (void *)Camera_UpdateMode20, 0 };
void *data_020d9260[2] = { (void *)_ZN6Camera13initModeShakeEv, 0 };
void *data_020d9268[2] = { (void *)Camera_UpdateMode16, 0 };
void *data_020d9270[2] = { (void *)Camera_InitMode11, 0 };
void *data_020d9278[2] = { (void *)Camera_InitMode12, 0 };
void *data_020d9280[2] = { (void *)_ZN6Camera15initModeDefaultEv, 0 };
void *data_020d9290[2] = { (void *)_ZN16CameraEventModes10initMode13Ev, 0 };
void *data_020d9298[2] = { (void *)Camera_UpdateMode18, 0 };
void *data_020d92a0[2] = { (void *)_ZN16CameraEventModes12updateMode13Ev, 0 };
void *data_020d92a8[2] = { (void *)Camera_UpdateMode12, 0 };
void *data_020d92b0[2] = { (void *)_ZN6Camera9initMode4Ev, 0 };
void *data_020d92b8[2] = { (void *)Camera_InitMode18, 0 };
void *data_020d92c0[2] = { (void *)Camera_InitMode14, 0 };
void *data_020d92c8[2] = { (void *)Camera_UpdateModeShake, 0 };
void *data_020d92d0[2] = { (void *)Camera_InitMode10, 0 };
void *data_020d92d8[2] = { (void *)_ZN16CameraEventModes14updateModeSwayEv, 0 };
void *data_020d92e0[2] = { (void *)_ZN16CameraEventModes12initModeSwayEv, 0 };
void *data_020d92e8[2] = { (void *)_ZN16CameraEventModes18updateModeTownTourEv, 0 };
void *data_020d92f0[2] = { (void *)Camera_InitMode19, 0 };
void *data_020d92f8[2] = { (void *)Camera_UpdateMode14, 0 };
void *data_020d9300[2] = { (void *)_ZN6Camera19updateModeTrackPairEv, 0 };
void *data_020d9308[2] = { (void *)_ZN6Camera15initModeRestoreEv, 0 };
void *data_020d9310[2] = { (void *)Camera_InitMode15, 0 };
void *data_020d9318[2] = { (void *)Camera_UpdateMode19, 0 };
void *data_020d9320[2] = { (void *)_ZN6Camera17initModeTrackPairEv, 0 };
void *data_020d9328[2] = { (void *)_ZN6Camera11updateMode4Ev, 0 };
void *data_020d9330[2] = { (void *)_ZN6Camera17updateModeRestoreEv, 0 };
void *data_020d9338[2] = { (void *)_ZN6Camera11updateMode3Ev, 0 };
void *data_020d9340[2] = { (void *)_ZN6Camera9initMode3Ev, 0 };
void *data_020d9348[2] = { (void *)_ZN6Camera15updateModeFocusEv, 0 };
void *data_020d9350[2] = { (void *)_ZN6Camera13initModeFocusEv, 0 };
void *data_020d9358[2] = { (void *)_ZN6Camera11updateMode1Ev, 0 };
void *data_020d9360[2] = { (void *)_ZN6Camera9initMode1Ev, 0 };
void *data_020d9368[2] = { (void *)_ZN6Camera17updateModeDefaultEv, 0 };
void *data_020d9370[2] = { (void *)SslCert_MatchHostName, 0 };
void *data_020d9378[2] = { (void *)Camera_UpdateMode15, 0 };
void *data_020d9380[2] = { (void *)_ZN16CameraEventModes22updateModeFollowTargetEv, 0 };
void *data_020d9388[2] = { (void *)Camera_UpdateMode11, 0 };
void *data_020d9390[2] = { (void *)_ZN16CameraEventModes16initModeTownTourEv, 0 };
void *data_020d9398[2] = { (void *)Camera_InitMode16, 0 };
void *data_020d93a0[2] = { (void *)Camera_UpdateMode10, 0 };
void *data_020d93a8[2] = { (void *)Camera_InitMode20, 0 };

// .rodata 0x020c8ce4-0x020c8d3c: the three objects before sCameraBlendTable continue this file's ascending size run
// (4, 0x24, 0x30, 0x60, 0x294). data_020c8ce4 is read by the unit at 0x02038474 (0x020388f8), sCameraPoseGrid by this
// file and ov004, kCameraSwayPatterns (with the interior labels 0x020c8d0e/d10/d14) by ov068.
extern const u8 data_020c8ce4[4];
const u8 data_020c8ce4[4] = { 0, 0, 0, 0 };
const CameraPoseGridRow sCameraPoseGrid[3] = { { { 1, 2, 3 } }, { { 4, 5, 6 } }, { { 7, 8, 9 } } };
extern const CameraSwayPattern kCameraSwayPatterns[4];
const CameraSwayPattern kCameraSwayPatterns[4] = {
    { 0x0, 0x14, 0x0, 0x0, 0x0 },
    { 0xa, 0x1, 0x2000, 0x0, 0x28 },
    { 0xa, 0x1, 0x2000, 0x0, 0x64 },
    { 0xa, 0x1, 0x2000, 0x0, 0x96 }
};
const u32 sCameraBlendTable[6][4] = {
    { 0x0, 0x1e000, 0x5000, 0x5000 },
    { 0x0, 0xa000, 0x3000, 0x3000 },
    { 0x0, 0x4000, 0x1000, 0x1000 },
    { 0x0, 0x5a000, 0x50000, 0xa000 },
    { 0x0, 0xb4000, 0xf000, 0xf000 },
    { 0x0, 0x3c000, 0xa000, 0xa000 }
};
const CameraPose sCameraPoseTable[33] = {
    { 0x0, 0x27f6, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x20ec, 0xb000, 0x0, 0x4f6, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x4f6, 0xf0a },
    { 0x0, 0x1eee, 0xb000, 0x0, 0xf0a, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0xf0a, 0xf0a },
    { 0x0, 0x1eee, 0xa000, 0x0, 0x18f6, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0xd03, 0x8f5, 0x1e14, 0x11614, 0x1e14, 0x1c9ec },
    { 0x0, 0x21a2, 0x12c00, 0x10000, 0x1e14, 0x17e14 },
    { 0x0, 0xdf0, 0xf000, 0x10000, 0x4000, 0x1c000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x1c000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x14000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x14000 },
    { 0x0, 0x17f6, 0xa000, 0x10000, 0x4000, 0x1ee14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x1ee14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x16e14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x16e14 },
    { 0x0, 0x27f6, 0x10e14, 0x0, 0x1e14, 0x2cf6 },
    { 0x0, 0x1eee, 0x8000, 0x0, 0xf0a, -0x10f6 },
    { 0x0, 0x13fb, 0x8000, 0x0, 0xf0a, -0x10f6 },
    { 0x0, 0x9f4, 0xa000, 0x0, 0x1e14, 0xf0a },
    { -0x19ab, 0x9f4, 0xa000, -0x230a, 0x4f6, 0xf0a },
    { 0x0, 0x21fd, 0x10e14, 0x0, 0x1e14, 0x40f6 },
    { 0x0, 0xe02, 0x8819, 0x0, 0x1400, 0xf0a }
};

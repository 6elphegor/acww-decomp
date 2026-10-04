// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/Unk_020d93b8.h"

struct Unk_0223f44c_Vec {
    s32 x, y, z;
};

struct Unk_0223f6bc_V3 {
    s32 x, y, z;
    Unk_0223f6bc_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

// Vector member of the static camera tables. It has a (empty) destructor, which makes the compiler keep a stack
// temporary for every initialiser (the original __sinit has a 0x4c byte frame).
struct Unk_ov004_0223f44c_V3D {
    s32 x, y, z;
    Unk_ov004_0223f44c_V3D(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~Unk_ov004_0223f44c_V3D() {}
};

// 0x20-byte static table; the destructor is main's func_020b... (see notes: needs main 0x0203c230 renamed)
struct CameraSetup {
    s16 a, b;
    s32 w0;
    Unk_ov004_0223f44c_V3D p;
    Unk_ov004_0223f44c_V3D q;
    ~CameraSetup();
};
typedef CameraSetup Unk_0223f44c_Tbl;

// 4-byte static object (four bytes set by __sinit)
struct Unk_ov004_0223f43c_B4 {
    u8 a, b, c, d;
    Unk_ov004_0223f43c_B4(u8 pa, u8 pb, u8 pc, u8 pd) {
        a = pa;
        b = pb;
        c = pc;
        d = pd;
    }
};

struct Unk_0223f44c_Mode {
    s16 v0, v2, v4, v6, v8, va, vc;
    u8 b0 : 1;
    u8 b1 : 1;
};

struct Unk_0223f534_Ent {
    s32 w0, w1, w2, w3, w4, w5, w6;
    s16 h1c, h1e, h20;
    s16 pad;
};


struct Unk_ov004_0223fe00_Sub {
    s16 yaw;
    u8 pad_02[0x12];
    s32 focus;
    s32 focusY;
    s32 focusZ;
};

extern "C" {
extern Unk_021c3070 *gCamera;
extern Unk_0223f44c_Vec gVec3Zero;
extern s16 data_02135f44[];
extern u32 sCameraPoseGrid[][3];
extern Unk_0223f44c_Tbl sCameraKkShowSetup;
extern Unk_0223f44c_Tbl sCameraKkShowPrevSetup;
extern Unk_0223f44c_Tbl sCameraKkShowWideSetup;
extern u32 data_ov004_0224f31c[];
extern u32 data_ov004_0224f32c[];
extern u32 data_ov004_0224f33c[];
extern Unk_0223f534_Ent sCameraKkShowShots[];
extern const Unk_0223f44c_Vec data_ov004_02246838;
extern const Unk_0223f44c_Vec data_ov004_0224682c;
// linker-provided absolute symbol (overlay id 2 == the value 2): the original loads this constant from the literal pool

Unk_0223f44c_Vec *PlayerActor_GetBodyPos(s32 a);
s32 Scene_GetCurrent(void);
s32 Random_GlobalBelow(s32 a);
s32 Math_AngleXZ(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Div(s32 a, s32 b);
void Camera_GetLookAtPoint(void *out, Unk_021c3070 *o);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
void func_01ffd070(void *out, void *a, void *b);
void func_020e9790(void *out, void *in, s32 s);
void func_020e93a0(void *v, s32 a);
void Camera_StartBlend(void);
void Camera_FinishBlend(void);
void Camera_PlaySe(Unk_021c3070 *o, s32 a);
s32 Camera_CalcPointSpan(void *p, void *a, s32 *b, s32 *out);

// methods of Unk_0203b350 / Unk_020d93b8 (main), called through their real symbols with the object first
s32 _ZN12Unk_0203b35011getDistanceEv(Unk_021c3070 *o);
s16 _ZN12Unk_020d93b86getYawEv(Unk_021c3070 *o);
s16 _ZN12Unk_020d93b88getPitchEv(Unk_021c3070 *o);
s32 _ZN12Unk_0203b3507setModeEi(Unk_021c3070 *o, s32 a);
void _ZN12Unk_0203b35011updateBlendEv(Unk_021c3070 *o);
void _ZN12Unk_0203b35014setLookAtOrbitEP14Unk_0203b350_Viii(Unk_021c3070 *o, void *a, s32 b, s32 c, s32 d);
void _ZN12Unk_020d93b814setBlendParamsEPj(Unk_021c3070 *o, u32 *src);
void _ZN12Unk_020d93b814setBlendPresetEi(Unk_021c3070 *o, s32 a);
void _ZN12Unk_020d93b88loadPoseEiP10CameraPose(Unk_021c3070 *o, s32 a, s32 b);
void _ZN12Unk_020d93b89lerpPosesEiii(Unk_021c3070 *o, s32 a, s32 b, s32 c);
s32 _ZN12Unk_0203b35015getRoomEdgeSideEPi(Unk_021c3070 *o, s32 *p);
#define Unk_0203b350_getDistance _ZN12Unk_0203b35011getDistanceEv
#define Unk_020d93b8_getYaw _ZN12Unk_020d93b86getYawEv
#define Unk_020d93b8_getPitch _ZN12Unk_020d93b88getPitchEv
#define Unk_0203b350_setMode _ZN12Unk_0203b3507setModeEi
#define Unk_0203b350_updateBlend _ZN12Unk_0203b35011updateBlendEv
#define Unk_0203b350_setLookAtOrbit _ZN12Unk_0203b35014setLookAtOrbitEP14Unk_0203b350_Viii
#define Unk_020d93b8_setBlendParams _ZN12Unk_020d93b814setBlendParamsEPj
#define Unk_020d93b8_setBlendPreset _ZN12Unk_020d93b814setBlendPresetEi
#define Unk_020d93b8_loadPose _ZN12Unk_020d93b88loadPoseEiP10CameraPose
#define Unk_020d93b8_lerpPoses _ZN12Unk_020d93b89lerpPosesEiii
#define Unk_0203b350_getRoomEdgeSide _ZN12Unk_0203b35015getRoomEdgeSideEPi

void Camera_KkShowResetShot(Unk_021c3070 *o);
void Camera_KkShowPickShot(Unk_021c3070 *o);
void Camera_KkShowWideShot(Unk_021c3070 *o);
}

#define Unk_0223f44c_Finish(o)                                          \
    do {                                                                \
        Unk_0223f44c_Vec cam;                                           \
        s32 p, q;                                                       \
        Unk_0203b350_updateBlend(o);                                               \
        Camera_GetLookAtPoint(&cam, o);                                         \
        p = Unk_020d93b8_getPitch(o);                                           \
        q = Unk_020d93b8_getYaw(o);                                           \
        Unk_0203b350_setLookAtOrbit(o, &cam, p, q, Unk_0203b350_getDistance(o));                 \
    } while (0)

extern "C" {

void Camera_UpdateRoomFocus(Unk_021c3070 *self, Unk_ov004_0223fe00_Sub *a) {
    Unk_0223f44c_Vec *p;
    s32 lim;
    s32 sp4;
    s32 sp8;
    s32 inv;
    s32 sc;
    s32 dy;
    Unk_0223f44c_Vec d;
    s32 ang, r7;
    s32 t;
    if (a == 0) {
        a = (Unk_ov004_0223fe00_Sub *)&self->target.h0;
    }
    p = PlayerActor_GetBodyPos(4);
    t = Camera_CalcPointSpan(p, &self->focusPointA, &self->targetFocus.x, &dy);
    if (t < 0x4800) {
        t = 0x4800;
    } else if (t > 0xb000) {
        t = 0xb000;
    }
    sc = FX_Div(t - 0x4800, 0x6800);
    inv = 0x1000 - sc;
    self->closeUpFactorTarget = inv;
    Unk_020d93b8_lerpPoses(self, 0xb, sCameraPoseGrid[self->presetRow][self->presetCol], sc);
    d = gVec3Zero;
    if (p->z > self->focusPointA.z) {
        d = *p;
    } else {
        d.x = self->focusPointA.x;
        d.y = self->focusPointA.y;
        d.z = self->focusPointA.z;
    }
    sp4 = Unk_0203b350_getRoomEdgeSide(self, &a->focus);
    sp8 = 0;
    ang = Math_AngleXZ(&a->focus, &d);
    s32 av = ang < 0 ? (s16)-ang : ang;
    t = 0x2000 - av;
    if (t < 0) t = 0;
    s32 q = func_01ffcb0c(t >> 1, 0x2000);
    lim = (s16)func_01ffcb0c(q, 0xe02);
    if (lim > 0xe02) lim = 0xe02;
    if (lim > 0 && self->focusYawLocked == 0) {
        if (self->roomFocusSide == 3) {
            if (ang > 0) r7 = 1; else r7 = 2;
            if (sp4 == 1 && r7 == 1) {
                s32 b = ang < 0 ? (s16)-ang : ang;
                if (b > 0x701) r7 = 0; else r7 = 2;
            }
            if (sp4 == 2 && r7 == 2) {
                if (ang < 0) ang = (s16)-ang;
                if (ang > 0x701) r7 = 0; else r7 = 1;
            }
            if (Scene_GetCurrent() == 0x10) r7 = 1;
            self->roomFocusSide = r7;
        }
        u32 m = self->roomFocusSide;
        if (m == 1) lim = (s16)-lim;
        if (m != 0) {
            a->yaw = func_01ffcb0c(lim, inv);
            sp8 = func_01ffcb0c(dy, data_02135f44[((u16)a->yaw >> 4) * 2]);
        }
    }
    a->focusZ += dy;
    a->focus += sp8;
}

BOOL Camera_InitMode10(Unk_021c3070 *self) {
    Unk_020d93b8_loadPose(self, 0x11, 0);
    Unk_020d93b8_setBlendPreset(self, 0);
    self->targetFocus.x = gVec3Zero.x;
    self->targetFocus.y = gVec3Zero.y;
    self->targetFocus.z = gVec3Zero.z;
    Camera_FinishBlend();
    return TRUE;
}

BOOL Camera_StartBlendToPlayer(Unk_021c3070 *self) {
    Unk_020d93b8_loadPose(self, sCameraPoseGrid[1][1], 0);
    Unk_020d93b8_setBlendPreset(self, 0);
    Unk_0223f44c_Vec *p = PlayerActor_GetBodyPos(4);
    self->targetFocus.x = p->x;
    self->targetFocus.y = p->y;
    self->targetFocus.z = p->z;
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode10(Unk_021c3070 *self) {
    Unk_0223f44c_Vec v;
    Unk_0203b350_updateBlend(self);
    Camera_GetLookAtPoint(&v, self);
    s32 a = Unk_020d93b8_getPitch(self);
    s32 b = Unk_020d93b8_getYaw(self);
    Unk_0203b350_setLookAtOrbit(self, &v, a, b, Unk_0203b350_getDistance(self));
}

s32 Camera_GetShopTier() {
    s32 r = 0;
    switch (Scene_GetCurrent()) {
    case 0x1a:
        r = 0;
        break;
    case 0x1b:
        r = 1;
        break;
    case 0x1c:
        r = 2;
        break;
    case 0x1d:
    case 0x1e:
        r = 3;
        break;
    }
    return r;
}

BOOL Camera_SetMode11() {
    if (gCamera) {
        return Unk_0203b350_setMode(gCamera, 11);
    }
    return FALSE;
}

BOOL Camera_SetMode12() {
    if (gCamera) {
        return Unk_0203b350_setMode(gCamera, 12);
    }
    return FALSE;
}

BOOL Camera_InitMode11(Unk_021c3070 *o) {
    Unk_020d93b8_loadPose(o, Camera_GetShopTier() + 0x12, 0);
    Unk_020d93b8_setBlendPreset(o, 0);
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode11(Unk_021c3070 *o) {
    volatile s32 a, b, c;
    a = 0;
    b = 0;
    c = 0;
    o->targetFocus.x = 0;
    o->targetFocus.y = b;
    o->targetFocus.z = c;
    Unk_0223f44c_Finish(o);
}

BOOL Camera_InitMode12(Unk_021c3070 *o) {
    Unk_020d93b8_loadPose(o, Camera_GetShopTier() + 0x16, 0);
    Unk_020d93b8_setBlendPreset(o, 0);
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode12(Unk_021c3070 *o) {
    volatile s32 a, b, c;
    a = 0;
    b = 0;
    c = 0;
    o->targetFocus.x = 0;
    o->targetFocus.y = b;
    o->targetFocus.z = c;
    Unk_0223f44c_Finish(o);
}

BOOL Camera_SetMode16At(Unk_0223f44c_Vec *v) {
    Unk_021c3070 *c = gCamera;
    if (c) {
        Unk_0223f44c_Vec *d = (Unk_0223f44c_Vec *)&c->focusPointA;
        *d = *v;
        return Unk_0203b350_setMode(gCamera, 0x10);
    }
    return FALSE;
}

BOOL Camera_InitMode16(Unk_021c3070 *o) {
    PlayerActor_GetBodyPos(4);
    Unk_020d93b8_loadPose(o, 0x1e, 0);
    Unk_020d93b8_setBlendPreset(o, 0);
    Camera_StartBlend();
    Camera_PlaySe(o, 0x2f);
    return TRUE;
}

void Camera_UpdateMode16(Unk_021c3070 *o) {
    Unk_0223f44c_Vec *p = PlayerActor_GetBodyPos(4);
    Unk_0223f44c_Vec a, b;
    s32 d;
    func_01ffd070(&a, p, &o->focusPointA);
    func_020e9790(&b, &a, 1);
    o->targetFocus.x = b.x;
    o->targetFocus.y = b.y;
    o->targetFocus.z = b.z;
    d = p->z - o->focusPointA.z;
    if (d < 0) {
        d = -d;
    }
    o->targetFocus.z = o->targetFocus.z + (d >> 1);
    Unk_0223f44c_Finish(o);
}

BOOL Camera_InitMode14(Unk_021c3070 *o) {
    Unk_020d93b8_loadPose(o, sCameraPoseGrid[o->presetRow][o->presetCol], 0);
    Unk_020d93b8_setBlendPreset(o, 0);
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode14(Unk_021c3070 *o) {
    o->targetFocus.x = data_ov004_0224682c.x;
    o->targetFocus.y = data_ov004_0224682c.y;
    o->targetFocus.z = data_ov004_0224682c.z;
    Unk_0223f44c_Finish(o);
}

BOOL Camera_InitMode15(Unk_021c3070 *o) {
    Unk_020d93b8_loadPose(o, 0x1d, 0);
    Unk_020d93b8_setBlendPreset(o, 4);
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode15(Unk_021c3070 *o) {
    o->targetFocus.x = data_ov004_02246838.x;
    o->targetFocus.y = data_ov004_02246838.y;
    o->targetFocus.z = data_ov004_02246838.z;
    Unk_0223f44c_Finish(o);
}

void Camera_SetMode14(void) {
    Unk_0203b350_setMode(gCamera, 0xe);
}

void Camera_SetMode15(void) {
    Unk_0203b350_setMode(gCamera, 0xf);
}

BOOL Camera_InitMode20(Unk_021c3070 *o) {
    Unk_020d93b8_loadPose(o, 0x20, 0);
    Camera_FinishBlend();
    return TRUE;
}

void Camera_UpdateMode20(Unk_021c3070 *o) {
    o->targetFocus.x = o->focusPointA.x;
    o->targetFocus.y = o->focusPointA.y;
    o->targetFocus.z = o->focusPointA.z;
    Unk_0223f44c_Finish(o);
}

void Camera_SetMode20At(Unk_0223f44c_Vec *v) {
    *(Unk_0223f44c_Vec *)&gCamera->focusPointA = *v;
    Unk_0203b350_setMode(gCamera, 0x14);
}

void Camera_SetMode18(void) {
    Unk_0203b350_setMode(gCamera, 0x12);
}

void RoomCamera_KkShowWideShot(void) {
    Camera_KkShowWideShot(gCamera);
}

void RoomCamera_KkShowPickShot(void) {
    Camera_KkShowPickShot(gCamera);
}

void RoomCamera_KkShowResetShot(void) {
    Camera_KkShowResetShot(gCamera);
}

#define COPY_TBL(o, t)                 \
    o->target.h0 = t.a;                   \
    o->target.h1 = t.b;                   \
    o->target.w0 = t.w0;                 \
    o->target.x = t.p.x;                \
    o->target.y = t.p.y;                \
    o->target.z = t.p.z;                \
    o->targetFocus.x = t.q.x;                \
    o->targetFocus.y = t.q.y;                \
    o->targetFocus.z = t.q.z

BOOL Camera_InitMode18(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = (Unk_0223f44c_Mode *)&o->modeParam;
    m->v0 = 0;
    m->v2 = -1;
    m->v4 = 0;
    m->v6 = -1;
    m->v8 = -1;
    m->va = 0;
    m->vc = 0xe;
    m->b0 = 0;
    m->b1 = 0;
    COPY_TBL(o, sCameraKkShowSetup);
    Unk_020d93b8_setBlendParams(o, data_ov004_0224f32c);
    Camera_StartBlend();
    return TRUE;
}

void Camera_UpdateMode18(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = (Unk_0223f44c_Mode *)&o->modeParam;
    Unk_0223f534_Ent *e;
    if (m->v4 == 1) {
        e = &sCameraKkShowShots[m->v2];
        o->targetFocus.x = e->w0;
        o->targetFocus.y = e->w1;
        o->targetFocus.z = e->w2;
        VEC_Subtract(&o->targetFocus.x, &o->target.x, &o->targetFocus.x);
        if (Unk_0203b350_getDistance(o) > 0x1400) {
            o->target.w0 = o->target.w0 + e->w6;
        }
        o->target.h0 = o->target.h0 + e->h20;
        m->v0 = m->v0 + e->h20;
        {
            Unk_0223f6bc_V3 t(e->w3, 0, e->w4);
            VEC_Add(&o->targetFocus.x, &t, &o->targetFocus.x);
            func_020e93a0(&t, m->v0);
            VEC_Subtract(&o->targetFocus.x, &t, &o->targetFocus.x);
        }
    }
    Unk_0223f44c_Finish(o);
}

void Camera_KkShowWideShot(Unk_021c3070 *o) {
    COPY_TBL(o, sCameraKkShowWideSetup);
    Unk_020d93b8_setBlendParams(o, data_ov004_0224f33c);
    Camera_StartBlend();
}

void Camera_KkShowPickShot(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = (Unk_0223f44c_Mode *)&o->modeParam;
    Unk_0223f534_Ent *e;
    s32 lim[2];
    s32 i;
    m->v0 = 0;
    if (Random_GlobalBelow(2) == 1) {
        m->v2 = Random_GlobalBelow(m->vc - 2);
    } else {
        m->v2 = Random_GlobalBelow(m->vc);
    }
    {
        s32 b = m->v8;
        s32 a = m->v6;
        if (a > b) {
            lim[0] = b;
            lim[1] = a;
        } else {
            lim[0] = a;
            lim[1] = b;
        }
    }
    for (i = 0; i < 2; i++) {
        s32 l = lim[i];
        if (l != -1 && m->v2 >> 1 >= l >> 1) {
            m->v2 += 2;
        }
    }
    if ((&m->v6)[m->va] == -1) {
        m->vc = m->vc - 2;
    }
    (&m->v6)[m->va] = m->v2;
    m->va = m->va ^ 1;
    m->v4 = 1;
    e = &sCameraKkShowShots[m->v2];
    o->targetFocus.x = e->w0;
    o->targetFocus.y = e->w1;
    o->targetFocus.z = e->w2;
    {
        void *p = &o->targetFocus.x;
        VEC_Subtract(p, &o->target.x, p);
    }
    o->target.h1 = e->h1e;
    o->target.h0 = e->h1c;
    o->target.w0 = e->w5;
    Camera_FinishBlend();
}

void Camera_KkShowResetShot(Unk_021c3070 *o) {
    Unk_0223f44c_Mode *m = (Unk_0223f44c_Mode *)&o->modeParam;
    m->v0 = 0;
    m->v2 = 0;
    m->v4 = 2;
    COPY_TBL(o, sCameraKkShowSetup);
    o->current = sCameraKkShowPrevSetup.a;
    o->currentPitch = sCameraKkShowPrevSetup.b;
    o->currentDistance = sCameraKkShowPrevSetup.w0;
    o->currentOffset = sCameraKkShowPrevSetup.p.x;
    o->currentOffsetY = sCameraKkShowPrevSetup.p.y;
    o->currentOffsetZ = sCameraKkShowPrevSetup.p.z;
    o->currentFocus = sCameraKkShowPrevSetup.q.x;
    o->currentFocusY = sCameraKkShowPrevSetup.q.y;
    o->currentFocusZ = sCameraKkShowPrevSetup.q.z;
    Unk_020d93b8_setBlendParams(o, data_ov004_0224f31c);
    Camera_StartBlend();
}

void RoomCamera_StartBlendToPlayer(void) {
    Camera_StartBlendToPlayer(gCamera);
}

}

// ---- data ----
Unk_ov004_0223f43c_B4 data_ov004_022589a4(31, 20, 20, 31);
Unk_ov004_0223f43c_B4 data_ov004_02258994(20, 20, 31, 31);
Unk_ov004_0223f43c_B4 data_ov004_02258990(31, 31, 20, 31);
// Data order: this unit is placed object by object (see object_order.txt).
const Unk_0223f44c_Vec data_ov004_02246838 = {0x10000, 0, 0x11000};
Unk_ov004_0223f43c_B4 data_ov004_022589a0(20, 31, 20, 31);
const Unk_0223f44c_Vec data_ov004_0224682c = {0x10000, 0, 0x11000};
u32 data_ov004_0224f32c[4] = {0, 0x3c000, 0x5000, 0x5000};
Unk_ov004_0223f43c_B4 data_ov004_02258998(20, 31, 31, 31);
Unk_ov004_0223f43c_B4 data_ov004_0225899c(20, 24, 24, 31);
Unk_0223f44c_Tbl sCameraKkShowSetup = {0, 0x1100, 0x14100, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0x13600, 0x200, 0x17600)};
u32 data_ov004_0224f31c[4] = {0, 0x438000, 0, 0x384000};
u32 data_ov004_0224f33c[4] = {0, 0x7d0000, 0x7d0000, 0};
Unk_0223f44c_Tbl sCameraKkShowWideSetup = {0, -0x200, 0x6a00, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0x10400, 0x200, 0x12b00)};
Unk_0223f534_Ent sCameraKkShowShots[14] = {
    {0xf9fc, 0x2000, 0x157c2, -2009, -8523, 0xe700, 0x0, -12544, 3328, 40, 0},
    {0xf623, 0x1b00, 0x11405, -1571, 0x1bfb, 0xb000, 0x20, 15104, 1280, -48, 0},
    {0x10fba, 0x2000, 0x14874, -9072, -4623, 0x8d00, 0x0, -17408, -256, 48, 0},
    {0x1291d, 0x2500, 0x14105, -14621, -4357, 0x3d00, 0x0, 10496, 768, -48, 0},
    {0x122ac, 0x2000, 0x12de6, -12972, 0x21a, 0x13c00, -32, -6144, 512, 32, 0},
    {0xf895, 0x1b00, 0xf717, -1621, 0x3df2, 0x14600, 0x0, 7680, 1536, -32, 0},
    {0x13600, 0x2000, 0x16200, 0x0, 0x0, 0x12300, 0x80, 0, 15616, -96, 0},
    {0x13179, 0x1b00, 0x15f6e, 0x3ae, 0xf2, 0x15f00, -48, 15872, 11008, 96, 0},
    {0x10400, 0x2000, 0x13000, -5120, 0x0, 0x8800, 0x70, 0, 2816, 16, 0},
    {0x12070, 0x2a00, 0x13425, -12400, -1061, 0x3800, 0xa0, 12032, 2304, -16, 0},
    {0xf826, 0x2000, 0x199af, 0x39ee, 0xdd8, 0x11e00, 0x0, 22784, 2304, 24, 0},
    {0x12f28, 0x2000, 0x1b890, -261, -5145, 0x8300, 0x0, -26112, 0, -40, 0},
    {0x18412, 0x1100, 0x15882, 0x124b, -2178, 0x7900, 0x0, 29952, 5120, 24, 0},
    {0x1a6f6, 0x2000, 0x15892, -5483, -2535, 0xe700, -48, -13568, 2560, -24, 0},
};

Unk_0223f44c_Tbl sCameraKkShowPrevSetup = {0x1b00, 0x1000, 0x9700, Unk_ov004_0223f44c_V3D(0, 0x1e14, 0xf0a), Unk_ov004_0223f44c_V3D(0xf5ad, 0x200, 0x12757)};

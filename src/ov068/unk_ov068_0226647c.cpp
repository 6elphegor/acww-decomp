// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/Camera.h"
#include "actor/Actor.h"
#include "game/Unk_ov068_Vec.h"
#include "gfx/DebugColor.h"


class CameraEventModes;

// Camera-mode sub-state at +0x21c of the camera
struct CameraTownTourState {
    u16 holdTimer;
    s16 buildingIndex;
    s32 buildingX, buildingY, buildingZ;
    Unk_ov068_02266680_Vec *offset;
    s32 speed;
};

struct TownTourBuildingRange {
    u16 lo, hi;
};



extern "C" {
extern Unk_ov068_02266680_Vec gVec3Zero;
extern void *gSceneBlockMap;
extern CameraSwayPattern kCameraSwayPatterns[];
extern s16 data_02135f44[];
extern s32 data_ov068_0226fc48;
extern s32 data_ov068_0226fc40;
extern s32 data_ov068_0226fc44;
extern u16 sTownTourBuildings[];
extern const u32 sTownTourBuildingAttrs[];
extern void *sTownTourOffsets[];
Unk_ov068_02266680_Vec *PlayerActor_GetBodyPos(s32 id);
void Camera_StartBlend();
void Camera_FinishBlend();
void Camera_GetLookAtPoint(Unk_ov068_02266680_Vec *out, CameraEventModes *self);
void VEC_Add(Unk_ov068_02266680_Vec *a, void *b, Unk_ov068_02266680_Vec *c);
void Math_StepS32Alt(void *a, s32 b, s32 c);
s32 Math_ApproachVecXZ(void *a, Unk_ov068_02266680_Vec *v, s32 c, s32 d, s32 e);
s32 Math_StepS16(void *a, s32 b, s32 c);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnitCenter(Unk_ov068_02266680_Vec *out, s32 a, s32 b, s32 c, s32 d);
s32 Math_CountDownU16(void *);
s32 func_01ffcb0c(s32, s32);
s32 Random_GlobalBelow(s32);
s32 Camera_UpdateSway(Camera *c);
void Camera_SetSwayPattern2(Camera *c, s32 idx);
void Camera_SetSwayPattern(Camera *c, s32 idx);
}

class CameraEventModes {
public:
    void updateModeSway();
    BOOL initModeSway();
    void updateMode13();
    BOOL initMode13();
    void updateModeTownTour();
    BOOL initModeTownTour();
    void updateModeFollowTarget();
    BOOL initModeFollowTarget();

    u8 pad_00[0x110];
    s32 targetFocus, targetFocusY, targetFocusZ;
    u8 pad_11c[0x1fc - 0x11c];
    s32 prevMode;
    u8 pad_200[0x21c - 0x200];
    CameraTownTourState townTour;
};

extern "C" {
void _ZN6Camera11dragFocusToEP14Unk_0203b350_V(void *self, Unk_ov068_02266680_Vec *v);
void _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(void *self, Unk_ov068_02266680_Vec *v, s32 a, s32 b, s32 c);
void _ZN6Camera11updateBlendEv(void *self);
void _ZN6Camera7setFovyEi(void *self, s32 a);
s32 _ZN6Camera11getDistanceEv(void *self);
s16 _ZN6Camera6getYawEv(void *self);
s16 _ZN6Camera8getPitchEv(void *self);
void _ZN6Camera14setBlendPresetEi(void *self, s32 a);
void _ZN6Camera8loadPoseEiP10CameraPose(void *self, s32 a, s32 b);
}

#define R_TAIL(V) \
    _ZN6Camera11updateBlendEv(this); \
    Camera_GetLookAtPoint(&V, this); \
    s32 a = _ZN6Camera8getPitchEv(this); \
    s32 b = _ZN6Camera6getYawEv(this); \
    _ZN6Camera14setLookAtOrbitEP14Unk_0203b350_Viii(this, &V, a, b, _ZN6Camera11getDistanceEv(this));

// Definition order below reproduces the original data order (heapsort model); colours = sinit store order.
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetPlayerHouse;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetsNookShop[4];
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetMuseum;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetAbleSisters;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetTownHall;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetGateHouse;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetVillagerHouse;
extern "C" s32 data_ov068_0226fc48 = 0x100;
extern "C" void *sTownTourOffsets[7] = {&sTownTourOffsetPlayerHouse, sTownTourOffsetsNookShop, &sTownTourOffsetVillagerHouse,
                                           &sTownTourOffsetMuseum, &sTownTourOffsetAbleSisters, &sTownTourOffsetTownHall,
                                           &sTownTourOffsetGateHouse};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetVillagerHouse = {-0xc00, 0, 0x1c00};
extern "C" DebugColor data_ov068_02270fd4(0x1f, 0x14, 0x14, 0x1f);
extern "C" const u32 sTownTourBuildingAttrs[7] = {1, 2, 0, 0x800, 2, 0x200, 0x400};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetsNookShop[4] = {{-0xc00, 0, 0x2400}, {-0xc00, 0, 0x1400},
                                                            {-0x2000, 0, 0x2400}, {-0x2c00, 0, 0x2400}};
extern "C" DebugColor data_ov068_02270fd0(0x14, 0x14, 0x1f, 0x1f);
extern "C" DebugColor data_ov068_02270fc4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" DebugColor data_ov068_02270fc8(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetTownHall = {0, 0, 0x1c00};
extern "C" s32 data_ov068_0226fc44 = 0x80;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetMuseum = {0, 0, 0xc00};
extern "C" DebugColor data_ov068_02270fd8(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetAbleSisters = {-0xc00, 0, 0x2400};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetPlayerHouse = {0, 0, 0x1c00};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetGateHouse = {0x1000, 0, 0x1000};
extern "C" u16 sTownTourBuildings[14] = {0x5014, 0x501a, 0x500d, 0x500d, 0x5001, 0x5001, 0x5011,
                                          0x5011, 0x500c, 0x500c, 0x5000, 0x5000, 0x500b, 0x500b};
extern "C" s32 data_ov068_0226fc40 = 1;
extern "C" DebugColor data_ov068_02270fcc(0x14, 0x18, 0x18, 0x1f);

BOOL CameraEventModes::initModeFollowTarget() {
    _ZN6Camera8loadPoseEiP10CameraPose(this, 0, 0);
    _ZN6Camera14setBlendPresetEi(this, 0);
    Camera_FinishBlend();
    return TRUE;
}

void CameraEventModes::updateModeFollowTarget() {
    Unk_ov068_02266680_Vec d;
    Actor *o = *(Actor **)((u8 *)this + 0x21c); // the followed villager (Camera::modeParam, set by main for mode 7)
    d.x = 0;
    d.y = 0;
    d.z = 0;
    if (o) {
        VecFx32 *pv = &o->position;
        d.x = pv->x;
        d.y = pv->y;
        d.z = pv->z;
    }
    _ZN6Camera11dragFocusToEP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL CameraEventModes::initModeTownTour() {
    u16 e[2];
    _ZN6Camera8loadPoseEiP10CameraPose(this, 0, 0);
    _ZN6Camera14setBlendPresetEi(this, 0);
    Camera_FinishBlend();
    void *g = gSceneBlockMap;
    s32 a = 0, b = 0, c = 0, d = 0;
    CameraTownTourState *s = &townTour;
    s->holdTimer = 0x3c;
    s->buildingIndex = 0;
    if (g) {
        e[0] = 0x5014;
        e[1] = 0x501a;
        if (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &e[0], &e[1], 1, 0) == 1) {
            Unk_ov068_02266680_Vec pos;
            FieldPos_FromBlockUnitCenter(&pos, a, b, c, d);
            s->offset = (Unk_ov068_02266680_Vec *)sTownTourOffsets[0];
            targetFocus = pos.x;
            targetFocusY = pos.y;
            targetFocusZ = pos.z;
        }
    }
    s->buildingX = targetFocus;
    s->buildingY = targetFocusY;
    s->buildingZ = targetFocusZ;
    targetFocus += s->offset->x;
    targetFocusY += s->offset->y;
    targetFocusZ += s->offset->z;
    s->speed = 0;
    return TRUE;
}

void CameraEventModes::updateModeTownTour() {
    CameraTownTourState *s = &townTour;
    Unk_ov068_02266680_Vec v;
    v.x = s->buildingX;
    v.y = s->buildingY;
    v.z = s->buildingZ;
    VEC_Add(&v, s->offset, &v);
    Math_StepS32Alt(&s->speed, data_ov068_0226fc48, data_ov068_0226fc40);
    if (Math_ApproachVecXZ(&targetFocus, &v, data_ov068_0226fc44, s->speed, 8) == 0) {
        if (Math_StepS16(s, 0, 1) != 0) {
            s->holdTimer = 0x3c;
            if (Math_StepS16(&s->buildingIndex, 7, 1) != 0) {
                s->buildingIndex = 0;
            }
            void *g = gSceneBlockMap;
            s32 cnt = 0;
            struct { u16 a, b; } out;
            s32 a = 0, b = 0, c = 0, d = 0;
            if (g != 0) {
                TownTourBuildingRange *tbl = (TownTourBuildingRange *)sTownTourBuildings;
                do {
                    TownTourBuildingRange *e = &tbl[s->buildingIndex];
                    u16 t = e->lo;
                    BOOL r1;
                    if (t >= 0x5001 && t <= 0x5008) {
                        r1 = TRUE;
                    } else {
                        r1 = FALSE;
                    }
                    if (r1) {
                        e->lo++;
                        if (tbl[s->buildingIndex].lo > 0x5008) {
                            tbl[s->buildingIndex].lo = 0x5001;
                        }
                        tbl[s->buildingIndex].hi = tbl[s->buildingIndex].lo;
                    } else {
                        BOOL r2;
                        if (t >= 0x500d && t <= 0x5010) {
                            r2 = TRUE;
                        } else {
                            r2 = FALSE;
                        }
                        if (r2) {
                            e->lo++;
                            if (tbl[s->buildingIndex].lo > 0x5010) {
                                tbl[s->buildingIndex].lo = 0x500d;
                            }
                            tbl[s->buildingIndex].hi = tbl[s->buildingIndex].lo;
                            cnt = tbl[s->buildingIndex].lo - 0x500d;
                        }
                    }
                    out.a = tbl[s->buildingIndex].lo;
                    out.b = tbl[s->buildingIndex].hi;
                } while (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &out.a, &out.b, sTownTourBuildingAttrs[s->buildingIndex], 0) == 0);
                Unk_ov068_02266680_Vec pos;
                FieldPos_FromBlockUnitCenter(&pos, a, b, c, d);
                s->buildingX = pos.x;
                s->buildingY = pos.y;
                s->buildingZ = pos.z;
                u8 *bs = (u8 *)sTownTourOffsets[s->buildingIndex];
                cnt = cnt * 12;
                s->offset = (Unk_ov068_02266680_Vec *)(bs + cnt);
                s->speed = 0;
            }
        }
    }
    Unk_ov068_02266680_Vec vv;
    R_TAIL(vv)
}

BOOL CameraEventModes::initMode13() {
    _ZN6Camera8loadPoseEiP10CameraPose(this, 0x1a, 0);
    Camera_FinishBlend();
    return TRUE;
}

void CameraEventModes::updateMode13() {
    Unk_ov068_02266680_Vec d;
    d = gVec3Zero;
    Unk_ov068_02266680_Vec *p = PlayerActor_GetBodyPos(4);
    if (p) {
        d = *p;
    }
    _ZN6Camera11dragFocusToEP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL CameraEventModes::initModeSway() {
    _ZN6Camera8loadPoseEiP10CameraPose(this, 0x10, 0);
    _ZN6Camera14setBlendPresetEi(this, 0);
    if (prevMode == 2) {
        Camera_StartBlend();
    } else {
        Camera_FinishBlend();
    }
    _ZN6Camera7setFovyEi(this, 0x1c71);
    Camera_SetSwayPattern((Camera *)this, 0);
    return TRUE;
}

void CameraEventModes::updateModeSway() {
    Unk_ov068_02266680_Vec v;
    targetFocus = gVec3Zero.x;
    targetFocusY = gVec3Zero.y;
    targetFocusZ = gVec3Zero.z;
    targetFocusY += Camera_UpdateSway((Camera *)this);
    R_TAIL(v)
}

extern "C" void Camera_SetSwayPattern(Camera *c, s32 idx) {
    c->sway.bobPattern = idx;
    if (c->sway.bobPattern >= 4) {
        c->sway.bobPattern = 0;
    }
    c->sway.bobTimer = kCameraSwayPatterns[c->sway.bobPattern].duration;
    c->sway.bobTimer += Random_GlobalBelow(kCameraSwayPatterns[c->sway.bobPattern].durationRand);
    c->sway.bobPhase = 0;
}

extern "C" void Camera_SetSwayPattern2(Camera *c, s32 idx) {
    c->sway.rollPattern = idx;
    if (c->sway.rollPattern >= 4) {
        c->sway.rollPattern = 0;
    }
    c->sway.rollTimer = kCameraSwayPatterns[c->sway.rollPattern].duration;
    c->sway.rollTimer += Random_GlobalBelow(kCameraSwayPatterns[c->sway.rollPattern].durationRand);
    c->sway.rollPhase = 0;
}

extern "C" s32 Camera_UpdateSway(Camera *c) {
    if (Math_CountDownU16(&c->sway.bobTimer) == 0) {
        s16 a = c->sway.bobPhase;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->sway.bobPattern;
            if (s == 0) {
                if (Random_GlobalBelow(100) < 80) {
                    c->sway.bobPattern = 1;
                } else {
                    c->sway.bobPattern = 2;
                }
            } else if (s == 2) {
                c->sway.bobPattern = 1;
            } else {
                c->sway.bobPattern = 0;
            }
            Camera_SetSwayPattern(c, c->sway.bobPattern);
        }
    }
    if (Math_CountDownU16(&c->sway.rollTimer) == 0) {
        s16 a = c->sway.rollPhase;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->sway.rollPattern;
            if (s == 0) {
                c->sway.rollPattern = 1;
            } else if (s == 2) {
                c->sway.rollPattern = 1;
            } else {
                c->sway.rollPattern = 0;
            }
            Camera_SetSwayPattern2(c, c->sway.rollPattern);
        }
    }
    s32 d = kCameraSwayPatterns[c->sway.rollPattern].phaseStep;
    if (d != 0) {
        c->sway.rollPhase = c->sway.rollPhase + d;
        u32 idx = ((u16)c->sway.rollPhase >> 4) * 2;
        c->roll = func_01ffcb0c(data_02135f44[idx], kCameraSwayPatterns[c->sway.rollPattern].amplitude);
    }
    d = kCameraSwayPatterns[c->sway.bobPattern].phaseStep;
    if (d != 0) {
        c->sway.bobPhase = c->sway.bobPhase + d;
        u32 idx = ((u16)c->sway.bobPhase >> 4) * 2;
        return func_01ffcb0c(data_02135f44[idx], kCameraSwayPatterns[c->sway.bobPattern].amplitude);
    }
    return 0;
}

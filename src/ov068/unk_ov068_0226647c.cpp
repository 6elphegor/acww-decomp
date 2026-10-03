// mwcc-version: 1.2/base
#include "types.h"

struct Unk_ov068_02266680_Vec {
    s32 x, y, z;
};

class CameraEventModes;

struct Unk_ov068_02266ab8_Owner {
    u8 pad_00[0x5c];
    Unk_ov068_02266680_Vec unk_5c;
};

// Camera-mode sub-state at +0x21c of the camera
struct Unk_ov068_02266680_Sub {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04, unk_08, unk_0c;
    Unk_ov068_02266680_Vec *unk_10;
    s32 unk_14;
};

struct Unk_ov068_022667c4_Ent {
    u16 lo, hi;
};

// Camera object (gCamera); fields used by Camera_UpdateSway and friends
struct Unk_ov068_0226647c_Cam {
    /* 0x000 */ u8 pad_000[0x174];
    /* 0x174 */ s16 unk_174;
    /* 0x176 */ u8 pad_176[0x21c - 0x176];
    /* 0x21c */ s16 unk_21c;
    /* 0x21e */ s16 unk_21e;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u16 unk_222;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
};

struct Unk_ov068_0226647c_Row {
    u16 a;
    u16 b;
    s16 c;
    s16 pad;
    s32 d;
};

struct Unk_ov068_02266680_Color {
    u8 a, b, c, d;
    Unk_ov068_02266680_Color(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
extern Unk_ov068_02266680_Vec gVec3Zero;
extern void *gSceneBlockMap;
extern Unk_ov068_0226647c_Row kCameraSwayPatterns[];
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
void func_020e759c(void *a, s32 b, s32 c);
s32 func_020e7d4c(void *a, Unk_ov068_02266680_Vec *v, s32 c, s32 d, s32 e);
s32 func_020e769c(void *a, s32 b, s32 c);
s32 BlockMap_FindItemAllAttr(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void FieldPos_FromBlockUnitCenter(Unk_ov068_02266680_Vec *out, s32 a, s32 b, s32 c, s32 d);
s32 func_020e7500(void *);
s32 func_01ffcb0c(s32, s32);
s32 Random_GlobalBelow(s32);
s32 Camera_UpdateSway(Unk_ov068_0226647c_Cam *c);
void Camera_SetSwayPattern2(Unk_ov068_0226647c_Cam *c, s32 idx);
void Camera_SetSwayPattern(Unk_ov068_0226647c_Cam *c, s32 idx);
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
    s32 unk_110, unk_114, unk_118;
    u8 pad_11c[0x1fc - 0x11c];
    s32 unk_1fc;
    u8 pad_200[0x21c - 0x200];
    Unk_ov068_02266680_Sub unk_21c;
};

extern "C" {
void _ZN12Unk_0203b35011dragFocusToEP14Unk_0203b350_V(void *self, Unk_ov068_02266680_Vec *v);
void _ZN12Unk_0203b35014setLookAtOrbitEP14Unk_0203b350_Viii(void *self, Unk_ov068_02266680_Vec *v, s32 a, s32 b, s32 c);
void _ZN12Unk_0203b35011updateBlendEv(void *self);
void _ZN12Unk_0203b3507setFovyEi(void *self, s32 a);
s32 _ZN12Unk_0203b35011getDistanceEv(void *self);
s16 _ZN12Unk_020d93b86getYawEv(void *self);
s16 _ZN12Unk_020d93b88getPitchEv(void *self);
void _ZN12Unk_020d93b814setBlendPresetEi(void *self, s32 a);
void _ZN12Unk_020d93b88loadPoseEiP10CameraPose(void *self, s32 a, s32 b);
}

#define R_TAIL(V) \
    _ZN12Unk_0203b35011updateBlendEv(this); \
    Camera_GetLookAtPoint(&V, this); \
    s32 a = _ZN12Unk_020d93b88getPitchEv(this); \
    s32 b = _ZN12Unk_020d93b86getYawEv(this); \
    _ZN12Unk_0203b35014setLookAtOrbitEP14Unk_0203b350_Viii(this, &V, a, b, _ZN12Unk_0203b35011getDistanceEv(this));

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
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd4(0x1f, 0x14, 0x14, 0x1f);
extern "C" const u32 sTownTourBuildingAttrs[7] = {1, 2, 0, 0x800, 2, 0x200, 0x400};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetsNookShop[4] = {{-0xc00, 0, 0x2400}, {-0xc00, 0, 0x1400},
                                                            {-0x2000, 0, 0x2400}, {-0x2c00, 0, 0x2400}};
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd0(0x14, 0x14, 0x1f, 0x1f);
extern "C" Unk_ov068_02266680_Color data_ov068_02270fc4(0x1f, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02266680_Color data_ov068_02270fc8(0x14, 0x1f, 0x14, 0x1f);
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetTownHall = {0, 0, 0x1c00};
extern "C" s32 data_ov068_0226fc44 = 0x80;
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetMuseum = {0, 0, 0xc00};
extern "C" Unk_ov068_02266680_Color data_ov068_02270fd8(0x14, 0x1f, 0x1f, 0x1f);
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetAbleSisters = {-0xc00, 0, 0x2400};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetPlayerHouse = {0, 0, 0x1c00};
extern "C" Unk_ov068_02266680_Vec sTownTourOffsetGateHouse = {0x1000, 0, 0x1000};
extern "C" u16 sTownTourBuildings[14] = {0x5014, 0x501a, 0x500d, 0x500d, 0x5001, 0x5001, 0x5011,
                                          0x5011, 0x500c, 0x500c, 0x5000, 0x5000, 0x500b, 0x500b};
extern "C" s32 data_ov068_0226fc40 = 1;
extern "C" Unk_ov068_02266680_Color data_ov068_02270fcc(0x14, 0x18, 0x18, 0x1f);

BOOL CameraEventModes::initModeFollowTarget() {
    _ZN12Unk_020d93b88loadPoseEiP10CameraPose(this, 0, 0);
    _ZN12Unk_020d93b814setBlendPresetEi(this, 0);
    Camera_FinishBlend();
    return TRUE;
}

void CameraEventModes::updateModeFollowTarget() {
    Unk_ov068_02266680_Vec d;
    Unk_ov068_02266ab8_Owner *o = *(Unk_ov068_02266ab8_Owner **)((u8 *)this + 0x21c);
    d.x = 0;
    d.y = 0;
    d.z = 0;
    if (o) {
        Unk_ov068_02266680_Vec *pv = &o->unk_5c;
        d.x = pv->x;
        d.y = pv->y;
        d.z = pv->z;
    }
    _ZN12Unk_0203b35011dragFocusToEP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL CameraEventModes::initModeTownTour() {
    u16 e[2];
    _ZN12Unk_020d93b88loadPoseEiP10CameraPose(this, 0, 0);
    _ZN12Unk_020d93b814setBlendPresetEi(this, 0);
    Camera_FinishBlend();
    void *g = gSceneBlockMap;
    s32 a = 0, b = 0, c = 0, d = 0;
    Unk_ov068_02266680_Sub *s = &unk_21c;
    s->unk_00 = 0x3c;
    s->unk_02 = 0;
    if (g) {
        e[0] = 0x5014;
        e[1] = 0x501a;
        if (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &e[0], &e[1], 1, 0) == 1) {
            Unk_ov068_02266680_Vec pos;
            FieldPos_FromBlockUnitCenter(&pos, a, b, c, d);
            s->unk_10 = (Unk_ov068_02266680_Vec *)sTownTourOffsets[0];
            unk_110 = pos.x;
            unk_114 = pos.y;
            unk_118 = pos.z;
        }
    }
    s->unk_04 = unk_110;
    s->unk_08 = unk_114;
    s->unk_0c = unk_118;
    unk_110 += s->unk_10->x;
    unk_114 += s->unk_10->y;
    unk_118 += s->unk_10->z;
    s->unk_14 = 0;
    return TRUE;
}

void CameraEventModes::updateModeTownTour() {
    Unk_ov068_02266680_Sub *s = &unk_21c;
    Unk_ov068_02266680_Vec v;
    v.x = s->unk_04;
    v.y = s->unk_08;
    v.z = s->unk_0c;
    VEC_Add(&v, s->unk_10, &v);
    func_020e759c(&s->unk_14, data_ov068_0226fc48, data_ov068_0226fc40);
    if (func_020e7d4c(&unk_110, &v, data_ov068_0226fc44, s->unk_14, 8) == 0) {
        if (func_020e769c(s, 0, 1) != 0) {
            s->unk_00 = 0x3c;
            if (func_020e769c(&s->unk_02, 7, 1) != 0) {
                s->unk_02 = 0;
            }
            void *g = gSceneBlockMap;
            s32 cnt = 0;
            struct { u16 a, b; } out;
            s32 a = 0, b = 0, c = 0, d = 0;
            if (g != 0) {
                Unk_ov068_022667c4_Ent *tbl = (Unk_ov068_022667c4_Ent *)sTownTourBuildings;
                do {
                    Unk_ov068_022667c4_Ent *e = &tbl[s->unk_02];
                    u16 t = e->lo;
                    BOOL r1;
                    if (t >= 0x5001 && t <= 0x5008) {
                        r1 = TRUE;
                    } else {
                        r1 = FALSE;
                    }
                    if (r1) {
                        e->lo++;
                        if (tbl[s->unk_02].lo > 0x5008) {
                            tbl[s->unk_02].lo = 0x5001;
                        }
                        tbl[s->unk_02].hi = tbl[s->unk_02].lo;
                    } else {
                        BOOL r2;
                        if (t >= 0x500d && t <= 0x5010) {
                            r2 = TRUE;
                        } else {
                            r2 = FALSE;
                        }
                        if (r2) {
                            e->lo++;
                            if (tbl[s->unk_02].lo > 0x5010) {
                                tbl[s->unk_02].lo = 0x500d;
                            }
                            tbl[s->unk_02].hi = tbl[s->unk_02].lo;
                            cnt = tbl[s->unk_02].lo - 0x500d;
                        }
                    }
                    out.a = tbl[s->unk_02].lo;
                    out.b = tbl[s->unk_02].hi;
                } while (BlockMap_FindItemAllAttr(g, &a, &b, &c, &d, &out.a, &out.b, sTownTourBuildingAttrs[s->unk_02], 0) == 0);
                Unk_ov068_02266680_Vec pos;
                FieldPos_FromBlockUnitCenter(&pos, a, b, c, d);
                s->unk_04 = pos.x;
                s->unk_08 = pos.y;
                s->unk_0c = pos.z;
                u8 *bs = (u8 *)sTownTourOffsets[s->unk_02];
                cnt = cnt * 12;
                s->unk_10 = (Unk_ov068_02266680_Vec *)(bs + cnt);
                s->unk_14 = 0;
            }
        }
    }
    Unk_ov068_02266680_Vec vv;
    R_TAIL(vv)
}

BOOL CameraEventModes::initMode13() {
    _ZN12Unk_020d93b88loadPoseEiP10CameraPose(this, 0x1a, 0);
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
    _ZN12Unk_0203b35011dragFocusToEP14Unk_0203b350_V(this, &d);
    Unk_ov068_02266680_Vec v;
    R_TAIL(v)
}

BOOL CameraEventModes::initModeSway() {
    _ZN12Unk_020d93b88loadPoseEiP10CameraPose(this, 0x10, 0);
    _ZN12Unk_020d93b814setBlendPresetEi(this, 0);
    if (unk_1fc == 2) {
        Camera_StartBlend();
    } else {
        Camera_FinishBlend();
    }
    _ZN12Unk_0203b3507setFovyEi(this, 0x1c71);
    Camera_SetSwayPattern((Unk_ov068_0226647c_Cam *)this, 0);
    return TRUE;
}

void CameraEventModes::updateModeSway() {
    Unk_ov068_02266680_Vec v;
    unk_110 = gVec3Zero.x;
    unk_114 = gVec3Zero.y;
    unk_118 = gVec3Zero.z;
    unk_114 += Camera_UpdateSway((Unk_ov068_0226647c_Cam *)this);
    R_TAIL(v)
}

extern "C" void Camera_SetSwayPattern(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_224 = idx;
    if (c->unk_224 >= 4) {
        c->unk_224 = 0;
    }
    c->unk_220 = kCameraSwayPatterns[c->unk_224].a;
    c->unk_220 += Random_GlobalBelow(kCameraSwayPatterns[c->unk_224].b);
    c->unk_21c = 0;
}

extern "C" void Camera_SetSwayPattern2(Unk_ov068_0226647c_Cam *c, s32 idx) {
    c->unk_225 = idx;
    if (c->unk_225 >= 4) {
        c->unk_225 = 0;
    }
    c->unk_222 = kCameraSwayPatterns[c->unk_225].a;
    c->unk_222 += Random_GlobalBelow(kCameraSwayPatterns[c->unk_225].b);
    c->unk_21e = 0;
}

extern "C" s32 Camera_UpdateSway(Unk_ov068_0226647c_Cam *c) {
    if (func_020e7500(&c->unk_220) == 0) {
        s16 a = c->unk_21c;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_224;
            if (s == 0) {
                if (Random_GlobalBelow(100) < 80) {
                    c->unk_224 = 1;
                } else {
                    c->unk_224 = 2;
                }
            } else if (s == 2) {
                c->unk_224 = 1;
            } else {
                c->unk_224 = 0;
            }
            Camera_SetSwayPattern(c, c->unk_224);
        }
    }
    if (func_020e7500(&c->unk_222) == 0) {
        s16 a = c->unk_21e;
        if (a < 0) {
            a = -a;
        }
        if (a < 0x100) {
            u8 s = c->unk_225;
            if (s == 0) {
                c->unk_225 = 1;
            } else if (s == 2) {
                c->unk_225 = 1;
            } else {
                c->unk_225 = 0;
            }
            Camera_SetSwayPattern2(c, c->unk_225);
        }
    }
    s32 d = kCameraSwayPatterns[c->unk_225].c;
    if (d != 0) {
        c->unk_21e = c->unk_21e + d;
        u32 idx = ((u16)c->unk_21e >> 4) * 2;
        c->unk_174 = func_01ffcb0c(data_02135f44[idx], kCameraSwayPatterns[c->unk_225].d);
    }
    d = kCameraSwayPatterns[c->unk_224].c;
    if (d != 0) {
        c->unk_21c = c->unk_21c + d;
        u32 idx = ((u16)c->unk_21c >> 4) * 2;
        return func_01ffcb0c(data_02135f44[idx], kCameraSwayPatterns[c->unk_224].d);
    }
    return 0;
}

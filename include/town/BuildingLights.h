#ifndef TOWN_BUILDINGLIGHTS_H
#define TOWN_BUILDINGLIGHTS_H

#include "types.h"
#include "game/LightLevel.h"

struct NNSG3dResMdl;

// The lights of a town building's model (BuildingActor::lights): door and window materials and up to three lamp
// materials ("lp_m0".."lp_m2") following one light level. Members defined in src/main/unk_020b0e60.cpp.
class DoorLight {
public:
    DoorLight();
    ~DoorLight();
    void apply(NNSG3dResMdl *mdl, s32 t);
    void bindMaterial(NNSG3dResMdl *mdl);
    /* 0x00 */ s8 matIdx;
};

class WindowLight {
public:
    WindowLight();
    ~WindowLight();
    void apply(NNSG3dResMdl *mdl, s32 t);
    void bindMaterial(NNSG3dResMdl *mdl);
    /* 0x00 */ s8 matIdx;
};

class LampLights {
public:
    LampLights();
    ~LampLights();
    virtual const char *getMaterialName(s32 i);
    void apply(NNSG3dResMdl *mdl, s32 t);
    BOOL isLampMaterial(s32 v);
    void bindMaterials(NNSG3dResMdl *mdl);

    /* 0x04 */ s8 matIndices[3];
    /* 0x08 */ LightLevel unk_08;
};

class BuildingLights : public LightLevel {
public:
    BuildingLights();
    ~BuildingLights();
    BOOL isLit();
    BOOL setLit(BOOL on, s32 a, s32 b);
    void updateLights(NNSG3dResMdl *mdl);
    void bind(NNSG3dResMdl *mdl, BOOL on);

    /* 0x14 */ DoorLight doorLight;
    /* 0x18 */ LampLights lampLights;
    /* 0x34 */ WindowLight windowLight;
};

#endif // TOWN_BUILDINGLIGHTS_H

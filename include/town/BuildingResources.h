#ifndef TOWN_BUILDINGRESOURCES_H
#define TOWN_BUILDINGRESOURCES_H

// Model/animation/texture resources of one town building (ov009 building renderer,
// src/ov009/unk_ov009_0225b880.cpp and its _switch twin).
#include "types.h"

struct BuildingShadowTable;

struct BuildingResources {
    BuildingResources();
    ~BuildingResources();

    /* 0x00 */ s32 bmd0;
    /* 0x04 */ s32 bmd1;
    /* 0x08 */ s32 bca0;
    /* 0x0c */ s32 bca1;
    /* 0x10 */ s32 bca2;
    /* 0x14 */ s32 tex;
    /* 0x18 */ s32 lightTex;
    /* 0x1c */ BuildingShadowTable *shadowTable;
    /* 0x20 */ s32 btaAnims[4];
    /* 0x30 */ s32 btpAnims[4];
    /* 0x40 */ s32 solidCenterX;
    /* 0x44 */ s32 solidCenterZ;
    /* 0x48 */ s32 solidSizeX;
    /* 0x4c */ s32 solidSizeZ;
};

#endif

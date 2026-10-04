#ifndef TOWN_SCENEMAPINFO_H
#define TOWN_SCENEMAPINFO_H

#include "types.h"

// Map info of the current scene (Scene_GetMapInfo, SceneInfo::mapInfo): acre id table and its size, used by
// src/main/unk_0204cc1c.cpp and unk_0204c50c.cpp; the map module parameter is used by createMapModule
// (src/main/unk_020af514.cpp).
struct SceneMapInfo {
    void createMapModule();

    /* 0x0 */ u32 *acreIds;
    /* 0x4 */ u8 width;
    /* 0x5 */ u8 height;
    /* 0x6 */ u16 moduleParam;
};

#endif

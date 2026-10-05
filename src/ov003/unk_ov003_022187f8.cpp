// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/FxVec3.h"
#include "game/SceneInfo.h"

// TU20 of ov003: the 21 static entries (0x22355c4, 0x1c bytes each) built by the 0x534-byte static initialiser, their
// tables (used by ov005/ov006) and the 4-byte accessor PlayerHouseTex_Get (0x022187f8-0x022187fc)

// 12-byte vector with a copy constructor (so it is passed by address of a copy)


// 0x1c-byte entry: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main, see aliases.txt)

extern "C" {
u32 sFieldSceneProfiles[14] = {0xc9, 0xca, 0xd, 0xc4, 0x8a, 0xc1, 0x89, 7, 0x8c, 0x8e, 0xd5, 0xd1, 0xd2, 0x8d};
u32 sFieldSceneProfileCount = 0xe;
FxVec3 data_ov003_022355a0(0x10000, 0x200, 0x1d000);
SceneWarp sFieldSceneObjects[21] = {
    SceneWarp(0x11, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x12, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x13, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x14, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x15, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x16, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x17, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x18, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x19, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x09, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x0a, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x1a, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x1b, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x1c, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x1d, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x20, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x0f, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x10, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x01, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x0b, data_ov003_022355a0, 0x22c00000, -0x8000, 2, 2, 0, 0),
    SceneWarp(0x3f, VecFx32Copy(0, 0, 0), 0, 0, 2, 2, 0, 0),
};
SceneWarpList sFieldSceneObjectList = {sFieldSceneObjects, 0x15};
}

extern "C" s32 PlayerHouseTex_Get(s32 *p) {
    return *p;
}

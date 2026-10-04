// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/FxVec3.h"
#include "game/SceneInfo.h"

// ov024: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)


// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov024_02258af4;
extern u32 data_ov024_02258ac0[1];
extern SceneWarpList data_ov024_02258ac8;
extern u32 data_ov024_02258ac4[1];
extern SceneMapInfo data_ov024_02258ad8;
extern SceneSpawnGroup data_ov024_02258b0c[3];
extern FxVec3 data_ov024_02258b64;
extern SceneSpawnList data_ov024_02258ad0;
extern SceneSpawnRecord data_ov024_02258ae0[1];
extern SceneWarp data_ov024_02258b70[2];

SceneInfo data_ov024_02258af4 = {&data_ov024_02258ad0, 0, &data_ov024_02258ad8, &data_ov024_02258ac8, -1, -1};

u32 data_ov024_02258ac0[1] = {0x1022};

SceneWarpList data_ov024_02258ac8 = {data_ov024_02258b70, 2};

u32 data_ov024_02258ac4[1] = {0x52};

SceneMapInfo data_ov024_02258ad8 = {data_ov024_02258ac0, 1, 1};

SceneSpawnGroup data_ov024_02258b0c[3] = {
    {2, 1, 0, data_ov024_02258ac4},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov024_02258ae0},
};

FxVec3 data_ov024_02258b64(0x10000, 0x200, 0x1d000);

SceneSpawnList data_ov024_02258ad0 = {3, 0, data_ov024_02258b0c};

SceneSpawnRecord data_ov024_02258ae0[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneWarp data_ov024_02258b70[2] = {
    SceneWarp(0x20, VecFx32Copy(0x17000, 0, 0x14000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    SceneWarp(0x26, data_ov024_02258b64, 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

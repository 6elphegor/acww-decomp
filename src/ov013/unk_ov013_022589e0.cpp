// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov013: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov013_02258a60[1];
extern SceneMapInfo data_ov013_02258a64;
extern SceneSpawnList data_ov013_02258a6c;
extern SceneSpawnGroup data_ov013_02258a90[3];
extern SceneWarp data_ov013_02258b0c[1];
extern SceneSpawnRecord data_ov013_02258ac0[2];
extern SceneSpawnRecord data_ov013_02258a7c[1];
extern SceneInfo data_ov013_02258aa8;
extern SceneWarpList data_ov013_02258a74;

u32 data_ov013_02258a60[1] = {0x1028};

SceneMapInfo data_ov013_02258a64 = {data_ov013_02258a60, 1, 1};

SceneSpawnList data_ov013_02258a6c = {3, 0, data_ov013_02258a90};

SceneSpawnGroup data_ov013_02258a90[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov013_02258a7c},
    {0, 2, 0, data_ov013_02258ac0},
};

SceneWarp data_ov013_02258b0c[1] = {
    SceneWarp(0x1d, VecFx32Copy(0xa000, 0x200, 0x9000), 0x23800000, 0, 2, 2, 0, 3),
};

SceneSpawnRecord data_ov013_02258ac0[2] = {
    {0x1000061, 0x1700000, 0xc0000000, 0, 0xd017},
    {0x15, 0, 0, 0, 0},
};

SceneSpawnRecord data_ov013_02258a7c[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov013_02258aa8 = {&data_ov013_02258a6c, 0, &data_ov013_02258a64, &data_ov013_02258a74, 0x35, -1};

SceneWarpList data_ov013_02258a74 = {data_ov013_02258b0c, 1};

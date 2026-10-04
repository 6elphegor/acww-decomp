// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov019: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnList data_ov019_02258a6c;
extern SceneSpawnRecord data_ov019_02258a90[1];
extern u32 data_ov019_02258a60[1];
extern SceneSpawnRecord data_ov019_02258a7c[1];
extern SceneInfo data_ov019_02258aa4;
extern SceneMapInfo data_ov019_02258a74;
extern SceneWarpList data_ov019_02258a64;
extern SceneSpawnGroup data_ov019_02258abc[3];
extern SceneWarp data_ov019_02258aec[1];

SceneSpawnList data_ov019_02258a6c = {3, 0, data_ov019_02258abc};

SceneSpawnRecord data_ov019_02258a90[1] = {
    {0xe0006d, 0x15c0000, 0, 0, 0xd018},
};

u32 data_ov019_02258a60[1] = {0x1026};

SceneSpawnRecord data_ov019_02258a7c[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov019_02258aa4 = {&data_ov019_02258a6c, 0, &data_ov019_02258a74, &data_ov019_02258a64, 0x2e, -1};

SceneMapInfo data_ov019_02258a74 = {data_ov019_02258a60, 1, 1};

SceneWarpList data_ov019_02258a64 = {data_ov019_02258aec, 1};

SceneSpawnGroup data_ov019_02258abc[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov019_02258a7c},
    {0, 1, 0, data_ov019_02258a90},
};

SceneWarp data_ov019_02258aec[1] = {
    SceneWarp(0x20, Unk_020b4f8c_Vec(0xa000, 0, 0x11000), 0x11000000, 0, 2, 2, 0, 3),
};

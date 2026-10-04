// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov035: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnList data_ov035_02258ab0;
extern SceneInfo data_ov035_02258ad4;
extern SceneSpawnGroup data_ov035_02258aec[3];
extern u32 data_ov035_02258aa4[1];
extern SceneMapInfo data_ov035_02258aa8;
extern u32 data_ov035_02258aa0[1];
extern SceneWarpList data_ov035_02258ab8;
extern SceneSpawnRecord data_ov035_02258ac0[1];
extern SceneWarp data_ov035_02258b38[2];

SceneSpawnList data_ov035_02258ab0 = {3, 0, data_ov035_02258aec};

SceneInfo data_ov035_02258ad4 = {&data_ov035_02258ab0, 0, &data_ov035_02258aa8, &data_ov035_02258ab8, -1, -1};

SceneSpawnGroup data_ov035_02258aec[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov035_02258aa0},
    {1, 1, 0, data_ov035_02258ac0},
};

u32 data_ov035_02258aa4[1] = {0x1000};

SceneMapInfo data_ov035_02258aa8 = {data_ov035_02258aa4, 1, 1};

u32 data_ov035_02258aa0[1] = {0x100d0};

SceneWarpList data_ov035_02258ab8 = {data_ov035_02258b38, 2};

SceneSpawnRecord data_ov035_02258ac0[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

SceneWarp data_ov035_02258b38[2] = {
    SceneWarp(7, Unk_020b4f8c_Vec(0x11000, 0x200, 0x1d000), 0x10c00000, -0x4000, 2, 2, 0x4000, 1),
    SceneWarp(1, Unk_020b4f8c_Vec(0xf000, 0x200, 0x1d000), 0x11000000, 0x4000, 2, 2, -0x4000, 2),
};

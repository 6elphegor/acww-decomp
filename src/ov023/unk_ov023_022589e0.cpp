// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov023: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov023_02258ad8;
extern SceneSpawnGroup data_ov023_02258af0[3];
extern SceneSpawnRecord data_ov023_02258ac4[1];
extern SceneWarpList data_ov023_02258aac;
extern SceneWarp data_ov023_02258b38[2];
extern SceneMapInfo data_ov023_02258abc;
extern u32 data_ov023_02258aa4[2];
extern SceneSpawnList data_ov023_02258ab4;
extern u32 data_ov023_02258aa0[1];

SceneInfo data_ov023_02258ad8 = {&data_ov023_02258ab4, 0, &data_ov023_02258abc, &data_ov023_02258aac, -1, -1};

SceneSpawnGroup data_ov023_02258af0[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov023_02258aa4},
    {1, 1, 0, data_ov023_02258ac4},
};

SceneSpawnRecord data_ov023_02258ac4[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneWarpList data_ov023_02258aac = {data_ov023_02258b38, 2};

SceneWarp data_ov023_02258b38[2] = {
    SceneWarp(0x23, Unk_020b4f8c_Vec(0x6000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
    SceneWarp(0x23, Unk_020b4f8c_Vec(0x1c000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
};

SceneMapInfo data_ov023_02258abc = {data_ov023_02258aa0, 1, 1};

u32 data_ov023_02258aa4[2] = {0x51, 0x100c3};

SceneSpawnList data_ov023_02258ab4 = {3, 0, data_ov023_02258af0};

u32 data_ov023_02258aa0[1] = {0x101f};

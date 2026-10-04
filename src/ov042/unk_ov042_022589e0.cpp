// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov042: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov042_02258b00[2];
extern SceneWarpList data_ov042_02258ab4;
extern u32 data_ov042_02258aa0[1];
extern SceneSpawnGroup data_ov042_02258ae8[3];
extern SceneInfo data_ov042_02258ad0;
extern SceneMapInfo data_ov042_02258aa4;
extern SceneSpawnRecord data_ov042_02258abc[1];
extern SceneWarp data_ov042_02258b58[2];
extern SceneSpawnList data_ov042_02258aac;

SceneSpawnRecord data_ov042_02258b00[2] = {
    {0xf00075, 0xc00000, 0x80000000, 0, 0xd010},
    {0x1100074, 0xc00000, 0x80000000, 0, 0xd00f},
};

SceneWarpList data_ov042_02258ab4 = {data_ov042_02258b58, 2};

u32 data_ov042_02258aa0[1] = {0x1019};

SceneSpawnGroup data_ov042_02258ae8[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov042_02258abc},
    {0, 2, 0, data_ov042_02258b00},
};

SceneInfo data_ov042_02258ad0 = {&data_ov042_02258aac, 0, &data_ov042_02258aa4, &data_ov042_02258ab4, 0x32, -1};

SceneMapInfo data_ov042_02258aa4 = {data_ov042_02258aa0, 1, 1};

SceneSpawnRecord data_ov042_02258abc[1] = {
    {0x1000009, 0x1ae0002, 0x80000000, 0, 0x800000},
};

SceneWarp data_ov042_02258b58[2] = {
    SceneWarp(0x1d, Unk_020b4f8c_Vec(0x10000, 0x200, 0x9000), 0x11000000, 0, 2, 2, -0x8000, 2),
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 0),
};

SceneSpawnList data_ov042_02258aac = {3, 0, data_ov042_02258ae8};

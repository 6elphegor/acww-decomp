// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov016: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov016_02258ab4;
extern SceneMapInfo data_ov016_02258a88;
extern SceneSpawnRecord data_ov016_02258aa0[1];
extern SceneSpawnList data_ov016_02258a90;
extern SceneWarpList data_ov016_02258a98;
extern SceneSpawnRecord data_ov016_02258aec[5];
extern u32 data_ov016_02258a80[1];
extern SceneSpawnGroup data_ov016_02258acc[4];
extern u32 data_ov016_02258a84[1];
extern SceneWarp data_ov016_02258b78[2];

SceneInfo data_ov016_02258ab4 = {&data_ov016_02258a90, 0, &data_ov016_02258a88, &data_ov016_02258a98, 0x30, -1};

SceneMapInfo data_ov016_02258a88 = {data_ov016_02258a84, 1, 1};

SceneSpawnRecord data_ov016_02258aa0[1] = {
    {0x1000009, 0x500002, 0, 0, 0x800000},
};

SceneSpawnList data_ov016_02258a90 = {4, 0, data_ov016_02258acc};

SceneWarpList data_ov016_02258a98 = {data_ov016_02258b78, 2};

SceneSpawnRecord data_ov016_02258aec[5] = {
    {0x11, 0, 0, 0, 0},
    {0x1400072, 0x1100000, 0, 0, 0xd000},
    {0xc00073, 0x1100000, 0, 0, 0xd001},
    {0xe0007e, 0x400000, 0, 0, 0xd022},
    {0xf0007f, 0x1680000, 0x80000000, 0, 0xd023},
};

u32 data_ov016_02258a80[1] = {0xc7};

SceneSpawnGroup data_ov016_02258acc[4] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov016_02258a80},
    {1, 1, 0, data_ov016_02258aa0},
    {0, 5, 0, data_ov016_02258aec},
};

u32 data_ov016_02258a84[1] = {0x101a};

SceneWarp data_ov016_02258b78[2] = {
    SceneWarp(0x3d, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

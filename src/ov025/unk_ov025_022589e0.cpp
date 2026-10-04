// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov025: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov025_02258a80[1];
extern SceneInfo data_ov025_02258a94;
extern SceneSpawnGroup data_ov025_02258aac[3];
extern u32 data_ov025_02258a64[1];
extern u32 data_ov025_02258a60[1];
extern SceneWarp data_ov025_02258aec[1];
extern SceneSpawnList data_ov025_02258a68;
extern SceneWarpList data_ov025_02258a78;
extern SceneMapInfo data_ov025_02258a70;

SceneSpawnRecord data_ov025_02258a80[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov025_02258a94 = {&data_ov025_02258a68, 0, &data_ov025_02258a70, &data_ov025_02258a78, -1, -1};

SceneSpawnGroup data_ov025_02258aac[3] = {
    {2, 1, 0, data_ov025_02258a64},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov025_02258a80},
};

u32 data_ov025_02258a64[1] = {0x52};

u32 data_ov025_02258a60[1] = {0x1023};

SceneWarp data_ov025_02258aec[1] = {
    SceneWarp(0x25, Unk_020b4f8c_Vec(0x12000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
};

SceneSpawnList data_ov025_02258a68 = {3, 0, data_ov025_02258aac};

SceneWarpList data_ov025_02258a78 = {data_ov025_02258aec, 1};

SceneMapInfo data_ov025_02258a70 = {data_ov025_02258a60, 1, 1};

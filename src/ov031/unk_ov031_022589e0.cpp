// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov031: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov031_02258a80[1];
extern SceneInfo data_ov031_02258a94;
extern SceneSpawnGroup data_ov031_02258aac[3];
extern u32 data_ov031_02258a64[1];
extern u32 data_ov031_02258a60[1];
extern SceneWarp data_ov031_02258aec[1];
extern SceneWarpList data_ov031_02258a68;
extern SceneSpawnList data_ov031_02258a78;
extern SceneMapInfo data_ov031_02258a70;

SceneSpawnRecord data_ov031_02258a80[1] = {
    {0x1000009, 0x12c0002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov031_02258a94 = {&data_ov031_02258a78, 0, &data_ov031_02258a70, &data_ov031_02258a68, -1, -1};

SceneSpawnGroup data_ov031_02258aac[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov031_02258a64},
    {1, 1, 0, data_ov031_02258a80},
};

u32 data_ov031_02258a64[1] = {0x100d0};

u32 data_ov031_02258a60[1] = {0x1000};

SceneWarp data_ov031_02258aec[1] = {
    SceneWarp(1, Unk_020b4f8c_Vec(0x10000, 0x200, 0xb000), 0x23800000, 0, 2, 2, 0, 3),
};

SceneWarpList data_ov031_02258a68 = {data_ov031_02258aec, 1};

SceneSpawnList data_ov031_02258a78 = {3, 0, data_ov031_02258aac};

SceneMapInfo data_ov031_02258a70 = {data_ov031_02258a60, 1, 1};

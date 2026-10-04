// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov028: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnList data_ov028_02258a78;
extern SceneSpawnRecord data_ov028_02258a94[1];
extern u32 data_ov028_02258a64[1];
extern SceneSpawnGroup data_ov028_02258ac0[4];
extern SceneMapInfo data_ov028_02258a68;
extern SceneSpawnRecord data_ov028_02258a80[1];
extern u32 data_ov028_02258a60[1];
extern SceneWarpList data_ov028_02258a70;
extern SceneWarp data_ov028_02258aec[1];
extern SceneInfo data_ov028_02258aa8;

SceneSpawnList data_ov028_02258a78 = {4, 0, data_ov028_02258ac0};

SceneSpawnRecord data_ov028_02258a94[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov028_02258a64[1] = {0x53};

SceneSpawnGroup data_ov028_02258ac0[4] = {
    {2, 1, 0, data_ov028_02258a64},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov028_02258a94},
    {0, 1, 0, data_ov028_02258a80},
};

SceneMapInfo data_ov028_02258a68 = {data_ov028_02258a60, 1, 1};

SceneSpawnRecord data_ov028_02258a80[1] = {
    {0x14, 0, 0, 0, 0},
};

u32 data_ov028_02258a60[1] = {0x1024};

SceneWarpList data_ov028_02258a70 = {data_ov028_02258aec, 1};

SceneWarp data_ov028_02258aec[1] = {
    SceneWarp(0x20, Unk_020b4f8c_Vec(0x9000, 0, 0x14000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
};

SceneInfo data_ov028_02258aa8 = {&data_ov028_02258a78, 0, &data_ov028_02258a68, &data_ov028_02258a70, -1, -1};

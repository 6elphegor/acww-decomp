// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov036: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov036_02258ab0[2];
extern SceneSpawnGroup data_ov036_02258a90[4];
extern SceneMapInfo data_ov036_02258a44;
extern SceneSpawnRecord data_ov036_02258a64[1];
extern SceneInfo data_ov036_02258a78;
extern SceneSpawnList data_ov036_02258a5c;
extern u32 data_ov036_02258a40[1];
extern u32 data_ov036_02258a4c[2];
extern SceneWarp data_ov036_02258aec[1];
extern SceneWarpList data_ov036_02258a54;

SceneSpawnRecord data_ov036_02258ab0[2] = {
    {0xf0007a, 0x1300000, 0, 0, 0xd006},
    {0x1700012, 0x1a00000, 0xc0000000, 0, 0},
};

SceneSpawnGroup data_ov036_02258a90[4] = {
    {2, 2, 0, data_ov036_02258a4c},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov036_02258a64},
    {0, 2, 0, data_ov036_02258ab0},
};

SceneMapInfo data_ov036_02258a44 = {data_ov036_02258a40, 1, 1};

SceneSpawnRecord data_ov036_02258a64[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov036_02258a78 = {&data_ov036_02258a5c, 0, &data_ov036_02258a44, &data_ov036_02258a54, 0x36, -1};

SceneSpawnList data_ov036_02258a5c = {4, 0, data_ov036_02258a90};

u32 data_ov036_02258a40[1] = {0x1001};

u32 data_ov036_02258a4c[2] = {0xc7, 0xd0};

SceneWarp data_ov036_02258aec[1] = {
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
};

SceneWarpList data_ov036_02258a54 = {data_ov036_02258aec, 1};

// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov041: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov041_02258b40[3];
extern u32 data_ov041_02258ae0[1];
extern SceneSpawnGroup data_ov041_02258b28[3];
extern SceneSpawnList data_ov041_02258aec;
extern SceneMapInfo data_ov041_02258af4;
extern SceneWarpList data_ov041_02258ae4;
extern SceneWarp data_ov041_02258ba4[3];
extern SceneSpawnRecord data_ov041_02258afc[1];
extern SceneInfo data_ov041_02258b10;

SceneSpawnRecord data_ov041_02258b40[3] = {
    {0x1100076, 0x1a00000, 0, 0, 0xd01c},
    {0x150002c, 0x1900000, 0xc0000000, 0, 0},
    {0x16, 0, 0xc0000000, 0, 0},
};

u32 data_ov041_02258ae0[1] = {0x1018};

SceneSpawnGroup data_ov041_02258b28[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov041_02258afc},
    {0, 3, 0, data_ov041_02258b40},
};

SceneSpawnList data_ov041_02258aec = {3, 0, data_ov041_02258b28};

SceneMapInfo data_ov041_02258af4 = {data_ov041_02258ae0, 1, 1};

SceneWarpList data_ov041_02258ae4 = {data_ov041_02258ba4, 3};

SceneWarp data_ov041_02258ba4[3] = {
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 4),
    SceneWarp(0x1e, Unk_020b4f8c_Vec(0x10000, 0x200, 0x9000), 0x10c00000, 0, 2, 2, -0x8000, 1),
    SceneWarp(0x1f, Unk_020b4f8c_Vec(0x10000, 0x200, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

SceneSpawnRecord data_ov041_02258afc[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

SceneInfo data_ov041_02258b10 = {&data_ov041_02258aec, 0, &data_ov041_02258af4, &data_ov041_02258ae4, 0x32, -1};

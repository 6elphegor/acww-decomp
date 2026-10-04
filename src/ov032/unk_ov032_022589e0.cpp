// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/FxVec3.h"
#include "game/SceneInfo.h"

// ov032: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)


// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov032_02258c34;
extern SceneSpawnGroup data_ov032_02258c4c[3];
extern SceneSpawnRecord data_ov032_02258c20[1];
extern SceneSpawnList data_ov032_02258c08;
extern SceneWarpList data_ov032_02258c18;
extern SceneMapInfo data_ov032_02258c10;
extern FxVec3 data_ov032_02258ca4;
extern SceneWarp data_ov032_02258cec[7];
extern u32 data_ov032_02258c04[1];
extern u32 data_ov032_02258c00[1];

SceneInfo data_ov032_02258c34 = {&data_ov032_02258c08, 0, &data_ov032_02258c10, &data_ov032_02258c18, -1, -1};

SceneSpawnGroup data_ov032_02258c4c[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov032_02258c00},
    {1, 1, 0, data_ov032_02258c20},
};

SceneSpawnRecord data_ov032_02258c20[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneSpawnList data_ov032_02258c08 = {3, 0, data_ov032_02258c4c};

SceneWarpList data_ov032_02258c18 = {data_ov032_02258cec, 7};

SceneMapInfo data_ov032_02258c10 = {data_ov032_02258c04, 1, 1};

FxVec3 data_ov032_02258ca4(0x10000, 0, 0x1d000);

SceneWarp data_ov032_02258cec[7] = {
    SceneWarp(0x3e, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
    SceneWarp(7, Unk_020b4f8c_Vec(0xf000, 0, 0x1d000), 0x10c00000, 0x4000, 2, 2, -0x4000, 1),
    SceneWarp(5, Unk_020b4f8c_Vec(0xf000, 0, 0x1d000), 0x10c00000, 0x4000, 2, 2, -0x4000, 1),
    SceneWarp(4, Unk_020b4f8c_Vec(0x17000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    SceneWarp(3, Unk_020b4f8c_Vec(0x9000, 0, 0x1a000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
    SceneWarp(2, data_ov032_02258ca4, 0x23800000, -0x8000, 2, 2, -0x8000, 3),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

u32 data_ov032_02258c04[1] = {0x1004};

u32 data_ov032_02258c00[1] = {0x100d0};

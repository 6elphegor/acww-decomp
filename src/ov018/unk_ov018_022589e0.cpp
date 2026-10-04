// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov018: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)


// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnGroup data_ov018_02258ab4[1];
extern SceneWarp data_ov018_02258b24[3];
extern u32 data_ov018_02258aa0[1];
extern SceneInfo data_ov018_02258acc;
extern SceneSpawnList data_ov018_02258abc;
extern SceneMapInfo data_ov018_02258ac4;
extern SceneWarpList data_ov018_02258aac;
extern u32 data_ov018_02258aa4[2];

SceneSpawnGroup data_ov018_02258ab4[1] = {
    {2, 2, 0, data_ov018_02258aa4},
};

SceneWarp data_ov018_02258b24[3] = {
    SceneWarp(0x3e, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    SceneWarp(0x3d, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

u32 data_ov018_02258aa0[1] = {0x1015};

SceneInfo data_ov018_02258acc = {&data_ov018_02258abc, 0, &data_ov018_02258ac4, &data_ov018_02258aac, 0x38, -1};

SceneSpawnList data_ov018_02258abc = {1, 0, data_ov018_02258ab4};

SceneMapInfo data_ov018_02258ac4 = {data_ov018_02258aa0, 1, 1};

SceneWarpList data_ov018_02258aac = {data_ov018_02258b24, 3};

u32 data_ov018_02258aa4[2] = {0xb, 0xcd};

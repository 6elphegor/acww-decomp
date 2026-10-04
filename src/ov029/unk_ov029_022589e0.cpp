// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov029: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov029_02258b80[1];
extern SceneSpawnGroup data_ov029_02258bb8[3];
extern SceneSpawnRecord data_ov029_02258ba4[1];
extern SceneSpawnList data_ov029_02258b9c;
extern SceneWarpList data_ov029_02258b8c;
extern SceneMapInfo data_ov029_02258b94;
extern SceneWarp data_ov029_02258c54[7];
extern SceneInfo data_ov029_02258bd0;
extern u32 data_ov029_02258b84[2];

u32 data_ov029_02258b80[1] = {0x1010};

SceneSpawnGroup data_ov029_02258bb8[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov029_02258b84},
    {1, 1, 0, data_ov029_02258ba4},
};

SceneSpawnRecord data_ov029_02258ba4[1] = {
    {0x1000009, 0x1d00002, 0x80000000, 0, 0x800000},
};

SceneSpawnList data_ov029_02258b9c = {3, 0, data_ov029_02258bb8};

SceneWarpList data_ov029_02258b8c = {data_ov029_02258c54, 7};

SceneMapInfo data_ov029_02258b94 = {data_ov029_02258b80, 1, 1};

SceneWarp data_ov029_02258c54[7] = {
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 4),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

SceneInfo data_ov029_02258bd0 = {&data_ov029_02258b9c, 0, &data_ov029_02258b94, &data_ov029_02258b8c, -1, -1};

u32 data_ov029_02258b84[2] = {0x100d0, 0x100c2};

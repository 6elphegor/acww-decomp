// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov022: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneWarpList data_ov022_02258afc;
extern SceneSpawnGroup data_ov022_02258b30[3];
extern SceneWarp data_ov022_02258b84[3];
extern u32 data_ov022_02258ae0[1];
extern SceneSpawnRecord data_ov022_02258b04[1];
extern u32 data_ov022_02258aec[2];
extern SceneSpawnList data_ov022_02258af4;
extern SceneMapInfo data_ov022_02258ae4;
extern SceneInfo data_ov022_02258b18;

SceneWarpList data_ov022_02258afc = {data_ov022_02258b84, 3};

SceneSpawnGroup data_ov022_02258b30[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov022_02258aec},
    {1, 1, 0, data_ov022_02258b04},
};

SceneWarp data_ov022_02258b84[3] = {
    SceneWarp(0x20, VecFx32Copy(0x17000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    SceneWarp(0x24, VecFx32Copy(0x6000, 0, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
    SceneWarp(0x24, VecFx32Copy(0x1c000, 0, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

u32 data_ov022_02258ae0[1] = {0x101e};

SceneSpawnRecord data_ov022_02258b04[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov022_02258aec[2] = {0x51, 0xc3};

SceneSpawnList data_ov022_02258af4 = {3, 0, data_ov022_02258b30};

SceneMapInfo data_ov022_02258ae4 = {data_ov022_02258ae0, 1, 1};

SceneInfo data_ov022_02258b18 = {&data_ov022_02258af4, 0, &data_ov022_02258ae4, &data_ov022_02258afc, -1, -1};

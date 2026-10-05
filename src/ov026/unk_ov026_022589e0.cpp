// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov026: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov026_02258b1c;
extern SceneWarpList data_ov026_02258ae4;
extern SceneSpawnGroup data_ov026_02258b34[3];
extern SceneMapInfo data_ov026_02258af4;
extern SceneSpawnList data_ov026_02258aec;
extern SceneWarp data_ov026_02258b84[3];
extern u32 data_ov026_02258afc[3];
extern SceneSpawnRecord data_ov026_02258b08[1];
extern u32 data_ov026_02258ae0[1];

SceneInfo data_ov026_02258b1c = {&data_ov026_02258aec, 0, &data_ov026_02258af4, &data_ov026_02258ae4, -1, -1};

SceneWarpList data_ov026_02258ae4 = {data_ov026_02258b84, 3};

SceneSpawnGroup data_ov026_02258b34[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 3, 0, data_ov026_02258afc},
    {1, 1, 0, data_ov026_02258b08},
};

SceneMapInfo data_ov026_02258af4 = {data_ov026_02258ae0, 1, 1};

SceneSpawnList data_ov026_02258aec = {3, 0, data_ov026_02258b34};

SceneWarp data_ov026_02258b84[3] = {
    SceneWarp(0x20, VecFx32Copy(0x16000, 0, 0x11000), 0x23800000, 0, 2, 2, 0, 3),
    SceneWarp(0x28, VecFx32Copy(0x1b000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    SceneWarp(0x28, VecFx32Copy(0x1b000, 0, 0x8000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
};

u32 data_ov026_02258afc[3] = {0x51, 0xbe, 0xbf};

SceneSpawnRecord data_ov026_02258b08[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov026_02258ae0[1] = {0x1020};

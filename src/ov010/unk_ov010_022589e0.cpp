// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov010: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern SceneWarpList sRoomSceneEntryList;
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnGroup data_ov010_02258a58[4];
extern SceneSpawnRecord data_ov010_02258a18[1];
extern SceneSpawnList data_ov010_02258a08;
extern u32 data_ov010_02258a00[1];
extern SceneSpawnRecord data_ov010_02258a2c[1];
extern SceneMapInfo data_ov010_02258a10;
extern SceneInfo data_ov010_02258a40;
extern u32 data_ov010_02258a04[1];

SceneSpawnGroup data_ov010_02258a58[4] = {
    {2, 1, 0, data_ov010_02258a00},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov010_02258a18},
    {0, 1, 0, data_ov010_02258a2c},
};

SceneSpawnRecord data_ov010_02258a18[1] = {
    {0x1000009, 0x1400002, 0, 0, 0x800000},
};

SceneSpawnList data_ov010_02258a08 = {4, 0, data_ov010_02258a58};

u32 data_ov010_02258a00[1] = {0x2b};

SceneSpawnRecord data_ov010_02258a2c[1] = {
    {0x2d, 0, 0, 0, 0},
};

SceneMapInfo data_ov010_02258a10 = {data_ov010_02258a04, 1, 1};

SceneInfo data_ov010_02258a40 = {&data_ov010_02258a08, 0, &data_ov010_02258a10, &sRoomSceneEntryList, -1, -1};

u32 data_ov010_02258a04[1] = {0x1003};

// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov012: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern SceneWarpList sRoomSceneEntryList;
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneSpawnRecord data_ov012_02258a64[4];
extern SceneInfo data_ov012_02258a2c;
extern SceneSpawnGroup data_ov012_02258a44[4];
extern SceneMapInfo data_ov012_02258a10;
extern SceneSpawnList data_ov012_02258a08;
extern SceneSpawnRecord data_ov012_02258a18[1];
extern u32 data_ov012_02258a04[1];
extern u32 data_ov012_02258a00[1];

SceneSpawnRecord data_ov012_02258a64[4] = {
    {0xd00009, 0x1400002, 0, 0, 0x2000000},
    {0x1300009, 0x1400002, 0, 0, 0x2000000},
    {0xd00009, 0x1a00002, 0, 0, 0x2000000},
    {0x1300009, 0x1a00002, 0, 0, 0x2000000},
};

SceneInfo data_ov012_02258a2c = {&data_ov012_02258a08, 0, &data_ov012_02258a10, &sRoomSceneEntryList, -1, -1};

SceneSpawnGroup data_ov012_02258a44[4] = {
    {2, 1, 0, data_ov012_02258a04},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 4, 0, data_ov012_02258a64},
    {0, 1, 0, data_ov012_02258a18},
};

SceneMapInfo data_ov012_02258a10 = {data_ov012_02258a00, 1, 1};

SceneSpawnList data_ov012_02258a08 = {4, 0, data_ov012_02258a44};

SceneSpawnRecord data_ov012_02258a18[1] = {
    {0x2d, 0, 0, 0, 0},
};

u32 data_ov012_02258a04[1] = {0x2b};

u32 data_ov012_02258a00[1] = {0x1003};

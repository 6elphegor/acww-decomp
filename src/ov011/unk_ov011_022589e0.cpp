// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov011: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern SceneWarpList sRoomSceneEntryList;
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneMapInfo data_ov011_02258a04;
extern u32 data_ov011_02258a00[1];
extern SceneSpawnGroup data_ov011_02258a4c[4];
extern SceneSpawnList data_ov011_02258a0c;
extern SceneSpawnRecord data_ov011_02258a20[1];
extern SceneSpawnRecord data_ov011_02258a6c[4];
extern u32 data_ov011_02258a14[3];
extern SceneInfo data_ov011_02258a34;

SceneMapInfo data_ov011_02258a04 = {data_ov011_02258a00, 1, 1};

u32 data_ov011_02258a00[1] = {0x1003};

SceneSpawnGroup data_ov011_02258a4c[4] = {
    {2, 3, 0, data_ov011_02258a14},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 4, 0, data_ov011_02258a6c},
    {0, 1, 0, data_ov011_02258a20},
};

SceneSpawnList data_ov011_02258a0c = {4, 0, data_ov011_02258a4c};

SceneSpawnRecord data_ov011_02258a20[1] = {
    {0x2d, 0, 0, 0, 0},
};

SceneSpawnRecord data_ov011_02258a6c[4] = {
    {0xd00009, 0x1400002, 0, 0, 0x2000000},
    {0x1300009, 0x1400002, 0, 0, 0x2000000},
    {0xd00009, 0x1a00002, 0, 0, 0x2000000},
    {0x1300009, 0x1a00002, 0, 0, 0x2000000},
};

u32 data_ov011_02258a14[3] = {0x2b, 0xd3, 0xc7};

SceneInfo data_ov011_02258a34 = {&data_ov011_02258a0c, 0, &data_ov011_02258a04, &sRoomSceneEntryList, -1, -1};

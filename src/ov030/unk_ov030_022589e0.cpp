// mwcc-version: 1.2/base
#include "types.h"
#include "game/SceneInfo.h"

// ov030: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov030_02258a04[1];
extern SceneSpawnGroup data_ov030_02258a2c[3];
extern SceneSpawnRecord data_ov030_02258a18[1];
extern SceneMapInfo data_ov030_02258a10;
extern SceneSpawnList data_ov030_02258a08;
extern u32 data_ov030_02258a00[1];
extern SceneInfo data_ov030_02258a44;

u32 data_ov030_02258a04[1] = {0x1029};

SceneSpawnGroup data_ov030_02258a2c[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov030_02258a00},
    {0, 1, 0, data_ov030_02258a18},
};

SceneSpawnRecord data_ov030_02258a18[1] = {
    {0x100005e, 0x1800000, 0, 0, 0xd024},
};

SceneMapInfo data_ov030_02258a10 = {data_ov030_02258a04, 1, 1};

SceneSpawnList data_ov030_02258a08 = {3, 0, data_ov030_02258a2c};

u32 data_ov030_02258a00[1] = {0xb};

SceneInfo data_ov030_02258a44 = {&data_ov030_02258a08, 0, &data_ov030_02258a10, 0, 0x37, -1};

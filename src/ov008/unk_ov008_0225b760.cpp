// mwcc-version: 1.2/base
#include "types.h"
#include "game/SceneInfo.h"

// ov008: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov008_0225b780[1];
extern SceneSpawnList data_ov008_0225b78c;
extern SceneMapInfo data_ov008_0225b784;
extern SceneInfo data_ov008_0225b79c;
extern SceneSpawnGroup data_ov008_0225b794[1];

u32 data_ov008_0225b780[1] = {0x1000};

SceneSpawnList data_ov008_0225b78c = {1, 0, data_ov008_0225b794};

SceneMapInfo data_ov008_0225b784 = {data_ov008_0225b780, 1, 1};

SceneInfo data_ov008_0225b79c = {&data_ov008_0225b78c, 1, &data_ov008_0225b784, 0, -1, -1};

SceneSpawnGroup data_ov008_0225b794[1] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
};

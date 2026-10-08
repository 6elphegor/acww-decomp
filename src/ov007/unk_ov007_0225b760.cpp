// mwcc-version: 1.2/base
#include "types.h"
#include "game/SceneInfo.h"

// ov007: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneInfo data_ov007_0225b7a8;
extern SceneSpawnList data_ov007_0225b790;
extern SceneSpawnGroup data_ov007_0225b788[1];
extern u32 data_ov007_0225b798[4];
extern SceneMapInfo data_ov007_0225b780;

SceneInfo data_ov007_0225b7a8 = {&data_ov007_0225b790, 1, &data_ov007_0225b780, 0, -1, -1};

SceneSpawnList data_ov007_0225b790 = {1, 0, data_ov007_0225b788};

SceneSpawnGroup data_ov007_0225b788[1] = {
    {2, ROOM_COMMON_PROFILE_COUNT, 0, sRoomCommonProfiles},
};

u32 data_ov007_0225b798[4] = {0x1000, 0x1000, 0x1000, 0x1000};

SceneMapInfo data_ov007_0225b780 = {data_ov007_0225b798, 2, 2};

// ---- overlay variables (generated: tools/host_overlay_vars.py) ----
#include "host_overlay_vars.h"

HOST_OVERLAY_VARS(unk_ov007_0225b760) {
    HOST_OVERLAY_VAR(data_ov007_0225b7a8),
    HOST_OVERLAY_VAR(data_ov007_0225b790),
    HOST_OVERLAY_VAR(data_ov007_0225b788),
    HOST_OVERLAY_VAR(data_ov007_0225b798),
    HOST_OVERLAY_VAR(data_ov007_0225b780),
    HOST_OVERLAY_VARS_END
};

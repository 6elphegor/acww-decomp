// mwcc-version: 1.2/base
#include "types.h"
#include "gfx/VecFx32.h"
#include "game/SceneWarp.h"
#include "game/SceneInfo.h"

// ov012: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

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
    {2, ROOM_COMMON_PROFILE_COUNT, 0, sRoomCommonProfiles},
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

// ---- overlay variables (generated: tools/host_overlay_vars.py) ----
#include "host_overlay_vars.h"

HOST_OVERLAY_VARS(unk_ov012_022589e0) {
    HOST_OVERLAY_VAR(data_ov012_02258a64),
    HOST_OVERLAY_VAR(data_ov012_02258a2c),
    HOST_OVERLAY_VAR(data_ov012_02258a44),
    HOST_OVERLAY_VAR(data_ov012_02258a10),
    HOST_OVERLAY_VAR(data_ov012_02258a08),
    HOST_OVERLAY_VAR(data_ov012_02258a18),
    HOST_OVERLAY_VAR(data_ov012_02258a04),
    HOST_OVERLAY_VAR(data_ov012_02258a00),
    HOST_OVERLAY_VARS_END
};

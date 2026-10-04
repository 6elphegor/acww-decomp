// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"
#include "game/FxVec3.h"
#include "game/SceneInfo.h"

// ov021: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)


// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern SceneWarpList data_ov021_02258c0c;
extern u32 data_ov021_02258c00[1];
extern SceneSpawnRecord data_ov021_02258c24[1];
extern SceneSpawnGroup data_ov021_02258c64[4];
extern SceneSpawnList data_ov021_02258c04;
extern SceneInfo data_ov021_02258c4c;
extern u32 data_ov021_02258c14[2];
extern FxVec3 data_ov021_02258cc4;
extern SceneWarp data_ov021_02258d0c[7];
extern SceneSpawnRecord data_ov021_02258c38[1];
extern SceneMapInfo data_ov021_02258c1c;

SceneWarpList data_ov021_02258c0c = {data_ov021_02258d0c, 7};

u32 data_ov021_02258c00[1] = {0x101d};

SceneSpawnRecord data_ov021_02258c24[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

SceneSpawnGroup data_ov021_02258c64[4] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov021_02258c14},
    {1, 1, 0, data_ov021_02258c24},
    {0, 1, 0, data_ov021_02258c38},
};

SceneSpawnList data_ov021_02258c04 = {4, 0, data_ov021_02258c64};

SceneInfo data_ov021_02258c4c = {&data_ov021_02258c04, 0, &data_ov021_02258c1c, &data_ov021_02258c0c, 0x2f, -1};

u32 data_ov021_02258c14[2] = {0x100c2, 0x51};

FxVec3 data_ov021_02258cc4(0x10000, 0x200, 0x1d000);

SceneWarp data_ov021_02258d0c[7] = {
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
    SceneWarp(0x21, Unk_020b4f8c_Vec(0x1b000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 2),
    SceneWarp(0x29, Unk_020b4f8c_Vec(0x1b000, 0, 0x1e000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    SceneWarp(0x22, data_ov021_02258cc4, 0x23800000, -0x8000, 2, 2, -0x8000, 1),
    SceneWarp(0x27, Unk_020b4f8c_Vec(0x16000, 0, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
    SceneWarp(0x25, Unk_020b4f8c_Vec(0x5000, 0, 0x1a000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
    SceneWarp(0x23, Unk_020b4f8c_Vec(0x5000, 0, 0x1a000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
};

SceneSpawnRecord data_ov021_02258c38[1] = {
    {0xf0006e, 0x1500000, 0, 0, 0xd00c},
};

SceneMapInfo data_ov021_02258c1c = {data_ov021_02258c00, 1, 1};

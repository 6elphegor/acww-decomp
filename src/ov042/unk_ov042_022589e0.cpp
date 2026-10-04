// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov042: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov042_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov042_Head {
    u32 count;
    Unk_ov042_Entry *entries;
};

struct Unk_ov042_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov042_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov042_Rec {
    u32 w[5];
};

struct Unk_ov042_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov042_Head *head;
    s32 isOutdoor;
    Unk_ov042_Grid *grid;
    Unk_ov042_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov042_Rec data_ov042_02258b00[2];
extern Unk_ov042_Objs data_ov042_02258ab4;
extern u32 data_ov042_02258aa0[1];
extern Unk_ov042_Entry data_ov042_02258ae8[3];
extern Unk_ov042_Scene data_ov042_02258ad0;
extern Unk_ov042_Grid data_ov042_02258aa4;
extern Unk_ov042_Rec data_ov042_02258abc[1];
extern SceneWarp data_ov042_02258b58[2];
extern Unk_ov042_Head data_ov042_02258aac;

Unk_ov042_Rec data_ov042_02258b00[2] = {
    {0xf00075, 0xc00000, 0x80000000, 0, 0xd010},
    {0x1100074, 0xc00000, 0x80000000, 0, 0xd00f},
};

Unk_ov042_Objs data_ov042_02258ab4 = {data_ov042_02258b58, 2};

u32 data_ov042_02258aa0[1] = {0x1019};

Unk_ov042_Entry data_ov042_02258ae8[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov042_02258abc},
    {0, 2, 0, data_ov042_02258b00},
};

Unk_ov042_Scene data_ov042_02258ad0 = {&data_ov042_02258aac, 0, &data_ov042_02258aa4, &data_ov042_02258ab4, 0x32, -1};

Unk_ov042_Grid data_ov042_02258aa4 = {data_ov042_02258aa0, 1, 1};

Unk_ov042_Rec data_ov042_02258abc[1] = {
    {0x1000009, 0x1ae0002, 0x80000000, 0, 0x800000},
};

SceneWarp data_ov042_02258b58[2] = {
    SceneWarp(0x1d, Unk_020b4f8c_Vec(0x10000, 0x200, 0x9000), 0x11000000, 0, 2, 2, -0x8000, 2),
    SceneWarp(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 0),
};

Unk_ov042_Head data_ov042_02258aac = {3, data_ov042_02258ae8};

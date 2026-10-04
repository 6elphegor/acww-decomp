// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov013: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov013_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov013_Head {
    u32 count;
    Unk_ov013_Entry *entries;
};

struct Unk_ov013_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov013_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov013_Rec {
    u32 w[5];
};

struct Unk_ov013_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov013_Head *head;
    s32 isOutdoor;
    Unk_ov013_Grid *grid;
    Unk_ov013_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov013_02258a60[1];
extern Unk_ov013_Grid data_ov013_02258a64;
extern Unk_ov013_Head data_ov013_02258a6c;
extern Unk_ov013_Entry data_ov013_02258a90[3];
extern SceneWarp data_ov013_02258b0c[1];
extern Unk_ov013_Rec data_ov013_02258ac0[2];
extern Unk_ov013_Rec data_ov013_02258a7c[1];
extern Unk_ov013_Scene data_ov013_02258aa8;
extern Unk_ov013_Objs data_ov013_02258a74;

u32 data_ov013_02258a60[1] = {0x1028};

Unk_ov013_Grid data_ov013_02258a64 = {data_ov013_02258a60, 1, 1};

Unk_ov013_Head data_ov013_02258a6c = {3, data_ov013_02258a90};

Unk_ov013_Entry data_ov013_02258a90[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov013_02258a7c},
    {0, 2, 0, data_ov013_02258ac0},
};

SceneWarp data_ov013_02258b0c[1] = {
    SceneWarp(0x1d, Unk_020b4f8c_Vec(0xa000, 0x200, 0x9000), 0x23800000, 0, 2, 2, 0, 3),
};

Unk_ov013_Rec data_ov013_02258ac0[2] = {
    {0x1000061, 0x1700000, 0xc0000000, 0, 0xd017},
    {0x15, 0, 0, 0, 0},
};

Unk_ov013_Rec data_ov013_02258a7c[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

Unk_ov013_Scene data_ov013_02258aa8 = {&data_ov013_02258a6c, 0, &data_ov013_02258a64, &data_ov013_02258a74, 0x35, -1};

Unk_ov013_Objs data_ov013_02258a74 = {data_ov013_02258b0c, 1};

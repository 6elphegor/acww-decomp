// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov027: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov027_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov027_Head {
    u32 count;
    Unk_ov027_Entry *entries;
};

struct Unk_ov027_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov027_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov027_Rec {
    u32 w[5];
};

struct Unk_ov027_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov027_Head *head;
    s32 isOutdoor;
    Unk_ov027_Grid *grid;
    Unk_ov027_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov027_Scene data_ov027_02258ad8;
extern Unk_ov027_Entry data_ov027_02258af0[3];
extern Unk_ov027_Rec data_ov027_02258ac4[1];
extern Unk_ov027_Objs data_ov027_02258aac;
extern SceneWarp data_ov027_02258b38[2];
extern Unk_ov027_Grid data_ov027_02258abc;
extern u32 data_ov027_02258aa4[2];
extern Unk_ov027_Head data_ov027_02258ab4;
extern u32 data_ov027_02258aa0[1];

Unk_ov027_Scene data_ov027_02258ad8 = {&data_ov027_02258ab4, 0, &data_ov027_02258abc, &data_ov027_02258aac, -1, -1};

Unk_ov027_Entry data_ov027_02258af0[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov027_02258aa4},
    {1, 1, 0, data_ov027_02258ac4},
};

Unk_ov027_Rec data_ov027_02258ac4[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

Unk_ov027_Objs data_ov027_02258aac = {data_ov027_02258b38, 2};

SceneWarp data_ov027_02258b38[2] = {
    SceneWarp(0x27, Unk_020b4f8c_Vec(0x5000, 0, 0x1a000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
    SceneWarp(0x27, Unk_020b4f8c_Vec(0x5000, 0, 0x8000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
};

Unk_ov027_Grid data_ov027_02258abc = {data_ov027_02258aa0, 1, 1};

u32 data_ov027_02258aa4[2] = {0x51, 0x100be};

Unk_ov027_Head data_ov027_02258ab4 = {3, data_ov027_02258af0};

u32 data_ov027_02258aa0[1] = {0x1021};

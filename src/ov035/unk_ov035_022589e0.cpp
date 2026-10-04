// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/Unk_020b4f8c.h"

// ov035: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov035_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov035_Head {
    u32 count;
    Unk_ov035_Entry *entries;
};

struct Unk_ov035_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov035_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov035_Rec {
    u32 w[5];
};

struct Unk_ov035_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov035_Head *head;
    s32 isOutdoor;
    Unk_ov035_Grid *grid;
    Unk_ov035_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov035_Head data_ov035_02258ab0;
extern Unk_ov035_Scene data_ov035_02258ad4;
extern Unk_ov035_Entry data_ov035_02258aec[3];
extern u32 data_ov035_02258aa4[1];
extern Unk_ov035_Grid data_ov035_02258aa8;
extern u32 data_ov035_02258aa0[1];
extern Unk_ov035_Objs data_ov035_02258ab8;
extern Unk_ov035_Rec data_ov035_02258ac0[1];
extern Unk_020b4f8c data_ov035_02258b38[2];

Unk_ov035_Head data_ov035_02258ab0 = {3, data_ov035_02258aec};

Unk_ov035_Scene data_ov035_02258ad4 = {&data_ov035_02258ab0, 0, &data_ov035_02258aa8, &data_ov035_02258ab8, -1, -1};

Unk_ov035_Entry data_ov035_02258aec[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov035_02258aa0},
    {1, 1, 0, data_ov035_02258ac0},
};

u32 data_ov035_02258aa4[1] = {0x1000};

Unk_ov035_Grid data_ov035_02258aa8 = {data_ov035_02258aa4, 1, 1};

u32 data_ov035_02258aa0[1] = {0x100d0};

Unk_ov035_Objs data_ov035_02258ab8 = {data_ov035_02258b38, 2};

Unk_ov035_Rec data_ov035_02258ac0[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

Unk_020b4f8c data_ov035_02258b38[2] = {
    Unk_020b4f8c(7, Unk_020b4f8c_Vec(0x11000, 0x200, 0x1d000), 0x10c00000, -0x4000, 2, 2, 0x4000, 1),
    Unk_020b4f8c(1, Unk_020b4f8c_Vec(0xf000, 0x200, 0x1d000), 0x11000000, 0x4000, 2, 2, -0x4000, 2),
};

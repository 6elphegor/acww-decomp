// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov012: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov012_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov012_Head {
    u32 count;
    Unk_ov012_Entry *entries;
};

struct Unk_ov012_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov012_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov012_Rec {
    u32 w[5];
};

struct Unk_ov012_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov012_Head *head;
    s32 isOutdoor;
    Unk_ov012_Grid *grid;
    Unk_ov012_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern Unk_ov012_Objs sRoomSceneEntryList;
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov012_Rec data_ov012_02258a64[4];
extern Unk_ov012_Scene data_ov012_02258a2c;
extern Unk_ov012_Entry data_ov012_02258a44[4];
extern Unk_ov012_Grid data_ov012_02258a10;
extern Unk_ov012_Head data_ov012_02258a08;
extern Unk_ov012_Rec data_ov012_02258a18[1];
extern u32 data_ov012_02258a04[1];
extern u32 data_ov012_02258a00[1];

Unk_ov012_Rec data_ov012_02258a64[4] = {
    {0xd00009, 0x1400002, 0, 0, 0x2000000},
    {0x1300009, 0x1400002, 0, 0, 0x2000000},
    {0xd00009, 0x1a00002, 0, 0, 0x2000000},
    {0x1300009, 0x1a00002, 0, 0, 0x2000000},
};

Unk_ov012_Scene data_ov012_02258a2c = {&data_ov012_02258a08, 0, &data_ov012_02258a10, &sRoomSceneEntryList, -1, -1};

Unk_ov012_Entry data_ov012_02258a44[4] = {
    {2, 1, 0, data_ov012_02258a04},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 4, 0, data_ov012_02258a64},
    {0, 1, 0, data_ov012_02258a18},
};

Unk_ov012_Grid data_ov012_02258a10 = {data_ov012_02258a00, 1, 1};

Unk_ov012_Head data_ov012_02258a08 = {4, data_ov012_02258a44};

Unk_ov012_Rec data_ov012_02258a18[1] = {
    {0x2d, 0, 0, 0, 0},
};

u32 data_ov012_02258a04[1] = {0x2b};

u32 data_ov012_02258a00[1] = {0x1003};

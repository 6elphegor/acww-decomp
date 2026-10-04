// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov031: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov031_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov031_Head {
    u32 count;
    Unk_ov031_Entry *entries;
};

struct Unk_ov031_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov031_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov031_Rec {
    u32 w[5];
};

struct Unk_ov031_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov031_Head *head;
    s32 isOutdoor;
    Unk_ov031_Grid *grid;
    Unk_ov031_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov031_Rec data_ov031_02258a80[1];
extern Unk_ov031_Scene data_ov031_02258a94;
extern Unk_ov031_Entry data_ov031_02258aac[3];
extern u32 data_ov031_02258a64[1];
extern u32 data_ov031_02258a60[1];
extern SceneWarp data_ov031_02258aec[1];
extern Unk_ov031_Objs data_ov031_02258a68;
extern Unk_ov031_Head data_ov031_02258a78;
extern Unk_ov031_Grid data_ov031_02258a70;

Unk_ov031_Rec data_ov031_02258a80[1] = {
    {0x1000009, 0x12c0002, 0x80000000, 0, 0x800000},
};

Unk_ov031_Scene data_ov031_02258a94 = {&data_ov031_02258a78, 0, &data_ov031_02258a70, &data_ov031_02258a68, -1, -1};

Unk_ov031_Entry data_ov031_02258aac[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov031_02258a64},
    {1, 1, 0, data_ov031_02258a80},
};

u32 data_ov031_02258a64[1] = {0x100d0};

u32 data_ov031_02258a60[1] = {0x1000};

SceneWarp data_ov031_02258aec[1] = {
    SceneWarp(1, Unk_020b4f8c_Vec(0x10000, 0x200, 0xb000), 0x23800000, 0, 2, 2, 0, 3),
};

Unk_ov031_Objs data_ov031_02258a68 = {data_ov031_02258aec, 1};

Unk_ov031_Head data_ov031_02258a78 = {3, data_ov031_02258aac};

Unk_ov031_Grid data_ov031_02258a70 = {data_ov031_02258a60, 1, 1};

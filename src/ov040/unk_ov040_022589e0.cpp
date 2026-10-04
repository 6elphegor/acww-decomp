// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/Unk_020b4f8c.h"

// ov040: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov040_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov040_Head {
    u32 count;
    Unk_ov040_Entry *entries;
};

struct Unk_ov040_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov040_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov040_Rec {
    u32 w[5];
};

struct Unk_ov040_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov040_Head *head;
    s32 isOutdoor;
    Unk_ov040_Grid *grid;
    Unk_ov040_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov040_02258a40[1];
extern Unk_ov040_Grid data_ov040_02258a44;
extern Unk_ov040_Head data_ov040_02258a4c;
extern Unk_ov040_Entry data_ov040_02258a70[3];
extern Unk_020b4f8c data_ov040_02258aec[1];
extern Unk_ov040_Rec data_ov040_02258aa0[2];
extern Unk_ov040_Rec data_ov040_02258a5c[1];
extern Unk_ov040_Scene data_ov040_02258a88;
extern Unk_ov040_Objs data_ov040_02258a54;

u32 data_ov040_02258a40[1] = {0x1017};

Unk_ov040_Grid data_ov040_02258a44 = {data_ov040_02258a40, 1, 1};

Unk_ov040_Head data_ov040_02258a4c = {3, data_ov040_02258a70};

Unk_ov040_Entry data_ov040_02258a70[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov040_02258a5c},
    {0, 2, 0, data_ov040_02258aa0},
};

Unk_020b4f8c data_ov040_02258aec[1] = {
    Unk_020b4f8c(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 4),
};

Unk_ov040_Rec data_ov040_02258aa0[2] = {
    {0x1100076, 0x1a00000, 0, 0, 0xd01b},
    {0x150002c, 0x1b00000, 0xc0000000, 0, 0},
};

Unk_ov040_Rec data_ov040_02258a5c[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

Unk_ov040_Scene data_ov040_02258a88 = {&data_ov040_02258a4c, 0, &data_ov040_02258a44, &data_ov040_02258a54, 0x32, -1};

Unk_ov040_Objs data_ov040_02258a54 = {data_ov040_02258aec, 1};

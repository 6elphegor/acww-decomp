// mwcc-version: 1.2/base
#include "types.h"

// ov030: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

struct Unk_ov030_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov030_Head {
    u32 count;
    Unk_ov030_Entry *entries;
};

struct Unk_ov030_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov030_Objs;

struct Unk_ov030_Rec {
    u32 w[5];
};

struct Unk_ov030_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov030_Head *head;
    s32 isOutdoor;
    Unk_ov030_Grid *grid;
    Unk_ov030_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov030_02258a04[1];
extern Unk_ov030_Entry data_ov030_02258a2c[3];
extern Unk_ov030_Rec data_ov030_02258a18[1];
extern Unk_ov030_Grid data_ov030_02258a10;
extern Unk_ov030_Head data_ov030_02258a08;
extern u32 data_ov030_02258a00[1];
extern Unk_ov030_Scene data_ov030_02258a44;

u32 data_ov030_02258a04[1] = {0x1029};

Unk_ov030_Entry data_ov030_02258a2c[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov030_02258a00},
    {0, 1, 0, data_ov030_02258a18},
};

Unk_ov030_Rec data_ov030_02258a18[1] = {
    {0x100005e, 0x1800000, 0, 0, 0xd024},
};

Unk_ov030_Grid data_ov030_02258a10 = {data_ov030_02258a04, 1, 1};

Unk_ov030_Head data_ov030_02258a08 = {3, data_ov030_02258a2c};

u32 data_ov030_02258a00[1] = {0xb};

Unk_ov030_Scene data_ov030_02258a44 = {&data_ov030_02258a08, 0, &data_ov030_02258a10, 0, 0x37, -1};

// mwcc-version: 1.2/base
#include "types.h"

// ov007: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

struct Unk_ov007_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov007_Head {
    u32 count;
    Unk_ov007_Entry *entries;
};

struct Unk_ov007_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov007_Objs;

struct Unk_ov007_Rec {
    u32 w[5];
};

struct Unk_ov007_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov007_Head *head;
    s32 unk_04;
    Unk_ov007_Grid *grid;
    Unk_ov007_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov007_Scene data_ov007_0225b7a8;
extern Unk_ov007_Head data_ov007_0225b790;
extern Unk_ov007_Entry data_ov007_0225b788[1];
extern u32 data_ov007_0225b798[4];
extern Unk_ov007_Grid data_ov007_0225b780;

Unk_ov007_Scene data_ov007_0225b7a8 = {&data_ov007_0225b790, 1, &data_ov007_0225b780, 0, -1, -1};

Unk_ov007_Head data_ov007_0225b790 = {1, data_ov007_0225b788};

Unk_ov007_Entry data_ov007_0225b788[1] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
};

u32 data_ov007_0225b798[4] = {0x1000, 0x1000, 0x1000, 0x1000};

Unk_ov007_Grid data_ov007_0225b780 = {data_ov007_0225b798, 2, 2};

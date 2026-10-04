// mwcc-version: 1.2/base
#include "types.h"

// ov008: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

struct Unk_ov008_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov008_Head {
    u32 count;
    Unk_ov008_Entry *entries;
};

struct Unk_ov008_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov008_Objs;

struct Unk_ov008_Rec {
    u32 w[5];
};

struct Unk_ov008_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov008_Head *head;
    s32 isOutdoor;
    Unk_ov008_Grid *grid;
    Unk_ov008_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov008_0225b780[1];
extern Unk_ov008_Head data_ov008_0225b78c;
extern Unk_ov008_Grid data_ov008_0225b784;
extern Unk_ov008_Scene data_ov008_0225b79c;
extern Unk_ov008_Entry data_ov008_0225b794[1];

u32 data_ov008_0225b780[1] = {0x1000};

Unk_ov008_Head data_ov008_0225b78c = {1, data_ov008_0225b794};

Unk_ov008_Grid data_ov008_0225b784 = {data_ov008_0225b780, 1, 1};

Unk_ov008_Scene data_ov008_0225b79c = {&data_ov008_0225b78c, 1, &data_ov008_0225b784, 0, -1, -1};

Unk_ov008_Entry data_ov008_0225b794[1] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
};

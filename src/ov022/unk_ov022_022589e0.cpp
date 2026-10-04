// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/Unk_020b4f8c.h"

// ov022: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov022_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov022_Head {
    u32 count;
    Unk_ov022_Entry *entries;
};

struct Unk_ov022_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov022_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov022_Rec {
    u32 w[5];
};

struct Unk_ov022_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov022_Head *head;
    s32 isOutdoor;
    Unk_ov022_Grid *grid;
    Unk_ov022_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov022_Objs data_ov022_02258afc;
extern Unk_ov022_Entry data_ov022_02258b30[3];
extern Unk_020b4f8c data_ov022_02258b84[3];
extern u32 data_ov022_02258ae0[1];
extern Unk_ov022_Rec data_ov022_02258b04[1];
extern u32 data_ov022_02258aec[2];
extern Unk_ov022_Head data_ov022_02258af4;
extern Unk_ov022_Grid data_ov022_02258ae4;
extern Unk_ov022_Scene data_ov022_02258b18;

Unk_ov022_Objs data_ov022_02258afc = {data_ov022_02258b84, 3};

Unk_ov022_Entry data_ov022_02258b30[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov022_02258aec},
    {1, 1, 0, data_ov022_02258b04},
};

Unk_020b4f8c data_ov022_02258b84[3] = {
    Unk_020b4f8c(0x20, Unk_020b4f8c_Vec(0x17000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    Unk_020b4f8c(0x24, Unk_020b4f8c_Vec(0x6000, 0, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
    Unk_020b4f8c(0x24, Unk_020b4f8c_Vec(0x1c000, 0, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

u32 data_ov022_02258ae0[1] = {0x101e};

Unk_ov022_Rec data_ov022_02258b04[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov022_02258aec[2] = {0x51, 0xc3};

Unk_ov022_Head data_ov022_02258af4 = {3, data_ov022_02258b30};

Unk_ov022_Grid data_ov022_02258ae4 = {data_ov022_02258ae0, 1, 1};

Unk_ov022_Scene data_ov022_02258b18 = {&data_ov022_02258af4, 0, &data_ov022_02258ae4, &data_ov022_02258afc, -1, -1};

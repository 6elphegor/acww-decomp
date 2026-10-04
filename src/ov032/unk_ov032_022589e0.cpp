// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/Unk_020b4f8c.h"

// ov032: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// vector object with an out-of-line (main) destructor 0x02000c8c
struct FxVec3 : Unk_020b4f8c_Vec {
    FxVec3(s32 a, s32 b, s32 c) : Unk_020b4f8c_Vec(a, b, c) {}
    ~FxVec3();
};

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov032_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov032_Head {
    u32 count;
    Unk_ov032_Entry *entries;
};

struct Unk_ov032_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov032_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov032_Rec {
    u32 w[5];
};

struct Unk_ov032_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov032_Head *head;
    s32 isOutdoor;
    Unk_ov032_Grid *grid;
    Unk_ov032_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov032_Scene data_ov032_02258c34;
extern Unk_ov032_Entry data_ov032_02258c4c[3];
extern Unk_ov032_Rec data_ov032_02258c20[1];
extern Unk_ov032_Head data_ov032_02258c08;
extern Unk_ov032_Objs data_ov032_02258c18;
extern Unk_ov032_Grid data_ov032_02258c10;
extern FxVec3 data_ov032_02258ca4;
extern Unk_020b4f8c data_ov032_02258cec[7];
extern u32 data_ov032_02258c04[1];
extern u32 data_ov032_02258c00[1];

Unk_ov032_Scene data_ov032_02258c34 = {&data_ov032_02258c08, 0, &data_ov032_02258c10, &data_ov032_02258c18, -1, -1};

Unk_ov032_Entry data_ov032_02258c4c[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 1, 0, data_ov032_02258c00},
    {1, 1, 0, data_ov032_02258c20},
};

Unk_ov032_Rec data_ov032_02258c20[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

Unk_ov032_Head data_ov032_02258c08 = {3, data_ov032_02258c4c};

Unk_ov032_Objs data_ov032_02258c18 = {data_ov032_02258cec, 7};

Unk_ov032_Grid data_ov032_02258c10 = {data_ov032_02258c04, 1, 1};

FxVec3 data_ov032_02258ca4(0x10000, 0, 0x1d000);

Unk_020b4f8c data_ov032_02258cec[7] = {
    Unk_020b4f8c(0x3e, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
    Unk_020b4f8c(7, Unk_020b4f8c_Vec(0xf000, 0, 0x1d000), 0x10c00000, 0x4000, 2, 2, -0x4000, 1),
    Unk_020b4f8c(5, Unk_020b4f8c_Vec(0xf000, 0, 0x1d000), 0x10c00000, 0x4000, 2, 2, -0x4000, 1),
    Unk_020b4f8c(4, Unk_020b4f8c_Vec(0x17000, 0, 0x1a000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    Unk_020b4f8c(3, Unk_020b4f8c_Vec(0x9000, 0, 0x1a000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
    Unk_020b4f8c(2, data_ov032_02258ca4, 0x23800000, -0x8000, 2, 2, -0x8000, 3),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

u32 data_ov032_02258c04[1] = {0x1004};

u32 data_ov032_02258c00[1] = {0x100d0};

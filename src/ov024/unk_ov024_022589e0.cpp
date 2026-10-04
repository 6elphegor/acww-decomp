// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/Unk_020b4f8c.h"
#include "game/FxVec3.h"

// ov024: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)


// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov024_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov024_Head {
    u32 count;
    Unk_ov024_Entry *entries;
};

struct Unk_ov024_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov024_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov024_Rec {
    u32 w[5];
};

struct Unk_ov024_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov024_Head *head;
    s32 isOutdoor;
    Unk_ov024_Grid *grid;
    Unk_ov024_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov024_Scene data_ov024_02258af4;
extern u32 data_ov024_02258ac0[1];
extern Unk_ov024_Objs data_ov024_02258ac8;
extern u32 data_ov024_02258ac4[1];
extern Unk_ov024_Grid data_ov024_02258ad8;
extern Unk_ov024_Entry data_ov024_02258b0c[3];
extern FxVec3 data_ov024_02258b64;
extern Unk_ov024_Head data_ov024_02258ad0;
extern Unk_ov024_Rec data_ov024_02258ae0[1];
extern Unk_020b4f8c data_ov024_02258b70[2];

Unk_ov024_Scene data_ov024_02258af4 = {&data_ov024_02258ad0, 0, &data_ov024_02258ad8, &data_ov024_02258ac8, -1, -1};

u32 data_ov024_02258ac0[1] = {0x1022};

Unk_ov024_Objs data_ov024_02258ac8 = {data_ov024_02258b70, 2};

u32 data_ov024_02258ac4[1] = {0x52};

Unk_ov024_Grid data_ov024_02258ad8 = {data_ov024_02258ac0, 1, 1};

Unk_ov024_Entry data_ov024_02258b0c[3] = {
    {2, 1, 0, data_ov024_02258ac4},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov024_02258ae0},
};

FxVec3 data_ov024_02258b64(0x10000, 0x200, 0x1d000);

Unk_ov024_Head data_ov024_02258ad0 = {3, data_ov024_02258b0c};

Unk_ov024_Rec data_ov024_02258ae0[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

Unk_020b4f8c data_ov024_02258b70[2] = {
    Unk_020b4f8c(0x20, Unk_020b4f8c_Vec(0x17000, 0, 0x14000), 0x23800000, -0x4000, 2, 2, -0x4000, 3),
    Unk_020b4f8c(0x26, data_ov024_02258b64, 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

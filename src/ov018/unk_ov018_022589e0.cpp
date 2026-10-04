// mwcc-version: 1.2/base
#include "types.h"
#include "game/Unk_020b4f8c_Vec.h"
#include "game/SceneWarp.h"

// ov018: map scene tables (a scene record, its entry list, the id grid, the static map objects).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)

struct Unk_ov018_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov018_Head {
    u32 count;
    Unk_ov018_Entry *entries;
};

struct Unk_ov018_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov018_Objs {
    SceneWarp *objs;
    u32 count;
};

struct Unk_ov018_Rec {
    u32 w[5];
};

struct Unk_ov018_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov018_Head *head;
    s32 isOutdoor;
    Unk_ov018_Grid *grid;
    Unk_ov018_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};


// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov018_Entry data_ov018_02258ab4[1];
extern SceneWarp data_ov018_02258b24[3];
extern u32 data_ov018_02258aa0[1];
extern Unk_ov018_Scene data_ov018_02258acc;
extern Unk_ov018_Head data_ov018_02258abc;
extern Unk_ov018_Grid data_ov018_02258ac4;
extern Unk_ov018_Objs data_ov018_02258aac;
extern u32 data_ov018_02258aa4[2];

Unk_ov018_Entry data_ov018_02258ab4[1] = {
    {2, 2, 0, data_ov018_02258aa4},
};

SceneWarp data_ov018_02258b24[3] = {
    SceneWarp(0x3e, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    SceneWarp(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    SceneWarp(0x3d, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

u32 data_ov018_02258aa0[1] = {0x1015};

Unk_ov018_Scene data_ov018_02258acc = {&data_ov018_02258abc, 0, &data_ov018_02258ac4, &data_ov018_02258aac, 0x38, -1};

Unk_ov018_Head data_ov018_02258abc = {1, data_ov018_02258ab4};

Unk_ov018_Grid data_ov018_02258ac4 = {data_ov018_02258aa0, 1, 1};

Unk_ov018_Objs data_ov018_02258aac = {data_ov018_02258b24, 3};

u32 data_ov018_02258aa4[2] = {0xb, 0xcd};

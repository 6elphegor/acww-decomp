// mwcc-version: 1.2/base
#include "types.h"

// ov011: map scene tables (a scene record, its entry list, the id grid).
// Generated from the original image; the definition order below
// reproduces the original data/bss order (mwcc size heapsort) and the __sinit order.

// 12-byte vector with a copy constructor (so it is passed by address of a copy)
struct Unk_020b4f8c_Vec {
    s32 x, y, z;
    Unk_020b4f8c_Vec(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_020b4f8c_Vec(const Unk_020b4f8c_Vec &o) {
        x = o.x;
        y = o.y;
        z = o.z;
    }
};

// 0x1c-byte map object: constructor 0x020b4f8c, destructor 0x020b4fc0 (both in main)
struct Unk_020b4f8c {
    u8 pad[0x1c];
    Unk_020b4f8c(u8 id, Unk_020b4f8c_Vec v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);
    ~Unk_020b4f8c();
};

struct Unk_ov011_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov011_Head {
    u32 count;
    Unk_ov011_Entry *entries;
};

struct Unk_ov011_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov011_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov011_Rec {
    u32 w[5];
};

struct Unk_ov011_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov011_Head *head;
    s32 isOutdoor;
    Unk_ov011_Grid *grid;
    Unk_ov011_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern Unk_ov011_Objs sRoomSceneEntryList;
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov011_Grid data_ov011_02258a04;
extern u32 data_ov011_02258a00[1];
extern Unk_ov011_Entry data_ov011_02258a4c[4];
extern Unk_ov011_Head data_ov011_02258a0c;
extern Unk_ov011_Rec data_ov011_02258a20[1];
extern Unk_ov011_Rec data_ov011_02258a6c[4];
extern u32 data_ov011_02258a14[3];
extern Unk_ov011_Scene data_ov011_02258a34;

Unk_ov011_Grid data_ov011_02258a04 = {data_ov011_02258a00, 1, 1};

u32 data_ov011_02258a00[1] = {0x1003};

Unk_ov011_Entry data_ov011_02258a4c[4] = {
    {2, 3, 0, data_ov011_02258a14},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 4, 0, data_ov011_02258a6c},
    {0, 1, 0, data_ov011_02258a20},
};

Unk_ov011_Head data_ov011_02258a0c = {4, data_ov011_02258a4c};

Unk_ov011_Rec data_ov011_02258a20[1] = {
    {0x2d, 0, 0, 0, 0},
};

Unk_ov011_Rec data_ov011_02258a6c[4] = {
    {0xd00009, 0x1400002, 0, 0, 0x2000000},
    {0x1300009, 0x1400002, 0, 0, 0x2000000},
    {0xd00009, 0x1a00002, 0, 0, 0x2000000},
    {0x1300009, 0x1a00002, 0, 0, 0x2000000},
};

u32 data_ov011_02258a14[3] = {0x2b, 0xd3, 0xc7};

Unk_ov011_Scene data_ov011_02258a34 = {&data_ov011_02258a0c, 0, &data_ov011_02258a04, &sRoomSceneEntryList, -1, -1};

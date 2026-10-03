// mwcc-version: 1.2/base
#include "types.h"

// ov023: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov023_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov023_Head {
    u32 count;
    Unk_ov023_Entry *entries;
};

struct Unk_ov023_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov023_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov023_Rec {
    u32 w[5];
};

struct Unk_ov023_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov023_Head *head;
    s32 unk_04;
    Unk_ov023_Grid *grid;
    Unk_ov023_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov023_Scene data_ov023_02258ad8;
extern Unk_ov023_Entry data_ov023_02258af0[3];
extern Unk_ov023_Rec data_ov023_02258ac4[1];
extern Unk_ov023_Objs data_ov023_02258aac;
extern Unk_020b4f8c data_ov023_02258b38[2];
extern Unk_ov023_Grid data_ov023_02258abc;
extern u32 data_ov023_02258aa4[2];
extern Unk_ov023_Head data_ov023_02258ab4;
extern u32 data_ov023_02258aa0[1];

Unk_ov023_Scene data_ov023_02258ad8 = {&data_ov023_02258ab4, 0, &data_ov023_02258abc, &data_ov023_02258aac, -1, -1};

Unk_ov023_Entry data_ov023_02258af0[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov023_02258aa4},
    {1, 1, 0, data_ov023_02258ac4},
};

Unk_ov023_Rec data_ov023_02258ac4[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

Unk_ov023_Objs data_ov023_02258aac = {data_ov023_02258b38, 2};

Unk_020b4f8c data_ov023_02258b38[2] = {
    Unk_020b4f8c(0x23, Unk_020b4f8c_Vec(0x6000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
    Unk_020b4f8c(0x23, Unk_020b4f8c_Vec(0x1c000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
};

Unk_ov023_Grid data_ov023_02258abc = {data_ov023_02258aa0, 1, 1};

u32 data_ov023_02258aa4[2] = {0x51, 0x100c3};

Unk_ov023_Head data_ov023_02258ab4 = {3, data_ov023_02258af0};

u32 data_ov023_02258aa0[1] = {0x101f};

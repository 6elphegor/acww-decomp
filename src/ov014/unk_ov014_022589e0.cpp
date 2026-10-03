// mwcc-version: 1.2/base
#include "types.h"

// ov014: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov014_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov014_Head {
    u32 count;
    Unk_ov014_Entry *entries;
};

struct Unk_ov014_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov014_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov014_Rec {
    u32 w[5];
};

struct Unk_ov014_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov014_Head *head;
    s32 unk_04;
    Unk_ov014_Grid *grid;
    Unk_ov014_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 data_ov004_0224f2d4;  // copied into the entry table by __sinit
extern u32 data_ov004_0224f2d8[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov014_Head data_ov014_02258a4c;
extern Unk_ov014_Rec data_ov014_02258a70[1];
extern u32 data_ov014_02258a40[1];
extern Unk_ov014_Rec data_ov014_02258a5c[1];
extern Unk_ov014_Scene data_ov014_02258a84;
extern Unk_ov014_Grid data_ov014_02258a54;
extern Unk_ov014_Objs data_ov014_02258a44;
extern Unk_ov014_Entry data_ov014_02258a9c[3];
extern Unk_020b4f8c data_ov014_02258acc[1];

Unk_ov014_Head data_ov014_02258a4c = {3, data_ov014_02258a9c};

Unk_ov014_Rec data_ov014_02258a70[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov014_02258a40[1] = {0x101c};

Unk_ov014_Rec data_ov014_02258a5c[1] = {
    {0x1000055, 0x1700000, 0, 0, 0xd00e},
};

Unk_ov014_Scene data_ov014_02258a84 = {&data_ov014_02258a4c, 0, &data_ov014_02258a54, &data_ov014_02258a44, 0x34, -1};

Unk_ov014_Grid data_ov014_02258a54 = {data_ov014_02258a40, 1, 1};

Unk_ov014_Objs data_ov014_02258a44 = {data_ov014_02258acc, 1};

Unk_ov014_Entry data_ov014_02258a9c[3] = {
    {2, data_ov004_0224f2d4, 0, data_ov004_0224f2d8},
    {1, 1, 0, data_ov014_02258a70},
    {0, 1, 0, data_ov014_02258a5c},
};

Unk_020b4f8c data_ov014_02258acc[1] = {
    Unk_020b4f8c(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
};

// mwcc-version: 1.2/base
#include "types.h"

// ov036: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov036_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov036_Head {
    u32 count;
    Unk_ov036_Entry *entries;
};

struct Unk_ov036_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov036_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov036_Rec {
    u32 w[5];
};

struct Unk_ov036_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov036_Head *head;
    s32 unk_04;
    Unk_ov036_Grid *grid;
    Unk_ov036_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 data_ov004_0224f2d4;  // copied into the entry table by __sinit
extern u32 data_ov004_0224f2d8[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov036_Rec data_ov036_02258ab0[2];
extern Unk_ov036_Entry data_ov036_02258a90[4];
extern Unk_ov036_Grid data_ov036_02258a44;
extern Unk_ov036_Rec data_ov036_02258a64[1];
extern Unk_ov036_Scene data_ov036_02258a78;
extern Unk_ov036_Head data_ov036_02258a5c;
extern u32 data_ov036_02258a40[1];
extern u32 data_ov036_02258a4c[2];
extern Unk_020b4f8c data_ov036_02258aec[1];
extern Unk_ov036_Objs data_ov036_02258a54;

Unk_ov036_Rec data_ov036_02258ab0[2] = {
    {0xf0007a, 0x1300000, 0, 0, 0xd006},
    {0x1700012, 0x1a00000, 0xc0000000, 0, 0},
};

Unk_ov036_Entry data_ov036_02258a90[4] = {
    {2, 2, 0, data_ov036_02258a4c},
    {2, data_ov004_0224f2d4, 0, data_ov004_0224f2d8},
    {1, 1, 0, data_ov036_02258a64},
    {0, 2, 0, data_ov036_02258ab0},
};

Unk_ov036_Grid data_ov036_02258a44 = {data_ov036_02258a40, 1, 1};

Unk_ov036_Rec data_ov036_02258a64[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

Unk_ov036_Scene data_ov036_02258a78 = {&data_ov036_02258a5c, 0, &data_ov036_02258a44, &data_ov036_02258a54, 0x36, -1};

Unk_ov036_Head data_ov036_02258a5c = {4, data_ov036_02258a90};

u32 data_ov036_02258a40[1] = {0x1001};

u32 data_ov036_02258a4c[2] = {0xc7, 0xd0};

Unk_020b4f8c data_ov036_02258aec[1] = {
    Unk_020b4f8c(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 4),
};

Unk_ov036_Objs data_ov036_02258a54 = {data_ov036_02258aec, 1};

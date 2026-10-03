// mwcc-version: 1.2/base
#include "types.h"

// ov028: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov028_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov028_Head {
    u32 count;
    Unk_ov028_Entry *entries;
};

struct Unk_ov028_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov028_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov028_Rec {
    u32 w[5];
};

struct Unk_ov028_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov028_Head *head;
    s32 unk_04;
    Unk_ov028_Grid *grid;
    Unk_ov028_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 data_ov004_0224f2d4;  // copied into the entry table by __sinit
extern u32 data_ov004_0224f2d8[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov028_Head data_ov028_02258a78;
extern Unk_ov028_Rec data_ov028_02258a94[1];
extern u32 data_ov028_02258a64[1];
extern Unk_ov028_Entry data_ov028_02258ac0[4];
extern Unk_ov028_Grid data_ov028_02258a68;
extern Unk_ov028_Rec data_ov028_02258a80[1];
extern u32 data_ov028_02258a60[1];
extern Unk_ov028_Objs data_ov028_02258a70;
extern Unk_020b4f8c data_ov028_02258aec[1];
extern Unk_ov028_Scene data_ov028_02258aa8;

Unk_ov028_Head data_ov028_02258a78 = {4, data_ov028_02258ac0};

Unk_ov028_Rec data_ov028_02258a94[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

u32 data_ov028_02258a64[1] = {0x53};

Unk_ov028_Entry data_ov028_02258ac0[4] = {
    {2, 1, 0, data_ov028_02258a64},
    {2, data_ov004_0224f2d4, 0, data_ov004_0224f2d8},
    {1, 1, 0, data_ov028_02258a94},
    {0, 1, 0, data_ov028_02258a80},
};

Unk_ov028_Grid data_ov028_02258a68 = {data_ov028_02258a60, 1, 1};

Unk_ov028_Rec data_ov028_02258a80[1] = {
    {0x14, 0, 0, 0, 0},
};

u32 data_ov028_02258a60[1] = {0x1024};

Unk_ov028_Objs data_ov028_02258a70 = {data_ov028_02258aec, 1};

Unk_020b4f8c data_ov028_02258aec[1] = {
    Unk_020b4f8c(0x20, Unk_020b4f8c_Vec(0x9000, 0, 0x14000), 0x23800000, 0x4000, 2, 2, 0x4000, 3),
};

Unk_ov028_Scene data_ov028_02258aa8 = {&data_ov028_02258a78, 0, &data_ov028_02258a68, &data_ov028_02258a70, -1, -1};

// mwcc-version: 1.2/base
#include "types.h"

// ov010: map scene tables (a scene record, its entry list, the id grid).
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

struct Unk_ov010_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov010_Head {
    u32 count;
    Unk_ov010_Entry *entries;
};

struct Unk_ov010_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov010_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov010_Rec {
    u32 w[5];
};

struct Unk_ov010_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov010_Head *head;
    s32 unk_04;
    Unk_ov010_Grid *grid;
    Unk_ov010_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 data_ov004_0224f2d4;  // copied into the entry table by __sinit
extern Unk_ov010_Objs data_ov004_0224f2cc;
extern u32 data_ov004_0224f2d8[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov010_Entry data_ov010_02258a58[4];
extern Unk_ov010_Rec data_ov010_02258a18[1];
extern Unk_ov010_Head data_ov010_02258a08;
extern u32 data_ov010_02258a00[1];
extern Unk_ov010_Rec data_ov010_02258a2c[1];
extern Unk_ov010_Grid data_ov010_02258a10;
extern Unk_ov010_Scene data_ov010_02258a40;
extern u32 data_ov010_02258a04[1];

Unk_ov010_Entry data_ov010_02258a58[4] = {
    {2, 1, 0, data_ov010_02258a00},
    {2, data_ov004_0224f2d4, 0, data_ov004_0224f2d8},
    {1, 1, 0, data_ov010_02258a18},
    {0, 1, 0, data_ov010_02258a2c},
};

Unk_ov010_Rec data_ov010_02258a18[1] = {
    {0x1000009, 0x1400002, 0, 0, 0x800000},
};

Unk_ov010_Head data_ov010_02258a08 = {4, data_ov010_02258a58};

u32 data_ov010_02258a00[1] = {0x2b};

Unk_ov010_Rec data_ov010_02258a2c[1] = {
    {0x2d, 0, 0, 0, 0},
};

Unk_ov010_Grid data_ov010_02258a10 = {data_ov010_02258a04, 1, 1};

Unk_ov010_Scene data_ov010_02258a40 = {&data_ov010_02258a08, 0, &data_ov010_02258a10, &data_ov004_0224f2cc, -1, -1};

u32 data_ov010_02258a04[1] = {0x1003};

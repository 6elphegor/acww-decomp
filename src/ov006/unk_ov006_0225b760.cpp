// mwcc-version: 1.2/base
#include "types.h"

// ov006: map scene tables (a scene record, its entry list, the id grid).
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

struct Unk_ov006_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov006_Head {
    u32 count;
    Unk_ov006_Entry *entries;
};

struct Unk_ov006_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov006_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov006_Rec {
    u32 w[5];
};

struct Unk_ov006_Scene {  // 24 bytes; main's table data_020e4280 points to it
    Unk_ov006_Head *head;
    s32 unk_04;
    Unk_ov006_Grid *grid;
    Unk_ov006_Objs *objs;
    s32 unk_10;
    s32 unk_14;
};

extern u8 data_ov003_02232498;  // copied into the entry table by __sinit
extern Unk_ov006_Objs data_ov003_0223249c;
extern u32 data_ov003_022324a4[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov006_0225b7cc[36];
extern Unk_ov006_Scene data_ov006_0225b79c;
extern u32 data_ov006_0225b790[3];
extern Unk_ov006_Head data_ov006_0225b780;
extern Unk_ov006_Entry data_ov006_0225b7b4[3];
extern Unk_ov006_Grid data_ov006_0225b788;

u32 data_ov006_0225b7cc[36] = {
    0x12, 0xc, 0xd, 0xb, 0xa, 0x13, 0xe, 0x1a, 0x46, 0x15, 0x15, 0x10,
    0xe, 0x14, 0x4b, 0x16, 0x16, 0x10, 0xe, 0x14, 0x4a, 0x26, 0x17, 0x10,
    0xf, 0x29, 0x2d, 0x29, 0x29, 0x11, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45,
};

Unk_ov006_Scene data_ov006_0225b79c = {&data_ov006_0225b780, 1, &data_ov006_0225b788, &data_ov003_0223249c, 9, 0x93};

u32 data_ov006_0225b790[3] = {0xbc, 0xd0, 0xd4};

Unk_ov006_Head data_ov006_0225b780 = {3, data_ov006_0225b7b4};

Unk_ov006_Entry data_ov006_0225b7b4[3] = {
    {2, data_ov003_02232498, 0, data_ov003_022324a4},
    {2, 3, 0, data_ov006_0225b790},
    {1, 0, 0, 0},
};

Unk_ov006_Grid data_ov006_0225b788 = {data_ov006_0225b7cc, 6, 6};

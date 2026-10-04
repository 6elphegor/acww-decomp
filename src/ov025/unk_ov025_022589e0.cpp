// mwcc-version: 1.2/base
#include "types.h"

// ov025: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov025_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov025_Head {
    u32 count;
    Unk_ov025_Entry *entries;
};

struct Unk_ov025_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov025_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov025_Rec {
    u32 w[5];
};

struct Unk_ov025_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov025_Head *head;
    s32 isOutdoor;
    Unk_ov025_Grid *grid;
    Unk_ov025_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov025_Rec data_ov025_02258a80[1];
extern Unk_ov025_Scene data_ov025_02258a94;
extern Unk_ov025_Entry data_ov025_02258aac[3];
extern u32 data_ov025_02258a64[1];
extern u32 data_ov025_02258a60[1];
extern Unk_020b4f8c data_ov025_02258aec[1];
extern Unk_ov025_Head data_ov025_02258a68;
extern Unk_ov025_Objs data_ov025_02258a78;
extern Unk_ov025_Grid data_ov025_02258a70;

Unk_ov025_Rec data_ov025_02258a80[1] = {
    {0x1000009, 0x1a00002, 0x80000000, 0, 0x800000},
};

Unk_ov025_Scene data_ov025_02258a94 = {&data_ov025_02258a68, 0, &data_ov025_02258a70, &data_ov025_02258a78, -1, -1};

Unk_ov025_Entry data_ov025_02258aac[3] = {
    {2, 1, 0, data_ov025_02258a64},
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov025_02258a80},
};

u32 data_ov025_02258a64[1] = {0x52};

u32 data_ov025_02258a60[1] = {0x1023};

Unk_020b4f8c data_ov025_02258aec[1] = {
    Unk_020b4f8c(0x25, Unk_020b4f8c_Vec(0x12000, 0, 0x3000), 0x23800000, 0, 2, 2, 0, 3),
};

Unk_ov025_Head data_ov025_02258a68 = {3, data_ov025_02258aac};

Unk_ov025_Objs data_ov025_02258a78 = {data_ov025_02258aec, 1};

Unk_ov025_Grid data_ov025_02258a70 = {data_ov025_02258a60, 1, 1};

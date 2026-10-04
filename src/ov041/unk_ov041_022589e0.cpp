// mwcc-version: 1.2/base
#include "types.h"

// ov041: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov041_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov041_Head {
    u32 count;
    Unk_ov041_Entry *entries;
};

struct Unk_ov041_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov041_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov041_Rec {
    u32 w[5];
};

struct Unk_ov041_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov041_Head *head;
    s32 isOutdoor;
    Unk_ov041_Grid *grid;
    Unk_ov041_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov041_Rec data_ov041_02258b40[3];
extern u32 data_ov041_02258ae0[1];
extern Unk_ov041_Entry data_ov041_02258b28[3];
extern Unk_ov041_Head data_ov041_02258aec;
extern Unk_ov041_Grid data_ov041_02258af4;
extern Unk_ov041_Objs data_ov041_02258ae4;
extern Unk_020b4f8c data_ov041_02258ba4[3];
extern Unk_ov041_Rec data_ov041_02258afc[1];
extern Unk_ov041_Scene data_ov041_02258b10;

Unk_ov041_Rec data_ov041_02258b40[3] = {
    {0x1100076, 0x1a00000, 0, 0, 0xd01c},
    {0x150002c, 0x1900000, 0xc0000000, 0, 0},
    {0x16, 0, 0xc0000000, 0, 0},
};

u32 data_ov041_02258ae0[1] = {0x1018};

Unk_ov041_Entry data_ov041_02258b28[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {1, 1, 0, data_ov041_02258afc},
    {0, 3, 0, data_ov041_02258b40},
};

Unk_ov041_Head data_ov041_02258aec = {3, data_ov041_02258b28};

Unk_ov041_Grid data_ov041_02258af4 = {data_ov041_02258ae0, 1, 1};

Unk_ov041_Objs data_ov041_02258ae4 = {data_ov041_02258ba4, 3};

Unk_020b4f8c data_ov041_02258ba4[3] = {
    Unk_020b4f8c(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 4),
    Unk_020b4f8c(0x1e, Unk_020b4f8c_Vec(0x10000, 0x200, 0x9000), 0x10c00000, 0, 2, 2, -0x8000, 1),
    Unk_020b4f8c(0x1f, Unk_020b4f8c_Vec(0x10000, 0x200, 0x1d000), 0x23800000, -0x8000, 2, 2, -0x8000, 3),
};

Unk_ov041_Rec data_ov041_02258afc[1] = {
    {0x1000009, 0x1c00002, 0x80000000, 0, 0x800000},
};

Unk_ov041_Scene data_ov041_02258b10 = {&data_ov041_02258aec, 0, &data_ov041_02258af4, &data_ov041_02258ae4, 0x32, -1};

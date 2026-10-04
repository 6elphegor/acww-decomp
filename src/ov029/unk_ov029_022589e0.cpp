// mwcc-version: 1.2/base
#include "types.h"

// ov029: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov029_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov029_Head {
    u32 count;
    Unk_ov029_Entry *entries;
};

struct Unk_ov029_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov029_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov029_Rec {
    u32 w[5];
};

struct Unk_ov029_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov029_Head *head;
    s32 isOutdoor;
    Unk_ov029_Grid *grid;
    Unk_ov029_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};

extern u8 sRoomCommonProfileCount;  // copied into the entry table by __sinit
extern u32 sRoomCommonProfiles[];

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_ov029_02258b80[1];
extern Unk_ov029_Entry data_ov029_02258bb8[3];
extern Unk_ov029_Rec data_ov029_02258ba4[1];
extern Unk_ov029_Head data_ov029_02258b9c;
extern Unk_ov029_Objs data_ov029_02258b8c;
extern Unk_ov029_Grid data_ov029_02258b94;
extern Unk_020b4f8c data_ov029_02258c54[7];
extern Unk_ov029_Scene data_ov029_02258bd0;
extern u32 data_ov029_02258b84[2];

u32 data_ov029_02258b80[1] = {0x1010};

Unk_ov029_Entry data_ov029_02258bb8[3] = {
    {2, sRoomCommonProfileCount, 0, sRoomCommonProfiles},
    {2, 2, 0, data_ov029_02258b84},
    {1, 1, 0, data_ov029_02258ba4},
};

Unk_ov029_Rec data_ov029_02258ba4[1] = {
    {0x1000009, 0x1d00002, 0x80000000, 0, 0x800000},
};

Unk_ov029_Head data_ov029_02258b9c = {3, data_ov029_02258bb8};

Unk_ov029_Objs data_ov029_02258b8c = {data_ov029_02258c54, 7};

Unk_ov029_Grid data_ov029_02258b94 = {data_ov029_02258b80, 1, 1};

Unk_020b4f8c data_ov029_02258c54[7] = {
    Unk_020b4f8c(0x3c, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 4),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0, 0, 2, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

Unk_ov029_Scene data_ov029_02258bd0 = {&data_ov029_02258b9c, 0, &data_ov029_02258b94, &data_ov029_02258b8c, -1, -1};

u32 data_ov029_02258b84[2] = {0x100d0, 0x100c2};

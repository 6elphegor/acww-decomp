// mwcc-version: 1.2/base
#include "types.h"

// ov037: map scene tables (a scene record, its entry list, the id grid, the static map objects).
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

struct Unk_ov037_Entry {  // one list of the scene: kind 2 = ids (u32), 1 and 0 = 20-byte records
    u8 kind;
    u8 count;
    u16 pad;
    void *list;
};

struct Unk_ov037_Head {
    u32 count;
    Unk_ov037_Entry *entries;
};

struct Unk_ov037_Grid {  // width x height ids
    u32 *ids;
    u8 width;
    u8 height;
    u16 pad;
};

struct Unk_ov037_Objs {
    Unk_020b4f8c *objs;
    u32 count;
};

struct Unk_ov037_Rec {
    u32 w[5];
};

struct Unk_ov037_Scene {  // 24 bytes; main's table sSceneInfoTable points to it
    Unk_ov037_Head *head;
    s32 isOutdoor;
    Unk_ov037_Grid *grid;
    Unk_ov037_Objs *objs;
    s32 infoOverlayA;
    s32 infoOverlayB;
};


// Declarations for data defined further down (definition order sets the data layout)
extern Unk_ov037_Entry data_ov037_02258aac[1];
extern Unk_020b4f8c data_ov037_02258b24[3];
extern u32 data_ov037_02258aa0[1];
extern Unk_ov037_Grid data_ov037_02258aa4;
extern Unk_ov037_Head data_ov037_02258ab4;
extern Unk_ov037_Objs data_ov037_02258abc;
extern Unk_ov037_Scene data_ov037_02258ad4;
extern u32 data_ov037_02258ac4[4];

Unk_ov037_Entry data_ov037_02258aac[1] = {
    {2, 4, 0, data_ov037_02258ac4},
};

Unk_020b4f8c data_ov037_02258b24[3] = {
    Unk_020b4f8c(0x3e, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    Unk_020b4f8c(0x3f, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 3, 2, 0, 0),
    Unk_020b4f8c(0x3d, Unk_020b4f8c_Vec(0, 0, 0), 0x800000, 0, 2, 2, 0, 0),
};

u32 data_ov037_02258aa0[1] = {0x1015};

Unk_ov037_Grid data_ov037_02258aa4 = {data_ov037_02258aa0, 1, 1};

Unk_ov037_Head data_ov037_02258ab4 = {1, data_ov037_02258aac};

Unk_ov037_Objs data_ov037_02258abc = {data_ov037_02258b24, 3};

Unk_ov037_Scene data_ov037_02258ad4 = {&data_ov037_02258ab4, 0, &data_ov037_02258aa4, &data_ov037_02258abc, -1, -1};

u32 data_ov037_02258ac4[4] = {0xc9, 0xca, 0xb, 0xc7};

#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------- Unk_ov004_0224e3f8
struct Unk_0204e858_Grid;

struct Unk_ov004_0222a374_Loc {
    u16 a;
    u16 b;
};

struct Unk_ov004_0222a374_Pair {
    s32 a, b;
    Unk_ov004_0222a374_Pair(s32 x, s32 y) {
        a = x;
        b = y;
    }
};

struct Unk_ov004_SceneEntry {
    void *(*factory)();
    u16 a;
    u16 b;
};

class Unk_ov004_0224e3f8 : public GameProc {
public:
    Unk_ov004_0224e3f8();
    virtual BOOL vfunc_00();
    virtual ~Unk_ov004_0224e3f8();
};

extern "C" {
extern Unk_0204e858_Grid *gSceneBlockMap;
void *PlayerData_Get(u32 i);
u16 *_ZN10PlayerData6getBedEv(void *self);
s32 Item_IsFurniture(Unk_ov004_0222a374_Loc *l);
s32 Item_GetFurnitureIndex(u16 *p);
void Item_SetFurnitureDirection(Unk_ov004_0222a374_Loc *l, s32 v);
s32 Ftr_GetUnk05(Unk_ov004_0222a374_Loc *l);
void BlockMap_SetItemAtUnit(Unk_0204e858_Grid *g, Unk_ov004_0222a374_Loc *l, s32 x, s32 y, s32 z);
}

extern "C" Unk_ov004_0224e3f8 *func_ov004_0222a4e8();
extern "C" void func_ov004_0222a374();

extern "C" Unk_ov004_SceneEntry data_ov004_0224e3e8 = { (void *(*)())func_ov004_0222a4e8, 0x2b, 0x31 };

extern "C" Unk_ov004_0224e3f8 *func_ov004_0222a4e8() {
    return new Unk_ov004_0224e3f8;
}

Unk_ov004_0224e3f8::Unk_ov004_0224e3f8() {}

Unk_ov004_0224e3f8::~Unk_ov004_0224e3f8() {}

BOOL Unk_ov004_0224e3f8::vfunc_00() {
    func_ov004_0222a374();
    return TRUE;
}

extern "C" {
void func_ov004_0222a374() {
    static Unk_ov004_0222a374_Pair tbl[4] = { Unk_ov004_0222a374_Pair(6, 9), Unk_ov004_0222a374_Pair(9, 9), Unk_ov004_0222a374_Pair(6, 12), Unk_ov004_0222a374_Pair(9, 12) };
    Unk_0204e858_Grid *g = gSceneBlockMap;
    if (g != 0) {
        s32 i;
        BOOL z1 = FALSE, z0 = FALSE, z2 = FALSE;
        for (i = 0; i < 4; i++) {
            void *p = PlayerData_Get(i);
            if (p != 0) {
                Unk_ov004_0222a374_Pair &e = tbl[i & 3];
                s32 x = e.a;
                s32 y = e.b;
                Unk_ov004_0222a374_Loc l;
                l.a = *_ZN10PlayerData6getBedEv(p);
                BOOL r;
                if (Item_IsFurniture(&l) != 0) {
                    l.b = 0xfff1;
                    s32 t = Item_GetFurnitureIndex(&l.a);
                    r = (t == Item_GetFurnitureIndex(&l.b)) ? 1 : z1;
                } else {
                    if (l.a == 0xfff1) {
                        r = TRUE;
                    } else {
                        r = z0;
                    }
                }
                if (r == 0) {
                    Item_SetFurnitureDirection(&l, 3);
                    if (x < 8) {
                        if (Ftr_GetUnk05(&l) == 2) {
                            x--;
                        }
                    }
                    BlockMap_SetItemAtUnit(g, &l, x, y, z2);
                }
            }
        }
    }
}
}

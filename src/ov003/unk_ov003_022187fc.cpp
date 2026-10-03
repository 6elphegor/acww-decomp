// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// TU21 of ov003: house models, scene 0x022324ec (0x022187fc-0x02219294)
// mwcc samples optimiser pragmas at the end of the file, so this applies to the whole TU
// (func_ov003_02218c60 needs it; all other functions of the TU still match with it)
#pragma opt_loop_invariants off

struct Unk_ov003_02218e2c_V3 {
    s32 x, y, z;
};

struct Unk_ov003_02218bc8_Ent {
    u8 pad_00[0x228];
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ s32 unk_22c;
};

struct Unk_ov003_02218c60_Grid {
    /* 0x00 */ u8 *cells;
    /* 0x04 */ u32 w;
    /* 0x08 */ u32 h;
};

// ---- the three statically constructed objects (constructors/destructors are this TU's own) ----
// 4-byte object at 0x02235818
class Unk_ov003_02218860 {
public:
    Unk_ov003_02218860();
    ~Unk_ov003_02218860();
    s32 unk_00;
};

// 0x20-byte object at 0x02235840
class Unk_ov003_02218968 {
public:
    Unk_ov003_02218968();
    ~Unk_ov003_02218968();
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04[5];
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c;
};

// 0x28-byte object at 0x02235860
class Unk_ov003_02218adc {
public:
    Unk_ov003_02218adc();
    ~Unk_ov003_02218adc();
    /* 0x00 */ u32 unk_00[4];
    /* 0x10 */ u32 unk_10[4];
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
};

// other modules' methods are reached through their real mangled symbols (object first)
#define Actor_spawn _ZN5Actor5spawnEPvS0_S0_S0_S0_
#define MapBlockAcre_getAcreId _ZN12MapBlockAcre9getAcreIdEv
#define TownMap_placeStructure _ZN7TownMap14placeStructureEPtiih
#define CommManager_isSlotActive _ZN11CommManager12isSlotActiveEi
#define func_020b23a4 _ZN12Unk_020b23a013func_020b23a4Ev
#define func_020b2a0c _ZN12Unk_020b28ac13func_020b2a0cEPiS0_S0_j
#define func_020b2b28 _ZN12Unk_020b28ac13func_020b2b28Ev
#define BuildingActor_getItemId _ZN13BuildingActor9getItemIdEv
#define BuildingActor_tryOpenDoorForExit _ZN13BuildingActor18tryOpenDoorForExitEv
#define BuildingActor_openDoorForExit _ZN13BuildingActor15openDoorForExitEv
#define BuildingActor_tryOpenDoorForEntry _ZN13BuildingActor19tryOpenDoorForEntryEv
#define BuildingActor_openDoorForEntry _ZN13BuildingActor16openDoorForEntryEv

extern "C" {
extern void *data_021c6204;
extern u8 data_021ecc7c[];
extern void *gCurrentHeap;
extern Unk_ov003_02218bc8_Ent *data_ov003_022358b0[0x20];
extern Unk_ov003_02218c60_Grid *gSceneBlockMap;
extern u8 data_020d0a7c[];
extern u32 *gActorDefaultParent;
extern u32 *gCommManager;
}

class Unk_ov003_022324ec : public GameProc {
public:
    Unk_ov003_022324ec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_ov003_022324ec();
};

extern "C" {
s32 func_020b0f0c();
s32 func_020b0f30();
s32 MapBlockAcre_getAcreId(void *c);
void MapBlock_SetItem(void *c, u16 *p, s32 a, s32 b, s32 d);
void *MapBlock_GetItemPtr(void *c, u32 i, u32 j, s32 k);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 x, s32 y, u32 i, u32 j);
s32 func_020b5184();
s32 CommManager_isSlotActive(void *self, u32 v);
s32 TownBlockMap_Get();
s32 Town_FindTownHallFront(s32 k, s32 *a, s32 *b, s32 *c);
void *func_020b23a4(void *p);
s32 func_020b2514(void *p, s32 i);
void *File_LoadAllocF(void *heap, s32 a, const char *fmt, ...);
void *NNS_G3dGetTex(...);
s32 Gfx3d_LoadTex(void *p, s32 a);
void *Gfx3d_CopyTex(void *p, void *heap);
void Mem_Free(void *p);
s32 Gfx3d_LoadTexAndPltt(void *p, s32 a);
void *File_LoadAlloc(const char *s, void *heap, s32 a, s32 b);
void *func_021065dc();
void *func_021065f8(void *p, s32 a);
u16 *BuildingActor_getItemId(void *p);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 func_020b50bc();
s32 BuildingActor_tryOpenDoorForExit(void *p);
s32 BuildingActor_tryOpenDoorForEntry(void *p);
s32 BuildingActor_openDoorForExit(void *p);
s32 BuildingActor_openDoorForEntry(void *p);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void func_0205c108(s32 a);
void func_0205c124(s32 a, s32 b);
void *StrBSize_Get(s32 p);
s32 func_020b2b28(void *self);
s32 func_020b2a0c(void *self, s32 *a, s32 *b, s32 *c, u32 i);
void func_0203006c(s32 x, s32 y, u32 v);
void FieldPos_FromUnitCenter(Unk_ov003_02218e2c_V3 *v, s32 x, s32 y);
void func_020b16bc(void *o, void *p);
s32 func_020b16ac(void *o);
s32 func_020b16b4(void *o);
void func_020b16b8(void *o);
s32 Actor_spawn(s32 self, void *b, void *c, void *d, void *e);
void TownMap_placeStructure(void *self, u16 *p, s32 x, s32 y, u8 z);
void func_020b2774(s32 a);
void func_020b15d4();
void func_020b278c(s32 a);
void GameProc_CreateChild(s32 a, u32 *b, s32 c, s32 d);
void Gfx3d_LoadPltt(void *, s32);
extern u32 data_021ed1a4[];
s32 TownState_FindEvent(void *, s32);
s32 func_02101340(char *, const char *, void *);
void func_020639e8(char *, const char *, ...);
void *func_021012bc(const char *);
void *NNS_G3dGetMdlSet(void *);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void func_02101310(char *);
}

extern "C" {
void func_ov003_02218aec();
void func_ov003_02218b04();
void func_ov003_02218dc0(s32 a);
void func_ov003_02218dc8(s32 a);
void func_ov003_02219160(s32 a);
void func_ov003_02219164(s32 a);
void *func_ov003_02218b40(u32 id);
void *func_ov003_02218c60(s32 a);
s32 func_ov003_02218dd8(s32 a, u16 *b, s32 x, s32 y);
s32 func_ov003_02218e2c(void *self, u16 *pv, s32 x, s32 y, u8 flag);
s32 func_ov003_02218eec(void *self);
s32 func_ov003_022189b8(Unk_ov003_02218adc *self);
void func_ov003_02218998(Unk_ov003_02218adc *o);
void func_ov003_0221894c(Unk_ov003_02218968 *o);
void func_ov003_02218884(void *p);
s32 func_ov003_02218da8();
s32 func_ov003_0221888c(Unk_ov003_02218968 *r);
s32 func_ov003_02218800(void **out);
void func_ov003_022187fc(void *p);
}

// scene registration entry {factory, 0xc4, 0x1f}
struct Unk_ov003_022324dc_Entry {
    void *factory;
    u16 a, b;
};

extern "C" void *func_ov003_0221927c();

// the TU's bss objects; the three static objects have constructors and destructors (see __sinit)
extern "C" {
Unk_ov003_02218860 data_ov003_02235818;
Unk_ov003_02218adc data_ov003_02235860;
Unk_ov003_02218968 data_ov003_02235840;
Unk_ov003_022324dc_Entry data_ov003_022324dc = {(void *)func_ov003_0221927c, 0xc4, 0x1f};
u8 data_ov003_02235810;
u16 data_ov003_02235814;
char data_ov003_02235888[0x28];
Unk_ov003_02218bc8_Ent *data_ov003_022358b0[0x20];
const char data_ov003_0222f018[3] = "sw";
}

// ---------------------------------------------------------------- functions

extern "C" void *func_ov003_0221927c() {
    return new Unk_ov003_022324ec;
}

Unk_ov003_022324ec::Unk_ov003_022324ec() {
    func_ov003_02218b04();
}

Unk_ov003_022324ec::~Unk_ov003_022324ec() {}

BOOL Unk_ov003_022324ec::vfunc_00() {
    func_ov003_02218b04();
    func_020b15d4();
    func_020b278c((s32)this);
    func_ov003_02218dc8((s32)this);
    func_ov003_02218800((void **)&data_ov003_02235818);
    func_ov003_022189b8(&data_ov003_02235860);
    func_ov003_0221888c(&data_ov003_02235840);
    func_ov003_02219164((s32)this);
    func_ov003_02219160((s32)this);
    func_ov003_02218eec(this);
    GameProc_CreateChild(0xf, gActorDefaultParent, 0, 0);
    return TRUE;
}

BOOL Unk_ov003_022324ec::onExecute() { return TRUE; }

BOOL Unk_ov003_022324ec::onDraw() { return TRUE; }

BOOL Unk_ov003_022324ec::vfunc_0c() {
    func_ov003_02218aec();
    func_020b2774((s32)this);
    func_ov003_02218998(&data_ov003_02235860);
    func_ov003_02218884(&data_ov003_02235840);
    func_ov003_022187fc(&data_ov003_02235818);
    func_ov003_02218dc0((s32)this);
    return TRUE;
}

extern "C" {

void func_ov003_02219164(s32 a) {}

void func_ov003_02219160(s32 a) {}

s32 func_ov003_02218eec(void *self) {
    BOOL go;
    u32 gw, gh;
    u32 ii, jj;
    s32 count;
    s32 r24;
    u8 *cell;
    BOOL a;
    u16 buf[3];
    u32 obj[3];
    s32 ax, ay;
    s32 bx, by;
    struct { s32 cx; u32 pad[3]; } tl;
    u32 x, y;
    u16 *p;
    Unk_ov003_02218c60_Grid *g;
    data_ov003_02235814 = 0;
    g = gSceneBlockMap;
    gw = g->w;
    gh = g->h;
    a = TRUE;
    if (func_020b0f0c() == 0) {
        if (func_020b0f30() == 0) {
            a = FALSE;
        }
    }
    count = 0;
    for (y = 0; y < gh; y++) {
        for (x = 0; x < gw; x++) {
            if (x < g->w && y < g->h && g->cells != 0) {
                cell = g->cells + (x + y * g->w) * 0x28;
            } else {
                cell = 0;
            }
            s32 t = MapBlockAcre_getAcreId(cell);
            switch (t) {
            case 0x1a:
            case 0x1b:
            case 0x1c:
                buf[1] = 0x500b;
                MapBlock_SetItem(cell, &buf[1], 7, 0, 0);
            }
            for (jj = 0; jj < 0x10; jj++) {
                for (ii = 0; ii < 0x10; ii++) {
                    p = (u16 *)MapBlock_GetItemPtr(cell, ii, jj, 0);
                    if (p != 0) {
                        BOOL f = FALSE;
                        if (*p >= 0x5000 && *p <= 0x5021) {
                            f = TRUE;
                        }
                        if (f) {
                            u32 idx;
                            FieldUnit_FromBlockUnit(&ax, &ay, x, y, ii, jj);
                            BOOL f2 = FALSE;
                            u32 v = *p;
                            if (v >= 0x5000 && v <= 0x5021) {
                                f2 = TRUE;
                            }
                            if (f2) {
                                idx = v & 0xfff;
                            } else {
                                idx = -1;
                            }
                            u8 *q;
                            if (idx < 0x22) {
                                q = data_020d0a7c + idx * 10;
                            } else {
                                q = data_020d0a7c;
                            }
                            func_020b16bc(obj, q);
                            r24 = func_020b16ac(obj);
                            if (a == 0 || r24 != 2) {
                                go = 1;
                            } else {
                                go = 0;
                            }
                            BOOL m;
                            if (Item_IsFurniture(p) != 0) {
                                buf[2] = 0x501e;
                                s32 k = Item_GetFurnitureIndex(p);
                                m = (k == Item_GetFurnitureIndex(&buf[2])) ? 1 : 0;
                            } else {
                                m = (*p == 0x501e) ? 1 : 0;
                            }
                            if (m) {
                                if (func_020b50bc() == 0) {
                                    go = 0;
                                }
                            }
                            if (go) {
                                if (func_ov003_02218e2c(self, p, ax, ay, 1)) {
                                    if (r24 == 1) {
                                        data_ov003_02235814 = data_ov003_02235814 + 1;
                                    }
                                    count++;
                                }
                            }
                            func_020b16b8(obj);
                        }
                    }
                }
            }
        }
    }
    if (func_020b5184()) {
        if (!CommManager_isSlotActive(gCommManager, gCommManager[0x64 / 4])) {
            s32 k = TownBlockMap_Get();
            if (func_020b0f0c() != 0 || func_020b0f30() != 0) {
                if (Town_FindTownHallFront(k, &tl.cx, &bx, &by)) {
                    buf[0] = 0x501b;
                    func_ov003_02218e2c(self, &buf[0], bx, by + 1, 0);
                }
            }
        }
    }
    return count;
}

s32 func_ov003_02218e2c(void *self, u16 *pv, s32 x, s32 y, u8 flag) {
    Unk_ov003_02218e2c_V3 vec;
    u32 obj[3];
    u32 idx;
    vec.x = 0;
    vec.y = 0;
    vec.z = 0;
    FieldPos_FromUnitCenter(&vec, x, y);
    BOOL f = FALSE;
    u32 v = *pv;
    if (v >= 0x5000 && v <= 0x5021) {
        f = TRUE;
    }
    if (f) {
        idx = v & 0xfff;
    } else {
        idx = -1;
    }
    u8 *q;
    if (idx < 0x22) {
        q = data_020d0a7c + idx * 10;
    } else {
        q = data_020d0a7c;
    }
    func_020b16bc(obj, q);
    if (Actor_spawn(func_020b16b4(obj), (void *)*pv, &vec, 0, 0) != 0) {
        if (flag != 0) {
            TownMap_placeStructure(gSceneBlockMap, pv, x, y, 0);
            func_ov003_02218dd8((s32)self, pv, x, y);
        }
        func_020b16b8(obj);
        return 1;
    }
    func_020b16b8(obj);
    return 0;
}

s32 func_ov003_02218dd8(s32 a, u16 *b, s32 x, s32 y) {
    s32 va, vb, vc;
    void *p = StrBSize_Get((s32)b);
    if (p != 0) {
        u32 n = func_020b2b28(p);
        u32 i;
        for (i = 0; i < n; i++) {
            if (func_020b2a0c(p, &vc, &va, &vb, i)) {
                func_0203006c(x + va, y + vb, (u8)vc);
            }
        }
    }
    return 1;
}

void func_ov003_02218dc8(s32 a) { func_0205c124(0x1f000, 0); }

void func_ov003_02218dc0(s32 a) { func_0205c108(a); }

s32 func_ov003_02218da8() { return ((s8 *)data_ov003_0222f018)[func_020b50bc()]; }

u32 func_ov003_02218d9c() { return data_ov003_02235814; }

void *func_ov003_02218d94() { return &data_ov003_02235818; }

void *func_ov003_02218d8c() { return &data_ov003_02235860; }

void *func_ov003_02218d84() { return &data_ov003_02235840; }

u32 func_ov003_02218d78() { return data_ov003_02235810; }

void func_ov003_02218d6c(u32 v) { data_ov003_02235810 = v; }

s32 func_ov003_02218d50(s32 a) {
    void *r = func_ov003_02218c60(a);
    if (r != 0) {
        return BuildingActor_openDoorForEntry(r);
    }
    return 0;
}

s32 func_ov003_02218d34(s32 a) {
    void *r = func_ov003_02218c60(a);
    if (r != 0) {
        return BuildingActor_openDoorForExit(r);
    }
    return 0;
}

s32 func_ov003_02218d0c(s32 a) {
    void *r = func_ov003_02218b40((u16)(a + 0x5001));
    if (r != 0) {
        return BuildingActor_tryOpenDoorForEntry(r);
    }
    return 0;
}

s32 func_ov003_02218ce4(s32 a) {
    void *r = func_ov003_02218b40((u16)(a + 0x5001));
    if (r != 0) {
        return BuildingActor_tryOpenDoorForExit(r);
    }
    return 0;
}

void *func_ov003_02218c60(s32 a) {
    Unk_ov003_02218c60_Grid *g = gSceneBlockMap;
    s32 xy[2];
    if (g != 0) {
        FieldPos_ToUnit(&xy[0], &xy[1], a);
        for (s32 y = xy[1]; y >= xy[1] - 5; y--) {
            for (s32 x = xy[0] - 3; x <= xy[0] + 3; x++) {
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                u16 *cell = BlockMap_GetItemPtr(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
                if (cell != 0) {
                    BOOL f = FALSE;
                    u16 v = *cell;
                    if (v >= 0x5000 && v <= 0x5021) {
                        f = TRUE;
                    }
                    if (f) {
                        void *r = func_ov003_02218b40(v);
                        if (r != 0) {
                            return r;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_ov003_02218c34(void *p) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        if (data_ov003_022358b0[i] == 0) {
            data_ov003_022358b0[i] = (Unk_ov003_02218bc8_Ent *)p;
            return 1;
        }
    }
    return 0;
}

s32 func_ov003_02218b1c(void *p);

s32 func_ov003_02218c0c(void *p) {
    s32 i = func_ov003_02218b1c(p);
    s32 m = -1;
    if (i != m) {
        *(u32 *)&data_ov003_022358b0[i] = 0;
        return 1;
    }
    return 0;
}

void *func_ov003_02218bc8(s32 a, s32 b) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        Unk_ov003_02218bc8_Ent *e = data_ov003_022358b0[i];
        if (e != 0 && e->unk_228 == a && e->unk_22c == b) {
            return e;
        }
    }
    return 0;
}

void *func_ov003_02218bb0(s32 i) {
    if (i >= 0 && (u32)i < 0x20) {
        return data_ov003_022358b0[i];
    }
    return 0;
}

void *func_ov003_02218b40(u32 id) {
    s32 i;
    s32 z0 = 0;
    s32 z1 = 0;
    for (i = 0; (u32)i < 0x20; i++) {
        Unk_ov003_02218bc8_Ent *e = data_ov003_022358b0[i];
        if (e != 0) {
            u16 *r = BuildingActor_getItemId(e);
            BOOL ok;
            if (Item_IsFurniture(r) != 0) {
                u16 tmp;
                tmp = id;
                s32 a = Item_GetFurnitureIndex(r);
                ok = (a == Item_GetFurnitureIndex(&tmp)) ? 1 : z0;
            } else {
                ok = (*r == id) ? 1 : z1;
            }
            if (ok != 0) {
                return e;
            }
        }
    }
    return 0;
}

s32 func_ov003_02218b1c(void *p) {
    s32 i;
    for (i = 0; (u32)i < 0x20; i++) {
        if (p == data_ov003_022358b0[i]) {
            return i;
        }
    }
    return -1;
}

void func_ov003_02218b04() {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 0x20; i++) {
        *(u32 *)&data_ov003_022358b0[i] = z;
    }
}

void func_ov003_02218aec() {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 0x20; i++) {
        *(u32 *)&data_ov003_022358b0[i] = z;
    }
}

}

Unk_ov003_02218adc::Unk_ov003_02218adc() {
    func_ov003_02218998(this);
}

Unk_ov003_02218adc::~Unk_ov003_02218adc() {}

extern "C" {

s32 func_ov003_022189b8(Unk_ov003_02218adc *self) {
    void *str;
    void *heap = data_021c6204;
    u8 i = 0;
    s32 m3 = -4;
    s32 zb = 0;
    s32 za = 0;
    do {
        s32 v = func_020b2514(func_020b23a4(data_021ecc7c), i);
        s32 c = (s8)(v / 5 + 0x41);
        s32 rem = v % 5;
                void *h2 = gCurrentHeap;
        s32 a = func_ov003_02218da8();
        str = File_LoadAllocF(h2, m3, "/str/npcHsTex/%c/house_%c%d%c.nsbtx", c, c, rem, a);
        u32 off = i << 2;
        u32 *e = &self->unk_00[i];
        self->unk_00[i] = (u32)NNS_G3dGetTex(str);
        if (Gfx3d_LoadTex((void *)self->unk_00[i], za)) {
            *e = (u32)Gfx3d_CopyTex((void *)*e, data_021c6204);
        }
        Mem_Free(str);
        str = File_LoadAllocF(gCurrentHeap, m3, "/str/npcHsTex/%c/light_%c%d.nsbtx", c, c, rem);
        e[4] = (u32)NNS_G3dGetTex(str);
        if (Gfx3d_LoadTexAndPltt((void *)e[4], zb)) {
            e[4] = (u32)Gfx3d_CopyTex((void *)e[4], heap);
        }
        Mem_Free(str);
        i = i + 1;
    } while (i < 4);
    File_LoadAlloc("/str/obj_house_i.nsbca", heap, 4, 0);
    self->unk_20 = (u32)func_021065f8(func_021065dc(), 0);
    File_LoadAlloc("/str/obj_house_o.nsbca", heap, 4, 0);
    self->unk_24 = (u32)func_021065f8(func_021065dc(), 0);
    return 1;
}

void func_ov003_02218998(Unk_ov003_02218adc *o) {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 4; i++) {
        u32 *e = &o->unk_00[i];
        o->unk_00[i] = z;
        e[4] = z;
    }
    o->unk_24 = z;
    o->unk_20 = o->unk_24;
}

s32 func_ov003_0221898c(Unk_ov003_02218adc *o, u32 i) { return o->unk_00[i & 3]; }

s32 func_ov003_02218980(Unk_ov003_02218adc *o, u32 i) { return o->unk_10[i & 3]; }

s32 func_ov003_0221897c(Unk_ov003_02218adc *o) { return o->unk_20; }

s32 func_ov003_02218978(Unk_ov003_02218adc *o) { return o->unk_24; }

}

Unk_ov003_02218968::Unk_ov003_02218968() {
    func_ov003_0221894c(this);
}

Unk_ov003_02218968::~Unk_ov003_02218968() {}

extern "C" {

void func_ov003_0221894c(Unk_ov003_02218968 *o) {
    u32 i;
    s32 z = 0;
    for (i = 0; i < 5; i++) {
        o->unk_04[i] = z;
    }
    o->unk_00 = z;
    o->unk_18 = z;
    o->unk_1c = z;
}

s32 func_ov003_0221888c(Unk_ov003_02218968 *r) {
    u32 buf[0x6c / 4];
    u32 i;
    BOOL z;
    func_ov003_0221894c(r);
    s32 c = TownState_FindEvent(data_021ed1a4, 0x11);
    z = FALSE;
    if (c == ~z) {
        return z;
    }
    void *t = File_LoadAlloc("/str/npcHsX.arc", data_021c6204, 4, z);
    if (func_02101340((char *)buf, "STR", t) != 0) {
        for (i = 0; i < 5; i++) {
            func_020639e8(data_ov003_02235888, "STR:a/obj_x_house%d.nsbmd", i);
            u8 *p = (u8 *)NNS_G3dGetMdlSet(func_021012bc(data_ov003_02235888));
            r->unk_04[i] = (s32)(p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc));
        }
        r->unk_00 = (s32)NNS_G3dGetTex(func_021012bc("STR:a/obj_x_house0.nsbtx"));
        Gfx3d_LoadTexAndPltt((void *)r->unk_00, 0);
        r->unk_18 = (s32)func_021066ac(func_02106690(func_021012bc("STR:a/obj_x_deco.nsbtp")), 0);
        r->unk_1c = 1;
        func_02101310((char *)buf);
    }
    return 1;
}

void func_ov003_02218884(void *p) {
    func_ov003_0221894c((Unk_ov003_02218968 *)p);
}

s32 func_ov003_02218880(s32 *p) {
    return *p;
}

s32 func_ov003_02218870(Unk_ov003_02218968 *r, u32 idx) {
    if (idx < 5) {
        return r->unk_04[idx];
    }
    return 0;
}

s32 func_ov003_0221886c(Unk_ov003_02218968 *r) {
    return r->unk_18;
}

u8 func_ov003_02218868(Unk_ov003_02218968 *r) {
    return r->unk_1c;
}

}

Unk_ov003_02218860::Unk_ov003_02218860() {
    unk_00 = 0;
}

Unk_ov003_02218860::~Unk_ov003_02218860() {}

extern "C" {

s32 func_ov003_02218800(void **out) {
    void *r4 = gCurrentHeap;
    s32 r3 = func_ov003_02218da8();
    void *t = File_LoadAllocF(r4, -4, "/str/house_pl/house_pl_%c.nsbtx", r3);
    if (t != 0) {
        *out = NNS_G3dGetTex();
        Gfx3d_LoadPltt(*out, 0);
        *out = Gfx3d_CopyTex(*out, data_021c6204);
        Mem_Free(t);
        return 1;
    }
    return 0;
}

void func_ov003_022187fc(void *p) {
}

}

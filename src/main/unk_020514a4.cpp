#include "types.h"

extern "C" {
void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);
}

// 16 x u16 bit matrix
class Unk_02052978 {
public:
    u16 unk_00[16];
    Unk_02052978();
    ~Unk_02052978();
    void func_02052978(u32 x, u32 y, u32 set);
    BOOL func_020529a4(u32 x, u32 y);
    void func_020529bc();
};

// small 4-slot table
struct Unk_0205276c_Slot {
    u8 lo : 4;
    u8 hi : 4;
};

class Unk_0205276c {
public:
    Unk_0205276c_Slot unk_00[4];
    u8 unk_04[1];
    u8 unk_05[2];
    Unk_0205276c();
    ~Unk_0205276c();
    BOOL func_0205276c(u32 x, u32 y, u32 val);
    BOOL func_02052860(u32 x, u32 y);
    s32 func_020528dc(u32 x, u32 y);
    void func_02052934();
};

class Unk_02052620 {
public:
    Unk_02052978 unk_00[2];
    Unk_0205276c unk_40;
    Unk_02052620();
    ~Unk_02052620();
    BOOL func_02052620(u32 a, u32 b);
    BOOL func_0205262c(u32 a, u32 b, u32 c);
    s32 func_0205263c(u32 a, u32 b);
    void func_020526c4(u32 x, u32 y, u32 idx, u8 v);
    BOOL func_020526e0(u32 x, u32 y, u32 idx);
    void func_020526ec();
};

struct Unk_02052ab4_Vec {
    s32 x, y, z;
};

class Unk_02052aac {
public:
    u8 unk_00;
    s32 unk_04, unk_08, unk_0c;
    u8 unk_10;
    Unk_02052aac();
    ~Unk_02052aac();
    BOOL func_02052aac();
    BOOL func_02052ab4(u32 tag, Unk_02052ab4_Vec *p);
    void func_02052ad0();
};

class Unk_02052a10 {
public:
    Unk_02052aac unk_00[4];
    ~Unk_02052a10();
    BOOL func_020529e4(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL func_02052a10(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
    BOOL func_02052a70(s32 idx);
    BOOL func_02052a8c(s32 idx, u32 tag, Unk_02052ab4_Vec *p);
};

struct Unk_02051d24_Obj {
    virtual s32 v00(); virtual s32 v04(); virtual s32 v08(); virtual s32 v0c();
    virtual s32 v10(); virtual s32 v14(); virtual s32 v18(); virtual s32 v1c();
    virtual s32 v20(); virtual s32 v24(); virtual s32 v28(); virtual s32 v2c();
    virtual s32 v30(); virtual s32 v34(); virtual s32 v38(); virtual s32 v3c();
    virtual s32 v40(); virtual s32 v44(); virtual s32 v48(); virtual s32 v4c();
    virtual s32 v50(); virtual s32 v54(); virtual s32 v58(); virtual s32 v5c();
    virtual s32 v60(); virtual s32 v64(); virtual s32 v68(); virtual s32 v6c();
    virtual s32 vfunc_70(s32 a, u32 b);
    virtual s32 vfunc_74(u32 a);
    virtual u8 vfunc_78();
};

struct Unk_02052134_W { u32 a:1, b:4, c:4, d:1, e:1, f:16; };
struct Unk_020520a8_W { u32 a:4, b:4, c:16; };
struct Unk_020520d0_W { u32 a:4, b:4, h:4, i:1, j:1, k:1, c:16; };
struct Unk_0205218c_B { u8 a:6, b:1, c:1; };
struct Unk_02051fcc_W { u16 a:6, b:1, c:4, d:4; };
struct Unk_020521fc_W { u32 a:6, b:1, c:1, d:4, e:4, f:5, g:8, n:1, o:1, p:1; };
struct Unk_0205242c_Item {
    s16 a, b;
    Unk_0205242c_Item() { a = 0; b = 0; }
    Unk_0205242c_Item(s16 x, s16 y) { a = x; b = y; }
};
struct Unk_0205242c_Ent { Unk_0205242c_Item *rows[4]; u8 count; };
struct Unk_0205242c_Self { s32 a; s32 b; };
struct Unk_02051f68_V { s32 x, y, z; };
struct Unk_02051a50_Bits {
    u32 x : 4;
    u32 y : 4;
    u32 g : 4;
    u32 d : 1;
    u32 e : 1;
    u32 f : 1;
    u32 item : 16;
    u32 pad : 1;
};

extern u8 gFieldSceneKind;
extern void *gCommManager;
extern void *gSceneBlockMap;
extern u8 gSaveHouse[];
extern const Unk_0205242c_Ent data_020ca650;
extern const Unk_0205242c_Ent data_020ca63c;
extern const Unk_0205242c_Ent data_020ca664;

inline BOOL IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" {
BOOL _ZN8FtrActor11findOwnTileEPiS0_ii(s32 a, s32 *x, s32 *y, s32 z, s32 w);
s32 FtrActor_GetLayer(s32 a);
void *FtrActorGrid_GetInstance();
Unk_02051d24_Obj *_ZN12FtrActorGrid8getActorEiii(void *self, s32 a, s32 b, s32 c);
void FtrActor_GetFtrIndex(void *p);
s32 _ZN8FtrActor9isPreviewEv(void *p);
s32 FtrActor_PredIsStereo(void *p);
s32 _ZN9FtrSwitch4isOnEv(void *p);
s32 FtrMgr_CountSwitchedOn(void (*f)());
void _ZN8FtrActor8isGyroidEv();
void *FtrMgr_SwitchOffRandom(void (*f)(), s32 a);

s32 _ZN11CommManager8isOnlineEv(void *p);
s32 _ZN11CommManager7isMyAidEj(void *p, s32 v);
void _ZN11CommManager11beginRecordEv(void *p);
void _ZN11CommManager11writeRecordEPhj(void *p, void *d, s32 n);
void _ZN11CommManager9endRecordEjj(void *p, s32 a, s32 b);
u32 Scene_GetCurrent();
s32 NetArea_IsLocalOwner();
void *BlockMap_GetItemPtr(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void *BlockMap_GetForArea(s32 a);
s32 BlockMap_SetItemAtUnit(void *p, void *b, s32 c, s32 d, s32 e);
void FieldPos_ToUnit(s32 *a, s32 *b, s32 c);
s32 Item_GetFurnitureIndex(void *p);
s32 Item_GetFurnitureDirection(void *p);
s32 FtrInfo_GetUnk05(s32 a);
void _ZN9HouseData13func_02060244Ejj(void *p, s32 a, s32 b);
s32 _ZN9HouseData13func_0206052cEi(void *p, s32 a);
Unk_02052620 *_ZN9HouseRoom13func_0206086cEv();
void func_02060174(s32 a);
void func_020601a4(s32 a, u16 *p);
s32 SceneId_IsHouseRoom(u32 id);
s32 SceneId_GetHouseRoom(u32 id);
s32 SceneId_IsVillagerHouse(u32 id);
s32 SceneId_GetVillagerHouse(u32 id);
s32 SceneId_IsNookShop(u32 id);
s32 SceneId_GetNookShop(u32 id);

u32 func_02051518();
void func_02051524(s32 *p);
void func_020514a4(void *p);
void func_020515e0(s32 a, s32 b, s32 c, s32 d);
void func_0205170c(s32 a, s32 b, s32 c);
void func_020516e4(s32 a, s32 b);
void func_02051784(s32 a, s32 b, s32 c, u16 *d, u8 f);
void func_02051a50(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u16 *h, u8 i);
void func_02051844(s32 a, s32 b, s32 c, s32 d, s32 e, u16 *f, s32 g, u8 h);
s32 func_02051c10(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g);
s32 func_02051d24(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g);
s32 func_02051e00(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g);
s32 func_02051da4(s32 a, s32 b, u8 c, u8 d);
void func_02051ff8(u8 a, s32 b, s32 c, u8 d, u8 e);
s32 func_02052318(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, u8 i);
Unk_0205242c_Item *func_0205242c(Unk_0205242c_Self *p, u32 idx);
s32 func_0205248c(Unk_0205242c_Self *p);
void func_020524a4(Unk_0205242c_Self *p);
Unk_0205242c_Self *func_020524a8(Unk_0205242c_Self *p, u16 *q);
s32 func_020524dc(s32 a, s32 b, u32 c);
s32 func_02052504(s32 a, s32 b, s32 c, u32 d);
s32 func_02052554(s32 a, s32 b, s32 c, u8 d, u8 e);
Unk_02052620 *func_020525a8(u32 id);
BOOL func_02052660(u32 v);
BOOL func_02052648(u32 idx);
void func_0205267c();
}

extern "C" {
extern u8 data_020d0c08;
}

// ---- globals, in the order the original __sinit builds them ----
Unk_02052620 data_021c50e4[8];
Unk_02052620 data_021c4f34[6];
Unk_02052620 data_021c4e9c;
Unk_02052a10 data_021c4ee4;

extern Unk_0205242c_Item data_021c4e3c[2];
extern Unk_0205242c_Item data_021c4e44[2];
extern Unk_0205242c_Item data_021c4e54[2];
extern Unk_0205242c_Item data_021c4e4c[2];
extern Unk_0205242c_Item data_021c4e8c[4];
extern const Unk_0205242c_Ent *data_020dbcd8[3];
extern s32 data_021c4e38;

extern "C" {
long long func_01ffd028(void *a, void *b);
}

Unk_02052aac::Unk_02052aac() { func_02052ad0(); }

Unk_02052aac::~Unk_02052aac() {}

Unk_02052a10::~Unk_02052a10() {}

void Unk_02052aac::func_02052ad0() {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
}

BOOL Unk_02052aac::func_02052ab4(u32 tag, Unk_02052ab4_Vec *p) {
    unk_00 = 1;
    unk_04 = p->x;
    unk_08 = p->y;
    unk_0c = p->z;
    unk_10 = tag;
    return TRUE;
}

BOOL Unk_02052aac::func_02052aac() {
    unk_00 = 0;
    return TRUE;
}

BOOL Unk_02052a10::func_02052a8c(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) return unk_00[idx].func_02052ab4(tag, p);
    return TRUE;
}

BOOL Unk_02052a10::func_02052a70(s32 idx) {
    if (idx < 4) return unk_00[idx].func_02052aac();
    return FALSE;
}

BOOL Unk_02052a10::func_02052a10(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (idx < 4) {
        for (u32 i = 0; i < 4; i++) {
            Unk_02052aac *e = &unk_00[i];
            if ((s32)i != idx && e->unk_00 != 0 && tag == e->unk_10) {
                if (func_01ffd028(&e->unk_04, p) < 0x2400) return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02052a10::func_020529e4(s32 idx, u32 tag, Unk_02052ab4_Vec *p) {
    if (func_02052a10(idx, tag, p)) return func_02052a8c(idx, tag, p);
    return FALSE;
}

Unk_02052978::Unk_02052978() { func_020529bc(); }

Unk_02052978::~Unk_02052978() {}

void Unk_02052978::func_020529bc() {
    for (u32 i = 0; i < 16; i++) unk_00[i] = 0xffff;
}

BOOL Unk_02052978::func_020529a4(u32 x, u32 y) {
    x &= 0xf; y &= 0xf;
    s32 v = unk_00[y];
    if ((v >> x) & 1) return TRUE;
    return FALSE;
}

void Unk_02052978::func_02052978(u32 x, u32 y, u32 set) {
    s32 xx = x & 0xf;
    s32 yy = y & 0xf;
    if (set) unk_00[yy] |= 1 << xx;
    else unk_00[yy] &= ~(1 << xx);
}

Unk_0205276c::Unk_0205276c() { func_02052934(); }

Unk_0205276c::~Unk_0205276c() {}

void Unk_0205276c::func_02052934() {
    for (u32 i = 0; i < 4; i++) {
        unk_00[i].lo = 0;
        unk_00[i].hi = 0;
    }
    unk_04[0] = 0;
    for (u32 j = 0; j < 2; j++) unk_05[j] = 0;
}

s32 Unk_0205276c::func_020528dc(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                return (unk_05[i >> 1] >> ((i & 1) << 2)) & 0xf;
            }
        }
    }
    return -1;
}

BOOL Unk_0205276c::func_02052860(u32 x, u32 y) {
    for (u32 i = 0; i < 4; i++) {
        if ((unk_04[i >> 3] >> (i & 7)) & 1) {
            if (x == unk_00[i].lo && y == unk_00[i].hi) {
                unk_00[i].lo = 0;
                unk_00[i].hi = 0;
                unk_04[i >> 3] &= ~(1 << (i & 7));
                unk_05[i >> 1] &= ~(0xf << ((i & 1) << 2));
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL Unk_0205276c::func_0205276c(u32 x, u32 y, u32 val) {
    if (val >= 16) return FALSE;
    if (func_020528dc(x, y) == -1) {
        for (u32 i = 0; i < 4; i++) {
            if (!((unk_04[i >> 3] >> (i & 7)) & 1)) {
                u32 sh = (i & 1) << 2;
                unk_00[i].lo = (u8)x;
                unk_00[i].hi = (u8)y;
                unk_05[i >> 1] &= ~(0xf << sh);
                { u32 t = *(volatile u8 *)&unk_05[i >> 1]; t |= (val <<= sh); unk_05[i >> 1] = t; }
                unk_04[i >> 3] |= 1 << (i & 7);
                return TRUE;
            }
        }
    } else {
        for (u32 i = 0; i < 4; i++) {
            if ((unk_04[i >> 3] >> (i & 7)) & 1) {
                if (x == unk_00[i].lo && y == unk_00[i].hi) {
                    u32 sh = (i & 1) << 2;
                    unk_05[i >> 1] &= ~(0xf << sh);
                    { u32 t = *(volatile u8 *)&unk_05[i >> 1]; t |= (val <<= sh); unk_05[i >> 1] = t; }
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

Unk_02052620::Unk_02052620() { func_020526ec(); }

Unk_02052620::~Unk_02052620() {}

void Unk_02052620::func_020526ec() {
    for (u32 i = 0; i < 2; i++) unk_00[i].func_020529bc();
    unk_40.func_02052934();
}

BOOL Unk_02052620::func_020526e0(u32 x, u32 y, u32 idx) { return unk_00[idx].func_020529a4(x, y); }

void Unk_02052620::func_020526c4(u32 x, u32 y, u32 idx, u8 v) { unk_00[idx].func_02052978(x, y, v); }

extern "C" void func_0205267c() {
    for (u32 i = 0; i < 8; i++) data_021c50e4[i].func_020526ec();
    for (u32 i = 0; i < 6; i++) data_021c4f34[i].func_020526ec();
    data_021c4e9c.func_020526ec();
}

extern "C" BOOL func_02052660(u32 v) {
    Unk_02052620 *p = func_020525a8(v);
    if (p) {
        p->func_020526ec();
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02052648(u32 idx) { return func_02052660((u8)(data_020d0c08 + idx)); }

s32 Unk_02052620::func_0205263c(u32 a, u32 b) { return unk_40.func_020528dc(a, b); }

BOOL Unk_02052620::func_0205262c(u32 a, u32 b, u32 c) { return unk_40.func_0205276c(a, b, c); }

BOOL Unk_02052620::func_02052620(u32 a, u32 b) { return unk_40.func_02052860(a, b); }

// ---- 0x020514a4..0x020525a8 ----

extern "C" Unk_02052620 *func_020525a8(u32 id) {
    if (SceneId_IsHouseRoom(id)) {
        if (_ZN9HouseData13func_0206052cEi(gSaveHouse, SceneId_GetHouseRoom(id))) {
            return _ZN9HouseRoom13func_0206086cEv();
        }
    } else if (SceneId_IsVillagerHouse(id)) {
        return &data_021c50e4[SceneId_GetVillagerHouse(id)];
    } else if (SceneId_IsNookShop(id)) {
        return &data_021c4f34[SceneId_GetNookShop(id)];
    } else if (id == 10) {
        return &data_021c4e9c;
    }
    return 0;
}

extern "C" s32 func_02052580(s32 a, s32 b, s32 c, u32 d) {
    Unk_02052620 *r = func_020525a8(d);
    if (r) return r->func_020526e0(a, b, c);
    return 0;
}

extern "C" s32 func_02052554(s32 a, s32 b, s32 c, u8 d, u8 e) {
    Unk_02052620 *r = func_020525a8(e);
    if (r) {
        r->func_020526c4(a, b, c, d);
    }
}

extern "C" s32 func_0205252c(s32 a, s32 b, u32 c) {
    Unk_02052620 *r = func_020525a8(c);
    if (r) return r->func_0205263c(a, b);
    return -1;
}

extern "C" s32 func_02052504(s32 a, s32 b, s32 c, u32 d) {
    Unk_02052620 *r = func_020525a8(d);
    if (r) return r->func_0205262c(a, b, c);
    return 0;
}

extern "C" s32 func_020524dc(s32 a, s32 b, u32 c) {
    Unk_02052620 *r = func_020525a8(c);
    if (r) return r->func_02052620(a, b);
    return 0;
}

extern "C" Unk_0205242c_Self *func_020524a8(Unk_0205242c_Self *p, u16 *q) {
    p->a = -1;
    s32 r = Item_GetFurnitureIndex(q);
    s32 m = -1;
    if (r != m) {
        p->a = FtrInfo_GetUnk05(r);
        p->b = Item_GetFurnitureDirection(q);
    }
    return p;
}

extern "C" void func_020524a4(Unk_0205242c_Self *) {}

extern "C" s32 func_0205248c(Unk_0205242c_Self *p) {
    if (p->a < 3) {
        return data_020dbcd8[p->a]->count;
    }
    return 0;
}

extern "C" Unk_0205242c_Item *func_0205242c(Unk_0205242c_Self *p, u32 idx) {
    if (p->a < 3 && idx < func_0205248c(p)) {
        return &data_020dbcd8[p->a]->rows[p->b][idx & 3];
    }
    static Unk_0205242c_Item dflt;
    return &dflt;
}

Unk_0205242c_Item data_021c4e34(0, 0);
Unk_0205242c_Item data_021c4e3c[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(1, 0) };
const Unk_0205242c_Ent *data_020dbcd8[3] = { &data_020ca650, &data_020ca63c, &data_020ca664 };
extern const Unk_0205242c_Ent data_020ca664 = { { data_021c4e8c, data_021c4e8c, data_021c4e8c, data_021c4e8c }, 4 };
extern const Unk_0205242c_Ent data_020ca63c = { { data_021c4e3c, data_021c4e44, data_021c4e54, data_021c4e4c }, 2 };
extern const Unk_0205242c_Ent data_020ca650 = { { &data_021c4e34, &data_021c4e34, &data_021c4e34, &data_021c4e34 }, 1 };
Unk_0205242c_Item data_021c4e44[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(0, -1) };
Unk_0205242c_Item data_021c4e54[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(-1, 0) };
s32 data_021c4e38;
Unk_0205242c_Item data_021c4e4c[2] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(0, 1) };
Unk_0205242c_Item data_021c4e8c[4] = { Unk_0205242c_Item(0, 0), Unk_0205242c_Item(1, 0), Unk_0205242c_Item(0, 1), Unk_0205242c_Item(1, 1) };

extern "C" s32 func_02052318(u8 a, s32 b, s32 c, s32 d, u8 e, bool f, bool g, bool h, volatile u8 i) {
    if (IsOne(gFieldSceneKind) && a == Scene_GetCurrent()) {
        Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
        if (o) {
            return o->vfunc_70(e, i);
        }
    }
    void *t = BlockMap_GetForArea(a);
    if (t) {
        s32 hb = b >> 4;
        s32 hc = c >> 4;
        u16 *p = (u16 *)BlockMap_GetItemPtr(t, hb, hc, b - (hb << 4), c - (hc << 4), 0);
        if (p && Range(p, 0x45dc, 0x47d7)) {
            if (f) {
                func_02052504(b, c, (u8)(i & 0xf), a);
            } else {
                func_020524dc(b, c, a);
            }
        }
    }
    func_02052554(b, c, d, f, a);
    if (g) {
        if (f) {
            u32 t = i;
            u16 v = t < 0x46 ? (u16)(t + 0x1323) : 0x1323;
            func_020601a4(a, &v);
        } else if (!h) {
            func_02060174(a);
        }
    }
    return 1;
}

extern "C" s32 func_020521fc(u32 *pp) {
    Unk_020521fc_W *p = (Unk_020521fc_W *)pp;
    if (p->n == 1) {
        func_02052318(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
        u32 w = *pp;
        w &= 0xdfffffff;
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &w, 4);
        _ZN11CommManager9endRecordEjj(g, 0x18, 4);
    } else {
        func_02052318(p->a, p->d, p->e, (u8)p->b, p->f, p->c, p->o, p->p, p->g);
    }
}

extern "C" s32 func_0205218c(Unk_0205218c_B *p) {
    u32 a = p->a;
    BOOL b = p->b ? 1 : 0;
    if (p->c == 1) {
        _ZN9HouseData13func_02060244Ejj(gSaveHouse, a, b);
        Unk_0205218c_B t;
        t = *p;
        t.c = 0;
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager11writeRecordEPhj(g, &t, 1);
        _ZN11CommManager9endRecordEjj(g, 0x19, 4);
    } else {
        _ZN9HouseData13func_02060244Ejj(gSaveHouse, a, b);
    }
}

extern "C" s32 func_02052134(s32 a, Unk_02052134_W *w) {
    u16 t = w->f;
    BOOL e = w->e ? 1 : 0;
    BOOL d = w->d ? 1 : 0;
    func_02051844(a, w->b, w->c, (u8)w->a, e, &t, d, 0);
}

extern "C" s32 func_020520d0(s32 a, Unk_020520d0_W *w) {
    u16 t = w->c;
    BOOL j = w->j ? 1 : 0;
    BOOL k = w->k ? 1 : 0;
    func_02051a50(a, w->a, w->b, (u8)w->i, j, k, (u8)w->h, &t, 0);
}

extern "C" s32 func_020520a8(s32 a, Unk_020520a8_W *w) {
    u16 t = w->c;
    func_02051784(a, w->a, w->b, &t, 0);
}

extern "C" void func_02051ff8(u8 a, s32 b, s32 c, u8 d, u8 e) {
    if (a == Scene_GetCurrent() && IsOne(gFieldSceneKind)) {
        {
            Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
            if (o) {
                if (_ZN9FtrSwitch4isOnEv((u8 *)o + 0x73c) == 0) {
                    if ((u32)FtrMgr_CountSwitchedOn(_ZN8FtrActor8isGyroidEv) >= 4) {
                        void *r = FtrMgr_SwitchOffRandom(_ZN8FtrActor8isGyroidEv, 0);
                        if (r) {
                            func_02051da4((s32)r, 0, 0xff, e);
                        }
                    }
                    func_02051d24(b, c, d, 1, 0xff, e, 1);
                } else {
                    func_02051d24(b, c, d, 0, 0xff, e, 1);
                }
            }
        }
    }
}

extern "C" void func_02051fcc(Unk_02051fcc_W *p) {
    func_02051ff8(p->a, p->c, p->d, p->b, 1);
}

extern "C" s32 func_02051f68(u8 *p, s32 q) {
    Unk_02051f68_V v;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    v.x = p[0] << 9;
    v.z = p[1] << 9;
    if (data_021c4ee4.func_020529e4(q, p[2], (Unk_02052ab4_Vec *)&v)) {
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager9endRecordEjj(g, 0x1f, q);
    } else {
        void *g = gCommManager;
        _ZN11CommManager11beginRecordEv(g);
        _ZN11CommManager9endRecordEjj(g, 0x20, q);
    }
}

extern "C" void func_02051f50(s32 x) {
    if (x) data_021c4e38 = 1;
    else data_021c4e38 = 2;
}

extern "C" s32 func_02051f40(s32 x) {
    return data_021c4ee4.func_02052a70(x);
}

extern "C" s32 func_02051e00(u32 a, u32 b, u32 c, u32 d, u8 e, u8 f, s32 g) {
    u32 w;
    u32 r5 = (g != 4) ? 1 : 0;
    Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (!o) return 0;
    if (_ZN11CommManager8isOnlineEv(gCommManager) && o && !_ZN8FtrActor9isPreviewEv(o)) {
        u32 t = o->vfunc_74(d);
        w = (w & ~0x3f) | (Scene_GetCurrent() & 0x3f);
        c = c & 1;
        w = (w & ~0x40) | (c << 6);
        t = t & 1;
        w = (w & ~0x80) | (t << 7);
        a = a & 0xf;
        w = (w & 0xfffff0ff) | (a << 8);
        b = b & 0xf;
        w = (w & 0xffff0fff) | (b << 12);
        d = d & 0x1f;
        w = (w & 0xffe0ffff) | (d << 16);
        w = (w & 0xe01fffff) | ((e & 0xff) << 21);
        w = (w & 0x7fffffff) | ((f & 1) << 31);
        r5 = r5 & 1;
        w = (w & 0xdfffffff) | (r5 << 29);
        w = (w & 0xbfffffff) | ((FtrActor_PredIsStereo(o) & 1) << 30);
        void *g2 = gCommManager;
        _ZN11CommManager11beginRecordEv(g2);
        _ZN11CommManager11writeRecordEPhj(g2, &w, 4);
        _ZN11CommManager9endRecordEjj(g2, 0x18, g);
    }
    return 1;
}

extern "C" s32 func_02051da4(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(gFieldSceneKind)) {
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(a, &x, &y, 0, 0)) {
            return func_02051d24(x, y, FtrActor_GetLayer(a), b, c, d, 1);
        }
    }
    return 0;
}

extern "C" s32 func_02051d24(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    if (!IsOne(gFieldSceneKind)) return 0;
    Unk_02051d24_Obj *o = _ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (!o) return 0;
    o->vfunc_70(d, e);
    if (g) {
        return func_02051e00(a, b, c, d, o->vfunc_78(), f, 4);
    }
    return 1;
}

extern "C" s32 func_02051cc8(s32 a, s32 b, u8 c, u8 d) {
    s32 x, y;
    if (IsOne(gFieldSceneKind)) {
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(a, &x, &y, 0, 0)) {
            return func_02051c10(x, y, FtrActor_GetLayer(a), b, c, d, 1);
        }
    }
    return 0;
}

extern "C" s32 func_02051c10(s32 a, s32 b, s32 c, s32 d, u8 e, u8 f, u8 g) {
    void *s = gCommManager;
    u8 *p;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        return func_02051d24(a, b, c, d, e, f, g);
    }
    if (!(gFieldSceneKind == 1 ? TRUE : FALSE)) {
        return 0;
    }
    p = (u8 *)_ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), a, b, c);
    if (p == NULL) {
        return 0;
    }
    if (g != 0) {
        if (func_02051e00(a, b, c, d, e, f, 0) != 0) {
            p[0x779] = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}

extern "C" void func_02051a50(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, u16 *h, u8 i) {
    void *o;
    u16 loc[3];
    Unk_0205242c_Self pk;
    Unk_02051a50_Bits bits;
    s32 x, y;
    s32 off;
    u32 idx;
    loc[0] = *h;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o == NULL) {
        return;
    }
    func_020524a8(&pk, h);
    off = 0;
    for (idx = 0; idx < func_0205248c(&pk); idx++) {
        u16 *src;
        x = b + *(s16 *)((u8 *)func_0205242c(&pk, idx) + off);
        y = c + ((s16 *)func_0205242c(&pk, idx))[1];
        if (idx == 0) {
            src = &loc[0];
        } else {
            loc[2] = 0xf031;
            src = &loc[2];
        }
        loc[1] = *src;
        if (BlockMap_SetItemAtUnit(o, &loc[1], x, y, d) == 0) {
            func_020524a4(&pk);
            return;
        }
        ((s32 (*)(s32, s32, s32, s32, s32))func_02052554)(x, y, d, e, a);
        if (f != 0 && e != 0 && idx == 0) {
            func_02052504(x, y, g, a);
        }
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0 && i != 0) {
        void *t;
        bits.x = b;
        bits.y = c;
        bits.g = g & 0xf;
        bits.d = d;
        bits.e = e;
        bits.f = f;
        bits.item = loc[0];
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1c, 4);
    }
    func_020524a4(&pk);
}

extern "C" void func_02051844(s32 a, s32 b, s32 c, s32 d, s32 e, u16 *f, s32 g, u8 h) {
    void *o;
    u32 idx;
    s32 x, y;
    BOOL k;
    u16 loc[3];
    Unk_0205242c_Self pk;
    u32 bits;
    loc[0] = *f;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o == NULL) {
        return;
    }
    func_020524a8(&pk, f);
    k = FALSE;
    if (*f >= 0x45dc && *f <= 0x47d7) {
        k = TRUE;
    }
    for (idx = 0; idx < func_0205248c(&pk); idx++) {
        x = b + ((s16 *)func_0205242c(&pk, idx))[0];
        y = c + ((s16 *)func_0205242c(&pk, idx))[1];
        loc[1] = 0xfff1;
        if (BlockMap_SetItemAtUnit(o, &loc[1], x, y, d) == 0 ? TRUE : FALSE) {
            func_020524a4(&pk);
            return;
        }
        if (g != 0 && d == 0) {
            loc[2] = 0xfff1;
            if (BlockMap_SetItemAtUnit(o, &loc[2], x, y, 1) == 0 ? TRUE : FALSE) {
                func_020524a4(&pk);
                return;
            }
        }
        ((s32 (*)(s32, s32, s32, s32, s32))func_02052554)(x, y, d, e, a);
        if (g != 0 && d == 0) {
            ((s32 (*)(s32, s32, s32, s32, s32))func_02052554)(x, y, 1, e, a);
        }
        if (k != 0 && e != 0) {
            func_020524dc(x, y, a);
        }
    }
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0 && h != 0) {
        void *t;
        bits = (bits & ~1) | (d & 1);
        bits = (bits & ~0x1e) | ((b & 0xf) << 1);
        bits = (bits & 0xfffffe1f) | ((c & 0xf) << 5);
        bits = (bits & 0xfffffdff) | ((g & 1) << 9);
        bits = (bits & 0xfffffbff) | ((e & 1) << 10);
        bits = (bits & 0xf80007ff) | ((loc[0] & 0xffff) << 11);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1b, 4);
    }
    func_020524a4(&pk);
}

extern "C" void func_02051784(s32 a, s32 b, s32 c, u16 *d, u8 f) {
    void *o;
    if ((gFieldSceneKind == 1 ? TRUE : FALSE) && a == Scene_GetCurrent()) {
        o = gSceneBlockMap;
    } else {
        o = BlockMap_GetForArea(a);
    }
    if (o != NULL && BlockMap_SetItemAtUnit(o, d, b, c, 1) != 0 && f != 0 && _ZN11CommManager8isOnlineEv(gCommManager) != 0) {
        u32 bits;
        void *t;
        bits = (bits & ~0xf) | (b & 0xf);
        bits = (bits & ~0xf0) | ((c & 0xf) << 4);
        bits = (bits & 0xff0000ff) | ((*d & 0xffff) << 8);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, &bits, 4);
        _ZN11CommManager9endRecordEjj(t, 0x1a, 4);
    }
}

extern "C" void func_0205170c(s32 a, s32 b, s32 c) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) != 0) {
        volatile u8 bits;
        BOOL f;
        void *t;
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((b & 1) << 6);
        f = TRUE;
        if (c == 4) {
            f = FALSE;
        }
        bits = (bits & ~0x80) | ((f & 1) << 7);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, (void *)&bits, 1);
        _ZN11CommManager9endRecordEjj(t, 0x19, c);
    }
}

extern "C" void func_020516e4(s32 a, s32 b) {
    _ZN9HouseData13func_02060244Ejj(gSaveHouse, a, b);
    func_0205170c(a, b, 4);
}

extern "C" void func_020516a4(s32 a, s32 b) {
    void *s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        func_020516e4(a, b);
    } else {
        func_0205170c(a, b, 0);
    }
}

extern "C" void func_020515e0(s32 a, s32 b, s32 c, s32 d) {
    if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 || NetArea_IsLocalOwner() != 0) {
        ((void (*)(s32, s32, s32, s32, s32))func_02051ff8)(a, b, c, d, 1);
    } else {
        volatile u16 bits;
        void *t;
        u8 *q = (u8 *)_ZN12FtrActorGrid8getActorEiii(FtrActorGrid_GetInstance(), b, c, d);
        if (q != NULL) {
            q[0x779] = 1;
        }
        bits = (bits & ~0x3f) | (a & 0x3f);
        bits = (bits & ~0x40) | ((d & 1) << 6);
        bits = (bits & ~0x780) | (((u16)b & 0xf) << 7);
        bits = (bits & ~0x7800) | (((u16)c & 0xf) << 11);
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, (void *)&bits, 2);
        _ZN11CommManager9endRecordEjj(t, 0x1d, 6);
    }
}

extern "C" void func_020515b8(s32 a, s32 b, s32 c) {
    s32 x, y;
    FieldPos_ToUnit(&x, &y, b);
    func_020515e0(a, x, y, c);
}

extern "C" void func_02051524(s32 *p) {
    void *s;
    u8 buf[3];
    data_021c4e38 = 0;
    s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0) {
        if (data_021c4ee4.func_020529e4(0, Scene_GetCurrent(), (Unk_02052ab4_Vec *)p) != 0) {
            data_021c4e38 = 1;
        } else {
            data_021c4e38 = 2;
        }
    } else {
        void *t;
        buf[0] = p[0] >> 9;
        buf[1] = p[2] >> 9;
        buf[2] = Scene_GetCurrent();
        t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager11writeRecordEPhj(t, buf, 3);
        _ZN11CommManager9endRecordEjj(t, 0x1e, 0);
    }
}

extern "C" u32 func_02051518() {
    return data_021c4e38;
}

extern "C" void func_02051510(s32 *p) { func_02051524(p); }

extern "C" u32 func_02051508() { return func_02051518(); }

extern "C" void func_020514a4(void *arg) {
    void *s;
    data_021c4e38 = 0;
    s = gCommManager;
    if (_ZN11CommManager8isOnlineEv(s) == 0 || _ZN11CommManager7isMyAidEj(s, 0) != 0 || _ZN11CommManager7isMyAidEj(s, 4) != 0) {
        data_021c4ee4.func_02052a70((s32)arg);
    } else {
        void *t = gCommManager;
        _ZN11CommManager11beginRecordEv(t);
        _ZN11CommManager9endRecordEjj(t, 0x21, 0);
    }
}


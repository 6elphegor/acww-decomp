#include "types.h"
#include "Unk_020d8c7c.h"

#define reg_4000358 (*(u32 *)0x4000358)
#define reg_4000008 (*(u16 *)0x4000008)

struct Vec3 {
    s32 x, y, z;
};

// local static of func_020b503c; destructor in another unit
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

static inline void setVec(Vec3* o, s32 x, s32 y, s32 z) {
    o->x = x;
    o->y = y;
    o->z = z;
}

struct Bits14 {
    u8 pad : 2;
    u8 v : 6;
};

static inline BOOL is0(u8 v) {
    if (v == 0) return TRUE;
    return FALSE;
}
static inline BOOL is1(u8 v) {
    if (v == 1) return TRUE;
    return FALSE;
}

// 0x1c-byte table entry (constructor func_020b4fc4, destructor func_020b4fc0)
struct Unk_020b4fc4 {
    Unk_020b4fc4();
    ~Unk_020b4fc4();
    u8 type;      // 0x00
    u8 flag;      // 0x01
    s16 unk_02;   // 0x02
    Vec3 pos;     // 0x04
    u32 unk_10;   // 0x10
    u8 unk_14;    // 0x14
    u8 unk_15;    // 0x15
    s16 unk_16;   // 0x16
    u8 unk_18;    // 0x18
};

// 0x18-byte record (constructor func_020b50a4, destructor func_020b50a0)
struct Unk_020b50a4 {
    Unk_020b50a4();
    ~Unk_020b50a4();
    Vec3 pos;     // 0x00
    u32 unk_0c;   // 0x0c
    s16 unk_10;   // 0x10
    u8 unk_12;    // 0x12
    s8 unk_13;    // 0x13
    s8 unk_14;    // 0x14
};

struct TileTable {
    Unk_020b4fc4* entries;
    u8 count;
};

struct TileData {
    u32 unk_00;
    u8 f4;
    u8 pad[3];
    u32 f8;
    TileTable* table;
};

struct S2f0 { u32 f0; u8 f4; u8 pad[3]; u32 f8; u16 fc; };

// 0x28-byte block: 0x20 bytes copied from a table, then three members
struct S394 {
    u8 b[0x20];
    u8 m20;
    u8 m21;
    u16 h22;
    u16 h24;
    u8 m26;
    u8 pad27;
};

struct Unk_020cbb18_t {
    u8 unk_00[0x64];
    u32 unk_64;
    u32 f68;
};

struct Unk_020d0d28_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02[2];
    u32 unk_04;
};

struct B5890 { u8 pad[0x14]; u8 lo : 2; u8 idx : 6; };

struct Unk_020b5d5c_Rec {
    void *f;
    u16 a;
    u16 b;
};

// 0x5c-byte object (constructor/destructor in another unit)
class Unk_020d9248 {
public:
    Unk_020d9248();
    virtual ~Unk_020d9248();
    u8 d[0x58];
};

// 0x28-byte object (constructor/destructor in another unit)
class Unk_020b6960 {
public:
    Unk_020b6960();
    ~Unk_020b6960();
    u8 d[0x28];
};

// Intermediate class (vtable 0x020e2988): its virtuals are defined by another unit, ctor/dtor inline
class Unk_020e2988 : public GameProc {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void postCreate();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Unk_020e2988() {}
};

// Vtable 0x020e4230
class Unk_020e4238 : public Unk_020e2988 {
public:
    Unk_020e4238() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
};

// object data_021ef2e4: only a vtable pointer; vfunc_00/04 are defined in another unit, vfunc_08 here
class Unk_020e41d0 {
public:
    virtual inline void vfunc_00();
    virtual inline void vfunc_04();
    virtual void vfunc_08();
};

// stand-in for the owner of the six pointer-to-member targets of the vfunc_00 table
class Unk_020b5844 {
public:
    BOOL func_020b5844(u32, u32);
    BOOL func_020b58b0(u32, u32);
    BOOL func_020b58d8(u32, u32);
    BOOL func_020b58f0(u32, u32);
    BOOL func_020b59f8(u32, u32);
    BOOL func_020b5af4(u32, u32);
};

extern "C" {
// ---- data of other units ----
extern s32 data_020c8cc0;
extern Unk_020cbb18_t* data_020cbb18;
extern u16 data_020e2974;
extern u8 data_021e5890[];
extern S2f0* gActorDefaultParent;
extern u8 gTouchHeld;
extern u16 gTouchX;
extern u16 gTouchY;
extern u8 data_021c3cc0;
extern u8 data_021c3cb8;
extern u32 data_021c5388;
extern u32 data_021ce63c;
extern u32 gVBlanksPerFrame;
extern u8 data_021eda64;
extern u8 data_021eda50[];
extern u8 data_021eda58[];
extern u32 gCurrentHeap;
extern u32 OVERLAY_2_ID[];
extern u8 data_ov003_0225812c[];
extern u8 data_ov006_0225b7b4[];
extern u8 data_ov054_0225b7a8[];
extern u8 data_ov005_0225b79c[];

// ---- functions of other units ----
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18_t* p, u32 i);
BOOL _ZN12Unk_020cbb1813func_020729ccEj(Unk_020cbb18_t* p, u32 i);
void _ZN12Unk_020cbb1813func_020729a8Ej(void*, s32);
u32 func_020a6358(u32 i);
void func_020a4414(s32 a, s32 b, s32 c, s32 d);
s32 func_0209c098(s32 a);
u32 func_0209501c(Vec3* a, s16* b);
void func_0204ee10(s32* a, s32* b, Vec3* c);
void func_0204edd8(Vec3* out, Vec3* in);
void* func_0204da0c();
BOOL func_0204d700(void* o, Vec3* v, s32* a, s32* b);
BOOL func_0204d684(void* o, Vec3* v, s32* a, s32* b);
void func_0209cfb8(u8 *out);
void OverlayMgr_Release(u32 v);
void OverlayMgr_Acquire(u32 v);
void func_020b60dc(s32, u32, u32, u32);
void PlayerSession_SetDataIndex(s32, s32);
void PlayerSession_ClearDataIndex(s32);
void PlayerSession_SetGfxSlot(s32, s32);
s32 PlayerSession_GetDataIndex(s32);
s32 _ZN12Unk_020afaa413func_020afab8EPhS0_y(void*, void*, void*, u32, u32);
void _ZN12Unk_020afaa413func_020afad0Ev(void*);
s32 func_020a5ef8();
void func_020a5ee8(s32);
BOOL PlayerData_Get(s32);
void _ZN10PlayerData13func_02098a58Ev();
s32 func_02036c58();
void _ZN12Unk_0203710813func_02037108Ej(s32, s32);
void FtrInfo_LoadIndoor(s32);
void ItemInfo_LoadIndoor(s32);
void _ZN12Unk_020b69a813func_020b69a8Ev();
void _ZN12Unk_020b696013func_020b6990Ev();
void func_02038158();
s32 func_020559d0();
void func_020559d8();
void func_02038168();
void func_02053780();
void func_020b83e0();
void func_020b8494();
void func_0205369c();
void GX_SetBankForTex(u32);
void GX_SetBankForTexPltt(u32);
void GX_SetBankForBG(u32);
void GX_SetBankForOBJ(u32);
void GX_SetBankForSubBG(u32);
void GX_SetBankForSubOBJ(u32);
void func_020015a0(u32);
void func_0200158c(u32);
void func_020b7f80();
void func_020014f4(u32);
void func_020014bc(u32);
void G3X_SetFog(u32, u32, u32, u32);
void G3X_SetFogTable(const void *);
void NNS_G3dGeFlushBuffer();
void func_02034044();
void func_02088d58();
void func_02030518();
void func_02089118();
u64 OS_GetTick();
void func_020739b8(s32);
void func_020a5c30();
void func_02045c68();
u8 func_020a5f08();
void func_020a5f18(s32);
void func_02041104();
void Character_ResetList();
void TalkRequestQueue_StartInitial();
void func_02038fb0();
void func_0203498c();
void func_0209035c();
void func_02089124();
void func_02034938();
void func_0205b848();
void func_02081d00();
void func_02077e30();
void NpcRegistry_Clear();
void func_0205fff4();
void func_0205ed9c();
void func_0205f054();
void func_0205d798();
void func_0205df58();
void func_0205c8dc();
void func_0205eec8();
void func_0205d300();
void func_0205d1b8();
void func_0205d440();
void func_0205cdcc();
void func_0205c62c();
void func_020716cc();
void _ZN12Unk_020718a413func_020716f0Ev();
void FtrInfo_FreeIndoor();
void ItemInfo_FreeIndoor();
void func_020abe10();
void func_020ac3a4();
void _ZN12Unk_02036cec13func_02036cecEv();
void _ZN12Unk_020718a413func_02071770Ev();
void func_0205c644(u32);
void func_0205cde4(u32);
void func_0205d458(u32);
void func_0205d1d0(u32);
void func_0205d318(u32);
void func_0205eee0(u32);
void func_0205c8f4(u32);
void func_0205df70(u32);
void func_0205f06c(u32);
void func_0205d7b0(u32);
void func_0205edb8(u32);
void func_0206000c(u32);
void func_020ac500(s32);
void func_020abe58();
void func_02077e4c();
void func_02081d08();
void func_0205b864(u32);
void func_0209c540();
void func_020ac750();
void func_0208e974();
void Snd_CreateScene();
}

// ---- data of this unit ----
extern "C" {
// prototypes of the unit's functions
BOOL func_020b4880(void);
u8 func_020b4904(u32 i);
u8 func_020b4910(u32 i);
u8 func_020b491c(u32 i);
u8 func_020b4928(u32 i);
u8 *func_020b4934(void);
u8 func_020b493c(Unk_020b4fc4* e);
void func_020b4940(Unk_020b4fc4* e, u8 v);
u8 func_020b4944(Unk_020b4fc4* e);
BOOL func_020b4948(Unk_020b4fc4* e);
u32 func_020b4958(Unk_020b4fc4* e);
s32 func_020b495c(Unk_020b4fc4* e);
Vec3* func_020b4964(Unk_020b4fc4* e);
void func_020b4968(s32 a, s32 b);
u8 func_020b4994();
u8 func_020b49a8(u8* p);
void func_020b49ac(u8* p);
void func_020b49b4(s32 unused);
BOOL func_020b49c4(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q);
BOOL func_020b4aa8(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q);
BOOL func_020b4b68(s32 unused, s32 id, u32* type, s16* s);
BOOL func_020b4aec(s32 a, s32 id, Vec3* out, Vec3* in);
BOOL func_020b4f18(Unk_020b4fc4* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q);
BOOL func_020b4f58(Unk_020b4fc4* e, u8 id, u8 p, u8 q);
BOOL func_020b4f78(Unk_020b4fc4* e, u8 id);
void func_020b4f8c(Unk_020b4fc4* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t);
BOOL func_020b4fe4(u32 id);
s32 func_020b4ff0(Unk_020b50a4* i);
s32 func_020b4ff8(Unk_020b50a4* i);
u8 func_020b5000(Unk_020b50a4* i);
s32 func_020b5004(Unk_020b50a4* i);
u32 func_020b500c(Unk_020b50a4* i);
Vec3* func_020b5010(Unk_020b50a4* i);
void func_020b5014(Unk_020b50a4* i, s32 id, Vec3* v, u32 w, s16 s, s32 p, s32 q);
void func_020b503c(Unk_020b50a4* i);
u8* func_020b50b4();
BOOL func_020b50bc();
BOOL func_020b50d0(s32 a);
u8 func_020b50dc();
u32 func_020b50e8();
BOOL func_020b50f4();
BOOL func_020b5130(u32 a);
BOOL func_020b5164();
BOOL func_020b5178(u32 a);
BOOL func_020b5184();
BOOL func_020b5198(u32 a);
BOOL func_020b51a4();
BOOL func_020b51b8(u32 a);
s32 func_020b51d4();
s32 func_020b51e8(u32 a);
BOOL func_020b51fc();
BOOL func_020b5210(u32 a);
s32 func_020b522c();
s32 func_020b5240(u32 a);
BOOL func_020b5254();
BOOL func_020b5268(u32 a);
void func_020b4a08(s32 unused, s32 add);
s32 func_020b4d38(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q);
s32 func_020b4c64(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy);
BOOL func_020b4bbc(s32 a, s32 id);
s32 func_020b5284(void);
s32 func_020b5298(u32 x);
BOOL func_020b52ac(void);
BOOL func_020b52c0(s32 x);
BOOL func_020b52d0(void);
BOOL func_020b52e4(s32 x);
BOOL func_020b52f8(void);
BOOL func_020b530c(s32 x);
s32 func_020b5328(void);
s32 func_020b533c(u32 x);
u32 func_020b5350(void);
u8 func_020b5364(BOOL a);
void func_020b53d4(s32 unused, u8* src);
void func_020b53ec(u16 v);
void func_020b53f8(u32 v);
s32 func_020b5408(void);
void func_020b541c(void);
void func_020b54b0(s32 unused);
void func_020b54ec(s32 a);
u16 func_020b5b98(void);
u32 func_020b5bbc(void);
void func_020b5c0c(void);
void func_020b5c54(void);
void func_020b5cbc(void);
void func_020b5d00(u8 *obj);
void func_020b5d3c(void);
void func_020b5d4c(void);
Unk_020e4238 *func_020b5d5c(void);
}

extern const u16 data_020d0c0c[12];
extern const u8 data_020d0c24[0x34];
extern const u8 data_020d0c58[0x34];
extern const u8 data_020d0c8c[0x34];
extern const u8 data_020d0cc0[0x34];
extern const u8 data_020d0cf4[0x34];
extern const Unk_020d0d28_Ent data_020d0d28[13];
extern u8 data_020e41dc[0x20];
extern u8 data_020e41fc[0x34];
extern s32 data_020e434c[51];
extern u8 data_020e416c;
extern u8 data_020e4170;
extern u8 data_020e4174;
extern s32 data_020e4178;
extern s32 data_020e417c;
extern s32 data_020e4180;
extern s32 data_020e4184;
extern u32 data_020e41b8[2];
extern TileData *data_020e4280[51];
extern TileData *data_021ef2f0;
extern u8 data_021ef2d4;
extern Unk_020e41d0 data_021ef2e4;
extern u32 data_021ef2ec;
extern Unk_020b50a4 data_021ef348;
extern Unk_020b50a4 data_021ef360;
extern Unk_020b4fc4 data_021ef378;
extern S394 data_021ef394;
extern Unk_020b6960 data_021ef3bc;
extern Unk_020d9248 gViewFrustum;































u8 data_020e41dc[0x20] = {
    0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x15, 0x19, 0x1d, 0x21, 0x25,
    0x2a, 0x2e, 0x32, 0x36, 0x3a, 0x3f, 0x43, 0x47, 0x49, 0x4b, 0x4d, 0x4d, 0x4e, 0x4e, 0x4f, 0x4f,
};

Unk_020e41d0 data_021ef2e4;

Unk_020d9248 gViewFrustum;

TileData *data_020e4280[51] = {
    (TileData *)data_ov006_0225b7b4,
    (TileData *)(data_ov003_0225812c + 0xb08),
    (TileData *)(data_ov003_0225812c + 0x968),
    (TileData *)(data_ov003_0225812c + 0x968),
    (TileData *)(data_ov003_0225812c + 0x968),
    (TileData *)(data_ov003_0225812c + 0x9a8),
    (TileData *)(data_ov003_0225812c + 0x908),
    (TileData *)(data_ov003_0225812c + 0x900),
    (TileData *)(data_ov003_0225812c + 0x914),
    (TileData *)(data_ov003_0225812c + 0x94c),
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0x9cc),
    (TileData *)(data_ov003_0225812c + 0x9cc),
    (TileData *)(data_ov003_0225812c + 0x9cc),
    (TileData *)(data_ov003_0225812c + 0x9cc),
    (TileData *)(data_ov003_0225812c + 0x958),
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0xaa4),
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0x9e4),
    (TileData *)(data_ov003_0225812c + 0x9a4),
    (TileData *)(data_ov003_0225812c + 0x97c),
    (TileData *)(data_ov003_0225812c + 0xb20),
    (TileData *)(data_ov003_0225812c + 0x97c),
    (TileData *)(data_ov003_0225812c + 0x978),
    (TileData *)(data_ov003_0225812c + 0x9ec),
    (TileData *)(data_ov003_0225812c + 0x9ac),
    (TileData *)(data_ov003_0225812c + 0x9c8),
    (TileData *)(data_ov003_0225812c + 0x968),
    (TileData *)(data_ov003_0225812c + 0x9f0),
    (TileData *)(data_ov003_0225812c + 0x9ac),
    (TileData *)(data_ov003_0225812c + 0x97c),
    (TileData *)data_ov054_0225b7a8,
    (TileData *)data_ov005_0225b79c,
    (TileData *)data_ov005_0225b79c,
    (TileData *)(data_ov003_0225812c + 0x95c),
    (TileData *)(data_ov003_0225812c + 0x9a8),
    (TileData *)(data_ov003_0225812c + 0x988),
    (TileData *)(data_ov003_0225812c + 0x918),
    (TileData *)data_ov006_0225b7b4,
    (TileData *)(data_ov003_0225812c + 0x9a0),
};

s32 data_020e434c[51] = {
    5, 32, 31, 34, 33, 35, 11, 12,
    10, 36, 43, 15, 15, 15, 15, 14,
    17, 29, 29, 29, 29, 29, 29, 29,
    29, 29, 38, 39, 40, 41, 42, 13,
    21, 20, 19, 22, 23, 24, 25, 26,
    27, 28, 7, 8, 6, 44, 37, 16,
    30, 5, 18,
};

Unk_020b6960 data_021ef3bc;

TileData *data_021ef2f0;

Unk_020b4fc4 data_021ef378;

const u16 data_020d0c0c[12] = {
    0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fdd,
    0x7fba, 0x7f98, 0x7f98, 0x7bbc,
};

u32 data_020e41b8[2] = {3, 4};

s32 data_020e4180 = -1;

s32 data_020e417c = -1;

u8 data_020e4174 = 0x3f;

const u8 data_020d0cc0[0x34] = {
    0x05, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02,
    0x02, 0x05, 0x05, 0x00,
};

const u8 data_020d0cf4[0x34] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x03, 0x03, 0x03, 0x03, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04,
    0x01, 0x01, 0x01, 0x00,
};

s32 data_020e4184 = -1;

u32 data_021ef2ec;

u8 data_020e4170 = 0x3f;

Unk_020b50a4 data_021ef348;

S394 data_021ef394;

Unk_020b50a4 data_021ef360;

const u8 data_020d0c24[0x34] = {
    0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08, 0x08, 0x01, 0x0e, 0x01, 0x01, 0x01, 0x01, 0x0a,
    0x01, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x05,
    0x01, 0x04, 0x04, 0x01, 0x01, 0x1c, 0x1c, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x00, 0x01, 0x00,
};

u8 data_021ef2d4;

const u8 data_020d0c58[0x34] = {
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x02, 0x04, 0x02,
    0x01, 0x04, 0x04, 0x00,
};

u8 data_020e41fc[0x34] = {
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x00, 0x01, 0x00,
};

Unk_020b5d5c_Rec data_020e41b0 = {(void *)func_020b5d5c, 6, 0xd4};

const u8 data_020d0c8c[0x34] = {
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00,
};

u8 data_020e416c = 2;

s32 data_020e4178 = -1;

const Unk_020d0d28_Ent data_020d0d28[13] = {
    {2, 0x03, {0, 0}, 9}, {2, 0x11, {0, 0}, 0xa}, {2, 0x18, {0, 0}, 0xb}, {3, 0x1f, {0, 0}, 0},
    {7, 0x16, {0, 0}, 1}, {9, 0x0f, {0, 0}, 2}, {9, 0x1e, {0, 0}, 3}, {0xa, 0x10, {0, 0}, 4},
    {0xa, 0x1e, {0, 0}, 5}, {0xb, 0x0d, {0, 0}, 6}, {0xb, 0x19, {0, 0}, 7}, {0xc, 0x0a, {0, 0}, 8},
    {0xc, 0x1f, {0, 0}, 9},
};

extern "C" Unk_020e4238 *func_020b5d5c(void) {
    return new Unk_020e4238();
}

extern "C" void func_020b5d4c(void) { OverlayMgr_Acquire((u32)OVERLAY_2_ID); }

extern "C" void func_020b5d3c(void) { OverlayMgr_Release((u32)OVERLAY_2_ID); }

extern "C" void func_020b5d00(u8 *obj) {
    s32 a = *(s32 *)(obj + 0x10);
    data_020e4178 = a;
    data_020e4180 = *(s32 *)(obj + 0x14);
    if (a != -1) {
        OverlayMgr_Acquire(a);
    }
    if (data_020e4180 != -1) {
        OverlayMgr_Acquire(data_020e4180);
    }
}

extern "C" void func_020b5cbc(void) {
    if (data_020e4178 != -1) {
        OverlayMgr_Release(data_020e4178);
        data_020e4178 = -1;
    }
    if (data_020e4180 != -1) {
        OverlayMgr_Release(data_020e4180);
        data_020e4180 = -1;
    }
}

extern "C" void func_020b5c54(void) {
    u8 idx = data_020e41fc[data_021ef2ec];
    u32 v = data_020e41b8[idx];
    OverlayMgr_Acquire(v);
    data_020e417c = v;
    data_020e416c = idx;
    if (data_020e434c[data_021ef2ec] != -1) {
        OverlayMgr_Acquire(data_020e434c[data_021ef2ec]);
        data_020e4184 = data_020e434c[data_021ef2ec];
    }
}

extern "C" void func_020b5c0c(void) {
    func_020b5cbc();
    if (data_020e4184 != -1) {
        OverlayMgr_Release(data_020e4184);
        data_020e4184 = -1;
    }
    if (data_020e417c != -1) {
        OverlayMgr_Release(data_020e417c);
        data_020e417c = -1;
    }
}

// ----- 0x020b5bbc -----
extern "C" u32 func_020b5bbc(void) {
    u8 buf[2];
    func_0209cfb8(buf);
    u32 a = buf[1];
    u32 b = buf[0];
    for (u32 i = 0; i < 13; i++) {
        u32 t = data_020d0d28[i].unk_00;
        if (a < t) {
            return data_020d0d28[i].unk_04;
        }
        if (a == t && b <= data_020d0d28[i].unk_01) {
            return data_020d0d28[i].unk_04;
        }
    }
    return 0;
}

extern "C" u16 func_020b5b98(void) {
    s32 idx = ((struct B5890*)data_021e5890)->idx;
    if (idx < 0xc) return data_020d0c0c[idx];
    return data_020d0c0c[0];
}

BOOL Unk_020b5844::func_020b5af4(u32, u32) {
    func_02041104();
    u8 m = data_020e4170;
    u8 r0 = func_020a5f08();
    if (m == 0x2e || m == 0xd || m == 0xc || m == 0xe || m == 0x2f) {
        if (r0 != 4) func_020a5f18(4);
    }
    Character_ResetList();
    data_020e4174 = data_020e4170;
    data_020e4170 = func_020b49a8((u8*)&data_021ef378);
    func_020b5d4c();
    data_021c5388 = (u32)&data_021ef2e4;
    func_020b50b4();
    _ZN12Unk_020b69a813func_020b69a8Ev();
    data_021ef2d4 = 0;
    data_021ef2ec = data_020e4170;
    func_020b5c54();
    data_021ef2f0 = data_020e4280[data_020e4170];
    func_020b5d00((u8 *)data_021ef2f0);
    return TRUE;
}

BOOL Unk_020b5844::func_020b59f8(u32, u32) {
    func_020b541c();
    func_02041104();
    func_0208e974();
    Snd_CreateScene();
    Unk_020cbb18_t* p = data_020cbb18;
    s32 i;
    if (_ZN12Unk_020cbb1813func_02072e88Ei(p, p->unk_64)) {
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, 4);
    } else if (func_020b52ac()) {
        _ZN12Unk_020cbb1813func_020729a8Ej(p, 4);
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, i);
    } else {
        _ZN12Unk_020cbb1813func_020729a8Ej(p, 1);
        for (i = 0; i < 4; i++) PlayerSession_SetGfxSlot(i, 4);
    }
    if (func_020b52ac()) {
        if (func_020b50e8() == 6) {
            p->f68 = 4;
            for (i = 3; i >= 0; i--) PlayerSession_SetDataIndex(i, i);
        } else if (func_020b50e8() == 7) {
            s32 a = p->f68;
            s32 b = PlayerSession_GetDataIndex(a);
            s32 c = 0;
            for (i = 3; i >= 0; i--) {
                if (i != a) {
                    if (c == b) c++;
                    PlayerSession_SetDataIndex(i, c);
                    c++;
                }
            }
        }
    } else if (func_020b50e8() == 0x2c) {
        Unk_020cbb18_t* q = data_020cbb18;
        q->unk_64 = 4;
        q->f68 = 4;
        for (i = 3; i >= 0; i--) PlayerSession_ClearDataIndex(i);
    }
    return TRUE;
}

BOOL Unk_020b5844::func_020b58f0(u32, u32) {
    s32 t = func_02036c58();
    _ZN12Unk_0203710813func_02037108Ej(t, data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    FtrInfo_LoadIndoor(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    ItemInfo_LoadIndoor(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_020716cc();
    _ZN12Unk_020718a413func_02071770Ev();
    func_0205c644(gCurrentHeap);
    func_0205cde4(gCurrentHeap);
    func_0205d458(gCurrentHeap);
    func_0205d1d0(gCurrentHeap);
    func_0205d318(gCurrentHeap);
    func_0205eee0(gCurrentHeap);
    func_0205c8f4(gCurrentHeap);
    func_0205df70(gCurrentHeap);
    func_0205f06c(gCurrentHeap);
    func_0205d7b0(gCurrentHeap);
    func_0205edb8(gCurrentHeap);
    func_0206000c(gCurrentHeap);
    func_020ac500(data_021ef2f0->f4 == 1 ? TRUE : FALSE);
    func_020abe58();
    func_02077e4c();
    func_02081d08();
    NpcRegistry_Clear();
    func_0205b864(gCurrentHeap);
    func_0209c540();
    if (func_020b50e8() == 0x2c || func_020b50e8() == 0x2d) {
        func_020b49b4((s32)func_020b4934());
    }
    func_020ac750();
    return TRUE;
}

BOOL Unk_020b5844::func_020b58d8(u32, u32) {
    _ZN12Unk_020afaa413func_020afad0Ev((void*)data_021ef2f0);
    return TRUE;
}

BOOL Unk_020b5844::func_020b58b0(u32 a, u32 b) {
    return _ZN12Unk_020afaa413func_020afab8EPhS0_y((void*)data_021ef2f0, data_021eda50, data_021eda58, a, b);
}

BOOL Unk_020b5844::func_020b5844(u32, u32) {
    func_020b54ec((s32)this);
    func_0209035c();
    reg_4000008 = (reg_4000008 & ~3) | 2;
    func_02089124();
    data_021ce63c = 0;
    func_020b49ac((u8*)&data_021ef378);
    gVBlanksPerFrame = 3;
    TalkRequestQueue_StartInitial();
    if (func_020b50e8() == 0x2e || func_020b50e8() == 0xd || func_020b50e8() == 0x2f)
        func_02038fb0();
    func_0203498c();
    return TRUE;
}

BOOL Unk_020e4238::vfunc_00() {
    Unk_020b5844* self = (Unk_020b5844*)this;
    typedef BOOL (Unk_020b5844::*M)(u32, u32);
    static M tbl[6] = {
        &Unk_020b5844::func_020b5af4, &Unk_020b5844::func_020b59f8, &Unk_020b5844::func_020b58f0,
        &Unk_020b5844::func_020b58d8, &Unk_020b5844::func_020b58b0, &Unk_020b5844::func_020b5844,
    };
    u64 start = OS_GetTick();
    u32 fail = 0;
    for (;;) {
        u32 idx = data_021eda64 - 1;
        if (idx >= 6) break;
        if ((self->*tbl[idx])((u32)start, (u32)(start >> 32))) {
            data_021eda64++;
            if (data_021eda64 > 6) break;
            u64 now = OS_GetTick();
            u64 d = (now - start) << 6;
            if ((u32)(d / 0x82ea) > 0x28) {
                fail = 1;
                break;
            }
        } else {
            fail = 1;
            break;
        }
    }
    if (fail) {
        func_020739b8(0);
        func_020a5c30();
        func_02045c68();
        return -1;
    }
    return 1;
}

BOOL Unk_020e4238::vfunc_0c() {
    func_02034938();
    func_020b50b4();
    _ZN12Unk_020b696013func_020b6990Ev();
    data_021c5388 = 0;
    func_0205b848();
    func_02081d00();
    func_02077e30();
    NpcRegistry_Clear();
    func_0205fff4();
    func_0205ed9c();
    func_0205f054();
    func_0205d798();
    func_0205df58();
    func_0205c8dc();
    func_0205eec8();
    func_0205d300();
    func_0205d1b8();
    func_0205d440();
    func_0205cdcc();
    func_0205c62c();
    func_020716cc();
    _ZN12Unk_020718a413func_020716f0Ev();
    FtrInfo_FreeIndoor();
    ItemInfo_FreeIndoor();
    func_020abe10();
    func_020ac3a4();
    func_02036c58();
    _ZN12Unk_02036cec13func_02036cecEv();
    func_020b5408();
    data_021ce63c = 0;
    if (func_020b50e8() == 6) {
        u32 i = 0;
        Unk_020cbb18_t* p = data_020cbb18;
        for (; i < 4; i++) {
            if (i == 0) {
                PlayerSession_SetDataIndex(0, p->f68);
                p->f68 = 0;
            } else {
                PlayerSession_ClearDataIndex(i);
            }
        }
    } else if (func_020b50e8() == 7) {
        s32 i = 2;
        for (; i >= 0; i--) PlayerSession_ClearDataIndex(i + 1);
    } else if (func_020b50e8() == 0xe) {
        s32 v = func_020a5ef8();
        if (v > 0 && v < 4) {
            if (PlayerData_Get(v + 3)) _ZN10PlayerData13func_02098a58Ev();
            PlayerSession_ClearDataIndex(v);
        }
        func_020a5ee8(4);
    }
    func_020b5c0c();
    data_021ef2f0 = 0;
    func_020b5d3c();
    data_020e416c = 2;
    return TRUE;
}

BOOL Unk_020e4238::onExecute() {
    func_02030518();
    func_02089118();
    BOOL b;
    if (data_021c3cc0 == 2) b = TRUE; else b = FALSE;
    if (!b && data_021c3cb8 == 0) return TRUE;
    if (func_020b4fe4(func_020b49a8((u8*)&data_021ef378))) {
        s32 r4 = func_020b4944((Unk_020b4fc4*)func_020b4934());
        func_020b4968(r4, func_020b493c((Unk_020b4fc4*)func_020b4934()));
    }
    return TRUE;
}

BOOL Unk_020e4238::onDraw() {
    func_020b54b0((s32)this);
    NNS_G3dGeFlushBuffer();
    s32 r0 = (s32)func_020b50b4();
    func_020b60dc(r0, (u8)gTouchX, (u8)gTouchY, gTouchHeld ? 1 : 0);
    func_02034044();
    func_02088d58();
    return TRUE;
}

BOOL Unk_020e4238::vfunc_30() {}

extern "C" void func_020b54ec(s32 a) {
    func_020b53d4(a, data_020e41dc);
    BOOL b;
    if (data_020e416c == 1) b = TRUE; else b = FALSE;
    if (b) data_021ef394.m20 = 0;
    else data_021ef394.m20 = 1;
    data_021ef394.m21 = 8;
    data_021ef394.h22 = 0xd2;
    data_021ef394.h24 = 0x7fff;
    data_021ef394.m26 = 0;
    func_020b54b0(a);
}

extern "C" void func_020b54b0(s32 unused) {
    S394* a = &data_021ef394;
    G3X_SetFog(a->m20, 1, a->m21, a->h22);
    reg_4000358 = a->h24 | (a->m26 << 16);
    G3X_SetFogTable(a);
}

extern "C" void func_020b541c(void) {
    func_02053780();
    func_020b83e0();
    func_020b8494();
    func_0205369c();
    GX_SetBankForTex(7);
    GX_SetBankForTexPltt(0x10);
    GX_SetBankForBG(0x20);
    GX_SetBankForOBJ(0x40);
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0x100);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xffcfffef;
    *(volatile u32 *)0x4001000 = *(volatile u32 *)0x4001000 & 0xffcfffef;
    func_020015a0(0);
    func_0200158c(1);
    *(volatile u32 *)0x4000000 = *(volatile u32 *)0x4000000 & 0xc7ffffff;
    func_020b7f80();
    func_020014f4(0x11);
    func_020014bc(0x10);
    func_020559d8();
    func_02038168();
}

extern "C" s32 func_020b5408(void) { func_02038158(); return func_020559d0(); }

extern "C" void func_020b53f8(u32 v) { data_021ef394.m26 = v & 0x1f; }

extern "C" void func_020b53ec(u16 v) { data_021ef394.h22 = v; }

extern "C" void func_020b53d4(s32 unused, u8* src) {
    u8* dst = (u8*)&data_021ef394;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        *dst = *src;
        dst++; src++;
    }
}

// ----- member functions and constructors -----
void Unk_020e41d0::vfunc_08() {}

extern "C" u8 func_020b5364(BOOL a) {
    u8 r = 0;
    if (gActorDefaultParent != NULL) {
        u16 x = gActorDefaultParent->fc;
        BOOL c3 = TRUE;
        BOOL c2 = TRUE;
        u8 m = data_020e416c;
        BOOL LampLights = (m == 0) ? TRUE : FALSE;
        if (!LampLights) {
            BOOL LightLevel = (m == 1) ? TRUE : FALSE;
            if (!LightLevel) c2 = FALSE;
        }
        if (!c2) {
            if (!a || x != 5) c3 = FALSE;
        }
        if (c3) {
            s32 idx = func_020b50e8();
            if (func_020b4fe4(idx)) r = data_020d0c8c[idx];
        }
    }
    return r;
}

extern "C" u32 func_020b5350(void) {
    u32 r = 0;
    if (data_021ef2f0 != NULL) r = data_021ef2f0->f8;
    return r;
}

extern "C" s32 func_020b533c(u32 x) {
    if (x >= 1 && x <= 5) return x - 1;
    return -1;
}

extern "C" s32 func_020b5328(void) { return func_020b533c(func_020b50e8()); }

extern "C" BOOL func_020b530c(s32 x) {
    s32 v = func_020b533c(x);
    BOOL r = FALSE;
    if (v != -1) r = TRUE;
    return r;
}

extern "C" BOOL func_020b52f8(void) { return func_020b530c(func_020b50e8()); }

extern "C" BOOL func_020b52e4(s32 x) {
    if ((u8)(x + 0xfa) <= 2) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b52d0(void) { return func_020b52e4(func_020b50e8()); }

extern "C" BOOL func_020b52c0(s32 x) {
    switch (x) {
    case 6:
    case 7:
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b52ac(void) { return func_020b52c0(func_020b50e8()); }

extern "C" s32 func_020b5298(u32 x) {
    if (x >= 0x1a && x <= 0x1f) return x - 0x1a;
    return -1;
}

// ----- 0x020b5284 -----
extern "C" s32 func_020b5284(void) { return func_020b5298(func_020b50e8()); }

extern "C" BOOL func_020b5268(u32 a) {
    if (func_020b5298(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b5254() { return func_020b5268(func_020b50e8()); }

extern "C" s32 func_020b5240(u32 a) {
    if (a >= 0x20 && a <= 0x29) return a - 0x20;
    return -1;
}

extern "C" s32 func_020b522c() { return func_020b5240(func_020b50e8()); }

extern "C" BOOL func_020b5210(u32 a) {
    if (func_020b5240(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b51fc() { return func_020b5210(func_020b50e8()); }

extern "C" s32 func_020b51e8(u32 a) {
    if (a >= 0x11 && a <= 0x18) return a - 0x11;
    return -1;
}

extern "C" s32 func_020b51d4() { return func_020b51e8(func_020b50e8()); }

extern "C" BOOL func_020b51b8(u32 a) {
    if (func_020b51e8(a) != -1) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b51a4() { return func_020b51b8(func_020b50e8()); }

extern "C" BOOL func_020b5198(u32 a) {
    if (a == 0) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b5184() { return func_020b5198(func_020b50e8()); }

extern "C" BOOL func_020b5178(u32 a) {
    if (a == 0x31) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020b5164() { return func_020b5178(func_020b50e8()); }

extern "C" BOOL func_020b5130(u32 a) {
    if (func_020b52e4(a) || a == 0x2c || a == 0x2d || a == 0x2e || a == 0x2f || (u8)(a + 0xf4) <= 2) return FALSE;
    return TRUE;
}

extern "C" BOOL func_020b50f4() {
    u8 v = data_020e416c;
    if (is0(v) || is1(v)) return func_020b5130(func_020b50e8());
    return FALSE;
}

extern "C" u32 func_020b50e8() { return data_020e4170; }

extern "C" u8 func_020b50dc() { return data_020e4174; }

extern "C" BOOL func_020b50d0(s32 a) {
    if (a < 9) return FALSE;
    return TRUE;
}

extern "C" BOOL func_020b50bc() { return func_020b50d0(((Bits14*)&data_021e5890[0x14])->v); }

extern "C" u8* func_020b50b4() { return (u8*)&data_021ef3bc; }

Unk_020b50a4::Unk_020b50a4() { func_020b503c(this); }

Unk_020b50a4::~Unk_020b50a4() {}


extern "C" void func_020b503c(Unk_020b50a4* i) {
    static FxVec3 v(0x30000, 0, 0x30000);
    func_020b5014(i, 0, (Vec3*)&v, 0x800000, 0, -1, -1);
}

extern "C" void func_020b5014(Unk_020b50a4* i, s32 id, Vec3* v, u32 w, s16 s, s32 p, s32 q) {
    i->unk_12 = id;
    i->pos.x = v->x;
    i->pos.y = v->y;
    i->pos.z = v->z;
    i->unk_0c = w;
    i->unk_10 = s;
    i->unk_13 = p;
    i->unk_14 = q;
}

extern "C" Vec3* func_020b5010(Unk_020b50a4* i) { return &i->pos; }

extern "C" u32 func_020b500c(Unk_020b50a4* i) { return i->unk_0c; }

extern "C" s32 func_020b5004(Unk_020b50a4* i) { return i->unk_10; }

extern "C" u8 func_020b5000(Unk_020b50a4* i) { return i->unk_12; }

extern "C" s32 func_020b4ff8(Unk_020b50a4* i) { return i->unk_13; }

extern "C" s32 func_020b4ff0(Unk_020b50a4* i) { return i->unk_14; }

extern "C" BOOL func_020b4fe4(u32 id) {
    if (id < 0x33) return TRUE;
    return FALSE;
}

Unk_020b4fc4::Unk_020b4fc4() {
    type = 0x3f;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    unk_10 = 0;
    unk_02 = 0;
    flag = 1;
    unk_14 = 2;
    unk_15 = 2;
    unk_16 = 0;
    unk_18 = 0;
}

Unk_020b4fc4::~Unk_020b4fc4() {}

extern "C" void func_020b4f8c(Unk_020b4fc4* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q, s16 r, u8 t) {
    e->type = id;
    e->pos.x = v->x;
    e->pos.y = v->y;
    e->pos.z = v->z;
    e->unk_10 = w;
    e->unk_02 = s;
    e->unk_14 = p;
    e->unk_15 = q;
    e->unk_16 = r;
    e->unk_18 = t;
}

extern "C" BOOL func_020b4f78(Unk_020b4fc4* e, u8 id) {
    if (e->type == 0x3f) {
        e->type = id;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b4f58(Unk_020b4fc4* e, u8 id, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->unk_14 = p;
        e->unk_15 = q;
        e->flag = 1;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020b4f18(Unk_020b4fc4* e, u8 id, Vec3* v, u32 w, s16 s, u8 p, u8 q) {
    if (e->type == 0x3f) {
        e->type = id;
        e->pos.x = v->x;
        e->pos.y = v->y;
        e->pos.z = v->z;
        e->unk_10 = w;
        e->unk_02 = s;
        e->flag = 0;
        e->unk_14 = p;
        e->unk_15 = q;
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 func_020b4d38(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, s32* x, s32* y, u8* p, u8* q) {
    if (id != -1) {
        TileData* d = data_021ef2f0;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                Unk_020b4fc4* entries = t->entries;
                if (entries) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        Unk_020b4fc4* e = &entries[id];
                        void* o = func_0204da0c();
                        s32 va, vb;
                        Vec3 v;
                        switch (entries[id].type) {
                        case 0x3e:
                            if (func_0204d700(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3d:
                            if (func_0204d684(o, &v, &va, &vb)) {
                                v.z += 0x1000;
                                *type = 0;
                                pos->x = v.x;
                                pos->y = v.y;
                                pos->z = v.z;
                                *w = 0xf000000;
                                *s = 0;
                                *x = va;
                                *y = vb;
                                *p = e->unk_14;
                                *q = e->unk_15;
                            }
                            return 3;
                        case 0x3f:
                            *type = func_020b5000(&data_021ef348);
                            {
                                Vec3* src = func_020b5010(&data_021ef348);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = func_020b500c(&data_021ef348);
                            *s = func_020b5004(&data_021ef348);
                            *x = func_020b4ff8(&data_021ef348);
                            *y = func_020b4ff0(&data_021ef348);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 2;
                        case 0x3c:
                            *type = func_020b5000(&data_021ef360);
                            {
                                Vec3* src = func_020b5010(&data_021ef360);
                                pos->x = src->x;
                                pos->y = src->y;
                                pos->z = src->z;
                            }
                            *w = func_020b500c(&data_021ef360);
                            *s = func_020b5004(&data_021ef360);
                            *x = func_020b4ff8(&data_021ef360);
                            *y = func_020b4ff0(&data_021ef360);
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return 3;
                        default:
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 1;
}

extern "C" s32 func_020b4c64(s32 a, s32 id, u8* type, Vec3* pos, u32* w, s16* s, u8* p, u8* q, s32* ox, s32* oy) {
    s32 x, y;
    s32 r = func_020b4d38(a, id, type, pos, w, s, &x, &y, p, q);
    if (ox) *ox = x;
    if (oy) *oy = y;
    if (r == 1) {
        if (id != -1) {
            TileData* d = data_021ef2f0;
            if (d) {
                TileTable* t = d->table;
                if (t) {
                    Unk_020b4fc4* entries = t->entries;
                    if (entries) {
                        u8 n = t->count;
                        if (id >= 0 && id < n) {
                            Unk_020b4fc4* e = &entries[id];
                            u8 ty = e->type;
                            if (e->pos.y == 0) e->pos.y = 0x200;
                            if (_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64) && ty == 7) ty = 8;
                            *type = ty;
                            pos->x = e->pos.x;
                            pos->y = e->pos.y;
                            pos->z = e->pos.z;
                            *w = e->unk_10;
                            *s = e->unk_02;
                            *p = e->unk_14;
                            *q = e->unk_15;
                            return r;
                        }
                    }
                }
            }
        }
        return 0;
    }
    return r;
}

extern "C" BOOL func_020b4bbc(s32 a, s32 id) {
    u8 t, u, v;
    s16 s;
    s32 w, x, y;
    Vec3 vec;
    s32 r = func_020b4c64(a, id, &t, &vec, (u32*)&w, &s, &u, &v, &x, &y);
    switch (r) {
    case 0:
        goto fail;
    case 2:
        func_020b5014(&data_021ef348, t, &vec, w, s, x, y);
        break;
    case 3:
        func_020b5014(&data_021ef360, t, &vec, w, s, x, y);
        break;
    }
    if (func_020b4f18((Unk_020b4fc4*)a, t, &vec, w, s, u, v)) return TRUE;
fail:
    return FALSE;
}

extern "C" BOOL func_020b4b68(s32 unused, s32 id, u32* type, s16* s) {
    *type = 0;
    *s = 0;
    if (id != -1) {
        TileData* d = data_021ef2f0;
        if (d) {
            TileTable* t = d->table;
            if (t) {
                Unk_020b4fc4* e = t->entries;
                if (e) {
                    u8 n = t->count;
                    if (id >= 0 && id < n) {
                        Unk_020b4fc4* p = &e[id];
                        if (type) *type = p->unk_18;
                        if (s) *s = p->unk_16;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_020b4aec(s32 a, s32 id, Vec3* out, Vec3* in) {
    u32 type;
    s16 s;
    Vec3 t;
    if (func_020b4b68(a, id, &type, &s)) {
        func_0204edd8(&t, in);
        setVec(out, t.x, in->y, t.z);
        if (s == 0 || s == -0x8000) {
            out->x = in->x;
            return TRUE;
        } else if (s == 0x4000 || s == -0x4000) {
            out->z = in->z;
            return TRUE;
        }
        return TRUE;
    }
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    return FALSE;
}

extern "C" BOOL func_020b4aa8(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (func_020b4fe4(id)) {
        func_020b5014(&data_021ef348, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}


extern "C" void func_020b4a08(s32 unused, s32 add) {
    static s32 minZ = data_020c8cc0 + 0x1000;
    s16 s;
    s32 p, q;
    Vec3 v;
    u32 r = func_0209501c(&v, &s);
    p = 0;
    q = 0;
    func_0204ee10(&p, &q, &v);
    if (func_020b50e8() == 0xb && v.z < minZ) v.z = minZ;
    v.z += add;
    func_020b4aa8((s32)func_020b4934(), func_020b50e8(), &v, (r << 22) & 0x3fc00000, s, p, q);
}


extern "C" BOOL func_020b49c4(s32 unused, s32 id, Vec3* pos, u32 w, s16 s, s32 p, s32 q) {
    if (func_020b4fe4(id)) {
        func_020b5014(&data_021ef360, id, pos, w, s, p, q);
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020b49b4(s32 unused) { func_020b503c(&data_021ef360); }

extern "C" void func_020b49ac(u8* p) { *p = 0x3f; }

extern "C" u8 func_020b49a8(u8* p) { return *p; }

extern "C" u8 func_020b4994() { return func_020b49a8((u8*)func_020b4934()); }

extern "C" void func_020b4968(s32 a, s32 b) {
    if (data_020e2974 != 5) {
        func_020a4414(5, a, 3, 1);
        func_0209c098(b);
    }
}

extern "C" Vec3* func_020b4964(Unk_020b4fc4* e) { return &e->pos; }

extern "C" s32 func_020b495c(Unk_020b4fc4* e) { return e->unk_02; }

extern "C" u32 func_020b4958(Unk_020b4fc4* e) { return e->unk_10; }

extern "C" BOOL func_020b4948(Unk_020b4fc4* e) {
    if (e->flag != 0) return TRUE;
    return FALSE;
}

extern "C" u8 func_020b4944(Unk_020b4fc4* e) { return e->unk_14; }

extern "C" void func_020b4940(Unk_020b4fc4* e, u8 v) { e->unk_14 = v; }

extern "C" u8 func_020b493c(Unk_020b4fc4* e) { return e->unk_15; }

extern "C" u8 *func_020b4934(void) { return (u8 *)&data_021ef378; }

extern "C" u8 func_020b4928(u32 i) { return data_020d0c58[i]; }

extern "C" u8 func_020b491c(u32 i) { return data_020d0cc0[i]; }

extern "C" u8 func_020b4910(u32 i) { return data_020d0cf4[i]; }

extern "C" u8 func_020b4904(u32 i) { return data_020d0c24[i]; }

// ---- code ----

// ----- 0x020b4828 -----
extern "C" BOOL func_020b4880(void) {
    u32 v;
    s32 i;
    Unk_020cbb18_t *p = data_020cbb18;
    if (!_ZN12Unk_020cbb1813func_02072e88Ei(p, p->unk_64)) {
        v = func_020b50e8();
        if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
    } else {
        for (i = 3; i >= 0; i--) {
            if (_ZN12Unk_020cbb1813func_02072e88Ei(p, i) && !_ZN12Unk_020cbb1813func_020729ccEj(p, i)) {
                v = func_020a6358(i);
                if (v == 12 || v == 13 || v == 14 || (u8)(v + 0xd2) <= 1) return FALSE;
            }
        }
    }
    return TRUE;
}


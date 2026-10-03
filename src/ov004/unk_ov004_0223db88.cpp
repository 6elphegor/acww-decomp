// mwcc-version: 1.2/base
#include "types.h"

#include "Unk_020d8c7c.h"

struct Unk_ov004_0223d800_Vec {
    s32 x, y, z;
};

// Spawn-definition record (0x1c bytes).
struct Unk_ov004_0223df58_Rec {
    /* 0x00 */ Unk_ov004_0223d800_Vec unk_00;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 unk_12;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 pad_1a[2];
};

struct Unk_ov004_0223df20_Def {
    /* 0x00 */ Unk_ov004_0223d800_Vec unk_00;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ s16 unk_0e;
    /* 0x10 */ const void *unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 pad_15[3];
};

struct Unk_ov004_0223dd88_Tbl {
    u8 unk_00;
    Unk_ov004_0223df58_Rec *unk_04;
    u32 unk_08;
};

typedef Unk_ov004_0223d800_Vec V3;
typedef Unk_ov004_0223df58_Rec Rec;

struct Unk_ov004_0223df20_V : V3 {
    Unk_ov004_0223df20_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

class MuseumData {
public:
    BOOL isDonated(u16 *id);
};

extern "C" MuseumData data_021ed0a0;

// main's u16 holder class (dtor = main's 0x02004b60)
struct ItemId {
    u16 v;
    ItemId(u16 x) { v = x; }
    ~ItemId();
};

extern "C" {
extern void *gSceneBlockMap;
extern const Unk_ov004_0223dd88_Tbl sMuseumInfoPointsByScene[];

s32 FX_Div(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020b50e8();
void MuseumExhibitInfo_Spawn(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
u32 MuseumInfoPoint_GetItemCount(Rec *r);
s32 MuseumInfoPoint_GetItemList(Rec *r);
s16 MuseumInfoPoint_GetMessage(Rec *r);
u32 MuseumInfoPoint_GetKind(Rec *r);
s32 MuseumInfoPoint_GetArc(Rec *r);
s16 MuseumInfoPoint_GetAngle(Rec *r);
void *MuseumInfoPoint_GetPos(Rec *r);
void MuseumInfoPoint_Init(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e);
void *BlockMap_GetItemPtr(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void BlockMap_SetItem(void *a, u16 *t, s32 x, s32 y, s32 p4, s32 p5, s32 z);
s32 Ftr_GetUnk05(void *p);
}

class MuseumRoom : public GameProc {
public:
    MuseumRoom();
    virtual BOOL vfunc_00();
    virtual BOOL onExecute();
    virtual ~MuseumRoom();
    virtual BOOL setupExhibits();

    void spawnInfoPoints();
};

class MuseumFossilRoom : public MuseumRoom {
public:
    MuseumFossilRoom();
    virtual ~MuseumFossilRoom();
    virtual BOOL setupExhibits();
};

class MuseumRoomUnk53 : public MuseumRoom {
public:
    MuseumRoomUnk53();
    virtual ~MuseumRoomUnk53();
    virtual BOOL setupExhibits();
};

struct Unk_ov004_0224f078_Entry {
    void *(*factory)();
    u16 a;
    u16 b;
};
extern "C" MuseumRoom *MuseumRoom_Create();
extern "C" MuseumRoomUnk53 *MuseumRoomUnk53_Create();
extern "C" MuseumFossilRoom *MuseumFossilRoom_Create();
// Static Rec objects of __sinit: ctor = MuseumInfoPoint_InitFromDef (plain function), dtor = the 2-byte function at 0x223e010
extern "C" Rec *MuseumInfoPoint_InitFromDef(Rec *r, const Unk_ov004_0223df20_Def *d);
struct MuseumInfoPoint : Rec {
    MuseumInfoPoint(const Unk_ov004_0223df20_Def &d) { MuseumInfoPoint_InitFromDef(this, &d); }
    ~MuseumInfoPoint();
};

// forward declarations
extern const u8 data_ov004_022441d0[9];
extern const u8 data_ov004_022441c4[9];
extern const u8 data_ov004_022441bc[8];
extern const u8 data_ov004_022441dc[9];
extern const u8 data_ov004_022441e8[10];
extern const u8 data_ov004_022441f4[11];
extern const u8 data_ov004_02244154[3];
extern const u8 data_ov004_02244168[3];
extern const u8 data_ov004_02244164[3];
extern const u8 data_ov004_0224415c[3];
extern const u8 data_ov004_02244160[3];
extern const u8 data_ov004_02244158[3];
extern const u8 data_ov004_02244114[1];
extern const u8 data_ov004_02244138[1];
extern const u8 data_ov004_022440f4[1];
extern const u8 data_ov004_022440e0[1];
extern const u8 data_ov004_022440c4[1];
extern const u8 data_ov004_02244108[1];
extern const u8 data_ov004_02244150[3];
extern const u8 data_ov004_02244144[3];
extern const u8 data_ov004_0224414c[3];
extern const u8 data_ov004_0224416c[4];
extern const u8 data_ov004_02244148[3];
extern const u8 data_ov004_02244140[2];
extern const u8 data_ov004_02244170[4];
extern const u8 data_ov004_0224413c[2];
extern const u8 data_ov004_02244118[1];
extern const u8 data_ov004_022440f8[1];
extern const u8 data_ov004_022440e4[1];
extern const u8 data_ov004_02244134[1];
extern const u8 data_ov004_02244184[6];
extern const u8 data_ov004_022441ac[7];
extern const u8 data_ov004_0224417c[6];
extern const u8 data_ov004_0224419c[6];
extern const u8 data_ov004_0224418c[6];
extern const u8 data_ov004_02244194[6];
extern const u8 data_ov004_022441b4[7];
extern const u8 data_ov004_02244174[5];
extern const u8 data_ov004_022441a4[7];
extern const u8 data_ov004_0224410c[1];
extern const u8 data_ov004_022440fc[1];
extern const u8 data_ov004_022440dc[1];
extern const u8 data_ov004_02244128[1];
extern const u8 data_ov004_0224411c[1];
extern const u8 data_ov004_02244104[1];
extern const u8 data_ov004_022440d0[1];
extern const u8 data_ov004_022440d8[1];
extern const u8 data_ov004_02244120[1];
extern const u8 data_ov004_022440ec[1];
extern const u8 data_ov004_022440e8[1];
extern const u8 data_ov004_02244124[1];
extern const u8 data_ov004_022440c8[1];
extern const u8 data_ov004_022440f0[1];
extern const u8 data_ov004_02244110[1];
extern const u8 data_ov004_0224412c[1];
extern const u8 data_ov004_022440d4[1];
extern const u8 data_ov004_02244130[1];
extern const u8 data_ov004_022440cc[1];
extern const u8 data_ov004_02244100[1];
extern const Unk_ov004_0223df20_Def sMuseumFishPointDefs23[4];
extern MuseumInfoPoint sMuseumFishPoints23[4];
extern const Unk_ov004_0223df20_Def sMuseumFishPointDefs24[2];
extern MuseumInfoPoint sMuseumFishPoints24[2];
extern const Unk_ov004_0223df20_Def sMuseumFossilPointDefs25[12];
extern MuseumInfoPoint sMuseumFossilPoints25[12];
extern const Unk_ov004_0223df20_Def sMuseumFossilPointDefs26[12];
extern MuseumInfoPoint sMuseumFossilPoints26[12];
extern const Unk_ov004_0223df20_Def sMuseumInsectPointDefs27[4];
extern MuseumInfoPoint sMuseumInsectPoints27[4];
extern const Unk_ov004_0223df20_Def sMuseumInsectPointDefs28[5];
extern MuseumInfoPoint sMuseumInsectPoints28[5];
extern const Unk_ov004_0223df20_Def sMuseumPaintingPointDefs29[20];
extern MuseumInfoPoint sMuseumPaintingPoints29[20];

// ---- data (definition order sets the emitted order; the statics of vfunc_48 are created when it is compiled) ----
const u8 data_ov004_022440f4[1] = {0x2};
const u8 data_ov004_022441ac[7] = {0xa, 0x1a, 0x20, 0x24, 0x2d, 0x2e, 0x2f};
const u8 data_ov004_02244170[4] = {0x26, 0x27, 0x28, 0x29};
const Unk_ov004_0223df20_Def sMuseumPaintingPointDefs29[20] = {
    {{29696, 4608, 4096}, 1, 2, -1, data_ov004_0224410c, 1},
    {{35584, 4608, 4096}, 1, 2, -1, data_ov004_022440fc, 1},
    {{61952, 4608, 4096}, 1, 2, -1, data_ov004_022440dc, 1},
    {{68352, 4608, 4096}, 1, 2, -1, data_ov004_02244128, 1},
    {{94208, 4608, 4096}, 1, 2, -1, data_ov004_0224411c, 1},
    {{20736, 4608, 36864}, 1, 2, -1, data_ov004_02244104, 1},
    {{37888, 4608, 36864}, 1, 2, -1, data_ov004_022440d0, 1},
    {{68608, 4608, 36864}, 1, 2, -1, data_ov004_022440d8, 1},
    {{94208, 4608, 36864}, 1, 2, -1, data_ov004_02244120, 1},
    {{106496, 4608, 36864}, 1, 2, -1, data_ov004_022440ec, 1},
    {{20736, 4608, 69632}, 1, 2, -1, data_ov004_022440e8, 1},
    {{52224, 4608, 69632}, 1, 2, -1, data_ov004_02244124, 1},
    {{68864, 4608, 69632}, 1, 2, -1, data_ov004_022440c8, 1},
    {{94208, 4608, 69632}, 1, 2, -1, data_ov004_022440f0, 1},
    {{100864, 4608, 69632}, 1, 2, -1, data_ov004_02244110, 1},
    {{11264, 4608, 102400}, 1, 2, -1, data_ov004_0224412c, 1},
    {{37120, 4608, 102400}, 1, 2, -1, data_ov004_022440d4, 1},
    {{53248, 4608, 102400}, 1, 2, -1, data_ov004_02244130, 1},
    {{84992, 4608, 102400}, 1, 2, -1, data_ov004_022440cc, 1},
    {{106496, 4608, 102400}, 1, 2, -1, data_ov004_02244100, 1},
};
const Unk_ov004_0223df20_Def sMuseumFishPointDefs23[4] = {
    {{40192, 5120, 98560}, 1, 1, -1, data_ov004_022441d0, 9},
    {{98816, 5120, 98560}, 1, 1, -1, data_ov004_022441c4, 9},
    {{40192, 5120, 41216}, 1, 1, -1, data_ov004_022441bc, 8},
    {{98816, 5120, 41216}, 1, 1, -1, data_ov004_022441dc, 9},
};
MuseumInfoPoint sMuseumFishPoints23[4] = {MuseumInfoPoint(sMuseumFishPointDefs23[0]), MuseumInfoPoint(sMuseumFishPointDefs23[1]), MuseumInfoPoint(sMuseumFishPointDefs23[2]), MuseumInfoPoint(sMuseumFishPointDefs23[3])};
const u8 data_ov004_0224412c[1] = {0x1};
const u8 data_ov004_022441e8[10] = {0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c};
const Unk_ov004_0223df20_Def sMuseumFishPointDefs24[2] = {
    {{27136, 5120, 90112}, 1, 1, -1, data_ov004_022441e8, 10},
    {{105728, 5120, 90112}, 1, 1, -1, data_ov004_022441f4, 11},
};
MuseumInfoPoint sMuseumFishPoints24[2] = {MuseumInfoPoint(sMuseumFishPointDefs24[0]), MuseumInfoPoint(sMuseumFishPointDefs24[1])};
const u8 data_ov004_022440cc[1] = {0xf};
const u8 data_ov004_02244168[3] = {0xd, 0xe, 0xf};
const u8 data_ov004_02244140[2] = {0x1e, 0x1f};
const u8 data_ov004_02244144[3] = {0x1b, 0x1c, 0x1d};
const u8 data_ov004_022441b4[7] = {0x9, 0xb, 0x10, 0x11, 0x18, 0x2b, 0x35};
const Unk_ov004_0223df20_Def sMuseumInsectPointDefs28[5] = {
    {{97536, 5120, 22272}, 1, 0, -1, data_ov004_0224418c, 6},
    {{54272, 5120, 22272}, 1, 0, -1, data_ov004_02244194, 6},
    {{38400, 5120, 85760}, 2, 0, -1, data_ov004_022441b4, 7},
    {{67840, 5120, 51200}, 12, 0, -1, data_ov004_02244174, 5},
    {{67840, 5120, 87296}, 9, 0, -1, data_ov004_022441a4, 7},
};
const u8 data_ov004_022441bc[8] = {0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18};
const u8 data_ov004_02244164[3] = {0x2a, 0x2b, 0x2c};
const u8 data_ov004_02244120[1] = {0xe};
const u8 data_ov004_022441dc[9] = {0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22};
const u8 data_ov004_022440d8[1] = {0xd};
const u8 data_ov004_022440dc[1] = {0x4};
const Unk_ov004_0223df20_Def sMuseumFossilPointDefs25[12] = {
    {{61440, 4096, 94208}, 1, 3, 34, data_ov004_02244154, 3},
    {{86016, 4096, 102400}, 1, 3, 36, data_ov004_02244168, 3},
    {{61440, 4096, 69632}, 1, 3, 32, data_ov004_02244164, 3},
    {{86016, 4096, 77824}, 1, 3, 20, data_ov004_0224415c, 3},
    {{61440, 4096, 45056}, 1, 3, 22, data_ov004_02244160, 3},
    {{86016, 4096, 53248}, 1, 3, 10, data_ov004_02244158, 3},
    {{86016, 4096, 28672}, 1, 3, -1, data_ov004_02244114, 1},
    {{94208, 4096, 28672}, 1, 3, -1, data_ov004_02244138, 1},
    {{102400, 4096, 28672}, 1, 3, -1, data_ov004_022440f4, 1},
    {{110592, 4096, 28672}, 1, 3, -1, data_ov004_022440e0, 1},
    {{118784, 4096, 28672}, 1, 3, -1, data_ov004_022440c4, 1},
    {{126976, 4096, 28672}, 1, 3, -1, data_ov004_02244108, 1},
};
MuseumInfoPoint sMuseumFossilPoints25[12] = {MuseumInfoPoint(sMuseumFossilPointDefs25[0]), MuseumInfoPoint(sMuseumFossilPointDefs25[1]), MuseumInfoPoint(sMuseumFossilPointDefs25[2]), MuseumInfoPoint(sMuseumFossilPointDefs25[3]), MuseumInfoPoint(sMuseumFossilPointDefs25[4]), MuseumInfoPoint(sMuseumFossilPointDefs25[5]), MuseumInfoPoint(sMuseumFossilPointDefs25[6]), MuseumInfoPoint(sMuseumFossilPointDefs25[7]), MuseumInfoPoint(sMuseumFossilPointDefs25[8]), MuseumInfoPoint(sMuseumFossilPointDefs25[9]), MuseumInfoPoint(sMuseumFossilPointDefs25[10]), MuseumInfoPoint(sMuseumFossilPointDefs25[11])};
const u8 data_ov004_022440f0[1] = {0x10};
const u8 data_ov004_02244110[1] = {0x5};
const u8 data_ov004_02244184[6] = {0xe, 0x19, 0x1e, 0x25, 0x33, 0x34};
const u8 data_ov004_02244118[1] = {0};
const u8 data_ov004_0224416c[4] = {0x30, 0x31, 0x32, 0x33};
Unk_ov004_0224f078_Entry sMuseumFossilRoomProfile = {(void *(*)())MuseumFossilRoom_Create, 0x52, 0x59};
const u8 data_ov004_0224418c[6] = {0x1f, 0x27, 0x28, 0x29, 0x2a, 0x2c};
const u8 data_ov004_02244130[1] = {0x7};
const u8 data_ov004_02244150[3] = {0x15, 0x16, 0x17};
const u8 data_ov004_02244100[1] = {0x6};
const u8 data_ov004_02244194[6] = {0x12, 0x13, 0x14, 0x21, 0x22, 0x26};
const u8 data_ov004_022441d0[9] = {0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8};
const u8 data_ov004_022440d0[1] = {0x12};
MuseumInfoPoint sMuseumFossilPoints26[12] = {MuseumInfoPoint(sMuseumFossilPointDefs26[0]), MuseumInfoPoint(sMuseumFossilPointDefs26[1]), MuseumInfoPoint(sMuseumFossilPointDefs26[2]), MuseumInfoPoint(sMuseumFossilPointDefs26[3]), MuseumInfoPoint(sMuseumFossilPointDefs26[4]), MuseumInfoPoint(sMuseumFossilPointDefs26[5]), MuseumInfoPoint(sMuseumFossilPointDefs26[6]), MuseumInfoPoint(sMuseumFossilPointDefs26[7]), MuseumInfoPoint(sMuseumFossilPointDefs26[8]), MuseumInfoPoint(sMuseumFossilPointDefs26[9]), MuseumInfoPoint(sMuseumFossilPointDefs26[10]), MuseumInfoPoint(sMuseumFossilPointDefs26[11])};
Unk_ov004_0224f078_Entry sMuseumRoomProfile = {(void *(*)())MuseumRoom_Create, 0x51, 0x58};
const u8 data_ov004_022440ec[1] = {0xb};
const u8 data_ov004_02244104[1] = {0};
const u8 data_ov004_0224417c[6] = {0, 0x1, 0x2, 0x3, 0x4, 0x8};
const u8 data_ov004_022440c4[1] = {0x8};
MuseumInfoPoint sMuseumInsectPoints27[4] = {MuseumInfoPoint(sMuseumInsectPointDefs27[0]), MuseumInfoPoint(sMuseumInsectPointDefs27[1]), MuseumInfoPoint(sMuseumInsectPointDefs27[2]), MuseumInfoPoint(sMuseumInsectPointDefs27[3])};
const u8 data_ov004_0224415c[3] = {0x20, 0x21, 0x22};
const u8 data_ov004_022440fc[1] = {0x11};
const Unk_ov004_0223df20_Def sMuseumFossilPointDefs26[12] = {
    {{53248, 4096, 102400}, 1, 3, 12, data_ov004_02244150, 3},
    {{77824, 4096, 102400}, 1, 3, 16, data_ov004_02244144, 3},
    {{53248, 4096, 77824}, 1, 3, 30, data_ov004_0224414c, 3},
    {{69632, 4096, 69632}, 1, 3, 24, data_ov004_0224416c, 4},
    {{53248, 4096, 53248}, 1, 3, 14, data_ov004_02244148, 3},
    {{94208, 4096, 45056}, 1, 3, 26, data_ov004_02244140, 2},
    {{69632, 4096, 20480}, 1, 3, 28, data_ov004_02244170, 4},
    {{94208, 4096, 20480}, 1, 3, 18, data_ov004_0224413c, 2},
    {{110592, 4096, 77824}, 1, 3, -1, data_ov004_02244118, 1},
    {{118784, 4096, 77824}, 1, 3, -1, data_ov004_022440f8, 1},
    {{110592, 4096, 61440}, 1, 3, -1, data_ov004_022440e4, 1},
    {{118784, 4096, 61440}, 1, 3, -1, data_ov004_02244134, 1},
};
const u8 data_ov004_0224411c[1] = {0xc};
const u8 data_ov004_02244138[1] = {0x9};
const u8 data_ov004_02244134[1] = {0x7};
MuseumInfoPoint sMuseumInsectPoints28[5] = {MuseumInfoPoint(sMuseumInsectPointDefs28[0]), MuseumInfoPoint(sMuseumInsectPointDefs28[1]), MuseumInfoPoint(sMuseumInsectPointDefs28[2]), MuseumInfoPoint(sMuseumInsectPointDefs28[3]), MuseumInfoPoint(sMuseumInsectPointDefs28[4])};
const u8 data_ov004_022440c8[1] = {0xa};
const u8 data_ov004_02244158[3] = {0x12, 0x13, 0x14};
const u8 data_ov004_022440e0[1] = {0x6};
const u8 data_ov004_02244128[1] = {0x8};
const u8 data_ov004_022441c4[9] = {0x9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x19};
const u8 data_ov004_022440e4[1] = {0x3};
const u8 data_ov004_022441f4[11] = {0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37};
const u8 data_ov004_02244154[3] = {0xa, 0xb, 0xc};
const u8 data_ov004_02244160[3] = {0x23, 0x24, 0x25};
const u8 data_ov004_02244114[1] = {0x4};
const Unk_ov004_0223df20_Def sMuseumInsectPointDefs27[4] = {
    {{61952, 5120, 86784}, 3, 0, -1, data_ov004_02244184, 6},
    {{61952, 5120, 51712}, 6, 0, -1, data_ov004_022441ac, 7},
    {{92416, 5120, 34560}, 8, 0, -1, data_ov004_0224417c, 6},
    {{92416, 5120, 86272}, 9, 0, -1, data_ov004_0224419c, 6},
};
const u8 data_ov004_02244124[1] = {0x2};
const u8 data_ov004_022440e8[1] = {0x3};
const Unk_ov004_0223dd88_Tbl sMuseumInfoPointsByScene[7] = {
    {0x25, (Rec *)sMuseumFossilPoints25, 12},
    {0x26, (Rec *)sMuseumFossilPoints26, 12},
    {0x23, (Rec *)sMuseumFishPoints23, 4},
    {0x24, (Rec *)sMuseumFishPoints24, 2},
    {0x29, (Rec *)sMuseumPaintingPoints29, 20},
    {0x27, (Rec *)sMuseumInsectPoints27, 4},
    {0x28, (Rec *)sMuseumInsectPoints28, 5},
};
const u8 data_ov004_0224413c[2] = {0x10, 0x11};
const u8 data_ov004_02244174[5] = {0x15, 0x16, 0x17, 0x23, 0x31};
const u8 data_ov004_02244148[3] = {0x18, 0x19, 0x1a};
Unk_ov004_0224f078_Entry sMuseumRoomUnk53Profile = {(void *(*)())MuseumRoomUnk53_Create, 0x53, 0x5a};
const u8 data_ov004_0224419c[6] = {0x5, 0x6, 0x7, 0xf, 0x30, 0x32};
const u8 data_ov004_0224414c[3] = {0x2d, 0x2e, 0x2f};
const u8 data_ov004_0224410c[1] = {0x9};
MuseumInfoPoint sMuseumPaintingPoints29[20] = {MuseumInfoPoint(sMuseumPaintingPointDefs29[0]), MuseumInfoPoint(sMuseumPaintingPointDefs29[1]), MuseumInfoPoint(sMuseumPaintingPointDefs29[2]), MuseumInfoPoint(sMuseumPaintingPointDefs29[3]), MuseumInfoPoint(sMuseumPaintingPointDefs29[4]), MuseumInfoPoint(sMuseumPaintingPointDefs29[5]), MuseumInfoPoint(sMuseumPaintingPointDefs29[6]), MuseumInfoPoint(sMuseumPaintingPointDefs29[7]), MuseumInfoPoint(sMuseumPaintingPointDefs29[8]), MuseumInfoPoint(sMuseumPaintingPointDefs29[9]), MuseumInfoPoint(sMuseumPaintingPointDefs29[10]), MuseumInfoPoint(sMuseumPaintingPointDefs29[11]), MuseumInfoPoint(sMuseumPaintingPointDefs29[12]), MuseumInfoPoint(sMuseumPaintingPointDefs29[13]), MuseumInfoPoint(sMuseumPaintingPointDefs29[14]), MuseumInfoPoint(sMuseumPaintingPointDefs29[15]), MuseumInfoPoint(sMuseumPaintingPointDefs29[16]), MuseumInfoPoint(sMuseumPaintingPointDefs29[17]), MuseumInfoPoint(sMuseumPaintingPointDefs29[18]), MuseumInfoPoint(sMuseumPaintingPointDefs29[19])};
const u8 data_ov004_02244108[1] = {0x1};
const u8 data_ov004_022441a4[7] = {0xc, 0xd, 0x1b, 0x1c, 0x1d, 0x36, 0x37};
const u8 data_ov004_022440d4[1] = {0x13};

MuseumInfoPoint::~MuseumInfoPoint() {}

extern "C" void MuseumInfoPoint_Init(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e) {
    s32 sum; u32 i; s32 last; s32 cnt;
    r->unk_00.x = pos->x;
    r->unk_00.y = pos->y;
    r->unk_00.z = pos->z;
    r->unk_19 = b;
    r->unk_12 = c;
    r->unk_14 = d;
    r->unk_18 = e;
    sum = 0;
    cnt = sum;
    last = sum;
    i = sum;
    do {
        if (((mask >> i) & 1) != 0) {
            sum += i << 14;
            last = (s16)(i << 14);
            cnt++;
        }
        i++;
    } while (i < 4);
    r->unk_10 = FX_Div(sum << 12, cnt << 12) >> 12;
    if (cnt == 2) {
        if (func_020e780c(last, r->unk_10) >= 0x4000) {
            r->unk_10 = r->unk_10 + 0x8000;
        }
    }
    last = 0;
    i = last;
    do {
        if (((mask >> i) & 1) != 0) {
            s32 t = func_020e780c((s32)(i << 30) >> 16, r->unk_10);
            if (t > last) {
                last = t;
            }
        }
        i++;
    } while (i < 4);
    r->unk_0c = last + 0x1300;
}

extern "C" Rec *MuseumInfoPoint_InitFromDef(Rec *r, const Unk_ov004_0223df20_Def *d) {
    Unk_ov004_0223df20_V v(d->unk_00.x, d->unk_00.y, d->unk_00.z);
    MuseumInfoPoint_Init(r, &v, d->unk_0c, d->unk_0d, d->unk_0e, (s32)d->unk_10, d->unk_14);
    return r;
}

extern "C" void *MuseumInfoPoint_GetPos(Rec *r) {}

extern "C" s16 MuseumInfoPoint_GetAngle(Rec *r) {
    return r->unk_10;
}

extern "C" s32 MuseumInfoPoint_GetArc(Rec *r) {
    return r->unk_0c;
}

extern "C" u32 MuseumInfoPoint_GetKind(Rec *r) {
    return r->unk_19;
}

extern "C" s16 MuseumInfoPoint_GetMessage(Rec *r) {
    return r->unk_12;
}

extern "C" s32 MuseumInfoPoint_GetItemList(Rec *r) {
    return r->unk_14;
}

extern "C" u32 MuseumInfoPoint_GetItemCount(Rec *r) {
    return r->unk_18;
}

extern "C" MuseumRoom *MuseumRoom_Create() {
    return new MuseumRoom;
}

MuseumRoom::MuseumRoom() {}

MuseumRoom::~MuseumRoom() {}

BOOL MuseumRoom::vfunc_00() {
    spawnInfoPoints();
    setupExhibits();
    return TRUE;
}

BOOL MuseumRoom::setupExhibits() {
    return TRUE;
}

BOOL MuseumRoom::onExecute() {
    return TRUE;
}

void MuseumRoom::spawnInfoPoints() {
    s32 k = func_020b50e8();
    u32 i;
    for (i = 0; i < 7; i++) {
        const Unk_ov004_0223dd88_Tbl *e = &sMuseumInfoPointsByScene[i];
        if (k == e->unk_00) {
            u32 j, n;
            j = 0;
            n = e->unk_08;
            for (; j < n; j++) {
                Rec *rec = &e->unk_04[j];
                u32 a = MuseumInfoPoint_GetKind(rec);
                void *b = MuseumInfoPoint_GetPos(rec);
                s32 c = MuseumInfoPoint_GetAngle(rec);
                s32 d = MuseumInfoPoint_GetArc(rec);
                s32 f = MuseumInfoPoint_GetMessage(rec);
                s32 g = MuseumInfoPoint_GetItemList(rec);
                MuseumExhibitInfo_Spawn(a, b, c, d, f, g, MuseumInfoPoint_GetItemCount(rec));
            }
            break;
        }
    }
}

extern "C" MuseumFossilRoom *MuseumFossilRoom_Create() {
    return new MuseumFossilRoom;
}

MuseumFossilRoom::MuseumFossilRoom() {}

MuseumFossilRoom::~MuseumFossilRoom() {}

BOOL MuseumFossilRoom::setupExhibits() {
    s32 y, x;
    void *m = gSceneBlockMap;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u16 *p = (u16 *)BlockMap_GetItemPtr(m, 0, 0, x, y, 0);
            if (p != NULL) {
                BOOL k = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    k = TRUE;
                }
                if (k) {
                    BOOL k2 = FALSE;
                    if (data_021ed0a0.isDonated(p)) {
                        k2 = TRUE;
                    }
                    if (!k2) {
                        static ItemId sa(0x4a54);
                        static ItemId sb(0xfff1);
                        s32 w = Ftr_GetUnk05(p);
                        u16 v = 0xfff1;
                        if (w == 0) {
                            v = sa.v;
                        } else {
                            v = sb.v;
                        }
                        BlockMap_SetItem(m, &v, 0, 0, x, y, 0);
                    }
                }
            }
        }
    }
    return TRUE;
}

extern "C" MuseumRoomUnk53 *MuseumRoomUnk53_Create() {
    return new MuseumRoomUnk53;
}

MuseumRoomUnk53::MuseumRoomUnk53() {}

MuseumRoomUnk53::~MuseumRoomUnk53() {}

BOOL MuseumRoomUnk53::setupExhibits() {
    return TRUE;
}

const u8 data_ov004_022440f8[1] = {0x5};

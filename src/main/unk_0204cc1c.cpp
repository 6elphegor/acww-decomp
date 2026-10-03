#include "types.h"

#include "Unk_020d8c7c.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4 {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
struct Unk_020b5350_Info {
    u32 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};
}

extern "C" void func_0204c6a4(Unk_0204da0c_Map *p);

// ---- Unk_020da3d4 ----
class Unk_020da3d4 : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~Unk_020da3d4();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *unk_54;
    /* 0x58 */ s32 unk_58;

    s32 func_0204c5c0(void *heap);
    void func_0204c684(u32 *out, s32 n);
    void func_0204cb28(u32 v, s32 idx);
    void func_0204cb3c(void *heap);
    void func_0204cb8c(void *heap);
    u32 *func_0204c9e8(u32 *src, s32 n, void *heap);
    u32 func_0204cab4(u32 v, s32 idx, void *heap);
};

struct Unk_0204cf2c_Ent {
    u16 *data;
    s32 count;
};

struct Unk_0204cd00_Glyph {
    u16 v;
    u8 x;
    u8 y;
};

struct Unk_020ca2f4_Ent {
    u32 a;
    u32 b;
};

struct Unk_0204d0f4_V3 {
    s32 x, y, z;
};

struct Unk_0204d0f4_Info {
    u32 a;
    u32 b;
    u32 c;
    u32 d;
};

struct Unk_0204d0a4 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_0204d560_Vec { s32 x, y, z; };

struct ItemId {
    u16 v;
    ItemId();
    ~ItemId();
};

struct Unk_0204dcf0 {
    ItemId e[0x100];
    Unk_0204dcf0();
    ~Unk_0204dcf0();
};

struct Unk_0204da18 {
    u8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    u32 func_0204da18();
    void func_0204da24();
    void func_0204dab4();
    void func_0204db08(void *heap);
    BOOL func_0204db24(void *heap);
    void func_0204dc9c();
};

extern "C" {
struct Unk_0204d920_Pad { s32 v[4]; Unk_0204d920_Pad() {} ~Unk_0204d920_Pad() {} };
}

struct Unk_0204db24_L { volatile s32 xy[2]; Unk_0204d560_Vec v, w; };

struct Unk_0204dd20_Obj {
    u8 pad[0x2224];
    u8 f : 2;
};

struct Unk_0204debc_Pos {
    s32 x, y;
};

struct Unk_0204debc_Entry {
    u32 v;
    void *a;
    u32 z;
    void *b;
};

struct Unk_0203745c {
    u8 data[0x20];
    Unk_0203745c();
    ~Unk_0203745c();
};

struct Unk_0204e1a8_Out {
    s32 v[2];
};

struct Unk_0204e1a8_Vec {
    s32 x, y, z;
};

struct Unk_0204e1a8_Loc {
    volatile s32 x, y;
    Unk_0204e1a8_Vec v;
};

struct Unk_020e3dcc {
    u8 data[4];
    Unk_020e3dcc();
    ~Unk_020e3dcc();
};

class TownMap {
public:
    u8 unk_00[0x24];
    Unk_0204dcf0 unk_24[16];
    Unk_0203745c unk_2024[16];
    u8 unk_2224_lo : 2;
    u8 unk_2224_hi : 6;

    TownMap();
    ~TownMap();

    void *func_0204debc(s32 heap);
    void func_0204df30();
    u32 func_0204df64();
    BOOL func_0204df74(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in);
    BOOL func_0204dfa0(s32 x, s32 y);
    void *func_0204dfb8(Unk_0204debc_Pos *in);
    void *func_0204dff8(Unk_0204debc_Pos *in);
    void func_0204e038();
    BOOL func_0204e114(u16 *a, s32 x, s32 y, u8 flag);
    BOOL func_0204e51c(u16 *a, s32 x, s32 y);
    BOOL func_0204e49c(s32 x, s32 y, u16 *p);
    BOOL func_0204e56c(u16 *a, u16 *b, u16 *c, s32 x, s32 y);
    BOOL func_0204e56c(u16 *a, u16 *b, u16 *c, Unk_0204debc_Pos pos);
};

class Unk_0204e2f0 {
public:
    void *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;

    BOOL func_0204e1a8(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap);
    void func_0204e2cc(s32 heap);
    void func_0204e2f0();
    s32 func_0204e300(s32 a, s32 b);
    void func_0204e328(void *a);
    s32 func_0204e350(s32 a, s32 b);
    s32 func_0204e378(s32 a, s32 b);
    s32 func_0204e3a0(s32 a, s32 b);
    s32 func_0204e3c8(s32 a, s32 b);
    s32 func_0204e3f0(s32 a, s32 b);
    s32 func_0204e418(s32 a, s32 b);
    void func_0204e440(s32 a, s32 b, s32 c, s32 d);
    s32 func_0204e474(s32 a, s32 b);
};

struct Unk_0204e858_Vec {
    s32 x, y, z;
};

struct Unk_0204e858_Cell {
    u8 pad_00[0x24];
    u16 *unk_24;
};

struct Unk_0204e858_Grid {
    Unk_0204e858_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0204ee94 {
    u32 unk_00;
    u32 unk_04[2];
    u32 unk_0c;
    Unk_0204ee94();
};

struct OverlaySlot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u32 unk_04;
    u32 unk_08;
};

extern OverlaySlot sOverlaySlots[];

namespace Unk_0204eba0_Ns {
extern "C" u16 *func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
}

namespace Unk_0204eee4_Ns {
extern "C" s32 OverlayMgr_UnloadSlot(OverlaySlot *e);
}

// extern declarations
extern "C" {
extern char data_020da41c[];
extern char data_020da42c[];
extern char data_020da43c[];
extern char data_020da44c[];
extern char data_020da45c[];
extern char data_020da470[];
extern char data_020da484[];
extern char data_020da498[];
extern Unk_0204da18 *data_021c47c8;
extern Unk_0204cf2c_Ent *data_021c47d0;
extern Unk_0204d0a4 *data_021c47d4;
extern Unk_0204d0a4 *data_021c47e8[5];
extern u16 data_020ca2e8[];
extern u8 data_020e416c;
extern void *gCurrentHeap;
extern void *data_021c47c4;
extern u32 data_021e58a8[];
extern u32 data_021e3680[];
s32 func_0204e300(void *m, s32 x, s32 y);
void func_0209cf88(void *p);
s32 func_0209cdc0(void *a, void *b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_0204c21c(void *p);
void func_0204c20c(void *p);
void func_0204c1d8(void *p);
void func_0204c22c(void *p, void *q);
void func_0204c290(void *p);
void func_02045e34();
s32 func_02063b8c(s32 a);
BOOL Item_IsTreeStage0(u16 *p);
s32 func_0205b470();
s32 func_0204e2cc(void *a, void *heap);
void func_0204e2f0();
s32 func_0204e1a8(void *a, void *b, void *c, void *heap);
void Heap_Free(void *heap, void *p);
void *Heap_Alloc(void *heap, s32 size);
Unk_020b5350_Info *func_020b5350();
s32 func_020b52d0();
u32 func_020603c8(void *p);
u32 _ZN9HouseData13func_020604f8EiPv(void *p, u32 a, void *heap);
s32 func_020b50e8();
s32 func_020b52f8();
u32 func_020b5328();
s32 func_020b51a4();
u32 func_020b51d4();
s32 func_020b530c();
void *_ZN7TownMap13func_0204debcEi(void *p, void *heap);
extern const Unk_020ca2f4_Ent data_020ca2f4[4];
extern u32 data_021dfd8c;
extern u32 data_021c621c;
extern u32 data_020c8cbc;
extern u32 data_020c8cb8;
void *Heap_AllocAligned(void *heap, s32 size, s32 align);
void *Heap_AllocTail(void *heap, s32 size);
void func_020e885c(u32 v);
u32 func_0207bf60(u32 *a, s32 b);
s32 _ZN12Unk_0207e94013func_0207f07cEPiS0_(u32 h, s32 *a, s32 *b);
u32 _ZN12Unk_0207e94013func_0207f04cEv(u32 h);
void func_0207e568(u32 h, void *p);
void File_ReadRangeByPath(u32 a, void *dst, s32 size, s32 off);
void *File_LoadAlloc(u32 a, void *heap, s32 b, s32 *sizeOut);
u32 func_020375dc(s32 a, void *heap, s32 b);
void func_020302f8(u32 h);
void func_02030528(u32 w, u32 h, u32 c, u32 d);
u32 func_02036c58();
u32 _ZN12Unk_02036cec13func_02036eb8Ei(u32 a, u32 b);
void _ZN12Unk_0203761813func_02037674EiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(u32 h, u32 a, Unk_0204d0f4_V3 *v, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h2, u32 i);
u32 _ZN12Unk_020375d013func_020375d0Ev(u32 h);
u32 func_02036f24(u32 a, u32 b);
s32 _ZN12Unk_0203761813func_02037618EP16Unk_02037618_Subjj(u32 h, s32 a, u32 b, u32 c);
u32 _ZN9HouseData13func_020603f4Ei(u32 *a);
void _ZN12Unk_020375d013func_020375d4Ej(u32 h, s32 i);
void func_0205b7b0();
void func_0205b7cc();
u32 func_020b533c(u32 v);
s32 func_0206057c();
u16 *_ZN7TownMap13func_0204dff8EP16Unk_0204debc_Pos(void *t, s32 *idx);
void _ZN7TownMap13func_0204e038Ev(void *t);
void func_0209b598(void *t);
extern void *data_021c6198;
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 _ZN7TownMap13func_0204e49cEiiPt(u32 a, u32 b, u32 c, u32 d);
s32 _ZN7TownMap13func_0204e51cEPtii(u32 a, u32 b, u32 c, u32 d);
void *StrBSize_Get(u16 *t);
u32 _ZN12Unk_020b28ac13func_020b29e4Ev(void *h);
s32 _ZN12Unk_020b28ac13func_020b2958EPiS0_S0_j(void *h, Unk_0204d560_Vec *a, Unk_0204d560_Vec *b, Unk_0204d560_Vec *c, u32 i);
s32 FX_Div(s32 a, s32 b);
s32 func_02030814(s32 a);
void func_02037638(void *a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 *i, s32 j);
s32 func_0205b7fc();
void func_0205b818();
void func_02004b60();
void func_0203442c();
void func_02030598(s32 v);
s32 func_02030164(s32 a, s32 b);
s32 func_02031154(s32 a, s32 b);
s32 func_020311ec(s32 a, s32 b);
s32 func_02031218(s32 a, s32 b);
s32 func_020311c0(s32 a, s32 b);
s32 func_02031260(s32 a, s32 b);
s32 func_0203123c(s32 a, s32 b);
s32 func_02031284(s32 a, s32 b);
u32 _ZN12Unk_02036cec13func_02036d54Ei(u32 a, u32 b);
u32 func_020b5bbc();
void _ZN12Unk_020af53c13func_020af694Ev(const char *s);
void func_0203744c(void *p);
BOOL Item_IsNormalItem(u16 *p);
void func_02039e6c(u16 v);
s32 func_020b2768();
BOOL func_ov003_02218e2c(s32 a, void *b, s32 x, s32 y, s32 f);
u32 _ZN12Unk_020b28ac13func_020b2b0cEv(void *h);
u32 _ZN12Unk_020b28ac13func_020b2b80Ev(void *h);
BOOL _ZN12Unk_020b28ac13func_020b2a5cEPiS0_j(void *h, s32 *dx, s32 *dy, u32 i);
BOOL _ZN12Unk_020b28ac13func_020b2aacEPiS0_j(void *h, s32 *dx, s32 *dy, u32 i);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
BOOL Item_IsSnowman(u16 *p);
s32 Item_GetSnowmanIndex(u16 *p);
s32 Item_GetStumpSize(u16 *p);
void _ZN12Unk_020af53c13func_020af64cEj(void *obj, s32 v);
extern char data_021ed2e6[];
extern void *data_020cbb18;
BOOL func_0204f0f4(u8 v);
void Fatal_Trap();
void OverlayMgr_UnloadSlot(OverlaySlot *e);
void OverlayMgr_LoadSlot(OverlaySlot *e, u32 id);
void OverlayMgr_UnloadOverlay(u32 id);
void OverlayMgr_LoadOverlay(u32 id);
void OverlayMgr_GetInfo(void *p, u32 id);
void File_UnloadOverlay(u32 id);
void File_LoadOverlay(u32 id);
void *FS_LoadOverlayInfo(void *p, s32 v, u32 n);
void FS_GetOverlayFileID(void *a, void *b);
s32 func_02037478(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 func_02037494(Unk_0204e858_Cell *c, s32 a, s32 b);
s32 func_020374b0(Unk_0204e858_Cell *c, s32 a);
s32 func_020374cc(Unk_0204e858_Cell *c, s32 a);
s32 func_020374e8(Unk_0204e858_Cell *c);
s32 func_020374f4(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, s32 e, s32 f);
s32 func_02037558(Unk_0204e858_Cell *c, s32 a, s32 b, u8 d);
void *func_02037590(Unk_0204e858_Cell *c, s32 a, s32 b, s32 d, u8 e);
void func_0209cfb8(void *p);
void func_0209cf18(void *p);
u8 func_0204f084(u8 r);
u32 func_0204f100(u32 r);
void func_0204f178(void *a, void *b, s32 c, u32 d, u32 e);
}

// own functions
extern "C" {
s32 func_0204cc1c(s32 a, s32 b, s32 c);
void *func_0204cc48(void *a, s32 *b, s32 c, void *d);
void *func_0204cc90(void *a, s32 *b, s32 c, s32 d, void *heap);
BOOL func_0204cd00(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap);
u16 *func_0204cda0(u16 *dst, s32 b, void *heap, s32 d);
BOOL func_0204cdf0(u16 *dst, s32 i, s32 j, void *heap);
BOOL func_0204ce20(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n);
u16 *func_0204ce50(void *heap, s32 align);
BOOL func_0204ce80(s32 a, s32 b);
s32 func_0204cea8(Unk_0204cf2c_Ent *t, s32 i, s32 j);
s32 func_0204cedc(Unk_0204cf2c_Ent *t, s32 i, s32 j);
BOOL func_0204cf1c(Unk_0204cf2c_Ent *t, s32 i);
void func_0204cf2c(Unk_0204cf2c_Ent *t, void *heap);
BOOL func_0204cf58(Unk_0204cf2c_Ent *t, void *heap);
void func_0204cfa4(void *heap);
BOOL func_0204cfd0(void *heap);
void func_0204d024(Unk_0204cf2c_Ent *t);
void func_0204d040(void *heap);
void func_0204d06c(Unk_0204d0a4 *p, void *heap);
Unk_0204d0a4 *func_0204d0a4(u32 a, void *heap);
BOOL func_0204d0f4(Unk_0204d0a4 *p, u32 a, void *heap);
BOOL func_0204d1dc(u16 *dst, u32 b, void *heap);
Unk_0204d0f4_Info *func_0204d22c(u16 *dst, u32 b, void *heap);
void func_0204d280(Unk_0204d0a4 *p);
void func_0204d294(Unk_0204d0a4 *p, void *heap);
BOOL func_0204d2b0(Unk_0204d0a4 *p, s32 i, void *heap);
void func_0204d370(Unk_0204d0a4 *p);
void func_0204d37c(Unk_0204d0a4 *p);
void func_0204d3d8();
void func_0204d40c(Unk_0204d0a4 *p, s32 i);
void func_0204d42c();
void func_0204d454(void *heap);
BOOL func_0204d498(void *heap);
Unk_0204d0a4 *func_0204d500(s32 a);
Unk_0204d0a4 *func_0204d528(s32 i);
void func_0204d54c(Unk_0204d0a4 *p);
BOOL func_0204d560(void *a, void *b);
BOOL func_0204d5d8(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL func_0204d684(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL func_0204d700(void *a, s32 *pos, s32 *p3, s32 *p4);
BOOL func_0204d780(void *a, s32 *pos, s32 *p3, s32 *p4);
void func_0204d7fc(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void func_0204d920(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8);
void func_0204d9b4(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f);
s32 func_0204d9ec(u32 a, u32 b, u32 c, u32 d);
s32 func_0204d9fc(u32 a, u32 b, u32 c, u32 d);
Unk_0204da18 *func_0204da0c();
s32 func_0204dc1c(void *heap);
BOOL func_0204dc54(void *heap);
void func_0204dcb0();
void func_0204dcb4(u16 *p);
u8 *func_0204dd1c(void *p);
void func_0204dd20(Unk_0204dd20_Obj *o, s32 arg);
void func_0204dd74(void *ov, s32 arg);
BOOL func_0204ddd4(void *o);
BOOL func_0204de4c(void *o);
s32 func_0204e858(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v);
s32 func_0204e88c(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 func_0204e8b0(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 func_0204e914(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 func_0204e938(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
s32 func_0204e978(Unk_0204e858_Grid *g, s32 x, s32 z);
s32 func_0204e99c(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly);
BOOL func_0204e9dc(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
BOOL func_0204ea88(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8);
void *func_0204eb30(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d);
void *func_0204eb5c(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d);
u16 *func_0204eba0(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v, s32 layer);
void func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer);
void *func_0204ec14(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a);
s32 func_0204ec50(Unk_0204e858_Grid *g, s32 hx, s32 hy);
Unk_0204e858_Cell *func_0204ec8c(Unk_0204e858_Grid *g, s32 filter);
Unk_0204e858_Cell *func_0204ecfc(Unk_0204e858_Grid *g, s32 filter);
void func_0204ed70(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d);
void func_0204ed8c(Unk_0204e858_Vec *v, s32 x, s32 z);
void func_0204eda4(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d);
void func_0204edd8(Unk_0204e858_Vec *dst, Unk_0204e858_Vec *src);
void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
void func_0204ee10(s32 *ox, s32 *oz, Unk_0204e858_Vec *v);
void func_0204ee20(s32 *a, s32 *c, Unk_0204e858_Vec *v);
void func_0204ee38(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v);
Unk_0204ee94 *func_0204ee64(s32 n, void *heap);
Unk_0204ee94::Unk_0204ee94();
void func_0204eeb0();
}

namespace Ns_0204c318 {
extern "C" {
Unk_0204da0c_Map *func_0204da0c();
u16 *func_0204ebd8(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
s32 func_0204eb30(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
s32 func_0204e914(Unk_0204da0c_Map *m, s32 x, s32 y);
void *func_0204ce50(void *heap, s32 n);
void *func_0204d22c(void *a, u32 b, void *heap);
void *func_0204ee64(s32 n, void *heap);
s32 func_0204ce80(s32 a, u32 b);
u32 func_0204cda0(s32 a, u32 b, void *heap, s32 n);
Unk_0204da0c_Map *func_0204d500(s32 a);
s32 func_0204cc48(void *a, s32 b, s32 c, s32 d);
}
}

namespace Ns_0204cc48 {
extern "C" {
extern u32 data_021e58a8;
void func_0204edf8(u32 *a, u32 *b, u32 w, u32 h, u32 c, u32 d);
Unk_0204d0f4_Info *func_0204ee64(s32 a, void *heap);
void *_ZN9HouseData13func_020604f8EiPv(u32 *a, s32 b, void *heap);
}
}

namespace Ns_0204d560 {
extern "C" {
void func_0204cdf0(u16 *t, s32 a, s32 b, s32 c);
u32 func_02063b8c(u32 a);
extern u8 data_021e3680[];
extern s32 data_020c8cbc;
extern s32 data_020c8cb8;
s32 func_0204e9dc(void *m, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g, s32 h);
void func_0204ed8c(void *p, s32 a, s32 b);
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
u32 func_020302f8(s32 a);
void func_02030528(s32 a, s32 b, s32 c, s32 d);
void func_020e885c(void *p);
void *Heap_Alloc(void *heap, u32 sz);
u32 _ZN12Unk_020375d013func_020375d0Ev(void *p);
void _ZN12Unk_020375d013func_020375d4Ej(void *p, u32 v);
void *func_020375dc(u32 a, u32 b, u32 c);
void func_02036c58(void *p);
s32 func_02036f24(u32 a, void *b);
void _ZN12Unk_0203761813func_02037618EP16Unk_02037618_Subjj(void *c, s32 a, s32 b, s32 d);
s32 *_ZN7TownMap13func_0204debcEi(void *a, void *b);
}
}

namespace Ns_0204debc {
extern "C" {
void *func_020375dc(s32 count, s32 heap, s32 align);
void func_02030528(s32 w, s32 h, void *obj, s32 v);
s32 func_020302f8(s32 v);
void Heap_Free(s32 heap, void *p);
void func_02037638(void *a, u32 b, void *c, void *d, u32 e, void *f, u32 g, u32 h, void *i, u32 j);
extern s32 data_020c8cbc, data_020c8cb8;
void *func_0204ee64(s32 n, s32 heap);
void func_0204dcb4(void *p);
void *func_0204dcb0(void *p);
void *func_0204ebd8(void *self, s32 x, s32 y, s32 sx, s32 sy, u32 flag);
void func_0204ee10(s32 *out1, s32 *out2, void *p);
void func_0204eb30(void *self, u16 *p, s32 x, s32 y, u32 flag);
void func_0204e914(void *self, s32 x, s32 y);
}
}

namespace Ns_0204e858 {
extern "C" {
void *Heap_AllocTail(void *heap, u32 size);
}
}

static inline BOOL Unk_0204c5c0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_0204cab4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

// ---- func_0204c318 ----
static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

// ---- func_0204c6a4 ----
static inline BOOL Unk_0204c6a4_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}

static inline BOOL Unk_0204cd00_R(Unk_0204cd00_Glyph *g) {
    u32 y = g->y;
    u32 x = g->x;
    BOOL r = FALSE;
    if (x < 0x10 && y < 0x10) r = TRUE;
    return r;
}

static inline BOOL Unk_0204d560_Chk(u16 *t) {
    if (Item_IsFurniture(t)) {
        t[1] = 0xfff1;
        return Item_GetFurnitureIndex(t) == Item_GetFurnitureIndex(t + 1) ? TRUE : FALSE;
    } else {
        return t[0] == 0xfff1 ? TRUE : FALSE;
    }
}

static inline BOOL Unk_0204e51c_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

inline void *operator new(unsigned long, void *p) {
    return p;
}

static inline Unk_0204e858_Cell *Unk_0204e858_GetCell(Unk_0204e858_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04 && y < g->unk_08 && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04 + x];
    }
    return NULL;
}

static inline BOOL Unk_0204e8b0_Bit(u16 *m, u32 x, u32 y) {
    BOOL r = FALSE;
    if (x >= 16 || y >= 16) {
    } else {
        r = TRUE;
    }
    if (r) {
        if (x < 16) {
            u32 v = m[y];
            r = TRUE;
            if ((v & (r << x)) != 0) {
                return r;
            }
        }
        r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

extern "C" void func_0204eeb0() {}

extern "C" Unk_0204ee94::Unk_0204ee94() {
    u32 *p = unk_04;
    unk_00 = 0x102a;
    for (s32 i = 0; i < 2; i++) {
        *p++ = 0;
    }
    unk_0c = 0;
}

extern "C" Unk_0204ee94 *func_0204ee64(s32 n, void *heap) {
    Unk_0204ee94 *p = (Unk_0204ee94 *)Ns_0204e858::Heap_AllocTail(heap, n * 16);
    if (p != NULL) {
        for (s32 i = 0; i < n; i++) {
            new (&p[i]) Unk_0204ee94;
        }
    }
    return p;
}

extern "C" void func_0204ee38(s32 *ax, s32 *az, s32 *cx, s32 *cz, Unk_0204e858_Vec *v) {
    *ax = v->x >> 17;
    *az = v->z >> 17;
    *cx = (v->x >> 13) & 15;
    *cz = (v->z >> 13) & 15;
}

extern "C" void func_0204ee20(s32 *a, s32 *c, Unk_0204e858_Vec *v) {
    func_0204ee38(a, a + 1, c, c + 1, v);
}

extern "C" void func_0204ee10(s32 *ox, s32 *oz, Unk_0204e858_Vec *v) {
    *ox = v->x >> 13;
    *oz = v->z >> 13;
}

extern "C" void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d) {
    *ox = (a << 4) + c;
    *oz = (b << 4) + d;
}

extern "C" void func_0204edd8(Unk_0204e858_Vec *dst, Unk_0204e858_Vec *src) {
    func_0204ed8c(dst, src->x >> 13, src->z >> 13);
    dst->y = src->y;
}

extern "C" void func_0204eda4(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, z = 0;
    func_0204edf8(&x, &z, a, b, c, d);
    func_0204ed8c(v, x, z);
}

extern "C" void func_0204ed8c(Unk_0204e858_Vec *v, s32 x, s32 z) {
    v->x = (x << 13) + 0x1000;
    v->z = (z << 13) + 0x1000;
    v->y = 0;
}

extern "C" void func_0204ed70(Unk_0204e858_Vec *v, s32 a, s32 b, s32 c, s32 d) {
    v->x = a << 17;
    v->z = b << 17;
    v->x = v->x + (c << 13);
    v->z = v->z + (d << 13);
}

extern "C" Unk_0204e858_Cell *func_0204ecfc(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    if (filter != 0) {
        u32 *sz = &g->unk_04;
        s32 w = sz[0];
        s32 h = sz[1];
        s32 x0 = 0;
        Unk_0204e858_Cell *nullc = NULL;
        for (y = 0; y < h; y++) {
            for (x = x0; x < w; x++) {
                Unk_0204e858_Cell *cell;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    cell = &g->unk_00[y * g->unk_04 + x];
                } else {
                    cell = nullc;
                }
                if (cell != NULL && func_020374cc(cell, filter) != 0) {
                    return cell;
                }
            }
        }
    }
    return NULL;
}

extern "C" Unk_0204e858_Cell *func_0204ec8c(Unk_0204e858_Grid *g, s32 filter) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && func_020374b0(cell, filter) != 0) {
                return cell;
            }
        }
    }
    return NULL;
}

extern "C" s32 func_0204ec50(Unk_0204e858_Grid *g, s32 hx, s32 hy) {
    s32 r = 0;
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        r = func_020374e8(cell);
    }
    return r;
}

extern "C" void *func_0204ec14(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 a) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_020374cc(cell, a);
    }
    return (void *)r;
}

extern "C" void func_0204ebd8(Unk_0204e858_Grid *g, s32 hx, s32 hy, s32 lx, s32 ly, u8 layer) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    if (cell != NULL) {
        func_02037558(cell, lx, ly, layer);
    }
}

extern "C" u16 *func_0204eba0(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v, s32 layer) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    func_0204ee20(a, c, v);
    return Unk_0204eba0_Ns::func_0204ebd8(g, a[0], a[1], c[0], c[1], layer);
}

extern "C" void *func_0204eb5c(Unk_0204e858_Grid *g, s32 a, u32 hx, u32 hy, u32 lx, u32 ly, u8 d) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    void *r = NULL;
    if (cell != NULL) {
        r = func_02037590(cell, a, lx, ly, d);
    }
    return r;
}

extern "C" void *func_0204eb30(Unk_0204e858_Grid *g, s32 a, s32 x, s32 z, u8 d) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204eb5c(g, a, hx, hz, x - (hx << 4), z - (hz << 4), d);
}

extern "C" BOOL func_0204ea88(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL && func_020374cc(cell, filter) != 0) {
                if (func_020374f4(cell, a3, p4, p5, p6, p8) != 0) {
                    *outx = x;
                    *outz = y;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_0204e9dc(Unk_0204e858_Grid *g, s32 *outx, s32 *outz, s32 a3, s32 p4, s32 p5, s32 p6, s32 filter, s32 p8) {
    s32 x, y;
    u32 *sz = &g->unk_04;
    s32 w = sz[0];
    s32 h = sz[1];
    s32 x0 = 0;
    Unk_0204e858_Cell *nullc = NULL;
    for (y = 0; y < h; y++) {
        for (x = x0; x < w; x++) {
            Unk_0204e858_Cell *cell;
            if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                cell = &g->unk_00[y * g->unk_04 + x];
            } else {
                cell = nullc;
            }
            if (cell != NULL) {
                if (filter == 0 || func_020374b0(cell, filter) != 0) {
                    if (func_020374f4(cell, a3, p4, p5, p6, p8) != 0) {
                        *outx = x;
                        *outz = y;
                        return TRUE;
                    }
                }
            }
        }
    }
    return FALSE;
}

extern "C" s32 func_0204e99c(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_02037494(cell, lx, ly);
    }
    return r;
}

extern "C" s32 func_0204e978(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e99c(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 func_0204e938(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    s32 r = 0;
    if (cell != NULL) {
        r = func_02037478(cell, lx, ly);
    }
    return r;
}

extern "C" s32 func_0204e914(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e938(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 func_0204e8b0(Unk_0204e858_Grid *g, u32 hx, u32 hy, u32 lx, u32 ly) {
    Unk_0204e858_Cell *cell = Unk_0204e858_GetCell(g, hx, hy);
    BOOL r = FALSE;
    if (cell != NULL && cell->unk_24 != NULL) {
        r = Unk_0204e8b0_Bit(cell->unk_24, lx, ly);
    }
    return r;
}

extern "C" s32 func_0204e88c(Unk_0204e858_Grid *g, s32 x, s32 z) {
    s32 hx = x >> 4;
    s32 hz = z >> 4;
    return func_0204e8b0(g, hx, hz, x - (hx << 4), z - (hz << 4));
}

extern "C" s32 func_0204e858(Unk_0204e858_Grid *g, Unk_0204e858_Vec *v) {
    s32 a[2], c[2];
    a[0] = 0;
    a[1] = 0;
    c[0] = 0;
    c[1] = 0;
    func_0204ee20(a, c, v);
    return func_0204e8b0(g, a[0], a[1], c[0], c[1]);
}

BOOL TownMap::func_0204e56c(u16 *a, u16 *b, u16 *c, volatile s32 x, volatile s32 y) {
    BOOL result;
    u32 cnt, cnt2;
    BOOL f9, f8, f7, f6, f5, f4, f3, f2, f1;
    s32 qy;
    s32 gx, gy;
    void *g;
    s32 py;
    u32 j;
    void *h;
    u16 tile, empty, key;
    s32 dx, dy;
    u32 i;
    s32 px, qx;
    u16 *p, *cell, *cell2;
    s32 hx, hy, tx, ty;
    BOOL ok;
    u32 v;
    h = NULL;
    result = FALSE;
    tx = x;
    ty = y;
    hx = tx >> 4;
    hy = ty >> 4;
    p = (u16 *)Ns_0204debc::func_0204ebd8(this, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
    if (p) {
        tile = *p;
        if (Item_IsNormalItem(&tile) || Item_IsFurniture(&tile)) func_02039e6c(tile);
    }
    if (Unk_0204e51c_InRange(b, 0x5000, 0x5021)) h = StrBSize_Get(b);
    if (h) {
        cnt = _ZN12Unk_020b28ac13func_020b2b0cEv(h);
        i = 0;
        gx = x;
        gy = y;
        g = data_020cbb18;
        for (; i < cnt; i++) {
            if (_ZN12Unk_020b28ac13func_020b2a5cEPiS0_j(h, &dx, &dy, i)) {
                px = gx + dx;
                py = gy + dy;
                hx = px >> 4;
                hy = py >> 4;
                cell = (u16 *)Ns_0204debc::func_0204ebd8(this, hx, hy, px - (hx << 4), py - (hy << 4), 0);
                if (cell) {
                    if (Item_IsFurniture(cell) || Item_IsNormalItem(cell)) {
                        if (!_ZN12Unk_020cbb1813func_02072e44Ev(g)) func_02039e6c(*cell);
                    } else if (Item_IsSnowman(cell)) {
                        _ZN12Unk_020af53c13func_020af64cEj(data_021ed2e6, Item_GetSnowmanIndex(cell));
                    }
                }
                Ns_0204debc::func_0204eb30(this, c, px, py, 0);
                Ns_0204debc::func_0204e914(this, px, py);
            }
        }
        Ns_0204debc::func_0204eb30(this, a, x, y, 0);
        if (Item_IsFurniture(c)) {
            key = 0xf030;
            ok = Item_GetFurnitureIndex(c) == Item_GetFurnitureIndex(&key);
        } else {
            ok = *c == 0xf030;
        }
        if (ok) {
            cnt2 = _ZN12Unk_020b28ac13func_020b2b80Ev(h);
            for (j = 0; j < cnt2; j++) {
                if (_ZN12Unk_020b28ac13func_020b2aacEPiS0_j(h, &dx, &dy, j)) {
                    qx = gx + dx;
                    qy = gy + dy;
                    hx = qx >> 4;
                    hy = qy >> 4;
                    cell2 = (u16 *)Ns_0204debc::func_0204ebd8(this, hx, hy, qx - (hx << 4), qy - (hy << 4), 0);
                    if (cell2) {
                        f9 = TRUE; f8 = TRUE; f7 = TRUE; f6 = TRUE; f5 = TRUE; f4 = TRUE; f3 = TRUE; f2 = TRUE; f1 = FALSE;
                        v = *cell2;
                        if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
                        if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
                        if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
                        if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
                        if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
                        if (!f5 && !(v == 0x69)) f6 = FALSE;
                        if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
                        if (!f7 && !(v == 0x6d)) f8 = FALSE;
                        if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
                        if ((f9 && !Item_IsTreeStage0(cell2)) || Item_GetStumpSize(cell2) != -1) {
                            empty = 0xfff1;
                            Ns_0204debc::func_0204eb30(this, &empty, qx, qy, 0);
                        }
                    }
                }
            }
        }
        result = TRUE;
    }
    return result;
}

BOOL TownMap::func_0204e51c(u16 *a, s32 x, s32 y) {
    BOOL r = FALSE;
    if (Unk_0204e51c_InRange(a, 0x5000, 0x5021)) {
        u16 t = 0xf030;
        r = func_0204e56c(a, a, &t, x, y);
    }
    return r;
}

BOOL TownMap::func_0204e49c(s32 x, s32 y, u16 *p) {
    u16 t[2];
    s32 hx = x >> 4, hy = y >> 4;
    u16 *c = (u16 *)Ns_0204debc::func_0204ebd8(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    BOOL r = FALSE;
    if (c) {
        if (Unk_0204e51c_InRange(c, 0x5000, 0x5021)) {
            t[0] = 0xfff1;
            if (p) t[0] = *p;
            t[1] = 0xfff1;
            r = func_0204e56c(t, c, &t[1], x, y);
        }
    }
    return r;
}

s32 Unk_0204e2f0::func_0204e474(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_02031284(a, b); 
    func_02030598(0); 
    return r; 
}

void Unk_0204e2f0::func_0204e440(s32 a, s32 b, s32 c, s32 d) {
    s32 x = 0, y = 0;
    func_0204edf8(&x, &y, a, b, c, d);
    func_0204e474(x, y);
}

s32 Unk_0204e2f0::func_0204e418(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_0203123c(a, b); 
    func_02030598(0); 
    return r; 
}

s32 Unk_0204e2f0::func_0204e3f0(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_02031260(a, b); 
    func_02030598(0); 
    return r; 
}

s32 Unk_0204e2f0::func_0204e3c8(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_020311c0(a, b); 
    func_02030598(0); 
    return r; 
}

s32 Unk_0204e2f0::func_0204e3a0(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_02031218(a, b); 
    func_02030598(0); 
    return r; 
}

s32 Unk_0204e2f0::func_0204e378(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_020311ec(a, b); 
    func_02030598(0); 
    return r; 
}

s32 Unk_0204e2f0::func_0204e350(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_02031154(a, b); 
    func_02030598(0); 
    return r; 
}

void Unk_0204e2f0::func_0204e328(void *a) {
    s32 x = 0, y = 0;
    Ns_0204debc::func_0204ee10(&x, &y, a);
    func_0204e350(x, y);
}

s32 Unk_0204e2f0::func_0204e300(s32 a, s32 b) { 
    func_02030598(unk_1c); 
    s32 r = func_02030164(a, b); 
    func_02030598(0); 
    return r; 
}

void Unk_0204e2f0::func_0204e2f0() {
    s32 z = 0;
    unk_04 = z;
    unk_08 = z;
    unk_0c = z;
    unk_10 = z;
    unk_00 = (void *)z;
    unk_1c = z;
}

void Unk_0204e2f0::func_0204e2cc(s32 heap) {
    if (unk_00) {
        Ns_0204debc::Heap_Free(heap, unk_00);
        unk_00 = NULL;
    }
    Ns_0204debc::func_020302f8(unk_1c);
}// Declarations for data defined further down (definition order sets the data layout)
extern Unk_0204da18 *data_021c47c8;
extern char data_020da498[];
extern Unk_0204d0a4 *data_021c47e8[5];
extern char data_020da470[];
extern char data_020da42c[];
extern Unk_0204cf2c_Ent *data_021c47d0;
extern const Unk_020ca2f4_Ent data_020ca2f4[4];
extern char data_020da484[];
extern Unk_0204d0a4 *data_021c47d4;
extern char data_020da43c[];
extern char data_020da41c[];
extern char data_020da44c[];
extern char data_020da45c[];// Declarations for data defined further down (definition order sets the data layout)
extern char data_020da498[];
extern Unk_0204cf2c_Ent *data_021c47d0;
extern char data_020da44c[];
extern Unk_0204da18 *data_021c47c8;
extern char data_020da41c[];
extern char data_020da42c[];
extern char data_020da484[];
extern Unk_0204d0a4 *data_021c47d4;
extern char data_020da43c[];
extern char data_020da45c[];
extern char data_020da470[];
extern Unk_0204d0a4 *data_021c47e8[5];
extern const Unk_020ca2f4_Ent data_020ca2f4[4];

char data_020da498[] = "fg_data/fo_h.bin";

Unk_0204cf2c_Ent *data_021c47d0;

char data_020da44c[] = "fg_data/nf.bin";

Unk_0204da18 *data_021c47c8;

char data_020da41c[] = "fg_data/fi.bin";

char data_020da42c[] = "fg_data/nr.bin";

char data_020da484[] = "fg_data/nr_h.bin";

Unk_0204d0a4 *data_021c47d4;

char data_020da43c[] = "fg_data/fo.bin";

char data_020da45c[] = "fg_data/fi_h.bin";

BOOL Unk_0204e2f0::func_0204e1a8(Unk_0204debc_Entry *e, Unk_0204e1a8_Out *sz, s32 heap) {
    s32 count = sz->v[0] * sz->v[1];
    BOOL r = FALSE;
    unk_1c = 0;
    if (unk_00 == NULL) unk_00 = Ns_0204debc::func_020375dc(count, heap, 4);
    if (unk_00) {
        Unk_0204e1a8_Loc l;
        u8 *buf;
        s32 zero = 0;
        l.x = zero;
        l.y = zero;
        l.v.x = zero;
        l.v.y = zero;
        l.v.z = zero;
        buf = (u8 *)unk_00;
        unk_04 = sz->v[0];
        unk_08 = sz->v[1];
        unk_14 = unk_04 * Ns_0204debc::data_020c8cbc;
        unk_18 = unk_08 * data_020c8cb8;
        func_0204edf8(&unk_0c, &unk_10, unk_04, unk_08, 0, 0);
        static Unk_020e3dcc obj;
        Ns_0204debc::func_02030528(unk_04, unk_08, &obj, unk_1c);
        for (l.y = 0; l.y < unk_08; l.y++) {
            for (l.x = 0; l.x < unk_04; l.x++) {
                Unk_0204e1a8_Vec w;
                l.v.x = l.x << 17;
                l.v.z = l.y << 17;
                w = l.v;
                u32 h = _ZN12Unk_02036cec13func_02036d54Ei(func_02036c58(), e->v);
                Ns_0204debc::func_02037638(buf, e->v, &w, e->a, e->z, e->b, h, 0, (void *)&l, 0);
                buf += 0x28;
                e++;
            }
        }
        r = TRUE;
    }
    return r;
}

BOOL TownMap::func_0204e114(u16 *a, s32 x, s32 y, u8 flag) {
    u16 tile;
    s32 hx = x >> 4, hy = y >> 4;
    u16 *p = (u16 *)Ns_0204debc::func_0204ebd8(this, hx, hy, x - (hx << 4), y - (hy << 4), 0);
    tile = 0xfff1;
    if (p) tile = *p;
    if (flag && func_020b2768()) {
        return func_ov003_02218e2c(func_020b2768(), a, x, y, 1);
    }
    if (func_0204e51c(a, x, y)) {
        if (Item_IsNormalItem(&tile) || Item_IsFurniture(&tile)) func_02039e6c(tile);
        return TRUE;
    }
    return FALSE;
}

TownMap::TownMap() {}

TownMap::~TownMap() {}

void TownMap::func_0204e038() {
    u8 *p = unk_00;
    Unk_0204dcf0 *a = unk_24;
    Unk_0203745c *b = unk_2024;
    s32 i, j;
    for (i = 0; i < 0x24; i++) *p++ = 0x86;
    for (j = 0; j < 16; j++) {
        Ns_0204debc::func_0204dcb4(a);
        func_0203744c(b);
        a++;
        b++;
    }
    unk_2224_lo = 0;
}

void *TownMap::func_0204dff8(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (func_0204df74(&a, &b)) {
        r = Ns_0204debc::func_0204dcb0((u8 *)this + 0x24 + a.y * 0x800 + a.x * 0x200);
    }
    return r;
}

void *TownMap::func_0204dfb8(Unk_0204debc_Pos *in) {
    void *r = NULL;
    Unk_0204debc_Pos a, b;
    a.x = 0;
    a.y = 0;
    b.x = in->x;
    b.y = in->y;
    if (func_0204df74(&a, &b)) {
        r = (u8 *)this + 0x2024 + a.y * 0x80 + a.x * 0x20;
    }
    return r;
}

BOOL TownMap::func_0204dfa0(s32 x, s32 y) {
    if (x > 0 && x < 5 && y > 0 && y < 5) return TRUE;
    return FALSE;
}

BOOL TownMap::func_0204df74(Unk_0204debc_Pos *out, Unk_0204debc_Pos *in) {
    BOOL r = FALSE;
    if (func_0204dfa0(in->x, in->y)) {
        out->x = in->x - 1;
        out->y = in->y - 1;
        r = TRUE;
    }
    return r;
}

u32 TownMap::func_0204df64() {
    return unk_2224_lo;
}

void TownMap::func_0204df30() {
    u32 v = func_020b5bbc();
    unk_2224_hi = v;
    _ZN12Unk_020af53c13func_020af694Ev(data_021ed2e6);
}

void *TownMap::func_0204debc(s32 heap) {
    volatile s32 zero0, zero1;
    Unk_0204debc_Pos pos;
    Unk_0204debc_Entry *r;
    s32 idx;
    pos.x = 0;
    pos.y = 0;
    r = (Unk_0204debc_Entry *)Ns_0204debc::func_0204ee64(0x24, heap);
    if (r) {
        idx = 0;
        pos.y = 0;
        zero0 = 0;
        zero1 = 0;
        for (; pos.y < 6; pos.y++) {
            for (pos.x = zero0; pos.x < 6; pos.x++) {
                Unk_0204debc_Entry *e = &r[idx];
                e->v = ((u8 *)this + pos.y * 6)[pos.x];
                e->a = func_0204dff8(&pos);
                e->z = zero1;
                e->b = func_0204dfb8(&pos);
                idx++;
            }
        }
    }
    return r;
}

extern "C" BOOL func_0204de4c(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = _ZN7TownMap13func_0204dff8EP16Unk_0204debc_Pos(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    if (*p == 0x500a) cnt++;
                }
            }
        }
    }
    if (cnt >= 9) r = TRUE;
    return r;
}

extern "C" BOOL func_0204ddd4(void *o) {
    s32 cnt = 0;
    s32 xy[2];
    BOOL r;
    u16 *p;
    s32 k;
    BOOL f;
    xy[0] = 0;
    xy[1] = 0;
    r = FALSE;
    k = 0;
    f = FALSE;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            p = _ZN7TownMap13func_0204dff8EP16Unk_0204debc_Pos(o, xy);
            if (p) {
                for (k = 0; k < 0x100; p++, k++) {
                    f = FALSE;
                    if (*p >= 0xe3 && *p <= 0xe7) f = TRUE;
                    if (f) cnt++;
                }
            }
        }
    }
    if (cnt >= 5) r = TRUE;
    return r;
}

extern "C" void func_0204dd74(void *ov, s32 arg) {
    u8 *o = (u8 *)ov;
    s32 xy[2];
    xy[0] = 0;
    xy[1] = 0;
    for (xy[1] = 0; xy[1] < 6; xy[1]++) {
        for (xy[0] = 0; xy[0] < 6; xy[0]++) {
            u16 *p = _ZN7TownMap13func_0204dff8EP16Unk_0204debc_Pos(o, xy);
            if (p) {
                Ns_0204d560::func_0204cdf0(p, 0, (o + xy[1] * 6)[xy[0]] & 0xfff, arg);
            }
        }
    }
}

extern "C" void func_0204dd20(Unk_0204dd20_Obj *o, s32 arg) {
    _ZN7TownMap13func_0204e038Ev(o);
    o->f = Ns_0204d560::func_02063b8c(3);
    do {
        func_0209b598(o);
        func_0204dd74(o, arg);
    } while (!func_0204de4c(o) || !func_0204ddd4(o));
}

extern "C" u8 *func_0204dd1c(void *p) {
    return (u8 *)p;
}

Unk_0204dcf0::Unk_0204dcf0() {}

Unk_0204dcf0::~Unk_0204dcf0() {}

extern "C" void func_0204dcb4(u16 *p) {
    s32 i;
    for (i = 0; i < 0x100; p++, i++) *p = 0xfff1;
}

extern "C" void func_0204dcb0() {}

void Unk_0204da18::func_0204dc9c() {
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_00 = 0;
    unk_1c = 1;
}

extern "C" BOOL func_0204dc54(void *heap) {
    BOOL r = TRUE;
    func_0205b818();
    if (!data_021c47c8) {
        data_021c47c8 = (Unk_0204da18 *)Ns_0204d560::Heap_Alloc(heap, 0x20);
        if (data_021c47c8) {
            if (data_021c47c8) data_021c47c8->func_0204dc9c();
            r = data_021c47c8->func_0204db24(heap);
        }
    }
    return r;
}

extern "C" s32 func_0204dc1c(void *heap) {
    if (data_021c47c8) {
        data_021c47c8->func_0204da18();
        data_021c47c8->func_0204db08(heap);
        Heap_Free(heap, data_021c47c8);
        data_021c47c8 = 0;
    }
    func_0205b7fc();
}

BOOL Unk_0204da18::func_0204db24(void *heap) {
     BOOL result; Unk_0204db24_L l; u8 *cell; s32 *q; s32 *tbl; 
    result = FALSE;
    unk_1c = 1;
    if (!unk_00) unk_00 = (u8 *)Ns_0204d560::func_020375dc(0x24, (u32)heap, 4);
    tbl = Ns_0204d560::_ZN7TownMap13func_0204debcEi(Ns_0204d560::data_021e3680, heap);
    if (unk_00 && tbl) {
        l.xy[0] = 0;
        l.xy[1] = 0;
        l.v.x = 0;
        l.v.y = 0;
        l.v.z = 0;
        cell = unk_00;
        q = tbl;
        unk_04 = 6;
        unk_08 = 6;
        unk_14 = unk_04 * Ns_0204d560::data_020c8cbc;
        unk_18 = unk_08 * Ns_0204d560::data_020c8cb8;
        func_0204edf8(&unk_0c, &unk_10, unk_04, unk_08, 0, 0);
        for (l.xy[1] = 0; l.xy[1] < unk_08; l.xy[1]++) {
            for (l.xy[0] = 0; l.xy[0] < unk_04; l.xy[0]++) {
                l.v.x = l.xy[0] << 17;
                l.v.z = l.xy[1] << 17;
                l.w.x = l.v.x;
                l.w.y = l.v.y;
                l.w.z = l.v.z;
                func_02037638(cell, q[0], &l.w, q[1], q[2], q[3], 0, 0, (s32 *)l.xy, unk_1c);
                cell += 0x28;
                q += 4;
            }
        }
        result = TRUE;
    }
    if (tbl) Heap_Free(heap, tbl);
    return result;
}

void Unk_0204da18::func_0204db08(void *heap) {
    if (unk_00) {
        Heap_Free(heap, unk_00);
        unk_00 = 0;
    }
}

void Unk_0204da18::func_0204dab4() {
    s32 x; u8 *p; s32 y; u8 *c;
    p = func_0204dd1c(Ns_0204d560::data_021e3680);
    if (p) {
        c = unk_00;
        for (y = 0; y < unk_08; y++) {
            for (x = 0; x < unk_04; x++) {
                if (c) Ns_0204d560::_ZN12Unk_020375d013func_020375d4Ej(c, *p);
                c += 0x28;
                p++;
            }
        }
    }
}

void Unk_0204da18::func_0204da24() {
    s32 x, y;
    Ns_0204d560::func_020e885c(data_021c6198);
    Ns_0204d560::func_02030528(unk_04, unk_08, 0, unk_1c);
    for (y = 0; y < unk_08; y++) {
        for (x = 0; x < unk_04; x++) {
            u8 *c;
            if ((u32)x < (u32)unk_04 && (u32)y < (u32)unk_08 && unk_00) {
                c = unk_00 + (x + y * unk_04) * 0x28;
            } else {
                c = 0;
            }
            if (c) {
                u32 t = Ns_0204d560::_ZN12Unk_020375d013func_020375d0Ev(c);
                void *d = data_021c6198;
                Ns_0204d560::func_02036c58(d);
                Ns_0204d560::_ZN12Unk_0203761813func_02037618EP16Unk_02037618_Subjj(c, 0, Ns_0204d560::func_02036f24(t, d), unk_1c);
            }
        }
    }
}

u32 Unk_0204da18::func_0204da18() {
    return Ns_0204d560::func_020302f8(unk_1c);
}

extern "C" Unk_0204da18 *func_0204da0c() {
    return data_021c47c8;
}

extern "C" s32 func_0204d9fc(u32 a, u32 b, u32 c, u32 d) {
    _ZN7TownMap13func_0204e51cEPtii(a, b, c, d);
}

extern "C" s32 func_0204d9ec(u32 a, u32 b, u32 c, u32 d) {
    _ZN7TownMap13func_0204e49cEiiPt(a, b, c, d);
}

extern "C" void func_0204d9b4(u32 a, s32 b, s32 c, s32 d, s32 e, u32 f) {
    s32 l8 = 0, lc = 0;
    func_0204edf8(&l8, &lc, b, c, d, e);
    func_0204d9ec(a, l8, lc, f);
}

extern "C" void func_0204d920(u16 *ret, void *m, void *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    u16 t[2];
    s32 l1c, l20, l24, l28;
    Unk_0204d920_Pad pad;
    t[0] = a6;
    t[1] = a7;
    if (Ns_0204d560::func_0204e9dc(m, &l24, &l28, &l1c, &l20, &t[0], &t[1], a8, 0)) {
        func_0204edf8(p4, p5, l24, l28, l1c, l20);
        Ns_0204d560::func_0204ed8c(pos, *p4, *p5);
        s32 x = *p4;
        s32 y = *p5;
        s32 tx = x >> 4;
        s32 ty = y >> 4;
        u16 *r = Ns_0204d560::func_0204ebd8(m, tx, ty, x - (tx << 4), y - (ty << 4), 0);
        if (r) {
            *ret = *r;
            return;
        }
    }
    *ret = 0xfff1;
}

extern "C" void func_0204d7fc(u16 *ret, void *m, s32 *pos, s32 *p4, s32 *p5, u16 a6, u16 a7, s32 a8) {
    void *h; u32 n; s32 sx, sz, ax; u16 t[2]; s32 a, b; Unk_0204d560_Vec v; u32 i; s32 d, az, zz;
    func_0204d920(t, m, &v, &a, &b, a6, a7, a8);
    if (!Unk_0204d560_Chk(t)) {
        h = StrBSize_Get(t);
        if (h) {
            n = _ZN12Unk_020b28ac13func_020b29e4Ev(h);
            sx = 0; sz = 0; i = 0;
            for (; i < n; i++) {
                Unk_0204d560_Vec v1, v2, v3;
                if (_ZN12Unk_020b28ac13func_020b2958EPiS0_S0_j(h, &v1, &v2, &v3, i)) {
                    sx += v1.x; sx += v2.x; sx += v3.x;
                    sz += v1.z; sz += v2.z; sz += v3.z;
                }
            }
            d = (s32)_ZN12Unk_020b28ac13func_020b29e4Ev(h) * 3 << 12;
            ax = FX_Div(sx, d);
            az = FX_Div(sz, d);
            zz = v.z + az + 0x1000;
            s32 yy = func_02030814(0);
            pos[0] = v.x + ax;
            pos[1] = yy;
            pos[2] = zz;
            if (p4) *p4 = a;
            if (p5) *p5 = b;
            *ret = t[0];
            return;
        }
    }
    *ret = 0xfff1;
}

extern "C" BOOL func_0204d780(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL func_0204d700(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5014, 0x501a, 1);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL func_0204d684(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x500b, 0x500b, 0x400);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" BOOL func_0204d5d8(void *a, s32 *pos, s32 *p3, s32 *p4) {
    u16 t[2];
    func_0204d7fc(t, a, pos, p3, p4, 0x5000, 0x5000, 0x200);
    if (!Unk_0204d560_Chk(t)) {
        pos[0] -= 0x2000;
        pos[2] += 0x8000;
        if (p3) *p3 -= 1;
        if (p4) *p4 += 4;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0204d560(void *a, void *b) {
    u16 t[2];
    s32 x, y;
    func_0204d920(t, a, b, &x, &y, 0x5020, 0x5020, 0);
    return Unk_0204d560_Chk(t) ? FALSE : TRUE;
}

extern "C" void func_0204d54c(Unk_0204d0a4 *p) {
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_00 = 0;
    p->unk_1c = 2;
}

extern "C" Unk_0204d0a4 *func_0204d528(s32 i) {
    Unk_0204d0a4 *r = 0;
    if (func_0206057c()) r = data_021c47e8[i];
    return r;
}

extern "C" Unk_0204d0a4 *func_0204d500(s32 a) {
    Unk_0204d0a4 *r = 0;
    if (func_020b530c()) {
        r = func_0204d528(func_020b533c(a));
    }
    return r;
}

extern "C" BOOL func_0204d498(void *heap) {
    BOOL r = TRUE;
    s32 i;
    func_0205b7cc();
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &data_021c47e8[i];
        if (!*e) {
            *e = (Unk_0204d0a4 *)Heap_Alloc(heap, 0x20);
            if (*e) {
                if (*e) func_0204d54c(*e);
                if (!func_0204d2b0(*e, i, heap)) {
                    r = FALSE;
                    break;
                }
            } else {
                r = FALSE;
                break;
            }
        }
    }
    if (!r) func_0204d454(heap);
    return r;
}

extern "C" void func_0204d454(void *heap) {
    s32 i;
    for (i = 0; i < 5; i++) {
        Unk_0204d0a4 **e = &data_021c47e8[i];
        if (*e) {
            func_0204d370(*e);
            func_0204d294(*e, heap);
            Heap_Free(heap, *e);
            *e = 0;
        }
    }
    func_0205b7b0();
}

extern "C" void func_0204d42c() {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (data_021c47e8[i]) func_0204d40c(data_021c47e8[i], i);
    }
}

extern "C" void func_0204d40c(Unk_0204d0a4 *p, s32 i) {
    u32 v = _ZN9HouseData13func_020603f4Ei(&Ns_0204cc48::data_021e58a8);
    if (p->unk_00) _ZN12Unk_020375d013func_020375d4Ej(p->unk_00, v);
}

extern "C" void func_0204d3d8() {
    s32 i;
    func_020e885c(data_021c621c);
    for (i = 0; i < 5; i++) {
        if (data_021c47e8[i]) func_0204d37c(data_021c47e8[i]);
    }
}

extern "C" void func_0204d37c(Unk_0204d0a4 *p) {
    u32 h;
    func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
    if ((u8 *)p->unk_04 > (u8 *)0 && (u8 *)p->unk_08 > (u8 *)0) {
        h = p->unk_00;
        if (h != 0) goto join;
    }
    h = 0;
join:
    if (h) {
        u32 a = _ZN12Unk_020375d013func_020375d0Ev(h);
        u32 g = data_021c621c;
        func_02036c58();
        _ZN12Unk_0203761813func_02037618EP16Unk_02037618_Subjj(h, 0, func_02036f24(a, g), p->unk_1c);
    }
}

extern "C" void func_0204d370(Unk_0204d0a4 *p) {
    func_020302f8(p->unk_1c);
}

extern "C" BOOL func_0204d2b0(Unk_0204d0a4 *p, s32 i, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->unk_1c = i + 2;
    if (!p->unk_00) {
        p->unk_00 = func_020375dc(1, heap, 4);
    }
    info = (Unk_0204d0f4_Info *)Ns_0204cc48::_ZN9HouseData13func_020604f8EiPv(&Ns_0204cc48::data_021e58a8, i, heap);
    if (p->unk_00 && info) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->unk_04 = 1;
        p->unk_08 = 1;
        p->unk_14 = data_020c8cbc;
        p->unk_18 = data_020c8cb8;
        Ns_0204cc48::func_0204edf8(&p->unk_0c, &p->unk_10, p->unk_04, p->unk_08, 0, 0);
        func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
        l.v.x = 0; l.v.z = 0;
        l.w = l.v;
        _ZN12Unk_0203761813func_02037674EiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(p->unk_00, info->a, &l.w, info->b, info->c, info->d, 0, 0, 0, 0, p->unk_1c);
        Heap_Free(heap, info);
        r = TRUE;
    }
    return r;
}

extern "C" void func_0204d294(Unk_0204d0a4 *p, void *heap) {
    if (p->unk_00) {
        Heap_Free(heap, (void *)p->unk_00);
        p->unk_00 = 0;
    }
}

extern "C" void func_0204d280(Unk_0204d0a4 *p) {
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_00 = 0;
    p->unk_1c = 7;
    p->unk_20 = 0;
}

extern "C" Unk_0204d0f4_Info *func_0204d22c(u16 *dst, u32 b, void *heap) {
    Unk_0204d0f4_Info *p = Ns_0204cc48::func_0204ee64(1, heap);
    if (p) {
        u32 h = func_0207bf60(&data_021dfd8c, b);
        if (h) {
            p->a = _ZN12Unk_0207e94013func_0207f04cEv(h);
        } else {
            p->a = 0x1010;
        }
        func_0204d1dc(dst, b, heap);
        p->b = (u32)dst;
        p->c = 0;
        p->d = 0;
    }
    return p;
}

extern "C" BOOL func_0204d1dc(u16 *dst, u32 b, void *heap) {
    s32 x, y;
    u32 h;
    BOOL r;
    x = 2;
    y = 0;
    r = FALSE;
    h = func_0207bf60(&data_021dfd8c, b);
    if (h) _ZN12Unk_0207e94013func_0207f07cEPiS0_(h, &x, &y);
    if (h) {
        if (func_0204cdf0(dst, x, y, heap)) {
            func_0207e568(h, dst);
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL func_0204d0f4(Unk_0204d0a4 *p, u32 a, void *heap) {
    BOOL r = FALSE;
    Unk_0204d0f4_Info *info;
    struct { Unk_0204d0f4_V3 v, w; } l;
    p->unk_1c = 7;
    if (!p->unk_00) {
        p->unk_00 = func_020375dc(1, heap, -4);
    }
    if (!p->unk_20) {
        p->unk_20 = (u32)func_0204ce50(heap, -4);
    }
    info = func_0204d22c((u16 *)p->unk_20, a, heap);
    if (p->unk_00 && info && p->unk_20) {
        l.v.x = 0; l.v.y = 0; l.v.z = 0;
        p->unk_04 = 1;
        p->unk_08 = 1;
        p->unk_14 = data_020c8cbc;
        p->unk_18 = data_020c8cb8;
        Ns_0204cc48::func_0204edf8(&p->unk_0c, &p->unk_10, p->unk_04, p->unk_08, 0, 0);
        func_02030528(p->unk_04, p->unk_08, 0, p->unk_1c);
        l.v.x = 0; l.v.z = 0;
        u32 t = _ZN12Unk_02036cec13func_02036eb8Ei(func_02036c58(), info->a);
        l.w = l.v;
        _ZN12Unk_0203761813func_02037674EiP15Unk_02037674_V3iiiP16Unk_02037618_Subjiij(p->unk_00, info->a, &l.w, info->b, info->c, info->d, 0, t, 0, 0, p->unk_1c);
        Heap_Free(heap, info);
        r = TRUE;
    }
    return r;
}

extern "C" Unk_0204d0a4 *func_0204d0a4(u32 a, void *heap) {
    Unk_0204d0a4 *r = 0;
    if (!data_021c47d4) {
        data_021c47d4 = (Unk_0204d0a4 *)Heap_AllocTail(heap, 0x24);
        if (data_021c47d4) {
            if (data_021c47d4) func_0204d280(data_021c47d4);
            if (func_0204d0f4(data_021c47d4, a, heap)) {
                r = data_021c47d4;
            } else {
                func_0204d040(heap);
            }
        }
    }
    return r;
}

extern "C" void func_0204d06c(Unk_0204d0a4 *p, void *heap) {
    if (p->unk_00) {
        Heap_Free(heap, (void *)p->unk_00);
        p->unk_00 = 0;
    }
    if (p->unk_20) {
        Heap_Free(heap, (void *)p->unk_20);
        p->unk_20 = 0;
    }
    func_020302f8(p->unk_1c);
}

extern "C" void func_0204d040(void *heap) {
    if (data_021c47d4) {
        func_0204d06c(data_021c47d4, heap);
        Heap_Free(heap, data_021c47d4);
        data_021c47d4 = 0;
    }
}

extern "C" void func_0204d024(Unk_0204cf2c_Ent *t) {
    s32 i;
    for (i = 0; i < 4; i++) {
        t[i].data = 0;
        t[i].count = 0;
    }
}

extern "C" BOOL func_0204cfd0(void *heap) {
    BOOL r = FALSE;
    if (!data_021c47d0) {
        data_021c47d0 = (Unk_0204cf2c_Ent *)Heap_Alloc(heap, 0x20);
        if (data_021c47d0) {
            if (data_021c47d0) func_0204d024(data_021c47d0);
            if (func_0204cf58(data_021c47d0, heap)) {
                r = TRUE;
            } else {
                func_0204cfa4(heap);
                data_021c47d0 = 0;
            }
        }
    }
    return r;
}

extern "C" void func_0204cfa4(void *heap) {
    if (data_021c47d0) {
        func_0204cf2c(data_021c47d0, heap);
        Heap_Free(heap, data_021c47d0);
        data_021c47d0 = 0;
    }
}

extern "C" BOOL func_0204cf58(Unk_0204cf2c_Ent *t, void *heap) {
    const Unk_020ca2f4_Ent *e = data_020ca2f4;
    s32 i = 0;
    s32 size = 0;
    BOOL r = TRUE;
    for (; i < 4; t++, e++, i++) {
        t->data = (u16 *)File_LoadAlloc(e->a, heap, 4, &size);
        if (t->data) {
            t->count = (u32)size >> 1;
        } else {
            r = FALSE;
            t->count = 0;
            break;
        }
    }
    return r;
}

extern "C" void func_0204cf2c(Unk_0204cf2c_Ent *t, void *heap) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (t->data) {
            Heap_Free(heap, t->data);
            t->data = 0;
            t->count = 0;
            t++;
        }
    }
}

extern "C" BOOL func_0204cf1c(Unk_0204cf2c_Ent *t, s32 i) {
    if (i >= 0 && i < 4) return TRUE;
    return FALSE;
}

extern "C" s32 func_0204cedc(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (func_0204cf1c(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            s32 k;
            for (k = 0; k < j; d++, k++) {
                r += *d;
            }
        }
    }
    return r;
}

extern "C" s32 func_0204cea8(Unk_0204cf2c_Ent *t, s32 i, s32 j) {
    s32 r = 0;
    if (func_0204cf1c(t, i)) {
        Unk_0204cf2c_Ent *e = &t[i];
        u16 *d = e->data;
        if (d && j < e->count) {
            r = d[j];
        }
    }
    return r;
}

extern "C" BOOL func_0204ce80(s32 a, s32 b) {
    BOOL r = FALSE;
    if (data_021c47d0) {
        if (func_0204cea8(data_021c47d0, a, b) > 0) r = TRUE;
    }
    return r;
}

extern "C" u16 *func_0204ce50(void *heap, s32 align) {
    u16 *p = (u16 *)Heap_AllocAligned(heap, 0x200, align);
    if (p) {
        s32 i;
        for (i = 0; i < 0x100; i++) {
            p[i] = 0xfff1;
        }
    }
    return p;
}

extern "C" BOOL func_0204ce20(Unk_0204cf2c_Ent *t, void *dst, s32 i, s32 j, s32 n) {
    s32 off = func_0204cedc(t, i, j);
    const Unk_020ca2f4_Ent *e = &data_020ca2f4[i];
    File_ReadRangeByPath(e->b, dst, n, off);
    return TRUE;
}

extern "C" BOOL func_0204cdf0(u16 *dst, s32 i, s32 j, void *heap) {
    BOOL r = FALSE;
    if (data_021c47d0) {
        r = func_0204cd00(data_021c47d0, dst, i, j, heap);
    }
    return r;
}

extern "C" u16 *func_0204cda0(u16 *dst, s32 b, void *heap, s32 d) {
    u16 *r = 0;
    if (data_021c47d0) {
        r = func_0204ce50(heap, d);
        if (r) {
            if (!func_0204cd00(data_021c47d0, r, (s32)dst, b, heap)) {
                Heap_Free(heap, r);
                r = 0;
            }
        }
    }
    return r;
}

extern "C" BOOL func_0204cd00(Unk_0204cf2c_Ent *t, u16 *dst, s32 i, s32 j, void *heap) {
    s32 n = func_0204cea8(t, i, j);
    BOOL result = FALSE;
    if (dst && n > 0 && (n & 3) == 0 && func_0204cf1c(t, i)) {
        void *buf = Heap_AllocTail(heap, n);
        Unk_0204cd00_Glyph *p = (Unk_0204cd00_Glyph *)buf;
        if (p) {
            if (func_0204ce20(t, buf, i, j, n)) {
                s32 cnt = n >> 2;
                s32 k;
                for (k = 0; k < cnt; p++, k++) {
                    if (Unk_0204cd00_R(p)) {
                        dst[(p->y << 4) + p->x] = p->v;
                    }
                }
            }
            Heap_Free(heap, buf);
            result = TRUE;
        }
    }
    return result;
}

extern "C" void *func_0204cc90(void *a, s32 *b, s32 c, s32 d, void *heap) {
    Unk_0204cf2c_Ent *t = (Unk_0204cf2c_Ent *)a;
    s32 n = func_0204cea8(t, c, d);
    if (n > 0 && (n & 3) == 0 && func_0204cf1c(t, c)) {
        void *buf = Heap_AllocAligned(heap, n, 4);
        if (buf) {
            if (func_0204ce20(t, buf, c, d, n)) {
                *b = n >> 2;
                return buf;
            }
            Heap_Free(heap, buf);
        }
    }
    return 0;
}

extern "C" void *func_0204cc48(void *a, s32 *b, s32 c, void *d) {
    u32 h = func_0207bf60(&data_021dfd8c, c);
    s32 x = 2, y = 0;
    if (h && _ZN12Unk_0207e94013func_0207f07cEPiS0_(h, &x, &y)) {
        return func_0204cc90(a, b, x, y, d);
    }
    return 0;
}

extern "C" s32 func_0204cc1c(s32 a, s32 b, s32 c) {
    if (data_021c47d0 != NULL) return Ns_0204c318::func_0204cc48(data_021c47d0, a, b, c);
    return 0;
}

char data_020da470[] = "fg_data/nf_h.bin";

Unk_0204d0a4 *data_021c47e8[5];

const Unk_020ca2f4_Ent data_020ca2f4[4] = {
    {(u32)data_020da498, (u32)data_020da43c},
    {(u32)data_020da45c, (u32)data_020da41c},
    {(u32)data_020da484, (u32)data_020da42c},
    {(u32)data_020da470, (u32)data_020da44c},
};

#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203389c_Vec { s32 x, y, z; };
typedef Unk_0203389c_Vec Unk_02083c28_Vec;
struct Unk_02083c28;
struct Unk_02083c28_G;
typedef void (Unk_02083c28::*Unk_02083c28_Fn)(Unk_02083c28_Vec *, u16 *, Unk_02083c28_G *);
typedef u16 *(Unk_02083c28::*Unk_02083d14_Fn)();

struct Unk_02083c28_VecZ {
    s32 x, y, z;
    Unk_02083c28_VecZ() { x = 0; y = 0; z = 0; }
    ~Unk_02083c28_VecZ() {}
};

struct Unk_02083c28_G {
    Unk_02083c28_VecZ pos;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    ~Unk_02083c28_G();
};

struct Unk_02083c28_Ent {
    u16 id;
    u16 id2;
    u32 ovl;
    Unk_02083c28_Fn fn;
    u8 flag : 1;
};

struct Unk_02083d14_Ent {
    Unk_02083d14_Fn fn;
    u8 lvl;
};

struct Unk_02083c28_Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 pad[0x1b];
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e88(s32 i);
};


struct Unk_02083c28 {
    u8 pad[0x70];
    u8 unk_70;
    u8 pad2[3];
    u32 unk_74;

    u16 *func_02083c28(Unk_02083c28_Ent *tbl, s32 n);
    BOOL func_02083d14();
    void func_02083e38();
    void func_02083e40(u32 *p);
};

struct Unk_02083c08 {
    u8 pad_00[0x70];
    u8 unk_70;
    u8 pad_71[3];
    u32 unk_74;

    void func_02083c08();
};

struct Unk_02083314_V3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_02083314_K {
    u16 a;
    s16 b;
    u16 c;
};

struct Unk_02083314_Ent {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_02082dd0_V { s32 x, y, z; };
struct Unk_02082e80_Cell { u8 pad_00[0x28]; };
struct Unk_02082e80_Grid {
    Unk_02082e80_Cell *unk_00;
    u32 unk_04[2];
};
struct Unk_02082e80_Pos {
    s32 x, y;
    Unk_02082e80_Pos() { x = 0; y = 0; }
};

struct Unk_02084ae4_Vec { s32 x, y, z; };
struct Unk_020847b0_P0 { u8 pad[0x88]; };
struct Unk_020847b0_Q0 { u8 pad[0xc]; };
struct Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Mid : Unk_020847b0_Q0, Unk_020847b0_Q1 { u8 pad[0x20]; };
struct Unk_020847b0_Top : Unk_020847b0_P0, Unk_020847b0_Mid { u8 pad[8]; };
struct Unk_02084ae4_W {
    u8 b;
    u16 h[4];
};

struct Unk_02084ecc_Vec {
    s32 x, y, z;
};

struct Unk_0203389c {
    u8 pad_00[0x34];
    s32 unk_34;
    u8 pad_38[8];
    BOOL func_02033914(s32 a);
};

struct Unk_0203398c : Unk_0203389c {
    Unk_0203398c() {}
    Unk_0203398c(Unk_0203389c_Vec *v, s32 a, s32 b);
    Unk_0203398c *func_0203398c(s32 x, s32 z, s32 a, s32 b);
    ~Unk_0203398c();
};

struct Unk_020cbb18_Data {
    u8 pad_00[0x64];
    u32 unk_64;
};

struct Unk_02084ffc_Grid {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_02084038 {
    u8 pad_00[0x28];
    Unk_02084038();
    ~Unk_02084038();
};

class Unk_020e09ac : public GameProc {
public:
    Unk_020e09ac() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();

    Unk_02084038 unk_50;
};

namespace Dp {
extern "C" {
void func_02082dd0();
void func_02082e08();
void func_02082e2c();
void func_02082e58();
void func_02082e80();
void func_02082ff4();
void func_0208301c();
void func_02083038();
void func_02083100();
void func_02083214();
void func_02083230();
void func_02083314();
void func_02083360();
void func_02083430();
void func_020834cc();
void func_0208356c();
void func_02083608();
void func_02083614();
void func_02083644();
void func_02083774();
void func_020838e8();
void func_02083984();
void func_02083a20();
void func_02083a9c();
void func_02083b2c();
void func_02084f84();
}
}

struct Unk_02084f84_Scene { void *fn; u16 a; u16 b; };
extern void *data_020e087c[2];
extern void *data_020e0884[2];
extern void *data_020e088c[2];
extern void *data_020e0894[2];
extern void *data_020e089c[2];
extern void *data_020e08a4[2];
extern void *data_020e08ac[2];
extern void *data_020e08b4[2];
extern void *data_020e08bc[2];
extern void *data_020e08c4[2];
extern void *data_020e08cc[2];
extern void *data_020e08d4[2];
extern void *data_020e08dc[2];
extern void *data_020e08e4[2];
extern void *data_020e08ec[2];
extern void *data_020e08f4[2];
extern void *data_020e08fc[2];
extern void *data_020e0904[2];
extern void *data_020e090c[2];
extern void *data_020e0914[2];
extern void *data_020e091c[2];
extern void *data_020e0924[2];
extern void *data_020e0934[2];
extern void *data_020e093c[2];
extern void *data_020e0944[2];
extern void *data_020e094c[2];
extern void *data_020e0954[2];
extern void *data_020e095c[2];
extern void *data_020e0964[2];
extern void *data_020e096c[2];
extern void *data_020e0974[2];
extern void *data_020e097c[2];
extern void *data_020e0984[2];
extern void *data_020e098c[2];
extern const s32 data_020cf1c8;
extern const s32 data_020cf1cc;
extern const Unk_02083314_Ent data_020cf1d0[1];
extern void *const data_020cf1d8[4];
extern const s32 data_020cf1e8[8];
extern const Unk_02083314_Ent data_020cf208[4];
extern const Unk_02083314_Ent data_020cf228[8];
extern u32 data_020e0870;
extern u32 data_020e0874[2];
extern Unk_02084f84_Scene data_020e092c;
extern Unk_02083c28_G data_020e0994;
extern Unk_02083d14_Ent data_020e09f4[11];
extern Unk_02083c28_Ent data_020e0a78[23];
extern Unk_02083c28_Rec data_021cd654[8];
extern Unk_02083c28_Rec data_021cd844[0x26];
extern u8 data_021cd640;

Unk_02083c28_Rec data_021cd654[8];
void *data_020e095c[2] = {(void *)Dp::func_02083644, 0};
void *data_020e08b4[2] = {(void *)Dp::func_02082e08, 0};
u32 data_020e0874[2] = {0x56, 0};
void *data_020e08e4[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e097c[2] = {(void *)Dp::func_02083b2c, 0};
const s32 data_020cf1cc = 4;
void *data_020e0884[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0894[2] = {(void *)Dp::func_02082e80, 0};
void *data_020e08bc[2] = {(void *)Dp::func_02082dd0, 0};
void *data_020e08ec[2] = {(void *)Dp::func_02083a20, 0};
Unk_02083c28_G data_020e0994 = {Unk_02083c28_VecZ(), 0xfff1, 0x33, 0};
void *data_020e0984[2] = {(void *)Dp::func_02083230, 0};
void *data_020e08dc[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0974[2] = {(void *)Dp::func_02083100, 0};
void *data_020e096c[2] = {(void *)Dp::func_0208301c, 0};
void *data_020e0964[2] = {(void *)Dp::func_02083644, 0};
void *data_020e08cc[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e0954[2] = {(void *)Dp::func_02083614, 0};
Unk_02083c28_Rec data_021cd844[0x26];
const Unk_02083314_Ent data_020cf208[4] = {{0x3e, 0x6a, 0}, {0x41, 0x6b, 0}, {0x42, 0x68, 0}, {0x43, 0x62, 0}};
void *data_020e0944[2] = {(void *)Dp::func_02083644, 0};
void *data_020e0934[2] = {(void *)Dp::func_02083214, 0};
Unk_02084f84_Scene data_020e092c = {(void *)Dp::func_02084f84, 0xd0, 0xcc};
Unk_02083d14_Ent data_020e09f4[11] = {
    {*(Unk_02083d14_Fn *)data_020e08a4, 4},
    {*(Unk_02083d14_Fn *)data_020e097c, 4},
    {*(Unk_02083d14_Fn *)data_020e08ec, 4},
    {*(Unk_02083d14_Fn *)data_020e088c, 4},
    {*(Unk_02083d14_Fn *)data_020e08d4, 4},
    {*(Unk_02083d14_Fn *)data_020e08ac, 4},
    {*(Unk_02083d14_Fn *)data_020e098c, 3},
    {*(Unk_02083d14_Fn *)data_020e0984, 3},
    {*(Unk_02083d14_Fn *)data_020e08c4, 2},
    {*(Unk_02083d14_Fn *)data_020e0974, 2},
    {*(Unk_02083d14_Fn *)data_020e096c, 2},
};
u32 data_020e0870 = 0x56;
void *data_020e087c[2] = {(void *)Dp::func_02082e2c, 0};
void *data_020e090c[2] = {(void *)Dp::func_02083314, 0};
void *data_020e0904[2] = {(void *)Dp::func_02083984, 0};
void *data_020e08fc[2] = {(void *)Dp::func_02083644, 0};
const Unk_02083314_Ent data_020cf228[8] = {{0x14, 0x57, 0}, {0x15, 0x58, 0}, {0x16, 0x59, 0}, {0x17, 0x5a, 0}, {0x18, 0x5f, 0}, {0x19, 0x5b, 0}, {0x1a, 0x5c, 0}, {0x1b, 0x5c, 0}};
void *data_020e088c[2] = {(void *)Dp::func_02083774, 0};
const Unk_02083314_Ent data_020cf1d0[1] = {{0x45, 0x54, 0}};
const s32 data_020cf1c8 = 0x17;
void *data_020e08c4[2] = {(void *)Dp::func_02083038, 0};
void *data_020e08d4[2] = {(void *)Dp::func_0208356c, 0};
u8 data_021cd640;
void *data_020e093c[2] = {(void *)Dp::func_02083644, 0};
const s32 data_020cf1e8[8] = {9, 10, 14, 15, 16, 17, 18, 19};
void *data_020e0924[2] = {(void *)Dp::func_02083644, 0};
void *data_020e0914[2] = {(void *)Dp::func_02083608, 0};
void *data_020e089c[2] = {(void *)Dp::func_02082e58, 0};
void *const data_020cf1d8[4] = {0, 0, (void *)Dp::func_02082ff4, 0};
void *data_020e098c[2] = {(void *)Dp::func_02083360, 0};

namespace F1 {
extern "C" {
extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_02082e80_Grid *data_021c47c4;
extern u8 data_020cf1d0[], data_020cf208[], data_020cf1d8[], data_020e0a78[];
extern s32 data_020cf1c8;
extern u8 data_021ed315, data_021eca50;
void func_0204edd8(void *g, void *v);
void *func_020850e0();
void *func_02085170(void *p);
void *func_0208516c(void *p);
void *func_02085174(void *p);
void *func_02085178(void *p);
void _ZN12Unk_02086af013func_02086af0EPvPtP17Unk_020868cc_Vec3(void *a, void *b, u16 *c, void *d);
void _ZNK12Unk_020868cc13func_020868ccEP17Unk_020868cc_Vec3(void *a, void *b);
void _ZN12Unk_02086c0413func_02086ec4EP17Unk_02086ec4_Vec3(void *a, void *b);
s32 _ZN12Unk_02086c0413func_02086e60Ev(void *a);
void _ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(void *a, void *b);
s32 _ZN12Unk_02086f8413func_02086fd0Ev(void *a);
s32 func_02063b8c(s32 a);
s32 PlayerData_GetCurrent();
void *_ZN10PlayerData13func_02098698Ev();
s32 _ZN12Unk_020877e013func_02087838Ej(void *a, s32 b);
s32 _ZN11SaveRecord413func_0209ea50Ev(void *a);
s32 func_020b50e8();
s32 func_02083ba4();
s32 func_02083b84();
s32 func_02083bc8(void *tbl, s32 x);
s32 func_02083de8(void *a, void *b, s32 c);
s32 func_02083e10(void *a, void *b, s32 c);
void func_0209d498(void *p);
s32 func_02084de0(s32 a, void *p);
s32 _ZN12Unk_0208722413func_0208723cEv(void *p);
s32 func_0208740c();
s32 func_02087444();
s32 func_020374b0(void *c, s32 v);
s32 func_020374cc(void *c, s32 v);
s32 func_02031194(s32 x, s32 y);
void func_0204edf8(s32 *o1, s32 *o2, s32 a, s32 b, s32 c, s32 d);
void func_0204ed8c(void *a, s32 x, s32 y);
BOOL func_0208310c(BOOL flag);
BOOL func_0208323c(BOOL flag);
}
static inline BOOL Unk_02083058_IsA() { return data_020e416c == 0 ? TRUE : FALSE; }
static inline Unk_02082e80_Cell *Unk_02082e80_GetCell(Unk_02082e80_Grid *g, u32 x, u32 y) {
    if (x < g->unk_04[0] && y < g->unk_04[1] && g->unk_00 != NULL) {
        return &g->unk_00[y * g->unk_04[0] + x];
    }
    return NULL;
}
}

namespace F2 {
extern "C" {
extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021ed315;
extern void *data_021c47c4;
extern s32 data_020cf1c8;
extern u8 data_020e0a78[];
extern u8 data_020e0874[];
extern u8 data_020e0870[];
extern Unk_02083314_Ent data_020cf228[];
extern s32 data_020cf1e8[];
s32 func_020b50e8();
s32 func_020b50dc();
s32 func_02040c70();
s32 func_020b530c(s32);
s32 func_020b0f0c();
s32 func_020b0f30();
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *);
void *func_02099db4(void *, s32);
void *func_0209a4f0(void *);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
s32 _ZN12Unk_0209ada413func_0209abccEv(void *);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
void func_0209d498(void *);
void *_ZN11SaveRecord413func_0209ea50Ev(void *);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *g, s32 i);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *g);
s32 func_020850e0();
s32 func_02085178(s32);
s32 func_0208517c(s32);
s32 func_020851bc(s32, s32);
s32 _ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(s32, void *);
s32 _ZN12Unk_02086f8413func_02086fa8Ev(s32);
s32 _ZN12Unk_02086f1413func_02086f18Ev(s32);
s32 func_02087444();
s32 func_02084de0(u32, void *);
s32 func_0204ed8c(void *, s32, s32);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204eda4(void *, s32, s32, s32, s32);
void func_0204ed70(void *, s32, s32, s32, s32);
void func_0204edf8(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02063b8c(s32);
void OverlayMgr_Release(u32);
void *func_02083e10(u16 *, void *, s32);
void *func_02083de8(void *, void *, s32);
BOOL func_02083314(s32 a, Unk_02083314_V3 *p);
BOOL func_02083360(s32 a, s32 b, s32 c);
BOOL func_0208336c(s32 flag);
BOOL func_02083430(s32 a, s32 b, s32 c);
BOOL func_0208343c(s32 flag);
BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_0208356c(s32 a, s32 b, s32 c);
BOOL func_02083578(s32 flag);
BOOL func_02083608(s32 a, Unk_02083314_V3 *p);
BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083774(s32 a, s32 b, s32 c);
BOOL func_02083780(s32 flag);
BOOL func_02083898();
BOOL func_020838e8(s32 a, s32 b, s32 c);
BOOL func_020838f4(s32 flag);
BOOL func_02083944();
BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083a20();
BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p);
BOOL func_02083b2c();
BOOL func_02083b84();
BOOL func_02083ba4();
s32 func_02083bc8(Unk_02083314_Ent *p, s32 n);
}

}

namespace F3 {
extern "C" {
extern Unk_02083c28_G data_020e0994;
extern u32 data_020e0874[2];
extern Unk_02083d14_Ent data_020e09f4[11];
extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern Unk_02083c28_Vec gVec3Zero;
extern Unk_02083c28_Rec data_021cd844[0x26];
extern Unk_02083c28_Rec data_021cd654[8];
extern u8 data_021cd640;
extern u8 data_021dfd8c[];
extern u16 *data_021c47c4;
s32 func_020b50e8();
s32 func_020b5184();
s32 _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *g, s32 i);
void OverlayMgr_Acquire(u32 ovl);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(u32 a, u32 b, void *c, void *d, void *e);
s32 func_0204263c(Unk_02083c28_Vec *v);
s32 func_02083ba4(u16 *p);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
void func_0204ed8c(Unk_02083c28_Vec *out, s32 x, s32 y);
void MI_CpuFill8(void *dst, u32 v, u32 n);
void MI_CpuCopy8(const void *src, void *dst, u32 n);
s32 func_02076ae8(u8 *p, u8 *dst, s32 z);
s32 func_02076280(u32 a, u8 *p, s32 b, s32 c);
s32 func_020766e0(u32 id);
void func_02076b08(u8 *p, u32 a, s32 b);
void func_02076a6c(u8 *p, s32 a, s32 b);
u8 *_ZN12Unk_020cbb1813func_02072970Ej(Unk_020cbb18 *g, s32 i);
void *func_0207aa78(s32 i);
s32 func_02078568(void *p, s32 v);
s32 func_0207854c(void *p, s32 v);
s32 func_0207869c();
s32 func_0207b74c(void *p);
void *func_0207bf60(void *p, s32 i);
s32 _ZN12VillagerData13func_020805c4Ev();
s32 _ZN12Unk_02002fc813func_020030b4Ev();
void *func_0207e310(void *p);
s32 func_0208168c(u16 *p);
s32 func_0207856c(void *p);
s32 func_0207853c(void *p);
s32 func_02078548(void *p);
void *func_020784f4(void *p);
s32 func_020784b8(void *p, s32 v);
u16 *func_02083de8(u16 *key, Unk_02083c28_Ent *tbl, s32 n);
BOOL func_02083e50(void *p, Unk_02083c28_G *g);
void func_02083e60(Unk_02083c28_G *g);
void func_02083e7c(Unk_02083c28_G *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos);
BOOL func_02083dbc(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos);
BOOL func_02083ed4(u16 *arr, s32 x, s32 y);
BOOL func_02083ef4(u16 *arr, s32 x, s32 y);
BOOL func_02083f1c(u16 *arr, s32 x, s32 y);
u8 *func_020841fc(u16 *p);
BOOL func_0208416c(s32 *a, s32 *b, u16 *p);
void func_0208419c(u32 a, u32 b, u32 c, u16 *p);
u8 *func_02084398(u16 *p);
u8 *func_02084294(u16 *p);
BOOL func_02084430(u16 *p, u32 b, u32 c);
BOOL func_020842f8(u16 *p, u32 b, u32 c);
BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e);
void func_020843c4(void *src, s32 id);
BOOL func_02084228(u16 *p, u32 b, u32 c);
}
static inline BOOL Unk_02083c28_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F4 {
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021dfd8c[];
extern u8 data_020e0994[];
extern u8 data_021cd654[];
extern u8 data_020e416c;
extern u32 data_020cf1c8;
extern u8 data_020e0a78[];
extern u8 data_021ed315[];
extern u8 data_020cf208[];
extern u8 data_020cf1d8[];
extern u32 data_020cf1cc;
void _ZN12Unk_02083c0813func_02083c08Ev();
void func_02083e60(void *p);
void func_020782c4();
s32 func_020b5184();
void func_0207af34(void *p);
s32 func_020b4994();
s32 func_020b51b8();
void *func_0207bdf4(void *p, s32 v);
void *_ZN12VillagerData13func_020805c4Ev(void *p);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *p);
void func_0207e4f4(void *p);
void *func_020850e0();
void *func_02085174(void *p);
void *func_02085170(void *p);
void _ZN12Unk_02086c0413func_02086e78Ev(void *p);
void _ZN12Unk_02086b7c13func_02086b88Ev(void *p);
void _ZN12Unk_02086b7c13func_02086b7cEv(void *p);
s32 _ZN12Unk_02086c0413func_02086eb0Ev(void *p);
void _ZN12Unk_02086c0413func_02086e6cEv(void *p);
void func_02079a0c(void *p);
void func_02079954(void *p);
void func_0207821c(s32 v);
s32 func_020b50dc();
s32 func_020b5198(s32 v);
s32 func_02078294();
void func_0209d498(void *p);
s32 func_02079ab0(void *p, void *q);
void func_020782ac(s32 v);
void func_0207827c(s32 v);
s32 func_02083b84();
s32 _ZN12Unk_020cbb1813func_02072e88Ei(void *g, s32 i);
s32 PlayerData_GetCurrent();
s32 _ZN10PlayerData11getPlayerIdEv(s32 p);
void func_020793e8(void *p, s32 v);
s32 func_020b51a4();
s32 func_020b52f8();
s32 func_02079fd8();
s32 func_02078204();
s32 func_020b101c();
s32 func_020b5328();
void _ZN12Unk_02083c2813func_02083d14Ev(void *p);
void *_ZN12Unk_02083c2813func_02083c28EP16Unk_02083c28_Enti(void *a, void *b, u32 c);
void func_020832c4(void *p);
s32 _ZN10PlayerData13func_0209865cEv(s32 p);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *p);
s32 func_0209d374(void *p, void *q);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *p);
s32 func_0207bfb4(void *p, void *q);
s32 func_0207c014(s32 v);
void func_02076a2c(void *a, void *b, void *c);
void MI_CpuCopy8(void *src, void *dst, u32 n);
s32 func_0207bf38(void *p, void *q);
s32 func_0207e310();
s32 func_020785a8();
void func_020798a0(void *p);
s32 _ZN5Actor5spawnEPvS0_S0_S0_S0_(s32 a, s32 b, void *c, void *d, void *e);
s32 func_020b51d4();
void *func_0207bf60(void *p, s32 i);
void *func_02084398(void *p);
s32 func_020a62a0();
s32 func_02063b8c(s32 n);
s32 func_02078264();
s32 func_0207a484(void *p);
s32 func_0207a4b8(void *p);
s32 _ZN12Unk_020994cc13func_02099668Ev(s32 v);
s32 func_0207e1f0(void *p);
s32 func_020812f4();
s32 func_0207b7d4(void *p, void *q);
void func_02076ae8(void *a, void *b, s32 c);
s32 func_020b50e8();
s32 func_020b5178(s32 v);
void *_ZN12Unk_0207e94013func_0207f170Ev(void *p);
void func_0204ed8c(void *p, s32 x, s32 y);
s32 func_0207e278(void *p);
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(void *buf, void *v, s32 a, s32 b);
s32 _ZN12Unk_0203389c13func_02033914Ei(void *buf, s32 f);
void func_02033988(void *buf);
s32 _ZN11SaveRecord413func_0209ea50Ev(void *p);
void *func_020838f4(s32 v);
void *func_02083780(s32 v);
u16 *func_02083578(s32 v);
u16 *func_0208343c(s32 v);
u16 *func_0208336c(s32 v);
u16 *func_0208323c(s32 v);
u16 *func_02083058(void *a, void *b, u32 c, s32 d);
u16 *func_0208310c(s32 v);
BOOL func_02084de0(s32 a, s32 *p);
s32 func_0203f2e0(s32 a, void *b, s32 c);
s32 func_02083f44(void *p);
void func_02083ef4(void *p, s32 x, s32 y);
s32 func_02083ed4(void *p, s32 x, s32 y);
void func_02084ae4(void *a);
void func_02084960(u8 *a);
void func_020847b0(void *a);
s32 func_02084e20(u8 *a, void *v);
void func_02084c94(void *a, void *v);
}
static inline BOOL Unk_020845a8_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}

namespace F5 {
extern "C" {
extern u8 data_021cd640;
extern u8 data_021cd654[];
extern u8 data_021cd844[];
extern u8 data_020e0994[];
extern u8 data_021dfd8c[];
extern u8 data_020e416c;
extern Unk_020cbb18_Data *data_020cbb18;
void MI_CpuFill8(void *p, u32 v, u32 n);
void *func_0207bf60(void *, s32);
void *_ZN12VillagerData13func_020805c4Ev(void *);
s32 _ZN12Unk_02002fc813func_020030b4Ev(void *);
u8 *_ZN12Unk_0207e94013func_0207f170Ev(...);
void func_0204ed8c(Unk_02084ecc_Vec *out, s32 x, s32 z);
void func_02076a6c(void *, s32, s32);
void func_02076b08(void *, s32, s32);
s32 func_02083e60(void *);
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *, u32);
s32 func_020b50e8();
s32 func_020b4910();
void *func_0204da0c();
void *func_02037558(void *, s32, s32, s32);
void func_02037590(void *, u16 *, s32, s32, s32);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
}

}

extern "C" void func_02084ffc()
{
    Unk_02084ffc_Grid *g = (Unk_02084ffc_Grid *)F5::func_0204da0c();
    s32 x, y;
    if (g != NULL) {
        for (y = 1; y < 5; y++) {
            for (x = 1; x < 5; x++) {
                u8 *cell;
                u16 *p;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    cell = g->unk_00 + (y * g->unk_04 + x) * 0x28;
                } else {
                    cell = NULL;
                }
                if (cell != NULL) {
                    p = (u16 *)F5::func_02037558(cell, 0, 0, 0);
                    if (p != NULL) {
                        s32 i, j;
                        for (j = 0; j < 16; j++) {
                            for (i = 0; i < 16; i++) {
                                u16 v[2];
                                BOOL ok;
                                if (F5::Item_IsFurniture(p)) {
                                    v[1] = 0x1568;
                                    s32 t = F5::Item_GetFurnitureIndex(p);
                                    ok = (t == F5::Item_GetFurnitureIndex(&v[1])) ? TRUE : FALSE;
                                } else {
                                    if (*p == 0x1568) ok = TRUE; else ok = FALSE;
                                }
                                if (ok) {
                                    v[0] = 0xfff1;
                                    F5::func_02037590(cell, v, i, j, 0);
                                }
                                p++;
                            }
                        }
                    }
                }
            }
        }
    }
}

extern "C" s32 func_02084fbc()
{
    BOOL b = (F5::data_020e416c == 0);
    if (b) {
        Unk_020cbb18_Data *d = F5::data_020cbb18;
        if (F5::_ZN12Unk_020cbb1813func_02072e88Ei(d, d->unk_64)) {
            return 0;
        }
    }
    F5::func_020b50e8();
    return F5::func_020b4910();
}

Unk_02083c28_G::~Unk_02083c28_G() {}

extern "C" Unk_020e09ac *func_02084f84()
{
    return new Unk_020e09ac();
}

extern "C" void func_02084f48()
{
    F5::data_021cd640 = 0;
    F5::MI_CpuFill8(F5::data_021cd654, 0, 0xf0);
    F5::MI_CpuFill8(F5::data_021cd844, 0, 0x474);
    F5::func_02083e60(F5::data_020e0994);
}

extern "C" void func_02084ecc()
{
    u8 *p = F5::data_021cd654;
    s32 i;
    s32 z = 0;
    F5::MI_CpuFill8(p, 0, 0xf0);
    for (i = 0; i < 8; p += 0x1e, i++) {
        void *o = F5::func_0207bf60(F5::data_021dfd8c, i);
        if (o != NULL && F5::_ZN12Unk_02002fc813func_020030b4Ev(F5::_ZN12VillagerData13func_020805c4Ev(o)) != 0) {
            Unk_02084ecc_Vec v;
            v.x = 0;
            v.y = 0;
            v.z = 0;
            u8 *q = F5::_ZN12Unk_0207e94013func_0207f170Ev(o);
            F5::func_0204ed8c(&v, q[0] + 1, q[1] + 2);
            F5::func_02076a6c(p + 4, v.x, v.z);
            F5::func_02076b08(p + 3, z, z);
            p[0] = 1;
        }
    }
}

extern "C" s32 func_02084e20(u8 *a, void *out)
{
    s32 r6;
    if (F4::func_02083f44(a + 0x50)) {
        s32 cnt = 0;
        s32 x, y;
        for (x = 0; x < 16; x++) {
            F4::func_02083ef4(a + 0x50, x, 14);
            F4::func_02083ef4(a + 0x50, x, 15);
        }
        for (y = 0; y < 14; y++) {
            for (x = 0; x < 16; x++) {
                if (F4::func_02083ed4(a + 0x50, x, y)) cnt++;
            }
        }
        if (cnt > 0) {
            s32 y, x;
            r6 = F4::func_02063b8c(cnt);
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F4::func_02083ed4(a + 0x50, x, y)) {
                        if (r6 == 0) {
                            F4::func_0204ed8c(out, x, y);
                            return 1;
                        }
                        r6--;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" BOOL func_02084de0(s32 a, s32 *p)
{
    s32 t[2];
    u8 buf[8];
    t[0] = 0;
    t[1] = 0;
    if (p == 0) {
        F4::func_0209d498(t);
        p = t;
    }
    F4::MI_CpuCopy8(p, buf, 8);
    if (F4::func_0203f2e0(a, buf, 0)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02084ce0(u16 *out)
{
    s32 r4 = F4::_ZN11SaveRecord413func_0209ea50Ev(F4::data_021ed315);
    u16 *p;
    void *q = F4::func_020838f4(0);
    if (q == 0) {
        q = F4::func_02083780(0);
    }
    if (q) {
        *out = 0xfff1;
        return;
    }
    p = F4::func_02083578(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::func_0208343c(0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && F4::func_02084de0(0x3d, 0)) {
        *out = 0xd00e;
        return;
    }
    p = F4::func_0208336c(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::func_0208323c(0);
    if (p) {
        *out = p[1];
        return;
    }
    p = F4::func_02083058(F4::data_020cf208, F4::data_020cf1d8, F4::data_020cf1cc, 0);
    if (p) {
        *out = p[1];
        return;
    }
    if (r4 == 0 && F4::func_02084de0(0x3f, 0)) {
        *out = 0xd00a;
        return;
    }
    if (r4 == 0 && F4::func_02084de0(0x40, 0)) {
        *out = 0xd00b;
        return;
    }
    p = F4::func_0208310c(0);
    if (p) {
        *out = p[1];
        return;
    }
    *out = 0xfff1;
}

extern "C" void func_02084c94(void *a, void *vec)
{
    u32 buf[17];
    void *u;
    F4::_ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(buf, u, 0, 0);
    if (F4::func_0207e278(a) == 0) {
        if (F4::_ZN12Unk_0203389c13func_02033914Ei(buf, 0)) {
            u8 *p = (u8 *)F4::_ZN12Unk_0207e94013func_0207f170Ev(a);
            F4::func_0204ed8c(vec, p[0] + 1, p[1] + 2);
        }
    }
    F4::func_02033988(buf);
}

extern "C" void func_02084ae4(void *a)
{
    Unk_02084ae4_W w;
    Unk_02084ae4_Vec v;
    s32 n, cnt, i;
    w.h[0] = 0xfff1;
    w.h[1] = 0;
    w.h[2] = 0;
    w.h[3] = 0;
    n = F4::func_020812f4();
    cnt = 0;
    w.b = 0;
    if (n > 0) {
        i = cnt;
        goto test0;
    loop0:
        void *r7 = F4::func_0207bf60(F4::data_021dfd8c, i);
        if (r7 == 0) goto next0;
        if (F4::_ZN12Unk_02002fc813func_020030b4Ev(F4::_ZN12VillagerData13func_020805c4Ev(r7)) == 0) goto next0;
        if (F4::func_0207b7d4(F4::data_021dfd8c, F4::_ZN12VillagerData13func_020805c4Ev(r7)) == 0) goto next0;
        w.b = 0;
        v.x = 0;
        v.y = 0;
        v.z = 0;
        w.h[1] = 0;
        w.h[2] = 0;
        w.h[3] = 0;
        w.h[0] = (i & 0xfff) | 0xe000;
        u8 *e = (u8 *)F4::func_02084398(&w.h[0]);
        if (e != 0 && e[0] != 0) {
            F4::func_02076ae8(e + 3, &w, 0);
            if (w.b == F4::func_020b50e8()) {
                F4::func_02076a2c(e + 4, &v.x, &v.z);
                F4::MI_CpuCopy8(e + 9, &w.h[2], 2);
            } else {
                u8 *p = (u8 *)F4::_ZN12Unk_0207e94013func_0207f170Ev(r7);
                F4::func_0204ed8c(&v, p[0] + 1, p[1] + 2);
            }
        } else if (F4::func_020a62a0() && ((u8 *)(F4::data_021cd654 + i * 30))[0] != 0) {
            u8 *t = F4::data_021cd654 + i * 30;
            F4::func_02076ae8(t + 3, &w, 0);
            s32 wb = w.b;
            if (wb != F4::func_020b50e8() && F4::func_020b5198(wb) == 0 && F4::func_020b5178(w.b) == 0 && w.b != 0x2c) {
                u8 *p = (u8 *)F4::_ZN12Unk_0207e94013func_0207f170Ev(r7);
                F4::func_0204ed8c(&v, p[0] + 1, p[1] + 2);
            } else {
                F4::func_02076a2c(t + 4, &v.x, &v.z);
                F4::func_02084c94(r7, &v);
            }
        } else {
            u8 *p = (u8 *)F4::_ZN12Unk_0207e94013func_0207f170Ev(r7);
            F4::func_0204ed8c(&v, p[0] + 1, p[1] + 2);
        }
        if (F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(0x84, w.h[0], &v, &w.h[1], a)) {
            cnt++;
        }
    next0:
        i++;
    test0:
        if (i < 8 && cnt < n) goto loop0;
    }
}

extern "C" void func_02084960(u8 *a)
{
    s32 r7 = F4::func_020b51d4();
    void *obj = F4::func_0207bf60(F4::data_021dfd8c, r7);
    if (obj == 0) {
        return;
    }
    if (F4::_ZN12Unk_02002fc813func_020030b4Ev(F4::_ZN12VillagerData13func_020805c4Ev(obj)) == 0) {
        return;
    }
    u16 h[5];
    Unk_02084ae4_Vec v;
    h[0] = 0xfff1;
    h[1] = 0xfff1;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[2] = 0;
    h[3] = 0;
    h[4] = 0;
    h[0] = (r7 & 0xfff) | 0xe000;
    u8 *e = (u8 *)F4::func_02084398(h);
    s32 r4;
    if (F4::func_020a62a0()) {
        r4 = F4::func_02084e20(a, &v);
        h[3] = F4::func_02063b8c(4) << 14;
    } else if (e != 0 && e[0] != 0) {
        F4::func_02076a2c(e + 4, &v.x, &v.z);
        F4::MI_CpuCopy8(e + 9, &h[3], 2);
        r4 = 1;
    } else {
        r4 = F4::func_02084e20(a, &v);
        h[3] = F4::func_02063b8c(4) << 14;
    }
    if (r4 != 0) {
        s32 c = 0x85;
        s32 r6 = 0xd8;
        if (F4::_ZN12Unk_020cbb1813func_02072e88Ei(F4::data_020cbb18, F4::data_020cbb18->unk_64) == 0) {
            if (r7 == F4::func_02078294()) {
                c = 0x80;
                if (F4::func_0207c014(F4::func_02078264())) {
                    h[1] = (F4::func_02078264() & 0xfff) | 0xe000;
                    r6 = 0x81;
                }
            } else if (r7 == F4::func_0207a484(F4::data_021dfd8c)) {
                if (F4::_ZN12Unk_020994cc13func_02099668Ev(F4::func_0207a4b8(F4::data_021dfd8c)) == 0) {
                    c = 0x83;
                }
            } else if (F4::func_02079fd8() == 0xa) {
                if (F4::func_0207e1f0(obj) == 3) {
                    c = 0x86;
                }
            }
        }
        F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(c, h[0], &v, &h[2], a);
        if (r6 != 0xd8) {
            if (((s32)(h[1] & 0xf000) >> 12) == 0xe) {
                F4::func_02084e20(a, &v);
                h[3] = F4::func_02063b8c(4) << 14;
                F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(r6, h[1], &v, &h[2], a);
            }
        }
    }
}

extern "C" void func_020847b0(void *a)
{
    s32 t;
    s32 code;
    BOOL flag;
    Unk_02084ae4_Vec v;
    u16 h[4];
    s32 vv[2];
    if (F4::_ZN12Unk_020cbb1813func_02072e88Ei(F4::data_020cbb18, F4::data_020cbb18->unk_64)) {
        return;
    }
    code = 0x85;
    flag = FALSE;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    h[1] = 0;
    h[2] = 0;
    h[3] = 0;
    h[0] = 0xfff1;
    s32 st = F4::func_02079fd8();
    if (st == 0xb) {
        Unk_020847b0_Top *top = (Unk_020847b0_Top *)F4::_ZN10PlayerData13func_0209865cEv(F4::PlayerData_GetCurrent());
        Unk_020847b0_Mid &m = *top;
        Unk_020847b0_Q1 &q = m;
        u8 *r7 = (u8 *)&m;
        u8 *r4 = (u8 *)&q;
        s32 r5 = ~flag;
        if (F4::_ZN12Unk_0209ada413func_0209ad68Ev(r4)) {
            if (F4::_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 0x15) {
                vv[0] = flag;
                vv[1] = flag;
                F4::func_0209d498(vv);
                t = F4::func_0209d374(r7 + 0x18, vv);
                if (F4::_ZN12Unk_0209ada413func_0209abc4Ev(r4) == 0) {
                    if (t <= 0x1e) {
                        r5 = F4::func_0207bfb4(F4::data_021dfd8c, r7);
                    }
                } else if ((u32)F4::_ZN12Unk_0209ada413func_0209abc4Ev(r4) < 4) {
                    if (t <= 0x3c) {
                        r5 = F4::func_0207bfb4(F4::data_021dfd8c, r7);
                        if (F4::func_0207c014(r5)) {
                            u8 *e = F4::data_021cd654 + r5 * 30;
                            if (e[0] != 0) {
                                F4::func_02076a2c(e + 4, &v.x, &v.z);
                                F4::MI_CpuCopy8(e + 9, &h[2], 2);
                            }
                        }
                    } else {
                        F4::func_020b101c();
                        if (F4::func_0207bf38(F4::data_021dfd8c, r7)) {
                            F4::func_0207e310();
                            F4::func_020785a8();
                        }
                    }
                }
            }
        }
        if (r5 != -1) {
            h[0] = (r5 & 0xfff) | 0xe000;
            code = 0x82;
            flag = TRUE;
        }
    } else if (st == 0xa) {
        if (F4::func_020b5198(F4::func_020b50dc())) {
            F4::func_020798a0(F4::data_021dfd8c);
        }
        s32 r4 = F4::func_02078204();
        if (F4::func_0207c014(r4)) {
            h[0] = (r4 & 0xfff) | 0xe000;
            code = 0x87;
            if (F4::func_020b5198(F4::func_020b50dc()) == 0) {
                u8 *e = F4::data_021cd654 + r4 * 30;
                if (e[0] != 0) {
                    F4::func_02076a2c(e + 4, &v.x, &v.z);
                    F4::MI_CpuCopy8(e + 9, &h[2], 2);
                }
            }
            flag = TRUE;
        }
    }
    if (flag) {
        F4::_ZN5Actor5spawnEPvS0_S0_S0_S0_(code, h[0], &v, 0, a);
    }
}

BOOL Unk_020e09ac::vfunc_00()
{
    u8 *a = (u8 *)this;
    u32 saved = F4::data_020cf1c8;
    u8 *g = F4::data_021dfd8c;
    F4::_ZN12Unk_02086c0413func_02086e78Ev(F4::func_02085174(F4::func_020850e0()));
    F4::_ZN12Unk_02086b7c13func_02086b88Ev(F4::func_02085170(F4::func_020850e0()));
    if (F4::func_020b5184()) {
        if (g != 0) {
            F4::func_02079a0c(g);
            F4::func_02079954(g);
        }
        F4::func_0207821c(-1);
    } else {
        if (F4::func_020b5198(F4::func_020b50dc())) {
            s32 sp[2];
            sp[0] = 0;
            sp[1] = 0;
            s32 r4 = F4::func_02078294();
            F4::func_0209d498(sp);
            s32 m = -1;
            if (r4 != m) {
                if (r4 != F4::func_02079ab0(g, sp)) {
                    F4::func_020782ac(-1);
                    F4::func_0207827c(-1);
                    if (g != 0) {
                        F4::func_02079954(g);
                    }
                }
            }
        }
    }
    if (F4::Unk_020845a8_IsZero(F4::data_020e416c)) {
        if (F4::func_02083b84() == 0) {
            if (F4::_ZN12Unk_020cbb1813func_02072e88Ei(F4::data_020cbb18, F4::data_020cbb18->unk_64) == 0) {
                s32 r1;
                if (F4::PlayerData_GetCurrent()) {
                    r1 = F4::_ZN10PlayerData11getPlayerIdEv(F4::PlayerData_GetCurrent());
                } else {
                    r1 = 0;
                }
                F4::func_020793e8(g, r1);
            }
            F4::func_02084ae4(a);
        }
    } else if (F4::func_020b51a4()) {
        F4::func_02084960(a);
    } else if (F4::func_020b52f8()) {
        if (g != 0) {
            if (F4::func_02079fd8() != 0xa) {
                s32 m = -1;
                if (F4::func_02078204() != m) {
                    F4::func_0207821c(m);
                    F4::func_020b101c();
                }
            }
        }
        if (F4::func_020b5328() == 0) {
            F4::func_020847b0(a);
        }
    }
    F4::_ZN12Unk_02083c2813func_02083d14Ev(a);
    u16 *r4 = (u16 *)F4::_ZN12Unk_02083c2813func_02083c28EP16Unk_02083c28_Enti(a, F4::data_020e0a78, saved);
    if (r4) {
        F4::_ZN12Unk_02086b7c13func_02086b7cEv(F4::func_02085170(F4::func_020850e0()));
        if (r4[1] != 0xd008 || F4::_ZN12Unk_02086c0413func_02086eb0Ev(F4::func_02085174(F4::func_020850e0())) != 0) {
            F4::_ZN12Unk_02086c0413func_02086e6cEv(F4::func_02085174(F4::func_020850e0()));
        }
    }
    F4::func_020832c4(a);
    if (F4::func_020b5184()) {
        F4::func_0207af34(g);
    }
    return TRUE;
}

BOOL Unk_020e09ac::vfunc_0c()
{
    F4::_ZN12Unk_02083c0813func_02083c08Ev();
    F4::func_02083e60(F4::data_020e0994);
    F4::func_020782c4();
    if (F4::func_020b5184()) {
        void *g = F4::data_021dfd8c;
        F4::func_0207af34(g);
        s32 v = F4::func_020b4994();
        if (F4::func_020b51b8()) {
            void *r = F4::func_0207bdf4(g, (s8)v);
            if (r) {
                if (F4::_ZN12Unk_02002fc813func_020030b4Ev(F4::_ZN12VillagerData13func_020805c4Ev(r))) {
                    F4::func_0207e4f4(r);
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_020e09ac::onExecute()
{
    u8 *g = F3::data_021dfd8c;
    void *a, *b;
    s32 i;
    u16 id;
    if (F3::func_020b5184()) {
        F3::func_0207869c();
        if (F3::_ZN12Unk_020cbb1813func_02072e88Ei(F3::data_020cbb18, F3::data_020cbb18->unk_64) == 0) {
            if (g) F3::func_0207b74c(g);
        }
    }
    if (F3::_ZN12Unk_020cbb1813func_02072e88Ei(F3::data_020cbb18, F3::data_020cbb18->unk_64) == 0) {
        if (g) {
            id = 0xfff1;
            for (i = 0; i < 8; i++) {
                a = F3::func_0207bf60(g, i);
                if (a) {
                    F3::_ZN12VillagerData13func_020805c4Ev();
                    if (F3::_ZN12Unk_02002fc813func_020030b4Ev()) {
                        b = F3::func_0207e310(a);
                        if (b) {
                            id = (i & 0xfff) | 0xe000;
                            if (F3::func_0208168c(&id) == 0) {
                                if (F3::func_0207856c(b)) {
                                    F3::func_0207853c(b);
                                    if (F3::func_02078548(b) == 0) F3::func_02078568(b, 0);
                                    F3::func_020784b8(F3::func_020784f4(b), 0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return TRUE;
}

extern "C" BOOL func_02084464(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        F3::func_02076b08((u8 *)r + 3, b, 0);
        F3::func_02076a6c((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02084430(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02084404(void *dst, s32 id) {
    void *o;
    F3::func_020843c4(dst, id);
    o = F3::func_0207aa78(id - 0xc);
    if (o) {
        F3::func_02078568(o, 0);
        F3::func_0207854c(o, 0);
    }
}

extern "C" void func_020843c4(void *dst, s32 id) {
    u32 i = id - 0xc;
    if (i < 8) {
        Unk_02083c28_Rec *r = &F3::data_021cd654[i];
        r->unk_00 = 1;
        F3::MI_CpuCopy8(r, dst, F3::func_020766e0(id));
        F3::data_021cd640 = 1;
    }
}

extern "C" u8 *func_02084398(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 8) return F3::_ZN12Unk_020cbb1813func_02072970Ej(F3::data_020cbb18, i + 0xc);
    return 0;
}

extern "C" BOOL func_0208432c(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        F3::func_02076b08((u8 *)r + 3, b, 0);
        F3::func_02076a6c((u8 *)r + 4, v->x, v->z);
        F3::MI_CpuCopy8(&c, (u8 *)r + 9, 2);
        F3::MI_CpuCopy8(d, (u8 *)r + 0xf, 0xf);
        F3::MI_CpuCopy8(e, (u8 *)r + 0xb, 4);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020842f8(u16 *p, u32 b, u32 c) {
    u32 i = *p & 0xfff;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        r->unk_01 = b;
        r->unk_02 = c;
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020842c0(void *dst, s32 id) {
    u32 i = id - 0x20;
    if (i < 0x26) {
        Unk_02083c28_Rec *r = &F3::data_021cd844[i];
        r->unk_00 = 1;
        F3::MI_CpuCopy8(r, dst, F3::func_020766e0(id));
    }
}

extern "C" u8 *func_02084294(u16 *p) {
    u32 i = *p & 0xfff;
    if (i < 0x26) return F3::_ZN12Unk_020cbb1813func_02072970Ej(F3::data_020cbb18, i + 0x20);
    return 0;
}

extern "C" BOOL func_02084254(u16 *p, u32 b, Unk_02083c28_Vec *v, u16 c, u8 *d, u8 *e) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084464(p, b, v, c, d, e);
    if (k == 0xd) return F3::func_0208432c(p, b, v, c, d, e);
    return 0;
}

extern "C" BOOL func_02084228(u16 *p, u32 b, u32 c) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084430(p, b, c);
    if (k == 0xd) return F3::func_020842f8(p, b, c);
    return 0;
}

extern "C" u8 *func_020841fc(u16 *p) {
    s32 k = (*p & 0xf000) >> 12;
    if (k == 0xe) return F3::func_02084398(p);
    if (k == 0xd) return F3::func_02084294(p);
    return 0;
}

extern "C" void func_0208419c(u32 a, u32 b, u32 c, u16 *p) {
    F3::func_02084228(p, b, c);
    if (F3::_ZN12Unk_020cbb1813func_02072e88Ei(F3::data_020cbb18, F3::data_020cbb18->unk_64)) {
        u32 v = *p;
        s32 k = (s32)(v & 0xf000) >> 12;
        u32 idx = v & 0xfff;
        if (k == 0xe) {
            F3::func_02076280(idx + 0xc, (u8 *)&a, 0, 0);
        } else if (k == 0xd) {
            F3::func_02076280(idx + 0x20, (u8 *)&a, 0, 0);
        }
    }
}

extern "C" BOOL func_0208416c(s32 *a, s32 *b, u16 *p) {
    u8 *rec = F3::func_020841fc(p);
    if (rec && rec[0] != 0) {
        *a = rec[1];
        *b = rec[2];
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02084040() {
    struct {
        u8 b[2];
        u16 id;
    } l;
    s32 s4, s8;
    s32 i;
    s32 ovl = F3::func_020b50e8();
    Unk_020cbb18 *d;
    s4 = 4;
    s8 = 4;
    l.id = 0xfff1;
    i = 0;
    d = F3::data_020cbb18;
    for (; i < 8; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xe000;
        rec = F3::func_020841fc(&l.id);
        if (rec) {
            F3::func_02076ae8(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        F3::func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
    for (i = 0; i < 0x26; i++) {
        u8 *rec;
        l.id = (i & 0xfff) | 0xd000;
        rec = F3::func_020841fc(&l.id);
        if (rec) {
            F3::func_02076ae8(rec + 3, l.b, 0);
            if (l.b[0] == ovl) {
                s4 = 4;
                s8 = 4;
                if (F3::func_0208416c(&s4, &s8, &l.id)) {
                    if (s8 >= 4) {
                        F3::func_0208419c(1, 4, 4, &l.id);
                    } else if (s8 == d->unk_64 && s8 != s4) {
                        F3::func_0208419c(1, d->unk_64, 4, &l.id);
                    }
                }
            }
        }
    }
}

Unk_02084038::Unk_02084038() {}

Unk_02084038::~Unk_02084038() {}

extern "C" BOOL func_02083f44(u16 *out) {
    s32 y, x;
    u16 *grid = F3::data_021c47c4;
    F3::MI_CpuFill8(out, 0, 0x20);
    if (grid) {
        u16 *p = F3::func_0204ebd8(grid, 0, 0, 0, 0, 0);
        if (p) {
            for (y = 0; y < 16; y++) {
                for (x = 0; x < 16; x++) {
                    Unk_02083c28_Vec v;
                    F3::func_0204ed8c(&v, x, y);
                    Unk_0203398c o(&v, 0, 0);
                    if (*p == 0xfff1 && !o.func_02033914(1)) {
                        F3::func_02083f1c(out, x, y);
                    }
                    p++;
                }
            }
            for (y = 0; y < 14; y++) {
                for (x = 0; x < 16; x++) {
                    if (F3::func_02083ed4(out, x, y) && !F3::func_02083ed4(out, x + 1, y) && !F3::func_02083ed4(out, x - 1, y)
                        && !F3::func_02083ed4(out, x, y + 1) && !F3::func_02083ed4(out, x, y - 1)) {
                        F3::func_02083ef4(out, x, y);
                    }
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083f1c(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] |= (1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02083ef4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        arr[y] &= ~(1 << x);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02083ed4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 16) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02083eb4(u16 *arr, s32 x, s32 y) {
    if ((u32)x < 16 && (u32)y < 14) {
        if ((arr[y] >> x) & 1) return TRUE;
        return FALSE;
    }
    return FALSE;
}

extern "C" void func_02083e7c(Unk_02083c28_G *out, u16 *idp, u32 b, u32 c, Unk_02083c28_Vec *pos) {
    out->unk_0c = *idp;
    out->unk_0e = b;
    out->unk_0f = c;
    if (pos) {
        *(Unk_02083c28_Vec *)&out->pos = *pos;
    } else {
        *(Unk_02083c28_Vec *)&out->pos = F3::gVec3Zero;
    }
}

extern "C" void func_02083e60(Unk_02083c28_G *g) {
    F3::func_02083e7c(g, (u16 *)&F3::data_020e0874[1], 0x33, 0, 0);
}

extern "C" BOOL func_02083e50(void *p, Unk_02083c28_G *g) {
    BOOL r = FALSE;
    u32 v = g->unk_0f;
    if (v != 0 && v < 5) r = TRUE;
    return r;
}

void Unk_02083c28::func_02083e40(u32 *p) {
    unk_70 = 1;
    unk_74 = *p;
}

void Unk_02083c28::func_02083e38() { unk_70 = 0; }

extern "C" u16 *func_02083e10(u16 *key, Unk_02083c28_Ent *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (tbl->id2 == *key) return (u16 *)tbl;
    }
    return 0;
}

extern "C" u16 *func_02083de8(u16 *key, Unk_02083c28_Ent *tbl, s32 n) {
    s32 i;
    for (i = 0; i < n; tbl++, i++) {
        if (*key == tbl->id) return (u16 *)tbl;
    }
    return 0;
}

extern "C" BOOL func_02083dbc(u16 *p, u32 lvl, u32 b, Unk_02083c28_Vec *pos) {
    if (F3::data_020e0994.unk_0f < lvl) {
        F3::func_02083e7c(&F3::data_020e0994, p, b, lvl, pos);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02083d84(u16 *p, u8 b, Unk_02083c28_Vec *pos) {
    if (F3::func_02083ba4(p) == 0 && F3::_ZN12Unk_020cbb1813func_02072e88Ei(F3::data_020cbb18, F3::data_020cbb18->unk_64) == 0) {
        return F3::func_02083dbc(p, 1, b, pos);
    }
    return 0;
}

BOOL Unk_02083c28::func_02083d14() {
    Unk_02083d14_Ent *e = F3::data_020e09f4;
    s32 ovl = F3::func_020b50e8();
    s32 i = 0;
    Unk_02083c28_Vec *z = 0;
    for (; i < 11; e++, i++) {
        if (e->lvl <= F3::data_020e0994.unk_0f) break;
        if (e->fn) {
            u16 *r = (this->*(e->fn))();
            if (r) {
                if (F3::func_02083dbc(r, e->lvl, ovl, z)) return TRUE;
            }
        }
    }
    return FALSE;
}

u16 *Unk_02083c28::func_02083c28(Unk_02083c28_Ent *tbl, s32 n) {
    u16 *result = 0;
    if (F3::func_02083e50(this, &F3::data_020e0994)) {
        Unk_02083c28_Ent *e = (Unk_02083c28_Ent *)F3::func_02083de8(&F3::data_020e0994.unk_0c, tbl, n);
        if (e) {
            if (F3::data_020e0994.unk_0e == F3::func_020b50e8()) {
                Unk_02083c28_Vec v;
                u16 t[3];
                t[0] = 0;
                t[1] = 0;
                t[2] = 0;
                if (e->fn) {
                    (this->*(e->fn))(&v, t, &F3::data_020e0994);
                }
                if (e->flag) {
                    F3::OverlayMgr_Acquire(e->ovl);
                    func_02083e40(&e->ovl);
                } else {
                    func_02083e38();
                }
                if (F3::_ZN5Actor5spawnEPvS0_S0_S0_S0_(e->id, e->id2, &v, t, this)) {
                    if (F3::Unk_02083c28_IsZero(F3::data_020e416c)) {
                        if (F3::_ZN12Unk_020cbb1813func_02072e88Ei(F3::data_020cbb18, F3::data_020cbb18->unk_64) == 0) {
                            Unk_02083c28_Vec w;
                            w.x = v.x;
                            w.y = v.y;
                            w.z = v.z;
                            F3::func_0204263c(&w);
                        }
                    }
                    result = (u16 *)e;
                }
            }
        }
        F3::func_02083e60(&F3::data_020e0994);
    }
    return result;
}

void Unk_02083c08::func_02083c08()
{
    if (unk_70 != 0) {
        F2::OverlayMgr_Release(unk_74);
        ((Unk_02083c28 *)this)->func_02083e38();
    }
}

extern "C" s32 func_02083bc8(Unk_02083314_Ent *p, s32 n)
{
    u32 buf[3];
    s32 i;
    buf[0] = 0;
    buf[1] = 0;
    F2::func_0209d498(buf);
    for (i = 0; i < n; p++, i++) {
        if (F2::func_02084de0(p->a, buf) != 0)
            return i;
    }
    return -1;
}

extern "C" BOOL func_02083ba4()
{
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0 && F2::_ZN12Unk_02097ff413func_02098044Ej(r, 1) != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL func_02083b84()
{
    if (F2::func_020b0f0c() != 0 || F2::func_020b0f30() != 0)
        return TRUE;
    return FALSE;
}

extern "C" BOOL func_02083b2c()
{
    u16 k;
    if (F2::func_020b50e8() == 0 && F2::_ZN12Unk_02086f1413func_02086f18Ev(F2::func_0208517c(F2::func_020850e0())) != 0 && F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
        k = 0xd011;
        return (BOOL)F2::func_02083e10(&k, F2::data_020e0a78, F2::data_020cf1c8);
    }
    return FALSE;
}

extern "C" BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p)
{
    u16 k[2];
    BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        void *g = F2::data_021c47c4;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
                k[0] = 0x5014;
            k[1] = 0x501a;
            if (F2::func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                F2::func_0204eda4(p, x, y, z, w);
                p->z = p->z + 0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083a20()
{
    u16 k;
    void *r4 = F2::PlayerData_GetCurrent();
    if (F2::func_020b50e8() == 0 && F2::func_02083b84() == 0 && F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0 && r4 != 0 && F2::_ZN12Unk_02097ff413func_02098044Ej(r4, 0x23) != 0) {
        if (F2::func_020b530c(F2::func_020b50dc()) != 0 || F2::func_020b50dc() == 6) {
            k = 0xd019;
            return (BOOL)F2::func_02083e10(&k, F2::data_020e0a78, F2::data_020cf1c8);
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = F2::data_021c47c4;
    s32 x = 0, y = 0, z = 0, w = 0;
    if (g != 0) {
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (F2::func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            q->a = 0;
            q->b = 0x4000;
            q->c = 0;
            F2::func_0204ed70(p, x, y, z, w);
            p->x = p->x - 0x8000;
            p->z = p->z + 0x6000;
            p->y = 0;
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083944()
{
    if (F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
        if (F2::func_020851bc(F2::func_020850e0(), 8) != 0 && F2::func_02083b84() == 0 && F2::func_02083ba4() == 0)
            return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_020838f4(s32 flag)
{
    if (F2::func_02083944() != 0) {
        if (flag != 0) {
            BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail;
            if (F2::func_020b50e8() == 0x2c)
                goto fail;
        }
        return (BOOL)F2::func_02083de8(F2::data_020e0870, F2::data_020e0a78, F2::data_020cf1c8);
    }
  fail:
    return FALSE;
}

extern "C" BOOL func_020838e8(s32 a, s32 b, s32 c)
{
    return F2::func_020838f4(1);
}

extern "C" BOOL func_02083898()
{
    void *r4;
    void *r = F2::PlayerData_GetCurrent();
    if (r != 0)
        r4 = F2::func_02099db4(F2::_ZN10PlayerData13func_0209865cEv(r), 0);
    else
        r4 = 0;
    if (r4 != 0) {
        if (F2::_ZN12Unk_0209ada413func_0209ad68Ev(F2::func_0209a4f0(r4)) != 0) {
            if (F2::_ZN12Unk_0209ada413func_0209abccEv(F2::func_0209a4f0(r4)) == 1) {
                if (F2::func_02083b84() == 0)
                    return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083780(s32 flag)
{
    s32 pass; s32 idx; s32 ok; s32 r6;
    u16 k1, k2;
    if (F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
        ok = TRUE;
        if (flag != 0) {
            pass = FALSE;
            if ((F2::data_020e416c == 0 ? ok : pass) != 0) {
                if (F2::func_020b50e8() != 0x2c)
                    pass = TRUE;
            }
            if (pass == 0)
                ok = FALSE;
        }
        if (F2::func_02083898() != 0) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::func_02083de8(F2::data_020e0874, F2::data_020e0a78, F2::data_020cf1c8);
        }
        idx = -1;
        if (F2::func_02083b84() == 0)
            idx = F2::func_02083bc8(F2::data_020cf228, 8);
        if (idx != -1) {
            r6 = F2::data_020cf1e8[idx];
            if (r6 != F2::func_02040c70() && r6 != 0x13)
                idx = -1;
        }
        if (idx != -1) {
            if (ok == 0)
                goto fail;
            return (BOOL)F2::func_02083de8(&F2::data_020cf228[idx].b, F2::data_020e0a78, F2::data_020cf1c8);
        }
        if (F2::func_02083944() == 0 && F2::func_020b50e8() == 9) {
            k1 = 0xd025;
            return (BOOL)F2::func_02083e10(&k1, F2::data_020e0a78, F2::data_020cf1c8);
        }
    } else if (F2::func_020b50e8() == 9) {
        k2 = 0xd025;
        return (BOOL)F2::func_02083e10(&k2, F2::data_020e0a78, F2::data_020cf1c8);
    }
  fail:
    return FALSE;
}

extern "C" BOOL func_02083774(s32 a, s32 b, s32 c)
{
    return F2::func_02083780(1);
}

extern "C" BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    void *g = F2::data_021c47c4;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        u16 k;
        s32 bx, bz;
        k = 0x5000;
        if (F2::func_0204ea88(g, &x, &y, &z, &w, &k, &k, 0x200, 0) != 0) {
            bx = 0;
            bz = 0;
            F2::func_0204edf8(&bx, &bz, x, y, z, w);
            bx -= 2;
            bz += 3;
            F2::func_0204ed8c(p, bx, bz);
            q->b = F2::func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = F2::data_021c47c4;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        s32 bx, bz;
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (F2::func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            bx = 0;
            bz = 0;
            F2::func_0204edf8(&bx, &bz, x, y, z, w);
            bx += 2;
            bz += 2;
            F2::func_0204ed8c(p, bx, bz);
            q->b = F2::func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    return F2::func_020836e4(a, p, q);
}

extern "C" BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    F2::PlayerData_GetCurrent();
    if (F2::func_02083ba4() != 0)
        return F2::func_020836e4(a, p, q);
    return F2::func_0208364c(a, p, q);
}

extern "C" BOOL func_02083608(s32 a, Unk_02083314_V3 *p)
{
    p->x = 0;
    p->y = 0;
    p->z = 0;
    return TRUE;
}

extern "C" BOOL func_02083578(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord413func_0209ea50Ev(&F2::data_021ed315);
    if (F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail2;
            if (F2::func_020b50e8() == 0x2c)
                goto fail2;
        }
        {
            if (r4 == 0 && F2::func_02083ba4() == 0 && F2::func_02083b84() == 0 && F2::func_02084de0(0x3c, 0) != 0) {
                k = 0xd00d;
                return (BOOL)F2::func_02083e10(&k, F2::data_020e0a78, F2::data_020cf1c8);
            }
        }
    }
  fail2:
    return FALSE;
}

extern "C" BOOL func_0208356c(s32 a, s32 b, s32 c)
{
    return F2::func_02083578(1);
}

extern "C" BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        void *g = F2::data_021c47c4;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
            k[0] = 0x5014;
            k[1] = 0x501a;
            if (F2::func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                F2::func_0204eda4(p, x, y, z, w);
                p->x = p->x + 0x4000;
                p->z = p->z + 0x4000;
                q->b = -0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_0208343c(s32 flag)
{
    u16 k;
    void *r4 = F2::_ZN11SaveRecord413func_0209ea50Ev(&F2::data_021ed315);
    if (F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail1;
            if (F2::func_020b50e8() == 0x2c)
                goto fail1;
        }
        {
            if (r4 == 0 && F2::func_02083ba4() == 0 && F2::func_02083b84() == 0 && F2::func_02084de0(0x3b, 0) != 0) {
                k = 0xd002;
                return (BOOL)F2::func_02083e10(&k, F2::data_020e0a78, F2::data_020cf1c8);
            }
        }
    }
  fail1:
    return FALSE;
}

extern "C" BOOL func_02083430(s32 a, s32 b, s32 c)
{
    return F2::func_0208343c(1);
}

extern "C" BOOL func_0208336c(s32 flag)
{
    u16 k;
    if (F2::func_02083ba4() == 0 && F2::func_02083b84() == 0) {
        if (F2::func_02087444() != 0) {
            if (flag == 0)
                goto a8;
            {
                BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
                if (c) {
                    if (F2::func_020b50e8() != 0x2c)
                        goto a8;
                }
            }
            goto c2;
        a8:
            if (F2::_ZN12Unk_020cbb1813func_02072e88Ei(F2::data_020cbb18, F2::data_020cbb18->unk_64) == 0) {
                if (F2::func_02084de0(0x3d, 0) == 0)
                    goto fe;
            }
        }
    c2:
        if (F2::_ZN12Unk_02086f8413func_02086fa8Ev(F2::func_02085178(F2::func_020850e0())) != 0) {
            if (F2::func_020b50e8() == 0xb) {
                if (F2::_ZN12Unk_020cbb1813func_02072e44Ev(F2::data_020cbb18) == 0)
                    goto fe;
            }
        }
        if (F2::_ZN12Unk_02086f8413func_02086fa8Ev(F2::func_02085178(F2::func_020850e0())) != 0) {
            if (F2::func_020b50e8() == 0xc) {
            fe:
                k = 0xd022;
                return (BOOL)F2::func_02083e10(&k, F2::data_020e0a78, F2::data_020cf1c8);
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02083360(s32 a, s32 b, s32 c)
{
    return F2::func_0208336c(1);
}

extern "C" BOOL func_02083314(s32 a, Unk_02083314_V3 *p)
{
    BOOL c = F2::data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        F2::_ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(F2::func_02085178(F2::func_020850e0()), p);
        return TRUE;
    }
    F2::func_0204ed8c(p, 6, 0x11);
    p->x = p->x + 0x1000;
    return TRUE;
}

extern "C" void func_020832c4() {
    if (F1::data_020cbb18->func_02072e88(F1::data_020cbb18->unk_64) != 0) {
        if (F1::func_02083ba4() == 0) {
            if (F1::func_02087444() != 0) {
                if (F1::Unk_02083058_IsA()) {
                    F1::_ZN12Unk_02086f8413func_02086fd0Ev(F1::func_02085178(F1::func_020850e0()));
                }
            }
        }
    }
}

extern "C" BOOL func_0208323c(BOOL flag) {
    u16 v;
    if (F1::func_0208740c() == 0) goto fail;
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::func_020b50e8() == 0x2c) goto fail;
    }
    if (F1::data_020cbb18->func_02072e88(F1::data_020cbb18->unk_64) != 0) goto fail;
    if (F1::func_02084de0(0x3d, NULL) != 0) goto fail;
    v = 0xd023;
    return F1::func_02083e10(&v, F1::data_020e0a78, F1::data_020cf1c8);
fail:
    return FALSE;
}

extern "C" BOOL func_02083230() {
    return F1::func_0208323c(1);
}

extern "C" BOOL func_02083214(void *self, void *b) {
    F1::_ZN12Unk_02086f8413func_02086fb8EP17Unk_02086ec4_Vec3(F1::func_02085178(F1::func_020850e0()), b);
    return TRUE;
}

extern "C" BOOL func_0208310c(BOOL flag) {
    u16 v;
    s32 loc[2];
    loc[0] = 0;
    loc[1] = 0;
    F1::func_0209d498(loc);
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::func_020b50e8() == 0x2c) goto fail;
    }
    if (F1::data_020cbb18->func_02072e88(F1::data_020cbb18->unk_64) != 0) goto fail;
    if (F1::func_02084de0(0x3b, loc) != 0) goto fail;
    if (F1::func_02084de0(0x3c, loc) != 0) goto fail;
    if (F1::func_02084de0(0x3d, loc) != 0) goto fail;
    if (F1::func_02084de0(0x3e, loc) != 0) goto fail;
    if (F1::func_02084de0(0x3f, loc) != 0) goto fail;
    if (F1::func_02084de0(0x40, loc) != 0) goto fail;
    if (F1::func_02084de0(0x41, loc) != 0) goto fail;
    if (F1::func_02084de0(0x42, loc) != 0) goto fail;
    if (F1::func_02084de0(0x43, loc) != 0) goto fail;
    if (F1::func_02084de0(0x44, loc) != 0) goto fail;
    if (F1::_ZN12Unk_0208722413func_0208723cEv(&F1::data_021eca50) == 0) goto fail;
    v = 0xd020;
    return F1::func_02083e10(&v, F1::data_020e0a78, F1::data_020cf1c8);
fail:
    return FALSE;
}

extern "C" BOOL func_02083100() {
    return F1::func_0208310c(1);
}

extern "C" BOOL func_02083058(void *tbl, void *fn, s32 x, BOOL flag) {
    s32 r7 = F1::_ZN11SaveRecord413func_0209ea50Ev(&F1::data_021ed315);
    s32 idx;
    if (flag) {
        if (!F1::Unk_02083058_IsA()) goto fail;
        if (F1::func_020b50e8() == 0x2c) goto fail;
    }
    if (r7 != 0) goto fail;
    if (F1::func_02083ba4() != 0) goto fail;
    if (F1::func_02083b84() != 0) goto fail;
    if (F1::data_020cbb18->func_02072e88(F1::data_020cbb18->unk_64) != 0) goto fail;
    idx = F1::func_02083bc8(tbl, x);
    if (idx == -1) goto fail;
    if (fn != NULL) {
        BOOL (*f)() = ((BOOL (**)())fn)[idx];
        if (f != NULL) {
            if (f() == 0) goto fail;
        }
    }
    return F1::func_02083de8((u8 *)tbl + idx * 8 + 4, F1::data_020e0a78, F1::data_020cf1c8);
fail:
    return FALSE;
}

extern "C" BOOL func_02083038() {
    return func_02083058(F1::data_020cf208, F1::data_020cf1d8, 4, 1);
}

extern "C" BOOL func_0208301c() {
    return func_02083058(F1::data_020cf1d0, NULL, 1, 1);
}

extern "C" BOOL func_02082ff4() {
    if (F1::PlayerData_GetCurrent()) {
        if (F1::_ZN12Unk_020877e013func_02087838Ej(F1::_ZN10PlayerData13func_02098698Ev(), 0x18) == 0) return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02082e80(void *self, void *p1) {
    static Unk_02082e80_Pos list[32];
    Unk_02082e80_Cell *c;
    Unk_02082e80_Grid *m;
    s32 w;
    s32 count;
    s32 x;
    s32 y;
    s32 bx;
    s32 h;
    s32 x1;
    s32 y1;
    s32 xx;
    s32 yy;
    s32 by;
    u32 *sz;
    if (!F1::Unk_02083058_IsA()) goto fail;
    m = F1::data_021c47c4;
    if (m == NULL) return FALSE;
    sz = &m->unk_04[0];
    w = sz[0];
    h = sz[1];
    count = 0;
    y = 0;
    goto ytest;
yloop:
    x = 0;
    goto xtest;
xloop:
    if ((u32)x < m->unk_04[0] && (u32)y < m->unk_04[1] && m->unk_00 != NULL) {
        c = &m->unk_00[y * m->unk_04[0] + x];
    } else {
        c = NULL;
    }
    if (c != NULL && F1::func_020374b0(c, 0x7f000) && F1::func_020374cc(c, 8)) {
        bx = 0;
        by = 0;
        F1::func_0204edf8(&bx, &by, x, y, 0, 0);
        x1 = bx + 0x10;
        yy = by;
        y1 = by + 0x10;
        goto ytest2;
    yloop2:
        xx = bx;
        goto xtest2;
    xloop2:
        if (F1::func_02031194(xx, yy)) {
            list[count].x = xx;
            list[count].y = yy;
            count++;
        }
        if (count >= 32) goto xbreak2;
        xx++;
    xtest2:
        if (xx < x1) goto xloop2;
    xbreak2:
        if (count >= 32) goto ybreak2;
        yy++;
    ytest2:
        if (yy < y1) goto yloop2;
    ybreak2:
        if (count >= 32) goto xbreak;
    }
    x++;
xtest:
    if (x < w) goto xloop;
xbreak:
    if (count >= 32) goto ybreak;
    y++;
ytest:
    if (y < h) goto yloop;
ybreak:
    if (count > 0) {
        s32 i = F1::func_02063b8c(count);
        F1::func_0204ed8c(p1, list[i].x, list[i].y);
        return TRUE;
    }
fail:
    return FALSE;
}

extern "C" BOOL func_02082e58(void *self, void *b, u16 *out) {
    void *p = F1::func_02085174(F1::func_020850e0());
    F1::_ZN12Unk_02086c0413func_02086ec4EP17Unk_02086ec4_Vec3(p, b);
    out[1] = F1::_ZN12Unk_02086c0413func_02086e60Ev(p);
    return TRUE;
}

extern "C" BOOL func_02082e2c(void *self, void *b, u16 *out) {
    F1::_ZNK12Unk_020868cc13func_020868ccEP17Unk_020868cc_Vec3(F1::func_0208516c(F1::func_020850e0()), b);
    out[1] = F1::func_02063b8c(0xffff);
    return TRUE;
}

extern "C" BOOL func_02082e08(void *self, void *b, u16 *out, void *d) {
    F1::_ZN12Unk_02086af013func_02086af0EPvPtP17Unk_020868cc_Vec3(F1::func_02085170(F1::func_020850e0()), b, out + 1, d);
    return TRUE;
}

extern "C" BOOL func_02082dd0(void *self, void *g, u16 *out, s32 *a) {
    Unk_02082dd0_V v;
    s32 z = a[2] + 0x6000;
    s32 x = a[0] - 0x4000;
    v.x = x;
    v.y = 0;
    v.z = z;
    F1::func_0204edd8(g, &v);
    out[1] = 0;
    return TRUE;
}

void *data_020e08ac[2] = {(void *)Dp::func_02083430, 0};
Unk_02083c28_Ent data_020e0a78[23] = {
    {0x56, 0xd012, 0x50, *(Unk_02083c28_Fn *)data_020e0954, 1},
    {0x65, 0xd011, 0x4d, *(Unk_02083c28_Fn *)data_020e094c, 1},
    {0x7d, 0xd019, 0x0, *(Unk_02083c28_Fn *)data_020e0904, 0},
    {0x7e, 0xd022, 0x0, *(Unk_02083c28_Fn *)data_020e090c, 0},
    {0x7f, 0xd023, 0x0, *(Unk_02083c28_Fn *)data_020e0934, 0},
    {0x5d, 0xd025, 0x0, *(Unk_02083c28_Fn *)data_020e0914, 0},
    {0x69, 0xd00d, 0x47, *(Unk_02083c28_Fn *)data_020e091c, 1},
    {0x5f, 0xd01e, 0x57, *(Unk_02083c28_Fn *)data_020e0924, 1},
    {0x57, 0xd012, 0x51, *(Unk_02083c28_Fn *)data_020e093c, 1},
    {0x58, 0xd012, 0x52, *(Unk_02083c28_Fn *)data_020e0944, 1},
    {0x59, 0xd012, 0x53, *(Unk_02083c28_Fn *)data_020e095c, 1},
    {0x5a, 0xd012, 0x54, *(Unk_02083c28_Fn *)data_020e0964, 1},
    {0x5b, 0xd012, 0x55, *(Unk_02083c28_Fn *)data_020e08fc, 1},
    {0x5c, 0xd012, 0x56, *(Unk_02083c28_Fn *)data_020e08f4, 1},
    {0x6f, 0xd002, 0x49, *(Unk_02083c28_Fn *)data_020e087c, 1},
    {0x6a, 0xd003, 0x4e, *(Unk_02083c28_Fn *)data_020e0884, 1},
    {0x6b, 0xd013, 0x4f, *(Unk_02083c28_Fn *)data_020e08dc, 1},
    {0x68, 0xd016, 0x4c, *(Unk_02083c28_Fn *)data_020e0894, 1},
    {0x62, 0xd021, 0x58, *(Unk_02083c28_Fn *)data_020e08cc, 1},
    {0x54, 0xd008, 0x4b, *(Unk_02083c28_Fn *)data_020e089c, 1},
    {0x60, 0xd015, 0x48, *(Unk_02083c28_Fn *)data_020e08b4, 1},
    {0x6c, 0xd00b, 0x46, *(Unk_02083c28_Fn *)data_020e08bc, 1},
    {0x67, 0xd020, 0x4a, *(Unk_02083c28_Fn *)data_020e08e4, 1},
};
void *data_020e08f4[2] = {(void *)Dp::func_02083644, 0};
void *data_020e091c[2] = {(void *)Dp::func_020834cc, 0};
void *data_020e08a4[2] = {(void *)Dp::func_020838e8, 0};
void *data_020e094c[2] = {(void *)Dp::func_02083a9c, 0};

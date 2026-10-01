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

class Unk_0206fe80 {
public:
    BOOL func_02070358(u16 *id);
};

extern "C" Unk_0206fe80 data_021ed0a0;

// main's u16 holder class (dtor = main's 0x02004b60)
struct Unk_0203442c {
    u16 v;
    Unk_0203442c(u16 x) { v = x; }
    ~Unk_0203442c();
};

extern "C" {
extern void *data_021c47c4;
extern const Unk_ov004_0223dd88_Tbl data_ov004_02244230[];

s32 func_01ffc5a4(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020b50e8();
void func_ov004_02213be8(s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
u32 func_ov004_0223defc(Rec *r);
s32 func_ov004_0223df00(Rec *r);
s16 func_ov004_0223df04(Rec *r);
u32 func_ov004_0223df0c(Rec *r);
s32 func_ov004_0223df10(Rec *r);
s16 func_ov004_0223df14(Rec *r);
void *func_ov004_0223df1c(Rec *r);
void func_ov004_0223df58(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0204eb5c(void *a, u16 *t, s32 x, s32 y, s32 p4, s32 p5, s32 z);
s32 func_02053228(void *p);
}

class Unk_ov004_0224f0ec : public Unk_020d8c7c {
public:
    Unk_ov004_0224f0ec();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_18();
    virtual ~Unk_ov004_0224f0ec();
    virtual BOOL vfunc_48();

    void func_ov004_0223dd88();
};

class Unk_ov004_0224f140 : public Unk_ov004_0224f0ec {
public:
    Unk_ov004_0224f140();
    virtual ~Unk_ov004_0224f140();
    virtual BOOL vfunc_48();
};

class Unk_ov004_0224f098 : public Unk_ov004_0224f0ec {
public:
    Unk_ov004_0224f098();
    virtual ~Unk_ov004_0224f098();
    virtual BOOL vfunc_48();
};

struct Unk_ov004_0224f078_Entry {
    void *(*factory)();
    u16 a;
    u16 b;
};
extern "C" Unk_ov004_0224f0ec *func_ov004_0223dee4();
extern "C" Unk_ov004_0224f098 *func_ov004_0223dbdc();
extern "C" Unk_ov004_0224f140 *func_ov004_0223dd70();
// Static Rec objects of __sinit: ctor = func_ov004_0223df20 (plain function), dtor = the 2-byte function at 0x223e010
extern "C" Rec *func_ov004_0223df20(Rec *r, const Unk_ov004_0223df20_Def *d);
struct Unk_ov004_0223e010 : Rec {
    Unk_ov004_0223e010(const Unk_ov004_0223df20_Def &d) { func_ov004_0223df20(this, &d); }
    ~Unk_ov004_0223e010();
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
extern const Unk_ov004_0223df20_Def data_ov004_022442e4[4];
extern Unk_ov004_0223e010 data_ov004_02258218[4];
extern const Unk_ov004_0223df20_Def data_ov004_02244200[2];
extern Unk_ov004_0223e010 data_ov004_022581e0[2];
extern const Unk_ov004_0223df20_Def data_ov004_022443bc[12];
extern Unk_ov004_0223e010 data_ov004_02258384[12];
extern const Unk_ov004_0223df20_Def data_ov004_022444dc[12];
extern Unk_ov004_0223e010 data_ov004_022584d4[12];
extern const Unk_ov004_0223df20_Def data_ov004_02244284[4];
extern Unk_ov004_0223e010 data_ov004_02258288[4];
extern const Unk_ov004_0223df20_Def data_ov004_02244344[5];
extern Unk_ov004_0223e010 data_ov004_022582f8[5];
extern const Unk_ov004_0223df20_Def data_ov004_022445fc[20];
extern Unk_ov004_0223e010 data_ov004_02258624[20];

// ---- data (definition order sets the emitted order; the statics of vfunc_48 are created when it is compiled) ----
const u8 data_ov004_022440f4[1] = {0x2};
const u8 data_ov004_022441ac[7] = {0xa, 0x1a, 0x20, 0x24, 0x2d, 0x2e, 0x2f};
const u8 data_ov004_02244170[4] = {0x26, 0x27, 0x28, 0x29};
const Unk_ov004_0223df20_Def data_ov004_022445fc[20] = {
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
const Unk_ov004_0223df20_Def data_ov004_022442e4[4] = {
    {{40192, 5120, 98560}, 1, 1, -1, data_ov004_022441d0, 9},
    {{98816, 5120, 98560}, 1, 1, -1, data_ov004_022441c4, 9},
    {{40192, 5120, 41216}, 1, 1, -1, data_ov004_022441bc, 8},
    {{98816, 5120, 41216}, 1, 1, -1, data_ov004_022441dc, 9},
};
Unk_ov004_0223e010 data_ov004_02258218[4] = {Unk_ov004_0223e010(data_ov004_022442e4[0]), Unk_ov004_0223e010(data_ov004_022442e4[1]), Unk_ov004_0223e010(data_ov004_022442e4[2]), Unk_ov004_0223e010(data_ov004_022442e4[3])};
const u8 data_ov004_0224412c[1] = {0x1};
const u8 data_ov004_022441e8[10] = {0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c};
const Unk_ov004_0223df20_Def data_ov004_02244200[2] = {
    {{27136, 5120, 90112}, 1, 1, -1, data_ov004_022441e8, 10},
    {{105728, 5120, 90112}, 1, 1, -1, data_ov004_022441f4, 11},
};
Unk_ov004_0223e010 data_ov004_022581e0[2] = {Unk_ov004_0223e010(data_ov004_02244200[0]), Unk_ov004_0223e010(data_ov004_02244200[1])};
const u8 data_ov004_022440cc[1] = {0xf};
const u8 data_ov004_02244168[3] = {0xd, 0xe, 0xf};
const u8 data_ov004_02244140[2] = {0x1e, 0x1f};
const u8 data_ov004_02244144[3] = {0x1b, 0x1c, 0x1d};
const u8 data_ov004_022441b4[7] = {0x9, 0xb, 0x10, 0x11, 0x18, 0x2b, 0x35};
const Unk_ov004_0223df20_Def data_ov004_02244344[5] = {
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
const Unk_ov004_0223df20_Def data_ov004_022443bc[12] = {
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
Unk_ov004_0223e010 data_ov004_02258384[12] = {Unk_ov004_0223e010(data_ov004_022443bc[0]), Unk_ov004_0223e010(data_ov004_022443bc[1]), Unk_ov004_0223e010(data_ov004_022443bc[2]), Unk_ov004_0223e010(data_ov004_022443bc[3]), Unk_ov004_0223e010(data_ov004_022443bc[4]), Unk_ov004_0223e010(data_ov004_022443bc[5]), Unk_ov004_0223e010(data_ov004_022443bc[6]), Unk_ov004_0223e010(data_ov004_022443bc[7]), Unk_ov004_0223e010(data_ov004_022443bc[8]), Unk_ov004_0223e010(data_ov004_022443bc[9]), Unk_ov004_0223e010(data_ov004_022443bc[10]), Unk_ov004_0223e010(data_ov004_022443bc[11])};
const u8 data_ov004_022440f0[1] = {0x10};
const u8 data_ov004_02244110[1] = {0x5};
const u8 data_ov004_02244184[6] = {0xe, 0x19, 0x1e, 0x25, 0x33, 0x34};
const u8 data_ov004_02244118[1] = {0};
const u8 data_ov004_0224416c[4] = {0x30, 0x31, 0x32, 0x33};
Unk_ov004_0224f078_Entry data_ov004_0224f078 = {(void *(*)())func_ov004_0223dd70, 0x52, 0x59};
const u8 data_ov004_0224418c[6] = {0x1f, 0x27, 0x28, 0x29, 0x2a, 0x2c};
const u8 data_ov004_02244130[1] = {0x7};
const u8 data_ov004_02244150[3] = {0x15, 0x16, 0x17};
const u8 data_ov004_02244100[1] = {0x6};
const u8 data_ov004_02244194[6] = {0x12, 0x13, 0x14, 0x21, 0x22, 0x26};
const u8 data_ov004_022441d0[9] = {0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8};
const u8 data_ov004_022440d0[1] = {0x12};
Unk_ov004_0223e010 data_ov004_022584d4[12] = {Unk_ov004_0223e010(data_ov004_022444dc[0]), Unk_ov004_0223e010(data_ov004_022444dc[1]), Unk_ov004_0223e010(data_ov004_022444dc[2]), Unk_ov004_0223e010(data_ov004_022444dc[3]), Unk_ov004_0223e010(data_ov004_022444dc[4]), Unk_ov004_0223e010(data_ov004_022444dc[5]), Unk_ov004_0223e010(data_ov004_022444dc[6]), Unk_ov004_0223e010(data_ov004_022444dc[7]), Unk_ov004_0223e010(data_ov004_022444dc[8]), Unk_ov004_0223e010(data_ov004_022444dc[9]), Unk_ov004_0223e010(data_ov004_022444dc[10]), Unk_ov004_0223e010(data_ov004_022444dc[11])};
Unk_ov004_0224f078_Entry data_ov004_0224f080 = {(void *(*)())func_ov004_0223dee4, 0x51, 0x58};
const u8 data_ov004_022440ec[1] = {0xb};
const u8 data_ov004_02244104[1] = {0};
const u8 data_ov004_0224417c[6] = {0, 0x1, 0x2, 0x3, 0x4, 0x8};
const u8 data_ov004_022440c4[1] = {0x8};
Unk_ov004_0223e010 data_ov004_02258288[4] = {Unk_ov004_0223e010(data_ov004_02244284[0]), Unk_ov004_0223e010(data_ov004_02244284[1]), Unk_ov004_0223e010(data_ov004_02244284[2]), Unk_ov004_0223e010(data_ov004_02244284[3])};
const u8 data_ov004_0224415c[3] = {0x20, 0x21, 0x22};
const u8 data_ov004_022440fc[1] = {0x11};
const Unk_ov004_0223df20_Def data_ov004_022444dc[12] = {
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
Unk_ov004_0223e010 data_ov004_022582f8[5] = {Unk_ov004_0223e010(data_ov004_02244344[0]), Unk_ov004_0223e010(data_ov004_02244344[1]), Unk_ov004_0223e010(data_ov004_02244344[2]), Unk_ov004_0223e010(data_ov004_02244344[3]), Unk_ov004_0223e010(data_ov004_02244344[4])};
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
const Unk_ov004_0223df20_Def data_ov004_02244284[4] = {
    {{61952, 5120, 86784}, 3, 0, -1, data_ov004_02244184, 6},
    {{61952, 5120, 51712}, 6, 0, -1, data_ov004_022441ac, 7},
    {{92416, 5120, 34560}, 8, 0, -1, data_ov004_0224417c, 6},
    {{92416, 5120, 86272}, 9, 0, -1, data_ov004_0224419c, 6},
};
const u8 data_ov004_02244124[1] = {0x2};
const u8 data_ov004_022440e8[1] = {0x3};
const Unk_ov004_0223dd88_Tbl data_ov004_02244230[7] = {
    {0x25, (Rec *)data_ov004_02258384, 12},
    {0x26, (Rec *)data_ov004_022584d4, 12},
    {0x23, (Rec *)data_ov004_02258218, 4},
    {0x24, (Rec *)data_ov004_022581e0, 2},
    {0x29, (Rec *)data_ov004_02258624, 20},
    {0x27, (Rec *)data_ov004_02258288, 4},
    {0x28, (Rec *)data_ov004_022582f8, 5},
};
const u8 data_ov004_0224413c[2] = {0x10, 0x11};
const u8 data_ov004_02244174[5] = {0x15, 0x16, 0x17, 0x23, 0x31};
const u8 data_ov004_02244148[3] = {0x18, 0x19, 0x1a};
Unk_ov004_0224f078_Entry data_ov004_0224f088 = {(void *(*)())func_ov004_0223dbdc, 0x53, 0x5a};
const u8 data_ov004_0224419c[6] = {0x5, 0x6, 0x7, 0xf, 0x30, 0x32};
const u8 data_ov004_0224414c[3] = {0x2d, 0x2e, 0x2f};
const u8 data_ov004_0224410c[1] = {0x9};
Unk_ov004_0223e010 data_ov004_02258624[20] = {Unk_ov004_0223e010(data_ov004_022445fc[0]), Unk_ov004_0223e010(data_ov004_022445fc[1]), Unk_ov004_0223e010(data_ov004_022445fc[2]), Unk_ov004_0223e010(data_ov004_022445fc[3]), Unk_ov004_0223e010(data_ov004_022445fc[4]), Unk_ov004_0223e010(data_ov004_022445fc[5]), Unk_ov004_0223e010(data_ov004_022445fc[6]), Unk_ov004_0223e010(data_ov004_022445fc[7]), Unk_ov004_0223e010(data_ov004_022445fc[8]), Unk_ov004_0223e010(data_ov004_022445fc[9]), Unk_ov004_0223e010(data_ov004_022445fc[10]), Unk_ov004_0223e010(data_ov004_022445fc[11]), Unk_ov004_0223e010(data_ov004_022445fc[12]), Unk_ov004_0223e010(data_ov004_022445fc[13]), Unk_ov004_0223e010(data_ov004_022445fc[14]), Unk_ov004_0223e010(data_ov004_022445fc[15]), Unk_ov004_0223e010(data_ov004_022445fc[16]), Unk_ov004_0223e010(data_ov004_022445fc[17]), Unk_ov004_0223e010(data_ov004_022445fc[18]), Unk_ov004_0223e010(data_ov004_022445fc[19])};
const u8 data_ov004_02244108[1] = {0x1};
const u8 data_ov004_022441a4[7] = {0xc, 0xd, 0x1b, 0x1c, 0x1d, 0x36, 0x37};
const u8 data_ov004_022440d4[1] = {0x13};

Unk_ov004_0223e010::~Unk_ov004_0223e010() {}

extern "C" void func_ov004_0223df58(Rec *r, V3 *pos, s32 mask, u32 b, s16 c, s32 d, u8 e) {
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
    r->unk_10 = func_01ffc5a4(sum << 12, cnt << 12) >> 12;
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

extern "C" Rec *func_ov004_0223df20(Rec *r, const Unk_ov004_0223df20_Def *d) {
    Unk_ov004_0223df20_V v(d->unk_00.x, d->unk_00.y, d->unk_00.z);
    func_ov004_0223df58(r, &v, d->unk_0c, d->unk_0d, d->unk_0e, (s32)d->unk_10, d->unk_14);
    return r;
}

extern "C" void *func_ov004_0223df1c(Rec *r) {}

extern "C" s16 func_ov004_0223df14(Rec *r) {
    return r->unk_10;
}

extern "C" s32 func_ov004_0223df10(Rec *r) {
    return r->unk_0c;
}

extern "C" u32 func_ov004_0223df0c(Rec *r) {
    return r->unk_19;
}

extern "C" s16 func_ov004_0223df04(Rec *r) {
    return r->unk_12;
}

extern "C" s32 func_ov004_0223df00(Rec *r) {
    return r->unk_14;
}

extern "C" u32 func_ov004_0223defc(Rec *r) {
    return r->unk_18;
}

extern "C" Unk_ov004_0224f0ec *func_ov004_0223dee4() {
    return new Unk_ov004_0224f0ec;
}

Unk_ov004_0224f0ec::Unk_ov004_0224f0ec() {}

Unk_ov004_0224f0ec::~Unk_ov004_0224f0ec() {}

BOOL Unk_ov004_0224f0ec::vfunc_00() {
    func_ov004_0223dd88();
    vfunc_48();
    return TRUE;
}

BOOL Unk_ov004_0224f0ec::vfunc_48() {
    return TRUE;
}

BOOL Unk_ov004_0224f0ec::vfunc_18() {
    return TRUE;
}

void Unk_ov004_0224f0ec::func_ov004_0223dd88() {
    s32 k = func_020b50e8();
    u32 i;
    for (i = 0; i < 7; i++) {
        const Unk_ov004_0223dd88_Tbl *e = &data_ov004_02244230[i];
        if (k == e->unk_00) {
            u32 j, n;
            j = 0;
            n = e->unk_08;
            for (; j < n; j++) {
                Rec *rec = &e->unk_04[j];
                u32 a = func_ov004_0223df0c(rec);
                void *b = func_ov004_0223df1c(rec);
                s32 c = func_ov004_0223df14(rec);
                s32 d = func_ov004_0223df10(rec);
                s32 f = func_ov004_0223df04(rec);
                s32 g = func_ov004_0223df00(rec);
                func_ov004_02213be8(a, b, c, d, f, g, func_ov004_0223defc(rec));
            }
            break;
        }
    }
}

extern "C" Unk_ov004_0224f140 *func_ov004_0223dd70() {
    return new Unk_ov004_0224f140;
}

Unk_ov004_0224f140::Unk_ov004_0224f140() {}

Unk_ov004_0224f140::~Unk_ov004_0224f140() {}

BOOL Unk_ov004_0224f140::vfunc_48() {
    s32 y, x;
    void *m = data_021c47c4;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u16 *p = (u16 *)func_0204ebd8(m, 0, 0, x, y, 0);
            if (p != NULL) {
                BOOL k = FALSE;
                if (*p >= 0x450c && *p <= 0x45db) {
                    k = TRUE;
                }
                if (k) {
                    BOOL k2 = FALSE;
                    if (data_021ed0a0.func_02070358(p)) {
                        k2 = TRUE;
                    }
                    if (!k2) {
                        static Unk_0203442c sa(0x4a54);
                        static Unk_0203442c sb(0xfff1);
                        s32 w = func_02053228(p);
                        u16 v = 0xfff1;
                        if (w == 0) {
                            v = sa.v;
                        } else {
                            v = sb.v;
                        }
                        func_0204eb5c(m, &v, 0, 0, x, y, 0);
                    }
                }
            }
        }
    }
    return TRUE;
}

extern "C" Unk_ov004_0224f098 *func_ov004_0223dbdc() {
    return new Unk_ov004_0224f098;
}

Unk_ov004_0224f098::Unk_ov004_0224f098() {}

Unk_ov004_0224f098::~Unk_ov004_0224f098() {}

BOOL Unk_ov004_0224f098::vfunc_48() {
    return TRUE;
}

const u8 data_ov004_022440f8[1] = {0x5};

#include "types.h"
#include "Unk_020d8c7c.h"

// ======== class types (global scope) ========
struct Unk_021f4400;
struct Unk_021f4420;
struct Unk_021f44a0;
struct Unk_021f14c8;
struct Unk_020b8ec0_Time;
struct Unk_02095204;
struct Unk_021efc08;
struct Unk_021efa88;
class Unk_020e5668;
struct Unk_020b96b8_Ent;
struct Unk_020b96b8_Cfg;
struct Unk_020b9964_Src;
struct Unk_020b9964_Obj;
struct Unk_020b9b94_Src;
struct Unk_020b9b94_Col;
struct Unk_020b9c90;
struct Unk_020ba1dc_Time;
struct Unk_020ba518_Time;
struct Unk_020ba6f4_Color;
struct Unk_020ba8cc_Obj;
struct Unk_020ba8cc_State;
struct Unk_020b9fe4;
struct Unk_020ba93c_Obj;
struct Unk_020baa10_Time;
struct Unk_020baa10_Buf;
struct Unk_020bacc0_Vec;
struct Unk_020bacc0_P;
struct Unk_020bacc0_Entry;
struct Unk_020bacc0_Obj;
struct Unk_020baa10_Ptr;
struct Unk_020bb25c_Ent14;
struct Unk_020bb25c_Ent74;
class Unk_020bb25c;
struct Unk_020d0f40;
struct Unk_020bbcc8_Xxx;
struct Unk_020bbc28;
struct Unk_020bc754_Slot;
struct Unk_020bccc8_Entry;
struct Unk_020bca5c_Elem;
struct Unk_020bc754_Vec;
struct Unk_020dd458;
struct Unk_02063380;
struct Unk_02062f94_Ret;
struct Unk_020bc99c_Loc;
struct Unk_020bcb04_Ent;
class Unk_020bc58c;
struct Unk_02089270;
struct Unk_020bd058;
struct Unk_020bda7c;
struct Unk_020bdcbc;
struct Unk_020bd8f8;
struct Unk_020bd054;
struct Unk_0213b91c;
struct Unk_0213b970;
struct Unk_0213b938;
struct Unk_02000c8c;
struct Unk_020bd0a4_Vec3;
struct Unk_020bd06c;
struct Unk_020bd774_Entry;
struct Unk_020bd1b0;
struct Unk_020bd718;
struct Unk_020bcf04;
struct Unk_020d16e8;
struct Unk_020bd868;
struct Unk_020bd9a0_Row;
struct Unk_020bdd94_Out;
struct Unk_020bdd94;
struct Unk_020bdd4c_Out;
struct Unk_021f23d4;
struct Unk_020bdef0_Vec;
struct Unk_020be0bc;
struct Unk_020be0f4;
struct Unk_020be204_Vec;
struct Unk_020bca5c_Rec;
class Unk_020be204;
struct Unk_020be018_Vec;
struct Unk_020bee28_Vec2;
struct Unk_020bf1d8_Vec;
struct Unk_020bec40_Col;
struct Unk_020bec40_Pair;
struct Unk_021f4398;
struct Unk_020be018;
struct Unk_020bee28_V;
struct Unk_020bf18c_Pad;
struct Unk_020bfc48_Pad;
struct Unk_020bfe30_Vec;
struct Unk_020bfe38_Ent;
struct Unk_020bfec0_Ent;
struct Unk_020bffc0_Mtx;
class Unk_020bfe30;
struct Unk_020c010c;
struct Unk_020c010c_Ent;
struct Unk_020c0538_Out;
class Unk_020d8b38;
struct Unk_020c0408_Obj;
class Unk_020e6894;
class Unk_0202e5a8;
class Unk_020e6924;
struct Unk_021f4400 { u8 pad[9]; u8 unk_09; };
struct Unk_021f4420 { u8 pad[0x10]; u8 unk_10; };
struct Unk_021f44a0 { u8 pad[6]; u8 unk_06; u8 unk_07; u8 unk_08; };
struct Unk_021f14c8 { u8 pad[0xc]; s32 unk_0c; };
struct Unk_020b8ec0_Time { u8 unk_00; u8 unk_01; u8 unk_02; u8 pad[5]; };
struct Unk_02095204 { u8 pad[0x5c]; struct { u32 unk_00; u32 unk_04; u32 unk_08; } unk_5c; };
struct Unk_021efc08 { u8 pad[4]; u16 unk_04; };
struct Unk_021efa88 { u8 pad[2]; u16 unk_02; };
struct Unk_0213b91c {
    virtual void vfunc_00();
    u32 unk_04;
};
struct Unk_0213b938 : Unk_0213b91c {
    virtual void vfunc_00();
    u8 unk_08[8];
};
class Unk_020e5668 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    /* 0x50 */ Unk_0213b938 unk_50;
};
struct Unk_020b96b8_Ent {
    s32 a;
    s32 b;
    s16 c;
    u8 pad[0x900 - 10];
};
struct Unk_020b96b8_Cfg {
    u8 pad0[0x1c];
    s32 idx;
    u8 pad1[0x1c];
    u16 h3c;
    u16 h3e;
};
struct Unk_020b9964_Src {
    u32 w0;
    u32 pad[1];
    s32 pos;
};
struct Unk_020b9964_Obj {
    u8 pad[0x5c];
    Unk_020b9964_Src src;
};
struct Unk_020b9b94_Src {
    u16 h0, h2, h4, h6;
    s32 s0, s1;
};
struct Unk_020b9b94_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 pad : 1;
};
struct Unk_020b9c90 {
    u16 unk_000[0x304 / 2];
    u16 unk_304[1];
    u8 pad0[0x1208 - 0x306];
    s32 unk_1208;
    s32 unk_120c;
    u8 pad1[0x1520 - 0x1210];
    s32 unk_1520;
    s32 unk_1524;
    s32 unk_1528;
    s32 unk_152c;
    s32 unk_1530;
    u8 pad2[0x1578 - 0x1534];
    s32 unk_1578;
    u8 *unk_157c;
    s32 unk_1580;
    u8 pad3[0x158c - 0x1584];
    s32 unk_158c;
    s32 unk_1590;

    void func_020b9c90(s32 idx, u16 a, s32 b);
    void func_020b9d44();
    void func_020b9d94();
    void func_020b9df0();
    void func_020b9e10();
    void func_020b9e60();
    void func_020b9ea8();
    void func_020b9ef8();
    void func_020b9f84();
    void func_020ba2e4(s32 a, s32 b);
    void func_020ba06c();
    void func_020b9fe4();
    s32 func_020ba170(s32 a, s32 b);
    s32 func_020ba10c(s32 *a, s32 *b, s32 c, s32 d);
};
struct Unk_020ba1dc_Time {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_020ba518_Time {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};
struct Unk_020ba6f4_Color {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 a : 1;
};
struct Unk_020ba8cc_Obj {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};
struct Unk_020ba8cc_State {
    u8 pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[8];
    s32 unk_34;
};
struct Unk_020b9fe4 {
    s32 unk_0000;
    u8 pad_0004[0x1204];
    s32 unk_1208;
    s32 unk_120c;
    u8 pad_1210[0x304];
    s32 unk_1514;
    s32 unk_1518;
    s32 unk_151c;
    s32 unk_1520;
    s32 unk_1524;
    s32 unk_1528;
    s32 unk_152c;
    s32 unk_1530;
    s32 unk_1534;
    s16 unk_1538;
    u8 pad_153a[2];
    u16 unk_153c;
    u16 unk_153e;
    u8 pad_1540[4];
    s32 unk_1544[2][2];
    s32 unk_1554[2][2];
    s32 unk_1564;
    s32 unk_1568;
    s32 unk_156c;
    s32 unk_1570;
    s32 unk_1574;
    s32 unk_1578;
    s32 unk_157c;
    u8 pad_1580[4];
    u8 *unk_1584;
    u32 unk_1588;
    s32 unk_158c;
    u8 pad_1590[8];

    Unk_020b9fe4();
    ~Unk_020b9fe4();
    void func_020b9fe4();
    void func_020ba06c();
    BOOL func_020ba10c(u8 **p1, u32 *p2, s32 mode, s32 idx);
    BOOL func_020ba170(s32 idx, s32 unused);
    s32 func_020ba1a4(s32 a, s32 b);
    s32 func_020ba1b4(s32 v);
    void func_020ba1dc();
    BOOL func_020ba260(s32 v);
    void func_020ba2a4(s32 v);
    void func_020ba2e4(s32 a, s32 b);
    s32 func_020ba334(s32 v);
    void func_020ba3e4();
    void func_020ba49c();
    void func_020ba670(s32 *a, s32 *b);
    void func_020ba794();
};
enum Unk_020ba518_E { Unk_020ba518_E0 = 0 };
struct Unk_020ba93c_Obj { u32 pad[3]; s32 f0c; };
struct Unk_020baa10_Time { u8 lo; u8 hi; };
struct Unk_020baa10_Buf { u16 x; Unk_020baa10_Time t; u16 y; u16 z; };
struct Unk_020bacc0_Vec { s32 x; s32 y; };
struct Unk_020bacc0_P { s32 x; s32 y; };
struct Unk_020bacc0_Entry {
    s32 f00; s32 f04; s32 f08; s32 f0c;
    u8 f10[0x14];
    s32 f24;
    u8 pad28[9];
    u8 f31;
    u8 pad32[2];
    s32 f34; s32 f38;
    u8 pad3c[0x10];
    s32 f4c; s32 f50;
    u16 f54;
    s8 f56; s8 f57;
    s32 f58;
    u8 f5c; s8 f5d;
    u8 pad5e[2];
    s32 f60;
    u8 pad64[0x10];
};
struct Unk_020bacc0_Obj {
    Unk_020bacc0_Entry e[0x3c];
    u8 pad1b30[0x13d8];
    s32 f2f08; s32 f2f0c;
    u8 pad2f10[4];
    s32 f2f14;
    u8 pad2f18[0x18];
    s32 f2f30;
    u8 pad2f34[0x1d];
    u8 f2f51;
};
struct Unk_020baa10_Ptr { u16 pad[3]; u16 h6; };
struct Unk_020bb25c_Ent14 {
    s32 unk_00;
    u8 unk_04[0xc];
    u8 unk_10;
    u8 unk_11;
    u8 unk_12[2];
};
struct Unk_020bb25c_Ent74 {
    s32 unk_00;
    u8 unk_04[0x5c];
    u32 unk_60;
    u8 unk_64[0x10];
};
class Unk_020bb25c {
public:
    u8 unk_0000[0xe80];
    s32 unk_0e80;
    u8 unk_0e84[0x14d8 - 0xe84];
    Unk_020bb25c_Ent74 unk_14d8[13];
    u8 unk_1abc[0x2f18 - 0x1abc];
    u8 unk_2f18;
    u8 unk_2f19;
    u8 unk_2f1a[0x2f29 - 0x2f1a];
    u8 unk_2f29;
    u8 unk_2f2a[2];
    s32 unk_2f2c;
    s32 unk_2f30;
    s32 unk_2f34;
    s32 unk_2f38[4];
    s32 unk_2f48;
    u8 unk_2f4c[0x2f51 - 0x2f4c];
    u8 unk_2f51;
    u8 unk_2f52[0x2f58 - 0x2f52];
    Unk_020bb25c_Ent14 unk_2f58[4];
    u8 unk_2fa8[4];

    void func_020bb25c();
    void func_020bb294();
    void func_020bb2cc();
    void func_020bb304();
    void func_020bb33c();
    void func_020bb374();
    void func_020bb3b0();
    void func_020bb3e8();
    void func_020bb420();
    void func_020bb458();
    void func_020bb490();
    void func_020bb4c8(s32 mode);
    void func_020bb584(s32 a, s32 b, s32 c);
    void func_020bb5b4();
    void func_020bb688();
    void func_020bb774();
    void func_020bb7e8();
    void func_020bb834();
    void func_020bb880(s32 *out);
    void func_020bb8a4(s32 idx, s32 a, s32 b);
    BOOL func_020bb8fc(s32 idx);
    BOOL func_020bb964(s32 idx);
    void func_020bb9b8();
    void func_020bbac0();
    void func_020bbb58();

    BOOL func_020bc754(s32 a, s32 b, s32 c, s32 d);
    void func_020bc718(s32 a);
    void func_020bb04c();
};
enum Unk_020bb8a4_E { Unk_020bb8a4_E_0 = 0 };
struct Unk_020d0f40 {
    s32 unk_00;
    s32 unk_04;
};
struct Unk_020bbcc8_Xxx {
    u32 a, b;
};
struct Unk_020bbc28 {
    char pad_0000[0xe0c];
    s32 unk_0e0c;
    char pad_0e10[0x1464 - 0xe10];
    s32 unk_1464;
    char pad_1468[0x2eb8 - 0x1468];
    char unk_2eb8[0x48];
    s32 unk_2f00;
    s32 unk_2f04;
    s32 unk_2f08;
    s32 unk_2f0c;
    char pad_2f10[8];
    u8 unk_2f18;
    u8 unk_2f19;
    u8 unk_2f1a;
    u8 unk_2f1b;
    s32 unk_2f1c;
    s32 unk_2f20;
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    s32 unk_2f28;
    s32 unk_2f2c;
    s32 unk_2f30;
    s32 unk_2f34;
    s32 unk_2f38;
    s32 unk_2f3c;
    s32 unk_2f40;
    s32 unk_2f44;
    s32 unk_2f48;
    s32 unk_2f4c;
    s32 unk_2f50;
    char unk_2f54[8];

    void func_020bbc28();
    void func_020bbcc8();
    void func_020bbdd4();
    void func_020bbeb8();
    void func_020bc18c();
    void func_020bc1d4();
    void func_020bc2a8();
    void func_020bc43c();
    void func_020bc754(s32 a, s32 b, s32 c, s32 d);
    void func_020bc718(s32 a);
    void func_020bb4c8(s32 a);
    s32 func_020bcbd8(s32 a);
    void func_020bc5cc();
    void func_020bb490();
    void func_020bb458();
    void func_020bb420();
    void func_020bb3e8();
    void func_020bb3b0();
    void func_020bb374();
    void func_020bb33c();
    void func_020bb304();
    void func_020bb2cc();
    void func_020bb294();
    void func_020bb25c();
    void func_020bb224();
    void func_020bb1f8();
    void func_020bb1c4();
    void func_020bb190();
    void func_020bb15c();
    void func_020bb128();
    void func_020bb0fc();
    void func_020bb0c8();
};
struct Unk_020bc754_Slot {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[0x18];
    s32 unk_24;
    u8 unk_28[0xc];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    u8 unk_40[0x1d];
    s8 unk_5d;
    u8 unk_5e[0x16];
};
struct Unk_020bccc8_Entry {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a[2];
};
struct Unk_020bca5c_Elem {
    u8 unk_00[0x14];
};
struct Unk_020bc754_Vec {
    s32 x, y, z;
};
struct Unk_020dd458 {
    Unk_020dd458();
    ~Unk_020dd458();
    u8 unk_00[0xf4];
};
struct Unk_02063380 {
    Unk_02063380(s32 a, s32 b);
    ~Unk_02063380();
    u32 unk_00;
    u32 unk_04;
};
struct Unk_02062f94_Ret {
    u16 v;
    Unk_02062f94_Ret();
};
struct Unk_020bc99c_Loc {
    u8 a;
    u8 pad;
    u16 b;
};
struct Unk_020bcb04_Ent {
    u16 id;
    u8 pad[10];
};
class Unk_020bc58c {
public:
    void func_020bc58c();
    void func_020bc5cc();
    void func_020bc628();
    void func_020bc6e4();
    void func_020bc718(s32 id);
    Unk_020bc754_Slot *func_020bc754(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg);
    s32 func_020bc814(s32 kind, s32 arg);
    void func_020bc928();
    void func_020bc960();
    void func_020bc99c();
    Unk_020bca5c_Elem *func_020bca5c(s32 i);
    void func_020bca6c(s32 i);
    void func_020bcadc(BOOL a);
    void func_020bcb04();
    void func_020bcba4();
    void func_020bcbac();
    s32 func_020bcbd8(s32 id);
    s32 func_020bcbfc(s32 kind, s32 idx);
    void func_020bcc64(s32 k);
    s32 func_020bccc8(s32 t);
    void func_020bcdd8();
    void func_020bce4c();
    void func_020bce8c();
    void func_020bc18c();
    void func_020bbb58();

    Unk_020bc754_Slot unk_0000[0x3c];
    Unk_020bccc8_Entry unk_1b30[5];
    u8 unk_1b6c[0x2eb8 - 0x1b6c];
    u8 unk_2eb8[0x2f08 - 0x2eb8];
    s32 unk_2f08;
    s32 unk_2f0c;
    s32 unk_2f10;
    s32 unk_2f14;
    u16 unk_2f18;
    u16 unk_2f1a;
    s32 unk_2f1c;
    s32 unk_2f20;
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    u8 unk_2f28;
    u8 unk_2f29[0x2f54 - 0x2f29];
    s32 unk_2f54;
    Unk_020bca5c_Elem unk_2f58[4];
    u8 unk_2fa8[0x10];
};
struct Unk_02089270 {
    u8 unk_00[4];
    ~Unk_02089270();
};
// 0x74-byte element of the 60-element array at the start of Unk_020bcf04
struct Unk_020bd058 {
    u8 unk_00[0x10];
    Unk_02089270 unk_10;
    u8 unk_14[0x74 - 0x14];
    Unk_020bd058();
    ~Unk_020bd058();
};
// 0xc-byte element (5 of them at 0x1b30)
struct Unk_020bda7c {
    u8 unk_00[0xc];
    Unk_020bda7c();
};
struct Unk_020bdcbc {
    u8 unk_00[0x134c];
    void func_020bdcbc();
};
struct Unk_020bd8f8 {
    u8 unk_00[0x48];
    Unk_020bd8f8();
};
struct Unk_020bd054 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    Unk_020bd054();
    ~Unk_020bd054();
    void func_020bd6dc();
    void func_020bd6f0(s32 a, s32* p, u8 b);
};
struct Unk_0213b970 : Unk_0213b91c {
    virtual void vfunc_00();
    u32 unk_08;
    void func_02003c30();
    void func_02003c40(s32 a);
    void func_02003c50(s32 a);
    void func_02003c60(void* p);
    void func_02003cbc();
};
struct Unk_02000c8c {
    s32 x, y, z;
    Unk_02000c8c();
    ~Unk_02000c8c();
};
struct Unk_020bd0a4_Vec3 {
    s32 x, y, z;
};
struct Unk_020bd06c {
    Unk_0213b970 unk_00[8];
    Unk_02000c8c unk_60[8];
    u8 unk_c0;

    Unk_020bd06c();
    void func_020bd06c();
    void func_020bd0a4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void func_020bd0d4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p);
    void func_020bd104();
    void func_020bd12c();
};
struct Unk_020bd774_Entry {
    u8 unk_00[0xc];
    s8 unk_0c;
    s8 unk_0d;
    u8 unk_0e[2];
};
struct Unk_020bd1b0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    s16 unk_1a;
    s16 unk_1c;
    u8 unk_1e;
    u8 unk_1f;
    u8 unk_20;
    u8 unk_21;

    Unk_020bd1b0();
    void func_020bd1b0(s32 a, s32 b);
    void func_020bd1e8();
    void func_020bd25c();
    void func_020bd288();
    void func_020bd2d8();
    void func_020bd32c();
    void func_020bd334();
    void func_020bd3ac();
    void func_020bd400();
    void func_020bd408();
    void func_020bd4b4();
    void func_020bd4bc();
    void func_020bd520();
    void func_020bd604(s32 a, s32 b, s32 c, u8 d);
    void func_020bd618();
    void func_020bd624();
    void func_020bd640();
    void func_020bd64c();
    void func_020bd668();
    void func_020bd67c(u8 a);
    void func_020bd69c(s32 a);
    void func_020bd6a8(s32 a);
};
struct Unk_020bd718 {
    s32 unk_00;
    s8 unk_04[4];
    u16 unk_08;
    u16 unk_0a[15];
    u16 unk_28[16];

    void func_020bd718(s32 idx, u16* p);
    BOOL func_020bd744(s32 idx);
    void func_020bd758(s32 idx);
    void func_020bd764(s32 a, s32 b);
    BOOL func_020bd774(s32 idx);
    void func_020bd7a8(s32 idx);
    void func_020bd7c0(s32 v);
    void func_020bd7e4();
    BOOL func_020bd808(s32 v);
};
struct Unk_020bcf04 {
    Unk_020bd058 unk_0000[60];
    Unk_020bda7c unk_1b30[5];
    Unk_020bdcbc unk_1b6c;
    Unk_020bd8f8 unk_2eb8;
    u32 unk_2f00;
    u32 unk_2f04;
    u32 unk_2f08;
    u32 unk_2f0c;
    u32 unk_2f10;
    u32 unk_2f14;
    u8 unk_2f18[0xc];
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    u8 unk_2f28;
    u8 unk_2f29;
    u8 unk_2f2a[2];
    u32 unk_2f2c;
    u32 unk_2f30;
    u32 unk_2f34;
    u32 unk_2f38;
    u32 unk_2f3c;
    u32 unk_2f40;
    u32 unk_2f44;
    u32 unk_2f48;
    u32 unk_2f4c;
    u8 unk_2f50;
    u8 unk_2f51;
    u8 unk_2f52[2];
    u32 unk_2f54;
    Unk_020bd054 unk_2f58[4];
    Unk_020bd1b0 unk_2fa8;
    Unk_020bd06c unk_2fcc;

    Unk_020bcf04();
    ~Unk_020bcf04();
};
// The original computes the destination address BEFORE loading *p. An enum-typed local is not forwarded by mwcc,
// so holding the element base in one keeps the address computation where it is written.
enum Unk_020bd718_E { Unk_020bd718_E0 };
struct Unk_020d16e8 { u32 unk_00; u16 unk_04; u16 unk_06; u32 unk_08; s8 unk_0c; s8 unk_0d; s8 unk_0e; s8 unk_0f; };
struct Unk_020bd868 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u16 unk_0a[15];
    /* 0x28 */ u8 unk_28[0x20];
};
struct Unk_020bd9a0_Row { u32 unk_00; u32 unk_04; u32 unk_08; u32 unk_0c; };
struct Unk_020bdd94_Out { s32 unk_00; s32 unk_04; s32 unk_08; };
struct Unk_020bdd94 {
    /* 0x00 */ u8 unk_00[0x24];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u8 unk_30[4];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40[0xc];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
};
struct Unk_020bdd4c_Out { s32 unk_00; s32 unk_04; s32 unk_08; s32 unk_0c; };
struct Unk_021f23d4 {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[0x2c];
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ u8 unk_3c[0x8];
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48[0x2c];
};
struct Unk_020bdef0_Vec { s32 unk_00[3]; Unk_020bdef0_Vec() {} ~Unk_020bdef0_Vec() {} };
struct Unk_020be0bc {
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[1];
};
enum Unk_020be0bc_E { Unk_020be0bc_E_0 = 0 };
struct Unk_020be0f4 {
    s32 unk_00;
    void func_020be4d0();
    void func_020be61c();
    void func_020be7b4();
    void func_020be7dc();
    void func_020bef24();
    void func_020bef90();
    void func_020bf1d0();
    void func_020bf4ac();
    void func_020bf620();
    void func_020bfa08();
    void func_020bfb60();
    void func_020bfcc8();
    void func_020bfe30();
    void func_020be0f4();
};
struct Unk_020be204_Vec {
    s32 x, y, z;
};
struct Unk_020bca5c_Rec {
    u32 unk_00;
    Unk_020be204_Vec unk_04;
};
class Unk_020be204 {
public:
    void func_020be204();
    void func_020be314(u32 a);
    void func_020be428();
    void func_020be44c();
    Unk_020be204 *func_020be4b0();
    void func_020be4d0();
    void func_020be4d8();
    void func_020be58c(u32 a);
    void func_020be61c();
    void func_020be624();
    void func_020be6f0(u32 a);
    void func_020be7b4();
    void func_020be7bc();
    void func_020be7c0();
    void func_020be7dc();
    void func_020be820();
    void func_020be970();
    void func_020be9e8();
    void func_020bea24(u32 a);
    void func_020beac8(u32 a);

    // other methods
    void func_020be094();
    void func_020bec00();
    void func_020bec40();
    void func_020beb88(s32 a);
    void func_020bdd24(u32 a, u32 b);
    void func_020bfe38();
    void func_020bfcd0();
    void func_020bfb68();
    void func_020bfa1c();
    void func_020bf634();
    void func_020bf4b4();
    void func_020bf1d8();
    void func_020bef98();
    void func_020bef2c();
    void func_020bfec0(u32 a);
    void func_020bfd7c(u32 a);
    void func_020bfbf8(u32 a);
    void func_020bfa90(u32 a);
    void func_020bf664(u32 a);
    void func_020bf5d8(u32 a);
    void func_020bf3bc(u32 a);
    void func_020bf15c(u32 a);
    void func_020bef44(u32 a);
    void func_020beb40(u32 a);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10[5];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x32 */ u8 unk_32[2];
    /* 0x34 */ Unk_020be204_Vec unk_34;
    /* 0x40 */ Unk_020be204_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u16 unk_54;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 unk_5d;
    /* 0x5e */ u8 unk_5e[2];
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ s32 unk_6c;
    /* 0x70 */ s32 unk_70;
};
enum Unk_020be820_E { Unk_020be820_E_0 = 0 };
struct Unk_020be018_Vec { s32 x, y, z; };
struct Unk_020bee28_Vec2 {
    s32 x, y;
    Unk_020bee28_Vec2(s32 a, s32 b) { x = a; y = b; }
};
struct Unk_020bf1d8_Vec {
    s32 x, y, z;
    Unk_020bf1d8_Vec(const Unk_020bf1d8_Vec &o) { x = o.x; y = o.y; z = o.z; }
};
struct Unk_020bec40_Col { u16 r : 5; u16 g : 5; u16 b : 5; };
struct Unk_020bec40_Pair { Unk_020bec40_Col a; Unk_020bec40_Col b; };
struct Unk_021f4398 {
    void func_020bd718(s32 i, u16 *col);
    void func_020bd758(s32 i);
};
struct Unk_020be018 {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x14];
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s16 unk_2c;
    /* 0x2e */ u8 unk_2e;
    /* 0x2f */ u8 unk_2f;
    /* 0x30 */ u32 unk_30;
    /* 0x34 */ Unk_020be018_Vec unk_34;
    /* 0x40 */ Unk_020be018_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;

    s32 func_020be018(s32 a, s32 b, s32 c);
    void func_020be06c(s32 a, s32 b);
    void func_020be094();
    void func_020be0bc();
    s32 func_020bde0c(s32 a, s32 b, s32 c);
    void func_020bdd70(s32 a);
    void func_020bdd4c(s32 a);
    s32 func_020bea24(u32 a);
    s32 func_020beac8(u32 a);
    void func_020beb40(u32 a);
    void func_020beb88(s32 a);
    s32 func_020bebfc(s32 a);
    void func_020bec00();
    void func_020bec40();
    void func_020bef24();
    void func_020bef2c();
    void func_020bef44();
    void func_020bef90();
    void func_020bef98();
    void func_020bf15c();
    void func_020bf1d0();
    void func_020bf1d8();
    void func_020bf3bc();
    void func_020bf400();
};
struct Unk_020bee28_V {
    s32 x, y, z;
    Unk_020bee28_V(const Unk_020bf1d8_Vec &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_020bee28_V() {}
};
struct Unk_020bf18c_Pad {
    s32 v[3];
    Unk_020bf18c_Pad() {}
    ~Unk_020bf18c_Pad() {}
};
struct Unk_020bfc48_Pad {
    s32 v[4];
    Unk_020bfc48_Pad() {}
    ~Unk_020bfc48_Pad() {}
};
struct Unk_020bfe30_Vec {
    s32 x, y, z;
};
struct Unk_020bfe38_Ent {
    u8 unk_00[0x5c];
    s32 unk_5c;
    u8 unk_60[8];
    s32 unk_68;
};
struct Unk_020bfec0_Ent {
    u8 unk_00[0x54];
    s32 unk_54;
};
struct Unk_020bffc0_Mtx {
    s32 m[12];
};
class Unk_020bfe30 {
public:
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08[4];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10[0x24];
    /* 0x34 */ Unk_020bfe30_Vec unk_34;
    /* 0x40 */ Unk_020bfe30_Vec unk_40;
    /* 0x4c */ u8 unk_4c[4];
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ s16 unk_54;
    /* 0x56 */ u8 unk_56[2];
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c[4];
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ u8 unk_64[4];
    /* 0x68 */ s32 unk_68;

    void func_020bfe30();
    void func_020bfe38();
    void func_020bfec0(BOOL flag);
};
struct Unk_020c010c {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    s8 unk_06;
    u8 unk_07;
};
struct Unk_020c010c_Ent {
    u16 unk_00;
    u8 unk_02[10];
};
// ---------------------------------------------------------------------------------------------------------------------
struct Unk_020c0538_Out {
    u32 unk_00;
    u8 unk_04;
};
// Library base class; its ctor and dtor are out of line.
class Unk_020d8b38 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(void *p);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_020c0538_Out *out);
};
struct Unk_020c0408_Obj {
    u8 unk_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[8];
    s32 unk_14;
};
// Sub-object at 0x658 of Unk_020e6924
class Unk_020e6894 : public Unk_020d8b38 {
public:
    Unk_020e6894();
    virtual ~Unk_020e6894();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(void *p);
    virtual void vfunc_78(Unk_020c0538_Out *out);

    /* 0x04 */ u8 unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f[0x1d];
    /* 0x3c */ Unk_020c0408_Obj *unk_3c;
    /* 0x40 */ u8 unk_40[0x6c];
    /* 0xac */ Unk_020e6924 *unk_ac;
    /* 0xb0 */ s32 unk_b0;

    s32 func_020c0624();
    void func_020c062c(s32 v);
    void func_020c0634(Unk_020e6924 *owner);
};
// Base of Unk_020e6924; its dtor is out of line.
class Unk_0202e5a8 : public Unk_020d8c7c_Base {
public:
    virtual ~Unk_0202e5a8();

    /* 0x004 */ u8 unk_004[0x5c - 4];
    /* 0x05c */ u8 unk_05c[0x2a0 - 0x5c];
    /* 0x2a0 */ u8 unk_2a0[0xc];
    /* 0x2ac */ u8 unk_2ac[0x3b0 - 0x2ac];
    /* 0x3b0 */ u8 unk_3b0[0x564 - 0x3b0];
    /* 0x564 */ u8 unk_564[0x618 - 0x564];
    /* 0x618 */ u8 unk_618[0x654 - 0x618];
};
class Unk_020e6924 : public Unk_0202e5a8 {
public:
    virtual ~Unk_020e6924();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_020e6894 unk_658;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u8 unk_70e[0x724 - 0x70e];
    /* 0x724 */ u8 unk_724;

    void func_020c11b8(s32 state);
    BOOL func_020c06a0();
};

// 0x330-byte object of another unit's class (constructor 0x020b08b8, destructor 0x020b08b4)
class Unk_020b08b4 {
public:
    Unk_020b08b4();
    ~Unk_020b08b4();
    u8 unk_000[0x330];
};
struct U234_Record {
    void *fn;
    u16 unk_04;
    u16 unk_06;
};
namespace n00 {
extern "C" {
extern const s32 data_020c8cbc;
void func_020c003c(void);
}
}

// ======== the unit's objects (defined further down, in creation order) ========
namespace n00 {
extern "C" {
void _ZN12Unk_020bd1b013func_020bd2d8Ev(void);
void _ZN12Unk_020bd1b013func_020bd32cEv(void);
void _ZN12Unk_020be01813func_020bef90Ev(void);
void _ZN12Unk_020be20413func_020be7c0Ev(void);
void _ZN12Unk_020bb25c13func_020bb420Ev(void);
void _ZN12Unk_020bb25c13func_020bb304Ev(void);
void _ZN12Unk_020bb25c13func_020bb3b0Ev(void);
void _ZN12Unk_020bb25c13func_020bb33cEv(void);
void _ZN12Unk_020be01813func_020bef2cEv(void);
void _ZN12Unk_020bd1b013func_020bd408Ev(void);
void func_020bb1c4(void);
void func_020bb0fc(void);
void _ZN12Unk_020bb25c13func_020bb490Ev(void);
void _ZN12Unk_020be01813func_020bf15cEv(void);
void func_020bb0c8(void);
void func_020bfbf8(void);
void func_020bf5d8(void);
void func_020bfb60(void);
void _ZN12Unk_020bd1b013func_020bd334Ev(void);
void _ZN12Unk_020be20413func_020be58cEj(void);
void func_020bfcd0(void);
void func_020bb128(void);
void _ZN12Unk_020be20413func_020be7dcEv(void);
void _ZN12Unk_020bd1b013func_020bd4b4Ev(void);
void _ZN12Unk_020bb25c13func_020bb458Ev(void);
void _ZN12Unk_020be20413func_020be7bcEv(void);
void _ZN12Unk_020be20413func_020be624Ev(void);
void _ZN12Unk_020be20413func_020be6f0Ej(void);
void _ZN12Unk_020bd1b013func_020bd4bcEv(void);
void func_020bb1f8(void);
void func_020bb224(void);
void _ZN12Unk_020bb25c13func_020bb2ccEv(void);
void _ZN12Unk_020bb25c13func_020bb294Ev(void);
void func_020bb15c(void);
void _ZN12Unk_020be01813func_020bef44Ev(void);
void func_020bfd7c(void);
void _ZN12Unk_020be01813func_020bef98Ev(void);
void _ZN12Unk_020bd1b013func_020bd400Ev(void);
void _ZN12Unk_020bd1b013func_020bd288Ev(void);
void func_020bfb68(void);
void func_020bf664(void);
void _ZN12Unk_020bb25c13func_020bb3e8Ev(void);
void _ZN12Unk_020be01813func_020bf3bcEv(void);
void _ZN12Unk_020be20413func_020be4d0Ev(void);
void _ZN12Unk_020be20413func_020be61cEv(void);
void _ZN12Unk_020be20413func_020be7b4Ev(void);
void _ZN12Unk_020be01813func_020bef24Ev(void);
void _ZN12Unk_020be01813func_020bf1d0Ev(void);
void func_020bf4ac(void);
void func_020bf620(void);
void func_020bfa08(void);
void _ZN12Unk_020bfe3013func_020bfe38Ev(void);
void _ZN12Unk_020bfe3013func_020bfe30Ev(void);
void func_020bfa1c(void);
void _ZN12Unk_020be01813func_020bf1d8Ev(void);
void func_020bb190(void);
void _ZN12Unk_020bd1b013func_020bd3acEv(void);
void _ZN12Unk_020bb25c13func_020bb374Ev(void);
void func_020bf634(void);
void func_020bf4b4(void);
void _ZN12Unk_020be20413func_020be4d8Ev(void);
void func_020bfcc8(void);
void _ZN12Unk_020be01813func_020beb40Ej(void);
void _ZN12Unk_020be20413func_020be9e8Ev(void);
void func_020bfa90(void);
void _ZN12Unk_020bb25c13func_020bb25cEv(void);
void _ZN12Unk_020bfe3013func_020bfec0Ei(void);
extern const u32 data_020d0dec[1];
extern const u32 data_020d0df0[1];
extern const u32 data_020d0df4[1];
extern const u32 data_020d0df8[1];
extern const u32 data_020d0dfc[1];
extern const u32 data_020d0e00[1];
extern const u8 data_020d0e04[5];
extern const u32 data_020d0e0c[2];
extern void *const data_020d0e14[3];
extern const u32 data_020d0e20[3];
extern const u32 data_020d0e2c[3];
extern const u32 data_020d0e38[3];
extern const u32 data_020d0e44[3];
extern const u8 data_020d0e50[14];
extern const u8 data_020d0e60[15];
extern const u32 data_020d0e70[4];
extern const u32 data_020d0e80[4];
extern const u32 data_020d0e90[4];
extern const u32 data_020d0ea0[5];
extern const u32 data_020d0eb4[5];
extern const u32 data_020d0ec8[6];
extern const u32 data_020d0ee0[6];
extern const u32 data_020d0ef8[6];
extern const u32 data_020d0f10[6];
extern const u32 data_020d0f28[6];
extern const u32 data_020d0f40[8];
extern const u32 data_020d0f60[8];
extern const u32 data_020d0f80[9];
extern const u32 data_020d0fa4[9];
extern const u32 data_020d0fc8[12];
extern const u32 data_020d0ff8[12];
extern const u32 data_020d1028[12];
extern const u32 data_020d1058[12];
extern const u32 data_020d1088[12];
extern const u32 data_020d10b8[12];
extern const u32 data_020d10e8[12];
extern const u32 data_020d1118[12];
extern const u32 data_020d1148[12];
extern const u32 data_020d1178[12];
extern const u32 data_020d11a8[13];
extern const u32 data_020d11dc[20];
extern const u32 data_020d122c[23];
extern const u32 data_020d1288[44];
extern const u32 data_020d1338[44];
extern const u32 data_020d13e8[192];
extern const u32 data_020d16e8[208];
extern u32 data_020e4630[1];
extern u32 data_020e4634[1];
extern u32 data_020e4638[1];
extern u32 data_020e463c[1];
extern u32 data_020e4640[1];
extern u32 data_020e4644[2];
extern void *data_020e464c[2];
extern U234_Record data_020e4654;
extern u32 data_020e465c[2];
extern void *data_020e4664[2];
extern u32 data_020e466c[2];
extern u32 data_020e4674[2];
extern void *data_020e467c[2];
extern u32 data_020e4684[2];
extern void *data_020e468c[2];
extern void *data_020e4694[2];
extern u32 data_020e469c[2];
extern void *data_020e46a4[2];
extern void *data_020e46ac[2];
extern void *data_020e46b4[2];
extern void *data_020e46bc[2];
extern void *data_020e46c4[2];
extern void *data_020e46cc[2];
extern void *data_020e46d4[2];
extern u32 data_020e46dc[2];
extern void *data_020e46e4[2];
extern u32 data_020e46ec[2];
extern void *data_020e46f4[2];
extern u32 data_020e46fc[2];
extern void *data_020e4704[2];
extern u32 data_020e470c[2];
extern void *data_020e4714[2];
extern void *data_020e471c[2];
extern void *data_020e4724[2];
extern void *data_020e472c[2];
extern u32 data_020e4734[2];
extern void *data_020e473c[2];
extern void *data_020e4744[2];
extern void *data_020e474c[2];
extern void *data_020e4754[2];
extern u32 data_020e475c[2];
extern u32 data_020e4764[2];
extern u32 data_020e476c[2];
extern u32 data_020e4774[2];
extern u32 data_020e477c[2];
extern void *data_020e4784[2];
extern void *data_020e478c[2];
extern void *data_020e4794[2];
extern void *data_020e479c[2];
extern void *data_020e47a4[2];
extern void *data_020e47ac[2];
extern u32 data_020e47b4[2];
extern void *data_020e47bc[2];
extern u32 data_020e47c4[2];
extern void *data_020e47cc[2];
extern void *data_020e47d4[2];
extern void *data_020e47dc[2];
extern void *data_020e47e4[2];
extern u32 data_020e47ec[2];
extern u32 data_020e47f4[2];
extern u32 data_020e47fc[2];
extern void *data_020e4804[2];
extern void *data_020e480c[2];
extern u32 data_020e4814[2];
extern void *data_020e481c[2];
extern void *data_020e4824[2];
extern u32 data_020e482c[2];
extern void *data_020e4834[2];
extern u32 data_020e483c[2];
extern u32 data_020e4844[2];
extern u32 data_020e484c[2];
extern u32 data_020e4854[2];
extern u32 data_020e485c[2];
extern u32 data_020e4864[2];
extern u32 data_020e486c[2];
extern u32 data_020e4874[2];
extern u32 data_020e487c[2];
extern u32 data_020e4884[2];
extern u32 data_020e488c[2];
extern void *data_020e4894[2];
extern u32 data_020e489c[2];
extern void *data_020e48a4[2];
extern void *data_020e48ac[2];
extern void *data_020e48b4[2];
extern u32 data_020e48bc[2];
extern u32 data_020e48c4[2];
extern u32 data_020e48cc[2];
extern u32 data_020e48d4[2];
extern u32 data_020e48dc[2];
extern void *data_020e48e4[2];
extern u32 data_020e48ec[2];
extern u32 data_020e48f4[2];
extern void *data_020e48fc[2];
extern void *data_020e4904[2];
extern void *data_020e490c[2];
extern void *data_020e4914[2];
extern u32 data_020e491c[2];
extern void *data_020e4924[2];
extern u32 data_020e492c[2];
extern void *data_020e4934[2];
extern void *data_020e493c[2];
extern void *data_020e4944[2];
extern void *data_020e494c[2];
extern void *data_020e4954[2];
extern u32 data_020e495c[2];
extern void *data_020e4964[2];
extern void *data_020e496c[2];
extern void *data_020e4974[2];
extern u32 data_020e497c[2];
extern u32 data_020e4984[2];
extern u32 data_020e498c[2];
extern void *data_020e4994[2];
extern u32 data_020e499c[2];
extern u32 data_020e49a4[2];
extern void *data_020e49ac[2];
extern void *data_020e49b4[2];
extern void *data_020e49bc[2];
extern void *data_020e49c4[2];
extern u32 data_020e49cc[2];
extern u32 data_020e49d4[2];
extern void *data_020e49dc[2];
extern void *data_020e49e4[2];
extern u32 data_020e49ec[2];
extern u32 data_020e49f4[2];
extern u32 data_020e49fc[2];
extern void *data_020e4a04[2];
extern u32 data_020e4a0c[2];
extern u32 data_020e4a14[2];
extern u32 data_020e4a1c[2];
extern u32 data_020e4a24[2];
extern void *data_020e4a2c[2];
extern void *data_020e4a34[2];
extern u32 data_020e4a3c[2];
extern void *data_020e4a44[2];
extern void *data_020e4a4c[2];
extern u32 data_020e4a54[2];
extern u32 data_020e4a5c[2];
extern void *data_020e4a64[3];
extern void *data_020e4a70[3];
extern void *data_020e4a7c[3];
extern void *data_020e4a88[3];
extern void *data_020e4a94[3];
extern void *data_020e4aa0[3];
extern void *data_020e4aac[3];
extern void *data_020e4ab8[3];
extern void *data_020e4ac4[3];
extern void *data_020e4ad0[3];
extern void *data_020e4adc[3];
extern void *data_020e4ae8[3];
extern void *data_020e4af4[3];
extern void *data_020e4b00[3];
extern void *data_020e4b0c[3];
extern void *data_020e4b18[3];
extern void *data_020e4b24[3];
extern void *data_020e4b30[3];
extern void *data_020e4b3c[3];
extern void *data_020e4b48[3];
extern u32 data_020e4b54[4];
extern u32 data_020e4b64[4];
extern void *data_020e4b74[4];
extern void *data_020e4b84[4];
extern u32 data_020e4b94[4];
extern u32 data_020e4ba4[4];
extern u32 data_020e4bb4[4];
extern u32 data_020e4bc4[4];
extern u32 data_020e4bd4[4];
extern u32 data_020e4be4[4];
extern u32 data_020e4bf4[4];
extern u32 data_020e4c04[4];
extern u32 data_020e4c14[4];
extern u32 data_020e4c24[4];
extern u32 data_020e4c34[4];
extern u32 data_020e4c44[4];
extern u32 data_020e4c54[4];
extern u32 data_020e4c64[4];
extern u32 data_020e4c74[4];
extern u32 data_020e4c84[4];
extern u32 data_020e4c94[4];
extern void *data_020e4ca4[4];
extern u32 data_020e4cb4[4];
extern u32 data_020e4cc4[4];
extern u32 data_020e4cd4[4];
extern u32 data_020e4ce4[4];
extern u32 data_020e4cf4[4];
extern u32 data_020e4d04[4];
extern u32 data_020e4d14[4];
extern u32 data_020e4d24[4];
extern void *data_020e4d34[5];
extern void *data_020e4d48[5];
extern void *data_020e4d5c[5];
extern void *data_020e4d70[5];
extern void *data_020e4d84[5];
extern void *data_020e4d98[5];
extern char data_020e4dac[23];
extern void *data_020e4ddc[6];
extern char data_020e4df4[27];
extern char data_020e4e10[27];
extern char data_020e4e48[30];
extern char data_020e4e68[30];
extern char data_020e4e88[30];
extern char data_020e4ea8[30];
extern char data_020e4ec8[30];
extern char data_020e4ee8[30];
extern char data_020e4f08[30];
extern char data_020e4f28[30];
extern char data_020e4f48[30];
extern char data_020e4f68[30];
extern char data_020e4f88[30];
extern char data_020e4fa8[30];
extern char data_020e4fc8[30];
extern char data_020e4fe8[31];
extern char data_020e5008[31];
extern char data_020e5028[31];
extern char data_020e5048[31];
extern char data_020e5068[31];
extern char data_020e5088[31];
extern char data_020e50a8[31];
extern char data_020e50c8[31];
extern void *data_020e50e8[9];
extern void *data_020e510c[9];
extern void *data_020e5130[9];
extern void *data_020e5154[9];
extern void *data_020e5178[9];
extern void *data_020e519c[9];
extern void *data_020e51c0[9];
extern void *data_020e51e4[9];
extern u32 data_020e5208[10];
extern void *data_020e5230[10];
extern void *data_020e5258[12];
extern void *data_020e5288[12];
extern u32 data_020e52b8[12];
extern u32 data_020e52e8[12];
extern void *data_020e5318[12];
extern void *data_020e5348[12];
extern u32 data_020e5378[14];
extern void *data_020e53b0[18];
extern u32 data_020e53f8[18];
extern u32 data_020e5440[18];
extern u32 data_020e5488[18];
extern u32 data_020e54d0[20];
extern u32 data_020e5520[20];
extern u32 data_020e5570[20];
extern u32 data_020e55c0[20];
extern u32 data_020e5610[20];
extern void *data_020e56b0[21];
extern void *data_020e5704[24];
extern void *data_020e5764[27];
extern void *data_020e57d0[27];
extern void *data_020e583c[27];
extern void *data_020e58a8[27];
extern void *data_020e5914[27];
extern void *data_020e5980[45];
extern u32 data_020e5a34[48];
extern void *data_020e5af4[132];
extern void *data_020e5d04[132];
extern void *data_020e5f14[132];
extern void *data_020e6124[132];
extern void *data_020e6334[132];
extern void *data_020e6544[138];
extern u8 data_021ef654;
extern u32 data_021ef658[1];
extern u32 data_021ef670;
extern s32 data_021ef674;
extern u32 data_021ef678[2];
extern u32 data_021ef680[2];
extern u32 data_021ef688[3];
extern u32 data_021ef694[3];
extern u32 data_021ef6c4[7];
extern u32 data_021ef908[196];
extern Unk_020b08b4 data_021efc18;
extern Unk_020b9fe4 data_021eff48;
extern Unk_020bcf04 data_021f14e0;
}
}

// ======== unk_020bfe30.cpp ========
namespace n13 {
struct Unk_020cbb18;
static inline void Unk_020bfe30_Set(Unk_020bfe30_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
struct Unk_020cbb18 {
    u8 unk_00[0x68];
    s32 unk_68;
};
extern "C" {
void func_020be094(void *p);
}
extern "C" {
void func_01ffca8c(Unk_020bfe30_Vec *a, Unk_020bfe30_Vec *b, Unk_020bfe30_Vec *c);
}
extern "C" {
Unk_020bfe38_Ent *func_02095204(s32 n);
}
extern "C" {
u32 func_02063b8c(u32 n);
}
extern "C" {
Unk_020bffc0_Mtx *func_0203a220(void);
}
extern "C" {
void func_0203eeac(void *out, void *in);
}
extern "C" {
void func_01ffb898(void *a, void *b, void *c);
}
extern "C" {
s32 _ZN12Unk_0203b35013func_0203bc3cEv(s32 a);
}
extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
}
extern "C" {
void func_020e9888(void *a, s32 b);
}
extern "C" {
s32 __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*dtor)(void *));
}
extern "C" {
void _ZN12Unk_02000c8cD1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd054D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd058D1Ev(void *p);
}
extern "C" {
s32 func_0209cc08(void *p);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *p);
}
extern "C" {
void func_02116048(void *a, void *b, s32 n);
}
extern "C" {
void func_0209d124(void *p, s32 n);
}
extern "C" {
s32 func_0209d374(void *a, void *b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void func_0209d2c0(void *p, s32 n);
}
extern "C" {
s32 func_020b50e8(void);
}
extern "C" {
BOOL func_020a032c(void);
}
extern "C" {
s32 func_0209750c(void);
}
extern "C" {
BOOL _ZN12Unk_02097ff413func_02098044Ej(s32 a, s32 b);
}
extern "C" {
u16 *func_0203f2d8(void);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
void func_0209cf88(void *p);
}
extern "C" {
void _ZN12Unk_020d8bc8D2Ev(void *p);
}
extern "C" {
s32 _ZN12Unk_02019dd813func_02019d8cEv(void *p);
}
extern "C" {
s32 _ZN12Unk_020660f813func_020679b4Ev(void *p);
}
extern "C" {
s32 _ZN12Unk_020aa3b813func_020aa514Ev(void);
}
extern "C" {
void _ZN12Unk_020660f813func_02067a84EPhPv(void *a, void *b, u32 c);
}
extern "C" {
void func_020850e0(void);
}
extern "C" {
void func_02085178(void);
}
extern "C" {
void _ZN12Unk_02086f8413func_02086fa0Ev(void);
}
extern "C" {
void _ZN12Unk_02086f8413func_02086f98Ev(void);
}
extern "C" {
s32 _ZN12Unk_0209865c13func_020986a4Ev(s32 a);
}
extern "C" {
s32 _ZN12Unk_020872fc13func_02087364Ev(s32 a);
}
extern "C" {
s32 _ZN12Unk_020d771413func_02015818Ejj(void *p, s32 a, s32 b);
}
extern "C" {
s32 _ZN12Unk_02097ff413func_0209801cEj(s32 a, s32 b);
}
extern "C" {
void func_0202e1cc(s32 a, s32 b);
}
extern "C" {
s32 _ZN12Unk_0201ad2013func_0201ad34Ei(void *p, s32 a);
}
extern "C" {
s32 _ZN12Unk_0201ad2013func_0201ad30Ei(void *p, s32 a);
}
extern "C" {
s32 _ZN12Unk_020d77148vfunc_38Ej(void *p, void *q);
}
extern "C" {
void _ZN12Unk_020d8b38D2Ev(void *p);
}
extern "C" {
void _ZN12Unk_020d8b38C2Ev(void *p);
}
extern "C" {
void func_020c11b8(void *p, s32 n);
}
extern "C" {
s32 func_020a0414(void);
}
extern "C" {
s32 func_02097520(s32 a);
}
extern "C" {
BOOL func_02094f2c(s32 a, s32 b);
}
extern "C" {
void func_02094b0c(void *v, s32 a, s32 b);
}
extern "C" {
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
}
extern "C" {
BOOL func_020951b8(s32 a);
}
extern "C" {
BOOL _ZN12Unk_0201985813func_02019790Ev(void *p);
}
extern "C" {
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
}
extern "C" {
void _ZN12Unk_02013b1013func_02014198Ehh(void *p, s32 a, s32 b);
}
extern "C" {
void _ZN12Unk_020660f813func_02067a78Ev(void *p);
}
extern "C" {
void _Z13func_020c22fcv(void);
}
extern "C" {
void func_0203a5d8(void);
}
extern "C" {
s32 func_020816f8(s32 a);
}
extern "C" {
void _ZN12Unk_020d771413func_02015a80EP18Unk_02015b8c_Scene(void *p, s32 a);
}
extern "C" {
void _ZN12Unk_020660f813func_02067a6cEv(void *p);
}
extern "C" {
s32 _ZN12Unk_02013b1013func_02014220Ev(void *p);
}
extern "C" {
s32 func_02002bdc(void *a, void *b);
}
extern "C" {
void func_02094ae8(s32 a, s32 b);
}
extern "C" {
void _Z13func_020c22e0v(void);
}
extern "C" {
BOOL func_020a03c4(void);
}
extern "C" {
void func_020b78c4(void);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_020729ccEj(Unk_020cbb18 *p, s32 a);
}
extern "C" {
s32 _ZN12Unk_020872fc13func_0208733cEv(void);
}
extern "C" {
void _ZN12Unk_020872fc13func_02087368Ev(s32 a);
}
extern "C" {
void _ZN12Unk_0208721013func_02087210Ev(void);
}
extern "C" {
s32 func_020b4934(void);
}
extern "C" {
void func_020b4bbc(s32 a, s32 b);
}
extern "C" {
extern u8 data_021c3cc0;
}
extern "C" {
extern Unk_020bfe30_Vec data_020d1c8c;
}
extern "C" {
extern u16 data_020c6cc8;
}
extern "C" {
extern u32 data_020c6d1c;
}
extern "C" {
extern u8 data_021f4880[];
}
extern "C" {
extern s32 data_020d0e20[];
}
extern "C" {
extern s32 data_020e463c;
}
namespace L_021f43e0 { extern "C" { extern struct S { u8 p[0x2f00]; Unk_020bfec0_Ent v; } data_021f14e0; } }
#define data_021f43e0 n13::L_021f43e0::data_021f14e0.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; s16 v[1]; } data_021eff48; } }
#define data_021f1448 n13::L_021f1448::data_021eff48.v
extern "C" {
extern s16 data_02135f44[];
}
extern "C" {
extern Unk_020bffc0_Mtx data_021f47e0;
}
extern "C" {
extern s32 data_021c3070;
}
extern "C" {
extern u8 data_021f4570;
}
extern "C" {
extern s32 data_021f4574;
}
extern "C" {
extern Unk_020e6924 *data_021f4578;
}
extern "C" {
extern u8 data_020d1a2c[];
}
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
extern u32 data_020e679c;
}
// ---------------------------------------------------------------------------------------------------------------------
static inline void Unk_020bfe38_Add(s32 *dst, s32 v) {
    *dst += v;
}
static inline BOOL Unk_020c06a0_IsMode2() {
    return data_021c3cc0 == 2;
}

extern "C" void func_020bffc0(s32 *out, Unk_020bfe30_Vec *in);
extern "C" Unk_020e5668 *func_020c003c();
extern "C" void *func_020c0078(void *p);

extern "C" void *func_020c0078(void *p) {
    __cxa_vec_cleanup((u8 *)p + 0x302c, 8, 0xc, _ZN12Unk_02000c8cD1Ev);
    __cxa_vec_cleanup((u8 *)p + 0x2f58, 4, 0x14, _ZN12Unk_020bd054D1Ev);
    __cxa_vec_cleanup(p, 0x3c, 0x74, _ZN12Unk_020bd058D1Ev);
    return p;
}

// ---------------------------------------------------------------------------------------------------------------------
// Vtable classes of the library (autoload_2)

extern "C" Unk_020e5668 *func_020c003c() {
    return new Unk_020e5668();
}

extern "C" void func_020bffc0(s32 *out, Unk_020bfe30_Vec *in) {
    Unk_020bffc0_Mtx *m = func_0203a220();
    data_021f47e0 = *m;
    Unk_020bfe30_Vec v;
    v.x = in->x;
    v.y = in->y;
    v.z = in->z;
    u8 a[12];
    s32 b[3];
    func_0203eeac(a, &v);
    func_01ffb898(a, &data_021f47e0, b);
    s32 c = _ZN12Unk_0203b35013func_0203bc3cEv(data_021c3070);
    s32 q = -func_01ffc5a4(0x60000, c);
    func_020e9888(b, func_01ffc5a4(q, b[2]));
    *out = b[0] + 0x80000;
}

}
void Unk_020bfe30::func_020bfec0(BOOL flag) {
    using namespace n13;
    s32 idx;
    s32 x = (data_020e463c * func_02063b8c(0x8a) + 0x80) << 12;
    data_020e463c *= -1;
    s32 y = -0x14000 - (func_02063b8c(0x10) << 12);
    Unk_020bfe30_Vec *p34 = &unk_34;
    p34->x = x;
    p34->y = y;
    p34->z = 0;
    s32 mul = data_021f43e0.unk_54;
    s32 rr = func_02063b8c(0xaac) - 0x556;
    s32 sh = ((mul * (rr + data_021f1448[0x38 / 2])) << 4) >> 16;
    idx = ((u16)sh >> 4) * 2;
    Unk_020bfe30_Vec *p40 = &unk_40;
    s16 *tab = data_02135f44;
    p40->x = tab[idx] * -0x24;
    p40->y = tab[idx + 1] * 0x24;
    p40->z = 0;
    unk_50 = 0x800;
    unk_54 = (u16)sh;
    s32 r = func_02063b8c(3);
    unk_0c = r + 2;
    s32 v;
    switch (r) {
    case 0:
        v = func_02063b8c(0x40) + 0x80;
        break;
    case 1:
        v = func_02063b8c(0x40) + 0x40;
        break;
    default:
        v = func_02063b8c(0x40);
        break;
    }
    unk_60 = v;
    if (flag == 1) {
        unk_34.y += func_02063b8c(v + 0x101) << 12;
    }
    unk_58 = 2;
}
namespace n13 {

}
void Unk_020bfe30::func_020bfe38() {
    using namespace n13;
    Unk_020bfe30_Vec *p = &unk_34;
    func_01ffca8c(p, &unk_40, p);
    Unk_020bfe38_Ent *e = func_02095204(4);
    if (e) {
        s32 d = -(e->unk_5c - e->unk_68);
        s32 m = data_020d0e20[unk_68];
        d = (d * m) >> 12;
        p->x += d;
    }
    if (p->y > (unk_60 << 12) + 0x100000) {
        unk_04 = 3;
    } else if (p->x < -0x14000) {
        p->x += 0x11e000;
    } else if (p->x > 0x114000) {
        p->x -= 0x11e000;
    }
}
namespace n13 {

}
void Unk_020bfe30::func_020bfe30() {
    using namespace n13;
    func_020be094(this);
}
namespace n13 {

#undef data_021f43e0
#undef data_021f1448
}

// ======== unk_020bf4ac.cpp ========
namespace n12 {
struct Unk_020bf4b4;
struct Unk_020bf4b4;
typedef struct { s32 x, y, z; }
 Unk_020bf4b4_Vec;
struct Unk_020bf4b4 {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x14];
    s32 unk_24;
    u8 unk_28[6];
    u8 unk_2e;
    u8 unk_2f[5];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    s32 unk_50;
    s16 unk_54;
    s16 unk_56;
    s32 unk_58;
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6c;
    s32 unk_70;
};
typedef struct { u8 unk_00[12]; }
 Unk_020bf4b4_Elem;
typedef struct { u16 r:5; u16 g:5; u16 b:5; u16 pad:1; }
 Unk_020bf77c_Col;
typedef struct { u8 unk_00; u8 unk_01; Unk_020bf77c_Col unk_02; Unk_020bf77c_Col unk_04; Unk_020bf77c_Col unk_06; Unk_020bf77c_Col unk_08; u16 unk_0a; }
 Unk_020bf77c_Rec;
typedef struct { u8 pad0[6]; u16 a[5]; u8 pad1[6]; u16 b[5]; }
 Unk_020bf77c_Tbl;
typedef struct { u8 pad[0x10]; u8 unk_10; }
 Unk_020bfa08_Data;
typedef struct { u8 pad[0x24]; s32 unk_24; s32 unk_28; }
 Unk_020bf720_Data;
typedef struct { u8 pad[0x5c]; s32 unk_5c; u8 pad2[8]; s32 unk_68; }
 Unk_020bfcd0_Obj;
typedef struct { u8 pad[4]; s32 unk_04; u8 pad2[0x2c]; s32 unk_34; s32 unk_38; u8 pad3[0x18]; s32 unk_50; s16 unk_54; }
 Unk_020bfc48_Slot;
extern "C" {
u32 func_020be094(void *);
}
extern "C" {
s32 func_020be018(void *, s32, s32, s32);
}
extern "C" {
s32 func_020bde0c(void *, s32, s32, s32);
}
extern "C" {
void func_020bd964(void *, s32);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd67cEh(void *, s32);
}
extern "C" {
void func_020bdd70(void *, s32);
}
extern "C" {
void func_020bdd4c(void *, s32);
}
extern "C" {
void func_020be0bc(void *);
}
extern "C" {
s32 func_01ffcb0c(s32, s32);
}
extern "C" {
void func_01ffca8c(void *, void *, void *);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd668Ev(void *);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd604Eiiih(void *, s32, s32, s32, s32);
}
extern "C" {
s32 func_02063b8c(s32);
}
extern "C" {
void func_020be06c(void *, s32, s32);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd758Ei(void *, s32);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd718EiPt(void *, s32, void *);
}
extern "C" {
void func_020e759c(void *, s32, s32);
}
extern "C" {
void func_0209cf18(void *);
}
extern "C" {
u32 func_0209cf00(void);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}
extern "C" {
s32 func_01ffc538(s32);
}
extern "C" {
s32 func_01ffc5a4(s32, s32);
}
extern "C" {
s32 func_020e7b98(s32, s32);
}
extern "C" {
void func_020bdd24(void *, s32, s32);
}
extern "C" {
void func_020e9888(void *, s32);
}
extern "C" {
BOOL _ZN12Unk_0208927013func_020891d8Ev(void *);
}
extern "C" {
s32 _ZN12Unk_020bc58c13func_020bcbd8Ei(void *, s32);
}
extern "C" {
BOOL func_020bfc48(Unk_020bf4b4 *);
}
extern "C" {
void *func_02095204(s32);
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; u8 v[1]; } data_021f14e0; } }
#define data_021f3010 n12::L_021f3010::data_021f14e0.v
namespace L_021f4488 { extern "C" { extern struct S { u8 p[0x2fa8]; u8 v[1]; } data_021f14e0; } }
#define data_021f4488 n12::L_021f4488::data_021f14e0.v
extern "C" {
extern u32 data_021f4768;
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } data_021f14e0; } }
#define data_021f4398 n12::L_021f4398::data_021f14e0.v
extern "C" {
extern u16 data_021ef694[];
}
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020bf720_Data v; } data_021eff48; } }
#define data_021f1448 n12::L_021f1448::data_021eff48.v
namespace L_021f4254 { extern "C" { extern struct S { u8 p[0x2d74]; Unk_020bf77c_Tbl v[1]; } data_021f14e0; } }
#define data_021f4254 n12::L_021f4254::data_021f14e0.v
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; Unk_020bfa08_Data v; } data_021f14e0; } }
#define data_021f4420 n12::L_021f4420::data_021f14e0.v
extern "C" {
extern s16 data_02135f44[];
}
extern "C" {
extern s32 data_020d122c[];
}
extern "C" {
extern s32 data_020d0f28[];
}
extern "C" {
extern s32 data_020d0e44[];
}
extern "C" {
extern s32 data_020d0e38[];
}
extern "C" {
extern s32 data_020d0e2c[];
}
extern "C" {
extern s32 data_020e4638;
}
extern "C" {
extern Unk_020bf4b4 data_021f14e0[];
}
extern "C" {
void func_020bf68c(void);
}
extern "C" {
BOOL func_020bf948(void *out);
}
extern "C" {
void func_020bf6b0(Unk_020bf4b4 *this_);
}
extern "C" {
void func_020bf6e8(Unk_020bf4b4 *this_);
}
extern "C" {
void func_020bf720(Unk_020bf4b4 *this_);
}
extern "C" {
void func_020bf75c(Unk_020bf4b4 *this_);
}
extern "C" {
void func_020bf77c(Unk_020bf4b4 *this_);
}

extern "C" u32 func_020bf4ac(void *a);
extern "C" void func_020bf4b4(Unk_020bf4b4 *this_);
extern "C" void func_020bf5d8(Unk_020bf4b4 *this_, u32 arg);
extern "C" void func_020bf620(Unk_020bf4b4 *this_);
extern "C" void func_020bf634(Unk_020bf4b4 *this_);
extern "C" void func_020bf664(Unk_020bf4b4 *this_);
extern "C" void func_020bf68c(void);
extern "C" void func_020bf6b0(Unk_020bf4b4 *this_);
extern "C" void func_020bf6e8(Unk_020bf4b4 *this_);
extern "C" void func_020bf720(Unk_020bf4b4 *this_);
extern "C" void func_020bf75c(Unk_020bf4b4 *this_);
extern "C" void func_020bf77c(Unk_020bf4b4 *this_);
extern "C" BOOL func_020bf948(void *out_);
extern "C" void func_020bfa08(Unk_020bf4b4 *this_);
extern "C" void func_020bfa1c(Unk_020bf4b4 *this_);
extern "C" void func_020bfa90(Unk_020bf4b4 *this_);
extern "C" void func_020bfb60(void *a);
extern "C" void func_020bfb68(Unk_020bf4b4 *this_);
extern "C" void func_020bfbf8(Unk_020bf4b4 *this_, s32 arg);
extern "C" BOOL func_020bfc48(Unk_020bf4b4 *this_);
extern "C" void func_020bfcc8(void *a);
extern "C" void func_020bfcd0(Unk_020bf4b4 *this_);
extern "C" void func_020bfd7c(Unk_020bf4b4 *this_, s32 arg);

extern "C" void func_020bfd7c(Unk_020bf4b4 *this_, s32 arg) {
    s32 a = func_02063b8c(3);
    s32 b = func_02063b8c(0x80);
    s32 g = data_020e4638;
    s32 x = (g * b + 0x80) << 12;
    Unk_020bf4b4_Vec *pos, *vel;
    data_020e4638 = g * 0xffffffff;
    pos = (Unk_020bf4b4_Vec *)&this_->unk_34;
    this_->unk_34 = x;
    pos->y = -0x14000;
    pos->z = 0;
    vel = (Unk_020bf4b4_Vec *)&this_->unk_40;
    this_->unk_40 = 0;
    vel->y = data_020d0e38[a];
    vel->z = 0;
    this_->unk_60 = func_02063b8c(0x300) + 0x180;
    this_->unk_64 = func_02063b8c(0x10000);
    this_->unk_68 = a;
    this_->unk_6c = x;
    this_->unk_70 = func_02063b8c(2) + 0x5000;
    this_->unk_0c = data_020d0e2c[a];
    this_->unk_58 = 2;
    if (arg == 1) {
        this_->unk_38 = this_->unk_38 + (func_02063b8c(0x1c1) << 12);
    }
}

extern "C" void func_020bfcd0(Unk_020bf4b4 *this_) {
    Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&this_->unk_34;
    Unk_020bfcd0_Obj *o;
    s32 base, ang;
    func_01ffca8c(pos, &this_->unk_40, pos);
    o = (Unk_020bfcd0_Obj *)func_02095204(4);
    if (o != NULL) {
        s32 dv = -(o->unk_5c - o->unk_68);
        dv = (dv * data_020d0e44[this_->unk_68]) >> 12;
        dv += this_->unk_6c;
        this_->unk_6c = dv;
    }
    base = this_->unk_6c;
    ang = (s16)((s16)this_->unk_64 + this_->unk_60);
    this_->unk_64 = ang;
    { s32 tv = data_02135f44[((u16)ang >> 4) * 2]; s32 sc = this_->unk_70; pos->x = base + ((tv * sc) >> 12); }
    if (pos->y > 0x1d4000) {
        this_->unk_04 = 3;
    } else if (pos->x < -0x14000) {
        pos->x = pos->x + 0x11e000;
    } else if (pos->x > 0x114000) {
        pos->x = pos->x - 0x11e000;
    }
}

extern "C" void func_020bfcc8(void *a) { func_020be094(a); }

extern "C" BOOL func_020bfc48(Unk_020bf4b4 *this_) {
    Unk_020bfc48_Pad pad;
    Unk_020bf4b4 *p = &data_021f14e0[_ZN12Unk_020bc58c13func_020bcbd8Ei(data_021f14e0, 3)];
    BOOL result = FALSE;
    if (p != NULL && p->unk_04 == 2) {
        Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&p->unk_34;
        s32 k = ((s32)((u32)(p->unk_54 << 16) >> 16) >> 4) * 2;
        s32 d = func_01ffc5a4(0x10000, p->unk_50);
        s32 y = pos->y + func_01ffcb0c(data_02135f44[k + 1], d);
        s32 x = pos->x - func_01ffcb0c(data_02135f44[k], d);
        Unk_020bf4b4_Vec *out = (Unk_020bf4b4_Vec *)&this_->unk_34;
        out->x = x;
        out->y = y;
        out->z = 0;
        result = TRUE;
    }
    return result;
}

extern "C" void func_020bfbf8(Unk_020bf4b4 *this_, s32 arg) {
    s32 m = arg & 0xf;
    this_->unk_0c = data_020d0f28[m];
    if (m == 1) {
        this_->unk_58 = 3;
    } else {
        this_->unk_58 = 2;
    }
    this_->unk_60 = arg;
    this_->unk_64 = 0;
    if (m == 1) {
        s32 v = data_020d122c[0];
        this_->unk_4c = v;
        this_->unk_50 = v;
        if (!func_020bfc48(this_)) {
            this_->unk_04 = 3;
        }
    }
}

extern "C" void func_020bfb68(Unk_020bf4b4 *this_) {
    s32 m = this_->unk_60 & 0xf;
    this_->unk_64 = this_->unk_64 + 1;
    if (m == 0) {
        func_020e9888(&this_->unk_40, 0xe66);
        func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
        if (_ZN12Unk_0208927013func_020891d8Ev(&this_->unk_10)) {
            this_->unk_04 = 3;
        }
    } else if (m == 1) {
        s32 n = this_->unk_64;
        s32 v = data_020d122c[n];
        if (n >= 0x17) {
            this_->unk_04 = 3;
        } else {
            this_->unk_4c = v;
            this_->unk_50 = v;
            *(u16 *)&this_->unk_54 += 0xe39;
            if (!func_020bfc48(this_)) {
                this_->unk_04 = 3;
            }
        }
    } else if (this_->unk_64 >= 6) {
        this_->unk_04 = 3;
    }
}

extern "C" void func_020bfb60(void *a) { func_020be094(a); }

extern "C" void func_020bfa90(Unk_020bf4b4 *this_) {
    s32 ang, x, y, sn, cs, k, nx, ny;
    this_->unk_4c = 0x1000;
    this_->unk_50 = 0x800;
    if (func_02063b8c(2) == 0) {
        x = (func_02063b8c(0x3c) + 0xc4) << 12;
        y = 0;
    } else {
        x = 0x100000;
        y = func_02063b8c(0x30) << 12;
    }
    ang = func_020e7b98((func_02063b8c(0x17) + 0x80 << 12) - y, -x);
    k = ((u16)ang >> 4) * 2;
    sn = data_02135f44[k];
    cs = data_02135f44[k + 1];
    x -= cs * 0x23;
    y -= sn * 0x23;
    this_->unk_34 = x;
    this_->unk_38 = y;
    this_->unk_3c = 0;
    this_->unk_40 = func_01ffcb0c(cs, 0x7800);
    this_->unk_44 = func_01ffcb0c(sn, 0x7800);
    this_->unk_48 = 0;
    this_->unk_54 = ang - 0x4000;
    this_->unk_0c = 0x11;
    this_->unk_58 = 3;
    data_021f4420.unk_10 = 0;
    func_020bdd24(this_, 6, 0x801);
}

extern "C" void func_020bfa1c(Unk_020bf4b4 *this_) {
    func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
    s32 x = this_->unk_34 >> 12;
    BOOL out;
    s32 y = this_->unk_38 >> 12;
    if (y < -0x23 || y > 0xca || x < -0x23 || x > 0x123) {
        out = TRUE;
    } else {
        out = FALSE;
    }
    s32 in;
    if (this_->unk_60 == 0 && !out && y > 0 && y < 0xc0 && x > 0 && x < 0x100) {
        in = 1;
    } else {
        in = 0;
    }
    data_021f4420.unk_10 = in;
    if (out) {
        this_->unk_04 = 3;
    }
}

extern "C" void func_020bfa08(Unk_020bf4b4 *this_) {
    data_021f4420.unk_10 = 0;
    func_020be094(this_);
}

extern "C" BOOL func_020bf948(void *out_) {
    s32 *out = (s32 *)out_;
    BOOL ok = TRUE;
    u8 d[4];
    u32 b, a, base, off, x;
    s32 r, y;
    func_0209cf18(d);
    b = d[1];
    a = d[0];
    base = func_0209cf00();
    off = 0;
    if (b >= 0x13) {
        off = base + (a * 0x3c + (b - 0x13) * 0xe10);
    } else if (b < 4) {
        off = base + (b * 0xe10 + 0x4650 + a * 0x3c);
    } else {
        ok = FALSE;
    }
    if (ok) {
        x = _u32_div_f(off << 12, 0x7e90);
        r = func_01ffcb0c(0xffee0000, x) + 0x110000;
        y = func_01ffcb0c(x - 0x800, x - 0x800);
        y = func_01ffc538(0x1000 - y);
        y = func_01ffc5a4(y - 0xddb, 0x225);
        out[0] = r;
        y <<= 4;
        y = -y;
        out[1] = y + 0x3c000;
        out[2] = 0;
    }
    return ok;
}

extern "C" void func_020bf77c(Unk_020bf4b4 *this_) {
    Unk_020bf77c_Rec rec;
    Unk_020bf77c_Tbl *t0;
    Unk_020bf77c_Tbl *t1;
    s32 inv, v0, v1, v2, v3, v4, v5, w0, w1, t;
    u32 i;
    s32 r7, r5;
    func_0209cf18(&rec);
    u32 idx = rec.unk_01;
    u32 mon = rec.unk_00;
    if (idx >= 0x13) idx -= 0x13; else idx += 5;
    t0 = &data_021f4254[idx];
    t1 = &data_021f4254[idx + 1];
    t = this_->unk_6c;
    inv = 0x1000 - t;
    r7 = _s32_div_f(mon << 12, 60);
    r5 = 0x1000 - r7;
    for (i = 0; i < 5; i++) {
        s32 w2;
        *(u16 *)&rec.unk_02 = t0->b[i];
        *(u16 *)&rec.unk_04 = t1->b[i];
        *(u16 *)&rec.unk_06 = t0->a[i];
        *(u16 *)&rec.unk_08 = t1->a[i];
        v0 = func_01ffcb0c(rec.unk_02.r << 12, r5) + func_01ffcb0c(rec.unk_04.r << 12, r7);
        v1 = func_01ffcb0c(rec.unk_02.g << 12, r5) + func_01ffcb0c(rec.unk_04.g << 12, r7);
        v2 = func_01ffcb0c(rec.unk_02.b << 12, r5) + func_01ffcb0c(rec.unk_04.b << 12, r7);
        v3 = func_01ffcb0c(rec.unk_06.r << 12, r5) + func_01ffcb0c(rec.unk_08.r << 12, r7);
        v4 = func_01ffcb0c(rec.unk_06.g << 12, r5) + func_01ffcb0c(rec.unk_08.g << 12, r7);
        v5 = func_01ffcb0c(rec.unk_06.b << 12, r5) + func_01ffcb0c(rec.unk_08.b << 12, r7);
        w0 = func_01ffcb0c(v0, t) + func_01ffcb0c(v3, inv);
        w1 = func_01ffcb0c(v1, t) + func_01ffcb0c(v4, inv);
        w2 = func_01ffcb0c(v2, t) + func_01ffcb0c(v5, inv);
        rec.unk_0a = (((w2 + 0x800) >> 12) << 10) | (((w0 + 0x800) >> 12) | (((w1 + 0x800) >> 12) << 5));
        data_021ef694[i] = rec.unk_0a;
    }
}

extern "C" void func_020bf75c(Unk_020bf4b4 *this_) {
    s32 s = data_021f1448.unk_24;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    this_->unk_6c = f;
}

extern "C" void func_020bf720(Unk_020bf4b4 *this_) {
    s32 v;
    s32 s = data_021f1448.unk_28;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    v = this_->unk_6c;
    func_020e759c(&v, f, 0x100);
    this_->unk_6c = v;
}

extern "C" void func_020bf6e8(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    func_020bf75c(this_);
    func_020bf77c(this_);
    for (u32 i = 0; i < 5; i++) {
        _ZN12Unk_020bd71813func_020bd718EiPt(p, i + 10, &data_021ef694[i]);
    }
}

extern "C" void func_020bf6b0(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    func_020bf720(this_);
    func_020bf77c(this_);
    for (u32 i = 0; i < 5; i++) {
        _ZN12Unk_020bd71813func_020bd718EiPt(p, i + 10, &data_021ef694[i]);
    }
}

extern "C" void func_020bf68c(void) {
    u8 *p = data_021f4398;
    for (u32 i = 0; i < 5; i++) {
        _ZN12Unk_020bd71813func_020bd758Ei(p, i + 10);
    }
}

extern "C" void func_020bf664(Unk_020bf4b4 *this_) {
    if (func_020bf948(&this_->unk_34)) {
        this_->unk_0c = 0x12;
        this_->unk_58 = 3;
        func_020bf6e8(this_);
    } else {
        this_->unk_04 = 3;
    }
}

extern "C" void func_020bf634(Unk_020bf4b4 *this_) {
    if ((data_021f4768 & 0x7f) == 0) {
        if (!func_020bf948(&this_->unk_34)) {
            this_->unk_04 = 3;
        }
        func_020bf6b0(this_);
    }
}

extern "C" void func_020bf620(Unk_020bf4b4 *this_) {
    func_020bf68c();
    func_020be094(this_);
}

extern "C" void func_020bf5d8(Unk_020bf4b4 *this_, u32 arg) {
    func_020be06c(this_, func_02063b8c(2) == 0 ? 1 : 0, 0x3e8);
    this_->unk_0c = 1;
    this_->unk_58 = 2;
    this_->unk_60 = 0;
    arg &= 1;
    this_->unk_64 = arg != 0 ? 1 : 0;
    this_->unk_68 = 0;
}

extern "C" void func_020bf4b4(Unk_020bf4b4 *this_) {
    s32 t;
    if (this_->unk_60 == 0) {
        if (func_020be018(this_, 0x1ec, 0x5000, 0x3e8)) {
            this_->unk_04 = 3;
        } else if (func_020bde0c(this_, 0xe000, 0x1a000, -0x3000)) {
            t = this_->unk_08 + 1;
            func_020bd964(data_021f3010 + this_->unk_24 * 12, t);
            this_->unk_08 = t;
            _ZN12Unk_020bd1b013func_020bd67cEh(data_021f4488, this_->unk_64 != 0 ? 1 : 0);
            func_020bdd70(this_, 0x7f8);
            this_->unk_60 = 1;
        } else {
            func_020bdd4c(this_, 0x7f7);
        }
    } else if (this_->unk_60 == 1) {
        this_->unk_0c = 0;
        func_020be0bc(this_);
        this_->unk_40 = 0;
        this_->unk_44 = -0x800;
        this_->unk_48 = 0;
        this_->unk_60 = 2;
        this_->unk_68 = 0;
    } else {
        this_->unk_44 += 0x666;
        this_->unk_44 = func_01ffcb0c(this_->unk_44, 0xfd7);
        func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
        if (this_->unk_38 > 0xd0000) {
            _ZN12Unk_020bd1b013func_020bd668Ev(data_021f4488);
            this_->unk_04 = 3;
        }
    }
    if (this_->unk_60 >= 1) {
        _ZN12Unk_020bd1b013func_020bd604Eiiih(data_021f4488, this_->unk_34, this_->unk_38, this_->unk_4c, this_->unk_2e == 0 ? 1 : 0);
    }
}

extern "C" u32 func_020bf4ac(void *a) { return func_020be094(a); }

#undef data_021f3010
#undef data_021f4488
#undef data_021f4398
#undef data_021f1448
#undef data_021f4254
#undef data_021f4420
}

// ======== unk_020beb40.cpp ========
namespace n11 {
struct Unk_021f3010;
struct Unk_021f3010 { s32 unk_00; s32 unk_04; u8 unk_08; u8 unk_09; u8 pad[2]; };
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
}
extern "C" {
void func_01ffca8c(Unk_020be018_Vec *a, Unk_020be018_Vec *b, Unk_020be018_Vec *out);
}
extern "C" {
void func_020e9888(Unk_020be018_Vec *v, s32 scale);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
s32 func_02063b8c(s32 n);
}
extern "C" {
s32 _ZN12Unk_0208927013func_02089244Ev(void *p);
}
extern "C" {
s32 _ZN12Unk_0208927013func_020891d8Ev(void *p);
}
extern "C" {
void _ZN12Unk_0208927013func_020891d0Ev(void *p);
}
extern "C" {
void _ZN12Unk_0208927013func_020891bcEv(void *p);
}
extern "C" {
s32 func_020bd950(Unk_021f3010 *p, s32 v);
}
extern "C" {
void func_020bd964(Unk_021f3010 *p, s32 v);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd604Eiiih(void *p, s32 a, s32 b, s32 c, BOOL d);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd618Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd624Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd640Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd64cEv(void *p);
}
extern "C" {
void func_02040208(s32 a);
}
extern "C" {
s32 func_02094348();
}
extern "C" {
s32 func_020947f0();
}
extern "C" {
void func_020b17e0(s32 a, BOOL b);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e148Ej(void *p, s32 a);
}
extern "C" {
s32 func_020beef8(s32 a, s32 flag);
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; Unk_021f4398 v; } data_021f14e0; } }
#define data_021f4398 n11::L_021f4398::data_021f14e0.v
namespace L_021f4488 { extern "C" { extern struct S { u8 p[0x2fa8]; u8 v[1]; } data_021f14e0; } }
#define data_021f4488 n11::L_021f4488::data_021f14e0.v
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
extern u8 data_021f14e0[];
}
extern "C" {
extern Unk_020bf1d8_Vec data_021c309c;
}
extern "C" {
extern Unk_020bf1d8_Vec data_021f4880;
}
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 data_020c8cbc;
}
extern "C" {
extern s32 data_020d0e0c[];
}
extern "C" {
extern Unk_020bec40_Pair data_020d0e80[];
}
extern "C" {
extern s32 data_020d0f80[];
}
extern "C" {
extern s32 data_020d0fa4[];
}
extern "C" {
extern s32 data_020d1288[];
}
extern "C" {
extern s32 data_020d1338[];
}
extern "C" {
extern s16 data_02135f44[];
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[1]; } data_021f14e0; } }
#define data_021f3010 n11::L_021f3010::data_021f14e0.v
extern "C" {
Unk_020be018 *_ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(void *tab, s32 a, s32 b, void *pos, s32 c);
}
extern "C" {
void func_020bf18c(Unk_020be018_Vec *pos, s32 scale, s32 speed);
}
extern "C" {
Unk_020bee28_Vec2 func_020bee28(s32 a, s32 b);
}

extern "C" Unk_020bee28_Vec2 func_020bee28(s32 a, s32 b);
extern "C" s32 func_020beef8(s32 a, s32 flag);
extern "C" void func_020bf18c(Unk_020be018_Vec *pos, s32 scale, s32 speed);

}
void Unk_020be018::func_020bf400()
{
    using namespace n11;
    if (unk_64 > 0) {
        if (unk_64 == 1) {
            s32 r4, scale, y, q, idx;
            unk_64 = func_02063b8c(2) + 1;
            r4 = func_02063b8c(2) + 2;
            scale = unk_4c;
            q = func_01ffc5a4(func_02063b8c(0x10) << 12, scale);
            idx = ((u16)(s16)func_02063b8c(0x10000) >> 4) << 1;
            y = unk_34.y + func_01ffcb0c(q, data_02135f44[idx]);
            Unk_020be018_Vec pos;
            pos.x = unk_34.x + func_01ffcb0c(q, data_02135f44[idx + 1]);
            pos.y = y;
            pos.z = 0;
            Unk_020be018 *o = _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(data_021f14e0, 2, 0x3c, &pos, r4 & 0xf);
            if (o) {
                o->unk_4c = scale;
                o->unk_50 = scale;
            }
        } else {
            unk_64 = unk_64 - 1;
        }
    }
}
namespace n11 {

}
void Unk_020be018::func_020bf3bc()
{
    using namespace n11;
    func_020be06c(func_02063b8c(2) == 0 ? 1 : 0, 0x1000);
    unk_0c = 0x16;
    unk_58 = 2;
    _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 9);
    unk_60 = 0;
    unk_64 = 0;
    unk_68 = 0;
}
namespace n11 {

}
void Unk_020be018::func_020bf1d8()
{
    using namespace n11;
    if (unk_60 == 0) {
        if (func_020be018(0x385, 0x1000, 0xfa0)) {
            unk_04 = 3;
        } else if (func_020bde0c(0x1a000, 0xc000, 0x5000)) {
            func_020bd964(data_021f3010 + unk_24, 0x24);
            unk_08 = 0x24;
            func_020bdd70(0x7fc);
            _ZN12Unk_020bd1b013func_020bd64cEv(data_021f4488);
            unk_60 = 1;
        } else {
            func_020bdd4c(0x7fb);
        }
    } else if (unk_60 == 1) {
        unk_0c = 0x17;
        func_020be0bc();
        unk_40.x = unk_2e ? 0x2666 : -0x2666;
        unk_40.y = -0x399a;
        unk_40.z = 0;
        unk_60 = 2;
    } else if (unk_60 == 2) {
        if (_ZN12Unk_0208927013func_020891d8Ev(unk_10)) {
            func_020bd964(data_021f3010 + unk_24, 0x25);
            unk_08 = 0x25;
            unk_60 = 3;
            unk_64 = 1;
        }
    } else if (unk_60 == 3) {
        unk_0c = 0x18;
        func_020be0bc();
        unk_60 = 4;
        unk_68 = 0;
    } else if (unk_60 == 4) {
        if (unk_34.y > 0xd0000) {
            func_02040208(0x44);
            func_02094348();
            s32 obj = func_020947f0();
            func_020b17e0(obj, unk_2e == 0 ? 1 : 0);
            _ZN12Unk_020bd1b013func_020bd640Ev(data_021f4488);
            unk_04 = 3;
        }
    }
    if ((s32)unk_60 >= 2) {
        Unk_020bf1d8_Vec v = data_021f4880;
        s32 sc;
        if ((s32)unk_60 >= 4) {
            v.x = unk_2e ? 0x19a : -0x19a;
            v.y = 0x19a;
            sc = 0xfd7;
        } else {
            v.y = 0x800;
            sc = 0x1000;
        }
        func_01ffca8c(&unk_40, (Unk_020be018_Vec *)&v, &unk_40);
        func_020e9888(&unk_40, sc);
        func_01ffca8c(&unk_34, &unk_40, &unk_34);
    }
    if ((s32)unk_60 >= 1) {
        _ZN12Unk_020bd1b013func_020bd604Eiiih(data_021f4488, unk_34.x, unk_34.y, unk_4c, unk_2e == 0 ? 1 : 0);
    }
    func_020bf400();
}
namespace n11 {

}
void Unk_020be018::func_020bf1d0()
{
    using namespace n11;
    func_020be094();
}
namespace n11 {

extern "C" void func_020bf18c(Unk_020be018_Vec *pos, s32 scale, s32 speed)
{
    Unk_020bf18c_Pad tmp;
    Unk_020be018 *o = _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(data_021f14e0, 2, 0x3c, pos, 0);
    if (o) {
        o->unk_4c = scale;
        o->unk_50 = scale;
        o->unk_40.x = func_01ffcb0c(speed, 0x800);
        o->unk_40.y = 0;
        o->unk_40.z = 0;
    }
}

}
void Unk_020be018::func_020bf15c()
{
    using namespace n11;
    func_020be06c(unk_08 == 0x28 ? 1 : 0, 0x8000);
    unk_0c = 0x13;
    unk_58 = 2;
    unk_60 = 0;
    unk_64 = 0;
}
namespace n11 {

}
void Unk_020be018::func_020bef98()
{
    using namespace n11;
    if (unk_60 == 0) {
        if (func_020be018(0x30a, 0x8000, -100)) {
            unk_04 = 3;
        } else if (func_020bde0c(0x1b000, 0x15000, 0)) {
            s32 t = unk_08 + 1;
            func_020bd964(data_021f3010 + unk_24, t);
            unk_08 = t;
            _ZN12Unk_020bd1b013func_020bd624Ev(data_021f4488);
            func_020bdd70(0x7ff);
            unk_60 = 1;
            unk_64 = 0;
        } else if (_ZN12Unk_0208927013func_02089244Ev(unk_10) == 0) {
            if (unk_64++ == 0) func_020bdd70(0x7fe);
        } else {
            unk_64 = 0;
        }
    } else if (unk_60 == 1) {
        unk_0c = 0x14;
        func_020be0bc();
        _ZN12Unk_0208927013func_020891d0Ev(unk_10);
        unk_40.x = unk_2e ? 0x3c00 : -0x3c00;
        unk_40.y = -0x4000;
        unk_40.z = 0;
        func_020bf18c(&unk_34, unk_4c, unk_40.x);
        unk_4c = func_01ffcb0c(unk_4c, 0xe8c);
        unk_50 = func_01ffcb0c(unk_50, 0xe8c);
        unk_60 = 2;
        unk_64 = 0;
    } else if (unk_60 == 2) {
        unk_64 = unk_64 + 1;
        if (unk_64 >= 1) {
            unk_4c = func_01ffcb0c(unk_4c, 0x119a);
            unk_50 = func_01ffcb0c(unk_50, 0x119a);
            unk_60 = 6;
            unk_64 = 0;
            _ZN12Unk_0208927013func_020891bcEv(unk_10);
        }
    }
    if ((s32)unk_60 >= 6) {
        unk_40.y += 0x59a;
        func_020e9888(&unk_40, 0x1000);
        func_01ffca8c(&unk_34, &unk_40, &unk_34);
    }
    if ((s32)unk_60 >= 6 && unk_34.y > 0xd0000) {
        _ZN12Unk_020bd1b013func_020bd618Ev(data_021f4488);
        func_02040208(0x45);
        unk_04 = 3;
    }
    if ((s32)unk_60 >= 1) {
        _ZN12Unk_020bd1b013func_020bd604Eiiih(data_021f4488, unk_34.x, unk_34.y, unk_4c, unk_2e == 0 ? 1 : 0);
    }
}
namespace n11 {

}
void Unk_020be018::func_020bef90()
{
    using namespace n11;
    func_020be094();
}
namespace n11 {

}
void Unk_020be018::func_020bef44()
{
    using namespace n11;
    s32 a = (func_02063b8c(0x80) * (func_02063b8c(2) * 2 - 1) + 0x80) << 12;
    s32 c = (func_02063b8c(0x50) + 0x50) << 12;
    Unk_020be018_Vec *p = &unk_34;
    unk_34.x = a;
    p->y = c;
    p->z = 0;
    unk_0c = func_02063b8c(8) + 8;
    unk_58 = 2;
}
namespace n11 {

}
void Unk_020be018::func_020bef2c()
{
    using namespace n11;
    if (_ZN12Unk_0208927013func_020891d8Ev(unk_10)) unk_04 = 3;
}
namespace n11 {

}
void Unk_020be018::func_020bef24()
{
    using namespace n11;
    func_020be094();
}
namespace n11 {

extern "C" s32 func_020beef8(s32 a, s32 flag)
{
    s32 r = 0xf;
    if (flag != 0) {
        r = 0;
    } else if (a == 0) {
        r = 2;
    } else if (a == 1) {
        r = 4;
    } else if (a == 2) {
        r = 6;
    } else if (a == 3) {
        r = 8;
    }
    return r;
}

extern "C" Unk_020bee28_Vec2 func_020bee28(s32 a, s32 b)
{
    Unk_020bee28_V v = data_021c309c;
    s32 base = data_020c8cb8;
    s32 d = v.z - base;
    s32 cnt = data_020c8cbc;
    s32 h = _s32_div_f(cnt << 2, 2);
    s32 p = func_01ffc5a4((v.x - cnt * 3) << 4, h);
    s32 q = func_01ffc5a4(d, base << 2);
    if (p < -0x10000) p = -0x10000;
    else if (p > 0x10000) p = 0x10000;
    if (q < 0) q = 0;
    else if (q > 0x1000) q = 0x1000;
    q = func_01ffcb0c(q - 0x1000, q - 0x1000);
    s32 e = 0x1000;
    e -= q;
    p = -p;
    s32 w = (e - 0x800) << 5;
    s32 c;
    if (b < 0) c = 0;
    else if (b > 0xbf000) c = 0xbf000;
    else c = b;
    s32 m = func_01ffcb0c(w, func_01ffc5a4(0xbf000 - c, 0xbf000));
    b = b + m;
    return Unk_020bee28_Vec2(a + p, b);
}

}
void Unk_020be018::func_020bec40()
{
    using namespace n11;
    s32 n = unk_64;
    s32 t, lo, hi, r, g, inv;
    if (n < 0x10) {
        t = 0;
    } else if (n < 0x1b) {
        t = _s32_div_f((n - 0x10) << 12, 11);
    } else {
        t = 0x1000;
    }
    u32 v = unk_60;
    s32 k = (v >> 8) & 3;
    BOOL f = ((v >> 31) & 1) != 0;
    lo = func_020beef8(k, f);
    hi = lo + 1;
    s32 i1, i0;
    i0 = 0;
    i1 = i0;
    if (n >= 0xb) {
        s32 x = n & 2;
        if (x == 0) i0 = 1;
        if (x != 0) i1 = 1;
        else i1 = 0;
    }
    s32 *p0 = data_020d0e0c + i0;
    s32 *p1 = data_020d0e0c + i1;
    if (k >= 4 || lo >= 15 || hi >= 15) return;
    Unk_020bec40_Pair *e = &data_020d0e80[k];
    r = 0; g = 0; inv = 0x1000 - t;
    r = func_01ffcb0c(data_020d0e80[k].a.r << 12, inv) + func_01ffcb0c(e->b.r << 12, t);
    g = func_01ffcb0c(data_020d0e80[k].a.g << 12, inv) + func_01ffcb0c(e->b.g << 12, t);
    s32 b = func_01ffcb0c(data_020d0e80[k].a.b << 12, inv) + func_01ffcb0c(e->b.b << 12, t);
    u32 B1, G1, R0, R1, B0, G0;
    s32 r0 = func_01ffcb0c(r, *p0);
    s32 g0 = func_01ffcb0c(g, *p0);
    s32 b0 = func_01ffcb0c(b, *p0);
    s32 r1 = func_01ffcb0c(r, *p1);
    s32 g1 = func_01ffcb0c(g, *p1);
    s32 b1 = func_01ffcb0c(b, *p1);
    G0 = (g0 + 0x800) >> 12;
    B0 = (b0 + 0x800) >> 12;
    R1 = (r1 + 0x800) >> 12;
    G1 = (g1 + 0x800) >> 12;
    B1 = (b1 + 0x800) >> 12;
    R0 = (r0 + 0x800) >> 12;
    if (R0 > 0x1f) R0 = 0x1f;
    if (G0 > 0x1f) G0 = 0x1f;
    if (B0 > 0x1f) B0 = 0x1f;
    if (R1 > 0x1f) R1 = 0x1f;
    if (G1 > 0x1f) G1 = 0x1f;
    if (B1 > 0x1f) B1 = 0x1f;
    u16 col[2];
    col[0] = R0 | (G0 << 5) | (B0 << 10);
    col[1] = R1 | (G1 << 5) | (B1 << 10);
    s32 idx = unk_24;
    s32 u8v = unk_08;
    Unk_021f4398 *const pal = &data_021f4398;
    pal->func_020bd718(lo, &col[0]);
    pal->func_020bd718(hi, &col[1]);
    func_020bd950(data_021f3010 + idx, u8v);
}
namespace n11 {

}
void Unk_020be018::func_020bec00()
{
    using namespace n11;
    u32 v = unk_60;
    BOOL f = ((v >> 31) & 1) != 0;
    s32 lo = func_020beef8((v >> 8) & 3, f);
    s32 hi = lo + 1;
    if (lo < 15) data_021f4398.func_020bd758(lo);
    if (hi < 15) data_021f4398.func_020bd758(hi);
}
namespace n11 {

}
s32 Unk_020be018::func_020bebfc(s32 a)
{
    using namespace n11;
    return a << 14;
}
namespace n11 {

}
void Unk_020be018::func_020beb88(s32 a)
{
    using namespace n11;
    s32 max;
    s32 *tab;
    u32 v = unk_60;
    BOOL f = ((v >> 30) & 1) != 0;
    if ((v >> 31) & 1) {
        if (f) { tab = data_020d1288; max = 0xb0; }
        else { tab = data_020d0f80; max = 0x24; }
    } else {
        if (f) { tab = data_020d1338; max = 0xb0; }
        else { tab = data_020d0fa4; max = 0x24; }
    }
    if (a < 0) a = _ZN12Unk_0208927013func_02089244Ev(unk_10);
    if (a < 0) max = 0;
    else if (a <= max) max = a;
    s32 x = tab[max];
    unk_4c = x;
    unk_50 = x;
}
namespace n11 {

}
void Unk_020be018::func_020beb40(u32 a)
{
    using namespace n11;
    s32 id = (a & 0xf) + 0x1d;
    unk_0c = id;
    unk_58 = 2;
    unk_60 = a;
    unk_64 = 0;
    unk_68 = 0;
    BOOL r = FALSE;
    s32 t = id - 0x21;
    if ((u32)t <= 9 && ((1 << t) & 0x249)) r = TRUE;
    if (r) {
        func_020bea24(a);
    } else {
        func_020beac8(a);
    }
}
namespace n11 {

#undef data_021f4398
#undef data_021f4488
#undef data_021f3010
}

// ======== unk_020be204.cpp ========
namespace n10 {
extern "C" {
s32 _ZN12Unk_020be01813func_020bebfcEi(s32 a, s32 b);
}
extern "C" {
void func_020bee28(Unk_020be204_Vec *v, s32 a, s32 b, BOOL c);
}
extern "C" {
void func_01ffca8c(Unk_020be204_Vec *a, Unk_020be204_Vec *b, Unk_020be204_Vec *c);
}
extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
}
extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void func_020e9888(Unk_020be204_Vec *v, s32 a);
}
extern "C" {
u32 func_02063b8c(u32 n);
}
extern "C" {
s32 func_02063b74(s32 n);
}
extern "C" {
void _ZN12Unk_02089270C1Ev(void *p);
}
extern "C" {
s32 _ZN12Unk_0208927013func_020891d8Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bd06c13func_020bd0d4EiiP17Unk_020bd0a4_Vec3(void *a, u32 b, u32 c, void *d);
}
extern "C" {
Unk_020bca5c_Rec *_ZN12Unk_020bc58c13func_020bca5cEi(void *a, u32 b);
}
extern "C" {
Unk_020be204_Vec func_020bffc0(Unk_020be204_Vec *v);
}
extern "C" {
s32 func_02094348();
}
extern "C" {
s32 _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(void *a, u32 b, u32 c, void *d, u32 e);
}
extern "C" {
void func_02064928(u32 a);
}
extern "C" {
extern s8 data_020d0e00[];
}
extern "C" {
extern u32 data_020d1a28;
}
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 data_021c309c[];
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; u8 v[1]; } data_021f14e0; } }
#define data_021f44ac n10::L_021f44ac::data_021f14e0.v
extern "C" {
extern u8 data_021f4880[];
}
extern "C" {
extern u8 data_021f14e0[];
}
static inline void Unk_020be204_Set(Unk_020be204_Vec *v, s32 x, s32 y, s32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
static inline BOOL Unk_020be204_Outside(Unk_020be204_Vec *v) {
    BOOL r = v->y < -0xa000 || v->y > 0xca000 || v->x < -0xa000 || v->x > 0x10a000;
    return r;
}
static inline BOOL Unk_020be204_Bit(u32 v, u32 n) {
    BOOL r = ((v >> n) & 1) ? TRUE : FALSE;
    return r;
}
static inline u32 Unk_020be820_Nib(s32 v) {
    return (v - 0x1d) & 0xf;
}
static inline u32 Unk_020be820_NibE(Unk_020be820_E v) { return (v - 0x1d) & 0xf; }

}
void Unk_020be204::func_020beac8(u32 a) {
    using namespace n10;
    BOOL b = Unk_020be204_Bit(a, 31);
    func_020beb88(0);
    unk_6c = unk_34.x;
    unk_70 = unk_34.y;
    func_020bee28(&unk_34, unk_6c, unk_70, b);
    u32 r2 = b ? 0x804 : 0x803;
    u32 m = (a >> 8) & 3;
    func_020bdd24(b ? 1 : m + 2, r2);
    if (b) {
        unk_5c = 4;
        func_02064928(m + 5);
    } else {
        func_02064928(m + 1);
    }
}
namespace n10 {

}
void Unk_020be204::func_020bea24(u32 a) {
    using namespace n10;
    BOOL b = Unk_020be204_Bit(a, 31);
    s32 x, y;
    if (b) {
        x = func_02063b8c(0x60) + 0x50;
        if ((a >> 28) & 1) {
            y = 0;
        } else {
            y = func_02063b8c(0x20);
        }
        y += 0x52;
    } else {
        x = func_02063b8c(0xa0) + 0x30;
        y = func_02063b8c(0x60) + 0x32;
    }
    unk_6c = x << 12;
    unk_70 = 0xbf000;
    unk_34.z = y << 12;
    func_020bee28(&unk_34, unk_6c, unk_70, b);
    unk_40.x = 0;
    unk_40.y = -0x3800;
    unk_40.z = 0;
    unk_50 = 0xa000;
    u32 m = (a >> 8) & 3;
    if (b) {
        m = 1;
    } else {
        m += 2;
    }
    func_020bdd24(m, 0x802);
}
namespace n10 {

}
void Unk_020be204::func_020be9e8() {
    using namespace n10;
    unk_64++;
    u32 t = unk_0c;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (m) {
        func_020be820();
    } else {
        func_020be970();
    }
}
namespace n10 {

}
void Unk_020be204::func_020be970() {
    using namespace n10;
    u32 flags = unk_60;
    BOOL r4 = ((flags >> 30) & 1) ? FALSE : TRUE;
    BOOL r6 = Unk_020be204_Bit(flags, 31);
    if (_ZN12Unk_0208927013func_020891d8Ev(&unk_10)) {
        if (r4) {
            func_020bec00();
        }
        unk_04 = 3;
    } else {
        func_020beb88(-1);
        func_020bee28(&unk_34, unk_6c, unk_70, r6);
        if (r4) {
            func_020bec40();
        }
    }
    if (unk_64 == 0x1d) {
        unk_60 |= data_020d1a28;
    }
}
namespace n10 {

}
void Unk_020be204::func_020be820() {
    using namespace n10;
    s32 lim;
    u32 flags = unk_60;
    BOOL b31 = Unk_020be204_Bit(flags, 31);
    BOOL done = FALSE;
    if (unk_31) {
        unk_68++;
        if ((s32)unk_68 > 6) {
            done = TRUE;
        }
    } else {
        lim = 0xc0000 - unk_34.z;
        s32 r = _ZN12Unk_020be01813func_020bebfcEi(lim, unk_64);
        if (r <= 0x20000) {
            unk_50 = func_01ffc5a4(0x20000, r);
            unk_70 = 0xc0000 - _s32_div_f(r, 2);
        } else {
            if (r < lim) {
                unk_50 = 0x1000;
            } else {
                unk_50 = func_01ffcb0c(unk_50, 0x14cd);
                if (unk_50 >= 0xa000) {
                    unk_50 = 0xa000;
                    unk_31 = 1;
                }
                r = lim;
            }
            unk_70 = 0xc0000 - (r - func_01ffc5a4(0x10000, unk_50));
        }
        func_020bee28(&unk_34, unk_6c, unk_70, b31);
    }
    if (done) {
        u32 m, a;
        unk_04 = 3;
        m = (flags >> 8) & 3;
        if ((unk_60 >> 31) & 1) {
            m = (m & 3) << 8;
            a = m | 0x80000000;
            m |= 0xc0000001;
        } else {
            s32 c = unk_0c;
            m = (m & 3) << 8;
            a = m | Unk_020be820_NibE((Unk_020be820_E)(c - 2));
            m |= Unk_020be820_NibE((Unk_020be820_E)(c - 1)) | 0x40000000;
        }
        Unk_020be204_Vec v;
        Unk_020be204_Set(&v, unk_6c, unk_34.z - 0x2000, 0);
        _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(data_021f14e0, 9, 0x3c, &v, a);
        _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(data_021f14e0, 9, 0x3c, &v, m);
    }
}
namespace n10 {

}
void Unk_020be204::func_020be7dc() {
    using namespace n10;
    u32 t = unk_0c;
    BOOL m = FALSE;
    t -= 0x21;
    if (t > 9) {
    } else if ((1 << t) & 0x249) {
        m = TRUE;
    }
    if (!m && !((unk_60 >> 30) & 1)) {
        func_020bec00();
    }
    func_020be094();
}
namespace n10 {

}
void Unk_020be204::func_020be7c0() {
    using namespace n10;
    unk_34.x = 0xb0000;
    unk_34.y = 0x67000;
    unk_0c = 0x15;
    unk_58 = 3;
}
namespace n10 {

}
void Unk_020be204::func_020be7bc() {
    using namespace n10;
}
namespace n10 {

}
void Unk_020be204::func_020be7b4() {
    using namespace n10;
    func_020be094();
}
namespace n10 {

}
void Unk_020be204::func_020be6f0(u32 a) {
    using namespace n10;
    Unk_020bca5c_Rec *rec = _ZN12Unk_020bc58c13func_020bca5cEi(data_021f14e0, a & 0xf);
    s32 id;
    unk_0c = 0x2d;
    unk_58 = 2;
    unk_60 = 0x18;
    id = rec->unk_00;
    unk_64 = id;
    Unk_020be204_Vec *pos = &rec->unk_04;
    const Unk_020be204_Vec &vt = func_020bffc0(pos);
    Unk_020be204_Vec *p34 = &unk_34;
    p34->x = vt.x;
    p34->y = 0xc5000;
    p34->z = 0;
    Unk_020be204_Vec *p40 = &unk_40;
    p40->x = 0;
    p40->y = -0xc000;
    p40->z = 0;
    s32 lim = data_020c8cb8 * 2;
    if (id == func_02094348() && pos->z < lim) {
        unk_2f = 1;
    }
    s32 d = pos->z - data_021c309c[2];
    BOOL far = (d < -0x14000 || d > 0xf000) ? TRUE : FALSE;
    a |= far << 31;
    if (far || unk_34.y >= 0xc0000) {
        unk_31 = 1;
    }
    unk_68 = a;
}
namespace n10 {

}
void Unk_020be204::func_020be624() {
    using namespace n10;
    u32 flags = unk_68;
    unk_60--;
    if ((s32)unk_60 < 0) {
        Unk_020be204_Vec *pos = &unk_34;
        Unk_020be204_Vec *vel = &unk_40;
        if ((s32)unk_60 == -2) {
            u32 t = (flags >> 4) & 0xf;
            if (t == 1) {
                vel->x = 0x2800;
            } else if (t == 2) {
                vel->x = -0x2800;
            }
        }
        func_01ffca8c(pos, vel, pos);
        if (Unk_020be204_Outside(pos) || unk_30) {
            unk_04 = 3;
        }
    }
    if (unk_31 && !((flags >> 31) & 1) && unk_34.y < 0xc0000) {
        unk_31 = 0;
    }
}
namespace n10 {

}
void Unk_020be204::func_020be61c() {
    using namespace n10;
    func_020be094();
}
namespace n10 {

}
void Unk_020be204::func_020be58c(u32 a) {
    using namespace n10;
    unk_60 = a;
    unk_64 = data_020d0e00[a & 3] + 0x14;
    unk_0c = 0x2c;
    unk_58 = 2;
    s32 y = (func_02063b8c(0x38) + 0x90) << 12;
    unk_34.x = -0x8000;
    unk_34.y = y;
    unk_34.z = 0;
    unk_40.x = 0x1000;
    unk_40.y = 0x2000;
    unk_40.z = 0;
    unk_40.x += func_02063b74(0x8000);
    unk_40.y -= func_02063b74(0x2000);
    unk_6c = -0x666;
    unk_70 = 0xcd;
    unk_6c += 0x8cd;
    unk_70 -= 0x666;
}
namespace n10 {

}
void Unk_020be204::func_020be4d8() {
    using namespace n10;
    if (unk_64 > 0) {
        unk_64--;
        if (unk_64 <= 0 && (unk_60 & 3) == 0) {
            _ZN12Unk_020bd06c13func_020bd0d4EiiP17Unk_020bd0a4_Vec3(data_021f44ac, 7, 0x805, data_021f4880);
        }
    } else {
        Unk_020be204_Vec *pos = &unk_34;
        Unk_020be204_Vec *vel = &unk_40;
        vel->x += unk_6c;
        vel->y += unk_70;
        func_020e9888(vel, 0xfc3);
        func_01ffca8c(pos, vel, pos);
        if (Unk_020be204_Outside(pos)) {
            unk_04 = 3;
        }
    }
}
namespace n10 {

}
void Unk_020be204::func_020be4d0() {
    using namespace n10;
    func_020be094();
}
namespace n10 {

}
Unk_020be204 *Unk_020be204::func_020be4b0() {
    using namespace n10;
    _ZN12Unk_02089270C1Ev(&unk_10);
    func_020be44c();
    func_020be428();
    return this;
}
namespace n10 {

}
void Unk_020be204::func_020be44c() {
    using namespace n10;
    u32 z = 0;
    u32 m = ~z;
    unk_4c = 0x1000;
    unk_50 = 0x1000;
    unk_34.x = 0;
    unk_34.y = 0;
    unk_34.z = 0;
    unk_40.x = 0;
    unk_40.y = 0;
    unk_40.z = 0;
    unk_54 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_2e = 1;
    unk_2f = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_56 = 0;
    unk_57 = 0;
    unk_58 = m;
    unk_5c = 0;
    *(s8 *)&unk_5d = m;
    unk_60 = 0;
    unk_64 = 0;
    unk_68 = 0;
    unk_6c = 0;
    unk_70 = 0;
}
namespace n10 {

}
void Unk_020be204::func_020be428() {
    using namespace n10;
    unk_00 = 0xd;
    unk_04 = 0;
    unk_08 = 0x34;
    unk_0c = 0x2e;
    unk_24 = 5;
    unk_4c = 0x1000;
    unk_50 = 0x1000;
    unk_54 = 0;
}
namespace n10 {

}
namespace n00 {
extern "C" {
const u32 data_020d16e8[208] = {0x0, 0xffff0000, 0x0, 0xc00, 0x0, 0xffff000c, 0x0, 0xc00, 0x0, 0xffff008c, 0x0,
    0xc00, 0x0, 0x200ffff, 0x1, 0xc00, 0x0, 0x204ffff, 0x1, 0xc00, 0x0, 0x208ffff, 0x1, 0xc00, 0x0, 0x20cffff,
    0x1, 0xc00, 0x0, 0x210ffff, 0x1, 0xc00, 0x0, 0x214ffff, 0x1, 0xc00, 0x0, 0x218ffff, 0x1, 0xc00, 0x0,
    0x21cffff, 0x1, 0xc00, 0x0, 0x280ffff, 0x1, 0xc00, 0x0, 0x284ffff, 0x1, 0xc00, 0x0, 0x288ffff, 0x1, 0xc00,
    0x0, 0x28cffff, 0x1, 0xc00, 0x0, 0x290ffff, 0x1, 0xc00, 0x0, 0x294ffff, 0x1, 0xc00, 0x0, 0x298ffff, 0x1,
    0xc00, 0x0, 0x29cffff, 0x1, 0xc00, 0x0, 0x300ffff, 0x1, 0xc00, 0x0, 0x304ffff, 0x1, 0xc00, 0x0, 0x308ffff,
    0x1, 0xc00, 0x0, 0x30cffff, 0x1, 0xc00, 0x0, 0x310ffff, 0x1, 0xc00, 0x0, 0x314ffff, 0x1, 0xc00, 0x0,
    0x318ffff, 0x1, 0xc00, 0x0, 0x31cffff, 0x1, 0xc00, 0x0, 0x380ffff, 0x1, 0xc00, 0x0, 0x384ffff, 0x1, 0xc00,
    0x0, 0x388ffff, 0x1, 0xc00, 0x0, 0x38cffff, 0x1, 0xc00, 0x1, 0x2800200, 0x2, 0xe04, 0x1, 0x2880208, 0x2,
    0xe04, 0x1, 0x3800300, 0x2, 0xe0d, 0x1, 0x3880308, 0x2, 0xe0d, 0x1, 0x800000, 0x2, 0xe02, 0x1, 0x880008, 0x2,
    0xe02, 0x1, 0x900010, 0x2, 0xe02, 0x1, 0x1800100, 0x2, 0xe03, 0x1, 0x1880108, 0x2, 0xe03, 0x1, 0x1900110,
    0x2, 0xe03, 0x1, 0x1980118, 0x2, 0xe03, 0x0, 0x1800100, 0x2, 0xc00, 0x0, 0xffff010c, 0x0, 0xd09, 0x0,
    0x1900110, 0x2, 0xd09, 0x0, 0x1980118, 0x2, 0xd09, 0x0, 0x800004, 0x4, 0xd01, 0x1, 0xffff0210, 0x0, 0xe03,
    0x2, 0xffffffff, 0x6, 0xffff, 0x2, 0xffffffff, 0x6, 0xffff, 0x2, 0xffffffff, 0x6, 0xffff, 0x0, 0xffff0010,
    0x0, 0xc00};
const u32 data_020d0df8[1] = {0x206};
void *data_020e6124[132] = {0, (void *)0x2, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, (void *)0x10000, (void *)data_020e49f4, (void *)0x1, (void *)0x20000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x20000, (void *)data_020e49f4, (void *)0x1, (void *)0x30000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x30000, (void *)data_020e49f4, (void *)0x1, (void *)0x40000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x40000, (void *)data_020e49f4, (void *)0x1, (void *)0x50000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x50000, (void *)data_020e49f4, (void *)0x1, (void *)0x60000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x60000, (void *)data_020e49f4, (void *)0x1, (void *)0x60000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x70000, (void *)data_020e49f4, (void *)0x1, (void *)0x70000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x80000, (void *)data_020e49f4, (void *)0x1, (void *)0x80000, (void *)data_020e49f4,
    (void *)0x1, (void *)0x90000, (void *)data_020e49f4, (void *)0x1, (void *)0x90000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49f4, (void *)0x1, (void *)0xa0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49f4, (void *)0x1, (void *)0xb0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49f4, (void *)0x1, (void *)0xc0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49f4, (void *)0x1, (void *)0xc0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49f4, (void *)0x1, (void *)0xd0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49f4, (void *)0x1, (void *)0xe0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49f4, (void *)0x1, (void *)0xe0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49f4, (void *)0x1, (void *)0xf0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49f4, (void *)0x1, (void *)0xf0000, (void *)data_020e49f4,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4c24[4] = {0x91f880e0, 0x9e, 0x91f88000, 0xffff011e};
}
}
namespace n10 {
}
void Unk_020be204::func_020be314(u32 a) {
    using namespace n10;
    static void (Unk_020be204::*tbl[13])(u32) = {
        *(void (Unk_020be204::**)(u32))n00::data_020e4a4c, *(void (Unk_020be204::**)(u32))n00::data_020e481c, *(void (Unk_020be204::**)(u32))n00::data_020e4714,
        *(void (Unk_020be204::**)(u32))n00::data_020e4a34, *(void (Unk_020be204::**)(u32))n00::data_020e48b4, *(void (Unk_020be204::**)(u32))n00::data_020e471c,
        *(void (Unk_020be204::**)(u32))n00::data_020e48fc, *(void (Unk_020be204::**)(u32))n00::data_020e46f4, *(void (Unk_020be204::**)(u32))n00::data_020e480c,
        *(void (Unk_020be204::**)(u32))n00::data_020e4a04, *(void (Unk_020be204::**)(u32))n00::data_020e468c,
        *(void (Unk_020be204::**)(u32))n00::data_020e47ac, *(void (Unk_020be204::**)(u32))n00::data_020e473c,
    };
    void (Unk_020be204::*fn)(u32) = tbl[unk_00];
    if (fn) {
        (this->*fn)(a);
    }
}
namespace n10 {

}
namespace n00 {
extern "C" {
const u32 data_020d1148[12] = {0xcb00d2, 0xbb00c3, 0xb400b4, 0xd200b4, 0x10400f0, 0x12c0118, 0x1400140,
    0x1400140, 0x1400140, 0x1400140, 0x11b0140, 0xee00ff};
u32 data_020e4644[2] = {0x81f000f0, 0xffff309c};
void *data_020e4804[2] = {(void *)func_020bb15c, 0};
const u32 data_020d0e2c[3] = {0x5, 0x6, 0x7};
u32 data_020e4c34[4] = {0x51fc80e0, 0x9d, 0x51fc8000, 0xffff011d};
const u8 data_020d0e60[15] = {0xde, 0xdf, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xcb, 0xcc, 0xcd, 0xce,
    0xcf};
void *data_020e4d70[5] = {(void *)data_020e4fe8, (void *)data_020e5008, (void *)data_020e5028,
    (void *)data_020e5048, (void *)data_020e5048};
const u32 data_020d1178[12] = {0x8f0096, 0x800087, 0x780078, 0x960078, 0xbc00b4, 0xc100c3, 0xd200d2, 0xd200d2,
    0xd200d2, 0xd200d2, 0xc300d2, 0xa500b4};
void *data_020e49dc[2] = {(void *)_ZN12Unk_020be20413func_020be4d8Ev, 0};
void *data_020e4ae8[3] = {(void *)data_020e4864, (void *)0x4, 0};
u32 data_020e4c54[4] = {0x71fc8000, 0x9d, 0x71fc80e0, 0xffff011d};
u32 data_020e497c[2] = {0x81f000f0, 0xffff211c};
void *data_020e49ac[2] = {(void *)_ZN12Unk_020bd1b013func_020bd3acEv, 0};
void *data_020e5258[12] = {(void *)data_020e49a4, (void *)0x1, 0, (void *)data_020e4a1c, (void *)0x1, 0,
    (void *)data_020e486c, (void *)0x1, 0, (void *)data_020e477c, (void *)0x1, 0};
const u32 data_020d0e90[4] = {0x21, 0x24, 0x27, 0x2a};
u32 data_020e4638[1] = {0x1};
const u32 data_020d13e8[192] = {0x0, 0x101, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1010000, 0x1010101, 0x1, 0x0, 0x0,
    0x0, 0x1010100, 0x10101, 0x0, 0x1010101, 0x1, 0x1010100, 0x1010101, 0x0, 0x0, 0x1000000, 0x1010101,
    0x1010101, 0x1010000, 0x1, 0x0, 0x1010100, 0x1010101, 0x2010101, 0x1020202, 0x1010101, 0x1010101, 0x1010101,
    0x1020202, 0x1010101, 0x1010101, 0x1010202, 0x1010101, 0x1010101, 0x2020202, 0x2020101, 0x2010102, 0x2020202,
    0x1010102, 0x2020201, 0x2020202, 0x1020202, 0x2020202, 0x1020202, 0x2010101, 0x2020202, 0x3030202, 0x2020203,
    0x2020303, 0x2020202, 0x2020202, 0x2020202, 0x1020203, 0x3030302, 0x2030303, 0x3030202, 0x2020203, 0x3030302,
    0x2030303, 0x2030302, 0x3030202, 0x2030303, 0x3020202, 0x3030303, 0x3030303, 0x3030203, 0x3030203, 0x3030303,
    0x2020303, 0x3030303, 0x4030303, 0x4030304, 0x3040404, 0x3030303, 0x3030202, 0x3030303, 0x4040403, 0x4040404,
    0x4030304, 0x4040404, 0x3030304, 0x3040404, 0x4040404, 0x4040404, 0x4040404, 0x3030404, 0x3020203, 0x4040303,
    0x2020202, 0x1010102, 0x1010101, 0x2020101, 0x2020202, 0x3020202, 0x1010101, 0x1010101, 0x3020201, 0x2020203,
    0x2020202, 0x2020202, 0x1010000, 0x2020201, 0x2020202, 0x2020202, 0x3030302, 0x2020202, 0x2030303, 0x2020202,
    0x1010102, 0x1010101, 0x1000000, 0x2010101, 0x2020203, 0x2030202, 0x1010101, 0x1010101, 0x1010101, 0x1010101,
    0x2030202, 0x1010202, 0x101, 0x0, 0x1010000, 0x10101, 0x1, 0x3010000, 0x1010101, 0x1010101, 0x1010101,
    0x1010101, 0x0, 0x1030101, 0x1010101, 0x1010101, 0x1010101, 0x1010101, 0x0, 0x1000000, 0x1020401, 0x0, 0x0,
    0x10100, 0x101, 0x1010100, 0x1010204, 0x1010101, 0x1010101, 0x1010101, 0x2010202, 0x3030202, 0x3040403,
    0x3030303, 0x3030303, 0x3030303, 0x2020202, 0x2030303, 0x3030202, 0x2030303, 0x3030303, 0x2020303, 0x2020202,
    0x2020202, 0x3030303, 0x3030303, 0x3030303, 0x3040303, 0x2020303, 0x2030302, 0x1010202, 0x2020202, 0x2020202,
    0x2020202, 0x3030303, 0x3030303, 0x2020203, 0x2020202, 0x2020101, 0x2020202, 0x3030404, 0x3020203, 0x2020202,
    0x2020202, 0x1010202, 0x2020202};
u32 data_020e5610[20] = {0x1ff0009, 0x30d4, 0x300300e6, 0x3094, 0x201100ff, 0x30b6, 0x1e900fa, 0x30b6, 0xd00f4,
    0x30b6, 0x1f700e9, 0x3095, 0x300f000c, 0x30b4, 0x1000ea, 0x30d7, 0x1f000ef, 0x30b4, 0x1ec0005, 0xffff3097};
u32 data_020e5440[18] = {0x1f500e5, 0x30b7, 0x30130001, 0x30b7, 0x100d0009, 0x30b6, 0x200600e3, 0x30b6,
    0x1e800f9, 0x30b6, 0x301000f7, 0x30b6, 0x201100ea, 0x3097, 0x31ed00ed, 0x3094, 0x11ed0006, 0xffff3097};
u32 data_020e4634[1] = {0x9};
u32 data_020e48d4[2] = {0x81f000f0, 0xffff2098};
void *data_020e47cc[2] = {(void *)func_020bb1f8, 0};
void *data_020e47e4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb294Ev, 0};
void *data_020e4834[2] = {(void *)_ZN12Unk_020be01813func_020bef98Ev, 0};
const u32 data_020d0f60[8] = {0x3e8, 0x7d0, 0x3e8, 0x7d0, 0x320, 0x3e8, 0x258, 0x320};
void *data_020e472c[2] = {(void *)_ZN12Unk_020bd1b013func_020bd334Ev, 0};
void *data_020e58a8[27] = {(void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4,
    (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0, (void *)data_020e49f4, (void *)0x1, 0,
    (void *)data_020e49f4, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
const u32 data_020d0f28[6] = {0x2b, 0x10, 0x19, 0x1a, 0x1b, 0x1c};
u32 data_020e470c[2] = {0x1fc00fc, 0xffff0078};
const u32 data_020d1338[44] = {0x1000, 0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c,
    0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835,
    0x835, 0x835, 0x835, 0x835, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800,
    0x800, 0x800, 0x800};
void *data_020e481c[2] = {(void *)func_020bfd7c, 0};
char data_020e5088[31] = "/sky/d_2d_b_cld_f_a_bg_nsc.bin";
u32 data_020e52b8[12] = {0x1700f7, 0x30b7, 0x11f0000c, 0x3095, 0x100f000c, 0x30d4, 0x11e200fc, 0x3095,
    0x101400e8, 0x30d6, 0x11ea00e9, 0xffff30b6};
void *data_020e4664[2] = {(void *)_ZN12Unk_020bd1b013func_020bd32cEv, 0};
void *data_020e4904[2] = {(void *)_ZN12Unk_020be20413func_020be4d0Ev, 0};
Unk_020b9fe4 data_021eff48;
u32 data_020e5488[18] = {0x130002, 0x30f7, 0x31f500e5, 0x30f6, 0xc0007, 0x30f6, 0x200600e4, 0x30f6, 0x1e600fa,
    0x30b6, 0x101300f5, 0x30b6, 0x201300ea, 0x3097, 0x31eb00eb, 0x30d5, 0x11f20008, 0xffff3097};
u32 data_020e4a5c[2] = {0x400080f0, 0xffff0094};
u32 data_020e4cc4[4] = {0x91f880e0, 0x9a, 0x91f88000, 0xffff011a};
u32 data_020e4cd4[4] = {0x51fc80e0, 0x99, 0x51fc8000, 0xffff0119};
void *data_020e4ac4[3] = {(void *)data_020e46dc, (void *)0x1, 0};
void *data_020e480c[2] = {(void *)_ZN12Unk_020be01813func_020bef44Ev, 0};
void *data_020e4a94[3] = {(void *)data_020e47c4, (void *)0x1, 0};
char data_020e4f88[30] = "/sky/d_2d_b_cld_f1_bg_ncl.bin";
u32 data_020e4cf4[4] = {0x61fc8000, 0x99, 0x61fc80e0, 0xffff0119};
U234_Record data_020e4654 = {(void *)func_020c003c, 0x89, 0x8f};
char data_020e4e10[27] = "/sky/d_2d_b_cld_bg_ncg.bin";
void *data_020e490c[2] = {(void *)_ZN12Unk_020be20413func_020be61cEv, 0};
}
}
namespace n10 {
}
void Unk_020be204::func_020be204() {
    using namespace n10;
    static void (Unk_020be204::*tbl[13])() = {
        *(void (Unk_020be204::**)())n00::data_020e4954, *(void (Unk_020be204::**)())n00::data_020e4744, *(void (Unk_020be204::**)())n00::data_020e48ac,
        *(void (Unk_020be204::**)())n00::data_020e496c, *(void (Unk_020be204::**)())n00::data_020e49bc, *(void (Unk_020be204::**)())n00::data_020e49c4,
        *(void (Unk_020be204::**)())n00::data_020e4974, *(void (Unk_020be204::**)())n00::data_020e4834, *(void (Unk_020be204::**)())n00::data_020e46bc,
        *(void (Unk_020be204::**)())n00::data_020e4a2c, *(void (Unk_020be204::**)())n00::data_020e479c, *(void (Unk_020be204::**)())n00::data_020e47a4,
        *(void (Unk_020be204::**)())n00::data_020e49dc,
    };
    void (Unk_020be204::*fn)() = tbl[unk_00];
    if (fn) {
        (this->*fn)();
    }
}
namespace n10 {

#undef data_021f44ac
}

// ======== unk_020bd868.cpp ========
namespace n09 {
struct Unk_021f3010;
extern "C" {
extern Unk_020d16e8 data_020d16e8[];
}
extern "C" {
extern s32 data_021eff48;
}
extern "C" {
extern u16 data_020d0dfc;
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } data_021f14e0; } }
#define data_021f4398 n09::L_021f4398::data_021f14e0.v
extern "C" {
void func_02116048(void*, void*, u32);
}
extern "C" {
void func_021145cc(void*, u32);
}
extern "C" {
void func_02111df8(void*, u32, u32);
}
extern "C" {
void func_02111d90(void*, u32, u32);
}
extern "C" {
s32 _ZN12Unk_020bd71813func_020bd808Ei(Unk_020bd868*, s32);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd764Eii(Unk_020bd868*, s32, s32);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd7c0Ei(Unk_020bd868*, s32);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd7a8Ei(void*, ...);
}
extern "C" {
void func_02115fb4(void*, u32, u32);
}
extern "C" {
extern Unk_020bd9a0_Row data_020d11dc[];
}
extern "C" {
void func_02111c6c(u32, u32, u32);
}
extern "C" {
void func_02111c0c(u32, u32, u32);
}
extern "C" {
static inline void Unk_020bd9a0_Copy(u32 d, u32 a, u32 n, u32 k, BOOL flag) {
    u32 sz = n << 5;
    u32 src = (k + a) << 5;
    func_02111c6c(d, src, sz);
    if (flag) func_02111c0c(d, src, sz);
}
}
extern "C" {
s32 func_02119a28(void*, const char*);
}
extern "C" {
s32 func_021198b4(void*, void*, u32);
}
extern "C" {
s32 func_021199e0(void*);
}
extern "C" {
s32 func_02119848(void*, u32, u32);
}
extern "C" {
void func_02119d78(void*);
}
extern "C" {
extern const char* data_020d0e14[];
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; u8 v[1]; } data_021f14e0; } }
#define data_021f44ac n09::L_021f44ac::data_021f14e0.v
extern "C" {
void _ZN12Unk_020bd06c13func_020bd0d4EiiP17Unk_020bd0a4_Vec3(void*, s32, s32, void*);
}
extern "C" {
void _ZN12Unk_020bd06c13func_020bd0a4EiiP17Unk_020bd0a4_Vec3(void*, s32, s32, void*);
}
extern "C" {
void func_020bdd94(Unk_020bdd94*, Unk_020bdd94_Out*);
}
extern "C" {
s32 func_020bddbc(Unk_020bdd94_Out*, s32, s32, s32);
}
extern "C" {
void func_020bdda4(Unk_020bdd94*, Unk_020bdd94_Out*);
}
extern "C" {
s32 func_01ffcb0c(s32, s32);
}
extern "C" {
s32 func_01ffc5a4(s32, s32);
}
extern "C" {
s32 func_01ffc588(s32);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
namespace L_021f23d4 { extern "C" { extern struct S { u8 p[0xef4]; Unk_021f23d4 v[1]; } data_021f14e0; } }
#define data_021f23d4 n09::L_021f23d4::data_021f14e0.v
namespace L_021f2944 { extern "C" { extern struct S { u8 p[0x1464]; Unk_021f23d4 v[1]; } data_021f14e0; } }
#define data_021f2944 n09::L_021f2944::data_021f14e0.v
extern "C" {
extern s32 data_020c8cb8;
}
extern "C" {
extern s32 data_020c8cbc;
}
extern "C" {
extern s32 data_021c3070;
}
extern "C" {
extern s32 data_021ef674;
}
extern "C" {
extern Unk_020bdef0_Vec data_021c309c;
}
extern "C" {
extern s16 data_02135f44[][2];
}
extern "C" {
s32 func_0203a4b0();
}
extern "C" {
void func_020bdef0(Unk_020bdd94*, Unk_020bdd94_Out*, s32);
}
struct Unk_021f3010 { u8 unk_00[8]; s32 unk_08; };
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[1]; } data_021f14e0; } }
#define data_021f3010 n09::L_021f3010::data_021f14e0.v
extern "C" {
extern Unk_021f3010 data_020e6544[];
}
extern "C" {
void _ZN12Unk_020be20413func_020be428Ev(Unk_020bdd94*);
}
extern "C" {
void _ZN12Unk_0208927013func_02089268EP16Unk_02089270_Tbl(void*, void*);
}
extern "C" {
void _ZN12Unk_0208927013func_02089264Ei(void*, s32);
}
extern "C" {
s32 _ZN12Unk_0208927013func_020891bcEv(void*);
}
extern "C" {
static inline Unk_021f3010* Unk_020be0bc_Get(s32 i) { return &data_020e6544[i]; }
}

extern "C" void func_020bd868(Unk_020bd868* p, u8* base, u32 idx);
extern "C" Unk_020bd868* func_020bd8f8(Unk_020bd868* p);
extern "C" void func_020bd940(Unk_020bd868* p);
extern "C" void func_020bd950(Unk_020bd868* p, s32 a);
extern "C" void func_020bd964(Unk_020bd868* p, s32 v);
extern "C" void func_020bd978(Unk_020bd868* p, s32 v, void* x);
extern "C" void func_020bd9a0(Unk_020bd868* p, u8* base);
extern "C" void func_020bda7c(Unk_020bd868* p);
extern "C" void func_020bda8c(u8* p);
extern "C" BOOL func_020bdaa4(u8* p);
extern "C" BOOL func_020bdb68(u8* p, s32 idx);
extern "C" void func_020bdcbc(u8* p);
extern "C" void func_020bdd24(Unk_020bdd94* p, s32 a, s32 b);
extern "C" void func_020bdd4c(Unk_020bdd94* p, s32 a);
extern "C" void func_020bdd70(Unk_020bdd94* p, s32 a);
extern "C" void func_020bdd94(Unk_020bdd94* p, Unk_020bdd94_Out* out);
extern "C" void func_020bdda4(Unk_020bdd94* p, Unk_020bdd94_Out* out);
extern "C" s32 func_020bddbc(Unk_020bdd94_Out* out, s32 a, s32 b, s32 c);
extern "C" BOOL func_020bde0c(Unk_020bdd94* p, s32 a, s32 b, s32 c);
extern "C" void func_020bdecc(Unk_020bdd94* p, s32 a);
extern "C" void func_020bdef0(Unk_020bdd94* p, Unk_020bdd94_Out* q, s32 a);
extern "C" BOOL func_020be018(Unk_020bdd94* p, s32 a, s32 b, s32 c);
extern "C" void func_020be06c(Unk_020bdd94* p, u8 a, s32 b);
extern "C" void func_020be094(Unk_020bdd94* p);
extern "C" void func_020be0bc(Unk_020be0bc* p);

}
namespace n00 {
extern "C" {
u32 data_020e47f4[2] = {0x81f000f0, 0xffff4118};
u32 data_020e4d14[4] = {0x71fc8000, 0x99, 0x71fc80e0, 0xffff0119};
u32 data_020e4d24[4] = {0x71fc8000, 0x98, 0x71fc80e0, 0xffff0118};
const u32 data_020d11dc[20] = {0x0, 0x4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0x4, 0x8, 0x4, 0x8, 0x0, 0xc, 0x4, 0x8,
    0x4, 0x8, 0x0, 0xc};
u32 data_021ef670;
u32 data_020e487c[2] = {0x0, 0xffff0094};
void *data_020e4a34[2] = {(void *)func_020bfa90, 0};
void *data_020e49bc[2] = {(void *)func_020bf634, 0};
void *data_020e4d98[5] = {(void *)data_020e5068, (void *)data_020e5068, (void *)data_020e5088,
    (void *)data_020e50a8, (void *)data_020e50c8};
char data_020e4fa8[30] = "/sky/d_2d_b_cld_r0_bg_ncl.bin";
void *data_020e6544[138] = {(void *)data_020e5318, (void *)0x4, (void *)0x1, (void *)data_020e5704, (void *)0x8,
    0, (void *)data_020e4adc, (void *)0x1, (void *)0x1, (void *)data_020e4ae8, (void *)0x1, (void *)0x1,
    (void *)data_020e4af4, (void *)0x1, (void *)0x1, (void *)data_020e4b00, (void *)0x1, (void *)0x1,
    (void *)data_020e4b0c, (void *)0x1, (void *)0x1, (void *)data_020e4b18, (void *)0x1, (void *)0x1,
    (void *)data_020e50e8, (void *)0x3, (void *)0x1, (void *)data_020e510c, (void *)0x3, (void *)0x1,
    (void *)data_020e5130, (void *)0x3, (void *)0x1, (void *)data_020e5154, (void *)0x3, (void *)0x1,
    (void *)data_020e5178, (void *)0x3, (void *)0x1, (void *)data_020e519c, (void *)0x3, (void *)0x1,
    (void *)data_020e51c0, (void *)0x3, (void *)0x1, (void *)data_020e51e4, (void *)0x3, (void *)0x1,
    (void *)data_020e4b30, (void *)0x1, (void *)0x1, (void *)data_020e4b3c, (void *)0x1, (void *)0x1,
    (void *)data_020e4b48, (void *)0x1, (void *)0x1, (void *)data_020e5348, (void *)0x4, 0,
    (void *)data_020e5258, (void *)0x4, 0, (void *)data_020e4a64, (void *)0x1, (void *)0x1,
    (void *)data_020e56b0, (void *)0x7, 0, (void *)data_020e5288, (void *)0x4, (void *)0x1,
    (void *)data_020e53b0, (void *)0x6, 0, (void *)data_020e4a70, (void *)0x1, (void *)0x1,
    (void *)data_020e4b24, (void *)0x1, (void *)0x1, (void *)data_020e4a7c, (void *)0x1, (void *)0x1,
    (void *)data_020e4a88, (void *)0x1, (void *)0x1, (void *)data_020e5764, (void *)0x9, (void *)0x1,
    (void *)data_020e5af4, (void *)0x2c, (void *)0x1, (void *)data_020e57d0, (void *)0x9, (void *)0x1,
    (void *)data_020e5d04, (void *)0x2c, (void *)0x1, (void *)data_020e4a94, (void *)0x1, (void *)0x1,
    (void *)data_020e583c, (void *)0x9, (void *)0x1, (void *)data_020e5f14, (void *)0x2c, (void *)0x1,
    (void *)data_020e4aa0, (void *)0x1, (void *)0x1, (void *)data_020e58a8, (void *)0x9, (void *)0x1,
    (void *)data_020e6124, (void *)0x2c, (void *)0x1, (void *)data_020e4aac, (void *)0x1, (void *)0x1,
    (void *)data_020e5914, (void *)0x9, (void *)0x1, (void *)data_020e6334, (void *)0x2c, (void *)0x1,
    (void *)data_020e4ab8, (void *)0x1, (void *)0x1, (void *)data_020e5980, (void *)0xf, (void *)0x1,
    (void *)data_020e4ddc, (void *)0x2, 0, (void *)data_020e4ac4, (void *)0x1, (void *)0x1};
char data_020e50c8[31] = "/sky/d_2d_b_cld_r_a_bg_nsc.bin";
void *data_020e4964[2] = {(void *)_ZN12Unk_020bfe3013func_020bfe30Ev, 0};
void *data_020e4b30[3] = {(void *)data_020e498c, (void *)0x1, 0};
u32 data_020e4a54[2] = {0x81f880f0, 0xffff4118};
u32 data_020e4a3c[2] = {0x1fc80f8, 0xffff0094};
u32 data_020e4984[2] = {0x81f880f0, 0xffff4098};
const u32 data_020d0df4[1] = {0x4};
u32 data_020e49ec[2] = {0x81e003e0, 0xffff9098};
u32 data_020e476c[2] = {0x81f880f0, 0xffff4098};
void *data_020e4754[2] = {(void *)_ZN12Unk_020be20413func_020be7dcEv, 0};
void *data_020e4b3c[3] = {(void *)data_020e482c, (void *)0x1, 0};
void *data_020e53b0[18] = {(void *)data_020e466c, (void *)0x2, 0, (void *)data_020e495c, (void *)0x2, 0,
    (void *)data_020e4764, (void *)0x2, 0, (void *)data_020e48dc, (void *)0x2, 0, (void *)data_020e499c,
    (void *)0x2, 0, (void *)data_020e469c, (void *)0x2, 0};
void *data_020e4a2c[2] = {(void *)_ZN12Unk_020be20413func_020be9e8Ev, 0};
u32 data_020e49d4[2] = {0x1fc00fc, 0xffff0077};
void *data_020e46cc[2] = {(void *)func_020bb1c4, 0};
void *data_020e5980[45] = {(void *)data_020e5208, (void *)0x1, 0, (void *)data_020e54d0, (void *)0x1, 0,
    (void *)data_020e5520, (void *)0x1, 0, (void *)data_020e5570, (void *)0x1, 0, (void *)data_020e55c0,
    (void *)0x1, 0, (void *)data_020e5610, (void *)0x1, 0, (void *)data_020e53f8, (void *)0x3, 0,
    (void *)data_020e5440, (void *)0x3, 0, (void *)data_020e5488, (void *)0x3, 0, (void *)data_020e5378,
    (void *)0x3, 0, (void *)data_020e52b8, (void *)0x3, 0, (void *)data_020e52e8, (void *)0x3, 0,
    (void *)data_020e4bc4, (void *)0x3, 0, (void *)data_020e4bd4, (void *)0x3, 0, (void *)data_020e4be4,
    (void *)0x3, 0};
u32 data_021ef688[3];
void *data_020e478c[2] = {(void *)data_020d0ec8, (void *)data_020d0ee0};
u32 data_020e469c[2] = {0x91f000f0, 0xffff2098};
char data_020e4e48[30] = "/sky/d_2d_b_cld_b0_bg_nsc.bin";
u32 data_020e495c[2] = {0x81f000f0, 0xffff2118};
u32 data_020e4764[2] = {0x81f000f0, 0xffff211c};
void *data_020e4954[2] = {(void *)_ZN12Unk_020bfe3013func_020bfe38Ev, 0};
u32 data_020e4874[2] = {0x81f880f0, 0xffff409e};
u32 data_021ef694[3];
char data_020e4e68[30] = "/sky/d_2d_b_cld_f0_bg_nsc.bin";
u32 data_020e5378[14] = {0x301500f7, 0x30f6, 0x11f1000a, 0x3095, 0xe000b, 0x30d4, 0x11e300fb, 0x3095, 0x200600e4,
    0x30d4, 0x101300e8, 0x30d5, 0x31ea00ea, 0xffff30f5};
const u32 data_020d0fa4[9] = {0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c};
char data_020e4e88[30] = "/sky/d_2d_b_cld_f1_bg_nsc.bin";
}
}
namespace n09 {
}
void Unk_020be0f4::func_020be0f4() {
    using namespace n09;
    static void (Unk_020be0f4::*tbl[13])() = {
        *(void (Unk_020be0f4::**)())n00::data_020e4964,
        *(void (Unk_020be0f4::**)())n00::data_020e49e4,
        *(void (Unk_020be0f4::**)())n00::data_020e4724,
        *(void (Unk_020be0f4::**)())n00::data_020e494c,
        *(void (Unk_020be0f4::**)())n00::data_020e4944,
        *(void (Unk_020be0f4::**)())n00::data_020e493c,
        *(void (Unk_020be0f4::**)())n00::data_020e4934,
        *(void (Unk_020be0f4::**)())n00::data_020e467c,
        *(void (Unk_020be0f4::**)())n00::data_020e4924,
        *(void (Unk_020be0f4::**)())n00::data_020e4754,
        *(void (Unk_020be0f4::**)())n00::data_020e4914,
        *(void (Unk_020be0f4::**)())n00::data_020e490c,
        *(void (Unk_020be0f4::**)())n00::data_020e4904,
    };
    void (Unk_020be0f4::*fn)() = tbl[unk_00];
    if (fn) (this->*fn)();
}
namespace n09 {

extern "C" void func_020be0bc(Unk_020be0bc* p) {
    Unk_020be0bc_E i = (Unk_020be0bc_E)p->unk_0c;
    Unk_021f3010* row = &data_020e6544[i];
    _ZN12Unk_0208927013func_02089268EP16Unk_02089270_Tbl(p->unk_10, row);
    _ZN12Unk_0208927013func_02089264Ei(p->unk_10, row->unk_08);
    _ZN12Unk_0208927013func_020891bcEv(p->unk_10);
}

extern "C" void func_020be094(Unk_020bdd94* p) {
    s32 i = p->unk_24;
    if (i != 6) {
        func_020bd940((Unk_020bd868*)&data_021f3010[i]);
    }
    _ZN12Unk_020be20413func_020be428Ev(p);
}

extern "C" void func_020be06c(Unk_020bdd94* p, u8 a, s32 b) {
    p->unk_2e = a;
    s32 v;
    if (p->unk_2e != 0) {
        v = 0;
    } else {
        v = data_021ef674;
    }
    p->unk_28 = v;
    return func_020bdecc(p, b);
}

extern "C" BOOL func_020be018(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    if (p->unk_2e != 0) {
        p->unk_28 += a;
        if (p->unk_28 > data_021ef674) r = TRUE;
    } else {
        p->unk_28 -= a;
        if (p->unk_28 < 0) r = TRUE;
    }
    if (!r) {
        p->unk_2c += c;
        func_020bdecc(p, b);
    }
    return r;
}

extern "C" void func_020bdef0(Unk_020bdd94* p, Unk_020bdd94_Out* q, s32 a) {
    Unk_020bdef0_Vec loc;
    loc.unk_00[0] = data_021c309c.unk_00[0];
    loc.unk_00[1] = data_021c309c.unk_00[1];
    loc.unk_00[2] = data_021c309c.unk_00[2];
    s32 inv, idx, z, y, t;
    s32 sx, sy, sc, fx, k, dz;
    dz = loc.unk_00[2] - q->unk_08;
    fx = func_01ffc5a4(q->unk_00 - loc.unk_00[0], data_020c8cbc);
    dz = func_01ffc5a4(dz, data_020c8cb8 << 2);
    t = func_01ffcb0c(-0x1000, dz - 0x1000);
    k = func_01ffcb0c(dz, t + 0x1000);
    s32 w = func_01ffcb0c(-0x666, k) + 0xe66;
    y = func_01ffcb0c(fx, w);
    z = func_01ffcb0c(y + 0x800, 0x1000);
    sx = z << 8;
    sy = func_01ffcb0c(0x50000, k) + 0x50000;
    inv = 0x1000 - k;
    if (data_021c3070 != 0) {
        idx = func_01ffcb0c(func_0203a4b0(), inv);
    } else {
        idx = 0;
    }
    idx = func_01ffcb0c(idx, 0x10000);
    p->unk_34 = sx;
    p->unk_38 = sy - idx;
    p->unk_3c = 0;
    sc = func_01ffcb0c(-0xc00, k) + 0x1000;
    if (sc < 0x400) sc = 0x400;
    else if (sc > 0x1000) sc = 0x1000;
    z = func_01ffc588(sc);
    p->unk_4c = z;
    p->unk_50 = z;
    idx = (u16)p->unk_2c >> 4;
    z = func_01ffcb0c(data_02135f44[idx][0], a);
    z = func_01ffcb0c(z, sc);
    p->unk_38 += z;
}

extern "C" void func_020bdecc(Unk_020bdd94* p, s32 a) {
    Unk_020bdd94_Out t;
    t.unk_00 = p->unk_28;
    t.unk_04 = 0;
    t.unk_08 = data_020c8cb8;
    func_020bdef0(p, &t, a);
}

extern "C" BOOL func_020bde0c(Unk_020bdd94* p, s32 a, s32 b, s32 c) {
    s32 d;
    s32 w = func_01ffcb0c(a, p->unk_4c);
    s32 h = func_01ffcb0c(b, p->unk_50);
    s32 dy = func_01ffcb0c(c, p->unk_50);
    s32 hw = _s32_div_f(w, 2);
    s32 hh = _s32_div_f(h, 2);
    s32 y = p->unk_38 + dy;
    s32 x = p->unk_34;
    s32 left = x - hw;
    s32 right = x + hw;
    s32 top = y - hh;
    s32 bottom = y + hh;
    Unk_021f23d4* o = data_021f23d4;
    BOOL found = FALSE;
    for (; o < data_021f2944; o++) {
        if (o->unk_04 == 2 && ((u8*)o)[0x2f] != 0) {
            d = o->unk_44;
            if (d < 0) d = -d;
            s32 xl = o->unk_34 - 0x1000;
            s32 yt = o->unk_38 - 0x1000;
            s32 yb = d + (o->unk_38 + 0x1000);
            s32 xr = o->unk_34 + 0x1000;
            if (left <= xr && right >= xl && top <= yb && bottom >= yt) {
                found = TRUE;
                ((u8*)o)[0x30] = 1;
            }
        }
    }
    return found;
}

extern "C" s32 func_020bddbc(Unk_020bdd94_Out* out, s32 a, s32 b, s32 c) {
    s32 t = func_01ffcb0c(0x400, c);
    s32 u = func_01ffcb0c(0x1000, c);
    s32 v = func_01ffc5a4(0x1000 - t, u - t);
    if (v < 0) v = 0;
    else if (v > 0x1000) v = 0x1000;
    out->unk_00 = a;
    out->unk_04 = b;
    out->unk_08 = v;
    return v;
}

extern "C" void func_020bdda4(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    func_020bddbc(out, p->unk_34, p->unk_38, p->unk_4c);
}

extern "C" void func_020bdd94(Unk_020bdd94* p, Unk_020bdd94_Out* out) {
    out->unk_00 = p->unk_34;
    out->unk_04 = p->unk_38;
    out->unk_08 = 0;
}

extern "C" void func_020bdd70(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    func_020bdda4(p, (Unk_020bdd94_Out*)&out);
    _ZN12Unk_020bd06c13func_020bd0d4EiiP17Unk_020bd0a4_Vec3(data_021f44ac, 0, a, &out);
}

extern "C" void func_020bdd4c(Unk_020bdd94* p, s32 a) {
    Unk_020bdd4c_Out out;
    func_020bdda4(p, (Unk_020bdd94_Out*)&out);
    _ZN12Unk_020bd06c13func_020bd0a4EiiP17Unk_020bd0a4_Vec3(data_021f44ac, 0, a, &out);
}

extern "C" void func_020bdd24(Unk_020bdd94* p, s32 a, s32 b) {
    Unk_020bdd94_Out out;
    func_020bdd94(p, &out);
    _ZN12Unk_020bd06c13func_020bd0d4EiiP17Unk_020bd0a4_Vec3(data_021f44ac, a, b, &out);
}

extern "C" void func_020bdcbc(u8* p) {
    func_02119d78(p);
    func_02115fb4(p + 0x48, 0, 0x400);
    func_02115fb4(p + 0x448, 0, 0xc00);
    func_02115fb4(p + 0x1048, 0, 0x1c0);
    func_02115fb4(p + 0x1208, 0, 0x140);
    *(u32*)(p + 0x1348) = 0x12345678;
}

extern "C" BOOL func_020bdb68(u8* p, s32 idx) {
    Unk_020d16e8* row = &data_020d16e8[idx];
    Unk_020bd9a0_Row* t;
    s32 a = func_02119a28(p, data_020d0e14[row->unk_00]);
    BOOL ok1 = TRUE;
    BOOL ok2 = TRUE;
    u8* src;
    s32 i;
    s32 f;
    t = &data_020d11dc[row->unk_08];
    if (row->unk_04 != 0xffff) {
        src = p + 0x448;
        ok1 &= func_02119848(p, (row->unk_04 & ~0x1f) << 5, 0);
        for (i = 0; i < 4; i++) {
            if (t->unk_04 != 0) {
                ok2 &= func_021198b4(p, p + 0x48, 0x400) > 0;
                func_02116048(p + 0x48 + ((row->unk_04 & 0x1f) << 5), src + (t->unk_00 << 5), t->unk_04 << 5);
            }
            src += 0x180;
        }
    }
    if (row->unk_06 != 0xffff) {
        src = p + 0xa48;
        ok1 &= func_02119848(p, (row->unk_06 & ~0x1f) << 5, 0);
        for (i = 4; i < 8; i++) {
            if (t->unk_0c != 0) {
                ok2 &= func_021198b4(p, p + 0x48, 0x400) > 0;
                func_02116048(p + 0x48 + ((row->unk_06 & 0x1f) << 5), src + (t->unk_08 << 5), t->unk_0c << 5);
            }
            src += 0x180;
        }
    }
    f = func_021199e0(p);
    if (a && ok1 && ok2 && f) return TRUE;
    return FALSE;
}

}
namespace n00 {
extern "C" {
void *data_020e4924[2] = {(void *)_ZN12Unk_020be01813func_020bef24Ev, 0};
const u32 data_020d0ea0[5] = {0x0, 0x0, 0x0, 0x1, 0x1};
}
}
namespace n09 {
extern "C" BOOL func_020bdaa4(u8* p) {
    char name1[0x17] = "/sky/a_sky_obj_ncl.bin";
    s32 a = func_02119a28(p, name1);
    BOOL b = func_021198b4(p, p + 0x1048, 0x1c0) > 0;
    s32 c = func_021199e0(p);
    char name2[0x1c] = "/sky/a_sky_moon_obj_ncl.bin";
    s32 d = func_02119a28(p, name2);
    BOOL e = func_021198b4(p, p + 0x1208, 0x140) > 0;
    s32 f = func_021199e0(p);
    if (a && b && c && d && e && f) return TRUE;
    return FALSE;
}

extern "C" void func_020bda8c(u8* p) {
    func_021145cc(p + 0x448, 0xc00);
}

extern "C" void func_020bda7c(Unk_020bd868* p) {
    p->unk_00 = 0x34;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_09 = 0;
}

extern "C" void func_020bd9a0(Unk_020bd868* p, u8* base) {
    Unk_020bd9a0_Row* row;
    u32 dst;
    u32 o, k;
    BOOL flag;
    if (data_021eff48 == 0) flag = TRUE; else flag = FALSE;
    func_020bda8c(base);
    Unk_020d16e8* ent = &data_020d16e8[p->unk_00];
    row = &data_020d11dc[ent->unk_08];
    dst = (u32)base + 0x448;
    o = 0;
    k = 0x94;
    for (s32 i = 0; i < 4; i++) {
        u32 d;
        u32 n = row->unk_04;
        if (n != 0) {
            u32 a = row->unk_00;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
    for (s32 i = 4; i < 8; i++) {
        u32 d;
        u32 n = row->unk_0c;
        if (n != 0) {
            u32 a = row->unk_08;
            d = dst + (o << 5);
            d += a << 5;
            Unk_020bd9a0_Copy(d, a, n, k, flag);
        }
        o += 0xc;
        k += 0x20;
    }
}

extern "C" void func_020bd978(Unk_020bd868* p, s32 v, void* x) {
    p->unk_04++;
    if (v != p->unk_00) {
        p->unk_08 = 0;
        _ZN12Unk_020bd71813func_020bd7a8Ei(x);
        p->unk_00 = v;
    }
}

extern "C" void func_020bd964(Unk_020bd868* p, s32 v) {
    if (v != p->unk_00) {
        p->unk_08 = 0;
        p->unk_09 = 1;
        p->unk_00 = v;
    }
}

extern "C" void func_020bd950(Unk_020bd868* p, s32 a) {
    p->unk_09 = 1;
    _ZN12Unk_020bd71813func_020bd7a8Ei(data_021f4398, a);
}

extern "C" void func_020bd940(Unk_020bd868* p) {
    s32 t = p->unk_04 - 1;
    if (t <= 0) t = 0;
    p->unk_04 = t;
}

extern "C" Unk_020bd868* func_020bd8f8(Unk_020bd868* p) {
    volatile u16 tmp;
    u16* end;
    u16* q;
    p->unk_00 = 0;
    *(u16*)&p->unk_08 = 0;
    _ZN12Unk_020bd71813func_020bd7c0Ei(p, -1);
    end = (u16*)p->unk_28;
    q = p->unk_0a;
    tmp = data_020d0dfc;
    for (; q < end; q++) {
        *q = tmp;
    }
    func_02115fb4(p->unk_28, 0, 0x20);
    return p;
}

extern "C" void func_020bd868(Unk_020bd868* p, u8* base, u32 idx) {
    Unk_020d16e8* row = &data_020d16e8[idx];
    s32 a = row->unk_0c;
    u32 b;
    s32 res;
    if (idx - 0x1f <= 1) {
        a += p->unk_00;
    }
    b = row->unk_0d << 5;
    func_02116048(base + 0x1048 + a * 32, p->unk_28, 0x20);
    res = _ZN12Unk_020bd71813func_020bd808Ei(p, row->unk_0d);
    func_021145cc(p->unk_28, 0x20);
    func_02111df8(p->unk_28, b, 0x20);
    if (data_021eff48 == 0) {
        func_02111d90(p->unk_28, b, 0x20);
    }
    if (res == 0) {
        _ZN12Unk_020bd71813func_020bd764Eii(p, row->unk_0d, a);
    }
}

#undef data_021f4398
#undef data_021f44ac
#undef data_021f23d4
#undef data_021f2944
#undef data_021f3010
}

// ======== unk_020bcf04.cpp ========
namespace n08 {
extern "C" {
void* __cxa_vec_ctor(void* array, u32 count, u32 size, void* (*ctor)(void*), void* (*dtor)(void*, s32));
}
namespace L_021f44ac { extern "C" { extern struct S { u8 p[0x2fcc]; Unk_020bd06c v; } data_021f14e0; } }
#define data_021f44ac n08::L_021f44ac::data_021f14e0.v
extern "C" {
void func_020e7530(s16* p, s32 target, s32 step);
}
extern "C" {
void func_02094574(s32 a, s32 b, s32 c);
}
extern "C" {
void* func_020947f0(s32 a);
}
extern "C" {
void func_020bffc0(s32* out, void* p);
}
extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
}
extern "C" {
void func_020850e0();
}
extern "C" {
s32 func_02085174();
}
extern "C" {
void _ZN12Unk_02086c0413func_02086c04Eii(s32 a, void* p, u8 b);
}
extern "C" {
void func_ov003_02212140();
}
extern "C" {
void func_0203a5ac();
}
extern "C" {
void func_0203a5ec(s32 a);
}
extern "C" {
void func_020bddbc(Unk_020bd0a4_Vec3* out, s32 a, s32 b, s32 c);
}
extern "C" {
void* func_02097868(void* a, s32 i);
}
extern "C" {
s32 _ZN12Unk_0209865c13func_02098a48Ev(void* p);
}
extern "C" {
void* _ZN12Unk_0209865c13func_02098698Ev(void* p);
}
extern "C" {
void _ZN12Unk_020877e013func_020877e0Ej(void* p, s32 a);
}
extern "C" {
void func_02086284(void* p);
}
extern "C" {
void func_02040974(s32 a, s32 b, s32 c);
}
extern "C" {
s32 func_ov003_02219654(s32 a, s32 b);
}
extern "C" {
void func_ov003_02212190(s32 a, s32 b);
}
extern "C" {
void* func_0209750c();
}
extern "C" {
u32 _ZN12Unk_02097ff413func_020981b8Ev(void* p);
}
extern "C" {
void _ZN12Unk_02097ff413func_020981acEj(void* p, u8 v);
}
extern "C" {
s32 func_02094348();
}
extern "C" {
s32 func_02063b8c(s32 a);
}
extern "C" {
BOOL func_020bd4e0();
}
extern "C" {
void func_020bd4fc();
}
extern "C" {
extern u8 data_021d735c[];
}
extern "C" {
extern u8 data_021e58a6[];
}
extern "C" {
extern u8 data_020d0e60[];
}
namespace L_020d18c8 { extern "C" { extern struct S { u8 p[0x1e0]; s8 v[1]; } data_020d16e8; } }
#define data_020d18c8 n08::L_020d18c8::data_020d16e8.v
extern "C" {
extern Unk_020bd774_Entry data_020d16e8[];
}
typedef void (Unk_020bd1b0::*Unk_020bd520_Fn)();

extern "C" BOOL func_020bd4e0();
extern "C" void func_020bd4fc();

}
BOOL Unk_020bd718::func_020bd808(s32 v) {
    using namespace n08;
    BOOL result = FALSE;
    if (unk_08 != 0) {
        for (s32 i = 0; i < 15; i++) {
            BOOL has = func_020bd744(i);
            s32 s = data_020d0e60[i];
            BOOL match = ((s >> 4) & 0xf) == v;
            if (has && match) {
                unk_28[s & 0xf] = unk_0a[i];
                result = TRUE;
            }
        }
    }
    return result;
}
namespace n08 {

}
void Unk_020bd718::func_020bd7e4() {
    using namespace n08;
    unk_00 = func_02063b8c(5);
    func_020bd7c0(data_020d18c8[0x1d]);
}
namespace n08 {

}
void Unk_020bd718::func_020bd7c0(s32 v) {
    using namespace n08;
    if (v < 0) {
        for (s32 i = 0; (u32)i < 4; i++) {
            unk_04[i] = -1;
        }
    } else {
        unk_04[v - 12] = -1;
    }
}
namespace n08 {

}
void Unk_020bd718::func_020bd7a8(s32 idx) {
    using namespace n08;
    Unk_020bd774_Entry* e = &data_020d16e8[idx];
    func_020bd7c0(e->unk_0d);
}
namespace n08 {

}
BOOL Unk_020bd718::func_020bd774(s32 idx) {
    using namespace n08;
    Unk_020bd774_Entry* e = &data_020d16e8[idx];
    s32 y = e->unk_0d;
    s32 x = e->unk_0c;
    BOOL result = TRUE;
    if (y >= 0 && x >= 0) {
        if (x != unk_04[y - 12]) {
            result = FALSE;
        }
    }
    return result;
}
namespace n08 {

}
void Unk_020bd718::func_020bd764(s32 a, s32 b) {
    using namespace n08;
    if (a >= 0 && b >= 0) {
        unk_04[a - 12] = b;
    }
}
namespace n08 {

}
void Unk_020bd718::func_020bd758(s32 idx) {
    using namespace n08;
    unk_08 &= ~(1 << idx);
}
namespace n08 {

}
BOOL Unk_020bd718::func_020bd744(s32 idx) {
    using namespace n08;
    if (unk_08 & (1 << idx)) {
        return TRUE;
    }
    return FALSE;
}
namespace n08 {

}
void Unk_020bd718::func_020bd718(s32 idx, u16* p) {
    using namespace n08;
    unk_08 |= 1 << idx;
    Unk_020bd718_E o = (Unk_020bd718_E)((u32)this + (idx << 1));
    *(u16 *)(o + 10) = *p; // unk_0a[idx] = *p
    func_020bd7c0((data_020d0e60[idx] >> 4) & 0xf);
}
namespace n08 {

}
Unk_020bd054::Unk_020bd054() {
    using namespace n08;
    func_020bd6dc();
}
namespace n08 {

}
void Unk_020bd054::func_020bd6f0(s32 a, s32* p, u8 b) {
    using namespace n08;
    unk_00 = a;
    unk_04 = p[0];
    unk_08 = p[1];
    unk_0c = p[2];
    unk_10 = b;
    unk_11 = 1;
}
namespace n08 {

}
void Unk_020bd054::func_020bd6dc() {
    using namespace n08;
    unk_00 = 4;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
}
namespace n08 {

}
Unk_020bd1b0::Unk_020bd1b0() {
    using namespace n08;
    func_020bd25c();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd6a8(s32 a) {
    using namespace n08;
    if (a == func_02094348()) {
        unk_00 = 1;
        unk_04 = a;
        unk_08 = 0x2b;
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd69c(s32 a) {
    using namespace n08;
    func_ov003_02212190(0, a);
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd67c(u8 a) {
    using namespace n08;
    unk_21 = a;
    unk_00 = 2;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd668() {
    using namespace n08;
    unk_00 = 3;
    unk_08 = 2;
    unk_1e = 0;
    unk_1f = 0;
    unk_20 = 0;
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd64c() {
    using namespace n08;
    unk_00 = 4;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd640() {
    using namespace n08;
    unk_00 = 5;
    unk_08 = 0x1e;
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd624() {
    using namespace n08;
    unk_00 = 7;
    func_ov003_02212190(1, unk_04);
    func_020bd4fc();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd618() {
    using namespace n08;
    unk_00 = 8;
    unk_08 = 0x14;
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd604(s32 a, s32 b, s32 c, u8 d) {
    using namespace n08;
    unk_0c = a;
    unk_10 = b;
    unk_14 = c;
    unk_18 = d;
}
namespace n08 {

}
namespace n00 {
extern "C" {
const u32 data_020d0ff8[12] = {0x53f953f9, 0x53f953f9, 0x428f53f9, 0x18823105, 0x4200820, 0x400, 0x4000000,
    0xc010800, 0x24441001, 0x468f38a8, 0x53f953f9, 0x53f953f9};
char data_020e4ea8[30] = "/sky/d_2d_b_cld_c0_bg_nsc.bin";
u32 data_020e485c[2] = {0x400080f0, 0xffff0096};
const u32 data_020d0e44[3] = {0x7fff, 0x6667, 0x4cce};
void *data_020e4784[2] = {(void *)_ZN12Unk_020bd1b013func_020bd4b4Ev, 0};
void *data_020e5704[24] = {(void *)data_020e476c, (void *)0x2, 0, (void *)data_020e4a14, (void *)0x3, 0,
    (void *)data_020e489c, (void *)0x4, 0, (void *)data_020e4874, (void *)0xa, 0, (void *)data_020e48f4,
    (void *)0x2, 0, (void *)data_020e4a54, (void *)0x3, 0, (void *)data_020e4984, (void *)0x4, 0,
    (void *)data_020e48ec, (void *)0xa, 0};
u32 data_020e491c[2] = {0x91f000f0, 0xffff209c};
u32 data_020e4b64[4] = {0x41fc80e0, 0x99, 0x41fc8000, 0xffff0119};
void *data_020e4a70[3] = {(void *)data_020e46ec, (void *)0x1, 0};
void *data_020e48fc[2] = {(void *)_ZN12Unk_020be01813func_020bf3bcEv, 0};
u8 data_021ef654;
void *data_020e49e4[2] = {(void *)func_020bfcc8, 0};
void *data_020e47dc[2] = {(void *)_ZN12Unk_020bb25c13func_020bb2ccEv, 0};
const u8 data_020d0e04[5] = {0xf, 0xe, 0xd, 0xe, 0xd};
Unk_020b08b4 data_021efc18;
u32 data_020e47b4[2] = {0x41fb80f0, 0xffff9097};
const u32 data_020d1028[12] = {0x50a550a5, 0x50a550a5, 0x4cc650a5, 0x4d4a4ce7, 0x4d8c4d8c, 0x4d6b4d6b,
    0x494a4d4a, 0x494a494a, 0x4929494a, 0x4ca54ce7, 0x50a550a5, 0x50a550a5};
void *data_020e4b74[4] = {(void *)data_020d0fc8, (void *)data_020d0ff8, (void *)data_020d1028,
    (void *)data_020d1058};
u32 data_020e47ec[2] = {0x81f000f0, 0xffff411c};
void *data_020e47d4[2] = {(void *)func_020bb224, 0};
void *data_020e4b84[4] = {(void *)data_020d1088, (void *)data_020d10b8, (void *)data_020d10e8,
    (void *)data_020d1118};
}
}
namespace n08 {
}
void Unk_020bd1b0::func_020bd520() {
    using namespace n08;
    static Unk_020bd520_Fn tbl[10] = {
        0,
        *(Unk_020bd520_Fn *)n00::data_020e47bc,
        *(Unk_020bd520_Fn *)n00::data_020e4784,
        *(Unk_020bd520_Fn *)n00::data_020e46c4,
        *(Unk_020bd520_Fn *)n00::data_020e4894,
        *(Unk_020bd520_Fn *)n00::data_020e49ac,
        *(Unk_020bd520_Fn *)n00::data_020e472c,
        *(Unk_020bd520_Fn *)n00::data_020e4664,
        *(Unk_020bd520_Fn *)n00::data_020e464c,
        *(Unk_020bd520_Fn *)n00::data_020e48a4,
    };
    Unk_020bd520_Fn f = tbl[unk_00];
    if (f) {
        (this->*f)();
    }
}
namespace n08 {

extern "C" void func_020bd4fc() {
    void* p = func_0209750c();
    u32 n = _ZN12Unk_02097ff413func_020981b8Ev(p);
    if (n < 0x10) {
        _ZN12Unk_02097ff413func_020981acEj(p, n + 1);
    }
}

extern "C" BOOL func_020bd4e0() {
    return _ZN12Unk_02097ff413func_020981b8Ev(func_0209750c()) >= 0x10;
}

}
void Unk_020bd1b0::func_020bd4bc() {
    using namespace n08;
    unk_08--;
    if (unk_08 <= 0) {
        func_020bd69c(unk_04);
        func_020bd25c();
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd4b4() {
    using namespace n08;
    func_020bd1e8();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd408() {
    using namespace n08;
    func_020bd1b0(0x190, 0x190);
    if (unk_08 > 0) {
        unk_08--;
        if (unk_08 == 0) {
            if (func_ov003_02219654(unk_21 != 0 ? 1 : 0, ((unk_0c + 0x800) >> 12) - 0x80) == 0) {
                unk_1e = 1;
            }
        }
    }
    if (unk_1f != 0 || unk_20 != 0) {
        s32 id = unk_1f != 0 ? 0x7f9 : 0x7fa;
        Unk_020bd0a4_Vec3 v;
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, id, &v);
        unk_1f = 0;
        unk_20 = 0;
    }
    if (unk_1e != 0) {
        func_ov003_02212140();
        func_020bd25c();
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd400() {
    using namespace n08;
    func_020bd1e8();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd3ac() {
    using namespace n08;
    func_020bd1b0(0x50, 0);
    unk_08--;
    if (unk_08 <= 0) {
        Unk_020bd0a4_Vec3 v;
        func_0203a5ec(0xa3d);
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, 0x7fd, &v);
        unk_08 = 0x32;
        unk_00 = 6;
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd334() {
    using namespace n08;
    func_020bd1b0(0x190, 0x190);
    unk_08--;
    if (unk_08 <= 0) {
        func_ov003_02212140();
        func_0203a5ac();
        for (s32 i = 0; i < 4; i++) {
            void* p = func_02097868(data_021d735c, i);
            if (p && _ZN12Unk_0209865c13func_02098a48Ev(p)) {
                _ZN12Unk_020877e013func_020877e0Ej(_ZN12Unk_0209865c13func_02098698Ev(p), 0x14);
            }
        }
        func_02086284(data_021e58a6);
        func_02040974(0x44, 0x63, 0);
        func_020bd25c();
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd32c() {
    using namespace n08;
    func_020bd1e8();
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd2d8() {
    using namespace n08;
    func_020bd1b0(0x50, 0);
    if (unk_08 > 0) {
        unk_08--;
    } else {
        Unk_020bd0a4_Vec3 v;
        func_0203a5ec(0x5c3);
        func_020bddbc(&v, unk_0c, unk_10, unk_14);
        data_021f44ac.func_020bd0d4(0, 0x800, &v);
        unk_08 = 0x1e;
        unk_00 = 9;
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd288() {
    using namespace n08;
    func_020bd1b0(0x190, 0x190);
    unk_08--;
    if (unk_08 <= 0) {
        void* p = func_020947f0(unk_04);
        if (p) {
            func_020850e0();
            _ZN12Unk_02086c0413func_02086c04Eii(func_02085174(), p, unk_18);
        }
        func_ov003_02212140();
        func_0203a5ac();
        func_020bd25c();
    }
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd25c() {
    using namespace n08;
    unk_00 = 0;
    unk_04 = 4;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0x1000;
    unk_18 = 0;
    unk_1a = 0;
    unk_1c = 0;
    unk_1e = 0;
    unk_1f = 0;
    unk_20 = 0;
    unk_21 = 0;
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd1e8() {
    using namespace n08;
    void* p = func_020947f0(4);
    s32 x = 0x80000;
    if (p) {
        func_020bffc0(&x, p);
    }
    s32 t = (func_01ffc5a4(unk_0c - x, 0x100000) * -10000) >> 12;
    if (t < -5000) {
        t = -5000;
    } else if (t > 5000) {
        t = 5000;
    }
    s16 v = t;
    func_02094574(4000, v, 4);
    unk_1a = 4000;
    unk_1c = v;
}
namespace n08 {

}
void Unk_020bd1b0::func_020bd1b0(s32 a, s32 b) {
    using namespace n08;
    func_020e7530(&unk_1a, 0, a);
    func_020e7530(&unk_1c, 0, b);
    func_02094574(unk_1a, unk_1c, 4);
}
namespace n08 {

}
Unk_020bd06c::Unk_020bd06c() {
    using namespace n08;
    unk_c0 = 0;
    for (Unk_02000c8c* p = unk_60; p < (Unk_02000c8c*)&unk_c0; p++) {
        p->x = 0;
        p->y = 0;
        p->z = 0;
    }
}
namespace n08 {

}
void Unk_020bd06c::func_020bd12c() {
    using namespace n08;
    for (Unk_0213b970* e = unk_00; e < (Unk_0213b970*)unk_60; e++) {
        e->func_02003cbc();
    }
    unk_c0 = 1;
}
namespace n08 {

}
void Unk_020bd06c::func_020bd104() {
    using namespace n08;
    unk_c0 = 0;
    for (Unk_0213b970* e = &unk_00[7]; e >= unk_00; e--) {
        e->func_02003c30();
    }
}
namespace n08 {

}
void Unk_020bd06c::func_020bd0d4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    using namespace n08;
    if (unk_c0) {
        unk_00[idx].func_02003c50(a);
        unk_60[idx].x = p->x;
        unk_60[idx].y = p->y;
        unk_60[idx].z = p->z;
    }
}
namespace n08 {

}
void Unk_020bd06c::func_020bd0a4(s32 idx, s32 a, Unk_020bd0a4_Vec3* p) {
    using namespace n08;
    if (unk_c0) {
        unk_00[idx].func_02003c40(a);
        unk_60[idx].x = p->x;
        unk_60[idx].y = p->y;
        unk_60[idx].z = p->z;
    }
}
namespace n08 {

}
void Unk_020bd06c::func_020bd06c() {
    using namespace n08;
    if (unk_c0) {
        Unk_0213b970* a = unk_00;
        Unk_02000c8c* b = unk_60;
        for (s32 i = 0; i < 8; i++, a++, b++) {
            a->func_02003c60(i == 7 ? NULL : b);
        }
    }
}
namespace n08 {

}
Unk_020bd058::~Unk_020bd058() {
    using namespace n08;}
namespace n08 {

}
Unk_020bd054::~Unk_020bd054() {
    using namespace n08;}
namespace n08 {

}
Unk_020bcf04::Unk_020bcf04() {
    using namespace n08;
    unk_2f00 = 0;
    unk_2f04 = 0;
    unk_2f08 = 0;
    unk_2f0c = 0;
    unk_2f10 = 0;
    unk_2f14 = 0;
    unk_2f24 = 0;
    unk_2f25 = 0;
    unk_2f26 = 0;
    unk_2f27 = 0;
    unk_2f28 = 0;
    unk_2f29 = 0;
    unk_2f2c = 0;
    unk_2f30 = 0;
    unk_2f34 = 0;
    unk_2f38 = 0;
    unk_2f3c = 0;
    unk_2f40 = 0;
    unk_2f44 = 0;
    unk_2f48 = 0;
    unk_2f4c = 0;
    unk_2f50 = 0;
    unk_2f51 = 0;
    unk_2f54 = 0;
    unk_1b6c.func_020bdcbc();
}
namespace n08 {

#undef data_021f44ac
#undef data_020d18c8
}

// ======== unk_020bc58c.cpp ========
namespace n07 {
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; s32 v[1]; } data_021eff48; } }
#define data_021f1448 n07::L_021f1448::data_021eff48.v
extern "C" {
extern s32 data_020d11a8[];
}
namespace L_020d16f0 { extern "C" { extern struct S { u8 p[0x8]; s32 v[1]; } data_020d16e8; } }
#define data_020d16f0 n07::L_020d16f0::data_020d16e8.v
namespace L_020d16f5 { extern "C" { extern struct S { u8 p[0xd]; s8 v[1]; } data_020d16e8; } }
#define data_020d16f5 n07::L_020d16f5::data_020d16e8.v
extern "C" {
extern u8 data_021d735c[];
}
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
extern u8 data_020e4630[];
}
#define data_020e6794 ((u8 *)"ev_star")
extern "C" {
extern u8 data_020e4634[];
}
extern "C" {
void func_02064928(s32 a);
}
extern "C" {
s32 func_02063b8c(s32 a);
}
extern "C" {
void _ZN12Unk_020be0f413func_020be0f4Ev(Unk_020bc754_Slot *s);
}
extern "C" {
void _ZN12Unk_020be20413func_020be44cEv(Unk_020bc754_Slot *s);
}
extern "C" {
void _ZN12Unk_020be20413func_020be314Ej(Unk_020bc754_Slot *s, s32 a);
}
extern "C" {
void func_020bd978(void *a, s32 b, void *c);
}
extern "C" {
void func_020bd9a0(void *a, void *b);
}
extern "C" {
s32 _ZN12Unk_020bd71813func_020bd774Ei(void *a, s32 b);
}
extern "C" {
void func_020bd868(void *a, void *b, s32 c);
}
extern "C" {
void func_020bdb68(void *a, s32 b);
}
extern "C" {
void _ZN12Unk_020bd05413func_020bd6f0EiPih(Unk_020bca5c_Elem *a, s32 b, s32 c, s32 d);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd6a8Ei(void *a, s32 b);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd69cEi(void *a, s32 b);
}
extern "C" {
void func_0209cf88(void *a);
}
extern "C" {
void func_0209cf18(void *a);
}
extern "C" {
s32 func_0209cd00(void *a, void *b);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
s32 func_01ffc5a4(s32 a, s32 b);
}
extern "C" {
u32 func_0209cf00();
}
extern "C" {
void *func_02097868(void *p, u32 i);
}
extern "C" {
u32 _ZN12Unk_02097ff413func_02098044Ej(void *p, u32 n);
}
extern "C" {
u32 _ZN12Unk_0209865c13func_0209888cEv(void *p);
}
extern "C" {
void func_020656dc(void *a, void *b, const void *c, const void *d, const void *e, u32 f);
}
extern "C" {
void _ZN12Unk_0206555413func_02065588Etj(void *a, u32 b, s32 c);
}
extern "C" {
u32 func_02096aac(void *c);
}
extern "C" {
void _ZN12Unk_02097ff413func_02097ff4Ej(void *p, u32 n);
}
extern "C" {
void func_02062f94(u16 *ret, Unk_02063380 q, u32 a, u32 b, u32 c, u32 d, u32 e);
}
extern "C" {
s32 func_020bc8a0();
}
extern "C" {
s32 func_020947f0(s32 i);
}
extern "C" {
void func_020947c0(void *p, s32 i);
}
extern "C" {
void _ZN12Unk_0209da4413func_0209e120Ej(void *p, u32 n);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
void func_02116048(const void *src, void *dst, u32 size);
}
extern "C" {
s32 func_0203f52c(void *a, void *b, s32 c);
}
extern "C" {
BOOL func_0203f2e0(u32 a, void *b, s32 c);
}

extern "C" s32 func_020bc8a0();

}
void Unk_020bc58c::func_020bce8c() {
    using namespace n07;
    Unk_020bccc8_Entry *p, *end = &unk_1b30[5];
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (id != 0x34) {
            s32 r;
            s32 flag = p->unk_08;
            r = _ZN12Unk_020bd71813func_020bd774Ei(unk_2eb8, id);
            if (flag == 0) {
                func_020bdb68(unk_1b6c, id);
                func_020bd9a0(p, unk_1b6c);
                p->unk_08 = 1;
                p->unk_09 = 0;
            }
            if (r == 0) {
                func_020bd868(unk_2eb8, unk_1b6c, id);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bce4c() {
    using namespace n07;
    Unk_020bccc8_Entry *end = &unk_1b30[5], *p;
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (p->unk_09 != 0) {
            if (id == 0x34) {
                p->unk_09 = 0;
            } else if (p->unk_08 == 0) {
                func_020bdb68(unk_1b6c, id);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bcdd8() {
    using namespace n07;
    Unk_020bccc8_Entry *p, *end = &unk_1b30[5];
    for (p = &unk_1b30[0]; p < end; p++) {
        s32 id = p->unk_00;
        if (p->unk_09 != 0) {
            if (id != 0x34) {
                s32 r;
                s32 flag = p->unk_08;
                r = _ZN12Unk_020bd71813func_020bd774Ei(unk_2eb8, id);
                if (flag == 0) {
                    func_020bd9a0(p, unk_1b6c);
                    p->unk_08 = 1;
                }
                if (r == 0) {
                    func_020bd868(unk_2eb8, unk_1b6c, id);
                }
            }
            p->unk_09 = 0;
        }
    }
}
namespace n07 {

}
s32 Unk_020bc58c::func_020bccc8(s32 t) {
    using namespace n07;
    s32 grp;
    BOOL ok;
    grp = data_020d16f0[t * 4];
    ok = FALSE;
    if (grp == 6) {
        ok = TRUE;
    } else if (t == unk_1b30[grp].unk_00) {
        ok = TRUE;
    } else {
        BOOL c0 = unk_1b30[0].unk_04 > 0 ? 1 : 0;
        BOOL c1 = unk_1b30[1].unk_04 > 0 ? 1 : 0;
        BOOL c2 = unk_1b30[2].unk_04 > 0 ? 1 : 0;
        BOOL c3 = unk_1b30[3].unk_04 > 0 ? 1 : 0;
        BOOL c4 = unk_1b30[4].unk_04 > 0 ? 1 : 0;
        if (grp == 0) {
            ok = (c0 == 0 && c3 == 0) ? TRUE : FALSE;
        } else if (grp == 1) {
            ok = (c1 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 2) {
            ok = (c2 == 0 && c3 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 3) {
            ok = (c3 == 0 && c0 == 0 && c2 == 0 && c4 == 0) ? TRUE : FALSE;
        } else if (grp == 4) {
            ok = (c4 == 0 && c1 == 0 && c2 == 0 && c3 == 0) ? TRUE : FALSE;
        }
    }
    if (!ok) return 5;
    return grp;
}
namespace n07 {

}
void Unk_020bc58c::func_020bcc64(s32 k) {
    using namespace n07;
    if (k == 0) {
        unk_1b30[3].unk_00 = 0x34;
        return;
    }
    if (k == 1) {
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 2) {
        unk_1b30[3].unk_00 = 0x34;
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 3) {
        unk_1b30[0].unk_00 = 0x34;
        unk_1b30[2].unk_00 = 0x34;
        unk_1b30[4].unk_00 = 0x34;
        return;
    }
    if (k == 4) {
        unk_1b30[1].unk_00 = 0x34;
        unk_1b30[2].unk_00 = 0x34;
        unk_1b30[3].unk_00 = 0x34;
    }
}
namespace n07 {

}
s32 Unk_020bc58c::func_020bcbfc(s32 kind, s32 idx) {
    using namespace n07;
    s32 r = 0x3c;
    if (idx != 0x3c) {
        if (unk_0000[idx].unk_00 == 0xd) r = idx;
    } else if (kind == 9) {
        Unk_020bc754_Slot *p = &unk_0000[0x2e];
        s32 i;
        for (i = 0x2e; i <= 0x3a; i++, p++) {
            if (p->unk_00 == 0xd) {
                r = i;
                break;
            }
        }
    } else if (unk_2f14 < 0x1e) {
        s32 i;
        Unk_020bc754_Slot *p = &unk_0000[0];
        for (i = 0; i < 0x1e; p++, i++) {
            if (p->unk_00 == 0xd) {
                r = i;
                break;
            }
        }
    }
    return r;
}
namespace n07 {

}
s32 Unk_020bc58c::func_020bcbd8(s32 id) {
    using namespace n07;
    s32 r = 0x3c;
    s32 i;
    Unk_020bc754_Slot *p = unk_0000;
    for (i = 0; i < 0x3c; i++, p++) {
        if (id == p->unk_00) {
            r = i;
            break;
        }
    }
    return r;
}
namespace n07 {

}
void Unk_020bc58c::func_020bcbac() {
    using namespace n07;
    func_020bcb04();
    func_020bc628();
    func_020bc18c();
    func_020bbb58();
    unk_2f24 = 0;
}
namespace n07 {

}
void Unk_020bc58c::func_020bcba4() {
    using namespace n07;
    func_020bc6e4();
}
namespace n07 {

}
void Unk_020bc58c::func_020bcb04() {
    using namespace n07;
    u32 a[2];
    u32 b[2];
    u32 c[2];
    Unk_020bcb04_Ent arr[7];
    Unk_020bcb04_Ent *p, *end;
    unk_2f26 = 0;
    unk_2f27 = 0;
    unk_2f28 = 0;
    a[0] = 0;
    a[1] = 0;
    func_0209d498(a);
    func_02116048(a, b, 8);
    end = arr + func_0203f52c(arr, b, 0);
    for (p = arr; p < end; p++) {
        u32 id = p->id;
        BOOL ok;
        func_02116048(a, c, 8);
        if (func_0203f2e0(id, c, 0)) ok = TRUE; else ok = FALSE;
        if (ok) {
            if (id == 0x44) {
                unk_2f26 = 1;
            } else if (id == 0x45) {
                unk_2f27 = 1;
            } else if (id == 0x13 || id == 0xf) {
                unk_2f28 = 1;
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bcadc(BOOL a) {
    using namespace n07;
    if (a) {
        _ZN12Unk_0209da4413func_0209e120Ej(data_021d7350, 9);
        func_020bcb04();
        func_020bc99c();
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bca6c(s32 i) {
    using namespace n07;
    s32 j = 0;
    if (i < 4) j = i;
    s32 v = func_020947f0(i);
    if (v != 0) {
        u16 buf[4];
        func_020947c0(buf, i);
        s32 flag = 0;
        if (buf[0] >= 0x137b && buf[0] <= 0x137b) flag = 1;
        _ZN12Unk_020bd05413func_020bd6f0EiPih(func_020bca5c(j), i, v, flag);
        _ZN12Unk_020bd1b013func_020bd6a8Ei(unk_2fa8, i);
    } else {
        _ZN12Unk_020bd1b013func_020bd69cEi(unk_2fa8, i);
    }
}
namespace n07 {

}
Unk_020bca5c_Elem *Unk_020bc58c::func_020bca5c(s32 i) {
    using namespace n07;
    return &unk_2f58[i];
}
namespace n07 {

}
void Unk_020bc58c::func_020bc99c() {
    using namespace n07;
    s32 i;
    for (i = 0; i < 4; i++) {
        void *o = func_02097868(data_021d735c, i);
        if (o != NULL && _ZN12Unk_02097ff413func_02098044Ej(o, 0x32) != 0) {
            Unk_020dd458 ctx;
            Unk_020bc99c_Loc l;
            l.a = func_02063b8c(3);
            func_020656dc(&ctx, &l, data_020e6794, data_020e4634, data_020e4630, _ZN12Unk_0209865c13func_0209888cEv(o));
            Unk_02063380 q(0, 4);
            func_02062f94(&l.b, q, 0, 0, 1, 1, 0);
            _ZN12Unk_0206555413func_02065588Etj(&ctx, l.b, 1);
            if (func_02096aac(&ctx) != 0) {
                _ZN12Unk_02097ff413func_02097ff4Ej(o, 0x32);
            }
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bc960() {
    using namespace n07;
    func_0209cf18(&unk_2f18);
    unk_2f1c = func_0209cf00();
    unk_2f1a = unk_2f18;
    unk_2f20 = unk_2f1c;
}
namespace n07 {

}
void Unk_020bc58c::func_020bc928() {
    using namespace n07;
    unk_2f1a = unk_2f18;
    unk_2f20 = unk_2f1c;
    func_0209cf18(&unk_2f18);
    unk_2f1c = func_0209cf00();
}
namespace n07 {

extern "C" s32 func_020bc8a0() {
    u8 buf[12];
    buf[2] = 1;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 0;
    func_0209cf88(buf + 6);
    func_0209cf18(buf);
    s32 t = func_0209cd00(buf + 6, buf + 2);
    if (buf[1] < 12) t--;
    if (t < 0) t = 0;
    t = t * 100 + 0x974;
    t = ((t % 0xb89) << 12) / 100;
    t = func_01ffc5a4(t, 0x1d87b);
    t = (t * 0x1c - 0x800) >> 12;
    if (t < 0) t = 0x1b;
    if (t > 0x1b) t = 0x1b;
    return t + 3;
}

}
s32 Unk_020bc58c::func_020bc814(s32 kind, s32 arg) {
    using namespace n07;
    s32 r = data_020d11a8[kind];
    if (kind == 4) {
        r = func_020bc8a0();
    } else if (kind == 7) {
        if (func_02063b8c(2) != 0) r = 0x28;
    } else if (kind == 5) {
        if ((arg & 1) != 0) r = 0x21;
    } else if (kind == 9) {
        s32 v = (arg & 0xf) + 0x1d;
        if ((u32)(v - 0x1d) <= 1) {
            r = 0x2d;
        } else if (v == 0x21 || v == 0x24 || v == 0x27 || v == 0x2a) {
            r = 0x2b;
        } else {
            r = 0x2c;
        }
    } else if (kind == 2) {
        s32 v = arg & 0xf;
        if (v == 0) r = 0x2f;
        else if (v == 1) r = 0x31;
        else r = 0x30;
    }
    return r;
}
namespace n07 {

}
Unk_020bc754_Slot *Unk_020bc58c::func_020bc754(s32 kind, s32 idx, Unk_020bc754_Vec *vec, s32 arg) {
    using namespace n07;
    s32 t = func_020bc814(kind, arg);
    Unk_020bc754_Slot *slot = NULL;
    s32 grp = func_020bccc8(t);
    if (grp != 5) {
        s32 n = func_020bcbfc(kind, idx);
        if (n != 0x3c) {
            if (grp != 6) {
                func_020bd978(&unk_1b30[grp], t, unk_2eb8);
                func_020bcc64(grp);
            }
            slot = &unk_0000[n];
            _ZN12Unk_020be20413func_020be44cEv(slot);
            unk_0000[n].unk_00 = kind;
            slot->unk_04 = 1;
            slot->unk_24 = grp;
            slot->unk_08 = t;
            slot->unk_5d = data_020d16f5[t * 16];
            if (vec != NULL) {
                slot->unk_34 = vec->x;
                slot->unk_38 = vec->y;
                slot->unk_3c = vec->z;
            }
            _ZN12Unk_020be20413func_020be314Ej(slot, arg);
            unk_2f14++;
        }
    }
    return slot;
}
namespace n07 {

}
void Unk_020bc58c::func_020bc718(s32 id) {
    using namespace n07;
    Unk_020bc754_Slot *p, *end = &unk_0000[0x3c];
    for (p = &unk_0000[0]; p < end; p++) {
        if (id == p->unk_00) {
            _ZN12Unk_020be0f413func_020be0f4Ev(p);
            unk_2f14--;
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bc6e4() {
    using namespace n07;
    Unk_020bc754_Slot *p, *end = &unk_0000[0x3c];
    for (p = &unk_0000[0]; p < end; p++) {
        if (p->unk_00 != 0xd) {
            _ZN12Unk_020be0f413func_020be0f4Ev(p);
            unk_2f14--;
        }
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bc628() {
    using namespace n07;
    BOOL a, b;
    s32 v = data_021f1448[9];
    a = (v == 3);
    b = (v == 4);
    if (a || b) {
        s32 w = data_021f1448[13];
        s32 idx = 0xd;
        if (w == 1) idx = 0;
        else if (w == 2) idx = 1;
        unk_2f08 = 0x6400;
        unk_2f0c = 0x32;
        if (idx != 0xd) {
            s32 n = a ? 15 : 20;
            s32 i;
            for (i = 0; i < n; i++) {
                func_020bc754(idx, 0x3c, NULL, 1);
            }
        }
        if (a) unk_2f54 = 0x800;
        else unk_2f54 = 0x1000;
    } else {
        unk_2f08 = 0;
        unk_2f0c = 0;
        unk_2f54 = 0;
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bc5cc() {
    using namespace n07;
    if (unk_2f10 <= 0) unk_2f10 = 0x32;
    unk_2f10--;
    if (unk_2f10 <= 0) {
        if (func_02063b8c(8) == 0) {
            func_020bc754(8, 0x3b, NULL, 0);
        }
        func_02064928(0);
        unk_2f10 = func_02063b8c(200) + 10;
    }
}
namespace n07 {

}
void Unk_020bc58c::func_020bc58c() {
    using namespace n07;
    if (unk_2f10 <= 0) unk_2f10 = 0x32;
    unk_2f10--;
    if (unk_2f10 <= 0) {
        func_02064928(0);
        unk_2f10 = func_02063b8c(200) + 10;
    }
}
namespace n07 {

#undef data_021f1448
#undef data_020d16f0
#undef data_020d16f5
#undef data_020e6794
}

// ======== unk_020bbc28.cpp ========
namespace n06 {
struct Unk_020cbb18;
struct Unk_021ed2b0;
struct Unk_021f1448;
struct Unk_020cbb18 {
    char pad_00[0x64];
    s32 unk_64;
};
struct Unk_021f1448 {
    char pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
};
struct Unk_021ed2b0 {
    char pad_00[0xa];
    u8 unk_0a;
};
typedef void (Unk_020bbc28::*Unk_020bbeb8_Fn)();
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
BOOL func_020816f8(s32);
}
extern "C" {
BOOL _ZN12Unk_020d77a413func_0201b84cEv();
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *, s32);
}
extern "C" {
s32 func_020b8fe8();
}
extern "C" {
void func_020850e0();
}
extern "C" {
void func_02085174();
}
extern "C" {
s32 _ZN12Unk_02086c0413func_02086e84Ev();
}
extern "C" {
void func_02085170();
}
extern "C" {
s32 _ZN12Unk_02086b7c13func_02086b94Ev();
}
extern "C" {
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *, s32);
}
extern "C" {
extern char data_021d7350[];
}
extern "C" {
extern Unk_020d0f40 data_020d0f40[];
}
extern "C" {
extern Unk_020d0f40 data_020d0f60[];
}
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } data_021eff48; } }
#define data_021f1448 n06::L_021f1448::data_021eff48.v
extern "C" {
extern Unk_021ed2b0 data_021ed2b0;
}
extern "C" {
void func_0209d498(void *);
}
extern "C" {
void func_02116048(void *, void *, u32);
}
extern "C" {
s32 func_0203f2e0(s32, void *, s32);
}
extern "C" {
s32 func_02063b8c(s32);
}
extern "C" {
s32 func_02040c7c();
}
extern "C" {
BOOL func_020b5164();
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
void func_020e759c(void *, s32, s32);
}
extern "C" {
void *func_0209750c();
}
extern "C" {
BOOL _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
}
extern "C" {
BOOL func_020bd4e0();
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd7e4Ev(void *);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}

}
void Unk_020bbc28::func_020bc43c() {
    using namespace n06;
    s32 kind = 0;
    s32 a = data_021f1448.unk_24;
    s32 b = data_021f1448.unk_28;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        unk_2f08 = 0;
    } else {
        Unk_020d0f40 *t = &data_020d0f40[kind - 1];
        if (unk_2f00 == 0) {
            unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
        }
        if (b >= 3) {
            unk_2f08 += 2;
            if (unk_2f08 > 0x6400) {
                unk_2f08 = 0x6400;
            }
        } else {
            unk_2f08 -= 2;
            if (unk_2f08 < 0) {
                unk_2f08 = 0;
            }
        }
        unk_2f04 += unk_2f08 >> 8;
        while (unk_2f04 >= unk_2f00) {
            func_020bc754(0, 0x3c, 0, 0);
            unk_2f04 -= unk_2f00;
            if (unk_2f04 <= unk_2f00) {
                unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
                if (unk_2f00 < 0x23) {
                    unk_2f00 = 0x23;
                }
                unk_2f04 = 0;
                break;
            }
        }
    }
    if (kind == 4) {
        func_020bc5cc();
    }
    func_020e759c(unk_2f54, b == 4 ? 0x1000 : 0x800, 2);
}
namespace n06 {

}
void Unk_020bbc28::func_020bc2a8() {
    using namespace n06;
    s32 kind = 0;
    s32 a = data_021f1448.unk_24;
    s32 b = data_021f1448.unk_28;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        unk_2f00 = 0;
        unk_2f0c = 0;
    } else {
        Unk_020d0f40 *t = &data_020d0f60[kind - 1];
        if (unk_2f00 == 0) {
            unk_2f00 = 0x3e8;
        }
        if (unk_2f0c > 2) {
            if (b >= 3) {
                unk_2f08 += 2;
                if (unk_2f08 > 0x6400) {
                    unk_2f08 = 0x6400;
                }
            } else {
                unk_2f08 -= 2;
                if (unk_2f08 < 0) {
                    unk_2f08 = 0;
                }
            }
        } else {
            if (b >= 3) {
                unk_2f08 = 0x6400;
            } else {
                unk_2f08 -= 2;
                if (unk_2f08 < 0) {
                    unk_2f08 = 0;
                }
            }
        }
        unk_2f04 += unk_2f08 >> 8;
        while (unk_2f04 >= unk_2f00) {
            func_020bc754(1, 0x3c, 0, 0);
            unk_2f04 -= unk_2f00;
            if (unk_2f04 <= unk_2f00) {
                switch (unk_2f0c) {
                case 0:
                    unk_2f00 = 0x2af8;
                    unk_2f04 = 0;
                    break;
                case 1:
                    unk_2f00 = 0x2328;
                    unk_2f04 = 0;
                    break;
                default:
                    unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
                    if (unk_2f0c < 0x32) {
                        unk_2f04 = 0x4b;
                    } else {
                        unk_2f04 = 0;
                    }
                    break;
                }
                unk_2f0c++;
                if (unk_2f0c > 0x32) {
                    unk_2f0c = 0x32;
                }
                break;
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::func_020bc1d4() {
    using namespace n06;
    u8 v = unk_2f19;
    BOOL a = TRUE;
    if (v < 0x13 && v >= 4) {
        a = FALSE;
    }
    s32 x = data_021f1448.unk_24;
    BOOL c = FALSE;
    if (x != 3 && x != 4) {
        c = TRUE;
    }
    BOOL d = FALSE;
    if (unk_2f2c == 0 && func_020bcbd8(9) == 0x3c) {
        d = TRUE;
    }
    if (a && c && d) {
        if (unk_2f4c > 0) {
            unk_2f4c--;
            if (unk_2f4c == 0) {
                func_020bc754(3, 0x1e, 0, 0);
            }
        } else if (unk_2f1c == 0x1e && unk_2f1c != unk_2f20) {
            if (!func_02063b8c(data_021ed2b0.unk_0a == 0 ? 4 : 0x100)) {
                unk_2f4c = func_02063b8c(0x258);
            }
        }
    } else {
        unk_2f4c = 0;
    }
}
namespace n06 {

}
void Unk_020bbc28::func_020bc18c() {
    using namespace n06;
    u8 v = unk_2f19;
    BOOL b;
    if (unk_0e0c == 4) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (v >= 0x13 || v < 4) {
        if (!b) {
            func_020bc754(4, 0x1f, 0, 0);
        }
    } else if (b) {
        func_020bc718(4);
    }
}
namespace n06 {

}
namespace n00 {
extern "C" {
void *data_020e510c[9] = {(void *)data_020e4c24, (void *)0x2, 0, (void *)data_020e4c34, (void *)0x1, 0,
    (void *)data_020e4bf4, (void *)0x1, 0};
void *data_020e4a88[3] = {(void *)data_020e470c, (void *)0x1, 0};
u32 data_020e46dc[2] = {0x1fc00fc, 0xffff0040};
u32 data_020e46fc[2] = {0x81f000f0, 0xffff209c};
void *data_020e46f4[2] = {(void *)_ZN12Unk_020be01813func_020bf15cEv, 0};
void *data_020e46bc[2] = {(void *)_ZN12Unk_020be01813func_020bef2cEv, 0};
u32 data_020e4ba4[4] = {0xa1f88000, 0x9e, 0xa1f880e0, 0xffff011e};
void *data_020e4aa0[3] = {(void *)data_020e48c4, (void *)0x1, 0};
void *data_020e4aac[3] = {(void *)data_020e4a0c, (void *)0x1, 0};
void *data_020e5130[9] = {(void *)data_020e4c44, (void *)0x2, 0, (void *)data_020e4c54, (void *)0x1, 0,
    (void *)data_020e4c64, (void *)0x1, 0};
char data_020e4ec8[30] = "/sky/d_2d_b_cld_c1_bg_nsc.bin";
void *data_020e4894[2] = {(void *)_ZN12Unk_020bd1b013func_020bd400Ev, 0};
const u32 data_020d10e8[12] = {0x48a548a5, 0x48a548a5, 0x48c648a5, 0x4d2948e7, 0x4d4a4d4a, 0x4d4a4d4a,
    0x4d4a4d4a, 0x4d4a4d4a, 0x4d294d4a, 0x4ca54ce7, 0x48a548a5, 0x48a548a5};
u32 data_020e4bb4[4] = {0x41fc80e0, 0x9d, 0x41fc8000, 0xffff011d};
void *data_020e467c[2] = {(void *)_ZN12Unk_020be01813func_020bef90Ev, 0};
const u32 data_020d1118[12] = {0x72d16eb1, 0x76f472d2, 0x7ef57af5, 0x7f567f14, 0x7fb97fb9, 0x7fb97fb9,
    0x7fb97fb9, 0x7fb97fb9, 0x7b397fb9, 0x76f676b6, 0x76f57716, 0x6eb272f4};
u32 data_020e4bc4[4] = {0x1400e7, 0x30f6, 0x1e70000, 0xffff30b7};
const u32 data_020d0ef8[6] = {0xb0b0b0b, 0x13000b0b, 0x15141413, 0x16161615, 0xb001315, 0xb0b0b0b};
void *data_020e4a04[2] = {(void *)_ZN12Unk_020be01813func_020beb40Ej, 0};
void *data_020e5154[9] = {(void *)data_020e4ba4, (void *)0x2, 0, (void *)data_020e4c74, (void *)0x1, 0,
    (void *)data_020e4c84, (void *)0x1, 0};
u32 data_020e4bd4[4] = {0x1600e7, 0x30d4, 0x1e90002, 0xffff30f6};
void *data_020e5230[10] = {(void *)data_020e4e48, (void *)data_020e4e48, (void *)data_020e4e68,
    (void *)data_020e4e88, (void *)data_020e4ea8, (void *)data_020e4ec8, (void *)data_020e4ee8,
    (void *)data_020e4f08, (void *)data_020e4f28, (void *)data_020e4f48};
void *data_020e4944[2] = {(void *)func_020bf620, 0};
u32 data_020e4a24[2] = {0x81f000f0, 0xffff2118};
u32 data_020e4be4[4] = {0x1800e7, 0x30f7, 0x1eb0004, 0xffff30d4};
void *data_020e4ad0[3] = {(void *)data_020e5230, (void *)data_020e4d98, (void *)data_020e4d70};
void *data_020e4d48[5] = {(void *)data_020e4b74, (void *)data_020e4b74, (void *)data_020e4b84,
    (void *)data_020e4b84, (void *)data_020e4b84};
u32 data_020e488c[2] = {0x0, 0xffff00b4};
u32 data_020e55c0[20] = {0x300200e8, 0x3094, 0x201000fe, 0x30b6, 0x10000009, 0x30b6, 0x1eb00fa, 0x30b6, 0xc00f4,
    0x30b6, 0x1f800eb, 0x3095, 0x300f000c, 0x30b4, 0x200f00ea, 0x30d7, 0x1f200f1, 0x30d7, 0x1ed0004,
    0xffff3097};
const u32 data_020d0f10[6] = {0xc0c0c0c, 0x60a, 0x0, 0x0, 0x6000000, 0xc0c0c0a};
void *data_020e46b4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb33cEv, 0};
char data_020e5048[31] = "/sky/d_2d_b_cld_r_b_bg_nsc.bin";
void *data_020e47a4[2] = {(void *)_ZN12Unk_020be20413func_020be624Ev, 0};
u32 data_021ef678[2];
const u32 data_020d11a8[13] = {0x0, 0x1, 0x2f, 0x2, 0x3, 0x1f, 0x23, 0x26, 0x2a, 0x2b, 0x2e, 0x32, 0x33};
char data_020e4df4[27] = "/sky/a_sky_fly_obj_ncg.bin";
u32 data_020e4bf4[4] = {0x51fc80e0, 0x9c, 0x51fc8000, 0xffff011c};
u32 data_020e482c[2] = {0x81f004f0, 0xffff0094};
u32 data_020e4684[2] = {0x81f000f0, 0xffff409c};
u32 data_020e4c04[4] = {0x81f880e0, 0x9e, 0x81f88000, 0xffff011e};
u32 data_020e4674[2] = {0x81f000f0, 0xffff3118};
char data_020e4ee8[30] = "/sky/d_2d_b_cld_r0_bg_nsc.bin";
u32 data_020e49a4[2] = {0x81f000f0, 0xffff3098};
u32 data_020e484c[2] = {0x81e003e0, 0xffff9118};
char data_020e4f28[30] = "/sky/d_2d_b_cld_h0_bg_nsc.bin";
void *data_020e519c[9] = {(void *)data_020e4cc4, (void *)0x2, 0, (void *)data_020e4cd4, (void *)0x1, 0,
    (void *)data_020e4b54, (void *)0x1, 0};
void *data_020e479c[2] = {(void *)_ZN12Unk_020be20413func_020be7bcEv, 0};
u32 data_020e4c44[4] = {0xb1f88000, 0x9e, 0xb1f880e0, 0xffff011e};
const u32 data_020d0f40[8] = {0x2d, 0x69, 0x1e, 0x5a, 0xf, 0x4b, 0x1, 0x3c};
u32 data_020e47fc[2] = {0x91f000f0, 0xffff211c};
void *data_020e51c0[9] = {(void *)data_020e4ce4, (void *)0x2, 0, (void *)data_020e4cf4, (void *)0x1, 0,
    (void *)data_020e4d04, (void *)0x1, 0};
u32 data_020e4640[1] = {0xffffffff};
u32 data_020e4c74[4] = {0x61fc8000, 0x9d, 0x61fc80e0, 0xffff011d};
u32 data_020e4c84[4] = {0x61fc8000, 0x9c, 0x61fc80e0, 0xffff011c};
void *data_020e4a4c[2] = {(void *)_ZN12Unk_020bfe3013func_020bfec0Ei, 0};
void *data_020e4af4[3] = {(void *)data_020e485c, (void *)0x4, 0};
void *data_020e4b00[3] = {(void *)data_020e487c, (void *)0x4, 0};
void *data_020e4ddc[6] = {(void *)data_020e4a3c, (void *)0x2, 0, (void *)data_020e483c, (void *)0x1, 0};
u32 data_020e5a34[48] = {0x800004d0, 0x1114, 0x802084d0, 0x1118, 0x3044d8, 0x113a, 0x403004e0, 0x115a,
    0x802004f0, 0x1098, 0x1804f0, 0x109f, 0x80400410, 0x111c, 0x380410, 0x111b, 0x80404400, 0x10dc, 0x404004f0,
    0x109c, 0x4004e8, 0x10bf, 0x91e004d0, 0x1114, 0x91d084d0, 0x1118, 0x11c044d8, 0x113a, 0x51c004e0, 0x115a,
    0x91c004f0, 0x1098, 0x11e004f0, 0x109f, 0x91a00410, 0x111c, 0x11c00410, 0x111b, 0x91a04400, 0x10dc,
    0x51b004f0, 0x109c, 0x11b804e8, 0x10bf, 0x5004f8, 0x10be, 0x11a804f8, 0xffff10be};
u32 data_021ef908[196];
u32 data_020e4a1c[2] = {0x81f000f0, 0xffff309c};
u32 data_021ef680[2];
void *data_020e464c[2] = {(void *)_ZN12Unk_020bd1b013func_020bd2d8Ev, 0};
u32 data_020e4814[2] = {0x81f000f0, 0xffff4098};
u32 data_020e4ce4[4] = {0xa1f88000, 0x9a, 0xa1f880e0, 0xffff011a};
void *data_020e4b18[3] = {(void *)data_020e4854, (void *)0x4, 0};
u32 data_020e4d04[4] = {0x61fc8000, 0x98, 0x61fc80e0, 0xffff0118};
u32 data_020e4630[1] = {0x3d};
void *data_020e4d84[5] = {(void *)data_020e478c, (void *)data_020e478c, (void *)data_020e4824,
    (void *)data_020e4824, (void *)data_020e4824};
const u32 data_020d0dec[1] = {0x206};
void *data_020e4794[2] = {(void *)_ZN12Unk_020bb25c13func_020bb458Ev, 0};
void *data_020e51e4[9] = {(void *)data_020e4b94, (void *)0x2, 0, (void *)data_020e4d14, (void *)0x1, 0,
    (void *)data_020e4d24, (void *)0x1, 0};
char data_020e50a8[31] = "/sky/d_2d_b_cld_c_a_bg_nsc.bin";
Unk_020bcf04 data_021f14e0;
void *data_020e4974[2] = {(void *)_ZN12Unk_020be01813func_020bf1d8Ev, 0};
void *data_020e4994[2] = {(void *)func_020bb190, 0};
u32 data_020e499c[2] = {0x91f000f0, 0xffff2118};
void *data_020e49b4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb374Ev, 0};
void *data_020e4b48[3] = {(void *)data_020e4734, (void *)0x4, 0};
void *const data_020d0e14[3] = {(void *)data_020e4dac, (void *)data_020e4df4, 0};
u32 data_020e477c[2] = {0x81f000f0, 0xffff311c};
void *data_020e46e4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb490Ev, 0};
u32 data_020e4774[2] = {0x1fc00fc, 0xffff0057};
u32 data_020e492c[2] = {0x91f000f0, 0xffff2118};
const u32 data_020d0ec8[6] = {0xe0e0e0e, 0x18000e0e, 0x1a191918, 0x1b1b1b1a, 0xe00181a, 0xe0e0e0e};
const u32 data_020d0e80[4] = {0x21b0340, 0x340021b, 0x7c7b7e24, 0x211f7c7b};
u32 data_020e486c[2] = {0x81f000f0, 0xffff3118};
u32 data_020e4a14[2] = {0x81f880f0, 0xffff409a};
const u32 data_020d0fc8[12] = {0x4000000, 0xc200820, 0x3e0a1440, 0x67fb67f4, 0x67ff67ff, 0x67ff67ff, 0x5bff67ff,
    0x3fdf4bdf, 0x1abf33df, 0x16d021f, 0x6300a5, 0x210042};
char data_020e4dac[23] = "/sky/a_sky_obj_ncg.bin";
const u32 data_020d0e38[3] = {0x2402, 0x123a, 0x17e2};
void *data_020e4714[2] = {(void *)func_020bfbf8, 0};
u32 data_020e5520[20] = {0x300000ed, 0x3094, 0x200a00fc, 0x30b6, 0x10010007, 0x30b6, 0x1ee00fa, 0x30b6, 0x900f3,
    0x30b6, 0x1f900ee, 0x3095, 0x300b0008, 0x30b4, 0x100c00ed, 0x3097, 0x1f500f3, 0x30b4, 0x1ef0002,
    0xffff3097};
u32 data_020e49f4[2] = {0x81e003e0, 0xffff911c};
const u32 data_020d122c[23] = {0x5000, 0x16db, 0x1000, 0xe8c, 0xd55, 0xc4f, 0xc4f, 0xc4f, 0xc4f, 0xc4f, 0xc4f,
    0xd55, 0xe8c, 0x1000, 0x11c7, 0x1400, 0x16db, 0x1aab, 0x2000, 0x2800, 0x3555, 0x5000, 0xa000};
void *data_020e46a4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb304Ev, 0};
u32 data_020e48f4[2] = {0x81f880f0, 0xffff409c};
char data_020e5028[31] = "/sky/d_2d_b_cld_c_b_bg_nsc.bin";
u32 data_020e4734[2] = {0x81f000f0, 0xffff0114};
void *data_020e56b0[21] = {(void *)data_020e48d4, (void *)0x2, 0, (void *)data_020e46fc, (void *)0x2, 0,
    (void *)data_020e475c, (void *)0x2, 0, (void *)data_020e4844, (void *)0x2, 0, (void *)data_020e47fc,
    (void *)0x2, 0, (void *)data_020e492c, (void *)0x2, 0, (void *)data_020e491c, (void *)0x2, 0};
u32 data_021ef658[1];
u32 data_020e5570[20] = {0x300100ea, 0x3094, 0x200d00fd, 0x30b6, 0x10000008, 0x30b6, 0x1ec00fa, 0x30b6, 0xb00f3,
    0x30b6, 0x1f800ec, 0x3095, 0x300e000b, 0x30b4, 0x100e00eb, 0x3097, 0x1f300f2, 0x30d7, 0x1ed0003,
    0xffff3097};
void *data_020e5d04[132] = {0, (void *)0x2, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, (void *)0x10000, (void *)data_020e49ec, (void *)0x1, (void *)0x20000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x20000, (void *)data_020e49ec, (void *)0x1, (void *)0x30000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x30000, (void *)data_020e49ec, (void *)0x1, (void *)0x40000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x40000, (void *)data_020e49ec, (void *)0x1, (void *)0x50000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x50000, (void *)data_020e49ec, (void *)0x1, (void *)0x60000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x60000, (void *)data_020e49ec, (void *)0x1, (void *)0x60000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x70000, (void *)data_020e49ec, (void *)0x1, (void *)0x70000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x80000, (void *)data_020e49ec, (void *)0x1, (void *)0x80000, (void *)data_020e49ec,
    (void *)0x1, (void *)0x90000, (void *)data_020e49ec, (void *)0x1, (void *)0x90000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49ec, (void *)0x1, (void *)0xa0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49ec, (void *)0x1, (void *)0xb0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49ec, (void *)0x1, (void *)0xc0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49ec, (void *)0x1, (void *)0xc0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49ec, (void *)0x1, (void *)0xd0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49ec, (void *)0x1, (void *)0xe0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49ec, (void *)0x1, (void *)0xe0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49ec, (void *)0x1, (void *)0xf0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49ec, (void *)0x1, (void *)0xf0000, (void *)data_020e49ec,
    (void *)0x1, (void *)0xf0000};
const u32 data_020d0ee0[6] = {0x10101010, 0x80d, 0x0, 0x0, 0x8000000, 0x1010100d};
void *data_020e48b4[2] = {(void *)func_020bf664, 0};
void *data_020e48ac[2] = {(void *)func_020bfb68, 0};
u32 data_020e463c[1] = {0x1};
const u32 data_020d10b8[12] = {0x3ed03ed0, 0x3ed03ed0, 0x31e93ed0, 0x106024e2, 0x4200820, 0x400, 0x4000000,
    0xc010800, 0x18011001, 0x31ea2443, 0x3ed03ed0, 0x3ed03ed0};
u32 data_020e465c[2] = {0x81f000f0, 0xffff311c};
void *data_020e57d0[27] = {(void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec,
    (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0, (void *)data_020e49ec, (void *)0x1, 0,
    (void *)data_020e49ec, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
void *data_020e494c[2] = {(void *)func_020bfa08, 0};
u32 data_020e48bc[2] = {0x81f000f0, 0xffff209c};
void *data_020e4ab8[3] = {(void *)data_020e47b4, (void *)0x1, 0};
void *data_020e48e4[2] = {(void *)_ZN12Unk_020bb25c13func_020bb3e8Ev, 0};
char data_020e4f08[30] = "/sky/d_2d_b_cld_r1_bg_nsc.bin";
u32 data_020e4884[2] = {0x81f000f0, 0xffff2098};
void *data_020e47bc[2] = {(void *)_ZN12Unk_020bd1b013func_020bd4bcEv, 0};
void *data_020e4a44[2] = {(void *)_ZN12Unk_020bb25c13func_020bb25cEv, 0};
void *data_020e46c4[2] = {(void *)_ZN12Unk_020bd1b013func_020bd408Ev, 0};
u32 data_021ef6c4[7];
void *data_020e468c[2] = {(void *)_ZN12Unk_020be20413func_020be7c0Ev, 0};
void *data_020e473c[2] = {(void *)_ZN12Unk_020be20413func_020be58cEj, 0};
u32 data_020e4c14[4] = {0x41fc80e0, 0x9c, 0x41fc8000, 0xffff011c};
u32 data_020e466c[2] = {0x81f000f0, 0xffff209c};
void *data_020e49c4[2] = {(void *)func_020bf4b4, 0};
void *data_020e583c[27] = {(void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
char data_020e4f48[30] = "/sky/d_2d_b_cld_h1_bg_nsc.bin";
u32 data_020e49cc[2] = {0x81f000f0, 0xffff3098};
u32 data_020e4c64[4] = {0x71fc8000, 0x9c, 0x71fc80e0, 0xffff011c};
void *data_020e493c[2] = {(void *)func_020bf4ac, 0};
void *data_020e5288[12] = {(void *)data_020e4884, (void *)0x2, 0, (void *)data_020e48bc, (void *)0x2, 0,
    (void *)data_020e4a24, (void *)0x2, 0, (void *)data_020e497c, (void *)0x2, 0};
u32 data_020e46ec[2] = {0x1fc00fc, 0xffff0058};
void *data_020e4ca4[4] = {(void *)data_020e4f68, (void *)data_020e4f88, (void *)data_020e4fa8,
    (void *)data_020e4fc8};
u32 data_020e49fc[2] = {0x81e003e0, 0xffff909c};
u32 data_020e4a0c[2] = {0x41fb80f0, 0xffff9096};
void *data_020e6334[132] = {0, (void *)0x2, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, (void *)0x10000, (void *)data_020e49fc, (void *)0x1, (void *)0x20000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x20000, (void *)data_020e49fc, (void *)0x1, (void *)0x30000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x30000, (void *)data_020e49fc, (void *)0x1, (void *)0x40000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x40000, (void *)data_020e49fc, (void *)0x1, (void *)0x50000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x50000, (void *)data_020e49fc, (void *)0x1, (void *)0x60000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x60000, (void *)data_020e49fc, (void *)0x1, (void *)0x60000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x70000, (void *)data_020e49fc, (void *)0x1, (void *)0x70000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x80000, (void *)data_020e49fc, (void *)0x1, (void *)0x80000, (void *)data_020e49fc,
    (void *)0x1, (void *)0x90000, (void *)data_020e49fc, (void *)0x1, (void *)0x90000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xa0000, (void *)data_020e49fc, (void *)0x1, (void *)0xa0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49fc, (void *)0x1, (void *)0xb0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e49fc, (void *)0x1, (void *)0xc0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xc0000, (void *)data_020e49fc, (void *)0x1, (void *)0xc0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49fc, (void *)0x1, (void *)0xd0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e49fc, (void *)0x1, (void *)0xe0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49fc, (void *)0x1, (void *)0xe0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e49fc, (void *)0x1, (void *)0xf0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xf0000, (void *)data_020e49fc, (void *)0x1, (void *)0xf0000, (void *)data_020e49fc,
    (void *)0x1, (void *)0xf0000};
u32 data_020e48cc[2] = {0xc1c003c0, 0xffff9098};
u32 data_020e475c[2] = {0x81f000f0, 0xffff2118};
void *data_020e47ac[2] = {(void *)_ZN12Unk_020be20413func_020be6f0Ej, 0};
void *data_020e5318[12] = {(void *)data_020e4814, (void *)0x1, 0, (void *)data_020e4684, (void *)0x1, 0,
    (void *)data_020e47f4, (void *)0x1, 0, (void *)data_020e47ec, (void *)0x1, 0};
void *data_020e4744[2] = {(void *)func_020bfcd0, 0};
void *data_020e5348[12] = {(void *)data_020e49cc, (void *)0x2, 0, (void *)data_020e4644, (void *)0x2, 0,
    (void *)data_020e4674, (void *)0x2, 0, (void *)data_020e465c, (void *)0x2, 0};
void *data_020e5914[27] = {(void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc,
    (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0, (void *)data_020e49fc, (void *)0x1, 0,
    (void *)data_020e49fc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
void *data_020e4914[2] = {(void *)_ZN12Unk_020be20413func_020be7b4Ev, 0};
void *data_020e4824[2] = {(void *)data_020d0ef8, (void *)data_020d0f10};
void *data_020e5764[27] = {(void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, (void *)0x20000, 0, (void *)0x25, 0};
char data_020e4fe8[31] = "/sky/d_2d_b_cld_b_b_bg_nsc.bin";
void *data_020e4934[2] = {(void *)_ZN12Unk_020be01813func_020bf1d0Ev, 0};
void *data_020e5af4[132] = {0, (void *)0x2, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0,
    (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc, (void *)0x1, 0, (void *)data_020e48cc,
    (void *)0x1, (void *)0x10000, (void *)data_020e48cc, (void *)0x1, (void *)0x20000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x20000, (void *)data_020e48cc, (void *)0x1, (void *)0x30000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x30000, (void *)data_020e48cc, (void *)0x1, (void *)0x40000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x40000, (void *)data_020e48cc, (void *)0x1, (void *)0x50000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x50000, (void *)data_020e48cc, (void *)0x1, (void *)0x60000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x60000, (void *)data_020e48cc, (void *)0x1, (void *)0x60000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x70000, (void *)data_020e48cc, (void *)0x1, (void *)0x70000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x80000, (void *)data_020e48cc, (void *)0x1, (void *)0x80000, (void *)data_020e48cc,
    (void *)0x1, (void *)0x90000, (void *)data_020e48cc, (void *)0x1, (void *)0x90000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xa0000, (void *)data_020e48cc, (void *)0x1, (void *)0xa0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e48cc, (void *)0x1, (void *)0xb0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xb0000, (void *)data_020e48cc, (void *)0x1, (void *)0xc0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xc0000, (void *)data_020e48cc, (void *)0x1, (void *)0xc0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e48cc, (void *)0x1, (void *)0xd0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xd0000, (void *)data_020e48cc, (void *)0x1, (void *)0xe0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e48cc, (void *)0x1, (void *)0xe0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xe0000, (void *)data_020e48cc, (void *)0x1, (void *)0xf0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xf0000, (void *)data_020e48cc, (void *)0x1, (void *)0xf0000, (void *)data_020e48cc,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4b54[4] = {0x51fc80e0, 0x98, 0x51fc8000, 0xffff0118};
const u32 data_020d0eb4[5] = {0xfa780000, 0xfa7828, 0x0, 0x280000, 0x2800};
const u32 data_020d0dfc[1] = {0x0};
u32 data_020e47c4[2] = {0x41fb80f0, 0xffff9094};
const u32 data_020d1058[12] = {0x6b516731, 0x73516f51, 0x7fb47792, 0x7ffc7ff5, 0x7fff7fff, 0x7fff7fff,
    0x7fff7fff, 0x6fdf77df, 0x6f7f6bdf, 0x5ef566ff, 0x6f756f97, 0x6b526f74};
void *data_020e4a7c[3] = {(void *)data_020e49d4, (void *)0x1, 0};
const u32 data_020d1088[12] = {0x10010000, 0x30232022, 0x48a83c44, 0x5dee554c, 0x668f668f, 0x668f668f,
    0x668f668f, 0x668f668f, 0x5a2f668f, 0x45084d8c, 0x2c633cc6, 0xc211c42};
u32 data_020e498c[2] = {0x41f003f0, 0xffff0810};
u32 data_020e489c[2] = {0x81f880f0, 0xffff409c};
void *data_020e4d34[5] = {(void *)data_020e4e10, (void *)data_020e4e10, (void *)data_020e4e10,
    (void *)data_020e4e10, (void *)data_020e4e10};
void *data_020e471c[2] = {(void *)func_020bf5d8, 0};
void *data_020e5f14[132] = {0, (void *)0x2, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0,
    (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c, (void *)0x1, 0, (void *)data_020e484c,
    (void *)0x1, (void *)0x10000, (void *)data_020e484c, (void *)0x1, (void *)0x20000, (void *)data_020e484c,
    (void *)0x1, (void *)0x20000, (void *)data_020e484c, (void *)0x1, (void *)0x30000, (void *)data_020e484c,
    (void *)0x1, (void *)0x30000, (void *)data_020e484c, (void *)0x1, (void *)0x40000, (void *)data_020e484c,
    (void *)0x1, (void *)0x40000, (void *)data_020e484c, (void *)0x1, (void *)0x50000, (void *)data_020e484c,
    (void *)0x1, (void *)0x50000, (void *)data_020e484c, (void *)0x1, (void *)0x60000, (void *)data_020e484c,
    (void *)0x1, (void *)0x60000, (void *)data_020e484c, (void *)0x1, (void *)0x60000, (void *)data_020e484c,
    (void *)0x1, (void *)0x70000, (void *)data_020e484c, (void *)0x1, (void *)0x70000, (void *)data_020e484c,
    (void *)0x1, (void *)0x80000, (void *)data_020e484c, (void *)0x1, (void *)0x80000, (void *)data_020e484c,
    (void *)0x1, (void *)0x90000, (void *)data_020e484c, (void *)0x1, (void *)0x90000, (void *)data_020e484c,
    (void *)0x1, (void *)0xa0000, (void *)data_020e484c, (void *)0x1, (void *)0xa0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xb0000, (void *)data_020e484c, (void *)0x1, (void *)0xb0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xb0000, (void *)data_020e484c, (void *)0x1, (void *)0xc0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xc0000, (void *)data_020e484c, (void *)0x1, (void *)0xc0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xd0000, (void *)data_020e484c, (void *)0x1, (void *)0xd0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xd0000, (void *)data_020e484c, (void *)0x1, (void *)0xe0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xe0000, (void *)data_020e484c, (void *)0x1, (void *)0xe0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xe0000, (void *)data_020e484c, (void *)0x1, (void *)0xf0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xf0000, (void *)data_020e484c, (void *)0x1, (void *)0xf0000, (void *)data_020e484c,
    (void *)0x1, (void *)0xf0000};
u32 data_020e4854[2] = {0x0, 0xffff00d4};
void *data_020e4d5c[5] = {(void *)data_020d1148, (void *)data_020d1148, (void *)data_020d1178,
    (void *)data_020d1178, (void *)data_020d1178};
void *data_020e4adc[3] = {(void *)data_020e4a5c, (void *)0x4, 0};
void *data_020e46ac[2] = {(void *)_ZN12Unk_020bb25c13func_020bb3b0Ev, 0};
const u32 data_020d1288[44] = {0x1000, 0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c,
    0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x86c, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835, 0x835,
    0x835, 0x835, 0x835, 0x835, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800, 0x800,
    0x800, 0x800, 0x800};
void *data_020e496c[2] = {(void *)func_020bfa1c, 0};
void *data_020e4a64[3] = {(void *)data_020e5a34, (void *)0x4, 0};
void *data_020e4b24[3] = {(void *)data_020e4774, (void *)0x1, 0};
u32 data_020e4c94[4] = {0x81f880e0, 0x9a, 0x81f88000, 0xffff011a};
u32 data_020e4cb4[4] = {0x41fc80e0, 0x98, 0x41fc8000, 0xffff0118};
s32 data_021ef674 = data_020c8cbc * 6;
u32 data_020e52e8[12] = {0x101400e8, 0x30b6, 0x1ef000d, 0x30b7, 0x11e300fe, 0x3095, 0x3012000a, 0x30d4,
    0x101800f8, 0x30d4, 0x21e800e8, 0xffff30b7};
char data_020e4fc8[30] = "/sky/d_2d_b_cld_r1_bg_ncl.bin";
void *data_020e48a4[2] = {(void *)_ZN12Unk_020bd1b013func_020bd288Ev, 0};
const u32 data_020d0e70[4] = {0xffffffff, 0x80a, 0x4ce, 0xffffffff};
const u32 data_020d0f80[9] = {0x2800, 0x11c7, 0xc4f, 0xa00, 0x8e4, 0x86c, 0x86c, 0x86c, 0x86c};
char data_020e5008[31] = "/sky/d_2d_b_cld_f_b_bg_nsc.bin";
void *data_020e474c[2] = {(void *)func_020bb128, 0};
u32 data_020e48ec[2] = {0x81f880f0, 0xffff411a};
u32 data_020e4b94[4] = {0xb1f88000, 0x9a, 0xb1f880e0, 0xffff011a};
void *data_020e46d4[2] = {(void *)func_020bb0fc, 0};
void *data_020e4694[2] = {(void *)_ZN12Unk_020bb25c13func_020bb420Ev, 0};
u32 data_020e48c4[2] = {0x41fb80f0, 0xffff9095};
u32 data_020e4844[2] = {0x81f000f0, 0xffff211c};
u32 data_020e483c[2] = {0x1fc80f8, 0xffff0095};
void *data_020e5178[9] = {(void *)data_020e4c94, (void *)0x2, 0, (void *)data_020e4b64, (void *)0x1, 0,
    (void *)data_020e4cb4, (void *)0x1, 0};
char data_020e5068[31] = "/sky/d_2d_b_cld_b_a_bg_nsc.bin";
const u32 data_020d0e00[1] = {0x50301};
void *data_020e4b0c[3] = {(void *)data_020e488c, (void *)0x4, 0};
void *data_020e4704[2] = {(void *)func_020bb0c8, 0};
const u32 data_020d0e20[3] = {0x7fff, 0x6667, 0x4cce};
u32 data_020e54d0[20] = {0x31ff00f0, 0x3094, 0x200700fb, 0x30b6, 0x10020005, 0x30b6, 0x1f200fa, 0x30b6, 0x400f5,
    0x30b6, 0x1f900f0, 0x3095, 0x30090006, 0x30b4, 0x100800ef, 0x3097, 0x1f600f4, 0x30b4, 0x1f00002,
    0xffff3097};
void *data_020e50e8[9] = {(void *)data_020e4c04, (void *)0x2, 0, (void *)data_020e4bb4, (void *)0x1, 0,
    (void *)data_020e4c14, (void *)0x1, 0};
u32 data_020e5208[10] = {0x1fb00f1, 0x3095, 0x30060004, 0x30b4, 0x100500f1, 0x3097, 0x1fb00f8, 0x30b4, 0x1f20002,
    0xffff3097};
u32 data_020e4864[2] = {0x400080f0, 0xffff0095};
u32 data_020e53f8[18] = {0x1f700e7, 0x30b7, 0x120000, 0x30f6, 0x1010000c, 0x3097, 0x300400e4, 0x3095, 0x1e900f9,
    0x30b6, 0xe00f5, 0x30b6, 0x1100ea, 0x30d7, 0x11ef00ed, 0x30d7, 0x11ec0006, 0xffff3097};
void *data_020e4724[2] = {(void *)func_020bfb60, 0};
}
}
namespace n06 {
}
void Unk_020bbc28::func_020bbeb8() {
    using namespace n06;
    BOOL r4 = FALSE;
    BOOL r6 = FALSE;
    Unk_020bbcc8_Xxx s;
    Unk_020bbeb8_Fn fn;
    Unk_020bbcc8_Xxx t1, t2, t3, t4;
    s.a = 0;
    s.b = 0;
    s32 kind = func_02040c7c();
    func_0209d498(&s);
    func_02116048(&s, &t1, 8);
    if (func_0203f2e0(0x13, &t1, 1)) {
        u8 a = unk_2f19;
        u8 b = unk_2f18;
        s32 c = unk_2f1c;
        if (a < 2) {
            r4 = TRUE;
            if (a == 0 && b == 0 && c == 0) {
                r6 = TRUE;
            }
        }
    } else if (kind == 0xf) {
        if (func_020b5164()) {
            func_02116048(&s, &t2, 8);
            if (func_0203f2e0(0xf, &t2, r4)) {
                r4 = TRUE;
            }
        } else if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
            func_02116048(&s, &t3, 8);
            if (func_0203f2e0(0xf, &t3, r4)) {
                r4 = TRUE;
            }
        } else {
            r4 = TRUE;
        }
    } else if (func_020b50e8() == 0x2c) {
        BOOL x;
        func_02116048(&s, &t4, 8);
        if (func_0203f2e0(0xf, &t4, 1) == 2) {
            x = TRUE;
        } else {
            x = r4;
        }
        if (x) {
            r4 = TRUE;
        }
    }
    if (r4) {
        static Unk_020bbeb8_Fn tbl[20] = {
            0, *(Unk_020bbeb8_Fn *)n00::data_020e46e4, *(Unk_020bbeb8_Fn *)n00::data_020e4794, *(Unk_020bbeb8_Fn *)n00::data_020e4694,
            *(Unk_020bbeb8_Fn *)n00::data_020e48e4, *(Unk_020bbeb8_Fn *)n00::data_020e46ac, *(Unk_020bbeb8_Fn *)n00::data_020e49b4,
            *(Unk_020bbeb8_Fn *)n00::data_020e46b4, *(Unk_020bbeb8_Fn *)n00::data_020e46a4, *(Unk_020bbeb8_Fn *)n00::data_020e47dc,
            *(Unk_020bbeb8_Fn *)n00::data_020e47e4, *(Unk_020bbeb8_Fn *)n00::data_020e4a44, *(Unk_020bbeb8_Fn *)n00::data_020e47d4,
            *(Unk_020bbeb8_Fn *)n00::data_020e47cc, *(Unk_020bbeb8_Fn *)n00::data_020e46cc, *(Unk_020bbeb8_Fn *)n00::data_020e4994,
            *(Unk_020bbeb8_Fn *)n00::data_020e4804, *(Unk_020bbeb8_Fn *)n00::data_020e474c, *(Unk_020bbeb8_Fn *)n00::data_020e46d4,
            *(Unk_020bbeb8_Fn *)n00::data_020e4704,
        };
        if (unk_2f2c == 0) {
            s32 v;
            if (r6) {
                v = 0x12;
            } else if (func_02063b8c(2) == 0) {
                v = 0xe;
            } else {
                v = 0x10;
            }
            func_020bb4c8(v);
            unk_2f30 = 0;
        }
        unk_2f30--;
        fn = tbl[unk_2f2c];
        (this->*fn)();
    } else {
        unk_2f2c = 0;
        unk_2f30 = 0;
        unk_2f34 = 0;
        unk_2f38 = 0;
        unk_2f3c = 0;
        unk_2f40 = 0;
        unk_2f44 = 0;
        unk_2f48 = 0;
    }
}
namespace n06 {

}
void Unk_020bbc28::func_020bbdd4() {
    using namespace n06;
    if (!_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
        u8 v = unk_2f19;
        if (v >= 0xa && v < 0x10) {
            if (unk_2f1a != unk_2f18) {
                if ((u32)unk_2f18 % 10 == 4) {
                    if (unk_1464 != 5) {
                        if (unk_2f24 == 0) {
                            unk_2f24 = func_02063b8c(8) + 1;
                        }
                        u8 c = unk_2f24;
                        if (func_02063b8c(8) < c) {
                            if (!_ZN12Unk_02097ff413func_02098044Ej(func_0209750c(), 0x30) && func_020bd4e0() && !func_02063b8c(4)) {
                                func_020bc754(5, 0x2d, 0, 1);
                            } else {
                                func_020bc754(5, 0x2d, 0, 0);
                                _ZN12Unk_020bd71813func_020bd7e4Ev(unk_2eb8);
                            }
                            unk_2f24 = 1;
                        } else if (c < 8) {
                            unk_2f24++;
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::func_020bbcc8() {
    using namespace n06;
    if (unk_2f26 != 0) {
        if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 9)) {
            unk_2f26 = 0;
        } else {
            Unk_020bbcc8_Xxx s;
            Unk_020bbcc8_Xxx t;
            s.a = 0;
            s.b = 0;
            BOOL b;
            func_0209d498(&s);
            func_02116048(&s, &t, 8);
            if (func_0203f2e0(0x44, &t, 0) == 0) {
                b = TRUE;
            } else {
                b = FALSE;
            }
            if (b) {
                unk_2f26 = 0;
            }
        }
    }
    if (unk_2f26 != 0) {
        if (!_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
            u8 v = unk_2f18;
            u32 m = (u32)v % 10;
            if (unk_2f1a != v) {
                if (m == 2 || m == 7) {
                    func_020850e0();
                    func_02085170();
                    if (!_ZN12Unk_02086b7c13func_02086b94Ev()) {
                        if (unk_1464 != 6) {
                            if (unk_2f25 == 0) {
                                unk_2f25 = func_02063b8c(8) + 1;
                            }
                            u8 c = unk_2f25;
                            if (func_02063b8c(8) < c) {
                                func_020bc754(6, 0x2d, 0, 0);
                                unk_2f25 = 1;
                            } else if (c < 8) {
                                unk_2f25++;
                            }
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

}
void Unk_020bbc28::func_020bbc28() {
    using namespace n06;
    if (unk_2f27 != 0) {
        if (func_020816f8(8)) {
            if (_ZN12Unk_020d77a413func_0201b84cEv()) {
                unk_2f27 = 0;
            }
        }
    }
    if (unk_2f27 != 0) {
        if (!_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
            s32 r = func_020b8fe8();
            if (r != 1 && r != 2) {
                if (unk_2f19 != unk_2f1b) {
                    if (unk_2f19 == 9 || unk_2f19 == 0x11) {
                        func_020850e0();
                        func_02085174();
                        if (!_ZN12Unk_02086c0413func_02086e84Ev()) {
                            if (unk_1464 != 7) {
                                func_020bc754(7, 0x2d, 0, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}
namespace n06 {

#undef data_021f1448
}

// ======== unk_020bb25c.cpp ========
namespace n05 {
extern "C" {
u32 func_02063b8c(u32 n);
}
extern "C" {
void func_02064928(s32 a);
}
extern "C" {
BOOL func_020b8fe8(void);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
u32 func_0209d3d0(void *a, void *b, s32 n);
}
extern "C" {
void func_02116048(void *a, void *b, s32 n);
}
namespace L_020d0e51 { extern "C" { extern struct S { u8 p[0x1]; u8 v[1]; } data_020d0e50; } }
#define data_020d0e51 n05::L_020d0e51::data_020d0e50.v
extern "C" {
extern u8 data_020d0eb4[];
}
extern "C" {
extern u8 data_020d0e04[];
}
extern "C" {
extern u32 data_020d0e90[];
}
extern "C" {
extern s32 data_021ef670;
}
extern "C" {
extern u8 data_021ed2b0[];
}
extern "C" void _ZN12Unk_020bd05413func_020bd6dcEv(Unk_020bb25c_Ent14 *p);
extern "C" void _ZN12Unk_020bd1b013func_020bd69cEi(void *p, s32 v);

}
void Unk_020bb25c::func_020bbb58() {
    using namespace n05;
    unk_2f51 = 0;
    u8 k = data_021ed2b0[0xa];
    if (k >= 0x13 && k <= 0x17) {
        if (*(data_020d0e04 + k - 0x13) == unk_2f19) {
            s32 n = unk_2f18;
            if (n < 0x2d) {
                s32 v;
                if (n <= 0xf) {
                    v = n * 0xccc;
                } else {
                    v = (n - 0xf) * -0x666 + 0xc000;
                }
                if (v < 0) {
                    v = 0;
                } else if (v > 0xc000) {
                    v = 0xc000;
                }
                unk_2f51 = (v + 0x800) >> 12;
            }
        }
    }
    BOOL f = unk_0e80 == 10 ? TRUE : FALSE;
    if (unk_2f51 != 0) {
        func_020bb04c();
        if (!f) {
            if (!func_020bc754(10, 0x20, 0, 0)) {
                unk_2f51 = 0;
            }
        }
    } else if (f) {
        func_020bc718(10);
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bbac0() {
    using namespace n05;
    Unk_020bb25c_Ent14 *p = &unk_2f58[0];
    Unk_020bb25c_Ent14 *end = p + 4;
    s32 slot = 0x21;
    s32 i = 0;
    s32 vals[3];
    vals[0] = 0;
    vals[1] = 0;
    vals[2] = 0;
    for (; p < end; p++, slot += 3, i++) {
        if (p->unk_11 != 0) {
            u8 flag = p->unk_10;
            if (func_020bc754(0xb, slot, vals[0], i)) {
                if (flag != 0) {
                    func_020bc754(0xb, slot + 1, vals[1], i | 0x10);
                    func_020bc754(0xb, slot + 2, vals[2], i | 0x20);
                }
            } else {
                _ZN12Unk_020bd1b013func_020bd69cEi(&unk_2fa8[0], p->unk_00);
            }
            _ZN12Unk_020bd05413func_020bd6dcEv(p);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb9b8() {
    using namespace n05;
    if (unk_2f29 != 0) {
        unk_2f29 = 0;
        BOOL a = func_020b8fe8() == 0 ? TRUE : FALSE;
        u32 x[6];
        x[0] = 0;
        x[1] = 0;
        x[2] = 0;
        x[3] = 0;
        x[4] = 0;
        x[5] = 0;
        func_0209d498(&x[4]);
        func_02116048(&x[4], &x[0], 8);
        func_02116048(&x[4], &x[2], 8);
        ((u8 *)x)[4] = 3;
        ((u8 *)x)[3] = 0x10;
        ((u8 *)x)[12] = 9;
        ((u8 *)x)[11] = 0xf;
        u32 r5 = func_0209d3d0(&x[0], &x[4], 0x18);
        u32 r0 = func_0209d3d0(&x[4], &x[2], 0x18);
        BOOL b = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1 || r0 == 0) {
                b = TRUE;
            }
        }
        ((u8 *)x)[2] = 6;
        ((u8 *)x)[10] = 9;
        r5 = func_0209d3d0(&x[0], &x[4], 4);
        r0 = func_0209d3d0(&x[4], &x[2], 4);
        BOOL c = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1) {
                c = TRUE;
            }
        }
        if (a && b && c) {
            func_020bc754(0xc, 0x3c, 0, 0);
            func_020bc754(0xc, 0x3c, 0, 1);
            func_020bc754(0xc, 0x3c, 0, 2);
        }
    }
}
namespace n05 {

}
BOOL Unk_020bb25c::func_020bb964(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &unk_14d8[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->unk_00 == 9) {
            u32 f = p->unk_60;
            s32 slot = (f >> 8) & 3;
            BOOL b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            if (slot == idx || !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}
namespace n05 {

}
BOOL Unk_020bb25c::func_020bb8fc(s32 idx) {
    using namespace n05;
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &unk_14d8[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->unk_00 == 9) {
            s32 slot;
            BOOL b1, b2;
            u32 f = p->unk_60;
            slot = (f >> 8) & 3;
            b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            b2 = ((f >> 31) & 1) ? TRUE : FALSE;
            if (slot == idx) {
                result = FALSE;
                break;
            }
            if (b2 && !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}
namespace n05 {

}
void Unk_020bb25c::func_020bb8a4(s32 idx, s32 a, s32 b) {
    using namespace n05;
    if (data_021ef670 != 0) {
        Unk_020bb8a4_E fa = (Unk_020bb8a4_E)(a << 31); Unk_020bb8a4_E lo = (Unk_020bb8a4_E)((data_020d0e90[idx] - 0x1d) & 0xf); Unk_020bb8a4_E i8 = (Unk_020bb8a4_E)((idx & 3) << 8); Unk_020bb8a4_E fb = (Unk_020bb8a4_E)(b << 28); func_020bc754(9, 0x3c, 0, fb | (i8 | (lo | fa)));
    } else if (a != 0) {
        func_02064928(idx + 5);
    } else {
        func_02064928(idx + 1);
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb880(s32 *out) {
    using namespace n05;
    s32 r;
    if (unk_2f48 > 0) {
        r = func_02063b8c(unk_2f48);
    } else {
        r = 0;
    }
    *out = r + 0x41;
}
namespace n05 {

}
void Unk_020bb25c::func_020bb834() {
    using namespace n05;
    unk_2f34 = unk_2f34 - 1;
    if (unk_2f34 <= 0) {
        s32 r = func_02063b8c(4);
        if (func_020bb964(r)) {
            func_020bb8a4(r, 1, 0);
            func_020bb880(&unk_2f34);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb7e8() {
    using namespace n05;
    unk_2f34 = unk_2f34 - 1;
    if (unk_2f34 <= 0) {
        s32 r = func_02063b8c(4);
        if (func_020bb964(r)) {
            func_020bb8a4(r, 1, 1);
            func_020bb880(&unk_2f34);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb774() {
    using namespace n05;
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        *c = *c - 1;
        if (*c <= 0) {
            if (func_020bb8fc(i)) {
                func_020bb8a4(i, 0, 0);
                func_020bb880(c);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb688() {
    using namespace n05;
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (func_020bb8fc(i)) {
                    func_020bb8a4(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 a = func_02063b8c(4);
        s32 b = (a + 1 + func_02063b8c(3)) & 3;
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (a == i || b == i) {
                *(*p2) = unk_2f48 + func_02063b8c(30);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb5b4() {
    using namespace n05;
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (func_020bb8fc(i)) {
                    func_020bb8a4(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 skip = func_02063b8c(4);
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (i != skip) {
                *(*p2) = unk_2f48 + func_02063b8c(30);
            }
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb584(s32 a, s32 b, s32 c) {
    using namespace n05;
    unk_2f48 = a;
    s32 r;
    if (c > 0) {
        r = func_02063b8c(c);
    } else {
        r = 0;
    }
    unk_2f30 = b + r;
}
namespace n05 {

}
void Unk_020bb25c::func_020bb4c8(s32 mode) {
    using namespace n05;
    if (mode == 0x14) {
        u32 r = func_02063b8c(100);
        u8 *p = data_020d0e51;
        s32 m = 5;
        s32 i;
        for (i = 1; i < 14; i++, p++) {
            if (r < *p) {
                m = i;
                break;
            }
        }
        unk_2f2c = m;
    } else {
        unk_2f2c = mode;
    }
    s32 idx = unk_2f2c;
    s32 cnt = data_020d0eb4[idx];
    if (cnt > 0) {
        BOOL flag = FALSE;
        u32 sh = idx - 1;
        if (sh <= 18 && ((1 << sh) & 0x4c007) != 0) {
            flag = TRUE;
        }
        if (flag) {
            unk_2f34 = func_02063b8c(cnt);
        } else {
            unk_2f38[0] = func_02063b8c(cnt);
            unk_2f38[1] = func_02063b8c(cnt);
            unk_2f38[2] = func_02063b8c(cnt);
            unk_2f38[3] = func_02063b8c(cnt);
        }
    }
}
namespace n05 {

}
void Unk_020bb25c::func_020bb490() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x14, 0x64, 400); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb834(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb458() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x64, 0x64, 500); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb834(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb420() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0xc8, 0x64, 600); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb834(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb3e8() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x32, 0x64, 400); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb774(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb3b0() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0xa0, 0x64, 500); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb774(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb374() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x12c, 0x64, 600); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb774(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb33c() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x1e, 0x96, 400); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb688(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb304() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x3c, 0x96, 500); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb688(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb2cc() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x64, 0x96, 600); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb688(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb294() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x28, 0x96, 400); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb5b4(); 
}
namespace n05 {

}
void Unk_020bb25c::func_020bb25c() {
    using namespace n05; 
    s32 v = unk_2f30; 
    if (v < 0) { 
        func_020bb584(0x50, 0x96, 500); 
    } else if (v == 0) { 
        func_020bb4c8(0x14); 
    } 
    func_020bb5b4(); 
}
namespace n05 {

#undef data_020d0e51
}

// ======== unk_020ba93c.cpp ========
namespace n04 {
struct Unk_021eff48;
struct Unk_021f1448;
struct Unk_021f1448 { u8 pad0[0x1c]; s32 f1c; u8 pad1[4]; s32 f24; s32 f28; u8 pad2[0x08]; s32 f34; };
struct Unk_021eff48 { s32 f0; s32 f4; };
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } data_021eff48; } }
#define data_021f1448 n04::L_021f1448::data_021eff48.v
extern "C" {
extern s32 data_020d0e70[];
}
namespace L_021ef690 { extern "C" { extern struct S { u8 p[0x8]; u8 v[1]; } data_021ef688; } }
#define data_021ef690 n04::L_021ef690::data_021ef688.v
extern "C" {
extern u16 data_021ef688[];
}
extern "C" {
extern s32 data_021ef670;
}
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; s32 v[1]; } data_021eff48; } }
#define data_021f145c n04::L_021f145c::data_021eff48.v
extern "C" {
extern Unk_021eff48 data_021eff48;
}
namespace L_021f1158 { extern "C" { extern struct S { u8 p[0x1210]; u8 v[1]; } data_021eff48; } }
#define data_021f1158 n04::L_021f1158::data_021eff48.v
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; s32 v; } data_021eff48; } }
#define data_021f146c n04::L_021f146c::data_021eff48.v
namespace L_021f1470 { extern "C" { extern struct S { u8 p[0x1528]; s32 v; } data_021eff48; } }
#define data_021f1470 n04::L_021f1470::data_021eff48.v
extern "C" {
extern u8 **data_020e4d84[];
}
extern "C" {
extern u16 *data_020e4d5c[];
}
extern "C" {
extern u16 **data_020e4d48[];
}
extern "C" {
extern u8 data_021ef690_out[];
}
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; Unk_020baa10_Ptr v; } data_021ef908; } }
#define data_021efc08 n04::L_021efc08::data_021ef908.v
extern "C" {
void _ZN12Unk_02003c3013func_02003c30Ev(void*);
}
extern "C" {
void _ZN12Unk_02003c4013func_02003c40EPv(void*, s32);
}
extern "C" {
void _ZN12Unk_02003c4013func_02003c60EPv(void*, void*);
}
extern "C" {
void _ZN12Unk_02003c3013func_02003cbcEv(void*);
}
extern "C" {
s32 func_020b5364(s32);
}
extern "C" {
void func_020ba8cc(void*);
}
extern "C" {
void func_02133ef8(void *p, u32 n);
}
extern "C" {
void func_0209cf18(void*);
}
extern "C" {
u32 _u32_div_f(u32, u32);
}
extern "C" {
void func_020bac14(s32, s32, u32, u32);
}
extern "C" {
void func_020baaa0(s32, s32, u32, u32);
}
extern "C" {
void func_020bab7c(s32, s32, u32, u32);
}
extern "C" {
s32 func_020b53ec(u32);
}
extern "C" {
void *_ZN12Unk_0208927013func_02089248Ev(void*);
}
extern "C" {
s32 _ZN12Unk_0208927013func_02089228Ei(void*, s32);
}
extern "C" {
s32 _ZN12Unk_0208927013func_02089210Ei(void*, s32);
}
extern "C" {
void func_02087e70(s32, void*, s32, s32, s32, s32, s32, s32, u32, s32, u32, u32);
}
extern "C" {
void _ZN12Unk_0208927013func_02089140Ev(void*);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bc928Ev(void*);
}
extern "C" {
void func_020baf2c(void*);
}
extern "C" {
void func_020baf68(Unk_020bacc0_Obj*);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bce8cEv(void*);
}
extern "C" {
void func_020be0bc(void*);
}
extern "C" {
void _ZN12Unk_020be20413func_020be204Ev(void*);
}
extern "C" {
void _ZN12Unk_020be0f413func_020be0f4Ev(void*);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bce4cEv(void*);
}
extern "C" {
void _ZN12Unk_020bd1b013func_020bd520Ev(void*);
}
extern "C" {
void _ZN12Unk_020bd06c13func_020bd06cEv(void*);
}
extern "C" {
void _ZN12Unk_020bd06c13func_020bd104Ev(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c13func_020bcba4Ev(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c13func_020bcbacEv(void*);
}
extern "C" {
void _ZN12Unk_020bd06c13func_020bd12cEv(void*);
}
extern "C" {
s32 _ZN12Unk_020bc58c13func_020bcbd8Ei(void*, s32);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(void*, s32, s32, s32, s32);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bc58cEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bbeb8Ev(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bc43cEv(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bc2a8Ev(void*);
}
extern "C" {
void _ZN12Unk_020bb25c13func_020bb9b8Ev(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bc18cEv(void*);
}
extern "C" {
void _ZN12Unk_020bb25c13func_020bbb58Ev(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bc1d4Ev(void*);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bbdd4Ev(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bbcc8Ev(void*);
}
extern "C" {
void _ZN12Unk_020bbc2813func_020bbc28Ev(void*);
}
extern "C" {
void _ZN12Unk_020bb25c13func_020bbac0Ev(void*);
}
extern "C" {
s32 _s32_div_f(s32, s32);
}
extern "C" {
void _ZN12Unk_020bb25c13func_020bb584Eiii(void*, s32, s32, s32);
}
extern "C" {
void _ZN12Unk_020bb25c13func_020bb4c8Ei(void*, s32);
}
extern "C" {
s32 _ZN12Unk_020bb25c13func_020bb7e8Ev(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c13func_020bb774Ev(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c13func_020bb834Ev(void*);
}
extern "C" {
s32 _ZN12Unk_020bb25c13func_020bb5b4Ev(void*);
}
extern "C" {
void func_020baf30(Unk_020bacc0_Obj*);
}
extern "C" {
void func_020ba6f4(u16*, u16*, u16*, s32);
}
extern "C" {
void func_020b53f8(s32);
}
extern "C" {
void func_020027f8(s32);
}
extern "C" {
void func_020027ec(u32);
}
extern "C" {
u16 func_02064cc4();
}
extern "C" {
s32 func_02104238(s32, u32, s32);
}

extern "C" void func_020ba93c(Unk_020ba93c_Obj *p);
extern "C" void func_020ba990(void *p);
extern "C" void func_020ba998(Unk_020ba93c_Obj *p);
extern "C" void func_020ba9e4(Unk_020ba93c_Obj *p);
extern "C" u8 func_020ba9f8(s32 i);
extern "C" s16 func_020baa04(s32 i);
extern "C" void func_020baa10(s32 a, s32 b);
extern "C" void func_020baaa0(s32 a, s32 b, u32 c, u32 d);
extern "C" void func_020bab7c(s32 a, s32 b, u32 c, u32 d);
extern "C" void func_020bac14(s32 a, s32 b, u32 c, u32 d);
extern "C" void func_020bacc0(Unk_020bacc0_Obj *obj);
extern "C" void func_020bae84(Unk_020bacc0_Obj *obj);
extern "C" void func_020bae8c(Unk_020bacc0_Obj *obj);
extern "C" void func_020baf2c(void *);
extern "C" void func_020baf30(Unk_020bacc0_Obj *obj);
extern "C" void func_020baf68(Unk_020bacc0_Obj *obj);
extern "C" void func_020bafe0(Unk_020bacc0_Obj *obj);
extern "C" void func_020baffc(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb018(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb04c(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb0c8(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb0fc(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb128(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb15c(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb190(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb1c4(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb1f8(Unk_020bacc0_Obj *obj);
extern "C" void func_020bb224(Unk_020bacc0_Obj *obj);

extern "C" void func_020bb224(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0x8c, 0x96, 0x258);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0x14);
    }
    _ZN12Unk_020bb25c13func_020bb5b4Ev(obj);
}

extern "C" void func_020bb1f8(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0x64, 0x96);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0x14);
    }
}

extern "C" void func_020bb1c4(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0xf);
    }
    _ZN12Unk_020bb25c13func_020bb774Ev(obj);
}

extern "C" void func_020bb190(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0xc8, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 4);
    }
    _ZN12Unk_020bb25c13func_020bb834Ev(obj);
}

extern "C" void func_020bb15c(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0x11);
    }
    _ZN12Unk_020bb25c13func_020bb834Ev(obj);
}

extern "C" void func_020bb128(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 1);
    }
    _ZN12Unk_020bb25c13func_020bb774Ev(obj);
}

extern "C" void func_020bb0fc(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0xe1, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0x13);
    }
}

extern "C" void func_020bb0c8(Unk_020bacc0_Obj *obj) {
    if (obj->f2f30 < 0) {
        _ZN12Unk_020bb25c13func_020bb584Eiii(obj, 0, 0x64, 0);
    } else if (obj->f2f30 == 0) {
        _ZN12Unk_020bb25c13func_020bb4c8Ei(obj, 0x10);
    }
    _ZN12Unk_020bb25c13func_020bb7e8Ev(obj);
}

extern "C" void func_020bb04c(Unk_020bacc0_Obj *obj) {
    u16 *p = (u16 *)(data_021f1158 + data_021eff48.f4 * 0x180);
    u16 *end1 = (u16 *)((u8 *)p + 0xee);
    u16 *end2 = (u16 *)((u8 *)p + 0x12e);
    u32 v = obj->f2f51;
    u16 h = v | 0x1000;
    s32 step, i;
    for (; p < end1; p++) {
        *p = h;
    }
    step = _s32_div_f(-(v << 12), 0x20);
    i = 0;
    for (; p < end2; p++, i++) {
        *p = (v + ((step * i + 0x800) >> 12)) | 0x1000;
    }
}

extern "C" void func_020bb018(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = &obj->e[_ZN12Unk_020bc58c13func_020bcbd8Ei(obj, 3)];
    if (e != NULL) {
        _ZN12Unk_020bc58c13func_020bc754EiiP16Unk_020bc754_Veci(obj, 2, 0x3c, 0, 1);
        e->f60 = 1;
    }
}

extern "C" void func_020baffc(Unk_020bacc0_Obj *obj) {
    _ZN12Unk_020bc58c13func_020bcbacEv(obj);
    _ZN12Unk_020bd06c13func_020bd12cEv((u8 *)obj + 0x2fcc);
}

extern "C" void func_020bafe0(Unk_020bacc0_Obj *obj) {
    _ZN12Unk_020bd06c13func_020bd104Ev((u8 *)obj + 0x2fcc);
    _ZN12Unk_020bc58c13func_020bcba4Ev(obj);
}

extern "C" void func_020baf68(Unk_020bacc0_Obj *obj) {
    switch (data_021f1448.f34) {
    case 1:
        _ZN12Unk_020bbc2813func_020bc43cEv(obj);
        break;
    case 2:
        _ZN12Unk_020bbc2813func_020bc2a8Ev(obj);
        break;
    default:
        obj->f2f08 = 0;
        obj->f2f0c = 0;
        break;
    }
    _ZN12Unk_020bb25c13func_020bb9b8Ev(obj);
    _ZN12Unk_020bbc2813func_020bc18cEv(obj);
    _ZN12Unk_020bb25c13func_020bbb58Ev(obj);
    _ZN12Unk_020bbc2813func_020bc1d4Ev(obj);
    _ZN12Unk_020bbc2813func_020bbeb8Ev(obj);
    if (func_020b50e8() != 0x2c) {
        _ZN12Unk_020bbc2813func_020bbdd4Ev(obj);
        _ZN12Unk_020bbc2813func_020bbcc8Ev(obj);
        _ZN12Unk_020bbc2813func_020bbc28Ev(obj);
        _ZN12Unk_020bb25c13func_020bbac0Ev(obj);
    }
}

extern "C" void func_020baf30(Unk_020bacc0_Obj *obj) {
    s32 r = func_020b5364(0);
    if (r != 0 && r != 3) {
        if (data_021f1448.f34 == 1 && data_021f1448.f24 == 4) {
            _ZN12Unk_020bc58c13func_020bc58cEv(obj);
        }
        _ZN12Unk_020bbc2813func_020bbeb8Ev(obj);
    }
}

extern "C" void func_020baf2c(void *) {
}

extern "C" void func_020bae8c(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e = obj->e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 *cnt;
    _ZN12Unk_020bc58c13func_020bc928Ev(obj);
    func_020baf2c(obj);
    func_020baf68(obj);
    cnt = &obj->f2f14;
    for (; e < end; e++) {
        if (e->f08 != 0x34) {
            void *sub = e->f10;
            switch (e->f04) {
            case 1:
                if (e->f24 != 6) {
                    _ZN12Unk_020bc58c13func_020bce8cEv(obj);
                }
                func_020be0bc(e);
                e->f04 = 2;
                break;
            case 2:
                _ZN12Unk_0208927013func_02089140Ev(sub);
                _ZN12Unk_020be20413func_020be204Ev(e);
                break;
            case 3:
                _ZN12Unk_020be0f413func_020be0f4Ev(e);
                *cnt -= 1;
                break;
            }
        }
    }
    _ZN12Unk_020bc58c13func_020bce4cEv(obj);
    _ZN12Unk_020bd1b013func_020bd520Ev((u8 *)obj + 0x2fa8);
    _ZN12Unk_020bd06c13func_020bd06cEv((u8 *)obj + 0x2fcc);
}

extern "C" void func_020bae84(Unk_020bacc0_Obj *obj) {
    func_020baf30(obj);
}

extern "C" void func_020bacc0(Unk_020bacc0_Obj *obj) {
    Unk_020bacc0_Entry *e;
    Unk_020bacc0_Entry *end = obj->e + 0x3c;
    s32 yoff = data_021f145c[data_021f1448.f1c ^ 1];
    s32 id = -1;
    for (e = obj->e; e < end; e++) {
        void *sub;
        void *r;
        Unk_020bacc0_P *pos;
        s32 a, b, x, y, py;
        if (e->f00 == 0xd) continue;
        if (e->f04 != 2) continue;
        if (e->f31 != 0) continue;
        sub = e->f10;
        r = _ZN12Unk_0208927013func_02089248Ev(sub);
        if (r == NULL) continue;
        pos = (Unk_020bacc0_P *)&e->f34;
        a = _ZN12Unk_0208927013func_02089228Ei(sub, id);
        b = _ZN12Unk_0208927013func_02089210Ei(sub, id);
        x = a + ((pos->x + 0x800) >> 12);
        py = b + ((pos->y + 0x800) >> 12);
        y = py - yoff;
        if (data_021eff48.f0 == 1) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(0, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        } else if (py < 0xc0) {
            u8 k = e->f5c;
            BOOL hidden = FALSE;
            if (k != 0) {
                s32 lo = y - k;
                s32 hi = y + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(1, r, x, y, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u8)e->f56, (u8)e->f57);
        } else if (py > 0x100) {
            u8 k;
            BOOL hidden;
            s32 y2 = y - 0x100;
            k = e->f5c;
            hidden = FALSE;
            if (k != 0) {
                s32 lo = y2 - k;
                s32 hi = y2 + k;
                if (hi < 0 || lo > 0xbf) hidden = TRUE;
            }
            if (hidden) continue;
            func_02087e70(0, r, x, y2, e->f5d, e->f58, e->f4c, e->f50, e->f54, id, (u32)(e->f56 << 24) >> 24, (u32)(e->f57 << 24) >> 24);
        }
    }
}

extern "C" void func_020bac14(s32 a, s32 b, u32 c, u32 d) {
    u16 *out = (u16 *)data_021ef688;
    u16 tmp[2];
    u16 **tbl;
    u16 **row;
    u16 *t;
    s32 i;
    if (data_021f1470 != data_021f146c) {
        for (i = 0; i < 4; i++) {
            row = data_020e4d48[data_021f146c];
            t = row[i];
            func_020ba6f4(&tmp[0], t + c, t + d, a);
            row = data_020e4d48[data_021f1470];
            t = row[i];
            func_020ba6f4(&tmp[1], t + c, t + d, a);
            func_020ba6f4(out, &tmp[0], &tmp[1], b);
            out++;
        }
    } else {
        row = data_020e4d48[data_021f146c];
        for (i = 0; i < 4; i++) {
            t = row[i];
            func_020ba6f4(out, t + c, t + d, a);
            out++;
        }
    }
}

extern "C" void func_020bab7c(s32 a, s32 b, u32 c, u32 d) {
    s32 cur = data_021f1448.f24;
    s32 next = data_021f1448.f28;
    if (next != cur) {
        u16 *pc = data_020e4d5c[cur];
        u32 t1 = (u16)(((0x1000 - a) * pc[c] + a * pc[d]) >> 12);
        u16 *pn = data_020e4d5c[next];
        t1 = t1 * (0x1000 - b);
        u32 t2 = (u16)(((0x1000 - a) * pn[c] + a * pn[d]) >> 12);
        func_020b53ec((u16)((t1 + t2 * b) >> 12));
    } else {
        func_020b53ec((u16)(((0x1000 - a) * data_020e4d5c[cur][c] + a * data_020e4d5c[cur][d]) >> 12));
    }
}

extern "C" void func_020baaa0(s32 a, s32 b, u32 c, u32 d) {
    u8 *out = data_021ef690;
    s32 i;
    s32 ia2, ia, ib;
    if (data_021f1470 != data_021f146c) {
        i = 0;
        ia = 0x1000 - a;
        ib = 0x1000 - b;
        for (; i < 2; i++) {
            u8 *p1 = data_020e4d84[data_021f146c][i];
            s32 t1 = (u16)((ia * p1[c] + a * p1[d]) >> 12);
            u8 *p2 = data_020e4d84[data_021f1470][i];
            t1 = t1 * ib;
            s32 t2 = (u16)((ia * p2[c] + a * p2[d]) >> 12);
            *out = (t1 + t2 * b) >> 12;
            out++;
        }
    } else {
        i = 0;
        ia2 = 0x1000 - a;
        for (; i < 2; i++) {
            u8 *p = data_020e4d84[data_021f146c][i];
            *out = (ia2 * p[c] + a * p[d]) >> 12;
            out++;
        }
    }
}

extern "C" void func_020baa10(s32 a, s32 b) {
    Unk_020baa10_Buf b0;
    u32 hour, rem;
    func_0209cf18(&b0.t);
    hour = b0.t.hi;
    rem = (hour + 1) % 24;
    func_020bac14(a, b, hour, rem);
    func_020baaa0(a, b, hour, rem);
    func_020bab7c(a, b, hour, rem);
    if (data_021ef670 != 0) {
        func_020b53f8(0);
        func_020027f8(0x1c2);
        b0.y = data_021efc08.h6;
        func_020027ec(b0.y);
    }
    b0.x = func_02064cc4();
    b0.z = b0.x;
    func_02104238(0, b0.z, 0);
}

extern "C" s16 func_020baa04(s32 i) {
    return data_021ef688[i];
}

extern "C" u8 func_020ba9f8(s32 i) {
    return data_021ef690[i];
}

extern "C" void func_020ba9e4(Unk_020ba93c_Obj *p) {
    func_020ba93c(p);
    _ZN12Unk_02003c3013func_02003cbcEv(p);
}

extern "C" void func_020ba998(Unk_020ba93c_Obj *p) {
    s32 v[3];
    if (p->f0c != 0) {
        s32 k = data_020d0e70[func_020b5364(0)];
        if (k >= 0) {
            _ZN12Unk_02003c4013func_02003c40EPv(p, k);
        }
    }
    func_02133ef8(v, 12);
    v[2] = p->f0c >> 8;
    _ZN12Unk_02003c4013func_02003c60EPv(p, v);
    func_020ba8cc(p);
}

extern "C" void func_020ba990(void *p) {
    _ZN12Unk_02003c3013func_02003c30Ev(p);
}

extern "C" void func_020ba93c(Unk_020ba93c_Obj *p) {
    BOOL a = data_021f1448.f24 == 3;
    BOOL b = data_021f1448.f24 == 4;
    BOOL c = data_021f1448.f34 == 1;
    p->f0c = 0;
    if (c) {
        if (a) {
            p->f0c = 0x99a00;
        } else if (b) {
            p->f0c = 0x100000;
        }
    }
}

#undef data_021f1448
#undef data_021ef690
#undef data_021f145c
#undef data_021f1158
#undef data_021f146c
#undef data_021f1470
#undef data_021efc08
}

// ======== unk_020b9fe4.cpp ========
namespace n03 {
struct Unk_021ed2b0;
struct Unk_021ed2b0 {
    u8 pad_00[0xa];
    u8 unk_0a;
    u8 pad_0b;
    s8 unk_0c;
    u8 unk_0d;
};
extern "C" {
BOOL func_020ba800(u16 **p);
}
extern "C" {
BOOL func_020ba834();
}
extern "C" {
void func_020ba518();
}
extern "C" {
s32 func_020ba624(s32 x);
}
extern "C" {
void func_020ba6c4(u16 *d, u16 *s1, u16 *s2, s32 t);
}
extern "C" {
void func_020ba6f4(u16 *d, u16 *s1, u16 *s2, s32 t);
}
extern "C" {
void func_020ba8cc(Unk_020ba8cc_Obj *o);
}
extern "C" {
BOOL func_020024f0(void *p, s32 a, s32 b, s32 off);
}
extern "C" {
BOOL func_020025fc(u32 res, void *heap, s32 c, s32 d, s32 e, s32 f);
}
extern "C" {
s32 func_02002580(u8 *a, s32 b, s32 c, s32 d, s32 e);
}
extern "C" {
u8 *func_020641ec(u32 res, void *heap, s32 a, void *b);
}
extern "C" {
BOOL func_020641b4(u32 res, u8 *a, s32 b);
}
extern "C" {
s32 func_02063b8c(s32 a);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void func_02063968(void *a, void *b);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
s32 func_0209cc08(void *p);
}
extern "C" {
void func_0209d124(void *p, s32 a);
}
extern "C" {
void func_0209cf18(void *p);
}
extern "C" {
void func_020c010c(void *dst, void *src);
}
extern "C" {
u16 func_020b9cd8(Unk_020b9fe4 *self, void *t);
}
extern "C" {
u16 func_020b9d18(Unk_020b9fe4 *self, void *t);
}
extern "C" {
void _ZN12Unk_020b9c9013func_020b9c90Eiti(void *a, s32 b, s32 c, s32 d);
}
extern "C" {
void func_020baa10(s32 a, s32 b);
}
extern "C" {
u32 _u32_div_f(u32 a, u32 b);
}
extern "C" {
void func_020e7fcc(void *st, u32 v);
}
extern "C" {
s32 func_020e7f90(void *st, s32 n);
}
extern "C" {
void *func_020e8594(s32 n);
}
extern "C" {
void func_020e759c(s32 *p, s32 a, s32 b);
}
extern "C" {
extern u32 data_021f482c;
}
extern "C" {
extern Unk_020b9fe4 data_021eff48;
}
extern "C" {
extern u32 *data_020e4ad0[];
}
extern "C" {
extern u32 data_020e4d34[];
}
extern "C" {
extern s8 data_020d13e8[];
}
extern "C" {
extern Unk_021ed2b0 data_021ed2b0;
}
extern "C" {
extern u8 data_021d7350[];
}
extern "C" {
extern u8 data_021d7352[];
}
namespace L_021f14ac { extern "C" { extern struct S { u8 p[0x1564]; u16 * v[3]; } data_021eff48; } }
#define data_021f14ac n03::L_021f14ac::data_021eff48.v
extern "C" {
extern s32 data_021ef670;
}
extern "C" {
extern u8 data_020d0df0[];
}
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; s32 v; } data_021eff48; } }
#define data_021f146c n03::L_021f146c::data_021eff48.v
extern "C" {
extern s32 data_020d0ea0[];
}
namespace L_021f148c { extern "C" { extern struct S { u8 p[0x1544]; u8 * v[1][2]; } data_021eff48; } }
#define data_021f148c n03::L_021f148c::data_021eff48.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020ba8cc_State v; } data_021eff48; } }
#define data_021f1448 n03::L_021f1448::data_021eff48.v
extern "C" {
extern u8 data_021ef908[];
}
namespace L_021f149c { extern "C" { extern struct S { u8 p[0x1554]; u32 v[2][2]; } data_021eff48; } }
#define data_021f149c n03::L_021f149c::data_021eff48.v
extern "C" {
extern u32 data_020e4ca4[2][2];
}

extern "C" s32 func_020ba3a0(s32 x);
extern "C" void func_020ba518();
extern "C" s32 func_020ba624(s32 x);
extern "C" void func_020ba6c4(u16 *d, u16 *s1, u16 *s2, s32 t);
extern "C" void func_020ba6f4(u16 *d, u16 *s1, u16 *s2, s32 t);
extern "C" BOOL func_020ba800(u16 **p);
extern "C" BOOL func_020ba834();
extern "C" void func_020ba8cc(Unk_020ba8cc_Obj *o);

extern "C" void func_020ba8cc(Unk_020ba8cc_Obj *o) {
    s32 a = data_021f1448.unk_28 == 3;
    s32 b = data_021f1448.unk_28 == 4;
    s32 on = data_021f1448.unk_34 == 1;
    s32 v = 0;
    s32 w;
    if (on) {
        if (a) {
            v = 0x99a00;
        } else if (b) {
            v = 0x100000;
        }
    }
    w = 0xdf;
    if (on) {
        if (v < o->unk_0c) {
            w = 0x1eb;
        }
    } else {
        w = 0x5200;
    }
    func_020e759c(&o->unk_0c, v, w);
}

extern "C" BOOL func_020ba834() {
    s32 i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (data_021eff48.unk_1544[i][j] == 0) {
                u8 **dst = &data_021f148c[i][j];
                *dst = func_020641ec(data_020e4ca4[i][j], (void *)data_021f482c, -4, &data_021f149c[i][j]);
                if (!*dst) {
                    return FALSE;
                }
            } else {
                func_020641b4(data_020e4ca4[i][j], (u8 *)data_021eff48.unk_1544[i][j], data_021eff48.unk_1554[i][j]);
            }
        }
    }
    return TRUE;
}

extern "C" BOOL func_020ba800(u16 **p) {
    s32 i;
    for (i = 0; i < 3; i++) {
        if (*p == 0) {
            *p = (u16 *)func_020e8594(32);
            if (*p == 0) {
                return FALSE;
            }
        }
        p++;
    }
    return TRUE;
}

}
void Unk_020b9fe4::func_020ba794() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    u32 st;
    u16 buf[8];
    u32 seed;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_02063968(data_021d7352, buf);
    func_0209d498(&t);
    seed = ((u8 *)&t)[3] | ((((u8 *)&t)[4] << 5) | ((buf[0] << 16) | ((((u8 *)&t)[5] & 0x1f) << 9)));
    func_020e7fcc(&st, 1);
    func_020e7fcc(&st, seed);
    unk_1538 = func_020e7f90(&st, 0x2aaa) - 0x1555;
}
namespace n03 {

extern "C" void func_020ba6f4(u16 *d, u16 *s1, u16 *s2, s32 t) {
    Unk_020ba6f4_Color *dc = (Unk_020ba6f4_Color *)d;
    Unk_020ba6f4_Color *c1 = (Unk_020ba6f4_Color *)s1;
    Unk_020ba6f4_Color *c2 = (Unk_020ba6f4_Color *)s2;
    s32 inv = 0x1000 - t;
    dc->r = (c1->r * inv + c2->r * t) >> 12;
    dc->g = (c1->g * inv + c2->g * t) >> 12;
    dc->b = (c1->b * inv + c2->b * t) >> 12;
    dc->a = 0;
}

extern "C" void func_020ba6c4(u16 *d, u16 *s1, u16 *s2, s32 t) {
    s32 i;
    for (i = 0; i < 6; i++) {
        func_020ba6f4(d, s1, s2, t);
        d++;
        s1++;
        s2++;
    }
}

}
void Unk_020b9fe4::func_020ba670(s32 *a, s32 *b) {
    using namespace n03;
    Unk_020ba518_Time t;
    func_0209cf18(&t);
    *a = (u32)(t.unk_00 * 0x44445) >> 12;
    if (unk_1528 != unk_1524) {
        *b = _s32_div_f(unk_120c << 12, 32);
    } else {
        *b = 0;
    }
}
namespace n03 {

extern "C" s32 func_020ba624(s32 x) {
    u16 **pal = data_021f14ac;
    s32 r;
    func_020ba518();
    if (data_021f1448.unk_28 != data_021f1448.unk_24) {
        r = func_02002580((u8 *)pal[2], data_020d0df0[x], 1, 1, 1);
    } else {
        r = func_02002580((u8 *)pal[0], data_020d0df0[x], 1, 1, 1);
    }
    return r;
}

extern "C" void func_020ba518() {
    u16 **pal = data_021f14ac;
    Unk_020ba518_Time t;
    s32 a = 0;
    s32 b = 0;
    s32 h, pm;
    s32 h2, pm2;
    data_021eff48.func_020ba670(&a, &b);
    func_0209cf18(&t);
    h = t.unk_01;
    if ((s32)t.unk_01 < 12) {
        pm = 0;
    } else {
        h -= 12;
        pm = 1;
    }
    h2 = (u32)(t.unk_01 + 1) % 24;
    if (h2 < 12) {
        pm2 = 0;
    } else {
        h2 -= 12;
        pm2 = 1;
    }
    Unk_020ba518_E set = (Unk_020ba518_E)data_020d0ea0[data_021f146c];
    u16 *s1 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm])[h * 16];
    u16 *s2 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm2])[h2 * 16];
    func_020ba6c4(pal[0], s1, s2, a);
    if (data_021f1448.unk_28 != data_021f146c) {
        set = (Unk_020ba518_E)data_020d0ea0[data_021f1448.unk_28];
        s1 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm])[h * 16];
        s2 = &((u16 *)((u8 **)((s32)data_021f148c + set * 8))[pm2])[h2 * 16];
        func_020ba6c4(pal[1], s1, s2, a);
        func_020ba6c4(pal[2], pal[0], pal[1], b);
        _ZN12Unk_020b9c9013func_020b9c90Eiti(data_021ef908, 0, pal[2][4], 0);
        _ZN12Unk_020b9c9013func_020b9c90Eiti(data_021ef908, 1, pal[2][5], 0xc0);
    } else {
        _ZN12Unk_020b9c9013func_020b9c90Eiti(data_021ef908, 0, pal[0][4], 0);
        _ZN12Unk_020b9c9013func_020b9c90Eiti(data_021ef908, 1, pal[0][5], 0xc0);
    }
    func_020baa10(a, b);
}

}
Unk_020b9fe4::Unk_020b9fe4() {
    using namespace n03;
    unk_0000 = 0;
    unk_1520 = 0;
    unk_157c = 0;
    unk_1584 = 0;
    unk_158c = 0;
    unk_1578 = -1;
    unk_1514 = 0;
    unk_1518 = 0;
    unk_151c = 0;
    unk_1564 = 0;
    unk_1568 = 0;
    unk_156c = 0;
    unk_1534 = 0;
    func_020ba794();
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba49c() {
    using namespace n03;
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba3e4() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    s32 r = func_020ba1b4(0);
    switch (r) {
    case 3:
    case 4:
        data_021ed2b0.unk_0d = 1;
        break;
    }
    func_020ba2e4(r, r);
    unk_0000 = 1;
    unk_158c = 0;
    unk_152c = -1;
    unk_1530 = 2;
    unk_1574 = func_02063b8c(2);
    unk_1570 = unk_1574;
    unk_1520 = 0;
    unk_1578 = 0;
    unk_120c = 0;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    unk_153e = func_020b9cd8(this, &t);
    func_0209d124(&t, 6);
    unk_153c = func_020b9d18(this, &t);
}
namespace n03 {

extern "C" s32 func_020ba3a0(s32 x) {
    s32 r = 0;
    if (func_020ba834()) {
        if (func_020ba800(data_021f14ac)) {
            if (data_021ef670 != 0) {
                r = func_020ba624(x);
            } else {
                func_020ba518();
                r = TRUE;
            }
        }
    }
    return r;
}

}
s32 Unk_020b9fe4::func_020ba334(s32 v) {
    using namespace n03;
    s32 r = 0;
    Unk_020ba1dc_Time t;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    switch (v) {
    case 3:
    case 4:
        switch (func_0209cc08(&t)) {
        case 0:
        case 1:
        case 2:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            r = 2;
            break;
        default:
            r = 1;
            break;
        }
        break;
    }
    return r;
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba2e4(s32 a, s32 b) {
    using namespace n03;
    s32 x = func_020ba334(a);
    s32 y = func_020ba334(b);
    if (x != 0) {
        unk_1534 = x;
    } else if (y != 0) {
        unk_1534 = y;
    } else {
        unk_1534 = 0;
    }
    unk_1524 = a;
    unk_1528 = b;
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba2a4(s32 v) {
    using namespace n03;
    unk_152c = v;
    if (v > unk_1524) {
        unk_1530 = 0;
    } else {
        unk_1530 = 1;
    }
    unk_1574 = func_02063b8c(2);
}
namespace n03 {

}
BOOL Unk_020b9fe4::func_020ba260(s32 v) {
    using namespace n03;
    BOOL r = FALSE;
    if (v == -1) {
    } else if (v == unk_1524) {
        r = TRUE;
    } else if (unk_1520 == 0) {
        func_020ba2a4(v);
        r = TRUE;
        unk_158c = r;
        unk_1520 = r;
    }
    return r;
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba1dc() {
    using namespace n03;
    Unk_020ba1dc_Time t;
    u8 *base = data_021d7350;
    t.unk_00 = 0;
    t.unk_04 = 0;
    func_0209d498(&t);
    if ((data_021ed2b0.unk_0c + 6) % 24 != ((u8 *)&t)[2]) {
        s32 r;
        func_020c010c(base + 0x15f66, &t);
        r = func_020ba1b4(1);
        switch (r) {
        case 3:
        case 4:
            base[0x15f6d] = 1;
            break;
        }
        if (func_020ba260(r)) {
            s32 h = ((u8 *)&t)[2] - 6;
            if (h < 0) {
                h += 24;
            }
            base[0x15f6c] = h;
        }
    }
}
namespace n03 {

}
s32 Unk_020b9fe4::func_020ba1b4(s32 v) {
    using namespace n03;
    s32 t = v + data_021ed2b0.unk_0c;
    return func_020ba1a4(data_021ed2b0.unk_0a, t % 24);
}
namespace n03 {

}
s32 Unk_020b9fe4::func_020ba1a4(s32 a, s32 b) {
    using namespace n03;
    s8 *p = data_020d13e8 + a * 24;
    return p[b];
}
namespace n03 {

}
BOOL Unk_020b9fe4::func_020ba170(s32 idx, s32 unused) {
    using namespace n03;
    BOOL ok = FALSE;
    if (func_020025fc(data_020e4d34[idx], (void *)data_021f482c, unused, 16, 16, 47)) {
        ok = TRUE;
    }
    return ok;
}
namespace n03 {

}
BOOL Unk_020b9fe4::func_020ba10c(u8 **p1, u32 *p2, s32 mode, s32 idx) {
    using namespace n03;
    BOOL ok = FALSE;
    s32 i;
    u32 res;
    if (mode == 0) {
        s32 t = idx * 2;
        i = t + unk_1570;
    } else {
        i = idx;
    }
    res = data_020e4ad0[mode][i];
    if (*p1 == NULL) {
        *p1 = func_020641ec(res, (void *)data_021f482c, -4, p2);
        if (*p1 != NULL) {
            ok = TRUE;
        }
    } else if (func_020641b4(res, *p1, *p2)) {
        ok = TRUE;
    }
    return ok;
}
namespace n03 {

}
void Unk_020b9fe4::func_020ba06c() {
    using namespace n03;
    s32 mode, next;
    if (unk_1530 == 0) {
        mode = 1;
        next = unk_1524 + 1;
    } else {
        mode = 2;
        next = unk_1524 - 1;
    }
    if (func_020ba170(next, 6)) {
        if (func_020ba10c(&unk_1584, &unk_1588, mode, next)) {
            func_020ba2e4(unk_1524, next);
            if (unk_1524 < 3 && unk_1528 >= 3) {
                func_020ba794();
            }
            unk_1578 = 0;
            unk_120c = 0;
            unk_158c = 2;
        }
    }
}
namespace n03 {

}
void Unk_020b9fe4::func_020b9fe4() {
    using namespace n03;
    s32 idx = unk_1578;
    s32 blk = (((unk_1208 >> 8) - 8) & 0xff) >> 3;
    if (blk == idx) {
        if (func_020024f0(unk_1584 + (blk << 5), 6, 32, blk << 5)) {
            s32 cnt = unk_120c;
            idx = idx + 1;
            cnt = cnt + 1;
            if (idx >= 32) {
                idx = -1;
                cnt = 32;
                func_020ba2e4(unk_1528, unk_1528);
                unk_1570 = unk_1574;
                unk_158c = 3;
            }
            unk_1578 = idx;
            unk_120c = cnt;
        }
    }
}
namespace n03 {

#undef data_021f14ac
#undef data_021f146c
#undef data_021f148c
#undef data_021f1448
#undef data_021f149c
}

// ======== unk_020b96b8.cpp ========
namespace n02 {
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_020b96b8_Cfg v; } data_021eff48; } }
#define data_021f1448 n02::L_021f1448::data_021eff48.v
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; s32 v[1]; } data_021eff48; } }
#define data_021f145c n02::L_021f145c::data_021eff48.v
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; volatile u16 v[1]; } data_021ef908; } }
#define data_021efc08 n02::L_021efc08::data_021ef908.v
namespace L_021eff50 { extern "C" { extern struct S { u8 p[0x8]; Unk_020b96b8_Ent v[1]; } data_021eff48; } }
#define data_021eff50 n02::L_021eff50::data_021eff48.v
extern "C" {
extern s32 data_021eff48[];
}
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; u8 v[1]; } data_021f14e0; } }
#define data_021f4420 n02::L_021f4420::data_021f14e0.v
extern "C" {
void func_0209cf18(u8 *out);
}
extern "C" {
Unk_020b9964_Obj *func_02095204(u32 x);
}
extern "C" {
s32 func_02064c84(u32 x);
}
namespace L_021f1158 { extern "C" { extern struct S { u8 p[0x1210]; u16 v[1]; } data_021eff48; } }
#define data_021f1158 n02::L_021f1158::data_021eff48.v
namespace L_021f14dc { extern "C" { extern struct S { u8 p[0x1594]; s32 v; } data_021eff48; } }
#define data_021f14dc n02::L_021f14dc::data_021eff48.v
namespace L_021f1150 { extern "C" { extern struct S { u8 p[0x1208]; s32 v; } data_021eff48; } }
#define data_021f1150 n02::L_021f1150::data_021eff48.v
extern "C" {
extern u8 data_021ef654;
}
extern "C" {
extern s32 data_021ef680[];
}
extern "C" {
extern s32 data_021ef678[];
}
extern "C" {
extern u16 data_020e4640[];
}
extern "C" {
extern s32 data_021ef908;
}
namespace L_021ef90c { extern "C" { extern struct S { u8 p[0x4]; u16 v[1]; } data_021ef908; } }
#define data_021ef90c n02::L_021ef90c::data_021ef908.v
extern "C" {
void func_020014e4(u32 x);
}
extern "C" {
void func_020014ac(u32 x);
}
extern "C" {
void func_020014bc(u32 x);
}
extern "C" {
s32 func_0206ef50();
}
extern "C" {
void func_020014f4(u32 x);
}
extern "C" {
void func_02001564(u32 x);
}
extern "C" {
void func_02001750(u32 x);
}
extern "C" {
void func_020016cc(u32 x);
}
extern "C" {
void func_02001674(u32 a, u32 b, u32 c, u32 d);
}
#define REG16(a) (*(volatile u16 *)(a))
#define REG32(a) (*(volatile u32 *)(a))
extern "C" s32 func_020024f0(void *p, u32 a, u32 b, u32 off);
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
s32 func_0209d3a4(void *a, void *b);
}
extern "C" {
u32 func_020b9cd8(u32 unused, u8 *d);
}

extern "C" void func_020b96b8();
extern "C" void func_020b9848();
extern "C" void func_020b9964();
extern "C" void func_020b9b94();
extern "C" u32 func_020b9cb4(u32 x);
extern "C" u32 func_020b9cd8(u32 unused, u8 *d);
extern "C" u16 func_020b9d18(u32 unused, void *unused2);

}
void Unk_020b9c90::func_020b9f84()
{
    using namespace n02;
    s32 cur = unk_1524;
    if (func_020ba170(cur, 6) != 0) {
        if (func_020ba10c((s32 *)&unk_157c, &unk_1580, 0, cur) != 0) {
            unk_1578 = 0;
            unk_120c = 0x20;
            unk_158c = 4;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::func_020b9ef8()
{
    using namespace n02;
    s32 cur = unk_1578;
    s32 k = (((unk_1208 >> 8) - 8) & 0xff) >> 3;
    if (k == cur) {
        if (func_020024f0((u8 *)unk_157c + (k << 5), 6, 0x20, k << 5) != 0) {
            cur++;
            if (cur >= 0x20) {
                cur = -1;
                if (unk_152c == unk_1524) {
                    unk_158c = 0;
                    unk_152c = cur;
                    unk_1530 = 2;
                    unk_1520 = 0;
                } else {
                    unk_158c = 1;
                }
            }
            unk_1578 = cur;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::func_020b9ea8()
{
    using namespace n02;
    if (unk_1520 != 0) {
        switch (unk_158c) {
        case 1:
            func_020ba06c();
            break;
        case 2:
            func_020b9fe4();
            break;
        case 3:
            func_020b9f84();
            break;
        case 4:
            func_020b9ef8();
            break;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::func_020b9e60()
{
    using namespace n02;
    s32 cur = unk_1524;
    s32 next;
    if (unk_152c > cur) {
        next = cur + 1;
    } else {
        next = cur - 1;
    }
    func_020ba2e4(cur, next);
    unk_120c = 0;
    unk_158c = 2;
    unk_1590 = 0;
}
namespace n02 {

}
void Unk_020b9c90::func_020b9e10()
{
    using namespace n02;
    unk_1590++;
    if (unk_1590 >= 0x2a8) {
        func_020ba2e4(unk_1528, unk_1528);
        unk_158c = 3;
    }
    unk_120c = (unk_1590 << 5) / 0x2a8;
}
namespace n02 {

}
void Unk_020b9c90::func_020b9df0()
{
    using namespace n02;
    unk_120c = 0x20;
    unk_158c = 4;
    unk_1590 = 0;
}
namespace n02 {

}
void Unk_020b9c90::func_020b9d94()
{
    using namespace n02;
    unk_1590++;
    if (unk_1590 >= 0x2a8) {
        if (unk_152c == unk_1524) {
            unk_158c = 0;
            unk_152c = -1;
            unk_1530 = 2;
            unk_1520 = 0;
        } else {
            unk_158c = 1;
        }
    }
}
namespace n02 {

}
void Unk_020b9c90::func_020b9d44()
{
    using namespace n02;
    if (unk_1520 != 0) {
        switch (unk_158c) {
        case 1:
            func_020b9e60();
            break;
        case 2:
            func_020b9e10();
            break;
        case 3:
            func_020b9df0();
            break;
        case 4:
            func_020b9d94();
            break;
        }
    }
}
namespace n02 {

extern "C" u16 func_020b9d18(u32 unused, void *unused2)
{
    u64 d = 0;
    u64 t = 0x100000000ULL | 0x1000000;
    d = t;
    return (u16)((func_0209d3a4(&d, unused2) % 0x40) << 3);
}

extern "C" u32 func_020b9cd8(u32 unused, u8 *d)
{
    s32 m = (d[2] + 6) % 0x18;
    if (m >= 0xc) return 0x100;
    s32 t = m * 0x3c;
    t += d[1];
    return (u32)((t * 0x68000) / 0x2d0 << 4) >> 16;
}

extern "C" u32 func_020b9cb4(u32 x)
{
    u8 d[8];
    ((u32 *)d)[0] = 0;
    ((u32 *)d)[1] = 0;
    func_0209d498(d);
    return func_020b9cd8(x, d);
}

}
void Unk_020b9c90::func_020b9c90(s32 idx, u16 a, s32 b)
{
    using namespace n02;
    *(u16 *)((u8 *)this + idx * 2 + 0x304) = a;
    *(s32 *)((u8 *)this + idx * 4 + 0x308) = b;
}
namespace n02 {

extern "C" void func_020b9b94()
{
    s32 idx = (data_021ef908 + 1) % 2;
    volatile u16 out;
    Unk_020b9b94_Col c1, c2;
    volatile u16 in1, in2;
    in1 = data_021efc08[2];
    c1 = *(Unk_020b9b94_Col *)&in1;
    in2 = data_021efc08[3];
    c2 = *(Unk_020b9b94_Col *)&in2;
    u16 *dst = (u16 *)((u8 *)data_021ef90c + idx * 0x180);
    s32 s0 = ((volatile s32 *)data_021efc08)[2];
    s32 s1 = ((volatile s32 *)data_021efc08)[3];
    s32 i = 0;
    s32 span = s1 - s0;
    s32 c2g = c2.g;
    s32 c1g = c1.g;
    s32 c2r = c2.r;
    s32 c1r = c1.r;
    s32 c2b = c2.b;
    s32 c1b = c1.b;
    do {
        if (i <= s0) {
            out = in1;
        } else if (i >= s1) {
            out = in2;
        } else {
            s32 t = ((i - s0) << 8) / span;
            s32 u = 0x100 - t;
            u32 col = (u16)((c1b * u + c2b * t) >> 8) << 10;
            col |= (u16)((c1r * u + c2r * t) >> 8) | (u16)((c1g * u + c2g * t) >> 8) << 5;
            out = col;
        }
        *dst++ = out;
        i++;
    } while (i < 0xc0);
    data_021ef908 = idx;
}

extern "C" void func_020b9964()
{
    u16 *pal;
    s32 a = 0, b = 0;
    s32 idx = (data_021eff48[1] + 1) % 2;
    s32 j, i;
    pal = (u16 *)((u8 *)data_021f1158 + idx * 0x180);
    Unk_020b9964_Obj *o = func_02095204(4);
    if (o) {
        Unk_020b9964_Src *p = &o->src;
        if (p) {
            a = (s32)p->w0 >> 3;
            s32 *g = &data_021f14dc;
            s32 pos = p->pos;
            s32 d = (pos - *g) >> 4;
            if (d < 0) {
                b = (d * -176) >> 8;
            } else {
                b = -(d << 7) >> 8;
            }
            *g = pos;
        }
    }
    s32 *gp = &data_021f1150;
    s32 c = b; b = *gp; b += 0x60; b += c;
    if (b >= 0x10000) b -= 0x10000;
    *gp = b;
    if (data_021ef654 == 0) {
        data_021ef654 = 1;
        for (i = 0; i < 2; i++) {
            data_021ef680[i] = a;
            data_021ef678[i] = b;
            Unk_020b96b8_Ent *q = (Unk_020b96b8_Ent *)((u8 *)data_021eff50 + i * 0x900);
            for (j = 0; j < 0xc0; j++) {
                s32 t = -(j << 8) / 0xc0;
                q->c = 0x10000 / (t + 0x200);
                s32 n = (q->c - 0x100) << 7;
                n = -n;
                q->a = a + n;
                s32 u = (j * 0xc000 / 0xc0 + 0x3000) / 0xc0;
                q->b = b + (u * u >> 8) * 0xc0;
                q = (Unk_020b96b8_Ent *)((u8 *)q + 0xc);
            }
        }
    }
    s32 da = a - data_021ef680[idx];
    s32 db = b - data_021ef678[idx];
    if (da != 0 || db != 0) {
        data_021ef680[idx] = a;
        data_021ef678[idx] = b;
        s32 *end, *q;
        q = (s32 *)((u8 *)data_021eff50 + idx * 0x900);
        end = (s32 *)((u8 *)q + 0x900);
        if (db == 0) {
            for (; q < end; q += 3) q[0] += da;
        } else if (da == 0) {
            for (; q < end; q += 3) q[1] += db;
        } else {
            for (; q < end; q += 3) {
                q[0] += da;
                q[1] += db;
            }
        }
    }
    i = 0;
    u32 w = func_02064c84(1);
    if (w != data_020e4640[idx]) {
        data_020e4640[idx] = w;
        u16 c = w | 0x1000;
        for (; i < 0x77; i++) *pal++ = c;
        for (; i < 0x97; i++) *pal++ = (w - (w * (i - 0x77) >> 5)) | 0x1000;
        for (; i < 0x98; i++) *pal++ = 0x10;
        for (; i < 0xa8; i++) {
            u32 t = (u32)((i - 0x98) << 4) >> 4;
            u32 v = 0x10 - t;
            *pal++ = v | ((0x10 - v) << 8);
        }
        for (; i < 0xc0; i++) *pal++ = 0x1000;
    }
    data_021eff48[1] = idx;
}

extern "C" void func_020b9848()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[3];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[data_021eff48[1]];
    REG16(0x4001030) = e->c;
    REG32(0x4001038) = e->a;
    REG32(0x400103c) = e->b;
    func_0209cf18(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4001000) = REG32(0x4001000) & 0xfffffdff;
        if (func_0206ef50() == 0) func_020014ac(2);
    } else {
        REG32(0x4001000) |= 0x200;
        if (func_0206ef50() == 0) func_020014bc(2);
    }
    if (data_021f4420[0x11] != 0) {
        REG16(0x4001050) = 0x2040;
    } else {
        REG16(0x4001050) = 0x2042;
    }
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4001016) = s;
    REG16(0x4001014) = data_021f1448.h3c;
}

extern "C" void func_020b96b8()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[2];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[data_021eff48[1]];
    REG16(0x4000030) = e->c;
    REG32(0x4000038) = e->a;
    REG32(0x400003c) = e->b;
    func_0209cf18(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
        func_020014e4(2);
    } else {
        REG32(0x4000000) |= 0x200;
        func_020014f4(2);
    }
    s32 r;
    if (y > 0xa8) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffff5ff;
        func_020014e4(0xa);
        REG16(0x4000050) = 0x2040;
    } else {
        REG32(0x4000000) |= 0x800;
        func_020014f4(8);
        if (y > 0x97) {
            REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
            func_020014e4(2);
            REG16(0x4000050) = 0x2048;
        } else if (data_021f4420[0x11] != 0) {
            REG16(0x4000050) = 0x2040;
        } else {
            REG16(0x4000050) = 0x2042;
        }
    }
    r = 0xc0 - y;
    if (r < 0) r = 0;
    else if (r > 0xc0) r = 0xc0;
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4000016) = s;
    REG16(0x4000014) = data_021f1448.h3c;
    func_02001564(1);
    func_02001750(0x15);
    func_020016cc(0x1f);
    func_02001674(0, r, 0xff, 0xc0);
}

#undef data_021f1448
#undef data_021f145c
#undef data_021efc08
#undef data_021eff50
#undef data_021f4420
#undef data_021f1158
#undef data_021f14dc
#undef data_021f1150
#undef data_021ef90c
#undef REG16
#undef REG32
}

// ======== unk_020b8d98.cpp ========
namespace n01 {
struct Unk_021eff48;
struct Unk_021f1448;
struct Unk_021f3010;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
struct Unk_021f1448 {
    /* 0x00 */ u8 pad_00[0x1c];
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u16 unk_3c;
    /* 0x3e */ u16 unk_3e;
    /* 0x40 */ u8 pad_40[0x24];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ u32 unk_6c;
    /* 0x70 */ u8 pad_70[8];
    /* 0x78 */ s32 unk_78;
};
struct Unk_021eff48 {
    /* 0x0000 */ s32 unk_0000;
    /* 0x0004 */ u8 pad_0004[0x1540];
    /* 0x1544 */ u32 unk_1544[2][2];
};
struct Unk_021f3010 { u8 pad[8]; u8 unk_08; u8 pad2[3]; };
namespace L_021f4400 { extern "C" { extern struct S { u8 p[0x2f20]; Unk_021f4400 v; } data_021f14e0; } }
#define data_021f4400 n01::L_021f4400::data_021f14e0.v
namespace L_021f4420 { extern "C" { extern struct S { u8 p[0x2f40]; Unk_021f4420 v; } data_021f14e0; } }
#define data_021f4420 n01::L_021f4420::data_021f14e0.v
namespace L_021f44a0 { extern "C" { extern struct S { u8 p[0x2fc0]; Unk_021f44a0 v; } data_021f14e0; } }
#define data_021f44a0 n01::L_021f44a0::data_021f14e0.v
namespace L_021f1448 { extern "C" { extern struct S { u8 p[0x1500]; Unk_021f1448 v; } data_021eff48; } }
#define data_021f1448 n01::L_021f1448::data_021eff48.v
extern "C" {
extern Unk_021eff48 data_021eff48;
}
extern "C" {
extern u8 data_021f14e0[];
}
extern "C" {
extern u8 data_021ef6c4[];
}
extern "C" {
extern u8 data_021efc18[];
}
namespace L_021f4398 { extern "C" { extern struct S { u8 p[0x2eb8]; u8 v[1]; } data_021f14e0; } }
#define data_021f4398 n01::L_021f4398::data_021f14e0.v
namespace L_021f304c { extern "C" { extern struct S { u8 p[0x1b6c]; u8 v[1]; } data_021f14e0; } }
#define data_021f304c n01::L_021f304c::data_021f14e0.v
extern "C" {
extern u8 data_021ef658[];
}
namespace L_021f3010 { extern "C" { extern struct S { u8 p[0x1b30]; Unk_021f3010 v[5]; } data_021f14e0; } }
#define data_021f3010 n01::L_021f3010::data_021f14e0.v
extern "C" {
extern void *data_021f482c;
}
namespace L_021f14c8 { extern "C" { extern struct S { u8 p[0x1580]; Unk_021f14c8 v; } data_021eff48; } }
#define data_021f14c8 n01::L_021f14c8::data_021eff48.v
namespace L_021f14c4 { extern "C" { extern struct S { u8 p[0x157c]; u32 v; } data_021eff48; } }
#define data_021f14c4 n01::L_021f14c4::data_021eff48.v
namespace L_021f14cc { extern "C" { extern struct S { u8 p[0x1584]; u32 v; } data_021eff48; } }
#define data_021f14cc n01::L_021f14cc::data_021eff48.v
namespace L_021f14d0 { extern "C" { extern struct S { u8 p[0x1588]; u32 v; } data_021eff48; } }
#define data_021f14d0 n01::L_021f14d0::data_021eff48.v
namespace L_021f146c { extern "C" { extern struct S { u8 p[0x1524]; u32 v; } data_021eff48; } }
#define data_021f146c n01::L_021f146c::data_021eff48.v
namespace L_021f14dc { extern "C" { extern struct S { u8 p[0x1594]; u32 v; } data_021eff48; } }
#define data_021f14dc n01::L_021f14dc::data_021eff48.v
namespace L_021f14ac { extern "C" { extern struct S { u8 p[0x1564]; u32 v[3]; } data_021eff48; } }
#define data_021f14ac n01::L_021f14ac::data_021eff48.v
extern "C" {
extern u32 data_021ef670;
}
extern "C" {
extern u32 data_021c3070;
}
namespace L_021f145c { extern "C" { extern struct S { u8 p[0x1514]; u32 v[1]; } data_021eff48; } }
#define data_021f145c n01::L_021f145c::data_021eff48.v
namespace L_021efc08 { extern "C" { extern struct S { u8 p[0x300]; Unk_021efc08 v; } data_021ef908; } }
#define data_021efc08 n01::L_021efc08::data_021ef908.v
namespace L_021efa88 { extern "C" { extern struct S { u8 p[0x180]; Unk_021efa88 v; } data_021ef908; } }
#define data_021efa88 n01::L_021efa88::data_021ef908.v
extern "C" {
extern u8 data_020d0df4[];
}
extern "C" {
extern u8 data_020d0df8[];
}
extern "C" {
extern u8 data_020d0dec[];
}
extern "C" {
extern u8 data_020e416c;
}
#define data_020e676c ((char *)"menu/star/a_bg.bch")
#define data_020e6780 ((u8 *)"menu/star/bg.bsc")
extern "C" {
void *func_0209750c(void);
}
extern "C" {
void _ZN12Unk_02097ff413func_0209801cEj(void *p, u32 x);
}
extern "C" {
void func_020bb018(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bcdd8Ev(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bca6cEi(void *p, u32 x);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bcadcEi(void *p, u32 x);
}
extern "C" {
void _ZN12Unk_020b9fe413func_020ba794Ev(void *p);
}
extern "C" {
void func_0209d498(void *p);
}
extern "C" {
void func_020b9cd8(void *p, void *q);
}
extern "C" {
void func_0209d124(void *p, u32 x);
}
extern "C" {
s32 func_020b9d18(void *p, void *q);
}
extern "C" {
void func_02116048(const void *src, void *dst, u32 size);
}
extern "C" {
void func_0209d2c0(void *p, s32 x);
}
extern "C" {
void func_0209d258(void *p, s32 x);
}
extern "C" {
BOOL func_0209d3d0(void *p, void *q, u32 x);
}
extern "C" {
s32 _s32_div_f(s32 a, s32 b);
}
extern "C" {
void _ZN12Unk_020b9fe413func_020ba1b4Ei(void *p, u32 x);
}
extern "C" {
void func_0205b690(void *p, void *fn, void *cb);
}
extern "C" {
u32 func_0205b69c(void *p);
}
extern "C" {
u32 func_0205b6e4(void *p, void *fn, void *cb, void *cb2);
}
extern "C" {
void func_020014e4(u32 x);
}
extern "C" {
void func_020014ac(u32 x);
}
extern "C" {
void func_020014bc(u32 x);
}
extern "C" {
void func_020014f4(u32 x);
}
extern "C" {
void func_020015b8(u32 x);
}
extern "C" {
void func_020015e0(u32 x);
}
extern "C" {
void func_0209cf18(void *p);
}
extern "C" {
void func_01ffcd4c(void);
}
extern "C" {
void func_01ffcd50(void);
}
extern "C" {
void func_01ffceb8(void);
}
extern "C" {
void func_020b9848(void);
}
extern "C" {
void func_020b96b8(void);
}
extern "C" {
void func_020b9678(void);
}
extern "C" {
void func_020b9608(void);
}
extern "C" {
void func_020b95dc(void);
}
extern "C" {
void *func_02095204(u32 x);
}
extern "C" {
void _ZN12Unk_020bd71813func_020bd7c0Ei(void *p, s32 x);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bce8cEv(void *p);
}
extern "C" {
void _ZN12Unk_020bc58c13func_020bc960Ev(void *p);
}
extern "C" {
BOOL func_0200261c(const char *path, void *heap, u32 a, u32 b, u32 c, u32 d);
}
extern "C" {
void *func_020e8618(void *heap, u32 size);
}
extern "C" {
void func_020e85fc(void *heap, void *ptr);
}
extern "C" {
void func_020e8558(u32 p);
}
extern "C" {
void func_020641b4(void *a, void *b, u32 c);
}
extern "C" {
void func_020aff60(void *p);
}
extern "C" {
BOOL func_020024f0(void *p, u32 a, u32 b, u32 c);
}
extern "C" {
void func_020b0788(void *p, u32 x);
}
extern "C" {
void func_020b0780(void *p);
}
extern "C" {
BOOL _ZN12Unk_020b9fe413func_020ba170Eii(void *p, u32 a, u32 b);
}
extern "C" {
BOOL _ZN12Unk_020b9fe413func_020ba10cEPPhPjii(void *p, void *a, void *b, u32 c, u32 d);
}
extern "C" {
BOOL func_020ba3a0(u32 x);
}
extern "C" {
void func_02111ec8(void *p, u32 a, u32 b);
}
extern "C" {
void func_02111e60(void *p, u32 a, u32 b);
}
extern "C" {
void func_020bafe0(void *p);
}
extern "C" {
void func_020ba990(void *p);
}
extern "C" {
void func_020bacc0(void *p);
}
extern "C" {
BOOL func_0206ef50(void);
}
extern "C" {
void func_020b080c(void *p);
}
extern "C" {
void func_020bae8c(void *p);
}
extern "C" {
void func_020bae84(void *p);
}
extern "C" {
void _ZN12Unk_020b9fe413func_020ba1dcEv(void *p);
}
extern "C" {
void func_020ba998(void *p);
}
extern "C" {
void _ZN12Unk_020b9fe413func_020ba3e4Ev(void *p);
}
extern "C" {
BOOL func_020bdaa4(void *p);
}
extern "C" {
void func_020baffc(void *p);
}
extern "C" {
void func_020ba9e4(void *p);
}
extern "C" {
void _ZN12Unk_020b9c9013func_020b9d44Ev(void *p);
}
extern "C" {
void _ZN12Unk_020b9fe413func_020ba670EPiS0_(void *p, u32 *a, u32 *b);
}
extern "C" {
void func_020ba518(void);
}
extern "C" {
void func_020b9b94(void);
}
extern "C" {
void func_020b9964(void);
}
extern "C" {
void _ZN12Unk_020b9c9013func_020b9ea8Ev(void *p);
}
extern "C" {
void func_020ba624(s32 x);
}
extern "C" {
s32 func_0206ede0(void);
}
extern "C" {
s32 func_0203a4b0(void);
}
extern "C" {
u16 func_020b9cb4(void *p);
}
extern "C" {
BOOL func_020b91f8(u32 idx);
}
extern "C" {
BOOL func_020b9290(u32 idx);
}
extern "C" {
BOOL func_020b9370(u32 idx);
}
extern "C" {
void func_020b91bc(void);
}

extern "C" void func_020b8de4(void);
extern "C" void func_020b8df0(void);
extern "C" u32 func_020b8e14(void);
extern "C" void func_020b8e20(BOOL x);
extern "C" void func_020b8e38(void);
extern "C" void func_020b8e44(void);
extern "C" void func_020b8e60(u32 x);
extern "C" void func_020b8e70(u32 x);
extern "C" void func_020b8e80(void);
extern "C" void func_020b8e90(void);
extern "C" void func_020b8ea0(void);
extern "C" void func_020b8eb0(void);
extern "C" void func_020b8ec0(Unk_020b8ec0_Time *out, s32 a, s32 b);
extern "C" u32 func_020b8f8c(void);
extern "C" u32 func_020b8f98(void);
extern "C" u32 func_020b8fa4(void);
extern "C" u32 func_020b8fbc(void);
extern "C" void func_020b8fc8(s32 *a, s32 *b);
extern "C" void func_020b8fd8(void);
extern "C" s32 func_020b8fe8(void);
extern "C" void func_020b901c(void);
extern "C" BOOL func_020b9044(s32 arg);
extern "C" void func_020b91bc(void);
extern "C" BOOL func_020b91f8(u32 idx);
extern "C" BOOL func_020b9290(u32 idx);
extern "C" BOOL func_020b9370(u32 idx);
void func_020b95dc(void);
void func_020b9608(void);
void func_020b9678(void);

void func_020b9678(void) {
    vu16 t;
    t = data_021efc08.unk_04;
    *(vu16 *)0x5000400 = t;
    *(vu16 *)0x5000000 = data_021efa88.unk_02;
    *(vu32 *)0x4000000 = *(vu32 *)0x4000000 & 0xfffff5ff;
}

void func_020b9608(void) {
    s32 a, b;
    func_020b9b94();
    if (!func_0206ef50()) {
        func_020b9964();
        _ZN12Unk_020b9c9013func_020b9ea8Ev(&data_021eff48);
    }
    func_020ba624(data_021eff48.unk_0000);
    if (data_021c3070 != 0) {
        a = func_0206ede0() * 0x123 >> 12;
        b = func_0203a4b0() * 30 >> 12;
        data_021f145c[data_021f1448.unk_1c ^ 1] = a + b;
    }
    data_021f1448.unk_3e = func_020b9cb4(&data_021eff48);
}

void func_020b95dc(void) {
    u32 a, b;
    if (!func_0206ef50()) {
        _ZN12Unk_020b9c9013func_020b9d44Ev(&data_021eff48);
    }
    _ZN12Unk_020b9fe413func_020ba670EPiS0_(&data_021eff48, &a, &b);
    func_020ba518();
}

}
BOOL Unk_020e5668::vfunc_00() {
    using namespace n01;
    u32 r4 = 0;
    u32 v = 0;
    BOOL t = (data_020e416c == 0);
    if (t) {
        v = 1;
    }
    data_021ef670 = v;
    _ZN12Unk_020b9fe413func_020ba3e4Ev(&data_021eff48);
    if (data_021ef670 != 0) {
        if (func_020bdaa4(data_021f304c)) {
            if (func_020b9044(0)) {
                func_020baffc(data_021f14e0);
                r4 = func_0205b6e4(data_021ef6c4, (void *)func_01ffceb8, (void *)func_020b9848, (void *)func_020b9608);
            }
        }
    } else {
        if (func_020ba3a0(0)) {
            r4 = func_0205b6e4(data_021ef6c4, 0, 0, (void *)func_020b95dc);
        }
    }
    if (r4 != 0) {
        func_020ba9e4((u8 *)this + 0x50);
    }
    return r4;
}
namespace n01 {

}
BOOL Unk_020e5668::vfunc_18() {
    using namespace n01;
    if (data_021ef670 != 0) {
        if (!func_0206ef50()) {
            func_020b080c(data_021efc18);
        }
        func_020bae8c(data_021f14e0);
    } else {
        func_020bae84(data_021f14e0);
    }
    _ZN12Unk_020b9fe413func_020ba1dcEv(&data_021eff48);
    func_020ba998((u8 *)this + 0x50);
    return TRUE;
}
namespace n01 {

}
BOOL Unk_020e5668::vfunc_24() {
    using namespace n01;
    if (data_021ef670 != 0) {
        func_020bacc0(data_021f14e0);
    }
    return TRUE;
}
namespace n01 {

}
BOOL Unk_020e5668::vfunc_0c() {
    using namespace n01;
    u32 saved = func_0205b69c(data_021ef6c4);
    s32 i, j, k;
    u32 *pp;
    func_02111ec8(data_021ef658, 0, 2);
    func_02111e60(data_021ef658, 0, 2);
    u32 *p4 = &data_021f14c4;
    u32 v4 = *p4;
    if (v4 != 0) {
        func_020e8558(v4);
    }
    *p4 = 0;
    p4 = &data_021f14cc;
    v4 = *p4;
    if (v4 != 0) {
        func_020e8558(v4);
    }
    *p4 = 0;
    for (i = 0; i < 2; i++) {
        u8 *row;
        j = 0;
        row = (u8 *)&data_021eff48 + i * 8;
        for (; j < 2; j++) {
            u8 *r0 = row + j * 4;
            u32 *q = (u32 *)(r0 + 0x1544);
            if (*(u32 *)(r0 + 0x1544) != 0) {
                func_020e8558(*(u32 *)(r0 + 0x1544));
            }
            *q = 0;
        }
    }
    pp = data_021f14ac;
    for (k = 0; k < 3; k++) {
        if (*pp != 0) {
            func_020e8558(*pp);
            *pp = 0;
        }
        pp++;
    }
    if (data_021ef670 != 0) {
        func_020bafe0(data_021f14e0);
    }
    func_020b0780(data_021efc18);
    func_020ba990((u8 *)this + 0x50);
    return saved;
}
namespace n01 {

extern "C" BOOL func_020b9370(u32 idx) {
    u8 r5;
    s32 r4;
    BOOL result;
    r4 = data_021f1448.unk_24;
    result = FALSE;
    r5 = data_020d0dec[idx];
    if (func_020ba3a0(idx)) {
        if (_ZN12Unk_020b9fe413func_020ba170Eii(&data_021eff48, r4, r5)) {
            u32 *r7 = (u32 *)&data_021f14c8;
            if (_ZN12Unk_020b9fe413func_020ba10cEPPhPjii(&data_021eff48, &data_021f14c4, r7, 0, r4)) {
                if (func_020024f0((void *)data_021f14c4, r5, *r7, 0)) {
                    result = TRUE;
                }
            }
        }
    }
    return result;
}

extern "C" BOOL func_020b9290(u32 idx) {
    BOOL result = FALSE;
    if (data_021f1448.unk_20 != 0 && data_021f1448.unk_30 != 2) {
        s32 r3 = data_021f1448.unk_30;
        s32 r5 = data_021f1448.unk_78;
        s32 r2 = data_021f146c;
        s32 r1 = data_021f1448.unk_28;
        s32 r4;
        u32 r7;
        u32 stk4;
        if (r1 == r2) {
            if (r5 >= 0) {
                r5 = 0x20 - r5;
            } else if (r5 == 0) {
                switch (data_021f14c8.unk_0c) {
                case 3:
                case 4:
                    r5 = 0x20 - r5;
                    break;
                }
            }
        }
        if (r5 <= 0) {
            result = TRUE;
            goto end;
        }
        r7 = data_020d0df8[idx];
        if (r3 == 0) {
            r4 = r2 + 1;
            stk4 = 1;
        } else {
            r4 = r2 - 1;
            stk4 = 2;
        }
        switch (data_021f14c8.unk_0c) {
        case 3:
        case 4:
            if (r1 == r2) {
                r4 = r2;
            }
            break;
        }
        if (_ZN12Unk_020b9fe413func_020ba170Eii(&data_021eff48, r4, r7)) {
            if (_ZN12Unk_020b9fe413func_020ba10cEPPhPjii(&data_021eff48, &data_021f14cc, &data_021f14d0, stk4, r4)) {
                u8 *buf = (u8 *)data_021f14cc;
                u32 off, n;
                if (r4 == (s32)data_021f146c) {
                    n = r5 << 5;
                    off = (0x20 - r5) << 5;
                    buf += off;
                } else {
                    n = r5 << 5;
                    off = 0;
                }
                if (func_020024f0(buf, r7, n, off)) {
                    result = TRUE;
                }
            }
        }
    } else {
        result = TRUE;
    }
end:
    return result;
}

extern "C" BOOL func_020b91f8(u32 idx) {
    void *heap = data_021f482c;
    u8 v6 = data_020d0df4[idx];
    void *buf;
    if (!func_0200261c(data_020e676c, heap, v6, 0x10, 0x10, 0x1f)) {
        return FALSE;
    }
    buf = func_020e8618(heap, 0x1000);
    if (buf == NULL) {
        return FALSE;
    }
    func_020641b4(data_020e6780, buf, 0x1000);
    func_020aff60(buf);
    if (!func_020024f0(buf, v6, 0x1000, 0)) {
        func_020e85fc(heap, buf);
        return FALSE;
    }
    func_020e85fc(heap, buf);
    func_020b0788(data_021efc18, v6);
    return TRUE;
}

extern "C" void func_020b91bc(void) {
    Unk_021f3010 *p = data_021f3010;
    s32 i;
    for (i = 0; i < 5; p++, i++) {
        p->unk_08 = 0;
    }
    _ZN12Unk_020bd71813func_020bd7c0Ei(data_021f4398, -1);
    _ZN12Unk_020bc58c13func_020bce8cEv(data_021f14e0);
    _ZN12Unk_020bc58c13func_020bc960Ev(data_021f14e0);
}

extern "C" BOOL func_020b9044(s32 arg) {
    BOOL result = FALSE;
    Unk_020b8ec0_Time t;
    if (arg == 0) {
        func_020015b8(1);
        func_0209cf18(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            func_020014ac(2);
        } else {
            func_020014bc(2);
        }
        func_020014bc(0x10);
        func_020014bc(8);
        vu16 *ra = (vu16 *)0x400100a;
        vu16 *rb = (vu16 *)0x400100e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4c00;
        *rb = (*rb & 0x43) | 0x6f00;
        func_0205b690(data_021ef6c4, (void *)func_01ffceb8, (void *)func_020b9848);
    } else {
        func_020015e0(1);
        func_0209cf18(&t);
        if (t.unk_01 >= 6 && t.unk_01 < 0x12) {
            func_020014e4(2);
        } else {
            func_020014f4(2);
        }
        func_020014f4(0x10);
        func_020014f4(8);
        vu16 *ra = (vu16 *)0x400000a;
        vu16 *rb = (vu16 *)0x400000e;
        *ra = (*ra & ~3) | 3;
        *rb = (*rb & ~3) | 2;
        *ra = (*ra & 0x43) | 0x4400;
        *rb = (*rb & 0x43) | 0x6700;
        func_0205b690(data_021ef6c4, (void *)func_01ffcd50, (void *)func_020b96b8);
    }
    if (arg != data_021eff48.unk_0000 || arg == 1) {
        if (func_020b9370(arg) && func_020b9290(arg) && func_020b91f8(arg)) {
            data_021eff48.unk_0000 = arg;
            func_020b91bc();
            result = TRUE;
        }
    }
    void *p = func_02095204(4);
    u32 *dst = &data_021f14dc;
    *dst = 0;
    if (p != NULL) {
        p = (u8 *)p + 0x5c;
        if (p != NULL) {
            *dst = ((u32 *)p)[2];
        }
    }
    return result;
}

extern "C" void func_020b901c(void) {
    func_0205b690(data_021ef6c4, (void *)func_01ffcd4c, (void *)func_020b9678);
    func_020014e4(0xa);
}

extern "C" s32 func_020b8fe8(void) {
    switch (data_021f1448.unk_24) {
    case 2:
    case 3:
    case 4:
        switch (data_021f1448.unk_34) {
        case 1:
            return 1;
        case 2:
            return 2;
        default:
            return 0;
        }
    default:
        return 0;
    }
}

extern "C" void func_020b8fd8(void) { _ZN12Unk_020b9fe413func_020ba1b4Ei(&data_021eff48, 0); }

extern "C" void func_020b8fc8(s32 *a, s32 *b) {
    *a = data_021f1448.unk_24;
    *b = data_021f1448.unk_28;
}

extern "C" u32 func_020b8fbc(void) { return data_021f1448.unk_34; }

extern "C" u32 func_020b8fa4(void) {
    if (data_021f1448.unk_28 != data_021f1448.unk_24) {
        return data_021f1448.unk_6c;
    }
    return data_021f1448.unk_64;
}

extern "C" u32 func_020b8f98(void) { return data_021f1448.unk_3c; }

extern "C" u32 func_020b8f8c(void) { return data_021f1448.unk_3e; }

extern "C" void func_020b8ec0(Unk_020b8ec0_Time *out, s32 a, s32 b) {
    u32 tmp[2];
    s32 r7;
    tmp[0] = 0;
    tmp[1] = 0;
    func_0209d498(tmp);
    func_020b9cd8(&data_021eff48, tmp);
    func_0209d124(tmp, 6);
    r7 = func_020b9d18(&data_021eff48, tmp);
    func_02116048(tmp, out, 8);
    if (a < 0) {
        a += 0x200;
    }
    if (a < r7) {
        a += 0x200;
    }
    func_0209d2c0(out, (a - r7) / 8);
    if (b < 0) {
        b = 0;
    } else if (b > 0x68) {
        b = 0x68;
    }
    out->unk_02 = 0x12;
    out->unk_01 = 0;
    out->unk_00 = 0;
    func_0209d258(out, b * 0x2d0 / 0x68);
    if (out->unk_02 == 6) {
        func_0209d124(out, 1);
    }
    func_0209d498(tmp);
    func_0209d258(tmp, 0x1e);
    if (func_0209d3d0(tmp, out, 0x3c) == 1) {
        func_0209d2c0(out, 0x40);
    }
}

extern "C" void func_020b8eb0(void) { _ZN12Unk_020b9fe413func_020ba794Ev(&data_021eff48); }

extern "C" void func_020b8ea0(void) { _ZN12Unk_020b9fe413func_020ba794Ev(&data_021eff48); }

extern "C" void func_020b8e90(void) { _ZN12Unk_020b9fe413func_020ba794Ev(&data_021eff48); }

extern "C" void func_020b8e80(void) { _ZN12Unk_020b9fe413func_020ba794Ev(&data_021eff48); }

extern "C" void func_020b8e70(u32 x) { _ZN12Unk_020bc58c13func_020bcadcEi(data_021f14e0, x); }

extern "C" void func_020b8e60(u32 x) { _ZN12Unk_020bc58c13func_020bca6cEi(data_021f14e0, x); }

extern "C" void func_020b8e44(void) {
    data_021f1448.unk_1c ^= 1;
    _ZN12Unk_020bc58c13func_020bcdd8Ev(data_021f14e0);
}

extern "C" void func_020b8e38(void) { data_021f44a0.unk_06 = 1; }

extern "C" void func_020b8e20(BOOL x) {
    if (x) {
        data_021f44a0.unk_08 = 1;
    } else {
        data_021f44a0.unk_07 = 1;
    }
}

extern "C" u32 func_020b8e14(void) { return data_021f4420.unk_10; }

extern "C" void func_020b8df0(void) {
    void *p = func_0209750c();
    if (p != NULL) {
        _ZN12Unk_02097ff413func_0209801cEj(p, 0x32);
        func_020bb018(data_021f14e0);
    }
}

extern "C" void func_020b8de4(void) { data_021f4400.unk_09 = 1; }

#undef data_021f4400
#undef data_021f4420
#undef data_021f44a0
#undef data_021f1448
#undef data_021f4398
#undef data_021f304c
#undef data_021f3010
#undef data_021f14c8
#undef data_021f14c4
#undef data_021f14cc
#undef data_021f14d0
#undef data_021f146c
#undef data_021f14dc
#undef data_021f14ac
#undef data_021f145c
#undef data_021efc08
#undef data_021efa88
#undef data_020e676c
#undef data_020e6780
}

namespace n00 {
extern "C" {
u32 data_020e48dc[2] = {0x91f000f0, 0xffff211c};
const u32 data_020d0e0c[2] = {0x1000, 0x800};
const u32 data_020d0df0[1] = {0x206};
const u8 data_020d0e50[14] = {0x0, 0x5, 0xa, 0xf, 0x19, 0x23, 0x2d, 0x37, 0x41, 0x4b, 0x51, 0x59, 0x5f, 0x64};
char data_020e4f68[30] = "/sky/d_2d_b_cld_f0_bg_ncl.bin";
}
}

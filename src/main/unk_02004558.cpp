// mwcc-version: 1.2/sp2
// Translation unit 0x02004558-0x0201106c (the player object, class Unk_020d6df4). Built by two compilers:
// this file (thunks need mwcc 1.2/sp2) and unk_02004558_extra.cpp (14 functions need 1.2/base); the
// functions and data objects are placed by address (config/usa/arm9/object_order.txt).
// Generated from 20 earlier source files: one
// namespace per old file holds that file's own declarations and its view of the object.
#include "types.h"

class Unk_02006d14;
class Unk_02007694;
class Unk_020d6df4;
struct Unk_02006d14_Item;
struct Unk_0200e2c0;
struct Unk_02006d14_Vec;
struct Unk_02006d14_Pair;
struct Unk_0200b144_Pos;
struct Unk_0200b750_Pair;
struct Unk_0200d53c_Item;
struct Unk_02006d14_Vec3;
struct Unk_0200f6d4_V2;
struct Unk_020107c8_Blk;


// ---- member-function-pointer constants as named objects (see notes.txt)
struct PMRaw {
    void (*f)();
    s32 d;
};
typedef void (*PMF)();

// ---- library base class chain of the object (declarations only; vtables and code are in other units)
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual BOOL vfunc_30();
    virtual BOOL vfunc_34();
    virtual BOOL vfunc_38();
    virtual BOOL vfunc_3c();
    virtual ~Unk_020d8c7c_Base();
};

class Unk_020d8c7c : public Unk_020d8c7c_Base {
public:
    Unk_020d8c7c();
    virtual ~Unk_020d8c7c();

    /* 0x04 */ u8 unk_04[0x4c];
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xd4 - 0x50];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);

    /* 0xd4 */ u8 unk_d4[0xec - 0xd4];
};

// secondary base at +0xec. Its virtuals have the names symbols.txt gives them as second names (vfunc_sNN); the four
// slots the object overrides are named after the object's functions (slot 0x10, 0x14, 0x18, 0x70).
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void vfunc_s30();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_6c();
    virtual void vfunc_s74();

    /* 0x20 */ u8 pad_20[0x60];
    /* 0x80 */ s32 unk_80;
};

// ---- member objects of Unk_020d6df4 (classes of other units; constructor / destructor only)
struct Unk_020e0d30 { Unk_020e0d30(); ~Unk_020e0d30(); };
struct Unk_020b6a0c { Unk_020b6a0c(); ~Unk_020b6a0c(); };
struct Unk_020dbda4 { Unk_020dbda4(); ~Unk_020dbda4(); };
struct Unk_0205ee34 { Unk_0205ee34(); ~Unk_0205ee34(); };
struct Unk_0205c780 { Unk_0205c780(); ~Unk_0205c780(); };
struct Unk_020dbd34 { Unk_020dbd34(); ~Unk_020dbd34(); };
struct Unk_0205dbb0 { Unk_0205dbb0(); ~Unk_0205dbb0(); };
struct Unk_0205d5dc { Unk_0205d5dc(); ~Unk_0205d5dc(); };
struct Unk_0205e66c { Unk_0205e66c(); ~Unk_0205e66c(); };
struct Unk_0205c3a4 { Unk_0205c3a4(); ~Unk_0205c3a4(); };
struct Unk_0205d340 { Unk_0205d340(); ~Unk_0205d340(); };
struct Unk_0205ce0c { Unk_0205ce0c(); ~Unk_0205ce0c(); };
struct Unk_0205d1f8 { Unk_0205d1f8(); ~Unk_0205d1f8(); };
struct Unk_020dbe5c { Unk_020dbe5c(); ~Unk_020dbe5c(); };
struct Unk_02063cfc { Unk_02063cfc(); ~Unk_02063cfc(); };
struct Unk_0205ca94 { Unk_0205ca94(); ~Unk_0205ca94(); };
struct Unk_020e45e0 { Unk_020e45e0(); };
struct Unk_0205ef98 { Unk_0205ef98(); ~Unk_0205ef98(); };
struct Unk_02032238 { Unk_02032238(); ~Unk_02032238(); };
struct Unk_020f3ee4 { Unk_020f3ee4(); ~Unk_020f3ee4(); };
struct Unk_0201a13c { Unk_0201a13c(); ~Unk_0201a13c(); };

// library class with an inline virtual destructor: its vtable (0x020d6f4c) and destructors are emitted here
struct Unk_020f43c8 {
    virtual ~Unk_020f43c8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
};
struct Unk_020d6f54 : Unk_020f43c8 {
    u8 unk_04[0x4c];
    Unk_020d6f54();
    virtual ~Unk_020d6f54() {}
};


struct Unk_02005f50_Flags {
    u8 type : 5;
    u8 sub : 2;
    u8 set : 1;
};

class Unk_02005e7c {
public:
    u8 pad_000[0x168];
    u8 unk_168;
    u8 pad_169[3];
    s32 unk_16c;
    u8 pad_170[0x170];
    u8 unk_2e0;
    u8 pad_2e1[0x40b];
    s32 unk_6ec;
    u8 pad_6f0[0xe0];
    u8 unk_7d0[0x1c];
    s32 unk_7ec;
    u8 pad_7f0[8];
    s32 unk_7f8;
    s32 unk_7fc;
    u8 pad_800[0xe8];
    u8 unk_8e8;
    u8 pad_8e9[3];
    u8 unk_8ec[8];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    Unk_02005f50_Flags unk_900;
    u8 pad_901[0x37f];
    s16 unk_c80;
    u8 pad_c82[2];
    s32 unk_c84;

    void func_02005e7c(u32 i);
    void func_02005ea0(u32 i);
    void func_02005f04();
    void func_02005f50();
    void func_020063a0();
    s32 func_02006d14(void *p);
    void func_0200d538(s32 idx);
    void func_0200ceec(s32 idx);
    void func_0200ce28(s32 idx);
    void func_0200caf4(s32 idx);
    void func_0200c46c(s32 idx);
    void func_0200c328(s32 idx);
    void func_ov003_02211e48(s32 idx);
    void func_0200c180(s32 idx);
    void func_ov004_02224708(s32 idx);
    void func_ov004_022244d0(s32 idx);
    void func_ov004_02224254(s32 idx);
    void func_ov004_02223f7c(s32 idx);
    void func_ov004_02223e30(s32 idx);
    void func_ov004_02223cb8(s32 idx);
    void func_ov004_02223a80(s32 idx);
    void func_ov004_0222381c(s32 idx);
    void func_0200bd18(s32 idx);
    void func_ov003_0221194c(s32 idx);
    void func_ov001_02223688(s32 idx);
    void func_0200bb48(s32 idx);
    void func_0200b9cc(s32 idx);
    void func_0200b848(s32 idx);
    void func_ov003_022117c8(s32 idx);
    void func_ov003_022115f0(s32 idx);
    void func_0200b578(s32 idx);
    void func_0200ad64(s32 idx);
    void func_0200a484(s32 idx);
    void func_02009f68(s32 idx);
    void func_ov004_02223454(s32 idx);
    void func_ov004_02222d94(s32 idx);
    void func_ov004_02222b40(s32 idx);
    void func_ov004_02222838(s32 idx);
    void func_ov004_022226c0(s32 idx);
    void func_ov004_02222550(s32 idx);
    void func_ov001_022223c0(s32 idx);
    void func_ov004_022222a4(s32 idx);
    void func_ov004_02221ffc(s32 idx);
    void func_ov004_02221d4c(s32 idx);
    void func_ov004_02221b04(s32 idx);
    void func_ov004_022218bc(s32 idx);
    void func_ov004_02221778(s32 idx);
    void func_ov004_02221568(s32 idx);
    void func_ov004_0222149c(s32 idx);
    void func_ov004_0222137c(s32 idx);
    void func_ov004_0222117c(s32 idx);
    void func_ov004_02220ef4(s32 idx);
    void func_ov004_02220ce0(s32 idx);
    void func_ov004_02220ba8(s32 idx);
    void func_02009d58(s32 idx);
    void func_02009c90(s32 idx);
    void func_02009bd0(s32 idx);
    void func_02009944(s32 idx);
    void func_02009884(s32 idx);
    void func_020097d4(s32 idx);
    void func_ov004_02220a74(s32 idx);
    void func_ov004_02220954(s32 idx);
    void func_ov003_022111bc(s32 idx);
    void func_ov003_02210ef0(s32 idx);
    void func_ov003_02210d98(s32 idx);
    void func_ov003_02210b94(s32 idx);
    void func_ov003_02210720(s32 idx);
    void func_ov003_02210438(s32 idx);
    void func_ov003_0220ffd4(s32 idx);
    void func_020095f8(s32 idx);
    void func_ov004_02220744(s32 idx);
    void func_ov004_02220314(s32 idx);
    void func_ov004_02220120(s32 idx);
    void func_ov004_0221ff3c(s32 idx);
    void func_ov003_0221fe04(s32 idx);
    void func_ov003_0220fdcc(s32 idx);
    void func_ov003_0220fa3c(s32 idx);
    void func_ov003_0220f860(s32 idx);
    void func_ov003_0220f570(s32 idx);
    void func_ov003_0220f370(s32 idx);
    void func_ov003_0220f00c(s32 idx);
    void func_ov003_0220ed24(s32 idx);
    void func_ov003_0220ea4c(s32 idx);
    void func_ov003_0220e804(s32 idx);
    void func_ov003_0220e67c(s32 idx);
    void func_ov003_0220e490(s32 idx);
    void func_ov003_0220e0d8(s32 idx);
    void func_ov003_0220df10(s32 idx);
    void func_ov003_0220de20(s32 idx);
    void func_ov003_0220dcb8(s32 idx);
    void func_ov003_0220db30(s32 idx);
    void func_ov003_0220d568(s32 idx);
    void func_ov003_0220cfc0(s32 idx);
    void func_ov003_0220c30c(s32 idx);
    void func_ov003_0220baa4(s32 idx);
    void func_ov003_0220b488(s32 idx);
    void func_ov003_0220b130(s32 idx);
    void func_ov003_0220ae34(s32 idx);
    void func_ov003_0220ad50(s32 idx);
    void func_ov003_0220ab80(s32 idx);
    void func_ov003_0220a680(s32 idx);
    void func_ov003_02209f68(s32 idx);
    void func_ov003_0220987c(s32 idx);
    void func_ov003_022094fc(s32 idx);
    void func_ov003_02209310(s32 idx);
    void func_ov003_02208ff8(s32 idx);
    void func_ov003_02208c94(s32 idx);
    void func_ov003_02208b00(s32 idx);
    void func_ov003_02208984(s32 idx);
    void func_ov003_022086c4(s32 idx);
    void func_ov003_022083bc(s32 idx);
    void func_ov003_0220809c(s32 idx);
    void func_ov003_02207e3c(s32 idx);
    void func_ov003_02207d54(s32 idx);
    void func_ov003_02207cb0(s32 idx);
    void func_ov003_02207b30(s32 idx);
    void func_ov003_02207938(s32 idx);
    void func_020092c4(s32 idx);
    void func_02008f18(s32 idx);
    void func_ov003_022076e8(s32 idx);
    void func_ov003_022073c8(s32 idx);
    void func_ov003_022071ec(s32 idx);
    void func_ov003_02206edc(s32 idx);
    void func_ov003_02206adc(s32 idx);
    void func_02008cc0(s32 idx);
    void func_020086dc(s32 idx);
    void func_ov003_022069c4(s32 idx);
    void func_02008598(s32 idx);
    void func_ov004_0221fcb8(s32 idx);
    void func_ov004_0221fba4(s32 idx);
    void func_ov004_0221fadc(s32 idx);
    void func_ov004_0221f908(s32 idx);
    void func_ov004_0221f818(s32 idx);
    void func_ov004_0221f770(s32 idx);
    void func_ov003_02206750(s32 idx);
    void func_ov003_02206500(s32 idx);
    void func_ov003_02206234(s32 idx);
    void func_020083dc(s32 idx);
    void func_020082ac(s32 idx);
    void func_02008040(s32 idx);
    void func_02007dc8(s32 idx);
    void func_ov068_0226a93c(s32 idx);
    void func_ov068_0226a838(s32 idx);
    void func_ov003_02206034(s32 idx);
    void func_ov004_0221f6c4(s32 idx);
    void func_ov004_0221f448(s32 idx);
    void func_ov004_0221f0b8(s32 idx);
    void func_ov004_0221eebc(s32 idx);
    void func_ov004_0221ecb8(s32 idx);
    void func_ov003_02205dd0(s32 idx);
    void func_02007d00(s32 idx);
    void func_02007cac(s32 idx);
    void func_02007c9c(s32 idx);};

class Unk_020080e8 {
public:
    void func_020080e8(u16 *out);
    void func_020080f8(u16 v);
    void func_02008758(s16 *out);
    void func_02008768(s16 v);
    u8 unk_00[0x10];
};

struct Unk_02008074_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_02008858_Blk {
    u32 w[12];
};

struct Unk_02008190_Ptr {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

class Unk_02008040_Base {
public:
    virtual void vfunc_00();
      u8 unk_04[0x8a];
      s16 unk_8e;
      u8 unk_090[0x34];
      Unk_02008074_Vec unk_c4;
      s16 unk_d0;
      u8 unk_d2[0x1a];
};

class Unk_02008040 : public Unk_02008040_Base, public Unk_020e2a30 {
public:
    void func_02008040(void *arg);
    void func_02008074();
    BOOL func_02008100(u16 *v, u32 a, u32 b);
    void func_02008150();
    void func_02008190();
    void func_020082a8();
    BOOL func_020082ac(u32 b);
    void func_020082c0(u8 *msg);
    BOOL func_020082e4(u8 v, u32 a, u32 b);
    void func_02008320();
    void func_02008360();
    void func_0200838c();
    BOOL func_020083dc(u32 b);
    void func_020083e8(u32 a, u32 flag);
    BOOL func_02008404(u32 a, u32 b);
    void func_0200843c();
    void func_02008458();
    BOOL func_02008598(u32 b);
    void func_020085a4();
    BOOL func_020085f0(u32 a, u32 b);
    void func_0200863c();
    void func_0200865c();
    void func_0200869c();
    void func_020086dc(u32 b);
    void func_0200870c(u8 *msg);
    BOOL func_02008770(s16 v, u32 a, u32 b);
    void func_020087ac();
    void func_02008858();

      u8 unk_10c[0x1c];
      Unk_02008190_Ptr *unk_128;
      u8 unk_12c[0x168];
      Unk_02008858_Blk unk_294;
      u8 unk_2c4[8];
      u8 unk_2cc[8];
      u32 unk_2d4;
      u8 unk_2d8[0x2c4];
      u8 unk_59c[0x28];
      u8 unk_5c4[0xd0];
      Unk_02008858_Blk unk_694;
      u8 unk_6c4[0x18];
      u8 unk_6dc[0x24];
      s32 unk_700;
      u8 unk_704[0xcc];
      u8 unk_7d0[0x1c];
      s32 unk_7ec;
      u8 unk_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 unk_800[0x1c];
      u16 unk_81c;
      u16 unk_81e;
      s32 unk_820, unk_824, unk_828, unk_82c, unk_830, unk_834;
      u8 unk_838[0xb4];
      Unk_020080e8 unk_8ec;
};

struct Unk_02006d14_Vec { s32 x, y, z; Unk_02006d14_Vec() {} };

struct Unk_02008e48 {
    u8 unk_00, unk_01, unk_02;
    void func_02008e34(u8 *a, u8 *b, u8 *c);
    void func_02008e48(u8 a, u8 b, u8 c);
};

struct Unk_02008f5c { s16 unk_00; void func_02008f5c(s16 v); };

struct Unk_02008fa0 { s16 unk_00; void func_02008fa0(s16 v); };

struct Unk_020093d4 {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    void func_020093d4(Unk_02006d14_Vec v, s32 a, s32 b);
};

struct Unk_0200944c {
    Unk_02006d14_Vec unk_00;
    s32 unk_0c;
    void func_0200944c(Unk_02006d14_Vec v, s32 a);
};

struct Unk_02006d14_Pair { u32 unk_00; u32 unk_04; };

struct Unk_0200b144_Pos { s32 x; s32 y; };

struct Unk_0200b750_Pair { u32 unk_00; u32 unk_04; Unk_0200b750_Pair(u32 a, u32 b) : unk_00(a), unk_04(b) {} Unk_0200b750_Pair(const Unk_0200b750_Pair &o) : unk_00(o.unk_00), unk_04(o.unk_04) {} };

struct Unk_0200b750 {
    u8 unk_00, unk_01;
    u8 pad_02[2];
    s32 unk_04;
    void func_0200b750(Unk_0200b750_Pair *pr, s32 *out);
    void func_0200b760(Unk_0200b750_Pair pr, s32 v);
    void func_0200ba78(u8 *a, u8 *b);
    void func_0200ba84(u8 a, u8 b);
};

struct Unk_0200b7bc {
    u32 unk_00;
    u8 unk_04, unk_05;
    void func_0200b7bc(Unk_0200b750_Pair pr, u32 v);
};

struct Unk_0200bda0 {
    s16 unk_00;
    void func_0200bda0(s16 v);
};

struct Unk_0200c2fc {
    u16 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void func_0200c2fc(u16 a, s32 b, s32 c);
    void func_0200c398(u16 a);
    void func_0200c5f0(u16 a);
};

struct Unk_0200c288 {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    s16 unk_0e;
    u8 unk_10[0x1c - 0x10];
    void func_0200c288(u16 a, s32 b, s32 c, s16 d);
    void func_0200c5ac(s16 a);
};

struct Unk_0200c24c {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void func_0200c24c(u16 *a, u8 *b, u8 *c);
    void func_0200c270(u16 a, u8 b, u8 c);
};

struct Unk_020d6df4_7d0 {
    s32 unk_00;
    void func_0200cb48();
};

struct Unk_0200d560 {
    u32 unk_00;
    u8 unk_04;
    void func_0200d560(u32 v);
};

struct Unk_0200d5b4 {
    u32 unk_00;
    void func_0200d5b4(u32 v);
};

struct Unk_0200d53c_Item {
    u8 pad_00[0xc];
    u32 unk_0c;
};

struct Unk_0200e2c8 {
    Unk_0200e2c8();
    ~Unk_0200e2c8();
};

struct Unk_0200e248_Blob {
    s32 v[4];
};

class Unk_0200e2c0 : public Unk_0200e2c8 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(s32 a, s32 b, s16 c);

    s32 unk_00;
    s32 unk_04;
    s16 unk_08;
    union {
        Unk_0200e248_Blob unk_0c;
        u16 unk_0c_h;
        Unk_0200c2fc unk_0c_c2fc;
        u8 unk_0c_b[0x10];
        Unk_0200d5b4 unk_0c_d5b4;
    };
};

struct Unk_02006d14_Vec3 { s32 x, y, z; };

struct Unk_0200f6d4_V2 {
    s32 x, y;
    Unk_0200f6d4_V2() {}
    Unk_0200f6d4_V2(const Unk_0200f6d4_V2 &o) { x = o.x; y = o.y; }
};

struct Unk_020107c8_Blk {
    u32 unk_00, unk_04, unk_08;
};

class Unk_020102ec {
public:
    void func_020102ec();
    void func_02010358(s32 a, u32 b, u16 c);
    void func_02010380(s32 a, u32 b, u16 c);
    void func_020103b4(s32 a, u32 b, u16 c);
    void func_020103dc(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g);
    void func_020104ac(s32 *a, u8 *b);
    void func_02010508(s32 *a, u8 *b);
    void func_02010564(s32 *a, u8 *b);
    void func_020105a8(s32 *a, u8 *b);
    void func_020105ec();
    void func_0201065c();
    void func_020106e0(u32 *a);
    void func_0201071c();
    void func_02010740(u32 a, u32 b, u32 c);
    void func_02010780(u32 *a);
    void func_020107c8(u32 *a);
    void func_02010800(u32 *a);
    void func_02010810(Unk_020107c8_Blk *a, u32 *b);
    u32 func_0201086c(u32 *a);
    void func_02010884();
    void func_020108ac();
    void func_02010900();
    void func_02010914();
    BOOL func_02010924();
    void func_020109ac();
    void func_020109c4();
    void func_02010a34(u32 *a);
    void func_02010a44();
    void func_02010a50(u16 a);
    void func_02010a58(s16 *a);
    u32 func_02010a6c(u32 *a);
    u8 func_02007c50(u32 a);
    u32 func_02010b08(u32 a);
    u8 *P(u32 off) { return (u8 *)this + off; }


    u8 pad_00[0x8];
      u32 unk_08;
    u8 pad_0c[0x50];
      s32 unk_5c;
      u32 unk_60;
      s32 unk_64;
    u8 pad_68[0x24];
      u16 unk_8c;
      s16 unk_8e;
    u8 pad_90[0x4];
      s16 unk_94;
    u8 pad_96[0x2];
      u32 unk_98;
    u8 pad_9c[0x238];
      u32 unk_2d4_lo : 12;
    u32 unk_2d4_mid : 16;
    u32 unk_2d4_hi : 4;
    u8 pad_2d8[0x4];
      u32 unk_2dc;
      u8 unk_2e0;
    u8 pad_2e1[0x103];
      s32 unk_3e4;
    u8 pad_3e8[0x308];
      u32 unk_6f0;
    u8 pad_6f4[0x4];
      u32 unk_6f8;
    u8 pad_6fc[0x4];
      s32 unk_700;
    u8 pad_704[0x4];
      u8 unk_708;
    u8 pad_709[0xb];
      s32 unk_714;
    u8 pad_718[0x28];
      s32 unk_740;
    u8 pad_744[0x24];
      s32 unk_768;
      s32 unk_76c;
    u8 pad_770[0x7c];
      u32 unk_7ec;
    u8 pad_7f0[0xc];
      u32 unk_7fc;
};

// ---- unk_020044dc.cpp
namespace nA {
extern "C" {

void func_0206d988(void);
void func_0206d9b4(void);
void func_020f0e3c(void *a);
void func_020f0e68(void *a, void *b, u32 c, void *d, s32 e);
void func_020e85fc(void *heap, void *p);
void *func_020e8628(void *heap, unsigned long size, s32 align);
s32 func_0209433c(void);
void func_0212899c(void *p, s32 v, unsigned long n);
BOOL _ZN12Unk_020d6df413func_0200dde0Ev(void *self);
void _ZN12Unk_020d6df413func_02005294Ev(void *self);
void func_020902f8(s32 v);
void func_02095314(s32 v);
void func_0209523c(s32 v);
void func_02034d84(s32 v);
void func_020b78b8(void);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *p);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *p, s32 v);
void func_02076280(s32 v, s32 a, s32 b, s32 c);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void _ZN12Unk_020e45e013func_020b8930Ev(void *p);
void _ZN12Unk_020dbe5c13func_02055eecEv(void *p);
void _ZN12Unk_020dbd3413func_02054b14Ev(void *p);
void _ZN12Unk_020dbd5413func_020546ecEv(void *p);
void func_0205e274(void *p);
void func_0205d5bc(void *p);
void func_0205db70(void *p);
void _ZN12Unk_0205ca9413func_0205cba8Ev(void *p);
void func_0205c744(void *p);
s32 func_ov003_0221cfdc(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
s32 func_ov004_0222c4d8(u16 a, void *b, void *c, s32 d, s32 e, s32 f);
extern u8 data_021f5b80[];
extern void *data_021c619c;
extern u8 data_0213c8f0[];
extern u8 data_020d5e20[];
extern s32 data_021c3070;
extern s32 data_021c3068;
extern u8 data_020e416c;
extern void *data_020cbb18;
void _ZN12Unk_0203442cD1Ev();
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, s32 id);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, s32 id);
union PM_02004ce8 {
    PMRaw raw;
    void (Unk_020d6df4::*fn)();
};
extern PM_02004ce8 data_020d5fbc;
extern PM_02004ce8 data_020d5ff4;
}
}

// ---- unk_02004e0c.cpp
namespace nB {
extern "C" {

struct Unk_02005294_Vec3 {
    s32 x, y, z;
};
struct Unk_021cb69c {
    union {
        struct {
            s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14, unk_18, unk_1c, unk_20;
            s32 unk_24, unk_28, unk_2c;
        };
        s32 unk_a[12];
    };
};
class Unk_020d6df4;
struct Unk_020050e0;
void func_0203ee38(Unk_02005294_Vec3 *dst, Unk_02005294_Vec3 *src);
s32 func_0203eeac(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
s32 func_0203edc0();
s32 func_0203ef38(Unk_02005294_Vec3 *out, Unk_02005294_Vec3 *in);
void MTX_RotX33_(s32 *out, s32 a, s32 b);
void MTX_RotY33_(s32 *out, s32 a, s32 b);
void MTX_Concat33(s32 *a, s32 *b, s32 *out);
void _ZN12Unk_020dbe3413func_020553f8Ej(void *obj, u8 v);
void _ZN12Unk_020dbda413func_02053f08Ej(void *obj, u32 v);
void func_020553cc(void *obj, Unk_021cb69c *out, u32 idx);
void _ZN12Unk_020dbe3413func_0205553cEPi(void *obj, void *v);
s32 func_0205d7f8(void *obj, u32 v);
s32 func_0205d494(void *obj);
void func_0205e014(void *a, void *b);
Unk_021cb69c func_0205dfb8(void *obj, u32 mode);
void func_020abbcc(Unk_02005294_Vec3 *pos, s32 a);
void func_0205e120(void *obj);
void func_02010ed8(s32 a);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *a, s32 b);
s32 func_02030814(s32 a);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(void *a, void *b);
void _ZN12Unk_020dbda413func_02053fccEP16Unk_02053a54_Msg(void *a, Unk_020050e0 *b);
void func_02054594(void *a, Unk_020050e0 *b, u32 c);
void func_02054628(Unk_020050e0 *a, u32 b);
void _ZN12Unk_020dbda413func_02054048EP16Unk_02053a54_Msg(void *a, Unk_020050e0 *b);
void func_020050e0(Unk_020050e0 *p);
void func_020050f0(Unk_020050e0 *p);
void func_02005264(Unk_020050e0 *p);
void func_ov003_022053e4(void *);
void func_ov003_02205574(void *);
void func_ov003_022055e4(void *);
void func_ov003_022056c8(void *);
void func_ov003_02205744(void *);
extern u8 data_020e416c;
extern s16 data_02135f44[];
extern void *data_020cbb18;
extern Unk_021cb69c data_021cb69c;
extern s16 data_02135f44[];
enum Unk_020d6df4_State { Unk_020d6df4_State_0 = 0 };
class Unk_020d6df4 {
public:
    BOOL func_0200ec44(u32 n);
    s32 func_0200f5b0();
    void func_0200fdb4();
    void func_0200fb04();
    void func_0200d64c();
    BOOL func_0200d640();
    void func_020063a0();
    void func_02005f04();
    void func_02010900();
    void func_02005ee0(s32 a, u32 b);
    void func_02005ea0(s32 a);
    void func_02007c5c();
    void func_0200fdf4();
    void func_0200fb30();
    void func_0200f8c0();
    s32 func_0200f870();
    void func_0200ea4c();

    s32 func_02004e0c(s32 x);
    void func_02004e40();
    void func_020050bc();
    void func_02005294();

    void func_02007c98();
    void func_02007ca4();
    void func_02007cb4();
    void func_02007d6c();
    void func_02007e40();
    void func_02008150();
    void func_02008320();
    void func_0200843c();
    void func_0200863c();
    void func_020087ac();
    void func_02008e94();
    void func_02008fa4();
    void func_02009464();
    void func_02009724();
    void func_02009838();
    void func_020098dc();
    void func_02009994();
    void func_02009c3c();
    void func_02009ce8();
    void func_02009e68();
    void func_0200a0ac();
    void func_0200a73c();
    void func_0200b264();
    void func_0200b7c8();
    void func_0200b8a0();
    void func_0200bad0();
    void func_0200bbb0();
    void func_0200bda4();
    void func_0200c304();
    void func_0200c39c();
    void func_0200c5f4();
    void func_0200cb94();
    void func_0200cedc();
    void func_0200cf3c();
    void func_02205c64();
    void func_02205e9c();
    void func_02206094();
    void func_022062b4();
    void func_022065ac();
    void func_022067a8();
    void func_02206a68();
    void func_02206be8();
    void func_02206fc4();
    void func_022072fc();
    void func_0220743c();
    void func_022077c8();
    void func_022079c4();
    void func_02207c44();
    void func_02207d40();
    void func_02207dd4();
    void func_02207f54();
    void func_02208190();
    void func_02208558();
    void func_022087c8();
    void func_02208ae4();
    void func_02208b50();
    void func_02208d50();
    void func_02209068();
    void func_02209408();
    void func_02209634();
    void func_02209964();
    void func_0220a3b4();
    void func_0220a774();
    void func_0220acd0();
    void func_0220ada8();
    void func_0220ae8c();
    void func_0220b24c();
    void func_0220b6d4();
    void func_0220bbd4();
    void func_0220c4f0();
    void func_0220d084();
    void func_0220d608();
    void func_0220dc48();
    void func_0220dd60();
    void func_0220de98();
    void func_0220e034();
    void func_0220e164();
    void func_0220e5c4();
    void func_0220e6e8();
    void func_0220e924();
    void func_0220eb28();
    void func_0220ee38();
    void func_0220f0c4();
    void func_0220f4e4();
    void func_0220f5c8();
    void func_0220f8b8();
    void func_0220fc90();
    void func_0220fe54();
    void func_0221027c();
    void func_02210704();
    void func_022107e0();
    void func_02210d94();
    void func_02210df8();
    void func_02211100();
    void func_022112ec();
    void func_022116b8();
    void func_022118e4();
    void func_022119bc();
    void func_0221ec64();
    void func_0221ee70();
    void func_0221eff8();
    void func_0221f258();
    void func_0221f648();
    void func_0221f714();
    void func_0221f7fc();
    void func_0221f878();
    void func_0221f9a4();
    void func_0221fb58();
    void func_0221fc1c();
    void func_0221fd30();
    void func_0221fe68();
    void func_0221ffa0();
    void func_02220194();
    void func_022203a0();
    void func_022208d0();
    void func_022209e4();
    void func_02220b38();
    void func_02220ccc();
    void func_02220dd8();
    void func_02221058();
    void func_02221250();
    void func_02221448();
    void func_02221514();
    void func_022215e0();
    void func_02221800();
    void func_02221a48();
    void func_02221c90();
    void func_02221ed8();
    void func_022221a0();
    void func_02222328();
    void func_02222444();
    void func_022225b4();
    void func_02222724();
    void func_02222928();
    void func_02222c54();
    void func_02222eac();
    void func_02223648();
    void func_022236f0();
    void func_02223998();
    void func_02223c50();
    void func_02223df4();
    void func_02223eec();
    void func_022240b4();
    void func_022243ec();
    void func_022245f0();
    void func_0226a794();
    void func_0226a890();

      u8 unk_000[0x5c];
      Unk_02005294_Vec3 unk_5c;
      u8 unk_068[0xb0 - 0x68];
      u32 unk_b0;
      u8 unk_0b4[0x230 - 0xb4];
      u8 unk_230[0x388 - 0x230];
      u8 unk_388[0x3ec - 0x388];
      Unk_021cb69c unk_3ec;
      u8 unk_41c[0x424 - 0x41c];
      u8 unk_424[4];
      Unk_021cb69c unk_428;
      s16 unk_458;
      s16 unk_45a;
      u8 unk_45c[4];
      u8 unk_460[0x4c4 - 0x460];
      Unk_021cb69c unk_4c4;
      u8 unk_4f4[0x4fc - 0x4f4];
      u8 unk_4fc[0x560 - 0x4fc];
      Unk_021cb69c unk_560;
      u8 unk_590[0x598 - 0x590];
      u8 unk_598[4];
      u8 unk_59c[0x604 - 0x59c];
      Unk_021cb69c unk_604;
      Unk_021cb69c unk_634;
      Unk_021cb69c unk_664;
      Unk_021cb69c unk_694;
      Unk_02005294_Vec3 unk_6c4;
      Unk_02005294_Vec3 unk_6d0;
      Unk_02005294_Vec3 unk_6dc;
      s32 unk_6e8;
      s32 unk_6ec;
      Unk_02005294_Vec3 unk_6f0;
      s32 unk_6fc;
      s32 unk_700;
      u8 unk_704[0x7ec - 0x704];
      Unk_020d6df4_State unk_7ec;
      Unk_020d6df4_State unk_7f0;
      u8 unk_7f4[0x7fc - 0x7f4];
      s32 unk_7fc;
      u8 unk_800[0x814 - 0x800];
      s32 unk_814;
      u8 unk_818[0x838 - 0x818];
      u8 unk_838[0x87c - 0x838];
      u8 unk_87c[0x8c0 - 0x87c];
      s32 unk_8c0;
      s32 unk_8c4;
      s32 unk_8c8;
      u8 unk_8cc[0x8e4 - 0x8cc];
      u8 unk_8e4;
      u8 unk_8e5;
      u8 unk_8e6;
      u8 unk_8e7;
      u8 unk_8e8;
};
struct Unk_020050e0_P {
      u8 unk_00;
      u8 unk_01;
};
struct Unk_020050e0_Q {
      u8 unk_00[0x2c];
      Unk_020d6df4 *unk_2c;
};
struct Unk_020050e0_R {
      u8 unk_00[0x28];
      s32 unk_28[9];
      Unk_02005294_Vec3 unk_4c;
};
struct Unk_020050e0 {
      Unk_020050e0_P *unk_00;
      Unk_020050e0_Q *unk_04;
      u8 unk_08[0x1c];
      void (*unk_24)(Unk_020050e0 *);
      u8 unk_28[0x92 - 0x28];
      u8 unk_92;
      u8 unk_93[0xb4 - 0x93];
      Unk_020050e0_R *unk_b4;
};
void func_020050e0(Unk_020050e0 *p);
void func_02005264(Unk_020050e0 *p);
void func_020050f0(Unk_020050e0 *p);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, u32 n);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
s32 _ZN12Unk_020d6df413func_02004e0cEi(void *, s32 x);
void _ZN12Unk_02006d1413func_0200fdb4Ev(void *);
void _ZN12Unk_02006d1413func_0200fb04Ev(void *);
void _ZN12Unk_020d6df413func_0200d64cEv(void *);
BOOL _ZN12Unk_020d6df413func_0200d640Ev(void *);
void _ZN12Unk_02005e7c13func_020063a0Ev(void *);
void _ZN12Unk_02005e7c13func_02005f04Ev(void *);
void _ZN12Unk_020102ec13func_02010900Ev(void *);
void func_02005ee0(void *, s32 a, u32 b);
void _ZN12Unk_02005e7c13func_02005ea0Ej(void *, s32 a);
void _ZN12Unk_0200769413func_02007c5cEv(void *);
void _ZN12Unk_02006d1413func_0200fdf4Ev(void *);
void _ZN12Unk_02006d1413func_0200fb30Ev(void *);
void _ZN12Unk_02006d1413func_0200f8c0Ev(void *);
s32 _ZN12Unk_02006d1413func_0200f870Ev(void *);
void _ZN12Unk_02006d1413func_0200ea4cEv(void *);
union PM_02005294 {
    PMRaw raw;
    void (Unk_020d6df4::*fn)();
};
extern PM_02005294 data_020d6734;
extern PM_02005294 data_020d6724;
extern PM_02005294 data_020d5fd4;
extern PM_02005294 data_020d6244;
extern PM_02005294 data_020d623c;
extern PM_02005294 data_020d6234;
extern PM_02005294 data_020d622c;
extern PM_02005294 data_020d6224;
extern PM_02005294 data_020d621c;
extern PM_02005294 data_020d6214;
extern PM_02005294 data_020d619c;
extern PM_02005294 data_020d6204;
extern PM_02005294 data_020d61fc;
extern PM_02005294 data_020d61f4;
extern PM_02005294 data_020d61c4;
extern PM_02005294 data_020d61dc;
extern PM_02005294 data_020d61e4;
extern PM_02005294 data_020d658c;
extern PM_02005294 data_020d6b94;
extern PM_02005294 data_020d6604;
extern PM_02005294 data_020d65bc;
extern PM_02005294 data_020d65e4;
extern PM_02005294 data_020d660c;
extern PM_02005294 data_020d672c;
extern PM_02005294 data_020d676c;
extern PM_02005294 data_020d6db4;
extern PM_02005294 data_020d6d8c;
extern PM_02005294 data_020d6184;
extern PM_02005294 data_020d617c;
extern PM_02005294 data_020d6174;
extern PM_02005294 data_020d616c;
extern PM_02005294 data_020d6164;
extern PM_02005294 data_020d615c;
extern PM_02005294 data_020d6154;
extern PM_02005294 data_020d614c;
extern PM_02005294 data_020d6144;
extern PM_02005294 data_020d613c;
extern PM_02005294 data_020d6134;
extern PM_02005294 data_020d612c;
extern PM_02005294 data_020d64bc;
extern PM_02005294 data_020d64ac;
extern PM_02005294 data_020d6114;
extern PM_02005294 data_020d5e5c;
extern PM_02005294 data_020d6104;
extern PM_02005294 data_020d60fc;
extern PM_02005294 data_020d60f4;
extern PM_02005294 data_020d60ec;
extern PM_02005294 data_020d60e4;
extern PM_02005294 data_020d60dc;
extern PM_02005294 data_020d60d4;
extern PM_02005294 data_020d60cc;
extern PM_02005294 data_020d60c4;
extern PM_02005294 data_020d60bc;
extern PM_02005294 data_020d60b4;
extern PM_02005294 data_020d60ac;
extern PM_02005294 data_020d60a4;
extern PM_02005294 data_020d609c;
extern PM_02005294 data_020d6094;
extern PM_02005294 data_020d5eac;
extern PM_02005294 data_020d6084;
extern PM_02005294 data_020d607c;
extern PM_02005294 data_020d6074;
extern PM_02005294 data_020d606c;
extern PM_02005294 data_020d6064;
extern PM_02005294 data_020d605c;
extern PM_02005294 data_020d6054;
extern PM_02005294 data_020d604c;
extern PM_02005294 data_020d6044;
extern PM_02005294 data_020d603c;
extern PM_02005294 data_020d6034;
extern PM_02005294 data_020d602c;
extern PM_02005294 data_020d6024;
extern PM_02005294 data_020d601c;
extern PM_02005294 data_020d6014;
extern PM_02005294 data_020d600c;
extern PM_02005294 data_020d6284;
extern PM_02005294 data_020d5fc4;
extern PM_02005294 data_020d625c;
extern PM_02005294 data_020d6254;
extern PM_02005294 data_020d5fe4;
extern PM_02005294 data_020d5fec;
extern PM_02005294 data_020d6194;
extern PM_02005294 data_020d61a4;
extern PM_02005294 data_020d61bc;
extern PM_02005294 data_020d61cc;
extern PM_02005294 data_020d61ec;
extern PM_02005294 data_020d6594;
extern PM_02005294 data_020d65f4;
extern PM_02005294 data_020d668c;
extern PM_02005294 data_020d698c;
extern PM_02005294 data_020d6d9c;
extern PM_02005294 data_020d5f84;
extern PM_02005294 data_020d5f7c;
extern PM_02005294 data_020d5f74;
extern PM_02005294 data_020d5f6c;
extern PM_02005294 data_020d5f64;
extern PM_02005294 data_020d5f5c;
extern PM_02005294 data_020d6124;
extern PM_02005294 data_020d5e64;
extern PM_02005294 data_020d5f44;
extern PM_02005294 data_020d5f3c;
extern PM_02005294 data_020d5f34;
extern PM_02005294 data_020d5f2c;
extern PM_02005294 data_020d5f24;
extern PM_02005294 data_020d5f1c;
extern PM_02005294 data_020d5f14;
extern PM_02005294 data_020d5eb4;
extern PM_02005294 data_020d5f04;
extern PM_02005294 data_020d5efc;
extern PM_02005294 data_020d5ef4;
extern PM_02005294 data_020d5ed4;
extern PM_02005294 data_020d5eec;
extern PM_02005294 data_020d5f8c;
extern PM_02005294 data_020d5f9c;
extern PM_02005294 data_020d5fa4;
extern PM_02005294 data_020d6004;
extern PM_02005294 data_020d6264;
extern PM_02005294 data_020d618c;
extern PM_02005294 data_020d61ac;
extern PM_02005294 data_020d61d4;
extern PM_02005294 data_020d659c;
extern PM_02005294 data_020d65c4;
extern PM_02005294 data_020d6dcc;
extern PM_02005294 data_020d5e84;
extern PM_02005294 data_020d5e7c;
extern PM_02005294 data_020d5e74;
extern PM_02005294 data_020d64b4;
extern PM_02005294 data_020d5e8c;
extern PM_02005294 data_020d5e94;
extern PM_02005294 data_020d5ea4;
extern PM_02005294 data_020d5ebc;
extern PM_02005294 data_020d5ecc;
extern PM_02005294 data_020d5edc;
extern PM_02005294 data_020d5f94;
extern PM_02005294 data_020d5fac;
extern PM_02005294 data_020d5fdc;
extern PM_02005294 data_020d61b4;
extern PM_02005294 data_020d65a4;
extern PM_02005294 data_020d6994;
extern PM_02005294 data_020d5e54;
extern PM_02005294 data_020d611c;
extern PM_02005294 data_020d5e9c;
extern PM_02005294 data_020d5ec4;
extern PM_02005294 data_020d5ee4;
extern PM_02005294 data_020d5fb4;
extern PM_02005294 data_020d6274;
extern PM_02005294 data_020d65ac;
}
}

// ---- unk_02005e7c.cpp
namespace nC {
extern "C" {

struct Unk_02005f50_V3 {
    s32 x, y, z;
};
struct Unk_02005f50_Area {
    s32 a[3];
    u8 e[4];
};
extern u8 data_020c64c8[];
extern u8 data_020c6434[];
extern u8 data_020c63a0[];
void func_02005ee0(void *p, u32 i, s32 force);
s32 func_020420c4(void *out, s32 v);
void func_0204ed8c(Unk_02005f50_V3 *out, s32 x, s32 y);
void func_0204ee10(s32 *x, s32 *y, Unk_02005f50_V3 *v);
s32 _ZN12Unk_02006d1413func_0200ec44Ej(void *p, s32 v);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *p, s32 v);
s32 _ZN12Unk_02006d1413func_0200ec30Ej(void *p, s32 v);
s32 _ZN12Unk_020d6df413func_0200e208Ev(void *p);
s32 _ZN12Unk_020d6df413func_0200e3c0Ej(void *p, s32 v);
void *_ZN12Unk_020d6df413func_0200e220Ei(void *p, s32 i);
s32 _ZN12Unk_02006d1413func_0200ebe8Ev();
s32 func_0208f038();
s32 func_0208f044();
s32 func_0208f050();
s32 _ZN12Unk_020102ec13func_02010a44Ev(void *p, s32 v);
s32 _ZN12Unk_02006d1413func_0200b1ecEP16Unk_0200b144_Posihis(void *p, void *v, s32 a, s32 b, s32 c, s32 d);
s32 _ZN12Unk_02006d1413func_0200a6d4EP17Unk_02006d14_Pairhjs(void *p, void *v, s32 a, s32 b, s32 c);
s32 _ZN12Unk_020d6df413func_0200ce98Ejjj(void *p, s32 a, s32 b, s32 c);
s32 func_02095574(s32 *out, s32 a, s32 b);
u8 *func_02095720(s32 v);
s32 func_0207697c(void *p);
void MI_CpuCopy8(void *dst, void *src, s32 n);
void func_ov003_022084f4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov003_02211674(void *p, void *v, s32 a, s32 b);
void func_ov003_0220eddc(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220f064(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void func_ov003_0220a710(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220a344(void *p, void *v, s32 a, s32 b, s32 c);
void func_ov003_022093bc(void *p, s32 a, void *v, s32 b, s32 c, s32 d);
void func_ov003_02208a88(void *p, void *v, s32 a, s32 b, s32 c);
void func_ov003_0220ac74(void *p, s32 a, void *v, s32 b, s32 c);
void func_ov003_0220f484(void *p, s32 a, s32 b, void *v, s32 c, s32 d);
void func_02005ee0(void *p, u32 i, s32 force);
struct Unk_02005f50_Pkt {
    u8 type;
    u8 sub;
    volatile u16 pos;
};
s32 _ZN12Unk_02006d1413func_02006d14EP17Unk_02006d14_Item(void *, void *p);
union PM_020063a0 {
    PMRaw raw;
    void (Unk_02005e7c::*fn)(s32);
};
extern PM_020063a0 data_020d671c;
extern PM_020063a0 data_020d624c;
extern PM_020063a0 data_020d5fcc;
extern PM_020063a0 data_020d6704;
extern PM_020063a0 data_020d66fc;
extern PM_020063a0 data_020d66f4;
extern PM_020063a0 data_020d66ec;
extern PM_020063a0 data_020d66e4;
extern PM_020063a0 data_020d66dc;
extern PM_020063a0 data_020d66d4;
extern PM_020063a0 data_020d66cc;
extern PM_020063a0 data_020d66c4;
extern PM_020063a0 data_020d66bc;
extern PM_020063a0 data_020d66b4;
extern PM_020063a0 data_020d66ac;
extern PM_020063a0 data_020d66a4;
extern PM_020063a0 data_020d669c;
extern PM_020063a0 data_020d6694;
extern PM_020063a0 data_020d620c;
extern PM_020063a0 data_020d6684;
extern PM_020063a0 data_020d667c;
extern PM_020063a0 data_020d6674;
extern PM_020063a0 data_020d666c;
extern PM_020063a0 data_020d6664;
extern PM_020063a0 data_020d665c;
extern PM_020063a0 data_020d6654;
extern PM_020063a0 data_020d664c;
extern PM_020063a0 data_020d6644;
extern PM_020063a0 data_020d663c;
extern PM_020063a0 data_020d6634;
extern PM_020063a0 data_020d662c;
extern PM_020063a0 data_020d6624;
extern PM_020063a0 data_020d661c;
extern PM_020063a0 data_020d6614;
extern PM_020063a0 data_020d5f54;
extern PM_020063a0 data_020d5e6c;
extern PM_020063a0 data_020d6be4;
extern PM_020063a0 data_020d65b4;
extern PM_020063a0 data_020d65cc;
extern PM_020063a0 data_020d65d4;
extern PM_020063a0 data_020d65dc;
extern PM_020063a0 data_020d65ec;
extern PM_020063a0 data_020d65fc;
extern PM_020063a0 data_020d670c;
extern PM_020063a0 data_020d6714;
extern PM_020063a0 data_020d674c;
extern PM_020063a0 data_020d6754;
extern PM_020063a0 data_020d6dbc;
extern PM_020063a0 data_020d6b8c;
extern PM_020063a0 data_020d6d94;
extern PM_020063a0 data_020d6dc4;
extern PM_020063a0 data_020d6584;
extern PM_020063a0 data_020d657c;
extern PM_020063a0 data_020d6574;
extern PM_020063a0 data_020d656c;
extern PM_020063a0 data_020d6564;
extern PM_020063a0 data_020d655c;
extern PM_020063a0 data_020d6554;
extern PM_020063a0 data_020d654c;
extern PM_020063a0 data_020d6544;
extern PM_020063a0 data_020d653c;
extern PM_020063a0 data_020d6534;
extern PM_020063a0 data_020d652c;
extern PM_020063a0 data_020d6524;
extern PM_020063a0 data_020d651c;
extern PM_020063a0 data_020d6514;
extern PM_020063a0 data_020d650c;
extern PM_020063a0 data_020d6504;
extern PM_020063a0 data_020d64fc;
extern PM_020063a0 data_020d64f4;
extern PM_020063a0 data_020d64ec;
extern PM_020063a0 data_020d64e4;
extern PM_020063a0 data_020d64dc;
extern PM_020063a0 data_020d64d4;
extern PM_020063a0 data_020d64cc;
extern PM_020063a0 data_020d64c4;
extern PM_020063a0 data_020d6bec;
extern PM_020063a0 data_020d6bdc;
extern PM_020063a0 data_020d6bd4;
extern PM_020063a0 data_020d64a4;
extern PM_020063a0 data_020d649c;
extern PM_020063a0 data_020d6494;
extern PM_020063a0 data_020d5f4c;
extern PM_020063a0 data_020d6484;
extern PM_020063a0 data_020d647c;
extern PM_020063a0 data_020d6474;
extern PM_020063a0 data_020d646c;
extern PM_020063a0 data_020d6464;
extern PM_020063a0 data_020d645c;
extern PM_020063a0 data_020d6454;
extern PM_020063a0 data_020d644c;
extern PM_020063a0 data_020d6444;
extern PM_020063a0 data_020d643c;
extern PM_020063a0 data_020d6434;
extern PM_020063a0 data_020d642c;
extern PM_020063a0 data_020d6424;
extern PM_020063a0 data_020d641c;
extern PM_020063a0 data_020d6414;
extern PM_020063a0 data_020d640c;
extern PM_020063a0 data_020d6404;
extern PM_020063a0 data_020d63fc;
extern PM_020063a0 data_020d63f4;
extern PM_020063a0 data_020d63ec;
extern PM_020063a0 data_020d63e4;
extern PM_020063a0 data_020d63dc;
extern PM_020063a0 data_020d63d4;
extern PM_020063a0 data_020d63cc;
extern PM_020063a0 data_020d63c4;
extern PM_020063a0 data_020d63bc;
extern PM_020063a0 data_020d63b4;
extern PM_020063a0 data_020d63ac;
extern PM_020063a0 data_020d63a4;
extern PM_020063a0 data_020d639c;
extern PM_020063a0 data_020d6394;
extern PM_020063a0 data_020d5f0c;
extern PM_020063a0 data_020d6384;
extern PM_020063a0 data_020d637c;
extern PM_020063a0 data_020d6374;
extern PM_020063a0 data_020d636c;
extern PM_020063a0 data_020d6364;
extern PM_020063a0 data_020d635c;
extern PM_020063a0 data_020d6354;
extern PM_020063a0 data_020d634c;
extern PM_020063a0 data_020d6344;
extern PM_020063a0 data_020d633c;
extern PM_020063a0 data_020d6334;
extern PM_020063a0 data_020d632c;
extern PM_020063a0 data_020d6324;
extern PM_020063a0 data_020d631c;
extern PM_020063a0 data_020d6314;
extern PM_020063a0 data_020d630c;
extern PM_020063a0 data_020d6304;
extern PM_020063a0 data_020d62fc;
extern PM_020063a0 data_020d62f4;
extern PM_020063a0 data_020d62ec;
extern PM_020063a0 data_020d62e4;
extern PM_020063a0 data_020d62dc;
extern PM_020063a0 data_020d62d4;
extern PM_020063a0 data_020d62cc;
extern PM_020063a0 data_020d62c4;
extern PM_020063a0 data_020d62bc;
extern PM_020063a0 data_020d62b4;
extern PM_020063a0 data_020d62ac;
extern PM_020063a0 data_020d62a4;
extern PM_020063a0 data_020d629c;
extern PM_020063a0 data_020d6294;
extern PM_020063a0 data_020d628c;
}
}

// ---- unk_02006d14.cpp
namespace nD {
extern "C" {

struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; };
struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };
struct Unk_02006d14 {
    u8 pad_000[0x7ec];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0xc80-0x800];
    s16 unk_c80;
    u8 pad_c82[2];
    u32 unk_c84;
    void func_02006d14(Unk_02006d14_Item* item);
    void func_020076f0(u32 a);
    void func_020076dc();
    void func_020076b0(u32 id);
    void func_02007c20(u32 id, u32 v);
    void func_02007694(u32 id);
    void func_02010800(u32* id);
    void func_02005e7c(u32 id);
    u32 func_02007c14(u32 id);
    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    void func_02007ca0(Unk_02006d14_Item* item, u32 v);
    void func_02007cb0(Unk_02006d14_Item* item, u32 v);
    void func_02007d14(Unk_02006d14_Item* item, u32 v);
    void func_02007df4(Unk_02006d14_Item* item, u32 v);
    void func_02008074(Unk_02006d14_Item* item, u32 v);
    void func_020082c0(Unk_02006d14_Item* item, u32 v);
    void func_020083e8(Unk_02006d14_Item* item, u32 v);
    void func_020085a4(Unk_02006d14_Item* item, u32 v);
    void func_0200870c(Unk_02006d14_Item* item, u32 v);
    void func_02008cfc(Unk_02006d14_Item* item, u32 v);
    void func_02008f1c(Unk_02006d14_Item* item, u32 v);
    void func_020092c8(Unk_02006d14_Item* item, u32 v);
    void func_02009624(Unk_02006d14_Item* item, u32 v);
    void func_020097d8(Unk_02006d14_Item* item, u32 v);
    void func_02009888(Unk_02006d14_Item* item, u32 v);
    void func_02009948(Unk_02006d14_Item* item, u32 v);
    void func_02009bdc(Unk_02006d14_Item* item, u32 v);
    void func_02009c94(Unk_02006d14_Item* item, u32 v);
    void func_02009d5c(Unk_02006d14_Item* item, u32 v);
    void func_02009fa8(Unk_02006d14_Item* item, u32 v);
    void func_0200a4f4(Unk_02006d14_Item* item, u32 v);
    void func_0200add8(Unk_02006d14_Item* item, u32 v);
    void func_0200b5e8(Unk_02006d14_Item* item, u32 v);
    void func_0200b854(Unk_02006d14_Item* item, u32 v);
    void func_0200ba00(Unk_02006d14_Item* item, u32 v);
    void func_0200bb54(Unk_02006d14_Item* item, u32 v);
    void func_0200bd2c(Unk_02006d14_Item* item, u32 v);
    void func_0200c1bc(Unk_02006d14_Item* item, u32 v);
    void func_0200c33c(Unk_02006d14_Item* item, u32 v);
    void func_0200c470(Unk_02006d14_Item* item, u32 v);
    void func_0200caf8(Unk_02006d14_Item* item, u32 v);
    void func_0200ce3c(Unk_02006d14_Item* item, u32 v);
    void func_0200cef8(Unk_02006d14_Item* item, u32 v);
    void func_0200d53c(Unk_02006d14_Item* item, u32 v);
    void func_02205e04(Unk_02006d14_Item* item, u32 v);
    void func_02206040(Unk_02006d14_Item* item, u32 v);
    void func_02206240(Unk_02006d14_Item* item, u32 v);
    void func_0220650c(Unk_02006d14_Item* item, u32 v);
    void func_0220675c(Unk_02006d14_Item* item, u32 v);
    void func_022069c8(Unk_02006d14_Item* item, u32 v);
    void func_02206ae8(Unk_02006d14_Item* item, u32 v);
    void func_02206f0c(Unk_02006d14_Item* item, u32 v);
    void func_02207224(Unk_02006d14_Item* item, u32 v);
    void func_022073d4(Unk_02006d14_Item* item, u32 v);
    void func_022076f4(Unk_02006d14_Item* item, u32 v);
    void func_02207944(Unk_02006d14_Item* item, u32 v);
    void func_02207b44(Unk_02006d14_Item* item, u32 v);
    void func_02207cbc(Unk_02006d14_Item* item, u32 v);
    void func_02207d60(Unk_02006d14_Item* item, u32 v);
    void func_02207e6c(Unk_02006d14_Item* item, u32 v);
    void func_022080a0(Unk_02006d14_Item* item, u32 v);
    void func_02208420(Unk_02006d14_Item* item, u32 v);
    void func_022086c8(Unk_02006d14_Item* item, u32 v);
    void func_022089d4(Unk_02006d14_Item* item, u32 v);
    void func_02208b04(Unk_02006d14_Item* item, u32 v);
    void func_02208ca0(Unk_02006d14_Item* item, u32 v);
    void func_02209004(Unk_02006d14_Item* item, u32 v);
    void func_02209314(Unk_02006d14_Item* item, u32 v);
    void func_02209500(Unk_02006d14_Item* item, u32 v);
    void func_022098bc(Unk_02006d14_Item* item, u32 v);
    void func_02209fc8(Unk_02006d14_Item* item, u32 v);
    void func_0220a684(Unk_02006d14_Item* item, u32 v);
    void func_0220abd4(Unk_02006d14_Item* item, u32 v);
    void func_0220ad5c(Unk_02006d14_Item* item, u32 v);
    void func_0220ae40(Unk_02006d14_Item* item, u32 v);
    void func_0220b168(Unk_02006d14_Item* item, u32 v);
    void func_0220b4c4(Unk_02006d14_Item* item, u32 v);
    void func_0220badc(Unk_02006d14_Item* item, u32 v);
    void func_0220c350(Unk_02006d14_Item* item, u32 v);
    void func_0220cfcc(Unk_02006d14_Item* item, u32 v);
    void func_0220d590(Unk_02006d14_Item* item, u32 v);
    void func_0220db5c(Unk_02006d14_Item* item, u32 v);
    void func_0220dcc4(Unk_02006d14_Item* item, u32 v);
    void func_0220de2c(Unk_02006d14_Item* item, u32 v);
    void func_0220df3c(Unk_02006d14_Item* item, u32 v);
    void func_0220e0e4(Unk_02006d14_Item* item, u32 v);
    void func_0220e4bc(Unk_02006d14_Item* item, u32 v);
    void func_0220e688(Unk_02006d14_Item* item, u32 v);
    void func_0220e844(Unk_02006d14_Item* item, u32 v);
    void func_0220ea58(Unk_02006d14_Item* item, u32 v);
    void func_0220ed5c(Unk_02006d14_Item* item, u32 v);
    void func_0220f010(Unk_02006d14_Item* item, u32 v);
    void func_0220f3cc(Unk_02006d14_Item* item, u32 v);
    void func_0220f57c(Unk_02006d14_Item* item, u32 v);
    void func_0220f86c(Unk_02006d14_Item* item, u32 v);
    void func_0220fa70(Unk_02006d14_Item* item, u32 v);
    void func_0220fdd8(Unk_02006d14_Item* item, u32 v);
    void func_02210044(Unk_02006d14_Item* item, u32 v);
    void func_022104a8(Unk_02006d14_Item* item, u32 v);
    void func_0221072c(Unk_02006d14_Item* item, u32 v);
    void func_02210bdc(Unk_02006d14_Item* item, u32 v);
    void func_02210da4(Unk_02006d14_Item* item, u32 v);
    void func_02210f7c(Unk_02006d14_Item* item, u32 v);
    void func_02211210(Unk_02006d14_Item* item, u32 v);
    void func_022115f4(Unk_02006d14_Item* item, u32 v);
    void func_02211818(Unk_02006d14_Item* item, u32 v);
    void func_02211960(Unk_02006d14_Item* item, u32 v);
    void func_02211e74(Unk_02006d14_Item* item, u32 v);
    void func_0221ece4(Unk_02006d14_Item* item, u32 v);
    void func_0221ef14(Unk_02006d14_Item* item, u32 v);
    void func_0221f0e4(Unk_02006d14_Item* item, u32 v);
    void func_0221f474(Unk_02006d14_Item* item, u32 v);
    void func_0221f6c8(Unk_02006d14_Item* item, u32 v);
    void func_0221f77c(Unk_02006d14_Item* item, u32 v);
    void func_0221f824(Unk_02006d14_Item* item, u32 v);
    void func_0221f914(Unk_02006d14_Item* item, u32 v);
    void func_0221fae0(Unk_02006d14_Item* item, u32 v);
    void func_0221fba8(Unk_02006d14_Item* item, u32 v);
    void func_0221fcbc(Unk_02006d14_Item* item, u32 v);
    void func_0221fe10(Unk_02006d14_Item* item, u32 v);
    void func_0221ff48(Unk_02006d14_Item* item, u32 v);
    void func_0222012c(Unk_02006d14_Item* item, u32 v);
    void func_02220320(Unk_02006d14_Item* item, u32 v);
    void func_02220748(Unk_02006d14_Item* item, u32 v);
    void func_02220958(Unk_02006d14_Item* item, u32 v);
    void func_02220a78(Unk_02006d14_Item* item, u32 v);
    void func_02220bd4(Unk_02006d14_Item* item, u32 v);
    void func_02220d0c(Unk_02006d14_Item* item, u32 v);
    void func_02220f38(Unk_02006d14_Item* item, u32 v);
    void func_022211ac(Unk_02006d14_Item* item, u32 v);
    void func_02221380(Unk_02006d14_Item* item, u32 v);
    void func_022214a8(Unk_02006d14_Item* item, u32 v);
    void func_02221574(Unk_02006d14_Item* item, u32 v);
    void func_0222178c(Unk_02006d14_Item* item, u32 v);
    void func_022218f0(Unk_02006d14_Item* item, u32 v);
    void func_02221b38(Unk_02006d14_Item* item, u32 v);
    void func_02221d80(Unk_02006d14_Item* item, u32 v);
    void func_02222040(Unk_02006d14_Item* item, u32 v);
    void func_022222a8(Unk_02006d14_Item* item, u32 v);
    void func_022223c4(Unk_02006d14_Item* item, u32 v);
    void func_0222255c(Unk_02006d14_Item* item, u32 v);
    void func_022226cc(Unk_02006d14_Item* item, u32 v);
    void func_0222283c(Unk_02006d14_Item* item, u32 v);
    void func_02222b74(Unk_02006d14_Item* item, u32 v);
    void func_02222dcc(Unk_02006d14_Item* item, u32 v);
    void func_02223458(Unk_02006d14_Item* item, u32 v);
    void func_0222368c(Unk_02006d14_Item* item, u32 v);
    void func_0222386c(Unk_02006d14_Item* item, u32 v);
    void func_02223ac4(Unk_02006d14_Item* item, u32 v);
    void func_02223ce4(Unk_02006d14_Item* item, u32 v);
    void func_02223e5c(Unk_02006d14_Item* item, u32 v);
    void func_02223fa8(Unk_02006d14_Item* item, u32 v);
    void func_02224284(Unk_02006d14_Item* item, u32 v);
    void func_022244d4(Unk_02006d14_Item* item, u32 v);
    void func_02224734(Unk_02006d14_Item* item, u32 v);
    void func_0226a83c(Unk_02006d14_Item* item, u32 v);
    void func_0226a940(Unk_02006d14_Item* item, u32 v);
};
typedef void (Unk_02006d14::*Unk_02006d14_Fn)(Unk_02006d14_Item*, u32);
extern Unk_02006d14_Data* data_020cbb18;
extern u32 data_020c6a18[];
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_02006d14_Data* p, u32 v);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_02006d14_Data* p, u32 v);
s32 _ZN12Unk_020cbb1813func_02072e34Ev(Unk_02006d14_Data* p);
void _ZN12Unk_0200769413func_020076f0Ej(void *, u32 a);
void _ZN12Unk_0200769413func_020076dcEv(void *);
void _ZN12Unk_0200769413func_020076b0Ej(void *, u32 id);
void _ZN12Unk_0200769413func_02007c20Ejj(void *, u32 id, u32 v);
void _ZN12Unk_0200769413func_02007694Ej(void *, u32 id);
void _ZN12Unk_020102ec13func_02010800EPj(void *, u32* id);
void _ZN12Unk_02005e7c13func_02005e7cEj(void *, u32 id);
u32 _ZN12Unk_0200769413func_02007c14Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 id);
union PM_02006d14 {
    PMRaw raw;
    Unk_02006d14_Fn fn;
};
extern PM_02006d14 data_020d6bcc;
extern PM_02006d14 data_020d6bc4;
extern PM_02006d14 data_020d6bbc;
extern PM_02006d14 data_020d6bb4;
extern PM_02006d14 data_020d6bac;
extern PM_02006d14 data_020d6ba4;
extern PM_02006d14 data_020d6b9c;
extern PM_02006d14 data_020d648c;
extern PM_02006d14 data_020d610c;
extern PM_02006d14 data_020d6b84;
extern PM_02006d14 data_020d6b7c;
extern PM_02006d14 data_020d6b74;
extern PM_02006d14 data_020d6b6c;
extern PM_02006d14 data_020d6b64;
extern PM_02006d14 data_020d6b5c;
extern PM_02006d14 data_020d6b54;
extern PM_02006d14 data_020d6b4c;
extern PM_02006d14 data_020d6b44;
extern PM_02006d14 data_020d6b3c;
extern PM_02006d14 data_020d6b34;
extern PM_02006d14 data_020d6b2c;
extern PM_02006d14 data_020d6b24;
extern PM_02006d14 data_020d6b1c;
extern PM_02006d14 data_020d6b14;
extern PM_02006d14 data_020d6b0c;
extern PM_02006d14 data_020d6b04;
extern PM_02006d14 data_020d6afc;
extern PM_02006d14 data_020d6af4;
extern PM_02006d14 data_020d6aec;
extern PM_02006d14 data_020d6ae4;
extern PM_02006d14 data_020d6adc;
extern PM_02006d14 data_020d6ad4;
extern PM_02006d14 data_020d6acc;
extern PM_02006d14 data_020d6ac4;
extern PM_02006d14 data_020d6abc;
extern PM_02006d14 data_020d6ab4;
extern PM_02006d14 data_020d6aac;
extern PM_02006d14 data_020d6aa4;
extern PM_02006d14 data_020d6a9c;
extern PM_02006d14 data_020d6a94;
extern PM_02006d14 data_020d6a8c;
extern PM_02006d14 data_020d6a84;
extern PM_02006d14 data_020d6a7c;
extern PM_02006d14 data_020d6a74;
extern PM_02006d14 data_020d6a6c;
extern PM_02006d14 data_020d6a64;
extern PM_02006d14 data_020d6a5c;
extern PM_02006d14 data_020d6a54;
extern PM_02006d14 data_020d6a4c;
extern PM_02006d14 data_020d6a44;
extern PM_02006d14 data_020d6a3c;
extern PM_02006d14 data_020d6a34;
extern PM_02006d14 data_020d6a2c;
extern PM_02006d14 data_020d6a24;
extern PM_02006d14 data_020d6a1c;
extern PM_02006d14 data_020d6a14;
extern PM_02006d14 data_020d6a0c;
extern PM_02006d14 data_020d6a04;
extern PM_02006d14 data_020d69fc;
extern PM_02006d14 data_020d69f4;
extern PM_02006d14 data_020d69ec;
extern PM_02006d14 data_020d69e4;
extern PM_02006d14 data_020d69dc;
extern PM_02006d14 data_020d69d4;
extern PM_02006d14 data_020d69cc;
extern PM_02006d14 data_020d69c4;
extern PM_02006d14 data_020d69bc;
extern PM_02006d14 data_020d69b4;
extern PM_02006d14 data_020d69ac;
extern PM_02006d14 data_020d69a4;
extern PM_02006d14 data_020d699c;
extern PM_02006d14 data_020d638c;
extern PM_02006d14 data_020d608c;
extern PM_02006d14 data_020d6984;
extern PM_02006d14 data_020d697c;
extern PM_02006d14 data_020d6974;
extern PM_02006d14 data_020d696c;
extern PM_02006d14 data_020d6964;
extern PM_02006d14 data_020d695c;
extern PM_02006d14 data_020d6954;
extern PM_02006d14 data_020d694c;
extern PM_02006d14 data_020d6944;
extern PM_02006d14 data_020d693c;
extern PM_02006d14 data_020d6934;
extern PM_02006d14 data_020d692c;
extern PM_02006d14 data_020d6924;
extern PM_02006d14 data_020d691c;
extern PM_02006d14 data_020d6914;
extern PM_02006d14 data_020d690c;
extern PM_02006d14 data_020d6904;
extern PM_02006d14 data_020d68fc;
extern PM_02006d14 data_020d68f4;
extern PM_02006d14 data_020d68ec;
extern PM_02006d14 data_020d68e4;
extern PM_02006d14 data_020d68dc;
extern PM_02006d14 data_020d68d4;
extern PM_02006d14 data_020d68cc;
extern PM_02006d14 data_020d68c4;
extern PM_02006d14 data_020d68bc;
extern PM_02006d14 data_020d68b4;
extern PM_02006d14 data_020d68ac;
extern PM_02006d14 data_020d68a4;
extern PM_02006d14 data_020d689c;
extern PM_02006d14 data_020d6894;
extern PM_02006d14 data_020d688c;
extern PM_02006d14 data_020d6884;
extern PM_02006d14 data_020d687c;
extern PM_02006d14 data_020d6874;
extern PM_02006d14 data_020d686c;
extern PM_02006d14 data_020d6864;
extern PM_02006d14 data_020d685c;
extern PM_02006d14 data_020d6854;
extern PM_02006d14 data_020d684c;
extern PM_02006d14 data_020d6844;
extern PM_02006d14 data_020d683c;
extern PM_02006d14 data_020d6834;
extern PM_02006d14 data_020d682c;
extern PM_02006d14 data_020d6824;
extern PM_02006d14 data_020d681c;
extern PM_02006d14 data_020d6814;
extern PM_02006d14 data_020d680c;
extern PM_02006d14 data_020d6804;
extern PM_02006d14 data_020d67fc;
extern PM_02006d14 data_020d67f4;
extern PM_02006d14 data_020d67ec;
extern PM_02006d14 data_020d67e4;
extern PM_02006d14 data_020d67dc;
extern PM_02006d14 data_020d67d4;
extern PM_02006d14 data_020d67cc;
extern PM_02006d14 data_020d67c4;
extern PM_02006d14 data_020d67bc;
extern PM_02006d14 data_020d67b4;
extern PM_02006d14 data_020d67ac;
extern PM_02006d14 data_020d67a4;
extern PM_02006d14 data_020d679c;
extern PM_02006d14 data_020d6794;
extern PM_02006d14 data_020d678c;
extern PM_02006d14 data_020d6784;
extern PM_02006d14 data_020d677c;
extern PM_02006d14 data_020d6774;
extern PM_02006d14 data_020d627c;
extern PM_02006d14 data_020d6764;
extern PM_02006d14 data_020d675c;
extern PM_02006d14 data_020d626c;
extern PM_02006d14 data_020d5ffc;
extern PM_02006d14 data_020d6744;
extern PM_02006d14 data_020d673c;
}
}

// ---- unk_02007694.cpp
namespace nE {
extern "C" {

struct Unk_02007ebc_Mtx {
    s32 m[12];
};
struct Unk_02007ebc_Vec {
    s32 x, y, z;
};
struct Unk_02007c5c_Mtx {
    s32 m[12];
};
class Unk_02007694;
void MI_CpuFill8(void *p, u32 v, u32 n);
void _ZN12Unk_0203223813func_020323d8Ev(void *p);
u16 func_0203ef38(void *a, void *b);
void _ZN12Unk_020102ec13func_02010a50Et(Unk_02007694 *o, u32 a);
void func_0203ee38(Unk_02007ebc_Vec *out, Unk_02007ebc_Vec *in);
s32 func_01ffc5a4(s32 a, s32 b);
void MTX_MultVec43(Unk_02007ebc_Vec *v, Unk_02007ebc_Mtx *m, Unk_02007ebc_Vec *out);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *p);
BOOL func_0206ec6c();
void func_0203d7f8();
extern u8 data_020c630c[];
extern u8 data_020c6278[];
extern u8 data_020c6840[];
extern u8 data_020c67ac[];
extern u8 data_020c6718[];
class Unk_02007694 {
public:
    
    void func_02007ca8();
    void func_02007c98();
    void func_02007c9c();
    void func_02007ca0();
    void func_02007ca4();
    void func_02007cac();
    void func_02007cb0();
    void func_0200d3f0(u32 a);
    void func_0200cee0(u32 a);
    void func_0200cdfc(u32 a);
    void func_0200c460(u32 a);
    void func_02211e04(u32 a);
    void func_0200c0b8(u32 a);
    void func_022246bc(u32 a);
    void func_02224224(u32 a);
    void func_02223ca0(u32 a);
    void func_02223a70(u32 a);
    void func_022237fc(u32 a);
    void func_0200b9bc(u32 a);
    void func_022115bc(u32 a);
    void func_0200ad58(u32 a);
    void func_0200a450(u32 a);
    void func_02222d74(u32 a);
    void func_022223a8(u32 a);
    void func_02222280(u32 a);
    void func_02221fdc(u32 a);
    void func_02221d2c(u32 a);
    void func_02221ae4(u32 a);
    void func_0222189c(u32 a);
    void func_02221768(u32 a);
    void func_02221558(u32 a);
    void func_0222148c(u32 a);
    void func_0222113c(u32 a);
    void func_02210708(u32 a);
    void func_02210404(u32 a);
    void func_020095b8(u32 a);
    void func_0220fdac(u32 a);
    void func_0220f33c(u32 a);
    void func_0220efd8(u32 a);
    void func_0220ecb8(u32 a);
    void func_0220e970(u32 a);
    void func_0220e43c(u32 a);
    void func_0220c2dc(u32 a);
    void func_0220ba90(u32 a);
    void func_0220ab20(u32 a);
    void func_0220a5e4(u32 a);
    void func_02209ef4(u32 a);
    void func_02209284(u32 a);
    void func_02208fb0(u32 a);
    void func_02208904(u32 a);
    void func_02208358(u32 a);
    void func_0220714c(u32 a);
    void func_02206e94(u32 a);
    void func_0221fa98(u32 a);
    void func_02206710(u32 a);
    void func_0220646c(u32 a);
    void func_022061e0(u32 a);
    void func_0226a910(u32 a);
    void func_0226a80c(u32 a);

    
    void func_02007694(u32 a);
    void func_020076b0(u32 a);
    void func_020076dc();
    void func_020076f0(u32 a);
    u8 func_02007c08(u32 a);
    u8 func_02007c14(u32 a);
    void func_02007c20(u32 a, u32 b);
    u8 func_02007c50(u32 a);
    void func_02007c5c();
    void func_02007cb4();
    void func_02007cdc();
    void func_02007d00(u32 a);
    void func_02007d14(Unk_0200e2c0 *p);
    u32 func_02007d30(u32 a, u32 b, u32 c);
    void func_02007d6c();
    void func_02007d88();
    void func_02007dc8(u32 a);
    void func_02007df4();
    u32 func_02007e08(u32 a, u32 b);
    void func_02007e40();
    void func_02007e5c();
    void func_02007f7c();

    
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_0201065c();
    void func_0200ce98(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_02010358(u32 a, u32 b, u32 c);
    u32 func_0200e248(Unk_0200e2c0 *p);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    BOOL func_0200f4c0(u32 a);
    void func_0200c358(u32 a, u32 b, u32 c);
    void func_02002b84(Unk_02007c5c_Mtx *out);

    u8 unk_00[0x5c];
    u8 unk_5c[0x98 - 0x5c];
    u32 unk_98;
    u8 unk_9c[8];
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 unk_b0[0xc4 - 0xb0];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 unk_d2[0x294 - 0xd2];
    Unk_02007c5c_Mtx unk_294;
    u8 unk_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 unk_2d8[0x694 - 0x2d8];
    Unk_02007ebc_Mtx unk_694;
    u8 unk_6c4[0x700 - 0x6c4];
    s32 unk_700;
    u8 unk_704[0x7a0 - 0x704];
    u8 unk_7a0[0x30];
    u8 unk_7d0[0x1c];
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u8 unk_7fc[0x820 - 0x7fc];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    u8 unk_838[0xc80 - 0x838];
    u16 unk_c80;
};
void func_02007ebc(Unk_02007ebc_Vec *out, Unk_02007694 *obj, s32 n);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 a);
void _ZN12Unk_020d5d8413func_02002b84EPv(void *, Unk_02007c5c_Mtx *out);
void _ZN12Unk_020102ec13func_020109c4Ev(void *);
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_020102ec13func_0201065cEv(void *);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200e870Ev(void *);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32 a, u32 b, u32 c);
u32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200e2c0 *p);
void _ZN12Unk_0200769413func_0200c358Etjj(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_02006d1413func_0200f4c0Ei(void *, u32 a);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 a);
union PM_020076f0 {
    PMRaw raw;
    void (Unk_02007694::*fn)(u32);
};
extern PM_020076f0 data_020d6da4;
extern PM_020076f0 data_020d6dac;
extern PM_020076f0 data_020d6d84;
extern PM_020076f0 data_020d6d7c;
extern PM_020076f0 data_020d6d74;
extern PM_020076f0 data_020d6d6c;
extern PM_020076f0 data_020d6d64;
extern PM_020076f0 data_020d6d5c;
extern PM_020076f0 data_020d6d54;
extern PM_020076f0 data_020d6d4c;
extern PM_020076f0 data_020d6d44;
extern PM_020076f0 data_020d6d3c;
extern PM_020076f0 data_020d6d34;
extern PM_020076f0 data_020d6d2c;
extern PM_020076f0 data_020d6d24;
extern PM_020076f0 data_020d6d1c;
extern PM_020076f0 data_020d6d14;
extern PM_020076f0 data_020d6d0c;
extern PM_020076f0 data_020d6d04;
extern PM_020076f0 data_020d6cfc;
extern PM_020076f0 data_020d6cf4;
extern PM_020076f0 data_020d6cec;
extern PM_020076f0 data_020d6ce4;
extern PM_020076f0 data_020d6cdc;
extern PM_020076f0 data_020d6cd4;
extern PM_020076f0 data_020d6ccc;
extern PM_020076f0 data_020d6cc4;
extern PM_020076f0 data_020d6cbc;
extern PM_020076f0 data_020d6cb4;
extern PM_020076f0 data_020d6cac;
extern PM_020076f0 data_020d6ca4;
extern PM_020076f0 data_020d6c9c;
extern PM_020076f0 data_020d6c94;
extern PM_020076f0 data_020d6c8c;
extern PM_020076f0 data_020d6c84;
extern PM_020076f0 data_020d6c7c;
extern PM_020076f0 data_020d6c74;
extern PM_020076f0 data_020d6c6c;
extern PM_020076f0 data_020d6c64;
extern PM_020076f0 data_020d6c5c;
extern PM_020076f0 data_020d6c54;
extern PM_020076f0 data_020d6c4c;
extern PM_020076f0 data_020d6c44;
extern PM_020076f0 data_020d6c3c;
extern PM_020076f0 data_020d6c34;
extern PM_020076f0 data_020d6c2c;
extern PM_020076f0 data_020d6c24;
extern PM_020076f0 data_020d6c1c;
extern PM_020076f0 data_020d6c14;
extern PM_020076f0 data_020d6c0c;
extern PM_020076f0 data_020d6c04;
extern PM_020076f0 data_020d6bfc;
extern PM_020076f0 data_020d6bf4;
}
}

// ---- unk_02008040.cpp
namespace nF {
extern "C" {

struct Unk_02008100_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 unk_0e[0x0e];
};
struct Unk_020082e4_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d[0x0f];
};
struct Unk_02008404_Msg {
    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a[0x12];
};
extern void *data_020cbb18;
extern char data_020d6ee4[];
extern char data_020d6ef4[];
extern char data_020d6f04[];
extern char data_020d6f18[];
extern char data_021f5b80[];
extern u8 data_020e416c;
u16 func_0207694c(void *);
void func_02076964(void *, u16);
s16 func_020769ac(void *);
void func_020769c4(void *, s16);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *, s32);
void _ZN12Unk_020102ec13func_02010914Ev(Unk_02008040 *);
void _ZN12Unk_020102ec13func_0201071cEv(Unk_02008040 *);
void _ZN12Unk_02006d1413func_0200ef08Ev(Unk_02008040 *);
void func_02007ebc(Unk_02008074_Vec *, Unk_02008040 *, u32);
s32 _ZN12Unk_020102ec13func_02010358Eijt(Unk_02008040 *, u32, u32, u32);
s32 _ZN12Unk_020102ec13func_020103b4Eijt(Unk_02008040 *, u32, u32, u32);
s32 _ZN12Unk_020d6df413func_0200ce98Ejjj(Unk_02008040 *, u32, u32, s32);
s32 _ZN12Unk_0200769413func_02007c08Ej(Unk_02008040 *, s32);
void _ZN12Unk_02006d1413func_0200e7f4Ev(Unk_02008040 *);
void func_ov003_02226fac(u32);
void func_ov003_02227248(u32, u32);
void func_ov003_02212034(void *, void *);
void func_ov003_022261ec(u32, void *, void *, u32);
void func_ov003_02223450(void *, s32);
void func_ov003_02223400(void *, void *, void *);
void func_ov003_0220dc0c(Unk_02008040 *, u32, u32, s32);
void func_ov003_0220c4ac(Unk_02008040 *, u32, u32, u32, u32, s32);
void func_ov003_02210628(Unk_02008040 *, u32, u32, u32, u32, u32, u32, s32);
void func_0203ee38(void *, void *);
void *_ZN12Unk_0205f8d413func_0205fbb8Ev(void *);
void func_0205e1a0(void *, u32, u32, u32);
void func_02010a7c(void *, Unk_02008040 *);
BOOL func_0204b2d4(void *);
u32 func_0204b25c(void *);
BOOL _ZN12Unk_02006d1413func_0200f660Ev(Unk_02008040 *);
void func_0203d76c();
void _ZN12Unk_02006d1413func_0200ecdcEj(Unk_02008040 *, u32);
void _ZN12Unk_02006d1413func_0200ec30Ej(Unk_02008040 *, u32);
void _ZN12Unk_02006d1413func_0200ec1cEj(Unk_02008040 *, u32);
void _ZN12Unk_02006d1413func_0200f4c0Ei(Unk_02008040 *, u32);
void *_ZN12Unk_0200e2c0C1Ev(void *);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32, u32, u32);
BOOL _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(Unk_02008040 *, void *);
void *_ZN12Unk_0200e2c0D1Ev(void *);
BOOL func_0203d820();
void func_0203d7f8();
void _ZN12Unk_020d967013func_0203e488Ei(Unk_02008040 *, Unk_020e2a30 *);
void _ZN12Unk_020d967013func_0203e47cEi(Unk_02008040 *, Unk_020e2a30 *);
void func_0202e8c8();
void func_0203a598();
void func_0203a844();
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *, u32);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
void func_020f0a68(void *, u32);
void func_02090330(u32, void *, u32, u32);
void func_02010dbc(void *, s32, u32, u32, u32);
void _ZN12Unk_020102ec13func_02010a58EPs(Unk_02008040 *, void *);
struct Unk_02008858_S16x2 {
    s16 unk_00, unk_02;
};
struct Unk_02008858_S16x3 {
    s16 unk_00, unk_02, unk_04;
};
static inline BOOL Unk_02008858_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}
}
}

// ---- unk_02008cc0.cpp
namespace nG {
extern "C" {

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_02008e50_Pay {
    u8 unk_00, unk_01, unk_02;
    u8 pad_03[0xd];
    void set(u8 a, u8 b, u8 c) { unk_00 = a; unk_01 = b; unk_02 = c; }
};
struct Unk_02008e50_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008e50_Pay unk_0c;
};
struct Unk_02008f60_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02008fa0 unk_0c;
    u8 pad_0e[0xe];
};
struct Unk_020093f4_Msg {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_0200944c unk_0c;
    u8 pad_1c[4];
};
struct Unk_02006d14_7d0 {
    union {
        struct { s16 unk_00; u8 unk_02, unk_03, unk_04, unk_05, unk_06; };
        struct { s32 w0; s32 w4; s32 w8; s32 wc; s32 w10; s32 w14; };
        struct { u16 h0, h2; u16 h4; u8 b6; };
    };
    void set_h2(s16 v) { h2 = v; }
};
struct Unk_02008ee4_Sub { s16 unk_00; s16 unk_02; void set(s16 v) { unk_02 = v; } };
struct Unk_020092c8_Flags { u8 f0 : 1; u8 f1 : 2; u8 f3 : 5; };
struct Unk_020092c8_Date { union { struct { u32 w0, w1; }; u8 b[8]; }; };
struct Unk_020092c8_Bits { u16 y : 7; u16 m : 4; u16 d : 5; };
struct Unk_020092c8_Loc { Unk_020092c8_Bits bits; u16 pad; Unk_020092c8_Date date; };
inline s32 Unk_0200905c_abs(s32 x) { return x < 0 ? -x : x; }
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[8];
      s32 unk_98;
      u8 pad_09c[0x230 - 0x9c];
      u8 unk_230[0x2cc - 0x230];
      u8 unk_2cc[4];
      s32 unk_2d0;
      u32 unk_2d4;
      u8 pad_2d8[4];
      s32 unk_2dc;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 unk_59c[0x700 - 0x59c];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 unk_7d0;
      u8 pad_7e8[4];
      u32 unk_7ec;
      u8 pad_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[4];
      s32 unk_804;
      u8 pad_808[0x818 - 0x808];
      s32 unk_818;
      u8 pad_81c[0x8e7 - 0x81c];
      u8 unk_8e7;
      u8 pad_8e8[4];
      Unk_02008e48 unk_8ec;

    BOOL func_02008cc0(s16 v);
    void func_02008cfc(Unk_02006d14_Item *item, u32 old);
    BOOL func_02008e50(u8 a, u8 b, u8 c, u32 d, s16 e);
    void func_02008e94();
    void func_02008eb4();
    void func_02008ee4();
    void func_02008f18();
    void func_02008f1c(Unk_02006d14_Item *item, u32 old);
    BOOL func_02008f60(s16 v, u32 a, u32 b);
    void func_02008fa4();
    void func_02008fd4(s32 f);
    void func_0200905c();
    void func_020090d8();
    s32 func_02009170();
    void func_020092c4();
    void func_020092c8(Unk_02006d14_Item *item, u32 old);
    BOOL func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void func_02009464();
    void func_02009484();
    void func_020095b8();

    BOOL func_0200ec44(u32 id);
    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    BOOL func_0200e248(void *msg);
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
};
extern void *data_020cbb18;
extern u32 data_020c61f0[];
extern u16 data_020c61c0[];
extern s16 data_02135f44[];
extern u8 data_020e416c;
void func_0203d76c();
s32 _ZN12Unk_020102ec13func_02010358Eijt(Unk_02006d14 *, u32, u32, u32);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(Unk_02006d14 *);
void func_0205e1a0(void *, u32, u32, u32);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *, s32);
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
void *_ZN12Unk_0200e2c0C1Ev(void *);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32, u32, u32);
void *_ZN12Unk_0200e2c0D1Ev(void *);
void _ZN12Unk_020102ec13func_02010914Ev(Unk_02006d14 *);
void _ZN12Unk_020102ec13func_0201071cEv(Unk_02006d14 *);
void _ZN12Unk_02006d1413func_0200bd60Esji(Unk_02006d14 *, u32, u32, s32);
void _ZN12Unk_0200769413func_0200c358Etjj(Unk_02006d14 *, u32, u32, s32);
s32 _ZN12Unk_020d6df413func_0200ce98Ejjj(Unk_02006d14 *, u32, u32, s32);
void func_0203da54();
void func_02010d98(void *, s32);
void _ZN12Unk_020102ec13func_02010a58EPs(Unk_02006d14 *, void *);
void _ZN12Unk_020102ec13func_020109c4Ev(Unk_02006d14 *);
void *func_0209c60c();
s32 func_0209c86c();
s32 func_02030814(u32);
s32 *func_0209c868(void *);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
void _ZN12Unk_020102ec13func_02010380Eijt(Unk_02006d14 *, u32, u32, u32);
void _ZN12Unk_020dbda413func_02053f20Ev(void *);
void _ZN12Unk_02006d1413func_0200f32cEv(Unk_02006d14 *);
s32 func_020b50e8();
void func_02010e48(void *, s32);
s32 func_020e9688(void *);
s32 func_020e9650(void *, void *);
s32 func_02010d50(s32 v, s32 min);
s32 func_02010d68(s32, s32);
s32 func_020e7b98(s32, s32);
void _ZN12Unk_020102ec13func_02010a34EPj(Unk_02006d14 *, void *);
BOOL _ZN12Unk_02006d1413func_0200e7c0Ev(Unk_02006d14 *);
void *func_02010d20(Unk_02006d14 *);
void func_0209d498(void *);
u8 *func_020952c8();
void func_0209d164(void *, s32);
void _ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(void *, Unk_020092c8_Bits);
void _ZN12Unk_02006d1413func_0200ef08Ev(Unk_02006d14 *);
void func_020946f0(u32, s32);
void _ZN12Unk_02006d1413func_0200f4c0Ei(Unk_02006d14 *, u32);
void _ZN12Unk_02006d1413func_02010284EiPv(Unk_02006d14 *, u32, u32);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
void func_02097520(s32);
u16 *_ZN12Unk_0209865c13func_02098744Ev();
void _ZN12Unk_02006d1413func_0200eb58Ejj(Unk_02006d14 *, u32, u32);
void _ZN12Unk_02006d1413func_0200bd60Esji(Unk_02006d14 *, u32, u32, s32);
BOOL _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, void *msg);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 id);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, u32 id);
s32 _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 id);
s32 _ZN12Unk_0200769413func_02007c08Ej(void *, s32 v);
}
}

// ---- unk_020095f8.cpp
namespace nH {
extern "C" {

struct Unk_02009d5c_Sub { u32 unk_00; u8 unk_04; u32 unk_08; u32 unk_0c; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; Unk_02009d5c_Sub unk_0c; };
struct Unk_0200e2e0 { u8 pad_00[0xc]; Unk_02009d5c_Sub unk_0c; };
struct Unk_02009a78_Vec { s32 x, y, z; };
struct Unk_02009624_Pair { u32 unk_00; u16 unk_04; u8 unk_06; };
extern u8 data_020e416c;
struct Unk_02006d14_Data;
extern Unk_02006d14_Data* data_020cbb18;
extern s16 data_02135f44[];
extern u32 data_020d5e4c[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 _s32_div_f(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
u16 func_0207694c(void* p);
void func_02076964(void* p, u32 v);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_02006d14_Data* p, u32 v);
void _ZN12Unk_0209865c13func_02098738EPt(void* p, void* q);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void* p);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void* p, u32 v);
void _ZN12Unk_020dbda413func_02053f20Ev(void* p);
u32 func_02057278(u16* p);
u32 func_020572b0(u32 v);
u32 func_020572e0(void* p);
BOOL func_02057304(Unk_02009a78_Vec* p);
BOOL func_02057328(void* p);
u32 func_02057378(void* p);
u32 func_020573b4();
u32 func_020573cc(u32 a, void* p);
u32 func_020573f4(void* p);
void func_02057418(void* p, u32 a, u8 b, u32 c, void* d, u32 e);
void _ZN12Unk_0200e2c0C1Ev(Unk_0200e2e0* p);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Unk_0200e2e0* p, u32 a, u32 b, u32 c);
void _ZN12Unk_0200e2c0D1Ev(Unk_0200e2e0* p);
void func_02010a7c(u16* out, void* p);
void _ZN12Unk_020102ec13func_02010a58EPs(void* p, void* q);
s32 _ZN12Unk_020102ec13func_02010a34EPj(void* p, void* q);
s32 func_02010d68(s32 a, s32 b);
void func_02010d98(void* out, s32 a);
void func_02009e5c(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d);
void func_02009bfc(u32* p);
void func_020096d0(void* p, u16* out);
void func_020096e0(void* p, u32 v);
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02009a78_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0x230 - 0x9c];
    u8 unk_230[0x9c];
    u8 unk_2cc[4];
    u32 unk_2d0;
    u32 unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x700 - 0x2e0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02009624_Pair unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x81c - 0x800];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x82c - 0x820];
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e7 - 0x838];
    s8 unk_8e7;
    u8 pad_8e8[4];
    u8 unk_8ec[4];

    s32 func_020095f8(u32 a);
    void func_02009624(Unk_02006d14_Item* item, u32 old);
    s32 func_020096e8(u16 a, u32 b, u32 c);
    void func_02009724();
    void func_02009740();
    void func_020097d8(Unk_02006d14_Item* item, u32 old);
    s32 func_02009800(u32 a, u32 b);
    void func_02009838();
    void func_02009854();
    void func_02009888(Unk_02006d14_Item* item, u32 old);
    s32 func_020098a4(u32 a, u32 b);
    void func_020098dc();
    void func_020098f8();
    void func_02009948(Unk_02006d14_Item* item, u32 old);
    s32 func_0200995c(u32 a, u32 b);
    void func_02009994();
    void func_020099dc();
    void func_02009a38();
    void func_02009a78();
    s32 func_02009bd0(u32 a);
    void func_02009bdc(Unk_02006d14_Item* item, u32 old);
    s32 func_02009c04(u32 a, u32 b);
    void func_02009c3c();
    void func_02009c58();
    void func_02009c94(Unk_02006d14_Item* item, u32 old);
    s32 func_02009cb0(u32 a, u32 b);
    void func_02009ce8();
    void func_02009d04();
    void func_02009d2c();
    void func_02009d5c(Unk_02006d14_Item* item, u32 old);
    s32 func_02009df8(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void func_02009e68();
    void func_02009d58();
    void func_02009c90();
    void func_02009944();
    void func_02009884();
    void func_020097d4();
    void func_02009ed8();

    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_0200e248(Unk_0200e2e0* p);
    void func_0200ecdc(u32 a);
    void func_02010914();
    void func_0201071c();
    void func_020109c4();
    void func_020109ac();
    u32 func_02007c08(u32 a);
    void func_0200bd60(u32 a, u32 b, s32 c);
    void func_0200f32c();
    void func_0200ec1c(u32 a);
    void func_0200f004(u32 a);
    void func_0200eee4(u32* p);
    void func_0200a82c(u8* p, u32 a);
    void func_0200a7b4();
    void* func_02010d20();
    s32 func_0200e35c(s16* a, Unk_02009a78_Vec* b, s32* c, s16* d);
};
void func_020096d0(void* p, u16* out);
void func_020096e0(void* p, u32 v);
void func_02009bfc(u32* p);
void func_02009e5c(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d);
static inline BOOL Unk_02009624_Check()
{
    if (data_020e416c == 0) {
        return TRUE;
    }
    return FALSE;
}
struct Unk_02009a78_Locals { Unk_02009a78_Vec cur; Unk_02009a78_Vec pos; Unk_02009a78_Vec diff; };
void* func_02010d20(void *);
s32 _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 a);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200e2e0* p);
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
u32 _ZN12Unk_0200769413func_02007c08Ej(void *, u32 a);
void _ZN12Unk_02006d1413func_0200bd60Esji(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_020102ec13func_020109c4Ev(void *);
void _ZN12Unk_020102ec13func_020109acEv(void *);
void _ZN12Unk_02006d1413func_0200f32cEv(void *);
s32 _ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(void *, s16* a, Unk_02009a78_Vec* b, s32* c, s16* d);
s32 _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200a82cEPhh(void *, u8* p, u32 a);
void _ZN12Unk_02006d1413func_0200eee4EPi(void *, u32* p);
void _ZN12Unk_02006d1413func_0200a7b4Ev(void *);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 a);
void _ZN12Unk_02006d1413func_0200f004Ejz(void *, u32 a);
}
}

// ---- unk_02009f68.cpp
namespace nI {
extern "C" {

struct Unk_02009f68_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; s16 unk_08; u8 pad_0a[2]; union { Unk_02009f68_Bytes unk_0c; u8 unk_0c_raw[8]; }; };
struct Unk_0200a0a0_Bytes { u8 unk_0; u8 unk_1; u8 unk_2; u8 pad_3[13]; };
struct Unk_0200a63c_St { u8 unk_0; u8 unk_1[2]; u8 unk_3; u8 unk_4; };
struct Unk_0200a728_St { u16 unk_0; u8 unk_2; u8 unk_3; u8 unk_4; u8 pad_5[15]; };
struct Unk_02006d14_Trip { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_St7d0 {
    u8 unk_0; u8 unk_1; u8 unk_2; u8 unk_3;
    u8 pad_4[4];
    u8 unk_8; u8 unk_9; u8 unk_a;
};
struct Unk_0200a6d4_St { u8 pad[16]; };
struct Unk_0200a050_Obj { u8 pad[12]; };
struct Unk_02006d14_Ptr { u32 unk_0; u32 unk_4; u32 unk_8; };
struct Unk_02006d14_Obj2cc { u8 pad[8]; u32 unk_8; };
struct Unk_02006d14_Blk30 { u32 w[12]; };
struct Unk_02006d14_Obj59c { u8 pad[4]; };
struct Unk_02006d14_Objec { u8 pad[4]; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Base0 {
    u8 pad_000[0xc4];
    Unk_02006d14_Trip unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14 : Unk_02006d14_Base0, Unk_02006d14_Objec {
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_02006d14_Ptr* unk_128;
    u8 pad_12c[0x2cc - 0x12c];
    u8 unk_2cc[8];
    struct { u32 lo : 12; u32 mid : 16; u32 hi : 4; } unk_2d4;
    u8 pad_2d8[4];
    u32 unk_2dc;
    u8 pad_2e0[0x59c - 0x2e0];
    u8 unk_59c[4];
    u8 pad_5a0[0x700 - 0x5a0];
    u32 unk_700;
    u8 pad_704[0x7d0 - 0x704];
    Unk_02006d14_St7d0 unk_7d0;
    u8 pad_7dc[0x7ec - 0x7dc];
    u32 unk_7ec;
    u32 unk_7f0;
    u32 unk_7f4;
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x80c - 0x800];
    s32 unk_80c;
    u8 pad_810[8];
    s32 unk_818;
    u16 unk_81c;
    u16 unk_81e;
    u8 unk_820[12];
    u32 unk_82c, unk_830, unk_834;
    u8 pad_838[0x8e8 - 0x838];
    u8 unk_8e8;
    u8 pad_8e9[3];
    Unk_0200a63c_St unk_8ec;
    u8 pad_8f1[0xc80 - 0x8f1];
    s16 unk_c80;

    void func_02009f68(s16 v);
    void func_02009fa8(Unk_02006d14_Item* item, u32 v);
    void func_0200a0ac();
    void func_0200a114();
    void func_0200a198();
    void func_0200a1bc();
    void func_0200a390();
    void func_0200a450();
    void func_0200a484(s16 v);
    void func_0200a4f4(Unk_02006d14_Item* item, u32 v);
    s32 func_0200a684(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 func_0200a6d4(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void func_0200a73c();
    void func_0200a7b4();
    void func_0200a82c(u8* state, u8 flag);
    s32 func_0200a050(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);

    void func_0200ec30(u32 id);
    void func_0200ec1c(u32 id);
    void func_0200ecdc(u32 id);
    BOOL func_0200ec44(u32 id);
    u8 func_02007c08(u32 id);
    s32 func_0200f5b0();
    void func_02010358(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void func_0200abc8();
    void func_0200ad24();
    void func_0200e7f4();
    void func_0200f004(u32 v);
    void func_0200f4c0(u32 v);
    void func_0200eee4(Unk_02006d14_Pair* p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    s32 func_0200e248(Unk_0200a050_Obj* o);
    void func_0203e488(Unk_02006d14_Objec* p);
    void func_0203e47c(Unk_02006d14_Objec* p);
};
struct Unk_02006d14_Data { u8 pad_00[0x64]; u32 unk_64; };
static inline BOOL Unk_0200a114_IsZero(u8* p)
{
    if (*p == 0) return TRUE;
    return FALSE;
}
void func_0200a034(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b);
void func_0200a044(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void func_0200a0a0(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void func_0200a63c(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void func_0200a660(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void func_0200a728(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
extern Unk_02006d14_Data* data_020cbb18;
extern u8 data_020e416c[];
extern u8 data_020d6ee4[];
extern u8 data_020d6ef4[];
extern void* data_021c47c4;
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_02006d14_Data* p, u32 v);
void _ZN12Unk_0200e2c0C1Ev(Unk_0200a050_Obj* o);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(Unk_0200a050_Obj* o, u32 a, u32 b, s16 c);
void _ZN12Unk_0200e2c0D1Ev(Unk_0200a050_Obj* o);
void func_02045460(Unk_02006d14_Pair* p, u32 v);
void func_02045570(Unk_02006d14_Pair* p, u32 v);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void* p, u32 v);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void* p);
void func_0205e1a0(void* p, u32 a, u32 b, u32 c);
void _ZN12Unk_020e2a3013func_020a710cEPKc(void* p, void* q);
void func_0204ed8c(void* p, u32 a, u32 b);
BOOL func_0204b2d4(u16* p);
s32 func_0204b25c(u16* p);
void* func_0204eba0(void* a, void* b, u32 c);
u16 func_0207694c(u8* p);
void func_02076964(u8* p, u16 v);
void func_02034d70(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
BOOL func_0203d820();
BOOL func_0203d7ec();
void func_0203d7f8();
void func_0203a598();
void func_0203a844();
BOOL func_02095e8c();
void func_02099124(u16* p);
BOOL func_0206e780(u32 v);
BOOL func_0206ec6c();
BOOL func_0206ed18();
s32 func_02042ba8(u32 a, u32 b);
void func_0200a034(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b);
void func_0200a044(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void func_0200a0a0(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b);
void func_0200a63c(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b);
void func_0200a660(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void func_0200a728(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 id);
void _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200a050_Obj* o);
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_02006d1413func_0200eee4EPi(void *, Unk_02006d14_Pair* p);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 id);
u8 _ZN12Unk_0200769413func_02007c08Ej(void *, u32 id);
void _ZN12Unk_020d967013func_0203e488Ei(void *, Unk_02006d14_Objec* p);
void _ZN12Unk_020d967013func_0203e47cEi(void *, Unk_02006d14_Objec* p);
void _ZN12Unk_02006d1413func_0200e7f4Ev(void *);
void _ZN12Unk_02006d1413func_0200f004Ejz(void *, u32 v);
void _ZN12Unk_02006d1413func_0200f4c0Ei(void *, u32 v);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200ad24EP17Unk_02006d14_Itemj(void *);
void _ZN12Unk_020102ec13func_0201065cEv(void *);
void _ZN12Unk_02006d1413func_0200abc8Ev(void *);
void _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(void *, u32 a, u32 b, s32 c);
}
}

// ---- unk_0200abc8.cpp
namespace nJ {
extern "C" {

struct Unk_0200b244_Out { u16 unk_00; u16 pad_02; s32 unk_04; u8 unk_08; u8 unk_09; u8 unk_0a; };
struct Unk_0200b144_Src { u8 unk_00; u8 unk_01; u8 unk_02; s8 unk_03; u8 unk_04; u8 unk_05; };
struct Unk_02006d14_Item { u32 unk_00; u32 unk_04; u32 unk_08; Unk_0200b244_Out unk_0c; };
struct Unk_02006d14_V3 { s32 x; s32 y; s32 z; };
struct Unk_02006d14_Blk { u32 w[12]; };
struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Sub7d0 {
    u8 unk_00;
    u8 pad_01[3];
    union { s32 s; struct { u8 unk_04, unk_05, unk_06, unk_07; } b; } unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
};
struct Unk_0203d820_Ptr { u32 unk_00; u32 unk_04; u32 unk_08; };
struct Unk_02006d14_A {
    virtual void vfunc_00();
    u8 pad_04[0xc4 - 4];
    Unk_02006d14_V3 unk_c4;
    s16 unk_d0;
    u8 pad_d2[0xec - 0xd2];
};
struct Unk_02006d14_B {
    virtual void vfunc_00();
    u8 pad_f0[0x10a - 0xf0];
    u8 unk_10a;
    u8 pad_10b[0x128 - 0x10b];
    Unk_0203d820_Ptr* unk_128;
    u8 pad_12c[0x294 - 0x12c];
    Unk_02006d14_Blk unk_294;
    u8 pad_2c4[0x2cc - 0x2c4];
    u8 unk_2cc[8];
    u32 unk_2d4;
    u8 pad_2d8[0x694 - 0x2d8];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x700 - 0x6c4];
};
struct Unk_02006d14 : Unk_02006d14_A, Unk_02006d14_B {
    u32 unk_700;
    u8 pad_704[0x7d0-0x704];
    Unk_02006d14_Sub7d0 unk_7d0;
    u8 pad_7dc[0x7ec-0x7dc];
    u32 unk_7ec;
    u8 pad_7f0[0x7f8-0x7f0];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 pad_800[0x810-0x800];
    u32 unk_810;
    u8 pad_814[0x81c-0x814];
    u16 unk_81c;
    u16 unk_81e;
    u32 unk_820;
    u32 unk_824;
    u32 unk_828;
    u32 unk_82c;
    u32 unk_830;
    u32 unk_834;
    u8 pad_838[0x8e8-0x838];
    u8 unk_8e8;
    void func_02010914();
    void func_0200ecdc(u32 id);
    void func_0200ec1c(u32 id);
    void func_0200ec30(u32 id);
    void func_0200b264(Unk_02006d14_Item* item, u32 old);
    void func_0200add8(Unk_02006d14_Item* item, u32 old);
    void func_02010358(u32 a, u32 b, u32 c);
    s32 func_0200f5b0();

    void func_0200b2e0();
    void func_0200abc8();
    void func_0200b510();
    void func_0201071c();
    void func_0200eee4(Unk_0200b144_Pos* pos);
    u32 func_02007c08(u32 id);
    void func_0200ce98(u32 a, u32 b, s32 c);
    void func_0200a6d4(Unk_0200b144_Pos* pos, u32 a, u32 b, s32 c);
    void func_0200e7f4();
    void func_0200f004(u32 a);
    void func_0200ad24(Unk_02006d14_Item* item, u32 old);
    void func_0200ad58(Unk_02006d14_Item* item, u32 old);
    void func_0200ad64(s16 old);
    s32 func_0200b198(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 func_0200b1ec(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
};
extern void* data_020cbb18;
extern u8 data_020d6ef4[];
extern u8 data_020d6ee4[];
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void* p, u32 v);
BOOL func_0203d820();
void func_0203d7f8();
void func_0204ed8c(void* p, u32 a, u32 b);
u16* func_0204eba0(void* p, void* q, u32 z);
void* func_0209750c();
BOOL _ZN12Unk_02097ff413func_02098044Ej(void* p, u32 v);
void _ZN12Unk_02097ff413func_0209801cEj(void* p, u32 v);
void func_02045460(Unk_0200b144_Pos* p, u32 z);
void func_02045570(Unk_0200b144_Pos* p, u32 z);
void func_0207870c(void* p);
void func_0205e1a0(void* p, u32 a, u32 b, u32 c);
extern void* data_021c47c4;
BOOL func_0204b2d4(void* p);
u32 func_0204b25c(void* p);
void _ZN12Unk_020d967013func_0203e488Ei(Unk_02006d14_A* a, Unk_02006d14_B* b);
void _ZN12Unk_020d967013func_0203e47cEi(Unk_02006d14_A* a, Unk_02006d14_B* b);
void _ZN12Unk_020e2a3013func_020a710cEPKc(void* p, void* q);
Unk_02006d14_V3* func_ov004_022344a4();
s32 _s32_div_f(s32 a, s32 b);
u32 _ZN12Unk_020dbe7c13func_020565e8Ei(void* p, u32 id);
u16 func_0207694c(void* p);
void func_02076964(void* p, u32 v);
void _ZN12Unk_0200e2c0C1Ev(void* p);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void* p, u32 a, s32 b, s16 c);
s32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void* self, void* p);
void _ZN12Unk_0200e2c0D1Ev(void* p);
void func_0200b170(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c);
void func_0200b144(Unk_0200b144_Src* src, Unk_0200b144_Pos* pos, s8* a, u16* b, u8* c);
void func_0200b170(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c);
void func_0200b244(Unk_0200b244_Out* out, Unk_0200b144_Pos* pos, s32 a, s32 b, u8 c);
static inline BOOL Unk_0200add8_R1(u16* p, u32 lo, u32 hi) { BOOL r = FALSE; if (*p >= lo && *p <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_InRange(u32 c, u32 lo, u32 hi) { BOOL r = FALSE; if (c >= lo && c <= hi) r = TRUE; return r; }
static inline BOOL Unk_0200add8_IsFFF1(u16* p, u16* t) {
    BOOL r;
    if (func_0204b2d4(p)) {
        *t = 0xfff1;
        r = func_0204b25c(p) == func_0204b25c(t) ? TRUE : FALSE;
    } else {
        r = *p == 0xfff1 ? TRUE : FALSE;
    }
    return r;
}
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 id);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 id);
void _ZN12Unk_02006d1413func_0200b510Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_02006d1413func_0200eee4EPi(void *, Unk_0200b144_Pos* pos);
u32 _ZN12Unk_0200769413func_02007c08Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200a6d4EP17Unk_02006d14_Pairhjs(void *, Unk_0200b144_Pos* pos, u32 a, u32 b, s32 c);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 id);
void _ZN12Unk_02006d1413func_0200e7f4Ev(void *);
void _ZN12Unk_02006d1413func_0200f004Ejz(void *, u32 a);
void _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
}
}

// ---- unk_0200b510.cpp
namespace nK {
extern "C" {

struct Unk_02006d14_Vec { s32 x, y, z; };
struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_0200b76c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b7bc unk_0c;
    u8 pad_14[8];
};
struct Unk_0200b868_Msg {
    u32 unk_00, unk_04, unk_08;
    u8 pad_0c[0x14];
};
struct Unk_0200ba8c_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200b750 unk_0c;
    u8 pad_14[0x8];
};
struct Unk_0200bd60_Msg {
    u32 unk_00, unk_04, unk_08;
    Unk_0200bda0 unk_0c;
    u8 pad_0e[0xe];
};
static inline void func_0200bc78_sub(Unk_02006d14_Vec *o, Unk_02006d14_Vec *a, Unk_02006d14_Vec *b) {
    o->x = a->x - b->x;
    o->z = a->z - b->z;
}
struct Unk_0200bc78_Vec : Unk_02006d14_Vec { Unk_0200bc78_Vec() {} };
class Unk_0200bc78_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual Unk_02006d14_Vec *vfunc_50();
};
struct Unk_0200bc08_Obj {
    u32 unk_00, unk_04, unk_08;
};
struct Unk_02006d14_7d0 {
    union {
        struct { s32 w0; u8 b4, b5, b6; };
        struct { u8 c0, c1; };
    };
};
struct Unk_0200b908_Obj { u32 unk_00; u8 pad_04[8]; volatile u32 unk_0c; u8 pad_10[8]; u8 unk_18; };
class Unk_02006d14 {
public:
      u8 pad_000[0x5c];
      Unk_02006d14_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[0x16c - 0x90 - 0];
      s32 unk_16c;
      u8 pad_170[0x2cc - 0x170];
      u8 unk_2cc[4];
      s32 unk_2d0;
      u32 unk_2d4;
      u8 pad_2d8[8];
      u8 unk_2e0;
      u8 pad_2e1[0x59c - 0x2e1];
      u8 pad_59c[0x6dc - 0x59c];
      u8 unk_6dc[0x6fc - 0x6dc];
      u8 unk_6fc[4];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_02006d14_7d0 unk_7d0;
      s32 unk_7d8;
      u8 pad_7dc[0x7ec - 0x7dc];
      u32 unk_7ec;
      u8 pad_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[0x814 - 0x800];
      s32 unk_814;
      u8 pad_818[4];
      u16 unk_81c;
      u16 unk_81e;
      u8 unk_820[0x82c - 0x820];
      s32 unk_82c, unk_830, unk_834;
      u8 pad_838[0x8ec - 0x838];
      Unk_0200b750 unk_8ec;
      u8 pad_8f4[0x904 - 0x8f4];
      Unk_0200b908_Obj *unk_904;
      u8 unk_908[0x92d - 0x908];
      u8 unk_92d;
      u8 pad_92e[2];
     

    void func_0200b510();
    void func_0200b578(s16 v);
    void func_0200b5e8(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b76c(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void func_0200b7c8();
    void func_0200b7e4();
    void func_0200b80c();
    s32 func_0200b848(u32 v);
    void func_0200b854(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b868(u32 a, u32 b);
    void func_0200b8a0();
    void func_0200b8c0();
    void func_0200b908();
    void func_0200b9bc();
    s32 func_0200b9cc(s16 v);
    void func_0200ba00(Unk_02006d14_Item *item, u32 old);
    s32 func_0200ba8c(u8 a, u8 b, u32 c, s16 d);
    void func_0200bad0();
    void func_0200bb08();
    s32 func_0200bb48(u32 v);
    void func_0200bb54(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200bb68(u32 a, u32 b);
    void func_0200bbb0();
    void func_0200bc08();
    void func_0200bc78();
    void func_0200bcec();
    void func_0200bd18(u32 v);
    void func_0200bd2c(Unk_02006d14_Item *item, u32 old);
    s32 func_0200bd60(s16 a, u32 b, s32 c);
    void func_0200bda4();
    void func_0200bdcc();

    s32 func_0200bff8();
    void func_0200be7c();
    void func_0200be2c();
    void func_0201071c();
    void func_02010914();
    s32 func_0200ef08();
    void func_020109c4();
    void func_0200ec1c(u32 id);
    BOOL func_0200ec44(u32 id);
    void func_0200e870();
    void func_0200ecdc(u32 id);
    s32 func_0200f5b0();
    s32 func_02007c08(s32 v);
    s32 func_020103b4(u32 a, u32 b, u32 c);
    s32 func_02010358(u32 a, u32 b, u32 c);
    s32 func_020103dc(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
    s32 func_0200b1ec(Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
    s32 func_0200c358(u32 a, u32 b, s32 c);
    BOOL func_0200e248(void *msg);
    void func_02010a58(void *p);
};
extern u8 data_020e416c;
extern void *data_021c47c4;
extern void *data_020cbb18;
extern u8 data_020c61d0[];
extern u16 data_021f47d8[];
s32 func_02098ffc();
BOOL func_020b52f8();
void func_0204ed8c(void *, u32, u32);
u16 *func_0204eba0(void *, void *, u32);
void func_ov004_022344e8(s32, void *, void *);
u32 func_020b0f54();
void func_0205e1a0(void *, u32, u32, u32);
void *_ZN12Unk_0200e2c0C1Ev(void *);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32, u32, s32);
void *_ZN12Unk_0200e2c0D1Ev(void *);
BOOL _ZN12Unk_020dbe7c13func_02056654Ev(void *);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *, u32);
void func_02090330(u32, void *, u32, u32);
u32 func_0205c240(void *);
void _ZN12Unk_02019e2c13func_02019e34EPvsit(void *, void *, s32, u32, u32);
void _ZN12Unk_02019e2c13func_0201a040EP18Unk_02019e2c_Entryi(void *, void *, u32);
void _ZN12Unk_02019e2c13func_02019e2cEv(void *);
void *func_02018984(u32);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *, s32);
void *func_0203d608();
void *func_0208169c(void *);
s32 func_020e7b98(s32, s32);
void func_02010d98(void *, s32);
void func_02094c38();
void _ZN12Unk_020102ec13func_02010914Ev(void *);
s32 _ZN12Unk_02006d1413func_0200b1ecEP16Unk_0200b144_Posihis(void *, Unk_0200b750_Pair pr, s32 a, s32 b, u32 c, s32 d);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 id);
s32 _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
BOOL _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, void *msg);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 id);
s32 _ZN12Unk_02006d1413func_0200ef08Ev(void *);
s32 _ZN12Unk_0200769413func_0200c358Etjj(void *, u32 a, u32 b, s32 c);
s32 _ZN12Unk_020102ec13func_020103dcEijhijti(void *, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
s32 _ZN12Unk_0200769413func_02007c08Ej(void *, s32 v);
void _ZN12Unk_020102ec13func_020109c4Ev(void *);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, u32 id);
void _ZN12Unk_020102ec13func_02010a58EPs(void *, void *p);
void _ZN12Unk_02006d1413func_0200e870Ev(void *);
s32 _ZN12Unk_0200769413func_0200bff8Ev(void *);
void _ZN12Unk_0200769413func_0200be7cEv(void *);
void _ZN12Unk_0200769413func_0200be2cEv(void *);
}
}

// ---- unk_0200be2c.cpp
namespace nL {
extern "C" {

struct Unk_0200bff8_Vec {
    s32 x, y, z;
};
class Unk_02007694;
u16 func_0207694c(void *p);
void func_02076964(void *p, u32 a);
void func_02090330(u32 id, void *a, void *b, u32 c);
void func_0209028c(u32 id, void *a, u32 b, u32 c);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *p, u32 a);
void *func_02097520(u32 a);
void func_0209875c(void *p, u32 a);
u32 _ZN12Unk_0209865c13func_02098868Ev(void *p);
void _ZN12Unk_0205d34013func_0205d354Ej(void *p, u32 a);
void func_02078328();
BOOL _ZN12Unk_020cbb1813func_020729bcEj(u32 a, u32 b);
void func_02010d98(void *p, s32 a);
void func_02010cb0(u16 *out, Unk_02007694 *o);
s32 func_02010d44(s32 a, u32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_0209750c();
u32 _ZN12Unk_0209865c13func_020987a0Ev(void *p);
BOOL func_02063b8c(u32 a);
s32 func_020e780c(s32 a, s32 b);
void func_ov003_02207790(Unk_02007694 *o, u32 a, s32 b);
extern u32 data_020cbb18;
extern u8 data_020e416c;
extern s16 data_02135f44[];
extern u8 data_020d5e3c[];
extern u8 data_020d5e44[];
class Unk_02007694 {
public:
    void func_0200be2c();
    void func_0200be7c();
    void func_0200bf48();
    void func_0200bf90();
    void func_0200bfc0();
    void func_0200bff8();
    void func_0200c0b8(u32 a);
    void func_0200c180(s16 a);
    void func_0200c1bc(Unk_0200e2c0 *p);
    void func_0200c304();
    void func_0200c328(u32 a);
    void func_0200c33c(Unk_0200e2c0 *p);
    u32 func_0200c358(u16 a, u32 b, u32 c);
    void func_0200c39c();
    void func_0200c3c8();
    void func_0200c410();
    void func_0200c460(u32 a);
    void func_0200c46c();
    void func_0200c470(Unk_0200e2c0 *p);
    u32 func_0200c5b0(u16 a, u32 b, u32 c);
    void func_0200c5f4();
    void func_0200c67c(u8 *p);
    void func_0200c698(s16 *p);
    u32 func_0200c2b4(u16 a, u32 b, u32 c, u32 d, s16 e);

    
    void func_02010a58(s16 *p);
    void func_020105a8(void *a, u8 *b);
    void func_02010564(void *a, u8 *b);
    void func_02010914();
    void func_020109c4();
    void func_020109ac();
    void func_0201071c();
    void func_0201065c();
    void func_020102ec();
    void func_02010050(u16 *p);
    BOOL func_0201000c();
    u32 func_02010c9c();
    u32 func_02010c88();
    BOOL func_0200fab8(u16 *a, u32 b, u32 c, u32 d);
    BOOL func_0200fd90(u16 *a);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    void func_0200eb18();
    void func_0200eb58(u32 a, u32 b);
    BOOL func_0200ef08();
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010358(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_0200e8d0();
    u32 func_0200e248(Unk_0200e2c0 *p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    u8 func_02007c08(u32 a);
    void func_02010a34(s32 *p);
    void func_0200ca60();
    void func_0200c7dc();
    void func_0200c778();
    u8 func_0200c900();
    s32 func_0200d640();
    u16 func_0200d5fc();
    void func_0200ff08();

    u8 unk_00[0x5c];
    u8 unk_5c[0x8e - 0x5c];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[2];
    s32 unk_98;
    u8 unk_9c[0x2cc - 0x9c];
    u8 unk_2cc[0x2e0 - 0x2cc];
    u8 unk_2e0;
    u8 unk_2e1[0x6c4 - 0x2e1];
    Unk_0200bff8_Vec unk_6c4;
    Unk_0200bff8_Vec unk_6d0;
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 unk_704[5];
    u8 unk_709[0x7d0 - 0x709];
    Unk_0200c288 unk_7d0;
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 unk_800[0x8e4 - 0x800];
    u8 unk_8e4;
    u8 unk_8e5[0x8ec - 0x8e5];
    Unk_0200c24c unk_8ec;
};
void _ZN12Unk_020102ec13func_02010a58EPs(void *, s16 *p);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, u32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, u32 a);
void _ZN12Unk_020102ec13func_020105a8EPiPh(void *, void *a, u8 *b);
void _ZN12Unk_020102ec13func_02010564EPiPh(void *, void *a, u8 *b);
u32 func_02010c9c(void *);
u32 func_02010c88(void *);
BOOL _ZN12Unk_02006d1413func_0200fab8EPthhh(void *, u16 *a, u32 b, u32 c, u32 d);
BOOL _ZN12Unk_02006d1413func_0200fd90EPt(void *, u16 *a);
void _ZN12Unk_02006d1413func_02010050EPv(void *, u16 *p);
BOOL _ZN12Unk_02006d1413func_0201000cEv(void *);
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_020102ec13func_020102ecEv(void *);
void func_0200eb18(void *);
void _ZN12Unk_02006d1413func_0200eb58Ejj(void *, u32 a, u32 b);
void _ZN12Unk_020102ec13func_02010358Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200ecdcEj(void *, u32 a);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32 a, u32 b, u32 c);
u32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200e2c0 *p);
BOOL _ZN12Unk_02006d1413func_0200ef08Ev(void *);
void _ZN12Unk_020102ec13func_020109c4Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200e870Ev(void *);
void _ZN12Unk_020102ec13func_0201065cEv(void *);
u8 _ZN12Unk_0200769413func_02007c08Ej(void *, u32 a);
void _ZN12Unk_020d6df413func_0200ce98Ejjj(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_020102ec13func_02010a34EPj(void *, s32 *p);
void _ZN12Unk_020d6df413func_0200ca60Ev(void *);
void _ZN12Unk_020d6df413func_0200c7dcEv(void *);
void _ZN12Unk_020d6df413func_0200c778Ev(void *);
u8 _ZN12Unk_020d6df413func_0200c900Ev(void *);
void _ZN12Unk_020102ec13func_020109acEv(void *);
void _ZN12Unk_02006d1413func_0200e8d0Ev(void *);
s32 _ZN12Unk_020d6df413func_0200d640Ev(void *);
u16 _ZN12Unk_020d6df413func_0200d5fcEv(void *);
void _ZN12Unk_02006d1413func_0200ff08Ev(void *);
}
}

// ---- unk_0200c778.cpp
namespace nM {
extern "C" {

struct Unk_02006d14_Item {
    u32 unk_00;
    u32 unk_04;
    s16 unk_08;
    u8 pad_0a[2];
    u8 unk_0c[0x14];
};
struct Unk_020d6df4_Vec { s32 x, y, z; };
struct Unk_020d6df4_Data {
    u8 pad_00[0x64];
    s32 unk_64;
};
struct Unk_0205dfa4_Sub {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
};
struct Unk_0205dfa4_Base {
    u8 pad_00[0x9c];
};
struct Unk_0205dfa4 : Unk_0205dfa4_Base, Unk_0205dfa4_Sub {
};
extern s16 data_02135f44[];
extern u8 data_020e416c;
extern u8 data_021c3cc0;
extern u8 data_ov004_022523c8;
extern Unk_020d6df4_Data *data_020cbb18;
extern u8 *data_021c1b3c;
s32 func_01ffc5a4(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
s32 func_020e9650(void *a, void *b);
s32 func_020af3bc(void *out, void *a, void *b, s32 c, s32 d);
Unk_0205dfa4 &func_0205dfa4(void *p);
void _ZN12Unk_020dbda413func_02053f20Ev(void *p);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *p, s32 v);
BOOL func_020b50e8();
s32 func_020b52f8();
s32 func_020b52d0();
s32 func_020b5184();
s32 func_020b4880();
void func_020b78c4();
s32 func_020b15ec();
void _ZN12Unk_02019e2c13func_0201a0f4Ev(void *p);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
s32 func_0203081c(void *p, s32 a, s32 b);
void func_0203d76c();
void _ZN12Unk_020d8df413func_02035200Ev(void *p);
void func_020e9b70();
s32 func_020eaf18();
void func_0205e1a0(void *p, s32 a, s32 b, s32 c);
s32 func_020952c8();
s32 func_02095180(s32 a, s32 b);
s32 func_02095574(void *p, s32 a, s32 b);
void func_02090330(s32 a, void *b, void *c, s32 d);
void func_02094574(s32 a, s32 b, s32 c);
s32 func_02010d68(s32 a, s32 b);
s32 func_02010d50(s32 a, s32 b);
void func_02010d98(void *p, s32 a);
void func_02010d74(void *p, s32 a);
void func_02010e48(void *p, s32 a);
void func_ov003_022247b8(void *t, s32 a, s32 b, s32 c);
void func_ov003_02210d54(void *t, s32 a, s32 b);
void func_ov003_02207c08(void *t, s32 a, s32 b, s32 c);
void func_ov003_022107a8(void *t, s32 a, s32 b);
void func_ov003_0220798c(void *t, s32 a, s32 b);
void func_ov004_0221ff68(void *t, s32 a, s32 b);
void func_ov004_0221fe30(void *t, s32 a, s32 b);
void func_ov004_022217c4(void *t, s32 a, s32 b, s32 c);
void func_ov004_0221f5f4(void *t, void *a, s32 b, s32 c);
void func_ov004_0221ee1c(void *t, void *a, s32 b, s32 c);
void func_0200cb90(u8 *p, u32 v);
void func_0200ced8(u16 *p, u32 v);
class Unk_020d6df4 {
public:
    void func_0200c778();
    void func_0200c7dc();
    BOOL func_0200c900();
    void func_0200ca60();
    void func_0200caf4();
    void func_0200caf8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cb50(u32 a, u32 b, u32 c);
    void func_0200cb94();
    void func_0200cc08(u8 *p);
    void func_0200cc6c();
    BOOL func_0200cd54();
    void func_0200cdfc();
    void func_0200ce28(u32 a);
    void func_0200ce3c(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200ce98(u32 a, u32 b, u32 c);
    void func_0200cedc();
    void func_0200cee0();
    void func_0200ceec(u32 a);
    void func_0200cef8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cf04(u32 a, u32 b);
    void func_0200cf3c();
    void func_0200cf5c(s32 *p);

    
    void func_02005ee0(s32 a, u32 b);
    void func_02010a44(s32 a);
    void func_02010a58(void *p);
    void func_02010a34(void *p);
    void func_02010380(u32 a, u32 b, u32 c);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_0200f32c();
    s32 func_020100d0();
    s32 func_0200d5fc();
    void func_020109c4();
    void func_02010914();
    void func_0201071c();
    void func_0201065c();
    void func_0200e8d0();
    void func_0200e870();
    BOOL func_0200e248(Unk_0200e2c0 *m);
    BOOL func_0200e35c(u8 *a, s32 *x, s32 *z, s16 *b);
    BOOL func_0200e2f0(s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
    s32 func_0200f5b0();
    BOOL func_0200f0fc();
    BOOL func_0200ff08();
    void func_02008770(s32 a, s32 b, s32 c);
    void func_0200ec1c(s32 id);
    void func_0200ec30(s32 id);
    BOOL func_0200ec44(s32 id);
    void func_0200ed48();
    s32 func_0200d2b4();
    s32 func_02007c08(s32 a);
    s32 func_0200e764();
    void func_0200bd60(u32 a, u32 b, s32 c);

      u8 pad_000[0x8];
      u32 unk_08;
      u8 pad_00c[0x5c - 0xc];
      Unk_020d6df4_Vec unk_5c;
      u8 pad_068[0x8e - 0x68];
      s16 unk_8e;
      u8 pad_090[0x98 - 0x90];
      s32 unk_98;
      u8 pad_09c[0x130 - 0x9c];
      s32 unk_130;
      s16 unk_134;
      u8 pad_136[0x164 - 0x136];
      s32 unk_164;
      u8 unk_168;
      u8 pad_169[0x230 - 0x169];
      u8 unk_230[4];
      u8 pad_234[0x2d0 - 0x234];
      s32 unk_2d0;
      u8 pad_2d4[0x2dc - 0x2d4];
      s32 unk_2dc;
      u8 pad_2e0[0x59c - 0x2e0];
      u8 unk_59c[4];
      u8 pad_5a0[0x6c4 - 0x5a0];
      u8 unk_6c4[0xc];
      u8 unk_6d0[0x30];
      s32 unk_700;
      u8 pad_704[0x7d0 - 0x704];
      Unk_020d6df4_7d0 unk_7d0;
      u8 pad_7d4[0x7ec - 0x7d4];
      s32 unk_7ec;
      u8 pad_7f0[4];
      s32 unk_7f4;
      s32 unk_7f8;
      s32 unk_7fc;
      u8 pad_800[0x838 - 0x800];
      u8 unk_838[0x44];
      u8 unk_87c[0x8c];
      u8 unk_908[0x18];
      void *unk_920;
      u8 pad_924[0x92e - 0x924];
      u8 unk_92e;
};
void func_0200cb90(u8 *p, u32 v);
void func_0200ced8(u16 *p, u32 v);
void func_02005ee0(void *, s32 a, u32 b);
void _ZN12Unk_020102ec13func_02010a44Ev(void *, s32 a);
void _ZN12Unk_020102ec13func_02010a58EPs(void *, void *p);
void _ZN12Unk_020102ec13func_02010a34EPj(void *, void *p);
void _ZN12Unk_020102ec13func_02010380Eijt(void *, u32 a, u32 b, u32 c);
void _ZN12Unk_02006d1413func_0200f32cEv(void *);
BOOL _ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(void *, u8 *a, s32 *x, s32 *z, s16 *b);
BOOL func_0200e2f0(void *, s32 dx, s32 dz, s32 d2, s32 b, s16 *out);
s32 _ZN12Unk_02006d1413func_020100d0Ev(void *);
s32 _ZN12Unk_020d6df413func_0200d5fcEv(void *);
void _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200e2c0 *m);
void _ZN12Unk_020102ec13func_020109c4Ev(void *);
void _ZN12Unk_020102ec13func_02010914Ev(void *);
void _ZN12Unk_020102ec13func_0201071cEv(void *);
void _ZN12Unk_020102ec13func_0201065cEv(void *);
void _ZN12Unk_02006d1413func_0200e8d0Ev(void *);
void _ZN12Unk_0200804013func_02008770Esjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_02006d1413func_0200ff08Ev(void *);
BOOL _ZN12Unk_02006d1413func_0200f0fcEv(void *);
void _ZN12Unk_02006d1413func_0200e870Ev(void *);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, s32 id);
s32 _ZN12Unk_020d6df413func_0200d2b4Ev(void *);
s32 _ZN12Unk_0200769413func_02007c08Ej(void *, s32 a);
void _ZN12Unk_02006d1413func_0200ec30Ej(void *, s32 id);
s32 func_0200e764(void *);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, s32 id);
void _ZN12Unk_02006d1413func_0200bd60Esji(void *, u32 a, u32 b, s32 c);
void _ZN12Unk_02006d1413func_0200ed48Ev(void *);
}
}

// ---- unk_0200d2b4.cpp
namespace nN {
extern "C" {

struct Unk_0200d64c_Xyz { s32 x, y, z; Unk_0200d64c_Xyz() {} };
class Unk_020d6df4;
void func_0205c384(void *p, u32 v);
void *func_0205c694(void *p);
BOOL func_0205c6a8(void *p);
void _ZN12Unk_020dbd3413func_02054b70EPv(void *p, void *v);
void _ZN12Unk_020dbd3413func_02054b38EPv(void *p, void *v);
void _ZN12Unk_020dbda413func_02053f8cEj(void *p, void *v);
void _ZN12Unk_020dbd5413func_02054710Ev(void *p);
void _ZN12Unk_020dbe3413func_020554a0Eiiiii(void *p, void (*f)(void *), u32 a, u32 b, void *c, u32 d);
void _ZN12Unk_020dbe5c13func_02055df0Ev(void *p);
s32 func_0209522c(s32 a);
void func_0205ee10(void *p, u32 v);
void *func_0205edfc(void *p);
void func_02005264(void *p);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *a, s32 b);
s32 func_020b50e8();
s32 func_02095670(u16 *a, s32 *b, s32 *c, s32 d, s32 e);
BOOL func_020955e8(u16 *a, s32 b, s32 c);
s32 func_02097520(s32 a);
u16 *_ZN12Unk_0209865c13func_02098744Ev();
void func_0205e24c(void *p, u16 *q, s32 r);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_0205e120(void *p);
s32 func_02063c18(s16 a);
s32 func_02063c54(s16 a);
s32 _ZN12Unk_020d93b813func_0203bc68Ev(void *p);
s32 func_020b4880();
void func_020b78b8();
s32 func_020eaf18();
void func_020e9b70();
void func_0203d76c();
BOOL func_0203d4d4();
BOOL func_0203d978();
u8 *func_020b50b4();
s32 func_020b60b0(u8 *obj, Unk_0200d64c_Xyz *out);
BOOL func_020b6080(u8 *obj, Unk_0200d64c_Xyz *out, s32 *a, u8 *b);
s32 func_020b6048(u8 *obj, s32 *pa, u8 *pb);
u16 *func_0204eba0(void *a, Unk_0200d64c_Xyz *b, u32 c);
void func_0204ee10(s32 *x, s32 *y, Unk_0200d64c_Xyz *v);
void func_0204edd8(Unk_0200d64c_Xyz *a, Unk_0200d64c_Xyz *b);
s32 _ZN12Unk_020d93b813func_0203bc7cEv(void *p);
BOOL func_0203a124(s32 *a, s32 *b, Unk_0200d64c_Xyz *p);
s32 func_020e9688(Unk_0200d64c_Xyz *v);
s32 func_020e7b98(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
s32 FX_Sqrt(s32 a);
struct Unk_0200d64c_Keys { u16 a; u16 b; s16 c; };
extern Unk_0200d64c_Keys data_021f47d8;
extern u16 data_021f4778;
extern u16 data_021f477c;
extern u8 data_021c3cc0;
extern s32 data_021c5384;
extern u8 data_021ef5d0;
extern u8 data_021ef5cc;
extern void *data_021c47c4;
extern u8 data_020d5e50[];
extern u8 data_020d5e34[];
extern u8 data_020d5e48[];
extern s16 data_02135f44[];
extern u8 data_020c6190[];
extern u8 data_020c61b8[];
extern void *data_020cbb18;
extern void *data_021c3070;
class Unk_020d6df4 {
public:
    
    BOOL func_0200d2b4();
    void func_0200d3f0(u32 a);
    void func_0200d64c();
    Unk_0200d64c_Xyz func_0200f3ec(Unk_0200d64c_Xyz *a, s16 *b, void *c);
    BOOL func_0200f5b0();
    BOOL func_0200e764();
    void func_0200ec1c(s32 id);
    void func_0200d538();
    void func_0200d53c(Unk_0200d53c_Item *item);
    BOOL func_0200d568(u32 a, u32 b, u32 c);
    u8 func_0200d5b8();
    s32 func_0200d5c4();
    s32 func_0200d5e0();
    s16 func_0200d5fc();
    s16 func_0200d634();
    s32 func_0200d640();

    BOOL func_0200ec44(s32 id);
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_020105ec();
    void func_02010a58(u16 *p);
    u32 func_0200e248(Unk_0200e2c0 *p);

    u8 pad_000[0x5c];
    Unk_0200d64c_Xyz unk_5c;
    Unk_0200d64c_Xyz unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0x130 - 0x90];
    s32 unk_130;
    s16 unk_134;
    u8 unk_136;
    u8 unk_137;
    s32 unk_138;
    u8 unk_13c;
    u8 unk_13d;
    u8 pad_13e[2];
    s32 unk_140;
    u8 unk_144;
    u8 pad_145[3];
    s32 unk_148;
    s32 unk_14c;
    s32 unk_150;
    Unk_0200d64c_Xyz unk_154;
    u8 pad_160[9];
    u8 unk_169;
    u8 pad_16a[2];
    s32 unk_16c;
    u8 pad_170[0x230 - 0x170];
    u8 unk_230[0x384 - 0x230];
    u8 unk_384;
    u8 unk_385;
    u8 pad_386[0x59c - 0x386];
    u8 unk_59c[0x6f0 - 0x59c];
    Unk_0200d64c_Xyz unk_6f0;
    u8 unk_6fc;
    u8 unk_6fd;
    u8 pad_6fe[0x70c - 0x6fe];

    u8 unk_70c[0x738 - 0x70c];
    u8 unk_738;
    u8 pad_739[0x7d0 - 0x739];
    Unk_0200d560 unk_7d0;
    u8 pad_7d8[0x7ec - 0x7d8];
    s32 unk_7ec;
    s32 unk_7f0;
    s32 unk_7f4;
    u8 pad_7f8[4];
    s32 unk_7fc;
    u8 pad_800[0xc88 - 0x800];
    s32 unk_c88;
    u8 pad_c8c[4];
    s32 unk_c90;
};
static inline BOOL Unk_0200d64c_InRange(u16 h) {
    if (h >= 0xfc && h <= 0xfd) {
        return TRUE;
    }
    return FALSE;
}
static inline BOOL Unk_0200d64c_IsTwo() {
    return data_021c3cc0 == 2;
}
static inline BOOL Unk_0200d64c_Both() {
    return data_021ef5d0 && data_021ef5cc;
}
void _ZN12Unk_020102ec13func_020105ecEv(void *);
void _ZN12Unk_020102ec13func_020103b4Eijt(void *, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, s32 id);
void _ZN12Unk_020102ec13func_02010a58EPs(void *, u16 *p);
void _ZN12Unk_0200e2c013func_0200e2c0Eiis(void *, u32 a, u32 b, u32 c);
u32 _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(void *, Unk_0200e2c0 *p);
Unk_0200d64c_Xyz func_0200f3ec(void *, Unk_0200d64c_Xyz *a, s16 *b, void *c);
BOOL func_0200e764(void *);
void _ZN12Unk_02006d1413func_0200ec1cEj(void *, s32 id);
BOOL _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
}
}

// ---- unk_0200dde0.cpp
namespace nO {
extern "C" {

struct Unk_0200dde0_Vec3 {
    s32 x, y, z;
};
typedef Unk_0200e2c0 Unk_0200e248_Rec;
s32 func_020951e4(s32);
s32 func_020951dc(s32);
void func_02095324(s32, void *);
s32 func_0209522c(s32);
void func_0205ef8c(void *, u32);
void _ZN12Unk_0205d1f813func_0205d20cEj(void *, u32);
void _ZN12Unk_0205ce0c13func_0205cf84Ej(void *, u32);
void _ZN12Unk_0205d34013func_0205d38cEj(void *, u32);
void _ZN12Unk_0205d34013func_0205d354Ej(void *, s32);
void func_0205e310(void *, u32, void *, void *, s32, s32);
void _ZN12Unk_0205f8d413func_0205fbc0Ei(void *, s32);
void _ZN12Unk_02005e7c13func_02005f04Ev(void *);
void func_0205d5d4(void *, u32);
void func_0205dba8(void *, u32);
void func_0205c778(void *, u32);
void func_0205c718(void *, s32);
void _ZN12Unk_0205ca9413func_0205cbb0Ej(void *, u32);
s32 func_0205c694(void *);
s32 func_0205c91c(void *);
s32 func_0205ef74(void *);
void func_0205c6f4(void *);
s32 NNS_G3dGetTex(s32 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_02095670(void *a, void *b, void *c, s32 d, s32 e);
s32 func_020955e8(void *a, s32 b, s32 c);
void func_02034d84(u32 a);
void func_02034dd0(s32 a, s32 b, s32 c);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 _ZN12Unk_020660f813func_020679b4Ev(s32 a);
s32 _ZN12Unk_020aa3b813func_020aa514Ev();
void _ZN12Unk_020660f813func_02067a84EPhPv(s32 a, u8 *b, s32 c);
void _ZN12Unk_020dd324C1EPt(void *obj, u16 *p);
void _ZN12Unk_020dd324D1Ev(void *obj);
void _ZN12Unk_020660f813func_020679ecEiPvj(s32 a, s32 b, void *c, s32 d);
void func_02010a7c(u16 *out, void *obj);
void func_02010af0(u16 *out, void *obj);
void func_02010cb0(u16 *out, void *obj);
void func_02010cd4(u16 *out, void *obj);
extern u8 data_020c6194[], data_020c6198[], data_020c619c[], data_020c61a0[], data_020c61a4[], data_020c61a8[], data_020c61ac[], data_020c61b0[], data_020c61b4[];
extern u8 data_020e416c;
extern u8 data_020c6684[];
struct Unk_021c1b3c {
    u8 unk_00[0x248];
    s32 unk_248;
};
extern Unk_021c1b3c *data_021c1b3c;
extern u8 data_021edb5c;
extern char data_020d6f28[], data_020d6f30[];
class Unk_020d6df4 {
public:
    void func_0203e624(u32 v);
    void func_0200d568(s32 a, s32 b, s32 c);
    void func_02005f04();
    BOOL func_0200ec30(s32 v);
    s32 func_02010c88();
    s32 func_02010b08(s32 v);
    void func_02010078(s32 a, s32 b);
    s32 func_02010aa0();
    s32 func_02010d20();
    BOOL func_0200fd90(u16 *v);
    BOOL func_0200fdf4();
    void func_0200e0b8();
    void func_0200e058();
    void func_0200e008();
    BOOL func_02010cf8();
    void func_02010050(void *v);
    void func_0200faa0(s32 a, s32 b, const char *c, const char *d);
    void func_0200fa88(s32 a, s32 b, const char *c, const char *d);
    s32 func_02010c9c();
    BOOL func_0200fab8(u16 *a, s32 b, s32 c, s32 d);

    BOOL func_0200dde0();
    s32 func_0200e1ac();
    s32 func_0200e1dc();
    void func_0200e208();
    Unk_0200e248_Rec *func_0200e220(s32 i);
    BOOL func_0200e248(Unk_0200e248_Rec *r);
    BOOL func_0200f660();
    BOOL func_0200e35c(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 func_0200e3c0(u32 i);
    void vfunc_6c();
    void vfunc_68();
    void vfunc_64();

      u8 unk_000[8];
      s32 unk_08;
      u8 unk_0c[0x5c - 0xc];
      Unk_0200dde0_Vec3 unk_5c;
      u8 unk_068[0x9c - 0x68];
      s32 unk_9c;
      s32 unk_a0;
      u8 unk_0a4[0x128 - 0xa4];
      s32 unk_128;
      u8 unk_12c[0x164 - 0x12c];
      s32 unk_164;
      u8 unk_168;
      u8 unk_169[0x385 - 0x169];
      u8 unk_385[0x424 - 0x385];
      u8 unk_424[0x598 - 0x424];
      u8 unk_598[4];
      u8 unk_59c[0x5c4 - 0x59c];
      u8 unk_5c4[0x6e8 - 0x5c4];
      s32 unk_6e8;
      u8 unk_6ec[4];
      Unk_0200dde0_Vec3 unk_6f0;
      u8 unk_6fc[0x709 - 0x6fc];
      u8 unk_709;
      u8 unk_70a;
      u8 unk_70b;
      u8 unk_70c[0x770 - 0x70c];
      u8 unk_770[0x79c - 0x770];
      u8 unk_79c[0x7d0 - 0x79c];
      u16 unk_7d0;
      u8 unk_7d2;
      u8 unk_7d3;
      u16 unk_7d4;
      u8 unk_7d6[2];
      u8 unk_7d8;
      u8 unk_7d9[0x7ec - 0x7d9];
      s32 unk_7ec;
      u8 unk_7f0[8];
      s32 unk_7f8;
      s32 unk_7fc;
      s32 unk_800;
      s32 unk_804;
      s32 unk_808;
      s32 unk_80c;
      s32 unk_810;
      s32 unk_814;
      s32 unk_818;
      u8 unk_81c[0x8e4 - 0x81c];
      u8 unk_8e4;
      u8 unk_8e5;
      u8 unk_8e6[0x900 - 0x8e6];
      u8 unk_900;
      u8 unk_901[0x930 - 0x901];
      Unk_0200e248_Rec unk_930[30];
      s32 unk_c78;
      s32 unk_c7c;
};
BOOL func_0200e2f0(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out);
void _ZN12Unk_020d967013func_0203e624Ej(void *, u32 v);
s32 func_02010c88(void *);
void _ZN12Unk_02006d1413func_02010078Eii(void *, s32 a, s32 b);
s32 _ZN12Unk_020102ec13func_02010b08Ej(void *, s32 v);
s32 func_02010aa0(void *);
s32 func_02010d20(void *);
void _ZN12Unk_020d6df413func_0200d568Ejjj(void *, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_02006d1413func_0200ec30Ej(void *, s32 v);
BOOL _ZN12Unk_02006d1413func_0200fd90EPt(void *, u16 *v);
BOOL _ZN12Unk_02006d1413func_0200fdf4Ev(void *);
s32 func_02010c9c(void *);
BOOL _ZN12Unk_02006d1413func_0200fab8EPthhh(void *, u16 *a, s32 b, s32 c, s32 d);
BOOL func_02010cf8(void *);
void _ZN12Unk_02006d1413func_02010050EPv(void *, void *v);
void _ZN12Unk_02006d1413func_0200faa0EPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
void _ZN12Unk_02006d1413func_0200fa88EPvS0_S0_S0_(void *, s32 a, s32 b, const char *c, const char *d);
BOOL _ZN12Unk_02006d1413func_0200f660Ev(void *);
}
}

// ---- unk_0200e758.cpp
namespace nP {
extern "C" {

struct Unk_020cbb18 { u8 pad_00[0x64]; s32 unk_64; };
struct Unk_0200e7f4_T24 { u32 a[12]; };
extern Unk_020cbb18 *data_020cbb18;
extern Unk_0200e7f4_T24 data_021cb69c;
extern u8 data_020c65f0[];
extern s16 data_02135f44[];
extern u32 data_020d5e40;
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    Unk_02006d14_Vec3 unk_5c;
    Unk_02006d14_Vec3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0xc4 - 0xb4];
    u8 unk_c4[0xd0 - 0xc4];
    u16 unk_d0;
    u8 pad_d2[0x16c - 0xd2];
    u32 unk_16c;
    u8 pad_170[0x17e - 0x170];
    u8 unk_17e;
    u8 unk_17f;
    u8 pad_180[0x1ac - 0x180];
    u8 unk_1ac;
    u8 pad_1ad[0x230 - 0x1ad];
    u8 unk_230[0x294 - 0x230];
    Unk_0200e7f4_T24 unk_294;
    u8 pad_2c4[0x458 - 0x2c4];
    s16 unk_458;
    s16 unk_45a;
    s16 unk_45c;
    s16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[0x694 - 0x59c];
    u8 unk_694[0x6b8 - 0x694];
    u32 unk_6b8;
    u32 unk_6bc;
    u32 unk_6c0;
    u8 pad_6c4[0x6e8 - 0x6c4];
    u32 unk_6e8;
    u8 pad_6ec[0x7d1 - 0x6ec];
    u8 unk_7d1;
    u8 pad_7d2[0x7fc - 0x7d2];
    s32 unk_7fc;
    u8 pad_800[0x818 - 0x800];
    s32 unk_818;
    u8 pad_81c[0x820 - 0x81c];
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    u8 pad_82c[0x838 - 0x82c];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[0x8c0 - 0x87c];
    s32 unk_8c0;
    s32 unk_8c4;
    s32 unk_8c8;
    u8 pad_8cc[0xc78 - 0x8cc];
    u32 unk_c78;

    s32 func_0200e758();
    BOOL func_0200e7c0();
    void func_0200e7f4();
    void func_0200e870();
    void func_0200e8d0();
    BOOL func_0200ea10(u32 id);
    void func_0200ea4c();
    void func_0200ead0();
    void func_0200eb58(u32 a, u32 b);
    BOOL func_0200eba0(Unk_02006d14_Vec3 *out);
    void func_0200ebe8();
    void func_0200ec1c(u32 id);
    void func_0200ec30(u32 id);
    u32 func_0200ec44(u32 id);
    void func_0200ec54(u32 a, Unk_02006d14_Vec3 *v);
    void func_0200ecdc(u32 a);
    void func_0200ed48();
    void func_0200ed9c();
    BOOL func_0200ede8(Unk_02006d14_Vec3 *p);
    BOOL func_0200eee4(s32 *p);
    BOOL func_0200ef08();
    BOOL func_0200ef98(Unk_02006d14_Vec3 *out, s16 *ang);
    void func_0200f004(u32 a, ...);
    s32 func_0200f5b0();
};
s32 func_020b50dc();
s32 func_020b50e8();
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(Unk_020cbb18 *g, s32 i);
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(Unk_020cbb18 *g);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(Unk_020cbb18 *g, s32 i);
BOOL func_020955e8(u32 *out, s32 a, s32 b);
u32 func_0203ef38(void *a, void *b);
s32 _ZN12Unk_020d5d8413func_02002b84EPv(Unk_02006d14 *p, void *buf);
s32 _ZN12Unk_020dbe3413func_020553f8Ej(void *p, s32 v);
s32 _ZN12Unk_020dbda413func_02053f08Ej(void *p, s32 v);
s32 func_020553cc(void *p, void *q, s32 v);
s32 func_0205e1a0(void *p, s32 a, s32 b, s32 c);
BOOL func_02095154(s32 a, s32 b);
BOOL func_02095670(s16 *s, s32 *x, s32 *z, s32 m, s32 arg);
Unk_02006d14_Vec3 *func_020947f0(u32 n);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(Unk_02006d14_Vec3 *a, Unk_02006d14_Vec3 *b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0200f3ec(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, Unk_02006d14_Vec3 *v, s16 *ang, u32 arg);
s32 _ZN12Unk_020102ec13func_0201071cEv(Unk_02006d14 *p);
s32 func_02010dbc(s16 *p, s32 a, s32 b, s32 c, s32 d);
s32 func_02010c74(Unk_02006d14 *p);
s32 _ZN12Unk_020cbb1813func_020728d4Ev(Unk_020cbb18 *g);
s32 _ZN12Unk_020cbb1813func_020728a4EPhj(Unk_020cbb18 *g, void *p, s32 n);
s32 _ZN12Unk_020cbb1813func_02072824Ejj(Unk_020cbb18 *g, s32 a, s32 b);
s32 func_020954e0(u32 *out, u32 a, u32 b);
s32 func_0203ee38(Unk_02006d14_Vec3 *v);
BOOL func_0208f024();
BOOL func_0208f010();
s32 func_02003e60(void *p, u32 a, s32 b, s32 c);
s32 func_02003e70(void *p, u32 a, s32 b, s32 c);
s32 func_02063c18(s32 a);
s32 func_0204ed8c(Unk_02006d14_Vec3 *out, s32 x, s32 z);
s32 func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void func_0200f070(Unk_02006d14_Vec3 *out, Unk_02006d14 *p, void *args);
void func_0200f54c(Unk_02006d14 *p, s32 a, s32 b, s32 c);
BOOL _ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(Unk_02006d14 *p, u8 *b, s32 *x, s32 *z, s16 *ang);
BOOL func_0200e764();
void func_0200eb18();
static inline BOOL Unk_0200ec54_Bit(u32 f, u32 m)
{
    return (f & m) != 0 ? TRUE : FALSE;
}
s32 _ZN12Unk_02006d1413func_0200f5b0Ev(void *);
}
}

// ---- unk_0200f070.cpp
namespace nQ {
extern "C" {

struct Unk_0200f070_V3 { s32 x, y, z; };
struct Unk_0200f070_M { s32 v[12]; };
struct Unk_0200f17c_Date { u16 a : 7; u16 b : 4; u16 c : 5; };
struct Unk_0200f660_S { u16 a; u16 b; };
extern s16 data_02135f44[];
extern s32 data_020c6c64;
extern void *data_020cbb18;
extern void *data_021c47c4;
extern u32 data_020c6210[];
class Unk_02006d14;
s32 func_01ffcb0c(s32 a, s32 b);
void MTX_MultVec43(Unk_0200f070_V3 *v, Unk_0200f070_M *m, Unk_0200f070_V3 *out);
void func_0203ee38(Unk_0200f070_V3 *dst, Unk_0200f070_V3 *src);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *a, s32 b);
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(Unk_02006d14 *o, s32 id);
BOOL func_0202e8d4();
void _ZN12Unk_0200804013func_020082e4Ehjj(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void _ZN12Unk_0200804013func_02008404Ejj(Unk_02006d14 *o, s32 a, s32 b);
void _ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(s32 a, Unk_0200f17c_Date d);
void *func_0209c37c(s32 a, s32 b);
s32 func_02010c74(Unk_02006d14 *o);
BOOL _ZN12Unk_02006d1413func_0200e7c0Ev(Unk_02006d14 *o);
Unk_0200f17c_Date *func_020952d8();
void func_02010d20(void *o);
Unk_0200f17c_Date _ZN12Unk_0209865c13func_020987c4Ev();
void func_0209d498(void *p);
void MI_CpuCopy8(void *a, void *b, s32 n);
void func_0209d3d0(void *a, void *b, s32 n);
void func_02003dec(void *a, void *b, s32 c);
Unk_0200f070_V3 *func_020b0cbc(Unk_0200f070_V3 *v);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *o, s32 id);
void func_02090330(s32 a, Unk_0200f070_V3 *v, s16 *r, s32 c);
void func_0200f3ec(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p);
void func_0200f43c(Unk_0200f070_V3 *out, Unk_02006d14 *o);
void func_0200f528(Unk_02006d14 *o, s32 a, s32 b);
void func_0204edd8(void *a, Unk_0200f070_V3 *v);
BOOL func_02010dbc(s16 *a, s32 b, s32 c, s32 d, s32 e);
s32 _ZN12Unk_020102ec13func_02010a58EPs(void *o, s16 *a);
void func_02010d98(s16 *a, s32 b);
s32 func_02010e48(void *a, s32 b);
s32 func_02010e68(void *a, s32 b, s32 c, s32 d, s32 e);
void func_02010a7c(Unk_0200f660_S *s, Unk_02006d14 *o);
BOOL func_0204b2d4(Unk_0200f660_S *s);
s32 func_0204b25c(u16 *p);
s32 func_02061794(Unk_0200f660_S *s);
s32 _ZN12Unk_02006d1413func_0200f9bcEv(Unk_02006d14 *o);
void func_0204ee10(s32 *a, s32 *b, s32 c);
void func_ov004_022235ec(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void func_ov003_02211890(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b);
void func_ov003_02208a88(Unk_02006d14 *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020433ec(void *o, Unk_0200f6d4_V2 v, s32 a, s32 b, s32 c);
s32 func_020430b4(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 func_02042ff8(void *o, Unk_0200f6d4_V2 v, s32 a);
s32 func_02042d10(s32 a);
s32 func_02042830(s32 a);
void func_02042820(s32 a);
void *func_0204262c(s32 a);
class Unk_02006d14 {
public:
    u8 pad_000[0x5c];
    Unk_0200f070_V3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0x2cc - 0xb4];
    u8 unk_2cc[4];
    u8 pad_2d0[0x694 - 0x2d0];
    Unk_0200f070_M unk_694;
    s32 unk_6c4[3];
    s32 unk_6d0[3];
    u8 pad_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 pad_704[0x7fc - 0x704];
    s32 unk_7fc;
    u8 pad_800[0x808 - 0x800];
    s32 unk_808;
    s32 unk_80c;
    s32 unk_810;
    s32 unk_814;
    u8 pad_818[4];
    u16 unk_81c;
    u16 unk_81e;
    u8 pad_820[0x838 - 0x820];
    u8 unk_838[0x87c - 0x838];
    u8 unk_87c[4];

    BOOL func_0200f0fc();
    void func_0200f258();
    void func_0200f32c();
    s32 func_0200f478(s32 a);
    s32 func_0200f4c0(s32 a);
    s32 func_0200f504(s32 a);
    s32 func_0200f5b0();
    s32 func_0200f660();
    BOOL func_0200f6d4(s32 a, s32 b);
    s32 func_0200f7a0(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    BOOL func_0200f8f8(s32 a, s32 mode, s32 idx);
    s32 func_0200f870();
    void func_0200f8c0();
};
static inline void Unk_0200f070_Set(Unk_0200f070_V3 *r, s32 x, s32 y, s32 z)
{
    r->x = x;
    r->y = y;
    r->z = z;
}
void func_0200f070(Unk_0200f070_V3 *dst, Unk_02006d14 *o, s32 *p);
void func_0200f17c(Unk_02006d14 *o, s32 a, Unk_0200f17c_Date *d);
void func_0200f1e4(void *o, void *a, u8 *b);
void func_0200f23c(void *o);
void func_0200f3ec(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p);
void func_0200f43c(Unk_0200f070_V3 *out, Unk_02006d14 *o);
void func_0200f45c(Unk_02006d14 *a, Unk_02006d14 *b);
void func_0200f528(Unk_02006d14 *o, s32 a, s32 b);
void func_0200f54c(Unk_02006d14 *o, s32 a, s32 b, s32 c);
void func_0200f594(Unk_02006d14 *o, s32 a, s32 b, s32 c);
namespace Unk_0200f7a0_NS {
extern "C" s32 func_020433ec(void *o, Unk_0200f6d4_V2 *v, s32 a, s32 b, s32 c);
}
s32 _ZN12Unk_02006d1413func_0200f504Ei(void *, s32 a);
}
}

// ---- unk_0200f9bc.cpp
namespace nR {
extern "C" {

struct Unk_0200ff08_Vec { s32 x, y, z; };
struct Unk_0200ff08_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual BOOL vfunc_54(void *p);
};
inline BOOL Unk_0200f9d4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }
inline BOOL Unk_020102a0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
extern u8 data_020e416c;
extern u32 data_020c623c[];
extern u32 data_020cb35c;
extern u32 data_020cb360;
extern u8 data_020d6f30[], data_020d6f38[], data_020d6f3c[], data_020d6f40[], data_020d6f48[], data_020d5e38[];
void *func_0204262c(u32 p);
s32 func_ov004_0221e980(void *, s32, s32);
s32 func_ov003_02204ce8(void *, s32);
s32 func_ov004_0221e8c0(void *);
s32 func_ov003_02204f3c(void *);
s32 func_020e9650(void *);
s32 func_020e7b98(s32, s32);
s32 func_020e780c(s32, s32);
void func_02063a1c(void *, void *, void *, void *);
void func_02063a5c(void *, void *, void *, void *);
BOOL func_0205d87c(void *);
s32 func_0205ddc8(s32, u32, u16 *, s32 *, s32 *);
void func_0205da08(void *, s32, s32, u16 *, s32);
void *func_0205d854(void *, s32);
s32 NNS_G3dGetTex(void *);
void *_ZN12Unk_0205d34013func_0205d340Ev(void *);
void *func_0205ef74(void *);
void *func_0205ef60(void *);
void func_0205d934(void *);
void func_0205db04(void *);
void _ZN12Unk_020dbd3413func_02054b14Ev(void *);
void _ZN12Unk_020dbd3413func_02054b70EPv(void *, void *);
s32 func_0205d7f8(void *, s32);
void _ZN12Unk_020dbe5c13func_02055eecEv(void *);
void _ZN12Unk_0205d1f813func_0205d1f8Ev(void *);
void func_020e885c();
void *_ZN12Unk_0205ce0c13func_0205cf60Ev(void *);
void *_ZN12Unk_0205ce0c13func_0205cf54Ev(void *);
void _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(void *, void *, u32, u32, u32, u32);
s32 func_0205d494(void *);
s32 func_0205d4e4(void *);
s32 func_0205d764(s32);
s32 func_0205d758(s32);
BOOL func_0204b37c(u16 *);
s32 func_0204b598(u16 *);
void func_0205d554(void *, s32);
void func_0205d530(void *);
void func_0205d588(void *);
void *func_0205d4d0(void *);
BOOL func_0203d978(void *);
void func_0203d73c(void *, void *);
BOOL func_0203e5d0(void *);
BOOL _ZN12Unk_020d967013func_0203e4a8EPS_(void *, void *);
void func_0200f3ec(Unk_0200ff08_Vec *, void *, void *, void *, void *);
void func_0205c91c(void *);
u32 func_0203c6a8();
void _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *, u32, void *, u32, u32, u32);
void _ZN12Unk_0205ca9413func_0205ca94EPtiii(void *, s32, void *, u32, u32);
void func_0205ef34(void *);
void func_0205ef08(void *, s32);
s32 func_01ffcb0c(s32, s32);
BOOL _ZN12Unk_020e0d0813func_02088d38Ej(void *, s32);
BOOL _ZN12Unk_020e0d0813func_020890b0Ei(void *, s32);
s32 func_0205ed30(u16 *);
s32 func_0205c570(s32);
void func_0205c2dc(void *, s32, s32, s32);
void func_0205c254(void *);
s32 func_021065dc();
s32 func_021065f8(s32, s32);
void _ZN12Unk_020dbda413func_02053e70Ejjjjjji(void *, s32, s32, u32, u32, u32, u32, u32);
s32 func_0205c57c(s32);
s32 func_0205c5d0();
s32 func_0205c5ac(s32, s32);
s32 func_0205c588(s32, s32);
void _ZN12Unk_020dbda413func_02053e00Ejj(void *, s32, s32);
void _ZN12Unk_020dbda413func_02053dd8Ejj(void *, s32, s32);
void _ZN12Unk_020dbda413func_02053e28Ejj(void *, s32, s32);
void func_02010a7c(u16 *, void *);
struct Unk_02006d14 {
    u8 pad_000[0x5c];
    u8 unk_5c[0x8e - 0x5c];
    s16 unk_8e;
    u8 pad_90[0x138 - 0x90];
    Unk_0200ff08_Obj *unk_138;
    u8 unk_13c;
    u8 pad_13d[0x154 - 0x13d];
    s32 unk_154, unk_158, unk_15c;
    u8 pad_160[0x16c - 0x160];
    s32 unk_16c;
    u8 unk_170[0x230 - 0x170];
    u8 unk_230[0x28c - 0x230];
    u32 unk_28c;
    u8 pad_290[0x388 - 0x290];
    u8 unk_388[0x424 - 0x388];
    u8 unk_424[0x460 - 0x424];
    u8 unk_460[0x4fc - 0x460];
    u8 unk_4fc[0x598 - 0x4fc];
    u8 unk_598[0x6f0 - 0x598];
    s32 unk_6f0;
    s32 pad_6f4;
    s32 unk_6f8;
    u8 pad_6fc[0x6fd - 0x6fc];
    u8 unk_6fd[0x704 - 0x6fd];
    s32 unk_704;
    u8 unk_708;
    u8 unk_709;
    u8 unk_70a;
    u8 unk_70b;
    u8 unk_70c[0x714 - 0x70c];
    u32 unk_714;
    u8 pad_718[0x738 - 0x718];
    u8 unk_738[0x740 - 0x738];
    u32 unk_740;
    u8 pad_744[0x770 - 0x744];
    u8 unk_770[0x774 - 0x770];
    u8 unk_774[0x79c - 0x774];
    u8 unk_79c[0x7a4 - 0x79c];
    u32 unk_7a4;
    u8 pad_7a8[0x808 - 0x7a8];
    u32 unk_808;
    u8 pad_80c[0xc88 - 0x80c];
    s32 unk_c88;
    u16 unk_c8c;
    u8 pad_c8e[2];
    s32 unk_c90;
    u16 unk_c94;
    u8 unk_c96;
    u8 unk_c97;
    u8 unk_c98;

    u32 func_0200f9bc();
    s32 func_0200f9d4(s32 a);
    s32 func_0200fa00();
    BOOL func_0200fa2c(s32 *pos, u32 idx);
    void func_0200fa88(void *a, void *b, void *c, void *d);
    void func_0200faa0(void *a, void *b, void *c, void *d);
    BOOL func_0200fab8(u16 *p, u8 b, u8 c, u8 d);
    void func_0200fb04();
    void func_0200fb30();
    BOOL func_0200fd90(u16 *p);
    void func_0200fdb4();
    void func_0200fdf4();
    s32 func_0200ff08();
    void func_0201000c();
    void func_02010050(void *p);
    void func_02010078(s32 a, s32 b);
    s32 func_020100d0();
    void func_02010154(u16 *p, s32 b, void *c);
    void func_02010284(s32 b, void *c);

    BOOL func_0200ec44(s32 n);
    BOOL func_0200d5b8();
    s32 func_0200d640();
    void func_020105ec();
    void *func_02010cf8();
    void *func_02010d20();
    void *func_02010b08(s32 n);
    s32 func_02010aa0();
    BOOL func_02010ad4();
};
inline BOOL Unk_02010154_In(u16 *p) { BOOL r = FALSE; u16 v = *p; if (*p >= 0x1380 && v <= 0x139f) r = TRUE; return r; }
BOOL _ZN12Unk_02006d1413func_0200ec44Ej(void *, s32 n);
void * func_02010cf8(void *);
void * func_02010d20(void *);
void * _ZN12Unk_020102ec13func_02010b08Ej(void *, s32 n);
void _ZN12Unk_020102ec13func_020105ecEv(void *);
BOOL _ZN12Unk_020d6df413func_0200d5b8Ev(void *);
s32 func_02010aa0(void *);
BOOL func_02010ad4(void *);
s32 _ZN12Unk_020d6df413func_0200d640Ev(void *);
}
}

// ---- unk_020102ec.cpp
namespace nS {
extern "C" {

struct Unk_02010924_Msg {
    u8 unk_00;
    s16 unk_02;
    s16 unk_04;
};
struct Unk_02010a58_Blk {
    u16 unk_00;
    s16 unk_02;
};
struct Unk_02010b08_Time {
    u32 unk_00;
    u32 unk_04;
};
struct Unk_02010b08_Bits {
    u16 unk_a : 7;
    u16 unk_b : 4;
    u16 unk_c : 5;
};
struct Unk_0201065c_Vec {
    s32 x, y, z;
};
s32 _ZN12Unk_020102ec13func_02010564EPiPh(Unk_020102ec *a, s32 *b, u8 *c);
extern void *data_020cbb18;
extern u8 data_020c655c[];
extern u16 data_020c68d4[];
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *a, u32 b);
BOOL func_020b52d0(void);
u32 func_020b50e8(void);
u32 func_020b50b4(void);
void _ZN12Unk_020b696013func_020b6860EP12Unk_020b6a0cP4Vec3S3_S3_ih(u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g);
void func_0205c2dc(void *a, s32 b, u32 c, u32 d);
s32 func_0205c254(void *a);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, u32 b);
void func_02053ee8(void *a, u32 b, u32 c, u32 d, s32 e, u32 f, u32 g);
void _ZN12Unk_020dbda413func_02053f20Ev(void *a);
void _ZN12Unk_02006d1413func_02010284EiPv(Unk_020102ec *a, s32 b, u32 c);
void _ZN12Unk_0205ce0c13func_0205ce78Eiii(void *a, s32 b, u32 c, u32 d);
s32 _ZN12Unk_0205ce0c13func_0205cf54Ev(void *a);
s32 _ZN12Unk_0205ce0c13func_0205cf60Ev(void *a);
s32 func_0205c5dc(s32 a);
s32 func_0205c5e8(s32 a);
void _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(void *a, s32 b, u32 c, u32 d, u32 e, u32 f);
s32 _ZN12Unk_020dbe5c13func_02055e38Ev(void *a);
s32 _ZN12Unk_0205d34013func_0205d340Ev(void *a);
s32 _ZN12Unk_0205d1f813func_0205d1f8Ev(void *a);
void _ZN12Unk_020dbe5c13func_02055f1cEPvS0_jS0_(void *a, s32 b, s32 c, u32 d, s32 e);
void _ZN12Unk_020e0d0813func_02089040Ev(void *a);
void _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
u32 func_02030814(u32 a);
BOOL _ZN12Unk_020dbe7c13func_020565e8Ei(void *a, u32 b);
BOOL func_02063ca0(void *a);
BOOL _ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(Unk_020102ec *a, Unk_02010924_Msg *b, u32 *c, u32 *d, s16 *e);
BOOL func_02010d74(s16 *a, s32 b);
void func_02010e48(void *a, u32 b);
void _ZN12Unk_020d5d8413func_02002cb0EP16Unk_02002cb0_Vec(Unk_020102ec *a, void *b);
void _ZN12Unk_02032238C1Ev(void *a);
void _ZN12Unk_02032238D1Ev(void *a);
void func_020309d4(void *a, void *b, void *c, s32 d, u32 e, void *f, u32 g);
void _ZN12Unk_020d5d8413func_02002c10Ev(Unk_020102ec *a);
void func_02010d98(void *a);
u32 func_02010d20(u32 a);
u32 func_02010c74(u32 a);
u32 func_020951dc(u32 a);
BOOL _ZN12Unk_02006d1413func_0200e7c0Ev(u32 a);
s32 func_0200f1e4(u32 a, void *b, void *c);
void func_0200f17c(u32 a, u32 b, void *c);
s32 func_0209d3a4(void *a, void *b);
u8 *func_020952c8(void);
u16 *func_020952d0(void);
void _ZN12Unk_0209865c13func_020987d0Eh(u32 a, u32 b);
void _ZN12Unk_02006d1413func_0200ead0Ev(u32 a);
u16 *_ZN12Unk_0209865c13func_02098744Ev(void);
u32 _ZN12Unk_0209865c13func_02098868Ev(u32 a);
BOOL func_02098778(u32 a);
u16 *_ZN12Unk_0209865c13func_020986fcEv(void);
void func_02010a7c(u16 *out, u32 x);
u32 func_02010aa0(u32 x);
u32 func_02010ad4(u32 x);
void func_02010af0(u16 *out, u32 x);
u8 _ZN12Unk_0200769413func_02007c50Ej(void *, u32 a);
}
}

// ---- unk_02010c74.cpp
namespace nT {
extern "C" {

s32 func_020952e0(s32 v);
void *func_020974a0(void);
s32 _ZN12Unk_0209865c13func_020987ecEv(void *p);
s32 _ZN12Unk_0209865c13func_02098814Ev(void *p);
s32 _ZN12Unk_0209865c13func_02098840Ev(void *p);
u16 *_ZN12Unk_0209865c13func_02098714Ev(void *p);
u16 *_ZN12Unk_0209865c13func_0209872cEv(void *p);
s32 _ZN12Unk_0209865c13func_0209888cEv(void *p);
s32 _ZN12Unk_020940a013func_0209411cEv(void);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_02010d20(void *p);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010dbc(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void func_02010e68(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
BOOL _ZN12Unk_020cbb1813func_020729bcEj(void *p, s32 v);
BOOL func_02095180(s32 a, s32 b);
BOOL func_020947f0(s32 a);
s32 func_0202ffdc(void);
void func_02094420(s32 *p);
void *func_020b4934(void);
BOOL func_020b4b68(void *a, s32 b, s32 *c, s32 *d);
void func_02094400(s32 *p);
BOOL func_0209c7a4(s32 v);
BOOL func_020b52d0(void);
void func_0203d76c(void);
void func_0203da7c(void);
s32 func_020951ec(s32 v);
void func_0203daa0(s32 a, s32 b);
extern void *data_020cbb18;
s32 func_02010c74(void *p);
s32 func_02010c88(void *p);
s32 func_02010c9c(void *p);
void func_02010cb0(u16 *out, void *p);
void func_02010cd4(u16 *out, void *p);
BOOL func_02010cf8(void *p);
void *func_02010d20(void *p);
s32 func_02010d44(s32 a, s32 b);
s32 func_02010d50(s32 a, s32 b);
s32 func_02010d5c(s32 a, s32 b, s32 c);
s32 func_02010d68(s32 a, s32 b);
s32 func_02010d74(s16 *p, s32 target);
s32 func_02010d98(s16 *p, s32 target);
s32 func_02010dbc(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void func_02010e48(s32 *p, s32 target);
void func_02010e68(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep);
void func_02010ed8(s32 a);
void DC_FlushRange(void *p, u32 size);
void GX_LoadOBJ(void *p, u32 src, u32 size);
void GXS_LoadOBJ(void *p, u32 src, u32 size);
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
void *func_020e8594(u32 size);
void func_020e8558(void *p);
BOOL FS_OpenFile(void *self, const void *path);
BOOL FS_SeekFile(void *self, u32 off, s32 z);
s32 func_021198b4(void *self, void *dst, u32 size);
BOOL FS_CloseFile(void *self);
extern u8 data_020c6c68[];
extern u32 data_020d6f68[];
void func_02010f88();
}
}

class Unk_02006d14 {
public:
    void func_02006d14(Unk_02006d14_Item* item);
    BOOL func_02008cc0(s16 v);
    BOOL func_02008e50(u8 a, u8 b, u8 c, u32 d, s16 e);
    void func_02008e94();
    void func_02008eb4();
    void func_02008ee4();
    void func_02008f18();
    void func_02008f1c(Unk_02006d14_Item *item, u32 old);
    BOOL func_02008f60(s16 v, u32 a, u32 b);
    void func_02008fa4();
    void func_02008fd4(s32 f);
    void func_0200905c();
    void func_020090d8();
    s32 func_02009170();
    void func_020092c4();
    void func_020092c8(Unk_02006d14_Item *item, u32 old);
    BOOL func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c);
    void func_02009464();
    void func_02009484();
    void func_020095b8();
    void func_02008cfc(Unk_02006d14_Item *item, u32 old);
    s32 func_020095f8(u32 a);
    void func_02009624(Unk_02006d14_Item* item, u32 old);
    s32 func_020096e8(u16 a, u32 b, u32 c);
    void func_02009724();
    void func_02009740();
    void func_020097d8(Unk_02006d14_Item* item, u32 old);
    s32 func_02009800(u32 a, u32 b);
    s32 func_020098a4(u32 a, u32 b);
    s32 func_0200995c(u32 a, u32 b);
    s32 func_02009c04(u32 a, u32 b);
    s32 func_02009cb0(u32 a, u32 b);
    void func_02009838();
    void func_02009854();
    void func_02009888(Unk_02006d14_Item* item, u32 old);
    void func_020098dc();
    void func_020098f8();
    void func_02009948(Unk_02006d14_Item* item, u32 old);
    void func_02009994();
    void func_020099dc();
    void func_02009a38();
    void func_02009a78();
    s32 func_02009bd0(u32 a);
    void func_02009bdc(Unk_02006d14_Item* item, u32 old);
    void func_02009c3c();
    void func_02009c58();
    void func_02009c94(Unk_02006d14_Item* item, u32 old);
    void func_02009ce8();
    void func_02009d04();
    void func_02009d2c();
    void func_02009d5c(Unk_02006d14_Item* item, u32 old);
    s32 func_02009df8(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g);
    void func_02009e68();
    void func_02009ed8();
    void func_020097d4();
    void func_02009884();
    void func_02009944();
    void func_02009c90();
    void func_02009d58();
    void func_02009f68(s16 v);
    void func_02009fa8(Unk_02006d14_Item* item, u32 v);
    s32 func_0200a050(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void func_0200a0ac();
    void func_0200a114();
    void func_0200a198();
    void func_0200a1bc();
    void func_0200a390();
    void func_0200a450();
    void func_0200a484(s16 v);
    void func_0200a4f4(Unk_02006d14_Item* item, u32 v);
    s32 func_0200a684(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y);
    s32 func_0200a6d4(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y);
    void func_0200a73c();
    void func_0200a7b4();
    void func_0200a82c(u8* state, u8 flag);
    s32 func_0200b198(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d);
    s32 func_0200b1ec(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d);
    void func_0200ad24(Unk_02006d14_Item* item, u32 old);
    void func_0200ad58(Unk_02006d14_Item* item, u32 old);
    void func_0200ad64(s16 old);
    void func_0200b264(Unk_02006d14_Item* item, u32 old);
    void func_0200b2e0();
    void func_0200abc8();
    void func_0200add8(Unk_02006d14_Item* item, u32 old);
    void func_0200b510();
    void func_0200b578(s16 v);
    void func_0200b5e8(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b76c(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c);
    void func_0200b7c8();
    void func_0200b7e4();
    void func_0200b80c();
    s32 func_0200b848(u32 v);
    void func_0200b854(Unk_02006d14_Item *item, u32 old);
    s32 func_0200b868(u32 a, u32 b);
    void func_0200b8a0();
    void func_0200b8c0();
    void func_0200b908();
    void func_0200b9bc();
    s32 func_0200b9cc(s16 v);
    void func_0200ba00(Unk_02006d14_Item *item, u32 old);
    s32 func_0200ba8c(u8 a, u8 b, u32 c, s16 d);
    void func_0200bad0();
    void func_0200bb08();
    s32 func_0200bb48(u32 v);
    void func_0200bb54(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200bb68(u32 a, u32 b);
    void func_0200bbb0();
    void func_0200bc08();
    void func_0200bc78();
    void func_0200bcec();
    void func_0200bd18(u32 v);
    void func_0200bd2c(Unk_02006d14_Item *item, u32 old);
    s32 func_0200bd60(s16 a, u32 b, s32 c);
    void func_0200bda4();
    void func_0200bdcc();
    BOOL func_0200e7c0();
    void func_0200e7f4();
    void func_0200e870();
    void func_0200e8d0();
    BOOL func_0200ea10(u32 id);
    void func_0200ea4c();
    void func_0200ead0();
    void func_0200eb58(u32 a, u32 b);
    void func_0200ebe8();
    void func_0200ec1c(u32 id);
    void func_0200ec30(u32 id);
    u32 func_0200ec44(u32 id);
    void func_0200ec54(u32 a, Unk_02006d14_Vec3 *v);
    void func_0200ecdc(u32 a);
    void func_0200ed48();
    void func_0200ed9c();
    BOOL func_0200ede8(Unk_02006d14_Vec3 *p);
    BOOL func_0200eee4(s32 *p);
    BOOL func_0200ef08();
    BOOL func_0200ef98(Unk_02006d14_Vec3 *out, s16 *ang);
    void func_0200f004(u32 a, ...);
    BOOL func_0200f0fc();
    void func_0200f258();
    void func_0200f32c();
    s32 func_0200f478(s32 a);
    s32 func_0200f4c0(s32 a);
    s32 func_0200f504(s32 a);
    s32 func_0200f5b0();
    s32 func_0200f660();
    BOOL func_0200f6d4(s32 a, s32 b);
    s32 func_0200f7a0(Unk_0200f6d4_V2 *p, s32 a, s32 b);
    s32 func_0200f870();
    void func_0200f8c0();
    BOOL func_0200f8f8(s32 a, s32 mode, s32 idx);
    u32 func_0200f9bc();
    s32 func_0200f9d4(s32 a);
    s32 func_0200fa00();
    BOOL func_0200fa2c(s32 *pos, u32 idx);
    void func_0200fa88(void *a, void *b, void *c, void *d);
    void func_0200faa0(void *a, void *b, void *c, void *d);
    BOOL func_0200fab8(u16 *p, u8 b, u8 c, u8 d);
    void func_0200fb04();
    void func_0200fb30();
    BOOL func_0200fd90(u16 *p);
    void func_0200fdb4();
    void func_0200fdf4();
    s32 func_0200ff08();
    void func_0201000c();
    void func_02010050(void *p);
    void func_02010078(s32 a, s32 b);
    s32 func_020100d0();
    void func_02010154(u16 *p, s32 b, void *c);
    void func_02010284(s32 b, void *c);
};

class Unk_02007694 {
public:
    void func_02007694(u32 a);
    void func_020076b0(u32 a);
    void func_020076dc();
    void func_020076f0(u32 a);
    u8 func_02007c08(u32 a);
    u8 func_02007c14(u32 a);
    void func_02007c20(u32 a, u32 b);
    u8 func_02007c50(u32 a);
    void func_02007c5c();
    void func_02007c98();
    void func_02007c9c();
    void func_02007ca0();
    void func_02007ca4();
    void func_02007ca8();
    void func_02007cac();
    void func_02007cb0();
    void func_02007cb4();
    void func_02007cdc();
    void func_02007d00(u32 a);
    void func_02007d14(Unk_0200e2c0 *p);
    u32 func_02007d30(u32 a, u32 b, u32 c);
    void func_02007d6c();
    void func_02007d88();
    void func_02007dc8(u32 a);
    void func_02007df4();
    u32 func_02007e08(u32 a, u32 b);
    void func_02007e40();
    void func_02007e5c();
    void func_02007f7c();
    void func_0200be2c();
    void func_0200be7c();
    void func_0200bf48();
    void func_0200bf90();
    void func_0200bfc0();
    void func_0200bff8();
    void func_0200c0b8(u32 a);
    void func_0200c180(s16 a);
    void func_0200c1bc(Unk_0200e2c0 *item);
    u32 func_0200c2b4(u16 a, u32 b, u32 c, u32 d, s16 e);
    void func_0200c304();
    void func_0200c328(u32 a);
    void func_0200c33c(Unk_0200e2c0 *item);
    u32 func_0200c358(u16 a, u32 b, u32 c);
    void func_0200c39c();
    void func_0200c3c8();
    void func_0200c410();
    void func_0200c460(u32 a);
    void func_0200c46c();
    void func_0200c470(Unk_0200e2c0 *item);
    u32 func_0200c5b0(u16 a, u32 b, u32 c);
    void func_0200c5f4();
    void func_0200c67c(u8 *p);
    void func_0200c698(s16 *p);
};


// ---- the object (size 0xc9c; vtable 0x020d6dec with the secondary table at 0x020d6e64)
class Unk_020d6df4 : public Unk_020d9670, public Unk_020ddcf0 {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    Unk_020d6df4();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020d6df4();
    virtual BOOL vfunc_5c(Unk_02006d14_Vec3 *out);
    virtual s32 vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();

    void func_02004ce8();
    BOOL func_02004b64();
    s32 func_02004e0c(s32 x);
    void func_02004e40();
    void func_020050bc();
    void func_02005294();
    void func_0200c778();
    void func_0200c7dc();
    BOOL func_0200c900();
    void func_0200ca60();
    void func_0200caf4();
    void func_0200caf8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cb50(u32 a, u32 b, u32 c);
    void func_0200cb94();
    void func_0200cc08(u8 *p);
    void func_0200cc6c();
    BOOL func_0200cd54();
    void func_0200cdfc();
    void func_0200ce28(u32 a);
    void func_0200ce3c(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200ce98(u32 a, u32 b, u32 c);
    void func_0200cedc();
    void func_0200cee0();
    void func_0200ceec(u32 a);
    void func_0200cef8(Unk_02006d14_Item *item, u32 old);
    BOOL func_0200cf04(u32 a, u32 b);
    void func_0200cf3c();
    void func_0200cf5c(s32 *p);
    BOOL func_0200d2b4();
    void func_0200d3f0(u32 a);
    void func_0200d538();
    void func_0200d53c(Unk_0200d53c_Item *item);
    BOOL func_0200d568(u32 a, u32 b, u32 c);
    u8 func_0200d5b8();
    s32 func_0200d5c4();
    s32 func_0200d5e0();
    s16 func_0200d5fc();
    s16 func_0200d634();
    s32 func_0200d640();
    void func_0200d64c();
    BOOL func_0200dde0();
    void func_0200e008();
    void func_0200e058();
    void func_0200e0b8();
    s32 func_0200e1ac();
    s32 func_0200e1dc();
    void func_0200e208();
    nO::Unk_0200e248_Rec *func_0200e220(s32 i);
    BOOL func_0200e248(nO::Unk_0200e248_Rec *r);
    BOOL func_0200e35c(u8 *a, s32 *b, s32 *c, u16 *d);
    u8 func_0200e3c0(u32 i);

    Unk_020e0d30 unk_170;
    u8 pad_171[0x4f];
    Unk_020e0d30 unk_1c0;
    u8 pad_1c1[0x4f];
    Unk_020b6a0c unk_210;
    u8 pad_211[0x1f];
    Unk_020dbda4 unk_230;
    u8 pad_231[0x153];
    Unk_0205ee34 unk_384;
    Unk_0205c780 unk_385;
    u8 pad_386[0x2];
    Unk_020dbd34 unk_388;
    u8 pad_389[0x9b];
    Unk_0205dbb0 unk_424;
    u8 pad_425[0x3b];
    Unk_020dbd34 unk_460;
    u8 pad_461[0x9b];
    Unk_020dbd34 unk_4fc;
    u8 pad_4fd[0x9b];
    Unk_0205d5dc unk_598;
    u8 pad_599[0x3];
    Unk_0205e66c unk_59c;
    u8 pad_59d[0x15f];
    Unk_0205c3a4 unk_6fc;
    Unk_0205c3a4 unk_6fd;
    u8 pad_6fe[0x2];
    s32 unk_700;
    s32 unk_704;
    u8 pad_708[0x1];
    Unk_0205d340 unk_709;
    Unk_0205ce0c unk_70a;
    Unk_0205d1f8 unk_70b;
    Unk_020dbe5c unk_70c;
    u8 pad_70d[0x2b];
    Unk_020dbe5c unk_738;
    u8 pad_739[0x2b];
    Unk_02063cfc unk_764;
    u8 pad_765[0x3];
    s32 unk_768;
    s32 unk_76c;
    Unk_0205ca94 unk_770;
    u8 pad_771[0x3];
    Unk_020e45e0 unk_774;
    u8 pad_775[0x27];
    Unk_0205ef98 unk_79c;
    u8 pad_79d[0x3];
    Unk_02032238 unk_7a0;
    u8 pad_7a1[0x2f];
    s32 unk_7d0;
    u8 pad_7d4[0x18];
    s32 unk_7ec;
    u8 pad_7f0[0x4];
    s32 unk_7f4;
    u8 pad_7f8[0x4];
    s32 unk_7fc;
    u8 pad_800[0x1c];
    u16 unk_81c;
    u16 unk_81e;
    s32 unk_820;
    s32 unk_824;
    s32 unk_828;
    s32 unk_82c;
    s32 unk_830;
    s32 unk_834;
    Unk_020f3ee4 unk_838;
    u8 pad_839[0x43];
    Unk_020d6f54 unk_87c;
    s32 unk_8cc;
    s32 unk_8d0;
    s32 unk_8d4;
    s32 unk_8d8;
    s32 unk_8dc;
    s32 unk_8e0;
    u8 pad_8e4[0x10];
    s32 unk_8f4;
    s32 unk_8f8;
    s32 unk_8fc;
    u8 pad_900[0x8];
    Unk_0201a13c unk_908;
    u8 pad_909[0x27];
    Unk_0200e2c0 unk_930[30];
    u8 pad_c78[0x4];
    s32 unk_c7c;
    u16 unk_c80;
    u8 pad_c82[0x2];
    s32 unk_c84;
    s32 unk_c88;
    u8 pad_c8c[0x4];
    s32 unk_c90;
    u8 pad_c94[0x8];
};


namespace nPM {
extern "C" {
void _ZN12Unk_020d6df413func_020050bcEv();
void _ZN12Unk_020d6df413func_02004e40Ev();
void _ZN12Unk_020d6df413func_0200cf3cEv();
void _ZN12Unk_020d6df413func_0200cedcEv();
void _ZN12Unk_020d6df413func_0200cb94Ev();
void _ZN12Unk_0200769413func_0200c5f4Ev();
void _ZN12Unk_0200769413func_0200c39cEv();
void _ZN12Unk_0200769413func_0200c304Ev();
void func_ov003_022119bc();
void _ZN12Unk_02006d1413func_0200bda4Ev();
void func_ov004_022245f0();
void func_ov004_022243ec();
void func_ov004_022240b4();
void func_ov004_02223eec();
void func_ov004_02223df4();
void func_ov004_02223c50();
void func_ov004_02223998();
void func_ov004_022236f0();
void _ZN12Unk_02006d1413func_0200bbb0Ev();
void func_ov003_022118e4();
void func_ov004_02223648();
void _ZN12Unk_02006d1413func_0200bad0Ev();
void _ZN12Unk_02006d1413func_0200b8a0Ev();
void _ZN12Unk_02006d1413func_0200b7c8Ev();
void func_ov003_022116b8();
void func_ov003_022112ec();
void _ZN12Unk_02006d1413func_0200b264EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200a73cEv();
void _ZN12Unk_02006d1413func_0200a0acEv();
void _ZN12Unk_02006d1413func_02009e68Ev();
void func_ov004_02222eac();
void func_ov004_02222c54();
void func_ov004_02222928();
void func_ov004_02222724();
void func_ov003_022225b4();
void func_ov004_02222444();
void func_ov004_02222328();
void func_ov003_022221a0();
void func_ov004_02221ed8();
void func_ov004_02221c90();
void func_ov004_02221a48();
void func_ov004_02221800();
void func_ov004_022215e0();
void func_ov004_02221514();
void func_ov003_02221448();
void func_ov004_02221250();
void func_ov004_02221058();
void func_ov004_02220dd8();
void func_ov004_02220ccc();
void func_ov004_02220b38();
void _ZN12Unk_02006d1413func_02009ce8Ev();
void _ZN12Unk_02006d1413func_02009c3cEv();
void _ZN12Unk_02006d1413func_02009994Ev();
void _ZN12Unk_02006d1413func_020098dcEv();
void _ZN12Unk_02006d1413func_02009838Ev();
void _ZN12Unk_02006d1413func_02009724Ev();
void func_ov004_022209e4();
void func_ov004_022208d0();
void func_ov003_02211100();
void func_ov003_02210df8();
void func_ov003_02210d94();
void func_ov003_022107e0();
void func_ov003_02210704();
void func_ov003_0221027c();
void func_ov003_0220fe54();
void _ZN12Unk_02006d1413func_02009464Ev();
void func_ov004_022203a0();
void func_ov004_02220194();
void func_ov004_0221ffa0();
void func_ov004_0221fe68();
void func_ov004_0221fd30();
void func_ov003_0220fc90();
void func_ov003_0220f8b8();
void func_ov003_0220f5c8();
void func_ov003_0220f4e4();
void func_ov003_0220f0c4();
void func_ov003_0220ee38();
void func_ov003_0220eb28();
void func_ov003_0220e924();
void func_ov003_0220e6e8();
void func_ov003_0220e5c4();
void func_ov003_0220e164();
void func_ov003_0220e034();
void func_ov003_0220de98();
void func_ov003_0220dd60();
void func_ov003_0220dc48();
void func_ov003_0220d608();
void func_ov003_0220d084();
void func_ov003_0220c4f0();
void func_ov003_0220bbd4();
void func_ov003_0220b6d4();
void func_ov003_0220b24c();
void func_ov003_0220ae8c();
void func_ov003_0220ada8();
void func_ov003_0220acd0();
void func_ov003_0220a774();
void func_ov003_0220a3b4();
void func_ov003_02209964();
void func_ov003_02209634();
void func_ov003_02209408();
void func_ov003_02209068();
void func_ov003_02208d50();
void func_ov003_02208b50();
void func_ov003_02208ae4();
void func_ov003_022087c8();
void func_ov003_02208558();
void func_ov003_02208190();
void func_ov003_02207f54();
void func_ov003_02207dd4();
void func_ov003_02207d40();
void func_ov003_02207c44();
void func_ov003_022079c4();
void func_ov003_022077c8();
void _ZN12Unk_02006d1413func_02008fa4Ev();
void _ZN12Unk_02006d1413func_02008e94Ev();
void func_ov003_0220743c();
void func_ov003_022072fc();
void func_ov003_02206fc4();
void func_ov003_02206be8();
void func_ov003_02206a68();
void _ZN12Unk_0200804013func_020087acEv();
void _ZN12Unk_0200804013func_0200863cEv();
void func_ov003_022067a8();
void _ZN12Unk_0200804013func_0200843cEv();
void func_ov003_0221fc1c();
void func_ov004_0221fb58();
void func_ov004_0221f9a4();
void func_ov004_0221f878();
void func_ov004_0221f7fc();
void func_ov004_0221f714();
void func_ov003_022065ac();
void func_ov003_022062b4();
void func_ov003_02206094();
void _ZN12Unk_0200804013func_02008320Ev();
void _ZN12Unk_0200804013func_02008150Ev();
void _ZN12Unk_0200769413func_02007e40Ev();
void _ZN12Unk_0200769413func_02007d6cEv();
void _ZN18Unk_ov068_0226a89019func_ov068_0226a890Ev();
void _ZN18Unk_ov068_0226a79419func_ov068_0226a794Ev();
void func_ov003_02205e9c();
void func_ov004_0221f648();
void func_ov003_0221f258();
void func_ov004_0221eff8();
void func_ov004_0221ee70();
void func_ov004_0221ec64();
void func_ov003_02205c64();
void _ZN12Unk_0200769413func_02007cb4Ev();
void _ZN12Unk_0200769413func_02007ca4Ev();
void _ZN12Unk_0200769413func_02007c98Ev();
void _ZN12Unk_020d6df413func_0200d538Ev();
void _ZN12Unk_020d6df413func_0200ceecEj();
void _ZN12Unk_020d6df413func_0200ce28Ej();
void _ZN12Unk_020d6df413func_0200caf4Ev();
void _ZN12Unk_0200769413func_0200c46cEv();
void _ZN12Unk_0200769413func_0200c328Ej();
void func_ov003_02211e48();
void _ZN12Unk_0200769413func_0200c180Es();
void func_ov004_02224708();
void func_ov004_022244d0();
void func_ov004_02224254();
void func_ov004_02223f7c();
void func_ov004_02223e30();
void func_ov004_02223cb8();
void func_ov004_02223a80();
void func_ov004_0222381c();
void _ZN12Unk_02006d1413func_0200bd18Ej();
void func_ov003_0221194c();
void func_ov004_02223688();
void _ZN12Unk_02006d1413func_0200bb48Ej();
void _ZN12Unk_02006d1413func_0200b9ccEs();
void _ZN12Unk_02006d1413func_0200b848Ej();
void func_ov003_022117c8();
void func_ov003_022115f0();
void _ZN12Unk_02006d1413func_0200b578Es();
void _ZN12Unk_02006d1413func_0200ad64Es();
void _ZN12Unk_02006d1413func_0200a484Es();
void _ZN12Unk_02006d1413func_02009f68Es();
void func_ov004_02223454();
void func_ov004_02222d94();
void func_ov004_02222b40();
void func_ov004_02222838();
void func_ov004_022226c0();
void func_ov004_02222550();
void func_ov004_022223c0();
void func_ov004_022222a4();
void func_ov004_02221ffc();
void func_ov004_02221d4c();
void func_ov004_02221b04();
void func_ov004_022218bc();
void func_ov004_02221778();
void func_ov004_02221568();
void func_ov004_0222149c();
void func_ov004_0222137c();
void func_ov004_0222117c();
void func_ov004_02220ef4();
void func_ov004_02220ce0();
void func_ov004_02220ba8();
void _ZN12Unk_02006d1413func_02009d58Ev();
void _ZN12Unk_02006d1413func_02009c90Ev();
void _ZN12Unk_02006d1413func_02009bd0Ej();
void _ZN12Unk_02006d1413func_02009944Ev();
void _ZN12Unk_02006d1413func_02009884Ev();
void _ZN12Unk_02006d1413func_020097d4Ev();
void func_ov004_02220a74();
void func_ov004_02220954();
void func_ov003_022111bc();
void func_ov003_02210ef0();
void func_ov003_02210d98();
void func_ov003_02210b94();
void func_ov003_02210720();
void func_ov003_02210438();
void func_ov003_0220ffd4();
void _ZN12Unk_02006d1413func_020095f8Ej();
void func_ov004_02220744();
void func_ov004_02220314();
void func_ov004_02220120();
void func_ov004_0221ff3c();
void func_ov003_0221fe04();
void func_ov003_0220fdcc();
void func_ov003_0220fa3c();
void func_ov003_0220f860();
void func_ov003_0220f570();
void func_ov003_0220f370();
void func_ov003_0220f00c();
void func_ov003_0220ed24();
void func_ov003_0220ea4c();
void func_ov003_0220e804();
void func_ov003_0220e67c();
void func_ov003_0220e490();
void func_ov003_0220e0d8();
void func_ov003_0220df10();
void func_ov003_0220de20();
void func_ov003_0220dcb8();
void func_ov003_0220db30();
void func_ov003_0220d568();
void func_ov003_0220cfc0();
void func_ov003_0220c30c();
void func_ov003_0220baa4();
void func_ov003_0220b488();
void func_ov003_0220b130();
void func_ov003_0220ae34();
void func_ov003_0220ad50();
void func_ov003_0220ab80();
void func_ov003_0220a680();
void func_ov003_02209f68();
void func_ov003_0220987c();
void func_ov003_022094fc();
void func_ov003_02209310();
void func_ov003_02208ff8();
void func_ov003_02208c94();
void func_ov003_02208b00();
void func_ov003_02208984();
void func_ov003_022086c4();
void func_ov003_022083bc();
void func_ov003_0220809c();
void func_ov003_02207e3c();
void func_ov003_02207d54();
void func_ov003_02207cb0();
void func_ov003_02207b30();
void func_ov003_02207938();
void _ZN12Unk_02006d1413func_020092c4Ev();
void _ZN12Unk_02006d1413func_02008f18Ev();
void func_ov003_022076e8();
void func_ov003_022073c8();
void func_ov003_022071ec();
void func_ov003_02206edc();
void func_ov003_02206adc();
void _ZN12Unk_02006d1413func_02008cc0Es();
void _ZN12Unk_0200804013func_020086dcEj();
void func_ov003_022069c4();
void _ZN12Unk_0200804013func_02008598Ej();
void func_ov004_0221fcb8();
void func_ov004_0221fba4();
void func_ov004_0221fadc();
void func_ov004_0221f908();
void func_ov004_0221f818();
void func_ov004_0221f770();
void func_ov003_02206750();
void func_ov003_02206500();
void func_ov003_02206234();
void _ZN12Unk_0200804013func_020083dcEj();
void _ZN12Unk_0200804013func_020082acEj();
void _ZN12Unk_0200804013func_02008040EPv();
void _ZN12Unk_0200769413func_02007dc8Ej();
void _ZN18Unk_ov068_0226a89019func_ov068_0226a93cEv();
void _ZN18Unk_ov068_0226a79419func_ov068_0226a838Ev();
void func_ov003_02206034();
void func_ov004_0221f6c4();
void func_ov004_0221f448();
void func_ov004_0221f0b8();
void func_ov004_0221eebc();
void func_ov004_0221ecb8();
void func_ov003_02205dd0();
void _ZN12Unk_0200769413func_02007d00Ej();
void _ZN12Unk_0200769413func_02007cacEv();
void _ZN12Unk_0200769413func_02007c9cEv();
void _ZN12Unk_020d6df413func_0200d53cEP17Unk_0200d53c_Item();
void _ZN12Unk_020d6df413func_0200cef8EP17Unk_02006d14_Itemj();
void _ZN12Unk_020d6df413func_0200ce3cEP17Unk_02006d14_Itemj();
void _ZN12Unk_020d6df413func_0200caf8EP17Unk_02006d14_Itemj();
void _ZN12Unk_0200769413func_0200c470EP12Unk_0200e2c0();
void _ZN12Unk_0200769413func_0200c33cEP12Unk_0200e2c0();
void func_ov003_02211e74();
void _ZN12Unk_0200769413func_0200c1bcEP12Unk_0200e2c0();
void func_ov004_02224734();
void func_ov004_022244d4();
void func_ov004_02224284();
void func_ov004_02223fa8();
void func_ov004_02223e5c();
void func_ov004_02223ce4();
void func_ov004_02223ac4();
void func_ov004_0222386c();
void _ZN12Unk_02006d1413func_0200bd2cEP17Unk_02006d14_Itemj();
void func_ov003_02211960();
void func_ov004_0222368c();
void _ZN12Unk_02006d1413func_0200bb54EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200ba00EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200b854EP17Unk_02006d14_Itemj();
void func_ov003_02211818();
void func_ov003_022115f4();
void _ZN12Unk_02006d1413func_0200b5e8EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200add8EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200a4f4EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02009fa8EP17Unk_02006d14_Itemj();
void func_ov004_02223458();
void func_ov004_02222dcc();
void func_ov004_02222b74();
void func_ov004_0222283c();
void func_ov004_022226cc();
void func_ov004_0222255c();
void func_ov004_022223c4();
void func_ov004_022222a8();
void func_ov004_02222040();
void func_ov004_02221d80();
void func_ov004_02221b38();
void func_ov004_022218f0();
void func_ov004_0222178c();
void func_ov004_02221574();
void func_ov004_022214a8();
void func_ov004_02221380();
void func_ov004_022211ac();
void func_ov004_02220f38();
void func_ov004_02220d0c();
void func_ov004_02220bd4();
void _ZN12Unk_02006d1413func_02009d5cEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02009c94EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02009bdcEP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02009948EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02009888EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_020097d8EP17Unk_02006d14_Itemj();
void func_ov004_02220a78();
void func_ov004_02220958();
void func_ov003_02211210();
void func_ov003_02210f7c();
void func_ov003_02210da4();
void func_ov003_02210bdc();
void func_ov003_0221072c();
void func_ov003_022104a8();
void func_ov003_02210044();
void _ZN12Unk_02006d1413func_02009624EP17Unk_02006d14_Itemj();
void func_ov004_02220748();
void func_ov004_02220320();
void func_ov004_0222012c();
void func_ov004_0221ff48();
void func_ov004_0221fe10();
void func_ov003_0220fdd8();
void func_ov003_0220fa70();
void func_ov003_0220f86c();
void func_ov003_0220f57c();
void func_ov003_0220f3cc();
void func_ov003_0220f010();
void func_ov003_0220ed5c();
void func_ov003_0220ea58();
void func_ov003_0220e844();
void func_ov003_0220e688();
void func_ov003_0220e4bc();
void func_ov003_0220e0e4();
void func_ov003_0220df3c();
void func_ov003_0220de2c();
void func_ov003_0220dcc4();
void func_ov003_0220db5c();
void func_ov003_0220d590();
void func_ov003_0220cfcc();
void func_ov003_0220c350();
void func_ov003_0220badc();
void func_ov003_0220b4c4();
void func_ov003_0220b168();
void func_ov003_0220ae40();
void func_ov003_0220ad5c();
void func_ov003_0220abd4();
void func_ov003_0220a684();
void func_ov003_02209fc8();
void func_ov003_022098bc();
void func_ov003_02209500();
void func_ov003_02209314();
void func_ov003_02209004();
void func_ov003_02208ca0();
void func_ov003_02208b04();
void func_ov003_022089d4();
void func_ov003_022086c8();
void func_ov003_02208420();
void func_ov003_022080a0();
void func_ov003_02207e6c();
void func_ov003_02207d60();
void func_ov003_02207cbc();
void func_ov003_02207b44();
void func_ov003_02207944();
void _ZN12Unk_02006d1413func_020092c8EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_02008f1cEP17Unk_02006d14_Itemj();
void func_ov003_022076f4();
void func_ov003_022073d4();
void func_ov003_02207224();
void func_ov003_02206f0c();
void func_ov003_02206ae8();
void _ZN12Unk_02006d1413func_02008cfcEP17Unk_02006d14_Itemj();
void _ZN12Unk_0200804013func_0200870cEPh();
void func_ov003_022069c8();
void _ZN12Unk_0200804013func_020085a4Ev();
void func_ov004_0221fcbc();
void func_ov003_0221fba8();
void func_ov004_0221fae0();
void func_ov004_0221f914();
void func_ov004_0221f824();
void func_ov004_0221f77c();
void func_ov003_0220675c();
void func_ov003_0220650c();
void func_ov003_02206240();
void _ZN12Unk_0200804013func_020083e8Ejj();
void _ZN12Unk_0200804013func_020082c0EPh();
void _ZN12Unk_0200804013func_02008074Ev();
void _ZN12Unk_0200769413func_02007df4Ev();
void _ZN18Unk_ov068_0226a89019func_ov068_0226a940Ev();
void _ZN18Unk_ov068_0226a79419func_ov068_0226a83cEv();
void func_ov003_02206040();
void func_ov004_0221f6c8();
void func_ov004_0221f474();
void func_ov004_0221f0e4();
void func_ov004_0221ef14();
void func_ov004_0221ece4();
void func_ov003_02205e04();
void _ZN12Unk_0200769413func_02007d14EP12Unk_0200e2c0();
void _ZN12Unk_0200769413func_02007cb0Ev();
void _ZN12Unk_0200769413func_02007ca0Ev();
void _ZN12Unk_020d6df413func_0200d3f0Ej();
void _ZN12Unk_020d6df413func_0200cee0Ev();
void _ZN12Unk_020d6df413func_0200cdfcEv();
void _ZN12Unk_0200769413func_0200c460Ej();
void func_ov003_02211e04();
void _ZN12Unk_0200769413func_0200c0b8Ej();
void func_ov004_022246bc();
void func_ov004_02224224();
void func_ov004_02223ca0();
void func_ov004_02223a70();
void func_ov004_022237fc();
void _ZN12Unk_02006d1413func_0200b9bcEv();
void func_ov003_022115bc();
void _ZN12Unk_02006d1413func_0200ad58EP17Unk_02006d14_Itemj();
void _ZN12Unk_02006d1413func_0200a450Ev();
void func_ov004_02222d74();
void func_ov004_022223a8();
void func_ov004_02222280();
void func_ov004_02221fdc();
void func_ov004_02221d2c();
void func_ov004_02221ae4();
void func_ov004_0222189c();
void func_ov004_02221768();
void func_ov004_02221558();
void func_ov004_0222148c();
void func_ov004_0222113c();
void func_ov003_02210708();
void func_ov003_02210404();
void _ZN12Unk_02006d1413func_020095b8Ev();
void func_ov003_0220fdac();
void func_ov003_0220f33c();
void func_ov003_0220efd8();
void func_ov003_0220ecb8();
void func_ov003_0220e970();
void func_ov003_0220e43c();
void func_ov003_0220c2dc();
void func_ov003_0220ba90();
void func_ov003_0220ab20();
void func_ov003_0220a5e4();
void func_ov003_02209ef4();
void func_ov003_02209284();
void func_ov003_02208fb0();
void func_ov003_02208904();
void func_ov003_02208358();
void func_ov003_0220714c();
void func_ov003_02206e94();
void func_ov004_0221fa98();
void func_ov003_02206710();
void func_ov003_0220646c();
void func_ov003_022061e0();
void _ZN18Unk_ov068_0226a89019func_ov068_0226a910Ev();
void _ZN18Unk_ov068_0226a79419func_ov068_0226a80cEv();
void _ZN12Unk_0200769413func_02007ca8Ev();
}
}

namespace nA {
extern "C" {
PM_02004ce8 data_020d5fbc = {{(PMF)nPM::_ZN12Unk_020d6df413func_020050bcEv, 0}};
PM_02004ce8 data_020d5ff4 = {{(PMF)nPM::_ZN12Unk_020d6df413func_02004e40Ev, 0}};
}
}

namespace nB {
extern "C" {
PM_02005294 data_020d6734 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cf3cEv, 0}};
PM_02005294 data_020d6724 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cedcEv, 0}};
PM_02005294 data_020d5fd4 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cb94Ev, 0}};
PM_02005294 data_020d6244 = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c5f4Ev, 0}};
PM_02005294 data_020d623c = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c39cEv, 0}};
PM_02005294 data_020d6234 = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c304Ev, 0}};
PM_02005294 data_020d622c = {{(PMF)nPM::func_ov003_022119bc, 0}};
PM_02005294 data_020d6224 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bda4Ev, 0}};
PM_02005294 data_020d621c = {{(PMF)nPM::func_ov004_022245f0, 0}};
PM_02005294 data_020d6214 = {{(PMF)nPM::func_ov004_022243ec, 0}};
PM_02005294 data_020d619c = {{(PMF)nPM::func_ov004_022240b4, 0}};
PM_02005294 data_020d6204 = {{(PMF)nPM::func_ov004_02223eec, 0}};
PM_02005294 data_020d61fc = {{(PMF)nPM::func_ov004_02223df4, 0}};
PM_02005294 data_020d61f4 = {{(PMF)nPM::func_ov004_02223c50, 0}};
PM_02005294 data_020d61c4 = {{(PMF)nPM::func_ov004_02223998, 0}};
PM_02005294 data_020d61dc = {{(PMF)nPM::func_ov004_022236f0, 0}};
PM_02005294 data_020d61e4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bbb0Ev, 0}};
PM_02005294 data_020d658c = {{(PMF)nPM::func_ov003_022118e4, 0}};
PM_02005294 data_020d6b94 = {{(PMF)nPM::func_ov004_02223648, 0}};
PM_02005294 data_020d6604 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bad0Ev, 0}};
PM_02005294 data_020d65bc = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b8a0Ev, 0}};
PM_02005294 data_020d65e4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b7c8Ev, 0}};
PM_02005294 data_020d660c = {{(PMF)nPM::func_ov003_022116b8, 0}};
PM_02005294 data_020d672c = {{(PMF)nPM::func_ov003_022112ec, 0}};
PM_02005294 data_020d676c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b264EP17Unk_02006d14_Itemj, 0}};
PM_02005294 data_020d6db4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200a73cEv, 0}};
PM_02005294 data_020d6d8c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200a0acEv, 0}};
PM_02005294 data_020d6184 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009e68Ev, 0}};
PM_02005294 data_020d617c = {{(PMF)nPM::func_ov004_02222eac, 0}};
PM_02005294 data_020d6174 = {{(PMF)nPM::func_ov004_02222c54, 0}};
PM_02005294 data_020d616c = {{(PMF)nPM::func_ov004_02222928, 0}};
PM_02005294 data_020d6164 = {{(PMF)nPM::func_ov004_02222724, 0}};
PM_02005294 data_020d615c = {{(PMF)nPM::func_ov003_022225b4, 0}};
PM_02005294 data_020d6154 = {{(PMF)nPM::func_ov004_02222444, 0}};
PM_02005294 data_020d614c = {{(PMF)nPM::func_ov004_02222328, 0}};
PM_02005294 data_020d6144 = {{(PMF)nPM::func_ov003_022221a0, 0}};
PM_02005294 data_020d613c = {{(PMF)nPM::func_ov004_02221ed8, 0}};
PM_02005294 data_020d6134 = {{(PMF)nPM::func_ov004_02221c90, 0}};
PM_02005294 data_020d612c = {{(PMF)nPM::func_ov004_02221a48, 0}};
PM_02005294 data_020d64bc = {{(PMF)nPM::func_ov004_02221800, 0}};
PM_02005294 data_020d64ac = {{(PMF)nPM::func_ov004_022215e0, 0}};
PM_02005294 data_020d6114 = {{(PMF)nPM::func_ov004_02221514, 0}};
PM_02005294 data_020d5e5c = {{(PMF)nPM::func_ov003_02221448, 0}};
PM_02005294 data_020d6104 = {{(PMF)nPM::func_ov004_02221250, 0}};
PM_02005294 data_020d60fc = {{(PMF)nPM::func_ov004_02221058, 0}};
PM_02005294 data_020d60f4 = {{(PMF)nPM::func_ov004_02220dd8, 0}};
PM_02005294 data_020d60ec = {{(PMF)nPM::func_ov004_02220ccc, 0}};
PM_02005294 data_020d60e4 = {{(PMF)nPM::func_ov004_02220b38, 0}};
PM_02005294 data_020d60dc = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009ce8Ev, 0}};
PM_02005294 data_020d60d4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009c3cEv, 0}};
PM_02005294 data_020d60cc = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009994Ev, 0}};
PM_02005294 data_020d60c4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020098dcEv, 0}};
PM_02005294 data_020d60bc = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009838Ev, 0}};
PM_02005294 data_020d60b4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009724Ev, 0}};
PM_02005294 data_020d60ac = {{(PMF)nPM::func_ov004_022209e4, 0}};
PM_02005294 data_020d60a4 = {{(PMF)nPM::func_ov004_022208d0, 0}};
PM_02005294 data_020d609c = {{(PMF)nPM::func_ov003_02211100, 0}};
PM_02005294 data_020d6094 = {{(PMF)nPM::func_ov003_02210df8, 0}};
PM_02005294 data_020d5eac = {{(PMF)nPM::func_ov003_02210d94, 0}};
PM_02005294 data_020d6084 = {{(PMF)nPM::func_ov003_022107e0, 0}};
PM_02005294 data_020d607c = {{(PMF)nPM::func_ov003_02210704, 0}};
PM_02005294 data_020d6074 = {{(PMF)nPM::func_ov003_0221027c, 0}};
PM_02005294 data_020d606c = {{(PMF)nPM::func_ov003_0220fe54, 0}};
PM_02005294 data_020d6064 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009464Ev, 0}};
PM_02005294 data_020d605c = {{(PMF)nPM::func_ov004_022203a0, 0}};
PM_02005294 data_020d6054 = {{(PMF)nPM::func_ov004_02220194, 0}};
PM_02005294 data_020d604c = {{(PMF)nPM::func_ov004_0221ffa0, 0}};
PM_02005294 data_020d6044 = {{(PMF)nPM::func_ov004_0221fe68, 0}};
PM_02005294 data_020d603c = {{(PMF)nPM::func_ov004_0221fd30, 0}};
PM_02005294 data_020d6034 = {{(PMF)nPM::func_ov003_0220fc90, 0}};
PM_02005294 data_020d602c = {{(PMF)nPM::func_ov003_0220f8b8, 0}};
PM_02005294 data_020d6024 = {{(PMF)nPM::func_ov003_0220f5c8, 0}};
PM_02005294 data_020d601c = {{(PMF)nPM::func_ov003_0220f4e4, 0}};
PM_02005294 data_020d6014 = {{(PMF)nPM::func_ov003_0220f0c4, 0}};
PM_02005294 data_020d600c = {{(PMF)nPM::func_ov003_0220ee38, 0}};
PM_02005294 data_020d6284 = {{(PMF)nPM::func_ov003_0220eb28, 0}};
PM_02005294 data_020d5fc4 = {{(PMF)nPM::func_ov003_0220e924, 0}};
PM_02005294 data_020d625c = {{(PMF)nPM::func_ov003_0220e6e8, 0}};
PM_02005294 data_020d6254 = {{(PMF)nPM::func_ov003_0220e5c4, 0}};
PM_02005294 data_020d5fe4 = {{(PMF)nPM::func_ov003_0220e164, 0}};
PM_02005294 data_020d5fec = {{(PMF)nPM::func_ov003_0220e034, 0}};
PM_02005294 data_020d6194 = {{(PMF)nPM::func_ov003_0220de98, 0}};
PM_02005294 data_020d61a4 = {{(PMF)nPM::func_ov003_0220dd60, 0}};
PM_02005294 data_020d61bc = {{(PMF)nPM::func_ov003_0220dc48, 0}};
PM_02005294 data_020d61cc = {{(PMF)nPM::func_ov003_0220d608, 0}};
PM_02005294 data_020d61ec = {{(PMF)nPM::func_ov003_0220d084, 0}};
PM_02005294 data_020d6594 = {{(PMF)nPM::func_ov003_0220c4f0, 0}};
PM_02005294 data_020d65f4 = {{(PMF)nPM::func_ov003_0220bbd4, 0}};
PM_02005294 data_020d668c = {{(PMF)nPM::func_ov003_0220b6d4, 0}};
PM_02005294 data_020d698c = {{(PMF)nPM::func_ov003_0220b24c, 0}};
PM_02005294 data_020d6d9c = {{(PMF)nPM::func_ov003_0220ae8c, 0}};
PM_02005294 data_020d5f84 = {{(PMF)nPM::func_ov003_0220ada8, 0}};
PM_02005294 data_020d5f7c = {{(PMF)nPM::func_ov003_0220acd0, 0}};
PM_02005294 data_020d5f74 = {{(PMF)nPM::func_ov003_0220a774, 0}};
PM_02005294 data_020d5f6c = {{(PMF)nPM::func_ov003_0220a3b4, 0}};
PM_02005294 data_020d5f64 = {{(PMF)nPM::func_ov003_02209964, 0}};
PM_02005294 data_020d5f5c = {{(PMF)nPM::func_ov003_02209634, 0}};
PM_02005294 data_020d6124 = {{(PMF)nPM::func_ov003_02209408, 0}};
PM_02005294 data_020d5e64 = {{(PMF)nPM::func_ov003_02209068, 0}};
PM_02005294 data_020d5f44 = {{(PMF)nPM::func_ov003_02208d50, 0}};
PM_02005294 data_020d5f3c = {{(PMF)nPM::func_ov003_02208b50, 0}};
PM_02005294 data_020d5f34 = {{(PMF)nPM::func_ov003_02208ae4, 0}};
PM_02005294 data_020d5f2c = {{(PMF)nPM::func_ov003_022087c8, 0}};
PM_02005294 data_020d5f24 = {{(PMF)nPM::func_ov003_02208558, 0}};
PM_02005294 data_020d5f1c = {{(PMF)nPM::func_ov003_02208190, 0}};
PM_02005294 data_020d5f14 = {{(PMF)nPM::func_ov003_02207f54, 0}};
PM_02005294 data_020d5eb4 = {{(PMF)nPM::func_ov003_02207dd4, 0}};
PM_02005294 data_020d5f04 = {{(PMF)nPM::func_ov003_02207d40, 0}};
PM_02005294 data_020d5efc = {{(PMF)nPM::func_ov003_02207c44, 0}};
PM_02005294 data_020d5ef4 = {{(PMF)nPM::func_ov003_022079c4, 0}};
PM_02005294 data_020d5ed4 = {{(PMF)nPM::func_ov003_022077c8, 0}};
PM_02005294 data_020d5eec = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008fa4Ev, 0}};
PM_02005294 data_020d5f8c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008e94Ev, 0}};
PM_02005294 data_020d5f9c = {{(PMF)nPM::func_ov003_0220743c, 0}};
PM_02005294 data_020d5fa4 = {{(PMF)nPM::func_ov003_022072fc, 0}};
PM_02005294 data_020d6004 = {{(PMF)nPM::func_ov003_02206fc4, 0}};
PM_02005294 data_020d6264 = {{(PMF)nPM::func_ov003_02206be8, 0}};
PM_02005294 data_020d618c = {{(PMF)nPM::func_ov003_02206a68, 0}};
PM_02005294 data_020d61ac = {{(PMF)nPM::_ZN12Unk_0200804013func_020087acEv, 0}};
PM_02005294 data_020d61d4 = {{(PMF)nPM::_ZN12Unk_0200804013func_0200863cEv, 0}};
PM_02005294 data_020d659c = {{(PMF)nPM::func_ov003_022067a8, 0}};
PM_02005294 data_020d65c4 = {{(PMF)nPM::_ZN12Unk_0200804013func_0200843cEv, 0}};
PM_02005294 data_020d6dcc = {{(PMF)nPM::func_ov003_0221fc1c, 0}};
PM_02005294 data_020d5e84 = {{(PMF)nPM::func_ov004_0221fb58, 0}};
PM_02005294 data_020d5e7c = {{(PMF)nPM::func_ov004_0221f9a4, 0}};
PM_02005294 data_020d5e74 = {{(PMF)nPM::func_ov004_0221f878, 0}};
PM_02005294 data_020d64b4 = {{(PMF)nPM::func_ov004_0221f7fc, 0}};
PM_02005294 data_020d5e8c = {{(PMF)nPM::func_ov004_0221f714, 0}};
PM_02005294 data_020d5e94 = {{(PMF)nPM::func_ov003_022065ac, 0}};
PM_02005294 data_020d5ea4 = {{(PMF)nPM::func_ov003_022062b4, 0}};
PM_02005294 data_020d5ebc = {{(PMF)nPM::func_ov003_02206094, 0}};
PM_02005294 data_020d5ecc = {{(PMF)nPM::_ZN12Unk_0200804013func_02008320Ev, 0}};
PM_02005294 data_020d5edc = {{(PMF)nPM::_ZN12Unk_0200804013func_02008150Ev, 0}};
PM_02005294 data_020d5f94 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007e40Ev, 0}};
PM_02005294 data_020d5fac = {{(PMF)nPM::_ZN12Unk_0200769413func_02007d6cEv, 0}};
PM_02005294 data_020d5fdc = {{(PMF)nPM::_ZN18Unk_ov068_0226a89019func_ov068_0226a890Ev, 0}};
PM_02005294 data_020d61b4 = {{(PMF)nPM::_ZN18Unk_ov068_0226a79419func_ov068_0226a794Ev, 0}};
PM_02005294 data_020d65a4 = {{(PMF)nPM::func_ov003_02205e9c, 0}};
PM_02005294 data_020d6994 = {{(PMF)nPM::func_ov004_0221f648, 0}};
PM_02005294 data_020d5e54 = {{(PMF)nPM::func_ov003_0221f258, 0}};
PM_02005294 data_020d611c = {{(PMF)nPM::func_ov004_0221eff8, 0}};
PM_02005294 data_020d5e9c = {{(PMF)nPM::func_ov004_0221ee70, 0}};
PM_02005294 data_020d5ec4 = {{(PMF)nPM::func_ov004_0221ec64, 0}};
PM_02005294 data_020d5ee4 = {{(PMF)nPM::func_ov003_02205c64, 0}};
PM_02005294 data_020d5fb4 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007cb4Ev, 0}};
PM_02005294 data_020d6274 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007ca4Ev, 0}};
PM_02005294 data_020d65ac = {{(PMF)nPM::_ZN12Unk_0200769413func_02007c98Ev, 0}};
}
}

namespace nC {
extern "C" {
PM_020063a0 data_020d671c = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200d538Ev, 0}};
PM_020063a0 data_020d624c = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200ceecEj, 0}};
PM_020063a0 data_020d5fcc = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200ce28Ej, 0}};
PM_020063a0 data_020d6704 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200caf4Ev, 0}};
PM_020063a0 data_020d66fc = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c46cEv, 0}};
PM_020063a0 data_020d66f4 = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c328Ej, 0}};
PM_020063a0 data_020d66ec = {{(PMF)nPM::func_ov003_02211e48, 0}};
PM_020063a0 data_020d66e4 = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c180Es, 0}};
PM_020063a0 data_020d66dc = {{(PMF)nPM::func_ov004_02224708, 0}};
PM_020063a0 data_020d66d4 = {{(PMF)nPM::func_ov004_022244d0, 0}};
PM_020063a0 data_020d66cc = {{(PMF)nPM::func_ov004_02224254, 0}};
PM_020063a0 data_020d66c4 = {{(PMF)nPM::func_ov004_02223f7c, 0}};
PM_020063a0 data_020d66bc = {{(PMF)nPM::func_ov004_02223e30, 0}};
PM_020063a0 data_020d66b4 = {{(PMF)nPM::func_ov004_02223cb8, 0}};
PM_020063a0 data_020d66ac = {{(PMF)nPM::func_ov004_02223a80, 0}};
PM_020063a0 data_020d66a4 = {{(PMF)nPM::func_ov004_0222381c, 0}};
PM_020063a0 data_020d669c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bd18Ej, 0}};
PM_020063a0 data_020d6694 = {{(PMF)nPM::func_ov003_0221194c, 0}};
PM_020063a0 data_020d620c = {{(PMF)nPM::func_ov004_02223688, 0}};
PM_020063a0 data_020d6684 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bb48Ej, 0}};
PM_020063a0 data_020d667c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b9ccEs, 0}};
PM_020063a0 data_020d6674 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b848Ej, 0}};
PM_020063a0 data_020d666c = {{(PMF)nPM::func_ov003_022117c8, 0}};
PM_020063a0 data_020d6664 = {{(PMF)nPM::func_ov003_022115f0, 0}};
PM_020063a0 data_020d665c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b578Es, 0}};
PM_020063a0 data_020d6654 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200ad64Es, 0}};
PM_020063a0 data_020d664c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200a484Es, 0}};
PM_020063a0 data_020d6644 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009f68Es, 0}};
PM_020063a0 data_020d663c = {{(PMF)nPM::func_ov004_02223454, 0}};
PM_020063a0 data_020d6634 = {{(PMF)nPM::func_ov004_02222d94, 0}};
PM_020063a0 data_020d662c = {{(PMF)nPM::func_ov004_02222b40, 0}};
PM_020063a0 data_020d6624 = {{(PMF)nPM::func_ov004_02222838, 0}};
PM_020063a0 data_020d661c = {{(PMF)nPM::func_ov004_022226c0, 0}};
PM_020063a0 data_020d6614 = {{(PMF)nPM::func_ov004_02222550, 0}};
PM_020063a0 data_020d5f54 = {{(PMF)nPM::func_ov004_022223c0, 0}};
PM_020063a0 data_020d5e6c = {{(PMF)nPM::func_ov004_022222a4, 0}};
PM_020063a0 data_020d6be4 = {{(PMF)nPM::func_ov004_02221ffc, 0}};
PM_020063a0 data_020d65b4 = {{(PMF)nPM::func_ov004_02221d4c, 0}};
PM_020063a0 data_020d65cc = {{(PMF)nPM::func_ov004_02221b04, 0}};
PM_020063a0 data_020d65d4 = {{(PMF)nPM::func_ov004_022218bc, 0}};
PM_020063a0 data_020d65dc = {{(PMF)nPM::func_ov004_02221778, 0}};
PM_020063a0 data_020d65ec = {{(PMF)nPM::func_ov004_02221568, 0}};
PM_020063a0 data_020d65fc = {{(PMF)nPM::func_ov004_0222149c, 0}};
PM_020063a0 data_020d670c = {{(PMF)nPM::func_ov004_0222137c, 0}};
PM_020063a0 data_020d6714 = {{(PMF)nPM::func_ov004_0222117c, 0}};
PM_020063a0 data_020d674c = {{(PMF)nPM::func_ov004_02220ef4, 0}};
PM_020063a0 data_020d6754 = {{(PMF)nPM::func_ov004_02220ce0, 0}};
PM_020063a0 data_020d6dbc = {{(PMF)nPM::func_ov004_02220ba8, 0}};
PM_020063a0 data_020d6b8c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009d58Ev, 0}};
PM_020063a0 data_020d6d94 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009c90Ev, 0}};
PM_020063a0 data_020d6dc4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009bd0Ej, 0}};
PM_020063a0 data_020d6584 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009944Ev, 0}};
PM_020063a0 data_020d657c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009884Ev, 0}};
PM_020063a0 data_020d6574 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020097d4Ev, 0}};
PM_020063a0 data_020d656c = {{(PMF)nPM::func_ov004_02220a74, 0}};
PM_020063a0 data_020d6564 = {{(PMF)nPM::func_ov004_02220954, 0}};
PM_020063a0 data_020d655c = {{(PMF)nPM::func_ov003_022111bc, 0}};
PM_020063a0 data_020d6554 = {{(PMF)nPM::func_ov003_02210ef0, 0}};
PM_020063a0 data_020d654c = {{(PMF)nPM::func_ov003_02210d98, 0}};
PM_020063a0 data_020d6544 = {{(PMF)nPM::func_ov003_02210b94, 0}};
PM_020063a0 data_020d653c = {{(PMF)nPM::func_ov003_02210720, 0}};
PM_020063a0 data_020d6534 = {{(PMF)nPM::func_ov003_02210438, 0}};
PM_020063a0 data_020d652c = {{(PMF)nPM::func_ov003_0220ffd4, 0}};
PM_020063a0 data_020d6524 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020095f8Ej, 0}};
PM_020063a0 data_020d651c = {{(PMF)nPM::func_ov004_02220744, 0}};
PM_020063a0 data_020d6514 = {{(PMF)nPM::func_ov004_02220314, 0}};
PM_020063a0 data_020d650c = {{(PMF)nPM::func_ov004_02220120, 0}};
PM_020063a0 data_020d6504 = {{(PMF)nPM::func_ov004_0221ff3c, 0}};
PM_020063a0 data_020d64fc = {{(PMF)nPM::func_ov003_0221fe04, 0}};
PM_020063a0 data_020d64f4 = {{(PMF)nPM::func_ov003_0220fdcc, 0}};
PM_020063a0 data_020d64ec = {{(PMF)nPM::func_ov003_0220fa3c, 0}};
PM_020063a0 data_020d64e4 = {{(PMF)nPM::func_ov003_0220f860, 0}};
PM_020063a0 data_020d64dc = {{(PMF)nPM::func_ov003_0220f570, 0}};
PM_020063a0 data_020d64d4 = {{(PMF)nPM::func_ov003_0220f370, 0}};
PM_020063a0 data_020d64cc = {{(PMF)nPM::func_ov003_0220f00c, 0}};
PM_020063a0 data_020d64c4 = {{(PMF)nPM::func_ov003_0220ed24, 0}};
PM_020063a0 data_020d6bec = {{(PMF)nPM::func_ov003_0220ea4c, 0}};
PM_020063a0 data_020d6bdc = {{(PMF)nPM::func_ov003_0220e804, 0}};
PM_020063a0 data_020d6bd4 = {{(PMF)nPM::func_ov003_0220e67c, 0}};
PM_020063a0 data_020d64a4 = {{(PMF)nPM::func_ov003_0220e490, 0}};
PM_020063a0 data_020d649c = {{(PMF)nPM::func_ov003_0220e0d8, 0}};
PM_020063a0 data_020d6494 = {{(PMF)nPM::func_ov003_0220df10, 0}};
PM_020063a0 data_020d5f4c = {{(PMF)nPM::func_ov003_0220de20, 0}};
PM_020063a0 data_020d6484 = {{(PMF)nPM::func_ov003_0220dcb8, 0}};
PM_020063a0 data_020d647c = {{(PMF)nPM::func_ov003_0220db30, 0}};
PM_020063a0 data_020d6474 = {{(PMF)nPM::func_ov003_0220d568, 0}};
PM_020063a0 data_020d646c = {{(PMF)nPM::func_ov003_0220cfc0, 0}};
PM_020063a0 data_020d6464 = {{(PMF)nPM::func_ov003_0220c30c, 0}};
PM_020063a0 data_020d645c = {{(PMF)nPM::func_ov003_0220baa4, 0}};
PM_020063a0 data_020d6454 = {{(PMF)nPM::func_ov003_0220b488, 0}};
PM_020063a0 data_020d644c = {{(PMF)nPM::func_ov003_0220b130, 0}};
PM_020063a0 data_020d6444 = {{(PMF)nPM::func_ov003_0220ae34, 0}};
PM_020063a0 data_020d643c = {{(PMF)nPM::func_ov003_0220ad50, 0}};
PM_020063a0 data_020d6434 = {{(PMF)nPM::func_ov003_0220ab80, 0}};
PM_020063a0 data_020d642c = {{(PMF)nPM::func_ov003_0220a680, 0}};
PM_020063a0 data_020d6424 = {{(PMF)nPM::func_ov003_02209f68, 0}};
PM_020063a0 data_020d641c = {{(PMF)nPM::func_ov003_0220987c, 0}};
PM_020063a0 data_020d6414 = {{(PMF)nPM::func_ov003_022094fc, 0}};
PM_020063a0 data_020d640c = {{(PMF)nPM::func_ov003_02209310, 0}};
PM_020063a0 data_020d6404 = {{(PMF)nPM::func_ov003_02208ff8, 0}};
PM_020063a0 data_020d63fc = {{(PMF)nPM::func_ov003_02208c94, 0}};
PM_020063a0 data_020d63f4 = {{(PMF)nPM::func_ov003_02208b00, 0}};
PM_020063a0 data_020d63ec = {{(PMF)nPM::func_ov003_02208984, 0}};
PM_020063a0 data_020d63e4 = {{(PMF)nPM::func_ov003_022086c4, 0}};
PM_020063a0 data_020d63dc = {{(PMF)nPM::func_ov003_022083bc, 0}};
PM_020063a0 data_020d63d4 = {{(PMF)nPM::func_ov003_0220809c, 0}};
PM_020063a0 data_020d63cc = {{(PMF)nPM::func_ov003_02207e3c, 0}};
PM_020063a0 data_020d63c4 = {{(PMF)nPM::func_ov003_02207d54, 0}};
PM_020063a0 data_020d63bc = {{(PMF)nPM::func_ov003_02207cb0, 0}};
PM_020063a0 data_020d63b4 = {{(PMF)nPM::func_ov003_02207b30, 0}};
PM_020063a0 data_020d63ac = {{(PMF)nPM::func_ov003_02207938, 0}};
PM_020063a0 data_020d63a4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020092c4Ev, 0}};
PM_020063a0 data_020d639c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008f18Ev, 0}};
PM_020063a0 data_020d6394 = {{(PMF)nPM::func_ov003_022076e8, 0}};
PM_020063a0 data_020d5f0c = {{(PMF)nPM::func_ov003_022073c8, 0}};
PM_020063a0 data_020d6384 = {{(PMF)nPM::func_ov003_022071ec, 0}};
PM_020063a0 data_020d637c = {{(PMF)nPM::func_ov003_02206edc, 0}};
PM_020063a0 data_020d6374 = {{(PMF)nPM::func_ov003_02206adc, 0}};
PM_020063a0 data_020d636c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008cc0Es, 0}};
PM_020063a0 data_020d6364 = {{(PMF)nPM::_ZN12Unk_0200804013func_020086dcEj, 0}};
PM_020063a0 data_020d635c = {{(PMF)nPM::func_ov003_022069c4, 0}};
PM_020063a0 data_020d6354 = {{(PMF)nPM::_ZN12Unk_0200804013func_02008598Ej, 0}};
PM_020063a0 data_020d634c = {{(PMF)nPM::func_ov004_0221fcb8, 0}};
PM_020063a0 data_020d6344 = {{(PMF)nPM::func_ov004_0221fba4, 0}};
PM_020063a0 data_020d633c = {{(PMF)nPM::func_ov004_0221fadc, 0}};
PM_020063a0 data_020d6334 = {{(PMF)nPM::func_ov004_0221f908, 0}};
PM_020063a0 data_020d632c = {{(PMF)nPM::func_ov004_0221f818, 0}};
PM_020063a0 data_020d6324 = {{(PMF)nPM::func_ov004_0221f770, 0}};
PM_020063a0 data_020d631c = {{(PMF)nPM::func_ov003_02206750, 0}};
PM_020063a0 data_020d6314 = {{(PMF)nPM::func_ov003_02206500, 0}};
PM_020063a0 data_020d630c = {{(PMF)nPM::func_ov003_02206234, 0}};
PM_020063a0 data_020d6304 = {{(PMF)nPM::_ZN12Unk_0200804013func_020083dcEj, 0}};
PM_020063a0 data_020d62fc = {{(PMF)nPM::_ZN12Unk_0200804013func_020082acEj, 0}};
PM_020063a0 data_020d62f4 = {{(PMF)nPM::_ZN12Unk_0200804013func_02008040EPv, 0}};
PM_020063a0 data_020d62ec = {{(PMF)nPM::_ZN12Unk_0200769413func_02007dc8Ej, 0}};
PM_020063a0 data_020d62e4 = {{(PMF)nPM::_ZN18Unk_ov068_0226a89019func_ov068_0226a93cEv, 0}};
PM_020063a0 data_020d62dc = {{(PMF)nPM::_ZN18Unk_ov068_0226a79419func_ov068_0226a838Ev, 0}};
PM_020063a0 data_020d62d4 = {{(PMF)nPM::func_ov003_02206034, 0}};
PM_020063a0 data_020d62cc = {{(PMF)nPM::func_ov004_0221f6c4, 0}};
PM_020063a0 data_020d62c4 = {{(PMF)nPM::func_ov004_0221f448, 0}};
PM_020063a0 data_020d62bc = {{(PMF)nPM::func_ov004_0221f0b8, 0}};
PM_020063a0 data_020d62b4 = {{(PMF)nPM::func_ov004_0221eebc, 0}};
PM_020063a0 data_020d62ac = {{(PMF)nPM::func_ov004_0221ecb8, 0}};
PM_020063a0 data_020d62a4 = {{(PMF)nPM::func_ov003_02205dd0, 0}};
PM_020063a0 data_020d629c = {{(PMF)nPM::_ZN12Unk_0200769413func_02007d00Ej, 0}};
PM_020063a0 data_020d6294 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007cacEv, 0}};
PM_020063a0 data_020d628c = {{(PMF)nPM::_ZN12Unk_0200769413func_02007c9cEv, 0}};
}
}

namespace nD {
extern "C" {
PM_02006d14 data_020d6bcc = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200d53cEP17Unk_0200d53c_Item, 0}};
PM_02006d14 data_020d6bc4 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cef8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bbc = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200ce3cEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bb4 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200caf8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6bac = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c470EP12Unk_0200e2c0, 0}};
PM_02006d14 data_020d6ba4 = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c33cEP12Unk_0200e2c0, 0}};
PM_02006d14 data_020d6b9c = {{(PMF)nPM::func_ov003_02211e74, 0}};
PM_02006d14 data_020d648c = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c1bcEP12Unk_0200e2c0, 0}};
PM_02006d14 data_020d610c = {{(PMF)nPM::func_ov004_02224734, 0}};
PM_02006d14 data_020d6b84 = {{(PMF)nPM::func_ov004_022244d4, 0}};
PM_02006d14 data_020d6b7c = {{(PMF)nPM::func_ov004_02224284, 0}};
PM_02006d14 data_020d6b74 = {{(PMF)nPM::func_ov004_02223fa8, 0}};
PM_02006d14 data_020d6b6c = {{(PMF)nPM::func_ov004_02223e5c, 0}};
PM_02006d14 data_020d6b64 = {{(PMF)nPM::func_ov004_02223ce4, 0}};
PM_02006d14 data_020d6b5c = {{(PMF)nPM::func_ov004_02223ac4, 0}};
PM_02006d14 data_020d6b54 = {{(PMF)nPM::func_ov004_0222386c, 0}};
PM_02006d14 data_020d6b4c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bd2cEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b44 = {{(PMF)nPM::func_ov003_02211960, 0}};
PM_02006d14 data_020d6b3c = {{(PMF)nPM::func_ov004_0222368c, 0}};
PM_02006d14 data_020d6b34 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200bb54EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b2c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200ba00EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b24 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b854EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b1c = {{(PMF)nPM::func_ov003_02211818, 0}};
PM_02006d14 data_020d6b14 = {{(PMF)nPM::func_ov003_022115f4, 0}};
PM_02006d14 data_020d6b0c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b5e8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6b04 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200add8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6afc = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200a4f4EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6af4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009fa8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6aec = {{(PMF)nPM::func_ov004_02223458, 0}};
PM_02006d14 data_020d6ae4 = {{(PMF)nPM::func_ov004_02222dcc, 0}};
PM_02006d14 data_020d6adc = {{(PMF)nPM::func_ov004_02222b74, 0}};
PM_02006d14 data_020d6ad4 = {{(PMF)nPM::func_ov004_0222283c, 0}};
PM_02006d14 data_020d6acc = {{(PMF)nPM::func_ov004_022226cc, 0}};
PM_02006d14 data_020d6ac4 = {{(PMF)nPM::func_ov004_0222255c, 0}};
PM_02006d14 data_020d6abc = {{(PMF)nPM::func_ov004_022223c4, 0}};
PM_02006d14 data_020d6ab4 = {{(PMF)nPM::func_ov004_022222a8, 0}};
PM_02006d14 data_020d6aac = {{(PMF)nPM::func_ov004_02222040, 0}};
PM_02006d14 data_020d6aa4 = {{(PMF)nPM::func_ov004_02221d80, 0}};
PM_02006d14 data_020d6a9c = {{(PMF)nPM::func_ov004_02221b38, 0}};
PM_02006d14 data_020d6a94 = {{(PMF)nPM::func_ov004_022218f0, 0}};
PM_02006d14 data_020d6a8c = {{(PMF)nPM::func_ov004_0222178c, 0}};
PM_02006d14 data_020d6a84 = {{(PMF)nPM::func_ov004_02221574, 0}};
PM_02006d14 data_020d6a7c = {{(PMF)nPM::func_ov004_022214a8, 0}};
PM_02006d14 data_020d6a74 = {{(PMF)nPM::func_ov004_02221380, 0}};
PM_02006d14 data_020d6a6c = {{(PMF)nPM::func_ov004_022211ac, 0}};
PM_02006d14 data_020d6a64 = {{(PMF)nPM::func_ov004_02220f38, 0}};
PM_02006d14 data_020d6a5c = {{(PMF)nPM::func_ov004_02220d0c, 0}};
PM_02006d14 data_020d6a54 = {{(PMF)nPM::func_ov004_02220bd4, 0}};
PM_02006d14 data_020d6a4c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009d5cEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a44 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009c94EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a3c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009bdcEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a34 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009948EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a2c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009888EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a24 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020097d8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6a1c = {{(PMF)nPM::func_ov004_02220a78, 0}};
PM_02006d14 data_020d6a14 = {{(PMF)nPM::func_ov004_02220958, 0}};
PM_02006d14 data_020d6a0c = {{(PMF)nPM::func_ov003_02211210, 0}};
PM_02006d14 data_020d6a04 = {{(PMF)nPM::func_ov003_02210f7c, 0}};
PM_02006d14 data_020d69fc = {{(PMF)nPM::func_ov003_02210da4, 0}};
PM_02006d14 data_020d69f4 = {{(PMF)nPM::func_ov003_02210bdc, 0}};
PM_02006d14 data_020d69ec = {{(PMF)nPM::func_ov003_0221072c, 0}};
PM_02006d14 data_020d69e4 = {{(PMF)nPM::func_ov003_022104a8, 0}};
PM_02006d14 data_020d69dc = {{(PMF)nPM::func_ov003_02210044, 0}};
PM_02006d14 data_020d69d4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_02009624EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d69cc = {{(PMF)nPM::func_ov004_02220748, 0}};
PM_02006d14 data_020d69c4 = {{(PMF)nPM::func_ov004_02220320, 0}};
PM_02006d14 data_020d69bc = {{(PMF)nPM::func_ov004_0222012c, 0}};
PM_02006d14 data_020d69b4 = {{(PMF)nPM::func_ov004_0221ff48, 0}};
PM_02006d14 data_020d69ac = {{(PMF)nPM::func_ov004_0221fe10, 0}};
PM_02006d14 data_020d69a4 = {{(PMF)nPM::func_ov003_0220fdd8, 0}};
PM_02006d14 data_020d699c = {{(PMF)nPM::func_ov003_0220fa70, 0}};
PM_02006d14 data_020d638c = {{(PMF)nPM::func_ov003_0220f86c, 0}};
PM_02006d14 data_020d608c = {{(PMF)nPM::func_ov003_0220f57c, 0}};
PM_02006d14 data_020d6984 = {{(PMF)nPM::func_ov003_0220f3cc, 0}};
PM_02006d14 data_020d697c = {{(PMF)nPM::func_ov003_0220f010, 0}};
PM_02006d14 data_020d6974 = {{(PMF)nPM::func_ov003_0220ed5c, 0}};
PM_02006d14 data_020d696c = {{(PMF)nPM::func_ov003_0220ea58, 0}};
PM_02006d14 data_020d6964 = {{(PMF)nPM::func_ov003_0220e844, 0}};
PM_02006d14 data_020d695c = {{(PMF)nPM::func_ov003_0220e688, 0}};
PM_02006d14 data_020d6954 = {{(PMF)nPM::func_ov003_0220e4bc, 0}};
PM_02006d14 data_020d694c = {{(PMF)nPM::func_ov003_0220e0e4, 0}};
PM_02006d14 data_020d6944 = {{(PMF)nPM::func_ov003_0220df3c, 0}};
PM_02006d14 data_020d693c = {{(PMF)nPM::func_ov003_0220de2c, 0}};
PM_02006d14 data_020d6934 = {{(PMF)nPM::func_ov003_0220dcc4, 0}};
PM_02006d14 data_020d692c = {{(PMF)nPM::func_ov003_0220db5c, 0}};
PM_02006d14 data_020d6924 = {{(PMF)nPM::func_ov003_0220d590, 0}};
PM_02006d14 data_020d691c = {{(PMF)nPM::func_ov003_0220cfcc, 0}};
PM_02006d14 data_020d6914 = {{(PMF)nPM::func_ov003_0220c350, 0}};
PM_02006d14 data_020d690c = {{(PMF)nPM::func_ov003_0220badc, 0}};
PM_02006d14 data_020d6904 = {{(PMF)nPM::func_ov003_0220b4c4, 0}};
PM_02006d14 data_020d68fc = {{(PMF)nPM::func_ov003_0220b168, 0}};
PM_02006d14 data_020d68f4 = {{(PMF)nPM::func_ov003_0220ae40, 0}};
PM_02006d14 data_020d68ec = {{(PMF)nPM::func_ov003_0220ad5c, 0}};
PM_02006d14 data_020d68e4 = {{(PMF)nPM::func_ov003_0220abd4, 0}};
PM_02006d14 data_020d68dc = {{(PMF)nPM::func_ov003_0220a684, 0}};
PM_02006d14 data_020d68d4 = {{(PMF)nPM::func_ov003_02209fc8, 0}};
PM_02006d14 data_020d68cc = {{(PMF)nPM::func_ov003_022098bc, 0}};
PM_02006d14 data_020d68c4 = {{(PMF)nPM::func_ov003_02209500, 0}};
PM_02006d14 data_020d68bc = {{(PMF)nPM::func_ov003_02209314, 0}};
PM_02006d14 data_020d68b4 = {{(PMF)nPM::func_ov003_02209004, 0}};
PM_02006d14 data_020d68ac = {{(PMF)nPM::func_ov003_02208ca0, 0}};
PM_02006d14 data_020d68a4 = {{(PMF)nPM::func_ov003_02208b04, 0}};
PM_02006d14 data_020d689c = {{(PMF)nPM::func_ov003_022089d4, 0}};
PM_02006d14 data_020d6894 = {{(PMF)nPM::func_ov003_022086c8, 0}};
PM_02006d14 data_020d688c = {{(PMF)nPM::func_ov003_02208420, 0}};
PM_02006d14 data_020d6884 = {{(PMF)nPM::func_ov003_022080a0, 0}};
PM_02006d14 data_020d687c = {{(PMF)nPM::func_ov003_02207e6c, 0}};
PM_02006d14 data_020d6874 = {{(PMF)nPM::func_ov003_02207d60, 0}};
PM_02006d14 data_020d686c = {{(PMF)nPM::func_ov003_02207cbc, 0}};
PM_02006d14 data_020d6864 = {{(PMF)nPM::func_ov003_02207b44, 0}};
PM_02006d14 data_020d685c = {{(PMF)nPM::func_ov003_02207944, 0}};
PM_02006d14 data_020d6854 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020092c8EP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d684c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008f1cEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6844 = {{(PMF)nPM::func_ov003_022076f4, 0}};
PM_02006d14 data_020d683c = {{(PMF)nPM::func_ov003_022073d4, 0}};
PM_02006d14 data_020d6834 = {{(PMF)nPM::func_ov003_02207224, 0}};
PM_02006d14 data_020d682c = {{(PMF)nPM::func_ov003_02206f0c, 0}};
PM_02006d14 data_020d6824 = {{(PMF)nPM::func_ov003_02206ae8, 0}};
PM_02006d14 data_020d681c = {{(PMF)nPM::_ZN12Unk_02006d1413func_02008cfcEP17Unk_02006d14_Itemj, 0}};
PM_02006d14 data_020d6814 = {{(PMF)nPM::_ZN12Unk_0200804013func_0200870cEPh, 0}};
PM_02006d14 data_020d680c = {{(PMF)nPM::func_ov003_022069c8, 0}};
PM_02006d14 data_020d6804 = {{(PMF)nPM::_ZN12Unk_0200804013func_020085a4Ev, 0}};
PM_02006d14 data_020d67fc = {{(PMF)nPM::func_ov004_0221fcbc, 0}};
PM_02006d14 data_020d67f4 = {{(PMF)nPM::func_ov003_0221fba8, 0}};
PM_02006d14 data_020d67ec = {{(PMF)nPM::func_ov004_0221fae0, 0}};
PM_02006d14 data_020d67e4 = {{(PMF)nPM::func_ov004_0221f914, 0}};
PM_02006d14 data_020d67dc = {{(PMF)nPM::func_ov004_0221f824, 0}};
PM_02006d14 data_020d67d4 = {{(PMF)nPM::func_ov004_0221f77c, 0}};
PM_02006d14 data_020d67cc = {{(PMF)nPM::func_ov003_0220675c, 0}};
PM_02006d14 data_020d67c4 = {{(PMF)nPM::func_ov003_0220650c, 0}};
PM_02006d14 data_020d67bc = {{(PMF)nPM::func_ov003_02206240, 0}};
PM_02006d14 data_020d67b4 = {{(PMF)nPM::_ZN12Unk_0200804013func_020083e8Ejj, 0}};
PM_02006d14 data_020d67ac = {{(PMF)nPM::_ZN12Unk_0200804013func_020082c0EPh, 0}};
PM_02006d14 data_020d67a4 = {{(PMF)nPM::_ZN12Unk_0200804013func_02008074Ev, 0}};
PM_02006d14 data_020d679c = {{(PMF)nPM::_ZN12Unk_0200769413func_02007df4Ev, 0}};
PM_02006d14 data_020d6794 = {{(PMF)nPM::_ZN18Unk_ov068_0226a89019func_ov068_0226a940Ev, 0}};
PM_02006d14 data_020d678c = {{(PMF)nPM::_ZN18Unk_ov068_0226a79419func_ov068_0226a83cEv, 0}};
PM_02006d14 data_020d6784 = {{(PMF)nPM::func_ov003_02206040, 0}};
PM_02006d14 data_020d677c = {{(PMF)nPM::func_ov004_0221f6c8, 0}};
PM_02006d14 data_020d6774 = {{(PMF)nPM::func_ov004_0221f474, 0}};
PM_02006d14 data_020d627c = {{(PMF)nPM::func_ov004_0221f0e4, 0}};
PM_02006d14 data_020d6764 = {{(PMF)nPM::func_ov004_0221ef14, 0}};
PM_02006d14 data_020d675c = {{(PMF)nPM::func_ov004_0221ece4, 0}};
PM_02006d14 data_020d626c = {{(PMF)nPM::func_ov003_02205e04, 0}};
PM_02006d14 data_020d5ffc = {{(PMF)nPM::_ZN12Unk_0200769413func_02007d14EP12Unk_0200e2c0, 0}};
PM_02006d14 data_020d6744 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007cb0Ev, 0}};
PM_02006d14 data_020d673c = {{(PMF)nPM::_ZN12Unk_0200769413func_02007ca0Ev, 0}};
}
}

namespace nE {
extern "C" {
PM_020076f0 data_020d6da4 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200d3f0Ej, 0}};
PM_020076f0 data_020d6dac = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cee0Ev, 0}};
PM_020076f0 data_020d6d84 = {{(PMF)nPM::_ZN12Unk_020d6df413func_0200cdfcEv, 0}};
PM_020076f0 data_020d6d7c = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c460Ej, 0}};
PM_020076f0 data_020d6d74 = {{(PMF)nPM::func_ov003_02211e04, 0}};
PM_020076f0 data_020d6d6c = {{(PMF)nPM::_ZN12Unk_0200769413func_0200c0b8Ej, 0}};
PM_020076f0 data_020d6d64 = {{(PMF)nPM::func_ov004_022246bc, 0}};
PM_020076f0 data_020d6d5c = {{(PMF)nPM::func_ov004_02224224, 0}};
PM_020076f0 data_020d6d54 = {{(PMF)nPM::func_ov004_02223ca0, 0}};
PM_020076f0 data_020d6d4c = {{(PMF)nPM::func_ov004_02223a70, 0}};
PM_020076f0 data_020d6d44 = {{(PMF)nPM::func_ov004_022237fc, 0}};
PM_020076f0 data_020d6d3c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200b9bcEv, 0}};
PM_020076f0 data_020d6d34 = {{(PMF)nPM::func_ov003_022115bc, 0}};
PM_020076f0 data_020d6d2c = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200ad58EP17Unk_02006d14_Itemj, 0}};
PM_020076f0 data_020d6d24 = {{(PMF)nPM::_ZN12Unk_02006d1413func_0200a450Ev, 0}};
PM_020076f0 data_020d6d1c = {{(PMF)nPM::func_ov004_02222d74, 0}};
PM_020076f0 data_020d6d14 = {{(PMF)nPM::func_ov004_022223a8, 0}};
PM_020076f0 data_020d6d0c = {{(PMF)nPM::func_ov004_02222280, 0}};
PM_020076f0 data_020d6d04 = {{(PMF)nPM::func_ov004_02221fdc, 0}};
PM_020076f0 data_020d6cfc = {{(PMF)nPM::func_ov004_02221d2c, 0}};
PM_020076f0 data_020d6cf4 = {{(PMF)nPM::func_ov004_02221ae4, 0}};
PM_020076f0 data_020d6cec = {{(PMF)nPM::func_ov004_0222189c, 0}};
PM_020076f0 data_020d6ce4 = {{(PMF)nPM::func_ov004_02221768, 0}};
PM_020076f0 data_020d6cdc = {{(PMF)nPM::func_ov004_02221558, 0}};
PM_020076f0 data_020d6cd4 = {{(PMF)nPM::func_ov004_0222148c, 0}};
PM_020076f0 data_020d6ccc = {{(PMF)nPM::func_ov004_0222113c, 0}};
PM_020076f0 data_020d6cc4 = {{(PMF)nPM::func_ov003_02210708, 0}};
PM_020076f0 data_020d6cbc = {{(PMF)nPM::func_ov003_02210404, 0}};
PM_020076f0 data_020d6cb4 = {{(PMF)nPM::_ZN12Unk_02006d1413func_020095b8Ev, 0}};
PM_020076f0 data_020d6cac = {{(PMF)nPM::func_ov003_0220fdac, 0}};
PM_020076f0 data_020d6ca4 = {{(PMF)nPM::func_ov003_0220f33c, 0}};
PM_020076f0 data_020d6c9c = {{(PMF)nPM::func_ov003_0220efd8, 0}};
PM_020076f0 data_020d6c94 = {{(PMF)nPM::func_ov003_0220ecb8, 0}};
PM_020076f0 data_020d6c8c = {{(PMF)nPM::func_ov003_0220e970, 0}};
PM_020076f0 data_020d6c84 = {{(PMF)nPM::func_ov003_0220e43c, 0}};
PM_020076f0 data_020d6c7c = {{(PMF)nPM::func_ov003_0220c2dc, 0}};
PM_020076f0 data_020d6c74 = {{(PMF)nPM::func_ov003_0220ba90, 0}};
PM_020076f0 data_020d6c6c = {{(PMF)nPM::func_ov003_0220ab20, 0}};
PM_020076f0 data_020d6c64 = {{(PMF)nPM::func_ov003_0220a5e4, 0}};
PM_020076f0 data_020d6c5c = {{(PMF)nPM::func_ov003_02209ef4, 0}};
PM_020076f0 data_020d6c54 = {{(PMF)nPM::func_ov003_02209284, 0}};
PM_020076f0 data_020d6c4c = {{(PMF)nPM::func_ov003_02208fb0, 0}};
PM_020076f0 data_020d6c44 = {{(PMF)nPM::func_ov003_02208904, 0}};
PM_020076f0 data_020d6c3c = {{(PMF)nPM::func_ov003_02208358, 0}};
PM_020076f0 data_020d6c34 = {{(PMF)nPM::func_ov003_0220714c, 0}};
PM_020076f0 data_020d6c2c = {{(PMF)nPM::func_ov003_02206e94, 0}};
PM_020076f0 data_020d6c24 = {{(PMF)nPM::func_ov004_0221fa98, 0}};
PM_020076f0 data_020d6c1c = {{(PMF)nPM::func_ov003_02206710, 0}};
PM_020076f0 data_020d6c14 = {{(PMF)nPM::func_ov003_0220646c, 0}};
PM_020076f0 data_020d6c0c = {{(PMF)nPM::func_ov003_022061e0, 0}};
PM_020076f0 data_020d6c04 = {{(PMF)nPM::_ZN18Unk_ov068_0226a89019func_ov068_0226a910Ev, 0}};
PM_020076f0 data_020d6bfc = {{(PMF)nPM::_ZN18Unk_ov068_0226a79419func_ov068_0226a80cEv, 0}};
PM_020076f0 data_020d6bf4 = {{(PMF)nPM::_ZN12Unk_0200769413func_02007ca8Ev, 0}};
}
}

namespace nT {
extern "C" void func_02010f88() {
    new Unk_020d6df4();
}
}

namespace nT {
extern "C" void func_02010ed8(s32 a) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, a) && !func_02095180(0xb, a) && !func_02095180(0x13, a) &&
        !func_02095180(5, a) && func_020947f0(4)) {
        sp4 = func_0202ffdc();
        if (sp4 != -1) {
            func_02094420(&sp4);
            if (func_020b4b68(func_020b4934(), sp4, &sp8, &sp0)) {
                func_02094400(&sp8);
                if (sp8 == 1 || sp8 == 2 || sp8 == 4 || func_0209c7a4(sp4)) {
                    if (func_020b52d0()) {
                        func_0203d76c();
                    }
                    func_0203da7c();
                } else {
                    func_0203daa0(func_020951ec(4), sp4);
                }
            }
        }
    }
}
}

namespace nT {
extern "C" void func_02010e68(s32 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    if (cur == target) return;
    s32 d = target - cur;
    s32 ad = d < 0 ? -d : d;
    if (ad < minstep) {
        *p = target;
        return;
    }
    s32 v = func_01ffcb0c(d, rate);
    s32 av = v < 0 ? -v : v;
    if (av > maxstep) {
        if (v >= 0) *p += maxstep;
        else *p -= maxstep;
    } else if (av < minstep) {
        if (v >= 0) *p += minstep;
        else *p -= minstep;
    } else {
        *p += v;
    }
}
}

namespace nT {
extern "C" void func_02010e48(s32 *p, s32 target) {
    func_02010e68(p, target, 0xe66, 0x1ec, 0x31);
}
}

namespace nT {
extern "C" s32 func_02010dbc(s16 *p, s32 target, s32 rate, s32 maxstep, s32 minstep) {
    s32 cur = *p;
    s32 d, t, c;
    if (cur == target) {
        return 0;
    }
    c = cur << 12;
    t = target << 12;
    d = t - c;
    if (d < 0) d = -d;
    s32 step;
    if (d > 0x8000000) {
        step = func_01ffcb0c(rate, 0x10000000 - d);
    } else {
        step = func_01ffcb0c(rate, d);
    }
    if (step <= minstep) {
        *p = target;
        return 0;
    }
    if (step > maxstep) step = maxstep;
    s32 v;
    if (t >= c) {
        if (d > 0x8000000) v = c - step;
        else v = c + step;
    } else {
        if (d > 0x8000000) v = c + step;
        else v = c - step;
    }
    *p = v >> 12;
    return (s16)(target - *p);
}
}

namespace nT {
extern "C" s32 func_02010d98(s16 *p, s32 target) {
    return func_02010dbc(p, target, 0x800, 0x1770000, 0xc0000);
}
}

namespace nT {
extern "C" s32 func_02010d74(s16 *p, s32 target) {
    return func_02010dbc(p, target, 0x666, 0xbb8000, 0xc0000);
}
}

namespace nT {
extern "C" s32 func_02010d68(s32 a, s32 b) {
    s32 v = a + 0x93;
    if (v > b) v = b;
    return v;
}
}

namespace nT {
extern "C" s32 func_02010d5c(s32 a, s32 b, s32 c) {
    s32 v = a - c;
    if (v < b) v = b;
    return v;
}
}

namespace nT {
extern "C" s32 func_02010d50(s32 a, s32 b) {
    return func_02010d5c(a, b, 0x9c);
}
}

namespace nT {
extern "C" s32 func_02010d44(s32 a, s32 b) {
    return func_02010d5c(a, b, 0x8f);
}
}

namespace nT {
extern "C" void *func_02010d20(void *p) {
    if (func_020952e0(*(s32 *)((u8 *)p + 0x7fc)) < 7) {
        return func_020974a0();
    }
    return NULL;
}
}

namespace nT {
extern "C" BOOL func_02010cf8(void *p) {
    void *r = func_02010d20(p);
    BOOL result = FALSE;
    if (r != NULL) {
        _ZN12Unk_0209865c13func_0209888cEv(r);
        if (_ZN12Unk_020940a013func_0209411cEv()) {
            result = TRUE;
        } else {
            result = FALSE;
        }
    }
    return result;
}
}

namespace nT {
extern "C" void func_02010cd4(u16 *out, void *p) {
    void *r = func_02010d20(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *_ZN12Unk_0209865c13func_0209872cEv(r);
    }
}
}

namespace nT {
extern "C" void func_02010cb0(u16 *out, void *p) {
    void *r = func_02010d20(p);
    *out = 0xfff1;
    if (r != NULL) {
        *out = *_ZN12Unk_0209865c13func_02098714Ev(r);
    }
}
}

namespace nT {
extern "C" s32 func_02010c9c(void *p) {
    _ZN12Unk_0209865c13func_02098840Ev(func_02010d20(p));
}
}

namespace nT {
extern "C" s32 func_02010c88(void *p) {
    _ZN12Unk_0209865c13func_02098814Ev(func_02010d20(p));
}
}

namespace nT {
extern "C" s32 func_02010c74(void *p) {
    _ZN12Unk_0209865c13func_020987ecEv(func_02010d20(p));
}
}

u32 Unk_020102ec::func_02010b08(u32 r7) {
    using namespace nS;
    u32 r5 = func_02010c74((u32)this);
    BOOL flag = FALSE;
    u32 k = func_020b50e8();
    if (k == 0x2e || k == 0xd || k == 0xe || k == 0xc || k == 0x2f) {
        return r5;
    }
    if (!(func_020b52d0() && func_020951dc(unk_08) == 8)) {
        if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
            return r5;
        }
        if (r7 == 0) {
            return r5;
        }
    } else if (r7 == 1) {
        r7 = 0;
    }
    if (_ZN12Unk_02006d1413func_0200e7c0Ev((u32)this)) {
        flag = TRUE;
    }
    u32 obj = func_02010d20((u32)this);
    Unk_02010b08_Time a, b;
    Unk_02010b08_Bits bits;
    a.unk_00 = 0;
    a.unk_04 = 0;
    b.unk_00 = 0;
    b.unk_04 = 0;
    s32 r3 = func_0200f1e4((u32)this, &a, &b);
    bits.unk_a = *((u8 *)&a + 5);
    bits.unk_b = *((u8 *)&a + 4);
    bits.unk_c = *((u8 *)&a + 3);
    switch (r3) {
    case -1:
        if (r7 != 0) {
            func_0200f17c((u32)this, obj, &bits);
        }
        break;
    case 0:
        break;
    default: {
        s32 n = func_0209d3a4(&b, &a);
        u8 *p = func_020952c8();
        if (n >= 2) {
            s32 h = n >> 1;
            if ((s32)r5 > h) {
                r5 = (u8)(r5 - h);
            } else {
                r5 = 0;
            }
            if (r7 != 0) {
                _ZN12Unk_0209865c13func_020987d0Eh(obj, r5);
                func_0200f17c((u32)this, obj, &bits);
                *p &= 0xfd;
                if (!flag) {
                    *p &= ~0x10;
                }
                _ZN12Unk_02006d1413func_0200ead0Ev((u32)this);
            }
        }
        *p &= 0xfe;
        break;
    }
    }
    u16 *q = func_020952d0();
    if (*q == 0) {
        *q = 0x4650;
    }
    return r5;
}

namespace nS {
extern "C" void func_02010af0(u16 *out, u32 x) {
    func_02010d20(x);
    *out = *_ZN12Unk_0209865c13func_020986fcEv();
}
}

namespace nS {
extern "C" u32 func_02010ad4(u32 x) {
    u32 a = func_02010d20(x);
    if (a) {
        return func_02098778(a);
    }
    return 0;
}
}

namespace nS {
extern "C" u32 func_02010aa0(u32 x) {
    u32 a = func_02010d20(x);
    s32 r = 0x20;
    if (a) {
        r = _ZN12Unk_0209865c13func_02098868Ev(a);
        if (func_02098778(a)) {
            r += 0x10;
        }
    }
    if (r >= 0x20) {
        r = 0;
    }
    return r;
}
}

namespace nS {
extern "C" void func_02010a7c(u16 *out, u32 x) {
    *out = 0xfff1;
    if (func_02010d20(x)) {
        *out = *_ZN12Unk_0209865c13func_02098744Ev();
    }
}
}

u32 Unk_020102ec::func_02010a6c(u32 *a) {
    using namespace nS;
    return data_020c68d4[*a];
}

void Unk_020102ec::func_02010a58(s16 *a) {
    using namespace nS;
    Unk_02010a58_Blk *p = (Unk_02010a58_Blk *)P(0x8c);
    s16 v = *a;
    p->unk_02 = v;
    unk_94 = p->unk_02;
}

void Unk_020102ec::func_02010a50(u16 a) {
    using namespace nS;
    unk_8c = a;
}

void Unk_020102ec::func_02010a44() {
    using namespace nS;
    func_02010d98(P(0x8c));
}

void Unk_020102ec::func_02010a34(u32 *a) {
    using namespace nS;
    unk_98 = *a;
    _ZN12Unk_020d5d8413func_02002c10Ev(this);
}

void Unk_020102ec::func_020109c4() {
    using namespace nS;
    u8 tmp[0x34];
    u8 *p = P(0x5c);
    _ZN12Unk_020d5d8413func_02002cb0EP16Unk_02002cb0_Vec(this, P(0x170));
    _ZN12Unk_02032238C1Ev(tmp);
    s16 h = unk_8e;
    void *q = _ZN12Unk_0200769413func_02007c50Ej(this, unk_7ec) == 0 ? (void *)tmp : (void *)P(0x7a0);
    func_020309d4(q, p, P(0x68), h, 0xfd7, this, 0xf);
    _ZN12Unk_02032238D1Ev(tmp);
    *(u32 *)(p + 4) = func_02030814(0);
}

void Unk_020102ec::func_020109ac() {
    using namespace nS;
    _ZN12Unk_020d5d8413func_02002cb0EP16Unk_02002cb0_Vec(this, 0);
    unk_60 = func_02030814(0);
}

BOOL Unk_020102ec::func_02010924() {
    using namespace nS;
    Unk_02010924_Msg m;
    u32 x, y;
    BOOL r;
    if (!_ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(this, &m, &x, &y, &m.unk_02)) {
        return FALSE;
    }
    if (m.unk_00 != func_020b50e8()) {
        return FALSE;
    }
    m.unk_04 = unk_8e;
    r = func_02010d74(&m.unk_04, m.unk_02) == 0 ? TRUE : FALSE;
    func_02010a58(&m.unk_04);
    func_02010e48(P(0x5c), x);
    func_02010e48(P(0x64), y);
    if (r) {
        if (x == unk_5c && y == unk_64) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

void Unk_020102ec::func_02010914() {
    using namespace nS;
    _ZN12Unk_020dbda413func_02053f20Ev(P(0x230));
}

void Unk_020102ec::func_02010900() {
    using namespace nS;
    func_020108ac();
    func_02010884();
}

void Unk_020102ec::func_020108ac() {
    using namespace nS;
    s32 t = unk_768;
    if (t != 0x16f) {
        if (t == 0) {
            if (_ZN12Unk_020dbe7c13func_020565e8Ei(P(0x70c), 0)) {
                if (!func_02063ca0(P(0x764))) {
                    return;
                }
            }
            _ZN12Unk_020dbe5c13func_02055e38Ev(P(0x70c));
        } else {
            _ZN12Unk_020dbe5c13func_02055e38Ev(P(0x70c));
        }
    }
}

void Unk_020102ec::func_02010884() {
    using namespace nS;
    if (unk_76c != 0x16f) {
        _ZN12Unk_020dbe5c13func_02055e38Ev(P(0x738));
    }
}

u32 Unk_020102ec::func_0201086c(u32 *a) {
    using namespace nS;
    if (data_020c655c[*a] != 0) {
        return 2;
    }
    return 0;
}

void Unk_020102ec::func_02010810(Unk_020107c8_Blk *a, u32 *b) {
    using namespace nS;
    u32 f = func_0201086c(b);
    _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi(P(0x170), this, (u32)a, 0xfd7, 0x2800, f | 4, 0x2fc, 0x15, (u8)unk_7fc, 0x1000);
}

void Unk_020102ec::func_02010800(u32 *a) {
    using namespace nS;
    func_02010810((Unk_020107c8_Blk *)P(0x5c), a);
}

void Unk_020102ec::func_020107c8(u32 *a) {
    using namespace nS;
    Unk_020107c8_Blk b;
    b.unk_00 = unk_6f0;
    b.unk_04 = func_02030814(0);
    b.unk_08 = unk_6f8;
    func_02010810(&b, a);
}

void Unk_020102ec::func_02010780(u32 *a) {
    using namespace nS;
    _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi(P(0x1c0), this, (u32)a, 0xfd7, 0x2800, 6, 0x2fc, 0, 0xff, 0x1000);
}

void Unk_020102ec::func_02010740(u32 a, u32 b, u32 c) {
    using namespace nS;
    _ZN12Unk_020e0d3013func_02088bf8EPvP4Vec3iijjjhi(P(0x1c0), this, a, b, c, 0x11, 0x2c, 0, 0xff, 0x1000);
}

void Unk_020102ec::func_0201071c() {
    using namespace nS;
    func_02010800((u32 *)P(0x7ec));
    _ZN12Unk_020e0d0813func_02089040Ev(P(0x170));
}

void Unk_020102ec::func_020106e0(u32 *a) {
    using namespace nS;
    func_020107c8((u32 *)P(0x7ec));
    _ZN12Unk_020e0d0813func_02089040Ev(P(0x170));
    func_02010780(a);
    _ZN12Unk_020e0d0813func_02089040Ev(P(0x1c0));
}

void Unk_020102ec::func_0201065c() {
    using namespace nS;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc) || (func_020b52d0() && unk_7ec == 8)) {
        Unk_0201065c_Vec *p = (Unk_0201065c_Vec *)P(0x5c);
        Unk_0201065c_Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        v.y += 0xb33;
        u32 r = func_020b50b4();
        _ZN12Unk_020b696013func_020b6860EP12Unk_020b6a0cP4Vec3S3_S3_ih(r, P(0x210), &v, 0xa00, 0x15cf, 1, (u8)unk_7fc);
    }
}

void Unk_020102ec::func_020105ec() {
    using namespace nS;
    s32 t = unk_3e4;
    s32 a = _ZN12Unk_0205d34013func_0205d340Ev(P(0x709));
    s32 b = _ZN12Unk_0205d1f813func_0205d1f8Ev(P(0x70b));
    _ZN12Unk_020dbe5c13func_02055f1cEPvS0_jS0_(P(0x70c), t, a, 1, b);
    t = unk_3e4;
    a = _ZN12Unk_0205d34013func_0205d340Ev(P(0x709));
    b = _ZN12Unk_0205d1f813func_0205d1f8Ev(P(0x70b));
    _ZN12Unk_020dbe5c13func_02055f1cEPvS0_jS0_(P(0x738), t, a, 1, b);
}

void Unk_020102ec::func_020105a8(s32 *a, u8 *b) {
    using namespace nS;
    s32 t = unk_768;
    s32 v = func_0205c5e8(*a);
    if (v == 0x16f && t != 0) {
        v = 0;
    }
    if (v != 0x16f) {
        func_02010508(&v, b);
    }
}

void Unk_020102ec::func_02010564(s32 *a, u8 *b) {
    using namespace nS;
    s32 t = unk_76c;
    s32 v = func_0205c5dc(*a);
    if (v == 0x16f && t != 0xba) {
        v = 0xba;
    }
    if (v != 0x16f) {
        func_020104ac(&v, b);
    }
}

void Unk_020102ec::func_02010508(s32 *a, u8 *b) {
    using namespace nS;
    _ZN12Unk_0205ce0c13func_0205ce78Eiii(P(0x70a), *a, 1, 0);
    s32 r = _ZN12Unk_0205ce0c13func_0205cf60Ev(P(0x70a));
    _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(P(0x70c), r, 0, 0, *b, 0x1000);
    _ZN12Unk_020dbe5c13func_02055e38Ev(P(0x70c));
    unk_768 = *a;
}

void Unk_020102ec::func_020104ac(s32 *a, u8 *b) {
    using namespace nS;
    _ZN12Unk_0205ce0c13func_0205ce78Eiii(P(0x70a), *a, 1, 0);
    s32 r = _ZN12Unk_0205ce0c13func_0205cf54Ev(P(0x70a));
    _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(P(0x738), r, 0, 0, *b, 0x1000);
    _ZN12Unk_020dbe5c13func_02055e38Ev(P(0x738));
    unk_76c = *a;
}

void Unk_020102ec::func_020103dc(s32 a, u32 b, u8 c, s32 d, u32 e, u16 f, s32 g) {
    using namespace nS;
    s32 t = unk_700;
    s32 v;
    if (t == 0xa1) {
        b = 0;
        f = 0;
    }
    v = g >= 0x137 ? func_02010a6c((u32 *)&a) : g;
    if (!(a == 0 && t == 0 && *(u16 *)&e == 0 && b != 0 && g >= 0x137)) {
        func_0205c2dc(P(0x6fc), v, 1, 0);
        u32 r = func_021065f8(func_021065dc(func_0205c254(P(0x6fc))), 0);
        func_02053ee8(P(0x230), r, b, c, d, *(u16 *)&e, 0);
        unk_700 = a;
        unk_708 = c;
    }
    _ZN12Unk_02006d1413func_02010284EiPv(this, v, f);
    func_020105a8(&v, &c);
    _ZN12Unk_020102ec13func_02010564EPiPh(this, &v, &c);
}

void Unk_020102ec::func_020103b4(s32 a, u32 b, u16 c) {
    using namespace nS;
    func_020103dc(a, b, 0, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::func_02010380(s32 a, u32 b, u16 c) {
    using namespace nS;
    func_020103dc(a, b, 0, unk_2dc, unk_2d4_mid, c, 0x137);
}

void Unk_020102ec::func_02010358(s32 a, u32 b, u16 c) {
    using namespace nS;
    func_020103dc(a, b, 1, 0x1000, 0, c, 0x137);
}

void Unk_020102ec::func_020102ec() {
    using namespace nS;
    u32 b, a;
    a = (u32)(unk_714 >> 12) << 16;
    b = (u32)(unk_740 >> 12) << 16;
    func_020103dc(unk_700, 3, unk_2e0, unk_2dc, unk_2d4_mid, 0, 0x137);
    unk_714 = a >> 4;
    unk_740 = b >> 4;
}

void Unk_02006d14::func_02010284(s32 b, void *c) {
    using namespace nR;
    u16 v[3];
    v[0] = 0xfff1;
    if (!(Unk_020102a0_IsZero(data_020e416c) && _ZN12Unk_02006d1413func_0200ec44Ej(this, 0))) {
        v[0] = 0xfff1;
    } else {
        func_02010a7c(&v[1], ((nR::Unk_02006d14 *)this));
        v[0] = v[1];
    }
    v[2] = v[0];
    func_02010154(&v[2], b, c);
}

void Unk_02006d14::func_02010154(u16 *p, s32 b, void *c) {
    using namespace nR;
    s32 r6 = func_0205ed30(p);
    s32 r7 = func_0205c570(b);
    if (r7 == 3 || r6 == 0x144) goto B;
    if (r7 == 1) {
        if (!Unk_02010154_In(p)) {
            if (*p < 0x13a0 || *p > 0x13a7) goto B;
        }
    }
    {
        s32 n, cnt, item;
        s32 i;
        func_0205c2dc(((nR::Unk_02006d14 *)this)->unk_6fd, r6, 1, 0);
        func_0205c254(((nR::Unk_02006d14 *)this)->unk_6fd);
        _ZN12Unk_020dbda413func_02053e70Ejjjjjji(((nR::Unk_02006d14 *)this)->unk_230, func_021065f8(func_021065dc(), 0), (s32)c, 0, 0x1000, 0, 0, 0);
        n = func_0205c57c(r6);
        if (n < 4) {
            cnt = func_0205c5d0();
            for (i = 0; (u32)i < (u32)cnt; i++) {
                item = func_0205c5ac(n, i);
                _ZN12Unk_020dbda413func_02053e00Ejj(((nR::Unk_02006d14 *)this)->unk_230, item, func_0205c588(n, i));
            }
            if (r7 == 2) {
                i = func_0205c5ac(1, 0);
                _ZN12Unk_020dbda413func_02053dd8Ejj(((nR::Unk_02006d14 *)this)->unk_230, i, func_0205c588(1, 0));
            }
        } else {
            _ZN12Unk_020dbda413func_02053e28Ejj(((nR::Unk_02006d14 *)this)->unk_230, (s32)c, 0);
        }
    }
    goto end;
B:
    _ZN12Unk_020dbda413func_02053e28Ejj(((nR::Unk_02006d14 *)this)->unk_230, (s32)c, 0);
end:
    ((nR::Unk_02006d14 *)this)->unk_704 = r6;
}

s32 Unk_02006d14::func_020100d0() {
    using namespace nR;
    s32 r4 = func_01ffcb0c(_ZN12Unk_020d6df413func_0200d640Ev(this), 0x6e2);
    if (r4 > 0x6e2) {
        r4 = 0x6e2;
    } else if (r4 < 0x108) {
        r4 = 0;
    }
    if (_ZN12Unk_020e0d0813func_02088d38Ej(((nR::Unk_02006d14 *)this)->unk_170, 8) && _ZN12Unk_020e0d0813func_020890b0Ei(((nR::Unk_02006d14 *)this)->unk_170, ((nR::Unk_02006d14 *)this)->unk_8e)) {
        if (r4 > 0x245) r4 = 0x245;
    } else if (((nR::Unk_02006d14 *)this)->unk_7a4 & 8) {
        if (r4 > 0x307) r4 = 0x307;
    }
    return r4;
}

void Unk_02006d14::func_02010078(s32 a, s32 b) {
    using namespace nR;
    s32 r6 = func_02010aa0(this);
    s32 r1, r4;
    if (func_02010ad4(this)) {
        r1 = b + ((r6 - 0x10) << 3);
    } else {
        r1 = b + (r6 << 3);
    }
    r4 = b + ((a << 3) + 0x80);
    if (r1 < 0x80) {
        func_0205ef34(((nR::Unk_02006d14 *)this)->unk_79c);
    }
    if (r4 >= 0x80 && r4 < 0xc0) {
        func_0205ef08(((nR::Unk_02006d14 *)this)->unk_79c, r4);
    }
}

void Unk_02006d14::func_02010050(void *p) {
    using namespace nR;
    _ZN12Unk_0205ca9413func_0205ca94EPtiii(((nR::Unk_02006d14 *)this)->unk_770, (s32)p, func_02010d20(this), 0, 0);
}

void Unk_02006d14::func_0201000c() {
    using namespace nR;
    u32 r4 = ((nR::Unk_02006d14 *)this)->unk_28c;
    func_0205c91c(((nR::Unk_02006d14 *)this)->unk_770);
    _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(((nR::Unk_02006d14 *)this)->unk_774, r4, data_020d6f48, func_0203c6a8(), 0, 0);
}

s32 Unk_02006d14::func_0200ff08() {
    using namespace nR;
    if (func_0203d978(((nR::Unk_02006d14 *)this)) || _ZN12Unk_02006d1413func_0200ec44Ej(this, 0x13)) return FALSE;
    if (_ZN12Unk_020d6df413func_0200d5b8Ev(this)) {
        func_0203d73c(((nR::Unk_02006d14 *)this), ((nR::Unk_02006d14 *)this)->unk_138);
        if (((nR::Unk_02006d14 *)this)->unk_138 == 0) {
            if (func_0203e5d0(((nR::Unk_02006d14 *)this))) return TRUE;
        } else if (!_ZN12Unk_020d967013func_0203e4a8EPS_(((nR::Unk_02006d14 *)this)->unk_138, ((nR::Unk_02006d14 *)this))) {
            if (((nR::Unk_02006d14 *)this)->unk_138->vfunc_54(((nR::Unk_02006d14 *)this))) return TRUE;
        } else {
            return TRUE;
        }
    }
    if (func_0200fa00()) return TRUE;
    if (((nR::Unk_02006d14 *)this)->unk_13c != 0 && ((nR::Unk_02006d14 *)this)->unk_16c == 2) {
        volatile Unk_0200ff08_Vec saved;
        Unk_0200ff08_Vec res;
        saved.x = ((nR::Unk_02006d14 *)this)->unk_154;
        saved.y = ((nR::Unk_02006d14 *)this)->unk_158;
        saved.z = ((nR::Unk_02006d14 *)this)->unk_15c;
        func_0200f3ec(&res, ((nR::Unk_02006d14 *)this), ((nR::Unk_02006d14 *)this)->unk_5c, &((nR::Unk_02006d14 *)this)->unk_8e, data_020d5e38);
        ((nR::Unk_02006d14 *)this)->unk_154 = res.x;
        ((nR::Unk_02006d14 *)this)->unk_158 = res.y;
        ((nR::Unk_02006d14 *)this)->unk_15c = res.z;
        s32 r = func_0200f9d4(0);
        ((nR::Unk_02006d14 *)this)->unk_154 = saved.x;
        ((nR::Unk_02006d14 *)this)->unk_158 = saved.y;
        ((nR::Unk_02006d14 *)this)->unk_15c = saved.z;
        return r;
    }
    return FALSE;
}

void Unk_02006d14::func_0200fdf4() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 != 0) return;
    s32 r4 = 0x4b;
    volatile u16 buf = ((nR::Unk_02006d14 *)this)->unk_c8c;
    BOOL in = FALSE;
    u16 v = buf;
    if (buf >= 0x1431 && v <= 0x1470) in = TRUE;
    if (in) {
        s32 idx;
        if (v >= 0x1431 && v <= 0x1470) idx = v - 0x1431; else idx = -1;
        if (idx >= 0 && (u32)idx < data_020cb35c) {
            r4 = func_0205d764(idx);
        }
    } else if (v >= 0x1471 && v <= 0x1491) {
        if (func_0204b37c((u16 *)&buf)) {
            s32 idx = func_0204b598((u16 *)&buf);
            if (idx >= 0 && (u32)idx < data_020cb360) {
                r4 = func_0205d758(idx);
            }
        }
    }
    func_0205d554(((nR::Unk_02006d14 *)this)->unk_598, r4);
    if (func_0205d494(((nR::Unk_02006d14 *)this)->unk_598) != 0x4b) {
        func_0205d530(((nR::Unk_02006d14 *)this)->unk_598);
        func_0205d588(((nR::Unk_02006d14 *)this)->unk_598);
        _ZN12Unk_020dbd3413func_02054b14Ev(((nR::Unk_02006d14 *)this)->unk_4fc);
        _ZN12Unk_020dbd3413func_02054b70EPv(((nR::Unk_02006d14 *)this)->unk_4fc, func_0205d4d0(((nR::Unk_02006d14 *)this)->unk_598));
        func_0205d4e4(((nR::Unk_02006d14 *)this)->unk_598);
        ((nR::Unk_02006d14 *)this)->unk_c88 = 1;
    } else {
        ((nR::Unk_02006d14 *)this)->unk_c88 = 1;
        func_0200fdb4();
    }
}

void Unk_02006d14::func_0200fdb4() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 == 1) {
        s32 r = 1;
        if (func_0205d494(((nR::Unk_02006d14 *)this)->unk_598) != 0x4b) {
            r = func_0205d4e4(((nR::Unk_02006d14 *)this)->unk_598);
        }
        if (r != 0) {
            ((nR::Unk_02006d14 *)this)->unk_c88 = 2;
        }
    }
}

BOOL Unk_02006d14::func_0200fd90(u16 *p) {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c88 == 2) {
        ((nR::Unk_02006d14 *)this)->unk_c88 = 0;
        ((nR::Unk_02006d14 *)this)->unk_c8c = *p;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200fb30() {
    using namespace nR;
    u16 a[2];
    s32 x, y;
    s32 r4, r6, r7;
    s32 t;
    if (((nR::Unk_02006d14 *)this)->unk_c90 != 0) return;
    a[0] = 0xfff1;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 12)) {
        a[0] = 0xfff1;
    } else {
        a[0] = ((nR::Unk_02006d14 *)this)->unk_c94;
    }
    func_0205ddc8((s32)func_02010cf8(this), ((nR::Unk_02006d14 *)this)->unk_c96, a, &y, &x);
    a[1] = ((nR::Unk_02006d14 *)this)->unk_c94;
    func_0205da08(((nR::Unk_02006d14 *)this)->unk_424, y, x, &a[1], (s32)func_02010d20(this));
    func_02010078(((nR::Unk_02006d14 *)this)->unk_c97, (s32)_ZN12Unk_020102ec13func_02010b08Ej(this, 0));
    r4 = NNS_G3dGetTex(func_0205d854(((nR::Unk_02006d14 *)this)->unk_424, 0));
    r6 = 0;
    if (x < 0x9e) {
        r6 = NNS_G3dGetTex(func_0205d854(((nR::Unk_02006d14 *)this)->unk_424, 1));
    }
    if (((nR::Unk_02006d14 *)this)->unk_c98 != 0) {
        r7 = NNS_G3dGetTex(_ZN12Unk_0205d34013func_0205d340Ev(&((nR::Unk_02006d14 *)this)->unk_709));
        func_0200faa0((void *)r7, (void *)r4, data_020d6f38, data_020d6f38);
        func_0200faa0((void *)r7, (void *)r4, data_020d6f3c, data_020d6f3c);
    }
    r7 = NNS_G3dGetTex(func_0205ef74(((nR::Unk_02006d14 *)this)->unk_79c));
    t = NNS_G3dGetTex(func_0205ef60(((nR::Unk_02006d14 *)this)->unk_79c));
    func_0200fa88((void *)r7, (void *)r4, data_020d6f30, data_020d6f30);
    func_0200fa88((void *)t, (void *)r4, data_020d6f40, data_020d6f40);
    if (r6 != 0) {
        func_0200fa88((void *)r7, (void *)r6, data_020d6f30, data_020d6f30);
    }
    func_0205d934(((nR::Unk_02006d14 *)this)->unk_424);
    func_0205db04(((nR::Unk_02006d14 *)this)->unk_424);
    func_0205d87c(((nR::Unk_02006d14 *)this)->unk_424);
    _ZN12Unk_020dbd3413func_02054b14Ev(((nR::Unk_02006d14 *)this)->unk_388);
    _ZN12Unk_020dbd3413func_02054b14Ev(((nR::Unk_02006d14 *)this)->unk_460);
    _ZN12Unk_020dbd3413func_02054b70EPv(((nR::Unk_02006d14 *)this)->unk_388, func_0205d854(((nR::Unk_02006d14 *)this)->unk_424, 0));
    if (func_0205d7f8(((nR::Unk_02006d14 *)this)->unk_424, 1) < 0x9e) {
        _ZN12Unk_020dbd3413func_02054b70EPv(((nR::Unk_02006d14 *)this)->unk_460, func_0205d854(((nR::Unk_02006d14 *)this)->unk_424, 1));
    }
    if (((nR::Unk_02006d14 *)this)->unk_c98 == 0) {
        u32 p = (((nR::Unk_02006d14 *)this)->unk_714 << 4) >> 16;
        u32 q = (((nR::Unk_02006d14 *)this)->unk_740 << 4) >> 16;
        _ZN12Unk_020dbe5c13func_02055eecEv(((nR::Unk_02006d14 *)this)->unk_70c);
        _ZN12Unk_020dbe5c13func_02055eecEv(((nR::Unk_02006d14 *)this)->unk_738);
        _ZN12Unk_0205d1f813func_0205d1f8Ev(&((nR::Unk_02006d14 *)this)->unk_70b);
        func_020e885c();
        _ZN12Unk_020102ec13func_020105ecEv(this);
        _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(((nR::Unk_02006d14 *)this)->unk_70c, _ZN12Unk_0205ce0c13func_0205cf60Ev(&((nR::Unk_02006d14 *)this)->unk_70a), p, 0, ((nR::Unk_02006d14 *)this)->unk_708, 0x1000);
        _ZN12Unk_020dbe5c13func_02055e4cEPvS0_jhS0_(((nR::Unk_02006d14 *)this)->unk_738, _ZN12Unk_0205ce0c13func_0205cf54Ev(&((nR::Unk_02006d14 *)this)->unk_70a), q, 0, ((nR::Unk_02006d14 *)this)->unk_708, 0x1000);
    }
    ((nR::Unk_02006d14 *)this)->unk_c90 = 1;
}

void Unk_02006d14::func_0200fb04() {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c90 == 1) {
        if (func_0205d87c(((nR::Unk_02006d14 *)this)->unk_424)) {
            ((nR::Unk_02006d14 *)this)->unk_c90 = 2;
        }
    }
}

BOOL Unk_02006d14::func_0200fab8(u16 *p, u8 b, u8 c, u8 d) {
    using namespace nR;
    if (((nR::Unk_02006d14 *)this)->unk_c90 == 2) {
        ((nR::Unk_02006d14 *)this)->unk_c90 = 0;
        ((nR::Unk_02006d14 *)this)->unk_c94 = *p;
        ((nR::Unk_02006d14 *)this)->unk_c96 = b;
        ((nR::Unk_02006d14 *)this)->unk_c97 = c;
        ((nR::Unk_02006d14 *)this)->unk_c98 = d;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200faa0(void *a, void *b, void *c, void *d) {
    using namespace nR;
    func_02063a5c(a, b, c, d);
}

void Unk_02006d14::func_0200fa88(void *a, void *b, void *c, void *d) {
    using namespace nR;
    func_02063a1c(a, b, c, d);
}

BOOL Unk_02006d14::func_0200fa2c(s32 *pos, u32 idx) {
    using namespace nR;
    if (func_020e9650(&((nR::Unk_02006d14 *)this)->unk_6f0) < (s32)(data_020c623c[idx] << 13) >> 12) {
        s32 a = func_020e7b98(pos[0] - ((nR::Unk_02006d14 *)this)->unk_6f0, pos[2] - ((nR::Unk_02006d14 *)this)->unk_6f8);
        if (func_020e780c(a, ((nR::Unk_02006d14 *)this)->unk_8e) < 0x2aaa) {
            return TRUE;
        }
    }
    return FALSE;
}

s32 Unk_02006d14::func_0200fa00() {
    using namespace nR;
    if (Unk_0200f9d4_IsOne(data_020e416c)) {
        return func_ov004_0221e8c0(((nR::Unk_02006d14 *)this));
    } else {
        return func_ov003_02204f3c(((nR::Unk_02006d14 *)this));
    }
}

s32 Unk_02006d14::func_0200f9d4(s32 a) {
    using namespace nR;
    if (Unk_0200f9d4_IsOne(data_020e416c)) {
        return func_ov004_0221e980(((nR::Unk_02006d14 *)this), a, 0);
    } else {
        return func_ov003_02204ce8(((nR::Unk_02006d14 *)this), a);
    }
}

u32 Unk_02006d14::func_0200f9bc() {
    using namespace nR;
    return *(u32 *)((u8 *)func_0204262c(((nR::Unk_02006d14 *)this)->unk_808) + 0xc);
}

BOOL Unk_02006d14::func_0200f8f8(s32 a, s32 mode, s32 idx) {
    using namespace nQ;
    if (((nQ::Unk_02006d14 *)this)->unk_808 == -1 && data_021c47c4 != NULL) {
        Unk_0200f6d4_V2 v;
        v.x = 0;
        v.y = 0;
        func_0204ee10(&v.x, &v.y, a);
        switch (mode) {
        case 0:
            ((nQ::Unk_02006d14 *)this)->unk_808 = func_020430b4((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx]);
            break;
        case 1:
            ((nQ::Unk_02006d14 *)this)->unk_808 = func_020433ec((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx], 0, 0xfff1);
            break;
        case 2:
            ((nQ::Unk_02006d14 *)this)->unk_808 = func_02042ff8((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, v, data_020c6210[idx]);
            break;
        }
    }
    return ((nQ::Unk_02006d14 *)this)->unk_808 != -1 ? TRUE : FALSE;
}

void Unk_02006d14::func_0200f8c0() {
    using namespace nQ;
    if (((nQ::Unk_02006d14 *)this)->unk_80c != -1) {
        switch (func_02042830(((nQ::Unk_02006d14 *)this)->unk_80c)) {
        case 1:
        case 2:
            func_02042820(((nQ::Unk_02006d14 *)this)->unk_80c);
            ((nQ::Unk_02006d14 *)this)->unk_80c = -1;
        }
    }
}

s32 Unk_02006d14::func_0200f870() {
    using namespace nQ;
    s32 r = 0;
    ((nQ::Unk_02006d14 *)this)->unk_810 = 0;
    if (((nQ::Unk_02006d14 *)this)->unk_808 != -1) {
        r = func_02042d10(((nQ::Unk_02006d14 *)this)->unk_808);
        switch (r) {
        case 1:
        case 2:
            ((nQ::Unk_02006d14 *)this)->unk_810 = _ZN12Unk_02006d1413func_0200f9bcEv(((nQ::Unk_02006d14 *)this));
            func_02042820(((nQ::Unk_02006d14 *)this)->unk_808);
            ((nQ::Unk_02006d14 *)this)->unk_808 = -1;
        }
    }
    return r;
}

s32 Unk_02006d14::func_0200f7a0(Unk_0200f6d4_V2 *p, s32 a, s32 b) {
    using namespace nQ;
    struct {
        s32 pad;
        Unk_0200f6d4_V2 v;
    } l;
    s32 result;
    if (((nQ::Unk_02006d14 *)this)->unk_808 == -1) {
        s32 x = p->x, y = p->y;
        s32 hx = x >> 4, hy = y >> 4;
        void *r = func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (r == NULL) {
            ((nQ::Unk_02006d14 *)this)->unk_81c = ((nQ::Unk_02006d14 *)this)->unk_81e = 0xfff1;
            result = 2;
        } else {
            ((nQ::Unk_02006d14 *)this)->unk_81c = ((nQ::Unk_02006d14 *)this)->unk_81e = *(u16 *)r;
            l.v.x = p->x;
            l.v.y = p->y;
            ((nQ::Unk_02006d14 *)this)->unk_808 = Unk_0200f7a0_NS::func_020433ec((void *)((nQ::Unk_02006d14 *)this)->unk_7fc, &l.v, a, b, 0xfff1);
            if (((nQ::Unk_02006d14 *)this)->unk_808 == -1) {
                result = 0;
            } else {
                ((nQ::Unk_02006d14 *)this)->unk_814 = func_0200f870();
                switch (((nQ::Unk_02006d14 *)this)->unk_814) {
                case 0: result = 1; break;
                case 2: result = 0; break;
                default: result = 3; break;
                }
            }
        }
    } else {
        result = 1;
    }
    return result;
}

BOOL Unk_02006d14::func_0200f6d4(s32 a, s32 b) {
    using namespace nQ;
    s32 t = _ZN12Unk_02006d1413func_0200f9bcEv(((nQ::Unk_02006d14 *)this));
    Unk_0200f6d4_V2 v;
    v.x = 0;
    v.y = 0;
    func_0204ee10(&v.x, &v.y, a);
    switch (t) {
    case 3:
    case 4:
    case 0x15:
    case 0x16:
        if (b) {
            func_ov004_022235ec(((nQ::Unk_02006d14 *)this), v, -2, 6, -1);
        } else {
            _ZN12Unk_02006d1413func_0200b76cE17Unk_0200b750_Pairijs(((nQ::Unk_02006d14 *)this), v, -1, 6, -1);
        }
        return TRUE;
    case 5:
        func_ov003_02211890(((nQ::Unk_02006d14 *)this), v, 6, -1);
        return TRUE;
    case 0x14:
        func_ov003_02208a88(((nQ::Unk_02006d14 *)this), v, 0, 6, -1);
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02006d14::func_0200f660() {
    using namespace nQ;
    Unk_0200f660_S s;
    func_02010a7c(&s, ((nQ::Unk_02006d14 *)this));
    if (_ZN12Unk_02006d1413func_0200ec44Ej(((nQ::Unk_02006d14 *)this), 0)) {
        BOOL ok;
        if (func_0204b2d4(&s)) {
            s.b = 0xfff1;
            ok = func_0204b25c(&s.a) == func_0204b25c(&s.b);
        } else {
            ok = s.a == 0xfff1;
        }
        if (!ok) return func_02061794(&s) + 1;
    }
    return 0;
}

s32 Unk_02006d14::func_0200f5b0() {
    using namespace nQ;
    s32 f = func_0200f660();
    if (f <= 0) return 0;
    u16 v = f + 0x1368;
    if (v <= 0x136a) return 1;
    if (v <= 0x1373) return 2;
    if (v <= 0x1375) return 3;
    if (v <= 0x1377) return 4;
    if (v <= 0x1379) return 5;
    if (v <= 0x137b) return 6;
    if (v == 0x137c) return 7;
    if (v == 0x137d) return 8;
    if (v <= 0x137f) return 9;
    if (v <= 0x13a7) return 10;
    return 0;
}

namespace nQ {
extern "C" void func_0200f594(Unk_02006d14 *o, s32 a, s32 b, s32 c) {
    func_0200f528(o, a, b);
    _ZN12Unk_02006d1413func_0200f504Ei(o, c);
}
}

namespace nQ {
extern "C" void func_0200f54c(Unk_02006d14 *o, s32 a, s32 b, s32 c) {
    s32 *p = &o->unk_5c.x;
    func_02010e68(p, a, 0xe66, 0x4cd, 0x31);
    p += 2;
    func_02010e68(p, b, 0xe66, 0x4cd, 0x31);
    _ZN12Unk_02006d1413func_0200f504Ei(o, c);
}
}

namespace nQ {
extern "C" void func_0200f528(Unk_02006d14 *o, s32 a, s32 b) {
    s32 *p = &o->unk_5c.x;
    func_02010e48(p, a);
    p += 2;
    func_02010e48(p, b);
}
}

s32 Unk_02006d14::func_0200f504(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    func_02010d98(&t, a);
    return _ZN12Unk_020102ec13func_02010a58EPs(((nQ::Unk_02006d14 *)this), &t);
}

s32 Unk_02006d14::func_0200f4c0(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    BOOL r = func_02010dbc(&t, 0, a, 0x1770000, 0xc0000) == 0;
    _ZN12Unk_020102ec13func_02010a58EPs(((nQ::Unk_02006d14 *)this), &t);
    return r;
}

s32 Unk_02006d14::func_0200f478(s32 a) {
    using namespace nQ;
    s16 t = ((nQ::Unk_02006d14 *)this)->unk_8e;
    BOOL r = func_02010dbc(&t, -0x8000, a, 0x1770000, 0xc0000) == 0;
    _ZN12Unk_020102ec13func_02010a58EPs(((nQ::Unk_02006d14 *)this), &t);
    return r;
}

namespace nQ {
extern "C" void func_0200f45c(Unk_02006d14 *a, Unk_02006d14 *b) {
    Unk_0200f070_V3 v;
    func_0200f43c(&v, b);
    func_0204edd8(a, &v);
}
}

namespace nQ {
extern "C" void func_0200f43c(Unk_0200f070_V3 *out, Unk_02006d14 *o) {
    func_0200f3ec(out, o, &o->unk_5c, (u16 *)&o->unk_8e, &data_020c6c64);
}
}

namespace nQ {
extern "C" void func_0200f3ec(Unk_0200f070_V3 *out, void *o, Unk_0200f070_V3 *in, u16 *ang, s32 *p) {
    s32 i;
    s32 s, c;
    *out = *in;
    i = (*ang >> 4) * 2;
    s = func_01ffcb0c(data_02135f44[i + 1], *p);
    c = func_01ffcb0c(data_02135f44[i], *p);
    out->x += c;
    out->z += s;
}
}

void Unk_02006d14::func_0200f32c() {
    using namespace nQ;
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nQ::Unk_02006d14 *)this)->unk_2cc, 1) || _ZN12Unk_020dbe7c13func_020565e8Ei(((nQ::Unk_02006d14 *)this)->unk_2cc, 9)) {
        s16 rot[2];
        Unk_0200f070_V3 v;
        rot[0] = ((nQ::Unk_02006d14 *)this)->unk_8e;
        rot[1] = rot[0] + 0x8000;
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nQ::Unk_02006d14 *)this)->unk_2cc, 9)) {
            v.x = ((nQ::Unk_02006d14 *)this)->unk_6c4[0];
            v.y = ((nQ::Unk_02006d14 *)this)->unk_6c4[1];
            v.z = ((nQ::Unk_02006d14 *)this)->unk_6c4[2];
        } else {
            v.x = ((nQ::Unk_02006d14 *)this)->unk_6d0[0];
            v.y = ((nQ::Unk_02006d14 *)this)->unk_6d0[1];
            v.z = ((nQ::Unk_02006d14 *)this)->unk_6d0[2];
        }
        v.y = ((nQ::Unk_02006d14 *)this)->unk_5c.y;
        if (((nQ::Unk_02006d14 *)this)->unk_700 == 2) {
            func_02090330(0, &v, &rot[1], 0);
        }
        func_02090330(0x27, &v, &rot[0], 0);
        func_0200f258();
    }
}

void Unk_02006d14::func_0200f258() {
    using namespace nQ;
    u32 f = ((nQ::Unk_02006d14 *)this)->unk_b0;
    BOOL c = (f & 4) ? TRUE : FALSE;
    if (!(c && ((f & 2) ? TRUE : FALSE))) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(((nQ::Unk_02006d14 *)this), 0xa)) {
            BOOL flag = ((nQ::Unk_02006d14 *)this)->unk_700 == 2;
            Unk_0200f070_V3 v;
            v.x = (((nQ::Unk_02006d14 *)this)->unk_6c4[0] + ((nQ::Unk_02006d14 *)this)->unk_6d0[0]) >> 1;
            v.y = (((nQ::Unk_02006d14 *)this)->unk_6c4[1] + ((nQ::Unk_02006d14 *)this)->unk_6d0[1]) >> 1;
            v.z = (((nQ::Unk_02006d14 *)this)->unk_6c4[2] + ((nQ::Unk_02006d14 *)this)->unk_6d0[2]) >> 1;
            if (_ZN12Unk_02006d1413func_0200ec44Ej(((nQ::Unk_02006d14 *)this), 0x19)) {
                func_02003dec(((nQ::Unk_02006d14 *)this)->unk_838, func_020b0cbc(&v), flag);
            } else {
                func_02003dec(((nQ::Unk_02006d14 *)this)->unk_87c, func_020b0cbc(&v), flag);
            }
        }
    }
}

namespace nQ {
extern "C" void func_0200f23c(void *o) {
    u32 a[4];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    func_0200f1e4(o, a, (u8 *)&a[2]);
}
}

namespace nQ {
extern "C" void func_0200f1e4(void *o, void *a, u8 *b) {
    Unk_0200f17c_Date d0, d1, d2;
    func_02010d20(o);
    d0 = _ZN12Unk_0209865c13func_020987c4Ev();
    d1 = d0;
    d2 = d1;
    func_0209d498(a);
    MI_CpuCopy8(a, b, 8);
    b[5] = d2.a;
    b[4] = d2.b;
    b[3] = d2.c;
    func_0209d3d0(a, b, 0x3f);
}
}

namespace nQ {
extern "C" void func_0200f17c(Unk_02006d14 *o, s32 a, Unk_0200f17c_Date *d) {
    _ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(a, *d);
    u16 *r = (u16 *)func_0209c37c(0, 0x50);
    *r = d->c * 10 + (d->b * 1000 + func_02010c74(o));
    if (!_ZN12Unk_02006d1413func_0200e7c0Ev(o)) {
        *func_020952d8() = *d;
    }
}
}

BOOL Unk_02006d14::func_0200f0fc() {
    using namespace nQ;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nQ::Unk_02006d14 *)this)->unk_7fc)) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(((nQ::Unk_02006d14 *)this), 0xb) || _ZN12Unk_02006d1413func_0200ec44Ej(((nQ::Unk_02006d14 *)this), 0x1b)) return FALSE;
        if (func_0202e8d4()) {
            _ZN12Unk_0200804013func_020082e4Ehjj(((nQ::Unk_02006d14 *)this), 0, 6, -1);
            return TRUE;
        }
        if ((s32)(*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) {
            _ZN12Unk_0200804013func_02008404Ejj(((nQ::Unk_02006d14 *)this), 1, -1);
            return TRUE;
        }
    }
    return FALSE;
}

namespace nQ {
extern "C" void func_0200f070(Unk_0200f070_V3 *dst, Unk_02006d14 *o, s32 *p) {
    Unk_0200f070_M m = o->unk_694;
    s32 tx = m.v[9], ty = m.v[10], tz = m.v[11];
    m.v[9] = m.v[10] = m.v[11] = 0;
    Unk_0200f070_M m2 = m;
    Unk_0200f070_V3 v, out;
    v.x = func_01ffcb0c(0x800, *p);
    v.y = func_01ffcb0c(-0x400, *p);
    v.z = 0;
    MTX_MultVec43(&v, &m2, &out);
    Unk_0200f070_V3 r;
    tx += out.x;
    ty += out.y;
    tz += out.z;
    r.x = tx;
    r.y = ty;
    r.z = tz;
    func_0203ee38(dst, &r);
}
}

void Unk_02006d14::func_0200f004(u32 a, ...) {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    func_0200f070(&v, ((nP::Unk_02006d14 *)this), &a);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&((nP::Unk_02006d14 *)this)->unk_828, v.z, 0x800, 0x2000, 0x333);
}

BOOL Unk_02006d14::func_0200ef98(Unk_02006d14_Vec3 *out, s16 *ang) {
    using namespace nP;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nP::Unk_02006d14 *)this)->unk_7fc)) {
        return FALSE;
    }
    if (func_0200ec44(0x10)) {
        return FALSE;
    }
    out->y = ((nP::Unk_02006d14 *)this)->unk_5c.y + 0;
    u8 buf;
    if (!_ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(((nP::Unk_02006d14 *)this), &buf, &out->x, &out->z, ang)) {
        return FALSE;
    }
    if (buf == func_020b50e8()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02006d14::func_0200ef08() {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    s16 ang;
    if (func_0200ef98(&v, &ang)) {
        Unk_02006d14_Vec3 *pos = &((nP::Unk_02006d14 *)this)->unk_5c;
        if (pos->x == v.x && pos->z == v.z && ang == ((nP::Unk_02006d14 *)this)->unk_8e) {
            return TRUE;
        }
        if (func_020e9650(pos, &v) >= 0xe000) {
            Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_68;
            *q = v;
            *pos = *q;
            ((nP::Unk_02006d14 *)this)->unk_8e = ang;
            return FALSE;
        } else {
            func_0200f54c(((nP::Unk_02006d14 *)this), v.x, v.z, ang);
            return FALSE;
        }
    }
    return TRUE;
}

BOOL Unk_02006d14::func_0200eee4(s32 *p) {
    using namespace nP;
    Unk_02006d14_Vec3 t;
    func_0204ed8c(&t, p[0], p[1]);
    return func_0200ede8(&t);
}

BOOL Unk_02006d14::func_0200ede8(Unk_02006d14_Vec3 *p) {
    using namespace nP;
    Unk_02006d14_Vec3 v;
    s16 ang;
    Unk_02006d14_Vec3 *pos = &((nP::Unk_02006d14 *)this)->unk_5c;
    if (func_0200ef98(&v, &ang)) {
        if (func_020e9650(&v, p) >= 0x4000) {
            ang = func_020e7b98(p->x - pos->x, p->z - pos->z);
            v.x = p->x - func_01ffcb0c(0x2000, data_02135f44[(u16)ang >> 4 << 1]);
            v.z = p->z - func_01ffcb0c(0x2000, data_02135f44[((u16)ang >> 4 << 1) + 1]);
        } else {
            ang = ((nP::Unk_02006d14 *)this)->unk_8e;
        }
    } else {
        return TRUE;
    }
    if (func_020e9650(pos, &v) <= 0x200 && func_020e780c(((nP::Unk_02006d14 *)this)->unk_8e, ang) < 0x100) {
        return TRUE;
    }
    if (func_020e9650(pos, &v) >= 0xe000) {
        Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_68;
        *q = v;
        *pos = *q;
        ((nP::Unk_02006d14 *)this)->unk_8e = ang;
        return TRUE;
    }
    return FALSE;
}

void Unk_02006d14::func_0200ecdc(u32 a) {
    using namespace nP;
    u32 f = ((nP::Unk_02006d14 *)this)->unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (func_0200ec44(0x19)) {
            func_02003e70(((nP::Unk_02006d14 *)this)->unk_838, a, 0x7f, 0);
        } else {
            func_02003e70(((nP::Unk_02006d14 *)this)->unk_87c, a, 0x7f, 0);
        }
    }
}

void Unk_02006d14::func_0200ec54(u32 a, Unk_02006d14_Vec3 *v) {
    using namespace nP;
    u32 f = ((nP::Unk_02006d14 *)this)->unk_b0;
    if (!(Unk_0200ec54_Bit(f, 4) && Unk_0200ec54_Bit(f, 2))) {
        if (func_0200ec44(0x19)) {
            func_02003e60(((nP::Unk_02006d14 *)this)->unk_838, a, 0x7f, 0);
        } else {
            func_02003e60(((nP::Unk_02006d14 *)this)->unk_87c, a, 0x7f, 0);
        }
        ((nP::Unk_02006d14 *)this)->unk_8c0 = v->x;
        ((nP::Unk_02006d14 *)this)->unk_8c4 = v->y;
        ((nP::Unk_02006d14 *)this)->unk_8c8 = v->z;
    }
}

u32 Unk_02006d14::func_0200ec44(u32 id) {
    using namespace nP;
    return ((nP::Unk_02006d14 *)this)->unk_6e8 & (1 << id);
}

void Unk_02006d14::func_0200ec30(u32 id) {
    using namespace nP;
    ((nP::Unk_02006d14 *)this)->unk_6e8 |= (1 << id);
}

void Unk_02006d14::func_0200ec1c(u32 id) {
    using namespace nP;
    ((nP::Unk_02006d14 *)this)->unk_6e8 &= ~(1 << id);
}

void Unk_02006d14::func_0200ebe8() {
    using namespace nP;
    if (func_0208f024()) {
        ((nP::Unk_02006d14 *)this)->unk_16c = 1;
    } else if (func_0208f010()) {
        ((nP::Unk_02006d14 *)this)->unk_16c = 2;
    } else {
        ((nP::Unk_02006d14 *)this)->unk_16c = 0;
    }
}

BOOL Unk_020d6df4::vfunc_5c(Unk_02006d14_Vec3 *out) {
    using namespace nP;
    u32 a = ((nP::Unk_02006d14 *)this)->unk_6b8;
    if (a == 0 && ((nP::Unk_02006d14 *)this)->unk_6bc == 0 && ((nP::Unk_02006d14 *)this)->unk_6c0 == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = ((nP::Unk_02006d14 *)this)->unk_6bc;
    out->z = ((nP::Unk_02006d14 *)this)->unk_6c0;
    func_0203ee38(out);
    return TRUE;
}

void Unk_02006d14::func_0200eb58(u32 a, u32 b) {
    using namespace nP;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u32 buf;
        func_020954e0(&buf, b, a);
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, &buf, 3);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x2b, 4);
    }
}

namespace nP {
extern "C" void func_0200eb18() {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf = 0;
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, &buf, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x2d, 4);
    }
}
}

void Unk_02006d14::func_0200ead0() {
    using namespace nP;
    Unk_020cbb18 *g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(g)) {
        u8 buf = func_02010c74(((nP::Unk_02006d14 *)this));
        Unk_020cbb18 *g2 = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g2);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g2, &buf, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g2, 0x2e, 4);
    }
}

void Unk_02006d14::func_0200ea4c() {
    using namespace nP;
    if (func_0200ec44(0x15)) {
        func_02010dbc(&((nP::Unk_02006d14 *)this)->unk_458, ((nP::Unk_02006d14 *)this)->unk_45c, 0x400, 0x1770000, 0xc0000);
        func_02010dbc(&((nP::Unk_02006d14 *)this)->unk_45a, ((nP::Unk_02006d14 *)this)->unk_45e, 0x400, 0x1770000, 0xc0000);
        if (((nP::Unk_02006d14 *)this)->unk_45c == 0 && ((nP::Unk_02006d14 *)this)->unk_45e == 0 && ((nP::Unk_02006d14 *)this)->unk_458 == 0 && ((nP::Unk_02006d14 *)this)->unk_45a == 0) {
            func_0200ec1c(0x15);
        }
    }
}

BOOL Unk_02006d14::func_0200ea10(u32 id) {
    using namespace nP;
    if (id == 0x1e) {
        if (((nP::Unk_02006d14 *)this)->unk_7d1 == 0 && ((nP::Unk_02006d14 *)this)->unk_c78 == 0) {
            return TRUE;
        }
    } else if (id == 0x4f) {
        if (((nP::Unk_02006d14 *)this)->unk_c78 == 0) {
            return TRUE;
        }
    }
    return data_020c65f0[id];
}

void Unk_02006d14::func_0200e8d0() {
    using namespace nP;
    s16 s[2];
    volatile s32 sx, sy, sz;
    Unk_02006d14_Vec3 *q = &((nP::Unk_02006d14 *)this)->unk_5c;
    sx = q->x;
    sy = q->y;
    sz = q->z;
    if (((nP::Unk_02006d14 *)this)->unk_1ac != 0 && ((nP::Unk_02006d14 *)this)->unk_17e == 0x15) {
        u32 n = ((nP::Unk_02006d14 *)this)->unk_17f;
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, n) && func_02095154(2, 4)) {
            Unk_02006d14_Vec3 v;
            if (func_02095670(s, &v.x, &v.z, -1, ((nP::Unk_02006d14 *)this)->unk_7fc)) {
                Unk_02006d14_Vec3 v2;
                Unk_02006d14_Vec3 *p = func_020947f0(n);
                Unk_02006d14_Vec3 *q2 = &((nP::Unk_02006d14 *)this)->unk_5c;
                v2 = *q2;
                s32 a = func_020e7b98(p->x - v2.x, p->z - v2.z);
                s[1] = func_020e7b98(v.x - v2.x, v.z - v2.z);
                if (func_020e780c(a, s[1]) < 0x400) {
                    s32 d1 = func_020e9650(&v2, p);
                    s32 d2 = func_020e9650(&v2, &v);
                    if (d1 <= d2) {
                        Unk_02006d14_Vec3 out;
                        if (((nP::Unk_02006d14 *)this)->unk_7fc >= (s32)n) {
                            s[1] = s[1] + 0x4000;
                        } else {
                            s[1] = s[1] - 0x4000;
                        }
                        func_0200f3ec(&out, ((nP::Unk_02006d14 *)this), &v2, &s[1], (u32)&data_020d5e40);
                        Unk_02006d14_Vec3 *q3 = &((nP::Unk_02006d14 *)this)->unk_5c;
                        *q3 = out;
                    }
                }
            }
        }
    }
    _ZN12Unk_020102ec13func_0201071cEv(((nP::Unk_02006d14 *)this));
    q = &((nP::Unk_02006d14 *)this)->unk_5c;
    q->x = sx;
    q->y = sy;
    q->z = sz;
}

void Unk_02006d14::func_0200e870() {
    using namespace nP;
    s32 r = _ZN12Unk_02006d1413func_0200f5b0Ev(this);
    if (r == 4) {
        func_0205e1a0(((nP::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
    } else if (r == 3) {
        func_0205e1a0(((nP::Unk_02006d14 *)this)->unk_59c, 0x13, 3, 0);
    } else if (r == 10) {
        func_0205e1a0(((nP::Unk_02006d14 *)this)->unk_59c, 0x23, 3, 0);
    } else if (r == 6) {
        func_0205e1a0(((nP::Unk_02006d14 *)this)->unk_59c, 0x21, 3, 0);
    }
}

void Unk_02006d14::func_0200e7f4() {
    using namespace nP;
    Unk_0200e7f4_T24 buf;
    ((nP::Unk_02006d14 *)this)->unk_d0 = func_0203ef38(((nP::Unk_02006d14 *)this)->unk_c4, &((nP::Unk_02006d14 *)this)->unk_5c);
    _ZN12Unk_020d5d8413func_02002b84EPv(((nP::Unk_02006d14 *)this), &buf);
    ((nP::Unk_02006d14 *)this)->unk_294 = buf;
    data_021cb69c = ((nP::Unk_02006d14 *)this)->unk_294;
    _ZN12Unk_020dbe3413func_020553f8Ej(((nP::Unk_02006d14 *)this)->unk_230, 0);
    _ZN12Unk_020dbda413func_02053f08Ej(((nP::Unk_02006d14 *)this)->unk_230, 0);
    func_020553cc(((nP::Unk_02006d14 *)this)->unk_230, ((nP::Unk_02006d14 *)this)->unk_694, 11);
}

BOOL Unk_02006d14::func_0200e7c0() {
    using namespace nP;
    if (!_ZN12Unk_020cbb1813func_02072e88Ei(data_020cbb18, data_020cbb18->unk_64)) {
        return FALSE;
    }
    if (((nP::Unk_02006d14 *)this)->unk_7fc != 0) {
        return TRUE;
    }
    return FALSE;
}

namespace nP {
extern "C" BOOL func_0200e764() {
    s32 t = func_020b50dc();
    if (t == 12 || t == 13 || t == 14 || (u8)(t + 0xd2) <= 1) {
        u32 buf;
        s32 i = 0;
        Unk_020cbb18 *g = data_020cbb18;
        for (; i < 4; i++) {
            if (_ZN12Unk_020cbb1813func_02072e88Ei(g, i) && !func_020955e8(&buf, -1, i)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}
}

s32 Unk_020d6df4::vfunc_60() {
    using namespace nP;
    s32 v = ((nP::Unk_02006d14 *)this)->unk_818;
    if (v > 15) {
        v = ((nP::Unk_02006d14 *)this)->unk_818;
    }
    return v;
}

u8 Unk_020d6df4::func_0200e3c0(u32 i) {
    using namespace nO;
    return data_020c6684[i];
}

BOOL Unk_020d6df4::func_0200e35c(u8 *a, s32 *b, s32 *c, u16 *d) {
    using namespace nO;
    struct {
        u8 a;
        s16 b;
    } t;
    s32 t8, tc;
    if (!func_02095670(&t, &t8, &tc, -1, ((nO::Unk_020d6df4 *)this)->unk_7fc)) return FALSE;
    if (!func_020955e8(&t.b, -1, ((nO::Unk_020d6df4 *)this)->unk_7fc)) return FALSE;
    *a = t.a;
    *b = t8;
    *c = tc;
    *d = t.b;
    return TRUE;
}

namespace nO {
extern "C" BOOL func_0200e2f0(s32 unused, s32 a, s32 b, s32 c, s16 d, s16 *out) {
    s32 r5;
    BOOL r;
    if (c < func_01ffcb0c(0x108, 0x108)) return FALSE;
    r5 = func_020e7b98(a, b);
    if (c >= func_01ffcb0c(0x2666, 0x2666)) {
        r = TRUE;
    } else {
        s32 diff = (s16)(r5 - d);
        if (diff < 0) diff = -diff;
        if (diff < 0x4000) r = TRUE; else r = FALSE;
    }
    if (r) *out = r5;
    return r;
}
}

Unk_0200e2c0::Unk_0200e2c0() {
    using namespace nO;}

Unk_0200e2c0::~Unk_0200e2c0() {
    using namespace nO;}

Unk_0200e2c8::Unk_0200e2c8() {
    using namespace nO;}

Unk_0200e2c8::~Unk_0200e2c8() {
    using namespace nO;}

void Unk_0200e2c0::func_0200e2c0(s32 a, s32 b, s16 c) {
    using namespace nO;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

BOOL Unk_020d6df4::func_0200e248(nO::Unk_0200e248_Rec *r) {
    using namespace nO;
    s32 n = ((nO::Unk_020d6df4 *)this)->unk_c78;
    if (n < 0x1e) {
        if (((nO::Unk_020d6df4 *)this)->unk_c7c >= 0) {
            s32 t = r->unk_04;
            if (func_0200e220(((nO::Unk_020d6df4 *)this)->unk_c7c)->unk_04 < t) {
                ((nO::Unk_020d6df4 *)this)->unk_c7c = ((nO::Unk_020d6df4 *)this)->unk_c78;
            }
        } else {
            ((nO::Unk_020d6df4 *)this)->unk_c7c = n;
        }
        Unk_0200e248_Rec *d = &((nO::Unk_020d6df4 *)this)->unk_930[((nO::Unk_020d6df4 *)this)->unk_c78];
        d->unk_00 = r->unk_00;
        d->unk_04 = r->unk_04;
        d->unk_08 = r->unk_08;
        d->unk_0c = r->unk_0c;
        ((nO::Unk_020d6df4 *)this)->unk_c78++;
        return TRUE;
    }
    return FALSE;
}

nO::Unk_0200e248_Rec *Unk_020d6df4::func_0200e220(s32 i) {
    using namespace nO;
    if (i >= 0 && i < 0x1e && i < ((nO::Unk_020d6df4 *)this)->unk_c78) {
        return &((nO::Unk_020d6df4 *)this)->unk_930[i];
    }
    return NULL;
}

void Unk_020d6df4::func_0200e208() {
    using namespace nO;
    ((nO::Unk_020d6df4 *)this)->unk_c78 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_c7c = -1;
}

s32 Unk_020d6df4::func_0200e1dc() {
    using namespace nO;
    s32 r2 = 0;
    if (((nO::Unk_020d6df4 *)this)->unk_c7c >= 0) {
        r2 = func_0200e220(((nO::Unk_020d6df4 *)this)->unk_c7c)->unk_04;
    }
    s32 r0 = ((nO::Unk_020d6df4 *)this)->unk_7f8;
    if (r0 <= r2) r0 = r2;
    return r0;
}

s32 Unk_020d6df4::func_0200e1ac() {
    using namespace nO;
    s32 r2 = 0;
    if (((nO::Unk_020d6df4 *)this)->unk_c7c >= 0) {
        r2 = func_0200e220(((nO::Unk_020d6df4 *)this)->unk_c7c)->unk_04;
    }
    s32 r0 = ((nO::Unk_020d6df4 *)this)->unk_7f8 + 1;
    if (r0 <= r2) r0 = r2;
    return r0;
}

void Unk_020d6df4::func_0200e0b8() {
    using namespace nO;
    u16 v;
    s32 r4, r6;
    func_0205c778(&((nO::Unk_020d6df4 *)this)->unk_385, data_020c61a8[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    if (func_02010cf8(this) == 0) {
        func_0205c718(&((nO::Unk_020d6df4 *)this)->unk_385, 0);
    } else {
        func_0205c718(&((nO::Unk_020d6df4 *)this)->unk_385, 1);
    }
    _ZN12Unk_0205ca9413func_0205cbb0Ej(&((nO::Unk_020d6df4 *)this)->unk_770, data_020c61a0[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    func_02010cd4(&v, ((nO::Unk_020d6df4 *)this));
    _ZN12Unk_02006d1413func_02010050EPv(this, &v);
    r4 = NNS_G3dGetTex(func_0205c694(&((nO::Unk_020d6df4 *)this)->unk_385));
    r6 = NNS_G3dGetTex(func_0205c91c(&((nO::Unk_020d6df4 *)this)->unk_770));
    _ZN12Unk_02006d1413func_0200faa0EPvS0_S0_S0_(this, r6, r4, data_020d6f28, data_020d6f28);
    _ZN12Unk_02006d1413func_0200fa88EPvS0_S0_S0_(this, r6, r4, data_020d6f28, data_020d6f28);
    r4 = NNS_G3dGetTex(func_0205ef74(&((nO::Unk_020d6df4 *)this)->unk_79c));
    _ZN12Unk_02006d1413func_0200fa88EPvS0_S0_S0_(this, r4, NNS_G3dGetTex(func_0205c694(&((nO::Unk_020d6df4 *)this)->unk_385)), data_020d6f30, data_020d6f30);
    func_0205c6f4(&((nO::Unk_020d6df4 *)this)->unk_385);
}

void Unk_020d6df4::func_0200e058() {
    using namespace nO;
    u16 v[2];
    s32 r4, r3;
    func_0205dba8(&((nO::Unk_020d6df4 *)this)->unk_424, data_020c61b4[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    func_02010cb0(&v[1], ((nO::Unk_020d6df4 *)this));
    v[0] = v[1];
    r4 = func_02010c9c(this);
    r3 = func_02010c88(this);
    _ZN12Unk_02006d1413func_0200fab8EPthhh(this, v, r4, r3, 1);
}

void Unk_020d6df4::func_0200e008() {
    using namespace nO;
    u16 v[2];
    func_0205d5d4(&((nO::Unk_020d6df4 *)this)->unk_598, data_020c6198[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    func_02010af0(&v[0], ((nO::Unk_020d6df4 *)this));
    v[1] = v[0];
    _ZN12Unk_02006d1413func_0200fd90EPt(this, &v[1]);
    _ZN12Unk_02006d1413func_0200fdf4Ev(this);
}

BOOL Unk_020d6df4::func_0200dde0() {
    using namespace nO;
    s32 r6 = ((nO::Unk_020d6df4 *)this)->unk_08;
    s32 r5;
    ((nO::Unk_020d6df4 *)this)->unk_7fc = func_020951e4(r6);
    _ZN12Unk_020d967013func_0203e624Ej(this, (u16)((nO::Unk_020d6df4 *)this)->unk_7fc);
    func_02095324(((nO::Unk_020d6df4 *)this)->unk_7fc, ((nO::Unk_020d6df4 *)this));
    func_0205ef8c(&((nO::Unk_020d6df4 *)this)->unk_79c, data_020c6194[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    r5 = func_02010c88(this);
    _ZN12Unk_02006d1413func_02010078Eii(this, r5, _ZN12Unk_020102ec13func_02010b08Ej(this, 1));
    func_0200e0b8();
    _ZN12Unk_0205d1f813func_0205d20cEj(&((nO::Unk_020d6df4 *)this)->unk_70b, data_020c61a4[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    _ZN12Unk_0205ce0c13func_0205cf84Ej(&((nO::Unk_020d6df4 *)this)->unk_70a, data_020c61ac[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    _ZN12Unk_0205d34013func_0205d38cEj(&((nO::Unk_020d6df4 *)this)->unk_709, data_020c619c[func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc)]);
    _ZN12Unk_0205d34013func_0205d354Ej(&((nO::Unk_020d6df4 *)this)->unk_709, func_02010aa0(this));
    func_0200e058();
    func_0200e008();
    r5 = func_0209522c(((nO::Unk_020d6df4 *)this)->unk_7fc);
    u16 t;
    func_02010a7c(&t, ((nO::Unk_020d6df4 *)this));
    func_0205e310(&((nO::Unk_020d6df4 *)this)->unk_59c, data_020c61b0[r5], ((nO::Unk_020d6df4 *)this), &t, func_02010d20(this), 0);
    _ZN12Unk_0205f8d413func_0205fbc0Ei(&((nO::Unk_020d6df4 *)this)->unk_5c4, ((nO::Unk_020d6df4 *)this)->unk_7fc);
    ((nO::Unk_020d6df4 *)this)->unk_9c = 0xffffb000;
    ((nO::Unk_020d6df4 *)this)->unk_a0 = 0xffff6000;
    _ZN12Unk_020d6df413func_0200d568Ejjj(this, func_020951dc(r6), 9, -1);
    ((nO::Unk_020d6df4 *)this)->unk_900 &= ~0x80;
    _ZN12Unk_02005e7c13func_02005f04Ev(this);
    ((nO::Unk_020d6df4 *)this)->unk_6e8 = 0;
    _ZN12Unk_02006d1413func_0200ec30Ej(this, 1);
    BOOL b = (data_020e416c == 0);
    if (b) _ZN12Unk_02006d1413func_0200ec30Ej(this, 0);
    Unk_0200dde0_Vec3 *p = &((nO::Unk_020d6df4 *)this)->unk_5c;
    ((nO::Unk_020d6df4 *)this)->unk_6f0.x = p->x;
    ((nO::Unk_020d6df4 *)this)->unk_6f0.y = p->y;
    ((nO::Unk_020d6df4 *)this)->unk_6f0.z = p->z;
    ((nO::Unk_020d6df4 *)this)->unk_808 = -1;
    ((nO::Unk_020d6df4 *)this)->unk_80c = -1;
    ((nO::Unk_020d6df4 *)this)->unk_800 = -1;
    ((nO::Unk_020d6df4 *)this)->unk_804 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_810 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_814 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_818 = 0xf;
    ((nO::Unk_020d6df4 *)this)->unk_8e5 = 0x1f;
    ((nO::Unk_020d6df4 *)this)->unk_8e4 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_164 = 0;
    ((nO::Unk_020d6df4 *)this)->unk_168 = 0;
    return TRUE;
}

s32 Unk_020d6df4::func_0200d640() {
    using namespace nN;
    return ((nN::Unk_020d6df4 *)this)->unk_130;
}

s16 Unk_020d6df4::func_0200d634() {
    using namespace nN;
    return ((nN::Unk_020d6df4 *)this)->unk_134;
}

s16 Unk_020d6df4::func_0200d5fc() {
    using namespace nN;
    s16 r = func_0200d634();
    if (((nN::Unk_020d6df4 *)this)->unk_16c != 2 && data_021c3070) {
        r = r + _ZN12Unk_020d93b813func_0203bc68Ev(data_021c3070);
    }
    return r;
}

s32 Unk_020d6df4::func_0200d5e0() {
    using namespace nN;
    return func_02063c54((s16)(func_0200d5fc() - ((nN::Unk_020d6df4 *)this)->unk_8e));
}

s32 Unk_020d6df4::func_0200d5c4() {
    using namespace nN;
    return func_02063c18((s16)(func_0200d5fc() - ((nN::Unk_020d6df4 *)this)->unk_8e));
}

u8 Unk_020d6df4::func_0200d5b8() {
    using namespace nN;
    return ((nN::Unk_020d6df4 *)this)->unk_137;
}

void Unk_0200d5b4::func_0200d5b4(u32 v) {
    using namespace nN;
    unk_00 = v;
}

BOOL Unk_020d6df4::func_0200d568(u32 a, u32 b, u32 c) {
    using namespace nN;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0, b, c);
    m.unk_0c_d5b4.func_0200d5b4(a);
    ((nN::Unk_020d6df4 *)this)->unk_7f0 = 0;
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_0200d560::func_0200d560(u32 v) {
    using namespace nN;
    unk_00 = v;
    unk_04 = 0;
}

void Unk_020d6df4::func_0200d53c(Unk_0200d53c_Item *item) {
    using namespace nN;
    ((nN::Unk_020d6df4 *)this)->unk_7d0.func_0200d560(item->unk_0c);
    ((nN::Unk_020d6df4 *)this)->unk_7f4 = 0;
}

void Unk_020d6df4::func_0200d538() {
    using namespace nN;
}

void Unk_020d6df4::func_0200d3f0(u32 a) {
    using namespace nN;
    void *r6 = data_020cbb18;
    u16 arr[4];
    s32 vx, vz;
    if (_ZN12Unk_020cbb1813func_020729bcEj(r6, ((nN::Unk_020d6df4 *)this)->unk_7fc) || (a != 2 && a != 0x8b)) {
        ((nN::Unk_020d6df4 *)this)->unk_7f4 = 1;
    }
    if (!_ZN12Unk_020cbb1813func_020729bcEj(r6, ((nN::Unk_020d6df4 *)this)->unk_7fc)) {
        s32 t = func_020b50e8();
        if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x10) && t != 0x2e && t != 0xd && t != 0xe && t != 0xc && t != 0x2f) {
            if (func_02095670(arr, &vx, &vz, -1, ((nN::Unk_020d6df4 *)this)->unk_7fc)) {
                s32 *e = (s32 *)&((nN::Unk_020d6df4 *)this)->unk_5c;
                s32 *d = (s32 *)&((nN::Unk_020d6df4 *)this)->unk_68;
                d[0] = vx;
                e[0] = d[0];
                d[2] = vz;
                e[2] = d[2];
            }
            if (func_020955e8(&arr[1], -1, ((nN::Unk_020d6df4 *)this)->unk_7fc)) {
                _ZN12Unk_020102ec13func_02010a58EPs(this, &arr[1]);
            }
        }
    }
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0)) {
        s32 t = func_02097520(((nN::Unk_020d6df4 *)this)->unk_7fc);
        arr[2] = *_ZN12Unk_0209865c13func_02098744Ev();
        func_0205e24c(((nN::Unk_020d6df4 *)this)->unk_59c, &arr[2], t);
        BOOL ok;
        if (func_0204b2d4(&arr[2])) {
            arr[3] = 0xfff1;
            ok = func_0204b25c(&arr[2]) == func_0204b25c(&arr[3]);
        } else {
            ok = arr[2] == 0xfff1;
        }
        if (!ok) {
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 0, 0);
            func_0205e120(((nN::Unk_020d6df4 *)this)->unk_59c);
        }
    }
}

BOOL Unk_020d6df4::func_0200d2b4() {
    using namespace nN;
    BOOL result = FALSE;
    Unk_0200d560 *p = &((nN::Unk_020d6df4 *)this)->unk_7d0;
    if (p->unk_04 == 0) {
        BOOL a = func_0205c6a8(&((nN::Unk_020d6df4 *)this)->unk_385);
        BOOL b = ((nN::Unk_020d6df4 *)this)->unk_c90 == 2;
        BOOL c = ((nN::Unk_020d6df4 *)this)->unk_c88 == 2;
        if (a && b && c) {
            _ZN12Unk_020dbd3413func_02054b70EPv(((nN::Unk_020d6df4 *)this)->unk_230, func_0205c694(&((nN::Unk_020d6df4 *)this)->unk_385));
            func_0205ee10(&((nN::Unk_020d6df4 *)this)->unk_384, data_020c6190[func_0209522c(((nN::Unk_020d6df4 *)this)->unk_7fc)]);
            _ZN12Unk_020dbda413func_02053f8cEj(((nN::Unk_020d6df4 *)this)->unk_230, func_0205edfc(&((nN::Unk_020d6df4 *)this)->unk_384));
            _ZN12Unk_020dbd3413func_02054b38EPv(((nN::Unk_020d6df4 *)this)->unk_230, func_0205edfc(&((nN::Unk_020d6df4 *)this)->unk_384));
            _ZN12Unk_020102ec13func_020105ecEv(this);
            s32 i = func_0209522c(((nN::Unk_020d6df4 *)this)->unk_7fc) * 2;
            func_0205c384(&((nN::Unk_020d6df4 *)this)->unk_6fc, data_020c61b8[i]);
            func_0205c384(&((nN::Unk_020d6df4 *)this)->unk_6fd, (data_020c61b8 + 1)[i]);
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 0, 0);
            _ZN12Unk_020dbd5413func_02054710Ev(((nN::Unk_020d6df4 *)this)->unk_230);
            _ZN12Unk_020dbe3413func_020554a0Eiiiii(((nN::Unk_020d6df4 *)this)->unk_230, func_02005264, 6, 1, ((nN::Unk_020d6df4 *)this), 0);
            _ZN12Unk_020dbe5c13func_02055df0Ev(((nN::Unk_020d6df4 *)this)->unk_70c);
            _ZN12Unk_020dbe5c13func_02055df0Ev(&((nN::Unk_020d6df4 *)this)->unk_738);
            result = TRUE;
            p->unk_04++;
        }
    }
    return result;
}

void Unk_020d6df4::func_0200cf5c(s32 *p) {
    using namespace nM;
    if (*p == 0) {
        return;
    }
    ((nM::Unk_020d6df4 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nM::Unk_020d6df4 *)this)->unk_7ec);
    s32 r4 = ((nM::Unk_020d6df4 *)this)->unk_7d0.unk_00;
    s32 f;
    Unk_020d6df4_Data *r7;
    BOOL c = data_020e416c == 0 ? TRUE : FALSE;
    if (c && r4 != 1 && _ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
        if (func_0203081c(&((nM::Unk_020d6df4 *)this)->unk_5c, 0, 0x19) >= 0x800) {
            r4 = 0x6d;
        }
    }
    c = data_020e416c == 0 ? TRUE : FALSE;
    if (!c || func_020b5184()) {
        _ZN12Unk_02019e2c13func_0201a0f4Ev(((nM::Unk_020d6df4 *)this)->unk_908);
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nM::Unk_020d6df4 *)this)->unk_7fc) || (func_020b52d0() && r4 == 8)) {
            _ZN12Unk_02003c3013func_02003eccEv(((nM::Unk_020d6df4 *)this)->unk_838);
            ((nM::Unk_020d6df4 *)this)->unk_920 = ((nM::Unk_020d6df4 *)this)->unk_838;
            ((nM::Unk_020d6df4 *)this)->unk_92e = 1;
            _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x19);
        } else {
            _ZN12Unk_02003c3013func_02003eccEv(((nM::Unk_020d6df4 *)this)->unk_87c);
            ((nM::Unk_020d6df4 *)this)->unk_920 = ((nM::Unk_020d6df4 *)this)->unk_87c;
        }
        _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xa);
    }
    r7 = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_020729bcEj(r7, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
        s32 r0 = func_020b50e8();
        if (r0 != 0xc && r0 != 0x2f) {
            if (!func_020b4880() || func_0200e764(this) == 1) {
                func_020b78c4();
                _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x1b);
            } else if (r7->unk_64 == 0) {
                if ((u8)(func_020eaf18() + 0xfd) <= 1) {
                    func_020e9b70();
                }
            }
        }
    }
    f = 0;
    switch (r4) {
    case 1:
        func_0200cf04(9, -1);
        break;
    case 8:
        if (func_020b52d0()) {
            func_ov003_022247b8(((nM::Unk_020d6df4 *)this), 0, 6, -1);
        } else {
            if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1b)) {
                f = 1;
            }
            func_ov003_022247b8(((nM::Unk_020d6df4 *)this), 1, 6, -1);
        }
        break;
    case 0x3b:
        func_ov003_02210d54(((nM::Unk_020d6df4 *)this), 6, -1);
        break;
    case 0x3c:
        if (_ZN12Unk_020cbb1813func_020729bcEj(r7, ((nM::Unk_020d6df4 *)this)->unk_7fc) && !func_020b15ec()) {
            _ZN12Unk_020d8df413func_02035200Ev(data_021c1b3c + 0x2e4);
            func_ov003_02207c08(((nM::Unk_020d6df4 *)this), 0, 7, -1);
            r4 = 0x6d;
        } else {
            func_ov003_022107a8(((nM::Unk_020d6df4 *)this), 1, -1);
        }
        break;
    case 0x6d:
        _ZN12Unk_020d8df413func_02035200Ev(data_021c1b3c + 0x2e4);
        func_ov003_02207c08(((nM::Unk_020d6df4 *)this), 1, 7, -1);
        break;
    case 0x6e:
        func_ov003_0220798c(((nM::Unk_020d6df4 *)this), 7, -1);
        break;
    case 0x43:
        func_ov004_0221ff68(((nM::Unk_020d6df4 *)this), 6, -1);
        break;
    case 0x44:
        func_ov004_0221fe30(((nM::Unk_020d6df4 *)this), 6, -1);
        break;
    case 0x28:
        if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1b)) {
            f = 1;
        }
        func_ov004_022217c4(((nM::Unk_020d6df4 *)this), 0, 6, -1);
        break;
    case 0x10:
        ((nM::Unk_020d6df4 *)this)->unk_7f4 = 1;
        _ZN12Unk_02006d1413func_0200bd60Esji(this, 3, 5, -1);
        break;
    case 0x8b:
        func_ov004_0221f5f4(((nM::Unk_020d6df4 *)this), &((nM::Unk_020d6df4 *)this)->unk_5c, 6, -1);
        _ZN12Unk_02006d1413func_0200ec30Ej(this, 5);
        break;
    case 0x8e:
        func_ov004_0221ee1c(((nM::Unk_020d6df4 *)this), &((nM::Unk_020d6df4 *)this)->unk_5c, 6, -1);
        _ZN12Unk_02006d1413func_0200ec30Ej(this, 5);
        break;
    default:
        r4 = 2;
        func_0200ce98(0, 1, -1);
        if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1b)) {
            f = 1;
        }
        _ZN12Unk_02006d1413func_0200ed48Ev(this);
        break;
    }
    ((nM::Unk_020d6df4 *)this)->unk_08 = ((r4 << 22) & 0x3fc00000) | (((nM::Unk_020d6df4 *)this)->unk_08 & 0xc03fffff);
    if (f) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(r7, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
            func_0203d76c();
        }
    }
}

void Unk_020d6df4::func_0200cf3c() {
    using namespace nM;
    s32 v = 0;
    v = _ZN12Unk_020d6df413func_0200d2b4Ev(this);
    func_0200cf5c(&v);
}

BOOL Unk_020d6df4::func_0200cf04(u32 a, u32 b) {
    using namespace nM;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 1, a, b);
    BOOL r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_020d6df4::func_0200cef8(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    ((nM::Unk_020d6df4 *)this)->unk_7f4 = 0;
}

void Unk_020d6df4::func_0200ceec(u32 a) {
    using namespace nM;
    func_0200cf04(9, a);
}

void Unk_020d6df4::func_0200cee0() {
    using namespace nM;
    ((nM::Unk_020d6df4 *)this)->unk_7f4 = 1;
}

void Unk_020d6df4::func_0200cedc() {
    using namespace nM;
}

namespace nM {
extern "C" void func_0200ced8(u16 *p, u32 v) {
    *p = v;
}
}

BOOL Unk_020d6df4::func_0200ce98(u32 a, u32 b, u32 c) {
    using namespace nM;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 2, b, c);
    func_0200ced8((u16 *)&m.unk_0c_b[0], a);
    BOOL r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_020d6df4::func_0200ce3c(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    if (!_ZN12Unk_02006d1413func_0200f0fcEv(this)) {
        u16 h = *(u16 *)&((nM::Unk_02006d14_Item *)item)->unk_0c[0];
        *(u8 *)&((nM::Unk_020d6df4 *)this)->unk_7d0 = old == 4 ? 1 : 0;
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, h, h);
        _ZN12Unk_02006d1413func_0200e870Ev(this);
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 9);
        ((nM::Unk_020d6df4 *)this)->unk_164 = 0;
        ((nM::Unk_020d6df4 *)this)->unk_168 = 0;
        func_02094574(0, 0, 4);
    }
}

void Unk_020d6df4::func_0200ce28(u32 a) {
    using namespace nM;
    func_0200ce98(3, 5, a);
}

void Unk_020d6df4::func_0200cdfc() {
    using namespace nM;
    if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
        ((nM::Unk_020d6df4 *)this)->unk_7f4 = 1;
    }
}

BOOL Unk_020d6df4::func_0200cd54() {
    using namespace nM;
    u8 a;
    s16 b, c, e;
    s32 x, z;
    if (!_ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(this, &a, &x, &z, &b)) {
        return FALSE;
    }
    if (a != func_020b50e8()) {
        return FALSE;
    }
    s32 dx = x - ((nM::Unk_020d6df4 *)this)->unk_5c.x;
    s32 dz = z - ((nM::Unk_020d6df4 *)this)->unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    BOOL r4 = func_0200e2f0(this, dx, dz, d2, b, &c);
    if (!r4) {
        e = ((nM::Unk_020d6df4 *)this)->unk_8e;
        func_02010d74(&e, b);
        _ZN12Unk_020102ec13func_02010a58EPs(this, &e);
        func_02010e48(&((nM::Unk_020d6df4 *)this)->unk_5c.x, x);
        func_02010e48(&((nM::Unk_020d6df4 *)this)->unk_5c.z, z);
    }
    return r4;
}

void Unk_020d6df4::func_0200cc6c() {
    using namespace nM;
    s16 buf;
    s32 r6 = _ZN12Unk_02006d1413func_020100d0Ev(this);
    s32 r4 = 0;
    if (func_020b52f8()) {
        BOOL b = data_021c3cc0 == 2 ? TRUE : FALSE;
        if (b) {
            if (!(*(u8 *)func_020952c8() & 8)) {
                if (data_ov004_022523c8) {
                    *(u8 *)func_020952c8() |= 8;
                    _ZN12Unk_0200804013func_02008770Esjj(this, ((nM::Unk_020d6df4 *)this)->unk_8e, 6, -1);
                    return;
                }
            }
        }
    }
    if (r6 > 0) {
        u32 v = *(u8 *)&((nM::Unk_020d6df4 *)this)->unk_7d0;
        if (r6 < 0x53f) {
            v = 0;
        }
        r4 = func_0200cb50(v, 1, -1);
    }
    if (!_ZN12Unk_02006d1413func_0200ff08Ev(this)) {
        r4 |= _ZN12Unk_02006d1413func_0200f0fcEv(this);
    } else {
        r4 = 1;
    }
    if (r4) {
        s32 h = ((nM::Unk_020d6df4 *)this)->unk_8e;
        buf = h + 0xaf0;
        func_02090330(0x27, ((nM::Unk_020d6df4 *)this)->unk_6d0, &buf, 0);
        buf = h - 0xaf0;
        func_02090330(0x27, ((nM::Unk_020d6df4 *)this)->unk_6c4, &buf, 0);
    }
}

void Unk_020d6df4::func_0200cc08(u8 *p) {
    using namespace nM;
    if (*p != 0) {
        func_0200cb50(0, 1, -1);
    }
    if (((nM::Unk_020d6df4 *)this)->unk_7f4 == 0) {
        if (func_02095180(0x1b, 4)) {
            ((nM::Unk_020d6df4 *)this)->unk_7f4 = 1;
        } else {
            s32 buf;
            if (func_02095574(&buf, -1, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
                if (buf == 2 || buf == 0x40) {
                    ((nM::Unk_020d6df4 *)this)->unk_7f4 = 1;
                }
            }
        }
    }
}

void Unk_020d6df4::func_0200cb94() {
    using namespace nM;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nM::Unk_020d6df4 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec13func_020109c4Ev(this);
        _ZN12Unk_020102ec13func_02010914Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        _ZN12Unk_020102ec13func_0201065cEv(this);
        func_0200cc6c();
    } else {
        u8 b = func_0200cd54();
        _ZN12Unk_020102ec13func_02010914Ev(this);
        _ZN12Unk_02006d1413func_0200e8d0Ev(this);
        _ZN12Unk_020102ec13func_0201065cEv(this);
        func_0200cc08(&b);
    }
    *(u8 *)&((nM::Unk_020d6df4 *)this)->unk_7d0 = 0;
}

namespace nM {
extern "C" void func_0200cb90(u8 *p, u32 v) {
    *p = v;
}
}

BOOL Unk_020d6df4::func_0200cb50(u32 a, u32 b, u32 c) {
    using namespace nM;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 3, b, c);
    func_0200cb90(&m.unk_0c_b[0], a);
    BOOL r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_020d6df4_7d0::func_0200cb48() {
    using namespace nM;
    unk_00 = 0;
}

void Unk_020d6df4::func_0200caf8(Unk_02006d14_Item *item, u32 old) {
    using namespace nM;
    u8 *p = &((nM::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_020d6df4_7d0 *q = &((nM::Unk_020d6df4 *)this)->unk_7d0;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 1, 3, 3);
    if (_ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
        func_0205e1a0(((nM::Unk_020d6df4 *)this)->unk_59c, 1, 3, 0);
    }
    q->func_0200cb48();
    if (*p != 0) {
        q->unk_00 = 0x456;
    }
}

void Unk_020d6df4::func_0200caf4() {
    using namespace nM;
}

void Unk_020d6df4::func_0200ca60() {
    using namespace nM;
    s32 *r6 = &((nM::Unk_020d6df4 *)this)->unk_7d0.unk_00;
    s32 r4 = _ZN12Unk_02006d1413func_020100d0Ev(this);
    s32 cur = *r6;
    if (cur < r4) {
        *r6 = func_02010d68(cur, r4);
    } else if (cur > r4) {
        *r6 = func_02010d50(cur, r4);
    }
    s32 r7 = _ZN12Unk_020d6df413func_0200d5fcEv(this);
    s16 buf = ((nM::Unk_020d6df4 *)this)->unk_8e;
    if (r4 > 0) {
        func_02010d98(&buf, r7);
        _ZN12Unk_020102ec13func_02010a58EPs(this, &buf);
    }
    s32 r = func_01ffcb0c(*r6, data_02135f44[((u16)(s16)(buf - r7) >> 4) * 2 + 1]);
    if (r < 0) {
        r = -r;
    }
    s32 t = r;
    _ZN12Unk_020102ec13func_02010a34EPj(this, &t);
}

BOOL Unk_020d6df4::func_0200c900() {
    using namespace nM;
    u8 a;
    s16 b, c, e;
    s32 x, z, v;
    if (!_ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(this, &a, &x, &z, &b)) {
        return TRUE;
    }
    if (a != func_020b50e8()) {
        return TRUE;
    }
    s32 dx = x - ((nM::Unk_020d6df4 *)this)->unk_5c.x;
    s32 dz = z - ((nM::Unk_020d6df4 *)this)->unk_5c.z;
    s32 d2 = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
    if (!func_0200e2f0(this, dx, dz, d2, b, &c)) {
        return TRUE;
    }
    e = ((nM::Unk_020d6df4 *)this)->unk_8e;
    func_02010d98(&e, c);
    _ZN12Unk_020102ec13func_02010a58EPs(this, &e);
    v = ((nM::Unk_020d6df4 *)this)->unk_98;
    s32 r6 = FX_Sqrt(d2);
    s32 m = r6;
    if (r6 > 0x6e2) {
        m = 0x6e2;
    }
    s32 s = data_02135f44[((u16)(s16)(e - c) >> 4) * 2 + 1];
    if (s < 0) {
        s = 0;
    }
    s32 r4 = func_01ffcb0c(m, s);
    if (r6 >= 0x2666) {
        if (r6 >= 0xe000) {
            ((nM::Unk_020d6df4 *)this)->unk_5c.x = x;
            ((nM::Unk_020d6df4 *)this)->unk_5c.z = z;
            ((nM::Unk_020d6df4 *)this)->unk_8e = b;
            return TRUE;
        }
    } else {
        s32 t = func_01ffcb0c(r6 - 0x108, func_01ffc5a4(0x5da, 0x255e)) + 0x108;
        if (t < 0x108) {
            t = 0x108;
        }
        if (r4 > t) {
            r4 = t;
        }
    }
    if (v < r4) {
        v = func_02010d68(v, r4);
    } else if (v > r4) {
        v = func_02010d50(v, r4);
    }
    _ZN12Unk_020102ec13func_02010a34EPj(this, &v);
    return FALSE;
}

void Unk_020d6df4::func_0200c7dc() {
    using namespace nM;
    s32 v, c, r4;
    Unk_020d6df4_Vec out;
    s16 sx;
    v = ((nM::Unk_020d6df4 *)this)->unk_98;
    Unk_020d6df4_Vec old;
    Unk_020d6df4_Vec *pp = &((nM::Unk_020d6df4 *)this)->unk_5c;
    old.x = pp->x;
    old.y = pp->y;
    old.z = pp->z;
    BOOL r6 = func_020af3bc(&out, &sx, &c, ((nM::Unk_020d6df4 *)this)->unk_130, ((nM::Unk_020d6df4 *)this)->unk_134);
    if (r6) {
        pp = &((nM::Unk_020d6df4 *)this)->unk_5c;
        pp->x = out.x;
        pp->y = out.y;
        pp->z = out.z;
        _ZN12Unk_020102ec13func_02010a58EPs(this, &sx);
        v = func_020e9650(&((nM::Unk_020d6df4 *)this)->unk_5c, &old);
        _ZN12Unk_020102ec13func_02010a34EPj(this, &v);
        v = c;
        v = v << 2;
    }
    r4 = func_01ffcb0c(v, 0x3ae1);
    if (r4 <= ((nM::Unk_020d6df4 *)this)->unk_2d0) {
        ((nM::Unk_020d6df4 *)this)->unk_2dc = r4;
        Unk_0205dfa4_Sub &p = func_0205dfa4(((nM::Unk_020d6df4 *)this)->unk_59c);
        if (r4 <= p.unk_04) {
            Unk_0205dfa4_Sub &q = func_0205dfa4(((nM::Unk_020d6df4 *)this)->unk_59c);
            q.unk_10 = r4;
        }
    }
    if (r6) {
        if (((nM::Unk_020d6df4 *)this)->unk_700 != 3) {
            _ZN12Unk_020102ec13func_02010380Eijt(this, 3, 3, 3);
        }
    } else if (v > 0x53f) {
        if (((nM::Unk_020d6df4 *)this)->unk_700 != 2) {
            _ZN12Unk_020102ec13func_02010380Eijt(this, 2, 3, 3);
        }
    } else if (((nM::Unk_020d6df4 *)this)->unk_700 != 1) {
        _ZN12Unk_020102ec13func_02010380Eijt(this, 1, 3, 3);
    }
    _ZN12Unk_020dbda413func_02053f20Ev(((nM::Unk_020d6df4 *)this)->unk_230);
    _ZN12Unk_02006d1413func_0200f32cEv(this);
}

void Unk_020d6df4::func_0200c778() {
    using namespace nM;
    if (((nM::Unk_020d6df4 *)this)->unk_700 != 2) {
        func_02005ee0(this, 0x93, 1);
    } else {
        s32 t = ((nM::Unk_020d6df4 *)this)->unk_98 - 0x53f;
        if (t < 0) {
            func_02005ee0(this, 0x93, 1);
        }
        s32 a = func_01ffc5a4(t, 0x1a3);
        s32 b = func_01ffcb0c(0xc17000, a);
        _ZN12Unk_020102ec13func_02010a44Ev(this, (b << 4) >> 16);
    }
}

void Unk_02007694::func_0200c698(s16 *p) {
    using namespace nL;
    BOOL c = data_020e416c == 0;
    if (c && ((nL::Unk_02007694 *)this)->unk_8e4 == 0 && ((nL::Unk_02007694 *)this)->unk_98 == 0x6e2) {
        u16 t;
        if (_ZN12Unk_0209865c13func_020987a0Ev(func_0209750c()) == 2 || (func_02010cb0(&t, ((nL::Unk_02007694 *)this)), t == 0x13c3)) {
            if (func_02063b8c(0x17a) == 0) {
                func_ov003_02207790(((nL::Unk_02007694 *)this), 6, -1);
                return;
            }
        }
    }
    if (*(s32 *)&((nL::Unk_02007694 *)this)->unk_7d0 <= 0) {
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
    if (((nL::Unk_02007694 *)this)->unk_700 == 2 && _ZN12Unk_020d6df413func_0200d640Ev(this) > 0) {
        u16 x = _ZN12Unk_020d6df413func_0200d5fcEv(this);
        if (func_020e780c(x, *p) > 0x3a4c) {
            func_0200c5b0(x, 3, -1);
        }
    }
    _ZN12Unk_02006d1413func_0200ff08Ev(this);
}

void Unk_02007694::func_0200c67c(u8 *p) {
    using namespace nL;
    if (*p != 0) {
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
}

void Unk_02007694::func_0200c5f4() {
    using namespace nL;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nL::Unk_02007694 *)this)->unk_7fc)) {
        s16 x = ((nL::Unk_02007694 *)this)->unk_94;
        _ZN12Unk_020d6df413func_0200ca60Ev(this);
        _ZN12Unk_020d6df413func_0200c7dcEv(this);
        _ZN12Unk_020d6df413func_0200c778Ev(this);
        _ZN12Unk_020102ec13func_020109c4Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        _ZN12Unk_020102ec13func_0201065cEv(this);
        func_0200c698(&x);
    } else {
        u8 f = _ZN12Unk_020d6df413func_0200c900Ev(this);
        _ZN12Unk_020d6df413func_0200c7dcEv(this);
        _ZN12Unk_020d6df413func_0200c778Ev(this);
        _ZN12Unk_020102ec13func_020109acEv(this);
        _ZN12Unk_02006d1413func_0200e8d0Ev(this);
        func_0200c67c(&f);
    }
}

void Unk_0200c2fc::func_0200c5f0(u16 a) {
    using namespace nL;
    unk_00 = a;
}

u32 Unk_02007694::func_0200c5b0(u16 a, u32 b, u32 c) {
    using namespace nL;
    Unk_0200e2c0 obj;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 4, b, c);
    obj.unk_0c_c2fc.func_0200c5f0(a);
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);
    return r;
}

void Unk_0200c288::func_0200c5ac(s16 a) {
    using namespace nL;
    unk_00 = a;
}

void Unk_02007694::func_0200c470(Unk_0200e2c0 *item) {
    using namespace nL;
    s16 v = *(s16 *)&item->unk_0c_c2fc;
    Unk_0200bff8_Vec vec;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 4, 3, 0);
    p->func_0200c5ac(v);
    s32 b, a;
    a = ((nL::Unk_02007694 *)this)->unk_8e << 12;
    b = v << 12;
    s32 d = b - a;
    if (d < 0) d = -d;
    if (b >= a) {
        if (d > 0x8000000) {
            v += 0x6fd0;
        } else {
            v += 0x9030;
        }
    } else {
        if (d > 0x8000000) {
            v += 0x9030;
        } else {
            v += 0x6fd0;
        }
    }
    vec = ((nL::Unk_02007694 *)this)->unk_6c4;
    s32 i = (u16)v >> 4;
    s32 t1, t0;
    s32 sn = data_02135f44[i * 2];
    s32 cs = data_02135f44[i * 2 + 1];
    t0 = func_01ffcb0c(cs, 0x666) - func_01ffcb0c(sn, 0x666);
    t1 = func_01ffcb0c(sn, 0x666) + func_01ffcb0c(cs, 0x666);
    vec.x += t1;
    vec.z += t0;
    p->unk_02 = v + 0x8000;
    p->unk_02 -= 0x38e;
    func_02090330(1, &vec, &v, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x53);
}

void Unk_02007694::func_0200c46c() {
    using namespace nL;
}

void Unk_02007694::func_0200c460(u32 a) {
    using namespace nL;
    ((nL::Unk_02007694 *)this)->unk_94 = ((nL::Unk_02007694 *)this)->unk_8e;
}

void Unk_02007694::func_0200c410() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    s32 t;
    func_02010d98(&((nL::Unk_02007694 *)this)->unk_8e, (s16)p->unk_00);
    s32 v = ((nL::Unk_02007694 *)this)->unk_98;
    t = func_02010d44(v, 0);
    _ZN12Unk_020102ec13func_02010a34EPj(this, &t);
    if (t == 0 && v != 0) {
        func_02090330(0x29, &((nL::Unk_02007694 *)this)->unk_5c[0], &p->unk_02, 0);
    }
}

void Unk_02007694::func_0200c3c8() {
    using namespace nL;
    s32 t = ((nL::Unk_02007694 *)this)->unk_98;
    if (((nL::Unk_02007694 *)this)->unk_8e == (s16)((nL::Unk_02007694 *)this)->unk_7d0.unk_00 && t <= 0) {
        ((nL::Unk_02007694 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nL::Unk_02007694 *)this)->unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
}

void Unk_02007694::func_0200c39c() {
    using namespace nL;
    func_0200c410();
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_020109c4Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    _ZN12Unk_020102ec13func_0201065cEv(this);
    func_0200c3c8();
}

void Unk_0200c2fc::func_0200c398(u16 a) {
    using namespace nL;
    unk_00 = a;
}

u32 Unk_02007694::func_0200c358(u16 a, u32 b, u32 c) {
    using namespace nL;
    Unk_0200e2c0 obj;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 5, b, c);
    obj.unk_0c_c2fc.func_0200c398(a);
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);
    return r;
}

void Unk_02007694::func_0200c33c(Unk_0200e2c0 *item) {
    using namespace nL;
    u16 v = item->unk_0c_c2fc.unk_00;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x12, v, v);
    _ZN12Unk_02006d1413func_0200e870Ev(this);
}

void Unk_02007694::func_0200c328(u32 a) {
    using namespace nL;
    func_0200c358(3, 5, a);
}

void Unk_02007694::func_0200c304() {
    using namespace nL;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_02006d1413func_0200ef08Ev(this)) {
        _ZN12Unk_020102ec13func_020109c4Ev(this);
    }
    _ZN12Unk_020102ec13func_0201071cEv(this);
}

void Unk_0200c2fc::func_0200c2fc(u16 a, s32 b, s32 c) {
    using namespace nL;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

u32 Unk_02007694::func_0200c2b4(u16 a, u32 b, u32 c, u32 d, s16 e) {
    using namespace nL;
    Unk_0200e2c0 obj;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 7, d, e);
    obj.unk_0c_c2fc.func_0200c2fc(a, b, c);
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);
    return r;
}

void Unk_0200c288::func_0200c288(u16 a, s32 b, s32 c, s16 d) {
    using namespace nL;
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = 0;
    unk_0e = -d / 3;
}

void Unk_0200c24c::func_0200c270(u16 a, u8 b, u8 c) {
    using namespace nL;
    func_02076964(this, a);
    unk_02 = b;
    unk_03 = c;
}

void Unk_0200c24c::func_0200c24c(u16 *a, u8 *b, u8 *c) {
    using namespace nL;
    *a = func_0207694c(this);
    *b = unk_02;
    *c = unk_03;
}

void Unk_02007694::func_0200c1bc(Unk_0200e2c0 *item) {
    using namespace nL;
    Unk_0200c2fc *p = &item->unk_0c_c2fc;
    u16 a = p->unk_00;
    s32 b = p->unk_04;
    s32 c = p->unk_08;
    if (c == 0x10) {
        _ZN12Unk_020102ec13func_02010358Eijt(this, 6, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_02010358Eijt(this, 5, 3, 0);
    }
    ((nL::Unk_02007694 *)this)->unk_7d0.func_0200c288(a, b, c, ((nL::Unk_02007694 *)this)->unk_8e);
    ((nL::Unk_02007694 *)this)->unk_8ec.func_0200c270(a, b, c);
    if (b == 2 && a == 0x13c3) {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x77);
    } else {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x76);
    }
    func_0209028c(0x61, &((nL::Unk_02007694 *)this)->unk_5c[0], 0, 0);
}

void Unk_02007694::func_0200c180(s16 a) {
    using namespace nL;
    u16 x;
    u8 y, z;
    ((nL::Unk_02007694 *)this)->unk_8ec.func_0200c24c(&x, &y, &z);
    func_0200c2b4(x, y, z, 6, a);
}

void Unk_02007694::func_0200bff8() {
    using namespace nL;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(&((nL::Unk_02007694 *)this)->unk_2cc[0], 0xd)) {
        func_02090330(0x22, &((nL::Unk_02007694 *)this)->unk_5c[0], 0, 0);
    } else if (_ZN12Unk_020dbe7c13func_020565e8Ei(&((nL::Unk_02007694 *)this)->unk_2cc[0], 3)) {
        s16 x = ((nL::Unk_02007694 *)this)->unk_8e;
        Unk_0200bff8_Vec v;
        s16 h;
        v = ((nL::Unk_02007694 *)this)->unk_6d0;
        v.z += 0x266;
        h = x + 0xaf0;
        func_02090330(0x27, &v, &h, 0);
        v = ((nL::Unk_02007694 *)this)->unk_6c4;
        v.z += 0x266;
        h = x - 0xaf0;
        func_02090330(0x27, &v, &h, 0);
    }
}

void Unk_02007694::func_0200bfc0() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        _ZN12Unk_02006d1413func_02010050EPv(this, &t);
        if (_ZN12Unk_02006d1413func_0201000cEv(this)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200bf90() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        if (_ZN12Unk_02006d1413func_0200fd90EPt(this, &t)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200bf48() {
    using namespace nL;
    Unk_0200c288 *p = &((nL::Unk_02007694 *)this)->unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        u32 a = func_02010c9c(this);
        u32 b = func_02010c88(this);
        if (_ZN12Unk_02006d1413func_0200fab8EPthhh(this, &t, a, b, 0)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200be2c() {
    using namespace nL;
    s16 v = ((nL::Unk_02007694 *)this)->unk_8e; s32 a; s16 t = ((nL::Unk_02007694 *)this)->unk_7d0.unk_0e;
    if (v != 0) {
        a = v;
        if (a < 0) a = -a;
        if (a < (t < 0 ? -t : t)) {
            v = 0;
        } else {
            v += t;
        }
    }
    _ZN12Unk_020102ec13func_02010a58EPs(this, &v);
}

void Unk_02006d14::func_0200bdcc() {
    using namespace nK;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        ((nK::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nK::Unk_02006d14 *)this)->unk_7ec);
        s32 t = ((nK::Unk_02006d14 *)this)->unk_7d8;
        if (t == 5) {
            _ZN12Unk_0200769413func_0200c358Etjj(this, 0, 5, -1);
        } else if (t == 0x10) {
            func_0200bd60(0, 5, -1);
        } else {
            func_02094c38();
        }
    }
}

void Unk_02006d14::func_0200bda4() {
    using namespace nK;
    _ZN12Unk_0200769413func_0200bff8Ev(this);
    _ZN12Unk_0200769413func_0200be7cEv(this);
    _ZN12Unk_0200769413func_0200be2cEv(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_0200bdcc();
}

void Unk_0200bda0::func_0200bda0(s16 v) {
    using namespace nK;
    unk_00 = v;
}

s32 Unk_02006d14::func_0200bd60(s16 a, u32 b, s32 c) {
    using namespace nK;
    Unk_0200bd60_Msg m;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x10, b, c);
    m.unk_0c.func_0200bda0(a);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02006d14::func_0200bd2c(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u16 v = *(u16 *)&((nK::Unk_02006d14_Item *)item)->unk_0c[0];
    if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x17)) {
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, v, 0);
    }
    _ZN12Unk_02006d1413func_0200e870Ev(this);
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1d);
}

void Unk_02006d14::func_0200bd18(u32 v) {
    using namespace nK;
    func_0200bd60(3, 5, v);
}

void Unk_02006d14::func_0200bcec() {
    using namespace nK;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 0);
    }
}

void Unk_02006d14::func_0200bc78() {
    using namespace nK;
    Unk_0200bc78_Obj *o;
    s16 res;
    s16 h;
    Unk_0200bc78_Vec d;
    nK::Unk_02006d14_Vec *pv;
    s16 *pr;
    o = (Unk_0200bc78_Obj *)func_0203d608();
    pr = 0;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0xe)) o = 0;
    if (o != 0) {
        nK::Unk_02006d14_Vec *ov;
        pv = &((nK::Unk_02006d14 *)this)->unk_5c;
        ov = o->vfunc_50();
        func_0200bc78_sub(&d, ov, pv);
        res = func_020e7b98(d.x, d.z);
        pr = &res;
    }
    if (pr != 0) {
        h = ((nK::Unk_02006d14 *)this)->unk_8e;
        func_02010d98(&h, *pr);
        _ZN12Unk_020102ec13func_02010a58EPs(this, &h);
    }
}

void Unk_02006d14::func_0200bc08() {
    using namespace nK;
    Unk_0200bc08_Obj *p = 0;
    s16 tmp;
    void *o;
    if (((nK::Unk_02006d14 *)this)->unk_16c == 2) {
        p = *(Unk_0200bc08_Obj **)((u8 *)((nK::Unk_02006d14 *)this) + 0x138);
    } else if (((nK::Unk_02006d14 *)this)->unk_16c == 1) {
        if (data_021f47d8[1] & 0x400) {
            p = (Unk_0200bc08_Obj *)func_0203d608();
        }
    }
    if (p != 0) {
        tmp = p->unk_08;
        o = func_0208169c(&tmp);
        if (o != 0) {
            if ((*(s32 (**)(void *))(*(u32 *)o + 0xa0))(o) != -1) {
                func_0200b868(5, -1);
            }
        }
    }
}

void Unk_02006d14::func_0200bbb0() {
    using namespace nK;
    func_0200bcec();
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nK::Unk_02006d14 *)this)->unk_7fc)) {
        func_0200bc78();
        _ZN12Unk_020102ec13func_020109c4Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_0200bc08();
    } else {
        if (_ZN12Unk_02006d1413func_0200ef08Ev(this) != 0) {
            _ZN12Unk_020102ec13func_020109c4Ev(this);
        }
        _ZN12Unk_020102ec13func_0201071cEv(this);
    }
}

BOOL Unk_02006d14::func_0200bb68(u32 a, u32 b) {
    using namespace nK;
    Unk_0200b868_Msg m;
    BOOL r;
    if (((nK::Unk_02006d14 *)this)->unk_700 != 0x12) return TRUE;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x13, a, b);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02006d14::func_0200bb54(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x84, 3, 0);
}

s32 Unk_02006d14::func_0200bb48(u32 v) {
    using namespace nK;
    return func_0200bb68(5, v);
}

void Unk_02006d14::func_0200bb08() {
    using namespace nK;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        ((nK::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nK::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_0200769413func_0200c358Etjj(this, 7, 5, -1);
    }
}

void Unk_02006d14::func_0200bad0() {
    using namespace nK;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nK::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_02006d1413func_0200ef08Ev(this);
    }
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_0200bb08();
}

s32 Unk_02006d14::func_0200ba8c(u8 a, u8 b, u32 c, s16 d) {
    using namespace nK;
    Unk_0200ba8c_Msg m;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x14, c, d);
    Unk_0200b750 *pl = &m.unk_0c;
    pl->unk_01 = a;
    pl->unk_00 = b;
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_0200b750::func_0200ba84(u8 a, u8 b) {
    using namespace nK;
    unk_01 = a;
    unk_00 = b;
}

void Unk_0200b750::func_0200ba78(u8 *a, u8 *b) {
    using namespace nK;
    *a = unk_01;
    *b = unk_00;
}

void Unk_02006d14::func_0200ba00(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u8 *q = ((nK::Unk_02006d14_Item *)item)->unk_0c;
    u8 a = q[1];
    u8 b = q[0];
    Unk_0200b908_Obj *p;
    Unk_02006d14_7d0 *pp;
    ((nK::Unk_02006d14 *)this)->unk_8ec.func_0200ba84(a, b);
    pp = &((nK::Unk_02006d14 *)this)->unk_7d0;
    pp->c0 = a;
    pp->c1 = b;
    p = (Unk_0200b908_Obj *)func_02018984(a);
    ((nK::Unk_02006d14 *)this)->unk_904 = p;
    ((nK::Unk_02006d14 *)this)->unk_92d = a;
    _ZN12Unk_02019e2c13func_0201a040EP18Unk_02019e2c_Entryi(((nK::Unk_02006d14 *)this)->unk_908, p, 0);
    _ZN12Unk_020102ec13func_020103dcEijhijti(this, 0x12, 5, p->unk_18, 0x1000, 0, 5, p->unk_00);
}

s32 Unk_02006d14::func_0200b9cc(s16 v) {
    using namespace nK;
    u8 a, b;
    ((nK::Unk_02006d14 *)this)->unk_8ec.func_0200ba78(&a, &b);
    return func_0200ba8c(a, b, 5, v);
}

void Unk_02006d14::func_0200b9bc() {
    using namespace nK;
    _ZN12Unk_02019e2c13func_02019e2cEv(((nK::Unk_02006d14 *)this)->unk_908);
}

void Unk_02006d14::func_0200b908() {
    using namespace nK;
    Unk_0200b908_Obj *p;
    u32 t = func_0205c240(((nK::Unk_02006d14 *)this)->unk_6fc);
    _ZN12Unk_02019e2c13func_02019e34EPvsit(((nK::Unk_02006d14 *)this)->unk_908, ((nK::Unk_02006d14 *)this)->unk_6dc, ((nK::Unk_02006d14 *)this)->unk_8e, t, (u32)(((nK::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16);
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        p = ((nK::Unk_02006d14 *)this)->unk_904;
        if (p->unk_0c != 0x137) {
            _ZN12Unk_020102ec13func_020103dcEijhijti(this, 0x12, 0, 0, 0x1000, 0, 0, p->unk_0c);
            _ZN12Unk_02019e2c13func_0201a040EP18Unk_02019e2c_Entryi(((nK::Unk_02006d14 *)this)->unk_908, p, 1);
        } else {
            func_0200bd60(data_020c61d0[((nK::Unk_02006d14 *)this)->unk_7d0.c0 - 1], 5, -1);
        }
    }
}

void Unk_02006d14::func_0200b8c0() {
    using namespace nK;
    Unk_02006d14_7d0 *p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    u8 *q = &p->c1;
    if (*q != 0) {
        *q = *q - 1;
    }
    if (((nK::Unk_02006d14 *)this)->unk_2e0 == 0 && *q == 0) {
        _ZN12Unk_0200769413func_0200c358Etjj(this, data_020c61d0[p->c0 - 1], 5, -1);
    }
}

void Unk_02006d14::func_0200b8a0() {
    using namespace nK;
    func_0200b908();
    _ZN12Unk_02006d1413func_0200ef08Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_0200b8c0();
}

s32 Unk_02006d14::func_0200b868(u32 a, u32 b) {
    using namespace nK;
    Unk_0200b868_Msg m;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x15, a, b);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02006d14::func_0200b854(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x9d, 3, 0);
}

s32 Unk_02006d14::func_0200b848(u32 v) {
    using namespace nK;
    return func_0200b868(5, v);
}

void Unk_02006d14::func_0200b80c() {
    using namespace nK;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nK::Unk_02006d14 *)this)->unk_2cc, 6)) {
        func_02090330(0x50, ((nK::Unk_02006d14 *)this)->unk_6dc, 0, 0);
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x68);
    }
}

void Unk_02006d14::func_0200b7e4() {
    using namespace nK;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nK::Unk_02006d14 *)this)->unk_2cc)) {
        func_0200bd60(5, 5, -1);
    }
}

void Unk_02006d14::func_0200b7c8() {
    using namespace nK;
    func_0200b80c();
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_0200b7e4();
}

void Unk_0200b7bc::func_0200b7bc(Unk_0200b750_Pair pr, u32 v) {
    using namespace nK;
    unk_04 = pr.unk_00;
    unk_05 = pr.unk_04;
    unk_00 = v;
}

s32 Unk_02006d14::func_0200b76c(Unk_0200b750_Pair pr, s32 a, u32 b, s16 c) {
    using namespace nK;
    Unk_0200b76c_Msg m;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x18, b, c);
    m.unk_0c.func_0200b7bc(pr, a);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_0200b750::func_0200b760(Unk_0200b750_Pair pr, s32 v) {
    using namespace nK;
    unk_00 = pr.unk_00;
    unk_01 = pr.unk_04;
    unk_04 = v;
}

void Unk_0200b750::func_0200b750(Unk_0200b750_Pair *pr, s32 *out) {
    using namespace nK;
    pr->unk_00 = unk_00;
    pr->unk_04 = unk_01;
    *out = unk_04;
}

void Unk_02006d14::func_0200b5e8(Unk_02006d14_Item *item, u32 old) {
    using namespace nK;
    u8 *q = ((nK::Unk_02006d14_Item *)item)->unk_0c;
    u8 a = q[4];
    u8 b = q[5];
    s32 c = *(s32 *)((nK::Unk_02006d14_Item *)item)->unk_0c;
    Unk_02006d14_7d0 *p;
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
    p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    p->w0 = c;
    p->b5 = a;
    p->b6 = b;
    p->b4 = 0;
    ((nK::Unk_02006d14 *)this)->unk_8ec.func_0200b760(Unk_0200b750_Pair(a, b), c);
    if (c < 0) {
        func_0204ed8c(((nK::Unk_02006d14 *)this)->unk_820, a, b);
        ((nK::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_834 = 0x1000;
        ((nK::Unk_02006d14 *)this)->unk_81e = *func_0204eba0(data_021c47c4, ((nK::Unk_02006d14 *)this)->unk_820, 0);
        ((nK::Unk_02006d14 *)this)->unk_81c = ((nK::Unk_02006d14 *)this)->unk_81e;
    }
    if (func_02098ffc() == -1 && func_020b52f8()) {
        BOOL f = FALSE;
        if (((nK::Unk_02006d14 *)this)->unk_81c >= 0xa7 && ((nK::Unk_02006d14 *)this)->unk_81c <= 0xc6) f = TRUE;
        if (!f) {
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 0);
            p->b4 = 3;
            goto end;
        }
    }
    if (c >= 0) {
        if (func_020b0f54() <= 1) {
            func_ov004_022344e8(p->w0, &((nK::Unk_02006d14 *)this)->unk_81c, &((nK::Unk_02006d14 *)this)->unk_81e);
            _ZN12Unk_020102ec13func_02010358Eijt(this, 0x15, 3, 0);
        } else {
            p->b4 = 7;
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 0);
        }
    } else if (c == -3) {
        p->b4 = 7;
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 0);
    } else {
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x15, 3, 0);
    }
end:
    if (((nK::Unk_02006d14 *)this)->unk_700 == 0x15 && _ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
        func_0205e1a0(&((nK::Unk_02006d14 *)this)->pad_59c, 0xb, 3, 0);
    }
}

void Unk_02006d14::func_0200b578(s16 v) {
    using namespace nK;
    BOOL f;
    if (data_020e416c == 1) f = TRUE; else f = FALSE;
    if (!f) {
        if (((nK::Unk_02006d14 *)this)->unk_7ec == 0x18) {
            *(s16 *)((u8 *)((nK::Unk_02006d14 *)this) + 0xc80) = v;
        } else {
            Unk_0200b750_Pair pr(0, 0);
            s32 x;
            ((nK::Unk_02006d14 *)this)->unk_8ec.func_0200b750(&pr, &x);
            if (x < 0) {
                func_0200b76c(pr, -1, 6, v);
            }
        }
    }
}

void Unk_02006d14::func_0200b510() {
    using namespace nK;
    Unk_02006d14_7d0 *p = &((nK::Unk_02006d14 *)this)->unk_7d0;
    s32 a = p->w0;
    u32 b = p->b5;
    u32 c = p->b6;
    u32 d = p->b4;
    if (d >= 3) {
        _ZN12Unk_020102ec13func_02010914Ev(this);
    } else {
        if (a >= 0) {
            Unk_0200b750_Pair pr(b, c);
            _ZN12Unk_02006d1413func_0200b1ecEP16Unk_0200b144_Posihis(this, pr, a, 0, 6, -1);
        } else if (d == 0) {
            if (((nK::Unk_02006d14 *)this)->unk_814 == 2) {
                p->b4 = 2;
            } else if (((nK::Unk_02006d14 *)this)->unk_814 == 1) {
                p->b4 = 1;
            }
        }
        _ZN12Unk_020102ec13func_02010914Ev(this);
    }
}

void Unk_02006d14::func_0200b264(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    Unk_0200b144_Pos p;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nJ::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_02006d1413func_0200b510Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_0200b2e0();
    } else {
        _ZN12Unk_020102ec13func_02010914Ev(this);
        Unk_02006d14_Sub7d0* q = &((nJ::Unk_02006d14 *)this)->unk_7d0;
        Unk_0200b144_Pos t = { q->unk_04.b.unk_05, q->unk_04.b.unk_06 };
        p = t;
        _ZN12Unk_02006d1413func_0200eee4EPi(this, &p);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        ((nJ::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nJ::Unk_02006d14 *)this)->unk_7ec);
        func_0200b2e0();
    }
}

namespace nJ {
extern "C" void func_0200b244(Unk_0200b244_Out* out, Unk_0200b144_Pos* pos, s32 a, s32 b, u8 c) {
    out->unk_08 = pos->x;
    out->unk_09 = pos->y;
    out->unk_04 = a;
    out->unk_00 = b;
    out->unk_0a = c;
}
}

s32 Unk_02006d14::func_0200b1ec(Unk_0200b144_Pos* pos, s32 a, u8 b, s32 c, s16 d) {
    using namespace nJ;
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(obj);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    func_0200b244((Unk_0200b244_Out*)&obj[3], &p, a, 0xfff1, b);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(((nJ::Unk_02006d14 *)this), obj);
    _ZN12Unk_0200e2c0D1Ev(obj);
    return r;
}

s32 Unk_02006d14::func_0200b198(Unk_0200b144_Pos* pos, u16 a, u8 b, s32 c, s16 d) {
    using namespace nJ;
    u32 obj[7];
    Unk_0200b144_Pos p;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(obj);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(obj, 0x19, c, d);
    p.x = pos->x;
    p.y = pos->y;
    func_0200b244((Unk_0200b244_Out*)&obj[3], &p, -1, a, b);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(((nJ::Unk_02006d14 *)this), obj);
    _ZN12Unk_0200e2c0D1Ev(obj);
    return r;
}

namespace nJ {
extern "C" void func_0200b170(Unk_0200b144_Src* dst, Unk_0200b144_Pos* pos, s8 a, u16 b, u8 c) {
    dst->unk_04 = pos->x;
    dst->unk_05 = pos->y;
    dst->unk_03 = a;
    func_02076964(&dst->unk_01, b);
    dst->unk_00 = c;
}
}

namespace nJ {
extern "C" void func_0200b144(Unk_0200b144_Src* src, Unk_0200b144_Pos* pos, s8* a, u16* b, u8* c) {
    pos->x = src->unk_04;
    pos->y = src->unk_05;
    *a = src->unk_03;
    *b = func_0207694c(&src->unk_01);
    *c = src->unk_00;
}
}

void Unk_02006d14::func_0200add8(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    Unk_0200b244_Out* o = &((nJ::Unk_02006d14_Item *)item)->unk_0c;
    u8 x = o->unk_08;
    u8 y = o->unk_09;
    s32 z = o->unk_04;
    u16 t[4];
    t[0] = ((nJ::Unk_02006d14_Item *)item)->unk_0c.unk_00;
    u8 flag = o->unk_0a;
    if (z < 0) {
        BOOL r;
        func_0204ed8c((u8*)((nJ::Unk_02006d14 *)this) + 0x820, x, y);
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0x1000;
        r = Unk_0200add8_IsFFF1(&t[0], &t[2]);
        if (r) {
            ((nJ::Unk_02006d14 *)this)->unk_81e = *func_0204eba0(data_021c47c4, (u8*)((nJ::Unk_02006d14 *)this) + 0x820, 0);
            ((nJ::Unk_02006d14 *)this)->unk_81c = ((nJ::Unk_02006d14 *)this)->unk_81e;
        } else {
            ((nJ::Unk_02006d14 *)this)->unk_81e = t[0];
            ((nJ::Unk_02006d14 *)this)->unk_81c = ((nJ::Unk_02006d14 *)this)->unk_81e;
        }
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nJ::Unk_02006d14 *)this)->unk_7fc)) {
            void* q = func_0209750c();
            if (q != NULL) {
                if (Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0x137b, 0x137b)) {
                    if (_ZN12Unk_02097ff413func_02098044Ej(q, 0x28) == 0) {
                        Unk_0200b144_Pos p;
                        _ZN12Unk_02097ff413func_0209801cEj(q, 0x28);
                        p.x = x;
                        p.y = y;
                        _ZN12Unk_02006d1413func_0200a6d4EP17Unk_02006d14_Pairhjs(this, &p, flag, 6, -1);
                        return;
                    }
                } else if (((nJ::Unk_02006d14 *)this)->unk_81c >= 0x136a && ((nJ::Unk_02006d14 *)this)->unk_81c <= 0x136a) {
                    if (_ZN12Unk_02097ff413func_02098044Ej(q, 0x27) == 0) {
                        Unk_0200b144_Pos p;
                        _ZN12Unk_02097ff413func_0209801cEj(q, 0x27);
                        p.x = x;
                        p.y = y;
                        _ZN12Unk_02006d1413func_0200a6d4EP17Unk_02006d14_Pairhjs(this, &p, flag, 6, -1);
                        return;
                    }
                }
            }
        }
        {
            BOOL s8 = 1;
            BOOL s7 = 1;
            BOOL s6 = 1;
            BOOL s5 = 1;
            BOOL s4 = 1;
            BOOL s3 = 1;
            BOOL s2 = 1;
            BOOL s1 = 0;
            u32 v = ((nJ::Unk_02006d14 *)this)->unk_81c;
            if (v <= 5) {
                s1 = 1;
            }
            if (!s1) {
                if (!Unk_0200add8_InRange(v, 6, 0xb)) {
                    s2 = 0;
                }
            }
            if (!s2) {
                if (!Unk_0200add8_InRange(v, 0xc, 0x11)) {
                    s3 = 0;
                }
            }
            if (!s3) {
                if (!Unk_0200add8_InRange(v, 0x12, 0x19) && v != 0x1c) {
                    s4 = 0;
                }
            }
            if (!s4) {
                if (!Unk_0200add8_InRange(v, 0x8a, 0x8f) && !Unk_0200add8_InRange(v, 0x90, 0x95) &&
                    !Unk_0200add8_InRange(v, 0x96, 0x9b) && !Unk_0200add8_InRange(v, 0x9c, 0xa3) && v != 0xa5) {
                    s5 = 0;
                }
            }
            if (!s5) {
                if (v != 0x1a) {
                    s6 = 0;
                }
            }
            if (!s6) {
                if (v != 0xa4) {
                    s7 = 0;
                }
            }
            if (!s7 && v != 0x1d) {
                s8 = 0;
            }
            if (s8) {
                _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x7d7);
                _ZN12Unk_02006d1413func_0200ec30Ej(this, 9);
            } else {
                _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x5d);
                if (Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0x1554, 0x155c)) {
                    func_0207870c((u8*)((nJ::Unk_02006d14 *)this) + 0x5c);
                }
            }
            _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xd);
        }
    }
    u8 b20;
    if (flag != 0 && !Unk_0200add8_IsFFF1(&((nJ::Unk_02006d14 *)this)->unk_81c, &t[3]) && !Unk_0200add8_R1(&((nJ::Unk_02006d14 *)this)->unk_81c, 0xa7, 0xc6)) {
        b20 = 1;
    } else {
        b20 = 0;
    }
    if (b20) {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        func_02045460(&p, 0);
    } else {
        Unk_0200b144_Pos p;
        p.x = x;
        p.y = y;
        func_02045570(&p, 0);
    }
    {
        Unk_02006d14_Sub7d0* s = &((nJ::Unk_02006d14 *)this)->unk_7d0;
        Unk_0200b144_Pos p;
        s->unk_08 = 0;
        s->unk_04.s = z;
        s->unk_09 = x;
        s->unk_0a = y;
        s->unk_00 = b20;
        u16 w = ((nJ::Unk_02006d14 *)this)->unk_81c;
        p.x = x;
        p.y = y;
        func_0200b170((Unk_0200b144_Src*)((u8*)((nJ::Unk_02006d14 *)this) + 0x8ec), &p, (s8)z, w, b20);
    }
    if (z >= 0) {
        _ZN12Unk_020102ec13func_02010358Eijt(this, 0x16, 6, 0);
    } else {
        _ZN12Unk_020102ec13func_02010358Eijt(this, 0x16, 3, 0);
    }
    if (_ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
        func_0205e1a0((u8*)((nJ::Unk_02006d14 *)this) + 0x59c, 0xc, 3, 1);
    }
}

void Unk_02006d14::func_0200ad64(s16 old) {
    using namespace nJ;
    Unk_0200b144_Pos p;
    s8 a;
    u8 b;
    u16 c;
    Unk_0200b144_Pos q;
    if (((nJ::Unk_02006d14 *)this)->unk_8e8 != 0) {
        ((nJ::Unk_02006d14 *)this)->unk_8e8 = ((nJ::Unk_02006d14 *)this)->unk_8e8 + 1;
    } else if (((nJ::Unk_02006d14 *)this)->unk_7ec == 0) {
        p.x = 0;
        p.y = 0;
        func_0200b144((Unk_0200b144_Src*)((u8*)((nJ::Unk_02006d14 *)this) + 0x8ec), &p, &a, &c, &b);
        if (a < 0) {
            q.x = p.x;
            q.y = p.y;
            func_0200b198(&q, c, b, 6, old);
        }
    }
}

void Unk_02006d14::func_0200ad58(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
}

void Unk_02006d14::func_0200ad24(Unk_02006d14_Item* item, u32 old) {
    using namespace nJ;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (((nJ::Unk_02006d14 *)this)->unk_700 == 0x16) {
        if (_ZN12Unk_020dbe7c13func_020565e8Ei((u8*)((nJ::Unk_02006d14 *)this) + 0x2cc, 9)) {
            _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x4f);
        }
    }
}

void Unk_02006d14::func_0200abc8() {
    using namespace nJ;
    Unk_02006d14_Sub7d0* s;
    Unk_02006d14_V3* r;
    s32 t;
    u32 v;
    s16 sh;
    if (((nJ::Unk_02006d14 *)this)->unk_700 != 0x16) {
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0;
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
        return;
    }
    s = &((nJ::Unk_02006d14 *)this)->unk_7d0;
    if (s->unk_04.s >= 0) {
        r = func_ov004_022344a4();
        if (r == NULL) {
            return;
        }
        ((nJ::Unk_02006d14 *)this)->unk_820 = r->x;
        ((nJ::Unk_02006d14 *)this)->unk_824 = r->y;
        ((nJ::Unk_02006d14 *)this)->unk_828 = r->z;
        _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xd);
        ((nJ::Unk_02006d14 *)this)->unk_82c = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_830 = 0x1000;
        ((nJ::Unk_02006d14 *)this)->unk_834 = 0x1000;
        s->unk_04.s = -1;
    }
    v = (((nJ::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16;
    if (v >= 6) {
        volatile Unk_02006d14_V3 sv;
        Unk_02006d14_Blk b1, b2;
        t = 0x1000 - _s32_div_f((v - 6) << 12, 12);
        if (t < 0) {
            t = 0;
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
        }
        ((nJ::Unk_02006d14 *)this)->unk_82c = t;
        ((nJ::Unk_02006d14 *)this)->unk_830 = t;
        ((nJ::Unk_02006d14 *)this)->unk_834 = t;
        Unk_02006d14_V3 *pv = &((nJ::Unk_02006d14 *)this)->unk_c4;
        sv.x = pv->x;
        sv.y = pv->y;
        sv.z = pv->z;
        sh = ((nJ::Unk_02006d14 *)this)->unk_d0;
        b1 = ((nJ::Unk_02006d14 *)this)->unk_294;
        b2 = ((nJ::Unk_02006d14 *)this)->unk_694;
        _ZN12Unk_02006d1413func_0200e7f4Ev(this);
        _ZN12Unk_02006d1413func_0200f004Ejz(this, t);
        ((nJ::Unk_02006d14 *)this)->unk_c4.x = sv.x;
        ((nJ::Unk_02006d14 *)this)->unk_c4.y = sv.y;
        ((nJ::Unk_02006d14 *)this)->unk_c4.z = sv.z;
        ((nJ::Unk_02006d14 *)this)->unk_d0 = sh;
        ((nJ::Unk_02006d14 *)this)->unk_294 = b1;
        ((nJ::Unk_02006d14 *)this)->unk_694 = b2;
    }
}

void Unk_02006d14::func_0200a7b4() {
    using namespace nI;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nI::Unk_02006d14 *)this)->unk_2cc)) {
        if (((nI::Unk_02006d14 *)this)->unk_700 == 0x16 || ((nI::Unk_02006d14 *)this)->unk_700 == 0x18) {
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x6c, 3, 0);
        }
        ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x12);
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
        if (_ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
            func_0205e1a0(((nI::Unk_02006d14 *)this)->unk_59c, 0, 9, 0);
        }
    }
}

void Unk_02006d14::func_0200a73c() {
    using namespace nI;
    _ZN12Unk_02006d1413func_0200ad24EP17Unk_02006d14_Itemj(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(this);
        _ZN12Unk_020102ec13func_0201065cEv(this);
        _ZN12Unk_02006d1413func_0200abc8Ev(this);
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        func_0200a82c(&s->unk_8, s->unk_0);
    } else {
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        u32 c = s->unk_a;
        u32 a = s->unk_9;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        _ZN12Unk_02006d1413func_0200eee4EPi(this, &p);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        _ZN12Unk_02006d1413func_0200abc8Ev(this);
        func_0200a7b4();
    }
}

namespace nI {
extern "C" void func_0200a728(Unk_0200a728_St* s, Unk_02006d14_Pair* p, u16 h, u8 b) {
    s->unk_2 = p->unk_00;
    s->unk_3 = p->unk_04;
    s->unk_0 = h;
    s->unk_4 = b;
}
}

s32 Unk_02006d14::func_0200a6d4(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN12Unk_0200e2c0C1Ev(&o);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a6d4_St s;
    func_0200a728((Unk_0200a728_St*)&s, &q, 0xfff1, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &o);
    _ZN12Unk_0200e2c0D1Ev(&o);
    return r;
}

s32 Unk_02006d14::func_0200a684(Unk_02006d14_Pair* p, u16 h, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN12Unk_0200e2c0C1Ev(&o);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&o, 0x1a, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a728_St s;
    func_0200a728(&s, &q, h, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &o);
    _ZN12Unk_0200e2c0D1Ev(&o);
    return r;
}

namespace nI {
extern "C" void func_0200a660(Unk_0200a63c_St* s, Unk_02006d14_Pair* p, u16 h, u8 b) {
    s->unk_3 = p->unk_00;
    s->unk_4 = p->unk_04;
    func_02076964(s->unk_1, h);
    s->unk_0 = b;
}
}

namespace nI {
extern "C" void func_0200a63c(Unk_0200a63c_St* s, Unk_02006d14_Pair* out, u16* h, u8* b) {
    out->unk_00 = s->unk_3;
    out->unk_04 = s->unk_4;
    *h = func_0207694c(s->unk_1);
    *b = s->unk_0;
}
}

void Unk_02006d14::func_0200a4f4(Unk_02006d14_Item* item, u32 v) {
    using namespace nI;
    u8* it = ((nI::Unk_02006d14_Item *)item)->unk_0c_raw;
    u32 a = it[2];
    u32 c = it[3];
    u16 g[2];
    g[0] = *(u16*)it;
    u8 d = it[4];
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = d;
    func_0204ed8c(((nI::Unk_02006d14 *)this)->unk_820, a, c);
    ((nI::Unk_02006d14 *)this)->unk_82c = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_830 = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_834 = 0x1000;
    BOOL r;
    if (func_0204b2d4(&g[0])) {
        g[1] = 0xfff1;
        s32 x = func_0204b25c(&g[0]);
        r = x == func_0204b25c(&g[1]);
    } else {
        r = g[0] == 0xfff1;
    }
    if (r) {
        u16* pp = (u16*)func_0204eba0(data_021c47c4, ((nI::Unk_02006d14 *)this)->unk_820, 0);
        ((nI::Unk_02006d14 *)this)->unk_81e = *pp;
        ((nI::Unk_02006d14 *)this)->unk_81c = ((nI::Unk_02006d14 *)this)->unk_81e;
    } else {
        ((nI::Unk_02006d14 *)this)->unk_81e = g[0];
        ((nI::Unk_02006d14 *)this)->unk_81c = ((nI::Unk_02006d14 *)this)->unk_81e;
    }
    u16 hv = ((nI::Unk_02006d14 *)this)->unk_81c;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    func_0200a660(&((nI::Unk_02006d14 *)this)->unk_8ec, &p, hv, d);
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x17, 3, 0);
    if (_ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
        func_0205e1a0(((nI::Unk_02006d14 *)this)->unk_59c, 0xd, 3, 1);
    }
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        func_02034dd0(0x12, 0xf, 0);
    }
    _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x1c);
}

void Unk_02006d14::func_0200a484(s16 v) {
    using namespace nI;
    if (((nI::Unk_02006d14 *)this)->unk_8e8 != 0) {
        ((nI::Unk_02006d14 *)this)->unk_8e8++;
    } else if (((nI::Unk_02006d14 *)this)->unk_7ec == 0x1a) {
        ((nI::Unk_02006d14 *)this)->unk_c80 = v;
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = 0;
        p.unk_04 = 0;
        u16 hh;
        u8 bb;
        func_0200a63c(&((nI::Unk_02006d14 *)this)->unk_8ec, &p, &hh, &bb);
        Unk_02006d14_Pair q;
        q = p;
        func_0200a684(&q, hh, bb, 6, v);
    }
}

void Unk_02006d14::func_0200a450() {
    using namespace nI;
    if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1c)) {
            func_0200a114();
        }
    }
}

void Unk_02006d14::func_0200a390() {
    using namespace nI;
    volatile u32 t[3];
    Unk_02006d14_Trip* pt = &((nI::Unk_02006d14 *)this)->unk_c4;
    t[0] = pt->unk_0;
    t[1] = pt->unk_4;
    t[2] = pt->unk_8;
    s16 h = ((nI::Unk_02006d14 *)this)->unk_d0;
    Unk_02006d14_Blk a = *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x294);
    Unk_02006d14_Blk b = *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x694);
    _ZN12Unk_02006d1413func_0200e7f4Ev(this);
    _ZN12Unk_02006d1413func_0200f004Ejz(this, 0x1000);
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_0 = t[0];
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_4 = t[1];
    ((nI::Unk_02006d14 *)this)->unk_c4.unk_8 = t[2];
    ((nI::Unk_02006d14 *)this)->unk_d0 = h;
    *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x294) = a;
    *(Unk_02006d14_Blk*)((u8*)((nI::Unk_02006d14 *)this) + 0x694) = b;
    if (((nI::Unk_02006d14 *)this)->unk_2d4.mid >= 6) {
        _ZN12Unk_02006d1413func_0200f4c0Ei(this, 0x400);
    }
}

void Unk_02006d14::func_0200a1bc() {
    using namespace nI;
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    u8* state = &s->unk_1;
    struct { u32 pad; Unk_02006d14_Pair p[3]; u32 pad2; } l;
    switch (*state) {
    case 0:
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nI::Unk_02006d14 *)this)->unk_2cc, 1)) {
            func_0203a598();
        }
        if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nI::Unk_02006d14 *)this)->unk_2cc, 6)) {
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            u8 flag = s->unk_0;
            if (flag) {
                l.p[0].unk_00 = b;
                l.p[0].unk_04 = c;
                func_02045460(&l.p[0], 0);
            } else {
                l.p[1].unk_00 = b;
                l.p[1].unk_04 = c;
                func_02045570(&l.p[1], 0);
            }
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1c);
            if (Unk_0200a114_IsZero(data_020e416c)) {
                _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x5d);
            }
            _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xd);
        }
        if (((nI::Unk_02006d14 *)this)->unk_2d4.mid >= 6 && func_0203d820()) {
            *state = 1;
            _ZN12Unk_020d967013func_0203e488Ei(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x11);
            _ZN12Unk_020e2a3013func_020a710cEPKc((u8*)((nI::Unk_02006d14 *)this) + 0xec, data_020d6ef4);
            BOOL r = FALSE;
            u16 h = ((nI::Unk_02006d14 *)this)->unk_81c;
            if (h >= 0x137b && h <= 0x137b) r = TRUE;
            if (r) {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x23;
            } else if (h >= 0x136a && h <= 0x136a) {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x21;
            } else {
                ((nI::Unk_02006d14 *)this)->unk_10a = 0x25;
            }
            ((nI::Unk_02006d14 *)this)->unk_128->unk_8 = 1;
            func_02034d70(0x12);
            func_02034dd0(0xc, 0, 0x10);
            func_02034e10(0xd, 0x39, 0x7f, 1);
            ((nI::Unk_02006d14 *)this)->unk_818 = 10;
        }
        break;
    case 1:
        if (((nI::Unk_02006d14 *)this)->unk_128 && ((nI::Unk_02006d14 *)this)->unk_128->unk_4) {
            *state = 2;
        }
        break;
    case 2:
        if (((nI::Unk_02006d14 *)this)->unk_128 && !((nI::Unk_02006d14 *)this)->unk_128->unk_4) {
            _ZN12Unk_020d967013func_0203e47cEi(this, ((nI::Unk_02006d14 *)this));
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x11);
            u8 flag = s->unk_0;
            if (flag == 0) {
                func_0203d7f8();
            }
            func_0203a844();
            u32 b = s->unk_2;
            u32 c = s->unk_3;
            ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
            l.p[2].unk_00 = b;
            l.p[2].unk_04 = c;
            func_0200a050(&l.p[2], flag, 6, -1);
        }
        break;
    }
}

void Unk_02006d14::func_0200a198() {
    using namespace nI;
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nI::Unk_02006d14 *)this)->unk_2cc, 6)) {
        func_0200a114();
    }
}

void Unk_02006d14::func_0200a114() {
    using namespace nI;
    _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xd);
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    u32 b = s->unk_2;
    u32 c = s->unk_3;
    u8 flag = s->unk_0;
    if (flag) {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        func_02045460(&p, 0);
    } else {
        Unk_02006d14_Pair p;
        p.unk_00 = b;
        p.unk_04 = c;
        func_02045570(&p, 0);
    }
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1c);
    if (Unk_0200a114_IsZero(data_020e416c)) {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x5d);
    }
    ((nI::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nI::Unk_02006d14 *)this)->unk_7ec);
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x12);
}

void Unk_02006d14::func_0200a0ac() {
    using namespace nI;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nI::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_0200a390();
        func_0200a1bc();
    } else {
        Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
        u32 c = s->unk_3;
        u32 a = s->unk_2;
        Unk_02006d14_Pair p;
        p.unk_00 = a;
        p.unk_04 = c;
        _ZN12Unk_02006d1413func_0200eee4EPi(this, &p);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_0200a390();
        func_0200a198();
    }
}

namespace nI {
extern "C" void func_0200a0a0(Unk_0200a0a0_Bytes* dst, Unk_02006d14_Pair* p, u8 b) {
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}
}

s32 Unk_02006d14::func_0200a050(Unk_02006d14_Pair* p, u8 b, u32 x, s16 y) {
    using namespace nI;
    Unk_0200a050_Obj o;
    _ZN12Unk_0200e2c0C1Ev(&o);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&o, 0x1b, x, y);
    Unk_02006d14_Pair q;
    q = *p;
    Unk_0200a0a0_Bytes s;
    func_0200a0a0(&s, &q, b);
    s32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &o);
    _ZN12Unk_0200e2c0D1Ev(&o);
    return r;
}

namespace nI {
extern "C" void func_0200a044(Unk_02009f68_Bytes* dst, Unk_02006d14_Pair* p, u8 b) {
    dst->unk_1 = p->unk_00;
    dst->unk_2 = p->unk_04;
    dst->unk_0 = b;
}
}

namespace nI {
extern "C" void func_0200a034(Unk_02009f68_Bytes* src, Unk_02006d14_Pair* out, u8* b) {
    out->unk_00 = src->unk_1;
    out->unk_04 = src->unk_2;
    *b = src->unk_0;
}
}

void Unk_02006d14::func_02009fa8(Unk_02006d14_Item* item, u32 v) {
    using namespace nI;
    Unk_02009f68_Bytes* it = &((nI::Unk_02006d14_Item *)item)->unk_0c;
    u32 a = it->unk_1;
    u32 c = it->unk_2;
    u8 b = it->unk_0;
    Unk_02006d14_St7d0* s = &((nI::Unk_02006d14 *)this)->unk_7d0;
    s->unk_1 = 0;
    s->unk_2 = a;
    s->unk_3 = c;
    s->unk_0 = b;
    Unk_02006d14_Pair p;
    p.unk_00 = a;
    p.unk_04 = c;
    func_0200a044((Unk_02009f68_Bytes*)&((nI::Unk_02006d14 *)this)->unk_8ec, &p, b);
    ((nI::Unk_02006d14 *)this)->unk_82c = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_830 = 0x1000;
    ((nI::Unk_02006d14 *)this)->unk_834 = 0x1000;
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x4f);
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x18, 3, 0);
    if (_ZN12Unk_02006d1413func_0200f5b0Ev(this) == 4) {
        func_0205e1a0(((nI::Unk_02006d14 *)this)->unk_59c, 6, 3, 1);
    }
}

void Unk_02006d14::func_02009f68(s16 v) {
    using namespace nI;
    Unk_02006d14_Pair p;
    u8 b;
    p.unk_00 = 0;
    p.unk_04 = 0;
    func_0200a034((Unk_02009f68_Bytes*)&((nI::Unk_02006d14 *)this)->unk_8ec, &p, &b);
    Unk_02006d14_Pair q;
    q = p;
    func_0200a050(&q, b, 6, v);
}

void Unk_02006d14::func_02009ed8() {
    using namespace nH;
    u32 x;
    s32 t;
    if (((nH::Unk_02006d14 *)this)->unk_700 != 0x18) {
        ((nH::Unk_02006d14 *)this)->unk_82c = 0;
        ((nH::Unk_02006d14 *)this)->unk_830 = 0;
        ((nH::Unk_02006d14 *)this)->unk_834 = 0;
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
    } else {
        x = (((nH::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16;
        if (x < 6) {
            t = 0x1000 - _s32_div_f(x << 12, 6);
            if (t < 0) {
                t = 0;
                _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
            }
            ((nH::Unk_02006d14 *)this)->unk_82c = t;
            ((nH::Unk_02006d14 *)this)->unk_830 = t;
            ((nH::Unk_02006d14 *)this)->unk_834 = t;
            _ZN12Unk_02006d1413func_0200f004Ejz(this, t);
        } else {
            ((nH::Unk_02006d14 *)this)->unk_82c = 0;
            ((nH::Unk_02006d14 *)this)->unk_830 = 0;
            ((nH::Unk_02006d14 *)this)->unk_834 = 0;
        }
    }
}

void Unk_02006d14::func_02009e68() {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_02009ed8();
        u8* p = (u8*)&((nH::Unk_02006d14 *)this)->unk_7d0;
        _ZN12Unk_02006d1413func_0200a82cEPhh(this, p + 1, p[0]);
    } else {
        u8* p = (u8*)&((nH::Unk_02006d14 *)this)->unk_7d0;
        u32 v[2];
        u32 hi = p[3];
        u32 lo = p[2];
        v[0] = lo;
        v[1] = hi;
        _ZN12Unk_02006d1413func_0200eee4EPi(this, v);
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_02009ed8();
        _ZN12Unk_02006d1413func_0200a7b4Ev(this);
    }
}

namespace nH {
extern "C" void func_02009e5c(Unk_02009d5c_Sub* p, u32 a, u32 b, u32 c, u32 d) {
    p->unk_00 = a;
    p->unk_04 = b;
    p->unk_08 = c;
    p->unk_0c = d;
}
}

s32 Unk_02006d14::func_02009df8(u16* p, u32 b, u32 c, u32 d, u32 e, u32 f, s16 g) {
    using namespace nH;
    Unk_0200e2e0 obj;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&obj);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x30, f, g);
    ((nH::Unk_02006d14 *)this)->unk_81e = *p;
    ((nH::Unk_02006d14 *)this)->unk_81c = ((nH::Unk_02006d14 *)this)->unk_81e;
    func_02009e5c(&obj.unk_0c, b, c, d, e);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);
    _ZN12Unk_0200e2c0D1Ev(&obj);
    return r;
}

void Unk_02006d14::func_02009d5c(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    Unk_02009d5c_Sub* s = &((nH::Unk_02006d14_Item *)item)->unk_0c;
    func_02057418(&((nH::Unk_02006d14 *)this)->unk_81c, ((nH::Unk_02006d14_Item *)item)->unk_0c.unk_00, s->unk_04, s->unk_08, ((nH::Unk_02006d14 *)this), s->unk_0c);
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x28, 3, 0);
    func_020573cc(1, ((nH::Unk_02006d14 *)this));
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x4f);
    if (((nH::Unk_02006d14 *)this)->unk_81c == 0x1373 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1375 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1377 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x1379 || ((nH::Unk_02006d14 *)this)->unk_81c == 0x136a || ((nH::Unk_02006d14 *)this)->unk_81c == 0x137b) {
        ((nH::Unk_02006d14 *)this)->unk_8e7 = -1;
    } else {
        ((nH::Unk_02006d14 *)this)->unk_8e7 = 0;
    }
}

void Unk_02006d14::func_02009d58() {
    using namespace nH;
}

void Unk_02006d14::func_02009d2c() {
    using namespace nH;
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(((nH::Unk_02006d14 *)this)->unk_2cc, 8)) {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x63);
    }
    _ZN12Unk_020102ec13func_02010914Ev(this);
}

void Unk_02006d14::func_02009d04() {
    using namespace nH;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        func_02009cb0(6, -1);
    }
}

void Unk_02006d14::func_02009ce8() {
    using namespace nH;
    func_02009d2c();
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02009d04();
}

s32 Unk_02006d14::func_02009cb0(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN12Unk_0200e2c0C1Ev(&obj);      _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x31, a, b);      r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);      _ZN12Unk_0200e2c0D1Ev(&obj);      return r;  }

void Unk_02006d14::func_02009c94(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x29, 3, 0);
    func_020573cc(2, ((nH::Unk_02006d14 *)this));
}

void Unk_02006d14::func_02009c90() {
    using namespace nH;
}

void Unk_02006d14::func_02009c58() {
    using namespace nH;
    if (func_020573f4(((nH::Unk_02006d14 *)this)) == 0) {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nH::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1413func_0200bd60Esji(this, 7, 5, -1);
    }
}

void Unk_02006d14::func_02009c3c() {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02009c58();
}

s32 Unk_02006d14::func_02009c04(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN12Unk_0200e2c0C1Ev(&obj);      _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x32, a, b);      r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);      _ZN12Unk_0200e2c0D1Ev(&obj);      return r;  }

namespace nH {
extern "C" void func_02009bfc(u32* p) {
    *p = 0;
}
}

void Unk_02006d14::func_02009bdc(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 1, 3, 0);
    func_02009bfc((u32*)&((nH::Unk_02006d14 *)this)->unk_7d0);
}

s32 Unk_02006d14::func_02009bd0(u32 a) {
    using namespace nH;
    return func_02009c04(6, a);
}

void Unk_02006d14::func_02009a78() {
    using namespace nH;
    u32* r4 = (u32*)((u8*)((nH::Unk_02006d14 *)this) + 0x7d0);
    s16 ang[3];
    s32 dist;
    Unk_02009a78_Locals L;
    Unk_02009a78_Vec* pv = &((nH::Unk_02006d14 *)this)->unk_5c;
    L.cur = *pv;
    ang[2] = ((nH::Unk_02006d14 *)this)->unk_8e;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        if (!func_02057304(&L.pos)) {
            return;
        }
        L.diff.x = L.pos.x - ((nH::Unk_02006d14 *)this)->unk_5c.x;
        L.diff.z = L.pos.z - ((nH::Unk_02006d14 *)this)->unk_5c.z;
        if (func_02057328(((nH::Unk_02006d14 *)this))) {
            *r4 = 0;
        } else {
            *r4 = func_02010d68(*r4, 0x333);
        }
        ang[1] = func_020e7b98(L.diff.x, L.diff.z);
    } else {
        if (!_ZN12Unk_020d6df413func_0200e35cEPhPiS1_Pt(this, ang, &L.pos, &L.pos.z, &ang[1])) {
            _ZN12Unk_020102ec13func_02010a34EPj(((nH::Unk_02006d14 *)this), data_020d5e4c);
            return;
        }
        if (L.pos.x != ((nH::Unk_02006d14 *)this)->unk_5c.x || L.pos.z != ((nH::Unk_02006d14 *)this)->unk_5c.z) {
            s32 t;
            L.diff.x = L.pos.x - ((nH::Unk_02006d14 *)this)->unk_5c.x;
            L.diff.z = L.pos.z - ((nH::Unk_02006d14 *)this)->unk_5c.z;
            *r4 = func_02010d68(*r4, 0x333);
            t = func_020e7b98(L.diff.x, L.diff.z);
            if (func_020e780c(t, ang[2]) >= 0x4000) {
                *r4 = 0;
            } else {
                ang[1] = t;
            }
        } else {
            *r4 = 0;
        }
    }
    if (*r4 != 0) {
        func_02010d98((void*)&ang[2], ang[1]);
        _ZN12Unk_020102ec13func_02010a58EPs(((nH::Unk_02006d14 *)this), (void*)&ang[2]);
    }
    s32 t2 = func_01ffcb0c(*r4, data_02135f44[(((u16)(s16)(ang[2] - ang[1])) >> 4) * 2 + 1]);
    if (t2 < 0) {
        t2 = -t2;
    }
    dist = t2;
    _ZN12Unk_020102ec13func_02010a34EPj(((nH::Unk_02006d14 *)this), &dist);
}

void Unk_02006d14::func_02009a38() {
    using namespace nH;
    s32 r = func_01ffcb0c(((nH::Unk_02006d14 *)this)->unk_98, 0x3ae1);
    if (r <= (s32)((nH::Unk_02006d14 *)this)->unk_2d0) {
        ((nH::Unk_02006d14 *)this)->unk_2dc = r;
    }
    _ZN12Unk_020dbda413func_02053f20Ev(((nH::Unk_02006d14 *)this)->unk_230);
    _ZN12Unk_02006d1413func_0200f32cEv(this);
}

void Unk_02006d14::func_020099dc() {
    using namespace nH;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        if (((nH::Unk_02006d14 *)this)->unk_98 == 0) {
            func_0200995c(6, -1);
        }
    } else {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = 0;
        if (((nH::Unk_02006d14 *)this)->unk_98 == 0) {
            _ZN12Unk_02006d1413func_0200bd60Esji(this, 3, 5, -1);
        }
    }
}

void Unk_02006d14::func_02009994() {
    using namespace nH;
    func_02009a78();
    func_02009a38();
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nH::Unk_02006d14 *)this)->unk_7fc)) {
        _ZN12Unk_020102ec13func_020109c4Ev(this);
    } else {
        _ZN12Unk_020102ec13func_020109acEv(this);
    }
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_020099dc();
}

s32 Unk_02006d14::func_0200995c(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN12Unk_0200e2c0C1Ev(&obj);      _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x33, a, b);      r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);      _ZN12Unk_0200e2c0D1Ev(&obj);      return r;  }

void Unk_02006d14::func_02009948(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x2a, 3, 0);
}

void Unk_02006d14::func_02009944() {
    using namespace nH;
}

void Unk_02006d14::func_020098f8() {
    using namespace nH;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        if (func_020573f4(((nH::Unk_02006d14 *)this)) == 0) {
            if (func_020572e0(((nH::Unk_02006d14 *)this)) != 1) {
                return;
            }
            func_020573cc(3, ((nH::Unk_02006d14 *)this));
        }
        if (func_020572b0(3) == 0) {
            func_020098a4(6, -1);
        }
    }
}

void Unk_02006d14::func_020098dc() {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_020098f8();
}

s32 Unk_02006d14::func_020098a4(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN12Unk_0200e2c0C1Ev(&obj);      _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x34, a, b);      r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);      _ZN12Unk_0200e2c0D1Ev(&obj);      return r;  }

void Unk_02006d14::func_02009888(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x2b, 3, 0);
    func_020573cc(4, ((nH::Unk_02006d14 *)this));
}

void Unk_02006d14::func_02009884() {
    using namespace nH;
}

void Unk_02006d14::func_02009854() {
    using namespace nH;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        if (func_020573b4() == 5) {
            func_02009800(6, -1);
        }
    }
}

void Unk_02006d14::func_02009838() {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02009854();
}

s32 Unk_02006d14::func_02009800(u32 a, u32 b) {
    using namespace nH;      Unk_0200e2e0 obj;      s32 r;      _ZN12Unk_0200e2c0C1Ev(&obj);      _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x35, a, b);      r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);      _ZN12Unk_0200e2c0D1Ev(&obj);      return r;  }

void Unk_02006d14::func_020097d8(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x2c, 3, 0);
    func_020573cc(func_020573b4(), ((nH::Unk_02006d14 *)this));
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x4f);
}

void Unk_02006d14::func_020097d4() {
    using namespace nH;
}

void Unk_02006d14::func_02009740() {
    using namespace nH;
    u16 v[2];
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nH::Unk_02006d14 *)this)->unk_2cc)) {
        ((nH::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nH::Unk_02006d14 *)this)->unk_7ec);
        _ZN12Unk_02006d1413func_0200bd60Esji(this, 3, 5, -1);
        if (((nH::Unk_02006d14 *)this)->unk_8e7 >= 0) {
            func_02057278(v);
            switch (v[0]) {
            case 0x1373:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 3;
                break;
            case 0x1375:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 2;
                break;
            case 0x1377:
                ((nH::Unk_02006d14 *)this)->unk_8e7 = 1;
                break;
            }
        }
        func_02057378(((nH::Unk_02006d14 *)this));
    }
}

void Unk_02006d14::func_02009724() {
    using namespace nH;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02009740();
}

s32 Unk_02006d14::func_020096e8(u16 a, u32 b, u32 c) {
    using namespace nH;
    Unk_0200e2e0 obj;
    s32 r;
    _ZN12Unk_0200e2c0C1Ev(&obj);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&obj, 0x3f, b, c);
    *(u16*)&obj.unk_0c = a;
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &obj);
    _ZN12Unk_0200e2c0D1Ev(&obj);
    return r;
}

namespace nH {
extern "C" void func_020096e0(void* p, u32 v) {
    func_02076964(p, v);
}
}

namespace nH {
extern "C" void func_020096d0(void* p, u16* out) {
    *out = func_0207694c(p);
}
}

void Unk_02006d14::func_02009624(Unk_02006d14_Item* item, u32 old) {
    using namespace nH;
    u16* q = (u16*)&((nH::Unk_02006d14_Item *)item)->unk_0c;
    if (Unk_02009624_Check()) {
        u16 buf[2];
        func_02010a7c(buf, ((nH::Unk_02006d14 *)this));
        void* r = func_02010d20(this);
        buf[1] = 0xfff1;
        _ZN12Unk_0209865c13func_02098738EPt(r, &buf[1]);
        _ZN12Unk_020102ec13func_02010358Eijt(this, 0x13, 5, 5);
        _ZN12Unk_0209865c13func_02098738EPt(r, buf);
    }
    Unk_02009624_Pair* d = &((nH::Unk_02006d14 *)this)->unk_7d0;
    d->unk_00 = 0x1000;
    d->unk_04 = *q;
    if (old == 0x10) {
        d->unk_06 = 1;
    } else {
        d->unk_06 = 0;
    }
    if (d->unk_04 != 0xfff1) {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x31);
    } else {
        _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x78);
    }
    func_020096e0(((nH::Unk_02006d14 *)this)->unk_8ec, *q);
}

s32 Unk_02006d14::func_020095f8(u32 a) {
    using namespace nH;
    u16 v;
    func_020096d0(((nH::Unk_02006d14 *)this)->unk_8ec, &v);
    return func_020096e8(v, 6, a);
}

void Unk_02006d14::func_020095b8() {
    using namespace nG;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nG::Unk_02006d14 *)this)->unk_7fc)) {
        func_02097520(((nG::Unk_02006d14 *)this)->unk_7fc);
        u16 *p = _ZN12Unk_0209865c13func_02098744Ev();
        if (p) _ZN12Unk_02006d1413func_0200eb58Ejj(((nG::Unk_02006d14 *)this), 3, *p);
    }
}

void Unk_02006d14::func_02009484() {
    using namespace nG;
    Unk_02006d14_7d0 *r6 = &((nG::Unk_02006d14 *)this)->unk_7d0;
    u16 r4 = r6->h4;
    BOOL b = (data_020e416c == 1);
    if (b) {
        if (r4 >= 0x1369 && r4 <= 0x13a7) {
            func_020946f0(r4 - 0x1368, ((nG::Unk_02006d14 *)this)->unk_7fc);
        } else {
            func_020946f0(0, ((nG::Unk_02006d14 *)this)->unk_7fc);
        }
        ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
        if (r6->b6) _ZN12Unk_02006d1413func_0200bd60Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
        else _ZN12Unk_0200769413func_0200c358Etjj(((nG::Unk_02006d14 *)this), 3, 5, -1);
    } else {
        _ZN12Unk_02006d1413func_0200f4c0Ei(((nG::Unk_02006d14 *)this), 0x400);
        switch ((((nG::Unk_02006d14 *)this)->unk_2d4 << 4) >> 16) {
        case 8:
            func_020946f0(0, ((nG::Unk_02006d14 *)this)->unk_7fc);
            break;
        case 0xb:
            if (r4 >= 0x1369 && r4 <= 0x13a7) func_020946f0(r4 - 0x1368, ((nG::Unk_02006d14 *)this)->unk_7fc);
            break;
        case 0xe:
            _ZN12Unk_02006d1413func_02010284EiPv(((nG::Unk_02006d14 *)this), 0, 6);
            break;
        }
        if (_ZN12Unk_020dbe7c13func_02056654Ev(((nG::Unk_02006d14 *)this)->unk_2cc)) {
            ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
            if (r6->b6) _ZN12Unk_02006d1413func_0200bd60Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
            else _ZN12Unk_0200769413func_0200c358Etjj(((nG::Unk_02006d14 *)this), 3, 5, -1);
        }
    }
}

void Unk_02006d14::func_02009464() {
    using namespace nG;
    _ZN12Unk_020102ec13func_02010914Ev(((nG::Unk_02006d14 *)this));
    _ZN12Unk_02006d1413func_0200ef08Ev(((nG::Unk_02006d14 *)this));
    _ZN12Unk_020102ec13func_0201071cEv(((nG::Unk_02006d14 *)this));
    func_02009484();
}

void Unk_0200944c::func_0200944c(Unk_02006d14_Vec v, s32 a) {
    using namespace nG;
    unk_00 = v;
    unk_0c = a;
}

BOOL Unk_02006d14::func_020093f4(Unk_02006d14_Vec *v, u32 a, u32 b, s16 c) {
    using namespace nG;
    Unk_020093f4_Msg m;
    BOOL r;
    if (((nG::Unk_02006d14 *)this)->unk_7ec == 0x6f) return 0;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x6f, b, c);
    m.unk_0c.func_0200944c(*v, a);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_020093d4::func_020093d4(Unk_02006d14_Vec v, s32 a, s32 b) {
    using namespace nG;
    unk_00 = v;
    unk_0c = 0;
    unk_10 = a;
    unk_14 = b;
}

void Unk_02006d14::func_020092c8(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    Unk_02006d14_Vec *p = (Unk_02006d14_Vec *)&((nG::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_020092c8_Loc loc;
    s32 r6;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 1, 3, 0);
    r6 = ((s32 *)p)[3];
    ((Unk_020093d4 *)&((nG::Unk_02006d14 *)this)->unk_7d0)->func_020093d4(*p, r6, old);
    _ZN12Unk_02006d1413func_0200ec30Ej(this, 5);
    ((nG::Unk_02006d14 *)this)->unk_804 = 0;
    if (_ZN12Unk_02006d1413func_0200e7c0Ev(((nG::Unk_02006d14 *)this))) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, ((nG::Unk_02006d14 *)this)->unk_7fc)) {
            if (func_020b50e8() == 0xc) {
                if (r6 == 0x666) {
                    loc.date.w0 = 0;
                    loc.date.w1 = 0;
                    func_0209d498(&loc.date);
                    { u8 *q0 = func_020952c8(); *q0 = *q0 & 0xf9; }
                    { u8 *q1 = func_020952c8(); if ((*q1 & 1) == 0) func_0209d164(&loc.date, 1); }
                    loc.bits.y = loc.date.b[5];
                    loc.bits.m = loc.date.b[4];
                    loc.bits.d = loc.date.b[3];
                    _ZN12Unk_0209865c13func_020987b0E17Unk_0209865c_Bits(func_02010d20(((nG::Unk_02006d14 *)this)), loc.bits);
                }
            }
        }
    }
}

void Unk_02006d14::func_020092c4() {
    using namespace nG;}

s32 Unk_02006d14::func_02009170() {
    using namespace nG;
    Unk_02006d14_7d0 *p = &((nG::Unk_02006d14 *)this)->unk_7d0;
    s32 *r6 = &p->wc;
    s32 sp0 = p->w10;
    s32 r7 = 0;
    Unk_02006d14_Vec d;
    Unk_02006d14_Vec *pv = &((nG::Unk_02006d14 *)this)->unk_5c;
    Unk_02006d14_Vec saved = *pv;
    s32 t;
    s32 ang;
    s16 h;
    s32 v;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x18)) p->w0 = ((nG::Unk_02006d14 *)this)->unk_5c.x;
    if (func_020b50e8() == 0x20 && p->w14 == 0x40 && saved.z >= p->w8) {
        p->w8 = saved.z;
    }
    d.x = p->w0 - ((nG::Unk_02006d14 *)this)->unk_5c.x;
    d.z = p->w8 - ((nG::Unk_02006d14 *)this)->unk_5c.z;
    t = func_01ffcb0c(0x4000, *r6);
    if (t < 0x1000) t = 0x1000;
    if (func_020e9688(&d) < t) {
        if (*r6 <= 0x333) {
            func_02010e48(&((nG::Unk_02006d14 *)this)->unk_5c, p->w0);
            func_02010e48(&((nG::Unk_02006d14 *)this)->unk_5c.z, p->w8);
            if (p->w0 == ((nG::Unk_02006d14 *)this)->unk_5c.x && p->w8 == ((nG::Unk_02006d14 *)this)->unk_5c.z) {
                *r6 = 0;
                r7 = 1;
            } else {
                *r6 = func_020e9650(&((nG::Unk_02006d14 *)this)->unk_5c, &saved);
                Unk_02006d14_Vec *pw = &((nG::Unk_02006d14 *)this)->unk_5c;
                *pw = saved;
            }
        } else {
            *r6 = func_02010d50(*r6, 0x333);
        }
    } else {
        *r6 = func_02010d68(*r6, sp0);
    }
    ang = func_020e7b98(d.x, d.z);
    h = ((nG::Unk_02006d14 *)this)->unk_8e;
    if (*r6) {
        func_02010d98(&h, ang);
        _ZN12Unk_020102ec13func_02010a58EPs(((nG::Unk_02006d14 *)this), &h);
    }
    s32 vt = func_01ffcb0c(*r6, data_02135f44[(((u16)(s16)(h - ang)) >> 4) * 2 + 1]);
    if (vt < 0) vt = -vt;
    v = vt;
    _ZN12Unk_020102ec13func_02010a34EPj(((nG::Unk_02006d14 *)this), &v);
    return r7;
}

void Unk_02006d14::func_020090d8() {
    using namespace nG;
    if (((nG::Unk_02006d14 *)this)->unk_700 == 0) {
        _ZN12Unk_020102ec13func_02010914Ev(((nG::Unk_02006d14 *)this));
        return;
    }
    s32 r4 = ((nG::Unk_02006d14 *)this)->unk_98;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x18)) r4 <<= 1;
    s32 q = func_01ffcb0c(r4, 0x3ae1);
    if (q <= ((nG::Unk_02006d14 *)this)->unk_2d0) ((nG::Unk_02006d14 *)this)->unk_2dc = q;
    if (r4 > 0x53f) {
        if (((nG::Unk_02006d14 *)this)->unk_700 != 2) _ZN12Unk_020102ec13func_02010380Eijt(((nG::Unk_02006d14 *)this), 2, 3, 0);
    } else {
        if (((nG::Unk_02006d14 *)this)->unk_700 != 1) _ZN12Unk_020102ec13func_02010380Eijt(((nG::Unk_02006d14 *)this), 1, 3, 0);
    }
    _ZN12Unk_020dbda413func_02053f20Ev(((nG::Unk_02006d14 *)this)->unk_230);
    _ZN12Unk_02006d1413func_0200f32cEv(((nG::Unk_02006d14 *)this));
}

void Unk_02006d14::func_0200905c() {
    using namespace nG;
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x18)) {
        _ZN12Unk_020102ec13func_020109c4Ev(((nG::Unk_02006d14 *)this));
        void *r7 = func_0209c60c();
        if (func_0209c86c() == 1) {
            s32 *r4 = &((nG::Unk_02006d14 *)this)->unk_5c.y;
            s32 r6 = func_02030814(0);
            if (((nG::Unk_02006d14 *)this)->unk_5c.y >= r6) {
                s32 d = Unk_0200905c_abs(((s32 *)func_0209c868(r7))[2] - ((nG::Unk_02006d14 *)this)->unk_5c.z);
                if (d < 0x1000) {
                    s32 m = func_01ffc5a4(0x1000 - d, 0x1000) * 6;
                    *r4 = *r4 + (m >> 5);
                } else {
                    *r4 = r6;
                }
            } else {
                *r4 = r6;
            }
        }
    } else {
        _ZN12Unk_020102ec13func_020109c4Ev(((nG::Unk_02006d14 *)this));
    }
}

void Unk_02006d14::func_02008fd4(s32 f) {
    using namespace nG;
    if (f) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x18)) {
            if (((nG::Unk_02006d14 *)this)->unk_700) {
                _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 0);
            }
            ((nG::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, ((nG::Unk_02006d14 *)this)->unk_7ec);
            _ZN12Unk_020d6df413func_0200ce98Ejjj(((nG::Unk_02006d14 *)this), 3, 1, -1);
            func_0203da54();
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 5);
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x18);
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 3);
        } else {
            _ZN12Unk_02006d1413func_0200bd60Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
            _ZN12Unk_02006d1413func_0200ec1cEj(this, 5);
        }
    }
}

void Unk_02006d14::func_02008fa4() {
    using namespace nG;
    s32 r = func_02009170();
    func_020090d8();
    func_0200905c();
    _ZN12Unk_020102ec13func_0201071cEv(((nG::Unk_02006d14 *)this));
    func_02008fd4(r);
}

void Unk_02008fa0::func_02008fa0(s16 v) {
    using namespace nG; unk_00 = v; }

BOOL Unk_02006d14::func_02008f60(s16 v, u32 a, u32 b) {
    using namespace nG;
    Unk_02008f60_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x70, a, b);
    m.unk_0c.func_02008fa0(v);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02008f5c::func_02008f5c(s16 v) {
    using namespace nG; unk_00 = v; }

void Unk_02006d14::func_02008f1c(Unk_02006d14_Item *item, u32 old) {
    using namespace nG;
    s16 *p = (s16 *)&((nG::Unk_02006d14_Item *)item)->unk_0c[0];
    Unk_02008f5c *s = (Unk_02008f5c *)&((nG::Unk_02006d14 *)this)->unk_7d0;
    if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x17)) {
        _ZN12Unk_020102ec13func_020103b4Eijt(this, 1, 3, 0);
    }
    s->func_02008f5c(*p);
    _ZN12Unk_02006d1413func_0200ec30Ej(this, 6);
}

void Unk_02006d14::func_02008f18() {
    using namespace nG;}

void Unk_02006d14::func_02008ee4() {
    using namespace nG;
    Unk_02006d14_7d0 *p = &((nG::Unk_02006d14 *)this)->unk_7d0;
    s16 t = ((nG::Unk_02006d14 *)this)->unk_8e;
    p->h2 = t;
    func_02010d98(&t, p->unk_00);
    _ZN12Unk_020102ec13func_02010a58EPs(((nG::Unk_02006d14 *)this), &t);
}

void Unk_02006d14::func_02008eb4() {
    using namespace nG;
    if (((nG::Unk_02006d14 *)this)->unk_7d0.unk_00 == ((nG::Unk_02006d14 *)this)->unk_8e) {
        _ZN12Unk_02006d1413func_0200bd60Esji(((nG::Unk_02006d14 *)this), 3, 5, -1);
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 6);
    }
}

void Unk_02006d14::func_02008e94() {
    using namespace nG;
    func_02008ee4();
    _ZN12Unk_020102ec13func_02010914Ev(((nG::Unk_02006d14 *)this));
    _ZN12Unk_020102ec13func_0201071cEv(((nG::Unk_02006d14 *)this));
    func_02008eb4();
}

BOOL Unk_02006d14::func_02008e50(u8 a, u8 b, u8 c, u32 d, s16 e) {
    using namespace nG;
    Unk_02008e50_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x76, d, e);
    Unk_02008e50_Pay *pp = &m.unk_0c;
    pp->set(a, b, c);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02008e48::func_02008e48(u8 a, u8 b, u8 c) {
    using namespace nG;
    unk_00 = a;
    unk_01 = b;
    unk_02 = c;
}

void Unk_02008e48::func_02008e34(u8 *a, u8 *b, u8 *c) {
    using namespace nG;
    *a = unk_00;
    *b = unk_01;
    *c = unk_02;
}

BOOL Unk_02006d14::func_02008cc0(s16 v) {
    using namespace nG;
    u8 a, b, c;
    ((nG::Unk_02006d14 *)this)->unk_8ec.func_02008e34(&a, &b, &c);
    return func_02008e50(a, b, c, 6, v);
}

void Unk_02008040::func_020087ac() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    Unk_02008074_Vec *pv = &unk_c4;
    volatile Unk_02008074_Vec v;
    v.unk_00 = pv->unk_00;
    v.unk_04 = pv->unk_04;
    v.unk_08 = pv->unk_08;
    s16 d = unk_d0;
    Unk_02008858_Blk blk1 = unk_294;
    Unk_02008858_Blk blk2 = unk_694;
    _ZN12Unk_02006d1413func_0200e7f4Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02008858();
    unk_c4.unk_00 = v.unk_00;
    unk_c4.unk_04 = v.unk_04;
    unk_c4.unk_08 = v.unk_08;
    unk_d0 = d;
    unk_294 = blk1;
    unk_694 = blk2;
}

BOOL Unk_02008040::func_02008770(s16 v, u32 a, u32 b) {
    using namespace nF;
    Unk_02008100_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x77, a, b);
    m.unk_0c = v;
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_020080e8::func_02008768(s16 v) {
    using namespace nF;
    func_020769c4(this, v);
}

void Unk_020080e8::func_02008758(s16 *out) {
    using namespace nF;
    *out = func_020769ac(this);
}

void Unk_02008040::func_0200870c(u8 *msg) {
    using namespace nF;
    s16 v = *(s16 *)(msg + 0xc);
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x70, 3, 0);
    func_02090330(0x43, unk_6dc, 0, 0);
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x86);
    *(s16 *)&unk_7d0[0] = v;
    unk_8ec.func_02008768(v);
}

void Unk_02008040::func_020086dc(u32 b) {
    using namespace nF;
    s16 v;
    unk_8ec.func_02008758(&v);
    func_02008770(v, 6, b);
}

void Unk_02008040::func_0200869c() {
    using namespace nF;
    s16 v = unk_8e;
    func_02010dbc(&v, *(s16 *)&unk_7d0[0], 0x800, 0x1770000, 0xc0000);
    _ZN12Unk_020102ec13func_02010a58EPs(this, &v);
}

void Unk_02008040::func_0200865c() {
    using namespace nF;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_2cc)) {
        unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
}

void Unk_02008040::func_0200863c() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    func_0200869c();
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_0200865c();
}

BOOL Unk_02008040::func_020085f0(u32 a, u32 b) {
    using namespace nF;
    Unk_02008404_Msg m;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x79, a, b);
    if (_ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m)) {
        _ZN12Unk_02006d1413func_0200ec30Ej(this, 8);
        _ZN12Unk_0200e2c0D1Ev(&m);
        return TRUE;
    }
    _ZN12Unk_0200e2c0D1Ev(&m);
    return FALSE;
}

void Unk_02008040::func_020085a4() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x76, 3, 0);
    unk_7d0[0] = 0;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
        func_02034dd0(0xc, 0xf, 0);
    }
    _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x83a);
}

BOOL Unk_02008040::func_02008598(u32 b) {
    using namespace nF;
    return func_020085f0(5, b);
}

void Unk_02008040::func_02008458() {
    using namespace nF;
    u8 *st = &unk_7d0[0];
    if (unk_700 == 0x76) {
        if (_ZN12Unk_020dbe7c13func_02056654Ev(unk_2cc)) {
            _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x77, 0, 0);
            if (!_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
                *st = 3;
                unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
            }
        }
    } else {
        _ZN12Unk_02006d1413func_0200f4c0Ei(this, 0x400);
        switch (*st) {
        case 0:
            if (func_0203d820()) {
                *st = 1;
                _ZN12Unk_020d967013func_0203e488Ei(this, this);
                _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x11);
                func_020a710c(data_020d6ef4);
                unk_1e = 0x15;
                unk_128->unk_08 = 1;
                func_0203a598();
            }
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    _ZN12Unk_020d967013func_0203e47cEi(this, this);
                    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x11);
                    func_0203d7f8();
                    unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
                    _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
                    _ZN12Unk_02006d1413func_0200ec1cEj(this, 8);
                    func_0203a844();
                    func_02034d70(0xc);
                }
            }
            break;
        }
    }
}

void Unk_02008040::func_0200843c() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02008458();
}

BOOL Unk_02008040::func_02008404(u32 a, u32 b) {
    using namespace nF;
    Unk_02008404_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x83, a, b);
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02008040::func_020083e8(u32 a, u32 flag) {
    using namespace nF;
    u32 t = 0;
    if (flag) {
        t = 5;
    }
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 0x81, t, t);
}

BOOL Unk_02008040::func_020083dc(u32 b) {
    using namespace nF;
    return func_02008404(1, b);
}

void Unk_02008040::func_0200838c() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020dbe7c13func_020565e8Ei(unk_2cc, 1)) {
        if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
            func_020f0a68(data_021f5b80, 0x79);
        } else {
            _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x79);
        }
    }
}

void Unk_02008040::func_02008360() {
    using namespace nF;
    if (((*(vu16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
}

void Unk_02008040::func_02008320() {
    using namespace nF;
    func_0200838c();
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(this);
        func_02008360();
    } else {
        _ZN12Unk_02006d1413func_0200ef08Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
    }
}

BOOL Unk_02008040::func_020082e4(u8 v, u32 a, u32 b) {
    using namespace nF;
    Unk_020082e4_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x84, a, b);
    m.unk_0c = v;
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_02008040::func_020082c0(u8 *msg) {
    using namespace nF;
    u8 *p = &unk_7d0[0];
    p[0] = msg[0xc];
    p[1] = 0;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, 3, 3);
}

BOOL Unk_02008040::func_020082ac(u32 b) {
    using namespace nF;
    return func_020082e4(0, 6, b);
}

void Unk_02008040::func_020082a8() {
    using namespace nF;}

void Unk_02008040::func_02008190() {
    using namespace nF;
    u8 *st;
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
        st = &unk_7d0[1];
        switch (*st) {
        case 0:
            if (func_0203d820()) {
                *st = 1;
                _ZN12Unk_020d967013func_0203e488Ei(this, this);
                _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x11);
                func_020a710c(data_020d6ee4);
                unk_1e = 0x1e;
                unk_128->unk_08 = 1;
                func_0202e8c8();
            } else {
                unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
                _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
            }
            break;
        case 1:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 != 0) {
                    *st = 2;
                }
            }
            break;
        case 2:
            if (unk_128 != NULL) {
                if (unk_128->unk_04 == 0) {
                    _ZN12Unk_020d967013func_0203e47cEi(this, this);
                    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x11);
                    func_0203d7f8();
                    unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
                    _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
                }
            }
            break;
        }
    } else {
        unk_7f8 = _ZN12Unk_0200769413func_02007c08Ej(this, unk_7ec);
    }
}

void Unk_02008040::func_02008150() {
    using namespace nF;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(data_020cbb18, unk_7fc)) {
        _ZN12Unk_020102ec13func_0201071cEv(this);
    } else {
        _ZN12Unk_02006d1413func_0200ef08Ev(this);
        _ZN12Unk_020102ec13func_0201071cEv(this);
    }
    func_02008190();
}

BOOL Unk_02008040::func_02008100(u16 *v, u32 a, u32 b) {
    using namespace nF;
    Unk_02008100_Msg m;
    BOOL r;
    _ZN12Unk_0200e2c0C1Ev(&m);
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x85, a, b);
    unk_81e = *v;
    unk_81c = unk_81e;
    r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    _ZN12Unk_0200e2c0D1Ev(&m);
    return r;
}

void Unk_020080e8::func_020080f8(u16 v) {
    using namespace nF;
    func_02076964(this, v);
}

void Unk_020080e8::func_020080e8(u16 *out) {
    using namespace nF;
    *out = func_0207694c(this);
}

void Unk_02008040::func_02008074() {
    using namespace nF;
    s32 t;
    unk_8ec.func_020080f8(unk_81c);
    Unk_02008074_Vec v;
    func_02007ebc(&v, this, 0);
    unk_820 = v.unk_00;
    unk_824 = v.unk_04;
    unk_828 = v.unk_08;
    t = 0x1000;
    unk_82c = t;
    unk_830 = t;
    unk_834 = t;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x7e, 3, 0);
}

void Unk_02008040::func_02008040(void *arg) {
    using namespace nF;
    u16 a, b;
    unk_8ec.func_020080e8(&a);
    b = a;
    func_02008100(&b, 6, (u32)arg);
}

void Unk_02007694::func_02007f7c() {
    using namespace nE;
    Unk_02007ebc_Vec v;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    s32 n = ((u32)((nE::Unk_02007694 *)this)->unk_2d4 << 4) >> 16;
    s32 t = 0x1000;
    if (((nE::Unk_02007694 *)this)->unk_700 == 0x7e) {
        if (n == 10) {
            _ZN12Unk_02006d1413func_0200ec30Ej(this, 0xd);
        }
    } else {
        s32 c = ((nE::Unk_02007694 *)this)->unk_82c;
        if (n >= 9) {
            t = c - 0x155;
            if (t < 0) {
                t = 0;
            }
        }
    }
    ((nE::Unk_02007694 *)this)->unk_82c = t;
    ((nE::Unk_02007694 *)this)->unk_830 = t;
    ((nE::Unk_02007694 *)this)->unk_834 = t;
    func_02007ebc(&v, ((nE::Unk_02007694 *)this), n);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_820, v.x, 0x800, 0x2000, 0x333);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_824, v.y, 0x800, 0x2000, 0x333);
    func_020e7870(&((nE::Unk_02007694 *)this)->unk_828, v.z, 0x800, 0x2000, 0x333);
}

namespace nE {
extern "C" void func_02007ebc(Unk_02007ebc_Vec *out, Unk_02007694 *obj, s32 n) {
    Unk_02007ebc_Mtx m = obj->unk_694;
    s32 tx = m.m[9];
    s32 ty = m.m[10];
    s32 tz = m.m[11];
    m.m[11] = 0;
    m.m[10] = 0;
    m.m[9] = 0;
    Unk_02007ebc_Mtx m2 = m;
    Unk_02007ebc_Vec in;
    Unk_02007ebc_Vec res;
    in.x = 0x320;
    in.z = 0;
    if (obj->unk_700 == 0x7e) {
        if (n <= 10) {
            in.y = 0;
        } else {
            in.y = -0xa00;
        }
    } else {
        in.y = -((0xa000 - func_01ffc5a4(n * 0x5000, 0x15000)) >> 4);
    }
    MTX_MultVec43(&in, &m2, &res);
    tx += res.x;
    ty += res.y;
    tz += res.z;
    Unk_02007ebc_Vec fin = {tx, ty, tz};
    func_0203ee38(out, &fin);
}
}

void Unk_02007694::func_02007e5c() {
    using namespace nE;
    if (_ZN12Unk_02006d1413func_0200f4c0Ei(this, 0x800)) {
        if (_ZN12Unk_020dbe7c13func_02056654Ev(((nE::Unk_02007694 *)this)->unk_2cc)) {
            if (((nE::Unk_02007694 *)this)->unk_700 == 0x7e) {
                _ZN12Unk_020102ec13func_02010358Eijt(this, 0x7f, 0, 0);
                _ZN12Unk_02006d1413func_0200ecdcEj(this, 0x6e);
            } else {
                func_02007e08(6, -1);
                _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xd);
            }
        }
    }
}

void Unk_02007694::func_02007e40() {
    using namespace nE;
    func_02007f7c();
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02007e5c();
}

u32 Unk_02007694::func_02007e08(u32 a, u32 b) {
    using namespace nE;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x86, a, b);
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_02007694::func_02007df4() {
    using namespace nE;
    _ZN12Unk_020102ec13func_02010358Eijt(this, 0x80, 3, 0);
}

void Unk_02007694::func_02007dc8(u32 a) {
    using namespace nE;
    if (((nE::Unk_02007694 *)this)->unk_7ec == 0x85) {
    } else if (((nE::Unk_02007694 *)this)->unk_7ec == 0x86) {
        ((nE::Unk_02007694 *)this)->unk_c80 = a;
    } else {
        func_02007e08(6, a);
    }
}

void Unk_02007694::func_02007d88() {
    using namespace nE;
    if (_ZN12Unk_020dbe7c13func_02056654Ev(((nE::Unk_02007694 *)this)->unk_2cc)) {
        ((nE::Unk_02007694 *)this)->unk_7f8 = func_02007c08(((nE::Unk_02007694 *)this)->unk_7ec);
        _ZN12Unk_0200769413func_0200c358Etjj(this, 3, 5, -1);
    }
}

void Unk_02007694::func_02007d6c() {
    using namespace nE;
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    func_02007d88();
}

u32 Unk_02007694::func_02007d30(u32 a, u32 b, u32 c) {
    using namespace nE;
    Unk_0200e2c0 m;
    _ZN12Unk_0200e2c013func_0200e2c0Eiis(&m, 0x90, b, c);
    m.unk_0c_h = a;
    u32 r = _ZN12Unk_020d6df413func_0200e248EP12Unk_0200e2c0(this, &m);
    return r;
}

void Unk_02007694::func_02007d14(Unk_0200e2c0 *p) {
    using namespace nE;
    u16 v = p->unk_0c_h;
    _ZN12Unk_020102ec13func_020103b4Eijt(this, 0, v, v);
    _ZN12Unk_02006d1413func_0200e870Ev(this);
}

void Unk_02007694::func_02007d00(u32 a) {
    using namespace nE;
    _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 5, a);
}

void Unk_02007694::func_02007cdc() {
    using namespace nE;
    if (func_0206ec6c()) {
        func_0203d7f8();
        _ZN12Unk_020d6df413func_0200ce98Ejjj(this, 3, 1, -1);
    }
}

void Unk_02007694::func_02007cb4() {
    using namespace nE;
    _ZN12Unk_020102ec13func_020109c4Ev(this);
    _ZN12Unk_020102ec13func_02010914Ev(this);
    _ZN12Unk_020102ec13func_0201071cEv(this);
    _ZN12Unk_020102ec13func_0201065cEv(this);
    func_02007cdc();
}

void Unk_02007694::func_02007cb0() {
    using namespace nE;}

void Unk_02007694::func_02007cac() {
    using namespace nE;}

void Unk_02007694::func_02007ca8() {
    using namespace nE;}

void Unk_02007694::func_02007ca4() {
    using namespace nE;}

void Unk_02007694::func_02007ca0() {
    using namespace nE;}

void Unk_02007694::func_02007c9c() {
    using namespace nE;}

void Unk_02007694::func_02007c98() {
    using namespace nE;}

void Unk_02007694::func_02007c5c() {
    using namespace nE;
    Unk_02007c5c_Mtx m;
    ((nE::Unk_02007694 *)this)->unk_d0 = func_0203ef38(((nE::Unk_02007694 *)this)->unk_c4, ((nE::Unk_02007694 *)this)->unk_5c);
    _ZN12Unk_020d5d8413func_02002b84EPv(this, &m);
    ((nE::Unk_02007694 *)this)->unk_294 = m;
}

u8 Unk_02007694::func_02007c50(u32 a) {
    using namespace nE;
    return data_020c6718[a];
}

void Unk_02007694::func_02007c20(u32 a, u32 b) {
    using namespace nE;
    u8 r = func_02007c50(a);
    if (r) {
        func_02007c50(b);
        if (!r) {
            _ZN12Unk_0203223813func_020323d8Ev(((nE::Unk_02007694 *)this)->unk_7a0);
        }
    }
}

u8 Unk_02007694::func_02007c14(u32 a) {
    using namespace nE;
    return data_020c67ac[a];
}

u8 Unk_02007694::func_02007c08(u32 a) {
    using namespace nE;
    return data_020c6840[a];
}

void Unk_02007694::func_020076f0(u32 a) {
    using namespace nE;
    static void (nE::Unk_02007694::*tbl[147])(u32) = {
        data_020d6da4.fn, data_020d6dac.fn, data_020d6d84.fn, 0, data_020d6d7c.fn, 0,
        data_020d6d74.fn, data_020d6d6c.fn, data_020d6d64.fn, 0, data_020d6d5c.fn, 0,
        0, data_020d6d54.fn, data_020d6d4c.fn, data_020d6d44.fn, 0, 0,
        0, 0, data_020d6d3c.fn, 0, 0, data_020d6d34.fn,
        0, data_020d6d2c.fn, data_020d6d24.fn, 0, 0, data_020d6d1c.fn,
        0, 0, 0, 0, data_020d6d14.fn, data_020d6d0c.fn,
        data_020d6d04.fn, data_020d6cfc.fn, data_020d6cf4.fn, data_020d6cec.fn, data_020d6ce4.fn, data_020d6cdc.fn,
        data_020d6cd4.fn, 0, data_020d6ccc.fn, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        data_020d6cc4.fn, data_020d6cbc.fn, 0, data_020d6cb4.fn, 0, 0,
        0, 0, 0, data_020d6cac.fn, 0, 0,
        0, data_020d6ca4.fn, data_020d6c9c.fn, data_020d6c94.fn, data_020d6c8c.fn, 0,
        0, data_020d6c84.fn, 0, 0, 0, 0,
        0, 0, 0, data_020d6c7c.fn, data_020d6c74.fn, 0,
        0, 0, 0, data_020d6c6c.fn, data_020d6c64.fn, data_020d6c5c.fn,
        0, 0, data_020d6c54.fn, data_020d6c4c.fn, 0, 0,
        data_020d6c44.fn, 0, data_020d6c3c.fn, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, data_020d6c34.fn, data_020d6c2c.fn, 0, 0, 0,
        0, 0, 0, 0, data_020d6c24.fn, 0,
        0, 0, data_020d6c1c.fn, data_020d6c14.fn, data_020d6c0c.fn, 0,
        0, 0, 0, data_020d6c04.fn, data_020d6bfc.fn, 0,
        0, 0, 0, 0, 0, 0,
        0, data_020d6bf4.fn, 0,
    };
    void (nE::Unk_02007694::*fn)(u32) = tbl[((nE::Unk_02007694 *)this)->unk_7ec];
    if (fn) {
        (((nE::Unk_02007694 *)this)->*fn)(a);
    }
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1c);
}

void Unk_02007694::func_020076dc() {
    using namespace nE;
    MI_CpuFill8(((nE::Unk_02007694 *)this)->unk_7d0 + 0, 0, 0x1c);
}

void Unk_02007694::func_020076b0(u32 a) {
    using namespace nE;
    if (data_020c6278[a]) {
        ((nE::Unk_02007694 *)this)->unk_98 = 0;
        u32 t = ((nE::Unk_02007694 *)this)->unk_a8;
        ((nE::Unk_02007694 *)this)->unk_a4 = 0;
        ((nE::Unk_02007694 *)this)->unk_a8 = t;
        ((nE::Unk_02007694 *)this)->unk_ac = 0;
    }
}

void Unk_02007694::func_02007694(u32 a) {
    using namespace nE;
    if (data_020c630c[a]) {
        _ZN12Unk_020102ec13func_02010a50Et(((nE::Unk_02007694 *)this), 0);
    }
}

void Unk_02006d14::func_02006d14(Unk_02006d14_Item* item) {
    using namespace nD;
    static Unk_02006d14_Fn table[] = {
        data_020d6bcc.fn, data_020d6bc4.fn, data_020d6bbc.fn, data_020d6bb4.fn, data_020d6bac.fn, data_020d6ba4.fn,
        data_020d6b9c.fn, data_020d648c.fn, data_020d610c.fn, data_020d6b84.fn, data_020d6b7c.fn, data_020d6b74.fn,
        data_020d6b6c.fn, data_020d6b64.fn, data_020d6b5c.fn, data_020d6b54.fn, data_020d6b4c.fn, data_020d6b44.fn,
        data_020d6b3c.fn, data_020d6b34.fn, data_020d6b2c.fn, data_020d6b24.fn, data_020d6b1c.fn, data_020d6b14.fn,
        data_020d6b0c.fn, data_020d6b04.fn, data_020d6afc.fn, data_020d6af4.fn, data_020d6aec.fn, data_020d6ae4.fn,
        data_020d6adc.fn, data_020d6ad4.fn, data_020d6acc.fn, data_020d6ac4.fn, data_020d6abc.fn, data_020d6ab4.fn,
        data_020d6aac.fn, data_020d6aa4.fn, data_020d6a9c.fn, data_020d6a94.fn, data_020d6a8c.fn, data_020d6a84.fn,
        data_020d6a7c.fn, data_020d6a74.fn, data_020d6a6c.fn, data_020d6a64.fn, data_020d6a5c.fn, data_020d6a54.fn,
        data_020d6a4c.fn, data_020d6a44.fn, data_020d6a3c.fn, data_020d6a34.fn, data_020d6a2c.fn, data_020d6a24.fn,
        data_020d6a1c.fn, data_020d6a14.fn, data_020d6a0c.fn, data_020d6a04.fn, data_020d69fc.fn, data_020d69f4.fn,
        data_020d69ec.fn, data_020d69e4.fn, data_020d69dc.fn, data_020d69d4.fn, data_020d69cc.fn, data_020d69c4.fn,
        data_020d69bc.fn, data_020d69b4.fn, data_020d69ac.fn, data_020d69a4.fn, data_020d699c.fn, data_020d638c.fn,
        data_020d608c.fn, data_020d6984.fn, data_020d697c.fn, data_020d6974.fn, data_020d696c.fn, data_020d6964.fn,
        data_020d695c.fn, data_020d6954.fn, data_020d694c.fn, data_020d6944.fn, data_020d693c.fn, data_020d6934.fn,
        data_020d692c.fn, data_020d6924.fn, data_020d691c.fn, data_020d6914.fn, data_020d690c.fn, data_020d6904.fn,
        data_020d68fc.fn, data_020d68f4.fn, data_020d68ec.fn, data_020d68e4.fn, data_020d68dc.fn, data_020d68d4.fn,
        data_020d68cc.fn, data_020d68c4.fn, data_020d68bc.fn, data_020d68b4.fn, data_020d68ac.fn, data_020d68a4.fn,
        data_020d689c.fn, data_020d6894.fn, data_020d688c.fn, data_020d6884.fn, data_020d687c.fn, data_020d6874.fn,
        data_020d686c.fn, data_020d6864.fn, data_020d685c.fn, data_020d6854.fn, data_020d684c.fn, data_020d6844.fn,
        data_020d683c.fn, data_020d6834.fn, data_020d682c.fn, data_020d6824.fn, data_020d681c.fn, data_020d6814.fn,
        data_020d680c.fn, data_020d6804.fn, data_020d67fc.fn, data_020d67f4.fn, data_020d67ec.fn, data_020d67e4.fn,
        data_020d67dc.fn, data_020d67d4.fn, data_020d67cc.fn, data_020d67c4.fn, data_020d67bc.fn, data_020d67b4.fn,
        data_020d67ac.fn, data_020d67a4.fn, data_020d679c.fn, data_020d6794.fn, data_020d678c.fn, data_020d6784.fn,
        data_020d677c.fn, data_020d6774.fn, data_020d627c.fn, data_020d6764.fn, data_020d675c.fn, data_020d626c.fn,
        data_020d5ffc.fn, data_020d6744.fn, data_020d673c.fn,
    };
    u32 id = ((nD::Unk_02006d14_Item *)item)->unk_00;
    s16 v = ((nD::Unk_02006d14_Item *)item)->unk_08;
    Unk_02006d14_Fn fn = table[id];
    u32 old = ((nD::Unk_02006d14 *)this)->unk_7f0;
    _ZN12Unk_0200769413func_020076f0Ej(this, id);
    _ZN12Unk_0200769413func_020076dcEv(this);
    ((nD::Unk_02006d14 *)this)->unk_7ec = id;
    _ZN12Unk_0200769413func_020076b0Ej(this, id);
    _ZN12Unk_0200769413func_02007c20Ejj(this, id, old);
    _ZN12Unk_0200769413func_02007694Ej(this, id);
    _ZN12Unk_020102ec13func_02010800EPj(this, &id);
    _ZN12Unk_02005e7c13func_02005e7cEj(this, id);
    Unk_02006d14_Data* p = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e88Ei(p, p->unk_64)) {
        if (!_ZN12Unk_020cbb1813func_020729bcEj(p, ((nD::Unk_02006d14 *)this)->unk_7fc)) {
            if (v >= 0) { ((nD::Unk_02006d14 *)this)->unk_c80 = v; ((nD::Unk_02006d14 *)this)->unk_c84 = id; }
        } else {
            ((nD::Unk_02006d14 *)this)->unk_c80 = _ZN12Unk_020cbb1813func_02072e34Ev(p);
        }
    }
    (((nD::Unk_02006d14 *)this)->*fn)(((nD::Unk_02006d14_Item *)item), old);
    ((nD::Unk_02006d14 *)this)->unk_7f8 = _ZN12Unk_0200769413func_02007c14Ej(this, id);
    if (!_ZN12Unk_020cbb1813func_020729bcEj(p, ((nD::Unk_02006d14 *)this)->unk_7fc) && data_020c6a18[id] != 0) _ZN12Unk_02006d1413func_0200ec30Ej(this, 0x12);
    else _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x12);
}

void Unk_02005e7c::func_020063a0() {
    using namespace nC;
    s32 st;
    if (!func_02095574(&st, -1, unk_7fc)) {
        unk_8f4 = 0x93;
        return;
    }
    if (st >= 0x93) {
        unk_8f4 = 0x93;
        return;
    }
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x12) != 0) {
        if (st != 0x1a) {
            return;
        }
        if (unk_7ec != 0x19) {
            return;
        }
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x12);
    }
    unk_8f4 = st;
    u8 *r = func_02095720(unk_7fc);
    if (r != NULL) {
        MI_CpuCopy8(r + 4, unk_8ec, 8);
    }
    s32 a = _ZN12Unk_020d6df413func_0200e3c0Ej(this, unk_7ec);
    s32 b = _ZN12Unk_020d6df413func_0200e3c0Ej(this, st);
    if (a == 1 && b == 1) {
        return;
    }
    if (b == 1) {
        st = 2;
    }
    s32 idx = -1;
    r = func_02095720(unk_7fc);
    if (r != NULL) {
        idx = func_0207697c(r + 2);
    }
    s32 c = unk_c80;
    if (c >= 0 && unk_c84 == st && idx == c) {
        return;
    }
    static void (Unk_02005e7c::*tbl[147])(s32) = {
        data_020d671c.fn, data_020d624c.fn, data_020d5fcc.fn, data_020d6704.fn, data_020d66fc.fn, data_020d66f4.fn,
        data_020d66ec.fn, data_020d66e4.fn, data_020d66dc.fn, data_020d66d4.fn, data_020d66cc.fn, data_020d66c4.fn,
        data_020d66bc.fn, data_020d66b4.fn, data_020d66ac.fn, data_020d66a4.fn, data_020d669c.fn, data_020d6694.fn,
        data_020d620c.fn, data_020d6684.fn, data_020d667c.fn, data_020d6674.fn, data_020d666c.fn, data_020d6664.fn,
        data_020d665c.fn, data_020d6654.fn, data_020d664c.fn, data_020d6644.fn, data_020d663c.fn, data_020d6634.fn,
        data_020d662c.fn, data_020d6624.fn, data_020d661c.fn, data_020d6614.fn, data_020d5f54.fn, data_020d5e6c.fn,
        data_020d6be4.fn, data_020d65b4.fn, data_020d65cc.fn, data_020d65d4.fn, data_020d65dc.fn, data_020d65ec.fn,
        data_020d65fc.fn, data_020d670c.fn, data_020d6714.fn, data_020d674c.fn, data_020d6754.fn, data_020d6dbc.fn,
        data_020d6b8c.fn, data_020d6d94.fn, data_020d6dc4.fn, data_020d6584.fn, data_020d657c.fn, data_020d6574.fn,
        data_020d656c.fn, data_020d6564.fn, data_020d655c.fn, data_020d6554.fn, data_020d654c.fn, data_020d6544.fn,
        data_020d653c.fn, data_020d6534.fn, data_020d652c.fn, data_020d6524.fn, data_020d651c.fn, data_020d6514.fn,
        data_020d650c.fn, data_020d6504.fn, data_020d64fc.fn, data_020d64f4.fn, data_020d64ec.fn, data_020d64e4.fn,
        data_020d64dc.fn, data_020d64d4.fn, data_020d64cc.fn, data_020d64c4.fn, data_020d6bec.fn, data_020d6bdc.fn,
        data_020d6bd4.fn, data_020d64a4.fn, data_020d649c.fn, data_020d6494.fn, data_020d5f4c.fn, data_020d6484.fn,
        data_020d647c.fn, data_020d6474.fn, data_020d646c.fn, data_020d6464.fn, data_020d645c.fn, data_020d6454.fn,
        data_020d644c.fn, data_020d6444.fn, data_020d643c.fn, data_020d6434.fn, data_020d642c.fn, data_020d6424.fn,
        data_020d641c.fn, data_020d6414.fn, data_020d640c.fn, data_020d6404.fn, data_020d63fc.fn, data_020d63f4.fn,
        data_020d63ec.fn, data_020d63e4.fn, data_020d63dc.fn, data_020d63d4.fn, data_020d63cc.fn, data_020d63c4.fn,
        data_020d63bc.fn, data_020d63b4.fn, data_020d63ac.fn, data_020d63a4.fn, data_020d639c.fn, data_020d6394.fn,
        data_020d5f0c.fn, data_020d6384.fn, data_020d637c.fn, data_020d6374.fn, data_020d636c.fn, data_020d6364.fn,
        data_020d635c.fn, data_020d6354.fn, data_020d634c.fn, data_020d6344.fn, data_020d633c.fn, data_020d6334.fn,
        data_020d632c.fn, data_020d6324.fn, data_020d631c.fn, data_020d6314.fn, data_020d630c.fn, data_020d6304.fn,
        data_020d62fc.fn, data_020d62f4.fn, data_020d62ec.fn, data_020d62e4.fn, data_020d62dc.fn, data_020d62d4.fn,
        data_020d62cc.fn, data_020d62c4.fn, data_020d62bc.fn, data_020d62b4.fn, data_020d62ac.fn, data_020d62a4.fn,
        data_020d629c.fn, data_020d6294.fn, data_020d628c.fn,
    };
    (this->*tbl[st])(idx);
}

void Unk_02005e7c::func_02005f04() {
    using namespace nC;
    func_02005f50();
    s32 i;
    s32 *p;
    for (i = 0; i < 30; i++) {
        p = (s32 *)_ZN12Unk_020d6df413func_0200e220Ei(this, i);
        if (p == NULL) {
            break;
        }
        if (p[1] > unk_7f8) {
            _ZN12Unk_02006d1413func_02006d14EP17Unk_02006d14_Item(this, p);
        }
    }
    _ZN12Unk_020d6df413func_0200e208Ev(this);
    _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x17);
}

namespace nC {
extern "C" void func_02005ee0(void *p, u32 i, s32 force) {
    u32 v;
    if (force != 0) {
        v = 1;
    } else {
        v = data_020c63a0[i];
    }
    if (v != 0) {
        _ZN12Unk_020102ec13func_02010a44Ev(p, 0);
    }
}
}

void Unk_02005e7c::func_02005ea0(u32 i) {
    using namespace nC;
    if (data_020c6434[i] != 0) {
        switch (unk_16c) {
        case 1:
            func_0208f044();
            break;
        case 2:
            func_0208f038();
            break;
        default:
            func_0208f050();
            break;
        }
    } else {
        _ZN12Unk_02006d1413func_0200ebe8Ev();
    }
}

void Unk_02005e7c::func_02005e7c(u32 i) {
    using namespace nC;
    if (data_020c64c8[i] == 0) {
        unk_6ec = 0;
    } else {
        unk_6ec = 0xb33;
    }
}

void Unk_020d6df4::func_02005294() {
    using namespace nB;
    Unk_02005294_Vec3 v;
    u32 flags = ((nB::Unk_020d6df4 *)this)->unk_b0;
    BOOL f4 = (flags & 4) != 0;
    if (f4) {
        BOOL f2 = (flags & 2) != 0;
        if (f2) {
            Unk_02005294_Vec3 *p = &((nB::Unk_020d6df4 *)this)->unk_5c;
            v = *p;
            ((nB::Unk_020d6df4 *)this)->unk_6c4 = ((nB::Unk_020d6df4 *)this)->unk_6d0 = ((nB::Unk_020d6df4 *)this)->unk_6dc = ((nB::Unk_020d6df4 *)this)->unk_6f0 = *p;
            func_0203ef38(&v, &v);
            ((nB::Unk_020d6df4 *)this)->unk_664.unk_24 = ((nB::Unk_020d6df4 *)this)->unk_694.unk_24 = ((nB::Unk_020d6df4 *)this)->unk_604.unk_24 = ((nB::Unk_020d6df4 *)this)->unk_634.unk_24 = v.x;
            ((nB::Unk_020d6df4 *)this)->unk_664.unk_28 = ((nB::Unk_020d6df4 *)this)->unk_694.unk_28 = ((nB::Unk_020d6df4 *)this)->unk_604.unk_28 = ((nB::Unk_020d6df4 *)this)->unk_634.unk_28 = v.y;
            ((nB::Unk_020d6df4 *)this)->unk_664.unk_2c = ((nB::Unk_020d6df4 *)this)->unk_694.unk_2c = ((nB::Unk_020d6df4 *)this)->unk_604.unk_2c = ((nB::Unk_020d6df4 *)this)->unk_634.unk_2c = v.z;
        }
    }
    _ZN12Unk_02006d1413func_0200fdb4Ev(this);
    _ZN12Unk_02006d1413func_0200fb04Ev(this);
    void *game = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_020729bcEj(game, ((nB::Unk_020d6df4 *)this)->unk_7fc)) {
        _ZN12Unk_020d6df413func_0200d64cEv(this);
        if (!_ZN12Unk_020d6df413func_0200d640Ev(this)) {
            ((nB::Unk_020d6df4 *)this)->unk_8e6 = 0;
        }
    } else if (!_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x10)) {
        _ZN12Unk_02005e7c13func_020063a0Ev(this);
    }
    _ZN12Unk_02005e7c13func_02005f04Ev(this);
    func_0205e120(((nB::Unk_020d6df4 *)this)->unk_59c);
    ((nB::Unk_020d6df4 *)this)->unk_8c0 = 0;
    ((nB::Unk_020d6df4 *)this)->unk_8c4 = 0;
    ((nB::Unk_020d6df4 *)this)->unk_8c8 = 0;
    static void (nB::Unk_020d6df4::*tbl[147])() = {
        data_020d6734.fn, data_020d6724.fn, data_020d5fd4.fn, data_020d6244.fn, data_020d623c.fn, data_020d6234.fn,
        data_020d622c.fn, data_020d6224.fn, data_020d621c.fn, data_020d6214.fn, data_020d619c.fn, data_020d6204.fn,
        data_020d61fc.fn, data_020d61f4.fn, data_020d61c4.fn, data_020d61dc.fn, data_020d61e4.fn, data_020d658c.fn,
        data_020d6b94.fn, data_020d6604.fn, data_020d65bc.fn, data_020d65e4.fn, data_020d660c.fn, data_020d672c.fn,
        data_020d676c.fn, data_020d6db4.fn, data_020d6d8c.fn, data_020d6184.fn, data_020d617c.fn, data_020d6174.fn,
        data_020d616c.fn, data_020d6164.fn, data_020d615c.fn, data_020d6154.fn, data_020d614c.fn, data_020d6144.fn,
        data_020d613c.fn, data_020d6134.fn, data_020d612c.fn, data_020d64bc.fn, data_020d64ac.fn, data_020d6114.fn,
        data_020d5e5c.fn, data_020d6104.fn, data_020d60fc.fn, data_020d60f4.fn, data_020d60ec.fn, data_020d60e4.fn,
        data_020d60dc.fn, data_020d60d4.fn, data_020d60cc.fn, data_020d60c4.fn, data_020d60bc.fn, data_020d60b4.fn,
        data_020d60ac.fn, data_020d60a4.fn, data_020d609c.fn, data_020d6094.fn, data_020d5eac.fn, data_020d6084.fn,
        data_020d607c.fn, data_020d6074.fn, data_020d606c.fn, data_020d6064.fn, data_020d605c.fn, data_020d6054.fn,
        data_020d604c.fn, data_020d6044.fn, data_020d603c.fn, data_020d6034.fn, data_020d602c.fn, data_020d6024.fn,
        data_020d601c.fn, data_020d6014.fn, data_020d600c.fn, data_020d6284.fn, data_020d5fc4.fn, data_020d625c.fn,
        data_020d6254.fn, data_020d5fe4.fn, data_020d5fec.fn, data_020d6194.fn, data_020d61a4.fn, data_020d61bc.fn,
        data_020d61cc.fn, data_020d61ec.fn, data_020d6594.fn, data_020d65f4.fn, data_020d668c.fn, data_020d698c.fn,
        data_020d6d9c.fn, data_020d5f84.fn, data_020d5f7c.fn, data_020d5f74.fn, data_020d5f6c.fn, data_020d5f64.fn,
        data_020d5f5c.fn, data_020d6124.fn, data_020d5e64.fn, data_020d5f44.fn, data_020d5f3c.fn, data_020d5f34.fn,
        data_020d5f2c.fn, data_020d5f24.fn, data_020d5f1c.fn, data_020d5f14.fn, data_020d5eb4.fn, data_020d5f04.fn,
        data_020d5efc.fn, data_020d5ef4.fn, data_020d5ed4.fn, data_020d5eec.fn, data_020d5f8c.fn, data_020d5f9c.fn,
        data_020d5fa4.fn, data_020d6004.fn, data_020d6264.fn, data_020d618c.fn, data_020d61ac.fn, data_020d61d4.fn,
        data_020d659c.fn, data_020d65c4.fn, data_020d6dcc.fn, data_020d5e84.fn, data_020d5e7c.fn, data_020d5e74.fn,
        data_020d64b4.fn, data_020d5e8c.fn, data_020d5e94.fn, data_020d5ea4.fn, data_020d5ebc.fn, data_020d5ecc.fn,
        data_020d5edc.fn, data_020d5f94.fn, data_020d5fac.fn, data_020d5fdc.fn, data_020d61b4.fn, data_020d65a4.fn,
        data_020d6994.fn, data_020d5e54.fn, data_020d611c.fn, data_020d5e9c.fn, data_020d5ec4.fn, data_020d5ee4.fn,
        data_020d5fb4.fn, data_020d6274.fn, data_020d65ac.fn,
    };
    void (nB::Unk_020d6df4::*fn)() = tbl[((nB::Unk_020d6df4 *)this)->unk_7ec];
    _ZN12Unk_020102ec13func_02010900Ev(this);
    (((nB::Unk_020d6df4 *)this)->*fn)();
    func_02010ed8(((nB::Unk_020d6df4 *)this)->unk_7fc);
    s32 state = ((nB::Unk_020d6df4 *)this)->unk_7ec;
    func_02005ee0(this, state, 0);
    if (_ZN12Unk_020cbb1813func_020729bcEj(game, ((nB::Unk_020d6df4 *)this)->unk_7fc)) {
        _ZN12Unk_02005e7c13func_02005ea0Ej(this, state);
    }
    _ZN12Unk_0200769413func_02007c5cEv(this);
    _ZN12Unk_02006d1413func_0200fdf4Ev(this);
    _ZN12Unk_02006d1413func_0200fb30Ev(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(game, ((nB::Unk_020d6df4 *)this)->unk_7fc)) {
        BOOL z = (data_020e416c == 0);
        if (z) {
            func_ov003_02205744(((nB::Unk_020d6df4 *)this));
            func_ov003_022056c8(((nB::Unk_020d6df4 *)this));
            func_ov003_022055e4(((nB::Unk_020d6df4 *)this));
            func_ov003_022053e4(((nB::Unk_020d6df4 *)this));
        }
        if (((nB::Unk_020d6df4 *)this)->unk_8e4 != 0) {
            ((nB::Unk_020d6df4 *)this)->unk_8e4--;
        }
    }
    if (((nB::Unk_020d6df4 *)this)->unk_8e8 != 0) {
        ((nB::Unk_020d6df4 *)this)->unk_8e8--;
    }
    _ZN12Unk_02006d1413func_0200f8c0Ev(this);
    ((nB::Unk_020d6df4 *)this)->unk_814 = _ZN12Unk_02006d1413func_0200f870Ev(this);
    if (_ZN12Unk_020cbb1813func_020729bcEj(game, ((nB::Unk_020d6df4 *)this)->unk_7fc)) {
        BOOL z = (data_020e416c == 0);
        if (z) {
            func_ov003_02205574(((nB::Unk_020d6df4 *)this));
        }
    }
    _ZN12Unk_02006d1413func_0200ea4cEv(this);
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0xa)) {
        if (((nB::Unk_020d6df4 *)this)->unk_8c0 == 0 && ((nB::Unk_020d6df4 *)this)->unk_8c4 == 0 && ((nB::Unk_020d6df4 *)this)->unk_8c8 == 0) {
            ((nB::Unk_020d6df4 *)this)->unk_8c0 = ((nB::Unk_020d6df4 *)this)->unk_5c.x;
            ((nB::Unk_020d6df4 *)this)->unk_8c4 = ((nB::Unk_020d6df4 *)this)->unk_5c.y;
            ((nB::Unk_020d6df4 *)this)->unk_8c8 = ((nB::Unk_020d6df4 *)this)->unk_5c.z;
        }
        if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x19)) {
            _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(((nB::Unk_020d6df4 *)this)->unk_838, &((nB::Unk_020d6df4 *)this)->unk_8c0);
        } else {
            _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(((nB::Unk_020d6df4 *)this)->unk_87c, &((nB::Unk_020d6df4 *)this)->unk_8c0);
        }
    }
    if (((nB::Unk_020d6df4 *)this)->unk_7f0 != ((nB::Unk_020d6df4 *)this)->unk_7ec) {
        ((nB::Unk_020d6df4 *)this)->unk_7f0 = ((nB::Unk_020d6df4 *)this)->unk_7ec;
    }
}

namespace nB {
extern "C" void func_02005264(Unk_020050e0 *p) {
    Unk_020d6df4 *obj = p->unk_04->unk_2c;
    if (obj) {
        _ZN12Unk_020dbda413func_02054048EP16Unk_02053a54_Msg(obj->unk_230, p);
    }
    p->unk_24 = func_020050f0;
    p->unk_92 = 2;
}
}

namespace nB {
extern "C" void func_020050f0(Unk_020050e0 *p) {
    s32 *pm;
    s32 m2[9];
    s32 m1[9];
    Unk_02005294_Vec3 v1;
    s32 m3[9];
    Unk_021cb69c c;
    Unk_02005294_Vec3 t3;
    Unk_02005294_Vec3 v2;
    Unk_020d6df4 *o;
    Unk_020d6df4 *r6;
    func_02054628(p, 0);
    o = p->unk_04->unk_2c;
    if (p->unk_00->unk_01 == 0xf && o != 0) {
        s16 a = o->unk_458;
        if (a != 0 || o->unk_45a != 0) {
            pm = p->unk_b4->unk_28;
            s32 i = (u16)a >> 4;
            MTX_RotY33_(m1, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            MTX_Concat33(pm, m1, pm);
            i = (u16)o->unk_45a >> 4;
            MTX_RotX33_(m2, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
            MTX_Concat33(pm, m2, pm);
        }
    }
    r6 = p->unk_04->unk_2c;
    if (r6) {
        _ZN12Unk_020dbda413func_02053fccEP16Unk_02053a54_Msg(r6->unk_230, p);
        if (p->unk_00->unk_01 == 0) {
            if ((u32)(r6->unk_700 - 0x82) <= 1) {
                Unk_020050e0_R *r = p->unk_b4;
                pm = r->unk_28;
                Unk_02005294_Vec3 *pv = &r->unk_4c;
                v1 = *pv;
                v2 = *pv;
                s32 ang = func_0203eeac(&v1, &v2);
                pv->z = v1.z;
                pv->y = v1.y - func_0203edc0();
                if (ang != 0) {
                    s32 i = (u16)ang >> 4;
                    MTX_RotX33_(m3, data_02135f44[i * 2], data_02135f44[i * 2 + 1]);
                    MTX_Concat33(pm, m3, pm);
                }
            }
            func_02054594(r6->unk_230, p, 0);
            c = data_021cb69c;
            t3.x = c.unk_24;
            t3.y = _ZN12Unk_020d6df413func_02004e0cEi(r6, c.unk_28);
            t3.z = c.unk_2c;
            func_0203ee38(&r6->unk_6f0, &t3);
        }
    }
    p->unk_24 = func_020050e0;
    p->unk_92 = 3;
}
}

namespace nB {
extern "C" void func_020050e0(Unk_020050e0 *p) {
    p->unk_24 = func_02005264;
    p->unk_92 = 1;
}
}

void Unk_020d6df4::func_020050bc() {
    using namespace nB;
    Unk_02005294_Vec3 *p = &((nB::Unk_020d6df4 *)this)->unk_5c;
    ((nB::Unk_020d6df4 *)this)->unk_6f0 = *p;
}

s32 Unk_020d6df4::func_02004e0c(s32 x) {
    using namespace nB;
    BOOL b = (data_020e416c == 0);
    if (b || _ZN12Unk_02006d1413func_0200ec44Ej(this, 3) == 0) {
        return x;
    }
    return func_02030814(0);
}

void Unk_020d6df4::func_02004ce8() {
    using namespace nA;
    typedef void (Unk_020d6df4::*Fn)();
    static Fn table[2] = {
        data_020d5fbc.fn, data_020d5ff4.fn,
    };
    Fn fn = table[unk_7f4];
    (this->*fn)();
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0xd)) {
        BOOL c = data_020e416c == 0 ? TRUE : FALSE;
        if (c == TRUE) {
            s32 a[6];
            a[0] = unk_820;
            a[1] = unk_824;
            a[2] = unk_828;
            a[3] = unk_82c;
            a[4] = unk_830;
            a[5] = unk_834;
            func_ov003_0221cfdc(unk_81e, &a[0], &a[3], 0, 0, 0);
        } else {
            s32 b[6];
            b[0] = unk_820;
            b[1] = unk_824;
            b[2] = unk_828;
            b[3] = unk_82c;
            b[4] = unk_830;
            b[5] = unk_834;
            func_ov004_0222c4d8(unk_81e, &b[0], &b[3], 0, 0, 0);
        }
    }
}

BOOL Unk_020d6df4::func_02004b64() {
    using namespace nA;
    if (unk_7ec == 0x6d && unk_7d0 != -1) {
        func_020902f8(unk_7d0);
    }
    func_02095314(unk_7fc);
    void *r5 = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(r5) && _ZN12Unk_020cbb1813func_020729bcEj(r5, unk_7fc)) {
        func_02076280(unk_7fc + 8, 0, 0, 0);
    }
    _ZN12Unk_020e45e013func_020b8930Ev(&unk_774);
    _ZN12Unk_020dbe5c13func_02055eecEv(&unk_70c);
    _ZN12Unk_020dbe5c13func_02055eecEv(&unk_738);
    _ZN12Unk_020dbd3413func_02054b14Ev(&unk_4fc);
    _ZN12Unk_020dbd3413func_02054b14Ev(&unk_388);
    _ZN12Unk_020dbd3413func_02054b14Ev(&unk_460);
    _ZN12Unk_020dbd5413func_020546ecEv(&unk_230);
    _ZN12Unk_020dbd3413func_02054b14Ev(&unk_230);
    func_0205e274(&unk_59c);
    func_0205d5bc(&unk_598);
    unk_c88 = 2;
    func_0205db70(&unk_424);
    _ZN12Unk_0205ca9413func_0205cba8Ev(&unk_770);
    func_0205c744(&unk_385);
    func_0209523c(unk_7fc);
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1a)) {
        func_02034d84(0x3f);
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1a);
    }
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0xa)) {
        if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x19)) {
            _ZN12Unk_02003c3013func_02003e50Ev(&unk_838);
        } else {
            _ZN12Unk_02003c3013func_02003e50Ev(&unk_87c);
        }
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0xa);
    }
    if (_ZN12Unk_02006d1413func_0200ec44Ej(this, 0x1b)) {
        _ZN12Unk_02006d1413func_0200ec1cEj(this, 0x1b);
        func_020b78b8();
    }
    return TRUE;
}

namespace nA {
extern "C" void _ZN12Unk_0203442cD1Ev() {}
}

Unk_020d6df4::Unk_020d6df4()
    : unk_81c(0xfff1), unk_81e(0xfff1), unk_8cc(0), unk_8d0(0), unk_8d4(0), unk_8d8(0), unk_8dc(0), unk_8e0(0),
      unk_8f8(0), unk_8fc(0) {
    using namespace nA;
    unk_7fc = 4;
    unk_700 = 0xa1;
    unk_704 = 0x144;
    unk_768 = 0x16f;
    unk_76c = 0x16f;
    unk_80 = 2;
    enum Unk_020d6df4_M1 { Unk_020d6df4_M1_V = -1 };
    Unk_020d6df4_M1 m1 = Unk_020d6df4_M1_V;
    unk_c7c = m1;
    unk_c88 = 2;
    unk_c90 = 2;
    unk_8f4 = 0x93;
    unk_c80 = m1;
    unk_c84 = 0x93;
}

Unk_020d6df4::~Unk_020d6df4() {
    using namespace nA;}

BOOL Unk_020d6df4::vfunc_00() {
    using namespace nA;
    return _ZN12Unk_020d6df413func_0200dde0Ev(this);
}

BOOL Unk_020d6df4::vfunc_18() {
    using namespace nA;
    _ZN12Unk_020d6df413func_02005294Ev(this);
    return TRUE;
}

BOOL Unk_020d6df4::vfunc_24() {
    using namespace nA;
    func_02004ce8();
    return TRUE;
}

BOOL Unk_020d6df4::vfunc_0c() {
    using namespace nA;
    return func_02004b64();
}

void *Unk_020d6df4::operator new(unsigned long size) {
    using namespace nA;
    void *heap = data_021c619c;
    void *p = func_020e8628(heap, size, func_0209433c());
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void Unk_020d6df4::operator delete(void *p) {
    using namespace nA;
    func_020e85fc(data_021c619c, p);
}

namespace nZ {
extern "C" {
extern const u8 data_020c6190[4];
const u8 data_020c6190[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c6194[4];
const u8 data_020c6194[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c6198[4];
const u8 data_020c6198[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c619c[4];
const u8 data_020c619c[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a0[4];
const u8 data_020c61a0[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a4[4];
const u8 data_020c61a4[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61a8[4];
const u8 data_020c61a8[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61ac[4];
const u8 data_020c61ac[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b0[4];
const u8 data_020c61b0[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b4[4];
const u8 data_020c61b4[4] = {
    0x00, 0x01, 0x02, 0x03,
};
extern const u8 data_020c61b8[8];
const u8 data_020c61b8[8] = {
    0x00, 0x09, 0x01, 0x0a, 0x02, 0x0b, 0x03, 0x0c,
};
extern const u8 data_020c61c0[16];
const u8 data_020c61c0[16] = {
    0x3b, 0x00, 0x3a, 0x00, 0x3c, 0x00, 0x3d, 0x00, 0x3b, 0x00, 0x3b, 0x00, 0x3b, 0x00, 0x3b, 0x00,
};
extern const u8 data_020c61d0[32];
const u8 data_020c61d0[32] = {
    0x0d, 0x08, 0x0a, 0x09, 0x0a, 0x07, 0x09, 0x0b, 0x0a, 0x0c, 0x0a, 0x09, 0x08, 0x08, 0x0d, 0x0c,
    0x0a, 0x0e, 0x0d, 0x0c, 0x0b, 0x0e, 0x0c, 0x0c, 0x0e, 0x07, 0x0b, 0x0c, 0x0b, 0x00, 0x00, 0x00,
};
extern const u8 data_020c61f0[32];
const u8 data_020c61f0[32] = {
    0x87, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
    0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6210[44];
const u8 data_020c6210[44] = {
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
extern const u8 data_020c623c[60];
const u8 data_020c623c[60] = {
    0x9a, 0x11, 0x00, 0x00, 0x33, 0x13, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
    0x00, 0x28, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x9a, 0x11, 0x00, 0x00, 0xcd, 0x10, 0x00, 0x00,
};
extern const u8 data_020c6278[148];
const u8 data_020c6278[148] = {
    0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 data_020c630c[148];
const u8 data_020c630c[148] = {
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x01, 0x00, 0x00,
};
extern const u8 data_020c63a0[148];
const u8 data_020c63a0[148] = {
    0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6434[148];
const u8 data_020c6434[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 data_020c64c8[148];
const u8 data_020c64c8[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00,
};
extern const u8 data_020c655c[148];
const u8 data_020c655c[148] = {
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 data_020c65f0[148];
const u8 data_020c65f0[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6684[148];
const u8 data_020c6684[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6718[148];
const u8 data_020c6718[148] = {
    0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00,
};
extern const u8 data_020c67ac[148];
const u8 data_020c67ac[148] = {
    0x09, 0x09, 0x00, 0x00, 0x02, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x06, 0x04,
    0x04, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
    0x00, 0x09, 0x00, 0x00,
};
extern const u8 data_020c6840[148];
const u8 data_020c6840[148] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x05, 0x00, 0x00, 0x05, 0x05, 0x05, 0x00, 0x05,
    0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x03, 0x00, 0x00, 0x00, 0x05, 0x05, 0x05, 0x00, 0x05, 0x05, 0x00, 0x00, 0x05, 0x05, 0x00,
    0x05, 0x04, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x05, 0x00, 0x05, 0x05, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,
};
extern const u8 data_020c68d4[324];
const u8 data_020c68d4[324] = {
    0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00, 0x05, 0x00, 0x06, 0x00, 0x07, 0x00,
    0x08, 0x00, 0x09, 0x00, 0x0a, 0x00, 0x0b, 0x00, 0x0c, 0x00, 0x0d, 0x00, 0x0e, 0x00, 0x0f, 0x00,
    0x10, 0x00, 0x11, 0x00, 0x12, 0x00, 0x13, 0x00, 0x35, 0x00, 0x36, 0x00, 0x37, 0x00, 0x38, 0x00,
    0x39, 0x00, 0x3a, 0x00, 0x14, 0x00, 0x15, 0x00, 0x16, 0x00, 0x17, 0x00, 0x18, 0x00, 0x19, 0x00,
    0x1a, 0x00, 0x1b, 0x00, 0x1c, 0x00, 0x1d, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x20, 0x00, 0x21, 0x00,
    0x22, 0x00, 0x23, 0x00, 0x25, 0x00, 0x26, 0x00, 0x27, 0x00, 0x28, 0x00, 0x2b, 0x00, 0x2c, 0x00,
    0x2d, 0x00, 0x2e, 0x00, 0x3b, 0x00, 0x3c, 0x00, 0x3d, 0x00, 0x3e, 0x00, 0x3f, 0x00, 0x40, 0x00,
    0x2f, 0x00, 0x30, 0x00, 0x31, 0x00, 0x32, 0x00, 0x33, 0x00, 0x34, 0x00, 0x41, 0x00, 0x42, 0x00,
    0x43, 0x00, 0x44, 0x00, 0xad, 0x00, 0xae, 0x00, 0xaf, 0x00, 0xb0, 0x00, 0xb1, 0x00, 0xb2, 0x00,
    0xb3, 0x00, 0xb4, 0x00, 0xb5, 0x00, 0xb6, 0x00, 0xb7, 0x00, 0xb8, 0x00, 0xb9, 0x00, 0xba, 0x00,
    0xbb, 0x00, 0xbc, 0x00, 0xbe, 0x00, 0xbf, 0x00, 0xc0, 0x00, 0xc1, 0x00, 0xc2, 0x00, 0xc3, 0x00,
    0xc4, 0x00, 0xc5, 0x00, 0xc6, 0x00, 0xc7, 0x00, 0xc8, 0x00, 0xc9, 0x00, 0xbd, 0x00, 0xca, 0x00,
    0xcb, 0x00, 0xcc, 0x00, 0xcd, 0x00, 0xce, 0x00, 0xcf, 0x00, 0xd0, 0x00, 0xd1, 0x00, 0xd2, 0x00,
    0xd3, 0x00, 0xd4, 0x00, 0xd5, 0x00, 0xd6, 0x00, 0xd7, 0x00, 0x06, 0x01, 0x07, 0x01, 0x08, 0x01,
    0x47, 0x00, 0x09, 0x01, 0x0a, 0x01, 0x0b, 0x01, 0x0c, 0x01, 0x0d, 0x01, 0x0e, 0x01, 0x0f, 0x01,
    0x10, 0x01, 0x11, 0x01, 0x12, 0x01, 0x13, 0x01, 0x14, 0x01, 0x15, 0x01, 0x16, 0x01, 0x17, 0x01,
    0x18, 0x01, 0x19, 0x01, 0x1a, 0x01, 0x1b, 0x01, 0x1c, 0x01, 0x5b, 0x00, 0x1d, 0x01, 0x1e, 0x01,
    0x1f, 0x01, 0x20, 0x01, 0x21, 0x01, 0x22, 0x01, 0x23, 0x01, 0x24, 0x01, 0x25, 0x01, 0x26, 0x01,
    0x27, 0x01, 0x28, 0x01, 0x29, 0x01, 0x2a, 0x01, 0x2b, 0x01, 0x2c, 0x01, 0x2d, 0x01, 0x2e, 0x01,
    0x2f, 0x01, 0x30, 0x01, 0xda, 0x00, 0x31, 0x01, 0x32, 0x01, 0x33, 0x01, 0x34, 0x01, 0x35, 0x01,
    0x36, 0x01, 0x00, 0x00,
};
extern const u8 data_020c6a18[588];
const u8 data_020c6a18[588] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
extern const u8 data_020c6c64[4];
const u8 data_020c6c64[4] = {
    0x00, 0x20, 0x00, 0x00,
};
u32 data_020d5e34 = 0xccd;
u32 data_020d5e38 = 0xccd;
u32 data_020d5e3c = 0x5;
u32 data_020d5e40 = 0x19a;
u32 data_020d5e44 = 0x5;
u32 data_020d5e48 = 0xccd;
#pragma explicit_zero_data on
u32 data_020d5e4c = 0;
#pragma explicit_zero_data reset
u32 data_020d5e50 = 0x14000;
struct Unk_020d6dd4 {
    void (*f)();
    u32 w[5];
};
void func_02010f88();
Unk_020d6dd4 data_020d6dd4 = {func_02010f88, {0xd0009, 0x2, 0x800, 0x800, 0x2b000}};
char data_020d6ee4[] = "obj_etc_error";
char data_020d6ef4[] = "obj_etc_player";
char data_020d6f04[] = "obj_etc_getinsect";
char data_020d6f18[] = "obj_etc_getfish";
char data_020d6f28[] = "cloth";
char data_020d6f30[] = "skin_pl";
char data_020d6f38[] = "e.0";
char data_020d6f3c[] = "m.0";
char data_020d6f40[] = "hair_pl";
char data_020d6f48[] = "w";
}
}

// ov104: scene overlay (class Unk_ov104_02298170, vtable 0x02298170). Linked as one unit.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov104_02298170;
class Unk_ov092_02291ec8;
class Unk_020dd458;
typedef Unk_ov104_02298170 S;

// Shared symbols whose real argument lists differ from their mangled names: called by name with the object first
extern "C" void _ZN18Unk_ov002_0220455819func_ov002_02202200EP12Unk_020e0d98(void *self, void *p, s32 x);
extern "C" u32 _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(void *self);

extern "C" {
void func_0200402c(s32 a);
void func_02116048(void *src, void *dst, u32 n);
void *func_020e8618(void *heap, u32 n);
void func_020e85fc(void *heap, void *p);
void func_0206f638(s32 a);
s32 func_0206f644();
void func_02065c94(void *p);
void func_02065e70(void *dst, void *src);
void func_02065af0(u32 a);
void func_0206ea2c(void *p);
void func_0206ea3c(u32 a);
s32 func_0206e90c();
s32 func_0206e98c();
void func_0206ecf8(s32 a);
BOOL func_0206ef00();
BOOL func_0206ef0c();
s32 func_02096914(void *p, s32 n);
s32 func_020968e4(void *p, s32 n);
s32 func_02096960(void *p);
void func_02096a9c(void *p);
s32 func_02096a0c(void *p);
s32 func_020969b8(void *p);
s32 func_02096acc(void *p, s32 a, s32 b);
s32 func_02096a50(void *p, s32 a);
void func_020968e0();
void func_02096b74();
s32 func_0209750c();
s32 func_02097868(void *p, s32 a);
void func_02099a98();
s32 func_020991fc();
void func_020020b8(s32 a);
void func_020021a0(s32 a);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_0200261c(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(const char *a, u32 b, s32 c);
void func_020026c4(const char *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void *func_020ed174(void *p);
void func_020ed188(void *p);

void func_ov094_02292380();
void func_ov094_0229238c();
void func_ov094_02292398();
void func_ov094_02292a80(void *p);
void func_ov094_02292aa4(void *p);
void func_ov094_02292acc(void *p);
void func_ov094_02292ae0(void *p);
void func_ov094_02292d1c(void *p, s32 a);
void func_ov094_02292d30(void *p, s32 a);
void func_ov094_02293318(void *p, s32 a, s32 b);
void func_ov094_022932d0(void *p, s32 a, s32 b);
void func_ov094_0229277c(void *p, s32 a);
void func_ov094_0229358c(void *p);
void func_ov094_022935dc(void *p);
void func_ov094_022937a0(void *p);
void func_ov094_02293998(void *p);
void func_ov094_022939a0(void *p);
void func_ov094_022939c0(void *p, s32 a);
s32 func_ov094_02293c1c(void *p);
void func_ov094_02293c58(void *p);
void func_ov094_02293d18(void *p, void *q);
void func_ov094_02293d2c(void *p);
BOOL func_ov094_02293d80(void *p, u32 a);
s32 func_ov094_02293d9c(void *p, u32 a);
s32 func_ov094_02293df8(void *p, u32 a);

BOOL func_ov002_0220125c(void *p);
BOOL func_ov002_0220126c(void *p);
BOOL func_ov002_0220127c(void *p);
BOOL func_ov002_0220128c(void *p);
void func_ov002_022016e4(void *p, s32 a);
void func_ov002_02201700(void *p, s32 a, s32 b);
BOOL func_ov002_022019d0(void *p, s32 a, void *q, u32 b);
BOOL func_ov002_02201a28(void *p);
u32 func_ov002_02201a70(void *p, s32 a);
void func_ov002_02201aa0(void *p, s32 a, s32 b);
void func_ov002_02201b04(void *p);
void func_ov002_02201b58(void *p);
void func_ov002_02202064(void *p, s32 a);
void func_ov002_02202098(void *p, s32 a);
void func_ov002_02203920(void *p);

extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u32 data_021f482c;
extern u8 data_021d735c[];
extern void *data_021c6210;
}

// Main-module helper classes (real symbol names) -------------------------------------------------

class Unk_020dd458 {
public:
    Unk_020dd458();
    ~Unk_020dd458();
    u32 unk_00[0xf4 / 4];
};

// Same 0xf4-byte element object under the name that owns the state accessors
class Unk_02065554 {
public:
    s32 func_02065554();
    s32 func_02065578();
    u32 func_020655d0();
};

class Unk_020cbb18 {
public:
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *buf, u32 n);
    void func_020728d4();
    BOOL func_02072e44();
    u32 unk_00[0x64 / 4];
    u32 unk_64;
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_020660f8 {
public:
    void func_02067a3c(s32 a, void *p);
};
extern "C" Unk_020660f8 *func_02067918(s32 a);

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
};
class Unk_020e1c64 : public Unk_020e2a78 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u32 unk_04[7];
};
class Unk_020940a0 {
public:
    void func_020940d0(Unk_020e2a78 *p);
};
class Unk_0209865c {
public:
    void *func_0209888c();
};
class Unk_02097ff4 {
public:
    BOOL func_02098044(u32 a);
};

struct Unk_0206d1d4_Src;
class Unk_0206d0a0 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d2e0(Unk_0206d1d4_Src *a, void *b, void *c, s32 d);
    void func_0206d394();
    void func_0206d39c(s32 a);
    u32 unk_00[0x210 / 4];
};

class Unk_020e45f8 {
public:
    void func_020b87d0();
};
class Unk_020e4608 : public Unk_020e45f8 {
public:
    Unk_020e4608();
    u32 unk_00[0x38 / 4];
};

class Unk_020e0db4 {
public:
    virtual ~Unk_020e0db4();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    void func_02089ad8(s32 x, s32 y);
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    void func_0208e13c(s32 v);
    void func_0208e288(s32 x, s32 y);
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d538(s32 idx);
    void func_0208d644();
};

// ov002 sub-objects ----------------------------------------------------------------------------

class Unk_ov002_02204468 : public Unk_020e0d98 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();
    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    ~Unk_ov002_02204604();
    void func_ov002_022026c4(s32 x, s32 y, s32 n);
    void func_ov002_022026f4(s32 x, s32 y);
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();
    u32 unk_00[0x18 / 4];
};

class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    void func_ov002_02202844();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a18(s32 a, s32 b, s32 c);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
};
// Same cursor object under the name used by the second group of its methods
class Unk_ov002_0220464c : public Unk_020e100c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 a);
};
class Unk_ov002_02204614 : public Unk_ov002_02202d98 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    u32 unk_04[0x60 / 4];
};

struct Unk_ov002_022013ac_Rec;
class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 a);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014c0(s32 a, s32 b);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 a);
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
};
class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    ~Unk_ov002_02204558();
    void func_ov002_0220229c(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);
    u8 unk_00[0x2f4];
    u8 unk_2f4[0xc];
};

class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    u32 unk_00[0x108 / 4];
};

class Unk_ov002_02204738 : public Unk_020e1098 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();
    BOOL func_ov002_02203e24();
    void func_ov002_02203ec8(s32 a);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 a);
    s32 func_ov002_02203f78(s32 a);
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_ov002_02202fac {
public:
    s32 func_ov002_0220306c();
    BOOL func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 a);
    s32 func_ov002_022030f4(s32 a);
    BOOL func_ov002_02203110(s32 a);
};
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    void func_ov002_022034c4(u8 v);
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();
    u32 unk_00[0x164 / 4];
};

// ov094 sub-objects ----------------------------------------------------------------------------

class Unk_ov094_02294a50 {
public:
    Unk_ov094_02294a50();
    ~Unk_ov094_02294a50();
    u32 unk_00[0xa60 / 4];
};
class Unk_ov094_02294bd4 {
public:
    Unk_ov094_02294bd4();
    ~Unk_ov094_02294bd4();
    void func_ov094_0229405c(s32 a, s32 b, void *p);
    void func_ov094_02294104(s32 a, s32 b);
    void func_ov094_022941a0(s32 a, s32 b);
    BOOL func_ov094_022941ec(s32 a);
    void func_ov094_022941f8(u32 a);
    void func_ov094_022942f4(s32 a);
    void func_ov094_02294318(s32 a, s32 b);
    void *func_ov094_0229433c(s32 a);
    void func_ov094_022943a4(s32 a);
    void func_ov094_022943b0();
    void func_ov094_022943bc(u32 a);
    void func_ov094_022943f8();
    void func_ov094_02294420(void *p, s32 a);
    u32 func_ov094_022945f0(s32 a, s32 b);
    void func_ov094_0229462c();
    void func_ov094_02294644(s32 a);
    u32 unk_00[0x28 / 4];
};
class Unk_ov094_02292d6c {
public:
    Unk_ov094_02292d6c();
    ~Unk_ov094_02292d6c();
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov092_02291ec8 {
public:
    void func_ov092_02291c5c();
    void func_ov092_02291ce4(s32 a, s32 b);
};

// Scene base class (declared in src/ov002/unk_ov002_02200680.cpp)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_02200850(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

typedef void (Unk_ov104_02298170::*Unk_ov104_02298170_Fn)();

// Vtable 0x02298170
class Unk_ov104_02298170 : public Unk_ov002_022044e4 {
public:
    Unk_ov104_02298170()
        : unk_c0(), unk_1b4(), unk_2a8(), unk_2e0(), unk_d40(), unk_d68(), unk_2348(), unk_2408(), unk_2420(), unk_2484(),
          unk_2784(), unk_288c(), unk_2a9c(), unk_2b0c(), unk_3494(), unk_3e1c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov104_02294dfc(u32 mask);
    void func_ov104_02294e0c(u32 mask);
    BOOL func_ov104_02294e1c(u32 mask);
    BOOL func_ov104_02294e30(void *p);
    void func_ov104_02294e8c();
    void func_ov104_02295008();
    u32 func_ov104_022950f8(void *p);
    u32 func_ov104_0229514c(void *p);
    s32 func_ov104_02295284(void *p);
    u32 func_ov104_02295290(void *p);
    u32 func_ov104_02295310(void *p, s32 flag);
    u32 func_ov104_022953e0(void *p);
    BOOL func_ov104_0229545c(void *p);
    void func_ov104_02295490();
    void func_ov104_022954d8();
    void func_ov104_02295534(s32 flag);
    void func_ov104_02295edc(u32 i);
    void func_ov104_02295f18(u32 i);
    void func_ov104_02295f3c(u32 i);
    void func_ov104_02295f94();
    void func_ov104_02295fbc();
    void func_ov104_02295fe8();
    void func_ov104_02296014();
    void func_ov104_02296054();
    void func_ov104_022960b8();
    BOOL func_ov104_02296138();
    void func_ov104_0229617c(u32 i);
    void func_ov104_022961b8();
    void func_ov104_022961dc(u32 i);
    void func_ov104_0229622c();
    BOOL func_ov104_02296250(u32 i);
    BOOL func_ov104_02296290(u32 i);
    void func_ov104_022962c4();
    s32 func_ov104_022962ec(u32 i);
    s32 func_ov104_0229633c(u32 i);
    void * func_ov104_0229638c(u32 i);
    void func_ov104_022963cc(u32 i, void *p);
    BOOL func_ov104_02296408(u32 i);
    u8 func_ov104_02296450(u32 i, s32 a, u32 flag);
    u8 func_ov104_022964ac(u32 i);
    u8 func_ov104_022964cc(u32 i);
    BOOL func_ov104_022964f0(u32 i);
    BOOL func_ov104_02296504(u32 i);
    BOOL func_ov104_02296514(u32 i);
    void func_ov104_02296524();
    u8 func_ov104_02296534();
    u8 func_ov104_02296568();
    void func_ov104_02296588(u32 i, u32 a);
    void func_ov104_022965c0(u32 i, s32 a);
    void func_ov104_02296604(u32 i, u32 a);
    void func_ov104_02296668(u32 i);
    void func_ov104_022966b0(u32 i);
    void func_ov104_022966f8(u32 i);
    void func_ov104_02296790();
    void func_ov104_022967b0();
    void func_ov104_02296800();
    void func_ov104_02296828();
    void func_ov104_02296894();
    void func_ov104_022968fc();
    void func_ov104_02296930();
    void func_ov104_02296950();
    void func_ov104_022969a0();
    void func_ov104_022969dc();
    void func_ov104_02296a14();
    void func_ov104_02296a64();
    void func_ov104_02296aac();
    void func_ov104_02296b00();
    void func_ov104_02296b2c();
    void func_ov104_02296b5c();
    void func_ov104_02296b84();
    void func_ov104_02296bb8();
    void func_ov104_02296c00();
    void func_ov104_02296c64();
    void func_ov104_02296cf0();
    void func_ov104_02296d10();
    void func_ov104_02296da4();
    void func_ov104_02296e48();
    void func_ov104_02296fdc();
    void func_ov104_02297098();
    void func_ov104_022970cc();
    void func_ov104_022971a4();
    void func_ov104_022971ec();
    void func_ov104_02297248();
    void func_ov104_022972f4();
    void func_ov104_02297640();
    void func_ov104_02297678();
    void func_ov104_022976a4();
    void func_ov104_022976e4();
    void func_ov104_02297758();
    void func_ov104_022977b4();
    void func_ov104_02297804();
    void func_ov104_02297864();
    void func_ov104_0229788c();
    void func_ov104_022978ec();
    void func_ov104_02297960();
    void func_ov104_02297af4();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ u32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u16 unk_b0;
    /* 0xb2 */ u16 unk_b2;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 unk_ba;
    /* 0xbb */ u8 unk_bb;
    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ u8 unk_be;
    /* 0xbf */ volatile u8 unk_bf;
    /* 0x0c0 */ Unk_020dd458 unk_c0;
    /* 0x1b4 */ Unk_020dd458 unk_1b4;
    /* 0x2a8 */ Unk_020e4608 unk_2a8[1];
    /* 0x2e0 */ Unk_ov094_02294a50 unk_2e0;
    /* 0xd40 */ Unk_ov094_02294bd4 unk_d40;
    /* 0xd68 */ Unk_ov094_02292d6c unk_d68;
    /* 0x2348 */ Unk_ov002_02204468 unk_2348;
    /* 0x2408 */ Unk_ov002_02204604 unk_2408;
    /* 0x2420 */ Unk_ov002_02204614 unk_2420;
    /* 0x2484 */ Unk_ov002_02204558 unk_2484;
    /* 0x2784 */ Unk_ov002_022040ec unk_2784;
    /* 0x288c */ Unk_0206d0a0 unk_288c;
    /* 0x2a9c */ Unk_ov002_02204738 unk_2a9c;
    /* 0x2b0c */ Unk_020dd458 unk_2b0c[10];
    /* 0x3494 */ Unk_020dd458 unk_3494[10];
    /* 0x3e1c */ Unk_ov002_022046cc unk_3e1c;
};

// Scene registration entry read by main: factory, then two ids
struct Unk_ov104_SceneEntry {
    Unk_ov104_02298170 *(*create)();
    u16 a;
    u16 b;
};

extern "C" {
void func_ov104_02295590(S *s);
void func_ov104_022955c8(S *s);
void func_ov104_02295604(S *s);
void func_ov104_0229560c(S *s);
void func_ov104_0229567c(S *s);
void func_ov104_022956a0(S *s);
BOOL func_ov104_022956c4(S *s, s32 a, s32 b);
void func_ov104_02295748(S *s, s32 a);
void func_ov104_022957ac(S *s, s32 a, s32 b);
void func_ov104_02295884(S *s, s32 a, s32 b);
void func_ov104_02295958(S *s);
void func_ov104_022959a8(S *s, u32 a, s32 b);
void func_ov104_02295a78(S *s);
void func_ov104_02295aa4(S *s, s32 a);
void func_ov104_02295b20(S *s);
void func_ov104_02295b68(S *s, u32 a);
void func_ov104_02295bb0(S *s, u32 a);
void func_ov104_02295bec(S *s);
void func_ov104_02295c0c(S *s);
void func_ov104_02295c2c(S *s);
void func_ov104_02295c4c(S *s);
void func_ov104_02295c80(S *s);
void func_ov104_02295ce4(S *s);
void func_ov104_02295d48(S *s);
void func_ov104_02295d98(S *s);
void func_ov104_02295e0c(S *s);
s32 func_ov104_02295e30(S *s);
s32 func_ov104_02295e40(S *s);
void func_ov104_02295e84(S *s);
void func_ov104_022967e4(S *s);
void func_ov104_02297388(S *s);
void func_ov104_022973b4(S *s);
void func_ov104_02297408(S *s);
void func_ov104_0229741c();
void func_ov104_02297450(S *s);
void func_ov104_02297488(S *s);
void func_ov104_022974c8(S *s);
void func_ov104_022974d0(S *s);
void func_ov104_022974ec(S *s);
void func_ov104_02297538(S *s);
void func_ov104_022975e0(S *s);
void func_ov104_02297600(S *s);
void func_ov104_02297620(S *s);
}

static inline BOOL Unk_ov104_02296fdc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) return TRUE;
    return FALSE;
}

extern "C" Unk_ov104_02298170 *func_ov104_02297ef8();

extern "C" Unk_ov104_02298170 *func_ov104_02297ef8() { return new Unk_ov104_02298170(); }

BOOL Unk_ov104_02298170::vfunc_00() {
    func_ov104_02297538(this);
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_0c() {
    ((Unk_ov092_02291ec8 *)func_020ed174(this))->func_ov092_02291c5c();
    func_ov104_022974ec(this);
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_24() {
    if (!func_ov104_02294e1c(1)) {
        return TRUE;
    }
    unk_2348.vfunc_08();
    if (func_0206ef00()) {
        unk_2420.func_ov002_02202844();
    }
    func_ov104_02296014();
    if (func_ov104_02294e1c(2)) {
        unk_3e1c.func_ov002_022036a4(unk_98);
        s32 t = unk_98 - 0x10;
        func_ov094_022932d0(&unk_2e0, 0, t);
        unk_d40.func_ov094_022941a0(0, t);
        func_ov094_0229277c(&unk_d68, t);
    }
    if (func_ov104_02294e1c(0x200)) {
        unk_d40.func_ov094_02294104(unk_9c, -0x10);
    }
    if (func_ov104_02294e1c(0x80)) {
        unk_2a9c.func_0208e288(0, func_ov002_02200920());
        unk_2a9c.vfunc_08();
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov104_SceneEntry data_ov104_02298020;

extern "C" Unk_ov104_SceneEntry data_ov104_02298020 = {func_ov104_02297ef8, 0x97, 0x9b};

BOOL Unk_ov104_02298170::vfunc_4c() {
    static Unk_ov104_02298170_Fn tbl[11] = {
        &Unk_ov104_02298170::func_ov104_02297960,
        &Unk_ov104_02298170::func_ov104_022978ec,
        &Unk_ov104_02298170::func_ov104_0229788c,
        &Unk_ov104_02298170::func_ov104_02297864,
        &Unk_ov104_02298170::func_ov104_02297804,
        &Unk_ov104_02298170::func_ov104_022977b4,
        &Unk_ov104_02298170::func_ov104_02297758,
        &Unk_ov104_02298170::func_ov104_022976e4,
        &Unk_ov104_02298170::func_ov104_022976a4,
        &Unk_ov104_02298170::func_ov104_02297678,
        &Unk_ov104_02298170::func_ov104_02297640};
    func_ov104_02297488(this);
    (this->*tbl[unk_8c])();
    func_ov104_02297450(this);
    return TRUE;
}

void Unk_ov104_02298170::func_ov104_02297af4() {
    static Unk_ov104_02298170_Fn tbl[29] = {
        &Unk_ov104_02298170::func_ov104_022972f4,
        &Unk_ov104_02298170::func_ov104_02297248,
        &Unk_ov104_02298170::func_ov104_022971ec,
        &Unk_ov104_02298170::func_ov104_022971a4,
        &Unk_ov104_02298170::func_ov104_022970cc,
        &Unk_ov104_02298170::func_ov104_02297098,
        &Unk_ov104_02298170::func_ov104_02296fdc,
        &Unk_ov104_02298170::func_ov104_02296e48,
        &Unk_ov104_02298170::func_ov104_02296da4,
        &Unk_ov104_02298170::func_ov104_02296d10,
        &Unk_ov104_02298170::func_ov104_02296cf0,
        &Unk_ov104_02298170::func_ov104_02296c64,
        &Unk_ov104_02298170::func_ov104_02296c00,
        &Unk_ov104_02298170::func_ov104_02296bb8,
        &Unk_ov104_02298170::func_ov104_02296b84,
        &Unk_ov104_02298170::func_ov104_02296b5c,
        &Unk_ov104_02298170::func_ov104_02296b2c,
        &Unk_ov104_02298170::func_ov104_02296b00,
        &Unk_ov104_02298170::func_ov104_02296aac,
        &Unk_ov104_02298170::func_ov104_02296a64,
        &Unk_ov104_02298170::func_ov104_02296a14,
        &Unk_ov104_02298170::func_ov104_022969dc,
        &Unk_ov104_02298170::func_ov104_022969a0,
        &Unk_ov104_02298170::func_ov104_02296950,
        &Unk_ov104_02298170::func_ov104_02296930,
        &Unk_ov104_02298170::func_ov104_022968fc,
        &Unk_ov104_02298170::func_ov104_02296894,
        &Unk_ov104_02298170::func_ov104_02296828,
        &Unk_ov104_02298170::func_ov104_02296800};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov104_02298170::vfunc_50() {
    func_ov104_022974d0(this);
    func_ov104_02297af4();
    func_ov104_022974c8(this);
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_54() { return TRUE; }

BOOL Unk_ov104_02298170::vfunc_58() { return TRUE; }

BOOL Unk_ov104_02298170::vfunc_5c() {
    u32 r4;
    if (func_ov104_02294e1c(0x400)) {
        func_ov104_02295590(this);
        func_0206ecf8(0);
    } else if (func_ov104_02294e1c(0x800)) {
        if (func_ov104_02294e1c(0x1000)) return TRUE;
        if ((unk_b0 & 4) != 0) {
            func_0206ecf8(0);
        } else {
            func_0206ecf8(1);
        }
        func_ov104_02295534(1);
        func_0206ea3c(unk_b0);
    } else {
        func_0206ecf8(1);
        r4 = 0;
        if (func_02096914(unk_2b0c, 10) <= 0) r4 = 4;
        if (((Unk_02097ff4 *)func_0209750c())->func_02098044(1)) {
            r4 |= func_ov104_022950f8(unk_2b0c);
        }
        r4 |= func_ov104_022953e0(unk_2b0c);
        r4 |= func_ov104_02295310(unk_2b0c, 0);
        if ((r4 & 4) != 0) {
            func_0206ecf8(0);
        } else if ((r4 & 0x10) != 0) {
            func_02096b74();
            r4 |= func_ov104_02295290(unk_2b0c);
            if ((r4 & 0x20) != 0) {
                r4 |= func_ov104_0229514c(unk_2b0c);
            }
        }
        func_ov104_02295534(0);
        func_0206ea3c(r4);
        if (func_0206e98c() == 1 || func_0206e90c() != 0) {
            func_02099a98();
        }
    }
    func_020968e0();
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov104_02298170::vfunc_18() {
    func_ov104_02294e8c();
    Unk_ov002_022044e4::vfunc_18();
}

void Unk_ov104_02298170::func_ov104_02297960() {
    func_ov104_0229741c();
    func_ov104_02297408(this);
    func_ov002_02200a50(1);
}

void Unk_ov104_02298170::func_ov104_022978ec() {
    func_ov104_02297388(this);
    func_ov094_022937a0(&unk_2e0);
    func_ov094_02293d2c(&unk_d40);
    func_ov094_02293d18(&unk_d40, unk_2b0c);
    func_ov104_022962c4();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(2);
    func_ov104_02294e0c(1);
    func_ov104_02294e0c(2);
    func_ov104_02297600(this);
}

void Unk_ov104_02298170::func_ov104_0229788c() {
    u32 r = func_ov002_02200908(0);
    func_ov104_02297600(this);
    if (r != 0) {
        func_ov104_022973b4(this);
        func_ov002_022008e0(2, 0, 2, 0x30);
        func_ov002_02200850(0xc0);
        func_020020b8(4);
        func_ov104_02294e0c(0x200);
        func_ov104_022975e0(this);
        func_ov002_02200a50(3);
    }
}

void Unk_ov104_02298170::func_ov104_02297864() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov104_02296790();
    }
    func_ov104_022975e0(this);
}

void Unk_ov104_02298170::func_ov104_02297804() {
    unk_2348.func_ov002_022006e4(1);
    func_ov104_02295e0c(this);
    if (!func_ov104_02294e1c(0x100)) {
        ((Unk_ov092_02291ec8 *)(void *)func_020ed174(this))->func_ov092_02291ce4(0x44, 1);
    }
    func_ov002_022008c4(2, 0, 2, 0x30);
    func_ov002_02200850(0xc0);
    func_ov002_02200a50(5);
}

void Unk_ov104_02298170::func_ov104_022977b4() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov104_02294dfc(0x200);
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200a50(6);
        func_ov104_02297758();
    } else {
        func_ov104_022975e0(this);
    }
}

void Unk_ov104_02298170::func_ov104_02297758() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov104_02294dfc(2);
        if (func_ov104_02294e1c(0x100)) {
            func_ov002_02200a50(7);
            func_ov104_022976e4();
        } else {
            func_ov104_02294dfc(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov104_02297600(this);
    }
}

void Unk_ov104_02298170::func_ov104_022976e4() {
    void *t = func_ov104_0229638c(unk_b9);
    func_02065af0((u32)t);
    unk_288c.func_0206d2e0((Unk_0206d1d4_Src *)t, (void *)3, (void *)4, 1);
    func_ov002_022008e0(3, 0, 0, 0x30);
    func_020020b8(3);
    func_020020b8(4);
    func_ov104_02297620(this);
    func_ov002_02200a50(8);
    unk_2a9c.func_ov002_02203ec8(0x88);
    func_ov104_02294e0c(0x80);
}

void Unk_ov104_02298170::func_ov104_022976a4() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov002_02200a58(5);
        } else {
            func_ov002_02200a58(9);
        }
    } else {
        func_ov104_02297620(this);
    }
}

void Unk_ov104_02298170::func_ov104_02297678() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov104_02297620(this);
    func_ov002_02200a50(10);
}

void Unk_ov104_02298170::func_ov104_02297640() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(3);
        func_020021a0(4);
        func_ov104_02294dfc(0x80);
        func_ov104_02297960();
    } else {
        func_ov104_02297620(this);
    }
}

void func_ov104_02297620(S *s) {
    s->func_ov002_02200840(3, 0, 0);
    s->func_ov002_02200840(4, 0, 0);
}

void func_ov104_02297600(S *s) {
    s->func_ov002_02200840(6, 0, -16);
    s->unk_98 = s->func_ov002_02200920();
}

void func_ov104_022975e0(S *s) {
    s->func_ov002_02200840(4, 0, -16);
    s->unk_9c = s->func_ov002_02200914();
}

void func_ov104_02297538(S *s) {
    s32 i;
    s->unk_94 = 0;
    func_ov094_022939c0(&s->unk_2e0, 2);
    s->unk_d40.func_ov094_02294644(1);
    func_ov094_02292d30(&s->unk_d68, 6);
    s->unk_b6 = 0x21;
    s->unk_2408.func_ov002_022027a4();
    s->unk_b4 = 0;
    s->unk_b8 = 0xb;
    s->unk_2484.func_ov002_02202310(3, 0, 0);
    s->unk_288c.func_0206d39c(3);
    for (i = 0; i < 10; i++) {
        func_02065c94((u8 *)s->unk_2b0c + i * 0xf4);
    }
    func_ov104_022955c8(s);
    s->unk_bf = 0;
}

void func_ov104_022974ec(S *s) {
    s->func_ov104_02296524();
    func_ov094_02292a80(&s->unk_d68);
    func_ov094_02293998(&s->unk_2e0);
    func_ov002_02201b04(&s->unk_2484);
    s->unk_288c.func_0206d394();
    s->unk_3e1c.func_ov002_02203900();
}

void func_ov104_022974d0(S *s) {
    func_ov104_02297488(s);
    ((Unk_ov002_02204614 *)&s->unk_2420)->vfunc_0c();
}

void func_ov104_022974c8(S *s) {
    func_ov104_02297450(s);
}

void func_ov104_02297488(S *s) {
    s->func_ov104_02296524();
    func_ov094_02292acc(&s->unk_d68);
    func_ov094_022939a0(&s->unk_2e0);
    s->unk_d40.func_ov094_0229462c();
    s->unk_3e1c.func_ov002_02203900();
}

void func_ov104_02297450(S *s) {
    func_ov002_02201b58(&s->unk_2484);
    func_ov094_02292aa4(&s->unk_d68);
    if (s->unk_2348.func_ov002_0220071c()) {
        s->func_ov104_022960b8();
    }
}

void func_ov104_0229741c() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 1);
    func_0200226c(4, 0, 0, 0);
}

void func_ov104_02297408(S *s) {
    func_ov094_02292d1c(&s->unk_d68, 0);
}

void func_ov104_022973b4(S *s) {
    u32 t = data_021f482c;
    func_020026c4("menu/inventory/b_itm_post.bpl", t, 4, 4, 4, 4);
    func_02002654("menu/inventory/b_itm_bg_ltr2.bsc", t, 4);
    func_0200261c("menu/inventory/b_itm_post.bch", t, 4, 0x1e2, 0x1e2, 0x227);
}

void func_ov104_02297388(S *s) {
    func_ov094_02292ae0(&s->unk_d68);
    func_ov002_02203920(&s->unk_3e1c);
    s->unk_3e1c.func_ov002_022034c4(0x65);
}

void Unk_ov104_02298170::func_ov104_022972f4() {
    if (func_ov002_02200a14(1)) {
        func_ov104_022967b0();
    } else if (Both()) {
        s32 r = func_ov104_02296450(data_021ef5f0, data_021ef5ec + 0x10, 1);
        if (r != 0x21) {
            func_ov104_022966f8(r);
        } else if (((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_02203110(9)) {
            func_ov104_022954d8();
        } else if (((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_02203110(7)) {
            func_ov104_02295490();
        }
    }
}

void Unk_ov104_02298170::func_ov104_02297248() {
    if (data_021f4770 == 0) {
        if (func_ov104_02294e1c(4)) {
            func_ov002_02200a58(3);
            func_ov104_02297af4();
        } else {
            func_ov002_02200a58(0);
            unk_2348.func_ov002_022006a4(0x3c);
        }
    } else {
        if (func_ov104_02294e1c(4)) {
            if (func_ov104_02296138()) {
                func_ov104_022966b0(unk_b5);
                return;
            }
            if (unk_2348.func_ov002_02200680()) {
                if (unk_bf != 0) {
                    unk_bf = unk_bf - 1;
                } else {
                    func_ov104_022959a8(this, unk_b5, 1);
                    func_ov002_02200a58(2);
                }
                return;
            }
        }
        unk_2348.func_ov002_022006c0();
    }
}

void Unk_ov104_02298170::func_ov104_022971ec() {
    if (data_021f4770 == 0) {
        func_ov002_02200a58(6);
    } else if (func_ov104_02294e1c(4)) {
        if (func_ov104_02296138()) {
            func_ov104_022966b0(unk_b5);
            func_ov002_02202064(&unk_2484, 0);
            unk_2348.func_ov002_022006e4(1);
        }
    }
}

void Unk_ov104_02298170::func_ov104_022971a4() {
    if (unk_2348.func_ov002_02200680()) {
        if (unk_bf != 0) {
            unk_bf = unk_bf - 1;
        } else {
            func_ov104_022959a8(this, unk_b5, 1);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov104_02298170::func_ov104_022970cc() {
    s32 p, t;
    func_ov104_02295fe8();
    func_ov104_022961b8();
    p = unk_a8 + 8;
    t = func_ov104_02296450(p, unk_ac + 0x18, 0);
    if ((func_ov104_02296514(t) && func_ov104_02296504(unk_b7))
        || (func_ov104_02296504(t) && func_ov104_02296514(unk_b7))) {
        if (func_ov104_02296250(t) == 0) {
            t = 0x21;
        }
    }
    if (t != 0x21) {
        if (data_021f4770 == 0) {
            if (func_ov104_02296290(t) != 0 || func_ov104_02296408(t) == 0) {
                func_ov104_022965c0(unk_b7, p);
            } else {
                func_ov094_02292398();
                func_ov104_02296790();
            }
        } else {
            func_ov104_0229617c(t);
        }
    } else if (data_021f4770 == 0) {
        func_ov104_022965c0(unk_b7, p);
    }
}

void Unk_ov104_02298170::func_ov104_02297098() {
    if (func_ov002_02200a14(1)) {
        func_ov002_02200a58(9);
    } else {
        if (unk_2a9c.func_ov002_02203e24()) {
            func_ov104_0229567c(this);
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296fdc() {
    if (((Unk_ov002_022013ac *)&unk_2484)->func_ov002_022017b4()) {
        if (func_ov002_02200a14(1)) {
            func_ov104_02295a78(this);
        } else {
            if (Unk_ov104_02296fdc_Both()) {
                s32 t = ((Unk_ov002_022013ac *)&unk_2484)->func_ov002_022014c0(data_021ef5f0, data_021ef5ec);
                if (t >= 0) {
                    if (func_ov104_02294e1c(0x8000) == 0 || t != 0) {
                        u32 r;
                        unk_bc = ((u8 *)this + 0x277d)[t];
                        r = 1;
                        if (unk_bc == 2) {
                            r = 0;
                            func_0200402c(0x24);
                        }
                        func_ov002_02201aa0(&unk_2484, t, r);
                        func_ov002_02200a58(0x17);
                    }
                }
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296e48() {
    if (func_ov002_022009d4()) {
        func_ov104_022967e4(this);
        unk_2348.func_ov002_022006e4(1);
    } else {
        s32 v = func_ov002_022009c8();
        if (func_ov104_022956c4(this, v, 0)) {
            func_ov104_02296054();
            func_ov104_02295d98(this);
            unk_2348.func_ov002_022006e4(0);
        } else {
            if (func_ov104_02296290(unk_b8) != 0) goto tail;
            {
                u32 k = data_021f47d8[1];
                if (k & 1) {
                    if (func_ov104_02296514(unk_b8) || func_ov104_02296504(unk_b8)) {
                        if (func_ov104_02296250(unk_b8) == 0) {
                            func_ov104_022959a8(this, unk_b8, 0);
                        }
                    } else if (func_ov104_022964f0(unk_b8)) {
                        func_ov104_02295c0c(this);
                    }
                } else if (k & 0x800) {
                    if (func_ov104_02296514(unk_b8) || func_ov104_02296504(unk_b8)) {
                        if (func_ov104_02296250(unk_b8) == 0) {
                            s32 r = func_ov104_02296514(unk_b8) ? func_ov104_02296534() : func_ov104_02296568();
                            if (r != 0x21) {
                                func_ov104_02296588(unk_b8, r);
                                unk_2348.func_ov002_022006e4(1);
                            }
                        }
                    }
                } else {
                    goto tail;
                }
            }
            return;
tail:
            {
                u32 k = data_021f47d8[1];
                if (k & 2) {
                    func_ov104_02295e0c(this);
                    func_ov104_02295490();
                    unk_2348.func_ov002_022006e4(0);
                } else if (k & 8) {
                    func_ov104_02295e0c(this);
                    func_ov104_022954d8();
                    unk_2348.func_ov002_022006e4(0);
                } else {
                    unk_2348.func_ov002_022006c0();
                }
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296da4() {
    if (func_ov104_022956c4(this, func_ov002_022009c8(), 1)) {
        func_ov104_02296054();
        func_ov104_02295d98(this);
        unk_2348.func_ov002_022006e4(0);
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            if (func_ov104_02296290(unk_b8) == 0) {
                if (func_ov104_02296250(unk_b8)) {
                    func_ov104_02295bb0(this, unk_b8);
                } else {
                    func_ov104_02295b68(this, unk_b8);
                }
            }
        } else if (k & 2) {
            func_ov104_02295bb0(this, unk_b7);
        } else {
            func_ov104_02295fbc();
            unk_2348.func_ov002_022006c0();
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296d10() {
    if (unk_2420.func_0208d534() == 0) {
        s32 a = unk_2a9c.func_ov002_02203f78(1);
        s32 b = unk_2a9c.func_ov002_02203f28(1);
        unk_2420.func_ov002_02202a40(a, b);
        ((Unk_ov002_0220464c *)&unk_2420)->func_ov002_02202d00(1);
    }
    if (func_ov002_022009d4()) {
        func_ov104_02295e0c(this);
        func_ov002_02200a58(5);
    } else {
        u32 k = data_021f47d8[1];
        if ((k & 1) || (k & 2)) {
            ((Unk_ov002_0220464c *)&unk_2420)->func_ov002_02202b68();
            func_ov002_02200a58(10);
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296cf0() {
    if (unk_2420.func_0208d4fc()) {
        func_ov104_0229567c(this);
    }
}

void Unk_ov104_02298170::func_ov104_02296c64() {
    if (func_ov002_022009d4()) {
        func_ov104_02295a78(this);
    } else {
        s32 v = func_ov002_022009c8();
        u8 f = (u8)func_ov104_02294e1c(0x8000);
        if (func_ov002_022019d0(&unk_2484, v, &unk_bd, f)) {
            func_ov104_02295d48(this);
        } else {
            u32 k = data_021f47d8[1];
            if (k & 1) {
                ((Unk_ov002_0220464c *)&unk_2420)->func_ov002_02202b68();
                func_ov002_02200a58(0xc);
            } else if (k & 2) {
                func_ov104_02295ce4(this);
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296c00() {
    if (unk_2420.func_0208d4fc()) {
        u32 r;
        unk_bc = ((u8 *)this + 0x277d)[unk_bd];
        r = 1;
        if (unk_bc == 2) {
            r = 0;
            func_0200402c(0x24);
        }
        func_ov002_02201aa0(&unk_2484, unk_bd, r);
        func_ov002_02200a58(0x17);
    }
}

void Unk_ov104_02298170::func_ov104_02296bb8() {
    if (unk_2420.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_bb);
        if (unk_bb == 7) {
            func_ov104_022961dc(unk_b8);
        }
        func_ov104_02297af4();
    }
    func_ov104_02295fbc();
}

void Unk_ov104_02298170::func_ov104_02296b84() {
    if (unk_2420.func_0208d4fc()) {
        if (unk_b8 == 0x1f) {
            func_ov104_022954d8();
        } else {
            func_ov104_02295490();
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296b5c() {
    if (unk_2420.func_0208d4fc()) {
        func_ov104_02295c2c(this);
        func_ov002_02200a58(7);
    }
}

void Unk_ov104_02298170::func_ov104_02296b2c() {
    if (unk_2420.func_ov002_02202928()) {
        func_ov104_02296668(unk_b8);
        func_ov002_02200a58(0x11);
    }
}

void Unk_ov104_02298170::func_ov104_02296b00() {
    if (unk_2420.func_0208d4fc()) {
        func_ov002_02200a58(unk_bb);
    }
    func_ov104_02295fbc();
}

void Unk_ov104_02298170::func_ov104_02296aac() {
    if (unk_2420.func_ov002_02202928() == 0) {
        u32 a = unk_ba;
        if (unk_b8 == a) {
            func_ov104_02296408(a);
            func_ov104_02296054();
            func_ov002_02200a58(7);
            func_ov094_02292398();
        } else {
            func_ov104_02296604(a, 4);
        }
    } else {
        func_ov104_02295fbc();
    }
}

void Unk_ov104_02298170::func_ov104_02296a64() {
    if (unk_2420.func_ov002_022028fc() == 0) {
        func_ov104_02295edc(unk_ba);
        func_ov104_02294e0c(0x40);
        func_ov002_02200a58(0x14);
        func_ov104_02296054();
    } else {
        func_ov002_02200a58(7);
    }
}

void Unk_ov104_02298170::func_ov104_02296a14() {
    if (unk_2420.func_0208d4fc()) {
        func_ov002_02200a58(unk_bb);
    }
    if (unk_2420.func_ov002_02202928()) {
        if (func_ov104_02294e1c(0x40)) {
            func_ov104_02294dfc(0x40);
            func_ov094_02292380();
        }
        func_ov104_02295fbc();
    }
}

void Unk_ov104_02298170::func_ov104_022969dc() {
    if (unk_2408.func_ov002_02202718()) {
        func_ov104_02295f18(unk_b7);
        func_ov104_02296790();
        func_ov094_02292398();
    } else {
        func_ov104_02295f94();
    }
}

void Unk_ov104_02298170::func_ov104_022969a0() {
    if (((Unk_ov002_022013ac *)&unk_2484)->func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov104_02295c80(this);
            func_ov002_02200a58(0xb);
        } else {
            func_ov002_02200a58(6);
        }
    }
}

void Unk_ov104_02298170::func_ov104_02296950() {
    if (func_ov002_02201a28(&unk_2484)) {
        func_ov002_02202064(&unk_2484, 0);
        unk_2348.func_ov002_022006e4(1);
        if (unk_2420.func_0208d534()) {
            func_ov104_02295c4c(this);
        }
        func_ov002_02200a58(0x18);
    }
}

void Unk_ov104_02298170::func_ov104_02296930() {
    if (((Unk_ov002_022013ac *)&unk_2484)->func_ov002_022017a4()) {
        func_ov104_02295b20(this);
    }
}

void Unk_ov104_02298170::func_ov104_022968fc() {
    if (unk_2784.func_ov002_02204234(0)) {
        func_ov002_02200a58(unk_bb);
        unk_2420.func_0208d644();
    }
}

void Unk_ov104_02298170::func_ov104_02296894() {
    if (unk_2a9c.func_ov002_02203f08()) {
        if (unk_2420.func_0208d534()) {
            s32 a = unk_2a9c.func_ov002_02203f78(1);
            s32 b = unk_2a9c.func_ov002_02203f28(1);
            unk_2420.func_ov002_02202a40(a, b);
        }
    } else {
        func_ov104_02295e0c(this);
        func_ov002_02200a50(9);
        func_ov002_02200a60(1);
    }
}

void Unk_ov104_02298170::func_ov104_02296828() {
    if (((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_0220308c()) {
        if (unk_2420.func_0208d534()) {
            s32 a = ((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_0220306c();
            s32 b = ((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_022030f4(-1);
            s32 c = ((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_022030b8(-1);
            unk_2420.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov104_02295e0c(this);
        func_ov002_02200a60(1);
    }
}

void Unk_ov104_02298170::func_ov104_02296800() {
    if (func_ov094_02293c1c(&unk_d40)) {
        unk_b4 = 0;
        func_ov104_02296790();
    }
}

void func_ov104_022967e4(S *s) {
    func_ov104_02295e0c(s);
    s->func_ov104_0229622c();
    s->func_ov002_02200a58(0);
}

void Unk_ov104_02298170::func_ov104_022967b0() {
    unk_b6 = 0x21;
    func_ov104_02295e84(this);
    func_ov002_02200980();
    func_ov104_02296054();
    func_ov002_02200a58(7);
    func_ov104_022961dc(unk_b8);
}

void Unk_ov104_02298170::func_ov104_02296790() {
    if (func_0206ef0c()) {
        func_ov104_022967e4(this);
    } else {
        func_ov104_022967b0();
    }
}

void Unk_ov104_02298170::func_ov104_022966f8(u32 i) {
    unk_b5 = i;
    func_ov002_02200a58(1);
    u32 gx = data_021ef5f0;
    u32 gy = data_021ef5ec;
    unk_a0 = func_ov104_0229633c(unk_b5) - gx;
    unk_a4 = func_ov104_022962ec(unk_b5) - gy;
    unk_b6 = i;
    unk_2348.func_ov002_022006b8();
    unk_2348.func_ov002_022006c0();
    unk_bf = 2;
    if (func_ov104_02296290(i)) {
        func_ov104_02294dfc(4);
    } else {
        func_ov104_02294e0c(4);
        func_ov094_0229238c();
    }
}

void Unk_ov104_02298170::func_ov104_022966b0(u32 i) {
    unk_b7 = i;
    unk_2348.func_ov002_022006e4(1);
    func_ov104_02295f3c(i);
    if (unk_b4 == 1) {
        func_ov002_02200a58(4);
    }
    func_ov104_02295fe8();
    func_ov094_02292380();
}

void Unk_ov104_02298170::func_ov104_02296668(u32 i) {
    unk_b7 = i;
    unk_2348.func_ov002_022006e4(1);
    func_ov104_02295f3c(i);
    if (unk_b4 == 1) {
        unk_bb = 8;
    }
    func_ov104_02295fbc();
    func_ov094_02292380();
}

void Unk_ov104_02298170::func_ov104_02296604(u32 i, u32 a) {
    unk_b7 = i;
    unk_2408.func_ov002_022026f4(unk_a8, unk_ac);
    s32 x = func_ov104_0229633c(i);
    s32 y = func_ov104_022962ec(i);
    unk_2408.func_ov002_022026c4(x, y, a);
    unk_2408.func_ov002_02202718();
    func_ov104_02295f94();
    func_ov002_02200a58(0x15);
}

void Unk_ov104_02298170::func_ov104_022965c0(u32 i, s32 a) {
    u32 r = 0x21;
    if (a >= 0xc0) {
        if (func_ov104_02296504(i)) {
            r = func_ov104_02296568();
        }
    } else {
        if (func_ov104_02296514(i)) {
            r = func_ov104_02296534();
        }
    }
    if (r != 0x21) {
        i = r;
    }
    func_ov104_02296604(i, 4);
}

void Unk_ov104_02298170::func_ov104_02296588(u32 i, u32 a) {
    func_ov104_02295f3c(i);
    unk_a8 = func_ov104_0229633c(i);
    unk_ac = func_ov104_022962ec(i);
    func_ov104_02296604(a, 4);
}

u8 Unk_ov104_02298170::func_ov104_02296568() {
    s32 r = func_020991fc();
    if (r == -1) {
        return 0x21;
    }
    return r + 0xb;
}

u8 Unk_ov104_02298170::func_ov104_02296534() {
    u8 *p = (u8 *)unk_2b0c;
    s32 i;
    for (i = 0; i < 10; p += 0xf4, i++) {
        if (((Unk_02065554 *)p)->func_02065578() == 0) {
            return i + 0x15;
        }
    }
    return 0x21;
}

void Unk_ov104_02298170::func_ov104_02296524() {
    unk_2a8->func_020b87d0();
}

BOOL Unk_ov104_02298170::func_ov104_02296514(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov104_02298170::func_ov104_02296504(u32 i) {
    if (i >= 0x15 && i <= 0x1e) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov104_02298170::func_ov104_022964f0(u32 i) {
    if ((u8)(i + 0xe1) <= 1) {
        return TRUE;
    }
    return FALSE;
}

u8 Unk_ov104_02298170::func_ov104_022964cc(u32 i) {
    if (i >= 0xb && i <= 0x14) {
        return i - 0xb;
    }
    if (i >= 0x15 && i <= 0x1e) {
        return i + 0x18;
    }
    return 0;
}

u8 Unk_ov104_02298170::func_ov104_022964ac(u32 i) {
    if (i <= 9) {
        return i + 0xb;
    }
    if (i >= 0x2d && i <= 0x36) {
        return i - 0x18;
    }
    return 0x21;
}

u8 Unk_ov104_02298170::func_ov104_02296450(u32 i, s32 a, u32 flag) {
    u32 r = _ZN18Unk_ov094_02294bd419func_ov094_02294610Eii(&unk_d40);
    if (r == 0x37) {
        r = unk_d40.func_ov094_022945f0(i, a);
    }
    if (r != 0x37) {
        if (flag != 0) {
            if (func_ov094_02293d80(&unk_d40, r) != 0) {
                return 0x21;
            }
        }
        return func_ov104_022964ac(r);
    }
    return 0x21;
}

BOOL Unk_ov104_02298170::func_ov104_02296408(u32 i) {
    if (func_ov104_02296250(i) == 0) {
        func_02065e70(&unk_1b4, func_ov104_0229638c(i));
        func_ov104_022963cc(unk_b7, &unk_1b4);
    }
    func_ov104_02295f18(i);
    return TRUE;
}

void Unk_ov104_02298170::func_ov104_022963cc(u32 i, void *p) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        unk_d40.func_ov094_02294318(func_ov104_022964cc(i), (s32)p);
    }
}

void * Unk_ov104_02298170::func_ov104_0229638c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return unk_d40.func_ov094_0229433c(func_ov104_022964cc(i));
    } else {
        return 0;
    }
}

s32 Unk_ov104_02298170::func_ov104_0229633c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293df8(&unk_d40, func_ov104_022964cc(i));
    } else {
        if (i == 0x1f) {
            return 0xbc;
        }
        if (i == 0x20) {
            return 0x74;
        }
        return 0;
    }
}

s32 Unk_ov104_02298170::func_ov104_022962ec(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293d9c(&unk_d40, func_ov104_022964cc(i)) - 0x10;
    } else {
        if ((u8)(i + 0xe1) <= 1) {
            return 0xb6;
        }
        return 0;
    }
}

void Unk_ov104_02298170::func_ov104_022962c4() {
    func_ov094_02293318(&unk_2e0, 0, 0xe);
    unk_d40.func_ov094_022941f8(0xe);
}

BOOL Unk_ov104_02298170::func_ov104_02296290(u32 i) {
    if (func_ov104_02296514(i)) {
        return unk_d40.func_ov094_022941ec(func_ov104_022964cc(i));
    } else {
        return FALSE;
    }
}

BOOL Unk_ov104_02298170::func_ov104_02296250(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        return func_ov094_02293d80(&unk_d40, func_ov104_022964cc(i));
    } else {
        return TRUE;
    }
}

void Unk_ov104_02298170::func_ov104_0229622c() {
    func_ov094_022935dc(&unk_2e0);
    unk_d40.func_ov094_022943f8();
}

void Unk_ov104_02298170::func_ov104_022961dc(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        unk_d40.func_ov094_022943bc(func_ov104_022964cc(i));
        func_ov094_022935dc(&unk_2e0);
    } else {
        func_ov104_0229622c();
    }
}

void Unk_ov104_02298170::func_ov104_022961b8() {
    func_ov094_0229358c(&unk_2e0);
    unk_d40.func_ov094_022943b0();
}

void Unk_ov104_02298170::func_ov104_0229617c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        unk_d40.func_ov094_022943a4(func_ov104_022964cc(i));
    }
}

BOOL Unk_ov104_02298170::func_ov104_02296138() {
    s32 d = data_021ef5f8 - data_021ef5f0;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    d = data_021ef5f4 - data_021ef5ec;
    if (d < 0) d = -d;
    if (d > 8) return TRUE;
    return FALSE;
}

void Unk_ov104_02298170::func_ov104_022960b8() {
    s32 x = func_ov104_0229633c(unk_b6) - 0x6d;
    s32 y = func_ov104_022962ec(unk_b6) - 0x78;
    if (func_0206ef00()) {
        y -= 8;
    }
    unk_2348.func_02089ad8(x, y);
    if (func_ov104_02296514(unk_b6) || func_ov104_02296504(unk_b6)) {
        unk_d40.func_ov094_02294420(&unk_2348, func_ov104_022964cc(unk_b6));
    }
}

void Unk_ov104_02298170::func_ov104_02296054() {
    if (func_ov104_02296514(unk_b8) || func_ov104_02296504(unk_b8)) {
        if (func_ov104_02296250(unk_b8)) {
            unk_2348.func_ov002_022006b0();
        } else {
            unk_b6 = unk_b8;
            unk_2348.func_ov002_022006b8();
        }
    } else {
        unk_2348.func_ov002_022006b0();
    }
}

void Unk_ov104_02298170::func_ov104_02296014() {
    if (func_ov104_02294e1c(0x40) == 0) {
        if (unk_b4 != 0) {
            if (unk_b4 == 1) {
                unk_d40.func_ov094_0229405c(unk_a8, unk_ac, &unk_c0);
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02295fe8() {
    unk_a8 = unk_a0 + data_021ef5f0;
    unk_ac = unk_a4 + data_021ef5ec;
}

void Unk_ov104_02298170::func_ov104_02295fbc() {
    unk_a8 = unk_2420.func_ov002_022028c8() - 2;
    unk_ac = unk_2420.func_ov002_022028a0() - 4;
}

void Unk_ov104_02298170::func_ov104_02295f94() {
    unk_a8 = unk_2408.func_ov002_02202710();
    unk_ac = unk_2408.func_ov002_02202708();
}

void Unk_ov104_02298170::func_ov104_02295f3c(u32 i) {
    if (func_ov104_02296514(i) || func_ov104_02296504(i)) {
        u32 t = func_ov104_022964cc(i);
        unk_b4 = 1;
        func_02065e70(&unk_c0, unk_d40.func_ov094_0229433c(t));
        unk_d40.func_ov094_022942f4(t);
    }
}

void Unk_ov104_02298170::func_ov104_02295f18(u32 i) {
    if (unk_b4 == 1) {
        func_ov104_022963cc(i, &unk_c0);
    }
    unk_b4 = 0;
}

void Unk_ov104_02298170::func_ov104_02295edc(u32 i) {
    if (unk_b4 == 1) {
        func_02065e70(&unk_1b4, &unk_c0);
        func_ov104_02295f3c(i);
        func_ov104_022963cc(i, &unk_1b4);
    }
}

void func_ov104_02295e84(S *s) {
    s32 r4 = func_ov104_02295e40(s);
    s->unk_2420.func_ov002_02202a40(r4, func_ov104_02295e30(s));
    if (s->func_ov104_022964f0(s->unk_b8)) {
        ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(7);
    } else {
        ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(1);
    }
    func_ov104_02295c2c(s);
}

s32 func_ov104_02295e40(S *s) {
    s32 r4 = s->func_ov104_0229633c(s->unk_b8);
    if (s->func_ov104_02294e1c(0x20)) {
        r4 += 0x100;
    } else if (s->func_ov104_02294e1c(0x10)) {
        r4 -= 0x100;
    }
    r4 += 8;
    return r4;
}

s32 func_ov104_02295e30(S *s) {
    return s->func_ov104_022962ec(s->unk_b8);
}

void func_ov104_02295e0c(S *s) {
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(0);
    ((Unk_ov002_02204614 *)&s->unk_2420)->vfunc_0c();
}

void func_ov104_02295d98(S *s) {
    s32 r5;
    if (s->func_ov104_02294e1c(8)) {
        r5 = func_ov104_02295e40(s);
        s->unk_2420.func_ov002_02202a40(r5, func_ov104_02295e30(s));
        s->func_ov104_02294dfc(8);
    } else {
        r5 = func_ov104_02295e40(s);
        s->unk_2420.func_ov002_022029e8(r5, func_ov104_02295e30(s), 3, 1);
        s->unk_bb = s->unk_8d;
        s->func_ov002_02200a58(0xd);
    }
}

void func_ov104_02295d48(S *s) {
    s32 r4 = ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_022014a4();
    s->unk_2420.func_ov002_02202a18(r4, ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_02201498(s->unk_bd), 2);
    s->unk_bb = s->unk_8d;
    s->func_ov002_02200a58(0xd);
}

void func_ov104_02295ce4(S *s) {
    s32 r4;
    s->unk_bc = 4;
    s->unk_bd = func_ov002_02201a70(&s->unk_2484, 1);
    r4 = ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_022014a4();
    s->unk_2420.func_ov002_02202a40(r4, ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_02201498(s->unk_bd));
    s->unk_2420.func_0208d538(8);
    s->func_ov002_02200a58(0x17);
}

void func_ov104_02295c80(S *s) {
    s32 r4;
    if (s->func_ov104_02294e1c(0x8000)) {
        s->unk_bd = 1;
    } else {
        s->unk_bd = 0;
    }
    r4 = ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_022014a4();
    s->unk_2420.func_ov002_02202a40(r4, ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_02201498(s->unk_bd));
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(7);
}

void func_ov104_02295c4c(S *s) {
    s32 r4 = func_ov104_02295e40(s);
    s->unk_2420.func_ov002_02202a40(r4, func_ov104_02295e30(s));
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(1);
}

void func_ov104_02295c2c(S *s) {
    s->unk_2420.func_ov002_02202a78();
    ((Unk_ov002_02204614 *)&s->unk_2420)->vfunc_0c();
}

void func_ov104_02295c0c(S *s) {
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202b68();
    s->func_ov002_02200a58(0xe);
}

void func_ov104_02295bec(S *s) {
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(4);
    s->func_ov002_02200a58(0x10);
}

void func_ov104_02295bb0(S *s, u32 a) {
    s->unk_2348.func_ov002_022006e4(1);
    s->unk_ba = a;
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(5);
    s->func_ov002_02200a58(0x12);
}

void func_ov104_02295b68(S *s, u32 a) {
    s->unk_2348.func_ov002_022006e4(1);
    s->unk_bb = s->unk_8d;
    s->unk_ba = a;
    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202d00(6);
    s->func_ov002_02200a58(0x13);
}

void func_ov104_02295b20(S *s) {
    switch (s->unk_bc) {
    case 0: func_ov104_02295bec(s); break;
    case 1: func_ov104_022956a0(s); break;
    case 2: func_ov104_0229560c(s); break;
    case 3: func_ov104_02295604(s); break;
    case 4:
    default: s->func_ov104_02296790(); break;
    }
}

void func_ov104_02295aa4(S *s, s32 a) {
    s32 r6, r2;
    ((Unk_ov002_022013ac *)&s->unk_2484)->func_ov002_0220160c((Unk_ov002_022013ac_Rec *)s->unk_2484.unk_2f4, s->func_ov104_02294e1c(0x8000));
    r6 = s->func_ov104_0229633c(s->unk_b9);
    r2 = s->func_ov104_022962ec(s->unk_b9);
    if (a != 0) {
        _ZN18Unk_ov002_0220455819func_ov002_02202200EP12Unk_020e0d98(&s->unk_2484, &s->unk_2348, r2);
    } else {
        s->unk_2484.func_ov002_0220229c(r6, r2);
    }
    func_ov002_02202098(&s->unk_2484, 0);
    s->func_ov002_02200a58(0x16);
}

void func_ov104_02295a78(S *s) {
    s->unk_bc = 4;
    func_ov104_02295c4c(s);
    func_ov002_02202064(&s->unk_2484, 0);
    s->func_ov002_02200a58(0x18);
}

void func_ov104_022959a8(S *s, u32 a, s32 b) {
    void *r7;
    s32 r5;
    s->func_ov104_02294dfc(0x8000);
    s->unk_b9 = a;
    func_ov002_022016e4(s->unk_2484.unk_2f4, 4);
    r7 = s->func_ov104_0229638c(a);
    if (func_0206ef00()) {
        func_ov002_02201700(s->unk_2484.unk_2f4, 0, 0);
    }
    r5 = ((Unk_02065554 *)r7)->func_02065578();
    if (r5 != 0) {
        if (r5 == 7) {
            func_ov002_02201700(s->unk_2484.unk_2f4, 0x17, 1);
        } else {
            func_ov002_02201700(s->unk_2484.unk_2f4, 0x14, 1);
        }
    }
    if (((Unk_02065554 *)r7)->func_020655d0() == 0xfff1) {
        if (r5 == 3 || r5 == 6 || r5 == 1 || r5 == 4) {
            func_ov002_02201700(s->unk_2484.unk_2f4, 0x15, 3);
        }
    }
    func_ov002_02201700(s->unk_2484.unk_2f4, 2, 4);
    func_ov104_02295e0c(s);
    if (b == 0) {
        s->unk_2348.func_ov002_022006e4(1);
    }
    func_ov104_02295aa4(s, b);
}

void func_ov104_02295958(S *s) {
    s->func_ov104_02294e0c(0x8000);
    func_ov002_022016e4(s->unk_2484.unk_2f4, 4);
    func_ov002_02201700(s->unk_2484.unk_2f4, 0x1a, 4);
    func_ov002_02201700(s->unk_2484.unk_2f4, 0x15, 2);
    func_ov002_02201700(s->unk_2484.unk_2f4, 0x19, 4);
    func_ov104_02295aa4(s, 0);
}

void func_ov104_02295884(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_b8 - 0xb;
    s32 r6 = r4 >> 1;
    if (func_ov002_0220126c((void *)a)) {
        if ((r4 & 1) > 0) {
            s->unk_b8 = s->unk_b8 - 1;
        } else {
            s->unk_b8 = r6 * 2 + 0x16;
            return;
        }
    } else if (func_ov002_0220125c((void *)a)) {
        if ((r4 & 1) < 1) s->unk_b8 = s->unk_b8 + 1;
    }
    if (s->func_ov104_02296514(s->unk_b8)) {
        if (s->func_ov104_02294e1c(0x30) == 0) {
            if (func_ov002_0220128c((void *)a)) {
                if (r6 > 0) s->unk_b8 = s->unk_b8 - 2;
            } else if (func_ov002_0220127c((void *)a)) {
                if (r6 < 4) {
                    s->unk_b8 = s->unk_b8 + 2;
                } else if (b == 0) {
                    s->unk_b8 = 0x1f;
                    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void func_ov104_022957ac(S *s, s32 a, s32 b) {
    s32 r4 = s->unk_b8 - 0x15;
    s32 r6 = 0;
    while (r4 >= 2) {
        r6++;
        r4 -= 2;
    }
    if (func_ov002_0220126c((void *)a)) {
        if (r4 > 0) s->unk_b8 = s->unk_b8 - 1;
    } else if (func_ov002_0220125c((void *)a)) {
        if (r4 < 1) {
            s->unk_b8 = s->unk_b8 + 1;
        } else {
            s->unk_b8 = r6 * 2 + 0xb;
            return;
        }
    }
    if (s->func_ov104_02296504(s->unk_b8)) {
        if (s->func_ov104_02294e1c(0x30) == 0) {
            if (func_ov002_0220128c((void *)a)) {
                if (r6 > 0) s->unk_b8 = s->unk_b8 - 2;
            } else if (func_ov002_0220127c((void *)a)) {
                if (r6 < 4) {
                    s->unk_b8 = s->unk_b8 + 2;
                } else if (b == 0) {
                    s->unk_b8 = 0x20;
                    ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202ca0();
                }
            }
        }
    }
}

void func_ov104_02295748(S *s, s32 a) {
    if (func_ov002_0220126c((void *)a)) {
        s->unk_b8 = 0x20;
    } else if (func_ov002_0220125c((void *)a)) {
        s->unk_b8 = 0x1f;
    }
    if (func_ov002_0220128c((void *)a)) {
        ((Unk_ov002_0220464c *)&s->unk_2420)->func_ov002_02202c40();
        if (s->unk_b8 == 0x20) {
            s->unk_b8 = 0x1d;
        } else {
            s->unk_b8 = 0x13;
        }
    }
}

BOOL func_ov104_022956c4(S *s, s32 a, s32 b) {
    u32 old = s->unk_b8;
    s->func_ov104_02294dfc(0x30);
    if (a == 0) return FALSE;
    if (s->func_ov104_02296514(s->unk_b8)) {
        func_ov104_02295884(s, a, b);
    } else if (s->func_ov104_02296504(s->unk_b8)) {
        func_ov104_022957ac(s, a, b);
    } else if (s->func_ov104_022964f0(s->unk_b8)) {
        func_ov104_02295748(s, a);
    }
    if (old != s->unk_b8) return TRUE;
    return FALSE;
}

void func_ov104_022956a0(S *s) {
    s->func_ov002_02200a50(4);
    s->func_ov002_02200a60(1);
    s->func_ov104_02294e0c(0x100);
}

void func_ov104_0229567c(S *s) {
    s->func_ov002_02200a58(0x1a);
    s->unk_2a9c.func_0208e13c(2);
    func_0200402c(0x29);
}

void func_ov104_0229560c(S *s) {
    u32 t = s->unk_b9;
    s->func_ov104_02295f3c(t);
    s->unk_a8 = s->func_ov104_0229633c(t);
    s->unk_ac = s->func_ov104_022962ec(t);
    if (func_0206ef00()) {
        s->unk_a8 = s->unk_a8 - 2;
        s->unk_ac = s->unk_ac - 2;
    }
    s->func_ov002_02200a58(0x1c);
    func_ov094_02293c58(&s->unk_d40);
}

void func_ov104_02295604(S *s) {
    func_ov104_02295958(s);
}

void func_ov104_022955c8(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        func_02065e70((u8 *)s->unk_3494 + i * 0xf4, s->func_ov104_0229638c(id));
    }
}

void func_ov104_02295590(S *s) {
    u8 id;
    s32 i = 0;
    for (id = 0xb; id <= 0x14; i++, id++) {
        s->func_ov104_022963cc(id, (u8 *)s->unk_3494 + i * 0xf4);
    }
}

void Unk_ov104_02298170::func_ov104_02295534(s32 flag) {
    s32 i;
    u8 *e = (u8 *)unk_2b0c;
    for (i = 0; i < 10; e += 0xf4, i++) {
        if (flag != 0 && (unk_b2 & (1 << i))) {
            func_02065c94(e);
        } else if (((Unk_02065554 *)e)->func_02065578() != 0) {
            s32 r = func_ov104_02296568();
            if (r != 0x21) {
                func_ov104_022963cc(r, e);
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_022954d8() {
    func_0200402c(0x27);
    func_ov104_02294dfc(0x400);
    ((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_022030ac(9);
    func_ov002_02200a58(0x1b);
    unk_8c = 4;
    func_ov104_02294dfc(0x100);
    if (data_020cbb18->func_02072e44()) {
        func_ov104_02295008();
    }
}

void Unk_ov104_02298170::func_ov104_02295490() {
    func_0200402c(0x28);
    func_ov104_02294e0c(0x400);
    ((Unk_ov002_02202fac *)&unk_3e1c)->func_ov002_022030ac(7);
    func_ov002_02200a58(0x1b);
    unk_8c = 4;
    func_ov104_02294dfc(0x100);
}

BOOL Unk_ov104_02298170::func_ov104_0229545c(void *p) {
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() == 1 && ((Unk_02065554 *)q)->func_02065554() != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov104_02298170::func_ov104_022953e0(void *p) {
    u16 r = 0;
    s32 t = -1;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() == 1 && ((Unk_02065554 *)q)->func_02065554() != 0) {
            if (t == -1) {
                t = i;
            } else {
                t = -2;
            }
        }
    }
    if (t != -1) {
        if (t == -2) {
            r |= 2;
        } else {
            r |= 1;
            u8 *e = (u8 *)p + t * 0xf4;
            func_0206ea2c(e);
            func_02065c94(e);
        }
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_02295310(void *p, s32 flag) {
    if (func_020968e4(p, 10) == 0) {
        return 0;
    }
    u16 r = 0;
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < 10; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() != 0) {
            if (((Unk_02065554 *)q)->func_02065578() != 1) {
                if (flag != 0) {
                    unk_b2 |= 1 << i;
                } else {
                    func_02065c94(q);
                }
            } else if (((Unk_02065554 *)q)->func_02065554() == 0) {
                if (func_02096a0c(q) != 0) {
                    if (func_ov104_02295284(q) != 0) {
                        if (flag != 0) {
                            unk_b2 |= 1 << i;
                        } else {
                            func_02065c94(q);
                        }
                        r |= 0x300;
                    } else {
                        r |= 0x110;
                    }
                } else {
                    r |= 0x108;
                }
            }
        }
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_02295290(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065578() != 1) {
            func_02065c94(q);
        } else if (((Unk_02065554 *)q)->func_02065554() == 0) {
            if (func_02096a0c(q) != 0) {
                if (func_ov104_02295284(q) != 0) {
                    func_02065c94(q);
                    r |= 0x200;
                } else {
                    r |= 0x20;
                }
            }
        }
    }
    return r;
}

s32 Unk_ov104_02298170::func_ov104_02295284(void *p) {
    return func_02096a50(p, 1);
}

u32 Unk_ov104_02298170::func_ov104_0229514c(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return r;
    }
    s32 t;
    u32 mask = 0;
    u8 *q = (u8 *)p;
    s32 cnt = 0;
    s32 i = 0;
    Unk_020660f8 *obj;
    s32 z;
    s32 j;
    for (; i < n; q += 0xf4, i++) {
        if (((Unk_02065554 *)q)->func_02065554() == 0) {
            t = func_020969b8(q);
            if (t != -2) {
                if (t != -1) {
                    if (func_02096acc(q, t, 1) != 0) {
                        func_02065c94(q);
                        r |= 0x200;
                    } else {
                        u32 bit = 1 << t;
                        if ((mask & bit) == 0) {
                            mask |= bit;
                            cnt++;
                        }
                    }
                } else {
                    if (func_02096960(q) >= 0) {
                        func_02096a9c(q);
                        func_02065c94(q);
                        r |= 0x200;
                    }
                }
            }
        }
    }
    if (cnt != 0) {
        z = 0;
        obj = func_02067918(0);
        Unk_020e1c64 buf;
        for (j = 0; j < 4; j++) {
            if (mask & (1 << j)) {
                ((Unk_020940a0 *)((Unk_0209865c *)func_02097868(data_021d735c, j))->func_0209888c())->func_020940d0(&buf);
                switch (z) {
                case 0:
                    obj->func_02067a3c(7, &buf);
                    break;
                case 1:
                    obj->func_02067a3c(8, &buf);
                    break;
                case 2:
                    obj->func_02067a3c(9, &buf);
                    break;
                }
                z++;
            }
        }
        r |= cnt << 6;
    }
    return r;
}

u32 Unk_ov104_02298170::func_ov104_022950f8(void *p) {
    u16 r = 0;
    s32 n = func_02096914(p, 10);
    if (n == 0) {
        return 0;
    }
    u8 *q = (u8 *)p;
    s32 i;
    for (i = 0; i < n; q += 0xf4, i++) {
        if (func_02096960(q) >= 0) {
            func_02096a9c(q);
            func_02065c94(q);
            r |= 0x200;
        }
    }
    return r;
}

void Unk_ov104_02298170::func_ov104_02295008() {
    Unk_020cbb18 *g = data_020cbb18;
    if (g->func_02072e44()) {
        func_ov104_02294e0c(0x800);
        unk_b2 = 0;
        s32 n = func_020968e4(unk_2b0c, 10);
        unk_b0 = 0;
        if (n <= 0) {
            unk_b0 = 4;
            func_ov104_02294dfc(0x1000);
            return;
        }
        if (func_ov104_0229545c(unk_2b0c)) {
            unk_b0 |= 0x800;
        }
        if (g->unk_64 != 0) {
            func_ov104_02294e0c(0x1000);
            unk_be = 0;
            func_ov104_02294dfc(0x2000);
            func_ov104_02294e8c();
        } else {
            func_ov104_02294e0c(0x4000);
            u32 r = func_ov104_02295310(unk_2b0c, 1);
            unk_b0 |= r;
            if (unk_b0 & 0x10) {
                unk_b0 |= 0x400;
            }
        }
    }
}

void Unk_ov104_02298170::func_ov104_02294e8c() {
    if (func_ov104_02294e1c(0x800) == 0) {
        func_ov104_02294dfc(0x1000);
        return;
    }
    if (func_ov104_02294e1c(0x1000) == 0) {
        return;
    }
    s32 r6 = 0x18;
    if (func_ov104_02294e1c(0x2000) != 0) {
        r6 = func_0206f644();
        switch (r6 - 8) {
        case 0:
            return;
        case 3:
            unk_b0 |= 0x400;
            func_ov104_02294dfc(0x1000);
            func_ov104_02294dfc(0x2000);
            return;
        case 1:
        case 2:
            unk_b0 |= 0x200;
            unk_b2 |= 1 << unk_be;
            unk_be++;
            func_ov104_02294dfc(0x2000);
            break;
        }
    }
    while (unk_be < 10) {
        void *e = &unk_2b0c[unk_be];
        if (((Unk_02065554 *)e)->func_02065554() == 0) {
            if (((Unk_02065554 *)e)->func_02065578() == 1) {
                unk_b0 |= 0x100;
                if (func_02096a0c(e) != 0) {
                    if (r6 == 10) {
                        unk_b0 |= 0x400;
                        func_ov104_02294dfc(0x1000);
                        return;
                    }
                    if (func_ov104_02294e30(e) != 0) {
                        func_ov104_02294e0c(0x2000);
                        return;
                    }
                } else {
                    unk_b0 |= 8;
                }
            }
        }
        unk_be++;
    }
    func_ov104_02294dfc(0x1000);
}

BOOL Unk_ov104_02298170::func_ov104_02294e30(void *p) {
    void *heap = data_021c6210;
    u8 *buf = (u8 *)func_020e8618(heap, 0xf5);
    buf[0] = 8;
    func_02116048(p, buf + 1, 0xf4);
    Unk_020cbb18 *g = data_020cbb18;
    g->func_020728d4();
    g->func_020728a4(buf, 0xf5);
    g->func_02072824(0x16, 0);
    func_020e85fc(heap, buf);
    func_0206f638(8);
    return TRUE;
}

BOOL Unk_ov104_02298170::func_ov104_02294e1c(u32 mask) {
    if (unk_94 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov104_02298170::func_ov104_02294e0c(u32 mask) { unk_94 = unk_94 | mask; }

void Unk_ov104_02298170::func_ov104_02294dfc(u32 mask) { unk_94 = unk_94 & ~mask; }

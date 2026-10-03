// ov111: scene overlay (class Unk_ov111_02298a48, vtable 0x02298a48, 0x3e58 bytes): a character/name entry screen.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14
#include "text/Unk_02050288.h"

enum Unk_ov111_022970cc_Status { UNK_OV111_ST_0 = 0, UNK_OV111_ST_1 = 1, UNK_OV111_ST_2 = 2, UNK_OV111_ST_3 = 3 };

class Unk_ov111_02298a48;
typedef Unk_ov111_02298a48 S;

class Unk_ov090_022921e0 {
public:
    BOOL func_ov090_02291934();
    void func_ov090_02291d2c();
    void func_ov090_02291d8c(u32 v);
};

class Unk_020e2a78 {
public:
    void func_020a7aa0(class Unk_020e2a60 *src, s32 a, s32 b);
};

class Unk_020940a0 {
public:
    void func_020940d0(Unk_020e2a78 *o);
};

class Unk_0209865c {
public:
    void *func_0209888c();
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

extern "C" {
extern u8 data_021edb68;
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern u32 data_020cbb18;
extern u32 data_021f482c;
extern u32 data_ov111_022989b8[];
extern char data_ov111_022989c8[];

void func_020020b8(s32 v);
void func_0200212c(s32 v);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_02002398(s32 a, s32 b);
void func_0200261c(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(void *a, u32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200402c(u32 v);
void func_02038fd4(s32 a);
void func_02038fe8(s32 a, void *p, void *q);
void func_0205125c(void *p, s32 n);
s32 func_02051268(void *src, void *dst, s32 n);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
s32 func_020641ec(u32 id, u32 g, s32 a, s32 b);
void func_0206e594();
void func_0206e5a4(void *p);
s32 func_0206e5b4();
s32 func_0206e61c();
void func_0206e63c();
void func_0206ee0c(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
BOOL func_0206ef00();
BOOL func_0206ef0c();
void func_020943f8();
void func_020943fc();
void func_02094810(void *p);
void func_02094860();
Unk_0209865c *func_0209750c();
void func_020a7fd8(void *p);
void *func_020a8054(u32 a, u32 b, u32 c);
void func_020b30bc(void *p);
void func_020e85fc(u32 g, s32 a);
void *func_020ed174(void *p);
void func_020ed188(void *p);
s32 MI_CpuCopy8(void *src, void *dst, s32 n);
s32 func_ov090_02291a38(s32 v);
s32 func_ov090_02291a58(s32 v);
s32 func_ov090_02291aa0();
BOOL func_ov002_0220125c(void *pad);
BOOL func_ov002_0220126c(void *pad);
BOOL func_ov002_0220127c(void *pad);
BOOL func_ov002_0220128c(void *pad);
void func_ov095_02292acc(void *p);
void func_ov095_02293c1c(void *p);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
s32 func_ov095_02292404(void *s);
s32 func_ov095_02292458(void *p, s32 v);
void func_ov095_022924f0(void *s);
s32 func_ov095_02292544(void *s);
s32 func_ov095_02292580(void *s);
void func_ov095_02292ad8(void *p, s32 v);
void func_ov095_02292af4(void *p, s32 v);
void func_ov095_022937e4(void *p, u32 a, u32 b, u32 c);
void func_ov095_0229388c(void *p, u32 a, u32 b);
void func_ov095_022938f8(void *p, u32 a, u32 b, u32 c);
u32 func_ov095_02293924(void *p);
void func_ov095_02293938(void *s, u32 a);
void func_ov095_02293944(void *p);
BOOL func_ov095_0229394c(void *p);
s32 func_ov095_02293990(void *p);
BOOL func_ov095_022939f8(void *s);
void func_ov095_02293a30(void *p, u32 a, u32 b, u32 c, u32 d);
void func_ov095_02293a78(void *p, u32 a, u32 b);
void func_ov095_02293b60(void *p, u32 a, u32 b, u32 c);
void func_ov095_02293cc0(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_02293d94(void *p);
u32 func_ov095_02293da0(void *p);
void func_ov095_02293da8(void *s);
void func_ov095_02293dc0(void *s);
s32 func_ov095_02293dc8(void *s, u32 a, u32 b);
u8 func_ov095_02293f2c(void *s, void *buf, u32 a, u32 b, u32 c, void *d);
u32 func_ov095_02293f88(void *p, u32 a);
u32 func_ov095_02293f8c(void *p, u32 a);
u32 func_ov095_02293f90(void *p, u32 a);
BOOL func_ov095_02293f94(void *p, void *q, u32 a, u32 b, u32 c, u32 d);
u32 func_ov095_02293fb4(void *p, void *q, u32 a, u32 b, u32 c);
BOOL func_ov095_022940f0(void *p, void *q, u32 a, void *r, u32 b, u32 c, u32 d, u32 e);
BOOL func_ov095_0229423c(void *s, u32 a);
void func_ov095_02294250(void *s, s32 a);
void func_ov095_022942c0(void *s);
s32 func_ov095_022942e8(void *p);
void func_ov095_02294318(void *s);
s32 func_ov095_02294324(void *p);
void func_ov095_0229434c(void *p);
void func_ov095_02294358(void *s, s32 a);
void func_ov095_022943b4(void *p, s32 v);
void func_ov095_022943dc(void *p, void *q);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p);
s32 func_ov095_02294648(void *s, s32 a, s32 b, s32 c);
void func_ov095_0229483c(void *p, s32 v);
s32 func_ov095_02294864(void *s, s32 a, u32 b);
s32 func_ov095_02294a40(void *p);
s32 func_ov095_02294a44(void *s, s32 a, s32 b);
void func_ov095_02294d40(void *s, s32 i);
s32 func_ov095_02295194(void *s);
void func_ov095_022951e4(void *p);
BOOL func_ov095_02295258(void *s);
BOOL func_ov095_02295264(void *s);
void func_ov095_02295340(void *s, s32 a);
void func_ov095_022953c0(void *s, s32 a);
BOOL func_ov095_02295440(void *s, s32 i);
}

// Base class of the 0x22044e4 scene; declaration as in src/ov002/unk_ov002_02200680.cpp (sub-objects opaque)
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
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    s32 func_ov002_022008fc(s32 a);
    s32 func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    u32 func_ov002_022009c8();
    s32 func_ov002_022009d4();
    s32 func_ov002_02200a14(s32 a);
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

// Sub-object at +0x3ccc (0x64 bytes, vtable 0x02204614). Its methods are split over two ov002 classes that share
// the object: Unk_ov002_02202d98 and Unk_ov002_0220464c (called through casts).
class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();

    /* 0x0c */ u8 unk_0c[0x3f];
};

class Unk_ov002_02204614 : public Unk_020e100c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();

    u8 unk_4b[0x64 - 0x4b];
};

class Unk_ov002_02202d98 {
public:
    void func_ov002_02202844();
    s32 func_ov002_0220288c();
    BOOL func_ov002_022028f0();
    void func_ov002_022029e8(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_02202a40(s32 a, s32 b);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
};

class Unk_ov002_0220464c {
public:
    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202d00(s32 idx);
};

// Holder at +0x3d30 (0x108 bytes)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);
    u32 unk_00[0x108 / 4];
};

// 0x24-byte objects at +0x23a0
class Unk_020e45f8 {
public:
    Unk_020e45f8();
    u32 unk_00[0x24 / 4];
};

// 0x40-byte objects at +0x23e8
class Unk_020e0488 {
public:
    Unk_020e0488();
    ~Unk_020e0488();
    u32 unk_00[0x40 / 4];
};

// Sub-object at +0xac (ov095 menu/state struct; methods from ov095)
class Unk_ov111_ov095_02293944 {
public:
    Unk_ov111_ov095_02293944() : unk_22f4(), unk_233c() {}
    ~Unk_ov111_ov095_02293944() {}
    u32 unk_00[0x22f4 / 4];
    /* 0x22f4 */ Unk_020e45f8 unk_22f4[2];
    /* 0x233c */ Unk_020e0488 unk_233c[2];
};

// +0x3c68
class Unk_020d917c {
public:
    Unk_020d917c();
    ~Unk_020d917c();
    u32 unk_00[0x34 / 4];
};

// Message buffer (see src/main/unk_0206c714.cpp / src/ov045/unk_02258de0.cpp)
class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    u8 unk_04[10];
};

// vtable 0x02298a30, data at +0xe, 0x20 bytes
class Unk_ov111_02298a30 : public Unk_020e2a60 {
public:
    Unk_ov111_02298a30() {}
    virtual ~Unk_ov111_02298a30() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_0e[0x20];
};

typedef void (Unk_ov111_02298a48::*Unk_ov111_02298a48_Fn)();

// Vtable 0x02298a48, size 0x3e58
class Unk_ov111_02298a48 : public Unk_ov002_022044e4 {
public:
    Unk_ov111_02298a48()
        : unk_ac(), unk_3c68(), unk_3c9c(), unk_3ccc(), unk_3d30() {}
    // destructor left implicit

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov111_02296958(u32 mask);
    void func_ov111_02296968(u32 mask);
    BOOL func_ov111_02296978(u32 mask);
    void func_ov111_0229698c();
    void func_ov111_02296a24();
    void func_ov111_02296a30(u32 a);
    void func_ov111_02296a44();
    void func_ov111_02296a6c();
    void func_ov111_02296a8c();
    void func_ov111_02296aac();
    void func_ov111_02296b04();
    void func_ov111_02296b78();
    void func_ov111_02296b9c();
    BOOL func_ov111_02296bec();
    BOOL func_ov111_02296c28();
    BOOL func_ov111_02296c88();
    BOOL func_ov111_02296cf0();
    BOOL func_ov111_02296d4c();
    s32 func_ov111_02296dd0(void *pad);
    void func_ov111_02296e64();
    BOOL func_ov111_02296e7c();
    u32 func_ov111_02296ea4();
    void func_ov111_02296ec0();
    void func_ov111_02296ef0();
    void func_ov111_02296f34(u32 v);
    void func_ov111_02296f58();
    BOOL func_ov111_02296f9c();
    BOOL func_ov111_02296ffc();
    BOOL func_ov111_02297044();
    s32 func_ov111_02297070();
    s32 func_ov111_022970cc(u32 x);

    // state-table targets (0x8c table)
    void func_ov111_02298394();
    void func_ov111_02298364();
    void func_ov111_02298310();
    void func_ov111_022982e0();
    void func_ov111_022982b0();
    void func_ov111_02298280();
    // state-table targets (0x8d table)
    void func_ov111_022981b0();
    void func_ov111_0229815c();
    void func_ov111_0229811c();
    void func_ov111_02298030();
    void func_ov111_02298004();
    void func_ov111_02297f84();
    void func_ov111_02297f20();
    void func_ov111_02297f00();
    void func_ov111_02297eb4();
    void func_ov111_02297d4c();
    void func_ov111_02297cd0();
    void func_ov111_02297ca0();
    void func_ov111_02297c70();
    void func_ov111_02297b0c();
    void func_ov111_02297a34();
    void func_ov111_02297a0c();

    void func_ov111_02298574();
    void func_ov111_022985ac();
    void func_ov111_02298620();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u8 unk_98;
    /* 0x99 */ u8 unk_99;
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ volatile u8 unk_9b;
    /* 0x9c */ u8 unk_9c;
    /* 0x9d */ u8 unk_9d;
    /* 0x9e */ u8 unk_9e;
    /* 0x9f */ u8 unk_9f;
    /* 0xa0 */ u8 unk_a0;
    /* 0xa1 */ u8 unk_a1;
    /* 0xa2 */ u8 unk_a2;
    /* 0xa3 */ u8 unk_a3;
    /* 0xa4 */ u16 unk_a4;
    /* 0xa6 */ u8 unk_a6[2];
    /* 0xa8 */ Unk_02050288 *unk_a8;
    /* 0xac */ Unk_ov111_ov095_02293944 unk_ac;
    /* 0x2468 */ u8 unk_2468[0x3c68 - 0x2468];
    /* 0x3c68 */ Unk_020d917c unk_3c68;
    /* 0x3c9c */ Unk_ov111_02298a30 unk_3c9c;
    /* 0x3ccc */ Unk_ov002_02204614 unk_3ccc;
    /* 0x3d30 */ Unk_ov002_022040ec unk_3d30;
    /* 0x3e38 */ u8 unk_3e38[0x20];
};

extern "C" {
void func_ov111_02297224(S *s);
void func_ov111_02297230(S *s);
void func_ov111_022972fc(S *s);
void func_ov111_02297360(S *s);
void func_ov111_022973a0(S *s);
BOOL func_ov111_022973c8(S *s);
void func_ov111_0229741c(S *s);
BOOL func_ov111_02297444(S *s);
void func_ov111_02297498(S *s);
BOOL func_ov111_022974c0(S *s);
void func_ov111_02297514(S *s);
BOOL func_ov111_02297558(S *s, Unk_ov111_022970cc_Status a);
BOOL func_ov111_022975ec(S *s, u32 a);
void func_ov111_02297650(S *s);
void func_ov111_02297664(S *s);
void func_ov111_022976bc(S *s);
void func_ov111_0229773c(S *s);
void func_ov111_022977f8(S *s);
void func_ov111_02297814(S *s);
void func_ov111_022978f0(S *s, u32 a);
void func_ov111_02297978(S *s);
void func_ov111_022979a0(S *s);
void func_ov111_02297bb0(S *s, u32 v, Unk_ov111_022970cc_Status w);
void func_ov111_02297bec(S *s);
void func_ov111_02297c10(S *s);
void func_ov111_02297c30(S *s);
void func_ov111_02297c58(S *s);
void func_ov111_022983c4(S *s);
void func_ov111_0229842c();
BOOL func_ov111_0229844c(S *s, s32 a, u32 b);
BOOL func_ov111_022984b0(S *s);
}

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov111_SceneEntry {
    Unk_ov111_02298a48 *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov111_02298a48 *func_ov111_0229885c();

extern "C" Unk_ov111_02298a48 *func_ov111_0229885c() { return new Unk_ov111_02298a48(); }

BOOL Unk_ov111_02298a48::vfunc_00() {
    func_ov111_022979a0(this);
    func_ov002_02200a50(0);
    func_ov002_02200a60(1);
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_0c() {
    ((Unk_ov090_022921e0 *)func_020ed174(this))->func_ov090_02291d2c();
    func_ov111_02297978(this);
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_24() {
    if (func_ov111_02296978(4)) {
        if (func_0206ef00()) {
            ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202844();
        }
        func_ov111_02297814(this);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov111_SceneEntry data_ov111_02298920;
extern "C" char data_ov111_022989c8[];
extern "C" char data_ov111_022989e0[];
extern "C" char data_ov111_022989f8[];
extern "C" char data_ov111_02298a10[];
extern "C" u32 data_ov111_022989b8[4];

// Scene registration entry read by main: factory, then two ids
extern "C" Unk_ov111_SceneEntry data_ov111_02298920 = {func_ov111_0229885c, 0x9e, 0xa2};

// Data order: this unit is placed object by object (see object_order.txt).

BOOL Unk_ov111_02298a48::vfunc_4c() {
    static Unk_ov111_02298a48_Fn tbl[6] = {
        &Unk_ov111_02298a48::func_ov111_02298394,
        &Unk_ov111_02298a48::func_ov111_02298364,
        &Unk_ov111_02298a48::func_ov111_02298310,
        &Unk_ov111_02298a48::func_ov111_022982e0,
        &Unk_ov111_02298a48::func_ov111_022982b0,
        &Unk_ov111_02298a48::func_ov111_02298280};
    (this->*tbl[unk_8c])();
    return TRUE;
}

void Unk_ov111_02298a48::func_ov111_02298620() {
    static Unk_ov111_02298a48_Fn tbl[16] = {
        &Unk_ov111_02298a48::func_ov111_022981b0,
        &Unk_ov111_02298a48::func_ov111_0229815c,
        &Unk_ov111_02298a48::func_ov111_0229811c,
        &Unk_ov111_02298a48::func_ov111_02298030,
        &Unk_ov111_02298a48::func_ov111_02298004,
        &Unk_ov111_02298a48::func_ov111_02297f84,
        &Unk_ov111_02298a48::func_ov111_02297f20,
        &Unk_ov111_02298a48::func_ov111_02297f00,
        &Unk_ov111_02298a48::func_ov111_02297eb4,
        &Unk_ov111_02298a48::func_ov111_02297d4c,
        &Unk_ov111_02298a48::func_ov111_02297cd0,
        &Unk_ov111_02298a48::func_ov111_02297ca0,
        &Unk_ov111_02298a48::func_ov111_02297c70,
        &Unk_ov111_02298a48::func_ov111_02297b0c,
        &Unk_ov111_02298a48::func_ov111_02297a34,
        &Unk_ov111_02298a48::func_ov111_02297a0c};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov111_02298a48::vfunc_50() {
    if (func_ov111_022984b0(this)) {
        return TRUE;
    }
    func_ov111_022985ac();
    func_ov111_02298620();
    func_ov111_02298574();
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_54() { return TRUE; }

BOOL Unk_ov111_02298a48::vfunc_58() { return TRUE; }

BOOL Unk_ov111_02298a48::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov111_02298a48::vfunc_18() {
    func_ov111_022977f8(this);
    Unk_ov002_022044e4::vfunc_18();
    return TRUE;
}

void Unk_ov111_02298a48::func_ov111_022985ac() {
    unk_3ccc.vfunc_0c();
}

void Unk_ov111_02298a48::func_ov111_02298574() {
    if (unk_a2 != 0) {
        unk_a2 = *(volatile u8 *)&unk_a2 - 1;
        if (unk_a2 == 0) {
            func_ov095_02293944(&unk_ac);
        }
    }
    func_ov111_02296a24();
}

BOOL func_ov111_022984b0(S *s) {
    func_0206e63c();
    if (func_0206e61c() != 0) {
        switch (s->unk_8d) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            return func_ov111_0229844c(s, 7, 1);
        case 4:
        default:
            break;
        }
    }
    if (s->unk_8d != 0 && s->unk_8d != 3 && s->unk_8d != 9) {
        return FALSE;
    }
    s32 r5 = -1;
    if (func_0206ef0c() != 0) {
        r5 = func_ov090_02291aa0();
    } else {
        u32 t = data_021f47d8[1];
        if ((t & 4) != 0) {
            r5 = 7;
        } else if ((t & 0x800) != 0) {
            r5 = 0;
        } else if ((t & 0x400) != 0) {
            r5 = 5;
        }
    }
    return func_ov111_0229844c(s, r5, 0);
}

BOOL func_ov111_0229844c(S *s, s32 a, u32 b) {
    void *p = func_020ed174(s);
    if (a != -1 && a != 4) {
        ((Unk_ov090_022921e0 *)p)->func_ov090_02291d8c((u8)a);
        s->func_ov111_02296b78();
        s->unk_8c = 4;
        s->func_ov002_02200a60(1);
        if (a == 7) {
            s->func_ov111_02296968(0x10);
        }
        if (b != 0) {
            func_0206e5a4(s->unk_3c9c.unk_0e);
        } else {
            func_0206e594();
        }
        return TRUE;
    }
    return FALSE;
}

void func_ov111_0229842c() {
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
}

void func_ov111_022983c4(S *s) {
    u32 r4 = data_021f482c;
    func_020026c4((void *)"menu/chat2/b_cht_bg.bpl", r4, 6, 1, 1, 9);
    func_ov095_022943dc(&s->unk_ac, data_ov111_022989c8);
    s->func_ov111_0229698c();
    func_ov095_022943b4(&s->unk_ac, 6);
    func_0200261c((void *)"menu/chat2/b_cht.bch", r4, 6, 0x13d, 0x13d, 0x1e9);
}

void Unk_ov111_02298a48::func_ov111_02298394() {
    func_ov111_0229842c();
    func_ov095_02293cc0(&this->unk_ac);
    this->func_ov002_02200a50(1);
    if (this->func_ov111_02296978(0x20) == 0) {
        this->func_ov111_02298364();
    }
}

void Unk_ov111_02298a48::func_ov111_02298364() {
    func_ov095_02293c1c(&this->unk_ac);
    func_ov111_022983c4(this);
    this->func_ov002_02200a50(2);
    if (this->func_ov111_02296978(0x20) == 0) {
        this->func_ov111_02298310();
    }
}

void Unk_ov111_02298a48::func_ov111_02298310() {
    func_ov095_0229483c(&this->unk_ac, 6);
    this->func_ov111_02296a24();
    this->func_ov111_02296968(4);
    this->func_ov002_022008e0(8, 3, 0, 0x30);
    func_020020b8(6);
    this->func_ov002_02200840(6, 0, 0);
    this->func_ov002_02200a50(3);
    func_ov111_022976bc(this);
}

void Unk_ov111_02298a48::func_ov111_022982e0() {
    if (this->func_ov002_02200908(0) != 0) {
        this->func_ov002_02200a60(2);
        func_ov111_02297c10(this);
    }
    this->func_ov002_02200840(6, 0, 0);
}

void Unk_ov111_02298a48::func_ov111_022982b0() {
    this->func_ov002_022008c4(8, 0, 0, 0x30);
    this->func_ov002_02200840(6, 0, 0);
    this->unk_8c = 5;
}

void Unk_ov111_02298a48::func_ov111_02298280() {
    if (this->func_ov002_022008fc(0) != 0) {
        func_0200212c(6);
        this->func_ov002_02200a60(5);
    } else {
        this->func_ov002_02200840(6, 0, 0);
    }
}

void Unk_ov111_02298a48::func_ov111_022981b0() {
    if (this->func_ov002_02200a14(1) != 0) {
        func_ov111_02297c30(this);
    } else if (func_ov095_02294324(&this->unk_ac) == 0) {
        if (Both()) {
            s32 r = this->func_ov111_02297070();
            if (r != 0) {
                if (r == 1) {
                    this->func_ov002_02200a58(1);
                }
            } else {
                if (func_ov095_02293990(&this->unk_ac) != 0) {
                    this->func_ov111_02296a30(8);
                    func_ov111_022976bc(this);
                } else if (this->func_ov111_02297044() != 0) {
                    this->func_ov002_02200a58(0xd);
                } else if (this->unk_a2 == 0 && func_ov095_0229394c(&this->unk_ac) != 0) {
                    func_ov111_02297bec(this);
                    this->func_ov002_02200a58(0);
                } else if (this->func_ov111_02296f9c() != 0) {
                    this->func_ov111_0229698c();
                    this->func_ov002_02200a58(2);
                }
            }
        }
    }
}

void Unk_ov111_02298a48::func_ov111_0229815c() {
    if (data_021f4770 == 0) {
        this->func_ov002_02200a58(0);
    } else if (func_ov095_022942e8(&this->unk_ac) != 0) {
        s32 r5 = func_ov095_02294a40(&this->unk_ac);
        this->func_ov111_022970cc(func_ov095_02294864(&this->unk_ac, r5, 8));
        func_ov095_02294d40(&this->unk_ac, r5);
    }
}

void Unk_ov111_02298a48::func_ov111_0229811c() {
    if (data_021f4770 == 0) {
        this->func_ov002_02200a58(0);
        if (this->unk_9f == this->unk_a0) {
            this->func_ov111_02296958(1);
        }
    } else {
        this->func_ov111_02296f58();
    }
    func_ov111_022976bc(this);
}

void Unk_ov111_02298a48::func_ov111_02298030() {
    if (this->func_ov002_022009d4() != 0) {
        func_ov111_02297c58(this);
        return;
    }
    switch (func_ov095_02292458(&this->unk_ac, this->func_ov002_022009c8())) {
    case 1:
        ((Unk_ov002_0220464c *)&this->unk_3ccc)->func_ov002_02202c40();
        this->func_ov111_02296b04();
        break;
    case 2:
        ((Unk_ov002_0220464c *)&this->unk_3ccc)->func_ov002_02202be0();
        this->func_ov111_02296b04();
        break;
    case 4:
        ((Unk_ov002_0220464c *)&this->unk_3ccc)->func_ov002_02202c40();
        this->func_ov111_02296968(2);
        this->func_ov002_02200a58(9);
        this->func_ov111_02296b04();
        break;
    case 0:
    case 3:
    default:
        if (this->func_ov111_02296d4c() != 0) {
            return;
        }
        if (this->func_ov111_02296cf0() != 0) {
            return;
        }
        if (this->func_ov111_02296bec() != 0) {
            return;
        }
        {
            u32 t = data_021f47d8[1];
            if ((t & 0x100) != 0) {
                func_ov111_0229844c(this, func_ov090_02291a38(4), 0);
            } else if ((t & 0x200) != 0) {
                func_ov111_0229844c(this, func_ov090_02291a58(4), 0);
            }
        }
        break;
    }
}

void Unk_ov111_02298a48::func_ov111_02298004() {
    if (((Unk_ov002_02202d98 *)&this->unk_3ccc)->func_ov002_022028f0() == 0) {
        this->func_ov002_02200a58(this->unk_98);
        this->func_ov111_02298620();
    }
}

void Unk_ov111_02298a48::func_ov111_02297f84() {
    if (this->unk_3ccc.func_0208d4fc() != 0) {
        s32 r6 = func_ov095_02292404(&this->unk_ac);
        s32 r4 = this->func_ov111_022970cc(func_ov095_02294864(&this->unk_ac, r6, 8));
        if (r4 != 3) {
            if (r4 == 1 && (data_021f47d8[0] & 1) != 0) {
                func_ov095_02294318(&this->unk_ac);
                this->func_ov002_02200a58(6);
                func_ov095_02294d40(&this->unk_ac, r6);
            } else {
                func_ov095_02295194(&this->unk_ac);
                if (r4 != 4) {
                    this->func_ov111_02296a6c();
                }
            }
        }
    }
}

void Unk_ov111_02298a48::func_ov111_02297f20() {
    if ((data_021f47d8[0] & 1) == 0) {
        func_ov095_02295194(&this->unk_ac);
        this->func_ov111_02296a6c();
    } else if (func_ov095_022942e8(&this->unk_ac) != 0) {
        s32 r5 = func_ov095_02294a40(&this->unk_ac);
        this->func_ov111_022970cc(func_ov095_02294864(&this->unk_ac, r5, 8));
        func_ov095_02294d40(&this->unk_ac, r5);
    }
}

void Unk_ov111_02298a48::func_ov111_02297f00() {
    if (this->unk_3ccc.func_0208d4fc() != 0) {
        this->func_ov111_02296a44();
    }
}

void Unk_ov111_02298a48::func_ov111_02297eb4() {
    if ((data_021f47d8[0] & 2) == 0) {
        this->func_ov002_02200a58(this->unk_98);
    } else if (func_ov095_022942e8(&this->unk_ac) != 0) {
        this->func_ov111_022970cc(0x100);
        if (this->func_ov111_02296978(2) != 0) {
            this->func_ov111_02296aac();
        }
    }
}

void Unk_ov111_02298a48::func_ov111_02297d4c() {
    if (this->func_ov002_022009d4() != 0) {
        func_ov111_02297c58(this);
        return;
    }
    switch (this->func_ov111_02296dd0((void *)this->func_ov002_022009c8())) {
    case 1:
        func_ov095_02293dc0(&this->unk_ac);
        this->func_ov111_02296e64();
        this->func_ov111_02296ec0();
        func_ov111_022976bc(this);
        this->func_ov111_02296aac();
        func_0200402c(0xb);
        break;
    case 4:
        func_ov095_02292acc(&this->unk_ac);
        this->func_ov111_02296958(2);
        this->func_ov002_02200a58(3);
        this->func_ov111_02296b04();
        break;
    case 2:
        func_ov095_02292ad8(&this->unk_ac, ((Unk_ov002_02202d98 *)&this->unk_3ccc)->func_ov002_0220288c());
        this->func_ov111_02296958(2);
        this->func_ov002_02200a58(3);
        ((Unk_ov002_0220464c *)&this->unk_3ccc)->func_ov002_02202be0();
        this->func_ov111_02296b04();
        break;
    case 3:
        func_ov095_02292af4(&this->unk_ac, ((Unk_ov002_02202d98 *)&this->unk_3ccc)->func_ov002_0220288c());
        this->func_ov111_02296958(2);
        this->func_ov002_02200a58(3);
        this->func_ov111_02296b04();
        break;
    case 0:
    default:
        if (this->func_ov111_02296c28() != 0) {
            return;
        }
        if (this->func_ov111_02296c88() != 0) {
            return;
        }
        {
            u8 old = this->unk_9e;
            if (this->func_ov111_02296cf0() != 0) {
                if (old != this->unk_9e) {
                    this->func_ov111_02296aac();
                }
            } else if ((data_021f47d8[1] & 1) != 0) {
                this->func_ov002_02200a58(0xa);
                this->func_ov111_02296968(1);
                this->unk_9f = this->unk_9e;
                this->unk_a0 = this->unk_9e;
            } else if (this->func_ov111_02296bec() != 0) {
                return;
            }
        }
        break;
    }
}

void Unk_ov111_02298a48::func_ov111_02297cd0() {
    if ((data_021f47d8[0] & 1) == 0) {
        this->func_ov002_02200a58(9);
        if (this->unk_9f == this->unk_a0) {
            this->func_ov111_02296958(1);
        }
    } else if (this->func_ov111_02296dd0((void *)this->func_ov002_022009c8()) == 1) {
        func_ov095_02293dc0(&this->unk_ac);
        this->func_ov111_02296ec0();
        this->unk_a0 = this->unk_9e;
        this->func_ov111_02296aac();
        func_0200402c(0x15);
    }
    func_ov111_022976bc(this);
    this->func_ov111_0229698c();
}

void Unk_ov111_02298a48::func_ov111_02297ca0() {
    if ((data_021f47d8[0] & 0x200) == 0) {
        this->func_ov002_02200a58(this->unk_98);
        this->func_ov111_0229698c();
    }
}

void Unk_ov111_02298a48::func_ov111_02297c70() {
    if ((data_021f47d8[0] & 0x100) == 0) {
        this->func_ov002_02200a58(this->unk_98);
        this->func_ov111_0229698c();
    }
}

void func_ov111_02297c58(S *s) {
    s->func_ov111_02296b78();
    s->func_ov002_02200a58(0);
}

void func_ov111_02297c30(S *s) {
    s->func_ov002_02200980();
    s->func_ov111_02296b9c();
    s->func_ov002_02200a58(3);
    func_ov111_022976bc(s);
    s->func_ov111_0229698c();
}

void func_ov111_02297c10(S *s) {
    if (func_0206ef0c() != 0) {
        func_ov111_02297c58(s);
    } else {
        func_ov111_02297c30(s);
    }
}

void func_ov111_02297bec(S *s) {
    u8 b = func_ov095_02293924(&s->unk_ac);
    func_02094810(&b);
    s->unk_a2 = 0x14;
}

void func_ov111_02297bb0(S *s, u32 v, Unk_ov111_022970cc_Status w) {
    volatile u8 b = data_021edb68;
    b = v;
    s->unk_3d30.func_ov002_02204394((u8 *)&b, w, 0);
    s->func_ov002_02200a58(0xf);
    s->func_ov111_02296b78();
}

void Unk_ov111_02298a48::func_ov111_02297b0c() {
    if (func_0206ef0c()) {
        if (Both()) {
            if (this->unk_a2 == 0) {
                if (func_ov095_0229394c(&this->unk_ac)) {
                    func_ov111_02297bec(this);
                }
            }
        }
    }
    if (this->unk_9a < 4) {
        this->unk_9a = *(volatile u8 *)&this->unk_9a + 1;
        func_ov111_022978f0(this, *(volatile u8 *)&this->unk_9a);
        this->unk_9d = 3;
    } else if (this->unk_9d != 0) {
        this->unk_9d = *(volatile u8 *)&this->unk_9d - 1;
    } else {
        func_ov095_02293dc0(&this->unk_ac);
        this->func_ov002_02200a58(0xe);
    }
}

void Unk_ov111_02298a48::func_ov111_02297a34() {
    if (func_0206ef0c()) {
        if (Both()) {
            if (this->unk_a2 == 0) {
                if (func_ov095_0229394c(&this->unk_ac)) {
                    func_ov111_02297bec(this);
                }
            }
        }
    }
    if (this->unk_9a != 0) {
        if (this->unk_9a == 3) {
            func_ov111_02297664(this);
        }
        this->unk_9a = this->unk_9a - 1;
        func_ov111_022978f0(this, this->unk_9a);
        if (this->unk_9a == 1) {
            if (func_0206ef00()) {
                ((Unk_ov002_02202d98 *)&this->unk_3ccc)->func_ov002_02202af0();
            }
        }
    } else {
        func_ov111_02297360(this);
        func_ov111_022976bc(this);
        if (func_0206ef0c()) {
            this->func_ov002_02200a58(0);
        } else if (this->unk_3ccc.func_0208d534()) {
            this->func_ov002_02200a58(7);
        } else {
            func_ov111_02297c30(this);
        }
    }
}

void Unk_ov111_02298a48::func_ov111_02297a0c() {
    func_ov095_02294324(&this->unk_ac);
    if (this->unk_3d30.func_ov002_02204234(1)) {
        func_ov111_02297c10(this);
    }
}

void func_ov111_022979a0(S *s) {
    s->unk_a4 = 0;
    s->unk_99 = 0;
    s->unk_9a = 0;
    s->unk_9b = 0;
    s->unk_a2 = 0;
    func_ov111_02297360(s);
    s->unk_a8 = NULL;
    func_ov095_02294478(&s->unk_ac);
    func_02051268((void *)func_0206e5b4(), s->unk_3c9c.unk_0e, 0x20);
    func_020943fc();
    if (((Unk_ov090_022921e0 *)func_020ed174(s))->func_ov090_02291934()) {
        s->func_ov111_02296968(0x20);
    }
}

void func_ov111_02297978(S *s) {
    func_ov111_022977f8(s);
    func_ov095_02294438(&s->unk_ac);
    if (!s->func_ov111_02296978(0x10)) {
        func_020943f8();
    }
}

void func_ov111_022978f0(S *s, u32 a) {
    s32 r;
    u32 name;
    u32 g = data_021f482c;
    if (a == 0) {
        name = data_ov111_022989b8[0];
    } else {
        name = data_ov111_022989b8[a - 1];
    }
    r = func_020641ec(name, g, -4, 0);
    {
        u8 *src = s->unk_2468;
        MI_CpuCopy8((void *)(r + 0x100), src + 0x100, 0x140);
        if (a == 1) {
            func_0206ee0c(src, 0, 4, 0x1f, 9, 5, 6);
        }
    }
    func_020e85fc(g, r);
    func_ov095_0229434c(&s->unk_ac);
}

void func_ov111_02297814(S *s) {
    u32 r4 = s->func_ov002_02200920() + 0x60;
    u32 t;
    func_ov095_02293b60(&s->unk_ac, 0x80, r4, 2);
    func_ov095_02293a78(&s->unk_ac, 0x80, r4);
    if (s->unk_9a != 0) {
        if (s->unk_9b < 2) {
            s->unk_9b = s->unk_9b + 1;
        }
        t = 7;
    } else {
        if (s->unk_9b != 0) {
            s->unk_9b = s->unk_9b - 1;
        }
        t = 6;
    }
    func_ov095_02293a30(&s->unk_ac, 0x80, r4, t, s->unk_9b);
    s->unk_9c = s->unk_9c + 1;
    if (s->unk_9a == 0 && (s->unk_9c & 0x10) != 0) {
        func_ov095_022938f8(&s->unk_ac, s->unk_a1 + 0x18, r4 - 0x38, 2);
    }
    func_ov095_0229388c(&s->unk_ac, 0x80, r4);
    func_ov095_022937e4(&s->unk_ac, 0x80, r4, s->unk_94);
}

void func_ov111_022977f8(S *s) {
    if (s->unk_a8 != NULL) {
        func_020a7fd8(s->unk_a8);
        s->unk_a8 = NULL;
    }
}

void func_ov111_0229773c(S *s) {
    if (s->unk_a8 == NULL) {
        s->unk_a8 = (Unk_02050288 *)func_020a8054(0x13d, 0x15, 2);
        if (s->unk_a8 != NULL) {
            s->unk_a8->unk_2c = 3;
            s->unk_a8->unk_50 = 1;
            s->unk_a8->unk_55 = 0;
            s->unk_a8->unk_39 = 2;
            s->unk_a8->unk_38 = 1;
            if (s->func_ov111_02296e7c()) {
                u32 a = s->unk_a0;
                u32 b = s->unk_9f;
                u32 lo, cnt;
                if (b > a) {
                    lo = a;
                    cnt = b - a;
                } else {
                    lo = b;
                    cnt = a - b;
                }
                s->unk_a8->func_02050c04(2, 1, lo, cnt);
            } else {
                u32 r = func_ov095_02293da0(&s->unk_ac);
                if (r != 0) {
                    s->unk_a8->func_02050c04(0xe, 2, s->unk_9e - r, r);
                }
            }
        }
    }
}

void func_ov111_022976bc(S *s) {
    func_ov111_0229773c(s);
    if (s->unk_a8 != NULL) {
        ((Unk_020e2a78 *)&s->unk_3c68)->func_020a7aa0(&s->unk_3c9c, 0, 0);
        Unk_02050288 *t = s->unk_a8;
        t->unk_10 = ((Unk_02050288 *)&s->unk_3c68)->func_0c();
        s->unk_a8->func_02050c90();
        s->unk_94 = func_020512e0(s->unk_3c9c.unk_0e, 0x20) * 0x1f / 0x20;
        if (s->unk_94 > 0x1f) {
            s->unk_94 = 0x1f;
        }
    }
}

void func_ov111_02297664(S *s) {
    Unk_0209865c *r = func_0209750c();
    Unk_020e1c64 buf;
    ((Unk_020940a0 *)r->func_0209888c())->func_020940d0((Unk_020e2a78 *)&buf);
    func_020b30bc(&s->unk_3c68);
    func_02038fe8(*(s32 *)(data_020cbb18 + 0x64), &buf, &s->unk_3c68);
    func_ov111_02297360(s);
    func_ov111_022976bc(s);
}

void func_ov111_02297650(S *s) {
    func_02038fd4(*(s32 *)(data_020cbb18 + 0x64));
}

BOOL func_ov111_022975ec(S *s, u32 a) {
    if (s->func_ov111_02296e7c()) {
        func_ov111_02297514(s);
        func_ov095_02293dc0(&s->unk_ac);
    }
    if (func_ov095_022940f0(&s->unk_ac, s->unk_3c9c.unk_0e, a, &s->unk_9e, 0x20, 0xa0, 0, 1)) {
        s->func_ov111_02296ec0();
        func_ov111_022976bc(s);
    } else {
        return FALSE;
    }
    return TRUE;
}

BOOL func_ov111_02297558(S *s, Unk_ov111_022970cc_Status a) {
    if (s->func_ov111_02296e7c()) {
        func_ov095_02293dc0(&s->unk_ac);
        func_0200402c(0x35);
    } else if (s->unk_9e != 0) {
        s->unk_9f = s->unk_9e;
        s->unk_a0 = s->unk_9e - 1;
        func_0200402c(0x35);
    } else if (s->unk_3c9c.unk_0e[0] != 0) {
        s->unk_9f = 0;
        s->unk_a0 = 1;
        func_0200402c(0x35);
    } else {
        if (a != 0) {
            func_0200402c(0x34);
        }
        return FALSE;
    }
    func_ov111_02297514(s);
    func_ov111_022976bc(s);
    s->func_ov111_02296ec0();
    return TRUE;
}

void func_ov111_02297514(S *s) {
    u32 a = s->unk_a0;
    u32 b = s->unk_9f;
    u32 lo, hi;
    if (b > a) {
        lo = a;
        hi = b;
    } else {
        lo = b;
        hi = a;
    }
    s->unk_9e = func_ov095_02293fb4(&s->unk_ac, s->unk_3c9c.unk_0e, lo, hi, 0x20);
    s->func_ov111_02296e64();
}

BOOL func_ov111_022974c0(S *s) {
    u32 a = s->func_ov111_02296ea4();
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f90(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_02297498(S *s) {
    if (func_ov111_022974c0(s)) {
        s->func_ov111_02296ec0();
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

BOOL func_ov111_02297444(S *s) {
    u32 a = s->func_ov111_02296ea4();
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f8c(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_0229741c(S *s) {
    if (func_ov111_02297444(s)) {
        s->func_ov111_02296ec0();
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

BOOL func_ov111_022973c8(S *s) {
    u32 a = s->func_ov111_02296ea4();
    if (a == 0) return FALSE;
    u32 b = func_ov095_02293f88(&s->unk_ac, a);
    if (b == 0) return FALSE;
    if (func_ov095_02293f94(&s->unk_ac, s->unk_3c9c.unk_0e, b, s->unk_9e, 0x20, 0xa0)) return TRUE;
    return FALSE;
}

void func_ov111_022973a0(S *s) {
    if (func_ov111_022973c8(s)) {
        s->func_ov111_02296ec0();
        func_ov111_022976bc(s);
    } else {
        func_ov111_02297224(s);
    }
}

void func_ov111_02297360(S *s) {
    s->unk_9c = 0x10;
    s->unk_a1 = 0;
    s->unk_9e = 0;
    s->func_ov111_02296e64();
    s->func_ov111_0229698c();
    func_ov095_022951e4(&s->unk_ac);
    func_0205125c(s->unk_3c9c.unk_0e, 0x20);
}

void func_ov111_022972fc(S *s) {
    if (s->func_ov111_02296e7c()) {
        u32 a = s->unk_a0;
        u32 b = s->unk_9f;
        u32 lo, cnt;
        if (b > a) {
            lo = a;
            cnt = b - a;
        } else {
            lo = b;
            cnt = a - b;
        }
        func_0205125c(s->unk_3e38, 0x20);
        func_02051268(s->unk_3c9c.unk_0e + lo, s->unk_3e38, cnt);
        s->func_ov111_02296968(8);
        func_ov095_022923f8(&s->unk_ac);
        s->func_ov111_0229698c();
    }
}

void func_ov111_02297230(S *s) {
    if (s->func_ov111_02296978(8)) {
        s32 n;
        s32 i;
        s32 z;
        func_ov095_02293d94(&s->unk_ac);
        if (s->func_ov111_02296e7c()) {
            s->unk_9e = func_ov095_02293fb4(&s->unk_ac, s->unk_3c9c.unk_0e, s->unk_9f, s->unk_a0, 0x20);
            s->func_ov111_02296958(1);
        }
        func_ov095_02293dc0(&s->unk_ac);
        n = func_020512e0(s->unk_3e38, 0x20);
        i = 0;
        z = i;
        for (; i < n; i++) {
            if (!func_ov095_022940f0(&s->unk_ac, s->unk_3c9c.unk_0e, s->unk_3e38[i], &s->unk_9e, 0x20, 0xa0, z, z)) {
                if (i == 0) {
                    func_ov111_02297224(s);
                }
                i = n;
            }
        }
        s->func_ov111_02296ec0();
        func_ov111_022976bc(s);
        func_ov095_022923ec(&s->unk_ac);
        func_ov095_02293d88(&s->unk_ac);
    }
}

void func_ov111_02297224(S *s) {
    func_0200402c(0x34);
}

s32 Unk_ov111_02298a48::func_ov111_022970cc(u32 x) {
    Unk_ov111_022970cc_Status r = UNK_OV111_ST_1;
    s32 t = func_ov095_02293dc8(&unk_ac, x, 6);
    if (t != 0) {
        func_ov111_022976bc(this);
        return t;
    }
    if (func_ov095_0229423c(&unk_ac, x)) {
        switch (x - 0x100) {
        case 0:
            func_ov111_02297558(this, r);
            break;
        case 3:
            func_ov111_02297498(this);
            r = UNK_OV111_ST_2;
            break;
        case 4:
            func_ov111_0229741c(this);
            r = UNK_OV111_ST_2;
            break;
        case 5:
            func_ov111_022973a0(this);
            r = UNK_OV111_ST_2;
            break;
        case 6:
            break;
        case 24:
            func_ov111_022972fc(this);
            r = UNK_OV111_ST_2;
            break;
        case 25:
            func_ov111_02297230(this);
            r = UNK_OV111_ST_2;
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            func_ov111_0229844c(this, x - 0x10a, 0);
            r = UNK_OV111_ST_2;
            break;
        case 27:
        case 28:
        case 29:
        case 30:
            if (unk_a2 != 0) {
                return 0;
            }
            func_ov095_02293938(&unk_ac, x);
            func_ov111_02297bec(this);
            func_ov111_02296a6c();
            r = UNK_OV111_ST_3;
            break;
        default:
            return 0;
        }
    } else {
        s32 r6 = func_ov111_022975ec(this, (u8)x);
        if (func_ov095_02295264(&unk_ac)) {
            func_ov111_02297bb0(this, 0x1c, r);
            return 4;
        }
        if (func_ov095_02295258(&unk_ac)) {
            func_ov111_02297bb0(this, 0x1c, r);
            return 4;
        }
        if (r6 == 0) {
            func_ov111_02297224(this);
        }
    }
    return r;
}

s32 Unk_ov111_02298a48::func_ov111_02297070() {
    func_ov095_02295194(&unk_ac);
    s32 r4 = func_ov095_02294a44(&unk_ac, data_021ef5f0, data_021ef5ec);
    if (r4 == -1) {
        return 0;
    }
    s32 r6 = func_ov111_022970cc(func_ov095_02294864(&unk_ac, r4, 8));
    func_ov095_02294d40(&unk_ac, r4);
    func_ov095_02294318(&unk_ac);
    return r6;
}

BOOL Unk_ov111_02298a48::func_ov111_02297044() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (func_ov095_022939f8(&unk_ac)) {
        return func_ov111_02296ffc();
    }
    return FALSE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296ffc() {
    if (unk_9b != 0) {
        return FALSE;
    }
    if (func_020512e0(unk_3c9c.unk_0e, 0x20) == 0) {
        func_ov111_02297224(this);
    } else {
        func_02094860();
        func_0200402c(0x32);
        func_ov111_02297650(this);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296f9c() {
    s32 a = data_021ef5f0;
    s32 b = data_021ef5ec;
    if (b < 0x24 || b >= 0x3c) {
        return FALSE;
    }
    if (a < 0x10 || a >= 0xc8) {
        return FALSE;
    }
    if (a < 0x18) {
        a = 0x18;
    }
    func_ov111_02296f34(a);
    func_ov111_02296968(1);
    unk_9f = unk_9e;
    unk_a0 = unk_9e;
    return TRUE;
}

void Unk_ov111_02298a48::func_ov111_02296f58() {
    s32 v = data_021ef5f0;
    if (v < 0x18) {
        v = 0x18;
    }
    if (v >= 0xc8) {
        v = 0xc7;
    }
    func_ov111_02296f34(v);
    if (unk_a0 != unk_9e) {
        func_0200402c(0x15);
    }
    unk_a0 = unk_9e;
}

void Unk_ov111_02298a48::func_ov111_02296f34(u32 v) {
    unk_a1 = v - 0x18;
    func_ov111_02296ef0();
    func_ov095_02293dc0(&unk_ac);
    func_ov111_022976bc(this);
}

void Unk_ov111_02298a48::func_ov111_02296ef0() {
    unk_a1 = func_ov095_02293f2c(&unk_ac, unk_3c9c.unk_0e, 0x20, 0xa0, unk_a1, &unk_9e);
    unk_9c = 0x10;
    func_ov111_0229698c();
}

void Unk_ov111_02298a48::func_ov111_02296ec0() {
    unk_a1 = func_02051348(unk_3c9c.unk_0e, unk_9e);
    unk_9c = 0x10;
    func_ov111_0229698c();
}

u32 Unk_ov111_02298a48::func_ov111_02296ea4() {
    if (unk_9e == 0) {
        return 0;
    }
    return unk_3c9c.unk_0e[unk_9e - 1];
}

BOOL Unk_ov111_02298a48::func_ov111_02296e7c() {
    if (!func_ov111_02296978(1) || unk_9f == unk_a0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov111_02298a48::func_ov111_02296e64() {
    unk_9f = 0;
    unk_a0 = 0;
    func_ov111_02296958(1);
}

s32 Unk_ov111_02298a48::func_ov111_02296dd0(void *pad) {
    if (pad == 0) {
        return 0;
    }
    if (func_ov002_0220126c(pad)) {
        if (*(volatile u8 *)&unk_9e != 0) {
            unk_9e = *(volatile u8 *)&unk_9e - 1;
            return 1;
        }
    } else if (func_ov002_0220125c(pad)) {
        if (*(volatile u8 *)&unk_9e + 1 <= func_020512e0(unk_3c9c.unk_0e, 0x20)) {
            unk_9e = *(volatile u8 *)&unk_9e + 1;
            return 1;
        }
        return 4;
    }
    if (func_ov002_0220128c(pad)) {
        return 2;
    }
    if (func_ov002_0220127c(pad)) {
        return 3;
    }
    return 0;
}

BOOL Unk_ov111_02298a48::func_ov111_02296d4c() {
    if ((data_021f47d8[1] & 1) == 0) {
        return FALSE;
    }
    s32 r4 = func_ov095_02292404(&unk_ac);
    if (r4 == -1) {
        return FALSE;
    }
    if (func_ov095_02294864(&unk_ac, r4, 8) == 0x106) {
        if (func_ov111_02296ffc()) {
            ((Unk_ov002_0220464c *)&unk_3ccc)->func_ov002_02202b68();
            func_ov002_02200a58(0xd);
            return TRUE;
        }
        return FALSE;
    }
    func_ov095_02294d40(&unk_ac, r4);
    func_ov111_02296a8c();
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296cf0() {
    if ((data_021f47d8[1] & 2) == 0) {
        return FALSE;
    }
    func_ov095_02293da8(&unk_ac);
    if (func_ov111_02297558(this, UNK_OV111_ST_0)) {
        func_ov095_02294318(&unk_ac);
        unk_98 = unk_8d;
        func_ov002_02200a58(8);
    } else {
        func_ov111_0229844c(this, 7, 0);
    }
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296c88() {
    if ((data_021f47d8[1] & 0x100) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(&unk_ac, 0xc)) {
        return FALSE;
    }
    func_ov111_022970cc(0x119);
    func_ov095_02294d40(&unk_ac, 0xdc);
    func_ov111_02296aac();
    unk_98 = unk_8d;
    func_ov002_02200a58(0xc);
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296c28() {
    if ((data_021f47d8[1] & 0x200) == 0) {
        return FALSE;
    }
    if (func_ov095_02295440(&unk_ac, 0xb)) {
        return FALSE;
    }
    func_ov111_022970cc(0x118);
    func_ov095_02294d40(&unk_ac, 0xdb);
    unk_98 = unk_8d;
    func_ov002_02200a58(0xb);
    return TRUE;
}

BOOL Unk_ov111_02298a48::func_ov111_02296bec() {
    if ((data_021f47d8[1] & 8) == 0) {
        return FALSE;
    }
    if (func_ov111_02296ffc()) {
        func_ov111_02296b78();
        func_ov002_02200a58(0xd);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov111_02298a48::func_ov111_02296b9c() {
    func_ov111_02296958(2);
    func_ov095_022924f0(&unk_ac);
    s32 a = func_ov095_02292580(&unk_ac);
    s32 b = func_ov095_02292544(&unk_ac);
    ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202a40(a, b);
    ((Unk_ov002_0220464c *)&unk_3ccc)->func_ov002_02202d00(1);
    func_ov111_02296a44();
}

void Unk_ov111_02298a48::func_ov111_02296b78() {
    ((Unk_ov002_0220464c *)&unk_3ccc)->func_ov002_02202d00(0);
    unk_3ccc.vfunc_0c();
}

void Unk_ov111_02298a48::func_ov111_02296b04() {
    if (func_ov111_02296978(2)) {
        ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_022029e8(unk_a1 + 0x18, 0x28, 3, 1);
        unk_98 = 9;
    } else {
        s32 a = func_ov095_02292580(&unk_ac);
        s32 b = func_ov095_02292544(&unk_ac);
        ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_022029e8(a, b, 2, 1);
        unk_98 = 3;
    }
    func_ov002_02200a58(4);
}

void Unk_ov111_02298a48::func_ov111_02296aac() {
    if (func_ov111_02296978(2)) {
        ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202a40(unk_a1 + 0x18, 0x28);
    } else {
        s32 a = func_ov095_02292580(&unk_ac);
        s32 b = func_ov095_02292544(&unk_ac);
        ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202a40(a, b);
    }
    unk_3ccc.vfunc_0c();
}

void Unk_ov111_02298a48::func_ov111_02296a8c() {
    ((Unk_ov002_0220464c *)&unk_3ccc)->func_ov002_02202b68();
    func_ov002_02200a58(5);
}

void Unk_ov111_02298a48::func_ov111_02296a6c() {
    ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202af0();
    func_ov002_02200a58(7);
}

void Unk_ov111_02298a48::func_ov111_02296a44() {
    ((Unk_ov002_02202d98 *)&unk_3ccc)->func_ov002_02202a78();
    unk_3ccc.vfunc_0c();
    func_ov002_02200a58(3);
}

void Unk_ov111_02298a48::func_ov111_02296a30(u32 a) { func_ov095_02294648(&unk_ac, a, 6, 1); }

void Unk_ov111_02298a48::func_ov111_02296a24() { func_ov095_02294358(&unk_ac, 6); }

void Unk_ov111_02298a48::func_ov111_0229698c() {
    func_ov095_022953c0(&unk_ac, 0);
    if (func_ov111_02296e7c()) {
        func_ov095_02295340(&unk_ac, 0xb);
    } else {
        func_ov095_022953c0(&unk_ac, 0xb);
    }
    if (func_ov111_02296978(8)) {
        func_ov095_02295340(&unk_ac, 0xc);
    } else {
        func_ov095_022953c0(&unk_ac, 0xc);
    }
    if (func_ov111_02296e7c()) {
        func_ov095_022942c0(&unk_ac);
        func_ov095_02295340(&unk_ac, 6);
    } else if (unk_9e == 0) {
        func_ov095_022942c0(&unk_ac);
    } else {
        func_ov095_02294250(&unk_ac, func_ov111_02296ea4());
    }
}

BOOL Unk_ov111_02298a48::func_ov111_02296978(u32 mask) {
    if (unk_a4 & mask) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov111_02298a48::func_ov111_02296968(u32 mask) { unk_a4 = unk_a4 | mask; }

void Unk_ov111_02298a48::func_ov111_02296958(u32 mask) { unk_a4 = unk_a4 & ~mask; }

u32 Unk_ov111_02298a30::vfunc_08() { return 0x20; }

u8 *Unk_ov111_02298a30::vfunc_0c() { return (u8 *)this + 0xe; }

// Data definition order is chosen so mwcc emits the objects in the original order
extern "C" char data_ov111_022989c8[] = "menu/chat2/b_cht.bsc";

extern "C" char data_ov111_022989e0[] = "menu/chat2/b_cht_0.bsc";

extern "C" char data_ov111_022989f8[] = "menu/chat2/b_cht_1.bsc";

extern "C" char data_ov111_02298a10[] = "menu/chat2/b_cht_2.bsc";

extern "C" u32 data_ov111_022989b8[4] = {(u32)data_ov111_022989c8, (u32)data_ov111_022989e0, (u32)data_ov111_022989f8, (u32)data_ov111_02298a10};

// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef vfunc_08
#undef vfunc_14

// ---------------------------------------------------------------------------------------------------------------------
// Real names of functions of other modules (plain names that are really methods / ctors / dtors)
#define func_02002fc8 _ZN12Unk_02002fc813func_02002fc8Ej
#define func_020805c4 _ZN12Unk_0208086013func_020805c4Ev
#define func_02094018 _ZN12Unk_020e1c64D1Ev
#define func_02094030 _ZN12Unk_020e1c64C1Ev
#define func_020940d0 _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78
#define func_0209888c _ZN12Unk_0209865c13func_0209888cEv
#define func_0206fcc8 _ZN12Unk_020e0488C1Ev
#define func_0206fca8 _ZN12Unk_020e0488D1Ev
#define func_020a7bd8 _ZN12Unk_020e2a7813func_020a7bd8EPS_
#define func_020a7a28 _ZN12Unk_020e2a7813func_020a7a28EPh
#define func_020a7a0c _ZN12Unk_020e2a7813func_020a7a0cEPS_
#define func_0208e290 _ZN12Unk_020e109813func_0208e290Ev

extern "C" {
BOOL _ZN17Unk_020d8c7c_Base8vfunc_14Ev(void *self, s32 a);
void _ZN12Unk_020d8c7c8vfunc_08Ev(void *self, s32 a);
void _ZN18Unk_ov002_0220477019func_ov002_022039f8Ehii(void *self, s32 x, s32 a, s32 b);
void func_02002fc8(s32 a, void *buf);
s32 func_020805c4(void *self);
void func_02094018(void *p);
void func_02094030(void *p);
void func_020940d0(s32 a, void *buf);
s32 func_0209888c(void *self);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void func_020a7bd8(void *self, void *src);
void func_020a7a28(void *self, const void *s);
void func_020a7a0c(void *self, void *src);
void func_0208e290(void *self, void *src);

void func_020021b8(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void func_020021fc(s32 a, s32 b, s32 c);
void func_0200402c(s32 a);
void func_0206e020();
BOOL func_0206e2f4();
BOOL func_0206e308();
void func_0206ef28();
void func_0206ef3c();
void func_0206f290(void *p);
void func_0206f2b0(void *p);
void func_02001564(s32 a);
void func_02001750(s32 a);
s32 func_02001580();
void func_020016bc(s32 a);
void func_020016cc(s32 a);
void func_0200152c(s32 a);
void func_02001724(s32 a, s32 b);
void func_020016b0(s32 a);
void func_0200151c(s32 a);
void func_02001554(s32 a);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *func_020ed174(void *p);
void func_020ed0d8(void *p, u32 v);
void func_020ed03c(void *p, u32 v);
s32 func_01ffcb0c(s32 a, s32 b);
void func_02065b5c(void *p);
void func_02065ba4(void *p, s32 a);
void func_02065bd0(void *p, s32 a);
void func_020b3558(void *buf, u8 *c, s32 z);
void func_0206f994(void *dst, const void *s, s32 len);
void func_0206f9fc(void *a, s32 v);
void *func_0209750c();
s32 func_02097740(void *a, s32 b);
s32 func_020978c8(void *a, s32 b);
void *func_02097868(void *a, s32 b);
s32 func_0207bf84(void *a, s32 b);
void *func_0207bf60(void *a, s32 b);
s32 func_0207f854(void *a, s32 b);
BOOL func_0206ef00();
void func_0200212c(s32 a);
s32 func_0200273c(s32 a);
s32 func_0200140c();
s32 func_0200142c();
void func_02002700(s32 a);
void func_020013e0();
s32 func_020013cc(s32 a);
void func_020020b8(s32 a);
void func_02002398(s32 a, u32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
u8 *func_020641ec(const char *path, void *heap, s32 a, s32 b);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
void MIi_CpuClear16(s32 v, void *dst, s32 n);
void func_020024f0(void *buf, s32 a, s32 b, s32 c);
void func_020026c4(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void func_0200261c(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void func_02002654(char *buf, void *h, s32 x);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void GXS_LoadOBJPltt(const void *p, u32 a, u32 b);
s32 func_0206e61c();

extern void *data_021c6210;
extern void *data_021f482c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern volatile u16 data_021f47d8[];
extern u8 data_021d735c[];
extern u8 data_021dfd8c[];
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021ef5f8;
extern u8 data_021ef5f4;
extern u8 data_021edb5c[];
}

void operator delete(void *p);

// Constructors / destructors that the symbols name differently from what the compiler generates (base-object C2 without
// the unused C1, ctor/dtor of the 0x0220464c family) are defined as extern "C" functions with their real mangled names.
extern "C" {
extern char _ZTV18Unk_ov002_022044c4[];
extern char _ZTV18Unk_ov002_022044e4[];
extern char _ZTV18Unk_ov002_02204754[];
extern void *_ZTV18Unk_ov002_0220464c[7];
extern void *_ZTV18Unk_ov002_02204614[7];
extern void *_ZTV18Unk_ov002_02204630[7];
extern char _ZTV12Unk_020d8c7c[];
void *_ZN17Unk_020d8c7c_BaseC2Ev(void *self);
void *_ZN12Unk_020e1098C2Ehi(void *self, u8 a, s32 b);
void *_ZN12Unk_020e100cC2Ei(void *self, s32 flag);
void *_ZN12Unk_020e100cD2Ev(void *self);
void *_ZN18Unk_ov002_022044d4C1Ev(void *self);
void *_ZN18Unk_ov002_022044b4C1Ev(void *self);
void *_ZN18Unk_ov002_02204604C1Ev(void *self);
void *_ZN18Unk_ov002_02204604D1Ev(void *self);
void _ZN12Unk_020e100c8vfunc_08Ev();
void _ZN18Unk_ov002_02202d988vfunc_0cEv();
void _ZN12Unk_020e0db48vfunc_10Eii();
}

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the main module

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();
    void func_02089140();
    s32 func_02089210(s32 v);
    s32 func_02089228(s32 v);
    s32 func_02089244();
    void *func_02089248();

    /* 0x00 */ u8 unk_00[0x14];
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public Unk_020d9218 {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

// buffer interface with write position at +4 and member at +8
class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// String buffer wrapping a text renderer (Unk_02050288) at +0x3c
class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u32 func_0206fa1c();
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);
    s32 func_02089f64();
    s32 func_02089f68();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e0d98 : public Unk_020e0db4 {
public:
    Unk_020e0d98(s32 flag);
    virtual ~Unk_020e0d98();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    s32 func_02089868();
    s32 func_0208987c();
    s32 func_02089880();
    s32 func_020898bc();
    BOOL func_02089a24();
    BOOL func_02089a40();
    void func_02089a5c(s32 flag);
    void func_02089ab0(u8 v);
    void func_02089ab8();
    void func_02089ac0(StrBuf *src);
    void func_02089ad8(s32 a, s32 b);
    void func_02089ae0();
    void func_02089ae8();
    void func_02089b00();
    void func_02089b08();
    void func_02089b10();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ Unk_02089270 unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ Unk_02050288 *unk_b0;
    /* 0xb4 */ Unk_02050288 *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();
    void func_0208d538(s32 idx);
    void func_0208d580(s32 idx);
    void func_0208d60c(s32 a, s32 b);
    void func_0208d63c();
    void func_0208d644();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ Unk_02089270 unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

class Unk_020e1028 : public Unk_020e0db4 {
public:
    Unk_020e1028(u32 flag);
    virtual ~Unk_020e1028();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d9a8();
    s32 func_0208d9d0();
    void func_0208d9d4(s32 idx);
    void func_0208da58(s32 *a, s32 *b);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ Unk_02089270 unk_14;
    /* 0x28 */ Unk_02089270 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class Unk_020e1098 : public Unk_020e0db4 {
public:
    Unk_020e1098(u8 a, s32 b);
    virtual ~Unk_020e1098();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208e110();
    s32 func_0208e138();
    void func_0208e13c(s32 v);
    void func_0208e1fc(s32 *x, s32 *y);
    void func_0208e288(s32 x, s32 y);
    void func_0208e2c8();
    void func_0208e2d0();
    void func_0208e2d8();

    /* 0x0c */ u8 unk_0c[0x64];
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
};

class Unk_020660f8 {
public:
    void func_02067940();
    void func_0206794c();
    s32 func_02067958();
    void func_02067978(Unk_020ddcf0 *p);
    void func_02067a60();
    void func_02067a6c();
    void func_02067a78();
    void func_02067abc(u8 *a, void *b);
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};
extern "C" Unk_020660f8 *func_02067918(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes

// 8-byte animation record
struct Unk_ov002_02203c5c_Rec {
    u32 unk_00;
    u32 unk_04 : 10;
    u32 unk_04_hi : 22;
};

extern "C" {
extern const u8 data_ov002_0220442c[];
extern const u8 data_ov002_02204430[];
extern const u8 data_ov002_02204434[];
extern const u8 data_ov002_02204440[];
extern const u8 data_ov002_0220444c[];
extern s32 data_ov002_02204544[];
extern Unk_ov002_02203c5c_Rec data_ov002_022046e4[];
extern Unk_ov002_02203c5c_Rec data_ov002_022046fc[];
extern Unk_ov002_02203c5c_Rec data_ov002_02204784[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047a4[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047cc[];
extern Unk_ov002_02203c5c_Rec data_ov002_022047fc[];
extern Unk_ov002_02203c5c_Rec data_ov002_0220482c[];
}

// Vtable 0x02204468
class Unk_ov002_02204468 : public Unk_020e0d98 {
public:
    Unk_ov002_02204468();
    virtual ~Unk_ov002_02204468();

    BOOL func_ov002_02200680();
    void func_ov002_022006a4(u8 v);
    void func_ov002_022006ac(s32 v);
    void func_ov002_022006b0();
    void func_ov002_022006b8();
    void func_ov002_022006c0();
    BOOL func_ov002_022006e4(s32 a);
    s32 func_ov002_0220071c();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// vptr-only class (vtable 0x022044d4)
class Unk_ov002_022044d4 {
public:
    Unk_ov002_022044d4();
    virtual ~Unk_ov002_022044d4();
};

// cursor / input repeat state (view of the object at +0x50 of Unk_ov002_022044e4; the vptr is a Unk_ov002_022044d4)
class Unk_ov002_02201240 {
public:
    u32 unk_00;
    s16 unk_04;
    s16 unk_06;
    s16 unk_08;
    s16 unk_0a;
    s16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();
};

// slider base class (vtable 0x022044c4)
class Unk_ov002_022044c4 {
public:
    Unk_ov002_022044c4();
    virtual ~Unk_ov002_022044c4();
    s32 unk_04;
    s32 unk_08;
    s32 func_ov002_022011ac(s32 v);
    s32 func_ov002_022011b4(s32 v);
    BOOL func_ov002_022011cc();
    void func_ov002_022011ec(u32 n);
};

// slider class (vtable 0x022044b4)
class Unk_ov002_022044b4 : public Unk_ov002_022044c4 {
public:
    Unk_ov002_022044b4();
    virtual ~Unk_ov002_022044b4();
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    u8 unk_18;
    void func_ov002_02200fa8(s32 mode);
    void func_ov002_02200fe0(s32 mode);
    BOOL func_ov002_0220102c(s32 mode);
    void func_ov002_02201090(s32 mode);
    void func_ov002_022010c4(s32 mode);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();
};

// methods of the same slider object that the symbols list under another class name
class Unk_ov002_02201194 : public Unk_ov002_022044b4 {
public:
    void func_ov002_02200d04(s32 v);
    void func_ov002_02200d08(s32 a);
    void func_ov002_02200d78(s32 a, s32 b, s32 c);
    void func_ov002_02200dd8(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e18(s32 a, s32 mode, s32 dist);
    void func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_02200f54(s32 a);
};

class Unk_ov002_022044e4;
typedef void (Unk_ov002_022044e4::*Unk_ov002_02200a68_Fn)();

// Vtable 0x022044e4
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
    void func_ov002_02200850(s32 v);
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200874(s32 a, s32 mode);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200970(s32 a, s32 b, s32 c);
    void func_ov002_02200980();
    BOOL func_ov002_02200998();
    BOOL func_ov002_022009a4();
    BOOL func_ov002_022009b0();
    BOOL func_ov002_022009bc();
    u32 func_ov002_022009c8();

    /* 0x50 */ Unk_ov002_022044d4 unk_50;
    /* 0x54 */ u8 unk_54[0x10];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ Unk_ov002_022044b4 unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// 8-byte-aligned owner helpers of the menu: text elements
// Sprite/text pair element (0x50 bytes), vtable 0x022046dc
class Unk_ov002_022046dc {
public:
    Unk_ov002_022046dc();
    virtual ~Unk_ov002_022046dc();

    u32 func_ov002_02203c0c();
    void func_ov002_02203c1c();
    void func_ov002_02203c28(u32 m);
    void func_ov002_02203c38(u32 m);
    BOOL func_ov002_02203c48(u32 m);
    void func_ov002_02203c5c(u8 a, u8 b);
    void func_ov002_02203ca4(u8 v);
    void func_ov002_02203cc4(u8 v);
    void func_ov002_02203ce4(u8 v);
    void func_ov002_02203cf8(Unk_ov002_02203c5c_Rec *p, u8 a, u8 b);
    void func_ov002_02203ab8();
    void func_ov002_02203ac4();
    void func_ov002_02203ad0();
    void func_ov002_02203adc();
    void func_ov002_02203ae8();
    BOOL func_ov002_02203af4();
    void func_ov002_02203b30(s32 x, s32 y, s32 c);

    /* 0x04 */ Unk_020e0488 unk_04;
    /* 0x44 */ Unk_ov002_02203c5c_Rec *unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
    /* 0x4b */ u8 unk_4b;
    /* 0x4c */ u8 unk_4c;
};

// Menu, vtable 0x02204770
class Unk_ov002_02204770 : public Unk_020e0d98 {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void vfunc_10(s32 a, s32 b);

    void func_ov002_022039d8();
    void func_ov002_022039f8(u8 a, s32 b, s32 c);
};

// Owner, vtable 0x022046cc
class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    virtual ~Unk_ov002_022046cc();

    void func_ov002_022034c4(u8 v);
    void func_ov002_02203510(s32 v);
    void func_ov002_02203548();
    void func_ov002_02203590();
    void func_ov002_022035d8();
    void func_ov002_02203608();
    void func_ov002_02203650();
    void func_ov002_02203698();
    void func_ov002_022036a4(s32 a);
    void func_ov002_02203900();

    /* 0x004 */ Unk_ov002_022046dc unk_04[2];
    /* 0x0a4 */ Unk_ov002_02204770 unk_a4;
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 unk_161;
};

// Methods of the same object that the symbols list under another class name
class Unk_ov002_02202fac : public Unk_ov002_022046cc {
public:
    void func_ov002_02202fac(s32 idx);
    void func_ov002_02202fc8(s32 idx);
    void func_ov002_02202fe4(s32 idx);
    s32 func_ov002_02203000(s32 idx);
    void func_ov002_0220301c();
    void func_ov002_02203044();
    void func_ov002_0220306c();
    void func_ov002_0220308c();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    BOOL func_ov002_02203110(s32 idx);
    BOOL func_ov002_0220314c(s32 idx, s32 x, s32 y);
    void func_ov002_02203268();
    void func_ov002_02203274(s32 x);
    void func_ov002_022032b0(s32 x);
    void func_ov002_022032ec(s32 x);
    void func_ov002_02203328();
    void func_ov002_02203370(s32 x);
    void func_ov002_022033ac();
    void func_ov002_022033ec(s32 x);
    void func_ov002_02203458(s32 x);
};

// Base of the 0x0220471c / 0x02204738 classes
class Unk_ov002_02204754 : public Unk_020e1098 {
public:
    Unk_ov002_02204754(u8 a, s32 b);
    virtual ~Unk_ov002_02204754();
    virtual void vfunc_10(s32 a, s32 b);
};

class Unk_ov002_0220471c : public Unk_ov002_02204754 {
public:
    Unk_ov002_0220471c();
    virtual ~Unk_ov002_0220471c();
};

// Vtable 0x02204738
class Unk_ov002_02204738 : public Unk_ov002_02204754 {
public:
    Unk_ov002_02204738();
    virtual ~Unk_ov002_02204738();

    BOOL func_ov002_02203e24();
    void func_ov002_02203e88(s32 v, s32 x, s32 y);
    void func_ov002_02203ec8(s32 v);
    void func_ov002_02203edc(s32 v);
    BOOL func_ov002_02203f08();
    s32 func_ov002_02203f28(s32 k);
    s32 func_ov002_02203f78(s32 k);
};

// Non-polymorphic holder object (members at +0x00 and +0xc0)
class Unk_ov002_022040ec {
public:
    Unk_ov002_022040ec();
    ~Unk_ov002_022040ec();

    BOOL func_ov002_0220403c();
    s32 func_ov002_02204044();
    BOOL func_ov002_0220405c();
    void func_ov002_0220407c();
    BOOL func_ov002_022040a4();
    void func_ov002_022040c0();
    void func_ov002_022040c8();
    void func_ov002_022040d4();
    void func_ov002_022040ec();
    BOOL func_ov002_02204140();
    void func_ov002_02204174();
    BOOL func_ov002_0220418c();
    void func_ov002_022041b8(u8 *a, s32 b);
    BOOL func_ov002_02204234(s32 a);
    void func_ov002_02204340(u8 *a, s32 b, u32 c);
    void func_ov002_02204394(u8 *a, s32 b, u32 c);

    /* 0x00 */ Unk_ov002_02204468 unk_00;
    /* 0xc0 */ Unk_020ddcf0 unk_c0;
    /* 0xe0 */ u8 unk_e0[0x1c];
    /* 0xfc */ Unk_020660f8 *unk_fc;
    /* 0x100 */ u8 unk_100[4];
    /* 0x104 */ u8 unk_104;
    /* 0x105 */ u8 unk_105;
};

// Scroll/move helper embedded at +0x4c of Unk_ov002_02202d98 (vtable 0x02204604)
class Unk_ov002_02204604 {
public:
    Unk_ov002_02204604();
    virtual ~Unk_ov002_02204604();

    BOOL func_ov002_02202674();
    void func_ov002_02202694(s32 x, s32 y, s32 n);
    void func_ov002_022026c4(s32 x, s32 y, s32 n);
    void func_ov002_022026f4(s32 x, s32 y);
    void func_ov002_02202700();
    s32 func_ov002_02202708();
    s32 func_ov002_02202710();
    BOOL func_ov002_02202718();
    void func_ov002_022027a4();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
};

// Intermediate base of the vtables 0x02204614 / 0x02204630 / 0x0220464c
class Unk_ov002_02202d98 : public Unk_020e100c {
public:
    Unk_ov002_02202d98(BOOL flag);
    ~Unk_ov002_02202d98();
    virtual void vfunc_0c();

    void func_ov002_02202844();
    s32 func_ov002_02202878();
    s32 func_ov002_0220288c();
    s32 func_ov002_022028a0();
    s32 func_ov002_022028c8();
    BOOL func_ov002_022028f0();
    BOOL func_ov002_022028fc();
    BOOL func_ov002_02202928();
    void func_ov002_0220298c(s32 x, s32 y, s32 n, u8 e);
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a18(s32 x, s32 y, s32 n);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a6c(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();

    /* 0x4c */ Unk_ov002_02204604 unk_4c;
};

class Unk_ov002_0220464c : public Unk_ov002_02202d98 {
public:
    Unk_ov002_0220464c(BOOL flag);
    virtual ~Unk_ov002_0220464c();

    void func_ov002_02202b68();
    void func_ov002_02202be0();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
};

class Unk_ov002_02204614 : public Unk_ov002_0220464c {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
};

class Unk_ov002_02204630 : public Unk_ov002_0220464c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();
};

class Unk_ov002_022046b0 : public Unk_020e1028 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();

    s32 func_ov002_02202e60();
    s32 func_ov002_02202e84();
    s32 func_ov002_02202ea8();
    s32 func_ov002_02202ebc();
    s32 func_ov002_02202ed0();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
};

// Element of the 5-entry array at +0x28 of the menu (0x48 bytes)
class Unk_ov002_02204568 : public Unk_020e0488 {
public:
    Unk_ov002_02204568();
    virtual ~Unk_ov002_02204568();

    void func_ov002_022024f8(u32 a, u16 b, u8 c, u8 d);
    void func_ov002_02202520(s32 v);

    /* 0x40 */ u16 unk_40;
    /* 0x42 */ u8 unk_42;
    /* 0x43 */ u8 unk_43;
    /* 0x44 */ u8 unk_44;
};

struct Unk_ov002_022013ac_Rec {
    u8 unk_00[5];
    u8 unk_05[5];
    u8 unk_0a;
};

// Menu/selection object, vtable 0x02204558
class Unk_ov002_02204558 {
public:
    Unk_ov002_02204558();
    virtual ~Unk_ov002_02204558();

    void func_ov002_02202200(Unk_020e0d98 *p);
    void func_ov002_02202278(s32 a, s32 b);
    void func_ov002_02202294(s32 a, s32 b);
    void func_ov002_0220229c(s32 a, s32 b);
    s32 func_ov002_022022e0(s32 a, s32 b);
    void func_ov002_02202310(s32 a, s32 b, const char *path);

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u16 unk_14;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
    /* 0x1a */ u8 unk_1a;
    /* 0x1b */ u8 unk_1b;
    /* 0x1c */ u8 unk_1c;
    /* 0x1d */ u8 unk_1d;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
    /* 0x21 */ volatile u8 unk_21;
    /* 0x22 */ u8 pad_22[2];
    /* 0x24 */ const char *unk_24;
    /* 0x28 */ Unk_ov002_02204568 unk_28[5];
    /* 0x190 */ Unk_ov002_02204738 unk_190;
    /* 0x200 */ Unk_ov002_02204770 unk_200;
    /* 0x2bc */ Unk_ov002_022044b4 unk_2bc;
    /* 0x2d8 */ u8 unk_2d8[0x19];
};

// Methods of the same object that the symbols list under another class name
class Unk_ov002_022013ac : public Unk_ov002_02204558 {
public:
    void func_ov002_022013ac(void *buf, u32 c);
    void func_ov002_022013c4(u32 m);
    void func_ov002_022013cc(u32 m);
    BOOL func_ov002_022013d4(u32 m);
    s32 func_ov002_022013e4(void *p, u32 id);
    s32 func_ov002_02201438(u32 id);
    u32 func_ov002_0220144c(u32 a, u32 b);
    u32 func_ov002_02201490();
    u32 func_ov002_02201494();
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    s32 func_ov002_022014ac(s32 x, s32 y);
    s32 func_ov002_022014c0(s32 x, s32 y);
    s32 func_ov002_022014d4(s32 x, s32 y, s32 d);
    void func_ov002_02201534(Unk_ov002_022013ac_Rec *r);
    void func_ov002_0220160c(Unk_ov002_022013ac_Rec *r, s32 f);
    s32 func_ov002_02201680(Unk_ov002_022013ac_Rec *r, void *s, u32 v);
    void func_ov002_02201728();
    void func_ov002_0220175c();
    void func_ov002_02201784();
    BOOL func_ov002_022017a4();
    BOOL func_ov002_022017b4();
    void func_ov002_022017c4();
};

typedef Unk_ov002_022013ac Self;

struct Unk_ov002_022018e4_Arg {
    u8 v;
};

// Plain functions of the menu (they take the menu object first)
extern "C" {
void func_ov002_022018e4(s32 unused, s32 x, u32 id);
void func_ov002_02201938(s32 x, s32 y);
void func_ov002_02201958(s32 a, s32 b);
void func_ov002_02201984(s32 x, s32 y);
void func_ov002_022019a4(s32 a, s32 b);
BOOL func_ov002_022019d0(Self *self, s32 p, u8 *pos, u32 n);
BOOL func_ov002_02201a28(Self *self);
void func_ov002_02201a3c(Self *self, u32 x);
u8 func_ov002_02201a70(Self *self, s32 x);
void func_ov002_02201aa0(Self *self, s32 a, s32 b);
void func_ov002_02201ad8(Self *self, s32 x);
void func_ov002_02201b04(Self *self);
void func_ov002_02201b28(Self *self);
void func_ov002_02201b58(Self *self);
void func_ov002_02201c6c(Self *self);
s32 func_ov002_02201ca4(Self *self);
s32 func_ov002_02201cb0(Self *self);
void func_ov002_02201cb8(Self *self);
void func_ov002_02201d24(Self *self);
void func_ov002_02201df0(Self *self);
void func_ov002_02201e40(Self *self);
void func_ov002_02201ea4(Self *self);
void func_ov002_02201f18(Self *self);
void func_ov002_02202018(Self *self, u32 x);
void func_ov002_02202064(Self *self, s32 x);
void func_ov002_02202098(Self *self, s32 x);
void func_ov002_022020cc(Self *self, Unk_ov002_022018e4_Arg a, s32 x);
void func_ov002_022020fc(Self *self);
void func_ov002_02202144(Self *self);
void func_ov002_02202190(Self *self, s32 x, s32 y);
void func_ov002_022021d8(Self *self, s32 x, s32 y);
void func_ov002_022021f4(Self *self, s32 x, s32 y);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
s32 func_ov002_022016cc(u8 *p);
void func_ov002_022016e4(u8 *p, u8 v);
BOOL func_ov002_02201700(u8 *p, u32 a, u32 b);
void func_ov002_02202dd4(s32 a, void *b);
void func_ov002_02202e48();
void func_ov002_02202e54();
void func_ov002_02203920();
}

static inline BOOL Unk_ov002_022009d4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_ov002_022044d4::Unk_ov002_022044d4() {}

Unk_ov002_022044d4::~Unk_ov002_022044d4() {}

void Unk_ov002_02201240::func_ov002_022012f8()
{
    u32 prev = unk_0e;
    unk_0e = data_021f47d8[0] & 0xf0;
    u8 *p = &unk_0f;
    unk_0f |= (u8)(data_021f47d8[1] & 0xf0);
    u32 cur = unk_0e;
    if (cur == 0 || prev != cur) {
        unk_0f = data_021f47d8[1] & 0xf0;
        unk_0a = unk_04;
        unk_0c = unk_04;
    } else if (unk_0c > 0) {
        unk_0c--;
    } else {
        *p |= cur & 0xf0;
        unk_0a = unk_0a - unk_08;
        if (unk_0a < unk_06) {
            unk_0a = unk_06;
        }
        unk_0c = unk_0a;
    }
}

u32 Unk_ov002_02201240::func_ov002_022012ec()
{
    unk_10 = unk_0f;
    unk_0f = 0;
    return unk_10;
}

BOOL Unk_ov002_02201240::func_ov002_022012d8()
{
    if (unk_10 & 0x40) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012c4()
{
    if (unk_10 & 0x80) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_022012b0()
{
    if (unk_10 & 0x20) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_02201240::func_ov002_0220129c()
{
    if (unk_10 & 0x10) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220128c(u32 v)
{
    if (v & 0x40) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220127c(u32 v)
{
    if (v & 0x80) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220126c(u32 v)
{
    if (v & 0x20) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_ov002_0220125c(u32 v)
{
    if (v & 0x10) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov002_02201240::func_ov002_02201240(s32 a, s32 b, s32 c)
{
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
    unk_0a = 0;
    unk_0c = 0;
    unk_04 = a;
    unk_06 = b;
    unk_08 = c;
}

extern "C" void *_ZN18Unk_ov002_022044c4C2Ev(Unk_ov002_022044c4 *self) {
    *(void **)self = _ZTV18Unk_ov002_022044c4 + 8;
    return self;
}

Unk_ov002_022044c4::~Unk_ov002_022044c4() {}

void Unk_ov002_022044c4::func_ov002_022011ec(u32 n)
{
    unk_08 = 0x1000;
    unk_04 = 0x1000 / n;
}

BOOL Unk_ov002_022044c4::func_ov002_022011cc()
{
    s32 a = unk_08;
    if (a == 0) {
        return TRUE;
    }
    s32 b = unk_04;
    if (a > b) {
        unk_08 = a - b;
    } else {
        unk_08 = 0;
    }
    return FALSE;
}

s32 Unk_ov002_022044c4::func_ov002_022011b4(s32 v)
{
    return (v * func_01ffcb0c(unk_08, unk_08)) >> 12;
}

s32 Unk_ov002_022044c4::func_ov002_022011ac(s32 v)
{
    return (v * unk_08) >> 12;
}

Unk_ov002_022044b4::Unk_ov002_022044b4() {}

Unk_ov002_022044b4::~Unk_ov002_022044b4() {}

s32 Unk_ov002_022044b4::func_ov002_02201140()
{
    switch (unk_18) {
    case 0:
        return unk_0c;
    case 1:
        return -unk_0c;
    }
    return 0;
}

s32 Unk_ov002_022044b4::func_ov002_02201124()
{
    switch (unk_18) {
    case 2:
        return -unk_0c;
    case 3:
        return unk_0c;
    }
    return 0;
}

void Unk_ov002_022044b4::func_ov002_022010c4(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        if (unk_0c > unk_14) {
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        } else {
            func_0200151c(1);
            func_020016b0(0x1f);
        }
        break;
    case 1:
        if (unk_0c > unk_14) {
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        } else {
            func_02001554(1);
            func_020016cc(0x1f);
        }
        break;
    }
}

void Unk_ov002_022044b4::func_ov002_02201090(s32 mode)
{
    unk_0c = func_ov002_022011b4(unk_10);
    switch (mode) {
    case 0:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        break;
    case 1:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        break;
    }
}

BOOL Unk_ov002_022044b4::func_ov002_0220102c(s32 mode)
{
    if (func_ov002_022011cc()) {
        unk_0c = 0;
        switch (mode) {
        case 0:
            func_0200151c(1);
            func_020016b0(0x1f);
            break;
        case 1:
            func_02001554(1);
            func_020016cc(0x1f);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_022010c4(mode);
        break;
    default:
        func_ov002_02201090(mode);
        break;
    }
    return FALSE;
}

void Unk_ov002_022044b4::func_ov002_02200fe0(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    if (unk_0c > unk_14) {
        switch (mode) {
        case 0:
            func_0200152c(1);
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
            break;
        case 1:
            func_02001564(1);
            ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
            break;
        }
    }
}

// ---------------------------------------------------------------- Unk_ov002_022044e4

void Unk_ov002_022044b4::func_ov002_02200fa8(s32 mode)
{
    unk_0c = unk_10 - func_ov002_022011ac(unk_10);
    switch (mode) {
    case 0:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(2);
        break;
    case 1:
        ((Unk_ov002_02201194 *)this)->func_ov002_02200d08(0);
        break;
    }
}

BOOL Unk_ov002_02201194::func_ov002_02200f54(s32 a) {
    if (func_ov002_022011cc()) {
        switch (a) {
        case 0:
            func_0200151c(1);
            break;
        case 1:
            func_02001554(1);
            break;
        }
        return TRUE;
    }
    switch (unk_18) {
    case 0:
    case 1:
        func_ov002_02200fe0(a);
        break;
    default:
        func_ov002_02200fa8(a);
        break;
    }
    return FALSE;
}

void Unk_ov002_02201194::func_ov002_02200f18(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    func_0200152c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~a & 0x1f);
    func_ov002_02200d08(2);
}

void Unk_ov002_02201194::func_ov002_02200edc(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    func_0200152c(1);
    func_02001724(0x1f, 1);
    func_020016b0(~a & 0x1f);
    func_ov002_02200d08(2);
}

void Unk_ov002_02201194::func_ov002_02200ea4(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200e18(b, mode, dist);
    func_02001564(1);
    func_02001750(0x1f);
    func_020016cc(~a & 0x1f);
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200e58(s32 a, s32 b, s32 mode, s32 dist) {
    func_ov002_02200dd8(b, mode, dist);
    func_02001564(1);
    func_02001750(0x1f);
    if (func_02001580() & 2) {
        func_020016bc(a);
    } else {
        func_020016cc(~a & 0x1f);
    }
    func_ov002_02200d08(0);
}

void Unk_ov002_02201194::func_ov002_02200e18(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec(a);
    switch (unk_18) {
    case 0:
    case 1:
        unk_0c = 0xc0;
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_0c = 0x100;
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200dd8(s32 a, s32 mode, s32 dist) {
    unk_18 = mode;
    unk_14 = dist;
    func_ov002_022011ec(a);
    unk_0c = 0;
    switch (unk_18) {
    case 0:
    case 1:
        unk_10 = 0xc0;
        break;
    case 2:
    case 3:
        unk_10 = 0x100;
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200d78(s32 a, s32 b, s32 c) {
    switch (unk_18) {
    case 0:
        func_020021fc(a, -b, -(unk_0c + c));
        break;
    case 1:
        func_020021fc(a, -b, unk_0c - c);
        break;
    case 2:
        func_020021fc(a, unk_0c - b, -c);
        break;
    case 3:
        func_020021fc(a, -(unk_0c + b), -c);
        break;
    }
}

void Unk_ov002_02201194::func_ov002_02200d08(s32 a) {
    s32 x0 = 0;
    s32 y0 = 0;
    s32 x1 = 0xff;
    s32 y1 = 0xc0;
    switch (unk_18) {
    case 0:
        y0 = unk_0c - unk_14;
        if (y0 < 0) {
            y0 = x0;
        }
        break;
    case 1:
        y1 = unk_14 + 0xc0 - unk_0c;
        if (y1 > 0xbf) {
            y1 = 0xbf;
        }
        break;
    case 2:
        x1 = 0xff - unk_0c;
        if (x1 < 1) {
            x1 = 1;
        }
        break;
    case 3:
        x0 = unk_0c;
        if (x0 > 0xfe) {
            x0 = 0xfe;
        }
        break;
    }
    func_020021b8(a, x0, y0, x1, y1);
}

// ---------------------------------------------------------------- Unk_ov002_02201194

void Unk_ov002_02201194::func_ov002_02200d04(s32 v) { unk_10 = v; }

extern "C" void *_ZN18Unk_ov002_022044e4C2Ev(Unk_ov002_022044e4 *self) {
    _ZN17Unk_020d8c7c_BaseC2Ev(self);
    *(void *volatile *)self = _ZTV12Unk_020d8c7c + 8;
    *(void **)self = _ZTV18Unk_ov002_022044e4 + 8;
    _ZN18Unk_ov002_022044d4C1Ev(&self->unk_50);
    self->unk_64 = 0;
    self->unk_68 = 0;
    _ZN18Unk_ov002_022044b4C1Ev(&self->unk_70);
    return self;
}

Unk_ov002_022044e4::~Unk_ov002_022044e4() {}

BOOL Unk_ov002_022044e4::vfunc_04() {
    if (!Unk_020d8c7c_Base::vfunc_04()) {
        return FALSE;
    }
    unk_90 = *(s32 *)&unk_04[4];
    unk_6c = this;
    ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(8, 1, 7);
    return TRUE;
}

void Unk_ov002_022044e4::vfunc_08(s32 a) {
    func_0206f2b0(&unk_64);
    if (a == 2) {
        void *p = func_020ed174(this);
        if (p != 0) {
            u8 *q = (u8 *)p;
            func_020ed0d8(this, (u16)(*(u16 *)(q + 0x34) + 1));
            func_020ed03c(this, (u16)(*(u16 *)(q + 0x44) + 1));
        }
    }
    _ZN12Unk_020d8c7c8vfunc_08Ev(this, a);
}

BOOL Unk_ov002_022044e4::vfunc_10() {
    if (Unk_020d8c7c_Base::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_14(s32 a) {
    if (a == 2) {
        func_0206f290(&unk_64);
    }
    return _ZN17Unk_020d8c7c_Base8vfunc_14Ev(this, a);
}

BOOL Unk_ov002_022044e4::vfunc_1c() {
    if (Unk_020d8c7c_Base::vfunc_1c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::vfunc_20() { return Unk_020d8c7c_Base::vfunc_20(); }

BOOL Unk_ov002_022044e4::vfunc_48() {
    if (func_0206e308()) {
        func_ov002_02200a60(1);
    }
    if (func_0206e2f4()) {
        func_0206e020();
        func_ov002_02200a60(5);
    }
    return TRUE;
}

BOOL Unk_ov002_022044e4::vfunc_4c() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_50() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_54() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_58() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_5c() { return TRUE; }

BOOL Unk_ov002_022044e4::vfunc_18() {
    static Unk_ov002_02200a68_Fn tbl[6] = {
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_48,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_4c,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_50,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_54,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_58,
        (Unk_ov002_02200a68_Fn)&Unk_ov002_022044e4::vfunc_5c,
    };
    ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012f8();
    (this->*tbl[unk_8f])();
    return TRUE;
}

void Unk_ov002_022044e4::func_ov002_02200a60(u8 v) { unk_8f = v; }

void Unk_ov002_022044e4::func_ov002_02200a58(u8 v) { unk_8d = v; }

void Unk_ov002_022044e4::func_ov002_02200a50(u8 v) { unk_8c = v; }

BOOL Unk_ov002_022044e4::func_ov002_02200a14(s32 a) {
    if ((data_021f47d8[1] & 0xfff) != 0) {
        func_0206ef28();
        func_0200402c(0x866);
        if (a != 0) {
            func_0200402c(0x3b);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov002_022044e4::func_ov002_022009d4() {
    if (Unk_ov002_022009d4_Both()) {
        func_0206ef3c();
        func_0200402c(0x866);
        return TRUE;
    }
    return FALSE;
}

u32 Unk_ov002_022044e4::func_ov002_022009c8() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012ec(); }

BOOL Unk_ov002_022044e4::func_ov002_022009bc() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012d8(); }

BOOL Unk_ov002_022044e4::func_ov002_022009b0() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012c4(); }

BOOL Unk_ov002_022044e4::func_ov002_022009a4() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_022012b0(); }

BOOL Unk_ov002_022044e4::func_ov002_02200998() { return ((Unk_ov002_02201240 *)&unk_50)->func_ov002_0220129c(); }

void Unk_ov002_022044e4::func_ov002_02200980() { ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(8, 1, 7); }

void Unk_ov002_022044e4::func_ov002_02200970(s32 a, s32 b, s32 c) { ((Unk_ov002_02201240 *)&unk_50)->func_ov002_02201240(a, b, c); }

void *Unk_ov002_022044e4::operator new(unsigned long size) {
    void *p = func_020e8618(data_021c6210, size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

void Unk_ov002_022044e4::operator delete(void *p) { func_020e85fc(data_021c6210, p); }

s32 Unk_ov002_022044e4::func_ov002_02200920() { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02201140(); }

s32 Unk_ov002_022044e4::func_ov002_02200914() { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02201124(); }

BOOL Unk_ov002_022044e4::func_ov002_02200908(s32 a) { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_0220102c(a); }

BOOL Unk_ov002_022044e4::func_ov002_022008fc(s32 a) { return ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200f54(a); }

void Unk_ov002_022044e4::func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200f18(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200edc(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200ea4(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist) {
    if (b == 0) {
        b = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200e58(a, b, mode, dist);
}

void Unk_ov002_022044e4::func_ov002_02200874(s32 a, s32 mode) {
    if (a == 0) {
        a = 4;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200e18(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_0220085c(s32 a, s32 mode) {
    if (a == 0) {
        a = 3;
    }
    ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200dd8(a, mode, 0x30);
}

void Unk_ov002_022044e4::func_ov002_02200850(s32 v) { ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200d04(v); }

void Unk_ov002_022044e4::func_ov002_02200840(s32 a, s32 b, s32 c) { ((Unk_ov002_02201194 *)&unk_70)->func_ov002_02200d78(a, b, c); }

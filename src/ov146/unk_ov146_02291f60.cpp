// ov146: scene overlay (class Unk_ov146_02294080, vtable 0x02294080): wi-fi friend list menu.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

#define func_02089ad8 _ZN12Unk_020e0d9813func_02089ad8Eii
#define func_02089ae8 _ZN12Unk_020e0d9813func_02089ae8Ev
#define func_0208d4fc _ZN12Unk_020e100c13func_0208d4fcEv
#define func_0208d9a8 _ZN12Unk_020e102813func_0208d9a8Ev
#define func_0208dae8 _ZN12Unk_020e102813func_0208dae8Eii
#define func_020b8670 _ZN12Unk_020e45f813func_020b8670Ejhj
#define func_020b86c0 _ZN12Unk_020e45f813func_020b86c0Ejhjj
#define func_020b87d0 _ZN12Unk_020e45f813func_020b87d0Ev
#define func_02133150 _s32_div_f
#define func_ov002_02202844 _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev
#define func_ov002_02202878 _ZN18Unk_ov002_02202d9819func_ov002_02202878Ev
#define func_ov002_022028f0 _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev
#define func_ov002_022029e8 _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii
#define func_ov002_02202a40 _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii
#define func_ov002_02202a78 _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev
#define func_ov002_02202af0 _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev
#define func_ov002_02202b68 _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev
#define func_ov002_02202c40 _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev
#define func_ov002_02202ca0 _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev
#define func_ov002_02202d00 _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei
#define func_ov002_02202e60 _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev
#define func_ov002_02202e84 _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev
#define func_ov002_02202ed0 _ZN18Unk_ov002_022046b019func_ov002_02202ed0Ev
#define func_ov002_02202ef4 _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev
#define func_ov002_02202f00 _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev
#define func_ov002_02202f0c _ZN18Unk_ov002_022046b019func_ov002_02202f0cEv
#define func_ov002_02202f18 _ZN18Unk_ov002_022046b019func_ov002_02202f18Eii
#define func_ov002_022039d8 _ZN18Unk_ov002_0220477019func_ov002_022039d8Ev
#define func_ov002_022039f8 _ZN18Unk_ov002_0220477019func_ov002_022039f8Ehii
#define func_ov092_02291c5c _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv
#define func_ov092_02291ce4 _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii

class Unk_ov146_02294080;
typedef void (Unk_ov146_02294080::*Unk_ov146_02294080_Fn)();

struct Unk_ov146_SceneEntry {
    Unk_ov146_02294080 *(*fn)();
    u16 a;
    u16 b;
};

// ---- main-module classes (copied from src/main/unk_0206f53c.cpp / unk_02062fd4.cpp) ----
class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ void *unk_3c;
};

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x0e */ u8 unk_0e[10];
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[2];
};

extern "C" {
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern void *data_021f482c;

void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u32 v, void *dst, u32 n);
void func_02115fb4(void *dst, s32 v, s32 n);
void func_02116048(const void *src, void *dst, s32 n);
void func_020b87d0(void *p);
BOOL func_020b86c0(void *a, void *b, u32 c, u32 d, u32 e);
BOOL func_020b8670(void *a, void *b, u32 c, u32 d);
void func_020b3544(s32 a, void *buf);
BOOL func_020a78a4(void *dst, const void *src, s32 n);
void func_020021fc(s32 a, s32 b, s32 c);
void func_0200402c(u32 a);
s32 func_02133150(s32 a, s32 b);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206f994(Unk_020e0488 *dst, const void *s, s32 len);
void func_0206ecf8(s32 a);
void func_0206ed2c(u32 v);
BOOL func_0206ef0c();
BOOL func_0206ef00();
u8 *func_020ea574();
BOOL func_0208d9a8(void *p);
BOOL func_0208d4fc(void *p);
void func_0208dae8(void *p, s32 a, s32 b);
void func_020e761c(void *p, s32 a, s32 b);
void func_0200261c(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_020026c4(const char *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02002654(const char *a, void *b, s32 c);
void func_020641b4(const char *a, void *b, s32 c);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020021a0(u32 x);
void func_020020b8(u32 x);
void func_020ed188(void *p);
s32 func_020ed174();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_ov092_02291c5c();
void func_02089ad8(void *p, s32 a, s32 b);
void func_02089ae8(void *p);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);

BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
s32 func_ov002_02202878(void *p);
BOOL func_ov002_022028f0(void *p);
void func_ov002_02202844(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_02202a78(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
void func_ov002_02202ed0(void *p);
void func_ov002_02202ef4(void *p);
void func_ov002_02202f00(void *p);
void func_ov002_02202f0c(void *p);
BOOL func_ov002_02202f18(void *p, s32 x, s32 y);
void func_ov002_022039d8(void *p);
void func_ov002_022039f8(void *p, s32 a, s32 b, s32 c);
}

// ---- ov002 sub-objects (opaque bodies) ----
class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_022046b0 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[(0x48 - 4) / 4];
};

class Unk_ov002_02204770 {
public:
    Unk_ov002_02204770();
    virtual ~Unk_ov002_02204770();
    virtual void vfunc_08();
    u32 unk_04[0xb8 / 4];
};

class Unk_020e45f8 {
public:
    Unk_020e45f8();
    u32 unk_00[0x24 / 4];
};

// ---- ov002 scene base (vtable 0x022044e4) ----
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
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
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

// Vtable 0x02294080, size 0x1a7c
class Unk_ov146_02294080 : public Unk_ov002_022044e4 {
public:
    Unk_ov146_02294080()
        : unk_13cc(), unk_1430(), unk_1930(), unk_1978(), unk_1a34() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov146_02292010(u32 m);
    void func_ov146_02292020(u32 m);
    BOOL func_ov146_02292030(u32 m);
    void func_ov146_02292044();
    void func_ov146_022920b4(s32 a, s32 t, s32 b);
    void func_ov146_02292188();
    void func_ov146_022921ac();
    void func_ov146_022921f8();
    BOOL func_ov146_0229221c(u32 pad);
    BOOL func_ov146_0229240c(u32 k);
    void func_ov146_022924b4();
    void func_ov146_022924dc();
    void func_ov146_02292518();
    BOOL func_ov146_02292540();
    void func_ov146_02292568();
    void func_ov146_022925f4();
    void func_ov146_02292604(s32 v, BOOL c);
    BOOL func_ov146_0229267c(s32 x, s32 y);
    BOOL func_ov146_022926c4();
    void func_ov146_02292744();
    void func_ov146_022927ac(s32 v);
    void func_ov146_022927e8();
    BOOL func_ov146_0229285c(s32 idx);
    BOOL func_ov146_022928a8(u8 *p);
    BOOL func_ov146_022928bc();
    void func_ov146_02292970();
    void func_ov146_02292aa0();
    u8 *func_ov146_02292b1c();
    void func_ov146_02292b24();
    void func_ov146_02292b48();
    void func_ov146_02292c3c();
    void func_ov146_02292e04();
    Unk_020e0488 *func_ov146_02292e30();
    void func_ov146_02292e68();
    void func_ov146_02292e94();
    void func_ov146_02292eb4();
    void func_ov146_02292ed4(s32 a, s32 b);
    void func_ov146_02292f38();
    void func_ov146_02292f7c();
    s32 func_ov146_02292fa0();
    s32 func_ov146_02292fec();
    void func_ov146_02293030();
    void func_ov146_022930a8();
    void func_ov146_022930e0();
    void func_ov146_02293128();
    void func_ov146_02293148();
    void func_ov146_02293164();
    void func_ov146_0229317c();
    void func_ov146_022931a8();
    void func_ov146_022931f8();
    void func_ov146_02293230();
    void func_ov146_0229325c();
    void func_ov146_022932a0();
    void func_ov146_022932f0();
    void func_ov146_02293354();
    void func_ov146_02293388();
    void func_ov146_022933bc();
    void func_ov146_022934cc();
    void func_ov146_0229352c();
    void func_ov146_022935e4();
    void func_ov146_0229361c();
    void func_ov146_022936a4();
    void func_ov146_022936c8();
    void func_ov146_022936d0();
    void func_ov146_022936ec();
    void func_ov146_02293700();
    void func_ov146_022937bc();
    void func_ov146_022937fc();
    void func_ov146_0229382c();
    void func_ov146_02293864();
    void func_ov146_02293894();
    void func_ov146_02293930();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ s16 unk_ae;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7[3];
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc[7];
    /* 0x0c3 */ u8 unk_c3[7];
    /* 0x0ca */ u8 unk_ca[0xea - 0xca];
    /* 0x0ea */ u8 unk_ea[0x20];
    /* 0x10a */ u8 unk_10a[0x20];
    /* 0x12a */ u8 unk_12a[0x20 * 0x13];
    /* 0x38a */ u8 unk_38a[0x800];
    /* 0xb8a */ u8 unk_b8a[0x800];
    /* 0x138a */ u16 unk_138a[16];
    /* 0x13aa */ u16 unk_13aa[16];
    /* 0x13ca */ u8 unk_13ca[2];
    /* 0x13cc */ Unk_ov002_02204614 unk_13cc;
    /* 0x1430 */ Unk_020e0488 unk_1430[0x14];
    /* 0x1930 */ Unk_020e45f8 unk_1930[2];
    /* 0x1978 */ Unk_ov002_02204770 unk_1978;
    /* 0x1a34 */ Unk_ov002_022046b0 unk_1a34;
};

extern "C" Unk_ov146_02294080 *func_ov146_02293d68();

extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022931f8Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_0229325cEv();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_02293894Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022931a8Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_02293864Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_02293230Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_0229317cEv();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_02293354Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022932f0Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_02293388Ev();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022933bcEv();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022937fcEv();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_0229382cEv();
extern "C" void _ZN18Unk_ov146_0229408019func_ov146_022932a0Ev();

static inline BOOL Unk_ov146_022933bc_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov146_02294080 *func_ov146_02293d68() { return new Unk_ov146_02294080(); }

BOOL Unk_ov146_02294080::vfunc_00() {
    func_ov146_02293700();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov146_02294080::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov146_022936ec();
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" u32 data_ov146_02293e18[2];
extern "C" void *data_ov146_02293e70[2];
extern "C" u32 data_ov146_02293e98[4];
extern "C" void *data_ov146_02293e00[2];
extern "C" u32 data_ov146_02293fe0[14];
extern "C" void *data_ov146_02293e38[2];
extern "C" void *data_ov146_02293e10[2];
extern "C" u32 data_ov146_02293e48[2];
extern "C" void *data_ov146_02293e08[2];
extern "C" u32 data_ov146_02293f90[8];
extern "C" Unk_ov146_SceneEntry data_ov146_02293e68;
extern "C" void *data_ov146_02293e60[2];
extern "C" void *data_ov146_02293e30[2];
extern "C" u32 data_ov146_02293fb0[12];
extern "C" u32 data_ov146_02293f10[8];
extern "C" void *data_ov146_02293e90[2];
extern "C" void *data_ov146_02293e88[2];
extern "C" u32 data_ov146_02293f50[8];
extern "C" u32 data_ov146_02293e78[2];
extern "C" u32 data_ov146_02293e20[2];
extern "C" void *data_ov146_02293e50[2];
extern "C" void *data_ov146_02293e58[2];
extern "C" u32 data_ov146_02293ed0[8];
extern "C" u32 data_ov146_02293ef0[8];
extern "C" void *data_ov146_02293e80[2];
extern "C" u32 data_ov146_02293f30[8];
extern "C" u32 data_ov146_02294018[24];
extern "C" void *data_ov146_02293e28[2];
extern "C" void *data_ov146_02293e40[2];
extern "C" u32 data_ov146_02293f70[8];

extern "C" u32 data_ov146_02293e18[2] = {0x804040d8, 0xffffc9c0};

extern "C" void *data_ov146_02293e70[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022933bcEv, 0};

extern "C" u32 data_ov146_02293e98[4] = {0x0198003b, 0x0000d5d4, 0x01a0403b, 0xffffd5f4};

extern "C" void *data_ov146_02293e00[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022931f8Ev, 0};

BOOL Unk_ov146_02294080::vfunc_24() {
    s32 i;
    s32 y;
    s32 y2;
    s32 idx;
    if (func_0206ef00()) {
        func_ov002_02202844(&unk_13cc);
    }
    if (!func_ov146_02292030(1)) {
        return FALSE;
    }
    unk_1a34.vfunc_08();
    func_02089ad8(&unk_1978, 0, unk_94);
    unk_1978.vfunc_08();
    y = unk_94 + 0x60;
    y2 = y - (unk_a4 & 0xf);
    for (i = 0; i < 7; y2 += 0x10, i++) {
        idx = i + unk_ae;
        if (idx < 0x20 && unk_bb < 0x20 && unk_bb == unk_ea[idx]) {
            func_02087e70(1, data_ov146_02293fe0, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            func_02087e70(1, data_ov146_02293fb0, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        idx = i + unk_ae;
        if (idx < 0x20) {
            void *tb[5] = {0, data_ov146_02293e18, data_ov146_02293e78, data_ov146_02293e20, data_ov146_02293e48};
            void *h = tb[unk_ca[idx]];
            if (h != 0) {
                func_02087e70(1, h, 0x80, y2, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
            }
        }
    }
    func_02087e70(1, data_ov146_02294018, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293f70, 0x80, y, unk_b1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293f50, 0x80, y, unk_b0, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    func_02087e70(1, data_ov146_02293e98, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    void *tc[5] = {data_ov146_02293f90, data_ov146_02293ed0, data_ov146_02293ef0, data_ov146_02293f10, data_ov146_02293f30};
    if (unk_b7[0] != 0) {
        unk_b7[0] = *(volatile u8 *)&unk_b7[0] - 1;
    } else {
        unk_b7[1] = unk_b7[1] + 1;
        if (unk_b7[1] >= 5) {
            unk_b7[1] = 0;
        }
        unk_b7[0] = 10;
    }
    func_02087e70(1, tc[unk_b7[1]], 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    return TRUE;
}
extern "C" u32 data_ov146_02293fe0[14] = {0x403c40e6, 0x000058c6, 0x402040e6, 0x000058c6, 0x419400d7, 0x00005886, 0x400040e6,
                                          0x000058c6, 0x41d840e6, 0x000058c6, 0x41b840e6, 0x000058c6, 0x419840e6, 0xffff58c6};

extern "C" void *data_ov146_02293e38[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_02293230Ev, 0};

extern "C" void *data_ov146_02293e10[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_02293894Ev, 0};

extern "C" u32 data_ov146_02293e48[2] = {0x804040d8, 0xffffd9cc};

extern "C" void *data_ov146_02293e08[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_0229325cEv, 0};

extern "C" u32 data_ov146_02293f90[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000c5d5, 0x01f1003a, 0xffffd5d5};

extern "C" Unk_ov146_SceneEntry data_ov146_02293e68 = {func_ov146_02293d68, 0xbb, 0xbf};

extern "C" void *data_ov146_02293e60[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_02293388Ev, 0};

extern "C" void *data_ov146_02293e30[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_02293864Ev, 0};

extern "C" u32 data_ov146_02293fb0[12] = {0x403c40e6, 0x000048e6, 0x402040e6, 0x000048e6, 0x400040e6, 0x000048e6,
                                          0x41d840e6, 0x000048e6, 0x41b840e6, 0x000048e6, 0x419840e6, 0xffff48e6};

extern "C" u32 data_ov146_02293f10[8] = {0x0006003a, 0x0000d5d5, 0x01ff003a, 0x0000d5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" void *data_ov146_02293e90[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022932a0Ev, 0};

BOOL Unk_ov146_02294080::vfunc_4c() {
    static Unk_ov146_02294080_Fn tbl[4] = {
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e10,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e30,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e88,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e80};
    func_ov146_022936a4();
    (this->*tbl[unk_8c])();
    func_ov146_0229361c();
    return TRUE;
}
extern "C" void *data_ov146_02293e88[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_0229382cEv, 0};

extern "C" u32 data_ov146_02293f50[8] = {0x8011404a, 0x0000848d, 0x4031004a, 0x00008491, 0x80270043, 0x00008482, 0x800b0043, 0xffff8480};

extern "C" u32 data_ov146_02293e78[2] = {0x804040d8, 0xffffc9c4};

void Unk_ov146_02294080::func_ov146_02293930() {
    static Unk_ov146_02294080_Fn tbl[10] = {
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e70,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e60,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e50,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e58,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e90,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e08,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e38,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e00,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e28,
        *(Unk_ov146_02294080_Fn *)data_ov146_02293e40};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov146_02294080::vfunc_50() {
    func_ov146_022936d0();
    func_ov146_02293930();
    func_ov146_022936c8();
    return TRUE;
}

BOOL Unk_ov146_02294080::vfunc_54() { return TRUE; }

BOOL Unk_ov146_02294080::vfunc_58() { return TRUE; }

BOOL Unk_ov146_02294080::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov146_02294080::func_ov146_02293894() {
    func_ov146_022935e4();
    func_ov146_0229352c();
    func_ov146_022928bc();
    func_ov146_022927ac(0);
    unk_a8 = 0;
    func_ov146_022934cc();
    func_ov002_022008e0(0xa, 4, 0, 0x28);
    func_020020b8(6);
    func_020020b8(4);
    func_ov146_022937bc();
    func_ov146_02292020(1);
    func_ov002_02200a50(1);
}

void Unk_ov146_02294080::func_ov146_02293864() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov146_02293128();
    } else {
        func_ov146_02292b24();
    }
    func_ov146_022937bc();
}

void Unk_ov146_02294080::func_ov146_0229382c() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x28);
    func_ov146_022937bc();
    func_ov002_02200a50(3);
}

void Unk_ov146_02294080::func_ov146_022937fc() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov146_022937bc();
    }
}

void Unk_ov146_02294080::func_ov146_022937bc() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x38 - unk_a4);
    unk_94 = func_ov002_02200920();
    func_ov146_02292518();
}

void Unk_ov146_02294080::func_ov146_02293700() {
    s32 i;
    s32 j;
    unk_ac = 0;
    unk_b2 = 3;
    unk_b0 = 9;
    unk_b1 = 8;
    func_ov002_022039d8(&unk_1978);
    func_ov002_022039f8(&unk_1978, 0x7f, 0x90, 0x10);
    func_02089ae8(&unk_1978);
    unk_b5 = 0;
    func_ov002_02202f0c(&unk_1a34);
    for (i = 0; i < 7; i++) {
        unk_bc[i] = 0x21;
        unk_c3[i] = 0xff;
    }
    for (j = 0; j < 0x20; j++) {
        unk_ea[j] = 0x20;
        unk_10a[j] = 0;
    }
    func_ov146_02292aa0();
    unk_b6 = 0x21;
    unk_b7[0] = 10;
    unk_b7[1] = 0;
    unk_b7[2] = 10;
    unk_bb = 0x20;
}

void Unk_ov146_02294080::func_ov146_022936ec() {
    func_ov146_02292e04();
    func_ov146_02292188();
}

void Unk_ov146_02294080::func_ov146_022936d0() {
    func_ov146_022936a4();
    unk_13cc.vfunc_0c();
}

// thunk: defined before its target so it stays a tail branch
void Unk_ov146_02294080::func_ov146_022936c8() { func_ov146_0229361c(); }

void Unk_ov146_02294080::func_ov146_022936a4() {
    func_ov146_02292e04();
    func_ov146_02292188();
    unk_1a34.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_0229361c() {
    if (!func_ov146_02292030(0x40)) {
        func_ov146_02292970();
        if (func_ov146_022928bc()) {
            func_ov146_02292020(4);
        }
        if (func_ov146_0229285c(unk_bb)) {
            unk_b0 = 8;
        } else {
            unk_b0 = 9;
        }
    }
    func_ov146_022926c4();
    if (func_ov146_02292030(4)) {
        func_ov146_02292c3c();
        func_ov146_02292010(4);
    }
    func_ov146_02292044();
    func_ov146_022927e8();
    func_ov002_02202ed0(&unk_1a34);
}

void Unk_ov146_02294080::func_ov146_022935e4() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov146_02294080::func_ov146_0229352c() {
    void *p = data_021f482c;
    func_0200261c("menu/wfc/bg.bch", p, 6, 0x11, 0x11, 0x5c);
    func_020026c4("menu/wfc/bg.bpl", p, 6, 1, 1, 8);
    func_020641b4("menu/wfc/bg7.bpl", unk_138a, 0x20);
    func_02115e48(unk_138a, unk_13aa, 0x20);
    func_02002654("menu/wfc/a_bg.bsc", p, 6);
    func_020641b4("menu/wfc/b_bg.bsc", unk_38a, 0x800);
    func_0206ee80(unk_38a, 5, 7, 0xe, 0x14, 7);
    func_0206ee80(unk_38a, 0x10, 7, 0x17, 0x14, 7);
}

void Unk_ov146_02294080::func_ov146_022934cc() {
    void *p = data_021f482c;
    func_0200261c("menu/wfc/obj0.bch", p, 8, 0x80, 0x80, 0xff);
    func_0200261c("menu/wfc/obj1.bch", p, 8, 0x160, 0x160, 0x1ff);
    func_020026c4("menu/wfc/obj.bpl", p, 8, 4, 4, 0xd);
}

void Unk_ov146_02294080::func_ov146_022933bc() {
    s32 x;
    s32 y;
    if (func_ov002_02200a14(1)) {
        func_ov146_02293148();
        return;
    }
    if (Unk_ov146_022933bc_Both()) {
        x = data_021ef5f0;
        y = data_021ef5ec;
        if (y >= 0xa9 && y <= 0xbc && x >= 0x39) {
            if (x < 0x75) {
                func_ov146_022930a8();
                return;
            }
            if (x >= 0x8b && x < 0xc7 && unk_b0 == 8) {
                func_ov146_022930e0();
                return;
            }
        }
        if (x >= 0x18 && x <= 0xe0 && y >= 0x38 && y < 0x98) {
            s32 idx = unk_ae + ((y - (0x38 - (unk_a8 & 0xf))) >> 4);
            if (idx < 0x20) {
                x = unk_ea[idx];
                if (func_ov146_0229285c(x)) {
                    if (unk_bb != x) {
                        unk_bb = x;
                        func_0200402c(0x29);
                    }
                }
            }
        } else if (func_ov146_0229267c(x, y)) {
            func_ov002_02200a58(1);
        } else if (x >= 0xe6 && x <= 0xee && y >= 0x38 && y <= 0x88) {
            func_ov002_02202f00(&unk_1a34);
            func_ov002_02200a58(2);
        }
    }
}

void Unk_ov146_02294080::func_ov146_02293388() {
    if (data_021f4770 != 0) {
        func_ov146_02292604(data_021ef5ec, 0);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(0);
    }
}

void Unk_ov146_02294080::func_ov146_02293354() {
    if (data_021f4770 != 0) {
        func_ov146_02292604(data_021ef5ec, 1);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(0);
    }
}

void Unk_ov146_02294080::func_ov146_022932f0() {
    if (func_ov002_022009d4()) {
        func_ov146_02293164();
    } else if (func_ov146_0229221c(func_ov002_022009c8())) {
        func_ov146_02292f38();
    } else {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov146_02292e94();
        } else if (k & 2) {
            func_ov146_02292f7c();
            func_ov146_022930a8();
        }
    }
}

void Unk_ov146_02294080::func_ov146_022932a0() {
    u32 a;
    u32 b;
    if (data_021f47d8[0] & 1) {
        func_ov146_02292568();
        a = func_ov146_02292fec();
        b = func_ov146_02292fa0();
        func_ov002_02202a40(&unk_13cc, a, b);
    } else {
        func_ov146_022925f4();
        func_ov002_02200a58(5);
    }
}

void Unk_ov146_02294080::func_ov146_0229325c() {
    u32 a;
    u32 b;
    if (func_ov146_02292540()) {
        func_ov002_02200a58(3);
        func_ov146_02292e68();
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    func_ov002_02202a40(&unk_13cc, a, b);
}

void Unk_ov146_02294080::func_ov146_02293230() {
    if (!func_ov002_022028f0(&unk_13cc)) {
        func_ov002_02200a58(unk_b3);
        func_ov146_02293930();
    }
}

// ---- 0x022931f8 ----
void Unk_ov146_02294080::func_ov146_022931f8() {
    if (func_0208d4fc(&unk_13cc)) {
        if (!func_ov146_0229240c(unk_b2)) {
            func_ov002_02200a58(3);
            func_ov146_02292e68();
        }
    }
}

void Unk_ov146_02294080::func_ov146_022931a8() {
    if (func_0208d4fc(&unk_13cc)) {
        func_ov146_02292eb4();
        func_ov002_02200a58(unk_b3);
        if (func_ov146_02292030(0x10)) {
            func_ov146_02292010(0x10);
            unk_b2 = 1;
            func_ov146_02292f38();
        }
    }
}

void Unk_ov146_02294080::func_ov146_0229317c() {
    if (unk_ba != 0) {
        unk_ba = *(volatile u8 *)&unk_ba - 1;
    } else {
        func_ov146_02292f7c();
        func_ov002_02200a60(1);
    }
}

void Unk_ov146_02294080::func_ov146_02293164() {
    func_ov146_02292f7c();
    func_ov002_02200a58(0);
}

void Unk_ov146_02294080::func_ov146_02293148() {
    func_ov146_02293030();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov146_02294080::func_ov146_02293128() {
    if (func_0206ef0c()) {
        func_ov146_02293164();
    } else {
        func_ov146_02293148();
    }
}

void Unk_ov146_02294080::func_ov146_022930e0() {
    func_0206ecf8(1);
    func_0206ed2c(unk_bb);
    unk_b0 = 10;
    func_ov146_02292020(0x40);
    unk_ba = 5;
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
    func_0200402c(0x27);
}

void Unk_ov146_02294080::func_ov146_022930a8() {
    func_0206ecf8(0);
    unk_b1 = 10;
    unk_ba = 5;
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
    func_0200402c(0x28);
}

void Unk_ov146_02294080::func_ov146_02293030() {
    s32 a, b;
    if (unk_b2 == 3) {
        u32 t = unk_a8 & 0xf;
        if (t != 0) {
            unk_a8 = *(volatile s32 *)&unk_a8 - t;
        }
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    func_ov002_02202a40(&unk_13cc, a, b);
    if (unk_b2 == 2) {
        func_ov002_02202d00(&unk_13cc, 1);
    } else {
        func_ov002_02202d00(&unk_13cc, 7);
    }
    func_ov146_02292eb4();
}

s32 Unk_ov146_02294080::func_ov146_02292fec() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return 0x1c;
    }
    switch (m) {
    case 0:
        return 0x47;
    case 1:
        return 0x99;
    case 2:
        return func_ov002_02202e84(&unk_1a34);
    default:
        return 0x80;
    }
}

s32 Unk_ov146_02294080::func_ov146_02292fa0() {
    u32 m = unk_b2;
    if (m >= 3 && m <= 9) {
        return ((m - 3) << 4) + 0x40 - (unk_a8 & 0xf);
    }
    switch (m) {
    case 0:
    case 1:
        return 0xad;
    case 2:
        return func_ov002_02202e60(&unk_1a34);
    default:
        return 0x60;
    }
}

void Unk_ov146_02294080::func_ov146_02292f7c() {
    func_ov002_02202d00(&unk_13cc, 0);
    unk_13cc.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_02292f38() {
    s32 a, b;
    if (unk_b2 == 2) {
        func_ov002_02202c40(&unk_13cc);
    } else {
        func_ov002_02202ca0(&unk_13cc);
    }
    a = func_ov146_02292fec();
    b = func_ov146_02292fa0();
    func_ov146_02292ed4(a, b);
}

void Unk_ov146_02294080::func_ov146_02292ed4(s32 a, s32 b) {
    if (func_ov146_02292030(0x20)) {
        func_ov002_022029e8(&unk_13cc, a, b, 3, 0);
        func_ov146_02292010(0x20);
    } else {
        func_ov002_022029e8(&unk_13cc, a, b, 3, 1);
    }
    unk_b3 = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov146_02294080::func_ov146_02292eb4() {
    func_ov002_02202a78(&unk_13cc);
    unk_13cc.vfunc_0c();
}

void Unk_ov146_02294080::func_ov146_02292e94() {
    func_ov002_02202b68(&unk_13cc);
    func_ov002_02200a58(7);
}

void Unk_ov146_02294080::func_ov146_02292e68() {
    func_ov002_02202af0(&unk_13cc);
    unk_b3 = unk_8d;
    func_ov002_02200a58(8);
}

Unk_020e0488 *Unk_ov146_02294080::func_ov146_02292e30() {
    if (unk_b4 >= 0x14) {
        return &unk_1430[0x13];
    }
    unk_b4 = *(volatile u8 *)&unk_b4 + 1;
    return &unk_1430[unk_b4 - 1];
}

void Unk_ov146_02294080::func_ov146_02292e04() {
    s32 i;
    unk_b4 = 0;
    for (i = 0; i < 0x14; i++) {
        unk_1430[i].func_0206fc44();
    }
}
extern "C" u32 data_ov146_02293e20[2] = {0x804040d8, 0xffffc9c8};

extern "C" void *data_ov146_02293e50[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_02293354Ev, 0};

extern "C" void *data_ov146_02293e58[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022932f0Ev, 0};

extern "C" u32 data_ov146_02293ed0[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" u32 data_ov146_02293ef0[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000d5d5, 0x01f8003a, 0x0000d5d5, 0x01f1003a, 0xffffd5d5};

extern "C" void *data_ov146_02293e80[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022937fcEv, 0};

extern "C" u32 data_ov146_02293f30[8] = {0x0006003a, 0x0000c5d5, 0x01ff003a, 0x0000c5d5, 0x01f8003a, 0x0000c5d5, 0x01f1003a, 0xffffc5d5};

extern "C" u32 data_ov146_02294018[24] = {0x81a800a0, 0x0000b57b, 0x41c880a0, 0x0000b57f, 0x41a840c0, 0x0000b5fb, 0x01c800c0, 0x0000b5ff,
                                          0x41ac40cd, 0x000054cd, 0x01cc40cd, 0x000054d1, 0x400440cd, 0x000054ed, 0x002440cd, 0x000054f1,
                                          0x901840cc, 0x00005488, 0x800040cc, 0x00005488, 0x91c040cc, 0x00005488, 0x81a840cc, 0xffff5488};

void Unk_ov146_02294080::func_ov146_02292c3c() {
    static Unk_020dd374 sa;
    static Unk_020dd38c sb;
    Unk_020e0488 *w1;
    Unk_020e0488 *w2;
    s32 j;
    s32 idx;
    s32 col;
    func_ov146_02292b1c();
    idx = unk_ae;
    col = idx % 7;
    for (j = 0; j < 7; j++) {
        if (idx >= 0x20) {
            unk_bc[col] = 0x20;
        } else {
            s32 e = unk_ea[idx];
            s32 off;
            if (e == unk_bc[col]) {
                w1 = 0;
            } else if (e >= 0x20) {
                w1 = func_ov146_02292e30();
                w1->func_020a7c3c();
                w2 = func_ov146_02292e30();
                w2->func_020a7c3c();
                unk_bc[col] = 0x20;
            } else {
                unk_bc[col] = e;
                w1 = func_ov146_02292e30();
                off = e * 0x13;
                func_020a78a4(&sa, unk_12a + 8 + off, 8);
                sb.func_020a7aa0(&sa, 0, 0);
                func_020b3544(0, &sb);
                func_0206f9fc(w1, 0x66);
                w2 = func_ov146_02292e30();
                func_0206f994(w2, unk_12a + off, 8);
            }
            if (w1) {
                w1->func_0206fb9c(4, col * 0x14 + 0x11e, 10, 0xe - col, 0xf, 0);
                w1->func_0206fab4(0, 0);
                w2->func_0206fb9c(4, col * 0x10 + 0x1d2, 8, 0xe - col, 0xf, 0);
                w2->func_0206fab4(0, 0);
            }
        }
        idx++;
        col++;
        if (col >= 7) {
            col = 0;
        }
    }
}

void Unk_ov146_02294080::func_ov146_02292b48() {
    Unk_020e0488 *w;
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0x65);
    w->func_0206fb9c(8, 0x93, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xc2);
    w->func_0206fb9c(8, 0x8d, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xc1);
    w->func_0206fb9c(8, 0x99, 6, 0xf, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xbc);
    w->func_0206fb48(8, 0xcd, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
    w = func_ov146_02292e30();
    func_0206f9fc(w, 0xbd);
    w->func_0206fb48(8, 0xed, 6, 0xe, 0, 0);
    w->func_0206fab4(1, 0);
}

void Unk_ov146_02294080::func_ov146_02292b24() {
    if (unk_b5 == 0) {
        func_ov146_02292b48();
        unk_b5 = unk_b5 + 1;
    }
}

// func_ov146_02292b1c (tail-call thunk) is defined last so it isn't inlined into callers
u8 *Unk_ov146_02294080::func_ov146_02292b1c() { return func_020ea574(); }

void Unk_ov146_02294080::func_ov146_02292aa0() {
    s32 i;
    u8 *tbl;
    s32 z;
    func_02115fb4(unk_12a, 0, 0x260);
    tbl = (u8 *)func_ov146_02292b1c();
    i = 0;
    z = 0;
    do {
        u8 *rec = tbl + 0x180 + i * 0x13;
        if (func_ov146_022928a8(rec)) {
            func_02116048(rec, unk_12a + (u32)i * 0x13, 0x13);
            unk_10a[i] = 0x14;
        } else {
            unk_10a[i] = z;
        }
        i++;
    } while (i < 0x20);
}

void Unk_ov146_02294080::func_ov146_02292970() {
    u8 *tbl = (u8 *)func_ov146_02292b1c();
    s32 i;
    s32 cnt = 0;
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        if (func_ov146_022928a8(tbl + 0x180 + off)) {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] < 0x14) {
                    unk_10a[i]++;
                }
            } else {
                unk_10a[i] = 0;
                func_02116048(tbl + 0x180 + off, unk_12a + (u32)i * 0x13, 0x13);
            }
            cnt++;
        } else {
            if ((unk_12a + off)[0x10] == 6) {
                if (unk_10a[i] != 0) {
                    unk_10a[i]--;
                } else {
                    (unk_12a + off)[0x10] = 0;
                }
            }
        }
    }
    if (cnt != unk_b6) {
        u8 buf[3];
        Unk_020e0488 *w;
        unk_b6 = cnt;
        w = func_ov146_02292e30();
        if (unk_b6 < 10) {
            buf[0] = unk_b6 + 0x35;
            buf[1] = 0;
            buf[2] = 0;
        } else {
            buf[0] = unk_b6 / 10 + 0x35;
            buf[1] = unk_b6 % 10 + 0x35;
            buf[2] = 0;
        }
        func_0206f994(w, buf, 3);
        w->func_0206fb48(8, 0x1f4, 2, 9, 0, 1);
        w->func_0206fab4(0, 0);
    }
}

BOOL Unk_ov146_02294080::func_ov146_022928bc() {
    s32 i;
    s32 cnt = 0;
    BOOL changed = FALSE;
    u8 *tbl;
    u8 *cp;
    u8 *rec;
    tbl = (u8 *)func_ov146_02292b1c();
    for (i = 0; i < 0x20; i++) {
        s32 off = i * 0x13;
        rec = (u8 *)this + off;
        if (rec[0x13a] == 6) {
            cp = (u8 *)this + cnt;
            if (i != cp[0xea]) {
                changed = TRUE;
                cp[0xea] = i;
            }
            if (func_ov146_022928a8(tbl + 0x180 + off)) {
                rec[0x13c] = (tbl + off)[0x192];
            }
            cp[0xca] = (tbl + off)[0x192];
            cnt++;
        }
    }
    for (; cnt < 0x20; cnt++) {
        if (unk_ea[cnt] != 0x20) {
            changed = TRUE;
            unk_ea[cnt] = 0x20;
            unk_ca[cnt] = 0;
        }
    }
    return changed;
}

BOOL Unk_ov146_02294080::func_ov146_022928a8(u8 *p) {
    if (p[0x10] == 6 && p[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov146_02294080::func_ov146_0229285c(s32 idx) {
    if (idx >= 0x20) {
        return FALSE;
    }
    u8 *g = func_ov146_02292b1c();
    if (func_ov146_022928a8(g + 0x180 + idx * 0x13)) {
        u8 *e = g + idx * 0x13;
        if (e[0x192] < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_022927e8() {
    if (func_ov146_02292030(2)) {
        if (func_020b86c0((u8 *)this + 0x1930, (u8 *)this + 0xb8a, 4, 0x800, 0)) {
            func_ov146_02292010(2);
        }
    }
    if (func_ov146_02292030(8)) {
        if (func_020b8670((u8 *)this + 0x1954, (u8 *)this + 0x13aa, 4, 7)) {
            func_ov146_02292010(8);
        }
    }
}

void Unk_ov146_02294080::func_ov146_022927ac(s32 v) {
    unk_a4 = v;
    func_020021fc(4, 0, unk_a4 - 0x38);
    unk_ae = v >> 4;
    func_ov146_02292744();
    func_ov146_02292020(4);
}

void Unk_ov146_02294080::func_ov146_02292744() {
    volatile u16 z = 0x10;
    func_02115e30(z, (u8 *)this + 0xb8a, 0x800);
    for (s32 i = 0; i < 7; i++) {
        s32 v = unk_ae + i;
        s32 m = v % 7;
        func_02115e48((u8 *)this + 0x38a + ((m * 2 + 7) << 6), (u8 *)this + 0xb8a + ((v & 0xf) << 7), 0x80);
    }
    func_ov146_02292020(2);
}

BOOL Unk_ov146_02294080::func_ov146_022926c4() {
    if (unk_a4 != unk_a8) {
        if (unk_a4 > unk_a8) {
            unk_a4 = unk_a4 - 6;
            if (unk_a4 < unk_a8) {
                unk_a4 = unk_a8;
            }
        } else {
            unk_a4 = unk_a4 + 6;
            if (unk_a4 > unk_a8) {
                unk_a4 = unk_a8;
            }
        }
        func_ov146_022927ac(unk_a4);
        func_ov146_022924b4();
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov146_02294080::func_ov146_0229267c(s32 x, s32 y) {
    if (func_ov002_02202f18(&unk_1a34, x, y)) {
        unk_9c = unk_98 - y;
        func_ov002_02202f00(&unk_1a34);
        unk_a0 = unk_98;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292604(s32 v, BOOL c) {
    if (c) {
        v = v - 0x40;
    } else {
        v = v + unk_9c;
    }
    if (v < 0) {
        v = 0;
    }
    if (v > 0x50) {
        v = 0x50;
    }
    if (c) {
        func_020e761c(&unk_98, v, 8);
    } else {
        unk_98 = v;
    }
    func_ov146_022924dc();
    func_ov146_02292518();
    s32 d = unk_a0 - unk_98;
    if (d >= 4 || d <= -4) {
        func_ov002_02202e54(&unk_1a34);
        unk_a0 = unk_98;
    }
}

void Unk_ov146_02294080::func_ov146_022925f4() { func_ov002_02202ef4(&unk_1a34); }

void Unk_ov146_02294080::func_ov146_02292568() {
    s32 old = unk_98;
    u32 k = data_021f47d8[0];
    if (k & 0x40) {
        unk_98 = unk_98 - 4;
        if (unk_98 < 0) {
            unk_98 = 0;
        }
    } else if (k & 0x80) {
        unk_98 = unk_98 + 4;
        if (unk_98 > 0x50) {
            unk_98 = 0x50;
        }
    }
    if (old != unk_98) {
        func_ov146_022924dc();
        func_ov146_02292518();
        func_ov002_02202e54(&unk_1a34);
    }
}

BOOL Unk_ov146_02294080::func_ov146_02292540() {
    if (func_0208d9a8(&unk_1a34)) {
        func_ov002_02202f0c(&unk_1a34);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292518() {
    func_0208dae8(&unk_1a34, 0x62, unk_94 + (unk_98 - 0x28));
}

void Unk_ov146_02294080::func_ov146_022924dc() {
    s32 v = func_02133150(unk_98 * 0x1a0, 0x50);
    if (v < 0) {
        v = 0;
    }
    if (v > 0x1a0) {
        v = 0x1a0;
    }
    func_ov146_022927ac(v);
    unk_a8 = v;
}

void Unk_ov146_02294080::func_ov146_022924b4() {
    unk_98 = func_02133150(unk_a4 * 0x50, 0x1a0);
    func_ov146_02292518();
}

BOOL Unk_ov146_02294080::func_ov146_0229240c(u32 k) {
    if (k >= 3 && k <= 9) {
        s32 idx = unk_ae + k - 3;
        if (idx >= 0x20) {
            return FALSE;
        }
        u8 c = *((u8 *)this + idx + 0xea);
        if (func_ov146_0229285c(c)) {
            unk_bb = c;
            func_0200402c(0x29);
            func_ov146_02292020(0x10);
            func_ov146_02292020(0x20);
        }
        return FALSE;
    }
    switch (k) {
    case 2:
        func_ov002_02202f00(&unk_1a34);
        func_ov002_02202e48(&unk_1a34);
        func_ov002_02200a58(4);
        return TRUE;
    case 1:
        if (unk_b0 == 8) {
            func_ov146_022930e0();
            return TRUE;
        }
        return FALSE;
    case 0:
        func_ov146_022930a8();
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov146_02294080::func_ov146_0229221c(u32 pad) {
    u32 old = unk_b2;
    if (old >= 3 && old <= 9) {
        if (func_ov002_0220125c(pad)) {
            unk_b2 = 2;
        } else if (func_ov002_0220128c(pad)) {
            if (unk_b2 > 3) {
                unk_b2 = *(volatile u8 *)&unk_b2 - 1;
                if (unk_b2 == 3) {
                    s32 r = unk_a8 & 0xf;
                    if (r != 0) {
                        unk_a8 = unk_a8 - r;
                    }
                }
                return TRUE;
            } else if (unk_a8 >= 0x10) {
                unk_a8 = unk_a8 - 0x10;
                return TRUE;
            } else if (unk_a8 > 0) {
                unk_a8 = 0;
                return TRUE;
            }
        } else if (func_ov002_0220127c(pad)) {
            u32 cur = unk_b2;
            if ((s32)(cur - 3) + unk_ae >= (s32)unk_b6 - 1) {
                unk_b2 = 0;
            } else if (cur < 8) {
                unk_b2 = *(volatile u8 *)&unk_b2 + 1;
            } else {
                s32 t = unk_a8;
                s32 r = t & 0xf;
                if (r != 0) {
                    unk_a8 = unk_a8 + (0x10 - r);
                    return TRUE;
                } else if (t <= 0x190) {
                    unk_a8 = unk_a8 + 0x10;
                    return TRUE;
                } else {
                    unk_b2 = 0;
                }
            }
        }
    } else {
        switch (old) {
        case 0:
            if (func_ov002_0220128c(pad)) {
                if (unk_b6 != 0) {
                    func_ov146_022921f8();
                }
            } else if (func_ov002_0220125c(pad)) {
                unk_b2 = 1;
            }
            break;
        case 1:
            if (func_ov002_0220128c(pad)) {
                if (unk_b6 != 0) {
                    func_ov146_022921f8();
                } else {
                    unk_b2 = 2;
                }
            } else if (func_ov002_0220126c(pad)) {
                unk_b2 = 0;
            } else if (func_ov002_0220125c(pad)) {
                unk_b2 = 2;
            }
            break;
        case 2:
            if (func_ov002_0220127c(pad)) {
                unk_b2 = 1;
            } else if (func_ov002_0220126c(pad)) {
                func_ov146_022921ac();
            }
            break;
        }
    }
    if (old != unk_b2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_022921f8() {
    unk_b2 = 8;
    s32 r = unk_a8 & 0xf;
    if (r != 0) {
        unk_a8 = unk_a8 - r;
    }
}

void Unk_ov146_02294080::func_ov146_022921ac() {
    if (unk_b6 == 0) {
        unk_b2 = 1;
    } else {
        s32 v = func_ov002_02202878(&unk_13cc);
        if (v < 0x38) {
            v = 0x38;
        }
        if (v > 0xa7) {
            v = 0xa7;
        }
        unk_b2 = ((v - (0x38 - (unk_a8 & 0xf))) >> 4) + 3;
    }
}

void Unk_ov146_02294080::func_ov146_02292188() {
    s32 i = 0;
    u8 *p = (u8 *)this + 0x1930;
    for (; i < 2; i++) {
        func_020b87d0(p + i * 0x24);
    }
}

void Unk_ov146_02294080::func_ov146_022920b4(s32 a, s32 t, s32 b) {
    u16 y = unk_138a[15];
    u8 rr = y & 0x1f;
    u8 rg = (y & 0x3e0) >> 5;
    u8 rb = (y & 0x7c00) >> 10;
    s32 n = 20 - t;
    u16 x = unk_138a[b];
    rr = ((u8)(x & 0x1f) * t + rr * n) / 20;
    rg = ((u8)((x & 0x3e0) >> 5) * t + rg * n) / 20;
    rb = ((u8)((x & 0x7c00) >> 10) * t + rb * n) / 20;
    unk_13aa[(u8)(14 - a)] = rr | (rg << 5) | (rb << 10);
    func_ov146_02292020(8);
}

void Unk_ov146_02294080::func_ov146_02292044() {
    s32 i;
    for (i = 0; i < 7; i++) {
        s32 idx = unk_bc[i];
        if (idx < 0x20) {
            u32 v;
            u32 base;
            u32 sel;
            if (*((u8 *)this + idx * 0x13 + 0x13c) >= 4) {
                base = *((u8 *)this + idx + 0x10a);
                v = (u8)(base | 0x40);
                sel = 7;
            } else {
                base = *((u8 *)this + idx + 0x10a);
                v = base;
                sel = 0xe;
            }
            if (v != unk_c3[i]) {
                func_ov146_022920b4(i, base, sel);
                unk_c3[i] = v;
            }
        }
    }
}

BOOL Unk_ov146_02294080::func_ov146_02292030(u32 m) {
    if (unk_ac & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov146_02294080::func_ov146_02292020(u32 m) { unk_ac = unk_ac | m; }

void Unk_ov146_02294080::func_ov146_02292010(u32 m) { unk_ac = unk_ac & ~m; }

extern "C" void *data_ov146_02293e28[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_022931a8Ev, 0};

extern "C" void *data_ov146_02293e40[2] = {(void *)_ZN18Unk_ov146_0229408019func_ov146_0229317cEv, 0};

extern "C" u32 data_ov146_02293f70[8] = {0x81bf404a, 0x00008493, 0x41df004a, 0x00008497, 0x81d50043, 0x00008482, 0x81b90043, 0xffff8480};

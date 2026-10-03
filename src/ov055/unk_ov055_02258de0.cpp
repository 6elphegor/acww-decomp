#include "types.h"

// Library base class (same as Unk_020d8c7c.h, but vfunc_08 takes the s32 the vtable symbol names).
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 v);
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

struct Unk_ov055_022593b0_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_0201bc1c;
class Unk_ov055_02259994;

struct Unk_020660f8 {
    void func_02067a84(u8 *a, void *b);
};

class Unk_020d7714 {
public:
    Unk_020d7714();
    virtual ~Unk_020d7714();
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
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov055_022593b0_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_020660f8 *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class Unk_020ddcf0 : public Unk_020d7714 {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public Unk_020ddcf0 {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
};

class Unk_020d8b38 : public Unk_020d7710 {
public:
    Unk_020d8b38();
    virtual ~Unk_020d8b38();
};


#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

struct Unk_0203442c {
    u16 unk_00;
    Unk_0203442c();
    ~Unk_0203442c();
};

class Unk_020d5d84 : public Unk_020d8c7c_Base {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
};

struct Unk_020d77a4_Vec3;

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual void vfunc_50();
    virtual void vfunc_54(void *p);
    virtual BOOL vfunc_58();
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void vfunc_08(s32 v);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual s32 vfunc_a8();

    void func_0201bc28(Unk_0201bc1c *p);
    BOOL func_0201b9bc();
    s32 func_0201bc4c(u32 v);
    s32 func_0201bc70(u32 v);
    s32 func_0201bd20(u32 v);

    u16 unk_ea;
    Unk_020dbd74 unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual void vfunc_74(u32 v);
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_0208f238 {
    u8 unk_00[0x84c];

    ~Unk_0208f238();
    void func_0208f174();
    void func_0208f1a8(u32 v);
};

extern "C" {
extern u8 data_021cc7d0[];
extern u32 OVERLAY_68_ID[];
extern u32 OVERLAY_67_ID[];
extern u8 data_021ecfa8[];
extern u16 data_020c6cc8;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021c3cc0;
extern const void *data_ov055_02259820;
extern u8 data_ov055_02259880[];
extern u8 data_ov055_022598b0[];
extern Unk_ov055_02259994 *data_ov055_02259a40;

s32 _ZN12Unk_02013b1013func_02014220Ev(void *self);
void func_02076c50(void *p);
void func_02076c24(void *p, u32 v);
Unk_0208f238 *func_0208f0b0(s32 i);
void func_0208f1dc(void *p);
void *MI_CpuCopy8(void *dst, void *src, u32 n);
void *MI_CpuFill8(void *p, s32 v, u32 n);
s32 func_020b013c();
s32 func_020a049c();
s32 func_020e9a08(void *p);
s32 func_020e9a18(void *p);
void func_020e9a3c(void *p);
void func_020e9a48(void *p);
void func_020e9a54(void *a, void *b, u32 n);
void func_0200402c(s32 v);
void func_02073a0c();
void func_02073bac();
void _ZN12Unk_020660f813func_02067a84EPhPv(void *self, void *m, const void *x);
void _ZN12Unk_020660f813func_02067a6cEv(void *self);
void _ZN12Unk_020660f813func_02067a78Ev(void *self);
void *_ZN12Unk_020660f813func_020679b4Ev(void *self);
s32 _ZN12Unk_020aa3b813func_020aa514Ev(void *self);
void _ZN12Unk_020d771413func_02015ab0Ej(void *self, u32 v);
void func_0203d984();
void func_0203d990();
void *func_020b4934();
s32 func_020b4f58(void *a, s32 b, s32 c, s32 d);
void _ZN12Unk_02013b1013func_02014198Ehh(void *self, u8 a, u8 b);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void func_ov004_0223f894(void *p);
}
void *func_02072144();
class Unk_ov055_02259904;
typedef void (Unk_ov055_02259904::*Unk_ov055_02259904_Fn)();

class Unk_ov055_02259904 : public Unk_020d8b38 {
public:
    Unk_ov055_02259904();
    virtual ~Unk_ov055_02259904();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov055_022593b0_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov055_022590b0();
    void func_ov055_02259128();
    void func_ov055_0225915c();
    void func_ov055_022593c0(Unk_ov055_02259994 *owner);
    void func_ov055_0225922c(s32 v);

    /* 0xac */ Unk_ov055_02259994 *unk_ac;
    /* 0xb0 */ s32 unk_b0;
};

struct Unk_ov055_02259234_Ent {
    Unk_ov055_02259904_Fn fn;
    u8 flag;
    u8 pad[3];
};

struct Unk_ov055_02259234_Flag {
    u8 flag;
    u8 pad[11];
};

struct Unk_0208f0a0 {
    u8 unk_00[0xf8];
    u8 unk_f8;
    u8 pad_f9[3];

    ~Unk_0208f0a0();
};

extern "C" void _ZN12Unk_0208f238C1Ev(void *self);
extern "C" void _ZN12Unk_0208f0a0C1Ev(void *self);

class Unk_ov055_02259994;
typedef BOOL (Unk_ov055_02259994::*Unk_ov055_02259994_Fn)();

struct Unk_ov055_022594e0_Ent {
    Unk_ov055_02259994_Fn enter;
    Unk_ov055_02259994_Fn exit;
};

class Unk_ov055_02259994 : public Unk_020d8bc8 {
public:
    Unk_ov055_02259994() {
        u8 *p = (u8 *)&unk_710;
        _ZN12Unk_0208f238C1Ev(p);
        _ZN12Unk_0208f0a0C1Ev(p + 0x84c);
        p = (u8 *)&unk_1058;
        _ZN12Unk_0208f238C1Ev(p);
        _ZN12Unk_0208f0a0C1Ev(p + 0x84c);
    }
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_68();
    virtual u8 *vfunc_6c();
    virtual u8 *vfunc_70();

    void func_ov055_02258e94();
    void func_ov055_02258eb4();
    void func_ov055_02258ed4();
    void func_ov055_02258f04();
    void func_ov055_02259028();
    void func_ov055_0225904c();
    BOOL func_ov055_0225942c();
    BOOL func_ov055_02259430();
    BOOL func_ov055_02259434();
    BOOL func_ov055_02259468();
    BOOL func_ov055_02259484();
    BOOL func_ov055_022594ac();
    void func_ov055_022594e0(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov055_02259904 unk_658;
    /* 0x70c */ u8 unk_70c;
    /* 0x70d */ u8 unk_70d;
    /* 0x70e */ u8 pad_70e[2];
    /* 0x710 */ Unk_0208f238 unk_710;
    /* 0xf5c */ Unk_0208f0a0 unk_f5c;
    /* 0x1058 */ Unk_0208f238 unk_1058;
    /* 0x18a4 */ Unk_0208f0a0 unk_18a4;
};

struct Unk_ov055_SceneEntry {
    Unk_ov055_02259994 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
Unk_ov055_02259994 *func_ov055_02259624();
extern Unk_ov055_022594e0_Ent data_ov055_02259a44[3];
#define data_ov055_02259a4c ((Unk_ov055_022594e0_Ent *)((u8 *)data_ov055_02259a44 + 8))
extern Unk_ov055_02259234_Ent data_ov055_022598cc[4];
#define data_ov055_022598d4 ((Unk_ov055_02259234_Flag *)((u8 *)data_ov055_022598cc + 8))
extern u8 data_ov055_02259880[];
extern u8 data_ov055_022598b0[];
extern Unk_ov055_SceneEntry data_ov055_02259898;
void _ZN18Unk_ov055_0225990419func_ov055_022590b0Ev();
void _ZN18Unk_ov055_0225990419func_ov055_02259128Ev();
void _ZN18Unk_ov055_0225990419func_ov055_0225915cEv();
void _ZN18Unk_ov055_0225999419func_ov055_02259468Ev();
void _ZN18Unk_ov055_0225999419func_ov055_022594acEv();
void _ZN18Unk_ov055_0225999419func_ov055_0225942cEv();
void _ZN18Unk_ov055_0225999419func_ov055_02259430Ev();
void _ZN18Unk_ov055_0225999419func_ov055_02259484Ev();
void _ZN18Unk_ov055_0225999419func_ov055_02259434Ev();
}

extern "C" void *data_ov055_0225984c[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_02259430Ev, 0};
extern "C" void *data_ov055_02259844[2] = {(void *)_ZN18Unk_ov055_0225990419func_ov055_0225915cEv, 0};
extern "C" void *data_ov055_02259854[2] = {(void *)_ZN18Unk_ov055_0225990419func_ov055_02259128Ev, 0};
extern "C" void *data_ov055_02259834[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_022594acEv, 0};
extern "C" void *data_ov055_02259824[2] = {(void *)_ZN18Unk_ov055_0225990419func_ov055_022590b0Ev, 0};
extern "C" void *data_ov055_0225983c[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_0225942cEv, 0};
extern "C" void *data_ov055_0225985c[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_02259484Ev, 0};
extern "C" void *data_ov055_02259864[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_02259434Ev, 0};
extern "C" void *data_ov055_0225982c[2] = {(void *)_ZN18Unk_ov055_0225999419func_ov055_02259468Ev, 0};
extern "C" char data_ov055_0225986c[] = "sp_etc_sequence1";
extern "C" const void *data_ov055_02259820 = data_ov055_0225986c;
extern "C" u8 data_ov055_02259880[] = "npc_sp/model/xct.nsbmd";
extern "C" u8 data_ov055_022598b0[] = "npc_sp/model/xct_tex.nsbtx";
extern "C" Unk_ov055_SceneEntry data_ov055_02259898 = {func_ov055_02259624, 0x5e, 0x65, 2, 0x5000, 0x5000, 0x3e800};
extern "C" Unk_ov055_02259234_Ent data_ov055_022598cc[4] = {
    {0, 0},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259844, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259854, 1},
    {*(Unk_ov055_02259904_Fn *)data_ov055_02259824, 1},
};
extern "C" Unk_ov055_022594e0_Ent data_ov055_02259a44[3] = {
    {*(Unk_ov055_02259994_Fn *)data_ov055_02259834, *(Unk_ov055_02259994_Fn *)data_ov055_0225985c},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225982c, *(Unk_ov055_02259994_Fn *)data_ov055_02259864},
    {*(Unk_ov055_02259994_Fn *)data_ov055_0225984c, *(Unk_ov055_02259994_Fn *)data_ov055_0225983c},
};
extern "C" Unk_ov055_02259994 *data_ov055_02259a40 = 0;

static inline BOOL Unk_ov055_02259484_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }

static inline BOOL Unk_ov055_0225915c_Both() {
    return (data_021f4770 != 0 && data_021f4774 != 0) ? TRUE : FALSE;
}

extern "C" Unk_ov055_02259994 *func_ov055_02259624() { return new Unk_ov055_02259994; }

BOOL Unk_ov055_02259994::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    func_0201bc28((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov055_022593c0(this);
    return TRUE;
}

BOOL Unk_ov055_02259994::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    data_ov055_02259a40 = this;
    func_ov055_02258eb4();
    func_ov055_022594e0(0);
    func_ov004_0223f894(&unk_5c);
    func_0203d990();
    func_ov055_02258f04();
    return TRUE;
}

BOOL Unk_ov055_02259994::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    data_ov055_02259a40 = 0;
    func_ov055_02258e94();
    func_0203d984();
    func_ov055_02258ed4();
    return TRUE;
}

u8 *Unk_ov055_02259994::vfunc_6c() { return data_ov055_022598b0; }

u8 *Unk_ov055_02259994::vfunc_70() { return data_ov055_02259880; }

BOOL Unk_ov055_02259994::vfunc_68() {
    BOOL r = FALSE;
    if (data_ov055_02259a4c[unk_654].enter) {
        r = (this->*data_ov055_02259a44[unk_654].exit)();
    }
    return r;
}

void Unk_ov055_02259994::func_ov055_022594e0(s32 state) {
    BOOL ok = TRUE;
    if (data_ov055_02259a44[state].enter) {
        ok = (this->*data_ov055_02259a44[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov055_02259994::func_ov055_022594ac() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov055_02259994::func_ov055_02259484() {
    if (Unk_ov055_02259484_IsTwo(data_021c3cc0)) {
        func_ov055_022594e0(1);
    }
    return TRUE;
}

BOOL Unk_ov055_02259994::func_ov055_02259468() {
    _ZN12Unk_02013b1013func_02014198Ehh(&unk_618, 0, 1);
    return TRUE;
}

BOOL Unk_ov055_02259994::func_ov055_02259434() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_020b4f58(func_020b4934(), 0x2c, 2, 2);
        func_ov055_022594e0(2);
    }
    return TRUE;
}

BOOL Unk_ov055_02259994::func_ov055_02259430() { return TRUE; }

BOOL Unk_ov055_02259994::func_ov055_0225942c() { return TRUE; }

Unk_ov055_02259904::Unk_ov055_02259904() {}

Unk_ov055_02259904::~Unk_ov055_02259904() {}

void Unk_ov055_02259904::func_ov055_022593c0(Unk_ov055_02259994 *owner) {
    vfunc_08();
    unk_ac = owner;
}

void Unk_ov055_02259904::vfunc_78(Unk_ov055_022593b0_Out *out) {
    out->unk_00 = data_ov055_02259820;
    out->unk_04 = 0x38;
}

void Unk_ov055_02259904::vfunc_14() {
    u8 m[4];
    void *r6 = unk_3c;
    switch (unk_1e) {
    case 0x39:
        if (func_020e9a18(func_02072144()) == 0) {
            if (unk_ac->unk_70c != 0) {
                m[0] = 0x36;
                _ZN12Unk_020660f813func_02067a84EPhPv(r6, &m[0], data_ov055_02259820);
                break;
            }
            func_02073bac();
            MI_CpuFill8(&unk_ac->unk_1058, 0, 0x948);
            Unk_ov055_02259994 *r4 = unk_ac;
            func_02072144();
            func_020e9a54(&r4->unk_710, &r4->unk_1058, 0x948);
            func_020e9a48(func_02072144());
        }
        func_020e9a48(func_02072144());
        _ZN12Unk_020660f813func_02067a78Ev(r6);
        func_ov055_0225922c(1);
        break;
    case 0x3c:
        unk_ac->func_ov055_0225904c();
        break;
    case 0x3b:
        unk_ac->func_ov055_02259028();
        break;
    }
}

void Unk_ov055_02259904::vfunc_18() {
    s32 t = _ZN12Unk_020aa3b813func_020aa514Ev(_ZN12Unk_020660f813func_020679b4Ev(unk_3c));
    if (unk_1e == 0x3a && t == 1) {
        func_02073a0c();
    }
}

void Unk_ov055_02259904::vfunc_80() {
    u32 i = unk_b0;
    if (data_ov055_022598d4[i].flag != 0) {
        if (data_ov055_022598cc[i].fn) {
            (this->*data_ov055_022598cc[i].fn)();
        }
    }
}

void Unk_ov055_02259904::vfunc_84() {
    u32 i = unk_b0;
    if (data_ov055_022598d4[i].flag == 0) {
        if (data_ov055_022598cc[i].fn) {
            (this->*data_ov055_022598cc[i].fn)();
            func_ov055_0225922c(0);
        }
    }
}

void Unk_ov055_02259904::func_ov055_0225922c(s32 v) { unk_b0 = v; }

void Unk_ov055_02259904::func_ov055_0225915c() {
    u8 m[2];
    BOOL k;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) != 0) {
        k = TRUE;
    } else {
        k = FALSE;
    }
    BOOL r5 = FALSE;
    Unk_ov055_02259994 *own = unk_ac;
    if (own->unk_70d == 1 && k == 0) {
        r5 = TRUE;
    }
    own->unk_70d = k;
    if (func_020e9a08(func_02072144())) {
        func_02073a0c();
        m[0] = 0x3c;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &m[0], data_ov055_02259820);
        func_ov055_0225922c(2);
    } else {
        if ((data_021f47d8[1] & 1) == 0 && !Unk_ov055_0225915c_Both() && r5 == 0) {
            return;
        }
        func_020e9a3c(func_02072144());
        m[1] = 0x3a;
        _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &m[1], data_ov055_02259820);
        func_ov055_0225922c(3);
    }
}

void Unk_ov055_02259904::func_ov055_02259128() {
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        func_0200402c(0x69);
        _ZN12Unk_020660f813func_02067a6cEv(unk_3c);
        func_ov055_0225922c(0);
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov055_02259904

void Unk_ov055_02259904::func_ov055_022590b0() {
    void *r4 = unk_3c;
    if (((*(volatile u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
        if (func_020e9a08(func_02072144())) {
            func_0200402c(0x69);
            func_02073a0c();
            u8 m = 0x3c;
            _ZN12Unk_020660f813func_02067a84EPhPv(unk_3c, &m, data_ov055_02259820);
        } else {
            if (func_020e9a18(func_02072144()) != 1) {
                func_020e9a3c(func_02072144());
                return;
            }
        }
        _ZN12Unk_020660f813func_02067a6cEv(r4);
        func_ov055_0225922c(0);
    }
}

void Unk_ov055_02259994::func_ov055_0225904c() {
    Unk_0208f238 *r4 = func_0208f0b0(4);
    u32 st = unk_18a4.unk_f8;
    if (st == 2) {
        MI_CpuCopy8(&unk_18a4, data_021ecfa8, 0xf8);
        func_ov055_02259028();
    } else if (st == 1) {
        MI_CpuCopy8(&unk_1058, r4, 0x84c);
        r4->func_0208f174();
        r4->func_0208f1a8(1);
    }
}

void Unk_ov055_02259994::func_ov055_02259028() {
    MI_CpuCopy8(&unk_710, func_0208f0b0(4), 0x84c);
}

BOOL Unk_ov055_02259994::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov055_02259994::vfunc_58() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov055_02259994::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        _ZN12Unk_020d771413func_02015ab0Ej(&unk_658, func_0201bc4c(4));
        func_ov055_022594e0(1);
        break;
    case 1:
        unk_658.vfunc_08();
        _ZN12Unk_020d771413func_02015ab0Ej(&unk_658, func_0201bc4c(4));
        func_ov055_022594e0(1);
        break;
    case 8:
        func_ov055_022594e0(0);
        break;
    }
}

void Unk_ov055_02259994::func_ov055_02258f04() {
    func_020b013c();
    Unk_0208f238 *r4 = func_0208f0b0(4);
    MI_CpuCopy8(r4, &unk_710, 0x84c);
    unk_f5c.unk_f8 = 1;
    func_0208f1dc(r4);
    if (unk_70c == 0) {
        s32 r = func_020a049c();
        if (r == 1 || r == 4) {
            unk_70c = 1;
        }
    }
}

void Unk_ov055_02259994::func_ov055_02258ed4() {
    if (unk_70c == 0) {
        func_0208f0b0(4);
        s32 r = func_020a049c();
        if (r == 1 || r == 4) {
            unk_70c = 1;
        }
    }
}

void Unk_ov055_02259994::func_ov055_02258eb4() {
    func_02076c50(data_021cc7d0);
    func_02076c24(data_021cc7d0, (u32)OVERLAY_67_ID);
}

void Unk_ov055_02259994::func_ov055_02258e94() {
    func_02076c50(data_021cc7d0);
    func_02076c24(data_021cc7d0, (u32)OVERLAY_68_ID);
}

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov055_02259994



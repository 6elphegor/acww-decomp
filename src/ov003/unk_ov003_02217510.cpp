// mwcc-version: 1.2/sp2
// mwcc-flags: -str reuse
#include "types.h"

class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
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
    Unk_020d8c7c() {}
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov003_Vec {
    s32 x, y, z;
};

class Unk_020d5d84 : public Unk_020d8c7c {
public:
    Unk_020d5d84();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020d5d84();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0xd4 - 0x68];
};

class Unk_020d9670 : public Unk_020d5d84 {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    virtual void func_0203e678(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e624(u32 a);

    /* 0xd4 */ u8 unk_d4[0x10];
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u8 unk_ea;
    /* 0xeb */ u8 pad_eb;
};

// Secondary base at +0xec (vtable main 0x020ddcf0 chain).  Slots are named vfunc_sXX (see aliases above) except 0x14.
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_s08();

    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

struct Unk_020660f8 {
    u8 pad_00[0x14];
    s32 unk_14;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_s14();
    virtual void vfunc_s18();
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
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 unk_40;
    u8 pad_41[3];
};

struct Unk_ov003_Blk {
    s64 v[6];
};

struct Unk_ov003_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

class Unk_020b1ddc;

// ov009 actor base (vtable 0x0225e29c, size 0x2b0).  Return types of the virtuals are those the derived units need.
class Unk_ov009_0225e29c : public Unk_020d9670, public Unk_020ddcf0 {
public:
    Unk_ov009_0225e29c();
    virtual ~Unk_ov009_0225e29c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_1c();
    virtual void vfunc_20(u32 a);
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_48(Unk_020d9670 *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov003_Vec *vfunc_50();
    virtual void vfunc_60(u32 a, void *p);
    virtual s32 vfunc_64();
    virtual s32 vfunc_68();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL vfunc_70();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual void vfunc_b4();
    virtual BOOL vfunc_b8();

    s32 func_ov009_0225d6b8(u32 a);
    void func_ov009_0225d244();
    void func_ov009_0225bc88();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u8 pad_134[4];
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov003_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1f0 - 0x1cc];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov003_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 pad_234[0x278 - 0x234];
    /* 0x278 */ u32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ u8 pad_280[0x288 - 0x280];
    /* 0x288 */ void *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d[0x2a4 - 0x28d];
    /* 0x2a4 */ Unk_ov003_Vec unk_2a4;
    /* 0x2b0 */
};

extern "C" {
extern u8 data_021ed104[];

s32 func_0204b178(void *p);
void *func_0209750c();
void func_0209d498(void *p);
void func_0209cf18(void *p);
BOOL func_020a032c();
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
BOOL func_02098044(void *p, s32 a);
BOOL func_020ae964(void *p, void *q);
BOOL func_020ae9e0(void *p);
void *func_020aeac4(void *p);
BOOL func_020ae8fc(void *p);
BOOL func_020ae940(void *p);
}

struct Unk_ov003_SceneEntry {
    void *(*factory)();
    u16 id;
    u16 size;
    u32 zero;
    u32 a, b, c;
};

// ============================================================ class Unk_ov003_02232114
class Unk_ov003_02232114 : public Unk_ov009_0225e29c {
public:
    Unk_ov003_02232114();
    virtual ~Unk_ov003_02232114();

    virtual BOOL vfunc_70();
    virtual void vfunc_78();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_98();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual BOOL vfunc_ac();

    BOOL func_02217514();

    /* 0x2b0 */ s32 unk_2b0;
};

extern "C" Unk_ov003_02232114 *func_ov003_022177c0() {
    return new Unk_ov003_02232114;
}

Unk_ov003_02232114::Unk_ov003_02232114() {
}

Unk_ov003_02232114::~Unk_ov003_02232114() {
}

BOOL Unk_ov003_02232114::vfunc_70() {
    unk_2b0 = func_0204b178(&unk_132);
    return TRUE;
}

char *Unk_ov003_02232114::vfunc_a4() {
    return Unk_ov009_0225e29c::vfunc_a4();
}

char *Unk_ov003_02232114::vfunc_a8() {
    return Unk_ov009_0225e29c::vfunc_a8();
}

BOOL Unk_ov003_02232114::vfunc_ac() {
    return Unk_ov009_0225e29c::vfunc_ac();
}

void Unk_ov003_02232114::vfunc_78() {
    struct {
        s32 pad0, pad1;
        s32 a, b;
    } l;
    func_020a710c("obj_etc_closed");
    if (unk_2b0 == -1) {
        if (unk_232.f1) {
            func_020a710c("obj_etc_error");
            unk_1e = 0;
        } else {
            unk_1e = 4;
        }
    } else {
        void *x = func_0209750c();
        if (func_020a032c() || func_02098044(x, 0x23)) {
            func_020a710c("sp_etc_sequence4");
            unk_1e = 0x15;
        } else if (func_02217514()) {
            unk_1e = 7;
        } else if (unk_232.f1) {
            func_020a710c("obj_etc_error");
            unk_1e = 0;
        } else {
            BOOL k = FALSE;
            u8 *p = data_021ed104;
            if (((u8 *)func_020aeac4(p))[3]) {
                l.a = 0;
                l.b = 0;
                func_0209d498(&l.a);
                if (func_020ae8fc(p)) {
                    if (*((u8 *)&l + 10) > 0xc) {
                        k = TRUE;
                    }
                } else if (func_020ae940(p)) {
                    k = TRUE;
                } else if (func_020ae9e0(p)) {
                    k = TRUE;
                }
            }
            if (k) {
                unk_1e = 7;
            } else {
                unk_1e = unk_2b0 & 3;
            }
        }
    }
}

BOOL Unk_ov003_02232114::vfunc_8c() {
    struct {
        u8 a, b, c, d;
    } d;
    func_0209cf18(&d);
    if (unk_2b0 == -1) {
        if (d.b >= 8 && d.b < 0x17) {
            return TRUE;
        }
        return FALSE;
    }
    void *x = func_0209750c();
    if (func_020a032c() || (x && func_02098044(x, 0x23))) {
        return FALSE;
    }
    if (x && func_02098044(x, 1)) {
        return TRUE;
    }
    if (func_02217514()) {
        return FALSE;
    }
    if (d.b >= 8) {
        if (d.b < 0x17) {
            goto range;
        }
    }
    return FALSE;
range:
    if (!func_020ae9e0(data_021ed104)) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov003_02232114::func_02217514() {
    if (unk_2b0 != -1) {
        struct {
            s32 a, b;
        } d;
        d.a = 0;
        d.b = 0;
        func_0209d498(&d);
        if (func_020ae964(data_021ed104, &d)) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov003_02232114::vfunc_98() {
    return TRUE;
}

extern "C" Unk_ov003_SceneEntry data_ov003_022320f4 = {(void *(*)())func_ov003_022177c0, 0x21, 0x27, 0, 0xc8000, 0x12c000, 0x258000};

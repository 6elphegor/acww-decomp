#include "types.h"

// Local copies of the library base classes with the parameters these overrides forward.
class Unk_020d8c7c_Base {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);
    Unk_020d8c7c_Base();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
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
    Unk_020d8c7c() {}
    virtual void vfunc_08(s32 a);
    virtual ~Unk_020d8c7c() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

class Unk_020872fc {
public:
    BOOL func_02087314();
    u16 *func_02087364();
};

class Unk_020cbb18 {
public:
    /* 0x00 */ u8 pad_00[0x64];
    /* 0x64 */ s32 unk_64;
    BOOL func_02072e44();
    BOOL func_02072e88(s32 i);
    void func_02072204(u32 v);
    u32 func_02072374();
    void func_02072380(u32 v);
    void func_02072824(u32 a, u32 b);
    void func_020728a4(u8 *p, u32 n);
    void func_020728d4();
    BOOL func_020729cc(u32 v);
    BOOL func_02072448();
    void func_02072460();
    void func_020724c4();
    BOOL func_02072558();
    BOOL func_02072620();
    BOOL func_02072744();
};

// Static object registered with the atexit-style helper (class of the destructor at func_02000c8c).
struct Unk_02000c8c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    Unk_02000c8c() {
        unk_00 = 0x10000;
        unk_04 = 0;
        unk_08 = 0x5000;
    }
    ~Unk_02000c8c();
};

struct Unk_020a4778_Id {
    u16 unk_00;
    u8 unk_02[8];
};

// Pieces of the singleton at data_021eda94
struct Unk_020a6754 {
    u8 unk_00[3];
    Unk_020a6754();
    ~Unk_020a6754();
    void func_020a6754();
    void func_020a6760(u8 *a, u8 *b, u8 *c);
};

struct Unk_020a6720 {
    u32 unk_00[2];
    Unk_020a6720();
    ~Unk_020a6720();
    void func_020a6720();
    void func_020a672c(s32 *a, u8 *b);
};

struct Unk_020a66f8 {
    u32 unk_00;
    Unk_020a66f8();
    ~Unk_020a66f8();
    void func_020a66f8();
    void func_020a6700(u32 *a);
};

struct Unk_020a6790 {
    u32 unk_00[2];
    Unk_020a6790();
    ~Unk_020a6790();
    void func_020a6790();
    void func_020a67a0(u8 *a, u8 *b, u8 *c, u32 *d);
};

// stack objects with plain-function constructors and destructors
extern "C" {
void *func_020a68a8(void *);
void *func_020a6898(void *);
void func_020a6878(void *, u32, u32, u32, u32);
void *func_020a6970(void *);
void *func_020a696c(void *);
void func_020a6968(void *, u32);
void *func_020a6848(void *);
void *func_020a6838(void *);
}

struct Unk_020a67bc {
    u32 unk_00[2];
    Unk_020a67bc() { func_020a68a8(this); }
    ~Unk_020a67bc() { func_020a6898(this); }
    void func_020a6878(u32 a, u32 b, u32 c, u32 d) { ::func_020a6878(this, a, b, c, d); }
};

struct Unk_020a6968 {
    u32 unk_00[2];
    Unk_020a6968() { func_020a6970(this); }
    ~Unk_020a6968() { func_020a696c(this); }
    void func_020a6968(u32 a) { ::func_020a6968(this, a); }
};

struct Unk_020a56c4_Buf {
    u8 v[5];
    Unk_020a56c4_Buf() { func_020a6848(this); }
    ~Unk_020a56c4_Buf() { func_020a6838(this); }
};

// The singleton, composite view (constructor and destructor live here)
class Unk_020a4738 {
public:
    /* 0x00 */ Unk_020a6754 unk_00[4];
    /* 0x0c */ Unk_020a6720 unk_0c[4];
    /* 0x2c */ Unk_020a66f8 unk_2c[4];
    /* 0x3c */ Unk_020a6790 unk_3c[4];
    /* 0x5c */ u8 pad_5c[0x84 - 0x5c];
    /* 0x84 */ s32 unk_84[4];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ u16 unk_98;
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8[4];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ u8 unk_bc;
    /* 0xc0 */ s32 unk_c0;
    /* 0xc4 */ u8 unk_c4;

    Unk_020a4738();
    ~Unk_020a4738();
    u8 func_020a4738();
    void func_020a4740(u8 v);
    s32 func_020a4748();
    void func_020a4750(s32 v);
    u8 func_020a4758();
    void func_020a4760(u8 v);
    s32 func_020a4768();
    void func_020a4770(s32 v);
    void func_020a4778();
    void func_020a4bc0();
    void func_020a4bd4(s32 i);
    s32 func_020a4be0(s32 i);
    void func_020a4bec(s32 i, s32 v);
    void func_020a4bf8();
    s32 func_020a4c00();
    void func_020a4c08(s32 v);
    void func_020a4c10();
    s32 func_020a4c18();
    void func_020a4c20(s32 v);
    void func_020a4c28();
    s32 func_020a4c30();
    void func_020a4c38(s32 v);
    u16 func_020a4c40();
    void func_020a4c48(u16 v);
    s32 func_020a4c50();
    void func_020a4c58(s32 v);
    void func_020a4c60();
    void func_020a5a9c(s32 idx);
};

struct Unk_020a512c_Ent {
    u32 a;
    u8 b;
    u8 pad[3];
};

// The singleton, second view (methods of the 0x020a512c class); same memory as Unk_020a4738
struct Unk_020a512c {
    u8 unk_00[12];
    Unk_020a512c_Ent unk_0c[4];
    u32 unk_2c[4];
    u8 unk_3c[4][8];
    u8 unk_5c;
    u8 pad_5d[3];
    s32 unk_60;
    s32 unk_64;
    u8 unk_68[4];
    s32 unk_6c;
    s32 unk_70;
    s32 unk_74;
    s32 unk_78;
    u8 unk_7c;
    u8 pad_7d[3];
    s32 unk_80;
    u32 unk_84[4];
    void func_020a512c(u32 a, u32 b);
    void func_020a5188();
    u32 func_020a5198(s32 i);
    void func_020a51a4(s32 i, u32 v);
    void func_020a51b0();
    s32 func_020a5258();
    void func_020a5260(s32 v);
    u32 func_020a5268();
    void func_020a5270(u32 v);
    void func_020a5278();
    s32 func_020a52a4();
    void func_020a52a8(s32 v);
    s32 func_020a52ac();
    void func_020a52b0(s32 v);
    s32 func_020a52b4();
    void func_020a52b8(s32 v);
    void func_020a52bc();
    s32 func_020a5360();
    void func_020a5364(s32 v);
    void func_020a5368();
    u32 func_020a537c(s32 i);
    void func_020a5384(s32 i, u32 v);
    s32 func_020a538c();
    void func_020a5390(s32 v);
    void func_020a5394();
    s32 func_020a56ac();
    void func_020a56b0(s32 v);
    u32 func_020a56b4();
    void func_020a56bc(u32 v);
    void func_020a56c4();
    void func_020a5760(u32 *a, u32 *b);
    void func_020a5800();
    void func_020a5854();
    s32 func_020a58a0();
    void func_020a58b8(u32 *a, u32 *b);
    void func_020a5908();
    void func_020a59c0();
};

// Vtable at 0x020e2980; its constructor and destructor are inline.
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020e2988() {}
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021c3cc0;
extern u8 data_021c3cb8;
extern u8 data_021d726c;
extern u32 data_021d72e8;
extern Unk_020a4778_Id data_021d7352;
}

static inline BOOL Unk_020a42c4_IsTwo(u8 v) { return v == 2 ? TRUE : FALSE; }
static inline BOOL Unk_020a42c4_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL IsZero_020a5d4c(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

extern "C" {
void func_02002918(void);
void func_02004074(void);
s32 func_0202e880(u32 a, u32 b, s32 c, s32 d);
void func_0203d4c0(void);
void func_0203d544(void);
BOOL func_0203d56c(void);
s32 func_0203e358(void);
s32 func_0203eb38(void);
void func_02041104(void);
s32 func_020412f0(u32 a, u32 b, u32 c);
s32 func_0204137c(u32 a, u32 b);
void func_02045c68(void);
void func_020535e0(void);
void func_0206e660(void);
u32 _ZN12Unk_020cbb1813func_02072448Ev(void *);
void _ZN12Unk_020cbb1813func_02072460Ev(void *);
u32 _ZN12Unk_020cbb1813func_02072478Ev(void *);
u32 _ZN12Unk_020cbb1813func_020724acEv(void *);
void _ZN12Unk_020cbb1813func_020724c4Ev(void *);
u32 _ZN12Unk_020cbb1813func_020724d8Ev(void *);
s32 func_02073168(void);
void func_020739b8(s32 a);
void func_0208e968(void);
s32 func_02097444(s32 a);
s32 func_020974a0(s32 a);
Unk_020872fc *_ZN12Unk_0209865c13func_020986a4Ev(s32 a);
void func_0209caf4(void);
void func_0209f230(s32 a);
void func_020a0408(s32 a);
void func_020a08dc(void);
void func_020a08f4(void);
void func_020a0900(void);
void func_020a0918(void);
void func_020a0924(void);
void func_020a6388(u32 idx, u32 a, u32 b, u32 c, u32 d);
void func_020a63a8(s32, s32);
void func_020a63bc(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020a6430(s32 a, s32 b);
void func_020a6470(void);
BOOL func_020a6474();
BOOL func_020a6478();
void func_020a647c();
void func_020a64e4(s32 a);
void func_020a6564();
void func_020a65fc(s32 a);
void func_020a66d4(void *p, u32 a, u32 b, u32 c);
void func_020a66f0(void *p);
void func_020a66f4(void *p);
void _ZN12Unk_020a66f813func_020a66f8Ev(void *);
void _ZN12Unk_020a66f813func_020a6700EPj(void *, s32 *);
void _ZN12Unk_020a672013func_020a6720Ev(void *);
void _ZN12Unk_020a672013func_020a672cEPiPh(void *, s32 *, u8 *);
void _ZN12Unk_020a675413func_020a6754Ev(void *);
void _ZN12Unk_020a675413func_020a6760EPhS0_S0_(void *, u8 *, u8 *, u8 *);
void _ZN12Unk_020a679013func_020a6790Ev(void *);
void _ZN12Unk_020a679013func_020a67a0EPhS0_S0_Pj(void *, u8 *, u8 *, u8 *, u32 *);
void func_020a681c(void *, s32, u32, u32, u32, u32);
s32 func_020b4934(void);
u32 func_020b4994(void);
s32 func_020b49a8(s32 a);
void func_020b4a08(s32 a, s32 b);
void func_020b4f18(s32 a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
s32 func_020b50e8(void);
void func_020b78dc(void);
void func_020b78f4(s32 a);
void func_020b7914(s32 a);
void func_020e9b70(void);
u32 func_020eaf28(void);
s32 func_020eca8c(void *p);
s32 func_020ed188(void *p);
void func_0210fbc4(s32 a);
void func_0210fcb8(s32 a);
void func_0210ff74(s32 a);
void func_02110088(s32 a);
void func_021101f4(s32 a);
void func_02111110(void);
s32 func_02115468(s32 v);
void func_02116048(void *src, void *dst, u32 size);
s32 func_02128930(const void *a, const void *b, u32 n);
void func_02133ef8(void *dst, u32 size);
}

extern Unk_020a4738 data_021eda94;

static inline Unk_020a4738 &V2() { return data_021eda94; }
static inline Unk_020a512c &V3() { return *(Unk_020a512c *)&data_021eda94; }

struct Unk_020e2978_Rec {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
};
extern u8 data_020e2970;
extern u16 data_020e2974;
extern Unk_020e2978_Rec data_020e2978;
extern u8 data_021eda50;
extern volatile u8 data_021eda54;
extern u8 data_021eda58;
extern u8 data_021eda5c;
extern u8 data_021eda60;
extern u8 data_021eda64;
extern void *data_021eda68;

// callers pass an untruncated int to these u8/u16 parameters
extern "C" void _ZN12Unk_020a473813func_020a4c48Et(void *self, s32 v);
extern "C" void _ZN12Unk_020a473813func_020a4740Eh(void *self, s32 v);

// own prototypes
extern "C" {
s32 func_020a6358(s32 a);
s32 func_020a6328(s32 a);
s32 func_020a62f8(s32 a);
s32 func_020a62a0();
s32 func_020a6280();
s32 func_020a6214(u32 a);
s32 func_020a6114(s32 a, s32 b, u32 c, u8 *d);
s32 func_020a60d0(s32 a);
s32 func_020a608c(s32 a);
s32 func_020a6018(u32 a);
void func_020a5fb0();
void func_020a5f9c(s32 a, s32 b);
s32 func_020a5f8c(s32 a);
void func_020a5f7c(s32 a);
void func_020a5f6c();
void func_020a5f5c(s32 a);
void func_020a5f48(s32 a, s32 b);
void func_020a5f38(s32 a);
void func_020a5f28();
void func_020a5f18(s32 a);
void func_020a5f08();
void func_020a5ef8();
void func_020a5ee8(s32 a);
void func_020a5ed8(s32 a);
s32 func_020a5ec8();
void func_020a5eb4(s32 a, s32 b);
void func_020a5ea4(s32 a);
void func_020a5e94(s32 a);
void func_020a5e74(s32 idx, u8 *a, u8 *b, u8 *c);
void func_020a5dd8();
void func_020a5dac();
void func_020a5d4c();
void func_020a5d0c();
void func_020a5cfc(s32 a);
void func_020a5cec();
BOOL func_020a5cc0(s32 v);
void func_020a5cbc();
void func_020a5cb8();
void func_020a5cb4();
void func_020a5ca4();
void func_020a5c94(s32 a);
void func_020a5c30();
void func_020a5c2c();
Unk_020e2988 *func_020a46fc(void);
void func_020a4698(void);
void func_020a4414(u32 a, u32 b, u32 c, u32 d);
void func_020a43ec(void);
BOOL func_020a4394(void);
void func_020a42c4(void *p);
}


extern "C" s32 func_020a6358(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[0];
    }
    return 0x3f;
}

extern "C" s32 func_020a6328(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[1];
    }
    return 1;
}

extern "C" s32 func_020a62f8(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[2];
    }
    return 0;
}

extern "C" s32 func_020a62a0() {
    s32 r2 = data_020cbb18->unk_64;
    u8 v[3];
    if (r2 >= 4) {
        return 1;
    }
    data_021eda94.unk_00[r2].func_020a6760(&v[0], &v[1], &v[2]);
    if (v[2] == 0) {
        return v[1];
    }
    if (V3().func_020a56ac() < 7) {
        return v[1];
    }
    return V3().func_020a56b4();
}

extern "C" s32 func_020a6280() {
    s32 v = data_020cbb18->unk_64;
    if (v < 4) {
        return func_020a62f8(v);
    }
    return 1;
}

extern "C" s32 func_020a6214(u32 a) {
    s32 r6 = 4;
    s32 i;
    u8 v[3];
    i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            data_021eda94.unk_00[i].func_020a6760(&v[0], &v[1], &v[2]);
            if (v[0] == a && v[1] != 0 && v[2] == 0) {
                r6 = i;
                break;
            }
        }
    }
    return r6;
}

extern "C" s32 func_020a6114(s32 a, s32 b, u32 c, u8 *d) {
    s32 r4 = data_020cbb18->unk_64;
    u8 v[6];
    *d = 0;
    if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 1) {
        if (a != 1) goto fail;
        return a;
    } else if (b == 2) {
        if (a != 2) goto fail;
        return a;
    } else if (b == 3) {
        if (a != 3) goto fail;
        return a;
    } else if (b == 4) {
        if (a == r4) goto fail;
        return a;
    } else if (b == 5) {
        if (a == 0) goto fail;
        return a;
    } else if (b == 6) {
        s32 t = func_020a6214(c);
        if (t < 4) {
            if (t != a) goto fail;
            return a;
        }
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == c && v[1] != 0 && v[2] != 0) {
            *d = 1;
        }
        goto fail;
    } else if (b == 7) {
        data_021eda94.unk_00[a].func_020a6760(&v[3], &v[4], &v[5]);
        if (v[3] == c) {
            if (v[4] != 0) goto fail;
            if (v[5] != 0) goto fail;
            if (a == r4) goto fail;
            return a;
        } else {
            s32 t = V3().func_020a52a4();
            if (t >= 4) goto fail;
            if (t != a) goto fail;
            if (a == r4) goto fail;
            return a;
        }
    }
fail:
    return 4;
}

extern "C" s32 func_020a60d0(s32 a) {
    func_020a65fc(a);
    Unk_020cbb18 *o = data_020cbb18;
    o->func_020728d4();
    u32 r6 = _ZN12Unk_020cbb1813func_020724d8Ev(o);
    u32 r2 = _ZN12Unk_020cbb1813func_020724acEv(o);
    o->func_020728a4((u8 *)r6, r2);
    o->func_02072824(0xf, a);
    _ZN12Unk_020cbb1813func_020724c4Ev(o);
}

extern "C" s32 func_020a608c(s32 a) {
    func_020a64e4(a);
    Unk_020cbb18 *o = data_020cbb18;
    o->func_020728d4();
    u32 r6 = _ZN12Unk_020cbb1813func_02072478Ev(o);
    u32 r2 = _ZN12Unk_020cbb1813func_02072448Ev(o);
    o->func_020728a4((u8 *)r6, r2);
    o->func_02072824(0x10, a);
    _ZN12Unk_020cbb1813func_02072460Ev(o);
}

extern "C" s32 func_020a6018(u32 a) {
    s32 r5 = 4, r4 = 4;
    u8 v[3];
    Unk_020a6754 *p = data_021eda94.unk_00;
    u32 i;
    for (i = 0; i < 4; p++, i++) {
        p->func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == a && v[1] != 0) {
            if (v[2] != 0) {
                r5 = i;
            } else {
                r4 = i;
            }
        }
    }
    if (r5 == 4 && r4 == 4) {
        return 4;
    }
    if (r5 != 4 && r4 != 4) {
        return r4;
    }
    if (r5 != 4) {
        return r5;
    }
    return r4;
}

extern "C" void func_020a5fb0() {
    Unk_020cbb18 *o = data_020cbb18;
    if (o->func_020729cc(0)) {
        s32 r4 = o->unk_64;
        func_020a6430(r4, func_020b4994());
    } else {
        Unk_020a6968 tmp;
        tmp.func_020a6968(func_020b4994());
        o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4((u8 *)&tmp, 1);
        o->func_02072824(8, 0);
    }
}

extern "C" void func_020a5f9c(s32 a, s32 b) {
    V3().func_020a51a4(a, b);
}

extern "C" s32 func_020a5f8c(s32 a) {
    return V3().func_020a5198(a);
}

extern "C" void func_020a5f7c(s32 a) {
    _ZN12Unk_020a473813func_020a4c48Et(&data_021eda94, a);
}

extern "C" void func_020a5f6c() {
    data_021eda94.func_020a4c40();
}

extern "C" void func_020a5f5c(s32 a) {
    data_021eda94.func_020a4c20(a);
}

extern "C" void func_020a5f48(s32 a, s32 b) {
    data_021eda94.func_020a4bec(a, b);
}

extern "C" void func_020a5f38(s32 a) {
    data_021eda94.func_020a4c08(a);
}

extern "C" void func_020a5f28() {
    data_021eda94.func_020a4c00();
}

extern "C" void func_020a5f18(s32 a) {
    data_021eda94.func_020a4750(a);
}

extern "C" void func_020a5f08() {
    data_021eda94.func_020a4748();
}

extern "C" void func_020a5ef8() {
    data_021eda94.func_020a4c50();
}

extern "C" void func_020a5ee8(s32 a) {
    data_021eda94.func_020a4c58(a);
}

extern "C" void func_020a5ed8(s32 a) {
    V3().func_020a56b0(a);
}

extern "C" s32 func_020a5ec8() {
    return V3().func_020a56ac();
}

extern "C" void func_020a5eb4(s32 a, s32 b) {
    V3().func_020a5384(a, b);
}

extern "C" void func_020a5ea4(s32 a) {
    V3().func_020a52b0(a);
}

extern "C" void func_020a5e94(s32 a) {
    V3().func_020a5270(a);
}

extern "C" void func_020a5e74(s32 idx, u8 *a, u8 *b, u8 *c) {
    if (idx < 4) {
        data_021eda94.unk_00[idx].func_020a6760(a, b, c);
    }
}

extern "C" void func_020a5dd8() {
    Unk_020cbb18 *o = data_020cbb18;
    s32 r5 = o->unk_64;
    if (o->func_02072e88(r5)) {
        if (_ZN12Unk_020cbb1813func_020724acEv(o)) {
            func_020a6564();
            func_020a63bc(r5, 0x3f, 1, 0, 2);
            if (o->func_02072e44()) {
                if (r5 != 0) {
                    Unk_020a67bc tmp;
                    tmp.func_020a6878(0x3f, 1, 0, 2);
                    o = data_020cbb18;
                    o->func_020728d4();
                    o->func_020728a4((u8 *)&tmp, 2);
                    o->func_02072824(0xb, 0);
                } else {
                    func_020a6388(r5, 0x3f, 1, 0, 2);
                }
            }
        }
    }
}

extern "C" void func_020a5dac() {
    Unk_020cbb18 *o = data_020cbb18;
    if (o->func_02072e88(*(s32 *)((u8 *)o + 0x64))) {
        if (_ZN12Unk_020cbb1813func_02072448Ev(o)) {
            func_020a647c();
        }
    }
}

extern "C" void func_020a5d4c() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        if (V3().func_020a56ac() == 3) {
            if (IsZero_020a5d4c(data_021c3cc0)) {
                if (!func_020a5cc0(func_020b50e8())) {
                    func_020a60d0(V3().func_020a538c());
                }
                V3().func_020a56b0(5);
            }
        }
    }
}

extern "C" void func_020a5d0c() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        s32 r4 = V3().func_020a52ac();
        if (r4 < 4) {
            func_020a608c(r4);
            V3().func_020a52a8(r4);
            V3().func_020a52b0(4);
        }
    }
}

extern "C" void func_020a5cfc(s32 a) {
    _ZN12Unk_020a473813func_020a4740Eh(&data_021eda94, a);
}

extern "C" void func_020a5cec() {
    data_021eda94.func_020a4738();
}

extern "C" BOOL func_020a5cc0(s32 v) {
    switch (v) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x2e:
    case 0x2f:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_020a5cbc() {
}

extern "C" void func_020a5cb8() {
}

extern "C" void func_020a5cb4() {
}

extern "C" void func_020a5ca4() {
    V3().func_020a59c0();
}

extern "C" void func_020a5c94(s32 a) {
    data_021eda94.func_020a5a9c(a);
}

extern "C" void func_020a5c30() {
    s32 r4 = data_020cbb18->unk_64;
    if (data_020cbb18->func_02072e88(r4)) {
        V3().func_020a5278();
        V3().func_020a51b0();
        if (r4 == 0) {
            V3().func_020a5908();
            V3().func_020a56c4();
        }
        if (r4 != 0) {
            V3().func_020a5800();
        }
        if (r4 == 0) {
            data_021eda94.func_020a4c60();
        }
        data_021eda94.func_020a4778();
        V3().func_020a5394();
        V3().func_020a52bc();
    }
}

extern "C" void func_020a5c2c() {
}

Unk_020a4738::Unk_020a4738() {
    ((Unk_020a512c *)this)->func_020a59c0();
}

Unk_020a4738::~Unk_020a4738() {
}

void Unk_020a4738::func_020a5a9c(s32 idx) {
    unk_00[idx].func_020a6754();
    unk_0c[idx].func_020a6720();
    unk_2c[idx].func_020a66f8();
    unk_3c[idx].func_020a6790();
    func_020a4bd4(idx);
    ((Unk_020a512c *)this)->func_020a5384(idx, 0);
    if (idx != 0) {
        ((Unk_020a512c *)this)->func_020a51a4(idx, 7);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a538c()) {
        ((Unk_020a512c *)this)->func_020a5390(4);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a5360()) {
        ((Unk_020a512c *)this)->func_020a5364(4);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a5258()) {
        ((Unk_020a512c *)this)->func_020a5260(4);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a52ac()) {
        ((Unk_020a512c *)this)->func_020a52b0(4);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a52a4()) {
        ((Unk_020a512c *)this)->func_020a52a8(4);
    }
    if (idx == ((Unk_020a512c *)this)->func_020a52b4()) {
        ((Unk_020a512c *)this)->func_020a52b8(4);
    }
}

void Unk_020a512c::func_020a59c0() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        _ZN12Unk_020a675413func_020a6754Ev(&unk_00[i * 3]);
        _ZN12Unk_020a672013func_020a6720Ev(&unk_0c[i]);
        _ZN12Unk_020a66f813func_020a66f8Ev(&unk_2c[i]);
        _ZN12Unk_020a679013func_020a6790Ev(unk_3c[i]);
    }
    ((Unk_020a4738 *)this)->func_020a4c28();
    ((Unk_020a4738 *)this)->func_020a4c10();
    ((Unk_020a4738 *)this)->func_020a4bf8();
    ((Unk_020a4738 *)this)->func_020a4bc0();
    ((Unk_020a4738 *)this)->func_020a4770(0);
    func_020a5188();
    func_020a5390(4);
    func_020a5368();
    func_020a5364(4);
    func_020a56b0(16);
    func_020a52b0(4);
    func_020a52a8(4);
    func_020a52b8(4);
    func_020a5270(0);
    func_020a5260(4);
    ((Unk_020a4738 *)this)->func_020a4c58(4);
    func_020a56bc(0);
    ((Unk_020a4738 *)this)->func_020a4760(0);
    ((Unk_020a4738 *)this)->func_020a4750(4);
    ((Unk_020a4738 *)this)->func_020a4740(0);
}

u8 data_021eda5c;
u8 data_021eda58;
Unk_020a4738 data_021eda94;
Unk_020e2978_Rec data_020e2978 = {(void *)func_020a46fc, 2, 1};

void Unk_020a512c::func_020a5908() {
    struct {
        u8 b0, b1, b2;
        u8 buf[5];
    } l;
    u32 idx[2] = {4, 4};
    u32 cnt[2];
    func_02133ef8(cnt, 8);
    func_020a5760(&idx[0], &cnt[0]);
    func_020a58b8(&idx[1], &cnt[1]);
    u32 i = 0;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i < 2; i++) {
        u32 off = i << 2;
        s32 r7 = *(u32 *)((u8 *)idx + off);
        if (r7 < 4) {
            _ZN12Unk_020a675413func_020a6760EPhS0_S0_(&unk_00[r7 * 3], &l.b0, &l.b1, &l.b2);
            func_020a6848(l.buf);
            func_020a681c(l.buf, r7, l.b0, l.b1, l.b2, *(u32 *)((u8 *)cnt + off));
            o->func_020728d4();
            o->func_020728a4(l.buf, 2);
            o->func_02072824(9, 4);
            func_020a6838(l.buf);
        }
    }
}

void Unk_020a512c::func_020a58b8(u32 *a, u32 *b) {
    s32 r5 = 4;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 >= 4) {
        s32 r4 = func_020a58a0();
        if (r4 < 4) {
            func_020a63bc(r4, 0x3f, 0, 1, 4);
            *a = r4;
            *b = 4;
        }
    }
}

s32 Unk_020a512c::func_020a58a0() {
    s32 v;
    u8 byte;
    _ZN12Unk_020a672013func_020a672cEPiPh(unk_0c, &v, &byte);
    return v;
}

void Unk_020a512c::func_020a5854() {
    if (func_020a58a0() < 4) {
        u8 *p = (u8 *)unk_0c;
        s32 i;
        for (i = 2; i >= 0; i--) {
            u8 *q = p + 8;
            s32 v;
            u8 byte;
            _ZN12Unk_020a672013func_020a672cEPiPh(q, &v, &byte);
            if (v >= 4) break;
            func_02116048(q, p, 8);
            p += 8;
        }
        _ZN12Unk_020a672013func_020a6720Ev(p);
    }
}

void Unk_020a512c::func_020a5800() {
    s32 idx = ((volatile Unk_020cbb18 *)data_020cbb18)->unk_64;
    u32 *p = &unk_2c[idx];
    s32 v;
    _ZN12Unk_020a66f813func_020a6700EPj(p, &v);
    if (v != 0) {
        u8 b = v;
        Unk_020cbb18 *o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&b, 1);
        o->func_02072824(10, 0);
        _ZN12Unk_020a66f813func_020a66f8Ev(p);
    }
}

void Unk_020a512c::func_020a5760(u32 *a, u32 *b) {
    Unk_020cbb18 *o;
    s32 r5 = func_020a58a0();
    if (r5 < 4) {
        u32 *p = &unk_2c[r5];
        s32 v;
        _ZN12Unk_020a66f813func_020a6700EPj(p, &v);
        if (v == 1) {
            s32 r7 = 1;
            s32 tmp;
            u8 byte;
            _ZN12Unk_020a672013func_020a672cEPiPh(unk_0c, &tmp, &byte);
            s32 i;
            i = 3;
            o = data_020cbb18;
            for (; i >= 0; i--) {
                if (r5 != i && o->func_02072e88(i) != 0 && byte == func_020a6358(i)) {
                    r7 = 0;
                    break;
                }
            }
            func_020a63bc(r5, byte, r7, 0, 7);
            _ZN12Unk_020a66f813func_020a66f8Ev(p);
            func_020a5854();
            *a = r5;
            *b = 7;
        }
    }
}

void Unk_020a512c::func_020a56c4() {
    u32 i = 0;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i < 4; i++) {
        u8 b0, b1, b2;
        u8 buf[5];
        u32 out;
        u8 *p = unk_3c[i];
        _ZN12Unk_020a679013func_020a67a0EPhS0_S0_Pj(p, &b0, &b1, &b2, &out);
        if (out != 0) {
            func_020a63bc(i, b0, b1, b2, out);
            func_020a6848(buf);
            func_020a681c(buf, i, b0, b1, b2, out);
            o->func_020728d4();
            o->func_020728a4(buf, 2);
            o->func_02072824(9, 4);
            _ZN12Unk_020a679013func_020a6790Ev(p);
            func_020a6838(buf);
        }
    }
}

void Unk_020a512c::func_020a56bc(u32 v) { unk_5c = v; }

u32 Unk_020a512c::func_020a56b4() { return unk_5c; }

void Unk_020a512c::func_020a56b0(s32 v) { unk_60 = v; }

s32 Unk_020a512c::func_020a56ac() { return unk_60; }

void Unk_020a512c::func_020a5394() {
    Unk_020cbb18 *o = data_020cbb18;
    s32 r7 = o->unk_64;
    u8 b0, b1, b2, b3, b4, b5;
    s32 best;
    s32 flag;
    s32 i;
    switch ((u32)func_020a56ac()) {
    case 16:
        if (data_020e2974 == 5) {
            func_020a5fb0();
            func_020a5368();
            func_020a5270(0);
            func_020a5ed8(0);
        }
        break;
    case 0:
        if (func_020a62f8(r7) != 0) {
            func_020a56b0(1);
        }
        break;
    case 1:
        if (func_020a6478() != 0) break;
        if (func_020a6474() != 0) break;
        func_020a5e74(r7, &b0, &b1, &b2);
        if (b1 != 0) {
            best = 4;
            for (i = 0; i < 4; i++) {
                if (i != r7 && o->func_02072e88(i) != 0 && b0 == func_020a6358(i)) {
                    best = i;
                    break;
                }
            }
            if (best < 4) {
                func_020a5390(best);
                func_020a56b0(2);
            } else {
                func_020a5390(4);
                func_020a56b0(5);
            }
        } else {
            func_020a5390(4);
            func_020a56b0(4);
        }
        break;
    case 2:
        flag = 1;
        if (func_020a5cc0(func_020b50e8()) == 0) {
            for (i = 3; i >= 0; i--) {
                if (i != r7 && o->func_02072e88(i) != 0) {
                    s32 t = func_020a6358(i);
                    if (t == func_020b50e8() && func_020a537c(i) == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag != 0) {
            if (o->func_02072744() != 0) break;
            if (o->func_02072620() != 0) break;
            if (o->func_02072558() != 0) break;
            if (func_020a6474() != 0) break;
            func_020a5368();
            o->func_020724c4();
            func_020a56b0(3);
        }
        break;
    case 4:
        if (func_020a5268() == 0 && func_020a5cc0(func_020b50e8()) == 0) break;
        func_020a5270(0);
        func_020a56b0(5);
        break;
    case 8:
        if (func_020a538c() != 4) {
            if (func_020a6328(func_020a538c()) == 0 && func_020a5cc0(func_020b50e8()) == 0) break;
            func_020a56b0(9);
        } else {
            func_020a56b0(9);
        }
        break;
    case 9: {
        u32 v = func_020b4994();
        best = 4;
        for (i = 3; i >= 0; i--) {
            if (i != r7 && o->func_02072e88(i) != 0) {
                func_020a5e74(i, &b3, &b4, &b5);
                if (b3 == v && b4 != 0) {
                    best = i;
                    break;
                }
            }
        }
        if (best < 4) {
            func_020a52b8(best);
            func_020a56bc(0);
            o->func_02072460();
            if (func_020a5cc0(func_020b4994()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0xe, func_020a52b4());
            }
            func_020a56b0(10);
        } else {
            func_020a52b8(4);
            func_020a56bc(1);
            func_020a56b0(11);
        }
        break;
    }
    case 10:
        if (o->func_02072448() != 0 || func_020a5cc0(func_020b4994()) != 0) {
            func_020a56b0(11);
        }
        break;
    case 11:
    case 12:
    case 13:
        break;
    case 14:
        func_020a63a8(((Unk_020cbb18 *)o)->unk_64, 1);
        func_020a56b0(15);
        break;
    case 15:
        if (func_020a6280() == 0) {
            func_020a56b0(16);
        }
        break;
    }
}

void Unk_020a512c::func_020a5390(s32 v) { unk_64 = v; }

s32 Unk_020a512c::func_020a538c() { return unk_64; }

void Unk_020a512c::func_020a5384(s32 i, u32 v) { unk_68[i] = v; }

u32 Unk_020a512c::func_020a537c(s32 i) { return unk_68[i]; }

void Unk_020a512c::func_020a5368() {
    u8 *p = unk_68;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 0;
}

void Unk_020a512c::func_020a5364(s32 v) { unk_6c = v; }

s32 Unk_020a512c::func_020a5360() { return unk_6c; }

void Unk_020a512c::func_020a52bc() {
    s32 r5 = 4;
    s32 i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i) != 0 && func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != func_020a5360()) {
        if (r5 < 4) {
            if (o->func_020729cc(r5) == 0 && (s32)func_020a6358(r5) == func_020b50e8() &&
                func_020a6328(r5) != 0 && func_020a5cc0(func_020b50e8()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0xd, r5);
            }
            func_020a5364(r5);
        } else {
            func_020a5364(4);
        }
    }
}

void Unk_020a512c::func_020a52b8(s32 v) { unk_70 = v; }

s32 Unk_020a512c::func_020a52b4() { return unk_70; }

void Unk_020a512c::func_020a52b0(s32 v) { unk_74 = v; }

s32 Unk_020a512c::func_020a52ac() { return unk_74; }

void Unk_020a512c::func_020a52a8(s32 v) { unk_78 = v; }

s32 Unk_020a512c::func_020a52a4() { return unk_78; }

void Unk_020a512c::func_020a5278() {
    s32 c = func_020a52a4();
    if (c < 4) {
        u32 t = func_020a6358(c);
        if ((s32)t == func_020b50e8()) {
            func_020a52a8(4);
        }
    }
}

void Unk_020a512c::func_020a5270(u32 v) { unk_7c = v; }

u32 Unk_020a512c::func_020a5268() { return unk_7c; }

void Unk_020a512c::func_020a5260(s32 v) { unk_80 = v; }

s32 Unk_020a512c::func_020a5258() { return unk_80; }

void Unk_020a512c::func_020a51b0() {
    s32 r5 = 4;
    Unk_020cbb18 *o = data_020cbb18;
    s32 saved = o->unk_64;
    s32 i;
    for (i = 3; i >= 0; i--) {
        if (o->func_02072e88(i) != 0 && func_020a62f8(i) != 0) {
            r5 = i;
            break;
        }
    }
    if (r5 != func_020a5258()) {
        if (r5 < 4) {
            if (o->func_020729cc(r5) == 0 && func_020a6328(saved) != 0 &&
                (s32)func_020a6358(r5) == func_020b50e8() && func_020a5cc0(func_020b50e8()) == 0) {
                Unk_020cbb18 *o2 = data_020cbb18;
                o2->func_020728d4();
                o2->func_02072824(0x11, r5);
            }
            func_020a5260(r5);
        } else {
            func_020a5260(4);
        }
    }
}

void Unk_020a512c::func_020a51a4(s32 i, u32 v) { unk_84[i] = v; }

u32 Unk_020a512c::func_020a5198(s32 i) { return unk_84[i]; }

void Unk_020a512c::func_020a5188() {
    u32 *p = unk_84;
    s32 i;
    for (i = 3; i >= 0; i--) *p++ = 7;
}

void Unk_020a512c::func_020a512c(u32 a, u32 b) {
    if (b != 0) {
        func_020a51a4(a, 6);
    } else if (a == 0) {
        func_020a51a4(0, 6);
    } else {
        u8 buf = 6;
        Unk_020cbb18 *o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&buf, 1);
        o->func_02072824(1, a);
        func_020a51a4(a, 7);
    }
}

void Unk_020a4738::func_020a4c60() {
    u32 i;
    u32 slot;
    s32 ok;
    s32 j;
    s32 z24 = 0, z28 = 0, z14 = 0, z18 = 0, z1c = 0, z20 = 0, z2c = 0;
    u8 m[5];
    s32 mode;
    Unk_020cbb18 *g;
    s32 c18;
    s32 k;
    BOOL all;
    BOOL all2;
    i = 0;
    do {
        slot = ((Unk_020a512c *)this)->func_020a5198(i);
        if (slot <= 3) {
            ok = TRUE;
            for (j = 3; j >= 0; j--) {
                switch (((Unk_020a512c *)this)->func_020a5198(j)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 7:
                    break;
                default:
                    ok = z14;
                    break;
                }
                if (!ok) {
                    break;
                }
            }
            if (ok) {
                if (func_020a4c30() != 4) {
                    ok = z18;
                }
            }
            if (ok) {
                if (func_020b50e8() == 0x2e || func_020b50e8() == 0x2f || func_020b50e8() == 0xd) {
                    ok = z1c;
                }
            }
            if (ok) {
                if (func_020b49a8(func_020b4934()) == 0x2e || func_020b49a8(func_020b4934()) == 0x2f ||
                    func_020b49a8(func_020b4934()) == 0xd) {
                    ok = z20;
                }
            }
            if (ok) {
                func_020a4c38(z24);
                func_020a4c20(i);
                if (slot == 0) {
                    func_020a4c08(z28);
                } else if (slot == 1) {
                    func_020a4c08(1);
                } else if (slot == 2) {
                    func_020a4c08(2);
                } else {
                    func_020a4c08(3);
                }
                ((Unk_020a512c *)this)->func_020a51a4(i, 4);
            } else {
                ((Unk_020a512c *)this)->func_020a512c(i, slot == 0 ? 1 : z2c);
            }
        }
        i++;
    } while (i < 4);

    if (func_020a4c30() == 0) {
        c18 = func_020a4c18();
        k = 3;
        g = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18 && g->func_02072e88(k)) {
                if (k == 0) {
                    func_020a4bec(0, 0);
                } else {
                    func_020a66f4(&m[0]);
                    mode = func_020a4c00();
                    func_020a66d4(&m[0], 0, mode, func_020a4c18());
                    g->func_020728d4();
                    g->func_020728a4(&m[0], 1);
                    g->func_02072824(0xc, k);
                    func_020a4bec(k, 1);
                    func_020a66f0(&m[0]);
                }
            }
        }
        func_020a4c38(1);
    }
    if (func_020a4c30() == 1) {
        all = TRUE;
        c18 = func_020a4c18();
        k = 3;
        g = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18 && g->func_02072e88(k)) {
                s32 v = func_020a4be0(k);
                if (v != 2 && v != 3) {
                    all = FALSE;
                    break;
                }
            }
        }
        if (all) {
            all2 = TRUE;
            for (k = 3; k >= 0; k--) {
                if (k != c18 && g->func_02072e88(k) && func_020a4be0(k) == 3) {
                    all2 = FALSE;
                    break;
                }
            }
            if (all2) {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->func_02072e88(k)) {
                        if (k == 0) {
                            func_020a4bec(0, 5);
                        } else {
                            func_020a66f4(&m[1]);
                            func_020a66d4(&m[1], 5, 4, func_020a4c18());
                            g->func_020728d4();
                            g->func_020728a4(&m[1], 1);
                            g->func_02072824(0xc, k);
                            func_020a4bec(k, 5);
                            func_020a66f0(&m[1]);
                        }
                    }
                }
                if (func_020a4c00() == 0 || g->func_020729cc(c18) != 0) {
                    ((Unk_020a512c *)this)->func_020a51a4(c18, 5);
                } else {
                    m[2] = 5;
                    Unk_020cbb18 *g5 = data_020cbb18;
                    g5->func_020728d4();
                    g5->func_020728a4(&m[2], 1);
                    g5->func_02072824(1, c18);
                    ((Unk_020a512c *)this)->func_020a51a4(c18, 7);
                }
                if (func_020a4c00() == 0) {
                    func_020a5cfc(0);
                }
                func_020a4c58(c18);
                func_020a4c38(2);
            } else {
                for (k = 3; k >= 0; k--) {
                    if (k != c18 && g->func_02072e88(k)) {
                        if (func_020a4be0(k) == 2) {
                            if (k == 0) {
                                func_020a4bec(0, 4);
                            } else {
                                func_020a66f4(&m[3]);
                                func_020a66d4(&m[3], 4, 4, func_020a4c18());
                                g->func_020728d4();
                                g->func_020728a4(&m[3], 1);
                                g->func_02072824(0xc, k);
                                func_020a4bec(k, 4);
                                func_020a66f0(&m[3]);
                            }
                        } else {
                            func_020a4bec(k, 6);
                        }
                    }
                }
                func_020a4c38(3);
            }
        }
    }
    if (func_020a4c30() == 2) {
        BOOL all3 = TRUE;
        s32 c18b = func_020a4c18();
        k = 3;
        Unk_020cbb18 *g6 = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18b && g6->func_02072e88(k) && func_020a4be0(k) != 6) {
                all3 = FALSE;
                break;
            }
        }
        if (all3) {
            func_020a4c38(4);
        }
    }
    if (func_020a4c30() == 3) {
        BOOL all4 = TRUE;
        s32 c18c = func_020a4c18();
        k = 3;
        Unk_020cbb18 *g7 = data_020cbb18;
        for (; k >= 0; k--) {
            if (k != c18c && g7->func_02072e88(k) && func_020a4be0(k) != 6) {
                all4 = FALSE;
                break;
            }
        }
        if (all4) {
            if (func_020a4c00() == 0 || g7->func_020729cc(c18c) != 0) {
                ((Unk_020a512c *)this)->func_020a51a4(c18c, 6);
            } else {
                m[4] = 6;
                Unk_020cbb18 *g8 = data_020cbb18;
                g8->func_020728d4();
                g8->func_020728a4(&m[4], 1);
                g8->func_02072824(1, c18c);
                ((Unk_020a512c *)this)->func_020a51a4(c18c, 7);
            }
            if (func_020a4c00() == 0) {
                func_020e9b70();
            }
            func_020a4c38(4);
        }
    }
}

void Unk_020a4738::func_020a4c58(s32 v) { unk_94 = v; }

s32 Unk_020a4738::func_020a4c50() { return unk_94; }

void Unk_020a4738::func_020a4c48(u16 v) { unk_98 = v; }

u16 Unk_020a4738::func_020a4c40() { return unk_98; }

void Unk_020a4738::func_020a4c38(s32 v) { unk_9c = v; }

s32 Unk_020a4738::func_020a4c30() { return unk_9c; }

void Unk_020a4738::func_020a4c28() { unk_9c = 4; }

void Unk_020a4738::func_020a4c20(s32 v) { unk_a0 = v; }

s32 Unk_020a4738::func_020a4c18() { return unk_a0; }

void Unk_020a4738::func_020a4c10() { unk_a0 = 4; }

void Unk_020a4738::func_020a4c08(s32 v) { unk_a4 = v; }

s32 Unk_020a4738::func_020a4c00() { return unk_a4; }

void Unk_020a4738::func_020a4bf8() { unk_a4 = 4; }

void Unk_020a4738::func_020a4bec(s32 i, s32 v) { unk_a8[i] = v; }

s32 Unk_020a4738::func_020a4be0(s32 i) { return unk_a8[i]; }

void Unk_020a4738::func_020a4bd4(s32 i) { unk_a8[i] = 6; }

void Unk_020a4738::func_020a4bc0() {
    s32 i;
    for (i = 3; i >= 0; i--) {
        unk_a8[i] = 6;
    }
}

// Unk_020a4738 methods

u16 data_020e2974 = 0xd8;

void Unk_020a4738::func_020a4778() {
    Unk_020cbb18 *g = data_020cbb18;
    s32 st = g->unk_64;
    s32 mode;
    s32 v;
    s32 st2;
    u8 m[4];
    if (func_020a4be0(st) == 0) {
        func_020a4770(0);
        func_020a4bec(st, 1);
    }
    st = g->unk_64;
    if (func_020a4be0(st) == 1) {
        BOOL r7 = FALSE;
        s32 t = func_020b50e8();
        if (t != 0x2e && t != 0xc && t != 0xd && t != 0xe && t != 0x2f) {
            if (func_020b49a8(func_020b4934()) == 0x3f && data_021eda64 == 0) {
                if (func_0203d56c()) {
                    r7 = TRUE;
                }
            }
        }
        mode = func_020a4c00();
        if (r7) {
            func_020a4760(0x28);
            func_020a4770(0);
            if (st != 0) {
                func_020a66f4(&m[0]);
                func_020a66d4(&m[0], 2, 4, func_020a4c18());
                Unk_020cbb18 *g2 = data_020cbb18;
                g2->func_020728d4();
                g2->func_020728a4(&m[0], 1);
                g2->func_02072824(0xc, 0);
                func_020a66f0(&m[0]);
            }
            func_020b78f4(mode);
            func_020a4bec(st, 2);
            g->func_02072204(func_02073168());
        } else {
            u32 n = func_020a4768() + 1;
            if (n >= 0xa0) {
                if (st == 0) {
                    func_020a4bec(0, 3);
                } else {
                    func_020a66f4(&m[1]);
                    func_020a66d4(&m[1], 3, 4, func_020a4c18());
                    Unk_020cbb18 *g2 = data_020cbb18;
                    g2->func_020728d4();
                    g2->func_020728a4(&m[1], 1);
                    g2->func_02072824(0xc, 0);
                    func_020a4bec(st, 6);
                    func_020a66f0(&m[1]);
                }
                func_0206e660();
                func_020a4770(0);
            } else {
                func_020a4770(n);
            }
            func_020b7914(mode);
        }
    }
    st2 = g->unk_64;
    v = func_020a4be0(st2);
    if (v == 2) {
        func_020b78f4(func_020a4c00());
    } else if (v == 4) {
        func_0203d544();
        func_0206e660();
        func_020b78dc();
        func_020a4760(0);
        if (st2 != 0) {
            func_020a66f4(&m[2]);
            func_020a66d4(&m[2], 6, 4, func_020a4c18());
            Unk_020cbb18 *g3 = data_020cbb18;
            g3->func_020728d4();
            g3->func_020728a4(&m[2], 1);
            g3->func_02072824(0xc, 0);
            func_020a66f0(&m[2]);
        }
        func_020a4bec(st2, 6);
    } else if (v == 5) {
        BOOL r7;
        s32 md = func_020a4c00();
        s32 sl;
        func_020b78f4(md);
        u8 u = data_021eda94.func_020a4758();
        if (u != 0) {
            data_021eda94.func_020a4760(u - 1);
        }
        r7 = FALSE;
        if (func_020a4758() != 0) {
            r7 = TRUE;
        }
        if (!r7) {
            if (md == 0) {
                sl = func_020a4c18();
                if (func_02097444(sl + 3) == 0) {
                    r7 = TRUE;
                    if (st2 == 0) {
                        u32 irq = func_020eaf28();
                        u16 mask = 1 << sl;
                        if (mask != (mask & irq)) {
                            u32 f = g->func_02072374();
                            if ((f & 4) == 0) {
                                g->func_02072380(f | 4);
                            }
                        }
                    }
                }
            } else if (md == 1) {
                func_020a4c58(func_020a4c18());
            }
        }
        if (r7) {
            return;
        }
        func_020a4750(func_020a4c00());
        func_020a0408(func_020a4c18());
        func_020b4a08(func_020b4934(), 0);
        if (func_020a4c00() == 0) {
            s32 x = func_020974a0(func_020a4c18() + 3);
            u16 *p;
            u8 *idb = (u8 *)&data_021d7352;
            if (x != 0 && _ZN12Unk_0209865c13func_020986a4Ev(x)->func_02087314() && (p = _ZN12Unk_0209865c13func_020986a4Ev(x)->func_02087364(), p[0] == *(u16 *)idb) &&
                func_02128930(p + 1, idb + 2, 8) == 0) {
                func_020b4f58(func_020b4934(), 0x2f, 2, 2);
            } else {
                static Unk_02000c8c s;
                func_020b4f18(func_020b4934(), 0xd, &s, 0x800000, 0, 2, 2);
            }
        } else {
            func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        }
        if (g->func_020729cc(0)) {
            if (md == 0) {
                func_020a0924();
            } else if (md == 1) {
                func_020a0900();
            }
        } else {
            if (md == 0) {
                func_020a0918();
            } else if (md == 1) {
                func_020a08f4();
            } else if (md == 2) {
                func_020a08dc();
                func_0209f230(0);
            } else {
                func_020a08dc();
                func_0209f230(1);
            }
        }
        if (st2 != 0) {
            func_020a66f4(&m[3]);
            func_020a66d4(&m[3], 6, 4, func_020a4c18());
            Unk_020cbb18 *g3 = data_020cbb18;
            g3->func_020728d4();
            g3->func_020728a4(&m[3], 1);
            g3->func_02072824(0xc, 0);
            func_020a66f0(&m[3]);
        }
        func_020a4bec(st2, 6);
    }
}

void Unk_020a4738::func_020a4770(s32 v) { unk_b8 = v; }

s32 Unk_020a4738::func_020a4768() { return unk_b8; }

void Unk_020a4738::func_020a4760(u8 v) { unk_bc = v; }

u8 Unk_020a4738::func_020a4758() { return unk_bc; }

void Unk_020a4738::func_020a4750(s32 v) { unk_c0 = v; }

s32 Unk_020a4738::func_020a4748() { return unk_c0; }

void Unk_020a4738::func_020a4740(u8 v) { unk_c4 = v; }

// End of file: small accessors (defined last so they are not inlined into callers)

u8 Unk_020a4738::func_020a4738() { return unk_c4; }

extern "C" Unk_020e2988 *func_020a46fc(void) {
    return new Unk_020e2988();
}

extern "C" void func_020a4698(void) {
    func_020535e0();
    func_02111110();
    func_021101f4(0x20);
    func_02110088(1);
    func_0210ff74(0x40);
    func_0210fcb8(6);
    func_0210fbc4(0x10);
    *(volatile u32 *)0x40004c8 = 0x20000000;
    *(volatile u32 *)0x40004cc = 0x7fff;
    *(volatile u32 *)0x40004c0 = 0x7fff;
    *(volatile u32 *)0x40004c4 = 0;
    func_02002918();
}

BOOL Unk_020e2988::vfunc_04() {
    if (!Unk_020d8c7c_Base::vfunc_04()) {
        return FALSE;
    }
    if (data_021eda64 != 0) {
        return TRUE;
    }
    func_020a4698();
    func_0208e968();
    data_021eda68 = this;
    data_021eda54 = 4;
    func_020a6470();
    func_020a5dac();
    data_021eda64++;
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        switch (func_020a5ec8()) {
        case 6:
            func_020a5ed8(7);
            break;
        case 0xd:
            func_020a5ed8(0xe);
            break;
        }
    }
    data_021eda50 = 0;
    data_021eda58 = 0;
    return TRUE;
}

void Unk_020e2988::vfunc_08(s32 a) {
    if (a == 2) {
        data_021eda64 = 0;
        if (*(u16 *)&unk_04[8] != 6) {
            func_02041104();
        }
        func_020739b8(0);
        func_020a5c30();
        func_02045c68();
        func_0203d4c0();
    }
    Unk_020d8c7c::vfunc_08(a);
}

BOOL Unk_020e2988::vfunc_10() {
    if (Unk_020d8c7c_Base::vfunc_10()) {
        return TRUE;
    }
    return FALSE;
}

// Group r275, class Unk_020e2988 overrides

BOOL Unk_020e2988::vfunc_14(s32 a) {
    if (a == 2) {
        data_020e2970 = 0;
        if (data_021d726c != 0) {
            func_0209caf4();
        }
        data_021eda68 = 0;
        func_02004074();
    }
    return Unk_020d8c7c_Base::vfunc_14(a);
}

BOOL Unk_020e2988::vfunc_1c() {
    func_020739b8(0);
    func_020a5c30();
    func_02045c68();
    if (Unk_020d8c7c_Base::vfunc_1c() == 0) {
        return FALSE;
    }
    if (data_021d726c != 0) {
        if (Unk_020a42c4_IsTwo(data_021c3cc0) != 0) {
            data_021eda60 = 2;
            data_021eda5c = 0;
            func_0204137c(2, 0x10);
        }
        return FALSE;
    }
    if (data_020e2974 != 0xd8) {
        if (Unk_020a42c4_IsTwo(data_021c3cc0) != 0 || data_021c3cb8 != 0) {
            func_0204137c(data_021eda60, 0xf);
        }
        return FALSE;
    }
    if (unk_04[0xf] & 1) {
        if (func_020eca8c(this) == 0) {
            unk_04[0xf] &= ~1;
            unk_04[0xf] &= ~4;
        } else {
            return FALSE;
        }
    }
    if (data_021eda54 != 0) {
        if (Unk_020a42c4_IsZero(data_021c3cc0) != 0) {
            data_021eda54 = data_021eda54 - 1;
            if (data_021eda54 == 0) {
                if (func_020412f0(data_021eda5c, 0xf, 0) == 0) {
                    data_021eda54 = 1;
                }
            }
        }
    }
    return TRUE;
}

BOOL Unk_020e2988::vfunc_20() { return Unk_020d8c7c_Base::vfunc_20(); }

BOOL Unk_020e2988::vfunc_28() {
    if (Unk_020d8c7c_Base::vfunc_28()) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e2988::vfunc_2c() { return Unk_020d8c7c_Base::vfunc_2c(); }

extern "C" void func_020a4414(u32 a, u32 b, u32 c, u32 d) {
    data_020e2974 = a;
    data_021eda60 = b;
    data_021eda5c = c;
}

extern "C" void func_020a43ec(void) {
    data_020e2974 = 1;
    data_021eda60 = 3;
    data_021eda5c = 3;
    data_020e2970 = 0;
}

extern "C" BOOL func_020a4394(void) {
    if (data_020e2970 != 0 || data_020e2974 == 0xd8) {
        return FALSE;
    }
    if (data_020e2974 == 2) {
        func_02115468(1);
    }
    s32 r = func_0202e880(data_020e2974, data_021d72e8, 0, 2);
    if (r != 0) {
        data_020e2974 = 0xd8;
        data_020e2970 = 1;
        return r;
    }
    return FALSE;
}

extern "C" void func_020a42c4(void *p) {
    if (data_021d726c != 0) {
        u8 m = data_021c3cc0;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (Unk_020a42c4_IsZero(m) != 0) {
                func_020a4414(0xd4, 0, 0, 0);
                func_020ed188(p);
                func_0203e358();
                func_0203eb38();
            }
        }
    } else if (data_020e2974 != 0xd8) {
        u8 m = data_021c3cc0;
        if (Unk_020a42c4_IsTwo(m) == 0) {
            if (data_021c3cb8 == 0) {
                if (Unk_020a42c4_IsZero(m) != 0) {
                    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64) != 0) {
                        switch (func_020a5ec8()) {
                        case 5:
                            func_020ed188(p);
                            func_020a5ed8(6);
                            break;
                        case 12:
                            func_020ed188(p);
                            func_020a5ed8(0xd);
                            break;
                        }
                    } else {
                        func_020ed188(p);
                    }
                }
            }
        }
    }
}

// ======== FUNCTIONS ========

void *data_021eda68;
u8 data_021eda60;
volatile u8 data_021eda54;
u8 data_021eda64;
u8 data_020e2970 = 1;
u8 data_021eda50;


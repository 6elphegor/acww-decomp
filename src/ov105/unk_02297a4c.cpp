#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
void *func_020ed174(void *p);
void func_020ed188(void *p);
void func_020020b8(u32 x);
void func_020021a0(u32 x);
void func_ov092_02291c5c();
void func_ov092_02291ce4(void *a, s32 b, s32 c);
BOOL func_0206ef00();
void func_0208d538(void *p, s32 v);
void func_0206ecf8(u32 v);
void *func_0209750c();
void *func_02097a04(void *p);
void *func_02096f88(void *p, s32 v);
void func_02065e70(void *dst, void *src);
}

class Unk_ov105_02298594;

class Unk_ov105_02065cd4 {
public:
    Unk_ov105_02065cd4();
    ~Unk_ov105_02065cd4();
    u32 unk_00[0xf4 / 4];
};

class Unk_ov105_020b85f8 {
public:
    Unk_ov105_020b85f8();
    u32 unk_00[0x38 / 4];
};

class Unk_ov105_02293a80 {
public:
    Unk_ov105_02293a80();
    void func_ov094_022937a0();
    void func_ov094_022932d0(s32 a, s32 b);
    void func_ov094_02293284(s32 a, s32 b, u32 c);
    u32 unk_00[0xa60 / 4];
};

class Unk_ov105_022946a8 {
public:
    Unk_ov105_022946a8();
    void func_ov094_02293d2c();
    void func_ov094_022941a0(s32 a, s32 b);
    void func_ov094_0229416c(u32 a, s32 b);
    u32 unk_00[0x28 / 4];
};

class Unk_ov105_02292d6c {
public:
    Unk_ov105_02292d6c();
    void func_ov094_0229277c(s32 a);
    u32 unk_00[0x15e0 / 4];
};

class Unk_ov105_02200800 {
public:
    Unk_ov105_02200800();
    virtual ~Unk_ov105_02200800();
    virtual void vfunc_08();
    u32 unk_04[(0xc0 - 4) / 4];
};

class Unk_ov105_022027d0 {
public:
    Unk_ov105_022027d0();
    u32 unk_00[0x18 / 4];
};

class Unk_ov105_02202658 {
public:
    Unk_ov105_02202658();
    virtual ~Unk_ov105_02202658();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_02202844();
    u32 unk_04[(0x64 - 4) / 4];
};

class Unk_ov105_022024a0 {
public:
    Unk_ov105_022024a0();
    u32 unk_00[0x300 / 4];
};

class Unk_ov105_02204400 {
public:
    Unk_ov105_02204400();
    u32 unk_00[0x108 / 4];
};

class Unk_ov105_0206d438 {
public:
    Unk_ov105_0206d438();
    u32 unk_00[0x210 / 4];
};

class Unk_ov105_02203e08 {
public:
    Unk_ov105_02203e08();
    virtual ~Unk_ov105_02203e08();
    virtual void vfunc_08();
    void func_0208e288(s32 a, s32 b);
    u32 unk_04[(0x70 - 4) / 4];
};

class Unk_ov105_02203994 {
public:
    Unk_ov105_02203994();
    void func_ov002_02203698();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
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
    s32 func_ov002_02200914();
    s32 func_ov002_02200920();
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

typedef void (Unk_ov105_02298594::*Unk_ov105_02298594_Fn)();

// Vtable 0x02298594
class Unk_ov105_02298594 : public Unk_ov002_022044e4 {
public:
    Unk_ov105_02298594()
        : unk_b4(), unk_1a8(), unk_2ac(), unk_2e4(), unk_d44(), unk_d6c(), unk_234c(), unk_240c(), unk_2424(), unk_2488(),
          unk_2788(), unk_2890(), unk_2aa0(), unk_2b10(), unk_728c() {}
    virtual ~Unk_ov105_02298594();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // out-of-range callees (declarations only)
    void func_ov105_02294dd8(u32 mask);
    void func_ov105_02294de8(u32 mask);
    BOOL func_ov105_02294df8(u32 mask);
    void func_ov105_02294e64();
    void func_ov105_02294f48();
    void func_ov105_02294f84();
    void func_ov105_02295014();
    void func_ov105_02295c34();
    void func_ov105_02295ca8();
    void func_ov105_02295f54();
    void func_ov105_022965cc();
    void func_ov105_0229745c();
    void func_ov105_02297488();
    void func_ov105_022974dc();
    void func_ov105_022974f0();
    void func_ov105_02297524();
    void func_ov105_0229755c();
    void func_ov105_0229759c();
    void func_ov105_022975a4();
    void func_ov105_022975c0();
    void func_ov105_0229760c();
    void func_ov105_02297834();
    void func_ov105_02297854();

    // state functions (table targets in other groups)
    void func_ov105_02296644();
    void func_ov105_02296678();
    void func_ov105_0229677c();
    void func_ov105_022967e8();
    void func_ov105_02296820();
    void func_ov105_0229688c();
    void func_ov105_022968f4();
    void func_ov105_0229692c();
    void func_ov105_0229694c();
    void func_ov105_0229699c();
    void func_ov105_022969d8();
    void func_ov105_02296a34();
    void func_ov105_02296a88();
    void func_ov105_02296ad0();
    void func_ov105_02296b28();
    void func_ov105_02296b58();
    void func_ov105_02296b88();
    void func_ov105_02296bc8();
    void func_ov105_02296c38();
    void func_ov105_02296c84();
    void func_ov105_02296ce8();
    void func_ov105_02296d78();
    void func_ov105_02296d98();
    void func_ov105_02296e2c();
    void func_ov105_02296f60();
    void func_ov105_022970f0();
    void func_ov105_022971ac();
    void func_ov105_022971e0();
    void func_ov105_02297274();
    void func_ov105_022972bc();
    void func_ov105_02297318();
    void func_ov105_022973c4();
    void func_ov105_022976f8();
    void func_ov105_02297724();
    void func_ov105_0229774c();
    void func_ov105_02297774();
    void func_ov105_02297794();
    void func_ov105_022977c0();
    void func_ov105_022977f0();
    void func_ov105_02297818();
    void func_ov105_022978a0();
    void func_ov105_022978a8();
    void func_ov105_022978ec();
    void func_ov105_02297914();
    void func_ov105_0229794c();
    void func_ov105_02297978();
    void func_ov105_022979b8();
    // in range
    void func_ov105_02297a4c();
    void func_ov105_02297ab8();
    void func_ov105_02297b20();
    void func_ov105_02297b5c();
    void func_ov105_02297bd8();
    void func_ov105_02297c0c();
    void func_ov105_02297c70();
    void func_ov105_02297d18();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94;
    /* 0x0098 */ s32 unk_98;
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ u32 unk_a0;
    /* 0x00a4 */ u8 unk_a4[8];
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ Unk_ov105_02065cd4 unk_b4;
    /* 0x01a8 */ Unk_ov105_02065cd4 unk_1a8;
    /* 0x029c */ u8 unk_29c;
    /* 0x029d */ u8 unk_29d[5];
    /* 0x02a2 */ u8 unk_2a2;
    /* 0x02a3 */ u8 unk_2a3[9];
    /* 0x02ac */ Unk_ov105_020b85f8 unk_2ac[1];
    /* 0x02e4 */ Unk_ov105_02293a80 unk_2e4;
    /* 0x0d44 */ Unk_ov105_022946a8 unk_d44;
    /* 0x0d6c */ Unk_ov105_02292d6c unk_d6c;
    /* 0x234c */ Unk_ov105_02200800 unk_234c;
    /* 0x240c */ Unk_ov105_022027d0 unk_240c;
    /* 0x2424 */ Unk_ov105_02202658 unk_2424;
    /* 0x2488 */ Unk_ov105_022024a0 unk_2488;
    /* 0x2788 */ Unk_ov105_02204400 unk_2788;
    /* 0x2890 */ Unk_ov105_0206d438 unk_2890;
    /* 0x2aa0 */ Unk_ov105_02203e08 unk_2aa0;
    /* 0x2b10 */ Unk_ov105_02065cd4 unk_2b10[0x4b];
    /* 0x728c */ Unk_ov105_02203994 unk_728c;
};

void Unk_ov105_02298594::func_ov105_02297a4c() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_ov105_02294dd8(2);
        if (func_ov105_02294df8(0x100)) {
            func_ov002_02200a50(7);
            func_ov105_022979b8();
        } else {
            func_ov105_02294dd8(1);
            func_ov002_02200a60(5);
        }
    } else {
        func_ov002_02200840(6, 0, -0x10);
        unk_98 = func_ov002_02200920();
    }
}

void Unk_ov105_02298594::func_ov105_02297ab8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(4);
        func_ov105_02294dd8(0x200);
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200a50(6);
        func_ov105_02297a4c();
        unk_728c.func_ov002_02203698();
    } else {
        func_ov105_02297834();
        unk_9c = -func_ov002_02200914();
    }
}

void Unk_ov105_02298594::func_ov105_02297b20() {
    func_ov105_02294e64();
    if (!func_ov105_02294df8(0x100)) {
        func_ov092_02291ce4(func_020ed174(this), 0x44, 1);
    }
    func_ov105_02294f48();
    func_ov002_02200a50(5);
}

void Unk_ov105_02298594::func_ov105_02297b5c() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov105_022965cc();
        func_ov105_02294dd8(0x40);
        if (unk_29c != 0) {
            if (func_0206ef00()) {
                u32 v = unk_2a2;
                if (v < 0x3e || v > 0x40) {
                    func_0208d538(&unk_2424, 4);
                }
                unk_2424.vfunc_0c();
                func_ov105_02295c34();
                func_ov002_02200a58(8);
            }
        }
    }
    func_ov105_02297834();
}

void Unk_ov105_02298594::func_ov105_02297bd8() {
    BOOL b = func_ov002_02200908(0);
    func_ov105_02297854();
    if (b) {
        func_ov105_02297488();
        func_ov105_02294f84();
        func_ov002_02200a50(3);
    }
}

void Unk_ov105_02298594::func_ov105_02297c0c() {
    func_ov105_0229745c();
    unk_2e4.func_ov094_022937a0();
    unk_d44.func_ov094_02293d2c();
    func_ov105_02295f54();
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200a50(2);
    func_ov105_02294de8(1);
    func_ov105_02294de8(2);
    func_ov105_02297854();
}

void Unk_ov105_02298594::func_ov105_02297c70() {
    func_ov105_022974f0();
    func_ov105_022974dc();
    func_ov002_02200a50(1);
}

BOOL Unk_ov105_02298594::vfunc_5c() {
    if (!func_ov105_02294df8(0x1000)) {
        func_0206ecf8(0);
    } else {
        func_0206ecf8(1);
        void *h = func_02097a04(func_0209750c());
        if (h != 0) {
            s32 i;
            Unk_ov105_02065cd4 *p = (Unk_ov105_02065cd4 *)func_02096f88(h, 0);
            for (i = 0; i < 0x4b; i++) {
                func_02065e70(p, &unk_2b10[i]);
                p++;
            }
        }
    }
    func_020ed188(this);
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_58() { return TRUE; }

BOOL Unk_ov105_02298594::vfunc_54() { return TRUE; }

BOOL Unk_ov105_02298594::vfunc_50() {
    func_ov105_022975a4();
    func_ov105_02297d18();
    func_ov105_0229759c();
    return TRUE;
}

void Unk_ov105_02298594::func_ov105_02297d18() {
    static Unk_ov105_02298594_Fn tbl[32] = {
        &Unk_ov105_02298594::func_ov105_022973c4,
        &Unk_ov105_02298594::func_ov105_02297318,
        &Unk_ov105_02298594::func_ov105_022972bc,
        &Unk_ov105_02298594::func_ov105_02297274,
        &Unk_ov105_02298594::func_ov105_022971e0,
        &Unk_ov105_02298594::func_ov105_022971ac,
        &Unk_ov105_02298594::func_ov105_022970f0,
        &Unk_ov105_02298594::func_ov105_02296f60,
        &Unk_ov105_02298594::func_ov105_02296e2c,
        &Unk_ov105_02298594::func_ov105_02296d98,
        &Unk_ov105_02298594::func_ov105_02296d78,
        &Unk_ov105_02298594::func_ov105_02296ce8,
        &Unk_ov105_02298594::func_ov105_02296c84,
        &Unk_ov105_02298594::func_ov105_02296c38,
        &Unk_ov105_02298594::func_ov105_02296bc8,
        &Unk_ov105_02298594::func_ov105_02296b88,
        &Unk_ov105_02298594::func_ov105_02296b58,
        &Unk_ov105_02298594::func_ov105_02296b28,
        &Unk_ov105_02298594::func_ov105_02296ad0,
        &Unk_ov105_02298594::func_ov105_02296a88,
        &Unk_ov105_02298594::func_ov105_02296a34,
        &Unk_ov105_02298594::func_ov105_022969d8,
        &Unk_ov105_02298594::func_ov105_0229699c,
        &Unk_ov105_02298594::func_ov105_0229694c,
        &Unk_ov105_02298594::func_ov105_0229692c,
        &Unk_ov105_02298594::func_ov105_022968f4,
        &Unk_ov105_02298594::func_ov105_0229688c,
        &Unk_ov105_02298594::func_ov105_02296820,
        &Unk_ov105_02298594::func_ov105_022967e8,
        &Unk_ov105_02298594::func_ov105_0229677c,
        &Unk_ov105_02298594::func_ov105_02296678,
        &Unk_ov105_02298594::func_ov105_02296644
    };
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov105_02298594::vfunc_4c() {
    static Unk_ov105_02298594_Fn tbl[22] = {
        &Unk_ov105_02298594::func_ov105_02297c70,
        &Unk_ov105_02298594::func_ov105_02297c0c,
        &Unk_ov105_02298594::func_ov105_02297bd8,
        &Unk_ov105_02298594::func_ov105_02297b5c,
        &Unk_ov105_02298594::func_ov105_02297b20,
        &Unk_ov105_02298594::func_ov105_02297ab8,
        &Unk_ov105_02298594::func_ov105_02297a4c,
        &Unk_ov105_02298594::func_ov105_022979b8,
        &Unk_ov105_02298594::func_ov105_02297978,
        &Unk_ov105_02298594::func_ov105_0229794c,
        &Unk_ov105_02298594::func_ov105_02297914,
        &Unk_ov105_02298594::func_ov105_022978ec,
        &Unk_ov105_02298594::func_ov105_022978a8,
        &Unk_ov105_02298594::func_ov105_022978a0,
        &Unk_ov105_02298594::func_ov105_02297818,
        &Unk_ov105_02298594::func_ov105_022977f0,
        &Unk_ov105_02298594::func_ov105_022977c0,
        &Unk_ov105_02298594::func_ov105_02297794,
        &Unk_ov105_02298594::func_ov105_02297774,
        &Unk_ov105_02298594::func_ov105_0229774c,
        &Unk_ov105_02298594::func_ov105_02297724,
        &Unk_ov105_02298594::func_ov105_022976f8
    };
    func_ov105_0229755c();
    (this->*tbl[unk_8c])();
    func_ov105_02297524();
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_24() {
    if (!func_ov105_02294df8(1)) {
        return TRUE;
    }
    unk_234c.vfunc_08();
    if (func_0206ef00()) {
        unk_2424.func_ov002_02202844();
    }
    func_ov105_02295ca8();
    if (func_ov105_02294df8(2)) {
        unk_728c.func_ov002_022036a4(unk_9c);
        if (!func_ov105_02294df8(0x200)) {
            unk_2e4.func_ov094_022932d0(0, unk_98 - 0x10);
        } else {
            u32 t = unk_a0;
            if (t != 0) {
                unk_2e4.func_ov094_02293284(0, unk_98 - 0x10, t + 0xc0);
            }
        }
        unk_d44.func_ov094_022941a0(0, unk_98 - 0x10);
        unk_d6c.func_ov094_0229277c(unk_98 - 0x10);
    }
    if (func_ov105_02294df8(0x200)) {
        unk_d44.func_ov094_0229416c(unk_a0, -0x10);
        func_ov105_02295014();
    }
    if (func_ov105_02294df8(0x80)) {
        unk_2aa0.func_0208e288(0, func_ov002_02200920());
        unk_2aa0.vfunc_08();
    }
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_0c() {
    func_020ed174(this);
    func_ov092_02291c5c();
    func_ov105_022975c0();
    return TRUE;
}

BOOL Unk_ov105_02298594::vfunc_00() {
    func_ov105_0229760c();
    func_ov002_02200a50(0);
    func_ov002_02200a60(0);
    return TRUE;
}

extern "C" Unk_ov105_02298594 *func_ov105_0229821c() { return new Unk_ov105_02298594(); }

Unk_ov105_02298594::~Unk_ov105_02298594() {}

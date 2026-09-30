#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern volatile u16 data_021f47d8[];
extern u8 data_021ef5f0;
extern u8 data_021ef5ec;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern void *data_021f482c;
extern u16 data_ov125_022983e8[];
extern u8 data_ov125_022983e0[];
void func_020ed188(void *p);
void func_ov125_02297d18();
void func_ov125_02297de8();
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void *func_0209750c();
void *func_020986d4();
void *func_02071c68(void *o, u32 i);
void *func_02071e58(void *o);
void *func_02071e04(void *o);
void *func_02072040(void *o);
void func_02001f74(void *a, void *b, u32 c, u32 d, u32 e);
void func_02002438(void *a, u32 b, u32 c, u32 d, u32 e);
void func_02002580(void *a, u32 b, u32 c, u32 d, u32 e);
void func_02115e48(void *a, void *b, u32 n);
void *func_020ed174(void *p);
void func_020021a0(u32 x);
void func_020020b8(u32 x);
void func_020015b8(u32 x);
void func_02002398(u32 a, u32 b);
void func_0200226c(u32 a, u32 b, u32 c, u32 d);
void func_02088730(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
void func_ov092_02291ce4(void *p, s32 a, s32 b);
void func_ov124_022968ec(void *p, s32 a);
void func_ov124_022968a8(void *p, s32 a, s32 b);
void func_ov124_02296840(void *p);
void func_ov124_02296d4c(void *p, s32 a, s32 b);
BOOL func_0206ef00();
s32 func_0206ed50();
void func_0206ecf8(u32 v);
}

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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    u32 func_ov002_022009c8();
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

// sub-object at +0x128 (0x300 bytes)
class Unk_ov125_128 {
public:
    BOOL func_ov002_022017b4();
    void func_ov002_02201aa0(s32 a, s32 b);
    BOOL func_ov002_022019d0(s32 a, void *b, s32 c);
    s32 func_ov002_022014c0(u32 a, u32 b);
    void func_ov002_02202144();
    void func_ov002_02201b58();
    void func_ov002_02201b04();
    void func_ov002_02202310(s32 a, s32 b, s32 c);
    u32 unk_00[0x300 / 4];
};

// sub-object at +0x428 (0xc0 bytes, vtable)
class Unk_ov125_428 {
public:
    Unk_ov125_428();
    virtual ~Unk_ov125_428();
    virtual void vfunc_08();
    BOOL func_ov002_0220071c();
    void func_ov002_022006c0();
    void func_ov002_022006e4(s32 a);
    void func_ov002_022006ac(s32 a);
    u32 unk_04[(0xc0 - 4) / 4];
};

// sub-object at +0x4e8 (0x64 bytes, vtable)
class Unk_ov125_4e8 {
public:
    Unk_ov125_4e8();
    virtual ~Unk_ov125_4e8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    BOOL func_0208d4fc();
    BOOL func_ov002_022028f0();
    void func_ov002_02202b68();
    void func_ov002_02202844();
    u32 unk_04[0x60 / 4];
};

// sub-object at +0x54c (0x164 bytes)
class Unk_ov125_54c {
public:
    void func_ov002_02203510(s32 a);
    void func_ov002_022030ac(s32 a);
    void func_ov002_02203900();
    void func_ov002_02203920();
    void func_ov002_022036a4(s32 a);
    u32 unk_00[0x164 / 4];
};

class Unk_ov125_02298478;
typedef void (Unk_ov125_02298478::*Unk_ov125_02298478_Fn)();

// Vtable 0x02298478, size 0x6bc (scene overlay on Unk_ov002_022044e4; ov124 library object embedded at +0x94)
class Unk_ov125_02298478 : public Unk_ov002_022044e4 {
public:
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // other groups
    void func_ov125_02297920();
    void func_ov125_02297940();
    void func_ov125_022978bc();
    void func_ov125_02297308();
    BOOL func_ov125_02297144(u32 v);
    void func_ov125_022976c4();
    void func_ov125_02297440();
    void func_ov125_022974b8();
    void func_ov125_022978a4();
    void func_ov125_02297650();
    void func_ov125_022975e4();
    void func_ov125_02297388();
    void func_ov125_022973ec();
    u8 func_ov125_02297644(u32 i);
    void func_ov125_02297878();
    void func_ov125_02297858();
    s32 func_ov125_02297784();
    void func_ov125_022976fc();
    void func_ov125_0229710c(u32 v);
    void func_ov125_0229711c(u32 v);
    BOOL func_ov125_0229712c(u32 v);
    s32 func_ov125_02297800(s32 i);
    s32 func_ov125_0229780c(s32 i);

    // in range
    void func_ov125_02297984();
    void func_ov125_022979c0();
    void func_ov125_022979f0();
    void func_ov125_02297a20();
    void func_ov125_02297a6c();
    void func_ov125_02297aec();
    void func_ov125_02297bd4();
    void func_ov125_02297c74();
    void func_ov125_02297cf4();
    void func_ov125_02297dd8();
    void func_ov125_02297e60();
    void func_ov125_02297e88();
    void func_ov125_02297e34();
    void func_ov125_02297e80();
    void func_ov125_02297ea4();
    void func_ov125_02297ed0();
    void func_ov125_02297f24();
    void func_ov125_02297f54();
    void func_ov125_02297f8c();
    void func_ov125_02297ffc();
    void func_ov125_02298024();
    void func_ov125_02298084();
    void func_ov125_022980d4();

    /* 0x0091 */ u8 unk_91[3];
    /* 0x0094 */ u32 unk_94[(0x128 - 0x94) / 4];
    /* 0x0128 */ Unk_ov125_128 unk_128;
    /* 0x0428 */ Unk_ov125_428 unk_428;
    /* 0x04e8 */ Unk_ov125_4e8 unk_4e8;
    /* 0x054c */ Unk_ov125_54c unk_54c;
    /* 0x06b0 */ s32 unk_6b0;
    /* 0x06b4 */ u16 unk_6b4;
    /* 0x06b6 */ u8 unk_6b6;
    /* 0x06b7 */ u8 unk_6b7;
    /* 0x06b8 */ u8 unk_6b8;
    /* 0x06b9 */ u8 unk_6b9;
    /* 0x06ba */ u8 unk_6ba;
    /* 0x06bb */ u8 unk_6bb;
};

static inline BOOL Unk_ov125_02297bd4_Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

#define C Unk_ov125_02298478


void C::func_ov125_02297984() {
    if (unk_128.func_ov002_022017b4()) {
        if (func_0206ef00()) {
            func_ov125_02297308();
            func_ov002_02200a58(3);
        } else {
            func_ov002_02200a58(1);
        }
    }
}

void C::func_ov125_022979c0() {
    if (unk_4e8.func_0208d4fc()) {
        unk_54c.func_ov002_022030ac(9);
        func_ov002_02200a58(10);
    }
}

void C::func_ov125_022979f0() {
    if (unk_4e8.func_ov002_022028f0() == 0) {
        func_ov002_02200a58(unk_6bb);
        func_ov125_022980d4();
    }
}

void C::func_ov125_02297a20() {
    if (unk_4e8.func_0208d4fc()) {
        unk_128.func_ov002_02201aa0(unk_6ba, 1);
        unk_6b9 = func_ov125_02297644(unk_6ba);
        func_ov002_02200a58(8);
    }
}

void C::func_ov125_02297a6c() {
    if (func_ov002_022009d4()) {
        func_ov125_022974b8();
        func_ov002_02200a58(1);
    } else {
        if (unk_128.func_ov002_022019d0(func_ov002_022009c8(), &unk_6ba, 0)) {
            func_ov125_022973ec();
        }
        u32 t = data_021f47d8[1];
        if (t & 1) {
            unk_4e8.func_ov002_02202b68();
            func_ov002_02200a58(4);
        } else if (t & 2) {
            func_ov125_02297388();
        }
    }
}

void C::func_ov125_02297aec() {
    if (func_ov002_022009d4()) {
        func_ov125_022978a4();
        unk_428.func_ov002_022006e4(1);
    } else {
        if (func_ov125_02297144(func_ov002_022009c8())) {
            func_ov125_022976c4();
            func_ov125_02297440();
            unk_428.func_ov002_022006e4(0);
        } else {
            u32 t = data_021f47d8[1];
            if (t & 1) {
                if (unk_6b8 == 8) {
                    unk_4e8.func_ov002_02202b68();
                    func_ov002_02200a58(6);
                } else {
                    unk_428.func_ov002_022006e4(1);
                    func_ov125_02297650();
                    unk_6b7 = unk_6b8;
                    func_ov125_022975e4();
                    func_ov125_022974b8();
                }
            } else if (t & 2) {
                func_ov125_022974b8();
                unk_54c.func_ov002_022030ac(9);
                func_ov002_02200a58(10);
                unk_428.func_ov002_022006e4(1);
            } else {
                unk_428.func_ov002_022006c0();
            }
        }
    }
}

void C::func_ov125_02297bd4() {
    if (func_ov002_02200a14(1)) {
        func_ov125_02297308();
        func_ov002_02200a58(3);
        unk_6b8 = unk_6b7;
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = unk_128.func_ov002_022014c0(data_021ef5f0, data_021ef5ec);
        if (r >= 0) {
            unk_128.func_ov002_02201aa0(r, 1);
            unk_6b9 = func_ov125_02297644(r);
            func_ov002_02200a58(8);
        }
    }
}

void C::func_ov125_02297c74() {
    if (func_ov002_02200a14(1)) {
        func_ov125_02297878();
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = func_ov125_02297784();
        if (r == 8) {
            unk_54c.func_ov002_022030ac(9);
            func_ov002_02200a58(10);
        } else if (r != 9) {
            func_ov125_02297650();
            unk_6b7 = r;
            func_ov125_022975e4();
        }
    }
}

void C::func_ov125_02297cf4() {
    func_ov125_02297d18();
    func_ov124_022968ec(unk_94, 4);
    unk_54c.func_ov002_02203920();
}

void C::func_ov125_02297dd8() {
    func_ov124_02296d4c(unk_94, 6, 4);
}

extern "C" void func_ov125_02297de8() {
    func_020015b8(0);
    func_02002398(6, 2);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 1);
    func_0200226c(3, 0, 0, 0);
}

void C::func_ov125_02297e80() {
    func_ov125_02297e34();
}

void C::func_ov125_02297e34() {
    unk_128.func_ov002_02201b58();
    if (unk_428.func_ov002_0220071c()) {
        func_ov125_022976fc();
    }
}

void C::func_ov125_02297e60() {
    unk_54c.func_ov002_02203900();
    func_ov124_02296840(unk_94);
}

void C::func_ov125_02297e88() {
    func_ov125_02297e60();
    Unk_ov125_4e8 *p = &unk_4e8;
    p->vfunc_0c();
}

void C::func_ov125_02297ea4() {
    unk_128.func_ov002_02201b04();
    func_ov124_02296840(unk_94);
    unk_54c.func_ov002_02203900();
}

void C::func_ov125_02297ed0() {
    unk_6b4 = 0;
    unk_128.func_ov002_02202310(3, 1, 0);
    unk_6b6 = 9;
    unk_6b7 = 9;
    u32 z = 0;
    unk_6b8 = z;
    func_0206ecf8(z);
    unk_428.func_ov002_022006ac(2);
}

void C::func_ov125_02297f24() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0);
    unk_6b0 = func_ov002_02200920();
}

void C::func_ov125_02297f54() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov125_0229710c(1);
        func_ov002_02200a60(5);
    } else {
        func_ov125_02297f24();
    }
}

void C::func_ov125_02297f8c() {
    func_ov125_022974b8();
    void *r4 = func_020ed174(this);
    s32 r6 = func_0206ed50();
    if (func_ov125_0229712c(0x10)) {
        func_ov092_02291ce4(r4, 0x44, 1);
    } else if (r6 == 4) {
        func_ov092_02291ce4(r4, 2, 1);
    } else {
        func_ov092_02291ce4(r4, 0x44, 1);
    }
    func_ov002_022008c4(0xa, 0, 0, 0x30);
    func_ov125_02297f24();
    func_ov002_02200a50(4);
}

void C::func_ov125_02297ffc() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov125_02297858();
    }
    func_ov125_02297f24();
}

void C::func_ov125_02298024() {
    unk_128.func_ov002_02202144();
    func_ov125_02297cf4();
    func_ov002_022008e0(0xa, 4, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_ov125_02297f24();
    unk_54c.func_ov002_02203510(0x65);
    func_ov125_0229711c(1);
    func_ov002_02200a50(2);
}

void C::func_ov125_02298084() {
    func_ov125_02297de8();
    func_ov125_02297dd8();
    func_ov002_02200a50(1);
}

BOOL C::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

BOOL C::vfunc_58() { return TRUE; }

BOOL C::vfunc_54() { return TRUE; }

BOOL C::vfunc_50() {
    func_ov125_02297e88();
    func_ov125_022980d4();
    func_ov125_02297e80();
    return TRUE;
}

void C::func_ov125_022980d4() {
    static Unk_ov125_02298478_Fn tbl[11] = {
        &C::func_ov125_02297c74,
        &C::func_ov125_02297bd4,
        &C::func_ov125_02297aec,
        &C::func_ov125_02297a6c,
        &C::func_ov125_02297a20,
        &C::func_ov125_022979f0,
        &C::func_ov125_022979c0,
        &C::func_ov125_02297984,
        &C::func_ov125_02297940,
        &C::func_ov125_02297920,
        &C::func_ov125_022978bc};
    (this->*tbl[unk_8d])();
}

BOOL C::vfunc_4c() {
    static Unk_ov125_02298478_Fn tbl[5] = {
        &C::func_ov125_02298084,
        &C::func_ov125_02298024,
        &C::func_ov125_02297ffc,
        &C::func_ov125_02297f8c,
        &C::func_ov125_02297f54};
    func_ov125_02297e60();
    (this->*tbl[unk_8c])();
    func_ov125_02297e34();
    return TRUE;
}

BOOL C::vfunc_24() {
    s32 r7 = unk_6b0;
    if (!func_ov125_0229712c(1)) {
        return FALSE;
    }
    Unk_ov125_428 *p = &unk_428;
    p->vfunc_08();
    if (func_0206ef00()) {
        unk_4e8.func_ov002_02202844();
    }
    unk_54c.func_ov002_022036a4(func_ov002_02200920());
    func_ov124_022968a8(unk_94, 0, r7);
    u8 i = 0;
    s32 j = 0;
    s32 z = 0;
    do {
        data_ov125_022983e8[2] = (data_ov125_022983e8[2] & 0xfffffc00) | ((u16)(j * 4 + 0xc0) & 0x3ff);
        s32 y = r7 + func_ov125_02297800(i);
        func_02088730(1, data_ov125_022983e8, func_ov125_0229780c(i), y, j + 5, 2, z);
        i++;
        j++;
    } while (j < 8);
    return TRUE;
}

extern "C" void func_ov125_02297d18() {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0x1000);
    func_0209750c();
    void *obj = func_020986d4();
    u8 i = 0;
    do {
        void *t = func_02071c68(obj, i);
        t = func_02071e58(t);
        func_02001f74(t, buf, i * 4, 4, 4);
        i++;
    } while (i < 8);
    func_02002438(buf, 8, 0xc0, 0xc0, 0x13f);
    func_020e85fc(heap, buf);
    void *buf2 = func_020e8618(heap, 0x100);
    s32 off = 0;
    u8 k = 0;
    do {
        void *t = func_02071c68(obj, k);
        t = func_02071e04(t);
        t = func_02072040(t);
        func_02115e48(t, (u8 *)buf2 + off * 2, 0x20);
        off += 0x10;
        k++;
    } while (k < 8);
    func_02002580(buf2, 8, 5, 5, 0xc);
    func_020e85fc(heap, buf2);
}

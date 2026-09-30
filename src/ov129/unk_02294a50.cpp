#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0206ed38();
void *func_020b053c(s32 i);
s32 func_0200402c(u32 a);
void func_0206ecf8(u32 a);
BOOL func_0206ef0c();
BOOL func_0208d4fc(void *p);
void func_0208d63c(void *p);
void func_0208d644(void *p);
void func_020b0a30(void *p);
void func_020b0450(void *p);
void func_020b04f8(void *p, s32 a, s32 b);
void func_020b05c4(void *p, s32 *a, s32 *b);
void func_02135558(void *obj, void (*dtor)(void *), void *dso);

void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202c40(void *p);
void func_ov002_02202ca0(void *p);
void func_ov002_02202be0(void *p);
void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
void func_ov002_02204394(void *p, void *q, u32 a, u32 b);
BOOL func_ov002_02204234(void *p, s32 a);
BOOL func_ov002_0220126c(s32 k);
BOOL func_ov002_0220125c(s32 k);
BOOL func_ov002_0220128c(s32 k);
BOOL func_ov002_0220127c(s32 k);
void func_ov127_022923c0(void *p, u32 a, u32 b);
void func_ov127_02292380(void *p, s32 x, s32 y);

extern u16 data_021f47d8[];
extern u8 data_ov129_02296498[];
extern u8 data_ov129_0229649c[];
extern u8 data_ov129_022964a4[];
extern u8 data_ov129_022964ac[];
extern u8 data_ov129_022964b4[];
extern u8 data_ov129_02296500[];
extern u8 data_ov129_02296508[];
}

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
    void func_ov002_02200850(s32 a);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    s32 func_ov002_02200914();
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);
    void func_ov002_02200a68();
    void func_ov002_02200980();
    s32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);

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

// static object type at data_ov129_02296698 (ctor func_020b0a70, dtor func_020b0a60)
class Unk_020b0a60 {
public:
    Unk_020b0a60();
    ~Unk_020b0a60();
    u8 unk_00[0x16];
    u8 unk_16[0x10];
    u16 unk_26[0x10];
};

// polymorphic sub-object at +0x324
class Unk_ov129_Sub324 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_ov129_022965f8 : public Unk_ov002_022044e4 {
public:
    void func_ov129_0229418c(u32 m);
    void func_ov129_0229419c(u32 m);
    BOOL func_ov129_022941ac(u32 m);
    u32 func_ov129_02294598(u32 a, u32 b);
    BOOL func_ov129_02294664(u32 a);
    BOOL func_ov129_0229470c(u32 a, u32 b);
    void func_ov129_022948a4(u32 a);
    void func_ov129_022948f0(u32 i);
    void func_ov129_02294914();
    void func_ov129_02294948();
    void func_ov129_022948d0();
    void func_ov129_02295d98();

    void func_ov129_02294a50();
    void func_ov129_02294aa4();
    void func_ov129_02294ad4();
    void func_ov129_02294afc();
    void func_ov129_02294b2c();
    void func_ov129_02294b90();
    void func_ov129_02294bb4();
    void func_ov129_02294c94();
    void func_ov129_02294cb8();
    void func_ov129_02294ce4();
    void func_ov129_02294d04();
    void func_ov129_02294d24(u32 a, u32 b);
    void func_ov129_02294d58();
    void func_ov129_02294db0();
    s32 func_ov129_02294dd4();
    s32 func_ov129_02294e24();
    void func_ov129_02294e74();
    BOOL func_ov129_02294edc();
    BOOL func_ov129_02294f04();
    BOOL func_ov129_02294f30(s32 k);
    void func_ov129_02294fcc(u32 v);
    void func_ov129_02295000();
    void func_ov129_02295040();
    void func_ov129_02295110();
    void func_ov129_02295154();
    void func_ov129_022951d8();
    void func_ov129_02295200();
    void func_ov129_0229522c();
    void func_ov129_02295248();
    void func_ov129_02295270();
    void func_ov129_022952a4();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u32 unk_9c;
    /* 0x0a0 */ u32 unk_a0;
    /* 0x0a4 */ u16 unk_a4;
    /* 0x0a6 */ u16 unk_a6;
    /* 0x0a8 */ u16 unk_a8;
    /* 0x0aa */ u16 unk_aa;
    /* 0x0ac */ u8 unk_ac;
    /* 0x0ad */ u8 unk_ad;
    /* 0x0ae */ u8 unk_ae;
    /* 0x0af */ u8 unk_af;
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1;
    /* 0x0b2 */ u8 unk_b2;
    /* 0x0b3 */ u8 unk_b3;
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5[3];
    /* 0x0b8 */ u8 unk_b8[0x1c0 - 0xb8];
    /* 0x1c0 */ u8 unk_1c0[0x324 - 0x1c0];
    /* 0x324 */ u8 unk_324[0x6b8 - 0x324];
    /* 0x6b8 */ u8 unk_6b8[0x2ef0 - 0x6b8];
    /* 0x2ef0 */ u8 unk_2ef0[0x10];
    /* 0x2f00 */ u16 unk_2f00[0x10];
    /* 0x2f20 */ u8 unk_2f20[0x1c6];
};

typedef Unk_ov129_022965f8 C;

void C::func_ov129_02294a50() {
    s32 n = func_0206ed38();
    s32 i = 0;
    do {
        if (i != n) {
            u16 *p = (u16 *)func_020b053c(i);
            if (p != NULL) {
                s32 j = 0;
                for (; j < 16; j++) {
                    u32 v = ((u16 *)((u8 *)p + 0x26))[j];
                    if (v != 0xffff) {
                        unk_2f20[v] = 1;
                    }
                }
            }
        }
        i++;
    } while (i < 16);
}

void C::func_ov129_02294aa4() {
    s32 i;
    u8 *p = unk_2f20;
    for (i = 0; i < 0x1c6; p++, i++) {
        if ((u8)(*p + 0xfe) <= 1) {
            *p = 0;
        }
    }
}

void C::func_ov129_02294ad4() {
    s32 i, z;
    i = 0;
    z = i;
    for (; i < 0x1c6; i++) {
        unk_2f20[i] = z;
    }
}

void C::func_ov129_02294afc() {
    if (unk_b4 != 0) {
        unk_b4 = *(volatile u8 *)&unk_b4 - 1;
        if (*(volatile u8 *)&unk_b4 == 0) {
            func_ov129_02294b90();
        }
    }
}

void C::func_ov129_02294b2c() {
    unk_b4 = 5;
    if (unk_aa != unk_a8) {
        func_ov129_02294b90();
    }
    if (unk_aa != 0xffff) {
        if ((u8)(unk_2f20[unk_aa] + 0xfe) <= 1) {
            func_ov127_022923c0(unk_6b8, unk_aa, 10);
        }
    }
    unk_a8 = unk_aa;
}

void C::func_ov129_02294b90() {
    if (unk_a8 != 0xffff) {
        func_ov129_022948f0(unk_a8);
        unk_a8 = 0xffff;
    }
}

void C::func_ov129_02294bb4() {
    u32 r4;
    if (func_ov129_0229470c(unk_94, unk_98)) {
        if (unk_b0 != 0xff && unk_b3 != 0xff && unk_b0 != unk_b3) {
            switch (unk_b1) {
            case 1:
            case 2: {
                u32 x = func_ov129_02294598(unk_b3, unk_b0);
                if (x != 0xffff && unk_2f20[x] == 3) {
                    unk_aa = x;
                    goto done;
                }
                if (unk_b1 == 2) {
                    if (func_ov129_02294664(unk_b0)) {
                        unk_aa = 0xffff;
                    }
                }
                break;
            }
            default:
                break;
            }
        }
    done:
        r4 = unk_aa;
    } else {
        r4 = 0xffff;
    }
    if (r4 != unk_a6) {
        func_ov129_02294c94();
    }
    if (r4 != 0xffff) {
        u32 t = unk_2f20[r4];
        if (t == 2) {
            func_ov127_022923c0(unk_6b8, r4, 0xb);
        } else if (t == 3) {
            func_ov127_022923c0(unk_6b8, r4, 8);
        }
    }
    unk_a6 = r4;
}

void C::func_ov129_02294c94() {
    if (unk_a6 != 0xffff) {
        func_ov129_022948f0(unk_a6);
        unk_a6 = 0xffff;
    }
}

void C::func_ov129_02294cb8() {
    func_ov002_02202af0(unk_324);
    unk_ac = unk_8d;
    func_ov002_02200a58(9);
}

void C::func_ov129_02294ce4() {
    func_ov002_02202b68(unk_324);
    func_ov002_02200a58(8);
}

void C::func_ov129_02294d04() {
    func_ov002_02202a78(unk_324);
    ((Unk_ov129_Sub324 *)unk_324)->vfunc_0c();
}

void C::func_ov129_02294d24(u32 a, u32 b) {
    func_ov002_022029e8(unk_324, a, b, 3, 1);
    unk_ac = unk_8d;
    func_ov002_02200a58(7);
}

void C::func_ov129_02294d58() {
    if (func_ov129_02294f04()) {
        func_ov002_02202c40(unk_324);
    } else if (func_ov129_02294edc()) {
        func_ov002_02202ca0(unk_324);
    } else {
        func_ov002_02202be0(unk_324);
    }
    s32 a = func_ov129_02294e24();
    s32 b = func_ov129_02294dd4();
    func_ov129_02294d24(a, b);
}

void C::func_ov129_02294db0() {
    func_ov002_02202d00(unk_324, 0);
    ((Unk_ov129_Sub324 *)unk_324)->vfunc_0c();
}

s32 C::func_ov129_02294dd4() {
    if (func_ov129_022941ac(2)) {
        return unk_98;
    }
    switch (unk_ae) {
    case 4:
        return func_ov002_022030b8(unk_1c0, 6);
    case 5:
        return func_ov002_022030b8(unk_1c0, 5);
    default:
        return data_ov129_02296508[unk_ae];
    }
}

s32 C::func_ov129_02294e24() {
    if (func_ov129_022941ac(2)) {
        return unk_94;
    }
    switch (unk_ae) {
    case 4:
        return func_ov002_022030f4(unk_1c0, 6);
    case 5:
        return func_ov002_022030f4(unk_1c0, 5);
    default:
        return data_ov129_02296500[unk_ae];
    }
}

void C::func_ov129_02294e74() {
    s32 a = func_ov129_02294e24();
    s32 b = func_ov129_02294dd4();
    func_ov002_02202a40(unk_324, a, b);
    if (func_ov129_02294f04()) {
        func_ov002_02202d00(unk_324, 1);
    } else if (func_ov129_02294edc()) {
        func_ov002_02202d00(unk_324, 7);
    } else {
        func_ov002_02202d00(unk_324, 0xd);
    }
    func_ov129_02294d04();
}

BOOL C::func_ov129_02294edc() {
    if (func_ov129_022941ac(2)) {
        return FALSE;
    }
    if (unk_ae == 4) {
        return TRUE;
    }
    return FALSE;
}

BOOL C::func_ov129_02294f04() {
    if (func_ov129_022941ac(2)) {
        return TRUE;
    }
    if ((u8)(unk_ae + 0xfd) <= 1) {
        return FALSE;
    }
    return TRUE;
}

BOOL C::func_ov129_02294f30(s32 k) {
    u8 old = unk_ae;
    if (func_ov002_0220126c(k)) {
        unk_ae = data_ov129_0229649c[unk_ae];
    } else if (func_ov002_0220125c(k)) {
        unk_ae = data_ov129_022964ac[unk_ae];
    } else if (func_ov002_0220128c(k)) {
        unk_ae = data_ov129_022964b4[unk_ae];
    } else if (func_ov002_0220127c(k)) {
        unk_ae = data_ov129_022964a4[unk_ae];
    }
    return old != unk_ae ? TRUE : FALSE;
}

void C::func_ov129_02294fcc(u32 v) {
    u8 buf[1];
    buf[0] = v;
    func_ov002_02204394(unk_b8, buf, 1, 0);
    func_ov002_02200a58(0xe);
    func_0208d63c(unk_324);
}

void C::func_ov129_02295000() {
    if (func_ov129_022941ac(4)) {
        func_0200402c(0x29);
    } else {
        func_0200402c(0x2a);
    }
    func_ov002_022030ac(unk_1c0, 4);
    func_ov002_02200a50(8);
    func_ov002_02200a58(0xa);
}

void C::func_ov129_02295040() {
    func_ov002_022030ac(unk_1c0, 3);
    func_ov002_02200a50(2);
    func_ov002_02200a58(0xa);
    if (func_ov129_022941ac(4)) {
        func_0206ecf8(0);
        func_0200402c(0x28);
    } else {
        func_0206ecf8(1);
        s32 n = func_0206ed38();
        static Unk_020b0a60 obj;
        func_020b0a30(&obj);
        func_020b0450(&obj);
        s32 i;
        for (i = 0; i < 16; i++) {
            obj.unk_26[i] = unk_2f00[i];
        }
        for (i = 0; i < 16; i++) {
            obj.unk_16[i] = unk_2ef0[i];
        }
        func_020b04f8(&obj, n, 0);
        func_0200402c(0x27);
    }
}

void C::func_ov129_02295110() {
    func_ov129_0229419c(4);
    func_ov002_022030ac(unk_1c0, 5);
    func_ov002_02200a50(4);
    func_ov002_02200a58(0xa);
    func_ov129_0229418c(0x10);
    func_0200402c(0x2a);
    func_ov129_0229418c(0x80);
}

void C::func_ov129_02295154() {
    s32 a, b;
    func_ov129_0229418c(4);
    func_ov002_022030ac(unk_1c0, 6);
    func_ov002_02200a50(4);
    func_ov002_02200a58(0xa);
    func_ov129_0229418c(0x10);
    func_ov129_022948a4(0);
    func_020b05c4(unk_2f00, &a, &b);
    a = a & 0xfffc;
    b = b & 0xfffc;
    func_ov127_02292380(unk_6b8, a, b);
    func_0200402c(0x87f);
    func_ov129_0229418c(0x80);
}

void C::func_ov129_022951d8() {
    func_ov129_0229419c(0x80);
    if (func_0206ef0c()) {
        func_ov129_0229522c();
    } else {
        func_ov129_02295200();
    }
}

void C::func_ov129_02295200() {
    func_ov129_0229419c(2);
    func_ov129_02294e74();
    func_ov002_02200980();
    func_ov129_02294bb4();
    func_ov002_02200a58(3);
}

void C::func_ov129_0229522c() {
    func_ov129_02294db0();
    func_ov129_02294c94();
    func_ov002_02200a58(0);
}

void C::func_ov129_02295248() {
    if (func_ov002_02204234(unk_b8, 0)) {
        func_ov129_022951d8();
        func_0208d644(unk_324);
    }
}

void C::func_ov129_02295270() {
    if (func_0208d4fc(unk_324)) {
        if (unk_af != 0) {
            func_ov129_02295000();
        } else {
            func_ov129_02295040();
        }
    }
}

void C::func_ov129_022952a4() {
    if (func_ov002_022009d4()) {
        func_ov129_02295d98();
        return;
    }
    u32 keys = data_021f47d8[1];
    if (keys & 1) {
        func_ov002_02202b68(unk_324);
        func_ov002_02200a58(0xd);
        return;
    }
    if (keys & 2) {
        func_ov129_02294db0();
        func_ov129_02295000();
        return;
    }
    if (keys & 8) {
        func_ov129_02294db0();
        func_ov129_02295040();
        return;
    }
    u8 old = unk_af;
    s32 k = func_ov002_022009c8();
    if (func_ov002_0220126c(k)) {
        if (unk_af != 0) {
            unk_af = *(volatile u8 *)&unk_af - 1;
        }
    } else if (func_ov002_0220125c(k)) {
        if (unk_af < 1) {
            unk_af = *(volatile u8 *)&unk_af + 1;
        }
    }
    if (old != unk_af) {
        if (unk_af != 0) {
            s32 a = func_ov002_022030f4(unk_1c0, 4);
            s32 b = func_ov002_022030b8(unk_1c0, 4);
            func_ov129_02294d24(a, b);
        } else {
            s32 a = func_ov002_022030f4(unk_1c0, 3);
            s32 b = func_ov002_022030b8(unk_1c0, 3);
            func_ov129_02294d24(a, b);
        }
    }
}

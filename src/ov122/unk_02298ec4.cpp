#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
extern u32 data_021f482c;
extern u8 data_ov122_0229a218[];
extern u8 data_ov122_0229a230[];
extern u8 data_ov122_0229a248[];
void func_0200212c(s32 a);
void func_020021fc(s32 a, s32 b, s32 c);
void func_020021a0(s32 a);
void func_020020b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020026c4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0200261c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020512e0(void *p, s32 n);
void *func_02065c8c(void *p);
void func_ov002_02202dd4(void *p, s32 a);
s32 func_0206ed68();
s32 func_020655d8(void *p);
BOOL func_0206ef0c();
void func_0208d9d4(void *p, s32 v);
BOOL func_ov095_02293ff0(void *p, void *q, s32 a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_ov095_02293cc0(void *p);
void func_ov095_022942c0(void *p);
void func_ov095_02294250(void *p, s32 a);
void func_ov095_02294358(void *p, s32 a);
void func_ov095_022943b4(void *p, s32 a);
void func_ov095_022943dc(void *p, void *q);
void func_ov095_0229442c(void *p);
void func_ov095_02294438(void *p);
void func_ov095_02294478(void *p, s32 a);
void func_ov095_02294624(void *p, s32 a);
void func_ov095_0229483c(void *p, s32 a);
void func_ov095_02295340(void *p, s32 a);
void func_ov095_022953c0(void *p, s32 a);
u32 func_ov095_02293da0(void *p);
}

// polymorphic sub-object at +0x3e8c (slot 0x0c called)
class Unk_ov122_sub_022046b0 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x44 / 4];
};

// polymorphic sub-object at +0x3ed4
class Unk_ov122_sub_02202640 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov122_sub_02065a1c {
public:
    void func_0206d380();
    void func_0206d394();
    void func_0206d39c(s32 a);
    void func_0206d3f4(s32 a);
    void func_0206d288(void *p);
    void func_0206d1d4(void *p, void *q);
    void func_0206d0fc(void *p, u32 b);
    void func_0206d0b8(void *p);
    void func_0206d0a0(s32 a, s32 b, s32 c);
    void func_0206d018(s32 a, s32 b, s32 c);
    void func_0206d000(s32 a, s32 b, s32 c);
    s32 func_0206d2d4();
    u32 unk_00[0x210 / 4];
};

class Unk_ov122_sub_02204558 {
public:
    void func_ov002_02201b04();
    void func_ov002_02201b58();
    void func_ov002_02202144();
    void func_ov002_02202310(s32 a, s32 b, s32 c);
    void func_ov002_022017c4();
    u32 unk_00[0x2f4 / 4];
};

class Unk_ov122_sub_022046cc {
public:
    void func_ov002_02203268();
    void func_ov002_02203458(s32 a);
    void func_ov002_022035d8();
    void func_ov002_02203608();
    void func_ov002_02203900();
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
    void func_ov002_022008c4(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008e0(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
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

// Vtable 0x0229a1b8
class Unk_ov122_0229a1b8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov122_0229a1b8();

    // out-of-range callees (declarations only)
    void func_ov122_02296968(u32 mask);
    void func_ov122_02296978(u32 mask);
    BOOL func_ov122_02296988(u32 mask);
    void func_ov122_02296a7c(u32 a);
    BOOL func_ov122_02296de4();
    void func_ov122_02296df4(s32 v);
    void func_ov122_02296e08(s32 v);
    u32 func_ov122_02296f68();
    u8 *func_ov122_02296f98();
    BOOL func_ov122_022972f4();
    u8 func_ov122_0229731c();
    void func_ov122_02297870();
    void func_ov122_02297940();
    void func_ov122_02297994();
    void func_ov122_022979e8();

    // in range
    void func_ov122_02298ec4();
    void func_ov122_02298fbc(u32 a, u32 b);
    void func_ov122_02299130();
    void func_ov122_02299150();
    void func_ov122_0229917c();
    void func_ov122_02299188();
    void func_ov122_02299268();
    void func_ov122_022992c4();
    void func_ov122_022992d4();
    void func_ov122_02299308();
    void func_ov122_02299334();
    void func_ov122_02299368();
    void func_ov122_02299408();
    void func_ov122_02299474();
    void func_ov122_022994c8();
    void func_ov122_022994f4();
    void func_ov122_02299534();
    void func_ov122_02299594();
    void func_ov122_022995c0();
    void func_ov122_022995d0();
    void func_ov122_02299614();
    void func_ov122_02299644();
    void func_ov122_02299694();
    void func_ov122_022996d8();
    void func_ov122_02299738();
    void func_ov122_02299774();
    void func_ov122_022997d0();

    /* 0x91 */ u8 unk_91[3];
    /* 0x94 */ s32 unk_94;
    /* 0x98 */ s32 unk_98;
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ u16 unk_a8;
    /* 0xaa */ u8 unk_aa;
    /* 0xab */ u8 unk_ab;
    /* 0xac */ u8 unk_ac;
    /* 0xad */ u8 unk_ad;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 unk_af;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb1 */ u8 unk_b1;
    /* 0xb2 */ u8 unk_b2;
    /* 0xb3 */ u8 unk_b3;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9[3];
    /* 0xbc */ u8 *unk_bc;
    /* 0xc0 */ u8 unk_c0[0x3c7c - 0xc0];
    /* 0x3c7c */ Unk_ov122_sub_02065a1c unk_3c7c;
    /* 0x3e8c */ Unk_ov122_sub_022046b0 unk_3e8c;
    /* 0x3ed4 */ Unk_ov122_sub_02202640 unk_3ed4;
    /* 0x3f38 */ u8 unk_3f38[0x4104 - 0x3f38];
    /* 0x4104 */ Unk_ov122_sub_02204558 unk_4104;
    /* 0x43f8 */ Unk_ov122_sub_022046cc unk_43f8;
    /* 0x455c */ u8 unk_455c[0x108];
};

extern "C" void func_ov122_02299220();

void Unk_ov122_0229a1b8::func_ov122_02298ec4() {
    if (unk_aa == 2) {
        u8 c = unk_ac;
        if (func_ov095_02293ff0(unk_c0, unk_bc + 0x4c, 0x86, &c, 0x80, 0x28, 4, 0x96, 1, 1)) {
            func_ov095_02295340(unk_c0, 0);
        } else {
            func_ov095_022953c0(unk_c0, 0);
        }
    } else {
        func_ov095_022953c0(unk_c0, 0);
    }
    if (func_ov122_022972f4()) {
        func_ov095_02295340(unk_c0, 0xb);
    } else {
        func_ov095_022953c0(unk_c0, 0xb);
    }
    if (func_ov122_02296988(0x400)) {
        func_ov095_02295340(unk_c0, 0xc);
    } else {
        func_ov095_022953c0(unk_c0, 0xc);
    }
    if (func_ov122_022972f4()) {
        func_ov095_022942c0(unk_c0);
        func_ov095_02295340(unk_c0, 6);
    } else if (unk_ac == 0) {
        func_ov095_022942c0(unk_c0);
    } else {
        func_ov095_02294250(unk_c0, func_ov122_0229731c());
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299130() {
    unk_43f8.func_ov002_02203458(0x22);
    unk_43f8.func_ov002_02203268();
}

void Unk_ov122_0229a1b8::func_ov122_02299150() {
    if (func_ov122_02296988(0x10)) {
        unk_43f8.func_ov002_022035d8();
    } else {
        unk_43f8.func_ov002_02203608();
    }
}

void Unk_ov122_0229a1b8::func_ov122_0229917c() { func_ov095_02293cc0(unk_c0); }

void Unk_ov122_0229a1b8::func_ov122_02299188() {
    u32 h = data_021f482c;
    func_020026c4(data_ov122_0229a218, h, 6, 1, 1, 9);
    func_ov095_022943dc(unk_c0, data_ov122_0229a230);
    func_ov122_02298ec4();
    func_ov095_022943b4(unk_c0, 6);
    func_0200261c(data_ov122_0229a248, h, 6, 0x13d, 0x13d, 0x1e9);
    func_ov002_02202dd4(func_02065c8c(unk_bc), 4);
    unk_3c7c.func_0206d3f4(3);
    func_ov122_02298fbc(1, 1);
    unk_3c7c.func_0206d380();
}

extern "C" void func_ov122_02299220() {
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 3);
    func_0200226c(4, 0, 0, 0);
    func_02002398(3, 3);
    func_0200226c(3, 0, 0, 0);
}

void Unk_ov122_0229a1b8::func_ov122_02299268() {
    if (func_ov122_02296988(0x1000)) {
        u32 n = func_ov122_02296f68();
        unk_a4 = func_020512e0(func_ov122_02296f98(), n) * 0x1f / (s32)n;
        if (unk_a4 > 0x1f) {
            unk_a4 = 0x1f;
        }
        func_ov122_02296968(0x1000);
    }
}

void Unk_ov122_0229a1b8::func_ov122_022992c4() { unk_43f8.func_ov002_02203900(); }

void Unk_ov122_0229a1b8::func_ov122_022992d4() {
    unk_3c7c.func_0206d380();
    func_ov095_02294358(unk_c0, 6);
    unk_4104.func_ov002_02201b58();
    func_ov122_02299268();
}

void Unk_ov122_0229a1b8::func_ov122_02299308() {
    func_ov122_022992c4();
    unk_3e8c.vfunc_0c();
    unk_3ed4.vfunc_0c();
}

void Unk_ov122_0229a1b8::func_ov122_02299334() {
    func_ov095_02294438(unk_c0);
    unk_3c7c.func_0206d394();
    unk_4104.func_ov002_02201b04();
    unk_43f8.func_ov002_02203900();
}

void Unk_ov122_0229a1b8::func_ov122_02299368() {
    unk_bc = (u8 *)func_0206ed68();
    func_ov095_02294478(unk_c0, 1);
    unk_3c7c.func_0206d39c(3);
    unk_3c7c.func_0206d288(unk_bc);
    func_ov122_02296e08(0x10);
    func_ov122_02296df4(0x10);
    unk_a8 = 0;
    func_0208d9d4(&unk_3e8c, 1);
    unk_4104.func_ov002_02202310(6, 1, 0);
    unk_4104.func_ov002_022017c4();
    unk_a4 = 0;
    if (func_020655d8(unk_bc)) {
        func_ov095_0229442c(unk_c0);
        func_ov122_02296978(0x10);
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299408() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_020021a0(3);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        unk_94 = func_ov002_02200920();
        unk_98 = unk_94;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299474() {
    if (func_ov122_02296de4() == 0) {
        func_ov002_022008c4(0xb, 0, 0, 0x30);
        func_ov002_02200840(6, 0, 0);
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        func_ov002_02200a50(0xe);
    }
}

void Unk_ov122_0229a1b8::func_ov122_022994c8() {
    unk_b7 = 0;
    unk_4104.func_ov002_02202144();
    func_ov122_02296a7c(1);
    func_ov002_02200a60(2);
}

void Unk_ov122_0229a1b8::func_ov122_022994f4() {
    if (func_ov002_02200908(0)) {
        func_ov122_02297870();
        func_ov002_02200a60(2);
        func_ov122_022979e8();
    }
    func_ov002_02200840(6, 0, 0);
    unk_94 = func_ov002_02200920();
}

void Unk_ov122_0229a1b8::func_ov122_02299534() {
    func_ov095_02294624(unk_c0, 6);
    func_02002398(6, 1);
    func_ov002_022008e0(8, 0, 0, 0x30);
    func_020020b8(6);
    func_ov002_02200840(6, 0, 0);
    func_ov122_02299150();
    func_ov122_02296978(1);
    unk_94 = func_ov002_02200920();
    unk_8c = 0xb;
}

void Unk_ov122_0229a1b8::func_ov122_02299594() {
    if (unk_98 < 0xa0) {
        unk_98 = unk_98 + 0x20;
    } else {
        func_ov122_02296968(2);
        unk_8c = 0xa;
    }
}

void Unk_ov122_0229a1b8::func_ov122_022995c0() {
    unk_98 = 0;
    unk_8c = 9;
}

void Unk_ov122_0229a1b8::func_ov122_022995d0() {
    if (unk_98 > 0x20) {
        unk_98 = unk_98 - 0x20;
    } else {
        unk_98 = 0;
        func_ov002_02200a60(2);
        if (func_0206ef0c()) {
            func_ov122_02297994();
        } else {
            func_ov122_02297940();
        }
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299614() {
    if (func_ov122_02296de4() == 0) {
        func_ov122_02299130();
        func_ov122_02296978(2);
        unk_98 = 0xc0;
        unk_8c = 7;
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299644() {
    if (func_ov002_022008fc(0)) {
        func_0200212c(6);
        func_020021fc(6, 0, 0);
        func_ov122_02296968(1);
        unk_8c = unk_b5;
    } else {
        func_ov002_02200840(6, 0, 0);
        unk_94 = func_ov002_02200920();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299694() {
    if (func_ov122_02296988(0x20) == 0) {
        func_ov002_022008c4(8, 0, 0, 0x30);
        func_ov002_02200840(6, 0, 0);
        unk_8c = 5;
    } else {
        func_ov122_02296df4(0);
    }
}

void Unk_ov122_0229a1b8::func_ov122_022996d8() {
    if (func_ov002_022008fc(0)) {
        func_0200212c(4);
        func_0200212c(3);
        func_020021fc(4, 0, 0);
        func_020021fc(3, 0, 0);
        func_ov002_02200a60(5);
    } else {
        func_ov002_02200840(4, 0, 0);
        func_ov002_02200840(3, 0, 0);
        unk_98 = func_ov002_02200920();
    }
}

void Unk_ov122_0229a1b8::func_ov122_02299738() {
    func_ov002_022008c4(3, 0, 0, 0x30);
    func_ov002_02200840(4, 0, 0);
    func_ov002_02200840(3, 0, 0);
    func_ov002_02200a50(3);
}

void Unk_ov122_0229a1b8::func_ov122_02299774() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov122_02297870();
        func_ov122_022979e8();
    }
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, -16);
    func_ov002_02200840(3, 0, -16);
    unk_94 = func_ov002_02200920();
}

void Unk_ov122_0229a1b8::func_ov122_022997d0() {
    func_ov122_02299220();
    func_ov122_02299188();
    func_ov095_0229483c(unk_c0, 6);
    func_ov095_02294358(unk_c0, 6);
    func_ov002_022008e0(0xb, 0, 0, 0x30);
    func_020020b8(6);
    func_020020b8(4);
    func_020020b8(3);
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, -16);
    func_ov002_02200840(3, 0, -16);
    func_ov122_0229917c();
    func_ov122_02299150();
    func_ov122_02296978(1);
    unk_94 = func_ov002_02200920();
    func_ov002_02200a50(1);
}

void Unk_ov122_0229a1b8::func_ov122_02298fbc(u32 a, u32 b) {
    u32 lo;
    u32 n;
    u32 flag;
    func_ov122_02296978(0x1000);
    if (a != 0) {
        unk_3c7c.func_0206d1d4(unk_bc, unk_3f38 + 0x124);
        unk_3c7c.func_0206d0fc(unk_bc + 0x4c, b);
        unk_3c7c.func_0206d0b8(unk_bc + 0xcc);
    } else {
        switch (unk_aa) {
        case 0:
        case 1:
            unk_3c7c.func_0206d1d4(unk_bc, unk_3f38 + 0x124);
            break;
        case 2:
            unk_3c7c.func_0206d0fc(unk_bc + 0x4c, b);
            break;
        case 3:
            unk_3c7c.func_0206d0b8(unk_bc + 0xcc);
            break;
        }
    }
    if (func_ov122_022972f4()) {
        flag = 0;
        u32 y = unk_ae;
        u32 x = unk_ad;
        if (x > y) {
            lo = y;
            n = x - y;
        } else {
            lo = x;
            n = y - x;
        }
    } else {
        flag = 1;
        n = func_ov095_02293da0(unk_c0);
        if (n != 0) {
            lo = unk_ac - n;
        }
    }
    if (n != 0) {
        switch (unk_aa) {
        case 0:
            unk_3c7c.func_0206d0a0(lo, n, flag);
            break;
        case 1:
            lo += unk_bc[0xec] + unk_3c7c.func_0206d2d4();
            unk_3c7c.func_0206d0a0(lo, n, flag);
            break;
        case 2:
            unk_3c7c.func_0206d018(lo, n, flag);
            break;
        case 3:
            unk_3c7c.func_0206d000(lo, n, flag);
            break;
        }
    }
    func_ov122_02298ec4();
}

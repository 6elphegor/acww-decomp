#include "types.h"

extern "C" {
s32 func_02035ea0(s32 a);
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
void func_02034d70(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034d84(u32 a);
void func_02034d5c(u32 a);
void func_02034d98(u32 a);
s32 func_020b50e8(void);
s32 func_020b4934(void);
s32 func_020b49a8(void);
s32 func_02035234(void);
s32 func_02035328(s32 a);
s32 func_020b5184(void);
s32 func_020b5164(void);
s32 func_02035d94(void);
s32 func_02036a98(s32 a);
s32 func_02036ab8(s32 o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02040c7c(void);
void func_0209d498(void *);
void func_02116048(void *, void *, u32);
s32 func_0203f2e0(u32, void *, u32);
extern u32 data_020cbb18;
s32 func_02072e44(u32 a);
s32 func_0209750c(void);
s32 func_020b0f0c(void);
s32 func_020b0f30(void);
s32 func_02098044(s32 a, s32 b);
s32 func_0209865c(s32 a);
s32 func_02099c1c(s32 a);
extern u16 data_020c8b28[];
extern u16 data_020c8b9c[];
}

struct Unk_020d8e34 {
    u32 unk_04;
    u8 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    virtual ~Unk_020d8e34();
    void func_02035da8();
    void func_02035dd8();
    void func_02035cd0();
    void func_02035e0c();
    void func_02035e2c(s32 a);
    void func_02035ed0(u32 a);
    void func_02035ed4();
    void func_02035f18();
    void func_02035f30();
    void func_02035f38();
    void func_02035f58();
    void func_02035f74();
    void func_02035f7c();
    Unk_020d8e34(u32 a);
};

struct Unk_020d8e04 {
    u8 pad_00[0x14];
    Unk_020d8e04();
    ~Unk_020d8e04();
    void func_02036984();
    void func_02036988();
    void func_020369ac();
    void func_020369c4();
    void func_020369e4();
    void func_02036a00();
    void func_02036a08();
};

struct Unk_020d8e64 {
    virtual ~Unk_020d8e64();
    Unk_020d8e64(u32 a);
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    void func_020366e0();
    void func_02036700(s32 a, u32 b, u32 c);
    void func_0203671c(u32 a);
    void func_02036720();
    void func_02036738();
    void func_020367e8();
    void func_020367fc();
    void func_02036800();
    void func_02036808();
};

struct Unk_020d8e24 {
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    virtual ~Unk_020d8e24();
    Unk_020d8e24(u32 a);
    void func_0203617c();
    void func_020361a8();
    void func_020361c4(u32 a);
    void func_020361e0();
    void func_02036200();
    void func_02036220();
    s32 func_02036220_call(); // alias of func_02036220 declared s32 so the caller emits bl instead of a tail branch
    void func_02036240();
    void func_02036260();
    void func_02036280(u32 a);
    void func_0203629c(u32 a);
    void func_020362b8(u32 a);
    void func_020362d4(u32 a);
    void func_020362f0(u32 a);
    s32 func_02036308(BOOL a);
    void func_02036330(BOOL a);
    void func_02036470(BOOL a);
    void func_02036528();
    void func_020365d8(u32 a);
    void func_020365dc();
    void func_02036614();
    void func_02036620();
    void func_02036654();
    void func_02036670();
    void func_02036678();
};

struct Unk_020d8e44 {
    Unk_020d8e04 unk_04;
    Unk_020d8e64 unk_18;
    Unk_020d8e24 unk_24;
    virtual ~Unk_020d8e44();
    Unk_020d8e44(u32 a);
    void func_02035fe0(u32 a);
    void func_0203600c();
    void func_0203603c();
    void func_0203606c();
    void func_0203608c();
    void func_020360ac();
    void func_020360cc();
};

extern "C" s32 func_02035e60(void) {
    s32 a = func_020b50e8();
    func_020b4934();
    s32 b = func_020b49a8();
    s32 x = func_02035ea0(a);
    s32 y = func_02035ea0(b);
    if (x == y && x != 0xffff) return TRUE;
    return FALSE;
}

extern "C" s32 func_02035ea0(s32 a) {
    u16 *e = data_020c8b9c;
    u32 r = 0xffff;
    u16 *p;
    for (p = data_020c8b28; p < e; p += 2) {
        if (((u8 *)p)[0] == a) { r = p[1]; break; }
    }
    return r;
}

void Unk_020d8e34::func_02035e2c(s32 a) {
    s32 r = func_02035ea0(a);
    u32 c = 0x7f, d = 0;
    if (r == 1) c = 0x38;
    if (r == 0x14 || r == 0x5c) d = 1;
    func_02034e10(0x11, r, c, d);
    unk_0a = r;
}

void Unk_020d8e34::func_02035ed0(u32 a) { unk_10 = a; }

void Unk_020d8e34::func_02035ed4() {
    if (unk_10 == 0) {
        BOOL r;
        if (unk_0d != 0 && func_02035328(func_02035234()) != 0) r = TRUE; else r = FALSE;
        func_02035e0c();
        unk_08 = 0x3f;
        func_02035da8();
        unk_0e = r;
    }
    unk_0f = 0;
}

void Unk_020d8e34::func_02035f18() {
    unk_0f = 1;
    func_02035dd8();
    func_02035cd0();
}

void Unk_020d8e34::func_02035f30() { unk_0e = 1; }

void Unk_020d8e34::func_02035f38() {
    func_02035e0c();
    unk_08 = 0x3f;
    func_02035da8();
    unk_10 = 0;
    unk_0f = 0;
}

void Unk_020d8e34::func_02035f58() {
    if (unk_0f != 0) {
        func_02035dd8();
        func_02035cd0();
    }
}

void Unk_020d8e34::func_02035f74() { func_02035f38(); }

void Unk_020d8e34::func_02035f7c() {
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

Unk_020d8e34::~Unk_020d8e34() {}

Unk_020d8e34::Unk_020d8e34(u32 a) {
    unk_04 = a;
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

void Unk_020d8e44::func_02035fe0(u32 a) {
    unk_04.func_02036984();
    unk_18.func_0203671c(a);
    unk_24.func_020365d8(a);
}

void Unk_020d8e44::func_0203600c() {
    if (func_020b5184() != 0 || func_020b5164() != 0) {
        unk_24.func_020365dc();
        unk_18.func_02036720();
        unk_04.func_02036988();
    }
}

void Unk_020d8e44::func_0203603c() {
    if (func_020b5184() != 0 || func_020b5164() != 0) {
        unk_04.func_020369ac();
        unk_18.func_02036738();
        unk_24.func_02036614();
    }
}

void Unk_020d8e44::func_0203606c() {
    unk_04.func_020369c4();
    unk_18.func_020367e8();
    unk_24.func_02036620();
}

void Unk_020d8e44::func_0203608c() {
    unk_04.func_020369e4();
    unk_18.func_020367fc();
    unk_24.func_02036654();
}

void Unk_020d8e44::func_020360ac() {
    unk_24.func_02036670();
    unk_18.func_02036800();
    unk_04.func_02036a00();
}

void Unk_020d8e44::func_020360cc() {
    unk_04.func_02036a08();
    unk_18.func_02036808();
    unk_24.func_02036678();
}

Unk_020d8e44::~Unk_020d8e44() {}

Unk_020d8e44::Unk_020d8e44(u32 a) : unk_04(), unk_18(a), unk_24(a) {}

void Unk_020d8e24::func_0203617c() {
    u8 *p = &unk_13;
    s32 r = func_02036a98(func_02035d94());
    if ((unk_13 | r) != 0) r = 1; else r = 0;
    *p = r;
}

void Unk_020d8e24::func_020361a8() {
    if (unk_12 != 0) {
        func_02034d70(0x1e);
        unk_12 = 0;
    }
}

void Unk_020d8e24::func_020361c4(u32 a) {
    if (unk_12 == 0) {
        func_02034dd0(0x1e, a, 0);
        unk_12 = 1;
    }
}

void Unk_020d8e24::func_020361e0() {
    if (unk_10 != 0xffff) { func_02034d84(unk_10); unk_10 = 0xffff; }
}
void Unk_020d8e24::func_02036200() {
    if (unk_0e != 0xffff) { func_02034d84(unk_0e); unk_0e = 0xffff; }
}
void Unk_020d8e24::func_02036220() {
    if (unk_0c != 0xffff) { func_02034d84(unk_0c); unk_0c = 0xffff; }
}
void Unk_020d8e24::func_02036240() {
    if (unk_0a != 0xffff) { func_02034d84(unk_0a); unk_0a = 0xffff; }
}
void Unk_020d8e24::func_02036260() {
    if (unk_08 != 0xffff) { func_02034d5c(unk_08); unk_08 = 0xffff; }
}

void Unk_020d8e24::func_02036280(u32 a) { func_02034e10(0x23, a, 0x7f, 0); unk_10 = a; }
void Unk_020d8e24::func_0203629c(u32 a) { func_02034e10(0x22, a, 0x7f, 0); unk_0e = a; }
void Unk_020d8e24::func_020362b8(u32 a) { func_02034e10(0x21, a, 0x7f, 0); unk_0c = a; }
void Unk_020d8e24::func_020362d4(u32 a) { func_02034e10(0x20, a, 0x7f, 0); unk_0a = a; }
void Unk_020d8e24::func_020362f0(u32 a) { func_02034d98(0x1f); unk_08 = a; }

s32 Unk_020d8e24::func_02036308(BOOL a) {
    if (a != 0) {
        if (unk_10 != 0x30) {
            func_020361e0();
            func_02036280(0x30);
        }
    } else {
        func_020361e0();
    }
}

void Unk_020d8e24::func_02036330(BOOL a) {
    if (a != 0) {
        s32 o = func_02035d94();
        u32 c = 0xffff;
        s32 r0 = func_02036ab8(o, 0x17, 0, 0, 0x17, 0x1e, 0);
        s32 r1 = func_02036ab8(o, 0x17, 0x1e, 0, 0x17, 0x32, 0);
        s32 r2 = func_02036ab8(o, 0x17, 0x32, 0, 0x17, 0x37, 0);
        s32 r3 = func_02036ab8(o, 0x17, 0x37, 0, 0, 0, 0);
        if (r0 != 0) c = 0x31;
        else if (r1 != 0) c = 0x32;
        else if (r2 != 0) c = 0x33;
        else if (r3 != 0) c = 0x34;
        if (c != 0xffff) {
            if (unk_0e != c) {
                func_02036200();
                func_0203629c(c);
            }
        } else {
            func_02036200();
        }
        s32 q0 = func_02036ab8(o, 0x17, 0x1d, 0x32, 0x17, 0x1e, 0);
        s32 q1 = func_02036ab8(o, 0x17, 0x31, 0x32, 0x17, 0x32, 0);
        s32 q2 = func_02036ab8(o, 0x17, 0x36, 0x32, 0x17, 0x37, 0);
        s32 q3 = func_02036ab8(o, 0x17, 0x3a, 0x32, 0, 0, 0);
        if (q0 != 0 || q1 != 0 || q2 != 0 || q3 != 0) {
            func_020361c4(200);
        } else {
            func_020361a8();
        }
    } else {
        func_02036200();
        func_020361a8();
    }
}

void Unk_020d8e24::func_02036470(BOOL a) {
    if (a != 0) {
        s32 o = func_02035d94();
        s32 r0 = func_02036ab8(o, 0, 0, 0, 2, 0, 0);
        s32 r1 = func_02036ab8(o, 2, 0, 0, 0, 0, 0);
        if (r0 != 0) {
            if (unk_13 != 0) {
                if (unk_08 != 0x35) {
                    func_02036260();
                    func_020362f0(0x35);
                }
                unk_13 = 0;
            }
            if (unk_0a != 0x36) {
                func_02036240();
                func_020362d4(0x36);
            }
        } else {
            func_02036260();
            func_02036240();
        }
        if (r1 != 0) {
            if (unk_0c != 0x37) {
                func_02036220();
                func_020362b8(0x37);
            }
        } else {
            func_02036220();
        }
    } else {
        func_02036260();
        func_02036240();
        func_02036220_call();
    }
}

void Unk_020d8e24::func_02036528() {
    s32 r5 = func_02040c7c();
    u32 t[2];
    u32 b0[2], b1[2], b2[2];
    BOOL r6, r7;
    t[0] = 0;
    t[1] = 0;
    func_0209d498(t);
    func_02116048(t, b0, 8);
    if (func_0203f2e0(0x13, b0, 0) != 0) r6 = TRUE; else r6 = FALSE;
    r7 = TRUE;
    if (r5 != 0x12) {
        func_02116048(t, b1, 8);
        if (func_0203f2e0(0x12, b1, 0) != 3) r7 = FALSE;
    }
    if (func_02072e44(data_020cbb18) != 0) {
        func_02116048(t, b2, 8);
        r5 = func_0203f2e0(0xf, b2, 0);
    } else if (r5 == 0xf) {
        r5 = 1;
    } else {
        r5 = 0;
    }
    func_02036470(r6);
    func_02036330(r7);
    BOOL v;
    if (r5 != 0) v = TRUE; else v = FALSE;
    func_02036308(v);
}

void Unk_020d8e24::func_020365d8(u32 a) { unk_14 = a; }

void Unk_020d8e24::func_020365dc() {
    if (unk_14 == 0) {
        func_02036260();
        func_02036240();
        func_02036220();
        func_02036200();
        func_020361e0();
        func_020361a8();
    }
    unk_15 = 0;
}

void Unk_020d8e24::func_02036614() {
    unk_15 = 1;
    func_02036528();
}

void Unk_020d8e24::func_02036620() {
    func_02036260();
    func_02036240();
    func_02036220();
    func_02036200();
    func_020361e0();
    func_020361a8();
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void Unk_020d8e24::func_02036654() {
    if (unk_15 != 0) {
        func_0203617c();
        func_02036528();
    }
}

void Unk_020d8e24::func_02036670() { func_02036620(); }

void Unk_020d8e24::func_02036678() {
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

Unk_020d8e24::~Unk_020d8e24() {}

Unk_020d8e24::Unk_020d8e24(u32 a) {
    unk_04 = a;
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void Unk_020d8e64::func_020366e0() {
    if (unk_08 != 0xffff) { func_02034d84(unk_08); unk_08 = 0xffff; }
}

void Unk_020d8e64::func_02036700(s32 a, u32 b, u32 c) {
    func_02034e10(a, b, 0x7f, c);
    unk_08 = b;
}

void Unk_020d8e64::func_0203671c(u32 a) { unk_0a = a; }

void Unk_020d8e64::func_02036720() {
    if (unk_0a == 0) func_020366e0();
    unk_0b = 0;
}

void Unk_020d8e64::func_02036738() {
    unk_0b = 1;
    if (unk_08 == 0xffff) {
        s32 r5 = func_0209750c();
        if (func_020b0f0c() != 0) {
            func_02034dd0(3, 0, 5);
            func_02036700(4, 0x45, 1);
        } else if (func_020b0f30() != 0) {
            func_02036700(0xd, 0x4a, 0);
        } else if (r5 != 0 && (func_02098044(r5, 0x23) != 0 || (func_02098044(r5, 1) != 0 && func_02099c1c(func_0209865c(r5)) == 0))) {
            func_02036700(0x1c, 0x46, 0);
        } else if (r5 != 0 && func_02098044(r5, 1) != 0) {
            func_02036700(0x1d, 0x48, 0);
        }
    }
}

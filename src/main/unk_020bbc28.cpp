#include "types.h"

struct Unk_020cbb18 {
    char pad_00[0x64];
    s32 unk_64;
};

struct Unk_021f1448 {
    char pad_00[0x24];
    s32 unk_24;
    s32 unk_28;
};

struct Unk_021ed2b0 {
    char pad_00[0xa];
    u8 unk_0a;
};

struct Unk_020d0f40 {
    s32 unk_00;
    s32 unk_04;
};

struct Unk_020bbcc8_Xxx {
    u32 a, b;
};

struct Unk_020bbc28;
typedef void (Unk_020bbc28::*Unk_020bbeb8_Fn)();

struct Unk_020bbc28 {
    char pad_0000[0xe0c];
    s32 unk_0e0c;
    char pad_0e10[0x1464 - 0xe10];
    s32 unk_1464;
    char pad_1468[0x2eb8 - 0x1468];
    char unk_2eb8[0x48];
    s32 unk_2f00;
    s32 unk_2f04;
    s32 unk_2f08;
    s32 unk_2f0c;
    char pad_2f10[8];
    u8 unk_2f18;
    u8 unk_2f19;
    u8 unk_2f1a;
    u8 unk_2f1b;
    s32 unk_2f1c;
    s32 unk_2f20;
    u8 unk_2f24;
    u8 unk_2f25;
    u8 unk_2f26;
    u8 unk_2f27;
    s32 unk_2f28;
    s32 unk_2f2c;
    s32 unk_2f30;
    s32 unk_2f34;
    s32 unk_2f38;
    s32 unk_2f3c;
    s32 unk_2f40;
    s32 unk_2f44;
    s32 unk_2f48;
    s32 unk_2f4c;
    s32 unk_2f50;
    char unk_2f54[8];

    void func_020bbc28();
    void func_020bbcc8();
    void func_020bbdd4();
    void func_020bbeb8();
    void func_020bc18c();
    void func_020bc1d4();
    void func_020bc2a8();
    void func_020bc43c();
    void func_020bc754(s32 a, s32 b, s32 c, s32 d);
    void func_020bc718(s32 a);
    void func_020bb4c8(s32 a);
    s32 func_020bcbd8(s32 a);
    void func_020bc5cc();
    void func_020bb490();
    void func_020bb458();
    void func_020bb420();
    void func_020bb3e8();
    void func_020bb3b0();
    void func_020bb374();
    void func_020bb33c();
    void func_020bb304();
    void func_020bb2cc();
    void func_020bb294();
    void func_020bb25c();
    void func_020bb224();
    void func_020bb1f8();
    void func_020bb1c4();
    void func_020bb190();
    void func_020bb15c();
    void func_020bb128();
    void func_020bb0fc();
    void func_020bb0c8();
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
BOOL func_020816f8(s32);
BOOL func_0201b84c();
BOOL func_02072e88(Unk_020cbb18 *, s32);
s32 func_020b8fe8();
void func_020850e0();
void func_02085174();
s32 func_02086e84();
void func_02085170();
s32 func_02086b94();
s32 func_0209e170(void *, s32);
extern char data_021d7350[];
extern Unk_020d0f40 data_020d0f40[];
extern Unk_020d0f40 data_020d0f60[];
extern Unk_021f1448 data_021f1448;
extern Unk_021ed2b0 data_021ed2b0;
void func_0209d498(void *);
void func_02116048(void *, void *, u32);
s32 func_0203f2e0(s32, void *, s32);
s32 func_02063b8c(s32);
s32 func_02040c7c();
BOOL func_020b5164();
BOOL func_02072e44(Unk_020cbb18 *);
s32 func_020b50e8();
void func_020e759c(void *, s32, s32);
void *func_0209750c();
BOOL func_02098044(void *, s32);
BOOL func_020bd4e0();
void func_020bd7e4(void *);
u32 func_0213335c(u32, u32);
}

void Unk_020bbc28::func_020bbc28() {
    if (unk_2f27 != 0) {
        if (func_020816f8(8)) {
            if (func_0201b84c()) {
                unk_2f27 = 0;
            }
        }
    }
    if (unk_2f27 != 0) {
        if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            s32 r = func_020b8fe8();
            if (r != 1 && r != 2) {
                if (unk_2f19 != unk_2f1b) {
                    if (unk_2f19 == 9 || unk_2f19 == 0x11) {
                        func_020850e0();
                        func_02085174();
                        if (!func_02086e84()) {
                            if (unk_1464 != 7) {
                                func_020bc754(7, 0x2d, 0, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}

void Unk_020bbc28::func_020bbcc8() {
    if (unk_2f26 != 0) {
        if (func_0209e170(data_021d7350, 9)) {
            unk_2f26 = 0;
        } else {
            Unk_020bbcc8_Xxx s;
            Unk_020bbcc8_Xxx t;
            s.a = 0;
            s.b = 0;
            BOOL b;
            func_0209d498(&s);
            func_02116048(&s, &t, 8);
            if (func_0203f2e0(0x44, &t, 0) == 0) {
                b = TRUE;
            } else {
                b = FALSE;
            }
            if (b) {
                unk_2f26 = 0;
            }
        }
    }
    if (unk_2f26 != 0) {
        if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
            u8 v = unk_2f18;
            u32 m = v % 10;
            if (unk_2f1a != v) {
                if (m == 2 || m == 7) {
                    func_020850e0();
                    func_02085170();
                    if (!func_02086b94()) {
                        if (unk_1464 != 6) {
                            if (unk_2f25 == 0) {
                                unk_2f25 = func_02063b8c(8) + 1;
                            }
                            u8 c = unk_2f25;
                            if (func_02063b8c(8) < c) {
                                func_020bc754(6, 0x2d, 0, 0);
                                unk_2f25 = 1;
                            } else if (c < 8) {
                                unk_2f25++;
                            }
                        }
                    }
                }
            }
        }
    }
}

void Unk_020bbc28::func_020bbdd4() {
    if (!func_02072e88(data_020cbb18, data_020cbb18->unk_64)) {
        u8 v = unk_2f19;
        if (v >= 0xa && v < 0x10) {
            if (unk_2f1a != unk_2f18) {
                if (unk_2f18 % 10 == 4) {
                    if (unk_1464 != 5) {
                        if (unk_2f24 == 0) {
                            unk_2f24 = func_02063b8c(8) + 1;
                        }
                        u8 c = unk_2f24;
                        if (func_02063b8c(8) < c) {
                            if (!func_02098044(func_0209750c(), 0x30) && func_020bd4e0() && !func_02063b8c(4)) {
                                func_020bc754(5, 0x2d, 0, 1);
                            } else {
                                func_020bc754(5, 0x2d, 0, 0);
                                func_020bd7e4(unk_2eb8);
                            }
                            unk_2f24 = 1;
                        } else if (c < 8) {
                            unk_2f24++;
                        }
                    }
                }
            }
        }
    }
}

void Unk_020bbc28::func_020bc18c() {
    u8 v = unk_2f19;
    BOOL b;
    if (unk_0e0c == 4) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (v >= 0x13 || v < 4) {
        if (!b) {
            func_020bc754(4, 0x1f, 0, 0);
        }
    } else if (b) {
        func_020bc718(4);
    }
}

void Unk_020bbc28::func_020bc1d4() {
    u8 v = unk_2f19;
    BOOL a = TRUE;
    if (v < 0x13 && v >= 4) {
        a = FALSE;
    }
    s32 x = data_021f1448.unk_24;
    BOOL c = FALSE;
    if (x != 3 && x != 4) {
        c = TRUE;
    }
    BOOL d = FALSE;
    if (unk_2f2c == 0 && func_020bcbd8(9) == 0x3c) {
        d = TRUE;
    }
    if (a && c && d) {
        if (unk_2f4c > 0) {
            unk_2f4c--;
            if (unk_2f4c == 0) {
                func_020bc754(3, 0x1e, 0, 0);
            }
        } else if (unk_2f1c == 0x1e && unk_2f1c != unk_2f20) {
            if (!func_02063b8c(data_021ed2b0.unk_0a == 0 ? 4 : 0x100)) {
                unk_2f4c = func_02063b8c(0x258);
            }
        }
    } else {
        unk_2f4c = 0;
    }
}

void Unk_020bbc28::func_020bc2a8() {
    s32 kind = 0;
    s32 a = data_021f1448.unk_24;
    s32 b = data_021f1448.unk_28;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        unk_2f00 = 0;
        unk_2f0c = 0;
    } else {
        Unk_020d0f40 *t = &data_020d0f60[kind - 1];
        if (unk_2f00 == 0) {
            unk_2f00 = 0x3e8;
        }
        if (unk_2f0c > 2) {
            if (b >= 3) {
                unk_2f08 += 2;
                if (unk_2f08 > 0x6400) {
                    unk_2f08 = 0x6400;
                }
            } else {
                unk_2f08 -= 2;
                if (unk_2f08 < 0) {
                    unk_2f08 = 0;
                }
            }
        } else {
            if (b >= 3) {
                unk_2f08 = 0x6400;
            } else {
                unk_2f08 -= 2;
                if (unk_2f08 < 0) {
                    unk_2f08 = 0;
                }
            }
        }
        unk_2f04 += unk_2f08 >> 8;
        while (unk_2f04 >= unk_2f00) {
            func_020bc754(1, 0x3c, 0, 0);
            unk_2f04 -= unk_2f00;
            if (unk_2f04 <= unk_2f00) {
                switch (unk_2f0c) {
                case 0:
                    unk_2f00 = 0x2af8;
                    unk_2f04 = 0;
                    break;
                case 1:
                    unk_2f00 = 0x2328;
                    unk_2f04 = 0;
                    break;
                default:
                    unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
                    if (unk_2f0c < 0x32) {
                        unk_2f04 = 0x4b;
                    } else {
                        unk_2f04 = 0;
                    }
                    break;
                }
                unk_2f0c++;
                if (unk_2f0c > 0x32) {
                    unk_2f0c = 0x32;
                }
                break;
            }
        }
    }
}

void Unk_020bbc28::func_020bc43c() {
    s32 kind = 0;
    s32 a = data_021f1448.unk_24;
    s32 b = data_021f1448.unk_28;
    if (a == b) {
        if (a == 3) {
            kind = 2;
        } else if (a == 4) {
            kind = 4;
        }
    } else if (a > b) {
        if (b == 3) {
            kind = 3;
        } else if (b <= 3) {
            kind = 1;
        }
    } else {
        if (b == 3) {
            kind = 1;
        } else if (b > 3) {
            kind = 3;
        }
    }
    if (kind == 0) {
        unk_2f08 = 0;
    } else {
        Unk_020d0f40 *t = &data_020d0f40[kind - 1];
        if (unk_2f00 == 0) {
            unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
        }
        if (b >= 3) {
            unk_2f08 += 2;
            if (unk_2f08 > 0x6400) {
                unk_2f08 = 0x6400;
            }
        } else {
            unk_2f08 -= 2;
            if (unk_2f08 < 0) {
                unk_2f08 = 0;
            }
        }
        unk_2f04 += unk_2f08 >> 8;
        while (unk_2f04 >= unk_2f00) {
            func_020bc754(0, 0x3c, 0, 0);
            unk_2f04 -= unk_2f00;
            if (unk_2f04 <= unk_2f00) {
                unk_2f00 = t->unk_00 + func_02063b8c(t->unk_04);
                if (unk_2f00 < 0x23) {
                    unk_2f00 = 0x23;
                }
                unk_2f04 = 0;
                break;
            }
        }
    }
    if (kind == 4) {
        func_020bc5cc();
    }
    func_020e759c(unk_2f54, b == 4 ? 0x1000 : 0x800, 2);
}

void Unk_020bbc28::func_020bbeb8() {
    BOOL r4 = FALSE;
    BOOL r6 = FALSE;
    Unk_020bbcc8_Xxx s;
    Unk_020bbeb8_Fn fn;
    Unk_020bbcc8_Xxx t1, t2, t3, t4;
    s.a = 0;
    s.b = 0;
    s32 kind = func_02040c7c();
    func_0209d498(&s);
    func_02116048(&s, &t1, 8);
    if (func_0203f2e0(0x13, &t1, 1)) {
        u8 a = unk_2f19;
        u8 b = unk_2f18;
        s32 c = unk_2f1c;
        if (a < 2) {
            r4 = TRUE;
            if (a == 0 && b == 0 && c == 0) {
                r6 = TRUE;
            }
        }
    } else if (kind == 0xf) {
        if (func_020b5164()) {
            func_02116048(&s, &t2, 8);
            if (func_0203f2e0(0xf, &t2, r4)) {
                r4 = TRUE;
            }
        } else if (func_02072e44(data_020cbb18)) {
            func_02116048(&s, &t3, 8);
            if (func_0203f2e0(0xf, &t3, r4)) {
                r4 = TRUE;
            }
        } else {
            r4 = TRUE;
        }
    } else if (func_020b50e8() == 0x2c) {
        BOOL x;
        func_02116048(&s, &t4, 8);
        if (func_0203f2e0(0xf, &t4, 1) == 2) {
            x = TRUE;
        } else {
            x = r4;
        }
        if (x) {
            r4 = TRUE;
        }
    }
    if (r4) {
        static Unk_020bbeb8_Fn tbl[20] = {
            0, &Unk_020bbc28::func_020bb490, &Unk_020bbc28::func_020bb458, &Unk_020bbc28::func_020bb420,
            &Unk_020bbc28::func_020bb3e8, &Unk_020bbc28::func_020bb3b0, &Unk_020bbc28::func_020bb374,
            &Unk_020bbc28::func_020bb33c, &Unk_020bbc28::func_020bb304, &Unk_020bbc28::func_020bb2cc,
            &Unk_020bbc28::func_020bb294, &Unk_020bbc28::func_020bb25c, &Unk_020bbc28::func_020bb224,
            &Unk_020bbc28::func_020bb1f8, &Unk_020bbc28::func_020bb1c4, &Unk_020bbc28::func_020bb190,
            &Unk_020bbc28::func_020bb15c, &Unk_020bbc28::func_020bb128, &Unk_020bbc28::func_020bb0fc,
            &Unk_020bbc28::func_020bb0c8,
        };
        if (unk_2f2c == 0) {
            s32 v;
            if (r6) {
                v = 0x12;
            } else if (func_02063b8c(2) == 0) {
                v = 0xe;
            } else {
                v = 0x10;
            }
            func_020bb4c8(v);
            unk_2f30 = 0;
        }
        unk_2f30--;
        fn = tbl[unk_2f2c];
        (this->*fn)();
    } else {
        unk_2f2c = 0;
        unk_2f30 = 0;
        unk_2f34 = 0;
        unk_2f38 = 0;
        unk_2f3c = 0;
        unk_2f40 = 0;
        unk_2f44 = 0;
        unk_2f48 = 0;
    }
}

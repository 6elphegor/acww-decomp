// mwcc-flags: -nothumb -O4,p
// RC_020f6850: the second sound-emitter source file (G010a part 2) as REAL C++ classes. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020f6850-0x020f7a5c (14 functions), .data 0x0213badc-0x0213bb7c (5 vtables of 6 slots). No bss / rodata / __sinit.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt).
// Extent: see RC_020f5b9c (the 13 vtables of G010a are two files; this one starts after the base class's methods). The next .data object,
// the 0xc-byte vtable 0x0213bb7c, is smaller: it starts the next file (RC_020f7a5c).
// Classes: Unk_0213bb64, Unk_0213bae4, Unk_0213bb04, Unk_0213bb24, Unk_0213bb44 : Unk_0213bac4 (the base is only declared here; its key
// function, vtable and report / update are in RC_020f5b9c). The class DECLARATION order (below) sets the vtable order: keep it.
#include "types.h"

// Base of the sound-emitter objects (defined in the previous file, unk_020f5b9c.cpp: its key function vfunc_00, the vtable and
// report / update live there; only declared here).
class Unk_0213bac4 {
public:
    virtual void vfunc_00(); // reset
    virtual void vfunc_04(); // release both voices
    virtual void vfunc_08(s32 id, void *arg); // event handler
    virtual void vfunc_0c(s32 v);
    virtual void vfunc_10();
    virtual void vfunc_14(); // init

    void report(s32 code, u32 *slot);
    void update(void *arg);

    /* 0x04 */ u32 a; // sound handles
    /* 0x08 */ u32 b;
    /* 0x0c */ u8 c12;
};

// 0x14 bytes
class Unk_0213bb64 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    s32 poll();

    /* 0x0e */ s16 e14;
    /* 0x10 */ s32 w16;
};

// 0x10 bytes
class Unk_0213bae4 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0d */ u8 d13;
};

// 0x18 bytes
class Unk_0213bb04 : public Unk_0213bac4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
    /* 0x14 */ u16 i20;
};

// 0x14 bytes
class Unk_0213bb24 : public Unk_0213bac4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
};

// 0x14 bytes
class Unk_0213bb44 : public Unk_0213bac4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0d */ u8 d13;
    /* 0x0e */ u16 e14;
    /* 0x10 */ u16 g16;
    /* 0x12 */ u16 h18;
};

extern "C" {
extern u8 data_021f5b80[];
u32 func_020f07f0(void *g, u32 n);
void NNS_SndArcPlayerStartSeq(void *p, u32 v);
void func_02109fd0(void *p, u32 a, u32 b);
void func_020eda30(void *p, u32 v);
void func_020edad0(u32 code, u32 a, void *p);
void func_0210a148(void *p, u32 a, u32 b);
void func_0210a188(void *p, u32 a, u32 b);
void func_0210a024(void *p, u32 a, void *out);
}

void Unk_0213bb64::vfunc_14() {
    NNS_SndArcPlayerStartSeq(&b, 0xf6);
    e14 = -1;
    w16 = 0;
}

void Unk_0213bb64::vfunc_08(s32 id, void *arg) {
    s32 base = w16 << 2;
    switch ((u32)poll()) {
    case 1:
        report(base + 0x507, &a);
        break;
    case 2:
        report(base + 0x508, &a);
        break;
    case 3:
        report(base + 0x509, &a);
        break;
    case 4:
        report(base + 0x50a, &a);
        w16 = (w16 + 1) % 2;
        break;
    }
    update(arg);
}

s32 Unk_0213bb64::poll() {
    s16 v;
    s32 r;
    func_0210a024(&b, 0, &v);
    r = (v != e14) ? v : -1;
    e14 = v;
    return r;
}

void Unk_0213bae4::vfunc_08(s32 id, void *arg) {
    if (id == 0) {
        func_0210a148(&b, 1, 70);
        func_0210a148(&b, 2, 80);
        func_0210a148(&b, 12, 120);
        func_0210a148(&b, 16, 110);
        if (d13 != 0) {
            func_020eda30(&a, 0);
            func_020edad0(0x128, 1, &a);
        }
    } else if (id == 90) {
        func_0210a148(&b, 1, 75);
        func_0210a148(&b, 14, 110);
        func_0210a148(&b, 16, 110);
        if (d13 != 0) {
            func_020eda30(&a, 0);
            func_020edad0(0x129, 1, &a);
        }
    } else if (id == 160) {
        func_0210a148(&b, 1, 80);
        func_0210a148(&b, 14, 110);
        func_0210a148(&b, 16, 110);
        if (d13 != 0) {
            func_020eda30(&a, 0);
            func_020edad0(0x12a, 1, &a);
        }
    } else if (id == 260) {
        func_0210a148(&b, 1, 80);
        func_0210a148(&b, 14, 110);
        func_0210a148(&b, 16, 100);
        if (d13 != 0) {
            func_020eda30(&a, 0);
            func_020edad0(0x12b, 1, &a);
        }
    } else if (id == 371) {
        func_0210a148(&b, 1, 75);
        func_0210a148(&b, 2, 0);
        func_0210a148(&b, 12, 90);
        func_0210a148(&b, 16, 75);
        if (d13 != 0) {
            func_020eda30(&a, 0);
            func_020edad0(0x12c, 1, &a);
        }
    } else if (id == 451) {
        func_0210a148(&b, 1, 85);
        func_0210a148(&b, 14, 0);
        func_0210a148(&b, 16, 70);
        d13 = ((d13 + 1) % 2) != 0;
    }
    update(arg);
}

void Unk_0213bae4::vfunc_14() {
    report(0x50f, &b);
    report(0x510, &a);
    d13 = 1;
}

void Unk_0213bb24::vfunc_08(s32 id, void *arg) {
    if (c12 == 1) {
        c12 = 0;
        func_020eda30(&a, 0);
        func_020edad0(0x136, 1, &a);
        g16 = 0;
    } else if (id == 0) {
        if (func_020f07f0(data_021f5b80, 100) < 70) func_02109fd0(&a, 0, 1);
        func_020eda30(&b, 0);
        func_020edad0(0x139, 1, &b);
    } else if (id == 90) {
        if (func_020f07f0(data_021f5b80, 100) < 60) {
            func_02109fd0(&a, 1, 1);
            e14 = 1;
        }
        u32 r = func_020f07f0(data_021f5b80, 100);
        func_020eda30(&b, 0);
        if (r < 33) func_020edad0(0x13a, 1, &b);
        else if (r < 66) func_020edad0(0x13b, 1, &b);
        else func_020edad0(0x13c, 1, &b);
    } else if (id == 145) {
        u32 r = func_020f07f0(data_021f5b80, 100);
        func_020eda30(&b, 0);
        if (r < 33) func_020edad0(0x13a, 1, &b);
        else if (r < 66) func_020edad0(0x13b, 1, &b);
        else func_020edad0(0x13c, 1, &b);
    } else if (id == 180) {
        if (func_020f07f0(data_021f5b80, 100) < 70 && e14 != 1) {
            func_02109fd0(&a, 1, 1);
            e14 = 2;
        }
        if (func_020f07f0(data_021f5b80, 100) < 60 && e14 != 1) {
            func_02109fd0(&a, 0, 1);
            e14 = 2;
        }
    } else if (id == 250) {
        u32 r = func_020f07f0(data_021f5b80, 100);
        if (e14 != 2) {
            if (r < 70) {
                func_02109fd0(&a, 2, 1);
                e14 = 3;
            } else {
                func_02109fd0(&a, 0, 1);
                e14 = 4;
            }
        }
        func_020eda30(&b, 0);
        func_020edad0(0x13d, 1, &b);
    } else if (g16 == 103) {
        func_020eda30(&a, 0);
        func_020edad0(0x137, 1, &a);
    } else if (g16 == 700) {
        func_020eda30(&a, 0);
        func_020edad0(0x138, 1, &a);
    } else if (g16 == 900) {
        func_020eda30(&a, 0);
        func_020edad0(0x136, 1, &a);
        g16 = 0;
    }
    g16 = g16 + 1;
    update(arg);
}

void Unk_0213bb24::vfunc_00() {
    Unk_0213bac4::vfunc_00();
    g16 = 0;
}

void Unk_0213bb24::vfunc_14() {
    report(0x51f, &a);
    e14 = 0;
}

void Unk_0213bb04::vfunc_08(s32 id, void *arg) {
    if (c12 == 1) {
        c12 = 0;
        func_020eda30(&b, 0);
        func_020edad0(0x12d, 1, &b);
        func_020eda30(&a, 0);
        func_020edad0(0x132, 1, &a);
        i20 = 0;
        h18 = 0;
        e14 = 0;
        g16 = 0;
    } else if (id == 0) {
        func_020eda30(&b, 0);
        func_020eda30(&a, 0);
        if (func_020f07f0(data_021f5b80, 100) < 40) {
            func_020edad0(0x12e, 1, &b);
            func_020edad0(0x132, 1, &a);
            i20 = 1;
        } else {
            func_020edad0(0x130, 1, &b);
            func_020edad0(0x133, 1, &a);
            i20 = 2;
        }
    } else if (id == 90 && i20 != 0) {
        u32 r = func_020f07f0(data_021f5b80, 3);
        func_020eda30(&b, 0);
        func_020eda30(&a, 0);
        if (r == 0) {
            func_020edad0(0x12f, 1, &b);
            func_020edad0(0x134, 1, &a);
            i20 = 3;
        } else if (r == 1) {
            func_020edad0(0x12f, 1, &b);
            func_020edad0(0x135, 1, &a);
            i20 = 4;
        } else {
            func_020edad0(0x131, 1, &b);
            func_020edad0(0x134, 1, &a);
            i20 = 5;
        }
    } else if (id == 120 && i20 == 0) {
        u32 r = func_020f07f0(data_021f5b80, 2);
        func_020eda30(&b, 0);
        func_020eda30(&a, 0);
        if (r == 0) {
            func_020edad0(0x12f, 1, &b);
            func_020edad0(0x134, 1, &a);
            i20 = 3;
        } else {
            func_020edad0(0x12f, 1, &b);
            func_020edad0(0x135, 1, &a);
            i20 = 4;
        }
    }
    if (h18 != i20) {
        if (g16 == 0) {
            g16 = g16 + 1;
        } else if (g16 == 1) {
            if (func_020f07f0(data_021f5b80, 2) == 0) {
                g16 = g16 + 1;
            } else {
                g16 = 0;
                e14 = (e14 + 1) % 2;
            }
        } else if (g16 >= 2) {
            g16 = 0;
            e14 = (e14 + 1) % 2;
        }
        if (e14 % 2 == 1) func_0210a188(&b, 0x3f, 1);
        h18 = i20;
    }
    update(arg);
}

void Unk_0213bb04::vfunc_00() {
    Unk_0213bac4::vfunc_00();
    e14 = 0;
    g16 = 0;
}

void Unk_0213bb04::vfunc_14() {
    report(0x517, &b);
    i20 = 3;
    h18 = i20;
}

void Unk_0213bb44::vfunc_08(s32 id, void *arg) {
    s32 t1, t2, t5, t4, t3, t6;
    h18++;
    s32 st = e14;
    if (st == 15 && h18 >= 140) {
        d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        h18 = 0;
        t5 = 25;
        t6 = 88;
    } else if (st == 16 && h18 >= 100) {
        d13 = 1;
        t1 = 50;
        t2 = 75;
        t3 = t1;
        t4 = t2;
        h18 = 0;
        t5 = 25;
        t6 = 88;
    } else {
        s32 m = st % 5;
        if (m <= 2 && h18 >= 120) {
            d13 = 1;
            h18 = 0;
            u32 q = e14 / 5;
            if (q == 0) {
                t1 = 50;
                t2 = 75;
                t3 = t1;
                t4 = t2;
                t5 = 25;
                t6 = 88;
            } else if (q == 1) {
                t1 = 40;
                t2 = 80;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            } else {
                t1 = 40;
                t2 = 60;
                t5 = 25;
                t3 = 50;
                t4 = 75;
                t6 = 88;
            }
        } else if (m >= 3 && h18 >= 70) {
            d13 = 1;
            h18 = 0;
            u32 q = e14 / 5;
            if (q == 0) {
                t4 = 100;
                t6 = t4;
                t1 = 50;
                t2 = 75;
                t5 = 35;
                t3 = 70;
            } else if (q == 1) {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 80;
                t5 = 35;
                t3 = 70;
            } else {
                t4 = 100;
                t6 = t4;
                t1 = 40;
                t2 = 60;
                t5 = 35;
                t3 = 70;
            }
        }
    }
    if (d13 == 1) {
        s32 r;
        func_020eda30(&b, 0);
        g16 = e14;
        r = (s16)func_020f07f0(data_021f5b80, 100);
        if (r <= t1) t2 = 0;
        else if (r <= t2) t2 = 5;
        else t2 = 10;
        r = (s16)func_020f07f0(data_021f5b80, 100);
        if (r <= t5) {
            e14 = t2;
            if (g16 % 5 != e14 % 5) {
                func_020eda30(&a, 0);
                func_020edad0(0x13e, 1, &a);
            }
        } else if (r <= t3) {
            e14 = t2 + 1;
            if (g16 % 5 != e14 % 5) {
                func_020eda30(&a, 0);
                func_020edad0(0x13f, 1, &a);
            }
        } else if (r <= t4) {
            e14 = t2 + 2;
            if (g16 % 5 != e14 % 5) {
                func_020eda30(&a, 0);
                func_020edad0(0x140, 1, &a);
            }
        } else if (r <= t6) {
            e14 = t2 + 3;
            if (g16 % 5 != e14 % 5) {
                func_020eda30(&a, 0);
                func_020edad0(0x141, 1, &a);
            }
        } else {
            e14 = t2 + 4;
            if (g16 % 5 != e14 % 5) {
                func_020eda30(&a, 0);
                func_020edad0(0x142, 1, &a);
            }
        }
        s32 q2 = t2 / 5;
        if (q2 == 0) {
            func_0210a148(&a, 3, 100);
            if (func_020f07f0(data_021f5b80, 100) < 40 && id > 90) {
                func_020edad0(0x146, 1, &b);
                func_0210a148(&b, 3, 100);
            }
        } else if (q2 == 1) {
            func_0210a148(&a, 3, 75);
            func_020edad0(0x145, 1, &b);
        } else {
            func_0210a148(&a, 3, 127);
            if (func_020f07f0(data_021f5b80, 100) < 40 && id > 90 && e14 <= 13) {
                func_020edad0(0x146, 1, &b);
                func_0210a148(&b, 3, 80);
            }
        }
        if (g16 == 11 || g16 == 13) {
            r = (s16)func_020f07f0(data_021f5b80, 100);
            if (r <= 20) {
                func_020eda30(&a, 0);
                func_020edad0(0x143, 1, &a);
                e14 = 15;
            } else if (r <= 40) {
                func_020eda30(&a, 0);
                func_020edad0(0x144, 1, &a);
                e14 = 16;
            }
        }
        d13 = 0;
    }
    update(arg);
}

void Unk_0213bb44::vfunc_00() {
    Unk_0213bac4::vfunc_00();
    e14 = 0;
    g16 = 0;
    h18 = 0;
}

void Unk_0213bb44::vfunc_14() {
    report(0x526, &a);
    g16 = 0;
    e14 = g16;
}

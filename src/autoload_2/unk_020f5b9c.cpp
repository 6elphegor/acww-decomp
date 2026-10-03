// mwcc-flags: -nothumb -O4,p
// RC_020f5b9c: the first sound-emitter source file (G010a part 1) as REAL C++ classes. mwcc 1.2/base, C++, ARM, -O4,p.
// autoload_2 .text 0x020f5b9c-0x020f6850 (22 functions), .data 0x0213b9dc-0x0213badc (8 vtables of 6 slots). No bss / rodata / __sinit.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt adds the
// compiler's names as labels; only the vtables are renamed to _ZTV.. at their starts).
// EXTENT (from the data order): G010a's 13 equal-size vtables are TWO files. With mwcc's data order (vtables created last, in reverse
// class-declaration order, all objects heapsorted by size) the 13 vtables as one
// file need the base class Unk_0213bac4 declared 9th, after eight of its own derived classes: impossible. Split after the 8th vtable,
// this file's 8 vtables come out in the original order with the classes declared in the natural order (base, then 9e4, a04, ..., aa4 =
// vtable order = the order of their methods in the text), and its text ends exactly where the base's methods end (0x020f6850); the other
// five classes (0x0213bae4..bb64, text 0x020f6850-0x020f7a5c) are the next file, RC_020f6850. The 1-byte data_0213b9d8 in front is not
// this file's (with it the declaration order would be scrambled; its only user is G012b's func_020f4f74).
// Classes (vtable start / dsd label at +8; slots: 0 reset, 1 release, 2 event handler, 3 set flag, 4 mute, 5 init):
//   Unk_0213bac4   base (vtable 0x0213babc): f6800 / f67c8 / f67b8 / f678c / f6764 / f5b9c, helpers report f6678 and update f66d0.
//                  main constructs all of them (func_02003878, inline constructors) and declares the class in unk_020030d8.cpp.
//   Unk_0213b9e4 / ba04 / ba24 / ba44 / ba64 / ba84 / baa4 : Unk_0213bac4 (vtables 0x0213b9dc .. 0x0213ba9c); derived members sit in the
//                  base's tail padding (+0xd).
// The class DECLARATION order sets the vtable order: keep it.
#include "types.h"

// Base of the sound-emitter objects that main's func_02003878 creates (inline constructors there store this vtable, then the
// derived one). main's unk_020030d8.cpp declares the same class (non-virtual helpers func_020037b0.. are defined in main).
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

class Unk_0213b9e4 : public Unk_0213bac4 {
public:
    virtual void vfunc_14();
};

class Unk_0213ba04 : public Unk_0213bac4 {
public:
    virtual void vfunc_14();
};

class Unk_0213ba24 : public Unk_0213bac4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0d */ s8 d13;
};

class Unk_0213ba44 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0d */ s8 d13;
};

class Unk_0213ba64 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    /* 0x0d */ s8 d13;
};

class Unk_0213ba84 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();
};

class Unk_0213baa4 : public Unk_0213bac4 {
public:
    virtual void vfunc_08(s32 id, void *arg);
    virtual void vfunc_14();

    void nextFrame();

    /* 0x0d */ u8 c13;
    /* 0x0e */ u8 c14;
    /* 0x0f */ u8 c15;
};

extern "C" {
extern u8 data_021f5b80[];
void func_0206d49c(void);
u32 func_020f07f0(void *g, u32 n);
void func_0210cf78(void *slot, u32 a, s32 b);
void func_0210d010(void *p, u32 v);
void func_02109fd0(void *p, u32 a, u32 b);
void func_0210a26c(void *p, s32 v);
void func_0210a27c(void *p);
void func_0210a294(void *p);
void func_020eda30(void *p, u32 v);
void func_0210a148(void *p, u32 a, u32 b);
void func_0210a0e8(void *p, u32 a, u32 b);
void func_0210a214(void *p, u32 a, u32 b);
void func_0210a378(void *p, u32 a);
void func_020f4904(void *a, u32 b);
u32 func_020f48d8(void);
u32 func_020f4718(void *a, u32 b);
}

static inline BOOL nz(u32 v) { return v != 0; }

void Unk_0213bac4::vfunc_00() {
    func_0210a294(&a);
    func_0210a294(&b);
    c12 = 0;
    vfunc_14();
    func_0210a26c(&a, 0);
    func_0210a26c(&b, 0);
}

void Unk_0213bac4::vfunc_04() {
    func_020eda30(&a, 0);
    func_020eda30(&b, 0);
    func_0210a27c(&a);
    func_0210a27c(&b);
}

void Unk_0213bac4::vfunc_08(s32 id, void *arg) {
    return update(arg);
}

void Unk_0213bac4::vfunc_0c(s32 v) {
    c12 = v;
    func_0210a26c(&a, 127);
    func_0210a26c(&b, 127);
}

void Unk_0213bac4::vfunc_10() {
    func_0210a26c(&a, 0);
    func_0210a26c(&b, 0);
}

void Unk_0213bac4::update(void *x) {
    u32 r5;
    u32 r4;
    if (x == 0) {
        func_0210a26c(&a, 0);
        func_0210a26c(&b, 0);
        return;
    }
    func_020f4904(x, 0);
    r5 = func_020f48d8();
    r4 = func_020f4718(x, 0);
    func_0210a26c(&a, r5);
    func_0210a26c(&b, r5);
    func_0210a0e8(&a, 15, r4);
    func_0210a0e8(&b, 15, r4);
}

void Unk_0213bac4::report(s32 code, u32 *slot) {
    if (slot == 0) func_0206d49c();
    func_0210cf78(slot, 1, code % 1000);
}

void Unk_0213b9e4::vfunc_14() {
    return report(0x4f0, &a);
}

void Unk_0213ba04::vfunc_14() {
    return report(0x4f1, &a);
}

void Unk_0213ba24::vfunc_00() {
    Unk_0213bac4::vfunc_00();
    d13 = -1;
}

void Unk_0213ba24::vfunc_14() {
    return report(0x4f2, &b);
}

void Unk_0213ba24::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (!nz(b)) report(0x4f2, &b);
        d13++;
        if (d13 == 3) d13 = 0;
        switch (d13) {
        case 0:
            report(0x4f6, &a);
            break;
        case 1:
            func_0210d010(&a, 247);
            break;
        case 2:
            func_0210a214(&a, 40, 15);
            break;
        }
        break;
    case 40:
        func_02109fd0(&a, 1, 1);
        break;
    case 50:
        func_02109fd0(&a, 0, 2);
        break;
    case 150:
        report(0x4f3, &b);
        func_02109fd0(&a, 0, 0);
        break;
    case 200:
        report(0x4f4, &b);
        func_02109fd0(&a, 1, 2);
        break;
    case 300:
        func_02109fd0(&a, 0, 3);
        break;
    case 375:
        report(0x4f5, &b);
        break;
    case 385:
        if (d13 == 2) func_0210a378(&a, 15);
        break;
    }
    switch (d13) {
    case 0:
        func_0210a148(&a, 0xfff, 127);
        func_0210a148(&b, 0xfff, 127);
        break;
    case 1:
        func_0210a148(&a, 0xfff, 100);
        func_0210a148(&b, 0xfff, 0);
        break;
    case 2:
        func_0210a148(&b, 0xfff, 100);
        break;
    }
    update(arg);
}

void Unk_0213ba44::vfunc_14() {
    func_0210d010(&a, 0xac);
    d13 = 0;
}

void Unk_0213ba44::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (d13 == 0) report(0x4f7, &b);
        break;
    case 120:
        if (d13 == 1) report(0x4f8, &b);
        break;
    case 190:
        if (d13 == 0) report(0x4f9, &b);
        break;
    case 210:
        if (d13 == 1) report(0x4fb, &b);
        break;
    case 300:
        if (d13 == 0) report(0x4fa, &b);
        break;
    case 349:
        d13++;
        if (d13 == 2) d13 = 0;
        break;
    }
    update(arg);
}

void Unk_0213ba64::vfunc_14() {
    d13 = 0;
}

void Unk_0213ba64::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 1:
        if (d13 == 0) report(0x4fc, &a);
        else report(0x4fd, &a);
        if (!nz(b)) report(0x500, &b);
        break;
    case 70:
        func_02109fd0(&b, 1, 1);
        break;
    case 210:
        func_02109fd0(&b, 2, 1);
        break;
    case 220:
        func_02109fd0(&b, 1, 0);
        break;
    case 230:
        if (d13 == 0) report(0x4fe, &a);
        else report(0x4ff, &a);
        break;
    case 253:
        if (d13 == 1) func_02109fd0(&b, 2, 2);
        break;
    case 258:
        if (d13 == 0) func_02109fd0(&b, 2, 2);
        break;
    case 280:
        func_02109fd0(&b, 1, 1);
        break;
    case 370:
        func_02109fd0(&b, 1, 0);
        func_02109fd0(&b, 2, 1);
        break;
    case 383:
        if (d13 == 1) func_02109fd0(&a, 0, 2);
        break;
    case 390:
        if (d13 == 0) func_02109fd0(&a, 0, 2);
        break;
    case 405:
        if (d13 == 1) func_02109fd0(&b, 2, 3);
        break;
    case 425:
        if (d13 == 0) func_02109fd0(&b, 2, 3);
        break;
    case 479:
        d13++;
        if (d13 == 2) d13 = 0;
        break;
    }
    update(arg);
}

void Unk_0213ba84::vfunc_14() {
    report(0x501, &a);
    report(0x502, &b);
}

void Unk_0213ba84::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        if (!nz(a)) report(0x501, &a);
        if (!nz(b)) report(0x502, &b);
        func_02109fd0(&a, 0, 1);
        func_02109fd0(&b, 0, 1);
        break;
    case 90:
        func_02109fd0(&a, 0, 2);
        func_02109fd0(&b, 0, 2);
        break;
    case 140:
        func_02109fd0(&a, 0, 3);
        break;
    case 225:
        func_02109fd0(&a, 0, 4);
        break;
    case 235:
        func_02109fd0(&a, 0, 5);
        break;
    case 245:
        func_02109fd0(&b, 0, 3);
        break;
    }
    update(arg);
}

void Unk_0213baa4::vfunc_14() {
    c13 = 0;
    c14 = func_020f07f0(data_021f5b80, 3);
    c15 = 0;
    func_0210d010(&a, (u16)(c14 + 0xad));
}

void Unk_0213baa4::nextFrame() {
    u8 v;
    do {
        v = func_020f07f0(data_021f5b80, 3);
    } while (v == c14);
    c14 = v;
    func_0210d010(&a, (u16)(c14 + 0xad));
}

void Unk_0213baa4::vfunc_08(s32 id, void *arg) {
    switch (id) {
    case 10:
        switch (c15) {
        case 0:
            report(0x503, &b);
            break;
        case 1:
            report(0x505, &b);
            break;
        }
        break;
    case 130:
        if (c15 == 0) report(0x504, &b);
        break;
    case 150:
        if (c15 == 1) report(0x506, &b);
        break;
    case 399:
        c13++;
        if (c13 == 7) {
            c13 = 0;
            nextFrame();
        }
        c15++;
        if (c15 == 3) c15 = 0;
        break;
    }
    update(arg);
}

void Unk_0213bac4::vfunc_14() {
}

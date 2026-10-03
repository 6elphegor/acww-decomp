// mwcc-flags: -nothumb -O4,p
// RC_020f3e50: autoload_2 0x020f3e50-0x020f44f0 (24 functions) + .data 0x0213b984-0x0213b9d8 (3 vtables). mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape (pipeline_wip/realclass_work/PLAN.md): the sound-effect channel objects. Real classes with real member functions,
// out-of-line constructors (mwcc emits C1 and C2; both are kept where both are called), destructors and the compiler-emitted vtables.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt adds the compiler's
// names as labels, nothing is renamed). Classes (vtable start / dsd label at +8):
//   Unk_020f43c8 : SndHandle   base, key function ~Unk_020f43c8 (D2 f43c8, D0 f43d8, D1 f43fc), C1 f440c / C2 f4424, vtable 0x0213b9a0
//   Unk_020d6f54 : Unk_020f43c8   main's class: no key function, so its vtable and implicit D1/D0 are LINK-ONCE (ELF binding 13)
//                                in every file that needs them; mwld keeps the first copy (main, 0x020d6f4c) and drops this file's.
//                                Its C1 f4080 / C2 f40c0 and the volume callback f4010 are defined here.
//   Unk_020f3ee4 : Unk_020d6f54   key function ~Unk_020f3ee4 (D0 f3e7c, D1 f3eb4; D2 unreferenced, dead-stripped), C1 f3ee4, vtable 0x0213b984
//   Unk_020f3e50 : Unk_020f43c8   = dsd's "Unk_0213b9c4" (C1 label _ZN12Unk_0213b9c4C1Ev): no key function, implicit D1 f44a0 / D0 f44c4 and
//                                its vtable 0x0213b9bc are link-once; this file's copies are the only ones (kept). NOT named Unk_0213b9c4:
//                                ov009's PARTIAL unit defines the GLOBAL extern "C" `_ZN12Unk_0213b9c4D1Ev` (its own Thumb copy at
//                                0x0225b934), and a global + a link-once definition of one name is "Multiply-defined" in mwld (tested).
// SndHandle is a non-polymorphic second base at +4 (mwcc puts the vptr first): the `this ? this + 4 : 0` conversions of the original
// are the implicit derived-to-base conversions when `this` is passed to the extern "C" SndHandle functions of unk_020ede18.cpp, and
// `h ? h - 4 : 0` in f4010 is static_cast<Unk_020f43c8 *>(h).
#include "types.h"

// sound handle (functions in unk_020ede18.cpp, plain C names): the non-polymorphic second base of the channel object, at +4
struct SndHandle {
    /* 0x00 */ u8 pad00[0x30];
    /* 0x30 */ void (*volCb)(SndHandle *h, s32 idx);
    /* 0x34 */ u8 pad34[4];
};

// sound manager data_021f5b80 (SndMgr, unk_020f0dec.cpp): only the two flags read here
struct Glob {
    /* 0x00 */ u8 pad0[0x4d];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad4e[0x12];
    /* 0x60 */ u8 f60;
};

extern "C" {
extern Glob data_021f5b80;
extern u8 data_021f5bc0[];

u32 func_020f07f0(void *g, u32 n);
void func_0210a26c(void *p, s32 v);
void func_0210a2a0(s32 a, s32 b, u32 c);
void func_020eda80(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_020edfbc(SndHandle *h, u32 a, u32 b, s32 c, s16 d);
s32 func_020ee0c4(SndHandle *h, u32 a, u32 b, s32 c, s16 d);
void func_020ee1b0(SndHandle *h, void *src);
void func_020ee46c(SndHandle *h);
void func_020ee478(SndHandle *h);
void func_020ee558(SndHandle *h, s32 x);
void func_020ee84c(s32 (*f)(void *));
void func_020ee85c(s32 (*f)(void *));
void func_020ee86c(s32 (*f)(void *));
s32 func_020f48f0(void *p);
s32 func_020f48c8(void *p);
s32 func_020f4704(void *p);
}

// channel object base, vtable 0x0213b9a0 (dsd label data_0213b9a8); main / ov003 / ov004 call its C1 and D1 as func_020f440c / func_020f43fc
class Unk_020f43c8 : public SndHandle {
public:
    Unk_020f43c8();                   // C1 0x020f440c, C2 0x020f4424
    virtual ~Unk_020f43c8();          // D2 0x020f43c8, D0 0x020f43d8, D1 0x020f43fc
    virtual void vfunc_08();          // 0x020f4394
    virtual void vfunc_0c(void *src); // 0x020f4380
    virtual void vfunc_10();          // 0x020f4144
    void stopEffects();               // 0x020f4100
    BOOL play(s32 id, s32 c, s16 d);  // 0x020f4158
    BOOL play2(s32 id, s32 c, s16 d); // 0x020f41fc
    u16 nextId(u16 s);                // 0x020f3f38
    void playNext(u16 s);             // 0x020f3f10

    /* 0x3c */ u16 h3c;
    /* 0x3e */ u8 b3e;
    /* 0x3f */ u8 b3f;
    /* 0x40 */ u8 b40;
};

// main's class (vtable _ZTV12Unk_020d6f54 in main, implicit destructor): its constructor lives here
class Unk_020d6f54 : public Unk_020f43c8 {
public:
    Unk_020d6f54();                                // C1 0x020f4080, C2 0x020f40c0
    static void onVolume(SndHandle *h, s32 idx);   // 0x020f4010
};

// vtable 0x0213b984 (dsd label data_0213b98c)
class Unk_020f3ee4 : public Unk_020d6f54 {
public:
    Unk_020f3ee4();                   // C1 0x020f3ee4
    virtual ~Unk_020f3ee4();          // D0 0x020f3e7c, D1 0x020f3eb4
};

// vtable 0x0213b9bc (dsd label data_0213b9c4)
class Unk_020f3e50 : public Unk_020f43c8 {
public:
    Unk_020f3e50();                   // C1 0x020f3e50 (implicit destructor: D1 0x020f44a0, D0 0x020f44c4)
};

// Definitions in descending address order (mwcc emits a file's functions last to first). The compiler-generated functions land by
// themselves: C1 before C2, an out-of-line destructor as D2 D0 D1, a link-once implicit destructor (D1 D0) at the very top.

// install the three listener callbacks of the next file (f48f0 / f48c8 / f4704); plain extern "C" helpers keep their names
extern "C" void func_020f4468(void) {
    func_020ee85c(func_020f48f0);
    func_020ee84c(func_020f48c8);
    func_020ee86c(func_020f4704);
}

// clear the three listener callbacks
extern "C" void func_020f443c(void) {
    func_020ee85c(0);
    func_020ee84c(0);
    func_020ee86c(0);
}

Unk_020f43c8::Unk_020f43c8() {
    b3e = 0;
}

Unk_020f43c8::~Unk_020f43c8() {
}

void Unk_020f43c8::vfunc_08() {
    func_020ee478(this);
    func_020ee558(this, 1);
    h3c = 0;
}

void Unk_020f43c8::vfunc_0c(void *src) {
    func_020ee1b0(this, src);
}

BOOL Unk_020f43c8::play2(s32 id, s32 c, s16 d) {
    s32 x;
    if (b3e == 99 && data_021f5b80.f60 != 0) {
        void *p = data_021f5bc0;
        func_020eda80(p, 10, -1, -1, id / 1000, id % 1000);
        func_0210a26c(p, 100);
        return TRUE;
    }
    switch (id) {
    case 0x838:
    case 0x839:
    case 0x83a:
        stopEffects();
        break;
    }
    x = id;
    if (id == 123 || id == 127) {
        x += func_020f07f0(&data_021f5b80, 4);
        if (x == h3c) {
            if (x == id) {
                x++;
            } else if (x == id + 3) {
                x--;
            }
        }
        h3c = x;
    }
    return func_020ee0c4(this, id / 1000, x % 1000, c, d);
}

BOOL Unk_020f43c8::play(s32 id, s32 c, s16 d) {
    Glob *g = &data_021f5b80;
    if (g->f4d == 1) return FALSE;
    if (id == 0x7f6) stopEffects();
    return func_020edfbc(this, id / 1000, id % 1000, c, d);
}

void Unk_020f43c8::vfunc_10() {
    func_020ee46c(this);
}

void Unk_020f43c8::stopEffects() {
    s32 i;
    for (i = 82; i < 97; i++) {
        func_0210a2a0(2, i, 0);
    }
    func_0210a2a0(2, 54, 0);
}

Unk_020d6f54::Unk_020d6f54() {
    volCb = onVolume;
    b3e = 1;
    b3f = 0;
}

void Unk_020d6f54::onVolume(SndHandle *h, s32 idx) {
    if (data_021f5b80.f60 == 0) return;
    void *slot = (u8 *)h + 8 + idx * 12;
    Unk_020f43c8 *o = static_cast<Unk_020f43c8 *>(h);
    func_0210a26c(slot, o->b40 * 40 / 100);
}

u16 Unk_020f43c8::nextId(u16 s) {
    u32 r = func_020f07f0(&data_021f5b80, 4);
    u8 f = b3f;
    u32 b = f & 2;
    u32 c = f & 4;
    if (f & 1) {
        if (r == 0 && b == 0 && c == 0) {
            s = s + 2;
            b3f = f | 2;
        } else {
            b3f &= ~2;
        }
    } else {
        if (r == 0 && b == 0 && c == 0) {
            s = s + 3;
            b3f = f | 4;
        } else {
            s = s + 1;
            b3f &= ~4;
        }
    }
    b3f ^= 1;
    return s;
}

void Unk_020f43c8::playNext(u16 s) {
    play2(nextId(s), 127, 0);
}

Unk_020f3ee4::Unk_020f3ee4() {
    b3e = 99;
}

Unk_020f3ee4::~Unk_020f3ee4() {
}

Unk_020f3e50::Unk_020f3e50() {
    b3e = 2;
}

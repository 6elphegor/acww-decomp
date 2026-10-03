// mwcc-flags: -nothumb -O4,p
// RC_020f30fc: autoload_2 0x020f30fc-0x020f44f0 (52 functions) + .data 0x0213b914-0x0213b9d8 (7 vtables) + bss 0x021f5bf8 (autoload_3).
// mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape (pipeline_wip/realclass_work/PLAN.md). ONE source file: the sound-channel classes (G008a part 2) and the sound-effect
// channel objects (RC_020f3e50) are the same file, which this unit supersedes. Evidence: the seven 0x1c-byte vtables 0x0213b914-0x0213b9d8
// are one size run, and the compiler's data order (named objects at their definition, vtables last in reverse declaration order, the
// whole list heapsorted by size; realclass2_work/inv2.py, inv3.py) reproduces the original with all seven in one file, declared in the
// natural order Unk_020f43c8, Unk_020d6f54, Unk_020f3ee4, Unk_020f3e50, Unk_0213b91c, 938, 954, 970 (as below). The four channel
// vtables as a file of their own (with or without the bss word data_021f5bf8) would need Unk_0213b970 / Unk_0213b954 declared before
// their base Unk_0213b91c, which is impossible.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt adds the compiler's
// names as labels, nothing is renamed). Classes (vtable start / dsd label at +8):
//   Unk_020f43c8 : SndHandle   base, key function ~Unk_020f43c8 (D2 f43c8, D0 f43d8, D1 f43fc), C1 f440c / C2 f4424, vtable 0x0213b9a0
//   Unk_020d6f54 : Unk_020f43c8   main's class: no key function, so its vtable and implicit D1/D0 are LINK-ONCE (ELF binding 13)
//                                in every file that needs them; mwld keeps the first copy (main, 0x020d6f4c) and drops this file's.
//                                Its C1 f4080 / C2 f40c0 and the volume callback f4010 are defined here.
//   Unk_0213b91c               sound-environment channel, key function vfunc_00 f3700, vtable 0x0213b914; slots f3700 / f36dc / f369c /
//                                f365c / f3144. No constructor here: main / ov003 / ov004 construct it with inline constructors.
//   Unk_0213b938 / 954 / 970 : Unk_0213b91c   overrides that call the base version (tail calls f3138 / f312c / f3120..f30fc),
//                                vtables 0x0213b930 / 0x0213b94c / 0x0213b968
//   Unk_020f3ee4 : Unk_020d6f54   key function ~Unk_020f3ee4 (D0 f3e7c, D1 f3eb4; D2 unreferenced, dead-stripped), C1 f3ee4, vtable 0x0213b984
//   Unk_020f3e50 : Unk_020f43c8   = dsd's "Unk_0213b9c4" (C1 label _ZN12Unk_0213b9c4C1Ev): no key function, implicit D1 f44a0 / D0 f44c4 and
//                                its vtable 0x0213b9bc are link-once; this file's copies are the only ones (kept). NOT named Unk_0213b9c4:
//                                ov009's PARTIAL unit defines the GLOBAL extern "C" `_ZN12Unk_0213b9c4D1Ev` (its own Thumb copy at
//                                0x0225b934), and a global + a link-once definition of one name is "Multiply-defined" in mwld (tested).
//   SndPosNode / SndPosList    positional sound sources (no vtable) in the list data_021f5bf8: f3e14..f3a34 / f3a18..f3724
// The class DECLARATION order (and the bss object data_021f5bf8 being defined) sets the vtable order: keep both.
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

// sound manager data_021f5b80 (SndMgr, unk_020f0dec.cpp): only the fields read here
struct SndScene {
    /* 0x00 */ u8 pad0[4];
    /* 0x04 */ s8 id;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x2c];
    /* 0x2c */ SndScene *f2c;
    /* 0x30 */ u8 pad30[0x1d];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad4e[0x12];
    /* 0x60 */ u8 f60;
};

struct Vec3 {
    s32 x, y, z;
};

// NNS_FndList
struct FndList {
    void *head;
    void *tail;
    u16 num;
    u16 offset;
};

// sound sequence handle (one word; functions in unk_020ede18.cpp and the NNS sound library, plain C names)
struct SndSeqHandle {
    void *p;
};

struct SeqHeader {
    /* 0x00 */ u8 unk_00[0x38];
    /* 0x38 */ u16 unk_38;
    /* 0x3a */ u16 unk_3a;
};

struct SeqInfo {
    u8 pad[4];
    u8 unk_04;
};

struct Pan4500 {
    u8 pad[0x10];
    s32 w10;
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

class SndPosList;

extern "C" {
extern SndPosList *data_021f5bf8;
extern SndSeqHandle data_021f5bbc;
extern u16 data_0213b200;
void func_0206d49c(void);
void func_020ee968(void **p);
void *func_020ee928(void **p);
void *func_020ee930(void **p);
void *func_020ee938(void *list, void *obj);
void *func_020ee944(void *list, void *obj);
void func_020ee950(void *list, void *obj);
void func_020ee95c(void *list, void *obj);
void func_020eda30(void *p, u32 a);
void func_020eda60(void *p);
void func_020edad0(u16 a, u16 b, void *out);
void func_02100444(void *list, u16 offset);
void func_02109fd0(void *p, u32 a, s32 b);
void func_0210a0e8(void *p, u32 a, s32 b);
void func_0210a27c(void *p);
SeqInfo *func_0210b8a0(u32 a, u32 b);
s32 func_020f4904(Vec3 *p, s32 m);
s32 func_020f48d8(s32 x);
s32 func_020f4718(Vec3 *p, s32 m);
Pan4500 *func_020f4500(void);
void func_020f47ac(s32 z, s32 *a, s32 *b);
void func_0210a1e8(void *p, s32 v);
void func_0210a148(void *p, u32 a, s32 b);
}

// the list of positional sources in use (set by SndPosNode::init; bss 0x021f5bf8, this file's only bss object: the 4-byte object
// after the 0x78-byte SndMgr starts a new file, and only this file's functions use it)
SndPosList *data_021f5bf8;

static inline BOOL notNull(void *p) {
    return p != NULL;
}

// positional sound source (main's wrappers unk_020039ec.cpp call it by the func_ names), linked into the list data_021f5bf8
class SndPosNode {
public:
    void init(SndPosList *list);      // 0x020f3e14
    void play(s32 v, Vec3 *p);        // 0x020f3d54
    void restart();                   // 0x020f3c78
    void stop();                      // 0x020f3c2c
    BOOL isFinished();                // 0x020f3be8
    void updatePan();                 // 0x020f3b98
    void playOnce(u32 v, Vec3 *p);    // 0x020f3b08
    void setPitch(s32 v);             // 0x020f3af0
    void setBgmPan(Vec3 *p);          // 0x020f3a6c (does not use this)
    void release();                   // 0x020f3a34

    /* 0x00 */ void *link[2];
    /* 0x08 */ SndSeqHandle h;
    /* 0x0c */ Vec3 pos;
    /* 0x18 */ u16 id;
    /* 0x1a */ u8 b1a;
    /* 0x1b */ u8 b1b;
};

// the list of positional sources (data_021f5bf8 points to it)
class SndPosList {
public:
    SndPosList *release();                 // 0x020f3a18
    void init();                           // 0x020f39f8
    void add(SndPosNode *node);            // 0x020f39a0
    void update();                         // 0x020f3800
    void remove(SndPosNode *node);         // 0x020f37b4
    void playAt(s32 v, Vec3 *p);           // 0x020f3724

    /* 0x00 */ FndList list;
    /* 0x0c */ SndSeqHandle h;
};

// sound-environment channels: base vtable 0x0213b914 (dsd label data_0213b91c); main / ov003 / ov004 construct them with inline
// constructors (vptr stores of _ZTV12Unk_0213b91c / 938 / 954 / 970), the key functions are here
class Unk_0213b91c {
public:
    virtual void vfunc_00();           // 0x020f3700 reset
    virtual void vfunc_04();           // 0x020f36dc stop and release
    virtual void vfunc_08(u32 v);      // 0x020f369c
    virtual void vfunc_0c(u32 v);      // 0x020f365c
    virtual void vfunc_10(Vec3 *pos);  // 0x020f3144 update

    /* 0x04 */ SndSeqHandle h;
    /* 0x08 */ u16 v;
    /* 0x0a */ u8 flags;
};

// vtable 0x0213b930 (data_0213b938)
class Unk_0213b938 : public Unk_0213b91c {
public:
    virtual void vfunc_00();           // 0x020f3138
};

// vtable 0x0213b94c (data_0213b954)
class Unk_0213b954 : public Unk_0213b91c {
public:
    virtual void vfunc_00();           // 0x020f312c
};

// vtable 0x0213b968 (data_0213b970)
class Unk_0213b970 : public Unk_0213b91c {
public:
    virtual void vfunc_00();           // 0x020f3120
    virtual void vfunc_08(u32 v);      // 0x020f3114
    virtual void vfunc_0c(u32 v);      // 0x020f3108
    virtual void vfunc_10(Vec3 *pos);  // 0x020f30fc
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

void SndPosNode::init(SndPosList *list) {
    data_021f5bf8 = list;
    id = 0;
    b1a = b1b = 0;
    func_020ee968((void **)this);
    func_020eda60(&h);
}

void SndPosNode::play(s32 v, Vec3 *p) {
    if (data_021f5b80.f4d != 0) return;
    pos = *p;
    if (v > 1001 && v < 1072) {
        id = v;
        b1a = 1;
        b1b = 1;
        data_021f5bf8->add(this);
    } else {
        stop();
        data_021f5bf8->playAt((u16)v, &pos);
        updatePan();
    }
}

void SndPosNode::restart() {
    BOOL start;
    BOOL halt = FALSE;
    void *p = h.p;
    if (notNull(p)) {
        if ((s32)((SeqHeader *)p)->unk_3a != (id % 1000)) {
            start = TRUE;
            halt = start;
        } else {
            start = FALSE;
            halt = start;
        }
    } else {
        start = TRUE;
    }
    if (halt) func_020eda30(&h, 5);
    if (start) func_020edad0(id % 1000, 1, &h);
    updatePan();
}

void SndPosNode::stop() {
    if (data_021f5b80.f4d != 0) {
        func_020eda30(&h, 15);
    } else {
        func_020eda30(&h, 0);
    }
}

BOOL SndPosNode::isFinished() {
    BOOL r = FALSE;
    if (b1b == 0) {
        if (notNull(h.p)) {
            if (b1a != 0) r = FALSE; else r = TRUE;
        } else {
            r = TRUE;
        }
    }
    return r;
}

void SndPosNode::updatePan() {
    s32 a = func_020f48d8(func_020f4904(&pos, 0));
    s32 b = func_020f4718(&pos, 0);
    func_0210a26c(&h, a);
    func_0210a0e8(&h, 255, b);
}

void SndPosNode::playOnce(u32 v, Vec3 *p) {
    if (data_021f5b80.f4d != 0) return;
    id = v;
    pos = *p;
    b1a = 0;
    b1b = 1;
    if (v == 1263) {
        restart();
    } else {
        data_021f5bf8->add(this);
    }
}

void SndPosNode::setPitch(s32 v) {
    return func_02109fd0(&h, 0, v);
}

void SndPosNode::setBgmPan(Vec3 *p) {
    s32 a;
    SndSeqHandle *bh = &data_021f5bbc;
    if (!notNull(bh->p)) return;
    a = func_020f48d8(func_020f4904(p, 0));
    s32 b = func_020f4718(p, 0);
    if (a < 40) a = 40;
    func_0210a26c(bh, a);
    func_0210a0e8(bh, data_0213b200, b);
}

void SndPosNode::release() {
    data_021f5bf8->remove(this);
    func_020eda30(&h, 5);
    func_0210a27c(&h);
}

SndPosList *SndPosList::release() {
    func_0210a27c(&h);
    return this;
}

void SndPosList::init() {
    func_02100444(this, 0);
    func_020eda60(&h);
}

void SndPosList::add(SndPosNode *node) {
    BOOL add = TRUE;
    for (void *p = func_020ee930((void **)&list); p != NULL; p = func_020ee944(&list, p)) {
        if (p == node) {
            add = FALSE;
            break;
        }
    }
    if (add) func_020ee95c(&list, node);
}

void SndPosList::update() {
    for (void *p = func_020ee930((void **)&list); p != NULL; p = func_020ee944(&list, p)) {
        if (((SndPosNode *)p)->isFinished()) {
            ((SndPosNode *)p)->stop();
            func_020ee950(&list, p);
        }
    }
    s32 n = list.num;
    if (n == 1) {
        ((SndPosNode *)func_020ee928((void **)&list))->restart();
    } else if (n == 2) {
        void *t = func_020ee928((void **)&list);
        ((SndPosNode *)t)->restart();
        ((SndPosNode *)func_020ee938(&list, t))->restart();
    } else if (n > 2) {
        void *p = func_020ee930((void **)&list);
        s32 i;
        n -= 2;
        for (i = 0; i < n; i++) {
            ((SndPosNode *)p)->stop();
            p = func_020ee944(&list, p);
        }
        void *t = func_020ee928((void **)&list);
        ((SndPosNode *)t)->restart();
        ((SndPosNode *)func_020ee938(&list, t))->restart();
    }
    for (SndPosNode *p = (SndPosNode *)func_020ee930((void **)&list); p != NULL; p = (SndPosNode *)func_020ee944(&list, p)) {
        p->b1b = 0;
    }
    if (data_021f5b80.f2c->id != 10) return;
    SndSeqHandle *bh = (SndSeqHandle *)(void *)&data_021f5bbc;
    if (!bh) return;
    u32 id = ((SeqHeader *)bh->p)->unk_38;
    if (id < 176 || id > 245) func_0210a2a0(1, 0x107, 5);
}

void SndPosList::remove(SndPosNode *node) {
    for (void *p = func_020ee930((void **)&list); p != NULL; p = func_020ee944(&list, p)) {
        if (p == (void *)node) func_020ee950(&list, node);
    }
}

void SndPosList::playAt(s32 v, Vec3 *p) {
    func_020edad0(v % 1000, 1, &h);
    s32 a = func_020f48d8(func_020f4904(p, 0));
    s32 b = func_020f4718(p, 0);
    func_0210a26c(&h, a);
    func_0210a0e8(&h, 255, b);
}

void Unk_0213b91c::vfunc_00() {
    func_020eda60(&h);
    v = 0;
    flags = 0;
}

void Unk_0213b91c::vfunc_04() {
    func_020eda30(&h, 5);
    func_0210a27c(&h);
}

void Unk_0213b91c::vfunc_08(u32 nv) {
    if (v != nv) {
        flags |= 4;
    } else {
        flags &= ~4;
    }
    v = nv;
    flags |= 2;
    flags |= 1;
}

void Unk_0213b91c::vfunc_0c(u32 nv) {
    if (v != nv) {
        flags |= 4;
    } else {
        flags &= ~4;
    }
    v = nv;
    flags &= ~2;
    flags |= 1;
}

// volume of a sound id at distance volume b (sequence info byte +4 is the base volume, 100 = neutral), clamped to 0..127
extern "C" s32 func_020f35d0(s32 a, s32 b) {
    SeqInfo *inf = func_0210b8a0(a / 1000, a % 1000);
    if (inf == NULL) func_0206d49c();
    s32 v = b + (inf->unk_04 - 100);
    if (v > 0) {
        if (v >= 127) v = 127;
    } else {
        v = 0;
    }
    return v;
}

void Unk_0213b91c::vfunc_10(Vec3 *pos) {
    s32 t;
    s32 w;
    s32 a, b;
    if (data_021f5b80.f4d == 1) return;
    if (flags & 4) {
        if (notNull(h.p)) func_020eda30(&h, 0);
        flags &= ~4;
    }
    if (flags & 1) {
        switch (v) {
        case 2061:
            t = func_020f4904(pos, 1);
            break;
        case 2039:
        case 2040:
        case 2043:
        case 2044:
        case 2046:
        case 2047:
            t = func_020f4904(pos, 2);
            break;
        case 1230:
        case 2041:
        case 2042:
        case 2045:
        case 2048:
        case 2049:
        case 2050:
        case 2051:
        case 2052:
        case 2053:
        case 2058:
            t = 0;
            break;
        case 2054:
        case 2055:
        case 2056:
        case 2057:
        case 2059:
        case 2060:
        default:
            t = func_020f4904(pos, 0);
            break;
        }
        if (t > (func_020f4500()->w10 >> 12)) {
            if (notNull(h.p)) func_020eda30(&h, 0);
            flags &= ~1;
            return;
        }
        t = func_020f48d8(t);
        if (t == 0) {
            if (notNull(h.p)) func_020eda30(&h, 0);
            flags &= ~1;
            return;
        }
        if (!notNull(h.p) || (u16)(v + 0xf7fd) <= 1) {
            if (v == 2103) {
                func_020edad0(v % 1000, v / 1000, &h);
            } else {
                w = func_020f35d0(v, t);
                func_020eda80(&h, -1, -1, w, v / 1000, v % 1000);
            }
        }
        if (notNull(h.p)) {
            if (v != 2103) func_0210a1e8(&h, func_020f35d0(v, t));
            switch (v) {
            case 2059:
                w = func_020f4718(pos, 1);
                break;
            case 2053:
            case 2061:
                w = 0;
                break;
            case 2039:
            case 2040:
            case 2041:
            case 2042:
            case 2043:
            case 2044:
            case 2045:
            case 2046:
            case 2047:
            case 2048:
            case 2049:
            case 2050:
            case 2051:
            case 2052:
                w = func_020f4718(pos, 2);
                break;
            case 2054:
            case 2055:
            case 2056:
            case 2057:
            case 2058:
            case 2060:
            default:
                w = func_020f4718(pos, 0);
                break;
            }
            if (v == 1230 || v == 2058) {
                func_020f47ac(pos->z, &a, &b);
                func_0210a148(&h, 3, a);
                func_0210a148(&h, 12, b);
            } else {
                func_0210a26c(&h, t);
                func_0210a0e8(&h, data_0213b200, w);
            }
        }
        flags &= ~1;
    } else if (!(flags & 2)) {
        if (notNull(h.p)) func_020eda30(&h, 0);
    }
    flags &= ~1;
}

void Unk_0213b938::vfunc_00() {
    Unk_0213b91c::vfunc_00();
}

void Unk_0213b954::vfunc_00() {
    Unk_0213b91c::vfunc_00();
}

void Unk_0213b970::vfunc_00() {
    Unk_0213b91c::vfunc_00();
}

void Unk_0213b970::vfunc_08(u32 nv) {
    Unk_0213b91c::vfunc_08(nv);
}

void Unk_0213b970::vfunc_0c(u32 nv) {
    Unk_0213b91c::vfunc_0c(nv);
}

void Unk_0213b970::vfunc_10(Vec3 *pos) {
    Unk_0213b91c::vfunc_10(pos);
}

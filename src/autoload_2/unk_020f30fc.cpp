// mwcc-flags: -nothumb -O4,p
// RC_020f30fc: autoload_2 0x020f30fc-0x020f44f0 (52 functions) + .data 0x0213b914-0x0213b9d8 (7 vtables) + bss 0x021f5bf8 (autoload_3).
// mwcc 1.2/base, C++, ARM, -O4,p.
// REAL-CLASS shape. ONE source file: the sound-channel classes (G008a part 2) and the sound-effect
// channel objects (RC_020f3e50) are the same file, which this unit supersedes. Evidence: the seven 0x1c-byte vtables 0x0213b914-0x0213b9d8
// are one size run, and the compiler's data order (named objects at their definition, vtables last in reverse declaration order, the
// whole list heapsorted by size; realclass2_work/inv2.py, inv3.py) reproduces the original with all seven in one file, declared in the
// natural order SndSeEmitter, SndSeEmitterKind1, SndSeEmitterKind99, SndSeEmitterKind2, SndEnvChannel, 938, 954, 970 (as below). The four channel
// vtables as a file of their own (with or without the bss word gSndPosList) would need Unk_0213b970 / Unk_0213b954 declared before
// their base SndEnvChannel, which is impossible.
// Every function lands on its original address with the original bytes; every old symbols.txt name stays (aliases.txt adds the compiler's
// names as labels, nothing is renamed). Classes (vtable start / dsd label at +8):
//   SndSeEmitter : SndHandle   base, key function ~SndSeEmitter (D2 f43c8, D0 f43d8, D1 f43fc), C1 f440c / C2 f4424, vtable 0x0213b9a0
//   SndSeEmitterKind1 : SndSeEmitter   main's class: no key function, so its vtable and implicit D1/D0 are LINK-ONCE (ELF binding 13)
//                                in every file that needs them; mwld keeps the first copy (main, 0x020d6f4c) and drops this file's.
//                                Its C1 f4080 / C2 f40c0 and the volume callback f4010 are defined here.
//   SndEnvChannel               sound-environment channel, key function vfunc_00 f3700, vtable 0x0213b914; slots f3700 / f36dc / f369c /
//                                f365c / f3144. No constructor here: main / ov003 / ov004 construct it with inline constructors.
//   Unk_0213b938 / 954 / 970 : SndEnvChannel   overrides that call the base version (tail calls f3138 / f312c / f3120..f30fc),
//                                vtables 0x0213b930 / 0x0213b94c / 0x0213b968
//   SndSeEmitterKind99 : SndSeEmitterKind1   key function ~SndSeEmitterKind99 (D0 f3e7c, D1 f3eb4; D2 unreferenced, dead-stripped), C1 f3ee4, vtable 0x0213b984
//   SndSeEmitterKind2 : SndSeEmitter   = dsd's "Unk_0213b9c4" (C1 label _ZN12Unk_0213b9c4C1Ev): no key function, implicit D1 f44a0 / D0 f44c4 and
//                                its vtable 0x0213b9bc are link-once; this file's copies are the only ones (kept). NOT named Unk_0213b9c4:
//                                ov009's PARTIAL unit defines the GLOBAL extern "C" `_ZN12Unk_0213b9c4D1Ev` (its own Thumb copy at
//                                0x0225b934), and a global + a link-once definition of one name is "Multiply-defined" in mwld (tested).
//   SndPosNode / SndPosList    positional sound sources (no vtable) in the list gSndPosList: f3e14..f3a34 / f3a18..f3724
// The class DECLARATION order (and the bss object gSndPosList being defined) sets the vtable order: keep both.
// SndHandle is a non-polymorphic second base at +4 (mwcc puts the vptr first): the `this ? this + 4 : 0` conversions of the original
// are the implicit derived-to-base conversions when `this` is passed to the extern "C" SndHandle functions of unk_020ede18.cpp, and
// `h ? h - 4 : 0` in f4010 is static_cast<SndSeEmitter *>(h).
#include "types.h"
#include "snd/SndSeEmitterKind99.h"
#include "snd/SndSeEmitterKind1.h"
#include "sys/FndList.h"
#include "snd/SndSeEmitter.h"
#include "game/Vec3.h"


// sound manager gSndMgr (SndMgr, unk_020f0dec.cpp): only the fields read here
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
extern Glob gSndMgr;
extern u8 data_021f5bc0[];

u32 SndMgr_Rand(void *g, u32 n);
void NNS_SndPlayerSetVolume(void *p, s32 v);
void NNS_SndPlayerStopSeqBySeqNo(s32 a, s32 b, u32 c);
void Snd_StartSeqArcEx(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 SndSeGroup_PlayHeld(SndHandle *h, u32 a, u32 b, s32 c, s16 d);
s32 SndSeGroup_Play(SndHandle *h, u32 a, u32 b, s32 c, s16 d);
void SndSeGroup_Update(SndHandle *h, void *src);
void SndSeGroup_Finish(SndHandle *h);
void SndSeGroup_Init(SndHandle *h);
void SndSeGroup_SetEnabled(SndHandle *h, s32 x);
void Snd_SetListenerVolumeCallback(s32 (*f)(void *));
void Snd_SetListenerDistanceCallback(s32 (*f)(void *));
void Snd_SetListenerPanCallback(s32 (*f)(void *));
s32 Snd_ListenerDistanceCallback(void *p);
s32 Snd_ListenerVolumeCallback(void *p);
s32 Snd_ListenerPanCallback(void *p);
}

// main's class SndSeEmitterKind1 (snd/SndSeEmitterKind1.h; vtable _ZTV17SndSeEmitterKind1 in main): its constructor and
// onVolume live here. Its destructor is implicit in the original (link-once D1/D0), so it is defined inline here.
inline SndSeEmitterKind1::~SndSeEmitterKind1() {}


// vtable 0x0213b9bc (dsd label data_0213b9c4)
class SndSeEmitterKind2 : public SndSeEmitter {
public:
    SndSeEmitterKind2();                   // C1 0x020f3e50 (implicit destructor: D1 0x020f44a0, D0 0x020f44c4)
};

class SndPosList;

extern "C" {
extern SndPosList *gSndPosList;
extern SndSeqHandle gSndBgmHandle;
extern u16 gSndPanTrackMask;
void Fatal_Trap(void);
void SndList_InitLink(void **p);
void *SndList_GetLast(void **p);
void *SndList_GetFirst(void **p);
void *SndList_GetPrev(void *list, void *obj);
void *SndList_GetNext(void *list, void *obj);
void SndList_Remove(void *list, void *obj);
void SndList_Append(void *list, void *obj);
void Snd_StopHandle(void *p, u32 a);
void Snd_InitHandle(void *p);
void Snd_StartSeqArc(u16 a, u16 b, void *out);
void NNS_FndInitList(void *list, u16 offset);
void func_02109fd0(void *p, u32 a, s32 b);
void NNS_SndPlayerSetTrackPan(void *p, u32 a, s32 b);
void NNS_SndHandleReleaseSeq(void *p);
SeqInfo *func_0210b8a0(u32 a, u32 b);
s32 Snd_CalcListenerDistance(Vec3 *p, s32 m);
s32 Snd_DistanceToVolume(s32 x);
s32 Snd_CalcPan(Vec3 *p, s32 m);
Pan4500 *Snd_GetVolumeCurve(void);
void Snd_CalcDepthVolumes(s32 z, s32 *a, s32 *b);
void func_0210a1e8(void *p, s32 v);
void func_0210a148(void *p, u32 a, s32 b);
}

// the list of positional sources in use (set by SndPosNode::init; bss 0x021f5bf8, this file's only bss object: the 4-byte object
// after the 0x78-byte SndMgr starts a new file, and only this file's functions use it)
SndPosList *gSndPosList;

static inline BOOL notNull(void *p) {
    return p != NULL;
}

// positional sound source (main's wrappers unk_020039ec.cpp call it by the func_ names), linked into the list gSndPosList
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

// the list of positional sources (gSndPosList points to it)
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
// constructors (vptr stores of _ZTV13SndEnvChannel / 938 / 954 / 970), the key functions are here
class SndEnvChannel {
public:
    virtual void vfunc_00();           // 0x020f3700 reset
    virtual void vfunc_04();           // 0x020f36dc stop and release
    virtual void requestSustained(u32 v);      // 0x020f369c
    virtual void request(u32 v);      // 0x020f365c
    virtual void update(Vec3 *pos);  // 0x020f3144 update

    /* 0x04 */ SndSeqHandle h;
    /* 0x08 */ u16 v;
    /* 0x0a */ u8 flags;
};

// vtable 0x0213b930 (data_0213b938)
class Unk_0213b938 : public SndEnvChannel {
public:
    virtual void vfunc_00();           // 0x020f3138
};

// vtable 0x0213b94c (data_0213b954)
class Unk_0213b954 : public SndEnvChannel {
public:
    virtual void vfunc_00();           // 0x020f312c
};

// vtable 0x0213b968 (data_0213b970)
class Unk_0213b970 : public SndEnvChannel {
public:
    virtual void vfunc_00();           // 0x020f3120
    virtual void requestSustained(u32 v);      // 0x020f3114
    virtual void request(u32 v);      // 0x020f3108
    virtual void update(Vec3 *pos);  // 0x020f30fc
};

// Definitions in descending address order (mwcc emits a file's functions last to first). The compiler-generated functions land by
// themselves: C1 before C2, an out-of-line destructor as D2 D0 D1, a link-once implicit destructor (D1 D0) at the very top.

// install the three listener callbacks of the next file (f48f0 / f48c8 / f4704); plain extern "C" helpers keep their names
extern "C" void Snd_InstallListenerCallbacks(void) {
    Snd_SetListenerDistanceCallback(Snd_ListenerDistanceCallback);
    Snd_SetListenerVolumeCallback(Snd_ListenerVolumeCallback);
    Snd_SetListenerPanCallback(Snd_ListenerPanCallback);
}

// clear the three listener callbacks
extern "C" void Snd_ClearListenerCallbacks(void) {
    Snd_SetListenerDistanceCallback(0);
    Snd_SetListenerVolumeCallback(0);
    Snd_SetListenerPanCallback(0);
}

SndSeEmitter::SndSeEmitter() {
    b3e = 0;
}

SndSeEmitter::~SndSeEmitter() {
}

void SndSeEmitter::init() {
    SndSeGroup_Init(this);
    SndSeGroup_SetEnabled(this, 1);
    h3c = 0;
}

void SndSeEmitter::update(void *src) {
    SndSeGroup_Update(this, src);
}

BOOL SndSeEmitter::playOneShot(s32 id, s32 c, s16 d) {
    s32 x;
    if (b3e == 99 && gSndMgr.f60 != 0) {
        void *p = data_021f5bc0;
        Snd_StartSeqArcEx(p, 10, -1, -1, id / 1000, id % 1000);
        NNS_SndPlayerSetVolume(p, 100);
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
        x += SndMgr_Rand(&gSndMgr, 4);
        if (x == h3c) {
            if (x == id) {
                x++;
            } else if (x == id + 3) {
                x--;
            }
        }
        h3c = x;
    }
    return SndSeGroup_Play(this, id / 1000, x % 1000, c, d);
}

BOOL SndSeEmitter::playHeld(s32 id, s32 c, s16 d) {
    Glob *g = &gSndMgr;
    if (g->f4d == 1) return FALSE;
    if (id == 0x7f6) stopEffects();
    return SndSeGroup_PlayHeld(this, id / 1000, id % 1000, c, d);
}

void SndSeEmitter::stop() {
    SndSeGroup_Finish(this);
}

void SndSeEmitter::stopEffects() {
    s32 i;
    for (i = 82; i < 97; i++) {
        NNS_SndPlayerStopSeqBySeqNo(2, i, 0);
    }
    NNS_SndPlayerStopSeqBySeqNo(2, 54, 0);
}

SndSeEmitterKind1::SndSeEmitterKind1() {
    volCb = onVolume;
    b3e = 1;
    b3f = 0;
}

void SndSeEmitterKind1::onVolume(SndHandle *h, s32 idx) {
    if (gSndMgr.f60 == 0) return;
    void *slot = (u8 *)h + 8 + idx * 12;
    SndSeEmitter *o = static_cast<SndSeEmitter *>(h);
    NNS_SndPlayerSetVolume(slot, o->b40 * 40 / 100);
}

u16 SndSeEmitter::nextAlternateId(u16 s) {
    u32 r = SndMgr_Rand(&gSndMgr, 4);
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

void SndSeEmitter::playAlternate(u16 s) {
    playOneShot(nextAlternateId(s), 127, 0);
}

SndSeEmitterKind99::SndSeEmitterKind99() {
    b3e = 99;
}

SndSeEmitterKind99::~SndSeEmitterKind99() {
}

SndSeEmitterKind2::SndSeEmitterKind2() {
    b3e = 2;
}

void SndPosNode::init(SndPosList *list) {
    gSndPosList = list;
    id = 0;
    b1a = b1b = 0;
    SndList_InitLink((void **)this);
    Snd_InitHandle(&h);
}

void SndPosNode::play(s32 v, Vec3 *p) {
    if (gSndMgr.f4d != 0) return;
    pos = *p;
    if (v > 1001 && v < 1072) {
        id = v;
        b1a = 1;
        b1b = 1;
        gSndPosList->add(this);
    } else {
        stop();
        gSndPosList->playAt((u16)v, &pos);
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
    if (halt) Snd_StopHandle(&h, 5);
    if (start) Snd_StartSeqArc(id % 1000, 1, &h);
    updatePan();
}

void SndPosNode::stop() {
    if (gSndMgr.f4d != 0) {
        Snd_StopHandle(&h, 15);
    } else {
        Snd_StopHandle(&h, 0);
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
    s32 a = Snd_DistanceToVolume(Snd_CalcListenerDistance(&pos, 0));
    s32 b = Snd_CalcPan(&pos, 0);
    NNS_SndPlayerSetVolume(&h, a);
    NNS_SndPlayerSetTrackPan(&h, 255, b);
}

void SndPosNode::playOnce(u32 v, Vec3 *p) {
    if (gSndMgr.f4d != 0) return;
    id = v;
    pos = *p;
    b1a = 0;
    b1b = 1;
    if (v == 1263) {
        restart();
    } else {
        gSndPosList->add(this);
    }
}

void SndPosNode::setPitch(s32 v) {
    return func_02109fd0(&h, 0, v);
}

void SndPosNode::setBgmPan(Vec3 *p) {
    s32 a;
    SndSeqHandle *bh = &gSndBgmHandle;
    if (!notNull(bh->p)) return;
    a = Snd_DistanceToVolume(Snd_CalcListenerDistance(p, 0));
    s32 b = Snd_CalcPan(p, 0);
    if (a < 40) a = 40;
    NNS_SndPlayerSetVolume(bh, a);
    NNS_SndPlayerSetTrackPan(bh, gSndPanTrackMask, b);
}

void SndPosNode::release() {
    gSndPosList->remove(this);
    Snd_StopHandle(&h, 5);
    NNS_SndHandleReleaseSeq(&h);
}

SndPosList *SndPosList::release() {
    NNS_SndHandleReleaseSeq(&h);
    return this;
}

void SndPosList::init() {
    NNS_FndInitList(this, 0);
    Snd_InitHandle(&h);
}

void SndPosList::add(SndPosNode *node) {
    BOOL add = TRUE;
    for (void *p = SndList_GetFirst((void **)&list); p != NULL; p = SndList_GetNext(&list, p)) {
        if (p == node) {
            add = FALSE;
            break;
        }
    }
    if (add) SndList_Append(&list, node);
}

void SndPosList::update() {
    for (void *p = SndList_GetFirst((void **)&list); p != NULL; p = SndList_GetNext(&list, p)) {
        if (((SndPosNode *)p)->isFinished()) {
            ((SndPosNode *)p)->stop();
            SndList_Remove(&list, p);
        }
    }
    s32 n = list.num;
    if (n == 1) {
        ((SndPosNode *)SndList_GetLast((void **)&list))->restart();
    } else if (n == 2) {
        void *t = SndList_GetLast((void **)&list);
        ((SndPosNode *)t)->restart();
        ((SndPosNode *)SndList_GetPrev(&list, t))->restart();
    } else if (n > 2) {
        void *p = SndList_GetFirst((void **)&list);
        s32 i;
        n -= 2;
        for (i = 0; i < n; i++) {
            ((SndPosNode *)p)->stop();
            p = SndList_GetNext(&list, p);
        }
        void *t = SndList_GetLast((void **)&list);
        ((SndPosNode *)t)->restart();
        ((SndPosNode *)SndList_GetPrev(&list, t))->restart();
    }
    for (SndPosNode *p = (SndPosNode *)SndList_GetFirst((void **)&list); p != NULL; p = (SndPosNode *)SndList_GetNext(&list, p)) {
        p->b1b = 0;
    }
    if (gSndMgr.f2c->id != 10) return;
    SndSeqHandle *bh = (SndSeqHandle *)(void *)&gSndBgmHandle;
    if (!bh) return;
    u32 id = ((SeqHeader *)bh->p)->unk_38;
    if (id < 176 || id > 245) NNS_SndPlayerStopSeqBySeqNo(1, 0x107, 5);
}

void SndPosList::remove(SndPosNode *node) {
    for (void *p = SndList_GetFirst((void **)&list); p != NULL; p = SndList_GetNext(&list, p)) {
        if (p == (void *)node) SndList_Remove(&list, node);
    }
}

void SndPosList::playAt(s32 v, Vec3 *p) {
    Snd_StartSeqArc(v % 1000, 1, &h);
    s32 a = Snd_DistanceToVolume(Snd_CalcListenerDistance(p, 0));
    s32 b = Snd_CalcPan(p, 0);
    NNS_SndPlayerSetVolume(&h, a);
    NNS_SndPlayerSetTrackPan(&h, 255, b);
}

void SndEnvChannel::vfunc_00() {
    Snd_InitHandle(&h);
    v = 0;
    flags = 0;
}

void SndEnvChannel::vfunc_04() {
    Snd_StopHandle(&h, 5);
    NNS_SndHandleReleaseSeq(&h);
}

void SndEnvChannel::requestSustained(u32 nv) {
    if (v != nv) {
        flags |= 4;
    } else {
        flags &= ~4;
    }
    v = nv;
    flags |= 2;
    flags |= 1;
}

void SndEnvChannel::request(u32 nv) {
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
extern "C" s32 Snd_CalcSeVolume(s32 a, s32 b) {
    SeqInfo *inf = func_0210b8a0(a / 1000, a % 1000);
    if (inf == NULL) Fatal_Trap();
    s32 v = b + (inf->unk_04 - 100);
    if (v > 0) {
        if (v >= 127) v = 127;
    } else {
        v = 0;
    }
    return v;
}

void SndEnvChannel::update(Vec3 *pos) {
    s32 t;
    s32 w;
    s32 a, b;
    if (gSndMgr.f4d == 1) return;
    if (flags & 4) {
        if (notNull(h.p)) Snd_StopHandle(&h, 0);
        flags &= ~4;
    }
    if (flags & 1) {
        switch (v) {
        case 2061:
            t = Snd_CalcListenerDistance(pos, 1);
            break;
        case 2039:
        case 2040:
        case 2043:
        case 2044:
        case 2046:
        case 2047:
            t = Snd_CalcListenerDistance(pos, 2);
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
            t = Snd_CalcListenerDistance(pos, 0);
            break;
        }
        if (t > (Snd_GetVolumeCurve()->w10 >> 12)) {
            if (notNull(h.p)) Snd_StopHandle(&h, 0);
            flags &= ~1;
            return;
        }
        t = Snd_DistanceToVolume(t);
        if (t == 0) {
            if (notNull(h.p)) Snd_StopHandle(&h, 0);
            flags &= ~1;
            return;
        }
        if (!notNull(h.p) || (u16)(v + 0xf7fd) <= 1) {
            if (v == 2103) {
                Snd_StartSeqArc(v % 1000, v / 1000, &h);
            } else {
                w = Snd_CalcSeVolume(v, t);
                Snd_StartSeqArcEx(&h, -1, -1, w, v / 1000, v % 1000);
            }
        }
        if (notNull(h.p)) {
            if (v != 2103) func_0210a1e8(&h, Snd_CalcSeVolume(v, t));
            switch (v) {
            case 2059:
                w = Snd_CalcPan(pos, 1);
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
                w = Snd_CalcPan(pos, 2);
                break;
            case 2054:
            case 2055:
            case 2056:
            case 2057:
            case 2058:
            case 2060:
            default:
                w = Snd_CalcPan(pos, 0);
                break;
            }
            if (v == 1230 || v == 2058) {
                Snd_CalcDepthVolumes(pos->z, &a, &b);
                func_0210a148(&h, 3, a);
                func_0210a148(&h, 12, b);
            } else {
                NNS_SndPlayerSetVolume(&h, t);
                NNS_SndPlayerSetTrackPan(&h, gSndPanTrackMask, w);
            }
        }
        flags &= ~1;
    } else if (!(flags & 2)) {
        if (notNull(h.p)) Snd_StopHandle(&h, 0);
    }
    flags &= ~1;
}

void Unk_0213b938::vfunc_00() {
    SndEnvChannel::vfunc_00();
}

void Unk_0213b954::vfunc_00() {
    SndEnvChannel::vfunc_00();
}

void Unk_0213b970::vfunc_00() {
    SndEnvChannel::vfunc_00();
}

void Unk_0213b970::requestSustained(u32 nv) {
    SndEnvChannel::requestSustained(nv);
}

void Unk_0213b970::request(u32 nv) {
    SndEnvChannel::request(nv);
}

void Unk_0213b970::update(Vec3 *pos) {
    SndEnvChannel::update(pos);
}

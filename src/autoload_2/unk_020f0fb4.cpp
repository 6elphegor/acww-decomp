// mwcc-flags: -nothumb -O4,p
// RC_020f0fb4: autoload_2 0x020f0fb4-0x020f30fc (154 functions) + .data 0x0213b2c4-0x0213b914 (data_0213b2c4 + 31 vtables).
// mwcc 1.2/base, C++, ARM, -O4,p. REAL-CLASS shape: the scene/task class family, the whole source
// file (G007a + the first part of G008a). Generated from the earlier matched sources.
// Classes (named after the dsd vtable label, vtable object = label - 8):
//   Unk_0213b8e8              base: C2 f3078 (C1 unreferenced, dead-stripped), ~ D2 f2fc8 / D0 f3000 / D1 f3040, virtuals vfunc_08..28,
//                             resource helpers f2aec..f2cd4, f2eac. vfunc_24 (slot 9) is DEFINED IN MAIN: the empty Thumb function
//                             func_02003f78 of src/main/unk_020039ec.cpp (aliases.txt gives it the name _ZN12Unk_0213b8e88vfunc_24Ei).
//   SndScene01 : base       mid-level base: C1 f2a3c / C2 f2a94 (both kept: C1 is called from outside, C2 by the derived ctors),
//                             ~ D2 f29c8 / D0 f29ec / D1 f2a18, overrides vfunc_0c f2968, vfunc_1c f2938, vfunc_20 f2910, vfunc_24 f28c0
//   26 + 3 subclasses         per class: ctor (C1; C2 unreferenced), ~ (D0, D1; D2 unreferenced except for the two bases), vfunc_0c
//                             (the scene's INIT) and a few overrides (0x0213b338: sub-object at +8, vfunc_10/1c/20/28; 0x0213b610:
//                             sub-object at +8, vfunc_10/28; 0x0213b7e4: vfunc_14). The sub-objects at +8 are objects of the BGM
//                             animation file (G011, still PARTIAL): raw storage here, constructed/destroyed by explicit calls of their
//                             extern "C" functions (f833c/f831c, f80d8/f80ac), which is the same code as a member object.
// Class DECLARATION order (base, mid, then 0x0213b2d0, 574, 338, 36c, ..., 880; see realclass2_work/inv.py) sets the vtable order: mwcc
// creates the vtables last, in reverse declaration order, and heapsorts the file's data by size. Keep it.
// Every function lands on its original address with the original bytes; every old func_ name stays (aliases.txt), nothing is renamed
// except the vtables (renames.txt, _ZTV at the real start).
#include "types.h"
#include "snd/Player.h"
#include "snd/SndSeBytes4.h"



struct F30 {
    u8 pad[0x3c];
    u8 f3c;
};

class Unk_0213b8e8;

// sound manager gSndMgr (SndMgr, unk_020f0dec.cpp)
struct Glob {
    /* 0x00 */ u8 pad0[0x28];
    /* 0x28 */ void *f28;
    /* 0x2c */ Unk_0213b8e8 *f2c;
    /* 0x30 */ F30 *f30;
    /* 0x34 */ u8 pad1[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad2[0x14];
    /* 0x62 */ u8 f62;
    /* 0x63 */ u8 pad3[0x10];
    /* 0x73 */ u8 f73;
};

// BGM animation object (sub-object at +8 of two scene classes; functions in the G011 file, still PARTIAL)
class SubObj {
public:
    virtual void vfunc_00();
};

extern "C" {
extern Glob gSndMgr;
extern Player gSndSeSystem;

void _ZdlPv(void *p);
void *Snd_GetHeap(void);
void *Snd_GetHeapLevel(void);
void *Snd_RestoreHeapLevel(u32 a);
BOOL SndSeSystem_Setup(Player *o, u32 a, u32 b, Bytes4 s);
void SndSeSystem_Shutdown(Player *p, s32 v);
void NNS_SndHeapSaveState(void *p);
void NNS_SndHeapLoadState(void *a, u32 b);
void *func_0210bd4c(void *a);
void NNS_SndArcLoadWaveArc(s32 a, void *b);
void NNS_SndPlayerCreateHeap(s32 a, void *b, u32 c);
void NNS_SndPlayerSetPlayerVolume(s32 a, s32 b);
void NNS_SndPlayerStopSeqByPlayerNo(s32 a, s32 b);
void SndMgr_StartVolumeFadeIn(void);
void SndMgr_UpdateVolumeCurve(Glob *g);
void SndMgr_SetPlayerVolumes(Glob *g, s32 a, s32 b);
void SndMgr_LoadBank(Glob *g, s32 v);
void SndMgr_SetVoiceType(Glob *g);
#define SndMgr_stopAll _ZN6SndMgr7stopAllEv
void SndMgr_stopAll(Glob *g);
#define SndMgr_startOutputEffect _ZN6SndMgr17startOutputEffectEv
void SndMgr_startOutputEffect(Glob *g);
void Snd_ClearListenerCallbacks(void);
void Snd_InstallListenerCallbacks(void);
void func_020f44f0(s32 v);
void MelodyPlayer_SetInstrument(F30 *a, s32 b);
void MelodyPlayer_StopTrackB(F30 *v);
#define BgmBeatSync_setEnable _ZN11BgmBeatSync9setEnableEh
void BgmBeatSync_setEnable(void *p, s32 v);
#define BgmBeatSync_dtor _ZN11BgmBeatSyncD1Ev
void BgmBeatSync_dtor(void *p);
#define BgmBeatSync_ctor _ZN11BgmBeatSyncC1Ev
void BgmBeatSync_ctor(void *p);
#define BgmTempoTracker_setMode _ZN15BgmTempoTracker7setModeEh
void BgmTempoTracker_setMode(void *p, s32 v);
#define BgmTempoTracker_dtor _ZN15BgmTempoTrackerD1Ev
void BgmTempoTracker_dtor(void *p);
#define BgmTempoTracker_ctor _ZN15BgmTempoTrackerC1Ev
void BgmTempoTracker_ctor(void *p);
}

// colour passed by value to SndSeSystem_Setup (byte 0 is replaced by the caller's argument)
extern "C" Bytes4 data_0213b2c4 = {0x00, 0x02, 0xff, 0x00};

// vtable 0x0213b8e0 (dsd label data_0213b8e8)
class Unk_0213b8e8 {
public:
    Unk_0213b8e8();                     // C2 0x020f3078 (C1 unreferenced, dead-stripped)
    virtual ~Unk_0213b8e8();            // D2 0x020f2fc8, D0 0x020f3000, D1 0x020f3040
    virtual void vfunc_08();            // 0x020f2fc4
    virtual void load();            // 0x020f2fc0
    virtual void update();            // 0x020f2fac
    virtual void fadeOutAll();            // 0x020f2f6c
    virtual void unload();            // 0x020f2e58
    virtual void beginTalk(s32 a);       // 0x020f2dec
    virtual void endTalk();            // 0x020f2dcc
    virtual void vfunc_24(s32 a);       // main func_02003f78 (empty Thumb function, defined in main)
    virtual void onBgmChange(u32 a, u32 c); // 0x020f2dc8
    void stopPlayers(s32 v);              // 0x020f2eac
    void setupHeaps(u32 a, s32 b);           // 0x020f2cd4
    void createPlayer4Heap();                   // 0x020f2ca8
    void createPlayer11Heaps(s32 n);             // 0x020f2c58
    void createPlayer5Heap();                   // 0x020f2c2c
    void createPlayer6Heaps();                   // 0x020f2be4
    void createPlayer17Heaps();                  // 0x020f2b9c
    void createPlayer18And19Heaps();                  // 0x020f2b60
    void createPlayer13Heap();                  // 0x020f2b34
    void createPlayer12Heaps();                  // 0x020f2aec

    /* 0x04 */ s8 id;
    /* 0x05 */ u8 f5;
    /* 0x06 */ u8 f6;
};

// vtable 0x0213b8ac (dsd label data_0213b8b4)
class SndScene01 : public Unk_0213b8e8 {
public:
    SndScene01();                     // C1 0x020f2a3c, C2 0x020f2a94
    virtual ~SndScene01();            // D2 0x020f29c8, D0 0x020f29ec, D1 0x020f2a18
    virtual void load();            // 0x020f2968
    virtual void beginTalk(s32 a);       // 0x020f2938
    virtual void endTalk();            // 0x020f2910
    virtual void vfunc_24(s32 a);       // 0x020f28c0
};

// vtable 0x0213b2c8 (dsd label data_0213b2d0)
class SndScene02 : public SndScene01 {
public:
    SndScene02();                     // C1 0x020f2878 (C2 unreferenced, dead-stripped)
    virtual ~SndScene02();            // D0 0x020f2828, D1 0x020f2854
    virtual void load();            // 0x020f27d0
};

// vtable 0x0213b56c (dsd label data_0213b574)
class SndScene03 : public SndScene01 {
public:
    SndScene03();                     // C1 0x020f2788 (C2 unreferenced, dead-stripped)
    virtual ~SndScene03();            // D0 0x020f2738, D1 0x020f2764
    virtual void load();            // 0x020f26d8
};

// vtable 0x0213b330 (dsd label data_0213b338)
class SndScene10 : public Unk_0213b8e8 {
public:
    SndScene10();                     // C1 0x020f269c (C2 unreferenced, dead-stripped)
    virtual ~SndScene10();            // D0 0x020f2634, D1 0x020f266c
    virtual void load();            // 0x020f2568
    virtual void update();            // 0x020f2544
    virtual void beginTalk(s32 a);       // 0x020f24fc
    virtual void endTalk();            // 0x020f24c0
    virtual void onBgmChange(u32 a, u32 c); // 0x020f2534

    /* 0x08 */ u32 sub[5];          // BGM animation object (G011 file; has a vptr, so word-aligned)
    /* 0x1c */ u8 state;
    /* 0x1d */ u8 f1d;
};

// vtable 0x0213b364 (dsd label data_0213b36c)
class SndScene19 : public Unk_0213b8e8 {
public:
    SndScene19();                     // C1 0x020f2494 (C2 unreferenced, dead-stripped)
    virtual ~SndScene19();            // D0 0x020f2444, D1 0x020f2470
    virtual void load();            // 0x020f23fc
};

// vtable 0x0213b398 (dsd label data_0213b3a0)
class SndScene20 : public Unk_0213b8e8 {
public:
    SndScene20();                     // C1 0x020f23d0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene20();            // D0 0x020f2380, D1 0x020f23ac
    virtual void load();            // 0x020f2338
};

// vtable 0x0213b3cc (dsd label data_0213b3d4)
class SndScene21 : public Unk_0213b8e8 {
public:
    SndScene21();                     // C1 0x020f230c (C2 unreferenced, dead-stripped)
    virtual ~SndScene21();            // D0 0x020f22bc, D1 0x020f22e8
    virtual void load();            // 0x020f2274
};

// vtable 0x0213b400 (dsd label data_0213b408)
class SndScene22 : public Unk_0213b8e8 {
public:
    SndScene22();                     // C1 0x020f2248 (C2 unreferenced, dead-stripped)
    virtual ~SndScene22();            // D0 0x020f21f8, D1 0x020f2224
    virtual void load();            // 0x020f21b0
};

// vtable 0x0213b434 (dsd label data_0213b43c)
class SndScene23 : public Unk_0213b8e8 {
public:
    SndScene23();                     // C1 0x020f2184 (C2 unreferenced, dead-stripped)
    virtual ~SndScene23();            // D0 0x020f2134, D1 0x020f2160
    virtual void load();            // 0x020f20dc
};

// vtable 0x0213b468 (dsd label data_0213b470)
class SndScene24 : public Unk_0213b8e8 {
public:
    SndScene24();                     // C1 0x020f20b0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene24();            // D0 0x020f2060, D1 0x020f208c
    virtual void load();            // 0x020f2018
};

// vtable 0x0213b49c (dsd label data_0213b4a4)
class SndScene30 : public Unk_0213b8e8 {
public:
    SndScene30();                     // C1 0x020f1fec (C2 unreferenced, dead-stripped)
    virtual ~SndScene30();            // D0 0x020f1f9c, D1 0x020f1fc8
    virtual void load();            // 0x020f1f44
};

// vtable 0x0213b4d0 (dsd label data_0213b4d8)
class SndScene31 : public Unk_0213b8e8 {
public:
    SndScene31();                     // C1 0x020f1f18 (C2 unreferenced, dead-stripped)
    virtual ~SndScene31();            // D0 0x020f1ec8, D1 0x020f1ef4
    virtual void load();            // 0x020f1e70
};

// vtable 0x0213b504 (dsd label data_0213b50c)
class SndScene32 : public Unk_0213b8e8 {
public:
    SndScene32();                     // C1 0x020f1e44 (C2 unreferenced, dead-stripped)
    virtual ~SndScene32();            // D0 0x020f1df4, D1 0x020f1e20
    virtual void load();            // 0x020f1d9c
};

// vtable 0x0213b538 (dsd label data_0213b540)
class SndScene33 : public Unk_0213b8e8 {
public:
    SndScene33();                     // C1 0x020f1d70 (C2 unreferenced, dead-stripped)
    virtual ~SndScene33();            // D0 0x020f1d20, D1 0x020f1d4c
    virtual void load();            // 0x020f1cc8
};

// vtable 0x0213b2fc (dsd label data_0213b304)
class SndScene34 : public Unk_0213b8e8 {
public:
    SndScene34();                     // C1 0x020f1c9c (C2 unreferenced, dead-stripped)
    virtual ~SndScene34();            // D0 0x020f1c4c, D1 0x020f1c78
    virtual void load();            // 0x020f1bf4
};

// vtable 0x0213b5a0 (dsd label data_0213b5a8)
class SndScene35 : public Unk_0213b8e8 {
public:
    SndScene35();                     // C1 0x020f1bc8 (C2 unreferenced, dead-stripped)
    virtual ~SndScene35();            // D0 0x020f1b78, D1 0x020f1ba4
    virtual void load();            // 0x020f1b30
};

// vtable 0x0213b5d4 (dsd label data_0213b5dc)
class SndScene40 : public Unk_0213b8e8 {
public:
    SndScene40();                     // C1 0x020f1b04 (C2 unreferenced, dead-stripped)
    virtual ~SndScene40();            // D0 0x020f1ab4, D1 0x020f1ae0
    virtual void load();            // 0x020f1a6c
};

// vtable 0x0213b608 (dsd label data_0213b610)
class SndScene41 : public Unk_0213b8e8 {
public:
    SndScene41();                     // C1 0x020f1a38 (C2 unreferenced, dead-stripped)
    virtual ~SndScene41();            // D0 0x020f19d0, D1 0x020f1a08
    virtual void load();            // 0x020f1988
    virtual void update();            // 0x020f1964
    virtual void onBgmChange(u32 a, u32 c); // 0x020f191c

    /* 0x08 */ u32 sub[5];          // BGM animation object (G011 file; has a vptr, so word-aligned)
};

// vtable 0x0213b63c (dsd label data_0213b644)
class SndScene42 : public Unk_0213b8e8 {
public:
    SndScene42();                     // C1 0x020f18f0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene42();            // D0 0x020f18a0, D1 0x020f18cc
    virtual void load();            // 0x020f1858
};

// vtable 0x0213b670 (dsd label data_0213b678)
class SndScene43 : public Unk_0213b8e8 {
public:
    SndScene43();                     // C1 0x020f182c (C2 unreferenced, dead-stripped)
    virtual ~SndScene43();            // D0 0x020f17dc, D1 0x020f1808
    virtual void load();            // 0x020f1794
};

// vtable 0x0213b6a4 (dsd label data_0213b6ac)
class SndScene44 : public Unk_0213b8e8 {
public:
    SndScene44();                     // C1 0x020f1768 (C2 unreferenced, dead-stripped)
    virtual ~SndScene44();            // D0 0x020f1718, D1 0x020f1744
    virtual void load();            // 0x020f16d0
};

// vtable 0x0213b6d8 (dsd label data_0213b6e0)
class SndScene45 : public Unk_0213b8e8 {
public:
    SndScene45();                     // C1 0x020f16a4 (C2 unreferenced, dead-stripped)
    virtual ~SndScene45();            // D0 0x020f1654, D1 0x020f1680
    virtual void load();            // 0x020f160c
};

// vtable 0x0213b70c (dsd label data_0213b714)
class SndScene46 : public Unk_0213b8e8 {
public:
    SndScene46();                     // C1 0x020f15e0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene46();            // D0 0x020f1590, D1 0x020f15bc
    virtual void load();            // 0x020f1548
};

// vtable 0x0213b740 (dsd label data_0213b748)
class SndScene47 : public Unk_0213b8e8 {
public:
    SndScene47();                     // C1 0x020f151c (C2 unreferenced, dead-stripped)
    virtual ~SndScene47();            // D0 0x020f14cc, D1 0x020f14f8
    virtual void load();            // 0x020f1484
};

// vtable 0x0213b774 (dsd label data_0213b77c)
class SndScene48 : public Unk_0213b8e8 {
public:
    SndScene48();                     // C1 0x020f1458 (C2 unreferenced, dead-stripped)
    virtual ~SndScene48();            // D0 0x020f1408, D1 0x020f1434
    virtual void load();            // 0x020f13c0
};

// vtable 0x0213b7a8 (dsd label data_0213b7b0)
class SndScene50 : public Unk_0213b8e8 {
public:
    SndScene50();                     // C1 0x020f138c (C2 unreferenced, dead-stripped)
    virtual ~SndScene50();            // D0 0x020f133c, D1 0x020f1368
    virtual void load();            // 0x020f12f4
};

// vtable 0x0213b7dc (dsd label data_0213b7e4)
class SndScene51 : public Unk_0213b8e8 {
public:
    SndScene51();                     // C1 0x020f12c8 (C2 unreferenced, dead-stripped)
    virtual ~SndScene51();            // D0 0x020f1278, D1 0x020f12a4
    virtual void load();            // 0x020f1238
    virtual void fadeOutAll();            // 0x020f1200
};

// vtable 0x0213b810 (dsd label data_0213b818)
class SndScene52 : public Unk_0213b8e8 {
public:
    SndScene52();                     // C1 0x020f11d4 (C2 unreferenced, dead-stripped)
    virtual ~SndScene52();            // D0 0x020f1184, D1 0x020f11b0
    virtual void load();            // 0x020f1144
};

// vtable 0x0213b844 (dsd label data_0213b84c)
class SndScene60 : public SndScene01 {
public:
    SndScene60();                     // C1 0x020f1118 (C2 unreferenced, dead-stripped)
    virtual ~SndScene60();            // D0 0x020f10c8, D1 0x020f10f4
    virtual void load();            // 0x020f1070
};

// vtable 0x0213b878 (dsd label data_0213b880)
class SndScene99 : public Unk_0213b8e8 {
public:
    SndScene99();                     // C1 0x020f1044 (C2 unreferenced, dead-stripped)
    virtual ~SndScene99();            // D0 0x020f0ff4, D1 0x020f1020
    virtual void load();            // 0x020f0fb4
};

// Definitions in descending address order (mwcc emits a file's functions last to first).

Unk_0213b8e8::Unk_0213b8e8() {
    gSndMgr.f2c = this;
    gSndMgr.f4d = 0;
    gSndMgr.f30->f3c = 0;
    if (gSndMgr.f30 != 0) MelodyPlayer_SetInstrument(gSndMgr.f30, 210);
    SndMgr_SetPlayerVolumes(&gSndMgr, 127, 127);
    NNS_SndPlayerSetPlayerVolume(15, 100);
    id = -1;
    f5 = 0;
    f6 = 0;
    func_020f44f0(0);
}

Unk_0213b8e8::~Unk_0213b8e8() {
    gSndMgr.f2c = 0;
    NNS_SndHeapLoadState(gSndMgr.f28, 0);
}

void Unk_0213b8e8::vfunc_08() {
}

void Unk_0213b8e8::load() {
}

void Unk_0213b8e8::update() {
    return SndMgr_UpdateVolumeCurve(&gSndMgr);
}

void Unk_0213b8e8::fadeOutAll() {
    MelodyPlayer_StopTrackB(gSndMgr.f30);
    gSndMgr.f4d = 1;
    stopPlayers(15);
    f5 = 1;
}

void Unk_0213b8e8::stopPlayers(s32 v) {
    NNS_SndPlayerStopSeqByPlayerNo(11, v);
    NNS_SndPlayerStopSeqByPlayerNo(2, v);
    NNS_SndPlayerStopSeqByPlayerNo(4, v);
    NNS_SndPlayerStopSeqByPlayerNo(5, v);
    NNS_SndPlayerStopSeqByPlayerNo(6, v);
    NNS_SndPlayerStopSeqByPlayerNo(7, v);
    NNS_SndPlayerStopSeqByPlayerNo(8, v);
    NNS_SndPlayerStopSeqByPlayerNo(9, v);
    NNS_SndPlayerStopSeqByPlayerNo(10, v);
    NNS_SndPlayerStopSeqByPlayerNo(12, v);
    NNS_SndPlayerStopSeqByPlayerNo(15, v);
    NNS_SndPlayerStopSeqByPlayerNo(16, v);
    NNS_SndPlayerStopSeqByPlayerNo(17, v);
    NNS_SndPlayerStopSeqByPlayerNo(18, v);
    NNS_SndPlayerStopSeqByPlayerNo(19, v);
}

void Unk_0213b8e8::unload() {
    Snd_ClearListenerCallbacks();
    void *t = Snd_GetHeap();
    SndSeSystem_Shutdown(&gSndSeSystem, 1);
    if (gSndMgr.f62 != 0) return;
    NNS_SndHeapLoadState(t, 1);
    SndMgr_stopAll(&gSndMgr);
}

void Unk_0213b8e8::beginTalk(s32 a) {
    s32 r;
    switch (a) {
    case 0:
    case 4:
        r = 133;
        break;
    case 1:
    case 3:
        r = 134;
        break;
    case 2:
        r = 135;
        break;
    }
    SndMgr_SetVoiceType(&gSndMgr);
    SndMgr_LoadBank(&gSndMgr, r);
    f6 = 1;
}

void Unk_0213b8e8::endTalk() {
    Snd_RestoreHeapLevel((u32)Snd_GetHeapLevel());
    f6 = 0;
}

void Unk_0213b8e8::onBgmChange(u32 a, u32 c) {
}

void Unk_0213b8e8::setupHeaps(u32 a, s32 b) {
    void *t = Snd_GetHeap();
    if (gSndMgr.f62 == 0) {
        SndMgr_startOutputEffect(&gSndMgr);
        NNS_SndPlayerCreateHeap(0, t, a);
        NNS_SndHeapSaveState(t);
    }
    Bytes4 q = data_0213b2c4;
    q.b0 = b;
    gSndSeSystem.groupParams = q;
    SndSeSystem_Setup(&gSndSeSystem, 0, 0, q);
    Snd_InstallListenerCallbacks();
    NNS_SndHeapSaveState(t);
}

void Unk_0213b8e8::createPlayer4Heap() {
    NNS_SndPlayerCreateHeap(4, Snd_GetHeap(), 0x206c);
}

void Unk_0213b8e8::createPlayer11Heaps(s32 n) {
    void *t = Snd_GetHeap();
    for (s32 i = 0; i < n; i++) {
        NNS_SndPlayerCreateHeap(11, t, 0x650c);
    }
}

void Unk_0213b8e8::createPlayer5Heap() {
    NNS_SndPlayerCreateHeap(5, Snd_GetHeap(), 0x31ac);
}

void Unk_0213b8e8::createPlayer6Heaps() {
    void *t = Snd_GetHeap();
    for (s32 i = 0; i < 2; i++) {
        NNS_SndPlayerCreateHeap(6, t, 0x7a4c);
    }
}

void Unk_0213b8e8::createPlayer17Heaps() {
    void *t = Snd_GetHeap();
    for (s32 i = 0; i < 4; i++) {
        NNS_SndPlayerCreateHeap(17, t, 0x356c);
    }
}

void Unk_0213b8e8::createPlayer18And19Heaps() {
    void *t = Snd_GetHeap();
    NNS_SndPlayerCreateHeap(18, t, 0x5ecc);
    NNS_SndPlayerCreateHeap(19, t, 0x46bc);
}

void Unk_0213b8e8::createPlayer13Heap() {
    NNS_SndPlayerCreateHeap(13, Snd_GetHeap(), 0x1f4c);
}

void Unk_0213b8e8::createPlayer12Heaps() {
    void *t = Snd_GetHeap();
    for (s32 i = 0; i < 2; i++) {
        NNS_SndPlayerCreateHeap(12, t, 0x8cc);
    }
}

SndScene01::SndScene01() {
    if (gSndMgr.f30 != 0) MelodyPlayer_SetInstrument(gSndMgr.f30, 209);
    id = 1;
    func_020f44f0(1);
    gSndMgr.f73 = 0;
}

SndScene01::~SndScene01() {
}

void SndScene01::load() {
    setupHeaps(0x21ef8, 1);
    createPlayer11Heaps(3);
    createPlayer13Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    SndMgr_LoadBank(&gSndMgr, 143);
    gSndMgr.f62 = 0;
}

void SndScene01::beginTalk(s32 a) {
    Snd_RestoreHeapLevel((u32)Snd_GetHeapLevel());
    Unk_0213b8e8::beginTalk(a);
}

void SndScene01::endTalk() {
    Unk_0213b8e8::endTalk();
    SndMgr_LoadBank(&gSndMgr, 143);
}

void SndScene01::vfunc_24(s32 a) {
    Snd_RestoreHeapLevel((u32)Snd_GetHeapLevel());
    if (a != 0) {
        if (a == 1) {
            SndMgr_LoadBank(&gSndMgr, 178);
        }
    } else {
        SndMgr_LoadBank(&gSndMgr, 143);
    }
}

SndScene02::SndScene02() {
    if (gSndMgr.f30 != 0) MelodyPlayer_SetInstrument(gSndMgr.f30, 209);
    id = 2;
}

SndScene02::~SndScene02() {
}

void SndScene02::load() {
    setupHeaps(0x1f340, 2);
    createPlayer11Heaps(2);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    SndMgr_LoadBank(&gSndMgr, 143);
    gSndMgr.f62 = 0;
}

SndScene03::SndScene03() {
    if (gSndMgr.f30 != 0) MelodyPlayer_SetInstrument(gSndMgr.f30, 209);
    id = 3;
}

SndScene03::~SndScene03() {
}

void SndScene03::load() {
    setupHeaps(0x21ef8, 3);
    createPlayer11Heaps(2);
    createPlayer13Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    SndMgr_LoadBank(&gSndMgr, 143);
    gSndMgr.f62 = 0;
}

SndScene10::SndScene10() {
    BgmTempoTracker_ctor(sub);
    id = 10;
    state = 0;
}

SndScene10::~SndScene10() {
    BgmTempoTracker_dtor(sub);
}

void SndScene10::load() {
    setupHeaps(0x10ea0, 5);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer17Heaps();
    createPlayer18And19Heaps();
    void *t = Snd_GetHeap();
    NNS_SndArcLoadWaveArc(9, t);
    NNS_SndHeapSaveState(t);
    f1d = (u8)(u32)func_0210bd4c(t);
    SndMgr_LoadBank(&gSndMgr, 144);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(t);
    state = 1;
    gSndMgr.f62 = 0;
    BgmTempoTracker_setMode(sub, 1);
    NNS_SndPlayerSetPlayerVolume(18, 63);
    NNS_SndPlayerSetPlayerVolume(19, 63);
}

void SndScene10::update() {
    Unk_0213b8e8::update();
    ((SubObj *)sub)->vfunc_00();
}

void SndScene10::onBgmChange(u32 v, u32 c) {
    return BgmTempoTracker_setMode(sub, v);
}

void SndScene10::beginTalk(s32 a) {
    Snd_RestoreHeapLevel(f1d);
    Unk_0213b8e8::beginTalk(a);
    state = 2;
}

void SndScene10::endTalk() {
    Unk_0213b8e8::endTalk();
    SndMgr_LoadBank(&gSndMgr, 144);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    state = 1;
}

SndScene19::SndScene19() {
    id = 19;
}

SndScene19::~SndScene19() {
}

void SndScene19::load() {
    setupHeaps(0x2a824, 6);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene20::SndScene20() {
    id = 20;
}

SndScene20::~SndScene20() {
}

void SndScene20::load() {
    setupHeaps(0x2a824, 7);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene21::SndScene21() {
    id = 21;
}

SndScene21::~SndScene21() {
}

void SndScene21::load() {
    setupHeaps(0x2a824, 8);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene22::SndScene22() {
    id = 22;
}

SndScene22::~SndScene22() {
}

void SndScene22::load() {
    setupHeaps(0x2a824, 9);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene23::SndScene23() {
    id = 23;
}

SndScene23::~SndScene23() {
}

void SndScene23::load() {
    setupHeaps(0x2a824, 10);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene24::SndScene24() {
    id = 24;
}

SndScene24::~SndScene24() {
}

void SndScene24::load() {
    setupHeaps(0x2a824, 11);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene30::SndScene30() {
    id = 30;
}

SndScene30::~SndScene30() {
}

void SndScene30::load() {
    setupHeaps(0x232f4, 12);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene31::SndScene31() {
    id = 31;
}

SndScene31::~SndScene31() {
}

void SndScene31::load() {
    setupHeaps(0x232f4, 13);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene32::SndScene32() {
    id = 32;
}

SndScene32::~SndScene32() {
}

void SndScene32::load() {
    setupHeaps(0x232f4, 14);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene33::SndScene33() {
    id = 33;
}

SndScene33::~SndScene33() {
}

void SndScene33::load() {
    setupHeaps(0x232f4, 15);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene34::SndScene34() {
    id = 34;
}

SndScene34::~SndScene34() {
}

void SndScene34::load() {
    setupHeaps(0x232f4, 16);
    createPlayer4Heap();
    createPlayer5Heap();
    createPlayer6Heaps();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene35::SndScene35() {
    id = 35;
}

SndScene35::~SndScene35() {
}

void SndScene35::load() {
    setupHeaps(0x232f4, 17);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene40::SndScene40() {
    id = 40;
}

SndScene40::~SndScene40() {
}

void SndScene40::load() {
    setupHeaps(0x245c0, 18);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene41::SndScene41() {
    BgmBeatSync_ctor(sub);
    id = 41;
}

SndScene41::~SndScene41() {
    BgmBeatSync_dtor(sub);
}

void SndScene41::load() {
    setupHeaps(0x2a824, 19);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

void SndScene41::update() {
    Unk_0213b8e8::update();
    ((SubObj *)sub)->vfunc_00();
}

void SndScene41::onBgmChange(u32 a, u32 c) {
    if (c >= 99 && c <= 171) {
        BgmTempoTracker_setMode(sub, a);
        BgmBeatSync_setEnable(sub, 1);
    } else {
        BgmBeatSync_setEnable(sub, 0);
    }
}

SndScene42::SndScene42() {
    id = 42;
}

SndScene42::~SndScene42() {
}

void SndScene42::load() {
    setupHeaps(0x245c0, 20);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene43::SndScene43() {
    id = 43;
}

SndScene43::~SndScene43() {
}

void SndScene43::load() {
    setupHeaps(0x245c0, 21);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene44::SndScene44() {
    id = 44;
}

SndScene44::~SndScene44() {
}

void SndScene44::load() {
    setupHeaps(0x245c0, 22);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene45::SndScene45() {
    id = 45;
}

SndScene45::~SndScene45() {
}

void SndScene45::load() {
    setupHeaps(0x245c0, 23);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene46::SndScene46() {
    id = 46;
}

SndScene46::~SndScene46() {
}

void SndScene46::load() {
    setupHeaps(0x245c0, 24);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene47::SndScene47() {
    id = 47;
}

SndScene47::~SndScene47() {
}

void SndScene47::load() {
    setupHeaps(0x245c0, 25);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene48::SndScene48() {
    id = 48;
}

SndScene48::~SndScene48() {
}

void SndScene48::load() {
    setupHeaps(0x245c0, 26);
    createPlayer4Heap();
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene50::SndScene50() {
    id = 50;
    func_020f44f0(1);
}

SndScene50::~SndScene50() {
}

void SndScene50::load() {
    setupHeaps(0x0, 27);
    createPlayer11Heaps(3);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene51::SndScene51() {
    id = 51;
}

SndScene51::~SndScene51() {
}

void SndScene51::load() {
    setupHeaps(0x0, 28);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
    SndMgr_StartVolumeFadeIn();
}

void SndScene51::fadeOutAll() {
    MelodyPlayer_StopTrackB(gSndMgr.f30);
    gSndMgr.f4d = 1;
    stopPlayers(17);
}

SndScene52::SndScene52() {
    id = 52;
}

SndScene52::~SndScene52() {
}

void SndScene52::load() {
    setupHeaps(0x2a824, 29);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

SndScene60::SndScene60() {
    id = 60;
}

SndScene60::~SndScene60() {
}

void SndScene60::load() {
    setupHeaps(0x21ef8, 4);
    createPlayer11Heaps(2);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    SndMgr_LoadBank(&gSndMgr, 143);
    gSndMgr.f62 = 0;
}

SndScene99::SndScene99() {
    id = 99;
}

SndScene99::~SndScene99() {
}

void SndScene99::load() {
    setupHeaps(0x2a824, 29);
    createPlayer12Heaps();
    NNS_SndHeapSaveState(Snd_GetHeap());
    gSndMgr.f62 = 0;
}

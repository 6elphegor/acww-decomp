#ifndef SND_SNDSCENES_H
#define SND_SNDSCENES_H

#include "types.h"
#include "snd/SndSceneBase.h"
#include "snd/BgmBeatSync.h"

// The per-scene sound setups that Snd_CreateScene (src/main/unk_020039ec.cpp) creates into gSndScene. Defined in
// autoload_2, src/autoload_2/unk_020f0fb4.cpp (which still keeps its own copy of these classes, in the order that sets
// its vtable order: switch it to this header).

// vtable 0x0213b8ac (dsd label data_0213b8b4)
class SndScene01 : public SndSceneBase {
public:
    SndScene01();                     // C1 0x020f2a3c, C2 0x020f2a94
    virtual ~SndScene01();            // D2 0x020f29c8, D0 0x020f29ec, D1 0x020f2a18
    virtual void load();            // 0x020f2968
    virtual void beginTalk(s32 a);       // 0x020f2938
    virtual void endTalk();            // 0x020f2910
    virtual void setBankVariant(s32 a);       // 0x020f28c0
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
class SndScene10 : public SndSceneBase {
public:
    SndScene10();                     // C1 0x020f269c (C2 unreferenced, dead-stripped)
    virtual ~SndScene10();            // D0 0x020f2634, D1 0x020f266c
    virtual void load();            // 0x020f2568
    virtual void update(s32 cameraDistance);            // 0x020f2544
    virtual void beginTalk(s32 a);       // 0x020f24fc
    virtual void endTalk();            // 0x020f24c0
    virtual void onBgmChange(u32 a, u32 c); // 0x020f2534

    /* 0x08 */ BgmTempoTracker tempo;  // (unk_020f0fb4.cpp: u32 sub[5], constructed in place)
    /* 0x1c */ u8 state;
    /* 0x1d */ u8 f1d;
};

// vtable 0x0213b364 (dsd label data_0213b36c)
class SndScene19 : public SndSceneBase {
public:
    SndScene19();                     // C1 0x020f2494 (C2 unreferenced, dead-stripped)
    virtual ~SndScene19();            // D0 0x020f2444, D1 0x020f2470
    virtual void load();            // 0x020f23fc
};

// vtable 0x0213b398 (dsd label data_0213b3a0)
class SndScene20 : public SndSceneBase {
public:
    SndScene20();                     // C1 0x020f23d0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene20();            // D0 0x020f2380, D1 0x020f23ac
    virtual void load();            // 0x020f2338
};

// vtable 0x0213b3cc (dsd label data_0213b3d4)
class SndScene21 : public SndSceneBase {
public:
    SndScene21();                     // C1 0x020f230c (C2 unreferenced, dead-stripped)
    virtual ~SndScene21();            // D0 0x020f22bc, D1 0x020f22e8
    virtual void load();            // 0x020f2274
};

// vtable 0x0213b400 (dsd label data_0213b408)
class SndScene22 : public SndSceneBase {
public:
    SndScene22();                     // C1 0x020f2248 (C2 unreferenced, dead-stripped)
    virtual ~SndScene22();            // D0 0x020f21f8, D1 0x020f2224
    virtual void load();            // 0x020f21b0
};

// vtable 0x0213b434 (dsd label data_0213b43c)
class SndScene23 : public SndSceneBase {
public:
    SndScene23();                     // C1 0x020f2184 (C2 unreferenced, dead-stripped)
    virtual ~SndScene23();            // D0 0x020f2134, D1 0x020f2160
    virtual void load();            // 0x020f20dc
};

// vtable 0x0213b468 (dsd label data_0213b470)
class SndScene24 : public SndSceneBase {
public:
    SndScene24();                     // C1 0x020f20b0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene24();            // D0 0x020f2060, D1 0x020f208c
    virtual void load();            // 0x020f2018
};

// vtable 0x0213b49c (dsd label data_0213b4a4)
class SndScene30 : public SndSceneBase {
public:
    SndScene30();                     // C1 0x020f1fec (C2 unreferenced, dead-stripped)
    virtual ~SndScene30();            // D0 0x020f1f9c, D1 0x020f1fc8
    virtual void load();            // 0x020f1f44
};

// vtable 0x0213b4d0 (dsd label data_0213b4d8)
class SndScene31 : public SndSceneBase {
public:
    SndScene31();                     // C1 0x020f1f18 (C2 unreferenced, dead-stripped)
    virtual ~SndScene31();            // D0 0x020f1ec8, D1 0x020f1ef4
    virtual void load();            // 0x020f1e70
};

// vtable 0x0213b504 (dsd label data_0213b50c)
class SndScene32 : public SndSceneBase {
public:
    SndScene32();                     // C1 0x020f1e44 (C2 unreferenced, dead-stripped)
    virtual ~SndScene32();            // D0 0x020f1df4, D1 0x020f1e20
    virtual void load();            // 0x020f1d9c
};

// vtable 0x0213b538 (dsd label data_0213b540)
class SndScene33 : public SndSceneBase {
public:
    SndScene33();                     // C1 0x020f1d70 (C2 unreferenced, dead-stripped)
    virtual ~SndScene33();            // D0 0x020f1d20, D1 0x020f1d4c
    virtual void load();            // 0x020f1cc8
};

// vtable 0x0213b2fc (dsd label data_0213b304)
class SndScene34 : public SndSceneBase {
public:
    SndScene34();                     // C1 0x020f1c9c (C2 unreferenced, dead-stripped)
    virtual ~SndScene34();            // D0 0x020f1c4c, D1 0x020f1c78
    virtual void load();            // 0x020f1bf4
};

// vtable 0x0213b5a0 (dsd label data_0213b5a8)
class SndScene35 : public SndSceneBase {
public:
    SndScene35();                     // C1 0x020f1bc8 (C2 unreferenced, dead-stripped)
    virtual ~SndScene35();            // D0 0x020f1b78, D1 0x020f1ba4
    virtual void load();            // 0x020f1b30
};

// vtable 0x0213b5d4 (dsd label data_0213b5dc)
class SndScene40 : public SndSceneBase {
public:
    SndScene40();                     // C1 0x020f1b04 (C2 unreferenced, dead-stripped)
    virtual ~SndScene40();            // D0 0x020f1ab4, D1 0x020f1ae0
    virtual void load();            // 0x020f1a6c
};

// vtable 0x0213b608 (dsd label data_0213b610)
class SndScene41 : public SndSceneBase {
public:
    SndScene41();                     // C1 0x020f1a38 (C2 unreferenced, dead-stripped)
    virtual ~SndScene41();            // D0 0x020f19d0, D1 0x020f1a08
    virtual void load();            // 0x020f1988
    virtual void update(s32 cameraDistance);            // 0x020f1964
    virtual void onBgmChange(u32 a, u32 c); // 0x020f191c

    /* 0x08 */ BgmBeatSync beatSync;  // (unk_020f0fb4.cpp: u32 sub[5], constructed in place: the object is 0x30 bytes)
};

// vtable 0x0213b63c (dsd label data_0213b644)
class SndScene42 : public SndSceneBase {
public:
    SndScene42();                     // C1 0x020f18f0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene42();            // D0 0x020f18a0, D1 0x020f18cc
    virtual void load();            // 0x020f1858
};

// vtable 0x0213b670 (dsd label data_0213b678)
class SndScene43 : public SndSceneBase {
public:
    SndScene43();                     // C1 0x020f182c (C2 unreferenced, dead-stripped)
    virtual ~SndScene43();            // D0 0x020f17dc, D1 0x020f1808
    virtual void load();            // 0x020f1794
};

// vtable 0x0213b6a4 (dsd label data_0213b6ac)
class SndScene44 : public SndSceneBase {
public:
    SndScene44();                     // C1 0x020f1768 (C2 unreferenced, dead-stripped)
    virtual ~SndScene44();            // D0 0x020f1718, D1 0x020f1744
    virtual void load();            // 0x020f16d0
};

// vtable 0x0213b6d8 (dsd label data_0213b6e0)
class SndScene45 : public SndSceneBase {
public:
    SndScene45();                     // C1 0x020f16a4 (C2 unreferenced, dead-stripped)
    virtual ~SndScene45();            // D0 0x020f1654, D1 0x020f1680
    virtual void load();            // 0x020f160c
};

// vtable 0x0213b70c (dsd label data_0213b714)
class SndScene46 : public SndSceneBase {
public:
    SndScene46();                     // C1 0x020f15e0 (C2 unreferenced, dead-stripped)
    virtual ~SndScene46();            // D0 0x020f1590, D1 0x020f15bc
    virtual void load();            // 0x020f1548
};

// vtable 0x0213b740 (dsd label data_0213b748)
class SndScene47 : public SndSceneBase {
public:
    SndScene47();                     // C1 0x020f151c (C2 unreferenced, dead-stripped)
    virtual ~SndScene47();            // D0 0x020f14cc, D1 0x020f14f8
    virtual void load();            // 0x020f1484
};

// vtable 0x0213b774 (dsd label data_0213b77c)
class SndScene48 : public SndSceneBase {
public:
    SndScene48();                     // C1 0x020f1458 (C2 unreferenced, dead-stripped)
    virtual ~SndScene48();            // D0 0x020f1408, D1 0x020f1434
    virtual void load();            // 0x020f13c0
};

// vtable 0x0213b7a8 (dsd label data_0213b7b0)
class SndScene50 : public SndSceneBase {
public:
    SndScene50();                     // C1 0x020f138c (C2 unreferenced, dead-stripped)
    virtual ~SndScene50();            // D0 0x020f133c, D1 0x020f1368
    virtual void load();            // 0x020f12f4
};

// vtable 0x0213b7dc (dsd label data_0213b7e4)
class SndScene51 : public SndSceneBase {
public:
    SndScene51();                     // C1 0x020f12c8 (C2 unreferenced, dead-stripped)
    virtual ~SndScene51();            // D0 0x020f1278, D1 0x020f12a4
    virtual void load();            // 0x020f1238
    virtual void fadeOutAll();            // 0x020f1200
};

// vtable 0x0213b810 (dsd label data_0213b818)
class SndScene52 : public SndSceneBase {
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
class SndScene99 : public SndSceneBase {
public:
    SndScene99();                     // C1 0x020f1044 (C2 unreferenced, dead-stripped)
    virtual ~SndScene99();            // D0 0x020f0ff4, D1 0x020f1020
    virtual void load();            // 0x020f0fb4
};

#if __SIZEOF_POINTER__ == 4
static_assert(sizeof(SndScene10) == 0x20, "SndScene10");
static_assert(sizeof(SndScene41) == 0x38, "SndScene41");
#endif

#endif

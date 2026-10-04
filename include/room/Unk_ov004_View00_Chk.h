#ifndef ROOM_UNK_OV004_VIEW00_CHK_H
#define ROOM_UNK_OV004_VIEW00_CHK_H

#include "types.h"
#include "gfx/Mtx43.h"
#include "room/FtrActorParts.h"

// Size-check mirror of FtrActor's first per-part view (0x130..0x840); the other views (View10..View25) are in
// room/FtrActorViews.h. FtrActor is defined in src/ov004/unk_ov004_02209f70.cpp (+ _switch.cpp, same unit); the
// Unk_ov004_View00_Assert typedef stays in the TUs.

struct Unk_ov004_View00_Chk {
    /* 0x130 */ u8 pad_130[0x14c - 0x130];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ s16 unk_160;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c[3];
    /* 0x178 */ u8 unk_178[0x10];   // FtrStackLink
    /* 0x188 */ u8 unk_188[0x44];   // FtrTopItems
    /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x TouchPickCylinder (0x20)
    /* 0x24c */ u8 unk_24c[0x34];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ u8 unk_288[0x2a8];  // TouchPickBox
    /* 0x530 */ s32 unk_530;
    /* 0x534 */ u8 unk_534[0x590 - 0x534]; // BlendAnimModel
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[4];
    /* 0x598 */ Mtx43 unk_598;
    /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
    /* 0x5d0 */ u8 unk_5d0[4];
    /* 0x5d4 */ u32 unk_5d4;
    /* 0x5d8 */ u32 unk_5d8;
    /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
    /* 0x628 */ u8 unk_628[0xa0];   // FtrCollider
    /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
    /* 0x73c */ u8 unk_73c[2];      // FtrSwitch
    /* 0x73e */ s8 unk_73e;         // FtrClockHands (3 bytes)
    /* 0x73f */ s8 unk_73f;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 unk_744[0x1c];   // FtrGlowMat
    /* 0x760 */ u8 unk_760[8];      // FtrVisNodes
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u16 unk_76c;
    /* 0x76e */ u8 pad_76e[2];
    /* 0x770 */ s32 unk_770;
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 unk_779;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
    /* 0x794 */ u8 unk_794[0x20];   // Unk_ov004_02235984
    /* 0x7b4 */ s32 unk_7b4[3];
    /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x FtrModelAnim
};

#endif

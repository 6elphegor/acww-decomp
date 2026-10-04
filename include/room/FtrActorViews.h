#ifndef ROOM_FTRACTORVIEWS_H
#define ROOM_FTRACTORVIEWS_H

#include "types.h"
#include "room/FtrActorParts.h"

// Size-check mirrors of the per-part views (b<NN>_ anonymous structs, 0x130..0x840) of FtrActor and the small field
// types they use. FtrActor is defined in src/ov004/unk_ov004_02204f24.cpp; its subclasses (whose old source parts the
// views mirror) are in src/ov004/unk_ov004_02209f70.cpp (+ _switch.cpp, same unit).

struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0220bc80_V3 {
    s32 x, y, z;
};

struct Unk_ov004_View10_Chk {
    /* 0x130 */ u8 b10_pad_130[0x5d0 - 0x130];
    /* 0x5d0 */ u8 b10_pad_5d0[4];
    /* 0x5d4 */ Unk_ov004_0220a648_Bits b10_unk_5d4;
    /* 0x5d8 */ u8 b10_pad_5d8[0x6c8 - 0x5d8];
    /* 0x6c8 */ u32 b10_sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u32 b10_sub_73c[(0x768 - 0x73c) / 4];
    /* 0x768 */ s32 b10_unk_768;
    /* 0x76c */ u8 b10_pad_76c[0x794 - 0x76c];
    /* 0x794 */ u32 b10_sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 b10_sub_7b4[(0x820 - 0x7b4) / 4];
    /* 0x820 */ u32 b10_pad_820;
    /* 0x824 */ Unk_ov004_0220a648_Bits b10_unk_824;
    /* 0x828 */ u8 b10_pad_828[0x840 - 0x828];
};

struct Unk_ov004_View11_Chk {
    /* 0x130 */ u8 b11_pad_10c[0x590 - 0x130];
    /* 0x590 */ s32 b11_unk_590;
    /* 0x594 */ u8 b11_pad_594[0x73c - 0x594];
    /* 0x73c */ u8 b11_unk_73c[0x24];
    /* 0x760 */ u8 b11_unk_760[8];
    /* 0x768 */ s32 b11_unk_768;
    /* 0x76c */ u8 b11_pad_76c[0x840 - 0x76c];
};

struct Unk_ov004_View12_Chk {
    /* 0x130 */ u8 b12_f_0f0[0x73c - 0x130];
    /* 0x73c */ u8 b12_f_73c[0x778 - 0x73c];
    /* 0x778 */ u8 b12_unk_778;
    /* 0x779 */ u8 b12_f_779[0x794 - 0x779];
    /* 0x794 */ u8 b12_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b12_f_7b4[0x840 - 0x7b4];
};

struct Unk_ov004_View13_Chk {
    /* 0x130 */ u8 b13_f_12c[0x178 - 0x130];
    /* 0x178 */ u8 b13_f_178[0x188 - 0x178];
    /* 0x188 */ u8 b13_f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 b13_f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 b13_f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 b13_unk_280;
    /* 0x284 */ u8 b13_f_284[0x288 - 0x284];
    /* 0x288 */ u8 b13_f_288[0x534 - 0x288];
    /* 0x534 */ u8 b13_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b13_unk_590;
    /* 0x594 */ u8 b13_f_594[0x628 - 0x594];
    /* 0x628 */ u8 b13_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b13_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b13_f_73c[2];
    /* 0x73e */ u8 b13_f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 b13_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b13_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b13_unk_768;
    /* 0x76c */ u8 b13_f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 b13_unk_77a;
    /* 0x77b */ u8 b13_pad_77b;
    /* 0x77c */ u32 b13_unk_77c;
    /* 0x780 */ u8 b13_f_780[0x794 - 0x780];
    /* 0x794 */ u8 b13_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 b13_unk_7b4;
    /* 0x7c0 */ u8 b13_f_7c0[0x840 - 0x7c0];
};

struct Unk_ov004_View14_Chk {
    /* 0x130 */ u8 b14_f_0f0[0x534 - 0x130];
    /* 0x534 */ u8 b14_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b14_unk_590;
    /* 0x594 */ u8 b14_f_594[4];
    /* 0x598 */ u8 b14_f_598[0x30];
    /* 0x5c8 */ u8 b14_f_5c8[8];
    /* 0x5d0 */ u8 b14_f_5d0[0x628 - 0x5d0];
    /* 0x628 */ u8 b14_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b14_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b14_f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 b14_f_760[0x77c - 0x760];
    /* 0x77c */ u32 b14_unk_77c;
    /* 0x780 */ u8 b14_f_780[0x840 - 0x780];
};

struct Unk_ov004_View15_Chk {
    /* 0x130 */ u8 b15_pad_0f0[0x534 - 0x130];
    /* 0x534 */ u8 b15_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b15_unk_590;
    /* 0x594 */ u8 b15_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 b15_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b15_f_73c[0x7c0 - 0x73c];
    /* 0x7c0 */ FtrModelAnimView b15_unk_7c0[4];
};

struct Unk_ov004_View16_Chk {
    /* 0x130 */ u8 b16_pad_f0[0x534 - 0x130];
    /* 0x534 */ u8 b16_unk_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b16_unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b16_unk_73c[0x768 - 0x73c];
    /* 0x768 */ s32 b16_unk_768;
    /* 0x76c */ u8 b16_pad_76c[0x778 - 0x76c];
    /* 0x778 */ u8 b16_unk_778;
    /* 0x779 */ u8 b16_pad_779;
    /* 0x77a */ u8 b16_unk_77a;
    /* 0x77b */ u8 b16_pad_77b;
    /* 0x77c */ s32 b16_unk_77c;
    /* 0x780 */ u8 b16_pad_780[0x840 - 0x780];
};

struct Unk_ov004_View17_Chk {
    /* 0x130 */ u8 b17_pad_130[0x590 - 0x130];
    /* 0x590 */ void *b17_unk_590;
    /* 0x594 */ u8 b17_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u32 b17_sub_6c8[(0x73c - 0x6c8) / 4];
    /* 0x73c */ u8 b17_unk_73c[2];
    /* 0x73e */ u8 b17_pad_73e[0x794 - 0x73e];
    /* 0x794 */ u32 b17_sub_794[(0x7b4 - 0x794) / 4];
    /* 0x7b4 */ u32 b17_unk_7b4[3];
    /* 0x7c0 */ u8 b17_pad_7c0[0x840 - 0x7c0];
};

struct Unk_ov004_View18_Chk {
    /* 0x130 */ u8 b18_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b18_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b18_unk_590;
    /* 0x594 */ u8 b18_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 b18_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b18_f_73c[0x768 - 0x73c];
    /* 0x768 */ u32 b18_unk_768;
    /* 0x76c */ u8 b18_f_76c[0x778 - 0x76c];
    /* 0x778 */ u8 b18_unk_778;
    /* 0x779 */ u8 b18_pad_779;
    /* 0x77a */ u8 b18_unk_77a;
    /* 0x77b */ u8 b18_pad_77b;
    /* 0x77c */ s32 b18_unk_77c;
    /* 0x780 */ u8 b18_f_780[0x840 - 0x780];
};

struct Unk_ov004_View19_Chk {
    /* 0x130 */ u8 b19_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b19_f_534[0x5d0 - 0x534];
    /* 0x5d0 */ u8 b19_f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 b19_f_6c8[0x77c - 0x6c8];
    /* 0x77c */ s32 b19_unk_77c;
    /* 0x780 */ u8 b19_pad_780[0x794 - 0x780];
    /* 0x794 */ u8 b19_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b19_f_7b4[0x840 - 0x7b4];
};

struct Unk_ov004_View20_Chk {
    /* 0x130 */ u8 b20_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b20_f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b20_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b20_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b20_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b20_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b20_unk_768;
    /* 0x76c */ u8 b20_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b20_unk_77c;
    /* 0x780 */ u32 b20_unk_780;
    /* 0x784 */ u8 b20_pad_784[0x840 - 0x784];
};

struct Unk_ov004_View21_Chk {
    /* 0x130 */ u8 b21_f_12c[0x178 - 0x130];
    /* 0x178 */ u8 b21_f_178[0x188 - 0x178];
    /* 0x188 */ u8 b21_f_188[0x1cc - 0x188];
    /* 0x1cc */ u8 b21_f_1cc[0x24c - 0x1cc];
    /* 0x24c */ u8 b21_f_24c[0x280 - 0x24c];
    /* 0x280 */ u32 b21_unk_280;
    /* 0x284 */ u8 b21_f_284[0x288 - 0x284];
    /* 0x288 */ u8 b21_f_288[0x534 - 0x288];
    /* 0x534 */ u8 b21_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b21_unk_590;
    /* 0x594 */ u8 b21_f_594[0x628 - 0x594];
    /* 0x628 */ u8 b21_f_628[0x6c8 - 0x628];
    /* 0x6c8 */ u8 b21_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b21_f_73c[2];
    /* 0x73e */ u8 b21_f_73e[0x744 - 0x73e];
    /* 0x744 */ u8 b21_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b21_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b21_unk_768;
    /* 0x76c */ u8 b21_f_76c[0x77a - 0x76c];
    /* 0x77a */ u8 b21_unk_77a;
    /* 0x77b */ u8 b21_pad_77b;
    /* 0x77c */ u32 b21_unk_77c;
    /* 0x780 */ u8 b21_f_780[0x794 - 0x780];
    /* 0x794 */ u8 b21_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ Unk_ov004_0220bc80_V3 b21_unk_7b4;
    /* 0x7c0 */ u8 b21_f_7c0[0x840 - 0x7c0];
};

struct Unk_ov004_View22_Chk {
    /* 0x130 */ u8 b22_f_0f0[0x590 - 0x130];
    /* 0x590 */ u32 b22_unk_590;
    /* 0x594 */ u8 b22_f_594[0x73c - 0x594];
    /* 0x73c */ u8 b22_f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 b22_f_760[0x77c - 0x760];
    /* 0x77c */ u32 b22_unk_77c;
    /* 0x780 */ u32 b22_unk_780;
    /* 0x784 */ u8 b22_f_784[0x840 - 0x784];
};

struct Unk_ov004_View23_Chk {
    /* 0x130 */ u8 b23_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b23_f_534[0x6c8 - 0x534];
    /* 0x6c8 */ u8 b23_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b23_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b23_f_744[0x760 - 0x744];
    /* 0x760 */ u8 b23_f_760[0x768 - 0x760];
    /* 0x768 */ u32 b23_unk_768;
    /* 0x76c */ u8 b23_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b23_unk_77c;
    /* 0x780 */ u32 b23_unk_780;
    /* 0x784 */ u8 b23_pad_784[0x840 - 0x784];
};

struct Unk_ov004_View24_Chk {
    /* 0x130 */ u8 b24_pad_130[0x590 - 0x130];
    /* 0x590 */ void *b24_unk_590;
    /* 0x594 */ u8 b24_pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 b24_unk_5d0[0x10];
    /* 0x5e0 */ u32 b24_unk_5e0;
    /* 0x5e4 */ u8 b24_pad_5e4[0x73c - 0x5e4];
    /* 0x73c */ u8 b24_unk_73c[2];
    /* 0x73e */ u8 b24_pad_73e[0x7c0 - 0x73e];
    /* 0x7c0 */ FtrModelAnimView b24_unk_7c0[4];
};

struct Unk_ov004_View25_Chk {
    /* 0x130 */ u8 b25_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b25_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b25_unk_590;
    /* 0x594 */ u8 b25_pad_594[0x5d0 - 0x594];
    /* 0x5d0 */ u8 b25_f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 b25_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b25_f_73c[0x744 - 0x73c];
    /* 0x744 */ u8 b25_f_744[0x768 - 0x744];
    /* 0x768 */ u32 b25_unk_768;
    /* 0x76c */ u8 b25_pad_76c[0x77c - 0x76c];
    /* 0x77c */ u32 b25_unk_77c;
    /* 0x780 */ u8 b25_pad_780[0x794 - 0x780];
    /* 0x794 */ u8 b25_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b25_f_7b4[0x840 - 0x7b4];
};

#endif

// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_0226453c_Node {
    u32 unk_00;
    struct Unk_ov066_0226453c_Node *unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
};

struct Unk_ov066_02264574_Node {
    struct Unk_ov066_02264574_Node *unk_00;
    struct Unk_ov066_02264574_Node *unk_04;
    u8 pad_08[0x20 - 0x08];
    u8 unk_20;
};

struct Unk_ov066_0226460c_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_0226460c_A {
    u32 unk_00;
    u8 pad_04[0x08 - 0x04];
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 pad_0d[0x14 - 0x0d];
    u8 unk_14;
    u8 pad_15[2];
    u8 unk_17;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u16 unk_22;
    u16 unk_24;
    u8 pad_26[0x28 - 0x26];
    u32 unk_28;
    u8 pad_2c[0x3c - 0x2c];
    Unk_ov066_0226460c_Bits unk_3c;
};

struct Unk_ov066_0226460c_In {
    u32 unk_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
};

struct Unk_ov066_02263c3c_Rec {
    u8 a : 2;
    u8 c : 1;
    u8 b : 1;
    u8 d : 4;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08[1];
};

struct Unk_ov066_02263c3c_Lo {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_ov066_02263c3c_Fl {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
    u8 f4 : 1;
};

struct Unk_ov066_02263c3c_Node {
    u32 unk_00;
    Unk_ov066_02263c3c_Node *unk_04;
    u8 pad[0x18];
    u8 unk_20;
};

struct Unk_ov066_02263c3c_Q {
    u32 unk_00;
    Unk_ov066_02263c3c_Node *unk_04;
};

struct Unk_ov066_02263c3c_Ent {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
};

struct Unk_ov066_02263c3c_Link {
    u32 unk_00;
    Unk_ov066_02263c3c_Link *unk_04;
};

struct Unk_ov066_02263c3c_G {
    u8 unk_00;
    Unk_ov066_02263c3c_Lo unk_01;
    s8 unk_02;
    s8 unk_03;
    Unk_ov066_02263c3c_Fl unk_04;
    u8 pad[3];
    u32 unk_08;
    u32 unk_0c;
    Unk_ov066_02263c3c_Link *unk_10;
    u32 pad14;
    Unk_ov066_02263c3c_Q *unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u8 *unk_20;
    u32 unk_24;
    s32 unk_28;
    void (*unk_2c)(u32);
    Unk_ov066_02263c3c_Ent *unk_30;
};

struct Unk_ov066_02263c3c_S {
    u8 pad[4];
    u32 unk_04;
    u8 pad2[3];
    u8 unk_0b;
};

struct Unk_ov066_02263c3c_V {
    u8 pad[0x9c];
    void *unk_9c;
    void *unk_a0;
    void *unk_a4;
    void *unk_a8;
    void *unk_ac;
    void *unk_b0;
    void *unk_b4;
    void (*unk_b8)(u32, u8 *, u32);
    void *unk_bc;
};

struct Unk_ov066_02263c3c_Wrap {
    u8 pad[0x14];
    Unk_ov066_02263c3c_Rec *unk_14;
};

struct Unk_ov066_02263f54_Obj {
    u8 pad[0x24];
    Unk_ov066_02263c3c_Rec unk_24;
};

struct Unk_ov066_02263320_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
};

struct Unk_ov066_02263320_Pay {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04[1];
};

struct Unk_ov066_02263320_Rec {
    Unk_ov066_02263320_Rec *unk_00;
    Unk_ov066_02263320_Rec *unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 pad[0x20 - 0x0e];
    Unk_ov066_02263320_Pay unk_20;
};

struct Unk_ov066_02263320_G {
    u8 unk_00;
    u8 lo : 4;
    u8 hi : 4;
    s8 unk_02;
    s8 unk_03;
    Unk_ov066_02263320_Flags unk_04;
    u8 pad[3];
    Unk_ov066_02263320_Rec *unk_08;
    Unk_ov066_02263320_Rec *unk_0c;
    Unk_ov066_02263320_Rec *unk_10;
    Unk_ov066_02263320_Rec *unk_14;
    Unk_ov066_02263320_Rec **unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u32 unk_20;
    u32 unk_24;
    s32 unk_28;
    u32 unk_2c;
};

struct Unk_ov066_02263320_S {
    u8 pad[0xb];
    u8 unk_0b;
};

struct Unk_ov066_02263320_V {
    u8 pad[0x98];
    u16 unk_98;
};

struct Unk_ov066_02263320_Hdr {
    u8 a : 2;
    u8 pad : 1;
    u8 b : 1;
    u8 c : 4;
    u8 d;
};

struct Unk_ov066_02263320_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad[6];
    Unk_ov066_02263320_Pay *unk_0c;
    u16 unk_10;
    u16 unk_12;
    u8 pad2[0x20 - 0x14];
    void (*unk_20)(void *);
};

struct Unk_ov066_022629cc_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov066_022629cc_V {
    u8 pad[0x8d];
    u8 unk_8d;
    u8 pad2[2];
    u16 unk_90;
    u8 unk_92;
    u8 pad3[0xc0 - 0x93];
    u32 unk_c0;
};

struct Unk_ov066_022629cc_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04[4];
    u16 unk_08;
    u16 unk_0a;
};

struct Unk_ov066_022629cc_E {
    u32 a;
    u32 b;
    u32 pad[2];
};

struct Unk_ov066_022629cc_G {
    u8 pad[0x1c];
    u16 unk_1c;
    u8 pad2[0x30 - 0x1e];
    Unk_ov066_022629cc_E *unk_30;
};

struct Unk_ov066_022629cc_Ent;

struct Unk_ov066_022629cc_Rec {
    u16 unk_00;
    u8 unk_02[6];
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c[6];
    u8 pad[2];
    Unk_ov066_022629cc_Ent *unk_14;
    u8 pad2[8];
    u8 unk_20[0xc0];
};

struct Unk_ov066_022629cc_Sub {
    u8 pad[0x2c];
};

struct Unk_ov066_022629cc_Ent {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 pad;
    Unk_ov066_022629cc_Rec *unk_04;
    Unk_ov066_022629cc_Sub *unk_08;
    void (*unk_0c)(Unk_ov066_022629cc_Rec *);
};

struct Unk_ov066_02262074_Flags {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 f3 : 1;
    u32 f4 : 1;
    u32 f5 : 1;
    u32 f6 : 1;
    u32 f7 : 1;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 f10 : 1;
    u32 rest : 21;
};

struct Unk_ov066_02262074_Ent {
    u8 b[6];
};

struct Unk_ov066_02262074_Row {
    u8 pad[0x28];
    Unk_ov066_02262074_Ent e;
};

struct Unk_ov066_02262074_Rec {
    void *unk_00;
    u16 unk_04;
    u16 pad06;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad1a[0x32 - 0x1a];
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
};

struct Unk_ov066_02262074_Rec2 {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
};

struct Unk_ov066_02262074_Buf {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov066_02262074_Data {
    u8 pad[0x17e];
    u16 unk_17e;
};

struct Unk_ov066_02262074_A {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 pad09;
    u8 unk_0a;
    u8 pad0b[2];
    u8 unk_0d;
    u8 pad0e[0x18 - 0xe];
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 pad22[6];
    u32 unk_28;
};

struct Unk_ov066_02262074_B {
    Unk_ov066_02262074_Rec *unk_00;
    Unk_ov066_02262074_Buf *unk_04;
    Unk_ov066_02262074_Rec2 *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 unk_22[2];
    u8 unk_24[4];
    Unk_ov066_02262074_Ent unk_28[16];
    u8 *unk_88;
    u8 unk_8c;
    u8 unk_8d;
    u8 unk_8e;
    u8 unk_8f;
    u8 pad90[3];
    u8 unk_93;
    u8 unk_94;
    u8 unk_95;
    u8 unk_96;
    u8 pad97;
    u16 unk_98;
    u8 pad9a[2];
    void (*unk_9c)(void);
    u8 pad_a0[0xb0 - 0xa0];
    s32 (*unk_b0)(u32, u32, u32, u32);
    s32 (*unk_b4)(void);
    u32 unk_b8;
    u8 padbc[4];
    Unk_ov066_02262074_Flags unk_c0;
};

struct Unk_ov066_02261764_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02261764_TBits {
    s32 pad : 8;
    s32 f8 : 1;
};

struct Unk_ov066_02261764_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08[3];
    u8 unk_0b;
    u8 unk_0c[8];
    u8 unk_14;
    u8 unk_15[0x3c - 0x15];
    Unk_ov066_02261764_TBits unk_3c;
};

struct Unk_ov066_02261764_V {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 *unk_14;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u8 unk_20[8];
    u8 unk_28[0x60];
    u8 unk_88[4];
    u8 unk_8c;
    u8 unk_8d[5];
    u8 unk_92[4];
    u8 unk_96;
    u8 unk_97;
    u16 unk_98;
    u8 unk_9a[2];
    void (*unk_9c)(void);
    u8 pad[0xac - 0xa0];
    void (*unk_ac)(u8 *, u32, u32, void (*)(void));
    u8 pad2[0xbc - 0xb0];
    void (*unk_bc)(u32);
    Unk_ov066_02261764_CBits unk_c0;
};

struct Unk_ov066_02261764_Msg {
    u8 unk_00[0xa];
    u16 unk_0a;
    u8 *unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_ov066_02261764_R6 {
    u8 b[6];
};

struct Unk_ov066_02261764_Hdr {
    u16 a;
    u16 b;
    u32 c;
};

struct Unk_ov066_02260e18_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    u32 f8 : 2;
    s32 f10 : 1;
    s32 f11 : 1;
    s32 f12 : 1;
};

struct Unk_ov066_02260e18_CBits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 f2 : 1;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
};

struct Unk_ov066_02260e18_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18[4];
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    Unk_ov066_02260e18_Bits unk_3c;
};

struct Unk_ov066_02260e18_V {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1a;
    u16 unk_1c;
    u16 unk_1e;
    u16 unk_20;
    u8 unk_22[0x8c - 0x22];
    u8 unk_8c;
    u8 pad[0x9c - 0x8d];
    void (*unk_9c)(void);
    void (*unk_a0)(void);
    void (*unk_a4)(void);
    u8 pad2[0xc0 - 0xa8];
    Unk_ov066_02260e18_CBits unk_c0;
};

struct Unk_ov066_02260e18_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
};

struct Unk_ov066_02260518_Bits {
    s32 f0 : 1;
    s32 f1 : 1;
    s32 rest : 30;
};

struct Unk_ov066_02260518_Bits3 {
    s32 pad : 3;
    s32 f3 : 1;
    s32 rest : 28;
};

struct Unk_ov066_02260518_CBits {
    s32 pad : 7;
    s32 f7 : 1;
    s32 f8 : 1;
    s32 f9 : 1;
    s32 rest : 22;
};

struct Unk_ov066_02260518_Elem {
    u32 v[4];
};

struct Unk_ov066_02260518_Head {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
};

// data_ov066_022647ac
struct Unk_ov066_02260518_A {
    u32 unk_00;
    s32 unk_04;
    u8 pad_08;
    u8 unk_09;
    u8 pad_0a[2];
    u8 unk_0c;
    u8 pad_0d[3];
    u8 *unk_10;
    u8 pad_14[0x20 - 0x14];
    u16 unk_20;
    u16 unk_22;
    u8 pad_24[0x3c - 0x24];
    Unk_ov066_02260518_Bits3 unk_3c;
};

// data_ov066_022647b0
struct Unk_ov066_02260518_B {
    Unk_ov066_02260518_Head *unk_00;
    u32 unk_04;
    Unk_ov066_02260518_Elem *unk_08;
    Unk_ov066_02260518_Bits unk_0c;
    u32 unk_10[11];
    u32 unk_3c[12];
    s32 unk_6c;
};

struct Unk_ov066_02260dd0_Msg {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_ov066_02260518_Rec {
    u16 unk_00;
    u8 unk_02[6];
    u16 unk_08;
};

// data_ov066_022647b4
struct Unk_ov066_02260518_C {
    u8 pad_00[0x88];
    Unk_ov066_02260518_Rec *unk_88;
    u8 unk_8c;
    u8 pad_8d;
    u8 unk_8e;
    u8 pad_8f[4];
    u8 unk_93;
    u8 unk_94;
    u8 unk_95;
    u8 pad_96[0xb8 - 0x96];
    u32 unk_b8;
    u8 pad_bc[4];
    Unk_ov066_02260518_CBits unk_c0;
};

struct Unk_ov066_0225faf8_Bits {
    u32 f0 : 3;
    s32 f3 : 1;
    s32 f4 : 1;
    s32 f5 : 1;
    s32 f6 : 1;
    s32 f7 : 1;
    u32 f8 : 2;
    s32 f10 : 1;
    s32 f11 : 1;
    s32 f12 : 1;
};

struct Unk_ov066_0225faf8_S {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18[4];
    u32 unk_28;
    u32 unk_2c;
    u32 unk_30;
    u32 unk_34;
    u32 unk_38;
    Unk_ov066_0225faf8_Bits unk_3c;
};

struct Unk_ov066_0225faf8_TBits {
    s32 f0 : 1;
    s32 f1 : 1;
    u32 f2 : 30;
};

struct Unk_ov066_0225faf8_W {
    u8 pad[0x3c];
    u16 unk_3c;
    u16 unk_3e;
    u32 unk_40;
    u32 unk_44;
    u8 unk_48[3];
    u8 unk_4b;
    u8 unk_4c[4];
    u8 unk_50[8];
};

struct Unk_ov066_0225faf8_T {
    s32 unk_00;
    Unk_ov066_0225faf8_W *unk_04;
    u8 *unk_08;
    Unk_ov066_0225faf8_TBits unk_0c;
    u32 unk_10[11];
    u32 unk_3c[12];
    s32 (*unk_6c)(void *);
};

struct Unk_ov066_0225faf8_V {
    u8 pad[0x8e];
    u8 unk_8e;
    u8 pad2[6];
    u8 unk_95;
    u8 pad3[0xc0 - 0x96];
    u32 unk_c0;
};

struct Unk_ov066_0225faf8_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u16 unk_08;
    u8 unk_0a[8];
    u16 unk_12;
};

struct Unk_ov066_0225f1a0_S {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[3];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
    u32 unk_18[6];
    void (*unk_30)(u32);
    u32 unk_34;
    void (*unk_38)(void *);
    u32 unk_3c;
};

struct Unk_ov066_0225f7c8_Bits {
    s32 lo : 10;
    s32 f : 1;
    s32 hi : 21;
};

struct Unk_ov066_0225f1a0_Msg {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_ov066_0225f64c_Rec {
    u8 pad[0x5c];
    u16 unk_5c;
    u8 pad2[0x77 - 0x5e];
    u8 unk_77;
};

extern "C" {
s32 WM_Enable(void *);
s32 WM_Disable(void *);
s32 WM_PowerOn(void *);
s32 WM_PowerOff(void *);
s32 (*data_ov066_02264780[4])(void *) = {WM_Enable, WM_Disable, WM_PowerOn, WM_PowerOff};
u32 data_ov066_022647c4;
u32 data_ov066_022647c0;
u32 data_ov066_022647bc;
u32 data_ov066_022647b8;
Unk_ov066_02263c3c_V *data_ov066_022647b4;
Unk_ov066_02263c3c_G *data_ov066_022647c8;
Unk_ov066_0226460c_A *data_ov066_022647ac;
void *(*data_ov066_022647a8)(u32, u32);
Unk_ov066_02260518_B *data_ov066_022647b0;
void (*data_ov066_022647a0)(u32);
void (*data_ov066_022647a4)(void *);

u32 OS_DisableInterrupts(void);
s32 OS_RestoreInterrupts(u32);
s32 func_0206d49c(void);
void DC_InvalidateRange(void *p, s32 v);
s32 DC_StoreRange(void *, s32);
s32 OS_InitTick(void);
s32 func_02114ef4(u32);
s32 func_02114f74(void *, u32);
s32 OS_CancelAlarm(void *);
s32 OS_SetAlarm(void *, s64, void *, void *);
s32 OS_CreateAlarm(void *);
s32 OS_InitAlarm(void);
void OS_GetMacAddress(void *p);
s32 MIi_CpuClearFast(s32, void *, s32);
s32 MIi_CpuCopyFast(void *, void *, s32);
void MI_CpuFill8(void *p, u32 v, u32 n);
s32 MI_CpuCopy8(void *, void *, s32);
s32 func_0211f188(void);
s32 WM_Init(void *p, s32 v);
u32 WM_GetDispersionBeaconPeriod(void);
s32 WM_GetLinkLevel(void);
s32 func_0211f7e4(void);
u32 WM_GetAllowedChannel(void);
s32 func_0211fb0c(u32, void *, s32);
s32 WM_SetIndCallback(void *);
s32 WM_Disconnect(void *, u32);
s32 func_0211fcbc(void *, u32, u32, u32, u32);
s32 WM_EndScan(void *);
s32 WM_StartScan(void *, s32);
s32 WM_EndParent(void *);
s32 WM_StartParent(void *);
s32 WM_SetParentParameter(void *, u32);
s32 WM_Reset(void);
s32 WM_EndMP(void *);
s32 WM_SetMPDataToPortEx(void *, u32, u32, u32, u32, u32, u32);
s32 func_021206b4(void *, u32, u32, u32, u32, u32, u32, s32, s32, s32, s32);
s32 WM_SetEntry(void *, u32);
s32 func_021218d0(void *, s32, s32, u32, s32);
s32 WM_SetGameInfo(void *, u32, u32, u32, u32, u8);
u32 MATH_CountPopulation(void);
u32 func_0213335c(u32 a, u32 b);
s32 func_ov066_0225f1a0(void (*fn)(void *));
void func_ov066_0225f1c0(u32 a, u32 b);
void func_ov066_0225f1e4(void *p);
void func_ov066_0225f22c(u32 v);
void func_ov066_0225f284(void *p);
s32 func_ov066_0225f2c8(s32 a, s32 b);
void func_ov066_0225f310(void);
void func_ov066_0225f32c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f3c8(void *p);
void func_ov066_0225f40c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f44c(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f494(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f4d4(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f514(u32 idx);
void func_ov066_0225f554(Unk_ov066_0225f1a0_Msg *m);
void func_ov066_0225f5b4(void);
u32 func_ov066_0225f63c(Unk_ov066_0225f1a0_Msg *m);
void * func_ov066_0225f64c(Unk_ov066_0225f64c_Rec *r);
s32 func_ov066_0225f688(Unk_ov066_0225f64c_Rec *r);
s32 func_ov066_0225f6a8(void);
void func_ov066_0225f77c(void);
s32 func_ov066_0225f7c8(void);
void func_ov066_0225f824(void);
void func_ov066_0225f830(void);
void func_ov066_0225f938(void);
void func_ov066_0225f998(void);
void func_ov066_0225f9f8(void);
void func_ov066_0225fa48(void);
void func_ov066_0225fa98(void);
void func_ov066_0225faf8(void);
void func_ov066_0225fb48(void);
void func_ov066_0225fbe4(void);
void func_ov066_0225fc3c(void);
s32 func_ov066_0225fc78(s32 a, u32 b, u32 c);
s32 func_ov066_0225fd08(void);
s32 func_ov066_0225fdc4(void);
s32 func_ov066_0225fe4c(u32 a, void *(*b)(u32, u32), void (*c)(void *), void (*d)(u32));
void func_ov066_0225fef0(u32 a);
s32 func_ov066_0225ffcc(void);
void func_ov066_0225fffc(Unk_ov066_0225faf8_Msg *m);
s32 func_ov066_0226004c(void);
void func_ov066_02260060(Unk_ov066_0225faf8_Msg *m);
void func_ov066_02260100(void);
s32 func_ov066_02260144(u32 idx, u32 b);
s32 func_ov066_022601a0(u32 idx);
s32 func_ov066_022601fc(void *a, u8 *b);
void func_ov066_022602c8(void);
void func_ov066_0226030c(void);
void func_ov066_02260318(Unk_ov066_0225faf8_Msg *m);
void func_ov066_02260518(void);
void func_ov066_022605a0(void);
void func_ov066_022605cc(void);
void func_ov066_02260634(void);
void func_ov066_02260670(s32 t);
u32 func_ov066_02260774(u32 idx);
void func_ov066_022607c0(s32 v);
void func_ov066_022607e8(void);
void func_ov066_022608b8(void);
void func_ov066_022609a8(u32 v);
BOOL func_ov066_022609e4(u8 *p);
u8 func_ov066_02260a3c(void);
void func_ov066_02260a58(void);
BOOL func_ov066_02260b4c(void);
void func_ov066_02260c28(void);
void func_ov066_02260c8c(void);
s32 func_ov066_02260cac(Unk_ov066_02260518_Rec *p, u32 a, u32 b);
void func_ov066_02260d30(u32 v);
s32 func_ov066_02260d74(u8 *a, u8 *b);
u32 func_ov066_02260dac(u8 *p);
void func_ov066_02260dd0(Unk_ov066_02260dd0_Msg *m);
void func_ov066_02260e18(Unk_ov066_02260e18_Msg *m);
void func_ov066_02260e4c(u32 a);
void func_ov066_02260e84(Unk_ov066_02260e18_Msg *m);
void func_ov066_02260efc(void);
void func_ov066_02260f30(Unk_ov066_02260e18_Msg *m);
void func_ov066_022610b0(void);
void func_ov066_02261158(Unk_ov066_02260e18_Msg *m);
void func_ov066_022611b4(void);
void func_ov066_02261238(Unk_ov066_02260e18_Msg *m);
s32 func_ov066_0226128c(u32 a);
void func_ov066_022612cc(Unk_ov066_02260e18_Msg *m);
void func_ov066_022613dc(u32 a);
void func_ov066_02261420(Unk_ov066_02260e18_Msg *m);
void func_ov066_02261490(void);
void func_ov066_022614c4(Unk_ov066_02260e18_Msg *m);
void func_ov066_022615a4(void);
void func_ov066_022615d8(Unk_ov066_02260e18_Msg *m);
void func_ov066_0226160c(void);
s32 func_ov066_02261650(void);
void func_ov066_022616c8(void);
void func_ov066_02261704(void *m);
void func_ov066_02261764(Unk_ov066_02261764_Msg *m);
void func_ov066_022617d4(void);
void func_ov066_0226185c(void);
void func_ov066_02261860(Unk_ov066_02261764_Msg *m);
void func_ov066_02261894(u32 idx, u8 *src);
void func_ov066_022618dc(Unk_ov066_02261764_Msg *m);
void func_ov066_02261958(Unk_ov066_02261764_Msg *m);
void func_ov066_02261a4c(Unk_ov066_02261764_Msg *m);
void func_ov066_02261b14(void);
void func_ov066_02261bc4(u32 a);
void func_ov066_02261bfc(Unk_ov066_02261764_Msg *m);
void func_ov066_02261c5c(void);
void func_ov066_02261c80(void);
void func_ov066_02261ce0(u8 *a, u8 *b);
void func_ov066_02261db0(void);
void func_ov066_02261dfc(void);
void func_ov066_02261ee8(void);
void func_ov066_02261f6c(u32 idx, u8 *src);
s32 func_ov066_02261ff8(void *a, u32 n);
void func_ov066_02262074(u8 *p, u32 v);
void func_ov066_022620e8(void);
void func_ov066_02262108(u32 a);
void func_ov066_0226214c(u32 a);
void func_ov066_0226223c(u32 a, u32 b);
s32 func_ov066_022622ac(u32 a, u32 b, u32 c, u32 d);
s32 func_ov066_022622f4(void);
u32 func_ov066_0226233c(void);
u32 func_ov066_0226238c(void);
u32 func_ov066_022623ac(void);
void func_ov066_022623d4(void);
void func_ov066_02262464(void);
void func_ov066_02262548(void);
void func_ov066_022625e8(void);
void func_ov066_0226278c(void);
s32 func_ov066_0226292c(void);
void func_ov066_022629cc(void);
void func_ov066_02262a34(Unk_ov066_022629cc_Msg *m);
s32 func_ov066_02262b20(u32 a);
u32 func_ov066_02262b70(u32 a);
void func_ov066_02262be4(void);
s32 func_ov066_02262c38(u32 i);
void func_ov066_02262ca8(Unk_ov066_022629cc_Ent *o, s32 x);
void func_ov066_02262d70(Unk_ov066_022629cc_Ent *o);
void func_ov066_02262dc4(Unk_ov066_022629cc_Ent *o);
Unk_ov066_022629cc_Rec * func_ov066_02262dd8(Unk_ov066_022629cc_Ent *o, u32 i);
u32 func_ov066_02262df4(Unk_ov066_022629cc_Ent *o);
void func_ov066_02262dfc(Unk_ov066_022629cc_Rec *r);
s32 func_ov066_02262e54(Unk_ov066_022629cc_Ent *o, s32 a, u8 *b, u32 c, u16 d, void *e);
void func_ov066_02263198(Unk_ov066_022629cc_Ent *o);
void func_ov066_022631d0(Unk_ov066_022629cc_Ent *o, u32 id, s32 n);
s32 func_ov066_02263284(s32 idx, u32 a, u32 b);
void func_ov066_02263320(void);
void func_ov066_02263478(Unk_ov066_02263320_Msg *m);
void func_ov066_022634e4(Unk_ov066_02263320_Msg *m);
void func_ov066_022634e8(Unk_ov066_02263320_Msg *m);
void func_ov066_02263628(u32 idx, void *src, u32 size);
Unk_ov066_02263320_Rec * func_ov066_0226375c(u32 id, Unk_ov066_02263320_Rec *head);
void func_ov066_0226378c(Unk_ov066_02263320_Msg *m);
void func_ov066_022637dc(u32 a, u32 b, u32 c, u32 d);
s32 func_ov066_02263810(u32 x, u32 a, u32 b, u32 c, u32 d);
void func_ov066_02263878(u32 idx);
void func_ov066_022638c4(void);
void func_ov066_022638fc(void);
s32 func_ov066_02263a48(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src);
void func_ov066_02263b90(Unk_ov066_02263320_Pay *p);
void func_ov066_02263c3c(u32 idx, u8 *msg);
void func_ov066_02263d90(void);
void func_ov066_02263f54(Unk_ov066_02263f54_Obj *o);
u16 func_ov066_02263f84(Unk_ov066_02263c3c_Rec *rec);
void func_ov066_022640dc(void);
void func_ov066_022640f8(Unk_ov066_02263c3c_Wrap *w);
void func_ov066_0226416c(void);
void func_ov066_022641d8(void);
s32 func_ov066_022641dc(u8 *a, u32 b, u32 c, void (*d)(u32));
s32 func_ov066_0226427c(void);
void func_ov066_022642cc(void);
void func_ov066_02264378(u8 *msg);
void func_ov066_0226453c(Unk_ov066_0226453c_Node *p, s32 n);
void * func_ov066_02264574(s32 n);
void func_ov066_0226460c(Unk_ov066_0226460c_In *in);
}

#pragma thumb off
extern "C" {

// ---- unk_0226453c
#define func_ov066_0225f2c8 ((void * (*)(u32, u32))func_ov066_0225f2c8)

void func_ov066_0226460c(Unk_ov066_0226460c_In *in) {
    u8 w = in->unk_06;
    u32 sz = w * in->unk_04;
    u16 t = sz + 4;
    data_ov066_022647ac->unk_28 = in->unk_00;
    data_ov066_022647ac->unk_3c.f3 = 0;
    data_ov066_022647ac->unk_3c.f0 = 0;
    data_ov066_022647ac->unk_3c.f5 = -1;
    data_ov066_022647ac->unk_3c.f6 = -1;
    data_ov066_022647ac->unk_3c.f7 = -1;
    data_ov066_022647ac->unk_3c.f9 = 0;
    data_ov066_022647ac->unk_3c.f8 = 0;
    data_ov066_022647ac->unk_3c.f2 = -1;
    data_ov066_022647ac->unk_3c.f1 = -1;
    data_ov066_022647ac->unk_17 = in->unk_07;
    data_ov066_022647ac->unk_08 = 0xfe;
    data_ov066_022647ac->unk_09 = 1;
    data_ov066_022647ac->unk_0a = in->unk_04 - 1;
    data_ov066_022647ac->unk_0b = in->unk_04;
    data_ov066_022647ac->unk_0c = in->unk_05;
    data_ov066_022647ac->unk_18 = w;
    data_ov066_022647ac->unk_1a = t;
    data_ov066_022647ac->unk_1c = t;
    data_ov066_022647ac->unk_1e = w;
    data_ov066_022647ac->unk_22 = 0x1e;
    data_ov066_022647ac->unk_20 = 0x5a;
    data_ov066_022647ac->unk_24 = 0xc8;
    data_ov066_022647ac->unk_14 = 4;
}

void *func_ov066_02264574(s32 n) {
    u32 sz = (data_ov066_022647ac->unk_1a + 0x43) & ~0x1f;
    u32 tot = sz * n;
    Unk_ov066_02264574_Node *p = (Unk_ov066_02264574_Node *)func_ov066_0225f2c8(tot, 0x20);
    u16 i;
    Unk_ov066_02264574_Node *q;
    Unk_ov066_02264574_Node *head;
    MI_CpuFill8(p, 0, tot);
    head = p;
    s32 last = n - 1;
    for (i = 0; (s32)i < last; ) {
        i++;
        p->unk_20 = 0;
        q = p;
        p->unk_04 = (Unk_ov066_02264574_Node *)((u8 *)p + sz);
        p = p->unk_04;
        p->unk_00 = q;
    }
    p->unk_20 = last;
    p->unk_04 = head;
    head->unk_00 = p;
    return head;
}

void func_ov066_0226453c(Unk_ov066_0226453c_Node *p, s32 n) {
    u16 i;
    for (i = 0; (s32)i < n; ) {
        i++;
        p->unk_08 = 0;
        p->unk_0a = 0;
        p->unk_0c = 0;
        p = p->unk_04;
    }
}
#undef func_ov066_0225f2c8

// ---- unk_02263c3c
#define data_ov066_022647ac (*(Unk_ov066_02263c3c_S * *)&data_ov066_022647ac)
#define MI_CpuFill8 ((void (*)(void *, s32, u32))MI_CpuFill8)
#define MI_CpuCopy8 ((s32 (*)(void *, void *, u32))MI_CpuCopy8)
#define func_ov066_0225f2c8 ((void * (*)(u32, u32))func_ov066_0225f2c8)
#define func_ov066_02261bfc ((void (*)(void))func_ov066_02261bfc)
#define func_ov066_02263478 ((void (*)(void))func_ov066_02263478)
#define func_ov066_02263810 ((void (*)(u32, void *, s32, s32, void *))func_ov066_02263810)
#define func_ov066_02263878 ((void (*)(void))func_ov066_02263878)
#define func_ov066_022637dc ((void (*)(void))func_ov066_022637dc)
#define func_ov066_0226460c ((void (*)(u8 *))func_ov066_0226460c)
#define func_ov066_02264574 ((void * (*)(u32))func_ov066_02264574)

void func_ov066_02264378(u8 *msg) {
    u32 n;
    if (data_ov066_022647c8 != NULL) {
        return;
    }
    func_ov066_0226460c(msg);
    func_ov066_02262548();
    data_ov066_022647b4->unk_9c = (void *)func_ov066_02263320;
    data_ov066_022647b4->unk_a0 = (void *)func_ov066_022638fc;
    data_ov066_022647b4->unk_a4 = (void *)func_ov066_022638c4;
    data_ov066_022647b4->unk_ac = (void *)func_ov066_022637dc;
    data_ov066_022647b4->unk_b0 = (void *)func_ov066_022641dc;
    data_ov066_022647b4->unk_b4 = (void *)func_ov066_0226427c;
    data_ov066_022647b4->unk_a8 = (void *)func_ov066_022642cc;
    data_ov066_022647b4->unk_bc = (void *)func_ov066_02263878;
    data_ov066_022647c8 = (Unk_ov066_02263c3c_G *)func_ov066_0225f2c8(0x34, 4);
    n = data_ov066_022647ac->unk_0b << 4;
    data_ov066_022647c8->unk_30 = (Unk_ov066_02263c3c_Ent *)func_ov066_0225f2c8(n, 4);
    MI_CpuFill8(data_ov066_022647c8->unk_30, 0, n);
    data_ov066_022647c8->unk_08 = (u32)func_ov066_02264574(3);
    data_ov066_022647c8->unk_0c = (u32)func_ov066_02264574(3);
    n = data_ov066_022647ac->unk_0b << 2;
    data_ov066_022647c8->unk_18 = (Unk_ov066_02263c3c_Q *)func_ov066_0225f2c8(n, 4);
    MI_CpuFill8(data_ov066_022647c8->unk_18, 0, n);
    data_ov066_022647c8->unk_00 = msg[6];
    func_0211fb0c(0xc, (void *)func_ov066_02261bfc, 0);
    func_0211fb0c(0xd, (void *)func_ov066_02263478, 0);
    WM_SetIndCallback((void *)func_ov066_022641d8);
    func_ov066_02263320();
}

void func_ov066_022642cc(void) {
    if (data_ov066_022647c8 == NULL) {
        return;
    }
    func_0211fb0c(0xc, 0, 0);
    func_0211fb0c(0xd, 0, 0);
    func_ov066_0225f284(data_ov066_022647c8->unk_18);
    func_ov066_0225f284((void *)data_ov066_022647c8->unk_0c);
    func_ov066_0225f284((void *)data_ov066_022647c8->unk_08);
    func_ov066_0225f284(data_ov066_022647c8->unk_30);
    func_ov066_0225f284(data_ov066_022647c8);
    func_ov066_02262464();
    data_ov066_022647c8 = NULL;
}

s32 func_ov066_0226427c(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    s32 r = 0;
    if (g == NULL) {
        return r;
    }
    s32 t = data_ov066_022647ac->unk_04;
    switch (t) {
    case 10:
    case 11:
        r = g->unk_04.f3;
        if (r == 0) {
            r = 1;
        } else {
            r = 0;
        }
    }
    return r;
}

s32 func_ov066_022641dc(u8 *a, u32 b, u32 c, void (*d)(u32)) {
    s32 r = 0;
    u32 irq = OS_DisableInterrupts();
    if (func_ov066_0226427c() != 0) {
        data_ov066_022647c8->unk_04.f3 = 1;
        data_ov066_022647c8->unk_04.f4 = 0;
        data_ov066_022647c8->unk_20 = a;
        data_ov066_022647c8->unk_24 = b;
        data_ov066_022647c8->unk_28 = r;
        r = 1;
        data_ov066_022647c8->unk_1e = c;
        data_ov066_022647c8->unk_2c = d;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

void func_ov066_022641d8(void) {
}

void func_ov066_0226416c(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    u32 n = g->unk_24;
    void (*cb)(u32) = g->unk_2c;
    g->unk_04.f3 = 0;
    data_ov066_022647c8->unk_1e = 0;
    data_ov066_022647c8->unk_20 = 0;
    data_ov066_022647c8->unk_24 = 0;
    data_ov066_022647c8->unk_28 = -1;
    data_ov066_022647c8->unk_2c = 0;
    if (cb == NULL) {
        return;
    }
    cb(n);
}

void func_ov066_022640f8(Unk_ov066_02263c3c_Wrap *w) {
    Unk_ov066_02263c3c_Rec *rec = w->unk_14;
    data_ov066_022647c8->unk_02--;
    if (rec->a != 0) {
        if (rec->a != 1) {
            return;
        }
    }
    if (rec->c == 0) {
        return;
    }
    rec->c = 0;
    func_ov066_0226416c();
}

void func_ov066_022640dc(void) {
    data_ov066_022647c8->unk_02--;
}

u16 func_ov066_02263f84(Unk_ov066_02263c3c_Rec *rec) {
    u8 *dst;
    u8 *base;
    s32 off;
    u32 rem;
    u32 tot;
    u8 *src;
    u16 ret;
    Unk_ov066_02263c3c_G *g;
    u32 len;
    u32 n;
    off = data_ov066_022647c8->unk_28;
    tot = data_ov066_022647c8->unk_24;
    base = data_ov066_022647c8->unk_20;
    rem = tot - off;
    src = base + off;
    if (off == 0) {
        rec->a = 0;
        dst = (u8 *)rec + 8;
        rec->unk_02 = data_ov066_022647c8->unk_1e;
        rec->unk_04 = data_ov066_022647c8->unk_24;
        rec->unk_06 = data_ov066_022647c8->unk_24 >> 16;
        g = data_ov066_022647c8;
        n = g->unk_24;
        if (n > (u32)(g->unk_00 - 8)) {
            n = g->unk_00 - 8;
        }
        len = (u8)n;
        ret = (len + 9) & ~1;
    } else {
        rec->a = 1;
        dst = (u8 *)rec + 2;
        g = data_ov066_022647c8;
        n = rem;
        if (n > (u32)(g->unk_00 - 2)) {
            n = g->unk_00 - 2;
        }
        len = (u8)n;
        ret = (len + 3) & ~1;
    }
    g->unk_28 += len;
    rec->unk_01 = len;
    rec->c = (data_ov066_022647c8->unk_28 == (s32)data_ov066_022647c8->unk_24) ? 1 : 0;
    data_ov066_022647c8->unk_04.f4 = rec->c;
    MI_CpuCopy8(src, dst, len);
    return ret;
}

void func_ov066_02263f54(Unk_ov066_02263f54_Obj *o) {
    func_ov066_02263f84(&o->unk_24);
    if (o->unk_24.c == 0) {
        return;
    }
    func_ov066_0226416c();
}

void func_ov066_02263d90(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    s32 sent = 0;
    Unk_ov066_02263c3c_Rec *rec = (Unk_ov066_02263c3c_Rec *)((u8 *)g->unk_10 + 0x20);
    if (g->unk_04.f2 != 0) {
        rec->a = 3;
        sent = 2;
        rec->d = data_ov066_022647c8->unk_01.hi;
    } else if (g->unk_04.f3 != 0) {
        if (g->unk_03 < 2) {
            if (g->unk_04.f4 == 0) {
                if (g->unk_04.f1 == 0) {
                    sent = func_ov066_02263f84(rec);
                    data_ov066_022647c8->unk_03++;
                }
            }
        }
    }
    if (data_ov066_022647c8->unk_18->unk_00 != (u32)data_ov066_022647c8->unk_18->unk_04) {
        if (sent == 0) {
            rec->a = 2;
            sent = 2;
            rec->c = 0;
        }
        rec->b = 1;
        rec->d = data_ov066_022647c8->unk_18->unk_04->unk_20;
        data_ov066_022647c8->unk_18->unk_04 = data_ov066_022647c8->unk_18->unk_04->unk_04;
    } else {
        rec->b = 0;
    }
    if (sent != 0) {
        data_ov066_022647c8->unk_02++;
        func_ov066_02263810(0xd, rec, sent, 1, (void *)func_ov066_022640f8);
        data_ov066_022647c8->unk_10 = data_ov066_022647c8->unk_10->unk_04;
    }
    data_ov066_022647c8->unk_04.f1 = 0;
}

void func_ov066_02263c3c(u32 idx, u8 *msg) {
    u32 len = 0;
    Unk_ov066_02263c3c_Ent *e = data_ov066_022647c8->unk_30 + idx;
    u8 *p;
    u32 t = ((Unk_ov066_02263c3c_Rec *)msg)->a;
    switch (t) {
    case 0:
        p = msg + 8;
        if ((*(u16 *)(msg + 2) & (1 << func_ov066_0226238c())) != 0) {
            data_ov066_022647c8->unk_1c |= 1 << idx;
            e->unk_0c = len;
            e->unk_08 = (*(u16 *)(msg + 6) << 16) | *(u16 *)(msg + 4);
            len = e->unk_08;
            if (len > (u32)(data_ov066_022647c8->unk_00 - 8)) {
                len = data_ov066_022647c8->unk_00 - 8;
            }
        }
        break;
    case 1:
        p = msg + 2;
        len = msg[1];
        break;
    }
    if ((data_ov066_022647c8->unk_1c & (1 << idx)) == 0) {
        return;
    }
    if (e->unk_0c + len <= e->unk_04) {
        MI_CpuCopy8(p, e->unk_00 + e->unk_0c, len);
        e->unk_0c += len;
    }
    if (e->unk_08 != e->unk_0c) {
        return;
    }
    data_ov066_022647c8->unk_1c ^= 1 << idx;
    if (data_ov066_022647b4->unk_b8 == NULL) {
        return;
    }
    data_ov066_022647b4->unk_b8(idx, e->unk_00, e->unk_08);
}
#undef data_ov066_022647ac
#undef MI_CpuFill8
#undef MI_CpuCopy8
#undef func_ov066_0225f2c8
#undef func_ov066_02261bfc
#undef func_ov066_02263478
#undef func_ov066_02263810
#undef func_ov066_02263878
#undef func_ov066_022637dc
#undef func_ov066_0226460c
#undef func_ov066_02264574

// ---- unk_02263320
#define data_ov066_022647ac (*(Unk_ov066_02263320_S * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_02263320_V * *)&data_ov066_022647b4)
#define data_ov066_022647c8 (*(Unk_ov066_02263320_G * *)&data_ov066_022647c8)
#define func_ov066_0226238c ((s32 (*)(void))func_ov066_0226238c)
#define func_ov066_0226453c ((void (*)(void *, s32))func_ov066_0226453c)
#define func_ov066_02263f54 ((void (*)(void *))func_ov066_02263f54)
#define func_ov066_02263c3c ((void (*)(s32, void *))func_ov066_02263c3c)
void func_ov066_022634e8(Unk_ov066_02263320_Msg *m);
void func_ov066_02263628(u32 idx, void *src, u32 size);
void func_ov066_02263b90(Unk_ov066_02263320_Pay *p);
Unk_ov066_02263320_Rec *func_ov066_0226375c(u32 id, Unk_ov066_02263320_Rec *head);
s32 func_ov066_02263810(u32 x, u32 a, u32 b, u32 c, u32 d);
s32 func_ov066_02263a48(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src);

void func_ov066_02263b90(Unk_ov066_02263320_Pay *p) {
    u16 i;
    u8 *q = p->unk_04;
    for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
        if ((p->unk_02 & (1 << i)) != 0) {
            if (i == func_ov066_0226238c()) {
                data_ov066_022647c8->unk_03 = data_ov066_022647c8->unk_03 - 1;
            }
            func_ov066_02263c3c(i, q);
            q += data_ov066_022647c8->unk_00 & ~1;
        }
    }
}

s32 func_ov066_02263a48(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src) {
    u16 mask;
    u16 i;
    u16 total;
    s32 result = 0;
    u8 sz;
    u8 *rd;
    u8 *rp;
    mask = src->unk_20.unk_02;
    if (mask != 0) {
        u32 t;
        sz = data_ov066_022647c8->unk_00;
        rd = (u8 *)src + 0x24;
        total = 4;
        rp = (u8 *)dst + 0x24;
        dst->unk_20.unk_02 = mask;
        t = data_ov066_022647c8->lo;
        data_ov066_022647c8->lo = t + 1;
        dst->unk_20.unk_00 = t;
        for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
            if ((mask & (1 << i)) != 0) {
                MI_CpuCopy8(rd + sz * i, rp, sz);
                rp += sz;
                total = total + sz;
            }
            if (data_ov066_022647c8->unk_18[i] == src) {
                data_ov066_022647c8->unk_18[i] = src->unk_04;
            }
        }
        src->unk_20.unk_02 = 0;
        dst->unk_0a = data_ov066_022647b4->unk_98;
        dst->unk_0c = 0;
        dst->unk_08 = total;
        func_ov066_02263b90(&dst->unk_20);
        result = 1;
    }
    return result;
}

void func_ov066_022638fc(void) {
    Unk_ov066_02263320_G *g = data_ov066_022647c8;
    Unk_ov066_02263320_Rec *n14;
    Unk_ov066_02263320_Rec *r5;
    Unk_ov066_02263320_Rec *e0;
    if (g->unk_02 >= 1) {
        return;
    }
    e0 = g->unk_18[0];
    r5 = 0;
    n14 = g->unk_14;
    if (n14 != 0) {
        Unk_ov066_02263320_Rec *nx = n14->unk_04;
        r5 = n14;
        if (nx == g->unk_10) {
            g->unk_14 = 0;
        } else {
            g->unk_14 = nx;
        }
    } else {
        Unk_ov066_02263320_Rec *p = g->unk_10->unk_00->unk_00;
        u16 a = p->unk_0a;
        if (a == 0 || a == p->unk_0c) {
            if (g->unk_04.f3) {
                func_ov066_02263f54(e0);
                e0->unk_20.unk_02 = e0->unk_20.unk_02 | 1;
                data_ov066_022647c8->unk_03 = data_ov066_022647c8->unk_03 + 1;
            }
            if (func_ov066_02263a48(data_ov066_022647c8->unk_10, e0) != 0) {
                g = data_ov066_022647c8;
                r5 = g->unk_10;
                g->unk_10 = r5->unk_04;
            }
        }
    }
    if (r5 == 0) {
        return;
    }
    if (r5->unk_0a == 0) {
        return;
    }
    g = data_ov066_022647c8;
    g->unk_02 = g->unk_02 + 1;
    func_ov066_02263810(0xd, (u32)&r5->unk_20, r5->unk_08, r5->unk_0a, (u32)func_ov066_022640dc);
}

void func_ov066_022638c4(void) {
    if (data_ov066_022647c8->unk_02 >= 2) {
        return;
    }
    func_ov066_02263d90();
}

void func_ov066_02263878(u32 idx) {
    u16 mask = ~(1 << idx);
    Unk_ov066_02263320_Rec *head = data_ov066_022647c8->unk_10;
    Unk_ov066_02263320_Rec *n = head;
    do {
        n->unk_0a = n->unk_0a & mask;
        n->unk_0c = n->unk_0c & mask;
        n = n->unk_00;
    } while (head != n);
}

s32 func_ov066_02263810(u32 x, u32 a, u32 b, u32 c, u32 d) {
    s32 r = WM_SetMPDataToPortEx((void *)func_ov066_0226378c, d, a, b, c, x, 2);
    if (r != 2 && r != 7) {
        func_ov066_0225f22c(r);
        return 0;
    }
    return 1;
}

void func_ov066_022637dc(u32 a, u32 b, u32 c, u32 d) {
    func_ov066_02263810(0xc, a, b, c, d);
}

void func_ov066_0226378c(Unk_ov066_02263320_Msg *m) {
    if (m->unk_02 == 0) {
        if (m->unk_20 == 0) {
            return;
        }
        m->unk_20(m);
        return;
    }
    func_ov066_0225f22c(m->unk_02);
    func_0206d49c();
}

Unk_ov066_02263320_Rec *func_ov066_0226375c(u32 id, Unk_ov066_02263320_Rec *head) {
    Unk_ov066_02263320_Rec *n;
    for (n = head->unk_00; head != n; n = n->unk_00) {
        if (n->unk_20.unk_00 == id) {
            return n;
        }
    }
    return 0;
}

void func_ov066_02263628(u32 idx, void *src, u32 size) {
    Unk_ov066_02263320_Hdr h;
    Unk_ov066_02263320_Rec *r;
    Unk_ov066_02263320_Rec *e;
    MI_CpuCopy8(src, &h, 2);
    if (h.b) {
        r = func_ov066_0226375c(h.c, data_ov066_022647c8->unk_10);
        if (r != 0) {
            r->unk_0c = r->unk_0c | (r->unk_0a & (1 << idx));
        }
    }
    if (h.a == 3) {
        if (data_ov066_022647c8->unk_14 != 0) {
            return;
        }
        r = func_ov066_0226375c(h.c, data_ov066_022647c8->unk_10);
        if (r != 0) {
            data_ov066_022647c8->unk_14 = r;
        }
        return;
    }
    if (h.a == 2) {
        return;
    }
    e = data_ov066_022647c8->unk_18[idx];
    MI_CpuCopy8(src, (u8 *)e + 0x24 + idx * data_ov066_022647c8->unk_00, size);
    e->unk_20.unk_02 = e->unk_20.unk_02 | (1 << idx);
    data_ov066_022647c8->unk_18[idx] = e->unk_04;
}

void func_ov066_022634e8(Unk_ov066_02263320_Msg *m) {
    Unk_ov066_02263320_G *g;
    Unk_ov066_02263320_Pay *p;
    if (m->unk_10 == 0) {
        return;
    }
    if (m->unk_12 != 0) {
        func_ov066_02263628(m->unk_12, m->unk_0c, m->unk_10);
        return;
    }
    g = data_ov066_022647c8;
    p = m->unk_0c;
    if (g->unk_04.f0 == 0) {
        if (p->unk_00 != ((g->lo + 1) & 0xf)) {
            goto cc;
        }
    }
    {
        Unk_ov066_02263320_Rec *e = g->unk_18[0];
        e->unk_20.unk_00 = p->unk_00;
        data_ov066_022647c8->unk_18[0] = e->unk_04;
    }
    func_ov066_02263b90(p);
    data_ov066_022647c8->unk_04.f0 = 0;
    data_ov066_022647c8->unk_04.f2 = 0;
    data_ov066_022647c8->lo = p->unk_00;
    return;
cc:
    if (p->unk_00 != ((g->lo + 2) & 0xf)) {
        g->unk_04.f1 = 1;
        return;
    }
    g->unk_04.f2 = 1;
    data_ov066_022647c8->hi = (data_ov066_022647c8->lo + 1) & 0xf;
}

void func_ov066_022634e4(Unk_ov066_02263320_Msg *m) {
}

void func_ov066_02263478(Unk_ov066_02263320_Msg *m) {
    u32 t;
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 != 0) {
        return;
    }
    t = m->unk_04;
    if (t == 7) {
        return;
    }
    if (t != 9) {
        if (t == 0x15) {
            func_ov066_022634e8(m);
        }
    } else {
        func_ov066_022634e4(m);
    }
}

void func_ov066_02263320(void) {
    u32 t = OS_DisableInterrupts();
    u16 i;
    data_ov066_022647c8->unk_10 = data_ov066_022647c8->unk_08;
    func_ov066_0226453c(data_ov066_022647c8->unk_08, 3);
    func_ov066_0226453c(data_ov066_022647c8->unk_0c, 3);
    for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
        data_ov066_022647c8->unk_18[i] = data_ov066_022647c8->unk_0c;
    }
    data_ov066_022647c8->lo = 0;
    data_ov066_022647c8->hi = 0;
    data_ov066_022647c8->unk_02 = 0;
    data_ov066_022647c8->unk_03 = 0;
    data_ov066_022647c8->unk_04.f0 = 1;
    data_ov066_022647c8->unk_04.f1 = 0;
    data_ov066_022647c8->unk_04.f2 = 0;
    data_ov066_022647c8->unk_04.f3 = 0;
    data_ov066_022647c8->unk_14 = 0;
    data_ov066_022647c8->unk_1c = 0;
    data_ov066_022647c8->unk_1e = 0;
    data_ov066_022647c8->unk_20 = 0;
    data_ov066_022647c8->unk_24 = 0;
    data_ov066_022647c8->unk_28 = -1;
    data_ov066_022647c8->unk_2c = 0;
    OS_RestoreInterrupts(t);
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef data_ov066_022647c8
#undef func_ov066_0226238c
#undef func_ov066_0226453c
#undef func_ov066_02263f54
#undef func_ov066_02263c3c

// ---- unk_022629cc
#define data_ov066_022647ac (*(Unk_ov066_022629cc_S * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_022629cc_V * *)&data_ov066_022647b4)
#define data_ov066_022647bc (*(u8 *)&data_ov066_022647bc)
#define data_ov066_022647c0 (*(u16 *)&data_ov066_022647c0)
#define data_ov066_022647c4 (*(u16 *)&data_ov066_022647c4)
#define data_ov066_022647c8 (*(Unk_ov066_022629cc_G * *)&data_ov066_022647c8)
#define func_ov066_0225f2c8 ((void * (*)(u32, u32))func_ov066_0225f2c8)
#define func_ov066_0226292c ((s32 (*)(u32))func_ov066_0226292c)
#define func_ov066_02260d74 ((s32 (*)(void *, void *))func_ov066_02260d74)

s32 func_ov066_02263284(s32 idx, u32 a, u32 b) {
    BOOL r = FALSE;
    u32 t = OS_DisableInterrupts();
    Unk_ov066_022629cc_G *g = data_ov066_022647c8;
    Unk_ov066_022629cc_E *p;
    if (g != NULL && (p = g->unk_30) != NULL && data_ov066_022647b4 != NULL && idx < (s32)data_ov066_022647ac->unk_0b) {
        if ((g->unk_1c & (1 << idx)) == 0) {
            p[idx].a = a;
            r = TRUE;
            p[idx].b = b;
        }
    }
    OS_RestoreInterrupts(t);
    return r;
}

void func_ov066_022631d0(Unk_ov066_022629cc_Ent *o, u32 id, s32 n) {
    volatile s32 z;
    s32 i;
    s32 size = n * 0xe0;
    o->unk_00 = id;
    o->unk_01 = 0;
    o->unk_02 = n;
    o->unk_0c = NULL;
    o->unk_04 = (Unk_ov066_022629cc_Rec *)func_ov066_0225f2c8(size, 0x20);
    o->unk_08 = (Unk_ov066_022629cc_Sub *)func_ov066_0225f2c8(n * 0x2c, 0x20);
    z = 0;
    MIi_CpuClearFast(z, o->unk_04, size);
    DC_StoreRange(o->unk_04, size);
    for (i = 0; i < n; i++) {
        OS_CreateAlarm(&o->unk_08[i]);
    }
}

void func_ov066_02263198(Unk_ov066_022629cc_Ent *o) {
    o->unk_01 = 0;
    o->unk_02 = 0;
    func_02114ef4(o->unk_00 + 0x80);
    func_ov066_0225f284(o->unk_08);
    func_ov066_0225f284(o->unk_04);
}

s32 func_ov066_02262e54(Unk_ov066_022629cc_Ent *o, s32 a, u8 *b, u32 c, u16 d, void *e) {
    u8 v8;
    Unk_ov066_022629cc_Rec *r;
    s32 i;
    u32 t;
    u32 v = d;
    s32 i2;
    if (v > 0xff) {
        v = 0xff;
    }
    v8 = v;
    if (o->unk_01 != 0) {
        for (i = 0; i < o->unk_02; i++) {
            Unk_ov066_022629cc_Rec *r = &o->unk_04[i];
            if (r->unk_00 == 1 && func_ov066_02260d74(r->unk_02, b) == 0) {
                s32 j, sum, k;
                u32 soff;
                u8 nw;
                u8 *p;
                OS_CancelAlarm(&o->unk_08[i]);
                t = OS_DisableInterrupts();
                o->unk_04[i].unk_08 = c;
                p = &o->unk_04->unk_0b;
                k = (u8)(p[i * 0xe0] + 1);
                nw = k % 6;
                p[i * 0xe0] = nw;
                o->unk_04[i].unk_0c[nw] = v8;
                sum = 0;
                for (j = 0; j < 6; j++) {
                    sum += o->unk_04[i].unk_0c[j];
                }
                o->unk_04[i].unk_0a = sum / 6;
                MIi_CpuCopyFast(e, o->unk_04[i].unk_20, 0xc0);
                DC_StoreRange(o->unk_04[i].unk_20, 0xc0);
                OS_RestoreInterrupts(t);
                soff = i * 0x2c;
                OS_SetAlarm((u8 *)o->unk_08 + soff, a * 0x82ea / 64, (void *)func_ov066_02262dfc, &o->unk_04[i]);
                func_02114f74((u8 *)o->unk_08 + soff, o->unk_00 + 0x80);
                return TRUE;
            }
        }
    }
    i2 = 0;
    if (i2 < *(volatile u8 *)&o->unk_02) {
    r = o->unk_04;
    do {
        if (r->unk_00 == 0) {
            s32 j, q;
            u32 off;
            t = OS_DisableInterrupts();
            o->unk_01 = o->unk_01 + 1;
            r->unk_00 = 1;
            r->unk_02[0] = b[0];
            r->unk_02[1] = b[1];
            r->unk_02[2] = b[2];
            r->unk_02[3] = b[3];
            r->unk_02[4] = b[4];
            r->unk_02[5] = b[5];
            r->unk_08 = c;
            r->unk_14 = o;
            r->unk_0b = 0;
            for (j = 0; j < 6; j++) {
                r->unk_0c[j] = v8;
            }
            r->unk_0a = v8;
            MIi_CpuCopyFast(e, r->unk_20, 0xc0);
            DC_StoreRange(r->unk_20, 0xc0);
            OS_RestoreInterrupts(t);
            OS_CancelAlarm(&o->unk_08[i2]);
            off = i2 * 0xe0;
            OS_SetAlarm(&o->unk_08[i2], a * 0x82ea / 64, (void *)func_ov066_02262dfc, (u8 *)o->unk_04 + off);
            func_02114f74(&o->unk_08[i2], o->unk_00 + 0x80);
            if (o->unk_0c != NULL) {
                o->unk_0c((Unk_ov066_022629cc_Rec *)((u8 *)o->unk_04 + off));
            }
            return TRUE;
        }
        i2++;
        r++;
    } while (i2 < *(volatile u8 *)&o->unk_02);
    }
    return FALSE;
}

void func_ov066_02262dfc(Unk_ov066_022629cc_Rec *r) {
    Unk_ov066_022629cc_Ent *o = r->unk_14;
    if (r->unk_00 != 1) {
        return;
    }
    o->unk_01 = o->unk_01 - 1;
    r->unk_00 = 0;
    if (o->unk_0c != NULL) {
        o->unk_0c(r);
    }
}

u32 func_ov066_02262df4(Unk_ov066_022629cc_Ent *o) {
    return o->unk_01;
}

Unk_ov066_022629cc_Rec *func_ov066_02262dd8(Unk_ov066_022629cc_Ent *o, u32 i) {
    if (i < o->unk_02) {
        return &o->unk_04[i];
    }
    return NULL;
}

void func_ov066_02262dc4(Unk_ov066_022629cc_Ent *o) {
    func_02114ef4(o->unk_00 + 0x80);
}

void func_ov066_02262d70(Unk_ov066_022629cc_Ent *o) {
    volatile s32 z;
    u32 n;
    func_ov066_02262dc4(o);
    o->unk_01 = 0;
    n = *(volatile u8 *)&o->unk_02;
    z = 0;
    MIi_CpuClearFast(z, o->unk_04, n * 0xe0);
    DC_StoreRange(o->unk_04, o->unk_02 * 0xe0);
}

void func_ov066_02262ca8(Unk_ov066_022629cc_Ent *o, s32 x) {
    s32 i = 0;
    if (i < o->unk_02) {
        s32 q = x * 0x82ea / 64;
        do {
            if (o->unk_04[i].unk_00 == 1) {
                OS_CancelAlarm(&o->unk_08[i]);
                OS_SetAlarm(&o->unk_08[i], q, (void *)func_ov066_02262dfc, &o->unk_04[i]);
                func_02114f74(&o->unk_08[i], o->unk_00 + 0x80);
            }
            i++;
        } while (i < o->unk_02);
    }
}

s32 func_ov066_02262c38(u32 i) {
    if (i < 0xe) {
        do {
            if (data_ov066_022647b4->unk_90 & (1 << i)) {
                if (func_ov066_02262b20((u16)(i + 1)) != 0) {
                    return TRUE;
                }
            }
            i = (u16)(i + 1);
        } while (i < 0xe);
    }
    return FALSE;
}

void func_ov066_02262be4(void) {
    u32 r = WM_GetAllowedChannel();
    if (r == 0) {
        func_ov066_0225f22c(0x41);
        return;
    }
    data_ov066_022647b4->unk_90 = r;
    r = MATH_CountPopulation();
    data_ov066_022647b4->unk_92 = r;
}

u32 func_ov066_02262b70(u32 a) {
    u32 idx = a;
    u32 n = 0;
    do {
        idx = (u16)(idx + 1);
        if (idx > 0xe) {
            idx = 1;
        }
        if (data_ov066_022647b4->unk_90 & (1 << (idx - 1))) {
            return idx;
        }
        n = (u16)(n + 1);
    } while (n < 0xe);
    return a;
}

s32 func_ov066_02262b20(u32 a) {
    s32 r = func_021218d0((void *)func_ov066_02262a34, 3, 0x11, a, 0x1e);
    if (r == 2) {
        return TRUE;
    }
    func_ov066_0225f22c(r);
    return FALSE;
}

void func_ov066_02262a34(Unk_ov066_022629cc_Msg *m) {
    if (m->unk_02 == 0) {
        u16 a = m->unk_0a;
        u16 b = m->unk_08;
        if (data_ov066_022647c4 > a) {
            data_ov066_022647c4 = a;
            data_ov066_022647c0 = 1 << (b - 1);
            data_ov066_022647bc = 1;
        } else if (data_ov066_022647c4 == a) {
            data_ov066_022647c0 = data_ov066_022647c0 | (1 << (b - 1));
            data_ov066_022647bc = data_ov066_022647bc + 1;
        }
        if (func_ov066_0226292c(b) != 0) {
            data_ov066_022647ac->unk_04 = 4;
            if (data_ov066_022647ac->unk_08 == 0xfe) {
                data_ov066_022647b4->unk_c0 &= ~0x80;
            }
            func_ov066_0225f5b4();
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022629cc(void) {
    data_ov066_022647ac->unk_04 = 5;
    data_ov066_022647bc = 0;
    data_ov066_022647c0 = 0;
    data_ov066_022647c4 = 0x65;
    data_ov066_022647b4->unk_8d = 0;
    func_ov066_0226292c(0);
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef data_ov066_022647bc
#undef data_ov066_022647c0
#undef data_ov066_022647c4
#undef data_ov066_022647c8
#undef func_ov066_0225f2c8
#undef func_ov066_0226292c
#undef func_ov066_02260d74

// ---- unk_02262074
#define data_ov066_022647ac (*(Unk_ov066_02262074_A * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_02262074_B * *)&data_ov066_022647b4)
#define data_ov066_022647bc (*(u8 *)&data_ov066_022647bc)
#define data_ov066_022647c0 (*(u16 *)&data_ov066_022647c0)
#define MI_CpuFill8 ((void (*)(void *, s32, s32))MI_CpuFill8)
#define func_ov066_0225f2c8 ((void * (*)(s32, s32))func_ov066_0225f2c8)
#define func_ov066_02260dac ((u32 (*)(void *))func_ov066_02260dac)
#define func_ov066_022613dc ((void (*)(void *))func_ov066_022613dc)
#define func_ov066_02262c38 ((s32 (*)(void))func_ov066_02262c38)

s32 func_ov066_0226292c(void) {
    if (func_ov066_02262c38() == 0) {
        if (data_ov066_022647bc != 0) {
            u8 i = 0;
            u32 t = func_ov066_022623ac();
            u32 sel = (u8)(t % data_ov066_022647bc);
            u16 m = data_ov066_022647c0;
            do {
                if ((m & (1 << i)) != 0) {
                    if (sel != 0) {
                        sel = (u8)(sel - 1);
                    } else {
                        data_ov066_022647b4->unk_8d = i + 1;
                        return 1;
                    }
                }
                i = i + 1;
            } while (i < 14);
        }
    }
    return 0;
}

void func_ov066_0226278c(void) {
    u8 buf[6];
    data_ov066_022647b4->unk_1e = 0xffff;
    data_ov066_022647b4->unk_8c = 1;
    data_ov066_022647b4->unk_c0.f0 = 0;
    data_ov066_022647b4->unk_c0.f1 = 0;
    data_ov066_022647b4->unk_c0.f2 = 0;
    data_ov066_022647b4->unk_c0.f3 = 0;
    data_ov066_022647b4->unk_c0.f4 = 0;
    data_ov066_022647b4->unk_c0.f5 = 0;
    data_ov066_022647b4->unk_c0.f6 = 0;
    data_ov066_022647b4->unk_c0.f10 = 0;
    if ((u8)(data_ov066_022647ac->unk_08 + 2) <= 1) {
        data_ov066_022647b4->unk_c0.f7 = 1;
        data_ov066_022647b4->unk_8d = 0;
        data_ov066_022647b4->unk_8e = 0;
        data_ov066_022647b4->unk_8f = 0;
    } else {
        data_ov066_022647b4->unk_c0.f7 = 0;
        data_ov066_022647b4->unk_8d = data_ov066_022647ac->unk_08;
        data_ov066_022647b4->unk_8e = 0;
        data_ov066_022647b4->unk_8f = data_ov066_022647ac->unk_08;
    }
    MI_CpuFill8(buf, 0, 6);
    s32 i;
    Unk_ov066_02262074_Row *e = (Unk_ov066_02262074_Row *)data_ov066_022647b4;
    for (i = 0; i < 16; i++) {
        e->e = *(Unk_ov066_02262074_Ent *)buf;
        e = (Unk_ov066_02262074_Row *)((u8 *)e + 6);
    }
}

void func_ov066_022625e8(void) {
    data_ov066_022647b4->unk_00 = (Unk_ov066_02262074_Rec *)func_ov066_0225f2c8(0x40, 0x20);
    data_ov066_022647b4->unk_08 = (Unk_ov066_02262074_Rec2 *)func_ov066_0225f2c8(0x70, 0x20);
    data_ov066_022647b4->unk_18 = 8;
    u32 a = ((data_ov066_022647ac->unk_18 + 0xe) * data_ov066_022647ac->unk_0a + 0x29) & ~0x1f;
    u32 b = (data_ov066_022647ac->unk_1c + 0x55) & ~0x1f;
    u16 x = (u16)(a << 1);
    u16 y = (u16)(b << 1);
    if (x <= y) {
        x = y;
    }
    data_ov066_022647b4->unk_1a = x;
    data_ov066_022647b4->unk_0c = func_ov066_0225f2c8(data_ov066_022647b4->unk_1a, 0x20);
    a = (data_ov066_022647ac->unk_1a + 0x23) & ~0x1f;
    b = (data_ov066_022647ac->unk_1e + 0x21) & ~0x1f;
    x = (u16)a;
    y = (u16)b;
    if (x <= y) {
        x = y;
    }
    data_ov066_022647b4->unk_1c = x;
    data_ov066_022647b4->unk_10 = func_ov066_0225f2c8(data_ov066_022647b4->unk_1c, 0x20);
    data_ov066_022647b4->unk_14 = func_ov066_0225f2c8(data_ov066_022647ac->unk_1e * 2, 0x20);
    data_ov066_022647b4->unk_b8 = 0;
    func_ov066_022608b8();
    OS_GetMacAddress(data_ov066_022647b4->unk_22);
    data_ov066_022647b8 = func_ov066_02260dac(data_ov066_022647b4->unk_24);
    data_ov066_022647ac->unk_04 = 2;
    data_ov066_022647ac->unk_00 = 0;
    func_ov066_0226278c();
}

void func_ov066_02262548(void) {
    if (data_ov066_022647b4 != NULL) {
        return;
    }
    data_ov066_022647b4 = (Unk_ov066_02262074_B *)func_ov066_0225f2c8(0xc4, 4);
    data_ov066_022647b4->unk_04 = (Unk_ov066_02262074_Buf *)func_ov066_0225f2c8(0xf00, 0x20);
    if (WM_Init(data_ov066_022647b4->unk_04, data_ov066_022647ac->unk_0d) == 0) {
        func_ov066_022625e8();
        return;
    }
    func_ov066_0225f284(data_ov066_022647b4->unk_04);
}

void func_ov066_02262464(void) {
    if (data_ov066_022647ac->unk_04 == 2) {
        if (func_0211f188() != 0) {
            return;
        }
        func_ov066_022607e8();
        func_ov066_0225f284(data_ov066_022647b4->unk_14);
        func_ov066_0225f284(data_ov066_022647b4->unk_10);
        func_ov066_0225f284(data_ov066_022647b4->unk_0c);
        func_ov066_0225f284(data_ov066_022647b4->unk_08);
        func_ov066_0225f284(data_ov066_022647b4->unk_00);
        func_ov066_0225f284(data_ov066_022647b4->unk_04);
        func_ov066_0225f284(data_ov066_022647b4);
        data_ov066_022647b4 = NULL;
        data_ov066_022647ac->unk_04 = 1;
    } else {
        func_ov066_0225f22c(0x44);
    }
}

void func_ov066_022623d4(void) {
    func_ov066_022607c0(0);
    data_ov066_022647b4->unk_c0.f2 = 0;
    data_ov066_022647b4->unk_9c();
    data_ov066_022647b4->unk_c0.f0 = 0;
    data_ov066_022647b4->unk_c0.f1 = 0;
    data_ov066_022647b4->unk_93 = 0;
    data_ov066_022647b4->unk_94 = 0;
    data_ov066_022647b4->unk_95 = 0;
    data_ov066_022647b4->unk_98 = 0;
    func_ov066_02261c5c();
    func_ov066_02262be4();
}

u32 func_ov066_022623ac(void) {
    u32 t = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b8 = t;
    return t;
}

u32 func_ov066_0226238c(void) {
    if (data_ov066_022647b4 != NULL) {
        return data_ov066_022647b4->unk_1e;
    }
    return 0xffff;
}

u32 func_ov066_0226233c(void) {
    if (func_ov066_0225ffcc() != 10) {
        return 0;
    }
    Unk_ov066_02262074_Data *d = (Unk_ov066_02262074_Data *)data_ov066_022647b4->unk_04->unk_04;
    DC_InvalidateRange(&d->unk_17e, 2);
    return d->unk_17e;
}

s32 func_ov066_022622f4(void) {
    if (data_ov066_022647b4 != NULL) {
        if (data_ov066_022647b4->unk_b4 != NULL) {
            return data_ov066_022647b4->unk_b4();
        }
    }
    return 0;
}

s32 func_ov066_022622ac(u32 a, u32 b, u32 c, u32 d) {
    if (data_ov066_022647b4 != NULL) {
        if (data_ov066_022647b4->unk_b0 != NULL) {
            return data_ov066_022647b4->unk_b0(a, b, c, d);
        }
    }
    return 0;
}

void func_ov066_0226223c(u32 a, u32 b) {
    Unk_ov066_02262074_Rec2 *r = data_ov066_022647b4->unk_08;
    if (a != 0xe34d) {
        r->unk_00 = a;
    }
    data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    r->unk_02 = data_ov066_022647b8;
    r->unk_04 = data_ov066_022647b4->unk_95;
    r->unk_05 = b;
    r->unk_06 = 5;
}

void func_ov066_0226214c(u32 a) {
    Unk_ov066_02262074_Rec *r = data_ov066_022647b4->unk_00;
    data_ov066_022647b4->unk_8c = 1;
    func_ov066_0226223c(a, 1);
    r->unk_00 = data_ov066_022647b4->unk_08;
    r->unk_04 = data_ov066_022647b4->unk_18;
    r->unk_08 = data_ov066_022647ac->unk_28;
    data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b4->unk_20 = data_ov066_022647b8;
    r->unk_0c = data_ov066_022647b4->unk_20;
    r->unk_0e = 1;
    r->unk_12 = 0;
    r->unk_14 = 0;
    r->unk_16 = 0;
    r->unk_10 = data_ov066_022647ac->unk_0a;
    r->unk_18 = WM_GetDispersionBeaconPeriod();
    r->unk_32 = data_ov066_022647b4->unk_8d;
    r->unk_34 = data_ov066_022647ac->unk_1a;
    r->unk_36 = data_ov066_022647ac->unk_1e;
}

void func_ov066_02262108(u32 a) {
    data_ov066_022647ac->unk_04 = 6;
    data_ov066_022647b4->unk_96 = 0;
    func_ov066_0226214c(a);
    func_ov066_0226160c();
}

void func_ov066_022620e8(void) {
    func_ov066_02262074(data_ov066_022647b4->unk_88, 0);
}

void func_ov066_02262074(u8 *p, u32 v) {
    if (data_ov066_022647ac->unk_04 != 4) {
        return;
    }
    if (p == NULL) {
        return;
    }
    data_ov066_022647ac->unk_04 = 8;
    {
        u32 w = v & 1;
        u32 c = *(u32 *)&data_ov066_022647b4->unk_c0;
        *(u32 *)&data_ov066_022647b4->unk_c0 = (c & ~0x40) | (w << 6);
    }
    func_ov066_022613dc(p + 0x20);
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef data_ov066_022647bc
#undef data_ov066_022647c0
#undef MI_CpuFill8
#undef func_ov066_0225f2c8
#undef func_ov066_02260dac
#undef func_ov066_022613dc
#undef func_ov066_02262c38

// ---- unk_02261764
#define data_ov066_022647ac (*(Unk_ov066_02261764_S * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_02261764_V * *)&data_ov066_022647b4)
#define MI_CpuFill8 ((s32 (*)(void *, u32, u32))MI_CpuFill8)
#define func_ov066_02261704 ((void (*)(u8 *))func_ov066_02261704)

s32 func_ov066_02261ff8(void *a, u32 n) {
    if (data_ov066_022647b4 != NULL && n <= 0x68) {
        u8 *p = (u8 *)data_ov066_022647b4->unk_08;
        data_ov066_022647b4->unk_c0.f4 = 1;
        MI_CpuCopy8(a, p + 8, n);
        p[7] = n;
        data_ov066_022647b4->unk_18 = (n + 9) & ~1;
        return TRUE;
    }
    return FALSE;
}

void func_ov066_02261f6c(u32 idx, u8 *src) {
    u8 buf[6];
    u8 *r;
    if (src != NULL) {
        MI_CpuCopy8(src, buf, 6);
    } else {
        MI_CpuFill8(buf, 0, 6);
    }
    r = (u8 *)data_ov066_022647b4 + idx * 6;
    *(Unk_ov066_02261764_R6 *)(r + 0x28) = *(Unk_ov066_02261764_R6 *)buf;
    func_ov066_02261c80();
}

void func_ov066_02261ee8(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    seed = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    h.a = 2;
    h.b = 8;
    data_ov066_022647b8 = seed;
    h.c = seed;
    MI_CpuCopy8(&h, data_ov066_022647b4->unk_14, 8);
    data_ov066_022647b4->unk_ac(data_ov066_022647b4->unk_14, 8, 1, 0);
}

void func_ov066_02261dfc(void) {
    Unk_ov066_02261764_Hdr h;
    u32 seed;
    if (data_ov066_022647b4->unk_c0.f0 != 0) {
        data_ov066_022647b4->unk_c0.f1 = 1;
        return;
    }
    data_ov066_022647b4->unk_c0.f0 = 1;
    data_ov066_022647b4->unk_c0.f1 = 0;
    h.a = 0;
    h.b = 0x68;
    seed = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
    data_ov066_022647b8 = seed;
    h.c = seed;
    MI_CpuCopy8(&h, data_ov066_022647b4->unk_14, 8);
    MI_CpuCopy8(data_ov066_022647b4->unk_28, data_ov066_022647b4->unk_14 + 8, 0x60);
    data_ov066_022647b4->unk_ac(data_ov066_022647b4->unk_14, 0x68, 0xffff, func_ov066_02261db0);
}

void func_ov066_02261db0(void) {
    data_ov066_022647b4->unk_c0.f0 = 0;
    if (data_ov066_022647b4->unk_c0.f1 == 0) {
        return;
    }
    func_ov066_02261dfc();
}

void func_ov066_02261ce0(u8 *a, u8 *b) {
    u16 i = 0;
    do {
        BOOL ra = func_ov066_022609e4(a + i * 6);
        BOOL rb = func_ov066_022609e4(b + i * 6);
        *(Unk_ov066_02261764_R6 *)(a + i * 6) = *(Unk_ov066_02261764_R6 *)(b + i * 6);
        if (ra == 0 && rb != 0) {
            func_ov066_0225f1c0(0, i);
        }
        if (ra != 0 && rb == 0) {
            func_ov066_0225f1c0(1, i);
        }
        i++;
    } while (i < 16);
}

void func_ov066_02261c80(void) {
    s32 i;
    u8 n;
    s32 off;
    n = 0;
    i = 0;
    off = 0;
    do {
        if (func_ov066_022609e4(data_ov066_022647b4->unk_28 + off) != 0) {
            n++;
        }
        i++;
        off += 6;
    } while (i < 16);
    data_ov066_022647b4->unk_8c = n;
}

void func_ov066_02261c5c(void) {
    MI_CpuFill8(data_ov066_022647b4->unk_28, 0, 0x60);
}

void func_ov066_02261bfc(Unk_ov066_02261764_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (func_ov066_02261650() != 0) {
        return;
    }
    if (data_ov066_022647b4->unk_1e == 0) {
        func_ov066_022618dc(m);
        return;
    }
    func_ov066_02261764(m);
}

void func_ov066_02261bc4(u32 a) {
    if (data_ov066_022647b4->unk_bc == NULL) {
        return;
    }
    data_ov066_022647b4->unk_bc(a);
}

void func_ov066_02261b14(void) {
    if (data_ov066_022647b4->unk_c0.f4 != 0) {
        func_ov066_0226223c(0xe34d, data_ov066_022647b4->unk_8c);
        func_ov066_022611b4();
        data_ov066_022647b4->unk_c0.f4 = 0;
    }
    if (data_ov066_022647ac->unk_04 != 6) {
        return;
    }
    data_ov066_022647b4->unk_96++;
    if (data_ov066_022647b4->unk_96 < data_ov066_022647ac->unk_14) {
        return;
    }
    func_ov066_0225f5b4();
}

void func_ov066_02261a4c(Unk_ov066_02261764_Msg *m) {
    data_ov066_022647b4->unk_c0.f4 = 1;
    if (data_ov066_022647ac->unk_04 == 6) {
        data_ov066_022647ac->unk_04 = 9;
        data_ov066_022647b4->unk_1e = 0;
        func_ov066_02261c5c();
        data_ov066_022647b4->unk_c0.f5 = 1;
        func_ov066_0226223c(0xbd8a, data_ov066_022647b4->unk_8c);
        func_ov066_022611b4();
    }
    func_ov066_02261f6c(m->unk_10, (u8 *)&m->unk_0a);
    func_ov066_0225f1c0(0, m->unk_10);
    if (data_ov066_022647b4->unk_8c < data_ov066_022647ac->unk_0b) {
        return;
    }
    func_ov066_02260e4c(0);
}

void func_ov066_02261958(Unk_ov066_02261764_Msg *m) {
    if (data_ov066_022647b4->unk_8c == data_ov066_022647ac->unk_0b) {
        func_ov066_02260e4c(1);
    }
    data_ov066_022647b4->unk_98 &= ~(1 << m->unk_10);
    func_ov066_02261f6c(m->unk_10, 0);
    func_ov066_0225f1c0(1, m->unk_10);
    if (data_ov066_022647b4->unk_8c <= 1) {
        if (data_ov066_022647b4->unk_c0.f2 != 0) {
            return;
        }
        data_ov066_022647b4->unk_9c();
        data_ov066_022647b4->unk_c0.f0 = 0;
        data_ov066_022647b4->unk_c0.f1 = 0;
    } else {
        func_ov066_02261bc4(m->unk_10);
        func_ov066_02261dfc();
        data_ov066_022647b4->unk_c0.f4 = 1;
    }
}

void func_ov066_022618dc(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    MI_CpuCopy8(m->unk_0c, b, 4);
    if (b[0] == 0) {
        return;
    }
    if (b[0] == 1) {
        return;
    }
    if (b[0] != 2) {
        return;
    }
    func_ov066_02261894(m->unk_12, m->unk_0c);
}

void func_ov066_02261894(u32 idx, u8 *src) {
    u8 buf[8];
    MI_CpuCopy8(src, buf, 8);
    data_ov066_022647b4->unk_98 |= 1 << idx;
    func_ov066_02261dfc();
}

void func_ov066_02261860(Unk_ov066_02261764_Msg *m) {
    data_ov066_022647ac->unk_04 = 9;
    data_ov066_022647b4->unk_1e = m->unk_0a;
    func_ov066_022610b0();
}

void func_ov066_0226185c(void) {
}

void func_ov066_022617d4(void) {
    data_ov066_022647ac->unk_04 = 4;
    data_ov066_022647b4->unk_9c();
    if (data_ov066_022647ac->unk_3c.f8 != 0) {
        func_ov066_02261f6c(0, 0);
    }
    if (data_ov066_022647b4->unk_c0.f2 == 0) {
        func_ov066_0225f824();
    }
    func_ov066_0225f1c0(2, 0);
}

void func_ov066_02261764(Unk_ov066_02261764_Msg *m) {
    u16 b[4];
    if (m->unk_10 == 0) {
        return;
    }
    MI_CpuCopy8(m->unk_0c, b, 4);
    switch (b[0]) {
    case 0:
        func_ov066_02261704(m->unk_0c);
        break;
    case 1:
        return;
    case 2:
        break;
    }
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef MI_CpuFill8
#undef func_ov066_02261704

// ---- unk_02260e18
#define data_ov066_022647ac (*(Unk_ov066_02260e18_S * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_02260e18_V * *)&data_ov066_022647b4)
#define OS_DisableInterrupts ((s32 (*)(void))OS_DisableInterrupts)
#define OS_RestoreInterrupts ((s32 (*)(s32))OS_RestoreInterrupts)
#define func_ov066_02261f6c ((void (*)(u32, void *))func_ov066_02261f6c)
#define func_ov066_02261860 ((void (*)(void *))func_ov066_02261860)
#define func_ov066_0226185c ((void (*)(void *))func_ov066_0226185c)
#define func_ov066_022617d4 ((void (*)(void *))func_ov066_022617d4)
#define func_ov066_02261b14 ((void (*)(void *))func_ov066_02261b14)
#define func_ov066_02261a4c ((void (*)(void *))func_ov066_02261a4c)
#define func_ov066_02261958 ((void (*)(void *))func_ov066_02261958)
#define func_ov066_02261ce0 ((void (*)(void *, void *))func_ov066_02261ce0)
#define func_ov066_02260dd0 ((void (*)(void))func_ov066_02260dd0)

void func_ov066_02261704(void *m) {
    u8 buf[8];
    MI_CpuCopy8(m, buf, 8);
    func_ov066_02261ce0((u8 *)data_ov066_022647b4 + 0x28, (u8 *)m + 8);
    func_ov066_02261c80();
    if (data_ov066_022647ac->unk_04 == 9) {
        data_ov066_022647ac->unk_04 = 11;
    }
    func_ov066_0225f5b4();
}

void func_ov066_022616c8(void) {
    s32 t = OS_DisableInterrupts();
    Unk_ov066_02260e18_V *v = data_ov066_022647b4;
    if (v->unk_c0.f3 == 0) {
        v->unk_c0.f2 = 1;
    }
    OS_RestoreInterrupts(t);
}

s32 func_ov066_02261650(void) {
    if (data_ov066_022647b4->unk_c0.f2 != 0 && data_ov066_022647b4->unk_c0.f3 == 0) {
        func_ov066_02260efc();
        data_ov066_022647b4->unk_c0.f3 = 1;
        data_ov066_022647b4->unk_c0.f2 = 0;
        return 1;
    }
    return 0;
}

void func_ov066_0226160c(void) {
    s32 r = WM_SetParentParameter((void *)func_ov066_022615d8, data_ov066_022647b4->unk_00);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_022615d8(Unk_ov066_02260e18_Msg *m) {
    if (m->unk_02 == 0) {
        func_ov066_022615a4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022615a4(void) {
    s32 r = WM_StartParent((void *)func_ov066_022614c4);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_022614c4(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_08) {
        case 0:
            break;
        case 2:
            func_ov066_02261b14(m);
            break;
        case 7:
            func_ov066_02261a4c(m);
            break;
        case 9:
            if (data_ov066_022647b4->unk_c0.f2 != 0) {
                func_ov066_0225f824();
            } else {
                func_ov066_02261958(m);
            }
            break;
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_02261490(void) {
    s32 r = WM_EndParent((void *)func_ov066_02261420);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02261420(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        if (data_ov066_022647b4->unk_c0.f3 != 0) {
            func_ov066_0226278c();
        }
        func_ov066_0225f5b4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022613dc(u32 a) {
    s32 r = func_0211fcbc((void *)func_ov066_022612cc, a, 0, 1, 0);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_022612cc(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_08) {
        case 6:
            break;
        case 7:
            func_ov066_02261860(m);
            break;
        case 8:
            func_ov066_0226185c(m);
            break;
        case 9:
            if (data_ov066_022647b4->unk_c0.f2 != 0) {
                func_ov066_0225f824();
            } else {
                func_ov066_022617d4(m);
            }
            break;
        default:
            func_ov066_0225f22c(0x10);
            break;
        }
    } else if (m->unk_02 == 1) {
        if (data_ov066_022647b4->unk_c0.f6 != 0) {
            func_ov066_0225f3c8((void *)func_ov066_02260dd0);
        } else {
            func_ov066_0225f824();
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

s32 func_ov066_0226128c(u32 a) {
    s32 r = WM_Disconnect((void *)func_ov066_02261238, a);
    if (r == 2) {
        return 1;
    }
    func_ov066_0225f22c(r);
    return 0;
}

void func_ov066_02261238(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0226278c();
        func_ov066_0225f5b4();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022611b4(void) {
    Unk_ov066_02260e18_S *s = data_ov066_022647ac;
    u32 t = s->unk_0b;
    u32 f = (*(Unk_ov066_02260e18_V *volatile *)&data_ov066_022647b4)->unk_8c < t;
    Unk_ov066_02260e18_V *v = *(Unk_ov066_02260e18_V *volatile *)&data_ov066_022647b4;
    s32 r = WM_SetGameInfo((void *)func_ov066_02261158, v->unk_08, v->unk_18, s->unk_28, v->unk_20, f);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02261158(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (data_ov066_022647b4->unk_c0.f5 == 0) {
            return;
        }
        func_ov066_022610b0();
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_022610b0(void) {
    s32 r = func_021206b4((void *)func_ov066_02260f30, data_ov066_022647b4->unk_0c, data_ov066_022647b4->unk_1a,
                          data_ov066_022647b4->unk_10, data_ov066_022647b4->unk_1c, data_ov066_022647ac->unk_17, 4,
                          data_ov066_022647ac->unk_3c.f0, data_ov066_022647ac->unk_3c.f1, 1,
                          data_ov066_022647ac->unk_3c.f2);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260f30(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        switch (m->unk_04) {
        case 10:
            data_ov066_022647b4->unk_c0.f5 = 0;
            data_ov066_022647ac->unk_3c.f12 = 1;
            data_ov066_022647b4->unk_9c();
            data_ov066_022647b4->unk_c0.f0 = 0;
            data_ov066_022647b4->unk_c0.f1 = 0;
            if (data_ov066_022647b4->unk_1e == 0) {
                func_ov066_02261f6c(0, &data_ov066_022647b4->unk_22[0]);
                if (data_ov066_022647ac->unk_04 != 10) {
                    data_ov066_022647ac->unk_04 = 10;
                }
                func_ov066_02261dfc();
                func_ov066_0225f5b4();
            } else {
                func_ov066_02261ee8();
            }
            break;
        case 11:
            func_ov066_02261650();
            if (data_ov066_022647b4->unk_a0 != NULL) {
                data_ov066_022647b4->unk_a0();
            }
            break;
        case 12:
            func_ov066_02261650();
            break;
        case 13:
            if (data_ov066_022647b4->unk_a4 != NULL) {
                data_ov066_022647b4->unk_a4();
            }
            break;
        }
    } else {
        if (m->unk_02 != 9 && m->unk_02 != 0xd && m->unk_02 != 0xf) {
            func_ov066_0225f22c(m->unk_02);
        }
    }
}

void func_ov066_02260efc(void) {
    s32 r = WM_EndMP((void *)func_ov066_02260e84);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260e84(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (data_ov066_022647b4->unk_c0.f3 == 0) {
            return;
        }
        if (data_ov066_022647b4->unk_1e == 0) {
            func_ov066_02261490();
        } else {
            func_ov066_0226128c(0);
        }
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

void func_ov066_02260e4c(u32 a) {
    s32 r = WM_SetEntry((void *)func_ov066_02260e18, a);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260e18(Unk_ov066_02260e18_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef OS_DisableInterrupts
#undef OS_RestoreInterrupts
#undef func_ov066_02261f6c
#undef func_ov066_02261860
#undef func_ov066_0226185c
#undef func_ov066_022617d4
#undef func_ov066_02261b14
#undef func_ov066_02261a4c
#undef func_ov066_02261958
#undef func_ov066_02261ce0
#undef func_ov066_02260dd0

// ---- unk_02260518
#define data_ov066_022647ac (*(Unk_ov066_02260518_A * *)&data_ov066_022647ac)
#define data_ov066_022647b4 (*(Unk_ov066_02260518_C * *)&data_ov066_022647b4)
#define OS_CancelAlarm ((void (*)(void *))OS_CancelAlarm)
#define OS_CreateAlarm ((void (*)(void *))OS_CreateAlarm)
#define OS_SetAlarm ((void (*)(void *, s64, void (*)(void), u32))OS_SetAlarm)
#define OS_RestoreInterrupts ((void (*)(u32))OS_RestoreInterrupts)
#define func_ov066_0225f2c8 ((void * (*)(u32, u32))func_ov066_0225f2c8)
#define func_ov066_02260144 ((Unk_ov066_02260518_Rec * (*)(u32, u32))func_ov066_02260144)
#define func_ov066_02262074 ((void (*)(void *, s32))func_ov066_02262074)
#define func_ov066_022629cc ((void (*)(u32))func_ov066_022629cc)
#define func_ov066_02262ca8 ((void (*)(void *, s32))func_ov066_02262ca8)
#define func_ov066_02262d70 ((void (*)(void *))func_ov066_02262d70)
#define func_ov066_02263198 ((void (*)(void *))func_ov066_02263198)
#define func_ov066_022631d0 ((void (*)(void *, u8, u32))func_ov066_022631d0)

void func_ov066_02260dd0(Unk_ov066_02260dd0_Msg *m) {
    func_ov066_0225f310();
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_02260670(0x64);
    } else {
        func_ov066_0225f22c(m->unk_02);
    }
}

u32 func_ov066_02260dac(u8 *p) {
    return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

s32 func_ov066_02260d74(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 6; i++) {
        u32 bb = b[i];
        u32 aa = a[i];
        if (aa > bb) {
            return 1;
        }
        if (aa < bb) {
            return -1;
        }
    }
    return 0;
}

void func_ov066_02260d30(u32 v) {
    if (data_ov066_022647b4->unk_c0.f7) {
        func_ov066_022629cc(v);
    } else {
        func_ov066_02262108(v);
    }
}

s32 func_ov066_02260cac(Unk_ov066_02260518_Rec *p, u32 a, u32 b) {
    if (p != NULL && p->unk_00 != 0 && (p->unk_08 == 0x2348 || p->unk_08 == 0xbd8a)) {
        data_ov066_022647b4->unk_88 = p;
        data_ov066_022647b4->unk_c0.f9 = 1;
        return func_ov066_0225fc78(5, a, b);
    }
    return 0;
}

void func_ov066_02260c8c(void) {
    func_ov066_02260670(0);
    func_ov066_0225f5b4();
}

void func_ov066_02260c28(void) {
    data_ov066_022647b4->unk_94 = data_ov066_022647b4->unk_94 + 1;
    if (data_ov066_022647b4->unk_94 >= 4) {
        data_ov066_022647b4->unk_94 = 0;
        data_ov066_022647b8 = data_ov066_022647b8 * 0x5eedf715 + 0x1b0cb173;
        data_ov066_022647b4->unk_93 = data_ov066_022647b8 & 3;
    }
}

BOOL func_ov066_02260b4c(void) {
    u8 i;
    Unk_ov066_02260518_Rec *best = NULL;
    i = 0;
    if (i < data_ov066_022647ac->unk_0c) {
        do {
            Unk_ov066_02260518_Rec *e = func_ov066_02260144(data_ov066_022647b4->unk_95, i);
            if (e->unk_00 != 0) {
                if (*(volatile u16 *)&e->unk_08 == 0xbd8a) {
                    best = e;
                    break;
                }
                if (*(volatile u16 *)&e->unk_08 == 0x2348) {
                    if (best != NULL) {
                        if (func_ov066_02260d74(e->unk_02, best->unk_02) != 0) {
                            best = e;
                        }
                    } else {
                        best = e;
                    }
                }
            }
            i++;
        } while (i < data_ov066_022647ac->unk_0c);
    }
    if (best == NULL) {
        return FALSE;
    }
    func_ov066_02262074(best, 1);
    return TRUE;
}

void func_ov066_02260a58(void) {
    s32 r = 0;
    if (data_ov066_022647b4->unk_c0.f8) {
        if (func_ov066_022601a0(data_ov066_022647b4->unk_95) > 0) {
            r = func_ov066_02260b4c();
        }
    }
    if (r != 0) {
        return;
    }
    if (data_ov066_022647b4->unk_94 == data_ov066_022647b4->unk_93) {
        switch (data_ov066_022647ac->unk_04) {
        case 6:
            func_ov066_02261490();
            break;
        case 4:
        case 7:
            func_ov066_02260c28();
            func_ov066_02260670(data_ov066_022647ac->unk_20);
            break;
        }
    } else {
        switch (data_ov066_022647ac->unk_04) {
        case 4:
            func_ov066_02260d30(0x2348);
        case 6:
            func_ov066_02260c28();
            break;
        }
    }
}

u8 func_ov066_02260a3c(void) {
    if (data_ov066_022647b4 != NULL) {
        return data_ov066_022647b4->unk_8c;
    }
    return 0;
}

BOOL func_ov066_022609e4(u8 *p) {
    if (p[0] != 0 || p[1] != 0 || p[2] != 0 || p[3] != 0 || p[4] != 0 || p[5] != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov066_022609a8(u32 v) {
    if (data_ov066_022647b4 == NULL) {
        return;
    }
    u32 s = OS_DisableInterrupts();
    data_ov066_022647b4->unk_b8 = v;
    OS_RestoreInterrupts(s);
}

void func_ov066_022608b8(void) {
    s32 i;
    data_ov066_022647b0 = (Unk_ov066_02260518_B *)func_ov066_0225f2c8(0x70, 4);
    data_ov066_022647b0->unk_00 = (Unk_ov066_02260518_Head *)func_ov066_0225f2c8(0x20, 0x20);
    data_ov066_022647b0->unk_04 = (u32)func_ov066_0225f2c8(0xc0, 0x20);
    data_ov066_022647b0->unk_08 = (Unk_ov066_02260518_Elem *)func_ov066_0225f2c8(data_ov066_022647ac->unk_09 << 4, 4);
    for (i = 0; i < data_ov066_022647ac->unk_09; i++) {
        func_ov066_022631d0(&data_ov066_022647b0->unk_08[i], i, data_ov066_022647ac->unk_0c);
    }
    OS_CreateAlarm(&data_ov066_022647b0->unk_10);
    OS_CreateAlarm(&data_ov066_022647b0->unk_3c);
}

void func_ov066_022607e8(void) {
    s32 i;
    for (i = data_ov066_022647ac->unk_09 - 1; i >= 0; i--) {
        func_ov066_02263198(&data_ov066_022647b0->unk_08[i]);
    }
    func_ov066_0225f284(data_ov066_022647b0->unk_08);
    func_ov066_0225f284((void *)data_ov066_022647b0->unk_04);
    func_ov066_0225f284(data_ov066_022647b0->unk_00);
    data_ov066_022647b0->unk_6c = 0;
    data_ov066_022647b0->unk_0c.f0 = 0;
    OS_CancelAlarm(&data_ov066_022647b0->unk_3c);
    OS_CancelAlarm(&data_ov066_022647b0->unk_10);
    func_ov066_0225f284(data_ov066_022647b0);
    data_ov066_022647b0 = NULL;
}

void func_ov066_022607c0(s32 v) {
    u32 s = OS_DisableInterrupts();
    data_ov066_022647b0->unk_6c = v;
    OS_RestoreInterrupts(s);
}

u32 func_ov066_02260774(u32 idx) {
    u8 *p = data_ov066_022647ac->unk_10;
    if (p != NULL) {
        return p[idx];
    }
    return func_ov066_02262b70(data_ov066_022647b4->unk_8e);
}

void func_ov066_02260670(s32 t) {
    if (data_ov066_022647ac->unk_3c.f3) {
        func_ov066_02262d70(&data_ov066_022647b0->unk_08[data_ov066_022647b4->unk_95]);
    } else {
        func_ov066_02262ca8(&data_ov066_022647b0->unk_08[data_ov066_022647b4->unk_95], 0x1f4);
        func_ov066_022607c0(0);
    }
    data_ov066_022647b0->unk_0c.f1 = 1;
    data_ov066_022647b0->unk_0c.f0 = 0;
    if (t != 0) {
        OS_CancelAlarm(&data_ov066_022647b0->unk_10);
        OS_SetAlarm(&data_ov066_022647b0->unk_10, t * 0x82ea / 64, func_ov066_02260634, 0);
    }
    func_ov066_022605cc();
}

void func_ov066_02260634(void) {
    if (data_ov066_022647b0->unk_0c.f0) {
        return;
    }
    func_ov066_022605a0();
}

void func_ov066_022605cc(void) {
    data_ov066_022647ac->unk_04 = 7;
    func_ov066_02260518();
    func_ov066_02260100();
    data_ov066_022647b4->unk_95++;
    if (data_ov066_022647b4->unk_95 >= data_ov066_022647ac->unk_09) {
        data_ov066_022647b4->unk_95 = 0;
    }
}

void func_ov066_022605a0(void) {
    data_ov066_022647b0->unk_0c.f1 = 0;
    OS_CancelAlarm(&data_ov066_022647b0->unk_10);
}

void func_ov066_02260518(void) {
    Unk_ov066_02260518_Head *r = data_ov066_022647b0->unk_00;
    data_ov066_022647b4->unk_8e = func_ov066_02260774(data_ov066_022647b4->unk_95);
    r->unk_00 = data_ov066_022647b0->unk_04;
    r->unk_04 = data_ov066_022647b4->unk_8e;
    r->unk_06 = data_ov066_022647ac->unk_22;
    r->unk_08 = 0xff;
    r->unk_09 = 0xff;
    r->unk_0a = 0xff;
    r->unk_0b = 0xff;
    r->unk_0c = 0xff;
    r->unk_0d = 0xff;
}
#undef data_ov066_022647ac
#undef data_ov066_022647b4
#undef OS_CancelAlarm
#undef OS_CreateAlarm
#undef OS_SetAlarm
#undef OS_RestoreInterrupts
#undef func_ov066_0225f2c8
#undef func_ov066_02260144
#undef func_ov066_02262074
#undef func_ov066_022629cc
#undef func_ov066_02262ca8
#undef func_ov066_02262d70
#undef func_ov066_02263198
#undef func_ov066_022631d0

// ---- unk_0225faf8
#define data_ov066_022647ac (*(Unk_ov066_0225faf8_S * *)&data_ov066_022647ac)
#define data_ov066_022647b0 (*(Unk_ov066_0225faf8_T * *)&data_ov066_022647b0)
#define data_ov066_022647b4 (*(Unk_ov066_0225faf8_V * *)&data_ov066_022647b4)
#define DC_InvalidateRange ((s32 (*)(void *, s32))DC_InvalidateRange)
#define OS_SetAlarm ((s32 (*)(void *, s32, s32, void *, s32))OS_SetAlarm)
#define func_ov066_0225f2c8 ((void * (*)(u32, u32))func_ov066_0225f2c8)
#define func_ov066_02262dc4 ((void * (*)(void *))func_ov066_02262dc4)
#define func_ov066_02262dd8 ((s32 (*)(void *, u32))func_ov066_02262dd8)
#define func_ov066_02262df4 ((s32 (*)(void *))func_ov066_02262df4)
#define func_ov066_02262e54 ((void (*)(void *, s32, void *, u32, u32, void *))func_ov066_02262e54)

void func_ov066_02260318(Unk_ov066_0225faf8_Msg *m) {
    volatile u16 buf[4];
    DC_InvalidateRange(data_ov066_022647b0->unk_04, 0xc0);
    Unk_ov066_0225faf8_W *w = data_ov066_022647b0->unk_04;
    if (w->unk_3c == 0) {
        if (data_ov066_022647ac->unk_3c.f4 != 0) {
            return;
        }
        func_ov066_02262e54(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16, 0xfa0, &m->unk_0a, 0xacce, m->unk_12, w);
        return;
    }
    if ((w->unk_4b & 1) == 0) {
        return;
    }
    MI_CpuCopy8(w->unk_50, (void *)buf, 8);
    DC_StoreRange((void *)buf, 8);
    if (func_ov066_022601fc(m, (u8 *)buf) == 0) {
        return;
    }
    func_ov066_02262e54(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16, 0xfa0, &m->unk_0a, buf[0], m->unk_12, data_ov066_022647b0->unk_04);
    if (data_ov066_022647ac->unk_3c.f3 == 0) {
        return;
    }
    if (buf[0] == 0xbd8a) {
        func_ov066_022602c8();
        return;
    }
    if (buf[0] != 0x2348) {
        return;
    }
    if (data_ov066_022647b0->unk_0c.f0 != 0) {
        return;
    }
    OS_CancelAlarm(&data_ov066_022647b0->unk_3c);
    OS_SetAlarm(&data_ov066_022647b0->unk_3c, 0x3d5d, 0, (void *)func_ov066_0226030c, 0);
    data_ov066_022647b0->unk_0c.f0 = 1;
}

void func_ov066_0226030c(void) {
    func_ov066_022602c8();
}

void func_ov066_022602c8(void) {
    data_ov066_022647b4->unk_c0 |= 0x100;
    OS_CancelAlarm(&data_ov066_022647b0->unk_3c);
    func_ov066_022605a0();
}

s32 func_ov066_022601fc(void *a, u8 *b) {
    Unk_ov066_0225faf8_S *s = data_ov066_022647ac;
    if (s->unk_3c.f5 != 0) {
        if (data_ov066_022647b0->unk_04->unk_44 != s->unk_28) {
            goto fail;
        }
    }
    if (s->unk_3c.f6 != 0) {
        if (b[4] != data_ov066_022647b4->unk_95) {
            goto fail;
        }
    }
    if (s->unk_3c.f7 != 0) {
        if (b[6] != 5) {
            goto fail;
        }
    }
    if (data_ov066_022647b0->unk_6c == NULL) {
        return 1;
    }
    return data_ov066_022647b0->unk_6c(a);
fail:
    return 0;
}

s32 func_ov066_022601a0(u32 idx) {
    Unk_ov066_0225faf8_T *t = data_ov066_022647b0;
    if (t != NULL && idx < data_ov066_022647ac->unk_09) {
        return func_ov066_02262df4(t->unk_08 + idx * 16);
    }
    return 0;
}

s32 func_ov066_02260144(u32 idx, u32 b) {
    Unk_ov066_0225faf8_T *t = data_ov066_022647b0;
    if (t != NULL && idx < data_ov066_022647ac->unk_09) {
        return func_ov066_02262dd8(t->unk_08 + idx * 16, b);
    }
    return 0;
}

void func_ov066_02260100(void) {
    s32 r = WM_StartScan((void *)func_ov066_02260060, data_ov066_022647b0->unk_00);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_02260060(Unk_ov066_0225faf8_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        if (m->unk_08 != 4) {
            if (m->unk_08 != 5) {
                return;
            }
            func_ov066_02260318(m);
        }
        if (data_ov066_022647b0->unk_0c.f1 != 0) {
            func_ov066_022605cc();
            return;
        }
        func_ov066_02262dc4(data_ov066_022647b0->unk_08 + data_ov066_022647b4->unk_95 * 16);
        func_ov066_0226004c();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

s32 func_ov066_0226004c(void) {
    return WM_EndScan((void *)func_ov066_0225fffc);
}

void func_ov066_0225fffc(Unk_ov066_0225faf8_Msg *m) {
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0225f5b4();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

s32 func_ov066_0225ffcc(void) {
    s32 r = 0;
    u32 irq = OS_DisableInterrupts();
    Unk_ov066_0225faf8_S *s = data_ov066_022647ac;
    if (s != NULL) {
        r = s->unk_04;
    }
    OS_RestoreInterrupts(irq);
    return r;
}

void func_ov066_0225fef0(u32 a) {
    data_ov066_022647ac->unk_00 = 7;
    data_ov066_022647ac->unk_04 = 1;
    data_ov066_022647ac->unk_08 = 0xfe;
    data_ov066_022647ac->unk_09 = 1;
    data_ov066_022647ac->unk_0a = 0;
    data_ov066_022647ac->unk_0b = 0;
    data_ov066_022647ac->unk_0c = 0;
    data_ov066_022647ac->unk_0d = a;
    data_ov066_022647ac->unk_10 = 0;
    data_ov066_022647ac->unk_15 = 0;
    data_ov066_022647ac->unk_16 = 0;
    data_ov066_022647ac->unk_30 = 0;
    data_ov066_022647ac->unk_34 = 0;
    data_ov066_022647ac->unk_38 = 0;
    data_ov066_022647ac->unk_3c.f11 = 0;
    data_ov066_022647ac->unk_3c.f10 = 0;
    data_ov066_022647ac->unk_3c.f12 = 0;
    data_ov066_022647ac->unk_3c.f11 = 0;
}

s32 func_ov066_0225fe4c(u32 a, void *(*b)(u32, u32), void (*c)(void *), void (*d)(u32)) {
    if (data_ov066_022647ac == NULL) {
        data_ov066_022647a8 = b;
        data_ov066_022647a4 = c;
        data_ov066_022647a0 = d;
        data_ov066_022647ac = (Unk_ov066_0225faf8_S *)func_ov066_0225f2c8(0x40, 4);
        if (data_ov066_022647ac != NULL) {
            OS_InitTick();
            OS_InitAlarm();
            if (func_0211f7e4() != 0) {
                func_ov066_0225fef0(a);
                return 1;
            }
            func_ov066_0225f22c(0x41);
            func_ov066_0225f284(data_ov066_022647ac);
        }
    }
    return 0;
}

s32 func_ov066_0225fdc4(void) {
    if (data_ov066_022647ac->unk_04 == 1) {
        data_ov066_022647ac->unk_04 = 0;
        func_ov066_0225f284(data_ov066_022647ac);
        data_ov066_022647a8 = NULL;
        data_ov066_022647a4 = NULL;
        data_ov066_022647a0 = NULL;
        data_ov066_022647ac = NULL;
        return 1;
    }
    func_ov066_0225f22c(0x44);
    return 0;
}

s32 func_ov066_0225fd08(void) {
    s32 r = 0;
    switch (data_ov066_022647ac->unk_00) {
    case 0:
        if (data_ov066_022647ac->unk_04 == 2) {
            r = 1;
        }
        break;
    case 1:
        if (data_ov066_022647ac->unk_04 == 3) {
            r = 1;
        }
        break;
    case 2:
        if (data_ov066_022647ac->unk_04 == 4) {
            r = 1;
        }
        break;
    case 3:
        if (data_ov066_022647ac->unk_04 == 10) {
            r = 1;
        }
        break;
    case 4:
        if (data_ov066_022647ac->unk_04 == 7) {
            r = 1;
        }
        break;
    case 5:
        if (data_ov066_022647ac->unk_04 == 11) {
            r = 1;
        }
        break;
    case 6:
        {
            s32 t = 1;
            if (data_ov066_022647ac->unk_04 != 10) {
                if (data_ov066_022647ac->unk_04 != 11) {
                    t = r;
                }
            }
            r = t;
        }
        break;
    }
    return r;
}

s32 func_ov066_0225fc78(s32 a, u32 b, u32 c) {
    if (data_ov066_022647ac == NULL) {
        return 0;
    }
    if (a >= 7 || a == data_ov066_022647ac->unk_00) {
        return 0;
    }
    data_ov066_022647ac->unk_00 = a;
    data_ov066_022647ac->unk_30 = b;
    data_ov066_022647ac->unk_34 = c;
    if (data_ov066_022647ac->unk_3c.f11 == 0) {
        data_ov066_022647ac->unk_3c.f11 = 1;
        func_ov066_0225f830();
    }
    return 1;
}

void func_ov066_0225fc3c(void) {
    s32 v = data_ov066_022647ac->unk_00;
    if (v <= 0) {
        return;
    }
    func_ov066_0225f514(0);
}

void func_ov066_0225fbe4(void) {
    s32 v = data_ov066_022647ac->unk_00;
    if (v < 1) {
        func_ov066_0225f514(1);
        return;
    }
    if (v <= 1) {
        return;
    }
    func_ov066_0225f514(2);
}

void func_ov066_0225fb48(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
        func_ov066_0225f514(3);
        break;
    case 2:
        break;
    case 3:
        func_ov066_02260d30(0xbd8a);
        break;
    case 4:
        func_ov066_02260c8c();
        break;
    case 5:
        func_ov066_022620e8();
        break;
    case 6:
        func_ov066_02260a58();
        break;
    }
}

void func_ov066_0225faf8(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
        func_ov066_0225f824();
        break;
    case 3:
        break;
    }
}
#undef data_ov066_022647ac
#undef data_ov066_022647b0
#undef data_ov066_022647b4
#undef DC_InvalidateRange
#undef OS_SetAlarm
#undef func_ov066_0225f2c8
#undef func_ov066_02262dc4
#undef func_ov066_02262dd8
#undef func_ov066_02262df4
#undef func_ov066_02262e54

// ---- unk_ov066_0225f1a0
#define data_ov066_022647ac (*(Unk_ov066_0225f1a0_S * *)&data_ov066_022647ac)
#define data_ov066_022647a8 (*(s32 (**)(s32, s32))&data_ov066_022647a8)

void func_ov066_0225fa98(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        func_ov066_022605a0();
        break;
    case 4:
        break;
    }
}

void func_ov066_0225fa48(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        break;
    }
}

void func_ov066_0225f9f8(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
        func_ov066_0225f824();
        break;
    case 3:
    case 4:
    case 5:
    case 6:
        break;
    }
}

void func_ov066_0225f998(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 5:
        func_ov066_022616c8();
        break;
    case 3:
        break;
    }
}

void func_ov066_0225f938(void) {
    switch (data_ov066_022647ac->unk_00) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 6:
        func_ov066_0225f824();
        break;
    case 3:
        func_ov066_022616c8();
        break;
    case 5:
        break;
    }
}

void func_ov066_0225f830(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 2:
        func_ov066_0225fc3c();
        break;
    case 3:
        func_ov066_0225fbe4();
        break;
    case 4:
        func_ov066_0225fb48();
        break;
    case 6:
        func_ov066_0225faf8();
        break;
    case 7:
        func_ov066_0225fa98();
        break;
    case 8:
        func_ov066_0225fa48();
        break;
    case 5:
        func_ov066_0225f9f8();
        break;
    case 10:
        func_ov066_0225f998();
        break;
    case 11:
        func_ov066_0225f938();
        break;
    case 0:
    case 1:
        func_ov066_0225f22c(0x44);
        break;
    default:
        func_ov066_0225f824();
        break;
    }
}

void func_ov066_0225f824(void) {
    func_ov066_0225f77c();
}

s32 func_ov066_0225f7c8(void) {
    BOOL r = FALSE;
    if (((Unk_ov066_0225f7c8_Bits *)&data_ov066_022647ac->unk_3c)->f != 0) {
        r = TRUE;
    } else if (data_ov066_022647ac->unk_16 == 1) {
        func_ov066_0225f77c();
        r = TRUE;
    }
    return r;
}

void func_ov066_0225f77c(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    default:
        func_ov066_0225f3c8((void *)func_ov066_0225f32c);
        break;
    }
}

s32 func_ov066_0225f6a8(void) {
    switch (data_ov066_022647ac->unk_04) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    case 10:
    case 11:
        switch (WM_GetLinkLevel()) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        }
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        return 4;
    }
    return 5;
}

s32 func_ov066_0225f688(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->unk_5c != 0) {
        return r->unk_77;
    }
    return 0;
}

void *func_ov066_0225f64c(Unk_ov066_0225f64c_Rec *r) {
    if (r != NULL && r->unk_5c != 0) {
        if (func_ov066_0225f688(r) != 0) {
            return (u8 *)((u32)r + 0x70) + 8;
        }
    }
    return NULL;
}

u32 func_ov066_0225f63c(Unk_ov066_0225f1a0_Msg *m) {
    if (m != NULL) {
        return m->unk_00;
    }
    return 0;
}

void func_ov066_0225f5b4(void) {
    if (func_ov066_0225fd08() != 0) {
        data_ov066_022647ac->unk_3c &= ~0x800;
        if (data_ov066_022647ac->unk_30 != NULL) {
            data_ov066_022647ac->unk_30(data_ov066_022647ac->unk_34);
            if (data_ov066_022647ac != NULL) {
                data_ov066_022647ac->unk_30 = NULL;
            }
        }
        if (data_ov066_022647ac != NULL) {
            data_ov066_022647ac->unk_00 = 7;
        }
        return;
    }
    func_ov066_0225f830();
}

void func_ov066_0225f554(Unk_ov066_0225f1a0_Msg *m) {
    switch (m->unk_00) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        func_ov066_0225f4d4(m);
        break;
    case 4:
        func_ov066_0225f494(m);
        break;
    case 5:
        func_ov066_0225f44c(m);
        break;
    case 6:
        func_ov066_0225f40c(m);
        break;
    }
    func_ov066_0225f5b4();
}

void func_ov066_0225f514(u32 idx) {
    s32 r = data_ov066_02264780[idx]((void *)func_ov066_0225f554);
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_0225f4d4(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 3;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f494(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 2;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f44c(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_022623d4();
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f40c(Unk_ov066_0225f1a0_Msg *m) {
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_04 = 3;
        return;
    }
    func_ov066_0225f22c(m->unk_02);
}

void func_ov066_0225f3c8(void *p) {
    s32 r = WM_Reset();
    data_ov066_022647ac->unk_3c |= 0x400;
    if (r == 2) {
        return;
    }
    func_ov066_0225f22c(r);
}

void func_ov066_0225f32c(Unk_ov066_0225f1a0_Msg *m) {
    data_ov066_022647ac->unk_16 = 0;
    func_ov066_0225f310();
    if (m->unk_02 == 0) {
        data_ov066_022647ac->unk_15 = 0;
        data_ov066_022647ac->unk_04 = 4;
        func_ov066_0225f5b4();
        return;
    }
    data_ov066_022647ac->unk_15++;
    if (data_ov066_022647ac->unk_15 > 0x10) {
        func_ov066_0225f22c(m->unk_02);
        return;
    }
    func_ov066_0225f3c8((void *)func_ov066_0225f32c);
}

void func_ov066_0225f310(void) {
    data_ov066_022647ac->unk_3c &= ~0x400;
}

s32 func_ov066_0225f2c8(s32 a, s32 b) {
    if (data_ov066_022647a8 != NULL) {
        s32 r = data_ov066_022647a8(a, b);
        if (r != 0) {
            return r;
        }
    }
    func_ov066_0225f22c(0x42);
    return 0;
}

void func_ov066_0225f284(void *p) {
    if (data_ov066_022647a4 == NULL) {
        return;
    }
    if (p == NULL) {
        return;
    }
    data_ov066_022647a4(p);
}

void func_ov066_0225f22c(u32 v) {
    data_ov066_022647ac->unk_04 = v | 0x80;
    data_ov066_022647ac->unk_3c &= ~0x800;
    if (data_ov066_022647a0 == NULL) {
        return;
    }
    data_ov066_022647a0(v);
}

void func_ov066_0225f1e4(void *p) {
    if (data_ov066_022647ac == NULL) {
        return;
    }
    if (data_ov066_022647ac->unk_38 == NULL) {
        return;
    }
    data_ov066_022647ac->unk_38(p);
}

void func_ov066_0225f1c0(u32 a, u32 b) {
    u8 buf[2];
    buf[0] = a;
    buf[1] = b;
    func_ov066_0225f1e4(buf);
}

s32 func_ov066_0225f1a0(void (*fn)(void *)) {
    if (data_ov066_022647ac != NULL) {
        data_ov066_022647ac->unk_38 = fn;
        return TRUE;
    }
    return FALSE;
}
#undef data_ov066_022647ac
#undef data_ov066_022647a8

}
#pragma thumb reset

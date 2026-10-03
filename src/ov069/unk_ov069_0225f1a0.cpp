// mwcc-version: 1.2/base
#include "types.h"

// ov069: the state tables of the menu object (three pointers to member functions per entry). They are built at
// start-up (the NULL members are copied from __ptmf_null) and func_ov069_0225f1a0 copies them into main's tables.

struct Unk_0201d2d0_Out;
struct Unk_0201dc44_Ret;
struct Unk_0201e5a4_Out;
struct Unk_0201ef00_Out;
struct Unk_0201f7d0_Out;
struct Unk_020238b0_Out;
struct Unk_020254ec_Out;
struct Unk_02027a34_Out;
class Unk_020238b0 {
public:
    void func_020238b0();
    void func_02023928(Unk_020238b0_Out *);
    void func_020239c8(Unk_020238b0_Out *);
    void func_02023ab4(Unk_020238b0_Out *);
    void func_02023b50(Unk_020238b0_Out *);
    void func_02023c80();
    void func_02023cb0(Unk_020238b0_Out *);
    void func_020241a0();
};
class Unk_020254ec : public Unk_020238b0 {
public:
    void func_020254ec();
    void func_02025540(Unk_020254ec_Out *);
    void func_02025680(Unk_020254ec_Out *);
    void func_02025780(Unk_020254ec_Out *);
    void func_020257f0();
    void func_0202585c();
};
class Unk_0201f7d0 : public Unk_020254ec {
public:
    void func_0201f7d0();
    void func_0201f83c(Unk_0201f7d0_Out *);
    void func_0201f89c(Unk_0201f7d0_Out *);
    void func_0201f9c0();
    void func_0201f9f8(Unk_0201f7d0_Out *);
    void func_0201fa58(Unk_0201f7d0_Out *);
    void func_0201fb54(Unk_0201f7d0_Out *);
    void func_0201fc48();
    void func_0201fcb0(Unk_0201f7d0_Out *);
    void func_0201fd10(Unk_0201f7d0_Out *);
    void func_0201fd70(Unk_0201f7d0_Out *);
    void func_0201fdd0(Unk_0201f7d0_Out *);
    void func_0201fe5c(Unk_0201f7d0_Out *);
    void func_0201fed0();
    void func_0201ff3c(Unk_0201f7d0_Out *);
    void func_02020010();
    void func_02020030();
    void func_02020084(Unk_0201f7d0_Out *);
};
class Unk_0201e5a4 : public Unk_0201f7d0 {
public:
    void func_0201e5a4(u32);
    void func_0201e6b0(Unk_0201e5a4_Out *);
    void func_0201e710();
    void func_0201e81c(Unk_0201e5a4_Out *);
    void func_0201e87c();
    void func_0201e914(Unk_0201e5a4_Out *);
    void func_0201ea8c();
    void func_0201eabc();
    void func_0201eb2c(Unk_0201e5a4_Out *);
    void func_0201eb8c();
    void func_0201eb94();
    void func_0201eb9c();
    void func_0201ebf0(Unk_0201e5a4_Out *);
    void func_0201ec50(Unk_0201e5a4_Out *);
    void func_0201ecb0(Unk_0201e5a4_Out *);
    void func_0201ed3c(u32);
    void func_0201ee9c();
};
class Unk_0201eea4 : public Unk_0201e5a4 {
public:
    void func_0201eea4();
    void func_0201eeac();
    void func_0201ef00(Unk_0201ef00_Out *);
    void func_0201ef60(Unk_0201ef00_Out *);
    void func_0201efc0(Unk_0201ef00_Out *);
    void func_0201f058(void *);
    void func_0201f170(Unk_0201ef00_Out *);
    void func_0201f36c(Unk_0201ef00_Out *);
    void func_0201f55c();
    void func_0201f564();
    void func_0201f56c();
    void func_0201f5c0(Unk_0201ef00_Out *);
    void func_0201f620(Unk_0201ef00_Out *);
    void func_0201f680(Unk_0201ef00_Out *);
    void func_0201f738();
    void func_0201f770(Unk_0201ef00_Out *);
};
class Unk_0201dc44 : public Unk_0201eea4 {
public:
    void func_0201dd1c();
    void func_0201dd3c(Unk_0201dc44_Ret *);
    void func_0201ddd4(Unk_0201dc44_Ret *);
    void func_0201de08(Unk_0201dc44_Ret *);
    void func_0201de3c(Unk_0201dc44_Ret *);
    void func_0201de70();
    void func_0201de78();
    void func_0201de80();
    void func_0201ded4(Unk_0201dc44_Ret *);
    void func_0201df34(Unk_0201dc44_Ret *);
    void func_0201df94(Unk_0201dc44_Ret *);
    void func_0201dff4(Unk_0201dc44_Ret *);
    void func_0201e08c(Unk_0201dc44_Ret *);
    void func_0201e110();
    void func_0201e18c();
    void func_0201e194();
    void func_0201e1e8();
    void func_0201e1f0(Unk_0201dc44_Ret *);
    void func_0201e334();
    void func_0201e33c();
    void func_0201e344();
    void func_0201e398(Unk_0201dc44_Ret *);
    void func_0201e3f8(Unk_0201dc44_Ret *);
    void func_0201e4ac(Unk_0201dc44_Ret *);
};
class Unk_02027a34 : public Unk_0201dc44 {
public:
    void func_02027a34(Unk_02027a34_Out *);
    void func_02027b08();
    void func_02027b1c();
    void func_02027c6c(Unk_02027a34_Out *);
    void func_02027cf8();
    void func_02027cfc(Unk_02027a34_Out *);
    void func_02027d78(Unk_02027a34_Out *);
    void func_02027dec();
    void func_02027e9c(Unk_02027a34_Out *);
    void func_02027f34();
    void func_02027f88();
    void func_02027fd8(Unk_02027a34_Out *);
    void func_020280c0();
};
class Unk_0201d2d0 : public Unk_02027a34 {
public:
    void func_0201d2d0(Unk_0201d2d0_Out *);
    void func_0201d378(Unk_0201d2d0_Out *);
    void func_0201d420(Unk_0201d2d0_Out *);
    void func_0201d4a8(Unk_0201d2d0_Out *);
    void func_0201d508(Unk_0201d2d0_Out *);
    void func_0201d568();
    void func_0201d5d4(Unk_0201d2d0_Out *);
    void func_0201d634();
    void func_0201d668(Unk_0201d2d0_Out *);
    void func_0201d6c8();
    void func_0201d71c(Unk_0201d2d0_Out *);
    void func_0201d7d4(Unk_0201d2d0_Out *);
    void func_0201d90c();
    void func_0201d9e0(Unk_0201d2d0_Out *);
    void func_020200e4();
    void func_02020150(Unk_0201d2d0_Out *);
    void func_020201b0(Unk_0201d2d0_Out *);
    void func_020204b4(Unk_0201d2d0_Out *);
    void func_020204dc(Unk_0201d2d0_Out *);
    void func_0202053c(Unk_0201d2d0_Out *);
    void func_0202059c(Unk_0201d2d0_Out *);
    void func_02020654();
    void func_020206bc(Unk_0201d2d0_Out *);
    void func_0202071c();
    void func_020207c8();
    void func_0202081c();
    void func_02020850(Unk_0201d2d0_Out *);
    void func_02022a6c(Unk_0201d2d0_Out *);
    void func_02022acc(Unk_0201d2d0_Out *);
    void func_02022b40(Unk_0201d2d0_Out *);
    void func_02022c14(Unk_0201d2d0_Out *);
    void func_02022ca0(Unk_0201d2d0_Out *);
    void func_02022d00(Unk_0201d2d0_Out *);
    void func_02022d60(Unk_0201d2d0_Out *);
    void func_02022e8c();
    void func_02022eb4(Unk_0201d2d0_Out *);
    void func_02022f14();
    void func_02022f80(Unk_0201d2d0_Out *);
    void func_02022fe0(Unk_0201d2d0_Out *);
    void func_02023044();
    void func_020230b4(Unk_0201d2d0_Out *);
    void func_02023140(Unk_0201d2d0_Out *);
    void func_020231cc(Unk_0201d2d0_Out *);
    void func_0202329c();
    void func_02023308(Unk_0201d2d0_Out *);
    void func_020233b8();
    void func_02023428(Unk_0201d2d0_Out *);
    void func_02023488(Unk_0201d2d0_Out *);
    void func_020234e8(Unk_0201d2d0_Out *);
    void func_02023548(Unk_0201d2d0_Out *);
    void func_02023614();
    void func_0202368c(Unk_0201d2d0_Out *);
    void func_020241f4(Unk_0201d2d0_Out *);
    void func_020242d8();
    void func_02024370(Unk_0201d2d0_Out *);
    void func_02024418(Unk_0201d2d0_Out *);
    void func_020244b8(Unk_0201d2d0_Out *);
    void func_02024800();
    void func_02024964(Unk_0201d2d0_Out *);
    void func_020249ec();
    void func_02024a90(Unk_0201d2d0_Out *);
    void func_02024bbc();
    void func_02024bd8(Unk_0201d2d0_Out *);
    void func_02024c4c(Unk_0201d2d0_Out *);
    void func_02024df4();
    void func_02024f54(Unk_0201d2d0_Out *);
    void func_02025008(Unk_0201d2d0_Out *);
    void func_02025090(Unk_0201d2d0_Out *);
    void func_020251c0();
    void func_020251fc(Unk_0201d2d0_Out *);
    void func_02025410();
    void func_02025460(Unk_0201d2d0_Out *);
    void func_02026000(Unk_0201d2d0_Out *);
    void func_02026128(Unk_0201d2d0_Out *);
    void func_020261c0();
    void func_02026214();
    void func_020262ac(Unk_0201d2d0_Out *);
    void func_0202635c();
    void func_020263b0(Unk_0201d2d0_Out *);
    void func_02026410();
    void func_02026490(Unk_0201d2d0_Out *);
    void func_02026560(Unk_0201d2d0_Out *);
    void func_02026668(Unk_0201d2d0_Out *);
    void func_02026834(void *);
    void func_02026998(Unk_0201d2d0_Out *);
    void func_02026a24(Unk_0201d2d0_Out *);
    void func_02026ab0(Unk_0201d2d0_Out *);
    void func_02026b98();
    void func_02026bec(Unk_0201d2d0_Out *);
    void func_02026c4c();
    void func_02026d2c(Unk_0201d2d0_Out *);
    void func_02026df0(Unk_0201d2d0_Out *);
    void func_02026e64();
    void func_02026ebc(Unk_0201d2d0_Out *);
    void func_02026f58(Unk_0201d2d0_Out *);
    void func_02026fe0();
    void func_0202708c(Unk_0201d2d0_Out *);
    void func_020271c8();
    void func_020272a4(Unk_0201d2d0_Out *);
    void func_02027430(Unk_0201d2d0_Out *);
    void func_02027490();
    void func_02027530(Unk_0201d2d0_Out *);
    void func_0202760c(Unk_0201d2d0_Out *);
    void func_020276e8();
    void func_02027730(Unk_0201d2d0_Out *);
    void func_020277b0();
    void func_020277fc(Unk_0201d2d0_Out *);
    void func_0202787c();
    void func_02029d84(Unk_0201d2d0_Out *);
    void func_02029de4(Unk_0201d2d0_Out *);
    void func_02029e38(Unk_0201d2d0_Out *);
    void func_02029e8c();
    void func_02029e98();
    void func_02029f04(Unk_0201d2d0_Out *);
    void func_0202a030(s32);
    void func_0202a074(Unk_0201d2d0_Out *);
    void func_0202a0c8();
    void func_0202a18c();
    void func_0202a2b8(Unk_0201d2d0_Out *);
    void func_0202a30c();
    void func_0202a378(Unk_0201d2d0_Out *);
    void func_0202a3e4(Unk_0201d2d0_Out *);
    void func_0202a468();
    void func_0202a4d4(Unk_0201d2d0_Out *);
    void func_0202a540();
    void func_0202a618(s32);
    void func_0202a680(Unk_0201d2d0_Out *);
    void func_0202a6e0();
    void func_0202a750(Unk_0201d2d0_Out *);
    void func_0202b0b4(Unk_0201d2d0_Out *);
    void func_0202b208();
    void func_0202b410();
    void func_0202b520(Unk_0201d2d0_Out *);
};
class Unk_Menu : public Unk_0201d2d0 {};

typedef void (Unk_Menu::*Unk_ov069_Fn)();
typedef void (Unk_0201d2d0::*Unk_ov069_FnB)();
struct Unk_ov069_EntB {
    Unk_ov069_FnB a;
    Unk_ov069_FnB b;
    Unk_ov069_FnB c;
};
struct Unk_ov069_Ent {
    Unk_ov069_Fn a;
    Unk_ov069_Fn b;
    Unk_ov069_Fn c;
};
extern "C" void memcpy(void *, const void *, s32);

extern Unk_ov069_Ent data_021be7e0[3];
extern Unk_ov069_Ent data_021bf10c[17];
extern Unk_ov069_Ent data_021befd4[13];
extern Unk_ov069_Ent data_021be650[1];
extern Unk_ov069_Ent data_021be668[1];
extern Unk_ov069_Ent data_021be730[2];
extern Unk_ov069_Ent data_021bf2a4[26];
extern Unk_ov069_Ent data_021bea78[6];
extern Unk_ov069_Ent data_021bed30[9];
extern Unk_ov069_Ent data_021bebb0[8];
extern Unk_ov069_Ent data_021be8c0[4];
extern Unk_ov069_Ent data_021bee08[9];
extern Unk_ov069_Ent data_021be920[4];
extern Unk_ov069_Ent data_021bec70[8];
extern Unk_ov069_Ent data_021beb08[7];

Unk_ov069_Ent data_ov069_022613cc[17] = {
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202b520, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202b410, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202b208},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202b0b4, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202a750, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020201b0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fb54, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fa58, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f36c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f170, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f058, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201ed3c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201e5a4, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e1f0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202b520, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202081c, (Unk_ov069_Fn)&Unk_0201d2d0::func_020207c8},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201dd3c, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201dd1c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0201d420, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0201d378, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0201d2d0, 0, 0},
};
Unk_ov069_EntB data_ov069_02261294[13] = {
    {0, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a6e0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a680, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a618},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a540, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a4d4, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a468},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a3e4, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a378, 0, 0},
    {0, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a30c},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a2b8, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a18c, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a0c8},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202a074, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202a030},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02029f04, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_02029e98},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02029e8c, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02029e38, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02029de4, 0, 0},
};
Unk_ov069_Ent data_ov069_02260cc4[1] = {
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02029d84, 0, (Unk_ov069_Fn)&Unk_02027a34::func_020280c0},
};
Unk_ov069_EntB data_ov069_02260cdc[1] = {
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02022a6c, 0, 0},
};
Unk_ov069_EntB data_ov069_02260cf4[2] = {
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02020850, 0, 0},
};
Unk_ov069_Ent data_ov069_02261564[73] = {
    {0, 0, 0},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027fd8, (Unk_ov069_Fn)&Unk_02027a34::func_02027f88, (Unk_ov069_Fn)&Unk_02027a34::func_02027f34},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027e9c, 0, (Unk_ov069_Fn)&Unk_02027a34::func_02027dec},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027d78, 0, 0},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027cfc, 0, (Unk_ov069_Fn)&Unk_02027a34::func_02027cf8},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027c6c, (Unk_ov069_Fn)&Unk_02027a34::func_02027b1c, (Unk_ov069_Fn)&Unk_02027a34::func_02027b08},
    {(Unk_ov069_Fn)&Unk_02027a34::func_02027a34, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202787c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020277fc, (Unk_ov069_Fn)&Unk_0201d2d0::func_020277b0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02027730, (Unk_ov069_Fn)&Unk_0201d2d0::func_020276e8, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202760c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02027530, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02027430, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020272a4, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020271c8},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02027490, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202708c, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026fe0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026f58, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026ebc, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026e64},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026df0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026d2c, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026c4c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026bec, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026b98},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026ab0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026a24, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026998, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026834},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026668, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026410},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026560, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026410},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026490, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026410},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020263b0, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202635c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020262ac, (Unk_ov069_Fn)&Unk_0201d2d0::func_02026214, (Unk_ov069_Fn)&Unk_0201d2d0::func_020261c0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026128, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02026000, (Unk_ov069_Fn)&Unk_020254ec::func_0202585c, (Unk_ov069_Fn)&Unk_020254ec::func_020257f0},
    {(Unk_ov069_Fn)&Unk_020254ec::func_02025780, 0, 0},
    {(Unk_ov069_Fn)&Unk_020254ec::func_02025680, 0, 0},
    {(Unk_ov069_Fn)&Unk_020254ec::func_02025540, 0, (Unk_ov069_Fn)&Unk_020254ec::func_020254ec},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02025460, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02025410, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020251fc, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020251c0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02025090, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020249ec},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02025008, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024f54, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024df4, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024c4c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024bd8, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02024bbc},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024a90, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020249ec},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024964, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024800, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020244b8, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024418, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02024370, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020242d8},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020241f4, 0, (Unk_ov069_Fn)&Unk_020238b0::func_020241a0},
    {(Unk_ov069_Fn)&Unk_020238b0::func_02023cb0, 0, (Unk_ov069_Fn)&Unk_020238b0::func_02023c80},
    {(Unk_ov069_Fn)&Unk_020238b0::func_02023b50, 0, 0},
    {(Unk_ov069_Fn)&Unk_020238b0::func_02023ab4, 0, 0},
    {(Unk_ov069_Fn)&Unk_020238b0::func_020239c8, 0, 0},
    {(Unk_ov069_Fn)&Unk_020238b0::func_02023928, 0, 0},
    {(Unk_ov069_Fn)&Unk_020238b0::func_020238b0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_0202368c, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02023614},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02023548, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020234e8, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02023488, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02023428, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020233b8},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02023308, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_0202329c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020231cc, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02023140, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_020230b4, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02023044},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022fe0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022f80, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02022f14},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022eb4, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02022e8c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022d60, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02022e8c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022d00, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02022e8c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022ca0, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_02022e8c},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022c14, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022b40, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02022acc, 0, 0},
};
Unk_ov069_Ent data_ov069_022611bc[9] = {
    {(Unk_ov069_Fn)&Unk_0201d2d0::func_02020150, 0, (Unk_ov069_Fn)&Unk_0201d2d0::func_020200e4},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_02020084, 0, (Unk_ov069_Fn)&Unk_0201f7d0::func_02020030},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_02020010, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201ff3c, 0, (Unk_ov069_Fn)&Unk_0201f7d0::func_0201fed0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fe5c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fdd0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fd70, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fd10, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201fcb0, 0, (Unk_ov069_Fn)&Unk_0201f7d0::func_0201fc48},
};
Unk_ov069_Ent data_ov069_02261024[8] = {
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201f9f8, 0, (Unk_ov069_Fn)&Unk_0201f7d0::func_0201f9c0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201f89c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201f7d0::func_0201f83c, 0, (Unk_ov069_Fn)&Unk_0201f7d0::func_0201f7d0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f770, 0, (Unk_ov069_Fn)&Unk_0201eea4::func_0201f738},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f680, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f620, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f5c0, 0, (Unk_ov069_Fn)&Unk_0201eea4::func_0201f56c},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201f564, 0, (Unk_ov069_Fn)&Unk_0201eea4::func_0201f55c},
};
Unk_ov069_Ent data_ov069_02260d6c[4] = {
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201efc0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201ef60, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201ef00, 0, (Unk_ov069_Fn)&Unk_0201eea4::func_0201eeac},
    {(Unk_ov069_Fn)&Unk_0201eea4::func_0201eea4, 0, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201ee9c},
};
Unk_ov069_Ent data_ov069_022610e4[9] = {
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201ecb0, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201ec50, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201ebf0, 0, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201eb9c},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201eb94, 0, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201eb8c},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201eb2c, 0, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201eabc},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201ea8c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201e914, 0, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201e87c},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201e81c, (Unk_ov069_Fn)&Unk_0201e5a4::func_0201e710, 0},
    {(Unk_ov069_Fn)&Unk_0201e5a4::func_0201e6b0, 0, 0},
};
Unk_ov069_Ent data_ov069_02260dcc[4] = {
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e4ac, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e3f8, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e398, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201e344},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e33c, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201e334},
};
Unk_ov069_Ent data_ov069_02260f64[8] = {
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e1e8, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201e194},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e18c, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201e110},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201e08c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201dff4, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201df94, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201df34, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201ded4, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201de80},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201de78, 0, (Unk_ov069_Fn)&Unk_0201dc44::func_0201de70},
};
Unk_ov069_EntB data_ov069_02260e2c[6] = {
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_02029d84, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0202071c},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_020206bc, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_02020654},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202059c, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0202053c, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_020204dc, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_020204b4, 0, 0},
};
Unk_ov069_Ent data_ov069_02260d24[3] = {
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201de3c, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201de08, 0, 0},
    {(Unk_ov069_Fn)&Unk_0201dc44::func_0201ddd4, 0, 0},
};
Unk_ov069_EntB data_ov069_02260ebc[7] = {
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d9e0, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0201d90c},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d7d4, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0201d90c},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d71c, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0201d6c8},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d668, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0201d634},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d5d4, 0, (Unk_ov069_FnB)&Unk_0201d2d0::func_0201d568},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d508, 0, 0},
    {(Unk_ov069_FnB)&Unk_0201d2d0::func_0201d4a8, 0, 0},
};
extern "C" void func_ov069_0225f1a0() {
    memcpy(data_021be7e0, data_ov069_02260d24, 72);
    memcpy(data_021bf10c, data_ov069_022613cc, 408);
    memcpy(data_021befd4, data_ov069_02261294, 312);
    memcpy(data_021be650, data_ov069_02260cc4, 24);
    memcpy(data_021be668, data_ov069_02260cdc, 24);
    memcpy(data_021be730, data_ov069_02260cf4, 48);
    memcpy(data_021bf2a4, data_ov069_02261564, 1752);
    memcpy(data_021bea78, data_ov069_02260e2c, 144);
    memcpy(data_021bed30, data_ov069_022611bc, 216);
    memcpy(data_021bebb0, data_ov069_02261024, 192);
    memcpy(data_021be8c0, data_ov069_02260d6c, 96);
    memcpy(data_021bee08, data_ov069_022610e4, 216);
    memcpy(data_021be920, data_ov069_02260dcc, 96);
    memcpy(data_021bec70, data_ov069_02260f64, 192);
    memcpy(data_021beb08, data_ov069_02260ebc, 168);
}

// An empty object whose inline constructor runs the copy once all the tables are built (the call ends __sinit; the object
// itself is the one byte of .bss in front of the tables).
struct Unk_ov069_Init {
    Unk_ov069_Init() { func_ov069_0225f1a0(); }
};
Unk_ov069_Init data_ov069_02260cc0;  // named (symbols.txt) so that the link keeps it: nothing refers to it

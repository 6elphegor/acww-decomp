#include "types.h"
#include "text/Unk_02050288.h"

class Unk_020e2a30;
class Unk_020e2a78;
class Unk_020ddc34;
class Unk_020ddcf0;
class Unk_020660f8;
class Unk_020668a0;
class Unk_020e2a48;
class Unk_020a84e0;
struct Unk_02067c70;
class Unk_02068808;
class Unk_0206b754;
class Unk_0206c74c;
class Unk_020ddc24;
class Unk_020ddc64;
class Unk_020ddccc;
class Unk_020a72b0;
class Unk_020e2b08;
class Unk_020e2b4c;
class Unk_020e2a90;
class Unk_020e2ac8;
class Unk_020a8cf8;
class Unk_020aa3b8;
class Unk_020aa72c;
class Unk_020e2a18;
class Unk_02068f10_Obj;
class Unk_020ddc4c;
struct Unk_020cbb18_Obj;
struct Unk_020660f8_Pad;
class Unk_02066978_Owner;
class Unk_0206891c;
class Unk_02066ce0;
struct Unk_020676b4_Tmp;
struct Unk_02067c70_Z;
class Unk_020a7238;
class Unk_020e3efc;
class Unk_020e05f0;
class Unk_020dd38c;
class Unk_020e1c64;
class Unk_020e05c0;
class Unk_020e0608;
struct Unk_02067f44_Sel;
struct Unk_020682b8_Sub;
class Unk_020682b8;
struct Unk_02068490_Ptrs;
struct Unk_02068558_File;
class Unk_02068848_Menu;
struct Unk_02068848_Entry;
struct Unk_02068848_Owner;
class Unk_020ddca8;
class Unk_0206022c;
class Unk_02068f10;
class Unk_020ddcf0_v13;
class Unk_02069878_Obj;
struct Unk_02069834_Owner;
class Unk_02069834;
class Unk_02069fa4;
class Unk_0206a198_Sub;
struct Unk_0206a198_Owner;
class Unk_0206a198;
class Unk_0206ad58_Ent;
class Unk_020ddc84;
struct Unk_0206b1dc_State;
class Unk_0206b950_Obj;
class Unk_020a71d0_v16;
struct Unk_0206b618_Msg;
struct Unk_0206c4fc_Ent;
struct Unk_0206c56c_Obj;
struct Unk_0206c45c_Arg;

extern "C" { extern u8 data_021edb60; }

class Unk_020e2c80;

class Unk_020a72b0 {
public:
    Unk_020a72b0();
    u32 func_020a72b0();
    void func_020a72c4(u32 *a, char **b, char **c);
    void func_020a72f0(char **a, char **b, char **c);
    void func_020a7338(char **a, char **b);
    u32 func_020a7388(u8 *a1, u8 *a2, u8 *a3, u8 *s0, u8 *s1, u8 *s2, u8 *s3, u8 *s4, Unk_020e2a78 *s5, Unk_020e2a78 *s6);
    u32 func_020a7404();
    u32 func_020a7478(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4, u8 *s5, Unk_020e2a78 *s6);
    u32 func_020a74fc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2, u8 *s3,
                      Unk_020e2a78 *s4);
    u32 func_020a7574(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0, u8 *s1, Unk_020e2a78 *s2);
    u32 func_020a75dc(u8 *a1, Unk_020e2a78 *a2, u8 *a3, Unk_020e2a78 *s0);
    void func_020a7634(u16 *out);
    void func_020a7648(u8 *buf, s32 n);
    void func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d);
    void func_020a76fc(u8 *a, u8 *b, u8 *c);
    void func_020a7730(u8 *a, u8 *b);
    void func_020a7754(u8 *a);
    void func_020a777c(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a832c();
    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    BOOL func_020a837c(u32 arg);
    BOOL func_020a83f0(u32 c);
    void func_020a83f4(u8 *p);
    void func_020a8400(s32 n);
    void func_020a840c();
    void func_020a84bc();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2ac8 : public Unk_020e2b08 {
public:
    Unk_020e2ac8(u8 flag);
    virtual ~Unk_020e2ac8();

    /* 0x24 */ Unk_020e2a90 *unk_24;
    /* 0x28 */ u8 unk_28;
};

class Unk_020ddc64 : public Unk_020e2ac8 {
public:
    Unk_020ddc64(u8 *owner);
    virtual ~Unk_020ddc64();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_0206be04();
    void func_0206bf78();
    void func_0206c1c8();
    void func_0206c1e0();
    void func_0206c2a8();
    void func_0206c36c();
    void func_0206c45c(Unk_0206c45c_Arg *a);
    void func_0206b7a4();
    void func_0206c4b4();
    void func_0206c4fc(s32 idx);
    void func_0206c534(s32 idx);
    void func_0206c56c(Unk_0206c4fc_Ent *e);
    s32 func_0206c630(u32 a, BOOL b);
    void func_0206b7dc();
    void func_0206b7f0();
    void func_0206b804();
    void func_0206b818();
    void func_0206b82c();
    void func_0206b848();
    void func_0206b864();
    void func_0206b880();
    void func_0206b89c();
    void func_0206b8b8();
    void func_0206b8d4();
    void func_0206b8e8();
    void func_0206b8fc();
    void func_0206b910();
    void func_0206b924();
    void func_0206b938();
    void func_0206b940();
    void func_0206b948();
    void func_0206b950();
    void func_0206b978();
    void func_0206b9a0();
    void func_0206b9c8();
    void func_0206b9f0();
    void func_0206b9fc();
    void func_0206ba08();
    void func_0206ba14();
    void func_0206ba20();
    void func_0206ba2c();
    void func_0206ba38();
    void func_0206ba44();
    void func_0206ba50();
    void func_0206ba5c();
    void func_0206ba68();
    void func_0206ba74();
    void func_0206ba80();
    void func_0206ba8c();
    void func_0206ba98();
    void func_0206baa4();
    void func_0206bacc();
    void func_0206baf4();
    void func_0206bb1c();
    void func_0206bb44();
    void func_0206bb64();
    void func_0206bb84();
    void func_0206bba4();
    void func_0206bbc4();
    void func_0206bbe4();
    void func_0206bc04();
    void func_0206bc24();
    void func_0206bc4c();
    void func_0206bc74();
    void func_0206bc9c();
    void func_0206bcc4();
    void func_0206bcc8();
    void func_0206bd10();
    void func_0206bd28();
    void func_0206bd40();
    void func_0206bd58();
    void func_0206bd70();
    void func_0206bd88();

    /* 0x2c */ u8 *unk_2c;
    /* 0x30 */ Unk_020e2a90 *unk_30;
    /* 0x34 */ Unk_020a72b0 unk_34;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 *unk_4c;
    /* 0x50 */ u32 unk_50;
};

class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;
    void func_020a8950(u8 *p);
    s32 func_020a89f0();
    u8 func_020a8a20(const char *path);

    /* 0x04 */ u8 unk_04;
};

class Unk_020ddc4c : public Unk_020e2a18 {
public:
    Unk_020ddc4c();
    virtual ~Unk_020ddc4c();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
};

class Unk_020e2b4c : public Unk_020e2b08 {
public:
    Unk_020e2b4c() {}
    virtual ~Unk_020e2b4c() {}
    virtual BOOL vfunc_18();
    u8 *func_020a82ec(BOOL arg);
};

// Sub-object (0x3c bytes)
class Unk_020ddc84 : public Unk_020e2b4c {
public:
    Unk_020ddc84(Unk_02067c70 *owner, Unk_0206b754 *buf);
    virtual ~Unk_020ddc84();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_0206b268();
    BOOL func_0206b2f4();
    void func_0206b304();
    void func_0206b338(u8 *p, u32 v, u8 flag);
    void func_0206b374(u8 *p, s32 n, u8 flag);

    /* 0x24 */ Unk_02067c70 *unk_24;
    /* 0x28 */ Unk_0206b754 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ u8 unk_38;
    /* 0x39 */ u8 unk_39;
};

struct Unk_0206b1dc_State {
    /* 0x4c */ u8 unk_4c, unk_4d, unk_4e, unk_4f;
    /* 0x50 */ s32 unk_50, unk_54, unk_58, unk_5c;
    Unk_0206b1dc_State() {
        unk_4c = 0;
        unk_4d = 0;
        unk_4e = 0;
        unk_4f = 0;
        unk_50 = 0;
        unk_54 = 0;
        unk_58 = 0;
        unk_5c = 0;
    }
};

class Unk_020ddccc : public Unk_020e2b4c {
public:
    Unk_020ddccc(Unk_02067c70 *owner, Unk_0206b754 *buf);
    virtual ~Unk_020ddccc();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_02068e9c();
    void func_02069fa4();
    void func_0206a024();
    void func_0206a198();
    void func_0206a1f8();
    void func_0206a2d8();
    void func_0206a358();
    void func_0206a380();
    void func_0206a498();
    void func_0206a55c();
    void func_0206a7a8();
    void func_0206a844();
    void func_0206a93c();
    void func_0206aa84();
    void func_0206ab74();
    void func_0206ac98(u8 *p);
    void func_0206acb0(u8 *p);
    void func_0206ad0c();
    void func_0206ad58(s32 idx);
    void func_0206adb8(s32 idx);
    void func_0206adf0(Unk_0206ad58_Ent *ent, BOOL flag);
    BOOL func_0206ae70();
    void func_0206af60();
    BOOL func_0206af78();
    void func_0206afa0();
    void func_0206b110();
    void func_0206b120();
    void func_0206b128();
    void func_0206b13c(s32 v);
    void func_0206b140();

    /* 0x24 */ Unk_02067c70 *unk_24;
    /* 0x28 */ Unk_0206b754 *unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020a72b0 unk_38;
    /* 0x4c */ Unk_0206b1dc_State unk_4c;
    /* 0x60 */ Unk_020ddc84 unk_60;
    /* 0x9c */ Unk_020ddc84 unk_9c;
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    /* 0xdc */ u8 *unk_dc;
    /* 0xe0 */ s32 unk_e0;
};

class Unk_020ddca8 : public Unk_020e2b4c {
public:
    Unk_020ddca8(Unk_02068848_Owner *owner);
    virtual ~Unk_020ddca8();
    virtual void vfunc_14(u8 *p);

    void func_02068848();
    void func_02068874();
    void func_020688ac(u8 *p);
    void func_02068950();
    void func_020689a0();
    void func_020689d0();
    void func_020689e4();
    void func_020689f8();
    void func_02068a0c();
    void func_02068a20();
    void func_02068a3c();
    void func_02068a58();
    void func_02068a74();
    void func_02068a90();
    void func_02068aac();
    void func_02068ac8();
    void func_02068adc();
    void func_02068af0();
    void func_02068b04();
    void func_02068b18();
    void func_02068b2c();
    void func_02068b34();
    void func_02068b3c();
    void func_02068b44();
    void func_02068b4c();
    void func_02068b50();
    void func_02068b70();
    void func_02068b90();
    void func_02068bb0();
    void func_02068bd0();
    void func_02068bf0();
    void func_02068c10();
    void func_02068c30();
    void func_02068c50();
    void func_02068c70();
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void func_02068c9c();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();

    void func_0206ac98(u8 *p);
    void func_0206acb0(void *p);
    void func_0206ad0c();
    void func_0206afa0(s32 a, const void *b);

    /* 0x24 */ Unk_02068848_Owner *unk_24;
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ u8 unk_38[0x14];
    /* 0x4c */ u8 unk_4c[0x10];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 unk_60[0x3c];
    /* 0x9c */ u8 unk_9c[0x3c];
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    u8 pad_da[6];
    /* 0xe0 */ u32 unk_e0;
};

class Unk_020ddc24 {
public:
    Unk_02067c70 *unk_04;
    u16 unk_08, unk_0a, unk_0c;
    s32 unk_10, unk_14, unk_18;
    u8 unk_1c, unk_1d, unk_1e;
    s32 unk_20, unk_24, unk_28;

    Unk_020ddc24(Unk_02067c70 *o);
    virtual ~Unk_020ddc24();
    void func_02067efc();
    void func_02067f44();
    u8 func_02067f88();
    u32 func_02067fbc();
    void func_02068000();
    void func_02068018();
    void func_02068064(s32 v);
    void func_02068068();
    void func_02068114();
    void func_020681c4(s32 flag);
    void func_02068244();
    void func_02068268(s32 r);
    void func_02068290();
    void func_02068298(s32 v);
    void func_0206829c();
    void func_020682a4(s32 v);
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7bd8(Unk_020e2a78 *p);
    void func_020a7c04(u8 *p);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_020ddc34 : public Unk_020e2a78 {
public:
    Unk_020ddc34();
    virtual ~Unk_020ddc34();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual const char *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual u32 vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

    void func_02065e88();
    void func_02065e90(u32 v);
    u32 func_02065f04();
    u32 func_02065f08();
    Unk_020ddc34 *func_02065f10();
    void func_02065f14(Unk_020e2a78 *p, u32 v);
    void func_02065f50(u32 v);
    void func_02065f70(Unk_020e2a78 *p, u32 v);
    void func_02065f90(u8 *p, u32 v);

    /* 0x20 */ Unk_020ddc34 unk_20;
    /* 0x2c */ u32 unk_2c;
    u8 pad_30[0xc];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020660f8 {
public:
    Unk_020660f8();
    ~Unk_020660f8();
    void func_020660f8();
    void func_020667e4();
    void func_02066830();
    void func_0206684c();
    void func_02067188();
    void func_02066cfc();
    void func_0206620c();
    void func_02066210();
    void func_0206621c();
    void func_02066290();
    void func_02066310();
    void func_020663ec();
    void func_02066400();
    void func_0206655c();
    void func_02066568();
    void func_020665c8();
    void func_0206672c();
    void func_02066730();
    void func_0206673c();

    void func_020671ec();
    void func_02067214();
    void func_02067238();
    void func_02067254();
    void func_020672a8();
    BOOL func_020673b0();
    BOOL func_020673f0();
    BOOL func_02067438();
    void func_02067480();
    void func_0206749c();
    void func_020674b8();
    void func_0206755c(s32 a, s32 b, s32 c, s32 d);
    void *func_020675a8();
    void *func_020675d8();
    void *func_0206760c();
    void *func_02067648();
    void *func_0206766c();
    void *func_02067690();
    void *func_020676b4();
    s32 func_02067708();
    void func_02067724(BOOL v);
    s32 func_0206773c(s32 a);
    void func_02067764();
    void func_0206777c();
    void func_02067934();
    void func_02067940();
    void func_0206794c();
    void func_02067958();
    void func_02067978(Unk_020ddcf0 *p);
    s32 func_02067990();
    s32 func_0206799c();
    u8 func_020679a8();
    void *func_020679b4();
    void func_020679c0(s32 v);
    void func_020679ec(s32 idx, void *p, u32 val);
    void func_02067a1c(s32 idx, s32 a, s32 b);
    s32 func_02067a3c(s32 idx, void *p);
    void func_02067a54();
    void func_02067a60();
    void func_02067a6c();
    void func_02067a78();
    void func_02067a84(u8 *src, void *s);
    BOOL func_02067abc(u8 *src, void *s);

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ s32 unk_0c;
    u8 pad_10[4];
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ u8 unk_18;
    u8 pad_19[3];
    /* 0x001c */ u8 unk_1c[0x9c - 0x1c];
    /* 0x009c */ s32 unk_9c;
    /* 0x00a0 */ s16 unk_a0;
    u8 pad_a2[2];
    /* 0x00a4 */ s32 unk_a4;
    /* 0x00a8 */ s32 unk_a8;
    /* 0x00ac */ s32 unk_ac;
    /* 0x00b0 */ s32 unk_b0;
    /* 0x00b4 */ u8 unk_b4[0x314 - 0xb4];
    /* 0x0314 */ u8 unk_314[0x58c - 0x314];
    /* 0x058c */ u8 unk_58c[0xa1c - 0x58c];
    /* 0x0a1c */ u8 unk_a1c[0x12c0 - 0xa1c];
    /* 0x12c0 */ u8 unk_12c0[0x30];
    /* 0x12f0 */ s32 unk_12f0;
    u8 pad_12f4[0x1398 - 0x12f4];
    /* 0x1398 */ u8 unk_1398;
    u8 pad_1399[0x13a4 - 0x1399];
    /* 0x13a4 */ u8 unk_13a4[0xc];
    /* 0x13b0 */ Unk_020ddcf0 *unk_13b0;
    /* 0x13b4 */ u8 unk_13b4[0xc];
    /* 0x13c0 */ u8 unk_13c0[0x15fc - 0x13c0];
    /* 0x15fc */ u8 unk_15fc[0x16cc - 0x15fc];
    /* 0x16cc */ u32 unk_16cc[4];
    /* 0x16dc */ u8 unk_16dc[0x1708 - 0x16dc];
    /* 0x1708 */ s32 unk_1708;
    /* 0x170c */ u8 unk_170c;
    /* 0x170d */ u8 unk_170d;
    /* 0x170e */ u8 unk_170e;
    /* 0x170f */ u8 unk_170f;
    /* 0x1710 */ s32 unk_1710;
    /* 0x1714 */ s32 unk_1714;
    /* 0x1718 */ s32 unk_1718;
    /* 0x171c */ u8 unk_171c[0x1748 - 0x171c];
    /* 0x1748 */ u8 unk_1748[0x177c - 0x1748];
    /* 0x177c */ u8 unk_177c[0x17a8 - 0x177c];
    /* 0x17a8 */ u8 unk_17a8[0x17dc - 0x17a8];
    /* 0x17dc */ u8 unk_17dc[0x1808 - 0x17dc];
    /* 0x1808 */ u8 unk_1808[0x1834 - 0x1808];
    /* 0x1834 */ u8 unk_1834[0x1860 - 0x1834];
    /* 0x1860 */ u8 unk_1860[0x1880 - 0x1860];
    /* 0x1880 */ u8 unk_1880[0x189c - 0x1880];
    /* 0x189c */ u8 unk_189c[0x18b8 - 0x189c];
    /* 0x18b8 */ u8 unk_18b8[0x18d4 - 0x18b8];
    /* 0x18d4 */ u8 unk_18d4[0x18f0 - 0x18d4];
    /* 0x18f0 */ u8 unk_18f0[0x190c - 0x18f0];
    /* 0x190c */ u8 unk_190c[0x1928 - 0x190c];
    /* 0x1928 */ u8 unk_1928[0x195c - 0x1928];
    /* 0x195c */ u8 unk_195c[0x1990 - 0x195c];
    /* 0x1990 */ u8 unk_1990[0x19ac - 0x1990];
    /* 0x19ac */ u8 unk_19ac[0x19d0 - 0x19ac];
    /* 0x19d0 */ u8 unk_19d0[0x19f7 - 0x19d0];
    /* 0x19f7 */ u8 unk_19f7;
    /* 0x19f8 */ u8 unk_19f8[0x1a12 - 0x19f8];
    /* 0x1a12 */ u8 unk_1a12;
    /* 0x1a13 */ u8 unk_1a13;
    u8 pad_1a14[2];
    /* 0x1a16 */ u8 unk_1a16;
    /* 0x1a17 */ u8 unk_1a17;
    /* 0x1a18 */ u8 unk_1a18;
    /* 0x1a19 */ u8 unk_1a19;
    /* 0x1a1a */ u8 unk_1a1a;
    u8 pad_1a1b;
};

// library object, 0x34 bytes (polymorphic)
struct Unk_020a71d0_v16 {
    u8 pad[0x34];
};

class Unk_020668a0 {
public:
    void func_020668a0();
    const char *func_02066900(const char *s);
    const char *func_0206693c(const char *s);
    char *func_02066978(const char *a, const char *b);
    void func_02066a14();
    void func_02066a50();
    void func_02066b0c();
    void func_02066b38();
    void func_02066b74();
    void func_02066bbc();
    void func_02066bf4();
    void func_02066c14();
    void func_02066c7c(s32 idx);
    BOOL func_02066d04();
    void func_02066d4c();
    BOOL func_02066d5c();
    void func_02066da0();
    BOOL func_02066db0();
    void func_02066df4();
    BOOL func_02066e04();
    void func_02066e40();
    BOOL func_02066e50();
    void func_02066e90();
    BOOL func_02066ea0();
    void func_02066f08();
    BOOL func_02066f2c();
    void func_02066f7c();
    BOOL func_02066f98();
    void func_02066fd4();
    BOOL func_02066fe4();
    void func_02067020();
    BOOL func_02067030();
    void func_02067060();
    BOOL func_02067070();
    void func_02067098();
    BOOL func_020670a8();
    void func_020670e4();
    void func_020670f4();
    void func_0206712c();
    void func_02067150();
    void func_02067170();

    u8 pad_0000[0x314];
    /* 0x0314 */ u8 unk_314[4];
    u8 pad_0318[0x270];
    /* 0x0588 */ Unk_02050288 *unk_588;
    /* 0x058c */ u8 unk_58c[4];
    u8 pad_0590[0x48c];
    /* 0x0a1c */ u8 unk_a1c[4];
    u8 pad_0a20[0x8a0];
    /* 0x12c0 */ u8 unk_12c0[4];
    u8 pad_12c4[0xe0];
    /* 0x13a4 */ u8 unk_13a4[4];
    u8 pad_13a8[0x8];
    union {
        /* 0x13b0 */ Unk_02066978_Owner *unk_13b0;
        Unk_020ddcf0 *unk_13b0_v16;
    };
    /* 0x13b4 */ u8 unk_13b4[0xc];
    union {
        /* 0x13c0 */ u8 unk_13c0[11][0x34];
        Unk_020a71d0_v16 unk_13c0_v16[11];
    };
    union {
        /* 0x15fc */ u8 unk_15fc[4][0x34];
        Unk_020a71d0_v16 unk_15fc_v16[4];
    };
    /* 0x16cc */ u32 unk_16cc[4];
    u8 pad_16dc[0x1c];
    /* 0x16f8 */ u8 unk_16f8;
    u8 pad_16f9[0x167];
    /* 0x1860 */ u8 unk_1860[0x20];
    /* 0x1880 */ u8 unk_1880[0x1c];
    /* 0x189c */ u8 unk_189c[0x1c];
    /* 0x18b8 */ u8 unk_18b8[0x1c];
    /* 0x18d4 */ u8 unk_18d4[0x1c];
    /* 0x18f0 */ u8 unk_18f0[0x1c];
    /* 0x190c */ u8 unk_190c[0x1c];
    /* 0x1928 */ u8 unk_1928[0x34];
    /* 0x195c */ u8 unk_195c[0x34];
    /* 0x1990 */ u8 unk_1990[0x1c];
    /* 0x19ac */ u8 unk_19ac[0x24];
    /* 0x19d0 */ u8 unk_19d0[0x24];
    /* 0x19f4 */ u8 unk_19f4;
    /* 0x19f5 */ u8 unk_19f5;
    /* 0x19f6 */ u8 unk_19f6;
    u8 pad_19f7[0x1d];
    /* 0x1a14 */ u8 unk_1a14;
    /* 0x1a15 */ u8 unk_1a15;
    /* 0x1a16 */ u8 unk_1a16;
    u8 pad_1a17[0x2];
    /* 0x1a19 */ u8 unk_1a19;
    u8 pad_1a1a[3];
};

// Entries of the owner (0x34 bytes)
class Unk_0206ad58_Ent {
public:
    virtual ~Unk_0206ad58_Ent();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_04[0x30];
};

class Unk_020e2a48 : public Unk_0206ad58_Ent {
public:
    Unk_020e2a48();
    ~Unk_020e2a48();
};

class Unk_020a84e0 { public: u32 pad[0xc / 4]; Unk_020a84e0(Unk_020e2b4c *p); };

class Unk_02068808 {
public:
    Unk_02068808();
    BOOL func_02068558(s32 a, u32 b, s32 c, u8 d);
    Unk_02068808 *func_02068808();
    Unk_02068808 *func_020687e0();
    void func_020687b8();
    void func_020687cc();
    void func_02068524();
    void func_020682b8();
    void func_020682c4();
    void func_020683bc();
    void func_020683d0();
    BOOL func_02068680(void *file);
    BOOL func_020686e4(void *file);
    BOOL func_02068748(void *file, BOOL alt);
    void func_020685c4(s32 idx);
    void func_0206860c(s32 a, BOOL b);

    /* 0x00 */ u16 *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ u8 unk_0c[0x44];
    /* 0x50 */ u8 unk_50[0x24];
    /* 0x74 */ u32 unk_74;
    /* 0x78 */ u32 unk_78;
    /* 0x7c */ u32 unk_7c;
};

class Unk_0206b754 {
public:
    Unk_0206b754(Unk_02067c70 *o);
    ~Unk_0206b754();
    void func_0206b434();
    void func_0206b454();
    void func_0206b458();
    void func_0206b4e4();
    void func_0206b518();
    void func_0206b548();
    void func_0206b590(u8 v);
    void func_0206b59c(u32 v);
    void func_0206b5c0(u32 v);
    void func_0206b618(void *m);
    BOOL func_0206b628(s32 c0);
    BOOL func_0206b664(s8 *src, u32 n);
    void func_0206b6b0(u32 v);
    void func_0206b6d0(u32 v);
    void func_0206b72c();

    /* 0x000 */ u8 unk_00[0x400];
    /* 0x400 */ u32 unk_400;
    /* 0x404 */ u8 *unk_404[3];
    /* 0x410 */ u32 unk_410;
    /* 0x414 */ u32 unk_414[3];
    /* 0x420 */ Unk_02050288 *unk_420[3];
    /* 0x42c */ u32 unk_42c[3];
    /* 0x438 */ u8 unk_438[3];
    /* 0x43b */ u8 unk_43b;
    /* 0x43c */ Unk_020ddc64 unk_43c;
};

class Unk_0206c74c {
public:
    Unk_0206c74c();
    u32 func_0206c6f4();
    u8 *func_0206c6fc();
    void func_0206c700();

    /* 0x00 */ u32 unk_00[0xa4 / 4];
    /* 0xa4 */ u8 unk_a4[0x800];
};

class Unk_020a8cf8 {
public:
    Unk_020a8cf8();
    void func_020a8d3c();
    void func_020a8dc8(Unk_020aa3b8 *p);
    void func_020a8de0(Unk_020aa3b8 *p);
    u32 pad[0x260 / 4];
};

class Unk_020aa3b8 {
public:
    Unk_020aa3b8();
    s32 func_020aa4b8();
    void func_020aa4cc(s32 v);
    Unk_020e2c80 *func_020aa538();
    Unk_020e2c80 *func_020aa54c();
    Unk_020aa72c *func_020aa560(s32 i);
    void func_020aa5f4();
    u32 pad[0x274 / 4];
};

struct Unk_02067c70_Z { u32 a; u16 b; u32 c, d, e, f; Unk_02067c70_Z() { a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; } };

class Unk_020a7238 { public: u32 pad[0xc / 4]; Unk_020a7238(); };

class Unk_020e3efc { public: u32 pad[0x2c / 4]; Unk_020e3efc(); };

class Unk_020e05f0 { public: u32 pad[0x20 / 4]; Unk_020e05f0(); };

class Unk_020dd38c { public: u32 pad[0x1c / 4]; Unk_020dd38c(); };

class Unk_020e1c64 { public: u32 pad[0x1c / 4]; Unk_020e1c64(); };

class Unk_020e05c0 { public: u32 pad[0x24 / 4]; Unk_020e05c0(); };

class Unk_020e0608 { public: u32 pad[0x24 / 4]; Unk_020e0608(); };

struct Unk_02067c70 {
    u32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14;
    u8 unk_18;
    Unk_02068808 unk_1c;
    Unk_02067c70_Z unk_9c;
    Unk_020a8cf8 unk_b4;
    Unk_020aa3b8 unk_314;
    u32 unk_588;
    Unk_0206b754 unk_58c;
    Unk_0206c74c unk_a1c;
    Unk_020ddccc unk_12c0;
    Unk_020a84e0 unk_13a4;
    Unk_02067f44_Sel *unk_13b0;
    Unk_020a7238 unk_13b4;
    Unk_020e2a48 unk_13c0[11];
    Unk_020e2a48 unk_15fc[4];
    u8 *unk_16cc[4];
    Unk_020ddc24 unk_16dc;
    u32 unk_1708;
    u32 unk_170c_pad;
    u32 unk_1710, unk_1714, unk_1718;
    Unk_020e3efc unk_171c;
    Unk_020e2a48 unk_1748;
    Unk_020e3efc unk_177c_a;
    Unk_020e2a48 unk_17a8;
    Unk_020e3efc unk_17dc, unk_1808, unk_1834;
    Unk_020e05f0 unk_1860;
    Unk_020dd38c unk_1880;
    Unk_020e1c64 unk_189c, unk_18b8, unk_18d4, unk_18f0, unk_190c;
    Unk_020e2a48 unk_1928, unk_195c;
    Unk_020e1c64 unk_1990;
    Unk_020e05c0 unk_19ac;
    Unk_020e0608 unk_19d0;
    u8 unk_19f4, unk_19f5, unk_19f6, unk_19f7;
    u8 unk_19f8[0x1a];
    u8 unk_1a12, unk_1a13, unk_1a14, unk_1a15, unk_1a16, unk_1a17, unk_1a18, unk_1a19, unk_1a1a;

    Unk_02067c70();
};

class Unk_020e2a90 : public Unk_02050288 {
public:
    Unk_020e2a90(s32 arg1, s32 arg2, s32 arg3);
    virtual ~Unk_020e2a90();
    virtual void func_08();
    virtual u32 func_0c();

    void func_020a7eac(u32 c);
    void func_020a7ecc();
    void func_020a7eec();
    void func_020a7f0c(Unk_020e2ac8 *v);
};

class Unk_020aa72c {
public:
    u8 *func_020aa790();
    u8 *func_020aa79c();
    Unk_020e2a78 *func_020aa7a0();
};

class Unk_02068f10_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

struct Unk_020cbb18_Obj { u8 pad[0x64]; u32 unk_64; };

struct Unk_020660f8_Pad { s32 v[2]; Unk_020660f8_Pad() {} ~Unk_020660f8_Pad() {} };

class Unk_02066978_Owner {
public:
    virtual ~Unk_02066978_Owner();
    virtual void vfunc_08();
    virtual u32 vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u32 v);
    virtual void vfunc_18(u32 v);
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void *vfunc_68();
};

class Unk_0206891c {
public:
    Unk_0206891c(void *owner);
    ~Unk_0206891c();
    void func_020688ac(u32 v);
    u8 pad[0x44];
};

class Unk_02066ce0 {
public:
    BOOL func_02066ce0();
    void func_02066cf8(s32 v);
    void func_02066cfc();
    u8 pad[0x10];
    s32 unk_10;
};

struct Unk_020676b4_Tmp {
    Unk_020676b4_Tmp();
    ~Unk_020676b4_Tmp();
    u8 b[0x38];
};

struct Unk_02067f44_Sel {
    virtual void vfunc_00(); virtual void vfunc_04(); virtual void vfunc_08(); virtual void vfunc_0c();
    virtual void vfunc_10(); virtual void vfunc_14(); virtual void vfunc_18(); virtual void vfunc_1c();
    virtual void vfunc_20(); virtual void vfunc_24(); virtual void vfunc_28(); virtual void vfunc_2c();
    virtual void vfunc_30(); virtual void vfunc_34(); virtual void vfunc_38(); virtual void vfunc_3c();
    virtual void vfunc_40(); virtual void vfunc_44(); virtual void vfunc_48(); virtual void vfunc_4c();
    virtual void vfunc_50(); virtual void vfunc_54(); virtual void vfunc_58(); virtual void vfunc_5c();
    virtual void vfunc_60(); virtual void vfunc_64();
    virtual void *vfunc_68();
    virtual s32 vfunc_6c();
};

struct Unk_020682b8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

class Unk_020682b8 {
public:
    u8 pad_00[0x0c];
    Unk_020682b8_Sub unk_0c;
    u8 pad_10[0x74 - 0x10];
    s32 unk_74, unk_78, unk_7c;
    void func_020682b8();
    void func_020682c4();
    void func_020682f0();
    void func_02068304();
    BOOL func_0206831c();
    BOOL func_0206834c();
    BOOL func_0206837c();
    BOOL func_0206839c();
    void func_020683bc();
    void func_020683d0();
    void func_020683f4();
    void func_02068400();
    void func_0206840c();
    void func_02068418();
    void func_02068424(s32 a, s32 b);
    void func_02068454(s32 b);
};

struct Unk_02068490_Ptrs {
    void *a;
    u16 *b;
    void *c;
};

struct Unk_02068558_File {
    u32 v[0x12];
};

class Unk_02068848_Menu {
public:
    virtual ~Unk_02068848_Menu();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34(s32 a, s32 b);
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64(u32 v);
    virtual s32 vfunc_68();
};

struct Unk_02068848_Entry {
    u8 unk_00[0x34];
};

struct Unk_02068848_Owner {
    u8 pad_0000[0x13b0];
    /* 0x13b0 */ Unk_02068848_Menu *unk_13b0;
    u8 pad_13b4[0x13c0 - 0x13b4];
    /* 0x13c0 */ Unk_02068848_Entry unk_13c0[11];
    /* 0x15fc */ Unk_02068848_Entry unk_15fc[4];
    u8 pad_16cc[0x1704 - 0x16cc];
    /* 0x1704 */ u32 unk_1704;
    u8 pad_1708[0x1710 - 0x1708];
    /* 0x1710 */ u32 unk_1710;
};

class Unk_0206022c {
public:
    s32 func_020604c4();
};

// Script command handlers: member functions reached through pointer tables at 0x020dd6b4..0x020ddbf8
class Unk_02068f10 : public Unk_020e2b08 {
public:
    void func_02068f10();
    void func_02068f9c();
    void func_02068ffc();
    void func_0206905c();
    void func_020690d0();
    void func_0206912c();
    void func_020691bc();
    void func_0206920c();
    void func_02069258();
    void func_02069360();
    void func_020693a0();
    void func_020693fc();
    void func_02069400();
    void func_0206945c();
    void func_0206949c();
    void func_020694a8();
    void func_020694b4();
    void func_020694c0();
    void func_020694cc();
    void func_020694d8();
    void func_020694e4();
    void func_020694f0();
    void func_020694fc();
    void func_02069508();
    void func_02069514();
    void func_02069520();
    void func_0206952c();
    void func_02069538();
    void func_02069544();
    void func_02069550();
    void func_020695bc();
    void func_02069618();
    void func_02069674();
    void func_020696d0();
    void func_020696f0();
    void func_02069710();
    void func_02069730();
    void func_02069750();
    void func_02069770();
    void func_02069790();
    void func_020697b0();
    void func_020697f4();

    void func_0206ac98(u8 *p);
    void func_0206ad58(s32 k);
    void func_0206adb8(s32 k);
    void func_0206afa0(s32 line, const char *file);

    /* 0x24 */ u8 *unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ Unk_020a72b0 unk_38;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
    /* 0x54 */ u32 unk_54;
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ u8 unk_60[0xd8 - 0x60];
    /* 0xd8 */ u8 unk_d8;
};

class Unk_020ddcf0_v13 {
public:
    virtual ~Unk_020ddcf0_v13();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c(s32 v);
    virtual void vfunc_20();
    virtual void vfunc_24(u32 v);
    virtual void vfunc_28(u32 v);
    virtual void vfunc_2c(u32 v);
    virtual void vfunc_30(u32 v);
    Unk_020ddc34 *func_02065f10();
};

class Unk_02069878_Obj {
public:
    virtual ~Unk_02069878_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_02069834_Owner {
    u8 pad_00[0xb4];
    /* 0x00b4 */ u8 unk_b4[0x13b0 - 0xb4];
    /* 0x13b0 */ Unk_020ddcf0_v13 *unk_13b0;
    u8 pad_13b4[0x16f9 - 0x13b4];
    /* 0x16f9 */ u8 unk_16f9;
    /* 0x16fa */ u8 unk_16fa;
    u8 pad_16fb[0x189c - 0x16fb];
    /* 0x189c */ Unk_02069878_Obj unk_189c;
    u8 pad_18a0[0x19d0 - 0x18a0];
    /* 0x19d0 */ Unk_02069878_Obj unk_19d0;
};

class Unk_02069834 : public Unk_020e2b4c {
public:
    void func_02069834();
    void func_02069878();
    void func_020698bc();
    void func_020698e8();
    void func_02069914();
    void func_02069940();
    void func_0206996c();
    void func_0206998c();
    void func_020699a4();
    void func_020699bc();
    void func_020699d4();
    void func_020699ec();
    void func_02069ad0();
    void func_02069b94();
    void func_02069c34();
    void func_02069cb8();
    void func_02069cd8();
    void func_02069cfc();
    void func_02069d20();
    void func_02069d44();
    void func_02069d68();
    void func_02069d8c();
    void func_02069dc0();
    void func_02069df0();
    void func_02069e24();
    void func_02069e28();
    void func_02069e70();
    void func_02069e88();
    void func_02069ea0();
    void func_02069ec4();
    void func_02069ee8();
    void func_02069efc();
    void func_02069f28();
    void func_02069f40();
    void func_02069f58();
    void func_02069f70();
    void func_02069f88();
    void func_02069fa0();

    /* 0x24 */ Unk_02069834_Owner *unk_24;
    u8 pad_28[8];
    /* 0x30 */ s32 unk_30;
    u8 pad_34[4];
    /* 0x38 */ Unk_020a72b0 unk_38;
    u8 pad_4c[2];
    /* 0x4e */ u8 unk_4e;
    /* 0x4f */ u8 unk_4f;
    u8 pad_50[8];
    /* 0x58 */ u32 unk_58;
    /* 0x5c */ s32 unk_5c;
};

class Unk_02069fa4 {
public:
    void func_02069fa4();
    void func_02068950();
    void func_020689a0();
    void func_02068b44();
    void func_02068b3c();
    void func_02068b34();
    void func_02068b2c();
    void func_02068b18();
    void func_02068b04();
    void func_02068af0();
    void func_02068adc();
    void func_02068ac8();
    void func_02068aac();
    void func_02068a90();
    void func_02068a74();
    void func_02068a58();
    void func_02068a3c();
    void func_02068a20();
    void func_02068a0c();
    void func_020689f8();
    void func_020689e4();
    void func_020689d0();
    void func_02069fa0();
    void func_0206a024();
    /* 0x00 */ u8 pad_00[0x3c];
    /* 0x3c */ u32 unk_3c;
};

class Unk_0206a198_Sub {
public:
    virtual ~Unk_0206a198_Sub();

    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
};

struct Unk_0206a198_Owner {
    /* 0x0000 */ u8 pad[0x13b0];
    /* 0x13b0 */ Unk_0206a198_Sub *unk_13b0;
};

class Unk_0206a198 : public Unk_020e2b08 {
public:

    void func_02068b4c();
    void func_02068b50();
    void func_02068b70();
    void func_02068b90();
    void func_02068bb0();
    void func_02068bd0();
    void func_02068bf0();
    void func_02068c10();
    void func_02068c30();
    void func_02068c50();
    void func_02068c70();
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void func_02068c9c();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();
    void func_02068e9c();
    void func_02068f10();
    void func_02068f9c();
    void func_02068ffc();
    void func_0206905c();
    void func_020690d0();
    void func_0206912c();
    void func_020691bc();
    void func_0206920c();
    void func_02069258();
    void func_02069360();
    void func_020693a0();
    void func_020693fc();
    void func_02069400();
    void func_0206945c();
    void func_0206949c();
    void func_020694a8();
    void func_020694b4();
    void func_020694c0();
    void func_020694cc();
    void func_020694d8();
    void func_020694e4();
    void func_020694f0();
    void func_020694fc();
    void func_02069508();
    void func_02069514();
    void func_02069520();
    void func_0206952c();
    void func_02069538();
    void func_02069544();
    void func_02069550();
    void func_020695bc();
    void func_02069618();
    void func_02069674();
    void func_020696d0();
    void func_020696f0();
    void func_02069710();
    void func_02069730();
    void func_02069750();
    void func_02069770();
    void func_02069790();
    void func_020697b0();
    void func_020697f4();
    void func_02069834();
    void func_02069878();
    void func_020698bc();
    void func_020698e8();
    void func_02069914();
    void func_02069940();
    void func_0206996c();
    void func_0206998c();
    void func_020699a4();
    void func_020699bc();
    void func_020699d4();
    void func_020699ec();
    void func_02069ad0();
    void func_02069b94();
    void func_02069c34();
    void func_02069cb8();
    void func_02069cd8();
    void func_02069cfc();
    void func_02069d20();
    void func_02069d44();
    void func_02069d68();
    void func_02069d8c();
    void func_02069dc0();
    void func_02069df0();
    void func_02069e24();
    void func_02069e28();
    void func_02069e70();
    void func_02069e88();
    void func_02069ea0();
    void func_02069ec4();
    void func_02069ee8();
    void func_02069efc();
    void func_02069f28();
    void func_02069f40();
    void func_02069f58();
    void func_02069f70();
    void func_02069f88();
    void func_02069fa0();
    void func_0206a198();
    void func_0206a1f8();
    void func_0206a2d8();
    void func_0206a358();
    void func_0206a380();
    void func_0206a498();
    void func_0206a55c();
    void func_0206a7a8();
    void func_0206a844();
    void func_0206a93c();
    void func_0206aa84();

    /* 0x24 */ Unk_0206a198_Owner *unk_24;
    /* 0x28 */ u8 unk_28[0x10];
    /* 0x38 */ u32 unk_38;
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40[0x8];
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ u8 unk_4c[0x8c];
    /* 0xd8 */ u8 unk_d8;
};

// polymorphic object seen through the owner's member objects
struct Unk_0206b950_Obj {
    virtual ~Unk_0206b950_Obj();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_0206b618_Msg {
    u8 pad[8];
    s32 unk_08;
    u8 pad2[4];
    s32 unk_10;
};

struct Unk_0206c4fc_Ent {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u8 unk_08[0x2c];
};

struct Unk_0206c56c_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
};

struct Unk_0206c45c_Arg {
    u32 unk_00, unk_04, unk_08;
    s32 unk_0c;
};


// ======== unk_0206c714.cpp ========
namespace n18 {

}
namespace n0 {
extern "C" { extern const u8 data_020cba1c[0x6]; const u8 data_020cba1c[0x6] = {26, 5, 1, 1, 0, 0}; }
extern "C" { Unk_020660f8 *data_021ca140; }
}
Unk_020ddc4c::Unk_020ddc4c() : Unk_020e2a18(1) {
    using namespace n18;}
// ---- Unk_020ddc4c
Unk_020ddc4c::~Unk_020ddc4c() {
    using namespace n18;}

// ======== unk_0206be04.cpp ========
namespace n17 {
extern "C" { void func_0206c56c_dummy_unused(); }
extern "C" { Unk_020e2a90 *func_020a8054(u32 a, u32 len, u32 b); }
extern "C" { void func_020a7fd8(Unk_020e2a90 *p); }
extern "C" { Unk_0206c56c_Obj *func_020b3078(u8 *key); }
extern "C" { void *func_0209750c(); }
extern "C" { void *_ZN12Unk_0209865c13func_0209888cEv(void *); }
extern "C" { s32 _ZN12Unk_020940a013func_0209411cEv(void *); }
typedef void (Unk_020ddc64::*Unk_020ddc64_Fn)();
extern "C" void MI_CpuFill8(void *dst, u32 value, u32 size);

}
void Unk_0206c74c::func_0206c700() {
    using namespace n17;
    MI_CpuFill8(unk_a4, 0, 0x800);
}
u8 *Unk_0206c74c::func_0206c6fc() {
    using namespace n17;
    return unk_a4;
}
u32 Unk_0206c74c::func_0206c6f4() {
    using namespace n17;
    return 0x800;
}
Unk_020ddc64::Unk_020ddc64(u8 *owner) : Unk_020e2ac8(1), unk_2c(owner), unk_30(0) {
    using namespace n17;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_30 = func_020a8054(0, 0x14, 2);
    if (unk_30 != 0) unk_30->func_020a7f0c(this);
}
Unk_020ddc64::~Unk_020ddc64() {
    using namespace n17;
    if (unk_30 != 0) func_020a7fd8(unk_30);
}
s32 Unk_020ddc64::func_0206c630(u32 a, BOOL b) {
    using namespace n17;
    s32 r = 0;
    if (b != 0) {
        if (unk_30 != 0) {
            unk_30->unk_10 = a;
            unk_30->func_02050c44();
            r = unk_30->unk_30;
            unk_30->unk_10 = 0;
        }
    }
    return r;
}
void Unk_020ddc64::vfunc_08() {
    using namespace n17;
    if (unk_30 != 0) {
        unk_50 = 0;
        unk_48 = 0;
        unk_4c = 0;
        unk_30->func_020a7eec();
    }
}
void Unk_020ddc64::vfunc_0c() {
    using namespace n17;
    if (unk_30 != 0) unk_30->func_020a7ecc();
}
void Unk_020ddc64::vfunc_10(u32 c) {
    using namespace n17;
    if (unk_30 != 0) unk_30->func_020a7eac(c);
    if (unk_04 == unk_48) {
        unk_48 = 0;
        func_020a832c();
    }
    if (unk_04 == unk_4c) {
        unk_4c = 0;
        func_020a832c();
    }
}
void Unk_020ddc64::vfunc_14(u8 *p) {
    using namespace n17;
    unk_34.func_020a777c(p);
    func_0206c36c();
}
void Unk_020ddc64::func_0206c56c(Unk_0206c4fc_Ent *e) {
    using namespace n17;
    u8 *k = e->unk_08 - 0;
    Unk_0206c56c_Obj *o = 0;
    if (unk_50 == 0) {
        o = func_020b3078(k + 8);
    } else if (unk_50 == 1) {
        o = func_020b3078(k + 9);
    }
    if (o != 0) func_020a8348(o->vfunc_0c());
    unk_50 = 0;
}
void Unk_020ddc64::func_0206c534(s32 idx) {
    using namespace n17;
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x13c0 + idx * 0x34);
    func_020a8348(e->vfunc_0c());
    func_0206c56c(e);
}
void Unk_020ddc64::func_0206c4fc(s32 idx) {
    using namespace n17;
    Unk_0206c4fc_Ent *e = (Unk_0206c4fc_Ent *)(unk_2c + 0x15fc + idx * 0x34);
    func_020a8348(e->vfunc_0c());
    func_0206c56c(e);
}
void Unk_020ddc64::func_0206c4b4() {
    using namespace n17;
    char *p0, *p1;
    unk_34.func_020a7338(&p0, &p1);
    if (_ZN12Unk_020940a013func_0209411cEv(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 0) {
        if (p0 != 0) func_020a8348((u8 *)p0);
    } else {
        if (p1 != 0) {
            unk_4c = unk_04;
            func_020a8348((u8 *)p1);
        }
    }
}
void Unk_020ddc64::func_0206c45c(Unk_0206c45c_Arg *a) {
    using namespace n17;
    char *p0, *p1, *p2;
    unk_34.func_020a72f0(&p0, &p1, &p2);
    if (a->unk_0c == 0) {
        if (p0 != 0) func_020a8348((u8 *)p0);
    } else if (a->unk_0c == 1) {
        if (p1 != 0) func_020a8348((u8 *)p1);
    } else if (a->unk_0c == 2) {
        if (p2 != 0) {
            unk_4c = unk_04;
            func_020a8348((u8 *)p2);
        }
    }
}
void Unk_020ddc64::func_0206c36c() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[12] = { &Unk_020ddc64::func_0206c2a8, &Unk_020ddc64::func_0206c1e0, &Unk_020ddc64::func_0206c1c8, 0, &Unk_020ddc64::func_0206bf78, 0, 0, 0, 0, 0, 0, &Unk_020ddc64::func_0206be04 };
    s32 i = unk_34.unk_00;
    Unk_020ddc64_Fn f = 0;
    if (i == 0xff) f = &Unk_020ddc64::func_0206bd88;
    else if (i < 12) f = tbl[i];
    if (f != 0) (this->*f)();
}
void Unk_020ddc64::func_0206c2a8() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[11] = { &Unk_020ddc64::func_0206bd70, &Unk_020ddc64::func_0206bd58, 0, 0, 0, 0, &Unk_020ddc64::func_0206bd40, &Unk_020ddc64::func_0206bd28, &Unk_020ddc64::func_0206bd10, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    (this->*f)();
}
void Unk_020ddc64::func_0206c1e0() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[17] = { 0, 0, 0, 0, 0, 0, &Unk_020ddc64::func_0206bcc8, &Unk_020ddc64::func_0206bcc4, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void Unk_020ddc64::func_0206c1c8() {
    using namespace n17;
    func_020a8400(unk_34.func_020a7404());
}
void Unk_020ddc64::func_0206bf78() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[35] = { &Unk_020ddc64::func_0206bc9c, &Unk_020ddc64::func_0206bc74, &Unk_020ddc64::func_0206bc4c, &Unk_020ddc64::func_0206bc24, &Unk_020ddc64::func_0206bc04, &Unk_020ddc64::func_0206bbe4, &Unk_020ddc64::func_0206bbc4, &Unk_020ddc64::func_0206bba4, &Unk_020ddc64::func_0206bb84, &Unk_020ddc64::func_0206bb64, &Unk_020ddc64::func_0206bb44, &Unk_020ddc64::func_0206bb1c, &Unk_020ddc64::func_0206baf4, &Unk_020ddc64::func_0206bacc, &Unk_020ddc64::func_0206baa4, &Unk_020ddc64::func_0206ba98, &Unk_020ddc64::func_0206ba8c, &Unk_020ddc64::func_0206ba80, &Unk_020ddc64::func_0206ba74, &Unk_020ddc64::func_0206ba68, &Unk_020ddc64::func_0206ba5c, &Unk_020ddc64::func_0206ba50, &Unk_020ddc64::func_0206ba44, &Unk_020ddc64::func_0206ba38, &Unk_020ddc64::func_0206ba2c, &Unk_020ddc64::func_0206ba20, &Unk_020ddc64::func_0206ba14, &Unk_020ddc64::func_0206ba08, &Unk_020ddc64::func_0206b9fc, &Unk_020ddc64::func_0206b9f0, &Unk_020ddc64::func_0206b9c8, &Unk_020ddc64::func_0206b9a0, 0, &Unk_020ddc64::func_0206b978, &Unk_020ddc64::func_0206b950 };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void Unk_020ddc64::func_0206be04() {
    using namespace n17;
    static Unk_020ddc64_Fn tbl[20] = { 0, &Unk_020ddc64::func_0206b948, &Unk_020ddc64::func_0206b940, 0, &Unk_020ddc64::func_0206b938, &Unk_020ddc64::func_0206b924, &Unk_020ddc64::func_0206b910, &Unk_020ddc64::func_0206b8fc, &Unk_020ddc64::func_0206b8e8, &Unk_020ddc64::func_0206b8d4, &Unk_020ddc64::func_0206b8b8, &Unk_020ddc64::func_0206b89c, &Unk_020ddc64::func_0206b880, &Unk_020ddc64::func_0206b864, &Unk_020ddc64::func_0206b848, &Unk_020ddc64::func_0206b82c, &Unk_020ddc64::func_0206b818, &Unk_020ddc64::func_0206b804, &Unk_020ddc64::func_0206b7f0, &Unk_020ddc64::func_0206b7dc };
    Unk_020ddc64_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}

// ======== unk_0206b4e4.cpp ========
#define unk_2c ((Unk_020668a0 *)unk_2c)
#define unk_13b0 unk_13b0_v16
#define unk_13c0 unk_13c0_v16
#define unk_15fc unk_15fc_v16
#define Unk_020a71d0 Unk_020a71d0_v16
#define Unk_0206b7dc_Arg Unk_0206c45c_Arg
namespace n16 {
extern "C" { void MI_CpuFill8(void *, s32, u32); }
extern "C" { u8 *func_0205021c(void); }
extern "C" { u8 *func_02050224(void); }
extern "C" { u8 *func_0205022c(void); }
extern "C" { u8 *func_02050234(void); }
extern "C" { u8 *func_0205023c(void); }
extern "C" { u32 func_020a6c84(u32 a, s32 b, s32 c); }
extern "C" { BOOL func_0206774c(void); }
extern "C" Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
extern "C" void func_020a7fd8(Unk_02050288 *obj);
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_020675a8Ev(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_020675d8Ev(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_0206760cEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_02067648Ev(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_0206766cEv(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_02067690Ev(void *); }
extern "C" { Unk_0206b950_Obj *_ZN12Unk_020660f813func_020676b4Ev(void *); }
typedef void (Unk_020ddc64::*Unk_0206bd88_Fn)();

}
void Unk_020ddc64::func_0206bd88() {
    using namespace n16;
    static Unk_0206bd88_Fn tbl[3] = { 0, 0, &Unk_020ddc64::func_0206b7a4 };
    Unk_0206bd88_Fn f = tbl[unk_34.unk_04];
    if (f != 0) (this->*f)();
}
void Unk_020ddc64::func_0206bd70() {
    using namespace n16; func_020a8348(func_0205022c()); }
void Unk_020ddc64::func_0206bd58() {
    using namespace n16; func_020a8348(func_02050224()); }
void Unk_020ddc64::func_0206bd40() {
    using namespace n16; func_020a8348(func_0205021c()); }
void Unk_020ddc64::func_0206bd28() {
    using namespace n16; func_020a8348(func_02050234()); }
void Unk_020ddc64::func_0206bd10() {
    using namespace n16; func_020a8348(func_0205023c()); }
void Unk_020ddc64::func_0206bcc8() {
    using namespace n16;
    u32 base = (u32)unk_04;
    u32 r = func_020a6c84(base, 1, 7);
    if (r) {
        if (unk_2c->func_02066d04()) {
            func_020a8400(r - base);
            func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_19d0)->vfunc_0c());
        }
    }
}
void Unk_020ddc64::func_0206bcc4() {
    using namespace n16;}
void Unk_020ddc64::func_0206bc9c() {
    using namespace n16;
    unk_2c->func_02067030();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_189c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bc74() {
    using namespace n16;
    func_020a8348(unk_2c->unk_13b0->func_02065f10()->vfunc_0c());
}
void Unk_020ddc64::func_0206bc4c() {
    using namespace n16;
    unk_2c->func_020670a8();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_1860)->vfunc_0c());
}
void Unk_020ddc64::func_0206bc24() {
    using namespace n16;
    unk_2c->func_02067070();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_1880)->vfunc_0c());
}
void Unk_020ddc64::func_0206bc04() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_020676b4Ev(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bbe4() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_02067690Ev(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bbc4() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_0206766cEv(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bba4() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_02067648Ev(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bb84() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_0206760cEv(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bb64() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_020675d8Ev(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bb44() {
    using namespace n16;
    func_020a8348(_ZN12Unk_020660f813func_020675a8Ev(unk_2c)->vfunc_0c());
}
void Unk_020ddc64::func_0206bb1c() {
    using namespace n16;
    unk_2c->func_02066fe4();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_18b8)->vfunc_0c());
}
void Unk_020ddc64::func_0206baf4() {
    using namespace n16;
    unk_2c->func_02066f98();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_18d4)->vfunc_0c());
}
void Unk_020ddc64::func_0206bacc() {
    using namespace n16;
    unk_2c->func_02066f2c();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_18f0)->vfunc_0c());
}
void Unk_020ddc64::func_0206baa4() {
    using namespace n16;
    unk_2c->func_02066ea0();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_190c)->vfunc_0c());
}
void Unk_020ddc64::func_0206ba98() {
    using namespace n16; func_0206c534(0); }
void Unk_020ddc64::func_0206ba8c() {
    using namespace n16; func_0206c534(1); }
void Unk_020ddc64::func_0206ba80() {
    using namespace n16; func_0206c534(2); }
void Unk_020ddc64::func_0206ba74() {
    using namespace n16; func_0206c534(3); }
void Unk_020ddc64::func_0206ba68() {
    using namespace n16; func_0206c534(4); }
void Unk_020ddc64::func_0206ba5c() {
    using namespace n16; func_0206c534(5); }
void Unk_020ddc64::func_0206ba50() {
    using namespace n16; func_0206c534(6); }
void Unk_020ddc64::func_0206ba44() {
    using namespace n16; func_0206c534(7); }
void Unk_020ddc64::func_0206ba38() {
    using namespace n16; func_0206c534(8); }
void Unk_020ddc64::func_0206ba2c() {
    using namespace n16; func_0206c534(9); }
void Unk_020ddc64::func_0206ba20() {
    using namespace n16; func_0206c534(10); }
void Unk_020ddc64::func_0206ba14() {
    using namespace n16; func_0206c4fc(0); }
void Unk_020ddc64::func_0206ba08() {
    using namespace n16; func_0206c4fc(1); }
void Unk_020ddc64::func_0206b9fc() {
    using namespace n16; func_0206c4fc(2); }
void Unk_020ddc64::func_0206b9f0() {
    using namespace n16; func_0206c4fc(3); }
void Unk_020ddc64::func_0206b9c8() {
    using namespace n16;
    unk_2c->func_02066e04();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_195c)->vfunc_0c());
}
void Unk_020ddc64::func_0206b9a0() {
    using namespace n16;
    unk_2c->func_02066db0();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_1990)->vfunc_0c());
}
void Unk_020ddc64::func_0206b978() {
    using namespace n16;
    unk_2c->func_02066d5c();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_19ac)->vfunc_0c());
}
void Unk_020ddc64::func_0206b950() {
    using namespace n16;
    unk_2c->func_02066e50();
    func_020a8348(((Unk_0206b950_Obj *)unk_2c->unk_1928)->vfunc_0c());
}
void Unk_020ddc64::func_0206b948() {
    using namespace n16; unk_50 = 1; }
void Unk_020ddc64::func_0206b940() {
    using namespace n16; unk_50 = 2; }
void Unk_020ddc64::func_0206b938() {
    using namespace n16; func_0206c4b4(); }
void Unk_020ddc64::func_0206b924() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (0))); }
void Unk_020ddc64::func_0206b910() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (1))); }
void Unk_020ddc64::func_0206b8fc() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (2))); }
void Unk_020ddc64::func_0206b8e8() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (3))); }
void Unk_020ddc64::func_0206b8d4() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (4))); }
void Unk_020ddc64::func_0206b8b8() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (5))); }
void Unk_020ddc64::func_0206b89c() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (6))); }
void Unk_020ddc64::func_0206b880() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (7))); }
void Unk_020ddc64::func_0206b864() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (8))); }
void Unk_020ddc64::func_0206b848() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (9))); }
void Unk_020ddc64::func_0206b82c() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_13c0; func_0206c45c((Unk_0206b7dc_Arg *)(p + (10))); }
void Unk_020ddc64::func_0206b818() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (0))); }
void Unk_020ddc64::func_0206b804() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (1))); }
void Unk_020ddc64::func_0206b7f0() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (2))); }
void Unk_020ddc64::func_0206b7dc() {
    using namespace n16; Unk_020a71d0 *p = unk_2c->unk_15fc; func_0206c45c((Unk_0206b7dc_Arg *)(p + (3))); }
// ---- Unk_020ddc64 state handlers
void Unk_020ddc64::func_0206b7a4() {
    using namespace n16;
    u32 x;
    char *y;
    char *z;
    unk_34.func_020a72c4(&x, &y, &z);
    if (!func_0206774c()) {
        func_020a8400(x * 2);
        func_020a8348((u8 *)z);
        unk_48 = (u8 *)y;
    }
}
Unk_0206b754::Unk_0206b754(Unk_02067c70 *o) : unk_400(0), unk_410(0), unk_43b(0), unk_43c((u8 *)o) {
    using namespace n16;
    func_0206b72c();
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_420[i] = 0;
    }
}
Unk_0206b754::~Unk_0206b754() {
    using namespace n16;
    func_0206b518();
}
void Unk_0206b754::func_0206b72c() {
    using namespace n16; func_0206b6d0(0); }
void Unk_0206b754::func_0206b6d0(u32 v) {
    using namespace n16;
    s32 i;
    unk_400 = 0;
    MI_CpuFill8(this, 0, 0x400);
    for (i = 0; (u32)i < 3; i++) {
        unk_404[i] = 0;
        unk_438[i] = 0;
        unk_42c[i] = 0;
    }
    unk_410 = 0;
    func_0206b6b0(v);
}
void Unk_0206b754::func_0206b6b0(u32 v) {
    using namespace n16;
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        unk_414[i] = v;
    }
}
BOOL Unk_0206b754::func_0206b664(s8 *src, u32 n) {
    using namespace n16;
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > n) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        u32 i;
        for (i = 0; i < n; i++) {
            (&unk_00[unk_400])[i] = src[i];
        }
        unk_400 += n;
        func_0206b434();
    }
    return ok;
}
BOOL Unk_0206b754::func_0206b628(s32 c0) {
    using namespace n16;
    s8 c = (s8)c0;
    u32 pos = unk_400;
    BOOL ok;
    if (0x400 - pos > 1) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    if (ok) {
        unk_400++;
        unk_00[pos] = c;
        func_0206b434();
    }
    return ok;
}
void Unk_0206b754::func_0206b618(void *m) {
    using namespace n16;
    Unk_0206b618_Msg *q = (Unk_0206b618_Msg *)m;
    func_0206b664((s8 *)q->unk_10, q->unk_08 + 5);
}
void Unk_0206b754::func_0206b5c0(u32 v) {
    using namespace n16;
    if (unk_410 < 3) {
        unk_42c[unk_410] = unk_43c.func_0206c630(v, unk_43b);
        u32 n = unk_410;
        unk_410 = n + 1;
        unk_404[n] = &unk_00[unk_400];
    }
}
void Unk_0206b754::func_0206b59c(u32 v) {
    using namespace n16;
    u32 i;
    for (i = unk_410; i < 3; i++) {
        unk_414[i] = v;
    }
}
void Unk_0206b754::func_0206b590(u8 v) {
    using namespace n16; unk_43b = v; }
void Unk_0206b754::func_0206b548() {
    using namespace n16;
    u32 i, a;
    for (i = 0, a = 0x11; i < 3; i++, a += 0x28) {
        Unk_02050288 *p = func_020a8054(a, 0x14, 2);
        if (p) {
            unk_420[i] = p;
            p->unk_50 = 2;
            p->unk_39 = 0xe;
            p->func_02050c68(0);
        }
    }
}
void Unk_0206b754::func_0206b518() {
    using namespace n16;
    u32 i;
    for (i = 0; i < 3; i++) {
        if (unk_420[i]) {
            func_020a7fd8(unk_420[i]);
            unk_420[i] = 0;
        }
    }
}
// ---- Unk_0206b754
void Unk_0206b754::func_0206b4e4() {
    using namespace n16;
    volatile s32 z = 0;
    u32 i;
    for (i = 0; i < 3; i++) {
        Unk_02050288 *p = unk_420[i];
        if (p) {
            p->func_02050c68(z);
            p->unk_10 = 0;
        }
    }
}
#undef unk_2c
#undef unk_13b0
#undef unk_13c0
#undef unk_15fc
#undef Unk_020a71d0
#undef Unk_0206b7dc_Arg

// ======== unk_0206ab74.cpp ========
#define unk_404 ((s32 *)unk_404)
#define unk_16f9 unk_16dc.unk_1d
#define unk_16fa unk_16dc.unk_1e
#define unk_1704 unk_16dc.unk_28
namespace n15 {
extern "C" { extern u8 data_0213a740[]; }
extern "C" { u8 func_020682a8(u32 x); }
extern "C" { u32 func_020501e8(u32 key); }
extern "C" { void _ZN12Unk_020660f813func_02067708Ev(void *p); }
extern "C" { void _ZN12Unk_020660f813func_0206773cEi(void *p, u32 c); }
extern "C" { void _ZN12Unk_020660f813func_02067a84EPhPv(void *self, u8 *p, s32 z); }
extern "C" { void _ZN12Unk_020660f813func_02067a60Ev(void *self); }
extern "C" { u8 *func_020a72a0(s32 i); }
extern "C" { u8 *func_020b3078(u8 *p); }
extern "C" { void *func_0209750c(void); }
extern "C" { s32 _ZN12Unk_0209865c13func_0209888cEv(void *p); }
extern "C" { s32 _ZN12Unk_020940a013func_0209411cEv(s32 p); }

}
void Unk_0206b754::func_0206b458() {
    using namespace n15;
    u32 i;
    for (i = 0; i < unk_410; i++) {
        Unk_02050288 *e = unk_420[i];
        if (e != 0 && unk_438[i] != 0) {
            e->unk_10 = unk_404[i];
            e->unk_14 = 0;
            e->unk_30 = unk_42c[i];
            e->unk_38 = func_020682a8(unk_414[i]);
            e->func_02050c90();
        }
    }
    if (unk_410 < 3) {
        Unk_02050288 *e = unk_420[unk_410];
        if (e != 0) e->unk_14 = (u32)this + unk_400;
    }
}
void Unk_0206b754::func_0206b454() {
    using namespace n15;}
// ---------------------------------------------------------------------------
void Unk_0206b754::func_0206b434() {
    using namespace n15;
    s32 i = unk_410;
    if (i != 0 && (u32)i <= 3) *((u8 *)this + i + 0x437) = 1;
}
Unk_020ddc84::Unk_020ddc84(Unk_02067c70 *owner, Unk_0206b754 *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0) {
    using namespace n15;
    unk_38 = 0;
    unk_39 = 0;
}
Unk_020ddc84::~Unk_020ddc84() {
    using namespace n15;}
void Unk_020ddc84::func_0206b374(u8 *p, s32 n, u8 flag) {
    using namespace n15;
    if (n > 0) {
        func_020a84bc();
        func_020a8368(p);
        unk_30 = 0;
        unk_34 = n;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 1;
    }
}
void Unk_020ddc84::func_0206b338(u8 *p, u32 v, u8 flag) {
    using namespace n15;
    if (v > (u32)p) {
        func_020a84bc();
        func_020a8368(p);
        unk_30 = v;
        unk_34 = 0;
        unk_39 = flag;
        unk_38 = 0;
        unk_2c = 2;
    }
}
void Unk_020ddc84::func_0206b304() {
    using namespace n15;
    s32 s = unk_2c;
    if (s == 1) {
        unk_38 = 1;
        func_020a82ec(FALSE);
    } else if (s == 2) {
        unk_38 = 1;
        func_020a82ec((BOOL)unk_30);
    }
}
BOOL Unk_020ddc84::func_0206b2f4() {
    using namespace n15;
    if (unk_2c == 0) return TRUE;
    return FALSE;
}
void Unk_020ddc84::vfunc_08() {
    using namespace n15;}
void Unk_020ddc84::vfunc_0c() {
    using namespace n15;
    if (unk_2c == 2) func_0206b268();
}
void Unk_020ddc84::vfunc_10(u32 c) {
    using namespace n15;
    if (unk_39 != 0) unk_28->func_0206b628(c);
    unk_38 = 0;
    if (unk_2c == 1) {
        unk_34 = unk_34 - 1;
        if (unk_34 <= 0) func_0206b268();
    } else if (unk_2c == 2) {
        _ZN12Unk_020660f813func_0206773cEi(unk_24, c);
    }
}
void Unk_020ddc84::vfunc_14(u8 *) {
    using namespace n15;}
BOOL Unk_020ddc84::vfunc_18() {
    using namespace n15;
    return unk_38;
}
// ---------------------------------------------------------------------------
void Unk_020ddc84::func_0206b268() {
    using namespace n15;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_39 = 0;
    func_020a84bc();
}
Unk_020ddccc::Unk_020ddccc(Unk_02067c70 *owner, Unk_0206b754 *buf)
    : unk_24(owner), unk_28(buf), unk_2c(0), unk_30(0), unk_34(0), unk_60(owner, buf), unk_9c(owner, buf) {
    using namespace n15;
    unk_d8 = 0;
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
}
Unk_020ddccc::~Unk_020ddccc() {
    using namespace n15;}
void Unk_020ddccc::func_0206b140() {
    using namespace n15;
    unk_2c = 0;
    unk_28->func_0206b454();
    unk_28->func_0206b6d0(unk_4c.unk_5c);
    unk_28->func_0206b5c0((u32)unk_04);
    unk_d9 = 0;
    unk_e0 = 0;
}
void Unk_020ddccc::func_0206b13c(s32 v) {
    using namespace n15;
    unk_34 = v;
}
void Unk_020ddccc::func_0206b128() {
    using namespace n15;
    if (unk_4c.unk_4f == 0) unk_4c.unk_4c = 1;
}
void Unk_020ddccc::func_0206b120() {
    using namespace n15;
    unk_4c.unk_4c = 0;
}
void Unk_020ddccc::func_0206b110() {
    using namespace n15;
    unk_4c.unk_5c = 0;
    unk_24->unk_1704 = 0;
}
void Unk_020ddccc::vfunc_08() {
    using namespace n15;
    unk_30 = 1;
    unk_2c = 0;
    unk_4c.unk_4c = 0;
    unk_4c.unk_4d = 0;
    unk_4c.unk_4e = 0;
    unk_4c.unk_4f = 0;
    unk_4c.unk_50 = 0;
    unk_4c.unk_54 = 0;
    unk_4c.unk_58 = 0;
    unk_28->func_0206b72c();
    unk_28->func_0206b5c0((u32)unk_04);
    _ZN12Unk_020660f813func_02067708Ev(unk_24);
    unk_d9 = 0;
    unk_dc = 0;
    unk_e0 = 0;
    unk_24->unk_16f9 = 0;
    unk_24->unk_16fa = 0;
}
void Unk_020ddccc::vfunc_0c() {
    using namespace n15;
    unk_30 = 3;
    unk_28->func_0206b454();
}
void Unk_020ddccc::vfunc_10(u32 c) {
    using namespace n15;
    if (unk_d9 != 0) {
        c = func_020501e8(c);
        unk_d9 = 0;
    }
    BOOL nl = (c == 10) ? TRUE : FALSE;
    BOOL sp = (c == 0x20) ? TRUE : FALSE;
    unk_28->func_0206b628(c);
    if (nl) {
        unk_28->func_0206b5c0((u32)unk_04);
        unk_2c++;
        if (unk_2c >= 3) unk_30 = 2;
    }
    _ZN12Unk_020660f813func_0206773cEi(unk_24, c);
    unk_24->unk_16fa = 0;
    if (!sp && !nl) unk_4c.unk_50++;
    if (unk_04 == unk_dc) {
        unk_dc = 0;
        func_020a832c();
    }
}
void Unk_020ddccc::vfunc_14(u8 *p) {
    using namespace n15;
    unk_38.func_020a777c(p);
    func_0206ab74();
}
BOOL Unk_020ddccc::vfunc_18() {
    using namespace n15;
    BOOL r = TRUE;
    s32 s = unk_30;
    if (s == 2 || s == 5) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
        unk_4c.unk_58 = r;
    } else if (s == 4) {
        r = FALSE;
        unk_4c.unk_50 = r;
        unk_4c.unk_54 = r;
    } else if (s == 1) {
        if (!func_0206ae70()) r = FALSE;
    }
    return r;
}
void Unk_020ddccc::func_0206afa0() {
    using namespace n15;}
BOOL Unk_020ddccc::func_0206af78() {
    using namespace n15;
    if (unk_60.func_0206b2f4() && unk_9c.func_0206b2f4()) return TRUE;
    return FALSE;
}
void Unk_020ddccc::func_0206af60() {
    using namespace n15;
    unk_60.func_0206b304();
    unk_9c.func_0206b304();
}
BOOL Unk_020ddccc::func_0206ae70() {
    using namespace n15;
    BOOL r = TRUE;
    BOOL f = r;
    if (unk_34 != 1 && unk_4c.unk_4e == 0) f = FALSE;
    if (unk_4c.unk_4d != 0) {
        r = FALSE;
        unk_4c.unk_4d = 0;
        goto end;
    }
    if (f) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = 0;
        unk_4c.unk_58 = 0;
        while (!func_0206af78()) {
            func_0206af60();
        }
        goto end;
    }
    BOOL t;
    if (unk_34 != 2 && unk_4c.unk_4f == 0 && unk_4c.unk_4c != 0) {
        t = TRUE;
    } else {
        t = FALSE;
    }
    if (t) unk_4c.unk_58 = 0;
    s32 v = unk_4c.unk_58;
    if (v > 0) {
        unk_4c.unk_58 = v - 0x1800;
        r = FALSE;
        goto end;
    }
    s32 n;
    if (unk_4c.unk_54 == 0) n = 1;
    else n = 2;
    if (t) n = 3;
    if (unk_4c.unk_50 >= n) {
        unk_4c.unk_50 = 0;
        unk_4c.unk_54 = unk_4c.unk_54 + 1;
        if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
        r = FALSE;
        goto end;
    }
    while (!func_0206af78()) {
        func_0206af60();
        unk_4c.unk_50 = unk_4c.unk_50 + 1;
        if (unk_4c.unk_50 >= n) {
            unk_4c.unk_50 = 0;
            unk_4c.unk_54 = unk_4c.unk_54 + 1;
            if (unk_4c.unk_54 >= 2) unk_4c.unk_54 = 0;
            r = FALSE;
            goto end;
        }
    }
end:
    return r;
}
void Unk_020ddccc::func_0206adf0(Unk_0206ad58_Ent *ent, BOOL flag) {
    using namespace n15;
    u8 *q = ent->unk_04 + 4;
    u8 *r = 0;
    if (unk_e0 == 0) {
        r = func_020b3078(q + 8);
    } else if (unk_e0 == 1) {
        r = func_020b3078(q + 9);
    }
    if (r != 0) {
        if (flag) {
            func_020a8348(func_020a72a0(unk_4c.unk_5c));
            func_020a8348(((Unk_0206ad58_Ent *)r)->vfunc_0c());
            func_020a8348(func_020a72a0(0));
        } else {
            func_020a8348(((Unk_0206ad58_Ent *)r)->vfunc_0c());
        }
    }
    unk_e0 = 0;
}
void Unk_020ddccc::func_0206adb8(s32 idx) {
    using namespace n15;
    Unk_0206ad58_Ent *ent = &unk_24->unk_13c0[idx];
    func_020a8348(ent->vfunc_0c());
    func_0206adf0(ent, 1);
}
void Unk_020ddccc::func_0206ad58(s32 idx) {
    using namespace n15;
    Unk_0206ad58_Ent *ent = &unk_24->unk_15fc[idx];
    u8 *s = unk_24->unk_16cc[idx];
    func_020a8348(func_020a72a0(unk_4c.unk_5c));
    func_020a8348(ent->vfunc_0c());
    func_020a8348(func_020a72a0((s32)s));
    func_0206adf0(ent, 0);
}
void Unk_020ddccc::func_0206ad0c() {
    using namespace n15;
    char *a, *b;
    unk_38.func_020a7338(&a, &b);
    if (_ZN12Unk_020940a013func_0209411cEv(_ZN12Unk_0209865c13func_0209888cEv(func_0209750c())) == 0) {
        if (a != 0) func_020a8348((u8 *)a);
    } else {
        if (b != 0) {
            unk_dc = unk_04;
            func_020a8348((u8 *)b);
        }
    }
}
void Unk_020ddccc::func_0206acb0(u8 *p) {
    using namespace n15;
    char *a, *b, *c;
    unk_38.func_020a72f0(&a, &b, &c);
    s32 k = ((s32 *)p)[3];
    if (k == 0) {
        if (a != 0) func_020a8348((u8 *)a);
    } else if (k == 1) {
        if (b != 0) func_020a8348((u8 *)b);
    } else if (k == 2) {
        if (c != 0) {
            unk_dc = unk_04;
            func_020a8348((u8 *)c);
        }
    }
}
void Unk_020ddccc::func_0206ac98(u8 *p) {
    using namespace n15;
    _ZN12Unk_020660f813func_02067a84EPhPv(unk_24, p, 0);
    _ZN12Unk_020660f813func_02067a60Ev(unk_24);
}
// ---------------------------------------------------------------------------
void Unk_020ddccc::func_0206ab74() {
    using namespace n15;
    typedef void (Unk_020ddccc::*Fn)();
    static Fn tbl[12] = {
        &Unk_020ddccc::func_0206aa84, &Unk_020ddccc::func_0206a93c, &Unk_020ddccc::func_0206a844,
        &Unk_020ddccc::func_0206a7a8, &Unk_020ddccc::func_0206a55c, &Unk_020ddccc::func_0206a498,
        &Unk_020ddccc::func_0206a380, &Unk_020ddccc::func_0206a358, &Unk_020ddccc::func_0206a2d8,
        &Unk_020ddccc::func_0206a1f8, &Unk_020ddccc::func_0206a198, &Unk_020ddccc::func_0206a024,
    };
    s32 id = unk_38.unk_00;
    Fn fn = 0;
    if (id == 0xff) {
        fn = &Unk_020ddccc::func_02069fa4;
    } else if (id < 12) {
        fn = tbl[id];
    }
    (this->*fn)();
}
#undef unk_404
#undef unk_16f9
#undef unk_16fa
#undef unk_1704

// ======== unk_0206a198.cpp ========
namespace n14 {
extern "C" { void func_020a7768(void *p); }
extern "C" { extern u8 data_020cba1c[]; }

}
void Unk_0206a198::func_0206aa84()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[11])() = {
        &Unk_0206a198::func_02069f88,
        &Unk_0206a198::func_02069f70,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069f58,
        &Unk_0206a198::func_02069f40,
        &Unk_0206a198::func_02069f28,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a93c()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[17])() = {
        &Unk_0206a198::func_02069efc,
        &Unk_0206a198::func_02069ee8,
        &Unk_0206a198::func_02069ec4,
        &Unk_0206a198::func_02069ea0,
        &Unk_0206a198::func_02069e88,
        &Unk_0206a198::func_02069e70,
        &Unk_0206a198::func_02069e28,
        &Unk_0206a198::func_02069e24,
        &Unk_0206a198::func_02069df0,
        &Unk_0206a198::func_02069dc0,
        &Unk_0206a198::func_02069d8c,
        &Unk_0206a198::func_02069d68,
        &Unk_0206a198::func_02069d44,
        &Unk_0206a198::func_02069d20,
        &Unk_0206a198::func_02069cfc,
        &Unk_0206a198::func_02069cd8,
        &Unk_0206a198::func_02069cb8,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a844()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[8])() = {
        &Unk_0206a198::func_02069c34,
        &Unk_0206a198::func_02069b94,
        &Unk_0206a198::func_02069ad0,
        &Unk_0206a198::func_020699ec,
        &Unk_0206a198::func_020699d4,
        &Unk_0206a198::func_020699bc,
        &Unk_0206a198::func_020699a4,
        &Unk_0206a198::func_0206998c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    if (unk_d8) {
        unk_d8 = 0;
        (this->*f)();
    } else {
        func_020a83f4(unk_48);
        unk_d8 = 1;
        func_020a8348(data_020cba1c);
    }
}
void Unk_0206a198::func_0206a7a8()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[5])() = {
        &Unk_0206a198::func_0206996c,
        &Unk_0206a198::func_02069940,
        &Unk_0206a198::func_02069914,
        &Unk_0206a198::func_020698e8,
        &Unk_0206a198::func_020698bc,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a55c()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[35])() = {
        &Unk_0206a198::func_02069878,
        &Unk_0206a198::func_02069834,
        &Unk_0206a198::func_020697f4,
        &Unk_0206a198::func_020697b0,
        &Unk_0206a198::func_02069790,
        &Unk_0206a198::func_02069770,
        &Unk_0206a198::func_02069750,
        &Unk_0206a198::func_02069730,
        &Unk_0206a198::func_02069710,
        &Unk_0206a198::func_020696f0,
        &Unk_0206a198::func_020696d0,
        &Unk_0206a198::func_02069674,
        &Unk_0206a198::func_02069618,
        &Unk_0206a198::func_020695bc,
        &Unk_0206a198::func_02069550,
        &Unk_0206a198::func_02069544,
        &Unk_0206a198::func_02069538,
        &Unk_0206a198::func_0206952c,
        &Unk_0206a198::func_02069520,
        &Unk_0206a198::func_02069514,
        &Unk_0206a198::func_02069508,
        &Unk_0206a198::func_020694fc,
        &Unk_0206a198::func_020694f0,
        &Unk_0206a198::func_020694e4,
        &Unk_0206a198::func_020694d8,
        &Unk_0206a198::func_020694cc,
        &Unk_0206a198::func_020694c0,
        &Unk_0206a198::func_020694b4,
        &Unk_0206a198::func_020694a8,
        &Unk_0206a198::func_0206949c,
        &Unk_0206a198::func_0206945c,
        &Unk_0206a198::func_02069400,
        &Unk_0206a198::func_020693fc,
        &Unk_0206a198::func_020693a0,
        &Unk_0206a198::func_02069360,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a498()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[8])() = {
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069258,
        &Unk_0206a198::func_02069fa0,
        &Unk_0206a198::func_02069fa0,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a380()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[14])() = {
        &Unk_0206a198::func_0206920c,
        &Unk_0206a198::func_020691bc,
        &Unk_0206a198::func_0206912c,
        &Unk_0206a198::func_020690d0,
        &Unk_0206a198::func_0206905c,
        &Unk_0206a198::func_02068ffc,
        &Unk_0206a198::func_02068f9c,
        &Unk_0206a198::func_02068f10,
        &Unk_0206a198::func_02068e9c,
        &Unk_0206a198::func_02068e40,
        &Unk_0206a198::func_02068dd0,
        &Unk_0206a198::func_02068d78,
        &Unk_0206a198::func_02068d20,
        &Unk_0206a198::func_02068c9c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a358()
{
    using namespace n14;
    u32 v = unk_3c;
    Unk_0206a198_Sub *p = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    p->vfunc_38(v);
}
void Unk_0206a198::func_0206a2d8()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[3])() = {
        &Unk_0206a198::func_02068c98,
        &Unk_0206a198::func_02068c94,
        &Unk_0206a198::func_02068c90,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a1f8()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[10])() = {
        &Unk_0206a198::func_02068c70,
        &Unk_0206a198::func_02068c50,
        &Unk_0206a198::func_02068c30,
        &Unk_0206a198::func_02068c10,
        &Unk_0206a198::func_02068bf0,
        &Unk_0206a198::func_02068bd0,
        &Unk_0206a198::func_02068bb0,
        &Unk_0206a198::func_02068b90,
        &Unk_0206a198::func_02068b70,
        &Unk_0206a198::func_02068b50,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}
void Unk_0206a198::func_0206a198()
{
    using namespace n14;
    static void (Unk_0206a198::*const tbl[1])() = {
        &Unk_0206a198::func_02068b4c,
    };
    void (Unk_0206a198::*f)() = tbl[unk_3c];
    (this->*f)();
}

// ======== unk_02069834.cpp ========
#define Unk_020ddcf0 Unk_020ddcf0_v13
namespace n13 {
extern "C" { u8 *func_020a72a0(s32 i); }
extern "C" { Unk_020aa3b8 *_ZN12Unk_020660f813func_020679b4Ev(void *p); }
extern "C" { void _ZN12Unk_020668a013func_02067030Ev(void *p); }
extern "C" { void _ZN12Unk_02066ce013func_02066cf8Ei(void *p, u32 v); }
extern "C" { s32 _ZN12Unk_020668a013func_02066d04Ev(void *p); }
extern "C" { u8 *func_020a6c84(u8 *p, s32 a, s32 b); }
extern "C" { void _ZN12Unk_020660f813func_0206755cEiiii(void *p, s32 a, s32 b, s32 c, s32 d); }
extern "C" { u8 *func_0205023c(); }
extern "C" { u8 *func_02050234(); }
extern "C" { u8 *func_0205021c(); }
extern "C" { u8 *func_02050224(); }
extern "C" { u8 *func_0205022c(); }
extern "C" { void func_0200402c(s32 a); }
extern "C" { void func_020a7768(Unk_020a72b0 *p); }
typedef void (Unk_02069fa4::*Unk_02069fa4_Fn)();

}
void Unk_02069fa4::func_0206a024() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[20] = {
        &Unk_02069fa4::func_02069fa0,
        &Unk_02069fa4::func_02068b44,
        &Unk_02069fa4::func_02068b3c,
        &Unk_02069fa4::func_02068b34,
        &Unk_02069fa4::func_02068b2c,
        &Unk_02069fa4::func_02068b18,
        &Unk_02069fa4::func_02068b04,
        &Unk_02069fa4::func_02068af0,
        &Unk_02069fa4::func_02068adc,
        &Unk_02069fa4::func_02068ac8,
        &Unk_02069fa4::func_02068aac,
        &Unk_02069fa4::func_02068a90,
        &Unk_02069fa4::func_02068a74,
        &Unk_02069fa4::func_02068a58,
        &Unk_02069fa4::func_02068a3c,
        &Unk_02069fa4::func_02068a20,
        &Unk_02069fa4::func_02068a0c,
        &Unk_02069fa4::func_020689f8,
        &Unk_02069fa4::func_020689e4,
        &Unk_02069fa4::func_020689d0};
    Unk_02069fa4_Fn f = tbl[unk_3c];
    (this->*f)();
}
void Unk_02069fa4::func_02069fa4() {
    using namespace n13;
    static Unk_02069fa4_Fn tbl[3] = {&Unk_02069fa4::func_020689a0, 0, &Unk_02069fa4::func_02068950};
    Unk_02069fa4_Fn f = tbl[unk_3c];
    (this->*f)();
}
void Unk_02069834::func_02069fa0() {
    using namespace n13;}
void Unk_02069834::func_02069f88() {
    using namespace n13; func_020a8348(func_0205022c()); }
void Unk_02069834::func_02069f70() {
    using namespace n13; func_020a8348(func_02050224()); }
void Unk_02069834::func_02069f58() {
    using namespace n13; func_020a8348(func_0205021c()); }
void Unk_02069834::func_02069f40() {
    using namespace n13; func_020a8348(func_02050234()); }
void Unk_02069834::func_02069f28() {
    using namespace n13; func_020a8348(func_0205023c()); }
void Unk_02069834::func_02069efc() {
    using namespace n13;
    u16 v[2];
    unk_38.func_020a7634(v);
    unk_58 = v[0] << 12;
    unk_24->unk_16fa = 1;
}
void Unk_02069834::func_02069ee8() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_30 = 4;
}
void Unk_02069834::func_02069ec4() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4e = 1;
    unk_24->unk_16f9 = 1;
}
void Unk_02069834::func_02069ea0() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4e = 0;
    unk_24->unk_16f9 = 0;
}
void Unk_02069834::func_02069e88() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4f = 1;
}
void Unk_02069834::func_02069e70() {
    using namespace n13;
    func_020a7768(&unk_38);
    unk_4f = 0;
}
void Unk_02069834::func_02069e28() {
    using namespace n13;
    u8 *base = unk_04;
    u8 *p = func_020a6c84(base, 1, 7);
    if (p != 0) {
        if (_ZN12Unk_020668a013func_02066d04Ev(unk_24) != 0) {
            func_020a8400(p - base);
            func_020a8348(unk_24->unk_19d0.vfunc_0c());
        }
    }
}
void Unk_02069834::func_02069e24() {
    using namespace n13;}
void Unk_02069834::func_02069df0() {
    using namespace n13;
    func_0200402c(6);
    _ZN12Unk_020660f813func_0206755cEiiii(unk_24, 0x6000, 0x666, 0x4cc, 0x1199);
}
void Unk_02069834::func_02069dc0() {
    using namespace n13;
    func_0200402c(7);
    _ZN12Unk_020660f813func_0206755cEiiii(unk_24, 0xa000, 0x800, 0x800, 0x1333);
}
void Unk_02069834::func_02069d8c() {
    using namespace n13;
    func_0200402c(8);
    _ZN12Unk_020660f813func_0206755cEiiii(unk_24, 0x11000, 0xa66, 0xccc, 0x1000);
}
void Unk_02069834::func_02069d68() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(0);
}
void Unk_02069834::func_02069d44() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(1);
}
void Unk_02069834::func_02069d20() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(2);
}
void Unk_02069834::func_02069cfc() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(3);
}
void Unk_02069834::func_02069cd8() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_1c(4);
}
void Unk_02069834::func_02069cb8() {
    using namespace n13;
    u8 v[4];
    unk_38.func_020a7754(v);
    _ZN12Unk_02066ce013func_02066cf8Ei(unk_24, v[0]);
}
void Unk_02069834::func_02069c34() {
    using namespace n13;
    Unk_020aa3b8 *l = _ZN12Unk_020660f813func_020679b4Ev(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    func_020a8400(unk_38.func_020a75dc(a1, a2, b1, b2));
    l->func_020aa4cc(2);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}
void Unk_02069834::func_02069b94() {
    using namespace n13;
    Unk_020aa3b8 *l = _ZN12Unk_020660f813func_020679b4Ev(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    func_020a8400(unk_38.func_020a7574(a1, a2, b1, b2, c1, c2));
    l->func_020aa4cc(3);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}
void Unk_02069834::func_02069ad0() {
    using namespace n13;
    Unk_020aa3b8 *l = _ZN12Unk_020660f813func_020679b4Ev(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    Unk_020aa72c *d = l->func_020aa560(3);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    u8 *d1 = d->func_020aa79c();
    Unk_020e2a78 *d2 = d->func_020aa7a0();
    func_020a8400(unk_38.func_020a74fc(a1, a2, b1, b2, c1, c2, d1, d2));
    l->func_020aa4cc(4);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}
void Unk_02069834::func_020699ec() {
    using namespace n13;
    Unk_020aa3b8 *l = _ZN12Unk_020660f813func_020679b4Ev(unk_24);
    Unk_020aa72c *a = l->func_020aa560(0);
    Unk_020aa72c *b = l->func_020aa560(1);
    Unk_020aa72c *c = l->func_020aa560(2);
    Unk_020aa72c *d = l->func_020aa560(3);
    Unk_020aa72c *e = l->func_020aa560(4);
    l->func_020aa5f4();
    u8 *a1 = a->func_020aa79c();
    Unk_020e2a78 *a2 = a->func_020aa7a0();
    u8 *b1 = b->func_020aa79c();
    Unk_020e2a78 *b2 = b->func_020aa7a0();
    u8 *c1 = c->func_020aa79c();
    Unk_020e2a78 *c2 = c->func_020aa7a0();
    u8 *d1 = d->func_020aa79c();
    Unk_020e2a78 *d2 = d->func_020aa7a0();
    u8 *e1 = e->func_020aa79c();
    Unk_020e2a78 *e2 = e->func_020aa7a0();
    func_020a8400(unk_38.func_020a7478(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2));
    l->func_020aa4cc(5);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8de0(l);
    ((Unk_020a8cf8 *)unk_24->unk_b4)->func_020a8d3c();
    unk_30 = 5;
}
void Unk_02069834::func_020699d4() {
    using namespace n13;
    func_02069c34();
    _ZN12Unk_020660f813func_020679b4Ev(unk_24)->func_020aa4b8();
}
void Unk_02069834::func_020699bc() {
    using namespace n13;
    func_02069b94();
    _ZN12Unk_020660f813func_020679b4Ev(unk_24)->func_020aa4b8();
}
void Unk_02069834::func_020699a4() {
    using namespace n13;
    func_02069ad0();
    _ZN12Unk_020660f813func_020679b4Ev(unk_24)->func_020aa4b8();
}
void Unk_02069834::func_0206998c() {
    using namespace n13;
    func_020699ec();
    _ZN12Unk_020660f813func_020679b4Ev(unk_24)->func_020aa4b8();
}
void Unk_02069834::func_0206996c() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    o->vfunc_20();
}
void Unk_02069834::func_02069940() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_24(v[0]);
}
void Unk_02069834::func_02069914() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_28(v[0]);
}
void Unk_02069834::func_020698e8() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_2c(v[0]);
}
void Unk_02069834::func_020698bc() {
    using namespace n13;
    Unk_020ddcf0 *o = unk_24->unk_13b0;
    u8 v[4];
    unk_38.func_020a7754(v);
    o->vfunc_30(v[0]);
}
void Unk_02069834::func_02069878() {
    using namespace n13;
    _ZN12Unk_020668a013func_02067030Ev(unk_24);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(unk_24->unk_189c.vfunc_0c());
    func_020a8348(func_020a72a0(5));
}
void Unk_02069834::func_02069834() {
    using namespace n13;
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(unk_24->unk_13b0->func_02065f10()->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}
#undef Unk_020ddcf0

// ======== unk_02068f10.cpp ========
#define data_020dde2c ((char *)"\202i\220e\226\247\223x")
#define data_020dde38 ((char *)"\203u\201[\203\200")
#define data_020dde40 ((char *)"\203z\203\201\203R\203g\203o")
#define data_020dde4c ((char *)"\203j\203b\203N\203l\201[\203\200")
#define data_020dde5c ((char *)"\210\363\217\333")
#define data_020dde64 ((char *)"\221\274\202\314\217Z\220l\202o\226\274")
#define data_020dde74 ((char *)"\203\211\203\223\203_\203\200\202m\202o\202b")
#define data_020dde84 ((char *)"\222\207\210\253\202\265\202m\202o\202b")
#define data_020dde94 ((char *)"\222\207\227\307\202\265\202m\202o\202b")
#define data_020ddea4 ((char *)"\214\373\202\256\202\271\202\360\216g\227p\201H")
namespace n12 {
extern "C" { u32 func_0203c304(); }
extern "C" { u32 func_0203c2f4(); }
extern "C" { s32 func_0207bb7c(void *p); }
extern "C" { s32 func_0209750c(); }
extern "C" { s32 _ZN12Unk_0209865c13func_0209888cEv(); }
extern "C" { s32 _ZN12Unk_020940a013func_0209411cEv(); }
extern "C" { s32 func_0207f854(void *p, s32 v); }
extern "C" { s32 _ZN12Unk_0208091c13func_02080dd8Ev(); }
extern "C" { s32 func_02063b8c(s32 v); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066e50Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066d5cEv(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066db0Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066e04Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066ea0Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066f2cEv(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066f98Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_02066fe4Ev(u8 *c); }
extern "C" { BOOL _ZN12Unk_020668a013func_020670a8Ev(u8 *c); }
extern "C" { void _ZN12Unk_020668a013func_02067070Ev(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_020675a8Ev(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_020675d8Ev(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_0206760cEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_02067648Ev(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_0206766cEv(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_02067690Ev(u8 *c); }
extern "C" { Unk_02068f10_Obj *_ZN12Unk_020660f813func_020676b4Ev(u8 *c); }
extern "C" { Unk_020aa3b8 *_ZN12Unk_020660f813func_020679b4Ev(u8 *c); }
extern "C" { u8 *func_020a72a0(s32 i); }
extern "C" { extern u8 data_021d7350[]; }
extern "C" { extern s32 data_020cbf90; }
extern "C" { extern u8 data_021e58a8[]; }
extern "C" { extern u8 data_020cba1c[]; }
static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }
static inline Unk_02068f10_Obj *At(u8 *ctx, u32 off) { return (Unk_02068f10_Obj *)(ctx + off); }

}
void Unk_02068f10::func_020697f4() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_020670a8Ev(unk_24)) func_0206afa0(0xb58, data_020ddea4);
    func_020a8348(At(unk_24, 0x1860)->vfunc_0c());
}
void Unk_02068f10::func_020697b0() {
    using namespace n12;
    _ZN12Unk_020668a013func_02067070Ev(unk_24);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x1880)->vfunc_0c());
    func_020a8348(func_020a72a0(8));
}
void Unk_02068f10::func_02069790() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_020676b4Ev(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_02069770() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_02067690Ev(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_02069750() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_0206766cEv(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_02069730() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_02067648Ev(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_02069710() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_0206760cEv(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_020696f0() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_020675d8Ev(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_020696d0() {
    using namespace n12; func_020a8348(_ZN12Unk_020660f813func_020675a8Ev(unk_24)->vfunc_0c()); }
void Unk_02068f10::func_02069674() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066fe4Ev(unk_24)) func_0206afa0(0xbbd, data_020dde94);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18b8)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}
void Unk_02068f10::func_02069618() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066f98Ev(unk_24)) func_0206afa0(0xbcd, data_020dde84);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18d4)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}
void Unk_02068f10::func_020695bc() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066f2cEv(unk_24)) func_0206afa0(0xbdd, data_020dde74);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x18f0)->vfunc_0c());
    func_020a8348(func_020a72a0(6));
}
void Unk_02068f10::func_02069550() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066ea0Ev(unk_24)) func_0206afa0(0xbee, data_020dde64);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x190c)->vfunc_0c());
    s32 k = 5;
    if (unk_24[0x19f6] != 0) k = 6;
    func_020a8348(func_020a72a0(k));
}
void Unk_02068f10::func_02069544() {
    using namespace n12; func_0206adb8(0); }
void Unk_02068f10::func_02069538() {
    using namespace n12; func_0206adb8(1); }
void Unk_02068f10::func_0206952c() {
    using namespace n12; func_0206adb8(2); }
void Unk_02068f10::func_02069520() {
    using namespace n12; func_0206adb8(3); }
void Unk_02068f10::func_02069514() {
    using namespace n12; func_0206adb8(4); }
void Unk_02068f10::func_02069508() {
    using namespace n12; func_0206adb8(5); }
void Unk_02068f10::func_020694fc() {
    using namespace n12; func_0206adb8(6); }
void Unk_02068f10::func_020694f0() {
    using namespace n12; func_0206adb8(7); }
void Unk_02068f10::func_020694e4() {
    using namespace n12; func_0206adb8(8); }
void Unk_02068f10::func_020694d8() {
    using namespace n12; func_0206adb8(9); }
void Unk_02068f10::func_020694cc() {
    using namespace n12; func_0206adb8(10); }
void Unk_02068f10::func_020694c0() {
    using namespace n12; func_0206ad58(0); }
void Unk_02068f10::func_020694b4() {
    using namespace n12; func_0206ad58(1); }
void Unk_02068f10::func_020694a8() {
    using namespace n12; func_0206ad58(2); }
void Unk_02068f10::func_0206949c() {
    using namespace n12; func_0206ad58(3); }
void Unk_02068f10::func_0206945c() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066e04Ev(unk_24)) func_0206afa0(0xc7d, data_020dde5c);
    func_020a8348(At(unk_24, 0x195c)->vfunc_0c());
}
void Unk_02068f10::func_02069400() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066db0Ev(unk_24)) func_0206afa0(0xc8b, data_020dde4c);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x1990)->vfunc_0c());
    func_020a8348(func_020a72a0(5));
}
void Unk_02068f10::func_020693fc() {
    using namespace n12;}
void Unk_02068f10::func_020693a0() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066d5cEv(unk_24)) func_0206afa0(0xca4, data_020dde40);
    func_020a8348(func_020a72a0(unk_5c));
    func_020a8348(At(unk_24, 0x19ac)->vfunc_0c());
    func_020a8348(func_020a72a0(2));
}
void Unk_02068f10::func_02069360() {
    using namespace n12;
    if (!_ZN12Unk_020668a013func_02066e50Ev(unk_24)) func_0206afa0(0xcb5, data_020dde38);
    func_020a8348(At(unk_24, 0x1928)->vfunc_0c());
}
void Unk_02068f10::func_02069258() {
    using namespace n12;
    if (unk_d8 != 0) {
        unk_d8 = 0;
        Unk_020aa3b8 *o = _ZN12Unk_020660f813func_020679b4Ev(unk_24);
        Unk_020aa72c *a = o->func_020aa560(0);
        Unk_020aa72c *b = o->func_020aa560(1);
        Unk_020aa72c *c = o->func_020aa560(2);
        Unk_020aa72c *d = o->func_020aa560(3);
        o->func_020aa5f4();
        u8 *a0 = a->func_020aa790();
        u8 *a1 = a->func_020aa79c();
        u8 *b0 = b->func_020aa790();
        u8 *b1 = b->func_020aa79c();
        u8 *c0 = c->func_020aa790();
        u8 *c1 = c->func_020aa79c();
        u8 *d0 = d->func_020aa790();
        u8 *d1 = d->func_020aa79c();
        Unk_020e2c80 *e0 = o->func_020aa54c();
        Unk_020e2c80 *e1 = o->func_020aa538();
        func_020a8400(unk_38.func_020a7388(a0, a1, b0, b1, c0, c1, d0, d1, (Unk_020e2a78 *)e0, (Unk_020e2a78 *)e1));
        o->func_020aa4cc(4);
        ((Unk_020a8cf8 *)(unk_24 + 0xb4))->func_020a8dc8(o);
        ((Unk_020a8cf8 *)(unk_24 + 0xb4))->func_020a8d3c();
        unk_30 = 5;
    } else {
        func_020a83f4((u8 *)unk_38.unk_10);
        unk_d8 = 1;
        func_020a8348(data_020cba1c);
    }
}
void Unk_02068f10::func_0206920c() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(0, 2);
    unk_38.func_020a7730(&r[1], &r[2]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(2)];
    func_0206ac98(r);
}
void Unk_02068f10::func_020691bc() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(1, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u8 *q = &r[1];
    r[0] = q[func_02063b8c(3)];
    func_0206ac98(r);
}
void Unk_02068f10::func_0206912c() {
    using namespace n12;
    u8 r[4];
    Unk_02068f10_Obj *o = Sel(unk_24);
    o->vfunc_34(2, 2);
    unk_38.func_020a76fc(&r[0], &r[2], &r[3]);
    s32 k = 0;
    void *p = o->vfunc_68();
    func_0209750c();
    if (p) {
        s32 v = _ZN12Unk_0209865c13func_0209888cEv();
        if (func_0207f854(p, v) != 0) {
            if (_ZN12Unk_0208091c13func_02080dd8Ev() < r[0]) k = 1;
        }
    } else {
        func_0206afa0(0xd64, data_020dde2c);
    }
    u8 *q = &r[2];
    r[1] = q[k];
    func_0206ac98(&r[1]);
}
void Unk_02068f10::func_020690d0() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(3, 2);
    unk_38.func_020a7730(&r[1], &r[2]);
    func_0209750c();
    _ZN12Unk_0209865c13func_0209888cEv();
    s32 i;
    if (_ZN12Unk_020940a013func_0209411cEv() != 0) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void Unk_02068f10::func_0206905c() {
    using namespace n12;
    u8 r[5];
    Sel(unk_24)->vfunc_34(4, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    s32 t = ((Unk_0206022c *)data_021e58a8)->func_020604c4();
    s32 i;
    if (t == 0) i = 0;
    else if (t >= 1 && t <= 2) i = 1;
    else if (t == 3) i = 2;
    else i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void Unk_02068f10::func_02068ffc() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(5, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u32 t = func_0203c2f4();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void Unk_02068f10::func_02068f9c() {
    using namespace n12;
    u8 r[4];
    Sel(unk_24)->vfunc_34(6, 3);
    unk_38.func_020a76fc(&r[1], &r[2], &r[3]);
    u32 t = func_0203c304();
    s32 i;
    if (t == 0x38) i = 2;
    else if (t >= 0x21) i = 1;
    else i = 0;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
void Unk_02068f10::func_02068f10() {
    using namespace n12;
    u8 r[5];
    Sel(unk_24)->vfunc_34(7, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    u32 g = (u32)data_021d7350;
    s32 n;
    if (g != 0) n = func_0207bb7c((u8 *)g + 0x8a3c);
    else n = 0;
    s32 i;
    if (n <= data_020cbf90) i = 0;
    else if (n == data_020cbf90 + 1) i = 1;
    else if (n >= 8) i = 3;
    else i = 2;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
#undef data_020dde2c
#undef data_020dde38
#undef data_020dde40
#undef data_020dde4c
#undef data_020dde5c
#undef data_020dde64
#undef data_020dde74
#undef data_020dde84
#undef data_020dde94
#undef data_020ddea4

// ======== unk_02068e9c.cpp ========
#define unk_24 ((u8 *)unk_24)
namespace n11 {
static inline Unk_02068f10_Obj *Sel(u8 *ctx) { return *(Unk_02068f10_Obj **)(ctx + 0x13b0); }

}
void Unk_020ddccc::func_02068e9c() {
    using namespace n11;
    u8 r[5];
    Sel(unk_24)->vfunc_34(8, 4);
    unk_38.func_020a76bc(&r[1], &r[2], &r[3], &r[4]);
    s32 v = *(s32 *)(unk_24 + 0x1718);
    s32 i = 0;
    if (v == 0) {
    } else if (v == 1) i = 1;
    else if (v == 2) i = 2;
    else if (v == 3) i = 3;
    u8 *q = &r[1];
    r[0] = q[i];
    func_0206ac98(r);
}
#undef unk_24

// ======== unk_020685c4.cpp ========
#define SUB2C ((Unk_020a72b0 *)&unk_2c)
#define OWN(off) ((u8 *)unk_24 + (off))
#define unk_38 (*(Unk_020a72b0 *)unk_38)
#define data_020dddbc ((u8 *)"/a_mes/a_mes_bg_ncg.bin")
#define data_020dddd4 ((u8 *)"/a_mes/a_mes_bg_ncl.bin")
#define data_020dddec ((u8 *)"/a_mes/a_mes0a_bg_nsc.bin")
#define data_020dde08 ((u8 *)"/a_mes/a_mes0b_bg_nsc.bin")
#define data_020dde24 ((u8 *)"\202i\216\355\221\260")
namespace n10 {
extern "C" { extern u8 data_020cba24[]; }
extern "C" { extern u8 data_021d7350[]; }
extern "C" { void *func_020e8594(u32 size); }
extern "C" { BOOL FS_OpenFile(void *self, const void *path); }
extern "C" { s32 FS_ReadFile(void *self, void *dst, u32 size); }
extern "C" { BOOL FS_CloseFile(void *self); }
extern "C" { void _ZN12Unk_020e0d44C1Eh(void *p, s32 v); }
extern "C" { void _ZN12Unk_020e0d4413func_02089328Ev(void *p); }
extern "C" { void _ZN12Unk_020e0d44D1Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec78Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec7cEv(void *p); }
extern "C" { void _ZN12Unk_020e10dcD1Ev(void *p); }
extern "C" { void _ZN12Unk_020e10dcC1Ev(void *p); }
extern "C" { BOOL func_0206774c(void); }
extern "C" { s32 func_0207f9a4(void); }
extern "C" { s32 func_020974f8(void); }
extern "C" { s32 func_020978fc(void); }
extern "C" { s32 func_020978a4(void *p); }
extern "C" { s32 func_020b8fe8(void); }
extern "C" { void _ZN12Unk_020ddc8413func_0206b374EPhih(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN12Unk_020ddc8413func_0206b338EPhjh(void *self, u32 a, u32 b, BOOL c); }
extern "C" { void _ZN12Unk_0206b75413func_0206b618EPv(void *a, void *b); }
extern "C" { void _ZN12Unk_0206b75413func_0206b59cEj(void *a, u32 b); }
extern "C" { void func_020a7768(void *p); }
extern "C" { void _ZN12Unk_020a72b0C1Ev(void *p); }

}
void Unk_020ddca8::func_02068e40() {
    using namespace n10;
    u8 b[4];
    s32 i, r;
    unk_24->unk_13b0->vfunc_34(9, 3);
    unk_38.func_020a76fc(&b[1], &b[2], &b[3]);
    r = func_020b8fe8();
    i = 0;
    if (r == 1) i = 1;
    else if (r == 2) i = 2;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void Unk_020ddca8::func_02068dd0() {
    using namespace n10;
    u8 b[8];
    s32 i, t;
    u8 *g;
    unk_24->unk_13b0->vfunc_34(0xa, 4);
    unk_38.func_020a76bc(&b[1], &b[2], &b[3], &b[4]);
    g = data_021d7350;
    if ((u32)g != 0) t = func_020978a4(g + 0xc);
    else t = 0;
    i = t - 1;
    if (i < 0) i = 0;
    else if (i > 3) i = 3;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void Unk_020ddca8::func_02068d78() {
    using namespace n10;
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xb, 7);
    unk_38.func_020a7648(&b[1], 7);
    u32 v = unk_24->unk_1710;
    s32 i;
    if (v == 0) i = 6;
    else i = v - 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void Unk_020ddca8::func_02068d20() {
    using namespace n10;
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xc, 2);
    unk_38.func_020a7730(&b[1], &b[2]);
    func_020974f8();
    s32 i;
    s32 r = func_020978fc();
    if (r == 1) i = 0;
    else i = 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
void Unk_020ddca8::func_02068c9c() {
    using namespace n10;
    u8 b[4];
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    BOOL i;
    s32 res;
    m->vfunc_34(0xd, 2);
    unk_38.func_020a76fc(&b[0], &b[2], &b[3]);
    b[0]--;
    res = m->vfunc_68();
    i = 0;
    if (res != 0) {
        s32 c = func_0207f9a4();
        if (c != b[0]) i = 1;
    } else {
        func_0206afa0(0xeeb, data_020dde24);
    }
    u8 *q = &b[2];
    b[1] = q[i];
    func_0206ac98(&b[1]);
}
void Unk_020ddca8::func_02068c98() {
    using namespace n10;}
void Unk_020ddca8::func_02068c94() {
    using namespace n10;}
void Unk_020ddca8::func_02068c90() {
    using namespace n10;}
void Unk_020ddca8::func_02068c70() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_3c();
}
void Unk_020ddca8::func_02068c50() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_40();
}
void Unk_020ddca8::func_02068c30() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_44();
}
void Unk_020ddca8::func_02068c10() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_48();
}
void Unk_020ddca8::func_02068bf0() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_4c();
}
void Unk_020ddca8::func_02068bd0() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_50();
}
void Unk_020ddca8::func_02068bb0() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_54();
}
void Unk_020ddca8::func_02068b90() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_58();
}
void Unk_020ddca8::func_02068b70() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_5c();
}
void Unk_020ddca8::func_02068b50() {
    using namespace n10;
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_60();
}
void Unk_020ddca8::func_02068b4c() {
    using namespace n10;}
void Unk_020ddca8::func_02068b44() {
    using namespace n10;
    unk_e0 = 1;
}
void Unk_020ddca8::func_02068b3c() {
    using namespace n10;
    unk_e0 = 2;
}
void Unk_020ddca8::func_02068b34() {
    using namespace n10;
    unk_d9 = 1;
}
void Unk_020ddca8::func_02068b2c() {
    using namespace n10;
    func_0206ad0c();
}
void Unk_020ddca8::func_02068b18() {
    using namespace n10;
    func_0206acb0(unk_24->unk_13c0);
}
void Unk_020ddca8::func_02068b04() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[1]);
}
void Unk_020ddca8::func_02068af0() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[2]);
}
void Unk_020ddca8::func_02068adc() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[3]);
}
void Unk_020ddca8::func_02068ac8() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[4]);
}
void Unk_020ddca8::func_02068aac() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[5]);
}
void Unk_020ddca8::func_02068a90() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[6]);
}
void Unk_020ddca8::func_02068a74() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[7]);
}
void Unk_020ddca8::func_02068a58() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[8]);
}
void Unk_020ddca8::func_02068a3c() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[9]);
}
void Unk_020ddca8::func_02068a20() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[10]);
}
void Unk_020ddca8::func_02068a0c() {
    using namespace n10;
    func_0206acb0(unk_24->unk_15fc);
}
void Unk_020ddca8::func_020689f8() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[1]);
}
void Unk_020ddca8::func_020689e4() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[2]);
}
void Unk_020ddca8::func_020689d0() {
    using namespace n10;
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[3]);
}
void Unk_020ddca8::func_020689a0() {
    using namespace n10;
    unk_5c = unk_38.func_020a72b0();
    _ZN12Unk_0206b75413func_0206b618EPv(unk_28, &unk_38);
    _ZN12Unk_0206b75413func_0206b59cEj(unk_28, unk_5c);
    unk_24->unk_1704 = unk_5c;
}
void Unk_020ddca8::func_02068950() {
    using namespace n10;
    u32 a;
    char *b;
    char *c;
    unk_38.func_020a72c4(&a, &b, &c);
    BOOL r = func_0206774c();
    _ZN12Unk_020ddc8413func_0206b374EPhih(unk_60, (u32)b, a, r);
    _ZN12Unk_020ddc8413func_0206b338EPhjh(unk_9c, (u32)c, (u32)b, r == 0);
    func_020a8400(a * 2);
}
Unk_020ddca8::Unk_020ddca8(Unk_02068848_Owner *owner) {
    using namespace n10;
    unk_24 = owner;
    unk_28 = 0;
    _ZN12Unk_020a72b0C1Ev(SUB2C);
}
Unk_020ddca8::~Unk_020ddca8() {
    using namespace n10;}
void Unk_020ddca8::func_020688ac(u8 *p) {
    using namespace n10;
    func_02068874();
    unk_28 = 0;
    func_020a8368(p);
    func_020a82ec(FALSE);
}
void Unk_020ddca8::vfunc_14(u8 *p) {
    using namespace n10;
    SUB2C->func_020a777c(p);
    if (unk_28 == 0) {
        s32 a = *(volatile s32 *)&unk_2c;
        s32 b = *(volatile s32 *)&unk_30;
        if (a == 10 && b == 0) {
            func_02068848();
        }
    }
}
void Unk_020ddca8::func_02068874() {
    using namespace n10;
    unk_28 = 0;
    _ZN12Unk_020a72b0C1Ev(SUB2C);
}
// ---- Unk_020ddca8
void Unk_020ddca8::func_02068848() {
    using namespace n10;
    u8 b;
    SUB2C->func_020a7754(&b);
    unk_24->unk_13b0->vfunc_64(b);
}
Unk_02068808 *Unk_02068808::func_02068808() {
    using namespace n10;
    unk_00 = NULL;
    unk_04 = NULL;
    unk_08 = NULL;
    _ZN12Unk_020e0d44C1Eh(unk_0c, 1);
    _ZN12Unk_020e10dcC1Ev(unk_50);
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
    _ZN12Unk_020e0d4413func_02089328Ev(unk_0c);
    _ZN12Unk_020e10dc13func_0208ec7cEv(unk_50);
    return this;
}
Unk_02068808 *Unk_02068808::func_020687e0() {
    using namespace n10;
    _ZN12Unk_020e10dc13func_0208ec78Ev(unk_50);
    func_02068524();
    _ZN12Unk_020e10dcD1Ev(unk_50);
    _ZN12Unk_020e0d44D1Ev(unk_0c);
    return this;
}
void Unk_02068808::func_020687cc() {
    using namespace n10;
    func_020683d0();
    func_020682c4();
}
void Unk_02068808::func_020687b8() {
    using namespace n10;
    func_020683bc();
    func_020682b8();
}
BOOL Unk_02068808::func_02068748(void *file, BOOL alt) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, alt ? data_020dddec : data_020dde08);
    BOOL ok;
    unk_00 = (u16 *)func_020e8594(0x800);
    if (unk_00 != NULL) {
        s32 n = FS_ReadFile(file, unk_00, 0x800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_00) return TRUE;
    return FALSE;
}
BOOL Unk_02068808::func_020686e4(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddd4);
    BOOL ok;
    unk_04 = func_020e8594(0x180);
    if (unk_04 != NULL) {
        s32 n = FS_ReadFile(file, unk_04, 0x180);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_04) return TRUE;
    return FALSE;
}
BOOL Unk_02068808::func_02068680(void *file) {
    using namespace n10;
    BOOL a = FS_OpenFile(file, data_020dddbc);
    BOOL ok;
    unk_08 = func_020e8594(0x2800);
    if (unk_08 != NULL) {
        s32 n = FS_ReadFile(file, unk_08, 0x2800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = FS_CloseFile(file);
    if (a && ok && r && unk_08) return TRUE;
    return FALSE;
}
void Unk_02068808::func_0206860c(s32 a, BOOL b) {
    using namespace n10;
    u32 pal;
    s32 y, x;
    if (b != 0) {
        pal = 0xb000;
    } else if (a == 0) {
        pal = 0x1000;
    } else {
        pal = 0x2000;
    }
    if (pal != 0x1000) {
        for (y = 13; y <= 16; y++) {
            for (x = 3; x <= 14; x++) {
                u16 *p = (u16 *)((y << 6) + (u32)unk_00);
                if ((p[x] & 0xf000) == 0x1000) {
                    u16 v = (u16)(p[x] & 0xffff0fff);
                    p[x] = v | pal;
                }
            }
        }
    }
}
// ---- Unk_02068808
void Unk_02068808::func_020685c4(s32 idx) {
    using namespace n10;
    s32 y, x;
    for (y = 15; y <= 24; y++) {
        for (x = 1; x <= 30; x++) {
            u16 *p = (u16 *)((y << 6) + (u32)unk_00);
            u16 v = (u16)(p[x] & 0xffff0fff);
            p[x] = v | (((u32)data_020cba24[idx] << 28) >> 16);
        }
    }
}
#undef SUB2C
#undef OWN
#undef unk_38
#undef data_020dddbc
#undef data_020dddd4
#undef data_020dddec
#undef data_020dde08
#undef data_020dde24

// ======== unk_02068558.cpp ========
namespace n9 {
extern "C" void FS_InitFile(void *p);

}
BOOL Unk_02068808::func_02068558(s32 a, u32 b, s32 c, u8 d) {
    using namespace n9;
    BOOL result = FALSE;
    BOOL alt = (b == 0 && a == 0) ? TRUE : FALSE;
    Unk_02068558_File file;
    FS_InitFile(&file);
    if (func_02068748(&file, alt)) {
        if (func_020686e4(&file)) {
            if (func_02068680(&file)) {
                if (alt) {
                    func_0206860c(c, d);
                } else {
                    func_020685c4(a);
                }
                result = TRUE;
            }
        }
    }
    return result;
}

// ======== unk_02067c70.cpp ========
namespace n8 {
extern "C" { void *__cxa_vec_ctor(void *p, u32 n, u32 sz, void *ctor, void *dtor); }
extern "C" { extern u16 data_020ca488; }
extern "C" { extern u8 data_020cba14[]; }
extern "C" { extern u8 data_020cba0c[]; }
extern "C" { void *func_0207e310(void *); }
extern "C" { u32 func_0207856c(void *); }
extern "C" { BOOL func_0203cb38(); }
extern "C" { void func_02003f8c(); }
extern "C" { void func_02003fc8(s32); }
extern "C" { void func_02003f7c(s32); }
extern "C" { void func_02003fa4(s32, s32, u32, u32); }
extern "C" { void func_0200402c(u32); }
extern "C" { void _ZN12Unk_020660f813func_02067724Ei(void *, s32); }
extern "C" { void _ZN12Unk_020660f813func_02067708Ev(void *); }
extern "C" { BOOL func_02050244(u8 *); }
extern "C" { s32 func_020501d4(u32); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec50Eii(void *, s32, s32); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec58Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ec68Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ee30Ev(void *); }
extern "C" { void _ZN12Unk_020e10dc13func_0208ee38Ej(void *); }
extern "C" { s32 _ZN12Unk_020e0d4413func_020892acEv(void *); }
extern "C" { BOOL _ZN12Unk_020e0d4413func_02089284Ev(void *); }
extern "C" { void _ZN12Unk_020e0d4413func_02089320Eii(void *, s32, s32); }
extern "C" { void _ZN12Unk_020e0d4413func_020892b0Ei(void *, s32); }
extern "C" { void func_02001804(s32, s32); }
extern "C" { void func_02001674(s32, s32, s32, s32); }
extern "C" { void func_020014e4(s32); }
extern "C" { void func_02001554(s32); }
extern "C" { void func_020014f4(s32); }
extern "C" { void func_02001564(s32); }
extern "C" { void func_02001750(s32); }
extern "C" { void func_020016cc(s32); }
extern "C" { void DC_FlushRange(void *, u32); }
extern "C" { void GX_LoadBGPltt(void *, s32, u32); }
extern "C" { void GX_LoadBG2Char(void *, s32, u32); }
extern "C" { void GX_LoadBG2Scr(void *, s32, u32); }
extern "C" { void MI_CpuFill8(void *, s32, u32); }
extern "C" { void func_020e8558(void *); }

extern "C" void func_02068524(Unk_02068490_Ptrs *p)
{
    if (p->a) { func_020e8558(p->a); p->a = 0; }
    if (p->b) { func_020e8558(p->b); p->b = 0; }
    if (p->c) { func_020e8558(p->c); p->c = 0; }
}
extern "C" void func_020684e4()
{
    volatile u16 *r = (volatile u16 *)0x400000c;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x600;
    *r = *r & ~0x40;
    func_02001750(0x1f);
    func_020016cc(0x1b);
}
extern "C" void func_02068490(Unk_02068490_Ptrs *p)
{
    u16 *q = p->b;
    DC_FlushRange(q + 1, 0x17e);
    GX_LoadBGPltt(q + 1, 2, 0x17e);
    DC_FlushRange(p->c, 0x2800);
    GX_LoadBG2Char(p->c, 0, 0x2800);
    DC_FlushRange(p->a, 0x800);
    GX_LoadBG2Scr(p->a, 0, 0x800);
}
extern "C" void func_02068478()
{
    func_020014f4(4);
    func_02001564(1);
}
extern "C" void func_02068460()
{
    func_020014e4(4);
    func_02001554(1);
}
}
void Unk_020682b8::func_02068454(s32 b) {
    using namespace n8; func_02068424(0, b); }
void Unk_020682b8::func_02068424(s32 a, s32 b)
{
    using namespace n8;
    unk_74 = a;
    unk_78 = b;
    func_02001804(a, b);
    s32 hi = 0xff - a;
    s32 lo = -a;
    if (lo < 0) lo = 0;
    if (hi > 0xff) hi = 0xff;
    func_02001674(lo, 0x3c, hi, 0xc0);
}
void Unk_020682b8::func_02068418() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 0); }
void Unk_020682b8::func_0206840c() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 1); }
void Unk_020682b8::func_02068400() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 2); }
void Unk_020682b8::func_020683f4() {
    using namespace n8; _ZN12Unk_020e0d4413func_020892b0Ei(&unk_0c, 3); }
void Unk_020682b8::func_020683d0()
{
    using namespace n8;
    _ZN12Unk_020e0d4413func_02089320Eii(&unk_0c, unk_74 + 0x55, unk_78 + 0x47);
    unk_0c.vfunc_0c();
}
void Unk_020682b8::func_020683bc() {
    using namespace n8; unk_0c.vfunc_08(); }
BOOL Unk_020682b8::func_0206839c()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 0) return TRUE;
    return FALSE;
}
BOOL Unk_020682b8::func_0206837c()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 1) return TRUE;
    return FALSE;
}
BOOL Unk_020682b8::func_0206834c()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 2 && _ZN12Unk_020e0d4413func_02089284Ev(&unk_0c)) return TRUE;
    return FALSE;
}
BOOL Unk_020682b8::func_0206831c()
{
    using namespace n8;
    if (unk_7c == 0 && _ZN12Unk_020e0d4413func_020892acEv(&unk_0c) == 3 && _ZN12Unk_020e0d4413func_02089284Ev(&unk_0c)) return TRUE;
    return FALSE;
}
void Unk_020682b8::func_02068304()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ee38Ej((u8 *)this + 0x50);
    unk_7c = -1;
}
void Unk_020682b8::func_020682f0()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ee30Ev((u8 *)this + 0x50);
    unk_7c = 4;
}
void Unk_020682b8::func_020682c4()
{
    using namespace n8;
    _ZN12Unk_020e10dc13func_0208ec50Eii((u8 *)this + 0x50, unk_74 + 0x59, unk_78 + 0x4b);
    _ZN12Unk_020e10dc13func_0208ec68Ev((u8 *)this + 0x50);
    if (unk_7c > 0) unk_7c--;
}
void Unk_020682b8::func_020682b8() {
    using namespace n8; _ZN12Unk_020e10dc13func_0208ec58Ev((u8 *)this + 0x50); }
namespace n8 {
extern "C" u8 func_020682a8(u32 x)
{
    if (x == 9) x = 2;
    return x + 1;
}
}
void Unk_020ddc24::func_020682a4(s32 v) {
    using namespace n8; unk_20 = v; }
void Unk_020ddc24::func_0206829c() {
    using namespace n8; unk_20 = 5; }
void Unk_020ddc24::func_02068298(s32 v) {
    using namespace n8; unk_14 = v; }
void Unk_020ddc24::func_02068290() {
    using namespace n8; unk_14 = 7; }
void Unk_020ddc24::func_02068268(s32 r)
{
    using namespace n8;
    if (unk_20 == 5 && unk_24 != 5 && unk_24 != r) {
        func_02003f7c(r);
        unk_24 = r;
    }
}
void Unk_020ddc24::func_02068244()
{
    using namespace n8;
    func_02068268(unk_04->unk_13b0->vfunc_6c());
}
Unk_020ddc24::Unk_020ddc24(Unk_02067c70 *o)
    : unk_04(o), unk_14(7), unk_18(0), unk_1c(0), unk_1d(0), unk_1e(0), unk_20(5), unk_24(5), unk_28(0)
{
    using namespace n8;
    func_020681c4(1);
}
Unk_020ddc24::~Unk_020ddc24() {
    using namespace n8;}
void Unk_020ddc24::func_020681c4(s32 flag)
{
    using namespace n8;
    s32 i = 0;
    u16 d = data_020ca488;
    for (; i < 2; i++) (&unk_08)[i] = d;
    if (flag != 0) unk_0c = d;
    unk_10 = 0;
}
void Unk_020ddc24::func_02068114()
{
    using namespace n8;
    u32 cur = data_020ca488;
    u32 nw = cur;
    s32 low;
    if (unk_10 < 2) low = 1; else low = 0;
    BOOL a, b;
    if (unk_08 == 0x2a) a = 1; else a = 0;
    if (unk_0a == 0x2a) b = 1; else b = 0;
    if (low != 0 || a != 0 || b != 0) {
        u8 buf;
        if (func_02050244(&buf)) {
            s32 v = func_020501d4(buf);
            if (v != cur) {
                if (v == 0x26 && unk_1e != 0) v = 0x27;
                nw = v;
            }
        }
    }
    if (nw != cur) {
        if (low == 0) {
            if (a != 0) {
                unk_08 = unk_0a;
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            } else if (b != 0) {
                unk_0a = cur;
                unk_10 = unk_10 - 1;
            }
        }
        s32 n = unk_10;
        if (n < 2) {
            unk_10 = n + 1;
            (&unk_08)[n] = nw;
        }
    }
}
void Unk_020ddc24::func_02068068()
{
    using namespace n8;
    func_02067f44();
    func_02067efc();
    if (unk_1c == 0 && unk_1d == 0) {
        s32 a = func_02067fbc();
        s32 b = func_02067f88();
        if (unk_10 >= 1) {
            if (unk_24 == 5) {
                if (a != 2) func_0200402c(0x2c);
            } else {
                func_02003fa4(a, b, unk_08, unk_0a);
            }
        }
        s32 flag = 0;
        if (unk_28 != 4) {
            s32 i = 0;
            u16 d = data_020ca488;
            for (; i < unk_10; i++) {
                u16 h = (&unk_08)[i];
                if (h != d && h != 0x2a && h != 0x2b && h != 0x29 && h != 0x26 && h != 0x28 && h != 0x27 && h != 0x25)
                    flag = 1;
            }
        }
        _ZN12Unk_020660f813func_02067724Ei(unk_04, flag);
    }
    if (unk_1e != 0) _ZN12Unk_020660f813func_02067708Ev(unk_04);
}
void Unk_020ddc24::func_02068064(s32 v) {
    using namespace n8; unk_18 = v; }
void Unk_020ddc24::func_02068018()
{
    using namespace n8;
    s32 r = 5;
    if (unk_20 != 5) {
        r = unk_20;
    } else if (func_02067fbc() == 0) {
        if (unk_18 == 3) r = 1;
        else r = unk_04->unk_13b0->vfunc_6c();
    }
    unk_24 = r;
    if (r != 5) func_02003fc8(r);
}
void Unk_020ddc24::func_02068000()
{
    using namespace n8;
    if (unk_24 != 5) func_02003f8c();
    unk_24 = 5;
}
u32 Unk_020ddc24::func_02067fbc()
{
    using namespace n8;
    u32 r = func_0203cb38();
    s32 a = unk_18;
    BOOL b = r == 0 ? TRUE : FALSE;
    if (unk_14 != 7) a = unk_14;
    if (a != 0 && a != 3 && b) r = 1;
    if (unk_28 == 4 && b) r = 1;
    return data_020cba0c[r];
}
u8 Unk_020ddc24::func_02067f88()
{
    using namespace n8;
    u32 i = 0;
    void *p = unk_04->unk_13b0->vfunc_68();
    if (p) {
        p = func_0207e310(p);
        if (p) i = func_0207856c(p);
    }
    return data_020cba14[i];
}
void Unk_020ddc24::func_02067f44()
{
    using namespace n8;
    s32 r = 5;
    if (unk_24 == 0) {
        if (unk_28 == 9) r = 4;
    } else if (unk_24 == 4) {
        if (unk_28 != 9) r = ((Unk_02067c70 *)unk_04)->unk_13b0->vfunc_6c();
    }
    if (r != 5) func_02068268(r);
}
void Unk_020ddc24::func_02067efc()
{
    using namespace n8;
    if (unk_10 == 0) {
        u16 c = data_020ca488;
        if (unk_0c != c) {
            unk_08 = unk_0c;
            unk_0c = c;
            unk_10++;
        }
    } else if (unk_10 == 1) {
        if (unk_0c != data_020ca488) {
            unk_0a = unk_08;
            unk_08 = unk_0c;
            unk_0c = unk_0a;
            unk_10++;
        }
    } else {
        unk_0c = unk_0a;
    }
}
Unk_02067c70::Unk_02067c70()
    : unk_00(0), unk_04(0), unk_08(6), unk_0c(0), unk_10(0), unk_14(4), unk_18(0),
      unk_588(0), unk_58c(this), unk_12c0(this, &unk_58c), unk_13a4(&unk_12c0),
      unk_13b0(0), unk_16dc(this), unk_1708(0), unk_1710(0), unk_1714(0), unk_1718(0),
      unk_19f4(0), unk_19f5(0), unk_19f6(0), unk_19f7(data_021edb60),
      unk_1a12(0), unk_1a13(0), unk_1a14(0), unk_1a15(0), unk_1a16(0), unk_1a17(0), unk_1a18(0), unk_1a19(0), unk_1a1a(0)
{
    using namespace n8;
    MI_CpuFill8(unk_19f8, 0, 0x1a);
}

// ======== unk_020671ec.cpp ========
#define data_020dddb8 ((u8 *)"20")
namespace n7 {
extern "C" { s32 _ZN12Unk_020ddccc13func_0206b140Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206b75413func_0206b4e4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddccc13func_0206b120Ev(void *p); }
extern "C" { s32 _ZN12Unk_02066ce013func_02066cfcEv(void *p); }
extern "C" { s32 func_0209cf0c(); }
extern "C" { s32 func_0209cfb8(void *p); }
extern "C" { s32 func_0209cf18(void *p); }
extern "C" { s32 func_0209cef4(); }
extern "C" { s32 func_0209cf00(); }
extern "C" { s32 func_0209ccd0(); }
extern "C" { s32 func_020e759c(void *p, s32 a, s32 b); }
extern "C" { s32 func_01ffcb0c(s32 a, s32 b); }
extern "C" { s32 _ZN12Unk_020682b813func_02068424Eii(void *p, s32 a, s32 b); }
extern "C" { s32 G2_GetBG2ScrPtr(); }
extern "C" { s32 _ZN12Unk_020668a013func_02066bf4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066c14Ev(void *p); }
extern "C" { s32 func_020b3270(void *p, s32 a, s32 b, s32 c, s32 d, s32 e); }
extern "C" { s32 func_020b3174(void *p, s32 a, s32 b); }
extern "C" { s32 func_020b313c(void *p, s32 a); }
extern "C" { s32 func_020b3158(void *p, s32 a); }
extern "C" { s32 _ZN12Unk_020e2a48C1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020e2a7813func_020a7c04EPh(void *p, void *q); }
extern "C" { s32 _ZN12Unk_020e2a7813func_020a7a0cEPS_(void *p, void *q); }
extern "C" { s32 _ZN12Unk_020ddc2413func_020681c4Ei(void *p, s32 a); }
extern "C" { s32 _ZN12Unk_020ddc2413func_02068114Ev(void *p, s32 a); }
extern "C" { s32 func_0203cba8(); }
extern "C" { s32 _ZN12Unk_0206880813func_020687b8Ev(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8cf8Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206880813func_020687ccEv(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8d50Ev(void *p); }
extern "C" { s32 func_021355a8(void *p, s32 a, s32 b, void *c); }
extern "C" { s32 _ZN12Unk_020682b813func_020682f0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_02068304Ev(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8de0EP12Unk_020aa3b8(void *p, void *q); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8d3cEv(void *p); }
extern "C" { s32 _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *p, void *q); }
extern "C" { s32 func_020b35f8(void *p, s32 a, s32 b); }
extern "C" { s32 func_0212a2ec(void *d, void *s, s32 n); }
extern "C" { s32 MI_CpuFill8(void *d, s32 v, s32 n); }
extern "C" { s32 func_020a706c(s32 a, s32 b, s32 c, s32 d); }
extern "C" { s32 func_020a6e8c(); }
extern "C" { s32 func_020a6f7c(); }
extern "C" { s32 func_020a6f54(); }
extern "C" { s32 func_020a6df8(); }
extern "C" { s32 func_020a6fa4(); }
extern "C" { s32 func_020a6e0c(); }
extern "C" { s32 func_020a6dec(); }
extern "C" { s32 func_020a70d4(); }
extern "C" { s32 func_020a6e18(); }
extern "C" { s32 func_020a6d94(); }
extern "C" { s32 func_020a6db4(); }
extern "C" { s32 _ZN12Unk_020e0608D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020e05c0D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020e1c64D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020dd38cD1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020e05f0D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020e3efcD1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddc24D1Ev(void *p); }
extern "C" { void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor); }
extern "C" { s32 _ZN12Unk_020e2a48D1Ev(void *p); }
extern "C" { s32 func_020a728c(void *p); }
extern "C" { s32 func_020a8538(void *p); }
extern "C" { s32 _ZN12Unk_020ddcccD1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddc4cD1Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206b754D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020aa3b8D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf8D1Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206880813func_020687e0Ev(void *p); }
extern "C" { extern u16 data_020cbadc; }
extern "C" { extern u16 data_020cbae0; }
extern "C" { extern u16 data_020cbae4; }
extern "C" { extern s16 data_02135f44[]; }
typedef void (Unk_020660f8::*Unk_020660f8_Fn)();
extern "C" { extern Unk_020660f8 *data_021ca140; }

}
Unk_020660f8::~Unk_020660f8() {
    using namespace n7;
    _ZN12Unk_020668a013func_02066bf4Ev(this);
    func_02067958();
    _ZN12Unk_020e0608D1Ev(unk_19d0);
    _ZN12Unk_020e05c0D1Ev(unk_19ac);
    _ZN12Unk_020e1c64D1Ev(unk_1990);
    _ZN12Unk_020e2a48D1Ev(unk_195c);
    _ZN12Unk_020e2a48D1Ev(unk_1928);
    _ZN12Unk_020e1c64D1Ev(unk_190c);
    _ZN12Unk_020e1c64D1Ev(unk_18f0);
    _ZN12Unk_020e1c64D1Ev(unk_18d4);
    _ZN12Unk_020e1c64D1Ev(unk_18b8);
    _ZN12Unk_020e1c64D1Ev(unk_189c);
    _ZN12Unk_020dd38cD1Ev(unk_1880);
    _ZN12Unk_020e05f0D1Ev(unk_1860);
    _ZN12Unk_020e3efcD1Ev(unk_1834);
    _ZN12Unk_020e3efcD1Ev(unk_1808);
    _ZN12Unk_020e3efcD1Ev(unk_17dc);
    _ZN12Unk_020e2a48D1Ev(unk_17a8);
    _ZN12Unk_020e3efcD1Ev(unk_177c);
    _ZN12Unk_020e2a48D1Ev(unk_1748);
    _ZN12Unk_020e3efcD1Ev(unk_171c);
    _ZN12Unk_020ddc24D1Ev(unk_16dc);
    __cxa_vec_cleanup(unk_15fc, 4, 0x34, (void *)_ZN12Unk_020e2a48D1Ev);
    __cxa_vec_cleanup(unk_13c0, 0xb, 0x34, (void *)_ZN12Unk_020e2a48D1Ev);
    func_020a728c(unk_13b4);
    func_020a8538(unk_13a4);
    _ZN12Unk_020ddcccD1Ev(unk_12c0);
    _ZN12Unk_020ddc4cD1Ev(unk_a1c);
    _ZN12Unk_0206b754D1Ev(unk_58c);
    _ZN12Unk_020aa3b8D1Ev(unk_314);
    _ZN12Unk_020a8cf8D1Ev(unk_b4);
    _ZN12Unk_0206880813func_020687e0Ev(unk_1c);
}
BOOL Unk_020660f8::func_02067abc(u8 *src, void *s) {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_19f7 == data_021edb60) {
        func_02067a84(src, s);
        r = TRUE;
    }
    return r;
}
void Unk_020660f8::func_02067a84(u8 *src, void *s) {
    using namespace n7;
    unk_19f7 = *src;
    if (s) {
        func_0212a2ec(unk_19f8, s, 0x19);
    } else {
        MI_CpuFill8(unk_19f8, 0, 0x1a);
    }
}
void Unk_020660f8::func_02067a78() {
    using namespace n7; unk_1a13 = 1; }
void Unk_020660f8::func_02067a6c() {
    using namespace n7; unk_1a13 = 0; }
void Unk_020660f8::func_02067a60() {
    using namespace n7; unk_1a12 = 1; }
void Unk_020660f8::func_02067a54() {
    using namespace n7; unk_1a12 = 0; }
s32 Unk_020660f8::func_02067a3c(s32 idx, void *p) {
    using namespace n7;
    return _ZN12Unk_020e2a7813func_020a7bd8EPS_(unk_13c0 + idx * 0x34, p);
}
void Unk_020660f8::func_02067a1c(s32 idx, s32 a, s32 b) {
    using namespace n7;
    func_020b35f8(unk_13c0 + idx * 0x34, a, b);
}
void Unk_020660f8::func_020679ec(s32 idx, void *p, u32 val) {
    using namespace n7;
    _ZN12Unk_020e2a7813func_020a7bd8EPS_(unk_15fc + idx * 0x34, p);
    unk_16cc[idx] = val;
}
void Unk_020660f8::func_020679c0(s32 v) {
    using namespace n7;
    if (v) {
        unk_18 = 1;
    } else {
        _ZN12Unk_020a8cf813func_020a8de0EP12Unk_020aa3b8(unk_b4, unk_314);
        _ZN12Unk_020a8cf813func_020a8d3cEv(unk_b4);
    }
}
void *Unk_020660f8::func_020679b4() {
    using namespace n7; return unk_314; }
u8 Unk_020660f8::func_020679a8() {
    using namespace n7; return unk_1a17; }
s32 Unk_020660f8::func_0206799c() {
    using namespace n7; return _ZN12Unk_020682b813func_02068304Ev(unk_1c); }
s32 Unk_020660f8::func_02067990() {
    using namespace n7; return _ZN12Unk_020682b813func_020682f0Ev(unk_1c); }
void Unk_020660f8::func_02067978(Unk_020ddcf0 *p) {
    using namespace n7;
    unk_13b0 = p;
    p->func_02065e90((u32)this);
}
void Unk_020660f8::func_02067958() {
    using namespace n7;
    if (unk_13b0) {
        unk_13b0->func_02065e88();
        unk_13b0 = 0;
    }
}
void Unk_020660f8::func_0206794c() {
    using namespace n7; unk_1a18 = 1; }
void Unk_020660f8::func_02067940() {
    using namespace n7; unk_1a19 = 1; }
void Unk_020660f8::func_02067934() {
    using namespace n7; unk_1a1a = 1; }
namespace n7 {
extern "C" Unk_020660f8 *func_02067918(s32 i) {
    Unk_020660f8 *r = 0;
    if (data_021ca140) r = data_021ca140 + i;
    return r;
}
extern "C" void func_020678d4() {
    data_021ca140 = new Unk_020660f8[2];
    for (s32 i = 0; i < 2; i++) data_021ca140[i].unk_00 = i;
}
extern "C" void func_020678a4() {
    if (data_021ca140) {
        delete[] data_021ca140;
        data_021ca140 = 0;
    }
}
extern "C" void func_02067874() {
    if (data_021ca140) {
        for (s32 i = 0; i < 2; i++) data_021ca140[i].func_0206777c();
    }
}
extern "C" void func_02067844() {
    if (data_021ca140) {
        for (s32 i = 0; i < 2; i++) data_021ca140[i].func_02067764();
    }
}
}
namespace n0 {
extern "C" { extern const u8 data_020cba14[0x5]; const u8 data_020cba14[0x5] = {0, 4, 1, 2, 3}; }
extern "C" { extern const u8 data_020cba0c[0x3]; const u8 data_020cba0c[0x3] = {0, 1, 2}; }
extern "C" { extern const u8 data_020cba24[0x7]; const u8 data_020cba24[0x7] = {3, 6, 7, 8, 9, 5, 10}; }
extern "C" { s16 data_020ddc10[6] = {-101, -48, -20, -10, 0, 0}; }
}
void Unk_020660f8::func_0206777c() {
    using namespace n7;
    static Unk_020660f8_Fn tbl[6] = {
        &Unk_020660f8::func_0206672c, &Unk_020660f8::func_02066568, &Unk_020660f8::func_02066400,
        &Unk_020660f8::func_02066310, &Unk_020660f8::func_0206621c, &Unk_020660f8::func_0206620c,
    };
    (this->*tbl[unk_04])();
    func_0206673c();
    func_020672a8();
    _ZN12Unk_0206880813func_020687ccEv(unk_1c);
    _ZN12Unk_020a8cf813func_020a8d50Ev(unk_b4);
    if (unk_04 != 0 && unk_04 != 5) func_02067480();
}
void Unk_020660f8::func_02067764() {
    using namespace n7;
    _ZN12Unk_0206880813func_020687b8Ev(unk_1c);
    _ZN12Unk_020a8cf813func_020a8cf8Ev(unk_b4);
}
namespace n7 {
extern "C" BOOL func_0206774c() {
    if (func_0203cba8() == 0) return TRUE;
    return FALSE;
}
}
s32 Unk_020660f8::func_0206773c(s32 a) {
    using namespace n7;
    return _ZN12Unk_020ddc2413func_02068114Ev(unk_16dc, a);
}
void Unk_020660f8::func_02067724(BOOL v) {
    using namespace n7;
    if (v) {
        unk_1a17 = 1;
    } else {
        unk_1a17 = 0;
    }
}
s32 Unk_020660f8::func_02067708() {
    using namespace n7;
    unk_1a17 = 0;
    return _ZN12Unk_020ddc2413func_020681c4Ei(unk_16dc, 1);
}
void *Unk_020660f8::func_020676b4() {
    using namespace n7;
    Unk_020676b4_Tmp t;
    func_020b3270(&t, unk_1708, 2, 6, 0, 0);
    _ZN12Unk_020e2a7813func_020a7c04EPh(unk_171c, data_020dddb8);
    _ZN12Unk_020e2a7813func_020a7a0cEPS_(unk_171c, &t);
    return unk_171c;
}
void *Unk_020660f8::func_02067690() {
    using namespace n7;
    func_020b3158(unk_1748, unk_170d);
    return unk_1748;
}
void *Unk_020660f8::func_0206766c() {
    using namespace n7;
    func_020b313c(unk_177c, unk_170c);
    return unk_177c;
}
void *Unk_020660f8::func_02067648() {
    using namespace n7;
    func_020b3174(unk_17a8, unk_1710, 0);
    return unk_17a8;
}
void *Unk_020660f8::func_0206760c() {
    using namespace n7;
    u32 t = unk_170f;
    if (t >= 12) t -= 12;
    if (t == 0) t = 12;
    func_020b3270(unk_17dc, t, 2, 0, 0, 0);
    return unk_17dc;
}
void *Unk_020660f8::func_020675d8() {
    using namespace n7;
    func_020b3270(unk_1808, unk_170e, 2, 6, 9, 0);
    return unk_1808;
}
void *Unk_020660f8::func_020675a8() {
    using namespace n7;
    func_020b3270(unk_1834, unk_1714, 2, 0, 0, 0);
    return unk_1834;
}
void Unk_020660f8::func_0206755c(s32 a, s32 b, s32 c, s32 d) {
    using namespace n7;
    unk_a0 = 0;
    unk_a4 = a;
    unk_a8 = b;
    unk_ac = c;
    unk_b0 = d;
    unk_a8 = unk_a8 * 3;
    unk_a8 = unk_a8 >> 1;
}
void Unk_020660f8::func_020674b8() {
    using namespace n7;
    s32 y;
    s32 x;
    u16 v;
    u16 c0;
    u16 c1;
    u16 * row;
    u16 c2;
    s32 mode;
    u16 * base;
    u16 * p;
    BOOL flag;
    if (unk_13b0->vfunc_68() == 0) {
        flag = TRUE;
    } else {
        flag = FALSE;
    }
    mode = unk_13b0->func_02065f04();
    base = (u16 *)G2_GetBG2ScrPtr();
    y = 13;
    c0 = data_020cbadc;
    c1 = data_020cbae0;
    c2 = data_020cbae4;
    for (; y <= 16; y++) {
        x = 3;
        row = base + y * 32;
        do {
            p = row + x;
            v = *p & 0xffff0fff;
            if (flag) {
                v |= c0;
            } else if (mode == 1) {
                v |= c1;
            } else {
                v |= c2;
            }
            *p = v;
        x++; } while (x <= 14);
    }
    _ZN12Unk_020668a013func_02066bf4Ev(this);
    _ZN12Unk_020668a013func_02066c14Ev(this);
}
void Unk_020660f8::func_0206749c() {
    using namespace n7;
    if (unk_1a18 == 0) func_020a6db4();
}
void Unk_020660f8::func_02067480() {
    using namespace n7;
    if (unk_1a18 == 0) func_020a6d94();
}
BOOL Unk_020660f8::func_02067438() {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_1a18 == 0) {
        if (func_020a6df8()) {
            if (func_020a6fa4()) {
                func_020a6e0c();
                r = TRUE;
            }
        } else if (func_020a6dec()) {
            if (func_020a70d4()) {
                func_020a6e18();
                r = TRUE;
            }
        }
    }
    return r;
}
BOOL Unk_020660f8::func_020673f0() {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_1a18 == 0) {
        if (func_02067438() == 0) {
            if (func_020a706c(8, 0xf8, 0x70, 0xc0)) {
                r = TRUE;
            } else if (func_020a6f7c() || func_020a6f54()) {
                r = TRUE;
            }
        }
    }
    return r;
}
BOOL Unk_020660f8::func_020673b0() {
    using namespace n7;
    BOOL r = FALSE;
    if (unk_1a18 == 0) {
        if (func_02067438() == 0) {
            if (func_020a706c(8, 0xf8, 0x70, 0xc0)) {
                r = TRUE;
            } else if (func_020a6e8c()) {
                r = TRUE;
            }
        }
    }
    return r;
}
void Unk_020660f8::func_020672a8() {
    using namespace n7;
    if (unk_a4 != 0) {
        BOOL c = TRUE;
        if (unk_04 != 3 && unk_04 != 2) c = FALSE;
        BOOL z = func_020e759c(&unk_a4, 0, unk_a8) != 0 ? TRUE : FALSE;
        if (c != 0 && z == 0) {
            unk_a0 = unk_a0 + 0x4000;
            s32 a = func_01ffcb0c(unk_a4, unk_ac);
            s32 b = func_01ffcb0c(unk_a4, unk_b0);
            s32 ang = unk_a0;
            a = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang + 0x2000)) >> 4) * 2 + 1], a);
            b = func_01ffcb0c(data_02135f44[(((u16)(s16)(ang * 2 - 0x4000)) >> 4) * 2], b);
            _ZN12Unk_020682b813func_02068424Eii(unk_1c, -(a >> 12), unk_9c + (b >> 12));
        } else {
            s32 zero = 0;
            unk_a0 = zero;
            unk_a4 = zero;
            unk_a8 = zero;
            unk_ac = zero;
            unk_b0 = zero;
            _ZN12Unk_020682b813func_02068424Eii(unk_1c, zero, unk_9c);
        }
    }
}
void Unk_020660f8::func_02067254() {
    using namespace n7;
    unk_1708 = func_0209cf0c();
    func_0209cfb8(&unk_170c);
    func_0209cf18(&unk_170e);
    unk_1710 = func_0209cef4();
    unk_1714 = func_0209cf00();
    unk_1718 = func_0209ccd0();
}
void Unk_020660f8::func_02067238() {
    using namespace n7;
    _ZN12Unk_020ddccc13func_0206b120Ev(unk_12c0);
    func_02066cfc();
}
void Unk_020660f8::func_02067214() {
    using namespace n7;
    func_02067a54();
    func_02067238();
    unk_13b0->vfunc_74();
}
void Unk_020660f8::func_020671ec() {
    using namespace n7;
    _ZN12Unk_020ddccc13func_0206b140Ev(unk_12c0);
    _ZN12Unk_0206b75413func_0206b4e4Ev(unk_58c);
    func_02067214();
}
#undef data_020dddb8

// ======== unk_02067188.cpp ========
namespace n6 {
extern "C" { s32 _ZN12Unk_020668a013func_02066f7cEv(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066f08Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_020670e4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02067098Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02067060Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02067020Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066fd4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066e90Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066e40Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066df4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066da0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066d4cEv(void *p); }

}
void Unk_020660f8::func_02067188() {
    using namespace n6;
    ((Unk_020ddccc *)unk_12c0)->func_0206b110();
    _ZN12Unk_020668a013func_02066f7cEv(this);
    _ZN12Unk_020668a013func_02066f08Ev(this);
    _ZN12Unk_020668a013func_020670e4Ev(this);
    _ZN12Unk_020668a013func_02067098Ev(this);
    _ZN12Unk_020668a013func_02067060Ev(this);
    _ZN12Unk_020668a013func_02067020Ev(this);
    _ZN12Unk_020668a013func_02066fd4Ev(this);
    _ZN12Unk_020668a013func_02066e90Ev(this);
    _ZN12Unk_020668a013func_02066e40Ev(this);
    _ZN12Unk_020668a013func_02066df4Ev(this);
    _ZN12Unk_020668a013func_02066da0Ev(this);
    _ZN12Unk_020668a013func_02066d4cEv(this);
    func_020671ec();
}

// ======== unk_020668a0.cpp ========
#define AT(T, off) (*(T *)((u8 *)this + (off)))
#define PTR(off) ((void *)((u8 *)this + (off)))
#define OWNER unk_13b0
#define M ((Unk_020e2a18 *)unk_a1c)
#define data_020ddd7c ((char *)"%s/%s/%s/%s_.bmg")
#define data_020ddd90 ((char *)"%s/%s/Other/%s_.bmg")
#define data_020ddda4 ((char *)"%s/Other/%s_.bmg")
namespace n5 {
extern "C" { extern const char *data_020cba74[]; }
extern "C" { extern const char *data_020cba50[]; }
extern "C" { extern char data_021ca258[]; }
extern "C" { extern s8 data_020cba2c[]; }
extern "C" { extern u16 data_020cba10[]; }
extern "C" { extern u8 data_021d7350[]; }
extern "C" { s32 strncmp(const char *a, const char *b, u32 n); }
extern "C" { u32 func_0212a438(const char *s); }
extern "C" { char *func_020639e8(char *buf, const char *fmt, ...); }
extern "C" { void func_020638d0(void *dst, void *src); }
extern "C" { void func_0200402c(void); }
extern "C" { void _ZN12Unk_0206c74c13func_0206c700Ev(void *p); }
extern "C" { void func_020a7264(void *dst, void *src); }
extern "C" { void *func_020a8548(void *p); }
extern "C" { s32 func_020a71f0(void *p); }
extern "C" { s32 func_020a7208(void *p); }
extern "C" { void func_020a7238(u8 *out, void *p); }
extern "C" { s32 func_020a7240(void *p); }
extern "C" { u32 func_020a7244(void *p); }
extern "C" { u32 func_020a7248(void *p); }
extern "C" { u32 func_020a724c(void *p); }
extern "C" { void _ZN12Unk_020a84e013func_020a8520Ev(void *p); }
extern "C" { void _ZN12Unk_020a84e013func_020a84e0EPh(void *p, u32 v); }
extern "C" { void *_ZN12Unk_020aa3b813func_020aa4d8Ev(void *p); }
extern "C" { Unk_02066978_Owner *_ZN12Unk_020aa3b813func_020aa4e4Ev(void *p); }
extern "C" { void _ZN12Unk_020e2a4813func_020a7188Ev(void *p); }
extern "C" { void _ZN12Unk_020e2a7813func_020a7c3cEv(void *p); }
extern "C" { void func_020a7fd8(void *p); }
extern "C" { void _ZN12Unk_0206b75413func_0206b590Eh(void *p, u32 v); }
extern "C" { void _ZN12Unk_020ddccc13func_0206b13cEi(void *p, s32 v); }
extern "C" { void _ZN12Unk_020660f813func_02067a84EPhPv(void *self, u8 *p, s32 z); }
extern "C" { s32 _ZN12Unk_020660f813func_02067a6cEv(void *self); }
extern "C" { s32 _ZN12Unk_020660f813func_02067188Ev(void *self); }
extern "C" { void *func_0209750c(void); }
extern "C" { s32 _ZN12Unk_0209865c13func_0209888cEv(void *p); }
extern "C" { s32 func_0207f88c(void *a, s32 b); }
extern "C" { void *func_0207f86c(void *a, s32 b); }
extern "C" { void _ZN12Unk_0208091c13func_02080da4Ei(void *a, s32 b); }
extern "C" { void *_ZN12Unk_0208091c13func_02080dd8Ev(void *a); }
extern "C" { void func_0207787c(void *a, s32 b, void *c); }
extern "C" { s32 _ZN12Unk_02097ff413func_0209836cEPv(void *g, void *p); }
extern "C" { void func_0207df18(void *a, void *b); }
extern "C" { void func_0207df64(void *a, void *b); }
extern "C" { void func_0207dfa0(void *a, void *b); }
extern "C" { void func_0207d0a8(void *a, void *b, s32 c); }
extern "C" { s32 func_0207e224(void *a, void *b); }
extern "C" { s32 _ZN12Unk_0207e94013func_0207f1ccEPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN12Unk_0207e94013func_0207f230EPvS0_(void *a, void *b, s32 c); }
extern "C" { void func_0207f38c(void *a, void *b, s32 c); }
extern "C" { void _ZN12Unk_0207fb8013func_0207fba8EPvS0_(void *a, void *b, s32 c); }
extern "C" { void _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(s32 a, void *b); }
extern "C" { Unk_02066978_Owner *_ZN12Unk_020ddcf013func_02065f10Ev(void *p); }
extern "C" { Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c); }

}
void Unk_020668a0::func_02067170() {
    using namespace n5;
    _ZN12Unk_020660f813func_02067188Ev(this);
    unk_1a19 = 0;
}
void Unk_020668a0::func_02067150() {
    using namespace n5;
    func_02067170();
    func_0206712c();
    func_020670f4();
    _ZN12Unk_020660f813func_02067a6cEv(this);
}
void Unk_020668a0::func_0206712c() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 11; i++) {
        _ZN12Unk_020e2a4813func_020a7188Ev(unk_13c0[i]);
    }
}
void Unk_020668a0::func_020670f4() {
    using namespace n5;
    s32 i;
    for (i = 0; i < 4; i++) {
        _ZN12Unk_020e2a4813func_020a7188Ev(unk_15fc[i]);
        unk_16cc[i] = 7;
    }
}
void Unk_020668a0::func_020670e4() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1860); }
BOOL Unk_020668a0::func_020670a8() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1860);
    if (r6 != 0) {
        _ZN12Unk_0207fb8013func_0207fba8EPvS0_(r6, unk_1860, 1);
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02067098() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1880); }
BOOL Unk_020668a0::func_02067070() {
    using namespace n5;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1880);
    func_020638d0((u8 *)((u32)data_021d7350 + 2), unk_1880);
    return TRUE;
}
void Unk_020668a0::func_02067060() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_189c); }
BOOL Unk_020668a0::func_02067030() {
    using namespace n5;
    void *r4 = func_0209750c();
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_189c);
    _ZN12Unk_020940a013func_020940d0EP12Unk_020e2a78(_ZN12Unk_0209865c13func_0209888cEv(r4), unk_189c);
    return TRUE;
}
void Unk_020668a0::func_02067020() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18b8); }
BOOL Unk_020668a0::func_02066fe4() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18b8);
    if (r6 != 0) {
        func_0207dfa0(r6, unk_18b8);
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02066fd4() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18d4); }
BOOL Unk_020668a0::func_02066f98() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18d4);
    if (r6 != 0) {
        func_0207df64(r6, unk_18d4);
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02066f7c() {
    using namespace n5;
    unk_19f4 = 0;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18f0);
}
BOOL Unk_020668a0::func_02066f2c() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (unk_19f4 == 0) {
        void *r6 = OWNER->vfunc_68();
        _ZN12Unk_020e2a7813func_020a7c3cEv(unk_18f0);
        if (r6 != 0) {
            func_0207df18(r6, unk_18f0);
        } else {
            r4 = FALSE;
        }
        unk_19f4 = 1;
    }
    return r4;
}
void Unk_020668a0::func_02066f08() {
    using namespace n5;
    unk_19f5 = 0;
    unk_19f6 = 0;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_190c);
}
BOOL Unk_020668a0::func_02066ea0() {
    using namespace n5;
    BOOL r4 = TRUE;
    if (unk_19f5 == 0) {
        void *g = func_0209750c();
        _ZN12Unk_020e2a7813func_020a7c3cEv(unk_190c);
        if (_ZN12Unk_02097ff413func_0209836cEPv(g, unk_190c) == 0) {
            void *r0 = OWNER->vfunc_68();
            if (r0 != 0) {
                func_0207df18(r0, unk_190c);
                unk_19f6 = r4;
            } else {
                r4 = FALSE;
            }
        }
        unk_19f5 = 1;
    }
    return r4;
}
void Unk_020668a0::func_02066e90() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1928); }
BOOL Unk_020668a0::func_02066e50() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1928);
    if (r6 != 0) {
        if (func_0207e224(r6, unk_1928) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void Unk_020668a0::func_02066e40() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_195c); }
BOOL Unk_020668a0::func_02066e04() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_195c);
    if (r6 != 0) {
        func_0207d0a8(r6, unk_195c, 0);
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02066df4() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1990); }
BOOL Unk_020668a0::func_02066db0() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_1990);
    if (r6 != 0) {
        void *g = func_0209750c();
        func_0207f38c(r6, unk_1990, _ZN12Unk_0209865c13func_0209888cEv(g));
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02066da0() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_19ac); }
BOOL Unk_020668a0::func_02066d5c() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_19ac);
    if (r6 != 0) {
        void *g = func_0209750c();
        _ZN12Unk_0207e94013func_0207f230EPvS0_(r6, unk_19ac, _ZN12Unk_0209865c13func_0209888cEv(g));
        r4 = TRUE;
    }
    return r4;
}
void Unk_020668a0::func_02066d4c() {
    using namespace n5; _ZN12Unk_020e2a7813func_020a7c3cEv(unk_19d0); }
BOOL Unk_020668a0::func_02066d04() {
    using namespace n5;
    void *r6 = OWNER->vfunc_68();
    BOOL r4 = FALSE;
    _ZN12Unk_020e2a7813func_020a7c3cEv(unk_19d0);
    if (r6 != 0) {
        void *g = func_0209750c();
        if (_ZN12Unk_0207e94013func_0207f1ccEPvS0_(r6, unk_19d0, _ZN12Unk_0209865c13func_0209888cEv(g)) != 0) {
            r4 = TRUE;
        }
    }
    return r4;
}
void Unk_02066ce0::func_02066cfc() {
    using namespace n5;
    unk_10 = 0;
}
void Unk_02066ce0::func_02066cf8(s32 v) {
    using namespace n5;
    unk_10 = v;
}
BOOL Unk_02066ce0::func_02066ce0() {
    using namespace n5;
    BOOL r = FALSE;
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 == 0) {
            r = TRUE;
        }
    }
    return r;
}
void Unk_020668a0::func_02066c7c(s32 idx) {
    using namespace n5;
    if (idx != 0) {
        void *r4 = OWNER->vfunc_68();
        void *g = func_0209750c();
        if (r4 != 0) {
            s32 r7 = func_0207f88c(r4, _ZN12Unk_0209865c13func_0209888cEv(g));
            void *r6 = func_0207f86c(r4, r7);
            if (r6 != 0) {
                _ZN12Unk_0208091c13func_02080da4Ei(r6, data_020cba2c[idx]);
                func_0207787c(r4, r7, _ZN12Unk_0208091c13func_02080dd8Ev(r6));
            }
        }
    }
}
void Unk_020668a0::func_02066c14() {
    using namespace n5;
    unk_588 = func_020a8054(0x89, 8, 2);
    if (unk_588 != 0) {
        unk_588->unk_50 = 2;
        unk_588->unk_39 = 0xe;
        Unk_02066978_Owner *o = _ZN12Unk_020ddcf013func_02065f10Ev(unk_13b0);
        Unk_02050288 *t = unk_588;
        t->unk_10 = o->vfunc_0c();
        unk_588->func_02050c44();
        unk_588->unk_38 = 2;
        unk_588->func_02050c90();
    }
}
void Unk_020668a0::func_02066bf4() {
    using namespace n5;
    if (unk_588 != 0) {
        func_020a7fd8(unk_588);
        unk_588 = 0;
    }
}
void Unk_020668a0::func_02066bbc() {
    using namespace n5;
    if (unk_1a14 != 0) {
        OWNER->vfunc_10(func_020a7248(unk_13b4));
        unk_1a14 = 0;
    }
}
void Unk_020668a0::func_02066b74() {
    using namespace n5;
    if (unk_1a15 != 0) {
        func_02066c7c(func_020a724c(unk_13b4));
        OWNER->vfunc_14(func_020a7244(unk_13b4));
        unk_1a15 = 0;
    }
}
void Unk_020668a0::func_02066b38() {
    using namespace n5;
    if (unk_1a16 != 0) {
        OWNER->vfunc_18(func_020a7244(_ZN12Unk_020aa3b813func_020aa4d8Ev(unk_314)));
        unk_1a16 = 0;
    }
}
void Unk_020668a0::func_02066b0c() {
    using namespace n5;
    s32 r0 = func_020a7240(unk_13b4);
    if (r0 < 2) {
        if (data_020cba10[r0] != 0) {
            func_0200402c();
        }
    }
}
void Unk_020668a0::func_02066a50() {
    using namespace n5;
    u8 loc;
    unk_1a15 = 1;
    unk_1a14 = 1;
    unk_1a16 = 0;
    _ZN12Unk_0206b75413func_0206b590Eh(unk_58c, func_020a71f0(unk_13b4) == 1 ? 1 : 0);
    s32 r4 = func_020a7208(unk_13b4);
    _ZN12Unk_020ddccc13func_0206b13cEi(unk_12c0, r4);
    unk_16f8 = r4 == 1 ? 1 : 0;
    func_020a7238(&loc, unk_13b4);
    _ZN12Unk_020660f813func_02067a84EPhPv(this, &loc, 0);
    func_02066bbc();
    func_02066b0c();
    _ZN12Unk_020a84e013func_020a8520Ev(unk_13a4);
    _ZN12Unk_020a84e013func_020a84e0EPh(unk_13a4, M->vfunc_08());
}
void Unk_020668a0::func_02066a14() {
    using namespace n5;
    Unk_02066978_Owner *o = _ZN12Unk_020aa3b813func_020aa4e4Ev(unk_314);
    Unk_0206891c loc(this);
    loc.func_020688ac(o->vfunc_0c());
}
char *Unk_020668a0::func_02066978(const char *a, const char *b) {
    using namespace n5;
    u32 r6 = (u32)b;
    if (r6 == 0) {
        r6 = OWNER->vfunc_0c();
    }
    const char *r5 = a ? a : (const char *)unk_13b0 + 4;
    const char *r7 = func_0206693c(r5);
    if (r7 != 0) {
        r5 += func_0212a438(r7) + 1;
        const char *r4 = func_02066900(r5);
        if (r4 != 0) {
            const char *e = r5 + (func_0212a438(r4) + 1);
            func_020639e8(data_021ca258, data_020ddd7c, r6, r7, r4, e);
        } else {
            func_020639e8(data_021ca258, data_020ddd90, r6, r7, r5);
        }
    } else {
        func_020639e8(data_021ca258, data_020ddda4, r6, r5);
    }
    return data_021ca258;
}
const char *Unk_020668a0::func_0206693c(const char *s) {
    using namespace n5;
    const char **p;
    const char *e;
    for (p = data_020cba50; (e = *p) != 0; p++) {
        u32 n = func_0212a438(e);
        if (strncmp(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}
const char *Unk_020668a0::func_02066900(const char *s) {
    using namespace n5;
    const char **p;
    const char *e;
    for (p = data_020cba74; (e = *p) != 0; p++) {
        u32 n = func_0212a438(e);
        if (strncmp(s, e, n) == 0 && s[n] == '_') {
            break;
        }
    }
    return e;
}
void Unk_020668a0::func_020668a0() {
    using namespace n5;
    _ZN12Unk_0206c74c13func_0206c700Ev(unk_a1c);
    if (M->func_020a8a20(func_02066978(0, 0))) {
        M->func_020a8950((u8 *)unk_13b0 + 0x1e);
    }
    func_020a7264(unk_13b4, func_020a8548(unk_a1c));
    M->func_020a89f0();
}
#undef AT
#undef PTR
#undef OWNER
#undef M
#undef data_020ddd7c
#undef data_020ddd90
#undef data_020ddda4

// ======== unk_0206684c.cpp ========
#define unk_19f8 (*(s8 *)unk_19f8)
namespace n4 {
extern "C" { s32 _ZN12Unk_020660f813func_02067a84EPhPv(void *p, u8 *a, void *b); }
extern "C" { s32 _ZN12Unk_020668a013func_020668a0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066a50Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067254Ev(void *p); }

}
void Unk_020660f8::func_0206684c() {
    using namespace n4;
    unk_13b0->unk_1e = unk_19f7;
    if (unk_19f8 != 0) {
        unk_13b0->func_020a710c((const char *)&unk_19f8);
    }
    _ZN12Unk_020660f813func_02067a84EPhPv(this, &data_021edb60, 0);
    _ZN12Unk_020668a013func_020668a0Ev(this);
    _ZN12Unk_020668a013func_02066a50Ev(this);
    _ZN12Unk_020660f813func_02067254Ev(this);
}
#undef unk_19f8

// ======== unk_02065f50.cpp ========
namespace n3 {
extern "C" { s32 _ZN12Unk_020660f813func_020679c0Ei(void *p, s32 a); }
extern "C" { s32 _ZN12Unk_020660f813func_0206684cEv(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02067150Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02067170Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067188Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_020671ecEv(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067214Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067238Ev(void *p); }
extern "C" { s32 func_02068460(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_02068454Ei(void *p, s32 a); }
extern "C" { s32 _ZN12Unk_020682b813func_02068418Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066bf4Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206b75413func_0206b518Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddc2413func_02068000Ev(void *p); }
extern "C" { s32 _ZN12Unk_0203575813func_02035bccEv(void *p); }
extern "C" { s32 _ZN12Unk_0203575813func_02035bd4Ev(void *p); }
extern "C" { void func_0200402c(s32 a); }
extern "C" { s32 _ZN12Unk_020660f813func_020673b0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddccc13func_0206b128Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddc2413func_020681c4Ei(void *p, s32 a); }
extern "C" { s32 _ZN12Unk_020a84e013func_020a84f0Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206b75413func_0206b458Ev(void *p); }
extern "C" { s32 _ZN12Unk_020ddc2413func_02068068Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066b74Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067708Ev(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8d10Ev(void *p); }
extern "C" { s32 _ZN12Unk_020a8cf813func_020a8d2cEv(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_0206839cEv(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_0206840cEv(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_0206837cEv(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_020673f0Ev(void *p); }
extern "C" { s32 _ZN12Unk_02066ce013func_02066ce0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_02068400Ev(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_0206834cEv(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_020683f4Ev(void *p); }
extern "C" { s32 _ZN12Unk_020682b813func_0206831cEv(void *p); }
extern "C" { s32 _ZN12Unk_020ddc2413func_02068018Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_0206749cEv(void *p); }
extern "C" { s32 func_020a7220(void *p); }
extern "C" { s32 _ZN12Unk_0206880813func_02068558Eijih(void *p, s32 a, u32 b, u32 c, s32 d); }
extern "C" { s32 _ZN12Unk_020ddc2413func_02068064Ei(void *p, s32 a); }
extern "C" { s32 func_020684e4(void *p); }
extern "C" { s32 func_02068490(void *p); }
extern "C" { s32 func_02068478(void *p); }
extern "C" { s32 func_02068524(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066c14Ev(void *p); }
extern "C" { s32 _ZN12Unk_0206b75413func_0206b548Ev(void *p); }
extern "C" { s32 func_02038fd4(u32 a); }
extern "C" { s32 _ZN12Unk_020aa3b813func_020aa4fcEv(void *p); }
extern "C" { s32 _ZN12Unk_020aa3b813func_020aa4f0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067a84EPhPv(void *p, s32 a, s32 b); }
extern "C" { s32 _ZN12Unk_020660f813func_02067a60Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066a14Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066b38Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_020668a0Ev(void *p); }
extern "C" { s32 _ZN12Unk_020668a013func_02066a50Ev(void *p); }
extern "C" { s32 _ZN12Unk_020660f813func_02067254Ev(void *p); }
extern "C" { extern u8 data_021edb5c; }
extern "C" { extern s16 data_020ddc10[]; }
extern "C" { extern s16 data_020ddc04[]; }
extern "C" { extern u8 *data_021c1b3c; }
extern "C" { extern Unk_020cbb18_Obj *data_020cbb18; }
typedef void (Unk_020660f8::*Unk_020660f8_Fn)();

}
void Unk_020660f8::func_02066830() {
    using namespace n3;
    _ZN12Unk_020668a013func_020668a0Ev(this);
    _ZN12Unk_020668a013func_02066a50Ev(this);
    _ZN12Unk_020660f813func_02067254Ev(this);
}
void Unk_020660f8::func_020667e4() {
    using namespace n3;
    s32 a = _ZN12Unk_020aa3b813func_020aa4fcEv(unk_314);
    s32 b = _ZN12Unk_020aa3b813func_020aa4f0Ev(unk_314);
    _ZN12Unk_020660f813func_02067a84EPhPv(this, a, b);
    _ZN12Unk_020660f813func_02067a60Ev(this);
    unk_1a16 = 1;
    _ZN12Unk_020668a013func_02066a14Ev(this);
    _ZN12Unk_020668a013func_02066b38Ev(this);
}
namespace n0 {
extern "C" { extern const s8 data_020cba2c[0x21]; const s8 data_020cba2c[0x21] = {0, 40, 35, 30, 25, 20, 15, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -15, -20, -25, -30, -35, -40}; }
extern "C" { char data_021ca258[0x40]; }
extern "C" { extern const char *const data_020cba50[9]; const char *const data_020cba50[9] = {"fu", "bo", "ha", "ta", "ko", "ge", "sp", "obj", 0}; }
extern "C" { extern const char *const data_020cba74[26]; const char *const data_020cba74[26] = {"ai", "tsu", "ap", "3p", "etc", "ev", "npc", "q", "q01", "q02", "q03", "q04", "q05", "q06", "q07", "q08", "q09", "q10", "q11", "q12", "q13", "q14", "q15", "q16", "q17", 0}; }
}
void Unk_020660f8::func_0206673c() {
    using namespace n3;
    static Unk_020660f8_Fn tbl[6] = {
        &Unk_020660f8::func_02066730, &Unk_020660f8::func_020665c8, &Unk_020660f8::func_0206655c,
        &Unk_020660f8::func_020663ec, &Unk_020660f8::func_02066290, &Unk_020660f8::func_02066210,
    };
    if (unk_08 != 6) {
        unk_04 = unk_08;
        (this->*tbl[unk_08])();
        unk_08 = 6;
    }
}
namespace n0 {
extern "C" { s16 data_020ddc04[6] = {0, -7, -14, -25, -50, -101}; }
extern "C" { extern const u16 data_020cba10[2]; const u16 data_020cba10[2] = {0x0, 0x27}; }
}
void Unk_020660f8::func_02066730() {
    using namespace n3; func_02068460(unk_1c); }
void Unk_020660f8::func_0206672c() {
    using namespace n3;}
void Unk_020660f8::func_020665c8() {
    using namespace n3;
    _ZN12Unk_020660f813func_0206749cEv(this);
    BOOL c = unk_14 != 4 ? TRUE : FALSE;
    if (c) _ZN12Unk_020660f813func_0206684cEv(this);
    else func_02066830();
    s32 r6 = func_020a7220(unk_13b4);
    Unk_020ddcf0 *o = unk_13b0;
    u8 *p = o->func_02065f10()->vfunc_0c();
    u32 v8 = unk_13b0->func_02065f04();
    BOOL r7 = unk_13b0->vfunc_68() == 0 ? TRUE : FALSE;
    u32 r2 = unk_13b0->func_02065f08();
    if (r2 == 0 && r6 == 0 && *(s8 *)p == 0) r6 = 5;
    _ZN12Unk_0206880813func_02068558Eijih(unk_1c, r6, r2, v8, r7);
    _ZN12Unk_020ddc2413func_02068064Ei(unk_16dc, r6);
    func_020684e4(unk_1c);
    func_02068490(unk_1c);
    func_02068478(unk_1c);
    func_02068524(unk_1c);
    unk_0c = 5;
    unk_9c = data_020ddc04[unk_0c];
    _ZN12Unk_020682b813func_02068454Ei(unk_1c, unk_9c);
    _ZN12Unk_020682b813func_02068418Ev(unk_1c);
    _ZN12Unk_020668a013func_02066c14Ev(this);
    _ZN12Unk_0206b75413func_0206b548Ev(unk_58c);
    if (data_020cbb18) func_02038fd4(data_020cbb18->unk_64);
    if (unk_1a19 == 0) func_0200402c(9);
    if (unk_1a18 == 0) {
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) _ZN12Unk_0203575813func_02035bd4Ev(data_021c1b3c + 0x1c4);
    }
    if (c) unk_14 = 4;
}
void Unk_020660f8::func_02066568() {
    using namespace n3;
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = data_020ddc04[unk_0c];
    _ZN12Unk_020682b813func_02068454Ei(unk_1c, unk_9c);
    if (done) {
        if (unk_1a18 == 0) _ZN12Unk_020ddc2413func_02068018Ev(unk_16dc);
        unk_08 = 3;
    }
}
void Unk_020660f8::func_0206655c() {
    using namespace n3; _ZN12Unk_020682b813func_02068418Ev(unk_1c); }
void Unk_020660f8::func_02066400() {
    using namespace n3;
    _ZN12Unk_020a84e013func_020a84f0Ev(unk_13a4);
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 3 ? TRUE : FALSE;
    BOOL c = st == 4 ? TRUE : FALSE;
    BOOL d = st == 5 ? TRUE : FALSE;
    if (_ZN12Unk_020a8cf813func_020a8d10Ev(unk_b4) != 0) func_020667e4();
    if (a || b || c) {
        if (unk_1a13 == 0 && _ZN12Unk_020a8cf813func_020a8d2cEv(unk_b4) != 0) {
            if (unk_1a12 != 0) {
                func_020660f8();
            } else if (_ZN12Unk_020682b813func_0206839cEv(unk_1c) != 0) {
                _ZN12Unk_020682b813func_0206840cEv(unk_1c);
            } else if (_ZN12Unk_020682b813func_0206837cEv(unk_1c) != 0) {
                if (_ZN12Unk_020660f813func_020673f0Ev(this) != 0 || _ZN12Unk_02066ce013func_02066ce0Ev(this) != 0) {
                    _ZN12Unk_020682b813func_02068400Ev(unk_1c);
                    if (unk_1a1a == 0) func_0200402c(0x10);
                    if (unk_18 != 0 || unk_1398 != 0) func_0200402c(0x13);
                }
            } else if (_ZN12Unk_020682b813func_0206834cEv(unk_1c) != 0) {
                _ZN12Unk_020682b813func_020683f4Ev(unk_1c);
            } else if (_ZN12Unk_020682b813func_0206831cEv(unk_1c) != 0) {
                func_020660f8();
            }
        } else {
            if (_ZN12Unk_020682b813func_0206839cEv(unk_1c) == 0) _ZN12Unk_020682b813func_02068418Ev(unk_1c);
        }
    } else if (d) {
        if (_ZN12Unk_020a8cf813func_020a8d2cEv(unk_b4) != 0) func_020660f8();
    }
}
void Unk_020660f8::func_020663ec() {
    using namespace n3;
    _ZN12Unk_020682b813func_02068418Ev(unk_1c);
    unk_0c = 1;
}
void Unk_020660f8::func_02066310() {
    using namespace n3;
    if (_ZN12Unk_020660f813func_020673b0Ev(this) != 0) _ZN12Unk_020ddccc13func_0206b128Ev(unk_12c0);
    _ZN12Unk_020ddc2413func_020681c4Ei(unk_16dc, 0);
    _ZN12Unk_020a84e013func_020a84f0Ev(unk_13a4);
    _ZN12Unk_0206b75413func_0206b458Ev(unk_58c);
    if (unk_1a18 == 0) _ZN12Unk_020ddc2413func_02068068Ev(unk_16dc);
    s32 st = unk_12f0;
    BOOL b3 = st == 3 ? TRUE : FALSE;
    BOOL b2 = st == 2 ? TRUE : FALSE;
    BOOL b4 = st == 4 ? TRUE : FALSE;
    BOOL b5 = st == 5 ? TRUE : FALSE;
    BOOL b0 = st == 0 ? TRUE : FALSE;
    BOOL z = unk_0c == 0 ? TRUE : FALSE;
    BOOL go = TRUE;
    if (!z && !b2 && !b4 && !b5 && !b0) go = FALSE;
    if (b3) unk_0c = 0;
    if (go) {
        if (z) _ZN12Unk_020668a013func_02066b74Ev(this);
        unk_08 = 2;
        _ZN12Unk_020660f813func_02067708Ev(this);
    }
}
void Unk_020660f8::func_02066290() {
    using namespace n3;
    _ZN12Unk_020682b813func_02068418Ev(unk_1c);
    unk_0c = 4;
    unk_9c = data_020ddc10[unk_0c];
    if (unk_1a18 == 0) {
        _ZN12Unk_020ddc2413func_02068000Ev(unk_16dc);
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) _ZN12Unk_0203575813func_02035bccEv(data_021c1b3c + 0x1c4);
    }
    if (unk_1a1a == 0) func_0200402c(10);
    unk_13b0->vfunc_70();
}
void Unk_020660f8::func_0206621c() {
    using namespace n3;
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = data_020ddc10[unk_0c];
    _ZN12Unk_020682b813func_02068454Ei(unk_1c, unk_9c);
    if (done) {
        _ZN12Unk_020668a013func_02066bf4Ev(this);
        _ZN12Unk_0206b75413func_0206b518Ev(unk_58c);
        if (unk_14 != 4) {
            unk_08 = 5;
        } else {
            unk_1a18 = 0;
            unk_1a1a = 0;
            unk_08 = 0;
        }
    }
}
void Unk_020660f8::func_02066210() {
    using namespace n3; func_02068460(unk_1c); }
void Unk_020660f8::func_0206620c() {
    using namespace n3;}
// ---- state class ----
void Unk_020660f8::func_020660f8() {
    using namespace n3;
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 4 ? TRUE : FALSE;
    BOOL c = st == 5 ? TRUE : FALSE;
    s32 r7 = 6;
    s32 r6 = r7;
    s32 flag = 0;
    s32 act = 0;
    Unk_020660f8_Pad pad;
    if (unk_18 != 0) {
        unk_18 = 0;
        _ZN12Unk_020660f813func_020679c0Ei(this, 0);
    } else if (a || b || c) {
        r7 = 1;
        r6 = 3;
        if (c) act = r7;
        else if (b) act = 2;
        else act = r6;
    } else {
        u32 x = data_021edb60;
        u32 y = unk_19f7;
        if (y == data_021edb5c) {
            r7 = 0;
            r6 = 4;
            act = 6;
        } else if (unk_14 != 4) {
            r7 = 0;
            r6 = 4;
            act = 5;
        } else if (y != x) {
            flag = 1;
            act = 4;
        }
    }
    if (flag != 0) {
        _ZN12Unk_020660f813func_0206684cEv(this);
        r7 = 1;
        r6 = 3;
    }
    if (r7 != 6) unk_12f0 = r7;
    if (r6 != 6) {
        unk_08 = r6;
        if (act == 1) _ZN12Unk_020660f813func_02067238Ev(this);
        else if (act == 2) _ZN12Unk_020660f813func_02067214Ev(this);
        else if (act == 3) _ZN12Unk_020660f813func_020671ecEv(this);
        else if (act == 4) _ZN12Unk_020660f813func_02067188Ev(this);
        else if (act == 5) _ZN12Unk_020668a013func_02067170Ev(this);
        else if (act == 6) _ZN12Unk_020668a013func_02067150Ev(this);
    }
}
Unk_020ddc34::Unk_020ddc34() {
    using namespace n3; func_020a7c3c(); }
Unk_020ddc34::~Unk_020ddc34() {
    using namespace n3;}
u32 Unk_020ddc34::vfunc_08() {
    using namespace n3; return 9; }
// ---- Unk_020ddc34 ----
u8 *Unk_020ddc34::vfunc_0c() {
    using namespace n3; return (u8 *)this + 0x12; }
Unk_020ddcf0::Unk_020ddcf0() {
    using namespace n3;
    unk_3c = 0;
    unk_40 = 0;
}
Unk_020ddcf0::~Unk_020ddcf0() {
    using namespace n3;}
void Unk_020ddcf0::vfunc_08() {
    using namespace n3;
    Unk_020e2a30::vfunc_08();
    unk_20.func_020a7c3c();
    unk_3c = 0;
    unk_40 = 0;
}
void Unk_020ddcf0::func_02065f90(u8 *p, u32 v) {
    using namespace n3;
    unk_20.func_020a7c04(p);
    unk_2c = v;
    unk_40 = 0;
}
void Unk_020ddcf0::func_02065f70(Unk_020e2a78 *p, u32 v) {
    using namespace n3;
    unk_20.func_020a7bd8(p);
    unk_2c = v;
    unk_40 = 0;
}
// ---- Unk_020ddcf0 ----
void Unk_020ddcf0::func_02065f50(u32 v) {
    using namespace n3;
    unk_20.func_020a7c3c();
    unk_2c = v;
    unk_40 = 1;
}

// ======== unk_02065f14.cpp ========
namespace n2 {

}
void Unk_020ddcf0::func_02065f14(Unk_020e2a78 *p, u32 v) {
    using namespace n2;
    Unk_020660f8 *o = (Unk_020660f8 *)unk_3c;
    s32 t = o->unk_04;
    BOOL five = (t == 5);
    func_02065f70(p, v);
    if (t != 0 && !five) {
        ((Unk_020660f8 *)unk_3c)->func_020674b8();
        ((Unk_020ddc24 *)(((Unk_020660f8 *)unk_3c)->unk_16dc))->func_02068244();
    }
}

// ======== unk_020655e4.cpp ========
#define unk_04 ((u32 *)((u8 *)this + 4))
#define data_020ddd68 ((char *)"/script/ENG/message")
namespace n1 {

}
Unk_020ddc34 *Unk_020ddcf0::func_02065f10() {
    using namespace n1; return &unk_20; }
u32 Unk_020ddcf0::func_02065f08() {
    using namespace n1; return unk_40; }
u32 Unk_020ddcf0::func_02065f04() {
    using namespace n1; return unk_04[(0x2c - 4) / 4]; }
const char *Unk_020ddcf0::vfunc_0c() {
    using namespace n1; return data_020ddd68; }
void Unk_020ddcf0::vfunc_10() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_14() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_18() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_1c() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_20() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_24() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_28() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_2c() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_30() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_34() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_38(u32 a) {
    using namespace n1;}
void Unk_020ddcf0::vfunc_3c() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_40() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_44() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_48() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_4c() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_50() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_54() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_58() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_5c() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_60() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_64() {
    using namespace n1;}
u32 Unk_020ddcf0::vfunc_68() {
    using namespace n1; return 0; }
s32 Unk_020ddcf0::vfunc_6c() {
    using namespace n1; return 5; }
void Unk_020ddcf0::vfunc_70() {
    using namespace n1;}
void Unk_020ddcf0::vfunc_74() {
    using namespace n1;}
void Unk_020ddcf0::func_02065e90(u32 v) {
    using namespace n1; unk_3c = v; }
void Unk_020ddcf0::func_02065e88() {
    using namespace n1; unk_3c = 0; }
#undef unk_04
#undef data_020ddd68

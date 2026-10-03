#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern u8 data_020e416c;
extern u8 data_021c1ad4[];
extern u8 data_021c1a6c[];
extern u8 data_021c1a44[];
extern void *gCommManager;
extern u8 data_021d735c[];
void *func_ov004_0222aa74();
void *func_ov004_0222aa1c();
void *func_ov004_0222aacc(u16 *id, s32 a, s32 b);
void *func_ov004_0222ab80(u16 *id, s32 a, s32 b);
void *func_02034250(u16 *id, s32 a, s32 b, s32 c);
void *func_020342cc(u16 *id, s32 a, s32 b, s32 c);
void func_02034320(u16 *id, s32 a, s32 b, s32 c);
void func_020343b0(u16 *out, s32 a);
void func_02004b60();
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 func_0209888c();
u32 func_02097740(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 func_020b50e8();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_020b5364(s32 v);
BOOL func_020b5184();
BOOL func_020b0f0c();
void Melody_StartTrackA();
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
s32 func_020b8fbc(void);
void func_020b8fc8(s32 *a, s32 *b);
s32 func_020b50dc(void);
s32 func_020b5164(void);
s32 func_020b4934(void);
s32 func_020b49a8(void);
s32 Snd_SetBgmTrackVariant(s32 a);
void Snd_FadeInBgmTracks(s32 a);
void Snd_FadeOutBgmTracks(s32 a);
void func_020947c0(void *p, s32 n);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 func_02094fec(void);
s32 _ZN12Unk_020d8e3413func_02035ed0Ej(void *p, s32 a);
s32 _ZN12Unk_020d8e4413func_02035fe0Ej(void *p, s32 a);
void Snd_DuckSubPlayers(s32);
void Snd_RestoreSubPlayers(void);
void Snd_MoveBgmVolume(s32 a, s32 b);
void Snd_StopBgm(s32 a);
void Snd_PlayBgm(u32 a);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *p, s32 id);
s32 _ZN12Unk_02036a6413func_02036ab8Ejjjjjj(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN12Unk_020d8e1413func_02035284Ev(void *p);
s32 _ZN12Unk_020d8e1413func_02035328Ev(s32 a);
s32 _ZN12Unk_02036a6413func_02036a98Ev(s32 a);
s32 func_02040c7c(void);
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 Event_GetState(u32, void *, u32);
s32 func_020b0f30(void);
s32 _ZN10PlayerData13func_0209865cEv(s32 a);
s32 func_02099c1c(s32 a);
extern u16 data_020c8b9c[];
void func_02133ef8(void *, u32);
s32 Clock_GetYear(void);
void Clock_GetDayMonth(u16 *);
void Clock_GetMinuteHour(u16 *);
s32 Clock_GetSecond(void);
void BgHeap_Destroy(void);
void func_020639e8(void *buf, const void *fmt, ...);
void *BgModel_LoadFile(void *, void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void Gfx3d_LoadTexAndPltt(void *, s32);
void *Gfx3d_CopyTex(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void *func_0204df64(void *);
extern u8 data_020d8ebc[], data_020d8ed0[], data_020d8ed4[], data_020d8ee4[], data_020d8ef4[];
extern u8 data_020d8f04[], data_020d8f14[], data_020d8f24[], data_020d8f34[], data_020d8f44[];
extern u8 data_020d8f58[], data_020d8f68[], data_020d8f7c[], data_020d8f90[], data_020d8fa0[];
extern u8 data_020d8fb4[], data_020d8fc4[], data_020d8fd8[];
extern void *gBgHeap;
extern void *gCurrentHeap;
extern u8 data_021e3680[];
extern u8 gBgModelCache[];
void *BgModel_LoadBcl(s32 id, void *heap);
s32 BgModel_GetGrassType(void *);
}
// ---- unified class definitions of the unit (union of the views of the five source files) ----
class Unk_02036bf8;
class Unk_02034ae8;
class Unk_02035780_Owner;
class Unk_02035758;
class Unk_02035ca4;

// 0x1c-byte slot
class Unk_02036bf8 {
public:
    Unk_02036bf8();
    Unk_02036bf8(s32 a, u32 b, s32 c, s32 d, u8 e);
    ~Unk_02036bf8();

    BOOL func_02036ba4();
    void func_02036bbc(Unk_02036bf8 *src);
    void func_02036bf8();
    void func_02036c18();
    Unk_02036bf8 *func_02036c1c(s32 a, u32 b, s32 c, s32 d, u8 e);
    Unk_02036bf8 *func_02036c48();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u8 pad_06[2];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 unk_10;
    /* 0x11 */ u8 unk_11;
    /* 0x12 */ u8 unk_12;
    /* 0x13 */ u8 unk_13;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ s32 unk_18;
};

// the symbols name this class in the parameter of three methods of the composite
class Unk_02036ba4 : public Unk_02036bf8 {
public:
    BOOL func_02034784();
};

typedef BOOL (Unk_02036ba4::*Unk_02034574_Fn)();

class Unk_020d8e24 {
public:
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
    virtual ~Unk_020d8e24();
    Unk_020d8e24(u32 a);
    void func_0203617c();
    void func_020361a8();
    void func_020361c4(u32 a);
    void func_020361e0();
    void func_02036200();
    void func_02036220();
    s32 func_02036220_call(); // alias of func_02036220 declared s32 so the caller emits bl instead of a tail branch
    void func_02036240();
    void func_02036260();
    void func_02036280(u32 a);
    void func_0203629c(u32 a);
    void func_020362b8(u32 a);
    void func_020362d4(u32 a);
    void func_020362f0(u32 a);
    s32 func_02036308(BOOL a);
    void func_02036330(BOOL a);
    void func_02036470(BOOL a);
    void func_02036528();
    void func_020365d8(u32 a);
    void func_020365dc();
    void func_02036614();
    void func_02036620();
    void func_02036654();
    void func_02036670();
    void func_02036678();
};

class Unk_020d8e64 {
public:
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;

    Unk_020d8e64(u32 a);
    virtual ~Unk_020d8e64();
    void func_020366e0();
    void func_02036700(s32 a, u32 b, u32 c);
    void func_0203671c(u32 a);
    void func_02036720();
    void func_02036738();
    void func_020367e8();
    void func_020367fc();
    void func_02036800();
    void func_02036808();
};

class Unk_020d8e04 {
public:
    u32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;

    Unk_020d8e04(u32 v);
    virtual ~Unk_020d8e04();
    void func_02036858();
    void func_020368dc();
    void func_020368f8(u32 x);
    void func_02036914();
    void func_0203693c();
    void func_0203695c();
    void func_02036984(u32 v);
    void func_02036988();
    void func_020369ac();
    void func_020369c4();
    void func_020369e4();
    void func_02036a00();
    void func_02036a08();
};

class Unk_020356b8 {
public:
    Unk_020356b8(void *owner);
    ~Unk_020356b8();
    void func_020356b8();
    void func_0203570c();
    Unk_020356b8 *func_02035744(void *owner);
    void func_02035724(s32 a, s32 b);
    void func_02035730(s32 a);
    void func_02035738(u16 a);
    void func_02035740();

    u32 unk_00;
    u8 unk_04;
    u8 pad_05;
    u16 unk_06;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
};

typedef void (Unk_02035780_Owner::*Unk_02035780_OwnerFn)();

class Unk_02035780_Owner {
public:
    void func_02034574(Unk_02035780_OwnerFn fn);
    void func_02035868();

    u8 pad_00[4];
    u16 unk_04;
    u8 pad_06[6];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11;
    u8 unk_12;
    u8 pad_13;
    u8 unk_14;
    u8 pad_15[0x1c0 - 0x15];
    s32 unk_1c0;
    u8 pad_1c4[0x2b4 - 0x1c4];
    Unk_020356b8 unk_2b4;
};

class Unk_02035ca4 {
public:
    Unk_02035ca4();
    ~Unk_02035ca4();
    void func_02035ca4(s32 a, s32 b, u8 c);
    void func_02035cac();

    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

class Unk_02035758 {
public:
    Unk_02035758(Unk_02035780_Owner *owner);
    ~Unk_02035758();
    void func_02035758();
    void func_0203576c();
    void func_02035780();
    void func_020357f4();
    void func_0203581c(Unk_02035ca4 *e);
    void func_02035870(Unk_02035ca4 *e);
    void func_020358d4(Unk_02035ca4 *e);
    void func_02035974(Unk_02035ca4 *e);
    void func_020359b0(Unk_02035ca4 *e);
    void func_020359ec(Unk_02035ca4 *e);
    void func_02035a5c(Unk_02035ca4 *e);
    void func_02035ac4(Unk_02035ca4 *e);
    void func_02035ac8();
    void func_02035b94();
    void func_02035b9c();
    void func_02035ba4();
    void func_02035bac();
    void func_02035bb4();
    void func_02035bbc(s32 i);
    void func_02035bcc();
    void func_02035bd4();
    void func_02035bdc();
    void func_02035c0c();
    void func_02035c34();
    void func_02035c38();

    Unk_02035780_Owner *unk_00;
    Unk_02035ca4 unk_04[8];
    s32 unk_84;
};

typedef void (Unk_02035758::*Unk_02035758_Fn)(Unk_02035ca4 *);

// 0x18-byte object
class Unk_02036a64 {
public:
    Unk_02036a64();
    ~Unk_02036a64();
    s32 unk_00;
    u16 unk_04;
    u8 unk_06;
    u8 unk_07;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    s32 unk_14;

    void func_02036a64();
    BOOL func_02036a98();
    BOOL func_02036aa8();
    BOOL func_02036ab8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    BOOL func_02036b14(u32 a, u32 b, u32 c, u32 d);
    BOOL func_02036b50(u16 *a, u16 *b);
};

class Unk_020d8e44 {
public:
    Unk_020d8e04 unk_04;
    Unk_020d8e64 unk_18;
    Unk_020d8e24 unk_24;
    virtual ~Unk_020d8e44();
    Unk_020d8e44(u32 a);
    void func_02035fe0(u32 a);
    void func_0203600c();
    void func_0203603c();
    void func_0203606c();
    void func_0203608c();
    void func_020360ac();
    void func_020360cc();
};

class Unk_020d8e34 {
public:
    u32 unk_04;
    u8 unk_08;
    u16 unk_0a;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
    virtual ~Unk_020d8e34();
    void func_02035da8();
    void func_02035dd8();
    void func_02035cd0();
    void func_02035e0c();
    void func_02035e2c(s32 a);
    void func_02035ed0(u32 a);
    void func_02035ed4();
    void func_02035f18();
    void func_02035f30();
    void func_02035f38();
    void func_02035f58();
    void func_02035f74();
    void func_02035f7c();
    Unk_020d8e34(u32 a);
};

class Unk_020d8e14 {
public:
    Unk_020d8e14(u32 owner);
    virtual ~Unk_020d8e14();
    void func_02035284();
    BOOL func_02035328();
    BOOL func_02035338();
    void func_02035354();
    void func_0203535c(s32 i);
    void func_02035368(s32 a, s32 b);
    void func_020353b0(s32 a, s32 b);
    void func_020354d8();
    void func_02035514();
    void func_02035518();
    void func_020355dc();

    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    s32 unk_0c;
    s32 unk_10;
};

class Unk_020d8df4 {
public:
    virtual ~Unk_020d8df4();
    Unk_02034ae8 *unk_04;
    u16 unk_08;
    u8 unk_0a;
    Unk_020d8df4(Unk_02034ae8 *o);
    void func_0203517c();
    void func_020351b0();
    void func_020351b8();
    void func_020351bc();
    void func_02035200();
    void func_02035214();
};

class Unk_020d8e54 {
public:
    virtual ~Unk_020d8e54();
    Unk_020d8e54();
};

// composite object seen by the first file (data_021c1b3c)
class Unk_02034518 {
public:
    Unk_02034518();
    ~Unk_02034518();

    void func_02034518();
    void func_02034ae8();
    void func_02034b50();
    void func_02034574(Unk_02034574_Fn fn);
    void func_020345c4(s32 idx);
    Unk_02036bf8 *func_02034608(s32 n);
    s32 func_02034630(u16 id);
    s32 func_02034660(s32 v);
    s32 func_02034690();
    s32 func_020346c4(Unk_02036ba4 *key);
    void func_020346f8();
    void func_02034738();
    void func_02034784();
    void func_0203478c();
    void func_020347f0();
    void func_02034850();
    void func_02034894(u16 id);
    void func_020348bc(s32 v);
    void func_020348e4(Unk_02036ba4 *e);
    s32 func_02034514();
    void func_02034a90();

    /* 0x000 */ Unk_02036bf8 unk_00[16];
    /* 0x1c0 */ s32 unk_1c0;
    /* 0x1c4 */ Unk_02035758 unk_1c4;
    /* 0x24c */ Unk_02036a64 unk_24c;
    /* 0x264 */ Unk_020d8e44 unk_264;
    /* 0x2a0 */ Unk_020d8e34 unk_2a0;
    /* 0x2b4 */ Unk_020356b8 unk_2b4;
    /* 0x2d0 */ Unk_020d8e14 unk_2d0;
    /* 0x2e4 */ Unk_020d8df4 unk_2e4;
    /* 0x2f0 */ Unk_020d8e54 unk_2f0;
    /* 0x2f4 */ u8 unk_2f4;
    /* 0x2f5 */ u8 pad_2f5[3];
};

// Vtable at 0x020d8e74.
class Unk_020d8e74 : public GameProc {
public:
    Unk_020d8e74();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual ~Unk_020d8e74();
    static Unk_020d8e74 *func_020344f8();

    /* 0x50 */ Unk_02034518 unk_50;
};

// composite object seen by the second file
class Unk_02034ae8 {
public:
    Unk_02036bf8 unk_000[16];
    s32 unk_1c0;
    Unk_02035758 unk_1c4;
    Unk_02036a64 unk_24c;
    Unk_020d8e44 unk_264;
    Unk_020d8e34 unk_2a0;
    Unk_020356b8 unk_2b4;
    Unk_020d8e14 unk_2d0;
    Unk_020d8df4 unk_2e4;
    Unk_020d8e54 unk_2f0;
    u8 unk_2f4;
    Unk_02034ae8();
    ~Unk_02034ae8();
    void func_02034ae8();
    void func_02034b50();
};

// plain functions that take the sub-object as `this`
namespace Ns_this {
extern "C" {
void func_02036b88(void *);
void func_02036b84(void *);
void func_02036b7c(void *);
void func_02036b68(void *);
void func_0203550c(void *);
void func_02035504(void *);
void func_020351ac(void *);
void func_02034f4c(void *);
}
}

struct Unk_020d8dbc_Rec {
    Unk_020d8e74 *(*fn)();
    s16 a;
    s16 b;
};

struct Unk_02034250_Id {
    u16 v;
};

class Unk_02036bf8;

struct Unk_02034320_Pkt {
    u16 a;
    u16 b;
};

class Unk_02034ae8;

extern "C" {
struct Unk_020353b0_Rec { s32 unk_00; u16 unk_04; };
}

class Unk_02035780_Owner;

class Unk_02035cd0 {
public:
    void func_02035cd0();
    void func_02035da8();

    u8 pad_00[0xc];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
};

class Unk_02035dd8 {
public:
    void func_02035dd8();
    void func_02035e0c();
    void func_02035e2c(s32 t);

    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
};

struct Unk_020355dc_Data {
    u8 pad_00[0xc];
    u16 unk_0c;
};

struct Unk_020358d4_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
};

struct Unk_020358d4_Vec {
    s32 x, y, z;
};

struct Unk_020358d4_Src {
    s32 x, y, z;
    Unk_020358d4_Src() {}
    Unk_020358d4_Src(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" {
struct Unk_021e5890_T { u8 pad[0x14]; u8 unk_14; };
}

struct Unk_02036c60_Vec { s32 x, y, z; };

struct Unk_02036c60_Ent { u8 a; u8 pad; s16 b; s16 c; };

// ---- BgModelCache ----
struct Unk_02036cec_Entry {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u8 unk_24[4];
    void *unk_28;
    s32 unk_2c;
};

struct Unk_02036cec_Small {
    s32 unk_00;
    void *unk_04;
};

struct BgModelCache {
    Unk_02036cec_Entry unk_000[31];
    Unk_02036cec_Small unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    s32 unk_61c;
    u8 pad_620[0x10];
    s32 unk_630;
    s32 unk_634;
    s32 unk_638;
    s32 unk_63c;
    s32 unk_640;
    s32 unk_644;
    s32 unk_648;

    s32 getBeBPatTex();
    s32 getBeBPatAnm();
    s32 getRiverPatTex();
    s32 getRiverPatAnm();
    s32 getGroundTexSrtAnm();
    s32 getGroundMatAnm();
    s32 getGroundTex();
    BOOL reset();
    Unk_02036cec_Entry *getAcre(s32 id);
    void *getAcreBcl(s32 id);
    void loadGroundAnims();
    void loadGroundTexture();
};

// extern declarations
extern "C" {
extern u8 data_020e416c;
extern u8 data_021c1ad4[];
extern u8 data_021c1a6c[];
extern u8 data_021c1a44[];
extern void *gCommManager;
extern u8 data_021d735c[];
extern Unk_02034574_Fn data_020d8dac;
void *func_ov004_0222aa74();
void *func_ov004_0222aa1c();
void *func_ov004_0222aacc(u16 *id, s32 a, s32 b);
void *func_ov004_0222ab80(u16 *id, s32 a, s32 b);
void *func_02034250(u16 *id, s32 a, s32 b, s32 c);
void *func_020342cc(u16 *id, s32 a, s32 b, s32 c);
void func_02034320(u16 *id, s32 a, s32 b, s32 c);
void func_020343b0(u16 *out, s32 a);
void func_02004b60();
s32 Item_SetDesign(u16 *out, s32 a, s32 b);
BOOL PlayerData_GetCurrent();
u32 func_0209888c();
u32 func_02097740(void *a, u32 b);
BOOL _ZN11CommManager8isOnlineEv(void *p);
s32 func_020b50e8();
void func_020728d4(void *p);
void func_020728a4(void *p, void *q, s32 n);
void func_02072824(void *p, s32 a, s32 b);
BOOL func_020b5364(s32 v);
BOOL func_020b5184();
BOOL func_020b0f0c();
void Melody_StartTrackA();
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void (*d)());
extern Unk_02034518 *data_021c1b3c;
s32 _ZN12Unk_0203451813func_02034690Ev(Unk_02034ae8 *o);
void _ZN12Unk_0203451813func_02034894Et(Unk_02034ae8 *o, s32 a, s32 b);
void _ZN12Unk_0203451813func_020348bcEi(Unk_02034ae8 *o, s32 a);
void _ZN12Unk_0203451813func_020348e4EP12Unk_02036ba4(Unk_02034ae8 *o, Unk_02036bf8 *e);
s32 func_020b8fbc(void);
void func_020b8fc8(s32 *a, s32 *b);
s32 func_020b50dc(void);
s32 func_020b5164(void);
s32 func_020b4934(void);
s32 func_020b49a8(void);
s32 Snd_SetBgmTrackVariant(s32 a);
void Snd_FadeInBgmTracks(s32 a);
void Snd_FadeOutBgmTracks(s32 a);
void func_020947c0(void *p, s32 n);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
extern Unk_020355dc_Data *gActorDefaultParent;
s32 func_02094fec(void);
s32 _ZN12Unk_020d8e3413func_02035ed0Ej(void *p, s32 a);
s32 _ZN12Unk_020d8e4413func_02035fe0Ej(void *p, s32 a);
void Snd_DuckSubPlayers(s32);
void Snd_RestoreSubPlayers(void);
void Snd_MoveBgmVolume(s32 a, s32 b);
void Snd_StopBgm(s32 a);
void Snd_PlayBgm(u32 a);
Unk_020358d4_Src *func_020947f0(u32 n);
void _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(Unk_020358d4_Buf *p, Unk_020358d4_Src *pos, s32 a, s32 b);
void func_02033988(Unk_020358d4_Buf *p);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *p, s32 id);
s32 _ZN12Unk_02036a6413func_02036ab8Ejjjjjj(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN12Unk_020d8e1413func_02035284Ev(void *p);
s32 _ZN12Unk_020d8e1413func_02035328Ev(s32 a);
s32 _ZN12Unk_02036a6413func_02036a98Ev(s32 a);
s32 func_02040c7c(void);
void Clock_GetDateTime(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 Event_GetState(u32, void *, u32);
s32 func_020b0f30(void);
s32 _ZN10PlayerData13func_0209865cEv(s32 a);
s32 func_02099c1c(s32 a);
extern u16 data_020c8b9c[];
void func_02133ef8(void *, u32);
s32 Clock_GetYear(void);
void Clock_GetDayMonth(u16 *);
void Clock_GetMinuteHour(u16 *);
s32 Clock_GetSecond(void);
void BgHeap_Destroy(void);
void func_020639e8(void *buf, const void *fmt, ...);
void *BgModel_LoadFile(void *, void *);
void *File_LoadAlloc(void *, void *, s32, s32);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *NNS_G3dGetMdlSet(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *NNS_G3dGetTex(void *);
void Gfx3d_LoadTexAndPltt(void *, s32);
void *Gfx3d_CopyTex(void *, void *);
void Mem_Free(void *);
void *Heap_Alloc(void *, u32);
void *func_0204df64(void *);
extern u8 data_020d8ebc[], data_020d8ed0[], data_020d8ed4[], data_020d8ee4[], data_020d8ef4[];
extern u8 data_020d8f04[], data_020d8f14[], data_020d8f24[], data_020d8f34[], data_020d8f44[];
extern u8 data_020d8f58[], data_020d8f68[], data_020d8f7c[], data_020d8f90[], data_020d8fa0[];
extern u8 data_020d8fb4[], data_020d8fc4[], data_020d8fd8[];
extern void *gBgHeap;
extern void *gCurrentHeap;
extern u8 data_021e3680[];
extern u8 gBgModelCache[];
void *BgModel_LoadBcl(s32 id, void *heap);
s32 BgModel_GetGrassType(void *);
extern Unk_021e5890_T data_021e5890;
}

// Declarations for data defined further down
// Data order: this unit is placed object by object (see object_order.txt).
extern const u16 data_020c8b28[0x3a];
extern u16 data_020d8d8c[2];
extern u16 data_020d8d90[2];
extern u16 data_020d8d88[2];
extern Unk_020d8dbc_Rec data_020d8dbc;
extern const u8 data_020c8ae4[8];
extern const s32 data_020c8aec[3];
extern const u16 data_020c8af8[0x18];

// own functions
extern "C" {
Unk_02036bf8 *func_02034910();
void func_02034938();
void func_0203498c();
void func_020349e0();
void func_02034d04(void);
void func_02034d18(void);
u16 func_02034d2c(void);
void func_02034d5c(s32 a);
void func_02034d70(s32 a);
void func_02034d84(s32 a);
void func_02034d98(s32 a, s32 b);
void func_02034dd0(s32 a, s32 b, s32 c);
void func_02034e10(s32 a, s32 b, s32 c, u8 d);
void func_02034e48(s32 x);
void func_02034e9c(void);
void func_02034f4c(s32 a);
void func_02034f6c(s32 a, s32 b);
void func_02034f80(void);
void func_02034f98(void);
void func_02034fb0(void);
void func_0203507c(void);
void func_020351ac(void);
Unk_020d8e14 *func_02035234(void);
void *func_020355a0(void);
void *func_020355b4(void);
void *func_020355c8(void);
void *func_02035d94(void);
void func_02035504(void *p);
void func_0203550c(Unk_020d8e14 *p);
s32 func_02035e60(void);
s32 func_02035ea0(s32 a);
void func_02036b68(Unk_02036a64 *p);
void func_02036b7c(Unk_02036a64 *p);
void func_02036b84(void);
void func_02036b88(Unk_02036a64 *p);
void func_02036b9c(void);
void func_02036ba0(void);
}

namespace Ns_02034ae8 {
extern "C" {
extern Unk_02034ae8 *data_021c1b3c;
s32 func_020b50e8(void);
s32 func_020b5184(void);
void func_02034e10(s32 a, s32 b, s32 c, s32 d);
Unk_020353b0_Rec *func_02034910(void);
}
}

namespace Ns_020354d8 {
extern "C" {
extern u8 *data_021c1b3c;
s32 func_02034d70(s32 a);
s32 func_02034d84(s32 a);
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 func_02034e10(s32 a, s32 b, s32 c, s32 d);
s32 func_02034fb0(void *p);
s32 func_0203507c(void *p);
s32 func_02034f6c(void *p, u32 a);
s32 func_020b50e8(void);
void *PlayerData_GetCurrent(void);
}
}

namespace Ns_02035e2c {
extern "C" {
void func_02034e10(u32 a, u32 b, u32 c, u32 d);
void func_02034d70(u32 a);
void func_02034dd0(u32 a, u32 b, u32 c);
void func_02034d84(u32 a);
void func_02034d5c(u32 a);
void func_02034d98(u32 a);
s32 func_020b50e8(void);
s32 func_02035234(void);
s32 func_020b5184(void);
s32 func_02035d94(void);
s32 _ZN12Unk_02036a6413func_02036ab8Ejjjjjj(s32 o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern u32 gCommManager;
s32 _ZN11CommManager8isOnlineEv(u32 a);
s32 PlayerData_GetCurrent(void);
s32 func_020b0f0c(void);
s32 _ZN12Unk_02097ff413func_02098044Ej(s32 a, s32 b);
}
}

namespace Ns_020367e8 {
extern "C" {
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
void func_02034d84(u32 a);
Unk_02036a64 *func_02035d94(void);
}
}

static inline BOOL Unk_020341c0_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

static inline BOOL Unk_02034938_IsA() { return data_020e416c == 0; }

static inline BOOL Unk_02034938_IsB() { return data_020e416c == 1; }

static inline BOOL IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

Unk_02036bf8 *Unk_02036bf8::func_02036c48()
{
    func_02036bf8();
    return this;
}

Unk_02036bf8 *Unk_02036bf8::func_02036c1c(s32 a, u32 b, s32 c, s32 d, u8 e)
{
    func_02036bf8();
    unk_00 = a;
    unk_04 = b;
    unk_0c = c;
    unk_08 = d;
    unk_10 = e;
    return this;
}

void Unk_02036bf8::func_02036c18()
{
}

void Unk_02036bf8::func_02036bf8()
{
    unk_00 = 0x25;
    unk_04 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void Unk_02036bf8::func_02036bbc(Unk_02036bf8 *src)
{
    func_02036bf8();
    unk_00 = src->unk_00;
    unk_04 = src->unk_04;
    unk_08 = src->unk_08;
    unk_0c = src->unk_0c;
    unk_10 = src->unk_10;
    unk_11 = src->unk_11;
    unk_12 = src->unk_12;
    unk_13 = src->unk_13;
    unk_14 = src->unk_14;
    unk_18 = src->unk_18;
}

BOOL Unk_02036bf8::func_02036ba4()
{
    BOOL r = FALSE;
    if (unk_18 > 0) {
        unk_18 = unk_18 - 1;
        if (unk_18 <= 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void func_02036ba0(void)
{
}

extern "C" void func_02036b9c(void)
{
}

extern "C" void func_02036b88(Unk_02036a64 *p)
{
    p->func_02036a64();
    p->func_02036a64();
}

extern "C" void func_02036b84(void)
{
}

extern "C" void func_02036b7c(Unk_02036a64 *p)
{
    p->func_02036a64();
}

extern "C" void func_02036b68(Unk_02036a64 *p)
{
    p->func_02036a64();
    p->func_02036a64();
}

BOOL Unk_02036a64::func_02036b50(u16 *a, u16 *b)
{
    if (unk_04 == *a && *(u16 *)&unk_06 == *b) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02036a64::func_02036b14(u32 a, u32 b, u32 c, u32 d)
{
    u32 t = unk_08 + unk_06 * 0x3c;
    u32 lo = b + a * 0x3c;
    u32 hi = d + c * 0x3c;
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL Unk_02036a64::func_02036ab8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f)
{
    u32 t = unk_08 + (unk_07 * 0xe10 + unk_06 * 0x3c);
    u32 lo = c + (a * 0xe10 + b * 0x3c);
    u32 hi = f + (d * 0xe10 + e * 0x3c);
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL Unk_02036a64::func_02036aa8()
{
    if (*((u8 *)this + 0x13) != unk_07) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02036a64::func_02036a98()
{
    if (unk_0c != unk_00) {
        return TRUE;
    }
    return FALSE;
}

// ---- Unk_02036a64 methods ----
void Unk_02036a64::func_02036a64()
{
    unk_0c = unk_00;
    unk_10 = unk_04;
    unk_12 = *(u16 *)&unk_06;
    unk_14 = unk_08;
    unk_00 = Clock_GetYear();
    Clock_GetDayMonth(&unk_04);
    Clock_GetMinuteHour((u16 *)&unk_06);
    unk_08 = Clock_GetSecond();
}

Unk_020d8e04::Unk_020d8e04(u32 v) : unk_04(v), unk_08(0x18), unk_0c(0xffff), unk_0e(0), unk_0f(0), unk_10(0)
{
}

Unk_020d8e04::~Unk_020d8e04()
{
}

void Unk_020d8e04::func_02036a08()
{
    unk_0c = 0xffff;
    unk_08 = 0x18;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

void Unk_020d8e04::func_02036a00()
{
    func_020369c4();
}

void Unk_020d8e04::func_020369e4()
{
    if (unk_10 != 0) {
        func_02036914();
        func_02036858();
    }
}

void Unk_020d8e04::func_020369c4()
{
    func_0203693c();
    unk_08 = 0x18;
    func_020368dc();
    unk_0f = 0;
    unk_10 = 0;
}

void Unk_020d8e04::func_020369ac()
{
    unk_10 = 1;
    func_02036914();
    func_02036858();
}

void Unk_020d8e04::func_02036988()
{
    if (unk_0f == 0) {
        func_0203693c();
        unk_08 = 0x18;
        func_020368dc();
    }
    unk_10 = 0;
}

void Unk_020d8e04::func_02036984(u32 v)
{
    unk_0f = v;
}

void Unk_020d8e04::func_0203695c()
{
    u16 t = data_020c8af8[unk_08];
    Ns_020367e8::func_02034e10(0x24, t, 0x7f, 0);
    unk_0c = t;
}

void Unk_020d8e04::func_0203693c()
{
    u16 t = unk_0c;
    if (t != 0xffff) {
        Ns_020367e8::func_02034d84(t);
        unk_0c = 0xffff;
    }
}

void Unk_020d8e04::func_02036914()
{
    u32 v = Ns_020367e8::func_02035d94()->unk_07;
    if (v != unk_08) {
        func_0203693c();
        unk_08 = v;
        func_0203695c();
    }
}

void Unk_020d8e04::func_020368f8(u32 x)
{
    if (unk_0e == 0) {
        Ns_020367e8::func_02034dd0(0x1b, x, 0);
        unk_0e = 1;
    }
}

void Unk_020d8e04::func_020368dc()
{
    if (unk_0e != 0) {
        Ns_020367e8::func_02034d70(0x1b);
        unk_0e = 0;
    }
}

void Unk_020d8e04::func_02036858()
{
    Unk_02036a64 *p = Ns_020367e8::func_02035d94();
    BOOL r = p->func_02036b14(0x3b, 0x32, 0, 0x10);
    u16 a[4];
    a[0] = data_020d8d8c[0];
    a[1] = data_020d8d88[0];
    a[2] = data_020d8d90[0];
    func_02133ef8(&a[3], 2);
    if (p->func_02036b50(&a[0], &a[2]) || p->func_02036b50(&a[1], &a[3])) {
        r = FALSE;
    }
    if (r) {
        func_020368f8(200);
    } else {
        func_020368dc();
    }
}

Unk_020d8e64::Unk_020d8e64(u32 v) : unk_04(v), unk_08(0xffff), unk_0a(0), unk_0b(0)
{
}

Unk_020d8e64::~Unk_020d8e64()
{
}

void Unk_020d8e64::func_02036808()
{
    unk_08 = 0xffff;
    unk_0a = 0;
    unk_0b = 0;
}

void Unk_020d8e64::func_02036800()
{
    func_020367e8();
}

void Unk_020d8e64::func_020367fc()
{
}

void Unk_020d8e64::func_020367e8()
{
    func_020366e0();
    unk_0a = 0;
    unk_0b = 0;
}

void Unk_020d8e64::func_02036738() {
    unk_0b = 1;
    if (unk_08 == 0xffff) {
        s32 r5 = Ns_02035e2c::PlayerData_GetCurrent();
        if (Ns_02035e2c::func_020b0f0c() != 0) {
            Ns_02035e2c::func_02034dd0(3, 0, 5);
            func_02036700(4, 0x45, 1);
        } else if (func_020b0f30() != 0) {
            func_02036700(0xd, 0x4a, 0);
        } else if (r5 != 0 && (Ns_02035e2c::_ZN12Unk_02097ff413func_02098044Ej(r5, 0x23) != 0 || (Ns_02035e2c::_ZN12Unk_02097ff413func_02098044Ej(r5, 1) != 0 && func_02099c1c(_ZN10PlayerData13func_0209865cEv(r5)) == 0))) {
            func_02036700(0x1c, 0x46, 0);
        } else if (r5 != 0 && Ns_02035e2c::_ZN12Unk_02097ff413func_02098044Ej(r5, 1) != 0) {
            func_02036700(0x1d, 0x48, 0);
        }
    }
}

void Unk_020d8e64::func_02036720() {
    if (unk_0a == 0) func_020366e0();
    unk_0b = 0;
}

void Unk_020d8e64::func_0203671c(u32 a) { unk_0a = a; }

void Unk_020d8e64::func_02036700(s32 a, u32 b, u32 c) {
    Ns_02035e2c::func_02034e10(a, b, 0x7f, c);
    unk_08 = b;
}

void Unk_020d8e64::func_020366e0() {
    if (unk_08 != 0xffff) { Ns_02035e2c::func_02034d84(unk_08); unk_08 = 0xffff; }
}

Unk_020d8e24::Unk_020d8e24(u32 a) {
    unk_04 = a;
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

Unk_020d8e24::~Unk_020d8e24() {}

void Unk_020d8e24::func_02036678() {
    unk_08 = 0xffff;
    unk_0a = 0xffff;
    unk_0c = 0xffff;
    unk_0e = 0xffff;
    unk_10 = 0xffff;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void Unk_020d8e24::func_02036670() { func_02036620(); }

void Unk_020d8e24::func_02036654() {
    if (unk_15 != 0) {
        func_0203617c();
        func_02036528();
    }
}

void Unk_020d8e24::func_02036620() {
    func_02036260();
    func_02036240();
    func_02036220();
    func_02036200();
    func_020361e0();
    func_020361a8();
    unk_13 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void Unk_020d8e24::func_02036614() {
    unk_15 = 1;
    func_02036528();
}

void Unk_020d8e24::func_020365dc() {
    if (unk_14 == 0) {
        func_02036260();
        func_02036240();
        func_02036220();
        func_02036200();
        func_020361e0();
        func_020361a8();
    }
    unk_15 = 0;
}

void Unk_020d8e24::func_020365d8(u32 a) { unk_14 = a; }

void Unk_020d8e24::func_02036528() {
    s32 r5 = func_02040c7c();
    u32 t[2];
    u32 b0[2], b1[2], b2[2];
    BOOL r6, r7;
    t[0] = 0;
    t[1] = 0;
    Clock_GetDateTime(t);
    MI_CpuCopy8(t, b0, 8);
    if (Event_GetState(0x13, b0, 0) != 0) r6 = TRUE; else r6 = FALSE;
    r7 = TRUE;
    if (r5 != 0x12) {
        MI_CpuCopy8(t, b1, 8);
        if (Event_GetState(0x12, b1, 0) != 3) r7 = FALSE;
    }
    if (Ns_02035e2c::_ZN11CommManager8isOnlineEv(Ns_02035e2c::gCommManager) != 0) {
        MI_CpuCopy8(t, b2, 8);
        r5 = Event_GetState(0xf, b2, 0);
    } else if (r5 == 0xf) {
        r5 = 1;
    } else {
        r5 = 0;
    }
    func_02036470(r6);
    func_02036330(r7);
    BOOL v;
    if (r5 != 0) v = TRUE; else v = FALSE;
    func_02036308(v);
}

void Unk_020d8e24::func_02036470(BOOL a) {
    if (a != 0) {
        s32 o = Ns_02035e2c::func_02035d94();
        s32 r0 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0, 0, 0, 2, 0, 0);
        s32 r1 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 2, 0, 0, 0, 0, 0);
        if (r0 != 0) {
            if (unk_13 != 0) {
                if (unk_08 != 0x35) {
                    func_02036260();
                    func_020362f0(0x35);
                }
                unk_13 = 0;
            }
            if (unk_0a != 0x36) {
                func_02036240();
                func_020362d4(0x36);
            }
        } else {
            func_02036260();
            func_02036240();
        }
        if (r1 != 0) {
            if (unk_0c != 0x37) {
                func_02036220();
                func_020362b8(0x37);
            }
        } else {
            func_02036220();
        }
    } else {
        func_02036260();
        func_02036240();
        func_02036220_call();
    }
}

void Unk_020d8e24::func_02036330(BOOL a) {
    if (a != 0) {
        s32 o = Ns_02035e2c::func_02035d94();
        u32 c = 0xffff;
        s32 r0 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0, 0, 0x17, 0x1e, 0);
        s32 r1 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x1e, 0, 0x17, 0x32, 0);
        s32 r2 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x32, 0, 0x17, 0x37, 0);
        s32 r3 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x37, 0, 0, 0, 0);
        if (r0 != 0) c = 0x31;
        else if (r1 != 0) c = 0x32;
        else if (r2 != 0) c = 0x33;
        else if (r3 != 0) c = 0x34;
        if (c != 0xffff) {
            if (unk_0e != c) {
                func_02036200();
                func_0203629c(c);
            }
        } else {
            func_02036200();
        }
        s32 q0 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x1d, 0x32, 0x17, 0x1e, 0);
        s32 q1 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x31, 0x32, 0x17, 0x32, 0);
        s32 q2 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x36, 0x32, 0x17, 0x37, 0);
        s32 q3 = Ns_02035e2c::_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(o, 0x17, 0x3a, 0x32, 0, 0, 0);
        if (q0 != 0 || q1 != 0 || q2 != 0 || q3 != 0) {
            func_020361c4(200);
        } else {
            func_020361a8();
        }
    } else {
        func_02036200();
        func_020361a8();
    }
}

s32 Unk_020d8e24::func_02036308(BOOL a) {
    if (a != 0) {
        if (unk_10 != 0x30) {
            func_020361e0();
            func_02036280(0x30);
        }
    } else {
        func_020361e0();
    }
}

void Unk_020d8e24::func_020362f0(u32 a) { Ns_02035e2c::func_02034d98(0x1f); unk_08 = a; }

void Unk_020d8e24::func_020362d4(u32 a) { Ns_02035e2c::func_02034e10(0x20, a, 0x7f, 0); unk_0a = a; }

void Unk_020d8e24::func_020362b8(u32 a) { Ns_02035e2c::func_02034e10(0x21, a, 0x7f, 0); unk_0c = a; }

void Unk_020d8e24::func_0203629c(u32 a) { Ns_02035e2c::func_02034e10(0x22, a, 0x7f, 0); unk_0e = a; }

void Unk_020d8e24::func_02036280(u32 a) { Ns_02035e2c::func_02034e10(0x23, a, 0x7f, 0); unk_10 = a; }

void Unk_020d8e24::func_02036260() {
    if (unk_08 != 0xffff) { Ns_02035e2c::func_02034d5c(unk_08); unk_08 = 0xffff; }
}

void Unk_020d8e24::func_02036240() {
    if (unk_0a != 0xffff) { Ns_02035e2c::func_02034d84(unk_0a); unk_0a = 0xffff; }
}

void Unk_020d8e24::func_02036220() {
    if (unk_0c != 0xffff) { Ns_02035e2c::func_02034d84(unk_0c); unk_0c = 0xffff; }
}

void Unk_020d8e24::func_02036200() {
    if (unk_0e != 0xffff) { Ns_02035e2c::func_02034d84(unk_0e); unk_0e = 0xffff; }
}

void Unk_020d8e24::func_020361e0() {
    if (unk_10 != 0xffff) { Ns_02035e2c::func_02034d84(unk_10); unk_10 = 0xffff; }
}

void Unk_020d8e24::func_020361c4(u32 a) {
    if (unk_12 == 0) {
        Ns_02035e2c::func_02034dd0(0x1e, a, 0);
        unk_12 = 1;
    }
}

void Unk_020d8e24::func_020361a8() {
    if (unk_12 != 0) {
        Ns_02035e2c::func_02034d70(0x1e);
        unk_12 = 0;
    }
}

void Unk_020d8e24::func_0203617c() {
    u8 *p = &unk_13;
    s32 r = _ZN12Unk_02036a6413func_02036a98Ev(Ns_02035e2c::func_02035d94());
    if ((unk_13 | r) != 0) r = 1; else r = 0;
    *p = r;
}

Unk_020d8e44::Unk_020d8e44(u32 a) : unk_04(a), unk_18(a), unk_24(a) {}

Unk_020d8e44::~Unk_020d8e44() {}

void Unk_020d8e44::func_020360cc() {
    unk_04.func_02036a08();
    unk_18.func_02036808();
    unk_24.func_02036678();
}

void Unk_020d8e44::func_020360ac() {
    unk_24.func_02036670();
    unk_18.func_02036800();
    unk_04.func_02036a00();
}

void Unk_020d8e44::func_0203608c() {
    unk_04.func_020369e4();
    unk_18.func_020367fc();
    unk_24.func_02036654();
}

void Unk_020d8e44::func_0203606c() {
    unk_04.func_020369c4();
    unk_18.func_020367e8();
    unk_24.func_02036620();
}

void Unk_020d8e44::func_0203603c() {
    if (Ns_02035e2c::func_020b5184() != 0 || func_020b5164() != 0) {
        unk_04.func_020369ac();
        unk_18.func_02036738();
        unk_24.func_02036614();
    }
}

void Unk_020d8e44::func_0203600c() {
    if (Ns_02035e2c::func_020b5184() != 0 || func_020b5164() != 0) {
        unk_24.func_020365dc();
        unk_18.func_02036720();
        unk_04.func_02036988();
    }
}

void Unk_020d8e44::func_02035fe0(u32 a) {
    unk_04.func_02036984(a);
    unk_18.func_0203671c(a);
    unk_24.func_020365d8(a);
}

Unk_020d8e34::Unk_020d8e34(u32 a) {
    unk_04 = a;
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

Unk_020d8e34::~Unk_020d8e34() {}

void Unk_020d8e34::func_02035f7c() {
    unk_08 = 0x3f;
    unk_0a = 0xffff;
    unk_0c = 0;
    unk_0d = 0;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

void Unk_020d8e34::func_02035f74() { func_02035f38(); }

void Unk_020d8e34::func_02035f58() {
    if (unk_0f != 0) {
        func_02035dd8();
        func_02035cd0();
    }
}

void Unk_020d8e34::func_02035f38() {
    func_02035e0c();
    unk_08 = 0x3f;
    func_02035da8();
    unk_10 = 0;
    unk_0f = 0;
}

void Unk_020d8e34::func_02035f30() { unk_0e = 1; }

void Unk_020d8e34::func_02035f18() {
    unk_0f = 1;
    func_02035dd8();
    func_02035cd0();
}

void Unk_020d8e34::func_02035ed4() {
    if (unk_10 == 0) {
        BOOL r;
        if (unk_0d != 0 && _ZN12Unk_020d8e1413func_02035328Ev(Ns_02035e2c::func_02035234()) != 0) r = TRUE; else r = FALSE;
        func_02035e0c();
        unk_08 = 0x3f;
        func_02035da8();
        unk_0e = r;
    }
    unk_0f = 0;
}

void Unk_020d8e34::func_02035ed0(u32 a) { unk_10 = a; }

extern "C" s32 func_02035ea0(s32 a) {
    u16 *e = data_020c8b9c;
    u32 r = 0xffff;
    const u16 *p;
    for (p = data_020c8b28; p < e; p += 2) {
        if (((u8 *)p)[0] == a) { r = p[1]; break; }
    }
    return r;
}

extern "C" s32 func_02035e60(void) {
    s32 a = Ns_02035e2c::func_020b50e8();
    func_020b4934();
    s32 b = func_020b49a8();
    s32 x = func_02035ea0(a);
    s32 y = func_02035ea0(b);
    if (x == y && x != 0xffff) return TRUE;
    return FALSE;
}

void Unk_020d8e34::func_02035e2c(s32 a) {
    s32 r = func_02035ea0(a);
    u32 c = 0x7f, d = 0;
    if (r == 1) c = 0x38;
    if (r == 0x14 || r == 0x5c) d = 1;
    Ns_02035e2c::func_02034e10(0x11, r, c, d);
    unk_0a = r;
}

void Unk_02035dd8::func_02035e0c() {
    if (unk_0a != 0xffff) {
        Ns_020354d8::func_02034d84(unk_0a);
        unk_0a = 0xffff;
    }
}

void Unk_02035dd8::func_02035dd8() {
    s32 t = Ns_020354d8::func_020b50e8();
    if (unk_08 != t) {
        if (unk_0a != func_02035ea0(t)) {
            func_02035e0c();
            func_02035e2c(t);
        }
        unk_08 = t;
    }
}

void Unk_02035cd0::func_02035da8() {
    if (unk_0c != 0) {
        Ns_020354d8::func_02034d70(0x10);
        unk_0c = 0;
    }
    if (unk_0d != 0) {
        Ns_020354d8::func_02034d84(0x51);
        unk_0d = 0;
    }
    unk_0e = 0;
}

extern "C" void *func_02035d94(void) { return Ns_020354d8::data_021c1b3c + 0x24c; }

void Unk_02035cd0::func_02035cd0() {
    BOOL a;
    void *p = Ns_020354d8::PlayerData_GetCurrent();
    if (p) {
        if (_ZN12Unk_02097ff413func_02098044Ej(p, 0x23) != 0 || _ZN12Unk_02097ff413func_02098044Ej(p, 1) != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
    } else {
        a = FALSE;
    }
    s32 t = Ns_020354d8::func_020b50e8();
    BOOL b = t == 0x1f ? TRUE : FALSE;
    BOOL c = TRUE;
    if ((u8)(t + 0xe6) > 4 && b == 0) {
        c = FALSE;
    }
    if (a == 0 && c != 0) {
        void *pl = func_02035d94();
        if (unk_0c == 0) {
            if (_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(pl, 0x16, 0x31, 0x32, 0x16, 0x32, 0) != 0) {
                Ns_020354d8::func_02034dd0(0x10, 0xc8, 0);
                unk_0c = 1;
            }
        }
        if (unk_0d == 0) {
            if (_ZN12Unk_02036a6413func_02036ab8Ejjjjjj(pl, 0x16, 0x32, 0, 0, 0, 0) != 0 || unk_0e != 0) {
                Ns_020354d8::func_02034e10(0xf, 0x51, 0x7f, 0);
                unk_0d = 1;
            }
        }
    }
}

Unk_02035ca4::Unk_02035ca4() {
    func_02035cac();
}

Unk_02035ca4::~Unk_02035ca4() {}

void Unk_02035ca4::func_02035cac() {
    unk_00 = 0;
    unk_01 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}

void Unk_02035ca4::func_02035ca4(s32 a, s32 b, u8 c) {
    unk_04 = a;
    unk_08 = b;
    unk_00 = c;
}

Unk_02035758::Unk_02035758(Unk_02035780_Owner *owner) : unk_00(owner) {}

Unk_02035758::~Unk_02035758() {}

void Unk_02035758::func_02035c38() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].func_02035cac();
    }
    unk_84 = 0;
}

void Unk_02035758::func_02035c34() {}

void Unk_02035758::func_02035c0c() {
    func_02035ac8();
    func_020357f4();
    func_02035780();
    func_0203576c();
    func_02035758();
}

void Unk_02035758::func_02035bdc() {
    if ((u32)(unk_04[2].unk_0c - 8) <= 1) {
        Snd_RestoreSubPlayers();
    }
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].func_02035cac();
    }
    unk_84 = 0;
}

void Unk_02035758::func_02035bd4() { unk_04[2].unk_0c = 7; }

void Unk_02035758::func_02035bcc() { unk_04[2].unk_0c = 9; }

void Unk_02035758::func_02035bbc(s32 i) { unk_04[1].unk_0c = data_020c8aec[i]; }

void Unk_02035758::func_02035bb4() { unk_04[1].unk_0c = 6; }

void Unk_02035758::func_02035bac() { unk_04[3].unk_0c = 0xa; }

void Unk_02035758::func_02035ba4() { unk_04[3].unk_0c = 0xc; }

void Unk_02035758::func_02035b9c() { unk_04[4].unk_0c = 0xd; }

void Unk_02035758::func_02035b94() { unk_04[4].unk_0c = 0xf; }//DEF data_020c8b28
const u16 data_020c8b28[0x3a] = {
    0x1a, 0x4d, 0x1b, 0x4e, 0x1c, 0x4f, 0x1d, 0x50,
    0x1e, 0x50, 0xa, 0x58, 0xb, 0x53, 0xc, 0x53,
    0xd, 0x53, 0xe, 0x53, 0x2f, 0x53, 0x2d, 0x1,
    0x20, 0x62, 0x21, 0x60, 0x22, 0x62, 0x23, 0x62,
    0x24, 0x62, 0x25, 0x62, 0x26, 0x62, 0x27, 0x62,
    0x28, 0x62, 0x29, 0x62, 0xf, 0x5a, 0x10, 0x5c,
    0x1f, 0x5e, 0x6, 0x4b, 0x7, 0x4b, 0x8, 0x4b,
    0x30, 0x14,
};

//DEF data_020d8d8c
u16 data_020d8d8c[2] = {0xc1f, 0};

//DEF data_020d8d90
u16 data_020d8d90[2] = {0x173b, 0};

//DEF data_020d8d88
u16 data_020d8d88[2] = {0x101, 0};

//DEF data_020d8dbc
Unk_020d8dbc_Rec data_020d8dbc = {&Unk_020d8e74::func_020344f8, 0xcf, 0xcb};

void Unk_02035758::func_02035ac8() {
    static Unk_02035758_Fn tbl[8] = {
        &Unk_02035758::func_02035ac4, &Unk_02035758::func_02035a5c, &Unk_02035758::func_020359ec,
        &Unk_02035758::func_020359b0, &Unk_02035758::func_02035974, &Unk_02035758::func_020358d4,
        &Unk_02035758::func_02035870, &Unk_02035758::func_0203581c,
    };
    for (s32 i = 0; i < 8; i++) {
        (this->*tbl[i])(&unk_04[i]);
    }
}

void Unk_02035758::func_02035ac4(Unk_02035ca4 *e) {}

void Unk_02035758::func_02035a5c(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 2) {
        e->func_02035ca4(0x28, 5, 1);
        e->unk_0c = 5;
    } else if (st == 3) {
        e->func_02035ca4(0x7f, 5, 1);
        e->unk_0c = 5;
    } else if (st == 4) {
        e->func_02035ca4(0, 5, 1);
        e->unk_0c = 5;
    } else if (st != 5) {
        if (st == 6) {
            e->func_02035ca4(0x7f, 5, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_020359ec(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 7) {
        e->func_02035ca4(0x28, 5, 1);
        e->unk_0c = 8;
        unk_84 = 0;
        Snd_DuckSubPlayers(0);
    } else if (st != 8) {
        if (st == 9) {
            if (unk_84 > 0) {
                unk_84 = unk_84 - 1;
            }
            if (unk_84 <= 0) {
                e->func_02035ca4(0x7f, 5, 1);
                e->unk_0c = 0;
                Snd_RestoreSubPlayers();
            }
        }
    }
}

void Unk_02035758::func_020359b0(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 0xa) {
        e->func_02035ca4(0x28, 0xf, 1);
        e->unk_0c = 0xb;
    } else if (st != 0xb) {
        if (st == 0xc) {
            e->func_02035ca4(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_02035974(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 0xd) {
        e->func_02035ca4(0x28, 0xf, 1);
        e->unk_0c = 0xe;
    } else if (st != 0xe) {
        if (st == 0xf) {
            e->func_02035ca4(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_020358d4(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    s32 flag = 0;
    Unk_020358d4_Src *p = func_020947f0(4);
    if (p) {
        Unk_020358d4_Buf b1;
        _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&b1, p, 0, 0);
        s32 k = b1.unk_34;
        Unk_020358d4_Src v(p->x, p->y, p->z + 0x2000);
        Unk_020358d4_Buf b2;
        _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii(&b2, &v, 0, 0);
        s32 m = b2.unk_30;
        if (k == 0x13 || k == 0x16 || m == 1) {
            flag = 1;
        }
        func_02033988(&b2);
        func_02033988(&b1);
    }
    if (st == 0) {
        if (flag != 0) {
            e->func_02035ca4(0x28, 0x3c, 1);
            e->unk_0c = 0x10;
        }
    } else if (st == 0x10) {
        if (flag == 0) {
            e->func_02035ca4(0x7f, 0x3c, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_02035870(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    s32 t = Ns_020354d8::func_020b50e8();
    BOOL a = t == 0x27 ? TRUE : FALSE;
    BOOL b = t == 0x28 ? TRUE : FALSE;
    if (st == 0) {
        if (a || b) {
            e->func_02035ca4(0x40, 0x28, 1);
            e->unk_0c = 0x11;
        }
    } else if (st == 0x11) {
        if (!a && !b) {
            e->func_02035ca4(0x7f, 0x28, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035780_Owner::func_02035868() {
    unk_14 = 0;
}
//DEF data_020c8ae4
const u8 data_020c8ae4[8] = {0x01, 0x2f, 0x1b, 0x34, 0x2f, 0x00, 0x00, 0x00};

void Unk_02035758::func_0203581c(Unk_02035ca4 *e) {
    Unk_02035780_Owner *o = unk_00;
    if (o->unk_1c0 > 0) {
        if (o->unk_14 != 0 && o->unk_0c != 0) {
            e->func_02035ca4(o->unk_0c, 0, 1);
        }
        unk_00->func_02034574(&Unk_02035780_Owner::func_02035868);
        e->unk_0c = 0x12;
    } else {
        e->unk_0c = 0;
    }
}

void Unk_02035758::func_020357f4() {
    Unk_02035780_Owner *o = unk_00;
    if (o->unk_1c0 > 0 && o->unk_10 != 0) {
        Unk_02035ca4 *p = &unk_04[2];
        Unk_02035ca4 *end = &unk_04[7];
        for (; p < end; p++) {
            p->unk_01 = 1;
        }
    }
}

void Unk_02035758::func_02035780() {
    Unk_02035ca4 *end;
    s32 f;
    s32 a;
    BOOL ok = FALSE;
    s32 t;
    s32 b;
    Unk_02035780_Owner *o = unk_00;
    Unk_02035ca4 *p;
    if (o->unk_1c0 > 0 && o->unk_12 != 0 && o->unk_04 != 0xffff) {
        ok = TRUE;
    }
    if (ok) {
        p = &unk_04[7];
        end = &unk_04[0];
        f = 0;
        a = 0;
        b = 0;
        for (; p >= end; p--) {
            if (p->unk_01 == 0) {
                t = p->unk_0c;
                if (p->unk_00 != 0) {
                    f = 1;
                    b = p->unk_08;
                }
                if (t != 0) {
                    a = p->unk_04;
                }
            }
        }
        if (f != 0) {
            o->unk_2b4.func_02035724(a, b);
        }
    }
}

void Unk_02035758::func_0203576c() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_00 = 0;
    }
}

void Unk_02035758::func_02035758() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_01 = 0;
    }
}

Unk_020356b8 *Unk_020356b8::func_02035744(void *owner) {
    unk_00 = (u32)owner;
    func_0203570c();
    return this;
}

void Unk_020356b8::func_02035740() {}

void Unk_020356b8::func_02035738(u16 a) {
    unk_04 = 1;
    unk_06 = a;
}

void Unk_020356b8::func_02035730(s32 a) {
    unk_08 = 1;
    unk_0c = a;
}

void Unk_020356b8::func_02035724(s32 a, s32 b) {
    unk_10 = 1;
    unk_14 = a;
    unk_18 = b;
}

void Unk_020356b8::func_0203570c() {
    unk_04 = 0;
    unk_06 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void Unk_020356b8::func_020356b8() {
    if (unk_08 != 0) {
        unk_08 = 0;
        Snd_StopBgm(unk_0c);
    }
    if (unk_04 != 0) {
        unk_04 = 0;
        Snd_PlayBgm(unk_06);
        Ns_020354d8::func_02034f6c(Ns_020354d8::data_021c1b3c + 0x2f0, unk_06);
    }
    if (unk_10 != 0) {
        unk_10 = 0;
        Snd_MoveBgmVolume(unk_14, unk_18);
    }
}

Unk_020d8e14::Unk_020d8e14(u32 owner) {
    unk_04 = owner;
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    unk_0c = 0;
    unk_10 = 0;
}

Unk_020d8e14::~Unk_020d8e14() {}

void Unk_020d8e14::func_020355dc() {
    if (gActorDefaultParent->unk_0c != 5) {
        if (unk_0b == 1) {
            Ns_020354d8::func_02034dd0(8, 0xf, 0);
            unk_0b = 2;
        } else if (unk_0b == 3) {
            Ns_020354d8::func_02034d70(8);
            unk_0b = 0;
        }
        unk_09 = func_02035e60();
        _ZN12Unk_020d8e3413func_02035ed0Ej(func_020355a0(), unk_09);
        if (unk_08 == 0 && unk_09 == 0 && unk_0a == 0) {
            if (unk_0c != 0 || unk_10 != 0) {
                Ns_020354d8::func_02034d70(7);
            }
            unk_0c = -1;
            unk_10 = 0;
            Ns_020354d8::func_02034dd0(7, 0xf, 0);
        } else {
            _ZN12Unk_020d8e4413func_02035fe0Ej(func_020355b4(), 1);
            if (unk_09 != 0) {
                Ns_020354d8::func_0203507c(func_020355c8());
            }
        }
    }
}

extern "C" void *func_020355c8(void) { return Ns_020354d8::data_021c1b3c + 0x2f0; }

extern "C" void *func_020355b4(void) { return Ns_020354d8::data_021c1b3c + 0x264; }

extern "C" void *func_020355a0(void) { return Ns_020354d8::data_021c1b3c + 0x2a0; }

void Unk_020d8e14::func_02035518() {
    if (gActorDefaultParent->unk_0c != 5) {
        if (unk_0c < 0) {
            s32 r = func_02094fec();
            if (r != 0x3c) {
                if (r == 0x8b) {
                    unk_0c = 0x21;
                } else if (r == 0x8e) {
                    unk_0c = 0x21;
                } else if (r == 0x43) {
                    unk_0c = 0x21;
                } else if (r == 0x44) {
                    unk_0c = 0x21;
                } else if (r == 2) {
                    unk_0c = 0x19;
                } else {
                    unk_0c = 0x14;
                }
            }
        }
        if (unk_09 != 0) {
            Ns_020354d8::func_02034fb0(func_020355c8());
        }
        unk_08 = 0;
        unk_09 = 0;
        unk_0a = 0;
        _ZN12Unk_020d8e4413func_02035fe0Ej(func_020355b4(), 0);
        _ZN12Unk_020d8e3413func_02035ed0Ej(func_020355a0(), 0);
    }
}

void Unk_020d8e14::func_02035514() {}

extern "C" void func_0203550c(Unk_020d8e14 *p) { p->func_020354d8(); }

extern "C" void func_02035504(void *p) { _ZN12Unk_020d8e1413func_02035284Ev(p); }

void Unk_020d8e14::func_020354d8() {
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    if (unk_0c != 0 || unk_10 != 0) {
        Ns_020354d8::func_02034d70(7);
        unk_0c = 0;
        unk_10 = 0;
    }
}

void Unk_020d8e14::func_020353b0(s32 a, s32 b) {
    s32 res = 0;
    s32 f = 0;
    if (Ns_02034ae8::func_020b5184()) {
        s32 a0 = (a == 0) ? 1 : 0;
        s32 a1 = (a == 1) ? 1 : 0;
        s32 a2 = (a == 2) ? 1 : 0;
        s32 b9 = (b == 9) ? 1 : 0;
        s32 b6 = (b == 6) ? 1 : 0;
        Unk_020353b0_Rec *rec = Ns_02034ae8::func_02034910();
        u32 x;
        s32 y;
        if (rec) x = rec->unk_04; else x = 0xffff;
        if (rec) y = rec->unk_00; else y = 0x25;
        s32 ff = (x == 0xffff) ? 1 : 0;
        s32 y24 = (y == 0x24) ? 1 : 0;
        s32 y1a = (y == 0x1a) ? 1 : 0;
        if (a1) {
            if (b6) res = 1;
            else if (b9) {
                if (y1a || ff) res = 1;
                else if (y24) {
                    if ((u16)(x + 0xffd4) <= 1) res = 1;
                }
            } else {
                if (y1a || ff) res = 1;
            }
        } else if (a2) {
            if (b6) {
                res = 1;
                f = 1;
            } else if (b9) {
            } else if (y1a || ff) res = 1;
        } else if (a0) {
            if (y1a || ff) res = 1;
        }
    } else {
        res = 1;
        f = 1;
    }
    if (!res) unk_08 = 1;
    if (f) unk_0b = 1;
}

void Unk_020d8e14::func_02035368(s32 a, s32 b) {
    if (unk_0b == 2) {
        unk_0b = 3;
    } else {
        BOOL c = (a == 0) ? TRUE : FALSE;
        BOOL d = (a == 1) ? TRUE : FALSE;
        BOOL e = FALSE;
        if (a == 2 && b == 6) e = TRUE;
        if (c || d || !e) unk_08 = 1;
    }
}

void Unk_020d8e14::func_0203535c(s32 i) { unk_0c = data_020c8ae4[i]; }

void Unk_020d8e14::func_02035354() { unk_0a = 1; }

BOOL Unk_020d8e14::func_02035338() {
    if (unk_08 || unk_09 || unk_0a) return TRUE;
    return FALSE;
}

BOOL Unk_020d8e14::func_02035328() {
    if (unk_0b) return TRUE;
    return FALSE;
}

void Unk_020d8e14::func_02035284() {
    if (unk_0c > 0) {
        unk_0c--;
        if (unk_0c <= 0) {
            s32 v = 1;
            if (IsZero(data_020e416c) && Ns_02034ae8::func_020b5184()) {
                u16 buf[2];
                BOOL ok;
                func_020947c0(buf, 4);
                if (Item_IsFurniture(buf)) {
                    buf[1] = 0xfff1;
                    if (Item_GetFurnitureIndex(buf) == Item_GetFurnitureIndex(&buf[1])) ok = TRUE;
                    else ok = FALSE;
                } else {
                    if (buf[0] == 0xfff1) ok = TRUE;
                    else ok = FALSE;
                }
                if (!ok) v = 20;
            }
            unk_10 = v;
        }
    }
    if (unk_10 > 0) {
        unk_10--;
        if (unk_10 <= 0) func_02034d70(7);
    }
}

Unk_020d8df4::Unk_020d8df4(Unk_02034ae8 *o) {
    unk_04 = o;
    unk_08 = 0xffff;
    unk_0a = 0;
}

Unk_020d8df4::~Unk_020d8df4() {}

extern "C" Unk_020d8e14 *func_02035234(void) { return &Ns_02034ae8::data_021c1b3c->unk_2d0; }

void Unk_020d8df4::func_02035214() {
    unk_08 = 0x41;
    Ns_02034ae8::func_02034e10(0xb, 0x41, 0x7f, 1);
    func_02035234()->func_02035354();
}

void Unk_020d8df4::func_02035200() {
    unk_0a = 1;
    func_02034dd0(10, 15, 0);
}

void Unk_020d8df4::func_020351bc() {
    if (unk_08 != 0xffff) {
        func_02034dd0(10, 5, 5);
        func_02034d84(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        func_02034d70(10);
        func_02034dd0(10, 5, 5);
        unk_0a = 0;
    }
}

void Unk_020d8df4::func_020351b8() {}

void Unk_020d8df4::func_020351b0() { func_0203517c(); }

extern "C" void func_020351ac(void) {}

void Unk_020d8df4::func_0203517c() {
    if (unk_08 != 0xffff) {
        func_02034d84(unk_08);
        unk_08 = 0xffff;
    }
    if (unk_0a) {
        func_02034d70(10);
        unk_0a = 0;
    }
}

Unk_020d8e54::Unk_020d8e54() {}

Unk_020d8e54::~Unk_020d8e54() {}

extern "C" void func_0203507c(void) {
    s32 r = Ns_02034ae8::func_020b50e8();
    s32 s;
    func_020b4934();
    s = func_020b49a8();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 e20 = (s == 0x20) ? 1 : 0;
    s32 b22 = (s == 0x22) ? 1 : 0;
    s32 b23 = (s == 0x23) ? 1 : 0;
    s32 b25 = (s == 0x25) ? 1 : 0;
    s32 b27 = (s == 0x27) ? 1 : 0;
    s32 b29 = (s == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (b22 || b23 || b25 || b27 || b29)) v = 1;
    else if (a29 && e20) v = 2;
    else if (a25 && e20) v = 3;
    else if (a22 && e20) v = 4;
    if (v) Snd_FadeOutBgmTracks(v);
}

extern "C" void func_02034fb0(void) {
    s32 t = func_020b50dc();
    s32 r = Ns_02034ae8::func_020b50e8();
    s32 e20 = (t == 0x20) ? 1 : 0;
    s32 a22 = (t == 0x22) ? 1 : 0;
    s32 a23 = (t == 0x23) ? 1 : 0;
    s32 a25 = (t == 0x25) ? 1 : 0;
    s32 a27 = (t == 0x27) ? 1 : 0;
    s32 a29 = (t == 0x29) ? 1 : 0;
    s32 b22 = (r == 0x22) ? 1 : 0;
    s32 b25 = (r == 0x25) ? 1 : 0;
    s32 b29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20 && (a22 || a23 || a25 || a27 || a29)) v = 1;
    else if (b29 && e20) v = 2;
    else if (b25 && e20) v = 3;
    else if (b22 && e20) v = 4;
    if (v) Snd_FadeInBgmTracks(v);
}

extern "C" void func_02034f98(void) {
    if (Ns_02034ae8::func_020b50e8() == 0x22) Snd_FadeOutBgmTracks(5);
}

extern "C" void func_02034f80(void) {
    if (Ns_02034ae8::func_020b50e8() == 0x22) Snd_FadeInBgmTracks(5);
}

extern "C" void func_02034f6c(s32 a, s32 b) {
    if (b == 0x62) func_02034e9c();
}

extern "C" void func_02034f4c(s32 a) {
    if (Ns_02034ae8::func_020b5184() || func_020b5164()) func_02034e48(a);
}

extern "C" void func_02034e9c(void) {
    s32 r = Ns_02034ae8::func_020b50e8();
    s32 a22 = (r == 0x22) ? 1 : 0;
    s32 a23 = (r == 0x23) ? 1 : 0;
    s32 a24 = (r == 0x24) ? 1 : 0;
    s32 a25 = (r == 0x25) ? 1 : 0;
    s32 a26 = (r == 0x26) ? 1 : 0;
    s32 a27 = (r == 0x27) ? 1 : 0;
    s32 a28 = (r == 0x28) ? 1 : 0;
    s32 a29 = (r == 0x29) ? 1 : 0;
    s32 v = 0;
    if (r == 0x20) v = 6;
    else if (a23 || a24 || a27 || a28) v = 0xb;
    else if (a29) v = 0xc;
    else if (a25 || a26) v = 0xd;
    else if (a22) v = 0xe;
    if (v) Snd_FadeOutBgmTracks(v);
}

extern "C" void func_02034e48(s32 x) {
    s32 r = func_020b8fbc();
    s32 a, b;
    BOOL c, d, e;
    func_020b8fc8(&a, &b);
    if (b >= 3) c = TRUE; else c = FALSE;
    d = FALSE;
    if (c && r == 1) d = TRUE;
    e = FALSE;
    if (c && r == 2) e = TRUE;
    s32 v;
    if (d) v = 0xc;
    else if (e) v = 0xd;
    else v = 0xb;
    Snd_SetBgmTrackVariant(v);
}

extern "C" void func_02034e10(s32 a, s32 b, s32 c, u8 d) {
    Unk_02036bf8 e(a, b, c, 0, d);
    _ZN12Unk_0203451813func_020348e4EP12Unk_02036ba4(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void func_02034dd0(s32 a, s32 b, s32 c) {
    Unk_02036bf8 e(a, 0xffff, 0, b, 0);
    if (c > 0) e.unk_18 = c;
    _ZN12Unk_0203451813func_020348e4EP12Unk_02036ba4(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void func_02034d98(s32 a, s32 b) {
    Unk_02036bf8 e(a, b, 0x7f, 0, 0);
    e.unk_11 = 1;
    _ZN12Unk_0203451813func_020348e4EP12Unk_02036ba4(Ns_02034ae8::data_021c1b3c, &e);
}

extern "C" void func_02034d84(s32 a) { _ZN12Unk_0203451813func_02034894Et(Ns_02034ae8::data_021c1b3c, a, 0); }

extern "C" void func_02034d70(s32 a) { _ZN12Unk_0203451813func_020348bcEi(Ns_02034ae8::data_021c1b3c, a); }

extern "C" void func_02034d5c(s32 a) { _ZN12Unk_0203451813func_02034894Et(Ns_02034ae8::data_021c1b3c, a, 1); }

extern "C" u16 func_02034d2c(void) {
    s32 i = _ZN12Unk_0203451813func_02034690Ev(Ns_02034ae8::data_021c1b3c);
    u16 r = 0xffff;
    if (i >= 0) r = Ns_02034ae8::data_021c1b3c->unk_000[i].unk_04;
    return r;
}

extern "C" void func_02034d18(void) { Ns_02034ae8::data_021c1b3c->unk_2f4 = 0; }

extern "C" void func_02034d04(void) { Ns_02034ae8::data_021c1b3c->unk_2f4 = 1; }

Unk_02034ae8::Unk_02034ae8() : unk_1c0(0), unk_1c4((Unk_02035780_Owner *)this), unk_264((u32)this), unk_2a0((u32)this), unk_2b4(this), unk_2d0((u32)this), unk_2e4(this) {
    unk_2f4 = 0;
}

Unk_02034ae8::~Unk_02034ae8() {}

void Unk_02034ae8::func_02034b50() {
    Unk_02036bf8 *p, *end;
    Ns_02034ae8::data_021c1b3c = this;
    end = (Unk_02036bf8 *)&unk_1c0;
    for (p = unk_000; p < end; p++) {
        p->func_02036bf8();
    }
    unk_1c0 = 0;
    unk_1c4.func_02035c38();
    Ns_this::func_02036b88(&unk_24c);
    unk_264.func_020360cc();
    unk_2a0.func_02035f7c();
    unk_2b4.func_0203570c();
    unk_2d0.func_02035514();
    unk_2e4.func_020351b8();
    unk_2f4 = 0;
}

void Unk_02034ae8::func_02034ae8() {
    unk_2e4.func_020351b0();
    Ns_this::func_0203550c(&unk_2d0);
    unk_2b4.func_0203570c();
    unk_2a0.func_02035f74();
    unk_264.func_020360ac();
    Ns_this::func_02036b84(&unk_24c);
    unk_1c4.func_02035c34();
    Ns_02034ae8::data_021c1b3c = 0;
}

void Unk_02034518::func_02034a90() {
    Ns_this::func_020351ac(&unk_2e4);
    Ns_this::func_02035504(&unk_2d0);
    Ns_this::func_02036b7c(&unk_24c);
    unk_264.func_0203608c();
    unk_2a0.func_02035f58();
    func_02034850();
    func_02034518();
    func_02034514();
}

extern "C" void func_020349e0() {
    Unk_02034518 *p;
    Unk_02036bf8 *e, *end;
    data_021c1b3c->unk_2e4.func_0203517c();
    data_021c1b3c->unk_2d0.func_020354d8();
    data_021c1b3c->unk_2b4.func_0203570c();
    data_021c1b3c->unk_2a0.func_02035f38();
    data_021c1b3c->unk_264.func_0203606c();
    Ns_this::func_02036b68(&data_021c1b3c->unk_24c);
    data_021c1b3c->unk_1c4.func_02035bdc();
    e = data_021c1b3c->unk_00;
    end = &data_021c1b3c->unk_00[16];
    for (; e < end; e++) {
        e->func_02036bf8();
    }
    data_021c1b3c->unk_1c0 = 0;
    data_021c1b3c->unk_2f4 = 0;
}

extern "C" void func_0203498c() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.func_0203603c();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.func_02035f18();
    }
}

extern "C" void func_02034938() {
    if (Unk_02034938_IsA()) {
        data_021c1b3c->unk_264.func_0203600c();
    } else if (Unk_02034938_IsB()) {
        data_021c1b3c->unk_2a0.func_02035ed4();
    }
}

extern "C" Unk_02036bf8 *func_02034910() {
    s32 i = data_021c1b3c->func_02034690();
    Unk_02036bf8 *p = NULL;
    if (i >= 0) {
        p = &data_021c1b3c->unk_00[i];
    }
    return p;
}

void Unk_02034518::func_020348e4(Unk_02036ba4 *e) {
    s32 i = func_020346c4(e);
    if (i >= 0) {
        func_020345c4(i);
        unk_00[i].func_02036bbc(e);
    }
}

void Unk_02034518::func_020348bc(s32 v) {
    s32 i = func_02034660(v);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void Unk_02034518::func_02034894(u16 id) {
    s32 i = func_02034630(id);
    if (i >= 0 && i < unk_1c0) {
        unk_00[i].unk_13 = 1;
    }
}

void Unk_02034518::func_02034850() {
    func_020347f0();
    func_0203478c();
    func_02034738();
    unk_1c4.func_02035c0c();
    unk_2b4.func_020356b8();
    Ns_this::func_02034f4c(&unk_2f0);
    func_020346f8();
}

void Unk_02034518::func_020347f0() {
    s32 i = func_02034690();
    Unk_02036bf8 *p;
    if (i >= 0) {
        p = &unk_00[i];
        if (p->unk_04 != 0xffff) {
            BOOL done = FALSE;
            if (i > 0) {
                Unk_02036bf8 *q = func_02034608(i);
                if (q != NULL) {
                    unk_2b4.func_02035730(q->unk_08);
                    done = TRUE;
                }
            }
            if (!done) {
                if (p->unk_13 != 0) {
                    unk_2b4.func_02035730(p->unk_08);
                }
            }
        }
    }
}

void Unk_02034518::func_0203478c() {
    s32 i, j, last;
    for (i = unk_1c0 - 1; i >= 0; i--) {
        if (unk_00[i].unk_13 != 0) {
            last = unk_1c0 - 1;
            for (j = i; j < last; j++) {
                unk_00[j].func_02036bbc(&unk_00[j + 1]);
            }
            unk_00[last].func_02036bf8();
            unk_1c0 = last;
        }
    }
}

void Unk_02034518::func_02034784() { unk_00[0].unk_12 = 0; }
//DEF data_020c8aec
const s32 data_020c8aec[3] = {2, 3, 4};

void Unk_02034518::func_02034738() {
    if (unk_1c0 > 0 && unk_00[0].unk_12 == 0) {
        if (unk_00[0].unk_04 != 0xffff) {
            unk_2b4.func_02035738(unk_00[0].unk_04);
            unk_00[0].unk_14 = 1;
        }
        func_02034574(&Unk_02036ba4::func_02034784);
        unk_00[0].unk_12 = 1;
    }
}

void Unk_02034518::func_020346f8() {
    Unk_02036bf8 *end = &unk_00[unk_1c0];
    Unk_02036bf8 *p;
    for (p = unk_00; p < end; p++) {
        if (p->func_02036ba4()) {
            p->unk_13 = 1;
        }
        if (p != unk_00 && p->unk_11 != 0) {
            p->unk_13 = 1;
        }
    }
}

s32 Unk_02034518::func_020346c4(Unk_02036ba4 *key) {
    s32 r = -1;
    s32 n = unk_1c0;
    if (n < 16) {
        for (r = 0; r < n; r++) {
            if (unk_00[r].unk_00 > key->unk_00) {
                break;
            }
        }
    }
    return r;
}

s32 Unk_02034518::func_02034690() {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        if (unk_00[i].unk_12 != 0) {
            r = i;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_02034660(s32 v) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        s32 c = unk_00[i].unk_00;
        if (c == v) {
            r = i;
            break;
        }
    }
    return r;
}

s32 Unk_02034518::func_02034630(u16 id) {
    s32 r = -1;
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        u16 c = unk_00[i].unk_04;
        if (c == id) {
            r = i;
            break;
        }
    }
    return r;
}

Unk_02036bf8 *Unk_02034518::func_02034608(s32 n) {
    Unk_02036bf8 *r = NULL;
    s32 i;
    for (i = 0; i < n; i++) {
        Unk_02036bf8 *p = &unk_00[i];
        if (p->unk_13 == 0) {
            r = p;
            break;
        }
    }
    return r;
}

void Unk_02034518::func_020345c4(s32 idx) {
    s32 i;
    if (unk_1c0 > 0) {
        for (i = unk_1c0 - 1; i >= idx; i--) {
            unk_00[i + 1].func_02036bbc(&unk_00[i]);
        }
    }
    unk_1c0++;
}

void Unk_02034518::func_02034574(Unk_02034574_Fn fn) {
    s32 i;
    for (i = 0; i < unk_1c0; i++) {
        (((Unk_02036ba4 *)&unk_00[i])->*fn)();
    }
}

void Unk_02034518::func_02034518() {
    if (unk_24c.func_02036aa8()) {
        BOOL ok = TRUE;
        if (!func_020b5364(1)) {
            ok = FALSE;
        }
        if (func_020b5184()) {
            if (func_020b0f0c()) {
                ok = FALSE;
            }
        }
        if (unk_2f4) {
            ok = FALSE;
        }
        if (ok) {
            unk_24c.func_02036a98();
            Melody_StartTrackA();
        }
    }
}

s32 Unk_02034518::func_02034514() {}

Unk_020d8e74 *Unk_020d8e74::func_020344f8() { return new Unk_020d8e74(); }

Unk_020d8e74::Unk_020d8e74() {}

Unk_020d8e74::~Unk_020d8e74() {}

BOOL Unk_020d8e74::vfunc_00() {
    unk_50.func_02034b50();
    return TRUE;
}

BOOL Unk_020d8e74::onExecute() {
    unk_50.func_02034a90();
    return TRUE;
}

BOOL Unk_020d8e74::vfunc_0c() {
    unk_50.func_02034ae8();
    return TRUE;
}

//DEF data_020c8af8
const u16 data_020c8af8[0x18] = {
    0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d,
    0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25,
    0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d,
};

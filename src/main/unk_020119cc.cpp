// mwcc-flags: -str reuse
#include "types.h"

// unk_02011580.cpp
struct HudObjGfx {
    u8 unk_00[0x48];
    s32 unk_48;
    s32 unk_4c;
    u8 unk_50[0x200];
    s32 unk_250;
    u8 unk_254;
    u8 unk_255;

    HudObjGfx();
    ~HudObjGfx();
    BOOL loadChars();
    BOOL loadPalette(s32 mode);
    const char *getCharPath(s32 mode);
    const char *getPalettePath(s32 mode);
    void loadSlideIcon(u32 v);
    void loadLinkIcon(u32 v);
    void loadCameraButton(u32 a, u32 b, u32 c);
    void loadKind(u32 a, u32 b);
    void loadForScene(u32 a);
};

// unk_02011580.cpp
struct Unk_02081d4c {
    u32 unk_00;
    u32 unk_04;
};

struct MsgRequest;

struct Unk_02006d14;

// unk_02011580.cpp
struct Unk_0205dfa4_Prim {
    u8 unk_00[0x9c];
};

// unk_02011580.cpp
struct Unk_0205dfa4_9c {
    u8 unk_00[0x10];
    u32 unk_10;
};

// unk_02011580.cpp
struct Unk_0205dfa4 : Unk_0205dfa4_Prim, Unk_0205dfa4_9c {};

// unk_02011580.cpp
struct HeldToolModel {
    u16 unk_00;
    u8 unk_02[2];
    u8 unk_04[8];
    u8 unk_0c[0x30];
    u8 unk_3c;

    void func_02011b60(u32 v);
    Unk_0205dfa4 *func_02011b7c();
    void setAnimSpeed(u32 v);
    u32 getAnimSpeed();
    void draw(Unk_02006d14 *p);
    void update(Unk_02006d14 *p);
    void release();
    void func_02011c44(u32 a, u32 b);
    void func_02011c64(HeldToolModel *p, u32 a, u32 b);
    void func_02011c9c(u32 a, u32 b);
    void func_02011cbc(HeldToolModel *p, u32 a, u32 b);
    void func_02011cf4(u32 a, u32 b);
    void func_02011d14(HeldToolModel *p, u32 a, u32 b);
    void func_02011d4c(u32 a, u32 b);
    void func_02011d6c(HeldToolModel *p, u32 a, u32 b);
    void playWalkAnim(u32 a, u32 b);
    void playWalkAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playIdleAnim(u32 a, u32 b);
    void playIdleAnimFor(HeldToolModel *p, u32 a, u32 b);
    void playAnim(u32 a, u32 b, u32 c);
    BOOL attach(u32 a, u16 *b, u32 c, u16 d);
    BOOL load(u32 a);
    HeldToolModel *destroy();
    HeldToolModel *init();
};

// unk_02011ec0.cpp
struct Unk_02011f74_Pair {
    s32 a;
    s32 b;
};

// unk_02011ec0.cpp
struct Unk_02011f74_World {
    void *unk_00;
    Unk_02011f74_Pair size;
    Unk_02011f74_Pair unk_0c;
};

// unk_02011ec0.cpp
struct Unk_02011f74_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void *vfunc_64();
};

// unk_02011ec0.cpp
struct Unk_02011f74_Vec {
    s32 x;
    s32 y;
    s32 z;
};

// unk_02011ec0.cpp
struct Unk_02012164 {
    u32 unk_00;
    s32 unk_04;
    u32 unk_08;
    Unk_02011f74_Pair unk_0c;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 pad_24[0x88 - 0x24];
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;

    void func_02012810(Unk_02011f74_Vec *p);
    void func_02012df8();
    s32 func_02012ed0(Unk_02011f74_Vec *p);
    s32 func_02012eb0(s32 mask);
    void func_02013260();
    void func_020132c8();
    s32 func_020130f0();

    BOOL isInBlock(Unk_02011f74_Vec *v);
    BOOL isInBlockT4(Unk_02011f74_Vec *v);
    BOOL isInBlockT2(Unk_02011f74_Vec *v);
    BOOL stepToDoor(Unk_02011f74_Vec *p);
    BOOL isAtDoorT3(Unk_02011f74_Vec *p);
    BOOL isAtDoorT1(Unk_02011f74_Vec *p);
    BOOL stepCheckArrived(Unk_02011f74_Vec *p);
    BOOL stepWander(Unk_02011f74_Vec *p);
    BOOL stepAdjacentUnit(Unk_02011f74_Vec *p);
    BOOL pickAdjacent(Unk_02011f74_Vec *p, Unk_02011f74_World *w);
    BOOL stepAlongPath(Unk_02011f74_Vec *p);
    BOOL advanceOnPath(Unk_02011f74_Vec *p, Unk_02011f74_World *w);
    BOOL stepFollowPath(Unk_02011f74_Vec *p);
    BOOL followPathDir(Unk_02011f74_Vec *p, Unk_02011f74_Pair *lim, Unk_02011f74_World *w);
    BOOL isInAttr200Block(Unk_02011f74_Vec *v);
    Unk_02011f74_Pair VillagerRoute_PickCoastBlock(Unk_02011f74_Vec *v);
    Unk_02011f74_Pair VillagerRoute_PickRandomBlock();
    Unk_02011f74_Pair VillagerRoute_PickOwnHouseBlock(u32 unused, Unk_02011f74_Obj *obj);
    Unk_02011f74_Pair VillagerRoute_PickOwnHouseDoor(u32 unused, Unk_02011f74_Obj *obj);
    Unk_02011f74_Pair VillagerRoute_PickOtherHouseBlock(u32 unused, Unk_02011f74_Obj *obj);
    Unk_02011f74_Pair VillagerRoute_PickOtherHouseDoor(u32 unused, Unk_02011f74_Obj *obj);
    Unk_02011f74_Pair VillagerRoute_PickAttr200Target();
};

// unk_02011ec0.cpp
struct Unk_02011f74_Cell {
    u8 data[0x28];
};

// unk_02012810.cpp
struct Unk_02012810_Vec {
    s32 x, y, z;
};

// unk_02012810.cpp
struct Unk_02012b94_Pair {
    u32 x, z;
};

class Unk_02012810;

// unk_02012810.cpp
typedef s32 (Unk_02012810::*Unk_02012810_Fn)(Unk_02012810_Vec *);

// unk_02012810.cpp
typedef s32 (Unk_02012810::*Unk_02012810_Fn0)();

// unk_02012810.cpp
struct Unk_02012810_Tbl {
    Unk_02012810_Fn unk_00;
    u32 pad[2];
    Unk_02012810_Fn tbl[2][3];
};

// unk_02012810.cpp
struct Unk_02012f04_Obj {
    u32 pad_00[3];
    Unk_02012b94_Pair unk_0c;
};

// unk_02012810.cpp
struct Unk_02012e08_Pos {
    u32 x, z;
    Unk_02012e08_Pos(const Unk_02012b94_Pair &o) : x(o.x), z(o.z) {}
    Unk_02012e08_Pos(const Unk_02012e08_Pos &o) : x(o.x), z(o.z) {}
};

// unk_02012810.cpp
struct Unk_02012cbc_Ent {
    u8 x, z;
    union {
        u8 b;
        struct { u8 lo : 4; u8 hi : 4; } f;
    };
};

// unk_02012810.cpp
struct Unk_020130f0_Dir {
    s32 x, z;
};

// unk_02012810.cpp
class Unk_02012810 {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u8 pad_14[8];
    Unk_02012b94_Pair unk_1c;
    u8 pad_24[4];
    Unk_02012810_Tbl *unk_28;
    u8 unk_2c[90];
    u32 unk_88;
    u32 unk_8c;
    u32 unk_90;
    s32 unk_94;
    s32 unk_98;

    s32 oppositeDirs(s32 v);
    s32 runStep(Unk_02012810_Vec *v);
    u32 getStage();
    s32 findJunction(Unk_02012b94_Pair *p);
    Unk_02012cbc_Ent popJunction(Unk_02012b94_Pair *p);
    void pushJunction(u32 hi, u32 lo, Unk_02012b94_Pair *p);
    s32 scanDir(Unk_02012b94_Pair *out, Unk_02012e08_Pos pos, u32 mask, Unk_02012b94_Pair *lim, Unk_02012f04_Obj *obj);
    u32 pickAdjacentUnit(Unk_02012810_Vec *v, Unk_02012f04_Obj *o);
    s32 scanForPath(Unk_02012810_Vec *cand, Unk_02012b94_Pair *p, Unk_020130f0_Dir *d, s32 limit, Unk_02012b94_Pair *q, s32 flag, Unk_02012f04_Obj *o);
    u32 findNearestPath(Unk_02012b94_Pair *out, Unk_02012810_Vec *pos);
    void planStep(Unk_02012810_Vec *pos);
    s32 countJunctions();
    void clearJunctions();
    s32 firstDir(s32 v);
    s32 isArrived(Unk_02012810_Vec *v);
    void func_020132ec(Unk_02012810_Vec *v);
};

// unk_020131a4.cpp
struct GroundInfo {
    u8 pad_00[0x30];
    s32 unk_30;
    u8 pad_34[0x10];
    GroundInfo(u32 x, u32 y, u32 z, u32 w);
    ~GroundInfo();
};

struct VillagerRoute;

// unk_020131a4.cpp
struct Unk_02013260_Vec { s32 x; s32 y; };

// unk_020131a4.cpp
typedef Unk_02013260_Vec (VillagerRoute::*Unk_02013260_Fn)(u32 a, u32 b);

// unk_020131a4.cpp
struct Unk_02013260_Entry {
    u8 pad_00[8];
    Unk_02013260_Fn unk_08;
    u8 pad_10[0x30];
};

// unk_020131a4.cpp
struct VillagerRoute {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_02013260_Vec unk_0c;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s16 unk_24;
    s16 unk_26;
    Unk_02013260_Entry* unk_28;
    u8 pad_2c[0x88 - 0x2c];
    u32 unk_88;
    u32 unk_8c;
    u32 unk_90;
    u32 unk_94;
    u32 unk_98;
    BOOL isActive();
    void setStepMode(u32 v);
    void checkUnitChanged(u32 v);
    void markUnitUnset();
    void rememberUnit(u32 v);
    void start(u32 a, u32 idx, u32 b, u32 c);
    void reset();
    VillagerRoute* resetTarget();
    void func_02012df8();
    void func_02012810(u32 v);
};

struct Unk_020133cc_Player;

// unk_020131a4.cpp
struct Unk_02013910_Ref { u32 unk_00; u32 unk_04; };

// unk_020131a4.cpp
struct Unk_020133cc_Vec {
    s32 x;
    s32 y;
    s32 z;
    s32 Footstep_GetSeAtPos();
};

// unk_020131a4.cpp
struct Unk_020133cc_Sub {
    u8 pad_00[4];
    s32 func_020197a8();
    s32 func_020197a0();
    s32 func_02019790();
    BOOL func_02014220();
    s32 func_0201ab48();
    BOOL func_020565e8(u32 v);
    void func_0201a174();
    void Snd_SeEmitterPlayAlternate(s32 a, u32 b);
    s32 func_020196b4(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
    void func_02019670(u32 a, u32 b, u32 c, u32 d, u32 e);
    void func_02019520();
};

// unk_020131a4.cpp
struct Unk_020133cc_Player {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual s32 vfunc_80();
    virtual s32 vfunc_84();
    u8 pad_04[0x3c - 4];
    Unk_02013910_Ref* unk_3c;
    u8 pad_40[0x5c - 0x40];
    Unk_020133cc_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0xb0 - 0x90];
    u32 unk_b0;
    u8 pad_b4[0x188 - 0xb4];
    Unk_020133cc_Sub unk_188;
    u8 pad_18c[0x350 - 0x18c];
    Unk_020133cc_Sub unk_350;
    u8 pad_354[0x418 - 0x354];
    Unk_020133cc_Sub unk_418;
    u8 pad_41c[0x484 - 0x41c];
    Unk_020133cc_Vec unk_484;
    Unk_020133cc_Vec unk_490;
    u8 pad_49c[0x4e8 - 0x49c];
    u32 unk_4e8;
    u8 pad_4ec[0x514 - 0x4ec];
    Unk_020133cc_Sub unk_514;
    u8 pad_518[0x564 - 0x518];
    Unk_020133cc_Sub unk_564;
    u8 pad_568[0x618 - 0x568];
    Unk_020133cc_Sub unk_618;
    u8 pad_61c[0x634 - 0x61c];
    Unk_020133cc_Player* unk_634;
    u8 pad_638[0x63e - 0x638];
    s16 unk_63e;
    Unk_020133cc_Player* func_0201bc1c();
    Unk_020133cc_Player* func_02015a7c();
    Unk_020133cc_Player* func_02015710();
    void func_020159cc(u32 a, u32 b);
    void func_02015ab8();
    void func_0203e47c(Unk_020133cc_Player* o);
    s32 getNewEmotionToLearn();
    s16 getLastTaughtEmotion();
    void setLastTaughtEmotion(s16 v);
    void resetLastTaughtEmotion();
};

// unk_020131a4.cpp
struct Unk_02013474_Half { s16 a; s16 b; };

// unk_020131a4.cpp
struct Unk_02013474 {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    void updateFootsteps(Unk_020133cc_Player* p);
    void playFootstepSe(Unk_020133cc_Player* p);
    void disableFootsteps();
    void enableFootsteps();
    void resetFootsteps();
    void func_020135e0();
    void func_020135e4();
    void mainState4(Unk_020133cc_Player* p);
    void state4Step0(Unk_020133cc_Player* p);
    void mainState3(Unk_020133cc_Player* p);
    void setupState3(Unk_020133cc_Player* p);
    void mainState1(Unk_020133cc_Player* p);
    void state1Step2(Unk_020133cc_Player* p);
    void state1Step1(Unk_020133cc_Player* p);
    void state1Step0(Unk_020133cc_Player* p);
    void setupState1(Unk_020133cc_Player* p);
    void func_02013b7c(Unk_020133cc_Player* p);
    void func_02013fe4(Unk_020133cc_Player* p);
    void func_020140d0();
    void func_020141d4(Unk_020133cc_Player* p);
};

// unk_020131a4.cpp
struct Unk_02013778_Vec : Unk_020133cc_Vec {
    Unk_02013778_Vec() {}
};

// unk_020131a4.cpp
typedef void (Unk_02013474::*Unk_02013474_Fn)(Unk_020133cc_Player*);

// unk_020131a4.cpp
struct Unk_020136c0 {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    void setupState4(Unk_020133cc_Player* p);
};

// unk_02013b10.cpp
struct Unk_02013b10_Vec { s32 x, y, z; };

// unk_02013b10.cpp
struct Unk_02013b10_VecT : Unk_02013b10_Vec { Unk_02013b10_VecT() {} Unk_02013b10_VecT(const Unk_02013b10_Vec &o) { x = o.x; y = o.y; z = o.z; } void set(const Unk_02013b10_Vec &o) { x = o.x; y = o.y; z = o.z; } };

// unk_02013b10.cpp
struct Unk_02013b10_Sub {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_020140d0_X;

// unk_02013b10.cpp
struct Unk_020140d0_Out { s32 pad; s32 a; u8 b; };

// unk_02013b10.cpp
struct Unk_02013b10_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74(Unk_020140d0_X *v);
    virtual void vfunc_78(s32 *out);
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual s32 vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_02013b10_Sub *unk_3c;
    u8 pad_40[0x5c - 0x40];
    Unk_02013b10_Vec unk_5c;
};

// unk_02013b10.cpp
struct Unk_02013b10_Ctx : Unk_02013b10_Obj {
    u8 pad_68[0x8e - sizeof(Unk_02013b10_Obj)];
    s16 unk_8e;
    u8 pad_90[0x4e8 - 0x90 ];
    u32 unk_4e8;
    u8 pad_4ec[0x564 - 0x4ec];
    u8 unk_564[0xd0];
    Unk_02013b10_Obj *unk_634;
};

// unk_02013b10.cpp
struct Unk_020140d0_X {
    Unk_020140d0_X();
    ~Unk_020140d0_X();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();
    u8 pad_04[0x18];
};

class NpcTalkCtrl;

class Unk_02014258;

// unk_02013b10.cpp
class NpcTalkCtrl {
public:
    s32 unk_00;
    s16 unk_04;
    s16 unk_06;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;

    void mainState2(Unk_02013b10_Ctx *ctx);
    void state2Step1(Unk_02013b10_Ctx *ctx);
    void state2Step0(Unk_02013b10_Ctx *ctx);
    void setupState2(Unk_02013b10_Ctx *ctx);
    void mainState0(Unk_02013b10_Ctx *ctx);
    void state0Step2(Unk_02013b10_Ctx *ctx);
    void state0Step1(Unk_02013b10_Ctx *ctx);
    void state0Step0(Unk_02013b10_Ctx *ctx);
    void setupState0(Unk_02013b10_Ctx *ctx);
    void endTalk(Unk_02013b10_Ctx *ctx);
    void startTalkMessage(Unk_02013b10_Ctx *ctx);
    void updateSpeakerMouth(Unk_02013b10_Ctx *ctx);
    void update(Unk_02013b10_Ctx *ctx);
    void applyRequest(Unk_02013b10_Ctx *ctx);
    BOOL request(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g);
    BOOL requestState4(u32 c, s32 d, s16 e, u8 g);
    BOOL requestTalk(u8 f, u8 g);
    BOOL requestTurnAndTalk(s16 d, s16 e, u8 g);
    BOOL isBusy();
    void reset();
};

// unk_02013b10.cpp
struct Unk_02014040_Ent {
    void (NpcTalkCtrl::*a)(Unk_02013b10_Ctx *);
    void (NpcTalkCtrl::*b)(Unk_02013b10_Ctx *);
};

// unk_02013b10.cpp
class Unk_02014258 {
public:
    u8 pad_00[0x3c];
    Unk_02013b10_Sub *unk_3c;
    u8 pad_40[0x51 - 0x40];
    u8 unk_51;
    u8 pad_52[0xa0 - 0x52];
    u8 unk_a0;
    u8 pad_a1[7];
    u8 unk_a8;

    BOOL taskSwitchSpeaker();
    BOOL switchSpeakerSwap();
    BOOL switchSpeakerFocus();
    BOOL switchSpeakerClose();
    BOOL requestSwitchSpeaker(u8 v);
};

// unk_02014420.cpp
struct Unk_02014420_Ext {
    virtual u32 vfunc_00();
    virtual u32 vfunc_04();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
    virtual u32 vfunc_10();
    virtual u32 vfunc_14();
    virtual u32 vfunc_18();
    virtual u32 vfunc_1c();
    virtual u32 vfunc_20();
    virtual u32 vfunc_24();
    virtual u32 vfunc_28();
    virtual u32 vfunc_2c();
    virtual u32 vfunc_30();
    virtual u32 vfunc_34();
    virtual u32 vfunc_38();
    virtual u32 vfunc_3c();
    virtual u32 vfunc_40();
    virtual u32 vfunc_44();
    virtual u32 vfunc_48();
    virtual u32 vfunc_4c();
    virtual u32 vfunc_50();
    virtual u32 vfunc_54();
    virtual u32 vfunc_58();
    virtual u32 vfunc_5c();
    virtual u32 vfunc_60();
    virtual u32 vfunc_64();
    virtual u32 vfunc_68();
    virtual u32 vfunc_6c();
    virtual u32 vfunc_70();
    virtual u32 vfunc_74();
    virtual u32 vfunc_78();
    virtual u32 vfunc_7c();
    virtual u32 vfunc_80();
    virtual u32 vfunc_84();
};

// unk_02014420.cpp
struct Unk_02014420_Vec2 {
    s32 x, y;
};

// unk_02014420.cpp
struct Unk_02014420 {
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38(s32 a);
    u8 pad_04[0x38];
    void *unk_3c;
    u32 unk_40;
    u32 unk_44;
    Unk_02014420_Ext *unk_48;
    u8 pad_4c[0x10];
    u8 unk_5c;
    u8 pad_5d[3];
    s32 unk_60;
    u8 pad_64[0x16];
    u16 unk_7a;
    u32 unk_7c;
    u8 pad_80[8];
    Unk_02014420_Vec2 unk_88;
    u8 unk_90;
    u8 pad_91[3];
    u32 unk_94;
    u8 pad_98[9];
    u8 unk_a1;
    u8 pad_a2[6];
    u8 unk_a8;
    u8 unk_a9;

    BOOL func_02015314(s32 cmd);
    void func_020159ac();
    void func_020159b4();
    BOOL func_02014ddc();
    BOOL func_02014d90();
    BOOL taskMelody();
    BOOL melodyStart();
    BOOL melodyWait();
    BOOL melodyEnd();
    BOOL taskEatItem();
    BOOL eatItemStart();
    BOOL eatItemWait();
    BOOL taskItemAct12();
    BOOL itemAct12Start();
    BOOL itemAct12Wait();
    BOOL taskReturnItem();
    BOOL returnItemStart();
    BOOL returnItemWait();
    BOOL taskKeepItem();
    BOOL keepItemStart();
    BOOL keepItemWait();
    BOOL taskItemAct0F();
    BOOL itemAct0FStart();
    BOOL itemAct0FWait();
    BOOL taskTakeItem();
    BOOL takeItemStart();
    BOOL takeItemWait();
    BOOL taskGiveItem();
    BOOL requestPlayRandomMelody();
    BOOL requestPlayMelody(Unk_02014420_Vec2 *p);
    BOOL requestEatItem();
    BOOL requestItemAct12();
    BOOL requestReturnItem();
    BOOL requestKeepItem();
    BOOL requestItemAct0F();
    BOOL requestTakeItem(u16 *a, u32 b, u32 c, u32 d);
};

// unk_02014420.cpp
typedef BOOL (Unk_02014420::*Unk_02014420_Fn)();

struct Unk_020155e4_Ret;

// unk_02014d90.cpp
struct Unk_020155e4_Ret {
    u8 pad_00[0x8e];
    s16 unk_8e;
};

// unk_02014d90.cpp
class Unk_0201bc1c {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
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
    virtual void vfunc_38(s32 flag);
    virtual void vfunc_3c();
};

// unk_02014d90.cpp
struct Unk_02014d90_Node {
      u32 unk_00;
      s32 unk_04;
      s32 unk_08;
      u32 unk_0c;
      u32 unk_10;
      u32 unk_14;
};

// unk_02014d90.cpp
struct Unk_02015344_Params {
      s32 unk_00;
      s32 unk_04;
      s32 unk_08;
      s32 unk_0c;
      s32 unk_10;
      u16 unk_14;
      u16 unk_16;
      s32 unk_18;
      u8 unk_1c;
      u8 pad_1d;
      u8 unk_1e;
      u8 unk_1f;
      u8 unk_20;
      u8 pad_21[0x2c - 0x21];
      u8 unk_2c;
      u8 pad_2d[3];
      s32 unk_30;
      s32 unk_34;
      s32 unk_38;
      u8 unk_3c;
      u8 unk_3d;
      u8 pad_3e[2];
      s32 unk_40;
};

// unk_02014d90.cpp
class Unk_020d7710 {
public:
    virtual void vfunc_00() = 0;
    virtual void vfunc_04();
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
    virtual void vfunc_38(s32 flag);
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
    virtual void vfunc_64_alt();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84(s32 oldState);
    virtual void vfunc_88();

    BOOL giveItemWait();
    BOOL giveItemStart();
    BOOL requestGiveItem(u16 *p, u32 b, u32 c, u32 d);
    BOOL taskCloseWindow();
    BOOL closeWindowWait();
    BOOL closeWindowStart();
    BOOL requestCloseWindow(u32 x);
    BOOL taskReopenWindow();
    BOOL requestReopenWindow();
    BOOL taskSubScene();
    BOOL subSceneWait();
    BOOL subSceneOpen();
    BOOL subSceneCloseWindow();
    void setSubSceneKind2(u32 a, u32 b, u32 c, u8 d);
    void setMenu12Arg(u32 a, u32 b);
    void setSelectionList(u32 a, u32 b, u32 c);
    void setSubSceneKindArg(u32 a, u32 b, u32 c);
    void setSubSceneKind(u32 a, u32 b);
    void setPocketFilter(u32 a, u32 b, u32 c);
    void setPocketItem(u32 a, u32 b, u32 c);
    BOOL openSubScene(s32 x);
    void runTask();
    BOOL isTaskRunning();
    BOOL startTask(s32 x);
    void initSubSceneParams(Unk_02015344_Params *p);
    void resetTasks();
    void func_020143fc(s32 x);
    u8 *func_02015748(u32 x);
    void makePlayerTurnTo(u8 *p);
    void makePlayerLookAt(u8 *p);

      u8 pad_04[0x38];
      Unk_02014d90_Node *unk_3c;
      u32 unk_40;
      u32 unk_44;
      u8 *unk_48;
      u32 unk_4c;
      u8 unk_50;
      u8 pad_51[0x0f];
      s32 unk_60;
      s32 unk_64;
      u32 unk_68;
      u32 unk_6c;
      u32 unk_70;
      u32 unk_74;
      u16 unk_78;
      u16 unk_7a;
      u32 unk_7c;
      u8 unk_80;
      u8 pad_81;
      u8 unk_82;
      u8 unk_83;
      u8 unk_84;
      u8 pad_85[0x0b];
      u8 unk_90;
      u8 pad_91[3];
      u32 unk_94;
      u32 unk_98;
      u32 unk_9c;
      u32 unk_a0;
      u32 unk_a4;
      u8 unk_a8;
      u8 unk_a9;
};

// unk_02014d90.cpp
typedef BOOL (Unk_020d7710::*Unk_020d7710_StateFn)();

void operator delete(void *p);

// unk_020156ac.cpp
struct ItemName { ItemName(u16 *p); ~ItemName(); u32 pad[0x28 / 4]; };

// unk_020156ac.cpp
struct MsgString9B { MsgString9B(); ~MsgString9B(); u32 pad[0x20 / 4]; };

// unk_020156ac.cpp
struct MsgString9C { MsgString9C(); ~MsgString9C(); u32 pad[0x20 / 4]; };

// unk_020156ac.cpp
struct MsgString33 { MsgString33(); ~MsgString33(); u32 pad[0x38 / 4]; };

// unk_020156ac.cpp
struct MsgString25 { MsgString25(); ~MsgString25(); u32 pad[0x2c / 4]; };

// unk_020156ac.cpp
class Unk_02015b8c_Scene {
public:
    virtual ~Unk_02015b8c_Scene();
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
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
};

// unk_020156ac.cpp
class TalkMsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
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
    virtual void onActionTag4();
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
    virtual void vfunc_68();
    virtual s32 vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();

      u32 unk_04[0x38 / 4];
      u32 unk_3c;
      u8 unk_40;
};

// unk_020156ac.cpp
class ActorTalkRequest : public TalkMsgRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
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
    virtual s32 vfunc_6c();
    virtual void vfunc_78() = 0;
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 getSpeakerIndex();
    Unk_02015b8c_Scene *getSpeakerActor();
    Unk_02015b8c_Scene *getActorB(u32 idx);
    Unk_02015b8c_Scene *getActionActor();
    Unk_02015b8c_Scene *getActor(u32 idx);
    void setSlotFromString(u32 a, u32 b, u32 c);
    void setItemNameSlot(u32 a, u32 b, u32 c);
    void setVillagerNameSlot(u32 a, u32 b);
    void setPlayerNameSlot(u32 a, u32 b);
    void setTownNameSlot(u32 a, u32 b);
    void setDaySlot(u32 a, u32 b);
    void setMonthSlot(u32 a, u32 b);
    void setFixedPointSlot(s32 a, u32 b, s32 c);
    void setNumberNamedSlot(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f);
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
    BOOL isItemActionBusy();
    void clearItemActionBusy();
    void setItemActionBusy();
    void playEmotion(u32 a, u32 b);
    s32 getChoiceList();
    void setOwnerActor(Unk_02015b8c_Scene *p);
    Unk_02015b8c_Scene *getPartnerActor();
    void setPartnerActor(Unk_02015b8c_Scene *p);
    u32 func_02015aac();
    void func_02015ab0(u32 a);
    void tick();

      u32 unk_44;
      Unk_02015b8c_Scene *unk_48;
      Unk_02015b8c_Scene *unk_4c;
      u8 unk_50;
      u8 unk_51;
      u8 pad_52[6];
      u32 unk_58;
      u8 unk_5c;
      u32 unk_60;
      u8 pad_64[0x16];
      u16 unk_7a;
};

// unk_020156ac.cpp
class Unk_02015b8c {
public:
    void syncMouthType(Unk_02015b8c_Scene *scene);
    void update(Unk_02015b8c_Scene *scene);
    s32 getTalkGestureEnd(u32 k);
    s32 getTalkGestureStart(u32 k);
    void updateAnimSpeed(Unk_02015b8c_Scene *scene);
    s32 getAnimId(u32 idx);
    BOOL isAnimFinished(Unk_02015b8c_Scene *scene);
    void playAnimKeepFrame(Unk_02015b8c_Scene *scene, u32 c, u32 d, u32 e);
    void setAnimSpeedFixed(u8 v);
    void stopTalkGesture(Unk_02015b8c_Scene *scene);
    void playTalkGesture(Unk_02015b8c_Scene *scene, u32 a, u32 b);
    u32 getTalkGestureData();
    void loadTalkGesture();
    BOOL hasTalkGesture();
    s32 release();

      u32 pad_00[2];
      s32 unk_08;
      s32 unk_0c;
      u8 unk_10;
      s32 unk_14;
      u8 unk_18;
};

// unk_02015fe0.cpp
struct Unk_02015fe0_Vec {
    s32 x, y, z;
};

// unk_02015fe0.cpp
struct Unk_02015fe0_Obj {
    u8 unk_00[0x5c];
    s32 unk_5c;
    u8 unk_60[4];
    s32 unk_64;
    u8 unk_68[0x8e - 0x68];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[0xec - 0x96];
    u8 unk_ec[0x2a0 - 0xec];
    u8 unk_2a0[0xc];
    u8 unk_2ac[0x334 - 0x2ac];
    u8 unk_334[0x1c];
    u8 unk_350[0x3a8 - 0x350];
    u8 unk_3a8[0x418 - 0x3a8];
    u8 unk_418[8];
};

// unk_02015fe0.cpp
class NpcAnimCtrl {
public:
    u8 unk_00[0xc];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    u8 unk_18[4];

    NpcAnimCtrl();
    ~NpcAnimCtrl();
    void playHoldItemPose(Unk_02015fe0_Obj *o, u16 *p, void *q, u16 x);
    void playAnim(Unk_02015fe0_Obj *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode);
    BOOL isPlayingAnim(s32 mode, void *p);
    s32 resolveAnimId(s32 mode, void *p);
    void *getAnimResource(s32 a, s32 b);
    BOOL initForActor(Unk_02015fe0_Obj *o, s32 a);
};

class Unk_02016360;

// unk_02015fe0.cpp
typedef void (Unk_02016360::*Unk_02016360_Fn)(Unk_02015fe0_Obj *);

// unk_02015fe0.cpp
class Unk_02016360 {
public:
    s32 unk_00;
    u8 pad_04[0x94];
    u8 unk_98;

    void mainAct15(Unk_02015fe0_Obj *o);
    void act15Step3(Unk_02015fe0_Obj *o);
    void act15Step2(Unk_02015fe0_Obj *o);
    void act15Step1(Unk_02015fe0_Obj *o);
    void act15Step0(Unk_02015fe0_Obj *o);
};

struct Unk_02016a44_Sub2c;

// unk_02016a44.cpp
struct Unk_02016a44_S334 { u8 pad[0x1c]; };

// unk_02016a44.cpp
struct Unk_02016a44_S350 { u8 pad[0x128]; };

// unk_02016a44.cpp
struct Unk_02016a44_S514 { u8 pad[0x10]; };

// unk_02016a44.cpp
struct Unk_02016a44_S0ec { u8 pad[4]; };

// unk_02016a44.cpp
struct Unk_02006d14_Prim {
    u8 pad_000[0x5c];
    s32 unk_5c;
    u8 pad_060[4];
    s32 unk_64;
    u8 pad_068[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_090[0xec - 0x90];
};
struct MsgRequest {
    Unk_02016a44_S0ec unk_ec;
};
class Unk_02006d14 : public Unk_02006d14_Prim, public MsgRequest {
public:
    u8 pad_0f0[0x198 - 0xf0];
    u32 unk_198;
    u8 pad_19c[0x334 - 0x19c];
    Unk_02016a44_S334 unk_334;
    Unk_02016a44_S350 unk_350;
    s32 unk_478;
    s32 unk_47c;
    s32 unk_480;
    u8 pad_484[0x514 - 0x484];
    Unk_02016a44_S514 unk_514;
    u8 pad_524[0x628 - 0x524];
    void *unk_628;
};

// unk_02016a44.cpp
struct Unk_02016a44_Sub { u8 pad[0x22]; u16 unk_22; };

// unk_02016a44.cpp
struct Unk_02016a44_Sub2c { u8 pad[0x22]; u16 unk_22; u8 pad2[0x94 - 0x2c - 0x24]; };

// unk_02016a44.cpp
class Unk_02016a44 {
public:
      s32 unk_00;
      u8 unk_04;
      u8 unk_05;
      u8 unk_06[8];
      u8 pad_0e[6];
      s32 unk_14;
      u8 pad_18[0x28 - 0x18];
      s32 unk_28;
      Unk_02016a44_Sub2c unk_2c;
      s32 unk_94;
      u8 unk_98;
      u8 pad_99[0xac - 0x99];
      s32 unk_ac;

    BOOL setupAct15(Unk_02006d14 *o);
    BOOL postAct14(Unk_02006d14 *o);
    BOOL setupAct14(Unk_02006d14 *o);
    s32 requestAct14(s32 a, u16 *p);
    void postAct13(Unk_02006d14 *o);
    void mainAct13(Unk_02006d14 *o);
    void act13Step0(Unk_02006d14 *o);
    BOOL setupAct13(Unk_02006d14 *o);
    void mainAct12(Unk_02006d14 *o);
    void act12Step1();
    void act12Step0();
    BOOL setupAct12(Unk_02006d14 *o);
    void mainAct11(Unk_02006d14 *o);
    void act11Step2();
    void act11Step1(Unk_02006d14 *o);
    void act11Step0(Unk_02006d14 *o);
    BOOL setupAct11(Unk_02006d14 *o);
    void postAct10(Unk_02006d14 *o);
    BOOL setupAct10(Unk_02006d14 *o);
    void postAct0F(Unk_02006d14 *o);
    BOOL setupAct0F(Unk_02006d14 *o);
    void postAct0E();
    void mainAct0E(Unk_02006d14 *o);

    void func_02017d74(Unk_02006d14 *o);
    void act0EStep01(Unk_02006d14 *o);
    void act0EStep02(Unk_02006d14 *o);
    void act0EStep03(Unk_02006d14 *o);
    void act0EStep04(Unk_02006d14 *o);
    void act0EStep05(Unk_02006d14 *o);
    void act0EStep06(Unk_02006d14 *o);
    void act0EStep07(Unk_02006d14 *o);
    void act0EStep08(Unk_02006d14 *o);
    void act0EStep09(Unk_02006d14 *o);
    void act0EStep10(Unk_02006d14 *o);
    void act0EStep11(Unk_02006d14 *o);
    void act0EStep12(Unk_02006d14 *o);
    void act0EStep13(Unk_02006d14 *o);
    void act0EStep14(Unk_02006d14 *o);
    void act0EStep15(Unk_02006d14 *o);
    void act0EStep16(Unk_02006d14 *o);
    void act0EStep17(Unk_02006d14 *o);
    void act0EStep18(Unk_02006d14 *o);
    void act0EStep19(Unk_02006d14 *o);

    Unk_02016a44_Sub *func_0201978c();
    void func_02019498(s32 v);
    void func_02019718(s32 a, s32 b);

    void NpcAction_PackItem(void *a, u16 *b);
    BOOL waitItemAnimEnd(Unk_02006d14 *o, u16 *p, u32 a, u32 b);
};

// unk_0201745c.cpp
struct Unk_0201745c_State {
    u8 pad_00[0x98];
    u8 unk_98;
    u8 pad_99[0xac - 0x99];
    s32 unk_ac;
};

// unk_0201745c.cpp
struct Unk_0201745c_Ctx {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84();
    virtual BOOL vf88(void *a, u32 b);
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x190 - 0x90];
    u32 unk_190;
    u8 pad_194[0x334 - 0x194];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x478 - 0x350];
    s32 unk_478;
    s32 unk_47c;
    s32 unk_480;
    u8 pad_484[0x628 - 0x484];
    void *unk_628;
};

// unk_0201745c.cpp
typedef Unk_0201745c_State S;

// unk_0201745c.cpp
typedef Unk_0201745c_Ctx C_745c;

// unk_02017d74.cpp
struct Unk_02017d74_Data {
    s32 unk_00;
    u8 pad_04[0x1c - 4];
    u16 unk_1c;
    u16 unk_1e;
    u8 unk_20;
    u8 pad_21;
    u16 unk_22;
    s32 unk_24;
    s32 unk_28;
    u8 unk_2c;
    u8 pad_2d[3];
    s32 unk_30;
};

// unk_02017d74.cpp
struct Unk_02017d74_Ctx {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84();
    virtual void vf88();
    virtual void vf8c();
    virtual void vf90();
    virtual u32 vf94();
    virtual u32 vf98();
    u8 pad_04[0x18c - 4];
    u32 unk_18c;
    u32 unk_190;
    u8 pad_194[0x19c - 0x194];
    u8 unk_19c;
    u8 pad_19d[0x334 - 0x19d];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x3aa - 0x350];
    u8 unk_3aa[0x514 - 0x3aa];
    u8 unk_514[0x628 - 0x514];
    void *unk_628;
};

// unk_02017d74.cpp
struct Unk_02017d74_Buf {
    s32 a;
    s32 b;
    s32 c;
};

// unk_02017d74.cpp
typedef Unk_02017d74_Ctx C_7d74;

// unk_02017d74.cpp
struct Unk_02017d74 {
    u8 pad_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0x14 - 6];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    u8 pad_20[0x98 - 0x20];
    u8 unk_98;

    void act0EStep00(C_7d74 *c);
    BOOL setupAct0E(C_7d74 *c);
    void postAct0D(C_7d74 *c);
    void mainAct0D(C_7d74 *c);
    void act0DStep4(C_7d74 *c);
    void act0DStep3(C_7d74 *c);
    void act0DStep2(C_7d74 *c);
    void act0DStep1(C_7d74 *c);
    void act0DStep0(C_7d74 *c);
    BOOL setupAct0D(C_7d74 *c);
    void postAct0C(C_7d74 *c);
    BOOL setupAct0C(C_7d74 *c);
    void postAct0B(C_7d74 *c);
    void mainAct0B(C_7d74 *c);
    void act0BStep0(C_7d74 *c);
    BOOL setupAct0B(C_7d74 *c);
    void postAct0A(C_7d74 *c);
    void mainAct0A(C_7d74 *c);
    void act0AStep0(C_7d74 *c);
};

// unk_02017d74.cpp
typedef void (Unk_02017d74::*Unk_02017d74_Fn)(C_7d74 *);

struct Unk_02018698;

// unk_02018698.cpp
struct Unk_02018698_Ctx {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c();
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54();
    virtual void vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70();
    virtual void vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84();
    virtual void vf88();
    virtual void vf8c();
    virtual void vf90();
    virtual void vf94();
    virtual void vf98();
    virtual u32 vf9c();
    u8 pad_04[0x8e - 4];
    s16 unk_8e;
    u8 pad_90[0x98 - 0x90];
    u32 unk_98;
    u8 pad_9c[0x190 - 0x9c];
    u32 unk_190;
    u8 pad_194[0x2ac - 0x194];
    u8 unk_2ac[0x334 - 0x2ac];
    u8 unk_334[0x350 - 0x334];
    u8 unk_350[0x3aa - 0x350];
    u8 unk_3aa[0x420 - 0x3aa];
    u8 unk_420[0x445 - 0x420];
    u8 unk_445;
    u8 pad_446[0x514 - 0x446];
    u8 unk_514[0x628 - 0x514];
    void *unk_628;
};

// unk_02018698.cpp
struct Unk_02018698_Data {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s16 unk_18;
    s16 unk_1a;
    u16 unk_1c;
    u8 pad_1e[3];
    u8 unk_21;
};

// unk_02018698.cpp
struct Unk_02018698_Ent {
    s32 unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[3];
};

// unk_02018698.cpp
struct Unk_02018698_Rec {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0c;
};

// unk_02018698.cpp
struct Unk_02018698_Vec {
    s32 x, y, z;
    Unk_02018698_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

// unk_02018698.cpp
typedef Unk_02018698_Ctx C_8698;

// unk_02018698.cpp
typedef Unk_02018698_Data WindowLight;

// unk_02018698.cpp
typedef Unk_02018698_Vec V;

// unk_02018698.cpp
struct Unk_02018698 {
    u32 pad_00;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0x0e];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    u8 pad_20[0x94 - 0x20];
    u32 unk_94;
    u8 unk_98;
    u8 pad_99[3];
    s32 unk_9c;
    s16 unk_a0;
    u8 pad_a2[2];
    Unk_02018698_Rec *unk_a4;
    u8 unk_a8;
    u8 unk_a9;
    u8 pad_aa[6];
    s32 unk_b0;

    s32 setupAct0A(C_8698 *c);
    void mainAct09(C_8698 *c);
    s32 setupAct09(C_8698 *c);
    void mainAct08(C_8698 *c);
    s32 setupAct08(C_8698 *c);
    void postAct07(C_8698 *c);
    void mainAct07(C_8698 *c);
    void act07Step0(C_8698 *c);
    s32 setupAct07(C_8698 *c);
    s32 setupAct06(C_8698 *c);
    s32 setupAct05(C_8698 *c);
    void mainAct05(C_8698 *c);
    void act05Step1(C_8698 *c);
    void act05Step0(C_8698 *c);
    s32 setupMoveTurnFirst(C_8698 *c, s32 a, s16 b);
    void mainAct04(C_8698 *c);
    void act04Step1(C_8698 *c);
    void act04Step0(C_8698 *c);
    s32 setupAct04(C_8698 *c);
    void mainAct03(C_8698 *c);
    s32 setupAct03(C_8698 *c);
};

// unk_02019020.cpp
struct NpcActionParams {
    s32 unk_00, unk_04, unk_08, unk_0c, unk_10, unk_14;
    s16 unk_18, unk_1a;
    u16 unk_1c, unk_1e;
    u8 unk_20, unk_21;
    u16 unk_22;
    s32 unk_24, unk_28;
    u8 unk_2c;
    s32 unk_30;
    void *clear();
    void copyFrom(NpcActionParams *src);
};

// unk_02019020.cpp
struct Unk_02019858_Vec { s32 x, y, z; Unk_02019858_Vec(s32 a, s32 b, s32 c) { x = a; y = b; z = c; } };

struct NpcActionCtrl;

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnA)(u8 *owner);

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnB)(u8 *arg);

// unk_02019020.cpp
typedef void (NpcActionCtrl::*Unk_02019858_FnC)(u8 *arg);

// unk_02019020.cpp
struct Unk_02019858_Entry {
    Unk_02019858_FnA a;
    Unk_02019858_FnB b;
    Unk_02019858_FnC c;
};

// unk_02019020.cpp
struct NpcActionCtrl {
    NpcActionCtrl();
    void mainAct02(u8 *o);
    s32 setupAct02(u8 *o);
    void mainAct01(u8 *o);
    s32 setupAct01(u8 *o);
    void mainAct00();
    s32 setupAct00(u8 *o);
    void postUpdate(u8 *arg);
    void update(u8 *arg);
    void func_02019468_dummy();
    void setActionDone(s32 v);
    void applyPendingAction(u8 *arg);
    void clearTalking();
    void setTalking();
    void requestTalkingOff();
    void requestTalkingOn();
    BOOL requestTakeItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL requestGiveItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2);
    BOOL requestPlayAnim(s32 a, s32 b, u32 c, u16 s0, u16 s1);
    void requestStand(u32 a, u16 b);
    BOOL requestEmotion(s32 a, u8 b, u16 c);
    BOOL requestAct07(s32 a, s32 b, s32 c, s32 d, u16 e);
    BOOL requestAction(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6);
    void setPendingAction(s32 a, s32 b);
    void clearPendingAction();
    void changeAction(u8 *o, s32 idx, s32 state);
    NpcActionParams *getCurParams();
    BOOL isActionDone();
    u8 getEmotionId();
    s32 getAction();
    void startAction(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4);
    void func_02019854();

    u8 unk_00[4];
    u8 unk_04;
    u8 unk_05;
    u8 unk_06[0xe];
    s32 unk_14;
    u8 unk_18;
    u8 unk_19;
    u8 pad_1a[2];
    s32 unk_1c;
    Unk_02019858_Entry *unk_20;
    s32 unk_24;
    s32 unk_28;
    NpcActionParams unk_2c;
    NpcActionParams unk_60;
    s32 unk_94;
    u8 unk_98;
    u8 unk_99;
    u8 pad_9a[2];
    s32 unk_9c;
    u16 unk_a0;
    u8 pad_a2[2];
    s32 unk_a4;
    u8 unk_a8;
    u8 unk_a9;
    u8 pad_aa[2];
    s32 unk_ac;
    s32 unk_b0;
};

// unk_02019998.cpp
struct BlinkTimer { BlinkTimer(); ~BlinkTimer(); u32 unk_00; };

// unk_02019998.cpp
struct NpcTexPatHeapHandle { NpcTexPatHeapHandle(); ~NpcTexPatHeapHandle(); u32 pad[2]; };

// unk_02019998.cpp
struct NpcTexPatBufRefHandle { NpcTexPatBufRefHandle(); ~NpcTexPatBufRefHandle(); u32 pad[2]; };

// unk_02019998.cpp
struct NpcFaceAnimHandle { NpcFaceAnimHandle(); ~NpcFaceAnimHandle(); u32 pad[2]; };

// unk_02019998.cpp
struct MatTexPatAnim { MatTexPatAnim(); ~MatTexPatAnim(); u32 unk_00; u32 unk_04; u32 unk_08; u32 pad[0x20 / 4]; };

// unk_02019998.cpp
struct Unk_02019cac_Owner {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void *vfunc_6c();
    u8 pad[0x148 - 4];
    s32 unk_148;
};

// unk_02019998.cpp
struct NpcFaceAnim : BlinkTimer {
    NpcTexPatHeapHandle unk_04;
    NpcTexPatBufRefHandle unk_0c;
    NpcFaceAnimHandle unk_14;
    MatTexPatAnim unk_1c;
    MatTexPatAnim unk_48;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 unk_84;

    NpcFaceAnim();
    ~NpcFaceAnim();
    void release();
    void func_020199c8();
    void resumeMouthMaterial();
    BOOL setMouthTexture(u32 a);
    BOOL setMaterialTex(void *m, void *q, u32 r);
    void setFaceAnimsFrom(void *a, s32 b, s32 c);
    void setFaceAnims(s32 t, s32 u, s32 x, s32 mode);
    void restoreMouthAnim();
    void startTalkMouth(s32 i);
    void setMouthAnim(s32 v, u32 w);
    BOOL isMouthCycleDone();
    void randomizeTalkMouth();
    BOOL func_02019c50(s32 a, s32 b, s32 c);
    s32 func_02019c70(s32 v);
    void pickTalkMouthVariant();
    BOOL isTalkMouthAnim(s32 v);
    BOOL load(Unk_02019cac_Owner *o);
    s32 getMouthAnim();
    BOOL isLoaded();
    void update(u8 *o);
};

// unk_02019998.cpp
struct Unk_02019e2c_Slot {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
};

// unk_02019998.cpp
struct Unk_02019e2c_Entry {
    s32 unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
};

// unk_02019998.cpp
struct NpcEmotionFx {
    s32 unk_00[4];
    Unk_02019e2c_Slot unk_10[2];
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    u8 unk_27;

    void stop();
    void update(void *a, s16 b, s32 c, u16 d);
    void killEffects();
    void updateSlot(void *a, s16 b, s32 c, u16 d, s32 j);
    void stopSound();
    void keepSound();
    void playSound(Unk_02019e2c_Slot *s);
    void startEntry(Unk_02019e2c_Entry *tbl, s32 idx);
    void setSlots(void *a, u32 b, s32 c);
    s32 findFreeHandle();
    void copySlots(void *dst, void *src, s32 n);
    void clearSlots(void *p, s32 n);
    void reset();
};

// unk_02019998.cpp
struct NpcSpeechState {
    u8 unk_00;
    s32 unk_04;

    NpcSpeechState();
    ~NpcSpeechState();
    s32 getMouthType();
    void setMouthType(s32 v);
    BOOL isSpeaking();
    void stopSpeaking();
    void startSpeaking();
    void reset();
};

struct Unk_0201a1e0_Target;

struct Unk_0201a1e0_Base;

// unk_02019998.cpp
typedef void (Unk_0201a1e0_Target::*Unk_0201a1e0_Fn)(Unk_0201a1e0_Base *);

// unk_02019998.cpp
struct Unk_0201a1e0_Target { u32 pad; };

// unk_02019998.cpp
struct Unk_0201a1e0_Base {
    u8 pad[0x3b0];
    Unk_0201a1e0_Target unk_3b0;
};

// unk_02019998.cpp
struct Unk_0201a25c_Src {
    u8 pad_00[0x5c];
    s32 unk_5c;
    u8 pad_60[0x8c - 0x60];
    s16 unk_8c;
    s16 unk_8e;
};

// unk_02019998.cpp
struct Unk_0201a13c {
    u8 unk_00;
    u8 pad_01[7];
    u8 unk_08[0x10];
    u8 unk_18;
    u8 pad_19;
    s16 unk_1a;
    s16 unk_1c;
    s16 unk_1e;
    u8 pad_20[2];
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    u8 unk_2a;
    u8 pad_2b[0x5c - 0x2b];
    s32 unk_5c;
    u8 unk_60;
    u8 pad_61[0x7c - 0x61];

    Unk_0201a13c();
    ~Unk_0201a13c();
    BOOL isOnTarget();
    BOOL isWithinYawLimit(s32 v);
    void update(Unk_0201a1e0_Base *base);
    void approachManualAngles();
    void lookAtPoint(Unk_0201a25c_Src *o);
    s32 func_0201a53c(void *a, void *b, s32 c);
    s32 func_0201a578(void *a, void *b, s32 c);
    s32 func_0201a5b8(void *a, void *b, s32 c);
    BOOL NpcLookAt_GetHeadPos(void *a);
};

// unk_0201a334.cpp
struct Unk_0201a334_Vec3 { s32 x, y, z; };

// unk_0201a334.cpp
struct Unk_0201a334_Scene {
    u8 pad_00[0x5c];
    Unk_0201a334_Vec3 unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x94 - 0x90];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
};

// unk_0201a334.cpp
struct Unk_0201a334_Prim { u8 unk_00[0xec]; };

// unk_0201a334.cpp
struct Unk_0201a734_Obj {
    u8 pad_00[0x50];
    s32 x, y, z;
};

// unk_0201a334.cpp
struct Unk_0201ab4c_Ent {
    s32 unk_00;
    s16 unk_04;
    s16 pad_06;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
};

class NpcLookAt;

class NpcMoveCtrl;

class NpcObstacleProbe;

// unk_0201a334.cpp
class NpcLookAt {
public:
    u8 unk_00;
    u8 pad_01[3];
    Unk_0201a734_Obj *unk_04;
    Unk_0201a334_Vec3 unk_08;
    s32 unk_14;
    u8 unk_18;
    u8 pad_19;
    s16 unk_1a;
    s16 unk_1c;
    s16 unk_1e;
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    u8 unk_2a;
    u8 pad_2b[0x5c - 0x2b];
    s32 unk_5c;
    u8 unk_60;
    u8 pad_61[3];
    s32 unk_64;

    void lookAtTargetActor(Unk_0201a334_Scene *scene);
    void lookAtLocalPlayer(Unk_0201a334_Scene *scene);
    void lookAtTargetPlayer(Unk_0201a334_Scene *scene);
    void lookAtPlayer(Unk_0201a334_Scene *scene, s32 h, s32 limit, u8 flag);
    void relax();
    void lookAtActor(Unk_0201a334_Scene *scene, Unk_0201a334_Scene *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag);
    s32 clampPitch(s32 v);
    s32 calcClampedPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 clampYaw(s32 v);
    s32 calcClampedYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    s32 calcYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c);
    BOOL canSeeTarget(Unk_0201a334_Scene *scene);
    void setManualAngles(s32 pri, s16 a, s16 b, s16 c, s16 d);
    void setTarget(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag);
    void setTargetPos(Unk_0201a334_Vec3 *v);
    void setPitchLimit(s16 v);
    void disable();
    void clearTargetActor();
    void func_0201a794();
    u8 getObstacleBits();
};

// unk_0201a334.cpp
class NpcObstacleProbe {
public:
    u8 unk_00;

    void probe(Unk_0201a334_Scene *scene);
    void clear();
    void func_0201a8bc();
};

// unk_0201a334.cpp
class NpcMoveCtrl {
public:
    Unk_0201a334_Vec3 unk_00;
    Unk_0201a334_Vec3 unk_0c[3];
    s32 unk_30;
    s16 unk_34;
    s16 unk_36;
    Unk_0201a334_Vec3 unk_38;
    Unk_0201a334_Vec3 unk_44;
    s32 unk_50;
    u8 unk_54;
    u8 unk_55;

    void storeHeadMtx(Unk_02006d14 *p);
    void setTurnMode(u8 v);
    void func_0201a8cc();
    void setSpeedPreset(s32 idx, s32 x, s32 y, s32 z);
    void resetDestination();
    s32 hasNextLeg();
    Unk_0201a334_Vec3 *getDestination();
    void setDestination(Unk_0201a334_Vec3 *v);
    s32 getTurnSpeed();
    s32 getTargetAngle();
    void setTargetAngle(s16 v);
    BOOL hasArrived(Unk_0201a334_Scene *scene, s32 which);
    Unk_0201a334_Vec3 *getDestinationB();
    void setWaypoint(Unk_0201a334_Vec3 *v);
    void updateTurn(Unk_0201a334_Scene *scene);
    s32 stepAngle(s16 *p, s16 target, s16 step, u8 mode);
    void aimAtDestination(Unk_0201a334_Scene *scene);
    s32 getMoveMode();
    void setMoveMode(Unk_0201a334_Scene *scene, s32 mode, s16 ang, u16 extra);
    void applyMovement(Unk_0201a334_Scene *scene);
};

// unk_0201ac80.cpp
struct Unk_020d77a4_Vec3 { s32 x, y, z; };

// unk_0201ac80.cpp
struct Unk_0201b2b8_T30 { u32 a[12]; };

// unk_0201ac80.cpp
struct Unk_0201b2b8_Bits { u32 lo : 12; u32 mid : 16; u32 hi : 4; };

// unk_0201ac80.cpp
struct Unk_0201b2b8_S { u8 b0; u8 pad; s16 h2; s16 h4; u16 h6; u16 h8; u16 ha; };

// unk_0201ac80.cpp
struct Unk_0201b138_Buf { u8 pad[0x24]; Unk_020d77a4_Vec3 v; };

// unk_0201ac80.cpp
struct Unk_0201ac88 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c[0x24];
    s32 unk_30;
    u8 pad_34[4];
    s32 unk_38;
    s32 unk_3c;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    u8 pad_50[4];
    u8 unk_54;
    u8 unk_55;

    void reset();
    void func_0201acc8();
    Unk_0201ac88 *func_0201accc();
};

// unk_0201ac80.cpp
struct Unk_0201acf8 {
    u16 unk_00;
    u16 unk_02;

    void func_0201acf8(u16 v);
    s32 func_0201acfc();
    void func_0201ad18();
};

// unk_0201ac80.cpp
struct NpcMoveAnimSet {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;

    s32 getRunAnim();
    s32 getWalkAnim();
    s32 getStandAnim();
    void setRunAnim(s32 v);
    void setWalkAnim(s32 v);
    void setStandAnim(s32 v);
    void func_0201ad38();
    void func_0201ad3c();
};

// unk_0201ac80.cpp
typedef Unk_020d77a4_Vec3 V3;

// unk_0201b690.cpp
struct Unk_020d77a4_Vec {
    s32 x, y, z;
};

// unk_0201b690.cpp
struct Unk_020d77a4_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

// unk_0201b690.cpp
class ProcBase {
public:
    static void operator delete(void *ptr);
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 x);
    virtual BOOL vfunc_0c();
    virtual void preDelete();
    virtual void vfunc_14();
    virtual BOOL onExecute();
    virtual void preExecute();
    virtual void vfunc_20();
    virtual BOOL onDraw();
    virtual void preDraw();
    virtual void postDraw();
    virtual void vfunc_30();
    virtual void createHeapFitted();
    virtual void createHeap();
    virtual void vfunc_3c();
    virtual ~ProcBase();
};
class Actor : public ProcBase {
public:
    virtual void vfunc_14();
    virtual void vfunc_20();
    virtual void preDraw();
    virtual void postDraw();
    virtual ~Actor();
};
class Character : public Actor {
public:
    virtual void preDelete();
    virtual void preExecute();
    virtual ~Character();
    virtual void vfunc_48(void *p);
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *out);

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0x5c - 0x0c];
    /* 0x5c */ Unk_020d77a4_Vec unk_5c;
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[4];
    /* 0x94 */ s16 unk_94;
    /* 0x96 */ u8 pad_96[6];
    /* 0x9c */ s32 unk_9c;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 pad_a4[0xea - 0xa4];
    /* 0xea */ u16 unk_ea;
};
class NpcActor : public Character {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 x);
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual void vfunc_30();
    virtual ~NpcActor();
    virtual void vfunc_4c(s32 v);
    virtual BOOL vfunc_5c(Unk_020d77a4_Vec3 *out);
    virtual s32 onToolHit();
    virtual s32 vfunc_64();
    virtual BOOL updateAct();
    virtual void getTexturePath() = 0;
    virtual s32 getModelPath() = 0;
    virtual void getName() = 0;
    virtual s32 getGender() = 0;
    virtual void canPlayTalkMelody() = 0;
    virtual void onTalkMelodyPlayed() = 0;
    virtual void getSpecies() = 0;
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual s32 getAct0BAnimA();
    virtual s32 getAct0BAnimB();
    virtual u16 vfunc_9c();
    virtual s32 getTeachableEmotion();
    virtual void addMood();

    u8 isUpdating();
    BOOL netReadAction(s32 *a, s32 *b, u8 *c);
    BOOL netReadPosition(s32 *a, u8 *b);
    void netSendState(u32 a, ...);
    void setNetUserBytes(void *dst, s32 n);
    BOOL getNetUserBytes(u8 *src, u32 n);
    BOOL netIsTalkLocked();
    s32 func_0201b9e8(s32 a, s32 b);
    void netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...);
    s32 netSetSlots(s32 a, s32 b, s32 c);
    BOOL isNetOwner();
    s32 findAvoidPos(Unk_020d77a4_Vec *out);
    BOOL getFreeOffsetPos(Unk_020d77a4_Vec *out, void *p);
    s32 getSpeakerGender();
    Unk_0201bc1c *getTalkRequest();
    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 id);
    s16 getRelativeAngleTo(NpcActor *other);
    s32 getAngleToPlayer(u32 id);
    s32 getAngleTo(NpcActor *other);
    BOOL isPlayerNear(s32 n, u32 id);
    BOOL isNear(NpcActor *other, s32 n);
    s32 getDistanceToPlayer(u32 id);
    s32 getDistanceTo(NpcActor *other);
    BOOL isPosInFront(s16 *out, Unk_020d77a4_Vec *pos);
    void setCollisionRadius(s32 v);
    void setNpcHandle(u16 *p);
    void setNpcIndex(u16 v);
    u16 getNpcIndex();
    void releaseModel();
    BOOL loadModel();

    /* 0xec */ u8 unk_ec[0x2a0 - 0xec];
    /* 0x2a0 */ u8 pad_2a0[0x350 - 0x2a0];
    /* 0x350 */ u8 unk_350[0x3a8 - 0x350];
    /* 0x3a8 */ u8 unk_3a8[0x3b0 - 0x3a8];
    /* 0x3b0 */ u8 unk_3b0;
    /* 0x3b1 */ u8 pad_3b1[0x3ca - 0x3b1];
    /* 0x3ca */ s16 unk_3ca;
    /* 0x3cc */ u8 pad_3cc[0x3d2 - 0x3cc];
    /* 0x3d2 */ s16 unk_3d2;
    /* 0x3d4 */ u8 pad_3d4[0x418 - 0x3d4];
    /* 0x418 */ u8 unk_418[0x420 - 0x418];
    /* 0x420 */ u8 unk_420[0x438 - 0x420];
    /* 0x438 */ void *unk_438;
    /* 0x43c */ u8 pad_43c[0x447 - 0x43c];
    /* 0x447 */ u8 unk_447;
    /* 0x448 */ u8 pad_448[0x4e8 - 0x448];
    /* 0x4e8 */ u32 unk_4e8;
    /* 0x4ec */ u8 pad_4ec[0x510 - 0x4ec];
    /* 0x510 */ u8 unk_510;
    /* 0x511 */ u8 unk_511;
    /* 0x512 */ u8 pad_512[2];
    /* 0x514 */ u8 unk_514[0x558 - 0x514];
    /* 0x558 */ u8 unk_558[0x560 - 0x558];
    /* 0x560 */ u8 unk_560;
    /* 0x561 */ u8 unk_561;
    /* 0x562 */ u8 unk_562;
    /* 0x563 */ u8 unk_563;
    /* 0x564 */ u8 unk_564[4];
    /* 0x568 */ u8 unk_568[0x618 - 0x568];
    /* 0x618 */ u8 unk_618[0x628 - 0x618];
    /* 0x628 */ s32 unk_628;
    /* 0x62c */ u8 unk_62c;
    /* 0x62d */ u8 unk_62d[3];
    /* 0x630 */ u8 pad_630[2];
    /* 0x632 */ u16 unk_632;
    /* 0x634 */ Unk_0201bc1c *unk_634;
    /* 0x638 */ s32 unk_638;
};

// unk_0201b690.cpp
struct Unk_0201be34_Mtx {
    s32 m[9];
};

// unk_0201b690.cpp
struct Unk_0201be44_Hdr {
    u8 unk_00;
    u8 unk_01;
};

// unk_0201b690.cpp
struct Unk_0201be44_Owner {
    u8 pad_00[0x2c];
    NpcActor *unk_2c;
};

// unk_0201b690.cpp
struct Unk_0201be44_Dst {
    u8 pad_00[0x28];
    Unk_0201be34_Mtx unk_28;
    Unk_020d77a4_Vec unk_4c;
};

class Unk_0201be34;

// unk_0201b690.cpp
typedef void (*Unk_0201be34_StateFn)(Unk_0201be34 *);

// unk_0201b690.cpp
class Unk_0201be34 {
public:

      Unk_0201be44_Hdr *unk_00;
      Unk_0201be44_Owner *unk_04;
      u8 pad_08[0x24 - 0x08];
      Unk_0201be34_StateFn unk_24;
      u8 pad_28[0x92 - 0x28];
      u8 unk_92;
      u8 pad_93[0xb4 - 0x93];
      Unk_0201be44_Dst *unk_b4;
      u8 pad_b8[0xd4 - 0xb8];
      u8 *unk_d4;
};


struct Unk_020135e4 : Unk_02013474 { Unk_020135e4(); };
struct Unk_0201a794 : NpcLookAt { Unk_0201a794(); };
struct Unk_0201a8bc : NpcObstacleProbe { Unk_0201a8bc(); };
struct Unk_0201accc : Unk_0201ac88 { Unk_0201accc(); };
struct Unk_0201ad18 : Unk_0201acf8 { Unk_0201ad18(); };
struct Unk_0201ad3c : NpcMoveAnimSet { Unk_0201ad3c(); };
// the two-element vector tables sNpcAvoidOffsets / sNpcObstacleProbeOffsets (constructed and registered by __sinit)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    ~FxVec3();
};
// the direction table sRouteDirs (filled by __sinit)
struct Unk_021be028_Dir {
    s32 x, z;
    Unk_021be028_Dir(s32 a, s32 b) { x = a; z = b; }
};
struct Unk_020c6e60_E {
    u32 unk_00;
    const u16 *unk_04;
    u32 unk_08;
    u32 unk_0c;
    const u16 *unk_10;
    u32 unk_14;
    u32 unk_18;
};
typedef void (NpcTalkCtrl::*Unk_02014040_Fn)(Unk_02013b10_Ctx *);
extern u32 data_020d6f54[];
namespace nDtor {
extern "C" {
void NpcTalkCtrl_Destroy(void *p);
void _ZN13NpcActionCtrl13func_02019854Ev(void *p);
void _ZN12Unk_0201347413func_020135e0Ev(void *p);
void func_020f43c8(void *p);
void _ZN19ActorFollowColliderD1Ev(void *p);
void _ZN14CollisionStateD1Ev(void *p);
void _ZN12Unk_0201a13cD2Ev(void *p);
void _ZN14NpcSpeechStateD2Ev(void *p);
void _ZN9NpcLookAt16clearTargetActorEv(void *p);
void _ZN12Unk_0201ac8813func_0201acc8Ev(void *p);
void _ZN11NpcAnimCtrlD1Ev(void *p);
void _ZN11NpcFaceAnimD2Ev(void *p);
void _ZN14NpcMoveAnimSet13func_0201ad38Ev(void *p);
void _ZN19ThreeLayerAnimModelD1Ev(void *p);
}
}


// ---- unk_02011580.cpp
namespace nA {
extern "C" {

extern const char data_020d6f7c[];
extern const char data_020d6f9c[];
extern const char data_020d6fbc[];
extern const char data_020d6fdc[];
extern const char data_020d6ff8[];
extern const char data_020d7018[];
extern const char data_020d7038[];
extern const char data_020d7058[];
extern u8 data_021bddc0[];
extern u8 sSceneHudKinds[];
extern u32 data_021bdd80[];
extern u32 data_020d6f54[];
extern HudObjGfx sHudObjGfx;
void FS_InitFile(void *p);
void *_ZN11HudObjGfxIo11freePaletteEv(void *p);
void *_ZN11HudObjGfxIo9freeCharsEv(void *p);
void _ZN11HudObjGfxIo21releaseSlideIconCharsEv(void *p);
void _ZN11HudObjGfxIo20uploadSlideIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo18loadSlideIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo20releaseLinkIconCharsEv(void *p);
void _ZN11HudObjGfxIo19uploadLinkIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo17loadLinkIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo23uploadCameraButtonCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo21loadCameraButtonCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo13uploadPaletteEi(void *p, u32 v);
void _ZN11HudObjGfxIo11uploadCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo13loadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo15uploadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo16releaseKindCharsEv(void *p);
s32 InputMode_IsTouch(void);
s32 Scene_GetCurrent(void);
s32 ChatBalloon_RefreshLabelsUnk(void);
void *Mem_AllocTail(u32 size);
void *FS_OpenFile(void *self, const char *path);
s32 FS_ReadFile(void *self, void *buf, u32 size);
s32 FS_CloseFile(void *self);
void MI_CpuFill8(void *dst, u32 v, u32 n);
s32 Hud_GetSceneHudKind(void);
void HudObjGfx_InitFile(void *p);
void func_020f43c8(void *p);
Unk_02081d4c *_ZN16NpcResHandleView16getHeldItemModelEv(void *p);
void HeldItemModel_SetAnimSpeed(Unk_02081d4c *p, u32 v);
Unk_0205dfa4 *HeldItemModel_GetModel(Unk_02081d4c *p);
void Model_GetJointWorldMtx(MsgRequest *dst, void *src, u32 n);
void HeldItemModel_Draw(Unk_02081d4c *p, void *src);
void HeldItemModel_Update(Unk_02081d4c *p);
void _ZN12NpcResHandle7releaseEv(void *p);
void HeldItemModel_PlayAnim(Unk_02081d4c *p, u32 a, u32 b, u32 c);
inline BOOL Unk_02011c44_InRange(u32 id, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (id >= lo && id <= hi) r = TRUE;
    return r;
}
}
}

// ---- unk_02011ec0.cpp
namespace nB {
extern "C" {

void _ZN12Unk_020128108planStepEP16Unk_02012810_Vec(void *self, Unk_02011f74_Vec *p);
void _ZN12Unk_0201281014clearJunctionsEv(void *self);
s32 _ZN12Unk_020128108firstDirEi(void *self, s32 mask);
s32 _ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(void *self, Unk_02011f74_Vec *p);
s32 _ZN12Unk_0201281016pickAdjacentUnitEP16Unk_02012810_VecP16Unk_02012f04_Obj(void *self);
void _ZN13VillagerRoute16checkUnitChangedEj(void *self);
void _ZN13VillagerRoute13markUnitUnsetEv(void *self);
void *_ZN16NpcResHandleView16getHeldItemModelEv(void *);
s32 HeldItemModel_PlayAnim(void *, u32, u32, u32);
void HeldItemModel_SetItem(void *, void *, u32);
void _ZN11NpcAnimCtrl16playHoldItemPoseEP16Unk_02015fe0_ObjPtPvt(void *, u32, void *, u32, u32);
s32 _ZN12NpcResHandle7acquireEv(void *);
s32 _ZN16NpcResHandleView12loadHeldItemEi(void *, u32);
void _ZN22NpcHeldItemModelHandleD1Ev(void *);
void _ZN22NpcHeldItemModelHandleC1Ev(void *);
extern Unk_02011f74_World *gSceneBlockMap;
extern u8 gSaveVillagers[];
extern u8 gRandom[];
extern s16 data_02135f44[];
extern s32 sRouteDirs[];
s32 MapBlock_HasAnyAttr(void *, u32);
void *_ZN12MapBlockAcre8getUnk04Ev();
s32 Random_PickSetBit(u32, s32, s32);
s32 Random_GlobalBelow(u32);
u8 *_ZN20VillagerDataItemView11getHousePosEv(...);
s32 _ZN12VillagerData13getVillagerIdEv(void *);
s32 SaveVillagers_PickRandomExcept(void *, void *, u32);
void func_02133ef8(void *, u32);
void VillagerRoute_PickPathUnitInBlock(Unk_02011f74_Pair *out, void *self, void *a, Unk_02011f74_World *w);
void FieldPos_ToUnit(s32 *, s32 *, Unk_02011f74_Vec *);
void FieldPos_FromUnitCenter(Unk_02011f74_Vec *, s32, s32);
s32 BlockMap_BlockHasAllAttr(Unk_02011f74_World *, s32, s32, u32);
s32 BlockMap_FindBlockAllAttr(Unk_02011f74_World *, u32);
s32 Math_AngleXZ(Unk_02011f74_Vec *, Unk_02011f74_Vec *);
s32 Random_Next(void *);
s32 func_01ffcb0c(s32, s32);
void FieldPos_SnapToUnitCenter(Unk_02011f74_Vec *, Unk_02011f74_Vec *);
s32 TownMap_IsPosWalkable(Unk_02011f74_Vec *, s32);
s32 TownMap_IsUnitWalkable(s32, s32, Unk_02011f74_World *);
s32 _ZN8BlockMap12getWalkLinksEii(Unk_02011f74_World *, s32, s32);
static inline Unk_02011f74_Cell *GetCell(Unk_02011f74_World *w, u32 x, u32 y)
{
    if (x < (u32)w->size.a && (u32)w->size.b > y && w->unk_00 != NULL) {
        return (Unk_02011f74_Cell *)w->unk_00 + (x + w->size.a * y);
    }
    return NULL;
}
static inline Unk_02011f74_Cell *GetCellD(Unk_02011f74_World *w, u32 x, u32 y, Unk_02011f74_Cell *volatile *dflt)
{
    if (x < (u32)w->size.a && (u32)w->size.b > y && w->unk_00 != NULL) {
        return (Unk_02011f74_Cell *)w->unk_00 + (x + w->size.a * y);
    }
    return *dflt;
}
void VillagerRoute_PickCoastBlock(Unk_02011f74_Pair *out, void *self, Unk_02011f74_Vec *v);
void VillagerRoute_PickRandomBlock(Unk_02011f74_Pair *out, void *self);
void VillagerRoute_PickOwnHouseBlock(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj);
void VillagerRoute_PickOwnHouseDoor(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj);
void VillagerRoute_PickOtherHouseBlock(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj);
void VillagerRoute_PickOtherHouseDoor(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj);
void VillagerRoute_PickAttr200Target(Unk_02011f74_Pair *out, void *self);
}
}

// ---- unk_02012810.cpp
namespace nC {
extern "C" {
namespace nC2 { extern Unk_020130f0_Dir sRouteDirs[4]; }
void _ZN13VillagerRoute12rememberUnitEj(void *self, Unk_02012810_Vec *v);
extern s32 sRouteDirs[];
extern Unk_02012f04_Obj *gSceneBlockMap;
s32 _ZN8BlockMap17getWalkLinksAtPosEPv(Unk_02012f04_Obj *o, Unk_02012810_Vec *v);
u32 BlockMap_GetBlockAttr(Unk_02012f04_Obj *o, s32 x, s32 z);
s32 func_020e9650(Unk_02012810_Vec *a, Unk_02012810_Vec *b);
void FieldPos_ToBlockUnit2(Unk_02012b94_Pair *a, Unk_02012b94_Pair *c, Unk_02012810_Vec *v);
void FieldPos_FromBlockUnitCenter(Unk_02012810_Vec *out, u32 a, u32 b, u32 c, u32 d);
s32 TownMap_IsUnitWalkable(u32 x, u32 z, Unk_02012f04_Obj *o);
s32 Random_PickSetBit(u32 mask, s32 n, s32 max);
s32 _ZN8BlockMap12getWalkLinksEii(Unk_02012f04_Obj *o, u32 x, u32 z);
void FieldUnit_FromBlockUnit(u32 *bx, u32 *bz, u32 x, u32 z, u32 a, u32 b);
s32 Random_GlobalBelow(s32 n);
void FieldPos_ToUnit(u32 *x, u32 *z, Unk_02012810_Vec *v);
void FieldPos_FromUnitCenter(Unk_02012810_Vec *out, u32 x, u32 z);
void *MI_CpuFill8(void *, int, u32);
void *MI_CpuCopy8(const void *, void *, u32);
void VillagerRoute_PickPathUnitInBlock(Unk_02012b94_Pair *out, s32 unused, Unk_02012b94_Pair *p, Unk_02012f04_Obj *obj);
}
}

// ---- unk_020131a4.cpp
namespace nD {
extern "C" {

void _ZN12Unk_020128108planStepEP16Unk_02012810_Vec(void *self, u32 v);
void _ZN12Unk_0201281014clearJunctionsEv(void *self);
void _ZN11NpcTalkCtrl7endTalkEP16Unk_02013b10_Ctx(void *self, Unk_020133cc_Player* p);
void _ZN11NpcTalkCtrl16startTalkMessageEP16Unk_02013b10_Ctx(void *self);
void _ZN11NpcTalkCtrl18updateSpeakerMouthEP16Unk_02013b10_Ctx(void *self, Unk_020133cc_Player* p);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN13NpcActionCtrl16requestTalkingOnEv(void *self);
void _ZN13NpcActionCtrl12requestAct07Eiiiit(void *self, u32 a, u32 b, u32 c, u32 d, u32 e);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl12getEmotionIdEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
void _ZN14NpcSpeechState12stopSpeakingEv(void *self);
s32 _ZN11NpcMoveCtrl11getMoveModeEv(void *self);
Unk_020133cc_Player* _ZN16ActorTalkRequest15getSpeakerActorEv(void *self);
void _ZN16ActorTalkRequest11playEmotionEjj(void *self, u32 a, u32 b);
Unk_020133cc_Player* _ZN16ActorTalkRequest15getPartnerActorEv(void *self);
void _ZN16ActorTalkRequest4tickEv(void *self);
Unk_020133cc_Player* _ZN8NpcActor14getTalkRequestEv(void *self);
void _ZN9Character17detachTalkRequestEi(void *self, Unk_020133cc_Player* o);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *self, u32 v);
void Snd_SeEmitterPlayAlternate(void *self, s32 a, u32 b);
s32 Footstep_GetSeAtPos(void *self);
BOOL _ZN8BlockMap12getWalkLinksEii(void* p, u32 x, u32 y);
void FieldPos_FromUnitCenter(void* p, u32 x, u32 y);
void FieldPos_ToUnit(u32* a, u32* b, u32 c);
void MI_CpuFill8(void* p, u32 v, u32 n);
BOOL _ZN12Unk_0201281011scanForPathEP16Unk_02012810_VecP17Unk_02012b94_PairP16Unk_020130f0_DiriS3_iP16Unk_02012f04_Obj(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q);
extern Unk_02013260_Entry sVillagerRouteTypes[];
s32 _ZN8NpcActor19getTeachableEmotionEv();
s32 Emotion_FindSlot(u32 v);
void Effect_Create(u32 a, void* b, void* c, u32 d);
static inline BOOL Unk_02013568_IsSet(u32 v, u32 m)
{
    if (v & m) return TRUE;
    return FALSE;
}
void Melody_Play();
void Camera_FocusOnPair(void* a, void* b);
void Camera_FocusOnPoint(void* a);
extern u16 data_020c6cc8;
void func_020133a4();
}
}

// ---- unk_02013b10.cpp
namespace nE {
extern "C" {

Unk_02013b10_Ctx *_ZN16ActorTalkRequest9getActorBEj(Unk_02014258 *p, u8 idx);
s32 _ZN12Unk_020d77109startTaskEi(Unk_02014258 *p, s32 a);
u32 Camera_IsBlending(void);
u32 Camera_GetBlendFramesLeft(void);
void _ZN14TalkMsgRequest17changeSpeakerNameEP9MsgStringj(Unk_02014258 *p, Unk_020140d0_X *x, u8 *b);
void Camera_RetargetFocus(Unk_02013b10_Vec *v);
void _ZN14TalkMsgRequest14setSpeakerNameEPhj(Unk_02013b10_Obj *o, s32 a, u8 *b);
void _ZN10MsgRequest11setFileNameEPKc(Unk_02013b10_Obj *o, s32 a);
s32 _ZN15TalkWindowState14isVoicePlayingEv(Unk_02013b10_Sub *p);
s32 _ZN13NpcActionCtrl17requestTalkingOffEv(void *p);
s32 _ZN13NpcActionCtrl16requestTalkingOnEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *p);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void Melody_Play(void);
Unk_02013b10_Ctx *_ZN16ActorTalkRequest15getPartnerActorEv(Unk_02013b10_Obj *o);
u8 *_ZN16ActorTalkRequest15getSpeakerActorEv(Unk_02013b10_Obj *o);
void _ZN14NpcSpeechState12stopSpeakingEv(void *p);
void _ZN14NpcSpeechState13startSpeakingEv(void *p);
void _ZN9Character17detachTalkRequestEi(Unk_02013b10_Ctx *ctx, Unk_02013b10_Obj *o);
void _ZN9Character17attachTalkRequestEi(Unk_02013b10_Ctx *ctx, Unk_02013b10_Obj *o);
void _ZN16ActorTalkRequest11playEmotionEjj(Unk_02013b10_Obj *o, s32 a, s32 b);
void _ZN16ActorTalkRequest4tickEv(Unk_02013b10_Obj *o);
void Camera_FocusOnPair(Unk_02013b10_Vec *a, Unk_02013b10_Vec *b);
void Camera_FocusOnPoint(Unk_02013b10_Vec *a);
void Camera_SetModeDefault(void);
s32 PlayerActor_SetHeadTilt(s32 a, s32 b, s32 c);
u8 *_ZN8NpcActor16getSpeakerGenderEv(void *p);
extern u16 data_020c6cc8;
extern Unk_02014040_Ent sNpcTalkCtrlStates[5];
void NpcTalkCtrl_Destroy(void);
void _ZN12Unk_02014254C1Ev(void);
}
}

// ---- unk_02014420.cpp
namespace nF {
extern "C" {

BOOL _ZN12Unk_020d77109startTaskEi(void *self, s32 cmd);
void _ZN16ActorTalkRequest19clearItemActionBusyEv(void *self);
void _ZN16ActorTalkRequest17setItemActionBusyEv(void *self);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *p);
BOOL _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, u32 i, s32 j);
BOOL _ZN13NpcActionCtrl15requestTakeItemEiPtjhjj(void *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void Melody_Unpack(void *p, void *q);
void Melody_PlayEditPattern(u32 v);
void Melody_PlayRandom(u32 v);
extern u16 data_020c6cc8;
extern s32 data_020ddf8c;
extern u8 gMelodyEditPattern[];
}
}

// ---- unk_02014d90.cpp
namespace nG {
extern "C" {

void _ZN12Unk_0201425820requestSwitchSpeakerEh(void *self, s32 x);
u8 * _ZN16ActorTalkRequest8getActorEj(void *self, u32 x);
extern u16 data_020c6cc8;
extern u8 gVec3Zero[];
u32 _ZN13NpcActionCtrl9getActionEv(u8 *p);
u32 _ZN13NpcActionCtrl12isActionDoneEv(u8 *p);
BOOL _ZN13NpcActionCtrl15requestGiveItemEiPtjhjj(u8 *p, s32 a, u16 *b, u32 c, u32 d, u32 e, u32 f);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
BOOL MenuCtrl_IsFinished();
u16 MenuCtrl_BuildPocketMask(u32 p);
BOOL MenuCtrl_OpenPocketSelect(u32 a, u32 b);
BOOL MenuCtrl_OpenPostOffice();
BOOL MenuCtrl_OpenLauncher(u32 a);
BOOL MenuCtrl_OpenLauncherWithIndex(u32 a, u32 b);
BOOL MenuCtrl_OpenNearbyTowns(u32 a, u32 b);
BOOL MenuCtrl_RequestOpenMenu12(u32 a);
BOOL MenuCtrl_OpenLauncherWithText(u32 a, u32 b, u32 c);
u32 TalkRequest_GetPlayerId();
u32 PlayerActor_GetBodyPos();
s32 Math_AngleXZ(u32 a, u8 *b);
void PlayerActor_SetHeadTilt(u32 a, s16 b, u32 c);
void PlayerActor_RequestTurnTo(s32 a, u32 b);
void PlayerActor_SetNoFaceTalkTarget(u32 a, u32 b);
Unk_020155e4_Ret *PlayerActor_GetCharacter(u32 a);
s32 _ZN8NpcActor10getAngleToEPS_(u8 *a, u8 *b);
s32 _ZN8NpcActor16getAngleToPlayerEj(u8 *a, u32 b);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, u32 g, u32 h, u32 i, u32 j);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(u8 *p, u32 a, u32 b, u8 *c, u8 *d, u32 e, u32 f, u32 g);
Unk_0201bc1c *_ZN8NpcActor14getTalkRequestEv();
}
}

// ---- unk_020156ac.cpp
namespace nH {
extern "C" {

extern u32 gVec3Zero;
extern u16 data_020c6cc8;
s32 Scene_GetCurrent(void);
s32 Net_GetJoiningAid(void);
s32 PlayerActor_GetLocalSessionSlot(void);
s32 _ZN15TalkWindowState17setSlotFromStringEiii(u32 a, u32 b, u32 c, u32 d);
s32 _ZN15TalkWindowState12setNamedSlotEiPvj(u32 a, u32 b, void *c, u32 d);
s32 _ZN15TalkWindowState7setSlotEiPv(u32 a, u32 b, void *c);
u32 _ZN15TalkWindowState13getChoiceListEv(u32 a);
void _ZN10VillagerId7getNameEj(u32 a, void *b);
void _ZN8PlayerId13getNameStringEP9MsgString(u32 a, void *b);
void TownId_GetNameString(u32 a, void *b);
void String_GetDayOrdinal(void *a, u32 b);
void String_GetMonthName(void *a, u32 b);
void String_FormatFixedPoint(void *a, s32 b, s32 c);
void String_FormatNumber(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void String_Load(void *a, u8 *b, u8 *c);
void _ZN9MsgString12appendStringEPS_(void *a, void *b);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 Npc_GetVoiceType(void *p);
s32 _ZN12Unk_020d77107runTaskEv(void *p);
void _ZN12Unk_020d771010resetTasksEv(void *p);
void _ZN14NpcSpeechState12setMouthTypeEi(void *p, s32 a);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *p);
s32 _ZN14NpcSpeechState10isSpeakingEv(void *p);
s32 NpcFace_PickTalkMouth(void);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
void _ZN13NpcActionCtrl14requestEmotionEiht(void *p, u32 a, u8 b, u32 c);
s32 _ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(void *p);
void _ZN19ThreeLayerAnimModel18playLayer3FromBaseEjj(void *p, u32 a, u32 b);
void _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(void *p, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3);
void _ZN19ThreeLayerAnimModel20assignJointsToLayer3Ejj(void *p, u32 a, u32 b);
s32 *_ZN11NpcMoveCtrl13func_0201a8ccEv(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void *_ZN12NpcResHandle16getBodyAnimLayerEj(void *p, u32 idx);
s32 _ZN12NpcResHandle7releaseEv(void *p);
s32 AnimSlotRef_GetAnimId(void *p);
s32 AnimSlotRef_GetData(void *p);
s32 AnimSlotRef_Load(void *p, u32 a, u32 b, u32 c);
s32 CharaAnim_GetJointGroup(u32 a);
s32 JointGroup_GetRangeCount(void);
u32 JointGroup_GetRangeFirst(s32 a, u32 b);
u32 JointGroup_GetRangeLast(s32 a, u32 b);
s32 _ZN13AnimFrameCtrl10isFinishedEv(void *p);
s32 _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *a, void *b, u32 c, u32 d, u32 s0, u32 s1, u32 s2, u32 s3);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
ActorTalkRequest *_ZN8NpcActor14getTalkRequestEv(void);
s32 TalkRequest_GetPlayerId(void);
}
}

// ---- unk_02015fe0.cpp
namespace nI {
extern "C" {

BOOL Item_IsHoldable(u16 *p);
s32 CharaAnim_GetHoldPoseMode(void *p);
s32 CharaAnim_GetJointGroup(s32 a);
s32 JointGroup_GetRangeLast(s32 a, s32 b);
s32 JointGroup_GetRangeFirst(s32 a, s32 b);
s32 JointGroup_GetRangeCount(void);
s32 HeldItem_GetHandPose(u16 *p);
void _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *a, s32 b, s32 c);
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(void *a, s32 b, s32 c);
void BlendAnimModel_Play2(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
void _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 _ZN14NpcMoveAnimSet12getStandAnimEv(void *p);
s32 _ZN14NpcMoveAnimSet11getWalkAnimEv(void *p);
s32 _ZN14NpcMoveAnimSet10getRunAnimEv(void *p);
void _ZN12Unk_02015b8c13syncMouthTypeEP18Unk_02015b8c_Scene(void *a, void *b);
s32 _ZN12Unk_02015b8c9getAnimIdEj(void *a, s32 b);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *a);
void _ZN11NpcFaceAnim16setFaceAnimsFromEPvii(void *a, s32 b, s32 c, s32 d);
void *_ZN12NpcResHandle16getBodyAnimLayerEj(void *a, s32 b);
void AnimSlotRef_Load(void *a, s32 b, s32 c, s32 d);
void *AnimSlotRef_GetData(void *a);
void *func_021065dc(void *a);
void *func_021065f8(void *a, s32 b);
void _ZN12Unk_02015b8c17setAnimSpeedFixedEh(void *a, s32 b);
BOOL _ZN12NpcResHandle7acquireEv(void *a);
void _ZN9AnimModel10attachAnimEv(void *a);
void _ZN5Model11setCallbackEiiiii(void *a, void *b, s32 c, s32 d, void *e, s32 f);
s32 _ZN12Unk_02015b8c14hasTalkGestureEv(void *a);
void _ZN12Unk_02015b8c15loadTalkGestureEv(void *a);
void NpcActor_JointCalcLayer3Cb(void);
void _ZN17NpcBodyAnimHandleD1Ev(void *a);
void _ZN17NpcBodyAnimHandleC1Ev(void *a);
BOOL _ZN8NpcActor15netReadPositionEPiPh(void *o, Unk_02015fe0_Vec *v, s16 *a);
void _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(void *a, void *b);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(void *a, void *b, s32 c, s32 d, u32 e);
s32 _ZN11NpcMoveCtrl11getMoveModeEv(void *a);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *a, s32 b);
s32 _ZN11NpcMoveCtrl14getTargetAngleEv(void *a);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *a, Unk_02015fe0_Vec *v);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *a, Unk_02015fe0_Vec *v);
BOOL NpcActor_IsFrontAngle(s16 a);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
extern u16 data_020c6cc8;
extern Unk_02015fe0_Vec gVec3Zero;
static inline BOOL Unk_02015fe0_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}
}
}

// ---- unk_02016a44.cpp
namespace nJ {
extern "C" {

void _ZN13NpcActionCtrl13setActionDoneEi(void *self, s32 v);
void _ZN13NpcActionCtrl16setPendingActionEii(void *self, s32 a, s32 b);
Unk_02016a44_Sub * _ZN13NpcActionCtrl12getCurParamsEv(void *self);
void NpcAction_PackItem(void *self, void *a, u16 *b);
extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
BOOL _ZN8NpcActor15netReadPositionEPiPh(Unk_02006d14 *o, s32 *v, s16 *a);
BOOL NpcActor_IsFrontAngle(s16 a);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(Unk_02016a44_S350 *p, Unk_02006d14 *o, u32 a, u32 b, u32 c);
void _ZN11NpcMoveCtrl14setTargetAngleEs(Unk_02016a44_S350 *p, s32 a);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(Unk_02016a44_S350 *p, void *v);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(Unk_02016a44_S350 *p, void *v);
s32 _ZN12Unk_02015b8c9getAnimIdEj(Unk_02016a44_S334 *p, u32 a);
BOOL _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(Unk_02016a44_S334 *p, ...);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(Unk_02016a44_S334 *p, Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void _ZN13HeldToolModel12playIdleAnimEjj(void *p, u32 a, u32 b);
void Effect_PlayById2(u32 a, void *p, u32 b, u32 c);
void func_02003ddc(Unk_02016a44_S514 *p, u32 a, u32 b, u32 c);
void HandOverItem_End(Unk_02006d14 *o);
s32 Effect_End(s32 h);
void Effect_SetPosition(s32 h, void *a, s16 *b, u32 c);
s32 Effect_Create(u32 a, s32 *v, s16 *b, u32 c);
BOOL HandOverItem_RequestMode(u32 a, Unk_02006d14 *o);
s32 HandOverItem_IsModeActive(u32 a);
BOOL HandOverItem_IsActive();
void HandOverItem_SetNextMode(u32 a, Unk_02006d14 *o);
void PlayerActor_PlayLocalSe(u32 a);
BOOL HandOverItem_IsMaster(Unk_02006d14 *o);
BOOL PlayerActor_RequestAct32();
void _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(Unk_02016a44_S0ec *p, u32 a, u32 b);
void HandOverItem_GetItem(u16 *p);
void _ZN15NpcActionParams5clearEv(Unk_02016a44_Sub2c *p);
}
}

// ---- unk_0201745c.cpp
namespace nK {
extern "C" {
namespace nK2 { BOOL _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(void *p, void *q); }
extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
void *_ZN13NpcActionCtrl12getCurParamsEv(Unk_0201745c_State *s);
BOOL HandOverItem_IsModeActive(u32 a);
void HandOverItem_SetNextMode(u32 a, void *p);
BOOL HandOverItem_SwitchMaster(void *p);
BOOL PlayerActor_LocalRequestAct37(void);
BOOL _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(void *p);
s32 _ZN12Unk_02015b8c9getAnimIdEj(void *p, u32 a);
BOOL HandOverItem_RequestMode(u32 a, void *p);
u32 HandOverItem_GetNextMode(void);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 _ZN13NpcActionCtrl13setActionDoneEi(Unk_0201745c_State *s, u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
void HandOverItem_End(void *p);
void Effect_End(s32 a);
s32 Effect_SetPosition(s32 a, void *b, void *c, u32 d);
s32 Effect_Create(u32 a, void *b, void *c, u32 d);
s32 Effect_PlayById2(u32 a, void *b, u32 c, u32 d);
BOOL HandOverItem_IsActive(void);
BOOL HandOverItem_IsMaster(void *p);
BOOL PlayerActor_RequestAct32(void);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, u32 a, u32 b);
BOOL HandOverItem_CanTake(void *p);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN12Unk_02016a4411act0EStep19EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep18EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep17EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep16EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep15EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep14EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep13EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep12EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep11EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep10EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep09EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep08EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep07EP12Unk_02006d14(S *s, C_745c *c);
BOOL _ZN12Unk_02016a4415waitItemAnimEndEP12Unk_02006d14Ptjj(S *s, C_745c *c, void *p, u32 a, u8 b);
void _ZN12Unk_02016a4411act0EStep06EP12Unk_02006d14(S *s, C_745c *c);
BOOL _ZN12Unk_02016a4415waitItemAnimEndEP12Unk_02006d14Ptjj(S *s, C_745c *c, void *p, u32 a, u8 b);
void _ZN12Unk_02016a4411act0EStep05EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep04EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep03EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep02EP12Unk_02006d14(S *s, C_745c *c);
void _ZN12Unk_02016a4411act0EStep01EP12Unk_02006d14(S *s, C_745c *c);
}
}

// ---- unk_02017d74.cpp
namespace nL {
extern "C" {

extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
extern u32 sNpcGiveItemAnims[];
Unk_02017d74_Data *_ZN13NpcActionCtrl12getCurParamsEv(void *s);
BOOL HandOverItem_IsModeActive(u32 a);
void HandOverItem_SetNextMode(u32 a, void *p);
BOOL HandOverItem_SwitchMaster(void *p);
BOOL PlayerActor_LocalRequestAct37(void);
BOOL _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(void *p);
BOOL HandOverItem_RequestMode(u32 a, void *p);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
s32 _ZN13NpcActionCtrl13setActionDoneEi(void *s, u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
BOOL HandOverItem_IsActive(void);
BOOL HandOverItem_IsMaster(void *p);
BOOL PlayerActor_RequestAct32(void);
BOOL HandOverItem_CanTake(void *p);
BOOL HandOverItem_GetPos(void *p);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN12Unk_0201acf813func_0201acf8Et(void *a, s32 b);
BOOL Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 Scene_GetCurrent(void);
void PlayerActor_LocalRequestAct36(void *a, void *b, void *c, void *d, void *e);
void PlayerActor_RequestAct30(void *a, void *b, void *c, void *d, void *e);
void HandOverItem_Begin(void *a, s32 b, u32 c, s32 d, void *e, s32 f);
void NpcAction_PackAnim(void *a, s32 b, u32 c, u32 d, u32 e);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(void *s);
static inline BOOL Unk_02017d74_Is(u16 *p, u16 v) {
    if (Item_IsFurniture(p)) {
        u16 t = v;
        s32 x = Item_GetFurnitureIndex(p);
        return x == Item_GetFurnitureIndex(&t) ? TRUE : FALSE;
    }
    return *p == v ? TRUE : FALSE;
}
}
}

// ---- unk_02018698.cpp
namespace nM {
extern "C" {

extern volatile u16 data_020c6cc8;
extern u8 gVec3Zero[];
extern Unk_02018698_Ent sEmotionTable[];
extern u32 sNpcAct07Anims[];
extern u16 sNpcAct07Ses[];
WindowLight *_ZN13NpcActionCtrl12getCurParamsEv(Unk_02018698 *s);
s32 _ZN13NpcActionCtrl13setActionDoneEi(Unk_02018698 *s, u32 a);
BOOL _ZN13NpcActionCtrl12isActionDoneEv(Unk_02018698 *s);
void _ZN13NpcActionCtrl9mainAct01EPh(Unk_02018698 *s, C_8698 *c);
void _ZN13NpcActionCtrl10setupAct01EPh(Unk_02018698 *s, C_8698 *c);
void NpcAction_PackTurn(void *p, s32 a, s32 b, u32 c);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(void *a, void *b, u32 c, u32 d, u32 e);
void _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(void *a, void *b);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *a, s32 b);
void _ZN12Unk_0201acf813func_0201acf8Et(void *a, s32 b);
BOOL _ZN12Unk_0201acf813func_0201acfcEv(void *a);
BOOL _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(void *p, void *q);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *a, void *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
void _ZN13HeldToolModel12playIdleAnimEjj(void *a, u32 b, u32 c);
s32 _ZN13HeldToolModel12playWalkAnimEjj(void *a, u32 b, u32 c);
void func_02003f1c(u32 a);
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
void _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(void *a, void *b, u32 c);
void _ZN11NpcFaceAnim13func_020199c8Ev(void *a);
s32 _ZN11NpcMoveCtrl14getTargetAngleEv(void *a);
s32 _ZN11NpcMoveCtrl12getTurnSpeedEv(void *a);
s32 _ZN11NpcMoveCtrl15getDestinationBEv(void *a);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *a, void *b, u32 c);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *a);
BOOL _ZN8NpcActor12isPosInFrontEPsP16Unk_020d77a4_Vec(void *a, s16 *out, s32 c);
BOOL NpcActor_IsFrontAngle(s16 v);
Unk_02018698_Ent *Emotion_GetEntry(u32 i);
}
}

// ---- unk_02019020.cpp
namespace nN {
extern "C" {

void *MI_CpuFill8(void *dst, u32 value, u32 size);
void MI_CpuCopy8(const void *src, void *dst, u32 size);
u16 NetBuf_ReadU16(void *p);
void NetBuf_WriteU16(void *p, u16 v);
void NetBuf_UnpackPair20(void *p, u32 a, u32 b);
void NetBuf_PackPair20(void *p, u32 a, u32 b);
void _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(void *p);
BOOL _ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(void *p, void *owner, u32 v);
BOOL _ZN11NpcMoveCtrl10hasNextLegEv(void *p);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *p, void *v);
void _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(void *p, void *v);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *p, s32 v);
void _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(void *p, void *owner, s32 a, s32 b, u32 c);
void _ZN12Unk_0201acf813func_0201acf8Et(void *p, s32 v);
s32 _ZN14NpcSpeechState12getMouthTypeEv(void *p);
BOOL _ZN14NpcSpeechState10isSpeakingEv(void *p);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *p, u32 v);
BOOL BlinkTimer_Update(void *p);
s32 _ZN13MatTexPatAnim6updateEv(void *p);
extern u16 data_020c6cc8;
extern u32 gVec3Zero[3];
extern Unk_02019858_Entry sNpcActionTable[];
void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
void NpcAction_UnpackItem(u16 *out, void *in);
void NpcAction_PackItem(void *unused, void *p, u16 *v);
void NpcAction_UnpackAnim(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src);
void NpcAction_PackAnim(u8 *p, u32 a, u32 b, u32 c, u16 d);
void NpcAction_UnpackTurn(void *a, void *b, u16 *c, u8 *d);
void NpcAction_PackTurn(u8 *out, u16 a, u16 b, u32 c);
void NpcAction_UnpackMove(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out);
void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2);
}
}

// ---- unk_02019998.cpp
namespace nO {
extern "C" {

s32 _ZN9NpcLookAt16calcClampedPitchEP17Unk_0201a334_Vec3S1_i(void *self, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt14calcClampedYawEP17Unk_0201a334_Vec3S1_i(void *self, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt7calcYawEP17Unk_0201a334_Vec3S1_i(void *self, void *a, void *b, s32 c);
BOOL NpcLookAt_GetHeadPos(void *self, void *a);
extern s32 sNpcTalkMouthAnims[];
s32 CharaAnim_GetEyeAnim(void *p);
s32 CharaAnim_GetMouthAnim(void *p);
void *_ZN19NpcTexPatHeapHandle11getFaceAnimEv(void *p);
void _ZN16CharaFaceAnimRef8loadAnimEiii(void *h, s32 a, s32 b, s32 c);
void *_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(void *h);
void *_ZN16CharaFaceAnimRef18getMouthAnimBufferEv(void *h);
s32 NNS_G3dGetAnmByIdx(void *p, s32 v);
void _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(void *p, void *a, s32 b, s32 c, s32 d, s32 e);
void _ZN13MatTexPatAnim10applyFrameEv(void *p);
void _ZN13MatTexPatAnim7releaseEv(void *p);
void _ZN12NpcResHandle7releaseEv(void *p);
void BlinkTimer_BlinkNow(void *p);
void BlinkTimer_Clear(void *p);
void MatTexPatAnim_ResumeMaterial(void *p, void *q);
void _ZN13MatTexPatAnim13pauseMaterialEv(void *p, void *q);
BOOL _ZN13MatTexPatAnim14setMaterialTexEij(void *p, void *q, u32 r);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *p);
void *_ZN17NpcFaceAnimHandle15getTexPatBufRefEv(void *p);
BOOL _ZN12NpcResHandle7acquireEv(void *p);
void *_ZN22NpcHeldItemModelHandle16getTexPatHeapRefEv(void *p);
BOOL _ZN13MatTexPatAnim4initEPvS0_jS0_(void *p, s32 a, s32 b, s32 c, s32 d);
void NpcTexPatBufRef_LoadFile(void *a, s32 b);
s32 NpcTexPatBufRef_GetBuffer(void *a);
s32 _ZN20CharaFaceAnimWorkRef7getHeapEv(void *a);
BOOL NpcLookAt_IsWithin(s32 a, s32 b);
s32 NpcFace_PickTalkMouth();
s32 Random_GlobalBelow(s32 a);
s32 func_02003efc();
s32 Snd_SeEmitterPlayHeld(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e70(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f0c(u16 a);
s32 func_02003f1c(u16 a);
u8 *Emotion_GetEntry(u32 a);
void Effect_SetPosition(s32 h, void *a, void *b, s32 c);
void Effect_End(s32 h);
s32 Effect_CreateWithParam(u32 id, u32 b, void *a, void *c);
void MI_CpuFill8(void *p, s32 v, s32 n);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void func_020e7530(s16 *p, s32 target, s32 step);
s32 func_020e96a4(void *a, void *b);
s32 NpcFace_PickTalkMouth();
extern Unk_0201a1e0_Fn sNpcLookAtTypes[6];
BOOL NpcLookAt_IsWithin(s32 a, s32 b);
}
}

// ---- unk_0201a334.cpp
namespace nP {
extern "C" {

extern u8 gVec3Zero[];
extern u8 gFieldSceneKind;
extern s16 data_02135f44[];
extern Unk_0201a334_Vec3 sNpcObstacleProbeOffsets[];
extern Unk_0201ab4c_Ent sNpcMoveModeTable[];
s32 NpcLookAt_GetHeadPos(Unk_0201a734_Obj *self, Unk_0201a334_Vec3 *out);
Unk_0201a334_Scene *PlayerActor_GetCharacter(s32 h);
BOOL PlayerActor_GetHeadPos(Unk_0201a334_Vec3 *out, s32 h);
s32 func_020e7530(s16 *p, s32 v, s32 n);
s32 func_020e96a4(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
s32 func_020e972c(void *a, void *b);
s32 func_020e7b98(s32 a, s32 b);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e9650(void *a, void *b);
s32 func_020e759c(s32 *p, s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 Math_AngleXZ(void *a, void *b);
void _ZN5Actor14updatePositionEP16Unk_02002cb0_Vec(void *a, void *b);
s32 _ZN12Unk_0201a13c16isWithinYawLimitEi(NpcLookAt *self, s32 v);
BOOL Npc_IsPosBlocked(Unk_0201a334_Vec3 *pos);
void Npc_RotateOffsetXZ(Unk_0201a334_Vec3 *out, Unk_0201a334_Vec3 *base, Unk_0201a334_Vec3 *off, u32 ang);
s32 Model_GetJointWorldMtx(MsgRequest *dst, void *src, u32 n);
s32 WorldCurve_FromCurved(void *v);
s32 Ground_GetExitAtPos(s32 id);
BOOL FtrMgr_GetSurfaceHeightAtPos(s32 id);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *buf, s32 id, s32 a, s32 b);
s32 _ZN14GroundInfoBase9getHeightEi(void *buf, s32 a);
s32 Collision_HasUnitShapeAt(s32 id);
void GroundInfo_Destruct(void *buf);
s32 _ZN11NpcAnimCtrl13isPlayingAnimEiPv(void *a, s32 b, void *c);
void _ZN12Unk_02015b8c17playAnimKeepFrameEP18Unk_02015b8c_Scenejjj(void *a, void *b, s32 c, u32 d, s32 e);
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *a, void *b, s32 c, u32 d, s32 e, s32 f, s32 g, s32 h);
s32 NpcLookAt_GetHeadPos(Unk_0201a734_Obj *self, Unk_0201a334_Vec3 *out);
static inline BOOL Unk_0201a834_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}
BOOL Npc_IsPosBlocked(Unk_0201a334_Vec3 *pos);
void Npc_RotateOffsetXZ(Unk_0201a334_Vec3 *out, Unk_0201a334_Vec3 *base, Unk_0201a334_Vec3 *off, u32 ang);
}
}

// ---- unk_0201ac80.cpp
namespace nQ {
extern "C" {

extern u8 sNpcMoveSpeedPresets[];
extern u8 data_020c6dcc[];
extern u32 data_020c6d84[];
extern u16 data_020c6cc8;
extern u8 *gSceneBlockMap;
extern u8 *gCommManager;
void _ZN11NpcMoveCtrl13applyMovementEP18Unk_0201a334_Scene(void *a, void *b);
void MI_CpuCopy8(void *src, void *dst, u32 n);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData12getInventoryEv(void *p);
s32 PlayerInventory_AddBells(void *p, s32 v, s32 n);
s32 PlayerInventory_GetBellsRoom(void *p, s32 a, s32 b);
s32 PlayerInventory_CanAddBells(void *p, s32 v, s32 n, s32 m);
u32 _ZN8BlockMap17getWalkLinksAtPosEPv(void *g, Unk_020d77a4_Vec3 *v);
void FieldPos_SnapToUnitCenter(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *in);
void func_01ffd070(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
s32 func_020e9650(Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
void func_020e972c(Unk_020d77a4_Vec3 *a, Unk_020d77a4_Vec3 *b);
s32 TownMap_IsPosWalkable(Unk_020d77a4_Vec3 *v, s32 a);
void func_02133ef8(void *p, u32 n);
s32 _ZN11CommManager8isOnlineEv(u8 *g);
Unk_020d77a4_Vec3 *PlayerActor_GetBodyPos(u32 n);
s32 PlayerActor_SetNoFaceTalkTarget(s32 a, s32 b);
void WorldCurve_FromCurved(Unk_020d77a4_Vec3 *out, Unk_020d77a4_Vec3 *in);
void _ZN8NpcActor12releaseModelEv(void *p);
void _ZN11NpcFaceAnim7releaseEv(void *p);
void _ZN12Unk_02015b8c7releaseEv(void *p);
void _ZN12Unk_02003c3013func_02003dccEv(void *p);
void _ZN8NpcActor12netSendStateEjz(void *p, s32 v);
s32 _ZN17TwoLayerAnimModel11drawLayeredEj(void *p, s32 v);
void _ZN11NpcMoveCtrl12storeHeadMtxEP12Unk_02006d14(void *p, void *q);
s32 Model_GetJointWorldMtx(void *p, void *q, s32 v);
void CharaShadow_Draw(void *p, s32 a, s32 b, s32 c);
s32 _ZN8NpcActor10isNetOwnerEv(void *p);
s32 _ZN8NpcActor13netReadActionEPiS0_Ph(void *p, s32 *a, s32 *b, void *buf);
s32 _ZN13NpcActionCtrl9getActionEv(void *p);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void _ZN13NpcActionCtrl12requestStandEjt(void *p, s32 a, s32 b);
void NpcAction_UnpackMove(s32 *a, s32 *b, s32 *c, s32 *d, s16 *e, u16 *f, void *buf);
void NpcAction_UnpackTurn(s16 *a, u16 *b, u16 *c, void *buf);
void NpcAction_UnpackAnim(u32 *a, void *b, u16 *c, u16 *d, void *buf);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void NpcAction_UnpackItem(u16 *a, void *buf);
void _ZN12Unk_02016a4412requestAct14EiPt(void *p, s32 a, u16 *b);
void _ZN11NpcTalkCtrl6updateEP16Unk_02013b10_Ctx(void *p, void *q);
void _ZN13NpcActionCtrl6updateEPh(void *p, void *q);
s32 _ZN12Unk_02015b8c9getAnimIdEj(void *p, s32 a);
void _ZN12NpcEmotionFx6updateEPvsit(void *a, void *b, s32 c, s32 d, s32 e);
void _ZN11NpcMoveCtrl10updateTurnEP18Unk_0201a334_Scene(void *p, void *q);
s32 NetArea_IsLocalOwner();
void Collision_Move(void *a, void *b, void *c, s32 d, s32 e, void *f, s32 g);
s32 Ground_GetDefaultY(s32 a);
void _ZN12Unk_0201a13c6updateEP17Unk_0201a1e0_Base(void *p, void *q);
void _ZN16NpcObstacleProbe5clearEv(void *p);
void _ZN16NpcObstacleProbe5probeEP18Unk_0201a334_Scene(void *p, void *q);
u32 WorldCurve_ToCurved(void *a, void *b);
s32 _ZN5Actor15calcModelMatrixEPv(void *p, void *buf);
s32 _ZN8NpcActor15netIsTalkLockedEv(void *p);
void _ZN13ActorCollider6submitEv(void *p);
void _ZN13ActorCollider8resetHitEv(void *p);
void _ZN12Unk_02015b8c6updateEP18Unk_02015b8c_Scene(void *p, void *q);
void _ZN19ThreeLayerAnimModel13updateLayers3Ev(void *p);
void _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(void *p, Unk_020d77a4_Vec3 *v);
void _ZN13HeldToolModel6updateEP12Unk_02006d14(s32 v, void *p);
void _ZN12Unk_0201347415updateFootstepsEP19Unk_020133cc_Player(void *p, void *q);
void _ZN11NpcFaceAnim6updateEPh(void *p, void *q);
void _ZN13NpcActionCtrl10postUpdateEPh(void *p, void *q);
void NpcActor_UpdateMovement(void *a, void *b);
void NpcActor_PayPlayer(void *self, s32 v);
s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w);
void NpcActor_ChargePlayer(void *self, s32 v);
void NpcActor_CanPlayerPay(void *self, s32 v);
void NpcActor_FindFreeUnitNear(V3 *out, NpcActor *self, V3 *in);
}
}

// ---- unk_0201b690.cpp
namespace nR {
extern "C" {

extern Unk_020d77a4_Global *gCommManager;
extern u16 data_020c6cc8;
extern s32 data_020c6d60[];
extern s32 data_020c6d48[];
extern s32 data_020c6d20;
extern u8 sNpcAvoidOffsets[];
extern s32 gNpcModelHeap;
extern s16 data_02135f44[];
BOOL NetArea_IsLocalOwner();
s32 _ZN9Character10postCreateEi(void *self, s32 x);
BOOL _ZN9Character8vfunc_04Ev(void *self);
s32 _ZN9Character13setAreaSyncedEv(void *self);
s32 _ZN9Character9setCharIdEj(void *self, u32 v);
BOOL _ZN11NpcMoveCtrl14setTargetAngleEs(void *p, s32 v);
void _ZN14NpcSpeechState5resetEv(void *p);
void _ZN12NpcEmotionFx5resetEv(void *p);
void _ZN12Unk_0201ac885resetEv(void *p);
void _ZN12Unk_02003c3013func_02003e40Ev(void *p);
void _ZN11NpcTalkCtrl5resetEv(void *p);
void _ZN12Unk_0201347414resetFootstepsEv(void *p);
void _ZN19Unk_020133cc_Player22resetLastTaughtEmotionEv(void *p);
void *MI_CpuFill8(void *dst, s32 v, u32 n);
void *MI_CpuCopy8(void *dst, const void *src, u32 n);
u8 Npc_GetInfoByte2(void *p);
u8 *NpcNetRecord_GetVar(void *p);
s32 Scene_GetCurrent();
void NpcNetRecord_SetState(void *a, s32 b, void *c, s32 d, void *e, void *f);
BOOL _ZN11CommManager12isSlotActiveEi(Unk_020d77a4_Global *g, s32 v);
BOOL _ZN11CommManager8isOnlineEv(Unk_020d77a4_Global *g);
void CommSyncVar_SetVar(s32 a, void *args, s32 b, s32 c);
void NpcNetRecord_SetSlots(void *a, u32 b, u32 c);
s32 NpcNetRecord_GetSlots(s32 a, s32 b, void *c);
s32 NpcNetRecord_SetSlotsAndSync(s32 a, s32 b, s32 c, void *d);
void NetBuf_UnpackPair20(void *a, void *b, void *c);
void _ZN16ActorTalkRequest13setOwnerActorEP18Unk_02015b8c_Scene(Unk_0201bc1c *a, void *b);
s32 PlayerActor_GetCharacter(u32 id);
BOOL PlayerActor_GetSlotPosXZ(u8 *a, void *b, void *c, s32 d, u32 e);
s32 Math_AngleXZ(void *a, void *b);
s32 func_020e96a4(void *a, void *b);
BOOL Npc_IsPosBlocked(void *a);
void Npc_RotateOffsetXZ(void *out, void *a, void *b, s32 c);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *p);
void _ZN11CachedModel7releaseEv(void *p);
BOOL _ZN11CachedModel4loadEPvS0_(void *p, s32 a, s32 b);
BOOL NpcActor_IsFrontAngle(s32 x);
BOOL NpcActor_IsFrontAngle(s32 x);
BOOL Item_IsFurniture(void *p);
u32 Item_GetFurnitureIndex(void *p);
BOOL Scene_InMuseumRoom();
s32 Scene_GetMuseumRoom();
void JointCb_UseRestTranslation(void *self, u32 flags);
void MTX_RotY33_(Unk_0201be34_Mtx *m, s32 a, s32 b);
void MTX_RotX33_(Unk_0201be34_Mtx *m, s32 a, s32 b);
void MTX_Concat33(Unk_0201be34_Mtx *a, Unk_0201be34_Mtx *b, Unk_0201be34_Mtx *out);
s32 WorldCurve_Apply(Unk_020d77a4_Vec *a, Unk_020d77a4_Vec *b);
s32 WorldCurve_GetRadius();
void _ZN19ThreeLayerAnimModel21onJointCalcPostLayer3EP16Unk_02053a54_Msg(void *p, void *q);
void NpcActor_JointCalcLayer3Cb(Unk_0201be34 *p);
void NpcActor_SetJointCallbackNext(Unk_0201be34 *self);
void NpcActor_SetJointCallbackNext(Unk_0201be34 *self);
void NpcActor_OnJointCalc(Unk_0201be34 *self);
}
}

namespace nZ {
extern "C" {
extern const u16 data_020c6cbc[2];
extern const u16 data_020c6cc0[2];
extern const u16 data_020c6cc4[2];
extern const u16 data_020c6cc8[2];
extern const u16 data_020c6ccc[2];
extern const u16 data_020c6cd0[2];
extern const u16 data_020c6cd4[2];
extern const u16 data_020c6cd8[2];
extern const u16 data_020c6cdc[2];
extern const u16 data_020c6ce0[2];
extern const u16 data_020c6ce4[2];
extern const u16 data_020c6ce8[2];
extern const u16 data_020c6cec[2];
extern const u16 data_020c6cf0[2];
extern const u16 data_020c6cf4[2];
extern const u16 data_020c6cf8[2];
extern const u16 data_020c6cfc[2];
extern const u16 data_020c6d00[2];
extern const u16 data_020c6d04[2];
extern const u16 data_020c6d08[2];
extern const u16 data_020c6d0c[2];
extern const u16 data_020c6d10[2];
extern const u16 data_020c6d14[2];
extern const u16 data_020c6d18[2];
extern const u16 data_020c6d1c[2];
extern const u16 data_020c6d20[2];
extern const u16 data_020c6d24[2];
extern const u16 data_020c6d28[2];
extern const u16 data_020c6d2c[2];
extern const u16 data_020c6d30[2];
extern const u16 data_020c6d34[2];
extern const u16 data_020c6d38[2];
extern const u16 data_020c6d3c[2];
extern const u16 sNpcTalkMouthAnims[4];
extern const u16 data_020c6d48[4];
extern const u16 data_020c6d50[4];
extern const u16 data_020c6d58[4];
extern const u16 data_020c6d60[4];
extern const u16 sNpcGiveItemAnims[4];
extern const u16 data_020c6d70[4];
extern const u16 sNpcAct07Ses[5];
extern const u32 data_020c6d84[4];
extern const u32 sNpcAct07Anims[5];
extern const u32 sNpcMoveSpeedPresets[9];
extern const u32 data_020c6dcc[12];
extern const u32 sNpcMoveModeTable[25];
extern const Unk_020c6e60_E sEmotionTable[60];
void _ZN12Unk_020121649isInBlockEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216411isInBlockT4EP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216410stepToDoorEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216410isAtDoorT3EP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216411isInBlockT2EP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216416stepCheckArrivedEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216410isAtDoorT1EP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216416isInAttr200BlockEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec(void);
void _ZN12Unk_0201347410mainState4EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411state4Step0EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347410mainState3EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411setupState3EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347410mainState1EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411state1Step2EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411state1Step1EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411state1Step0EP19Unk_020133cc_Player(void);
void _ZN12Unk_0201347411setupState1EP19Unk_020133cc_Player(void);
void _ZN12Unk_020136c011setupState4EP19Unk_020133cc_Player(void);
void _ZN11NpcTalkCtrl10mainState2EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11state2Step1EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11state2Step0EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11setupState2EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl10mainState0EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11state0Step2EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11state0Step1EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11state0Step0EP16Unk_02013b10_Ctx(void);
void _ZN11NpcTalkCtrl11setupState0EP16Unk_02013b10_Ctx(void);
void _ZN12Unk_0201425817taskSwitchSpeakerEv(void);
void _ZN12Unk_0201425817switchSpeakerSwapEv(void);
void _ZN12Unk_0201425818switchSpeakerFocusEv(void);
void _ZN12Unk_0201425818switchSpeakerCloseEv(void);
void _ZN12Unk_0201442010taskMelodyEv(void);
void _ZN12Unk_020144209melodyEndEv(void);
void _ZN12Unk_0201442010melodyWaitEv(void);
void _ZN12Unk_0201442011melodyStartEv(void);
void _ZN12Unk_0201442011taskEatItemEv(void);
void _ZN12Unk_0201442011eatItemWaitEv(void);
void _ZN12Unk_0201442012eatItemStartEv(void);
void _ZN12Unk_0201442013taskItemAct12Ev(void);
void _ZN12Unk_0201442013itemAct12WaitEv(void);
void _ZN12Unk_0201442014itemAct12StartEv(void);
void _ZN12Unk_0201442014taskReturnItemEv(void);
void _ZN12Unk_0201442014returnItemWaitEv(void);
void _ZN12Unk_0201442015returnItemStartEv(void);
void _ZN12Unk_0201442012taskKeepItemEv(void);
void _ZN12Unk_0201442012keepItemWaitEv(void);
void _ZN12Unk_0201442013keepItemStartEv(void);
void _ZN12Unk_0201442013taskItemAct0FEv(void);
void _ZN12Unk_0201442013itemAct0FWaitEv(void);
void _ZN12Unk_0201442014itemAct0FStartEv(void);
void _ZN12Unk_0201442012taskTakeItemEv(void);
void _ZN12Unk_0201442012takeItemWaitEv(void);
void _ZN12Unk_0201442013takeItemStartEv(void);
void _ZN12Unk_0201442012taskGiveItemEv(void);
void _ZN12Unk_020163609mainAct15EP16Unk_02015fe0_Obj(void);
void _ZN12Unk_0201636010act15Step3EP16Unk_02015fe0_Obj(void);
void _ZN12Unk_0201636010act15Step2EP16Unk_02015fe0_Obj(void);
void _ZN12Unk_0201636010act15Step1EP16Unk_02015fe0_Obj(void);
void _ZN12Unk_0201636010act15Step0EP16Unk_02015fe0_Obj(void);
void _ZN12Unk_02016a4410setupAct15EP12Unk_02006d14(void);
void _ZN12Unk_02016a449postAct14EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410setupAct14EP12Unk_02006d14(void);
void _ZN12Unk_02016a449postAct13EP12Unk_02006d14(void);
void _ZN12Unk_02016a449mainAct13EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410act13Step0EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410setupAct13EP12Unk_02006d14(void);
void _ZN12Unk_02016a449mainAct12EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410act12Step1Ev(void);
void _ZN12Unk_02016a4410act12Step0Ev(void);
void _ZN12Unk_02016a4410setupAct12EP12Unk_02006d14(void);
void _ZN12Unk_02016a449mainAct11EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410act11Step2Ev(void);
void _ZN12Unk_02016a4410act11Step1EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410act11Step0EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410setupAct11EP12Unk_02006d14(void);
void _ZN12Unk_02016a449postAct10EP12Unk_02006d14(void);
void _ZN12Unk_02016a4410setupAct10EP12Unk_02006d14(void);
void _ZN12Unk_02016a449postAct0FEP12Unk_02006d14(void);
void _ZN12Unk_02016a4410setupAct0FEP12Unk_02006d14(void);
void _ZN12Unk_02016a449postAct0EEv(void);
void _ZN12Unk_02016a449mainAct0EEP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep19EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep18EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep17EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep16EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep15EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep14EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep13EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep12EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep11EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep10EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep09EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep08EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep07EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep06EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep05EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep04EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep03EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep02EP12Unk_02006d14(void);
void _ZN12Unk_02016a4411act0EStep01EP12Unk_02006d14(void);
void _ZN12Unk_02017d7411act0EStep00EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410setupAct0EEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749postAct0DEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749mainAct0DEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0DStep4EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0DStep3EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0DStep2EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0DStep1EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0DStep0EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410setupAct0DEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749postAct0CEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410setupAct0CEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749postAct0BEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749mainAct0BEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0BStep0EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410setupAct0BEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749postAct0AEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d749mainAct0AEP16Unk_02017d74_Ctx(void);
void _ZN12Unk_02017d7410act0AStep0EP16Unk_02017d74_Ctx(void);
void _ZN12Unk_0201869810setupAct0AEP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct09EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct09EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct08EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct08EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989postAct07EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct07EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810act07Step0EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct07EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct06EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct05EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct05EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810act05Step1EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810act05Step0EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct04EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810act04Step1EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810act04Step0EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct04EP16Unk_02018698_Ctx(void);
void _ZN12Unk_020186989mainAct03EP16Unk_02018698_Ctx(void);
void _ZN12Unk_0201869810setupAct03EP16Unk_02018698_Ctx(void);
void _ZN13NpcActionCtrl9mainAct02EPh(void);
void _ZN13NpcActionCtrl10setupAct02EPh(void);
void _ZN13NpcActionCtrl9mainAct01EPh(void);
void _ZN13NpcActionCtrl10setupAct01EPh(void);
void _ZN13NpcActionCtrl9mainAct00Ev(void);
void _ZN13NpcActionCtrl10setupAct00EPh(void);
void _ZN12Unk_0201a13c20approachManualAnglesEv(void);
void _ZN12Unk_0201a13c11lookAtPointEP16Unk_0201a25c_Src(void);
void _ZN9NpcLookAt17lookAtTargetActorEP18Unk_0201a334_Scene(void);
void _ZN9NpcLookAt17lookAtLocalPlayerEP18Unk_0201a334_Scene(void);
void _ZN9NpcLookAt18lookAtTargetPlayerEP18Unk_0201a334_Scene(void);
void _ZN9NpcLookAt5relaxEv(void);
void _ZN12Unk_020d771012giveItemWaitEv(void);
void _ZN12Unk_020d771013giveItemStartEv(void);
void _ZN12Unk_020d771015taskCloseWindowEv(void);
void _ZN12Unk_020d771015closeWindowWaitEv(void);
void _ZN12Unk_020d771016closeWindowStartEv(void);
void _ZN12Unk_020d771016taskReopenWindowEv(void);
void _ZN12Unk_020d771012taskSubSceneEv(void);
void _ZN12Unk_020d771012subSceneWaitEv(void);
void _ZN12Unk_020d771012subSceneOpenEv(void);
void _ZN12Unk_020d771019subSceneCloseWindowEv(void);
void VillagerRoute_PickCoastBlock(void);
void VillagerRoute_PickRandomBlock(void);
void VillagerRoute_PickOwnHouseBlock(void);
void VillagerRoute_PickOwnHouseDoor(void);
void VillagerRoute_PickOtherHouseBlock(void);
void VillagerRoute_PickOtherHouseDoor(void);
void VillagerRoute_PickAttr200Target(void);
}
}
extern "C" {
extern void *data_020d7074[2];
extern void *data_020d707c[2];
extern void *data_020d7084[2];
extern void *data_020d708c[2];
extern void *data_020d7094[2];
extern void *data_020d709c[2];
extern void *data_020d70a4[2];
extern void *data_020d70ac[2];
extern void *data_020d70b4[2];
extern void *data_020d70bc[2];
extern void *data_020d70c4[2];
extern void *data_020d70cc[2];
extern void *data_020d70d4[2];
extern void *data_020d70dc[2];
extern void *data_020d70e4[2];
extern void *data_020d70ec[2];
extern void *data_020d70f4[2];
extern void *data_020d70fc[2];
extern void *data_020d7104[2];
extern void *data_020d710c[2];
extern void *data_020d7114[2];
extern void *data_020d711c[2];
extern void *data_020d7124[2];
extern void *data_020d712c[2];
extern void *data_020d7134[2];
extern void *data_020d713c[2];
extern void *data_020d7144[2];
extern void *data_020d714c[2];
extern void *data_020d7154[2];
extern void *data_020d715c[2];
extern void *data_020d7164[2];
extern void *data_020d716c[2];
extern void *data_020d7174[2];
extern void *data_020d717c[2];
extern void *data_020d7184[2];
extern void *data_020d718c[2];
extern void *data_020d7194[2];
extern void *data_020d719c[2];
extern void *data_020d71a4[2];
extern void *data_020d71ac[2];
extern void *data_020d71b4[2];
extern void *data_020d71bc[2];
extern void *data_020d71c4[2];
extern void *data_020d71cc[2];
extern void *data_020d71d4[2];
extern void *data_020d71dc[2];
extern void *data_020d71e4[2];
extern void *data_020d71ec[2];
extern void *data_020d71f4[2];
extern void *data_020d71fc[2];
extern void *data_020d7204[2];
extern void *data_020d720c[2];
extern void *data_020d7214[2];
extern void *data_020d721c[2];
extern void *data_020d7224[2];
extern void *data_020d722c[2];
extern void *data_020d7234[2];
extern void *data_020d723c[2];
extern void *data_020d7244[2];
extern void *data_020d724c[2];
extern void *data_020d7254[2];
extern void *data_020d725c[2];
extern void *data_020d7264[2];
extern void *data_020d726c[2];
extern void *data_020d7274[2];
extern void *data_020d727c[2];
extern void *data_020d7284[2];
extern void *data_020d728c[2];
extern void *data_020d7294[2];
extern void *data_020d729c[2];
extern void *data_020d72a4[2];
extern void *data_020d72ac[2];
extern void *data_020d72b4[2];
extern void *data_020d72bc[2];
extern void *data_020d72c4[2];
extern void *data_020d72cc[2];
extern void *data_020d72d4[2];
extern void *data_020d72dc[2];
extern void *data_020d72e4[2];
extern void *data_020d72ec[2];
extern void *data_020d72f4[2];
extern void *data_020d72fc[2];
extern void *data_020d7304[2];
extern void *data_020d730c[2];
extern void *data_020d7314[2];
extern void *data_020d731c[2];
extern void *data_020d7324[2];
extern void *data_020d732c[2];
extern void *data_020d7334[2];
extern void *data_020d733c[2];
extern void *data_020d7344[2];
extern void *data_020d734c[2];
extern void *data_020d7354[2];
extern void *data_020d735c[2];
extern void *data_020d7364[2];
extern void *data_020d736c[2];
extern void *data_020d7374[2];
extern void *data_020d737c[2];
extern void *data_020d7384[2];
extern void *data_020d738c[2];
extern void *data_020d7394[2];
extern void *data_020d739c[2];
extern void *data_020d73a4[2];
extern void *data_020d73ac[2];
extern void *data_020d73b4[2];
extern void *data_020d73bc[2];
extern void *data_020d73c4[2];
extern void *data_020d73cc[2];
extern void *data_020d73d4[2];
extern void *data_020d73dc[2];
extern void *data_020d73e4[2];
extern void *data_020d73ec[2];
extern void *data_020d73f4[2];
extern void *data_020d73fc[2];
extern void *data_020d7404[2];
extern void *data_020d740c[2];
extern void *data_020d7414[2];
extern void *data_020d741c[2];
extern void *data_020d7424[2];
extern void *data_020d742c[2];
extern void *data_020d7434[2];
extern void *data_020d743c[2];
extern void *data_020d7444[2];
extern void *data_020d744c[2];
extern void *data_020d7454[2];
extern void *data_020d745c[2];
extern void *data_020d7464[2];
extern void *data_020d746c[2];
extern void *data_020d7474[2];
extern void *data_020d747c[2];
extern void *data_020d7484[2];
extern void *data_020d748c[2];
extern void *data_020d7494[2];
extern void *data_020d749c[2];
extern void *data_020d74a4[2];
extern void *data_020d74ac[2];
extern void *data_020d74b4[2];
extern void *data_020d74bc[2];
extern void *data_020d74c4[2];
extern void *data_020d74cc[2];
extern void *data_020d74d4[2];
extern void *data_020d74dc[2];
extern void *data_020d74e4[2];
extern void *data_020d74ec[2];
extern void *data_020d74f4[2];
extern void *data_020d74fc[2];
extern void *data_020d7504[2];
extern void *data_020d750c[2];
extern void *data_020d7514[2];
extern void *data_020d751c[2];
extern void *data_020d7524[2];
extern void *data_020d752c[2];
extern void *data_020d7534[2];
extern void *data_020d753c[2];
extern void *data_020d7544[2];
extern void *data_020d754c[2];
extern void *data_020d7554[2];
extern void *data_020d755c[2];
extern void *data_020d7564[2];
extern void *data_020d756c[2];
extern void *data_020d7574[2];
extern void *data_020d757c[2];
extern void *data_020d7584[2];
extern void *data_020d758c[2];
extern void *data_020d7594[2];
extern void *data_020d759c[2];
extern void *data_020d75a4[2];
extern void *data_020d75ac[2];
extern void *data_020d75b4[2];
extern void *data_020d75bc[2];
extern void *data_020d75c4[2];
extern void *data_020d75cc[2];
extern void *data_020d75d4[2];
extern void *data_020d75dc[2];
extern void *data_020d75e4[2];
extern void *data_020d75ec[2];
extern void *data_020d75f4[2];
extern void *data_020d75fc[2];
extern void *data_020d7604[2];
extern void *data_020d760c[2];
extern void *data_020d7614[2];
extern void *data_020d761c[2];
extern void *data_020d7624[2];
extern void *data_020d762c[2];
extern void *data_020d7634[2];
extern void *data_020d763c[2];
extern void *data_020d7644[2];
extern void *data_020d764c[2];
extern void *data_020d7654[2];
extern void *data_020d765c[2];
extern void *data_020d7664[2];
extern void *data_020d766c[2];
extern void *data_020d7674[2];
extern void *data_020d767c[2];
extern void *data_020d7684[2];
extern void *data_020d768c[2];
extern void *data_020d7694[2];
extern void *data_020d769c[2];
extern void *data_020d76a4[2];
extern void *data_020d76ac[2];
extern void *data_020d76b4[2];
extern void *data_020d76bc[2];
extern void *data_020d76c4[2];
extern void *data_020d76cc[2];
extern void *data_020d76d4[2];
extern void *data_020d76dc[2];
extern void *data_020d76e4[2];
extern void *data_020d76ec[2];
extern void *data_020d76f4[2];
extern void *data_020d76fc[2];
extern void *data_020d7704[2];
}

namespace nR {
extern "C" void NpcActor_OnJointCalc(Unk_0201be34 *self) {
    u32 idx = self->unk_00->unk_01;
    NpcActor *p = self->unk_04->unk_2c;
    u16 tmp[2];
    Unk_0201be34_Mtx mB;
    Unk_0201be34_Mtx mA;
    Unk_020d77a4_Vec va;
    Unk_0201be34_Mtx mC;
    Unk_020d77a4_Vec vb;
    if (p != NULL) {
        BOOL isX;
        if (Item_IsFurniture(&p->unk_ea) != 0) {
            tmp[0] = 0xd011;
            isX = Item_GetFurnitureIndex(&p->unk_ea) == Item_GetFurnitureIndex(&tmp[0]) ? TRUE : FALSE;
        } else {
            isX = p->unk_ea == 0xd011 ? TRUE : FALSE;
        }
        if (isX && (Scene_InMuseumRoom() == 0 || Scene_GetMuseumRoom() != 1)) {
            if (idx == 0x10) {
                u8 *base = self->unk_d4;
                u16 off = *(u16 *)(base + 6);
                u8 *t = base + off;
                u32 n = *(u16 *)t;
                s32 o = *(s32 *)(t + n * idx + 4);
                s32 *v = (s32 *)(base + o);
                s32 *w = v + 1;
                Unk_0201be44_Dst *d = self->unk_b4;
                d->unk_4c.x = v[1];
                d->unk_4c.y = w[1];
                d->unk_4c.z = w[2];
            }
        } else {
            JointCb_UseRestTranslation(self, 0x800);
        }
    }
    if (idx == (u32)data_020c6d20 && p != NULL && p->unk_3b0 < 6) {
        Unk_0201be34_Mtx *m = &self->unk_b4->unk_28;
        if (p->unk_3ca != 0) {
            u32 a = (u16)p->unk_3ca >> 4;
            MTX_RotY33_(&mA, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            MTX_Concat33(m, &mA, m);
        }
        if (p->unk_3d2 != 0) {
            u32 a = (u16)p->unk_3d2 >> 4;
            MTX_RotX33_(&mB, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
            MTX_Concat33(m, &mB, m);
        }
    }
    if (idx == 0 && p != NULL) {
        BOOL isY;
        if (Item_IsFurniture(&p->unk_ea) != 0) {
            tmp[1] = 0xd016;
            isY = Item_GetFurnitureIndex(&p->unk_ea) == Item_GetFurnitureIndex(&tmp[1]) ? TRUE : FALSE;
        } else {
            isY = p->unk_ea == 0xd016 ? TRUE : FALSE;
        }
        if (isY) {
            Unk_0201be44_Dst *d = self->unk_b4;
            Unk_0201be34_Mtx *m = &d->unk_28;
            Unk_020d77a4_Vec *pv = &d->unk_4c;
            s32 r;
            va = *pv;
            vb = *pv;
            r = WorldCurve_Apply(&va, &vb);
            pv->z = va.z;
            pv->y = va.y - WorldCurve_GetRadius();
            if (r != 0) {
                u32 a = (u16)r >> 4;
                MTX_RotX33_(&mC, data_02135f44[a * 2], data_02135f44[a * 2 + 1]);
                MTX_Concat33(m, &mC, m);
            }
        }
    }
    if (p != NULL) {
        _ZN19ThreeLayerAnimModel21onJointCalcPostLayer3EP16Unk_02053a54_Msg(p->unk_ec, self);
    }
    self->unk_24 = NpcActor_SetJointCallbackNext;
    self->unk_92 = 3;
}
}

namespace nR {
extern "C" void NpcActor_SetJointCallbackNext(Unk_0201be34 *self) {
    self->unk_24 = NpcActor_JointCalcLayer3Cb;
    self->unk_92 = 1;
}
}

BOOL NpcActor::loadModel() {
    using namespace nR;
    s32 t = getModelPath();
    BOOL r = FALSE;
    if (_ZN11CachedModel4loadEPvS0_(unk_ec, t, gNpcModelHeap) != 0) {
        r = TRUE;
    }
    return r;
}

void NpcActor::releaseModel() {
    using namespace nR;
    _ZN11CachedModel7releaseEv(unk_ec);
}

u16 NpcActor::getNpcIndex() {
    using namespace nR;
    return unk_632;
}

void NpcActor::setNpcIndex(u16 v) {
    using namespace nR;
    unk_632 = v;
}

void NpcActor::setNpcHandle(u16 *p) {
    using namespace nR;
    unk_ea = *p;
    setNpcIndex(unk_ea & 0xfff);
    _ZN9Character9setCharIdEj(this, getNpcIndex());
}

void NpcActor::setCollisionRadius(s32 v) {
    using namespace nR;
    unk_638 = v;
}

namespace nR {
extern "C" BOOL NpcActor_IsFrontAngle(s32 x) {
    if (x < 0) {
        x = -x;
    }
    if (x < 0x4000) {
        return TRUE;
    }
    return FALSE;
}
}

BOOL NpcActor::isPosInFront(s16 *out, Unk_020d77a4_Vec *pos) {
    using namespace nR;
    *out = Math_AngleXZ(&unk_5c, pos);
    return NpcActor_IsFrontAngle((s16)(*out - unk_8e));
}

s32 NpcActor::getDistanceTo(NpcActor *other) {
    using namespace nR;
    s32 r = 0;
    if (other != NULL) {
        r = func_020e96a4(&other->unk_5c, &unk_5c);
    }
    return r;
}

s32 NpcActor::getDistanceToPlayer(u32 id) {
    using namespace nR;
    return getDistanceTo((NpcActor *)PlayerActor_GetCharacter(id));
}

BOOL NpcActor::isNear(NpcActor *other, s32 n) {
    using namespace nR;
    BOOL r = FALSE;
    if (other != NULL) {
        s32 d = getDistanceTo(other);
        if (d < 0) {
            d = -d;
        }
        if (d < n) {
            r = TRUE;
        }
    }
    return r;
}

BOOL NpcActor::isPlayerNear(s32 n, u32 id) {
    using namespace nR;
    return isNear((NpcActor *)PlayerActor_GetCharacter(id), n);
}

s32 NpcActor::getAngleTo(NpcActor *other) {
    using namespace nR;
    s32 r = 0;
    if (other != NULL) {
        r = Math_AngleXZ(&unk_5c, &other->unk_5c);
    }
    return r;
}

s32 NpcActor::getAngleToPlayer(u32 id) {
    using namespace nR;
    s32 result = 0;
    u8 flag;
    Unk_020d77a4_Vec vec;
    flag = 0;
    if (PlayerActor_GetSlotPosXZ(&flag, &vec, &vec.z, -1, id) != 0) {
        result = Math_AngleXZ(&unk_5c, &vec);
    } else {
        s32 p = PlayerActor_GetCharacter(id);
        if (p != 0) {
            result = getAngleTo((NpcActor *)p);
        }
    }
    return result;
}

s16 NpcActor::getRelativeAngleTo(NpcActor *other) {
    using namespace nR;
    return getAngleTo(other) - unk_8e;
}

s32 NpcActor::getPlayerActor(u32 id) {
    using namespace nR;
    return PlayerActor_GetCharacter(id);
}

void NpcActor::setTalkRequest(Unk_0201bc1c *p) {
    using namespace nR;
    unk_634 = p;
    if (unk_634 != NULL) {
        _ZN16ActorTalkRequest13setOwnerActorEP18Unk_02015b8c_Scene(unk_634, this);
    }
}

Unk_0201bc1c *NpcActor::getTalkRequest() {
    using namespace nR;
    return unk_634;
}

s32 NpcActor::getSpeakerGender() {
    using namespace nR;
    s32 r = 2;
    s32 v = getGender();
    switch (v) {
    case 0:
        r = 0;
        break;
    case 1:
        r = 1;
        break;
    }
    return r;
}

void NpcActor::setShirt() {
    using namespace nR;}

void NpcActor::onJoinTalk() {
    using namespace nR;}

void NpcActor::onLeaveTalk() {
    using namespace nR;}

BOOL NpcActor::getFreeOffsetPos(Unk_020d77a4_Vec *out, void *p) {
    using namespace nR;
    BOOL result = FALSE;
    Unk_020d77a4_Vec v;
    Npc_RotateOffsetXZ(&v, &unk_5c, p, unk_94);
    if (Npc_IsPosBlocked(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        result = TRUE;
    }
    return result;
}

s32 NpcActor::findAvoidPos(Unk_020d77a4_Vec *out) {
    using namespace nR;
    s32 r = _ZN9NpcLookAt15getObstacleBitsEv(unk_3a8);
    s32 result = 0;
    Unk_020d77a4_Vec *pv = &unk_5c;
    *out = *pv;
    switch (r) {
    case 3:
        result = 1;
        break;
    case 1:
        if (getFreeOffsetPos(out, (sNpcAvoidOffsets + 0xc)) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    case 2:
        if (getFreeOffsetPos(out, sNpcAvoidOffsets) != 0) {
            result = 2;
        } else {
            result = 1;
        }
        break;
    }
    return result;
}

s32 NpcActor::getAct0BAnimA() {
    using namespace nR;
    s32 i = getGender();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d48[i];
}

s32 NpcActor::getAct0BAnimB() {
    using namespace nR;
    s32 i = getGender();
    if (i >= 2) {
        i = 0;
    }
    return data_020c6d60[i];
}

u16 NpcActor::vfunc_9c() {
    using namespace nR;
    return data_020c6cc8;
}

void NpcActor::addMood() {
    using namespace nR;}

BOOL NpcActor::isNetOwner() {
    using namespace nR;
    Unk_020d77a4_Global *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) != 0 && unk_563 == 0) {
        u8 *p = NpcNetRecord_GetVar(&unk_ea);
        if (p != NULL && p[0] != 0) {
            if ((p[1] == 4 && NetArea_IsLocalOwner() != 0) || p[1] == g->unk_64) {
                return TRUE;
            }
            return FALSE;
        }
        return FALSE;
    }
    return TRUE;
}

s32 NpcActor::netSetSlots(s32 a, s32 b, s32 c) {
    using namespace nR;
    return NpcNetRecord_SetSlotsAndSync(a, b, c, &unk_ea);
}

void NpcActor::netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...) {
    using namespace nR;
    NpcNetRecord_SetSlots(&unk_ea, b, c);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) != 0) {
        if (isNetOwner() != 0) {
            s32 t = (unk_ea & 0xf000) >> 12;
            if (t == 0xe) {
                CommSyncVar_SetVar(getNpcIndex() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                CommSyncVar_SetVar(getNpcIndex() + 0x20, &a, 0, 0);
            }
        }
    }
}

s32 NpcActor::func_0201b9e8(s32 a, s32 b) {
    using namespace nR;
    return NpcNetRecord_GetSlots(a, b, &unk_ea);
}

BOOL NpcActor::netIsTalkLocked() {
    using namespace nR;
    s32 a = 4;
    s32 b = 4;
    if (func_0201b9e8((s32)&a, (s32)&b) != 0) {
        if (b < 4) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL NpcActor::getNetUserBytes(u8 *src, u32 n) {
    using namespace nR;
    if (unk_563 == 0) {
        u8 *p = NpcNetRecord_GetVar(&unk_ea);
        if (n > 4) {
            n = 4;
        }
        if (p != NULL) {
            MI_CpuCopy8(p + 0xb, src, n);
            return TRUE;
        }
    }
    return FALSE;
}

void NpcActor::setNetUserBytes(void *dst, s32 n) {
    using namespace nR;
    if (n > 4) {
        n = 4;
    }
    MI_CpuCopy8(dst, unk_62d, n);
}

void NpcActor::netSendState(u32 a, ...) {
    using namespace nR;
    NpcNetRecord_SetState(&unk_ea, Scene_GetCurrent(), &unk_5c, unk_8e, unk_568, unk_62d);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) != 0) {
        if (isNetOwner() != 0) {
            s32 t = (unk_ea & 0xf000) >> 12;
            if (t == 0xe) {
                CommSyncVar_SetVar(getNpcIndex() + 0xc, &a, 0, 0);
            } else if (t == 0xd) {
                CommSyncVar_SetVar(getNpcIndex() + 0x20, &a, 0, 0);
            }
        }
    }
}

BOOL NpcActor::netReadPosition(s32 *a, u8 *b) {
    using namespace nR;
    if (unk_563 == 0) {
        u8 *p = NpcNetRecord_GetVar(&unk_ea);
        if (p != NULL) {
            NetBuf_UnpackPair20(p + 4, a, a + 2);
            MI_CpuCopy8(p + 9, b, 2);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL NpcActor::netReadAction(s32 *a, s32 *b, u8 *c) {
    using namespace nR;
    u8 *p = NpcNetRecord_GetVar(&unk_ea);
    if (p != NULL) {
        *a = p[0xf];
        *b = p[0x10];
        MI_CpuCopy8(p + 0x11, c, 0xd);
        return TRUE;
    }
    return FALSE;
}

u8 NpcActor::isUpdating() {
    using namespace nR;
    return unk_561;
}

BOOL NpcActor::vfunc_04() {
    using namespace nR;
    u16 tmp;
    if (_ZN9Character8vfunc_04Ev(this) == 0) {
        return FALSE;
    }
    tmp = unk_08;
    setNpcHandle(&tmp);
    unk_634 = NULL;
    setCollisionRadius(0xd00);
    _ZN14NpcSpeechState5resetEv(unk_418);
    _ZN11NpcTalkCtrl5resetEv(unk_618);
    _ZN12NpcEmotionFx5resetEv(unk_420);
    unk_560 = 0;
    _ZN12Unk_0201ac885resetEv(unk_350);
    unk_62c = 0;
    MI_CpuFill8(unk_62d, 0, 4);
    _ZN12Unk_02003c3013func_02003e40Ev(unk_514);
    unk_438 = unk_514;
    _ZN12Unk_0201347414resetFootstepsEv(unk_558);
    unk_510 = 1;
    unk_511 = 1;
    _ZN19Unk_020133cc_Player22resetLastTaughtEmotionEv(this);
    unk_561 = 1;
    unk_562 = 1;
    unk_628 = 0;
    _ZN9Character13setAreaSyncedEv(this);
    return TRUE;
}

BOOL NpcActor::vfunc_00() {
    using namespace nR;
    if (NetArea_IsLocalOwner() != 0) {
        netSetSlots(1, gCommManager->unk_64, 4);
    }
    if (loadModel() == 0) {
        return FALSE;
    }
    unk_a0 = 0xffffec00;
    unk_9c = 0;
    _ZN11NpcMoveCtrl14setTargetAngleEs(unk_350, unk_8e);
    unk_447 = Npc_GetInfoByte2(&unk_ea);
    return TRUE;
}

void NpcActor::postCreate(s32 x) {
    using namespace nR;
    if (x == 2) {
        if (NetArea_IsLocalOwner() == 0) {
            if ((unk_4e8 & 2) == 0) {
                unk_4e8 |= 2;
                unk_62c = 1;
            }
        }
        if (unk_563 == 0) {
            netSendState(1);
        }
    }
    _ZN9Character10postCreateEi(this, x);
}

BOOL NpcActor::updateAct() {
    using namespace nR;
    return TRUE;
}

BOOL NpcActor::onExecute() {
    using namespace nQ;
    Unk_0201b2b8_S s;
    struct Unk_0201b2b8_L { s32 a, b, x, y, z; } L;
    Unk_0201b2b8_T30 t;
    u8 buf[0x10];
    Unk_020d77a4_Vec3 v;
    s32 cur;

    NpcActor_UpdateMovement(((void *)((u8 *)this + (0x350))), this);
    updateAct();
    if ((*(u8 *)((u8 *)this + (0x561))) == 0) {
        return TRUE;
    }
    if (!_ZN8NpcActor10isNetOwnerEv(this)) {
        L.a = 0x16;
        L.b = 0;
        if (_ZN8NpcActor13netReadActionEPiS0_Ph(this, &L.a, &L.b, buf)) {
            if (L.b == 1 && (u32)L.a <= 2) {
                if (_ZN13NpcActionCtrl9getActionEv(((void *)((u8 *)this + (0x564)))) != 0x15) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(((void *)((u8 *)this + (0x564))), 0x15, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
                if ((u32)(L.a - 1) <= 1) {
                    (*(s32 *)((u8 *)this + (0x564))) = L.a;
                } else {
                    (*(s32 *)((u8 *)this + (0x564))) = 0;
                }
            } else {
                cur = L.a;
                if (cur != _ZN13NpcActionCtrl9getActionEv(((void *)((u8 *)this + (0x564))))) {
                    L.x = 0;
                    s.h2 = 0;
                    s.h4 = 0;
                    L.y = 0;
                    s.h6 = 0;
                    s.h8 = 0;
                    L.b = 3;
                    switch (cur) {
                    case 0:
                        _ZN13NpcActionCtrl12requestStandEjt(((void *)((u8 *)this + (0x564))), L.b, data_020c6cc8);
                        break;
                    case 1:
                    case 2:
                        NpcAction_UnpackMove(&L.x, &L.x, &L.y, &L.y, &s.h2, &s.h6, buf);
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(((void *)((u8 *)this + (0x564))), L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 3:
                        NpcAction_UnpackTurn(&s.h2, (u16 *)&s.h4, &s.h6, buf);
                        _ZN13NpcActionCtrl13requestActionEjiiissiitt(((void *)((u8 *)this + (0x564))), L.a, L.b, L.x, 0, s.h2, s.h4, L.y, 0, s.h6, 0);
                        break;
                    case 12:
                        L.z = 0x137;
                        s.b0 = 0;
                        NpcAction_UnpackAnim((u32 *)&L.z, &s, &s.h6, &s.h8, buf);
                        _ZN13NpcActionCtrl15requestPlayAnimEiijtt(((void *)((u8 *)this + (0x564))), L.b, L.z, s.b0, s.h6, s.h8);
                        break;
                    case 20:
                        s.ha = 0xfff1;
                        NpcAction_UnpackItem(&s.ha, buf);
                        _ZN12Unk_02016a4412requestAct14EiPt(((void *)((u8 *)this + (0x564))), L.b, &s.ha);
                        break;
                    }
                }
            }
        }
    }
    _ZN11NpcTalkCtrl6updateEP16Unk_02013b10_Ctx(((void *)((u8 *)this + (0x618))), this);
    _ZN13NpcActionCtrl6updateEPh(((void *)((u8 *)this + (0x564))), this);
    _ZN12NpcEmotionFx6updateEPvsit(((void *)((u8 *)this + (0x420))), ((void *)((u8 *)this + (0x478))), (*(s16 *)((u8 *)this + (0x8e))), _ZN12Unk_02015b8c9getAnimIdEj(((void *)((u8 *)this + (0x334))), 0), ((Unk_0201b2b8_Bits *)((void *)((u8 *)this + (0x190))))->mid);
    _ZN11NpcMoveCtrl10updateTurnEP18Unk_0201a334_Scene(((void *)((u8 *)this + (0x350))), this);
    if (NetArea_IsLocalOwner() && (*(u8 *)((u8 *)this + (0x510))) && (*(s32 *)((u8 *)this + (0x638))) > 0) {
        Collision_Move(((void *)((u8 *)this + (0x49c))), ((void *)((u8 *)this + (0x5c))), ((void *)((u8 *)this + (0x68))), (*(s16 *)((u8 *)this + (0x8e))), (*(s32 *)((u8 *)this + (0x638))), this, 0xf);
    }
    (*(s32 *)((u8 *)this + (0x60))) = Ground_GetDefaultY(0);
    _ZN12Unk_0201a13c6updateEP17Unk_0201a1e0_Base(((void *)((u8 *)this + (0x3b0))), this);
    _ZN16NpcObstacleProbe5clearEv(((void *)((u8 *)this + (0x3a8))));
    _ZN16NpcObstacleProbe5probeEP18Unk_0201a334_Scene(((void *)((u8 *)this + (0x3a8))), this);
    (*(u16 *)((u8 *)this + (0xd0))) = WorldCurve_ToCurved(((void *)((u8 *)this + (0xc4))), ((void *)((u8 *)this + (0x5c))));
    _ZN5Actor15calcModelMatrixEPv(this, &t);
    (*(Unk_0201b2b8_T30 *)((u8 *)this + (0x150))) = t;
    if (_ZN8NpcActor15netIsTalkLockedEv(this)) {
        if (((*(u32 *)((u8 *)this + (0x4e8))) & 2) == 0 && NetArea_IsLocalOwner()) {
            (*(u32 *)((u8 *)this + (0x4e8))) |= 2;
            (*(u8 *)((u8 *)this + (0x62c))) = 1;
        }
    } else if ((*(u8 *)((u8 *)this + (0x62c))) == 1 && NetArea_IsLocalOwner()) {
        (*(u32 *)((u8 *)this + (0x4e8))) &= ~2;
        (*(u8 *)((u8 *)this + (0x62c))) = 0;
    }
    if ((*(u8 *)((u8 *)this + (0x510)))) {
        _ZN13ActorCollider6submitEv(((void *)((u8 *)this + (0x4cc))));
    } else {
        _ZN13ActorCollider8resetHitEv(((void *)((u8 *)this + (0x4cc))));
    }
    _ZN12Unk_02015b8c6updateEP18Unk_02015b8c_Scene(((void *)((u8 *)this + (0x334))), this);
    _ZN19ThreeLayerAnimModel13updateLayers3Ev(((void *)((u8 *)this + (0xec))));
    Unk_020d77a4_Vec3 *pp = (Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x5c)));
    v.x = (*(s32 *)((u8 *)this + (0x5c)));
    v.y = pp->y;
    v.z = pp->z;
    _ZN12Unk_02003c4013func_02003df4EP16Unk_02003a6c_Vec(((void *)((u8 *)this + (0x514))), &v);
    if ((*(s32 *)((u8 *)this + (0x628)))) {
        _ZN13HeldToolModel6updateEP12Unk_02006d14((*(s32 *)((u8 *)this + (0x628))), this);
    }
    _ZN12Unk_0201347415updateFootstepsEP19Unk_020133cc_Player(((void *)((u8 *)this + (0x558))), this);
    _ZN11NpcFaceAnim6updateEPh(((void *)((u8 *)this + (0x2ac))), this);
    _ZN13NpcActionCtrl10postUpdateEPh(((void *)((u8 *)this + (0x564))), this);
    if ((*(u8 *)((u8 *)this + (0x563))) == 0) {
        _ZN8NpcActor12netSendStateEjz(this, 1);
    }
    return TRUE;
}

BOOL NpcActor::onDraw() {
    using namespace nQ;
    Unk_0201b138_Buf buf;
    Unk_020d77a4_Vec3 t0, t1, t2;
    if ((*(u8 *)((u8 *)this + (0x561))) == 0) {
        Unk_020d77a4_Vec3 *p = (Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x478))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x47c))) = p->y;
        (*(s32 *)((u8 *)this + (0x480))) = p->z;
        (*(s32 *)((u8 *)this + (0x484))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x488))) = p->y;
        (*(s32 *)((u8 *)this + (0x48c))) = p->z;
        (*(s32 *)((u8 *)this + (0x490))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x494))) = p->y;
        (*(s32 *)((u8 *)this + (0x498))) = p->z;
        return TRUE;
    }
    if ((*(u8 *)((u8 *)this + (0x562))) == 0) {
        Unk_020d77a4_Vec3 *p = (Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x478))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x47c))) = p->y;
        (*(s32 *)((u8 *)this + (0x480))) = p->z;
        (*(s32 *)((u8 *)this + (0x484))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x488))) = p->y;
        (*(s32 *)((u8 *)this + (0x48c))) = p->z;
        (*(s32 *)((u8 *)this + (0x490))) = (*(s32 *)((u8 *)this + (0x5c)));
        (*(s32 *)((u8 *)this + (0x494))) = p->y;
        (*(s32 *)((u8 *)this + (0x498))) = p->z;
        return TRUE;
    }
    _ZN17TwoLayerAnimModel11drawLayeredEj(((void *)((u8 *)this + (0xec))), 0);
    _ZN11NpcMoveCtrl12storeHeadMtxEP12Unk_02006d14(((void *)((u8 *)this + (0x3b0))), this);
    Model_GetJointWorldMtx(((void *)((u8 *)this + (0xec))), ((void *)((u8 *)this + (0x448))), 0xb);
    Model_GetJointWorldMtx(((void *)((u8 *)this + (0xec))), &buf, 0x10);
    t0 = buf.v;
    WorldCurve_FromCurved((Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x478))), &t0);
    Model_GetJointWorldMtx(((void *)((u8 *)this + (0xec))), &buf, 0x7);
    t1 = buf.v;
    WorldCurve_FromCurved((Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x484))), &t1);
    Model_GetJointWorldMtx(((void *)((u8 *)this + (0xec))), &buf, 0x4);
    t2 = buf.v;
    WorldCurve_FromCurved((Unk_020d77a4_Vec3 *)((void *)((u8 *)this + (0x490))), &t2);
    if ((*(u8 *)((u8 *)this + (0x511))) != 0) {
        CharaShadow_Draw(((void *)((u8 *)this + (0x5c))), 0xb00, 0x4000, 0x1000);
    }
    return TRUE;
}

void NpcActor::vfunc_30() {
    using namespace nQ;}

BOOL NpcActor::vfunc_0c() {
    using namespace nQ;
    _ZN8NpcActor12releaseModelEv(this);
    _ZN11NpcFaceAnim7releaseEv(((void *)((u8 *)this + (0x2ac))));
    _ZN12Unk_02015b8c7releaseEv(((void *)((u8 *)this + (0x334))));
    _ZN12Unk_02003c3013func_02003dccEv(((void *)((u8 *)this + (0x514))));
    if ((*(u8 *)((u8 *)this + (0x563))) == 0) {
        _ZN8NpcActor12netSendStateEjz(this, 1);
    }
    return TRUE;
}

BOOL NpcActor::vfunc_5c(Unk_020d77a4_Vec3 *out) {
    using namespace nQ;
    s32 a = (*(s32 *)((u8 *)this + (0x46c)));
    if (a == 0 && (*(s32 *)((u8 *)this + (0x470))) == 0 && (*(s32 *)((u8 *)this + (0x474))) == 0) {
        return FALSE;
    }
    out->x = a;
    out->y = (*(s32 *)((u8 *)this + (0x470)));
    out->z = (*(s32 *)((u8 *)this + (0x474)));
    WorldCurve_FromCurved(out, out);
    return TRUE;
}

void NpcActor::vfunc_4c(s32 v) {
    using namespace nQ;
    if (v == 8) {
        PlayerActor_SetNoFaceTalkTarget(0, 4);
    }
}

s32 NpcActor::onToolHit() {
    using namespace nQ; return 0; }

s32 NpcActor::vfunc_64() {
    using namespace nQ; return 0; }

namespace nQ {
extern "C" void NpcActor_FindFreeUnitNear(V3 *out, NpcActor *self, V3 *in) {
    V3 a, b, cand1, cand2, arr[4], tmp, t1, t2, t3, t4;
    u32 m0, m1;
    s32 best, bestDist, d1, i1, dir0, dir1, best2, d, d0, i, j;
    u8 *g;
    s32 z0, z1, z2, z3;
    *out = *in;
    g = gSceneBlockMap;
    m0 = _ZN8BlockMap17getWalkLinksAtPosEPv(g, (V3 *)((u8 *)self + 0x5c));
    m1 = _ZN8BlockMap17getWalkLinksAtPosEPv(g, in);
    FieldPos_SnapToUnitCenter(&a, (V3 *)((u8 *)self + 0x5c));
    FieldPos_SnapToUnitCenter(&b, in);
    best = 0;
    a.y = 0;
    b.y = 0;
    if (m0 == 0) {
        bestDist = best;
        i1 = z0 = best;
        for (i1 = i1; i1 < 4; i1++) {
            func_01ffd070(&t1, &a, (V3 *)(data_020c6dcc + i1 * 12));
            cand1 = t1;
            d1 = func_020e9650((V3 *)((u8 *)self + 0x5c), &cand1);
            if (_ZN8BlockMap17getWalkLinksAtPosEPv(g, &cand1) && TownMap_IsPosWalkable(&cand1, z0)) {
                if (bestDist == 0 || bestDist > d1) {
                    bestDist = d1;
                    best = i1;
                }
            }
        }
        if (bestDist != 0) {
            func_01ffd070(&t2, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t2;
        } else {
            *out = *in;
        }
    } else {
        best2 = best;
        d0 = func_020e9650(in, &a);
        func_02133ef8(arr, 0x30);
        u32 ang = *(u16 *)((u8 *)self + 0x8e);
        if (ang >= 0xe000 || ang < 0x2000) {
            dir0 = 2;
            dir1 = 0;
        } else if (ang < 0x6000) {
            dir0 = 3;
            dir1 = 1;
        } else if (ang < 0xa000) {
            dir0 = 0;
            dir1 = 2;
        } else {
            dir0 = 1;
            dir1 = 3;
        }
        if (_ZN11CommManager8isOnlineEv(gCommManager)) {
            u32 k;
            z1 = 0;
            for (k = 0; k < 4; k++) {
                V3 *p = PlayerActor_GetBodyPos(k);
                if (p) {
                    FieldPos_SnapToUnitCenter(&tmp, p);
                    tmp.y = z1;
                    arr[k] = tmp;
                }
            }
        }
        z2 = z3 = 0;
        for (i = z2; i < 4; i++) {
            func_01ffd070(&t3, &a, (V3 *)(data_020c6dcc + i * 12));
            cand2 = t3;
            d = func_020e9650(in, &cand2);
            if (i == dir0) {
                d -= 0x2000;
            } else if (i == dir1) {
                d += 0x2000;
            }
            for (j = z2; j < 4; j++) {
                func_020e972c(&cand2, &arr[j]);
            }
            if (TownMap_IsPosWalkable(&cand2, z3) && (m0 & data_020c6d84[i])) {
                if (best2 == 0 || best2 > d) {
                    best2 = d;
                    best = i;
                }
            }
        }
        if (m1 == 0 && best2 > d0) {
            *out = *(V3 *)((u8 *)self + 0x5c);
        } else {
            func_01ffd070(&t4, &a, (V3 *)(data_020c6dcc + best * 12));
            *out = t4;
        }
    }
}
}

namespace nQ {
extern "C" void NpcActor_CanPlayerPay(void *self, s32 v) {
    PlayerInventory_CanAddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), -v, 1, 0);
}
}

namespace nQ {
extern "C" void NpcActor_ChargePlayer(void *self, s32 v) {
    PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), -v, 1);
}
}

namespace nQ {
extern "C" s32 NpcActor_CheckPayoutFits(void *self, s32 v, s32 w) {
    void *p = PlayerData_GetCurrent() ? _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()) : 0;
    s32 lo = p ? PlayerInventory_GetBellsRoom(p, 0, 0) : 0;
    s32 hi = p ? PlayerInventory_GetBellsRoom(p, 1, w) : 0;
    s32 r = 2;
    if (v <= lo) {
        r = 0;
    } else if (v <= hi) {
        r = 1;
    }
    return r;
}
}

namespace nQ {
extern "C" void NpcActor_PayPlayer(void *self, s32 v) {
    PlayerInventory_AddBells(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), v, 1);
}
}

Unk_0201ad3c::Unk_0201ad3c() {
    using namespace nQ;
    unk_00 = 0;
    unk_04 = 1;
    unk_08 = 2;
}

void NpcMoveAnimSet::func_0201ad38() {
    using namespace nQ;}

void NpcMoveAnimSet::setStandAnim(s32 v) {
    using namespace nQ; unk_00 = v; }

void NpcMoveAnimSet::setWalkAnim(s32 v) {
    using namespace nQ; unk_04 = v; }

void NpcMoveAnimSet::setRunAnim(s32 v) {
    using namespace nQ; unk_08 = v; }

s32 NpcMoveAnimSet::getStandAnim() {
    using namespace nQ; return unk_00; }

s32 NpcMoveAnimSet::getWalkAnim() {
    using namespace nQ; return unk_04; }

s32 NpcMoveAnimSet::getRunAnim() {
    using namespace nQ; return unk_08; }

Unk_0201ad18::Unk_0201ad18() {
    using namespace nQ;
    unk_00 = 0;
    unk_02 = 0;
}

s32 Unk_0201acf8::func_0201acfc() {
    using namespace nQ;
    s32 r = 2;
    u32 v = unk_00;
    if (v < 100) {
        r = 0;
    } else if (v < 0x320) {
        r = 1;
    }
    return r;
}

void Unk_0201acf8::func_0201acf8(u16 v) {
    using namespace nQ; unk_02 = v; }

Unk_0201accc::Unk_0201accc() {
    using namespace nQ;
    unk_00 = 0x1000;
    unk_04 = 0;
    unk_08 = 0;
    unk_30 = 5;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_54 = 0;
    unk_55 = 0;
}

void Unk_0201ac88::func_0201acc8() {
    using namespace nQ;}

void Unk_0201ac88::reset() {
    using namespace nQ;
    unk_00 = 0x1000;
    unk_04 = 0;
    unk_08 = 0;
    unk_30 = 5;
    unk_38 = 0;
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_54 = 0;
    unk_55 = 0;
    MI_CpuCopy8(sNpcMoveSpeedPresets, unk_0c, 0x24);
}

namespace nQ {
extern "C" void NpcActor_UpdateMovement(void *a, void *b) { _ZN11NpcMoveCtrl13applyMovementEP18Unk_0201a334_Scene(a, b); }
}

void NpcMoveCtrl::applyMovement(Unk_0201a334_Scene *scene) {
    using namespace nP;
    s32 lo = unk_00.x;
    if (lo == 0) {
        scene->unk_98 = 0;
    } else {
        s32 hi = unk_00.y;
        if (hi >= lo) {
            hi = unk_00.z;
        }
        func_020e759c(&scene->unk_98, lo, hi);
        s32 ang = Math_AngleXZ(&scene->unk_5c, &unk_44);
        if (ang == scene->unk_94) {
            s32 d = func_020e9650(&unk_44, &scene->unk_5c);
            if (d < scene->unk_98) {
                scene->unk_98 = d;
            }
        }
    }
    _ZN5Actor14updatePositionEP16Unk_02002cb0_Vec(scene, (u8 *)scene + 0x4cc);
}

void NpcMoveCtrl::setMoveMode(Unk_0201a334_Scene *scene, s32 mode, s16 ang, u16 extra) {
    using namespace nP;
    if (mode < 0 || mode >= 5) {
        mode = 0;
    }
    Unk_0201ab4c_Ent *e = &sNpcMoveModeTable[mode];
    Unk_0201a334_Vec3 *src = &unk_0c[e->unk_08];
    unk_00.x = src->x;
    unk_00.y = src->y;
    unk_00.z = src->z;
    if (ang == 0) {
        unk_36 = e->unk_04;
    } else {
        unk_36 = ang;
    }
    unk_50 = e->unk_0c;
    if (mode != 4) {
        if ((unk_54 == 1 && e->unk_10 == 1) || _ZN11NpcAnimCtrl13isPlayingAnimEiPv((u8 *)scene + 0x334, e->unk_00, (u8 *)scene + 0x2a0)) {
            _ZN12Unk_02015b8c17playAnimKeepFrameEP18Unk_02015b8c_Scenejjj((u8 *)scene + 0x334, scene, e->unk_00, extra, 0);
        } else {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti((u8 *)scene + 0x334, scene, e->unk_00, extra, 0, 0x1000, 0, 0);
        }
    }
    unk_30 = mode;
    unk_54 = e->unk_10;
}

s32 NpcMoveCtrl::getMoveMode() {
    using namespace nP;
    return unk_30;
}

void NpcMoveCtrl::aimAtDestination(Unk_0201a334_Scene *scene) {
    using namespace nP;
    unk_34 = Math_AngleXZ(&scene->unk_5c, &unk_44);
}

s32 NpcMoveCtrl::stepAngle(s16 *p, s16 target, s16 step, u8 mode) {
    using namespace nP;
    s32 lim;
    s32 r;
    s16 t;
    if (step < 0) {
        lim = (s16)-step;
    } else {
        lim = step;
    }
    r = 0;
    if (step != 0) {
        switch (mode) {
        case 1:
        case 2:
            if (func_020e780c(target, *p) <= lim) {
                if ((s16)(*p - target) > 0) {
                    step = (s16)-step;
                }
            } else {
                if (mode == 1) {
                    step = (s16)lim;
                } else {
                    step = (s16)-lim;
                }
            }
            break;
        default:
            if ((s16)(*p - target) > 0) {
                step = (s16)-step;
            }
            break;
        }
        *p = *p + step;
        s32 x = *p - target;
        s32 d = (s16)x;
        if (d < 0) { d = (s16)-d; }
        s32 m = step < 0 ? (s32)(s16)-step : step;
        if (d <= m && (s16)x * step >= 0) {
            *p = target;
            r = 1;
        }
    } else if (*p == target) {
        r = 1;
    }
    return r;
}

void NpcMoveCtrl::updateTurn(Unk_0201a334_Scene *scene) {
    using namespace nP;
    if (getMoveMode() == 4) {
        scene->unk_94 = unk_34;
    } else {
        stepAngle(&scene->unk_94, unk_34, unk_36, unk_55);
        *(s16 *)((u8 *)scene + 0x8e) = scene->unk_94;
    }
}

void NpcMoveCtrl::setWaypoint(Unk_0201a334_Vec3 *v) {
    using namespace nP;
    if (func_020e972c(&unk_38, &unk_44)) {
        setDestination(v);
    }
    unk_38.x = v->x;
    unk_38.y = v->y;
    unk_38.z = v->z;
}

Unk_0201a334_Vec3 *NpcMoveCtrl::getDestinationB() {
    using namespace nP;
    return &unk_44;
}

BOOL NpcMoveCtrl::hasArrived(Unk_0201a334_Scene *scene, s32 which) {
    using namespace nP;
    Unk_0201a334_Vec3 v;
    BOOL r;
    Unk_0201a334_Vec3 *sp = &scene->unk_5c;
    v.x = sp->x;
    v.y = sp->y;
    v.z = sp->z;
    r = FALSE;
    v.y = 0;
    s32 d;
    if (which != 0) {
        d = func_020e96a4(&v, &unk_38);
    } else {
        d = func_020e96a4(&v, &unk_44);
    }
    if (d < unk_50) {
        r = TRUE;
    }
    return r;
}

void NpcMoveCtrl::setTargetAngle(s16 v) {
    using namespace nP;
    unk_34 = v;
}

s32 NpcMoveCtrl::getTargetAngle() {
    using namespace nP;
    return unk_34;
}

s32 NpcMoveCtrl::getTurnSpeed() {
    using namespace nP;
    return unk_36;
}

void NpcMoveCtrl::setDestination(Unk_0201a334_Vec3 *v) {
    using namespace nP;
    unk_44.x = v->x;
    unk_44.y = v->y;
    unk_44.z = v->z;
}

Unk_0201a334_Vec3 *NpcMoveCtrl::getDestination() {
    using namespace nP;
    return &unk_44;
}

s32 NpcMoveCtrl::hasNextLeg() {
    using namespace nP;
    return func_020e96ec(&unk_38, &unk_44);
}

namespace nP {
extern "C" void Npc_RotateOffsetXZ(Unk_0201a334_Vec3 *out, Unk_0201a334_Vec3 *base, Unk_0201a334_Vec3 *off, u32 ang) {
    s32 i = ((u16)ang >> 4) << 1;
    s32 s = data_02135f44[i];
    s32 c = data_02135f44[i + 1];
    s32 a = func_01ffcb0c(off->x, c);
    out->x = base->x + a + func_01ffcb0c(off->z, s);
    out->y = 0;
    s32 d = func_01ffcb0c(off->x, s);
    out->z = base->z - d + func_01ffcb0c(off->z, c);
}
}

void NpcMoveCtrl::resetDestination() {
    using namespace nP;
    unk_44.x = unk_38.x;
    unk_44.y = unk_38.y;
    unk_44.z = unk_38.z;
}

void NpcMoveCtrl::setSpeedPreset(s32 idx, s32 x, s32 y, s32 z) {
    using namespace nP;
    if (idx >= 1 && idx < 3) {
        Unk_0201a334_Vec3 *e = &unk_0c[idx];
        e->x = x;
        e->y = y;
        e->z = z;
    }
}

void NpcMoveCtrl::func_0201a8cc() {
    using namespace nP;
}

void NpcMoveCtrl::setTurnMode(u8 v) {
    using namespace nP;
    unk_55 = v;
}

Unk_0201a8bc::Unk_0201a8bc() {
    using namespace nP;
    unk_00 = 0;
}

void NpcObstacleProbe::clear() {
    using namespace nP;
    unk_00 = 0;
}

namespace nP {
extern "C" BOOL Npc_IsPosBlocked(Unk_0201a334_Vec3 *pos) {
    u32 buf[16];
    if (Unk_0201a834_IsOne(gFieldSceneKind)) {
        if (Ground_GetExitAtPos((s32)pos) != -1) {
            return TRUE;
        }
        if (FtrMgr_GetSurfaceHeightAtPos((s32)pos)) {
            return TRUE;
        }
        return FALSE;
    }
    _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(buf, (s32)pos, 0, 0);
    s32 r;
    if (buf[12] != 0 || _ZN14GroundInfoBase9getHeightEi(buf, 1) > 0 || Collision_HasUnitShapeAt((s32)pos)) {
        r = 1;
    } else {
        r = 0;
    }
    GroundInfo_Destruct(buf);
    return r;
}
}

void NpcObstacleProbe::probe(Unk_0201a334_Scene *scene) {
    using namespace nP;
    for (s32 i = 0; i < 2; i++) {
        Unk_0201a334_Vec3 v;
        Npc_RotateOffsetXZ(&v, &scene->unk_5c, &sNpcObstacleProbeOffsets[i], *(s16 *)((u8 *)scene + 0x94));
        if (Npc_IsPosBlocked(&v)) {
            unk_00 |= 1 << i;
        }
    }
}

u8 NpcLookAt::getObstacleBits() {
    using namespace nP;
    return unk_00;
}

Unk_0201a794::Unk_0201a794() {
    using namespace nP;
    unk_00 = 1;
    unk_04 = 0;
    unk_08.x = 0;
    unk_08.y = 0;
    unk_08.z = 0;
    unk_14 = 0;
    unk_1a = 0;
    unk_1c = 0x200;
    unk_1e = 0;
    unk_20 = 0x1a00;
    unk_22 = 0;
    unk_24 = 0x400;
    unk_26 = 0;
    unk_28 = 0x3000;
    unk_18 = 0;
    unk_2a = 0;
    unk_5c = 0x8000;
    unk_60 = 1;
    unk_64 = 4;
}

void NpcLookAt::clearTargetActor() {
    using namespace nP;
    unk_04 = 0;
}

void NpcLookAt::disable() {
    using namespace nP;
    unk_18 = 1;
}

void NpcMoveCtrl::storeHeadMtx(Unk_02006d14 *p) {
    using namespace nP;
    if (p != 0) {
        MsgRequest &s = *p;
        Model_GetJointWorldMtx(&s, (u8 *)this + 0x2c, 0xf);
    }
}

namespace nP {
extern "C" s32 NpcLookAt_GetHeadPos(Unk_0201a734_Obj *self, Unk_0201a334_Vec3 *out) {
    s32 r = 0;
    s32 x = self->x;
    if (x != 0 || self->y != 0 || self->z != 0) {
        out->x = x;
        out->y = self->y;
        out->z = self->z;
        WorldCurve_FromCurved(out);
        r = 1;
    }
    return r;
}
}

void NpcLookAt::setPitchLimit(s16 v) {
    using namespace nP;
    unk_20 = v;
}

void NpcLookAt::setTargetPos(Unk_0201a334_Vec3 *v) {
    using namespace nP;
    unk_08.x = v->x;
    unk_08.y = v->y;
    unk_08.z = v->z;
}

void NpcLookAt::setTarget(u8 type, s32 pri, s32 tgt, Unk_0201a334_Vec3 *v, s32 h, s32 lim, u8 flag) {
    using namespace nP;
    if (unk_18 == 0 && unk_14 != 4 && pri >= unk_14) {
        unk_00 = type;
        unk_04 = (Unk_0201a734_Obj *)tgt;
        unk_08.x = v->x;
        unk_08.y = v->y;
        unk_08.z = v->z;
        unk_14 = pri;
        unk_2a = 0;
        unk_5c = lim;
        unk_60 = flag;
        unk_64 = h;
        unk_1e = 0;
        unk_26 = 0;
        unk_1c = 0x200;
        unk_24 = 0x400;
    }
}

void NpcLookAt::setManualAngles(s32 pri, s16 a, s16 b, s16 c, s16 d) {
    using namespace nP;
    if (unk_18 == 0 && unk_14 != 4 && pri >= unk_14) {
        unk_00 = 5;
        unk_04 = 0;
        unk_08.x = 0;
        unk_08.y = 0;
        unk_08.z = 0;
        unk_14 = pri;
        unk_2a = 0;
        unk_5c = 0x8000;
        unk_60 = 1;
        unk_64 = 4;
        unk_1e = a;
        unk_26 = b;
        unk_1c = c;
        unk_24 = d;
    }
}

BOOL NpcLookAt::canSeeTarget(Unk_0201a334_Scene *scene) {
    using namespace nP;
    volatile Unk_0201a334_Vec3 z;
    Unk_0201a334_Vec3 *p = 0;
    z.x = 0;
    z.y = 0;
    z.z = 0;
    switch (unk_00) {
    case 1: {
        Unk_0201a334_Scene *t = PlayerActor_GetCharacter(unk_64);
        if (t != 0) {
            p = &t->unk_5c;
        }
        break;
    }
    case 3:
        p = &unk_08;
        break;
    }
    if (p != 0 && func_020e96ec(p, gVec3Zero) != 0) {
        s32 d = func_020e96a4(p, &scene->unk_5c);
        if (unk_5c == 0 || (d < 0 ? -d : d) < unk_5c) {
            s32 ang = calcYaw(p, &scene->unk_5c, scene->unk_8e);
            if (unk_60 == 0 || _ZN12Unk_0201a13c16isWithinYawLimitEi(this, ang) != 0) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 NpcLookAt::calcYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    using namespace nP;
    return (s16)(Math_AngleXZ(b, a) - c);
}

s32 NpcLookAt::calcPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    using namespace nP;
    s32 d = func_020e96a4(a, b);
    return (s16)(func_020e7b98(a->y - b->y, d) - c);
}

s32 NpcLookAt::calcClampedYaw(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    using namespace nP;
    return clampYaw(calcYaw(a, b, c));
}

s32 NpcLookAt::clampYaw(s32 v) {
    using namespace nP;
    s32 m = v < 0 ? -v : v;
    s32 lim = unk_28;
    if (m > lim) {
        if (v > 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

s32 NpcLookAt::calcClampedPitch(Unk_0201a334_Vec3 *a, Unk_0201a334_Vec3 *b, s32 c) {
    using namespace nP;
    return clampPitch(calcPitch(a, b, c));
}

s32 NpcLookAt::clampPitch(s32 v) {
    using namespace nP;
    s32 m = v < 0 ? -v : v;
    s32 lim = unk_20;
    if (m > lim) {
        if (v >= 0) {
            v = lim;
        } else {
            v = (s16)-lim;
        }
    }
    return v;
}

void NpcLookAt::lookAtActor(Unk_0201a334_Scene *scene, Unk_0201a334_Scene *tgt, Unk_0201a334_Vec3 *v, s32 limit, u8 flag) {
    using namespace nP;
    Unk_0201a334_Vec3 *tp = &tgt->unk_5c;
    Unk_0201a334_Vec3 *sp = &scene->unk_5c;
    s32 a = 0;
    s32 b = 0;
    unk_2a = 0;
    if (tp != 0) {
        s32 d = func_020e96a4(tp, sp);
        if (limit == 0 || (d < 0 ? -d : d) < limit) {
            s32 ang = calcYaw(tp, sp, scene->unk_8e);
            if (!flag || _ZN12Unk_0201a13c16isWithinYawLimitEi(this, ang)) {
                Unk_0201a334_Vec3 w;
                if (NpcLookAt_GetHeadPos((Unk_0201a734_Obj *)this, &w)) {
                    a = calcClampedPitch(v, &w, 0);
                }
                b = clampYaw(ang);
                unk_2a = 1;
            }
        }
    }
    if (unk_22 != b) {
        func_020e7530(&unk_22, b, unk_24);
    }
    if (unk_1a != a) {
        func_020e7530(&unk_1a, a, unk_1c);
    }
    if (unk_22 != b || unk_1a != a) {
        unk_2a = 0;
    }
}

void NpcLookAt::relax() {
    using namespace nP;
    if (unk_22 != 0) {
        func_020e7530(&unk_22, 0, unk_24);
    }
    if (unk_1a != 0) {
        func_020e7530(&unk_1a, 0, unk_1c);
    }
}

void NpcLookAt::lookAtPlayer(Unk_0201a334_Scene *scene, s32 h, s32 limit, u8 flag) {
    using namespace nP;
    Unk_0201a334_Scene *t = PlayerActor_GetCharacter(h);
    if (t != 0) {
        Unk_0201a334_Vec3 v;
        if (PlayerActor_GetHeadPos(&v, h)) {
            Unk_0201a334_Vec3 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            lookAtActor(scene, t, &w, limit, flag);
        }
    }
}

void NpcLookAt::lookAtTargetPlayer(Unk_0201a334_Scene *scene) {
    using namespace nP;
    lookAtPlayer(scene, unk_64, unk_5c, unk_60);
}

void NpcLookAt::lookAtLocalPlayer(Unk_0201a334_Scene *scene) {
    using namespace nP;
    lookAtPlayer(scene, 4, unk_5c, unk_60);
}

void NpcLookAt::lookAtTargetActor(Unk_0201a334_Scene *scene) {
    using namespace nP;
    if (unk_04 != 0) {
        Unk_0201a334_Vec3 v;
        if (NpcLookAt_GetHeadPos((Unk_0201a734_Obj *)((u8 *)unk_04 + 0x3b0), &v)) {
            Unk_0201a334_Vec3 w;
            w.x = v.x;
            w.y = v.y;
            w.z = v.z;
            lookAtActor(scene, (Unk_0201a334_Scene *)unk_04, &w, unk_5c, unk_60);
        }
    }
}

void Unk_0201a13c::lookAtPoint(Unk_0201a25c_Src *o) {
    using namespace nO;
    s32 r6 = 0;
    s32 r7 = 0;
    u8 sp[12];
    s32 d = func_020e96a4(&unk_08, &o->unk_5c);
    s32 lim;
    unk_2a = 0;
    lim = unk_5c;
    if (lim == 0 || (d < 0 ? -d : d) < lim) {
        s32 t = nO::_ZN9NpcLookAt7calcYawEP17Unk_0201a334_Vec3S1_i(this, &unk_08, &o->unk_5c, o->unk_8e);
        if (unk_60 == 0 || isWithinYawLimit(t)) {
            r6 = nO::_ZN9NpcLookAt14calcClampedYawEP17Unk_0201a334_Vec3S1_i(this, &unk_08, &o->unk_5c, o->unk_8e);
            if (nO::NpcLookAt_GetHeadPos(this, sp)) {
                r7 = nO::_ZN9NpcLookAt16calcClampedPitchEP17Unk_0201a334_Vec3S1_i(this, &unk_08, sp, o->unk_8c);
                unk_2a = 1;
            }
        }
    }
    if (unk_22 != r6) {
        func_020e7530(&unk_22, r6, unk_24);
    }
    if (unk_1a != r7) {
        func_020e7530(&unk_1a, r7, unk_1c);
    }
    if (unk_22 != r6 || unk_1a != r7) {
        unk_2a = 0;
    }
}

void Unk_0201a13c::approachManualAngles() {
    using namespace nO;
    if (unk_22 != unk_26) {
        func_020e7530(&unk_22, unk_26, unk_24);
    }
    if (unk_1a != unk_1e) {
        func_020e7530(&unk_1a, unk_1e, unk_1c);
    }
}

void Unk_0201a13c::update(Unk_0201a1e0_Base *base) {
    using namespace nO;
    if (unk_18 == 0 && unk_00 < 6) {
        Unk_0201a1e0_Fn *pf = &sNpcLookAtTypes[unk_00];
        Unk_0201a1e0_Target *t = &base->unk_3b0;
        (t->**pf)(base);
    }
}

namespace nO {
extern "C" BOOL NpcLookAt_IsWithin(s32 a, s32 b) {
    if (a < 0) {
        a = -a;
    }
    if (a < b) {
        return TRUE;
    }
    return FALSE;
}
}

BOOL Unk_0201a13c::isWithinYawLimit(s32 v) {
    using namespace nO;
    return NpcLookAt_IsWithin(v, unk_28);
}

BOOL Unk_0201a13c::isOnTarget() {
    using namespace nO;
    if (unk_18 == 0 && unk_2a == 1) {
        return TRUE;
    }
    return FALSE;
}

NpcSpeechState::NpcSpeechState() {
    using namespace nO;
    reset();
}

NpcSpeechState::~NpcSpeechState() {
    using namespace nO;}

void NpcSpeechState::reset() {
    using namespace nO;
    unk_00 = 0;
    unk_04 = 2;
}

void NpcSpeechState::startSpeaking() {
    using namespace nO;
    unk_00 = 1;
}

void NpcSpeechState::stopSpeaking() {
    using namespace nO;
    unk_00 = 0;
}

BOOL NpcSpeechState::isSpeaking() {
    using namespace nO;
    if (unk_00 == 1) {
        return TRUE;
    }
    return FALSE;
}

void NpcSpeechState::setMouthType(s32 v) {
    using namespace nO;
    unk_04 = v;
}

s32 NpcSpeechState::getMouthType() {
    using namespace nO;
    return unk_04;
}

namespace nO {
extern "C" s32 NpcFace_PickTalkMouth() {
    s32 r = Random_GlobalBelow(4);
    s32 v = 1;
    if (r & v) {
        v = 0;
    }
    return v;
}
}

Unk_0201a13c::Unk_0201a13c() {
    using namespace nO;}

Unk_0201a13c::~Unk_0201a13c() {
    using namespace nO;}

void NpcEmotionFx::reset() {
    using namespace nO;
    MI_CpuFill8(this, 0xff, 0x10);
    clearSlots(unk_10, 2);
    unk_1c = 0x137;
    unk_24 = 2;
    unk_25 = 0x3c;
    unk_27 = 0;
    unk_26 = 0;
}

void NpcEmotionFx::clearSlots(void *p, s32 n) {
    using namespace nO;
    Unk_02019e2c_Slot *q = (Unk_02019e2c_Slot *)p;
    s32 zero = 0;
    for (s32 i = 0; i < n; i++) {
        MI_CpuFill8(q, zero, 4);
        q->unk_00 = ~zero;
        q++;
    }
}

void NpcEmotionFx::copySlots(void *dst, void *src, s32 n) {
    using namespace nO;
    MI_CpuCopy8(src, dst, n << 2);
}

s32 NpcEmotionFx::findFreeHandle() {
    using namespace nO;
    s32 r, i;
    i = 0;
    r = ~i;
    for (; i < 4; i++) {
        if (unk_00[i] == r) {
            r = i;
            break;
        }
    }
    return r;
}

void NpcEmotionFx::setSlots(void *a, u32 b, s32 c) {
    using namespace nO;
    clearSlots(unk_10, 2);
    copySlots(unk_10, a, b);
    unk_1c = c;
}

void NpcEmotionFx::startEntry(Unk_02019e2c_Entry *tbl, s32 idx) {
    using namespace nO;
    Unk_02019e2c_Entry *e = &tbl[idx];
    if (e->unk_09 != 0) {
        killEffects();
    }
    if (e->unk_04 != 0) {
        setSlots(e->unk_04, e->unk_08, e->unk_00);
        unk_20 = idx;
    }
}

void NpcEmotionFx::playSound(Unk_02019e2c_Slot *s) {
    using namespace nO;
    u8 *bank = Emotion_GetEntry(unk_25);
    if (s->unk_03 == 1 || unk_24 == 2) {
        unk_24 = bank[0x19];
        if (unk_24 == 1) {
            if (unk_26 == 0) {
                Snd_SeEmitterPlayHeld(unk_18, unk_25 + 0x84, 0x7f, 0);
            } else {
                func_02003f0c(unk_25 + 0x84);
            }
        } else {
            if (unk_26 == 0) {
                func_02003e70(unk_18, unk_25 + 0x84, 0x7f, 0);
            } else {
                func_02003f1c(unk_25 + 0x84);
            }
        }
    }
}

void NpcEmotionFx::keepSound() {
    using namespace nO;
    if (unk_24 == 1 && unk_26 == 0) {
        Snd_SeEmitterPlayHeld(unk_18, unk_25 + 0x84, 0x7f, 0);
    }
}

void NpcEmotionFx::stopSound() {
    using namespace nO;
    if (unk_24 == 1 && unk_26 != 0) {
        func_02003efc();
    }
    unk_24 = 2;
}

void NpcEmotionFx::updateSlot(void *a, s16 b, s32 c, u16 d, s32 j) {
    using namespace nO;
    Unk_02019e2c_Slot *s = &unk_10[j];
    s32 id = s->unk_00;
    if (id >= 0 && id < 0x66) {
        if (unk_1c == c && unk_1c != 0x137) {
            u16 dd = d;
            if (s->unk_02 == dd) {
                s32 k = findFreeHandle();
                if (k != ~0) {
                    unk_00[k] = Effect_CreateWithParam((u16)s->unk_00, unk_27, a, &b);
                    if (s->unk_03 == 0) {
                        clearSlots(s, 1);
                    }
                }
            }
            u8 *bank = Emotion_GetEntry(unk_25);
            s32 bv = *(s16 *)(bank + unk_20 * 12 + 10);
            if (bv == dd) {
                playSound(s);
            }
        }
    }
}

void NpcEmotionFx::killEffects() {
    using namespace nO;
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (unk_00[i] != ~zero) {
            Effect_End(unk_00[i]);
            unk_00[i] = ~zero;
        }
    }
    stopSound();
}

void NpcEmotionFx::update(void *a, s16 b, s32 c, u16 d) {
    using namespace nO;
    keepSound();
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (unk_00[i] != ~zero) {
            Effect_SetPosition(unk_00[i], a, &b, zero);
        }
    }
    for (s32 j = 0; j < 2; j++) {
        updateSlot(a, b, c, d, j);
    }
}

void NpcEmotionFx::stop() {
    using namespace nO;
    killEffects();
}

NpcFaceAnim::NpcFaceAnim() {
    using namespace nO;
    unk_84 = 0;
    unk_74 = 0x16f;
    unk_78 = 0x16f;
    unk_7c = 0x16f;
    unk_80 = 2;
}

NpcFaceAnim::~NpcFaceAnim() {
    using namespace nO;}

BOOL NpcFaceAnim::isLoaded() {
    using namespace nO;
    if (unk_84) {
        return TRUE;
    }
    return FALSE;
}

s32 NpcFaceAnim::getMouthAnim() {
    using namespace nO;
    return unk_78;
}

BOOL NpcFaceAnim::load(Unk_02019cac_Owner *o) {
    using namespace nO;
    void *r6 = o->vfunc_6c();
    if (_ZN17NpcFaceAnimHandle15getTexPatBufRefEv(&unk_0c) == 0 && r6 != 0) {
        if (!_ZN12NpcResHandle7acquireEv(&unk_0c)) {
            return FALSE;
        }
        void *a = _ZN17NpcFaceAnimHandle15getTexPatBufRefEv(&unk_0c);
        NpcTexPatBufRef_LoadFile(a, (s32)r6);
        if (!_ZN12NpcResHandle7acquireEv(&unk_04)) {
            return FALSE;
        }
        void *h = _ZN22NpcHeldItemModelHandle16getTexPatHeapRefEv(&unk_04);
        s32 fl = o->unk_148;
        s32 x = NpcTexPatBufRef_GetBuffer(a);
        if (!_ZN13MatTexPatAnim4initEPvS0_jS0_(&unk_1c, fl, x, 1, _ZN20CharaFaceAnimWorkRef7getHeapEv(h))) {
            return FALSE;
        }
        s32 fl2 = o->unk_148;
        s32 y = NpcTexPatBufRef_GetBuffer(a);
        if (!_ZN13MatTexPatAnim4initEPvS0_jS0_(&unk_48, fl2, y, 1, _ZN20CharaFaceAnimWorkRef7getHeapEv(h))) {
            return FALSE;
        }
        if (!_ZN12NpcResHandle7acquireEv(&unk_14)) {
            return FALSE;
        }
        unk_74 = 0x16f;
        unk_78 = 0x16f;
        BlinkTimer_Clear(this);
        unk_84 = 1;
    }
    return TRUE;
}

BOOL NpcFaceAnim::isTalkMouthAnim(s32 v) {
    using namespace nO;
    switch (v) {
    case 0x137:
    case 0x138:
        return TRUE;
    }
    return FALSE;
}

void NpcFaceAnim::pickTalkMouthVariant() {
    using namespace nO;
    unk_80 = NpcFace_PickTalkMouth();
}

s32 NpcFaceAnim::func_02019c70(s32 v) {
    using namespace nO;
    s32 r = 0;
    if (v == 1) {
        r = 5;
    }
    return r;
}

BOOL NpcFaceAnim::func_02019c50(s32 a, s32 b, s32 c) {
    using namespace nO;
    s32 r = 0;
    if (a == 0) {
        if (b == 5) {
            return 1;
        }
    } else if (b >= c - 0x1000) {
        r = 1;
    }
    return r;
}

void NpcFaceAnim::randomizeTalkMouth() {
    using namespace nO;
    if (isTalkMouthAnim(unk_78)) {
        pickTalkMouthVariant();
        unk_48.unk_08 = func_02019c70(unk_80) << 12;
    }
}

BOOL NpcFaceAnim::isMouthCycleDone() {
    using namespace nO;
    BOOL r = FALSE;
    if (isTalkMouthAnim(unk_78)) {
        r = func_02019c50(unk_80, (u32)(unk_48.unk_08 << 4) >> 16, (u32)(unk_48.unk_04 << 4) >> 16);
    } else if (_ZN13AnimFrameCtrl10isFinishedEv(&unk_48)) {
        r = TRUE;
    }
    return r;
}

void NpcFaceAnim::setMouthAnim(s32 v, u32 w) {
    using namespace nO;
    if (isLoaded()) {
        void *h = _ZN19NpcTexPatHeapHandle11getFaceAnimEv(&unk_14);
        _ZN16CharaFaceAnimRef8loadAnimEiii(h, v, 1, 0);
        _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(&unk_48, _ZN16CharaFaceAnimRef18getMouthAnimBufferEv(h), 0, 0, w, 0x1000);
        unk_48.unk_08 = 0;
        unk_78 = v;
        randomizeTalkMouth();
        _ZN13MatTexPatAnim10applyFrameEv(&unk_48);
    }
}

void NpcFaceAnim::startTalkMouth(s32 i) {
    using namespace nO;
    if (i >= 0 && i < 2) {
        if (!isTalkMouthAnim(unk_78)) {
            unk_7c = unk_78;
        }
        setMouthAnim(sNpcTalkMouthAnims[i], 0);
    }
}

void NpcFaceAnim::restoreMouthAnim() {
    using namespace nO;
    if (unk_7c == 0x16f) {
        unk_7c = 0xba;
    }
    setMouthAnim(unk_7c, 0);
    unk_7c = 0x16f;
}

void NpcFaceAnim::setFaceAnims(s32 t, s32 u, s32 x, s32 mode) {
    using namespace nO;
    if (isLoaded()) {
        void *h = _ZN19NpcTexPatHeapHandle11getFaceAnimEv(&unk_14);
        if (t != 0 || unk_74 != t) {
            _ZN16CharaFaceAnimRef8loadAnimEiii(h, t, 1, 0);
            NNS_G3dGetAnmByIdx(_ZN16CharaFaceAnimRef16getEyeAnimBufferEv(h), 0);
            _ZN13MatTexPatAnim7setAnimEPvS0_jhS0_(&unk_1c, _ZN16CharaFaceAnimRef16getEyeAnimBufferEv(h), 0, 0, x, 0x1000);
            unk_74 = t;
            unk_1c.unk_08 = 0;
            _ZN13MatTexPatAnim10applyFrameEv(&unk_1c);
        }
        if (mode == 2 || !isTalkMouthAnim(unk_78)) {
            setMouthAnim(u, 0);
        } else {
            unk_7c = u;
        }
    }
}

void NpcFaceAnim::setFaceAnimsFrom(void *a, s32 b, s32 c) {
    using namespace nO;
    if (isLoaded()) {
        s32 t = CharaAnim_GetEyeAnim(a);
        s32 u = CharaAnim_GetMouthAnim(a);
        if (t == 0x16f) {
            t = 0;
        }
        if (u == 0x16f) {
            u = 0xba;
        }
        setFaceAnims(t, u, b, c);
    }
}

BOOL NpcFaceAnim::setMaterialTex(void *m, void *q, u32 r) {
    using namespace nO;
    if (isLoaded()) {
        _ZN13MatTexPatAnim13pauseMaterialEv(m, q);
        if (_ZN13MatTexPatAnim14setMaterialTexEij(m, q, r)) {
            return TRUE;
        }
        MatTexPatAnim_ResumeMaterial(m, q);
    }
    return FALSE;
}

BOOL NpcFaceAnim::setMouthTexture(u32 a) {
    using namespace nO;
    return setMaterialTex(&unk_48, ((u8 *)"m"), a);
}

void NpcFaceAnim::resumeMouthMaterial() {
    using namespace nO;
    MatTexPatAnim_ResumeMaterial(&unk_48, ((u8 *)"m"));
}

void NpcFaceAnim::func_020199c8() {
    using namespace nO;
    BlinkTimer_BlinkNow(this);
}

void NpcFaceAnim::release() {
    using namespace nO;
    _ZN13MatTexPatAnim7releaseEv(&unk_1c);
    _ZN13MatTexPatAnim7releaseEv(&unk_48);
    _ZN12NpcResHandle7releaseEv(&unk_0c);
    _ZN12NpcResHandle7releaseEv(&unk_14);
    _ZN12NpcResHandle7releaseEv(&unk_04);
}

void NpcFaceAnim::update(u8 *o) {
    using namespace nN;
    if (isLoaded()) {
        if (unk_74 == 0) {
            if (!_ZN13AnimFrameCtrl14hasPassedFrameEi(&unk_1c, 0) || BlinkTimer_Update(this)) {
                _ZN13MatTexPatAnim6updateEv(&unk_1c);
            }
        } else {
            _ZN13MatTexPatAnim6updateEv(&unk_1c);
        }
        if (_ZN14NpcSpeechState12getMouthTypeEv(o + 0x418) < 2) {
            if (_ZN14NpcSpeechState10isSpeakingEv(o + 0x418)) {
                if (!isTalkMouthAnim(unk_78)) {
                    startTalkMouth(_ZN14NpcSpeechState12getMouthTypeEv(o + 0x418));
                    randomizeTalkMouth();
                } else if (isMouthCycleDone()) {
                    randomizeTalkMouth();
                }
            } else if (isTalkMouthAnim(unk_78)) {
                if (isMouthCycleDone()) {
                    restoreMouthAnim();
                }
            }
        } else if (isTalkMouthAnim(unk_78)) {
            restoreMouthAnim();
        }
        _ZN13MatTexPatAnim6updateEv(&unk_48);
    }
}

NpcActionCtrl::NpcActionCtrl() {
    using namespace nN;
    unk_2c.unk_22 = 0xfff1;
    unk_60.unk_22 = 0xfff1;
    unk_1c = 0x16;
    unk_20 = NULL;
    unk_14 = 0;
    clearPendingAction();
    setActionDone(1);
    unk_99 = 0;
    unk_9c = 0;
    unk_a0 = 0;
    unk_a4 = 0;
    unk_a8 = 1;
    unk_a9 = 0;
    unk_b0 = 5;
    unk_ac = -1;
}

void NpcActionCtrl::func_02019854() {
    using namespace nN;
}

void *NpcActionParams::clear() {
    using namespace nN;
    return MI_CpuFill8(this, 0, 0x34);
}

void NpcActionParams::copyFrom(NpcActionParams *src) {
    using namespace nN;
    MI_CpuCopy8(src, this, 0x34);
    unk_28 = src->unk_28;
}

void NpcActionCtrl::startAction(u8 *o, s32 a, s32 b, s32 s0, s32 s1, s16 s2, s32 s3, s32 s4) {
    using namespace nN;
    NpcActionParams *p = &unk_2c;
    setPendingAction(a, b);
    p->clear();
    p->unk_04 = s0;
    p->unk_08 = s1;
    if (s3 == 0 && s4 == 0) {
        p->unk_0c = s0;
        p->unk_10 = s1;
    } else {
        p->unk_0c = s3;
        p->unk_10 = s4;
    }
    p->unk_18 = s2;
    p->unk_1c = data_020c6cc8;
    unk_60.copyFrom(&unk_2c);
    MI_CpuFill8(&unk_04, 0, 0xf);
    unk_18 = 0;
    unk_19 = 0;
    changeAction(o, unk_24, unk_28);
}

s32 NpcActionCtrl::getAction() {
    using namespace nN;
    return unk_1c;
}

u8 NpcActionCtrl::getEmotionId() {
    using namespace nN;
    return unk_a9;
}

BOOL NpcActionCtrl::isActionDone() {
    using namespace nN;
    if (unk_94 == 1) {
        return TRUE;
    }
    return FALSE;
}

NpcActionParams *NpcActionCtrl::getCurParams() {
    using namespace nN;
    return &unk_60;
}

void NpcActionCtrl::changeAction(u8 *o, s32 idx, s32 state) {
    using namespace nN;
    unk_1c = idx;
    if (idx < 0 || idx >= 0x16) {
        unk_1c = 0;
    }
    unk_14 = state;
    unk_20 = &sNpcActionTable[unk_1c];
    unk_98 = 0;
    if (unk_20 != NULL) {
        (this->*(unk_20->a))(o);
    }
}

void NpcActionCtrl::clearPendingAction() {
    using namespace nN;
    setPendingAction(0x16, 0);
    unk_2c.clear();
}

void NpcActionCtrl::setPendingAction(s32 a, s32 b) {
    using namespace nN;
    unk_24 = a;
    unk_28 = b;
}

BOOL NpcActionCtrl::requestAction(u32 a, s32 b, s32 c, s32 s0, s16 s1, s16 s2, s32 s3, s32 s4, u16 s5, u16 s6) {
    using namespace nN;
    BOOL r = FALSE;
    if (b >= unk_28 || unk_28 == 3) {
        if (a != 0xc) {
            NpcActionParams *p = &unk_2c;
            setPendingAction(a, b);
            p->clear();
            p->unk_04 = c;
            p->unk_08 = s0;
            if (s3 == 0 && s4 == 0) {
                p->unk_0c = c;
                p->unk_10 = s0;
            } else {
                p->unk_0c = s3;
                p->unk_10 = s4;
            }
            p->unk_18 = s2;
            p->unk_1a = s1;
            p->unk_1c = s5;
            p->unk_1e = s6;
            r = TRUE;
        }
    }
    return r;
}

BOOL NpcActionCtrl::requestAct07(s32 a, s32 b, s32 c, s32 d, u16 e) {
    using namespace nN;
    BOOL r = FALSE;
    if (requestAction(7, a, 0, 0, b, c, 0, 0, e, 0)) {
        unk_2c.unk_14 = d;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestEmotion(s32 a, u8 b, u16 c) {
    using namespace nN;
    BOOL r = FALSE;
    if (requestAction(8, a, 0, 0, 0, 0, 0, 0, c, 0)) {
        unk_2c.unk_21 = b;
        r = TRUE;
    }
    return r;
}

void NpcActionCtrl::requestStand(u32 a, u16 b) {
    using namespace nN;
    requestAction(0, a, 0, 0, 0, 0, 0, 0, b, 0);
}

BOOL NpcActionCtrl::requestPlayAnim(s32 a, s32 b, u32 c, u16 s0, u16 s1) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        NpcActionParams *p = &unk_2c;
        setPendingAction(0xc, a);
        p->clear();
        p->unk_00 = b;
        p->unk_20 = c;
        p->unk_1c = s0;
        p->unk_1e = s1;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestGiveItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        NpcActionParams *p = &unk_2c;
        setPendingAction(0xd, a);
        p->clear();
        p->unk_22 = *b;
        p->unk_24 = c;
        p->unk_2c = s0;
        p->unk_30 = s1;
        p->unk_28 = s2;
        r = TRUE;
    }
    return r;
}

BOOL NpcActionCtrl::requestTakeItem(s32 a, u16 *b, u32 c, u8 s0, u32 s1, u32 s2) {
    using namespace nN;
    BOOL r = FALSE;
    if (a >= unk_28 || unk_28 == 3) {
        NpcActionParams *p = &unk_2c;
        setPendingAction(0xe, a);
        p->clear();
        p->unk_22 = *b;
        p->unk_24 = c;
        p->unk_2c = s0;
        p->unk_30 = s1;
        p->unk_28 = s2;
        r = TRUE;
    }
    return r;
}

void NpcActionCtrl::requestTalkingOn() {
    using namespace nN; unk_19 = 1; }

void NpcActionCtrl::requestTalkingOff() {
    using namespace nN; unk_19 = 2; }

void NpcActionCtrl::setTalking() {
    using namespace nN; unk_18 = 1; }

void NpcActionCtrl::clearTalking() {
    using namespace nN; unk_18 = 0; }

void NpcActionCtrl::applyPendingAction(u8 *arg) {
    using namespace nN;
    if (unk_28 != 0) {
        if (unk_28 >= unk_14 || isActionDone() || unk_14 == 3) {
            unk_60.copyFrom(&unk_2c);
            changeAction(arg, unk_24, unk_28);
        }
    }
    u8 t = unk_19;
    if (t == 1) {
        setTalking();
        unk_19 = 0;
    } else if (t == 2) {
        clearTalking();
        unk_19 = 0;
    }
    clearPendingAction();
}

void NpcActionCtrl::setActionDone(s32 v) {
    using namespace nN;
    unk_94 = v;
}

namespace nN {
extern "C" void NpcAction_PackMove(u8 *out, u32 a, u32 b, u32 c, u32 s0, s16 s1, u16 s2) {
    NetBuf_PackPair20(out, a, b);
    NetBuf_PackPair20(out + 5, c, s0);
    MI_CpuCopy8(&s1, out + 10, 2);
    out[12] = s2;
}
}

namespace nN {
extern "C" void NpcAction_UnpackMove(u32 a, u32 b, u32 c, u32 d, void *s0, u16 *s1, u8 *out) {
    NetBuf_UnpackPair20(out, a, b);
    NetBuf_UnpackPair20(out + 5, c, d);
    MI_CpuCopy8(out + 10, s0, 2);
    *s1 = out[12];
}
}

namespace nN {
extern "C" void NpcAction_PackTurn(u8 *out, u16 a, u16 b, u32 c) {
    MI_CpuCopy8(&a, out, 2);
    MI_CpuCopy8(&b, out + 2, 2);
    out[4] = c;
}
}

namespace nN {
extern "C" void NpcAction_UnpackTurn(void *a, void *b, u16 *c, u8 *d) {
    MI_CpuCopy8(d, a, 2);
    MI_CpuCopy8(d + 2, b, 2);
    *c = d[4];
}
}

namespace nN {
extern "C" void NpcAction_PackAnim(u8 *p, u32 a, u32 b, u32 c, u16 d) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
}
}

namespace nN {
extern "C" void NpcAction_UnpackAnim(u32 *a, u8 *b, u16 *c, u16 *d, u8 *src) {
    *a = src[0];
    *b = src[1];
    *c = src[2];
    *d = src[3];
}
}

namespace nN {
extern "C" void NpcAction_PackItem(void *unused, void *p, u16 *v) {
    NetBuf_WriteU16(p, *v);
}
}

namespace nN {
extern "C" void NpcAction_UnpackItem(u16 *out, void *in) {
    *out = NetBuf_ReadU16(in);
}
}

void NpcActionCtrl::update(u8 *arg) {
    using namespace nN;
    applyPendingAction(arg);
    Unk_02019858_Entry *e = unk_20;
    if (e != NULL && e->b != NULL) {
        (this->*(e->b))(arg);
    }
    if (isActionDone()) {
        unk_14 = 0;
    }
}

void NpcActionCtrl::postUpdate(u8 *arg) {
    using namespace nN;
    if (unk_20 != NULL && unk_20->c != NULL) {
        (this->*(unk_20->c))(arg);
    }
    if (isActionDone()) {
        unk_14 = 0;
    }
}

s32 NpcActionCtrl::setupAct00(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o + 0x350, o, 0, 0, c->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o + 0x350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o + 0x350, gVec3Zero);
    _ZN11NpcMoveCtrl14setTargetAngleEs(o + 0x350, *(s16 *)(o + 0x8e));
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, -2);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playIdleAnim(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct00() {
    using namespace nN;
    setActionDone(1);
}

s32 NpcActionCtrl::setupAct01(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    Unk_02019858_Vec v0(c->unk_04, 0, c->unk_08);
    Unk_02019858_Vec v1(c->unk_0c, 0, c->unk_10);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o + 0x350, &v0);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o + 0x350, &v1);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o + 0x350, o, 1, c->unk_1a, c->unk_1c);
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playWalkAnim(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    NpcAction_PackMove(&unk_06[0], c->unk_04, c->unk_08, c->unk_0c, c->unk_10, c->unk_1a, c->unk_1c);
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct01(u8 *o) {
    using namespace nN;
    _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(o + 0x350);
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(o + 0x350, o, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(o + 0x350)) {
            NpcActionParams *c = getCurParams();
            requestAction(1, 1, c->unk_04, c->unk_08, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            setActionDone(1);
        }
    }
}

s32 NpcActionCtrl::setupAct02(u8 *o) {
    using namespace nN;
    NpcActionParams *c = getCurParams();
    Unk_02019858_Vec v0(c->unk_04, 0, c->unk_08);
    Unk_02019858_Vec v1(c->unk_0c, 0, c->unk_10);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o + 0x350, &v0);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o + 0x350, &v1);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o + 0x350, o, 2, c->unk_1a, c->unk_1c);
    _ZN12Unk_0201acf813func_0201acf8Et(o + 0x3aa, 1);
    if (*(u32 *)(o + 0x628) != 0) {
        ((HeldToolModel *)*(u32 *)(o + 0x628))->playWalkAnim(data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    NpcAction_PackMove(&unk_06[0], c->unk_04, c->unk_08, c->unk_0c, c->unk_10, c->unk_1a, c->unk_1c);
    setActionDone(0);
    return 0;
}

void NpcActionCtrl::mainAct02(u8 *o) {
    using namespace nN;
    _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(o + 0x350);
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(o + 0x350, o, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(o + 0x350)) {
            NpcActionParams *c = getCurParams();
            requestAction(1, 1, c->unk_04, c->unk_08, 0, 0, 0, 0, data_020c6cc8, 0);
        } else {
            setActionDone(1);
        }
    }
}

s32 Unk_02018698::setupAct03(C_8698 *c) {
    using namespace nM;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    _ZN11NpcMoveCtrl14setTargetAngleEs(c->unk_350, d->unk_18);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    if (c->unk_628) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->unk_628, data_020c6cc8, 0);
    }
    unk_04 = unk_1c;
    unk_05 = unk_14;
    NpcAction_PackTurn(unk_06, d->unk_1a, d->unk_18, d->unk_1c);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void Unk_02018698::mainAct03(C_8698 *c) {
    using namespace nM;
    if (c->unk_8e == _ZN11NpcMoveCtrl14getTargetAngleEv(c->unk_350)) {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, _ZN13NpcActionCtrl12getCurParamsEv(this)->unk_1c);
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

s32 Unk_02018698::setupAct04(C_8698 *c) {
    using namespace nM;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    V v1(d->unk_04, 0, d->unk_08);
    V v2(d->unk_0c, 0, d->unk_10);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, &v1);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, &v2);
    _ZN11NpcMoveCtrl14setTargetAngleEs(c->unk_350, d->unk_18);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    if (c->unk_628) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->unk_628, data_020c6cc8, 0);
    }
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void Unk_02018698::act04Step0(C_8698 *c) {
    using namespace nM;
    if (c->unk_8e == _ZN11NpcMoveCtrl14getTargetAngleEv(c->unk_350)) {
        _ZN13NpcActionCtrl10setupAct01EPh(this, c);
        unk_98 = 1;
    }
}

void Unk_02018698::act04Step1(C_8698 *c) {
    using namespace nM;
    _ZN13NpcActionCtrl9mainAct01EPh(this, c);
}

namespace nZ {
extern "C" {
const u16 data_020c6d70[4] = {0x49, 0x13, 0x4a, 0x1d};
void *data_020d734c[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d71b4[2] = {(void *)_ZN12Unk_0201216416stepCheckArrivedEP16Unk_02011f74_Vec, 0};
void *data_020d768c[2] = {(void *)_ZN12Unk_02017d749postAct0BEP16Unk_02017d74_Ctx, 0};
const u16 data_020c6ce0[2] = {0x4b, 0x1};
void *data_020d73e4[2] = {(void *)_ZN12Unk_02016a4411act0EStep09EP12Unk_02006d14, 0};
void *data_020d72ac[2] = {(void *)_ZN12Unk_0201347410mainState4EP19Unk_020133cc_Player, 0};
void *data_020d7334[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
void *data_020d7234[2] = {(void *)_ZN11NpcTalkCtrl10mainState0EP16Unk_02013b10_Ctx, 0};
void *data_020d72ec[2] = {(void *)_ZN12Unk_02016a4410act13Step0EP12Unk_02006d14, 0};
void *data_020d75fc[2] = {(void *)_ZN12Unk_02016a449postAct14EP12Unk_02006d14, 0};
void *data_020d7124[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d765c[2] = {(void *)_ZN12Unk_02017d7410setupAct0EEP16Unk_02017d74_Ctx, 0};
FxVec3 sNpcAvoidOffsets[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_020d7384[2] = {(void *)_ZN12Unk_020d771016taskReopenWindowEv, 0};
void *data_020d742c[2] = {(void *)_ZN12Unk_02017d7411act0EStep00EP16Unk_02017d74_Ctx, 0};
void *data_020d76d4[2] = {(void *)_ZN12Unk_020186989mainAct04EP16Unk_02018698_Ctx, 0};
void *data_020d76e4[2] = {(void *)_ZN12Unk_020186989mainAct07EP16Unk_02018698_Ctx, 0};
void *data_020d70cc[2] = {(void *)_ZN12Unk_0201442014itemAct12StartEv, 0};
void *data_020d738c[2] = {(void *)_ZN11NpcTalkCtrl11state2Step1EP16Unk_02013b10_Ctx, 0};
void *data_020d73b4[2] = {(void *)_ZN12Unk_02016a4411act0EStep15EP12Unk_02006d14, 0};
void *data_020d73d4[2] = {(void *)_ZN12Unk_02016a4411act0EStep11EP12Unk_02006d14, 0};
FxVec3 sNpcObstacleProbeOffsets[2] = {FxVec3(0x700, 0, 0xf00), FxVec3(-0x700, 0, 0xf00)};
void *data_020d741c[2] = {(void *)_ZN12Unk_02016a4411act0EStep02EP12Unk_02006d14, 0};
void *data_020d7274[2] = {(void *)_ZN12Unk_0201347411setupState3EP19Unk_020133cc_Player, 0};
void *data_020d72f4[2] = {(void *)_ZN12Unk_0201636010act15Step3EP16Unk_02015fe0_Obj, 0};
void *data_020d731c[2] = {(void *)_ZN11NpcTalkCtrl11state0Step2EP16Unk_02013b10_Ctx, 0};
void *data_020d743c[2] = {(void *)_ZN11NpcTalkCtrl11state0Step1EP16Unk_02013b10_Ctx, 0};
void *data_020d7084[2] = {(void *)_ZN13NpcActionCtrl10setupAct01EPh, 0};
void *data_020d70ac[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d7464[2] = {(void *)_ZN13NpcActionCtrl9mainAct02EPh, 0};
const u16 data_020c6cd4[2] = {0x63, 0x12};
void *data_020d73f4[2] = {(void *)VillagerRoute_PickOwnHouseDoor, 0};
const u32 data_020c6dcc[12] = {0x0, 0x0, 0xffffe000, 0xffffe000, 0x0, 0x0, 0x0, 0x0, 0x2000, 0x2000, 0x0, 0x0};
void *data_020d7494[2] = {(void *)_ZN12Unk_0201442014taskReturnItemEv, 0};
const u16 data_020c6cbc[2] = {0x400, 0x0};
const u16 data_020c6cec[2] = {0x59, 0x0};
void *data_020d7704[2] = {(void *)_ZN12Unk_020186989mainAct05EP16Unk_02018698_Ctx, 0};
void *data_020d76fc[2] = {(void *)_ZN12Unk_0201869810setupAct06EP16Unk_02018698_Ctx, 0};
void *data_020d76f4[2] = {(void *)_ZN12Unk_020186989mainAct05EP16Unk_02018698_Ctx, 0};
void *data_020d76ec[2] = {(void *)_ZN12Unk_0201869810setupAct07EP16Unk_02018698_Ctx, 0};
const u16 data_020c6d08[2] = {0x57, 0x103};
void *data_020d76dc[2] = {(void *)_ZN12Unk_020186989postAct07EP16Unk_02018698_Ctx, 0};
void *data_020d74e4[2] = {(void *)_ZN12Unk_0201216410stepToDoorEP16Unk_02011f74_Vec, 0};
void *data_020d76cc[2] = {(void *)_ZN12Unk_020186989mainAct08EP16Unk_02018698_Ctx, 0};
void *data_020d76c4[2] = {(void *)_ZN12Unk_0201869810setupAct09EP16Unk_02018698_Ctx, 0};
void *data_020d76bc[2] = {(void *)_ZN12Unk_020186989mainAct09EP16Unk_02018698_Ctx, 0};
void *data_020d76b4[2] = {(void *)_ZN9NpcLookAt17lookAtTargetActorEP18Unk_0201a334_Scene, 0};
void *data_020d76ac[2] = {(void *)_ZN12Unk_02017d749mainAct0AEP16Unk_02017d74_Ctx, 0};
void *data_020d76a4[2] = {(void *)_ZN12Unk_02017d749postAct0AEP16Unk_02017d74_Ctx, 0};
void *data_020d769c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d7694[2] = {(void *)_ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec, 0};
const u16 data_020c6cc8[2] = {0x4, 0x0};
const u16 data_020c6d00[2] = {0x3b, 0x0};
void *data_020d7614[2] = {(void *)_ZN12Unk_02016a4410setupAct12EP12Unk_02006d14, 0};
void *data_020d761c[2] = {(void *)_ZN12Unk_02016a449mainAct11EP12Unk_02006d14, 0};
const u16 data_020c6cd8[2] = {0x46, 0x0};
void *data_020d766c[2] = {(void *)_ZN12Unk_02017d749mainAct0DEP16Unk_02017d74_Ctx, 0};
const u16 data_020c6d04[2] = {0x63, 0x100};
void *data_020d762c[2] = {(void *)_ZN12Unk_02016a449postAct10EP12Unk_02006d14, 0};
void *data_020d7644[2] = {(void *)_ZN12Unk_02016a4410setupAct0FEP12Unk_02006d14, 0};
void *data_020d764c[2] = {(void *)_ZN12Unk_02016a449postAct0EEv, 0};
const u16 data_020c6cf0[2] = {0xeb85, 0x0};
const u16 data_020c6d24[2] = {0x50, 0x9};
const u16 data_020c6cc0[2] = {0x3000, 0x0};
void *data_020d7664[2] = {(void *)_ZN12Unk_0201442013takeItemStartEv, 0};
const u32 data_020c6d84[4] = {0x1, 0x2, 0x4, 0x8};
void *data_020d7684[2] = {(void *)_ZN12Unk_02017d7410setupAct0CEP16Unk_02017d74_Ctx, 0};
const u16 data_020c6d28[2] = {0x53, 0x0};
void *data_020d722c[2] = {(void *)_ZN12Unk_0201216411isInBlockT2EP16Unk_02011f74_Vec, 0};
const u32 sNpcMoveSpeedPresets[9] = {0x0, 0x0, 0x0, 0x100, 0x19, 0x33, 0x199, 0x66, 0x99};
void *data_020d7224[2] = {(void *)_ZN11NpcTalkCtrl11setupState0EP16Unk_02013b10_Ctx, 0};
void *data_020d75f4[2] = {(void *)_ZN12Unk_02016a4410setupAct14EP12Unk_02006d14, 0};
void *data_020d75ec[2] = {(void *)_ZN12Unk_0201216416stepCheckArrivedEP16Unk_02011f74_Vec, 0};
const u16 data_020c6cd0[2] = {0x5e, 0x0};
void *data_020d7214[2] = {(void *)_ZN12Unk_0201869810setupAct05EP16Unk_02018698_Ctx, 0};
void *data_020d75d4[2] = {(void *)_ZN12Unk_0201442012takeItemWaitEv, 0};
void *data_020d75cc[2] = {(void *)_ZN12Unk_0201869810act04Step0EP16Unk_02018698_Ctx, 0};
void *data_020d75c4[2] = {(void *)_ZN12Unk_0201869810act04Step1EP16Unk_02018698_Ctx, 0};
void *data_020d75bc[2] = {(void *)_ZN12Unk_0201216411isInBlockT4EP16Unk_02011f74_Vec, 0};
void *data_020d75b4[2] = {(void *)_ZN12Unk_020d771012giveItemWaitEv, 0};
void *data_020d75ac[2] = {(void *)_ZN12Unk_0201636010act15Step2EP16Unk_02015fe0_Obj, 0};
void *data_020d75a4[2] = {(void *)_ZN12Unk_0201869810act05Step1EP16Unk_02018698_Ctx, 0};
void *data_020d71f4[2] = {(void *)_ZN12Unk_0201869810act05Step0EP16Unk_02018698_Ctx, 0};
void *data_020d7594[2] = {(void *)_ZN12Unk_0201347411state4Step0EP19Unk_020133cc_Player, 0};
void *data_020d758c[2] = {(void *)_ZN12Unk_0201442013itemAct0FWaitEv, 0};
}
}

void Unk_02018698::mainAct04(C_8698 *c) {
    using namespace nM;
    static void (Unk_02018698::*tbl[])(C_8698 *) = {*(void (Unk_02018698::**)(C_8698 *))data_020d75cc, *(void (Unk_02018698::**)(C_8698 *))data_020d75c4};
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(c);
    }
}

s32 Unk_02018698::setupMoveTurnFirst(C_8698 *c, s32 a, s16 b) {
    using namespace nM;
    s16 out;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    V v1(d->unk_04, 0, d->unk_08);
    V v2(d->unk_0c, 0, d->unk_10);
    unk_9c = a;
    unk_a0 = b;
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, &v1);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, &v2);
    if (_ZN8NpcActor12isPosInFrontEPsP16Unk_020d77a4_Vec(c, &out, _ZN11NpcMoveCtrl15getDestinationBEv(c->unk_350))) {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, unk_9c, d->unk_1a, d->unk_1c);
        unk_98 = 1;
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
        _ZN11NpcMoveCtrl14setTargetAngleEs(c->unk_350, out);
        c->unk_98 = 0;
        unk_98 = 0;
    }
    if (c->unk_628) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->unk_628, data_020c6cc8, 0);
    }
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, unk_a0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void Unk_02018698::act05Step0(C_8698 *c) {
    using namespace nM;
    if (NpcActor_IsFrontAngle(_ZN11NpcMoveCtrl14getTargetAngleEv(c->unk_350) - c->unk_8e)) {
        s32 t = _ZN11NpcMoveCtrl12getTurnSpeedEv(c->unk_350);
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, unk_9c, t, data_020c6cc8);
        unk_98 = 1;
    }
}

void Unk_02018698::act05Step1(C_8698 *c) {
    using namespace nM;
    s16 out;
    s32 r = _ZN11NpcMoveCtrl15getDestinationBEv(c->unk_350);
    _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(c->unk_350, c);
    if (_ZN11NpcMoveCtrl10hasArrivedEP18Unk_0201a334_Scenei(c->unk_350, c, 0)) {
        if (_ZN11NpcMoveCtrl10hasNextLegEv(c->unk_350)) {
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, (void *)r);
        } else {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    } else if (!_ZN8NpcActor12isPosInFrontEPsP16Unk_020d77a4_Vec(c, &out, r)) {
        u16 v = data_020c6cc8;
        s32 t = _ZN11NpcMoveCtrl12getTurnSpeedEv(c->unk_350);
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 3, t, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(c->unk_350, out);
        unk_98 = 0;
        c->unk_98 = 0;
        if (c->unk_628) {
            _ZN13HeldToolModel12playWalkAnimEjj(c->unk_628, v, 0);
        }
    }
}

namespace nZ {
extern "C" {
void *data_020d7574[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d756c[2] = {(void *)_ZN12Unk_02016a4410setupAct10EP12Unk_02006d14, 0};
void *data_020d7564[2] = {(void *)_ZN12Unk_020d771015closeWindowWaitEv, 0};
void *data_020d755c[2] = {(void *)_ZN12Unk_0201636010act15Step1EP16Unk_02015fe0_Obj, 0};
void *data_020d7554[2] = {(void *)_ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec, 0};
void *data_020d754c[2] = {(void *)_ZN12Unk_020d771016closeWindowStartEv, 0};
void *data_020d7544[2] = {(void *)_ZN12Unk_02017d749postAct0DEP16Unk_02017d74_Ctx, 0};
void *data_020d753c[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
const u16 data_020c6d3c[2] = {0x54, 0x5};
void *data_020d71bc[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
}
}

void Unk_02018698::mainAct05(C_8698 *c) {
    using namespace nM;
    static void (Unk_02018698::*tbl[])(C_8698 *) = {*(void (Unk_02018698::**)(C_8698 *))data_020d71f4, *(void (Unk_02018698::**)(C_8698 *))data_020d75a4};
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(c);
    }
}

s32 Unk_02018698::setupAct05(C_8698 *c) {
    using namespace nM;
    return setupMoveTurnFirst(c, 1, 1);
}

s32 Unk_02018698::setupAct06(C_8698 *c) {
    using namespace nM;
    return setupMoveTurnFirst(c, 2, 2);
}

s32 Unk_02018698::setupAct07(C_8698 *c) {
    using namespace nM;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 3, d->unk_1a, d->unk_1c);
    _ZN11NpcMoveCtrl14setTargetAngleEs(c->unk_350, d->unk_18);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    if (c->unk_628) {
        _ZN13HeldToolModel12playWalkAnimEjj(c->unk_628, d->unk_1c, 0);
    }
    unk_b0 = d->unk_14;
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void Unk_02018698::act07Step0(C_8698 *c) {
    using namespace nM;
    if (c->unk_8e == _ZN11NpcMoveCtrl14getTargetAngleEv(c->unk_350)) {
        if (unk_b0 >= 5) {
            unk_b0 = 0;
        }
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, sNpcAct07Anims[unk_b0], data_020c6cc8, 1, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        func_02003ddc(c->unk_514, sNpcAct07Ses[unk_b0], 0x7f, 0);
        unk_98 = 1;
    }
}

namespace nZ {
extern "C" {
void *data_020d7514[2] = {(void *)_ZN12Unk_02017d7410setupAct0BEP16Unk_02017d74_Ctx, 0};
void *data_020d750c[2] = {(void *)_ZN12Unk_020d771019subSceneCloseWindowEv, 0};
void *data_020d7504[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d74fc[2] = {(void *)_ZN12Unk_0201869810setupAct0AEP16Unk_02018698_Ctx, 0};
void *data_020d74f4[2] = {(void *)_ZN12Unk_0201216410stepToDoorEP16Unk_02011f74_Vec, 0};
const u32 sNpcAct07Anims[5] = {0xda, 0xdb, 0xdc, 0xdd, 0xde};
void *data_020d7194[2] = {(void *)_ZN12Unk_0201442013itemAct12WaitEv, 0};
void *data_020d70bc[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
void *data_020d74d4[2] = {(void *)_ZN12Unk_0201425817taskSwitchSpeakerEv, 0};
void *data_020d74cc[2] = {(void *)_ZN12Unk_0201869810setupAct08EP16Unk_02018698_Ctx, 0};
void *data_020d74c4[2] = {(void *)_ZN12Unk_0201442010taskMelodyEv, 0};
const u16 sNpcAct07Ses[5] = {0x45, 0x46, 0x47, 0x48, 0x49};
}
}

void Unk_02018698::mainAct07(C_8698 *c) {
    using namespace nM;
    static void (Unk_02018698::*tbl[])(C_8698 *) = {*(void (Unk_02018698::**)(C_8698 *))data_020d708c};
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02018698::postAct07(C_8698 *c) {
    using namespace nM;
    if (unk_98 >= 1) {
        if (!_ZN13NpcActionCtrl12isActionDoneEv(this)) {
            if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334, c)) {
                _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
            }
        }
    }
}

namespace nM {
extern "C" Unk_02018698_Ent *Emotion_GetEntry(u32 i) {
    if (i < 0x3c) {
        return &sEmotionTable[i];
    }
    return 0;
}
}

s32 Unk_02018698::setupAct08(C_8698 *c) {
    using namespace nM;
    u32 i = _ZN13NpcActionCtrl12getCurParamsEv(this)->unk_21;
    u32 v = data_020c6cc8;
    if (i >= 0x3c) {
        i = 0;
    }
    unk_a9 = i;
    if (i == 0) {
        _ZN11NpcFaceAnim13func_020199c8Ev(c->unk_2ac);
        v = c->vf9c();
    }
    unk_a4 = (Unk_02018698_Rec *)&sEmotionTable[i];
    unk_a8 = ((Unk_02018698_Ent *)unk_a4)->unk_18;
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, ((Unk_02018698_Ent *)unk_a4)->unk_00, v, unk_a8, 0x1000, 0, 0);
    if (c->unk_628) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
    }
    c->unk_445 = i;
    _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(c->unk_420, unk_a4, 0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 1;
}

void Unk_02018698::mainAct08(C_8698 *c) {
    using namespace nM;
    Unk_02018698_Rec *t = unk_a4;
    if (t != 0) {
        if (unk_a8 == 1) {
            if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334, c)) {
                Unk_02018698_Rec *r = unk_a4;
                s32 *pv = &r->unk_0c;
                if (r->unk_0c < 0x137) {
                    u16 v = data_020c6cc8;
                    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, *pv, data_020c6cc8, 0, 0x1000, 0, 0);
                    if (c->unk_628) {
                        _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
                    }
                    c->unk_445 = unk_a9;
                    _ZN12NpcEmotionFx10startEntryEP18Unk_02019e2c_Entryi(c->unk_420, unk_a4, 1);
                    unk_a8 = 0;
                } else if (r->unk_0c == 0x137) {
                    _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
                }
            }
        } else {
            if (t->unk_00 == 0) {
                if (((c->unk_190 << 4) >> 16) == 0) {
                    _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
                }
            }
        }
    }
}

s32 Unk_02018698::setupAct09(C_8698 *c) {
    using namespace nM;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, d->unk_1c);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0xd8, d->unk_1c, 0, 0x1000, 0, 0);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return 0;
}

void Unk_02018698::mainAct09(C_8698 *c) {
    using namespace nM;
    if (((c->unk_190 << 4) >> 16) == 0) {
        if (!_ZN12Unk_0201acf813func_0201acfcEv(c->unk_3aa)) {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

s32 Unk_02018698::setupAct0A(C_8698 *c) {
    using namespace nM;
    WindowLight *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, d->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x77, d->unk_1c, 1, 0x1000, 0, 0);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    func_02003f1c(0xa0);
    unk_98 = 0;
    return 0;
}

void Unk_02017d74::act0AStep0(C_7d74 *c) {
    using namespace nL;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x78, data_020c6cc8, 1, 0x1000, 0, 0);
        unk_98 = 1;
    }
}

namespace nZ {
extern "C" {
void *data_020d70d4[2] = {(void *)_ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec, 0};
}
}

void Unk_02017d74::mainAct0A(C_7d74 *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[1] = {*(Unk_02017d74_Fn *)data_020d7484};
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::postAct0A(C_7d74 *c) {
    using namespace nL;
    if (unk_98 >= 1) {
        if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
            _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

BOOL Unk_02017d74::setupAct0B(C_7d74 *c) {
    using namespace nL;
    u32 r = c->vf94();
    Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, d->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, r, data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->unk_628) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
    }
    unk_98 = 0;
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return FALSE;
}

void Unk_02017d74::act0BStep0(C_7d74 *c) {
    using namespace nL;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        u32 r = c->vf98();
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, r, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        unk_98 = 1;
    }
}

namespace nZ {
extern "C" {
const u16 data_020c6d10[2] = {0x61, 0x0};
void *data_020d748c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
const u16 data_020c6d1c[2] = {0x8000, 0x0};
const u16 data_020c6d2c[2] = {0x5a, 0x0};
void *data_020d7474[2] = {(void *)_ZN12Unk_0201442013taskItemAct0FEv, 0};
void *data_020d746c[2] = {(void *)_ZN12Unk_02017d7410act0BStep0EP16Unk_02017d74_Ctx, 0};
void *data_020d715c[2] = {(void *)_ZN12Unk_020144209melodyEndEv, 0};
}
}

void Unk_02017d74::mainAct0B(C_7d74 *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[1] = {*(Unk_02017d74_Fn *)data_020d746c};
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::postAct0B(C_7d74 *c) {
    using namespace nL;
    if (unk_98 >= 1) {
        if (!_ZN13NpcActionCtrl12isActionDoneEv(this)) {
            s32 a = (c->unk_190 << 4) >> 16;
            s32 b = (c->unk_18c << 4) >> 16;
            if (a >= b - 0x1000) {
                _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
            }
        }
    }
}

BOOL Unk_02017d74::setupAct0C(C_7d74 *c) {
    using namespace nL;
    Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, data_020c6cc8);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, d->unk_00, d->unk_1c, d->unk_20, 0x1000, d->unk_1e, 0);
    unk_04 = unk_1c;
    unk_05 = unk_14;
    NpcAction_PackAnim(unk_06, d->unk_00, d->unk_20, d->unk_1c, d->unk_1e);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void Unk_02017d74::postAct0C(C_7d74 *c) {
    using namespace nL;
    BOOL r = FALSE;
    switch (c->unk_19c) {
    case 0:
    case 2:
        if (((c->unk_190 << 4) >> 16) == 0) {
            r = TRUE;
        }
        break;
    case 1:
    case 3:
        r = _ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334);
        break;
    }
    if (r) {
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL Unk_02017d74::setupAct0D(C_7d74 *c) {
    using namespace nL;
    Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, d->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    u16 v = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, sNpcGiveItemAnims[d->unk_30], data_020c6cc8, 1, 0x1000, 0, 0);
    if (c->unk_628) {
        _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
    }
    func_02003ddc(c->unk_514, 0x4f, 0x7f, 0);
    HandOverItem_Begin(&d->unk_22, d->unk_24, d->unk_2c, d->unk_30, c, d->unk_28);
    HandOverItem_RequestMode(1, c);
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    if (d->unk_30 == 1) {
        unk_98 = 4;
    } else {
        unk_98 = 0;
    }
    return TRUE;
}

void Unk_02017d74::act0DStep0(C_7d74 *c) {
    using namespace nL;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        if (PlayerActor_RequestAct32()) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
            }
            unk_98 = 1;
        }
    } else if (((c->unk_190 << 4) >> 16) == 8) {
        func_02003ddc(c->unk_514, 0x63, 0x7f, 0);
    }
}

void Unk_02017d74::act0DStep1(C_7d74 *c) {
    using namespace nL;
    if (!HandOverItem_IsMaster(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        unk_98 = 2;
    }
}

void Unk_02017d74::act0DStep2(C_7d74 *c) {
    using namespace nL;
    if (!HandOverItem_IsActive()) {
        _ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        unk_98 = 5;
    }
}

void Unk_02017d74::act0DStep3(C_7d74 *c) {
    using namespace nL;
    if (((c->unk_190 << 4) >> 16) == 0x17) {
        HandOverItem_RequestMode(2, c);
        unk_98 = 4;
    }
}

void Unk_02017d74::act0DStep4(C_7d74 *c) {
    using namespace nL;
    if (!HandOverItem_IsModeActive(1)) {
        Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
        HandOverItem_SetNextMode(9, c);
        if (HandOverItem_SwitchMaster((void *)d->unk_28)) {
            if (PlayerActor_LocalRequestAct37()) {
                unk_98 = 2;
            }
        }
    } else if (((c->unk_190 << 4) >> 16) == 8) {
        func_02003ddc(c->unk_514, 0x63, 0x7f, 0);
    }
}

namespace nZ {
extern "C" {
void *data_020d7454[2] = {(void *)_ZN12Unk_02017d7410act0DStep1EP16Unk_02017d74_Ctx, 0};
void *data_020d714c[2] = {(void *)_ZN12Unk_02017d7410act0DStep3EP16Unk_02017d74_Ctx, 0};
const u16 data_020c6d38[2] = {0x45, 0x2};
void *data_020d7104[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d710c[2] = {(void *)_ZN9NpcLookAt5relaxEv, 0};
void *data_020d7114[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
}
}

void Unk_02017d74::mainAct0D(C_7d74 *c) {
    using namespace nL;
    static Unk_02017d74_Fn tbl[5] = {*(Unk_02017d74_Fn *)data_020d745c, *(Unk_02017d74_Fn *)data_020d7454, *(Unk_02017d74_Fn *)data_020d744c, *(Unk_02017d74_Fn *)data_020d714c, *(Unk_02017d74_Fn *)data_020d711c};
    if (unk_98 < 5) {
        (this->*tbl[unk_98])(c);
    }
}

void Unk_02017d74::postAct0D(C_7d74 *c) {
    using namespace nL;
}

BOOL Unk_02017d74::setupAct0E(C_7d74 *c) {
    using namespace nL;
    Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, d->unk_1c);
    _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
    _ZN12Unk_0201acf813func_0201acf8Et(c->unk_3aa, -2);
    if (d->unk_30 == 1) {
        PlayerActor_LocalRequestAct36(&d->unk_22, &d->unk_24, &d->unk_2c, &d->unk_30, c);
        unk_98 = 0xd;
    } else {
        PlayerActor_RequestAct30(&d->unk_22, &d->unk_24, &d->unk_2c, &d->unk_30, c);
        unk_98 = 0;
    }
    _ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void Unk_02017d74::act0EStep00(C_7d74 *c) {
    using namespace nL;
    if (HandOverItem_IsModeActive(2)) {
        Unk_02017d74_Data *d = _ZN13NpcActionCtrl12getCurParamsEv(this);
        if (Unk_02017d74_Is((u16 *)((u8 *)c + 0xea), 0xd00c) || HandOverItem_CanTake(c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->unk_628) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
            }
            unk_98 = 2;
        } else if (Unk_02017d74_Is(&d->unk_22, 0x1565) && d->unk_24 == 0 && (Scene_GetCurrent() == 9 || Scene_GetCurrent() == 0x10)) {
            if (HandOverItem_SwitchMaster(c)) {
                u16 v = data_020c6cc8;
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x25, data_020c6cc8, 1, 0x1000, 0, 0);
                if (c->unk_628) {
                    _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
                }
                unk_98 = 2;
            }
        } else {
            Unk_02017d74_Buf buf;
            if (HandOverItem_GetPos(&buf)) {
                buf.b = 0;
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, &buf);
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, &buf);
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 1, 0, data_020c6cc8);
                unk_98 = 1;
            }
        }
    }
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep01EP12Unk_02006d14(S *s, C_745c *c) {
    if (HandOverItem_CanTake(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(c->unk_350, c, 0, 0, v);
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(c->unk_350, gVec3Zero);
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x25, v, 1, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        s->unk_98 = 2;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep02EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        if (HandOverItem_SwitchMaster(c)) {
            if (HandOverItem_RequestMode(3, c)) {
                s->unk_98 = 3;
            }
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep03EP12Unk_02006d14(S *s, C_745c *c) {
    if (!HandOverItem_IsModeActive(3)) {
        if (HandOverItem_RequestMode(4, c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x26, data_020c6cc8, 1, 0x1000, 0, 0);
            if (c->unk_628) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
            }
            s->unk_98 = 4;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep04EP12Unk_02006d14(S *s, C_745c *c) {
    s16 t;
    s32 v[3];
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        switch (HandOverItem_GetNextMode()) {
        case 6:
            HandOverItem_End(c);
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
            Effect_PlayById2(0x61, (u8 *)c + 0x5c, 0, 0);
            func_02003ddc(c->unk_350 + 0x1c4, 0x76, 0x7f, 0);
            s->unk_98 = 6;
            break;
        case 7:
            if (HandOverItem_RequestMode(7, c)) {
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
                s->unk_98 = 7;
            }
            break;
        case 5:
            if (HandOverItem_RequestMode(5, c)) {
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
                func_02003ddc(c->unk_350 + 0x1c4, 0x4f, 0x7f, 0);
                s->unk_98 = 5;
            }
            break;
        case 10:
            if (HandOverItem_RequestMode(10, c)) {
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x139, 0, 0, 0x1000, 0, 1);
                ThreeLayerAnimModel_AssignJointsToLayer2((u8 *)c + 0xec, 9, 14);
                _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
                s->unk_98 = 0x14;
            }
            break;
        case 11:
            if (HandOverItem_RequestMode(11, c)) {
                v[0] = c->unk_478;
                v[1] = c->unk_47c;
                v[2] = c->unk_480;
                t = c->unk_8e;
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
                s->unk_ac = Effect_Create(0x40, v, &t, 0);
                s->unk_98 = 0xb;
            }
            break;
        case 8:
        case 9:
        default:
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
            s->unk_98 = 0x14;
            break;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep05EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        HandOverItem_End(c);
        if (s->unk_ac != -1) {
            Effect_End(s->unk_ac);
        }
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->unk_98 = 0x14;
    } else if (s->unk_ac != -1) {
        Effect_SetPosition(s->unk_ac, c->unk_350 + 0x128, &c->unk_8e, 0);
    }
}
}

namespace nK {
extern "C" BOOL _ZN12Unk_02016a4415waitItemAnimEndEP12Unk_02006d14Ptjj(S *s, C_745c *c, void *p, u32 a, u8 b) {
    if (a == (u32)_ZN12Unk_02015b8c9getAnimIdEj(c->unk_334, 0)) {
        if (nK2::_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334, c)) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
            }
            return TRUE;
        } else {
            switch ((c->unk_190 << 4) >> 16) {
            case 8:
                c->vf88(p, b);
                break;
            case 0xd:
                Effect_Create(0x22, (u8 *)c + 0x5c, 0, 0);
                break;
            case 3: {
                s16 t = c->unk_8e;
                Effect_Create(0x28, (u8 *)c + 0x490, &t, 0);
                Effect_Create(0x28, (u8 *)c + 0x484, &t, 0);
                break;
            }
            }
        }
    }
    return FALSE;
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep06EP12Unk_02006d14(S *s, C_745c *c) {
    void *r = _ZN13NpcActionCtrl12getCurParamsEv(s);
    if (_ZN12Unk_02016a4415waitItemAnimEndEP12Unk_02006d14Ptjj(s, c, (u8 *)r + 0x22, 0x28, 1)) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->unk_98 = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep07EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        if (PlayerActor_RequestAct32()) {
            u16 v = data_020c6cc8;
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            if (c->unk_628) {
                _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
            }
            s->unk_98 = 8;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep08EP12Unk_02006d14(S *s, C_745c *c) {
    if (!HandOverItem_IsMaster(c)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        s->unk_98 = 9;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep09EP12Unk_02006d14(S *s, C_745c *c) {
    if (!HandOverItem_IsActive()) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->unk_98 = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep10EP12Unk_02006d14(S *s, C_745c *c) {
    if (((c->unk_190 << 4) >> 16) == 0) {
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->unk_98 = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep11EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x2a, 0, 1, 0x1000, 0, 0);
        if (s->unk_ac != -1) {
            Effect_End(s->unk_ac);
        }
        s->unk_98 = 0xc;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep12EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        u16 v = data_020c6cc8;
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        if (c->unk_628) {
            _ZN13HeldToolModel12playIdleAnimEjj(c->unk_628, v, 0);
        }
        HandOverItem_End(c);
        _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
        s->unk_98 = 0x14;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep13EP12Unk_02006d14(S *s, C_745c *c) {
    if (HandOverItem_IsModeActive(1)) {
        s->unk_98 = 0xe;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep14EP12Unk_02006d14(S *s, C_745c *c) {
    if (!HandOverItem_IsModeActive(1)) {
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x2c, data_020c6cc8, 1, 0x1000, 0, 0);
        s->unk_98 = 0xf;
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep15EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        if (HandOverItem_SwitchMaster(c)) {
            if (HandOverItem_RequestMode(3, c)) {
                s->unk_98 = 0x10;
            }
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep16EP12Unk_02006d14(S *s, C_745c *c) {
    if (!HandOverItem_IsModeActive(3)) {
        if (HandOverItem_RequestMode(4, c)) {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x2d, data_020c6cc8, 1, 0x1000, 0, 0);
            s->unk_98 = 0x11;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep17EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        u32 r = HandOverItem_GetNextMode();
        switch (r) {
        case 7:
            if (HandOverItem_RequestMode(7, c)) {
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x2d, data_020c6cc8, 3, 0x1000, 0, 0);
                s->unk_98 = 0x12;
            }
            break;
        case 5:
            if (HandOverItem_RequestMode(5, c)) {
                _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x2e, data_020c6cc8, 1, 0x1000, 0, 0);
                func_02003ddc(c->unk_350 + 0x1c4, 0x4f, 0x7f, 0);
                s->unk_98 = 5;
            }
            break;
        default:
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0x24, data_020c6cc8, 0, 0x1000, 0, 0);
            _ZN13NpcActionCtrl13setActionDoneEi(s, 1);
            s->unk_98 = 0x14;
            break;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep18EP12Unk_02006d14(S *s, C_745c *c) {
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(c->unk_334)) {
        if (HandOverItem_RequestMode(2, c)) {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(c->unk_334, c, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            s->unk_98 = 0x13;
        }
    }
}
}

namespace nK {
extern "C" void _ZN12Unk_02016a4411act0EStep19EP12Unk_02006d14(S *s, C_745c *c) {
    void *r = _ZN13NpcActionCtrl12getCurParamsEv(s);
    if (!HandOverItem_IsModeActive(2)) {
        HandOverItem_SetNextMode(9, c);
        if (HandOverItem_SwitchMaster(*(void **)((u8 *)r + 0x28))) {
            if (PlayerActor_LocalRequestAct37()) {
                s->unk_98 = 9;
            }
        }
    }
}
}

namespace nZ {
extern "C" {
const u32 sNpcMoveModeTable[25] = {0x0, 0x100, 0x0, 0x100, 0x0, 0x1, 0x200, 0x1, 0x100, 0x1, 0x2, 0x400, 0x2, 0x400, 0x1, 0x1, 0x800, 0x0, 0x100, 0x1, 0x0, 0x100, 0x1, 0x100, 0x0};
void *data_020d7414[2] = {(void *)_ZN12Unk_02016a4411act0EStep03EP12Unk_02006d14, 0};
void *data_020d740c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d7404[2] = {(void *)_ZN12Unk_0201442012taskGiveItemEv, 0};
void *data_020d73fc[2] = {(void *)_ZN12Unk_02016a4411act0EStep06EP12Unk_02006d14, 0};
void *data_020d717c[2] = {(void *)_ZN12Unk_0201442011eatItemWaitEv, 0};
void *data_020d73ec[2] = {(void *)_ZN12Unk_02016a4411act0EStep08EP12Unk_02006d14, 0};
void *data_020d723c[2] = {(void *)_ZN12Unk_0201347411setupState1EP19Unk_020133cc_Player, 0};
void *data_020d73dc[2] = {(void *)_ZN12Unk_02016a4411act0EStep10EP12Unk_02006d14, 0};
void *data_020d7244[2] = {(void *)VillagerRoute_PickOtherHouseBlock, 0};
void *data_020d73cc[2] = {(void *)_ZN12Unk_02016a4411act0EStep12EP12Unk_02006d14, 0};
void *data_020d73c4[2] = {(void *)_ZN12Unk_02016a4411act0EStep13EP12Unk_02006d14, 0};
void *data_020d73bc[2] = {(void *)_ZN12Unk_02016a4411act0EStep14EP12Unk_02006d14, 0};
const u16 data_020c6d14[2] = {0x48, 0x0};
void *data_020d73ac[2] = {(void *)_ZN12Unk_02016a4411act0EStep16EP12Unk_02006d14, 0};
void *data_020d73a4[2] = {(void *)_ZN12Unk_02016a4411act0EStep17EP12Unk_02006d14, 0};
void *data_020d739c[2] = {(void *)_ZN12Unk_02016a4411act0EStep18EP12Unk_02006d14, 0};
void *data_020d7394[2] = {(void *)_ZN12Unk_02016a4411act0EStep19EP12Unk_02006d14, 0};
void *data_020d7294[2] = {(void *)_ZN12Unk_0201347410mainState3EP19Unk_020133cc_Player, 0};
const u16 data_020c6d30[2] = {0x63, 0x0};
void *data_020d737c[2] = {(void *)_ZN12Unk_02016a4410act11Step0EP12Unk_02006d14, 0};
void *data_020d7374[2] = {(void *)_ZN12Unk_02016a4410act11Step1EP12Unk_02006d14, 0};
void *data_020d736c[2] = {(void *)_ZN12Unk_02016a4410act11Step2Ev, 0};
void *data_020d72b4[2] = {(void *)_ZN12Unk_02016a4410act12Step1Ev, 0};
void *data_020d735c[2] = {(void *)_ZN12Unk_020d771012taskSubSceneEv, 0};
}
}

void Unk_02016a44::mainAct0E(Unk_02006d14 *o) {
    using namespace nJ;
    static void (Unk_02016a44::*tbl[20])(Unk_02006d14 *) = {*(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d742c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7424, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d741c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7414, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7184, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d719c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73fc, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d721c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73ec, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73e4, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73dc, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73d4, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73cc, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73c4, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73bc, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73b4, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73ac, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d73a4, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d739c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7394};
    if (unk_98 < 20) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016a44::postAct0E() {
    using namespace nJ;
}

BOOL Unk_02016a44::setupAct0F(Unk_02006d14 *o) {
    using namespace nJ;
    Unk_02016a44_Sub *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    u16 v;
    HandOverItem_GetItem(&v);
    s->unk_22 = v;
    if (HandOverItem_IsActive()) {
        HandOverItem_End(o);
    }
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x28, data_020c6cc8, 1, 0x1000, 0, 0);
    Effect_PlayById2(0x61, &o->unk_5c, 0, 0);
    func_02003ddc(&o->unk_514, 0x76, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    unk_04 = 0x14;
    unk_05 = unk_14;
    nJ::NpcAction_PackItem(this, unk_06, &s->unk_22);
    return TRUE;
}

void Unk_02016a44::postAct0F(Unk_02006d14 *o) {
    using namespace nJ;
    Unk_02016a44_Sub *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    if (waitItemAnimEnd(o, &s->unk_22, 0x28, 1)) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL Unk_02016a44::setupAct10(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(5, o)) {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x27, data_020c6cc8, 1, 0x1000, 0, 0);
            func_02003ddc(&o->unk_514, 0x4f, 0x7f, 0);
            if (_ZN12Unk_02015b8c9getAnimIdEj(&o->unk_334, 1) == 0x139) {
                _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->unk_ec, 0, 0);
            }
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
        }
    }
    return TRUE;
}

void Unk_02016a44::postAct10(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(&o->unk_334)) {
        HandOverItem_End(o);
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL Unk_02016a44::setupAct11(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(7, o)) {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x26, data_020c6cc8, 3, 0x1000, 0, 0);
            if (_ZN12Unk_02015b8c9getAnimIdEj(&o->unk_334, 1) == 0x139) {
                _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(&o->unk_ec, 0, 0);
            }
            HandOverItem_SetNextMode(5, o);
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
        }
    }
    return TRUE;
}

void Unk_02016a44::act11Step0(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(&o->unk_334)) {
        if (PlayerActor_RequestAct32()) {
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x23, data_020c6cc8, 0, 0x1000, 0, 0);
            unk_98 = 1;
        }
    }
}

void Unk_02016a44::act11Step1(Unk_02006d14 *o) {
    using namespace nJ;
    if (!HandOverItem_IsMaster(o)) {
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
        unk_98 = 2;
    }
}

void Unk_02016a44::act11Step2() {
    using namespace nJ;
    if (!HandOverItem_IsActive()) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        unk_98 = 3;
    }
}

namespace nZ {
extern "C" {
void *data_020d7344[2] = {(void *)_ZN11NpcTalkCtrl11state2Step0EP16Unk_02013b10_Ctx, 0};
void *data_020d733c[2] = {(void *)_ZN9NpcLookAt17lookAtLocalPlayerEP18Unk_0201a334_Scene, 0};
void *data_020d72d4[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d732c[2] = {(void *)_ZN12Unk_0201216410isAtDoorT3EP16Unk_02011f74_Vec, 0};
}
}

void Unk_02016a44::mainAct11(Unk_02006d14 *o) {
    using namespace nJ;
    static void (Unk_02016a44::*tbl[3])(Unk_02006d14 *) = {*(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d737c, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7374, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d736c};
    if (unk_98 < 3) {
        (this->*tbl[unk_98])(o);
    }
}

BOOL Unk_02016a44::setupAct12(Unk_02006d14 *o) {
    using namespace nJ;
    if (HandOverItem_IsActive()) {
        if (HandOverItem_RequestMode(8, o)) {
            HandOverItem_SetNextMode(8, o);
            unk_98 = 0;
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
            PlayerActor_PlayLocalSe(0x72);
        }
    }
    return TRUE;
}

void Unk_02016a44::act12Step0() {
    using namespace nJ;
    if (HandOverItem_IsModeActive(8) != 0) {
        unk_98 = 1;
    }
}

void Unk_02016a44::act12Step1() {
    using namespace nJ;
    if (HandOverItem_IsModeActive(8) == 0) {
        unk_98 = 2;
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

namespace nZ {
extern "C" {
void *data_020d730c[2] = {(void *)_ZN12Unk_020186989mainAct03EP16Unk_02018698_Ctx, 0};
void *data_020d7324[2] = {(void *)_ZN12Unk_0201636010act15Step0EP16Unk_02015fe0_Obj, 0};
void *data_020d7364[2] = {(void *)_ZN12Unk_020136c011setupState4EP19Unk_020133cc_Player, 0};
}
}

void Unk_02016a44::mainAct12(Unk_02006d14 *o) {
    using namespace nJ;
    static void (Unk_02016a44::*tbl[2])(Unk_02006d14 *) = {*(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d7354, *(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d72b4};
    if (unk_98 < 2) {
        (this->*tbl[unk_98])(o);
    }
}

BOOL Unk_02016a44::setupAct13(Unk_02006d14 *o) {
    using namespace nJ;
    s32 v[3];
    s16 ang;
    v[0] = o->unk_478;
    v[1] = o->unk_47c;
    v[2] = o->unk_480;
    ang = o->unk_8e;
    HandOverItem_RequestMode(0xb, o);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x29, data_020c6cc8, 1, 0x1000, 0, 0);
    unk_ac = Effect_Create(0x40, v, &ang, 0);
    func_02003ddc(&o->unk_514, 0x6f, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

void Unk_02016a44::act13Step0(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(&o->unk_334)) {
        _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0x2a, 0, 1, 0x1000, 0, 0);
        if (unk_ac != -1) {
            Effect_End(unk_ac);
        }
        unk_98 = 1;
    } else {
        if (unk_ac != -1) {
            Effect_SetPosition(unk_ac, &o->unk_478, &o->unk_8e, 0);
        }
    }
}

void Unk_02016a44::mainAct13(Unk_02006d14 *o) {
    using namespace nJ;
    static void (Unk_02016a44::*tbl[1])(Unk_02006d14 *) = {*(void (Unk_02016a44::**)(Unk_02006d14 *))data_020d72ec};
    if (unk_98 < 1) {
        (this->*tbl[unk_98])(o);
    }
}

void Unk_02016a44::postAct13(Unk_02006d14 *o) {
    using namespace nJ;
    if (_ZN12Unk_02015b8c9getAnimIdEj(&o->unk_334, 0) == 0x2a) {
        if (_ZN12Unk_02015b8c14isAnimFinishedEP18Unk_02015b8c_Scene(&o->unk_334, o)) {
            HandOverItem_End(o);
            _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 0, data_020c6cc8, 0, 0x1000, 0, 0);
            nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
        }
    }
}

s32 Unk_02016a44::requestAct14(s32 a, u16 *p) {
    using namespace nJ;
    s32 r = 0;
    if (a >= unk_28 || unk_28 == 3) {
        Unk_02016a44_Sub2c *q = &unk_2c;
        nJ::_ZN13NpcActionCtrl16setPendingActionEii(this, 0x14, a);
        _ZN15NpcActionParams5clearEv(q);
        q->unk_22 = *p;
        r = 1;
    }
    return r;
}

BOOL Unk_02016a44::setupAct14(Unk_02006d14 *o) {
    using namespace nJ;
    nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    u16 t = data_020c6cc8;
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&o->unk_334, o, 6, data_020c6cc8, 1, 0x1000, 0, 0);
    if (o->unk_628) {
        _ZN13HeldToolModel12playIdleAnimEjj(o->unk_628, t, 0);
    }
    Effect_PlayById2(0x61, &o->unk_5c, 0, 0);
    func_02003ddc(&o->unk_514, 0x76, 0x7f, 0);
    nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 0);
    return TRUE;
}

BOOL Unk_02016a44::postAct14(Unk_02006d14 *o) {
    using namespace nJ;
    Unk_02016a44_Sub *s = nJ::_ZN13NpcActionCtrl12getCurParamsEv(this);
    if (waitItemAnimEnd(o, &s->unk_22, 6, 0)) {
        nJ::_ZN13NpcActionCtrl13setActionDoneEi(this, 1);
    }
}

BOOL Unk_02016a44::setupAct15(Unk_02006d14 *o) {
    using namespace nJ;
    s32 v[3];
    s16 ang;
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    ang = o->unk_8e;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, v, &ang)) {
        s32 dx = v[0] - o->unk_5c;
        s32 dz = v[2] - o->unk_64;
        s32 d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->unk_350, ang);
                unk_98 = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 0, 0, data_020c6cc8);
                unk_98 = 0;
            }
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&o->unk_350, gVec3Zero);
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(&o->unk_350, gVec3Zero);
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (NpcActor_IsFrontAngle((s16)(a - ang))) {
                if (unk_00 == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 1, 0, data_020c6cc8);
                }
                unk_98 = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(&o->unk_350, a);
                unk_98 = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&o->unk_350, v);
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(&o->unk_350, v);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(&o->unk_350, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&o->unk_350, gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(&o->unk_350, gVec3Zero);
        unk_98 = 0;
    }
    return TRUE;
}

void Unk_02016360::act15Step0(Unk_02015fe0_Obj *o) {
    using namespace nI;
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 2;
            } else if (_ZN11NpcMoveCtrl11getMoveModeEv(o->unk_350)) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
            }
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (unk_00 == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, a);
                unk_98 = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &pos);
        }
    }
}

void Unk_02016360::act15Step1(Unk_02015fe0_Obj *o) {
    using namespace nI;
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(o->unk_350, o);
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            if (ang != o->unk_8e) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
                unk_98 = 0;
            }
        } else {
            if (!NpcActor_IsFrontAngle(func_020e7b98(dx, dz) - ang)) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 2;
            } else {
                if (_ZN11NpcMoveCtrl11getMoveModeEv(o->unk_350) == 1) {
                    if (unk_00 == 2) {
                        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 2, 0, data_020c6cc8);
                    }
                } else if (_ZN11NpcMoveCtrl11getMoveModeEv(o->unk_350) == 2) {
                    if (unk_00 == 1) {
                        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 1, 0, data_020c6cc8);
                    }
                }
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &pos);
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &pos);
            }
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        unk_98 = 0;
    }
}

void Unk_02016360::act15Step2(Unk_02015fe0_Obj *o) {
    using namespace nI;
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d < 0x29) {
            s16 a = ang;
            if (a != _ZN11NpcMoveCtrl14getTargetAngleEv(o->unk_350)) {
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, a);
            } else {
                s32 c = _ZN11NpcMoveCtrl14getTargetAngleEv(o->unk_350);
                if (c == o->unk_8e) unk_98 = 0;
            }
        } else {
            s32 a = func_020e7b98(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (unk_00 == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 1;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 4, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, a);
                unk_98 = 3;
            }
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &pos);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        unk_98 = 0;
    }
}

void Unk_02016360::act15Step3(Unk_02015fe0_Obj *o) {
    using namespace nI;
    Unk_02015fe0_Vec pos;
    s16 ang;
    s32 dx, dz, d;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    ang = o->unk_8e;
    _ZN11NpcMoveCtrl16aimAtDestinationEP18Unk_0201a334_Scene(o->unk_350, o);
    if (_ZN8NpcActor15netReadPositionEPiPh(o, &pos, &ang)) {
        dx = pos.x - o->unk_5c;
        dz = pos.z - o->unk_64;
        d = func_01ffcb0c(dx, dx) + func_01ffcb0c(dz, dz);
        if (d == 0) {
            o->unk_94 = o->unk_8e;
            if (ang != o->unk_8e) {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 3, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 2;
            } else {
                _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
                _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
                unk_98 = 0;
            }
        } else if (d >= 0x29) {
            s32 a = func_020e7b98(dx, dz);
            if (NpcActor_IsFrontAngle(a - ang)) {
                if (unk_00 == 2) {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 2, 0, data_020c6cc8);
                } else {
                    _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 1, 0, data_020c6cc8);
                }
                o->unk_94 = o->unk_8e;
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
                unk_98 = 1;
            } else {
                _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, a);
            }
            _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &pos);
            _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &pos);
        }
    } else {
        _ZN11NpcMoveCtrl11setMoveModeEP18Unk_0201a334_Sceneist(o->unk_350, o, 0, 0, data_020c6cc8);
        _ZN11NpcMoveCtrl14setTargetAngleEs(o->unk_350, ang);
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        _ZN11NpcMoveCtrl14setDestinationEP17Unk_0201a334_Vec3(o->unk_350, &gVec3Zero);
        unk_98 = 0;
    }
}

namespace nZ {
extern "C" {
void *data_020d7434[2] = {(void *)_ZN12Unk_0201425818switchSpeakerCloseEv, 0};
void *data_020d7444[2] = {(void *)_ZN12Unk_0201442012taskTakeItemEv, 0};
void *data_020d745c[2] = {(void *)_ZN12Unk_02017d7410act0DStep0EP16Unk_02017d74_Ctx, 0};
}
}

void Unk_02016360::mainAct15(Unk_02015fe0_Obj *o) {
    using namespace nI;
    static Unk_02016360_Fn tbl[4] = {*(Unk_02016360_Fn *)data_020d7324, *(Unk_02016360_Fn *)data_020d755c, *(Unk_02016360_Fn *)data_020d75ac, *(Unk_02016360_Fn *)data_020d72f4};
    if (unk_98 < 4) {
        (this->*tbl[unk_98])(o);
    }
}

NpcAnimCtrl::NpcAnimCtrl() {
    using namespace nI;
    _ZN17NpcBodyAnimHandleC1Ev(this);
}

NpcAnimCtrl::~NpcAnimCtrl() {
    using namespace nI;
    _ZN17NpcBodyAnimHandleD1Ev(this);
}

BOOL NpcAnimCtrl::initForActor(Unk_02015fe0_Obj *o, s32 a) {
    using namespace nI;
    _ZN12Unk_02015b8c17setAnimSpeedFixedEh(this, 0);
    unk_14 = a;
    if (!_ZN12NpcResHandle7acquireEv(this)) return FALSE;
    playAnim(o, 0, 0, 0, 0x1000, 0, 0);
    _ZN9AnimModel10attachAnimEv(o->unk_ec);
    _ZN5Model11setCallbackEiiiii(o->unk_ec, (void *)NpcActor_JointCalcLayer3Cb, 6, 1, o, 0);
    unk_0c = 2;
    if (!_ZN12Unk_02015b8c14hasTalkGestureEv(this)) _ZN12Unk_02015b8c15loadTalkGestureEv(this);
    unk_10 = 0;
    return TRUE;
}

void *NpcAnimCtrl::getAnimResource(s32 a, s32 b) {
    using namespace nI;
    void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, b);
    void *r = 0;
    if (p) {
        AnimSlotRef_Load(p, a, 0, 0);
        void *q = AnimSlotRef_GetData(p);
        q = func_021065dc(q);
        r = func_021065f8(q, 0);
    }
    return r;
}

s32 NpcAnimCtrl::resolveAnimId(s32 mode, void *p) {
    using namespace nI;
    switch (mode) {
    case 0:
        mode = _ZN14NpcMoveAnimSet12getStandAnimEv(p);
        break;
    case 1:
        mode = _ZN14NpcMoveAnimSet11getWalkAnimEv(p);
        break;
    case 2:
        mode = _ZN14NpcMoveAnimSet10getRunAnimEv(p);
        break;
    }
    return mode;
}

BOOL NpcAnimCtrl::isPlayingAnim(s32 mode, void *p) {
    using namespace nI;
    s32 a = resolveAnimId(mode, p);
    s32 b = _ZN12Unk_02015b8c9getAnimIdEj(this, 0);
    if (a == b) return TRUE;
    return FALSE;
}

void NpcAnimCtrl::playAnim(Unk_02015fe0_Obj *o, s32 kind, s32 a3, s32 a4, s32 a5, u16 a6, s32 mode) {
    using namespace nI;
    u32 v;
    if (a6 == 0) {
        switch (a4) {
        case 2:
        case 3:
            v = 0xffff;
            goto vdone;
        }
    }
    v = a6;
vdone:
    if (mode >= 0 && mode < 3)
    switch (mode) {
    case 0: {
        s32 size = resolveAnimId(kind, o->unk_2a0);
        if (size != _ZN14NpcMoveAnimSet12getStandAnimEv(o->unk_2a0) || !isPlayingAnim(size, o->unk_2a0)) {
            void *r = getAnimResource(size, mode);
            if (r) {
                BlendAnimModel_Play2(o->unk_ec, r, a3, a4, a5, v, 0);
            }
        }
        _ZN12Unk_02015b8c13syncMouthTypeEP18Unk_02015b8c_Scene(this, o);
        s32 t = _ZN12Unk_02015b8c9getAnimIdEj(this, 0);
        s32 u = _ZN14NpcSpeechState12getMouthTypeEv(o->unk_418);
        _ZN11NpcFaceAnim16setFaceAnimsFromEPvii(o->unk_2ac, t, a4, u);
        break;
    }
    case 1: {
        void *r = getAnimResource(kind, mode);
        if (r) {
            _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(o->unk_ec, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    case 2: {
        void *r = getAnimResource(kind, mode);
        if (r) {
            _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(o->unk_ec, r, a3, a4, a5, v, 0, 0);
        }
        break;
    }
    }
}

void NpcAnimCtrl::playHoldItemPose(Unk_02015fe0_Obj *o, u16 *p, void *q, u16 x) {
    using namespace nI;
    if (Item_IsHoldable(p)) {
        if (CharaAnim_GetHoldPoseMode(q) != 3) {
            if (Unk_02015fe0_R(p, 0x1369, 0x1369)) {
                void *r = getAnimResource(0x13f, 1);
                if (r) {
                    _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(o->unk_ec, r, x, 0, 0x1000, 0, 0, 0);
                    ThreeLayerAnimModel_AssignJointsToLayer2(o->unk_ec, 0xc, 0xe);
                }
            } else {
                s32 id = HeldItem_GetHandPose(p);
                if (id != 0x144) {
                    void *r = getAnimResource(id, 1);
                    if (r) {
                        _ZN17TwoLayerAnimModel10playLayer2Ejjjjjji(o->unk_ec, r, x, 0, 0x1000, 0, 0, 0);
                        s32 t = CharaAnim_GetJointGroup(id);
                        if (t < 4) {
                            u32 n = JointGroup_GetRangeCount();
                            for (u32 i = 0; i < n; i++) {
                                s32 a = JointGroup_GetRangeFirst(t, i);
                                ThreeLayerAnimModel_AssignJointsToLayer2(o->unk_ec, a, JointGroup_GetRangeLast(t, i));
                            }
                        } else {
                            _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(o->unk_ec, 0, 0);
                        }
                    }
                } else {
                    _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(o->unk_ec, 0, 0);
                }
            }
        } else {
            _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(o->unk_ec, 0, 0);
        }
    } else {
        _ZN17TwoLayerAnimModel18playLayer2FromBaseEjj(o->unk_ec, 0, 0);
    }
}

BOOL Unk_02015b8c::hasTalkGesture() {
    using namespace nH;
    if (getAnimId(2) == 0x143) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02015b8c::loadTalkGesture() {
    using namespace nH;
    void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, 2);
    if (p != NULL) {
        AnimSlotRef_Load(p, 0x143, 0, 0);
    }
}

u32 Unk_02015b8c::getTalkGestureData() {
    using namespace nH;
    u32 r = 0;
    if (hasTalkGesture()) {
        void *p = _ZN12NpcResHandle16getBodyAnimLayerEj(this, 2);
        if (p != NULL) {
            r = func_021065f8(func_021065dc(AnimSlotRef_GetData(p)), r);
        }
    }
    return r;
}

void Unk_02015b8c::playTalkGesture(Unk_02015b8c_Scene *scene, u32 a, u32 b) {
    using namespace nH;
    u32 r1 = getTalkGestureData();
    if (r1 != 0) {
        _ZN19ThreeLayerAnimModel10playLayer3Ejjjjjji(((void *)((u8 *)(scene) + (0xec))), r1, 0, 1, 0x1000, a, b, 0);
        s32 t = CharaAnim_GetJointGroup(0x143);
        if (t < 4) {
            u32 n = JointGroup_GetRangeCount();
            for (u32 i = 0; i < n; i++) {
                u32 x = JointGroup_GetRangeFirst(t, i);
                _ZN19ThreeLayerAnimModel20assignJointsToLayer3Ejj(((void *)((u8 *)(scene) + (0xec))), x, JointGroup_GetRangeLast(t, i));
            }
        } else {
            stopTalkGesture(scene);
        }
    } else {
        stopTalkGesture(scene);
    }
}

void Unk_02015b8c::stopTalkGesture(Unk_02015b8c_Scene *scene) {
    using namespace nH;
    _ZN19ThreeLayerAnimModel18playLayer3FromBaseEjj(((void *)((u8 *)(scene) + (0xec))), 0, 0);
}

void Unk_02015b8c::setAnimSpeedFixed(u8 v) {
    using namespace nH;
    unk_18 = v;
}

void Unk_02015b8c::playAnimKeepFrame(Unk_02015b8c_Scene *scene, u32 c, u32 d, u32 e) {
    using namespace nH;
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(this, scene, c, d, 0, *(u32 *)((void *)((u8 *)(scene) + (0x198))), (*(u32 *)((void *)((u8 *)(scene) + (0x190))) << 4) >> 16, e);
}

BOOL Unk_02015b8c::isAnimFinished(Unk_02015b8c_Scene *scene) {
    using namespace nH;
    if (_ZN13AnimFrameCtrl10isFinishedEv(((void *)((u8 *)(scene) + (0x188)))) != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_02015b8c::getAnimId(u32 idx) {
    using namespace nH;
    if (_ZN12NpcResHandle16getBodyAnimLayerEj(this, idx) != NULL) {
        return AnimSlotRef_GetAnimId(_ZN12NpcResHandle16getBodyAnimLayerEj(this, idx));
    }
    return 0x144;
}

void Unk_02015b8c::updateAnimSpeed(Unk_02015b8c_Scene *scene) {
    using namespace nH;
    s32 v = *(s32 *)((void *)((u8 *)(scene) + (0x98)));
    if (v == 0) {
        unk_08 = 0x1000;
    } else if (*_ZN11NpcMoveCtrl13func_0201a8ccEv(((void *)((u8 *)(scene) + (0x350)))) == 0) {
        unk_08 = 0x1000;
    } else {
        unk_08 = func_01ffcb0c(v, unk_14);
    }
    if (unk_08 <= *(s32 *)((void *)((u8 *)(scene) + (0x18c)))) {
        *(s32 *)((void *)((u8 *)(scene) + (0x198))) = unk_08;
    }
}

s32 Unk_02015b8c::getTalkGestureStart(u32 k) {
    using namespace nH;
    s32 r = 0;
    if (k == 1) {
        r = 6;
    }
    return r;
}

s32 Unk_02015b8c::getTalkGestureEnd(u32 k) {
    using namespace nH;
    s32 r = 7;
    if (k == 1) {
        r = 0xc;
    }
    return r;
}

void Unk_02015b8c::update(Unk_02015b8c_Scene *scene) {
    using namespace nH;
    if (hasTalkGesture()) {
        if (_ZN14NpcSpeechState12getMouthTypeEv(((void *)((u8 *)(scene) + (0x418)))) < 2) {
            if (_ZN14NpcSpeechState10isSpeakingEv(((void *)((u8 *)(scene) + (0x418))))) {
                if (unk_10 != 0) {
                    if (_ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(((void *)((u8 *)(scene) + (0xec)))) == 0) {
                        goto tail;
                    }
                }
                unk_0c = NpcFace_PickTalkMouth();
                s32 a = getTalkGestureStart(unk_0c);
                s32 b = getTalkGestureEnd(unk_0c);
                playTalkGesture(scene, a, b);
                unk_10 = 1;
            } else if (unk_10 == 1) {
                if (_ZN19ThreeLayerAnimModel19checkLayer3FinishedEv(((void *)((u8 *)(scene) + (0xec)))) != 0) {
                    stopTalkGesture(scene);
                    unk_10 = 0;
                }
            }
        } else if (unk_10 == 1) {
            stopTalkGesture(scene);
            unk_10 = 0;
        }
    }
tail:
    if (unk_18 == 0) {
        updateAnimSpeed(scene);
    }
}

s32 Unk_02015b8c::release() {
    using namespace nH;
    return _ZN12NpcResHandle7releaseEv(this);
}

void Unk_02015b8c::syncMouthType(Unk_02015b8c_Scene *scene) {
    using namespace nH;
    s32 r = getAnimId(0);
    s32 k = 0;
    switch (r) {
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x53:
    case 0x55:
    case 0x57:
    case 0x59:
    case 0x5b:
    case 0x5d:
    case 0x5f:
    case 0x61:
    case 0x63:
    case 0x65:
    case 0x67:
    case 0x69:
    case 0x6e:
    case 0x70:
    case 0x72:
    case 0x75:
    case 0x77:
    case 0x79:
    case 0x7b:
    case 0x7c:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x84:
    case 0x86:
    case 0x88:
    case 0x8a:
    case 0x8c:
    case 0x8d:
    case 0x8f:
    case 0x91:
    case 0x93:
    case 0x94:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9c:
    case 0x9f:
    case 0xa1:
    case 0xa3:
    case 0xa5:
    case 0xa7:

    case 0x144:
        k = 2;
        break;
    case 0x46:
    case 0x48:
    case 0x4c:
    case 0x4e:
    case 0x50:
    case 0x52:
    case 0x54:
    case 0x56:
    case 0x5a:
    case 0x60:
    case 0x62:
    case 0x64:
    case 0x68:
    case 0x6c:
    case 0x6d:
    case 0x71:
    case 0x76:
    case 0x78:
    case 0x83:
    case 0x85:
    case 0x87:
    case 0x8b:
    case 0x96:
    case 0x9b:
    case 0x9d:
    case 0x9e:
    case 0xa0:
    case 0xa2:
    case 0xa4:
    case 0xa8:
    case 0xe6:
    case 0xea:
        k = 1;
        break;
    }
    _ZN14NpcSpeechState12setMouthTypeEi(((void *)((u8 *)(scene) + (0x418))), k);
}

ActorTalkRequest::ActorTalkRequest() {
    using namespace nH;
    unk_7a = 0xfff1;
    unk_44 = 0;
    unk_48 = NULL;
    unk_4c = NULL;
    unk_58 = 0;
    unk_60 = 0xc;
    _ZN12Unk_020d771010resetTasksEv(this);
}

ActorTalkRequest::~ActorTalkRequest() {
    using namespace nH;
}

void ActorTalkRequest::vfunc_08() {
    using namespace nH;
    TalkMsgRequest::vfunc_08();
    unk_44 = 0;
    unk_4c = NULL;
    unk_50 = 0;
    unk_51 = 0;
    unk_58 = 0;
    clearItemActionBusy();
    _ZN12Unk_020d771010resetTasksEv(this);
}

void ActorTalkRequest::vfunc_80() {
    using namespace nH;
}

void ActorTalkRequest::tick() {
    using namespace nH;
    vfunc_80();
    _ZN12Unk_020d77107runTaskEv(this);
}

void ActorTalkRequest::vfunc_7c() {
    using namespace nH;
}

void ActorTalkRequest::func_02015ab0(u32 a) {
    using namespace nH;
    unk_44 = a;
}

u32 ActorTalkRequest::func_02015aac() {
    using namespace nH;
    return unk_44;
}

void ActorTalkRequest::setPartnerActor(Unk_02015b8c_Scene *p) {
    using namespace nH;
    unk_4c = p;
    if (unk_4c != NULL) {
        ActorTalkRequest *q = _ZN8NpcActor14getTalkRequestEv();
        if (q != NULL) {
            q->vfunc_08();
            unk_4c->vfunc_8c();
        }
    }
}

Unk_02015b8c_Scene *ActorTalkRequest::getPartnerActor() {
    using namespace nH;
    return unk_4c;
}

void ActorTalkRequest::setOwnerActor(Unk_02015b8c_Scene *p) {
    using namespace nH;
    unk_48 = p;
}

s32 ActorTalkRequest::getChoiceList() {
    using namespace nH;
    s32 r = 0;
    if (unk_3c != 0) {
        r = _ZN15TalkWindowState13getChoiceListEv(unk_3c);
    }
    return r;
}

s32 ActorTalkRequest::vfunc_6c() {
    using namespace nH;
    switch (unk_51) {
    case 0:
        if (unk_48 != NULL) {
            return Npc_GetVoiceType(((void *)((u8 *)(unk_48) + (0xea))));
        }
        break;
    case 1:
        if (unk_4c != NULL) {
            return Npc_GetVoiceType(((void *)((u8 *)(unk_4c) + (0xea))));
        }
        break;
    }
    return 5;
}

void ActorTalkRequest::playEmotion(u32 a, u32 b) {
    using namespace nH;
    Unk_02015b8c_Scene *o = getActor(b);
    if (o != NULL) {
        ActorTalkRequest *p = _ZN8NpcActor14getTalkRequestEv();
        if (p != NULL) {
            if (!p->isItemActionBusy()) {
                if (p->unk_58 == a) {
                    if (_ZN13NpcActionCtrl9getActionEv(((void *)((u8 *)(o) + (0x564)))) == 8) {
                        return;
                    }
                }
                _ZN13NpcActionCtrl14requestEmotionEiht(((void *)((u8 *)(o) + (0x564))), 2, a, data_020c6cc8);
                p->unk_58 = a;
            }
        }
    }
}

void ActorTalkRequest::vfunc_38(u32 a) {
    using namespace nH;
    playEmotion(a, unk_50);
}

void ActorTalkRequest::setItemActionBusy() {
    using namespace nH;
    unk_5c = 1;
}

void ActorTalkRequest::clearItemActionBusy() {
    using namespace nH;
    unk_5c = 0;
}

BOOL ActorTalkRequest::isItemActionBusy() {
    using namespace nH;
    if (unk_5c == 1) {
        return TRUE;
    }
    return FALSE;
}

void ActorTalkRequest::setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 loc;
        String_FormatNumber(&loc, a, c, d, e, 0);
        _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &loc);
    }
}

void ActorTalkRequest::setNumberNamedSlot(s32 a, u32 b, s32 c, u8 d, s32 e, s32 f) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 loc;
        u32 flag = 7;
        String_FormatNumber(&loc, a, c, e, f, 0);
        if (d != 0) {
            MsgString33 str;
            u8 ch = 0x1c;
            String_Load(&str, &ch, ((u8 *)"st_general"));
            _ZN9MsgString12appendStringEPS_(&loc, &str);
            flag = 0;
        }
        _ZN15TalkWindowState12setNamedSlotEiPvj(unk_3c, b, &loc, flag);
    }
}

void ActorTalkRequest::setFixedPointSlot(s32 a, u32 b, s32 c) {
    using namespace nH;
    if (a >= 0) {
        MsgString25 local;
        String_FormatFixedPoint(&local, a, c);
        _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
    }
}

void ActorTalkRequest::setMonthSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString33 local;
    String_GetMonthName(&local, a);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
}

void ActorTalkRequest::setDaySlot(u32 a, u32 b) {
    using namespace nH;
    MsgString33 local;
    String_GetDayOrdinal(&local, a);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
}

void ActorTalkRequest::setTownNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9C local;
    TownId_GetNameString(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
}

void ActorTalkRequest::setPlayerNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9B local;
    _ZN8PlayerId13getNameStringEP9MsgString(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
}

void ActorTalkRequest::setVillagerNameSlot(u32 a, u32 b) {
    using namespace nH;
    MsgString9B local;
    _ZN10VillagerId7getNameEj(a, &local);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, b, &local);
}

void ActorTalkRequest::setItemNameSlot(u32 a, u32 b, u32 c) {
    using namespace nH;
    ItemName local((u16 *)a);
    _ZN15TalkWindowState12setNamedSlotEiPvj(unk_3c, b, &local, c);
}

void ActorTalkRequest::setSlotFromString(u32 a, u32 b, u32 c) {
    using namespace nH;
    _ZN15TalkWindowState17setSlotFromStringEiii(unk_3c, a, b, c);
}

void ActorTalkRequest::vfunc_34() {
    using namespace nH;
}

void ActorTalkRequest::vfunc_3c() {
    using namespace nH;
    unk_50 = 2;
}

void ActorTalkRequest::vfunc_40() {
    using namespace nH;
    unk_50 = 0;
}

void ActorTalkRequest::vfunc_44() {
    using namespace nH;
    unk_50 = 1;
}

Unk_02015b8c_Scene *ActorTalkRequest::getActor(u32 idx) {
    using namespace nH;
    switch (idx) {
    case 0:
        return unk_48;
    case 1:
        return unk_4c;
    }
    return NULL;
}

Unk_02015b8c_Scene *ActorTalkRequest::getActionActor() {
    using namespace nH;
    return getActor(unk_50);
}

Unk_02015b8c_Scene *ActorTalkRequest::getActorB(u32 idx) {
    using namespace nH;
    switch (idx) {
    case 0:
        return unk_48;
    case 1:
        return unk_4c;
    }
    return NULL;
}

Unk_02015b8c_Scene *ActorTalkRequest::getSpeakerActor() {
    using namespace nH;
    return getActorB(unk_51);
}

u8 ActorTalkRequest::getSpeakerIndex() {
    using namespace nH;
    return unk_51;
}

namespace nH {
extern "C" s32 TalkRequest_GetPlayerId(void) {
    if (Scene_GetCurrent() == 0x2f) {
        return Net_GetJoiningAid();
    }
    return PlayerActor_GetLocalSessionSlot();
}
}

void ActorTalkRequest::vfunc_48() {
    using namespace nH;
    Unk_02015b8c_Scene *p = getActor(unk_50);
    if (p != NULL) {
        _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(((void *)((u8 *)(p) + (0x3b0))), 4, 0, 0, (s32)&gVec3Zero, TalkRequest_GetPlayerId(), 0, 0);
    }
}

void Unk_020d7710::vfunc_50() {
    using namespace nG;
    u8 *p5 = nG::_ZN16ActorTalkRequest8getActorEj(this, unk_50);
    if (p5 != NULL) {
        Unk_0201bc1c *h = _ZN8NpcActor14getTalkRequestEv();
        u32 u = TalkRequest_GetPlayerId();
        s32 v = _ZN8NpcActor16getAngleToPlayerEj(p5, u);
        if (h != NULL) {
            h->vfunc_38(0);
        }
        _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(p5 + 0x3b0, 4, 0, NULL, gVec3Zero, u, 0, 0);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(p5 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
    }
}

void Unk_020d7710::makePlayerLookAt(u8 *p) {
    using namespace nG;
    u32 a = TalkRequest_GetPlayerId();
    u32 b = PlayerActor_GetBodyPos();
    if (b != 0) {
        s32 s = Math_AngleXZ(b, p + 0x5c);
        s16 d = s - PlayerActor_GetCharacter(4)->unk_8e;
        PlayerActor_SetHeadTilt(0, d, a);
    }
}

void Unk_020d7710::makePlayerTurnTo(u8 *p) {
    using namespace nG;
    u32 a = TalkRequest_GetPlayerId();
    u32 b = PlayerActor_GetBodyPos();
    if (b != 0) {
        s32 s = Math_AngleXZ(b, p + 0x5c);
        PlayerActor_SetHeadTilt(0, 0, a);
        PlayerActor_RequestTurnTo(s, a);
        PlayerActor_SetNoFaceTalkTarget(1, a);
    }
}

void Unk_020d7710::vfunc_54() {
    using namespace nG;
    u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, 0);
    if (p4 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 1: {
            u8 *p = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p != NULL) {
                _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(p + 0x3b0, 2, 0, p4, gVec3Zero, 4, 0, 0);
            }
            break;
        }
        case 2:
            makePlayerLookAt(p4);
            break;
        }
    }
}

void Unk_020d7710::vfunc_58() {
    using namespace nG;
    u8 *p7 = nG::_ZN16ActorTalkRequest8getActorEj(this, 0);
    if (p7 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 1: {
            u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p4 != NULL) {
                Unk_0201bc1c *h = _ZN8NpcActor14getTalkRequestEv();
                s32 v = _ZN8NpcActor10getAngleToEPS_(p4, p7);
                vfunc_50();
                if (h != NULL) {
                    h->vfunc_38(0);
                }
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            makePlayerTurnTo(p7);
            break;
        }
    }
}

void Unk_020d7710::vfunc_5c() {
    using namespace nG;
    u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, 1);
    if (p4 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 0: {
            u8 *p = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p != NULL) {
                _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(p + 0x3b0, 2, 0, p4, gVec3Zero, 4, 0, 0);
            }
            break;
        }
        case 2:
            makePlayerLookAt(p4);
            break;
        }
    }
}

void Unk_020d7710::vfunc_60() {
    using namespace nG;
    u8 *p7 = nG::_ZN16ActorTalkRequest8getActorEj(this, 1);
    if (p7 != NULL) {
        u8 s = unk_50;
        switch (s) {
        case 0: {
            u8 *p4 = nG::_ZN16ActorTalkRequest8getActorEj(this, s);
            if (p4 != NULL) {
                Unk_0201bc1c *h = _ZN8NpcActor14getTalkRequestEv();
                s32 v = _ZN8NpcActor10getAngleToEPS_(p4, p7);
                vfunc_58();
                if (h != NULL) {
                    h->vfunc_38(0);
                }
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(p4 + 0x564, 3, 2, 0, 0, 0, v, 0, 0, data_020c6cc8, 0);
            }
            break;
        }
        case 2:
            makePlayerTurnTo(p7);
            break;
        }
    }
}

void Unk_020d7710::vfunc_64_alt() {
    using namespace nG;
    nG::_ZN12Unk_0201425820requestSwitchSpeakerEh(this, 1);
}

void Unk_020d7710::resetTasks() {
    using namespace nG;
    unk_60 = 12;
    unk_a8 = 0;
    unk_a9 = 0;
    initSubSceneParams((Unk_02015344_Params *)&unk_64);
}

void Unk_020d7710::initSubSceneParams(Unk_02015344_Params *p) {
    using namespace nG;
    p->unk_00 = 8;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0c = 0;
    p->unk_14 = 0;
    p->unk_10 = 0;
    p->unk_1c = 13;
    p->unk_16 = 0xfff1;
    p->unk_18 = 0;
    p->unk_1e = 0x45;
    p->unk_1f = 0;
    p->unk_20 = 2;
    p->unk_2c = 12;
    p->unk_30 = 2;
    p->unk_3c = 1;
    p->unk_34 = 0;
    p->unk_38 = 0;
    p->unk_3d = 0;
    p->unk_40 = 0;
}

BOOL Unk_020d7710::startTask(s32 x) {
    using namespace nG;
    BOOL result = FALSE;
    if (unk_60 == 12 || isTaskRunning() == 0) {
        unk_60 = x;
        unk_a8 = 0;
        result = TRUE;
        unk_a9 = result;
    }
    return result;
}

BOOL Unk_020d7710::isTaskRunning() {
    using namespace nG;
    if (unk_a9 != 0) {
        return TRUE;
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void *data_020d749c[2] = {(void *)_ZN12Unk_0201347411state1Step0EP19Unk_020133cc_Player, 0};
void *data_020d74ac[2] = {(void *)_ZN12Unk_0201442013taskItemAct12Ev, 0};
void *data_020d74b4[2] = {(void *)_ZN12Unk_0201442011taskEatItemEv, 0};
}
}

void Unk_020d7710::runTask() {
    using namespace nG;
    static Unk_020d7710_StateFn tbl[12] = {*(Unk_020d7710_StateFn *)data_020d735c, *(Unk_020d7710_StateFn *)data_020d7384, *(Unk_020d7710_StateFn *)data_020d720c, *(Unk_020d7710_StateFn *)data_020d7404, *(Unk_020d7710_StateFn *)data_020d7444, *(Unk_020d7710_StateFn *)data_020d7474, *(Unk_020d7710_StateFn *)data_020d747c, *(Unk_020d7710_StateFn *)data_020d7494, *(Unk_020d7710_StateFn *)data_020d74ac, *(Unk_020d7710_StateFn *)data_020d74b4, *(Unk_020d7710_StateFn *)data_020d74c4, *(Unk_020d7710_StateFn *)data_020d74d4};
    if (unk_60 < 12) {
        if ((this->*tbl[unk_60])()) {
            s32 old = unk_60;
            unk_a9 = 0;
            unk_60 = 12;
            vfunc_84(old);
        }
    }
}

void Unk_020d7710::vfunc_88() {
    using namespace nG;
}

BOOL Unk_020d7710::openSubScene(s32 x) {
    using namespace nG;
    BOOL result = FALSE;
    if (startTask(0)) {
        unk_64 = x;
        result = TRUE;
    }
    return result;
}

void Unk_020d7710::setPocketItem(u32 a, u32 b, u32 c) {
    using namespace nG;
    unk_78 = a;
    unk_74 = 0;
    unk_80 = b;
    unk_7a = 0xfff1;
    unk_84 = c;
}

void Unk_020d7710::setPocketFilter(u32 a, u32 b, u32 c) {
    using namespace nG;
    unk_78 = 0;
    unk_74 = a;
    unk_80 = b;
    unk_7a = 0xfff1;
    unk_84 = c;
}

void Unk_020d7710::setSubSceneKind(u32 a, u32 b) {
    using namespace nG;
    unk_82 = a;
    unk_84 = b;
}

void Unk_020d7710::setSubSceneKindArg(u32 a, u32 b, u32 c) {
    using namespace nG;
    unk_82 = a;
    unk_83 = b;
    unk_84 = c;
}

void Unk_020d7710::setSelectionList(u32 a, u32 b, u32 c) {
    using namespace nG;
    unk_68 = a;
    unk_6c = b;
    unk_84 = c;
}

void Unk_020d7710::setMenu12Arg(u32 a, u32 b) {
    using namespace nG;
    unk_70 = a;
    unk_84 = b;
}

void Unk_020d7710::setSubSceneKind2(u32 a, u32 b, u32 c, u8 d) {
    using namespace nG;
    unk_82 = a;
    unk_98 = b;
    unk_9c = c;
    unk_84 = d;
}

BOOL Unk_020d7710::subSceneCloseWindow() {
    using namespace nG;
    if (unk_3c != NULL) {
        unk_3c->unk_14 = 1;
        unk_a8 = 1;
    }
    return FALSE;
}

BOOL Unk_020d7710::subSceneOpen() {
    using namespace nG;
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        BOOL r = FALSE;
        switch (unk_64) {
        case 0: {
            u16 v = unk_78;
            if (unk_74 != 0) {
                v = MenuCtrl_BuildPocketMask(unk_74);
            }
            r = MenuCtrl_OpenPocketSelect(v, unk_80);
            break;
        }
        case 1:
            unk_84 = 1;
            r = MenuCtrl_OpenPostOffice();
            break;
        case 2:
            r = MenuCtrl_OpenLauncher(unk_82);
            break;
        case 3:
            r = MenuCtrl_OpenLauncherWithIndex(unk_82, unk_83);
            break;
        case 4:
            r = MenuCtrl_OpenNearbyTowns(unk_68, unk_6c);
            break;
        case 5:
            r = MenuCtrl_RequestOpenMenu12(unk_70);
            break;
        case 6:
            r = MenuCtrl_OpenLauncherWithText(unk_82, unk_98, unk_9c);
            break;
        case 7:
            if (unk_84 != 1) {
                unk_3c->unk_08 = 1;
            }
            unk_a8 = 3;
            return TRUE;
        }
        if (r) {
            unk_a8 = 2;
        }
    }
    return FALSE;
}

BOOL Unk_020d7710::subSceneWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (MenuCtrl_IsFinished()) {
        if (unk_84 != 1) {
            unk_3c->unk_08 = 1;
        }
        unk_a8 = 3;
        result = TRUE;
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d752c[2] = {(void *)_ZN12Unk_020d771012subSceneWaitEv, 0};
void *data_020d7534[2] = {(void *)_ZN11NpcTalkCtrl11state2Step1EP16Unk_02013b10_Ctx, 0};
void *data_020d7584[2] = {(void *)_ZN12Unk_020d771013giveItemStartEv, 0};
void *data_020d759c[2] = {(void *)_ZN12Unk_0201442014itemAct0FStartEv, 0};
}
}

BOOL Unk_020d7710::taskSubScene() {
    using namespace nG;
    static Unk_020d7710_StateFn tbl[3] = {*(Unk_020d7710_StateFn *)data_020d750c, *(Unk_020d7710_StateFn *)data_020d7524, *(Unk_020d7710_StateFn *)data_020d752c};
    BOOL r = FALSE;
    u8 i = unk_a8;
    if (i < 3) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL Unk_020d7710::requestReopenWindow() {
    using namespace nG;
    return startTask(1);
}

BOOL Unk_020d7710::taskReopenWindow() {
    using namespace nG;
    BOOL result = FALSE;
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        result = TRUE;
        unk_3c->unk_08 = result;
    }
    return result;
}

BOOL Unk_020d7710::requestCloseWindow(u32 x) {
    using namespace nG;
    if (startTask(2)) {
        unk_a4 = x;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020d7710::closeWindowStart() {
    using namespace nG;
    if (unk_3c != NULL) {
        unk_3c->unk_14 = unk_a4;
        unk_a8 = 1;
    }
    return FALSE;
}

BOOL Unk_020d7710::closeWindowWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (unk_3c != NULL && unk_3c->unk_04 == 5) {
        result = TRUE;
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d7624[2] = {(void *)_ZN12Unk_02016a4410setupAct15EP12Unk_02006d14, 0};
void *data_020d7634[2] = {(void *)_ZN12Unk_020163609mainAct15EP16Unk_02015fe0_Obj, 0};
}
}

BOOL Unk_020d7710::taskCloseWindow() {
    using namespace nG;
    static Unk_020d7710_StateFn tbl[2] = {*(Unk_020d7710_StateFn *)data_020d754c, *(Unk_020d7710_StateFn *)data_020d7564};
    BOOL r = FALSE;
    u8 i = unk_a8;
    if (i < 2) {
        r = (this->*tbl[i])();
    }
    return r;
}

BOOL Unk_020d7710::requestGiveItem(u16 *p, u32 b, u32 c, u32 d) {
    using namespace nG;
    BOOL result = FALSE;
    if (startTask(3)) {
        unk_7a = *p;
        unk_7c = b;
        unk_90 = c;
        unk_94 = d;
        result = TRUE;
    }
    return result;
}

BOOL Unk_020d7710::giveItemStart() {
    using namespace nG;
    if (unk_48 != NULL) {
        if (unk_3c != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
        }
        if (_ZN13NpcActionCtrl9getActionEv(unk_48 + 0x564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(unk_48 + 0x564) == 0) {
            vfunc_38(0);
        } else if (unk_3c != NULL) {
            if (_ZN13NpcActionCtrl15requestGiveItemEiPtjhjj(unk_48 + 0x564, 4, &unk_7a, unk_7c, unk_90, unk_94, unk_44)) {
                unk_a8 = 1;
            }
        }
    }
    return FALSE;
}

BOOL Unk_020d7710::giveItemWait() {
    using namespace nG;
    BOOL result = FALSE;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv(unk_48 + 0x564) == 13 && _ZN13NpcActionCtrl12isActionDoneEv(unk_48 + 0x564) != 0) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            unk_a8 = 2;
            result = TRUE;
        }
    }
    return result;
}

namespace nZ {
extern "C" {
void *data_020d7674[2] = {(void *)_ZN12Unk_02017d7410setupAct0DEP16Unk_02017d74_Ctx, 0};
}
}

BOOL Unk_02014420::taskGiveItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d7584, *(Unk_02014420_Fn *)data_020d75b4};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestTakeItem(u16 *a, u32 b, u32 c, u32 d) {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 4)) {
        unk_7a = *a;
        unk_7c = b;
        unk_90 = c;
        unk_94 = d;
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::takeItemStart() {
    using namespace nF;
    if (unk_48 != NULL) {
        if (unk_3c != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
        }
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 8 && !_ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            vfunc_38(0);
        } else if (unk_3c != NULL) {
            if (_ZN13NpcActionCtrl15requestTakeItemEiPtjhjj((u8 *)unk_48 + 0x564, 4, &unk_7a, unk_7c, unk_90, unk_94, unk_44)) {
                nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
                unk_a8 = 1;
            }
        }
    }
    return 0;
}

BOOL Unk_02014420::takeItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0xe && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            if (unk_90 != 4) {
                nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            }
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7604[2] = {(void *)_ZN12Unk_02016a4410setupAct13EP12Unk_02006d14, 0};
void *data_020d721c[2] = {(void *)_ZN12Unk_02016a4411act0EStep07EP12Unk_02006d14, 0};
const u16 data_020c6d48[4] = {0xe2, 0x0, 0xe0, 0x0};
void *data_020d720c[2] = {(void *)_ZN12Unk_020d771015taskCloseWindowEv, 0};
void *data_020d7204[2] = {(void *)_ZN12Unk_0201216416isInAttr200BlockEP16Unk_02011f74_Vec, 0};
void *data_020d71fc[2] = {(void *)_ZN13NpcActionCtrl10setupAct00EPh, 0};
const u16 data_020c6d0c[2] = {0x5f, 0x19};
void *data_020d71ec[2] = {(void *)VillagerRoute_PickAttr200Target, 0};
void *data_020d71e4[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d71dc[2] = {(void *)VillagerRoute_PickOwnHouseBlock, 0};
void *data_020d71d4[2] = {(void *)_ZN12Unk_0201442013keepItemStartEv, 0};
void *data_020d71cc[2] = {(void *)_ZN12Unk_0201442012keepItemWaitEv, 0};
}
}

BOOL Unk_02014420::taskTakeItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d7664, *(Unk_02014420_Fn *)data_020d75d4};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestItemAct0F() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 5)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::itemAct0FStart() {
    using namespace nF;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)unk_48 + 0x564, 0xf, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::itemAct0FWait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0xf && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7094[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d71ac[2] = {(void *)_ZN12Unk_0201442014returnItemWaitEv, 0};
void *data_020d71a4[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d74ec[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
const u16 data_020c6cdc[2] = {0x4c, 0x0};
void *data_020d718c[2] = {(void *)_ZN12Unk_0201216410isAtDoorT1EP16Unk_02011f74_Vec, 0};
}
}

BOOL Unk_02014420::taskItemAct0F() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d759c, *(Unk_02014420_Fn *)data_020d758c};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestKeepItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 6)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::keepItemStart() {
    using namespace nF;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)unk_48 + 0x564, 0x10, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::keepItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0x10 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d70dc[2] = {(void *)VillagerRoute_PickCoastBlock, 0};
void *data_020d7174[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
void *data_020d716c[2] = {(void *)_ZN12Unk_0201442011melodyStartEv, 0};
void *data_020d7164[2] = {(void *)_ZN12Unk_0201442010melodyWaitEv, 0};
void *data_020d70ec[2] = {(void *)_ZN12Unk_0201442012eatItemStartEv, 0};
void *data_020d7154[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
}
}

BOOL Unk_02014420::taskKeepItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d71d4, *(Unk_02014420_Fn *)data_020d71cc};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestReturnItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 7)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::returnItemStart() {
    using namespace nF;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)unk_48 + 0x564, 0x11, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            nF::_ZN16ActorTalkRequest17setItemActionBusyEv(this);
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::returnItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0x11 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d711c[2] = {(void *)_ZN12Unk_02017d7410act0DStep4EP16Unk_02017d74_Ctx, 0};
void *data_020d7424[2] = {(void *)_ZN12Unk_02016a4411act0EStep01EP12Unk_02006d14, 0};
const u16 data_020c6cf8[2] = {0x5d, 0x0};
}
}

BOOL Unk_02014420::taskReturnItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70b4, *(Unk_02014420_Fn *)data_020d71ac};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestItemAct12() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 8)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::itemAct12Start() {
    using namespace nF;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)unk_48 + 0x564, 0x12, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::itemAct12Wait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0x12 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
const u16 data_020c6ccc[2] = {0x4d, 0x0};
void *data_020d724c[2] = {(void *)_ZN12Unk_020121649isInBlockEP16Unk_02011f74_Vec, 0};
void *data_020d7254[2] = {(void *)_ZN12Unk_0201347410mainState1EP19Unk_020133cc_Player, 0};
void *data_020d725c[2] = {(void *)_ZN11NpcTalkCtrl11setupState2EP16Unk_02013b10_Ctx, 0};
void *data_020d727c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d7284[2] = {(void *)VillagerRoute_PickRandomBlock, 0};
const u16 data_020c6d18[2] = {0x44, 0x0};
}
}

BOOL Unk_02014420::taskItemAct12() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70cc, *(Unk_02014420_Fn *)data_020d7194};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestEatItem() {
    using namespace nF;
    BOOL r = 0;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 9)) {
        r = 1;
    }
    return r;
}

BOOL Unk_02014420::eatItemStart() {
    using namespace nF;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl13requestActionEjiiissiitt((u8 *)unk_48 + 0x564, 0x13, 4, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
            unk_a8 = 1;
        }
    }
    return 0;
}

BOOL Unk_02014420::eatItemWait() {
    using namespace nF;
    BOOL r = 0;
    if (unk_48 != NULL && unk_3c != NULL) {
        if (_ZN13NpcActionCtrl9getActionEv((u8 *)unk_48 + 0x564) == 0x13 && _ZN13NpcActionCtrl12isActionDoneEv((u8 *)unk_48 + 0x564)) {
            _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
            nF::_ZN16ActorTalkRequest19clearItemActionBusyEv(this);
            unk_a8 = 2;
            r = 1;
        }
    }
    return r;
}

namespace nZ {
extern "C" {
void *data_020d7354[2] = {(void *)_ZN12Unk_02016a4410act12Step0Ev, 0};
void *data_020d72cc[2] = {(void *)_ZN9NpcLookAt18lookAtTargetPlayerEP18Unk_0201a334_Scene, 0};
void *data_020d72dc[2] = {(void *)_ZN12Unk_0201a13c20approachManualAnglesEv, 0};
void *data_020d72fc[2] = {(void *)_ZN12Unk_0201a13c11lookAtPointEP16Unk_0201a25c_Src, 0};
void *data_020d7304[2] = {(void *)_ZN12Unk_0201869810setupAct03EP16Unk_02018698_Ctx, 0};
}
}

BOOL Unk_02014420::taskEatItem() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d70ec, *(Unk_02014420_Fn *)data_020d717c};
    BOOL r = 0;
    if (unk_a8 < 2) {
        r = (this->*tbl[unk_a8])();
    }
    return r;
}

BOOL Unk_02014420::requestPlayMelody(Unk_02014420_Vec2 *p) {
    using namespace nF;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 10)) {
        *(long long *)&unk_88 = *(long long *)p;
        unk_a1 = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02014420::requestPlayRandomMelody() {
    using namespace nF;
    if (nF::_ZN12Unk_020d77109startTaskEi(this, 10)) {
        unk_a1 = 1;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02014420::melodyStart() {
    using namespace nF;
    u32 v;
    void *tbl = gMelodyEditPattern;
    if (unk_48 != NULL) {
        v = unk_48->vfunc_84();
    } else {
        v = 0;
    }
    if (v != 0xffff) {
        if (unk_3c != NULL) {
            _ZN15TalkWindowState11lockAdvanceEv(unk_3c);
        }
        if (unk_a1 == 0) {
            Melody_Unpack(&unk_88, tbl);
            Melody_PlayEditPattern((u16)v);
        } else {
            Melody_PlayRandom((u16)v);
        }
        unk_a8 = 1;
        return 0;
    }
    unk_a8 = 3;
    return 1;
}

BOOL Unk_02014420::melodyWait() {
    using namespace nF;
    if (data_020ddf8c != -1) {
        unk_a8 = 2;
    }
    return 0;
}

BOOL Unk_02014420::melodyEnd() {
    using namespace nF;
    if (data_020ddf8c != -1) {
        return 0;
    }
    if (unk_3c != NULL) {
        _ZN15TalkWindowState13unlockAdvanceEv(unk_3c);
    }
    unk_a8 = 3;
    return 1;
}

namespace nZ {
extern "C" {
const u16 data_020c6d20[2] = {0xf, 0x0};
void *data_020d744c[2] = {(void *)_ZN12Unk_02017d7410act0DStep2EP16Unk_02017d74_Ctx, 0};
void *data_020d747c[2] = {(void *)_ZN12Unk_0201442012taskKeepItemEv, 0};
void *data_020d7484[2] = {(void *)_ZN12Unk_02017d7410act0AStep0EP16Unk_02017d74_Ctx, 0};
void *data_020d74bc[2] = {(void *)_ZN12Unk_0201347411state1Step1EP19Unk_020133cc_Player, 0};
void *data_020d74dc[2] = {(void *)_ZN12Unk_0201347411state1Step2EP19Unk_020133cc_Player, 0};
void *data_020d757c[2] = {(void *)_ZN12Unk_02016a4410setupAct11EP12Unk_02006d14, 0};
void *data_020d75dc[2] = {(void *)_ZN12Unk_02016a449mainAct13EP12Unk_02006d14, 0};
void *data_020d760c[2] = {(void *)_ZN12Unk_02016a449mainAct12EP12Unk_02006d14, 0};
const u16 data_020c6ce8[2] = {0x43, 0x0};
void *data_020d7654[2] = {(void *)_ZN12Unk_02016a449mainAct0EEP12Unk_02006d14, 0};
void *data_020d767c[2] = {(void *)_ZN12Unk_02017d749postAct0CEP16Unk_02017d74_Ctx, 0};
const u16 sNpcTalkMouthAnims[4] = {0x137, 0x0, 0x138, 0x0};
const u16 data_020c6cfc[2] = {0x4e, 0x0};
const u16 data_020c6d58[4] = {0x55, 0x0, 0x56, 0x0};
const u16 data_020c6d60[4] = {0xe3, 0x0, 0xe1, 0x0};
const u16 data_020c6ce4[2] = {0x47, 0x6};
void *data_020d707c[2] = {(void *)_ZN12Unk_020121649isInBlockEP16Unk_02011f74_Vec, 0};
void *data_020d71c4[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d709c[2] = {(void *)_ZN13NpcActionCtrl9mainAct01EPh, 0};
void *data_020d70b4[2] = {(void *)_ZN12Unk_0201442015returnItemStartEv, 0};
void *data_020d719c[2] = {(void *)_ZN12Unk_02016a4411act0EStep05EP12Unk_02006d14, 0};
}
}

BOOL Unk_02014420::taskMelody() {
    using namespace nF;
    static Unk_02014420_Fn tbl[] = {*(Unk_02014420_Fn *)data_020d716c, *(Unk_02014420_Fn *)data_020d7164, *(Unk_02014420_Fn *)data_020d715c};
    if (unk_a8 < 3) {
        return (this->*tbl[unk_a8])();
    }
    return 0;
}

BOOL Unk_02014258::requestSwitchSpeaker(u8 v) {
    using namespace nE;
    if (_ZN12Unk_020d77109startTaskEi(this, 0xb)) {
        unk_a0 = v;
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02014258::switchSpeakerClose() {
    using namespace nE;
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0) {
        q->unk_14 = 2;
        if (unk_a0 != 0) unk_a8 = 1;
        else unk_a8 = 2;
    }
    return FALSE;
}

BOOL Unk_02014258::switchSpeakerFocus() {
    using namespace nE;
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0 && q->unk_04 == 5) {
        Unk_02013b10_Ctx *e = _ZN16ActorTalkRequest9getActorBEj(this, (unk_51 + 1) & 1);
        if (e != 0) {
            Unk_02013b10_Vec v;
            Unk_02013b10_Vec *pv = &e->unk_5c;
            v.x = pv->x;
            v.y = pv->y;
            v.z = pv->z;
            v.y += 0x2000;
            Camera_RetargetFocus(&v);
        }
        unk_a8 = 2;
    }
    return FALSE;
}

BOOL Unk_02014258::switchSpeakerSwap() {
    using namespace nE;
    Unk_02013b10_Sub *q = unk_3c;
    if (q != 0 && q->unk_04 == 5) {
        if (Camera_IsBlending() == 0 || Camera_GetBlendFramesLeft() < 0x11) {
            Unk_02013b10_Ctx *e = _ZN16ActorTalkRequest9getActorBEj(this, unk_51);
            if (e) _ZN14NpcSpeechState12stopSpeakingEv((u8 *)e + 0x418);
            unk_51 = (unk_51 + 1) & 1;
            Unk_02013b10_Ctx *n = _ZN16ActorTalkRequest9getActorBEj(this, unk_51);
            if (n != 0) {
                Unk_020140d0_X x;
                n->vfunc_74(&x);
                _ZN14TalkMsgRequest17changeSpeakerNameEP9MsgStringj(this, &x, _ZN8NpcActor16getSpeakerGenderEv(n));
                unk_3c->unk_08 = 1;
                unk_a8 = 3;
                return TRUE;
            }
        }
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void *data_020d70e4[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
}
}

BOOL Unk_02014258::taskSwitchSpeaker() {
    using namespace nE;
    static BOOL (Unk_02014258::*tbl[3])() = {*(BOOL (Unk_02014258::**)())data_020d7434, *(BOOL (Unk_02014258::**)())data_020d7134, *(BOOL (Unk_02014258::**)())data_020d7144};
    if (unk_a8 < 3) return (this->*tbl[unk_a8])();
    return FALSE;
}

namespace nE {
extern "C" void _ZN12Unk_02014254C1Ev(void) {}
}

namespace nE {
extern "C" void NpcTalkCtrl_Destroy(void) {}
}

void NpcTalkCtrl::reset() {
    using namespace nE;
    unk_08 = 5;
    unk_09 = 5;
    unk_0a = 0;
    unk_04 = 0;
    unk_06 = 0;
    unk_0b = 0;
    unk_00 = 5;
    unk_0d = 1;
    unk_0c = 0;
    unk_0e = 0;
}

BOOL NpcTalkCtrl::isBusy() {
    using namespace nE;
    if (unk_09 < 5 || unk_08 < 5) return TRUE;
    return FALSE;
}

void NpcTalkCtrl::updateSpeakerMouth(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && o->unk_3c != 0) {
        u8 *e = _ZN16ActorTalkRequest15getSpeakerActorEv(o);
        if (e != 0) {
            if (_ZN15TalkWindowState14isVoicePlayingEv(o->unk_3c)) _ZN14NpcSpeechState13startSpeakingEv(e + 0x418);
            else _ZN14NpcSpeechState12stopSpeakingEv(e + 0x418);
        }
    }
}

BOOL NpcTalkCtrl::requestTurnAndTalk(s16 d, s16 e, u8 g) {
    using namespace nE;
    return request(0, 0, d, e, 1, g);
}

BOOL NpcTalkCtrl::requestTalk(u8 f, u8 g) {
    using namespace nE;
    return request(1, 0, 0, 0, f, g);
}

BOOL NpcTalkCtrl::requestState4(u32 c, s32 d, s16 e, u8 g) {
    using namespace nE;
    return request(4, c, d, e, 1, g);
}

BOOL NpcTalkCtrl::request(u8 b, u32 c, s16 d, s16 e, u8 f, u8 g) {
    using namespace nE;
    BOOL r = FALSE;
    if (unk_09 == 5) {
        unk_09 = b;
        unk_04 = d;
        unk_06 = e;
        unk_00 = c;
        unk_0d = f;
        unk_0c = g;
        r = TRUE;
    }
    return r;
}

void NpcTalkCtrl::startTalkMessage(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0) {
        Unk_020140d0_Out out;
        Unk_020140d0_X x;
        ctx->vfunc_74(&x);
        Unk_020140d0_X *px = &x;
        s32 r = px->vfunc_0c();
        _ZN14TalkMsgRequest14setSpeakerNameEPhj(o, r, _ZN8NpcActor16getSpeakerGenderEv(ctx));
        _ZN9Character17attachTalkRequestEi(ctx, o);
        o->vfunc_78(&out.a);
        _ZN10MsgRequest11setFileNameEPKc(o, out.a);
        o->unk_1e = out.b;
        o->unk_3c->unk_08 = 1;
    }
}

void NpcTalkCtrl::applyRequest(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    u8 b = unk_09;
    if (b < 5 && unk_08 == 5) {
        unk_08 = b;
        unk_0a = 0;
        unk_0e = 0;
        (this->*sNpcTalkCtrlStates[unk_08].a)(ctx);
        unk_09 = 5;
    }
}

void NpcTalkCtrl::update(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    applyRequest(ctx);
    if (unk_08 < 5) (this->*sNpcTalkCtrlStates[unk_08].b)(ctx);
}

void NpcTalkCtrl::endTalk(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0) _ZN16ActorTalkRequest15getPartnerActorEv(o)->vfunc_90();
    if (unk_0c == 0) Camera_SetModeDefault();
    if (unk_0b == 1) ctx->unk_4e8 &= ~2;
    PlayerActor_SetHeadTilt(0, 0, 4);
}

void NpcTalkCtrl::setupState0(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    volatile Unk_02013b10_Vec v;
    Unk_02013b10_Vec w;
    Unk_02013b10_Vec *pv = &ctx->unk_5c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(ctx->unk_564, 3, 2, 0, 0, unk_04, unk_06, 0, 0, data_020c6cc8, 0);
    if (unk_0c == 0) {
        Unk_02013b10_Obj *o = ctx->unk_634;
        if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0) {
            Unk_02013b10_Vec *pw = &_ZN16ActorTalkRequest15getPartnerActorEv(o)->unk_5c;
            w.x = pw->x;
            w.y = pw->y;
            w.z = pw->z;
            v.y += 0x2000;
            w.y += 0x2000;
            Camera_FocusOnPair((Unk_02013b10_Vec *)&v, &w);
        } else {
            v.y += 0x2000;
            Camera_FocusOnPoint((Unk_02013b10_Vec *)&v);
        }
    }
    if (!(ctx->unk_4e8 & 2)) unk_0b = 1;
    ctx->unk_4e8 |= 2;
    if (ctx->vfunc_7c()) {
        if (ctx->vfunc_84() != 0xffff) Melody_Play();
        ctx->vfunc_80();
    }
    unk_0a = 0;
}

void NpcTalkCtrl::state0Step0(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    if (unk_06 == ctx->unk_8e) {
        if (_ZN13NpcActionCtrl9getActionEv(ctx->unk_564) == 3) {
            if (_ZN13NpcActionCtrl12isActionDoneEv(ctx->unk_564)) {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(ctx->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                startTalkMessage(ctx);
                unk_0a = 1;
            }
        }
    }
}

void NpcTalkCtrl::state0Step1(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    Unk_02013b10_Obj *o = ctx->unk_634;
    s32 a, b;
    if (o != 0 && o->unk_3c != 0) {
        if (o->unk_3c->unk_04 == 0) {
            o->vfunc_7c();
            _ZN9Character17detachTalkRequestEi(ctx, o);
            u8 *e = _ZN16ActorTalkRequest15getSpeakerActorEv(o);
            if (e) _ZN14NpcSpeechState12stopSpeakingEv(e + 0x418);
            a = 0;
            if (_ZN16ActorTalkRequest15getPartnerActorEv(o) != 0 && _ZN13NpcActionCtrl9getActionEv(_ZN16ActorTalkRequest15getPartnerActorEv(o)->unk_564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(_ZN16ActorTalkRequest15getPartnerActorEv(o)->unk_564) == 0) a = 1;
            b = 0;
            if (_ZN13NpcActionCtrl9getActionEv(ctx->unk_564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(ctx->unk_564) == 0) b = 1;
            if (a != 0 || b != 0) {
                if (b != 0) _ZN16ActorTalkRequest11playEmotionEjj(o, 0, 0);
                if (a != 0) _ZN16ActorTalkRequest11playEmotionEjj(o, 0, 1);
                unk_0a = 2;
            } else {
                endTalk(ctx);
                unk_0a = 3;
                unk_08 = 5;
            }
        } else {
            _ZN16ActorTalkRequest4tickEv(o);
            updateSpeakerMouth(ctx);
        }
    }
}

void NpcTalkCtrl::state0Step2(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    Unk_02013b10_Obj *o = ctx->unk_634;
    if (o != 0 && _ZN16ActorTalkRequest15getPartnerActorEv(o) != 0 && _ZN13NpcActionCtrl9getActionEv(_ZN16ActorTalkRequest15getPartnerActorEv(o)->unk_564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(_ZN16ActorTalkRequest15getPartnerActorEv(o)->unk_564) == 0) return;
    if (_ZN13NpcActionCtrl9getActionEv(ctx->unk_564) == 8 && _ZN13NpcActionCtrl12isActionDoneEv(ctx->unk_564) == 0) return;
    endTalk(ctx);
    unk_0a = 3;
    unk_08 = 5;
}

namespace nZ {
extern "C" {
const u16 data_020c6cf4[2] = {0x4f, 0x0};
void *data_020d7134[2] = {(void *)_ZN12Unk_0201425818switchSpeakerFocusEv, 0};
void *data_020d7144[2] = {(void *)_ZN12Unk_0201425817switchSpeakerSwapEv, 0};
const u16 data_020c6d34[2] = {0x58, 0x6};
void *data_020d7264[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d728c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d729c[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
Unk_0201a1e0_Fn sNpcLookAtTypes[6] = {
    *(Unk_0201a1e0_Fn *)data_020d710c,
    *(Unk_0201a1e0_Fn *)data_020d733c,
    *(Unk_0201a1e0_Fn *)data_020d76b4,
    *(Unk_0201a1e0_Fn *)data_020d72fc,
    *(Unk_0201a1e0_Fn *)data_020d72cc,
    *(Unk_0201a1e0_Fn *)data_020d72dc,
};
void *data_020d72e4[2] = {(void *)_ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec, 0};
}
}

void NpcTalkCtrl::mainState0(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    static void (NpcTalkCtrl::*tbl[3])(Unk_02013b10_Ctx *) = {*(void (NpcTalkCtrl::**)(Unk_02013b10_Ctx *))data_020d72a4, *(void (NpcTalkCtrl::**)(Unk_02013b10_Ctx *))data_020d743c, *(void (NpcTalkCtrl::**)(Unk_02013b10_Ctx *))data_020d731c};
    if (unk_0a < 3) (this->*tbl[unk_0a])(ctx);
}

void NpcTalkCtrl::setupState2(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    volatile Unk_02013b10_Vec v;
    Unk_02013b10_Vec *pv = &ctx->unk_5c;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(ctx->unk_564, 3, 2, 0, 0, unk_04, unk_06, 0, 0, data_020c6cc8, 0);
    if (!(ctx->unk_4e8 & 2)) unk_0b = 1;
    ctx->unk_4e8 |= 2;
    if (ctx->vfunc_7c()) {
        if (ctx->vfunc_84() != 0xffff) Melody_Play();
        ctx->vfunc_80();
    }
    unk_0a = 0;
}

void NpcTalkCtrl::state2Step0(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    if (_ZN13NpcActionCtrl9getActionEv(ctx->unk_564) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(ctx->unk_564)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(ctx->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN13NpcActionCtrl16requestTalkingOnEv(ctx->unk_564);
            unk_0a = 1;
        }
    }
}

void NpcTalkCtrl::state2Step1(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    if (unk_0e) {
        _ZN13NpcActionCtrl17requestTalkingOffEv(ctx->unk_564);
        unk_0a = 2;
        unk_08 = 5;
    }
}

void NpcTalkCtrl::mainState2(Unk_02013b10_Ctx *ctx) {
    using namespace nE;
    static void (NpcTalkCtrl::*tbl[2])(Unk_02013b10_Ctx *) = {*(void (NpcTalkCtrl::**)(Unk_02013b10_Ctx *))data_020d7344, *(void (NpcTalkCtrl::**)(Unk_02013b10_Ctx *))data_020d738c};
    if (unk_0a < 2) (this->*tbl[unk_0a])(ctx);
}

void Unk_02013474::setupState1(Unk_020133cc_Player* p) {
    using namespace nD;
    Unk_020133cc_Vec pos;
    Unk_020133cc_Vec* pv = &p->unk_5c;
    pos = *pv;
    if (unk_0d != 0) {
        nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    unk_0a = 0;
    if (unk_0c == 0) {
        Unk_020133cc_Player* r6 = p->unk_634;
        if (r6 != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6) != NULL) {
            Unk_020133cc_Vec w;
            w = nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->unk_5c;
            pos.y += 0x2000;
            w.y += 0x2000;
            Camera_FocusOnPair(&pos, &w);
        } else {
            pos.y += 0x2000;
            Camera_FocusOnPoint(&pos);
        }
    }
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    if (p->vfunc_7c()) {
        if (p->vfunc_84() != 0xffff) {
            Melody_Play();
        }
        p->vfunc_80();
    }
}

void Unk_02013474::state1Step0(Unk_020133cc_Player* p) {
    using namespace nD;
    nD::_ZN11NpcTalkCtrl16startTalkMessageEP16Unk_02013b10_Ctx(this);
    unk_0a = 1;
}

void Unk_02013474::state1Step1(Unk_020133cc_Player* p) {
    using namespace nD;
    Unk_020133cc_Player* r4 = p->unk_634;
    if (r4 != NULL) {
        if (r4->unk_3c != NULL) {
            if (r4->unk_3c->unk_04 == 0) {
                r4->vfunc_7c();
                nD::_ZN9Character17detachTalkRequestEi(p, r4);
                Unk_020133cc_Player* t = nD::_ZN16ActorTalkRequest15getSpeakerActorEv(r4);
                if (t != NULL) {
                    nD::_ZN14NpcSpeechState12stopSpeakingEv(&t->unk_418);
                }
                BOOL a = FALSE;
                if (nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4) != NULL && nD::_ZN13NpcActionCtrl9getActionEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4)->unk_564) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r4)->unk_564) == 0) {
                    a = TRUE;
                }
                BOOL b = FALSE;
                if (nD::_ZN13NpcActionCtrl9getActionEv(&p->unk_564) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->unk_564) == 0) {
                    b = TRUE;
                }
                if (a || b) {
                    if (b) nD::_ZN16ActorTalkRequest11playEmotionEjj(r4, 0, 0);
                    if (a) nD::_ZN16ActorTalkRequest11playEmotionEjj(r4, 0, 1);
                    unk_0a = 2;
                } else {
                    nD::_ZN11NpcTalkCtrl7endTalkEP16Unk_02013b10_Ctx(this, p);
                    unk_0a = 1;
                    unk_08 = 5;
                }
            } else {
                nD::_ZN16ActorTalkRequest4tickEv(r4);
                nD::_ZN11NpcTalkCtrl18updateSpeakerMouthEP16Unk_02013b10_Ctx(this, p);
            }
        }
    }
}

void Unk_02013474::state1Step2(Unk_020133cc_Player* p) {
    using namespace nD;
    Unk_020133cc_Player* r6 = p->unk_634;
    if (r6 != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6) != NULL && nD::_ZN13NpcActionCtrl9getActionEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->unk_564) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&nD::_ZN16ActorTalkRequest15getPartnerActorEv(r6)->unk_564) == 0) {
        return;
    }
    if (nD::_ZN13NpcActionCtrl9getActionEv(&p->unk_564) == 8 && nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->unk_564) == 0) {
        return;
    }
    nD::_ZN11NpcTalkCtrl7endTalkEP16Unk_02013b10_Ctx(this, p);
    unk_0a = 1;
    unk_08 = 5;
}

namespace nZ {
extern "C" {
void *data_020d751c[2] = {(void *)_ZN12Unk_02017d749mainAct0BEP16Unk_02017d74_Ctx, 0};
}
}

void Unk_02013474::mainState1(Unk_020133cc_Player* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[3] = {*(Unk_02013474_Fn *)data_020d749c, *(Unk_02013474_Fn *)data_020d74bc, *(Unk_02013474_Fn *)data_020d74dc};
    if (unk_0a < 3) {
        (this->*tbl[unk_0a])(p);
    }
}

void Unk_02013474::setupState3(Unk_020133cc_Player* p) {
    using namespace nD;
    Unk_02013778_Vec pos;
    Unk_020133cc_Vec* pv = &p->unk_5c;
    *(Unk_020133cc_Vec*)&pos = *pv;
    if (unk_0d != 0) {
        nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->unk_564, 0, 2, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    nD::_ZN13NpcActionCtrl16requestTalkingOnEv(&p->unk_564);
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    if (p->vfunc_7c()) {
        if (p->vfunc_84() != 0xffff) {
            Melody_Play();
        }
        p->vfunc_80();
    }
    unk_0a = 0;
}

void Unk_02013474::mainState3(Unk_020133cc_Player* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[1] = {*(Unk_02013474_Fn *)data_020d7534};
    if (unk_0a < 1) {
        (this->*tbl[unk_0a])(p);
    }
}

void Unk_020136c0::setupState4(Unk_020133cc_Player* p) {
    using namespace nD;
    nD::_ZN13NpcActionCtrl12requestAct07Eiiiit(&p->unk_564, 2, unk_04, unk_06, unk_00, data_020c6cc8);
    if (!(p->unk_4e8 & 2)) {
        unk_0b = 1;
    }
    p->unk_4e8 |= 2;
    unk_0a = 0;
}

void Unk_02013474::state4Step0(Unk_020133cc_Player* p) {
    using namespace nD;
    if (nD::_ZN13NpcActionCtrl9getActionEv(&p->unk_564) == 7) {
        if (nD::_ZN13NpcActionCtrl12isActionDoneEv(&p->unk_564) != 0) {
            nD::_ZN13NpcActionCtrl13requestActionEjiiissiitt(&p->unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            if (unk_0b == 1) {
                p->unk_4e8 &= ~2;
            }
            unk_0a = 1;
            unk_08 = 5;
        }
    }
}

namespace nZ {
extern "C" {
const u16 sNpcGiveItemAnims[4] = {0x22, 0x0, 0x2b, 0x0};
void *data_020d7074[2] = {(void *)_ZN13NpcActionCtrl9mainAct00Ev, 0};
void *data_020d70a4[2] = {(void *)_ZN13NpcActionCtrl10setupAct02EPh, 0};
void *data_020d70c4[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
Unk_02019858_Entry sNpcActionTable[22] = {
    *(Unk_02019858_FnA *)data_020d71fc, *(Unk_02019858_FnB *)data_020d7074, 0,
    *(Unk_02019858_FnA *)data_020d7084, *(Unk_02019858_FnB *)data_020d709c, 0,
    *(Unk_02019858_FnA *)data_020d70a4, *(Unk_02019858_FnB *)data_020d7464, 0,
    *(Unk_02019858_FnA *)data_020d7304, *(Unk_02019858_FnB *)data_020d730c, 0,
    *(Unk_02019858_FnA *)data_020d7314, *(Unk_02019858_FnB *)data_020d76d4, 0,
    *(Unk_02019858_FnA *)data_020d7214, *(Unk_02019858_FnB *)data_020d7704, 0,
    *(Unk_02019858_FnA *)data_020d76fc, *(Unk_02019858_FnB *)data_020d76f4, 0,
    *(Unk_02019858_FnA *)data_020d76ec, *(Unk_02019858_FnB *)data_020d76e4, *(Unk_02019858_FnC *)data_020d76dc,
    *(Unk_02019858_FnA *)data_020d74cc, *(Unk_02019858_FnB *)data_020d76cc, 0,
    *(Unk_02019858_FnA *)data_020d76c4, *(Unk_02019858_FnB *)data_020d76bc, 0,
    *(Unk_02019858_FnA *)data_020d74fc, *(Unk_02019858_FnB *)data_020d76ac, *(Unk_02019858_FnC *)data_020d76a4,
    *(Unk_02019858_FnA *)data_020d7514, *(Unk_02019858_FnB *)data_020d751c, *(Unk_02019858_FnC *)data_020d768c,
    *(Unk_02019858_FnA *)data_020d7684, 0, *(Unk_02019858_FnC *)data_020d767c,
    *(Unk_02019858_FnA *)data_020d7674, *(Unk_02019858_FnB *)data_020d766c, *(Unk_02019858_FnC *)data_020d7544,
    *(Unk_02019858_FnA *)data_020d765c, *(Unk_02019858_FnB *)data_020d7654, *(Unk_02019858_FnC *)data_020d764c,
    *(Unk_02019858_FnA *)data_020d7644, 0, *(Unk_02019858_FnC *)data_020d763c,
    *(Unk_02019858_FnA *)data_020d756c, 0, *(Unk_02019858_FnC *)data_020d762c,
    *(Unk_02019858_FnA *)data_020d757c, *(Unk_02019858_FnB *)data_020d761c, 0,
    *(Unk_02019858_FnA *)data_020d7614, *(Unk_02019858_FnB *)data_020d760c, 0,
    *(Unk_02019858_FnA *)data_020d7604, *(Unk_02019858_FnB *)data_020d75dc, *(Unk_02019858_FnC *)data_020d75e4,
    *(Unk_02019858_FnA *)data_020d75f4, 0, *(Unk_02019858_FnC *)data_020d75fc,
    *(Unk_02019858_FnA *)data_020d7624, *(Unk_02019858_FnB *)data_020d7634, 0,
};
void *data_020d70f4[2] = {(void *)VillagerRoute_PickOtherHouseDoor, 0};
void *data_020d70fc[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d712c[2] = {(void *)_ZN12Unk_0201216413stepAlongPathEP16Unk_02011f74_Vec, 0};
void *data_020d726c[2] = {(void *)_ZN11NpcTalkCtrl10mainState2EP16Unk_02013b10_Ctx, 0};
void *data_020d72a4[2] = {(void *)_ZN11NpcTalkCtrl11state0Step0EP16Unk_02013b10_Ctx, 0};
Unk_02014040_Ent sNpcTalkCtrlStates[5] = {
    *(Unk_02014040_Fn *)data_020d7224, *(Unk_02014040_Fn *)data_020d7234,
    *(Unk_02014040_Fn *)data_020d723c, *(Unk_02014040_Fn *)data_020d7254,
    *(Unk_02014040_Fn *)data_020d725c, *(Unk_02014040_Fn *)data_020d726c,
    *(Unk_02014040_Fn *)data_020d7274, *(Unk_02014040_Fn *)data_020d7294,
    *(Unk_02014040_Fn *)data_020d7364, *(Unk_02014040_Fn *)data_020d72ac,
};
const Unk_020c6e60_E sEmotionTable[60] = {
    {0x0, 0, 0xffff0100, 0x137, 0, 0xffff0100, 0x0},
    {0x45, data_020c6d34, 0x60101, 0x46, 0, 0xffff0000, 0x1},
    {0x47, data_020c6ce8, 0x101, 0x48, 0, 0xffff0000, 0x1},
    {0x49, data_020c6d18, 0x101, 0x4a, 0, 0xffff0000, 0x101},
    {0x4b, data_020c6d38, 0x20101, 0x4c, 0, 0xffff0000, 0x1},
    {0x4d, 0, 0xffff0100, 0x4e, data_020c6d08, 0x30101, 0x1},
    {0x4f, data_020c6cdc, 0x101, 0x50, 0, 0xffff0000, 0x101},
    {0x51, data_020c6d14, 0x101, 0x52, 0, 0xffff0000, 0x101},
    {0x53, data_020c6d3c, 0x50101, 0x54, 0, 0xffff0000, 0x101},
    {0x55, data_020c6cec, 0x101, 0x56, 0, 0xffff0000, 0x1},
    {0x57, data_020c6d28, 0x101, 0x58, 0, 0xffff0000, 0x101},
    {0x59, data_020c6cd8, 0x101, 0x5a, 0, 0xffff0000, 0x1},
    {0x5b, data_020c6d24, 0x90101, 0x5c, 0, 0xffff0000, 0x1},
    {0x5d, data_020c6d2c, 0x101, 0x5e, 0, 0xffff0000, 0x1},
    {0x5f, data_020c6d58, 0x102, 0x60, 0, 0xffff0000, 0x1},
    {0x61, data_020c6d10, 0x101, 0x62, 0, 0xffff0000, 0x1},
    {0x63, data_020c6cf8, 0x101, 0x64, 0, 0xffff0000, 0x1},
    {0x65, data_020c6ce4, 0x60101, 0x66, 0, 0xffff0000, 0x1},
    {0x67, data_020c6d70, 0x102, 0x68, data_020c6ce0, 0xffff0001, 0x1},
    {0x69, data_020c6cd0, 0x101, 0x6a, 0, 0xffff0000, 0x1},
    {0x6b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6c, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6d, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x6e, data_020c6cfc, 0x101, 0x6f, 0, 0xffff0000, 0x101},
    {0x70, data_020c6d50, 0x30102, 0x71, 0, 0xffff0000, 0x1},
    {0x72, data_020c6d30, 0x101, 0x73, 0, 0xffff0100, 0x1},
    {0x74, data_020c6d04, 0x101, 0x137, 0, 0xffff0000, 0x0},
    {0x75, data_020c6d30, 0x101, 0x76, 0, 0xffff0100, 0x1},
    {0x77, data_020c6d0c, 0x101, 0x78, 0, 0xffff0000, 0x1},
    {0x79, data_020c6cf4, 0x101, 0x7a, 0, 0xffff0000, 0x1},
    {0x7b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x1},
    {0x7c, data_020c6d30, 0x101, 0x7d, 0, 0xffff0100, 0x1},
    {0x7e, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x1},
    {0x7f, data_020c6cd4, 0x120101, 0x80, 0, 0x100, 0x1},
    {0x81, data_020c6d30, 0x101, 0x82, 0, 0x100, 0x1},
    {0x83, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x0},
    {0x84, data_020c6d38, 0x20101, 0x85, 0, 0xffff0000, 0x1},
    {0x86, data_020c6cd8, 0x101, 0x87, 0, 0xffff0000, 0x1},
    {0x88, data_020c6d30, 0x101, 0x89, 0, 0xffff0000, 0x101},
    {0x8a, data_020c6d00, 0x101, 0x8b, 0, 0xffff0000, 0x1},
    {0x8c, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x1},
    {0x9c, 0, 0x100, 0x9d, data_020c6d08, 0x30101, 0x1},
    {0x9e, data_020c6d30, 0x101, 0x137, 0, 0x100, 0x0},
    {0x9f, data_020c6cec, 0x101, 0xa0, 0, 0xffff0000, 0x1},
    {0xa1, data_020c6cf4, 0x101, 0xa2, 0, 0xffff0000, 0x1},
    {0xa3, data_020c6d30, 0x101, 0xa4, 0, 0x100, 0x1},
    {0xa5, data_020c6d30, 0x101, 0xa6, 0, 0x100, 0x1},
    {0xa7, data_020c6d30, 0x101, 0xa8, 0, 0x100, 0x1},
    {0x8d, data_020c6d30, 0x101, 0x8e, 0, 0x100, 0x1},
    {0x8f, data_020c6d30, 0x101, 0x90, 0, 0xffff0000, 0x1},
    {0x91, data_020c6d30, 0x101, 0x92, 0, 0xffff0000, 0x101},
    {0x93, data_020c6d30, 0x101, 0x94, 0, 0xffff0100, 0x1},
    {0x95, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x96, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0x97, data_020c6d30, 0x101, 0x98, 0, 0xffff0000, 0x101},
    {0x99, data_020c6d30, 0x101, 0x9a, 0, 0xffff0100, 0x1},
    {0x9b, data_020c6d30, 0x101, 0x137, 0, 0xffff0100, 0x0},
    {0xa9, data_020c6d38, 0x20101, 0xaa, 0, 0xffff0000, 0x1},
    {0xab, data_020c6d30, 0x101, 0xac, 0, 0xffff0000, 0x101},
    {0x4f, data_020c6ccc, 0x101, 0x50, 0, 0xffff0000, 0x101},
};
const u16 data_020c6cc4[2] = {0x200, 0x0};
void *data_020d7524[2] = {(void *)_ZN12Unk_020d771012subSceneOpenEv, 0};
void *data_020d763c[2] = {(void *)_ZN12Unk_02016a449postAct0FEP12Unk_02006d14, 0};
const u16 data_020c6d50[4] = {0x51, 0x6, 0x52, 0x3};
void *data_020d708c[2] = {(void *)_ZN12Unk_0201869810act07Step0EP16Unk_02018698_Ctx, 0};
}
}

void Unk_02013474::mainState4(Unk_020133cc_Player* p) {
    using namespace nD;
    static Unk_02013474_Fn tbl[1] = {*(Unk_02013474_Fn *)data_020d7594};
    if (unk_0a < 3) {
        (this->*tbl[unk_0a])(p);
    }
}

Unk_020135e4::Unk_020135e4() {
    using namespace nD;
    unk_00 = 0;
}

void Unk_02013474::func_020135e0() {
    using namespace nD;
}

void Unk_02013474::resetFootsteps() {
    using namespace nD;
    disableFootsteps();
    unk_04 = 5;
}

void Unk_02013474::enableFootsteps() {
    using namespace nD;
    unk_00 = 1;
}

void Unk_02013474::disableFootsteps() {
    using namespace nD;
    unk_00 = 0;
}

void Unk_02013474::playFootstepSe(Unk_020133cc_Player* p) {
    using namespace nD;
    u32 f = p->unk_b0;
    if (!(Unk_02013568_IsSet(f, 4) && Unk_02013568_IsSet(f, 2))) {
        if (unk_00 != 0) {
            nD::Snd_SeEmitterPlayAlternate(&p->unk_514, nD::Footstep_GetSeAtPos(&p->unk_5c), 0);
        }
    }
}

void Unk_02013474::updateFootsteps(Unk_020133cc_Player* p) {
    using namespace nD;
    s32 st = nD::_ZN11NpcMoveCtrl11getMoveModeEv(&p->unk_350);
    if (unk_00 != 0 && (u32)(st - 1) <= 2) {
        Unk_02013474_Half h;
        h.a = p->unk_8e;
        if (unk_04 == 0) {
            Effect_Create(0x28, &p->unk_490, &h, 0);
            Effect_Create(0x28, &p->unk_484, &h, 0);
        } else {
            BOOL r4 = nD::_ZN13AnimFrameCtrl14hasPassedFrameEi(&p->unk_188, 1);
            BOOL r0 = nD::_ZN13AnimFrameCtrl14hasPassedFrameEi(&p->unk_188, 9);
            if (r4 != 0 || r0 != 0) {
                Unk_020133cc_Vec v;
                v.x = (r4 ? &p->unk_490 : &p->unk_484)->x;
                v.y = (r4 ? &p->unk_490 : &p->unk_484)->y;
                v.z = (r4 ? &p->unk_490 : &p->unk_484)->z;
                h.b = p->unk_8e + 0x8000;
                v.y = p->unk_5c.y;
                if (st == 2) Effect_Create(0, &v, &h.b, 0);
                Effect_Create(0x28, &v, &h, 0);
                playFootstepSe(p);
            }
        }
    }
    unk_04 = st;
}

void Unk_020133cc_Player::resetLastTaughtEmotion() {
    using namespace nD;
    unk_63e = -1;
}

void Unk_020133cc_Player::setLastTaughtEmotion(s16 v) {
    using namespace nD;
    unk_63e = v;
}

s16 Unk_020133cc_Player::getLastTaughtEmotion() {
    using namespace nD;
    return unk_63e;
}

s32 Unk_020133cc_Player::getNewEmotionToLearn() {
    using namespace nD;
    s32 result = -1;
    if (nD::_ZN11NpcTalkCtrl6isBusyEv(&unk_618)) {
        if (nD::_ZN13NpcActionCtrl9getActionEv(&unk_564) == 8) {
            if (nD::_ZN8NpcActor14getTalkRequestEv(this) != NULL && nD::_ZN16ActorTalkRequest15getPartnerActorEv(nD::_ZN8NpcActor14getTalkRequestEv(this)) == NULL) {
                s32 v = nD::_ZN13NpcActionCtrl12getEmotionIdEv(&unk_564);
                if (v > 0 && v < 0x3c && v != getLastTaughtEmotion()) {
                    if (Emotion_FindSlot((u8)v) == -1) {
                        result = v;
                        setLastTaughtEmotion((u8)v);
                    }
                }
            }
        }
    }
    return result;
}

s32 NpcActor::getTeachableEmotion() {
    using namespace nD;
    return -1;
}

VillagerRoute* VillagerRoute::resetTarget() {
    using namespace nD;
    unk_0c.x = 0;
    unk_0c.y = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0;
    unk_20 = 0;
    unk_94 = 0;
    unk_98 = 0;
    return this;
}

namespace nD {
extern "C" void func_020133a4() {
}
}

void VillagerRoute::reset() {
    using namespace nD;
    MI_CpuFill8(this, 0, 0x9c);
    unk_00 = 2;
    unk_08 = 7;
    unk_24 = -1;
    unk_26 = -1;
    unk_8c = 2;
    unk_90 = 4;
}

void VillagerRoute::start(u32 a, u32 idx, u32 b, u32 c) {
    using namespace nD;
    if (idx < 7) {
        reset();
        unk_08 = idx;
        unk_00 = b;
        unk_28 = &sVillagerRouteTypes[unk_08];
        if (unk_28->unk_08) {
            unk_0c = (this->*(unk_28->unk_08))(a, c);
            s32 y = unk_0c.y;
            unk_14 = unk_0c.x >> 4;
            unk_18 = y >> 4;
            nD::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, a);
        }
    }
}

void VillagerRoute::rememberUnit(u32 v) {
    using namespace nD;
    FieldPos_ToUnit(&unk_94, &unk_98, v);
}

void VillagerRoute::markUnitUnset() {
    using namespace nD;
    if (unk_94 == 0 && unk_98 == 0) {
        unk_94 = 0xff;
        unk_98 = 0xff;
    }
}

void VillagerRoute::checkUnitChanged(u32 v) {
    using namespace nD;
    u32 a = 0;
    u32 b = 0;
    FieldPos_ToUnit(&a, &b, v);
    if (unk_94 != 0 && unk_98 != 0 && (unk_94 != a || unk_98 != b)) {
        unk_04 = 3;
        nD::_ZN12Unk_0201281014clearJunctionsEv(this);
        unk_88 = 0;
        unk_8c = 2;
        nD::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, v);
        unk_90 = 4;
    }
}

void VillagerRoute::setStepMode(u32 v) {
    using namespace nD;
    unk_00 = v;
}

BOOL VillagerRoute::isActive() {
    using namespace nD;
    if (unk_08 < 7) return TRUE;
    return FALSE;
}

namespace nD {
extern "C" BOOL _ZN12Unk_0201281011scanForPathEP16Unk_02012810_VecP17Unk_02012b94_PairP16Unk_020130f0_DiriS3_iP16Unk_02012f04_Obj(void* unused, void* p1, u32* pos, u32* step, s32 n, u32* bound, s32 flag, void* q) {
    s32 i;
    u32 x = pos[0];
    u32 y = pos[1];
    s32 cnt = 0;
    s32 zero = 0;
    for (i = 0; i < n; i++) {
        x += step[0];
        y += step[1];
        if (x >= bound[0] || y >= bound[1]) continue;
        if (flag != 0) {
            GroundInfo o(x, y, zero, zero);
            if (o.unk_30 != 0) cnt++; else cnt = zero;
            if (cnt >= 4) break;
        }
        if (_ZN8BlockMap12getWalkLinksEii(q, x, y)) {
            FieldPos_FromUnitCenter(p1, x, y);
            return TRUE;
        }
    }
    return FALSE;
}
}

u32 Unk_02012810::pickAdjacentUnit(Unk_02012810_Vec *v, Unk_02012f04_Obj *o) {
    using namespace nC;
    u8 mask = 0;
    Unk_02012b94_Pair a, c, out;
    s32 n, i;
    u32 dir;
    a.x = 0;
    a.z = 0;
    c.x = 0;
    c.z = 0;
    out.x = 0;
    out.z = 0;
    n = 0;
    FieldPos_ToBlockUnit2(&a, &c, v);
    for (i = 0; i < 4; i++) {
        u32 x = c.x + ((Unk_020130f0_Dir *)sRouteDirs)[i].x;
        u32 z = c.z + ((Unk_020130f0_Dir *)sRouteDirs)[i].z;
        if (x < 16 && z < 16) {
            FieldUnit_FromBlockUnit(&out.x, &out.z, a.x, a.z, x, z);
            if (TownMap_IsUnitWalkable(out.x, out.z, o) != 0) {
                mask = mask | (1 << i);
                n++;
            }
        }
    }
    dir = Random_PickSetBit(mask, n, 4);
    if (dir < 4) {
        s32 off = dir * 8;
        FieldPos_FromBlockUnitCenter(v, a.x, a.z, c.x + *(s32 *)((u8 *)sRouteDirs + off), c.z + *(s32 *)((u8 *)(sRouteDirs + 1) + off));
        return dir;
    }
    return 4;
}

u32 Unk_02012810::findNearestPath(Unk_02012b94_Pair *out, Unk_02012810_Vec *pos) {
    using namespace nC;
    Unk_02012810_Vec best;
    Unk_02012810_Vec cand[4];
    u8 mask;
    Unk_02012f04_Obj *o;
    Unk_02012b94_Pair p, q;
    s32 dir;
    s32 x0, z0, x1, z1, flag, off, bestd;
    o = gSceneBlockMap;
    best.x = pos->x;
    best.y = pos->y;
    best.z = pos->z;
    mask = 0;
    p.x = 0;
    p.z = 0;
    q.x = 0;
    q.z = 0;
    dir = 4;
    if (o == 0) {
        return 4;
    }
    FieldPos_ToUnit(&p.x, &p.z, pos);
    Unk_02012b94_Pair *pq = &o->unk_0c;
    q.x = pq->x;
    q.z = pq->z;
    if (_ZN8BlockMap17getWalkLinksAtPosEPv(o, pos) != 0) {
        return 4;
    }
    for (s32 i = 0; i < 4; i++) {
        cand[i].x = pos->x;
        cand[i].y = pos->y;
        cand[i].z = pos->z;
    }
    FieldPos_ToUnit(&p.x, &p.z, pos);
    flag = (BlockMap_GetBlockAttr(o, pos->x >> 17, pos->z >> 17) & 0x7f000) != 0 ? 1 : 0;
    x0 = p.x & 0xfff0;
    z0 = p.z & 0xfff0;
    x1 = x0 + 16;
    z1 = z0 + 16;
    if (scanForPath(&cand[0], &p, ((Unk_020130f0_Dir *)sRouteDirs), p.z - z0, &q, flag, o)) {
        mask |= 1;
    }
    if (scanForPath(&cand[2], &p, &nC2::sRouteDirs[2], z1 - p.z, &q, flag, o)) {
        mask |= 4;
    }
    if (scanForPath(&cand[1], &p, &nC2::sRouteDirs[1], p.x - x0, &q, flag, o)) {
        mask |= 2;
    }
    if (scanForPath(&cand[3], &p, &nC2::sRouteDirs[3], x1 - p.x, &q, flag, o)) {
        mask |= 8;
    }
    if (mask != 0) {
        bestd = -4096;
        for (s32 i = 0; i < 4; i++) {
            s32 d;
            Unk_02012810_Vec *pc = cand;
            d = func_020e9650(pos, &pc[i]);
            if (((mask >> i) & 1) != 0) {
                if (bestd < 0 || d < bestd) {
                    best = pc[i];
                    bestd = d;
                    dir = i;
                }
            }
        }
    } else {
        u32 r = pickAdjacentUnit(&best, o);
        if (r < 4) {
            dir = r;
        }
    }
    FieldPos_ToUnit(&out->x, &out->z, &best);

    return dir;
}

s32 Unk_02012810::isArrived(Unk_02012810_Vec *v) {
    using namespace nC;
    Unk_02012810_Tbl *t = unk_28;
    if (t != 0) {
        if (t->unk_00 != 0) {
            return (this->*(t->unk_00))(v);
        }
    }
    return 0;
}

s32 Unk_02012810::firstDir(s32 v) {
    using namespace nC;
    if (v != 0) {
        for (s32 i = 0; i < 4; i++) {
            if (((v >> i) & 1) != 0) {
                return i;
            }
        }
    }
    return 4;
}

s32 Unk_02012810::scanDir(Unk_02012b94_Pair *out, Unk_02012e08_Pos pos, u32 mask, Unk_02012b94_Pair *lim, Unk_02012f04_Obj *obj) {
    using namespace nC;
    s32 m, dx, dz;
    s32 d = firstDir(mask);
    if (d < 4) {
        dx = sRouteDirs[d * 2];
        dz = (sRouteDirs + 1)[d * 2];
        m = ~(mask | oppositeDirs(mask));
        s32 cnt = 0;
        while (pos.x < lim->x && pos.z < lim->z) {
            pos.x += dx;
            pos.z += dz;
            cnt++;
            s32 r = _ZN8BlockMap12getWalkLinksEii(obj, pos.x, pos.z);
            if (r == 0) {
                u32 z = pos.z - dz;
                out->x = pos.x - dx;
                out->z = z;
                return -(cnt - 1);
            }
            if ((r & m) != 0) {
                out->x = pos.x;
                out->z = pos.z;
                return cnt;
            }
        }
    }
    return 0;
}

void Unk_02012810::clearJunctions() {
    using namespace nC;
    MI_CpuFill8(unk_2c, 0, 90);
}

s32 Unk_02012810::countJunctions() {
    using namespace nC;
    u8 *e = unk_2c;
    for (s32 i = 0; i < 29; e += 3, i++) {
        if (((u32)(e[2] << 24) >> 28) == 0) {
            return i;
        }
    }
    return 29;
}

void Unk_02012810::pushJunction(u32 hi, u32 lo, Unk_02012b94_Pair *p) {
    using namespace nC;
    s32 n = countJunctions();
    u8 *e = unk_2c + n * 3;
    for (; n > 0; n--) {
        MI_CpuCopy8(e - 3, e, 3);
        e -= 3;
    }
    e[2] = (e[2] & ~0xf0) | (((u8)(hi & 0xf) & 0xf) << 4);
    e[2] = (e[2] & ~0xf) | ((u8)(lo & 0xf) & 0xf);
    e[0] = p->x;
    e[1] = p->z;
}

s32 Unk_02012810::findJunction(Unk_02012b94_Pair *p) {
    using namespace nC;
    u8 *e = unk_2c;
    for (s32 i = 0; i < 30; e += 3, i++) {
        if (p->x == e[0] && p->z == e[1]) {
            return i;
        }
    }
    return -1;
}

Unk_02012cbc_Ent Unk_02012810::popJunction(Unk_02012b94_Pair *p) {
    using namespace nC;
    s32 idx = findJunction(p);
    Unk_02012cbc_Ent out;
    MI_CpuFill8(&out, 0, 3);
    if (idx != -1) {
        u8 *a = unk_2c;
        u8 *b = a + idx * 3;
        MI_CpuCopy8(b, &out, 3);
        b += 3;
        for (s32 i = idx; i < 29; i++) {
            MI_CpuCopy8(b, a, 3);
            b += 3;
            a += 3;
        }
        MI_CpuFill8(unk_2c + (29 - idx) * 3, 0, (idx + 1) * 3);
    }
    return out;
}

u32 Unk_02012810::getStage() {
    using namespace nC;
    return unk_08;
}

s32 Unk_02012810::runStep(Unk_02012810_Vec *v) {
    using namespace nC;
    Unk_02012810_Tbl *t = unk_28;
    if (t != 0 && unk_00 < 2 && unk_04 < 3) {
        Unk_02012810_Fn *pf = &t->tbl[unk_00][unk_04];
        if (*pf != 0) {
            s32 r = (this->*(*pf))(v);
            if (unk_00 == 1) {
                nC::_ZN13VillagerRoute12rememberUnitEj(this, v);
            }
            return r;
        }
    }
    return 0;
}

namespace nC {
extern "C" void VillagerRoute_PickPathUnitInBlock(Unk_02012b94_Pair *out, s32 unused, Unk_02012b94_Pair *p, Unk_02012f04_Obj *obj) {
    u32 bx = 0, bz = 0;
    u16 mask[16];
    s32 cnt = 0;
    s32 z, x;
    MI_CpuFill8(mask, 0, 32);
    FieldUnit_FromBlockUnit(&bx, &bz, p->x, p->z, 0, 0);
    for (z = 0; z < 16; z++) {
        for (x = 0; x < 16; x++) {
            if (_ZN8BlockMap12getWalkLinksEii(obj, bx + x, bz + z) != 0) {
                mask[z] |= 1 << x;
                cnt++;
            }
        }
    }
    if (cnt > 0) {
        s32 k = Random_GlobalBelow(cnt);
        u16 *row;
        s32 xx, zz;
        for (zz = 0; zz < 16; zz++) {
            for (xx = 0, row = &mask[zz]; xx < 16; xx++) {
                if (((*row >> xx) & 1) != 0) {
                    if (k == 0) {
                        out->x = 0;
                        out->z = 0;
                        out->x = bx + xx;
                        out->z = bz + zz;
                        return;
                    }
                    k--;
                }
            }
        }
    }
    out->x = 0;
    out->z = 0;
}
}

s32 Unk_02012810::oppositeDirs(s32 v) {
    using namespace nC;
    if (v != 0) {
        v = v << 2;
        if ((v & 0xf) == 0) {
            v = (v >> 4) & 0xf;
        }
        return v;
    }
    return 0;
}

void Unk_02012810::planStep(Unk_02012810_Vec *pos) {
    using namespace nC;
    Unk_02012f04_Obj *o = gSceneBlockMap;
    s32 dirs, found;
    s32 lo2, present, dirs2, cand, bestd, i, hi, lo, w, bx, bz;
    Unk_02012b94_Pair q, p, r;
    Unk_02012810_Vec uv, tv;

    if (o == 0) {
        return;
    }
    present = _ZN8BlockMap17getWalkLinksAtPosEPv(o, pos);
    if (present == 0) {
        unk_90 = findNearestPath(&unk_1c, pos);
        unk_04 = 0;
        clearJunctions();
        unk_88 = 0;
        unk_8c = 2;
        return;
    }
    dirs2 = dirs = oppositeDirs(unk_88);
    Unk_02012b94_Pair *pq = &o->unk_0c;
    q.x = pq->x;
    q.z = pq->z;
    bx = 0;
    p.x = 0;
    p.z = 0;
    bz = 0;
    found = 0;
    r.x = 0;
    r.z = 0;
    bestd = -4096;
    FieldPos_ToUnit(&p.x, &p.z, pos);
    if ((present & ~dirs) == 0) {
        if (scanDir(&r, p, dirs, &q, o)) {
            unk_1c.x = r.x;
            unk_1c.z = r.z;
            unk_8c = 1;
            unk_88 = dirs;
        }
    } else if (unk_8c != 1) {
        hi = found;
        lo = unk_88;
        if (findJunction(&p) != -1) {
            Unk_02012cbc_Ent e1 = popJunction(&p);
            hi = e1.f.hi;
            lo = e1.f.lo;
            dirs2 = dirs2 | hi;
        }
        FieldPos_FromUnitCenter(&tv, unk_0c, unk_10);
        for (i = 0; i < 4; i++) {
            if (((dirs2 >> i) & 1) == 0) {
                cand = present & (1 << i);
                if (cand != 0) {
                    if (scanDir(&r, p, cand, &q, o)) {
                        s32 d;
                        FieldPos_FromUnitCenter(&uv, r.x, r.z);
                        d = func_020e9650(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (unk_8c == 0) {
                pushJunction(hi | found, lo, &p);
            }
            unk_1c.x = bx;
            unk_1c.z = bz;
            unk_8c = 0;
            unk_88 = found;
        } else {
                if (scanDir(&r, p, dirs, &q, o)) {
                unk_1c.x = r.x;
                unk_1c.z = r.z;
                unk_8c = 1;
                unk_88 = dirs;
            }
        }
        unk_04 = 1;
    } else if (unk_8c == 1) {
        s32 cand2, j;
        Unk_02012cbc_Ent e2 = popJunction(&p);
        lo2 = e2.f.lo;
        w = oppositeDirs(lo2);
        FieldPos_FromUnitCenter(&tv, unk_0c, unk_10);
        dirs = dirs | w;
        for (j = 0; j < 4; j++) {
            if (((dirs >> j) & 1) == 0) {
                cand2 = present & (1 << j);
                if (cand2 != 0) {
                    if (scanDir(&r, p, cand2, &q, o)) {
                        s32 d;
                        FieldPos_FromUnitCenter(&uv, r.x, r.z);
                        d = func_020e9650(&tv, &uv);
                        if (bestd < 0 || d < bestd) {
                            bx = r.x;
                            bz = r.z;
                            bestd = d;
                            found = cand2;
                        }
                    }
                }
            }
        }
        if (found != 0) {
            if (lo2 == 0) {
                lo2 = unk_88;
            }
            unk_1c.x = bx;
            unk_1c.z = bz;
            pushJunction(e2.f.hi | found, lo2, &p);
            unk_8c = 0;
            unk_88 = found;
        } else {
                if (scanDir(&r, p, w, &q, o)) {
                unk_1c.x = r.x;
                unk_1c.z = r.z;
                unk_8c = 1;
                unk_88 = w;
            }
        }
        unk_04 = 1;
    }
    unk_90 = 4;
}

BOOL Unk_02012164::followPathDir(Unk_02011f74_Vec *p, Unk_02011f74_Pair *lim, Unk_02011f74_World *w) {
    using namespace nB;
    nB::_ZN13VillagerRoute16checkUnitChangedEj(this);
    if ((u32)unk_90 < 4) {
        Unk_02011f74_Pair *tbl = (Unk_02011f74_Pair *)sRouteDirs;
        Unk_02011f74_Pair *e = &tbl[unk_90];
        s32 dx = tbl[unk_90].a;
        s32 dz = e->b;
        u32 a = 0;
        u32 b = 0;
        FieldPos_ToUnit((s32 *)&a, (s32 *)&b, p);
        for (; a < (u32)lim->a && b < (u32)lim->b;) {
            a += dx;
            b += dz;
            BOOL eq = FALSE;
            if (unk_1c == a && unk_20 == b) eq = TRUE;
            if (eq || _ZN8BlockMap12getWalkLinksEii(w, a, b)) {
                FieldPos_FromUnitCenter(p, a, b);
                nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
                break;
            }
            if (TownMap_IsUnitWalkable(a, b, w)) {
                FieldPos_FromUnitCenter(p, a, b);
                break;
            }
        }
    } else {
        nB::_ZN12Unk_0201281014clearJunctionsEv(this);
        unk_88 = 0;
        unk_8c = 2;
        nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
    }
    return FALSE;
}

BOOL Unk_02012164::stepFollowPath(Unk_02011f74_Vec *p) {
    using namespace nB;
    Unk_02011f74_World *world = gSceneBlockMap;
    if (world) {
        Unk_02011f74_Pair lim;
        Unk_02011f74_Pair *sz = &world->unk_0c;
        lim = *sz;
        followPathDir(p, &lim, world);
        if (nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
            unk_04 = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::advanceOnPath(Unk_02011f74_Vec *p, Unk_02011f74_World *w) {
    using namespace nB;
    nB::_ZN13VillagerRoute16checkUnitChangedEj(this);
    s32 flag = unk_88;
    if (flag != 0) {
        s32 k = nB::_ZN12Unk_020128108firstDirEi(this, flag);
        s32 a = 0;
        s32 b = 0;
        FieldPos_ToUnit(&a, &b, p);
        a += sRouteDirs[k * 2];
        b += (sRouteDirs + 1)[k * 2];
        if (!_ZN8BlockMap12getWalkLinksEii(w, a, b)) {
            FieldPos_FromUnitCenter(p, a, b);
            nB::_ZN12Unk_0201281014clearJunctionsEv(this);
            unk_88 = 0;
            unk_8c = 2;
            nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
            unk_90 = 4;
            return FALSE;
        }
        FieldPos_FromUnitCenter(p, a, b);
        if (a == unk_1c && b == unk_20) {
            nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
        }
        return FALSE;
    }
    nB::_ZN12Unk_0201281014clearJunctionsEv(this);
    unk_88 = 0;
    unk_8c = 2;
    nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
    return FALSE;
}

BOOL Unk_02012164::stepAlongPath(Unk_02011f74_Vec *p) {
    using namespace nB;
    Unk_02011f74_World *world = gSceneBlockMap;
    if (world) {
        advanceOnPath(p, world);
        if (nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
            unk_04 = 2;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::pickAdjacent(Unk_02011f74_Vec *p, Unk_02011f74_World *w) {
    using namespace nB;
    nB::_ZN12Unk_0201281016pickAdjacentUnitEP16Unk_02012810_VecP16Unk_02012f04_Obj(this);
    return FALSE;
}

BOOL Unk_02012164::stepAdjacentUnit(Unk_02011f74_Vec *p) {
    using namespace nB;
    Unk_02011f74_World *world = gSceneBlockMap;
    if (world) {
        pickAdjacent(p, world);
        if (!nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
            nB::_ZN12Unk_0201281014clearJunctionsEv(this);
            unk_88 = 0;
            unk_8c = 2;
            nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_02012164::stepWander(Unk_02011f74_Vec *p) {
    using namespace nB;
    u16 mag = 0x7fff;
    s32 mode = Random_GlobalBelow(4);
    s32 base;
    volatile s32 i;
    volatile s32 len;
    volatile s32 zero0;
    volatile s32 zero1;
    Unk_02011f74_Vec tmp;
    FieldPos_FromUnitCenter(&tmp, unk_0c.a, unk_0c.b);
    if (mode == 0) {
        base = Math_AngleXZ(p, &tmp);
        mag = 0x1000;
    } else if (mode == 1) {
        base = (s16)Random_Next(gRandom);
    } else {
        base = (s16)Random_Next(gRandom);
        mag >>= 1;
    }
    i = 0;
    zero0 = 0;
    zero1 = 0;
    for (; i < 10; i++) {
        len = (Random_GlobalBelow(5) + 3) << 13;
        s32 r6 = (s16)Random_GlobalBelow(mag);
        if (Random_GlobalBelow(2)) {
            r6 = (s16)(r6 * ~zero1);
        }
        r6 = ((u16)(s16)(r6 + base) >> 4) << 1;
        tmp.x = p->x + func_01ffcb0c(len, data_02135f44[r6]);
        tmp.z = p->z + func_01ffcb0c(len, data_02135f44[r6 + 1]);
        FieldPos_SnapToUnitCenter(&tmp, &tmp);
        if (TownMap_IsPosWalkable(&tmp, zero0)) {
            p->x = tmp.x;
            p->z = tmp.z;
            break;
        }
        if ((i & 1) && mag != 0xffff) {
            mag = (u16)(mag + 0x1000);
        }
    }
    nB::_ZN13VillagerRoute13markUnitUnsetEv(this);
    if (nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
        unk_04 = 2;
        return TRUE;
    }
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickAttr200Target(Unk_02011f74_Pair *out, void *self) {
    Unk_02011f74_World *world = gSceneBlockMap;
    out->a = 0;
    out->b = 0;
    if (world && BlockMap_FindBlockAllAttr(world, 0x200)) {
        Unk_02011f74_Pair t;
        VillagerRoute_PickPathUnitInBlock(&t, self, _ZN12MapBlockAcre8getUnk04Ev(), world);
        *out = t;
    }
}
}

BOOL Unk_02012164::isInAttr200Block(Unk_02011f74_Vec *v) {
    using namespace nB;
    Unk_02011f74_World *world = gSceneBlockMap;
    BOOL r = FALSE;
    if (world != NULL) {
        s32 x = v->x >> 17;
        s32 z = v->z >> 17;
        BOOL c = BlockMap_BlockHasAllAttr(world, x, z, 0x200);
        if (c) {
            r = TRUE;
        }
    }
    return r;
}

namespace nB {
extern "C" void VillagerRoute_PickOtherHouseDoor(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj) {
    out->a = 0;
    out->b = 0;
    if (obj->vfunc_64()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = _ZN12VillagerData13getVillagerIdEv(obj->vfunc_64());
        if (SaveVillagers_PickRandomExcept(gSaveVillagers, &key, 1)) {
            u8 *p = _ZN20VillagerDataItemView11getHousePosEv();
            s32 z = p[1] + 1;
            out->a = p[0];
            out->b = z;
        }
    }
}
}

BOOL Unk_02012164::isAtDoorT1(Unk_02011f74_Vec *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == unk_0c.a && b == unk_0c.b) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::stepCheckArrived(Unk_02011f74_Vec *p) {
    using namespace nB;
    if (!nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
        nB::_ZN12Unk_0201281014clearJunctionsEv(this);
        unk_88 = 0;
        unk_8c = 2;
        nB::_ZN12Unk_020128108planStepEP16Unk_02012810_Vec(this, p);
        return FALSE;
    }
    return TRUE;
}

namespace nB {
extern "C" void VillagerRoute_PickOtherHouseBlock(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj) {
    Unk_02011f74_World *world = gSceneBlockMap;
    out->a = 0;
    out->b = 0;
    if (world && obj->vfunc_64()) {
        s32 key;
        func_02133ef8(&key, 4);
        key = _ZN12VillagerData13getVillagerIdEv(obj->vfunc_64());
        if (SaveVillagers_PickRandomExcept(gSaveVillagers, &key, 1)) {
            u8 *p = _ZN20VillagerDataItemView11getHousePosEv();
            Unk_02011f74_Pair pos;
            pos.a = 0;
            pos.b = 0;
            s32 y = p[1];
            pos.a = p[0] >> 4;
            pos.b = y >> 4;
            Unk_02011f74_Pair t;
            VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
            *out = t;
        }
    }
}
}

BOOL Unk_02012164::isInBlockT2(Unk_02011f74_Vec *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickOwnHouseDoor(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj) {
    out->a = 0;
    out->b = 0;
    if (obj->vfunc_64()) {
        u8 *p = _ZN20VillagerDataItemView11getHousePosEv(obj->vfunc_64());
        s32 z = p[1] + 1;
        out->a = p[0];
        out->b = z;
    }
}
}

BOOL Unk_02012164::isAtDoorT3(Unk_02011f74_Vec *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == unk_0c.a && b == unk_0c.b) return TRUE;
    return FALSE;
}

BOOL Unk_02012164::stepToDoor(Unk_02011f74_Vec *p) {
    using namespace nB;
    s32 a = 0;
    s32 b = 0;
    FieldPos_ToUnit(&a, &b, p);
    if (a == unk_0c.a && b >= unk_0c.b && b <= unk_0c.b + 1) {
        FieldPos_FromUnitCenter(p, ((volatile Unk_02011f74_Pair &)unk_0c).a, ((volatile Unk_02011f74_Pair &)unk_0c).b);
    } else if (a >= unk_0c.a - 3 && a <= unk_0c.a + 4 && b >= unk_0c.b && b <= unk_0c.b + 5) {
        a = unk_0c.a;
        b = unk_0c.b + Random_GlobalBelow(2);
        FieldPos_FromUnitCenter(p, a, b);
    } else {
        stepWander(p);
    }
    nB::_ZN13VillagerRoute13markUnitUnsetEv(this);
    if (nB::_ZN12Unk_020128109isArrivedEP16Unk_02012810_Vec(this, p)) {
        unk_04 = 2;
        return TRUE;
    }
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickOwnHouseBlock(Unk_02011f74_Pair *out, void *self, u32 unused, Unk_02011f74_Obj *obj) {
    Unk_02011f74_World *world = gSceneBlockMap;
    out->a = 0;
    out->b = 0;
    if (world && obj->vfunc_64()) {
        u8 *p = _ZN20VillagerDataItemView11getHousePosEv(obj->vfunc_64());
        Unk_02011f74_Pair pos;
        pos.a = 0;
        pos.b = 0;
        s32 y = p[1];
        pos.a = p[0] >> 4;
        pos.b = y >> 4;
        Unk_02011f74_Pair t;
        VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
        *out = t;
    }
}
}

BOOL Unk_02012164::isInBlockT4(Unk_02011f74_Vec *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickRandomBlock(Unk_02011f74_Pair *out, void *self) {
    Unk_02011f74_World *world = gSceneBlockMap;
    Unk_02011f74_Pair pos;
    out->a = 0;
    out->b = 0;
    if (world) {
        Unk_02011f74_Pair *size = &world->size;
        Unk_02011f74_Pair szcopy;
        szcopy = *size;
        s32 w = szcopy.a;
        s32 h = size->b;
        pos.a = 0;
        pos.b = 0;
        if (w >= 3) {
            pos.a = Random_GlobalBelow(w - 2) + 1;
        }
        if (h >= 3) {
            pos.b = Random_GlobalBelow(h - 2) + 1;
            Unk_02011f74_Pair t;
            VillagerRoute_PickPathUnitInBlock(&t, self, &pos, world);
            *out = t;
        }
    }
}
}

BOOL Unk_02012164::isInBlock(Unk_02011f74_Vec *v) {
    using namespace nB;
    s32 z = v->z >> 17;
    s32 x = v->x >> 17;
    if (x == unk_14 && z == unk_18) return TRUE;
    return FALSE;
}

namespace nB {
extern "C" void VillagerRoute_PickCoastBlock(Unk_02011f74_Pair *out, void *self, Unk_02011f74_Vec *v) {
    Unk_02011f74_World *world = gSceneBlockMap;
    u8 mask = 0;
    out->a = 0;
    out->b = 0;
    if (world) {
        Unk_02011f74_Pair *size = &world->size;
        Unk_02011f74_Pair szcopy;
        s32 count;
        s32 total;
        s32 sz;
        szcopy = *size;
        sz = szcopy.a;
        count = 0;
        total = 0;
        if (size->b > 4 && sz <= 8) {
            s32 px = v->x >> 17;
            s32 pz = v->z >> 17;
            s32 i;
            for (i = 1; i < sz - 1; i++) {
                if (i != px || pz != 4) {
                    Unk_02011f74_Cell *c = GetCell(world, i, 4);
                    if (c && MapBlock_HasAnyAttr(c, 8)) {
                        mask |= 1 << (i - 1);
                        count++;
                    }
                }
                total++;
            }
        }
        u32 idx = Random_PickSetBit(mask, count, total);
        if (idx < (u32)total) {
            Unk_02011f74_Cell *c = GetCell(world, idx + 1, 4);
            if (c) {
                Unk_02011f74_Pair t;
                VillagerRoute_PickPathUnitInBlock(&t, self, _ZN12MapBlockAcre8getUnk04Ev(), world);
                *out = t;
            }
        }
    }
}
}

HeldToolModel *HeldToolModel::init() {
    using namespace nB;
    unk_00 = 0xfff1;
    _ZN22NpcHeldItemModelHandleC1Ev(&unk_04);
    unk_00 = 0xfff1;
    return this;
}

HeldToolModel *HeldToolModel::destroy() {
    using namespace nB;
    _ZN22NpcHeldItemModelHandleD1Ev(&unk_04);
    return this;
}

BOOL HeldToolModel::load(u32 a) {
    using namespace nB;
    if (!_ZN12NpcResHandle7acquireEv(&unk_04)) return FALSE;
    if (!_ZN16NpcResHandleView12loadHeldItemEi(&unk_04, a)) return FALSE;
    unk_00 = 0xfff1;
    return TRUE;
}

BOOL HeldToolModel::attach(u32 a, u16 *b, u32 c, u16 d) {
    using namespace nB;
    void *p = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (p) {
        HeldItemModel_SetItem(p, b, 0);
        _ZN11NpcAnimCtrl16playHoldItemPoseEP16Unk_02015fe0_ObjPtPvt((void *)(a + 0x334), a, b, c, d);
        unk_00 = *b;
        return TRUE;
    }
    return FALSE;
}

void HeldToolModel::playAnim(u32 a, u32 b, u32 c) {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) HeldItemModel_PlayAnim(r, a, b, c);
}

void HeldToolModel::playIdleAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) {
        playAnim(0, a, b);
    } else if (Unk_02011c44_InRange(id, 0x1374, 0x1374) || Unk_02011c44_InRange(id, 0x1375, 0x1375)) {
        playAnim(0x13, 0, 0);
    } else if (Unk_02011c44_InRange(id, 0x1380, 0x139f)) {
        playAnim(0x25, 0, 0);
    }
}

void HeldToolModel::playIdleAnim(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) playIdleAnimFor(this, a, b);
}

void HeldToolModel::playWalkAnimFor(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(1, a, b);
}

void HeldToolModel::playWalkAnim(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) playWalkAnimFor(this, a, b);
}

void HeldToolModel::func_02011d6c(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0xf, a, b);
}

void HeldToolModel::func_02011d4c(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) func_02011d6c(this, a, b);
}

void HeldToolModel::func_02011d14(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x10, a, b);
}

void HeldToolModel::func_02011cf4(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) func_02011d14(this, a, b);
}

void HeldToolModel::func_02011cbc(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x11, a, b);
}

void HeldToolModel::func_02011c9c(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) func_02011cbc(this, a, b);
}

void HeldToolModel::func_02011c64(HeldToolModel *p, u32 a, u32 b) {
    using namespace nA;
    u16 id = p->unk_00;
    if (Unk_02011c44_InRange(id, 0x1376, 0x1376) || Unk_02011c44_InRange(id, 0x1377, 0x1377)) playAnim(0x12, a, b);
}

void HeldToolModel::func_02011c44(u32 a, u32 b) {
    using namespace nA;
    if (unk_00 != 0xfff1) func_02011c64(this, a, b);
}

void HeldToolModel::release() {
    using namespace nA; _ZN12NpcResHandle7releaseEv(&unk_04); }

void HeldToolModel::update(Unk_02006d14 *p) {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) {
        u32 v = p->unk_198;
        Unk_0205dfa4_9c &s = *HeldItemModel_GetModel(r);
        s.unk_10 = v;
        HeldItemModel_Update(r);
    }
}

void HeldToolModel::draw(Unk_02006d14 *p) {
    using namespace nA;
    if (unk_3c != 0) {
        Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
        if (p) {
            MsgRequest &s = *p;
            Model_GetJointWorldMtx(&s, unk_0c, 0xe);
        }
        if (r) HeldItemModel_Draw(r, unk_0c);
    }
}

u32 HeldToolModel::getAnimSpeed() {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) return r->unk_04;
    return 0;
}

void HeldToolModel::setAnimSpeed(u32 v) {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) r->unk_04 = v;
}

Unk_0205dfa4 *HeldToolModel::func_02011b7c() {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) return HeldItemModel_GetModel(r);
    return 0;
}

void HeldToolModel::func_02011b60(u32 v) {
    using namespace nA;
    Unk_02081d4c *r = _ZN16NpcResHandleView16getHeldItemModelEv(&unk_04);
    if (r) HeldItemModel_SetAnimSpeed(r, v);
}

inline NpcActor::~NpcActor() {
    using namespace nDtor;
    NpcTalkCtrl_Destroy((u8 *)this + 0x618);
    _ZN13NpcActionCtrl13func_02019854Ev((u8 *)this + 0x564);
    _ZN12Unk_0201347413func_020135e0Ev((u8 *)this + 0x558);
    *(u32 *)((u8 *)this + 0x514) = (u32)data_020d6f54;
    func_020f43c8((u8 *)this + 0x514);
    _ZN19ActorFollowColliderD1Ev((u8 *)this + 0x4cc);
    _ZN14CollisionStateD1Ev((u8 *)this + 0x49c);
    _ZN12Unk_0201a13cD2Ev((u8 *)this + 0x420);
    _ZN14NpcSpeechStateD2Ev((u8 *)this + 0x418);
    _ZN9NpcLookAt16clearTargetActorEv((u8 *)this + 0x3b0);
    _ZN12Unk_0201ac8813func_0201acc8Ev((u8 *)this + 0x350);
    _ZN11NpcAnimCtrlD1Ev((u8 *)this + 0x334);
    _ZN11NpcFaceAnimD2Ev((u8 *)this + 0x2ac);
    _ZN14NpcMoveAnimSet13func_0201ad38Ev((u8 *)this + 0x2a0);
    _ZN19ThreeLayerAnimModelD1Ev((u8 *)this + 0xec);
}

namespace nZ {
extern "C" {
void *data_020d713c[2] = {(void *)_ZN12Unk_0201216416stepAdjacentUnitEP16Unk_02011f74_Vec, 0};
void *data_020d72bc[2] = {(void *)_ZN12Unk_0201216414stepFollowPathEP16Unk_02011f74_Vec, 0};
void *data_020d7314[2] = {(void *)_ZN12Unk_0201869810setupAct04EP16Unk_02018698_Ctx, 0};
void *data_020d75e4[2] = {(void *)_ZN12Unk_02016a449postAct13EP12Unk_02006d14, 0};
Unk_02013260_Fn sVillagerRouteTypes[7][8] = {
    *(Unk_02013260_Fn *)data_020d7204, *(Unk_02013260_Fn *)data_020d71ec, *(Unk_02013260_Fn *)data_020d71e4, *(Unk_02013260_Fn *)data_020d7094, *(Unk_02013260_Fn *)data_020d71c4, *(Unk_02013260_Fn *)data_020d70bc, *(Unk_02013260_Fn *)data_020d71a4, *(Unk_02013260_Fn *)data_020d70d4,
    *(Unk_02013260_Fn *)data_020d718c, *(Unk_02013260_Fn *)data_020d70f4, *(Unk_02013260_Fn *)data_020d748c, *(Unk_02013260_Fn *)data_020d7104, *(Unk_02013260_Fn *)data_020d7114, *(Unk_02013260_Fn *)data_020d7154, *(Unk_02013260_Fn *)data_020d712c, *(Unk_02013260_Fn *)data_020d71b4,
    *(Unk_02013260_Fn *)data_020d722c, *(Unk_02013260_Fn *)data_020d7244, *(Unk_02013260_Fn *)data_020d7264, *(Unk_02013260_Fn *)data_020d727c, *(Unk_02013260_Fn *)data_020d729c, *(Unk_02013260_Fn *)data_020d72bc, *(Unk_02013260_Fn *)data_020d72d4, *(Unk_02013260_Fn *)data_020d72e4,
    *(Unk_02013260_Fn *)data_020d732c, *(Unk_02013260_Fn *)data_020d73f4, *(Unk_02013260_Fn *)data_020d74a4, *(Unk_02013260_Fn *)data_020d74e4, *(Unk_02013260_Fn *)data_020d74f4, *(Unk_02013260_Fn *)data_020d753c, *(Unk_02013260_Fn *)data_020d7574, *(Unk_02013260_Fn *)data_020d75ec,
    *(Unk_02013260_Fn *)data_020d75bc, *(Unk_02013260_Fn *)data_020d71dc, *(Unk_02013260_Fn *)data_020d70ac, *(Unk_02013260_Fn *)data_020d70c4, *(Unk_02013260_Fn *)data_020d70e4, *(Unk_02013260_Fn *)data_020d7174, *(Unk_02013260_Fn *)data_020d7124, *(Unk_02013260_Fn *)data_020d713c,
    *(Unk_02013260_Fn *)data_020d724c, *(Unk_02013260_Fn *)data_020d7284, *(Unk_02013260_Fn *)data_020d72c4, *(Unk_02013260_Fn *)data_020d769c, *(Unk_02013260_Fn *)data_020d740c, *(Unk_02013260_Fn *)data_020d74ec, *(Unk_02013260_Fn *)data_020d7504, *(Unk_02013260_Fn *)data_020d7694,
    *(Unk_02013260_Fn *)data_020d707c, *(Unk_02013260_Fn *)data_020d70dc, *(Unk_02013260_Fn *)data_020d70fc, *(Unk_02013260_Fn *)data_020d71bc, *(Unk_02013260_Fn *)data_020d728c, *(Unk_02013260_Fn *)data_020d7334, *(Unk_02013260_Fn *)data_020d734c, *(Unk_02013260_Fn *)data_020d7554,
};
void *data_020d7184[2] = {(void *)_ZN12Unk_02016a4411act0EStep04EP12Unk_02006d14, 0};
void *data_020d72c4[2] = {(void *)_ZN12Unk_0201216410stepWanderEP16Unk_02011f74_Vec, 0};
void *data_020d74a4[2] = {(void *)_ZN12Unk_0201216410stepToDoorEP16Unk_02011f74_Vec, 0};
Unk_021be028_Dir sRouteDirs[4] = {Unk_021be028_Dir(0, -1), Unk_021be028_Dir(-1, 0), Unk_021be028_Dir(0, 1), Unk_021be028_Dir(1, 0)};
}
}

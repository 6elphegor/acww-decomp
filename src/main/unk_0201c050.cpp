// mwcc-flags: -str reuse
#include "types.h"
#include "net/CommManager.h"
#include "game/Unk_0202368c_Obj.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "npc/Unk_0202d7f4.h"
#include "talk/MsgStringBase.h"
#include "npc/VillagerId.h"
#include "npc/VillagerMood.h"
#include "talk/VillagerTalkRequestItemTopics.h"
#include "game/ReddPassword.h"
#include "item/Letter.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "talk/EncodedStringBase.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "talk/VillagerTalkRequestStartTopics.h"
#include "sys/ProcBase.h"
#include "npc/NpcResHandleView.h"
#include "talk/EncodedString.h"
#include "npc/Unk_02014254.h"
#include "talk/VillagerTalkKaraokeTopics.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ConstellationEncodedString16.h"
#include "talk/VillagerTalkAcornTopics.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/MsgString.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/VillagerTalk.h"
#include "talk/ConstellationMsgString17.h"
#include "talk/MsgString25B.h"
#include "talk/MsgString129.h"
#include "talk/MsgString33B.h"
#include "talk/MsgString17.h"
#include "talk/MsgString9B.h"
#include "snd/SndSeEmitterKind1.h"
#include "actor/NpcActor.h"
#include "actor/VillagerActor.h"
#include "npc/Unk_0202d5e8.h"
#include "talk/VillagerTalkHobbyTopics.h"
#include "talk/VillagerTalkHolidayTopics.h"
#include "talk/VillagerTalkRequestReplyTopics.h"
#include "talk/VillagerTalkTopics.h"


class VillagerTalk;
class VillagerActor;


class VillagerTalk;
struct TalkChoiceTable;
struct CommManager;
struct Unk_0201c050_Parent;
struct Unk_0201c050_Obj;
class VillagerMood;
struct Unk_0201c574_Vec;
struct Unk_020d8938_Fc;
struct MsgString25B;
struct MsgString129;
struct MsgString33B;
class VillagerTalkTopics;
struct Unk_0201d2d0_Out;
struct Unk_0201d2d0_Data;
struct Unk_0201d2d0_Vec;
struct Unk_0201d2d0_Parent;
struct Unk_0201d9e0_Rec;
struct Unk_0201d568_S;
class VillagerTalkHolidayTopics;
struct Unk_0201dc44_Ret;
struct Unk_0201dc44_Snd;
struct Unk_0201dc44_Vec;
struct Unk_0201dca0_Vec;
struct Unk_0201dc44_Ctx;
struct Unk_0201dc44_Id;
struct Unk_0201dc44_Time;
struct Unk_0201dc44_Lim;
struct Unk_0201e110_Buf;
struct Unk_0201e5a4_Owner;
struct Unk_0201e5a4_Msg;
struct Unk_0201e5a4_Ret;
struct Unk_0201e9d0_S;
struct Unk_0201eabc_T;
struct Unk_0201e5a4_Out;
struct Unk_0201e710_Tmp;
struct Unk_020c7758_T;
class VillagerTalkAcornTopics;
struct Unk_0201ef00_Out;
struct Unk_0201eeac_Res;
struct Unk_020c7790;
struct Unk_021ed24c_Prim;
struct Unk_021ed24c;
struct Unk_021ed24c_Outer;
struct Unk_021d7350_View;
struct Unk_0201f170_Rec;
class Unk_020d7710;
class VillagerTalkHobbyTopics;
class VillagerTalkKaraokeTopics;
struct Unk_0201f7d0_Out;
struct Unk_0201f7d0_Data;
struct Unk_0201f7d0_Parent;
struct Unk_0201f7d0_S;
struct Unk_0201fb54_Date;
struct Unk_0201d568_SV;
struct Unk_02020cc4_Bits;
struct Unk_02020cc4_Time;
class EncodedStringBase;
class MsgStringBase;
class EncodedString;
class MsgString;
class ConstellationEncodedString16;
class ConstellationMsgString17;
struct Unk_02021048_Sys;
struct Unk_02020d90_Res;
struct TownIdView;
struct MsgString17;
struct MsgString9B;
struct VillagerId;
struct Unk_02021340_Pair;
struct Unk_02021340_V;
struct Unk_02021340_Pair2;
struct Unk_02021340_Pad;
struct Unk_02021340_Map;
struct Unk_02021340_Pos;
struct Unk_02021340_Scene;
class Unk_02021340_Base;
class VillagerTalkRumorTopics;
struct Unk_02021d50_Id;
struct Unk_02022608_Rec;
struct Unk_02022608_Ent;
struct Unk_02022608_Time;
struct Unk_02022bb4_Pair;
struct Unk_0201d2d0_Pair;
struct Unk_0202368c_Obj;
class VillagerTalkRequestItemTopics;
struct Unk_020238b0_Out;
struct Unk_020238b0_Data;
struct Unk_0201d2d0_Id;
struct Unk_0201d2d0_Menu;
struct Unk_02025090_Pair;
class VillagerTalkRequestStartTopics;
struct Unk_020254ec_Out;
struct Unk_020254ec_Data;
struct Unk_020254ec_Parent;
struct Unk_02025540_Tbl;
struct Unk_020257f0_S;
struct Unk_0202585c_Pair;
struct Unk_02025df8_Data;
struct Unk_02025ed4_Arg;
struct Unk_0201d568_SW;
struct Unk_020267b8_Tbl;
struct Unk_02026b38_Msg;
struct Unk_0201d2d0_Msg;
struct Unk_02027324_S;
class VillagerTalkRequestReplyTopics;
struct Unk_02027a34_Out;
struct Unk_02027a34_Data;
struct Unk_02027a34_Menu;
struct Unk_0202839c_Menu;
struct Unk_0201d2d0_Key;
struct Unk_020289f8_S;
struct Unk_02029f58_T;
struct Unk_02029a88_Pair;
struct Unk_02029c74_Rec;
struct Unk_0202a750_S;
struct Unk_0202ac98_Buf;
struct Unk_0202b208_Obj;
struct Unk_0201d2d0_H120;
struct Unk_0202b4ac_Rec;
struct Unk_0202b4ac_Str;
struct Unk_0202bd3c_Arr;
struct Unk_0202bd3c_Bytes;
class ReddPassword;
class Unk_0202b4ac_VBase;
class Unk_0202b4ac_Owner;
struct Unk_0202b520_Pair;
struct Unk_0202bb88_Id;
struct Unk_0202be64_Rec;
class Unk_0202be64_Host;
struct Unk_0202c60c_Entry;
struct Unk_0202c60c;
struct Unk_0202c148_Tbl;
struct Unk_0202c224_Local;
struct Unk_0202c654_Row;
struct Unk_0202c92c_Ent;
struct Unk_0202cd5c_Obj;
struct Unk_0202cb34_Size;
struct Unk_0202cb34_Grid;
class Unk_0202cf9c_Scene;
struct Unk_0202ce90_Parent;
class Unk_0202ce90_Base;
class VillagerActor;
class VillagerClothModel;
struct Unk_020d8938_Tbl;
class Unk_02015b54;
struct Unk_02053d3c;
struct Unk_0201ad3c;
struct NpcFaceAnim;
struct NpcAnimCtrl;
struct Unk_0201accc;
struct Unk_0201a8bc;
struct Unk_0201ad18;
struct Unk_0201a794;
struct NpcSpeechState;
struct Unk_0201a13c;
struct Unk_020323b0;
struct Unk_02088d00;
struct Unk_020135e4;
struct NpcActionCtrl;
struct Unk_02014254;
class SndSeEmitter;
struct Unk_0202d7f4;
struct Unk_0202d5e8;
struct VillagerAnimHeapHandle;
struct VillagerMood;
struct Unk_02082014;
class Character;
class NpcActor;
struct Unk_0202e18c_Buf;
class ActorTalkRequest;
class SpNpcTalkRequest;
class SpNpcActor;




struct TownIdView {
    TownIdView();
    ~TownIdView();
    u32 pad[0x10 / 4];
};



typedef void (VillagerTalk::*Unk_020d8938_Fn)();

typedef void (VillagerTalk::*Unk_020d8938_ArgFn)(void *arg);

typedef VillagerActor Unk_020d8938_Parent;




struct Unk_0202e18c_Buf {
    u32 unk_00;
    u32 unk_04;
};


struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};
// the owner of the VillagerTalkTopics object as its functions see it
struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec position;
    u8 pad_68[0x564 - 0x68];
    u8 actionCtrl[4];
    u8 pad_568[0x820 - 0x568];
    u8 habitTopicKind;
    u8 pad_821[0x82c - 0x821];
    void *villagerData;
};
struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 count;
    s8 cancelIndex;
};
struct Unk_0201d568_SV {
    u8 pad_00[0x20];
    volatile u8 count;
    s8 cancelIndex;
};
struct Unk_0201d568_SW {
    u32 pad_00[8];
    volatile u8 count;
    s8 cancelIndex;
};


struct TalkChoiceTable {
    u8 range[5][2];
    u8 pad_0a[2];
    s32 val[5];
    u8 count;
    s8 cancelIndex;
};


struct Unk_0201c050_Parent { u8 pad[0x2c]; void *unk_2c; };

struct Unk_0201c050_Obj {
    u8 pad_00[4];
    Unk_0201c050_Parent *unk_04;
    u8 pad_08[0x1c];
    u32 unk_24;
    u8 pad_28[0x6a];
    u8 unk_92;
};

typedef BOOL (VillagerMood::*Unk_0201c078_Fn)(VillagerTalk *s);


struct Unk_0201c574_Vec { s32 x, y, z; };

struct Unk_020d8938_Fc {
    u8 pad_00[0x82c];
    void *villagerData;
};

struct Unk_0201d2d0_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_0201d2d0_Data {
    u32 key;
    u8 variantCount;
};

struct Unk_0201d9e0_Rec {
    u16 townId;
    u8 townName[8];
    u8 pad_0a;
    u8 species;
};

typedef void (VillagerTalkTopics::*Unk_0201d2d0_Fn)();

typedef void (VillagerTalkTopics::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

struct Unk_0201dc44_Ret {
    void *a;
    u8 b;
};

typedef void (VillagerTalkHolidayTopics::*Unk_0201dc44_State)(Unk_0201dc44_Ret *out);

struct Unk_0201dc44_Snd {
    u32 a;
    u8 b;
};

struct Unk_0201dc44_Vec {
    s32 x, y, z;
};

struct Unk_0201dca0_Vec {
    s32 x, y, z;
};

struct Unk_0201dc44_Ctx {
    u8 pad_00[0x5c];
    Unk_0201dc44_Vec position;
    u8 pad_68[0x564 - 0x68];
    u8 actionCtrl[4];
    u8 pad_568[0x82c - 0x568];
    void *villagerData;
};

struct Unk_0201dc44_Id {
    u16 townId;
    u8 townName[8];
    u8 personality;
    u8 species;
};

struct Unk_0201dc44_Time {
    u8 second;
    u8 minute;
    u8 hour;
    u8 day;
    u8 month;
    u8 year;
    u8 unk_06;
    u8 unk_07;
};

struct Unk_0201dc44_Lim {
    u8 sleepHour;
    u8 sleepMinute;
    u8 wakeHour;
    u8 wakeMinute;
};

struct Unk_0201e110_Buf {
    u8 pad[0x20];
    u8 count;
    u8 cancelIndex;
};

struct Unk_0201e5a4_Owner {
    u8 pad_00[0x82c];
    u32 villagerData;
};

struct Unk_0201e5a4_Msg {
    u8 pad_00[8];
    s32 nextState;
};

struct Unk_0201e5a4_Ret {
    s32 fileName;
    u8 msgIndex;
};

struct Unk_0201e9d0_S {
    u8 msgIndex;
    u16 item;
};

struct Unk_0201eabc_T {
    u8 pad_00[0x20];
    u8 count;
    u8 cancelIndex;
    u8 pad_22[6];
};

struct Unk_0201e5a4_Out {
    u8 *fileName;
    u8 msgIndex;
};

struct Unk_0201e710_Tmp {
    u32 unk_00;
};

struct Unk_020c7758_T {
    u32 key;
    u8 variantCount;
};

typedef void (VillagerTalkAcornTopics::*Unk_0201e5a4_RetFn)(Unk_0201e5a4_Ret *);

typedef void (VillagerTalkAcornTopics::*Unk_0201e5a4_Fn)(u32);

typedef void (VillagerTalkAcornTopics::*Unk_0201e5a4_VoidFn)();


struct Unk_0201ef00_Out {
      void *fileName;
      u8 msgIndex;
};

struct Unk_0201eeac_Res {
      u32 fileName;
      u8 msgIndex;
};

struct Unk_020c7790 {
    u32 key;
    u8 variantCount;
};

struct Unk_021ed24c_Prim { virtual void vfunc_00(); u32 pad; };

struct Unk_021ed24c {
    u32 pad;
};

struct Unk_021ed24c_Outer : Unk_021ed24c_Prim, Unk_021ed24c {};

struct Unk_021d7350_View { u8 pad_00000[0x15ef4]; Unk_021ed24c_Outer unk_15ef4; };

struct Unk_0201f170_Rec {
      u16 townId;
      u8 townName[8];
      u8 personality;
      u8 species;
};

typedef void (VillagerTalkHobbyTopics::*Unk_0201eea4_Fn)(void *);

struct Unk_0201f7d0_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_0201f7d0_Data {
    u32 key;
    u8 variantCount;
};

struct Unk_0201f7d0_Parent {
    u8 pad_00[0x82c];
    void *villagerData;
};

struct Unk_0201f7d0_S {
    u8 pad_00[0x20];
    u8 count;
    s8 cancelIndex;
};

struct Unk_0201fb54_Date {
    u32 a;
    u32 b;
};

typedef void (VillagerTalkKaraokeTopics::*Unk_0201f7d0_Fn)();

typedef void (VillagerTalkKaraokeTopics::*Unk_0201f7d0_OutFn)(Unk_0201f7d0_Out *);

typedef s32 (VillagerTalkTopics::*Unk_02020850_Fn)();

struct Unk_02020cc4_Bits {
    u8 a : 2;
    u8 b : 3;
    u8 c : 3;
};

struct Unk_02020cc4_Time {
    u8 pad_00[3];
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 pad_06[2];
};

typedef void *(VillagerTalkTopics::*Unk_02021048_Fn)(u32 *, s32);

typedef u32 (VillagerTalkTopics::*Unk_02020d90_Fn)(u8 *, s32 *, u8 *, u32 *);





struct Unk_02021048_Sys {
    u8 pad_00[0x64];
    u32 myAid;
};

struct Unk_02020d90_Res {
    u32 key;
    s32 part;
    u8 partSize;
    u8 variantCount;
};

struct Unk_02021340_Pair { u32 a; u8 b; };

struct Unk_02021340_V { s32 v; };

struct Unk_02021340_Pair2 { Unk_02021340_V a, b; };

struct Unk_02021340_Pad { u8 pad_00[0x20]; s32 roomScore; u16 roomBonusFlags; };

struct Unk_02021340_Map { u8 *cells; u32 w; u32 h; };

struct Unk_02021340_Pos { s32 x, y, z; };

struct Unk_02021340_Scene {
      u8 pad_00[0x5c];
      Unk_02021340_Pos pos;
      u8 pad_68[0x82c - 0x68];
      void *villagerData;
};

struct Unk_02021d50_Id {
    u16 id;
    u8 name[8];
};

typedef BOOL (VillagerTalkTopics::*Unk_0201d2d0_BFn)();

struct Unk_02022608_Rec {
    u8 fish;
    u8 unk_01;
    u8 weight;
};

struct Unk_02022608_Ent {
    Unk_02022608_Rec *entries;
    u8 count;
};

struct Unk_02022608_Time {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02022bb4_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0201d2d0_Pair {
    u32 unk_00;
    u32 unk_04;
};


struct Unk_020238b0_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_020238b0_Data {
    u32 key;
    u8 variantCount;
};




struct Unk_0201d2d0_Id {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0201d2d0_Menu {
    u8 pad_00[8];
    u32 nextState;
};

struct Unk_02025090_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_020254ec_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_020254ec_Data {
    u32 key;
    u8 variantCount;
};

struct Unk_020254ec_Parent {
    u8 pad_00[0x82c];
    void *villagerData;
};

struct Unk_02025540_Tbl {
    s32 pad[0x19];
    s32 myAid;
};

struct Unk_020257f0_S {
    u8 pad_00[0x20];
    u8 count;
    s8 cancelIndex;
};

struct Unk_0202585c_Pair {
    u32 a, b;
};

typedef void (VillagerTalkRequestStartTopics::*Unk_020254ec_Fn)();

struct Unk_02025df8_Data {
    u8 pad_00[3];
    u8 day;
    u8 month;
};

struct Unk_02025ed4_Arg {
    u32 unk_00;
    u32 unk_04;
};

typedef void (*Unk_02025ed4_Fn)(u16 *, Unk_02025ed4_Arg *);

struct Unk_020267b8_Tbl {
    u32 v[3];
};

struct Unk_02026b38_Msg {
    u32 unk_00;
    u32 state;
    s32 nextState;
};

struct Unk_0201d2d0_Msg {
    u8 pad_00[8];
    s32 nextState;
};

struct Unk_02027324_S {
    u8 msgIndex;
    u16 item;
};

struct Unk_02027a34_Out {
    u32 fileName;
    u8 msgIndex;
};

struct Unk_02027a34_Data {
    u32 key;
    u8 variantCount;
};


struct Unk_02027a34_Menu {
    u8 pad_00[0x20];
    u8 count;
    s8 cancelIndex;
};

typedef void (VillagerTalkRequestReplyTopics::*Unk_02027a34_Fn)();

typedef void (VillagerTalkRequestReplyTopics::*Unk_02027a34_OutFn)(Unk_02027a34_Out *);

typedef BOOL (VillagerTalkRequestReplyTopics::*Unk_02027a34_TestFn)(void *, void *);

struct Unk_0202839c_Menu {
    u8 pad_00[0x20];
    u8 count;
    s8 cancelIndex;
};

struct Unk_0201d2d0_Key {
    u32 w0, w1;
};

struct Unk_020289f8_S {
    u8 pad_00;
    u8 minute;
    u8 hour;
    u8 day;
};

struct Unk_02029f58_T {
    u8 v[0x1c];
};

struct Unk_02029a88_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_02029c74_Rec {
    u16 townId;
    u8 townName[8];
    u8 pad_0a;
    u8 species;
};

struct Unk_0202a750_S {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};

typedef s32 (VillagerTalkTopics::*Unk_0202a750_Fn)();

struct Unk_0202ac98_Buf {
    u16 slotMask;
    u8 count;
};

struct Unk_0202b208_Obj {
    u8 pad_00[0x88];
    u8 unk_88[0x18];
    u8 unk_a0;
};

struct Unk_0201d2d0_H120 {
    u16 unk_00;
    u16 pad;
    u32 unk_04;
    void *unk_08;
};

struct Unk_0202b4ac_Rec {
    u8 pad_00[0x1d];
    union {
        u8 unk_1d;
        struct {
            u8 f0 : 1;
            u8 f1 : 1;
            u8 f2 : 1;
        } bits;
    };
};

struct Unk_0202b4ac_Str {
    u8 c[2];
};

struct Unk_0202bd3c_Arr {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0202bd3c_Bytes {
    u8 pad_00[2];
    u8 hour;
    u8 day;
    u8 month;
};

class Unk_0202b4ac_VBase {
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
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
};

class Unk_0202b4ac_Owner : public Unk_0202b4ac_VBase {
public:
    u8 pad_04[0x5c - 4];
    s32 position[3];
    u8 pad_68[0x82c - 0x68];
    void *villagerData;
};

struct Unk_0202b520_Pair {
    u16 unk_00;
    u16 fortuneItem;
};

struct Unk_0202bb88_Id {
    u16 townId;
    u8 townName[8];
};

struct Unk_0202be64_Rec {
    u32 v[2];
    u8 b(u32 i) { return ((u8 *)this)[i]; }
};

class Unk_0202be64_Host {
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

struct Unk_0202c60c_Entry {
    u8 fish;
    u8 unk_01;
    u8 weight;
};

struct Unk_0202c60c {
    Unk_0202c60c_Entry *entries;
    u8 count;
};

struct Unk_0202c148_Tbl {
    Unk_0202c60c **slots;
};

struct Unk_0202c224_Local {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0202c654_Row {
    u8 *entries;
    u8 count;
};

struct Unk_0202c92c_Ent {
    u8 *entries;
    u8 count;
};

struct Unk_0202cd5c_Obj {
    u32 v[2];
};

struct Unk_0202cb34_Size {
    s32 x, y;
};

struct Unk_0202cb34_Grid {
    u8 *blocks;
    Unk_0202cb34_Size size;
};

class Unk_0202cf9c_Scene {
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
    virtual void vfunc_24(u32 a);
    virtual void vfunc_28(u32 a);
    virtual void vfunc_2c(u32 a);
    virtual void vfunc_30(u32 a);
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
    virtual s32 vfunc_60();
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
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4(u32 a, u32 b);
};

struct Unk_0202ce90_Parent {
    u8 pad_00[0x564];
    u8 actionCtrl[4];
};





// ---- class chain of VillagerTalk (vtable 0x020d8930): TalkMsgRequest <- ActorTalkRequest <- VillagerTalk.


typedef void (VillagerTalk::*Unk_020d8938_Fn2)(u32 a, s32 b);
typedef s32 (VillagerTalk::*Unk_020d8938_FnS)();
typedef void (VillagerTalk::*Unk_020d8938_FnArg)(u32);


// ---- class chain of VillagerActor (vtable 0x020d89c0):



inline SndSeEmitterKind1::~SndSeEmitterKind1() {}
inline NpcActor::~NpcActor() {}




// one entry of the tables in bss (three pointers to member functions)
struct Unk_021be8c0 {
    u32 w[6];
};













class Unk_02021340_Base {
public:
    virtual ~Unk_02021340_Base();
    virtual void vfunc_08();
    u8 pad_04[0x38];
    u32 window;
    u8 pad_40[0x0c];
    void *unk_4c;
    u8 pad_50[0x2c];
};

class VillagerTalkRumorTopics : public Unk_02021340_Base {
public:
    void *pickMemoryWithReceivedItem(void **arr, s32 n);
    void *pickMemoryAny(void **arr, s32 n);
    void *pickMemoryWithTime(void **arr, s32 n);
    void *func_02021448(void **arr, s32 n);
    void *pickMemoryWithCompliment(void **arr, s32 n);
    void *func_02021564(void **arr, s32 n);
    void *pickMemoryDislikedOld(void **arr, s32 n);
    void *pickMemoryLikedOld(void **arr, s32 n);
    BOOL selectTsuItem();
    BOOL selectTsuHome();
    BOOL selectTsuSpot();
    BOOL selectTsuFriend();
    BOOL selectTsuHappyroom();
    u8 pad_a0[0xfc - 0x7c];
    Unk_02021340_Scene *actor;
    u8 topicFile[0x1e];
    u8 topicIndex[2];
    u16 unk_120;
};





class Unk_0202ce90_Base {
public:
    void playOwnerIdleAnim();
    u8 pad_00[0xfc];
    Unk_0202ce90_Parent *actor;
};

class VillagerClothModel {
public:
    u16 *getItem();
    void release();
    BOOL change(VillagerActor *parent, u16 *id);
    void *buildTexture(VillagerActor *parent, u16 *id);
    BOOL init(VillagerActor *parent, u16 *id);
    VillagerClothModel *destruct();
    VillagerClothModel *construct();
    u8 pad_00[0x28];
    u16 clothItem;
    u8 pad_2a[2];
    u8 texPatBuf[4];
};

extern "C" {
extern void (*sRequestFossilPickers[])(u16 *, s32, void *);
extern void (*sRequestShirtPickers[])(u16 *, s32, u16 *);
extern void (*sRequestFishPickers[])(u16 *, Unk_0202585c_Pair *);
extern "C++" {}
void _ZN10VillagerId7getNameEj(void *, u32);
u32 _ZN10VillagerId9getGenderEv(void *);
s32 _ZN10VillagerId7isValidEv(void *);
s32 _ZN12Unk_02003c3013func_02003e50Ev(void *);
s32 _ZN12Unk_02003c3013func_02003eccEv(void *);
s32 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *, void *);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *);
s32 _ZN12Unk_0201425820requestSwitchSpeakerEh(void *, s32);
void _ZN12Unk_0201442023requestPlayRandomMelodyEv(void *);
void _ZN12Unk_0201442017requestPlayMelodyEP17Unk_02014420_Vec2(void *, void *);
void _ZN12Unk_0201442016requestItemAct12Ev(void *);
void _ZN12Unk_0201442017requestReturnItemEv(void *);
void _ZN12Unk_0201442015requestKeepItemEv(void *);
void _ZN12Unk_0201442016requestItemAct0FEv(void *);
BOOL _ZN12Unk_0201442015requestTakeItemEPtjjj(void *, void *, s32, s32, s32);
s32 _ZN12Unk_02015b8c9getAnimIdEj(void *, u32);
s32 _ZN11NpcAnimCtrl13resolveAnimIdEiPv(void *, u32, void *);
s32 _ZN11NpcAnimCtrl12initForActorEP16Unk_02015fe0_Obji(void *, void *, u32);
void _ZN13NpcActionCtrl12requestStandEjt(void *, s32, u32);
s32 _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *, u32, u32, u32, u32, u32, u32, u32, u32, u32, u32);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *);
s32 _ZN13NpcActionCtrl9getActionEv(void *);
void _ZN13NpcActionCtrl11startActionEPhiiiisii(void *, void *, s32, s32, s32, s32, s32, s32, s32);
s32 _ZN11NpcFaceAnim4loadEP18Unk_02019cac_Owner(void *, void *);
s32 _ZN14NpcMoveAnimSet11setWalkAnimEi(void *, u32);
s32 _ZN14NpcMoveAnimSet12setStandAnimEi(void *, u32);
void _ZN18VillagerTalkTopics15gotoRewardOrEndEv(void *);
BOOL _ZN18VillagerTalkTopics22tryOfferCollectRequestEPv(void *, void *);
void _ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out(void *, Unk_0201d2d0_Out *);
void _ZN18VillagerTalkTopics14selectGreetingEP16Unk_0201d2d0_Out(void *, Unk_0201d2d0_Out *);
void _ZN18VillagerTalkTopics19updateFishCatchPlanEPvPhS0_hP16Unk_0202bd3c_Arr(void *, void *, u8 *, void *, u8, Unk_0202bd3c_Arr *);
void _ZN16CharaClothTexRef8loadItemEPtiii(void *, void *, s32, s32, s32);
void _ZN12ItemPickSpec3setEii(void *, u32, u32);
s32 _ZN6TownId15getTownRelationEv(void *);
s32 _ZN10LetterView8getStateEv(void *);
void _ZN15TalkWindowState11openChoicesEi(void *, s32);
s32 _ZN15TalkWindowState7setSlotEiPv(void *, u32, void *);
void _ZN15TalkWindowState11lockAdvanceEv(void *);
s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *, void *, u32);
s32 _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(void *, u8 *, u32);
void * _ZN7Pattern7getInfoEv(s32);
u16 * _ZN11PatternInfo9getAuthorEv(void *);
s32 _ZN20VillagerDataItemView12getFurnitureEv(void *);
void * _ZN20VillagerDataItemView18getMovedFromTownIdEv(void *);
void _ZN20VillagerDataItemView14setGreetingForEPviS0_(void *, u32, s32, void *);
void _ZN20VillagerDataItemView16setComplimentForEPviS0_(void *, u32, s32, void *);
void _ZN23VillagerDataProfileView8setShirtEPt(void *, u16 *);
u16 * _ZN23VillagerDataProfileView8getShirtEv(void *);
s32 _ZN23VillagerDataProfileView13hasLetterFromEPt(void *, void *);
void * _ZN12VillagerData9getLetterEv(void *);
s32 _ZN12VillagerData10getPatternEv(void *);
void * _ZN12VillagerData13getVillagerIdEv(void *);
s32 _ZN14VillagerMemory18hasFortuneGreetingEv(void *);
void _ZN14VillagerMemory20clearFortuneGreetingEv(void *);
s32 _ZN14VillagerMemory13isTalkedTodayEv(void *);
s32 _ZN14VillagerMemory14setTalkedTodayEv(void *);
s32 _ZN14VillagerMemory11isGiftGivenEv(void *);
void _ZN14VillagerMemory12setGiftGivenEv(void *);
u8 _ZN14VillagerMemory15pickUnusedTopicEv(void *);
u8 _ZN14VillagerMemory13getImpressionEv(void *);
s32 _ZN14VillagerMemory11hasTownTuneEv(void *);
u16 * _ZN14VillagerMemory15getReceivedItemEv(void *);
s32 _ZN14VillagerMemory15setReceivedItemEPt(void *, void *);
void _ZN14VillagerMemory11setGreetingEPvi(void *, u32, s32);
void _ZN14VillagerMemory13setComplimentEPvi(u32, u32, s32);
void _ZN14VillagerMemory13getComplimentEPv(void *, void *);
s32 _ZN14VillagerMemory13hasComplimentEv(void *);
void _ZN14VillagerMemory11setNicknameEPvi(void *, void *, s32);
void _ZN14VillagerMemory18setNicknameFromMsgEPv(void *, void *);
void _ZN14VillagerMemory11getNicknameEPv(void *, void *);
s32 _ZN14VillagerMemory13getFriendshipEv(void *);
s32 _ZN13ContestRecord7getSizeEv(Unk_021ed24c *);
Unk_0201dc44_Id * _ZN13ContestRecord16getVotedVillagerEv(void *);
Unk_0201dc44_Id * _ZN13ContestRecord17getHolderVillagerEv(void *);
u32 _ZN13ContestRecord13func_020858acEv(Unk_021ed24c *);
void _ZN20PlayerDailyTalkFlags3setEj(void *, u32);
u32 _ZN20PlayerDailyTalkFlags4testEj(void *, u32);
void _ZN8PlayerId13getNameStringEP9MsgString(void *, void *);
s32 _ZN8PlayerId6equalsEPS_(void *, void *);
s32 _ZN8PlayerId7isValidEv(void *);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *, s32);
void * _ZN15PlayerInventory9getLetterEi(void *, s32);
s32 _ZN15PlayerInventory14getPocketFlagsEi(void *, s32);
s32 _ZN15PlayerInventory15findEmptyPocketEv(u32);
s32 _ZN15PlayerInventory9setPocketEPtij(void *, void *, s32, s32);
u16 * _ZN15PlayerInventory9getPocketEi(void *, s32);
s32 _ZN12Unk_02097ff48testFlagEj(void *, s32);
void _ZN12Unk_02097ff422advanceArbeitTalkCountEv(u32);
s32 _ZN12Unk_02097ff418getArbeitTalkCountEv(u32);
void _ZN12Unk_02097ff419setBirthdayTalkYearEj(void *, u32);
u8 * _ZN12Unk_02097ff411getBirthdayEv();
void * _ZN10PlayerData10getErrandsEv(void *);
void * _ZN10PlayerData17getDailyTalkFlagsEv(void *);
void * _ZN10PlayerData14getDramaRecordEv(void *);
s32 _ZN10PlayerData10getCatalogEv(void *);
void * _ZN10PlayerData12getInventoryEv(void *);
void * _ZN10PlayerData11getPlayerIdEv(void *);
u16 * _ZN18SickVillagerRecord13getTopVisitorEv(void *);
s32 _ZN18SickVillagerRecord19isRecentlyRecoveredEP17Unk_020994cc_Date(void *, s32);
s32 _ZN18SickVillagerRecord10hasVisitorEP16Unk_020994cc_Ent(void *, void *);
void * _ZN18SickVillagerRecord13func_0209978cEv(void *);
void _ZN18SickVillagerRecord11resetRecordEv();
void * _ZN12ErrandRecord7getItemEv(void *);
void _ZN12ErrandRecord8setExtraEh(void *, u32);
void * _ZN12ErrandRecord8getExtraEv(void *);
void _ZN12ErrandRecord7setStepEh(void *, s32);
s32 _ZN12ErrandRecord7getStepEv(void *);
s32 _ZN12ErrandRecord11getSubGroupEv(void *);
void * _ZN12ErrandRecord13func_0209ac10Ev();
s32 _ZN12ErrandRecord7getKindEv(void *);
s32 _ZN12ErrandRecord8getGroupEv(void *);
s32 _ZN12ErrandRecord13getClassIndexEPi(void *, s32 *);
s32 _ZN12ErrandRecord8getClassEv(void *);
s32 _ZN12ErrandRecord8isActiveEv(void *);
s32 _ZN12ErrandRecord5clearEv(void *);
void _ZN12VillagerPlan13func_0209b238Ev(void *);
s32 _ZN12VillagerPlan8getStateEv(void *);
s32 _ZN8SaveData8testFlagEj(void *, s32);
s32 _ZN10ChoiceList9getResultEv(void *);
void _ZN10ChoiceList9loadTextsEv(void *);
void _ZN10ChoiceList8setEntryEiPKhiS1_PKci(void *, s32, void *, s32, void *, const char *, s32);
void _ZN10ChoiceList5resetEii(void *, s32, s32);
u32 _ZN11CommManager7isMyAidEj(void *, u32);
s32 _ZN11CommManager8isOnlineEv(void *);
s32 _ZN11CommManager12isSlotActiveEi(void *, u32);
BOOL _ZN12Unk_020d771015requestGiveItemEPtjjj(void *, void *, u32, u32, u32);
s32 _ZN12Unk_020d771018requestCloseWindowEj(void *, u32);
s32 _ZN12Unk_020d771019requestReopenWindowEv(void *);
void _ZN12Unk_020d771016setSubSceneKind2Ejjjh(void *, s32, void *, s32, s32);
void _ZN12Unk_020d771012setMenu12ArgEjj(void *, void *, s32);
void _ZN12Unk_020d771015setSubSceneKindEjj(void *, u32, u32);
void _ZN12Unk_020d771015setPocketFilterEjjj(void *, void *, s32, s32);
void _ZN12Unk_020d771013setPocketItemEjjj(void *, void *, s32, s32);
void _ZN12Unk_020d771012openSubSceneEi(void *, s32);
u32 _ZN16ActorTalkRequest15getSpeakerIndexEv();
Unk_0202cf9c_Scene * _ZN16ActorTalkRequest14getActionActorEv(void *);
void _ZN16ActorTalkRequest17setSlotFromStringEjjj(void *, u32, void *, void *, void *);
s32 _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *, void *, s32, s32);
void _ZN16ActorTalkRequest19setVillagerNameSlotEjj(void *, void *, s32);
void _ZN16ActorTalkRequest17setPlayerNameSlotEjj(void *, u32, u32);
void _ZN16ActorTalkRequest15setTownNameSlotEjj(void *, u32, u32);
void _ZN16ActorTalkRequest10setDaySlotEjj(void *, u32, u32);
void _ZN16ActorTalkRequest12setMonthSlotEjj(void *, u32, u32);
void _ZN16ActorTalkRequest17setFixedPointSlotEiji(void *, s32, u32, s32, s32);
void _ZN16ActorTalkRequest18setNumberNamedSlotEijihii(void *, void *, u32, u32, u32, u32, u32);
void _ZN16ActorTalkRequest13setNumberSlotEijiii(void *, s32, u32, s32, s32, s32);
void * _ZN16ActorTalkRequest13getChoiceListEv(void *);
void _ZN16ActorTalkRequest6updateEv(void *);
s32 _ZN8NpcActor11getNpcIndexEv(void *);
s32 _ZN8NpcActor8vfunc_00Ev(void *);
s32 _ZN8NpcActor8vfunc_0cEv(void *);
u32 _ZN12VillagerTalk9getUnk150Ev(void *);
s32 _ZN9Character9preDeleteEv(void *);
u32 _ZN11CachedModel16allocJointRecordEPv(void *, u32);
u32 _ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(void *, u32);
void _ZN19ThreeLayerAnimModel20onJointCalcPreLayer3EP16Unk_02053a54_Msg(void *, void *);
s32 _ZN19SpNpcAnimHeapHandle22getVillagerAnimHeapRefEv(void *);
s32 _ZN12NpcResHandle7releaseEv(void *);
s32 _ZN12NpcResHandle7acquireEv(void *);
void _ZN17NpcClothTexHandleC1Ev(void *);
void _ZN17NpcClothTexHandleD1Ev(void *);
void * _ZN21NpcTexPatBufRefHandle11getClothTexEv(void *);
void _ZN19ActorFollowCollider13setupForActorEPviijjjhi(void *, void *, s32, s32, s32, s32, s32, s32, s32);
void _ZN11MsgString9BC1Ev(void *);
void _ZN11MsgString9BD1Ev(void *);
void _ZN9MsgString4copyEPS_(void *, void *);
void _ZN9MsgString5clearEv(void *);
void _ZN18ReddPasswordStringC1Ev(void *);
void _ZN18ReddPasswordStringD1Ev(void *);
s32 _ZN14MatTexVramTask7requestEPvjS0_jj(void *, u32, u32, void *, u32, u32);
void _ZN14MatTexVramTask6cancelEv(void *);
void _ZN14MatTexVramTaskC1Ev(void *);
ReddPassword * _ZN8ReddShop11getPasswordEv(void *);
u16 VillagerId_GetSpecies(void *);
void Villager_MakePersonalityFileName(void *, s32, u32, u32);
u8 VillagerId_GetPersonality(void *);
s32 func_02003e70(void *, u32, u32, u32);
void Snd_PlaySe();
void NpcActor_OnJointCalc();
void NpcActor_JointCalcLayer3Cb(Unk_0201c050_Obj *);
void * VillagerMood_Destruct(void *);
void * VillagerMood_Construct(void *);
void TalkChoiceTable_SetRange(void *, TalkChoiceTable *, u32, const u8 *, s32);
void TalkChoiceTable_Set(void *, TalkChoiceTable *, u32, u8, u8, s32);
void TalkChoiceTable_Init(void *, TalkChoiceTable *);
BOOL Talk_AcornPickerFilter(u16 *, s32);
BOOL Talk_IsAcornItem(u16 *);
u32 Talk_GetTourneyHourBlock(u32);
BOOL Talk_MemoryHasReceivedItem(void *, void *);
BOOL Talk_MemoryAny(void *, void *);
BOOL Talk_MemoryHasTime(void *, void *);
BOOL func_020214a8(void *, void *);
BOOL Talk_MemoryHasCompliment(void *, void *);
BOOL func_020215a8(void *, void *);
s32 func_020215f8(void *, void *);
BOOL Talk_IsMemoryDislikedAndOld(void *, void *);
BOOL Talk_IsMemoryLikedAndOld(void *, void *);
s32 Talk_GetDaysSinceMemoryTime(void *);
void * Talk_PickRandomMemory(void *, void **, s32, BOOL (*)(void *, void *));
s32 Talk_GetFishHintTimeVariant(s32);
BOOL Talk_IsArbeitItem(u16 *);
void VillagerRequest_PickFossilForStep(u16 *, VillagerTalkRequestStartTopics *, u32);
void VillagerRequest_PickFossilOfGroup(u16 *, void *, void *);
void Item_GetFossilPartIndex(u16 *);
s32 Item_GetFossilPartIndexInGroup(u16 *, s32);
void VillagerRequest_PickRandomFossil(u16 *);
void VillagerRequest_PickShirtForStep(u16 *, VillagerTalkRequestStartTopics *, u32);
void VillagerRequest_PickShirtOfGroupForPlayer(u16 *, u8 *, u32);
void VillagerRequest_PickShirtOfGroup(u16 *, u8 *, u32);
void VillagerRequest_PickShirtOtherGroup(u16 *, u8 *, u32);
void VillagerRequest_PickShirtFromGroups(u16 *, u32, s32, void *, u8, u32);
void VillagerRequest_PickFishForStep(u16 *, void *, u32);
void VillagerRequest_PickFishStep4(u16 *, u8 *);
void VillagerRequest_PickFishStep3(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickFishStep1(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickFishStep0(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickInsectForStep(u16 *, void *, u32);
void VillagerRequest_PickInsectStep4(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickInsectStep3(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickInsectStep1(u16 *, Unk_02025df8_Data *);
void VillagerRequest_PickInsectStep0(u16 *, Unk_02025df8_Data *);
void Talk_GetMoneyItem(u16 *, u32);
BOOL Talk_FilterPickDeliveryShirt(u16 *, s32);
u32 Talk_GetWantedFossilPocketMask(void *);
u32 Talk_GetPocketMaskForItem(u16 *);
BOOL Talk_FilterPickFossil(u16 *, s32);
BOOL Talk_IsFossilItem(u16 *);
BOOL Talk_FilterPickShirt(u16 *, s32);
BOOL Talk_IsShirtItem(u16 *);
BOOL Talk_FilterPickNonFossilFurniture(u16 *, s32);
BOOL Talk_IsNonFossilFurniture(u16 *);
BOOL Talk_FilterPickFish(u16 *, s32);
BOOL Talk_IsFishItem(u16 *);
BOOL Talk_FilterPickInsect(u16 *, s32);
BOOL Talk_IsInsectItem(u16 *);
BOOL Talk_MakeRandomNickname(void *, void *, u32);
s32 Talk_RoundBells(s32);
void Talk_PickPocketItemForPlan(u16 *, s32);
void Talk_UpdateInsectCatchPlan(Unk_0202be64_Host *, void *, u8 *, void *, u8, Unk_0202be64_Rec *);
s32 Talk_IsCatchPlanDue(Unk_0202be64_Host *, void *, Unk_0202be64_Rec *, u32);
s32 func_0202c094(void *, void *, s32, void *, s32);
s32 Talk_FindInS8Array(s32, s8 *, s32);
s32 InsectPick_GetHintVariant(s32);
s32 FishPick_IsAvailable(u16 *, s32, s32, s32, u8);
void FishPick_PickNow(u16 *);
s32 FishPick_PickWeightedRarity(u16 *, s32 *, s32, s32, Unk_0202c148_Tbl *);
s32 FishPick_PickForDateAnyHour(u16 *, s32, s32, s32, u8);
s32 FishPick_PickForDate(u16 *, s32, s32, s32, u8, u8, u8);
s32 FishPick_PickAnyHour(u16 *, s32 *, s32, s32, Unk_0202c148_Tbl *);
s32 FishPick_PickForHours(u16 *, s32 *, s32 *, s32, Unk_0202c148_Tbl *, u8, u8);
s32 FishPick_PickInSlot(u16 *, s32 *, s32, Unk_0202c60c **);
s32 FishPick_CountInSlot(s32, Unk_0202c60c **);
s32 FishPick_PickInRow(u16 *, s32 *, s32, Unk_0202c60c *);
s32 FishPick_CountInRow(s32, Unk_0202c60c *);
s32 InsectPick_IsAvailable(u16 *, s32, s32, s32);
void InsectPick_PickNow(u16 *);
s32 InsectPick_PickWeightedRarity(u16 *, s32 *, s32 *, s32 *, Unk_0202c92c_Ent *);
s32 InsectPick_PickForMonth(u16 *, s32, s32, s32, s32, u8);
s32 InsectPick_PickForMonthAnyHour(u16 *, s32, s32, u8);
s32 InsectPick_PickAnyHour(u16 *, s32 *, s32 *, s32, Unk_0202c92c_Ent *, s32 *, s32);
s32 InsectPick_PickForHours(u16 *, s32 *, s32 *, s32, Unk_0202c92c_Ent *, s32 *, s32, u8, u8);
s32 InsectPick_PickInSlot(u16 *, s32 *, s32, u8 *, s32, s32 *, s32);
s32 InsectPick_CountInSlot(s32, u8 *, s32, s32 *, s32);
s32 Talk_ArrayContains(s32, s32 *, s32);
void InsectPick_GetMissingHabitats(s32 *, s32 *);
void Talk_PickClothingItem(u16 *, s32);
void Talk_PickErrandItem(u16 *, s32);
void Talk_PickItemFromSpecs(u16 *, u32 *, s32, s32);
void Talk_PickRandomTradeItem(u16 *);
s32 Talk_PickWeightedIndex(u8 *, s32);
void * Talk_FindLetterState7or8(void *);
s32 Talk_FindFlaggedPocketItem(void *, u16 *);
void VillagerTalk_EnsureMemory(u8 *, s32 *, s32 *, s32, s32);
void Talk_SelectTopicMessage(void *, void *, void *, s32, u8, u32, u8, s32, u8);
void Npc_GetStateHeldItem(u16 *, VillagerTalk *);
BOOL Talk_IsInOwnTown();
void Talk_AdvanceDrama(void *, u32);
BOOL Talk_IsDramaPending(void *, u8 *, u32);
BOOL Talk_CheckAndSetPlayerFlag(u32, BOOL);
void TalkChoiceList_SetIndices(u32, u8 *, s32, s32);
void Bgm_ReleasePriority(u32);
void Bgm_Release(u32);
void Bgm_RequestSilence(s32, s32, s32);
void Bgm_Request(s32, s32, s32, s32);
s32 MapBlock_HasAnyAttr(void *, u32);
u16 * MapBlock_GetItemPtr(void *, s32, s32, s32);
void Camera_FocusOnPoint(void *);
s32 Catalog_SetItem(s32, void *, u32, u32);
void * ClothTex_GetTexThunk();
void PlayerOptions_Commit();
void PlayerOptions_SetHiragana(u32);
void MailText_LoadLetter(void *, void *, void *, void *, void *, void *);
s32 Event_GetState(u32, void *, u32);
s32 Event_GetDaysSinceStart(u32);
u32 Item_GetFurnitureIndex(void *);
s32 Item_IsFurniture(void *);
u16 Item_FindMoneyBagForAmount(u32, s32, s32);
u8 Item_GetShirtUnkGroup(void *);
s32 Item_GetPrice(void *);
Unk_0202cb34_Grid * TownBlockMap_Get();
s32 BlockMap_BlockHasAllAttr(void *, s32, s32, s32);
void * FishTable_IsLateMonth(u32);
s32 FishTable_GetHourSlot(u32);
void * FishTable_GetForDate(u32, void *);
s32 Item_GetFossilGroup(u16 *);
s32 Ftr_GetUnk05(void *);
s32 FengShui_GetWestTotal();
s32 CharaClothTexRef_GetBuffer(void *);
void CharaClothTexRef_LoadPattern(void *, void *);
s32 Insect_GetHabitat(u32);
s32 Insect_HourToTimeSlot(u32);
void * Insect_GetSpawnTable(s32);
s32 ItemPick_FromRange(u16 *, u32, u32, u32, u32, u32, u32, u32, u32, u32);
void ItemPick_OneSimple(u16 *, Unk_0202cd5c_Obj *);
void ItemPick_One(void *, void *, u32, u32, u32, u32, u32);
void ItemPickSpec_Destruct(void *);
void TownId_CopyFrom(void *, u32);
void func_020639e8(u8 *, u8 *);
s32 Random_GlobalBelow2(s32);
s32 Random_GlobalBelow(s32);
void * Letter_GetSenderPlayer();
void Letter_FillVillagerToVillager(void *, void *, void *, void *, u32, void *, s32, s32);
void Letter_Clear(void *);
void Melody_SaveRandomPattern(void *);
void MenuCtrl_GetDateTime(void *);
u32 MenuCtrl_GetText();
s32 MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
void VillagerSync_Shirt(void *, u16 *);
void VillagerSync_Act3F(void *, void *);
void VillagerSync_Act3D(void *, s32, void *, s32, s32);
void VillagerSync_Act3C05(void *, u32);
void VillagerSync_Act3C04(void *, u8);
void VillagerSync_Act3C03(void *, s32);
void VillagerSync_Act3C02(void *);
void VillagerSync_Act3C01(void *);
void VillagerSync_Act3C00(void *, u32);
void VillagerSync_ReceivedItem(void *, u32, void *);
void VillagerSync_Impression(void *, s32, s32);
void VillagerSync_MemorySetPlayer(s32, s32);
void VillagerSync_MemoryInit(s32, s32);
u32 VillagerAnimHeapRef_GetHeap(u32);
s32 TalkRepeat_GetLevel(void *);
void * VillagerState_GetTalkRepeat(void *);
void VillagerState_SetHeldItem(void *, void *);
u16 * VillagerState_GetHeldItem(void *);
s32 VillagerState_SetUnk1dBit1(void *);
s32 VillagerState_TickMoodTimer(void *);
s32 VillagerState_GetMoodTimer(void *);
s32 VillagerState_SetMoodTimer(void *, u32);
s32 VillagerState_AddMoodTimer(void *, u32);
s32 VillagerState_SetMood(void *, u32);
s32 VillagerState_GetMood(void *);
s32 VillagerState_GetActivity(void *);
void * VillagerState_GetErrand(void *);
s32 SaveVillagers_IsTuneRequester(void *, void *);
void SaveVillagers_SetTuneRequester(void *, void *);
void SaveVillagers_SetNicknameDate(void *, void *);
s32 SaveVillagers_IsNicknameCooldownOver(void *, void *);
s32 SaveVillagers_FindBirthdayVillager(void *, void *);
s32 VillagerEvent_FindUpcomingIndex(s32, void *);
s32 VillagerEvent_GetTodayIndex();
s32 SaveVillagers_GetUnk3830Index(void *);
void * SaveVillagers_GetUnk3830(void *);
void SaveVillagers_UpdateErrands(void *);
u32 Villager_GetPlayerErrandKind(void *, void *, void *);
void SaveVillagers_AddRelation(void *, void *, void *, s32);
s32 SaveVillagers_GetRelationLevel(void *, s32, s32);
void SaveVillagers_SetLastMovedInById(void *, void *);
void * SaveVillagers_PickRandomTalkPartner(void *, void *, s32);
s32 Random_PickSetBit(u32, u32, u32);
void * SaveVillagers_PickRandomExcept(void *, void *, s32);
void * SaveVillagers_Get(void *, s32);
s32 SaveVillagers_FindIndex(void *, void *);
void Villager_UpdateVisitorRecord(void *, u32);
s32 Villager_IsAsleep(void *, void *);
void Villager_UpdatePlanErrand(void *);
u32 Villager_GetFurnitureTasteIndex(void *);
s32 Villager_IsGreeter(void *);
s32 Villager_GetMostValuableReceivedItem(u16 *, void *);
s32 Villager_PickRandomReceivedItem(void *, void *);
s32 Villager_RemoveReceivedItem(void *, void *);
void Villager_AddReceivedItem(void *, void *);
void Villager_UpdateImpression(void *, void *, u32);
s32 Villager_GetMoveInKind(void *);
s32 Villager_IsInPlayerErrand(void *, void *);
s32 Villager_IsJustMovedIn(void *);
s32 Villager_IsMovingIn(void *);
s32 Villager_GetResidentStatus(void *);
void * Villager_GetPlan(void *);
void * Villager_GetState(void *);
s32 Villager_GetIndex(void *);
s32 Villager_CountFurnitureLike(void *, void *);
void * Villager_SetNicknameFor(void *, void *, s32, void *);
void Villager_SetNicknameFromMsgFor(void *, void *, void *);
s32 Villager_CollectOtherMemories(void *, void *, void *, u32);
s32 Villager_PickMemorySlotForNew(s32);
s32 Villager_FindMemoryIndexById(void *, void *);
s32 Villager_FindMemory(void *, void *);
s32 Villager_GetMemory(void *, s32);
s32 Villager_GetFurnitureTasteScore(void *, void *);
u32 Villager_GetFurnitureTaste(void *, void *);
void * Villager_GetFashionTaste(void *);
s32 Villager_GetUpcomingBirthdayDay(void *, s32, void *);
void * Villager_GetBirthday(void *);
void Villager_SetCatchphrase(void *, u32, s32);
void * VillagerMemory_GetPlayerId(void *);
void * VillagerMemory_GetTownId(void *);
void * VillagerMemory_GetTalkDate(void *);
void VillagerMemory_RecordTalk(s32, s32, s32, s32);
void VillagerMemory_InitForPlayer(s32, s32, s32, s32);
s32 VillagerMemory_IsUsed(void *);
Unk_0201dc44_Lim * Personality_GetSleepHours(void *);
u8 Date_GetStarSignOf(void *);
u32 Date_GetStarSign(u32, u32);
u32 FurnitureTaste_GetTextIndex(void *);
void NpcRegistry_RemoveVillager(void *);
s32 NpcRegistry_AddVillager(void *, void *);
void ContestRecord_GetItem(void *, Unk_021ed24c *);
s32 func_020874e8(u32, u32, u32, void *);
void func_020877a0(void *, u32);
s32 Effect_Create(u32, void *, void *, u32);
s32 PlayerId_FindResidentIndex(void *);
u16 * PlayerId_GetTownId(void *);
void * PlayerData_GetCurrent();
s32 PlayerDataArray_FindById(void *, void *);
s32 PlayerInventory_AddBells(s32, s32, u32);
s32 PlayerData_HasStungFace(void *);
s32 Pocket_FindItem(void *);
s32 Pocket_CountMatching(void *, BOOL (*)(u16 *));
s32 Pocket_CountKind(void *, u32);
s32 Pocket_FindEmpty();
void Pocket_AddItem(u16 *, s32);
u32 Pocket_GetItem(s32);
void Pocket_SetItem(u16 *, s32, s32);
s32 Inventory_GetEmptyLetter();
s32 Inventory_FindEmptyLetter();
s32 func_0209948c(u32);
s32 func_0209949c(u32);
void * PlayerErrandSlots_FindByVillager(s32, void *, s32);
void * PlayerErrands_GetSlot(s32, void *);
void HouseVisitInvite_Set(void *, void *, void *);
s32 HouseVisitInvite_IsFrom(void *, void *);
void HouseVisitInvite_Clear(void *);
void PlayerErrandSlot_ComposeLetter(void *, s32);
u8 * func_0209a420(void *);
void func_0209a424(void *, s32);
s32 PlayerErrandSlot_IsStepDone(void *);
s32 func_0209a49c(s32, s32);
void * PlayerErrandSlot_GetVillager(void *, s32);
void * PlayerErrandSlot_GetRecord(void *);
void PlayerErrandSlot_Start(void *, s32, void *, void *);
void PlayerErrandSlot_Clear(void *);
void * VillagerPlanBlock_GetErrand(void *);
void * VillagerPlanBlock_GetPlan(void *);
u32 PlanErrand_AddCount(void *, u32);
void FossilGroup_GetItem(u16 *, void *, s32);
s32 FossilGroup_PickMissing(s32, s32);
s32 FossilGroup_ToIndex(s32);
s32 PlanErrand_TestFlag(void *, u8);
void PlanErrand_SetFlag(void *, u8);
void PlanErrand_SetFossilGroup(void *, s32);
s32 PlanErrand_GetFossilGroup(void *);
u16 * PlanErrand_GetShownItem(void *);
u32 * PlanErrand_GetTime(void *);
s32 PlanErrand_GetStepCount(s32);
void * PlanErrand_GetPlayer(void *);
s32 PlanErrand_GetStep(void *);
void * PlanErrand_GetRecord(void *);
void PlanErrand_AdvanceStep(void *);
void PlanErrand_Assign(void *, s32, void *, s32, s32);
void * PlanErrand_ResetProgress(void *);
void * func_0209ac1c(s32);
s32 ErrandRecord_GetTime(void *);
s32 Errand_GetGroup(s32);
s32 Errand_GetClass();
s32 PlanState_GetGroup(s32);
s32 Trend_IsValid(s32);
u32 TopicWord_PickRandom(u32 *, u32);
s32 Clock_GetTimeOfDay();
s32 Date_GetNthWeekdayDay(s32, s32, s32, s32);
void * Clock_GetYear();
void Clock_GetDate(void *);
void DateTime_AddMinutes(void *, u32);
s32 DateTime_DiffMinutes(void *, void *);
s32 DateTime_DiffDays(void *, void *);
s32 DateTime_Compare(void *, void *, s32);
s32 Clock_GetDateTime(void *);
BOOL EncodedString_SetRaw(void *, const void *, s32);
s32 ReddPassword_CurrentPlayerKnows();
s32 ReddShop_IsTentOpen();
s32 Constellation_FindVisibleNow();
void * Constellation_GetData();
s32 ConstellationStore_IsUsed(void *, s32);
s32 String_MakeNickname(void *, void *, u8 *);
s32 Scene_GetCurrent();
s32 Scene_InVillagerHouse();
s32 Scene_GetVillagerHouse();
s32 Scene_InMuseumRoom();
s32 SceneId_GetMuseumRoom(s32);
s32 Scene_InNookShop();
s32 Weather_GetFallingPrecip();
s32 Vec_DistXZ(void *, void *);
void func_020f43fc(void *);
void func_020f440c(void *);
void * MI_CpuFill8(void *, s32, u32);
s32 MI_CpuCopy8(void *, void *, s32);
s32 memcmp(void *, void *, s32);
void func_02133ef8(void *, u32);
s32 Insect_IsBeeSwarmOut();
s32 FieldInsect_GetPosAndKind(void *, u32);
extern u32 __ptmf_null[2];
extern u32 sMoodAnimIds[5];
extern u32 sMoodAnimNextIds[5];
extern u8 gTalkMsgIndexNone[];
extern u16 data_020c6cc8;
extern void *gCommManager;
extern u32 data_020d7a38[2];
extern u8 gTalkMsgIndexEnd;
extern u8 sTalkLetter[];
extern Unk_0201d2d0_Data sTalkTopicEtcPush;
extern Unk_0201d2d0_Data sTalkTopicEtcHit;
extern Unk_0201d2d0_Data sTalkTopicAiFall;
extern Unk_0201d2d0_Data sTalkTopicEvBirth;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern u8 sEvBirthTopicTable[];
extern u8 gSaveVillagers[];
extern Unk_0201dc44_State data_020d7aa8;
extern Unk_0201dc44_State data_020d7de0;
extern Unk_0201dc44_State data_020d7ae8;
extern Unk_0201dc44_State data_020d7df0;
extern Unk_0201dc44_State data_020d7e98;
extern Unk_0201dc44_Snd sTalkTopicEvCountdown;
extern Unk_0201dc44_Snd sTalkTopicEvSnowfes;
extern u8 sEvCountdownTopicTable[];
extern u8 sSmallTalkTopicTable[];
extern u8 sEtcCancelTopicTable[];
extern u8 sSmallTalkChoiceMsgRange[];
extern u8 sLeaveChoiceMsgRange[];
extern u8 gContestRecord[];
extern Unk_021d7350_View gSaveData;
extern Unk_020c7758_T sTalkTopicEvAcorn;
extern u8 sEvSnowfesTopicTable[];
extern u8 sEvAcornTopicTable[];
extern u32 sAcornRewardItemKinds[];
extern Unk_020c7790 sTalkTopicEvGardeniing;
extern Unk_020c7790 sTalkTopicEvInsect;
extern Unk_020c7790 sTalkTopicEvFishing;
extern Unk_020c7790 sTalkTopicEvAdmire;
extern char sEvGardeniingTopicTable[];
extern char sTalkInputBuffer[];
extern Unk_0201f7d0_Data sTalkTopicEvFirework;
extern Unk_0201f7d0_Data sTalkTopicEvKaraoke;
extern Unk_0201f7d0_Fn data_020d7ed0;
extern Unk_0201f7d0_Fn data_020d7e50;
extern Unk_0201f7d0_Fn data_020d79c8;
extern Unk_0201f7d0_Fn data_020d7d28;
extern Unk_0201f7d0_Fn data_020d7d40;
extern Unk_0201f7d0_Fn data_020d7ca0;
extern Unk_0201f7d0_Fn data_020d7ab0;
extern Unk_0201f7d0_Fn data_020d7d60;
extern u8 sEvAdmireTopicTable[];
extern Unk_0201d2d0_Data sTalkTopicTsuMove2;
extern Unk_0201d2d0_Data sTalkTopicTsuMove1;
extern Unk_0201d2d0_Data sTalkTopicAiRun;
extern Unk_0201d2d0_Data sTalkTopicAiFlea;
extern Unk_0201d2d0_Data sTalkTopicAiAnger;
extern Unk_0201d2d0_Data sTalkTopicAiSad;
extern Unk_0201d2d0_Data sTalkTopicAiTire;
extern Unk_0201d2d0_Fn data_020d7f60;
extern Unk_0201d2d0_Fn data_020d7ed8;
extern u8 sEtcConnectTopicTable[];
extern u8 sEvKaraokeTopicTable[];
extern u8 sTsuTopicWeights[];
extern Unk_02020850_Fn data_020d7fa8;
extern Unk_02020850_Fn data_020d7b98;
extern Unk_02020850_Fn data_020d7f90;
extern Unk_02020850_Fn data_020d7f80;
extern Unk_02020850_Fn data_020d7b88;
extern Unk_02020850_Fn data_020d7b78;
extern Unk_02020850_Fn data_020d7f48;
extern Unk_02020850_Fn data_020d7b60;
extern Unk_02020850_Fn data_020d7f10;
extern Unk_02020850_Fn data_020d7b48;
extern Unk_02020850_Fn data_020d7b38;
extern Unk_02020850_Fn data_020d7b30;
extern Unk_02020850_Fn data_020d7ea8;
extern Unk_02020850_Fn data_020d7ea0;
extern u8 sTsuTopicWeightsWork[];
extern u8 gFieldSceneKind;
extern Unk_0201d2d0_Data sTalkTopicEvFmarket1;
extern Unk_0201d2d0_Data sTalkTopicTsuStar;
extern Unk_0201d2d0_Data sTalkTopicTsuDrama;
extern Unk_0201d2d0_Data sTalkTopicTsuEvent1;
extern u32 sTalkTopicEvArbeit;
extern Unk_0201d2d0_Data sTalkTopicTsuMemory;
extern u8 sTsuDramaMsgBlocks[];
extern u32 sTsuEvent2EventIds[];
extern u32 sTsuEvent1EventIds[];
extern u32 sTalkTopicTsuEvent2;
extern Unk_0201d2d0_Fn data_020d7bd0;
extern Unk_0201d2d0_Fn data_020d7fd8;
extern Unk_0201d2d0_Fn data_020d7c50;
extern Unk_0201d2d0_Fn data_020d7c48;
extern u8 gSavePlayers[];
extern u32 sTalkTopicsTsuHome[];
extern Unk_02021340_Pair sTalkTopicTsuItem;
extern Unk_02021340_Pair sTalkTopicTsuSpot;
extern Unk_02021340_Pair sTalkTopicTsuFriend;
extern Unk_02021340_Pair sTalkTopicTsuHappyroom;
extern Unk_02021340_Pair2 data_020d7ca8;
extern Unk_02021340_Pair2 data_020d7cb8;
extern u8 data_020d7860[2];
extern Unk_02021340_Map *gSceneBlockMap;
extern Unk_0201d2d0_Data sTalkTopicTsuAlways;
extern Unk_0201d2d0_Data sTalkTopicTsuGhint;
extern Unk_0201d2d0_Data sTalkTopicTsuDress;
extern Unk_0201d2d0_Data sTalkTopicTsuNoAct;
extern Unk_0201d2d0_Data sTalkTopicTsuSeAct;
extern Unk_0201d2d0_Data sTalkTopicTsuFlAct;
extern Unk_0201d2d0_Data sTalkTopicTsuFuAct;
extern Unk_0201d2d0_Data sTalkTopicTsuClAct;
extern Unk_0201d2d0_Data sTalkTopicTsuFoAct;
extern Unk_0201d2d0_Data sTalkTopicTsuFiAct;
extern Unk_0201d2d0_Data sTalkTopicTsuInAct;
extern Unk_0201d2d0_Data sTalkTopicTsuNoHint;
extern u8 data_020c7530[];
extern u16 gSaveTownId[];
extern Unk_0201d2d0_Data sTalkTopicTsuSeHint;
extern Unk_0201d2d0_Data sTalkTopicTsuFlHint;
extern Unk_0201d2d0_Data sTalkTopicTsuFuHint;
extern Unk_0201d2d0_Data sTalkTopicTsuClHint;
extern Unk_0201d2d0_Data sTalkTopicTsuFoHint;
extern Unk_0201d2d0_Data sTalkTopicTsuFiHint;
extern Unk_0201d2d0_Data sTalkTopicTsuInHint;
extern Unk_0201d2d0_Data sTalkTopicEtcCancel;
extern Unk_0201d2d0_Data sTalkTopicQ10Leave;
extern Unk_0201d2d0_Data sTalkTopicQ10Con;
extern Unk_0201d2d0_Data sTalkTopicQ10Reserved;
extern Unk_0201d2d0_Data sTalkTopicQError3;
extern Unk_0201d2d0_Data sTalkTopicQError2;
extern Unk_0201d2d0_Data sTalkTopicQError1;
extern Unk_0201d2d0_Data sTalkTopicQ10Reserve;
extern Unk_0201d2d0_Fn data_020d79d0;
extern Unk_0201d2d0_Fn data_020d7be8;
extern Unk_0201d2d0_Data sTalkTopicQ10Req;
extern Unk_0201d2d0_Data sTalkTopicQ12Full;
extern Unk_0201d2d0_Data sTalkTopicQ12FullC;
extern Unk_0201d2d0_Data sTalkTopicQ12FullB;
extern Unk_0201d2d0_Data sTalkTopicQ12End;
extern Unk_0201d2d0_Data sTalkTopicQItemB;
extern Unk_0201d2d0_Data sTalkTopicQ12Thanks;
extern Unk_0201d2d0_Data sTalkTopicQ12Report;
extern Unk_0201d2d0_Data sTalkTopicQ12Other;
extern Unk_0201d2d0_Fn data_020d7a30;
extern Unk_0201d2d0_Fn data_020d79e0;
extern Unk_0201d2d0_Fn data_020d7998;
extern Unk_0201d2d0_Fn data_020d8010;
extern Unk_0201d2d0_Fn data_020d7c38;
extern Unk_0201d2d0_Fn data_020d7c58;
extern Unk_0201d2d0_Fn data_020d7c70;
extern Unk_020238b0_Data sTalkTopicQCompDefault;
extern Unk_020238b0_Data sTalkTopicQReturnDefault;
extern Unk_020238b0_Data sTalkTopicQClearDefault;
extern Unk_020238b0_Data sTalkTopicQItem;
extern u32 sTalkKeysQComp[];
extern u32 sTalkKeysQReturn[];
extern Unk_020238b0_Data sTalkTopicsQEnd[];
extern u8 data_020c7a44[];
extern u8 data_020c7a50[];
extern u8 data_020c7a5c[];
extern Unk_020238b0_Fn data_020d7c78;
extern Unk_020238b0_Fn data_020d7cf8;
extern Unk_020238b0_Fn data_020d7da0;
extern Unk_020238b0_Fn data_020d7970;
extern Unk_0201d2d0_Data sTalkTopicQPreitemB;
extern Unk_0201d2d0_Data sTalkTopicQ01Pay;
extern Unk_0201d2d0_Data sTalkTopicQ02Pay;
extern Unk_0201d2d0_Data sTalkTopicQ01Revenge;
extern Unk_0201d2d0_Data sTalkTopicQ02Revenge;
extern Unk_0201d2d0_Data sTalkTopicQThanksDefault;
extern Unk_0201d2d0_Data sTalkTopicQ04Miss;
extern u8 data_020c7a20[];
extern u8 data_020c7a2c[];
extern u8 sTalkKeyQ03Thanks[];
extern u8 sTalkKeyQ04Thanks[];
extern u8 sTalkKeyQ05Thanks[];
extern u8 sTalkKeyQ05Miss[];
extern Unk_0201d2d0_Fn data_020d7e88;
extern Unk_0201d2d0_Fn data_020d7cd0;
extern Unk_0201d2d0_Fn data_020d7b70;
extern Unk_0201d2d0_Fn data_020d7a60;
extern Unk_0201d2d0_Fn data_020d7d48;
extern Unk_0201d2d0_Fn data_020d7a58;
extern Unk_0201d2d0_Fn data_020d79c0;
extern Unk_0201d2d0_Fn data_020d7ba8;
extern Unk_0201d2d0_Fn data_020d7ac0;
extern Unk_0201d2d0_Data sTalkTopicQ01Nlose;
extern Unk_0201d2d0_Data sTalkTopicQ02Nlose;
extern Unk_0201d2d0_Data sTalkTopicQ01Nwin;
extern Unk_0201d2d0_Data sTalkTopicQ02Nwin;
extern Unk_0201d2d0_Data sTalkTopicQ01Pdraw;
extern Unk_0201d2d0_Data sTalkTopicQ02Pdraw;
extern Unk_0201d2d0_Data sTalkTopicQ01Plose;
extern Unk_0201d2d0_Data sTalkTopicQ02Plose;
extern Unk_0201d2d0_Data sTalkTopicQ01Pwin2;
extern Unk_0201d2d0_Data sTalkTopicQ02Pwin2;
extern Unk_0201d2d0_Data sTalkTopicQ01Pwin;
extern Unk_0201d2d0_Data sTalkTopicQ02Pwin;
extern Unk_0201d2d0_Data sTalkTopicQ05TalkDefault;
extern u32 sTalkKeysQ05Talk[];
extern Unk_0201d2d0_Fn data_020d7d78;
extern Unk_0201d2d0_Fn data_020d7d10;
extern Unk_0201d2d0_Fn data_020d7a90;
extern Unk_0201d2d0_Fn data_020d7b20;
extern Unk_0201d2d0_Fn data_020d7a88;
extern Unk_0201d2d0_Fn data_020d7e40;
extern Unk_0201d2d0_Fn data_020d7a70;
extern Unk_0201d2d0_Fn data_020d7e28;
extern Unk_0201d2d0_Fn data_020d7e30;
extern Unk_020254ec_Data sTalkTopicQConDefault;
extern Unk_020254ec_Data sTalkTopicQNoB;
extern Unk_020254ec_Data sTalkTopicQStart;
extern u32 *sTalkKeysQCon[];
extern Unk_020254ec_Fn data_020d7eb0;
extern Unk_020254ec_Fn data_020d7ec0;
extern Unk_020254ec_Fn data_020d7ec8;
extern Unk_02025ed4_Fn sRequestInsectPickers[];
extern Unk_0201d2d0_Data data_020d7b40;
extern u32 *sTalkKeysQReq[];
extern Unk_0201d2d0_Data sTalkTopicQ06End;
extern Unk_0201d2d0_Data sTalkTopicQ07End;
extern Unk_0201d2d0_Data sTalkTopicQItemC;
extern Unk_0201d2d0_Data sTalkTopicQ06Bad;
extern Unk_0201d2d0_Data sTalkTopicQ06Normal;
extern Unk_0201d2d0_Data sTalkTopicQ06Good;
extern Unk_0201d2d0_Data sTalkTopicQPreitem;
extern u8 sRequestTopicsB[];
extern Unk_020267b8_Tbl sPresentOpinionTopics;
extern u8 sRequestTopicsA[];
extern Unk_0201d2d0_Data sTalkTopicQ06Report;
extern Unk_0201d2d0_Data sTalkTopicQ07Report;
extern Unk_0201d2d0_Data sTalkTopicQ06Con;
extern Unk_0201d2d0_Data sTalkTopicQ07Con;
extern Unk_0201d2d0_Data sTalkTopicQ06Fin;
extern Unk_0201d2d0_Data sTalkTopicQ07Fin;
extern Unk_0201d2d0_Data sTalkTopicQ07Show;
extern Unk_0201d2d0_Data sTalkTopicQ07Read;
extern Unk_0201d2d0_Data sTalkTopicQ07Open2;
extern Unk_0201d2d0_Data sTalkTopicQ06Open2;
extern Unk_0201d2d0_Data sTalkTopicQ06Open3;
extern Unk_0201d2d0_Data sTalkTopicQ06Open1;
extern Unk_0201d2d0_Fn data_020d7fa0;
extern Unk_0201d2d0_Fn data_020d7fc8;
extern Unk_0201d2d0_Fn data_020d7bc0;
extern Unk_0201d2d0_Fn data_020d7fe0;
extern Unk_0201d2d0_Fn data_020d7fe8;
extern Unk_0201d2d0_Fn data_020d7ff0;
extern Unk_0201d2d0_Fn data_020d7bd8;
extern Unk_0201d2d0_Fn data_020d8008;
extern Unk_0201d2d0_Data sTalkTopicQ06Get;
extern Unk_0201d2d0_Data sTalkTopicQ07Joy;
extern Unk_0201d2d0_Data sTalkTopicQIcancel;
extern Unk_0201d2d0_Data sTalkTopicQTimeover;
extern Unk_0201d2d0_Data sTalkTopicQ06Open;
extern Unk_0201d2d0_Data sTalkTopicQ07Open;
extern Unk_0201d2d0_Data sTalkTopicQ06Lost;
extern Unk_0201d2d0_Data sTalkTopicQ07Scold2;
extern Unk_0201d2d0_Data sTalkTopicQ06Payback;
extern Unk_0201d2d0_Data sTalkTopicQ07Scold;
extern Unk_0201d2d0_Fn data_020d8018;
extern Unk_0201d2d0_Fn data_020d7988;
extern Unk_0201d2d0_Fn data_020d7908;
extern Unk_0201d2d0_Fn data_020d7948;
extern Unk_0201d2d0_Fn data_020d7940;
extern Unk_0201d2d0_Fn data_020d7930;
extern Unk_0201d2d0_Fn data_020d7c10;
extern Unk_0201d2d0_Fn data_020d7a50;
extern Unk_02027a34_Data sTalkTopicQ06Over;
extern Unk_02027a34_Data sTalkTopicQ07Over;
extern Unk_02027a34_Data sTalkTopicQYes;
extern Unk_02027a34_Data sTalkTopicQ07Mailgo;
extern Unk_02027a34_Data sTalkTopicQFull;
extern Unk_02027a34_Data sTalkTopicQNo;
extern Unk_02027a34_Data sTalkTopicQTime;
extern Unk_02027a34_Data sTalkTopicQ06Req;
extern Unk_02027a34_Data sTalkTopicQ07Req;
extern Unk_02027a34_Fn data_020d7aa0;
extern Unk_02027a34_Fn data_020d7a48;
extern Unk_02027a34_Fn data_020d7c28;
extern Unk_02027a34_Fn data_020d7c90;
extern Unk_02027a34_Fn data_020d79b8;
extern Unk_02027a34_Fn data_020d7c60;
extern Unk_02027a34_Fn data_020d8000;
extern Unk_02027a34_Fn data_020d7ce8;
extern Unk_02027a34_Fn data_020d7d00;
extern Unk_02027a34_Fn data_020d7d08;
extern Unk_02027a34_Fn data_020d7cd8;
extern u8 sDeliveryMinutes[];
extern Unk_0201d2d0_Fn data_020d79f8;
extern Unk_0201d2d0_Fn data_020d78f8;
extern Unk_0201d2d0_Fn data_020d78f0;
extern Unk_0201d2d0_Fn data_020d7938;
extern Unk_0201d2d0_Fn data_020d7928;
extern Unk_0201d2d0_Fn data_020d7980;
extern Unk_0201d2d0_Fn data_020d7900;
extern Unk_0201d2d0_Fn data_020d7960;
extern Unk_0201d2d0_Fn data_020d7950;
extern Unk_0201d2d0_Fn data_020d79d8;
extern Unk_0201d2d0_Fn data_020d7f78;
extern Unk_0201d2d0_Data sTalkTopicEtcConnect;
extern u32 sTalkTopicApNickn;
extern u8 data_020c74f0[];
extern u8 data_020c74f4[];
extern Unk_0201d2d0_Fn data_020d7fd0;
extern Unk_0201d2d0_Fn data_020d7a68;
extern Unk_0201d2d0_Fn data_020d7a98;
extern Unk_0201d2d0_Fn data_020d7f18;
extern Unk_0201d2d0_Fn data_020d7cc8;
extern Unk_0201d2d0_Fn data_020d7ab8;
extern u8 sNicknamePatternBases[];
extern u32 sApTopicWeights[];
extern Unk_0201d2d0_Data sTalkTopicApHabit;
extern Unk_0201d2d0_Data sTalkTopicApSell;
extern Unk_0201d2d0_Data sTalkTopicApTrade;
extern Unk_0201d2d0_Fn data_020d7ad8;
extern Unk_0201d2d0_Fn data_020d7db0;
extern Unk_0201d2d0_Fn data_020d7da8;
extern Unk_0201d2d0_Fn data_020d7ac8;
extern Unk_0202a750_Fn data_020d7a08;
extern Unk_0202a750_Fn data_020d79e8;
extern Unk_0202a750_Fn data_020d7918;
extern Unk_0202a750_Fn data_020d7a18;
extern Unk_0202a750_Fn data_020d7920;
extern Unk_0202a750_Fn data_020d7910;
extern Unk_0202a750_Fn data_020d79f0;
extern Unk_0202a750_Fn data_020d7be0;
extern Unk_0202a750_Fn data_020d7d98;
extern Unk_0201d2d0_Fn data_020d7ee8;
extern Unk_0201d2d0_Fn data_020d7cb0;
extern Unk_0201d2d0_Fn data_020d7c98;
extern Unk_0201d2d0_Fn data_020d7d30;
extern Unk_0201d2d0_Fn data_020d7ae0;
extern Unk_0201d2d0_Data sTalkTopicApBuy;
extern Unk_0201d2d0_Data sTalkTopicApPresent2;
extern Unk_0201d2d0_Data sTalkTopicApPresent1;
extern Unk_0201d2d0_Data sTalkTopicApMail;
extern Unk_0201d2d0_Data sTalkTopicApItem;
extern Unk_0201d2d0_Data data_020d7a80;
extern u32 sTalkKeys3p[];
extern u32 sApPocketItemKinds[];
extern u8 data_020c7518[];
extern u8 data_020c7508[];
extern u8 sApSubTopics[];
extern u8 sConnectTopic[];
extern Unk_0201d2d0_Data sTalkTopicAiMfirst;
extern Unk_0201d2d0_Data sTalkTopicAi30days;
extern Unk_0201d2d0_Data sTalkTopicAi7days;
extern Unk_0201d2d0_Data sTalkTopicAiPassword;
extern Unk_0201d2d0_Data sTalkTopicAiFortune;
extern Unk_0201d2d0_Data sTalkTopicAiShop1;
extern Unk_0201d2d0_Data sTalkTopicAiShop2;
extern Unk_0201d2d0_Data sTalkTopicAiShop3;
extern Unk_0201d2d0_Data sTalkTopicAiIndoor;
extern Unk_0201d2d0_Data sTalkTopicAiRain1;
extern Unk_0201d2d0_Data sTalkTopicAiSnow1;
extern Unk_0201d2d0_Data sTalkTopicAiToday1;
extern Unk_0201d2d0_Data sTalkTopicAiBoom;
extern Unk_0201d2d0_Data sTalkTopicAiPersis;
extern Unk_0201d2d0_Data sTalkTopicAiJoy;
extern Unk_0201d2d0_Data sTalkTopicAiRain2;
extern Unk_0201d2d0_Data sTalkTopicAiSnow2;
extern Unk_0201d2d0_Data sTalkTopicAiToday2;
extern Unk_0201d2d0_Data sTalkTopicAiBee;
extern Unk_0201d2d0_Data sTalkTopicAiPoison;
extern Unk_0201d2d0_Data sTalkTopicAiForeign;
extern Unk_0201d2d0_Data sTalkTopicsAiFirst[];
extern s8 sDangerousInsects[];
extern u8 data_021ed2c0[];
extern s8 sCatchPlanStageMinutes[];
extern u8 sFishRarityWeights[];
extern u8 sFishRarityWork[];
extern u8 sFishSlotFlags[];
extern u8 sFishRowFlags[];
extern u8 sInsectRarityWeights[];
extern u8 sInsectRarityWork[];
extern u8 sInsectSlotFlags[];
extern u8 sInsectHabitatKinds[];
extern u32 sTalkClothingItemSpecs[];
extern u32 sTalkErrandItemSpecs[];
extern u32 sTalkTradeItemLists[];
extern Unk_020d8938_Tbl sTalkBeginTopics[];
extern u32 sVillagerClothMaterialNames;
extern u32 data_020c6cf0;
extern u8 sVillagerTexturePathBuf[];
extern u8 sVillagerModelPathBuf[];
extern s32 sSpNpcWalkAnimSpeedScale;
}

static inline BOOL Unk_020d8938_IsSet(u16 *p)
{
    return *p != 0xfff1;
}

static inline BOOL Unk_0201f170_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02020b38_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline s32 Unk_02021340_GetZ(Unk_02021340_Pos *p) { return p->z; }

static inline BOOL Unk_02021ef8_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_02021d50_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_020238b0_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_020242d8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02024a90_Ne(Unk_0201d2d0_Id *p) {
    return p->unk_00 != 0xfff1;
}

static inline BOOL Unk_02024df4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02025090_Ne(u16 *p) {
    return *p != 0xfff1;
}

static inline BOOL R1(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
    return r;
}

static inline BOOL R2(volatile u16 *p) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= 0x450c && a <= 0x45db) r = TRUE;
    return r;
}

static inline BOOL Unk_02026214_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02026ab0_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_020270ec_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0202849c_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02028a48_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0202849c_F(BOOL r4) {
    return gFieldSceneKind == 0 ? TRUE : r4;
}

static inline BOOL Unk_020295d0_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02029234_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_020298c8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0202be64_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0202c094_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_0202cb34_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0202cb34_Check(u16 *p) {
    BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v <= 5) f1 = TRUE;
    if (!f1) {
        if (v < 6 || v > 0xb) f2 = FALSE;
    }
    if (!f2) {
        if (v < 0xc || v > 0x11) f3 = FALSE;
    }
    if (!f3) {
        if ((v < 0x12 || v > 0x19) && v != 0x1c) f4 = FALSE;
    }
    if (!f4) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) f5 = FALSE;
    }
    if (!f5) {
        if (v != 0x1a) f6 = FALSE;
    }
    if (!f6) {
        if (v != 0xa4) f7 = FALSE;
    }
    if (!f7) {
        if (v != 0x1d) f8 = FALSE;
    }
    return f8;
}

static inline u8 *Unk_0202cb34_Cell(Unk_0202cb34_Grid *g, s32 x, s32 y) {
    if ((u32)x < (u32)g->size.x && (u32)y < (u32)g->size.y && g->blocks != NULL) {
        return g->blocks + (y * g->size.x + x) * 0x28;
    }
    return NULL;
}

static inline void Unk_0202cb34_GetSize(Unk_0202cb34_Grid *g, Unk_0202cb34_Size *out) {
    Unk_0202cb34_Size *ps = &g->size;
    out->x = ps->x;
    out->y = ps->y;
}

static inline BOOL Unk_0202d664_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0202daf8_InRange(u16 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0202e318_IsOne(u8 v) {
    if (v == 1) {
        return TRUE;
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void _ZN12VillagerMood18updateMood3EffectsEP12VillagerTalk(void);
void _ZN12VillagerMood17beginMood3EffectsEP12VillagerTalk(void);
void _ZN12VillagerMood18updateMood2EffectsEP12VillagerTalk(void);
void _ZN12VillagerMood17beginMood2EffectsEP12VillagerTalk(void);
void _ZN12VillagerMood18updateMood1EffectsEP12VillagerTalk(void);
void _ZN12VillagerMood17beginMood1EffectsEP12VillagerTalk(void);
void _ZN18VillagerTalkTopics13endEtcPushHitEv(void);
void _ZN18VillagerTalkTopics9endAiFallEv(void);
void _ZN18VillagerTalkTopics18giveEvBirthPresentEv(void);
void _ZN18VillagerTalkTopics15stopBirthdayBgmEv(void);
void _ZN18VillagerTalkTopics15playBirthdayBgmEv(void);
void _ZN18VillagerTalkTopics17updateEvBirthTurnEv(void);
void _ZN18VillagerTalkTopics13selectTsuStarEv(void);
void _ZN18VillagerTalkTopics14selectTsuDramaEv(void);
void _ZN18VillagerTalkTopics14selectTsuEventEv(void);
void _ZN18VillagerTalkTopics20findTsuEvent2MessageEPhPiS0_Pj(void);
void _ZN18VillagerTalkTopics20findTsuEvent1MessageEPhPiS0_Pj(void);
void _ZN18VillagerTalkTopics15selectTsuMemoryEv(void);
void _ZN18VillagerTalkTopics15selectTsuAlwaysEv(void);
void _ZN18VillagerTalkTopics14selectTsuDressEv(void);
void _ZN18VillagerTalkTopics14selectTsuGhintEv(void);
void _ZN18VillagerTalkTopics17selectTsuHobbyActEv(void);
void _ZN18VillagerTalkTopics14selectTsuNoActEv(void);
void _ZN18VillagerTalkTopics14selectTsuSeActEv(void);
void _ZN18VillagerTalkTopics14selectTsuFlActEv(void);
void _ZN18VillagerTalkTopics14selectTsuFuActEv(void);
void _ZN18VillagerTalkTopics14selectTsuClActEv(void);
void _ZN18VillagerTalkTopics14selectTsuFoActEv(void);
void _ZN18VillagerTalkTopics14selectTsuFiActEv(void);
void _ZN18VillagerTalkTopics14selectTsuInActEv(void);
void _ZN18VillagerTalkTopics18selectTsuHobbyHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuNoHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuSeHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuFlHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuFuHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuClHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuFoHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuFiHintEv(void);
void _ZN18VillagerTalkTopics15selectTsuInHintEv(void);
void _ZN18VillagerTalkTopics16storeReservationEv(void);
void _ZN18VillagerTalkTopics16checkReserveTimeEv(void);
void _ZN18VillagerTalkTopics14onQ12FullCloseEv(void);
void _ZN18VillagerTalkTopics13onQ12EndCloseEv(void);
void _ZN18VillagerTalkTopics10gotoQ12EndEv(void);
void _ZN18VillagerTalkTopics15gotoEvArbeitEndEv(void);
void _ZN18VillagerTalkTopics18onArbeitItemPickedEv(void);
void _ZN18VillagerTalkTopics16gotoQRewardTopicEv(void);
void _ZN18VillagerTalkTopics16giveBackHeldItemEv(void);
void _ZN18VillagerTalkTopics16checkRequestItemEv(void);
void _ZN18VillagerTalkTopics19onRequestItemPickedEv(void);
void _ZN18VillagerTalkTopics18advanceRequestStepEv(void);
void _ZN18VillagerTalkTopics17gotoQEndOrRevengeEv(void);
void _ZN18VillagerTalkTopics8gotoQPayEv(void);
void _ZN18VillagerTalkTopics10gotoQNloseEv(void);
void _ZN18VillagerTalkTopics18onNloseCatchPickedEv(void);
void _ZN18VillagerTalkTopics18cancelRequestChainEv(void);
void _ZN18VillagerTalkTopics10gotoQPwin2Ev(void);
void _ZN18VillagerTalkTopics17compareCatchPriceEv(void);
void _ZN18VillagerTalkTopics13onCatchPickedEv(void);
void _ZN18VillagerTalkTopics22onPresentOpinionChoiceEii(void);
void _ZN18VillagerTalkTopics11closeLetterEv(void);
void _ZN18VillagerTalkTopics15gotoDeliveryFinEv(void);
void _ZN18VillagerTalkTopics18finishOpenedLetterEv(void);
void _ZN18VillagerTalkTopics19keepDislikedPresentEv(void);
void _ZN18VillagerTalkTopics12judgePresentEv(void);
void _ZN18VillagerTalkTopics20onDeliveryItemPickedEv(void);
void _ZN18VillagerTalkTopics13func_02027424Ev(void);
void _ZN18VillagerTalkTopics20finishOpenedDeliveryEv(void);
void _ZN18VillagerTalkTopics23continueLateLetterShownEv(void);
void _ZN18VillagerTalkTopics25tryAddActiveRequestChoiceEPvS0_(void);
void _ZN18VillagerTalkTopics29tryAddDeliveryRecipientChoiceEii(void);
void _ZN18VillagerTalkTopics20tryAddHandOverChoiceEii(void);
void _ZN18VillagerTalkTopics17onNicknameEnteredEv(void);
void _ZN18VillagerTalkTopics14onHabitEnteredEv(void);
void _ZN18VillagerTalkTopics12selectApSellEv(void);
void _ZN18VillagerTalkTopics13selectApTradeEv(void);
void _ZN18VillagerTalkTopics11selectApBuyEv(void);
void _ZN18VillagerTalkTopics16selectApPresent2Ev(void);
void _ZN18VillagerTalkTopics16selectApPresent1Ev(void);
void _ZN18VillagerTalkTopics12selectApMailEv(void);
void _ZN18VillagerTalkTopics13selectApNicknEv(void);
void _ZN18VillagerTalkTopics12selectApItemEv(void);
void _ZN18VillagerTalkTopics13selectApHabitEv(void);
void _ZN25VillagerTalkHolidayTopics17updateEvBirthMoveEv(void);
void _ZN25VillagerTalkHolidayTopics16startEvBirthMoveEv(void);
void _ZN23VillagerTalkAcornTopics21continueAcornReceivedEv(void);
void _ZN23VillagerTalkAcornTopics13onAcornPickedEv(void);
void _ZN23VillagerTalkHobbyTopics11endEvInsectEv(void);
void _ZN23VillagerTalkHobbyTopics12endEvFishingEv(void);
void _ZN23VillagerTalkHobbyTopics22onEvAdmireWordEnteredBEv(void);
void _ZN25VillagerTalkKaraokeTopics21onEvAdmireWordEnteredEv(void);
void _ZN25VillagerTalkKaraokeTopics13endEvFireworkEv(void);
void _ZN25VillagerTalkKaraokeTopics16endEvKaraokeMsg8Ev(void);
void _ZN25VillagerTalkKaraokeTopics23continueEvKaraokeActionEv(void);
void _ZN25VillagerTalkKaraokeTopics19waitEvKaraokeActionEv(void);
void _ZN23VillagerTalkRumorTopics26pickMemoryWithReceivedItemEPPvi(void);
void _ZN23VillagerTalkRumorTopics13pickMemoryAnyEPPvi(void);
void _ZN23VillagerTalkRumorTopics18pickMemoryWithTimeEPPvi(void);
void _ZN23VillagerTalkRumorTopics13func_02021448EPPvi(void);
void _ZN23VillagerTalkRumorTopics24pickMemoryWithComplimentEPPvi(void);
void _ZN23VillagerTalkRumorTopics13func_02021564EPPvi(void);
void _ZN23VillagerTalkRumorTopics21pickMemoryDislikedOldEPPvi(void);
void _ZN23VillagerTalkRumorTopics18pickMemoryLikedOldEPPvi(void);
void _ZN23VillagerTalkRumorTopics13selectTsuItemEv(void);
void _ZN23VillagerTalkRumorTopics13selectTsuHomeEv(void);
void _ZN23VillagerTalkRumorTopics13selectTsuSpotEv(void);
void _ZN23VillagerTalkRumorTopics15selectTsuFriendEv(void);
void _ZN23VillagerTalkRumorTopics18selectTsuHappyroomEv(void);
void _ZN29VillagerTalkRequestItemTopics12clearRequestEv(void);
void _ZN29VillagerTalkRequestItemTopics18finishRequestChainEv(void);
void _ZN29VillagerTalkRequestItemTopics15gotoQClearOrEndEv(void);
void _ZN30VillagerTalkRequestStartTopics23registerRequestDeclinedEv(void);
void _ZN30VillagerTalkRequestStartTopics23registerRequestDeferredEv(void);
void _ZN30VillagerTalkRequestReplyTopics19setDeliveryDeadlineEv(void);
void _ZN30VillagerTalkRequestReplyTopics13cancelRequestEv(void);
void _ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj(void);
void _ZN30VillagerTalkRequestReplyTopics24tryAddSickVillagerChoiceEPv(void);
void _ZN30VillagerTalkRequestReplyTopics18tryOfferNewRequestEPvS0_(void);
void _ZN12VillagerTalk12runCustomFn4Ev(void);
void _ZN12VillagerTalk12runCustomFn3Ev(void);
void _ZN12VillagerTalk12runCustomFn2Ev(void);
void _ZN12VillagerTalk12runCustomFn1Ev(void);
void _ZN12VillagerTalk12runCustomFn0Ev(void);
void _ZN12VillagerTalk21setConstellationSlotsEv(void);
void _ZN12VillagerTalk21attrOpenBirthdayEntryEv(void);
void _ZN12VillagerTalk14setHiraganaOffEv(void);
void _ZN12VillagerTalk13setHiraganaOnEv(void);
void _ZN12VillagerTalk16giveItemToPlayerEv(void);
void _ZN12VillagerTalk13showMoneyItemEv(void);
void _ZN12VillagerTalk16sellItemToPlayerEv(void);
void _ZN12VillagerTalk12receiveItemBEv(void);
void _ZN12VillagerTalk18swapItemWithPlayerEv(void);
void _ZN12VillagerTalk11receiveItemEv(void);
void _ZN12VillagerTalk17buyItemFromPlayerEv(void);
void _ZN12VillagerTalk18attrPlayMemoryTuneEv(void);
void _ZN12VillagerTalk14attrShowLetterEv(void);
void _ZN12VillagerTalk12attrGiveItemEv(void);
void _ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv(void);
void VillagerRequest_PickFossilOfGroup(void);
void VillagerRequest_PickRandomFossil(void);
void VillagerRequest_PickShirtOfGroupForPlayer(void);
void VillagerRequest_PickShirtOfGroup(void);
void VillagerRequest_PickShirtOtherGroup(void);
void VillagerRequest_PickFishStep4(void);
void VillagerRequest_PickFishStep3(void);
void VillagerRequest_PickFishStep1(void);
void VillagerRequest_PickFishStep0(void);
void VillagerRequest_PickInsectStep4(void);
void VillagerRequest_PickInsectStep3(void);
void VillagerRequest_PickInsectStep1(void);
void VillagerRequest_PickInsectStep0(void);
extern const u8 data_020c74f0[2];
extern const u8 data_020c74f4[2];
extern const s8 sDangerousInsects[2];
extern const u8 sSmallTalkChoiceMsgRange[2];
extern const u8 sLeaveChoiceMsgRange[2];
extern const u8 sInsectHabitatKinds[4];
extern const u8 data_020c7508[4];
extern const u8 sTsuDramaMsgBlocks[4];
extern const s8 sCatchPlanStageMinutes[5];
extern const u8 data_020c7518[5];
extern const u8 sInsectRarityWeights[5];
extern const u8 sFishRarityWeights[5];
extern const u8 data_020c7530[6];
extern const u8 sNicknamePatternBases[6];
extern const void *const sTalkTopicAiSad[2];
extern const void *const sTalkTopicQTimeover[2];
extern const void *const sTalkTopicQIcancel[2];
extern const void *const sTalkTopicQ07Scold2[2];
extern const void *const sTalkTopicQ06Lost[2];
extern const void *const sTalkTopicQ06Open[2];
extern const void *const sTalkTopicApBuy[2];
extern const void *const sTalkTopicQ12Full[2];
extern const void *const sTalkTopicQ07Scold[2];
extern const void *const sTalkTopicQ10Req[2];
extern const void *const sTalkTopicQ10Reserve[2];
extern const void *const sTalkTopicApMail[2];
extern const void *const sTalkTopicAi7days[2];
extern const void *const sTalkTopicQ06Over[2];
extern const void *const sTalkTopicQ12FullB[2];
extern const void *const sTalkTopicApPresent1[2];
extern const void *const sTalkTopicAiBee[2];
extern const void *const sTalkTopicAiFall[2];
extern const void *const sTalkTopicAiBoom[2];
extern const void *const sTalkTopicTsuSeHint[2];
extern const void *const sTalkTopicTsuFlHint[2];
extern const void *const sTalkTopicAiSnow1[2];
extern const void *const sTalkTopicTsuFiHint[2];
extern const void *const sTalkTopicEtcCancel[2];
extern const void *const sTalkTopicApTrade[2];
extern const void *const sTalkTopicAiAnger[2];
extern const void *const sTalkTopicQ07Open[2];
extern const void *const sTalkTopicTsuEvent2[2];
extern const void *const sTalkTopicTsuEvent1[2];
extern const void *const sTalkTopicEvFishing[2];
extern const void *const sTalkTopicTsuFuAct[2];
extern const void *const sTalkTopicQ07Over[2];
extern const void *const sTalkTopicAiIndoor[2];
extern const void *const sTalkTopicAiShop3[2];
extern const void *const sTalkTopicTsuMove1[2];
extern const void *const sTalkTopicQ07Mailgo[2];
extern const void *const sTalkTopicQ01Plose[2];
extern const void *const sTalkTopicQ12FullC[2];
extern const void *const sTalkTopicEvKaraoke[2];
extern const void *const sTalkTopicQFull[2];
extern const void *const sTalkTopicQ02Nlose[2];
extern const void *const sTalkTopicAiPassword[2];
extern const void *const sTalkTopicQ01Nlose[2];
extern const void *const sTalkTopicQ02Pdraw[2];
extern const void *const sTalkTopicQ01Pwin[2];
extern const void *const sTalkTopicQ02Pwin2[2];
extern const void *const sTalkTopicEtcConnect[2];
extern const void *const sTalkTopicTsuNoAct[2];
extern const void *const sTalkTopicQ02Pay[2];
extern const void *const sTalkTopicTsuFlAct[2];
extern const void *const sTalkTopicQ01Pay[2];
extern const void *const sTalkTopicApHabit[2];
extern const void *const sTalkTopicApNickn[2];
extern const void *const sTalkTopicAiRun[2];
extern const void *const sTalkTopicQItem[2];
extern const void *const sTalkTopicApItem[2];
extern const void *const sTalkTopicAiPoison[2];
extern const void *const sTalkTopicTsuInAct[2];
extern const void *const sTalkTopicEvCountdown[2];
extern const void *const sTalkTopicAiJoy[2];
extern const void *const sTalkTopicQPreitem[2];
extern const void *const sTalkTopicTsuFuHint[2];
extern const void *const sTalkTopicAiToday1[2];
extern const void *const sTalkTopicEvFmarket1[2];
extern const void *const sTalkTopicTsuInHint[2];
extern const void *const sTalkTopicAiPersis[2];
extern const void *const sTalkTopicTsuStar[2];
extern const void *const sTalkTopicEvAcorn[2];
extern const void *const sTalkTopicQ06Open1[2];
extern const void *const sTalkTopicQError3[2];
extern const void *const sTalkTopicTsuDrama[2];
extern const void *const sTalkTopicQError2[2];
extern const void *const sTalkTopicAiRain2[2];
extern const void *const sTalkTopicQError1[2];
extern const void *const sTalkTopicEvGardeniing[2];
extern const void *const sTalkTopicEtcPush[2];
extern const void *const sTalkTopicApSell[2];
extern const void *const sTalkTopicEvInsect[2];
extern const void *const sTalkTopicQ12End[2];
extern const void *const sTalkTopicQItemB[2];
extern const void *const sTalkTopicQ12Thanks[2];
extern const void *const sTalkTopicQ07Req[2];
extern const void *const sTalkTopicQ12Report[2];
extern const void *const sTalkTopicEvArbeit[2];
extern const void *const sTalkTopicQTime[2];
extern const void *const sTalkTopicQ06Req[2];
extern const void *const sTalkTopicAiShop1[2];
extern const void *const sTalkTopicQNo[2];
extern const void *const sTalkTopicQYes[2];
extern const void *const sTalkTopicTsuSpot[2];
extern const void *const sTalkTopicAiToday2[2];
extern const void *const sTalkTopicTsuItem[2];
extern const void *const sTalkTopicQPreitemB[2];
extern const void *const sTalkTopicEvFirework[2];
extern const void *const sTalkTopicAiFortune[2];
extern const void *const sTalkTopicQ02Plose[2];
extern const void *const sTalkTopicTsuGhint[2];
extern const void *const sTalkTopicAiTire[2];
extern const void *const sTalkTopicApPresent2[2];
extern const void *const sTalkTopicTsuMemory[2];
extern const void *const sTalkTopicAiShop2[2];
extern const void *const sTalkTopicTsuFriend[2];
extern const void *const sTalkTopicAiFlea[2];
extern const void *const sTalkTopicTsuHappyroom[2];
extern const void *const sTalkTopicTsuAlways[2];
extern const void *const sTalkTopicTsuDress[2];
extern const void *const sTalkTopicQ02Nwin[2];
extern const void *const sTalkTopicQ12Other[2];
extern const void *const sTalkTopicQ01Pdraw[2];
extern const void *const sTalkTopicTsuMove2[2];
extern const void *const sTalkTopicEvAdmire[2];
extern const void *const sTalkTopicQ02Pwin[2];
extern const void *const sTalkTopicAiRain1[2];
extern const void *const sTalkTopicAiForeign[2];
extern const void *const sTalkTopicTsuSeAct[2];
extern const void *const sTalkTopicQ01Revenge[2];
extern const void *const sTalkTopicAi30days[2];
extern const void *const sTalkTopicEvBirth[2];
extern const void *const sTalkTopicQ02Revenge[2];
extern const void *const sTalkTopicTsuClAct[2];
extern const void *const sTalkTopicTsuFoAct[2];
extern const void *const sTalkTopicQ01Nwin[2];
extern const void *const sTalkTopicTsuFiAct[2];
extern const void *const sTalkTopicQNoB[2];
extern const void *const sTalkTopicQStart[2];
extern const void *const sTalkTopicQ01Pwin2[2];
extern const void *const sTalkTopicEvSnowfes[2];
extern const void *const sTalkTopicEtcHit[2];
extern const void *const sTalkTopicTsuNoHint[2];
extern const void *const sTalkTopicQ07End[2];
extern const void *const sTalkTopicAiSnow2[2];
extern const void *const sTalkTopicQ06End[2];
extern const void *const sTalkTopicQItemC[2];
extern const void *const sTalkTopicQ06Bad[2];
extern const void *const sTalkTopicQ06Normal[2];
extern const void *const sTalkTopicQ06Good[2];
extern const void *const sTalkTopicTsuClHint[2];
extern const void *const sTalkTopicQ07Report[2];
extern const void *const sTalkTopicTsuFoHint[2];
extern const void *const sTalkTopicQ06Report[2];
extern const void *const sTalkTopicQ07Con[2];
extern const void *const sTalkTopicAiMfirst[2];
extern const void *const sTalkTopicQ06Con[2];
extern const void *const sTalkTopicQ07Fin[2];
extern const void *const sTalkTopicQ06Fin[2];
extern const void *const sTalkTopicQ07Show[2];
extern const void *const sTalkTopicQ07Read[2];
extern const void *const sTalkTopicQ10Leave[2];
extern const void *const sTalkTopicQ07Open2[2];
extern const void *const sTalkTopicQ10Con[2];
extern const void *const sTalkTopicQ06Open2[2];
extern const void *const sTalkTopicQ06Open3[2];
extern const void *const sTalkTopicQ10Reserved[2];
extern const void *const sTalkTopicQ06Payback[2];
extern const void *const sTalkTopicQ07Joy[2];
extern const void *const sTalkTopicQ06Get[2];
extern const u8 data_020c7a20[9];
extern const u8 data_020c7a2c[9];
extern const u32 sApTopicWeights[3];
extern const u8 data_020c7a44[12];
extern const u8 data_020c7a50[12];
extern const u8 data_020c7a5c[12];
extern const u32 sAcornRewardItemKinds[3];
extern const u8 sTsuTopicWeights[14];
extern const u32 sTalkTradeItemLists[4];
extern const void *const sTalkTopicsTsuHome[4];
extern const u32 sMoodAnimIds[5];
extern const u32 sMoodAnimNextIds[5];
extern const void *const sRequestInsectPickers[5];
extern const void *const sRequestFishPickers[5];
extern const void *const sRequestFossilPickers[5];
extern const u32 sApPocketItemKinds[5];
extern const u32 sTalkErrandItemSpecs[6];
extern const void *const sTalkTopicsAiFirst[6];
extern const void *const sRequestShirtPickers[7];
extern const u32 sTalkClothingItemSpecs[8];
extern const void *const sTalkTopicsQEnd[10];
extern const u32 sTsuEvent2EventIds[12];
extern const u32 sTsuEvent1EventIds[14];
extern u8 data_020d7860[2];
extern char sVillagerClothMaterialName[2];
extern u8 sDeliveryMinutes[3];
extern void * sVillagerClothMaterialNames[1];
extern char sTalkKeyQNo[5];
extern char sTalkKey3pKo[6];
extern char sTalkKeyQYes[6];
extern char sTalkKey3pFu[6];
extern char sTalkKey3pHa[6];
extern char sTalkKey3pBo[6];
extern char sTalkKey3pTa[6];
extern char sTalkKey3pGe[6];
extern char sTalkKeyQFull[7];
extern char sTalkKeyQTime[7];
extern char sTalkKeyAiBee[7];
extern char sTalkKeyAiRun[7];
extern char sTalkKeyQItem[7];
extern char sTalkKeyAiSad[7];
extern char sTalkKeyAiJoy[7];
extern char sTalkKeyApBuy[7];
extern void * data_020d78f0[2];
extern void * data_020d78f8[2];
extern void * data_020d7900[2];
extern void * data_020d7908[2];
extern void * data_020d7910[2];
extern void * data_020d7918[2];
extern void * data_020d7920[2];
extern void * data_020d7928[2];
extern void * data_020d7930[2];
extern void * data_020d7938[2];
extern void * data_020d7940[2];
extern void * data_020d7948[2];
extern void * data_020d7950[2];
extern void * data_020d7958[2];
extern void * data_020d7960[2];
extern void * data_020d7968[2];
extern void * data_020d7970[2];
extern char sTalkKeyAiBoom[8];
extern void * data_020d7980[2];
extern void * data_020d7988[2];
extern void * data_020d7990[2];
extern void * data_020d7998[2];
extern void * data_020d79a0[2];
extern char sTalkKeyApMail[8];
extern char sTalkKeyApSell[8];
extern void * data_020d79b8[2];
extern void * data_020d79c0[2];
extern void * data_020d79c8[2];
extern void * data_020d79d0[2];
extern void * data_020d79d8[2];
extern void * data_020d79e0[2];
extern void * data_020d79e8[2];
extern void * data_020d79f0[2];
extern void * data_020d79f8[2];
extern char sTalkKeyQ10Req[8];
extern void * data_020d7a08[2];
extern char sTalkKeyQ01Pay[8];
extern void * data_020d7a18[2];
extern void * data_020d7a20[2];
extern void * data_020d7a28[2];
extern void * data_020d7a30[2];
extern void * data_020d7a38[2];
extern void * data_020d7a40[2];
extern void * data_020d7a48[2];
extern void * data_020d7a50[2];
extern void * data_020d7a58[2];
extern void * data_020d7a60[2];
extern void * data_020d7a68[2];
extern void * data_020d7a70[2];
extern void * data_020d7a78[2];
extern u32 data_020d7a80[2];
extern void * data_020d7a88[2];
extern void * data_020d7a90[2];
extern void * data_020d7a98[2];
extern void * data_020d7aa0[2];
extern void * data_020d7aa8[2];
extern void * data_020d7ab0[2];
extern void * data_020d7ab8[2];
extern void * data_020d7ac0[2];
extern void * data_020d7ac8[2];
extern void * data_020d7ad0[2];
extern void * data_020d7ad8[2];
extern void * data_020d7ae0[2];
extern void * data_020d7ae8[2];
extern void * data_020d7af0[2];
extern void * data_020d7af8[2];
extern void * data_020d7b00[2];
extern u32 sTalkTopicQThanksDefault[2];
extern char sTalkKeyAiTire[8];
extern char sTalkKeyAiFlea[8];
extern void * data_020d7b20[2];
extern void * data_020d7b28[2];
extern void * data_020d7b30[2];
extern void * data_020d7b38[2];
extern u32 data_020d7b40[2];
extern void * data_020d7b48[2];
extern char sTalkKeyAiFall[8];
extern void * data_020d7b58[2];
extern void * data_020d7b60[2];
extern void * data_020d7b68[2];
extern void * data_020d7b70[2];
extern void * data_020d7b78[2];
extern char sTalkKeyQ07End[8];
extern void * data_020d7b88[2];
extern void * data_020d7b90[2];
extern void * data_020d7b98[2];
extern void * data_020d7ba0[2];
extern void * data_020d7ba8[2];
extern char sTalkKeyQ07Con[8];
extern void * data_020d7bb8[2];
extern void * data_020d7bc0[2];
extern void * data_020d7bc8[2];
extern void * data_020d7bd0[2];
extern void * data_020d7bd8[2];
extern void * data_020d7be0[2];
extern void * data_020d7be8[2];
extern void * data_020d7bf0[2];
extern void * sTalkTopicQ04Miss[2];
extern void * data_020d7c00[2];
extern void * data_020d7c08[2];
extern void * data_020d7c10[2];
extern void * data_020d7c18[2];
extern void * data_020d7c20[2];
extern void * data_020d7c28[2];
extern char sTalkKeyQ12End[8];
extern void * data_020d7c38[2];
extern char sTalkKeyQ06Req[8];
extern void * data_020d7c48[2];
extern void * data_020d7c50[2];
extern void * data_020d7c58[2];
extern void * data_020d7c60[2];
extern void * data_020d7c68[2];
extern void * data_020d7c70[2];
extern void * data_020d7c78[2];
extern u32 sTalkTopicQCompDefault[2];
extern void * data_020d7c88[2];
extern void * data_020d7c90[2];
extern void * data_020d7c98[2];
extern void * data_020d7ca0[2];
extern u32 data_020d7ca8[2];
extern void * data_020d7cb0[2];
extern u32 data_020d7cb8[2];
extern char sTalkKeyQ07Req[8];
extern void * data_020d7cc8[2];
extern void * data_020d7cd0[2];
extern void * data_020d7cd8[2];
extern void * data_020d7ce0[2];
extern void * data_020d7ce8[2];
extern void * data_020d7cf0[2];
extern void * data_020d7cf8[2];
extern void * data_020d7d00[2];
extern void * data_020d7d08[2];
extern void * data_020d7d10[2];
extern void * data_020d7d18[2];
extern void * data_020d7d20[2];
extern void * data_020d7d28[2];
extern void * data_020d7d30[2];
extern u32 sTalkTopicQClearDefault[2];
extern void * data_020d7d40[2];
extern void * data_020d7d48[2];
extern void * data_020d7d50[2];
extern char sTalkKeyQ01End[8];
extern void * data_020d7d60[2];
extern char sTalkKeyQ02Pay[8];
extern void * data_020d7d70[2];
extern void * data_020d7d78[2];
extern char sTalkKeyQ02End[8];
extern char sTalkKeyQ03End[8];
extern void * data_020d7d90[2];
extern void * data_020d7d98[2];
extern void * data_020d7da0[2];
extern void * data_020d7da8[2];
extern void * data_020d7db0[2];
extern char sTalkKeyQ04End[8];
extern char sTalkKeyQ05End[8];
extern void * data_020d7dc8[2];
extern void * data_020d7dd0[2];
extern void * data_020d7dd8[2];
extern void * data_020d7de0[2];
extern char sTalkKeyEtcHit[8];
extern void * data_020d7df0[2];
extern void * data_020d7df8[2];
extern void * data_020d7e00[2];
extern void * data_020d7e08[2];
extern void * data_020d7e10[2];
extern void * data_020d7e18[2];
extern void * data_020d7e20[2];
extern void * data_020d7e28[2];
extern void * data_020d7e30[2];
extern u32 sTalkTopicQ05TalkDefault[2];
extern void * data_020d7e40[2];
extern u32 sTalkTopicQConDefault[2];
extern void * data_020d7e50[2];
extern void * data_020d7e58[2];
extern char sTalkKeyQ05Con[8];
extern void * data_020d7e68[2];
extern void * data_020d7e70[2];
extern u32 sTalkTopicQReturnDefault[2];
extern void * data_020d7e80[2];
extern void * data_020d7e88[2];
extern char sTalkKeyApItem[8];
extern void * data_020d7e98[2];
extern void * data_020d7ea0[2];
extern void * data_020d7ea8[2];
extern void * data_020d7eb0[2];
extern char sTalkKeyQStart[8];
extern void * data_020d7ec0[2];
extern void * data_020d7ec8[2];
extern void * data_020d7ed0[2];
extern void * data_020d7ed8[2];
extern void * data_020d7ee0[2];
extern void * data_020d7ee8[2];
extern void * data_020d7ef0[2];
extern void * data_020d7ef8[2];
extern char sTalkKeyQ05Req[8];
extern void * data_020d7f08[2];
extern void * data_020d7f10[2];
extern void * data_020d7f18[2];
extern void * data_020d7f20[2];
extern void * data_020d7f28[2];
extern void * data_020d7f30[2];
extern void * data_020d7f38[2];
extern void * data_020d7f40[2];
extern void * data_020d7f48[2];
extern void * data_020d7f50[2];
extern void * data_020d7f58[2];
extern void * data_020d7f60[2];
extern char sTalkKeyQ06End[8];
extern void * data_020d7f70[2];
extern void * data_020d7f78[2];
extern void * data_020d7f80[2];
extern char sTalkKeyQ06Bad[8];
extern void * data_020d7f90[2];
extern void * data_020d7f98[2];
extern void * data_020d7fa0[2];
extern void * data_020d7fa8[2];
extern char sTalkKeyQ06Con[8];
extern char sTalkKeyQ07Fin[8];
extern char sTalkKeyQ06Fin[8];
extern void * data_020d7fc8[2];
extern void * data_020d7fd0[2];
extern void * data_020d7fd8[2];
extern void * data_020d7fe0[2];
extern void * data_020d7fe8[2];
extern void * data_020d7ff0[2];
extern char sTalkKeyQ10Con[8];
extern void * data_020d8000[2];
extern void * data_020d8008[2];
extern void * data_020d8010[2];
extern void * data_020d8018[2];
extern char sTalkKeyQ07Joy[8];
extern char sTalkKeyQ06Get[8];
extern char sTalkKeyEtcPush[9];
extern char sTalkKeyQ12Full[9];
extern char sTalkKeyQ06Over[9];
extern char sTalkKeyQ07Over[9];
extern char sTalkKeyQ06Lost[9];
extern char sTalkKeyQ06Open[9];
extern char sTalkKeyQ07Open[9];
extern char sTalkKeyQError1[9];
extern char sTalkKeyQError2[9];
extern char sTalkKeyQError3[9];
extern char sTalkKeyEvAcorn[9];
extern char sTalkKeyTsuStar[9];
extern char sTalkKeyQ07Read[9];
extern char sTalkKeyQ07Show[9];
extern char sTalkKeyQ06Good[9];
extern char sTalkKeyQ01Req1[9];
extern char sTalkKeyQ01Req3[9];
extern char sTalkKeyQ02Req1[9];
extern char sTalkKeyQ02Req3[9];
extern char sTalkKeyQ03Req3[9];
extern char sTalkKeyQ01Con1[9];
extern char sTalkKeyQ01Con3[9];
extern char sTalkKeyQ02Con1[9];
extern char sTalkKeyQ02Con3[9];
extern char sTalkKeyEvBirth[9];
extern char sTalkKeyQ03Con3[9];
extern char sTalkKeyQ01Pwin[9];
extern char sTalkKeyQ02Pwin[9];
extern char sTalkKeyAiFirst[9];
extern char sTalkKeyQ01Nwin[9];
extern char sTalkKeyQ02Nwin[9];
extern char sTalkKeyAiAnger[9];
extern char sTalkKeyAi7days[9];
extern char sTalkKeyAiShop1[9];
extern char sTalkKeyAiShop2[9];
extern char sTalkKeyAiShop3[9];
extern char sTalkKeyAiRain1[9];
extern char sTalkKeyAiSnow1[9];
extern char sTalkKeyQ04Miss[9];
extern u8 sTalkKeyQ05Miss[9];
extern char sTalkKeyAiRain2[9];
extern char sTalkKeyAiSnow2[9];
extern char sTalkKeyTsuSpot[9];
extern char sTalkKeyApHabit[9];
extern char sTalkKeyApNickn[9];
extern char sTalkKeyTsuItem[9];
extern char sTalkKeyApTrade[9];
extern char sTalkKeyQ01Comp[9];
extern char sTalkKeyQ02Comp[9];
extern char sTalkKeyQ03Comp[9];
extern char sTalkKeyQ05Comp[9];
extern char sTalkKeyEvArbeit[10];
extern char sTalkKeyQ12Other[10];
extern char sTalkKeyEvInsect[10];
extern char sTalkKeyQ07Scold[10];
extern char sTalkKeyQIcancel[10];
extern char sTalkKeyTsuDrama[10];
extern char sTalkKeyQ06Open1[10];
extern char sTalkKeyQ06Open3[10];
extern char sTalkKeyQ06Open2[10];
extern char sTalkKeyQ07Open2[10];
extern char sTalkKeyQ10Leave[10];
extern char sTalkKeyQPreitem[10];
extern char sTalkKeyTsuMove1[10];
extern char sTalkKeyTsuMove2[10];
extern char sTalkKeyQ01Pwin2[10];
extern char sTalkKeyQ01Plose[10];
extern char sTalkKeyQ02Plose[10];
extern char sTalkKeyQ02Pwin2[10];
extern char sTalkKeyQ01Pdraw[10];
extern char sTalkKeyQ02Pdraw[10];
extern char sTalkKeyAiNfirst[10];
extern char sTalkKeyAiMfirst[10];
extern char sTalkKeyTsuGhint[10];
extern char sTalkKeyAiPoison[10];
extern char sTalkKeyTsuDress[10];
extern char sTalkKeyQ01Nlose[10];
extern char sTalkKeyQ02Nlose[10];
extern char sTalkKeyAi30days[10];
extern char sTalkKeyAiIndoor[10];
extern char sTalkKeyAiToday1[10];
extern char sTalkKeyAiPersis[10];
extern char sTalkKeyAiToday2[10];
extern char sTalkKeyTsuShome[10];
extern char sTalkKeyTsuGhome[10];
extern char sTalkKeyEvAdmire[10];
extern char sTalkKeyQ04Dress[10];
extern char sTalkKeyEvFishing[11];
extern char sTalkKeyQ12Report[11];
extern char sTalkKeyQ12Thanks[11];
extern char sTalkKeyTsuEvent1[11];
extern char sTalkKeyQ07Mailgo[11];
extern char sTalkKeyTsuEvent2[11];
extern char sTalkKeyQ07Scold2[11];
extern char sTalkKeyQTimeover[11];
extern char sTalkKeyEtcCancel[11];
extern char sTalkKeyQ06Report[11];
extern char sTalkKeyQ07Report[11];
extern char sTalkKeyQ06Normal[11];
extern char sTalkKeyEvSnowfes[11];
extern char sTalkKeyQ03Req12[11];
extern char sTalkKeyQ03Req45[11];
extern char sTalkKeyQ04Req12[11];
extern char sTalkKeyQ04Req37[11];
extern char sTalkKeyTsuInAct[11];
extern char sTalkKeyTsuFiAct[11];
extern char sTalkKeyTsuFoAct[11];
extern char sTalkKeyTsuClAct[11];
extern char sTalkKeyQ03Con12[11];
extern char sTalkKeyQ03Con45[11];
extern char sTalkKeyTsuFuAct[11];
extern char sTalkKeyQ04Con12[11];
extern char sTalkKeyQ04Con37[11];
extern char sTalkKeyTsuFlAct[11];
extern char sTalkKeyTsuSeAct[11];
extern char sTalkKeyTsuNoAct[11];
extern char sTalkKeyEvKaraoke[11];
extern char sTalkKeyAiForeign[11];
extern char sTalkKeyTsuAlways[11];
extern char sTalkKeyAiFortune[11];
extern char sTalkKeyTsuFriend[11];
extern u8 sTalkKeyQ03Thanks[11];
extern u8 sTalkKeyQ04Thanks[11];
extern u8 sTalkKeyQ05Thanks[11];
extern char sTalkKeyTsuMemory[11];
extern char sTalkKeyQ01Return[11];
extern char sTalkKeyQ02Return[11];
extern char sTalkKeyQ03Return[11];
extern char sTalkKeyQ05Return[11];
extern char sTalkKeyQ06Payback[12];
extern char sTalkKeyQ10Reserve[12];
extern char sTalkKeyTsuInHint[12];
extern char sTalkKeyEvFmarket1[12];
extern char sTalkKeyTsuFiHint[12];
extern char sTalkKeyTsuFoHint[12];
extern char sTalkKeyTsuClHint[12];
extern u32 sPresentOpinionTopics[3];
extern char sTalkKeyTsuFuHint[12];
extern char sTalkKeyTsuFlHint[12];
extern char sTalkKeyTsuSeHint[12];
extern char sTalkKeyTsuNoHint[12];
extern char sTalkKeyQ05Talk12[12];
extern char sTalkKeyQ05Talk35[12];
extern char sTalkKeyQ05Talk67[12];
extern char sTalkKeyAiPassword[12];
extern char sTalkKeyQ01Revenge[12];
extern char sTalkKeyQ02Revenge[12];
extern char sTalkKeyEvFirework[12];
extern char sTalkKeyApPresent1[12];
extern char sTalkKeyApPresent2[12];
extern char sTalkKeyEtcConnect[12];
extern char sTalkKeyQ10Reserved[13];
extern char sTalkKeyQ01Req245[13];
extern char sTalkKeyQ02Req245[13];
extern char sTalkKeyEvCountdown[13];
extern char sTalkKeyQ01Con245[13];
extern char sTalkKeyQ02Con245[13];
extern char sTalkKeyEvGardeniing[14];
extern char sTalkKeyTsuHappyroom[14];
extern void * sTalkKeysQ01Req[5];
extern void * sTalkKeysQ02Req[5];
extern void * sTalkKeysQ03Req[5];
extern void * sTalkKeysQReq[5];
extern void * sTalkKeysQ01Con[5];
extern void * sTalkKeysQ02Con[5];
extern void * sTalkKeysQ03Con[5];
extern void * sTalkKeysQCon[5];
extern void * sTalkKeysQReturn[5];
extern void * sTalkKeysQComp[5];
extern void * sTalkKeys3p[6];
extern void * sTalkKeysQ04Req[7];
extern void * sTalkKeysQ05Req[7];
extern void * sTalkKeysQ04Con[7];
extern void * sTalkKeysQ05Con[7];
extern void * sTalkKeysQ05Talk[7];
extern u8 sFishRowFlags[2];
extern u8 sFishSlotFlags[3];
extern u32 sFishRarityWork[2];
extern u32 sInsectRarityWork[2];
extern u32 sInsectSlotFlags[2];
extern u8 sTsuTopicWeightsWork[14];
extern Unk_021be8c0 sConnectTopic[1];
extern Unk_021be8c0 sEtcCancelTopicTable[1];
extern u32 sVillagerTexturePathBuf[8];
extern u32 sVillagerModelPathBuf[8];
extern u32 sTalkInputBuffer[8];
extern Unk_021be8c0 sSmallTalkTopicTable[2];
extern Unk_021be8c0 sHouseVisitTsuTopicTable[3];
extern Unk_021be8c0 sEvGardeniingTopicTable[4];
extern Unk_021be8c0 sEvSnowfesTopicTable[4];
extern Unk_021be8c0 sEtcConnectTopicTable[6];
extern Unk_021be8c0 sEvBirthTopicTable[7];
extern Unk_021be8c0 sEvAdmireTopicTable[8];
extern Unk_021be8c0 sEvCountdownTopicTable[8];
extern Unk_021be8c0 sEvKaraokeTopicTable[9];
extern Unk_021be8c0 sEvAcornTopicTable[9];
extern Letter sTalkLetter;
extern Unk_021be8c0 sApSubTopics[13];
extern Unk_021be8c0 sTalkBeginTopics[17];
extern Unk_021be8c0 sRequestTopicsA[26];
extern Unk_021be8c0 sRequestTopicsB[47];
}
}

namespace nZ {
extern "C" {
void * data_020d7b60[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13selectTsuSpotEv, 0,
};
const void *const sTalkTopicQ02Pdraw[2] = {
    (void *)sTalkKeyQ02Pdraw, (void *)0x2,
};
void * data_020d7d98[2] = {
    (void *)_ZN18VillagerTalkTopics12selectApSellEv, 0,
};
const void *const sTalkTopicEvFmarket1[2] = {
    (void *)sTalkKeyEvFmarket1, (void *)0x6,
};
void * data_020d7e50[2] = {
    (void *)_ZN25VillagerTalkKaraokeTopics21onEvAdmireWordEnteredEv, 0,
};
const void *const sTalkTopicQ02Pwin2[2] = {
    (void *)sTalkKeyQ02Pwin2, (void *)0x1,
};
char sTalkKeyAiRain1[9] = "ai_rain1";
char sTalkKeyTsuFuAct[11] = "tsu_fu_act";
void * data_020d7e00[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuClActEv, 0,
};
const void *const sTalkTopicQ06End[2] = {
    (void *)sTalkKeyQ06End, (void *)0x3,
};
char sTalkKeyAiTire[8] = "ai_tire";
char sTalkKeyQ04Con12[11] = "q04_con1_2";
u32 sTalkTopicQCompDefault[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7bc8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7c10[2] = {
    (void *)_ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv, 0,
};
const void *const sTalkTopicQ12End[2] = {
    (void *)sTalkKeyQ12End, (void *)0x3,
};
char sTalkKeyAiFall[8] = "ai_fall";
const void *const sTalkTopicAiShop3[2] = {
    (void *)sTalkKeyAiShop3, (void *)0x5,
};
char sTalkKeyQ02Pay[8] = "q02_pay";
void * data_020d7e18[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuInActEv, 0,
};
void * data_020d7c90[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7a40[2] = {
    (void *)_ZN23VillagerTalkRumorTopics26pickMemoryWithReceivedItemEPPvi, 0,
};
}
}

extern "C" void TalkChoiceList_SetIndices(u32 a, u8 *src, s32 n, s32 m) {
    void *h = _ZN16ActorTalkRequest13getChoiceListEv((void *)a);
    _ZN10ChoiceList5resetEii(h, n, m);
    s32 zero = 0;
    u8 buf[2];
    for (s32 i = 0; i < n; src++, i++) {
        buf[0] = *src;
        buf[1] = 0xff;
        _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, i, buf, zero, buf + 1, (const char *)zero, zero);
    }
    _ZN10ChoiceList9loadTextsEv(h);
}

extern "C" BOOL Talk_CheckAndSetPlayerFlag(u32 a, BOOL flag) {
    void *o = PlayerData_GetCurrent();
    if (o == NULL) {
        return FALSE;
    }
    void *h = _ZN10PlayerData17getDailyTalkFlagsEv(o);
    BOOL r = TRUE;
    if (_ZN20PlayerDailyTalkFlags4testEj(h, a) == 0) {
        r = FALSE;
    }
    if (flag) {
        _ZN20PlayerDailyTalkFlags3setEj(h, a);
    }
    if (r) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Talk_IsDramaPending(void *unused, u8 *p, u32 mode) {
    Unk_0202e18c_Buf buf;
    buf.unk_00 = 0;
    buf.unk_04 = 0;
    Clock_GetDateTime(&buf);
    u8 *b = (u8 *)&buf;
    if (((u32)func_020874e8(b[5], b[4], b[3], p))) {
        if (((u32)(*p << 30) >> 30) == mode) {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void Talk_AdvanceDrama(void *unused, u32 a) {
    func_020877a0(_ZN10PlayerData14getDramaRecordEv(PlayerData_GetCurrent()), a);
}

extern "C" BOOL Talk_IsInOwnTown() {
    void *g = gCommManager;
    if (((u32)_ZN11CommManager8isOnlineEv(g))) {
        if (_ZN11CommManager7isMyAidEj(g, 0) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

VillagerActor::VillagerActor() {}

VillagerActor::~VillagerActor() {}

void VillagerActor::attachVillagerData() {
    if (((npcHandle & 0xf000) >> 12) == 0xe) {
        villagerData = SaveVillagers_Get(gSaveVillagers, (u16)getNpcIndex());
        if (villagerData != NULL) {
            villagerState = Villager_GetState(villagerData);
        } else {
            villagerState = NULL;
        }
    }
}

s32 VillagerActor::getSpeciesOrNone() {
    s32 r = -1;
    if (villagerData != NULL) {
        if (((u32)_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(villagerData))) == 1) {
            r = VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(villagerData));
        }
    }
    return r;
}

void VillagerActor::getName(u32 a) {
    if (villagerData != NULL) {
        _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(villagerData), a);
    }
}

u32 VillagerActor::getGender() {
    u32 r = 2;
    if (villagerData != NULL) {
        r = _ZN10VillagerId9getGenderEv(_ZN12VillagerData13getVillagerIdEv(villagerData));
    }
    return r;
}

BOOL VillagerActor::canPlayTalkMelody() { return TRUE; }

void VillagerActor::onTalkMelodyPlayed() {}

u16 VillagerActor::getSpecies() {
    if (((npcHandle & 0xf000) >> 12) == 0xe && villagerData != NULL) {
        return VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(villagerData));
    }
    return 0xffff;
}

u8 *VillagerActor::getTexturePath() {
    s32 v = getSpeciesOrNone();
    if (v == -1) {
        v = 0;
    }
    ((void (*)(u8 *, u8 *, ...))func_020639e8)(sVillagerTexturePathBuf,  ((u8 *)"npc/model/%d/%d.nsbtx"),  v & 0xf8,  v);
    return sVillagerTexturePathBuf;
}

u8 *VillagerActor::getModelPath() {
    s32 v = getSpeciesOrNone();
    if (v == -1) {
        v = 0;
    }
    ((void (*)(u8 *, u8 *, ...))func_020639e8)(sVillagerModelPathBuf,  ((u8 *)"npc/model/%d/%d.nsbmd"),  v & 0xf8,  v);
    return sVillagerModelPathBuf;
}

void *VillagerActor::vfunc_64() { return villagerData; }

void VillagerActor::addMood(u32 a, s32 b) {
    if (mood.isActive()) {
        mood.addMood(a, b);
    }
}

BOOL VillagerActor::vfunc_a8() { return TRUE; }

BOOL VillagerActor::vfunc_ac() { return FALSE; }

BOOL VillagerActor::vfunc_b0() { return FALSE; }

void VillagerActor::setShirt(u16 *p, BOOL flag) {
    BOOL in = FALSE;
    u16 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) {
        in = TRUE;
    }
    if (in || (v >= 0x12a8 && v <= 0x12af)) {
        void *o = vfunc_64();
        ((VillagerClothModel *)(&clothModel))->change((VillagerActor *)this, p);
        if (o != NULL) {
            _ZN23VillagerDataProfileView8setShirtEPt(o, p);
            if (flag) {
                VillagerSync_Shirt(o, p);
            }
        }
    }
}

BOOL VillagerActor::vfunc_04() {
    if (!NpcActor::vfunc_04()) {
        return FALSE;
    }
    attachVillagerData();
    talkPartnerId = 0;
    villagerTalk.habitTopicKind = ((u32)Random_GlobalBelow(2));
    mood.start();
    ((VillagerTalk *)this)->refreshEventKind();
    return TRUE;
}

BOOL VillagerActor::loadAnimSet() {
    u32 t = (u32)((void *)_ZN19SpNpcAnimHeapHandle22getVillagerAnimHeapRefEv(&animHeapHandle));
    if (!_ZN11CachedModel16allocJointRecordEPv(&model, VillagerAnimHeapRef_GetHeap(t))) {
        return FALSE;
    }
    if (_ZN19ThreeLayerAnimModel16allocLayer3AnimsEj(&model, VillagerAnimHeapRef_GetHeap(t))) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerActor::vfunc_00() {
    u16 h = 0x11a8;
    if (!_ZN8NpcActor8vfunc_00Ev(this)) {
        return FALSE;
    }
    if (!_ZN19SpNpcAnimHeapHandle22getVillagerAnimHeapRefEv((u8 *)this + 0x824)) {
        if (!_ZN12NpcResHandle7acquireEv((u8 *)this + 0x824)) {
            return FALSE;
        }
        if (!this->loadAnimSet()) {
            return FALSE;
        }
    }
    if (!_ZN11NpcFaceAnim4loadEP18Unk_02019cac_Owner((u8 *)this + 0x2ac, this)) {
        return FALSE;
    }
    if (!_ZN11NpcAnimCtrl12initForActorEP16Unk_02015fe0_Obji((u8 *)this + 0x334, this, data_020c6cf0)) {
        return FALSE;
    }
    _ZN13NpcActionCtrl11startActionEPhiiiisii((u8 *)this + 0x564, this, 0, 1, 0, 0, 0, 0, 0);
    if (villagerData) {
        h = *_ZN23VillagerDataProfileView8getShirtEv(villagerData);
    }
    if (!((VillagerClothModel *)((u8 *)this + 0x64c))->init(this, &h)) {
        return FALSE;
    }
    _ZN19ActorFollowCollider13setupForActorEPviijjjhi((u8 *)this + 0x4cc, this, 0x1000, 0x2000, 8, 0x2fc, 2, (u8)_ZN8NpcActor11getNpcIndexEv(this), 0x1000);
    if (NpcRegistry_AddVillager(this, (u8 *)this + 0xea)) {
    } else {
        return FALSE;
    }
    return TRUE;
}

BOOL VillagerActor::preDelete() {
    if (!_ZN9Character9preDeleteEv(this)) {
        return FALSE;
    }
    NpcRegistry_RemoveVillager((u8 *)this + 0xea);
    return TRUE;
}

BOOL VillagerActor::vfunc_0c() {
    if (!_ZN8NpcActor8vfunc_0cEv(this)) {
        return FALSE;
    }
    _ZN12NpcResHandle7releaseEv((u8 *)this + 0x824);
    ((VillagerClothModel *)((u8 *)this + 0x64c))->release();
    ((VillagerMood *)((u8 *)this + 0x838))->stop();
    return TRUE;
}

void VillagerActor::setFlag834() { unk_834 = 1; }

void VillagerActor::clearFlag834() { unk_834 = 0; }

BOOL VillagerActor::isFlag834() {
    if (unk_834) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void Npc_GetStateHeldItem(u16 *out, VillagerTalk *obj) {
    *out = 0xfff1;
    if (((VillagerActor *)obj)->vfunc_64() != 0) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(((VillagerActor *)obj)->vfunc_64())) != 0) {
            if (Villager_GetState(((VillagerActor *)obj)->vfunc_64()) != 0) {
                *out = *VillagerState_GetHeldItem(Villager_GetState(((VillagerActor *)obj)->vfunc_64()));
            }
        }
    }
}

void VillagerTalk::setSpeakerStateUnk(void *arg) {
    if (((VillagerActor *)this)->vfunc_64() != 0) {
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(((VillagerActor *)this)->vfunc_64())) != 0) {
            if (Villager_GetState(((VillagerActor *)this)->vfunc_64()) != 0) {
                VillagerState_SetHeldItem(Villager_GetState(((VillagerActor *)this)->vfunc_64()), arg);
            }
        }
    }
}

VillagerClothModel *VillagerClothModel::construct() {
    _ZN14MatTexVramTaskC1Ev(this);
    clothItem = 0xfff1;
    _ZN17NpcClothTexHandleC1Ev(texPatBuf);
    return this;
}

VillagerClothModel *VillagerClothModel::destruct() {
    _ZN17NpcClothTexHandleD1Ev(texPatBuf);
    return this;
}

BOOL VillagerClothModel::init(VillagerActor *parent, u16 *id) {
    clothItem = 0xffff;
    if (!_ZN12NpcResHandle7acquireEv(texPatBuf)) {
        return FALSE;
    }
    if (change(parent, id)) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerClothModel::buildTexture(VillagerActor *parent, u16 *id) {
    void *r4 = _ZN21NpcTexPatBufRefHandle11getClothTexEv(texPatBuf);
    void *r6 = 0;
    if (r4) {
        BOOL in = FALSE;
        if (*id >= 0x11a8 && *id <= 0x12a7) {
            in = TRUE;
        }
        if (in == 1) {
            _ZN16CharaClothTexRef8loadItemEPtiii(r4, id, 0, 1, 1);
        } else if (parent->villagerData) {
            CharaClothTexRef_LoadPattern(r4, ((void *)_ZN12VillagerData10getPatternEv(parent->villagerData)));
        } else {
            _ZN16CharaClothTexRef8loadItemEPtiii(r4, id, 0, 1, 1);
        }
        if (CharaClothTexRef_GetBuffer(r4)) {
            r6 = ClothTex_GetTexThunk();
        }
    }
    return r6;
}

BOOL VillagerClothModel::change(VillagerActor *parent, u16 *id) {
    BOOL result = FALSE;
    BOOL same;
    void *p;
    if (Item_IsFurniture(id)) {
        u32 a = Item_GetFurnitureIndex(id);
        if (a == Item_GetFurnitureIndex(&clothItem)) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    } else {
        if (*id == clothItem) {
            same = TRUE;
        } else {
            same = FALSE;
        }
    }
    if (!same || (Unk_0202d664_Range(id, 0x12a8, 0x12af) && Unk_0202d664_Range(&clothItem, 0x12a8, 0x12af))) {
        p = buildTexture(parent, id);
        if (p) {
            result = _ZN14MatTexVramTask7requestEPvjS0_jj(this, (u32)parent->model.unk_5c, sVillagerClothMaterialNames, p, 0, 0);
            clothItem = *id;
        }
    }
    return result;
}

void VillagerClothModel::release() {
    _ZN14MatTexVramTask6cancelEv(this);
    _ZN12NpcResHandle7releaseEv(texPatBuf);
}

u16 *VillagerClothModel::getItem() { return &clothItem; }

VillagerTalk::VillagerTalk() {
    itemFromPlayer = 0xfff1;
    itemToPlayer = 0xfff1;
}

VillagerTalk::~VillagerTalk() {
}

void VillagerTalk::begin(Unk_020d8938_Parent *owner, u32 idx) {
    void *r6;
    if (PlayerData_GetCurrent() != 0) {
        r6 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    } else {
        r6 = 0;
    }
    vfunc_08();
    actor = owner;
    if (idx < 0x11) {
        setTopicFns(&sTalkBeginTopics[idx]);
    }
    unk_c4 = (*(Unk_020d8938_Fn *)&__ptmf_null);
    unk_cc = (*(Unk_020d8938_Fn *)&__ptmf_null);
    Unk_020d8938_Fn t = (*(Unk_020d8938_Fn *)&__ptmf_null);
    taskDoneFn = t;
    nextTaskDoneFn = t;
    deferredFn = t;
    unk_ec = t;
    closeFn = t;
    itemFromPlayer = 0xfff1;
    unk_134 = 0;
    memoryIndex = -1;
    unk_128 = 0;
    partnerMemoryIndex = -1;
    unk_130 = 0;
    if (r6 != 0 && actor != 0) {
        memoryIndex = Villager_FindMemoryIndexById(actor->villagerData, r6);
        unk_128 = Villager_GetMemory(actor->villagerData, memoryIndex);
    }
    this->clearChoiceValues();
    errandRecord = 0;
    unk_154 = 0;
    unk_155 = 0;
    unk_158 = 0;
    unk_15c = 0;
    unk_160 = 0;
    unk_164 = 0;
    Unk_020d8938_Fn t2 = (*(Unk_020d8938_Fn *)&__ptmf_null);
    unk_168 = t2;
    unk_170 = t2;
    unk_178 = t2;
    unk_180 = t2;
    unk_188 = t2;
    itemToPlayer = 0xfff1;
    itemToPlayerIsReceived = 0;
    unk_19c = 0;
    MI_CpuFill8(((u8 *)&sTalkInputBuffer), 0, 0x20);
    unk_138 = 0;
}

void VillagerTalk::update() {
    _ZN16ActorTalkRequest6updateEv(this);
    if (unk_ec) {
        (this->*unk_ec)();
    }
}

void VillagerTalk::setTaskDoneFn(Unk_020d8938_Fn fn) { taskDoneFn = fn; }

void VillagerTalk::setNextTaskDoneFn(Unk_020d8938_Fn fn) { nextTaskDoneFn = fn; }

void VillagerTalk::onTaskDone(u32 id) {
    Unk_020d8938_Fn t;
    if (taskDoneFn) {
        (this->*taskDoneFn)();
        t = (*(Unk_020d8938_Fn *)&__ptmf_null);
        taskDoneFn = t;
        if (nextTaskDoneFn) {
            taskDoneFn = nextTaskDoneFn;
        }
        nextTaskDoneFn = t;
    }
}

void VillagerTalk::setDeferredFn(Unk_020d8938_Fn fn) { deferredFn = fn; }

void VillagerTalk::runDeferred() {
    if (deferredFn) {
        (this->*deferredFn)();
        deferredFn = (*(Unk_020d8938_Fn *)&__ptmf_null);
    }
}

void VillagerTalk::clearTopicFns() {
    selectFn = (*(Unk_020d8938_Fn *)&__ptmf_null);
    Unk_020d8938_Fn t = (*(Unk_020d8938_Fn *)&__ptmf_null);
    unk_b4 = t;
    unk_bc = t;
}

void VillagerTalk::setTopicFns(Unk_020d8938_Tbl *t) {
    selectFn = t->a;
    unk_b4 = t->b;
    unk_bc = t->c;
}

void VillagerTalk::setChoiceFn(Unk_020d8938_Fn fn) { unk_cc = fn; }

extern "C" void Talk_SelectTopicMessage(void *self, void *buf, void *out, s32 a3, u8 s0, u32 s1, u8 s2, s32 s3, u8 s4) {
    u32 k = s2;
    u8 t = k * s3;
    if (s4) {
        k = s4;
    }
    Villager_MakePersonalityFileName(buf, a3, s1, s0);
    *(u8 *)out = t + Random_GlobalBelow(k);
}

void *VillagerTalk::getActorByIndex(s32 idx) {
    switch (idx) {
    case 0:
        return actor;
    case 1:
        if (actor) {
            return (void *)((VillagerTalk *)actor)->getPartner();
        }
    }
    return 0;
}

u32 VillagerTalk::getSpeakerData() {
    u32 r = 0;
    Unk_020d8938_Parent *p = (Unk_020d8938_Parent *)getActorByIndex(_ZN16ActorTalkRequest15getSpeakerIndexEv());
    if (p) {
        r = (u32)p->villagerData;
    }
    return r;
}

void VillagerTalk::setUnk150(u32 v) { errandRecord = v; }

u32 VillagerTalk::getUnk150() { return errandRecord; }

void VillagerTalk::start(TalkStartMsg *arg) {
    if (selectFn) {
        (this->*reinterpret_cast<Unk_020d8938_ArgFn>(selectFn))(arg);
    }
    return;
}

extern "C" void VillagerTalk_EnsureMemory(u8 *self, s32 *pa, s32 *pb, s32 c, s32 d) {
    if (self[0x138] == 0) {
        if (d == 0) {
            if (((s32)PlayerData_GetCurrent()) != 0) {
                d = ((s32)_ZN10PlayerData11getPlayerIdEv((void *)((s32)PlayerData_GetCurrent())));
            }
        }
        if (d != 0 && c != 0) {
            if (*pa == 0) {
                *pb = Villager_FindMemoryIndexById((void *)c, (void *)d);
                if (*pb == -1) {
                    *pb = Villager_PickMemorySlotForNew(c);
                    if (*pb != -1) {
                        *pa = ((s32 (*)(s32))Villager_GetMemory)(c);
                        VillagerMemory_InitForPlayer(*pa, d, 0, 0);
                        VillagerSync_MemoryInit(c, *pb);
                    }
                }
            } else {
                VillagerMemory_RecordTalk(*pa, d, 0, 0);
                VillagerSync_MemorySetPlayer(c, *pb);
            }
        }
    }
}

void VillagerTalk::onTag09_9() {
    _ZN12Unk_0201425820requestSwitchSpeakerEh(this, 0);
}

void VillagerTalk::onActionTag0() {
    Unk_0202cf9c_Scene *s = _ZN16ActorTalkRequest14getActionActorEv(this);
    if (s != NULL) {
        s->vfunc_a4(0, 0);
    }
}

void VillagerTalk::onActionTag1(u32 a) {
    Unk_0202cf9c_Scene *s = _ZN16ActorTalkRequest14getActionActorEv(this);
    if (s != NULL) {
        s->vfunc_a4(1, a);
    }
}

void VillagerTalk::onActionTag2(u32 a) {
    Unk_0202cf9c_Scene *s = _ZN16ActorTalkRequest14getActionActorEv(this);
    if (s != NULL) {
        s->vfunc_a4(2, a);
    }
}

void VillagerTalk::onActionTag3(u32 a) {
    Unk_0202cf9c_Scene *s = _ZN16ActorTalkRequest14getActionActorEv(this);
    if (s != NULL) {
        s->vfunc_a4(3, a);
    }
}

void VillagerTalk::onActionTag4(u32 a) {
    Unk_0202cf9c_Scene *s = _ZN16ActorTalkRequest14getActionActorEv(this);
    if (s != NULL) {
        s->vfunc_a4(4, a);
    }
}

void VillagerTalk::onWindowClose() {
    if (closeFn != 0) {
        (this->*closeFn)();
        closeFn = *(Unk_020d8938_Fn *)__ptmf_null;
    }
}

extern "C" s32 Talk_FindFlaggedPocketItem(void *p, u16 *q) {
    u16 *e = _ZN15PlayerInventory9getPocketEi(p, 0);
    s32 i;
    BOOL v;
    for (i = 0; i < 15; i++) {
        if (_ZN15PlayerInventory14getPocketFlagsEi(p, i) == 2) {
            if (Item_IsFurniture(e) != 0) {
                v = (((s32)Item_GetFurnitureIndex(e)) == ((s32)Item_GetFurnitureIndex(q))) ? TRUE : FALSE;
            } else {
                v = (e[0] == q[0]) ? TRUE : FALSE;
            }
            if (v) {
                return i;
            }
        }
        e++;
    }
    return -1;
}

extern "C" void *Talk_FindLetterState7or8(void *p) {
    u8 *e = (u8 *)_ZN15PlayerInventory9getLetterEi(p, 0);
    void *r = NULL;
    s32 i;
    for (i = 0; i < 10; i++) {
        if ((u8)(_ZN10LetterView8getStateEv(e) + 0xf9) <= 1) {
            r = e;
            break;
        }
        e += 0xf4;
    }
    return r;
}

void Unk_0202ce90_Base::playOwnerIdleAnim() {
    _ZN13NpcActionCtrl12requestStandEjt(&actor->actionCtrl, 2, (u16)data_020c6cc8);
}

extern "C" s32 Talk_PickWeightedIndex(u8 *p, s32 n) {
    s32 result = -1;
    u8 sum = 0;
    s32 i;
    u8 r;
    for (i = 0; i < n; i++) {
        sum = sum + p[i];
    }
    if (sum != 0) {
        r = Random_GlobalBelow(sum);
        sum = 0;
        for (i = 0; i < n; i++) {
            sum = sum + p[i];
            if (r < sum) {
                result = i;
                break;
            }
        }
    }
    return result;
}

extern "C" void Talk_PickRandomTradeItem(u16 *out) {
    Unk_0202cd5c_Obj o1, o2;
    u32 zero;
    _ZN12ItemPickSpec3setEii(&o1, sTalkTradeItemLists[Random_GlobalBelow(4)], 0);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    zero = 0;
    ItemPick_One(out, &o2, zero, zero, 1, 1, 0);
    ItemPickSpec_Destruct(&o2);
    ItemPickSpec_Destruct(&o1);
}

extern "C" void Talk_PickItemFromSpecs(u16 *out, u32 *tbl, s32 idx, s32 c) {
    u16 h[2];
    u32 len;
    Unk_0202cd5c_Obj o1, o3, o2, o4;
    s32 r;
    r = Random_GlobalBelow(idx);
    *out = 0xfff1;
    tbl = tbl + r * 2;
    len = tbl[1];
    _ZN12ItemPickSpec3setEii(&o1, tbl[0], tbl[1]);
    o2.v[0] = o1.v[0];
    o2.v[1] = o1.v[1];
    ItemPick_One(&h[0], &o2, c, 0, 1, 1, (u32)&len);
    *out = h[0];
    ItemPickSpec_Destruct(&o2);
    if (*out == 0xfff1) {
        _ZN12ItemPickSpec3setEii(&o3, tbl[0], len);
        o4.v[0] = o3.v[0];
        o4.v[1] = o3.v[1];
        ItemPick_OneSimple(&h[1], &o4);
        *out = h[1];
        ItemPickSpec_Destruct(&o4);
        ItemPickSpec_Destruct(&o3);
    }
    ItemPickSpec_Destruct(&o1);
}

extern "C" void Talk_PickErrandItem(u16 *out, s32 c) {
    Talk_PickItemFromSpecs(out, sTalkErrandItemSpecs, 3, c);
}

extern "C" void Talk_PickClothingItem(u16 *out, s32 c) {
    Talk_PickItemFromSpecs(out, sTalkClothingItemSpecs, 4, c);
}

extern "C" void InsectPick_GetMissingHabitats(s32 *out, s32 *cnt) {
    Unk_0202cb34_Grid *g;
    u8 flags;
    s32 j, i;
    u16 *v;
    g = TownBlockMap_Get();
    flags = 0;
    *cnt = 0;
    if (g != NULL) {
        Unk_0202cb34_Size sz;
        Unk_0202cb34_GetSize(g, &sz);
        Unk_0202cb34_Size pos;
        for (pos.y = 1; pos.y < sz.y - 1; pos.y++) {
            for (pos.x = 1; pos.x < sz.x - 1; pos.x++) {
                u8 *cell = Unk_0202cb34_Cell(g, pos.x, pos.y);
                if (cell != NULL) {
                    v = MapBlock_GetItemPtr(cell, 0, 0, 0);
                    if (v != NULL) {
                        for (i = 0; i < 16; i++) {
                            for (j = 0; j < 16; j++) {
                                if (Unk_0202cb34_R(v, 0xc8, 0xcf) == 1) {
                                    if ((flags & 2) != 0) {
                                        flags |= 2;
                                    }
                                } else if (Unk_0202cb34_Check(v) == 1) {
                                    if ((flags & 4) != 0) {
                                        flags |= 4;
                                    }
                                }
                                if (flags == 6) {
                                    break;
                                }
                                v++;
                            }
                            if (flags == 6) {
                                break;
                            }
                        }
                    }
                }
                if (flags == 6) {
                    break;
                }
            }
            if (flags == 6) {
                break;
            }
        }
    }
    for (i = 0; i < 4; i++) {
        if (((flags >> i) & 1) == 0) {
            *out = sInsectHabitatKinds[i];
            (*cnt)++;
            out++;
        }
    }
}

extern "C" s32 Talk_ArrayContains(s32 v, s32 *arr, s32 n) {
    s32 i;
    if (arr != NULL) {
        for (i = 0; i < n; i++) {
            if (*arr == v) {
                return 1;
            }
            arr++;
        }
    }
    return 0;
}

extern "C" s32 InsectPick_CountInSlot(s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 prev;
    s32 i;
    s32 d;
    if (p != NULL && n > 0) {
        prev = 0;
        for (i = 0; i < n; i++) {
            d = p[1] - prev;
            if (d > 0) {
                if (c == func_0209949c((u8)d)) {
                    if (Talk_ArrayContains(Insect_GetHabitat(p[0]), arr, cnt) == 0) {
                        result++;
                    }
                }
            } else {
                result = 0;
                break;
            }
            prev = p[1];
            p += 2;
        }
    }
    return result;
}

extern "C" s32 InsectPick_PickInSlot(u16 *a, s32 *b, s32 c, u8 *p, s32 n, s32 *arr, s32 cnt) {
    s32 result = 0;
    s32 i;
    s32 prev;
    s32 k;
    s32 d;
    s32 q;
    u16 t;
    if (n > 0 && p != NULL) {
        i = InsectPick_CountInSlot(c, p, n, arr, cnt);
        if (i > 0) {
            k = Random_GlobalBelow(i);
            prev = 0;
            for (i = 0; i < n; i++) {
                d = p[1] - prev;
                if (d > 0) {
                    if (c == func_0209949c((u8)d)) {
                        q = Insect_GetHabitat(p[0]);
                        if (Talk_ArrayContains(q, arr, cnt) == 0) {
                            if (k == 0) {
                                if (p[0] < 0x38) {
                                    t = p[0] + 0x12b0;
                                } else {
                                    t = 0x12b0;
                                }
                                *a = t;
                                *b = q;
                                result = 1;
                                break;
                            } else {
                                k--;
                            }
                        }
                    }
                }
                prev = p[1];
                p += 2;
            }
        }
    }
    return result;
}

extern "C" s32 InsectPick_PickForHours(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt, u8 lo, u8 hi) {
    s32 n = 0;
    s32 result = 0;
    s32 prev;
    s32 r;
    s32 i;
    s32 k;
    s32 end;
    u8 *flag;
    if (tbl != NULL) {
        prev = 6;
        MI_CpuFill8(sInsectSlotFlags, 0, prev);
        i = lo;
        end = hi;
        for (; i <= end; i++) {
            r = Insect_HourToTimeSlot((u8)i);
            flag = &sInsectSlotFlags[r];
            if (*flag == 0 && r != prev) {
                if (InsectPick_CountInSlot(d, tbl[r].entries, tbl[r].count, arr, cnt) > 0) {
                    *flag = 1;
                    n++;
                }
                prev = r;
            }
        }
        if (n > 0) {
            k = Random_GlobalBelow(n);
            for (n = 0; n < 6; n++) {
                if (sInsectSlotFlags[n] != 0) {
                    if (k == 0) {
                        result = InsectPick_PickInSlot(a, b, d, tbl->entries, tbl->count, arr, cnt);
                        *c = n;
                        break;
                    } else {
                        k--;
                    }
                }
                tbl++;
            }
        }
    }
    return result;
}

extern "C" s32 InsectPick_PickAnyHour(u16 *a, s32 *b, s32 *c, s32 d, Unk_0202c92c_Ent *tbl, s32 *arr, s32 cnt) {
    return InsectPick_PickForHours(a, b, c, d, tbl, arr, cnt, 0, 0x17);
}

extern "C" s32 InsectPick_PickForMonthAnyHour(u16 *a, s32 lo, s32 hi, u8 kind) {
    return InsectPick_PickForMonth(a, lo, hi, 0, 0x17, kind);
}

extern "C" s32 InsectPick_PickForMonth(u16 *a, s32 lo, s32 hi, s32 d, s32 e, u8 kind) {
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)Insect_GetSpawnTable(kind - 1);
    s32 out0, out1;
    u8 mask;
    s32 n;
    s32 i;
    s32 z;
    if (tbl != NULL) {
        mask = 0;
        n = hi - lo + 1;
        out0 = 0;
        out1 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        z = 0;
        for (; n > 0; n--) {
            s32 k = Random_GlobalBelow(n);
            for (i = z; i < 5; i++) {
                if (((mask >> i) & 1) != 0) {
                    if (k == 0) {
                        if (((s32(*)(u16 *, s32 *, s32 *, s32, Unk_0202c92c_Ent *, s32 *, s32, s32, s32))InsectPick_PickForHours)(a, &out0, &out1, i, tbl, (s32 *)z, z, d, e) != 0) {
                            return 1;
                        }
                        mask = mask & ~(1 << i);
                        break;
                    } else {
                        k--;
                    }
                }
            }
        }
    }
    return 0;
}

extern "C" s32 InsectPick_PickWeightedRarity(u16 *a, s32 *idxOut, s32 *b, s32 *c, Unk_0202c92c_Ent *p) {
    s32 result = 0;
    Unk_0202c92c_Ent *tbl = (Unk_0202c92c_Ent *)Insect_GetSpawnTable(p->count - 1);
    s32 arr[4];
    s32 cnt;
    s32 i;
    s32 idx;
    if (tbl != NULL) {
        cnt = 0;
        MI_CpuCopy8(sInsectRarityWeights, sInsectRarityWork, 5);
        InsectPick_GetMissingHabitats(arr, &cnt);
        for (i = 0; i < 5; i++) {
            idx = Talk_PickWeightedIndex(sInsectRarityWork, 5);
            if (idx < 0 || idx >= 5) {
                break;
            }
            if (InsectPick_PickAnyHour(a, b, c, idx, tbl, arr, cnt) == 1) {
                *idxOut = idx;
                result = 1;
                break;
            }
            sInsectRarityWork[idx] = 0;
        }
    }
    return result;
}

extern "C" void InsectPick_PickNow(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 v;
    u32 loc[4];
    s32 t;
    Unk_0202c654_Row *row;
    s32 n;
    Unk_0202c654_Row *tbl;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    out = 0;
    Clock_GetDateTime(&s);
    t = Insect_HourToTimeSlot(((u8 *)&s)[2]);
    tbl = (Unk_0202c654_Row *)Insect_GetSpawnTable(((u8 *)&s)[4] - 1);
    if (tbl != NULL && t >= 0 && t < 6) {
        v = 0;
        row = tbl + t;
        MI_CpuFill8(buf, 0, n);
        InsectPick_GetMissingHabitats((s32 *)loc, &v);
        while (n > 0) {
            s32 r = Random_GlobalBelow(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if (buf[j] == 0) {
                    if (r == 0) {
                        InsectPick_PickInSlot(p, &out, j, (u8 *)row->entries, row->count, (s32 *)loc, v);
                        buf[j] = 1;
                        break;
                    }
                    r--;
                }
            }
            if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
                break;
            }
            n--;
        }
    }
}

extern "C" s32 InsectPick_IsAvailable(u16 *p, s32 lo, s32 hi, s32 id) {
    u8 *e;
    u8 n;
    s32 last;
    Unk_0202c654_Row *tbl;
    s32 d;
    u32 idx;
    s32 t;
    s32 cur;
    s32 k;
    s32 prev;

    if (Unk_0202be64_InRange(p, 0x12b0, 0x12e7)) {
        tbl = (Unk_0202c654_Row *)Insect_GetSpawnTable(id - 1);
        if (tbl != NULL) {
            prev = 6;
            idx = (u8)(Unk_0202be64_InRange(p, 0x12b0, 0x12e7) ? *p - 0x12b0 : -1);
            for (; lo <= hi; lo++) {
                t = Insect_HourToTimeSlot((u8)lo);
                if (t != prev) {
                    e = tbl[t].entries;
                    if (e != NULL) {
                        last = 0;
                        k = 0;
                        n = tbl[0].count;
                        for (; k < n; k++) {
                            cur = e[1];
                            d = cur - last;
                            if (idx == e[0] && d > 0) {
                                return 1;
                            }
                            last = cur;
                            e += 2;
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}

extern "C" s32 FishPick_CountInRow(s32 key, Unk_0202c60c *p) {
    Unk_0202c60c_Entry *en = p->entries;
    s32 cnt = 0;
    if (en != NULL && p->count != 0) {
        s32 i;
        for (i = 0; i < p->count; en++, i++) {
            if (en->fish < 0x38 && en->weight != 0 && key == func_0209948c(en->weight)) {
                cnt++;
            }
        }
    }
    return cnt;
}

extern "C" s32 FishPick_PickInRow(u16 *a, s32 *b, s32 key, Unk_0202c60c *row) {
    Unk_0202c60c_Entry *en = row->entries;
    s32 result = 0;
    s32 n;
    if (en != NULL && row->count != 0 && (n = FishPick_CountInRow(key, row)) > 0) {
        s32 r = Random_GlobalBelow(n);
        s32 i;
        for (i = 0; i < row->count; en++, i++) {
            if (en->weight != 0 && en->fish < 0x38 && key == func_0209948c(en->weight)) {
                if (r == 0) {
                    u16 v;
                    if (en->fish < 0x38) {
                        v = en->fish + 0x12e8;
                    } else {
                        v = 0x12e8;
                    }
                    *a = v;
                    *b = en->unk_01;
                    result = 1;
                    break;
                }
                r--;
            }
        }
    }
    return result;
}

extern "C" s32 FishPick_CountInSlot(s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r6 = *p;
    s32 sum = 0;
    if (r6 != NULL) {
        s32 i;
        for (i = 0; i < 2; i++) {
            sum += FishPick_CountInRow(key, r6 + i);
        }
    }
    return sum;
}

extern "C" s32 FishPick_PickInSlot(u16 *a, s32 *b, s32 key, Unk_0202c60c **p) {
    Unk_0202c60c *r5 = *p;
    s32 result = 0;
    if (r5 != NULL) {
        s32 cnt = 0;
        s32 i;
        MI_CpuFill8(sFishRowFlags, result, 2);
        for (i = 0; i < 2; i++) {
            if (FishPick_CountInRow(key, r5 + i) > 0) {
                sFishRowFlags[i] = 1;
                cnt++;
            }
        }
        if (cnt > 0) {
            s32 r = Random_GlobalBelow(cnt);
            for (i = 0; i < 2; r5++, i++) {
                if (sFishRowFlags[i] == 1) {
                    if (r == 0) {
                        result = FishPick_PickInRow(a, b, key, r5);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}

extern "C" s32 FishPick_PickForHours(u16 *a, s32 *b, s32 *c, s32 key, Unk_0202c148_Tbl *g, u8 lo0, u8 hi0) {
    Unk_0202c60c **r5 = g->slots;
    s32 result = 0;
    if (r5 != NULL) {
        s32 prev = 3;
        s32 cnt = 0;
        s32 i, t;
        MI_CpuFill8(sFishSlotFlags, cnt, prev);
        s32 lo = lo0;
        s32 hi = hi0;
        for (; lo <= hi; lo++) {
            t = FishTable_GetHourSlot((u8)lo);
            u8 *fl = sFishSlotFlags + t;
            if (*fl == 0 && t != prev) {
                if (FishPick_CountInSlot(key, r5 + t) > 0) {
                    *fl = 1;
                    cnt++;
                }
                prev = t;
            }
        }
        if (cnt > 0) {
            s32 r = Random_GlobalBelow(cnt);
            for (i = 0; i < 3; r5++, i++) {
                if (sFishSlotFlags[i] == 1) {
                    if (r == 0) {
                        result = FishPick_PickInSlot(a, b, key, r5);
                        *c = i;
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return result;
}

extern "C" s32 FishPick_PickAnyHour(u16 *a, s32 *b, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    return FishPick_PickForHours(a, b, (s32 *)c, d, e, 0, 0x17);
}

extern "C" s32 FishPick_PickForDate(u16 *a, s32 lo, s32 hi, s32 d, u8 e, u8 x, u8 y) {
    Unk_0202c148_Tbl *tbl = ((Unk_0202c148_Tbl *)FishTable_GetForDate(d, (void *)((s32)FishTable_IsLateMonth(e))));
    if (tbl != NULL) {
        u8 mask = 0;
        s32 n = hi - lo + 1;
        s32 c1 = 0;
        s32 c2 = 0;
        for (; lo <= hi; lo++) {
            mask = mask | (1 << lo);
        }
        for (; n > 0; n--) {
            s32 r = Random_GlobalBelow(n);
            s32 j;
            for (j = 0; j < 5; j++) {
                if ((mask >> j) & 1) {
                    if (r == 0) {
                        if (FishPick_PickForHours(a, &c1, &c2, j, tbl, x, y)) {
                            return 1;
                        }
                        mask &= ~(1 << j);
                        break;
                    }
                    r--;
                }
            }
        }
    }
    return 0;
}

extern "C" s32 FishPick_PickForDateAnyHour(u16 *a, s32 b, s32 c, s32 d, u8 e) {
    return FishPick_PickForDate(a, b, c, d, e, 0, 0x17);
}

extern "C" s32 FishPick_PickWeightedRarity(u16 *a, s32 *outb, s32 c, s32 d, Unk_0202c148_Tbl *e) {
    s32 result = 0;
    s32 i;
    MI_CpuCopy8(sFishRarityWeights, sFishRarityWork, 5);
    for (i = 0; i < 5; i++) {
        s32 r4 = Talk_PickWeightedIndex((u8 *)sFishRarityWork, 5);
        if (r4 < 0 || r4 >= 5) {
            break;
        }
        if (FishPick_PickAnyHour(a, (s32 *)c, d, r4, e) == 1) {
            *outb = r4;
            result = 1;
            break;
        }
        sFishRarityWork[r4] = 0;
    }
    return result;
}

extern "C" void FishPick_PickNow(u16 *p) {
    Unk_0202c224_Local s;
    u8 buf[5];
    s32 out;
    s32 n;
    s.unk_00 = 0;
    s.unk_04 = 0;
    n = 5;
    Clock_GetDateTime(&s);
    u32 b4 = ((u8 *)&s)[4];
    Unk_0202c148_Tbl *tbl = ((Unk_0202c148_Tbl *)FishTable_GetForDate(b4, (void *)((s32)FishTable_IsLateMonth(((u8 *)&s)[3]))));
    if (tbl != NULL && tbl->slots != NULL) {
        s32 t = FishTable_GetHourSlot(((u8 *)&s)[2]);
        if ((u32)t < 3) {
            Unk_0202c60c **row = tbl->slots + t;
            MI_CpuFill8(buf, 0, n);
            while (n > 0) {
                s32 r = Random_GlobalBelow(n);
                s32 j;
                for (j = 0; j < 5; j++) {
                    if (buf[j] == 0) {
                        if (r == 0) {
                            FishPick_PickInSlot(p, &out, j, row);
                            buf[j] = 1;
                            break;
                        }
                        r--;
                    }
                }
                if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
                    break;
                }
                n--;
            }
        }
    }
}

extern "C" s32 FishPick_IsAvailable(u16 *p, s32 lo, s32 hi, s32 id, u8 e) {
    if (Unk_0202be64_InRange(p, 0x12e8, 0x131f)) {
        Unk_0202c148_Tbl *tbl = ((Unk_0202c148_Tbl *)FishTable_GetForDate(id, (void *)((s32)FishTable_IsLateMonth(e))));
        if (tbl != NULL && tbl->slots != NULL) {
            s32 prev = 3;
            u32 idx = (u8)(Unk_0202be64_InRange(p, 0x12e8, 0x131f) ? *p - 0x12e8 : -1);
            for (; lo <= hi; lo++) {
                s32 t = FishTable_GetHourSlot((u8)lo);
                if (t != prev) {
                    Unk_0202c60c *row = tbl->slots[t];
                    if (row != NULL) {
                        Unk_0202c60c_Entry *en;
                        s32 j;
                        for (j = 0; j < 2; row++, j++) {
                            en = row->entries;
                            if (en != NULL && row->count != 0) {
                                s32 k;
                                for (k = 0; k < row->count; en++, k++) {
                                    if (en->fish < 0x38 && en->fish == idx && en->weight != 0) {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                    prev = t;
                }
            }
        }
    }
    return 0;
}

extern "C" s32 InsectPick_GetHintVariant(s32 v) {
    switch (v) {
    case 12:
        return 0;
    case 1:
    case 2:
    case 4:
        return 1;
    }
    return 2;
}

extern "C" s32 Talk_FindInS8Array(s32 key, s8 *arr, s32 n) {
    s32 i;
    for (i = 0; i < n; arr++, i++) {
        if (*arr == key) {
            return key;
        }
    }
    return -1;
}

extern "C" s32 func_0202c094(void *a, void *b, s32 c, void *d, s32 e) {
    if (Unk_0202c094_IsZero(gFieldSceneKind)) {
        s32 i;
        for (i = 0; i < 8; i++) {
            s32 t = Talk_FindInS8Array(FieldInsect_GetPosAndKind(a, (u8)i), (s8 *)b, c);
            if (t != -1) {
                if (Vec_DistXZ(d, a) < e) {
                    return t;
                }
            }
        }
    }
    return -1;
}

extern "C" s32 Talk_IsCatchPlanDue(Unk_0202be64_Host *a, void *b, Unk_0202be64_Rec *y, u32 flag) {
    void *s = PlanErrand_GetRecord(b);
    s32 r4 = PlanErrand_GetStep(b);
    s32 r6;
    if (_ZN12ErrandRecord8isActiveEv(s) != 0 && _ZN12ErrandRecord7getStepEv(s) == 0 && _ZN12ErrandRecord8getClassEv(s) == 0 && r4 != 0
        && _ZN8PlayerId7isValidEv(PlanErrand_GetPlayer(b)) != 0) {
        r6 = _ZN12ErrandRecord7getKindEv(s);
        if (r4 < ((s32 (*)())PlanErrand_GetStepCount)()) {
            if (r6 == 0) {
                if (!Unk_0202be64_InRange(PlanErrand_GetShownItem(b), 0x12b0, 0x12e7)) {
                    goto ok;
                }
            }
            if (r6 != 1) {
                goto fail;
            }
            if (Unk_0202be64_InRange(PlanErrand_GetShownItem(b), 0x12e8, 0x131f)) {
                goto fail;
            }
        ok:
            Unk_0202be64_Rec *rec = ((Unk_0202be64_Rec *)PlanErrand_GetTime(b));
            if (flag == 0) {
                return 1;
            }
            if (*(long long *)rec == 0) {
                goto fail;
            }
            s32 r0 = DateTime_Compare(y, rec, 0x3f);
            if (r0 == 1) {
                s32 t;
                if (r4 < 5) {
                    t = sCatchPlanStageMinutes[r4];
                } else {
                    t = 0;
                }
                if (t > 0) {
                    if (DateTime_DiffMinutes(rec, y) >= t) {
                        return 1;
                    }
                }
            } else if (r0 == -1) {
                return 1;
            }
        }
    }
fail:
    return 0;
}

extern "C" void Talk_UpdateInsectCatchPlan(Unk_0202be64_Host *a, void *b, u8 *arr, void *c, u8 flag, Unk_0202be64_Rec *rec) {
    void *s = PlanErrand_GetRecord(b);
    if (_ZN12ErrandRecord7getKindEv(s) == 0) {
        s32 r6 = PlanErrand_GetStep(b);
        if (Talk_IsCatchPlanDue(a, b, rec, flag)) {
            s32 r7;
            if (r6 < 5) {
                r7 = arr[r6];
            } else {
                r7 = 0;
            }
            s32 rnd = Random_GlobalBelow(100);
            u16 val = *((u16 *)_ZN12ErrandRecord7getItemEv(s));
            switch (r6) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (rnd < r7) {
                    if (InsectPick_IsAvailable(&val, rec->b(2), rec->b(2), rec->b(4))) {
                        *PlanErrand_GetShownItem(b) = val;
                    }
                }
                break;
            case 2:
                if (rnd < r7) {
                    s32 k = Talk_PickWeightedIndex((u8 *)c, 4);
                    if (InsectPick_PickForMonthAnyHour(&val, k, k + 1, rec->b(4))) {
                        *PlanErrand_GetShownItem(b) = val;
                    }
                }
                break;
            }
            if (((Unk_0202be64_Host *)a)->vfunc_64() != NULL) {
                if (Unk_0202be64_InRange(PlanErrand_GetShownItem(b), 0x12b0, 0x12e7)) {
                    VillagerSync_Act3F(((Unk_0202be64_Host *)a)->vfunc_64(), PlanErrand_GetShownItem(b));
                }
            }
            u32 x = rec->v[0];
            u32 y = rec->v[1];
            Unk_0202be64_Rec *d = ((Unk_0202be64_Rec *)PlanErrand_GetTime(b));
            d->v[0] = x;
            d->v[1] = y;
        }
    }
}

void VillagerTalkTopics::updateFishCatchPlan(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr) {
    Unk_0202bd3c_Bytes *bytes = (Unk_0202bd3c_Bytes *)arr;
    void *v;
    s32 t;
    u32 lim;
    s32 roll;
    u16 val;
    v = PlanErrand_GetRecord(s1);
    if (_ZN12ErrandRecord7getKindEv(v) == 1) {
        t = PlanErrand_GetStep(s1);
        if (Talk_IsCatchPlanDue((Unk_0202be64_Host *)this, s1, (Unk_0202be64_Rec *)arr, p3) != 0) {
            if (t < 5) {
                lim = tbl[t];
            } else {
                lim = 0;
            }
            roll = Random_GlobalBelow(100);
            val = *((u16 *)_ZN12ErrandRecord7getItemEv(v));
            switch (t) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (roll < (s32)lim) {
                    if (FishPick_IsAvailable(&val, bytes->hour, bytes->hour, bytes->month, bytes->day) != 0) {
                        *PlanErrand_GetShownItem(s1) = val;
                    }
                }
                break;
            case 2:
                if (roll < (s32)lim) {
                    u32 r = ((u32)Talk_PickWeightedIndex((u8 *)p2, 4));
                    if (FishPick_PickForDateAnyHour(&val, r, r + 1, bytes->month, bytes->day) != 0) {
                        *PlanErrand_GetShownItem(s1) = val;
                    }
                }
                break;
            }
            if (((VillagerActor *)this)->vfunc_64()) {
                if (InRange(PlanErrand_GetShownItem(s1), 0x12e8, 0x131f)) {
                    VillagerSync_Act3F(((VillagerActor *)this)->vfunc_64(), PlanErrand_GetShownItem(s1));
                }
            }
            u32 w0 = arr->unk_00;
            u32 w1 = arr->unk_04;
            u32 *d = PlanErrand_GetTime(s1);
            d[0] = w0;
            d[1] = w1;
        }
    }
}

void VillagerTalkTopics::updateCatchPlans(u8 *a, void *b, u32 c) {
    if (((VillagerActor *)this)->vfunc_64()) {
        void *s = VillagerPlanBlock_GetErrand(Villager_GetPlan(((VillagerActor *)this)->vfunc_64()));
        Unk_0202bd3c_Arr arr;
        arr.unk_00 = 0;
        arr.unk_04 = 0;
        Clock_GetDateTime(&arr);
        ((void (*)(void *, void *, u8 *, void *, u32, Unk_0202bd3c_Arr *))Talk_UpdateInsectCatchPlan)(this, s,  a,  b,  c,  &arr);
        ((void (*)(void *, void *, u8 *, void *, u32, Unk_0202bd3c_Arr *))_ZN18VillagerTalkTopics19updateFishCatchPlanEPvPhS0_hP16Unk_0202bd3c_Arr)(this, s,  a,  b,  c,  &arr);
    }
}

s32 VillagerTalkTopics::getGreetingStatus(s32 *out) {
    Unk_0202bb88_Id *idb = (Unk_0202bb88_Id *)gSaveTownId;
    BOOL f5;
    void *h;
    void *sc;
    u16 *b;
    u16 *a;
    u32 arr[2];
    Unk_0202b4ac_Rec *rec;
    if (PlayerData_GetCurrent()) {
        void *t0 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
        rec = (Unk_0202b4ac_Rec *)t0;
    } else {
        rec = NULL;
    }
    arr[0] = 0;
    arr[1] = 0;
    if (unk_128_p == NULL) {
        return 0;
    }
    if (rec != NULL && ((void *)_ZN8PlayerId7isValidEv(rec)) != NULL && _ZN6TownId15getTownRelationEv(rec) != 0) {
        a = PlayerId_GetTownId(rec);
        b = PlayerId_GetTownId(VillagerMemory_GetPlayerId(unk_128_p));
        if (b[0] != a[0] || memcmp(b + 1, a + 1, 8) != 0) {
            return 6;
        }
    }
    Clock_GetDateTime(arr);
    h = VillagerMemory_GetTalkDate(unk_128_p);
    if (idb != NULL) {
        b = ((u16 *)VillagerMemory_GetTownId(unk_128_p));
        if (idb->townId != b[0] || memcmp(idb->townName, b + 1, 8) != 0) {
            return 5;
        }
    }
    if (DateTime_Compare(h, arr, 0x3f) == 1) {
        return 1;
    }
    sc = ((Unk_0202b4ac_Owner *)actor)->vfunc_64();
    f5 = FALSE;
    if (sc != NULL && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(sc)) != 0 && Villager_GetState(sc) != NULL &&
        ((Unk_0202b4ac_Rec *)Villager_GetState(sc))->bits.f2 != 0) {
        f5 = TRUE;
    }
    *out = DateTime_DiffDays(h, arr);
    if (_ZN6TownId15getTownRelationEv(rec) != 0) {
        if (*out >= 1 && !f5) {
            return 1;
        }
        return 2;
    }
    if (*out >= 60) {
        return 4;
    }
    if (*out >= 14) {
        return 3;
    }
    if (*out >= 1 && !f5) {
        return 1;
    }
    return 2;
}

BOOL VillagerTalkTopics::hasFallen() {
    return FALSE;
}

BOOL VillagerTalkTopics::isBeeSwarmOut() {
    BOOL f = IsZero(gFieldSceneKind);
    if (f && Insect_IsBeeSwarmOut() != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::isFirstMeeting(s32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_0201d2d0_Data *VillagerTalkTopics::getFirstMeetingTopic(u32 *out, void *scene) {
    void *p = PlayerData_GetCurrent();
    s32 t = Villager_GetMoveInKind(scene);
    if (t == 1) {
        if (_ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(p)) != 0) {
            t = 0;
        }
    }
    if (t == 2) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)_ZN20VillagerDataItemView18getMovedFromTownIdEv(scene), 1);
    } else {
        *out = Clock_GetTimeOfDay();
    }
    return &sTalkTopicsAiFirst[t];
}

BOOL VillagerTalkTopics::isForeignMemory(s32 x) {
    if (x == 5) {
        return TRUE;
    }
    return FALSE;
}

Unk_0201d2d0_Data *VillagerTalkTopics::getForeignTopic() {
    if (unk_128_p) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)((u16 *)VillagerMemory_GetTownId(unk_128_p)), 1);
    }
    return &sTalkTopicAiForeign;
}

BOOL VillagerTalkTopics::findDangerousInsect(volatile s32 *out, void *p) {
    u32 buf[3];
    *out = func_0202c094(buf, sDangerousInsects, 2, p, 0x6000);
    s32 t = *out;
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}

Unk_0201d2d0_Data *VillagerTalkTopics::getPoisonTopic(s32 x) {
    u16 v;
    u16 t;
    if (x == -1) {
        x = sDangerousInsects[Random_GlobalBelow(2)];
    }
    if (x != -1) {
        if ((u32)x < 0x38) {
            t = x + 0x12b0;
        } else {
            t = 0x12b0;
        }
        v = t;
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)((u32)&v), 0, 7);
    }
    return &sTalkTopicAiPoison;
}

BOOL VillagerTalkTopics::hasFleas() {
    return ((Unk_0202b4ac_Owner *)actor)->vfunc_b0();
}

BOOL VillagerTalkTopics::isPlayerStung(Unk_0202b4ac_Rec *rec) {
    void *p = PlayerData_GetCurrent();
    if (rec->bits.f0 == 0 && p != NULL && PlayerData_HasStungFace(p) != 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_0201d2d0_Data *VillagerTalkTopics::getBeeStingTopic(u32 *out, Unk_0202b4ac_Rec *rec) {
    *out = Clock_GetTimeOfDay();
    rec->bits.f0 = 1;
    return &sTalkTopicAiBee;
}

BOOL VillagerTalkTopics::isMoodAngry(s32 x) {
    if (x == 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::isMoodSad(s32 x) {
    if (x == 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::isMoodTired(s32 x) {
    if (x == 4) {
        return TRUE;
    }
    return FALSE;
}

void VillagerTalkTopics::selectGreeting(Unk_0201d2d0_Out *out) {
    void *scene = ((Unk_0202b4ac_Owner *)actor)->villagerData;
    Unk_0202b4ac_Rec *rec = (Unk_0202b4ac_Rec *)Villager_GetState(scene);
    u32 unk20;
    s32 status;
    s32 unk24;
    s32 kind;
    Unk_0201d2d0_Data *d;
    s32 sel;
    s32 v28;
    Unk_0202b520_Pair pair;
    s32 n;
    s32 v34;
    s32 x;
    u32 t[5];
    u32 obj[0x34 / 4];
    unk20 = VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(scene));
    n = 0;
    status = getGreetingStatus(&n);
    unk24 = VillagerState_GetMood(rec);
    kind = Weather_GetFallingPrecip();
    v34 = 0;
    PlayerData_GetCurrent();
    v28 = 0;
    sel = -1;
    pair.unk_00 = 0xfff1;
    x = sel;
    setGreetingArgs();
    if (hasFallen()) {
        d = &sTalkTopicAiFall;
        if (status == 0) {
            noMemoryUpdate = 1;
        }
    } else if (isBeeSwarmOut()) {
        d = &sTalkTopicAiRun;
        if (status == 0) {
            noMemoryUpdate = 1;
        }
    } else if (isFirstMeeting(status)) {
        d = getFirstMeetingTopic((u32 *)&v34, scene);
    } else if (status == 6) {
        d = &sTalkTopicAiMfirst;
        v34 = 7;
        v28 = 3;
    } else if (findDangerousInsect(&x, &((Unk_0202b4ac_Owner *)actor)->position)) {
        d = getPoisonTopic(x);
    } else if (hasFleas()) {
        d = &sTalkTopicAiFlea;
    } else if (isForeignMemory(status)) {
        d = getForeignTopic();
    } else if (status == 4) {
        d = &sTalkTopicAi30days;
        if (n >= 0x186) {
            sel = 1;
            v34 = 5;
            v28 = sel;
        }
    } else if (status == 3) {
        d = &sTalkTopicAi7days;
    } else if (isPlayerStung(rec)) {
        d = getBeeStingTopic((u32 *)&v34, rec);
    } else if (isMoodAngry(unk24)) {
        d = &sTalkTopicAiAnger;
    } else if (isMoodSad(unk24)) {
        d = &sTalkTopicAiSad;
    } else if (isMoodTired(unk24)) {
        d = &sTalkTopicAiTire;
    } else if (Villager_IsGreeter(scene) && ReddShop_IsTentOpen() && !ReddPassword_CurrentPlayerKnows()) {
        _ZN18ReddPasswordStringC1Ev(obj);
        _ZN8ReddShop11getPasswordEv(data_021ed2c0)->getAnswerText(obj);
        d = &sTalkTopicAiPassword;
        _ZN15TalkWindowState7setSlotEiPv(window, 4, obj);
        _ZN18ReddPasswordStringD1Ev(obj);
    } else if (_ZN11CommManager8isOnlineEv(gCommManager) == 0 && unk_128_p != NULL && _ZN14VillagerMemory18hasFortuneGreetingEv(unk_128_p) != 0 &&
               Pocket_FindEmpty() != -1) {
        d = &sTalkTopicAiFortune;
        _ZN12ItemPickSpec3setEii(t, 0, 0);
        ItemPick_One(&pair.fortuneItem, t, 0, 0, 1, 1, 0);
        itemToPlayer = pair.fortuneItem;
        ItemPickSpec_Destruct(t);
        itemToPlayerIsReceived = 0;
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)((u32)&itemToPlayer), 0, 7);
        if (unk_128_p != NULL) {
            _ZN14VillagerMemory20clearFortuneGreetingEv(unk_128_p);
        }
    } else if (Scene_InNookShop()) {
        d = &sTalkTopicAiShop1;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(scene))) != 4) {
            v34 = 1;
        }
    } else if (Scene_GetCurrent() == 10) {
        d = &sTalkTopicAiShop2;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(scene))) != 3) {
            v34 = 1;
        }
    } else if (Scene_InMuseumRoom() && SceneId_GetMuseumRoom(Scene_GetCurrent()) == 1) {
        d = &sTalkTopicAiShop3;
    } else if (status == 1) {
        if (Scene_InVillagerHouse()) {
            d = &sTalkTopicAiIndoor;
        } else if (kind == 1) {
            d = &sTalkTopicAiRain1;
        } else if (kind == 2) {
            d = &sTalkTopicAiSnow1;
        } else {
            d = &sTalkTopicAiToday1;
        }
        v34 = Clock_GetTimeOfDay();
    } else if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(scene))) == 8) {
        d = &sTalkTopicAiBoom;
    } else if (TalkRepeat_GetLevel(VillagerState_GetTalkRepeat(rec)) != 0) {
        d = &sTalkTopicAiPersis;
        if (TalkRepeat_GetLevel(VillagerState_GetTalkRepeat(rec)) == 2) {
            v34 = 1;
        }
    } else if (unk24 == 1) {
        d = &sTalkTopicAiJoy;
        v34 = Clock_GetTimeOfDay();
    } else {
        BOOL f = IsZero(gFieldSceneKind);
        if (f && kind == 1) {
            d = &sTalkTopicAiRain2;
        } else if (f && kind == 2) {
            d = &sTalkTopicAiSnow2;
        } else {
            d = &sTalkTopicAiToday2;
            if (Random_GlobalBelow(9) != 0) {
                v28 = (u8)(d->variantCount - 1);
            }
            v34 = Clock_GetTimeOfDay();
        }
    }
    if (d != NULL) {
        if (sel == -1) {
            sel = d->variantCount;
        }
        ((void (*)(void *, void *, void *, s32, u32, u32, u32, u32, u32))Talk_SelectTopicMessage)(this,  &topicFile,  &topicIndex,  30,  unk20,  d->key,  (u8)sel,  v34,  v28);
    }
    if (n > 0) {
        s32 a, b;
        if (n >= 0x46) {
            a = 9;
        } else {
            a = n / 7;
        }
        if (n >= 0x186) {
            b = 12;
        } else {
            b = n / 30;
        }
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, a, 2, 1, 0, 0);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, b, 3, 2, 0, 0);
    }
    rec->unk_1d |= 4;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::setStringTableArg(u32 a, u32 b) {
    u32 v = 0;
    u32 r = TopicWord_PickRandom(&v, b);
    Unk_0202b4ac_Str s;
    s.c[0] = v;
    s.c[1] = 0;
    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, a, &s, (void *)r, &s.c[1]);
}

void VillagerTalkTopics::setFashionArg(u32 a, void *b) {
    u8 *p = (u8 *)Villager_GetFashionTaste(b);
    if (p) {
        Unk_0202b4ac_Str s;
        s.c[0] = *p;
        s.c[1] = 0;
        _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, a, &s, ((u8 *)"st_fashion"), &s.c[1]);
    }
}

void VillagerTalkTopics::setGreetingArgs() {
    void *r4 = actor->villagerData;
    u8 buf[2];
    s32 i;
    if (r4 != 0) {
        buf[0] = Date_GetStarSignOf(Villager_GetBirthday(r4));
        buf[1] = 0;
        _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 0, buf, ((u8 *)"st_constellation"), &buf[1]);
        this->setFashionArg(6, r4);
    }
    for (i = 0; i < 4; i++) {
        this->setStringTableArg(i + 7, data_020c7508[i]);
    }
}

void VillagerTalkTopics::ensureSpeakerMemory() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&unk_128_p), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
}

void VillagerTalkTopics::continueAfterGreeting() {
    void *r6 = PlayerData_GetCurrent();
    void *r7 = actor->villagerData;
    void *r4 = (void *)((s32)_ZN10PlayerData10getErrandsEv(r6));
    u32 v = ((s32)Villager_GetPlayerErrandKind(gSaveVillagers, r7, r6));
    Unk_0201d2d0_Out out;
    u8 b;
    u32 buf[2];
    if (v < 0x16) {
        buf[0] = 0;
        buf[1] = 0;
        Clock_GetDateTime(buf);
        switch (Errand_GetGroup(v)) {
        case 0:
            break;
        case 1:
            errandSlot = PlayerErrands_GetSlot((s32)r4, (void *)((s32)func_0209ac1c(v)));
            if (errandSlot != 0) {
                if (_ZN12ErrandRecord7getStepEv(PlayerErrandSlot_GetRecord(errandSlot)) == 0) {
                    if (DateTime_Compare((void *)ErrandRecord_GetTime(PlayerErrandSlot_GetRecord(errandSlot)), buf, 0x3f) == -1) {
                        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[6]));
                        ((VillagerTalk *)this)->setUnk150((u32)PlayerErrandSlot_GetRecord(errandSlot));
                    } else {
                        switch (_ZN12ErrandRecord7getKindEv(PlayerErrandSlot_GetRecord(errandSlot))) {
                        case 10:
                            r4 = _ZN10PlayerData12getInventoryEv(r6);
                            if (Talk_FindFlaggedPocketItem(r4, (u16 *)((s32)_ZN12ErrandRecord7getItemEv(PlayerErrandSlot_GetRecord(errandSlot)))) == -1) {
                                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[9]));
                                ((VillagerTalk *)this)->setUnk150((u32)PlayerErrandSlot_GetRecord(errandSlot));
                            }
                            break;
                        case 19:
                            r4 = Talk_FindLetterState7or8(_ZN10PlayerData12getInventoryEv(r6));
                            if (r4 != 0 && _ZN10LetterView8getStateEv(r4) == 8) {
                                Letter_Clear(r4);
                                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[9]));
                                ((VillagerTalk *)this)->setUnk150((u32)PlayerErrandSlot_GetRecord(errandSlot));
                            }
                            break;
                        }
                    }
                }
            }
            break;
        case 3: {
            u8 *p = (u8 *)r4 + 0x88;
            void *q = p + 0xc;
            void *s = p + 0x18;
            if (_ZN12ErrandRecord8isActiveEv(q) != 0 && _ZN12ErrandRecord7getKindEv(q) == 0x15 && _ZN12ErrandRecord7getStepEv(q) == 0 && HouseVisitInvite_IsFrom(p, _ZN12VillagerData13getVillagerIdEv(r7)) != 0 && DateTime_Compare(buf, s, 0x3f) == 1) {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[46]));
                ((VillagerTalk *)this)->setUnk150((u32)q);
            }
            break;
        }
        }
    }
    if (((s32)((VillagerTalk *)this)->getUnk150()) == 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sConnectTopic);
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::select3pTalk(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data local = data_020d7a80;
    u8 t = VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData));
    u32 r7 = 0;
    void *r6;
    s32 i;
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&unk_128_p), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    if (((void *)((VillagerTalk *)actor)->getPartner())) {
        r6 = ((Unk_0201d2d0_Parent *)((void *)((VillagerTalk *)actor)->getPartner()))->villagerData;
        r7 = VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r6));
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&partnerMemory), (s32 *)(&partnerMemoryIndex), (s32)r6, 0);
    }
    if (r7 < 6) {
        local.key = sTalkKeys3p[r7];
    }
    if (local.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, t, local.key, local.variantCount, 0, 0);
        out->fileName = (u32)&topicFile;
        out->msgIndex = topicIndex;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, _ZN12VillagerData13getVillagerIdEv(actor->villagerData), 0);
    if (((void *)((VillagerTalk *)actor)->getPartner())) {
        _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, _ZN12VillagerData13getVillagerIdEv(((Unk_0201d2d0_Parent *)((void *)((VillagerTalk *)actor)->getPartner()))->villagerData), 1);
    }
    for (i = 0; i < 5; i++) {
        this->setStringTableArg(i + 2, data_020c7518[i]);
    }
}

BOOL VillagerTalkTopics::selectApHabit() {
    VillagerActor *p = actor;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(p->villagerData)), sTalkTopicApHabit.key, 9, p->villagerTalk.habitTopicKind & 1, sTalkTopicApHabit.variantCount);
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sApSubTopics);
    return TRUE;
}

BOOL VillagerTalkTopics::selectApItem() {
    s32 r4 = 0;
    u32 r6;
    if (unk_128_p != 0) {
        r6 = 0;
        if (_ZN14VillagerMemory11isGiftGivenEv(unk_128_p) == 0) {
            if (_ZN14VillagerMemory13getFriendshipEv(unk_128_p) >= 0x50) {
                if (Pocket_FindEmpty() != -1) {
                    _ZN14VillagerMemory12setGiftGivenEv(unk_128_p);
                    r4 = 1;
                } else {
                    r4 = 2;
                }
            } else {
                r4 = 3;
            }
        }
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicApItem.key, sTalkTopicApItem.variantCount, r4, 0);
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))) {
            r6 = VillagerId_GetSpecies(_ZN12VillagerData13getVillagerIdEv(actor->villagerData));
        }
        itemToPlayer = r6 < 0x9c ? 0x47d8 + r6 * 4 : 0x47d8;
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectApNickn() {
    u32 v;
    Clock_GetDate(&v);
    if (unk_128_p != 0 && _ZN14VillagerMemory13getFriendshipEv(unk_128_p) >= 0 && SaveVillagers_IsNicknameCooldownOver(gSaveVillagers, &v)) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), (*(Unk_0201d2d0_Data *)&sTalkTopicApNickn).key, (*(Unk_0201d2d0_Data *)&sTalkTopicApNickn).variantCount, 0, 0);
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sApSubTopics[6]));
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectApMail() {
    void *r6 = actor->villagerData;
    s32 flag = 0;
    s32 i;
    u32 buf[8];
    s32 n;
    for (i = 0; i < 8; i++) {
        buf[i] = flag;
    }
    n = Villager_CollectOtherMemories(r6, buf, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()), 2);
    if (n > 0) {
        unk_134 = Talk_PickRandomMemory(r6, (void **)buf, n, (BOOL (*)(void *, void *))((void *)((void (*)())func_020215f8)));
    }
    if (unk_134 == 0) {
        flag = 1;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicApMail.key, sTalkTopicApMail.variantCount, flag, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectApPresent1() {
    u16 v[2];
    void *r4;
    if (Pocket_FindEmpty() != -1) {
        r4 = actor->villagerData;
        Villager_PickRandomReceivedItem(v, r4);
        itemToPlayer = v[0];
        if (itemToPlayer != 0xfff1) {
            itemToPlayerIsReceived = 1;
        } else {
            Talk_PickRandomTradeItem(&v[1]);
            itemToPlayer = v[1];
            itemToPlayerIsReceived = 0;
        }
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r4)), sTalkTopicApPresent1.key, sTalkTopicApPresent1.variantCount, 0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectApPresent2() {
    u16 v;
    if (Pocket_FindEmpty() != -1) {
        Talk_PickRandomTradeItem(&v);
        itemToPlayer = v;
        itemToPlayerIsReceived = 0;
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicApPresent2.key, sTalkTopicApPresent2.variantCount, 0, 0);
        return TRUE;
    }
    return FALSE;
}

extern "C" void Talk_PickPocketItemForPlan(u16 *out, s32 idx) {
    Unk_0202ac98_Buf buf;
    s32 i, n;
    *out = 0xfff1;
    if (PlanState_GetGroup(idx) == 0 && (u32)idx < 5) {
        if (Pocket_CountKind(&buf, sApPocketItemKinds[idx]) > 0) {
            n = Random_GlobalBelow(buf.count);
            for (i = 0; i < 15; i++) {
                if ((buf.slotMask >> i) & 1) {
                    if (n == 0) {
                        *out = Pocket_GetItem(i);
                        break;
                    }
                    n--;
                }
            }
        }
    }
}

extern "C" s32 Talk_RoundBells(s32 x) {
    x = (x + 5) / 10 * 10;
    if (x < 10) {
        x = 10;
    }
    return x;
}

BOOL VillagerTalkTopics::selectApBuy() {
    void *r6 = actor->villagerData;
    u16 v;
    Villager_GetPlan(r6);
    ((void (*)())VillagerPlanBlock_GetPlan)();
    Talk_PickPocketItemForPlan(&v, ((u32 (*)())_ZN12VillagerPlan8getStateEv)());
    itemFromPlayer = v;
    if (itemFromPlayer != 0xfff1) {
        s32 t = Random_GlobalBelow2(0xccd) + 0xccd;
        t *= Item_GetPrice(&itemFromPlayer);
        price = (t >> 14) + ((u32)FengShui_GetWestTotal()) * 3;
        price = Talk_RoundBells(price);
        if (price <= _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), 1)) {
            Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r6)), sTalkTopicApBuy.key, sTalkTopicApBuy.variantCount, 0, 0);
            _ZN16ActorTalkRequest13setNumberSlotEijiii(this, price, 1, 10, 1, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectApTrade() {
    void *p = actor->villagerData;
    u16 buf[3];
    Villager_GetPlan(p);
    ((void * (*)())VillagerPlanBlock_GetPlan)();
    Talk_PickPocketItemForPlan((u16 *)(&buf[0]), (s32)(((void * (*)())_ZN12VillagerPlan8getStateEv)()));
    itemFromPlayer = buf[0];
    if (itemFromPlayer != 0xfff1) {
        Villager_PickRandomReceivedItem(&buf[1], p);
        itemToPlayer = buf[1];
        if (itemToPlayer != 0xfff1) {
            itemToPlayerIsReceived = 1;
        } else {
            Talk_PickRandomTradeItem((u16 *)(&buf[2]));
            itemToPlayer = buf[2];
            itemToPlayerIsReceived = 0;
        }
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(p)), sTalkTopicApTrade.key, sTalkTopicApTrade.variantCount, 0, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectApSell() {
    void *p = actor->villagerData;
    u16 buf[2];
    s32 t, u;
    Villager_GetPlan(p);
    ((void * (*)())VillagerPlanBlock_GetPlan)();
    ((void * (*)())_ZN12VillagerPlan8getStateEv)();
    if (Pocket_FindEmpty() != -1) {
        Villager_PickRandomReceivedItem(&buf[0], p);
        itemToPlayer = buf[0];
        if (itemToPlayer != 0xfff1) {
            itemToPlayerIsReceived = 1;
        } else {
            Talk_PickRandomTradeItem((u16 *)(&buf[1]));
            itemToPlayer = buf[1];
            itemToPlayerIsReceived = 0;
        }
        if (itemToPlayer != 0xfff1) {
            t = Random_GlobalBelow2(0xccd) + 0xccd;
            t = (t * Item_GetPrice(&itemToPlayer)) >> 12;
            u = FengShui_GetWestTotal() * 3;
            if (t <= u) {
                u = 0;
            }
            price = Talk_RoundBells(t - u);
            if (price > 0xbb8) {
                price = 0xbb8;
            }
            if (price <= _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), 1)) {
                Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(p)), sTalkTopicApSell.key, sTalkTopicApSell.variantCount, 0, 0);
                _ZN16ActorTalkRequest13setNumberSlotEijiii(this, price, 2, 10, 1, 0);
                return TRUE;
            }
        }
    }
    return FALSE;
}

void VillagerTalkTopics::selectApTopic(Unk_0201d2d0_Out *out) {
    static Unk_0202a750_Fn tbl[9] = { data_020d7a08, data_020d79e8, data_020d7918, data_020d7a18, data_020d7920, data_020d7910, data_020d79f0, data_020d7be0, data_020d7d98 };
    s32 r, i;
    u8 arr[9];
    r = 0;
    MI_CpuCopy8(sApTopicWeights, arr, 9);
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, r);
    while (r == 0) {
        i = this->pickTsuTopicIndex((u8 *)arr, 9);
        if (i >= 0 && i < 9) {
            r = (this->*tbl[i])();
            if (r == 0) {
                arr[i] = 0;
            }
        } else {
            (this->*tbl[Random_GlobalBelow(2)])();
            break;
        }
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    this->setStringTableArg(4, 3);
    this->setStringTableArg(6, 4);
    if (itemFromPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
    }
    if (itemToPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 1, 7);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 2, 7);
    }
    customFn0 = (Unk_020238b0_Fn)(data_020d7ee8);
    customFn1 = (Unk_020238b0_Fn)(data_020d7cb0);
    customFn2 = (Unk_020238b0_Fn)(data_020d7c98);
    customFn3 = (Unk_020238b0_Fn)(data_020d7d30);
    customFn4 = (Unk_020238b0_Fn)(data_020d7ae0);
}

namespace nZ {
extern "C" {
void * data_020d7ac8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7a90[2] = {
    (void *)_ZN18VillagerTalkTopics18onNloseCatchPickedEv, 0,
};
const void *const sTalkTopicQ06Normal[2] = {
    (void *)sTalkKeyQ06Normal, (void *)0x3,
};
void * data_020d7e20[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuFoActEv, 0,
};
void * data_020d7d70[2] = {
    (void *)_ZN18VillagerTalkTopics15stopBirthdayBgmEv, 0,
};
char sTalkKeyTsuSeAct[11] = "tsu_se_act";
void * sTalkTopicQ04Miss[2] = {
    (void *)sTalkKeyQ04Miss, (void *)0x3,
};
const void *const sTalkTopicEtcHit[2] = {
    (void *)sTalkKeyEtcHit, (void *)0x5,
};
const u8 data_020c7508[4] = {
    0x01, 0x00, 0x03, 0x02,
};
void * sTalkKeysQ02Con[5] = {
    (void *)sTalkKeyQ02Con1, (void *)sTalkKeyQ02Con245, (void *)sTalkKeyQ02Con3, (void *)sTalkKeyQ02Con245,
    (void *)sTalkKeyQ02Con245,
};
const void *const sTalkTopicQ10Leave[2] = {
    (void *)sTalkKeyQ10Leave, (void *)0x3,
};
char sTalkKeyTsuNoAct[11] = "tsu_no_act";
char sTalkKeyAiJoy[7] = "ai_joy";
void * data_020d7d08[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics18tryOfferNewRequestEPvS0_, 0,
};
char sTalkKey3pTa[6] = "3p_ta";
const void *const sTalkTopicApSell[2] = {
    (void *)sTalkKeyApSell, (void *)0x3,
};
char sTalkKeyAiForeign[11] = "ai_foreign";
void * data_020d7c08[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuSeActEv, 0,
};
void * data_020d7d48[2] = {
    (void *)_ZN18VillagerTalkTopics16checkRequestItemEv, 0,
};
const void *const sTalkTopicAiShop1[2] = {
    (void *)sTalkKeyAiShop1, (void *)0x4,
};
char sTalkKeyEvCountdown[13] = "ev_countdown";
const void *const sTalkTopicAiToday2[2] = {
    (void *)sTalkKeyAiToday2, (void *)0x4,
};
char sTalkKeyApBuy[7] = "ap_buy";
const void *const sTalkTopicApPresent2[2] = {
    (void *)sTalkKeyApPresent2, (void *)0x3,
};
void * data_020d7ae8[2] = {
    (void *)_ZN25VillagerTalkHolidayTopics16startEvBirthMoveEv, 0,
};
char sTalkKeyQ01Con245[13] = "q01_con2_4_5";
char sTalkKeyAiSnow1[9] = "ai_snow1";
const void *const sTalkTopicEvCountdown[2] = {
    (void *)sTalkKeyEvCountdown, (void *)0x2,
};
const u8 sInsectRarityWeights[5] = {
    0x1a, 0x17, 0x14, 0x11, 0x0e,
};
const void *const sTalkTopicQFull[2] = {
    (void *)sTalkKeyQFull, (void *)0x3,
};
const void *const sTalkTopicQ06Payback[2] = {
    (void *)sTalkKeyQ06Payback, (void *)0x3,
};
void * data_020d79f8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicEtcCancel[2] = {
    (void *)sTalkKeyEtcCancel, (void *)0x3,
};
Unk_021be8c0 sEvAcornTopicTable[9];
const void *const sTalkTopicQItemB[2] = {
    (void *)sTalkKeyQItem, (void *)0x3,
};
void * data_020d7c58[2] = {
    (void *)_ZN18VillagerTalkTopics15gotoEvArbeitEndEv, 0,
};
u8 sFishRowFlags[2];
const void *const sTalkTopicQ01Plose[2] = {
    (void *)sTalkKeyQ01Plose, (void *)0x2,
};
void * data_020d7ad0[2] = {
    (void *)_ZN12VillagerMood18updateMood3EffectsEP12VillagerTalk, 0,
};
void * data_020d7c78[2] = {
    (void *)_ZN29VillagerTalkRequestItemTopics12clearRequestEv, 0,
};
void * data_020d7f58[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13func_02021448EPPvi, 0,
};
void * data_020d7c70[2] = {
    (void *)_ZN18VillagerTalkTopics18onArbeitItemPickedEv, 0,
};
char sTalkKeyTsuDress[10] = "tsu_dress";
void * data_020d7f98[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13func_02021448EPPvi, 0,
};
const void *const sTalkTopicEvAcorn[2] = {
    (void *)sTalkKeyEvAcorn, (void *)0x3,
};
void * data_020d7908[2] = {
    (void *)_ZN18VillagerTalkTopics20onDeliveryItemPickedEv, 0,
};
void * data_020d7b98[2] = {
    (void *)_ZN18VillagerTalkTopics17selectTsuHobbyActEv, 0,
};
void * data_020d7da0[2] = {
    (void *)_ZN29VillagerTalkRequestItemTopics18finishRequestChainEv, 0,
};
const void *const sTalkTopicQNo[2] = {
    (void *)sTalkKeyQNo, (void *)0x3,
};
char sTalkKeyTsuAlways[11] = "tsu_always";
Unk_021be8c0 sEvAdmireTopicTable[8];
char sTalkKeyQ02Nlose[10] = "q02_nlose";
char sTalkKeyQ04Miss[9] = "q04_miss";
char sTalkKeyTsuFriend[11] = "tsu_friend";
char sTalkKeyAi30days[10] = "ai_30days";
const u32 sMoodAnimNextIds[5] = {
    0x00000001, 0x000000e6, 0x000000e8, 0x000000ea, 0x000000e8,
};
void * data_020d7b70[2] = {
    (void *)_ZN18VillagerTalkTopics16giveBackHeldItemEv, 0,
};
void * sTalkKeysQ05Talk[7] = {
    (void *)sTalkKeyQ05Talk12, (void *)sTalkKeyQ05Talk12, (void *)sTalkKeyQ05Talk35, (void *)sTalkKeyQ05Talk35,
    (void *)sTalkKeyQ05Talk35, (void *)sTalkKeyQ05Talk67, (void *)sTalkKeyQ05Talk67,
};
const void *const sRequestInsectPickers[5] = {
    (void *)VillagerRequest_PickInsectStep0, (void *)VillagerRequest_PickInsectStep1, 0, (void *)VillagerRequest_PickInsectStep3,
    (void *)VillagerRequest_PickInsectStep4,
};
char sTalkKeyAiIndoor[10] = "ai_indoor";
char sTalkKeyAiToday1[10] = "ai_today1";
const void *const sTalkTopicTsuInHint[2] = {
    (void *)sTalkKeyTsuInHint, (void *)0x1,
};
void * data_020d7c48[2] = {
    (void *)_ZN12VillagerTalk18attrPlayMemoryTuneEv, 0,
};
char sTalkKeyTsuSpot[9] = "tsu_spot";
void * data_020d7a08[2] = {
    (void *)_ZN18VillagerTalkTopics13selectApHabitEv, 0,
};
const u8 data_020c7a5c[12] = {
    0x71, 0x30, 0x35, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
const void *const sTalkTopicTsuEvent2[2] = {
    (void *)sTalkKeyTsuEvent2, (void *)0x1,
};
void * data_020d7a38[2] = {
    (void *)_ZN12VillagerMood17beginMood2EffectsEP12VillagerTalk, 0,
};
void * data_020d7a30[2] = {
    (void *)_ZN12VillagerTalk14attrShowLetterEv, 0,
};
void * data_020d7cd8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicQ06Open[2] = {
    (void *)sTalkKeyQ06Open, (void *)0x3,
};
const void *const sTalkTopicQ12Report[2] = {
    (void *)sTalkKeyQ12Report, (void *)0x3,
};
const u32 sAcornRewardItemKinds[3] = {
    0x00000000, 0x00000002, 0x00000001,
};
void * data_020d7920[2] = {
    (void *)_ZN18VillagerTalkTopics16selectApPresent1Ev, 0,
};
const void *const sTalkTopicAiBoom[2] = {
    (void *)sTalkKeyAiBoom, (void *)0x5,
};
const void *const sTalkTopicQ02Plose[2] = {
    (void *)sTalkKeyQ02Plose, (void *)0x2,
};
char sTalkKeyTsuHappyroom[14] = "tsu_happyroom";
const void *const sRequestFishPickers[5] = {
    (void *)VillagerRequest_PickFishStep0, (void *)VillagerRequest_PickFishStep1, 0, (void *)VillagerRequest_PickFishStep3,
    (void *)VillagerRequest_PickFishStep4,
};
const void *const sTalkTopicAiTire[2] = {
    (void *)sTalkKeyAiTire, (void *)0x5,
};
void * data_020d7d90[2] = {
    (void *)_ZN23VillagerTalkRumorTopics18pickMemoryLikedOldEPPvi, 0,
};
const void *const sTalkTopicTsuHappyroom[2] = {
    (void *)sTalkKeyTsuHappyroom, (void *)0x1,
};
const void *const sTalkTopicEvFirework[2] = {
    (void *)sTalkKeyEvFirework, (void *)0x2,
};
void * data_020d7d78[2] = {
    (void *)_ZN18VillagerTalkTopics8gotoQPayEv, 0,
};
void * data_020d7d40[2] = {
    (void *)_ZN25VillagerTalkKaraokeTopics16endEvKaraokeMsg8Ev, 0,
};
u8 sFishSlotFlags[3];
u32 sTalkTopicQClearDefault[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7cc8[2] = {
    (void *)_ZN18VillagerTalkTopics17onNicknameEnteredEv, 0,
};
u8 sTalkKeyQ03Thanks[11] = "q03_thanks";
u32 data_020d7a80[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7b28[2] = {
    (void *)_ZN12VillagerTalk12attrGiveItemEv, 0,
};
u8 sTalkKeyQ04Thanks[11] = "q04_thanks";
void * data_020d7aa0[2] = {
    (void *)_ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv, 0,
};
char sTalkKeyAiPersis[10] = "ai_persis";
void * data_020d7d10[2] = {
    (void *)_ZN18VillagerTalkTopics10gotoQNloseEv, 0,
};
const void *const sTalkTopicAiFall[2] = {
    (void *)sTalkKeyAiFall, (void *)0x3,
};
char sTalkKeyTsuMemory[11] = "tsu_memory";
char sTalkKeyApSell[8] = "ap_sell";
const void *const sTalkTopicTsuItem[2] = {
    (void *)sTalkKeyTsuItem, (void *)0x3,
};
char sTalkKeyTsuShome[10] = "tsu_shome";
const void *const sTalkTopicQ06Good[2] = {
    (void *)sTalkKeyQ06Good, (void *)0x3,
};
char sTalkKeyApTrade[9] = "ap_trade";
void * data_020d79e0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyTsuGhome[10] = "tsu_ghome";
void * data_020d7bd8[2] = {
    (void *)_ZN18VillagerTalkTopics19keepDislikedPresentEv, 0,
};
const void *const sRequestShirtPickers[7] = {
    0, 0, (void *)VillagerRequest_PickShirtOtherGroup, (void *)VillagerRequest_PickShirtOtherGroup,
    (void *)VillagerRequest_PickShirtOfGroup, (void *)VillagerRequest_PickShirtOfGroup, (void *)VillagerRequest_PickShirtOfGroupForPlayer,
};
const void *const sTalkTopicAiToday1[2] = {
    (void *)sTalkKeyAiToday1, (void *)0x3,
};
char sTalkKeyEvAdmire[10] = "ev_admire";
void * data_020d7938[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ10Req[8] = "q10_req";
void * sTalkKeysQReturn[5] = {
    (void *)sTalkKeyQ01Return, (void *)sTalkKeyQ02Return, (void *)sTalkKeyQ03Return, 0,
    (void *)sTalkKeyQ05Return,
};
const void *const sTalkTopicQ07Open[2] = {
    (void *)sTalkKeyQ07Open, (void *)0x3,
};
const void *const sTalkTopicQError3[2] = {
    (void *)sTalkKeyQError3, (void *)0x2,
};
const void *const sTalkTopicQ07Over[2] = {
    (void *)sTalkKeyQ07Over, (void *)0x1,
};
char sTalkKeyQ03Return[11] = "q03_return";
const void *const sTalkTopicQ06Lost[2] = {
    (void *)sTalkKeyQ06Lost, (void *)0x3,
};
void * data_020d7910[2] = {
    (void *)_ZN18VillagerTalkTopics16selectApPresent2Ev, 0,
};
char sTalkKeyApPresent1[12] = "ap_present1";
Unk_021be8c0 sEvCountdownTopicTable[8];
void * data_020d7da8[2] = {
    (void *)_ZN18VillagerTalkTopics14onHabitEnteredEv, 0,
};
char sTalkKeyApPresent2[12] = "ap_present2";
void * data_020d7f50[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuInHintEv, 0,
};
char sTalkKeyQ02Comp[9] = "q02_comp";
const void *const sTalkTopicEvInsect[2] = {
    (void *)sTalkKeyEvInsect, (void *)0x3,
};
const void *const sTalkTopicQ07End[2] = {
    (void *)sTalkKeyQ07End, (void *)0x3,
};
void * sTalkKeysQComp[5] = {
    (void *)sTalkKeyQ01Comp, (void *)sTalkKeyQ02Comp, (void *)sTalkKeyQ03Comp, (void *)sTalkKeyQ04Dress,
    (void *)sTalkKeyQ05Comp,
};
void * data_020d7ce0[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13func_02021564EPPvi, 0,
};
Unk_021be8c0 sEtcConnectTopicTable[6];
char sTalkKeyQ06End[8] = "q06_end";
char sTalkKeyQ05Return[11] = "q05_return";
char sTalkKeyQ03Comp[9] = "q03_comp";
void * data_020d7a60[2] = {
    (void *)_ZN18VillagerTalkTopics18advanceRequestStepEv, 0,
};
void * data_020d7a68[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7a70[2] = {
    (void *)_ZN18VillagerTalkTopics10gotoQPwin2Ev, 0,
};
const void *const sTalkTopicQ07Read[2] = {
    (void *)sTalkKeyQ07Read, (void *)0x3,
};
void * data_020d79a0[2] = {
    (void *)_ZN12VillagerTalk21setConstellationSlotsEv, 0,
};
char sTalkKeyQ06Payback[12] = "q06_payback";
const void *const sTalkTopicQ12FullB[2] = {
    (void *)sTalkKeyQ12Full, (void *)0x2,
};
void * data_020d7a88[2] = {
    (void *)_ZN18VillagerTalkTopics18cancelRequestChainEv, 0,
};
char sTalkKeyEtcPush[9] = "etc_push";
void * data_020d79e8[2] = {
    (void *)_ZN18VillagerTalkTopics12selectApMailEv, 0,
};
char sTalkKeyQItem[7] = "q_item";
const void *const sTalkTopicQ07Req[2] = {
    (void *)sTalkKeyQ07Req, (void *)0x3,
};
const void *const sTalkTopicQ12Full[2] = {
    (void *)sTalkKeyQ12Full, (void *)0x2,
};
char sTalkKeyQ01Pay[8] = "q01_pay";
const void *const sTalkTopicTsuSeHint[2] = {
    (void *)sTalkKeyTsuSeHint, (void *)0x3,
};
void * data_020d7900[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicApTrade[2] = {
    (void *)sTalkKeyApTrade, (void *)0x3,
};
void * data_020d78f0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const u8 sFishRarityWeights[5] = {
    0x1a, 0x17, 0x14, 0x11, 0x0e,
};
void * data_020d7928[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ10Reserve[12] = "q10_reserve";
char sTalkKeyQ12Thanks[11] = "q12_thanks";
const void *const sTalkTopicQ10Reserve[2] = {
    (void *)sTalkKeyQ10Reserve, (void *)0x3,
};
void * data_020d7c98[2] = {
    (void *)_ZN12VillagerTalk18swapItemWithPlayerEv, 0,
};
void * sTalkKeysQ04Req[7] = {
    (void *)sTalkKeyQ04Req12, (void *)sTalkKeyQ04Req12, (void *)sTalkKeyQ04Req37, (void *)sTalkKeyQ04Req37,
    (void *)sTalkKeyQ04Req37, (void *)sTalkKeyQ04Req37, (void *)sTalkKeyQ04Req37,
};
char sTalkKeyQ07Over[9] = "q07_over";
Unk_021be8c0 sRequestTopicsB[47];
void * data_020d8018[2] = {
    (void *)_ZN18VillagerTalkTopics12judgePresentEv, 0,
};
void * data_020d7ca0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7cd0[2] = {
    (void *)_ZN18VillagerTalkTopics16giveBackHeldItemEv, 0,
};
const void *const sTalkTopicQ06Req[2] = {
    (void *)sTalkKeyQ06Req, (void *)0x3,
};
char sTalkKeyEvFmarket1[12] = "ev_fmarket1";
const u32 sTalkTradeItemLists[4] = {
    0x00000000, 0x00000002, 0x00000003, 0x00000004,
};
void * sVillagerClothMaterialNames[1] = {
    (void *)sVillagerClothMaterialName,
};
char sTalkKeyQ06Lost[9] = "q06_lost";
}
}

void VillagerTalkTopics::openHabitAcceptChoice() {
    Unk_0201d568_SV s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x4b, 0x4f, (s32)((u8 *)&nZ::sApSubTopics[1]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x50, 0x54, (s32)((u8 *)&nZ::sApSubTopics[5]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ac8));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectApHabitPart1(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicApHabit.key, 4, 1, sTalkTopicApHabit.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openHabitKeyboard(s32) {
    MI_CpuFill8(((u8 *)&sTalkInputBuffer), 0, 0x20);
    if (actor->villagerTalk.habitTopicKind == 0) {
        _ZN12Unk_020d771016setSubSceneKind2Ejjjh(this, 0x15, ((u8 *)&sTalkInputBuffer), 10, 0);
    } else {
        _ZN12Unk_020d771016setSubSceneKind2Ejjjh(this, 0x16, ((u8 *)&sTalkInputBuffer), 16, 0);
    }
    _ZN12Unk_020d771012openSubSceneEi(this, 6);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7da8));
}

void VillagerTalkTopics::onHabitEntered() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *p;
    if (MenuCtrl_IsResultOk()) {
        p = actor->villagerData;
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sApSubTopics[3]));
        if (actor->villagerTalk.habitTopicKind == 0) {
            Villager_SetCatchphrase(p, MenuCtrl_GetText(), 10);
        } else if (memory != 0 && VillagerMemory_IsUsed((void *)memory)) {
            _ZN14VillagerMemory11setGreetingEPvi((void *)memory, MenuCtrl_GetText(), 16);
        } else {
            u32 v = MenuCtrl_GetText();
            _ZN20VillagerDataItemView14setGreetingForEPviS0_(p, v, 16, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
        }
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::retryHabitInput() {
    openHabitKeyboard(0);
}

void VillagerTalkTopics::selectApHabitConfirm(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApHabit.key, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    if (actor->villagerTalk.habitTopicKind == 0) {
        topicIndex = 6;
    } else {
        topicIndex = 11;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openHabitConfirmChoice() {
    Unk_0201d568_SV s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x4a, 0x4a, (s32)((u8 *)&nZ::sApSubTopics[4]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x49, 0x49, (s32)((u8 *)&nZ::sApSubTopics[2]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7db0));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectApHabitB(Unk_0201d2d0_Out *out) {
    VillagerActor *p = actor;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(p->villagerData)), sTalkTopicApHabit.key, 5, p->villagerTalk.habitTopicKind & 1, sTalkTopicApHabit.variantCount);
    topicIndex += 7;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    actor->villagerTalk.habitTopicKind = (actor->villagerTalk.habitTopicKind + 1) & 1;
}

void VillagerTalkTopics::selectApHabitDeclined(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApHabit.key, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    if (actor->villagerTalk.habitTopicKind == 0) {
        topicIndex = 2;
    } else {
        topicIndex = 3;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openNicknameAcceptChoice() {
    Unk_0201d568_SV s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x45, 0x45, (s32)((u8 *)&nZ::sApSubTopics[7]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x46, 0x46, (s32)((u8 *)&nZ::sApSubTopics[12]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ad8));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectApNicknProposal(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApNickn, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    topicIndex = 2;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

extern "C" BOOL Talk_MakeRandomNickname(void *a, void *b, u32 c) {
    s32 base, mask, i, j, k, r;
    u8 v;
    if (c < 6) {
        base = sNicknamePatternBases[c];
    } else {
        base = 0;
    }
    mask = 0xff;
    k = 8;
    for (i = 0; i < 8; i++) {
        r = Random_GlobalBelow(k);
        for (j = 0; j < 8; j++) {
            if ((mask >> j) & 1) {
                if (r == 0) {
                    v = j + base;
                    if (String_MakeNickname(a, b, &v)) {
                        return TRUE;
                    }
                    mask = (u8)(mask & ~(1 << j));
                    break;
                }
                r--;
            }
        }
        k--;
    }
    return FALSE;
}

void VillagerTalkTopics::makeNickname() {
    u32 x;
    Unk_02029f58_T a;
    Unk_02029f58_T b;
    void *r4 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    _ZN11MsgString9BC1Ev(&a);
    _ZN11MsgString9BC1Ev(&b);
    _ZN8PlayerId13getNameStringEP9MsgString(r4, &b);
    if (Talk_MakeRandomNickname(&a, &b, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))) == 0) {
        _ZN9MsgString4copyEPS_(&a, &b);
    }
    if (unk_128_p != 0) {
        Clock_GetDate(&x);
        _ZN14VillagerMemory18setNicknameFromMsgEPv(unk_128_p, &a);
        SaveVillagers_SetNicknameDate(gSaveVillagers, &x);
    } else {
        Villager_SetNicknameFromMsgFor(actor->villagerData, &a, r4);
    }
    _ZN15TalkWindowState7setSlotEiPv(window, 0, &a);
    _ZN11MsgString9BD1Ev(&b);
    _ZN11MsgString9BD1Ev(&a);
}

void VillagerTalkTopics::openNicknameLikeChoice() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_0201d568_S s;
    if (unk_128_p != 0 && ((s32 (*)())_ZN14VillagerMemory13getFriendshipEv)() >= 0x40) {
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x47, 0x47, (s32)((u8 *)&nZ::sApSubTopics[8]));
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x48, 0x48, (s32)((u8 *)&nZ::sApSubTopics[11]));
        s.count = 2;
        s.cancelIndex = -1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ab8));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sApSubTopics[11]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
    }
}

void VillagerTalkTopics::selectApNicknDisliked(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApNickn, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    topicIndex = 3;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openNicknameKeyboard(s32 unused) {
    MI_CpuFill8(((u8 *)&sTalkInputBuffer), 0, 0x20);
    _ZN12Unk_020d771016setSubSceneKind2Ejjjh(this, 0x11, ((u8 *)&sTalkInputBuffer), 8, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 6);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7cc8));
}

void VillagerTalkTopics::onNicknameEntered() {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_02029f58_T t;
    if (MenuCtrl_IsResultOk() != 0) {
        void *r4 = actor->villagerData;
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sApSubTopics[9]));
        if (unk_128_p != 0 && VillagerMemory_IsUsed(unk_128_p) != 0) {
            _ZN14VillagerMemory11setNicknameEPvi(unk_128_p, ((void *)MenuCtrl_GetText()), 8);
        } else {
            void *r6 = ((void *)MenuCtrl_GetText());
            unk_128_p = Villager_SetNicknameFor(r4, r6, 8, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
        }
        if (unk_128_p != 0) {
            _ZN11MsgString9BC1Ev(&t);
            _ZN14VillagerMemory11getNicknameEPv(unk_128_p, &t);
            _ZN15TalkWindowState7setSlotEiPv(window, 0, &t);
            _ZN11MsgString9BD1Ev(&t);
        }
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectApNicknConfirm(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApNickn, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    topicIndex = 4;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openNicknameConfirmChoice() {
    Unk_0201d568_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x4a, 0x4a, (s32)((u8 *)&nZ::sApSubTopics[11]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x49, 0x49, (s32)((u8 *)&nZ::sApSubTopics[10]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7f18));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::retryNicknameInput() {
    openNicknameKeyboard(0);
}

void VillagerTalkTopics::selectApNicknAccepted(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApNickn, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    topicIndex = 5;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectApNicknRefused(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicApNickn, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    topicIndex = 1;
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectEtcConnect(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEtcConnect.key, sTalkTopicEtcConnect.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

BOOL VillagerTalkTopics::tryAddHandOverChoice(s32 a, s32 b) {
    void *r6;
    void *p;
    BOOL result;
    r6 = PlayerErrands_GetSlot(b, 0);
    p = PlayerErrandSlot_GetRecord(r6);
    result = FALSE;
    if (_ZN12ErrandRecord8isActiveEv(p) != 0 && _ZN12ErrandRecord11getSubGroupEv(p) == 1) {
        Unk_02029c74_Rec *r4 = (Unk_02029c74_Rec *)PlayerErrandSlot_GetVillager(r6, 1);
        Unk_02029c74_Rec *r7 = (Unk_02029c74_Rec *)_ZN12VillagerData13getVillagerIdEv((void *)a);
        if (r7->townId == r4->townId && memcmp(r7->townName, r4->townName, 8) == 0 && r7->species == r4->species && PlayerErrandSlot_IsStepDone(r6) == 0) {
            s32 t = _ZN12ErrandRecord7getKindEv(p);
            switch (t) {
            case 0xe:
            case 0x10:
            case 0x11: {
                Unk_0201d568_S s;
                TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
                errandSlot = r6;
                ((VillagerTalk *)this)->setUnk150((u32)p);
                TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x1d, 0x1d, (s32)((u8 *)&nZ::sRequestTopicsB[28]));
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 2, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
                s.count = 3;
                s.cancelIndex = s.count - 1;
                ((VillagerTalk *)this)->setupChoiceMenu(&s);
                ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7a98));
                _ZN15TalkWindowState11openChoicesEi(window, 1);
                result = TRUE;
            }
            }
        }
    }
    return result;
}

BOOL VillagerTalkTopics::tryAddDeliveryRecipientChoice(s32 a, s32 b) {
    struct { void *p10; Unk_02029a88_Pair pair; } l;
    void *p;
    void *v;
    s32 r6;
    u8 cnt;
    BOOL r7;
    Unk_0201d568_S s;
    v = PlayerErrandSlots_FindByVillager(b, _ZN12VillagerData13getVillagerIdEv((void *)a), 1);
    if (v != 0) {
        p = PlayerErrandSlot_GetRecord(v);
    } else {
        p = 0;
    }
    r6 = p != 0 ? _ZN12ErrandRecord11getSubGroupEv(p) : 4;
    r7 = FALSE;
    if (r6 == 0 || r6 == 2) {
        if (PlayerErrandSlot_IsStepDone(v) == 0) {
            cnt = 0;
            l.pair.unk_00 = cnt;
            l.pair.unk_04 = cnt;
            l.p10 = PlayerData_GetCurrent();
            Clock_GetDateTime(&l.pair);
            TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
            errandSlot = v;
            ((VillagerTalk *)this)->setUnk150((u32)p);
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, cnt), cnt);
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 1), 1);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, _ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), cnt, 7);
            if (DateTime_Compare((void *)ErrandRecord_GetTime(((void *)((VillagerTalk *)this)->getUnk150())), &l.pair, 0x3f) == -1) {
                if (r6 != 0) {
                    if (r6 == 2) {
                        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), cnt, 0x2b, 0x2b, (s32)((u8 *)&nZ::sRequestTopicsA[10]));
                        cnt++;
                        r7 = TRUE;
                    }
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), cnt, 0x27, 0x27, (s32)((u8 *)&nZ::sRequestTopicsA[10]));
                    cnt++;
                    r7 = TRUE;
                }
            } else {
                if (r6 != 0) {
                    if (r6 == 2) {
                        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), cnt, (const u8 *)data_020c74f0, (s32)((u8 *)&nZ::sRequestTopicsA[13]));
                        cnt++;
                        r7 = TRUE;
                    }
                } else {
                    r6 = (s32)_ZN10PlayerData12getInventoryEv(l.p10);
                    if (Talk_FindFlaggedPocketItem((void *)r6, (u16 *)_ZN12ErrandRecord7getItemEv(PlayerErrandSlot_GetRecord(errandSlot))) != -1) {
                        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), cnt, (const u8 *)data_020c74f4, (s32)((u8 *)&nZ::sRequestTopicsA[13]));
                        cnt++;
                        r7 = TRUE;
                    }
                }
            }
            if (r7 != 0) {
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), cnt, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), (u8)(cnt + 1), (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
                u8 t = cnt + 2;
                s.count = t;
                s.cancelIndex = t - 1;
                ((VillagerTalk *)this)->setupChoiceMenu(&s);
                ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7a68));
                _ZN15TalkWindowState11openChoicesEi(window, 1);
            }
        }
    }
    return r7;
}

BOOL VillagerTalkTopics::tryAddDeliveryClientChoice(s32 unused, s32 a, s32 b) {
    BOOL r = FALSE;
    errandSlot = PlayerErrands_GetSlot(a, func_0209ac1c(b));
    if (errandSlot != 0) {
        Unk_0201d568_S s;
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        ((VillagerTalk *)this)->setUnk150((u32)PlayerErrandSlot_GetRecord(errandSlot));
        _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, r), r);
        _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 1), 1);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, _ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), r, 7);
        if (PlayerErrandSlot_IsStepDone(errandSlot) != 0) {
            TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), r, 0x23, 0x23, (s32)((u8 *)&nZ::sRequestTopicsA[22]));
        } else {
            TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), r, 0x1e, 0x1e, (s32)((u8 *)&nZ::sRequestTopicsA[21]));
        }
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 2, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 3;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7fd0));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Talk_IsInsectItem(u16 *p) {
    return Unk_020298c8_R1(p, 0x12b0, 0x12e7);
}

extern "C" BOOL Talk_FilterPickInsect(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12b0, 0x12e7) && v == 0) r = TRUE;
    return r;
}

extern "C" BOOL Talk_IsFishItem(u16 *p) {
    return Unk_020298c8_R1(p, 0x12e8, 0x131f);
}

extern "C" BOOL Talk_FilterPickFish(u16 *p, s32 v) {
    BOOL r = FALSE;
    if (Unk_020298c8_R1(p, 0x12e8, 0x131f) && v == 0) r = TRUE;
    return r;
}

s32 VillagerTalkTopics::openCreatureRequestMenu(BOOL (*f)(u16 *), s32 pa, s32 pb) {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    TalkChoiceTable buf;
    void *p, *q;
    u32 tmp;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&buf));
    switch (_ZN12ErrandRecord7getStepEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        p = PlanErrand_GetPlayer(planErrand);
        q = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
        if (*(u16 *)q == *(u16 *)p && memcmp((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN8PlayerId6equalsEPS_(q, p) != 0) {
            if (((u32)PlanErrand_GetStep(planErrand)) == 2) {
                if (f((u16 *)((void *)PlanErrand_GetShownItem(planErrand))) != 0 && Pocket_CountMatching(&tmp, f) > 0) {
                    ((void (*)(void *, void *, s32, s32, s32, void *))TalkChoiceTable_Set)(this,  &buf,  idx,  pa,  pa,  ((u8 *)&nZ::sRequestTopicsB[8]));
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), 0, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            } else {
                if (f((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()))) != 0) {
                    if (Pocket_FindItem(_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()))) != -1) {
                        ((void (*)(void *, void *, s32, s32, s32, void *))TalkChoiceTable_Set)(this,  &buf,  idx,  pb,  pb,  ((u8 *)&nZ::sRequestTopicsB[13]));
                    } else {
                        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                    }
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            }
            if (*(u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())) != 0xfff1) {
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, _ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (Random_GlobalBelow(10) & 1) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
            idx++;
        }
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        idx++;
        buf.count = idx;
        buf.cancelIndex = idx - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&buf);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7f78));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    }
    return res;
}

extern "C" BOOL Talk_IsNonFossilFurniture(u16 *p) {
    BOOL r = FALSE;
    if (Item_IsFurniture(p)) {
        if (!Unk_020295d0_Range(p, 0x450c, 0x45db)) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL Talk_FilterPickNonFossilFurniture(u16 *p, s32 x) {
    if (Talk_IsNonFossilFurniture(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Talk_IsShirtItem(u16 *p) {
    if (Unk_020295d0_Range(p, 0x11a8, 0x12a7)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Talk_FilterPickShirt(u16 *p, s32 x) {
    if (Talk_IsShirtItem(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Talk_IsFossilItem(u16 *p) {
    if (Unk_020295d0_Range(p, 0x450c, 0x45db)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL Talk_FilterPickFossil(u16 *p, s32 x) {
    if (Talk_IsFossilItem(p) && x == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 VillagerTalkTopics::openFurnitureRequestMenu() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    TalkChoiceTable buf;
    void *p, *q;
    u32 tmp;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&buf));
    switch (_ZN12ErrandRecord7getStepEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        p = PlanErrand_GetPlayer(planErrand);
        q = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
        if (*(u16 *)q == *(u16 *)p && memcmp((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN8PlayerId6equalsEPS_(q, p) != 0) {
            if (Pocket_CountMatching(&tmp, Talk_IsNonFossilFurniture) > 0) {
                TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x1c, 0x1c, (s32)((u8 *)&nZ::sRequestTopicsB[18]));
            } else {
                TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (Random_GlobalBelow(10) & a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
            idx++;
        }
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        idx++;
        buf.count = idx;
        buf.cancelIndex = idx - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&buf);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d79d8));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    }
    return res;
}

s32 VillagerTalkTopics::openShirtRequestMenu() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    TalkChoiceTable buf;
    void *p, *q;
    u32 tmp;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&buf));
    switch (_ZN12ErrandRecord7getStepEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        p = PlanErrand_GetPlayer(planErrand);
        q = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
        if (*(u16 *)q == *(u16 *)p && memcmp((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN8PlayerId6equalsEPS_(q, p) != 0) {
            if (((u32)PlanErrand_GetStep(planErrand)) <= 1) {
                if (Pocket_CountMatching(&tmp, Talk_IsShirtItem) > 0) {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x1b, 0x1b, (s32)((u8 *)&nZ::sRequestTopicsB[18]));
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            } else {
                if (Unk_02029234_Range((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0x11a8, 0x12a7)) {
                    if (Pocket_FindItem(_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()))) != -1) {
                        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x1b, 0x1b, (s32)((u8 *)&nZ::sRequestTopicsB[18]));
                    } else {
                        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                    }
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            }
            if (Unk_02029234_Range((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0x11a8, 0x12a7)) {
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, _ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0, 7);
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        res = TRUE;
        break;
    case 2:
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
            idx++;
        }
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        idx++;
        buf.count = idx;
        buf.cancelIndex = idx - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&buf);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7950));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    }
    return res;
}

extern "C" u32 Talk_GetPocketMaskForItem(u16 *p) {
    void *s = _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent());
    u16 *q = _ZN15PlayerInventory9getPocketEi(s, 0);
    u32 mask = 0;
    s32 i = 0;
    do {
        if (_ZN15PlayerInventory14getPocketFlagsEi(s, i) == 0) {
            BOOL r;
            if (Item_IsFurniture(q)) {
                u32 a = Item_GetFurnitureIndex(q);
                r = (a == Item_GetFurnitureIndex(p)) ? TRUE : FALSE;
            } else {
                r = (*q == *p) ? TRUE : FALSE;
            }
            if (r) {
                mask = (u16)(mask | (1 << i));
            }
        }
        q++;
        i++;
    } while (i < 15);
    return mask;
}

extern "C" u32 Talk_GetWantedFossilPocketMask(void *h) {
    void *s = _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent());
    u16 *q = _ZN15PlayerInventory9getPocketEi(s, 0);
    u16 tmp;
    u16 l[3];
    u32 mask;
    s32 i, k;
    l[0] = 0xfff1;
    l[1] = 0xfff1;
    l[2] = 0xfff1;
    mask = 0;
    for (i = 0; i < 3; i++) {
        if (PlanErrand_TestFlag(h, i) == 0) {
            FossilGroup_GetItem(&tmp, ((void *)PlanErrand_GetFossilGroup(h)), (u8)i);
            l[i] = tmp;
        } else {
            l[i] = 0xfff1;
        }
    }
    for (i = 0; i < 15; q++, i++) {
        if (_ZN15PlayerInventory14getPocketFlagsEi(s, i) == 0) {
            BOOL in = FALSE;
            if (*q >= 0x450c && *q <= 0x45db) {
                in = TRUE;
            }
            if (in) {
                for (k = 0; k < 3; k++) {
                    BOOL r;
                    if (Item_IsFurniture(q)) {
                        u32 a = Item_GetFurnitureIndex(q);
                        r = (a == Item_GetFurnitureIndex(&l[k])) ? TRUE : FALSE;
                    } else {
                        r = (*q == l[k]) ? TRUE : FALSE;
                    }
                    if (r) {
                        mask = (u16)(mask | (1 << i));
                        break;
                    }
                }
            }
        }
    }
    return mask;
}

s32 VillagerTalkTopics::openFossilRequestMenu() {
    BOOL a = TRUE;
    u8 idx = 0;
    BOOL res = FALSE;
    TalkChoiceTable buf;
    void *p, *q;
    struct { u8 t[2]; u8 tmp[6]; } L;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&buf));
    switch (_ZN12ErrandRecord7getStepEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        p = PlanErrand_GetPlayer(planErrand);
        q = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
        if (*(u16 *)q == *(u16 *)p && memcmp((u8 *)q + 2, (u8 *)p + 2, 8) == 0 && _ZN8PlayerId6equalsEPS_(q, p) != 0) {
            if (((u32)PlanErrand_GetStep(planErrand)) <= 1) {
                if (Pocket_CountMatching(L.tmp, Talk_IsFossilItem) > 0) {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x1a, 0x1a, (s32)((u8 *)&nZ::sRequestTopicsB[18]));
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            } else if (((u32)PlanErrand_GetStep(planErrand)) >= 2) {
                if (Talk_GetWantedFossilPocketMask(planErrand) != 0) {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x1a, 0x1a, (s32)((u8 *)&nZ::sRequestTopicsB[18]));
                } else {
                    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
                }
            } else {
                TalkChoiceTable_Set(this, (TalkChoiceTable *)(&buf), idx, 0x14, 0x14, (s32)((u8 *)&nZ::sRequestTopicsB[6]));
            }
            if (((u32)PlanErrand_GetStep(planErrand)) >= 2) {
                s32 r = FossilGroup_ToIndex((s32)((void *)PlanErrand_GetFossilGroup(planErrand)));
                if (r != -1) {
                    L.t[0] = r;
                    L.t[1] = 0;
                    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 0, L.t, ((u8 *)"st_fossil"), &L.t[1]);
                }
            }
            idx++;
            res = TRUE;
        }
        break;
    case 1:
        if (Random_GlobalBelow(10) & a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[26]));
            a = idx;
            idx++;
        }
        res = TRUE;
        break;
    case 2:
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[27]));
        idx++;
        a = res;
        res = TRUE;
        break;
    }
    if (res == TRUE) {
        if (a) {
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
            idx++;
        }
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), idx, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        idx++;
        buf.count = idx;
        buf.cancelIndex = idx - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&buf);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7960));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    }
    return res;
}

BOOL VillagerTalkTopics::tryAddCollectRequestChoice(void *a, void *b, u32 c) {
    u8 cc[2];
    u16 v1, v2, v3, v4, v5, v6, v7, v8;
    Unk_0201d2d0_Key k;
    Unk_0202839c_Menu s;
    BOOL r7 = FALSE;
    s32 r5, r6;
    planErrand = VillagerPlanBlock_GetErrand(Villager_GetPlan(a));
    ((VillagerTalk *)this)->setUnk150((u32)((void *)((s32)PlanErrand_GetRecord(planErrand))));
    r5 = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    if (((VillagerTalk *)actor)->getEventKind() == 0xb) {
        if (_ZN8PlayerId7isValidEv(PlanErrand_GetPlayer(planErrand)) == 0) {
            r6 = PlanErrand_GetStep(planErrand);
            v1 = *(u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()));
            r5 = r7;
            k.w0 = r5;
            k.w1 = r5;
            Clock_GetDateTime(&k);
            switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
            case 0:
                if (Unk_0202849c_F(r7)) {
                    Npc_GetStateHeldItem((u16 *)(&v2), (VillagerTalk *)actor);
                    if (!Unk_0202849c_R(&v2, 0x1376, 0x1376)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12b0, 0x12e7) && InsectPick_IsAvailable((u16 *)(&v1), 0, 0x17, ((u8 *)&k)[4]) != 0) {
                    itemFromPlayer = v1;
                } else {
                    VillagerRequest_PickInsectForStep((u16 *)(&v3), this, r6);
                    itemFromPlayer = v3;
                }
                if (Unk_02028a48_R1(&itemFromPlayer, 0x12b0, 0x12e7)) r5 = 1;
                break;
            case 1:
                if (Unk_0202849c_F(r7)) {
                    Npc_GetStateHeldItem((u16 *)(&v4), (VillagerTalk *)actor);
                    if (!Unk_0202849c_R(&v4, 0x1374, 0x1374)) goto done;
                }
                if (r6 == 2) {
                    r5 = 1;
                    goto done;
                }
                if (Unk_0202849c_R(&v1, 0x12e8, 0x131f) && FishPick_IsAvailable((u16 *)(&v1), 0, 0x17, ((u8 *)&k)[4], ((u8 *)&k)[3]) != 0) {
                    itemFromPlayer = v1;
                } else {
                    VillagerRequest_PickFishForStep((u16 *)(&v5), this, r6);
                    itemFromPlayer = v5;
                }
                if (Unk_02028a48_R1(&itemFromPlayer, 0x12e8, 0x131f)) r5 = 1;
                break;
            case 2:
                if (Unk_0202849c_F(r7)) {
                    Npc_GetStateHeldItem((u16 *)(&v6), (VillagerTalk *)actor);
                    if (!Unk_0202849c_R(&v6, 0x1369, 0x1369)) goto done;
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) itemFromPlayer = a1;
                }
                r5 = 1;
                break;
            default:
                if (Unk_0202849c_F(r7)) {
                    Npc_GetStateHeldItem((u16 *)(&v7), (VillagerTalk *)actor);
                    if (v7 != 0xfff1) {
                        Npc_GetStateHeldItem((u16 *)(&v8), (VillagerTalk *)actor);
                        if (!Unk_0202849c_R(&v8, 0x1380, 0x139f)) goto done;
                    }
                }
                {
                    volatile u16 *pv = &v1;
                    u16 a1 = *pv;
                    u16 b1 = *pv;
                    if (b1 != 0xfff1) itemFromPlayer = a1;
                }
                r5 = 1;
                break;
            }
done:
            if (r5 != 0) {
                TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[3]));
                TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
                s.count = 2;
                s.cancelIndex = s.count - 1;
                ((VillagerTalk *)this)->setupChoiceMenu(&s);
                ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7980));
                _ZN15TalkWindowState11openChoicesEi(window, 1);
                r7 = TRUE;
            }
        } else {
            switch (r5) {
            case 0:
                r7 = openCreatureRequestMenu((BOOL (*)(u16 *))((void *)((void (*)())Talk_IsInsectItem)), 0x28, 0x19);
                break;
            case 1:
                r7 = openCreatureRequestMenu((BOOL (*)(u16 *))((void *)((void (*)())Talk_IsFishItem)), 0x29, 0x18);
                break;
            case 2:
                r7 = openFossilRequestMenu();
                break;
            case 3:
                r7 = openShirtRequestMenu();
                break;
            case 4:
                r7 = openFurnitureRequestMenu();
                if (r7 == 1) {
                    void *p = actor->villagerData;
                    cc[0] = ((s32)FurnitureTaste_GetTextIndex(((void *)Villager_GetFurnitureTaste(p, ((void *)Villager_GetFurnitureTasteIndex(p))))));
                    cc[1] = 0;
                    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 0, cc, ((u8 *)"st_furniture_taste"), cc + 1);
                }
                break;
            }
        }
    }
    if (r7 == 0) {
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 2;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7900));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
        r7 = TRUE;
    }
    return r7;
}

void VillagerTalkTopics::setVisitTimeArgs(Unk_020289f8_S *p) {
    u32 r4 = p->hour;
    if (r4 >= 12) {
        r4 -= 12;
    }
    if (r4 == 0) {
        r4 = 12;
    }
    _ZN16ActorTalkRequest10setDaySlotEjj(this, p->day, 0);
    _ZN16ActorTalkRequest13setNumberSlotEijiii(this, r4, 1, 2, 0, 0);
    _ZN16ActorTalkRequest13setNumberSlotEijiii(this, p->minute, 2, 2, 6, 9);
}

BOOL VillagerTalkTopics::tryAddVisitReminderChoice(void *a, void *b, u32 c) {
    Unk_0202839c_Menu s;
    u8 *r7 = (u8 *)b + 0x88;
    void *r6 = r7 + 0xc;
    BOOL r4 = FALSE;
    if (((VillagerTalk *)actor)->getEventKind() == 0xb && _ZN12ErrandRecord8isActiveEv(r6) != 0 && _ZN12ErrandRecord7getKindEv(r6) == 0x15 && HouseVisitInvite_IsFrom(r7, _ZN12VillagerData13getVillagerIdEv(a)) != 0 && _ZN12ErrandRecord7getStepEv(r6) == 0) {
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), r4, 0x30, 0x30, (s32)((u8 *)&nZ::sRequestTopicsB[45]));
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 2;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7938));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
        setVisitTimeArgs((Unk_020289f8_S *)(r7 + 0x18));
        r4 = TRUE;
    }
    if (r4 == 0) {
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 2;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7928));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
        r4 = TRUE;
    }
    return r4;
}

s32 VillagerTalkTopics::tryAddActiveRequestChoice(void *a, void *b) {
    s32 res;
    u32 r4;
    r4 = (u32)PlayerData_GetCurrent();
    res = 0;
    if (_ZN12Unk_02097ff48testFlagEj((void *)r4, 1) != 0) {
        goto end;
    }
    r4 = Villager_GetPlayerErrandKind(gSaveVillagers, a, (void *)r4);
    if (r4 >= 0x16) {
        goto end;
    }
    switch (Errand_GetClass()) {
    case 0:
        res = tryAddCollectRequestChoice(a, b, r4);
        break;
    case 1:
        switch (Errand_GetGroup(r4)) {
        case 0:
            break;
        case 1:
            res = tryAddDeliveryClientChoice((s32)a, (s32)b, r4);
            break;
        case 3:
            res = tryAddVisitReminderChoice(a, b, r4);
            break;
        }
        break;
    }
end:
    return res;
}

s32 VillagerTalkTopics::pickRandomOtherVillager() {
    u32 v;
    func_02133ef8(&v, 4);
    v = (u32)_ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    return ((s32)SaveVillagers_PickRandomTalkPartner(gSaveVillagers, &v, 1));
}

BOOL VillagerTalkTopics::tryOfferDeliveryRequest(void *a, void *b) {
    Unk_0202839c_Menu s;
    Unk_0201d2d0_Key k;
    void *r7 = VillagerState_GetErrand(Villager_GetState(a));
    void *r4 = PlayerErrands_GetSlot((s32)b, _ZN12ErrandRecord13func_0209ac10Ev());
    void *r6 = VillagerPlanBlock_GetPlan(Villager_GetPlan(a));
    s32 t;
    k.w0 = 0;
    k.w1 = 0;
    Clock_GetDateTime(&k);
    if (r4 != NULL && _ZN12ErrandRecord8isActiveEv(PlayerErrandSlot_GetRecord(r4)) == 0) {
        t = _ZN12ErrandRecord7getKindEv(r7);
        if (func_0209a49c(t, _ZN12VillagerPlan8getStateEv(r6)) != 0 && ((VillagerTalk *)actor)->getEventKind() == 0xb && SaveVillagers_FindBirthdayVillager(gSaveVillagers, &k) == -1 && pickRandomOtherVillager() != 0) {
            TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
            errandSlot = r4;
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsA[1]));
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
            ((VillagerTalk *)this)->setUnk150((u32)r7);
            s.count = 2;
            s.cancelIndex = s.count - 1;
            ((VillagerTalk *)this)->setupChoiceMenu(&s);
            ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d78f0));
            _ZN15TalkWindowState11openChoicesEi(window, 1);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkTopics::tryOfferCollectRequest(void *a) {
    u16 v[8];
    Unk_0202839c_Menu s;
    void *r6 = VillagerState_GetErrand(Villager_GetState(a));
    BOOL r4;
    v[0] = 0xfff1;
    r4 = FALSE;
    planErrand = VillagerPlanBlock_GetErrand(Villager_GetPlan(a));
    if (((VillagerTalk *)actor)->getEventKind() == 0xb) {
        switch (_ZN12ErrandRecord7getKindEv(r6)) {
        case 0:
            if (Unk_0202849c_F(r4)) {
                Npc_GetStateHeldItem((u16 *)(&v[1]), (VillagerTalk *)actor);
                if (!Unk_0202849c_R(&v[1], 0x1376, 0x1376)) goto end;
            }
            VillagerRequest_PickInsectForStep((u16 *)(&v[2]), this, 0);
            v[0] = v[2];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12b0 && a1 <= 0x12e7) ok = TRUE;
                if (ok) {
                    itemFromPlayer = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 1:
            if (Unk_0202849c_F(r4)) {
                Npc_GetStateHeldItem((u16 *)(&v[3]), (VillagerTalk *)actor);
                if (!Unk_0202849c_R(&v[3], 0x1374, 0x1374)) goto end;
            }
            VillagerRequest_PickFishForStep((u16 *)(&v[4]), this, 0);
            v[0] = v[4];
            {
                BOOL ok = FALSE;
                volatile u16 *pv = &v[0];
                u16 a1 = *pv;
                u16 b1 = *pv;
                if (b1 >= 0x12e8 && a1 <= 0x131f) ok = TRUE;
                if (ok) {
                    itemFromPlayer = a1;
                    r4 = TRUE;
                }
            }
            break;
        case 2:
            if (Unk_0202849c_F(r4)) {
                Npc_GetStateHeldItem((u16 *)(&v[5]), (VillagerTalk *)actor);
                if (!Unk_0202849c_R(&v[5], 0x1369, 0x1369)) goto end;
            }
            r4 = TRUE;
            break;
        default:
            if (Unk_0202849c_F(r4)) {
                Npc_GetStateHeldItem((u16 *)(&v[6]), (VillagerTalk *)actor);
                if (v[6] != 0xfff1) {
                    Npc_GetStateHeldItem((u16 *)(&v[7]), (VillagerTalk *)actor);
                    if (!Unk_0202849c_R(&v[7], 0x1380, 0x139f)) goto end;
                }
            }
            r4 = TRUE;
            break;
        }
    }
end:
    if (r4) {
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[3]));
        ((VillagerTalk *)this)->setUnk150((u32)r6);
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 2;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d78f8));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::tryOfferVisitRequest(void *a, void *b) {
    void *r6;
    Unk_0201d2d0_Key k;
    s32 t = (s32)VillagerState_GetErrand(Villager_GetState(a));
    r6 = (u8 *)b + 0x88;
    k.w0 = 0;
    k.w1 = 0;
    Clock_GetDateTime(&k);
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, *(s32 *)((u8 *)gCommManager + 0x64)) == 0) {
        r6 = (u8 *)r6 + 0xc;
        if (_ZN12ErrandRecord8isActiveEv(r6) == 0 && Villager_IsInPlayerErrand(a, b) == 0 && Villager_GetResidentStatus(a) == 3 && ((VillagerTalk *)actor)->getEventKind() == 0xb && Villager_GetUpcomingBirthdayDay(a, 1, &k) == -1 && VillagerEvent_FindUpcomingIndex(1, &k) == 0xb) {
            Unk_0202839c_Menu s;
            TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)((u8 *)&nZ::sRequestTopicsB[39]));
            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
            ((VillagerTalk *)this)->setUnk150((u32)((void *)t));
            s.count = 2;
            s.cancelIndex = s.count - 1;
            ((VillagerTalk *)this)->setupChoiceMenu(&s);
            ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d79f8));
            _ZN15TalkWindowState11openChoicesEi(window, 1);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkRequestReplyTopics::tryOfferNewRequest(void *a, void *b) {
    void *s = VillagerState_GetErrand(Villager_GetState(a));
    BOOL r = FALSE;
    if (_ZN12ErrandRecord8isActiveEv(s) != 0) {
        if (_ZN12Unk_02097ff48testFlagEj(PlayerData_GetCurrent(), 1) == 0) {
            if (Random_GlobalBelow(100) < 30) {
                switch (_ZN12ErrandRecord8getClassEv(s)) {
                case 0:
                    r = ((BOOL (*)(void *, void *, void *))_ZN18VillagerTalkTopics22tryOfferCollectRequestEPv)(this, a,  b);
                    break;
                case 1:
                    switch (_ZN12ErrandRecord8getGroupEv(s)) {
                    case 0:
                        break;
                    case 1:
                        r = ((VillagerTalkTopics *)this)->tryOfferDeliveryRequest(a, b);
                        break;
                    case 3:
                        r = ((VillagerTalkTopics *)this)->tryOfferVisitRequest(a, b);
                        break;
                    }
                    break;
                }
            }
        }
    }
    return r;
}

BOOL VillagerTalkRequestReplyTopics::tryAddSickVillagerChoice(void *arg) {
    Unk_02027a34_Menu s;
    void *r7 = gSaveVillagers;
    s32 r4 = SaveVillagers_GetUnk3830Index(r7);
    if (r4 != -1) {
        if (r4 == Villager_GetIndex(arg)) {
            void *p = SaveVillagers_GetUnk3830(r7);
            void *v = _ZN18SickVillagerRecord13func_0209978cEv(p);
            if (_ZN12ErrandRecord8isActiveEv(v) != 0) {
                if (_ZN18SickVillagerRecord19isRecentlyRecoveredEP17Unk_020994cc_Date(p, 0) != 0) {
                    u16 *q = _ZN18SickVillagerRecord13getTopVisitorEv(p);
                    if (q != NULL) {
                        if (_ZN8PlayerId7isValidEv(q) != 0) {
                            u16 *r6 = ((u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                            u8 *msg;
                            TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
                            if (r6[0] == q[0] && memcmp(r6 + 1, q + 1, 8) == 0 && _ZN8PlayerId6equalsEPS_(r6, q) != 0) {
                                if (_ZN12ErrandRecord7getStepEv(v) == 1) {
                                    msg = ((u8 *)&nZ::sRequestTopicsB[37]);
                                } else {
                                    msg = ((u8 *)&nZ::sRequestTopicsB[33]);
                                }
                            } else if (_ZN18SickVillagerRecord10hasVisitorEP16Unk_020994cc_Ent(p, r6) != 0) {
                                msg = ((u8 *)&nZ::sRequestTopicsB[32]);
                            } else {
                                msg = ((u8 *)&nZ::sRequestTopicsB[31]);
                            }
                            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)msg);
                            TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
                            s.count = 2;
                            s.cancelIndex = s.count - 1;
                            ((VillagerTalk *)this)->setupChoiceMenu(&s);
                            ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d79b8));
                            _ZN15TalkWindowState11openChoicesEi(window, 1);
                            _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, (u32)q, 1);
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

void VillagerTalkRequestReplyTopics::openConnectMenu() {
    static Unk_02027a34_TestFn tbl[5] = { (Unk_02027a34_TestFn)data_020d7c60, (Unk_02027a34_TestFn)data_020d8000, (Unk_02027a34_TestFn)data_020d7ce8, (Unk_02027a34_TestFn)data_020d7d00, (Unk_02027a34_TestFn)data_020d7d08 };
    void *r6 = actor->villagerData;
    void *r7 = _ZN10PlayerData10getErrandsEv(PlayerData_GetCurrent());
    s32 i;
    for (i = 0; i < 5; i++) {
        if ((this->*tbl[i])(r6, r7) != 0) {
            break;
        }
    }
    if (i == 5) {
        Unk_02027a34_Menu s;
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
        TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
        s.count = 2;
        s.cancelIndex = s.count - 1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7cd8));
        _ZN15TalkWindowState11openChoicesEi(window, 1);
    }
}

namespace nZ {
extern "C" {
char sTalkKeyTsuEvent1[11] = "tsu_event1";
void * data_020d7aa8[2] = {
    (void *)_ZN18VillagerTalkTopics17updateEvBirthTurnEv, 0,
};
const void *const sTalkTopicTsuMove1[2] = {
    (void *)sTalkKeyTsuMove1, (void *)0x3,
};
void * data_020d7ab0[2] = {
    (void *)_ZN25VillagerTalkKaraokeTopics23continueEvKaraokeActionEv, 0,
};
const void *const sTalkTopicQ06Over[2] = {
    (void *)sTalkKeyQ06Over, (void *)0x1,
};
void * data_020d7998[2] = {
    (void *)_ZN18VillagerTalkTopics14onQ12FullCloseEv, 0,
};
void * data_020d7988[2] = {
    (void *)_ZN18VillagerTalkTopics13func_02027424Ev, 0,
};
void * data_020d7980[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
}
}

void VillagerTalkRequestReplyTopics::runChosenTopic(Unk_02027a34_Out *, u32 idx) {
    u8 b;
    Unk_02027a34_Out out;
    if (choiceValues[idx] != NULL) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)choiceValues[idx]);
    } else {
        ((VillagerTalk *)this)->clearTopicFns();
    }
    if (selectFn) {
        (this->*(Unk_02027a34_OutFn)selectFn)(&out);
        if (out.fileName != 0) {
            b = out.msgIndex;
            _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
        }
    }
}

void VillagerTalkRequestReplyTopics::selectDeliveryRequest(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    switch (t) {
    case 10:
        d = &sTalkTopicQ06Req;
        break;
    case 19:
        d = &sTalkTopicQ07Req;
        break;
    }
    if (d != NULL) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkRequestReplyTopics::pickDeliveryRecipient() {
    u32 buf;
    func_02133ef8(&buf, 4);
    buf = (u32)_ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    deliveryRecipient = _ZN12VillagerData13getVillagerIdEv(SaveVillagers_PickRandomTalkPartner(gSaveVillagers, &buf, 1));
    _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, deliveryRecipient, 1);
}

void VillagerTalkRequestReplyTopics::gotoDeliveryTime() {
    u8 b;
    Unk_02027a34_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[2]));
    if (selectFn) {
        (this->*(Unk_02027a34_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkRequestReplyTopics::selectQTime(Unk_02027a34_Out *out) {
    u8 tbl[3];
    tbl[0] = sDeliveryMinutes[0];
    tbl[1] = sDeliveryMinutes[1];
    tbl[2] = sDeliveryMinutes[2];
    deliveryTimeIndex = Random_GlobalBelow(3);
    deliveryMinutes = tbl[deliveryTimeIndex];
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQTime.key, sTalkTopicQTime.variantCount, deliveryTimeIndex, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkRequestReplyTopics::openDeliveryAcceptChoice() {
    Unk_02027a34_Menu s;
    u8 *r4 = ((u8 *)&nZ::sRequestTopicsA[4]);
    s32 t = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    switch (t) {
    case 10:
        if (PlayerData_GetCurrent() != NULL) {
            if (_ZN15PlayerInventory15findEmptyPocketEv((u32)_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent())) != -1) {
                r4 = ((u8 *)&nZ::sRequestTopicsA[5]);
            }
        }
        break;
    case 19:
        if (Inventory_FindEmptyLetter() != -1) {
            r4 = ((u8 *)&nZ::sRequestTopicsA[5]);
        }
        break;
    }
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x21, 0x21, (s32)r4);
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x22, 0x22, (s32)((u8 *)&nZ::sRequestTopicsA[3]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7c90));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkRequestReplyTopics::selectQNoB(Unk_02027a34_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQNo.key, sTalkTopicQNo.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7c28);
}

void VillagerTalkRequestReplyTopics::cancelRequest() {
    _ZN12ErrandRecord5clearEv(((void *)((VillagerTalk *)this)->getUnk150()));
    SaveVillagers_UpdateErrands(gSaveVillagers);
}

void VillagerTalkRequestReplyTopics::selectQFull(Unk_02027a34_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQFull.key, sTalkTopicQFull.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkRequestReplyTopics::continueQFull() {
}

void VillagerTalkRequestReplyTopics::selectDeliveryAccepted(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    switch (t) {
    case 10:
        d = &sTalkTopicQYes;
        break;
    case 19:
        d = &sTalkTopicQ07Mailgo;
        break;
    }
    if (d != NULL) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5e;
}

void VillagerTalkRequestReplyTopics::setDeliveryDeadline() {
    if (((void *)((VillagerTalk *)this)->getUnk150()) != NULL) {
        void *p = ((void *)ErrandRecord_GetTime(((void *)((VillagerTalk *)this)->getUnk150())));
        Clock_GetDateTime(p);
        DateTime_AddMinutes(p, deliveryMinutes);
        _ZN12ErrandRecord8setExtraEh(((void *)((VillagerTalk *)this)->getUnk150()), deliveryTimeIndex);
    }
}

void VillagerTalkRequestReplyTopics::acceptDeliveryRequest() {
    void *p7 = PlayerData_GetCurrent();
    _ZN10PlayerData10getErrandsEv(p7);
    void *r6 = actor->villagerData;
    s32 r4 = 2;
    if (errandSlot != NULL) {
        s32 t = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
        void *h = _ZN12VillagerData13getVillagerIdEv(r6);
        PlayerErrandSlot_Start(errandSlot, t, h, deliveryRecipient);
        _ZN12ErrandRecord5clearEv(((void *)((VillagerTalk *)this)->getUnk150()));
        SaveVillagers_UpdateErrands(gSaveVillagers);
        ((VillagerTalk *)this)->setUnk150((u32)PlayerErrandSlot_GetRecord(errandSlot));
        itemFromPlayer = *(u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()));
        s32 k = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
        switch (k) {
        case 10: {
            s32 q = _ZN15PlayerInventory15findEmptyPocketEv((u32)_ZN10PlayerData12getInventoryEv(p7));
            _ZN15PlayerInventory9setPocketEPtij(_ZN10PlayerData12getInventoryEv(p7), &itemFromPlayer, q, r4);
            break;
        }
        case 19: {
            s32 x = Inventory_GetEmptyLetter();
            if (x != 0) {
                PlayerErrandSlot_ComposeLetter(errandSlot, x);
            }
            r4 = 0;
            break;
        }
        }
    }
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemFromPlayer, r4, 5, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7aa0));
    ((VillagerTalk *)this)->setDeferredFn((*(Unk_020d8938_Fn *)&data_020d7a48));
}

s32 VillagerTalkRequestReplyTopics::getRequestKind() {
    return _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
}

void VillagerTalkRequestReplyTopics::selectDeliveryLate(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    switch (t) {
    case 10:
        d = &sTalkTopicQ06Over;
        break;
    case 19:
        d = &sTalkTopicQ07Over;
        break;
    }
    if (d != NULL) {
        u8 v = VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData));
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, v, d->key, d->variantCount, (u32)_ZN12ErrandRecord8getExtraEv(((void *)((VillagerTalk *)this)->getUnk150())), 0);
        if (errandSlot != NULL) {
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 0), 0);
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 1), 1);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, _ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0, 7);
        }
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::continueLateLetterShown() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r5 = _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent());
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 19) {
        r5 = Talk_FindLetterState7or8(r5);
        if (r5 != 0) {
            if (_ZN10LetterView8getStateEv(r5) == 7) {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[7]));
            } else {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[8]));
            }
            Letter_Clear(r5);
        }
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_0201d2d0_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::continueDeliveryLate() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    s32 r4;
    void *r6 = _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent());
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        r4 = Talk_FindFlaggedPocketItem(r6, (u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())));
        if (r4 != -1) {
            itemFromPlayer = *(u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150()));
            c.item = 0xfff1;
            _ZN15PlayerInventory9setPocketEPtij(r6, &c.item, r4, 0);
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[7]));
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[8]));
        }
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        c.msgIndex = out.msgIndex;
        _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_0201d2d0_Msg *)window), &c.msgIndex, out.fileName);
        break;
    case 19:
        itemFromPlayer = 0x1565;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7a50));
        break;
    }
    r4 = (s32)_ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    SaveVillagers_AddRelation(gSaveVillagers, (void *)r4, PlayerErrandSlot_GetVillager(errandSlot, 1), -10);
}

void VillagerTalkTopics::selectDeliveryLateReply(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        r4 = &sTalkTopicQ06Payback;
        break;
    case 19:
        r4 = &sTalkTopicQ07Scold;
        break;
    }
    if (r4 != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), r4->key, r4->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::finishLateDelivery() {
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 10) {
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 2, 5, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7c10));
    }
    PlayerErrandSlot_Clear(errandSlot);
}

void VillagerTalkTopics::selectDeliveryLost(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        r4 = &sTalkTopicQ06Lost;
        break;
    case 19:
        r4 = &sTalkTopicQ07Scold2;
        break;
    }
    if (r4 != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), r4->key, r4->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::finishLostDelivery() {
    void *r4 = _ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    SaveVillagers_AddRelation(gSaveVillagers, r4, PlayerErrandSlot_GetVillager(errandSlot, 1), -20);
    PlayerErrandSlot_Clear(errandSlot);
}

void VillagerTalkTopics::selectDeliveryOpened(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        r4 = &sTalkTopicQ06Open;
        break;
    case 19:
        r4 = &sTalkTopicQ07Open;
        break;
    }
    if (r4 != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), r4->key, r4->variantCount, 0, 0);
        if (errandSlot != 0) {
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 0), 0);
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, PlayerErrandSlot_GetVillager(errandSlot, 1), 1);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0, 7);
        }
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7930);
}

void VillagerTalkTopics::finishOpenedDelivery() {
    void *r4;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 19) {
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, (u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())), 0, 5, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7940));
    }
    r4 = _ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    SaveVillagers_AddRelation(gSaveVillagers, r4, PlayerErrandSlot_GetVillager(errandSlot, 1), -20);
    PlayerErrandSlot_Clear(errandSlot);
}

void VillagerTalkTopics::selectQTimeover(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQTimeover.key, sTalkTopicQTimeover.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

extern "C" BOOL Talk_FilterPickDeliveryShirt(u16 *p, s32 v) {
    BOOL r4 = FALSE;
    if (Unk_020270ec_R(p, 0x11a8, 0x12a7) && v == 2) {
        r4 = TRUE;
    }
    return r4;
}

void VillagerTalkTopics::openDeliveryItemPicker() {
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        _ZN12Unk_020d771015setPocketFilterEjjj(this, (void *)Talk_FilterPickDeliveryShirt, 0xd, 0);
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7908));
        break;
    case 19:
        _ZN12Unk_020d771015setSubSceneKindEjj(this, 0x28, 1);
        _ZN12Unk_020d771012openSubSceneEi(this, 2);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7948));
        break;
    default:
        _ZN12Unk_020d771012openSubSceneEi(this, 7);
        break;
    }
}

void VillagerTalkTopics::selectQIcancel(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQIcancel.key, sTalkTopicQIcancel.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::func_02027424() {
    if (((Unk_0201d2d0_Msg *)window) != 0) {
        ((Unk_0201d2d0_Msg *)window)->nextState = 1;
    }
}

void VillagerTalkTopics::onDeliveryItemPicked() {
    Unk_02027324_S c;
    Unk_0201d2d0_Out out;
    if (MenuCtrl_IsResultOk() == 0) {
        if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 19 && ((Unk_0201d2d0_Msg *)window) != 0) {
            ((Unk_0201d2d0_Msg *)window)->nextState = 1;
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[11]));
    } else {
        s32 r4 = 2;
        s32 r6 = MenuCtrl_GetIndex();
        void *r7 = _ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent());
        switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
        case 10:
            itemFromPlayer = *_ZN15PlayerInventory9getPocketEi(r7, r6);
            c.item = 0xfff1;
            _ZN15PlayerInventory9setPocketEPtij(r7, &c.item, r6, 0);
            break;
        case 19:
            ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7988));
            itemFromPlayer = 0x1565;
            r4 = 0;
            break;
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[12]));
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, r4, 4, 0);
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    c.msgIndex = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_0201d2d0_Msg *)window), &c.msgIndex, out.fileName);
}

void VillagerTalkTopics::selectDeliveryReceived(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *r4 = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        r4 = &sTalkTopicQ06Get;
        break;
    case 19:
        r4 = &sTalkTopicQ07Joy;
        break;
    }
    if (r4 != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), r4->key, r4->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::continueDeliveryReceived() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 10:
        _ZN12Unk_0201442016requestItemAct12Ev(this);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d8018));
        break;
    case 19:
        r4 = Talk_FindLetterState7or8(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
        if (r4 != 0) {
            if (_ZN10LetterView8getStateEv(r4) == 7) {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[18]));
            } else {
                Letter_Clear(r4);
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[17]));
            }
            if (selectFn) {
                (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
            }
            b = out.msgIndex;
            _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_0201d2d0_Msg *)window), &b, out.fileName);
        }
        break;
    }
    r4 = PlayerErrandSlot_GetVillager(errandSlot, 0);
    SaveVillagers_AddRelation(gSaveVillagers, r4, _ZN12VillagerData13getVillagerIdEv(actor->villagerData), 10);
}

void VillagerTalkTopics::judgePresent() {
    Unk_0201d2d0_Out out;
    u8 b;
    s32 r4 = 1;
    u8 *r6 = (u8 *)Villager_GetFashionTaste(actor->villagerData);
    if (Unk_020270ec_R(&itemFromPlayer, 0x11a8, 0x12a7)) {
        u8 v = Item_GetShirtUnkGroup(&itemFromPlayer);
        if (v == r6[0]) {
            r4 = 0;
        } else if (v == r6[1]) {
            r4 = 2;
        }
    }
    func_0209a424(errandSlot, r4);
    switch (r4) {
    case 0:
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[14]));
        break;
    case 2:
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[15]));
        break;
    default:
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[16]));
        break;
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_0201d2d0_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQ06Open1(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Open1.key, sTalkTopicQ06Open1.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::continuePresentLiked() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *r4 = actor->villagerData;
    void *r6;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[20]));
    _ZN12Unk_0201442016requestItemAct0FEv(this);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d8008));
    r6 = PlayerErrandSlot_GetVillager((void *)unk_15c_w, 0);
    SaveVillagers_AddRelation(gSaveVillagers, r6, _ZN12VillagerData13getVillagerIdEv(r4), 0x14);
    itemFromPlayer = *_ZN23VillagerDataProfileView8getShirtEv(r4);
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_02026b38_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQ06Open3(Unk_0201d2d0_Out *out) {
    _ZN12ErrandRecord7setStepEh(PlayerErrandSlot_GetRecord((void *)unk_15c_w), 1);
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Open3.key, sTalkTopicQ06Open3.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7bd8);
}

void VillagerTalkTopics::keepDislikedPresent() {
    void *r4 = actor->villagerData;
    _ZN12Unk_0201442015requestKeepItemEv(this);
    if (itemFromPlayer != 0xfff1) {
        Villager_AddReceivedItem(r4, &itemFromPlayer);
    }
}

void VillagerTalkTopics::selectQ06Open2(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Open2.key, sTalkTopicQ06Open2.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::continuePresentAccepted() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[20]));
    _ZN12Unk_0201442015requestKeepItemEv(this);
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_02026b38_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQ07Open2(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ07Open2.key, sTalkTopicQ07Open2.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7ff0);
}

void VillagerTalkTopics::finishOpenedLetter() {
    void *r4;
    _ZN12ErrandRecord7setStepEh(PlayerErrandSlot_GetRecord((void *)unk_15c_w), 1);
    r4 = PlayerErrandSlot_GetVillager((void *)unk_15c_w, 0);
    SaveVillagers_AddRelation(gSaveVillagers, r4, _ZN12VillagerData13getVillagerIdEv(actor->villagerData), -0x14);
    _ZN12Unk_0201442015requestKeepItemEv(this);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7fe8));
}

void VillagerTalkTopics::selectQ07Read(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ07Read.key, sTalkTopicQ07Read.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::gotoDeliveryFin() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (((Unk_02026b38_Msg *)window)->state == 5) {
        ((Unk_02026b38_Msg *)window)->nextState = 1;
    }
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[20]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_02026b38_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::continueLetterRead() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (memory != 0 && ((s32 (*)())_ZN14VillagerMemory13getFriendshipEv)() >= 0x40) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[19]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_02026b38_Msg *)window), &b, out.fileName);
    } else {
        _ZN12Unk_0201442015requestKeepItemEv(this);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7fe0));
    }
}

void VillagerTalkTopics::selectQ07Show(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ07Show.key, sTalkTopicQ07Show.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::closeLetter() {
    _ZN12Unk_0201442015requestKeepItemEv(this);
    ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7bc0));
}

void VillagerTalkTopics::showLetter() {
    _ZN12Unk_020d771012setMenu12ArgEjj(this, Talk_FindLetterState7or8(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent())), 1);
    _ZN12Unk_020d771012openSubSceneEi(this, 5);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7fc8));
}

void VillagerTalkTopics::selectDeliveryFin(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ06Fin;
    void *r7;
    switch (_ZN12ErrandRecord7getKindEv(((void * (*)())_ZN12VillagerTalk9getUnk150Ev)())) {
    case 10:
        _ZN12ErrandRecord7setStepEh(PlayerErrandSlot_GetRecord((void *)unk_15c_w), 1);
        if (Unk_02026ab0_R1(&itemFromPlayer, 0x11a8, 0x12a7)) {
            Villager_AddReceivedItem(actor->villagerData, &itemFromPlayer);
        }
        break;
    case 0x13:
        r7 = Talk_FindLetterState7or8(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()));
        _ZN12ErrandRecord7setStepEh(PlayerErrandSlot_GetRecord((void *)unk_15c_w), 1);
        d = &sTalkTopicQ07Fin;
        if (r7 != 0) {
            Letter_Clear(r7);
        }
        break;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectDeliveryReminder(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void * (*)())_ZN12VillagerTalk9getUnk150Ev)())) {
    case 10:
        d = &sTalkTopicQ06Con;
        break;
    case 0x13:
        d = &sTalkTopicQ07Con;
        break;
    }
    if (unk_15c_w != 0 && d != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectDeliveryReport(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (_ZN12ErrandRecord7getKindEv(((void * (*)())_ZN12VillagerTalk9getUnk150Ev)())) {
    case 10:
        d = &sTalkTopicQ06Report;
        break;
    case 0x13:
        d = &sTalkTopicQ07Report;
        break;
    }
    if (unk_15c_w != 0 && d != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

extern "C" void Talk_GetMoneyItem(u16 *out, u32 arg) {
    *out = 0xfff1;
    *out = Item_FindMoneyBagForAmount(arg, 0, 0);
    if (*out == 0xfff1) {
        *out = 0x1492;
    }
}

void VillagerTalkTopics::continueDeliveryReport(void *p) {
    u16 h[3];
    Unk_0201d568_SW s;
    switch (_ZN12ErrandRecord7getKindEv(((void * (*)())_ZN12VillagerTalk9getUnk150Ev)())) {
    case 10:
        TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x24, 0x24, 0);
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x25, 0x25, 0);
        TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 2, 0x26, 0x26, 0);
        s.count = 3;
        s.cancelIndex = -1;
        ((VillagerTalk *)this)->setupChoiceMenu(&s);
        ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7fa0));
        _ZN15TalkWindowState11openChoicesEi(((Unk_02026b38_Msg *)window), 1);
        break;
    case 0x13: {
        s32 r = Random_GlobalBelow(100);
        itemFromPlayer = 0xfff1;
        if (r < 20) {
            Villager_PickRandomReceivedItem(&h[0], actor->villagerData);
            itemFromPlayer = h[0];
            if (itemFromPlayer != 0xfff1) {
                Villager_RemoveReceivedItem(actor->villagerData, &itemFromPlayer);
            }
        } else if (r < 0x28) {
            unk_19c_w = 0x1f4 + FengShui_GetWestTotal() * 4;
            unk_19c_w = ((u32)Talk_RoundBells(unk_19c_w));
            Talk_GetMoneyItem(&h[1], unk_19c_w);
            itemFromPlayer = h[1];
        }
        if (itemFromPlayer == 0xfff1) {
            Talk_PickErrandItem(&h[2], 0);
            itemFromPlayer = h[2];
        }
        ((s32 (*)(void *, void *))_ZN18VillagerTalkTopics15gotoRewardOrEndEv)(this,  p);
        break;
    }
    }
}

void VillagerTalkTopics::onPresentOpinionChoice(s32 unused, s32 idx) {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_020267b8_Tbl tbl = sPresentOpinionTopics;
    if (idx < 0 || idx >= 3) {
        idx = 0;
    }
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)(sRequestTopicsA + tbl.v[idx] * 0x18));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((Unk_02026b38_Msg *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQ06Good(Unk_0201d2d0_Out *out) {
    u16 loc[5];
    u8 t = *func_0209a420(errandSlot);
    itemFromPlayer = 0xfff1;
    switch (t) {
    case 0:
        Talk_PickErrandItem(&loc[0], 0);
        itemFromPlayer = loc[0];
        break;
    case 1:
        Villager_PickRandomReceivedItem(&loc[1], actor->villagerData);
        itemFromPlayer = loc[1];
        if (itemFromPlayer != 0xfff1) {
            Villager_RemoveReceivedItem(actor->villagerData, &itemFromPlayer);
        }
        break;
    default:
        Villager_PickRandomReceivedItem(&loc[2], actor->villagerData);
        itemFromPlayer = loc[2];
        if (itemFromPlayer != 0xfff1) {
            Villager_RemoveReceivedItem(actor->villagerData, &itemFromPlayer);
        } else {
            Talk_PickErrandItem(&loc[3], 0);
            itemFromPlayer = loc[3];
        }
        break;
    }
    if (itemFromPlayer == 0xfff1) {
        unk_19c_p = (void *)(FengShui_GetWestTotal() * 4 + 0x1f4);
        unk_19c_p = ((void *)Talk_RoundBells((s32)unk_19c_p));
        Talk_GetMoneyItem(&loc[4], (u32)unk_19c_p);
        itemFromPlayer = loc[4];
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Good.key, sTalkTopicQ06Good.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ06Normal(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(errandSlot);
    itemFromPlayer = 0xfff1;
    switch (t) {
    case 0:
        Villager_PickRandomReceivedItem(&loc[0], actor->villagerData);
        itemFromPlayer = loc[0];
        if (itemFromPlayer != 0xfff1) {
            Villager_RemoveReceivedItem(actor->villagerData, &itemFromPlayer);
        }
        break;
    case 1:
        Talk_PickErrandItem(&loc[1], 0);
        itemFromPlayer = loc[1];
        break;
    }
    if (itemFromPlayer == 0xfff1) {
        unk_19c_p = (void *)(FengShui_GetWestTotal() * 4 + 0x1f4);
        unk_19c_p = ((void *)Talk_RoundBells((s32)unk_19c_p));
        Talk_GetMoneyItem(&loc[2], (u32)unk_19c_p);
        itemFromPlayer = loc[2];
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Normal.key, sTalkTopicQ06Normal.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ06Bad(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(errandSlot);
    itemFromPlayer = 0xfff1;
    if (t == 2) {
        Talk_PickErrandItem(&loc[0], 0);
        itemFromPlayer = loc[0];
    }
    if (itemFromPlayer == 0xfff1) {
        unk_19c_p = (void *)(FengShui_GetWestTotal() * 4 + 0x1f4);
        unk_19c_p = ((void *)Talk_RoundBells((s32)unk_19c_p));
        Talk_GetMoneyItem(&loc[1], (u32)unk_19c_p);
        itemFromPlayer = loc[1];
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ06Bad.key, sTalkTopicQ06Bad.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::gotoRewardOrEnd() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (PlayerData_GetCurrent() != 0 && _ZN15PlayerInventory15findEmptyPocketEv(((u32)_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()))) != -1) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sRequestTopicsB);
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[2]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQPreitem(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQPreitem.key, sTalkTopicQPreitem.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::gotoRewardItem() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[1]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQItemC(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d;
    if (Unk_02026214_R1(&itemFromPlayer, 0x1492, 0x14fd)) {
        _ZN16ActorTalkRequest18setNumberNamedSlotEijihii(this, unk_19c_p, 1, 4, 1, 1, 0);
    } else {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 1, 7);
    }
    d = sTalkTopicQItemC;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::giveRewardItem() {
    void *p6 = PlayerData_GetCurrent();
    u32 r4 = ((u32)_ZN10PlayerData12getInventoryEv(p6));
    if (Unk_02026214_R1(&itemFromPlayer, 0x1492, 0x14fd)) {
        PlayerInventory_AddBells(r4, (s32)unk_19c_p, 1);
    } else if (itemFromPlayer != 0xfff1) {
        s32 v = _ZN15PlayerInventory15findEmptyPocketEv(r4);
        if (v != -1) {
            _ZN15PlayerInventory9setPocketEPtij((void *)r4, &itemFromPlayer, v, 0);
            Catalog_SetItem(((u32)_ZN10PlayerData10getCatalogEv(p6)), &itemFromPlayer, 0, 1);
        }
    }
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
}

void VillagerTalkTopics::gotoDeliveryEnd() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[2]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectDeliveryEnd(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d;
    s32 r = _ZN12ErrandRecord7getKindEv((void *)(((VillagerTalk *)this)->getUnk150()));
    switch (r) {
    case 0xa:
        d = &sTalkTopicQ06End;
        break;
    case 0x13:
        d = &sTalkTopicQ07End;
        break;
    default:
        d = &sTalkTopicQ06End;
        break;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    if (errandSlot != 0) {
        PlayerErrandSlot_Clear(errandSlot);
    }
    pendingSe = 0x5f;
}

void VillagerTalkTopics::selectCollectRequest(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7b40;
    s32 r6 = 0;
    s32 r4;
    u8 buf[2];
    s32 idx;
    r4 = _ZN12ErrandRecord7getKindEv((void *)(((VillagerTalk *)this)->getUnk150()));
    idx = r6;
    if (_ZN12ErrandRecord8isActiveEv((void *)((u32)PlanErrand_GetRecord(planErrand))) != 0) {
        r6 = ((u32)PlanErrand_GetStep(planErrand));
        r4 = _ZN12ErrandRecord7getKindEv((void *)((u32)PlanErrand_GetRecord(planErrand)));
    }
    _ZN12ErrandRecord13getClassIndexEPi((void *)(((VillagerTalk *)this)->getUnk150()), &idx);
    if (r6 < PlanErrand_GetStepCount(r4) && idx < 5) {
        d.key = sTalkKeysQReq[idx][r6];
        if (r4 == 4) {
            void *p = actor->villagerData;
            buf[0] = FurnitureTaste_GetTextIndex((void *)Villager_GetFurnitureTaste(p, (void *)Villager_GetFurnitureTasteIndex(p)));
            buf[1] = 0;
            _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 0, buf, ((u8 *)"st_furniture_taste"), &buf[1]);
        }
        if (r4 != 0 && r4 != 1) {
            pendingSe = 0x5e;
        }
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

extern "C" void VillagerRequest_PickInsectStep0(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!InsectPick_PickForMonthAnyHour(p, 0, 1, d->month)) {
        InsectPick_PickForMonthAnyHour(p, 2, 4, d->month);
    }
}

extern "C" void VillagerRequest_PickInsectStep1(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!InsectPick_PickForMonthAnyHour(p, 1, 2, d->month)) {
        if (!InsectPick_PickForMonthAnyHour(p, 0, 0, d->month)) {
            InsectPick_PickForMonthAnyHour(p, 3, 4, d->month);
        }
    }
}

extern "C" void VillagerRequest_PickInsectStep3(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!InsectPick_PickForMonthAnyHour(p, 2, 3, d->month)) {
        if (!InsectPick_PickForMonthAnyHour(p, 0, 1, d->month)) {
            InsectPick_PickForMonthAnyHour(p, 4, 4, d->month);
        }
    }
}

extern "C" void VillagerRequest_PickInsectStep4(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!InsectPick_PickForMonthAnyHour(p, 3, 4, d->month)) {
        InsectPick_PickForMonthAnyHour(p, 0, 2, d->month);
    }
}

extern "C" void VillagerRequest_PickInsectForStep(u16 *p, void *unused, u32 idx) {
    Unk_02025ed4_Arg a;
    Unk_02025ed4_Fn fn;
    if (idx < 5 && (fn = sRequestInsectPickers[idx]) != 0) {
        a.unk_00 = 0;
        a.unk_04 = 0;
        Clock_GetDateTime(&a);
        fn(p, &a);
    } else {
        *p = 0xfff1;
    }
}

extern "C" void VillagerRequest_PickFishStep0(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!FishPick_PickForDateAnyHour(p, 0, 1, d->month, d->day)) {
        FishPick_PickForDateAnyHour(p, 2, 4, d->month, d->day);
    }
}

extern "C" void VillagerRequest_PickFishStep1(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!FishPick_PickForDateAnyHour(p, 1, 2, d->month, d->day)) {
        if (!FishPick_PickForDateAnyHour(p, 0, 0, d->month, d->day)) {
            FishPick_PickForDateAnyHour(p, 3, 4, d->month, d->day);
        }
    }
}

extern "C" void VillagerRequest_PickFishStep3(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!FishPick_PickForDateAnyHour(p, 2, 3, d->month, d->day)) {
        if (!FishPick_PickForDateAnyHour(p, 0, 1, d->month, d->day)) {
            FishPick_PickForDateAnyHour(p, 4, 4, d->month, d->day);
        }
    }
}

extern "C" void VillagerRequest_PickFishStep4(u16 *out, u8 *p) {
    *out = 0xfff1;
    if (!FishPick_PickForDateAnyHour(out, 3, 4, p[4], p[3])) {
        FishPick_PickForDateAnyHour(out, 0, 2, p[4], p[3]);
    }
}

extern "C" void VillagerRequest_PickFishForStep(u16 *out, void *unused, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, Unk_0202585c_Pair *) = sRequestFishPickers[idx];
        if (fn != 0) {
            Unk_0202585c_Pair pr;
            pr.a = 0;
            pr.b = 0;
            Clock_GetDateTime(&pr);
            fn(out, &pr);
            return;
        }
    }
    *out = 0xfff1;
}

extern "C" void VillagerRequest_PickShirtFromGroups(u16 *out, u32 mask, s32 cnt, void *x, u8 a, u32 b) {
    u16 buf;
    s32 r;
    *out = 0xfff1;
    while ((r = Random_PickSetBit(mask, cnt, 10)) != -1) {
        ItemPick_FromRange(&buf, 0x11a8, 0x100, b, 1, (u32)x, a, r, 0, 1);
        *out = buf;
        break;
    }
}

extern "C" void VillagerRequest_PickShirtOtherGroup(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    u16 mask;
    s32 cnt;
    s32 i;
    *out = 0xfff1;
    mask = 0;
    cnt = 0;
    for (i = 0; i < 10; i++) {
        if (i != p[1]) {
            mask |= 1 << i;
            cnt++;
        }
    }
    VillagerRequest_PickShirtFromGroups(&arr[0], mask, cnt, PlayerData_GetCurrent(), 1, arg);
    *out = arr[0];
    if (*out == 0xfff1) {
        VillagerRequest_PickShirtFromGroups(&arr[1], mask, cnt, 0, 0, arg);
        *out = arr[1];
    }
}

extern "C" void VillagerRequest_PickShirtOfGroup(u16 *out, u8 *p, u32 arg) {
    ItemPick_FromRange(out, 0x11a8, 0x100, arg, 1, 0, 0, *p, 0, 1);
}

extern "C" void VillagerRequest_PickShirtOfGroupForPlayer(u16 *out, u8 *p, u32 arg) {
    u16 arr[2];
    *out = 0xfff1;
    ItemPick_FromRange(&arr[0], 0x11a8, 0x100, arg, 1, (u32)PlayerData_GetCurrent(), 0, *p, 0, 1);
    *out = arr[0];
    if (*out == 0xfff1) {
        ItemPick_FromRange(&arr[1], 0x11a8, 0x100, arg, 1, (u32)PlayerData_GetCurrent(), 1, *p, 0, 1);
        *out = arr[1];
    }
}

extern "C" void VillagerRequest_PickShirtForStep(u16 *out, VillagerTalkRequestStartTopics *self, u32 idx) {
    if (idx < 7) {
        void (*fn)(u16 *, s32, u16 *) = sRequestShirtPickers[idx];
        if (fn != 0) {
            void *r6 = self->actor->villagerData;
            s32 r7 = ((s32)Villager_GetFashionTaste(r6));
            u16 t = *_ZN23VillagerDataProfileView8getShirtEv(r6);
            fn(out, r7, &t);
            return;
        }
    }
    *out = 0xfff1;
}

extern "C" void VillagerRequest_PickRandomFossil(u16 *out) {
    u16 arr[2];
    ItemPick_FromRange(&arr[0], 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
    ItemPick_FromRange(&arr[1], 0x450c, 0x34, 0, 0, (u32)PlayerData_GetCurrent(), 0, 10, 0, 1);
    *out = 0xfff1;
    if (R2(&arr[0])) {
        if (R2(&arr[1]) && (Random_GlobalBelow(10) & 1)) {
            *out = arr[1];
        } else {
            *out = arr[0];
        }
    } else {
        *out = arr[1];
    }
}

extern "C" s32 Item_GetFossilPartIndexInGroup(u16 *p, s32 v) {
    u16 tmp;
    s32 idx;
    u32 i;
    s32 j;
    if (R1(p)) {
        tmp = 0xfff1;
        if (R1(p)) {
            idx = (*p - 0x450c) >> 2;
        } else {
            idx = -1;
        }
        for (i = 0; i < 0x34; i++) {
            tmp = i < 0x34 ? 0x450c + i * 4 : 0x450c;
            if (v == Item_GetFossilGroup(&tmp)) {
                for (j = 0; j < 3; j++) {
                    if (idx == j + (s32)i) return j;
                }
                break;
            }
        }
    }
    return -1;
}

extern "C" void Item_GetFossilPartIndex(u16 *p) {
    Item_GetFossilPartIndexInGroup(p, Item_GetFossilGroup(p));
}

extern "C" void VillagerRequest_PickFossilOfGroup(u16 *out, void *a, void *b) {
    u32 r4 = PlanErrand_GetFossilGroup(a);
    if (r4 == 0x18) {
        r4 = (u8)FossilGroup_PickMissing(_ZN20VillagerDataItemView12getFurnitureEv(b), 10);
        PlanErrand_SetFossilGroup(a, r4);
        VillagerSync_Act3C03(b, r4);
    }
    if (r4 < 0x18) {
        FossilGroup_GetItem(out, (void *)r4, 0);
    } else {
        *out = 0xfff1;
    }
}

extern "C" void VillagerRequest_PickFossilForStep(u16 *out, VillagerTalkRequestStartTopics *self, u32 idx) {
    if (idx < 5) {
        void (*fn)(u16 *, s32, void *) = sRequestFossilPickers[idx];
        if (fn != 0) {
            void *r6 = self->actor->villagerData;
            fn(out, ((s32)VillagerPlanBlock_GetErrand(Villager_GetPlan(r6))), r6);
            return;
        }
    }
    *out = 0xfff1;
}

void VillagerTalkRequestStartTopics::prepareRequestItem() {
    Unk_0202585c_Pair pr;
    u8 arr[2];
    u16 h1;
    u16 h2;
    s32 r5 = 0;
    pr.a = r5;
    pr.b = r5;
    if (_ZN12ErrandRecord8isActiveEv(PlanErrand_GetRecord(planErrand)) != 0) {
        r5 = PlanErrand_GetStep(planErrand);
    }
    Clock_GetDateTime(&pr);
    switch ((u32)_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
        }
        break;
    case 1:
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
        }
        break;
    case 2: {
        if (itemFromPlayer == 0xfff1) {
            VillagerRequest_PickFossilForStep(&h1, this, r5);
            itemFromPlayer = h1;
        }
        if (r5 >= 2) {
            s32 v = PlanErrand_GetFossilGroup(planErrand);
            if (v >= 0x18) {
                if (R1(&itemFromPlayer)) {
                    v = Item_GetFossilGroup(&itemFromPlayer);
                }
            }
            if (v < 0x18) {
                s32 r = ((s32 (*)())FossilGroup_ToIndex)();
                if (r != -1) {
                    arr[0] = r;
                    arr[1] = 0;
                    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 0, arr, ((u8 *)"st_fossil"), &arr[1]);
                }
            }
        }
        break;
    }
    case 3:
        if (itemFromPlayer == 0xfff1) {
            VillagerRequest_PickShirtForStep(&h2, this, r5);
            itemFromPlayer = h2;
        }
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
        }
        break;
    case 4:
        break;
    }
    ((VillagerTalk *)this)->setDeferredFn((*(Unk_020d8938_Fn *)&data_020d7ec8));
}

void VillagerTalkRequestStartTopics::openRequestChoice() {
    Unk_020257f0_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x1f, 0x1f, (s32)((u8 *)&nZ::sRequestTopicsB[4]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x20, 0x20, (s32)((u8 *)&nZ::sRequestTopicsB[5]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ec0));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkRequestStartTopics::registerRequestDeferred() {
    registerRequestAccepted();
}

void VillagerTalkRequestStartTopics::selectQStart(Unk_020254ec_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQStart.key, sTalkTopicQStart.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5e;
}

void VillagerTalkRequestStartTopics::registerRequestAccepted() {
    void *r6 = actor->villagerData;
    s32 r4 = 0;
    s32 r7;
    if (_ZN12ErrandRecord8isActiveEv(PlanErrand_GetRecord(planErrand)) == 0) {
        r7 = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
        r4 = 1;
    } else {
        r7 = _ZN12ErrandRecord7getKindEv(PlanErrand_GetRecord(planErrand));
    }
    PlanErrand_Assign(planErrand, r7, &itemFromPlayer, ((s32)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())), r4);
    VillagerSync_Act3D(r6, r7, &itemFromPlayer, (*(Unk_02025540_Tbl * *)&gCommManager)->myAid, r4);
    Villager_GetState(r6);
    ((void (*)())VillagerState_GetErrand)();
    ((s32 (*)())_ZN12ErrandRecord5clearEv)();
}

void VillagerTalkRequestStartTopics::selectQNo(Unk_020254ec_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQNoB.key, sTalkTopicQNoB.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    ((VillagerTalk *)this)->setDeferredFn((*(Unk_020d8938_Fn *)&data_020d7eb0));
}

void VillagerTalkRequestStartTopics::registerRequestDeclined() {
    void *r6 = actor->villagerData;
    s32 r4 = 0;
    s32 r7;
    if (_ZN12ErrandRecord8isActiveEv(PlanErrand_GetRecord(planErrand)) == 0) {
        r7 = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
        r4 = 1;
    } else {
        r7 = _ZN12ErrandRecord7getKindEv(PlanErrand_GetRecord(planErrand));
    }
    PlanErrand_Assign(planErrand, r7, &itemFromPlayer, 0, r4);
    VillagerSync_Act3D(r6, r7, &itemFromPlayer, 4, r4);
    Villager_GetState(r6);
    ((void (*)())VillagerState_GetErrand)();
    ((s32 (*)())_ZN12ErrandRecord5clearEv)();
}

void VillagerTalkRequestStartTopics::selectQCon(Unk_020254ec_Out *out) {
    Unk_020254ec_Data d = sTalkTopicQConDefault;
    s32 r6 = PlanErrand_GetStep(planErrand);
    s32 r7 = _ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()));
    s32 x = 0;
    _ZN12ErrandRecord13getClassIndexEPi(((void *)((VillagerTalk *)this)->getUnk150()), &x);
    if (r6 < PlanErrand_GetStepCount(r7) && x < 5) {
        d.key = sTalkKeysQCon[x][r6];
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkRequestStartTopics::gotoQ05Talk() {
    u8 b;
    Unk_020238b0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[7]));
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQ05Talk(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = sTalkTopicQ05TalkDefault;
    s32 r = PlanErrand_GetStep(planErrand);
    if (r < 7) {
        d.key = sTalkKeysQ05Talk[r];
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openCatchPicker() {
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 0) {
        _ZN12Unk_020d771015setPocketFilterEjjj(this, (void *)((void (*)())Talk_FilterPickInsect), 0xd, 1);
    } else {
        _ZN12Unk_020d771015setPocketFilterEjjj(this, (void *)((void (*)())Talk_FilterPickFish), 0xd, 1);
    }
    _ZN12Unk_020d771012openSubSceneEi(this, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7e30));
}

void VillagerTalkTopics::onCatchPicked() {
    u8 b;
    Unk_0201d2d0_Out out;
    s32 r;
    if (MenuCtrl_IsResultOk() == 0) {
        if (((u32 *)window)) {
            ((u32 *)window)[2] = 1;
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[11]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &b, out.fileName);
    } else {
        r = MenuCtrl_GetIndex();
        itemFromPlayer = *_ZN15PlayerInventory9getPocketEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), r);
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 4, 0);
        ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7e28));
    }
}

void VillagerTalkTopics::compareCatchPrice() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    Unk_02025090_Pair s;
    s32 a, c;
    a = 0;
    s.unk_00 = 0;
    s.unk_04 = 0;
    c = 0;
    Clock_GetDateTime(&s);
    if (itemFromPlayer != 0xfff1) {
        a = Item_GetPrice(&itemFromPlayer);
    }
    h = *PlanErrand_GetShownItem(planErrand);
    if (h != 0xfff1) {
        c = Item_GetPrice(&h);
    }
    if (a == c) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[12]));
    } else if (a > c) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[9]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[11]));
    }
    if (itemFromPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 2, 7);
    }
    if (h != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h, 3, 7);
    }
    if (((u32 *)window)) {
        ((u32 *)window)[2] = 1;
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQPwin(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Pwin;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Pwin;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::takePlayerCatch() {
    u16 h;
    s32 r = MenuCtrl_GetIndex();
    h = 0xfff1;
    Pocket_SetItem(&h, 0, r);
    _ZN12Unk_0201442015requestKeepItemEv(this);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7a70));
}

void VillagerTalkTopics::gotoQPwin2() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[10]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((u32 *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQPwin2(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Pwin2;
    void *r7 = actor->villagerData;
    ((VillagerTalkRequestItemTopics *)this)->pickRequestReward();
    if (itemFromPlayer != 0xfff1) {
        Villager_AddReceivedItem(r7, &itemFromPlayer);
        if (memory != 0 && memoryIndex != (u32)-1) {
            _ZN14VillagerMemory15setReceivedItemEPt((void *)memory, &itemFromPlayer);
            VillagerSync_ReceivedItem(r7, memoryIndex, &itemFromPlayer);
        }
    }
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Pwin2;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, topicIndex, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5f;
}

void VillagerTalkTopics::selectQPlose(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Plose;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Plose;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7e40);
}

void VillagerTalkTopics::cancelRequestChain() {
    _ZN12Unk_0201442017requestReturnItemEv(this);
    PlanErrand_ResetProgress(planErrand);
    VillagerSync_Act3C01(actor->villagerData);
}

void VillagerTalkTopics::selectQPdraw(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Pdraw;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Pdraw;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7a88);
}

void VillagerTalkTopics::checkVillagerCatch() {
    u8 buf[2];
    Unk_0201d2d0_Out out;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0:
        if (Unk_02024df4_Range(PlanErrand_GetShownItem(planErrand), 0x12b0, 0x12e7)) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[14]));
            if (selectFn) {
                (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
            }
            buf[0] = out.msgIndex;
            _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &buf[0], out.fileName);
        } else {
            _ZN12Unk_020d771013setPocketItemEjjj(this, (void *)((s32)Talk_GetPocketMaskForItem((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())))), 0xd, 1);
            _ZN12Unk_020d771012openSubSceneEi(this, 0);
            ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7a90));
        }
        break;
    case 1:
        if (Unk_02024df4_Range(PlanErrand_GetShownItem(planErrand), 0x12e8, 0x131f)) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[14]));
            if (selectFn) {
                (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
            }
            buf[1] = out.msgIndex;
            _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &buf[1], out.fileName);
        } else {
            _ZN12Unk_020d771013setPocketItemEjjj(this, (void *)((s32)Talk_GetPocketMaskForItem((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())))), 0xd, 1);
            _ZN12Unk_020d771012openSubSceneEi(this, 0);
            ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7b20));
        }
        break;
    }
}

void VillagerTalkTopics::onNloseCatchPicked() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (MenuCtrl_IsResultOk() == 0) {
        if (((u32 *)window)) {
            ((u32 *)window)[2] = 1;
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[11]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &b, out.fileName);
    } else {
        s32 r = MenuCtrl_GetIndex();
        itemFromPlayer = *_ZN15PlayerInventory9getPocketEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), r);
        h = 0xfff1;
        Pocket_SetItem(&h, 0, r);
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 4, 0);
        ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7d10));
    }
}

void VillagerTalkTopics::gotoQNlose() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (((u32 *)window)) {
        ((u32 *)window)[2] = 1;
    }
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[15]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((u32 *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQNwin(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Nwin;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Nwin;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    PlanErrand_ResetProgress(planErrand);
    VillagerSync_Act3C01(actor->villagerData);
}

void VillagerTalkTopics::selectQNlose(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Nlose;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Nlose;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::keepItemThenGotoQPay() {
    _ZN12Unk_0201442015requestKeepItemEv(this);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7d78));
}

void VillagerTalkTopics::gotoQPay() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[16]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(((u32 *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQPay(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Pay;
    void *r7 = actor->villagerData;
    ((VillagerTalkRequestItemTopics *)this)->pickRequestReward();
    if (itemFromPlayer != 0xfff1) {
        Villager_AddReceivedItem(r7, &itemFromPlayer);
        if (memory != 0 && memoryIndex != (u32)-1) {
            _ZN14VillagerMemory15setReceivedItemEPt((void *)memory, &itemFromPlayer);
            VillagerSync_ReceivedItem(r7, memoryIndex, &itemFromPlayer);
        }
    }
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Pay;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5f;
}

void VillagerTalkTopics::gotoQEndOrRevenge() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (((u32)PlanErrand_GetStep(planErrand)) >= 4) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[25]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[17]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_0201d2d0_Menu *)window), &b, out.fileName);
}

void VillagerTalkTopics::handOverRequestReward() {
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7ac0));
}

void VillagerTalkTopics::selectQRevenge(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &sTalkTopicQ01Revenge;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 1) {
        d = &sTalkTopicQ02Revenge;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7a60);
}

void VillagerTalkTopics::advanceRequestStep() {
    void *r4 = actor->villagerData;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 4) {
        if (Item_IsFurniture(&itemFromPlayer) != 0) {
            u32 v = Villager_GetFurnitureTasteScore(r4, &itemFromPlayer);
            u32 w = PlanErrand_AddCount(planErrand, (u8)v);
            VillagerSync_Act3C05(r4, (u8)w);
        }
    }
    _ZN12ErrandRecord7setStepEh(((void *)((VillagerTalk *)this)->getUnk150()), 1);
    VillagerSync_Act3C00(r4, 1);
    VillagerState_SetUnk1dBit1(Villager_GetState(r4));
}

void VillagerTalkTopics::openRequestItemPicker() {
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 2:
        if (((u32)PlanErrand_GetStep(planErrand)) <= 1) {
            _ZN12Unk_020d771015setPocketFilterEjjj(this, ((void (*)())Talk_FilterPickFossil), 0xd, 1);
        } else {
            _ZN12Unk_020d771013setPocketItemEjjj(this, ((void *)Talk_GetWantedFossilPocketMask(planErrand)), 0xd, 1);
        }
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7a58));
        break;
    case 3:
        if (((u32)PlanErrand_GetStep(planErrand)) <= 1) {
            _ZN12Unk_020d771015setPocketFilterEjjj(this, ((void (*)())Talk_FilterPickShirt), 0xd, 1);
        } else {
            _ZN12Unk_020d771013setPocketItemEjjj(this, ((void *)Talk_GetPocketMaskForItem((u16 *)_ZN12ErrandRecord7getItemEv(((void *)((VillagerTalk *)this)->getUnk150())))), 0xd, 1);
        }
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d79c0));
        break;
    case 4:
        _ZN12Unk_020d771015setPocketFilterEjjj(this, ((void (*)())Talk_FilterPickNonFossilFurniture), 0xd, 1);
        _ZN12Unk_020d771012openSubSceneEi(this, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7ba8));
        break;
    }
}

void VillagerTalkTopics::onRequestItemPicked() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (MenuCtrl_IsResultOk() == 0) {
        if (((Unk_0201d2d0_Menu *)window)) {
            ((Unk_0201d2d0_Menu *)window)->nextState = 1;
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[11]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_0201d2d0_Menu *)window), &b, out.fileName);
    } else {
        void *r5 = ((void *)MenuCtrl_GetIndex());
        itemFromPlayer = *(u16 *)((void *)_ZN15PlayerInventory9getPocketEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), (s32)r5));
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 4, 0);
        ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7d48));
    }
}

void VillagerTalkTopics::checkRequestItem() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4 = actor->villagerData;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 2:
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[21]));
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
        }
        if (((u32)PlanErrand_GetStep(planErrand)) >= 2 && ((u32)PlanErrand_GetStep(planErrand)) <= 4) {
            u32 r6 = ((u32 (*)(void *))Item_GetFossilPartIndex)(&itemFromPlayer);
            PlanErrand_SetFlag(planErrand, r6);
            VillagerSync_Act3C04(r4, r6);
        }
        break;
    case 3: {
        if (((u32)PlanErrand_GetStep(planErrand)) >= 2) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[21]));
        } else {
            u8 *r7 = ((u8 *)Villager_GetFashionTaste(r4));
            u16 *p = _ZN23VillagerDataProfileView8getShirtEv(r4);
            BOOL eq;
            if (Item_IsFurniture(&itemFromPlayer) != 0) {
                s32 a = ((s32)Item_GetFurnitureIndex(&itemFromPlayer));
                if (a == ((s32)Item_GetFurnitureIndex(p))) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (itemFromPlayer == *p) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq) {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[20]));
            } else if (r7[1] != Item_GetShirtUnkGroup(&itemFromPlayer)) {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[21]));
            } else {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[19]));
            }
        }
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 2, 7);
        }
        break;
    }
    case 4:
        if (Villager_GetFurnitureTasteScore(r4, &itemFromPlayer) > 0) {
            if (Item_IsFurniture(&itemFromPlayer) != 0) {
                s32 v = Villager_CountFurnitureLike(r4, &itemFromPlayer);
                s32 w = Ftr_GetUnk05(&itemFromPlayer);
                if (v >= 2 || (v == 1 && w == 2)) {
                    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[20]));
                } else {
                    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[21]));
                }
            } else {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[19]));
            }
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[19]));
        }
        if (itemFromPlayer != 0xfff1) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemFromPlayer, 0, 7);
        }
            break;
    }
    if (((Unk_0201d2d0_Menu *)window)) {
        ((Unk_0201d2d0_Menu *)window)->nextState = 1;
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_0201d2d0_Menu *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQMiss(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = sTalkTopicQ04Miss;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 4) {
        d.key = (u32)sTalkKeyQ05Miss;
    }
    if (((Unk_0201d2d0_Menu *)window)) {
        ((Unk_0201d2d0_Menu *)window)->nextState = 1;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7b70);
}

void VillagerTalkTopics::giveBackHeldItem() {
    _ZN12Unk_0201442017requestReturnItemEv(this);
}

void VillagerTalkTopics::selectQMissB(Unk_0201d2d0_Out *out) {
    u32 r6 = 2;
    u32 r7 = (u32)data_020c7a20;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 4) {
        r7 = (u32)data_020c7a2c;
        r6 = 3;
    }
    if (((Unk_0201d2d0_Menu *)window)) {
        ((Unk_0201d2d0_Menu *)window)->nextState = 1;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), r7, 3, 1, (u8)r6);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7cd0);
}

void VillagerTalkTopics::selectQThanks(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = sTalkTopicQThanksDefault;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 2:
        d.key = (u32)sTalkKeyQ03Thanks;
        break;
    case 3:
        d.key = (u32)sTalkKeyQ04Thanks;
        break;
    default:
        d.key = (u32)sTalkKeyQ05Thanks;
        break;
    }
    if (((Unk_0201d2d0_Menu *)window)) {
        ((Unk_0201d2d0_Menu *)window)->nextState = 1;
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::takeRequestItem() {
    void *r2 = ((void *)MenuCtrl_GetIndex());
    u16 h = 0xfff1;
    Pocket_SetItem(&h, 0, (s32)r2);
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 3) {
        _ZN12Unk_0201442016requestItemAct0FEv(this);
        if (Unk_020242d8_R1(_ZN23VillagerDataProfileView8getShirtEv(actor->villagerData), 0x11a8, 0x12a7)) {
            itemToPlayer = *_ZN23VillagerDataProfileView8getShirtEv(actor->villagerData);
        }
    } else {
        _ZN12Unk_0201442015requestKeepItemEv(this);
    }
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7e88));
}

void VillagerTalkTopics::gotoQRewardTopic() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 2) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[23]));
    } else {
        if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 3) {
            ((Unk_0202ce90_Base *)this)->playOwnerIdleAnim();
        }
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[22]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(((Unk_0201d2d0_Menu *)window), &b, out.fileName);
}

void VillagerTalkTopics::selectQPreitemB(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQPreitemB.key, sTalkTopicQPreitemB.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkRequestItemTopics::gotoQItemB() {
    u8 b;
    Unk_020238b0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[23]));
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState21setNextMessageIfUnsetEPhPv(window, &b, out.fileName);
}

void VillagerTalkRequestItemTopics::pickRequestReward() {
    u16 buf[16];
    void *r4;
    void *r10;
    void *r6;
    void *t;
    s32 r7, r5;
    if (planErrand == 0) {
        return;
    }
    r4 = PlayerData_GetCurrent();
    r10 = ((void * (*)())_ZN10PlayerData12getInventoryEv)();
    r6 = actor->villagerData;
    t = PlanErrand_GetRecord(planErrand);
    r7 = Random_GlobalBelow(100);
    r5 = PlanErrand_GetStep(planErrand);
    switch (_ZN12ErrandRecord7getKindEv(t)) {
    case 0:
    case 1:
    case 2:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x1f4;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[0], price);
                itemToPlayer = buf[0];
            }
            break;
        case 2:
        case 3:
            Villager_GetMostValuableReceivedItem(&buf[1], actor->villagerData);
            itemToPlayer = buf[1];
            if (itemToPlayer != 0xfff1) {
                Villager_RemoveReceivedItem(actor->villagerData, &itemToPlayer);
            } else if (Random_GlobalBelow(100) < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x2bc;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[2], price);
                itemToPlayer = buf[2];
            }
            break;
        default:
            ((s32 (*)(u16 *, void *))Talk_PickErrandItem)(&buf[3],  r4);
            itemToPlayer = buf[3];
            break;
        }
        if (itemToPlayer == 0xfff1) {
            Talk_PickErrandItem(&buf[4], 0);
            itemToPlayer = buf[4];
        }
        break;
    case 3:
        switch (r5) {
        case 0:
        case 1:
            Villager_PickRandomReceivedItem(&buf[5], r6);
            itemToPlayer = buf[5];
            if (itemToPlayer != 0xfff1) {
                Villager_RemoveReceivedItem(r6, &itemToPlayer);
            } else if (r7 < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x1f4;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[6], price);
                itemToPlayer = buf[6];
            }
            break;
        case 2:
        case 3:
        case 4:
            Villager_GetMostValuableReceivedItem(&buf[7], r6);
            itemToPlayer = buf[7];
            if (itemToPlayer != 0xfff1) {
                Villager_RemoveReceivedItem(r6, &itemToPlayer);
            } else if (Random_GlobalBelow(100) < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x2bc;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[8], price);
                itemToPlayer = buf[8];
            }
            break;
        default:
            ((s32 (*)(u16 *, void *))Talk_PickClothingItem)(&buf[9],  r4);
            itemToPlayer = buf[9];
            break;
        }
        if (itemToPlayer == 0xfff1) {
            Talk_PickClothingItem(&buf[10], 0);
            itemToPlayer = buf[10];
        }
        break;
    case 4:
        switch (r5) {
        case 0:
        case 1:
            if (r7 < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x1f4;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[11], price);
                itemToPlayer = buf[11];
            }
            break;
        case 2:
        case 3:
        case 4:
            Villager_GetMostValuableReceivedItem(&buf[12], r6);
            itemToPlayer = buf[12];
            if (itemToPlayer != 0xfff1) {
                Villager_RemoveReceivedItem(r6, &itemToPlayer);
            } else if (Random_GlobalBelow(100) < 30) {
                price = FengShui_GetWestTotal() * 4 + 0x2bc;
                price = Talk_RoundBells(price);
                Talk_GetMoneyItem(&buf[13], price);
                itemToPlayer = buf[13];
            }
            break;
        default:
            ((s32 (*)(u16 *, void *))Talk_PickErrandItem)(&buf[14],  r4);
            itemToPlayer = buf[14];
            break;
        }
        if (itemToPlayer == 0xfff1) {
            Talk_PickErrandItem(&buf[15], 0);
            itemToPlayer = buf[15];
        }
        break;
    }
    if (Unk_020238b0_InRange(&itemToPlayer, 0x1492, 0x14fd)) {
        PlayerInventory_AddBells((s32)r10, price, 1);
    } else if (itemToPlayer != 0xfff1) {
        s32 r2 = _ZN15PlayerInventory15findEmptyPocketEv((u32)r10);
        if (r2 != -1) {
            _ZN15PlayerInventory9setPocketEPtij(r10, &itemToPlayer, r2, 0);
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv(r4), &itemToPlayer, 0, 1);
        }
    }
    if (Unk_020238b0_InRange(&itemToPlayer, 0x1492, 0x14fd)) {
        _ZN16ActorTalkRequest18setNumberNamedSlotEijihii(this, (void *)price, 1, 4, 1, 1, 0);
    } else if (itemToPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 1, 7);
    }
}

void VillagerTalkRequestItemTopics::selectQItemB(Unk_020238b0_Out *out) {
    void *r6 = actor->villagerData;
    u16 saved = itemFromPlayer;
    if (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())) == 3) {
        saved = itemToPlayer;
        itemToPlayer = 0xfff1;
    }
    pickRequestReward();
    if (saved != 0xfff1) {
        Villager_AddReceivedItem(r6, &saved);
    }
    if (itemFromPlayer != 0xfff1 && memory != 0 && memoryIndex != -1) {
        _ZN14VillagerMemory15setReceivedItemEPt(memory, &itemFromPlayer);
        VillagerSync_ReceivedItem(r6, memoryIndex, &itemFromPlayer);
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQItem.key, sTalkTopicQItem.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5f;
}

void VillagerTalkRequestItemTopics::handOverQItemB() {
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7cf8));
}

void VillagerTalkRequestItemTopics::gotoQClearOrEnd() {
    u8 b;
    Unk_020238b0_Out out;
    s32 n = PlanErrand_GetStepCount(_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150())));
    if (PlanErrand_GetStep(planErrand) >= n - 1) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[25]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[24]));
    }
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkRequestItemTopics::selectQClear(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = sTalkTopicQClearDefault;
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 2:
        d.key = (u32)data_020c7a44;
        break;
    case 3:
        d.key = (u32)data_020c7a50;
        break;
    default:
        d.key = (u32)data_020c7a5c;
        break;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = data_020d7970;
}

void VillagerTalkRequestItemTopics::selectQEnd(Unk_020238b0_Out *out) {
    Unk_020238b0_Data *e = sTalkTopicsQEnd;
    if (_ZN12ErrandRecord8getClassEv(((void *)((VillagerTalk *)this)->getUnk150())) == 0) {
        s32 idx = 0;
        if (_ZN12ErrandRecord13getClassIndexEPi(((void *)((VillagerTalk *)this)->getUnk150()), &idx) != 0) {
            e = &sTalkTopicsQEnd[idx];
        }
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), e->key, e->variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = data_020d7da0;
}

void VillagerTalkRequestItemTopics::finishRequestChain() {
    void *r4 = actor->villagerData;
    _ZN12ErrandRecord7setStepEh(PlanErrand_GetRecord(planErrand), 3);
    VillagerSync_Act3C00(actor->villagerData, 3);
    if (_ZN11CommManager12isSlotActiveEi(((void * *)&gCommManager)[0], (u32)(((void **)((void * *)&gCommManager)[0])[0x64 / 4])) == 0) {
        Villager_UpdatePlanErrand(r4);
        Villager_GetState(r4);
        ((void (*)())VillagerState_SetUnk1dBit1)();
    }
}

void VillagerTalkRequestItemTopics::selectQReturn(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = sTalkTopicQReturnDefault;
    s32 idx = 0;
    _ZN12ErrandRecord13getClassIndexEPi(((void *)((VillagerTalk *)this)->getUnk150()), &idx);
    if (idx < 5) {
        d.key = sTalkKeysQReturn[idx];
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
        out->fileName = (u32)&topicFile;
        out->msgIndex = topicIndex;
    }
}

void VillagerTalkRequestItemTopics::selectQComp(Unk_020238b0_Out *out) {
    Unk_020238b0_Data d = sTalkTopicQCompDefault;
    s32 idx = 0;
    _ZN12ErrandRecord13getClassIndexEPi(((void *)((VillagerTalk *)this)->getUnk150()), &idx);
    if (idx < 5) {
        d.key = sTalkKeysQComp[idx];
    }
    if (d.key != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d.key, d.variantCount, 0, 0);
        out->fileName = (u32)&topicFile;
        out->msgIndex = topicIndex;
    }
    ((VillagerTalk *)this)->setDeferredFn((*(Unk_020d8938_Fn *)&data_020d7c78));
}

void VillagerTalkRequestItemTopics::clearRequest() {
    PlanErrand_AdvanceStep(planErrand);
    VillagerSync_Act3C02(actor->villagerData);
}

extern "C" BOOL Talk_IsArbeitItem(u16 *p) {
    return Unk_020238b0_InRange(p, 0x1561, 0x1564);
}

void VillagerTalkRequestItemTopics::openArbeitItemPicker() {
    _ZN12Unk_020d771015setPocketFilterEjjj(this, (void *)((u32)Talk_IsArbeitItem), 0xd, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&(*(Unk_020238b0_Fn *)&data_020d7c70)));
}

void VillagerTalkTopics::onArbeitItemPicked() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (MenuCtrl_IsResultOk() != 0) {
        s32 t = MenuCtrl_GetIndex();
        PlayerData_GetCurrent();
        itemFromPlayer = *_ZN15PlayerInventory9getPocketEi(((void * (*)())_ZN10PlayerData12getInventoryEv)(), t);
        h = 0xfff1;
        Pocket_SetItem(&h, 0, t);
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[29]));
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsA[11]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectEvArbeitReceive(Unk_0201d2d0_Out *out) {
    u16 h[2];
    Unk_0202368c_Obj o1, o2;
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicEvArbeit, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0xe: {
        topicIndex = 0xa;
        _ZN12ItemPickSpec3setEii(&o1, 0, 0);
        ItemPick_One(&h[0], &o1, 0, 0, 1, 1, 0);
        itemToPlayer = h[0];
        ItemPickSpec_Destruct(&o1);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 0, 7);
        _ZN12ErrandRecord7setStepEh(((void *)((VillagerTalk *)this)->getUnk150()), 1);
        break;
    }
    case 0x10: {
        topicIndex = 0xc;
        _ZN12ItemPickSpec3setEii(&o2, 3, 0);
        ItemPick_One(&h[1], &o2, 0, 0, 1, 1, 0);
        itemToPlayer = h[1];
        ItemPickSpec_Destruct(&o2);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 0, 7);
        _ZN12ErrandRecord7setStepEh(((void *)((VillagerTalk *)this)->getUnk150()), 1);
        break;
    }
    case 0x11:
        if (memory != 0 && _ZN23VillagerDataProfileView13hasLetterFromEPt(actor->villagerData, ((void * (*)())VillagerMemory_GetPlayerId)())) {
            customFn2 = (Unk_020238b0_Fn)(data_020d7a30);
            unk_134_w = (u32)memory;
            topicIndex = 0xe;
        } else {
            topicIndex = 0x16;
        }
        _ZN12ErrandRecord7setStepEh(((void *)((VillagerTalk *)this)->getUnk150()), 1);
        break;
    default:
        topicIndex = 0xa;
        break;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::giveArbeitReward() {
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0xe:
    case 0x10: {
        s32 t = Pocket_FindEmpty();
        if (t >= 0) {
            Pocket_SetItem(&itemToPlayer, 0, t);
            Catalog_SetItem((s32)((void *)_ZN10PlayerData10getCatalogEv(PlayerData_GetCurrent())), &itemToPlayer, 0, 1);
        }
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7c58));
        break;
    }
    case 0x11:
        ((VillagerTalk *)this)->clearTopicFns();
        break;
    }
}

void VillagerTalkTopics::gotoEvArbeitEnd() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[30]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectEvArbeitEnd(Unk_0201d2d0_Out *out) {
    Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicEvArbeit, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
    switch (_ZN12ErrandRecord7getKindEv(((void *)((VillagerTalk *)this)->getUnk150()))) {
    case 0xe:
        topicIndex = 0xb;
        break;
    case 0x10:
        topicIndex = 0xd;
        break;
    default:
        topicIndex = 0xe;
        break;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ12Other(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12Other.key, sTalkTopicQ12Other.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ12Report(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12Report.key, sTalkTopicQ12Report.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ12Thanks(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12Thanks.key, sTalkTopicQ12Thanks.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::checkPocketsForQItem() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (Pocket_FindEmpty() != -1) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[34]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[36]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQItem(Unk_0201d2d0_Out *out) {
    u16 h[2];
    Talk_PickErrandItem(&h[0], (s32)PlayerData_GetCurrent());
    itemToPlayer = h[0];
    if (itemToPlayer == 0xfff1) {
        Talk_PickErrandItem(&h[1], 0);
        itemToPlayer = h[1];
    }
    if (itemToPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 1, 7);
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQItemB.key, sTalkTopicQItemB.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::putQItemInPocket() {
    void *a = PlayerData_GetCurrent();
    void *b = ((void * (*)())_ZN10PlayerData12getInventoryEv)();
    s32 c = ((s32 (*)())_ZN15PlayerInventory15findEmptyPocketEv)();
    if (c == -1) {
        c = 0;
    }
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
    _ZN15PlayerInventory9setPocketEPtij(b, &itemToPlayer, c, 0);
    Catalog_SetItem((s32)((void *)_ZN10PlayerData10getCatalogEv(a)), &itemToPlayer, 0, 1);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7c38));
}

void VillagerTalkTopics::gotoQ12End() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[35]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQ12End(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12End.key, sTalkTopicQ12End.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5f;
    onEndFn = (Unk_020238b0_Fn)(data_020d8010);
}

void VillagerTalkTopics::onQ12EndClose() {
    SaveVillagers_GetUnk3830(gSaveVillagers);
    _ZN18SickVillagerRecord11resetRecordEv();
}

void VillagerTalkTopics::selectQ12Full(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12FullB.key, sTalkTopicQ12FullB.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7998);
}

void VillagerTalkTopics::onQ12FullClose() {
    void *p;
    SaveVillagers_GetUnk3830(gSaveVillagers);
    p = ((void * (*)())_ZN18SickVillagerRecord13func_0209978cEv)();
    if (((s32 (*)())_ZN12ErrandRecord8isActiveEv)() != 0) {
        _ZN12ErrandRecord7setStepEh(p, 1);
    }
}

void VillagerTalkTopics::selectQ12FullPart1(Unk_0201d2d0_Out *out) {
    u32 v = sTalkTopicQ12FullC.variantCount;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12FullC.key, v, 1, v);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::recheckPocketsForQItem() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (Pocket_FindEmpty() != -1) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[34]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[38]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectQ12FullPart2(Unk_0201d2d0_Out *out) {
    u32 v = sTalkTopicQ12Full.variantCount;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ12Full.key, v, 2, v);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ10Req(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ10Req.key, sTalkTopicQ10Req.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openQ10ReqChoice() {
    Unk_0201d568_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x1f, 0x1f, (s32)((u8 *)&nZ::sRequestTopicsB[40]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x20, 0x20, (s32)((u8 *)&nZ::sRequestTopicsA[3]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d79e0));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectQ10Reserve(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ10Reserve.key, sTalkTopicQ10Reserve.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openReserveTimeEntry() {
    _ZN12Unk_020d771015setSubSceneKindEjj(this, 0x31, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 2);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7be8));
}

void VillagerTalkTopics::checkReserveTime() {
    struct {
        u8 unk_00;
        u8 pad_01[3];
        u32 a0;
        u32 a1;
        u32 b0;
        u32 b1;
        Unk_0201d2d0_Out o;
    } l;
    l.a0 = 0;
    l.a1 = 0;
    l.b0 = 0;
    l.b1 = 0;
    Clock_GetDateTime(&l.b0);
    MI_CpuCopy8(&l.b0, &l.a0, 8);
    MenuCtrl_GetDateTime(&l.a0);
    if (DateTime_DiffMinutes(&l.b0, &l.a0) <= 30) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[41]));
    } else if (Villager_IsAsleep(actor->villagerData, &l.a0) != 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[43]));
    } else if (((u8 *)&l)[6] < 6) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[42]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sRequestTopicsB[44]));
    }
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&l.o);
    }
    l.unk_00 = l.o.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &l.unk_00, l.o.fileName);
}

void VillagerTalkTopics::selectQError1(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQError1.key, sTalkTopicQError1.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQError2(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQError2.key, sTalkTopicQError2.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQError3(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQError3.key, sTalkTopicQError3.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ10Reserved(Unk_0201d2d0_Out *out) {
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    MenuCtrl_GetDateTime(&s);
    this->setVisitTimeArgs((Unk_020289f8_S *)(&s));
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ10Reserved.key, sTalkTopicQ10Reserved.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    pendingSe = 0x5e;
    ((VillagerTalk *)this)->setDeferredFn((*(Unk_020d8938_Fn *)&data_020d79d0));
}

void VillagerTalkTopics::storeReservation() {
    PlayerData_GetCurrent();
    u8 *p = (u8 *)((void * (*)())_ZN10PlayerData10getErrandsEv)();
    Unk_02022bb4_Pair s;
    s.unk_00 = 0;
    s.unk_04 = 0;
    MenuCtrl_GetDateTime(&s);
    HouseVisitInvite_Set(p + 0x88, _ZN12VillagerData13getVillagerIdEv(actor->villagerData), &s);
    Villager_GetState(actor->villagerData);
    ((void (*)())VillagerState_GetErrand)();
    ((void (*)())_ZN12ErrandRecord5clearEv)();
    SaveVillagers_UpdateErrands(gSaveVillagers);
}

void VillagerTalkTopics::selectQ10Con(Unk_0201d2d0_Out *out) {
    PlayerData_GetCurrent();
    u8 *p = (u8 *)((void * (*)())_ZN10PlayerData10getErrandsEv)();
    this->setVisitTimeArgs((Unk_020289f8_S *)(p + 0xa0));
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ10Con.key, sTalkTopicQ10Con.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectQ10Leave(Unk_0201d2d0_Out *out) {
    PlayerData_GetCurrent();
    u8 *p = (u8 *)((void * (*)())_ZN10PlayerData10getErrandsEv)();
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicQ10Leave.key, sTalkTopicQ10Leave.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    HouseVisitInvite_Clear(p + 0x88);
}

void VillagerTalkTopics::selectEtcCancel(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEtcCancel.key, sTalkTopicEtcCancel.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

s32 VillagerTalkTopics::selectTsuInHint() {
    struct {
        u8 buf[2];
        u16 h;
        u32 t0;
        u32 t1;
        s32 a, b, c;
    } l;
    s32 r = 0;
    l.t0 = 0;
    l.t1 = 0;
    l.a = 5;
    l.h = 0xfff1;
    l.b = 0;
    l.c = 0;
    Clock_GetDateTime(&l.t0);
    if (InsectPick_PickWeightedRarity((u16 *)(&l.h), &l.a, &l.b, &l.c, (Unk_0202c92c_Ent *)(&l.t0)) == 1) {
        if (l.a >= 3) {
            r = 1;
        }
        r = r * 3 + InsectPick_GetHintVariant(l.b);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &l.h, 0, 7);
        if (l.c >= 3) {
            l.c--;
        }
        l.buf[0] = l.c;
        l.buf[1] = 0;
        _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 3, l.buf, ((u8 *)"st_insect_time"), &l.buf[1]);
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuInHint.key, sTalkTopicTsuInHint.variantCount, r, 0);
        r = 1;
    }
    return r;
}

void VillagerTalkTopics::setFishTimeSlot(s32 a, u16 *p, s32 c, Unk_02022608_Ent **arr, s32 last) {
    Unk_02022608_Ent **pp = arr;
    s32 idx;
    s32 x = (u8)a;
    if (pp) {
        BOOL ok = FALSE;
        u16 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            ok = TRUE;
        }
        if (ok && c <= 1) {
            Unk_02022608_Ent *e;
            Unk_02022608_Rec *rec;
            s32 i, j, k;
            if (v >= 0x12e8 && v <= 0x131f) {
                idx = v - 0x12e8;
            } else {
                idx = -1;
            }
            i = 0;
            j = 0;
            k = 0;
            for (; i < 3; pp++, i++) {
                e = *pp;
                if (e) {
                    for (j = 0; j < 2; e++, j++) {
                        rec = e->entries;
                        if (rec) {
                            for (k = 0; k < e->count; rec++, k++) {
                                if (rec->fish == idx && func_0209948c(rec->weight) <= 1) {
                                    break;
                                }
                            }
                            if (e->count < k) {
                                break;
                            }
                        }
                    }
                    if (j == 2) {
                        break;
                    }
                }
            }
            if (i == 3) {
                x = 3;
            }
        }
    }
    u8 buf[2];
    buf[0] = x;
    buf[1] = 0;
    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, last, buf, ((u8 *)"st_fish_time"), &buf[1]);
}

extern "C" s32 Talk_GetFishHintTimeVariant(s32 v) {
    s32 r = 0;
    switch (v) {
    case 0:
    case 2:
    case 4:
        r = 0;
        break;
    case 5:
    case 6:
        r = 1;
        break;
    case 1:
    case 3:
        r = 2;
        break;
    }
    return r;
}

s32 VillagerTalkTopics::selectTsuFiHint() {
    struct {
        u16 unk_00;
        u16 pad_02;
        u32 unk_04;
        u32 unk_08;
        s32 a, b, c;
    } l;
    s32 r;
    void *q;
    r = 0;
    l.unk_04 = 0;
    l.unk_08 = 0;
    l.a = 5;
    l.unk_00 = 0xfff1;
    l.b = 0;
    l.c = 0;
    Clock_GetDateTime(&l.unk_04);
    u32 x = ((u8 *)&l)[8];
    q = FishTable_IsLateMonth(((u8 *)&l)[7]);
    q = FishTable_GetForDate(x, q);
    if (q && FishPick_PickWeightedRarity((u16 *)(&l), &l.a, (s32)(&l.b), (s32)(&l.c), (Unk_0202c148_Tbl *)q) == 1) {
        r = (l.a >= 3 ? 1 : r) * 3 + Talk_GetFishHintTimeVariant(l.b);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &l, 0, 7);
        setFishTimeSlot(l.c, &l.unk_00, l.a, *(Unk_02022608_Ent ***)q, 1);
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFiHint.key, sTalkTopicTsuFiHint.variantCount, r, 0);
        r = 1;
    }
    return r;
}

BOOL VillagerTalkTopics::selectTsuFoHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFoHint.key, sTalkTopicTsuFoHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuClHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuClHint.key, sTalkTopicTsuClHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuFuHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFuHint.key, sTalkTopicTsuFuHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuFlHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFlHint.key, sTalkTopicTsuFlHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuSeHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuSeHint.key, sTalkTopicTsuSeHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuNoHint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuNoHint.key, sTalkTopicTsuNoHint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuHobbyHint() {
    static BOOL (VillagerTalkTopics::*tbl[8])() = {
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f50), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f40), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f30),
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f28), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f20), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7f08),
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7ef8), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7ef0)};
    s32 idx = 8;
    if (Unk_02021ef8_IsZero(gFieldSceneKind)) {
        if (actor->villagerData != 0) {
            idx = _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(actor->villagerData)));
        }
    }
    if (Trend_IsValid(idx) != 0) {
        return (this->*tbl[idx])();
    }
    return FALSE;
}

namespace nZ {
extern "C" {
const void *const sTalkTopicAi7days[2] = {
    (void *)sTalkKeyAi7days, (void *)0x6,
};
Unk_021be8c0 sConnectTopic[1];
void * data_020d7ab8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicQ06Get[2] = {
    (void *)sTalkKeyQ06Get, (void *)0x3,
};
const void *const sTalkTopicApMail[2] = {
    (void *)sTalkKeyApMail, (void *)0x2,
};
const void *const sTalkTopicQ07Scold[2] = {
    (void *)sTalkKeyQ07Scold, (void *)0x3,
};
void * data_020d7958[2] = {
    (void *)_ZN18VillagerTalkTopics13endEtcPushHitEv, 0,
};
const void *const sTalkTopicQ10Req[2] = {
    (void *)sTalkKeyQ10Req, (void *)0x3,
};
void * data_020d7968[2] = {
    (void *)_ZN23VillagerTalkAcornTopics13onAcornPickedEv, 0,
};
const void *const sTalkTopicApBuy[2] = {
    (void *)sTalkKeyApBuy, (void *)0x3,
};
void * data_020d7948[2] = {
    (void *)_ZN18VillagerTalkTopics20onDeliveryItemPickedEv, 0,
};
char sTalkKeyTsuDrama[10] = "tsu_drama";
char sTalkKeyQ01Req245[13] = "q01_req2_4_5";
char sTalkKeyTsuClHint[12] = "tsu_cl_hint";
char sTalkKeyTsuEvent2[11] = "tsu_event2";
char sTalkKeyQError3[9] = "q_error3";
void * data_020d7918[2] = {
    (void *)_ZN18VillagerTalkTopics12selectApItemEv, 0,
};
char sTalkKeyQ06Open1[10] = "q06_open1";
void * data_020d7c50[2] = {
    (void *)_ZN12VillagerTalk14attrShowLetterEv, 0,
};
u32 sPresentOpinionTopics[3] = {
    0x00000017, 0x00000018, 0x00000019,
};
const void *const sTalkTopicTsuFiHint[2] = {
    (void *)sTalkKeyTsuFiHint, (void *)0x1,
};
void * sTalkKeysQ05Req[7] = {
    (void *)sTalkKeyQ05Req, (void *)sTalkKeyQ05Req, (void *)sTalkKeyQ05Req, (void *)sTalkKeyQ05Req,
    (void *)sTalkKeyQ05Req, (void *)sTalkKeyQ05Req, (void *)sTalkKeyQ05Req,
};
char sTalkKeyTsuStar[9] = "tsu_star";
const void *const sTalkTopicAiSad[2] = {
    (void *)sTalkKeyAiSad, (void *)0x5,
};
u32 sFishRarityWork[2];
static const char *const lit_020d785c = "";
void * sTalkKeysQ02Req[5] = {
    (void *)sTalkKeyQ02Req1, (void *)sTalkKeyQ02Req245, (void *)sTalkKeyQ02Req3, (void *)sTalkKeyQ02Req245,
    (void *)sTalkKeyQ02Req245,
};
char sTalkKeyAiBoom[8] = "ai_boom";
char sTalkKeyQ06Get[8] = "q06_get";
char sTalkKeyQ07Scold2[11] = "q07_scold2";
char sTalkKeyQ07Read[9] = "q07_read";
void * data_020d7c28[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics13cancelRequestEv, 0,
};
void * data_020d8010[2] = {
    (void *)_ZN18VillagerTalkTopics13onQ12EndCloseEv, 0,
};
void * data_020d8008[2] = {
    (void *)_ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv, 0,
};
char sTalkKeyQTimeover[11] = "q_timeover";
char sTalkKeyQNo[5] = "q_no";
const void *const sTalkTopicsAiFirst[6] = {
    (void *)sTalkKeyAiFirst, (void *)0x3, (void *)sTalkKeyAiNfirst, (void *)0x3,
    (void *)sTalkKeyAiMfirst, (void *)0x6,
};
void * data_020d8000[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics24tryAddSickVillagerChoiceEPv, 0,
};
char sTalkKeyEtcCancel[11] = "etc_cancel";
char sTalkKeyQ06Report[11] = "q06_report";
u8 sTsuTopicWeightsWork[14];
const void *const sTalkTopicQ10Con[2] = {
    (void *)sTalkKeyQ10Con, (void *)0x3,
};
const void *const sTalkTopicQ07Open2[2] = {
    (void *)sTalkKeyQ07Open2, (void *)0x3,
};
char sTalkKeyTsuSeHint[12] = "tsu_se_hint";
void * sTalkKeysQ03Req[5] = {
    (void *)sTalkKeyQ03Req12, (void *)sTalkKeyQ03Req12, (void *)sTalkKeyQ03Req3, (void *)sTalkKeyQ03Req45,
    (void *)sTalkKeyQ03Req45,
};
char sTalkKeyQ06Open3[10] = "q06_open3";
char sTalkKeyQ01Req1[9] = "q01_req1";
void * data_020d7c00[2] = {
    (void *)_ZN18VillagerTalkTopics20findTsuEvent2MessageEPhPiS0_Pj, 0,
};
const void *const sTalkTopicQ07Show[2] = {
    (void *)sTalkKeyQ07Show, (void *)0x3,
};
char sTalkKeyQ07Open2[10] = "q07_open2";
Unk_021be8c0 sEvGardeniingTopicTable[4];
void * data_020d7fd0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7fc8[2] = {
    (void *)_ZN18VillagerTalkTopics11closeLetterEv, 0,
};
const void *const sTalkTopicQ06Fin[2] = {
    (void *)sTalkKeyQ06Fin, (void *)0x3,
};
const s8 sCatchPlanStageMinutes[5] = {
    -1, 5, 2, 5, 5,
};
char sTalkKeyQ07Fin[8] = "q07_fin";
char sTalkKeyQ06Con[8] = "q06_con";
char sTalkKeyQ01Req3[9] = "q01_req3";
char sTalkKeyQ07Report[11] = "q07_report";
void * data_020d7bd0[2] = {
    (void *)_ZN12VillagerTalk13setHiraganaOnEv, 0,
};
const void *const sTalkTopicQ07Fin[2] = {
    (void *)sTalkKeyQ07Fin, (void *)0x3,
};
void * data_020d7f90[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuGhintEv, 0,
};
char sTalkKeyQ06Bad[8] = "q06_bad";
char sTalkKeyQ06Normal[11] = "q06_normal";
void * data_020d7f80[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuDressEv, 0,
};
char sTalkKeyEvSnowfes[11] = "ev_snowfes";
const void *const sTalkTopicQ07Con[2] = {
    (void *)sTalkKeyQ07Con, (void *)0x3,
};
const void *const sTalkTopicQ06Report[2] = {
    (void *)sTalkKeyQ06Report, (void *)0x3,
};
char sTalkKeyQ03Req3[9] = "q03_req3";
char sTalkKeyQ07Con[8] = "q07_con";
char sTalkKeyQ02Req245[13] = "q02_req2_4_5";
const void *const sTalkTopicQ07Report[2] = {
    (void *)sTalkKeyQ07Report, (void *)0x3,
};
const void *const sTalkTopicTsuClHint[2] = {
    (void *)sTalkKeyTsuClHint, (void *)0x3,
};
char sTalkKeyQ01Con3[9] = "q01_con3";
char sTalkKeyTsuMove1[10] = "tsu_move1";
char sTalkKeyQ03Req12[11] = "q03_req1_2";
void * data_020d7f60[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicQ06Bad[2] = {
    (void *)sTalkKeyQ06Bad, (void *)0x3,
};
const void *const sTalkTopicQItemC[2] = {
    (void *)sTalkKeyQItem, (void *)0x3,
};
u32 sVillagerModelPathBuf[8];
void * sTalkKeysQ04Con[7] = {
    (void *)sTalkKeyQ04Con12, (void *)sTalkKeyQ04Con12, (void *)sTalkKeyQ04Con37, (void *)sTalkKeyQ04Con37,
    (void *)sTalkKeyQ04Con37, (void *)sTalkKeyQ04Con37, (void *)sTalkKeyQ04Con37,
};
char sTalkKeyTsuInAct[11] = "tsu_in_act";
void * data_020d7f48[2] = {
    (void *)_ZN23VillagerTalkRumorTopics15selectTsuFriendEv, 0,
};
void * data_020d7b88[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuAlwaysEv, 0,
};
void * data_020d7f38[2] = {
    (void *)_ZN12VillagerTalk13showMoneyItemEv, 0,
};
char sTalkKeyQ07End[8] = "q07_end";
Unk_021be8c0 sHouseVisitTsuTopicTable[3];
const void *const sTalkTopicAiSnow2[2] = {
    (void *)sTalkKeyAiSnow2, (void *)0x6,
};
void * data_020d7f20[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuFuHintEv, 0,
};
const void *const sTalkTopicTsuInAct[2] = {
    (void *)sTalkKeyTsuInAct, (void *)0x4,
};
const void *const sTalkTopicTsuNoHint[2] = {
    (void *)sTalkKeyTsuNoHint, (void *)0x3,
};
void * data_020d7b78[2] = {
    (void *)_ZN23VillagerTalkRumorTopics18selectTsuHappyroomEv, 0,
};
void * data_020d7f18[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicEvSnowfes[2] = {
    (void *)sTalkKeyEvSnowfes, (void *)0x3,
};
char sTalkKeyQ01Pwin[9] = "q01_pwin";
char sTalkKeyTsuFiAct[11] = "tsu_fi_act";
void * data_020d7f08[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuFlHintEv, 0,
};
char sTalkKeyQ05Req[8] = "q05_req";
char sTalkKeyQ02Pwin[9] = "q02_pwin";
char sTalkKeyTsuFoAct[11] = "tsu_fo_act";
void * data_020d7ef0[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuNoHintEv, 0,
};
char sTalkKeyAiFirst[9] = "ai_first";
void * data_020d7ee0[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuFuActEv, 0,
};
void * data_020d7ed8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicQNoB[2] = {
    (void *)sTalkKeyQNo, (void *)0x3,
};
const void *const sTalkTopicTsuFiAct[2] = {
    (void *)sTalkKeyTsuFiAct, (void *)0x4,
};
void * data_020d7ed0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ01Plose[10] = "q01_plose";
void * data_020d7ec0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ02Plose[10] = "q02_plose";
char sTalkKeyQStart[8] = "q_start";
void * data_020d7eb0[2] = {
    (void *)_ZN30VillagerTalkRequestStartTopics23registerRequestDeclinedEv, 0,
};
void * data_020d7ea8[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuDramaEv, 0,
};
void * data_020d7ea0[2] = {
    (void *)_ZN18VillagerTalkTopics13selectTsuStarEv, 0,
};
void * data_020d7e98[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ05Talk35[12] = "q05_talk3_5";
u8 sDeliveryMinutes[3] = {
    0x0a, 0x1e, 0x3c,
};
const void *const sTalkTopicQ01Nwin[2] = {
    (void *)sTalkKeyQ01Nwin, (void *)0x3,
};
void * data_020d7e80[2] = {
    (void *)_ZN12VillagerMood18updateMood1EffectsEP12VillagerTalk, 0,
};
const void *const sTalkTopicTsuFoAct[2] = {
    (void *)sTalkKeyTsuFoAct, (void *)0x4,
};
char sTalkKeyEvGardeniing[14] = "ev_gardeniing";
void * sTalkKeysQ05Con[7] = {
    (void *)sTalkKeyQ05Con, (void *)sTalkKeyQ05Con, (void *)sTalkKeyQ05Con, (void *)sTalkKeyQ05Con,
    (void *)sTalkKeyQ05Con, (void *)sTalkKeyQ05Con, (void *)sTalkKeyQ05Con,
};
const void *const sTalkTopicEvBirth[2] = {
    (void *)sTalkKeyEvBirth, (void *)0x1,
};
const void *const sTalkTopicAi30days[2] = {
    (void *)sTalkKeyAi30days, (void *)0x6,
};
const void *const sTalkTopicQ01Revenge[2] = {
    (void *)sTalkKeyQ01Revenge, (void *)0x3,
};
const void *const sTalkTopicTsuSeAct[2] = {
    (void *)sTalkKeyTsuSeAct, (void *)0x4,
};
const void *const sTalkTopicAiForeign[2] = {
    (void *)sTalkKeyAiForeign, (void *)0x6,
};
u32 sTalkTopicQReturnDefault[2] = {
    0x00000000, 0x00000003,
};
char sTalkKeyQ01Pdraw[10] = "q01_pdraw";
void * data_020d7e70[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13pickMemoryAnyEPPvi, 0,
};
const void *const sTalkTopicQ02Pwin[2] = {
    (void *)sTalkKeyQ02Pwin, (void *)0x2,
};
const u8 sTsuDramaMsgBlocks[4] = {
    0x03, 0x00, 0x02, 0x01,
};
const void *const sTalkTopicEvAdmire[2] = {
    (void *)sTalkKeyEvAdmire, (void *)0x2,
};
char sTalkKeyAi7days[9] = "ai_7days";
char sTalkKeyQ03Con45[11] = "q03_con4_5";
char sTalkKeyQTime[7] = "q_time";
char sTalkKeyQ05Talk67[12] = "q05_talk6_7";
void * data_020d7e58[2] = {
    (void *)_ZN23VillagerTalkRumorTopics18pickMemoryWithTimeEPPvi, 0,
};
char sTalkKeyAiShop2[9] = "ai_shop2";
char sTalkKeyAiFlea[8] = "ai_flea";
char sTalkKeyQ04Con37[11] = "q04_con3_7";
Unk_021be8c0 sEvSnowfesTopicTable[4];
char sTalkKeyAiPassword[12] = "ai_password";
void * data_020d7e30[2] = {
    (void *)_ZN18VillagerTalkTopics13onCatchPickedEv, 0,
};
const void *const sTalkTopicQ01Pwin[2] = {
    (void *)sTalkKeyQ01Pwin, (void *)0x2,
};
const void *const sTalkTopicTsuDress[2] = {
    (void *)sTalkKeyTsuDress, (void *)0x1,
};
char sTalkKeyTsuFlAct[11] = "tsu_fl_act";
void * data_020d7b90[2] = {
    (void *)_ZN12VillagerTalk12receiveItemBEv, 0,
};
const void *const sTalkTopicTsuAlways[2] = {
    (void *)sTalkKeyTsuAlways, (void *)0x14,
};
char sTalkKeyQ03Con3[9] = "q03_con3";
const void *const sTalkTopicQ07Scold2[2] = {
    (void *)sTalkKeyQ07Scold2, (void *)0x3,
};
char sTalkKeyEvKaraoke[11] = "ev_karaoke";
const u32 sTalkClothingItemSpecs[8] = {
    0x00000002, 0x00000000, 0x00000005, 0x0000001d, 0x00000006, 0x0000001d, 0x00000008, 0x0000001d,
};
void * data_020d7c60[2] = {
    (void *)_ZN18VillagerTalkTopics20tryAddHandOverChoiceEii, 0,
};
const u8 data_020c7a50[12] = {
    0x71, 0x30, 0x34, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
char sTalkKey3pBo[6] = "3p_bo";
char sTalkKeyEtcHit[8] = "etc_hit";
}
}

void VillagerTalkTopics::selectTsuActMessage(s32 r1, Unk_0201d2d0_Data *d) {
    s32 r6 = r1 != _ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(actor->villagerData))) ? 1 : 0;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), d->key, d->variantCount, r6, 0);
}

BOOL VillagerTalkTopics::selectTsuInAct() {
    s32 r4 = -1;
    u16 h[2];
    Npc_GetStateHeldItem(&h[1], (VillagerTalk *)actor);
    if (Unk_02021d50_R(&h[1], 0x1376, 0x1376)) {
        r4 = 0;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(actor->villagerData))) != 0) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        InsectPick_PickNow(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12b0, 0x12e7)) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
            Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuInAct.key, sTalkTopicTsuInAct.variantCount, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuFiAct() {
    s32 r4 = -1;
    u16 h[2];
    Npc_GetStateHeldItem(&h[1], (VillagerTalk *)actor);
    if (Unk_02021d50_R(&h[1], 0x1374, 0x1374)) {
        r4 = 0;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(actor->villagerData))) != 1) {
            r4 = 1;
        }
    }
    if (r4 != -1) {
        h[0] = 0xfff1;
        FishPick_PickNow(&h[0]);
        if (Unk_02021d50_R(&h[0], 0x12e8, 0x131f)) {
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
            Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFiAct.key, sTalkTopicTsuFiAct.variantCount, r4, 0);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuFoAct() {
    u16 h[4];
    Npc_GetStateHeldItem(h, (VillagerTalk *)actor);
    if (Unk_02021d50_R(h, 0x1369, 0x1369)) {
        selectTsuActMessage(2, &sTalkTopicTsuFoAct);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuClAct() {
    u16 h;
    Npc_GetStateHeldItem(&h, (VillagerTalk *)actor);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        selectTsuActMessage(3, &sTalkTopicTsuClAct);
        this->setFashionArg(5, actor->villagerData);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuFuAct() {
    u16 h;
    Npc_GetStateHeldItem(&h, (VillagerTalk *)actor);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        selectTsuActMessage(4, &sTalkTopicTsuFuAct);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuFlAct() {
    s32 r4 = -1;
    u16 h;
    Npc_GetStateHeldItem(&h, (VillagerTalk *)actor);
    if (Unk_02021d50_R(&h, 0x1378, 0x1378)) {
        r4 = 0;
        if (_ZN12VillagerPlan8getStateEv(VillagerPlanBlock_GetPlan(Villager_GetPlan(actor->villagerData))) != 5) {
            r4 = 2;
        }
    }
    if (r4 != -1) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuFlAct.key, sTalkTopicTsuFlAct.variantCount, r4, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuSeAct() {
    u16 h;
    void *r5 = (*(void * *)&gSceneBlockMap);
    BOOL r4;
    Npc_GetStateHeldItem(&h, (VillagerTalk *)actor);
    r4 = FALSE;
    if (r5 != 0) {
        Unk_0201d2d0_Vec *v = (Unk_0201d2d0_Vec *)&actor->position;
        s32 px = v->x >> 17;
        s32 pz = v->z >> 17;
        if (BlockMap_BlockHasAllAttr(r5 ? r5 : r5, px, pz, 8) != 0) {
            r4 = TRUE;
        }
    }
    if (r4 != 0) {
        volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
            selectTsuActMessage(6, &sTalkTopicTsuSeAct);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuNoAct() {
    u16 h;
    Npc_GetStateHeldItem(&h, (VillagerTalk *)actor);
    volatile u16 *p = &h;
    u32 a = *p;
    u32 b = *p;
    if (b == 0xfff1 || (a >= 0x1380 && a <= 0x139f)) {
        selectTsuActMessage(7, &sTalkTopicTsuNoAct);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuHobbyAct() {
    static BOOL (VillagerTalkTopics::*tbl[8])() = {
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7e18), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7af8), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7e20),
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7e00), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7ee0), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7b58),
        (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7c08), (*(BOOL (VillagerTalkTopics::**)())nZ::data_020d7dd8)};
    s32 idx;
    if (Unk_02021ef8_IsZero(gFieldSceneKind)) {
        idx = VillagerState_GetActivity(Villager_GetState(actor->villagerData));
        if (Trend_IsValid(idx) != 0) {
            return (this->*tbl[idx])();
        }
    }
    return FALSE;
}

namespace nZ {
extern "C" {
const void *const sTalkTopicQ07Mailgo[2] = {
    (void *)sTalkKeyQ07Mailgo, (void *)0x3,
};
const void *const sTalkTopicAiShop2[2] = {
    (void *)sTalkKeyAiShop2, (void *)0x4,
};
const void *const sTalkTopicQ10Reserved[2] = {
    (void *)sTalkKeyQ10Reserved, (void *)0x3,
};
void * data_020d7ad8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQFull[7] = "q_full";
char sTalkKeyQ04End[8] = "q04_end";
const void *const sTalkTopicTsuMemory[2] = {
    (void *)sTalkKeyTsuMemory, (void *)0x1,
};
const void *const sTalkTopicQ12Other[2] = {
    (void *)sTalkKeyQ12Other, (void *)0x3,
};
const void *const sTalkTopicEvKaraoke[2] = {
    (void *)sTalkKeyEvKaraoke, (void *)0x3,
};
const u8 sInsectHabitatKinds[4] = {
    0x07, 0x0d, 0x01, 0x02,
};
char sTalkKeyQ03End[8] = "q03_end";
char sTalkKeyQ01Nlose[10] = "q01_nlose";
void * data_020d7e88[2] = {
    (void *)_ZN18VillagerTalkTopics16gotoQRewardTopicEv, 0,
};
u32 sTalkInputBuffer[8];
void * data_020d7990[2] = {
    (void *)_ZN18VillagerTalkTopics9endAiFallEv, 0,
};
const void *const sTalkTopicQ01Nlose[2] = {
    (void *)sTalkKeyQ01Nlose, (void *)0x3,
};
char sTalkKeyAiSnow2[9] = "ai_snow2";
const u8 data_020c7530[6] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
};
void * sTalkKeysQ03Con[5] = {
    (void *)sTalkKeyQ03Con12, (void *)sTalkKeyQ03Con12, (void *)sTalkKeyQ03Con3, (void *)sTalkKeyQ03Con45,
    (void *)sTalkKeyQ03Con45,
};
char sTalkKeyApHabit[9] = "ap_habit";
const void *const sTalkTopicQTime[2] = {
    (void *)sTalkKeyQTime, (void *)0x1,
};
void * data_020d7d50[2] = {
    (void *)_ZN12VillagerTalk12runCustomFn2Ev, 0,
};
const void *const sTalkTopicTsuEvent1[2] = {
    (void *)sTalkKeyTsuEvent1, (void *)0x2,
};
char sTalkKeyApNickn[9] = "ap_nickn";
void * sTalkKeysQCon[5] = {
    (void *)sTalkKeysQ01Con, (void *)sTalkKeysQ02Con, (void *)sTalkKeysQ03Con, (void *)sTalkKeysQ04Con,
    (void *)sTalkKeysQ05Con,
};
const void *const sTalkTopicAiFortune[2] = {
    (void *)sTalkKeyAiFortune, (void *)0x3,
};
const void *const sTalkTopicQYes[2] = {
    (void *)sTalkKeyQYes, (void *)0x3,
};
char sTalkKeyQ02Revenge[12] = "q02_revenge";
const void *const sRequestFossilPickers[5] = {
    (void *)VillagerRequest_PickRandomFossil, (void *)VillagerRequest_PickRandomFossil, (void *)VillagerRequest_PickFossilOfGroup, 0,
    0,
};
const void *const sTalkTopicQPreitemB[2] = {
    (void *)sTalkKeyQPreitem, (void *)0x3,
};
void * data_020d7d30[2] = {
    (void *)_ZN12VillagerTalk16sellItemToPlayerEv, 0,
};
u8 sTalkKeyQ05Thanks[11] = "q05_thanks";
const u32 sApPocketItemKinds[5] = {
    0x0000000d, 0x0000000e, 0x00000039, 0x00000005, 0x00000038,
};
char sTalkKey3pFu[6] = "3p_fu";
char sTalkKeyAiToday2[10] = "ai_today2";
const void *const sTalkTopicQ07Joy[2] = {
    (void *)sTalkKeyQ07Joy, (void *)0x3,
};
char sTalkKeyQ02Con245[13] = "q02_con2_4_5";
char sTalkKeyQ01Comp[9] = "q01_comp";
void * data_020d7ba8[2] = {
    (void *)_ZN18VillagerTalkTopics19onRequestItemPickedEv, 0,
};
void * data_020d7a20[2] = {
    (void *)_ZN12VillagerTalk12runCustomFn0Ev, 0,
};
void * data_020d7e08[2] = {
    (void *)_ZN12VillagerMood18updateMood2EffectsEP12VillagerTalk, 0,
};
char sTalkKeyQ02Return[11] = "q02_return";
u32 data_020d7ca8[2] = {
    0xffffffff, 0xffffffff,
};
const void *const sTalkTopicQ01Pdraw[2] = {
    (void *)sTalkKeyQ01Pdraw, (void *)0x2,
};
void * data_020d7d20[2] = {
    (void *)_ZN18VillagerTalkTopics18giveEvBirthPresentEv, 0,
};
char sTalkKeyQ05End[8] = "q05_end";
}
}

BOOL VillagerTalkTopics::selectTsuGhint() {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuGhint.key, sTalkTopicTsuGhint.variantCount, 0, 0);
    return TRUE;
}

BOOL VillagerTalkTopics::selectTsuDress() {
    void *r7 = actor->villagerData;
    volatile u16 h = *(u16 *)((void *)_ZN23VillagerDataProfileView8getShirtEv(r7));
    s32 r4 = -1;
    u16 *r5;
    s32 t;
    u16 *q;
    if (PlayerData_GetCurrent() != 0) {
        r5 = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    } else {
        r5 = 0;
    }
    if (r5 != 0) {
        if (Unk_02021d50_R((u16 *)&h, 0x12a8, 0x12af)) {
            t = _ZN12VillagerData10getPatternEv(r7);
            q = _ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(t));
            if (r5[0] == q[0] && memcmp(r5 + 1, q + 1, 8) == 0 && _ZN8PlayerId6equalsEPS_(r5, q) != 0) {
                r4 = 1;
            } else if (_ZN8PlayerId6equalsEPS_(r5, q) == 0) {
                Unk_02021d50_Id *p = (Unk_02021d50_Id *)gSaveTownId;
                Unk_02021d50_Id *w = (Unk_02021d50_Id *)PlayerId_GetTownId(q);
                if (w->id == p->id && memcmp(w->name, p->name, 8) == 0) {
                    r4 = 2;
                } else {
                    r4 = 3;
                }
            }
            if (r4 != -1) {
                _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, (u32)_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(t)), 0);
                _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)PlayerId_GetTownId(_ZN11PatternInfo9getAuthorEv(_ZN7Pattern7getInfoEv(t))), 1);
            }
        } else {
            r4 = 0;
        }
    }
    if (r4 != -1) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuDress.key, sTalkTopicTsuDress.variantCount, r4, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectTsuAlways() {
    s32 i;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuAlways.key, sTalkTopicTsuAlways.variantCount, 0, 0);
    for (i = 0; i < 6; i++) {
        this->setStringTableArg(i, data_020c7530[i]);
    }
    return TRUE;
}

BOOL VillagerTalkRumorTopics::selectTsuHappyroom() {
    Unk_02021340_Pad *p;
    void *ctx = actor->villagerData;
    if (ctx != NULL) {
        p = ((Unk_02021340_Pad *)Villager_GetState(ctx));
    } else {
        p = NULL;
    }
    u8 mask = 0;
    u8 cnt = 0;
    if (p != NULL && p->roomScore >= 0) {
        s32 h = p->roomScore;
        u32 v = p->roomBonusFlags;
        if ((v & 1) != 0 || (v & 2) != 0 || (v & 4) != 0 || (v & 8) != 0 || (v & 0x10) != 0) {
            mask |= 1;
            cnt++;
        }
        if ((v & 0x20) != 0) {
            mask |= 2;
            cnt++;
        }
        if ((v & 0x40) != 0) {
            mask |= 4;
            cnt++;
        }
        if ((v & 0x80) != 0) {
            mask |= 8;
            cnt++;
        }
        if ((v & 0x100) != 0) {
            mask |= 0x10;
            cnt++;
        }
        if ((v & 0x200) != 0) {
            mask |= 0x20;
            cnt++;
        }
        if ((v & 0x400) != 0) {
            mask |= 0x40;
            cnt++;
        }
        u32 k = ((u32)Random_PickSetBit(mask, cnt, 7));
        if (k >= 7) {
            k = 7;
        }
        Talk_SelectTopicMessage(this, topicFile, topicIndex, 30, VillagerId_GetPersonality(((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData))), sTalkTopicTsuHappyroom.a, sTalkTopicTsuHappyroom.b, k, 0);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, h, 0, 6, 1, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkRumorTopics::selectTsuFriend() {
    s32 x, y;
    void **pa;
    char c[2];
    void *a[2];
    s32 j, i;
    s32 sel;
    func_02133ef8(a, 8);
    Unk_02021340_Pair2 b = data_020d7ca8;
    c[0] = data_020d7860[0];
    c[1] = data_020d7860[1];
    VillagerId *d[2];
    func_02133ef8(d, 8);
    x = 0;
    y = 0;
    d[0] = ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData));
    j = 1;
    for (i = 0; i < 2; i++) {
        pa = &a[i];
        a[i] = SaveVillagers_PickRandomExcept(gSaveVillagers, d, j);
        if (a[i] != NULL) {
            (&b.a)[i].v = SaveVillagers_FindIndex(gSaveVillagers, ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(a[i])));
            c[i] = ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(a[i]))->getGender();
        }
        if (j < 2) {
            if (*pa != NULL) {
                d[j] = ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(*pa));
                j++;
            }
        }
    }
    {
    MsgString9B o;
    Unk_02021340_Pair2 e = data_020d7cb8;
    sel = c[1];
    if (sel == 0) {
        e.a.v = 1;
        e.b.v = 0;
    }
    for (i = 0; i < 2; i++) {
        _ZN9MsgString5clearEv(&o);
        ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(a[(&e.a)[i].v]))->getName((u32)&o);
        _ZN15TalkWindowState7setSlotEiPv((void *)window, i + 7, &o);
    }
    }
    if (b.a.v != -1 && b.b.v != -1) {
        s32 r = SaveVillagers_GetRelationLevel(gSaveVillagers, b.a.v, b.b.v);
        if (r == 2) {
            x = 1;
        } else if (r > 2) {
            x = 2;
        }
        if (c[0] == sel) {
            if (c[0] == 0) {
                y = 1;
            } else {
                y = 2;
            }
        }
    }
    y *= 3;
    Talk_SelectTopicMessage(this, topicFile, topicIndex, 30, VillagerId_GetPersonality(((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData))), sTalkTopicTsuFriend.a, sTalkTopicTsuFriend.b, x + y, 0);
    return TRUE;
}

BOOL VillagerTalkRumorTopics::selectTsuSpot() {
    s32 t = 4;
    Unk_02021340_Map *map = gSceneBlockMap;
    if (Scene_InVillagerHouse() != 0) {
        s32 v = Scene_GetVillagerHouse();
        if (v == Villager_GetIndex(actor->villagerData)) {
            t = 3;
            goto end;
        }
    }
    if (map != NULL) {
        BOOL z = ((u8 *)&gFieldSceneKind)[0] == 0 ? TRUE : FALSE;
        if (z) {
            Unk_02021340_Scene *sc = actor;
            Unk_02021340_Pos *pp = &sc->pos;
            u32 y = pp->z >> 17;
            u32 x = pp->x >> 17;
            u8 *cell;
            if (x < map->w && y < map->h && map->cells != NULL) {
                cell = map->cells + (x + y * map->w) * 0x28;
            } else {
                cell = NULL;
            }
            if (cell != NULL) {
                if (MapBlock_HasAnyAttr(cell, 0x200) == 1) {
                    t = 0;
                } else if (MapBlock_HasAnyAttr(cell, 2) == 1) {
                    t = 1;
                } else if (MapBlock_HasAnyAttr(cell, 0x800) == 1) {
                    t = 2;
                }
            }
        }
    }
end:
    Talk_SelectTopicMessage(this, topicFile, topicIndex, 30, VillagerId_GetPersonality(((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData))), sTalkTopicTsuSpot.a, sTalkTopicTsuSpot.b, t, 0);
    return TRUE;
}

BOOL VillagerTalkRumorTopics::selectTsuHome() {
    s32 t = 2;
    if (((s32)PlayerData_GetCurrent()) != 0) {
        t = _ZN6TownId15getTownRelationEv((void *)((s32)_ZN10PlayerData11getPlayerIdEv((void *)((s32)PlayerData_GetCurrent()))));
    }
    if (t >= 2) {
        t = 1;
    }
    t <<= 3;
    Talk_SelectTopicMessage(this, topicFile, topicIndex, 30, VillagerId_GetPersonality(((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData))), *(u32 *)((u8 *)sTalkTopicsTsuHome + t), *((u8 *)((u8 *)&nZ::sTalkTopicsTsuHome[1]) + t), 0, 0);
    return TRUE;
}

BOOL VillagerTalkRumorTopics::selectTsuItem() {
    s32 t = ((s32)PlayerData_GetCurrent());
    BOOL result = FALSE;
    if (t != 0) {
        if (_ZN15PlayerInventory15findEmptyPocketEv(((s32 (*)())_ZN10PlayerData12getInventoryEv)()) != -1) {
            u16 v;
            Talk_PickRandomTradeItem(&v);
            unk_120 = v;
            if (unk_120 != 0xfff1) {
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)((u32)&unk_120), result, 7);
                VillagerId *o = ((VillagerId *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData));
                Talk_SelectTopicMessage(this, topicFile, topicIndex, 30, VillagerId_GetPersonality(o), sTalkTopicTsuItem.a, sTalkTopicTsuItem.b, result, result);
                result = TRUE;
            }
        }
    }
    return result;
}

extern "C" void *Talk_PickRandomMemory(void *ctx, void **arr, s32 n, BOOL (*cb)(void *, void *)) {
    s32 count = 0;
    void *result = NULL;
    u8 flags[8];
    s32 i;
    MI_CpuFill8(flags, count, 8);
    for (i = count; i < n; i++) {
        if (arr[i] != NULL) {
            if (cb(ctx, arr[i]) == 1) {
                flags[i] = 1;
                count++;
            }
        }
    }
    if (count > 0) {
        s32 k = Random_GlobalBelow(count);
        for (i = 0; i < n; i++) {
            if (flags[i] == 1) {
                if (k == 0) {
                    result = arr[i];
                    break;
                }
                k--;
            }
        }
    }
    return result;
}

extern "C" s32 Talk_GetDaysSinceMemoryTime(void *item) {
    s32 o[3];
    o[0] = 0;
    o[1] = 0;
    void *id = VillagerMemory_GetTalkDate(item);
    s32 r = 0;
    Clock_GetDateTime(o);
    if (DateTime_Compare(id, o, 0x3f) == -1) {
        r = DateTime_DiffDays(id, o);
    }
    return r;
}

extern "C" BOOL Talk_IsMemoryLikedAndOld(void *ctx, void *item) {
    if (_ZN14VillagerMemory13getFriendshipEv(item) > 0 && Talk_GetDaysSinceMemoryTime(item) > 0) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerTalkRumorTopics::pickMemoryLikedOld(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_IsMemoryLikedAndOld);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, Talk_GetDaysSinceMemoryTime(res), 0, 10, 0, 0);
    }
    return res;
}

extern "C" BOOL Talk_IsMemoryDislikedAndOld(void *ctx, void *item) {
    if (_ZN14VillagerMemory13getFriendshipEv(item) <= 0 && Talk_GetDaysSinceMemoryTime(item) > 0) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerTalkRumorTopics::pickMemoryDislikedOld(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_IsMemoryDislikedAndOld);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, Talk_GetDaysSinceMemoryTime(res), 0, 10, 0, 0);
    }
    return res;
}

extern "C" s32 func_020215f8(void *ctx, void *item) {
    return _ZN23VillagerDataProfileView13hasLetterFromEPt(ctx, VillagerMemory_GetPlayerId(item));
}

extern "C" BOOL func_020215a8(void *ctx, void *item) {
    u16 *mine = (u16 *)((u8 *)ctx + 0x6f6);
    BOOL r = FALSE;
    if (_ZN23VillagerDataProfileView13hasLetterFromEPt(ctx, VillagerMemory_GetPlayerId(item)) != 0) {
        u16 *p = PlayerId_GetTownId(VillagerMemory_GetPlayerId(item));
        if (*p == *mine) {
            if (memcmp(p + 1, mine + 1, 8) == 0) {
                r = TRUE;
            }
        }
    }
    return r;
}

void *VillagerTalkRumorTopics::func_02021564(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, func_020215a8);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)((u8 *)actor->villagerData + 0x6f6), 9);
    }
    return res;
}

extern "C" BOOL Talk_MemoryHasCompliment(void *ctx, void *item) {
    if (_ZN14VillagerMemory13hasComplimentEv(item) == 1) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerTalkRumorTopics::pickMemoryWithCompliment(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_MemoryHasCompliment);
    if (res != NULL) {
        MsgString17 o;
        _ZN14VillagerMemory13getComplimentEPv(res, &o);
        _ZN15TalkWindowState7setSlotEiPv((void *)window, 1, &o);
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
    }
    return res;
}

extern "C" BOOL func_020214a8(void *ctx, void *item) {
    void *id = VillagerMemory_GetPlayerId(item);
    BOOL r = FALSE;
    BOOL ok = FALSE;
    if (_ZN23VillagerDataProfileView13hasLetterFromEPt(ctx, id) == 1) {
        ok = TRUE;
    }
    if (ok) {
        if (PlayerDataArray_FindById(gSavePlayers, id) != -1) {
            r = TRUE;
        }
    }
    return r;
}

void *VillagerTalkRumorTopics::func_02021448(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, func_020214a8);
    if (res != NULL) {
        void *a = _ZN12VillagerData9getLetterEv(actor->villagerData);
        void *b = Letter_GetSenderPlayer();
        TownIdView o;
        TownId_CopyFrom(&o, (u32)b);
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)&o, 9);
    }
    return res;
}

extern "C" BOOL Talk_MemoryHasTime(void *ctx, void *item) {
    if (_ZN14VillagerMemory11hasTownTuneEv(item) == 1) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerTalkRumorTopics::pickMemoryWithTime(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_MemoryHasTime);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
    }
    return res;
}

extern "C" BOOL Talk_MemoryAny(void *ctx, void *item) {
    return TRUE;
}

void *VillagerTalkRumorTopics::pickMemoryAny(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_MemoryAny);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
    }
    return res;
}

extern "C" BOOL Talk_MemoryHasReceivedItem(void *ctx, void *item) {
    if (*_ZN14VillagerMemory15getReceivedItemEv(item) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

void *VillagerTalkRumorTopics::pickMemoryWithReceivedItem(void **arr, s32 n) {
    void *res = Talk_PickRandomMemory(actor->villagerData, arr, n, Talk_MemoryHasReceivedItem);
    if (res != NULL) {
        _ZN16ActorTalkRequest15setTownNameSlotEjj(this, (u32)VillagerMemory_GetTownId(res), 9);
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)((u32)_ZN14VillagerMemory15getReceivedItemEv(res)), 1, 7);
    }
    return res;
}

BOOL VillagerTalkTopics::selectTsuMemory() {
    void *r14;
    void *p18;
    void *r4;
    s32 idx;
    s32 n2;
    s32 n1;
    s32 i;
    s32 j;
    s32 k;
    s32 rnd;
    u8 buf[2];
    u8 flags[5];
    u32 arr[8];
    u32 obj[7];
    if (_ZN11CommManager12isSlotActiveEi((*(Unk_02021048_Sys * *)&gCommManager), (*(Unk_02021048_Sys * *)&gCommManager)->myAid) != 0) {
        return FALSE;
    }
    static Unk_02021048_Fn tbl[10] = {
        (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7d90), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7dc8), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7ce0),
        (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7e10), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7e58), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7e70),
        (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7a78), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7f58), (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7f98),
        (*(void * (VillagerTalkTopics::**)(u32 *a, s32 n))nZ::data_020d7a40),
    };
    if (((u32)PlayerData_GetCurrent()) != 0) {
        r14 = _ZN10PlayerData11getPlayerIdEv((void *)((u32)PlayerData_GetCurrent()));
    } else {
        r14 = 0;
    }
    p18 = actor->villagerData;
    r4 = 0;
    idx = 0;
    if (r14 != 0) {
        for (i = 0; i < 8; i++) {
            arr[i] = 0;
        }
        n1 = Villager_CollectOtherMemories(p18, arr, r14, 1);
        if (n1 > 0) {
            MI_CpuFill8(flags, 0, 5);
            for (k = 5; k > 0; k--) {
                rnd = Random_GlobalBelow(k);
                for (j = 0; j < 5; j++) {
                    if (flags[j] == 0) {
                        if (rnd == 0) {
                            r4 = (this->*tbl[j])(arr, n1);
                            if (r4 != 0) {
                                idx = j + 1;
                            }
                            flags[j] = 1;
                            break;
                        }
                        rnd--;
                    }
                }
                if (r4 != 0) {
                    break;
                }
            }
        }
        if (r4 == 0) {
            for (i = 0; i < 8; i++) {
                arr[i] = 0;
            }
            n2 = Villager_CollectOtherMemories(p18, arr, r14, 0);
            if (n2 > 0) {
                MI_CpuFill8(flags, 0, 5);
                for (k = 5; k > 0; k--) {
                    rnd = Random_GlobalBelow(k);
                    for (j = 0; j < 5; j++) {
                        if (flags[j] == 0) {
                            if (rnd == 0) {
                                r4 = (this->*tbl[j + 5])(arr, n2);
                                if (r4 != 0) {
                                    idx = j + 6;
                                }
                                flags[j] = 1;
                                break;
                            }
                            rnd--;
                        }
                    }
                    if (r4 != 0) {
                        break;
                    }
                }
            }
        }
    }
    if (r4 != 0) {
        _ZN11MsgString9BC1Ev(obj);
        buf[0] = _ZN14VillagerMemory13getImpressionEv(r4);
        buf[1] = 0;
        _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 2, buf, ((u8 *)"st_impress"), &buf[1]);
        _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, ((u32)VillagerMemory_GetPlayerId(r4)), 10);
        _ZN11MsgString9BD1Ev(obj);
    }
    unk_134 = r4;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuMemory.key, sTalkTopicTsuMemory.variantCount, idx, 0);
    customFn1 = (Unk_020238b0_Fn)(data_020d7c50);
    customFn2 = (Unk_020238b0_Fn)(data_020d7c48);
    return TRUE;
}

namespace nZ {
extern "C" {
const void *const sTalkTopicQ12Thanks[2] = {
    (void *)sTalkKeyQ12Thanks, (void *)0x3,
};
const void *const sTalkTopicAiPassword[2] = {
    (void *)sTalkKeyAiPassword, (void *)0x3,
};
char sTalkKeyQ02End[8] = "q02_end";
const void *const sTalkTopicsQEnd[10] = {
    (void *)sTalkKeyQ01End, (void *)0x2, (void *)sTalkKeyQ02End, (void *)0x2,
    (void *)sTalkKeyQ03End, (void *)0x2, (void *)sTalkKeyQ04End, (void *)0x2,
    (void *)sTalkKeyQ05End, (void *)0x2,
};
char sTalkKeyQ05Comp[9] = "q05_comp";
void * data_020d79b8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
u32 data_020d7cb8[2] = {
    0x00000000, 0x00000001,
};
char sTalkKeyEvFishing[11] = "ev_fishing";
char sTalkKeyAiSad[7] = "ai_sad";
char sTalkKeyEvArbeit[10] = "ev_arbeit";
char sTalkKeyQ12Full[9] = "q12_full";
char sTalkKeyQ12Other[10] = "q12_other";
const u8 data_020c7a2c[9] = {
    0x71, 0x30, 0x35, 0x5f, 0x6d, 0x69, 0x73, 0x73, 0x00,
};
char sTalkKeyAiBee[7] = "ai_bee";
char sTalkKeyQ06Over[9] = "q06_over";
void * data_020d7cf0[2] = {
    (void *)_ZN12VillagerTalk12runCustomFn3Ev, 0,
};
void * data_020d7dc8[2] = {
    (void *)_ZN23VillagerTalkRumorTopics21pickMemoryDislikedOldEPPvi, 0,
};
void * sTalkKeys3p[6] = {
    (void *)sTalkKey3pBo, (void *)sTalkKey3pHa, (void *)sTalkKey3pKo, (void *)sTalkKey3pFu,
    (void *)sTalkKey3pGe, (void *)sTalkKey3pTa,
};
const u32 sTsuEvent1EventIds[14] = {
    0x00000046, 0x00000047, 0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d,
    0x0000004e, 0x0000004f, 0x00000050, 0x00000051, 0x00000052, 0x00000053,
};
void * data_020d7ce8[2] = {
    (void *)_ZN18VillagerTalkTopics29tryAddDeliveryRecipientChoiceEii, 0,
};
char sTalkKeyQ06Open[9] = "q06_open";
char sTalkKey3pGe[6] = "3p_ge";
void * sTalkKeysQ01Req[5] = {
    (void *)sTalkKeyQ01Req1, (void *)sTalkKeyQ01Req245, (void *)sTalkKeyQ01Req3, (void *)sTalkKeyQ01Req245,
    (void *)sTalkKeyQ01Req245,
};
char sTalkKeyQ07Mailgo[11] = "q07_mailgo";
const void *const sTalkTopicAiRain2[2] = {
    (void *)sTalkKeyAiRain2, (void *)0x6,
};
void * data_020d79c8[2] = {
    (void *)_ZN25VillagerTalkKaraokeTopics13endEvFireworkEv, 0,
};
char sTalkKeyQ07Open[9] = "q07_open";
const void *const sTalkTopicApPresent1[2] = {
    (void *)sTalkKeyApPresent1, (void *)0x3,
};
const void *const sTalkTopicAiAnger[2] = {
    (void *)sTalkKeyAiAnger, (void *)0x5,
};
char sTalkKeyQError1[9] = "q_error1";
void * data_020d7c68[2] = {
    (void *)_ZN18VillagerTalkTopics13endEtcPushHitEv, 0,
};
const void *const sTalkTopicQ06Open1[2] = {
    (void *)sTalkKeyQ06Open1, (void *)0x3,
};
void * data_020d7930[2] = {
    (void *)_ZN18VillagerTalkTopics20finishOpenedDeliveryEv, 0,
};
void * data_020d7940[2] = {
    (void *)_ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv, 0,
};
}
}

u32 VillagerTalkTopics::findTsuEvent1Message(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    u32 mask = 0;
    s32 count = 0;
    s32 i;
    u32 buf[2];
    s32 v;
    s32 r;
    for (i = 0; i < 14; i++) {
        MI_CpuCopy8(d, buf, 8);
        if (Event_GetState(sTsuEvent1EventIds[i], buf, result) != 0 ? TRUE : result) {
            mask = (u16)(mask | (1 << i));
            count++;
        }
    }
    if (count > 0) {
        r = Random_PickSetBit(mask, count, 14);
        v = -1;
        if (r >= 5) {
            if (r <= 12) {
                s32 k = r - 5;
                if (k != Villager_GetIndex(actor->villagerData)) {
                    void *p = SaveVillagers_Get(gSaveVillagers, k);
                    if (p != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(p)) != 0) {
                        u8 *e = (u8 *)Villager_GetBirthday(p);
                        if (e != 0) {
                            v = 5;
                            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, (void *)((u32)_ZN12VillagerData13getVillagerIdEv(p)), 0);
                            _ZN16ActorTalkRequest12setMonthSlotEjj(this, e[0], 1);
                            _ZN16ActorTalkRequest10setDaySlotEjj(this, e[1], 2);
                        }
                    }
                }
            } else {
                v = 6;
            }
        } else {
            v = r;
        }
        if (v != -1) {
            *b = v;
            *a = sTalkTopicTsuEvent1.variantCount;
            *c = 0;
            result = sTalkTopicTsuEvent1.key;
        }
    }
    return result;
}

u32 VillagerTalkTopics::findTsuEvent2Message(u8 *a, s32 *b, u8 *c, u32 *d) {
    u32 result = 0;
    s32 idx = -1;
    s32 i;
    u32 buf[2];
    for (i = 0; i < 12; i++) {
        MI_CpuCopy8(d, buf, 8);
        if (Event_GetState(sTsuEvent2EventIds[i], buf, result) != 0 ? TRUE : result) {
            idx = i;
            break;
        }
    }
    if ((u32)idx < 12) {
        if (idx % 3 == 2) {
            *b = (idx / 3 + 1) * 5 - 1;
            *c = 1;
        } else {
            *b = idx * 2 - idx / 3;
            *c = 2;
        }
        *a = 1;
        result = sTalkTopicTsuEvent2;
    }
    return result;
}

BOOL VillagerTalkTopics::selectTsuEvent() {
    static Unk_02020d90_Fn tbl[2] = {(*(u32 (VillagerTalkTopics::**)(u8 *a, s32 *b, u8 *c, u32 *d))nZ::data_020d7c18), (*(u32 (VillagerTalkTopics::**)(u8 *a, s32 *b, u8 *c, u32 *d))nZ::data_020d7c00)};
    Unk_02020d90_Res res[2];
    u32 t[2];
    s32 i;
    Unk_02020d90_Res *p;
    func_02133ef8(res, 0x18);
    p = 0;
    t[0] = 0;
    t[1] = 0;
    Clock_GetDateTime(t);
    for (i = 0; i < 2; i++) {
        res[i].key = (this->*tbl[i])(&res[i].partSize, &res[i].part, &res[i].variantCount, t);
    }
    if (res[0].key != 0) {
        if (res[1].key != 0 && Random_GlobalBelow(2) == 0) {
            p = &res[1];
        } else {
            p = &res[0];
        }
    } else if (res[1].key != 0) {
        p = &res[1];
    }
    if (p != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), p->key, p->partSize, p->part, p->variantCount);
        return TRUE;
    }
    return FALSE;
}

namespace nZ {
extern "C" {
const void *const sTalkTopicEvFishing[2] = {
    (void *)sTalkKeyEvFishing, (void *)0x3,
};
char sTalkKeyEvAcorn[9] = "ev_acorn";
char sTalkKeyTsuFuHint[12] = "tsu_fu_hint";
char sTalkKeyQ06Req[8] = "q06_req";
char sTalkKey3pHa[6] = "3p_ha";
char sTalkKeyQ12End[8] = "q12_end";
char sTalkKeyQ07Joy[8] = "q07_joy";
void * data_020d7c20[2] = {
    (void *)_ZN23VillagerTalkHobbyTopics11endEvInsectEv, 0,
};
void * data_020d7c18[2] = {
    (void *)_ZN18VillagerTalkTopics20findTsuEvent1MessageEPhPiS0_Pj, 0,
};
char sTalkKeyTsuFlHint[12] = "tsu_fl_hint";
const void *const sTalkTopicQ06Open3[2] = {
    (void *)sTalkKeyQ06Open3, (void *)0x3,
};
const void *const sTalkTopicQ06Open2[2] = {
    (void *)sTalkKeyQ06Open2, (void *)0x3,
};
char sTalkKeyQ06Good[9] = "q06_good";
char sTalkKeyQ10Con[8] = "q10_con";
void * data_020d7fe8[2] = {
    (void *)_ZN17Unk_0202ce90_Base17playOwnerIdleAnimEv, 0,
};
Unk_021be8c0 sEvBirthTopicTable[7];
const u32 sApTopicWeights[3] = {
    0x0a0a0a0a, 0x0a080e0e, 0x0000000e,
};
void * data_020d7be8[2] = {
    (void *)_ZN18VillagerTalkTopics16checkReserveTimeEv, 0,
};
void * data_020d7be0[2] = {
    (void *)_ZN18VillagerTalkTopics13selectApTradeEv, 0,
};
char sTalkKeyQ10Leave[10] = "q10_leave";
void * data_020d7fa0[2] = {
    (void *)_ZN18VillagerTalkTopics22onPresentOpinionChoiceEii, 0,
};
const void *const sTalkTopicTsuFuHint[2] = {
    (void *)sTalkKeyTsuFuHint, (void *)0x3,
};
char sTalkKeyQ02Req1[9] = "q02_req1";
const void *const sTalkTopicAiMfirst[2] = {
    (void *)sTalkKeyAiMfirst, (void *)0x1,
};
char sTalkKeyQ02Req3[9] = "q02_req3";
void * data_020d7f78[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7f70[2] = {
    (void *)_ZN23VillagerTalkHobbyTopics22onEvAdmireWordEnteredBEv, 0,
};
char sTalkKeyQ02Con1[9] = "q02_con1";
char sTalkKeyQ03Req45[11] = "q03_req4_5";
void * data_020d7ba0[2] = {
    (void *)_ZN23VillagerTalkAcornTopics21continueAcornReceivedEv, 0,
};
char sTalkKeyQ04Req12[11] = "q04_req1_2";
char sTalkKeyTsuNoHint[12] = "tsu_no_hint";
void * data_020d79d0[2] = {
    (void *)_ZN18VillagerTalkTopics16storeReservationEv, 0,
};
char sTalkKeyQ01Pwin2[10] = "q01_pwin2";
char sTalkKeyQ02Con3[9] = "q02_con3";
char sTalkKeyEvBirth[9] = "ev_birth";
const u8 data_020c7a44[12] = {
    0x71, 0x30, 0x33, 0x5f, 0x63, 0x6c, 0x65, 0x61, 0x72, 0x00, 0x00, 0x00,
};
const void *const sTalkTopicAiPoison[2] = {
    (void *)sTalkKeyAiPoison, (void *)0x3,
};
const u32 sMoodAnimIds[5] = {
    0x00000000, 0x000000e5, 0x000000e7, 0x000000e9, 0x000000e7,
};
void * data_020d7b68[2] = {
    (void *)_ZN12VillagerMood17beginMood3EffectsEP12VillagerTalk, 0,
};
void * data_020d7ef8[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuSeHintEv, 0,
};
void * data_020d7ee8[2] = {
    (void *)_ZN12VillagerTalk14attrShowLetterEv, 0,
};
void * data_020d7b58[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuFlActEv, 0,
};
void * sTalkKeysQ01Con[5] = {
    (void *)sTalkKeyQ01Con1, (void *)sTalkKeyQ01Con245, (void *)sTalkKeyQ01Con3, (void *)sTalkKeyQ01Con245,
    (void *)sTalkKeyQ01Con245,
};
const void *const sTalkTopicAiRun[2] = {
    (void *)sTalkKeyAiRun, (void *)0x3,
};
u32 sInsectRarityWork[2];
const void *const sTalkTopicApNickn[2] = {
    (void *)sTalkKeyApNickn, (void *)0x1,
};
void * data_020d7b48[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13selectTsuItemEv, 0,
};
char sTalkKeyQ02Nwin[9] = "q02_nwin";
u32 data_020d7b40[2] = {
    0x00000000, 0x00000003,
};
const void *const sTalkTopicQ01Pay[2] = {
    (void *)sTalkKeyQ01Pay, (void *)0x3,
};
const void *const sTalkTopicQ02Revenge[2] = {
    (void *)sTalkKeyQ02Revenge, (void *)0x3,
};
void * data_020d7b38[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuMemoryEv, 0,
};
char sTalkKeyQ03Con12[11] = "q03_con1_2";
char sTalkKeyQ02Pwin2[10] = "q02_pwin2";
Unk_021be8c0 sTalkBeginTopics[17];
char sTalkKeyQ02Pdraw[10] = "q02_pdraw";
const void *const sTalkTopicTsuMove2[2] = {
    (void *)sTalkKeyTsuMove2, (void *)0x5,
};
char sTalkKeyQ05Con[8] = "q05_con";
char sTalkKeyAiShop1[9] = "ai_shop1";
Unk_021be8c0 sSmallTalkTopicTable[2];
u32 sTalkTopicQ05TalkDefault[2] = {
    0x00000000, 0x00000003,
};
Unk_021be8c0 sEtcCancelTopicTable[1];
char sTalkKeyAiNfirst[10] = "ai_nfirst";
char sTalkKeyQ01Revenge[12] = "q01_revenge";
char sTalkKeyTsuGhint[10] = "tsu_ghint";
void * data_020d7ac0[2] = {
    (void *)_ZN18VillagerTalkTopics17gotoQEndOrRevengeEv, 0,
};
void * data_020d7df8[2] = {
    (void *)_ZN12VillagerTalk12runCustomFn4Ev, 0,
};
void * data_020d7b00[2] = {
    (void *)_ZN12VillagerTalk21attrOpenBirthdayEntryEv, 0,
};
char sTalkKey3pKo[6] = "3p_ko";
void * data_020d7dd8[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuNoActEv, 0,
};
void * data_020d7dd0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7ae0[2] = {
    (void *)_ZN12VillagerTalk16giveItemToPlayerEv, 0,
};
const u32 sTsuEvent2EventIds[12] = {
    0x00000054, 0x00000055, 0x00000056, 0x00000057, 0x00000058, 0x00000059, 0x0000005a, 0x0000005b,
    0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
};
void * data_020d7db0[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyAiFortune[11] = "ai_fortune";
const void *const sTalkTopicQ02Nlose[2] = {
    (void *)sTalkKeyQ02Nlose, (void *)0x3,
};
u8 sTalkKeyQ05Miss[9] = "q05_miss";
const void *const sTalkTopicTsuFriend[2] = {
    (void *)sTalkKeyTsuFriend, (void *)0x1,
};
void * data_020d79d8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
char sTalkKeyQ01End[8] = "q01_end";
const void *const sTalkTopicTsuGhint[2] = {
    (void *)sTalkKeyTsuGhint, (void *)0x5,
};
void * data_020d7d18[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
u8 data_020d7860[2] = {
    0x02, 0x02,
};
void * data_020d7cf8[2] = {
    (void *)_ZN29VillagerTalkRequestItemTopics15gotoQClearOrEndEv, 0,
};
char sTalkKeyEvFirework[12] = "ev_firework";
const void *const sTalkTopicEtcConnect[2] = {
    (void *)sTalkKeyEtcConnect, (void *)0x3,
};
Unk_021be8c0 sRequestTopicsA[26];
char sTalkKeyQ01Return[11] = "q01_return";
const void *const sTalkTopicAiFlea[2] = {
    (void *)sTalkKeyAiFlea, (void *)0x3,
};
void * data_020d7e10[2] = {
    (void *)_ZN23VillagerTalkRumorTopics24pickMemoryWithComplimentEPPvi, 0,
};
u32 sTalkTopicQConDefault[2] = {
    0x00000000, 0x00000003,
};
char sTalkKeyQ04Dress[10] = "q04_dress";
char sTalkKeyEtcConnect[12] = "etc_connect";
void * data_020d7f30[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuFoHintEv, 0,
};
const u8 sNicknamePatternBases[6] = {
    0x08, 0x10, 0x20, 0x00, 0x18, 0x28,
};
char sTalkKeyQ06Fin[8] = "q06_fin";
char sTalkKeyQ07Req[8] = "q07_req";
char sTalkKeyQ12Report[11] = "q12_report";
void * data_020d7cb0[2] = {
    (void *)_ZN12VillagerTalk17buyItemFromPlayerEv, 0,
};
const u8 data_020c7a20[9] = {
    0x71, 0x30, 0x34, 0x5f, 0x6d, 0x69, 0x73, 0x73, 0x00,
};
const void *const sTalkTopicQIcancel[2] = {
    (void *)sTalkKeyQIcancel, (void *)0x3,
};
void * data_020d7a48[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics19setDeliveryDeadlineEv, 0,
};
}
}

u32 VillagerTalkTopics::selectTsuDrama() {
    u8 r5 = sTalkTopicTsuDrama.variantCount;
    u32 r6 = 0;
    u32 t[2];
    Unk_02020cc4_Bits bits;
    s32 r4;
    u32 flag;
    t[0] = 0;
    t[1] = 0;
    r4 = -1;
    flag = 0;
    Clock_GetDateTime(t);
    if (func_020874e8(((u8 *)t)[5], ((u8 *)t)[4], ((u8 *)t)[3], &bits) != 0) {
        if (bits.a == 2 && bits.b == 3) {
            r4 = 1;
        } else {
            r4 = 0;
        }
    }
    switch (r4) {
    case 0: {
        u32 i = bits.a;
        if (i >= 4) {
            i = 0;
        }
        r6 = sTsuDramaMsgBlocks[i];
        flag = 1;
        break;
    }
    case 1:
        r5 = 1;
        r6 = bits.c + 12;
        flag = 1;
        break;
    }
    if (flag == 1) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuDrama.key, r5, r6, 0);
    }
    return flag;
}

BOOL VillagerTalkTopics::selectTsuStar() {
    void *base;
    s32 r4;
    void *r7;
    u8 *p14;
    u8 *p18;
    s32 r5;
    BOOL result;
    u8 *rec;
    void *q;
    if (!Unk_02020b38_IsZero(gFieldSceneKind)) {
        return FALSE;
    }
    base = Constellation_GetData();
    r4 = Constellation_FindVisibleNow();
    r7 = (void *)((u32)PlayerData_GetCurrent());
    p14 = 0;
    p18 = 0;
    r5 = -1;
    result = FALSE;
    if (r4 != -1 && ConstellationStore_IsUsed(base, r4) != 0 && r7 != 0) {
        rec = (u8 *)base + r4 * 0x46;
        if (_ZN8PlayerId7isValidEv(rec) != 0) {
            q = _ZN10PlayerData11getPlayerIdEv(r7);
            if (*(u16 *)rec == *(u16 *)q && memcmp(rec + 2, (u8 *)q + 2, 8) == 0 && _ZN8PlayerId6equalsEPS_(rec, q) != 0) {
                r5 = 0;
            } else if (_ZN6TownId15getTownRelationEv(rec) == 0) {
                if (PlayerId_FindResidentIndex(rec) != -1) {
                    r5 = 1;
                }
            } else if (_ZN8PlayerId6equalsEPS_(rec, _ZN10PlayerData11getPlayerIdEv(r7)) == 0) {
                r5 = 2;
            }
            if (r5 != -1) {
                p14 = rec;
                p18 = rec + 0x16;
            }
        }
    }
    if (r5 != -1) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuStar.key, sTalkTopicTsuStar.variantCount, r5, 0);
        result = TRUE;
        if (p18 != 0) {
            ConstellationEncodedString16 s;
            ConstellationMsgString17 t;
            EncodedString_SetRaw(&s, p18, 0x10);
            t.fromEncoded(&s, 0, 0);
            _ZN15TalkWindowState7setSlotEiPv(window, 0, &t);
        }
        if (p14 != 0) {
            _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, (u32)p14, 1);
            _ZN16ActorTalkRequest15setTownNameSlotEjj(this, ((u32)PlayerId_GetTownId(p14)), 2);
        }
    }
    return result;
}

BOOL VillagerTalkTopics::selectEvArbeit() {
    s32 r = _ZN12Unk_02097ff418getArbeitTalkCountEv(((u32)PlayerData_GetCurrent()));
    if (_ZN11CommManager8isOnlineEv((*(Unk_02021048_Sys * *)&gCommManager)) != 0) {
        r = 10;
    }
    if (r < 10) {
        Villager_MakePersonalityFileName(&topicFile, 30, sTalkTopicEvArbeit, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)));
        topicIndex = r;
        _ZN12Unk_02097ff422advanceArbeitTalkCountEv(((u32)PlayerData_GetCurrent()));
        customFn0 = (Unk_020238b0_Fn)(data_020d7bd0);
        customFn1 = (Unk_020238b0_Fn)(data_020d7fd8);
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerTalkTopics::selectEvFmarket1() {
    s32 r = Random_GlobalBelow(2);
    if (((VillagerTalk *)actor)->getEventKind() == 10 && r == 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvFmarket1.key, sTalkTopicEvFmarket1.variantCount, 0, 0);
        return TRUE;
    }
    return FALSE;
}

s32 VillagerTalkTopics::pickTsuTopicIndex(u8 *a, s32 b) {
    s32 r = Talk_PickWeightedIndex(a, b);
    if (r == -1) {
        r = 4;
    }
    return r;
}

void VillagerTalkTopics::setTsuTextVariables() {
    this->setStringTableArg(4, 3);
    this->setFashionArg(5, actor->villagerData);
    this->setStringTableArg(6, 4);
}

void VillagerTalkTopics::selectTsuTopic(Unk_0201d2d0_Out *out) {
    static Unk_02020850_Fn tbl[14] = { data_020d7fa8, data_020d7b98, data_020d7f90, data_020d7f80, data_020d7b88, data_020d7b78, data_020d7f48, data_020d7b60, data_020d7f10, data_020d7b48, data_020d7b38, data_020d7b30, data_020d7ea8, data_020d7ea0 };
    s32 r, i;
    MI_CpuCopy8(sTsuTopicWeights, sTsuTopicWeightsWork, 14);
    setTsuTextVariables();
    r = this->selectEvFmarket1();
    if (r == 0) {
        r = this->selectEvArbeit();
    }
    while (r == 0) {
        i = this->pickTsuTopicIndex((u8 *)sTsuTopicWeightsWork, 14);
        if (i >= 0 && i < 14) {
            r = (this->*tbl[i])();
            if (r == 0) {
                sTsuTopicWeightsWork[i] = 0;
            }
        } else {
            this->selectTsuAlways();
            break;
        }
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

namespace nZ {
extern "C" {
char sTalkKeyTsuFiHint[12] = "tsu_fi_hint";
const void *const sTalkTopicQError1[2] = {
    (void *)sTalkKeyQError1, (void *)0x2,
};
char sTalkKeyQIcancel[10] = "q_icancel";
char sTalkKeyQ10Reserved[13] = "q10_reserved";
char sTalkKeyQError2[9] = "q_error2";
const void *const sTalkTopicAiSnow1[2] = {
    (void *)sTalkKeyAiSnow1, (void *)0x3,
};
void * data_020d7970[2] = {
    (void *)_ZN18VillagerTalkTopics18advanceRequestStepEv, 0,
};
const void *const sTalkTopicQTimeover[2] = {
    (void *)sTalkKeyQTimeover, (void *)0x3,
};
void * data_020d7a50[2] = {
    (void *)_ZN18VillagerTalkTopics23continueLateLetterShownEv, 0,
};
void * data_020d7c38[2] = {
    (void *)_ZN18VillagerTalkTopics10gotoQ12EndEv, 0,
};
Letter sTalkLetter;
const u8 sSmallTalkChoiceMsgRange[2] = {
    0x00, 0x09,
};
const void *const sTalkTopicsTsuHome[4] = {
    (void *)sTalkKeyTsuShome, (void *)0x3, (void *)sTalkKeyTsuGhome, (void *)0x3,
};
void * data_020d7ff0[2] = {
    (void *)_ZN18VillagerTalkTopics18finishOpenedLetterEv, 0,
};
void * data_020d7fe0[2] = {
    (void *)_ZN18VillagerTalkTopics15gotoDeliveryFinEv, 0,
};
const void *const sTalkTopicTsuFlHint[2] = {
    (void *)sTalkKeyTsuFlHint, (void *)0x3,
};
void * data_020d79f0[2] = {
    (void *)_ZN18VillagerTalkTopics11selectApBuyEv, 0,
};
const void *const sTalkTopicQ06Con[2] = {
    (void *)sTalkKeyQ06Con, (void *)0x3,
};
void * data_020d7bc0[2] = {
    (void *)_ZN18VillagerTalkTopics15gotoDeliveryFinEv, 0,
};
char sTalkKeyQ01Con1[9] = "q01_con1";
const void *const sTalkTopicAiJoy[2] = {
    (void *)sTalkKeyAiJoy, (void *)0x3,
};
}
}

void VillagerTalkTopics::startGreetingB() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
}

void VillagerTalkTopics::continueGreetingB() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEtcConnectTopicTable);
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::openEtcConnectChoice() {
    Unk_0201d568_SV s;
    u8 *p;
    if (Villager_IsMovingIn(actor->villagerData) != 0) {
        p = ((u8 *)&nZ::sEtcConnectTopicTable[4]);
    } else if (_ZN11CommManager8isOnlineEv(gCommManager) != 0 && _ZN6TownId15getTownRelationEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent())) != 0) {
        p = ((u8 *)&nZ::sEtcConnectTopicTable[5]);
    } else {
        p = ((u8 *)&nZ::sEtcConnectTopicTable[1]);
    }
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)p);
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ed8));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectTsuMove1(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuMove1.key, sTalkTopicTsuMove1.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openTsuMove1Choice() {
    Unk_0201d568_SV s;
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x37, 0x39, (s32)((u8 *)&nZ::sEtcConnectTopicTable[2]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x3a, 0x3c, (s32)((u8 *)&nZ::sEtcConnectTopicTable[3]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&(*(Unk_0201d2d0_Fn *)nZ::data_020d7dd0)));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectTsuMove1B(Unk_0201d2d0_Out *out) {
    s32 v;
    if (Random_GlobalBelow(3) == 0 && _ZN11CommManager8isOnlineEv(gCommManager) == 0) {
        void *r6 = actor->villagerData;
        void *r7;
        Villager_GetPlan(r6);
        r7 = ((void * (*)())VillagerPlanBlock_GetPlan)();
        if (Villager_IsJustMovedIn(r6) == 0) {
            _ZN12VillagerPlan13func_0209b238Ev(r7);
            SaveVillagers_SetLastMovedInById(gSaveVillagers, _ZN12VillagerData13getVillagerIdEv(r6));
        }
        v = 3;
    } else {
        v = 2;
    }
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuMove1.key, sTalkTopicTsuMove1.variantCount, v, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectTsuMove1Part1(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuMove1.key, sTalkTopicTsuMove1.variantCount, 1, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectTsuMove2(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicTsuMove2.key, sTalkTopicTsuMove2.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectTsuAlwaysEntry(Unk_0201d2d0_Out *out) {
    this->selectTsuAlways();
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

s32 VillagerTalkTopics::selectSituationGreeting(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    s32 v24 = -1;
    void *r18 = actor->villagerData;
    u8 *r6 = (u8 *)Villager_GetState(r18);
    void *r20 = ((void * (*)())VillagerState_GetMood)();
    s32 result = 0;
    s32 v28 = 0;
    s32 v2c = 0;
    s32 r7 = this->getGreetingStatus((s32 *)(&v2c));
    this->setGreetingArgs();
    if (this->hasFallen() != 0) {
        d = &sTalkTopicAiFall;
        if (r7 == 0) {
            noMemoryUpdate = 1;
        }
    } else if (this->isBeeSwarmOut() != 0) {
        d = &sTalkTopicAiRun;
        if (r7 == 0) {
            noMemoryUpdate = 1;
        }
    } else if (this->isFirstMeeting(r7) != 0) {
        d = this->getFirstMeetingTopic((u32 *)(&v28), r18);
    } else if (this->findDangerousInsect((volatile s32 *)(&v24), &actor->position) != 0) {
        d = this->getPoisonTopic(v24);
    } else if (this->hasFleas() != 0) {
        d = &sTalkTopicAiFlea;
    } else if (this->isForeignMemory(r7) != 0) {
        d = this->getForeignTopic();
    } else if (this->isPlayerStung((Unk_0202b4ac_Rec *)r6) != 0) {
        d = this->getBeeStingTopic((u32 *)(&v28), (Unk_0202b4ac_Rec *)r6);
    } else if (this->isMoodAngry((s32)r20) != 0) {
        d = &sTalkTopicAiAnger;
    } else if (this->isMoodSad((s32)r20) != 0) {
        d = &sTalkTopicAiSad;
    } else if (this->isMoodTired((s32)r20) != 0) {
        d = &sTalkTopicAiTire;
    }
    if (d != 0) {
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r18)), d->key, d->variantCount, v28, 0);
        result = 1;
    }
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    r6[0x1d] |= 4;
    return result;
}

void VillagerTalkTopics::selectEvKaraokeTalk(Unk_0201d2d0_Out *out) {
    void *r7 = actor->villagerData;
    Unk_0201d2d0_Out o2;
    if (selectSituationGreeting(out) != 0) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    } else {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
        if (memory != 0 && _ZN14VillagerMemory13isTalkedTodayEv((void *)memory) == 0) {
            Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r7)), (*(Unk_0201d2d0_Data *)&sTalkTopicEvKaraoke).key, (*(Unk_0201d2d0_Data *)&sTalkTopicEvKaraoke).variantCount, 0, 0);
            out->fileName = (u32)&topicFile;
            out->msgIndex = topicIndex;
            _ZN14VillagerMemory14setTalkedTodayEv((void *)memory);
        } else {
            if (SaveVillagers_IsTuneRequester(gSaveVillagers, _ZN12VillagerData13getVillagerIdEv(r7)) == 0) {
                switch (Random_GlobalBelow(3)) {
                case 0:
                    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvKaraokeTopicTable);
                    break;
                case 1:
                    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvKaraokeTopicTable[7]));
                    break;
                default:
                    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvKaraokeTopicTable[8]));
                    break;
                }
                if (selectFn) {
                    (this->*(Unk_0201d2d0_OutFn)selectFn)(out);
                }
            } else {
                ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvKaraokeTopicTable[8]));
                if (selectFn) {
                    (this->*(Unk_0201d2d0_OutFn)selectFn)(out);
                }
            }
        }
    }
}

void VillagerTalkTopics::selectEvKaraokeMsg3(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), (*(Unk_0201d2d0_Data *)&sTalkTopicEvKaraoke).key, 1, 3, (*(Unk_0201d2d0_Data *)&sTalkTopicEvKaraoke).variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openEvKaraokeChoice() {
    Unk_0201d568_SV s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0xc4, 0xc4, (s32)((u8 *)&nZ::sEvKaraokeTopicTable[1]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0xd0, 0xd0, (s32)((u8 *)&nZ::sEvKaraokeTopicTable[6]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7f60));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg20(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 0x14, sTalkTopicEvKaraoke.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::continueEvKaraokeMsg20() {
    u8 b;
    Unk_020238b0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvKaraokeTopicTable[2]));
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkKaraokeTopics::startEvKaraokeAction() {
    _ZN12Unk_020d771018requestCloseWindowEj(this, 3);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7d60));
}

void VillagerTalkKaraokeTopics::waitEvKaraokeAction() {
    _ZN12Unk_0201442023requestPlayRandomMelodyEv(this);
    ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7ab0));
}

void VillagerTalkKaraokeTopics::continueEvKaraokeAction() {
    u8 b;
    Unk_020238b0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvKaraokeTopicTable[3]));
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
    _ZN12Unk_020d771019requestReopenWindowEv(this);
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg6(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 6, 2);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::openEvKaraokeMsg6Choice() {
    Unk_0201f7d0_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x44, 0x44, (s32)((u8 *)&nZ::sEvKaraokeTopicTable[4]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x52, 0x52, (s32)((u8 *)&nZ::sEvKaraokeTopicTable[5]));
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ca0));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg8(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 8, 2);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = static_cast<Unk_020238b0_Fn>(data_020d7d40);
}

void VillagerTalkKaraokeTopics::endEvKaraokeMsg8() {
    Melody_SaveRandomPattern(this);
    SaveVillagers_SetTuneRequester(gSaveVillagers, _ZN12VillagerData13getVillagerIdEv(actor->villagerData));
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg10(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 0xa, 2);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg12(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 0xc, 2);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg14(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 0xe, sTalkTopicEvKaraoke.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::selectEvKaraokeMsg17(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvKaraoke.key, 1, 0x11, sTalkTopicEvKaraoke.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::openSmallTalkChoice() {
    Unk_0201f7d0_S s;
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)sSmallTalkTopicTable);
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&s), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
    s.count = 2;
    s.cancelIndex = s.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7d28));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkKaraokeTopics::selectEvFirework(Unk_0201f7d0_Out *out) {
    u32 r5;
    void *r7 = actor->villagerData;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)out) == 0) {
        Unk_0201fb54_Date d;
        d.a = 0;
        d.b = 0;
        r5 = Random_GlobalBelow(10) & 1;
        Clock_GetDateTime(&d);
        if (r5 == 0) {
            u8 v = ((u8 *)&d)[2];
            if (v < 0x13) {
                r5 = 2;
            } else if (v < 0x14) {
                r5 = 0;
            } else if (v < 0x16) {
                r5 = 1;
            } else {
                r5 = 2;
            }
        } else {
            u8 v = ((u8 *)&d)[3];
            if (v != 0) {
                r5 = (v - 1) / 7;
            } else {
                r5 = 0;
            }
            if (Date_GetNthWeekdayDay(((u8 *)&d)[5], ((u8 *)&d)[4], 6, 5) != -1 && r5 >= 2) {
                r5--;
            }
            r5 = (r5 >= 5 ? 0 : r5) + 3;
        }
        Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(r7)), sTalkTopicEvFirework.key, sTalkTopicEvFirework.variantCount, r5, 0);
        out->fileName = (u32)&topicFile;
        out->msgIndex = topicIndex;
    }
    onEndFn = static_cast<Unk_020238b0_Fn>(data_020d79c8);
}

void VillagerTalkKaraokeTopics::endEvFirework() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
}

void VillagerTalkKaraokeTopics::selectEvAdmireTalk(Unk_0201f7d0_Out *out) {
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)out) != 0) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    } else {
        if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv((void *)memory) == 0) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvAdmireTopicTable);
        } else if (Random_GlobalBelow(100) < 30) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAdmireTopicTable[2]));
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAdmireTopicTable[6]));
        }
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
        if (selectFn) {
            (this->*selectFn)((Unk_020238b0_Out *)out);
        }
    }
}

void VillagerTalkKaraokeTopics::selectEvAdmire(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), (*(Unk_0201f7d0_Data *)&sTalkTopicEvAdmire).key, (*(Unk_0201f7d0_Data *)&sTalkTopicEvAdmire).variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::openEvAdmireWordEntry() {
    _ZN12Unk_020d771016setSubSceneKind2Ejjjh(this, 0x17, ((u8 *)&sTalkInputBuffer), 0x10, 0);
    _ZN12Unk_020d771012openSubSceneEi(this, 6);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7e50));
}

void VillagerTalkKaraokeTopics::saveEnteredCompliment() {
    void *r4;
    void *r5;
    if (MenuCtrl_IsResultOk() != 0) {
        r4 = actor->villagerData;
        if (memory != 0) {
            _ZN14VillagerMemory13setComplimentEPvi((u32)memory, MenuCtrl_GetText(), 16);
        } else {
            u32 r = MenuCtrl_GetText();
            _ZN20VillagerDataItemView16setComplimentForEPviS0_(r4, r, 16, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
        }
    }
}

void VillagerTalkKaraokeTopics::onEvAdmireWordEntered() {
    u8 b;
    Unk_020238b0_Out out;
    saveEnteredCompliment();
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAdmireTopicTable[1]));
    if (selectFn) {
        (this->*selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkKaraokeTopics::selectEvAdmireMsg2(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), (*(Unk_0201f7d0_Data *)&sTalkTopicEvAdmire).key, 1, 2, (*(Unk_0201f7d0_Data *)&sTalkTopicEvAdmire).variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv((void *)memory);
    }
}

void VillagerTalkKaraokeTopics::selectEvAdmireMsg7(Unk_0201f7d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), (*(Unk_0201f7d0_Data *)&sTalkTopicEvAdmire).key, 1, 7, 3);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkKaraokeTopics::openEvAdmireChoice() {
    Unk_0201f7d0_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x5a, 0x5a, (s32)((u8 *)&nZ::sEvAdmireTopicTable[5]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x6f, 0x6f, (s32)((u8 *)&nZ::sEvAdmireTopicTable[3]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7ed0));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkHobbyTopics::selectEvAdmireMsg12(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvAdmire.key, 1, 12, sTalkTopicEvAdmire.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::openEvAdmireWordEntryB() {
    ((VillagerTalk *)this)->setSubSceneKind2(0x17, (u32)sTalkInputBuffer, 0x10, 0);
    ((VillagerTalk *)this)->openSubScene(6);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&((Unk_0201eea4_Fn)(*(void (VillagerTalkHobbyTopics::**)())nZ::data_020d7f70))));
}

void VillagerTalkHobbyTopics::onEvAdmireWordEnteredB() {
    u8 b;
    Unk_0201eeac_Res res;
    ((VillagerTalkKaraokeTopics *)this)->saveEnteredCompliment();
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((char *)&nZ::sEvAdmireTopicTable[4]));
    if (selectFn != 0) {
        (this->*(Unk_0201eea4_Fn)selectFn)(&res);
    }
    b = res.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, res.fileName);
}

void VillagerTalkHobbyTopics::selectEvAdmireMsg14(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvAdmire.key, 1, 14, sTalkTopicEvAdmire.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::selectEvAdmireMsg10(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvAdmire.key, 1, 10, sTalkTopicEvAdmire.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::selectEvAdmireMsg4(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvAdmire.key, 1, 4, 3);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::continueEvAdmireMsg4() {
    u8 b;
    Unk_0201eeac_Res res;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((char *)&nZ::sEvAdmireTopicTable[7]));
    if (selectFn != 0) {
        (this->*(Unk_0201eea4_Fn)selectFn)(&res);
    }
    b = res.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, res.fileName);
}

void VillagerTalkHobbyTopics::selectEtcConnectAdmire() {
    ((void (*)(void *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this);
}

void VillagerTalkHobbyTopics::openSmallTalkChoiceAdmire() {
    ((VillagerTalkKaraokeTopics *)this)->openSmallTalkChoice();
}

extern "C" u32 Talk_GetTourneyHourBlock(u32 x) {
    switch (x) {
    case 6:
    case 9:
    case 12:
    case 15:
        return 6;
    case 8:
    case 11:
    case 14:
    case 17:
        return 12;
    }
    return 9;
}

void VillagerTalkHobbyTopics::selectEvFishing(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)out)) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
        return;
    }
    Unk_021ed24c *dp = &gSaveData.unk_15ef4;
    sp14 = actor->villagerData;
    if (dp) {
        ContestRecord_GetItem(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    Clock_GetDateTime(t);
    sp18 = ((u8 *)t)[2];
    if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv(memory) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12e8, 0x131f)) {
            sp1c = _ZN13ContestRecord13func_020858acEv(dp);
            r4 = ((void *)_ZN13ContestRecord17getHolderVillagerEv(dp));
            if (_ZN10VillagerId7isValidEv(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)_ZN12VillagerData13getVillagerIdEv(sp14);
                if (a->townId == b->townId && memcmp(a->townName, b->townName, 8) == 0 && a->species == b->species) {
                    r6 = 3;
                } else {
                    r6 = Talk_GetTourneyHourBlock(sp18);
                }
                _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, r4, 1);
            } else if (_ZN8PlayerId7isValidEv((void *)sp1c)) {
                r6 = Talk_GetTourneyHourBlock(sp18);
                _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, _ZN13ContestRecord13func_020858acEv(dp), 1);
            }
            _ZN16ActorTalkRequest17setFixedPointSlotEiji(this, _ZN13ContestRecord7getSizeEv(dp), 0, 1, 3);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)&id, 0, 7);
        }
    }
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(sp14)), sTalkTopicEvFishing.key, 1, r6, sTalkTopicEvFishing.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)((Unk_0201eea4_Fn)(*(void (VillagerTalkHobbyTopics::**)())nZ::data_020d7a28));
}

void VillagerTalkHobbyTopics::endEvFishing() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv(memory);
    }
}

void VillagerTalkHobbyTopics::selectEvInsect(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)out)) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
        return;
    }
    Unk_021ed24c *dp = &gSaveData.unk_15ef4;
    sp14 = actor->villagerData;
    if (dp) {
        ContestRecord_GetItem(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    Clock_GetDateTime(t);
    sp18 = ((u8 *)t)[2];
    if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv(memory) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12b0, 0x12e7)) {
            sp1c = _ZN13ContestRecord13func_020858acEv(dp);
            r4 = ((void *)_ZN13ContestRecord17getHolderVillagerEv(dp));
            if (_ZN10VillagerId7isValidEv(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)_ZN12VillagerData13getVillagerIdEv(sp14);
                if (a->townId == b->townId && memcmp(a->townName, b->townName, 8) == 0 && a->species == b->species) {
                    r6 = 3;
                } else {
                    r6 = Talk_GetTourneyHourBlock(sp18);
                }
                _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, r4, 1);
            } else if (_ZN8PlayerId7isValidEv((void *)sp1c)) {
                r6 = Talk_GetTourneyHourBlock(sp18);
                _ZN16ActorTalkRequest17setPlayerNameSlotEjj(this, _ZN13ContestRecord13func_020858acEv(dp), 1);
            }
            _ZN16ActorTalkRequest13setNumberSlotEijiii(this, _ZN13ContestRecord7getSizeEv(dp) >> 12, 0, 3, 0, 0);
            _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, (void *)&id, 0, 7);
        }
    }
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(sp14)), sTalkTopicEvInsect.key, 1, r6, sTalkTopicEvInsect.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)((Unk_0201eea4_Fn)(*(void (VillagerTalkHobbyTopics::**)())nZ::data_020d7c20));
}

void VillagerTalkHobbyTopics::endEvInsect() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv(memory);
    }
}

void VillagerTalkHobbyTopics::selectEvGardeniingTalk(void *arg) {
    void *r4 = actor->villagerData;
    u32 r6 = ((u32)Random_GlobalBelow(10)) & 1;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)arg)) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)r4, 0);
        return;
    }
    if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv(memory) == 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvGardeniingTopicTable);
    } else if (r6 == 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((char *)&nZ::sEvGardeniingTopicTable[2]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((char *)&nZ::sEvGardeniingTopicTable[1]));
    }
    if (selectFn != 0) {
        (this->*(Unk_0201eea4_Fn)selectFn)(arg);
    }
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)r4, 0);
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv(memory);
    }
}

void VillagerTalkHobbyTopics::selectEvGardeniing(Unk_0201ef00_Out *out) {
    u32 a, b;
    s32 t = Event_GetDaysSinceStart(0xe);
    if (t < 0) {
        t = 0;
    }
    if (t == 0) {
        a = 2;
        b = 0;
    } else if (t >= 1 && t <= 2) {
        a = 3;
        b = 2;
    } else if (t >= 3 && t <= 5) {
        a = 3;
        b = 5;
    } else {
        a = 2;
        b = 8;
    }
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvGardeniing.key, 1, b, (u8)a);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::selectEvGardeniingMsg13(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvGardeniing.key, 1, 13, sTalkTopicEvGardeniing.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::selectEvGardeniingMsg10(Unk_0201ef00_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvGardeniing.key, 1, 10, sTalkTopicEvGardeniing.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkHobbyTopics::continueEvGardeniingMsg10() {
    u8 b;
    Unk_0201eeac_Res res;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((char *)&nZ::sEvGardeniingTopicTable[3]));
    if (selectFn != 0) {
        (this->*(Unk_0201eea4_Fn)selectFn)(&res);
    }
    b = res.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, res.fileName);
}

void VillagerTalkHobbyTopics::selectEtcConnectGardeniing() {
    ((void (*)(void *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this);
}

void VillagerTalkAcornTopics::openSmallTalkChoiceGardeniing() { ((VillagerTalkKaraokeTopics *)this)->openSmallTalkChoice(); }

extern "C" BOOL Talk_IsAcornItem(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        r = TRUE;
    }
    return r;
}

extern "C" BOOL Talk_AcornPickerFilter(u16 *p, s32 a) {
    BOOL r = FALSE;
    BOOL in = FALSE;
    if (*p >= 0x1542 && *p <= 0x1546) {
        in = TRUE;
    }
    if (in && a == 0) {
        r = TRUE;
    }
    return r;
}

void VillagerTalkAcornTopics::selectEvAcornTalk(u32 arg) {
    u32 r4 = (u32)actor->villagerData;
    u32 r6 = Random_GlobalBelow(10) & 1;
    u32 r7 = Random_GlobalBelow(10) & 1;
    u32 tmp;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)arg)) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), &memoryIndex, r4, 0);
        return;
    }
    if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv((void *)memory) == 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvAcornTopicTable);
    } else if (r6 == 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[2]));
    } else if (r7 == 0) {
        if (Pocket_CountMatching(&tmp, Talk_IsAcornItem) > 0) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[4]));
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[2]));
        }
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[1]));
    }
    if (selectFn) {
        (this->*(Unk_0201e5a4_Fn)selectFn)(arg);
    }
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), &memoryIndex, r4, 0);
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv((void *)memory);
    }
}

void VillagerTalkAcornTopics::selectEvAcorn(Unk_0201e5a4_Out *out) {
    u32 r4;
    u32 r6;
    s32 v = Event_GetDaysSinceStart(0x10);
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        r4 = 2;
        r6 = 0;
    } else if (v >= 1 && v <= 5) {
        r4 = 3;
        r6 = 2;
    } else {
        r4 = 2;
        r6 = 5;
    }
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, r6, r4);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::selectEvAcornMsg10(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 0xa, sTalkTopicEvAcorn.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::selectEvAcornMsg7(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 7, sTalkTopicEvAcorn.variantCount);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::continueEvAcornMsg7() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[3]));
    if (selectFn) {
        (this->*(Unk_0201e5a4_RetFn)selectFn)(&t);
    }
    c.msgIndex = t.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &c, t.fileName);
}

void VillagerTalkAcornTopics::selectEtcConnectAcorn() { ((void (*)(VillagerTalkAcornTopics *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this); }

void VillagerTalkAcornTopics::openSmallTalkChoiceAcorn() { ((VillagerTalkKaraokeTopics *)this)->openSmallTalkChoice(); }

void VillagerTalkAcornTopics::selectEvAcornMsg13(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 0xd, 2);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::openEvAcornGiveChoice() {
    Unk_0201eabc_T t;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&t));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&t), 0, 0x5b, 0x5d, (s32)((u8 *)&nZ::sEvAcornTopicTable[5]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&t), 1, 0x5e, 0x60, (s32)((u8 *)&nZ::sEvAcornTopicTable[8]));
    t.count = 2;
    t.cancelIndex = t.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&t);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)nZ::data_020d7bc8));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkAcornTopics::openAcornPicker() {
    _ZN12Unk_020d771015setPocketFilterEjjj(this, (void *)((u32)Talk_AcornPickerFilter), 0xd, 1);
    ((Unk_020d7710 *)this)->openSubScene(0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)nZ::data_020d7968));
}

void VillagerTalkAcornTopics::onAcornPicked() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    if (MenuCtrl_IsResultOk() != 0) {
        u32 r4 = ((u32)MenuCtrl_GetIndex());
        itemFromPlayer = *(u16 *)((u32)_ZN15PlayerInventory9getPocketEi((void *)((u32)_ZN10PlayerData12getInventoryEv((void *)((u32)PlayerData_GetCurrent()))), r4));
        c.item = 0xfff1;
        Pocket_SetItem(&c.item, 0, r4);
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
        ((VillagerTalk *)this)->setNextTaskDoneFn((*(Unk_020d8938_Fn *)nZ::data_020d7ba0));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[8]));
        if (window != NULL) {
            ((Unk_0201e5a4_Msg *)window)->nextState = 1;
        }
        if (selectFn) {
            (this->*(Unk_0201e5a4_RetFn)selectFn)(&t);
        }
        c.msgIndex = t.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &c, t.fileName);
    }
}

void VillagerTalkAcornTopics::continueAcornReceived() {
    Unk_0201e9d0_S c;
    Unk_0201e5a4_Ret t;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[6]));
    if (window != NULL) {
        ((Unk_0201e5a4_Msg *)window)->nextState = 1;
    }
    if (selectFn) {
        (this->*(Unk_0201e5a4_RetFn)selectFn)(&t);
    }
    c.msgIndex = t.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &c, t.fileName);
}

void VillagerTalkAcornTopics::selectEvAcornMsg17(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 0x11, 2);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::rollAcornReward() {
    s32 r4;
    if (memory != 0) {
        r4 = _ZN14VillagerMemory13getFriendshipEv((void *)memory);
    } else {
        r4 = 0;
    }
    if (r4 + 0x100 > Random_GlobalBelow(0x200)) {
        Unk_0201e9d0_S c;
        Unk_0201e5a4_Ret t;
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvAcornTopicTable[7]));
        if (selectFn) {
            (this->*(Unk_0201e5a4_RetFn)selectFn)(&t);
        }
        c.msgIndex = t.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &c, t.fileName);
    } else {
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &(*(Unk_0201e9d0_S *)&gTalkMsgIndexEnd), sTalkTopicEvAcorn.key);
    }
}

void VillagerTalkAcornTopics::selectEvAcornMsg19(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 0x13, 2);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::giveAcornReward() {
    u16 a[2];
    Unk_0201e710_Tmp obj;
    BOOL r;
    u32 r6 = ((u32)PlayerData_GetCurrent());
    u32 r7 = ((u32)_ZN10PlayerData12getInventoryEv((void *)r6));
    s32 v = _ZN15PlayerInventory15findEmptyPocketEv(r7);
    if (v == -1) {
        v = 0;
    }
    if (Item_IsFurniture(&itemFromPlayer) != 0) {
        a[1] = 0x1546;
        if (Item_GetFurnitureIndex(&itemFromPlayer) == Item_GetFurnitureIndex(&a[1])) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (itemFromPlayer == 0x1546) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        itemToPlayer = 0x1566;
    } else {
        _ZN12ItemPickSpec3setEii(&obj, sAcornRewardItemKinds[Random_GlobalBelow(3)], 0);
        ItemPick_One(a, &obj, 0, 0, 1, 1, 0);
        itemToPlayer = a[0];
        ItemPickSpec_Destruct(&obj);
    }
    _ZN15PlayerInventory9setPocketEPtij((void *)r7, &itemToPlayer, v, 0);
    Catalog_SetItem(((u32)_ZN10PlayerData10getCatalogEv((void *)r6)), &itemToPlayer, 0, 1);
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
    if (itemToPlayer != 0xfff1) {
        _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &itemToPlayer, 0, 7);
    }
}

void VillagerTalkAcornTopics::selectEvAcornMsg15(Unk_0201e5a4_Out *out) {
    Talk_SelectTopicMessage(this, topicFile, &topicIndex, 0x1e, VillagerId_GetPersonality((void *)((u32)_ZN12VillagerData13getVillagerIdEv((void *)actor->villagerData))), sTalkTopicEvAcorn.key, 1, 0xf, 2);
    out->fileName = topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkAcornTopics::selectEvSnowfesTalk(u32 arg) {
    u32 r6 = (u32)actor->villagerData;
    u32 v = ((u32)_ZN13ContestRecord16getVotedVillagerEv(gContestRecord));
    u32 r5 = 2;
    if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)arg)) {
        VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), &memoryIndex, r6, 0);
        return;
    }
    if (Event_GetDaysSinceStart(0x11) == 6 && memory != 0 && _ZN14VillagerMemory13isTalkedTodayEv((void *)memory) != 0) {
        r5 = 3;
    }
    r5 = Random_GlobalBelow(r5);
    if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv((void *)memory) == 0 || r5 == 2) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvSnowfesTopicTable);
    } else if (r5 == 0 && _ZN10VillagerId7isValidEv((void *)v) != 0) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvSnowfesTopicTable[1]));
    } else {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvSnowfesTopicTable[2]));
    }
    if (selectFn) {
        (this->*(Unk_0201e5a4_Fn)selectFn)(arg);
    }
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), &memoryIndex, r6, 0);
    if (memory != 0) {
        _ZN14VillagerMemory14setTalkedTodayEv((void *)memory);
    }
}

void VillagerTalkHolidayTopics::selectEvSnowfes(Unk_0201dc44_Ret *out) {
    void *o = actor->villagerData;
    Unk_0201dc44_Id *p = _ZN13ContestRecord17getHolderVillagerEv(gContestRecord);
    s32 v = Event_GetDaysSinceStart(0x11);
    s32 a, b;
    if (v < 0) {
        v = 0;
    }
    if (v == 0) {
        a = 2;
        b = 3;
    } else if (v >= 1 && v <= 5) {
        a = 3;
        b = 5;
    } else if (_ZN8SaveData8testFlagEj(((u8 *)&gSaveData), 0x11) && _ZN10VillagerId7isValidEv(p)) {
        Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)_ZN12VillagerData13getVillagerIdEv(o);
        if (p->townId == q->townId && memcmp(p->townName, q->townName, 8) == 0 && p->species == q->species) {
            a = 1;
            b = 0xb;
        } else {
            a = 3;
            b = 8;
        }
        _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, p, 0);
    } else {
        a = 2;
        b = 0x12;
    }
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvSnowfes.a,  1,  b,  (u8)a);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvSnowfesB(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Id *p = _ZN13ContestRecord16getVotedVillagerEv(gContestRecord);
    Unk_0201dc44_Id *q = (Unk_0201dc44_Id *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    s32 x;
    if (p->townId == q->townId && memcmp(p->townName, q->townName, 8) == 0 && p->species == q->species) {
        x = 0xc;
    } else {
        x = 0xf;
    }
    if (_ZN10VillagerId7isValidEv(p)) {
        _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, p, 1);
    }
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvSnowfes.a,  1,  x,  sTalkTopicEvSnowfes.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvSnowfesC(Unk_0201dc44_Ret *out) {
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvSnowfes.a,  1,  0,  sTalkTopicEvSnowfes.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::continueEvSnowfesC() {
    Unk_0201dc44_Ret r;
    u8 b;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvSnowfesTopicTable[3]));
    if (selectFn) {
        (this->*(Unk_0201dc44_State)selectFn)(&r);
    }
    b = r.b;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, (u32)r.a);
}

void VillagerTalkHolidayTopics::selectEtcConnectSnowfes() { ((void (*)(VillagerTalkHolidayTopics *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this); }

void VillagerTalkHolidayTopics::openSmallTalkChoiceSnowfes() { ((VillagerTalkKaraokeTopics *)this)->openSmallTalkChoice(); }

void VillagerTalkHolidayTopics::selectEvCountdownTalk(Unk_0201dc44_Ret *out) {
    void *o = actor->villagerData;
    Unk_0201dc44_Time t;
    u32 mn;
    u8 hi, lo;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    Clock_GetDateTime(&t);
    hi = t.day;
    lo = t.hour;
    mn = t.minute;
    if (hi != 0x1f || lo >= 0x17) {
        if (((VillagerTalkTopics *)this)->selectSituationGreeting((Unk_0201d2d0_Out *)out)) {
            VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)o, 0);
            return;
        }
    }
    if (hi == 0x1f) {
        if (lo < 0x17) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvCountdownTopicTable);
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[3]));
        }
    } else {
        Unk_0201dc44_Lim *q = Personality_GetSleepHours(((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(o))));
        if (lo < q->wakeHour || (lo == q->wakeHour && mn < q->wakeMinute)) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[4]));
        } else if (memory == 0 || _ZN14VillagerMemory13isTalkedTodayEv(memory) == 0) {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[5]));
        } else {
            ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[6]));
        }
        _ZN16ActorTalkRequest13setNumberSlotEijiii(this, t.year + 0x7d0, 0, 4, 0, 0);
    }
    if (selectFn) {
        (this->*(Unk_0201dc44_State)selectFn)(out);
    }
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)o, 0);
    if (memory) {
        _ZN14VillagerMemory14setTalkedTodayEv(memory);
    }
}

void VillagerTalkHolidayTopics::selectGreetingCountdown() { ((void (*)(VillagerTalkHolidayTopics *))_ZN18VillagerTalkTopics14selectGreetingEP16Unk_0201d2d0_Out)(this); }

void VillagerTalkHolidayTopics::continueGreetingCountdown() {
    Unk_0201dc44_Ret r;
    u8 b;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[1]));
    if (selectFn) {
        (this->*(Unk_0201dc44_State)selectFn)(&r);
    }
    b = r.b;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, (u32)r.a);
}

void VillagerTalkHolidayTopics::selectEtcConnectCountdownB() { ((void (*)(VillagerTalkHolidayTopics *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this); }

void VillagerTalkHolidayTopics::openEvCountdownChoice() {
    Unk_0201e110_Buf buf;
    u8 *p = sSmallTalkTopicTable;
    if ((Random_GlobalBelow(10) & 1) == 0) {
        p = ((u8 *)&nZ::sEvCountdownTopicTable[2]);
    }
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), 0, (const u8 *)sSmallTalkChoiceMsgRange, (s32)p);
    TalkChoiceTable_SetRange(this, (TalkChoiceTable *)(&buf), 1, (const u8 *)sLeaveChoiceMsgRange, (s32)sEtcCancelTopicTable);
    buf.count = 2;
    buf.cancelIndex = buf.count - 1;
    ((VillagerTalk *)this)->setupChoiceMenu(&buf);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7e98));
    _ZN15TalkWindowState11openChoicesEi((void *)window, 1);
}

void VillagerTalkHolidayTopics::selectEvCountdown(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    Clock_GetDateTime(&t);
    if (t.hour < 0xc) {
        x = 0;
    } else if (t.hour < 0x11) {
        x = 2;
    } else {
        x = 4;
    }
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvCountdown.a,  1,  x,  sTalkTopicEvCountdown.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvCountdownB(Unk_0201dc44_Ret *out) {
    Unk_0201dc44_Time t;
    s32 x;
    *(u32 *)&t = 0;
    *((u32 *)&t + 1) = 0;
    Clock_GetDateTime(&t);
    if (t.hour < 0x17 || (t.hour == 0x17 && t.minute < 0x1e)) {
        x = 6;
    } else if (t.minute < 0x37) {
        x = 8;
    } else if (t.minute < 0x3b) {
        x = 10;
    } else {
        x = 12;
    }
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvCountdown.a,  1,  x,  sTalkTopicEvCountdown.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvCountdownMsg14(Unk_0201dc44_Ret *out) {
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvCountdown.a,  1,  0xe,  sTalkTopicEvCountdown.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvCountdownMsg16(Unk_0201dc44_Ret *out) {
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvCountdown.a,  1,  0x10,  sTalkTopicEvCountdown.b);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::selectEvCountdownMsg18(Unk_0201dc44_Ret *out) {
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  sTalkTopicEvCountdown.a,  1,  0x12,  3);
    out->a = topicFile;
    out->b = topicIndex;
}

void VillagerTalkHolidayTopics::continueEvCountdownMsg18() {
    Unk_0201dc44_Ret r;
    u8 b;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvCountdownTopicTable[7]));
    if (selectFn) {
        (this->*(Unk_0201dc44_State)selectFn)(&r);
    }
    b = r.b;
    _ZN15TalkWindowState14setNextMessageEPhPv((void *)window, &b, (u32)r.a);
}

void VillagerTalkHolidayTopics::selectEtcConnectCountdown() { ((void (*)(VillagerTalkHolidayTopics *))_ZN18VillagerTalkTopics16selectEtcConnectEP16Unk_0201d2d0_Out)(this); }

void VillagerTalkHolidayTopics::openSmallTalkChoiceCountdown() { ((VillagerTalkKaraokeTopics *)this)->openSmallTalkChoice(); }

void VillagerTalkHolidayTopics::selectTsuAlwaysOnce(Unk_0201dc44_Ret *out) {
    ((VillagerTalkTopics *)this)->setTsuTextVariables();
    ((VillagerTalkTopics *)this)->selectTsuAlways();
    out->a = topicFile;
    out->b = topicIndex;
    ((VillagerTalk *)this)->clearTopicFns();
}

void VillagerTalkHolidayTopics::selectTsuSpotOnce(Unk_0201dc44_Ret *out) {
    ((VillagerTalkTopics *)this)->setTsuTextVariables();
    ((VillagerTalkRumorTopics *)this)->selectTsuSpot();
    out->a = topicFile;
    out->b = topicIndex;
    ((VillagerTalk *)this)->clearTopicFns();
}

void VillagerTalkHolidayTopics::selectTsuFriendOnce(Unk_0201dc44_Ret *out) {
    ((VillagerTalkTopics *)this)->setTsuTextVariables();
    ((VillagerTalkRumorTopics *)this)->selectTsuFriend();
    out->a = topicFile;
    out->b = topicIndex;
    ((VillagerTalk *)this)->clearTopicFns();
}

void VillagerTalkHolidayTopics::selectEvBirthMsg0(Unk_0201dc44_Ret *out) {
    ((void (*)(VillagerTalkHolidayTopics *, void *, u8 *, s32, void *, u32, s32, s32, u32))Talk_SelectTopicMessage)(this,  topicFile,  &topicIndex,  0x1e,  ((void *)VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData))),  (*(Unk_0201dc44_Snd *)&sTalkTopicEvBirth).a,  1,  0,  (*(Unk_0201dc44_Snd *)&sTalkTopicEvBirth).b);
    out->a = topicFile;
    out->b = topicIndex;
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
    closeFn = (Unk_020238b0_Fn)(data_020d7df0);
}

void VillagerTalkHolidayTopics::continueEvBirthMsg0() {
    _ZN12Unk_020d771018requestCloseWindowEj(this, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7ae8));
}

void VillagerTalkHolidayTopics::startEvBirthMove() {
    volatile Unk_0201dca0_Vec v;
    Unk_0201dc44_Ctx *volatile *pc = (Unk_0201dc44_Ctx *volatile *)&actor;
    Unk_0201dc44_Vec *pv = &(*pc)->position;
    s32 x, z;
    v.x = x = pv->x;
    v.y = pv->y;
    v.z = z = pv->z;
    v.x = x + 0x1e00;
    z -= 0x2800;
    v.z = z;
    _ZN13NpcActionCtrl13requestActionEjiiissiitt((*pc)->actionCtrl, 2, 2, v.x, z, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_ec = (Unk_020238b0_Fn)(data_020d7de0);
}

void VillagerTalkHolidayTopics::updateEvBirthMove() {
    if (_ZN13NpcActionCtrl9getActionEv(&actor->actionCtrl) == 2) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actor->actionCtrl)) {
            _ZN13NpcActionCtrl12requestStandEjt(&actor->actionCtrl, 2, data_020c6cc8);
            unk_ec = (Unk_020238b0_Fn)(data_020d7aa8);
        }
    }
}

void VillagerTalkTopics::updateEvBirthTurn() {
    Unk_0201d2d0_Out out;
    u8 b;
    Unk_0201d2d0_Vec v;
    if (_ZN13NpcActionCtrl9getActionEv(&actor->actionCtrl) == 0 && _ZN13NpcActionCtrl12isActionDoneEv(&actor->actionCtrl) != 0) {
        v = *(Unk_0201d2d0_Vec *)&actor->position;
        v.y += 0x2000;
        Camera_FocusOnPoint(&v);
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)sEvBirthTopicTable);
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        b = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
        _ZN12Unk_020d771019requestReopenWindowEv(this);
        unk_ec = (Unk_020238b0_Fn)((*(Unk_0201d2d0_Fn *)&__ptmf_null));
    }
}

void VillagerTalkTopics::playBirthdayBgm() {
    Bgm_ReleasePriority(0x12);
    Bgm_RequestSilence(0xc, 0, 0xb);
    Bgm_Request(0xd, 0x2f, 0x7f, 1);
}

void VillagerTalkTopics::stopBirthdayBgm() {
    Bgm_Release(0x2f);
    Bgm_RequestSilence(0xc, 0x60, 0x79);
}

void VillagerTalkTopics::selectEvBirthMsg1(Unk_0201d2d0_Out *out) {
    void *r7;
    Unk_0201d9e0_Rec *r4;
    s32 i;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 1, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    if (PlayerData_GetCurrent() != 0) {
        r7 = _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
    } else {
        r7 = 0;
    }
    if (actor->villagerData != 0) {
        r4 = (Unk_0201d9e0_Rec *)_ZN12VillagerData13getVillagerIdEv(actor->villagerData);
    } else {
        r4 = 0;
    }
    partnerMask = 0;
    partnerCount = 0;
    if ((u32)gSaveVillagers != 0 && r7 != 0 && _ZN8PlayerId7isValidEv(r7) != 0 && r4 != 0 && _ZN10VillagerId7isValidEv(r4) != 0) {
        for (i = 0; i < 8; i++) {
            void *v = SaveVillagers_Get(gSaveVillagers, i);
            if (v != 0 && _ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(v)) != 0) {
                Unk_0201d9e0_Rec *w = (Unk_0201d9e0_Rec *)_ZN12VillagerData13getVillagerIdEv(v);
                if (w->townId != r4->townId || memcmp(w->townName, r4->townName, 8) != 0 || w->species != r4->species) {
                    if (Villager_FindMemory(v, r7) != 0 && ((s32 (*)())_ZN14VillagerMemory13getFriendshipEv)() >= 0x40) {
                        partnerMask |= 1 << i;
                        partnerCount++;
                    }
                }
            }
        }
    }
    if (partnerCount == 1) {
        partnerMask = 0;
        partnerCount = 0;
    }
    closeFn = (Unk_020238b0_Fn)(data_020d7d70);
}

void VillagerTalkTopics::continueEvBirthFriends() {
    u8 buf[2];
    u16 h;
    Unk_0201d2d0_Out out;
    if (partnerCount >= 2) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvBirthTopicTable[1]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        buf[0] = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &buf[0], out.fileName);
    } else if (partnerCount == 1) {
        ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvBirthTopicTable[2]));
        if (selectFn) {
            (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
        }
        buf[1] = out.msgIndex;
        _ZN15TalkWindowState14setNextMessageEPhPv(window, &buf[1], out.fileName);
    } else {
        h = 0x3818;
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h, 0, 5, 0);
        ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7c88));
    }
}

void VillagerTalkTopics::giveEvBirthPresent() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    void *p;
    h = 0x3818;
    Pocket_AddItem(&h, 0);
    p = PlayerData_GetCurrent();
    _ZN12Unk_02097ff419setBirthdayTalkYearEj(p, (u8)(u32)Clock_GetYear());
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvBirthTopicTable[4]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectEvBirthMsg5(Unk_0201d2d0_Out *out) {
    s32 i;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 5, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    for (i = 0; i < 8; i++) {
        if ((partnerMask >> i) & 1) {
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, i)), 0);
            partnerMask &= ~(1 << i);
            partnerCount--;
            break;
        }
    }
}

void VillagerTalkTopics::selectEvBirthMsg6(Unk_0201d2d0_Out *out) {
    s32 i;
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 6, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    for (i = 0; i < 8; i++) {
        if ((partnerMask >> i) & 1) {
            _ZN16ActorTalkRequest19setVillagerNameSlotEjj(this, _ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(gSaveVillagers, i)), 0);
            partnerMask &= ~(1 << i);
            partnerCount--;
            break;
        }
    }
}

void VillagerTalkTopics::continueEvBirthMsg6() {
    u8 b;
    Unk_0201d2d0_Out out;
    ((VillagerTalk *)this)->setTopicFns((Unk_020d8938_Tbl *)((u8 *)&nZ::sEvBirthTopicTable[3]));
    if (selectFn) {
        (this->*(Unk_0201d2d0_OutFn)selectFn)(&out);
    }
    b = out.msgIndex;
    _ZN15TalkWindowState14setNextMessageEPhPv(window, &b, out.fileName);
}

void VillagerTalkTopics::selectEvBirthMsg7(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 7, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::continueEvBirthMsg7() {
    u16 h = 0x3818;
    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h, 0, 5, 0);
    ((VillagerTalk *)this)->setTaskDoneFn((*(Unk_020d8938_Fn *)&data_020d7d20));
}

void VillagerTalkTopics::selectEvBirthMsg2(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 2, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::openEvBirthChoice() {
    Unk_0201d568_S s;
    TalkChoiceTable_Init(this, (TalkChoiceTable *)(&s));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 0, 0x32, 0x32, (s32)((u8 *)&nZ::sEvBirthTopicTable[5]));
    TalkChoiceTable_Set(this, (TalkChoiceTable *)(&s), 1, 0x33, 0x33, (s32)((u8 *)&nZ::sEvBirthTopicTable[6]));
    s.count = 2;
    s.cancelIndex = -1;
    ((VillagerTalk *)this)->setupChoiceMenu(&s);
    ((VillagerTalk *)this)->setChoiceFn((*(Unk_020d8938_Fn *)&data_020d7d18));
    _ZN15TalkWindowState11openChoicesEi(window, 1);
}

void VillagerTalkTopics::selectEvBirthMsg3(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 3, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectEvBirthMsg4(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEvBirth.key, 1, 4, sTalkTopicEvBirth.variantCount);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
}

void VillagerTalkTopics::selectAiFall(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicAiFall.key, sTalkTopicAiFall.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    if (memory == 0) {
        noMemoryUpdate = 1;
    }
    onEndFn = (Unk_020238b0_Fn)(data_020d7990);
}

void VillagerTalkTopics::endAiFall() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
}

void VillagerTalkTopics::selectEtcHit(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEtcHit.key, sTalkTopicEtcHit.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7c68);
}

void VillagerTalkTopics::endEtcPushHit() {
    VillagerTalk_EnsureMemory((u8 *)this, (s32 *)(&memory), (s32 *)(&memoryIndex), (s32)actor->villagerData, 0);
}

void VillagerTalkTopics::selectEtcPush(Unk_0201d2d0_Out *out) {
    Talk_SelectTopicMessage(this, &topicFile, &topicIndex, 30, VillagerId_GetPersonality(_ZN12VillagerData13getVillagerIdEv(actor->villagerData)), sTalkTopicEtcPush.key, sTalkTopicEtcPush.variantCount, 0, 0);
    out->fileName = (u32)&topicFile;
    out->msgIndex = topicIndex;
    onEndFn = (Unk_020238b0_Fn)(data_020d7958);
}

s32 VillagerTalk::attrGiveItem() {
    u16 buf = itemFromPlayer;
    if (itemToPlayer != 0xfff1) {
        buf = itemToPlayer;
    }
    if (buf != 0xfff1) {
        s32 r4 = ((s32)PlayerData_GetCurrent());
        s32 r6 = ((s32 (*)())_ZN10PlayerData12getInventoryEv)();
        s32 r2 = ((s32 (*)())_ZN15PlayerInventory15findEmptyPocketEv)();
        if (r2 != -1) {
            _ZN15PlayerInventory9setPocketEPtij((void *)r6, &buf, r2, 0);
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv((void *)r4), &buf, 0, 1);
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &buf, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}

s32 VillagerTalk::attrShowLetter() {
    void *r4;
    if (unk_134_p != NULL) {
        r4 = _ZN12VillagerData9getLetterEv(((Unk_020d8938_Fc *)actor)->villagerData);
    } else {
        s32 r6 = ((s32)_ZN12VillagerData13getVillagerIdEv(((Unk_020d8938_Fc *)actor)->villagerData));
        MsgString25B l18;
        MsgString129 l78;
        MsgString33B l44;
        u8 v = 0;
        u8 b;
        u32 x14;
        r4 = sTalkLetter;
        if (unk_128_p != NULL) {
            v = _ZN14VillagerMemory15pickUnusedTopicEv(unk_128_p);
        }
        b = v;
        MailText_LoadLetter(&l18, &l78, &l44, &x14, &b, ((u8 *)"ap_secret"));
        Letter_FillVillagerToVillager(r4, &l18, &l78, &l44, x14, ((u8 *)""), r6, r6);
    }
    _ZN12Unk_020d771012setMenu12ArgEjj(this, r4, 0);
    ((Unk_020d7710 *)this)->openSubScene(5);
    return 1;
}

s32 VillagerTalk::attrPlayMemoryTune() {
    if (unk_134_p != NULL) {
        _ZN12Unk_0201442017requestPlayMelodyEP17Unk_02014420_Vec2(this, unk_134_p + 0x5c);
        return 1;
    }
    return 0;
}

s32 VillagerTalk::buyItemFromPlayer() {
    if (unk_19c_s > 0 && itemFromPlayer != 0xfff1) {
        PlayerData_GetCurrent();
        s32 r4 = ((s32 (*)())_ZN10PlayerData12getInventoryEv)();
        s32 r2 = Pocket_FindItem(&itemFromPlayer);
        if (r2 >= 0) {
            u16 buf[2];
            buf[0] = 0xfff1;
            _ZN15PlayerInventory9setPocketEPtij((void *)r4, buf, r2, 0);
            PlayerInventory_AddBells(r4, unk_19c_s, 1);
            Talk_GetMoneyItem(&buf[1], unk_19c_s);
            itemToPlayer = buf[1];
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
            this->setTaskDoneFn((*(void (VillagerTalk::**)())nZ::data_020d7bb8));
            return 1;
        }
    }
    return 0;
}

void VillagerTalk::receiveItem() {
    void *r4 = ((Unk_020d8938_Fc *)actor)->villagerData;
    _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
    if (r4 != NULL) {
        if (itemFromPlayer != 0xfff1) {
            Villager_AddReceivedItem(r4, &itemFromPlayer);
            if (unk_128_p != NULL) {
                _ZN14VillagerMemory15setReceivedItemEPt(unk_128_p, &itemFromPlayer);
            }
        }
    }
    _ZN15TalkWindowState11lockAdvanceEv(((void *)unk_3c));
}

s32 VillagerTalk::swapItemWithPlayer() {
    if (itemToPlayer != 0xfff1 && itemFromPlayer != 0xfff1) {
        s32 r4 = ((s32)PlayerData_GetCurrent());
        s32 r6 = ((s32 (*)())_ZN10PlayerData12getInventoryEv)();
        s32 r2 = Pocket_FindItem(&itemFromPlayer);
        if (r2 >= 0) {
            _ZN15PlayerInventory9setPocketEPtij((void *)r6, &itemToPlayer, r2, 0);
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv((void *)r4), &itemToPlayer, 0, 1);
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
            this->setTaskDoneFn((*(void (VillagerTalk::**)())nZ::data_020d7b90));
            return 1;
        }
    }
    return 0;
}

void VillagerTalk::receiveItemB() {
    void *r4 = ((Unk_020d8938_Fc *)actor)->villagerData;
    _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
    if (r4 != NULL) {
        if (itemFromPlayer != 0xfff1) {
            Villager_AddReceivedItem(r4, &itemFromPlayer);
            if (unk_128_p != NULL) {
                _ZN14VillagerMemory15setReceivedItemEPt(unk_128_p, &itemFromPlayer);
            }
        }
    }
    _ZN15TalkWindowState11lockAdvanceEv(((void *)unk_3c));
}

s32 VillagerTalk::sellItemToPlayer() {
    if (unk_19c_s > 0 && itemToPlayer != 0xfff1) {
        s32 r6 = ((s32)PlayerData_GetCurrent());
        s32 r4 = ((s32 (*)())_ZN10PlayerData12getInventoryEv)();
        s32 r2 = ((s32 (*)())_ZN15PlayerInventory15findEmptyPocketEv)();
        if (r2 >= 0) {
            _ZN15PlayerInventory9setPocketEPtij((void *)r4, &itemToPlayer, r2, 0);
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv((void *)r6), &itemToPlayer, 0, 1);
            if (itemToPlayerIsReceived == 1) {
                Villager_RemoveReceivedItem(((Unk_020d8938_Fc *)actor)->villagerData, &itemToPlayer);
            }
            PlayerInventory_AddBells(r4, -unk_19c_s, 1);
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
            this->setTaskDoneFn((*(void (VillagerTalk::**)())nZ::data_020d7f38));
            return 1;
        }
    }
    return 0;
}

void VillagerTalk::showMoneyItem() {
    u16 tmp;
    Talk_GetMoneyItem(&tmp, unk_19c_s);
    itemFromPlayer = tmp;
    _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &itemFromPlayer, 0, 5, 0);
    _ZN15TalkWindowState11lockAdvanceEv(((void *)unk_3c));
}

s32 VillagerTalk::giveItemToPlayer() {
    if (itemToPlayer != 0xfff1) {
        s32 r4 = ((s32)PlayerData_GetCurrent());
        s32 r6 = ((s32 (*)())_ZN10PlayerData12getInventoryEv)();
        s32 r2 = ((s32 (*)())_ZN15PlayerInventory15findEmptyPocketEv)();
        if (r2 >= 0) {
            _ZN15PlayerInventory9setPocketEPtij((void *)r6, &itemToPlayer, r2, 0);
            Catalog_SetItem(_ZN10PlayerData10getCatalogEv((void *)r4), &itemToPlayer, 0, 1);
            if (itemToPlayerIsReceived == 1) {
                Villager_RemoveReceivedItem(((Unk_020d8938_Fc *)actor)->villagerData, &itemToPlayer);
            }
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &itemToPlayer, 0, 5, 0);
            return 1;
        }
    }
    return 0;
}

s32 VillagerTalk::setHiraganaOn() {
    PlayerOptions_SetHiragana(1);
    PlayerOptions_Commit();
    return 1;
}

s32 VillagerTalk::setHiraganaOff() {
    PlayerOptions_SetHiragana(0);
    PlayerOptions_Commit();
    return 1;
}

s32 VillagerTalk::attrOpenBirthdayEntry() {
    _ZN12Unk_020d771015setSubSceneKindEjj(this, 0x32, 0);
    ((Unk_020d7710 *)this)->openSubScene(2);
    this->setTaskDoneFn((*(void (VillagerTalk::**)())nZ::data_020d79a0));
    return 1;
}

void VillagerTalk::setConstellationSlots() {
    u8 buf[2];
    PlayerData_GetCurrent();
    u8 *p = _ZN12Unk_02097ff411getBirthdayEv();
    u32 r = Date_GetStarSign(p[1], p[0]);
    _ZN16ActorTalkRequest12setMonthSlotEjj(this, p[1], 0);
    _ZN16ActorTalkRequest10setDaySlotEjj(this, p[0], 1);
    buf[0] = r;
    buf[1] = 0;
    _ZN16ActorTalkRequest17setSlotFromStringEjjj(this, 2, buf, ((u8 *)"st_constellation"), buf + 1);
}

s32 VillagerTalk::runCustomFn0() {
    if (unk_168_s != 0) {
        return (this->*unk_168_s)();
    }
    return 0;
}

s32 VillagerTalk::runCustomFn1() {
    if (unk_170_s != 0) {
        return (this->*unk_170_s)();
    }
    return 0;
}

s32 VillagerTalk::runCustomFn2() {
    if (unk_178_s != 0) {
        return (this->*unk_178_s)();
    }
    return 0;
}

s32 VillagerTalk::runCustomFn3() {
    if (unk_180_s != 0) {
        return (this->*unk_180_s)();
    }
    return 0;
}

s32 VillagerTalk::runCustomFn4() {
    if (unk_188_s != 0) {
        return (this->*unk_188_s)();
    }
    return 0;
}

s32 VillagerTalk::runMsgAttrHandler(u32 idx) {
    static Unk_020d8938_FnS tbl[17] = {
        0, (*(s32 (VillagerTalk::**)())nZ::data_020d7b28), 0, 0, 0, 0, 0, (*(s32 (VillagerTalk::**)())nZ::data_020d7b00),
        0, 0, 0, 0, (*(s32 (VillagerTalk::**)())nZ::data_020d7a20), (*(s32 (VillagerTalk::**)())nZ::data_020d7af0), (*(s32 (VillagerTalk::**)())nZ::data_020d7d50),
        (*(s32 (VillagerTalk::**)())nZ::data_020d7cf0), (*(s32 (VillagerTalk::**)())nZ::data_020d7df8)};
    if (idx < 17) {
        if (tbl[idx] != 0) {
            return (this->*tbl[idx])();
        }
    }
    return 0;
}

namespace nZ {
extern "C" {
Unk_021be8c0 sApSubTopics[13];
void * data_020d79c0[2] = {
    (void *)_ZN18VillagerTalkTopics19onRequestItemPickedEv, 0,
};
const void *const sTalkTopicQ01Pwin2[2] = {
    (void *)sTalkKeyQ01Pwin2, (void *)0x1,
};
const void *const sTalkTopicQStart[2] = {
    (void *)sTalkKeyQStart, (void *)0x3,
};
const void *const sTalkTopicApItem[2] = {
    (void *)sTalkKeyApItem, (void *)0x2,
};
const void *const sTalkTopicQItem[2] = {
    (void *)sTalkKeyQItem, (void *)0x3,
};
char sTalkKeyQ01Nwin[9] = "q01_nwin";
char sTalkKeyApItem[8] = "ap_item";
const void *const sTalkTopicAiBee[2] = {
    (void *)sTalkKeyAiBee, (void *)0x3,
};
const void *const sTalkTopicTsuClAct[2] = {
    (void *)sTalkKeyTsuClAct, (void *)0x4,
};
const void *const sTalkTopicQ02Pay[2] = {
    (void *)sTalkKeyQ02Pay, (void *)0x3,
};
char sTalkKeyAiAnger[9] = "ai_anger";
void * data_020d7a78[2] = {
    (void *)_ZN23VillagerTalkRumorTopics24pickMemoryWithComplimentEPPvi, 0,
};
Unk_021be8c0 sEvKaraokeTopicTable[9];
void * data_020d7e40[2] = {
    (void *)_ZN18VillagerTalkTopics18cancelRequestChainEv, 0,
};
void * data_020d7e28[2] = {
    (void *)_ZN18VillagerTalkTopics17compareCatchPriceEv, 0,
};
char sTalkKeyAiShop3[9] = "ai_shop3";
u32 sTalkTopicQThanksDefault[2] = {
    0x00000000, 0x00000003,
};
void * data_020d7de0[2] = {
    (void *)_ZN25VillagerTalkHolidayTopics17updateEvBirthMoveEv, 0,
};
char sTalkKeyAiPoison[10] = "ai_poison";
const void *const sTalkTopicQ12FullC[2] = {
    (void *)sTalkKeyQ12Full, (void *)0x2,
};
const void *const sTalkTopicEtcPush[2] = {
    (void *)sTalkKeyEtcPush, (void *)0x5,
};
char sTalkKeyAiRain2[9] = "ai_rain2";
const void *const sTalkTopicEvArbeit[2] = {
    (void *)sTalkKeyEvArbeit, (void *)0x1,
};
char sTalkKeyTsuItem[9] = "tsu_item";
char sTalkKeyAiRun[7] = "ai_run";
void * data_020d7b20[2] = {
    (void *)_ZN18VillagerTalkTopics18onNloseCatchPickedEv, 0,
};
void * data_020d7d28[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
}
}

void VillagerTalk::onMessageStart(u32 a) {
    if (runMsgAttrHandler(a) == 0) {
        if (unk_b4_a != 0) {
            (this->*unk_b4_a)(a);
            unk_b4_a = 0;
        }
    }
}

void VillagerTalk::onMessageEnd(u32 a) {
    volatile u8 v = *((u8 *)((void *)unk_3c) + 0x19f7);
    if (runMsgAttrHandler(a) == 0) {
        if (unk_156 != 0) {
            Snd_PlaySe();
            unk_156 = 0;
        }
        u8 w = v;
        if (w == (*(u8 *)&gTalkMsgIndexNone)) {
            if (unk_bc_a != 0) {
                (this->*unk_bc_a)(a);
            }
        } else if (w == gTalkMsgIndexEnd) {
            if (unk_c4_a != 0) {
                (this->*unk_c4_a)(a);
                unk_c4_a = 0;
            }
        }
    }
    if (v == gTalkMsgIndexEnd) {
        if (unk_128_p != NULL) {
            Villager_UpdateImpression(((Unk_020d8938_Fc *)actor)->villagerData, unk_128_p, 0);
            if (memoryIndex != -1) {
                VillagerSync_Impression(((Unk_020d8938_Fc *)actor)->villagerData, memoryIndex, _ZN14VillagerMemory13getImpressionEv(unk_128_p));
            }
            if (((Unk_020d8938_Fc *)actor)->villagerData != NULL) {
                Villager_UpdateVisitorRecord(((Unk_020d8938_Fc *)actor)->villagerData, 0);
            }
        }
        if (unk_130_p != NULL) {
            if (((Unk_020d8938_Fc *)((VillagerTalk *)((Unk_020d8938_Fc *)actor))->getPartner()) != NULL) {
                Villager_UpdateImpression(((Unk_020d8938_Fc *)((VillagerTalk *)((Unk_020d8938_Fc *)actor))->getPartner())->villagerData, unk_130_p, 0);
            }
        }
    }
}

extern "C" void TalkChoiceTable_Init(void *a, TalkChoiceTable *t) {
    for (s32 i = 0; i < 5; i++) {
        t->range[i][0] = 0;
        t->range[i][1] = 0;
        t->val[i] = 0;
    }
    t->count = 0;
    t->cancelIndex = -1;
}

extern "C" void TalkChoiceTable_Set(void *a, TalkChoiceTable *t, u32 i, u8 lo, u8 hi, s32 val) {
    t->range[i][0] = lo;
    t->range[i][1] = hi;
    t->val[i] = val;
}

extern "C" void TalkChoiceTable_SetRange(void *a, TalkChoiceTable *t, u32 i, const u8 *r, s32 val) {
    TalkChoiceTable_Set((void *)a, t, i, r[0], r[1], val);
}

void VillagerTalk::clearChoiceValues() {
    for (s32 i = 0; i < 5; i++) {
        choiceValues[i] = 0;
    }
}

void VillagerTalk::setupChoiceMenu(void *t_) {
    TalkChoiceTable *t = (TalkChoiceTable *)t_;
    void *h = _ZN16ActorTalkRequest13getChoiceListEv(this);
    if (h != NULL) {
        clearChoiceValues();
        _ZN10ChoiceList5resetEii(h, t->count, t->cancelIndex);
        for (s32 i = 0; i < t->count; i++) {
            u8 r = t->range[i][0] + Random_GlobalBelow(t->range[i][1] - t->range[i][0] + 1);
            _ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, i, &r, 0, gTalkMsgIndexNone, (const char *)0, 0);
            choiceValues[i] = t->val[i];
        }
        _ZN10ChoiceList9loadTextsEv(h);
    }
}

void VillagerTalk::onChoice(u32 a) {
    if (unk_cc_2) {
        void *h = _ZN16ActorTalkRequest13getChoiceListEv(this);
        s32 x;
        if (h != NULL) {
            x = _ZN10ChoiceList9getResultEv(h);
        } else {
            x = -1;
        }
        (this->*unk_cc_2)(a, x);
        unk_cc_2 = *(Unk_020d8938_Fn2 *)__ptmf_null;
    }
}

void VillagerTalk::setPartner(u32 v) { ((VillagerActor *)this)->talkPartnerId = v; }

u32 VillagerTalk::getPartner() { return ((VillagerActor *)this)->talkPartnerId; }

void VillagerTalk::setInvitedByPartner(u8 v) { ((VillagerActor *)this)->invitedByPartner = v; }

u8 VillagerTalk::isInvitedByPartner() { return ((VillagerActor *)this)->invitedByPartner; }

s32 VillagerTalk::vfunc_144() { return 0; }

s32 VillagerTalk::vfunc_148() { return 0; }

s32 VillagerTalk::vfunc_14c() { return 0; }

BOOL VillagerTalk::hasPartner() {
    if (((VillagerActor *)this)->talkPartnerId != 0) {
        return TRUE;
    }
    return FALSE;
}

void VillagerTalk::refreshEventKind() {
    ((VillagerActor *)this)->eventKind = 0xb;
    if (_ZN11CommManager12isSlotActiveEi((*(CommManager * *)&gCommManager), (*(CommManager * *)&gCommManager)->myAid) == 0) {
        ((VillagerActor *)this)->eventKind = VillagerEvent_GetTodayIndex();
    }
}

u8 VillagerTalk::getEventKind() { return ((VillagerActor *)this)->eventKind; }

extern "C" void *VillagerMood_Construct(void *p) {
    func_020f440c(p);
    return p;
}

extern "C" void *VillagerMood_Destruct(void *p) {
    func_020f43fc(p);
    return p;
}

void VillagerMood::reset() {
    active = 0;
    currentMood = 5;
    effectMood = 5;
    effectFrame = 0;
    effectFn = *(Unk_0201c078_State *)__ptmf_null;
    clearPending();
    applyRequested = 0;
    effectsOn = 0;
}

void VillagerMood::start() {
    reset();
    _ZN12Unk_02003c3013func_02003eccEv(this);
    effectsOn = 1;
    active = 1;
}

void VillagerMood::stop() {
    if (isActive()) {
        _ZN12Unk_02003c3013func_02003e50Ev(this);
    }
    active = 0;
}

BOOL VillagerMood::isActive() {
    if (active != 0) {
        return TRUE;
    }
    return FALSE;
}

void VillagerMood::setMoodAnimation(VillagerTalk *s, u32 mode) {
    s32 r = (s32)((VillagerActor *)s)->vfunc_64();
    if (mode == 4 && r != 0) {
        ((s32 (*)())_ZN12VillagerData13getVillagerIdEv)();
        s32 t = ((s32 (*)())VillagerId_GetPersonality)();
        if (t == 0 || t == 3) {
            mode = 3;
        } else {
            mode = 2;
        }
    }
    _ZN14NpcMoveAnimSet12setStandAnimEi(((void *)((u8 *)(s) + (0x2a0))), sMoodAnimIds[mode]);
    _ZN14NpcMoveAnimSet11setWalkAnimEi(((void *)((u8 *)(s) + (0x2a0))), sMoodAnimNextIds[mode]);
}

void VillagerMood::clearPending() {
    pendingMood = 5;
    pendingTime = 0;
}

void VillagerMood::addMood(u32 a, s32 b) {
    if (_ZN11CommManager12isSlotActiveEi((*(CommManager * *)&gCommManager), (*(CommManager * *)&gCommManager)->myAid) == 0) {
        if (a < 5) {
            u16 t = b * 0x4b0;
            if (a == pendingMood) {
                pendingTime = pendingTime + t;
            } else {
                pendingMood = a;
                pendingTime = t;
            }
        }
    }
}

void VillagerMood::requestApply() {
    if (_ZN11CommManager12isSlotActiveEi((*(CommManager * *)&gCommManager), (*(CommManager * *)&gCommManager)->myAid) == 0) {
        applyRequested = 1;
    }
}

void VillagerMood::playMoodEffect(VillagerTalk *s, u32 a, u32 b) {
    if (effectsEnabled()) {
        u32 v[3];
        s16 h;
        v[0] = *(u32 *)((void *)((u8 *)(s) + (0x478)));
        v[1] = *(u32 *)((void *)((u8 *)(s) + (0x47c)));
        v[2] = *(u32 *)((void *)((u8 *)(s) + (0x480)));
        h = *(s16 *)((void *)((u8 *)(s) + (0x8e)));
        func_02003e70(this, b, 0x7f, 0);
        Effect_Create(a, v, &h, 0);
    }
}

void VillagerMood::updateSoundPos(VillagerTalk *s) {
    Unk_0201c574_Vec v;
    Unk_0201c574_Vec *p = (Unk_0201c574_Vec *)((void *)((u8 *)(s) + (0x5c)));
    v = *p;
    _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(this, &v);
}

void VillagerMood::enableEffects() { effectsOn = 1; }

void VillagerMood::disableEffects() { effectsOn = 0; }

BOOL VillagerMood::effectsEnabled() {
    if (effectsOn != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL VillagerMood::isMoodAnim(VillagerTalk *s) {
    s32 v = _ZN12Unk_02015b8c9getAnimIdEj(((void *)((u8 *)(s) + (0x334))), 0);
    const u32 *p = sMoodAnimIds;
    const u32 *q = sMoodAnimNextIds;
    for (s32 i = 0; i < 5; p++, q++, i++) {
        if (v == *p || v == *q) {
            return TRUE;
        }
    }
    return FALSE;
}

void VillagerMood::playMood1EffectA(VillagerTalk *s) { playMoodEffect(s, 0x5a, 0x7b); }

void VillagerMood::playMood1EffectB(VillagerTalk *s) { playMoodEffect(s, 0x5b, 0x7b); }

BOOL VillagerMood::beginMood1Effects(VillagerTalk *s) {
    effectFrame = 0;
    effectFn = (*(void (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7e80);
    return TRUE;
}

void VillagerMood::updateMood1Effects(VillagerTalk *s) {
    if (isMoodAnim(s)) {
        if (effectFrame == 0) {
            playMood1EffectA(s);
        } else if (effectFrame == 0x14) {
            playMood1EffectB(s);
        }
        effectFrame = effectFrame + 1;
        if (effectFrame >= 0x28) {
            effectFrame = 0;
        }
    }
}

void VillagerMood::playMood2Effect(VillagerTalk *s) { playMoodEffect(s, 0x5c, 0x83); }

BOOL VillagerMood::beginMood2Effects(VillagerTalk *s) {
    effectFrame = 0;
    effectFn = (*(void (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7e08);
    return TRUE;
}

void VillagerMood::updateMood2Effects(VillagerTalk *s) {
    if (isMoodAnim(s)) {
        if (effectFrame == 0) {
            playMood2Effect(s);
        }
        effectFrame = effectFrame + 1;
        if (effectFrame >= 0x14) {
            effectFrame = 0;
        }
    }
}

void VillagerMood::playMood3Effect(VillagerTalk *s) { playMoodEffect(s, 0x62, 0x7f); }

BOOL VillagerMood::beginMood3Effects(VillagerTalk *s) {
    effectFrame = 0;
    effectFn = (*(void (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7ad0);
    return TRUE;
}

void VillagerMood::updateMood3Effects(VillagerTalk *s) {
    if (isMoodAnim(s)) {
        if (effectFrame == 0) {
            playMood3Effect(s);
        }
        effectFrame = effectFrame + 1;
        if (effectFrame >= 0xe) {
            effectFrame = 0;
        }
    }
}

BOOL VillagerMood::isMoodAnimStart(VillagerTalk *s) {
    s32 v = _ZN12Unk_02015b8c9getAnimIdEj(((void *)((u8 *)(s) + (0x334))), 0);
    const u32 *p = sMoodAnimIds;
    for (s32 i = 0; i < 5; p++, i++) {
        if (v == *p) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL VillagerMood::startMoodAnim(VillagerTalk *s, u32 idx) {
    static Unk_0201c078_Fn tbl[5] = {
        *(Unk_0201c078_Fn *)__ptmf_null,
        (*(BOOL (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7e68),
        (*(BOOL (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7a38),
        (*(BOOL (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7b68),
        (*(BOOL (VillagerMood::**)(VillagerTalk *s))nZ::data_020d7bf0),
    };
    if (idx < 5) {
        if (tbl[idx]) {
            if ((this->*tbl[idx])(s)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

namespace nZ {
extern "C" {
void * data_020d7f10[2] = {
    (void *)_ZN23VillagerTalkRumorTopics13selectTsuHomeEv, 0,
};
const void *const sTalkTopicTsuFoHint[2] = {
    (void *)sTalkKeyTsuFoHint, (void *)0x3,
};
const void *const sTalkTopicAiIndoor[2] = {
    (void *)sTalkKeyAiIndoor, (void *)0x3,
};
const void *const sTalkTopicTsuFuAct[2] = {
    (void *)sTalkKeyTsuFuAct, (void *)0x4,
};
void * data_020d7d00[2] = {
    (void *)_ZN18VillagerTalkTopics25tryAddActiveRequestChoiceEPvS0_, 0,
};
char sTalkKeyQ07Scold[10] = "q07_scold";
const void *const sTalkTopicEvGardeniing[2] = {
    (void *)sTalkKeyEvGardeniing, (void *)0x3,
};
const void *const sTalkTopicQError2[2] = {
    (void *)sTalkKeyQError2, (void *)0x2,
};
const u8 sTsuTopicWeights[14] = {
    0x08, 0x0c, 0x04, 0x04, 0x0c, 0x06, 0x06, 0x08, 0x06, 0x06, 0x06, 0x06, 0x06, 0x0a,
};
void * data_020d7950[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicAiPersis[2] = {
    (void *)sTalkKeyAiPersis, (void *)0x3,
};
void * data_020d7a18[2] = {
    (void *)_ZN18VillagerTalkTopics13selectApNicknEv, 0,
};
char sTalkKeyQ07Show[9] = "q07_show";
void * data_020d7fd8[2] = {
    (void *)_ZN12VillagerTalk14setHiraganaOffEv, 0,
};
char sTalkKeyQPreitem[10] = "q_preitem";
void * data_020d7bb8[2] = {
    (void *)_ZN12VillagerTalk11receiveItemEv, 0,
};
const void *const sTalkTopicQPreitem[2] = {
    (void *)sTalkKeyQPreitem, (void *)0x3,
};
char sTalkKeyQ04Req37[11] = "q04_req3_7";
void * data_020d7f28[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuClHintEv, 0,
};
const u8 data_020c74f4[2] = {
    0x1d, 0x1d,
};
char sTalkKeyTsuClAct[11] = "tsu_cl_act";
const void *const sTalkTopicApHabit[2] = {
    (void *)sTalkKeyApHabit, (void *)0x2,
};
const void *const sTalkTopicTsuFlAct[2] = {
    (void *)sTalkKeyTsuFlAct, (void *)0x4,
};
void * data_020d7b30[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuEventEv, 0,
};
void * data_020d78f8[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicQ02Nwin[2] = {
    (void *)sTalkKeyQ02Nwin, (void *)0x3,
};
void * data_020d7df0[2] = {
    (void *)_ZN18VillagerTalkTopics15playBirthdayBgmEv, 0,
};
void * data_020d7af0[2] = {
    (void *)_ZN12VillagerTalk12runCustomFn1Ev, 0,
};
const void *const sTalkTopicAiRain1[2] = {
    (void *)sTalkKeyAiRain1, (void *)0x3,
};
void * data_020d7a98[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
const void *const sTalkTopicTsuSpot[2] = {
    (void *)sTalkKeyTsuSpot, (void *)0x3,
};
void * data_020d7960[2] = {
    (void *)_ZN30VillagerTalkRequestReplyTopics14runChosenTopicEP16Unk_02027a34_Outj, 0,
};
void * data_020d7e68[2] = {
    (void *)_ZN12VillagerMood17beginMood1EffectsEP12VillagerTalk, 0,
};
u32 sInsectSlotFlags[2];
char sTalkKeyQYes[6] = "q_yes";
char sTalkKeyTsuInHint[12] = "tsu_in_hint";
const void *const sTalkTopicTsuDrama[2] = {
    (void *)sTalkKeyTsuDrama, (void *)0x3,
};
char sVillagerClothMaterialName[2] = "w";
const u8 sLeaveChoiceMsgRange[2] = {
    0x0a, 0x13,
};
void * data_020d7bf0[2] = {
    (void *)_ZN12VillagerMood17beginMood2EffectsEP12VillagerTalk, 0,
};
u32 sVillagerTexturePathBuf[8];
char sTalkKeyTsuMove2[10] = "tsu_move2";
const s8 sDangerousInsects[2] = {
    55, 54,
};
char sTalkKeyApMail[8] = "ap_mail";
const void *const sTalkTopicTsuNoAct[2] = {
    (void *)sTalkKeyTsuNoAct, (void *)0x4,
};
void * data_020d7ec8[2] = {
    (void *)_ZN30VillagerTalkRequestStartTopics23registerRequestDeferredEv, 0,
};
void * data_020d7af8[2] = {
    (void *)_ZN18VillagerTalkTopics14selectTsuFiActEv, 0,
};
const void *const sTalkTopicTsuStar[2] = {
    (void *)sTalkKeyTsuStar, (void *)0x2,
};
const u8 data_020c7518[5] = {
    0x03, 0x02, 0x05, 0x00, 0x01,
};
void * data_020d7fa8[2] = {
    (void *)_ZN18VillagerTalkTopics18selectTsuHobbyHintEv, 0,
};
char sTalkKeyEvInsect[10] = "ev_insect";
char sTalkKeyTsuFoHint[12] = "tsu_fo_hint";
void * data_020d7a28[2] = {
    (void *)_ZN23VillagerTalkHobbyTopics12endEvFishingEv, 0,
};
char sTalkKeyQ05Talk12[12] = "q05_talk1_2";
void * sTalkKeysQReq[5] = {
    (void *)sTalkKeysQ01Req, (void *)sTalkKeysQ02Req, (void *)sTalkKeysQ03Req, (void *)sTalkKeysQ04Req,
    (void *)sTalkKeysQ05Req,
};
void * data_020d7a58[2] = {
    (void *)_ZN18VillagerTalkTopics19onRequestItemPickedEv, 0,
};
const u8 data_020c74f0[2] = {
    0x2a, 0x2a,
};
void * data_020d7d60[2] = {
    (void *)_ZN25VillagerTalkKaraokeTopics19waitEvKaraokeActionEv, 0,
};
void * data_020d7c88[2] = {
    (void *)_ZN18VillagerTalkTopics18giveEvBirthPresentEv, 0,
};
char sTalkKeyQ06Open2[10] = "q06_open2";
char sTalkKeyAiMfirst[10] = "ai_mfirst";
void * data_020d7f40[2] = {
    (void *)_ZN18VillagerTalkTopics15selectTsuFiHintEv, 0,
};
const u32 sTalkErrandItemSpecs[6] = {
    0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000004, 0x00000000,
};
}
}

void VillagerMood::updateMoodAnim(VillagerTalk *s, s32 next) {
    if (next != effectMood && effectMood != 5) {
        effectFn = *(Unk_0201c078_State *)__ptmf_null;
        effectMood = 5;
    } else if (!effectFn) {
        switch (_ZN12Unk_02015b8c9getAnimIdEj(((void *)((u8 *)(s) + (0x334))), 0) - 0xe5) {
        case 0:
        case 1:
            if (next == 1) {
                if (startMoodAnim(s, 1)) {
                    effectMood = next;
                }
            }
            break;
        case 2:
        case 3:
            if (next == 2 || next == 4) {
                if (startMoodAnim(s, 2)) {
                    effectMood = next;
                }
            }
            break;
        case 4:
        case 5:
            if ((u8)(next + 0xfd) <= 1) {
                if (startMoodAnim(s, 3)) {
                    effectMood = next;
                }
            }
            break;
        }
    }
    if (effectFn) {
        (this->*effectFn)(s);
    }
}

void VillagerMood::update(VillagerTalk *s) {
    void *a = Villager_GetState((void *)(*(u32 *)((void *)((u8 *)(s) + (0x82c)))));
    u32 b = ((s32 (*)())VillagerState_GetMood)();
    if (isActive()) {
        if (_ZN11CommManager12isSlotActiveEi((*(CommManager * *)&gCommManager), (*(CommManager * *)&gCommManager)->myAid) == 0) {
            if (_ZN11NpcTalkCtrl6isBusyEv(((void *)((u8 *)(s) + (0x618))))) {
                b = 0;
                setMoodAnimation(s, b);
            } else {
                if (applyRequested != 0) {
                    u32 t = pendingMood;
                    if (t < 5) {
                        if (b != 0 && b == t) {
                            VillagerState_AddMoodTimer(a, pendingTime);
                        } else {
                            VillagerState_SetMoodTimer(a, pendingTime);
                        }
                        VillagerState_SetMood(a, pendingMood);
                        b = pendingMood;
                    }
                    applyRequested = 0;
                    clearPending();
                }
                VillagerState_TickMoodTimer(a);
                if (b != 0) {
                    if (VillagerState_GetMoodTimer(a) == 0) {
                        b = 0;
                        VillagerState_SetMood(a, b);
                    }
                }
                setMoodAnimation(s, b);
            }
            s32 v = _ZN12Unk_02015b8c9getAnimIdEj(((void *)((u8 *)(s) + (0x334))), 0);
            if (v != _ZN11NpcAnimCtrl13resolveAnimIdEiPv(((void *)((u8 *)(s) + (0x334))), 0, ((void *)((u8 *)(s) + (0x2a0))))) {
                if (isMoodAnimStart(s)) {
                    _ZN13NpcActionCtrl13requestActionEjiiissiitt(((void *)((u8 *)(s) + (0x564))), 0, *(u32 *)((void *)((u8 *)(s) + (0x578))), 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            }
            updateMoodAnim(s, b);
            currentMood = b;
            updateSoundPos(s);
        }
    }
}

extern "C" void NpcActor_JointCalcLayer3Cb(Unk_0201c050_Obj *p) {
    void *q = p->unk_04->unk_2c;
    if (q != NULL) {
        _ZN19ThreeLayerAnimModel20onJointCalcPreLayer3EP16Unk_02053a54_Msg((u8 *)q + 0xec, p);
    }
    p->unk_24 = (u32)NpcActor_OnJointCalc;
    p->unk_92 = 2;
}

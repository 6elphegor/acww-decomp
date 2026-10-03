#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

struct Unk_0201bc1c;
class Unk_020d77a4;
class SpNpcCopper;
class SpNpcCopperTalk;

struct Unk_ov048_Vec {
    s32 unk_00, unk_04, unk_08;
};

struct Unk_ov048_Vec_Loc : Unk_ov048_Vec {
    Unk_ov048_Vec_Loc() {}
};

struct Unk_ov048_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov048_Owner {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov048_0225b278_Vec {
    s32 x, y, z;
};

struct Unk_ov048_0225b278_Ent {
    u8 pad_00[0x5c];
    Unk_ov048_0225b278_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};

struct Unk_ov048_0225ae04_Row {
    const void *name;
    u8 id;
};

struct Unk_ov048_Rec {
    u8 pad_00[4];
    s32 unk_04;
};
struct Unk_ov048_0225ae04_Out {
    const void *unk_00;
    u8 unk_04;
};
// Two-step storage for the three model/sequence name pointers (their strings are named arrays below).
extern "C" {
extern char sSpNpcCopperSequence4Key[];
extern char sSpNpcCopperKey[];
extern char sSpNpcCopperModelPath[];
extern char sSpNpcCopperTexturePath[];
extern void *sSpNpcCopperMsgKey;
extern void *sSpNpcCopperTexturePathPtr;
extern void *sSpNpcCopperModelPathPtr;
extern const u8 sCopperWifiStartMsgs[4];
extern const Unk_ov048_Vec sCopperGateCheckPos;
extern const Unk_ov048_Vec sCopperTurnBackPos;
extern const Unk_ov048_Vec sCopperSendOffWalkPos;
extern const Unk_ov048_Vec sCopperSendOffExitPos;
extern const Unk_ov048_Vec sCopperArrivalWalkPos;
extern const Unk_ov048_Vec sCopperDepartWalkPos;
extern Unk_ov048_Global *gCommManager;
extern u8 gScreenTransition;
extern u16 data_020c6cc8;
extern u8 data_021d7352[];
void _ZN15TalkWindowState14setNextMessageEPhPv(void *, u8 *, void *);
void _ZN15TalkWindowState7setSlotEiPv(void *, s32, void *);
void _ZN15TalkWindowState11lockAdvanceEv(void *);
s32 Net_GetMode();
s32 Net_GetError();
s32 Net_GetLastErrorCode();
void func_020ea72c();
void _ZN11MsgString25C1Ev(void *);
void _ZN11MsgString25D1Ev(void *);
void String_FormatNumber(void *, s32, s32, s32, s32, s32);
void _ZN12Unk_020dd38cC2Ev(void *);
void _ZN12Unk_020dd374C2Ev(void *);
void _ZN12Unk_020e1c64C1Ev(void *);
void _ZN12Unk_020e1c4cC1Ev(void *);
void _ZN12Unk_020e1c4cD1Ev(void *);
void _ZN12Unk_020e1c64D1Ev(void *);
void _ZN12Unk_020dd374D1Ev(void *);
void _ZN12Unk_020dd38cD1Ev(void *);
BOOL func_020a78a4(void *, const void *, s32);
void _ZN9MsgString11fromEncodedEP13EncodedStringii(void *, void *, s32, s32);
BOOL func_020e7500(void *);
s32 func_020e77cc(s32, s32, s32);
void * _ZN10PlayerData15getWifiUserDataEv(...);
void * PlayerWifiData_GetOwnFriendData(void *);
void * DwcFriendData_GetBytes(void *);
void * PlayerWifiData_GetDwcUserData(...);
BOOL Save_WritePlayerWifiData();
BOOL func_020ea3e8(void *);
void func_020ea3d0(void *, void *);
s32 Net_WifiFindFriend(s32);
s32 Net_WifiConnectToHost(s32);
s32 func_020ea598(s32);
BOOL Net_WifiShutdownStepExt(s32);
BOOL func_0206ed18();
s32 func_0206ed38();
u8 * _ZN11CommManager15getWifiUserDataEv(void *);
u8 * _ZN11CommManager17getWifiFriendListEv(void *);
void * PlayerData_GetCurrent();
s32 _ZN10PlayerData8getIndexEv();
void GameStats_ApplyDownload();
void AxMail_ApplyMail();
void AxMail_ApplyBbs();
void Wifi_StoreFriendList();
BOOL Save_WritePlayerFriendList();
BOOL func_020a0828();
BOOL func_020a084c();
void SpNpcMissing1_ChangeAct05();
s32 SpNpcMissing1_ResetAct();
void SaveManager_RequestAct13();
BOOL GameStats_PollDownload();
BOOL GameStats_Download();
BOOL GameStats_PollUpload();
BOOL GameStats_Upload();
BOOL AxMail_PollBbs();
BOOL AxMail_DownloadBbs();
BOOL AxMail_PollMail();
BOOL Comm_SendEmpty();
s32 func_020eae78(s32);
void * Net_GetScanResults(s32);
s32 func_020ea6c8(void *);
void * func_020ea6f4(void *);
void Net_ConnectToParent(void *);
void MI_CpuCopy8(void *, void *, u32);
s32 func_02133150(s32, s32);
BOOL AxMail_DownloadMail();
s32 Net_PollConnected(...);
s32 Net_GetWifiFriendList(s32);
BOOL func_020a032c();
s32 _ZN10ChoiceList9getResultEv(void *);
void * _ZN15TalkWindowState13getChoiceListEv(void *);
s32 func_ov004_02225ebc();
s32 func_02073340();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *, s32);
BOOL _ZN11CommManager8isOnlineEv(void *);
BOOL _ZN11CommManager7isMyAidEj(void *, s32);
BOOL _ZN11CommManager12isSlotActiveEi(void *, s32);
void NetOverlay_LoadWifi();
void NetOverlay_Restore();
void PlayerWifiData_Create(void *);
s32 func_020e9d94(void *);
s32 func_020ea3dc(void *);
s64 func_020ea3c4(...);
void _ZN11CommManager12setErrorModeEj(void *, s32);
s32 _ZN15TalkWindowState13func_02067990Ev(void *);
s32 _ZN15TalkWindowState13unlockAdvanceEv(void *);
s32 _ZN15TalkWindowState13func_0206799cEv(void *, s32);
s32 func_ov004_02225e9c();
s32 func_ov004_02225ee0();
s32 func_0202e148();
void _ZN12Unk_02097ff413func_0209801cEj(void *, s32);
u32 Clock_GetTimeOfDay();
void * _ZN10PlayerData13getFriendListEv(void *);
void * FriendList_GetEntries(void *);
void * FriendEntry_GetFriendData(void *);
s32 DwcFriendData_IsValid(void *);
s32 NetOverlay_LoadWireless();
s32 Comm_Start(s32, s32, s32);
s32 Comm_End();
s32 _ZN12Unk_020d77a413func_0201b9e8Eii(void *, s32 *, s32 *);
BOOL func_020a62a0();
Unk_ov048_Rec * TalkWindow_Get(s32);
void SaveManager_RequestAct02();
void * func_020b4934();
s32 func_020b4f58(void *, s32, s32, s32);
void * func_020850e0();
void * func_02085180(void *);
Unk_ov048_0225b278_Ent * func_02095204(s32);
void FieldPos_ToUnit(s32 *, s32 *, Unk_ov048_0225b278_Vec *);
void _ZN12Unk_02086ef013func_02086f00Ej(void *, s32);
void _ZN12Unk_02086ef013func_02086ef8Ei(void *, s32);
s32 func_020b4aa8(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
void Camera_SaveView();
void SaveManager_RequestAct17();
void SaveManager_RequestAct14();
s32 func_020b4f18(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
s32 func_020a5ef8();
void * PlayerData_GetBySessionSlot();
void _ZN15TalkWindowState13detachRequestEv(void *);
void func_020b4bbc(void *, s32);
void PlayerActor_RequestAct6F(void *, s32, s32);
s32 func_020951b8(s32);
void _ZN10PlayerData13func_02098a58Ev(void *);
void _ZN10MsgRequest11setFileNameEPKc(void *, const char *);
void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(void *, void *);
void * _ZN10PlayerData11getPlayerIdEv(...);
void _ZN8PlayerId13func_020940d0EP9MsgString(void *, void *);
s32 func_020a03c4();
void func_020b78c4();
s32 func_020a0414();
s32 func_02094f2c(s32, s32);
void func_02094f48(s32, s32);
void _ZN12Unk_0201a8c413func_0201a99cEs(void *, s32);
s32 func_020a03e4();
s32 func_02087444();
void * _ZN10PlayerData13func_020986a4Ev(void *);
void * _ZN12Unk_020872fc13func_02087364Ev(void *);
s32 func_02063954();
s32 memcmp(void *, void *, u32);
void _ZN12Unk_020872fc13func_020872fcEv(void *);
BOOL _ZN12Unk_020872fc13func_02087314Ev(void *);
u8 * _ZN5Actor13findByProfileEjPS_(s32, s32);
s32 func_020e7518(void *);
s32 _ZN12Unk_0201635013func_0201622cEiPv(void *, s32, void *);
s32 _ZN12Unk_0201985813func_020195c8Eiijtt(void *, s32, s32, s32, u32, s32);
s32 _ZN12Unk_0201985813func_02019790Ev(void *);
s32 _ZN12Unk_0201a33413func_0201a784Ev(void *);
s32 ScreenTransition_StartFadeOut(s32, s32);
s32 Snd_FadeOutScene();
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
void _ZN12Unk_0201985813func_02019614Ejt(void *, s32, s32);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_02063b8c(s32);
s32 func_ov004_0223f944();
s32 func_ov004_0223f958();
s32 PlayerActor_RequestAct70(s32, s32);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *);
s32 Camera_IsBlending();
void TalkRequest_EndTalkWith(void *);
s32 Net_WifiStartHost(s32);
s32 Comm_BeginHostSession();
void * func_02063964(void *);
void * _ZN8PlayerId13func_02094104Ev(void *);
void func_020ea720(void *, s32);
Unk_ov048_Vec * func_020947f0(s32);
void _ZN12Unk_02013b1013func_020141b4Essh(void *, s32, s32, s32);
s32 _ZN12Unk_020d8bc88vfunc_0cEv();
s32 func_020b50e8();
void func_0203d984();
s32 _ZN12Unk_020d8bc88vfunc_00Ev();
s32 _ZN12Unk_02086ef013func_02086efcEv(void *);
s32 _ZN12Unk_02086ef013func_02086ef0Ev(void *);
void _ZN12Unk_02086ef013func_02086f04Ev(void *);
void func_0203d990();
s32 _ZN12Unk_020d8bc88vfunc_04Ev();
void TalkRequest_AddPlayerTalk6(void *, s32);
void _ZN12Unk_0201ad2013func_0201ad30Ei(void *, s32);
void _ZN12Unk_0201ad2013func_0201ad34Ei(void *, s32);
BOOL SpNpcMissing1_IsIdle();
BOOL TalkRequest_IsActive();
s32 _ZN12Unk_02019dd813func_02019d8cEv(void *);
s32 Net_GetMyAid();
void func_020a0408();
s32 Comm_GetSyncState();
void Comm_ClearSyncState();
BOOL Comm_RequestSync(u32);
void func_020a5f38(u32);
void func_020a5f18(u32);
void * func_02085178(void *);
BOOL _ZN12Unk_02086f8413func_02086fa8Ev(void *);
void _ZN12Unk_020872fc13func_02087308Ev(void *);
s32 func_020a5f6c();
BOOL CommSend_PlayerData(void *, s32);
void Comm_PrepareJoin();

}
s32 NetOverlay_AssertWifi();
s32 NetOverlay_AssertWireless();
s32 NetOverlay_AssertAny();

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
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
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    Unk_020d77a4 *func_02015aac();
    void func_02015ab0(u32 p);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov048_Owner *unk_3c;
    u8 pad_40[0xaa - 0x40];
    u8 unk_aa;
    u8 pad_ab[0xac - 0xab];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    void func_02015170(u32 a, u32 b);
    void func_0201514c(u32 a, u32 b, u32 c);
    void func_020151d0(s32 v);
};

struct Unk_ov048_M0 {
    u8 pad_00[0x2e0 - 0xb8];
    u8 unk_2e0[0x14];
    u8 unk_2f4[0xe0];
    s32 unk_3d4;
};
struct Unk_ov048_M1 { u8 unk_00[0x108]; };
struct Unk_ov048_M2 { u8 unk_00[0xd4]; };
struct Unk_ov048_M3 { u8 unk_00[0x22c]; };

// Dialog-state sub object embedded in the scene (vtable data_ov048_0225cbc8).
class SpNpcCopperTalk : public Unk_020d7710 {
public:
    typedef void (SpNpcCopperTalk::*Fn)();
    typedef void (SpNpcCopperTalk::*ArgFn)(s32);

    SpNpcCopperTalk();
    virtual ~SpNpcCopperTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void waitGoHomeAccepted();
    void requestGoHome();
    void waitJoinAccepted();
    void requestJoin();
    void waitConnected();
    void connectToTown();
    void showErrorAndAbort(u32 msg, s32 unused);
    BOOL checkScanTimeout();
    BOOL checkWifiLoginError();
    BOOL checkFindTownTimeout();
    BOOL checkConnectTimeout();
    BOOL checkNetError(s32 flag);
    void waitSaveDone();
    void requestSave();
    void shutdownWifi();
    void onTownListClosed();
    void onFriendListClosed();
    void scanForOpenTowns();
    void onWifiLoggedIn();
    BOOL isSkippableNetError();
    void pollGameStatsDownload();
    void startGameStatsDownload();
    void pollGameStatsUpload();
    void startGameStatsUpload();
    void pollBbsDownload();
    void startBbsDownload();
    void pollMailDownload();
    void startMailDownload();
    void waitWifiLogin();
    void setScript(s32 s);
    void onChoiceUnk5F(s32 p);
    void onChoiceGateAlreadyOpen(s32 p);
    void onChoiceSaveAndQuit(s32 p);
    void onChoiceRetryWifi(s32 p);
    void onChoiceRetryLocal(s32 p);
    void onChoiceGoOutInstead(s32 p);
    void confirmStartComm(s32 p, s32 id);
    void onChoiceVisitWifi(s32 p);
    void onChoiceVisitLocal(s32 p);
    void onChoiceHostWifi(s32 p);
    void onChoiceHostLocal(s32 p);
    void onChoiceBackToMenu(s32 p);
    void onChoiceHostMenu(s32 p);
    void onChoiceMainMenu(s32 p);
    void onChoiceGoHome(s32 p);
    void checkWifiReady();
    void onChoiceHostMethod(s32 p);
    void onChoiceVisitMethod(s32 p);
    void onChoiceFriendCode(s32 p);
    void onChoiceConnectWifi(s32 p);
    void onChoiceVisitTown(s32 p);
    void onChoiceUpdateWifiId(s32 p);
    void startGoHome();
    void showWifiIdSavedResult();
    void showAnythingElseMenu();
    void startFarewellAct();
    void startSendOffAct();
    void startWifiVisit();
    void startLocalVisit();
    void openFriendList();
    void openTownList();
    void startTownSearch();
    void startWifiLogin();
    void startOpenGateAct();
    void startTurnBackAct();
    void unlockWindow();
    void lockWindow(s32 flag);
    void closeGate();
    void showMainMenu();
    void startSave();
    BOOL hasFriends();
    s32 setFriendCodeArgs(s64 v);
    void startComm(s32 a, s32 b);
    void endComm();
    s32 getTopic();
    void setTopic(s32 v);
    void attachOwner(u8 *p);
    u32 getJoinErrorMsg();
    u32 getConnectErrorMsg();
    u32 getAnythingElseMsg();
    s32 getInviteOrCloseGateMsg();
    s32 getWifiLoginResultMsg();

    s32 unk_ac;
    s32 unk_b0;
    u8 *unk_b4;
    Unk_ov048_M0 unk_b8;
    Unk_ov048_M1 unk_3d8;
    Unk_ov048_M2 unk_4e0;
    Unk_ov048_M3 unk_5b4;
    u8 unk_7e0;
    u8 unk_7e1;
    u8 unk_7e2;
    u8 unk_7e3;
    s16 unk_7e4;
    u16 unk_7e6;
    u8 unk_7e8;
    u8 unk_7e9;
    u8 pad_7ea[2];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 pad_45[0x514 - 0x4cc - 0x45];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
MEMBER(Unk_02019858, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x5c - 0x40];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    BOOL func_0201b9bc();
    BOOL func_0201ba88();
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 v);
    s32 getAngleTo(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class SpNpcCopper : public Unk_020d8bc8 {
public:
    typedef BOOL (SpNpcCopper::*Fn)();

    SpNpcCopper() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual BOOL vfunc_7c();

    BOOL canStartSave();
    BOOL checkPlayerAtGate();
    s32 getWifiErrorMsg(s32 id);
    BOOL mainAct10();
    BOOL setupAct10();
    BOOL mainAct11();
    BOOL setupAct11();
    BOOL mainAct0F();
    BOOL setupAct0F();
    BOOL mainAct0E();
    BOOL setupAct0E();
    BOOL mainAct0D();
    BOOL setupAct0D();
    BOOL mainAct0C();
    BOOL setupAct0C();
    BOOL mainAct0B();
    BOOL setupAct0B();
    BOOL act0BStep3();
    BOOL act0BStep2();
    BOOL act0BStep1();
    BOOL act0BStep0();
    BOOL mainAct0A();
    BOOL setupAct0A();
    BOOL mainAct09();
    BOOL setupAct09();
    BOOL act09Step3();
    BOOL act09Step2();
    BOOL act09Step1();
    BOOL act09Step0();
    BOOL mainAct08();
    BOOL setupAct08();
    BOOL act08Step5();
    BOOL act08Step4();
    BOOL act08Step3();
    BOOL act08Step2();
    BOOL act08Step1();
    BOOL act08Step0();
    BOOL mainAct07();
    BOOL setupAct07();
    BOOL mainAct06();
    BOOL setupAct06();
    BOOL mainAct05();
    BOOL setupAct05();
    BOOL mainAct04();
    BOOL setupAct04();
    BOOL mainAct03();
    BOOL setupAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();

    s32 unk_654;
    SpNpcCopperTalk unk_658;
};

struct Unk_ov048_State_Ent {
    SpNpcCopper::Fn enter;
    SpNpcCopper::Fn exit;
};

struct Unk_ov048_0225cd04_Ent {
    SpNpcCopperTalk::Fn f;
    u8 flag;
};

struct Unk_ov048_0225a108_Row {
    u32 id;
    SpNpcCopperTalk::ArgFn f;
};

struct Unk_ov048_0225a8d4_Row {
    u32 id;
    SpNpcCopperTalk::Fn f;
};

struct MsgString25 {
    u8 unk_00[0x2c];
    MsgString25();
    ~MsgString25();
};

extern "C" {
extern void *data_ov048_0225c6ec[2];
extern void *data_ov048_0225c6f4[2];
extern void *data_ov048_0225c6fc[2];
extern void *data_ov048_0225c704[2];
extern void *data_ov048_0225c70c[2];
extern void *data_ov048_0225c714[2];
extern void *data_ov048_0225c71c[2];
extern void *data_ov048_0225c724[2];
extern void *data_ov048_0225c72c[2];
extern void *data_ov048_0225c734[2];
extern void *data_ov048_0225c73c[2];
extern void *data_ov048_0225c744[2];
extern void *data_ov048_0225c74c[2];
extern void *data_ov048_0225c754[2];
extern void *data_ov048_0225c75c[2];
extern void *data_ov048_0225c764[2];
extern void *data_ov048_0225c76c[2];
extern void *data_ov048_0225c774[2];
extern void *data_ov048_0225c77c[2];
extern void *data_ov048_0225c784[2];
extern void *data_ov048_0225c78c[2];
extern void *data_ov048_0225c794[2];
extern void *data_ov048_0225c79c[2];
extern void *data_ov048_0225c7a4[2];
extern void *data_ov048_0225c7ac[2];
extern void *data_ov048_0225c7b4[2];
extern void *data_ov048_0225c7bc[2];
extern void *data_ov048_0225c7c4[2];
extern void *data_ov048_0225c7cc[2];
extern void *data_ov048_0225c7d4[2];
extern void *data_ov048_0225c7dc[2];
extern void *data_ov048_0225c7e4[2];
extern void *data_ov048_0225c7ec[2];
extern void *data_ov048_0225c7f4[2];
extern void *data_ov048_0225c7fc[2];
extern void *data_ov048_0225c804[2];
extern void *data_ov048_0225c80c[2];
extern void *data_ov048_0225c814[2];
extern void *data_ov048_0225c81c[2];
extern void *data_ov048_0225c824[2];
extern void *data_ov048_0225c82c[2];
extern void *data_ov048_0225c834[2];
extern void *data_ov048_0225c83c[2];
extern void *data_ov048_0225c844[2];
extern void *data_ov048_0225c84c[2];
extern void *data_ov048_0225c854[2];
extern void *data_ov048_0225c85c[2];
extern void *data_ov048_0225c864[2];
extern void *data_ov048_0225c86c[2];
extern void *data_ov048_0225c874[2];
extern void *data_ov048_0225c87c[2];
extern void *data_ov048_0225c884[2];
extern void *data_ov048_0225c88c[2];
extern void *data_ov048_0225c894[2];
extern void *data_ov048_0225c89c[2];
extern void *data_ov048_0225c8a4[2];
extern void *data_ov048_0225c8ac[2];
extern void *data_ov048_0225c8b4[2];
extern void *data_ov048_0225c8bc[2];
extern void *data_ov048_0225c8c4[2];
extern void *data_ov048_0225c8cc[2];
extern void *data_ov048_0225c8d4[2];
extern void *data_ov048_0225c8dc[2];
extern void *data_ov048_0225c8e4[2];
extern void *data_ov048_0225c8ec[2];
extern void *data_ov048_0225c8f4[2];
extern void *data_ov048_0225c8fc[2];
extern void *data_ov048_0225c904[2];
extern void *data_ov048_0225c90c[2];
extern void *data_ov048_0225c914[2];
extern void *data_ov048_0225c91c[2];
extern void *data_ov048_0225c924[2];
extern void *data_ov048_0225c92c[2];
extern void *data_ov048_0225c934[2];
extern void *data_ov048_0225c93c[2];
extern void *data_ov048_0225c944[2];
extern void *data_ov048_0225c94c[2];
extern void *data_ov048_0225c954[2];
extern void *data_ov048_0225c95c[2];
extern void *data_ov048_0225c964[2];
extern void *data_ov048_0225c96c[2];
extern void *data_ov048_0225c974[2];
extern void *data_ov048_0225c97c[2];
extern void *data_ov048_0225c984[2];
extern void *data_ov048_0225c98c[2];
extern void *data_ov048_0225c994[2];
extern void *data_ov048_0225c99c[2];
extern void *data_ov048_0225c9a4[2];
extern void *data_ov048_0225c9ac[2];
extern void *data_ov048_0225c9b4[2];
extern void *data_ov048_0225c9bc[2];
extern void *data_ov048_0225c9c4[2];
extern void *data_ov048_0225c9cc[2];
extern void *data_ov048_0225c9d4[2];
extern void *data_ov048_0225c9dc[2];
extern void *data_ov048_0225c9e4[2];
extern void *data_ov048_0225c9ec[2];
extern void *data_ov048_0225c9f4[2];
extern void *data_ov048_0225c9fc[2];
extern void *data_ov048_0225ca04[2];
extern void *data_ov048_0225ca0c[2];
extern void *data_ov048_0225ca14[2];
extern void *data_ov048_0225ca1c[2];
extern void *data_ov048_0225ca24[2];
extern void *data_ov048_0225ca2c[2];
extern void *data_ov048_0225ca34[2];
extern void *data_ov048_0225ca3c[2];
extern void *data_ov048_0225ca44[2];
extern void *data_ov048_0225ca4c[2];
extern void *data_ov048_0225ca54[2];
extern void *data_ov048_0225ca5c[2];
extern void *data_ov048_0225ca64[2];
extern void *data_ov048_0225ca6c[2];
extern void *data_ov048_0225ca74[2];
extern void *data_ov048_0225ca7c[2];
extern void *data_ov048_0225ca84[2];
extern void *data_ov048_0225ca8c[2];
extern void *data_ov048_0225ca94[2];
extern void *data_ov048_0225ca9c[2];
extern void *data_ov048_0225caa4[2];
extern void *data_ov048_0225caac[2];
extern void *data_ov048_0225cab4[2];
extern void *data_ov048_0225cabc[2];
extern void *data_ov048_0225cac4[2];
extern void *data_ov048_0225cacc[2];
extern void *data_ov048_0225cad4[2];
extern void *data_ov048_0225cadc[2];
extern void *data_ov048_0225cae4[2];
extern void *data_ov048_0225caec[2];
extern Unk_ov048_State_Ent sSpNpcCopperActTable[];
extern Unk_ov048_0225cd04_Ent sSpNpcCopperTalkScripts[];
void SpNpcCopper_ChangeAct(void *p, s32 s);
}

extern "C" {
void _ZN15SpNpcCopperTalk17setFriendCodeArgsEx(void *, s32, s32);
void _ZN12Unk_0208722413func_020872dcEv(void *);
void _ZN12Unk_0208722413func_020872ecEv(void *);
void func_0203ec50(void *);
void func_0203ec54(void *);
void func_0203eccc(void *);
void func_0203ecdc(void *);
void _ZN7PatternD1Ev(void *);
void _ZN7PatternC1Ev(void *);
}

#define RNG(v, lo, hi) (func_020e77cc((v), (lo), (hi)) != 0)

// ---- b444
static inline BOOL Unk_ov048_0225b4e4_Is2() {
    if (gScreenTransition == 2) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov048_0225b854_Is0() {
    if (gScreenTransition == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" SpNpcCopper *SpNpcCopper_Create() {
    return new SpNpcCopper();
}

BOOL SpNpcCopper::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner((u8 *)this);
    func_0201bd9c(0x100);
    _ZN12Unk_0201ad2013func_0201ad30Ei(&unk_2a0, 0xd9);
    _ZN12Unk_0201ad2013func_0201ad34Ei(&unk_2a0, 0xd8);
    if (func_020b50e8() != 0xb) {
        unk_558.unk_0b = 1;
    }
    if (func_020b50e8() == 0xc) {
        unk_4cc.unk_44 = 0;
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    unk_658.unk_7e4 = unk_8e;
    unk_4cc.unk_1c |= 2;
    if (_ZN11CommManager8isOnlineEv(gCommManager) && func_020b50e8() == 0xb) {
        if (func_0201ba88()) {
            SpNpcCopper_ChangeAct(this, 1);
        } else {
            SpNpcCopper_ChangeAct(this, 0xf);
        }
        return TRUE;
    }
    void *p = func_02085180(func_020850e0());
    if (_ZN12Unk_02086ef013func_02086efcEv(p) == 1 || _ZN12Unk_02086ef013func_02086efcEv(p) == 2) {
        if (_ZN12Unk_02086ef013func_02086efcEv(p) == 1) {
            unk_658.setTopic(6);
        } else {
            unk_658.setTopic(7);
        }
        SpNpcCopper_ChangeAct(this, 0);
        unk_8e = _ZN12Unk_02086ef013func_02086ef0Ev(p);
        unk_94 = _ZN12Unk_02086ef013func_02086ef0Ev(p);
        _ZN12Unk_02086ef013func_02086f04Ev(p);
    } else if (func_020b50e8() == 0xd) {
        func_0203d990();
        SpNpcCopper_ChangeAct(this, 9);
    } else if (func_020b50e8() == 0xe) {
        func_0203d990();
        SpNpcCopper_ChangeAct(this, 0xb);
    } else {
        SpNpcCopper_ChangeAct(this, 1);
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0xe) {
        func_0203d984();
    }
    return TRUE;
}

u8 *SpNpcCopper::getTexturePath() {
    return (u8 *)sSpNpcCopperTexturePathPtr;
}

u8 *SpNpcCopper::getModelPath() {
    return (u8 *)sSpNpcCopperModelPathPtr;
}

BOOL SpNpcCopper::updateAct() {
    BOOL r = FALSE;
    if (sSpNpcCopperActTable[unk_654].exit) {
        r = (this->*sSpNpcCopperActTable[unk_654].exit)();
    }
    return r;
}

extern "C" void SpNpcCopper_ChangeAct(void *p, s32 s) {
    SpNpcCopper *self = (SpNpcCopper *)p;
    BOOL r = TRUE;
    if (sSpNpcCopperActTable[s].enter) {
        r = (self->*sSpNpcCopperActTable[s].enter)();
    }
    if (r) {
        self->unk_654 = s;
    }
}

BOOL SpNpcCopper::setupAct00() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct00() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL SpNpcCopper::setupAct01() {
    _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, data_020c6cc8);
    return TRUE;
}

BOOL SpNpcCopper::mainAct01() {
    checkPlayerAtGate();
    return TRUE;
}

BOOL SpNpcCopper::setupAct02() {
    Unk_020d77a4 *o = unk_658.func_02015aac();
    s32 r = 0;
    if (o) {
        r = getAngleTo(o);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL SpNpcCopper::mainAct02() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct03() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct03() {
    return TRUE;
}

BOOL SpNpcCopper::setupAct04() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, unk_658.unk_7e4, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcCopper::mainAct04() {
    if (checkPlayerAtGate()) {
        return TRUE;
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            SpNpcCopper_ChangeAct(this, 1);
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct05() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct05() {
    Unk_ov048_Vec_Loc a;
    Unk_ov048_Vec_Loc b;
    PlayerData_GetCurrent();
    Unk_ov048_Vec *p = func_020947f0(4);
    *(Unk_ov048_Vec *)&a = *p;
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        *(Unk_ov048_Vec *)&b = sCopperTurnBackPos;
        PlayerActor_RequestAct6F(&b, 0x266, 4);
        unk_658.unk_7e9 = 3;
        break;
    case 3:
        if (func_020951b8(4) == 0) {
            TalkRequest_EndTalkWith(this);
        }
        break;
    }
    return TRUE;
}

// ---- bde0

BOOL SpNpcCopper::setupAct06() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct06() {
    u8 buf[0x14];
    void *h;
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (Camera_IsBlending() == 0) {
            func_ov004_02225ee0();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
            if (Net_GetMode() == 4) {
                Net_WifiStartHost(NetOverlay_AssertWifi());
                _ZN11CommManager12setErrorModeEj(gCommManager, 0);
                Comm_BeginHostSession();
            }
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            u8 t = unk_658.unk_1e;
            if (t == 0x46 || t == 0x6c) {
                if (Net_GetMode() == 3) {
                    if (Net_PollConnected(NetOverlay_AssertAny()) != 0) {
                        TalkRequest_EndTalkWith(this);
                    }
                } else {
                    unk_658.startComm(1, 0);
                    h = PlayerData_GetCurrent();
                    MI_CpuCopy8(func_02063964(data_021d7352), buf, 8);
                    MI_CpuCopy8(_ZN8PlayerId13func_02094104Ev(_ZN10PlayerData11getPlayerIdEv(h)), buf + 8, 8);
                    buf[0x10] = 0;
                    NetOverlay_AssertWireless();
                    func_020ea720(buf, 0x11);
                    Comm_BeginHostSession();
                    TalkRequest_EndTalkWith(this);
                }
            }
        } else {
            if (Net_GetMode() == 3) {
                Net_PollConnected(NetOverlay_AssertAny());
            }
        }
        break;
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct07() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct07() {
    switch (unk_658.unk_7e9) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            unk_658.unk_7e9 = 1;
        }
        break;
    case 1:
        if (Camera_IsBlending() == 0) {
            func_ov004_02225ebc();
            unk_658.unk_7e6 = 0x3c;
            unk_658.unk_7e9 = 2;
        }
        break;
    case 2:
        if (func_020e7500(&unk_658.unk_7e6) == 0) {
            TalkRequest_EndTalkWith(this);
        }
        break;
    }
    return TRUE;
}

BOOL SpNpcCopper::act08Step0() {
    Unk_ov048_Vec v;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_ov004_0223f958();
        v = sCopperSendOffWalkPos;
        PlayerActor_RequestAct6F(&v, 0x400, 4);
        func_02094f48(1, 4);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step1() {
    if (func_020951b8(4) == 0) {
        PlayerActor_RequestAct70((s32)0xffff8000, 4);
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        unk_658.unk_7e6 = (u8)(func_02063b8c(5) + 5);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step2() {
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        u8 *base = _ZN5Actor13findByProfileEjPS_(0x73, 0);
        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(base + 0x564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step3() {
    u8 *base = _ZN5Actor13findByProfileEjPS_(0x73, 0);
    u8 *r4 = base + 0x564;
    Unk_ov048_Vec v;
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, data_020c6cc8);
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(r4) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(r4)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(r4, 0, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 0) {
        if (_ZN12Unk_0201985813func_020197a8Ev(r4) == 0) {
            v = sCopperSendOffExitPos;
            PlayerActor_RequestAct6F(&v, 0x666, 4);
            _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x81, 1, data_020c6cc8, 0);
            unk_658.unk_7e8 = func_02063b8c(5) + 5;
            unk_658.unk_7e6 = 0x16;
            func_ov004_0223f944();
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step4() {
    u8 *base = _ZN5Actor13findByProfileEjPS_(0x73, 0);
    u8 *r4 = base + 0x334;
    u8 *r6 = base + 0x564;
    u8 *r7 = base + 0x2a0;
    u8 *sp8 = base + 0x3b0;
    if (func_020e7518(&unk_658.unk_7e8) == 0) {
        if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x81, r7) == 0) {
            if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x82, r7) == 0) {
                _ZN12Unk_0201985813func_020195c8Eiijtt(r6, 1, 0x81, 1, data_020c6cc8, 0);
            }
        }
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0x81, &unk_2a0) != 0) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564) != 0) {
            _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(r4, 0x81, r7) != 0) {
        if (_ZN12Unk_0201985813func_02019790Ev(r6) != 0) {
            _ZN12Unk_0201985813func_020195c8Eiijtt(r6, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (unk_658.unk_7e6 == 2) {
        _ZN12Unk_0201a33413func_0201a784Ev(&unk_3b0);
        _ZN12Unk_0201a33413func_0201a784Ev(sp8);
    }
    if (func_020e7500(&unk_658.unk_7e6) == 0) {
        if (unk_654 == 8) {
            if (ScreenTransition_StartFadeOut(2, 0xf)) {
                Snd_FadeOutScene();
                return TRUE;
            }
        } else {
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" BOOL SpNpcCopper_CheckKatieEscort() {
    void *h = PlayerData_GetCurrent();
    void *r4;
    if (func_02087444()) {
        r4 = _ZN10PlayerData13func_020986a4Ev(h);
        _ZN12Unk_020872fc13func_02087364Ev(r4);
        if (func_02063954()) {
            u16 *q = (u16 *)data_021d7352;
            u16 *p = (u16 *)_ZN12Unk_020872fc13func_02087364Ev(r4);
            if (p[0] == q[0]) {
                if (memcmp(p + 1, q + 1, 8) == 0) {
                    goto skip;
                }
            }
        }
        _ZN12Unk_020872fc13func_020872fcEv(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()));
    skip:
        if (_ZN12Unk_020872fc13func_02087314Ev(r4)) {
            _ZN12Unk_02097ff413func_0209801cEj(h, 0x36);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step5() {
    if (unk_654 == 8) {
        if (Unk_ov048_0225b854_Is0()) {
            func_020a03e4();
        } else {
            return FALSE;
        }
        SpNpcCopper_ChangeAct(this, 3);
    } else {
        func_020b4bbc(func_020b4934(), 0);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct08() {
    unk_658.unk_7e9 = 0;
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, unk_658.unk_7e4);
    return TRUE;
}extern "C" void _ZN15SpNpcCopperTalk18waitGoHomeAcceptedEv();
extern "C" void _ZN15SpNpcCopperTalk13requestGoHomeEv();
extern "C" void _ZN15SpNpcCopperTalk16waitJoinAcceptedEv();
extern "C" void _ZN15SpNpcCopperTalk11requestJoinEv();
extern "C" void _ZN15SpNpcCopperTalk13waitConnectedEv();
extern "C" void _ZN15SpNpcCopperTalk13connectToTownEv();
extern "C" void _ZN15SpNpcCopperTalk12waitSaveDoneEv();
extern "C" void _ZN15SpNpcCopperTalk11requestSaveEv();
extern "C" void _ZN15SpNpcCopperTalk12shutdownWifiEv();
extern "C" void _ZN15SpNpcCopperTalk16onTownListClosedEv();
extern "C" void _ZN15SpNpcCopperTalk18onFriendListClosedEv();
extern "C" void _ZN15SpNpcCopperTalk16scanForOpenTownsEv();
extern "C" void _ZN15SpNpcCopperTalk14onWifiLoggedInEv();
extern "C" void _ZN15SpNpcCopperTalk21pollGameStatsDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk22startGameStatsDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk19pollGameStatsUploadEv();
extern "C" void _ZN15SpNpcCopperTalk20startGameStatsUploadEv();
extern "C" void _ZN15SpNpcCopperTalk15pollBbsDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk16startBbsDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk16pollMailDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk17startMailDownloadEv();
extern "C" void _ZN15SpNpcCopperTalk13waitWifiLoginEv();
extern "C" void _ZN15SpNpcCopperTalk13onChoiceUnk5FEi();
extern "C" void _ZN15SpNpcCopperTalk23onChoiceGateAlreadyOpenEi();
extern "C" void _ZN15SpNpcCopperTalk19onChoiceSaveAndQuitEi();
extern "C" void _ZN15SpNpcCopperTalk17onChoiceRetryWifiEi();
extern "C" void _ZN15SpNpcCopperTalk18onChoiceRetryLocalEi();
extern "C" void _ZN15SpNpcCopperTalk20onChoiceGoOutInsteadEi();
extern "C" void _ZN15SpNpcCopperTalk17onChoiceVisitWifiEi();
extern "C" void _ZN15SpNpcCopperTalk18onChoiceVisitLocalEi();
extern "C" void _ZN15SpNpcCopperTalk16onChoiceHostWifiEi();
extern "C" void _ZN15SpNpcCopperTalk17onChoiceHostLocalEi();
extern "C" void _ZN15SpNpcCopperTalk18onChoiceBackToMenuEi();
extern "C" void _ZN15SpNpcCopperTalk16onChoiceHostMenuEi();
extern "C" void _ZN15SpNpcCopperTalk16onChoiceMainMenuEi();
extern "C" void _ZN15SpNpcCopperTalk14onChoiceGoHomeEi();
extern "C" void _ZN15SpNpcCopperTalk18onChoiceHostMethodEi();
extern "C" void _ZN15SpNpcCopperTalk19onChoiceVisitMethodEi();
extern "C" void _ZN15SpNpcCopperTalk18onChoiceFriendCodeEi();
extern "C" void _ZN15SpNpcCopperTalk19onChoiceConnectWifiEi();
extern "C" void _ZN15SpNpcCopperTalk17onChoiceVisitTownEi();
extern "C" void _ZN15SpNpcCopperTalk20onChoiceUpdateWifiIdEi();
extern "C" void _ZN15SpNpcCopperTalk11startGoHomeEv();
extern "C" void _ZN15SpNpcCopperTalk21showWifiIdSavedResultEv();
extern "C" void _ZN15SpNpcCopperTalk20showAnythingElseMenuEv();
extern "C" void _ZN15SpNpcCopperTalk16startFarewellActEv();
extern "C" void _ZN15SpNpcCopperTalk15startSendOffActEv();
extern "C" void _ZN15SpNpcCopperTalk14startWifiVisitEv();
extern "C" void _ZN15SpNpcCopperTalk15startLocalVisitEv();
extern "C" void _ZN15SpNpcCopperTalk14openFriendListEv();
extern "C" void _ZN15SpNpcCopperTalk12openTownListEv();
extern "C" void _ZN15SpNpcCopperTalk15startTownSearchEv();
extern "C" void _ZN15SpNpcCopperTalk14startWifiLoginEv();
extern "C" void _ZN15SpNpcCopperTalk16startOpenGateActEv();
extern "C" void _ZN15SpNpcCopperTalk16startTurnBackActEv();
extern "C" void _ZN15SpNpcCopperTalk9closeGateEv();
extern "C" void _ZN15SpNpcCopperTalk12showMainMenuEv();
extern "C" void _ZN15SpNpcCopperTalk9startSaveEv();
extern "C" void _ZN11SpNpcCopper9mainAct10Ev();
extern "C" void _ZN11SpNpcCopper10setupAct10Ev();
extern "C" void _ZN11SpNpcCopper9mainAct11Ev();
extern "C" void _ZN11SpNpcCopper10setupAct11Ev();
extern "C" void _ZN11SpNpcCopper9mainAct0FEv();
extern "C" void _ZN11SpNpcCopper10setupAct0FEv();
extern "C" void _ZN11SpNpcCopper9mainAct0EEv();
extern "C" void _ZN11SpNpcCopper10setupAct0EEv();
extern "C" void _ZN11SpNpcCopper9mainAct0DEv();
extern "C" void _ZN11SpNpcCopper10setupAct0DEv();
extern "C" void _ZN11SpNpcCopper9mainAct0CEv();
extern "C" void _ZN11SpNpcCopper10setupAct0CEv();
extern "C" void _ZN11SpNpcCopper9mainAct0BEv();
extern "C" void _ZN11SpNpcCopper10setupAct0BEv();
extern "C" void _ZN11SpNpcCopper10act0BStep3Ev();
extern "C" void _ZN11SpNpcCopper10act0BStep2Ev();
extern "C" void _ZN11SpNpcCopper10act0BStep1Ev();
extern "C" void _ZN11SpNpcCopper10act0BStep0Ev();
extern "C" void _ZN11SpNpcCopper9mainAct0AEv();
extern "C" void _ZN11SpNpcCopper10setupAct0AEv();
extern "C" void _ZN11SpNpcCopper9mainAct09Ev();
extern "C" void _ZN11SpNpcCopper10setupAct09Ev();
extern "C" void _ZN11SpNpcCopper10act09Step3Ev();
extern "C" void _ZN11SpNpcCopper10act09Step2Ev();
extern "C" void _ZN11SpNpcCopper10act09Step1Ev();
extern "C" void _ZN11SpNpcCopper10act09Step0Ev();
extern "C" void _ZN11SpNpcCopper9mainAct08Ev();
extern "C" void _ZN11SpNpcCopper10setupAct08Ev();
extern "C" void _ZN11SpNpcCopper10act08Step5Ev();
extern "C" void _ZN11SpNpcCopper10act08Step4Ev();
extern "C" void _ZN11SpNpcCopper10act08Step3Ev();
extern "C" void _ZN11SpNpcCopper10act08Step2Ev();
extern "C" void _ZN11SpNpcCopper10act08Step1Ev();
extern "C" void _ZN11SpNpcCopper10act08Step0Ev();
extern "C" void _ZN11SpNpcCopper9mainAct07Ev();
extern "C" void _ZN11SpNpcCopper10setupAct07Ev();
extern "C" void _ZN11SpNpcCopper9mainAct06Ev();
extern "C" void _ZN11SpNpcCopper10setupAct06Ev();
extern "C" void _ZN11SpNpcCopper9mainAct05Ev();
extern "C" void _ZN11SpNpcCopper10setupAct05Ev();
extern "C" void _ZN11SpNpcCopper9mainAct04Ev();
extern "C" void _ZN11SpNpcCopper10setupAct04Ev();
extern "C" void _ZN11SpNpcCopper9mainAct03Ev();
extern "C" void _ZN11SpNpcCopper10setupAct03Ev();
extern "C" void _ZN11SpNpcCopper9mainAct02Ev();
extern "C" void _ZN11SpNpcCopper10setupAct02Ev();
extern "C" void _ZN11SpNpcCopper9mainAct01Ev();
extern "C" void _ZN11SpNpcCopper10setupAct01Ev();
extern "C" void _ZN11SpNpcCopper9mainAct00Ev();
extern "C" void _ZN11SpNpcCopper10setupAct00Ev();
struct Unk_ov048_SceneEntry {
    SpNpcCopper *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcCopper *SpNpcCopper_Create();

// Declarations for data defined further down (definition order sets the data layout)
extern "C" char sSpNpcCopperSequence4Key[];
extern "C" char sSpNpcCopperModelPath[];
extern "C" const u8 sCopperWifiStartMsgs[4];
extern "C" void *sSpNpcCopperTexturePathPtr;
extern "C" Unk_ov048_0225cd04_Ent sSpNpcCopperTalkScripts[23];
extern "C" void *sSpNpcCopperMsgKey;
extern "C" const Unk_ov048_Vec sCopperDepartWalkPos;
extern "C" Unk_ov048_State_Ent sSpNpcCopperActTable[18];
extern "C" void *data_ov048_0225c8dc[2];
extern "C" void *data_ov048_0225cacc[2];
extern "C" void *data_ov048_0225c724[2];
extern "C" void *data_ov048_0225c8cc[2];
extern "C" void *data_ov048_0225c7ac[2];
extern "C" void *data_ov048_0225c714[2];
extern "C" void *data_ov048_0225c6ec[2];
extern "C" void *data_ov048_0225c71c[2];
extern "C" void *data_ov048_0225caec[2];
extern "C" void *data_ov048_0225cae4[2];
extern "C" void *data_ov048_0225cadc[2];
extern "C" void *data_ov048_0225cad4[2];
extern "C" void *data_ov048_0225c8a4[2];
extern "C" void *data_ov048_0225cac4[2];
extern "C" void *data_ov048_0225cabc[2];
extern "C" void *data_ov048_0225cab4[2];
extern "C" void *data_ov048_0225caac[2];
extern "C" void *data_ov048_0225caa4[2];
extern "C" void *data_ov048_0225c9cc[2];
extern "C" void *data_ov048_0225ca4c[2];
extern "C" void *data_ov048_0225ca8c[2];
extern "C" void *data_ov048_0225ca84[2];
extern "C" void *data_ov048_0225ca7c[2];
extern "C" void *data_ov048_0225ca74[2];
extern "C" void *data_ov048_0225ca6c[2];
extern "C" void *data_ov048_0225ca64[2];
extern "C" void *data_ov048_0225ca5c[2];
extern "C" void *data_ov048_0225ca54[2];
extern "C" void *data_ov048_0225c86c[2];
extern "C" void *data_ov048_0225ca44[2];
extern "C" void *data_ov048_0225ca3c[2];
extern "C" void *data_ov048_0225ca34[2];
extern "C" void *data_ov048_0225ca2c[2];
extern "C" void *data_ov048_0225ca24[2];
extern "C" void *data_ov048_0225ca1c[2];
extern "C" void *data_ov048_0225ca14[2];
extern "C" void *data_ov048_0225c84c[2];
extern "C" void *data_ov048_0225ca04[2];
extern "C" void *data_ov048_0225c9fc[2];
extern "C" void *data_ov048_0225c9f4[2];
extern "C" void *data_ov048_0225c9ec[2];
extern "C" void *data_ov048_0225c9e4[2];
extern "C" void *data_ov048_0225c9dc[2];
extern "C" void *data_ov048_0225c9d4[2];
extern "C" void *data_ov048_0225c82c[2];
extern "C" void *data_ov048_0225c9c4[2];
extern "C" void *data_ov048_0225c9bc[2];
extern "C" void *data_ov048_0225c9b4[2];
extern "C" void *data_ov048_0225c9ac[2];
extern "C" void *data_ov048_0225c9a4[2];
extern "C" void *data_ov048_0225c99c[2];
extern "C" void *data_ov048_0225c994[2];
extern "C" void *data_ov048_0225c80c[2];
extern "C" void *data_ov048_0225c984[2];
extern "C" void *data_ov048_0225c97c[2];
extern "C" void *data_ov048_0225c974[2];
extern "C" void *data_ov048_0225c96c[2];
extern "C" void *data_ov048_0225c964[2];
extern "C" void *data_ov048_0225c95c[2];
extern "C" void *data_ov048_0225c954[2];
extern "C" void *data_ov048_0225c94c[2];
extern "C" void *data_ov048_0225c944[2];
extern "C" void *data_ov048_0225c93c[2];
extern "C" void *data_ov048_0225c934[2];
extern "C" void *data_ov048_0225c92c[2];
extern "C" void *data_ov048_0225c924[2];
extern "C" void *data_ov048_0225c91c[2];
extern "C" void *data_ov048_0225c914[2];
extern "C" void *data_ov048_0225c904[2];
extern "C" void *data_ov048_0225c8f4[2];
extern "C" void *data_ov048_0225c78c[2];
extern "C" void *data_ov048_0225c79c[2];
extern "C" void *data_ov048_0225c8ec[2];
extern "C" void *data_ov048_0225c8e4[2];
extern "C" void *data_ov048_0225c794[2];
extern "C" void *data_ov048_0225c8d4[2];
extern "C" void *data_ov048_0225c7b4[2];
extern "C" void *data_ov048_0225c8c4[2];
extern "C" void *data_ov048_0225c8bc[2];
extern "C" void *data_ov048_0225c89c[2];
extern "C" void *data_ov048_0225c8ac[2];
extern "C" void *data_ov048_0225c8fc[2];
extern "C" void *data_ov048_0225c90c[2];
extern "C" void *data_ov048_0225ca0c[2];
extern "C" void *data_ov048_0225ca94[2];
extern "C" void *data_ov048_0225c884[2];
extern "C" void *data_ov048_0225c87c[2];
extern "C" void *data_ov048_0225c874[2];
extern "C" void *data_ov048_0225c77c[2];
extern "C" void *data_ov048_0225c864[2];
extern "C" void *data_ov048_0225c85c[2];
extern "C" void *data_ov048_0225c854[2];
extern "C" void *data_ov048_0225c76c[2];
extern "C" void *data_ov048_0225c844[2];
extern "C" void *data_ov048_0225c83c[2];
extern "C" void *data_ov048_0225c834[2];
extern "C" void *data_ov048_0225c75c[2];
extern "C" void *data_ov048_0225c824[2];
extern "C" void *data_ov048_0225c81c[2];
extern "C" void *data_ov048_0225c814[2];
extern "C" void *data_ov048_0225c74c[2];
extern "C" void *data_ov048_0225c804[2];
extern "C" void *data_ov048_0225c7fc[2];
extern "C" void *data_ov048_0225c7f4[2];
extern "C" void *data_ov048_0225c7ec[2];
extern "C" void *data_ov048_0225c7e4[2];
extern "C" void *data_ov048_0225c7dc[2];
extern "C" void *data_ov048_0225c7d4[2];
extern "C" void *data_ov048_0225c7cc[2];
extern "C" void *data_ov048_0225c7c4[2];
extern "C" void *data_ov048_0225c7bc[2];
extern "C" void *data_ov048_0225c7a4[2];
extern "C" void *data_ov048_0225c88c[2];
extern "C" void *data_ov048_0225c894[2];
extern "C" void *data_ov048_0225c8b4[2];
extern "C" void *data_ov048_0225c98c[2];
extern "C" void *data_ov048_0225ca9c[2];
extern "C" void *data_ov048_0225c784[2];
extern "C" void *data_ov048_0225c704[2];
extern "C" void *data_ov048_0225c774[2];
extern "C" void *data_ov048_0225c6fc[2];
extern "C" void *data_ov048_0225c764[2];
extern "C" void *data_ov048_0225c6f4[2];
extern "C" void *data_ov048_0225c754[2];
extern "C" void *data_ov048_0225c70c[2];
extern "C" void *data_ov048_0225c744[2];
extern "C" void *data_ov048_0225c73c[2];
extern "C" void *data_ov048_0225c72c[2];
extern "C" void *data_ov048_0225c734[2];
extern "C" const Unk_ov048_Vec sCopperGateCheckPos;
extern "C" char sSpNpcCopperKey[];
extern "C" void *sSpNpcCopperModelPathPtr;
extern "C" const Unk_ov048_Vec sCopperTurnBackPos;
extern "C" const Unk_ov048_Vec sCopperSendOffExitPos;
extern "C" char sSpNpcCopperTexturePath[];
extern "C" Unk_ov048_SceneEntry sSpNpcCopperProfile;
extern "C" const Unk_ov048_Vec sCopperSendOffWalkPos;
extern "C" const Unk_ov048_Vec sCopperArrivalWalkPos;

extern "C" char sSpNpcCopperSequence4Key[] = {'s', 'p', '_', 'e', 't', 'c', '_', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', '4', 0};

extern "C" char sSpNpcCopperModelPath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'c', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" const u8 sCopperWifiStartMsgs[4] = {0x24, 0x41, 0x7f, 0x00};

BOOL SpNpcCopper::mainAct08() {
    static SpNpcCopper::Fn tbl[6] = {
        *(SpNpcCopper::Fn *)data_ov048_0225c95c,
        *(SpNpcCopper::Fn *)data_ov048_0225c954,
        *(SpNpcCopper::Fn *)data_ov048_0225c94c,
        *(SpNpcCopper::Fn *)data_ov048_0225c944,
        *(SpNpcCopper::Fn *)data_ov048_0225c93c,
        *(SpNpcCopper::Fn *)data_ov048_0225c934,
    };
    if (unk_658.unk_7e9 < 6) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::act09Step0() {
    Unk_ov048_Vec v;
    s32 a = func_020a0414();
    if (Unk_ov048_0225b4e4_Is2()) {
        if (func_02094f2c(1, a)) {
            func_02094f48(1, 4);
            v = sCopperArrivalWalkPos;
            PlayerActor_RequestAct6F(&v, 0x35c, a);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step1() {
    u8 buf[0x1c];
    void *h;
    void *o;
    s32 a = func_020a0414();
    h = PlayerData_GetBySessionSlot();
    if (func_020951b8(a) == 0) {
        o = TalkWindow_Get(0);
        unk_658.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&unk_658, (const char *)sSpNpcCopperMsgKey);
        unk_658.unk_1e = 0x67;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &unk_658);
        _ZN12Unk_020e1c64C1Ev(&buf[4]);
        _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(h), &buf[4]);
        _ZN15TalkWindowState7setSlotEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN12Unk_020e1c64D1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step2() {
    void *o = TalkWindow_Get(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        if (func_020a03c4() == 0) {
            func_020b78c4();
            return FALSE;
        }
        _ZN15TalkWindowState13detachRequestEv(o);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step3() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL SpNpcCopper::setupAct09() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}
extern "C" void *sSpNpcCopperTexturePathPtr = sSpNpcCopperTexturePath;

BOOL SpNpcCopper::mainAct09() {
    static SpNpcCopper::Fn tbl[4] = {
        *(SpNpcCopper::Fn *)data_ov048_0225c7cc,
        *(SpNpcCopper::Fn *)data_ov048_0225caa4,
        *(SpNpcCopper::Fn *)data_ov048_0225c744,
        *(SpNpcCopper::Fn *)data_ov048_0225c8fc,
    };
    if (unk_658.unk_7e9 < 4) {
        if ((this->*tbl[unk_658.unk_7e9])()) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0A() {
    return setupAct08();
}

BOOL SpNpcCopper::mainAct0A() {
    return mainAct08();
}

BOOL SpNpcCopper::act0BStep0() {
    u8 buf[0x1c];
    void *h;
    void *o;
    func_020a5ef8();
    h = PlayerData_GetBySessionSlot();
    if (Unk_ov048_0225b4e4_Is2()) {
        o = TalkWindow_Get(0);
        unk_658.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&unk_658, (const char *)sSpNpcCopperMsgKey);
        unk_658.unk_1e = 0x7b;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &unk_658);
        _ZN12Unk_020e1c64C1Ev(&buf[4]);
        _ZN8PlayerId13func_020940d0EP9MsgString(_ZN10PlayerData11getPlayerIdEv(h), &buf[4]);
        _ZN15TalkWindowState7setSlotEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN12Unk_020e1c64D1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep1() {
    s32 a = func_020a5ef8();
    void *o = TalkWindow_Get(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        Unk_ov048_Vec v;
        _ZN15TalkWindowState13detachRequestEv(o);
        v = sCopperDepartWalkPos;
        PlayerActor_RequestAct6F(&v, 0x35c, a);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep2() {
    s32 a = func_020a5ef8();
    void *b = PlayerData_GetBySessionSlot();
    if (func_020951b8(a) == 0) {
        _ZN10PlayerData13func_02098a58Ev(b);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep3() {
    func_020b4bbc(func_020b4934(), 1);
    return TRUE;
}

BOOL SpNpcCopper::setupAct0B() {
    unk_658.unk_7e9 = 0;
    return TRUE;
}
extern "C" Unk_ov048_0225cd04_Ent sSpNpcCopperTalkScripts[23] = {
    {NULL, 0},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c8ac, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c784, 0},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c7c4, 0},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225cac4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c8ec, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c70c, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c8e4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c714, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c7a4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c884, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225cad4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c7fc, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c73c, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c72c, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c8c4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225cae4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c71c, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225caec, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c8b4, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225cadc, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225c894, 1},
    {*(SpNpcCopperTalk::Fn *)data_ov048_0225cacc, 1},
};

extern "C" void *sSpNpcCopperMsgKey = sSpNpcCopperKey;

extern "C" const Unk_ov048_Vec sCopperDepartWalkPos = {0x10000, 0x0, 0x5000};

extern "C" Unk_ov048_State_Ent sSpNpcCopperActTable[18] = {
    {*(SpNpcCopper::Fn *)data_ov048_0225cabc, *(SpNpcCopper::Fn *)data_ov048_0225cab4},
    {*(SpNpcCopper::Fn *)data_ov048_0225caac, *(SpNpcCopper::Fn *)data_ov048_0225c90c},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca9c, *(SpNpcCopper::Fn *)data_ov048_0225c924},
    {*(SpNpcCopper::Fn *)data_ov048_0225c98c, *(SpNpcCopper::Fn *)data_ov048_0225ca84},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca7c, *(SpNpcCopper::Fn *)data_ov048_0225ca74},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca6c, *(SpNpcCopper::Fn *)data_ov048_0225ca64},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca5c, *(SpNpcCopper::Fn *)data_ov048_0225ca54},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca4c, *(SpNpcCopper::Fn *)data_ov048_0225ca44},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca3c, *(SpNpcCopper::Fn *)data_ov048_0225ca34},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca2c, *(SpNpcCopper::Fn *)data_ov048_0225ca24},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca1c, *(SpNpcCopper::Fn *)data_ov048_0225ca14},
    {*(SpNpcCopper::Fn *)data_ov048_0225ca0c, *(SpNpcCopper::Fn *)data_ov048_0225ca04},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9fc, *(SpNpcCopper::Fn *)data_ov048_0225c9f4},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9ec, *(SpNpcCopper::Fn *)data_ov048_0225c9e4},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9dc, *(SpNpcCopper::Fn *)data_ov048_0225c9d4},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9cc, *(SpNpcCopper::Fn *)data_ov048_0225c9c4},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9bc, *(SpNpcCopper::Fn *)data_ov048_0225c9b4},
    {*(SpNpcCopper::Fn *)data_ov048_0225c9ac, *(SpNpcCopper::Fn *)data_ov048_0225c9a4},
};

extern "C" void *data_ov048_0225c8dc[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceRetryWifiEi, 0};

extern "C" void *data_ov048_0225cacc[2] = {(void *)_ZN15SpNpcCopperTalk12waitSaveDoneEv, 0};

extern "C" void *data_ov048_0225c724[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceRetryLocalEi, 0};

extern "C" void *data_ov048_0225c8cc[2] = {(void *)_ZN11SpNpcCopper10act0BStep1Ev, 0};

extern "C" void *data_ov048_0225c7ac[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceHostMethodEi, 0};

extern "C" void *data_ov048_0225c714[2] = {(void *)_ZN15SpNpcCopperTalk13requestGoHomeEv, 0};

extern "C" void *data_ov048_0225c6ec[2] = {(void *)_ZN15SpNpcCopperTalk13onChoiceUnk5FEi, 0};

extern "C" void *data_ov048_0225c71c[2] = {(void *)_ZN15SpNpcCopperTalk16startBbsDownloadEv, 0};

extern "C" void *data_ov048_0225caec[2] = {(void *)_ZN15SpNpcCopperTalk15pollBbsDownloadEv, 0};

extern "C" void *data_ov048_0225cae4[2] = {(void *)_ZN15SpNpcCopperTalk16pollMailDownloadEv, 0};

extern "C" void *data_ov048_0225cadc[2] = {(void *)_ZN15SpNpcCopperTalk12shutdownWifiEv, 0};

extern "C" void *data_ov048_0225cad4[2] = {(void *)_ZN15SpNpcCopperTalk20startGameStatsUploadEv, 0};

extern "C" void *data_ov048_0225c8a4[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceRetryWifiEi, 0};

extern "C" void *data_ov048_0225cac4[2] = {(void *)_ZN15SpNpcCopperTalk13connectToTownEv, 0};

extern "C" void *data_ov048_0225cabc[2] = {(void *)_ZN11SpNpcCopper10setupAct00Ev, 0};

extern "C" void *data_ov048_0225cab4[2] = {(void *)_ZN11SpNpcCopper9mainAct00Ev, 0};

extern "C" void *data_ov048_0225caac[2] = {(void *)_ZN11SpNpcCopper10setupAct01Ev, 0};

extern "C" void *data_ov048_0225caa4[2] = {(void *)_ZN11SpNpcCopper10act09Step1Ev, 0};

extern "C" void *data_ov048_0225c9cc[2] = {(void *)_ZN11SpNpcCopper10setupAct0FEv, 0};

extern "C" void *data_ov048_0225ca4c[2] = {(void *)_ZN11SpNpcCopper10setupAct07Ev, 0};

extern "C" void *data_ov048_0225ca8c[2] = {(void *)_ZN15SpNpcCopperTalk12showMainMenuEv, 0};

extern "C" void *data_ov048_0225ca84[2] = {(void *)_ZN11SpNpcCopper9mainAct03Ev, 0};

extern "C" void *data_ov048_0225ca7c[2] = {(void *)_ZN11SpNpcCopper10setupAct04Ev, 0};

extern "C" void *data_ov048_0225ca74[2] = {(void *)_ZN11SpNpcCopper9mainAct04Ev, 0};

extern "C" void *data_ov048_0225ca6c[2] = {(void *)_ZN11SpNpcCopper10setupAct05Ev, 0};

extern "C" void *data_ov048_0225ca64[2] = {(void *)_ZN11SpNpcCopper9mainAct05Ev, 0};

extern "C" void *data_ov048_0225ca5c[2] = {(void *)_ZN11SpNpcCopper10setupAct06Ev, 0};

extern "C" void *data_ov048_0225ca54[2] = {(void *)_ZN11SpNpcCopper9mainAct06Ev, 0};

extern "C" void *data_ov048_0225c86c[2] = {(void *)_ZN15SpNpcCopperTalk12showMainMenuEv, 0};

extern "C" void *data_ov048_0225ca44[2] = {(void *)_ZN11SpNpcCopper9mainAct07Ev, 0};

extern "C" void *data_ov048_0225ca3c[2] = {(void *)_ZN11SpNpcCopper10setupAct08Ev, 0};

extern "C" void *data_ov048_0225ca34[2] = {(void *)_ZN11SpNpcCopper9mainAct08Ev, 0};

extern "C" void *data_ov048_0225ca2c[2] = {(void *)_ZN11SpNpcCopper10setupAct09Ev, 0};

extern "C" void *data_ov048_0225ca24[2] = {(void *)_ZN11SpNpcCopper9mainAct09Ev, 0};

extern "C" void *data_ov048_0225ca1c[2] = {(void *)_ZN11SpNpcCopper10setupAct0AEv, 0};

extern "C" void *data_ov048_0225ca14[2] = {(void *)_ZN11SpNpcCopper9mainAct0AEv, 0};

extern "C" void *data_ov048_0225c84c[2] = {(void *)_ZN15SpNpcCopperTalk14startWifiLoginEv, 0};

extern "C" void *data_ov048_0225ca04[2] = {(void *)_ZN11SpNpcCopper9mainAct0BEv, 0};

extern "C" void *data_ov048_0225c9fc[2] = {(void *)_ZN11SpNpcCopper10setupAct0CEv, 0};

extern "C" void *data_ov048_0225c9f4[2] = {(void *)_ZN11SpNpcCopper9mainAct0CEv, 0};

extern "C" void *data_ov048_0225c9ec[2] = {(void *)_ZN11SpNpcCopper10setupAct0DEv, 0};

extern "C" void *data_ov048_0225c9e4[2] = {(void *)_ZN11SpNpcCopper9mainAct0DEv, 0};

extern "C" void *data_ov048_0225c9dc[2] = {(void *)_ZN11SpNpcCopper10setupAct0EEv, 0};

extern "C" void *data_ov048_0225c9d4[2] = {(void *)_ZN11SpNpcCopper9mainAct0EEv, 0};

extern "C" void *data_ov048_0225c82c[2] = {(void *)_ZN15SpNpcCopperTalk16startTurnBackActEv, 0};

extern "C" void *data_ov048_0225c9c4[2] = {(void *)_ZN11SpNpcCopper9mainAct0FEv, 0};

extern "C" void *data_ov048_0225c9bc[2] = {(void *)_ZN11SpNpcCopper10setupAct10Ev, 0};

extern "C" void *data_ov048_0225c9b4[2] = {(void *)_ZN11SpNpcCopper9mainAct10Ev, 0};

extern "C" void *data_ov048_0225c9ac[2] = {(void *)_ZN11SpNpcCopper10setupAct11Ev, 0};

extern "C" void *data_ov048_0225c9a4[2] = {(void *)_ZN11SpNpcCopper9mainAct11Ev, 0};

extern "C" void *data_ov048_0225c99c[2] = {(void *)_ZN15SpNpcCopperTalk14openFriendListEv, 0};

extern "C" void *data_ov048_0225c994[2] = {(void *)_ZN15SpNpcCopperTalk16onChoiceMainMenuEi, 0};

extern "C" void *data_ov048_0225c80c[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceFriendCodeEi, 0};

extern "C" void *data_ov048_0225c984[2] = {(void *)_ZN15SpNpcCopperTalk14openFriendListEv, 0};

extern "C" void *data_ov048_0225c97c[2] = {(void *)_ZN15SpNpcCopperTalk12showMainMenuEv, 0};

extern "C" void *data_ov048_0225c974[2] = {(void *)_ZN15SpNpcCopperTalk14startWifiVisitEv, 0};

extern "C" void *data_ov048_0225c96c[2] = {(void *)_ZN15SpNpcCopperTalk20onChoiceGoOutInsteadEi, 0};

extern "C" void *data_ov048_0225c964[2] = {(void *)_ZN15SpNpcCopperTalk15startLocalVisitEv, 0};

extern "C" void *data_ov048_0225c95c[2] = {(void *)_ZN11SpNpcCopper10act08Step0Ev, 0};

extern "C" void *data_ov048_0225c954[2] = {(void *)_ZN11SpNpcCopper10act08Step1Ev, 0};

extern "C" void *data_ov048_0225c94c[2] = {(void *)_ZN11SpNpcCopper10act08Step2Ev, 0};

extern "C" void *data_ov048_0225c944[2] = {(void *)_ZN11SpNpcCopper10act08Step3Ev, 0};

extern "C" void *data_ov048_0225c93c[2] = {(void *)_ZN11SpNpcCopper10act08Step4Ev, 0};

extern "C" void *data_ov048_0225c934[2] = {(void *)_ZN11SpNpcCopper10act08Step5Ev, 0};

extern "C" void *data_ov048_0225c92c[2] = {(void *)_ZN15SpNpcCopperTalk20showAnythingElseMenuEv, 0};

extern "C" void *data_ov048_0225c924[2] = {(void *)_ZN11SpNpcCopper9mainAct02Ev, 0};

extern "C" void *data_ov048_0225c91c[2] = {(void *)_ZN15SpNpcCopperTalk20showAnythingElseMenuEv, 0};

extern "C" void *data_ov048_0225c914[2] = {(void *)_ZN15SpNpcCopperTalk19onChoiceSaveAndQuitEi, 0};

extern "C" void *data_ov048_0225c904[2] = {(void *)_ZN15SpNpcCopperTalk16onChoiceHostWifiEi, 0};

extern "C" void *data_ov048_0225c8f4[2] = {(void *)_ZN15SpNpcCopperTalk11startGoHomeEv, 0};

extern "C" void *data_ov048_0225c78c[2] = {(void *)_ZN15SpNpcCopperTalk21showWifiIdSavedResultEv, 0};

extern "C" void *data_ov048_0225c79c[2] = {(void *)_ZN15SpNpcCopperTalk9startSaveEv, 0};

extern "C" void *data_ov048_0225c8ec[2] = {(void *)_ZN15SpNpcCopperTalk13waitConnectedEv, 0};

extern "C" void *data_ov048_0225c8e4[2] = {(void *)_ZN15SpNpcCopperTalk16waitJoinAcceptedEv, 0};

extern "C" void *data_ov048_0225c794[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceRetryWifiEi, 0};

extern "C" void *data_ov048_0225c8d4[2] = {(void *)_ZN11SpNpcCopper10act0BStep0Ev, 0};

extern "C" void *data_ov048_0225c7b4[2] = {(void *)_ZN11SpNpcCopper10act0BStep2Ev, 0};

extern "C" void *data_ov048_0225c8c4[2] = {(void *)_ZN15SpNpcCopperTalk17startMailDownloadEv, 0};

extern "C" void *data_ov048_0225c8bc[2] = {(void *)_ZN11SpNpcCopper10act0BStep3Ev, 0};

extern "C" void *data_ov048_0225c89c[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceHostLocalEi, 0};

extern "C" void *data_ov048_0225c8ac[2] = {(void *)_ZN15SpNpcCopperTalk16scanForOpenTownsEv, 0};

extern "C" void *data_ov048_0225c8fc[2] = {(void *)_ZN11SpNpcCopper10act09Step3Ev, 0};

extern "C" void *data_ov048_0225c90c[2] = {(void *)_ZN11SpNpcCopper9mainAct01Ev, 0};

extern "C" void *data_ov048_0225ca0c[2] = {(void *)_ZN11SpNpcCopper10setupAct0BEv, 0};

extern "C" void *data_ov048_0225ca94[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceVisitLocalEi, 0};

extern "C" void *data_ov048_0225c884[2] = {(void *)_ZN15SpNpcCopperTalk13waitWifiLoginEv, 0};

extern "C" void *data_ov048_0225c87c[2] = {(void *)_ZN15SpNpcCopperTalk12showMainMenuEv, 0};

extern "C" void *data_ov048_0225c874[2] = {(void *)_ZN15SpNpcCopperTalk12showMainMenuEv, 0};

extern "C" void *data_ov048_0225c77c[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceVisitWifiEi, 0};

extern "C" void *data_ov048_0225c864[2] = {(void *)_ZN15SpNpcCopperTalk9closeGateEv, 0};

extern "C" void *data_ov048_0225c85c[2] = {(void *)_ZN15SpNpcCopperTalk16startOpenGateActEv, 0};

extern "C" void *data_ov048_0225c854[2] = {(void *)_ZN15SpNpcCopperTalk15startTownSearchEv, 0};

extern "C" void *data_ov048_0225c76c[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceBackToMenuEi, 0};

extern "C" void *data_ov048_0225c844[2] = {(void *)_ZN15SpNpcCopperTalk14startWifiLoginEv, 0};

extern "C" void *data_ov048_0225c83c[2] = {(void *)_ZN15SpNpcCopperTalk16startOpenGateActEv, 0};

extern "C" void *data_ov048_0225c834[2] = {(void *)_ZN15SpNpcCopperTalk16startTurnBackActEv, 0};

extern "C" void *data_ov048_0225c75c[2] = {(void *)_ZN15SpNpcCopperTalk16onChoiceHostMenuEi, 0};

extern "C" void *data_ov048_0225c824[2] = {(void *)_ZN15SpNpcCopperTalk16startTurnBackActEv, 0};

extern "C" void *data_ov048_0225c81c[2] = {(void *)_ZN15SpNpcCopperTalk14startWifiLoginEv, 0};

extern "C" void *data_ov048_0225c814[2] = {(void *)_ZN15SpNpcCopperTalk12openTownListEv, 0};

extern "C" void *data_ov048_0225c74c[2] = {(void *)_ZN15SpNpcCopperTalk16onChoiceMainMenuEi, 0};

extern "C" void *data_ov048_0225c804[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceVisitTownEi, 0};

extern "C" void *data_ov048_0225c7fc[2] = {(void *)_ZN15SpNpcCopperTalk19pollGameStatsUploadEv, 0};

extern "C" void *data_ov048_0225c7f4[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceFriendCodeEi, 0};

extern "C" void *data_ov048_0225c7ec[2] = {(void *)_ZN15SpNpcCopperTalk15startSendOffActEv, 0};

extern "C" void *data_ov048_0225c7e4[2] = {(void *)_ZN15SpNpcCopperTalk16startFarewellActEv, 0};

extern "C" void *data_ov048_0225c7dc[2] = {(void *)_ZN15SpNpcCopperTalk20showAnythingElseMenuEv, 0};

extern "C" void *data_ov048_0225c7d4[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceRetryLocalEi, 0};

extern "C" void *data_ov048_0225c7cc[2] = {(void *)_ZN11SpNpcCopper10act09Step0Ev, 0};

extern "C" void *data_ov048_0225c7c4[2] = {(void *)_ZN15SpNpcCopperTalk16onTownListClosedEv, 0};

extern "C" void *data_ov048_0225c7bc[2] = {(void *)_ZN15SpNpcCopperTalk17onChoiceRetryWifiEi, 0};

extern "C" void *data_ov048_0225c7a4[2] = {(void *)_ZN15SpNpcCopperTalk18waitGoHomeAcceptedEv, 0};

extern "C" void *data_ov048_0225c88c[2] = {(void *)_ZN15SpNpcCopperTalk19onChoiceConnectWifiEi, 0};

extern "C" void *data_ov048_0225c894[2] = {(void *)_ZN15SpNpcCopperTalk11requestSaveEv, 0};

extern "C" void *data_ov048_0225c8b4[2] = {(void *)_ZN15SpNpcCopperTalk14onWifiLoggedInEv, 0};

extern "C" void *data_ov048_0225c98c[2] = {(void *)_ZN11SpNpcCopper10setupAct03Ev, 0};

extern "C" void *data_ov048_0225ca9c[2] = {(void *)_ZN11SpNpcCopper10setupAct02Ev, 0};

extern "C" void *data_ov048_0225c784[2] = {(void *)_ZN15SpNpcCopperTalk18onFriendListClosedEv, 0};

extern "C" void *data_ov048_0225c704[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceFriendCodeEi, 0};

extern "C" void *data_ov048_0225c774[2] = {(void *)_ZN15SpNpcCopperTalk18onChoiceBackToMenuEi, 0};

extern "C" void *data_ov048_0225c6fc[2] = {(void *)_ZN15SpNpcCopperTalk23onChoiceGateAlreadyOpenEi, 0};

extern "C" void *data_ov048_0225c764[2] = {(void *)_ZN15SpNpcCopperTalk14onChoiceGoHomeEi, 0};

extern "C" void *data_ov048_0225c6f4[2] = {(void *)_ZN15SpNpcCopperTalk20onChoiceUpdateWifiIdEi, 0};

extern "C" void *data_ov048_0225c754[2] = {(void *)_ZN15SpNpcCopperTalk16onChoiceHostMenuEi, 0};

extern "C" void *data_ov048_0225c70c[2] = {(void *)_ZN15SpNpcCopperTalk11requestJoinEv, 0};

extern "C" void *data_ov048_0225c744[2] = {(void *)_ZN11SpNpcCopper10act09Step2Ev, 0};

extern "C" void *data_ov048_0225c73c[2] = {(void *)_ZN15SpNpcCopperTalk22startGameStatsDownloadEv, 0};

extern "C" void *data_ov048_0225c72c[2] = {(void *)_ZN15SpNpcCopperTalk21pollGameStatsDownloadEv, 0};

extern "C" void *data_ov048_0225c734[2] = {(void *)_ZN15SpNpcCopperTalk19onChoiceVisitMethodEi, 0};

BOOL SpNpcCopper::mainAct0B() {
    static SpNpcCopper::Fn tbl[4] = {
        *(SpNpcCopper::Fn *)data_ov048_0225c8d4,
        *(SpNpcCopper::Fn *)data_ov048_0225c8cc,
        *(SpNpcCopper::Fn *)data_ov048_0225c7b4,
        *(SpNpcCopper::Fn *)data_ov048_0225c8bc,
    };
    if (unk_658.unk_7e9 < 4) {
        if ((this->*tbl[unk_658.unk_7e9])() != 0) {
            unk_658.unk_7e9++;
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0C() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0C() {
    if (TalkWindow_Get(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        FieldPos_ToUnit(&a, &b, &v);
        _ZN12Unk_02086ef013func_02086f00Ej(h, 1);
        _ZN12Unk_02086ef013func_02086ef8Ei(h, unk_8e);
        Camera_SaveView();
        SaveManager_RequestAct14();
        func_020b4f18(func_020b4934(), 0xc, &v, 0x800000, s, 2, 2);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0D() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0D() {
    if (TalkWindow_Get(0)->unk_04 == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = func_02085180(func_020850e0());
        e = func_02095204(4);
        Unk_ov048_0225b278_Vec *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->unk_8e;
        a = 0;
        b = 0;
        FieldPos_ToUnit(&a, &b, &v);
        _ZN12Unk_02086ef013func_02086f00Ej(h, 2);
        _ZN12Unk_02086ef013func_02086ef8Ei(h, unk_8e);
        func_020b4aa8(func_020b4934(), 0xc, &v, 0x800000, s, a, b);
        Camera_SaveView();
        SaveManager_RequestAct17();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0E() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0E() {
    if (TalkWindow_Get(0)->unk_04 == 5) {
        SaveManager_RequestAct02();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0F() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0F() {
    s32 a, b;
    if (func_0201ba88() != 0) {
        a = 4;
        b = 4;
        s32 u;
        s32 x;
        if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b) != 0 && (x = a, u = gCommManager->unk_64, x == u) && x == b) {
            func_0201b9fc(1, u, u);
            ((ActorTalkRequest *)&unk_658)->vfunc_08();
            unk_658.func_02015ab0(getPlayerActor(4));
            SpNpcCopper_ChangeAct(this, 2);
        } else if (func_020a62a0() != 0 && b == 4) {
            func_0201b9fc(1, gCommManager->unk_64, 4);
            SpNpcCopper_ChangeAct(this, 1);
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct11() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct11() {
    s32 a, b;
    if (func_0201ba88() != 0) {
        a = 4;
        b = 4;
        if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b) != 0) {
            if (a == 4) {
                if (func_020a62a0() != 0) {
                    func_0201b9fc(1, gCommManager->unk_64, 4);
                    SpNpcCopper_ChangeAct(this, 4);
                }
            }
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct10() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct10() {
    return TRUE;
}

SpNpcCopperTalk::SpNpcCopperTalk() {
    _ZN7PatternC1Ev(&unk_b8);
    func_0203ecdc(&unk_3d8);
    func_0203ec54(&unk_4e0);
    _ZN12Unk_0208722413func_020872ecEv(&unk_5b4);
}

SpNpcCopperTalk::~SpNpcCopperTalk() {
    _ZN12Unk_0208722413func_020872dcEv(&unk_5b4);
    func_0203ec50(&unk_4e0);
    func_0203eccc(&unk_3d8);
    _ZN7PatternD1Ev(&unk_b8);
}

void SpNpcCopperTalk::attachOwner(u8 *p) {
    vfunc_08();
    unk_b4 = p;
    unk_ac = 0xb;
}

void SpNpcCopperTalk::setTopic(s32 v) {
    unk_ac = v;
}

s32 SpNpcCopperTalk::getTopic() {
    return unk_ac;
}

void SpNpcCopperTalk::endComm() {
    if (Comm_End() != 0) {
        NetOverlay_Restore();
    }
}

void SpNpcCopperTalk::startComm(s32 a, s32 b) {
    switch (a) {
    case 3:
    case 4:
        NetOverlay_LoadWifi();
        break;
    case 1:
    case 2:
        NetOverlay_LoadWireless();
        break;
    case 0:
        break;
    }
    Comm_Start(a, 4, b);
}

s32 SpNpcCopperTalk::setFriendCodeArgs(s64 v) {
    s64 q1 = (u64)v / 100000000;
    s64 m1 = q1 * 100000000;
    s64 rem = v - m1;
    s64 q2 = (u64)rem / 10000;
    func_02015958((s32)q1, 5, 4, 6, 0);
    func_02015958((s32)q2, 8, 4, 6, 0);
    func_02015958((s32)v - (s32)(q2 * 10000) - (s32)m1, 9, 4, 6, 0);
}

BOOL SpNpcCopperTalk::hasFriends() {
    u8 *arr = (u8 *)FriendList_GetEntries(_ZN10PlayerData13getFriendListEv(PlayerData_GetCurrent()));
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (DwcFriendData_IsValid(FriendEntry_GetFriendData(arr + i * 0x1c)) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}

void SpNpcCopperTalk::vfunc_78(void *arg) {
    Unk_ov048_0225ae04_Out *out = (Unk_ov048_0225ae04_Out *)arg;
    static Unk_ov048_0225ae04_Row tbl[11] = {
        {sSpNpcCopperMsgKey, 0}, {sSpNpcCopperMsgKey, 4}, {sSpNpcCopperMsgKey, 5},
        {sSpNpcCopperMsgKey, 6}, {sSpNpcCopperMsgKey, 7}, {sSpNpcCopperMsgKey, 0xa},
        {sSpNpcCopperMsgKey, 0x68}, {sSpNpcCopperMsgKey, 0xd}, {sSpNpcCopperSequence4Key, 9},
        {sSpNpcCopperMsgKey, 0x47}, {sSpNpcCopperMsgKey, 0x48},
    };
    void *h;
    unk_7e1 = 0;
    unk_7e0 = 0;
    h = PlayerData_GetCurrent();
    if (func_020a032c() != 0) {
        setTopic(8);
    } else if (getTopic() == 6) {
        if (func_ov004_02225e9c() == 0) {
            func_ov004_02225ee0();
        }
    } else if (getTopic() != 7 && getTopic() != 9 && getTopic() != 0xa) {
        if (func_0202e148() == 0) {
            setTopic(5);
        } else if (_ZN12Unk_02097ff413func_02098044Ej(h, 5) == 0) {
            setTopic(0);
            _ZN12Unk_02097ff413func_0209801cEj(h, 5);
        } else {
            s32 t = Clock_GetTimeOfDay() + 1;
            setTopic(t);
        }
    }
    if (unk_ac >= 0 && unk_ac < 0xb) {
        out->unk_04 = tbl[unk_ac].id;
        out->unk_00 = tbl[unk_ac].name;
    }
}

void SpNpcCopperTalk::startSave() {
    lockWindow(0);
    setScript(0x15);
}

void SpNpcCopperTalk::showMainMenu() {
    u8 buf[2];
    s32 v;
    if (_ZN11CommManager7isMyAidEj(gCommManager, 0) != 0) {
        v = 0x10;
    } else {
        v = 0xf;
    }
    buf[0] = v;
    _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, sSpNpcCopperMsgKey);
}

void SpNpcCopperTalk::closeGate() {
    SpNpcCopper_ChangeAct(unk_b4, 7);
    func_02073340();
    if (Net_GetMode() == 3 || Net_GetMode() == 4) {
        setScript(0x14);
    } else {
        endComm();
    }
}

void SpNpcCopperTalk::lockWindow(s32 flag) {
    void *p = unk_3c;
    if (flag != 0) {
        _ZN15TalkWindowState13func_0206799cEv(p, 1);
    } else {
        _ZN15TalkWindowState13func_0206799cEv(p, 0);
    }
    _ZN15TalkWindowState11lockAdvanceEv(p);
}

void SpNpcCopperTalk::unlockWindow() {
    void *p = unk_3c;
    _ZN15TalkWindowState13func_02067990Ev(p);
    _ZN15TalkWindowState13unlockAdvanceEv(p);
}

void SpNpcCopperTalk::startTurnBackAct() {
    SpNpcCopper_ChangeAct(unk_b4, 5);
}

void SpNpcCopperTalk::startOpenGateAct() {
    SpNpcCopper_ChangeAct(unk_b4, 6);
}

void SpNpcCopperTalk::startWifiLogin() {
    lockWindow(1);
    startComm(4, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 0x960;
    setScript(0xa);
}

void SpNpcCopperTalk::startTownSearch() {
    lockWindow(1);
    startComm(2, 2);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    setScript(1);
}

void SpNpcCopperTalk::openTownList() {
    func_0201514c((u32)unk_b8.unk_2f4, (u32)unk_b8.unk_2e0, 0);
    func_020151d0(4);
    setScript(3);
}

void SpNpcCopperTalk::openFriendList() {
    func_02015170(0x3c, 0);
    func_020151d0(2);
    setScript(2);
}

void SpNpcCopperTalk::startLocalVisit() {
    lockWindow(1);
    if (Net_GetMode() == 2) {
        _ZN11CommManager12setErrorModeEj(gCommManager, 1);
    } else {
        startComm(2, 1);
    }
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    setScript(4);
}

void SpNpcCopperTalk::startWifiVisit() {
    _ZN11CommManager12setErrorModeEj(gCommManager, 1);
    if (Net_GetMode() != 4) {
        startWifiLogin();
    } else {
        s32 t;
        lockWindow(1);
        t = unk_b8.unk_3d4;
        NetOverlay_AssertWifi();
        Net_WifiConnectToHost(t);
        *(u16 *)(unk_b4 + 0xe3e) = 0x960;
        setScript(5);
    }
}

void SpNpcCopperTalk::startSendOffAct() {
    SpNpcCopper_ChangeAct(unk_b4, 8);
}

void SpNpcCopperTalk::startFarewellAct() {
    SpNpcCopper_ChangeAct(unk_b4, 0xa);
}

void SpNpcCopperTalk::showAnythingElseMenu() {
    u8 buf[2];
    buf[0] = getAnythingElseMsg();
    _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, sSpNpcCopperMsgKey);
}

void SpNpcCopperTalk::showWifiIdSavedResult() {
    u8 buf[2];
    if (unk_7e0 != 0) {
        setFriendCodeArgs(func_020ea3c4(PlayerWifiData_GetDwcUserData(_ZN10PlayerData15getWifiUserDataEv(PlayerData_GetCurrent()))));
        buf[0] = 0x76;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, sSpNpcCopperMsgKey);
    } else {
        buf[1] = getWifiLoginResultMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &buf[1], sSpNpcCopperMsgKey);
    }
}

// ---- aad4

void SpNpcCopperTalk::startGoHome() {
    lockWindow(1);
    *(u16 *)(unk_b4 + 0xe3e) = 200;
    setScript(8);
}
extern "C" const Unk_ov048_Vec sCopperGateCheckPos = {0x10000, 0x0, 0x10000};

extern "C" char sSpNpcCopperKey[] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'a', 't', 'e', 'k', 'e', 'e', 'p', 'e', 'r', 0};

extern "C" void *sSpNpcCopperModelPathPtr = sSpNpcCopperModelPath;

extern "C" const Unk_ov048_Vec sCopperTurnBackPos = {0x10000, 0x0, 0x11800};

extern "C" const Unk_ov048_Vec sCopperSendOffExitPos = {0x10000, 0x0, 0x2000};

void SpNpcCopperTalk::vfunc_14() {
    static Unk_ov048_0225a8d4_Row tbl[28] = {
        {0x00, *(SpNpcCopperTalk::Fn *)data_ov048_0225c97c},
        {0x04, *(SpNpcCopperTalk::Fn *)data_ov048_0225ca8c},
        {0x05, *(SpNpcCopperTalk::Fn *)data_ov048_0225c87c},
        {0x06, *(SpNpcCopperTalk::Fn *)data_ov048_0225c874},
        {0x07, *(SpNpcCopperTalk::Fn *)data_ov048_0225c86c},
        {0x38, *(SpNpcCopperTalk::Fn *)data_ov048_0225c864},
        {0x46, *(SpNpcCopperTalk::Fn *)data_ov048_0225c85c},
        {0x54, *(SpNpcCopperTalk::Fn *)data_ov048_0225c854},
        {0x3e, *(SpNpcCopperTalk::Fn *)data_ov048_0225c84c},
        {0x5b, *(SpNpcCopperTalk::Fn *)data_ov048_0225c844},
        {0x6c, *(SpNpcCopperTalk::Fn *)data_ov048_0225c83c},
        {0x47, *(SpNpcCopperTalk::Fn *)data_ov048_0225c834},
        {0x48, *(SpNpcCopperTalk::Fn *)data_ov048_0225c82c},
        {0x49, *(SpNpcCopperTalk::Fn *)data_ov048_0225c824},
        {0x25, *(SpNpcCopperTalk::Fn *)data_ov048_0225c81c},
        {0x55, *(SpNpcCopperTalk::Fn *)data_ov048_0225c814},
        {0x5d, *(SpNpcCopperTalk::Fn *)data_ov048_0225c99c},
        {0x6d, *(SpNpcCopperTalk::Fn *)data_ov048_0225c984},
        {0x62, *(SpNpcCopperTalk::Fn *)data_ov048_0225c974},
        {0x59, *(SpNpcCopperTalk::Fn *)data_ov048_0225c964},
        {0x68, *(SpNpcCopperTalk::Fn *)data_ov048_0225c7ec},
        {0x0d, *(SpNpcCopperTalk::Fn *)data_ov048_0225c7e4},
        {0x11, *(SpNpcCopperTalk::Fn *)data_ov048_0225c7dc},
        {0x58, *(SpNpcCopperTalk::Fn *)data_ov048_0225c92c},
        {0x61, *(SpNpcCopperTalk::Fn *)data_ov048_0225c91c},
        {0x75, *(SpNpcCopperTalk::Fn *)data_ov048_0225c78c},
        {0x12, *(SpNpcCopperTalk::Fn *)data_ov048_0225c8f4},
        {0x6a, *(SpNpcCopperTalk::Fn *)data_ov048_0225c79c},
    };
    s32 i = 0;
    u8 *p = &unk_1e;
    for (; (u32)i < 0x1c; i++) {
        u32 a = *(u32 *)((u8 *)tbl + i * 12);
        u32 b = *p;
        if (a == b) {
            (this->*tbl[i].f)();
        }
    }
}

void SpNpcCopperTalk::onChoiceUpdateWifiId(s32 p) {
    if (p == 0) {
        NetOverlay_LoadWifi();
        PlayerWifiData_Create(_ZN10PlayerData15getWifiUserDataEv(PlayerData_GetCurrent()));
        NetOverlay_Restore();
    }
    onChoiceConnectWifi(p);
}

void SpNpcCopperTalk::onChoiceVisitTown(s32 p) {
    if (p == 2) {
        endComm();
    }
}

void SpNpcCopperTalk::onChoiceConnectWifi(s32 p) {
    if (p == 0) {
        u32 id = 0xff;
        switch (unk_7e3) {
        case 2:
            unk_aa = 0x5b;
            id = 0x6a;
            break;
        case 1:
            unk_aa = 0x3e;
            id = 0x6a;
            break;
        case 0:
            id = 0x25;
            break;
        }
        if (id != 0xff) {
            u8 v = id;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
        }
    }
}

void SpNpcCopperTalk::onChoiceFriendCode(s32 p) {
    if (p == 0) {
        unk_7e3 = 0;
        checkWifiReady();
    }
}

void SpNpcCopperTalk::onChoiceVisitMethod(s32 p) {
    if (p == 1) {
        unk_7e3 = 2;
        checkWifiReady();
    } else if (p == 2) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceHostMethod(s32 p) {
    if (p == 1) {
        unk_7e3 = 1;
        checkWifiReady();
    } else if (p == 2) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::checkWifiReady() {
    u8 v0, v1, v2, v3, v4;
    if (unk_7e3 != 0 && hasFriends() == 0) {
        if (unk_7e3 == 2) {
            v0 = 0x6f;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v0, sSpNpcCopperMsgKey);
        } else {
            v1 = 0x70;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v1, sSpNpcCopperMsgKey);
        }
        return;
    }
    void *s = PlayerWifiData_GetDwcUserData(_ZN10PlayerData15getWifiUserDataEv(PlayerData_GetCurrent()));
    NetOverlay_LoadWifi();
    if (func_020ea3dc(s)) {
        if (func_020e9d94(s)) {
            v2 = sCopperWifiStartMsgs[unk_7e3];
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v2, sSpNpcCopperMsgKey);
        } else {
            unk_7e0 = 1;
            v3 = 0x72;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v3, sSpNpcCopperMsgKey);
        }
    } else {
        v4 = 0x71;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v4, sSpNpcCopperMsgKey);
    }
    NetOverlay_Restore();
}

void SpNpcCopperTalk::onChoiceGoHome(s32 p) {
    if (p == 0) {
        u8 v = 0x19;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceMainMenu(s32 p) {
    void *h = PlayerData_GetCurrent();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = gCommManager;
            if (_ZN11CommManager8isOnlineEv(g) && _ZN11CommManager7isMyAidEj(g, 0)) {
                id = 0x50;
            } else if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 0xe;
        } else {
            id = getInviteOrCloseGateMsg();
        }
        break;
    case 2:
        if (_ZN11CommManager7isMyAidEj(gCommManager, 0) == 0) {
            if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
                id = 8;
            } else {
                void *s;
                NetOverlay_LoadWifi();
                s = PlayerWifiData_GetDwcUserData(_ZN10PlayerData15getWifiUserDataEv(h));
                if (func_020e9d94(s)) {
                    if (func_020ea3dc(s)) {
                        id = 0x29;
                        s64 t = func_020ea3c4(s);
                        _ZN15SpNpcCopperTalk17setFriendCodeArgsEx(this, (s32)t, (s32)(t >> 32));
                    } else {
                        id = 0x23;
                    }
                } else {
                    id = 0x2f;
                }
                NetOverlay_Restore();
            }
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceHostMenu(s32 p) {
    void *h = PlayerData_GetCurrent();
    u32 id = 0xff;
    switch (p) {
    case 0:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = gCommManager;
            if (_ZN11CommManager8isOnlineEv(g) && _ZN11CommManager7isMyAidEj(g, 0)) {
                id = 0x50;
            } else if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 1)) {
            id = 0xe;
        } else {
            id = getInviteOrCloseGateMsg();
        }
        break;
    }
    if (id != 0xff) {
        u8 v = id;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceBackToMenu(s32 p) {
    if (p == 1) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceHostLocal(s32 p) { confirmStartComm(p, 0x46); }

void SpNpcCopperTalk::onChoiceHostWifi(s32 p) { confirmStartComm(p, 0x3e); }

void SpNpcCopperTalk::onChoiceVisitLocal(s32 p) { confirmStartComm(p, 0x54); }

void SpNpcCopperTalk::onChoiceVisitWifi(s32 p) { confirmStartComm(p, 0x5b); }

void SpNpcCopperTalk::confirmStartComm(s32 p, s32 id) {
    u8 v0;
    u8 v1;
    u8 v2;
    if (p == 0) {
        unk_aa = id;
        if (unk_7e1 != 0) {
            v0 = unk_aa;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v0, sSpNpcCopperMsgKey);
        } else {
            v1 = 0x6a;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v1, sSpNpcCopperMsgKey);
        }
    }
    if (p == 1) {
        v2 = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v2, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceGoOutInstead(s32 p) {
    if (p == 0) {
        u8 v = 0x52;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
        func_ov004_02225ebc();
        func_02073340();
        if (Net_GetMode() == 3 || Net_GetMode() == 4) {
            setScript(0x14);
        } else {
            endComm();
        }
    }
}

void SpNpcCopperTalk::onChoiceRetryLocal(s32 p) {
    if (p == 0) {
        u8 v = 0x59;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceRetryWifi(s32 p) {
    if (p == 0) {
        u8 v = 0x62;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceSaveAndQuit(s32 p) {
    Unk_ov048_Owner *o = unk_3c;
    if (p == 0) {
        o->unk_14 = 0;
        SpNpcCopper_ChangeAct(unk_b4, 0xe);
    } else if (p == 1) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(o, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceGateAlreadyOpen(s32 p) {}

void SpNpcCopperTalk::onChoiceUnk5F(s32 p) {
    switch (p) {
    case 0:
        setScript(0x14);
        break;
    case 1: {
        u8 v = 0x6c;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
        break;
    }
    case 2:
        setScript(0x14);
        break;
    }
}
extern "C" char sSpNpcCopperTexturePath[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'p', 'l', 'c', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" Unk_ov048_SceneEntry sSpNpcCopperProfile = {SpNpcCopper_Create, 0x72, 0x77, 2, 0x5000, 0x5000, 0x3e800};

extern "C" const Unk_ov048_Vec sCopperSendOffWalkPos = {0x10000, 0x0, 0x13000};

extern "C" const Unk_ov048_Vec sCopperArrivalWalkPos = {0x10000, 0x0, 0x11800};

void SpNpcCopperTalk::vfunc_18() {
    if (func_020a032c() == 0) {
        static Unk_ov048_0225a108_Row tbl[29] = {
            {0x15, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c89c},
            {0x41, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c904},
            {0x14, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225ca94},
            {0x7f, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c77c},
            {0x24, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c774},
            {0x56, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c76c},
            {0x0a, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c764},
            {0x10, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c75c},
            {0x21, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c754},
            {0x0f, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c74c},
            {0x22, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c994},
            {0x51, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c96c},
            {0x63, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c724},
            {0x65, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c7d4},
            {0x7d, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c794},
            {0x7e, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c7bc},
            {0x80, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c8dc},
            {0x82, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c8a4},
            {0x2c, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c914},
            {0x6b, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c6fc},
            {0x5f, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c6ec},
            {0x23, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c704},
            {0x28, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c80c},
            {0x2f, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c7f4},
            {0x52, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c734},
            {0x3d, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c7ac},
            {0x71, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c88c},
            {0x74, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c6f4},
            {0x57, *(SpNpcCopperTalk::ArgFn *)data_ov048_0225c804},
        };
        s32 i = 0;
        u8 *p = &unk_1e;
        for (; (u32)i < 0x1d; i++) {
            u32 off = i * 12;
            u32 a = *(u32 *)((u8 *)tbl + off);
            u32 b = *p;
            if (a == b) {
                s32 arg = _ZN10ChoiceList9getResultEv(_ZN15TalkWindowState13getChoiceListEv(unk_3c));
                Unk_ov048_0225a108_Row *r = (Unk_ov048_0225a108_Row *)((u32)tbl + off);
                (this->*r->f)(arg);
            }
        }
    }
}

void SpNpcCopperTalk::vfunc_80() {
    if (sSpNpcCopperTalkScripts[unk_b0].flag != 0) {
        if (sSpNpcCopperTalkScripts[unk_b0].f) {
            (this->*sSpNpcCopperTalkScripts[unk_b0].f)();
        }
    }
}

void SpNpcCopperTalk::vfunc_84() {
    if (sSpNpcCopperTalkScripts[unk_b0].flag == 0) {
        if (sSpNpcCopperTalkScripts[unk_b0].f) {
            (this->*sSpNpcCopperTalkScripts[unk_b0].f)();
        }
    }
}

// Tiny setter last so it is not inlined into callers.
void SpNpcCopperTalk::setScript(s32 s) { unk_b0 = s; }

void SpNpcCopperTalk::waitWifiLogin() {
    Net_PollConnected(NetOverlay_AssertAny());
    if (checkWifiLoginError() == 0) {
        if (Net_GetWifiFriendList(NetOverlay_AssertWifi()) != 0) {
            if (unk_7e3 == 0) {
                setScript(0x13);
            } else {
                setScript(unk_b0 + 1);
            }
        }
    }
}

// ---- a000

void SpNpcCopperTalk::startMailDownload() {
    if (AxMail_DownloadMail()) {
        setScript(unk_b0 + 1);
    } else {
        setScript(unk_b0 + 2);
    }
}

void SpNpcCopperTalk::pollMailDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(unk_b0 + 1);
    } else if (AxMail_PollMail()) {
        setScript(unk_b0 + 1);
    }
}

void SpNpcCopperTalk::startBbsDownload() {
    if (AxMail_DownloadBbs()) {
        setScript(unk_b0 + 1);
    } else {
        setScript(unk_b0 + 2);
    }
}

void SpNpcCopperTalk::pollBbsDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(unk_b0 + 1);
    } else if (AxMail_PollBbs()) {
        setScript(unk_b0 + 1);
    }
}

void SpNpcCopperTalk::startGameStatsUpload() {
    if (GameStats_Upload()) {
        setScript(unk_b0 + 1);
    } else {
        setScript(unk_b0 + 2);
    }
}

void SpNpcCopperTalk::pollGameStatsUpload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(unk_b0 + 1);
    } else if (GameStats_PollUpload()) {
        setScript(unk_b0 + 1);
    }
}

void SpNpcCopperTalk::startGameStatsDownload() {
    if (GameStats_Download()) {
        setScript(unk_b0 + 1);
    } else {
        setScript(unk_b0 + 2);
    }
}

void SpNpcCopperTalk::pollGameStatsDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(unk_b0 + 1);
    } else if (GameStats_PollDownload()) {
        setScript(unk_b0 + 1);
    }
}

BOOL SpNpcCopperTalk::isSkippableNetError() {
    s32 v = Net_GetLastErrorCode();
    if (v < 0) {
        v = -v;
    }
    if (func_020e77cc(v, 0x17ed0, 0x182b7)) {
        return TRUE;
    }
    return FALSE;
}

void SpNpcCopperTalk::onWifiLoggedIn() {
    u8 *g = (u8 *)gCommManager;
    u8 *r4 = _ZN11CommManager15getWifiUserDataEv(g);
    void *r6 = PlayerData_GetCurrent();
    u8 m;
    s32 mv;
    if (unk_1e == 0x62) {
        u8 *r6b = _ZN11CommManager17getWifiFriendListEv(g);
        s32 h = unk_b8.unk_3d4;
        s32 k;
        NetOverlay_AssertWifi();
        k = Net_WifiFindFriend(h);
        u8 *e = r6b + k * 0x13;
        if (e[0x190] != 6 || k == -1) {
            showErrorAndAbort(0x78, 1);
        } else {
            h = unk_b8.unk_3d4;
            NetOverlay_AssertWifi();
            Net_WifiConnectToHost(h);
            *(u16 *)(unk_b4 + 0xe3e) = 0x960;
            setScript(5);
        }
    } else {
        if (func_020ea3e8(r4 + 0x10)) {
            func_020ea3d0(r4 + 0x10, DwcFriendData_GetBytes(PlayerWifiData_GetOwnFriendData(_ZN10PlayerData15getWifiUserDataEv(r6))));
            MI_CpuCopy8(r4 + 0x10, PlayerWifiData_GetDwcUserData(_ZN10PlayerData15getWifiUserDataEv(r6)), 0x40);
            if (Save_WritePlayerWifiData() == 0) {
                mv = 0x75;
            } else {
                mv = 2;
            }
        } else {
            mv = getWifiLoginResultMsg();
        }
        m = mv;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &m, sSpNpcCopperMsgKey);
        if (unk_7e3 == 0 || unk_7e0 != 0) {
            setScript(0x14);
        } else {
            unlockWindow();
            setScript(0);
        }
    }
}

void SpNpcCopperTalk::scanForOpenTowns() {
    s32 n;
    void **arr;
    void *p;
    void *r7;
    u8 i;
    u8 buf[0x14];
    u32 LampLights[0x1c / 4];
    u32 LightLevel[0x18 / 4];
    u32 C[0x1c / 4];
    u32 WindowLight[0x1c / 4];
    if (checkScanTimeout() == 0) {
      n = func_020eae78(Comm_SendEmpty());
      if (n > 0) {
        arr = (void **)Net_GetScanResults(NetOverlay_AssertWireless());
        _ZN12Unk_020dd38cC2Ev(LampLights);
        _ZN12Unk_020dd374C2Ev(LightLevel);
        _ZN12Unk_020e1c64C1Ev(C);
        _ZN12Unk_020e1c4cC1Ev(WindowLight);
        r7 = unk_3c;
        for (i = 0; i < n; i++) {
            p = arr[i];
            s32 t;
            if (p) {
                NetOverlay_AssertWireless();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    NetOverlay_AssertWireless();
                    MI_CpuCopy8(func_020ea6f4(p), &buf[1], t);
                    if (buf[0x11] == 0) {
                        MI_CpuCopy8(p, unk_b8.unk_2f4, 0xe0);
                        func_020a78a4(LightLevel, &buf[1], 8);
                        _ZN9MsgString11fromEncodedEP13EncodedStringii(LampLights, LightLevel, 0, 0);
                        func_020a78a4(WindowLight, &buf[9], 8);
                        _ZN9MsgString11fromEncodedEP13EncodedStringii(C, WindowLight, 0, 0);
                        _ZN15TalkWindowState7setSlotEiPv(r7, 3, LampLights);
                        _ZN15TalkWindowState7setSlotEiPv(r7, 4, C);
                        buf[0] = 0x57;
                        _ZN15TalkWindowState14setNextMessageEPhPv(r7, buf, sSpNpcCopperMsgKey);
                        unlockWindow();
                        setScript(0);
                        break;
                    }
                }
            }
        }
        _ZN12Unk_020e1c4cD1Ev(WindowLight);
        _ZN12Unk_020e1c64D1Ev(C);
        _ZN12Unk_020dd374D1Ev(LightLevel);
        _ZN12Unk_020dd38cD1Ev(LampLights);
    }
    }
}

void SpNpcCopperTalk::onFriendListClosed() {
    if (func_0206ed18()) {
        s32 r5 = func_0206ed38();
        u8 a;
        NetOverlay_AssertWifi();
        unk_b8.unk_3d4 = func_020ea598(r5);
        a = 0x62;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &a, sSpNpcCopperMsgKey);
        setScript(0);
    } else {
        u8 b;
        setScript(0x14);
        b = 0x61;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &b, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onTownListClosed() {
    if (func_0206ed18()) {
        u8 a = 0x59;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &a, sSpNpcCopperMsgKey);
    } else {
        u8 b = 0x58;
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &b, sSpNpcCopperMsgKey);
        endComm();
    }
    setScript(0);
}

void SpNpcCopperTalk::shutdownWifi() {
    void *t = unk_3c;
    if (t) {
        _ZN15TalkWindowState11lockAdvanceEv(t);
    }
    if (Net_WifiShutdownStepExt(NetOverlay_AssertWifi())) {
        if (t) {
            unlockWindow();
        }
        if (PlayerData_GetCurrent()) {
            s32 r = _ZN10PlayerData8getIndexEv();
            if (r >= 0 && r < 4) {
                u8 b;
                GameStats_ApplyDownload();
                AxMail_ApplyMail();
                AxMail_ApplyBbs();
                endComm();
                Wifi_StoreFriendList();
                if (Save_WritePlayerFriendList()) {
                    b = 2;
                    _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &b, sSpNpcCopperMsgKey);
                }
            }
        }
        setScript(0);
    }
}

void SpNpcCopperTalk::requestSave() {
    if (((SpNpcCopper *)unk_b4)->canStartSave()) {
        SaveManager_RequestAct13();
        setScript(0x16);
    } else {
        SpNpcMissing1_ResetAct();
    }
}

void SpNpcCopperTalk::waitSaveDone() {
    void *t = unk_3c;
    if (func_020a0828()) {
        u8 a;
        unlockWindow();
        a = 0xa;
        _ZN15TalkWindowState14setNextMessageEPhPv(t, &a, (void *)"sp_etc_sequence2");
        setScript(0);
    } else if (func_020a084c()) {
        u8 b;
        unk_7e1 = 1;
        unlockWindow();
        b = unk_aa;
        _ZN15TalkWindowState14setNextMessageEPhPv(t, &b, sSpNpcCopperMsgKey);
        SpNpcMissing1_ChangeAct05();
        setScript(0);
    }
}

BOOL SpNpcCopperTalk::checkNetError(s32 flag) {
    s32 code = Net_GetError();
    u32 a[0x2c / 4];
    u32 b[0x2c / 4];
    if (code != 0 || flag != 0) {
        if (flag != 0) {
            s32 r = getConnectErrorMsg();
            showErrorAndAbort(r, 0);
        } else if (Net_GetMode() == 3 || Net_GetMode() == 4) {
            s32 v = Net_GetLastErrorCode();
            s32 q;
            if (v < 0) {
                v = -v;
            }
            q = v / 1000;
            _ZN11MsgString25C1Ev(a);
            _ZN11MsgString25C1Ev(b);
            String_FormatNumber(a, q, 2, 6, 0, 0);
            String_FormatNumber(b, v - q * 1000, 3, 6, 0, 0);
            _ZN15TalkWindowState7setSlotEiPv(unk_3c, 6, a);
            _ZN15TalkWindowState7setSlotEiPv(unk_3c, 7, b);
            if (code == 0x400b) {
                showErrorAndAbort(0x7d, 0);
            } else if (code == 0x400a) {
                showErrorAndAbort(0x78, 0);
            } else if (v == 0x13a1a) {
                showErrorAndAbort(0x7a, 0);
            } else {
                showErrorAndAbort(0x7e, 0);
            }
            _ZN11MsgString25D1Ev(b);
            _ZN11MsgString25D1Ev(a);
        } else {
            s32 r = getConnectErrorMsg();
            showErrorAndAbort(r, 0);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkConnectTimeout() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        s32 r = getConnectErrorMsg();
        showErrorAndAbort(r, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkFindTownTimeout() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        showErrorAndAbort(0x65, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkWifiLoginError() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        showErrorAndAbort(0x7a, 1);
        return TRUE;
    }
    if (Net_GetError() != 0) {
        s32 v = Net_GetLastErrorCode();
        if (v < 0) {
            v = -v;
        }
        s32 r = ((SpNpcCopper *)this)->getWifiErrorMsg(v);
        showErrorAndAbort(r, 1);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkScanTimeout() {
    if (func_020e7500(unk_b4 + 0xe3e) == 0) {
        showErrorAndAbort(0x56, 0);
        return TRUE;
    }
    return FALSE;
}

void SpNpcCopperTalk::showErrorAndAbort(u32 msg, s32 unused) {
    u8 b = msg;
    _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &b, sSpNpcCopperMsgKey);
    if (Net_GetMode() == 3 || Net_GetMode() == 4) {
        setScript(0x14);
    } else {
        unlockWindow();
        endComm();
        setScript(0);
    }
}

// ---- 96e8

void SpNpcCopperTalk::connectToTown() {
    BOOL z = FALSE;
    s32 n;
    void **arr;
    u8 i;
    u8 buf[0x18];
    if (checkNetError(0)) {
        return;
    }
    if (checkFindTownTimeout()) {
        return;
    }
    n = func_020eae78(Comm_SendEmpty());
    if (n > 0) {
        arr = (void **)Net_GetScanResults(NetOverlay_AssertWireless());
        for (i = z; i < n; i++) {
            u8 *p = (u8 *)arr[i];
            s32 t;
            BOOL hit;
            if (p) {
                NetOverlay_AssertWireless();
                t = func_020ea6c8(p);
                if (t == 0x11) {
                    NetOverlay_AssertWireless();
                    MI_CpuCopy8(func_020ea6f4(p), buf, t);
                    if (buf[0x10] == 0) {
                        if (p[2] == unk_b8.unk_2f4[2] && p[3] == unk_b8.unk_2f4[3] && p[4] == unk_b8.unk_2f4[4] && p[5] == unk_b8.unk_2f4[5] &&
                            p[6] == unk_b8.unk_2f4[6] && p[7] == unk_b8.unk_2f4[7]) {
                            hit = TRUE;
                        } else {
                            hit = z;
                        }
                        if (hit) {
                            NetOverlay_AssertWireless();
                            Net_ConnectToParent(p);
                            *(u16 *)(unk_b4 + 0xe3e) = 200;
                            setScript(5);
                        }
                    }
                }
            }
        }
    }
}

void SpNpcCopperTalk::waitConnected() {
    if (checkNetError(0) == 0 && checkConnectTimeout() == 0) {
        NetOverlay_AssertAny();
        if (Net_PollConnected()) {
            if (Net_GetMode() != 3) {
                Net_GetMode();
            }
            *(u16 *)((u8 *)unk_b4 + 0xe3e) = 200;
            setScript(6);
            Net_GetMyAid();
            Comm_PrepareJoin();
        }
    }
}

void SpNpcCopperTalk::requestJoin() {
    NetOverlay_AssertAny();
    BOOL b;
    if (Net_PollConnected() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (checkNetError(b)) {
        Comm_ClearSyncState();
    } else if (Comm_RequestSync(0)) {
        unk_7e2 = 0;
        setScript(7);
    }
}

void SpNpcCopperTalk::waitJoinAccepted() {
    NetOverlay_AssertAny();
    BOOL b;
    if (Net_PollConnected() == 0) {
        b = TRUE;
    } else {
        b = FALSE;
    }
    if (checkNetError(b)) {
        Comm_ClearSyncState();
        if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0()))) {
            if (_ZN12Unk_020872fc13func_02087314Ev(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()))) {
                _ZN12Unk_020872fc13func_020872fcEv(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()));
            }
        }
    } else {
        s32 t = Comm_GetSyncState();
        if (t == 5) {
            if (_ZN12Unk_02086f8413func_02086fa8Ev(func_02085178(func_020850e0()))) {
                if (_ZN12Unk_020872fc13func_02087314Ev(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent())) == 0) {
                    _ZN12Unk_020872fc13func_02087308Ev(_ZN10PlayerData13func_020986a4Ev(PlayerData_GetCurrent()));
                }
            }
            if (CommSend_PlayerData(&unk_7e2, func_020a5f6c())) {
                _ZN11CommManager12setErrorModeEj(gCommManager, 0);
                func_020a5f38(0);
                func_020a5f18(0);
                Net_GetMyAid();
                func_020a0408();
                Comm_ClearSyncState();
                unk_3c->unk_14 = 0;
                unlockWindow();
                setScript(0);
                SpNpcCopper_ChangeAct(unk_b4, 0xc);
            }
        } else if (t == 6 || Net_GetError() == 0x800c) {
            Comm_ClearSyncState();
            if (Net_GetError() == 0x800c) {
                showErrorAndAbort(0x79, 1);
            } else {
                showErrorAndAbort(getJoinErrorMsg(), 0);
            }
        }
    }
}

void SpNpcCopperTalk::requestGoHome() {
    Comm_RequestSync(1);
    setScript(9);
}

void SpNpcCopperTalk::waitGoHomeAccepted() {
    Unk_ov048_Owner *o = unk_3c;
    s32 t = Comm_GetSyncState();
    if ((u32)(t - 5) <= 1) {
        unlockWindow();
        setScript(0);
        if (t == 5) {
            o->unk_14 = 0;
            SpNpcCopper_ChangeAct(unk_b4, 0xd);
            func_020a5f38(1);
            func_020a5f18(1);
        } else {
            u8 b[4];
            b[0] = 0xc;
            _ZN15TalkWindowState14setNextMessageEPhPv(o, b, sSpNpcCopperMsgKey);
        }
        Comm_ClearSyncState();
    }
}

s32 SpNpcCopperTalk::getWifiLoginResultMsg() {
    u8 *p = _ZN11CommManager17getWifiFriendListEv(gCommManager);
    s32 n = 0;
    s32 i;
    for (i = 0; i < 0x20; i++) {
        if (*(p + i * 0x13 + 0x190) == 6) {
            n++;
        }
    }
    s32 r = 0;
    switch (unk_7e3) {
    case 0: {
        NetOverlay_LoadWifi();
        r = 0x26;
        PlayerData_GetCurrent();
        _ZN10PlayerData15getWifiUserDataEv();
        PlayerWifiData_GetDwcUserData();
        s64 t = func_020ea3c4();
        _ZN15SpNpcCopperTalk17setFriendCodeArgsEx(this, (s32)t, (s32)(t >> 32));
        NetOverlay_Restore();
        break;
    }
    case 1:
        if (n != 0) {
            r = 0x6b;
        } else {
            r = 0x46;
        }
        break;
    case 2:
        r = 0x5d;
        break;
    }
    return r;
}

s32 SpNpcCopperTalk::getInviteOrCloseGateMsg() {
    void *g = gCommManager;
    if (_ZN11CommManager7isMyAidEj(g, 0)) {
        if (_ZN11CommManager8isOnlineEv(g)) {
            return 0x17;
        }
        if (Net_GetMode() == 3) {
            return 0x3a;
        }
        return 0x38;
    }
    return 0x3d;
}

u32 SpNpcCopperTalk::getAnythingElseMsg() {
    return (u8)(_ZN11CommManager7isMyAidEj(gCommManager, 0) ? 0x21 : 0x22);
}

u32 SpNpcCopperTalk::getConnectErrorMsg() {
    BOOL r = TRUE;
    if (Net_GetMode() != 3 && Net_GetMode() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x82 : 0x65);
}

u32 SpNpcCopperTalk::getJoinErrorMsg() {
    BOOL r = TRUE;
    if (Net_GetMode() != 3 && Net_GetMode() != 4) {
        r = FALSE;
    }
    return (u8)(r ? 0x80 : 0x63);
}

s32 SpNpcCopper::getWifiErrorMsg(s32 id) {
    s32 r = 0x84;
    if (id == 0x4e85 || id == 0x5bcf || RNG(id, 0x59d8, 0x5dbf)) {
        r = 0x83;
    } else if (RNG(id, 0x4e86, 0x4e8b) || id == 0x4e8d || RNG(id, 0x4e8f, 0x5207) || RNG(id, 0xcb24, 0xcb82) ||
               RNG(id, 0xcc4c, 0xccaf) || RNG(id, 0xcf08, 0xcf6b) || RNG(id, 0xcf6c, 0xcfcf) ||
               RNG(id, 0xcfd0, 0xd033)) {
        r = 0x84;
    } else if (id == 0x4e8c) {
        r = 0x85;
    } else if (id == 0x4e8e) {
        r = 0x86;
    } else if (id == 0xc3b3) {
        r = 0x87;
    } else if (RNG(id, 0xc79b, 0xc79e) || RNG(id, 0xc7a0, 0xc7fe) || RNG(id, 0xc864, 0xc8c6)) {
        r = 0x88;
    } else if (id == 0xc79f) {
        r = 0x89;
    } else if (RNG(id, 0xc800, 0xc863)) {
        r = 0x8a;
    } else if (RNG(id, 0xcb20, 0xcb23) || RNG(id, 0xcb84, 0xcb87) || RNG(id, 0xcbe8, 0xcbeb)) {
        r = 0x8b;
    }
    s32 q = id / 1000;
    MsgString25 a;
    MsgString25 b;
    String_FormatNumber(&a, q, 2, 6, 0, 0);
    String_FormatNumber(&b, id - q * 1000, 3, 6, 0, 0);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, 6, &a);
    _ZN15TalkWindowState7setSlotEiPv(unk_3c, 7, &b);
    return r;
}

BOOL SpNpcCopper::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_58() {
    if (unk_558.unk_0b != 0) {
        return TRUE;
    }
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcCopper::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, gCommManager->unk_64, arg);
            SpNpcCopper_ChangeAct(this, 0x10);
        } else if (func_0201ba88()) {
            s32 g = gCommManager->unk_64;
            func_0201b9fc(1, g, g);
            SpNpcCopper_ChangeAct(this, 0x10);
        }
        break;
    case 1: {
        ((ActorTalkRequest *)&unk_658)->vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        SpNpcCopper_ChangeAct(this, 2);
        break;
    }
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->unk_64) {
            func_0201b9fc(1, arg, arg);
            SpNpcCopper_ChangeAct(this, 0x11);
        } else if (func_0201ba88()) {
            s32 g = gCommManager->unk_64;
            func_0201b9fc(1, g, g);
            ((ActorTalkRequest *)&unk_658)->vfunc_08();
            unk_658.func_02015ab0(getPlayerActor(4));
            SpNpcCopper_ChangeAct(this, 2);
        }
        break;
    case 2:
    case 5:
    case 6:
    case 7:
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                func_0201b9fc(1, gCommManager->unk_64, 4);
                SpNpcCopper_ChangeAct(this, 4);
            } else {
                func_0201b9fc(1, 4, gCommManager->unk_64);
                SpNpcCopper_ChangeAct(this, 0xf);
            }
        }
        unk_658.setTopic(0xb);
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (_ZN12Unk_020d77a413func_0201b9e8Eii(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, gCommManager->unk_64, 4);
                        SpNpcCopper_ChangeAct(this, 1);
                    }
                }
            }
        }
        break;
    }
}

BOOL SpNpcCopper::checkPlayerAtGate() {
    Unk_ov048_Global *g = gCommManager;
    Unk_ov048_Vec_Loc v;
    if (_ZN11CommManager8isOnlineEv(g)) {
        return FALSE;
    }
    if (func_020b50e8() == 0x2f) {
        return FALSE;
    }
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->unk_64) == 0) {
        return FALSE;
    }
    Unk_ov048_Vec *p = func_020947f0(4);
    *(Unk_ov048_Vec *)&v = *p;
    if (v.unk_08 <= sCopperGateCheckPos.unk_08) {
        PlayerData_GetCurrent();
        if (_ZN11CommManager8isOnlineEv(g)) {
            unk_658.setTopic(9);
        } else {
            unk_658.setTopic(10);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::vfunc_7c() {
    if (func_020b50e8() == 0xc) {
        return FALSE;
    }
    return Unk_020d8bc8::vfunc_7c();
}

// ---- 8de0

BOOL SpNpcCopper::canStartSave() {
    if (_ZN12Unk_02019dd813func_02019d8cEv(&unk_2ac) == 0xba && SpNpcMissing1_IsIdle() && unk_658.unk_3c->unk_04 == 2) {
        return TRUE;
    }
    return FALSE;
}




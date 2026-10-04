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
class NpcActor;
class SpNpcCopper;
class SpNpcCopperTalk;

struct Unk_ov048_Vec {
    s32 x, y, z;
};

struct Unk_ov048_Vec_Loc : Unk_ov048_Vec {
    Unk_ov048_Vec_Loc() {}
};

struct Unk_ov048_Global {
    u8 pad_00[0x64];
    s32 myAid;
};

struct Unk_ov048_Owner {
    u8 pad_00[4];
    s32 state;
    s32 unk_08;
    u8 pad_0c[8];
    s32 unk_14;
};

struct Unk_ov048_0225b278_Vec {
    s32 x, y, z;
};

struct Unk_ov048_0225b278_Ent {
    u8 pad_00[0x5c];
    Unk_ov048_0225b278_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
};

struct Unk_ov048_0225ae04_Row {
    const void *name;
    u8 id;
};

struct Unk_ov048_Rec {
    u8 pad_00[4];
    s32 state;
};
struct Unk_ov048_0225ae04_Out {
    const void *msgKey;
    u8 msgIndex;
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
extern u8 gSaveTownId[];
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
void _ZN11MsgString9CC2Ev(void *);
void _ZN15EncodedString8BC2Ev(void *);
void _ZN11MsgString9BC1Ev(void *);
void _ZN14EncodedString8C1Ev(void *);
void _ZN14EncodedString8D1Ev(void *);
void _ZN11MsgString9BD1Ev(void *);
void _ZN15EncodedString8BD1Ev(void *);
void _ZN11MsgString9CD1Ev(void *);
BOOL EncodedString_SetRaw(void *, const void *, s32);
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
BOOL MenuCtrl_IsResultOk();
s32 MenuCtrl_GetIndex();
u8 * _ZN11CommManager15getWifiUserDataEv(void *);
u8 * _ZN11CommManager17getWifiFriendListEv(void *);
void * PlayerData_GetCurrent();
s32 _ZN10PlayerData8getIndexEv();
void GameStats_ApplyDownload();
void AxMail_ApplyMail();
void AxMail_ApplyBbs();
void Wifi_StoreFriendList();
BOOL Save_WritePlayerFriendList();
BOOL SaveManager_HasAct13Failed();
BOOL SaveManager_IsIdleAfterAct13();
void SpNpcKatie_ChangeAct05();
s32 SpNpcKatie_ResetAct();
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
BOOL GameStart_IsActive();
s32 _ZN10ChoiceList9getResultEv(void *);
void * _ZN15TalkWindowState13getChoiceListEv(void *);
s32 CheckInGate_Close();
s32 Comm_ResetNetSession();
s32 _ZN12Unk_02097ff48testFlagEj(void *, s32);
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
s32 _ZN15TalkWindowState12hideBusyIconEv(void *);
s32 _ZN15TalkWindowState13unlockAdvanceEv(void *);
s32 _ZN15TalkWindowState12showBusyIconEv(void *, s32);
s32 CheckInGate_IsOpen();
s32 CheckInGate_Open();
s32 Talk_IsInOwnTown();
void _ZN12Unk_02097ff47setFlagEj(void *, s32);
u32 Clock_GetTimeOfDay();
void * _ZN10PlayerData13getFriendListEv(void *);
void * FriendList_GetEntries(void *);
void * FriendEntry_GetFriendData(void *);
s32 DwcFriendData_IsValid(void *);
s32 NetOverlay_LoadWireless();
s32 Comm_Start(s32, s32, s32);
s32 Comm_End();
s32 _ZN8NpcActor11netGetSlotsEii(void *, s32 *, s32 *);
BOOL NetArea_IsLocalOwner();
Unk_ov048_Rec * TalkWindow_Get(s32);
void SaveManager_RequestAct02();
void * Scene_GetWarpRequest();
s32 SceneWarp_RequestFade(void *, s32, s32, s32);
void * TownSessionState_Get();
void * TownSessionState_GetTravelState(void *);
Unk_ov048_0225b278_Ent * PlayerActor_GetActor(s32);
void FieldPos_ToUnit(s32 *, s32 *, Unk_ov048_0225b278_Vec *);
void _ZN15TownTravelState7setModeEj(void *, s32);
void _ZN15TownTravelState8setAngleEi(void *, s32);
s32 Scene_SetSavedPos(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
void Camera_SaveView();
void SaveManager_RequestAct17();
void SaveManager_RequestAct14();
s32 SceneWarp_RequestAt(void *, s32, Unk_ov048_0225b278_Vec *, s32, s32, s32, s32);
s32 NetSession_GetLastSyncSlot();
void * PlayerData_GetBySessionSlot();
void _ZN15TalkWindowState13detachRequestEv(void *);
void SceneWarp_RequestExit(void *, s32);
void PlayerActor_RequestWalkTo(void *, s32, s32);
s32 PlayerActor_IsScriptedWalking(s32);
void _ZN10PlayerData5resetEv(void *);
void _ZN10MsgRequest11setFileNameEPKc(void *, const char *);
void _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(void *, void *);
void * _ZN10PlayerData11getPlayerIdEv(...);
void _ZN8PlayerId13getNameStringEP9MsgString(void *, void *);
s32 func_020a03c4();
void FieldInfoBalloon_ShowPleaseWait();
s32 Net_GetJoiningAid();
s32 PlayerActor_SetNetFollowPaused(s32, s32);
void PlayerActor_SetNoFaceTalkTarget(s32, s32);
void _ZN11NpcMoveCtrl14setTargetAngleEs(void *, s32);
s32 func_020a03e4();
s32 LostChild_IsKatieDue();
void * _ZN10PlayerData18getLostChildRecordEv(void *);
void * _ZN15LostChildRecord9getTownIdEv(void *);
s32 TownId_IsValid();
s32 memcmp(void *, void *, u32);
void _ZN15LostChildRecord14clearEscortingEv(void *);
BOOL _ZN15LostChildRecord11isEscortingEv(void *);
u8 * _ZN5Actor13findByProfileEjPS_(s32, s32);
s32 func_020e7518(void *);
s32 _ZN11NpcAnimCtrl13isPlayingAnimEiPv(void *, s32, void *);
s32 _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *, s32, s32, s32, u32, s32);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *);
s32 _ZN9NpcLookAt7disableEv(void *);
s32 ScreenTransition_StartFadeOut(s32, s32);
s32 Snd_FadeOutScene();
s32 _ZN13NpcActionCtrl9getActionEv(void *);
void _ZN13NpcActionCtrl12requestStandEjt(void *, s32, s32);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 Random_GlobalBelow(s32);
s32 Camera_SetMode15();
s32 Camera_SetMode14();
s32 PlayerActor_RequestTurnTo(s32, s32);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *);
s32 Camera_IsBlending();
void TalkRequest_SetTargetDone(void *);
s32 Net_WifiStartHost(s32);
s32 Comm_BeginHostSession();
void * TownId_GetName(void *);
void * _ZN8PlayerId7getNameEv(void *);
void func_020ea720(void *, s32);
Unk_ov048_Vec * PlayerActor_GetBodyPos(s32);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *, s32, s32, s32);
s32 _ZN10SpNpcActor8vfunc_0cEv();
s32 Scene_GetCurrent();
void TalkRequestFlags_ClearSceneHold();
s32 _ZN10SpNpcActor8vfunc_00Ev();
s32 _ZN15TownTravelState7getModeEv(void *);
s32 _ZN15TownTravelState8getAngleEv(void *);
void _ZN15TownTravelState9clearModeEv(void *);
void TalkRequestFlags_SetSceneHold();
s32 _ZN10SpNpcActor8vfunc_04Ev();
void TalkRequest_AddPlayerTalk6(void *, s32);
void _ZN14NpcMoveAnimSet11setWalkAnimEi(void *, s32);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *, s32);
BOOL SpNpcKatie_IsIdle();
BOOL TalkRequest_IsActive();
s32 _ZN11NpcFaceAnim12getMouthAnimEv(void *);
s32 Net_GetMyAid();
void Net_SetJoiningAid();
s32 Comm_GetSyncState();
void Comm_ClearSyncState();
BOOL Comm_RequestSync(u32);
void NetSession_SetSyncKind(u32);
void NetSession_SetActiveSyncKind(u32);
void * TownSessionState_GetKatieState(void *);
BOOL _ZN12Unk_02086f8411isFollowingEv(void *);
void _ZN15LostChildRecord12setEscortingEv(void *);
s32 NetSession_GetSyncMemberMask();
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
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 v);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();
    virtual void start(void *out);
    virtual void runDeferred();
    virtual void update();
    NpcActor *func_02015aac();
    void func_02015ab0(u32 p);
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
    u8 pad_04[0x1a];
    u8 msgIndex;
    u8 pad_1f[0x3c - 0x1f];
    Unk_ov048_Owner *unk_3c;
    u8 pad_40[0xaa - 0x40];
    u8 unk_aa;
    u8 pad_ab[0xac - 0xab];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void onMessageStart();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void onWindowClose();
    virtual void onTalkEnd();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    Unk_020d7710();
    virtual ~Unk_020d7710();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    void setSubSceneKind(u32 a, u32 b);
    void setSelectionList(u32 a, u32 b, u32 c);
    void openSubScene(s32 v);
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
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void start(void *out);
    virtual void update();
    virtual void onTaskDone();

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

    s32 topic;
    s32 script;
    u8 *owner;
    Unk_ov048_M0 unk_b8;
    Unk_ov048_M1 mail;
    Unk_ov048_M2 bbsNotice;
    Unk_ov048_M3 blancaFace;
    u8 wifiIdChanged;
    u8 saveDone;
    u8 syncPayload;
    u8 wifiPurpose;
    s16 homeAngle;
    u16 timer;
    u8 animTimer;
    u8 subStep;
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
    s32 curFrame;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
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
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 groups;
    u8 pad_20[0x44 - 0x20];
    u8 collisionEnabled;
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
MEMBER(NpcActionCtrl, 0x618 - 0x564);
MEMBER(Unk_02014254, 0x28);
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

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
    s32 position, positionY, positionZ;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[4];
    s16 moveAngleY;
    u8 pad_96[2];
    s32 speed;
    u8 pad_9c[0xea - 0x9c];
};

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();

    BOOL netIsTalkLocked();
    BOOL isNetOwner();
    void netSetSlotsIfOwner(u32 a, u32 b, u32 c, ...);
    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 v);
    s32 getAngleTo(NpcActor *other);
    void setCollisionRadius(s32 v);

    u16 unk_ea;
    ThreeLayerAnimModel model;
    Unk_0201ad3c moveAnimSet;
    NpcFaceAnim faceAnim;
    NpcAnimCtrl animCtrl;
    Unk_0201accc moveCtrl;
    Unk_0201a8bc obstacleProbe;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 lookAt;
    NpcSpeechState speechState;
    Unk_0201a13c emotionFx;
    CollisionState collisionState;
    Unk_02088d00 collider;
    Unk_020f4080 seEmitter;
    Unk_020135e4 footstepFx;
    NpcActionCtrl actionCtrl;
    Unk_02014254 talkCtrl;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual BOOL canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 getWalkAnimSpeedScale();

    SpNpcAnimHeapHandle animHeapHandle;
    s32 colliderRadius;
    s32 colliderHeight;
    u8 talkMelodyPlayed;
};

class SpNpcCopper : public SpNpcActor {
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
    virtual BOOL canPlayTalkMelody();

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
    SpNpcCopperTalk talk;
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
void _ZN16BlancaFaceRecord8destructEv(void *);
void _ZN16BlancaFaceRecord9constructEv(void *);
void AxBbsNotice_Destruct(void *);
void AxBbsNotice_Construct(void *);
void AxMail_Destruct(void *);
void AxMail_Construct(void *);
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
    if (SpNpcActor::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner((u8 *)this);
    setCollisionRadius(0x100);
    _ZN14NpcMoveAnimSet11setWalkAnimEi(&moveAnimSet, 0xd9);
    _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0xd8);
    if (Scene_GetCurrent() != 0xb) {
        footstepFx.unk_0b = 1;
    }
    if (Scene_GetCurrent() == 0xc) {
        collider.collisionEnabled = 0;
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_00() {
    if (SpNpcActor::vfunc_00() == 0) {
        return FALSE;
    }
    talk.homeAngle = rotY;
    collider.groups |= 2;
    if (_ZN11CommManager8isOnlineEv(gCommManager) && Scene_GetCurrent() == 0xb) {
        if (isNetOwner()) {
            SpNpcCopper_ChangeAct(this, 1);
        } else {
            SpNpcCopper_ChangeAct(this, 0xf);
        }
        return TRUE;
    }
    void *p = TownSessionState_GetTravelState(TownSessionState_Get());
    if (_ZN15TownTravelState7getModeEv(p) == 1 || _ZN15TownTravelState7getModeEv(p) == 2) {
        if (_ZN15TownTravelState7getModeEv(p) == 1) {
            talk.setTopic(6);
        } else {
            talk.setTopic(7);
        }
        SpNpcCopper_ChangeAct(this, 0);
        rotY = _ZN15TownTravelState8getAngleEv(p);
        moveAngleY = _ZN15TownTravelState8getAngleEv(p);
        _ZN15TownTravelState9clearModeEv(p);
    } else if (Scene_GetCurrent() == 0xd) {
        TalkRequestFlags_SetSceneHold();
        SpNpcCopper_ChangeAct(this, 9);
    } else if (Scene_GetCurrent() == 0xe) {
        TalkRequestFlags_SetSceneHold();
        SpNpcCopper_ChangeAct(this, 0xb);
    } else {
        SpNpcCopper_ChangeAct(this, 1);
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_0c() {
    if (SpNpcActor::vfunc_0c() == 0) {
        return FALSE;
    }
    if (Scene_GetCurrent() == 0xd || Scene_GetCurrent() == 0xe) {
        TalkRequestFlags_ClearSceneHold();
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
    _ZN13NpcActionCtrl12requestStandEjt(&actionCtrl, 1, data_020c6cc8);
    return TRUE;
}

BOOL SpNpcCopper::mainAct01() {
    checkPlayerAtGate();
    return TRUE;
}

BOOL SpNpcCopper::setupAct02() {
    NpcActor *o = talk.func_02015aac();
    s32 r = 0;
    if (o) {
        r = getAngleTo(o);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r, 0);
    return TRUE;
}

BOOL SpNpcCopper::mainAct02() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
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
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, talk.homeAngle, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcCopper::mainAct04() {
    if (checkPlayerAtGate()) {
        return TRUE;
    }
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            SpNpcCopper_ChangeAct(this, 1);
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct05() {
    talk.subStep = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct05() {
    Unk_ov048_Vec_Loc a;
    Unk_ov048_Vec_Loc b;
    PlayerData_GetCurrent();
    Unk_ov048_Vec *p = PlayerActor_GetBodyPos(4);
    *(Unk_ov048_Vec *)&a = *p;
    switch (talk.subStep) {
    case 0:
        if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
            talk.subStep = 1;
        }
        break;
    case 1:
        *(Unk_ov048_Vec *)&b = sCopperTurnBackPos;
        PlayerActor_RequestWalkTo(&b, 0x266, 4);
        talk.subStep = 3;
        break;
    case 3:
        if (PlayerActor_IsScriptedWalking(4) == 0) {
            TalkRequest_SetTargetDone(this);
        }
        break;
    }
    return TRUE;
}

// ---- bde0

BOOL SpNpcCopper::setupAct06() {
    talk.subStep = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct06() {
    u8 buf[0x14];
    void *h;
    switch (talk.subStep) {
    case 0:
        if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
            talk.subStep = 1;
        }
        break;
    case 1:
        if (Camera_IsBlending() == 0) {
            CheckInGate_Open();
            talk.timer = 0x3c;
            talk.subStep = 2;
            if (Net_GetMode() == 4) {
                Net_WifiStartHost(NetOverlay_AssertWifi());
                _ZN11CommManager12setErrorModeEj(gCommManager, 0);
                Comm_BeginHostSession();
            }
        }
        break;
    case 2:
        if (func_020e7500(&talk.timer) == 0) {
            u8 t = talk.msgIndex;
            if (t == 0x46 || t == 0x6c) {
                if (Net_GetMode() == 3) {
                    if (Net_PollConnected(NetOverlay_AssertAny()) != 0) {
                        TalkRequest_SetTargetDone(this);
                    }
                } else {
                    talk.startComm(1, 0);
                    h = PlayerData_GetCurrent();
                    MI_CpuCopy8(TownId_GetName(gSaveTownId), buf, 8);
                    MI_CpuCopy8(_ZN8PlayerId7getNameEv(_ZN10PlayerData11getPlayerIdEv(h)), buf + 8, 8);
                    buf[0x10] = 0;
                    NetOverlay_AssertWireless();
                    func_020ea720(buf, 0x11);
                    Comm_BeginHostSession();
                    TalkRequest_SetTargetDone(this);
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
    talk.subStep = 0;
    return TRUE;
}

BOOL SpNpcCopper::mainAct07() {
    switch (talk.subStep) {
    case 0:
        if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
            talk.subStep = 1;
        }
        break;
    case 1:
        if (Camera_IsBlending() == 0) {
            CheckInGate_Close();
            talk.timer = 0x3c;
            talk.subStep = 2;
        }
        break;
    case 2:
        if (func_020e7500(&talk.timer) == 0) {
            TalkRequest_SetTargetDone(this);
        }
        break;
    }
    return TRUE;
}

BOOL SpNpcCopper::act08Step0() {
    Unk_ov048_Vec v;
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        Camera_SetMode14();
        v = sCopperSendOffWalkPos;
        PlayerActor_RequestWalkTo(&v, 0x400, 4);
        PlayerActor_SetNoFaceTalkTarget(1, 4);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step1() {
    if (PlayerActor_IsScriptedWalking(4) == 0) {
        PlayerActor_RequestTurnTo((s32)0xffff8000, 4);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        talk.timer = (u8)(Random_GlobalBelow(5) + 5);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step2() {
    if (func_020e7500(&talk.timer) == 0) {
        u8 *base = _ZN5Actor13findByProfileEjPS_(0x73, 0);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(base + 0x564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act08Step3() {
    u8 *base = _ZN5Actor13findByProfileEjPS_(0x73, 0);
    u8 *r4 = base + 0x564;
    Unk_ov048_Vec v;
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl12requestStandEjt(&actionCtrl, 1, data_020c6cc8);
        }
    }
    if (_ZN13NpcActionCtrl9getActionEv(r4) == 3) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(r4)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(r4, 0, 1, 0, 0, 0, (s32)0xffffc000, 0, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 0) {
        if (_ZN13NpcActionCtrl9getActionEv(r4) == 0) {
            v = sCopperSendOffExitPos;
            PlayerActor_RequestWalkTo(&v, 0x666, 4);
            _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0x81, 1, data_020c6cc8, 0);
            talk.animTimer = Random_GlobalBelow(5) + 5;
            talk.timer = 0x16;
            Camera_SetMode15();
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
    if (func_020e7518(&talk.animTimer) == 0) {
        if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(r4, 0x81, r7) == 0) {
            if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(r4, 0x82, r7) == 0) {
                _ZN13NpcActionCtrl15requestPlayAnimEiijtt(r6, 1, 0x81, 1, data_020c6cc8, 0);
            }
        }
    }
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&animCtrl, 0x81, &moveAnimSet) != 0) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl) != 0) {
            _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(r4, 0x81, r7) != 0) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(r6) != 0) {
            _ZN13NpcActionCtrl15requestPlayAnimEiijtt(r6, 1, 0x82, 0, data_020c6cc8, 0);
        }
    }
    if (talk.timer == 2) {
        _ZN9NpcLookAt7disableEv(&lookAt);
        _ZN9NpcLookAt7disableEv(sp8);
    }
    if (func_020e7500(&talk.timer) == 0) {
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
    if (LostChild_IsKatieDue()) {
        r4 = _ZN10PlayerData18getLostChildRecordEv(h);
        _ZN15LostChildRecord9getTownIdEv(r4);
        if (TownId_IsValid()) {
            u16 *q = (u16 *)gSaveTownId;
            u16 *p = (u16 *)_ZN15LostChildRecord9getTownIdEv(r4);
            if (p[0] == q[0]) {
                if (memcmp(p + 1, q + 1, 8) == 0) {
                    goto skip;
                }
            }
        }
        _ZN15LostChildRecord14clearEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()));
    skip:
        if (_ZN15LostChildRecord11isEscortingEv(r4)) {
            _ZN12Unk_02097ff47setFlagEj(h, 0x36);
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
        SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct08() {
    talk.subStep = 0;
    _ZN11NpcMoveCtrl14setTargetAngleEs(&moveCtrl, talk.homeAngle);
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
    if (talk.subStep < 6) {
        if ((this->*tbl[talk.subStep])()) {
            talk.subStep++;
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::act09Step0() {
    Unk_ov048_Vec v;
    s32 a = Net_GetJoiningAid();
    if (Unk_ov048_0225b4e4_Is2()) {
        if (PlayerActor_SetNetFollowPaused(1, a)) {
            PlayerActor_SetNoFaceTalkTarget(1, 4);
            v = sCopperArrivalWalkPos;
            PlayerActor_RequestWalkTo(&v, 0x35c, a);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step1() {
    u8 buf[0x1c];
    void *h;
    void *o;
    s32 a = Net_GetJoiningAid();
    h = PlayerData_GetBySessionSlot();
    if (PlayerActor_IsScriptedWalking(a) == 0) {
        o = TalkWindow_Get(0);
        talk.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&talk, (const char *)sSpNpcCopperMsgKey);
        talk.msgIndex = 0x67;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &talk);
        _ZN11MsgString9BC1Ev(&buf[4]);
        _ZN8PlayerId13getNameStringEP9MsgString(_ZN10PlayerData11getPlayerIdEv(h), &buf[4]);
        _ZN15TalkWindowState7setSlotEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN11MsgString9BD1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step2() {
    void *o = TalkWindow_Get(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        if (func_020a03c4() == 0) {
            FieldInfoBalloon_ShowPleaseWait();
            return FALSE;
        }
        _ZN15TalkWindowState13detachRequestEv(o);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act09Step3() {
    SceneWarp_RequestExit(Scene_GetWarpRequest(), 1);
    return TRUE;
}

BOOL SpNpcCopper::setupAct09() {
    talk.subStep = 0;
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
    if (talk.subStep < 4) {
        if ((this->*tbl[talk.subStep])()) {
            talk.subStep++;
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
    NetSession_GetLastSyncSlot();
    h = PlayerData_GetBySessionSlot();
    if (Unk_ov048_0225b4e4_Is2()) {
        o = TalkWindow_Get(0);
        talk.vfunc_08();
        _ZN10MsgRequest11setFileNameEPKc(&talk, (const char *)sSpNpcCopperMsgKey);
        talk.msgIndex = 0x7b;
        _ZN15TalkWindowState13attachRequestEP14TalkMsgRequest(o, &talk);
        _ZN11MsgString9BC1Ev(&buf[4]);
        _ZN8PlayerId13getNameStringEP9MsgString(_ZN10PlayerData11getPlayerIdEv(h), &buf[4]);
        _ZN15TalkWindowState7setSlotEiPv(o, 1, &buf[4]);
        *(s32 *)((u8 *)o + 8) = 1;
        _ZN11MsgString9BD1Ev(&buf[4]);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep1() {
    s32 a = NetSession_GetLastSyncSlot();
    void *o = TalkWindow_Get(0);
    if (*(s32 *)((u8 *)o + 4) == 0) {
        Unk_ov048_Vec v;
        _ZN15TalkWindowState13detachRequestEv(o);
        v = sCopperDepartWalkPos;
        PlayerActor_RequestWalkTo(&v, 0x35c, a);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep2() {
    s32 a = NetSession_GetLastSyncSlot();
    void *b = PlayerData_GetBySessionSlot();
    if (PlayerActor_IsScriptedWalking(a) == 0) {
        _ZN10PlayerData5resetEv(b);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::act0BStep3() {
    SceneWarp_RequestExit(Scene_GetWarpRequest(), 1);
    return TRUE;
}

BOOL SpNpcCopper::setupAct0B() {
    talk.subStep = 0;
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
    if (talk.subStep < 4) {
        if ((this->*tbl[talk.subStep])() != 0) {
            talk.subStep++;
        }
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0C() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0C() {
    if (TalkWindow_Get(0)->state == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = TownSessionState_GetTravelState(TownSessionState_Get());
        e = PlayerActor_GetActor(4);
        Unk_ov048_0225b278_Vec *pv = &e->position;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->rotY;
        a = 0;
        b = 0;
        FieldPos_ToUnit(&a, &b, &v);
        _ZN15TownTravelState7setModeEj(h, 1);
        _ZN15TownTravelState8setAngleEi(h, rotY);
        Camera_SaveView();
        SaveManager_RequestAct14();
        SceneWarp_RequestAt(Scene_GetWarpRequest(), 0xc, &v, 0x800000, s, 2, 2);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0D() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0D() {
    if (TalkWindow_Get(0)->state == 5) {
        void *h;
        s32 a, b;
        s32 s;
        Unk_ov048_0225b278_Vec v;
        Unk_ov048_0225b278_Ent *e;
        h = TownSessionState_GetTravelState(TownSessionState_Get());
        e = PlayerActor_GetActor(4);
        Unk_ov048_0225b278_Vec *pv = &e->position;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        s = e->rotY;
        a = 0;
        b = 0;
        FieldPos_ToUnit(&a, &b, &v);
        _ZN15TownTravelState7setModeEj(h, 2);
        _ZN15TownTravelState8setAngleEi(h, rotY);
        Scene_SetSavedPos(Scene_GetWarpRequest(), 0xc, &v, 0x800000, s, a, b);
        Camera_SaveView();
        SaveManager_RequestAct17();
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2e, 2, 3);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0E() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0E() {
    if (TalkWindow_Get(0)->state == 5) {
        SaveManager_RequestAct02();
        SceneWarp_RequestFade(Scene_GetWarpRequest(), 0x2e, 2, 3);
        SpNpcCopper_ChangeAct(this, 3);
    }
    return TRUE;
}

BOOL SpNpcCopper::setupAct0F() {
    return TRUE;
}

BOOL SpNpcCopper::mainAct0F() {
    s32 a, b;
    if (isNetOwner() != 0) {
        a = 4;
        b = 4;
        s32 u;
        s32 x;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) != 0 && (x = a, u = gCommManager->myAid, x == u) && x == b) {
            netSetSlotsIfOwner(1, u, u);
            ((ActorTalkRequest *)&talk)->vfunc_08();
            talk.func_02015ab0(getPlayerActor(4));
            SpNpcCopper_ChangeAct(this, 2);
        } else if (NetArea_IsLocalOwner() != 0 && b == 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, 4);
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
    if (isNetOwner() != 0) {
        a = 4;
        b = 4;
        if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b) != 0) {
            if (a == 4) {
                if (NetArea_IsLocalOwner() != 0) {
                    netSetSlotsIfOwner(1, gCommManager->myAid, 4);
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
    AxMail_Construct(&mail);
    AxBbsNotice_Construct(&bbsNotice);
    _ZN16BlancaFaceRecord9constructEv(&blancaFace);
}

SpNpcCopperTalk::~SpNpcCopperTalk() {
    _ZN16BlancaFaceRecord8destructEv(&blancaFace);
    AxBbsNotice_Destruct(&bbsNotice);
    AxMail_Destruct(&mail);
    _ZN7PatternD1Ev(&unk_b8);
}

void SpNpcCopperTalk::attachOwner(u8 *p) {
    vfunc_08();
    owner = p;
    topic = 0xb;
}

void SpNpcCopperTalk::setTopic(s32 v) {
    topic = v;
}

s32 SpNpcCopperTalk::getTopic() {
    return topic;
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
    setNumberSlot((s32)q1, 5, 4, 6, 0);
    setNumberSlot((s32)q2, 8, 4, 6, 0);
    setNumberSlot((s32)v - (s32)(q2 * 10000) - (s32)m1, 9, 4, 6, 0);
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

void SpNpcCopperTalk::start(void *arg) {
    Unk_ov048_0225ae04_Out *out = (Unk_ov048_0225ae04_Out *)arg;
    static Unk_ov048_0225ae04_Row tbl[11] = {
        {sSpNpcCopperMsgKey, 0}, {sSpNpcCopperMsgKey, 4}, {sSpNpcCopperMsgKey, 5},
        {sSpNpcCopperMsgKey, 6}, {sSpNpcCopperMsgKey, 7}, {sSpNpcCopperMsgKey, 0xa},
        {sSpNpcCopperMsgKey, 0x68}, {sSpNpcCopperMsgKey, 0xd}, {sSpNpcCopperSequence4Key, 9},
        {sSpNpcCopperMsgKey, 0x47}, {sSpNpcCopperMsgKey, 0x48},
    };
    void *h;
    saveDone = 0;
    wifiIdChanged = 0;
    h = PlayerData_GetCurrent();
    if (GameStart_IsActive() != 0) {
        setTopic(8);
    } else if (getTopic() == 6) {
        if (CheckInGate_IsOpen() == 0) {
            CheckInGate_Open();
        }
    } else if (getTopic() != 7 && getTopic() != 9 && getTopic() != 0xa) {
        if (Talk_IsInOwnTown() == 0) {
            setTopic(5);
        } else if (_ZN12Unk_02097ff48testFlagEj(h, 5) == 0) {
            setTopic(0);
            _ZN12Unk_02097ff47setFlagEj(h, 5);
        } else {
            s32 t = Clock_GetTimeOfDay() + 1;
            setTopic(t);
        }
    }
    if (topic >= 0 && topic < 0xb) {
        out->msgIndex = tbl[topic].id;
        out->msgKey = tbl[topic].name;
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
    SpNpcCopper_ChangeAct(owner, 7);
    Comm_ResetNetSession();
    if (Net_GetMode() == 3 || Net_GetMode() == 4) {
        setScript(0x14);
    } else {
        endComm();
    }
}

void SpNpcCopperTalk::lockWindow(s32 flag) {
    void *p = unk_3c;
    if (flag != 0) {
        _ZN15TalkWindowState12showBusyIconEv(p, 1);
    } else {
        _ZN15TalkWindowState12showBusyIconEv(p, 0);
    }
    _ZN15TalkWindowState11lockAdvanceEv(p);
}

void SpNpcCopperTalk::unlockWindow() {
    void *p = unk_3c;
    _ZN15TalkWindowState12hideBusyIconEv(p);
    _ZN15TalkWindowState13unlockAdvanceEv(p);
}

void SpNpcCopperTalk::startTurnBackAct() {
    SpNpcCopper_ChangeAct(owner, 5);
}

void SpNpcCopperTalk::startOpenGateAct() {
    SpNpcCopper_ChangeAct(owner, 6);
}

void SpNpcCopperTalk::startWifiLogin() {
    lockWindow(1);
    startComm(4, 2);
    *(u16 *)(owner + 0xe3e) = 0x960;
    setScript(0xa);
}

void SpNpcCopperTalk::startTownSearch() {
    lockWindow(1);
    startComm(2, 2);
    *(u16 *)(owner + 0xe3e) = 200;
    setScript(1);
}

void SpNpcCopperTalk::openTownList() {
    setSelectionList((u32)unk_b8.unk_2f4, (u32)unk_b8.unk_2e0, 0);
    openSubScene(4);
    setScript(3);
}

void SpNpcCopperTalk::openFriendList() {
    setSubSceneKind(0x3c, 0);
    openSubScene(2);
    setScript(2);
}

void SpNpcCopperTalk::startLocalVisit() {
    lockWindow(1);
    if (Net_GetMode() == 2) {
        _ZN11CommManager12setErrorModeEj(gCommManager, 1);
    } else {
        startComm(2, 1);
    }
    *(u16 *)(owner + 0xe3e) = 200;
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
        *(u16 *)(owner + 0xe3e) = 0x960;
        setScript(5);
    }
}

void SpNpcCopperTalk::startSendOffAct() {
    SpNpcCopper_ChangeAct(owner, 8);
}

void SpNpcCopperTalk::startFarewellAct() {
    SpNpcCopper_ChangeAct(owner, 0xa);
}

void SpNpcCopperTalk::showAnythingElseMenu() {
    u8 buf[2];
    buf[0] = getAnythingElseMsg();
    _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, buf, sSpNpcCopperMsgKey);
}

void SpNpcCopperTalk::showWifiIdSavedResult() {
    u8 buf[2];
    if (wifiIdChanged != 0) {
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
    *(u16 *)(owner + 0xe3e) = 200;
    setScript(8);
}
extern "C" const Unk_ov048_Vec sCopperGateCheckPos = {0x10000, 0x0, 0x10000};

extern "C" char sSpNpcCopperKey[] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'a', 't', 'e', 'k', 'e', 'e', 'p', 'e', 'r', 0};

extern "C" void *sSpNpcCopperModelPathPtr = sSpNpcCopperModelPath;

extern "C" const Unk_ov048_Vec sCopperTurnBackPos = {0x10000, 0x0, 0x11800};

extern "C" const Unk_ov048_Vec sCopperSendOffExitPos = {0x10000, 0x0, 0x2000};

void SpNpcCopperTalk::onMessageEnd() {
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
    u8 *p = &msgIndex;
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
        switch (wifiPurpose) {
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
        wifiPurpose = 0;
        checkWifiReady();
    }
}

void SpNpcCopperTalk::onChoiceVisitMethod(s32 p) {
    if (p == 1) {
        wifiPurpose = 2;
        checkWifiReady();
    } else if (p == 2) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::onChoiceHostMethod(s32 p) {
    if (p == 1) {
        wifiPurpose = 1;
        checkWifiReady();
    } else if (p == 2) {
        u8 v = getAnythingElseMsg();
        _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v, sSpNpcCopperMsgKey);
    }
}

void SpNpcCopperTalk::checkWifiReady() {
    u8 v0, v1, v2, v3, v4;
    if (wifiPurpose != 0 && hasFriends() == 0) {
        if (wifiPurpose == 2) {
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
            v2 = sCopperWifiStartMsgs[wifiPurpose];
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v2, sSpNpcCopperMsgKey);
        } else {
            wifiIdChanged = 1;
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
        if (_ZN12Unk_02097ff48testFlagEj(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = gCommManager;
            if (_ZN11CommManager8isOnlineEv(g) && _ZN11CommManager7isMyAidEj(g, 0)) {
                id = 0x50;
            } else if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff48testFlagEj(h, 1)) {
            id = 0xe;
        } else {
            id = getInviteOrCloseGateMsg();
        }
        break;
    case 2:
        if (_ZN11CommManager7isMyAidEj(gCommManager, 0) == 0) {
            if (_ZN12Unk_02097ff48testFlagEj(h, 1)) {
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
        if (_ZN12Unk_02097ff48testFlagEj(h, 1)) {
            id = 8;
        } else {
            Unk_ov048_Global *g = gCommManager;
            if (_ZN11CommManager8isOnlineEv(g) && _ZN11CommManager7isMyAidEj(g, 0)) {
                id = 0x50;
            } else if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid)) {
                id = 0x51;
            } else {
                id = 0x52;
            }
        }
        break;
    case 1:
        if (_ZN12Unk_02097ff48testFlagEj(h, 1)) {
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
        if (saveDone != 0) {
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
        CheckInGate_Close();
        Comm_ResetNetSession();
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
        SpNpcCopper_ChangeAct(owner, 0xe);
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

void SpNpcCopperTalk::onChoice() {
    if (GameStart_IsActive() == 0) {
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
        u8 *p = &msgIndex;
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

void SpNpcCopperTalk::update() {
    if (sSpNpcCopperTalkScripts[script].flag != 0) {
        if (sSpNpcCopperTalkScripts[script].f) {
            (this->*sSpNpcCopperTalkScripts[script].f)();
        }
    }
}

void SpNpcCopperTalk::onTaskDone() {
    if (sSpNpcCopperTalkScripts[script].flag == 0) {
        if (sSpNpcCopperTalkScripts[script].f) {
            (this->*sSpNpcCopperTalkScripts[script].f)();
        }
    }
}

// Tiny setter last so it is not inlined into callers.
void SpNpcCopperTalk::setScript(s32 s) { script = s; }

void SpNpcCopperTalk::waitWifiLogin() {
    Net_PollConnected(NetOverlay_AssertAny());
    if (checkWifiLoginError() == 0) {
        if (Net_GetWifiFriendList(NetOverlay_AssertWifi()) != 0) {
            if (wifiPurpose == 0) {
                setScript(0x13);
            } else {
                setScript(script + 1);
            }
        }
    }
}

// ---- a000

void SpNpcCopperTalk::startMailDownload() {
    if (AxMail_DownloadMail()) {
        setScript(script + 1);
    } else {
        setScript(script + 2);
    }
}

void SpNpcCopperTalk::pollMailDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(script + 1);
    } else if (AxMail_PollMail()) {
        setScript(script + 1);
    }
}

void SpNpcCopperTalk::startBbsDownload() {
    if (AxMail_DownloadBbs()) {
        setScript(script + 1);
    } else {
        setScript(script + 2);
    }
}

void SpNpcCopperTalk::pollBbsDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(script + 1);
    } else if (AxMail_PollBbs()) {
        setScript(script + 1);
    }
}

void SpNpcCopperTalk::startGameStatsUpload() {
    if (GameStats_Upload()) {
        setScript(script + 1);
    } else {
        setScript(script + 2);
    }
}

void SpNpcCopperTalk::pollGameStatsUpload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(script + 1);
    } else if (GameStats_PollUpload()) {
        setScript(script + 1);
    }
}

void SpNpcCopperTalk::startGameStatsDownload() {
    if (GameStats_Download()) {
        setScript(script + 1);
    } else {
        setScript(script + 2);
    }
}

void SpNpcCopperTalk::pollGameStatsDownload() {
    if (isSkippableNetError()) {
        func_020ea72c();
        setScript(script + 1);
    } else if (GameStats_PollDownload()) {
        setScript(script + 1);
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
    if (msgIndex == 0x62) {
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
            *(u16 *)(owner + 0xe3e) = 0x960;
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
        if (wifiPurpose == 0 || wifiIdChanged != 0) {
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
    u32 A[0x1c / 4];
    u32 B[0x18 / 4];
    u32 C[0x1c / 4];
    u32 D[0x1c / 4];
    if (checkScanTimeout() == 0) {
      n = func_020eae78(Comm_SendEmpty());
      if (n > 0) {
        arr = (void **)Net_GetScanResults(NetOverlay_AssertWireless());
        _ZN11MsgString9CC2Ev(A);
        _ZN15EncodedString8BC2Ev(B);
        _ZN11MsgString9BC1Ev(C);
        _ZN14EncodedString8C1Ev(D);
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
                        EncodedString_SetRaw(B, &buf[1], 8);
                        _ZN9MsgString11fromEncodedEP13EncodedStringii(A, B, 0, 0);
                        EncodedString_SetRaw(D, &buf[9], 8);
                        _ZN9MsgString11fromEncodedEP13EncodedStringii(C, D, 0, 0);
                        _ZN15TalkWindowState7setSlotEiPv(r7, 3, A);
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
        _ZN14EncodedString8D1Ev(D);
        _ZN11MsgString9BD1Ev(C);
        _ZN15EncodedString8BD1Ev(B);
        _ZN11MsgString9CD1Ev(A);
    }
    }
}

void SpNpcCopperTalk::onFriendListClosed() {
    if (MenuCtrl_IsResultOk()) {
        s32 r5 = MenuCtrl_GetIndex();
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
    if (MenuCtrl_IsResultOk()) {
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
    if (((SpNpcCopper *)owner)->canStartSave()) {
        SaveManager_RequestAct13();
        setScript(0x16);
    } else {
        SpNpcKatie_ResetAct();
    }
}

void SpNpcCopperTalk::waitSaveDone() {
    void *t = unk_3c;
    if (SaveManager_HasAct13Failed()) {
        u8 a;
        unlockWindow();
        a = 0xa;
        _ZN15TalkWindowState14setNextMessageEPhPv(t, &a, (void *)"sp_etc_sequence2");
        setScript(0);
    } else if (SaveManager_IsIdleAfterAct13()) {
        u8 b;
        saveDone = 1;
        unlockWindow();
        b = unk_aa;
        _ZN15TalkWindowState14setNextMessageEPhPv(t, &b, sSpNpcCopperMsgKey);
        SpNpcKatie_ChangeAct05();
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
    if (func_020e7500(owner + 0xe3e) == 0) {
        s32 r = getConnectErrorMsg();
        showErrorAndAbort(r, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkFindTownTimeout() {
    if (func_020e7500(owner + 0xe3e) == 0) {
        showErrorAndAbort(0x65, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopperTalk::checkWifiLoginError() {
    if (func_020e7500(owner + 0xe3e) == 0) {
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
    if (func_020e7500(owner + 0xe3e) == 0) {
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
                            *(u16 *)(owner + 0xe3e) = 200;
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
            *(u16 *)((u8 *)owner + 0xe3e) = 200;
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
        syncPayload = 0;
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
        if (_ZN12Unk_02086f8411isFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get()))) {
            if (_ZN15LostChildRecord11isEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()))) {
                _ZN15LostChildRecord14clearEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()));
            }
        }
    } else {
        s32 t = Comm_GetSyncState();
        if (t == 5) {
            if (_ZN12Unk_02086f8411isFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get()))) {
                if (_ZN15LostChildRecord11isEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent())) == 0) {
                    _ZN15LostChildRecord12setEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()));
                }
            }
            if (CommSend_PlayerData(&syncPayload, NetSession_GetSyncMemberMask())) {
                _ZN11CommManager12setErrorModeEj(gCommManager, 0);
                NetSession_SetSyncKind(0);
                NetSession_SetActiveSyncKind(0);
                Net_GetMyAid();
                Net_SetJoiningAid();
                Comm_ClearSyncState();
                unk_3c->unk_14 = 0;
                unlockWindow();
                setScript(0);
                SpNpcCopper_ChangeAct(owner, 0xc);
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
            SpNpcCopper_ChangeAct(owner, 0xd);
            NetSession_SetSyncKind(1);
            NetSession_SetActiveSyncKind(1);
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
    switch (wifiPurpose) {
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
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) || netIsTalkLocked()) {
        return FALSE;
    }
    return TRUE;
}

BOOL SpNpcCopper::vfunc_58() {
    if (footstepFx.unk_0b != 0) {
        return TRUE;
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) || netIsTalkLocked()) {
        return FALSE;
    }
    return TRUE;
}

void SpNpcCopper::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        footstepFx.unk_08 = arg;
        if (arg != 4) {
            netSetSlotsIfOwner(1, gCommManager->myAid, arg);
            SpNpcCopper_ChangeAct(this, 0x10);
        } else if (isNetOwner()) {
            s32 g = gCommManager->myAid;
            netSetSlotsIfOwner(1, g, g);
            SpNpcCopper_ChangeAct(this, 0x10);
        }
        break;
    case 1: {
        ((ActorTalkRequest *)&talk)->vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        SpNpcCopper_ChangeAct(this, 2);
        break;
    }
    case 0:
        footstepFx.unk_08 = arg;
        if (arg != 4 && arg != gCommManager->myAid) {
            netSetSlotsIfOwner(1, arg, arg);
            SpNpcCopper_ChangeAct(this, 0x11);
        } else if (isNetOwner()) {
            s32 g = gCommManager->myAid;
            netSetSlotsIfOwner(1, g, g);
            ((ActorTalkRequest *)&talk)->vfunc_08();
            talk.func_02015ab0(getPlayerActor(4));
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
            if (NetArea_IsLocalOwner()) {
                netSetSlotsIfOwner(1, gCommManager->myAid, 4);
                SpNpcCopper_ChangeAct(this, 4);
            } else {
                netSetSlotsIfOwner(1, 4, gCommManager->myAid);
                SpNpcCopper_ChangeAct(this, 0xf);
            }
        }
        talk.setTopic(0xb);
        break;
    case 4:
        if (netIsTalkLocked()) {
            if (isNetOwner()) {
                a = 4;
                b = 4;
                if (_ZN8NpcActor11netGetSlotsEii(this, &a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        netSetSlotsIfOwner(1, gCommManager->myAid, 4);
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
    if (Scene_GetCurrent() == 0x2f) {
        return FALSE;
    }
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    if (_ZN11CommManager12isSlotActiveEi(gCommManager, gCommManager->myAid) == 0) {
        return FALSE;
    }
    Unk_ov048_Vec *p = PlayerActor_GetBodyPos(4);
    *(Unk_ov048_Vec *)&v = *p;
    if (v.z <= sCopperGateCheckPos.z) {
        PlayerData_GetCurrent();
        if (_ZN11CommManager8isOnlineEv(g)) {
            talk.setTopic(9);
        } else {
            talk.setTopic(10);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL SpNpcCopper::canPlayTalkMelody() {
    if (Scene_GetCurrent() == 0xc) {
        return FALSE;
    }
    return SpNpcActor::canPlayTalkMelody();
}

// ---- 8de0

BOOL SpNpcCopper::canStartSave() {
    if (_ZN11NpcFaceAnim12getMouthAnimEv(&faceAnim) == 0xba && SpNpcKatie_IsIdle() && talk.unk_3c->state == 2) {
        return TRUE;
    }
    return FALSE;
}



